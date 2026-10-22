/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100691168 | FUN_100691168 */

long FUN_100691168(ulong *param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar2 = 0;
  uVar3 = param_2;
  do {
    uVar4 = *param_1;
    if (uVar4 != 0) {
      if (-1 < -lVar2) {
        uVar3 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
        uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
        uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
        return LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) - lVar2;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006911bc);
      (*pcVar1)();
    }
    lVar2 = lVar2 + -0x40;
    uVar3 = uVar3 - 1;
    param_1 = param_1 + 1;
  } while (uVar3 != 0);
  if ((param_2 & 0x3ffffffffffffff) >> 0x39 == 0) {
    return param_2 << 6;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006911b8);
  (*pcVar1)();
}



/* Address: 0x1006911bc | FUN_1006911bc */

ulong FUN_1006911bc(ulong param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if ((param_3 & 0x3ffffffffffffff) >> 0x39 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100691238);
    (*pcVar1)();
  }
  if (param_3 << 6 <= param_1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10069123c);
    (*pcVar1)();
  }
  uVar3 = param_1 >> 6;
  uVar2 = -1L << (param_1 & 0x3f);
  uVar2 = uVar2 - 1 & uVar2 & *(ulong *)(param_2 + uVar3 * 8);
  if (uVar2 == 0) {
    uVar4 = uVar3;
    do {
      uVar3 = uVar4 + 1;
      if ((long)param_3 <= (long)uVar3) {
        return param_3 << 6;
      }
      uVar2 = *(ulong *)(param_2 + 8 + uVar4 * 8);
      uVar4 = uVar3;
    } while (uVar2 == 0);
    if ((uVar3 & 0x3ffffffffffffff) >> 0x39 != 0) goto LAB_100691230;
  }
  else if ((long)param_1 < 0) {
LAB_100691230:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100691234);
    (*pcVar1)();
  }
  uVar2 = (uVar2 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar2 & 0x5555555555555555) << 1;
  uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
  uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
  uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
  return LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) | uVar3 << 6;
}



/* Address: 0x10069123c | FUN_10069123c */

ulong FUN_10069123c(ulong param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if ((param_3 & 0x3ffffffffffffff) >> 0x39 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006912a0);
    (*pcVar1)();
  }
  if (param_3 << 6 < param_1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006912a4);
    (*pcVar1)();
  }
  uVar2 = param_1 >> 6;
  if (((param_1 & 0x3f) == 0) ||
     (uVar4 = *(ulong *)(param_2 + uVar2 * 8) & (-1L << (param_1 & 0x3f) ^ 0xffffffffffffffffU),
     uVar4 == 0)) {
    uVar3 = uVar2;
    do {
      uVar2 = uVar3 - 1;
      if ((long)uVar3 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10069129c);
        (*pcVar1)();
      }
      uVar4 = *(ulong *)(param_2 + -8 + uVar3 * 8);
      uVar3 = uVar2;
    } while (uVar4 == 0);
  }
  return (LZCOUNT(uVar4) | uVar2 << 6) ^ 0x3f;
}



/* Address: 0x1006912a4 | FUN_1006912a4 */

