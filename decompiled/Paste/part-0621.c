/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1006a0854 | FUN_1006a0854 */

void FUN_1006a0854(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar3 = *(undefined8 *)(lVar2 + 0x298);
  uVar4 = *(undefined8 *)(lVar2 + 0x290);
  *(long *)(lVar2 + 0x300) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x2f8));
  FUN_1000da368(uVar4,uVar3);
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1006a08d8;
  }
  else {
    pcVar1 = FUN_1006a0a70;
  }
  _swift_task_switch(pcVar1,uVar4,uVar3);
  return;
}



/* Address: 0x1006a08d8 | FUN_1006a08d8 */

void FUN_1006a08d8(long param_1)

{
  undefined1 uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long unaff_x22;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  uVar12 = *(undefined8 *)(unaff_x22 + 0x1b8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar1 = *(undefined1 *)(unaff_x22 + 0x1d0);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar15 = *(undefined8 *)(unaff_x22 + 400);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x1a0);
  (**(code **)(**(long **)(*(long *)(unaff_x22 + 0x2a8) + 0x10) + 0x88))();
  thunk_FUN_10069b5e8();
  if (param_1 != 0) {
    lVar8 = *(long *)(unaff_x22 + 0x2d8);
    lVar9 = *(long *)(unaff_x22 + 0x2d0);
    lVar3 = *(long *)(unaff_x22 + 0x2c0);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x2b8);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    _swift_bridgeObjectRetain(uVar5);
    _swift_unknownObjectRelease(param_1);
    FUN_10085c664(uVar4,uVar5,0x65746144,&DAT_e400000000000000,0x65746164,&DAT_e400000000000000);
    (**(code **)(lVar3 + 0x40))(lVar8,uVar6,lVar3);
    puVar7 = (undefined8 *)(lVar8 + *(int *)(lVar9 + 0x14));
    uVar4 = *puVar7;
    lVar3 = puVar7[1];
    _swift_bridgeObjectRetain(lVar3);
    FUN_10005241c(lVar8,FUN_1006b7d9c);
    if (lVar3 != 0) {
      FUN_10085c664(uVar4,lVar3,0x726576726553,&DAT_e600000000000000,0x726576726573,
                    &DAT_e600000000000000);
    }
    uVar5 = *(undefined8 *)(unaff_x22 + 0x2f0);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x2d8);
    puVar7 = *(undefined8 **)(unaff_x22 + 0x288);
    (**(code **)(*(long *)(unaff_x22 + 0x2e8) + 8))(uVar5,*(undefined8 *)(unaff_x22 + 0x2e0));
    puVar7[5] = uVar12;
    puVar7[4] = uVar10;
    puVar7[7] = uVar16;
    puVar7[6] = uVar14;
    *(undefined1 *)(puVar7 + 8) = uVar1;
    puVar7[1] = uVar17;
    *puVar7 = uVar15;
    puVar7[3] = uVar13;
    puVar7[2] = uVar11;
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0001006a0a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1006a0a70);
  (*pcVar2)();
}



/* Address: 0x1006a0a70 | FUN_1006a0a70 */

