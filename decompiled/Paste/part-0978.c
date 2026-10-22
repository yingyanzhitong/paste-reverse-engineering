/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100a757a8 | FUN_100a757a8 */

void FUN_100a757a8(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar4 = *(long *)(unaff_x22 + 0xd8);
  lVar5 = *(long *)(lVar4 + 0x10);
  *(long *)(unaff_x22 + 0xf0) = lVar5;
  if (lVar5 != 0) {
    lVar5 = *(long *)(unaff_x22 + 0xe0);
    *(undefined8 *)(unaff_x22 + 0xf8) = 0;
    uVar7 = *(undefined8 *)(lVar4 + 0x20);
    *(undefined8 *)(unaff_x22 + 0x100) = uVar7;
    uVar6 = *(undefined8 *)(lVar4 + 0x28);
    *(undefined8 *)(unaff_x22 + 0x108) = uVar6;
    _swift_bridgeObjectRetain(uVar6);
    uVar9 = *(undefined8 *)(lVar5 + 0x18);
    uVar8 = *(undefined8 *)(lVar5 + 0x10);
    uVar11 = *(undefined8 *)(lVar5 + 0x28);
    uVar10 = *(undefined8 *)(lVar5 + 0x20);
    uVar12 = *(undefined8 *)(lVar5 + 0x29);
    *(undefined8 *)(unaff_x22 + 0x31) = *(undefined8 *)(lVar5 + 0x31);
    *(undefined8 *)(unaff_x22 + 0x29) = uVar12;
    *(undefined8 *)(unaff_x22 + 0x18) = uVar9;
    *(undefined8 *)(unaff_x22 + 0x10) = uVar8;
    *(undefined8 *)(unaff_x22 + 0x28) = uVar11;
    *(undefined8 *)(unaff_x22 + 0x20) = uVar10;
    puVar1 = &DAT_100f2dab8;
    _swift_allocObject(&DAT_100f2dab8,0x50,7);
    *(undefined **)(unaff_x22 + 0x110) = puVar1;
    uVar11 = *(undefined8 *)(lVar5 + 0x18);
    uVar10 = *(undefined8 *)(lVar5 + 0x10);
    uVar9 = *(undefined8 *)(lVar5 + 0x28);
    uVar8 = *(undefined8 *)(lVar5 + 0x20);
    uVar12 = *(undefined8 *)(lVar5 + 0x29);
    *(undefined8 *)(puVar1 + 0x31) = *(undefined8 *)(lVar5 + 0x31);
    *(undefined8 *)(puVar1 + 0x29) = uVar12;
    *(undefined8 *)(puVar1 + 0x18) = uVar11;
    *(undefined8 *)(puVar1 + 0x10) = uVar10;
    *(undefined8 *)(puVar1 + 0x28) = uVar9;
    *(undefined8 *)(puVar1 + 0x20) = uVar8;
    *(undefined8 *)(puVar1 + 0x40) = uVar7;
    *(undefined8 *)(puVar1 + 0x48) = uVar6;
    _swift_bridgeObjectRetain(uVar6);
    FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x70);
    plVar2 = (long *)0xa0;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x118) = plVar2;
    puVar3 = &DAT_100ff69e0;
    FUN_1000f7830(&DAT_100ff69e0,&DAT_100c91200);
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_100a758dc;
    FUN_100912dec(unaff_x22 + 0xd0,FUN_100a63ecc,puVar1,puVar3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100a758d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a758dc | FUN_100a758dc */

void FUN_100a758dc(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x120) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x118));
  _swift_release(*(undefined8 *)(lVar2 + 0x110));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a75948;
  }
  else {
    pcVar1 = FUN_100a75aa4;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a75948 | FUN_100a75948 */

void FUN_100a75948(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x22;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x108);
  lVar6 = *(long *)(unaff_x22 + 0xe8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xd0);
  *(undefined8 *)(unaff_x22 + 0x128) = uVar5;
  uVar8 = *(undefined8 *)(lVar6 + 0x31);
  uVar7 = *(undefined8 *)(lVar6 + 0x29);
  uVar11 = *(undefined8 *)(lVar6 + 0x10);
  uVar10 = *(undefined8 *)(lVar6 + 0x28);
  uVar9 = *(undefined8 *)(lVar6 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(lVar6 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x40) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x58) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x61) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x59) = uVar7;
  puVar3 = &DAT_100f2dae0;
  _swift_allocObject(&DAT_100f2dae0,0x58,7);
  *(undefined **)(unaff_x22 + 0x130) = puVar3;
  uVar10 = *(undefined8 *)(lVar6 + 0x18);
  uVar9 = *(undefined8 *)(lVar6 + 0x10);
  uVar8 = *(undefined8 *)(lVar6 + 0x28);
  uVar7 = *(undefined8 *)(lVar6 + 0x20);
  uVar11 = *(undefined8 *)(lVar6 + 0x29);
  *(undefined8 *)(puVar3 + 0x31) = *(undefined8 *)(lVar6 + 0x31);
  *(undefined8 *)(puVar3 + 0x29) = uVar11;
  *(undefined8 *)(puVar3 + 0x18) = uVar10;
  *(undefined8 *)(puVar3 + 0x10) = uVar9;
  *(undefined8 *)(puVar3 + 0x28) = uVar8;
  *(undefined8 *)(puVar3 + 0x20) = uVar7;
  *(undefined8 *)(puVar3 + 0x40) = uVar5;
  *(undefined8 *)(puVar3 + 0x48) = uVar1;
  *(undefined8 *)(puVar3 + 0x50) = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  FUN_100a4c06c(unaff_x22 + 0x40,unaff_x22 + 0xa0);
  plVar4 = (long *)0xa0;
  _swift_bridgeObjectRetain(uVar5);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x138) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100a75a38;
  FUN_100912dec();
  return;
}



/* Address: 0x100a75a38 | FUN_100a75a38 */

void FUN_100a75a38(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x140) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x138));
  _swift_release(*(undefined8 *)(lVar2 + 0x130));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a75ae0;
  }
  else {
    pcVar1 = FUN_100a75c34;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a75aa4 | FUN_100a75aa4 */

void FUN_100a75aa4(void)

{
  long unaff_x22;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x108));
                    /* WARNING: Could not recover jumptable at 0x000100a75adc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a75ae0 | FUN_100a75ae0 */

void FUN_100a75ae0(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x108);
  lVar1 = *(long *)(unaff_x22 + 0xf0);
  lVar2 = *(long *)(unaff_x22 + 0xf8);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x128));
  _swift_bridgeObjectRelease(uVar6);
  if (lVar2 + 1 == lVar1) {
                    /* WARNING: Could not recover jumptable at 0x000100a75b44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar1 = *(long *)(unaff_x22 + 0xf8) + 1;
  *(long *)(unaff_x22 + 0xf8) = lVar1;
  lVar2 = *(long *)(unaff_x22 + 0xe0);
  lVar1 = *(long *)(unaff_x22 + 0xd8) + lVar1 * 0x10;
  uVar7 = *(undefined8 *)(lVar1 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x100) = uVar7;
  uVar6 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x108) = uVar6;
  _swift_bridgeObjectRetain(uVar6);
  uVar9 = *(undefined8 *)(lVar2 + 0x18);
  uVar8 = *(undefined8 *)(lVar2 + 0x10);
  uVar11 = *(undefined8 *)(lVar2 + 0x28);
  uVar10 = *(undefined8 *)(lVar2 + 0x20);
  uVar12 = *(undefined8 *)(lVar2 + 0x29);
  *(undefined8 *)(unaff_x22 + 0x31) = *(undefined8 *)(lVar2 + 0x31);
  *(undefined8 *)(unaff_x22 + 0x29) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x18) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x10) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar10;
  puVar3 = &DAT_100f2dab8;
  _swift_allocObject(&DAT_100f2dab8,0x50,7);
  *(undefined **)(unaff_x22 + 0x110) = puVar3;
  uVar11 = *(undefined8 *)(lVar2 + 0x18);
  uVar10 = *(undefined8 *)(lVar2 + 0x10);
  uVar9 = *(undefined8 *)(lVar2 + 0x28);
  uVar8 = *(undefined8 *)(lVar2 + 0x20);
  uVar12 = *(undefined8 *)(lVar2 + 0x29);
  *(undefined8 *)(puVar3 + 0x31) = *(undefined8 *)(lVar2 + 0x31);
  *(undefined8 *)(puVar3 + 0x29) = uVar12;
  *(undefined8 *)(puVar3 + 0x18) = uVar11;
  *(undefined8 *)(puVar3 + 0x10) = uVar10;
  *(undefined8 *)(puVar3 + 0x28) = uVar9;
  *(undefined8 *)(puVar3 + 0x20) = uVar8;
  *(undefined8 *)(puVar3 + 0x40) = uVar7;
  *(undefined8 *)(puVar3 + 0x48) = uVar6;
  _swift_bridgeObjectRetain(uVar6);
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x70);
  plVar4 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x118) = plVar4;
  puVar5 = &DAT_100ff69e0;
  FUN_1000f7830(&DAT_100ff69e0,&DAT_100c91200);
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100a758dc;
  FUN_100912dec(unaff_x22 + 0xd0,FUN_100a63ecc,puVar3,puVar5);
  return;
}



/* Address: 0x100a75c34 | FUN_100a75c34 */

void FUN_100a75c34(void)

{
  long unaff_x22;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x128));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x108));
                    /* WARNING: Could not recover jumptable at 0x000100a75c74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a75c78 | FUN_100a75c78 */

void FUN_100a75c78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x280) = param_8;
  *(undefined8 *)(unaff_x22 + 0x1c0) = param_6;
  *(undefined8 *)(unaff_x22 + 0x1c8) = param_7;
  *(undefined8 *)(unaff_x22 + 0x1b0) = param_4;
  *(undefined8 *)(unaff_x22 + 0x1b8) = param_5;
  *(undefined8 *)(unaff_x22 + 0x1a0) = param_2;
  *(undefined8 *)(unaff_x22 + 0x1a8) = param_3;
  *(undefined8 *)(unaff_x22 + 0x198) = param_1;
  _swift_task_switch(FUN_100a75ca0,0,0);
  return;
}



/* Address: 0x100a75ca0 | FUN_100a75ca0 */

void FUN_100a75ca0(void)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x1c0);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x1b8);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x1c8);
  *(undefined1 *)(unaff_x22 + 0x28) = *(undefined1 *)(unaff_x22 + 0x280);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x1a0);
  *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0x1b0);
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0x1a8);
  plVar1 = (long *)0xb0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x1d0) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100a75d48;
  FUN_100a970b4(*(undefined8 *)(unaff_x22 + 0x198),1,&UNK_100c91fb0,unaff_x22 + 0x10,
                *(undefined8 *)(unaff_x22 + 0x1c8),*(undefined1 *)(unaff_x22 + 0x280));
  return;
}



/* Address: 0x100a75d48 | FUN_100a75d48 */

void FUN_100a75d48(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x1d8) = param_1;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x1d0));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100a75d94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
  _swift_task_switch(FUN_100a75db8,0,0);
  return;
}



/* Address: 0x100a75db8 | FUN_100a75db8 */

