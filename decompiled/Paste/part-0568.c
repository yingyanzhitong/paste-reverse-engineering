/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1006545fc | FUN_1006545fc */

void FUN_1006545fc(byte *param_1,byte *param_2)

{
  byte *unaff_x20;
  
  *param_1 = *unaff_x20 | *param_2;
  return;
}



/* Address: 0x100654610 | FUN_100654610 */

void FUN_100654610(byte *param_1,byte *param_2)

{
  byte *unaff_x20;
  
  *param_1 = *unaff_x20 & *param_2;
  return;
}



/* Address: 0x100654624 | FUN_100654624 */

void FUN_100654624(byte *param_1,byte *param_2)

{
  byte *unaff_x20;
  
  *param_1 = *unaff_x20 ^ *param_2;
  return;
}



/* Address: 0x100654638 | FUN_100654638 */

bool FUN_100654638(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte *unaff_x20;
  
  bVar1 = *param_2;
  *param_1 = bVar1;
  bVar2 = *unaff_x20;
  *unaff_x20 = bVar2 | bVar1;
  return (bVar1 & (bVar2 ^ 0xff)) != 0;
}



/* Address: 0x100654658 | FUN_100654658 */

void FUN_100654658(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte *unaff_x20;
  
  bVar1 = *unaff_x20 & *param_2;
  if (bVar1 != 0) {
    *unaff_x20 = *unaff_x20 & (*param_2 ^ 0xff);
  }
  *param_1 = bVar1;
  param_1[1] = bVar1 == 0;
  return;
}



/* Address: 0x100654688 | FUN_100654688 */

void FUN_100654688(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte *unaff_x20;
  
  bVar1 = *param_2;
  bVar2 = *unaff_x20;
  *unaff_x20 = bVar2 | bVar1;
  bVar2 = bVar2 & bVar1;
  *param_1 = bVar2;
  param_1[1] = bVar2 == 0;
  return;
}



/* Address: 0x1006546ac | FUN_1006546ac */

void FUN_1006546ac(byte *param_1)

{
  byte *unaff_x20;
  
  *unaff_x20 = *unaff_x20 | *param_1;
  return;
}



/* Address: 0x1006546c0 | FUN_1006546c0 */

void FUN_1006546c0(byte *param_1)

{
  byte *unaff_x20;
  
  *unaff_x20 = *unaff_x20 & *param_1;
  return;
}



/* Address: 0x1006546d4 | FUN_1006546d4 */

void FUN_1006546d4(byte *param_1)

{
  byte *unaff_x20;
  
  *unaff_x20 = *unaff_x20 ^ *param_1;
  return;
}



/* Address: 0x1006546e8 | FUN_1006546e8 */

void FUN_1006546e8(byte *param_1,byte *param_2)

{
  byte *unaff_x20;
  
  *param_1 = *unaff_x20 & (*param_2 ^ 0xff);
  return;
}



/* Address: 0x1006546fc | FUN_1006546fc */

bool FUN_1006546fc(byte *param_1)

{
  byte *unaff_x20;
  
  return (*unaff_x20 & (*param_1 ^ 0xff)) == 0;
}



/* Address: 0x100654710 | FUN_100654710 */

bool FUN_100654710(byte *param_1)

{
  byte *unaff_x20;
  
  return (*unaff_x20 & *param_1) == 0;
}



/* Address: 0x100654724 | FUN_100654724 */

bool FUN_100654724(byte *param_1)

{
  byte *unaff_x20;
  
  return (*param_1 & (*unaff_x20 ^ 0xff)) == 0;
}



/* Address: 0x100654738 | FUN_100654738 */

bool FUN_100654738(void)

{
  char *unaff_x20;
  
  return *unaff_x20 == '\0';
}



/* Address: 0x100654748 | FUN_100654748 */

void FUN_100654748(byte *param_1)

{
  byte *unaff_x20;
  
  *unaff_x20 = *unaff_x20 & (*param_1 ^ 0xff);
  return;
}



/* Address: 0x10065475c | FUN_10065475c */