ulong FUN_1006912a4(ulong param_1,ulong param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  code *pcVar7;
  bool bVar8;
  ulong uVar9;
  undefined1 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  byte bVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  
  if ((param_4 & 0x3ffffffffffffff) >> 0x39 != 0) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x100691484);
    (*pcVar7)();
  }
  if (param_4 << 6 < param_1) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x100691488);
    (*pcVar7)();
  }
  if (param_4 << 6 < param_2) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10069148c);
    (*pcVar7)();
  }
  uVar9 = param_2;
  if (param_1 <= param_2) {
    uVar9 = param_1;
  }
  uVar16 = param_2;
  if (param_2 <= param_1) {
    uVar16 = param_1;
  }
  uVar15 = uVar9 >> 6;
  uVar11 = uVar16 >> 6;
  if (uVar15 == uVar11) {
    if ((long)uVar15 < (long)param_4) {
      uVar9 = *(ulong *)(param_3 + uVar15 * 8) & (-1L << (uVar16 & 0x3f) ^ -1L << (uVar9 & 0x3f));
      uVar16 = (ulong)(byte)(POPCOUNT((char)uVar9) + POPCOUNT((char)(uVar9 >> 8)) +
                             POPCOUNT((char)(uVar9 >> 0x10)) + POPCOUNT((char)(uVar9 >> 0x18)) +
                             POPCOUNT((char)(uVar9 >> 0x20)) + POPCOUNT((char)(uVar9 >> 0x28)) +
                             POPCOUNT((char)(uVar9 >> 0x30)) + POPCOUNT((char)(uVar9 >> 0x38)));
      uVar9 = -uVar16;
      if (param_1 <= param_2) {
        uVar9 = uVar16;
      }
      return uVar9;
    }
  }
  else if ((long)uVar15 < (long)param_4) {
    uVar9 = *(ulong *)(param_3 + uVar15 * 8) & -1L << (uVar9 & 0x3f);
    bVar22 = POPCOUNT((char)uVar9) + POPCOUNT((char)(uVar9 >> 8)) + POPCOUNT((char)(uVar9 >> 0x10))
             + POPCOUNT((char)(uVar9 >> 0x18)) + POPCOUNT((char)(uVar9 >> 0x20)) +
             POPCOUNT((char)(uVar9 >> 0x28)) + POPCOUNT((char)(uVar9 >> 0x30)) +
             POPCOUNT((char)(uVar9 >> 0x38));
    uVar20 = (ulong)bVar22;
    uVar9 = uVar15 + 1;
    uVar13 = uVar9;
    if (uVar9 < uVar11) {
      uVar1 = uVar11 + ~uVar15;
      uVar13 = uVar11;
      if (7 < uVar1) {
        uVar14 = uVar1 & 0xfffffffffffffff8;
        uVar9 = uVar9 + uVar14;
        lVar17 = 0;
        lVar19 = 0;
        lVar21 = 0;
        uVar20 = (ulong)bVar22;
        lVar23 = 0;
        lVar24 = 0;
        lVar25 = 0;
        lVar26 = 0;
        puVar10 = (undefined1 *)(param_3 + uVar15 * 8 + 0x28);
        uVar15 = uVar14;
        do {
          uVar6 = *(undefined8 *)(puVar10 + -0x18);
          uVar18 = *(undefined8 *)(puVar10 + -0x20);
          auVar27[8] = 1;
          auVar27._0_8_ = 0x101010101010101;
          auVar27[9] = 1;
          auVar27[10] = 1;
          auVar27[0xb] = 1;
          auVar27[0xc] = 1;
          auVar27[0xd] = 1;
          auVar27[0xe] = 1;
          auVar27[0xf] = 1;
          auVar30[1] = POPCOUNT((char)((ulong)uVar18 >> 8));
          auVar30[0] = POPCOUNT((char)uVar18);
          auVar30[2] = POPCOUNT((char)((ulong)uVar18 >> 0x10));
          auVar30[3] = POPCOUNT((char)((ulong)uVar18 >> 0x18));
          auVar30[4] = POPCOUNT((char)((ulong)uVar18 >> 0x20));
          auVar30[5] = POPCOUNT((char)((ulong)uVar18 >> 0x28));
          auVar30[6] = POPCOUNT((char)((ulong)uVar18 >> 0x30));
          auVar30[7] = POPCOUNT((char)((ulong)uVar18 >> 0x38));
          auVar30[8] = POPCOUNT((char)uVar6);
          auVar30[9] = POPCOUNT((char)((ulong)uVar6 >> 8));
          auVar30[10] = POPCOUNT((char)((ulong)uVar6 >> 0x10));
          auVar30[0xb] = POPCOUNT((char)((ulong)uVar6 >> 0x18));
          auVar30[0xc] = POPCOUNT((char)((ulong)uVar6 >> 0x20));
          auVar30[0xd] = POPCOUNT((char)((ulong)uVar6 >> 0x28));
          auVar30[0xe] = POPCOUNT((char)((ulong)uVar6 >> 0x30));
          auVar30[0xf] = POPCOUNT((char)((ulong)uVar6 >> 0x38));
          auVar30 = NEON_udot(auVar27,auVar30,1);
          auVar28[8] = 1;
          auVar28._0_8_ = 0x101010101010101;
          auVar28[9] = 1;
          auVar28[10] = 1;
          auVar28[0xb] = 1;
          auVar28[0xc] = 1;
          auVar28[0xd] = 1;
          auVar28[0xe] = 1;
          auVar28[0xf] = 1;
          auVar3[1] = POPCOUNT(puVar10[-0xf]);
          auVar3[0] = POPCOUNT(puVar10[-0x10]);
          auVar3[2] = POPCOUNT(puVar10[-0xe]);
          auVar3[3] = POPCOUNT(puVar10[-0xd]);
          auVar3[4] = POPCOUNT(puVar10[-0xc]);
          auVar3[5] = POPCOUNT(puVar10[-0xb]);
          auVar3[6] = POPCOUNT(puVar10[-10]);
          auVar3[7] = POPCOUNT(puVar10[-9]);
          auVar3[8] = POPCOUNT(puVar10[-8]);
          auVar3[9] = POPCOUNT(puVar10[-7]);
          auVar3[10] = POPCOUNT(puVar10[-6]);
          auVar3[0xb] = POPCOUNT(puVar10[-5]);
          auVar3[0xc] = POPCOUNT(puVar10[-4]);
          auVar3[0xd] = POPCOUNT(puVar10[-3]);
          auVar3[0xe] = POPCOUNT(puVar10[-2]);
          auVar3[0xf] = POPCOUNT(puVar10[-1]);
          auVar27 = NEON_udot(auVar28,auVar3,1);
          auVar29[8] = 1;
          auVar29._0_8_ = 0x101010101010101;
          auVar29[9] = 1;
          auVar29[10] = 1;
          auVar29[0xb] = 1;
          auVar29[0xc] = 1;
          auVar29[0xd] = 1;
          auVar29[0xe] = 1;
          auVar29[0xf] = 1;
          auVar4[1] = POPCOUNT(puVar10[1]);
          auVar4[0] = POPCOUNT(*puVar10);
          auVar4[2] = POPCOUNT(puVar10[2]);
          auVar4[3] = POPCOUNT(puVar10[3]);
          auVar4[4] = POPCOUNT(puVar10[4]);
          auVar4[5] = POPCOUNT(puVar10[5]);
          auVar4[6] = POPCOUNT(puVar10[6]);
          auVar4[7] = POPCOUNT(puVar10[7]);
          auVar4[8] = POPCOUNT(puVar10[8]);
          auVar4[9] = POPCOUNT(puVar10[9]);
          auVar4[10] = POPCOUNT(puVar10[10]);
          auVar4[0xb] = POPCOUNT(puVar10[0xb]);
          auVar4[0xc] = POPCOUNT(puVar10[0xc]);
          auVar4[0xd] = POPCOUNT(puVar10[0xd]);
          auVar4[0xe] = POPCOUNT(puVar10[0xe]);
          auVar4[0xf] = POPCOUNT(puVar10[0xf]);
          auVar28 = NEON_udot(auVar29,auVar4,1);
          auVar2[8] = 1;
          auVar2._0_8_ = 0x101010101010101;
          auVar2[9] = 1;
          auVar2[10] = 1;
          auVar2[0xb] = 1;
          auVar2[0xc] = 1;
          auVar2[0xd] = 1;
          auVar2[0xe] = 1;
          auVar2[0xf] = 1;
          auVar5[1] = POPCOUNT(puVar10[0x11]);
          auVar5[0] = POPCOUNT(puVar10[0x10]);
          auVar5[2] = POPCOUNT(puVar10[0x12]);
          auVar5[3] = POPCOUNT(puVar10[0x13]);
          auVar5[4] = POPCOUNT(puVar10[0x14]);
          auVar5[5] = POPCOUNT(puVar10[0x15]);
          auVar5[6] = POPCOUNT(puVar10[0x16]);
          auVar5[7] = POPCOUNT(puVar10[0x17]);
          auVar5[8] = POPCOUNT(puVar10[0x18]);
          auVar5[9] = POPCOUNT(puVar10[0x19]);
          auVar5[10] = POPCOUNT(puVar10[0x1a]);
          auVar5[0xb] = POPCOUNT(puVar10[0x1b]);
          auVar5[0xc] = POPCOUNT(puVar10[0x1c]);
          auVar5[0xd] = POPCOUNT(puVar10[0x1d]);
          auVar5[0xe] = POPCOUNT(puVar10[0x1e]);
          auVar5[0xf] = POPCOUNT(puVar10[0x1f]);
          auVar29 = NEON_udot(auVar2,auVar5,1);
          uVar20 = uVar20 + (ulong)auVar30._0_4_ + (ulong)auVar30._4_4_;
          lVar21 = lVar21 + (ulong)auVar30._8_4_ + (ulong)auVar30._12_4_;
          lVar17 = lVar17 + (ulong)auVar27._0_4_ + (ulong)auVar27._4_4_;
          lVar19 = lVar19 + (ulong)auVar27._8_4_ + (ulong)auVar27._12_4_;
          lVar23 = lVar23 + (ulong)auVar28._0_4_ + (ulong)auVar28._4_4_;
          lVar24 = lVar24 + (ulong)auVar28._8_4_ + (ulong)auVar28._12_4_;
          lVar25 = lVar25 + (ulong)auVar29._0_4_ + (ulong)auVar29._4_4_;
          lVar26 = lVar26 + (ulong)auVar29._8_4_ + (ulong)auVar29._12_4_;
          uVar15 = uVar15 - 8;
          puVar10 = puVar10 + 0x40;
        } while (uVar15 != 0);
        uVar20 = lVar25 + lVar23 + lVar17 + uVar20 + lVar26 + lVar24 + lVar19 + lVar21;
        if (uVar1 == uVar14) goto LAB_100691420;
      }
      lVar17 = uVar11 - uVar9;
      puVar12 = (undefined8 *)(param_3 + uVar9 * 8);
      do {
        uVar18 = *puVar12;
        uVar20 = (byte)(POPCOUNT((char)uVar18) + POPCOUNT((char)((ulong)uVar18 >> 8)) +
                        POPCOUNT((char)((ulong)uVar18 >> 0x10)) +
                        POPCOUNT((char)((ulong)uVar18 >> 0x18)) +
                        POPCOUNT((char)((ulong)uVar18 >> 0x20)) +
                        POPCOUNT((char)((ulong)uVar18 >> 0x28)) +
                        POPCOUNT((char)((ulong)uVar18 >> 0x30)) +
                       POPCOUNT((char)((ulong)uVar18 >> 0x38))) + uVar20;
        lVar17 = lVar17 + -1;
        puVar12 = puVar12 + 1;
      } while (lVar17 != 0);
    }
LAB_100691420:
    if (uVar13 < param_4) {
      uVar9 = *(ulong *)(param_3 + uVar13 * 8) & (-1L << (uVar16 & 0x3f) ^ 0xffffffffffffffffU);
      uVar20 = (byte)(POPCOUNT((char)uVar9) + POPCOUNT((char)(uVar9 >> 8)) +
                      POPCOUNT((char)(uVar9 >> 0x10)) + POPCOUNT((char)(uVar9 >> 0x18)) +
                      POPCOUNT((char)(uVar9 >> 0x20)) + POPCOUNT((char)(uVar9 >> 0x28)) +
                      POPCOUNT((char)(uVar9 >> 0x30)) + POPCOUNT((char)(uVar9 >> 0x38))) + uVar20;
      if ((param_2 < param_1) && (bVar8 = SBORROW8(0,uVar20), uVar20 = -uVar20, bVar8)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100691460);
        (*pcVar7)();
      }
    }
    else if ((param_2 < param_1) && (bVar8 = SBORROW8(0,uVar20), uVar20 = -uVar20, bVar8)) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x100691490);
      (*pcVar7)();
    }
    return uVar20;
  }
  return 0;
}