void FUN_100a75db8(void)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined1 uVar7;
  code *pcVar8;
  long lVar9;
  char *pcVar10;
  undefined *puVar11;
  _StringGuts _Var12;
  void *pvVar13;
  void *in_x3;
  ulong uVar14;
  ulong uVar15;
  undefined1 *puVar16;
  char *pcVar17;
  char *pcVar18;
  undefined8 *puVar19;
  undefined *puVar20;
  long unaff_x22;
  undefined8 uVar21;
  undefined8 *puVar22;
  long *plVar23;
  int *piVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  String SVar38;
  String SVar39;
  
  lVar9 = *(long *)(unaff_x22 + 0x1d8);
  uVar14 = *(ulong *)(lVar9 + 0x10);
  *(ulong *)(unaff_x22 + 0x1e0) = uVar14;
  if (uVar14 != 0) {
    uVar15 = 0;
    puVar22 = (undefined8 *)(lVar9 + 0x30);
    do {
      *(ulong *)(unaff_x22 + 0x1e8) = uVar15;
      if (*(ulong *)(lVar9 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x100a7630c);
        (*pcVar8)();
      }
      pcVar17 = (char *)puVar22[-2];
      *(char **)(unaff_x22 + 0x1f0) = pcVar17;
      puVar20 = (undefined *)puVar22[-1];
      *(undefined **)(unaff_x22 + 0x1f8) = puVar20;
      pcVar18 = (char *)*puVar22;
      *(char **)(unaff_x22 + 0x200) = pcVar18;
      if (pcVar17 != (char *)0x0) {
        uVar1 = (uint)puVar20 & 0xff;
        if (uVar1 == 5) {
          uVar7 = *(undefined1 *)(unaff_x22 + 0x280);
          uVar21 = *(undefined8 *)(unaff_x22 + 0x1c8);
          _swift_bridgeObjectRetain_n(pcVar17,2);
          FUN_100a7c25c(pcVar17,puVar20,pcVar18);
          puVar20 = &DAT_100f2dbd0;
          _swift_allocObject(&DAT_100f2dbd0,0x31,7);
          *(undefined **)(unaff_x22 + 0x230) = puVar20;
          *(undefined8 *)(puVar20 + 0x10) = uVar21;
          puVar20[0x18] = uVar7;
          *(char **)(puVar20 + 0x20) = pcVar17;
          *(char **)(puVar20 + 0x28) = pcVar18;
          puVar20[0x30] = 0;
          plVar23 = (long *)0xa0;
          _swift_bridgeObjectRetain(pcVar17);
          _swift_retain(uVar21);
          _swift_bridgeObjectRetain(pcVar18);
          _swift_task_alloc();
          *(long **)(unaff_x22 + 0x238) = plVar23;
          *plVar23 = unaff_x22;
          plVar23[1] = (long)FUN_100a769dc;
        }
        else {
          if (uVar1 == 4) {
            _swift_bridgeObjectRetain_n(pcVar17,2);
            FUN_100a7c25c(pcVar17,puVar20,pcVar18);
            plVar23 = (long *)0x290;
            _swift_task_alloc();
            *(long **)(unaff_x22 + 600) = plVar23;
            *plVar23 = unaff_x22;
            plVar23[1] = (long)FUN_100a76b2c;
            FUN_100a75c78(pcVar17,pcVar18,*(undefined8 *)(unaff_x22 + 0x1a8),
                          *(undefined8 *)(unaff_x22 + 0x1b0),*(undefined8 *)(unaff_x22 + 0x1b8),
                          *(undefined8 *)(unaff_x22 + 0x1c0),*(undefined8 *)(unaff_x22 + 0x1c8),
                          *(undefined1 *)(unaff_x22 + 0x280));
            return;
          }
          if (((ulong)puVar20 & 0xff) != 0) {
            *(undefined8 *)(unaff_x22 + 0x188) = 0;
            *(undefined8 *)(unaff_x22 + 400) = 0xe000000000000000;
            _swift_bridgeObjectRetain(pcVar17);
            _Var12.unknown = puVar20;
            FUN_100a7c25c();
            Swift::_StringGuts::grow(0x5f,_Var12);
            *(undefined8 *)(unaff_x22 + 0x178) = *(undefined8 *)(unaff_x22 + 0x188);
            *(undefined8 *)(unaff_x22 + 0x180) = *(undefined8 *)(unaff_x22 + 400);
            pvVar13 = (void *)0xec00000027207970;
            SVar30.bridgeObject = (void *)0xec00000027207970;
            SVar30.str = (char *)0x6f632074276e6143;
            SVar35.bridgeObject = in_x3;
            SVar35.str = pcVar18;
            Swift::String::append(SVar30,SVar35);
            pcVar10 = pcVar17;
            _swift_bridgeObjectRetain();
            FUN_1005b32e4();
            SVar31.bridgeObject = pvVar13;
            SVar31.str = pcVar10;
            SVar36.bridgeObject = in_x3;
            SVar36.str = pcVar18;
            Swift::String::append(SVar31,SVar36);
            _swift_bridgeObjectRelease(pvVar13);
            _swift_bridgeObjectRelease(pcVar17);
            SVar32.bridgeObject = (void *)0xeb00000000272065;
            SVar32.str = (char *)0x70797420666f2027;
            SVar37.bridgeObject = in_x3;
            SVar37.str = pcVar18;
            Swift::String::append(SVar32,SVar37);
            uVar1 = (uint)puVar20 & 0xff;
            pcVar10 = (char *)0x74756f6574696877;
            if (uVar1 != 7) {
              pcVar10 = (char *)0x6e776f6e6b6e75;
            }
            puVar16 = &DAT_e800000000000000;
            if (uVar1 != 7) {
              puVar16 = &DAT_e700000000000000;
            }
            pcVar2 = (char *)0x74656b636f73;
            if (uVar1 != 6) {
              pcVar2 = pcVar10;
            }
            puVar5 = &DAT_e600000000000000;
            if (uVar1 != 6) {
              puVar5 = puVar16;
            }
            puVar16 = (undefined1 *)0xe900000000000072;
            pcVar10 = (char *)0x6574636172616863;
            if (uVar1 != 2) {
              puVar16 = &DAT_e400000000000000;
              pcVar10 = (char *)0x6f666966;
            }
            pcVar3 = (char *)0x6b636f6c62;
            if (uVar1 != 1) {
              pcVar3 = pcVar10;
            }
            puVar4 = &DAT_e500000000000000;
            if (uVar1 != 1) {
              puVar4 = puVar16;
            }
            if (uVar1 < 6) {
              puVar5 = puVar4;
              pcVar2 = pcVar3;
            }
            piVar24 = *(int **)(unaff_x22 + 0x1a8);
            SVar33.bridgeObject = puVar5;
            SVar33.str = pcVar2;
            SVar38.bridgeObject = in_x3;
            SVar38.str = pcVar18;
            Swift::String::append(SVar33,SVar38);
            _swift_bridgeObjectRelease(puVar5);
            SVar34.bridgeObject = (void *)0x8000000100db8a90;
            SVar34.str = (char *)0xd000000000000044;
            SVar39.bridgeObject = in_x3;
            SVar39.str = pcVar18;
            Swift::String::append(SVar34,SVar39);
            puVar19 = (undefined8 *)(unaff_x22 + 0xa0);
            *(undefined1 *)puVar19 = 9;
            *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(unaff_x22 + 0x178);
            *(undefined8 *)(unaff_x22 + 0xb0) = *(undefined8 *)(unaff_x22 + 0x180);
            *(undefined8 *)(unaff_x22 + 0xc0) = 0xd000000000000048;
            *(undefined8 *)(unaff_x22 + 0xb8) = 0;
            *(undefined8 *)(unaff_x22 + 200) = 0x8000000100db8fc0;
            *(undefined8 *)(unaff_x22 + 0xd0) = 0xd00000000000001f;
            *(undefined8 *)(unaff_x22 + 0xd8) = 0x8000000100db8a70;
            *(undefined8 *)(unaff_x22 + 0xe0) = 0x48f;
            puVar22 = (undefined8 *)(unaff_x22 + 0x58);
            *(undefined1 *)puVar22 = 9;
            *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x178);
            *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x180);
            *(undefined8 *)(unaff_x22 + 0x78) = 0xd000000000000048;
            *(undefined8 *)(unaff_x22 + 0x70) = 0;
            *(undefined8 *)(unaff_x22 + 0x80) = 0x8000000100db8fc0;
            *(undefined8 *)(unaff_x22 + 0x88) = 0xd00000000000001f;
            *(undefined8 *)(unaff_x22 + 0x90) = 0x8000000100db8a70;
            *(undefined8 *)(unaff_x22 + 0x98) = 0x48f;
            FUN_100a50050(puVar19,unaff_x22 + 0xe8);
            FUN_100a5008c();
            FUN_100a500c0();
            puVar11 = &DAT_100f2de38;
            _swift_allocError(&DAT_100f2de38,puVar22,0,0);
            *(undefined **)(unaff_x22 + 0x268) = puVar11;
            uVar25 = *(undefined8 *)(unaff_x22 + 0xb8);
            uVar21 = *(undefined8 *)(unaff_x22 + 0xb0);
            uVar27 = *(undefined8 *)(unaff_x22 + 200);
            uVar26 = *(undefined8 *)(unaff_x22 + 0xc0);
            uVar29 = *(undefined8 *)(unaff_x22 + 0xd8);
            uVar28 = *(undefined8 *)(unaff_x22 + 0xd0);
            puVar22[8] = *(undefined8 *)(unaff_x22 + 0xe0);
            puVar22[5] = uVar27;
            puVar22[4] = uVar26;
            puVar22[7] = uVar29;
            puVar22[6] = uVar28;
            puVar22[3] = uVar25;
            puVar22[2] = uVar21;
            uVar21 = *puVar19;
            puVar22[1] = *(undefined8 *)(unaff_x22 + 0xa8);
            *puVar22 = uVar21;
            FUN_100a50050(puVar19,unaff_x22 + 0x130);
            iVar6 = *piVar24;
            plVar23 = (long *)(ulong)(uint)piVar24[1];
            _swift_task_alloc();
            *(long **)(unaff_x22 + 0x270) = plVar23;
            *plVar23 = unaff_x22;
            plVar23[1] = (long)FUN_100a7710c;
                    /* WARNING: Could not recover jumptable at 0x000100a76304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)((long)iVar6 + (long)piVar24))(pcVar17,puVar20,puVar11);
            return;
          }
          uVar7 = *(undefined1 *)(unaff_x22 + 0x280);
          uVar21 = *(undefined8 *)(unaff_x22 + 0x1c8);
          _swift_bridgeObjectRetain_n(pcVar17,2);
          FUN_100a7c25c(pcVar17,puVar20,pcVar18);
          puVar20 = &DAT_100f2dbf8;
          _swift_allocObject(&DAT_100f2dbf8,0x31,7);
          *(undefined **)(unaff_x22 + 0x208) = puVar20;
          *(undefined8 *)(puVar20 + 0x10) = uVar21;
          puVar20[0x18] = uVar7;
          *(char **)(puVar20 + 0x20) = pcVar17;
          *(char **)(puVar20 + 0x28) = pcVar18;
          puVar20[0x30] = 0;
          plVar23 = (long *)0xa0;
          _swift_bridgeObjectRetain(pcVar17);
          _swift_retain(uVar21);
          _swift_bridgeObjectRetain(pcVar18);
          _swift_task_alloc();
          *(long **)(unaff_x22 + 0x210) = plVar23;
          *plVar23 = unaff_x22;
          plVar23[1] = (long)FUN_100a7630c;
        }
        FUN_100912dec();
        return;
      }
      uVar15 = uVar15 + 1;
      puVar22 = puVar22 + 3;
    } while (uVar14 != uVar15);
  }
  _swift_bridgeObjectRelease();
                    /* WARNING: Could not recover jumptable at 0x000100a75e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a7630c | FUN_100a7630c */

void FUN_100a7630c(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar3 = *(undefined8 *)(lVar2 + 0x208);
  *(long *)(lVar2 + 0x218) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x210));
  _swift_release(uVar3);
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a7637c;
  }
  else {
    pcVar1 = FUN_100a768fc;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a7637c | FUN_100a7637c */

void FUN_100a7637c(void)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined1 uVar4;
  code *pcVar5;
  char *pcVar6;
  undefined *puVar7;
  _StringGuts _Var8;
  void *pvVar9;
  void *in_x3;
  ulong uVar10;
  long lVar11;
  char *pcVar12;
  char *pcVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  long unaff_x22;
  undefined8 uVar17;
  undefined1 *puVar18;
  undefined8 *puVar19;
  long *plVar20;
  int *piVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  
  uVar17 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x200);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x1f0);
  _swift_bridgeObjectRelease_n(uVar15,2);
  FUN_100a7c288(uVar15,uVar17,uVar22);
  uVar10 = *(ulong *)(unaff_x22 + 0x1e8);
  lVar11 = uVar10 * 0x18;
  do {
    uVar10 = uVar10 + 1;
    if (*(ulong *)(unaff_x22 + 0x1e0) == uVar10) {
      _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x1d8));
                    /* WARNING: Could not recover jumptable at 0x000100a76508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    *(ulong *)(unaff_x22 + 0x1e8) = uVar10;
    if (*(ulong *)(*(long *)(unaff_x22 + 0x1d8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100a768fc);
      (*pcVar5)();
    }
    lVar1 = *(long *)(unaff_x22 + 0x1d8) + lVar11;
    pcVar12 = *(char **)(lVar1 + 0x38);
    *(char **)(unaff_x22 + 0x1f0) = pcVar12;
    puVar16 = *(undefined **)(lVar1 + 0x40);
    *(undefined **)(unaff_x22 + 0x1f8) = puVar16;
    pcVar13 = *(char **)(lVar1 + 0x48);
    *(char **)(unaff_x22 + 0x200) = pcVar13;
    lVar11 = lVar11 + 0x18;
  } while (pcVar12 == (char *)0x0);
  uVar2 = (uint)puVar16 & 0xff;
  if (uVar2 == 5) {
    uVar4 = *(undefined1 *)(unaff_x22 + 0x280);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x1c8);
    _swift_bridgeObjectRetain_n(pcVar12,2);
    FUN_100a7c25c(pcVar12,puVar16,pcVar13);
    puVar16 = &DAT_100f2dbd0;
    _swift_allocObject(&DAT_100f2dbd0,0x31,7);
    *(undefined **)(unaff_x22 + 0x230) = puVar16;
    *(undefined8 *)(puVar16 + 0x10) = uVar17;
    puVar16[0x18] = uVar4;
    *(char **)(puVar16 + 0x20) = pcVar12;
    *(char **)(puVar16 + 0x28) = pcVar13;
    puVar16[0x30] = 0;
    plVar20 = (long *)0xa0;
    _swift_bridgeObjectRetain(pcVar12);
    _swift_retain(uVar17);
    _swift_bridgeObjectRetain(pcVar13);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x238) = plVar20;
    *plVar20 = unaff_x22;
    plVar20[1] = (long)FUN_100a769dc;
  }
  else {
    if (uVar2 == 4) {
      _swift_bridgeObjectRetain_n(pcVar12,2);
      FUN_100a7c25c(pcVar12,puVar16,pcVar13);
      plVar20 = (long *)0x290;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 600) = plVar20;
      *plVar20 = unaff_x22;
      plVar20[1] = (long)FUN_100a76b2c;
      FUN_100a75c78(pcVar12,pcVar13,*(undefined8 *)(unaff_x22 + 0x1a8),
                    *(undefined8 *)(unaff_x22 + 0x1b0),*(undefined8 *)(unaff_x22 + 0x1b8),
                    *(undefined8 *)(unaff_x22 + 0x1c0),*(undefined8 *)(unaff_x22 + 0x1c8),
                    *(undefined1 *)(unaff_x22 + 0x280));
      return;
    }
    if (((ulong)puVar16 & 0xff) != 0) {
      *(undefined8 *)(unaff_x22 + 0x188) = 0;
      *(undefined8 *)(unaff_x22 + 400) = 0xe000000000000000;
      _swift_bridgeObjectRetain(pcVar12);
      _Var8.unknown = puVar16;
      FUN_100a7c25c();
      Swift::_StringGuts::grow(0x5f,_Var8);
      *(undefined8 *)(unaff_x22 + 0x178) = *(undefined8 *)(unaff_x22 + 0x188);
      *(undefined8 *)(unaff_x22 + 0x180) = *(undefined8 *)(unaff_x22 + 400);
      pvVar9 = (void *)0xec00000027207970;
      SVar26.bridgeObject = (void *)0xec00000027207970;
      SVar26.str = (char *)0x6f632074276e6143;
      SVar31.bridgeObject = in_x3;
      SVar31.str = pcVar13;
      Swift::String::append(SVar26,SVar31);
      pcVar6 = pcVar12;
      _swift_bridgeObjectRetain();
      FUN_1005b32e4();
      SVar27.bridgeObject = pvVar9;
      SVar27.str = pcVar6;
      SVar32.bridgeObject = in_x3;
      SVar32.str = pcVar13;
      Swift::String::append(SVar27,SVar32);
      _swift_bridgeObjectRelease(pvVar9);
      _swift_bridgeObjectRelease(pcVar12);
      SVar28.bridgeObject = (void *)0xeb00000000272065;
      SVar28.str = (char *)0x70797420666f2027;
      SVar33.bridgeObject = in_x3;
      SVar33.str = pcVar13;
      Swift::String::append(SVar28,SVar33);
      uVar2 = (uint)puVar16 & 0xff;
      if (uVar2 < 6) {
        if (uVar2 == 1) {
          puVar18 = &DAT_e500000000000000;
          pcVar6 = (char *)0x6b636f6c62;
        }
        else if (uVar2 == 2) {
          puVar18 = (undefined1 *)0xe900000000000072;
          pcVar6 = (char *)0x6574636172616863;
        }
        else {
          puVar18 = &DAT_e400000000000000;
          pcVar6 = (char *)0x6f666966;
        }
      }
      else if (uVar2 == 6) {
        puVar18 = &DAT_e600000000000000;
        pcVar6 = (char *)0x74656b636f73;
      }
      else if (uVar2 == 7) {
        puVar18 = &DAT_e800000000000000;
        pcVar6 = (char *)0x74756f6574696877;
      }
      else {
        puVar18 = &DAT_e700000000000000;
        pcVar6 = (char *)0x6e776f6e6b6e75;
      }
      piVar21 = *(int **)(unaff_x22 + 0x1a8);
      SVar29.bridgeObject = puVar18;
      SVar29.str = pcVar6;
      SVar34.bridgeObject = in_x3;
      SVar34.str = pcVar13;
      Swift::String::append(SVar29,SVar34);
      _swift_bridgeObjectRelease(puVar18);
      SVar30.bridgeObject = (void *)0x8000000100db8a90;
      SVar30.str = (char *)0xd000000000000044;
      SVar35.bridgeObject = in_x3;
      SVar35.str = pcVar13;
      Swift::String::append(SVar30,SVar35);
      puVar14 = (undefined8 *)(unaff_x22 + 0xa0);
      *(undefined1 *)puVar14 = 9;
      *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(unaff_x22 + 0x178);
      *(undefined8 *)(unaff_x22 + 0xb0) = *(undefined8 *)(unaff_x22 + 0x180);
      *(undefined8 *)(unaff_x22 + 0xc0) = 0xd000000000000048;
      *(undefined8 *)(unaff_x22 + 0xb8) = 0;
      *(undefined8 *)(unaff_x22 + 200) = 0x8000000100db8fc0;
      *(undefined8 *)(unaff_x22 + 0xd0) = 0xd00000000000001f;
      *(undefined8 *)(unaff_x22 + 0xd8) = 0x8000000100db8a70;
      *(undefined8 *)(unaff_x22 + 0xe0) = 0x48f;
      puVar19 = (undefined8 *)(unaff_x22 + 0x58);
      *(undefined1 *)puVar19 = 9;
      *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x178);
      *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x180);
      *(undefined8 *)(unaff_x22 + 0x78) = 0xd000000000000048;
      *(undefined8 *)(unaff_x22 + 0x70) = 0;
      *(undefined8 *)(unaff_x22 + 0x80) = 0x8000000100db8fc0;
      *(undefined8 *)(unaff_x22 + 0x88) = 0xd00000000000001f;
      *(undefined8 *)(unaff_x22 + 0x90) = 0x8000000100db8a70;
      *(undefined8 *)(unaff_x22 + 0x98) = 0x48f;
      FUN_100a50050(puVar14,unaff_x22 + 0xe8);
      FUN_100a5008c();
      FUN_100a500c0();
      puVar7 = &DAT_100f2de38;
      _swift_allocError(&DAT_100f2de38,puVar19,0,0);
      *(undefined **)(unaff_x22 + 0x268) = puVar7;
      uVar22 = *(undefined8 *)(unaff_x22 + 0xb8);
      uVar17 = *(undefined8 *)(unaff_x22 + 0xb0);
      uVar23 = *(undefined8 *)(unaff_x22 + 200);
      uVar15 = *(undefined8 *)(unaff_x22 + 0xc0);
      uVar25 = *(undefined8 *)(unaff_x22 + 0xd8);
      uVar24 = *(undefined8 *)(unaff_x22 + 0xd0);
      puVar19[8] = *(undefined8 *)(unaff_x22 + 0xe0);
      puVar19[5] = uVar23;
      puVar19[4] = uVar15;
      puVar19[7] = uVar25;
      puVar19[6] = uVar24;
      puVar19[3] = uVar22;
      puVar19[2] = uVar17;
      uVar17 = *puVar14;
      puVar19[1] = *(undefined8 *)(unaff_x22 + 0xa8);
      *puVar19 = uVar17;
      FUN_100a50050(puVar14,unaff_x22 + 0x130);
      iVar3 = *piVar21;
      plVar20 = (long *)(ulong)(uint)piVar21[1];
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x270) = plVar20;
      *plVar20 = unaff_x22;
      plVar20[1] = (long)FUN_100a7710c;
                    /* WARNING: Could not recover jumptable at 0x000100a768f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar3 + (long)piVar21))(pcVar12,puVar16,puVar7);
      return;
    }
    uVar4 = *(undefined1 *)(unaff_x22 + 0x280);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x1c8);
    _swift_bridgeObjectRetain_n(pcVar12,2);
    FUN_100a7c25c(pcVar12,puVar16,pcVar13);
    puVar16 = &DAT_100f2dbf8;
    _swift_allocObject(&DAT_100f2dbf8,0x31,7);
    *(undefined **)(unaff_x22 + 0x208) = puVar16;
    *(undefined8 *)(puVar16 + 0x10) = uVar17;
    puVar16[0x18] = uVar4;
    *(char **)(puVar16 + 0x20) = pcVar12;
    *(char **)(puVar16 + 0x28) = pcVar13;
    puVar16[0x30] = 0;
    plVar20 = (long *)0xa0;
    _swift_bridgeObjectRetain(pcVar12);
    _swift_retain(uVar17);
    _swift_bridgeObjectRetain(pcVar13);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x210) = plVar20;
    *plVar20 = unaff_x22;
    plVar20[1] = (long)FUN_100a7630c;
  }
  FUN_100912dec();
  return;
}



/* Address: 0x100a768fc | FUN_100a768fc */

void FUN_100a768fc(void)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  int *piVar4;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1f0);
  piVar4 = *(int **)(unaff_x22 + 0x1a8);
  _swift_bridgeObjectRelease(uVar3);
  iVar1 = *piVar4;
  plVar2 = (long *)(ulong)(uint)piVar4[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x220) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100a76978;
                    /* WARNING: Could not recover jumptable at 0x000100a76974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar4))(uVar3,0,*(undefined8 *)(unaff_x22 + 0x218));
  return;
}



/* Address: 0x100a76978 | FUN_100a76978 */

void FUN_100a76978(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x228) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x220));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a776e8;
  }
  else {
    pcVar1 = FUN_100a77c70;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a769dc | FUN_100a769dc */

void FUN_100a769dc(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar3 = *(undefined8 *)(lVar2 + 0x230);
  *(long *)(lVar2 + 0x240) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x238));
  _swift_release(uVar3);
  if (unaff_x20 == 0) {
    pcVar1 = thunk_FUN_100a7637c;
  }
  else {
    pcVar1 = FUN_100a76a4c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a76a4c | FUN_100a76a4c */

void FUN_100a76a4c(void)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  int *piVar4;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1f0);
  piVar4 = *(int **)(unaff_x22 + 0x1a8);
  _swift_bridgeObjectRelease(uVar3);
  iVar1 = *piVar4;
  plVar2 = (long *)(ulong)(uint)piVar4[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x248) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100a76ac8;
                    /* WARNING: Could not recover jumptable at 0x000100a76ac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar4))(uVar3,5,*(undefined8 *)(unaff_x22 + 0x240));
  return;
}



/* Address: 0x100a76ac8 | FUN_100a76ac8 */