void FUN_10065475c(byte *param_1,long param_2)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  ulong uVar7;
  uint uVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
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
  undefined8 uVar26;
  byte bVar28;
  byte bVar29;
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
  undefined1 auVar27 [16];
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  undefined8 uVar52;
  byte bVar59;
  byte bVar60;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  undefined8 uVar61;
  byte bVar68;
  byte bVar69;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  undefined8 uVar70;
  byte bVar77;
  undefined8 uVar78;
  undefined8 uVar79;
  undefined8 uVar80;
  undefined8 uVar81;
  undefined8 uVar82;
  undefined8 uVar83;
  undefined8 uVar84;
  undefined8 uVar85;
  
  uVar2 = *(ulong *)(param_2 + 0x10);
  if (uVar2 == 0) {
    bVar9 = 0;
    goto LAB_100654880;
  }
  if (uVar2 < 8) {
    uVar4 = 0;
    uVar8 = 0;
  }
  else {
    if (uVar2 < 0x40) {
      bVar9 = 0;
      uVar7 = 0;
    }
    else {
      uVar4 = uVar2 & 0x7fffffffffffffc0;
      puVar6 = (undefined8 *)(param_2 + 0x50);
      bVar9 = 0;
      bVar10 = 0;
      bVar11 = 0;
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
      bVar28 = 0;
      bVar29 = 0;
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
      uVar26 = 0;
      uVar52 = 0;
      uVar61 = 0;
      uVar70 = 0;
      uVar7 = uVar4;
      do {
        uVar79 = puVar6[-5];
        uVar78 = puVar6[-6];
        uVar81 = puVar6[-3];
        uVar80 = puVar6[-4];
        uVar83 = puVar6[-1];
        uVar82 = puVar6[-2];
        uVar85 = puVar6[1];
        uVar84 = *puVar6;
        bVar9 = (byte)uVar78 | bVar9;
        bVar10 = (byte)((ulong)uVar78 >> 8) | bVar10;
        bVar11 = (byte)((ulong)uVar78 >> 0x10) | bVar11;
        bVar12 = (byte)((ulong)uVar78 >> 0x18) | bVar12;
        bVar13 = (byte)((ulong)uVar78 >> 0x20) | bVar13;
        bVar14 = (byte)((ulong)uVar78 >> 0x28) | bVar14;
        bVar15 = (byte)((ulong)uVar78 >> 0x30) | bVar15;
        bVar16 = (byte)((ulong)uVar78 >> 0x38) | bVar16;
        bVar17 = (byte)uVar79 | bVar17;
        bVar18 = (byte)((ulong)uVar79 >> 8) | bVar18;
        bVar19 = (byte)((ulong)uVar79 >> 0x10) | bVar19;
        bVar20 = (byte)((ulong)uVar79 >> 0x18) | bVar20;
        bVar21 = (byte)((ulong)uVar79 >> 0x20) | bVar21;
        bVar22 = (byte)((ulong)uVar79 >> 0x28) | bVar22;
        bVar23 = (byte)((ulong)uVar79 >> 0x30) | bVar23;
        bVar24 = (byte)((ulong)uVar79 >> 0x38) | bVar24;
        bVar25 = (byte)uVar80 | bVar25;
        bVar28 = (byte)((ulong)uVar80 >> 8) | bVar28;
        bVar29 = (byte)((ulong)uVar80 >> 0x10) | bVar29;
        bVar30 = (byte)((ulong)uVar80 >> 0x18) | bVar30;
        bVar31 = (byte)((ulong)uVar80 >> 0x20) | bVar31;
        bVar32 = (byte)((ulong)uVar80 >> 0x28) | bVar32;
        bVar33 = (byte)((ulong)uVar80 >> 0x30) | bVar33;
        bVar34 = (byte)((ulong)uVar80 >> 0x38) | bVar34;
        bVar35 = (byte)uVar81 | bVar35;
        bVar36 = (byte)((ulong)uVar81 >> 8) | bVar36;
        bVar37 = (byte)((ulong)uVar81 >> 0x10) | bVar37;
        bVar38 = (byte)((ulong)uVar81 >> 0x18) | bVar38;
        bVar39 = (byte)((ulong)uVar81 >> 0x20) | bVar39;
        bVar40 = (byte)((ulong)uVar81 >> 0x28) | bVar40;
        bVar41 = (byte)((ulong)uVar81 >> 0x30) | bVar41;
        bVar42 = (byte)((ulong)uVar81 >> 0x38) | bVar42;
        bVar43 = (byte)uVar82 | (byte)uVar26;
        bVar44 = (byte)((ulong)uVar82 >> 8) | (byte)((ulong)uVar26 >> 8);
        bVar45 = (byte)((ulong)uVar82 >> 0x10) | (byte)((ulong)uVar26 >> 0x10);
        bVar46 = (byte)((ulong)uVar82 >> 0x18) | (byte)((ulong)uVar26 >> 0x18);
        bVar47 = (byte)((ulong)uVar82 >> 0x20) | (byte)((ulong)uVar26 >> 0x20);
        bVar48 = (byte)((ulong)uVar82 >> 0x28) | (byte)((ulong)uVar26 >> 0x28);
        bVar49 = (byte)((ulong)uVar82 >> 0x30) | (byte)((ulong)uVar26 >> 0x30);
        bVar50 = (byte)((ulong)uVar82 >> 0x38) | (byte)((ulong)uVar26 >> 0x38);
        uVar26 = CONCAT17(bVar50,CONCAT16(bVar49,CONCAT15(bVar48,CONCAT14(bVar47,CONCAT13(bVar46,
                                                  CONCAT12(bVar45,CONCAT11(bVar44,bVar43)))))));
        bVar51 = (byte)uVar83 | (byte)uVar52;
        bVar53 = (byte)((ulong)uVar83 >> 8) | (byte)((ulong)uVar52 >> 8);
        bVar54 = (byte)((ulong)uVar83 >> 0x10) | (byte)((ulong)uVar52 >> 0x10);
        bVar55 = (byte)((ulong)uVar83 >> 0x18) | (byte)((ulong)uVar52 >> 0x18);
        bVar56 = (byte)((ulong)uVar83 >> 0x20) | (byte)((ulong)uVar52 >> 0x20);
        bVar57 = (byte)((ulong)uVar83 >> 0x28) | (byte)((ulong)uVar52 >> 0x28);
        bVar58 = (byte)((ulong)uVar83 >> 0x30) | (byte)((ulong)uVar52 >> 0x30);
        bVar59 = (byte)((ulong)uVar83 >> 0x38) | (byte)((ulong)uVar52 >> 0x38);
        uVar52 = CONCAT17(bVar59,CONCAT16(bVar58,CONCAT15(bVar57,CONCAT14(bVar56,CONCAT13(bVar55,
                                                  CONCAT12(bVar54,CONCAT11(bVar53,bVar51)))))));
        bVar60 = (byte)uVar84 | (byte)uVar61;
        bVar62 = (byte)((ulong)uVar84 >> 8) | (byte)((ulong)uVar61 >> 8);
        bVar63 = (byte)((ulong)uVar84 >> 0x10) | (byte)((ulong)uVar61 >> 0x10);
        bVar64 = (byte)((ulong)uVar84 >> 0x18) | (byte)((ulong)uVar61 >> 0x18);
        bVar65 = (byte)((ulong)uVar84 >> 0x20) | (byte)((ulong)uVar61 >> 0x20);
        bVar66 = (byte)((ulong)uVar84 >> 0x28) | (byte)((ulong)uVar61 >> 0x28);
        bVar67 = (byte)((ulong)uVar84 >> 0x30) | (byte)((ulong)uVar61 >> 0x30);
        bVar68 = (byte)((ulong)uVar84 >> 0x38) | (byte)((ulong)uVar61 >> 0x38);
        uVar61 = CONCAT17(bVar68,CONCAT16(bVar67,CONCAT15(bVar66,CONCAT14(bVar65,CONCAT13(bVar64,
                                                  CONCAT12(bVar63,CONCAT11(bVar62,bVar60)))))));
        bVar69 = (byte)uVar85 | (byte)uVar70;
        bVar71 = (byte)((ulong)uVar85 >> 8) | (byte)((ulong)uVar70 >> 8);
        bVar72 = (byte)((ulong)uVar85 >> 0x10) | (byte)((ulong)uVar70 >> 0x10);
        bVar73 = (byte)((ulong)uVar85 >> 0x18) | (byte)((ulong)uVar70 >> 0x18);
        bVar74 = (byte)((ulong)uVar85 >> 0x20) | (byte)((ulong)uVar70 >> 0x20);
        bVar75 = (byte)((ulong)uVar85 >> 0x28) | (byte)((ulong)uVar70 >> 0x28);
        bVar76 = (byte)((ulong)uVar85 >> 0x30) | (byte)((ulong)uVar70 >> 0x30);
        bVar77 = (byte)((ulong)uVar85 >> 0x38) | (byte)((ulong)uVar70 >> 0x38);
        uVar70 = CONCAT17(bVar77,CONCAT16(bVar76,CONCAT15(bVar75,CONCAT14(bVar74,CONCAT13(bVar73,
                                                  CONCAT12(bVar72,CONCAT11(bVar71,bVar69)))))));
        puVar6 = puVar6 + 8;
        uVar7 = uVar7 - 0x40;
      } while (uVar7 != 0);
      bVar60 = bVar60 | bVar43 | bVar25 | bVar9;
      bVar62 = bVar62 | bVar44 | bVar28 | bVar10;
      bVar63 = bVar63 | bVar45 | bVar29 | bVar11;
      bVar64 = bVar64 | bVar46 | bVar30 | bVar12;
      bVar65 = bVar65 | bVar47 | bVar31 | bVar13;
      bVar66 = bVar66 | bVar48 | bVar32 | bVar14;
      bVar67 = bVar67 | bVar49 | bVar33 | bVar15;
      bVar68 = bVar68 | bVar50 | bVar34 | bVar16;
      bVar69 = bVar69 | bVar51 | bVar35 | bVar17;
      bVar71 = bVar71 | bVar53 | bVar36 | bVar18;
      bVar72 = bVar72 | bVar54 | bVar37 | bVar19;
      bVar73 = bVar73 | bVar55 | bVar38 | bVar20;
      bVar74 = bVar74 | bVar56 | bVar39 | bVar21;
      bVar75 = bVar75 | bVar57 | bVar40 | bVar22;
      bVar76 = bVar76 | bVar58 | bVar41 | bVar23;
      bVar77 = bVar77 | bVar59 | bVar42 | bVar24;
      auVar27[1] = bVar62;
      auVar27[0] = bVar60;
      auVar27[2] = bVar63;
      auVar27[3] = bVar64;
      auVar27[4] = bVar65;
      auVar27[5] = bVar66;
      auVar27[6] = bVar67;
      auVar27[7] = bVar68;
      auVar27[8] = bVar69;
      auVar27[9] = bVar71;
      auVar27[10] = bVar72;
      auVar27[0xb] = bVar73;
      auVar27[0xc] = bVar74;
      auVar27[0xd] = bVar75;
      auVar27[0xe] = bVar76;
      auVar27[0xf] = bVar77;
      auVar1[1] = bVar62;
      auVar1[0] = bVar60;
      auVar1[2] = bVar63;
      auVar1[3] = bVar64;
      auVar1[4] = bVar65;
      auVar1[5] = bVar66;
      auVar1[6] = bVar67;
      auVar1[7] = bVar68;
      auVar1[8] = bVar69;
      auVar1[9] = bVar71;
      auVar1[10] = bVar72;
      auVar1[0xb] = bVar73;
      auVar1[0xc] = bVar74;
      auVar1[0xd] = bVar75;
      auVar1[0xe] = bVar76;
      auVar1[0xf] = bVar77;
      auVar27 = NEON_ext(auVar27,auVar1,8,1);
      uVar7 = CONCAT17(bVar68 | auVar27[7],
                       CONCAT16(bVar67 | auVar27[6],
                                CONCAT15(bVar66 | auVar27[5],
                                         CONCAT14(bVar65 | auVar27[4],
                                                  CONCAT13(bVar64 | auVar27[3],
                                                           CONCAT12(bVar63 | auVar27[2],
                                                                    CONCAT11(bVar62 | auVar27[1],
                                                                             bVar60 | auVar27[0]))))
                                        )));
      uVar7 = uVar7 | uVar7 >> 0x20;
      uVar7 = uVar7 | uVar7 >> 0x10;
      uVar8 = (uint)uVar7 | (uint)(uVar7 >> 8);
      bVar9 = (byte)uVar8;
      if (uVar2 == uVar4) goto LAB_100654880;
      uVar7 = uVar4;
      if ((uVar2 & 0x38) == 0) goto LAB_100654864;
    }
    uVar4 = uVar2 & 0x7ffffffffffffff8;
    bVar10 = 0;
    bVar11 = 0;
    bVar12 = 0;
    bVar13 = 0;
    bVar14 = 0;
    bVar15 = 0;
    bVar16 = 0;
    lVar3 = uVar7 - uVar4;
    puVar6 = (undefined8 *)(uVar7 + param_2 + 0x20);
    do {
      uVar26 = *puVar6;
      bVar9 = (byte)uVar26 | bVar9;
      bVar10 = (byte)((ulong)uVar26 >> 8) | bVar10;
      bVar11 = (byte)((ulong)uVar26 >> 0x10) | bVar11;
      bVar12 = (byte)((ulong)uVar26 >> 0x18) | bVar12;
      bVar13 = (byte)((ulong)uVar26 >> 0x20) | bVar13;
      bVar14 = (byte)((ulong)uVar26 >> 0x28) | bVar14;
      bVar15 = (byte)((ulong)uVar26 >> 0x30) | bVar15;
      bVar16 = (byte)((ulong)uVar26 >> 0x38) | bVar16;
      lVar3 = lVar3 + 8;
      puVar6 = puVar6 + 1;
    } while (lVar3 != 0);
    uVar7 = CONCAT17(bVar16,CONCAT16(bVar15,CONCAT15(bVar14,CONCAT14(bVar13,CONCAT13(bVar12,CONCAT12
                                                  (bVar11,CONCAT11(bVar10,bVar9)))))));
    uVar7 = uVar7 | uVar7 >> 0x20;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar8 = (uint)uVar7 | (uint)(uVar7 >> 8);
    bVar9 = (byte)uVar8;
    if (uVar2 == uVar4) goto LAB_100654880;
  }
