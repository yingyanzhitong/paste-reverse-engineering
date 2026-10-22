/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1000f7e18 | FUN_1000f7e18 */

void FUN_1000f7e18(uint *param_1,uint *param_2)

{
  uint *unaff_x20;
  
  *param_1 = *unaff_x20 & *param_2;
  return;
}



/* Address: 0x1000f7e2c | FUN_1000f7e2c */

void FUN_1000f7e2c(uint *param_1,uint *param_2)

{
  uint *unaff_x20;
  
  *param_1 = *unaff_x20 ^ *param_2;
  return;
}



/* Address: 0x1000f7e40 | FUN_1000f7e40 */

bool FUN_1000f7e40(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *unaff_x20;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  uVar2 = *unaff_x20;
  *unaff_x20 = uVar2 | uVar1;
  return (uVar1 & (uVar2 ^ 0xffffffff)) != 0;
}



/* Address: 0x1000f7e60 | FUN_1000f7e60 */

void FUN_1000f7e60(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint *unaff_x20;
  
  uVar1 = *unaff_x20 & *param_2;
  if (uVar1 != 0) {
    *unaff_x20 = *unaff_x20 & (*param_2 ^ 0xffffffff);
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = uVar1 == 0;
  return;
}



/* Address: 0x1000f7e90 | FUN_1000f7e90 */

void FUN_1000f7e90(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *unaff_x20;
  
  uVar1 = *param_2;
  uVar2 = *unaff_x20;
  *unaff_x20 = uVar2 | uVar1;
  uVar2 = uVar2 & uVar1;
  *param_1 = uVar2;
  *(bool *)(param_1 + 1) = uVar2 == 0;
  return;
}



/* Address: 0x1000f7eb4 | FUN_1000f7eb4 */

void FUN_1000f7eb4(uint *param_1)

{
  uint *unaff_x20;
  
  *unaff_x20 = *unaff_x20 | *param_1;
  return;
}



/* Address: 0x1000f7ec8 | FUN_1000f7ec8 */

void FUN_1000f7ec8(uint *param_1)

{
  uint *unaff_x20;
  
  *unaff_x20 = *unaff_x20 & *param_1;
  return;
}



/* Address: 0x1000f7edc | FUN_1000f7edc */

void FUN_1000f7edc(uint *param_1)

{
  uint *unaff_x20;
  
  *unaff_x20 = *unaff_x20 ^ *param_1;
  return;
}



/* Address: 0x1000f7ef0 | FUN_1000f7ef0 */

void FUN_1000f7ef0(uint *param_1,uint *param_2)

{
  uint *unaff_x20;
  
  *param_1 = *unaff_x20 & (*param_2 ^ 0xffffffff);
  return;
}



/* Address: 0x1000f7f04 | FUN_1000f7f04 */

bool FUN_1000f7f04(uint *param_1)

{
  uint *unaff_x20;
  
  return (*unaff_x20 & (*param_1 ^ 0xffffffff)) == 0;
}



/* Address: 0x1000f7f18 | FUN_1000f7f18 */

bool FUN_1000f7f18(uint *param_1)

{
  uint *unaff_x20;
  
  return (*unaff_x20 & *param_1) == 0;
}



/* Address: 0x1000f7f2c | FUN_1000f7f2c */

bool FUN_1000f7f2c(uint *param_1)

{
  uint *unaff_x20;
  
  return (*param_1 & (*unaff_x20 ^ 0xffffffff)) == 0;
}



/* Address: 0x1000f7f40 | FUN_1000f7f40 */

bool FUN_1000f7f40(void)

{
  int *unaff_x20;
  
  return *unaff_x20 == 0;
}



/* Address: 0x1000f7f50 | FUN_1000f7f50 */

void FUN_1000f7f50(uint *param_1)

{
  uint *unaff_x20;
  
  *unaff_x20 = *unaff_x20 & (*param_1 ^ 0xffffffff);
  return;
}



/* Address: 0x1000f7f64 | FUN_1000f7f64 */

void FUN_1000f7f64(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Address: 0x1000f7f74 | FUN_1000f7f74 */

void FUN_1000f7f74(undefined4 *param_1)

{
  undefined4 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Address: 0x1000f7f80 | FUN_1000f7f80 */

void FUN_1000f7f80(uint *param_1,long param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  uint *puVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  uint uVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  undefined1 auVar29 [16];
  byte bVar45;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  undefined8 uVar46;
  byte bVar53;
  byte bVar54;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  undefined8 uVar55;
  byte bVar62;
  byte bVar63;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  undefined8 uVar64;
  byte bVar71;
  byte bVar72;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  undefined8 uVar73;
  byte bVar80;
  undefined8 uVar81;
  undefined8 uVar82;
  undefined8 uVar83;
  undefined8 uVar84;
  undefined8 uVar85;
  undefined8 uVar86;
  undefined8 uVar87;
  undefined8 uVar88;
  
  uVar4 = *(ulong *)(param_2 + 0x10);
  if (uVar4 == 0) {
    uVar11 = 0;
    goto LAB_1000f809c;
  }
  if (uVar4 < 4) {
    uVar6 = 0;
    uVar11 = 0;
  }
  else {
    if (uVar4 < 0x10) {
      uVar11 = 0;
      uVar7 = 0;
    }
    else {
      uVar6 = uVar4 & 0x7ffffffffffffff0;
      puVar9 = (undefined8 *)(param_2 + 0x50);
      bVar12 = 0;
      bVar13 = 0;
      bVar14 = 0;
      bVar15 = 0;
      bVar16 = 0;
      bVar17 = 0;
      bVar18 = 0;
      bVar19 = 0;
      bVar20 = 0;
      bVar21 = 0;
      bVar22 = 0;
      bVar23 = 0;
      bVar24 = 0;
      bVar25 = 0;
      bVar26 = 0;
      bVar27 = 0;
      bVar28 = 0;
      bVar30 = 0;
      bVar31 = 0;
      bVar32 = 0;
      bVar33 = 0;
      bVar34 = 0;
      bVar35 = 0;
      bVar36 = 0;
      bVar37 = 0;
      bVar38 = 0;
      bVar39 = 0;
      bVar40 = 0;
      bVar41 = 0;
      bVar42 = 0;
      bVar43 = 0;
      bVar44 = 0;
      uVar46 = 0;
      uVar55 = 0;
      uVar64 = 0;
      uVar73 = 0;
      uVar7 = uVar6;
      do {
        uVar82 = puVar9[-5];
        uVar81 = puVar9[-6];
        uVar84 = puVar9[-3];
        uVar83 = puVar9[-4];
        uVar86 = puVar9[-1];
        uVar85 = puVar9[-2];
        uVar88 = puVar9[1];
        uVar87 = *puVar9;
        bVar12 = (byte)uVar81 | bVar12;
        bVar13 = (byte)((ulong)uVar81 >> 8) | bVar13;
        bVar14 = (byte)((ulong)uVar81 >> 0x10) | bVar14;
        bVar15 = (byte)((ulong)uVar81 >> 0x18) | bVar15;
        bVar16 = (byte)((ulong)uVar81 >> 0x20) | bVar16;
        bVar17 = (byte)((ulong)uVar81 >> 0x28) | bVar17;
        bVar18 = (byte)((ulong)uVar81 >> 0x30) | bVar18;
        bVar19 = (byte)((ulong)uVar81 >> 0x38) | bVar19;
        bVar20 = (byte)uVar82 | bVar20;
        bVar21 = (byte)((ulong)uVar82 >> 8) | bVar21;
        bVar22 = (byte)((ulong)uVar82 >> 0x10) | bVar22;
        bVar23 = (byte)((ulong)uVar82 >> 0x18) | bVar23;
        bVar24 = (byte)((ulong)uVar82 >> 0x20) | bVar24;
        bVar25 = (byte)((ulong)uVar82 >> 0x28) | bVar25;
        bVar26 = (byte)((ulong)uVar82 >> 0x30) | bVar26;
        bVar27 = (byte)((ulong)uVar82 >> 0x38) | bVar27;
        bVar28 = (byte)uVar83 | bVar28;
        bVar30 = (byte)((ulong)uVar83 >> 8) | bVar30;
        bVar31 = (byte)((ulong)uVar83 >> 0x10) | bVar31;
        bVar32 = (byte)((ulong)uVar83 >> 0x18) | bVar32;
        bVar33 = (byte)((ulong)uVar83 >> 0x20) | bVar33;
        bVar34 = (byte)((ulong)uVar83 >> 0x28) | bVar34;
        bVar35 = (byte)((ulong)uVar83 >> 0x30) | bVar35;
        bVar36 = (byte)((ulong)uVar83 >> 0x38) | bVar36;
        bVar37 = (byte)uVar84 | bVar37;
        bVar38 = (byte)((ulong)uVar84 >> 8) | bVar38;
        bVar39 = (byte)((ulong)uVar84 >> 0x10) | bVar39;
        bVar40 = (byte)((ulong)uVar84 >> 0x18) | bVar40;
        bVar41 = (byte)((ulong)uVar84 >> 0x20) | bVar41;
        bVar42 = (byte)((ulong)uVar84 >> 0x28) | bVar42;
        bVar43 = (byte)((ulong)uVar84 >> 0x30) | bVar43;
        bVar44 = (byte)((ulong)uVar84 >> 0x38) | bVar44;
        bVar45 = (byte)uVar85 | (byte)uVar46;
        bVar47 = (byte)((ulong)uVar85 >> 8) | (byte)((ulong)uVar46 >> 8);
        bVar48 = (byte)((ulong)uVar85 >> 0x10) | (byte)((ulong)uVar46 >> 0x10);
        bVar49 = (byte)((ulong)uVar85 >> 0x18) | (byte)((ulong)uVar46 >> 0x18);
        bVar50 = (byte)((ulong)uVar85 >> 0x20) | (byte)((ulong)uVar46 >> 0x20);
        bVar51 = (byte)((ulong)uVar85 >> 0x28) | (byte)((ulong)uVar46 >> 0x28);
        bVar52 = (byte)((ulong)uVar85 >> 0x30) | (byte)((ulong)uVar46 >> 0x30);
        bVar53 = (byte)((ulong)uVar85 >> 0x38) | (byte)((ulong)uVar46 >> 0x38);
        uVar46 = CONCAT17(bVar53,CONCAT16(bVar52,CONCAT15(bVar51,CONCAT14(bVar50,CONCAT13(bVar49,
                                                  CONCAT12(bVar48,CONCAT11(bVar47,bVar45)))))));
        bVar54 = (byte)uVar86 | (byte)uVar55;
        bVar56 = (byte)((ulong)uVar86 >> 8) | (byte)((ulong)uVar55 >> 8);
        bVar57 = (byte)((ulong)uVar86 >> 0x10) | (byte)((ulong)uVar55 >> 0x10);
        bVar58 = (byte)((ulong)uVar86 >> 0x18) | (byte)((ulong)uVar55 >> 0x18);
        bVar59 = (byte)((ulong)uVar86 >> 0x20) | (byte)((ulong)uVar55 >> 0x20);
        bVar60 = (byte)((ulong)uVar86 >> 0x28) | (byte)((ulong)uVar55 >> 0x28);
        bVar61 = (byte)((ulong)uVar86 >> 0x30) | (byte)((ulong)uVar55 >> 0x30);
        bVar62 = (byte)((ulong)uVar86 >> 0x38) | (byte)((ulong)uVar55 >> 0x38);
        uVar55 = CONCAT17(bVar62,CONCAT16(bVar61,CONCAT15(bVar60,CONCAT14(bVar59,CONCAT13(bVar58,
                                                  CONCAT12(bVar57,CONCAT11(bVar56,bVar54)))))));
        bVar63 = (byte)uVar87 | (byte)uVar64;
        bVar65 = (byte)((ulong)uVar87 >> 8) | (byte)((ulong)uVar64 >> 8);
        bVar66 = (byte)((ulong)uVar87 >> 0x10) | (byte)((ulong)uVar64 >> 0x10);
        bVar67 = (byte)((ulong)uVar87 >> 0x18) | (byte)((ulong)uVar64 >> 0x18);
        bVar68 = (byte)((ulong)uVar87 >> 0x20) | (byte)((ulong)uVar64 >> 0x20);
        bVar69 = (byte)((ulong)uVar87 >> 0x28) | (byte)((ulong)uVar64 >> 0x28);
        bVar70 = (byte)((ulong)uVar87 >> 0x30) | (byte)((ulong)uVar64 >> 0x30);
        bVar71 = (byte)((ulong)uVar87 >> 0x38) | (byte)((ulong)uVar64 >> 0x38);
        uVar64 = CONCAT17(bVar71,CONCAT16(bVar70,CONCAT15(bVar69,CONCAT14(bVar68,CONCAT13(bVar67,
                                                  CONCAT12(bVar66,CONCAT11(bVar65,bVar63)))))));
        bVar72 = (byte)uVar88 | (byte)uVar73;
        bVar74 = (byte)((ulong)uVar88 >> 8) | (byte)((ulong)uVar73 >> 8);
        bVar75 = (byte)((ulong)uVar88 >> 0x10) | (byte)((ulong)uVar73 >> 0x10);
        bVar76 = (byte)((ulong)uVar88 >> 0x18) | (byte)((ulong)uVar73 >> 0x18);
        bVar77 = (byte)((ulong)uVar88 >> 0x20) | (byte)((ulong)uVar73 >> 0x20);
        bVar78 = (byte)((ulong)uVar88 >> 0x28) | (byte)((ulong)uVar73 >> 0x28);
        bVar79 = (byte)((ulong)uVar88 >> 0x30) | (byte)((ulong)uVar73 >> 0x30);
        bVar80 = (byte)((ulong)uVar88 >> 0x38) | (byte)((ulong)uVar73 >> 0x38);
        uVar73 = CONCAT17(bVar80,CONCAT16(bVar79,CONCAT15(bVar78,CONCAT14(bVar77,CONCAT13(bVar76,
                                                  CONCAT12(bVar75,CONCAT11(bVar74,bVar72)))))));
        puVar9 = puVar9 + 8;
        uVar7 = uVar7 - 0x10;
      } while (uVar7 != 0);
      bVar63 = bVar63 | bVar45 | bVar28 | bVar12;
      bVar65 = bVar65 | bVar47 | bVar30 | bVar13;
      bVar66 = bVar66 | bVar48 | bVar31 | bVar14;
      bVar67 = bVar67 | bVar49 | bVar32 | bVar15;
      bVar68 = bVar68 | bVar50 | bVar33 | bVar16;
      bVar69 = bVar69 | bVar51 | bVar34 | bVar17;
      bVar70 = bVar70 | bVar52 | bVar35 | bVar18;
      bVar71 = bVar71 | bVar53 | bVar36 | bVar19;
      bVar72 = bVar72 | bVar54 | bVar37 | bVar20;
      bVar74 = bVar74 | bVar56 | bVar38 | bVar21;
      bVar75 = bVar75 | bVar57 | bVar39 | bVar22;
      bVar76 = bVar76 | bVar58 | bVar40 | bVar23;
      bVar77 = bVar77 | bVar59 | bVar41 | bVar24;
      bVar78 = bVar78 | bVar60 | bVar42 | bVar25;
      bVar79 = bVar79 | bVar61 | bVar43 | bVar26;
      bVar80 = bVar80 | bVar62 | bVar44 | bVar27;
      auVar29[1] = bVar65;
      auVar29[0] = bVar63;
      auVar29[2] = bVar66;
      auVar29[3] = bVar67;
      auVar29[4] = bVar68;
      auVar29[5] = bVar69;
      auVar29[6] = bVar70;
      auVar29[7] = bVar71;
      auVar29[8] = bVar72;
      auVar29[9] = bVar74;
      auVar29[10] = bVar75;
      auVar29[0xb] = bVar76;
      auVar29[0xc] = bVar77;
      auVar29[0xd] = bVar78;
      auVar29[0xe] = bVar79;
      auVar29[0xf] = bVar80;
      auVar3[1] = bVar65;
      auVar3[0] = bVar63;
      auVar3[2] = bVar66;
      auVar3[3] = bVar67;
      auVar3[4] = bVar68;
      auVar3[5] = bVar69;
      auVar3[6] = bVar70;
      auVar3[7] = bVar71;
      auVar3[8] = bVar72;
      auVar3[9] = bVar74;
      auVar3[10] = bVar75;
      auVar3[0xb] = bVar76;
      auVar3[0xc] = bVar77;
      auVar3[0xd] = bVar78;
      auVar3[0xe] = bVar79;
      auVar3[0xf] = bVar80;
      auVar29 = NEON_ext(auVar29,auVar3,8,1);
      uVar11 = CONCAT13(bVar67 | auVar29[3],
                        CONCAT12(bVar66 | auVar29[2],
                                 CONCAT11(bVar65 | auVar29[1],bVar63 | auVar29[0])));
      uVar11 = uVar11 | (uint)(CONCAT17(bVar71 | auVar29[7],
                                        CONCAT16(bVar70 | auVar29[6],
                                                 CONCAT15(bVar69 | auVar29[5],
                                                          CONCAT14(bVar68 | auVar29[4],uVar11)))) >>
                              0x20);
      if (uVar4 == uVar6) goto LAB_1000f809c;
      uVar7 = uVar6;
      if ((uVar4 & 0xc) == 0) goto LAB_1000f8080;
    }
    uVar6 = uVar4 & 0x7ffffffffffffffc;
    bVar16 = 0;
    bVar17 = 0;
    bVar18 = 0;
    bVar19 = 0;
    bVar20 = 0;
    bVar21 = 0;
    bVar22 = 0;
    bVar23 = 0;
    bVar24 = 0;
    bVar25 = 0;
    bVar26 = 0;
    bVar27 = 0;
    bVar12 = (byte)uVar11;
    bVar13 = (byte)(uVar11 >> 8);
    bVar14 = (byte)(uVar11 >> 0x10);
    bVar15 = (byte)(uVar11 >> 0x18);
    lVar5 = uVar7 - uVar6;
    pbVar10 = (byte *)(param_2 + uVar7 * 4 + 0x20);
    do {
      bVar12 = *pbVar10 | bVar12;
      bVar13 = pbVar10[1] | bVar13;
      bVar14 = pbVar10[2] | bVar14;
      bVar15 = pbVar10[3] | bVar15;
      bVar16 = pbVar10[4] | bVar16;
      bVar17 = pbVar10[5] | bVar17;
      bVar18 = pbVar10[6] | bVar18;
      bVar19 = pbVar10[7] | bVar19;
      bVar20 = pbVar10[8] | bVar20;
      bVar21 = pbVar10[9] | bVar21;
      bVar22 = pbVar10[10] | bVar22;
      bVar23 = pbVar10[0xb] | bVar23;
      bVar24 = pbVar10[0xc] | bVar24;
      bVar25 = pbVar10[0xd] | bVar25;
      bVar26 = pbVar10[0xe] | bVar26;
      bVar27 = pbVar10[0xf] | bVar27;
      lVar5 = lVar5 + 4;
      pbVar10 = pbVar10 + 0x10;
    } while (lVar5 != 0);
    auVar1[1] = bVar13;
    auVar1[0] = bVar12;
    auVar1[2] = bVar14;
    auVar1[3] = bVar15;
    auVar1[4] = bVar16;
    auVar1[5] = bVar17;
    auVar1[6] = bVar18;
    auVar1[7] = bVar19;
    auVar1[8] = bVar20;
    auVar1[9] = bVar21;
    auVar1[10] = bVar22;
    auVar1[0xb] = bVar23;
    auVar1[0xc] = bVar24;
    auVar1[0xd] = bVar25;
    auVar1[0xe] = bVar26;
    auVar1[0xf] = bVar27;
    auVar2[1] = bVar13;
    auVar2[0] = bVar12;
    auVar2[2] = bVar14;
    auVar2[3] = bVar15;
    auVar2[4] = bVar16;
    auVar2[5] = bVar17;
    auVar2[6] = bVar18;
    auVar2[7] = bVar19;
    auVar2[8] = bVar20;
    auVar2[9] = bVar21;
    auVar2[10] = bVar22;
    auVar2[0xb] = bVar23;
    auVar2[0xc] = bVar24;
    auVar2[0xd] = bVar25;
    auVar2[0xe] = bVar26;
    auVar2[0xf] = bVar27;
    auVar29 = NEON_ext(auVar1,auVar2,8,1);
    uVar11 = CONCAT13(bVar15 | auVar29[3],
                      CONCAT12(bVar14 | auVar29[2],CONCAT11(bVar13 | auVar29[1],bVar12 | auVar29[0])
                              ));
    uVar11 = uVar11 | (uint)(CONCAT17(bVar19 | auVar29[7],
                                      CONCAT16(bVar18 | auVar29[6],
                                               CONCAT15(bVar17 | auVar29[5],
                                                        CONCAT14(bVar16 | auVar29[4],uVar11)))) >>
                            0x20);
    if (uVar4 == uVar6) goto LAB_1000f809c;
  }
LAB_1000f8080:
  lVar5 = uVar4 - uVar6;
  puVar8 = (uint *)(param_2 + uVar6 * 4 + 0x20);
  do {
    uVar11 = *puVar8 | uVar11;
    lVar5 = lVar5 + -1;
    puVar8 = puVar8 + 1;
  } while (lVar5 != 0);
LAB_1000f809c:
  _swift_bridgeObjectRelease();
  *param_1 = uVar11;
  return;
}



/* Address: 0x1000f80b0 | FUN_1000f80b0 */

void FUN_1000f80b0(void)

{
  FUN_100003a00(&DAT_100fae4b8,FUN_1000f8cf4,&TargetProtocolConformanceDescriptor_100c2df68);
  FUN_100003a00(&DAT_100fae4c0,FUN_1000f8cf4,&TargetProtocolConformanceDescriptor_100c2df08);
  (extension_Swift)::Swift::_SwiftNewtypeWrapper::__toCustomAnyHashable();
  return;
}



/* Address: 0x1000f8134 | FUN_1000f8134 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_1000f8134(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  return uVar1;
}



/* Address: 0x1000f8140 | FUN_1000f8140 */

void FUN_1000f8140(undefined8 param_1)

{
  FUN_1000f83a4(param_1,&DAT_100fae430,&DAT_100c2de00);
  return;
}



/* Address: 0x1000f8154 | FUN_1000f8154 */

undefined * FUN_1000f8154(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  _DictionaryStorage *this;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *capacity;
  ulong local_90;
  ulong uStack_88;
  undefined1 auStack_80 [32];
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fae488;
    FUN_1000f7830(&DAT_100fae488,&DAT_100c2de58);
    puVar5 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    param_1 = param_1 + 0x20;
    _swift_retain();
    do {
      FUN_1000f8cac(param_1,&local_90,&DAT_100fae490,&DAT_100c2de60);
      uVar3 = uStack_88;
      uVar2 = local_90;
      uVar6 = local_90;
      uVar7 = uStack_88;
      FUN_100071370();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1000f827c);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      FUN_100011080(auStack_80,*(long *)(puVar5 + 0x38) + uVar6 * 0x20);
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1000f8280);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      param_1 = param_1 + 0x30;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar5);
  }
  return puVar5;
}



