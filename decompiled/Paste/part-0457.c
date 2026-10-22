/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100578d6c | FUN_100578d6c */

undefined8 * FUN_100578d6c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  param_1[4] = param_2[4];
  _swift_bridgeObjectRelease(param_1[5]);
  uVar2 = param_1[6];
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  _swift_bridgeObjectRelease(param_1[7]);
  uVar2 = param_1[8];
  uVar1 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Address: 0x100578de8 | FUN_100578de8 */

undefined1  [16] FUN_100578de8(void)

{
  return ZEXT816(0x100ee0ef8);
}



/* Address: 0x100578df8 | FUN_100578df8 */

undefined8 * FUN_100578df8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  return param_1;
}



/* Address: 0x100578e54 | FUN_100578e54 */

undefined8 * FUN_100578e54(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[4] = param_2[4];
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  return param_1;
}



/* Address: 0x100578ee8 | FUN_100578ee8 */

undefined8 * FUN_100578ee8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  return param_1;
}



/* Address: 0x100578f44 | FUN_100578f44 */

int FUN_100578f44(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x31) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x100578f8c | FUN_100578f8c */

void FUN_100578f8c(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 6) = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x31) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x31) = 0;
    }
    if (param_2 != 0) {
      param_1[1] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x100578fdc | FUN_100578fdc */

undefined1  [16] FUN_100578fdc(void)

{
  return ZEXT816(0x100ee0f88);
}



/* Address: 0x100578fec | FUN_100578fec */

void FUN_100578fec(long param_1)

{
  FUN_100565f28(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                *(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60),
                *(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70),
                *(undefined8 *)(param_1 + 0x78),*(undefined1 *)(param_1 + 0x80));
  return;
}



/* Address: 0x100579040 | FUN_100579040 */

undefined1 * FUN_100579040(undefined1 *param_1,undefined1 *param_2)

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
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 uVar15;
  undefined8 uVar16;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar8 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  uVar9 = *(undefined8 *)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  uVar10 = *(undefined8 *)(param_2 + 0x30);
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  uVar11 = *(undefined8 *)(param_2 + 0x40);
  uVar5 = *(undefined8 *)(param_2 + 0x48);
  uVar12 = *(undefined8 *)(param_2 + 0x50);
  uVar6 = *(undefined8 *)(param_2 + 0x58);
  uVar13 = *(undefined8 *)(param_2 + 0x60);
  uVar7 = *(undefined8 *)(param_2 + 0x68);
  uVar14 = *(undefined8 *)(param_2 + 0x70);
  uVar16 = *(undefined8 *)(param_2 + 0x78);
  uVar15 = param_2[0x80];
  FUN_100565d78(uVar1,uVar8,uVar2,uVar9,uVar3,uVar10,uVar4,uVar11,uVar5,uVar12,uVar6,uVar13,uVar7,
                uVar14,uVar16,uVar15);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined8 *)(param_1 + 0x10) = uVar8;
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(undefined8 *)(param_1 + 0x20) = uVar9;
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  *(undefined8 *)(param_1 + 0x30) = uVar10;
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  *(undefined8 *)(param_1 + 0x40) = uVar11;
  *(undefined8 *)(param_1 + 0x48) = uVar5;
  *(undefined8 *)(param_1 + 0x50) = uVar12;
  *(undefined8 *)(param_1 + 0x58) = uVar6;
  *(undefined8 *)(param_1 + 0x60) = uVar13;
  *(undefined8 *)(param_1 + 0x68) = uVar7;
  *(undefined8 *)(param_1 + 0x70) = uVar14;
  *(undefined8 *)(param_1 + 0x78) = uVar16;
  param_1[0x80] = uVar15;
  return param_1;
}



/* Address: 0x100579138 | FUN_100579138 */