LAB_100654864:
  lVar3 = uVar2 - uVar4;
  pbVar5 = (byte *)(uVar4 + param_2 + 0x20);
  do {
    uVar8 = *pbVar5 | uVar8;
    bVar9 = (byte)uVar8;
    lVar3 = lVar3 + -1;
    pbVar5 = pbVar5 + 1;
  } while (lVar3 != 0);
LAB_100654880:
  _swift_bridgeObjectRelease();
  *param_1 = bVar9;
  return;
}



/* Address: 0x100654894 | FUN_100654894 */

void FUN_100654894(undefined2 param_1)

{
  undefined2 *unaff_x20;
  
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x10065489c | FUN_10065489c */

ulong FUN_10065489c(ulong param_1,long param_2)

{
  return param_1 & 0xffff | param_2 << 0x20;
}



/* Address: 0x1006548a8 | FUN_1006548a8 */

void FUN_1006548a8(void)

{
  __uint16 _Var1;
  __uint16 _Var2;
  __uint16 _Var3;
  __uint16 _Var4;
  
  _Var1 = Darwin::get_S_IWUSR();
  _Var2 = Darwin::get_S_IRUSR();
  _Var3 = Darwin::get_S_IRGRP();
  _Var4 = Darwin::get_S_IROTH();
  DAT_101057c20 = _Var2 | _Var1 | _Var3 | _Var4;
  return;
}



/* Address: 0x1006548ec | FUN_1006548ec */

undefined2 * FUN_1006548ec(void)

{
  if (DAT_100fd8748 != -1) {
    _swift_once(&DAT_100fd8748,FUN_1006548a8);
  }
  return &DAT_101057c20;
}



/* Address: 0x10065492c | FUN_10065492c */

undefined2 FUN_10065492c(void)

{
  if (DAT_100fd8748 != -1) {
    _swift_once(&DAT_100fd8748,FUN_1006548a8);
  }
  return DAT_101057c20;
}



/* Address: 0x10065496c | FUN_10065496c */

ulong FUN_10065496c(ulong param_1)

{
  return param_1 & 0xffff | 0x20000000000;
}



/* Address: 0x10065497c | FUN_10065497c */

ulong FUN_10065497c(long param_1,ulong param_2)

{
  return param_2 & 0xffff | param_1 << 0x20;
}



/* Address: 0x100654988 | FUN_100654988 */

void FUN_100654988(void)

{
  FUN_10065499c();
  return;
}



/* Address: 0x10065499c | FUN_10065499c */

void * FUN_10065499c(char *param_1,void *param_2,int param_3,undefined8 param_4)

{
  uint uVar1;
  code *pcVar2;
  ContiguousArray<__int8> CVar3;
  undefined *puVar4;
  ulong *puVar5;
  void *unaff_x20;
  long unaff_x21;
  String SVar6;
  
  uVar1 = param_3 - 1U & 0xff;
  if (uVar1 < 3) {
    SVar6.bridgeObject = param_2;
    SVar6.str = param_1;
    CVar3 = Swift::String::get_utf8CString(SVar6);
    _swift_bridgeObjectRelease(param_2);
    puVar4 = CVar3.unknown + 0x20;
    FUN_100669dc0(puVar4,uVar1 | (uint)((ulong)param_4 >> 0x20) | 0x1000000,param_4);
    _swift_release(CVar3.unknown);
    if (unaff_x21 == 0) {
      _swift_allocObject();
      puVar5 = (ulong *)0x8;
      _swift_slowAlloc(8,0xffffffffffffffff);
      *puVar5 = (long)puVar4 << 0x20 | 0xcafe;
      *(ulong **)((long)unaff_x20 + 0x10) = puVar5;
      param_2 = unaff_x20;
    }
    return param_2;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100654a5c);
  (*pcVar2)();
}



/* Address: 0x100654a5c | FUN_100654a5c */

void FUN_100654a5c(void)

{
  FUN_100654a70();
  return;
}



/* Address: 0x100654a70 | FUN_100654a70 */

undefined * FUN_100654a70(char *param_1,void *param_2)

{
  ContiguousArray<__int8> CVar1;
  undefined *puVar2;
  ulong *puVar3;
  undefined *unaff_x20;
  long unaff_x21;
  String SVar4;
  
  SVar4.bridgeObject = param_2;
  SVar4.str = param_1;
  CVar1 = Swift::String::get_utf8CString(SVar4);
  _swift_bridgeObjectRelease(param_2);
  puVar2 = CVar1.unknown + 0x20;
  FUN_100669dc0(puVar2,0x1000000,0);
  _swift_release(CVar1.unknown);
  if (unaff_x21 == 0) {
    _swift_allocObject();
    puVar3 = (ulong *)0x8;
    _swift_slowAlloc(8,0xffffffffffffffff);
    *puVar3 = (long)puVar2 << 0x20 | 0xcafe;
    *(ulong **)(unaff_x20 + 0x10) = puVar3;
    CVar1.unknown = unaff_x20;
  }
  return CVar1.unknown;
}



/* Address: 0x100654b08 | FUN_100654b08 */

undefined1  [16] FUN_100654b08(undefined8 param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  String SVar2;
  String SVar3;
  String SVar4;
  
  Swift::_StringGuts::grow(0x1d,param_2);
  _swift_bridgeObjectRelease(0xe000000000000000);
  SVar2 = Swift::CustomStringConvertible::get_description();
  SVar3.bridgeObject = param_4;
  SVar3.str = param_3;
  Swift::String::append(SVar2,SVar3);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  SVar2.bridgeObject = &SUB_e200000000000000;
  SVar2.str = (char *)0x7d20;
  SVar4.bridgeObject = param_4;
  SVar4.str = param_3;
  Swift::String::append(SVar2,SVar4);
  auVar1._8_8_ = 0x8000000100daf110;
  auVar1._0_8_ = 0xd000000000000019;
  return auVar1;
}



/* Address: 0x100654bb4 | FUN_100654bb4 */

void FUN_100654bb4(void)

{
  FUN_100654b08();
  return;
}



/* Address: 0x100654bd4 | thunk_FUN_100654bd8 */

void thunk_FUN_100654bd8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd8750 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6ad98;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6ad98,&DAT_100ef0eb8);
  DAT_100fd8750 = pTVar1;
  return;
}