/* Address: 0x100691490 | FUN_100691490 */

long * FUN_100691490(long *param_1,long param_2,long param_3,ulong param_4)

{
  code *pcVar1;
  long *plVar2;
  uint uVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long local_48;
  
  plVar5 = (long *)(param_4 * 0x40);
  if ((param_4 & 0x3ffffffffffffff) >> 0x39 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100691654);
    (*pcVar1)();
  }
  if (plVar5 < param_1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100691658);
    (*pcVar1)();
  }
  if (param_1 != plVar5) {
    if ((long)param_4 <= (long)((ulong)param_1 >> 6)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10069165c);
      (*pcVar1)();
    }
    if ((*(ulong *)(param_3 + ((ulong)param_1 >> 6) * 8) >> ((ulong)param_1 & 0x3f) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100691660);
      (*pcVar1)();
    }
  }
  if (param_2 == 0) {
    return param_1;
  }
  local_48 = -param_2;
  if (-1 < param_2) {
    local_48 = param_2;
  }
  if (0 < param_2) {
    uVar9 = (ulong)param_1 >> 6;
    if ((long)param_4 <= (long)uVar9) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100691664);
      (*pcVar1)();
    }
    plVar2 = &local_48;
    uVar3 = (uint)*(undefined8 *)(param_3 + uVar9 * 8) & (uint)(-1L << ((ulong)param_1 & 0x3f));
    FUN_1006902f8(plVar2);
    if ((uVar3 & 0xff) != 1) {
      return (long *)((long)plVar2 + ((ulong)param_1 & 0xffffffffffffffc0));
    }
    lVar8 = ~uVar9 + param_4;
    lVar7 = uVar9 * -0x40;
    puVar4 = (undefined8 *)(param_3 + uVar9 * 8);
    do {
      puVar4 = puVar4 + 1;
      if (lVar8 == 0) {
        if (local_48 == 0) {
          return plVar5;
        }
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10069162c);
        (*pcVar1)();
      }
      uVar3 = (uint)*puVar4;
      plVar2 = &local_48;
      FUN_1006902f8(plVar2);
      lVar8 = lVar8 + -1;
      lVar7 = lVar7 + -0x40;
    } while ((uVar3 & 0xff) == 1);
    if (-1 < -lVar7) {
      return (long *)((long)plVar2 - lVar7);
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100691668);
    (*pcVar1)();
  }
  local_48 = local_48 + -1;
  uVar9 = (ulong)param_1 >> 6;
  if ((param_1 < (long *)0x40) || (((ulong)param_1 & 0x3f) != 0)) {
    uVar6 = uVar9;
    if ((long)param_4 <= (long)uVar9) goto LAB_1006915e8;
    uVar3 = ~(uint)(-1L << ((ulong)param_1 & 0x3f));
  }
  else {
    uVar6 = uVar9 - 1;
    if ((long)param_4 < (long)uVar9) goto LAB_1006915e8;
    uVar3 = 0xffffffff;
  }
  plVar5 = &local_48;
  uVar3 = (uint)*(undefined8 *)(param_3 + uVar6 * 8) & uVar3;
  FUN_100690350(plVar5);
  if ((uVar3 & 0xff) != 1) {
    return plVar5 + uVar6 * 8;
  }
