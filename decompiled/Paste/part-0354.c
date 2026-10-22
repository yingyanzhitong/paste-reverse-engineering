/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100452710 | FUN_100452710 */

undefined8 * FUN_100452710(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  FUN_1001037b4(uVar1,uVar3);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  FUN_10003bf2c(uVar2,uVar4);
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  FUN_1001037b4(uVar1,uVar3);
  uVar2 = param_1[2];
  uVar4 = param_1[3];
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  FUN_10003bf2c(uVar2,uVar4);
  return param_1;
}



/* Address: 0x100452774 | FUN_100452774 */

void FUN_100452774(undefined8 *param_1,undefined8 *param_2)

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



/* Address: 0x100452780 | FUN_100452780 */

undefined8 * FUN_100452780(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  FUN_10003bf2c(uVar1,uVar2);
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  uVar3 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  FUN_10003bf2c(uVar1,uVar2);
  return param_1;
}



/* Address: 0x1004527c8 | FUN_1004527c8 */

int FUN_1004527c8(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[8] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x10045281c | FUN_10045281c */

void FUN_10045281c(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xd) {
    if (0xc < param_3) {
      *(undefined1 *)(param_1 + 4) = 0;
    }
    if (param_2 != 0) {
      *param_1 = 0;
      param_1[1] = (ulong)((-param_2 >> 2 & 3) + param_2 * -4) << 0x3c;
      return;
    }
  }
  else {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = (ulong)(param_2 - 0xd);
    param_1[1] = 0;
    if (0xc < param_3) {
      *(undefined1 *)(param_1 + 4) = 1;
    }
  }
  return;
}



/* Address: 0x10045286c | FUN_10045286c */

undefined1  [16] FUN_10045286c(void)

{
  return ZEXT816(0x100ed5df8);
}



/* Address: 0x10045287c | FUN_10045287c */

void FUN_10045287c(long param_1)

{
  FUN_10003bf2c(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  FUN_10003bf2c(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  FUN_10003bf2c(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  FUN_10003bf2c(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
  FUN_10003bf2c(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58));
  FUN_10003bf2c(*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68));
  FUN_10003bf2c(*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x78));
  FUN_10003bf2c(*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x88));
  FUN_10003bf2c(*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x98));
  return;
}



/* Address: 0x1004528e0 | FUN_1004528e0 */

undefined8 * FUN_1004528e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  uVar2 = param_2[2];
  uVar1 = param_2[3];
  FUN_1001037b4(uVar2,uVar1);
  param_1[2] = uVar2;
  param_1[3] = uVar1;
  uVar2 = param_2[4];
  uVar1 = param_2[5];
  FUN_1001037b4(uVar2,uVar1);
  param_1[4] = uVar2;
  param_1[5] = uVar1;
  uVar2 = param_2[6];
  uVar1 = param_2[7];
  FUN_1001037b4(uVar2,uVar1);
  param_1[6] = uVar2;
  param_1[7] = uVar1;
  uVar2 = param_2[8];
  uVar1 = param_2[9];
  FUN_1001037b4(uVar2,uVar1);
  param_1[8] = uVar2;
  param_1[9] = uVar1;
  uVar2 = param_2[10];
  uVar1 = param_2[0xb];
  FUN_1001037b4(uVar2,uVar1);
  param_1[10] = uVar2;
  param_1[0xb] = uVar1;
  uVar2 = param_2[0xc];
  uVar1 = param_2[0xd];
  FUN_1001037b4(uVar2,uVar1);
  param_1[0xc] = uVar2;
  param_1[0xd] = uVar1;
  uVar2 = param_2[0xe];
  uVar1 = param_2[0xf];
  FUN_1001037b4(uVar2,uVar1);
  param_1[0xe] = uVar2;
  param_1[0xf] = uVar1;
  uVar2 = param_2[0x10];
  uVar1 = param_2[0x11];
  FUN_1001037b4(uVar2,uVar1);
  param_1[0x10] = uVar2;
  param_1[0x11] = uVar1;
  uVar2 = param_2[0x12];
  uVar1 = param_2[0x13];
  FUN_1001037b4(uVar2,uVar1);
  param_1[0x12] = uVar2;
  param_1[0x13] = uVar1;
  return param_1;
}