void FUN_1006a0a70(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined *puVar4;
  char *pcVar5;
  void *pvVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long unaff_x22;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  String SVar17;
  
  *(undefined8 *)(unaff_x22 + 0x270) = *(undefined8 *)(unaff_x22 + 0x300);
  _swift_errorRetain();
  puVar2 = &DAT_100fdbdb8;
  FUN_1000f7830(&DAT_100fdbdb8,&DAT_100c6f530);
  uVar10 = unaff_x22 + 0x1d1;
  _swift_dynamicCast(uVar10,unaff_x22 + 0x270,puVar2,&DAT_100f0ace8,0);
  if ((uVar10 & 1) == 0) {
    lVar12 = *(long *)(unaff_x22 + 0x2a0);
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x270));
    pvVar6 = (void *)0x0;
    _swift_beginAccess(lVar12 + 0x20,unaff_x22 + 0x240,0,0);
    FUN_100076688(lVar12 + 0x20,unaff_x22 + 0x1d8);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x1f0);
    lVar14 = *(long *)(unaff_x22 + 0x1f8);
    FUN_100004640(unaff_x22 + 0x1d8,uVar7);
    (**(code **)(lVar14 + 0x70))(uVar7,lVar14);
    lVar14 = unaff_x22 + 0x1d8;
    FUN_100004594();
    if (((uint)uVar7 & 0xff) < 2) {
      uVar9 = *(undefined8 *)(unaff_x22 + 0x300);
      FUN_100076688(lVar12 + 0x20,unaff_x22 + 0x200);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x218);
      lVar14 = *(long *)(unaff_x22 + 0x220);
      FUN_100004640(unaff_x22 + 0x200,uVar7);
      puVar2 = &DAT_100fdbdd0;
      FUN_1000f7830(&DAT_100fdbdd0,&DAT_100c6f540);
      pcVar5 = (char *)(unaff_x22 + 0xd0);
      _swift_initStackObject();
      *(undefined8 *)(puVar2 + 0x20) = 0x79742e726f727265;
      *(undefined8 *)(puVar2 + 0x18) = 2;
      *(undefined8 *)(puVar2 + 0x10) = 1;
      *(undefined8 *)(puVar2 + 0x28) = 0xea00000000006570;
      SVar17.bridgeObject = pvVar6;
      SVar17.str = pcVar5;
      Swift::String::reserveCapacity(2,SVar17);
      _swift_getErrorValue(uVar9,unaff_x22 + 0x278,unaff_x22 + 600);
      FUN_1005c4024(*(undefined8 *)(unaff_x22 + 600),*(undefined8 *)(unaff_x22 + 0x260));
      *(undefined8 *)(puVar2 + 0x30) = 0;
      *(undefined8 *)(puVar2 + 0x38) = 0xe000000000000000;
      puVar2[0x58] = 0;
      puVar4 = puVar2;
      FUN_1006c2220();
      _swift_setDeallocating(puVar2);
      FUN_1000fb4c4(puVar2 + 0x20,&DAT_100fdbdd8,&DAT_100c6f548);
      *(undefined1 *)(unaff_x22 + 0x10) = 1;
      *(undefined8 *)(unaff_x22 + 0x18) = 0xd000000000000012;
      *(undefined8 *)(unaff_x22 + 0x20) = 0x8000000100dafde0;
      *(undefined8 *)(unaff_x22 + 0x28) = 0;
      *(undefined **)(unaff_x22 + 0x30) = puVar4;
      *(undefined8 *)(unaff_x22 + 0x38) = 0;
      *(undefined8 *)(unaff_x22 + 0x40) = 0;
      *(undefined8 *)(unaff_x22 + 0x48) = 0xd00000000000001d;
      *(undefined8 *)(unaff_x22 + 0x50) = 0x8000000100dafdb0;
      *(undefined8 *)(unaff_x22 + 0x58) = 0x29286e7572;
      *(undefined1 **)(unaff_x22 + 0x60) = &DAT_e500000000000000;
      *(undefined8 *)(unaff_x22 + 0x68) = 0x7a;
      *(undefined1 *)(unaff_x22 + 0x70) = 1;
      *(undefined8 *)(unaff_x22 + 0x78) = 0xd000000000000012;
      *(undefined8 *)(unaff_x22 + 0x80) = 0x8000000100dafde0;
      *(undefined8 *)(unaff_x22 + 0x88) = 0;
      *(undefined **)(unaff_x22 + 0x90) = puVar4;
      *(undefined8 *)(unaff_x22 + 0x98) = 0;
      *(undefined8 *)(unaff_x22 + 0xa0) = 0;
      *(undefined8 *)(unaff_x22 + 0xa8) = 0xd00000000000001d;
      *(undefined8 *)(unaff_x22 + 0xb0) = 0x8000000100dafdb0;
      *(undefined8 *)(unaff_x22 + 0xb8) = 0x29286e7572;
      *(undefined1 **)(unaff_x22 + 0xc0) = &DAT_e500000000000000;
      *(undefined8 *)(unaff_x22 + 200) = 0x7a;
      FUN_1005bf638(unaff_x22 + 0x10,unaff_x22 + 0x130);
      FUN_1004eaa3c(unaff_x22 + 0x70);
      (**(code **)(lVar14 + 0x28))(unaff_x22 + 0x10,uVar7,lVar14);
      FUN_1004eaa3c(unaff_x22 + 0x10);
      lVar14 = unaff_x22 + 0x200;
      FUN_100004594();
    }
    uVar10 = 0x2d746e65746e6f43;
    thunk_FUN_10085c548();
    _swift_retain();
    FUN_10085d47c(0x2d746e65746e6f43,0xee006874676e654c,0x2d746e65746e6f63,0xee006874676e656c,lVar14
                 );
    if ((uVar10 & 1) == 0) {
      *(undefined8 *)(unaff_x22 + 0x280) = 0;
      SVar17 = Swift::CustomStringConvertible::get_description();
      FUN_10085c664(SVar17.str,SVar17.bridgeObject,0x2d746e65746e6f43,0xee006874676e654c,
                    0x2d746e65746e6f63,0xee006874676e656c);
    }
    lVar12 = *(long *)(unaff_x22 + 0x300);
    _swift_release(lVar14);
    _swift_errorRelease();
    (**(code **)(**(long **)(*(long *)(unaff_x22 + 0x2a8) + 0x10) + 0x88))();
    thunk_FUN_10069b5e8();
    if (lVar12 == 0) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1006a0f88);
      (*UNRECOVERED_JUMPTABLE)();
    }
    lVar13 = *(long *)(unaff_x22 + 0x2d8);
    lVar16 = *(long *)(unaff_x22 + 0x2d0);
    lVar8 = *(long *)(unaff_x22 + 0x2c0);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x2b8);
    uVar7 = *(undefined8 *)(lVar12 + 0x10);
    uVar9 = *(undefined8 *)(lVar12 + 0x18);
    _swift_bridgeObjectRetain(uVar9);
    _swift_unknownObjectRelease(lVar12);
    FUN_10085c664(uVar7,uVar9,0x65746144,&DAT_e400000000000000,0x65746164,&DAT_e400000000000000);
    (**(code **)(lVar8 + 0x40))(lVar13,uVar11,lVar8);
    puVar15 = (undefined8 *)(lVar13 + *(int *)(lVar16 + 0x14));
    uVar7 = *puVar15;
    lVar12 = puVar15[1];
    _swift_bridgeObjectRetain(lVar12);
    FUN_10005241c(lVar13,FUN_1006b7d9c);
    if (lVar12 != 0) {
      FUN_10085c664(uVar7,lVar12,0x726576726553,&DAT_e600000000000000,0x726576726573,
                    &DAT_e600000000000000);
    }
    uVar9 = *(undefined8 *)(unaff_x22 + 0x2f0);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x2d8);
    puVar15 = *(undefined8 **)(unaff_x22 + 0x288);
    (**(code **)(*(long *)(unaff_x22 + 0x2e8) + 8))(uVar9,*(undefined8 *)(unaff_x22 + 0x2e0));
    puVar15[5] = 0;
    puVar15[4] = 0;
    puVar15[7] = 0;
    puVar15[6] = 0;
    *(undefined1 *)(puVar15 + 8) = 2;
    puVar15[1] = 0xd000000000000015;
    *puVar15 = 500;
    puVar15[3] = lVar14;
    puVar15[2] = 0x8000000100da87f0;
    _swift_task_dealloc(uVar9);
    _swift_task_dealloc(uVar7);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    puVar3 = *(undefined1 **)(unaff_x22 + 0x300);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x2f0);
    lVar14 = *(long *)(unaff_x22 + 0x2e8);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x2e0);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x2d8);
    puVar15 = *(undefined8 **)(unaff_x22 + 0x2c8);
    _swift_errorRelease();
    uVar1 = *(undefined1 *)(unaff_x22 + 0x1d1);
    FUN_1006a4f0c();
    puVar2 = &DAT_100f0ace8;
    _swift_allocError(&DAT_100f0ace8,puVar3,0,0);
    *puVar3 = uVar1;
    _swift_willThrow();
    (**(code **)(lVar14 + 8))(uVar9,uVar7);
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x270));
    *puVar15 = puVar2;
    _swift_task_dealloc(uVar9);
    _swift_task_dealloc(uVar11);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001006a0f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x1006a0f88 | FUN_1006a0f88 */