LAB_1006915e8:
  lVar8 = uVar6 << 6;
  do {
    if ((long)uVar6 < 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100691650);
      (*pcVar1)();
    }
    uVar3 = (uint)*(undefined8 *)(param_3 + -8 + uVar6 * 8);
    plVar5 = &local_48;
    FUN_100690350(plVar5);
    lVar8 = lVar8 + -0x40;
    uVar6 = uVar6 - 1;
  } while ((uVar3 & 0xff) == 1);
  return (long *)((long)plVar5 + lVar8);
}



/* Address: 0x100691668 | FUN_100691668 */

void FUN_100691668(ulong param_1,long param_2,ulong param_3,long param_4,ulong param_5)

{
  code *pcVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  
  uVar3 = param_5 * 0x40;
  if ((param_5 & 0x3ffffffffffffff) >> 0x39 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006918c0);
    (*pcVar1)();
  }
  if (uVar3 < param_1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006918c4);
    (*pcVar1)();
  }
  if (uVar3 < param_3) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006918c8);
    (*pcVar1)();
  }
  if (param_1 != uVar3) {
    if ((long)param_5 <= (long)(param_1 >> 6)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006918cc);
      (*pcVar1)();
    }
    if ((*(ulong *)(param_4 + (param_1 >> 6) * 8) >> (param_1 & 0x3f) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006918d0);
      (*pcVar1)();
    }
  }
  if (param_2 == 0) {
    return;
  }
  if (0 < param_2) {
    if (param_1 <= param_3) {
      uVar3 = param_1 >> 6;
      if ((long)uVar3 < (long)param_5) {
        uVar2 = (uint)*(undefined8 *)(param_4 + uVar3 * 8) & (uint)(-1L << (param_1 & 0x3f));
        FUN_1006902f8();
        if ((uVar2 & 0xff) != 1) {
          return;
        }
      }
      if (SBORROW8(param_5,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1006918d4);
        (*pcVar1)();
      }
      uVar4 = param_3 >> 6;
      if ((long)(param_5 - 1) <= (long)(param_3 >> 6)) {
        uVar4 = param_5 - 1;
      }
      if ((long)uVar4 <= (long)uVar3) {
        uVar4 = uVar3;
      }
      lVar6 = uVar4 - uVar3;
      lVar5 = uVar3 * -0x40;
      puVar7 = (undefined8 *)(param_4 + uVar3 * 8);
      do {
        puVar7 = puVar7 + 1;
        if (lVar6 == 0) {
          return;
        }
        uVar2 = (uint)*puVar7;
        FUN_1006902f8();
        lVar6 = lVar6 + -1;
        lVar5 = lVar5 + -0x40;
      } while ((uVar2 & 0xff) == 1);
      if (-1 < -lVar5) {
        return;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006918d8);
      (*pcVar1)();
    }
LAB_100691788:
    FUN_100691490(param_1,param_2,param_4,param_5);
    return;
  }
  if (param_1 < param_3) goto LAB_100691788;
  uVar3 = param_1 >> 6;
  if ((param_1 < 0x40) || ((param_1 & 0x3f) != 0)) {
    uVar4 = uVar3;
    if ((long)param_5 <= (long)uVar3) goto LAB_10069183c;
    uVar2 = ~(uint)(-1L << (param_1 & 0x3f));
  }
  else {
    uVar4 = uVar3 - 1;
    if ((long)param_5 < (long)uVar3) goto LAB_10069183c;
    uVar2 = 0xffffffff;
  }
  uVar2 = (uint)*(undefined8 *)(param_4 + uVar4 * 8) & uVar2;
  FUN_100690350();
  if ((uVar2 & 0xff) != 1) {
    return;
  }