void FUN_100a76ac8(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x250) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x248));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a77ce0;
  }
  else {
    pcVar1 = FUN_100a78268;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a76b2c | FUN_100a76b2c */

void FUN_100a76b2c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x260) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 600));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x1f0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a76b98;
  }
  else {
    pcVar1 = FUN_100a782d8;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a76b98 | FUN_100a76b98 */

void FUN_100a76b98(void)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined1 uVar4;
  code *pcVar5;
  char *pcVar6;
  undefined *puVar7;
  _StringGuts _Var8;
  void *pvVar9;
  void *in_x3;
  ulong uVar10;
  long lVar11;
  char *pcVar12;
  undefined8 uVar13;
  char *pcVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  long unaff_x22;
  undefined1 *puVar17;
  undefined8 *puVar18;
  long *plVar19;
  int *piVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  
  uVar13 = *(undefined8 *)(unaff_x22 + 0x1f0);
  FUN_100a7c288(uVar13,*(undefined8 *)(unaff_x22 + 0x1f8),*(undefined8 *)(unaff_x22 + 0x200));
  _swift_bridgeObjectRelease(uVar13);
  uVar10 = *(ulong *)(unaff_x22 + 0x1e8);
  lVar11 = uVar10 * 0x18;
  do {
    uVar10 = uVar10 + 1;
    if (*(ulong *)(unaff_x22 + 0x1e0) == uVar10) {
      _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x1d8));
                    /* WARNING: Could not recover jumptable at 0x000100a76d18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    *(ulong *)(unaff_x22 + 0x1e8) = uVar10;
    if (*(ulong *)(*(long *)(unaff_x22 + 0x1d8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100a7710c);
      (*pcVar5)();
    }
    lVar1 = *(long *)(unaff_x22 + 0x1d8) + lVar11;
    pcVar12 = *(char **)(lVar1 + 0x38);
    *(char **)(unaff_x22 + 0x1f0) = pcVar12;
    puVar16 = *(undefined **)(lVar1 + 0x40);
    *(undefined **)(unaff_x22 + 0x1f8) = puVar16;
    pcVar14 = *(char **)(lVar1 + 0x48);
    *(char **)(unaff_x22 + 0x200) = pcVar14;
    lVar11 = lVar11 + 0x18;
  } while (pcVar12 == (char *)0x0);
  uVar2 = (uint)puVar16 & 0xff;
  if (uVar2 == 5) {
    uVar4 = *(undefined1 *)(unaff_x22 + 0x280);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x1c8);
    _swift_bridgeObjectRetain_n(pcVar12,2);
    FUN_100a7c25c(pcVar12,puVar16,pcVar14);
    puVar16 = &DAT_100f2dbd0;
    _swift_allocObject(&DAT_100f2dbd0,0x31,7);
    *(undefined **)(unaff_x22 + 0x230) = puVar16;
    *(undefined8 *)(puVar16 + 0x10) = uVar13;
    puVar16[0x18] = uVar4;
    *(char **)(puVar16 + 0x20) = pcVar12;
    *(char **)(puVar16 + 0x28) = pcVar14;
    puVar16[0x30] = 0;
    plVar19 = (long *)0xa0;
    _swift_bridgeObjectRetain(pcVar12);
    _swift_retain(uVar13);
    _swift_bridgeObjectRetain(pcVar14);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x238) = plVar19;
    *plVar19 = unaff_x22;
    plVar19[1] = (long)FUN_100a769dc;
  }
  else {
    if (uVar2 == 4) {
      _swift_bridgeObjectRetain_n(pcVar12,2);
      FUN_100a7c25c(pcVar12,puVar16,pcVar14);
      plVar19 = (long *)0x290;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 600) = plVar19;
      *plVar19 = unaff_x22;
      plVar19[1] = (long)FUN_100a76b2c;
      FUN_100a75c78(pcVar12,pcVar14,*(undefined8 *)(unaff_x22 + 0x1a8),
                    *(undefined8 *)(unaff_x22 + 0x1b0),*(undefined8 *)(unaff_x22 + 0x1b8),
                    *(undefined8 *)(unaff_x22 + 0x1c0),*(undefined8 *)(unaff_x22 + 0x1c8),
                    *(undefined1 *)(unaff_x22 + 0x280));
      return;
    }
    if (((ulong)puVar16 & 0xff) != 0) {
      *(undefined8 *)(unaff_x22 + 0x188) = 0;
      *(undefined8 *)(unaff_x22 + 400) = 0xe000000000000000;
      _swift_bridgeObjectRetain(pcVar12);
      _Var8.unknown = puVar16;
      FUN_100a7c25c();
      Swift::_StringGuts::grow(0x5f,_Var8);
      *(undefined8 *)(unaff_x22 + 0x178) = *(undefined8 *)(unaff_x22 + 0x188);
      *(undefined8 *)(unaff_x22 + 0x180) = *(undefined8 *)(unaff_x22 + 400);
      pvVar9 = (void *)0xec00000027207970;
      SVar26.bridgeObject = (void *)0xec00000027207970;
      SVar26.str = (char *)0x6f632074276e6143;
      SVar31.bridgeObject = in_x3;
      SVar31.str = pcVar14;
      Swift::String::append(SVar26,SVar31);
      pcVar6 = pcVar12;
      _swift_bridgeObjectRetain();
      FUN_1005b32e4();
      SVar27.bridgeObject = pvVar9;
      SVar27.str = pcVar6;
      SVar32.bridgeObject = in_x3;
      SVar32.str = pcVar14;
      Swift::String::append(SVar27,SVar32);
      _swift_bridgeObjectRelease(pvVar9);
      _swift_bridgeObjectRelease(pcVar12);
      SVar28.bridgeObject = (void *)0xeb00000000272065;
      SVar28.str = (char *)0x70797420666f2027;
      SVar33.bridgeObject = in_x3;
      SVar33.str = pcVar14;
      Swift::String::append(SVar28,SVar33);
      uVar2 = (uint)puVar16 & 0xff;
      if (uVar2 < 6) {
        if (uVar2 == 1) {
          puVar17 = &DAT_e500000000000000;
          pcVar6 = (char *)0x6b636f6c62;
        }
        else if (uVar2 == 2) {
          puVar17 = (undefined1 *)0xe900000000000072;
          pcVar6 = (char *)0x6574636172616863;
        }
        else {
          puVar17 = &DAT_e400000000000000;
          pcVar6 = (char *)0x6f666966;
        }
      }
      else if (uVar2 == 6) {
        puVar17 = &DAT_e600000000000000;
        pcVar6 = (char *)0x74656b636f73;
      }
      else if (uVar2 == 7) {
        puVar17 = &DAT_e800000000000000;
        pcVar6 = (char *)0x74756f6574696877;
      }
      else {
        puVar17 = &DAT_e700000000000000;
        pcVar6 = (char *)0x6e776f6e6b6e75;
      }
      piVar20 = *(int **)(unaff_x22 + 0x1a8);
      SVar29.bridgeObject = puVar17;
      SVar29.str = pcVar6;
      SVar34.bridgeObject = in_x3;
      SVar34.str = pcVar14;
      Swift::String::append(SVar29,SVar34);
      _swift_bridgeObjectRelease(puVar17);
      SVar30.bridgeObject = (void *)0x8000000100db8a90;
      SVar30.str = (char *)0xd000000000000044;
      SVar35.bridgeObject = in_x3;
      SVar35.str = pcVar14;
      Swift::String::append(SVar30,SVar35);
      puVar15 = (undefined8 *)(unaff_x22 + 0xa0);
      *(undefined1 *)puVar15 = 9;
      *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(unaff_x22 + 0x178);
      *(undefined8 *)(unaff_x22 + 0xb0) = *(undefined8 *)(unaff_x22 + 0x180);
      *(undefined8 *)(unaff_x22 + 0xc0) = 0xd000000000000048;
      *(undefined8 *)(unaff_x22 + 0xb8) = 0;
      *(undefined8 *)(unaff_x22 + 200) = 0x8000000100db8fc0;
      *(undefined8 *)(unaff_x22 + 0xd0) = 0xd00000000000001f;
      *(undefined8 *)(unaff_x22 + 0xd8) = 0x8000000100db8a70;
      *(undefined8 *)(unaff_x22 + 0xe0) = 0x48f;
      puVar18 = (undefined8 *)(unaff_x22 + 0x58);
      *(undefined1 *)puVar18 = 9;
      *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x178);
      *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x180);
      *(undefined8 *)(unaff_x22 + 0x78) = 0xd000000000000048;
      *(undefined8 *)(unaff_x22 + 0x70) = 0;
      *(undefined8 *)(unaff_x22 + 0x80) = 0x8000000100db8fc0;
      *(undefined8 *)(unaff_x22 + 0x88) = 0xd00000000000001f;
      *(undefined8 *)(unaff_x22 + 0x90) = 0x8000000100db8a70;
      *(undefined8 *)(unaff_x22 + 0x98) = 0x48f;
      FUN_100a50050(puVar15,unaff_x22 + 0xe8);
      FUN_100a5008c();
      FUN_100a500c0();
      puVar7 = &DAT_100f2de38;
      _swift_allocError(&DAT_100f2de38,puVar18,0,0);
      *(undefined **)(unaff_x22 + 0x268) = puVar7;
      uVar21 = *(undefined8 *)(unaff_x22 + 0xb8);
      uVar13 = *(undefined8 *)(unaff_x22 + 0xb0);
      uVar23 = *(undefined8 *)(unaff_x22 + 200);
      uVar22 = *(undefined8 *)(unaff_x22 + 0xc0);
      uVar25 = *(undefined8 *)(unaff_x22 + 0xd8);
      uVar24 = *(undefined8 *)(unaff_x22 + 0xd0);
      puVar18[8] = *(undefined8 *)(unaff_x22 + 0xe0);
      puVar18[5] = uVar23;
      puVar18[4] = uVar22;
      puVar18[7] = uVar25;
      puVar18[6] = uVar24;
      puVar18[3] = uVar21;
      puVar18[2] = uVar13;
      uVar13 = *puVar15;
      puVar18[1] = *(undefined8 *)(unaff_x22 + 0xa8);
      *puVar18 = uVar13;
      FUN_100a50050(puVar15,unaff_x22 + 0x130);
      iVar3 = *piVar20;
      plVar19 = (long *)(ulong)(uint)piVar20[1];
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x270) = plVar19;
      *plVar19 = unaff_x22;
      plVar19[1] = (long)FUN_100a7710c;
                    /* WARNING: Could not recover jumptable at 0x000100a77104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar3 + (long)piVar20))(pcVar12,puVar16,puVar7);
      return;
    }
    uVar4 = *(undefined1 *)(unaff_x22 + 0x280);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x1c8);
    _swift_bridgeObjectRetain_n(pcVar12,2);
    FUN_100a7c25c(pcVar12,puVar16,pcVar14);
    puVar16 = &DAT_100f2dbf8;
    _swift_allocObject(&DAT_100f2dbf8,0x31,7);
    *(undefined **)(unaff_x22 + 0x208) = puVar16;
    *(undefined8 *)(puVar16 + 0x10) = uVar13;
    puVar16[0x18] = uVar4;
    *(char **)(puVar16 + 0x20) = pcVar12;
    *(char **)(puVar16 + 0x28) = pcVar14;
    puVar16[0x30] = 0;
    plVar19 = (long *)0xa0;
    _swift_bridgeObjectRetain(pcVar12);
    _swift_retain(uVar13);
    _swift_bridgeObjectRetain(pcVar14);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x210) = plVar19;
    *plVar19 = unaff_x22;
    plVar19[1] = (long)FUN_100a7630c;
  }
  FUN_100912dec();
  return;
}



/* Address: 0x100a7710c | FUN_100a7710c */

void FUN_100a7710c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x278) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x270));
  if (unaff_x20 == 0) {
    _swift_errorRelease(*(undefined8 *)(lVar2 + 0x268));
    pcVar1 = FUN_100a77178;
  }
  else {
    pcVar1 = FUN_100a7833c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a77178 | FUN_100a77178 */

void FUN_100a77178(void)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined1 uVar4;
  code *pcVar5;
  char *pcVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  _StringGuts _Var9;
  void *pvVar10;
  void *in_x3;
  ulong uVar11;
  long lVar12;
  char *pcVar13;
  undefined8 uVar14;
  char *pcVar15;
  undefined *puVar16;
  long unaff_x22;
  undefined1 *puVar17;
  long *plVar18;
  int *piVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
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
  
  uVar14 = *(undefined8 *)(unaff_x22 + 0x1f0);
  FUN_100a7c288(uVar14,*(undefined8 *)(unaff_x22 + 0x1f8),*(undefined8 *)(unaff_x22 + 0x200));
  FUN_100a5008c(unaff_x22 + 0xa0);
  _swift_bridgeObjectRelease(uVar14);
  uVar11 = *(ulong *)(unaff_x22 + 0x1e8);
  lVar12 = uVar11 * 0x18;
  do {
    uVar11 = uVar11 + 1;
    if (*(ulong *)(unaff_x22 + 0x1e0) == uVar11) {
      _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x1d8));
                    /* WARNING: Could not recover jumptable at 0x000100a77300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    *(ulong *)(unaff_x22 + 0x1e8) = uVar11;
    if (*(ulong *)(*(long *)(unaff_x22 + 0x1d8) + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100a776e8);
      (*pcVar5)();
    }
    lVar1 = *(long *)(unaff_x22 + 0x1d8) + lVar12;
    pcVar13 = *(char **)(lVar1 + 0x38);
    *(char **)(unaff_x22 + 0x1f0) = pcVar13;
    puVar16 = *(undefined **)(lVar1 + 0x40);
    *(undefined **)(unaff_x22 + 0x1f8) = puVar16;
    pcVar15 = *(char **)(lVar1 + 0x48);
    *(char **)(unaff_x22 + 0x200) = pcVar15;
    lVar12 = lVar12 + 0x18;
  } while (pcVar13 == (char *)0x0);
  uVar2 = (uint)puVar16 & 0xff;
  if (uVar2 == 5) {
    uVar4 = *(undefined1 *)(unaff_x22 + 0x280);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x1c8);
    _swift_bridgeObjectRetain_n(pcVar13,2);
    FUN_100a7c25c(pcVar13,puVar16,pcVar15);
    puVar16 = &DAT_100f2dbd0;
    _swift_allocObject(&DAT_100f2dbd0,0x31,7);
    *(undefined **)(unaff_x22 + 0x230) = puVar16;
    *(undefined8 *)(puVar16 + 0x10) = uVar14;
    puVar16[0x18] = uVar4;
    *(char **)(puVar16 + 0x20) = pcVar13;
    *(char **)(puVar16 + 0x28) = pcVar15;
    puVar16[0x30] = 0;
    plVar18 = (long *)0xa0;
    _swift_bridgeObjectRetain(pcVar13);
    _swift_retain(uVar14);
    _swift_bridgeObjectRetain(pcVar15);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x238) = plVar18;
    *plVar18 = unaff_x22;
    plVar18[1] = (long)FUN_100a769dc;
  }
  else {
    if (uVar2 == 4) {
      _swift_bridgeObjectRetain_n(pcVar13,2);
      FUN_100a7c25c(pcVar13,puVar16,pcVar15);
      plVar18 = (long *)0x290;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 600) = plVar18;
      *plVar18 = unaff_x22;
      plVar18[1] = (long)FUN_100a76b2c;
      FUN_100a75c78(pcVar13,pcVar15,*(undefined8 *)(unaff_x22 + 0x1a8),
                    *(undefined8 *)(unaff_x22 + 0x1b0),*(undefined8 *)(unaff_x22 + 0x1b8),
                    *(undefined8 *)(unaff_x22 + 0x1c0),*(undefined8 *)(unaff_x22 + 0x1c8),
                    *(undefined1 *)(unaff_x22 + 0x280));
      return;
    }
    if (((ulong)puVar16 & 0xff) != 0) {
      *(undefined8 *)(unaff_x22 + 0x188) = 0;
      *(undefined8 *)(unaff_x22 + 400) = 0xe000000000000000;
      _swift_bridgeObjectRetain(pcVar13);
      _Var9.unknown = puVar16;
      FUN_100a7c25c();
      Swift::_StringGuts::grow(0x5f,_Var9);
      *(undefined8 *)(unaff_x22 + 0x178) = *(undefined8 *)(unaff_x22 + 0x188);
      *(undefined8 *)(unaff_x22 + 0x180) = *(undefined8 *)(unaff_x22 + 400);
      pvVar10 = (void *)0xec00000027207970;
      SVar25.bridgeObject = (void *)0xec00000027207970;
      SVar25.str = (char *)0x6f632074276e6143;
      SVar30.bridgeObject = in_x3;
      SVar30.str = pcVar15;
      Swift::String::append(SVar25,SVar30);
      pcVar6 = pcVar13;
      _swift_bridgeObjectRetain();
      FUN_1005b32e4();
      SVar26.bridgeObject = pvVar10;
      SVar26.str = pcVar6;
      SVar31.bridgeObject = in_x3;
      SVar31.str = pcVar15;
      Swift::String::append(SVar26,SVar31);
      _swift_bridgeObjectRelease(pvVar10);
      _swift_bridgeObjectRelease(pcVar13);
      SVar27.bridgeObject = (void *)0xeb00000000272065;
      SVar27.str = (char *)0x70797420666f2027;
      SVar32.bridgeObject = in_x3;
      SVar32.str = pcVar15;
      Swift::String::append(SVar27,SVar32);
      uVar2 = (uint)puVar16 & 0xff;
      if (uVar2 < 6) {
        if (uVar2 == 1) {
          puVar17 = &DAT_e500000000000000;
          pcVar6 = (char *)0x6b636f6c62;
        }
        else if (uVar2 == 2) {
          puVar17 = (undefined1 *)0xe900000000000072;
          pcVar6 = (char *)0x6574636172616863;
        }
        else {
          puVar17 = &DAT_e400000000000000;
          pcVar6 = (char *)0x6f666966;
        }
      }
      else if (uVar2 == 6) {
        puVar17 = &DAT_e600000000000000;
        pcVar6 = (char *)0x74656b636f73;
      }
      else if (uVar2 == 7) {
        puVar17 = &DAT_e800000000000000;
        pcVar6 = (char *)0x74756f6574696877;
      }
      else {
        puVar17 = &DAT_e700000000000000;
        pcVar6 = (char *)0x6e776f6e6b6e75;
      }
      piVar19 = *(int **)(unaff_x22 + 0x1a8);
      SVar28.bridgeObject = puVar17;
      SVar28.str = pcVar6;
      SVar33.bridgeObject = in_x3;
      SVar33.str = pcVar15;
      Swift::String::append(SVar28,SVar33);
      _swift_bridgeObjectRelease(puVar17);
      SVar29.bridgeObject = (void *)0x8000000100db8a90;
      SVar29.str = (char *)0xd000000000000044;
      SVar34.bridgeObject = in_x3;
      SVar34.str = pcVar15;
      Swift::String::append(SVar29,SVar34);
      *(undefined1 *)(unaff_x22 + 0xa0) = 9;
      *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(unaff_x22 + 0x178);
      *(undefined8 *)(unaff_x22 + 0xb0) = *(undefined8 *)(unaff_x22 + 0x180);
      *(undefined8 *)(unaff_x22 + 0xc0) = 0xd000000000000048;
      *(undefined8 *)(unaff_x22 + 0xb8) = 0;
      *(undefined8 *)(unaff_x22 + 200) = 0x8000000100db8fc0;
      *(undefined8 *)(unaff_x22 + 0xd0) = 0xd00000000000001f;
      *(undefined8 *)(unaff_x22 + 0xd8) = 0x8000000100db8a70;
      *(undefined8 *)(unaff_x22 + 0xe0) = 0x48f;
      *(undefined1 *)(unaff_x22 + 0x58) = 9;
      *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x178);
      *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x180);
      *(undefined8 *)(unaff_x22 + 0x78) = 0xd000000000000048;
      *(undefined8 *)(unaff_x22 + 0x70) = 0;
      *(undefined8 *)(unaff_x22 + 0x80) = 0x8000000100db8fc0;
      *(undefined8 *)(unaff_x22 + 0x88) = 0xd00000000000001f;
      *(undefined8 *)(unaff_x22 + 0x90) = 0x8000000100db8a70;
      *(undefined8 *)(unaff_x22 + 0x98) = 0x48f;
      FUN_100a50050(unaff_x22 + 0xa0,unaff_x22 + 0xe8);
      puVar7 = (undefined8 *)(unaff_x22 + 0x58);
      FUN_100a5008c();
      FUN_100a500c0();
      puVar8 = &DAT_100f2de38;
      _swift_allocError(&DAT_100f2de38,puVar7,0,0);
      *(undefined **)(unaff_x22 + 0x268) = puVar8;
      uVar20 = *(undefined8 *)(unaff_x22 + 0xb8);
      uVar14 = *(undefined8 *)(unaff_x22 + 0xb0);
      uVar22 = *(undefined8 *)(unaff_x22 + 200);
      uVar21 = *(undefined8 *)(unaff_x22 + 0xc0);
      uVar24 = *(undefined8 *)(unaff_x22 + 0xd8);
      uVar23 = *(undefined8 *)(unaff_x22 + 0xd0);
      puVar7[8] = *(undefined8 *)(unaff_x22 + 0xe0);
      puVar7[5] = uVar22;
      puVar7[4] = uVar21;
      puVar7[7] = uVar24;
      puVar7[6] = uVar23;
      puVar7[3] = uVar20;
      puVar7[2] = uVar14;
      uVar14 = *(undefined8 *)(unaff_x22 + 0xa0);
      puVar7[1] = *(undefined8 *)(unaff_x22 + 0xa8);
      *puVar7 = uVar14;
      FUN_100a50050(unaff_x22 + 0xa0,unaff_x22 + 0x130);
      iVar3 = *piVar19;
      plVar18 = (long *)(ulong)(uint)piVar19[1];
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x270) = plVar18;
      *plVar18 = unaff_x22;
      plVar18[1] = (long)FUN_100a7710c;
                    /* WARNING: Could not recover jumptable at 0x000100a776e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar3 + (long)piVar19))(pcVar13,puVar16,puVar8);
      return;
    }
    uVar4 = *(undefined1 *)(unaff_x22 + 0x280);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x1c8);
    _swift_bridgeObjectRetain_n(pcVar13,2);
    FUN_100a7c25c(pcVar13,puVar16,pcVar15);
    puVar16 = &DAT_100f2dbf8;
    _swift_allocObject(&DAT_100f2dbf8,0x31,7);
    *(undefined **)(unaff_x22 + 0x208) = puVar16;
    *(undefined8 *)(puVar16 + 0x10) = uVar14;
    puVar16[0x18] = uVar4;
    *(char **)(puVar16 + 0x20) = pcVar13;
    *(char **)(puVar16 + 0x28) = pcVar15;
    puVar16[0x30] = 0;
    plVar18 = (long *)0xa0;
    _swift_bridgeObjectRetain(pcVar13);
    _swift_retain(uVar14);
    _swift_bridgeObjectRetain(pcVar15);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x210) = plVar18;
    *plVar18 = unaff_x22;
    plVar18[1] = (long)FUN_100a7630c;
  }
  FUN_100912dec();
  return;
}



/* Address: 0x100a776e8 | FUN_100a776e8 */

void FUN_100a776e8(void)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined1 uVar4;
  code *pcVar5;
  char *pcVar6;
  undefined *puVar7;
  _StringGuts _Var8;
  void *pvVar9;
  void *in_x3;
  ulong uVar10;
  long lVar11;
  char *pcVar12;
  undefined8 uVar13;
  char *pcVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  long unaff_x22;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 *puVar19;
  undefined8 *puVar20;
  long *plVar21;
  int *piVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  
  uVar13 = *(undefined8 *)(unaff_x22 + 0x218);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x200);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x1f0);
  _swift_bridgeObjectRelease(uVar17);
  FUN_100a7c288(uVar17,uVar18,uVar23);
  _swift_errorRelease(uVar13);
  uVar10 = *(ulong *)(unaff_x22 + 0x1e8);
  lVar11 = uVar10 * 0x18;
  do {
    uVar10 = uVar10 + 1;
    if (*(ulong *)(unaff_x22 + 0x1e0) == uVar10) {
      _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x1d8));
                    /* WARNING: Could not recover jumptable at 0x000100a7787c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    *(ulong *)(unaff_x22 + 0x1e8) = uVar10;
    if (*(ulong *)(*(long *)(unaff_x22 + 0x1d8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100a77c70);
      (*pcVar5)();
    }
    lVar1 = *(long *)(unaff_x22 + 0x1d8) + lVar11;
    pcVar12 = *(char **)(lVar1 + 0x38);
    *(char **)(unaff_x22 + 0x1f0) = pcVar12;
    puVar16 = *(undefined **)(lVar1 + 0x40);
    *(undefined **)(unaff_x22 + 0x1f8) = puVar16;
    pcVar14 = *(char **)(lVar1 + 0x48);
    *(char **)(unaff_x22 + 0x200) = pcVar14;
    lVar11 = lVar11 + 0x18;
  } while (pcVar12 == (char *)0x0);
  uVar2 = (uint)puVar16 & 0xff;
  if (uVar2 == 5) {
    uVar4 = *(undefined1 *)(unaff_x22 + 0x280);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x1c8);
    _swift_bridgeObjectRetain_n(pcVar12,2);
    FUN_100a7c25c(pcVar12,puVar16,pcVar14);
    puVar16 = &DAT_100f2dbd0;
    _swift_allocObject(&DAT_100f2dbd0,0x31,7);
    *(undefined **)(unaff_x22 + 0x230) = puVar16;
    *(undefined8 *)(puVar16 + 0x10) = uVar18;
    puVar16[0x18] = uVar4;
    *(char **)(puVar16 + 0x20) = pcVar12;
    *(char **)(puVar16 + 0x28) = pcVar14;
    puVar16[0x30] = 0;
    plVar21 = (long *)0xa0;
    _swift_bridgeObjectRetain(pcVar12);
    _swift_retain(uVar18);
    _swift_bridgeObjectRetain(pcVar14);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x238) = plVar21;
    *plVar21 = unaff_x22;
    plVar21[1] = (long)FUN_100a769dc;
  }
  else {
    if (uVar2 == 4) {
      _swift_bridgeObjectRetain_n(pcVar12,2);
      FUN_100a7c25c(pcVar12,puVar16,pcVar14);
      plVar21 = (long *)0x290;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 600) = plVar21;
      *plVar21 = unaff_x22;
      plVar21[1] = (long)FUN_100a76b2c;
      FUN_100a75c78(pcVar12,pcVar14,*(undefined8 *)(unaff_x22 + 0x1a8),
                    *(undefined8 *)(unaff_x22 + 0x1b0),*(undefined8 *)(unaff_x22 + 0x1b8),
                    *(undefined8 *)(unaff_x22 + 0x1c0),*(undefined8 *)(unaff_x22 + 0x1c8),
                    *(undefined1 *)(unaff_x22 + 0x280));
      return;
    }
    if (((ulong)puVar16 & 0xff) != 0) {
      *(undefined8 *)(unaff_x22 + 0x188) = 0;
      *(undefined8 *)(unaff_x22 + 400) = 0xe000000000000000;
      _swift_bridgeObjectRetain(pcVar12);
      _Var8.unknown = puVar16;
      FUN_100a7c25c();
      Swift::_StringGuts::grow(0x5f,_Var8);
      *(undefined8 *)(unaff_x22 + 0x178) = *(undefined8 *)(unaff_x22 + 0x188);
      *(undefined8 *)(unaff_x22 + 0x180) = *(undefined8 *)(unaff_x22 + 400);
      pvVar9 = (void *)0xec00000027207970;
      SVar26.bridgeObject = (void *)0xec00000027207970;
      SVar26.str = (char *)0x6f632074276e6143;
      SVar31.bridgeObject = in_x3;
      SVar31.str = pcVar14;
      Swift::String::append(SVar26,SVar31);
      pcVar6 = pcVar12;
      _swift_bridgeObjectRetain();
      FUN_1005b32e4();
      SVar27.bridgeObject = pvVar9;
      SVar27.str = pcVar6;
      SVar32.bridgeObject = in_x3;
      SVar32.str = pcVar14;
      Swift::String::append(SVar27,SVar32);
      _swift_bridgeObjectRelease(pvVar9);
      _swift_bridgeObjectRelease(pcVar12);
      SVar28.bridgeObject = (void *)0xeb00000000272065;
      SVar28.str = (char *)0x70797420666f2027;
      SVar33.bridgeObject = in_x3;
      SVar33.str = pcVar14;
      Swift::String::append(SVar28,SVar33);
      uVar2 = (uint)puVar16 & 0xff;
      if (uVar2 < 6) {
        if (uVar2 == 1) {
          puVar19 = &DAT_e500000000000000;
          pcVar6 = (char *)0x6b636f6c62;
        }
        else if (uVar2 == 2) {
          puVar19 = (undefined1 *)0xe900000000000072;
          pcVar6 = (char *)0x6574636172616863;
        }
        else {
          puVar19 = &DAT_e400000000000000;
          pcVar6 = (char *)0x6f666966;
        }
      }
      else if (uVar2 == 6) {
        puVar19 = &DAT_e600000000000000;
        pcVar6 = (char *)0x74656b636f73;
      }
      else if (uVar2 == 7) {
        puVar19 = &DAT_e800000000000000;
        pcVar6 = (char *)0x74756f6574696877;
      }
      else {
        puVar19 = &DAT_e700000000000000;
        pcVar6 = (char *)0x6e776f6e6b6e75;
      }
      piVar22 = *(int **)(unaff_x22 + 0x1a8);
      SVar29.bridgeObject = puVar19;
      SVar29.str = pcVar6;
      SVar34.bridgeObject = in_x3;
      SVar34.str = pcVar14;
      Swift::String::append(SVar29,SVar34);
      _swift_bridgeObjectRelease(puVar19);
      SVar30.bridgeObject = (void *)0x8000000100db8a90;
      SVar30.str = (char *)0xd000000000000044;
      SVar35.bridgeObject = in_x3;
      SVar35.str = pcVar14;
      Swift::String::append(SVar30,SVar35);
      puVar15 = (undefined8 *)(unaff_x22 + 0xa0);
      *(undefined1 *)puVar15 = 9;
      *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(unaff_x22 + 0x178);
      *(undefined8 *)(unaff_x22 + 0xb0) = *(undefined8 *)(unaff_x22 + 0x180);
      *(undefined8 *)(unaff_x22 + 0xc0) = 0xd000000000000048;
      *(undefined8 *)(unaff_x22 + 0xb8) = 0;
      *(undefined8 *)(unaff_x22 + 200) = 0x8000000100db8fc0;
      *(undefined8 *)(unaff_x22 + 0xd0) = 0xd00000000000001f;
      *(undefined8 *)(unaff_x22 + 0xd8) = 0x8000000100db8a70;
      *(undefined8 *)(unaff_x22 + 0xe0) = 0x48f;
      puVar20 = (undefined8 *)(unaff_x22 + 0x58);
      *(undefined1 *)puVar20 = 9;
      *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x178);
      *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x180);
      *(undefined8 *)(unaff_x22 + 0x78) = 0xd000000000000048;
      *(undefined8 *)(unaff_x22 + 0x70) = 0;
      *(undefined8 *)(unaff_x22 + 0x80) = 0x8000000100db8fc0;
      *(undefined8 *)(unaff_x22 + 0x88) = 0xd00000000000001f;
      *(undefined8 *)(unaff_x22 + 0x90) = 0x8000000100db8a70;
      *(undefined8 *)(unaff_x22 + 0x98) = 0x48f;
      FUN_100a50050(puVar15,unaff_x22 + 0xe8);
      FUN_100a5008c();
      FUN_100a500c0();
      puVar7 = &DAT_100f2de38;
      _swift_allocError(&DAT_100f2de38,puVar20,0,0);
      *(undefined **)(unaff_x22 + 0x268) = puVar7;
      uVar23 = *(undefined8 *)(unaff_x22 + 0xb8);
      uVar18 = *(undefined8 *)(unaff_x22 + 0xb0);
      uVar17 = *(undefined8 *)(unaff_x22 + 200);
      uVar13 = *(undefined8 *)(unaff_x22 + 0xc0);
      uVar25 = *(undefined8 *)(unaff_x22 + 0xd8);
      uVar24 = *(undefined8 *)(unaff_x22 + 0xd0);
      puVar20[8] = *(undefined8 *)(unaff_x22 + 0xe0);
      puVar20[5] = uVar17;
      puVar20[4] = uVar13;
      puVar20[7] = uVar25;
      puVar20[6] = uVar24;
      puVar20[3] = uVar23;
      puVar20[2] = uVar18;
      uVar18 = *puVar15;
      puVar20[1] = *(undefined8 *)(unaff_x22 + 0xa8);
      *puVar20 = uVar18;
      FUN_100a50050(puVar15,unaff_x22 + 0x130);
      iVar3 = *piVar22;
      plVar21 = (long *)(ulong)(uint)piVar22[1];
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x270) = plVar21;
      *plVar21 = unaff_x22;
      plVar21[1] = (long)FUN_100a7710c;
                    /* WARNING: Could not recover jumptable at 0x000100a77c68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar3 + (long)piVar22))(pcVar12,puVar16,puVar7);
      return;
    }
    uVar4 = *(undefined1 *)(unaff_x22 + 0x280);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x1c8);
    _swift_bridgeObjectRetain_n(pcVar12,2);
    FUN_100a7c25c(pcVar12,puVar16,pcVar14);
    puVar16 = &DAT_100f2dbf8;
    _swift_allocObject(&DAT_100f2dbf8,0x31,7);
    *(undefined **)(unaff_x22 + 0x208) = puVar16;
    *(undefined8 *)(puVar16 + 0x10) = uVar18;
    puVar16[0x18] = uVar4;
    *(char **)(puVar16 + 0x20) = pcVar12;
    *(char **)(puVar16 + 0x28) = pcVar14;
    puVar16[0x30] = 0;
    plVar21 = (long *)0xa0;
    _swift_bridgeObjectRetain(pcVar12);
    _swift_retain(uVar18);
    _swift_bridgeObjectRetain(pcVar14);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x210) = plVar21;
    *plVar21 = unaff_x22;
    plVar21[1] = (long)FUN_100a7630c;
  }
  FUN_100912dec();
  return;
}



/* Address: 0x100a77c70 | FUN_100a77c70 */

