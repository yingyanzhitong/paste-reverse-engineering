/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1005c64cc | FUN_1005c64cc */

void FUN_1005c64cc(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1005c642c(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),param_1);
  return;
}



/* Address: 0x1005c64f0 | FUN_1005c64f0 */

void FUN_1005c64f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar1 & 1) != 0) {
    _swift_willThrowTypedImpl(param_1,param_2,param_3);
  }
  return;
}



/* Address: 0x1005c654c | FUN_1005c654c */

void FUN_1005c654c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long *plVar1;
  undefined *puVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_9;
  *(undefined8 *)(unaff_x22 + 0x70) = param_10;
  *(undefined8 *)(unaff_x22 + 0x60) = param_8;
  *(undefined8 *)(unaff_x22 + 0x20) = param_7;
  *(undefined8 *)(unaff_x22 + 0x28) = param_8;
  *(undefined8 *)(unaff_x22 + 0x30) = param_9;
  *(undefined8 *)(unaff_x22 + 0x38) = param_5;
  *(undefined8 *)(unaff_x22 + 0x40) = param_6;
  *(undefined8 *)(unaff_x22 + 0x48) = param_4;
  plVar1 = (long *)0x90;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x78) = plVar1;
  puVar2 = &DAT_100fd4370;
  FUN_1000f7830(&DAT_100fd4370,&DAT_100c64bd8);
  *(undefined **)(unaff_x22 + 0x80) = puVar2;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c6634;
  FUN_1005c8378(param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,&DAT_100c64bf0,unaff_x22 + 0x10
                ,param_7,puVar2);
  return;
}



/* Address: 0x1005c6634 | FUN_1005c6634 */

void FUN_1005c6634(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  long *unaff_x22;
  long lVar6;
  undefined8 uVar7;
  
  lVar3 = *unaff_x22;
  lVar6 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x78));
  if (unaff_x20 == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar6 + 8);
  }
  else {
    uVar4 = *(undefined8 *)(lVar3 + 0x50);
    *(undefined8 *)(lVar3 + 0x58) = uVar4;
    uVar5 = *(undefined8 *)(lVar3 + 0x80);
    uVar1 = *(undefined8 *)(lVar3 + 0x68);
    uVar2 = *(undefined8 *)(lVar3 + 0x70);
    uVar7 = *(undefined8 *)(lVar3 + 0x60);
    _swift_errorRetain(uVar4);
    _swift_dynamicCast(uVar2,(undefined8 *)(lVar3 + 0x58),uVar5,uVar7,7);
    FUN_1005c64f0(uVar2,uVar7,uVar1);
    _swift_errorRelease(uVar4);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar6 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001005c66e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x1005c66e4 | FUN_1005c66e4 */

void FUN_1005c66e4(undefined8 param_1,undefined8 param_2,ulong param_3,int *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9,undefined8 param_10)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_9;
  *(undefined8 *)(unaff_x22 + 0x20) = param_10;
  *(long *)(unaff_x22 + 0x10) = param_8;
  lVar4 = *(long *)(param_8 + -8);
  *(long *)(unaff_x22 + 0x28) = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x30) = uVar2;
  iVar1 = *param_4;
  plVar3 = (long *)(ulong)(uint)param_4[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x38) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1005c67b4;
                    /* WARNING: Could not recover jumptable at 0x0001005c67b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_4))
            (plVar3,param_1,param_2,param_3 & 0xcfffffffffffffff,param_6,uVar2);
  return;
}



/* Address: 0x1005c67b4 | FUN_1005c67b4 */

void FUN_1005c67b4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  long *unaff_x22;
  long lVar8;
  
  lVar6 = *unaff_x22;
  lVar8 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar6 + 0x38));
  if (unaff_x20 == 0) {
    _swift_task_dealloc(*(undefined8 *)(lVar6 + 0x30));
    UNRECOVERED_JUMPTABLE = *(code **)(lVar8 + 8);
  }
  else {
    lVar1 = *(long *)(lVar6 + 0x28);
    uVar2 = *(undefined8 *)(lVar6 + 0x30);
    uVar5 = *(undefined8 *)(lVar6 + 0x18);
    puVar3 = *(undefined8 **)(lVar6 + 0x20);
    uVar7 = *(undefined8 *)(lVar6 + 0x10);
    uVar4 = uVar7;
    _swift_allocError(uVar7,uVar5,0,0);
    (**(code **)(lVar1 + 0x20))(uVar5,uVar2,uVar7);
    *puVar3 = uVar4;
    _swift_task_dealloc(uVar2);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar8 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001005c685c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x1005c6860 | FUN_1005c6860 */

void FUN_1005c6860(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  plVar7 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)thunk_FUN_1005c804c;
  FUN_1005c66e4(plVar7,param_1,param_2,param_3,uVar5,uVar3,uVar6,uVar1,uVar4,uVar2,param_4);
  return;
}



/* Address: 0x1005c6918 | FUN_1005c6918 */

void FUN_1005c6918(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  bool bVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  long unaff_x21;
  long lVar12;
  ulong uVar13;
  undefined1 auStack_1e8 [40];
  undefined1 auStack_1c0 [24];
  undefined1 auStack_1a8 [24];
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [24];
  undefined8 local_160;
  long lStack_158;
  undefined1 auStack_150 [48];
  undefined1 auStack_120 [48];
  undefined8 local_f0;
  long lStack_e8;
  undefined8 local_e0;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined1 local_d0;
  undefined7 uStack_cf;
  undefined1 uStack_c8;
  undefined7 local_c7;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined8 local_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined7 local_97;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  ulong local_78 [3];
  
  pcVar6 = param_2;
  if (DAT_100fd4388 != -1) {
    pcVar6 = (code *)&DAT_100fd4388;
    _swift_once(&DAT_100fd4388,FUN_1005ccb74);
  }
  Swift::TaskLocal::get(DAT_101057ba8);
  (*param_2)();
  lVar12 = 0;
  uVar11 = 1L << ((ulong)(byte)pcVar6[0x20] & 0x3f);
  uVar13 = 0xffffffffffffffff;
  if (((byte)pcVar6[0x20] & 0x3f) < 6) {
    uVar13 = ~(-1L << (uVar11 & 0x3f));
  }
  uVar13 = uVar13 & *(ulong *)(pcVar6 + 0x40);
  while( true ) {
    while (uVar13 == 0) {
      bVar7 = SCARRY8(lVar12,1);
      lVar12 = lVar12 + 1;
      if (bVar7) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1005c6cc0);
        (*pcVar6)();
      }
      if ((long)(uVar11 + 0x3f >> 6) <= lVar12) goto LAB_1005c6bb0;
      uVar13 = *(ulong *)(pcVar6 + 0x40 + lVar12 * 8);
    }
    uVar10 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
    uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
    uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
    uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
    uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | lVar12 << 6;
    puVar1 = (undefined8 *)(*(long *)(pcVar6 + 0x30) + uVar10 * 0x10);
    local_f0 = *puVar1;
    lVar3 = puVar1[1];
    lStack_e8 = lVar3;
    FUN_1005bee50(*(long *)(pcVar6 + 0x38) + uVar10 * 0x30,&local_e0);
    lVar5 = lStack_e8;
    uVar2 = local_f0;
    lStack_a8 = CONCAT71(uStack_d7,uStack_d8);
    uStack_a0 = CONCAT71(uStack_cf,local_d0);
    local_b0 = local_e0;
    uStack_98 = uStack_c8;
    uStack_8f = uStack_bf;
    uStack_88 = uStack_b8;
    local_97 = local_c7;
    uStack_90 = uStack_c0;
    _swift_bridgeObjectRetain(lVar3);
    if (lVar5 == 0) break;
    lStack_e8 = lStack_a8;
    local_f0 = local_b0;
    uStack_d8 = uStack_98;
    local_e0 = uStack_a0;
    uStack_cf = uStack_8f;
    uStack_c8 = uStack_88;
    uStack_d7 = local_97;
    local_d0 = uStack_90;
    FUN_1005bee50(&local_f0,auStack_120);
    FUN_1000f8cac(auStack_120,auStack_150,&DAT_100fd4160,&DAT_100c64720);
    uVar10 = local_78[0];
    _swift_beginAccess(local_78[0] + 0x20,auStack_190,0,0);
    FUN_100076688(uVar10 + 0x20,auStack_178);
    lVar3 = lStack_158;
    uVar4 = local_160;
    FUN_10007d048(auStack_178,local_160);
    (**(code **)(lVar3 + 0x48))(auStack_150,uVar2,lVar5,uVar4,lVar3);
    FUN_1000fb4c4(auStack_120,&DAT_100fd4160,&DAT_100c64720);
    FUN_1005bee8c(&local_f0);
    uVar8 = local_78[0];
    _swift_isUniquelyReferenced_nonNull_native();
    uVar10 = local_78[0];
    if ((uVar8 & 1) == 0) {
      _swift_beginAccess(local_78[0] + 0x10,auStack_1a8,0,0);
      uVar2 = *(undefined8 *)(uVar10 + 0x10);
      uVar4 = *(undefined8 *)(uVar10 + 0x18);
      _swift_beginAccess(uVar10 + 0x20,auStack_1c0,0,0);
      FUN_100076688(uVar10 + 0x20,auStack_1e8);
      uVar8 = 0;
      FUN_1005ce220();
      _swift_allocObject();
      *(undefined8 *)(uVar8 + 0x10) = uVar2;
      *(undefined8 *)(uVar8 + 0x18) = uVar4;
      FUN_100076508(auStack_1e8,uVar8 + 0x20);
      _swift_bridgeObjectRetain(uVar4);
      _swift_release(uVar10);
      local_78[0] = uVar8;
    }
    uVar10 = local_78[0];
    uVar13 = uVar13 - 1 & uVar13;
    _swift_beginAccess(local_78[0] + 0x20,auStack_1e8,0x21,0);
    FUN_100004594(uVar10 + 0x20);
    FUN_100076508(auStack_178,uVar10 + 0x20);
    _swift_endAccess(auStack_1e8);
  }