/* Address: 0x1000f8280 | FUN_1000f8280 */

undefined * FUN_1000f8280(long param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  code *pcVar7;
  _DictionaryStorage *this;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *capacity;
  undefined8 *puVar11;
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar8 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fae438;
    FUN_1000f7830(&DAT_100fae438,&DAT_100c2de08);
    puVar8 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    _swift_retain();
    puVar11 = (undefined8 *)(param_1 + 0x38);
    do {
      uVar3 = puVar11[-3];
      uVar5 = puVar11[-2];
      uVar4 = puVar11[-1];
      uVar6 = *puVar11;
      _swift_bridgeObjectRetain(uVar5);
      _swift_bridgeObjectRetain(uVar6);
      uVar9 = uVar3;
      uVar10 = uVar5;
      FUN_100071370();
      if ((uVar10 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1000f838c);
        (*pcVar7)();
      }
      uVar10 = uVar9 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar8 + uVar10 + 0x40) = *(ulong *)(puVar8 + uVar10 + 0x40) | 1L << (uVar9 & 0x3f)
      ;
      puVar1 = (ulong *)(*(long *)(puVar8 + 0x30) + uVar9 * 0x10);
      *puVar1 = uVar3;
      puVar1[1] = uVar5;
      puVar2 = (undefined8 *)(*(long *)(puVar8 + 0x38) + uVar9 * 0x10);
      *puVar2 = uVar4;
      puVar2[1] = uVar6;
      if (SCARRY8(*(long *)(puVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1000f8390);
        (*pcVar7)();
      }
      puVar11 = puVar11 + 4;
      *(long *)(puVar8 + 0x10) = *(long *)(puVar8 + 0x10) + 1;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar8);
  }
  return puVar8;
}