undefined1 * FUN_100579138(undefined1 *param_1,undefined1 *param_2)

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
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar12 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  uVar13 = *(undefined8 *)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  uVar14 = *(undefined8 *)(param_2 + 0x30);
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  uVar15 = *(undefined8 *)(param_2 + 0x40);
  uVar5 = *(undefined8 *)(param_2 + 0x48);
  uVar16 = *(undefined8 *)(param_2 + 0x50);
  uVar6 = *(undefined8 *)(param_2 + 0x58);
  uVar17 = *(undefined8 *)(param_2 + 0x60);
  uVar7 = *(undefined8 *)(param_2 + 0x68);
  uVar18 = *(undefined8 *)(param_2 + 0x70);
  uVar26 = *(undefined8 *)(param_2 + 0x78);
  uVar23 = param_2[0x80];
  FUN_100565d78(uVar1,uVar12,uVar2,uVar13,uVar3,uVar14,uVar4,uVar15,uVar5,uVar16,uVar6,uVar17,uVar7,
                uVar18,uVar26,uVar23);
  uVar8 = *(undefined8 *)(param_1 + 8);
  uVar19 = *(undefined8 *)(param_1 + 0x10);
  uVar9 = *(undefined8 *)(param_1 + 0x18);
  uVar20 = *(undefined8 *)(param_1 + 0x20);
  uVar10 = *(undefined8 *)(param_1 + 0x28);
  uVar21 = *(undefined8 *)(param_1 + 0x30);
  uVar11 = *(undefined8 *)(param_1 + 0x38);
  uVar22 = *(undefined8 *)(param_1 + 0x40);
  uVar28 = *(undefined8 *)(param_1 + 0x50);
  uVar27 = *(undefined8 *)(param_1 + 0x48);
  uVar30 = *(undefined8 *)(param_1 + 0x60);
  uVar29 = *(undefined8 *)(param_1 + 0x58);
  uVar32 = *(undefined8 *)(param_1 + 0x70);
  uVar31 = *(undefined8 *)(param_1 + 0x68);
  uVar25 = *(undefined8 *)(param_1 + 0x78);
  uVar24 = param_1[0x80];
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined8 *)(param_1 + 0x10) = uVar12;
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(undefined8 *)(param_1 + 0x20) = uVar13;
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  *(undefined8 *)(param_1 + 0x30) = uVar14;
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  *(undefined8 *)(param_1 + 0x40) = uVar15;
  *(undefined8 *)(param_1 + 0x48) = uVar5;
  *(undefined8 *)(param_1 + 0x50) = uVar16;
  *(undefined8 *)(param_1 + 0x58) = uVar6;
  *(undefined8 *)(param_1 + 0x60) = uVar17;
  *(undefined8 *)(param_1 + 0x68) = uVar7;
  *(undefined8 *)(param_1 + 0x70) = uVar18;
  *(undefined8 *)(param_1 + 0x78) = uVar26;
  param_1[0x80] = uVar23;
  FUN_100565f28(uVar8,uVar19,uVar9,uVar20,uVar10,uVar21,uVar11,uVar22,uVar27,uVar28,uVar29,uVar30,
                uVar31,uVar32,uVar25,uVar24);
  return param_1;
}



/* Address: 0x100579268 | FUN_100579268 */

void FUN_100579268(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  uVar4 = param_2[5];
  uVar3 = param_2[4];
  uVar5 = param_2[6];
  uVar7 = param_2[9];
  uVar6 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar5;
  param_1[9] = uVar7;
  param_1[8] = uVar6;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  uVar2 = param_2[0xb];
  uVar1 = param_2[10];
  uVar4 = param_2[0xd];
  uVar3 = param_2[0xc];
  uVar6 = param_2[0xf];
  uVar5 = param_2[0xe];
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  param_1[0xd] = uVar4;
  param_1[0xc] = uVar3;
  param_1[0xf] = uVar6;
  param_1[0xe] = uVar5;
  param_1[0xb] = uVar2;
  param_1[10] = uVar1;
  return;
}



/* Address: 0x10057929c | FUN_10057929c */