/* Address: 0x1004529c8 | FUN_1004529c8 */

undefined8 * FUN_1004529c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  FUN_1001037b4(uVar1,uVar3);
  uVar2 = param_1[2];
  uVar4 = param_1[3];
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  FUN_10003bf2c(uVar2,uVar4);
  uVar1 = param_2[4];
  uVar3 = param_2[5];
  FUN_1001037b4(uVar1,uVar3);
  uVar2 = param_1[4];
  uVar4 = param_1[5];
  param_1[4] = uVar1;
  param_1[5] = uVar3;
  FUN_10003bf2c(uVar2,uVar4);
  uVar1 = param_2[6];
  uVar3 = param_2[7];
  FUN_1001037b4(uVar1,uVar3);
  uVar2 = param_1[6];
  uVar4 = param_1[7];
  param_1[6] = uVar1;
  param_1[7] = uVar3;
  FUN_10003bf2c(uVar2,uVar4);
  uVar1 = param_2[8];
  uVar3 = param_2[9];
  FUN_1001037b4(uVar1,uVar3);
  uVar2 = param_1[8];
  uVar4 = param_1[9];
  param_1[8] = uVar1;
  param_1[9] = uVar3;
  FUN_10003bf2c(uVar2,uVar4);
  uVar1 = param_2[10];
  uVar3 = param_2[0xb];
  FUN_1001037b4(uVar1,uVar3);
  uVar2 = param_1[10];
  uVar4 = param_1[0xb];
  param_1[10] = uVar1;
  param_1[0xb] = uVar3;
  FUN_10003bf2c(uVar2,uVar4);
  uVar1 = param_2[0xc];
  uVar3 = param_2[0xd];
  FUN_1001037b4(uVar1,uVar3);
  uVar2 = param_1[0xc];
  uVar4 = param_1[0xd];
  param_1[0xc] = uVar1;
  param_1[0xd] = uVar3;
  FUN_10003bf2c(uVar2,uVar4);
  uVar1 = param_2[0xe];
  uVar3 = param_2[0xf];
  FUN_1001037b4(uVar1,uVar3);
  uVar2 = param_1[0xe];
  uVar4 = param_1[0xf];
  param_1[0xe] = uVar1;
  param_1[0xf] = uVar3;
  FUN_10003bf2c(uVar2,uVar4);
  uVar1 = param_2[0x10];
  uVar3 = param_2[0x11];
  FUN_1001037b4(uVar1,uVar3);
  uVar2 = param_1[0x10];
  uVar4 = param_1[0x11];
  param_1[0x10] = uVar1;
  param_1[0x11] = uVar3;
  FUN_10003bf2c(uVar2,uVar4);
  uVar1 = param_2[0x12];
  uVar3 = param_2[0x13];
  FUN_1001037b4(uVar1,uVar3);
  uVar2 = param_1[0x12];
  uVar4 = param_1[0x13];
  param_1[0x12] = uVar1;
  param_1[0x13] = uVar3;
  FUN_10003bf2c(uVar2,uVar4);
  return param_1;
}



/* Address: 0x100452b00 | FUN_100452b00 */

void FUN_100452b00(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar2 = param_2[5];
  uVar1 = param_2[4];
  uVar4 = param_2[7];
  uVar3 = param_2[6];
  uVar5 = param_2[8];
  uVar7 = param_2[0xb];
  uVar6 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar5;
  param_1[0xb] = uVar7;
  param_1[10] = uVar6;
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  uVar2 = param_2[0xd];
  uVar1 = param_2[0xc];
  uVar4 = param_2[0xf];
  uVar3 = param_2[0xe];
  uVar5 = param_2[0x10];
  uVar7 = param_2[0x13];
  uVar6 = param_2[0x12];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar5;
  param_1[0x13] = uVar7;
  param_1[0x12] = uVar6;
  param_1[0xd] = uVar2;
  param_1[0xc] = uVar1;
  param_1[0xf] = uVar4;
  param_1[0xe] = uVar3;
  return;
}