LAB_1005c6bb0:
  _swift_release(pcVar6);
  uVar13 = local_78[0];
  uStack_d8 = (undefined1)param_7;
  uStack_d7 = (undefined7)((ulong)param_7 >> 8);
  local_d0 = (undefined1)param_8;
  uStack_cf = (undefined7)((ulong)param_8 >> 8);
  uStack_c8 = (undefined1)param_4;
  local_c7 = (undefined7)((ulong)param_4 >> 8);
  uStack_c0 = (undefined1)param_5;
  uStack_bf = (undefined7)((ulong)param_5 >> 8);
  uStack_b8 = SUB81(local_78,0);
  uStack_b7 = (undefined7)((ulong)local_78 >> 8);
  local_e0 = param_6;
  _swift_retain(local_78[0]);
  puVar9 = &DAT_100fd4370;
  FUN_1000f7830(&DAT_100fd4370,&DAT_100c64bd8);
  FUN_1005c8228(param_1,uVar13,FUN_1005c7f80,&local_f0,param_6,puVar9,
                PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,&local_b0);
  if (unaff_x21 == 0) {
    _swift_release(uVar13);
    _swift_release(local_78[0]);
  }
  else {
    _swift_release(uVar13);
    uVar2 = local_b0;
    local_f0 = local_b0;
    _swift_errorRetain(local_b0);
    _swift_dynamicCast(param_9,&local_f0,puVar9,param_7,7);
    FUN_1005c64f0(param_9,param_7,param_8);
    _swift_errorRelease(uVar2);
    _swift_release(local_78[0]);
  }
  return;
}



/* Address: 0x1005c6cd8 | FUN_1005c6cd8 */

void FUN_1005c6cd8(undefined8 *param_1,undefined8 param_2,ulong param_3,code *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  long unaff_x22;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 uStack_78;
  undefined7 local_77;
  
  *(undefined8 *)(unaff_x22 + 0x1f0) = param_10;
  *(undefined8 *)(unaff_x22 + 0x1f8) = param_11;
  *(undefined8 *)(unaff_x22 + 0x1e8) = param_9;
  puVar7 = param_1;
  if (DAT_100fd4388 != -1) {
    puVar7 = &DAT_100fd4388;
    _swift_once(&DAT_100fd4388,FUN_1005ccb74);
  }
  Swift::TaskLocal::get(DAT_101057ba8);
  (*param_4)();
  lVar14 = 0;
  lVar8 = -1L << ((ulong)*(byte *)(puVar7 + 4) & 0x3f);
  uVar9 = -lVar8;
  uVar12 = 0xffffffffffffffff;
  if (uVar9 < 0x40) {
    uVar12 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar12 = uVar12 & puVar7[8];
  while( true ) {
    while (uVar12 == 0) {
      bVar4 = SCARRY8(lVar14,1);
      lVar14 = lVar14 + 1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1005c7064);
        (*pcVar3)();
      }
      if ((long)(0x3fU - lVar8 >> 6) <= lVar14) goto LAB_1005c6f90;
      uVar12 = (puVar7 + 8)[lVar14];
    }
    uVar9 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
    uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | lVar14 << 6;
    puVar1 = (undefined8 *)(puVar7[6] + uVar9 * 0x10);
    uVar2 = puVar1[1];
    *(undefined8 *)(unaff_x22 + 0x50) = *puVar1;
    *(undefined8 *)(unaff_x22 + 0x58) = uVar2;
    FUN_1005bee50(puVar7[7] + uVar9 * 0x30,unaff_x22 + 0x60);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x50);
    lVar5 = *(long *)(unaff_x22 + 0x58);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x70);
    uStack_78 = (undefined1)*(undefined8 *)(unaff_x22 + 0x78);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x81);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x79);
    local_77 = (undefined7)uVar16;
    _swift_bridgeObjectRetain(uVar2);
    if (lVar5 == 0) break;
    *(undefined8 *)(unaff_x22 + 0x98) = uVar17;
    *(undefined8 *)(unaff_x22 + 0x90) = uVar15;
    *(ulong *)(unaff_x22 + 0xa8) = CONCAT71(local_77,uStack_78);
    *(undefined8 *)(unaff_x22 + 0xa0) = uVar19;
    *(undefined8 *)(unaff_x22 + 0xb1) = uVar18;
    *(undefined8 *)(unaff_x22 + 0xa9) = uVar16;
    FUN_1005bee50(unaff_x22 + 0x90,unaff_x22 + 0xc0);
    FUN_1000f8cac(unaff_x22 + 0xc0,unaff_x22 + 0xf0,&DAT_100fd4160,&DAT_100c64720);
    lVar13 = *(long *)(unaff_x22 + 0x1d0);
    _swift_beginAccess(lVar13 + 0x20,unaff_x22 + 0x170,0,0);
    FUN_100076688(lVar13 + 0x20,unaff_x22 + 0x120);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x138);
    lVar13 = *(long *)(unaff_x22 + 0x140);
    FUN_10007d048(unaff_x22 + 0x120,uVar2);
    (**(code **)(lVar13 + 0x48))(unaff_x22 + 0xf0,uVar10,lVar5,uVar2,lVar13);
    FUN_1000fb4c4(unaff_x22 + 0xc0,&DAT_100fd4160,&DAT_100c64720);
    FUN_1005bee8c(unaff_x22 + 0x90);
    uVar9 = *(ulong *)(unaff_x22 + 0x1d0);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar13 = *(long *)(unaff_x22 + 0x1d0);
    lVar5 = lVar13;
    if ((uVar9 & 1) == 0) {
      _swift_beginAccess(lVar13 + 0x10,unaff_x22 + 0x188,0,0);
      uVar10 = *(undefined8 *)(lVar13 + 0x10);
      uVar2 = *(undefined8 *)(lVar13 + 0x18);
      _swift_beginAccess(lVar13 + 0x20,unaff_x22 + 0x1a0,0,0);
      FUN_100076688(lVar13 + 0x20,unaff_x22 + 0x148);
      lVar5 = 0;
      FUN_1005ce220();
      _swift_allocObject();
      *(undefined8 *)(lVar5 + 0x10) = uVar10;
      *(undefined8 *)(lVar5 + 0x18) = uVar2;
      FUN_100076508(unaff_x22 + 0x148,lVar5 + 0x20);
      _swift_bridgeObjectRetain(uVar2);
      _swift_release(lVar13);
      *(long *)(unaff_x22 + 0x1d0) = lVar5;
    }
    uVar12 = uVar12 - 1 & uVar12;
    _swift_beginAccess(lVar5 + 0x20,unaff_x22 + 0x1b8,0x21,0);
    FUN_100004594(lVar5 + 0x20);
    FUN_100076508(unaff_x22 + 0x120,lVar5 + 0x20);
    _swift_endAccess(unaff_x22 + 0x1b8);
  }
LAB_1005c6f90:
  _swift_release(puVar7);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x1d0);
  *(undefined8 *)(unaff_x22 + 0x200) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x20) = param_8;
  *(undefined8 *)(unaff_x22 + 0x28) = param_9;
  *(undefined8 *)(unaff_x22 + 0x30) = param_10;
  *(undefined8 *)(unaff_x22 + 0x38) = param_6;
  *(undefined8 *)(unaff_x22 + 0x40) = param_7;
  *(long **)(unaff_x22 + 0x48) = (long *)(unaff_x22 + 0x1d0);
  plVar11 = (long *)0x90;
  _swift_retain(uVar10);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x208) = plVar11;
  puVar6 = &DAT_100fd4370;
  FUN_1000f7830(&DAT_100fd4370,&DAT_100c64bd8);
  *(undefined **)(unaff_x22 + 0x210) = puVar6;
  *plVar11 = unaff_x22;
  plVar11[1] = (long)FUN_1005c707c;
  FUN_1005c8378(param_1,param_2,param_3 & 0xcfffffffffffffff,uVar10,&DAT_100c64c08,unaff_x22 + 0x10,
                param_8,puVar6);
  return;
}



/* Address: 0x1005c707c | FUN_1005c707c */