LAB_10069183c:
  do {
    if ((long)uVar4 <= (long)(param_3 >> 6)) {
      return;
    }
    uVar2 = (uint)*(undefined8 *)(param_4 + -8 + uVar4 * 8);
    FUN_100690350();
    uVar4 = uVar4 - 1;
  } while ((uVar2 & 0xff) == 1);
  return;
}



/* Address: 0x1006918d8 | FUN_1006918d8 */

void FUN_1006918d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *param_2;
  FUN_10069123c(uVar1,*unaff_x20,unaff_x20[1]);
  *param_1 = uVar1;
  return;
}



/* Address: 0x100691904 | FUN_100691904 */

void FUN_100691904(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *param_1;
  FUN_10069123c(uVar1,*unaff_x20,unaff_x20[1]);
  *param_1 = uVar1;
  return;
}



/* Address: 0x100691930 | FUN_100691930 */

void FUN_100691930(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *param_2;
  FUN_100691490(uVar1,param_3,*unaff_x20,unaff_x20[1]);
  *param_1 = uVar1;
  return;
}



/* Address: 0x10069195c | thunk_FUN_100691afc */

void thunk_FUN_100691afc(void)

{
  FUN_100691afc();
  return;
}



/* Address: 0x100691960 | FUN_100691960 */

void FUN_100691960(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *unaff_x20;
  
  FUN_1006912a4(*param_1,*param_2,*unaff_x20,unaff_x20[1]);
  return;
}



/* Address: 0x100691970 | FUN_100691970 */

void FUN_100691970(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  FUN_100691168(uVar1,unaff_x20[1]);
  *param_1 = uVar1;
  return;
}



/* Address: 0x100691998 | FUN_100691998 */

void FUN_100691998(long *param_1)

{
  code *pcVar1;
  long unaff_x20;
  
  if ((*(ulong *)(unaff_x20 + 8) & 0x3ffffffffffffff) >> 0x39 == 0) {
    *param_1 = *(ulong *)(unaff_x20 + 8) << 6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006919b0);
  (*pcVar1)();
}



/* Address: 0x1006919b0 | FUN_1006919b0 */

code * FUN_1006919b0(void)

{
  return FUN_100004520;
}



/* Address: 0x1006919bc | FUN_1006919bc */

void FUN_1006919bc(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  code *pcVar5;
  ulong uVar6;
  ulong *unaff_x20;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = *unaff_x20;
  uVar4 = unaff_x20[1];
  uVar6 = uVar2;
  FUN_100691168(uVar2,uVar4);
  if ((uVar4 & 0x3ffffffffffffff) >> 0x39 != 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100691a28);
    (*pcVar5)();
  }
  if (uVar4 << 6 < uVar6) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100691a2c);
    (*pcVar5)();
  }
  if (uVar1 < uVar6) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100691a30);
    (*pcVar5)();
  }
  if (uVar3 <= uVar4 << 6) {
    *param_1 = uVar1;
    param_1[1] = uVar3;
    param_1[2] = uVar2;
    param_1[3] = uVar4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x100691a34);
  (*pcVar5)();
}



/* Address: 0x100691a34 | FUN_100691a34 */

void FUN_100691a34(undefined8 *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar4 = uVar1;
  FUN_100691168(uVar1,uVar2);
  if ((uVar2 & 0x3ffffffffffffff) >> 0x39 == 0) {
    *param_1 = uVar1;
    param_1[1] = uVar2;
    param_1[2] = uVar4;
    param_1[3] = uVar2 << 6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100691a7c);
  (*pcVar3)();
}



/* Address: 0x100691a7c | FUN_100691a7c */

bool FUN_100691a7c(void)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long *unaff_x20;
  
  lVar3 = unaff_x20[1];
  if (lVar3 == 0) {
    return true;
  }
  plVar2 = (long *)*unaff_x20;
  do {
    lVar3 = lVar3 + -1;
    bVar1 = *plVar2 == 0;
    if (*plVar2 != 0) {
      return bVar1;
    }
    plVar2 = plVar2 + 1;
  } while (lVar3 != 0);
  return bVar1;
}