undefined1 * FUN_10057929c(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
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
  
  *param_1 = *param_2;
  uVar11 = *(undefined8 *)(param_2 + 0x78);
  uVar7 = param_2[0x80];
  uVar9 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  uVar10 = *(undefined8 *)(param_1 + 0x40);
  uVar14 = *(undefined8 *)(param_1 + 0x50);
  uVar13 = *(undefined8 *)(param_1 + 0x48);
  uVar16 = *(undefined8 *)(param_1 + 0x60);
  uVar15 = *(undefined8 *)(param_1 + 0x58);
  uVar18 = *(undefined8 *)(param_1 + 0x70);
  uVar17 = *(undefined8 *)(param_1 + 0x68);
  uVar12 = *(undefined8 *)(param_1 + 0x78);
  uVar8 = param_1[0x80];
  uVar19 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar19;
  uVar19 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar19;
  uVar19 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar19;
  uVar19 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = uVar19;
  uVar19 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = uVar19;
  uVar19 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = uVar19;
  uVar19 = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x68) = uVar19;
  *(undefined8 *)(param_1 + 0x78) = uVar11;
  param_1[0x80] = uVar7;
  FUN_100565f28(uVar9,uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar10,uVar13,uVar14,uVar15,uVar16,uVar17,
                uVar18,uVar12,uVar8);
  return param_1;
}



/* Address: 0x100579354 | FUN_100579354 */

int FUN_100579354(byte *param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (param_1[0x81] != 0)) {
    return *(int *)param_1 + 0xff;
  }
  iVar1 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar1 = -1;
  }
  return iVar1 + 1;
}



/* Address: 0x100579398 | FUN_100579398 */

void FUN_100579398(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xff) {
    if (0xfe < param_3) {
      *(char *)((long)param_1 + 0x81) = '\0';
    }
    if (param_2 != 0) {
      *(char *)param_1 = (char)param_2 + '\x01';
      return;
    }
  }
  else {
    param_1[0xf] = 0;
    param_1[0xe] = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *(char *)(param_1 + 0x10) = '\0';
    *param_1 = (ulong)(param_2 - 0xff);
    if (0xfe < param_3) {
      *(char *)((long)param_1 + 0x81) = '\x01';
    }
  }
  return;
}



/* Address: 0x100579400 | FUN_100579400 */

undefined1  [16] FUN_100579400(void)

{
  return ZEXT816(0x100ee1010);
}



/* Address: 0x100579410 | FUN_100579410 */

undefined1  [16] FUN_100579410(void)

{
  return ZEXT816(0x100ee10a8);
}



/* Address: 0x100579420 | FUN_100579420 */

undefined1  [16] FUN_100579420(void)

{
  return ZEXT816(0x100ee1138);
}



/* Address: 0x100579430 | FUN_100579430 */

undefined1  [16] FUN_100579430(void)

{
  return ZEXT816(0x100ee11b0);
}



/* Address: 0x100579440 | FUN_100579440 */

undefined1  [16] FUN_100579440(void)

{
  return ZEXT816(0x100ee11d8);
}



/* Address: 0x100579450 | FUN_100579450 */

undefined1  [16] FUN_100579450(void)

{
  return ZEXT816(0x100ee1250);
}



/* Address: 0x100579460 | FUN_100579460 */

void FUN_100579460(undefined8 *param_1)

{
  _swift_bridgeObjectRelease(*param_1);
  _swift_bridgeObjectRelease(param_1[2]);
  _swift_bridgeObjectRelease(param_1[3]);
  return;
}



/* Address: 0x100579490 | FUN_100579490 */