/* Address: 0x100452b2c | FUN_100452b2c */

undefined8 * FUN_100452b2c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  uVar3 = *param_2;
  uVar5 = param_2[3];
  uVar4 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  FUN_10003bf2c(uVar1,uVar2);
  uVar1 = param_1[4];
  uVar2 = param_1[5];
  uVar3 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  FUN_10003bf2c(uVar1,uVar2);
  uVar1 = param_1[6];
  uVar2 = param_1[7];
  uVar3 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar3;
  FUN_10003bf2c(uVar1,uVar2);
  uVar1 = param_1[8];
  uVar2 = param_1[9];
  uVar3 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar3;
  FUN_10003bf2c(uVar1,uVar2);
  uVar1 = param_1[10];
  uVar2 = param_1[0xb];
  uVar3 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar3;
  FUN_10003bf2c(uVar1,uVar2);
  uVar1 = param_1[0xc];
  uVar2 = param_1[0xd];
  uVar3 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar3;
  FUN_10003bf2c(uVar1,uVar2);
  uVar1 = param_1[0xe];
  uVar2 = param_1[0xf];
  uVar3 = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar3;
  FUN_10003bf2c(uVar1,uVar2);
  uVar1 = param_1[0x10];
  uVar2 = param_1[0x11];
  uVar3 = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar3;
  FUN_10003bf2c(uVar1,uVar2);
  uVar1 = param_1[0x12];
  uVar2 = param_1[0x13];
  uVar3 = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x12] = uVar3;
  FUN_10003bf2c(uVar1,uVar2);
  return param_1;
}



/* Address: 0x100452be4 | FUN_100452be4 */

int FUN_100452be4(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[0x28] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x100452c38 | FUN_100452c38 */

void FUN_100452c38(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xd) {
    if (0xc < param_3) {
      *(undefined1 *)(param_1 + 0x14) = 0;
    }
    if (param_2 != 0) {
      param_1[2] = 0;
      param_1[3] = (ulong)((-param_2 >> 2 & 3) + param_2 * -4) << 0x3c;
      return;
    }
  }
  else {
    param_1[0x13] = 0;
    param_1[0x12] = 0;
    param_1[0x11] = 0;
    param_1[0x10] = 0;
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
    *param_1 = (ulong)(param_2 - 0xd);
    if (0xc < param_3) {
      *(undefined1 *)(param_1 + 0x14) = 1;
    }
  }
  return;
}



/* Address: 0x100452cb0 | FUN_100452cb0 */

undefined1  [16] FUN_100452cb0(void)

{
  return ZEXT816(0x100ed5e78);
}



/* Address: 0x100452cc0 | FUN_100452cc0 */

void FUN_100452cc0(long param_1)