/* Address: 0x1000f8390 | FUN_1000f8390 */

void FUN_1000f8390(undefined8 param_1)

{
  FUN_1000f83a4(param_1,&DAT_100fae3f0,&DAT_100c2ddc0);
  return;
}



/* Address: 0x1000f83a4 | FUN_1000f83a4 */

undefined * FUN_1000f83a4(long param_1,_DictionaryStorage *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  UUID UVar6;
  long extraout_x8;
  ulong uVar7;
  ulong uVar8;
  undefined *capacity;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long alStack_80 [4];
  
  puVar3 = &DAT_100fae3e8;
  FUN_1000f7830(&DAT_100fae3e8,&DAT_100c2ddb8);
  lVar10 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar8 = (long)alStack_80 - extraout_x8;
  capacity = *(undefined **)(param_1 + 0x10);
  puVar4 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    FUN_1000f7830(param_2,param_3);
    puVar4 = capacity;
    Swift::_DictionaryStorage::_allocate(param_2,(__int64)capacity);
    alStack_80[1] = (long)*(int *)(puVar3 + 0x30);
    param_1 = param_1 + ((ulong)*(byte *)(lVar10 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar10 + 0x50) ^ 0xffffffffffffffff));
    lVar10 = *(long *)(lVar10 + 0x48);
    _swift_retain();
    do {
      uVar7 = uVar8;
      FUN_1000f8cac(param_1,uVar8,&DAT_100fae3e8,&DAT_100c2ddb8);
      uVar5 = uVar8;
      FUN_10016f998();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000f8538);
        (*pcVar2)();
      }
      uVar9 = uVar5 >> 3 & 0x1ffffffffffffff8;
      uVar7 = *(ulong *)(puVar4 + uVar9 + 0x40);
      lVar11 = *(long *)(puVar4 + 0x30);
      UVar6 = Foundation::UUID::typeMetadataAccessor();
      alStack_80[3] = ((undefined8 *)(uVar8 + alStack_80[1]))[1];
      alStack_80[2] = *(undefined8 *)(uVar8 + alStack_80[1]);
      *(ulong *)(puVar4 + uVar9 + 0x40) = uVar7 | 1L << (uVar5 & 0x3f);
      (**(code **)(*(long *)(UVar6.unknown + -8) + 0x20))
                (lVar11 + *(long *)(*(long *)(UVar6.unknown + -8) + 0x48) * uVar5,uVar8,
                 UVar6.unknown);
      puVar1 = (undefined8 *)(*(long *)(puVar4 + 0x38) + uVar5 * 0x10);
      puVar1[1] = alStack_80[3];
      *puVar1 = alStack_80[2];
      if (SCARRY8(*(long *)(puVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000f853c);
        (*pcVar2)();
      }
      *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + 1;
      param_1 = param_1 + lVar10;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar4);
  }
  return puVar4;
}