void FUN_1005c707c(void)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  long *unaff_x22;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = *unaff_x22;
  uVar2 = *(undefined8 *)(lVar7 + 0x200);
  lVar4 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar7 + 0x208));
  _swift_release(uVar2);
  if (unaff_x20 == 0) {
    _swift_release(*(undefined8 *)(lVar7 + 0x1d0));
    UNRECOVERED_JUMPTABLE = *(code **)(lVar4 + 8);
  }
  else {
    uVar3 = *(undefined8 *)(lVar7 + 0x210);
    uVar2 = *(undefined8 *)(lVar7 + 0x1f0);
    uVar1 = *(undefined8 *)(lVar7 + 0x1f8);
    uVar5 = *(undefined8 *)(lVar7 + 0x1e8);
    uVar6 = *(undefined8 *)(lVar7 + 0x1d8);
    *(undefined8 *)(lVar7 + 0x1e0) = uVar6;
    _swift_errorRetain(uVar6);
    _swift_dynamicCast(uVar1,lVar7 + 0x1e0,uVar3,uVar5,7);
    FUN_1005c64f0(uVar1,uVar5,uVar2);
    _swift_errorRelease(uVar6);
    _swift_release(*(undefined8 *)(lVar7 + 0x1d0));
    UNRECOVERED_JUMPTABLE = *(code **)(lVar4 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001005c7144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x1005c7148 | FUN_1005c7148 */

void FUN_1005c7148(undefined8 param_1,undefined8 param_2,ulong param_3,int *param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 param_7,long param_8,
                  undefined8 param_9,undefined8 param_10)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_9;
  *(undefined8 *)(unaff_x22 + 0x20) = param_10;
  *(long *)(unaff_x22 + 0x10) = param_8;
  lVar4 = *(long *)(param_8 + -8);
  *(long *)(unaff_x22 + 0x28) = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x30) = uVar2;
  uVar5 = *param_6;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar5;
  iVar1 = *param_4;
  plVar3 = (long *)(ulong)(uint)param_4[1];
  _swift_retain(uVar5);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x40) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1005c7230;
                    /* WARNING: Could not recover jumptable at 0x0001005c722c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_4))
            (plVar3,param_1,param_2,param_3 & 0xcfffffffffffffff,uVar5,uVar2);
  return;
}



/* Address: 0x1005c7230 | FUN_1005c7230 */

void FUN_1005c7230(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  long *unaff_x22;
  long lVar8;
  
  lVar7 = *unaff_x22;
  uVar5 = *(undefined8 *)(lVar7 + 0x38);
  lVar8 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar7 + 0x40));
  _swift_release(uVar5);
  if (unaff_x20 == 0) {
    _swift_task_dealloc(*(undefined8 *)(lVar7 + 0x30));
    UNRECOVERED_JUMPTABLE = *(code **)(lVar8 + 8);
  }
  else {
    lVar1 = *(long *)(lVar7 + 0x28);
    uVar2 = *(undefined8 *)(lVar7 + 0x30);
    uVar5 = *(undefined8 *)(lVar7 + 0x18);
    puVar3 = *(undefined8 **)(lVar7 + 0x20);
    uVar6 = *(undefined8 *)(lVar7 + 0x10);
    uVar4 = uVar6;
    _swift_allocError(uVar6,uVar5,0,0);
    (**(code **)(lVar1 + 0x20))(uVar5,uVar2,uVar6);
    *puVar3 = uVar4;
    _swift_task_dealloc(uVar2);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar8 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001005c72e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x1005c72e4 | FUN_1005c72e4 */

void FUN_1005c72e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  long unaff_x21;
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [24];
  undefined8 auStack_158 [5];
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined8 local_d0 [2];
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  ulong *puStack_98;
  undefined8 local_90 [3];
  long local_78;
  ulong local_58;
  
  if (DAT_100fd4388 != -1) {
    _swift_once(&DAT_100fd4388,FUN_1005ccb74);
  }
  Swift::TaskLocal::get(DAT_101057ba8);
  uVar4 = local_58;
  if (((uint)param_2 & 0xff) != 7) {
    _swift_beginAccess(local_58 + 0x20,auStack_170,0,0);
    FUN_100076688(uVar4 + 0x20,local_d0);
    lVar3 = local_b0;
    uVar1 = local_b8;
    FUN_10007d048(local_d0,local_b8);
    (**(code **)(lVar3 + 0x78))(param_2,uVar1,lVar3);
    uVar4 = local_58;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar4 & 1) == 0) {
      _swift_beginAccess(local_58 + 0x10,auStack_188,0,0);
      uVar1 = *(undefined8 *)(local_58 + 0x10);
      uVar2 = *(undefined8 *)(local_58 + 0x18);
      _swift_beginAccess(local_58 + 0x20,auStack_1a0,0,0);
      FUN_100076688(local_58 + 0x20,local_90);
      uVar4 = 0;
      FUN_1005ce220();
      _swift_allocObject();
      *(undefined8 *)(uVar4 + 0x10) = uVar1;
      *(undefined8 *)(uVar4 + 0x18) = uVar2;
      FUN_100076508(local_90,uVar4 + 0x20);
      _swift_bridgeObjectRetain(uVar2);
      _swift_release(local_58);
      local_58 = uVar4;
    }
    uVar4 = local_58;
    _swift_beginAccess(local_58 + 0x20,local_90,0x21,0);
    FUN_100004594(uVar4 + 0x20);
    FUN_100076508(local_d0,uVar4 + 0x20);
    _swift_endAccess(local_90);
  }
  FUN_1000f8cac(param_3,local_90,&DAT_100fd4378,&DAT_100c64c10);
  if (local_78 == 0) {
    puVar6 = local_90;
    FUN_1000fb4c4(puVar6,&DAT_100fd4378,&DAT_100c64c10);
  }
  else {
    FUN_100076508(local_90,local_d0);
    FUN_100076508(local_d0,local_90);
    uVar5 = local_58;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar4 = local_58;
    if ((uVar5 & 1) == 0) {
      _swift_beginAccess(local_58 + 0x10,auStack_118,0,0);
      uVar1 = *(undefined8 *)(uVar4 + 0x10);
      uVar2 = *(undefined8 *)(uVar4 + 0x18);
      _swift_beginAccess(uVar4 + 0x20,auStack_130,0,0);
      FUN_100076688(uVar4 + 0x20,auStack_158);
      uVar5 = 0;
      FUN_1005ce220();
      _swift_allocObject();
      *(undefined8 *)(uVar5 + 0x10) = uVar1;
      *(undefined8 *)(uVar5 + 0x18) = uVar2;
      FUN_100076508(auStack_158,uVar5 + 0x20);
      _swift_bridgeObjectRetain(uVar2);
      _swift_release(uVar4);
      local_58 = uVar5;
    }
    uVar4 = local_58;
    _swift_beginAccess(local_58 + 0x20,auStack_158,0x21,0);
    FUN_100004594(uVar4 + 0x20);
    FUN_100076508(local_90,uVar4 + 0x20);
    puVar6 = auStack_158;
    _swift_endAccess();
  }
  (*param_4)();
  uVar4 = local_58;
  if (puVar6 != (undefined8 *)0x0) {
    _swift_beginAccess(local_58 + 0x20,auStack_158,0,0);
    FUN_100076688(uVar4 + 0x20,local_d0);
    FUN_10007d048(local_d0,local_b8);
    (**(code **)(local_b0 + 0x60))(puVar6,local_b8,local_b0);
    uVar5 = local_58;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar4 = local_58;
    if ((uVar5 & 1) == 0) {
      _swift_beginAccess(local_58 + 0x10,auStack_e8,0,0);
      uVar1 = *(undefined8 *)(uVar4 + 0x10);
      uVar2 = *(undefined8 *)(uVar4 + 0x18);
      _swift_beginAccess(uVar4 + 0x20,auStack_100,0,0);
      FUN_100076688(uVar4 + 0x20,local_90);
      uVar5 = 0;
      FUN_1005ce220();
      _swift_allocObject();
      *(undefined8 *)(uVar5 + 0x10) = uVar1;
      *(undefined8 *)(uVar5 + 0x18) = uVar2;
      FUN_100076508(local_90,uVar5 + 0x20);
      _swift_bridgeObjectRetain(uVar2);
      _swift_release(uVar4);
      local_58 = uVar5;
    }
    uVar4 = local_58;
    _swift_beginAccess(local_58 + 0x20,local_90,0x21,0);
    FUN_100004594(uVar4 + 0x20);
    FUN_100076508(local_d0,uVar4 + 0x20);
    _swift_endAccess(local_90);
  }
  uVar4 = local_58;
  local_b0 = param_10;
  puStack_98 = &local_58;
  local_c0 = param_8;
  local_b8 = param_9;
  uStack_a8 = param_6;
  local_a0 = param_7;
  _swift_retain(local_58);
  puVar7 = &DAT_100fd4370;
  FUN_1000f7830(&DAT_100fd4370,&DAT_100c64bd8);
  FUN_1005c8228(param_1,uVar4,FUN_1005c816c,local_d0,param_8,puVar7,
                PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,local_90);
  if (unaff_x21 == 0) {
    _swift_release(uVar4);
    _swift_release(local_58);
  }
  else {
    _swift_release(uVar4);
    local_d0[0] = local_90[0];
    _swift_errorRetain(local_90[0]);
    _swift_dynamicCast(param_11,local_d0,puVar7,param_9,7);
    FUN_1005c64f0(param_11,param_9,param_10);
    _swift_errorRelease(local_90[0]);
    _swift_release(local_58);
  }
  return;
}



/* Address: 0x1005c7800 | FUN_1005c7800 */

void FUN_1005c7800(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,long *param_8)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_6 + -8);
  lVar2 = *(long *)(lVar4 + 0x40);
  uVar3 = *param_4;
  _swift_retain(uVar3);
  (*param_2)(param_1);
  _swift_release(uVar3);
  if (unaff_x21 != 0) {
    lVar1 = param_6;
    _swift_allocError(param_6,param_7,0,0);
    (**(code **)(lVar4 + 0x20))
              (param_7,&stack0xffffffffffffffa0 + -(lVar2 + 0xfU & 0xfffffffffffffff0),param_6);
    *param_8 = lVar1;
  }
  return;
}