{
  FUN_10003bf2c(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  FUN_10003bf2c(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  FUN_10003bf2c(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  FUN_10003bf2c(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
  FUN_10003bf2c(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58));
  FUN_10003bf2c(*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68));
  return;
}



/* Address: 0x100452d0c | FUN_100452d0c */

undefined8 * FUN_100452d0c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  uVar2 = param_2[2];
  uVar1 = param_2[3];
  FUN_1001037b4(uVar2,uVar1);
  param_1[2] = uVar2;
  param_1[3] = uVar1;
  uVar2 = param_2[4];
  uVar1 = param_2[5];
  FUN_1001037b4(uVar2,uVar1);
  param_1[4] = uVar2;
  param_1[5] = uVar1;
  uVar2 = param_2[6];
  uVar1 = param_2[7];
  FUN_1001037b4(uVar2,uVar1);
  param_1[6] = uVar2;
  param_1[7] = uVar1;
  uVar2 = param_2[8];
  uVar1 = param_2[9];
  FUN_1001037b4(uVar2,uVar1);
  param_1[8] = uVar2;
  param_1[9] = uVar1;
  uVar2 = param_2[10];
  uVar1 = param_2[0xb];
  FUN_1001037b4(uVar2,uVar1);
  param_1[10] = uVar2;
  param_1[0xb] = uVar1;
  uVar2 = param_2[0xc];
  uVar1 = param_2[0xd];
  FUN_1001037b4(uVar2,uVar1);
  param_1[0xc] = uVar2;
  param_1[0xd] = uVar1;
  return param_1;
}



/* Address: 0x100452db8 | FUN_100452db8 */

undefined8 * FUN_100452db8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  FUN_1001037b4(uVar1,uVar3);
  uVar2 = param_1[2];
  uVar4 = param_1[3];
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  FUN_10003bf2c(uVar2,uVar4);
  uVar1 = param_2[4];
  uVar3 = param_2[5];
  FUN_1001037b4(uVar1,uVar3);
  uVar2 = param_1[4];
  uVar4 = param_1[5];
  param_1[4] = uVar1;
  param_1[5] = uVar3;
  FUN_10003bf2c(uVar2,uVar4);
  uVar1 = param_2[6];
  uVar3 = param_2[7];
  FUN_1001037b4(uVar1,uVar3);
  uVar2 = param_1[6];
  uVar4 = param_1[7];
  param_1[6] = uVar1;
  param_1[7] = uVar3;
  FUN_10003bf2c(uVar2,uVar4);
  uVar1 = param_2[8];
  uVar3 = param_2[9];
  FUN_1001037b4(uVar1,uVar3);
  uVar2 = param_1[8];
  uVar4 = param_1[9];
  param_1[8] = uVar1;
  param_1[9] = uVar3;
  FUN_10003bf2c(uVar2,uVar4);
  uVar1 = param_2[10];
  uVar3 = param_2[0xb];
  FUN_1001037b4(uVar1,uVar3);
  uVar2 = param_1[10];
  uVar4 = param_1[0xb];
  param_1[10] = uVar1;
  param_1[0xb] = uVar3;
  FUN_10003bf2c(uVar2,uVar4);
  uVar1 = param_2[0xc];
  uVar3 = param_2[0xd];
  FUN_1001037b4(uVar1,uVar3);
  uVar2 = param_1[0xc];
  uVar4 = param_1[0xd];
  param_1[0xc] = uVar1;
  param_1[0xd] = uVar3;
  FUN_10003bf2c(uVar2,uVar4);
  return param_1;
}



/* Address: 0x100452e9c | FUN_100452e9c */

void FUN_100452e9c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = param_2[2];
  uVar5 = param_2[5];
  uVar4 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  param_1[5] = uVar5;
  param_1[4] = uVar4;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  uVar2 = param_2[7];
  uVar1 = param_2[6];
  uVar4 = param_2[9];
  uVar3 = param_2[8];
  uVar5 = param_2[10];
  uVar7 = param_2[0xd];
  uVar6 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar5;
  param_1[0xd] = uVar7;
  param_1[0xc] = uVar6;
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  param_1[9] = uVar4;
  param_1[8] = uVar3;
  return;
}



/* Address: 0x100452ec0 | FUN_100452ec0 */

undefined8 * FUN_100452ec0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  uVar3 = *param_2;
  uVar5 = param_2[3];
  uVar4 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  FUN_10003bf2c(uVar1,uVar2);
  uVar1 = param_1[4];
  uVar2 = param_1[5];
  uVar3 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  FUN_10003bf2c(uVar1,uVar2);
  uVar1 = param_1[6];
  uVar2 = param_1[7];
  uVar3 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar3;
  FUN_10003bf2c(uVar1,uVar2);
  uVar1 = param_1[8];
  uVar2 = param_1[9];
  uVar3 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar3;
  FUN_10003bf2c(uVar1,uVar2);
  uVar1 = param_1[10];
  uVar2 = param_1[0xb];
  uVar3 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar3;
  FUN_10003bf2c(uVar1,uVar2);
  uVar1 = param_1[0xc];
  uVar2 = param_1[0xd];
  uVar3 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar3;
  FUN_10003bf2c(uVar1,uVar2);
  return param_1;
}