/* Address: 0x100691ab4 | FUN_100691ab4 */

long FUN_100691ab4(void)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long *unaff_x20;
  undefined8 uVar6;
  ulong uVar7;
  
  if (((undefined8 *)*unaff_x20 != (undefined8 *)0x0) && (unaff_x20[1] != 0)) {
    lVar3 = 0;
    lVar5 = unaff_x20[1] << 3;
    puVar4 = (undefined8 *)*unaff_x20;
    do {
      uVar6 = *puVar4;
      uVar7 = (ulong)(byte)(POPCOUNT((char)uVar6) + POPCOUNT((char)((ulong)uVar6 >> 8)) +
                            POPCOUNT((char)((ulong)uVar6 >> 0x10)) +
                            POPCOUNT((char)((ulong)uVar6 >> 0x18)) +
                            POPCOUNT((char)((ulong)uVar6 >> 0x20)) +
                            POPCOUNT((char)((ulong)uVar6 >> 0x28)) +
                            POPCOUNT((char)((ulong)uVar6 >> 0x30)) +
                           POPCOUNT((char)((ulong)uVar6 >> 0x38)));
      bVar2 = SCARRY8(lVar3,uVar7);
      lVar3 = lVar3 + uVar7;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100691afc);
        (*pcVar1)();
      }
      lVar5 = lVar5 + -8;
      puVar4 = puVar4 + 1;
    } while (lVar5 != 0);
    return lVar3;
  }
  return 0;
}



/* Address: 0x100691afc | FUN_100691afc */

void FUN_100691afc(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *param_2;
  FUN_100691668(uVar1,param_3,*param_4,*unaff_x20,unaff_x20[1]);
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  return;
}



/* Address: 0x100691b30 | FUN_100691b30 */

void FUN_100691b30(ulong *param_1,ulong *param_2)

{
  code *pcVar1;
  
  if (*param_2 <= *param_1 && *param_1 < param_2[1]) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100691b4c);
  (*pcVar1)();
}



/* Address: 0x100691b4c | FUN_100691b4c */

void FUN_100691b4c(ulong *param_1,ulong *param_2)

{
  code *pcVar1;
  
  if (*param_2 <= *param_1 && *param_1 <= param_2[1]) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100691b68);
  (*pcVar1)();
}



/* Address: 0x100691b68 | FUN_100691b68 */

void FUN_100691b68(ulong *param_1,ulong *param_2)

{
  code *pcVar1;
  
  if (*param_2 <= *param_1 && param_1[1] <= param_2[1]) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100691b84);
  (*pcVar1)();
}



/* Address: 0x100691b84 | FUN_100691b84 */

void FUN_100691b84(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *param_2;
  FUN_1006911bc(uVar1,*unaff_x20,unaff_x20[1]);
  *param_1 = uVar1;
  return;
}



/* Address: 0x100691bb0 | FUN_100691bb0 */

void FUN_100691bb0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *param_1;
  FUN_1006911bc(uVar1,*unaff_x20,unaff_x20[1]);
  *param_1 = uVar1;
  return;
}



/* Address: 0x100691bdc | FUN_100691bdc */

undefined * FUN_100691bdc(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 != 0) {
    puVar2 = &DAT_100fda5d0;
    FUN_1000f7830(&DAT_100fda5d0,&DAT_100c6e0a0);
    _swift_allocObject();
    puVar3 = puVar2;
    _malloc_size();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(long *)(puVar2 + 0x10) = param_1;
    *(long *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  return puVar2;
}



/* Address: 0x100691c5c | FUN_100691c5c */

void FUN_100691c5c(ulong param_1,code *param_2)

{
  undefined1 *puVar1;
  code *pcVar2;
  byte bVar3;
  undefined *puVar4;
  size_t sVar5;
  size_t sVar6;
  long lVar7;
  undefined1 *unaff_x21;
  undefined1 auStack_70 [8];
  undefined1 *local_68;
  ulong uStack_60;
  undefined1 *in_stack_ffffffffffffffa8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_100ea82f0;
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100691e3c);
    (*pcVar2)();
  }
  if (param_1 >> 0x3c == 0) {
    sVar6 = param_1 * 8;
    if (((long)sVar6 < 0x401) ||
       ((bVar3 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xc,3,0,0xf,4,0),
        (bVar3 & 1) != 0 &&
        (sVar5 = sVar6, _swift_stdlib_isStackAllocationSafe(sVar6,8), (sVar5 & 1) != 0)))) {
      sVar5 = sVar6;
      if (sVar6 < 2) {
        sVar5 = 1;
      }
      local_68 = auStack_70 + -(sVar5 + 0xf & 0xfffffffffffffff0);
      uStack_60 = param_1;
      if (param_1 != 0) {
        _bzero(local_68,sVar6);
      }
      (*param_2)(&local_68);
      in_stack_ffffffffffffffa8 = unaff_x21;
      puVar1 = local_68;
    }
    else {
      _swift_slowAlloc(sVar6,0xffffffffffffffff);
      FUN_100690d50(&stack0xffffffffffffffa8);
      if (unaff_x21 != (undefined1 *)0x0) {
        in_stack_ffffffffffffffa8 = local_68;
      }
      _swift_slowDealloc(sVar6,0xffffffffffffffff,0xffffffffffffffff);
      puVar1 = local_68;
    }
    local_68 = in_stack_ffffffffffffffa8;
    if ((unaff_x21 != (undefined1 *)0x0) &&
       (bVar3 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0),
       puVar1 = local_68, (bVar3 & 1) != 0)) {
      puVar4 = &DAT_100fda630;
      FUN_1000f7830(&DAT_100fda630,&DAT_100c6e2e0);
      _swift_willThrowTypedImpl
                (&local_68,puVar4,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      puVar1 = local_68;
    }
    local_68 = puVar1;
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar7) {
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100691e40);
  (*pcVar2)();
}