/* Address: 0x1000f853c | FUN_1000f853c */

void FUN_1000f853c(undefined8 param_1)

{
  FUN_1000f83a4(param_1,&DAT_100fae3f8,&DAT_100c2ddc8);
  return;
}



/* Address: 0x1000f8550 | FUN_1000f8550 */

void FUN_1000f8550(undefined8 param_1)

{
  FUN_1000f85ac(param_1,&DAT_100fae408,&DAT_100c2ddd8,&DAT_100fae410,&DAT_100c2dde0);
  return;
}



/* Address: 0x1000f8574 | FUN_1000f8574 */

void FUN_1000f8574(undefined8 param_1)

{
  FUN_1000f86dc(param_1,&DAT_100fae400,&DAT_100c2ddd0);
  return;
}



/* Address: 0x1000f8588 | FUN_1000f8588 */

void FUN_1000f8588(undefined8 param_1)

{
  FUN_1000f85ac(param_1,&DAT_100fae420,&DAT_100c2ddf0,&DAT_100fae428,&DAT_100c2ddf8);
  return;
}



/* Address: 0x1000f85ac | FUN_1000f85ac */

undefined *
FUN_1000f85ac(long param_1,_DictionaryStorage *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  code *pcVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *capacity;
  ulong local_90;
  ulong uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar6 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    FUN_1000f7830(param_2,param_3);
    puVar6 = capacity;
    Swift::_DictionaryStorage::_allocate(param_2,(__int64)capacity);
    param_1 = param_1 + 0x20;
    _swift_retain();
    do {
      FUN_1000f8cac(param_1,&local_90,param_4,param_5);
      uVar4 = uStack_88;
      uVar3 = local_90;
      uVar7 = local_90;
      uVar8 = uStack_88;
      FUN_100071370();
      if ((uVar8 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1000f86c4);
        (*pcVar5)();
      }
      uVar8 = uVar7 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar6 + uVar8 + 0x40) = *(ulong *)(puVar6 + uVar8 + 0x40) | 1L << (uVar7 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar6 + 0x30) + uVar7 * 0x10);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar2 = (undefined8 *)(*(long *)(puVar6 + 0x38) + uVar7 * 0x20);
      puVar2[1] = uStack_78;
      *puVar2 = local_80;
      puVar2[3] = uStack_68;
      puVar2[2] = uStack_70;
      if (SCARRY8(*(long *)(puVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1000f86c8);
        (*pcVar5)();
      }
      *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
      param_1 = param_1 + 0x30;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar6);
  }
  return puVar6;
}