void FUN_100a77c70(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x200);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1d8);
  _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x218));
  _swift_bridgeObjectRelease(uVar3);
  _swift_bridgeObjectRelease(uVar4);
  FUN_100a7c288(uVar3,uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100a77cdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a77ce0 | FUN_100a77ce0 */

void FUN_100a77ce0(void)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined1 uVar4;
  code *pcVar5;
  char *pcVar6;
  undefined *puVar7;
  _StringGuts _Var8;
  void *pvVar9;
  void *in_x3;
  ulong uVar10;
  long lVar11;
  char *pcVar12;
  undefined8 uVar13;
  char *pcVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  long unaff_x22;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 *puVar19;
  undefined8 *puVar20;
  long *plVar21;
  int *piVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  
  uVar13 = *(undefined8 *)(unaff_x22 + 0x240);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x200);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x1f0);
  _swift_bridgeObjectRelease(uVar17);
  FUN_100a7c288(uVar17,uVar18,uVar23);
  _swift_errorRelease(uVar13);
  uVar10 = *(ulong *)(unaff_x22 + 0x1e8);
  lVar11 = uVar10 * 0x18;
  do {
    uVar10 = uVar10 + 1;
    if (*(ulong *)(unaff_x22 + 0x1e0) == uVar10) {
      _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x1d8));
                    /* WARNING: Could not recover jumptable at 0x000100a77e74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    *(ulong *)(unaff_x22 + 0x1e8) = uVar10;
    if (*(ulong *)(*(long *)(unaff_x22 + 0x1d8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100a78268);
      (*pcVar5)();
    }
    lVar1 = *(long *)(unaff_x22 + 0x1d8) + lVar11;
    pcVar12 = *(char **)(lVar1 + 0x38);
    *(char **)(unaff_x22 + 0x1f0) = pcVar12;
    puVar16 = *(undefined **)(lVar1 + 0x40);
    *(undefined **)(unaff_x22 + 0x1f8) = puVar16;
    pcVar14 = *(char **)(lVar1 + 0x48);
    *(char **)(unaff_x22 + 0x200) = pcVar14;
    lVar11 = lVar11 + 0x18;
  } while (pcVar12 == (char *)0x0);
  uVar2 = (uint)puVar16 & 0xff;
  if (uVar2 == 5) {
    uVar4 = *(undefined1 *)(unaff_x22 + 0x280);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x1c8);
    _swift_bridgeObjectRetain_n(pcVar12,2);
    FUN_100a7c25c(pcVar12,puVar16,pcVar14);
    puVar16 = &DAT_100f2dbd0;
    _swift_allocObject(&DAT_100f2dbd0,0x31,7);
    *(undefined **)(unaff_x22 + 0x230) = puVar16;
    *(undefined8 *)(puVar16 + 0x10) = uVar18;
    puVar16[0x18] = uVar4;
    *(char **)(puVar16 + 0x20) = pcVar12;
    *(char **)(puVar16 + 0x28) = pcVar14;
    puVar16[0x30] = 0;
    plVar21 = (long *)0xa0;
    _swift_bridgeObjectRetain(pcVar12);
    _swift_retain(uVar18);
    _swift_bridgeObjectRetain(pcVar14);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x238) = plVar21;
    *plVar21 = unaff_x22;
    plVar21[1] = (long)FUN_100a769dc;
  }
  else {
    if (uVar2 == 4) {
      _swift_bridgeObjectRetain_n(pcVar12,2);
      FUN_100a7c25c(pcVar12,puVar16,pcVar14);
      plVar21 = (long *)0x290;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 600) = plVar21;
      *plVar21 = unaff_x22;
      plVar21[1] = (long)FUN_100a76b2c;
      FUN_100a75c78(pcVar12,pcVar14,*(undefined8 *)(unaff_x22 + 0x1a8),
                    *(undefined8 *)(unaff_x22 + 0x1b0),*(undefined8 *)(unaff_x22 + 0x1b8),
                    *(undefined8 *)(unaff_x22 + 0x1c0),*(undefined8 *)(unaff_x22 + 0x1c8),
                    *(undefined1 *)(unaff_x22 + 0x280));
      return;
    }
    if (((ulong)puVar16 & 0xff) != 0) {
      *(undefined8 *)(unaff_x22 + 0x188) = 0;
      *(undefined8 *)(unaff_x22 + 400) = 0xe000000000000000;
      _swift_bridgeObjectRetain(pcVar12);
      _Var8.unknown = puVar16;
      FUN_100a7c25c();
      Swift::_StringGuts::grow(0x5f,_Var8);
      *(undefined8 *)(unaff_x22 + 0x178) = *(undefined8 *)(unaff_x22 + 0x188);
      *(undefined8 *)(unaff_x22 + 0x180) = *(undefined8 *)(unaff_x22 + 400);
      pvVar9 = (void *)0xec00000027207970;
      SVar26.bridgeObject = (void *)0xec00000027207970;
      SVar26.str = (char *)0x6f632074276e6143;
      SVar31.bridgeObject = in_x3;
      SVar31.str = pcVar14;
      Swift::String::append(SVar26,SVar31);
      pcVar6 = pcVar12;
      _swift_bridgeObjectRetain();
      FUN_1005b32e4();
      SVar27.bridgeObject = pvVar9;
      SVar27.str = pcVar6;
      SVar32.bridgeObject = in_x3;
      SVar32.str = pcVar14;
      Swift::String::append(SVar27,SVar32);
      _swift_bridgeObjectRelease(pvVar9);
      _swift_bridgeObjectRelease(pcVar12);
      SVar28.bridgeObject = (void *)0xeb00000000272065;
      SVar28.str = (char *)0x70797420666f2027;
      SVar33.bridgeObject = in_x3;
      SVar33.str = pcVar14;
      Swift::String::append(SVar28,SVar33);
      uVar2 = (uint)puVar16 & 0xff;
      if (uVar2 < 6) {
        if (uVar2 == 1) {
          puVar19 = &DAT_e500000000000000;
          pcVar6 = (char *)0x6b636f6c62;
        }
        else if (uVar2 == 2) {
          puVar19 = (undefined1 *)0xe900000000000072;
          pcVar6 = (char *)0x6574636172616863;
        }
        else {
          puVar19 = &DAT_e400000000000000;
          pcVar6 = (char *)0x6f666966;
        }
      }
      else if (uVar2 == 6) {
        puVar19 = &DAT_e600000000000000;
        pcVar6 = (char *)0x74656b636f73;
      }
      else if (uVar2 == 7) {
        puVar19 = &DAT_e800000000000000;
        pcVar6 = (char *)0x74756f6574696877;
      }
      else {
        puVar19 = &DAT_e700000000000000;
        pcVar6 = (char *)0x6e776f6e6b6e75;
      }
      piVar22 = *(int **)(unaff_x22 + 0x1a8);
      SVar29.bridgeObject = puVar19;
      SVar29.str = pcVar6;
      SVar34.bridgeObject = in_x3;
      SVar34.str = pcVar14;
      Swift::String::append(SVar29,SVar34);
      _swift_bridgeObjectRelease(puVar19);
      SVar30.bridgeObject = (void *)0x8000000100db8a90;
      SVar30.str = (char *)0xd000000000000044;
      SVar35.bridgeObject = in_x3;
      SVar35.str = pcVar14;
      Swift::String::append(SVar30,SVar35);
      puVar15 = (undefined8 *)(unaff_x22 + 0xa0);
      *(undefined1 *)puVar15 = 9;
      *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(unaff_x22 + 0x178);
      *(undefined8 *)(unaff_x22 + 0xb0) = *(undefined8 *)(unaff_x22 + 0x180);
      *(undefined8 *)(unaff_x22 + 0xc0) = 0xd000000000000048;
      *(undefined8 *)(unaff_x22 + 0xb8) = 0;
      *(undefined8 *)(unaff_x22 + 200) = 0x8000000100db8fc0;
      *(undefined8 *)(unaff_x22 + 0xd0) = 0xd00000000000001f;
      *(undefined8 *)(unaff_x22 + 0xd8) = 0x8000000100db8a70;
      *(undefined8 *)(unaff_x22 + 0xe0) = 0x48f;
      puVar20 = (undefined8 *)(unaff_x22 + 0x58);
      *(undefined1 *)puVar20 = 9;
      *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x178);
      *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x180);
      *(undefined8 *)(unaff_x22 + 0x78) = 0xd000000000000048;
      *(undefined8 *)(unaff_x22 + 0x70) = 0;
      *(undefined8 *)(unaff_x22 + 0x80) = 0x8000000100db8fc0;
      *(undefined8 *)(unaff_x22 + 0x88) = 0xd00000000000001f;
      *(undefined8 *)(unaff_x22 + 0x90) = 0x8000000100db8a70;
      *(undefined8 *)(unaff_x22 + 0x98) = 0x48f;
      FUN_100a50050(puVar15,unaff_x22 + 0xe8);
      FUN_100a5008c();
      FUN_100a500c0();
      puVar7 = &DAT_100f2de38;
      _swift_allocError(&DAT_100f2de38,puVar20,0,0);
      *(undefined **)(unaff_x22 + 0x268) = puVar7;
      uVar23 = *(undefined8 *)(unaff_x22 + 0xb8);
      uVar18 = *(undefined8 *)(unaff_x22 + 0xb0);
      uVar17 = *(undefined8 *)(unaff_x22 + 200);
      uVar13 = *(undefined8 *)(unaff_x22 + 0xc0);
      uVar25 = *(undefined8 *)(unaff_x22 + 0xd8);
      uVar24 = *(undefined8 *)(unaff_x22 + 0xd0);
      puVar20[8] = *(undefined8 *)(unaff_x22 + 0xe0);
      puVar20[5] = uVar17;
      puVar20[4] = uVar13;
      puVar20[7] = uVar25;
      puVar20[6] = uVar24;
      puVar20[3] = uVar23;
      puVar20[2] = uVar18;
      uVar18 = *puVar15;
      puVar20[1] = *(undefined8 *)(unaff_x22 + 0xa8);
      *puVar20 = uVar18;
      FUN_100a50050(puVar15,unaff_x22 + 0x130);
      iVar3 = *piVar22;
      plVar21 = (long *)(ulong)(uint)piVar22[1];
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x270) = plVar21;
      *plVar21 = unaff_x22;
      plVar21[1] = (long)FUN_100a7710c;
                    /* WARNING: Could not recover jumptable at 0x000100a78260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar3 + (long)piVar22))(pcVar12,puVar16,puVar7);
      return;
    }
    uVar4 = *(undefined1 *)(unaff_x22 + 0x280);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x1c8);
    _swift_bridgeObjectRetain_n(pcVar12,2);
    FUN_100a7c25c(pcVar12,puVar16,pcVar14);
    puVar16 = &DAT_100f2dbf8;
    _swift_allocObject(&DAT_100f2dbf8,0x31,7);
    *(undefined **)(unaff_x22 + 0x208) = puVar16;
    *(undefined8 *)(puVar16 + 0x10) = uVar18;
    puVar16[0x18] = uVar4;
    *(char **)(puVar16 + 0x20) = pcVar12;
    *(char **)(puVar16 + 0x28) = pcVar14;
    puVar16[0x30] = 0;
    plVar21 = (long *)0xa0;
    _swift_bridgeObjectRetain(pcVar12);
    _swift_retain(uVar18);
    _swift_bridgeObjectRetain(pcVar14);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x210) = plVar21;
    *plVar21 = unaff_x22;
    plVar21[1] = (long)FUN_100a7630c;
  }
  FUN_100912dec();
  return;
}



/* Address: 0x100a78268 | FUN_100a78268 */