undefined8 * FUN_100579490(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Address: 0x1005794e8 | FUN_1005794e8 */

undefined8 * FUN_1005794e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[1] = param_2[1];
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x100579564 | FUN_100579564 */

undefined8 * FUN_100579564(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar1);
  param_1[1] = param_2[1];
  _swift_bridgeObjectRelease(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x1005795b8 | FUN_1005795b8 */

undefined1  [16] FUN_1005795b8(void)

{
  return ZEXT816(0x100ee12d0);
}



/* Address: 0x1005795c8 | FUN_1005795c8 */

undefined1  [16] FUN_1005795c8(void)

{
  return ZEXT816(0x100ee1300);
}



/* Address: 0x1005795d8 | FUN_1005795d8 */

undefined8 * FUN_1005795d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
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



/* Address: 0x10057963c | FUN_10057963c */

undefined1  [16] FUN_10057963c(void)

{
  return ZEXT816(0x100ee1378);
}



/* Address: 0x10057964c | FUN_10057964c */

undefined1  [16] FUN_10057964c(void)

{
  return ZEXT816(0x100ee13f8);
}



/* Address: 0x10057965c | FUN_10057965c */

undefined1  [16] FUN_10057965c(void)

{
  return ZEXT816(0x100ee1428);
}



/* Address: 0x10057966c | FUN_10057966c */

undefined1  [16] FUN_10057966c(void)

{
  return ZEXT816(0x100ee1448);
}



/* Address: 0x10057967c | FUN_10057967c */

undefined1  [16] FUN_10057967c(void)

{
  return ZEXT816(0x100ee14d8);
}



/* Address: 0x10057968c | FUN_10057968c */

undefined1  [16] FUN_10057968c(void)

{
  return ZEXT816(0x100ee1568);
}



/* Address: 0x10057969c | FUN_10057969c */

undefined1  [16] FUN_10057969c(void)

{
  return ZEXT816(0x100ee15f8);
}



/* Address: 0x1005796ac | FUN_1005796ac */

undefined1  [16] FUN_1005796ac(void)

{
  return ZEXT816(0x100ee1688);
}



/* Address: 0x1005796bc | FUN_1005796bc */

undefined1  [16] FUN_1005796bc(void)

{
  return ZEXT816(0x100ee1718);
}



/* Address: 0x1005796cc | FUN_1005796cc */

undefined1  [16] FUN_1005796cc(void)

{
  return ZEXT816(0x100ee17a8);
}



/* Address: 0x1005796dc | FUN_1005796dc */

undefined1  [16] FUN_1005796dc(void)

{
  return ZEXT816(0x100ee1838);
}



/* Address: 0x1005796ec | FUN_1005796ec */

undefined1  [16] FUN_1005796ec(void)

{
  return ZEXT816(0x100ee18c8);
}



/* Address: 0x1005796fc | FUN_1005796fc */

undefined1  [16] FUN_1005796fc(void)

{
  return ZEXT816(0x100ee1958);
}



/* Address: 0x10057970c | thunk_FUN_100579710 */

void thunk_FUN_100579710(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0ee8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5c454;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5c454,&DAT_100ee1958);
  DAT_100fd0ee8 = pTVar1;
  return;
}



/* Address: 0x100579710 | FUN_100579710 */

void FUN_100579710(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0ee8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5c454;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5c454,&DAT_100ee1958);
  DAT_100fd0ee8 = pTVar1;
  return;
}



/* Address: 0x100579750 | thunk_FUN_100579754 */

void thunk_FUN_100579754(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0ef0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5c544;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5c544,&DAT_100ee18c8);
  DAT_100fd0ef0 = pTVar1;
  return;
}



/* Address: 0x100579754 | FUN_100579754 */

void FUN_100579754(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0ef0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5c544;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5c544,&DAT_100ee18c8);
  DAT_100fd0ef0 = pTVar1;
  return;
}



/* Address: 0x100579794 | thunk_FUN_100579798 */

void thunk_FUN_100579798(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0ef8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5c5fc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5c5fc,&DAT_100ee1838);
  DAT_100fd0ef8 = pTVar1;
  return;
}



/* Address: 0x100579798 | FUN_100579798 */

void FUN_100579798(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0ef8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5c5fc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5c5fc,&DAT_100ee1838);
  DAT_100fd0ef8 = pTVar1;
  return;
}



/* Address: 0x1005797d8 | thunk_FUN_1005797dc */