/* Address: 0x1000f86c8 | FUN_1000f86c8 */

void FUN_1000f86c8(undefined8 param_1)

{
  FUN_1000f86dc(param_1,&DAT_100fae418,&DAT_100c2dde8);
  return;
}



/* Address: 0x1000f86dc | FUN_1000f86dc */

undefined * FUN_1000f86dc(long param_1,_DictionaryStorage *param_2,undefined8 param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *capacity;
  undefined8 uVar8;
  undefined8 *puVar9;
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    FUN_1000f7830(param_2,param_3);
    puVar5 = capacity;
    Swift::_DictionaryStorage::_allocate(param_2,(__int64)capacity);
    _swift_retain();
    puVar9 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar9[-2];
      uVar3 = puVar9[-1];
      uVar8 = *puVar9;
      _swift_bridgeObjectRetain(uVar8);
      _swift_bridgeObjectRetain(uVar3);
      uVar6 = uVar2;
      uVar7 = uVar3;
      FUN_100071370();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1000f87cc);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar8;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1000f87d0);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      capacity = capacity + -1;
      puVar9 = puVar9 + 3;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar5);
  }
  return puVar5;
}



/* Address: 0x1000f87d0 | FUN_1000f87d0 */

void FUN_1000f87d0(undefined8 param_1)