/* Address: 0x100654bd8 | FUN_100654bd8 */

void FUN_100654bd8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd8750 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6ad98;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6ad98,&DAT_100ef0eb8);
  DAT_100fd8750 = pTVar1;
  return;
}



/* Address: 0x100654c18 | thunk_FUN_100654c1c */

void thunk_FUN_100654c1c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd8758 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6add0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6add0,&DAT_100ef0eb8);
  DAT_100fd8758 = pTVar1;
  return;
}



/* Address: 0x100654c1c | FUN_100654c1c */

void FUN_100654c1c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd8758 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6add0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6add0,&DAT_100ef0eb8);
  DAT_100fd8758 = pTVar1;
  return;
}



/* Address: 0x100654c5c | thunk_FUN_100654c60 */

void thunk_FUN_100654c60(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd8760 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6ae98;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6ae98,&DAT_100ef0eb8);
  DAT_100fd8760 = pTVar1;
  return;
}



/* Address: 0x100654c60 | FUN_100654c60 */

void FUN_100654c60(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd8760 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6ae98;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6ae98,&DAT_100ef0eb8);
  DAT_100fd8760 = pTVar1;
  return;
}



/* Address: 0x100654ca0 | thunk_FUN_100654ca4 */

void thunk_FUN_100654ca4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd8768 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6aec0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6aec0,&DAT_100ef0eb8);
  DAT_100fd8768 = pTVar1;
  return;
}