/* Address: 0x1005c78d0 | FUN_1005c78d0 */

void FUN_1005c78d0(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,code *param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  ulong *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long unaff_x22;
  
  puVar1 = (ulong *)(unaff_x22 + 0x298);
  *(undefined8 *)(unaff_x22 + 0x2c0) = param_13;
  *(undefined8 *)(unaff_x22 + 0x2b8) = param_12;
  *(undefined8 *)(unaff_x22 + 0x2b0) = param_11;
  if (DAT_100fd4388 != -1) {
    _swift_once(&DAT_100fd4388,FUN_1005ccb74);
  }
  Swift::TaskLocal::get(DAT_101057ba8);
  if (((uint)param_4 & 0xff) != 7) {
    lVar8 = *(long *)(unaff_x22 + 0x298);
    _swift_beginAccess(lVar8 + 0x20,unaff_x22 + 0x238,0,0);
    FUN_100076688(lVar8 + 0x20,unaff_x22 + 0x140);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x158);
    lVar8 = *(long *)(unaff_x22 + 0x160);
    FUN_10007d048(unaff_x22 + 0x140,uVar10);
    (**(code **)(lVar8 + 0x78))(param_4,uVar10,lVar8);
    uVar3 = *(ulong *)(unaff_x22 + 0x298);
    _swift_isUniquelyReferenced_nonNull_native();
    uVar9 = *(ulong *)(unaff_x22 + 0x298);
    uVar4 = uVar9;
    if ((uVar3 & 1) == 0) {
      _swift_beginAccess(uVar9 + 0x10,unaff_x22 + 0x250,0,0);
      uVar10 = *(undefined8 *)(uVar9 + 0x10);
      uVar2 = *(undefined8 *)(uVar9 + 0x18);
      _swift_beginAccess(uVar9 + 0x20,unaff_x22 + 0x268,0,0);
      FUN_100076688(uVar9 + 0x20,unaff_x22 + 0x168);
      uVar4 = 0;
      FUN_1005ce220();
      _swift_allocObject();
      *(undefined8 *)(uVar4 + 0x10) = uVar10;
      *(undefined8 *)(uVar4 + 0x18) = uVar2;
      FUN_100076508(unaff_x22 + 0x168,uVar4 + 0x20);
      _swift_bridgeObjectRetain(uVar2);
      _swift_release(uVar9);
      *puVar1 = uVar4;
    }
    _swift_beginAccess(uVar4 + 0x20,unaff_x22 + 0x280,0x21,0);
    FUN_100004594(uVar4 + 0x20);
    FUN_100076508(unaff_x22 + 0x140,uVar4 + 0x20);
    _swift_endAccess(unaff_x22 + 0x280);
  }
  FUN_1000f8cac(param_5,unaff_x22 + 0x78,&DAT_100fd4378,&DAT_100c64c10);
  if (*(long *)(unaff_x22 + 0x90) == 0) {
    lVar8 = unaff_x22 + 0x78;
    FUN_1000fb4c4(lVar8,&DAT_100fd4378,&DAT_100c64c10);
  }
  else {
    FUN_100076508(unaff_x22 + 0x78,unaff_x22 + 0x50);
    FUN_100076508(unaff_x22 + 0x50,unaff_x22 + 0xf0);
    uVar3 = *puVar1;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar9 = *puVar1;
    uVar4 = uVar9;
    if ((uVar3 & 1) == 0) {
      _swift_beginAccess(uVar9 + 0x10,unaff_x22 + 0x1f0,0,0);
      uVar10 = *(undefined8 *)(uVar9 + 0x10);
      uVar2 = *(undefined8 *)(uVar9 + 0x18);
      _swift_beginAccess(uVar9 + 0x20,unaff_x22 + 0x208,0,0);
      FUN_100076688(uVar9 + 0x20,unaff_x22 + 0x118);
      uVar4 = 0;
      FUN_1005ce220();
      _swift_allocObject();
      *(undefined8 *)(uVar4 + 0x10) = uVar10;
      *(undefined8 *)(uVar4 + 0x18) = uVar2;
      FUN_100076508(unaff_x22 + 0x118,uVar4 + 0x20);
      _swift_bridgeObjectRetain(uVar2);
      _swift_release(uVar9);
      *puVar1 = uVar4;
    }
    _swift_beginAccess(uVar4 + 0x20,unaff_x22 + 0x220,0x21,0);
    FUN_100004594(uVar4 + 0x20);
    FUN_100076508(unaff_x22 + 0xf0,uVar4 + 0x20);
    lVar8 = unaff_x22 + 0x220;
    _swift_endAccess();
  }
  (*param_6)();
  if (lVar8 != 0) {
    lVar6 = *(long *)(unaff_x22 + 0x298);
    _swift_beginAccess(lVar6 + 0x20,unaff_x22 + 400,0,0);
    FUN_100076688(lVar6 + 0x20,unaff_x22 + 0xa0);
    uVar10 = *(undefined8 *)(unaff_x22 + 0xb8);
    lVar6 = *(long *)(unaff_x22 + 0xc0);
    FUN_10007d048(unaff_x22 + 0xa0,uVar10);
    (**(code **)(lVar6 + 0x60))(lVar8,uVar10,lVar6);
    uVar3 = *(ulong *)(unaff_x22 + 0x298);
    _swift_isUniquelyReferenced_nonNull_native();
    uVar9 = *(ulong *)(unaff_x22 + 0x298);
    uVar4 = uVar9;
    if ((uVar3 & 1) == 0) {
      _swift_beginAccess(uVar9 + 0x10,unaff_x22 + 0x1a8,0,0);
      uVar10 = *(undefined8 *)(uVar9 + 0x10);
      uVar2 = *(undefined8 *)(uVar9 + 0x18);
      _swift_beginAccess(uVar9 + 0x20,unaff_x22 + 0x1c0,0,0);
      FUN_100076688(uVar9 + 0x20,unaff_x22 + 200);
      uVar4 = 0;
      FUN_1005ce220();
      _swift_allocObject();
      *(undefined8 *)(uVar4 + 0x10) = uVar10;
      *(undefined8 *)(uVar4 + 0x18) = uVar2;
      FUN_100076508(unaff_x22 + 200,uVar4 + 0x20);
      _swift_bridgeObjectRetain(uVar2);
      _swift_release(uVar9);
      *puVar1 = uVar4;
    }
    _swift_beginAccess(uVar4 + 0x20,unaff_x22 + 0x1d8,0x21,0);
    FUN_100004594(uVar4 + 0x20);
    FUN_100076508(unaff_x22 + 0xa0,uVar4 + 0x20);
    _swift_endAccess(unaff_x22 + 0x1d8);
  }
  uVar10 = *(undefined8 *)(unaff_x22 + 0x298);
  *(undefined8 *)(unaff_x22 + 0x2c8) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x20) = param_10;
  *(undefined8 *)(unaff_x22 + 0x28) = param_11;
  *(undefined8 *)(unaff_x22 + 0x30) = param_12;
  *(undefined8 *)(unaff_x22 + 0x38) = param_8;
  *(undefined8 *)(unaff_x22 + 0x40) = param_9;
  *(ulong **)(unaff_x22 + 0x48) = puVar1;
  plVar7 = (long *)0x90;
  _swift_retain(uVar10);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x2d0) = plVar7;
  puVar5 = &DAT_100fd4370;
  FUN_1000f7830(&DAT_100fd4370,&DAT_100c64bd8);
  *(undefined **)(unaff_x22 + 0x2d8) = puVar5;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_1005c7dc4;
  FUN_1005c8378(param_1,param_2,param_3 & 0xcfffffffffffffff,uVar10,&DAT_100c64c28,unaff_x22 + 0x10,
                param_10,puVar5);
  return;
}



/* Address: 0x1005c7dc4 | FUN_1005c7dc4 */

void FUN_1005c7dc4(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x22;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar7 + 0x2c8);
  lVar4 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar7 + 0x2d0));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    _swift_release(*(undefined8 *)(lVar7 + 0x298));
    UNRECOVERED_JUMPTABLE = *(code **)(lVar4 + 8);
  }
  else {
    uVar2 = *(undefined8 *)(lVar7 + 0x2d8);
    uVar1 = *(undefined8 *)(lVar7 + 0x2c0);
    uVar3 = *(undefined8 *)(lVar7 + 0x2b8);
    uVar5 = *(undefined8 *)(lVar7 + 0x2b0);
    uVar6 = *(undefined8 *)(lVar7 + 0x2a0);
    *(undefined8 *)(lVar7 + 0x2a8) = uVar6;
    _swift_errorRetain(uVar6);
    _swift_dynamicCast(uVar1,lVar7 + 0x2a8,uVar2,uVar5,7);
    FUN_1005c64f0(uVar1,uVar5,uVar3);
    _swift_errorRelease(uVar6);
    _swift_release(*(undefined8 *)(lVar7 + 0x298));
    UNRECOVERED_JUMPTABLE = *(code **)(lVar4 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001005c7e94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x1005c7e98 | FUN_1005c7e98 */

void FUN_1005c7e98(undefined8 param_1,undefined8 param_2,ulong param_3,int *param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 param_7,long param_8,
                  undefined8 param_9,undefined8 param_10)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_9;
  *(undefined8 *)(unaff_x22 + 0x20) = param_10;
  *(long *)(unaff_x22 + 0x10) = param_8;
  lVar4 = *(long *)(param_8 + -8);
  *(long *)(unaff_x22 + 0x28) = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x30) = uVar2;
  uVar5 = *param_6;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar5;
  iVar1 = *param_4;
  plVar3 = (long *)(ulong)(uint)param_4[1];
  _swift_retain(uVar5);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x40) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1005c7230;
                    /* WARNING: Could not recover jumptable at 0x0001005c7f7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_4))
            (plVar3,param_1,param_2,param_3 & 0xcfffffffffffffff,uVar5,uVar2);
  return;
}



/* Address: 0x1005c7f80 | FUN_1005c7f80 */