void FUN_1006a0f88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  piVar3 = *(int **)(param_5 + 0x50);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)thunk_FUN_1005c804c;
                    /* WARNING: Could not recover jumptable at 0x0001006a1014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(param_1,param_2,param_4,param_5);
  return;
}



/* Address: 0x1006a1018 | FUN_1006a1018 */

void FUN_1006a1018(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  _swift_task_switch(FUN_1006a1034,0,0);
  return;
}



/* Address: 0x1006a1034 | FUN_1006a1034 */

void FUN_1006a1034(void)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x18);
  (**(code **)(*(long *)(unaff_x22 + 0x20) + 0x60))();
  *(long *)(unaff_x22 + 0x28) = lVar3;
  lVar5 = *(long *)(lVar3 + 0x10);
  *(long *)(unaff_x22 + 0x30) = lVar5;
  if (lVar5 == 0) {
    _swift_bridgeObjectRelease();
                    /* WARNING: Could not recover jumptable at 0x0001006a10f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  *(undefined8 *)(unaff_x22 + 0x38) = 0;
  if (*(long *)(lVar3 + 0x10) != 0) {
    uVar7 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(unaff_x22 + 0x40) = uVar7;
    piVar6 = *(int **)(lVar3 + 0x20);
    iVar1 = *piVar6;
    plVar4 = (long *)(ulong)(uint)piVar6[1];
    _swift_retain(uVar7);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x48) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_1006a10f8;
                    /* WARNING: Could not recover jumptable at 0x0001006a10d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar6))();
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1006a10f8);
  (*pcVar2)();
}



/* Address: 0x1006a10f8 | FUN_1006a10f8 */

void FUN_1006a10f8(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x50) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x48));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1006a115c;
  }
  else {
    pcVar1 = FUN_1006a1230;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1006a115c | FUN_1006a115c */

void FUN_1006a115c(void)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  int *piVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x38);
  lVar7 = *(long *)(unaff_x22 + 0x30);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x40));
  if (lVar3 + 1 == lVar7) {
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x0001006a11b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar1 = *(long *)(unaff_x22 + 0x38) + 1;
  *(ulong *)(unaff_x22 + 0x38) = uVar1;
  if (uVar1 < *(ulong *)(*(long *)(unaff_x22 + 0x28) + 0x10)) {
    lVar3 = *(long *)(unaff_x22 + 0x28) + uVar1 * 0x10;
    uVar8 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(unaff_x22 + 0x40) = uVar8;
    piVar6 = *(int **)(lVar3 + 0x20);
    iVar2 = *piVar6;
    plVar5 = (long *)(ulong)(uint)piVar6[1];
    _swift_retain(uVar8);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x48) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_1006a10f8;
                    /* WARNING: Could not recover jumptable at 0x0001006a1228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar2 + (long)piVar6))();
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1006a1230);
  (*pcVar4)();
}



/* Address: 0x1006a1230 | FUN_1006a1230 */

void FUN_1006a1230(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x40));
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001006a1274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006a1278 | FUN_1006a1278 */

void FUN_1006a1278(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x118) = param_3;
  *(undefined8 *)(unaff_x22 + 0x120) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x108) = param_1;
  *(undefined8 *)(unaff_x22 + 0x110) = param_2;
  _swift_task_switch(FUN_1006a1294,0,0);
  return;
}



/* Address: 0x1006a1294 | FUN_1006a1294 */

void FUN_1006a1294(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  int *piVar7;
  long unaff_x22;
  code *pcVar8;
  
  lVar2 = *(long *)(unaff_x22 + 0x118);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x108);
  lVar5 = *(long *)(unaff_x22 + 0x110);
  puVar4 = &DAT_100fdbb60;
  FUN_1000f7830(&DAT_100fdbb60,&DAT_100c6f360);
  _swift_initStackObject();
  *(undefined8 *)(puVar4 + 0x18) = 2;
  *(undefined8 *)(puVar4 + 0x10) = 1;
  *(long *)(puVar4 + 0x38) = lVar5;
  *(undefined8 *)(puVar4 + 0x40) = *(undefined8 *)(lVar2 + 8);
  FUN_10000cbb0(puVar4 + 0x20);
  (**(code **)(*(long *)(lVar5 + -8) + 0x10))();
  pcVar8 = *(code **)(lVar2 + 0x48);
  _swift_bridgeObjectRetain(uVar3);
  (*pcVar8)(lVar5,lVar2);
  FUN_1009d9ffc(unaff_x22 + 0x10,puVar4,uVar3,PTR___swiftEmptyArrayStorage_100eae0d8,lVar5);
  FUN_1009d79f8();
  _swift_allocObject();
  plVar6 = (long *)(unaff_x22 + 0x10);
  FUN_1009ca8a0();
  *(long **)(unaff_x22 + 0x128) = plVar6;
  piVar7 = *(int **)(*plVar6 + 0xd0);
  iVar1 = *piVar7;
  plVar6 = (long *)(ulong)(uint)piVar7[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x130) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1006a13dc;
                    /* WARNING: Could not recover jumptable at 0x0001006a13d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))(0xd00000000000001d,0x8000000100dafdb0,0xa9);
  return;
}



/* Address: 0x1006a13dc | FUN_1006a13dc */

void FUN_1006a13dc(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x138) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x130));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1006a1440;
  }
  else {
    pcVar1 = FUN_1006a147c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1006a1440 | FUN_1006a1440 */

void FUN_1006a1440(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x128));
                    /* WARNING: Could not recover jumptable at 0x0001006a1478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006a147c | FUN_1006a147c */