void FUN_100a78268(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x200);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1d8);
  _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x240));
  _swift_bridgeObjectRelease(uVar3);
  _swift_bridgeObjectRelease(uVar4);
  FUN_100a7c288(uVar3,uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100a782d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a782d8 | FUN_100a782d8 */

void FUN_100a782d8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x200);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1f0);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x1d8));
  _swift_bridgeObjectRelease(uVar3);
  FUN_100a7c288(uVar3,uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100a78338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a7833c | FUN_100a7833c */

void FUN_100a7833c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x268);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x200);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1d8);
  _swift_bridgeObjectRelease(uVar4);
  FUN_100a5008c(unaff_x22 + 0xa0);
  _swift_bridgeObjectRelease(uVar5);
  FUN_100a7c288(uVar4,uVar1,uVar2);
  _swift_errorRelease(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000100a783bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a783c0 | FUN_100a783c0 */

void FUN_100a783c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

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
  FUN_100a7bff8(&local_70,param_3,param_4,param_5);
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



/* Address: 0x100a78490 | FUN_100a78490 */

void FUN_100a78490(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  byte bVar1;
  undefined7 extraout_var;
  undefined8 *puVar3;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  char local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 local_118;
  char local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 *puVar2;
  
  puVar3 = &local_1f0;
  if ((param_5 & 1) == 0) {
    FUN_100aa813c(param_3);
    if (((uint)param_2 & 0xff) == 1) {
      local_108 = 0xd00000000000001f;
      uStack_100 = 0x8000000100db8ce0;
      local_f8 = 0xd00000000000001f;
      uStack_f0 = 0x8000000100db8a70;
      local_e8 = 0x7a8;
      FUN_100a8067c(&local_90);
      goto LAB_100a78574;
    }
    FUN_100a7bd64(&local_158,param_4,param_3);
    uStack_b8 = uStack_130;
    local_c0 = local_138;
    uStack_a8 = uStack_120;
    uStack_b0 = uStack_128;
    local_a0 = local_118;
    uStack_d8 = uStack_150;
    local_e0 = local_158;
    uStack_c8 = uStack_140;
    uStack_d0 = uStack_148;
    FUN_100a7c134(param_3,param_2);
  }
  else {
    FUN_100a78668(&local_1a8,param_3,param_4,param_1,(uint)param_2 & 1);
    local_e0 = local_1a8;
    uStack_d8 = uStack_1a0;
    uStack_d0 = local_198;
    uStack_c8 = uStack_190;
    local_c0 = local_188;
    uStack_b8 = uStack_180;
    uStack_b0 = local_178;
    uStack_a8 = uStack_170;
    local_a0 = local_168;
    local_110 = local_160;
  }
  local_90 = local_e0;
  uStack_88 = uStack_d8;
  uStack_80 = uStack_d0;
  uStack_78 = uStack_c8;
  local_70 = local_c0;
  uStack_68 = uStack_b8;
  uStack_60 = uStack_b0;
  uStack_58 = uStack_a8;
  local_50 = local_a0;
  if (local_110 != '\x01') {
    return;
  }
LAB_100a78574:
  uStack_1c8 = uStack_68;
  local_1d0 = local_70;
  uStack_1b8 = uStack_58;
  uStack_1c0 = uStack_60;
  local_1b0 = local_50;
  uStack_1e8 = uStack_88;
  local_1f0 = local_90;
  uStack_1d8 = uStack_78;
  uStack_1e0 = uStack_80;
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  puVar2 = (undefined8 *)CONCAT71(extraout_var,bVar1);
  if ((bVar1 & 1) != 0) {
    FUN_100a500c0();
    _swift_willThrowTypedImpl(&local_1f0,&DAT_100f2de38,puVar2);
    puVar2 = puVar3;
  }
  FUN_100a500c0();
  _swift_allocError(&DAT_100f2de38,puVar2,0,0);
  puVar2[5] = uStack_68;
  puVar2[4] = local_70;
  puVar2[7] = uStack_58;
  puVar2[6] = uStack_60;
  puVar2[8] = local_50;
  puVar2[1] = uStack_88;
  *puVar2 = local_90;
  puVar2[3] = uStack_78;
  puVar2[2] = uStack_80;
  return;
}



/* Address: 0x100a78668 | FUN_100a78668 */

/* WARNING: Removing unreachable block (ram,0x000100a78718) */

void FUN_100a78668(ulong *param_1,char *param_2,char *param_3,undefined8 param_4)

{
  uint uVar1;
  char cVar2;
  long lVar3;
  char acVar4 [8];
  char acVar5 [8];
  code *pcVar6;
  int iVar7;
  __int32 _Var8;
  char *pcVar9;
  char *pcVar10;
  long lVar11;
  undefined *puVar12;
  char *pcVar13;
  Darwin *this;
  undefined *puVar14;
  _StringGuts _Var15;
  void *pvVar16;
  _StringGuts _Var18;
  Darwin *pDVar19;
  undefined1 uVar20;
  ulong *puVar21;
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
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  String SVar38;
  String SVar39;
  undefined4 local_234 [11];
  ulong local_208;
  Darwin *pDStack_200;
  char local_1f8 [8];
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong local_1d8;
  ulong uStack_1d0;
  ulong local_1c8;
  ulong local_1c0;
  Darwin *pDStack_1b8;
  char acStack_1b0 [8];
  undefined1 local_1a8;
  undefined7 uStack_1a7;
  undefined1 uStack_1a0;
  undefined7 uStack_19f;
  undefined1 local_198;
  undefined7 uStack_197;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined1 auStack_170 [16];
  undefined8 local_160;
  undefined4 local_158;
  ulong local_150;
  Darwin *pDStack_148;
  char acStack_140 [8];
  ulong uStack_138;
  ulong local_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong local_110;
  pthread_mutexattr_t local_100;
  char *local_f0;
  uint uStack_e8;
  uint uStack_e4;
  undefined4 local_e0;
  ulong local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 uStack_98;
  undefined7 local_97;
  undefined1 uStack_90;
  undefined8 uStack_8f;
  long local_78;
  undefined1 *puVar17;
  
  local_78 = *(long *)PTR____stack_chk_guard_100ea82f0;
  _swift_bridgeObjectRetain(param_3);
  pcVar10 = param_3;
  FUN_1005b4c38();
  pcVar9 = pcVar10;
  FUN_1005b4634();
  if (((ulong)pcVar9 & 1) != 0) {
    _swift_bridgeObjectRelease(pcVar10);
    pcVar10 = (char *)0x2e;
    FUN_1005b3548(0x2e,0xe100000000000000);
  }
  local_160 = 0x10010000000000;
  local_158 = 0x1010000;
  puVar14 = &DAT_100ee4520;
  FUN_1005b32d0(local_234,FUN_100a7c144,auStack_170,pcVar10);
  lVar11 = 0;
  FUN_100ab2d90();
  _swift_allocObject();
  puVar12 = &DAT_100ff6ea0;
  FUN_1000f7830(&DAT_100ff6ea0,&DAT_100c91fa0);
  _swift_allocObject();
  *(undefined4 *)(puVar12 + 0x10) = local_234[0];
  puVar12[0x14] = 0;
  local_100.__sig = 0;
  local_100.__opaque[0] = '\0';
  local_100.__opaque[1] = '\0';
  local_100.__opaque[2] = '\0';
  local_100.__opaque[3] = '\0';
  local_100.__opaque[4] = '\0';
  local_100.__opaque[5] = '\0';
  local_100.__opaque[6] = '\0';
  local_100.__opaque[7] = '\0';
  _pthread_mutexattr_init(&local_100);
  iVar7 = _pthread_mutex_init((pthread_mutex_t *)(puVar12 + 0x18),&local_100);
  if (iVar7 != 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100a79090);
    (*pcVar6)();
  }
  puVar21 = (ulong *)(lVar11 + 0x10);
  *puVar21 = (ulong)puVar12;
  *(undefined8 *)(lVar11 + 0x18) = param_4;
  *(char **)(lVar11 + 0x20) = pcVar10;
  *(undefined8 *)(lVar11 + 0x28) = 0;
  *(undefined8 *)(lVar11 + 0x30) = 0;
  *(undefined1 *)(lVar11 + 0x38) = 0;
  _swift_retain_n(param_4,2);
  _swift_retain(puVar12);
  _swift_bridgeObjectRetain(pcVar10);
  FUN_10036c934(0,0,0);
  iVar7 = _pthread_mutex_lock((pthread_mutex_t *)(puVar12 + 0x18));
  if (iVar7 != 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100a79094);
    (*pcVar6)();
  }
  uVar1 = *(uint *)(puVar12 + 0x10);
  cVar2 = puVar12[0x14];
  iVar7 = _pthread_mutex_unlock((pthread_mutex_t *)(puVar12 + 0x18));
  if (iVar7 != 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100a79098);
    (*pcVar6)();
  }
  _swift_bridgeObjectRelease(pcVar10);
  _swift_release(param_4);
  _swift_release(puVar12);
  _Var15.unknown = (undefined *)0x0;
  pcVar10 = (char *)0x0;
  FUN_1001b9e60(0);
  if (cVar2 == '\x01') {
    local_100.__sig = 0;
    local_100.__opaque[0] = '\0';
    local_100.__opaque[1] = '\0';
    local_100.__opaque[2] = '\0';
    local_100.__opaque[3] = '\0';
    local_100.__opaque[4] = '\0';
    local_100.__opaque[5] = '\0';
    local_100.__opaque[6] = '\0';
    local_100.__opaque[7] = -0x20;
    Swift::_StringGuts::grow(0x3a,_Var15);
    pvVar16 = (void *)0xec00000027207970;
    SVar22.bridgeObject = (void *)0xec00000027207970;
    SVar22.str = (char *)0x6f632074276e6143;
    SVar31.bridgeObject = puVar14;
    SVar31.str = pcVar10;
    Swift::String::append(SVar22,SVar31);
    FUN_1005b32e4();
    SVar23.bridgeObject = pvVar16;
    SVar23.str = param_2;
    SVar32.bridgeObject = puVar14;
    SVar32.str = pcVar10;
    Swift::String::append(SVar23,SVar32);
    _swift_bridgeObjectRelease(pvVar16);
    SVar24.bridgeObject = &DAT_e600000000000000;
    SVar24.str = (char *)0x27206f742027;
    puVar17 = &DAT_e600000000000000;
    SVar33.bridgeObject = puVar14;
    SVar33.str = pcVar10;
    Swift::String::append(SVar24,SVar33);
    FUN_1005b32e4();
    SVar25.bridgeObject = puVar17;
    SVar25.str = param_3;
    SVar34.bridgeObject = puVar14;
    SVar34.str = pcVar10;
    Swift::String::append(SVar25,SVar34);
    _swift_bridgeObjectRelease(puVar17);
    SVar26.bridgeObject = (void *)0x8000000100db8f30;
    SVar26.str = (char *)0xd000000000000024;
    SVar35.bridgeObject = puVar14;
    SVar35.str = pcVar10;
    Swift::String::append(SVar26,SVar35);
    local_208 = local_208 & 0xffffffffffffff00;
    pDStack_200 = (Darwin *)local_100.__sig;
    local_1f8[0] = local_100.__opaque[0];
    local_1f8[1] = local_100.__opaque[1];
    local_1f8[2] = local_100.__opaque[2];
    local_1f8[3] = local_100.__opaque[3];
    local_1f8[4] = local_100.__opaque[4];
    local_1f8[5] = local_100.__opaque[5];
    local_1f8[6] = local_100.__opaque[6];
    local_1f8[7] = local_100.__opaque[7];
    uStack_1e8 = 0xd000000000000024;
    uStack_1f0 = 0;
    uStack_1e0 = 0x8000000100db8f60;
    local_1d8 = 0xd00000000000001f;
    uStack_1d0 = 0x8000000100db8a70;
    local_1c8 = 0x66f;
    local_1c0 = local_1c0 & 0xffffffffffffff00;
    pDStack_1b8 = (Darwin *)local_100.__sig;
    acStack_1b0[0] = local_100.__opaque[0];
    acStack_1b0[1] = local_100.__opaque[1];
    acStack_1b0[2] = local_100.__opaque[2];
    acStack_1b0[3] = local_100.__opaque[3];
    acStack_1b0[4] = local_100.__opaque[4];
    acStack_1b0[5] = local_100.__opaque[5];
    acStack_1b0[6] = local_100.__opaque[6];
    acStack_1b0[7] = local_100.__opaque[7];
    uStack_1a0 = 0x24;
    uStack_19f = 0xd0000000000000;
    local_1a8 = 0;
    uStack_1a7 = 0;
    local_198 = 0x60;
    uStack_197 = 0x8000000100db8f;
    uStack_190 = 0xd00000000000001f;
    local_188 = 0x8000000100db8a70;
    local_180 = 0x66f;
    FUN_100a50050(&local_208,&local_100);
    FUN_100a5008c(&local_1c0);
    uStack_a8 = *(undefined8 *)(lVar11 + 0x18);
    local_b0 = *puVar21;
    local_a0 = *(undefined8 *)(lVar11 + 0x20);
    uStack_98 = (undefined1)*(undefined8 *)(lVar11 + 0x28);
    uStack_8f = *(undefined8 *)(lVar11 + 0x31);
    local_97 = (undefined7)*(undefined8 *)(lVar11 + 0x29);
    uStack_90 = (undefined1)((ulong)*(undefined8 *)(lVar11 + 0x29) >> 0x38);
    local_150 = local_208;
    pDStack_148 = pDStack_200;
    acStack_140 = local_1f8;
    uStack_138 = uStack_1f0;
    local_130 = uStack_1e8;
    uStack_128 = uStack_1e0;
    uStack_120 = local_1d8;
    uStack_118 = uStack_1d0;
    local_110 = local_1c8;
  }
  else {
    pcVar9 = param_2;
    FUN_100aa813c();
    if (((uint)_Var15.unknown & 0xff) == 1) {
      local_208 = 0xd00000000000001f;
      pDStack_200 = (Darwin *)0x8000000100db8ce0;
      local_1f8[0] = '\x1f';
      local_1f8[1] = '\0';
      local_1f8[2] = '\0';
      local_1f8[3] = '\0';
      local_1f8[4] = '\0';
      local_1f8[5] = '\0';
      local_1f8[6] = '\0';
      local_1f8[7] = -0x30;
      uStack_1f0 = 0x8000000100db8a70;
      uStack_1e8 = 0x7a8;
      FUN_100a8067c(&local_150,pcVar9,param_2,&local_208);
    }
    else {
      pcVar13 = (char *)0x6;
      puVar12 = _Var15.unknown;
      FUN_100ab3e78();
      local_100.__sig = 0x6e696c2d706d742e;
      local_100.__opaque[0] = 'k';
      local_100.__opaque[1] = '-';
      local_100.__opaque[2] = '\0';
      local_100.__opaque[3] = '\0';
      local_100.__opaque[4] = '\0';
      local_100.__opaque[5] = '\0';
      local_100.__opaque[6] = '\0';
      local_100.__opaque[7] = -0x16;
      SVar27.bridgeObject = puVar12;
      SVar27.str = pcVar13;
      SVar36.bridgeObject = puVar14;
      SVar36.str = pcVar10;
      Swift::String::append(SVar27,SVar36);
      _swift_bridgeObjectRelease(puVar12);
      this = (Darwin *)local_100.__sig;
      thunk_FUN_1005b3cd0(local_100.__sig,local_100.__opaque);
      Darwin::set_errno(this,0);
      _Var18.unknown = (undefined *)&local_100;
      pDVar19 = this;
      puVar14 = PTR___type_metadata_for_Swift_Int32_100eadbd0;
      local_f0 = pcVar9;
      uStack_e8 = uVar1;
      FUN_1005b32d0(&local_150,FUN_100a7c158);
      if ((int)local_150 != -1) {
        pcVar10 = param_3;
        FUN_1005b4b8c();
        if (pcVar10 == (char *)0x0) {
          _swift_bridgeObjectRelease(this);
          local_100.__sig = 0;
          local_100.__opaque[0] = '\0';
          local_100.__opaque[1] = '\0';
          local_100.__opaque[2] = '\0';
          local_100.__opaque[3] = '\0';
          local_100.__opaque[4] = '\0';
          local_100.__opaque[5] = '\0';
          local_100.__opaque[6] = '\0';
          local_100.__opaque[7] = -0x20;
          Swift::_StringGuts::grow(0x33,_Var18);
          pvVar16 = (void *)0xef27206f74207970;
          SVar28.bridgeObject = (void *)0xef27206f74207970;
          SVar28.str = (char *)0x6f632074276e6143;
          SVar37.bridgeObject = puVar14;
          SVar37.str = (char *)pDVar19;
          Swift::String::append(SVar28,SVar37);
          FUN_1005b32e4();
          SVar29.bridgeObject = pvVar16;
          SVar29.str = param_3;
          SVar38.bridgeObject = puVar14;
          SVar38.str = (char *)pDVar19;
          Swift::String::append(SVar29,SVar38);
          _swift_bridgeObjectRelease(pvVar16);
          SVar30.bridgeObject = (void *)0x8000000100db8f90;
          SVar30.str = (char *)0xd000000000000022;
          SVar39.bridgeObject = puVar14;
          SVar39.str = (char *)pDVar19;
          Swift::String::append(SVar30,SVar39);
          acVar4 = local_100.__opaque;
          lVar3 = local_100.__sig;
          FUN_100a7c134(pcVar9,(ulong)_Var15.unknown & 0xffffffff);
          acVar5 = local_100.__opaque;
          local_208 = CONCAT71(local_208._1_7_,1);
          pDStack_200 = (Darwin *)lVar3;
          local_100.__opaque[0] = acVar4[0];
          local_100.__opaque[1] = acVar4[1];
          local_100.__opaque[2] = acVar4[2];
          local_100.__opaque[3] = acVar4[3];
          local_100.__opaque[4] = acVar4[4];
          local_100.__opaque[5] = acVar4[5];
          local_100.__opaque[6] = acVar4[6];
          local_100.__opaque[7] = acVar4[7];
          local_1f8[0] = local_100.__opaque[0];
          local_1f8[1] = local_100.__opaque[1];
          local_1f8[2] = local_100.__opaque[2];
          local_1f8[3] = local_100.__opaque[3];
          local_1f8[4] = local_100.__opaque[4];
          local_1f8[5] = local_100.__opaque[5];
          local_1f8[6] = local_100.__opaque[6];
          local_1f8[7] = local_100.__opaque[7];
          uStack_1e8 = 0xd000000000000024;
          uStack_1f0 = 0;
          uStack_1e0 = 0x8000000100db8f60;
          local_1d8 = 0xd00000000000001f;
          uStack_1d0 = 0x8000000100db8a70;
          local_1c8 = 0x692;
          local_1c0 = CONCAT71(local_1c0._1_7_,1);
          pDStack_1b8 = (Darwin *)lVar3;
          local_100.__opaque[0] = acVar4[0];
          local_100.__opaque[1] = acVar4[1];
          local_100.__opaque[2] = acVar4[2];
          local_100.__opaque[3] = acVar4[3];
          local_100.__opaque[4] = acVar4[4];
          local_100.__opaque[5] = acVar4[5];
          local_100.__opaque[6] = acVar4[6];
          local_100.__opaque[7] = acVar4[7];
          acStack_1b0[0] = local_100.__opaque[0];
          acStack_1b0[1] = local_100.__opaque[1];
          acStack_1b0[2] = local_100.__opaque[2];
          acStack_1b0[3] = local_100.__opaque[3];
          acStack_1b0[4] = local_100.__opaque[4];
          acStack_1b0[5] = local_100.__opaque[5];
          acStack_1b0[6] = local_100.__opaque[6];
          acStack_1b0[7] = local_100.__opaque[7];
          uStack_1a0 = 0x24;
          uStack_19f = 0xd0000000000000;
          local_1a8 = 0;
          uStack_1a7 = 0;
          local_198 = 0x60;
          uStack_197 = 0x8000000100db8f;
          uStack_190 = 0xd00000000000001f;
          local_188 = 0x8000000100db8a70;
          local_180 = 0x692;
          local_100.__opaque = acVar5;
          FUN_100a50050(&local_208,&local_100);
          FUN_100a5008c(&local_1c0);
          uStack_a8 = *(undefined8 *)(lVar11 + 0x18);
          local_b0 = *puVar21;
          local_a0 = *(undefined8 *)(lVar11 + 0x20);
          uStack_98 = (undefined1)*(undefined8 *)(lVar11 + 0x28);
          uStack_8f = *(undefined8 *)(lVar11 + 0x31);
          local_97 = (undefined7)*(undefined8 *)(lVar11 + 0x29);
          uStack_90 = (undefined1)((ulong)*(undefined8 *)(lVar11 + 0x29) >> 0x38);
          local_150 = local_208;
          pDStack_148 = pDStack_200;
          acStack_140 = local_1f8;
          uStack_138 = uStack_1f0;
          local_130 = uStack_1e8;
          uStack_128 = uStack_1e0;
          uStack_120 = local_1d8;
          uStack_118 = uStack_1d0;
          local_110 = local_1c8;
        }
        else {
          puVar14 = &DAT_100ff6eb0;
          FUN_1000f7830(&DAT_100ff6eb0,&DAT_100c91fa8);
          _swift_allocObject();
          *(undefined8 *)(puVar14 + 0x18) = 2;
          *(undefined8 *)(puVar14 + 0x10) = 1;
          *(char **)(puVar14 + 0x20) = pcVar10;
          *(undefined **)(puVar14 + 0x28) = _Var18.unknown;
          *(Darwin **)(puVar14 + 0x30) = pDVar19;
          pcVar10 = (char *)0x0;
          thunk_FUN_1005ae230(0,0,puVar14);
          Darwin::set_errno(this,0);
          local_e0 = 0;
          local_f0 = pcVar10;
          uStack_e8 = uVar1;
          uStack_e4 = uVar1;
          FUN_1005b32d0(&local_150,FUN_100a7c174,&local_100,this,
                        PTR___type_metadata_for_Swift_Int32_100eadbd0);
          if ((int)local_150 != -1) {
            _swift_bridgeObjectRelease(this);
            _swift_bridgeObjectRelease(pcVar10);
            FUN_100a7c134(pcVar9,(ulong)_Var15.unknown & 0xffffffff);
            pDStack_1b8 = *(Darwin **)(lVar11 + 0x18);
            local_1c0 = *puVar21;
            acStack_1b0 = *(char (*) [8])(lVar11 + 0x20);
            local_1a8 = (undefined1)*(undefined8 *)(lVar11 + 0x28);
            uStack_19f = (undefined7)*(undefined8 *)(lVar11 + 0x31);
            local_198 = (undefined1)((ulong)*(undefined8 *)(lVar11 + 0x31) >> 0x38);
            uStack_1a7 = (undefined7)*(undefined8 *)(lVar11 + 0x29);
            uStack_1a0 = (undefined1)((ulong)*(undefined8 *)(lVar11 + 0x29) >> 0x38);
            FUN_100ab2b20(&local_100,1);
            FUN_1000fb4c4(&local_100,&DAT_100ff6ea8,&DAT_100c93a30);
            _swift_release(lVar11);
            uVar20 = 0;
            goto LAB_100a78e18;
          }
          _Var8 = Darwin::get_errno();
          Darwin::set_errno(this,0);
          local_f0 = (char *)(ulong)uVar1;
          FUN_1005b32d0(&local_150,FUN_100a7c194,&local_100,this,
                        PTR___type_metadata_for_Swift_Int32_100eadbd0);
          if ((int)local_150 == -1) {
            Darwin::get_errno();
          }
          local_208 = 0xd000000000000024;
          pDStack_200 = (Darwin *)0x8000000100db8f60;
          local_1f8[0] = '\x1f';
          local_1f8[1] = '\0';
          local_1f8[2] = '\0';
          local_1f8[3] = '\0';
          local_1f8[4] = '\0';
          local_1f8[5] = '\0';
          local_1f8[6] = '\0';
          local_1f8[7] = -0x30;
          uStack_1f0 = 0x8000000100db8a70;
          uStack_1e8 = 0x6a9;
          FUN_100a7f894(&local_150,0x7461656d616e6572,0xec000000706e5f78,_Var8,this,pcVar10,
                        &local_208);
          _swift_bridgeObjectRelease(this);
          _swift_bridgeObjectRelease(pcVar10);
          FUN_100a7c134(pcVar9,(ulong)_Var15.unknown & 0xffffffff);
          pDStack_1b8 = *(Darwin **)(lVar11 + 0x18);
          local_1c0 = *puVar21;
          acStack_1b0 = *(char (*) [8])(lVar11 + 0x20);
          local_1a8 = (undefined1)*(undefined8 *)(lVar11 + 0x28);
          uStack_19f = (undefined7)*(undefined8 *)(lVar11 + 0x31);
          local_198 = (undefined1)((ulong)*(undefined8 *)(lVar11 + 0x31) >> 0x38);
          uStack_1a7 = (undefined7)*(undefined8 *)(lVar11 + 0x29);
          uStack_1a0 = (undefined1)((ulong)*(undefined8 *)(lVar11 + 0x29) >> 0x38);
        }
        goto LAB_100a78df0;
      }
      _Var8 = Darwin::get_errno();
      local_208 = 0xd000000000000024;
      pDStack_200 = (Darwin *)0x8000000100db8f60;
      local_1f8[0] = '\x1f';
      local_1f8[1] = '\0';
      local_1f8[2] = '\0';
      local_1f8[3] = '\0';
      local_1f8[4] = '\0';
      local_1f8[5] = '\0';
      local_1f8[6] = '\0';
      local_1f8[7] = -0x30;
      uStack_1f0 = 0x8000000100db8a70;
      uStack_1e8 = 0x687;
      FUN_100a7ff78(&local_150,0x616b6e696c6d7973,0xe900000000000074,_Var8,this,pcVar9,&local_208);
      _swift_bridgeObjectRelease(this);
      FUN_100a7c134(pcVar9,(ulong)_Var15.unknown & 0xffffffff);
    }
    pDStack_1b8 = *(Darwin **)(lVar11 + 0x18);
    local_1c0 = *puVar21;
    acStack_1b0 = *(char (*) [8])(lVar11 + 0x20);
    local_1a8 = (undefined1)*(undefined8 *)(lVar11 + 0x28);
    uStack_19f = (undefined7)*(undefined8 *)(lVar11 + 0x31);
    local_198 = (undefined1)((ulong)*(undefined8 *)(lVar11 + 0x31) >> 0x38);
    uStack_1a7 = (undefined7)*(undefined8 *)(lVar11 + 0x29);
    uStack_1a0 = (undefined1)((ulong)*(undefined8 *)(lVar11 + 0x29) >> 0x38);
  }
LAB_100a78df0:
  uVar20 = 1;
  FUN_100ab2b20(&local_100,1);
  FUN_1000fb4c4(&local_100,&DAT_100ff6ea8,&DAT_100c93a30);
  _swift_release(lVar11);
LAB_100a78e18:
  param_1[5] = uStack_128;
  param_1[4] = local_130;
  param_1[7] = uStack_118;
  param_1[6] = uStack_120;
  param_1[8] = local_110;
  param_1[1] = (ulong)pDStack_148;
  *param_1 = local_150;
  param_1[3] = uStack_138;
  *(char (*) [8])(param_1 + 2) = acStack_140;
  *(undefined1 *)(param_1 + 9) = uVar20;
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100a7909c | FUN_100a7909c */