void FUN_1005c7f80(void)

{
  FUN_1005c8090();
  return;
}



/* Address: 0x1005c7f94 | FUN_1005c7f94 */

void FUN_1005c7f94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  plVar7 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_1005c804c;
  FUN_1005c7148(plVar7,param_1,param_2,param_3,uVar5,uVar3,uVar6,uVar1,uVar4,uVar2,param_4);
  return;
}



/* Address: 0x1005c804c | FUN_1005c804c */

void FUN_1005c804c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001005c808c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Address: 0x1005c8090 | FUN_1005c8090 */

void FUN_1005c8090(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1005c7800(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),param_1);
  return;
}



/* Address: 0x1005c80b4 | FUN_1005c80b4 */

void FUN_1005c80b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  plVar7 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)thunk_FUN_1005c804c;
  FUN_1005c7e98(plVar7,param_1,param_2,param_3,uVar5,uVar3,uVar6,uVar1,uVar4,uVar2,param_4);
  return;
}



/* Address: 0x1005c816c | FUN_1005c816c */

void FUN_1005c816c(void)

{
  FUN_1005c7f80();
  return;
}



/* Address: 0x1005c8180 | thunk_FUN_1005c7230 */

void thunk_FUN_1005c7230(void)

{
  FUN_1005c7230();
  return;
}



/* Address: 0x1005c8184 | thunk_FUN_1005c804c */

void thunk_FUN_1005c804c(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001005c808c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Address: 0x1005c8188 | FUN_1005c8188 */

String FUN_1005c8188(void *param_1,undefined8 param_2)

{
  char *pcVar1;
  void *pvVar2;
  undefined8 uVar3;
  String SVar4;
  String SVar6;
  String SVar5;
  
  pcVar1 = (char *)0x2f;
  pvVar2 = param_1;
  FUN_1005c0c24(0x2f,param_1,param_2);
  if (((uint)pvVar2 & 0xff) == 1) {
    SVar4.bridgeObject = (void *)0xe300000000000000;
    SVar4.str = (char *)0x612f6e;
  }
  else {
    _swift_bridgeObjectRetain(param_2);
    SVar6.bridgeObject = param_1;
    SVar6.str = pcVar1;
    uVar3 = param_2;
    SVar5.str = Swift::String::get_subscript((Range<Index>)0xf,SVar6);
    SVar5.bridgeObject = pcVar1;
    SVar4 = Swift::String::__fromSubstring(SVar5);
    _swift_bridgeObjectRelease(uVar3);
    _swift_bridgeObjectRelease(param_2);
  }
  return SVar4;
}



/* Address: 0x1005c8224 | thunk_FUN_1005cdf80 */

void thunk_FUN_1005cdf80(void)

{
  FUN_1005cdf80();
  return;
}



/* Address: 0x1005c8228 | FUN_1005c8228 */

void FUN_1005c8228(TaskLocal *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long unaff_x21;
  undefined8 local_58;
  
  if (DAT_100fd4388 != -1) {
    _swift_once(&DAT_100fd4388,FUN_1005ccb74);
  }
  local_58 = param_2;
  Swift::TaskLocal::_withValue
            (param_1,DAT_101057ba8,&local_58,FUN_1005ce100,&stack0xffffffffffffff60,
             0xd000000000000014,0x8000000100dae580,0x5e4,param_5);
  if (unaff_x21 != 0) {
    _swift_errorRetain(unaff_x21);
    puVar1 = &DAT_100fd4370;
    FUN_1000f7830(&DAT_100fd4370,&DAT_100c64bd8);
    _swift_dynamicCast(param_8,&stack0xffffffffffffff60,puVar1,param_6,7);
    FUN_1005c64f0(param_8,param_6,param_7);
    _swift_errorRelease(unaff_x21);
  }
  return;
}



/* Address: 0x1005c8378 | FUN_1005c8378 */

void FUN_1005c8378(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_9;
  *(undefined8 *)(unaff_x22 + 0x78) = param_10;
  *(ulong *)(unaff_x22 + 0x60) = param_3;
  *(undefined8 *)(unaff_x22 + 0x68) = param_8;
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
  if (DAT_100fd4388 != -1) {
    _swift_once(&DAT_100fd4388,FUN_1005ccb74);
  }
  *(undefined8 *)(unaff_x22 + 0x48) = param_4;
  *(undefined8 *)(unaff_x22 + 0x20) = param_7;
  *(undefined8 *)(unaff_x22 + 0x28) = param_8;
  *(undefined8 *)(unaff_x22 + 0x30) = param_9;
  *(undefined8 *)(unaff_x22 + 0x38) = param_5;
  *(undefined8 *)(unaff_x22 + 0x40) = param_6;
  plVar1 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x80) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c84bc;
  FUN_1005ccef4(param_1,(undefined8 *)(unaff_x22 + 0x48),&DAT_100c64c40,unaff_x22 + 0x10,param_2,
                param_3 & 0xcfffffffffffffff,0xd000000000000014,0x8000000100dae580);
  return;
}



/* Address: 0x1005c84bc | FUN_1005c84bc */

void FUN_1005c84bc(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  *(long *)(lVar4 + 0x88) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x80));
  if (unaff_x20 == 0) {
    uVar1 = *(undefined8 *)(lVar4 + 0x58);
    uVar3 = *(undefined8 *)(lVar4 + 0x60);
    FUN_1000da368(uVar1,uVar3);
    pcVar2 = FUN_1000e5808;
  }
  else {
    uVar1 = *(undefined8 *)(lVar4 + 0x58);
    uVar3 = *(undefined8 *)(lVar4 + 0x60);
    FUN_1000da368(uVar1,uVar3);
    pcVar2 = FUN_1005c8540;
  }
  _swift_task_switch(pcVar2,uVar1,uVar3);
  return;
}



/* Address: 0x1005c8540 | FUN_1005c8540 */

void FUN_1005c8540(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x50) = uVar4;
  _swift_errorRetain(uVar4);
  puVar3 = &DAT_100fd4370;
  FUN_1000f7830(&DAT_100fd4370,&DAT_100c64bd8);
  _swift_dynamicCast(uVar2,(undefined8 *)(unaff_x22 + 0x50),puVar3,uVar5,7);
  FUN_1005c64f0(uVar2,uVar5,uVar1);
  _swift_errorRelease(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0001005c85e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005c85e4 | FUN_1005c85e4 */

undefined8 FUN_1005c85e4(void)

{
  undefined8 local_28;
  
  if (DAT_100fd4388 != -1) {
    _swift_once(&DAT_100fd4388,FUN_1005ccb74);
  }
  Swift::TaskLocal::get(DAT_101057ba8);
  return local_28;
}



/* Address: 0x1005c8640 | FUN_1005c8640 */

void FUN_1005c8640(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *unaff_x20;
  long lVar1;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined8 local_90;
  long lStack_88;
  undefined1 auStack_80 [48];
  
  FUN_1000f8cac(param_1,auStack_80,&DAT_100fd4160,&DAT_100c64720);
  lVar1 = *unaff_x20;
  _swift_beginAccess(lVar1 + 0x20,auStack_c0,0,0);
  FUN_100076688(lVar1 + 0x20,auStack_a8);
  FUN_10007d048(auStack_a8,local_90);
  (**(code **)(lStack_88 + 0x48))(auStack_80,param_2,param_3,local_90,lStack_88);
  FUN_1005c87a8(auStack_a8);
  FUN_1000fb4c4(param_1,&DAT_100fd4160,&DAT_100c64720);
  return;
}



/* Address: 0x1005c871c | FUN_1005c871c */

void FUN_1005c871c(undefined8 param_1)

{
  long *unaff_x20;
  long lVar1;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined8 local_40;
  long lStack_38;
  
  lVar1 = *unaff_x20;
  _swift_beginAccess(lVar1 + 0x20,auStack_70,0,0);
  FUN_100076688(lVar1 + 0x20,auStack_58);
  FUN_10007d048(auStack_58,local_40);
  (**(code **)(lStack_38 + 0x78))(param_1,local_40,lStack_38);
  FUN_1005c87a8(auStack_58);
  return;
}



/* Address: 0x1005c87a8 | FUN_1005c87a8 */

void FUN_1005c87a8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *unaff_x20;
  ulong uVar5;
  undefined1 auStack_98 [40];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  uVar3 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar5 = *unaff_x20;
  uVar4 = uVar5;
  if ((uVar3 & 1) == 0) {
    _swift_beginAccess(uVar5 + 0x10,auStack_58,0,0);
    uVar1 = *(undefined8 *)(uVar5 + 0x10);
    uVar2 = *(undefined8 *)(uVar5 + 0x18);
    _swift_beginAccess(uVar5 + 0x20,auStack_70,0,0);
    uVar4 = uVar5 + 0x20;
    FUN_100076688(uVar4,auStack_98);
    FUN_1005ce220();
    _swift_allocObject();
    *(undefined8 *)(uVar4 + 0x10) = uVar1;
    *(undefined8 *)(uVar4 + 0x18) = uVar2;
    FUN_100076508(auStack_98,uVar4 + 0x20);
    _swift_bridgeObjectRetain(uVar2);
    _swift_release(uVar5);
    *unaff_x20 = uVar4;
  }
  _swift_beginAccess(uVar4 + 0x20,auStack_98,0x21,0);
  FUN_100004594(uVar4 + 0x20);
  FUN_100076508(param_1,uVar4 + 0x20);
  _swift_endAccess(auStack_98);
  return;
}