void FUN_1006a147c(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x128));
                    /* WARNING: Could not recover jumptable at 0x0001006a14b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006a14b8 | FUN_1006a14b8 */

void FUN_1006a14b8(undefined8 param_1,long param_2)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001006a14d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 0x10))
            (param_1,unaff_x20 + *(int *)(param_2 + 0x2c));
  return;
}



/* Address: 0x1006a14d4 | FUN_1006a14d4 */

void FUN_1006a14d4(undefined8 param_1,long param_2)

{
  long unaff_x20;
  
  FUN_1006a248c(unaff_x20 + *(int *)(param_2 + 0x30),param_1);
  return;
}



/* Address: 0x1006a14e4 | FUN_1006a14e4 */

void FUN_1006a14e4(undefined8 param_1,long param_2)

{
  long unaff_x20;
  
  FUN_1006a24d0(param_1,unaff_x20 + *(int *)(param_2 + 0x30));
  return;
}



/* Address: 0x1006a14f0 | FUN_1006a14f0 */

undefined1  [16] FUN_1006a14f0(long param_1)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + *(int *)(param_1 + 0x3c));
  auVar2 = *pauVar1;
  _swift_retain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Address: 0x1006a1524 | FUN_1006a1524 */

void FUN_1006a1524(long param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + *(int *)(param_1 + 0x40)));
  return;
}



/* Address: 0x1006a1530 | FUN_1006a1530 */

void FUN_1006a1530(undefined8 param_1,long param_2)

{
  int iVar1;
  long unaff_x20;
  
  iVar1 = *(int *)(param_2 + 0x40);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + iVar1));
  *(undefined8 *)(unaff_x20 + iVar1) = param_1;
  return;
}



/* Address: 0x1006a1564 | FUN_1006a1564 */

undefined1  [16] FUN_1006a1564(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + *(int *)(param_2 + 0x40);
  auVar1._0_8_ = FUN_100004520;
  return auVar1;
}



/* Address: 0x1006a1578 | FUN_1006a1578 */

void FUN_1006a1578(long param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + *(int *)(param_1 + 0x44)));
  return;
}



/* Address: 0x1006a1584 | FUN_1006a1584 */

void FUN_1006a1584(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,long param_8,long param_9,
                  undefined **param_10,long param_11,long param_12,undefined8 param_13,
                  undefined8 param_14)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar8;
  long lVar9;
  long lVar10;
  String SVar11;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined8 local_78;
  long lStack_70;
  void *pvVar7;
  
  if (param_11 == 0) {
    lVar8 = 0;
    FUN_1006b7d9c();
    plVar1 = (long *)(param_5 + *(int *)(lVar8 + 0x14));
    lVar8 = plVar1[1];
    if (lVar8 == 0) {
      lVar10 = -0x14ffffffff9b8d97;
      lVar9 = 0x62676e696d6d7548;
    }
    else {
      lVar9 = *plVar1;
      lVar10 = lVar8;
    }
    lVar5 = 0;
    FUN_1006a2514(0,param_12,param_13,param_14);
    iVar4 = *(int *)(lVar5 + 0x34);
    _swift_bridgeObjectRetain(lVar8);
    FUN_1005cbc74(lVar9,lVar10);
    *(long *)((long)param_1 + (long)iVar4) = lVar9;
    lVar8 = lVar9;
    FUN_1006bbd50();
    SVar11.bridgeObject = (void *)0xe90000000000004c;
    SVar11.str = (char *)0x4556454c5f474f4c;
    SVar11 = Swift::String::lowercased(SVar11);
    pvVar7 = SVar11.bridgeObject;
    if (*(long *)(lVar8 + 0x10) == 0) {
      _swift_bridgeObjectRelease(lVar8);
      _swift_bridgeObjectRelease(pvVar7);
    }
    else {
      _swift_bridgeObjectRetain(lVar8);
      FUN_100464848(SVar11.str,pvVar7,FUN_1000715b8);
      if (((ulong)SVar11.bridgeObject & 1) == 0) {
        _swift_bridgeObjectRelease(pvVar7);
        _swift_bridgeObjectRelease_n(lVar8,2);
      }
      else {
        puVar2 = (undefined8 *)(*(long *)(lVar8 + 0x38) + (long)SVar11.str * 0x10);
        uVar6 = *puVar2;
        uVar3 = puVar2[1];
        _swift_bridgeObjectRetain(uVar3);
        _swift_bridgeObjectRelease(pvVar7);
        _swift_bridgeObjectRelease_n(lVar8,2);
        FUN_1006a38c0(uVar6,uVar3);
        if (((uint)uVar6 & 0xff) != 7) {
          _swift_beginAccess(lVar9 + 0x20,auStack_a8,0,0);
          FUN_100076688(lVar9 + 0x20,auStack_90);
          FUN_10007d048(auStack_90,local_78);
          (**(code **)(lStack_70 + 0x78))(uVar6,local_78,lStack_70);
          FUN_1005c87a8((long)iVar4,auStack_90);
        }
      }
    }
  }
  else {
    lVar5 = 0;
    FUN_1006a2514(0,param_12,param_13,param_14);
    *(long *)((long)param_1 + (long)*(int *)(lVar5 + 0x34)) = param_11;
  }
  lVar8 = *(long *)(param_12 + -8);
  (**(code **)(lVar8 + 0x10))((long)param_1 + (long)*(int *)(lVar5 + 0x2c),param_2,param_12);
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x3c));
  *puVar2 = param_3;
  puVar2[1] = param_4;
  FUN_1006a248c(param_5,(long)param_1 + (long)*(int *)(lVar5 + 0x30));
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x38));
  *puVar2 = param_7;
  puVar2[1] = param_8;
  if (param_9 == 0) {
    FUN_10090e224(0);
    _swift_retain(param_11);
    _swift_retain(param_4);
    param_9 = param_8;
    _swift_retain();
    thunk_FUN_10093a518();
    param_10 = &PTR_PTR_100f14e20;
  }
  else {
    _swift_retain(param_11);
    _swift_retain(param_4);
    _swift_retain(param_8);
  }
  *param_1 = param_9;
  param_1[1] = (long)param_10;
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x40)) = param_6;
  _swift_release(param_11);
  _swift_release(param_4);
  _swift_release(param_8);
  FUN_10005241c(param_5,FUN_1006b7d9c);
  (**(code **)(lVar8 + 8))(param_2,param_12);
  *(undefined **)((long)param_1 + (long)*(int *)(lVar5 + 0x44)) =
       PTR___swiftEmptyArrayStorage_100eae0d8;
  return;
}