/* Address: 0x100654ca4 | FUN_100654ca4 */

void FUN_100654ca4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd8768 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6aec0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6aec0,&DAT_100ef0eb8);
  DAT_100fd8768 = pTVar1;
  return;
}



/* Address: 0x100654ce4 | FUN_100654ce4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100654ce4(void)

{
  return ZEXT816(0x100fd87b0);
}



/* Address: 0x100654d04 | FUN_100654d04 */

undefined1  [16] FUN_100654d04(void)

{
  return ZEXT816(0x100ef0eb8);
}



/* Address: 0x100654d14 | FUN_100654d14 */

undefined1  [16] FUN_100654d14(void)

{
  return ZEXT816(0x100ef0f38);
}



/* Address: 0x100654d24 | FUN_100654d24 */

undefined1  [16] FUN_100654d24(void)

{
  return ZEXT816(0x100ef0f60);
}



/* Address: 0x100654d34 | FUN_100654d34 */

void FUN_100654d34(void)

{
  FUN_100654988();
  return;
}



/* Address: 0x100654d48 | thunk_FUN_100654724 */

void thunk_FUN_100654724(void)

{
  FUN_100654724();
  return;
}



/* Address: 0x100654d4c | FUN_100654d4c */

void FUN_100654d4c(void)

{
  FUN_100654a5c();
  return;
}