/* Address: 0x1005c8890 | FUN_1005c8890 */

void FUN_1005c8890(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_2 + 0x20,auStack_38,0,0);
  FUN_100076688(param_2 + 0x20,param_1);
  return;
}



/* Address: 0x1005c88d8 | FUN_1005c88d8 */

undefined1  [16] FUN_1005c88d8(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_38,0,0);
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Address: 0x1005c8920 | FUN_1005c8920 */

void FUN_1005c8920(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_48,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  _swift_bridgeObjectRelease(uVar1);
  return;
}



/* Address: 0x1005c8970 | FUN_1005c8970 */

void FUN_1005c8970(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x20,auStack_38,0,0);
  FUN_100076688(unaff_x20 + 0x20,param_1);
  return;
}



/* Address: 0x1005c89b4 | FUN_1005c89b4 */

void FUN_1005c89b4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x20,auStack_38,0x21,0);
  FUN_100004594(unaff_x20 + 0x20);
  FUN_100076508(param_1,unaff_x20 + 0x20);
  _swift_endAccess(auStack_38);
  return;
}



/* Address: 0x1005c8a08 | FUN_1005c8a08 */

undefined1  [16] FUN_1005c8a08(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  _swift_beginAccess(unaff_x20 + 0x20,param_1,0x21,0);
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = _swift_endAccess;
  return auVar1;
}



/* Address: 0x1005c8a38 | FUN_1005c8a38 */

long FUN_1005c8a38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  FUN_100076508(param_3,unaff_x20 + 0x20);
  return unaff_x20;
}



/* Address: 0x1005c8a8c | FUN_1005c8a8c */

void FUN_1005c8a8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  FUN_100076508(param_3,unaff_x20 + 0x20);
  return;
}



/* Address: 0x1005c8ab0 | FUN_1005c8ab0 */

long FUN_1005c8ab0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar3 = *unaff_x20;
  _swift_beginAccess(unaff_x20 + 2,auStack_48,0,0);
  lVar1 = unaff_x20[2];
  lVar2 = unaff_x20[3];
  _swift_beginAccess(unaff_x20 + 4,auStack_60,0,0);
  _swift_allocObject(lVar3,0x48,7);
  *(long *)(lVar3 + 0x10) = lVar1;
  *(long *)(lVar3 + 0x18) = lVar2;
  FUN_100076688(unaff_x20 + 4,lVar3 + 0x20);
  _swift_bridgeObjectRetain(lVar2);
  return lVar3;
}



/* Address: 0x1005c8b38 | FUN_1005c8b38 */

void FUN_1005c8b38(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100004594(unaff_x20 + 0x20);
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1005c8b64 | _swift_retain */

void _swift_retain(void)

{
  _swift_retain();
  return;
}



/* Address: 0x1005c8b68 | FUN_1005c8b68 */

void FUN_1005c8b68(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  _swift_release(*unaff_x20);
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1005c8b90 | FUN_1005c8b90 */

undefined1  [16] FUN_1005c8b90(long param_1)

{
  undefined1 auVar1 [16];
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_38,0,0);
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x10);
  _swift_bridgeObjectRetain(*(undefined8 *)(param_1 + 0x18));
  return auVar1;
}



/* Address: 0x1005c8bdc | FUN_1005c8bdc */

undefined1  [16] FUN_1005c8bdc(undefined8 *param_1)

{
  void *pvVar1;
  long lVar2;
  long *unaff_x20;
  undefined1 auVar3 [16];
  
  pvVar1 = (void *)0xa0;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    pvVar1 = _malloc(0xa0);
  }
  else {
    _swift_coroFrameAlloc(0xa0,0x907a);
  }
  *param_1 = pvVar1;
  *(long **)((long)pvVar1 + 0x98) = unaff_x20;
  lVar2 = *unaff_x20;
  _swift_beginAccess(lVar2 + 0x20,(long)pvVar1 + 0x50,0,0);
  FUN_100076688(lVar2 + 0x20,pvVar1);
  auVar3._8_8_ = pvVar1;
  auVar3._0_8_ = FUN_1005c8c5c;
  return auVar3;
}



/* Address: 0x1005c8c5c | FUN_1005c8c5c */

void FUN_1005c8c5c(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  void *pvVar5;
  ulong *puVar6;
  ulong uVar7;
  
  pvVar5 = (void *)*param_1;
  puVar6 = *(ulong **)((long)pvVar5 + 0x98);
  if ((param_2 & 1) == 0) {
    uVar3 = *puVar6;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar7 = *puVar6;
    uVar4 = uVar7;
    if ((uVar3 & 1) == 0) {
      puVar6 = *(ulong **)((long)pvVar5 + 0x98);
      _swift_beginAccess(uVar7 + 0x10,(long)pvVar5 + 0x68,0,0);
      uVar1 = *(undefined8 *)(uVar7 + 0x10);
      uVar2 = *(undefined8 *)(uVar7 + 0x18);
      _swift_beginAccess(uVar7 + 0x20,(long)pvVar5 + 0x80,0,0);
      uVar4 = uVar7 + 0x20;
      FUN_100076688(uVar4,(long)pvVar5 + 0x28);
      FUN_1005ce220();
      _swift_allocObject();
      *(undefined8 *)(uVar4 + 0x10) = uVar1;
      *(undefined8 *)(uVar4 + 0x18) = uVar2;
      FUN_100076508((long)pvVar5 + 0x28,uVar4 + 0x20);
      _swift_bridgeObjectRetain(uVar2);
      _swift_release(uVar7);
      *puVar6 = uVar4;
    }
    _swift_beginAccess(uVar4 + 0x20,(long)pvVar5 + 0x28,0x21,0);
    FUN_100004594(uVar4 + 0x20);
    FUN_100076508(pvVar5,uVar4 + 0x20);
    _swift_endAccess((long)pvVar5 + 0x28);
  }
  else {
    FUN_100076688(pvVar5,(long)pvVar5 + 0x28);
    FUN_1005c87a8((long)pvVar5 + 0x28);
    FUN_100004594(pvVar5);
  }
  _free(pvVar5);
  return;
}



/* Address: 0x1005c8d6c | FUN_1005c8d6c */

undefined1  [16] FUN_1005c8d6c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined8 local_40;
  long lStack_38;
  
  _swift_beginAccess(param_1 + 0x20,auStack_70,0,0);
  FUN_100076688(param_1 + 0x20,auStack_58);
  FUN_100004640(auStack_58,local_40);
  uVar1 = local_40;
  lVar2 = lStack_38;
  (**(code **)(lStack_38 + 0x10))(local_40,lStack_38);
  FUN_100004594(auStack_58);
  auVar3._8_8_ = lVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Address: 0x1005c8df4 | FUN_1005c8df4 */

long FUN_1005c8df4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1005ce220();
  _swift_allocObject();
  *(long *)(lVar1 + 0x10) = param_1;
  *(undefined8 *)(lVar1 + 0x18) = param_2;
  FUN_100076508(param_3,lVar1 + 0x20);
  return lVar1;
}



/* Address: 0x1005c8e48 | thunk_FUN_1005c8e4c */