/* Address: 0x100691e6c | thunk_FUN_100691e70 */

void thunk_FUN_100691e70(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fda5d8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6e0b0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6e0b0,&DAT_100ef5610);
  DAT_100fda5d8 = pTVar1;
  return;
}



/* Address: 0x100691e70 | FUN_100691e70 */

void FUN_100691e70(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fda5d8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6e0b0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6e0b0,&DAT_100ef5610);
  DAT_100fda5d8 = pTVar1;
  return;
}



/* Address: 0x100691eb0 | thunk_FUN_100691eb4 */

void thunk_FUN_100691eb4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fda5e0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6e1b8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6e1b8,&DAT_100ef5590);
  DAT_100fda5e0 = pTVar1;
  return;
}



/* Address: 0x100691eb4 | FUN_100691eb4 */

void FUN_100691eb4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fda5e0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6e1b8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6e1b8,&DAT_100ef5590);
  DAT_100fda5e0 = pTVar1;
  return;
}



/* Address: 0x100691ef4 | FUN_100691ef4 */

void FUN_100691ef4(void)

{
  FUN_100691f9c(&DAT_100fda5e8,&DAT_100fda5f0,&DAT_100c6e148,
                PTR__Swift__Swift__DefaultIndices<undefined>_>Swift__BidirectionalCollection_100eabea8
               );
  return;
}



/* Address: 0x100691f28 | FUN_100691f28 */

void FUN_100691f28(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fda5f8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6e158;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6e158,&DAT_100ef5590);
  DAT_100fda5f8 = pTVar1;
  return;
}



/* Address: 0x100691f68 | FUN_100691f68 */

void FUN_100691f68(void)

{
  FUN_100691f9c(&DAT_100fda600,&DAT_100fda608,&DAT_100c6e150,
                PTR__Swift__Swift__Slice<undefined>_>Swift__BidirectionalCollection_100eadc98);
  return;
}



/* Address: 0x100691f9c | FUN_100691f9c */

void FUN_100691f9c(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 local_38;
  
  if (*param_1 == 0) {
    FUN_1000f8b08(param_2,param_3);
    uVar1 = param_2;
    FUN_100691f28();
    local_38 = uVar1;
    _swift_getWitnessTable(param_4,param_2,&local_38);
    *param_1 = param_4;
  }
  return;
}



/* Address: 0x100692000 | thunk_FUN_100692004 */

void thunk_FUN_100692004(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fda610 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6e0e0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6e0e0,&DAT_100ef5590);
  DAT_100fda610 = pTVar1;
  return;
}



/* Address: 0x100692004 | FUN_100692004 */

void FUN_100692004(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fda610 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6e0e0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6e0e0,&DAT_100ef5590);
  DAT_100fda610 = pTVar1;
  return;
}



/* Address: 0x100692044 | thunk_FUN_100692048 */

void thunk_FUN_100692048(void)

{
  undefined8 uVar1;
  
  if (DAT_100fda618 != 0) {
    return;
  }
  uVar1 = 0x100c6deac;
  _swift_getWitnessTable(0x100c6deac,&DAT_100ef53c0);
  DAT_100fda618 = uVar1;
  return;
}



/* Address: 0x100692048 | FUN_100692048 */

void FUN_100692048(void)

{
  undefined8 uVar1;
  
  if (DAT_100fda618 != 0) {
    return;
  }
  uVar1 = 0x100c6deac;
  _swift_getWitnessTable(0x100c6deac,&DAT_100ef53c0);
  DAT_100fda618 = uVar1;
  return;
}



/* Address: 0x100692088 | FUN_100692088 */

void FUN_100692088(void)

{
  FUN_100134584(&DAT_100fda620,&DAT_100fda5f0,&DAT_100c6e148,
                PTR_Swift__Swift__DefaultIndices<undefined>_>Swift__Collection_100eabec0);
  return;
}



/* Address: 0x1006920bc | FUN_1006920bc */

void FUN_1006920bc(void)

{
  FUN_100134584(&DAT_100fda628,&DAT_100fda608,&DAT_100c6e150,
                PTR_Swift__Swift__Slice<undefined>_>Swift__Collection_100eadcb8);
  return;
}



/* Address: 0x1006920f0 | FUN_1006920f0 */

void FUN_1006920f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  return;
}



/* Address: 0x1006920fc | FUN_1006920fc */

void FUN_1006920fc(void)

{
  return;
}



/* Address: 0x100692100 | FUN_100692100 */

undefined1  [16] FUN_100692100(void)

{
  return ZEXT816(0x100ef5590);
}



/* Address: 0x100692110 | FUN_100692110 */

void FUN_100692110(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  return;
}



/* Address: 0x10069211c | FUN_10069211c */

undefined1  [16] FUN_10069211c(void)

{
  return ZEXT816(0x100ef5610);
}



/* Address: 0x10069212c | thunk_FUN_100691960 */

void thunk_FUN_100691960(void)

{
  FUN_100691960();
  return;
}