/* Address: 0x100654d60 | thunk_FUN_100654038 */

void thunk_FUN_100654038(void)

{
  thunk_FUN_100654038();
  return;
}



/* Address: 0x100654d64 | FUN_100654d64 */

long FUN_100654d64(undefined8 param_1,long param_2)

{
  code *pcVar1;
  
  if (-1 < param_2) {
    return param_2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100654d74);
  (*pcVar1)();
}



/* Address: 0x100654d74 | FUN_100654d74 */

undefined8 FUN_100654d74(undefined8 param_1,long param_2,long param_3)

{
  code *pcVar1;
  
  if (param_3 < param_2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100654db8);
    (*pcVar1)();
  }
  FUN_1006571c0(param_2);
  if (-1 < param_3) {
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100654dbc);
  (*pcVar1)();
}



/* Address: 0x100654dbc | FUN_100654dbc */

long FUN_100654dbc(undefined8 param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  
  if (-1 < param_2) {
    return param_2 - (param_3 & 0xffffffffffffff);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100654dd0);
  (*pcVar1)();
}



/* Address: 0x100654dd0 | FUN_100654dd0 */

void FUN_100654dd0(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  
  uVar3 = (ulong)*(byte *)(unaff_x20 + 0x16) << 0x30 | (ulong)*(ushort *)(unaff_x20 + 0x14) << 0x20
          | (ulong)*(uint *)(unaff_x20 + 0x10);
  lVar2 = uVar3 + param_1;
  if (!SCARRY8(uVar3,param_1)) {
    FUN_1006571c0();
    *(int *)(unaff_x20 + 0x10) = (int)lVar2;
    *(short *)(unaff_x20 + 0x14) = (short)((ulong)lVar2 >> 0x20);
    *(char *)(unaff_x20 + 0x16) = (char)((ulong)lVar2 >> 0x30);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100654e1c);
  (*pcVar1)();
}