void thunk_FUN_1005c8e4c(uint param_1,code *param_2,undefined8 param_3,code *param_4,
                        undefined8 param_5,code *param_6,undefined8 param_7,code *param_8,
                        undefined4 param_9,undefined4 param_10,undefined8 param_11,
                        undefined8 param_12,undefined8 param_13,undefined8 param_14,
                        undefined8 param_15,long param_16)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_1c8 [96];
  undefined1 auStack_168 [24];
  undefined8 uStack_150;
  long lStack_148;
  undefined1 auStack_140 [8];
  undefined1 *puStack_138;
  undefined1 *puStack_128;
  undefined1 *puStack_120;
  undefined1 *puStack_118;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [8];
  undefined1 *puStack_c0;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _swift_beginAccess(param_16 + 0x20,auStack_e0,0,0);
  FUN_100076688(param_16 + 0x20,auStack_c8);
  FUN_100004640(auStack_c8,puStack_b0);
  puVar1 = puStack_b0;
  (**(code **)((long)puStack_a8 + 0x70))(puStack_b0,puStack_a8);
  FUN_100004594(auStack_c8);
  if (((uint)puVar1 & 0xff) <= (param_1 & 0xff)) {
    FUN_100076688(param_16 + 0x20,auStack_168);
    puVar1 = auStack_168;
    FUN_100004640();
    (*param_2)();
    puVar2 = puVar1;
    (*param_4)();
    puVar3 = puVar2;
    (*param_6)();
    puVar4 = puVar3;
    (*param_8)();
    auStack_140[0] = (undefined1)param_1;
    uStack_90 = param_11;
    uStack_88 = param_12;
    uStack_80 = param_13;
    uStack_78 = param_14;
    uStack_70 = param_15;
    uStack_108 = param_11;
    uStack_100 = param_12;
    uStack_f8 = param_13;
    uStack_f0 = param_14;
    uStack_e8 = param_15;
    puStack_138 = puVar1;
    puStack_128 = puVar2;
    puStack_120 = puVar3;
    puStack_118 = puVar4;
    auStack_c8[0] = auStack_140[0];
    puStack_c0 = puVar1;
    puStack_b0 = puVar2;
    puStack_a8 = puVar3;
    puStack_a0 = puVar4;
    _swift_bridgeObjectRetain(param_12);
    _swift_bridgeObjectRetain(param_14);
    FUN_1005bf638(auStack_c8,auStack_1c8);
    FUN_1004eaa3c(auStack_140);
    (**(code **)(lStack_148 + 0x28))(auStack_c8,uStack_150);
    FUN_1004eaa3c(auStack_c8);
    FUN_100004594(auStack_168);
  }
  return;
}



/* Address: 0x1005c8e4c | FUN_1005c8e4c */

void FUN_1005c8e4c(uint param_1,code *param_2,undefined8 param_3,code *param_4,undefined8 param_5,
                  code *param_6,undefined8 param_7,code *param_8,undefined4 param_9,
                  undefined4 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
                  undefined8 param_14,undefined8 param_15,long param_16)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_1c8 [96];
  undefined1 auStack_168 [24];
  undefined8 local_150;
  long lStack_148;
  undefined1 local_140 [8];
  undefined1 *local_138;
  undefined1 *local_128;
  undefined1 *puStack_120;
  undefined1 *local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined1 auStack_e0 [24];
  undefined1 local_c8 [8];
  undefined1 *local_c0;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  _swift_beginAccess(param_16 + 0x20,auStack_e0,0,0);
  FUN_100076688(param_16 + 0x20,local_c8);
  FUN_100004640(local_c8,local_b0);
  puVar1 = local_b0;
  (**(code **)((long)puStack_a8 + 0x70))(local_b0,puStack_a8);
  FUN_100004594(local_c8);
  if (((uint)puVar1 & 0xff) <= (param_1 & 0xff)) {
    FUN_100076688(param_16 + 0x20,auStack_168);
    puVar1 = auStack_168;
    FUN_100004640();
    (*param_2)();
    puVar2 = puVar1;
    (*param_4)();
    puVar3 = puVar2;
    (*param_6)();
    puVar4 = puVar3;
    (*param_8)();
    local_140[0] = (undefined1)param_1;
    local_90 = param_11;
    uStack_88 = param_12;
    local_80 = param_13;
    uStack_78 = param_14;
    local_70 = param_15;
    local_108 = param_11;
    uStack_100 = param_12;
    local_f8 = param_13;
    uStack_f0 = param_14;
    local_e8 = param_15;
    local_138 = puVar1;
    local_128 = puVar2;
    puStack_120 = puVar3;
    local_118 = puVar4;
    local_c8[0] = local_140[0];
    local_c0 = puVar1;
    local_b0 = puVar2;
    puStack_a8 = puVar3;
    local_a0 = puVar4;
    _swift_bridgeObjectRetain(param_12);
    _swift_bridgeObjectRetain(param_14);
    FUN_1005bf638(local_c8,auStack_1c8);
    FUN_1004eaa3c(local_140);
    (**(code **)(lStack_148 + 0x28))(local_c8,local_150);
    FUN_1004eaa3c(local_c8);
    FUN_100004594(auStack_168);
  }
  return;
}



/* Address: 0x1005c9000 | FUN_1005c9000 */

void FUN_1005c9000(uint param_1,code *param_2,undefined8 param_3,code *param_4,undefined8 param_5,
                  code *param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11,undefined8 param_12,long param_13)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_1c8 [96];
  undefined1 auStack_168 [24];
  undefined8 local_150;
  long lStack_148;
  undefined1 local_140 [8];
  undefined1 *local_138;
  undefined8 local_128;
  undefined1 *puStack_120;
  undefined1 *local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined1 auStack_e0 [24];
  undefined1 local_c8 [8];
  undefined1 *local_c0;
  undefined8 local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  _swift_beginAccess(param_13 + 0x20,auStack_e0,0,0);
  FUN_100076688(param_13 + 0x20,local_c8);
  FUN_100004640(local_c8,local_b0);
  uVar1 = local_b0;
  (**(code **)((long)puStack_a8 + 0x70))(local_b0,puStack_a8);
  FUN_100004594(local_c8);
  if (((uint)uVar1 & 0xff) <= (param_1 & 0xff)) {
    FUN_100076688(param_13 + 0x20,auStack_168);
    puVar2 = auStack_168;
    FUN_100004640();
    (*param_2)();
    puVar3 = puVar2;
    (*param_4)();
    puVar4 = puVar3;
    (*param_6)();
    local_140[0] = (undefined1)param_1;
    local_b0 = 0;
    uStack_88 = param_9;
    local_80 = param_10;
    uStack_78 = param_11;
    local_70 = param_12;
    local_128 = 0;
    uStack_100 = param_9;
    local_f8 = param_10;
    uStack_f0 = param_11;
    local_e8 = param_12;
    local_138 = puVar2;
    puStack_120 = puVar3;
    local_118 = puVar4;
    local_108 = param_8;
    local_c8[0] = local_140[0];
    local_c0 = puVar2;
    puStack_a8 = puVar3;
    local_a0 = puVar4;
    local_90 = param_8;
    _swift_bridgeObjectRetain(param_9);
    _swift_bridgeObjectRetain(param_11);
    FUN_1005bf638(local_c8,auStack_1c8);
    FUN_1004eaa3c(local_140);
    (**(code **)(lStack_148 + 0x28))(local_c8,local_150);
    FUN_1004eaa3c(local_c8);
    FUN_100004594(auStack_168);
  }
  return;
}



/* Address: 0x1005c9198 | FUN_1005c9198 */

undefined8 FUN_1005c9198(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined8 local_40;
  long lStack_38;
  
  _swift_beginAccess(param_1 + 0x20,auStack_70,0,0);
  FUN_100076688(param_1 + 0x20,auStack_58);
  FUN_100004640(auStack_58,local_40);
  uVar1 = local_40;
  (**(code **)(lStack_38 + 0x70))(local_40,lStack_38);
  FUN_100004594(auStack_58);
  return uVar1;
}



/* Address: 0x1005c9218 | FUN_1005c9218 */

void FUN_1005c9218(uint param_1,code *param_2,undefined8 param_3,code *param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,long param_11)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_1c8 [96];
  undefined1 auStack_168 [24];
  undefined8 local_150;
  long lStack_148;
  undefined1 local_140 [8];
  undefined1 *local_138;
  undefined8 local_128;
  undefined1 *puStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined1 auStack_e0 [24];
  undefined1 local_c8 [8];
  undefined1 *local_c0;
  undefined8 local_b0;
  undefined1 *puStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  _swift_beginAccess(param_11 + 0x20,auStack_e0,0,0);
  FUN_100076688(param_11 + 0x20,local_c8);
  FUN_100004640(local_c8,local_b0);
  uVar1 = local_b0;
  (**(code **)((long)puStack_a8 + 0x70))(local_b0,puStack_a8);
  FUN_100004594(local_c8);
  if (((uint)uVar1 & 0xff) <= (param_1 & 0xff)) {
    FUN_100076688(param_11 + 0x20,auStack_168);
    puVar2 = auStack_168;
    FUN_100004640();
    (*param_2)();
    puVar3 = puVar2;
    (*param_4)();
    local_140[0] = (undefined1)param_1;
    local_b0 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    uStack_78 = param_9;
    local_70 = param_10;
    local_128 = 0;
    local_118 = 0;
    uStack_110 = 0;
    uStack_f0 = param_9;
    local_e8 = param_10;
    local_138 = puVar2;
    puStack_120 = puVar3;
    local_108 = param_6;
    uStack_100 = param_7;
    local_f8 = param_8;
    local_c8[0] = local_140[0];
    local_c0 = puVar2;
    puStack_a8 = puVar3;
    local_90 = param_6;
    uStack_88 = param_7;
    local_80 = param_8;
    _swift_bridgeObjectRetain(param_7);
    _swift_bridgeObjectRetain(param_9);
    FUN_1005bf638(local_c8,auStack_1c8);
    FUN_1004eaa3c(local_140);
    (**(code **)(lStack_148 + 0x28))(local_c8,local_150,lStack_148);
    FUN_1004eaa3c(local_c8);
    FUN_100004594(auStack_168);
  }
  return;
}



/* Address: 0x1005c9398 | FUN_1005c9398 */

void FUN_1005c9398(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  undefined8 local_50;
  long lStack_48;
  
  _swift_beginAccess(param_4 + 0x20,auStack_80,0,0);
  FUN_100076688(param_4 + 0x20,auStack_68);
  FUN_100004640(auStack_68,local_50);
  (**(code **)(lStack_48 + 0x40))(param_1,param_2,param_3,local_50,lStack_48);
  FUN_100004594(auStack_68);
  return;
}