void FUN_100a7909c(Darwin *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  __int32 _Var1;
  undefined4 extraout_var;
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
  undefined8 *puVar2;
  
  Darwin::set_errno(param_1,0);
  FUN_1005b32d0(&local_c4,FUN_100aa7794,0,param_2,PTR___type_metadata_for_Swift_Int32_100eadbd0);
  if (local_c4 == -1) {
    _Var1 = Darwin::get_errno();
    puVar2 = (undefined8 *)CONCAT44(extraout_var,_Var1);
    if (_Var1 == 2) {
      *(undefined8 *)param_1 = 0;
    }
    else {
      local_78 = param_3;
      uStack_70 = param_4;
      local_68 = param_5;
      uStack_60 = param_6;
      local_58 = param_7;
      FUN_100a7f4e4(&local_c0,puVar2,param_2,&local_78);
      FUN_100a500c0();
      _swift_allocError(&DAT_100f2de38,puVar2,0,0);
      puVar2[5] = uStack_98;
      puVar2[4] = local_a0;
      puVar2[7] = uStack_88;
      puVar2[6] = uStack_90;
      puVar2[8] = local_80;
      puVar2[1] = uStack_b8;
      *puVar2 = local_c0;
      puVar2[3] = uStack_a8;
      puVar2[2] = uStack_b0;
      _swift_willThrow();
    }
  }
  else {
    *(undefined8 *)param_1 = 1;
  }
  return;
}



/* Address: 0x100a791b4 | FUN_100a791b4 */

void FUN_100a791b4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x100a791d8 | FUN_100a791d8 */

void FUN_100a791d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10072a740;
  FUN_100a6e4c8(param_1,param_2,param_3,uVar1,uVar2);
  return;
}



/* Address: 0x100a79258 | FUN_100a79258 */

void FUN_100a79258(void)

{
  FUN_100a7c2f4(FUN_100a78490);
  return;
}



/* Address: 0x100a79274 | FUN_100a79274 */

void FUN_100a79274(void)

{
  FUN_100a7c2f4(FUN_100a783c0);
  return;
}



/* Address: 0x100a79290 | FUN_100a79290 */

void FUN_100a79290(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x100a792b4 | FUN_100a792b4 */

void FUN_100a792b4(void)

{
  long unaff_x20;
  
  FUN_100a6ede8(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100a792cc | FUN_100a792cc */

void FUN_100a792cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  char cVar2;
  code *pcVar3;
  int iVar4;
  long *unaff_x20;
  long lVar5;
  undefined8 uVar6;
  long local_98;
  long lStack_90;
  long local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  long local_68;
  long lStack_60;
  long local_58;
  
  lVar5 = *unaff_x20;
  iVar4 = _pthread_mutex_lock((pthread_mutex_t *)(lVar5 + 0x18));
  if (iVar4 != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100a793f4);
    (*pcVar3)();
  }
  uVar1 = *(undefined4 *)(lVar5 + 0x10);
  cVar2 = *(char *)(lVar5 + 0x14);
  iVar4 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar5 + 0x18));
  if (iVar4 == 0) {
    if (cVar2 == '\x01') {
      FUN_100aaeae0(&local_98);
      FUN_100a500c0();
      _swift_allocError(&DAT_100f2de38,unaff_x20,0,0);
      unaff_x20[5] = lStack_70;
      unaff_x20[4] = local_78;
      unaff_x20[7] = lStack_60;
      unaff_x20[6] = local_68;
      unaff_x20[8] = local_58;
      unaff_x20[1] = lStack_90;
      *unaff_x20 = local_98;
      unaff_x20[3] = lStack_80;
      unaff_x20[2] = local_88;
      _swift_willThrow();
    }
    else {
      uVar6 = *(undefined8 *)(param_1 + 0x10);
      _swift_bridgeObjectRetain(param_3);
      FUN_100a4c06c();
      FUN_100aae958(param_1 + 0x20,uVar6,uVar1,param_2,param_3);
      _swift_bridgeObjectRelease(param_3);
      FUN_100a7b870();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100a793f8);
  (*pcVar3)();
}



/* Address: 0x100a793f8 | FUN_100a793f8 */

void FUN_100a793f8(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  plVar1 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10092bc5c;
  FUN_100a68b38(param_2);
  return;
}



/* Address: 0x100a79464 | FUN_100a79464 */

void FUN_100a79464(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = *param_4;
  iVar1 = *param_2;
  plVar2 = (long *)(ulong)(uint)param_2[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100a794e4;
                    /* WARNING: Could not recover jumptable at 0x000100a794e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_2))(plVar2,param_1,(undefined8 *)(unaff_x22 + 0x10));
  return;
}



/* Address: 0x100a794e4 | FUN_100a794e4 */

void FUN_100a794e4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x20) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x18));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1000e5808;
  }
  else {
    pcVar1 = FUN_1006c19bc;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a79548 | FUN_100a79548 */

void FUN_100a79548(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = *param_3;
  _swift_task_switch(FUN_100a79564,0,0);
  return;
}



/* Address: 0x100a79564 | FUN_100a79564 */

void FUN_100a79564(void)

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
  puVar1 = &DAT_100f2da90;
  _swift_allocObject(&DAT_100f2da90,0x39,7);
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
  plVar2[1] = (long)FUN_100a4bc1c;
  FUN_100912dec();
  return;
}



/* Address: 0x100a79624 | FUN_100a79624 */

void FUN_100a79624(undefined8 *param_1,char *param_2,ulong param_3)

{
  code *pcVar1;
  undefined1 *puVar2;
  ushort uVar3;
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
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  bool bVar20;
  __uint16 _Var21;
  int iVar22;
  undefined *puVar23;
  int *piVar24;
  undefined8 *puVar25;
  _StringGuts _Var26;
  void *pvVar27;
  char *pcVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined8 uVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  String SVar38;
  String SVar39;
  String SVar40;
  String SVar41;
  undefined8 local_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined *puStack_608;
  undefined8 local_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 local_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 local_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 local_5a0;
  undefined8 uStack_598;
  undefined1 local_590;
  undefined1 local_588;
  undefined7 uStack_587;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined *local_570;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 local_550;
  undefined8 local_548;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined *local_4d8;
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined1 local_460;
  undefined1 local_45f;
  ushort local_45e;
  undefined4 uStack_45c;
  undefined8 local_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined *puStack_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined1 uStack_348;
  undefined7 uStack_347;
  undefined1 local_340;
  undefined7 uStack_33f;
  undefined1 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined *puStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined1 local_2a0;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined1 uStack_1c8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined *puStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 local_120;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  
  puVar23 = &DAT_100ff6e98;
  FUN_1000f7830(&DAT_100ff6e98,&DAT_100c91f78);
  pcVar1 = FUN_100aa6f78;
  if ((param_3 & 1) == 0) {
    pcVar1 = FUN_100aa6f28;
  }
  _Var26.unknown = (undefined *)0x0;
  pcVar28 = param_2;
  FUN_1005b32d0(&local_108,pcVar1);
  uStack_148 = uStack_a0;
  local_150 = local_a8;
  uStack_138 = uStack_90;
  local_140 = uStack_98;
  uStack_128 = uStack_80;
  local_130 = local_88;
  local_120 = local_78;
  uStack_188 = uStack_e0;
  local_190 = local_e8;
  uStack_178 = uStack_d0;
  local_180 = uStack_d8;
  uStack_168 = uStack_c0;
  local_170 = local_c8;
  uStack_158 = uStack_b0;
  local_160 = uStack_b8;
  uStack_1a8 = uStack_100;
  local_1b0 = local_108;
  puStack_198 = puStack_f0;
  local_1a0 = uStack_f8;
  iVar22 = (int)&local_1b0;
  FUN_10092c924();
  if (iVar22 == 1) {
    uStack_2c8 = uStack_148;
    local_2d0 = local_150;
    uStack_2b8 = uStack_138;
    uStack_2c0 = local_140;
    uStack_2a8 = uStack_128;
    local_2b0 = local_130;
    local_2a0 = local_120;
    uStack_308 = uStack_188;
    local_310 = local_190;
    uStack_2f8 = uStack_178;
    local_300 = local_180;
    uStack_2e8 = uStack_168;
    local_2f0 = local_170;
    uStack_2d8 = uStack_158;
    local_2e0 = local_160;
    uStack_328 = uStack_1a8;
    local_330 = local_1b0;
    puStack_318 = puStack_198;
    local_320 = local_1a0;
    piVar24 = (int *)&local_330;
    FUN_100004520();
    iVar22 = *piVar24;
    if (iVar22 != 2) {
      bVar20 = (param_3 & 1) == 0;
      uVar31 = 0x746174736c;
      if (bVar20) {
        uVar31 = 0x74617473;
      }
      puVar2 = &DAT_e500000000000000;
      if (bVar20) {
        puVar2 = &DAT_e400000000000000;
      }
      if (iVar22 == 9) {
        local_290 = 0;
        uStack_288 = 0xe000000000000000;
        Swift::_StringGuts::grow(0x39,_Var26);
        pvVar27 = (void *)0x8000000100db8e20;
        SVar32.bridgeObject = (void *)0x8000000100db8e20;
        SVar32.str = (char *)0xd000000000000021;
        SVar37.bridgeObject = puVar23;
        SVar37.str = pcVar28;
        Swift::String::append(SVar32,SVar37);
        FUN_1005b32e4();
        SVar33.bridgeObject = pvVar27;
        SVar33.str = param_2;
        SVar38.bridgeObject = puVar23;
        SVar38.str = pcVar28;
        Swift::String::append(SVar33,SVar38);
        _swift_bridgeObjectRelease(pvVar27);
        puVar25 = (undefined8 *)0xd000000000000016;
        SVar34.bridgeObject = (void *)0x8000000100db8e50;
        SVar34.str = (char *)0xd000000000000016;
        SVar39.bridgeObject = puVar23;
        SVar39.str = pcVar28;
        Swift::String::append(SVar34,SVar39);
        uVar30 = 0;
      }
      else {
        local_290 = 0;
        uStack_288 = 0xe000000000000000;
        Swift::_StringGuts::grow(0x25,_Var26);
        _swift_bridgeObjectRelease(uStack_288);
        local_290 = 0xd000000000000021;
        uStack_288 = 0x8000000100db8e20;
        FUN_1005b32e4();
        SVar35.bridgeObject = _Var26.unknown;
        SVar35.str = param_2;
        SVar40.bridgeObject = puVar23;
        SVar40.str = pcVar28;
        Swift::String::append(SVar35,SVar40);
        _swift_bridgeObjectRelease(_Var26.unknown);
        SVar36.bridgeObject = &SUB_e200000000000000;
        SVar36.str = (char *)0x2e27;
        puVar25 = (undefined8 *)0x2e27;
        SVar41.bridgeObject = puVar23;
        SVar41.str = pcVar28;
        Swift::String::append(SVar36,SVar41);
        uVar30 = 8;
      }
      uVar5 = uStack_288;
      uVar4 = local_290;
      FUN_100a57a58();
      puVar23 = &DAT_100f2dfc8;
      _swift_allocError(&DAT_100f2dfc8,puVar25,0,0);
      *puVar25 = uVar31;
      puVar25[1] = puVar2;
      *(int *)(puVar25 + 2) = iVar22;
      uStack_580 = uVar4;
      uStack_578 = uVar5;
      local_568 = 0xd000000000000027;
      uStack_560 = 0x8000000100db8df0;
      uStack_558 = 0xd00000000000001f;
      local_550 = 0x8000000100db8a70;
      local_548 = 0x3d3;
      local_4f0 = CONCAT71(local_4f0._1_7_,uVar30);
      uStack_4e8 = uVar4;
      uStack_4e0 = uVar5;
      local_4d0 = 0xd000000000000027;
      uStack_4c8 = 0x8000000100db8df0;
      uStack_4c0 = 0xd00000000000001f;
      local_4b8 = 0x8000000100db8a70;
      local_4b0 = 0x3d3;
      local_588 = uVar30;
      local_570 = puVar23;
      local_4d8 = puVar23;
      FUN_100a50050(&local_588,&local_290);
      FUN_100a5008c(&local_4f0);
      uStack_3e8 = uStack_560;
      local_3f0 = local_568;
      uStack_3d8 = local_550;
      uStack_3e0 = uStack_558;
      local_3d0 = local_548;
      local_410 = CONCAT71(uStack_587,local_588);
      uStack_408 = uStack_580;
      puStack_3f8 = local_570;
      uStack_400 = uStack_578;
      FUN_100a7bee0(&local_410);
      uStack_1e8 = uStack_368;
      local_1f0 = local_370;
      uStack_1d8 = uStack_358;
      local_1e0 = uStack_360;
      uStack_1c8 = uStack_348;
      local_1d0 = local_350;
      uVar31 = CONCAT17(uStack_338,uStack_33f);
      goto LAB_100a79af0;
    }
    FUN_100a7beec(&local_4f0);
  }
  else {
    uStack_5b8 = uStack_148;
    local_5c0 = local_150;
    uStack_5a8 = uStack_138;
    uStack_5b0 = local_140;
    uStack_598 = uStack_128;
    local_5a0 = local_130;
    local_590 = local_120;
    uStack_5f8 = uStack_188;
    local_600 = local_190;
    uStack_5e8 = uStack_178;
    uStack_5f0 = local_180;
    uStack_5d8 = uStack_168;
    local_5e0 = local_170;
    uStack_5c8 = uStack_158;
    uStack_5d0 = local_160;
    uStack_618 = uStack_1a8;
    local_620 = local_1b0;
    puStack_608 = puStack_198;
    uStack_610 = local_1a0;
    puVar25 = &local_620;
    FUN_100004520();
    FUN_100a4af18(&local_588);
    uStack_328 = puVar25[1];
    local_330 = *puVar25;
    puStack_318 = (undefined *)puVar25[3];
    local_320 = puVar25[2];
    uStack_308 = puVar25[5];
    local_310 = puVar25[4];
    uStack_2f8 = puVar25[7];
    local_300 = puVar25[6];
    uStack_2e8 = puVar25[9];
    local_2f0 = puVar25[8];
    uStack_2d8 = puVar25[0xb];
    local_2e0 = puVar25[10];
    uStack_2c8 = puVar25[0xd];
    local_2d0 = puVar25[0xc];
    uStack_2b8 = puVar25[0xf];
    uStack_2c0 = puVar25[0xe];
    uStack_2a8 = puVar25[0x11];
    local_2b0 = puVar25[0x10];
    FUN_1005b8d54(&local_330);
    uVar30 = local_2a0;
    uVar19 = uStack_2a8;
    uVar18 = local_2b0;
    uVar17 = uStack_2b8;
    uVar16 = uStack_2c0;
    uVar15 = uStack_2c8;
    uVar14 = local_2d0;
    uVar13 = uStack_2d8;
    uVar12 = local_2e0;
    uVar11 = uStack_2e8;
    uVar10 = local_2f0;
    uVar9 = uStack_2f8;
    uVar8 = local_300;
    uVar7 = uStack_308;
    uVar6 = local_310;
    puVar23 = puStack_318;
    uVar5 = local_320;
    uVar4 = uStack_328;
    uVar31 = local_330;
    uVar3 = *(ushort *)((long)puVar25 + 4);
    uVar29 = (undefined1)uVar3;
    FUN_100a87258();
    _Var21 = Darwin::get_S_IFMT();
    local_45e = uVar3 & (_Var21 ^ 0xffff);
    local_458 = puVar25[0xc];
    local_450 = puVar25[2];
    uStack_440 = puVar25[5];
    uStack_448 = puVar25[4];
    local_430 = puVar25[7];
    uStack_438 = puVar25[6];
    local_420 = puVar25[9];
    uStack_428 = puVar25[8];
    local_460 = uVar30;
    uStack_4a8 = uVar11;
    local_4b0 = uVar10;
    uStack_498 = uVar13;
    uStack_4a0 = uVar12;
    uStack_4c8 = uVar7;
    local_4d0 = uVar6;
    local_4b8 = uVar9;
    uStack_4c0 = uVar8;
    uStack_478 = uVar17;
    local_480 = uVar16;
    uStack_468 = uVar19;
    local_470 = uVar18;
    uStack_488 = uVar15;
    local_490 = uVar14;
    uStack_4e8 = uVar4;
    local_4f0 = uVar31;
    local_4d8 = puVar23;
    uStack_4e0 = uVar5;
    local_45f = uVar29;
    FUN_100004520(&local_4f0);
  }
  uStack_368 = uStack_448;
  local_370 = local_450;
  uStack_358 = uStack_438;
  uStack_360 = uStack_440;
  uStack_348 = (undefined1)uStack_428;
  uStack_347 = (undefined7)((ulong)uStack_428 >> 8);
  local_350 = local_430;
  local_340 = (undefined1)local_420;
  uStack_33f = (undefined7)((ulong)local_420 >> 8);
  uStack_3a8 = uStack_488;
  local_3b0 = local_490;
  uStack_398 = uStack_478;
  uStack_3a0 = local_480;
  uStack_380 = CONCAT44(uStack_45c,CONCAT22(local_45e,CONCAT11(local_45f,local_460)));
  uStack_388 = uStack_468;
  local_390 = local_470;
  uStack_378 = local_458;
  uStack_3e8 = uStack_4c8;
  local_3f0 = local_4d0;
  uStack_3d8 = local_4b8;
  uStack_3e0 = uStack_4c0;
  uStack_3c8 = uStack_4a8;
  local_3d0 = local_4b0;
  uStack_3b8 = uStack_498;
  uStack_3c0 = uStack_4a0;
  uStack_408 = uStack_4e8;
  local_410 = local_4f0;
  puStack_3f8 = local_4d8;
  uStack_400 = uStack_4e0;
  FUN_100a7bf20(&local_410);
  uStack_1e8 = uStack_368;
  local_1f0 = local_370;
  uStack_1d8 = uStack_358;
  local_1e0 = uStack_360;
  uStack_1c8 = uStack_348;
  local_1d0 = local_350;
  uVar31 = CONCAT17(uStack_338,uStack_33f);
LAB_100a79af0:
  param_1[0x15] = uStack_1e8;
  param_1[0x14] = local_1f0;
  param_1[0x17] = uStack_1d8;
  param_1[0x16] = local_1e0;
  param_1[0x19] = CONCAT71(uStack_347,uStack_1c8);
  param_1[0x18] = local_1d0;
  *(undefined8 *)((long)param_1 + 0xd1) = uVar31;
  *(ulong *)((long)param_1 + 0xc9) = CONCAT17(local_340,uStack_347);
  param_1[0xd] = uStack_3a8;
  param_1[0xc] = local_3b0;
  param_1[0xf] = uStack_398;
  param_1[0xe] = uStack_3a0;
  param_1[0x11] = uStack_388;
  param_1[0x10] = local_390;
  param_1[0x13] = uStack_378;
  param_1[0x12] = uStack_380;
  param_1[5] = uStack_3e8;
  param_1[4] = local_3f0;
  param_1[7] = uStack_3d8;
  param_1[6] = uStack_3e0;
  param_1[9] = uStack_3c8;
  param_1[8] = local_3d0;
  param_1[0xb] = uStack_3b8;
  param_1[10] = uStack_3c0;
  param_1[1] = uStack_408;
  *param_1 = local_410;
  param_1[3] = puStack_3f8;
  param_1[2] = uStack_400;
  return;
}



/* Address: 0x100a79ba8 | FUN_100a79ba8 */