/* Address: 0x100654e1c | FUN_100654e1c */

/* WARNING: Removing unreachable block (ram,0x000100654e7c) */

undefined1  [16] FUN_100654e1c(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x21;
  long unaff_x22;
  undefined1 auVar3 [16];
  
  lVar2 = 0;
  FUN_100654214();
  if (unaff_x21 == 0) {
    unaff_x22 = lVar2;
    FUN_100669e94();
    FUN_100669e94(lVar2,0,0);
    FUN_100654488(param_1,lVar2);
    if (unaff_x22 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100654ed0);
      (*pcVar1)();
    }
    FUN_1006571c0(0);
  }
  else {
    _swift_release(param_1);
  }
  auVar3._8_8_ = unaff_x22;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Address: 0x100654ed0 | FUN_100654ed0 */

void FUN_100654ed0(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6)

{
  FUN_10065508c(param_1,param_2,param_3 & 0xffffffffffffff,param_4,param_5,
                param_6 & 0xffffffffffffff);
  return;
}



/* Address: 0x100654edc | FUN_100654edc */

void FUN_100654edc(undefined8 *param_1,undefined8 *param_2)

{
  FUN_10065508c(*param_1,param_1[1],(ulong)*(uint7 *)(param_1 + 2),*param_2,param_2[1],
                (ulong)*(uint7 *)(param_2 + 2));
  return;
}



/* Address: 0x100654f18 | FUN_100654f18 */