/* Address: 0x1005c9434 | FUN_1005c9434 */

undefined1  [16] FUN_1005c9434(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  long *unaff_x20;
  long lVar3;
  undefined1 auVar4 [16];
  
  pvVar2 = (void *)0xc0;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    pvVar2 = _malloc(0xc0);
  }
  else {
    _swift_coroFrameAlloc(0xc0,0xe3bc);
  }
  *param_1 = pvVar2;
  *(undefined8 *)((long)pvVar2 + 0xa8) = param_3;
  *(long **)((long)pvVar2 + 0xb0) = unaff_x20;
  *(undefined8 *)((long)pvVar2 + 0xa0) = param_2;
  lVar3 = *unaff_x20;
  *(long *)((long)pvVar2 + 0xb8) = lVar3;
  _swift_beginAccess(lVar3 + 0x20,(long)pvVar2 + 0x88,0,0);
  FUN_100076688(lVar3 + 0x20,(long)pvVar2 + 0x30);
  uVar1 = *(undefined8 *)((long)pvVar2 + 0x48);
  lVar3 = *(long *)((long)pvVar2 + 0x50);
  FUN_100004640((long)pvVar2 + 0x30,uVar1);
  (**(code **)(lVar3 + 0x40))(pvVar2,param_2,param_3,uVar1,lVar3);
  FUN_100004594((long)pvVar2 + 0x30);
  auVar4._8_8_ = pvVar2;
  auVar4._0_8_ = FUN_1005c9504;
  return auVar4;
}



/* Address: 0x1005c9504 | FUN_1005c9504 */

void FUN_1005c9504(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  void *pvVar5;
  code *pcVar6;
  
  pvVar5 = (void *)*param_1;
  lVar3 = *(long *)((long)pvVar5 + 0xb8);
  uVar1 = *(undefined8 *)((long)pvVar5 + 0xa0);
  uVar4 = *(undefined8 *)((long)pvVar5 + 0xa8);
  FUN_1000f8cac(pvVar5,(long)pvVar5 + 0x30,&DAT_100fd4160,&DAT_100c64720);
  FUN_100076688(lVar3 + 0x20,(long)pvVar5 + 0x60);
  uVar2 = *(undefined8 *)((long)pvVar5 + 0x78);
  lVar3 = *(long *)((long)pvVar5 + 0x80);
  FUN_10007d048((long)pvVar5 + 0x60,uVar2);
  pcVar6 = *(code **)(lVar3 + 0x48);
  _swift_bridgeObjectRetain(uVar4);
  (*pcVar6)((long)pvVar5 + 0x30,uVar1,uVar4,uVar2,lVar3);
  FUN_1005c87a8((long)pvVar5 + 0x60);
  FUN_1000fb4c4(pvVar5,&DAT_100fd4160,&DAT_100c64720);
  _free(pvVar5);
  return;
}



/* Address: 0x1005c95d4 | FUN_1005c95d4 */

undefined1  [16] FUN_1005c95d4(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  long *unaff_x20;
  long lVar3;
  undefined1 auVar4 [16];
  
  pvVar1 = (void *)0x58;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    pvVar1 = _malloc(0x58);
  }
  else {
    _swift_coroFrameAlloc(0x58,0xb76c);
  }
  *param_1 = pvVar1;
  *(long **)((long)pvVar1 + 0x40) = unaff_x20;
  lVar3 = *unaff_x20;
  *(long *)((long)pvVar1 + 0x48) = lVar3;
  _swift_beginAccess(lVar3 + 0x20,(long)pvVar1 + 0x28,0,0);
  FUN_100076688(lVar3 + 0x20,pvVar1);
  uVar2 = *(undefined8 *)((long)pvVar1 + 0x18);
  lVar3 = *(long *)((long)pvVar1 + 0x20);
  FUN_100004640(pvVar1,uVar2);
  (**(code **)(lVar3 + 0x70))(uVar2,lVar3);
  FUN_100004594(pvVar1);
  *(undefined1 *)((long)pvVar1 + 0x50) = (char)uVar2;
  auVar4._8_8_ = (undefined1 *)((long)pvVar1 + 0x50);
  auVar4._0_8_ = FUN_1005c968c;
  return auVar4;
}



/* Address: 0x1005c968c | FUN_1005c968c */

void FUN_1005c968c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 uVar3;
  void *pvVar4;
  
  pvVar4 = (void *)*param_1;
  uVar3 = *(undefined1 *)((long)pvVar4 + 0x50);
  FUN_100076688(*(long *)((long)pvVar4 + 0x48) + 0x20,pvVar4);
  uVar1 = *(undefined8 *)((long)pvVar4 + 0x18);
  lVar2 = *(long *)((long)pvVar4 + 0x20);
  FUN_10007d048(pvVar4,uVar1);
  (**(code **)(lVar2 + 0x78))(uVar3,uVar1,lVar2);
  FUN_1005c87a8(pvVar4);
  _free(pvVar4);
  return;
}



/* Address: 0x1005c9708 | FUN_1005c9708 */

void FUN_1005c9708(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5,
                  undefined8 param_6,code *param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
                  long param_14)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_1c8 [96];
  undefined1 auStack_168 [24];
  undefined8 local_150;
  long lStack_148;
  undefined1 local_140 [8];
  undefined1 *local_138;
  undefined1 *local_128;
  undefined1 *puStack_120;
  undefined1 *local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined1 auStack_e0 [24];
  undefined1 local_c8 [8];
  undefined1 *local_c0;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  _swift_beginAccess(param_14 + 0x20,auStack_e0,0,0);
  FUN_100076688(param_14 + 0x20,local_c8);
  FUN_100004640(local_c8,local_b0);
  (**(code **)((long)puStack_a8 + 0x70))(local_b0,puStack_a8);
  FUN_100004594(local_c8);
  if (((ulong)local_b0 & 0xff) == 0) {
    FUN_100076688(param_14 + 0x20,auStack_168);
    puVar1 = auStack_168;
    FUN_100004640();
    (*param_1)();
    puVar2 = puVar1;
    (*param_3)();
    puVar3 = puVar2;
    (*param_5)();
    puVar4 = puVar3;
    (*param_7)();
    local_c8[0] = 0;
    local_90 = param_9;
    uStack_88 = param_10;
    local_80 = param_11;
    uStack_78 = param_12;
    local_70 = param_13;
    local_140[0] = 0;
    local_108 = param_9;
    uStack_100 = param_10;
    local_f8 = param_11;
    uStack_f0 = param_12;
    local_e8 = param_13;
    local_138 = puVar1;
    local_128 = puVar2;
    puStack_120 = puVar3;
    local_118 = puVar4;
    local_c0 = puVar1;
    local_b0 = puVar2;
    puStack_a8 = puVar3;
    local_a0 = puVar4;
    _swift_bridgeObjectRetain(param_10);
    _swift_bridgeObjectRetain(param_12);
    FUN_1005bf638(local_c8,auStack_1c8);
    FUN_1004eaa3c(local_140);
    (**(code **)(lStack_148 + 0x28))(local_c8,local_150);
    FUN_1004eaa3c(local_c8);
    FUN_100004594(auStack_168);
  }
  return;
}



/* Address: 0x1005c98b4 | FUN_1005c98b4 */

void FUN_1005c98b4(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11,long param_12)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_1c8 [96];
  undefined1 auStack_168 [24];
  undefined8 local_150;
  long lStack_148;
  undefined1 local_140 [8];
  undefined1 *local_138;
  undefined8 local_128;
  undefined1 *puStack_120;
  undefined1 *local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined1 auStack_e0 [24];
  undefined1 local_c8 [8];
  undefined1 *local_c0;
  ulong local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  _swift_beginAccess(param_12 + 0x20,auStack_e0,0,0);
  FUN_100076688(param_12 + 0x20,local_c8);
  FUN_100004640(local_c8,local_b0);
  (**(code **)((long)puStack_a8 + 0x70))(local_b0,puStack_a8);
  FUN_100004594(local_c8);
  if ((local_b0 & 0xff) == 0) {
    FUN_100076688(param_12 + 0x20,auStack_168);
    puVar1 = auStack_168;
    FUN_100004640();
    (*param_1)();
    puVar2 = puVar1;
    (*param_3)();
    puVar3 = puVar2;
    (*param_5)();
    local_c8[0] = 0;
    local_b0 = 0;
    local_80 = param_9;
    uStack_78 = param_10;
    local_70 = param_11;
    local_140[0] = 0;
    local_128 = 0;
    local_f8 = param_9;
    uStack_f0 = param_10;
    local_e8 = param_11;
    local_138 = puVar1;
    puStack_120 = puVar2;
    local_118 = puVar3;
    local_108 = param_7;
    uStack_100 = param_8;
    local_c0 = puVar1;
    puStack_a8 = puVar2;
    local_a0 = puVar3;
    local_90 = param_7;
    uStack_88 = param_8;
    _swift_bridgeObjectRetain(param_8);
    _swift_bridgeObjectRetain(param_10);
    FUN_1005bf638(local_c8,auStack_1c8);
    FUN_1004eaa3c(local_140);
    (**(code **)(lStack_148 + 0x28))(local_c8,local_150);
    FUN_1004eaa3c(local_c8);
    FUN_100004594(auStack_168);
  }
  return;
}