/* Address: 0x1006a18c0 | FUN_1006a18c0 */

void FUN_1006a18c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,long param_12,
                  long param_13,long param_14,undefined8 param_15)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar2;
  long alStack_d0 [6];
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  lVar1 = 0;
  local_98 = param_1;
  local_90 = param_3;
  local_88 = param_4;
  local_80 = param_6;
  local_78 = param_7;
  local_70 = param_8;
  local_68 = param_9;
  FUN_1006b7d9c();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(param_12 + -8) + 0x40));
  lVar1 = (long)puVar2 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(param_14 + 0x18))(lVar1,param_13,param_14);
  FUN_1006a248c(param_5,puVar2);
  _swift_getAssociatedConformanceWitness
            (param_14,param_13,param_12,0x100cbc4d4,&TargetProtocolRequirement_100cbc4dc);
  *(long *)(lVar1 + -0x18) = param_14;
  *(undefined8 *)(lVar1 + -0x10) = param_15;
  *(undefined8 *)(lVar1 + -0x28) = param_11;
  *(long *)(lVar1 + -0x20) = param_12;
  *(undefined8 *)(lVar1 + -0x30) = param_10;
  FUN_1006a1584(local_98,lVar1,local_90,local_88,puVar2,local_80,local_78,local_70,local_68);
  FUN_10005241c(param_5,FUN_1006b7d9c);
  (**(code **)(*(long *)(param_13 + -8) + 8))(param_2,param_13);
  return;
}



/* Address: 0x1006a1a18 | FUN_1006a1a18 */

void FUN_1006a1a18(void)

{
  _swift_bridgeObjectRetain();
  FUN_1006a1a40();
  return;
}



/* Address: 0x1006a1a40 | FUN_1006a1a40 */

void FUN_1006a1a40(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long *unaff_x20;
  long lVar6;
  long lVar7;
  
  uVar5 = *(ulong *)(param_1 + 0x10);
  lVar6 = *unaff_x20;
  lVar7 = *(long *)(lVar6 + 0x10);
  if (SCARRY8(lVar7,uVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006a1b60);
    (*pcVar1)();
  }
  lVar2 = lVar6;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)lVar2 == 0) ||
     (uVar4 = *(ulong *)(lVar6 + 0x18) >> 1, (long)uVar4 < (long)(lVar7 + uVar5))) {
    FUN_1006a2bb8();
    uVar4 = *(ulong *)(lVar2 + 0x18) >> 1;
    lVar7 = *(long *)(param_1 + 0x10);
    lVar6 = lVar2;
  }
  else {
    lVar7 = *(long *)(param_1 + 0x10);
  }
  if (lVar7 == 0) {
    _swift_bridgeObjectRelease(param_1);
    if (uVar5 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006a1b64);
      (*pcVar1)();
    }
  }
  else {
    lVar7 = *(long *)(lVar6 + 0x10);
    if (uVar4 - lVar7 < uVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006a1b68);
      (*pcVar1)();
    }
    puVar3 = &DAT_100fdbda8;
    FUN_1000f7830(&DAT_100fdbda8,&DAT_100c6f4f8);
    _swift_arrayInitWithCopy(lVar6 + lVar7 * 0x28 + 0x20,param_1 + 0x20,uVar5,puVar3);
    _swift_bridgeObjectRelease(param_1);
    if (uVar5 != 0) {
      if (SCARRY8(*(long *)(lVar6 + 0x10),uVar5)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1006a1b6c);
        (*pcVar1)();
      }
      *(ulong *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + uVar5;
    }
  }
  *unaff_x20 = lVar6;
  return;
}



/* Address: 0x1006a1b6c | FUN_1006a1b6c */

void FUN_1006a1b6c(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  ulong uVar5;
  long lVar6;
  
  uVar5 = *(ulong *)(param_1 + 0x10);
  lVar4 = *unaff_x20;
  lVar6 = *(long *)(lVar4 + 0x10);
  if (SCARRY8(lVar6,uVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006a1c58);
    (*pcVar1)();
  }
  lVar2 = lVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)lVar2 == 0) ||
     (uVar3 = *(ulong *)(lVar4 + 0x18) >> 1, (long)uVar3 < (long)(lVar6 + uVar5))) {
    FUN_1006a2740();
    uVar3 = *(ulong *)(lVar2 + 0x18) >> 1;
    lVar6 = *(long *)(param_1 + 0x10);
    lVar4 = lVar2;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x10);
  }
  if (lVar6 == 0) {
    _swift_bridgeObjectRelease(param_1);
    if (uVar5 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006a1c5c);
      (*pcVar1)();
    }
  }
  else {
    if (uVar3 - *(long *)(lVar4 + 0x10) < uVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006a1c60);
      (*pcVar1)();
    }
    _swift_arrayInitWithCopy
              (lVar4 + *(long *)(lVar4 + 0x10) * 0x20 + 0x20,param_1 + 0x20,uVar5,
               PTR___type_metadata_for_Swift_Substring_100eaca98);
    _swift_bridgeObjectRelease(param_1);
    if (uVar5 != 0) {
      if (SCARRY8(*(long *)(lVar4 + 0x10),uVar5)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1006a1c64);
        (*pcVar1)();
      }
      *(ulong *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + uVar5;
    }
  }
  *unaff_x20 = lVar4;
  return;
}