{
  FUN_1000f8930(param_1,&DAT_100fae450,&DAT_100c2de20);
  return;
}



/* Address: 0x1000f87e4 | FUN_1000f87e4 */

undefined * FUN_1000f87e4(long param_1)

{
  code *pcVar1;
  _DictionaryStorage *this;
  undefined *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined *capacity;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 auStack_80 [32];
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar2 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fae440;
    FUN_1000f7830(&DAT_100fae440,&DAT_100c2de10);
    puVar2 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    param_1 = param_1 + 0x20;
    _swift_retain();
    do {
      puVar5 = &local_a8;
      FUN_1000f8cac(param_1,puVar5,&DAT_100fae448,&DAT_100c2de18);
      puVar3 = &local_a8;
      FUN_1000f1290();
      if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1000f8918);
        (*pcVar1)();
      }
      uVar4 = (ulong)puVar3 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar2 + uVar4 + 0x40) =
           *(ulong *)(puVar2 + uVar4 + 0x40) | 1L << ((ulong)puVar3 & 0x3f);
      puVar5 = (undefined8 *)(*(long *)(puVar2 + 0x30) + (long)puVar3 * 0x28);
      puVar5[4] = local_88;
      puVar5[1] = uStack_a0;
      *puVar5 = local_a8;
      puVar5[3] = uStack_90;
      puVar5[2] = local_98;
      FUN_100011080(auStack_80,*(long *)(puVar2 + 0x38) + (long)puVar3 * 0x20);
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1000f891c);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
      param_1 = param_1 + 0x48;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar2);
  }
  return puVar2;
}