/* Address: 0x100692130 | thunk_FUN_100690f18 */

void thunk_FUN_100690f18(void)

{
  FUN_100690f18();
  return;
}



/* Address: 0x100692134 | FUN_100692134 */

void FUN_100692134(void)

{
  FUN_100690d20();
  return;
}



/* Address: 0x100692148 | thunk_FUN_100691930 */

void thunk_FUN_100691930(void)

{
  FUN_100691930();
  return;
}



/* Address: 0x10069214c | thunk_FUN_100690f5c */

void thunk_FUN_100690f5c(void)

{
  FUN_100690f5c();
  return;
}



/* Address: 0x100692150 | thunk_FUN_100691ab4 */

void thunk_FUN_100691ab4(void)

{
  thunk_FUN_100691ab4();
  return;
}



/* Address: 0x100692154 | thunk_FUN_100691afc */

void thunk_FUN_100691afc(void)

{
  thunk_FUN_100691afc();
  return;
}



/* Address: 0x100692158 | thunk_FUN_100690dc4 */

void thunk_FUN_100690dc4(void)

{
  FUN_100690dc4();
  return;
}



/* Address: 0x10069215c | FUN_10069215c */

long FUN_10069215c(long param_1,long param_2,undefined8 param_3,long param_4)

{
  return param_2 + *(long *)(*(long *)(param_4 + -8) + 0x48) * param_1;
}



/* Address: 0x10069216c | FUN_10069216c */

bool FUN_10069216c(long param_1,long param_2,long param_3,long param_4)

{
  if (param_3 == 0) {
    if (param_1 != 0) {
      return false;
    }
  }
  else if (param_3 != param_1) {
    return false;
  }
  return param_4 == param_2;
}



/* Address: 0x100692198 | FUN_100692198 */

void FUN_100692198(void)

{
  Swift::UnsafeBufferPointer::_init(0);
  return;
}



/* Address: 0x1006921a8 | FUN_1006921a8 */

void FUN_1006921a8(void)

{
  Swift::UnsafeMutableBufferPointer::_init(0);
  return;
}



/* Address: 0x1006921b8 | FUN_1006921b8 */

void FUN_1006921b8(void)

{
  FUN_1006921d0();
  return;
}



/* Address: 0x1006921c4 | FUN_1006921c4 */

void FUN_1006921c4(void)

{
  FUN_1006921d0();
  return;
}



/* Address: 0x1006921d0 | FUN_1006921d0 */

long FUN_1006921d0(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,code *param_6)

{
  code *pcVar1;
  
  if (param_2 != 0) {
    if (param_4 < param_2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10069220c);
      (*pcVar1)();
    }
    (*param_6)(param_1,param_2,param_3,param_5);
  }
  return param_2;
}



/* Address: 0x10069220c | FUN_10069220c */

long FUN_10069220c(UnsafeMutableBufferPointer<undefined> param_1,long param_2,
                  UnsafeMutablePointer param_3,long param_4)

{
  code *pcVar1;
  UnsafeBufferPointer<undefined> from;
  
  from = Swift::UnsafeBufferPointer::init(param_1);
  if (param_2 != 0) {
    if (param_4 < param_2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100692268);
      (*pcVar1)();
    }
    Swift::UnsafeMutablePointer::initialize((UnsafePointer<undefined>)from.unknown,param_2,param_3);
  }
  return param_2;
}



/* Address: 0x100692268 | FUN_100692268 */

undefined8
FUN_100692268(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 auStack_50 [16];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_40 = param_5;
  uStack_38 = param_3;
  local_30 = param_4;
  FUN_10068978c(&local_28,FUN_1006922d4,auStack_50,param_1,param_2,param_5,
                PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___type_metadata_for_Swift_Int_100eac6f8,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  return local_28;
}



/* Address: 0x1006922d4 | FUN_1006922d4 */

void FUN_1006922d4(long *param_1,UnsafePointer<undefined> param_2,long param_3)

{
  code *pcVar1;
  long unaff_x20;
  
  if (param_3 != 0) {
    if (*(long *)(unaff_x20 + 0x20) < param_3) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100692328);
      (*pcVar1)();
    }
    Swift::UnsafeMutablePointer::initialize
              (param_2,param_3,(UnsafeMutablePointer)*(undefined **)(unaff_x20 + 0x18));
  }
  *param_1 = param_3;
  return;
}



/* Address: 0x100692328 | FUN_100692328 */

void FUN_100692328(UnsafePointer<undefined> param_1,long param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  UnsafeMutablePointer UVar6;
  long *unaff_x20;
  undefined8 uVar7;
  long local_48;
  
  UVar6.unknown = (undefined *)*unaff_x20;
  lVar1 = unaff_x20[1];
  uVar7 = *(undefined8 *)(param_3 + 0x10);
  if (param_2 != 0) {
    if (lVar1 < param_2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1006923c4);
      (*pcVar2)();
    }
    Swift::UnsafeMutablePointer::initialize(param_1,param_2,UVar6);
  }
  puVar3 = &DAT_100fda638;
  local_48 = param_2;
  FUN_1000f7830(&DAT_100fda638,&DAT_100c6e2f0);
  puVar4 = puVar3;
  FUN_100692464();
  plVar5 = &local_48;
  FUN_1006923c4(plVar5,UVar6.unknown,lVar1,uVar7,puVar3,puVar4);
  *unaff_x20 = (long)plVar5;
  unaff_x20[1] = (long)UVar6.unknown;
  return;
}