/* Address: 0x100452f48 | FUN_100452f48 */

int FUN_100452f48(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[0x1c] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x100452f9c | FUN_100452f9c */

void FUN_100452f9c(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xd) {
    if (0xc < param_3) {
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
    if (param_2 != 0) {
      param_1[2] = 0;
      param_1[3] = (ulong)((-param_2 >> 2 & 3) + param_2 * -4) << 0x3c;
      return;
    }
  }
  else {
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
    *param_1 = (ulong)(param_2 - 0xd);
    if (0xc < param_3) {
      *(undefined1 *)(param_1 + 0xe) = 1;
    }
  }
  return;
}



/* Address: 0x100453008 | FUN_100453008 */

undefined1  [16] FUN_100453008(void)

{
  return ZEXT816(0x100ed5f00);
}



/* Address: 0x100453018 | FUN_100453018 */

undefined1  [16] FUN_100453018(void)

{
  return ZEXT816(0x100ed5f40);
}



/* Address: 0x100453028 | FUN_100453028 */

void FUN_100453028(long param_1)

{
  FUN_10003bf2c(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  FUN_10003bf2c(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  FUN_10003bf2c(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  FUN_10003bf2c(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  return;
}



/* Address: 0x100453064 | FUN_100453064 */

undefined8 * FUN_100453064(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  uVar2 = param_2[2];
  FUN_1001037b4(uVar1,uVar2);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  uVar1 = param_2[3];
  uVar2 = param_2[4];
  FUN_1001037b4(uVar1,uVar2);
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  FUN_1001037b4(uVar1,uVar2);
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  uVar1 = param_2[7];
  uVar2 = param_2[8];
  FUN_1001037b4(uVar1,uVar2);
  param_1[7] = uVar1;
  param_1[8] = uVar2;
  return param_1;
}



/* Address: 0x1004530e8 | FUN_1004530e8 */

undefined8 * FUN_1004530e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar1 = param_2[1];
  uVar3 = param_2[2];
  FUN_1001037b4(uVar1,uVar3);
  uVar2 = param_1[1];
  uVar4 = param_1[2];
  param_1[1] = uVar1;
  param_1[2] = uVar3;
  FUN_10003bf2c(uVar2,uVar4);
  uVar1 = param_2[3];
  uVar3 = param_2[4];
  FUN_1001037b4(uVar1,uVar3);
  uVar2 = param_1[3];
  uVar4 = param_1[4];
  param_1[3] = uVar1;
  param_1[4] = uVar3;
  FUN_10003bf2c(uVar2,uVar4);
  uVar1 = param_2[5];
  uVar3 = param_2[6];
  FUN_1001037b4(uVar1,uVar3);
  uVar2 = param_1[5];
  uVar4 = param_1[6];
  param_1[5] = uVar1;
  param_1[6] = uVar3;
  FUN_10003bf2c(uVar2,uVar4);
  uVar1 = param_2[7];
  uVar3 = param_2[8];
  FUN_1001037b4(uVar1,uVar3);
  uVar2 = param_1[7];
  uVar4 = param_1[8];
  param_1[7] = uVar1;
  param_1[8] = uVar3;
  FUN_10003bf2c(uVar2,uVar4);
  return param_1;
}



/* Address: 0x10045318c | FUN_10045318c */

undefined8 * FUN_10045318c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  FUN_10003bf2c(uVar1,param_1[2]);
  uVar1 = param_1[3];
  uVar3 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  FUN_10003bf2c(uVar1,param_1[4]);
  uVar1 = param_1[5];
  uVar3 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  FUN_10003bf2c(uVar1,param_1[6]);
  uVar2 = param_2[8];
  uVar1 = param_1[7];
  uVar3 = param_1[8];
  uVar4 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar4;
  param_1[8] = uVar2;
  FUN_10003bf2c(uVar1,uVar3);
  return param_1;
}



/* Address: 0x1004531fc | FUN_1004531fc */

int FUN_1004531fc(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[0x12] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x100453250 | FUN_100453250 */

void FUN_100453250(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xd) {
    if (0xc < param_3) {
      *(undefined1 *)(param_1 + 9) = 0;
    }
    if (param_2 != 0) {
      param_1[1] = 0;
      param_1[2] = (ulong)((-param_2 >> 2 & 3) + param_2 * -4) << 0x3c;
      return;
    }
  }
  else {
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    *param_1 = (ulong)(param_2 - 0xd);
    if (0xc < param_3) {
      *(undefined1 *)(param_1 + 9) = 1;
    }
  }
  return;
}



/* Address: 0x1004532b0 | FUN_1004532b0 */

undefined1  [16] FUN_1004532b0(void)

{
  return ZEXT816(0x100ed5fc0);
}



/* Address: 0x1004532c0 | FUN_1004532c0 */

void FUN_1004532c0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc7670 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4c0d0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4c0d0,&DAT_100ed63c8);
  DAT_100fc7670 = pTVar1;
  return;
}



/* Address: 0x100453300 | FUN_100453300 */

undefined8 FUN_100453300(undefined8 param_1)

{
  FUN_100453028(param_1,&DAT_100ed5fc0);
  return param_1;
}



/* Address: 0x10045332c | FUN_10045332c */

void FUN_10045332c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc7680 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4c080;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4c080,&DAT_100ed6338);
  DAT_100fc7680 = pTVar1;
  return;
}