/* Address: 0x1006a1c64 | FUN_1006a1c64 */

void FUN_1006a1c64(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  ulong uVar5;
  long lVar6;
  
  uVar5 = *(ulong *)(param_1 + 0x10);
  lVar4 = *unaff_x20;
  lVar6 = *(long *)(lVar4 + 0x10);
  if (SCARRY8(lVar6,uVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006a1d54);
    (*pcVar1)();
  }
  lVar2 = lVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)lVar2 == 0) ||
     (uVar3 = *(ulong *)(lVar4 + 0x18) >> 1, (long)uVar3 < (long)(lVar6 + uVar5))) {
    FUN_1006a2fa8();
    uVar3 = *(ulong *)(lVar2 + 0x18) >> 1;
    lVar6 = *(long *)(param_1 + 0x10);
    lVar4 = lVar2;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x10);
  }
  if (lVar6 == 0) {
    _swift_bridgeObjectRelease(param_1);
    if (uVar5 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006a1d58);
      (*pcVar1)();
    }
  }
  else {
    if (uVar3 - *(long *)(lVar4 + 0x10) < uVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006a1d5c);
      (*pcVar1)();
    }
    _swift_arrayInitWithCopy
              (lVar4 + *(long *)(lVar4 + 0x10) * 0x48 + 0x20,param_1 + 0x20,uVar5,&DAT_100efa560);
    _swift_bridgeObjectRelease(param_1);
    if (uVar5 != 0) {
      if (SCARRY8(*(long *)(lVar4 + 0x10),uVar5)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1006a1d60);
        (*pcVar1)();
      }
      *(ulong *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + uVar5;
    }
  }
  *unaff_x20 = lVar4;
  return;
}



/* Address: 0x1006a1d60 | FUN_1006a1d60 */

void FUN_1006a1d60(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long extraout_x12;
  
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(undefined8 *)(*(long *)(param_3 + -8) + 0x40),param_1,param_1);
  (**(code **)(extraout_x12 + 0x10))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar1 = &DAT_100fdbb68;
  FUN_1000f7830(&DAT_100fdbb68,&DAT_100c6f370);
  Swift::Array<undefined>::_append
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),puVar1,param_3,
             param_4);
  return;
}



/* Address: 0x1006a1e04 | FUN_1006a1e04 */

void FUN_1006a1e04(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x20;
  ulong uVar6;
  
  puVar3 = &DAT_100ef63f0;
  _swift_allocObject(&DAT_100ef63f0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  iVar2 = *(int *)(param_3 + 0x44);
  uVar6 = *(ulong *)(unaff_x20 + iVar2);
  _swift_retain(param_2);
  uVar4 = uVar6;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar5 = uVar6;
  if ((uVar4 & 1) == 0) {
    uVar5 = 0;
    FUN_1006a2948(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
  }
  uVar4 = *(ulong *)(uVar5 + 0x10);
  uVar6 = uVar5;
  if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar4) {
    uVar6 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
    FUN_1006a2948(uVar6,uVar4 + 1,1,uVar5);
  }
  *(ulong *)(uVar6 + 0x10) = uVar4 + 1;
  lVar1 = uVar6 + uVar4 * 0x10;
  *(undefined **)(lVar1 + 0x20) = &DAT_100c6f380;
  *(undefined **)(lVar1 + 0x28) = puVar3;
  *(ulong *)(unaff_x20 + iVar2) = uVar6;
  return;
}



/* Address: 0x1006a1ed8 | FUN_1006a1ed8 */

void FUN_1006a1ed8(undefined8 param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  iVar1 = *param_2;
  plVar2 = (long *)(ulong)(uint)param_2[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)thunk_FUN_1005c804c;
                    /* WARNING: Could not recover jumptable at 0x0001006a1f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_2))();
  return;
}



/* Address: 0x1006a1f34 | FUN_1006a1f34 */

void FUN_1006a1f34(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  _swift_task_switch(FUN_1006a1f50,0,0);
  return;
}



/* Address: 0x1006a1f50 | FUN_1006a1f50 */

void FUN_1006a1f50(void)

{
  long unaff_x22;
  
  (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x22 + 0x18) + 0x10) + -8) + 0x10))
            (*(undefined8 *)(unaff_x22 + 0x10),
             *(long *)(unaff_x22 + 0x20) + (long)*(int *)(*(long *)(unaff_x22 + 0x18) + 0x2c));
                    /* WARNING: Could not recover jumptable at 0x0001006a1fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006a1fa4 | FUN_1006a1fa4 */

void FUN_1006a1fa4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  _swift_task_switch(FUN_1006a1fc0,0,0);
  return;
}



/* Address: 0x1006a1fc0 | FUN_1006a1fc0 */

void FUN_1006a1fc0(void)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  long unaff_x22;
  
  piVar2 = *(int **)(*(long *)(unaff_x22 + 0x28) +
                    (long)*(int *)(*(long *)(unaff_x22 + 0x20) + 0x38));
  iVar1 = *piVar2;
  plVar3 = (long *)(ulong)(uint)piVar2[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1006a2030;
                    /* WARNING: Could not recover jumptable at 0x0001006a202c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))
            (*(undefined8 *)(unaff_x22 + 0x10),*(undefined8 *)(unaff_x22 + 0x18));
  return;
}



/* Address: 0x1006a2030 | FUN_1006a2030 */

void FUN_1006a2030(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x0001006a2070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Address: 0x1006a2074 | FUN_1006a2074 */

void FUN_1006a2074(undefined8 param_1,long param_2)

{
  long unaff_x20;
  long unaff_x22;
  
  (**(code **)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 0x10))
            (param_1,unaff_x20 + *(int *)(param_2 + 0x2c));
                    /* WARNING: Could not recover jumptable at 0x0001006a20bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006a20c0 | FUN_1006a20c0 */

void FUN_1006a20c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_1006a1fa4(param_1,param_2,param_3);
  return;
}



/* Address: 0x1006a212c | FUN_1006a212c */

void FUN_1006a212c(undefined8 param_1)

{
  long *plVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  long unaff_x22;
  
  plVar1 = (long *)0x280;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  pTVar2 = &TargetProtocolConformanceDescriptor_100c6f3a8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6f3a8,param_1);
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_10069ef94(param_1,pTVar2);
  return;
}