void FUN_100a79ba8(undefined8 *param_1,Darwin *param_2,ulong param_3,undefined2 param_4,uint param_5
                  )

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  __int32 _Var5;
  int iVar6;
  Darwin *pDVar7;
  Darwin *pDVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  Darwin *this;
  undefined1 uVar15;
  undefined8 local_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 local_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 local_600;
  int local_5f4 [3];
  Darwin *local_5e8;
  undefined8 local_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 local_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 local_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 local_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 local_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 local_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 local_520;
  undefined8 uStack_50f;
  undefined8 local_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 local_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_42f;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
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
  undefined8 uStack_34f;
  undefined8 local_340;
  undefined8 uStack_338;
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
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_18f;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  local_5e8 = param_2;
  _swift_bridgeObjectRetain();
  thunk_FUN_1005b2e84();
  this = local_5e8;
  pDVar7 = local_5e8;
  FUN_1005b4634();
  if (((ulong)pDVar7 & 1) == 0) {
    Darwin::set_errno(this,0);
    local_250 = CONCAT62(local_250._2_6_,param_4);
    puVar12 = &local_260;
    pDVar7 = this;
    FUN_1005b32d0(&local_420,FUN_100a7c31c,puVar12,this,
                  PTR___type_metadata_for_Swift_Int32_100eadbd0);
    puVar11 = PTR___swiftEmptyArrayStorage_100eae0d8;
    while ((int)local_420 == -1) {
      _Var5 = Darwin::get_errno();
      if (_Var5 == 0x11) {
        if ((param_5 & 1) == 0) {
          local_260 = 0xd000000000000048;
          uStack_258 = 0x8000000100db9100;
          local_250 = 0xd00000000000001f;
          local_248 = 0x8000000100db8a70;
          uStack_240 = 0x38f;
          puVar12 = &local_260;
          goto LAB_100a7a31c;
        }
        FUN_100a79624(&local_5e0,this,0);
        uStack_1b8 = uStack_538;
        local_1c0 = local_540;
        uStack_1a8 = uStack_528;
        local_1b0 = uStack_530;
        local_1a0 = local_520;
        uStack_18f = uStack_50f;
        uStack_1f8 = uStack_578;
        local_200 = local_580;
        uStack_1e8 = uStack_568;
        local_1f0 = uStack_570;
        uStack_1d8 = uStack_558;
        local_1e0 = local_560;
        uStack_1c8 = uStack_548;
        local_1d0 = uStack_550;
        local_238 = uStack_5b8;
        uStack_240 = local_5c0;
        uStack_228 = uStack_5a8;
        local_230 = uStack_5b0;
        uStack_218 = uStack_598;
        local_220 = local_5a0;
        uStack_208 = uStack_588;
        local_210 = uStack_590;
        uStack_258 = uStack_5d8;
        local_260 = local_5e0;
        local_248 = uStack_5c8;
        local_250 = uStack_5d0;
        iVar6 = (int)&local_260;
        FUN_100a7bec0();
        if (iVar6 == 1) {
          FUN_100004520(&local_260);
          FUN_1000fb4c4(&local_5e0,&DAT_100ff6ee0,&DAT_100c91fe0);
          uStack_400 = 0x38c;
        }
        else {
          puVar12 = &local_260;
          FUN_100004520();
          uStack_178 = puVar12[1];
          local_180 = *puVar12;
          uStack_168 = puVar12[3];
          local_170 = puVar12[2];
          uStack_138 = puVar12[9];
          local_140 = puVar12[8];
          uStack_128 = puVar12[0xb];
          local_130 = puVar12[10];
          uStack_158 = puVar12[5];
          local_160 = puVar12[4];
          uStack_148 = puVar12[7];
          local_150 = puVar12[6];
          uStack_f8 = puVar12[0x11];
          local_100 = puVar12[0x10];
          uStack_e8 = puVar12[0x13];
          local_f0 = puVar12[0x12];
          uStack_118 = puVar12[0xd];
          local_120 = puVar12[0xc];
          uStack_108 = puVar12[0xf];
          local_110 = puVar12[0xe];
          uStack_c8 = puVar12[0x17];
          local_d0 = puVar12[0x16];
          uStack_b8 = puVar12[0x19];
          local_c0 = puVar12[0x18];
          local_b0 = puVar12[0x1a];
          uStack_d8 = puVar12[0x15];
          local_e0 = puVar12[0x14];
          iVar6 = (int)&local_180;
          FUN_1006c09cc();
          if ((iVar6 != 1) && (local_f0._1_1_ == '\x04')) break;
          uStack_400 = 0x388;
        }
        local_408 = 0x8000000100db8a70;
        local_410 = 0xd00000000000001f;
        uStack_418 = 0x8000000100db9100;
        local_420 = 0xd000000000000048;
        puVar12 = &local_420;
        goto LAB_100a7a31c;
      }
      if (((param_3 & 1) == 0) || (_Var5 != 2)) {
        local_260 = 0xd000000000000048;
        uStack_258 = 0x8000000100db9100;
        local_250 = 0xd00000000000001f;
        local_248 = 0x8000000100db8a70;
        uStack_240 = 0x393;
        puVar12 = &local_260;
        goto LAB_100a7a320;
      }
      pDVar8 = this;
      FUN_1005b4b8c();
      if (pDVar8 == (Darwin *)0x0) {
        local_260 = 0xd000000000000048;
        uStack_258 = 0x8000000100db9100;
        local_250 = 0xd00000000000001f;
        local_248 = 0x8000000100db8a70;
        uStack_240 = 0x39c;
        puVar12 = &local_260;
        _Var5 = 2;
        goto LAB_100a7a320;
      }
      FUN_1005b4e74();
      puVar9 = puVar11;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar10 = puVar11;
      if (((ulong)puVar9 & 1) == 0) {
        puVar10 = (undefined *)0x0;
        FUN_100aa795c(0,*(long *)(puVar11 + 0x10) + 1,1,puVar11);
      }
      uVar2 = *(ulong *)(puVar10 + 0x10);
      puVar11 = puVar10;
      if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar2) {
        puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
        FUN_100aa795c(puVar11,uVar2 + 1,1,puVar10);
      }
      *(ulong *)(puVar11 + 0x10) = uVar2 + 1;
      *(Darwin **)(puVar11 + uVar2 * 0x18 + 0x20) = pDVar8;
      *(undefined8 **)(puVar11 + uVar2 * 0x18 + 0x28) = puVar12;
      *(Darwin **)(puVar11 + uVar2 * 0x18 + 0x30) = pDVar7;
      this = local_5e8;
      Darwin::set_errno(local_5e8,0);
      local_250 = CONCAT62(local_250._2_6_,param_4);
      puVar12 = &local_260;
      pDVar7 = this;
      FUN_1005b32d0(&local_420,FUN_100a7c31c,puVar12,this,
                    PTR___type_metadata_for_Swift_Int32_100eadbd0);
    }
    puVar9 = PTR___type_metadata_for_Swift_Int32_100eadbd0;
    lVar14 = *(long *)(puVar11 + 0x10);
    while (lVar14 != 0) {
      puVar10 = puVar11;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((ulong)puVar10 & 1) == 0) {
        FUN_100aa7dd8();
        lVar14 = *(long *)(puVar11 + 0x10);
      }
      else {
        lVar14 = *(long *)(puVar11 + 0x10);
      }
      if (lVar14 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100a79e88);
        (*pcVar4)();
      }
      uVar1 = *(undefined8 *)(puVar11 + lVar14 * 0x18 + 8);
      uVar3 = *(undefined8 *)(puVar11 + lVar14 * 0x18 + 0x10);
      uVar13 = *(undefined8 *)(puVar11 + lVar14 * 0x18 + 0x18);
      *(long *)(puVar11 + 0x10) = lVar14 + -1;
      FUN_1005b621c(uVar1,uVar3,uVar13);
      this = local_5e8;
      Darwin::set_errno(local_5e8,0);
      local_90 = CONCAT62(local_90._2_6_,param_4);
      FUN_1005b32d0(local_5f4,FUN_100a7c3e8,&local_a0,this,puVar9);
      if (local_5f4[0] == -1) {
        _Var5 = Darwin::get_errno();
        if (_Var5 == 0x11) {
          FUN_100a79624(&local_500,this,0);
          uStack_378 = uStack_458;
          local_380 = local_460;
          uStack_368 = uStack_448;
          uStack_370 = uStack_450;
          local_360 = local_440;
          uStack_34f = uStack_42f;
          uStack_3b8 = uStack_498;
          local_3c0 = local_4a0;
          uStack_3a8 = uStack_488;
          uStack_3b0 = uStack_490;
          uStack_398 = uStack_478;
          local_3a0 = local_480;
          uStack_388 = uStack_468;
          uStack_390 = uStack_470;
          local_3f8 = uStack_4d8;
          uStack_400 = local_4e0;
          local_3e8 = uStack_4c8;
          local_3f0 = uStack_4d0;
          uStack_3d8 = uStack_4b8;
          local_3e0 = local_4c0;
          uStack_3c8 = uStack_4a8;
          uStack_3d0 = uStack_4b0;
          uStack_418 = uStack_4f8;
          local_420 = local_500;
          local_408 = uStack_4e8;
          local_410 = uStack_4f0;
          iVar6 = (int)&local_420;
          FUN_100a7bec0();
          if (iVar6 == 1) {
            FUN_100004520(&local_420);
            FUN_1000fb4c4(&local_500,&DAT_100ff6ee0,&DAT_100c91fe0);
            local_80 = 0x3b6;
          }
          else {
            puVar12 = &local_420;
            FUN_100004520();
            uStack_318 = puVar12[5];
            uStack_320 = puVar12[4];
            uStack_308 = puVar12[7];
            local_310 = puVar12[6];
            uStack_2f8 = puVar12[9];
            uStack_300 = puVar12[8];
            uStack_2e8 = puVar12[0xb];
            local_2f0 = puVar12[10];
            uStack_2d8 = puVar12[0xd];
            uStack_2e0 = puVar12[0xc];
            uStack_2c8 = puVar12[0xf];
            local_2d0 = puVar12[0xe];
            uStack_2b8 = puVar12[0x11];
            uStack_2c0 = puVar12[0x10];
            uStack_2a8 = puVar12[0x13];
            local_2b0 = puVar12[0x12];
            uStack_298 = puVar12[0x15];
            uStack_2a0 = puVar12[0x14];
            uStack_288 = puVar12[0x17];
            local_290 = puVar12[0x16];
            uStack_278 = puVar12[0x19];
            uStack_280 = puVar12[0x18];
            local_270 = puVar12[0x1a];
            uStack_338 = puVar12[1];
            local_340 = *puVar12;
            uStack_328 = puVar12[3];
            local_330 = puVar12[2];
            iVar6 = (int)&local_340;
            FUN_1006c09cc();
            if ((iVar6 != 1) && (local_2b0._1_1_ == '\x04')) goto LAB_100a79d2c;
            local_80 = 0x3b2;
          }
          uStack_88 = 0x8000000100db8a70;
          local_90 = 0xd00000000000001f;
          uStack_98 = 0x8000000100db9100;
          local_a0 = 0xd000000000000048;
          puVar12 = &local_a0;
LAB_100a7a31c:
          _Var5 = 0x11;
        }
        else {
          local_a0 = 0xd000000000000048;
          uStack_98 = 0x8000000100db9100;
          local_90 = 0xd00000000000001f;
          uStack_88 = 0x8000000100db8a70;
          local_80 = 0x3b9;
          puVar12 = &local_a0;
        }
LAB_100a7a320:
        FUN_100a7f0b0(&local_640,_Var5,this,puVar12);
        _swift_bridgeObjectRelease(this);
        _swift_bridgeObjectRelease(puVar11);
        uVar15 = 1;
        goto LAB_100a7a33c;
      }
LAB_100a79d2c:
      lVar14 = *(long *)(puVar11 + 0x10);
    }
    _swift_bridgeObjectRelease(this);
    _swift_bridgeObjectRelease(puVar11);
    uVar15 = 0;
  }
  else {
    uVar15 = 1;
    local_420 = CONCAT71(local_420._1_7_,1);
    uStack_418 = 0xd00000000000002e;
    local_410 = 0x8000000100db9150;
    uStack_400 = 0xd000000000000048;
    local_408 = 0;
    local_3f8 = 0x8000000100db9100;
    local_3f0 = 0xd00000000000001f;
    local_3e8 = 0x8000000100db8a70;
    local_3e0 = 0x375;
    local_260 = CONCAT71(local_260._1_7_,1);
    uStack_258 = 0xd00000000000002e;
    local_250 = 0x8000000100db9150;
    uStack_240 = 0xd000000000000048;
    local_248 = 0;
    local_238 = 0x8000000100db9100;
    local_230 = 0xd00000000000001f;
    uStack_228 = 0x8000000100db8a70;
    local_220 = 0x375;
    FUN_100a50050(&local_420,&local_500);
    FUN_100a5008c(&local_260);
    _swift_bridgeObjectRelease(this);
    uStack_618 = local_3f8;
    local_620 = uStack_400;
    uStack_608 = local_3e8;
    uStack_610 = local_3f0;
    local_600 = local_3e0;
    uStack_638 = uStack_418;
    local_640 = local_420;
    uStack_628 = local_408;
    uStack_630 = local_410;
  }
LAB_100a7a33c:
  param_1[5] = uStack_618;
  param_1[4] = local_620;
  param_1[7] = uStack_608;
  param_1[6] = uStack_610;
  param_1[8] = local_600;
  param_1[1] = uStack_638;
  *param_1 = local_640;
  param_1[3] = uStack_628;
  param_1[2] = uStack_630;
  *(undefined1 *)(param_1 + 9) = uVar15;
  return;
}



/* Address: 0x100a7a378 | FUN_100a7a378 */

void FUN_100a7a378(ulong *param_1,char *param_2,_StringGuts param_3,char *param_4,void *param_5)

{
  ulong uVar1;
  bool bVar2;
  char *pcVar3;
  char *pcVar4;
  Index IVar5;
  Index from;
  ulong uVar6;
  _StringGuts _Var7;
  _StringGuts _Var8;
  _StringGuts _Var9;
  void *pvVar10;
  uint uVar11;
  undefined1 uVar12;
  Index to;
  Character CVar13;
  String SVar14;
  String SVar16;
  String SVar17;
  String SVar18;
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
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  String SVar38;
  ulong local_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong local_130;
  undefined1 local_100;
  undefined7 uStack_ff;
  char *local_f8;
  void *local_f0;
  ulong local_e8;
  ulong uStack_e0;
  ulong local_d8;
  ulong uStack_d0;
  ulong local_c8;
  ulong local_c0;
  char *local_b8;
  char *local_b0;
  void *pvStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  ulong uStack_78;
  String SVar15;
  
  pcVar3 = param_2;
  FUN_1005b4b8c();
  if (pcVar3 == (char *)0x0) {
    local_b8 = (char *)0x0;
    local_b0 = (void *)0xe000000000000000;
    Swift::_StringGuts::grow(0x83,param_3);
    pvVar10 = (void *)0x8000000100db9180;
    SVar16.bridgeObject = (void *)0x8000000100db9180;
    SVar16.str = (char *)0xd000000000000031;
    SVar29.bridgeObject = param_5;
    SVar29.str = param_4;
    Swift::String::append(SVar16,SVar29);
    FUN_1005b32e4();
    SVar17.bridgeObject = pvVar10;
    SVar17.str = param_2;
    SVar30.bridgeObject = param_5;
    SVar30.str = param_4;
    Swift::String::append(SVar17,SVar30);
    _swift_bridgeObjectRelease(pvVar10);
    SVar18.bridgeObject = (void *)0x8000000100db91c0;
    SVar18.str = (char *)0xd000000000000050;
    SVar31.bridgeObject = param_5;
    SVar31.str = param_4;
    Swift::String::append(SVar18,SVar31);
    uStack_78 = 0x722;
    pvStack_a8 = local_b0;
LAB_100a7a6c8:
    local_b0 = local_b8;
  }
  else {
    pcVar4 = pcVar3;
    FUN_1005b36c8();
    _swift_bridgeObjectRelease(pcVar3);
    uVar6 = (ulong)pcVar4 & 0xffffffffffff;
    if (((ulong)param_3.unknown & 0x2000000000000000) != 0) {
      uVar6 = (ulong)param_3.unknown >> 0x38 & 0xf;
    }
    uVar11 = (uint)((ulong)pcVar4 >> 0x3b) & 1;
    if (((ulong)param_3.unknown & 0x1000000000000000) == 0) {
      uVar11 = 1;
    }
    uVar1 = 7;
    if (uVar11 == 0) {
      uVar1 = 0xb;
    }
    to.cmsgPointer.unknown = (UnsafeMutablePointer)(uVar1 | uVar6 << 0x10);
    IVar5.cmsgPointer.unknown = to.cmsgPointer.unknown;
    if (uVar6 != 0) {
      do {
        SVar25.bridgeObject = param_3.unknown;
        SVar25.str = pcVar4;
        IVar5 = Swift::String::index(IVar5,SVar25);
        SVar26.bridgeObject = param_3.unknown;
        SVar26.str = pcVar4;
        param_4 = param_3.unknown;
        CVar13 = Swift::String::get_subscript(IVar5,SVar26);
        _Var7.unknown = CVar13.bridgeObject;
        if (CVar13.str == (undefined *)0x58 && _Var7.unknown == (undefined *)0xe100000000000000) {
          _swift_bridgeObjectRelease(_Var7.unknown);
        }
        else {
          param_4 = (char *)0x58;
          param_5 = (void *)0xe100000000000000;
          bVar2 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)CVar13.str,_Var7,(_StringComparisonResult)0x58);
          _swift_bridgeObjectRelease(_Var7.unknown);
          if (!bVar2) {
            SVar27.bridgeObject = param_3.unknown;
            SVar27.str = pcVar4;
            from = Swift::String::index(IVar5,SVar27);
            SVar28.bridgeObject = pcVar4;
            SVar28.str = (char *)from.cmsgPointer.unknown;
            IVar5 = from;
            pcVar3 = param_3.unknown;
            SVar15.str = Swift::String::get_subscript((Range<Index>)0xf,SVar28);
            SVar15.bridgeObject = (void *)IVar5.cmsgPointer.unknown;
            SVar14 = Swift::String::__fromSubstring(SVar15);
            _swift_bridgeObjectRelease(pcVar3);
            goto LAB_100a7a5cc;
          }
        }
      } while ((undefined *)0x3fff < (ulong)IVar5.cmsgPointer.unknown);
    }
    _Var7.unknown = pcVar4;
    _Var8.unknown = param_3.unknown;
    FUN_1005d6258();
    _Var9.unknown = _Var8.unknown;
    if (_Var8.unknown == (undefined *)0x0) {
LAB_100a7a604:
      _swift_bridgeObjectRelease(param_3.unknown);
      local_b8 = (char *)0x0;
      local_b0 = (void *)0xe000000000000000;
      Swift::_StringGuts::grow(0x6f,_Var9);
      pvVar10 = (void *)0x8000000100db9180;
      SVar19.bridgeObject = (void *)0x8000000100db9180;
      SVar19.str = (char *)0xd000000000000031;
      SVar33.bridgeObject = param_5;
      SVar33.str = param_4;
      Swift::String::append(SVar19,SVar33);
      FUN_1005b32e4();
      SVar20.bridgeObject = pvVar10;
      SVar20.str = param_2;
      SVar34.bridgeObject = param_5;
      SVar34.str = param_4;
      Swift::String::append(SVar20,SVar34);
      _swift_bridgeObjectRelease(pvVar10);
      SVar21.bridgeObject = (void *)0x8000000100db9250;
      SVar21.str = (char *)0xd00000000000003c;
      SVar35.bridgeObject = param_5;
      SVar35.str = param_4;
      Swift::String::append(SVar21,SVar35);
      uStack_78 = 0x73c;
      pvStack_a8 = local_b0;
      goto LAB_100a7a6c8;
    }
    if ((_Var7.unknown == (undefined *)0x58) && (_Var8.unknown == (undefined *)0xe100000000000000))
    {
      _swift_bridgeObjectRelease(0xe100000000000000);
    }
    else {
      param_4 = (char *)0x58;
      param_5 = (void *)0xe100000000000000;
      bVar2 = Swift::_stringCompareWithSmolCheck(_Var7,_Var8,(_StringComparisonResult)0x58);
      _swift_bridgeObjectRelease(_Var8.unknown);
      if (!bVar2) goto LAB_100a7a604;
    }
    SVar14 = (String)(ZEXT816(0xe000000000000000) << 0x40);
    from.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0xf;
LAB_100a7a5cc:
    SVar32.bridgeObject = param_3.unknown;
    SVar32.str = pcVar4;
    pcVar3 = param_3.unknown;
    uVar6 = Swift::String::distance(from,to,SVar32);
    _swift_bridgeObjectRelease(param_3.unknown);
    if (2 < (long)uVar6) {
      _swift_bridgeObjectRetain();
      FUN_1005b4c38();
      uVar12 = 0;
      local_e8 = uVar6;
      goto LAB_100a7a7ec;
    }
    local_b8 = (char *)0x0;
    local_b0 = (void *)0xe000000000000000;
    Swift::_StringGuts::grow(0x6f,(_StringGuts)to.cmsgPointer.unknown);
    pvVar10 = (void *)0x8000000100db9180;
    SVar22.bridgeObject = (void *)0x8000000100db9180;
    SVar22.str = (char *)0xd000000000000031;
    SVar36.bridgeObject = pcVar3;
    SVar36.str = pcVar4;
    Swift::String::append(SVar22,SVar36);
    FUN_1005b32e4();
    SVar23.bridgeObject = pvVar10;
    SVar23.str = param_2;
    SVar37.bridgeObject = pcVar3;
    SVar37.str = pcVar4;
    Swift::String::append(SVar23,SVar37);
    _swift_bridgeObjectRelease(pvVar10);
    SVar24.bridgeObject = (void *)0x8000000100db9250;
    SVar24.str = (char *)0xd00000000000003c;
    SVar38.bridgeObject = pcVar3;
    SVar38.str = pcVar4;
    Swift::String::append(SVar24,SVar38);
    pcVar4 = local_b0;
    pcVar3 = local_b8;
    _swift_bridgeObjectRelease(SVar14.bridgeObject);
    local_b0 = pcVar3;
    pvStack_a8 = pcVar4;
    uStack_78 = 0x74b;
  }
  local_80 = 0x8000000100db8a70;
  uStack_88 = 0xd00000000000001f;
  local_90 = 0x8000000100db9220;
  uStack_98 = 0xd000000000000023;
  local_a0 = 0;
  local_b8 = (char *)CONCAT71(local_b8._1_7_,1);
  local_c8 = 0x8000000100db8a70;
  uStack_d0 = 0xd00000000000001f;
  local_d8 = 0x8000000100db9220;
  uStack_e0 = 0xd000000000000023;
  local_e8 = 0;
  local_100 = 1;
  uVar12 = 1;
  local_f8 = local_b0;
  local_f0 = pvStack_a8;
  local_c0 = uStack_78;
  FUN_100a50050(&local_100,&local_150);
  FUN_100a5008c(&local_b8);
  param_2 = (char *)CONCAT71(uStack_ff,local_100);
  SVar14.bridgeObject = local_f0;
  SVar14.str = local_f8;
  uStack_148 = local_d8;
  local_150 = uStack_e0;
  uStack_138 = local_c8;
  uStack_140 = uStack_d0;
  local_130 = local_c0;
LAB_100a7a7ec:
  *param_1 = (ulong)param_2;
  *(String *)(param_1 + 1) = SVar14;
  param_1[3] = local_e8;
  param_1[5] = uStack_148;
  param_1[4] = local_150;
  param_1[7] = uStack_138;
  param_1[6] = uStack_140;
  param_1[8] = local_130;
  *(undefined1 *)(param_1 + 9) = uVar12;
  return;
}



/* Address: 0x100a7a828 | FUN_100a7a828 */