undefined1  [16] FUN_100654f18(undefined8 param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  code *pcVar1;
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
  String SVar14;
  String SVar15;
  
  Swift::_StringGuts::grow(0x38,param_2);
  pvVar3 = (void *)0x8000000100daf230;
  pcVar2 = (char *)0xd000000000000015;
  SVar6.bridgeObject = (void *)0x8000000100daf230;
  SVar6.str = (char *)0xd000000000000015;
  SVar9.bridgeObject = param_4;
  SVar9.str = param_3;
  Swift::String::append(SVar6,SVar9);
  FUN_100654b08();
  SVar4.bridgeObject = pvVar3;
  SVar4.str = pcVar2;
  SVar10.bridgeObject = param_4;
  SVar10.str = param_3;
  Swift::String::append(SVar4,SVar10);
  _swift_bridgeObjectRelease(pvVar3);
  SVar5.bridgeObject = (void *)0xef203a7865646e49;
  SVar5.str = (char *)0x726564616572202c;
  SVar11.bridgeObject = param_4;
  SVar11.str = param_3;
  Swift::String::append(SVar5,SVar11);
  SVar6 = Swift::CustomStringConvertible::get_description();
  SVar12.bridgeObject = param_4;
  SVar12.str = param_3;
  Swift::String::append(SVar6,SVar12);
  _swift_bridgeObjectRelease(SVar6.bridgeObject);
  SVar7.bridgeObject = (void *)0xec000000203a7865;
  SVar7.str = (char *)0x646e49646e65202c;
  SVar13.bridgeObject = param_4;
  SVar13.str = param_3;
  Swift::String::append(SVar7,SVar13);
  if (-1 < (long)param_2.unknown) {
    SVar6 = Swift::CustomStringConvertible::get_description();
    SVar14.bridgeObject = param_4;
    SVar14.str = param_3;
    Swift::String::append(SVar6,SVar14);
    _swift_bridgeObjectRelease(SVar6.bridgeObject);
    SVar8.bridgeObject = &SUB_e200000000000000;
    SVar8.str = (char *)0x7d20;
    SVar15.bridgeObject = param_4;
    SVar15.str = param_3;
    Swift::String::append(SVar8,SVar15);
    return ZEXT816(0xe000000000000000) << 0x40;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100655070);
  (*pcVar1)();
}



/* Address: 0x100655070 | FUN_100655070 */

void FUN_100655070(void)

{
  undefined8 *unaff_x20;
  
  FUN_100654f18(*unaff_x20,unaff_x20[1],(ulong)*(uint7 *)(unaff_x20 + 2));
  return;
}



/* Address: 0x10065508c | FUN_10065508c */

bool FUN_10065508c(long param_1,ulong param_2,ulong param_3,long param_4,ulong param_5,ulong param_6
                  )

{
  code *pcVar1;
  
  if (param_1 != param_4) {
    return false;
  }
  if (((param_6 ^ param_3) & 0xffffffffffffff) != 0) {
    return false;
  }
  if (-1 < (long)(param_5 | param_2)) {
    return param_2 == param_5;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006550c8);
  (*pcVar1)();
}



/* Address: 0x1006550c8 | FUN_1006550c8 */

void FUN_1006550c8(ulong *param_1,long param_2)

{
  *param_1 = (ulong)*(byte *)(param_2 + 0x16) << 0x30 | (ulong)*(ushort *)(param_2 + 0x14) << 0x20 |
             (ulong)*(uint *)(param_2 + 0x10);
  return;
}



/* Address: 0x1006550e8 | FUN_1006550e8 */

void FUN_1006550e8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_1006571c0();
  *(int *)(param_2 + 0x10) = (int)uVar1;
  *(short *)(param_2 + 0x14) = (short)((ulong)uVar1 >> 0x20);
  *(char *)(param_2 + 0x16) = (char)((ulong)uVar1 >> 0x30);
  return;
}



/* Address: 0x100655120 | thunk_FUN_100655124 */

undefined8 * thunk_FUN_100655124(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((long)param_1 + 0x13) = *(undefined4 *)((long)param_2 + 0x13);
  _swift_retain();
  return param_1;
}



/* Address: 0x100655124 | FUN_100655124 */

undefined8 * FUN_100655124(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((long)param_1 + 0x13) = *(undefined4 *)((long)param_2 + 0x13);
  _swift_retain();
  return param_1;
}



/* Address: 0x100655160 | FUN_100655160 */

undefined8 * FUN_100655160(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_retain();
  _swift_release(uVar1);
  param_1[1] = param_2[1];
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined2 *)((long)param_1 + 0x14) = *(undefined2 *)((long)param_2 + 0x14);
  *(undefined1 *)((long)param_1 + 0x16) = *(undefined1 *)((long)param_2 + 0x16);
  return param_1;
}



/* Address: 0x1006551c4 | FUN_1006551c4 */

undefined8 * FUN_1006551c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_release(uVar1);
  param_1[1] = param_2[1];
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined2 *)((long)param_1 + 0x14) = *(undefined2 *)((long)param_2 + 0x14);
  *(undefined1 *)((long)param_1 + 0x16) = *(undefined1 *)((long)param_2 + 0x16);
  return param_1;
}



/* Address: 0x100655218 | FUN_100655218 */

undefined1  [16] FUN_100655218(void)

{
  return ZEXT816(0x100ef1120);
}



/* Address: 0x100655228 | thunk_FUN_100655124 */

void thunk_FUN_100655124(void)

{
  thunk_FUN_100655124();
  return;
}



/* Address: 0x10065522c | FUN_10065522c */

void FUN_10065522c(undefined8 param_1)

{
  FUN_1006556ac(param_1,&DAT_100fd8818);
  return;
}