/* Address: 0x10045336c | FUN_10045336c */

undefined8 FUN_10045336c(undefined8 param_1)

{
  FUN_100452cc0(param_1,&DAT_100ed5f00);
  return param_1;
}



/* Address: 0x100453398 | FUN_100453398 */

void FUN_100453398(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc76a0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4c030;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4c030,&DAT_100ed62a8);
  DAT_100fc76a0 = pTVar1;
  return;
}



/* Address: 0x1004533d8 | FUN_1004533d8 */

undefined8 FUN_1004533d8(undefined8 param_1,undefined8 param_2)

{
  FUN_1004528e0(param_2,param_1,&DAT_100ed5e78);
  return param_2;
}



/* Address: 0x10045340c | FUN_10045340c */

undefined8 FUN_10045340c(undefined8 param_1)

{
  FUN_10045287c(param_1,&DAT_100ed5e78);
  return param_1;
}



/* Address: 0x100453438 | FUN_100453438 */

void FUN_100453438(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc76b0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4bfe0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4bfe0,&DAT_100ed6218);
  DAT_100fc76b0 = pTVar1;
  return;
}



/* Address: 0x100453478 | FUN_100453478 */

void FUN_100453478(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc76c0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4bf90;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4bf90,&DAT_100ed6188);
  DAT_100fc76c0 = pTVar1;
  return;
}



/* Address: 0x1004534b8 | FUN_1004534b8 */

void FUN_1004534b8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc76d0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4bf40;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4bf40,&DAT_100ed60f8);
  DAT_100fc76d0 = pTVar1;
  return;
}



/* Address: 0x1004534f8 | FUN_1004534f8 */

undefined8 FUN_1004534f8(undefined8 param_1)

{
  FUN_1004522b0(param_1,&DAT_100ed5cc0);
  return param_1;
}



/* Address: 0x100453524 | FUN_100453524 */

void FUN_100453524(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc76e0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4bef0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4bef0,&DAT_100ed6068);
  DAT_100fc76e0 = pTVar1;
  return;
}



/* Address: 0x100453564 | FUN_100453564 */