void FUN_100a7a828(undefined8 *param_1,char *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined1 *puVar8;
  _StringGuts _Var9;
  _StringGuts _Var10;
  void *pvVar11;
  char *pcVar12;
  undefined1 *puVar13;
  undefined1 uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  long lVar17;
  String SVar18;
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
  String SVar33;
  void *local_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 local_278;
  undefined *local_270;
  code *local_268;
  undefined *local_260;
  void *pvStack_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined *local_218;
  void *pvStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined1 local_1f8;
  undefined7 uStack_1f7;
  undefined1 uStack_1f0;
  undefined7 uStack_1ef;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  void *local_1c8;
  void *local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  char *local_190;
  undefined *puStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined *puStack_168;
  void *local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  char local_138;
  undefined1 local_130;
  undefined7 uStack_12f;
  undefined8 uStack_128;
  undefined8 local_120;
  void *pvStack_118;
  void *local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  undefined1 local_f0;
  undefined7 uStack_ef;
  char local_e8;
  void *local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined7 uStack_a8;
  undefined1 uStack_a1;
  undefined7 uStack_a0;
  void *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  void *pvStack_80;
  undefined8 uStack_78;
  
  FUN_100a7a378(&local_180);
  if (local_138 != '\x01') {
    if ((long)puStack_168 < 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100a7b02c);
      (*pcVar2)();
    }
    puVar15 = (undefined8 *)((ulong)&local_130 | 1);
    _swift_bridgeObjectRetain(local_180);
    _swift_bridgeObjectRetain(local_170);
    lVar17 = 0xf;
    do {
      local_278 = 0;
      local_270 = puStack_168;
      local_268 = FUN_100ab3a08;
      local_260 = (undefined *)0x0;
      puVar4 = &DAT_100ff6eb8;
      FUN_1000f7830(&DAT_100ff6eb8,&DAT_100c91fb8);
      puVar5 = &DAT_100ff6ec0;
      FUN_1000f7830(&DAT_100ff6ec0,&DAT_100c91fc0);
      puVar6 = &local_230;
      _swift_dynamicCast(puVar6,&local_278,puVar4,puVar5,6);
      if ((int)puVar6 == 0) {
        pvStack_210 = (void *)0x0;
        uStack_228 = 0;
        local_230 = 0;
        local_218 = (void *)0x0;
        uStack_220 = 0;
        FUN_1000fb4c4(&local_230,&DAT_100ff6ec8,&DAT_100c91fc8);
LAB_100a7a9b8:
        pcVar12 = (char *)0x0;
        pcVar2 = FUN_100ab3a08;
        pvVar11 = (void *)0x0;
        puVar4 = puStack_168;
        FUN_100ab3bf4();
        local_190 = pcVar12;
        puStack_188 = puVar4;
      }
      else {
        FUN_100076508(&local_230,&local_1e0);
        FUN_100004640(&local_1e0,local_1c8);
        bVar3 = Swift::_HasContiguousBytes::get__providesContiguousBytesNoCopy();
        pvVar11 = local_1c8;
        if (!bVar3) {
          FUN_100004594(&local_1e0);
          goto LAB_100a7a9b8;
        }
        FUN_100004640(&local_1e0,local_1c8);
        pcVar2 = (code *)PTR___type_metadata_for_Swift_String_100eac208;
        Swift::_HasContiguousBytes::_withUnsafeBytes();
        FUN_100004594(&local_1e0);
      }
      puVar4 = puStack_188;
      pcVar12 = local_190;
      local_230 = uStack_178;
      uStack_228 = local_170;
      _swift_bridgeObjectRetain(local_170);
      SVar18.bridgeObject = puVar4;
      SVar18.str = pcVar12;
      SVar26.bridgeObject = pvVar11;
      SVar26.str = (char *)pcVar2;
      Swift::String::append(SVar18,SVar26);
      _swift_bridgeObjectRelease(puVar4);
      uVar1 = uStack_228;
      uVar16 = local_230;
      local_230 = local_180;
      _swift_bridgeObjectRetain(local_180);
      FUN_1005b62ec(uVar16,uVar1);
      uVar16 = local_230;
      pcVar12 = (char *)0x1ed;
      puVar13 = &DAT_00000001;
      FUN_100a79ba8(&local_130,local_230,1);
      pvVar11 = pvStack_118;
      uVar14 = local_130;
      uStack_1b8 = uStack_108;
      local_1c0 = local_110;
      uStack_1b0 = local_100;
      local_1e0 = CONCAT71(uStack_12f,local_130);
      uStack_1d8 = uStack_128;
      local_1c8 = pvStack_118;
      uStack_1d0 = local_120;
      if (local_e8 != '\x01') {
        _swift_bridgeObjectRelease(local_180);
        FUN_1000fb4c4(&local_180,&DAT_100ff6ed0,&DAT_100c91fd0);
        _swift_bridgeObjectRelease(local_170);
        uVar14 = 0;
        goto LAB_100a7afec;
      }
      local_b0 = *puVar15;
      uStack_a8 = (undefined7)puVar15[1];
      uStack_a1 = (undefined1)*(undefined8 *)((long)puVar15 + 0xf);
      uStack_a0 = (undefined7)((ulong)*(undefined8 *)((long)puVar15 + 0xf) >> 8);
      uStack_c8 = CONCAT71(uStack_f7,uStack_f8);
      uStack_d8 = uStack_108;
      local_e0 = local_110;
      uStack_d0 = local_100;
      local_c0 = CONCAT71(uStack_ef,local_f0);
      _swift_bridgeObjectRelease(uVar16);
      local_98 = pvVar11;
      if (pvVar11 == (void *)0x0) {
        uStack_208 = uStack_1b8;
        pvStack_210 = local_1c0;
        uStack_200 = uStack_1b0;
        uStack_228 = uStack_1d8;
        local_230 = local_1e0;
        local_218 = local_1c8;
        uStack_220 = uStack_1d0;
        _Var10.unknown = (undefined *)&local_278;
        FUN_100a50050(&local_230);
LAB_100a7abe0:
        local_230 = 0;
        uStack_228 = 0xe000000000000000;
        Swift::_StringGuts::grow(0x2a,_Var10);
        _swift_bridgeObjectRelease(uStack_228);
        local_230 = 0xd000000000000026;
        uStack_228 = 0x8000000100db9010;
        FUN_1005b32e4();
        SVar19.bridgeObject = _Var10.unknown;
        SVar19.str = param_2;
        SVar27.bridgeObject = puVar13;
        SVar27.str = pcVar12;
        Swift::String::append(SVar19,SVar27);
        _swift_bridgeObjectRelease(_Var10.unknown);
        SVar20.bridgeObject = &SUB_e200000000000000;
        SVar20.str = (char *)0x2e27;
        puVar8 = (undefined1 *)0x2e27;
        SVar28.bridgeObject = puVar13;
        SVar28.str = pcVar12;
        Swift::String::append(SVar20,SVar28);
        uVar1 = uStack_228;
        uVar16 = local_230;
        FUN_100a500c0();
        puVar4 = &DAT_100f2de38;
        _swift_allocError(&DAT_100f2de38,puVar8,0,0);
        *puVar8 = uVar14;
        *(ulong *)(puVar8 + 9) = CONCAT17(uStack_a1,uStack_a8);
        *(undefined8 *)(puVar8 + 1) = local_b0;
        *(ulong *)(puVar8 + 0x10) = CONCAT71(uStack_a0,uStack_a1);
        *(void **)(puVar8 + 0x18) = pvVar11;
        *(undefined8 *)(puVar8 + 0x28) = uStack_d8;
        *(void **)(puVar8 + 0x20) = local_e0;
        *(undefined8 *)(puVar8 + 0x38) = uStack_c8;
        *(undefined8 *)(puVar8 + 0x30) = uStack_d0;
        *(undefined8 *)(puVar8 + 0x40) = local_c0;
        FUN_1000fb4c4(&local_180,&DAT_100ff6ed0,&DAT_100c91fd0);
        _swift_bridgeObjectRelease(local_180);
        _swift_bridgeObjectRelease(local_170);
        uStack_88 = uStack_c8;
        local_90 = uStack_d0;
        uStack_78 = uStack_d8;
        pvStack_80 = local_e0;
        FUN_10000ca28(&pvStack_80,&local_230);
        FUN_10000ca28(&local_90,&local_230);
        FUN_1000fb4c4(&local_130,&DAT_100ff6ea8,&DAT_100c93a30);
        uStack_208 = uStack_d8;
        pvStack_210 = local_e0;
        local_1f8 = (undefined1)uStack_c8;
        uStack_1f7 = (undefined7)((ulong)uStack_c8 >> 8);
        uStack_200 = uStack_d0;
        local_278 = CONCAT71(local_278._1_7_,uVar14);
        local_270 = (undefined *)uVar16;
        local_268 = (code *)uVar1;
        uStack_250 = uStack_d8;
        pvStack_258 = local_e0;
        uStack_240 = uStack_c8;
        local_248 = uStack_d0;
        local_238 = local_c0;
        local_230 = CONCAT71(local_230._1_7_,uVar14);
        uStack_228 = uVar16;
        uStack_220 = uVar1;
        uStack_1f0 = (undefined1)local_c0;
        uStack_1ef = (undefined7)((ulong)local_c0 >> 8);
        local_260 = puVar4;
        local_218 = puVar4;
        FUN_100a50050(&local_278,&local_2c0);
        FUN_100a5008c(&local_230);
        uStack_2b8 = uStack_250;
        local_2c0 = pvStack_258;
        uStack_2a8 = uStack_240;
        uStack_2b0 = local_248;
        local_140 = local_238;
        local_170 = local_268;
        uStack_178 = local_270;
        puStack_168 = local_260;
        local_180 = local_278;
        goto LAB_100a7ad54;
      }
      local_2c0 = pvVar11;
      _Var9.unknown = &DAT_100ff6ea8;
      FUN_1000f8cac(&local_130,&local_230,&DAT_100ff6ea8,&DAT_100c93a30);
      FUN_1000f8cac(&local_98,&local_230,&DAT_100ff6ed8,&DAT_100c91fd8);
      pcVar12 = &DAT_100ff69f8;
      FUN_1000f7830(&DAT_100ff69f8,&DAT_100c910f0);
      uVar7 = 0;
      _Var10.unknown = (undefined *)&local_2c0;
      puVar13 = &DAT_100f2dfc8;
      _swift_dynamicCast();
      puVar4 = local_270;
      if ((uVar7 & 1) == 0) goto LAB_100a7abe0;
      if (((uint)local_268 | 4) != 0x15) {
        local_230 = 0;
        uStack_228 = 0xe000000000000000;
        Swift::_StringGuts::grow(0x2a,_Var10);
        _swift_bridgeObjectRelease(uStack_228);
        local_230 = 0xd000000000000026;
        uStack_228 = 0x8000000100db9010;
        FUN_1005b32e4();
        SVar24.bridgeObject = _Var10.unknown;
        SVar24.str = param_2;
        SVar32.bridgeObject = puVar13;
        SVar32.str = pcVar12;
        Swift::String::append(SVar24,SVar32);
        _swift_bridgeObjectRelease(_Var10.unknown);
        SVar25.bridgeObject = &SUB_e200000000000000;
        SVar25.str = (char *)0x2e27;
        puVar8 = (undefined1 *)0x2e27;
        SVar33.bridgeObject = puVar13;
        SVar33.str = pcVar12;
        Swift::String::append(SVar25,SVar33);
        uVar1 = uStack_228;
        uVar16 = local_230;
        FUN_100a500c0();
        puVar5 = &DAT_100f2de38;
        _swift_allocError(&DAT_100f2de38,puVar8,0,0);
        *puVar8 = uVar14;
        *(ulong *)(puVar8 + 9) = CONCAT17(uStack_a1,uStack_a8);
        *(undefined8 *)(puVar8 + 1) = local_b0;
        *(ulong *)(puVar8 + 0x10) = CONCAT71(uStack_a0,uStack_a1);
        *(void **)(puVar8 + 0x18) = pvVar11;
        *(undefined8 *)(puVar8 + 0x28) = uStack_d8;
        *(void **)(puVar8 + 0x20) = local_e0;
        *(undefined8 *)(puVar8 + 0x38) = uStack_c8;
        *(undefined8 *)(puVar8 + 0x30) = uStack_d0;
        *(undefined8 *)(puVar8 + 0x40) = local_c0;
        _swift_bridgeObjectRelease(puVar4);
        FUN_1000fb4c4(&local_180,&DAT_100ff6ed0,&DAT_100c91fd0);
        _swift_bridgeObjectRelease(local_180);
        _swift_bridgeObjectRelease(local_170);
        uStack_88 = uStack_c8;
        local_90 = uStack_d0;
        uStack_78 = uStack_d8;
        pvStack_80 = local_e0;
        FUN_10000ca28(&pvStack_80,&local_230);
        FUN_10000ca28(&local_90,&local_230);
        FUN_1000fb4c4(&local_130,&DAT_100ff6ea8,&DAT_100c93a30);
        uStack_208 = uStack_d8;
        pvStack_210 = local_e0;
        local_1f8 = (undefined1)uStack_c8;
        uStack_1f7 = (undefined7)((ulong)uStack_c8 >> 8);
        uStack_200 = uStack_d0;
        local_278 = CONCAT71(local_278._1_7_,uVar14);
        uStack_240 = uStack_c8;
        local_238 = local_c0;
        local_230 = CONCAT71(local_230._1_7_,uVar14);
        uStack_228 = uVar16;
        uStack_220 = uVar1;
        uStack_1f0 = (undefined1)local_c0;
        uStack_1ef = (undefined7)((ulong)local_c0 >> 8);
        local_218 = puVar5;
        goto LAB_100a7afb4;
      }
      pcVar12 = "<";
      FUN_1000fb4c4(&local_130,&DAT_100ff6ea8,&DAT_100c93a30);
      FUN_1000fb4c4(&local_130);
      _swift_bridgeObjectRelease(puVar4);
      if (lVar17 == 0) goto LAB_100a7ad60;
      lVar17 = lVar17 + -1;
    } while( true );
  }
  uStack_2b8 = uStack_158;
  local_2c0 = local_160;
  uStack_2a8 = uStack_148;
  uStack_2b0 = uStack_150;
LAB_100a7ad54:
  uVar14 = 1;
  uVar16 = local_180;
  local_2a0 = local_140;
LAB_100a7afec:
  *param_1 = uVar16;
  param_1[1] = uStack_178;
  param_1[2] = local_170;
  param_1[3] = puStack_168;
  param_1[5] = uStack_2b8;
  param_1[4] = local_2c0;
  param_1[7] = uStack_2a8;
  param_1[6] = uStack_2b0;
  param_1[8] = local_2a0;
  *(undefined1 *)(param_1 + 9) = uVar14;
  return;
LAB_100a7ad60:
  local_230 = 0;
  uStack_228 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x7a,_Var9);
  pvVar11 = (void *)0x8000000100db9040;
  SVar21.bridgeObject = (void *)0x8000000100db9040;
  SVar21.str = (char *)0xd000000000000044;
  SVar29.bridgeObject = puVar13;
  SVar29.str = pcVar12;
  Swift::String::append(SVar21,SVar29);
  FUN_1005b32e4();
  SVar22.bridgeObject = pvVar11;
  SVar22.str = param_2;
  SVar30.bridgeObject = puVar13;
  SVar30.str = pcVar12;
  Swift::String::append(SVar22,SVar30);
  _swift_bridgeObjectRelease(pvVar11);
  SVar23.bridgeObject = (void *)0x8000000100db9090;
  SVar23.str = (char *)0xd000000000000034;
  SVar31.bridgeObject = puVar13;
  SVar31.str = pcVar12;
  Swift::String::append(SVar23,SVar31);
  uVar1 = uStack_228;
  uVar16 = local_230;
  FUN_1000fb4c4(&local_180,&DAT_100ff6ed0,&DAT_100c91fd0);
  _swift_bridgeObjectRelease(local_180);
  _swift_bridgeObjectRelease(local_170);
  local_278 = CONCAT71(local_278._1_7_,8);
  uStack_240 = 0x8000000100db8a70;
  local_238 = 0x78f;
  local_230 = CONCAT71(local_230._1_7_,8);
  uStack_228 = uVar16;
  uStack_220 = uVar1;
  pvStack_210 = (void *)0xd000000000000024;
  local_218 = (undefined *)0x0;
  uStack_208 = 0x8000000100db90d0;
  uStack_200 = 0xd00000000000001f;
  local_1f8 = 0x70;
  uStack_1f7 = 0x8000000100db8a;
  uStack_1f0 = 0x8f;
  uStack_1ef = 7;
LAB_100a7afb4:
  local_270 = (undefined *)uStack_228;
  local_268 = (code *)uStack_220;
  local_260 = local_218;
  pvStack_258 = pvStack_210;
  uStack_250 = uStack_208;
  local_248 = uStack_200;
  FUN_100a50050(&local_278,&local_2c0);
  FUN_100a5008c(&local_230);
  uStack_2b8 = uStack_250;
  local_2c0 = pvStack_258;
  uStack_2a8 = uStack_240;
  uStack_2b0 = local_248;
  local_2a0 = local_238;
  uVar14 = 1;
  local_170 = local_268;
  uStack_178 = local_270;
  puStack_168 = local_260;
  uVar16 = local_278;
  goto LAB_100a7afec;
}



/* Address: 0x100a7b02c | FUN_100a7b02c */

void FUN_100a7b02c(void)

{
  FUN_100a7bfd8();
  return;
}



/* Address: 0x100a7b040 | FUN_100a7b040 */

void FUN_100a7b040(void)

{
  long unaff_x20;
  
  FUN_100a70acc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined1 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x100a7b060 | FUN_100a7b060 */

void FUN_100a7b060(void)

{
  long unaff_x20;
  
  FUN_100a71f3c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined1 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x100a7b080 | FUN_100a7b080 */

void FUN_100a7b080(void)

{
  long unaff_x20;
  
  FUN_100a720e0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined1 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100a7b0a0 | FUN_100a7b0a0 */

void FUN_100a7b0a0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  long *plVar6;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar5 = *(undefined1 *)(unaff_x20 + 0x30);
  plVar6 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)thunk_FUN_1005c804c;
  FUN_100a73c7c(plVar6,param_1,uVar3,uVar2,uVar4,uVar5,uVar1);
  return;
}



/* Address: 0x100a7b128 | FUN_100a7b128 */

void FUN_100a7b128(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x100a7b14c | FUN_100a7b14c */

void FUN_100a7b14c(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  long *plVar2;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined1 *)(unaff_x20 + 0x18);
  plVar2 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)thunk_FUN_1005c804c;
  FUN_100a73d04(param_1,param_2,uVar3,uVar1);
  return;
}



/* Address: 0x100a7b1c0 | FUN_100a7b1c0 */

undefined ** FUN_100a7b1c0(void)

{
  return &PTR_PTR_100ff6ce8;
}



/* Address: 0x100a7b1cc | FUN_100a7b1cc */

undefined1  [16] FUN_100a7b1cc(void)

{
  return ZEXT816(0x100f2d740);
}



/* Address: 0x100a7b1dc | thunk_FUN_100a7b220 */

ulong * thunk_FUN_100a7b220(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_2;
  if (0xfffffffe < uVar1) {
    *param_1 = uVar1;
    *(char *)(param_1 + 1) = (char)param_2[1];
    uVar2 = param_2[2];
    param_1[2] = uVar2;
    _swift_bridgeObjectRetain(uVar1);
    _swift_bridgeObjectRetain(uVar2);
    return param_1;
  }
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  return param_1;
}



/* Address: 0x100a7b1e0 | FUN_100a7b1e0 */

void FUN_100a7b1e0(ulong *param_1)

{
  if (0xfffffffe < *param_1) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(param_1[2]);
    return;
  }
  return;
}



/* Address: 0x100a7b220 | FUN_100a7b220 */

ulong * FUN_100a7b220(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_2;
  if (0xfffffffe < uVar1) {
    *param_1 = uVar1;
    *(char *)(param_1 + 1) = (char)param_2[1];
    uVar2 = param_2[2];
    param_1[2] = uVar2;
    _swift_bridgeObjectRetain(uVar1);
    _swift_bridgeObjectRetain(uVar2);
    return param_1;
  }
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  return param_1;
}



/* Address: 0x100a7b288 | FUN_100a7b288 */

ulong * FUN_100a7b288(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  uVar1 = *param_2;
  if (uVar2 < 0xffffffff) {
    if (0xfffffffe < uVar1) {
      *param_1 = uVar1;
      *(char *)(param_1 + 1) = (char)param_2[1];
      uVar1 = param_2[2];
      param_1[2] = uVar1;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar1);
      return param_1;
    }
  }
  else {
    if (0xfffffffe < uVar1) {
      *param_1 = uVar1;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(uVar2);
      *(char *)(param_1 + 1) = (char)param_2[1];
      uVar1 = param_1[2];
      param_1[2] = param_2[2];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(uVar1);
      return param_1;
    }
    _swift_bridgeObjectRelease(uVar2);
    _swift_bridgeObjectRelease(param_1[2]);
  }
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return param_1;
}



/* Address: 0x100a7b358 | FUN_100a7b358 */

void FUN_100a7b358(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x100a7b36c | FUN_100a7b36c */

ulong * FUN_100a7b36c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_1;
  if (uVar1 < 0xffffffff) {
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    param_1[2] = param_2[2];
  }
  else if (*param_2 < 0xffffffff) {
    _swift_bridgeObjectRelease(uVar1);
    _swift_bridgeObjectRelease(param_1[2]);
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    param_1[2] = param_2[2];
  }
  else {
    *param_1 = *param_2;
    _swift_bridgeObjectRelease(uVar1);
    *(char *)(param_1 + 1) = (char)param_2[1];
    uVar1 = param_1[2];
    param_1[2] = param_2[2];
    _swift_bridgeObjectRelease(uVar1);
  }
  return param_1;
}



/* Address: 0x100a7b410 | FUN_100a7b410 */

undefined1  [16] FUN_100a7b410(void)

{
  return ZEXT816(0x100f2d7d8);
}