/* Address: 0x1000f891c | FUN_1000f891c */

void FUN_1000f891c(undefined8 param_1)

{
  FUN_1000f8930(param_1,&DAT_100fae468,&DAT_100c2de38);
  return;
}



/* Address: 0x1000f8930 | FUN_1000f8930 */

undefined * FUN_1000f8930(long param_1,_DictionaryStorage *param_2,undefined8 param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *capacity;
  undefined8 uVar8;
  undefined8 *puVar9;
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    FUN_1000f7830(param_2,param_3);
    puVar5 = capacity;
    Swift::_DictionaryStorage::_allocate(param_2,(__int64)capacity);
    _swift_retain();
    puVar9 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar9[-2];
      uVar3 = puVar9[-1];
      uVar8 = *puVar9;
      _swift_bridgeObjectRetain(uVar3);
      _swift_bridgeObjectRetain(uVar8);
      uVar6 = uVar2;
      uVar7 = uVar3;
      FUN_100071370();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1000f8a20);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar8;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1000f8a24);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      capacity = capacity + -1;
      puVar9 = puVar9 + 3;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar5);
  }
  return puVar5;
}



/* Address: 0x1000f8a24 | FUN_1000f8a24 */

void FUN_1000f8a24(undefined8 param_1)

{
  FUN_1000f83a4(param_1,&DAT_100fae460,&DAT_100c2de30);
  return;
}



/* Address: 0x1000f8a38 | FUN_1000f8a38 */

void FUN_1000f8a38(undefined8 param_1)

{
  FUN_1000f83a4(param_1,&DAT_100fae470,&DAT_100c2de40);
  return;
}



/* Address: 0x1000f8a4c | FUN_1000f8a4c */

void FUN_1000f8a4c(undefined8 param_1)

{
  FUN_1000f83a4(param_1,&DAT_100fae478,&DAT_100c2de48);
  return;
}



/* Address: 0x1000f8a60 | FUN_1000f8a60 */

void FUN_1000f8a60(undefined8 param_1)

{
  FUN_1000f83a4(param_1,&DAT_100fae480,&DAT_100c2de50);
  return;
}



/* Address: 0x1000f8a74 | FUN_1000f8a74 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_1000f8a74(void)

{
  undefined *puVar1;
  
  if (DAT_100fae2e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___OS_dispatch_queue;
  _swift_getObjCClassMetadata();
  DAT_100fae2e8 = puVar1;
  return;
}



/* Address: 0x1000f8ab8 | FUN_1000f8ab8 */

void FUN_1000f8ab8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fae300 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fae2f8;
  FUN_1000f8b08(&DAT_100fae2f8,&DAT_100c2db90);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530,puVar1);
  DAT_100fae300 = puVar2;
  return;
}



/* Address: 0x1000f8b08 | FUN_1000f8b08 */

ulong FUN_1000f8b08(ulong *param_1,long *param_2)

{
  ulong uVar1;
  
  if (*param_1 != 0) {
    return *param_1 & 0xfffffffffffffffe;
  }
  uVar1 = 0xff;
  _swift_getTypeByMangledNameInContextInMetadataState
            (0xff,(long)param_2 + (long)(int)*param_2,*param_2 >> 0x20,0,0);
  *param_1 = uVar1 | 1;
  return uVar1 & 0xfffffffffffffffe;
}



/* Address: 0x1000f8b5c | FUN_1000f8b5c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1000f8b5c(void)

{
  return ZEXT816(0x100fae350);
}



/* Address: 0x1000f8b7c | FUN_1000f8b7c */

void FUN_1000f8b7c(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fae3a8,&DAT_100eb7208);
  return;
}



/* Address: 0x1000f8b90 | FUN_1000f8b90 */

void FUN_1000f8b90(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fae3b0,&DAT_100eb7230);
  return;
}



/* Address: 0x1000f8ba4 | FUN_1000f8ba4 */

void FUN_1000f8ba4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  return;
}



/* Address: 0x1000f8bb0 | FUN_1000f8bb0 */

void FUN_1000f8bb0(void)

{
  return;
}



/* Address: 0x1000f8bb4 | FUN_1000f8bb4 */

void FUN_1000f8bb4(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fae3b8,&DAT_100eb72b8);
  return;
}