void thunk_FUN_1005797dc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0f00 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5c6b4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5c6b4,&DAT_100ee17a8);
  DAT_100fd0f00 = pTVar1;
  return;
}



/* Address: 0x1005797dc | FUN_1005797dc */

void FUN_1005797dc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0f00 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5c6b4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5c6b4,&DAT_100ee17a8);
  DAT_100fd0f00 = pTVar1;
  return;
}



/* Address: 0x10057981c | thunk_FUN_100579820 */

void thunk_FUN_100579820(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0f08 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5c7a4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5c7a4,&DAT_100ee1718);
  DAT_100fd0f08 = pTVar1;
  return;
}



/* Address: 0x100579820 | FUN_100579820 */

void FUN_100579820(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0f08 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5c7a4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5c7a4,&DAT_100ee1718);
  DAT_100fd0f08 = pTVar1;
  return;
}



/* Address: 0x100579860 | thunk_FUN_100579864 */

void thunk_FUN_100579864(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0f10 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5c85c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5c85c,&DAT_100ee1688);
  DAT_100fd0f10 = pTVar1;
  return;
}



/* Address: 0x100579864 | FUN_100579864 */

void FUN_100579864(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0f10 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5c85c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5c85c,&DAT_100ee1688);
  DAT_100fd0f10 = pTVar1;
  return;
}



/* Address: 0x1005798a4 | FUN_1005798a4 */

void FUN_1005798a4(void)

{
  FUN_100134584(&DAT_100fd0f18,&DAT_100fd0f20,&DAT_100c5c8d8,
                PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548);
  return;
}



/* Address: 0x1005798d8 | thunk_FUN_1005798dc */

void thunk_FUN_1005798dc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0f28 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5c990;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5c990,&DAT_100ee15f8);
  DAT_100fd0f28 = pTVar1;
  return;
}



/* Address: 0x1005798dc | FUN_1005798dc */

void FUN_1005798dc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0f28 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5c990;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5c990,&DAT_100ee15f8);
  DAT_100fd0f28 = pTVar1;
  return;
}



/* Address: 0x10057991c | thunk_FUN_100579920 */

void thunk_FUN_100579920(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0f30 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5ca48;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5ca48,&DAT_100ee1568);
  DAT_100fd0f30 = pTVar1;
  return;
}



/* Address: 0x100579920 | FUN_100579920 */

void FUN_100579920(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0f30 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5ca48;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5ca48,&DAT_100ee1568);
  DAT_100fd0f30 = pTVar1;
  return;
}



/* Address: 0x100579960 | FUN_100579960 */

void FUN_100579960(void)

{
  FUN_100134584(&DAT_100fd0f38,&DAT_100fd0f40,&DAT_100c5cac0,
                PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548);
  return;
}



/* Address: 0x100579994 | thunk_FUN_100579998 */

void thunk_FUN_100579998(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0f48 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5cb78;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5cb78,&DAT_100ee14d8);
  DAT_100fd0f48 = pTVar1;
  return;
}



/* Address: 0x100579998 | FUN_100579998 */

void FUN_100579998(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0f48 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5cb78;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5cb78,&DAT_100ee14d8);
  DAT_100fd0f48 = pTVar1;
  return;
}



/* Address: 0x1005799d8 | thunk_FUN_1005799dc */

void thunk_FUN_1005799dc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0f50 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5cbc8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5cbc8,&DAT_100ee1448);
  DAT_100fd0f50 = pTVar1;
  return;
}



/* Address: 0x1005799dc | FUN_1005799dc */

void FUN_1005799dc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0f50 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5cbc8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5cbc8,&DAT_100ee1448);
  DAT_100fd0f50 = pTVar1;
  return;
}



/* Address: 0x100579a1c | thunk_FUN_100579a20 */

void thunk_FUN_100579a20(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0f58 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5cba0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5cba0,&DAT_100ee1448);
  DAT_100fd0f58 = pTVar1;
  return;
}