/* Address: 0x1006a21a0 | FUN_1006a21a0 */

undefined1  [16] FUN_1006a21a0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &DAT_eb000000006e6f69;
  auVar1._0_8_ = 0x746163696c707041;
  return auVar1;
}



/* Address: 0x1006a21c0 | FUN_1006a21c0 */

void FUN_1006a21c0(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(lVar1 + -8);
  uVar4 = (ulong)*(byte *)(lVar3 + 0x50) + 0x20 &
          ((ulong)*(byte *)(lVar3 + 0x50) ^ 0xffffffffffffffff);
  lVar5 = *(long *)(lVar3 + 0x40);
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(unaff_x20 + 0x18),lVar1,0x100cbafe4,
             &TargetProtocolRequirement_100cbb004);
  lVar7 = *(long *)(lVar2 + -8);
  uVar6 = uVar4 + lVar5 + (ulong)*(byte *)(lVar7 + 0x50) &
          ((ulong)*(byte *)(lVar7 + 0x50) ^ 0xffffffffffffffff);
  lVar5 = *(long *)(lVar7 + 0x40);
  (**(code **)(lVar3 + 8))(unaff_x20 + uVar4,lVar1);
  (**(code **)(lVar7 + 8))(unaff_x20 + uVar6,lVar2);
  _swift_release(*(undefined8 *)(unaff_x20 + (lVar5 + uVar6 + 7 & 0xfffffffffffffff8)));
  _swift_deallocObject();
  return;
}



/* Address: 0x1006a2288 | FUN_1006a2288 */

void FUN_1006a2288(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long unaff_x20;
  long unaff_x22;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  uVar8 = uVar5 + 0x20 & (uVar5 ^ 0xffffffffffffffff);
  lVar6 = *(long *)(*(long *)(lVar1 + -8) + 0x40);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness(0,uVar2,lVar1,0x100cbafe4,&TargetProtocolRequirement_100cbb004);
  uVar5 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar5 = uVar8 + lVar6 + uVar5 & (uVar5 ^ 0xffffffffffffffff);
  uVar7 = *(undefined8 *)
           (unaff_x20 + (*(long *)(*(long *)(lVar3 + -8) + 0x40) + uVar5 + 7 & 0xfffffffffffffff8));
  plVar4 = (long *)0x260;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)thunk_FUN_1005c804c;
  FUN_10069fbac(param_1,param_2,param_3,param_4,unaff_x20 + uVar8,unaff_x20 + uVar5,uVar7,lVar1,
                uVar2);
  return;
}



/* Address: 0x1006a2384 | thunk_FUN_1001b8a00 */

void thunk_FUN_1001b8a00(void)

{
  FUN_1001b8a00();
  return;
}



/* Address: 0x1006a2388 | FUN_1006a2388 */

void FUN_1006a2388(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1005c804c;
  FUN_1006a0f88(param_1,param_2,unaff_x20 + (uVar4 + 0x20 & (uVar4 ^ 0xffffffffffffffff)),lVar1,
                uVar2);
  return;
}



/* Address: 0x1006a2414 | FUN_1006a2414 */

void FUN_1006a2414(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  plVar3 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1005c804c;
  FUN_1006a1018(plVar3,unaff_x20 + (uVar4 + 0x20 & (uVar4 ^ 0xffffffffffffffff)),lVar1,uVar2);
  return;
}



/* Address: 0x1006a248c | FUN_1006a248c */

undefined8 FUN_1006a248c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1006b7d9c();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x1006a24d0 | FUN_1006a24d0 */

undefined8 FUN_1006a24d0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1006b7d9c();
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x1006a2514 | FUN_1006a2514 */

void FUN_1006a2514(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1006a2520 | FUN_1006a2520 */

undefined * FUN_1006a2520(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1006a2628);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fdbcb0;
    FUN_1000f7830(&DAT_100fdbcb0,&DAT_100c70c60);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,PTR___type_metadata_for_Swift_String_100eac208);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x1006a2628 | FUN_1006a2628 */

undefined * FUN_1006a2628(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1006a2740);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fdbc78;
    FUN_1000f7830(&DAT_100fdbc78,&DAT_100c6f4a0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&DAT_100ef75c8);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x18 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x1006a2740 | FUN_1006a2740 */

undefined * FUN_1006a2740(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1006a2848);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fdbc88;
    FUN_1000f7830(&DAT_100fdbc88,&DAT_100c6f4b0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,PTR___type_metadata_for_Swift_Substring_100eaca98);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x20 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x1006a2848 | FUN_1006a2848 */

undefined * FUN_1006a2848(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1006a2948);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fdbc80;
    FUN_1000f7830(&DAT_100fdbc80,&DAT_100c6f4a8);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar1,puVar4,uVar6 << 5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x20 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x1006a2948 | FUN_1006a2948 */

undefined * FUN_1006a2948(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1006a2a7c);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x0;
    FUN_1006a4bc0(0,&DAT_100fdbcc0,PTR_typeMetadataAccessor_100ead690);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100fdbcc8;
    FUN_1000f7830(&DAT_100fdbcc8,&DAT_100c6f4e8);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x1006a2a7c | FUN_1006a2a7c */

undefined * FUN_1006a2a7c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1006a2b94);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fdbcb8;
    FUN_1000f7830(&DAT_100fdbcb8,&DAT_100c6f4e0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&DAT_100ef7678);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x28 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0x28);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x1006a2b94 | FUN_1006a2b94 */

void FUN_1006a2b94(void)

{
  FUN_1006a2bb8();
  return;
}