undefined8 FUN_100453564(undefined8 param_1,undefined8 param_2)

{
  FUN_100451ef8(param_2,param_1,&DAT_100ed5c40);
  return param_2;
}



/* Address: 0x100453598 | FUN_100453598 */

undefined8 FUN_100453598(undefined8 param_1)

{
  FUN_100451e94(param_1,&DAT_100ed5c40);
  return param_1;
}



/* Address: 0x1004535c4 | FUN_1004535c4 */

undefined1  [16] FUN_1004535c4(void)

{
  return ZEXT816(0x100ed6068);
}



/* Address: 0x1004535d4 | thunk_FUN_1000df7fc */

void thunk_FUN_1000df7fc(void)

{
  FUN_1000df7fc();
  return;
}



/* Address: 0x1004535d8 | thunk_FUN_1000df88c */

void thunk_FUN_1000df88c(void)

{
  FUN_1000df88c();
  return;
}



/* Address: 0x1004535dc | FUN_1004535dc */

undefined1  [16] FUN_1004535dc(void)

{
  return ZEXT816(0x100ed60f8);
}



/* Address: 0x1004535ec | FUN_1004535ec */

undefined1  [16] FUN_1004535ec(void)

{
  return ZEXT816(0x100ed6188);
}



/* Address: 0x1004535fc | FUN_1004535fc */

undefined1  [16] FUN_1004535fc(void)

{
  return ZEXT816(0x100ed6218);
}



/* Address: 0x10045360c | FUN_10045360c */

undefined1  [16] FUN_10045360c(void)

{
  return ZEXT816(0x100ed62a8);
}



/* Address: 0x10045361c | FUN_10045361c */

undefined1  [16] FUN_10045361c(void)

{
  return ZEXT816(0x100ed6338);
}



/* Address: 0x10045362c | FUN_10045362c */

undefined1  [16] FUN_10045362c(void)

{
  return ZEXT816(0x100ed63c8);
}



/* Address: 0x10045363c | FUN_10045363c */

void FUN_10045363c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1004532c0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Address: 0x100453660 | thunk_FUN_100453664 */

void thunk_FUN_100453664(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc7808 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4b9d0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4b9d0,&DAT_100ed63c8);
  DAT_100fc7808 = pTVar1;
  return;
}



/* Address: 0x100453664 | FUN_100453664 */

void FUN_100453664(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc7808 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4b9d0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4b9d0,&DAT_100ed63c8);
  DAT_100fc7808 = pTVar1;
  return;
}



/* Address: 0x1004536a4 | FUN_1004536a4 */

void FUN_1004536a4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10045332c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Address: 0x1004536c8 | thunk_FUN_1004536cc */

void thunk_FUN_1004536cc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc7810 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4baa4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4baa4,&DAT_100ed6338);
  DAT_100fc7810 = pTVar1;
  return;
}



/* Address: 0x1004536cc | FUN_1004536cc */

void FUN_1004536cc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc7810 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4baa4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4baa4,&DAT_100ed6338);
  DAT_100fc7810 = pTVar1;
  return;
}



/* Address: 0x10045370c | FUN_10045370c */

void FUN_10045370c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100453398();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Address: 0x100453730 | thunk_FUN_100453734 */

void thunk_FUN_100453734(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc7818 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4bb78;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4bb78,&DAT_100ed62a8);
  DAT_100fc7818 = pTVar1;
  return;
}



/* Address: 0x100453734 | FUN_100453734 */

void FUN_100453734(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc7818 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4bb78;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4bb78,&DAT_100ed62a8);
  DAT_100fc7818 = pTVar1;
  return;
}



/* Address: 0x100453774 | FUN_100453774 */

void FUN_100453774(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100453438();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Address: 0x100453798 | thunk_FUN_10045379c */

void thunk_FUN_10045379c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc7820 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4bc4c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4bc4c,&DAT_100ed6218);
  DAT_100fc7820 = pTVar1;
  return;
}