/* Address: 0x1000f8bc8 | FUN_1000f8bc8 */

void FUN_1000f8bc8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  return;
}



/* Address: 0x1000f8bd4 | FUN_1000f8bd4 */

void FUN_1000f8bd4(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fae3c0,&DAT_100eb7340);
  return;
}



/* Address: 0x1000f8be8 | FUN_1000f8be8 */

void FUN_1000f8be8(void)

{
  FUN_100003a00(&DAT_100fae3c8,FUN_1000f8b7c,&TargetProtocolConformanceDescriptor_100c2dc54);
  return;
}



/* Address: 0x1000f8c14 | FUN_1000f8c14 */

void FUN_1000f8c14(void)

{
  FUN_100003a00(&DAT_100fae3d0,FUN_1000f8b7c,&TargetProtocolConformanceDescriptor_100c2dc24);
  return;
}



/* Address: 0x1000f8c40 | FUN_1000f8c40 */

void FUN_1000f8c40(void)

{
  FUN_100003a00(&DAT_100fae3d8,FUN_1000f8b7c,&TargetProtocolConformanceDescriptor_100c2dd44);
  return;
}



/* Address: 0x1000f8c6c | FUN_1000f8c6c */

void FUN_1000f8c6c(void)

{
  FUN_100003a00(&DAT_100fae3e0,FUN_1000f8b7c,&TargetProtocolConformanceDescriptor_100c2dc7c);
  return;
}



/* Address: 0x1000f8c98 | FUN_1000f8c98 */

void FUN_1000f8c98(undefined8 param_1)

{
  FUN_1000f83a4(param_1,&DAT_100fae458,&DAT_100c2de28);
  return;
}



/* Address: 0x1000f8cac | FUN_1000f8cac */

undefined8 FUN_1000f8cac(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  FUN_1000f7830(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Address: 0x1000f8cf4 | FUN_1000f8cf4 */

void FUN_1000f8cf4(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fae498,&DAT_100eb7368);
  return;
}



/* Address: 0x1000f8d08 | FUN_1000f8d08 */

void FUN_1000f8d08(void)

{
  FUN_100003a00(&DAT_100fae4a0,FUN_1000f8cf4,&TargetProtocolConformanceDescriptor_100c2decc);
  return;
}



/* Address: 0x1000f8d34 | FUN_1000f8d34 */

void FUN_1000f8d34(void)

{
  FUN_100003a00(&DAT_100fae4a8,FUN_1000f8cf4,&TargetProtocolConformanceDescriptor_100c2dea0);
  return;
}



/* Address: 0x1000f8d60 | FUN_1000f8d60 */

void FUN_1000f8d60(void)

{
  FUN_100003a00(&DAT_100fae4b0,FUN_1000f8cf4,&TargetProtocolConformanceDescriptor_100c2df3c);
  return;
}



/* Address: 0x1000f8d8c | thunk_FUN_1000f7f2c */

void thunk_FUN_1000f7f2c(void)

{
  FUN_1000f7f2c();
  return;
}



/* Address: 0x1000f8d90 | thunk_FUN_1000dbc40 */

void thunk_FUN_1000dbc40(void)

{
  FUN_1000dbc40();
  return;
}



/* Address: 0x1000f8d94 | FUN_1000f8d94 */

void FUN_1000f8d94(undefined8 param_1)

{
  FUN_1000f9004();
  _swift_allocObject();
  FUN_1000f8dcc();
  DAT_101057188 = param_1;
  return;
}



/* Address: 0x1000f8dcc | FUN_1000f8dcc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000f8dcc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  undefined *puVar5;
  long unaff_x20;
  
  puVar1 = &DAT_100fae308;
  FUN_1000f7830(&DAT_100fae308,&DAT_100c2e060);
  puVar2 = puVar1;
  _swift_allocObject();
  puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1000f8140();
  *(undefined **)(puVar2 + 0x10) = puVar3;
  puVar3 = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar4 = objc_stub::init((ID)puVar3);
  *(undefined8 *)(puVar2 + 0x20) = 0;
  *(undefined8 *)(puVar2 + 0x28) = 0;
  *(ID *)(puVar2 + 0x18) = IVar4;
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  puVar2 = puVar1;
  _swift_allocObject(puVar1,0x30,7);
  puVar3 = puVar5;
  FUN_1000f8140();
  *(undefined **)(puVar2 + 0x10) = puVar3;
  puVar3 = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar4 = objc_stub::init((ID)puVar3);
  *(undefined8 *)(puVar2 + 0x20) = 0;
  *(undefined8 *)(puVar2 + 0x28) = 0;
  *(ID *)(puVar2 + 0x18) = IVar4;
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  _swift_allocObject(puVar1,0x30,7);
  FUN_1000f8140();
  *(undefined **)(puVar1 + 0x10) = puVar5;
  puVar5 = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar4 = objc_stub::init((ID)puVar5);
  *(undefined8 *)(puVar1 + 0x20) = 0;
  *(undefined8 *)(puVar1 + 0x28) = 0;
  *(ID *)(puVar1 + 0x18) = IVar4;
  *(undefined **)(unaff_x20 + 0x20) = puVar1;
  IVar4 = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  NSNotificationCenter::addObserver_selector_name_object_(IVar4);
  NSNotificationCenter::addObserver_selector_name_object_(IVar4);
  NSNotificationCenter::addObserver_selector_name_object_(IVar4);
  return;
}