/* Address: 0x1006a2bb8 | FUN_1006a2bb8 */

undefined *
FUN_1006a2bb8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1006a2cfc);
        (*pcVar3)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    FUN_1000f7830(param_5,param_6);
    _swift_allocObject();
    puVar4 = param_5;
    _malloc_size();
    *(ulong *)(param_5 + 0x10) = uVar6;
    *(long *)(param_5 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
    puVar4 = param_5;
  }
  puVar1 = puVar4 + 0x20;
  puVar2 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    FUN_1000f7830(param_7,param_8);
    _swift_arrayInitWithCopy(puVar1,puVar2,uVar6,param_7);
  }
  else {
    if (puVar4 != param_4 || puVar2 + uVar6 * 0x28 <= puVar1) {
      _memmove(puVar1,puVar2,uVar6 * 0x28);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar4;
}



/* Address: 0x1006a2cfc | FUN_1006a2cfc */

undefined * FUN_1006a2cfc(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1006a2e2c);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar6 != 0) {
    puVar3 = &DAT_100fdbca0;
    FUN_1000f7830(&DAT_100fdbca0,&DAT_100c6f4c8);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100fdbca8;
    FUN_1000f7830(&DAT_100fdbca8,&DAT_100c6f4d0);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x20 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x1006a2e2c | FUN_1006a2e2c */

undefined * FUN_1006a2e2c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  UUID UVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  
  uVar7 = param_2;
  if ((param_3 & 1) != 0) {
    uVar7 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar7 < (long)param_2) {
      if ((long)(uVar7 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1006a2fa8);
        (*pcVar3)();
      }
      uVar7 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar7 <= (long)param_2) {
        uVar7 = param_2;
      }
    }
  }
  uVar10 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar7 <= (long)uVar10) {
    uVar7 = uVar10;
  }
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar7 != 0) {
    puVar4 = &DAT_100fdbc98;
    FUN_1000f7830(&DAT_100fdbc98,&DAT_100c6f4c0);
    UVar5 = Foundation::UUID::typeMetadataAccessor();
    lVar11 = *(long *)(*(long *)(UVar5.unknown + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(UVar5.unknown + -8) + 0x50);
    uVar12 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    _swift_allocObject(puVar4,uVar12 + lVar11 * uVar7,uVar8 | 7);
    puVar6 = puVar4;
    _malloc_size();
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1006a2fa0);
      (*pcVar3)();
    }
    lVar9 = (long)puVar6 - uVar12;
    if (lVar9 == -0x8000000000000000 && lVar11 == -1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1006a2fa4);
      (*pcVar3)();
    }
    lVar2 = 0;
    if (lVar11 != 0) {
      lVar2 = lVar9 / lVar11;
    }
    *(ulong *)(puVar4 + 0x10) = uVar10;
    *(long *)(puVar4 + 0x18) = lVar2 << 1;
  }
  UVar5 = Foundation::UUID::typeMetadataAccessor();
  uVar7 = (ulong)*(byte *)(*(long *)(UVar5.unknown + -8) + 0x50);
  uVar7 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  puVar6 = puVar4 + uVar7;
  puVar1 = param_4 + uVar7;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar6,puVar1,uVar10,UVar5.unknown);
  }
  else {
    if ((puVar4 < param_4) ||
       (puVar1 + *(long *)(*(long *)(UVar5.unknown + -8) + 0x48) * uVar10 <= puVar6)) {
      _swift_arrayInitWithTakeFrontToBack(puVar6,puVar1,uVar10);
    }
    else if (puVar4 != param_4) {
      _swift_arrayInitWithTakeBackToFront(puVar6,puVar1,uVar10);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar4;
}



/* Address: 0x1006a2fa8 | FUN_1006a2fa8 */

undefined * FUN_1006a2fa8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1006a30c8);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fdbc90;
    FUN_1000f7830(&DAT_100fdbc90,&DAT_100c70c40);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x48) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&DAT_100efa560);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x48 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0x48);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x1006a30c8 | FUN_1006a30c8 */

void FUN_1006a30c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
  *(undefined8 *)(unaff_x22 + 0x28) = param_3;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  _swift_task_switch(FUN_1006a30e4,0,0);
  return;
}



/* Address: 0x1006a30e4 | FUN_1006a30e4 */

void FUN_1006a30e4(void)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  piVar3 = *(int **)(unaff_x22 + 0x20);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1006a3158;
                    /* WARNING: Could not recover jumptable at 0x0001006a3154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))
            (plVar2,*(undefined8 *)(unaff_x22 + 0x18),0,0,unaff_x22 + 0x10);
  return;
}



/* Address: 0x1006a3158 | FUN_1006a3158 */

void FUN_1006a3158(void)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x30));
  if (unaff_x20 != 0) {
    FUN_1000f7830(&DAT_100fdbdb8,&DAT_100c6f530);
    puVar1 = (undefined8 *)PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
    _swift_allocError();
    *puVar1 = *(undefined8 *)(lVar2 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001006a31d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001006a31e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Address: 0x1006a31e8 | FUN_1006a31e8 */

void FUN_1006a31e8(undefined8 param_1)

{
  long unaff_x20;
  __int64 _Var1;
  
  _Var1 = *(__int64 *)(unaff_x20 + 0x28);
  Swift::CodingUserInfoKey::typeMetadataAccessor();
  _Var1 = Swift::Hashable::_rawHashValue(_Var1);
  FUN_1006a33d8(param_1,_Var1);
  return;
}



/* Address: 0x1006a3238 | FUN_1006a3238 */

void FUN_1006a3238(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  Hasher into;
  __int64 _Var1;
  long unaff_x20;
  undefined1 auStack_88 [72];
  
  Swift::Hasher::init(*(__int64 *)(unaff_x20 + 0x28));
  into.unknown = auStack_88;
  Swift::Hashable::hash(into);
  _Var1 = Swift::Hasher::_finalize(into);
  FUN_1006a34f8(param_1,param_2,param_3,param_4,_Var1);
  return;
}


