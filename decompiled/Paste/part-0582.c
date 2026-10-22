/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10066bb6c | FUN_10066bb6c */

bool FUN_10066bb6c(char *param_1,char param_2,char param_3)

{
  char cVar1;
  
  cVar1 = *param_1;
  if (cVar1 == param_2) {
    *param_1 = param_3;
  }
  return cVar1 == param_2;
}



/* Address: 0x10066bb80 | FUN_10066bb80 */

int FUN_10066bb80(char *param_1,char param_2)

{
  char cVar1;
  
  cVar1 = *param_1;
  *param_1 = cVar1 + param_2;
  return (int)cVar1;
}



/* Address: 0x10066bb8c | FUN_10066bb8c */

int FUN_10066bb8c(char *param_1,char param_2)

{
  char cVar1;
  
  cVar1 = *param_1;
  *param_1 = cVar1 - param_2;
  return (int)cVar1;
}



/* Address: 0x10066bb9c | FUN_10066bb9c */

int FUN_10066bb9c(char *param_1,char param_2)

{
  char cVar1;
  
  cVar1 = *param_1;
  *param_1 = param_2;
  return (int)cVar1;
}



/* Address: 0x10066bba8 | FUN_10066bba8 */

int FUN_10066bba8(char *param_1)

{
  return (int)*param_1;
}



/* Address: 0x10066bbb4 | FUN_10066bbb4 */

void FUN_10066bbb4(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  return;
}



/* Address: 0x10066bbbc | FUN_10066bbbc */

void FUN_10066bbbc(undefined1 param_1)

{
  undefined1 *puVar1;
  
  puVar1 = _malloc(1);
  *puVar1 = param_1;
  return;
}



/* Address: 0x10066bbe4 | _free */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _free(void *param_1)

{
  _free(param_1);
  return;
}



/* Address: 0x10066bbe8 | FUN_10066bbe8 */

bool FUN_10066bbe8(byte *param_1,uint param_2,byte param_3)

{
  byte bVar1;
  
  bVar1 = *param_1;
  if (bVar1 == (byte)param_2) {
    *param_1 = param_3;
  }
  return bVar1 == param_2;
}



/* Address: 0x10066bbfc | FUN_10066bbfc */

char FUN_10066bbfc(char *param_1,char param_2)

{
  char cVar1;
  
  cVar1 = *param_1;
  *param_1 = cVar1 + param_2;
  return cVar1;
}



/* Address: 0x10066bc04 | FUN_10066bc04 */

char FUN_10066bc04(char *param_1,char param_2)

{
  char cVar1;
  
  cVar1 = *param_1;
  *param_1 = cVar1 - param_2;
  return cVar1;
}



/* Address: 0x10066bc10 | FUN_10066bc10 */

undefined1 FUN_10066bc10(undefined1 *param_1,undefined1 param_2)

{
  undefined1 uVar1;
  
  uVar1 = *param_1;
  *param_1 = param_2;
  return uVar1;
}



/* Address: 0x10066bc18 | FUN_10066bc18 */

undefined1 FUN_10066bc18(undefined1 *param_1)

{
  return *param_1;
}



/* Address: 0x10066bc20 | FUN_10066bc20 */

void FUN_10066bc20(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  return;
}



/* Address: 0x10066bc28 | FUN_10066bc28 */

void FUN_10066bc28(undefined2 param_1)

{
  undefined2 *puVar1;
  
  puVar1 = _malloc(2);
  *puVar1 = param_1;
  return;
}



/* Address: 0x10066bc50 | _free */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _free(void *param_1)

{
  _free(param_1);
  return;
}



/* Address: 0x10066bc54 | FUN_10066bc54 */

bool FUN_10066bc54(short *param_1,short param_2,short param_3)

{
  short sVar1;
  
  sVar1 = *param_1;
  if (sVar1 == param_2) {
    *param_1 = param_3;
  }
  return sVar1 == param_2;
}



/* Address: 0x10066bc68 | FUN_10066bc68 */

int FUN_10066bc68(short *param_1,short param_2)

{
  short sVar1;
  
  sVar1 = *param_1;
  *param_1 = sVar1 + param_2;
  return (int)sVar1;
}



/* Address: 0x10066bc74 | FUN_10066bc74 */

int FUN_10066bc74(short *param_1,short param_2)

{
  short sVar1;
  
  sVar1 = *param_1;
  *param_1 = sVar1 - param_2;
  return (int)sVar1;
}



/* Address: 0x10066bc84 | FUN_10066bc84 */

int FUN_10066bc84(short *param_1,short param_2)

{
  short sVar1;
  
  sVar1 = *param_1;
  *param_1 = param_2;
  return (int)sVar1;
}



/* Address: 0x10066bc90 | FUN_10066bc90 */

int FUN_10066bc90(short *param_1)

{
  return (int)*param_1;
}



/* Address: 0x10066bc9c | FUN_10066bc9c */

void FUN_10066bc9c(undefined2 *param_1,undefined2 param_2)

{
  *param_1 = param_2;
  return;
}



/* Address: 0x10066bca4 | FUN_10066bca4 */

void FUN_10066bca4(undefined2 param_1)

{
  undefined2 *puVar1;
  
  puVar1 = _malloc(2);
  *puVar1 = param_1;
  return;
}



/* Address: 0x10066bccc | _free */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _free(void *param_1)

{
  _free(param_1);
  return;
}



/* Address: 0x10066bcd0 | FUN_10066bcd0 */

bool FUN_10066bcd0(ushort *param_1,uint param_2,ushort param_3)

{
  ushort uVar1;
  
  uVar1 = *param_1;
  if (uVar1 == (ushort)param_2) {
    *param_1 = param_3;
  }
  return uVar1 == param_2;
}



/* Address: 0x10066bce4 | FUN_10066bce4 */

short FUN_10066bce4(short *param_1,short param_2)

{
  short sVar1;
  
  sVar1 = *param_1;
  *param_1 = sVar1 + param_2;
  return sVar1;
}



/* Address: 0x10066bcec | FUN_10066bcec */

short FUN_10066bcec(short *param_1,short param_2)

{
  short sVar1;
  
  sVar1 = *param_1;
  *param_1 = sVar1 - param_2;
  return sVar1;
}



/* Address: 0x10066bcf8 | FUN_10066bcf8 */

undefined2 FUN_10066bcf8(undefined2 *param_1,undefined2 param_2)

{
  undefined2 uVar1;
  
  uVar1 = *param_1;
  *param_1 = param_2;
  return uVar1;
}



/* Address: 0x10066bd00 | FUN_10066bd00 */

undefined2 FUN_10066bd00(undefined2 *param_1)

{
  return *param_1;
}



/* Address: 0x10066bd08 | FUN_10066bd08 */

void FUN_10066bd08(undefined2 *param_1,undefined2 param_2)

{
  *param_1 = param_2;
  return;
}



/* Address: 0x10066bd10 | FUN_10066bd10 */

void FUN_10066bd10(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = _malloc(4);
  *puVar1 = param_1;
  return;
}



/* Address: 0x10066bd38 | _free */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _free(void *param_1)

{
  _free(param_1);
  return;
}



/* Address: 0x10066bd3c | FUN_10066bd3c */

bool FUN_10066bd3c(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == param_2) {
    *param_1 = param_3;
  }
  return iVar1 == param_2;
}



/* Address: 0x10066bd50 | FUN_10066bd50 */

int FUN_10066bd50(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + param_2;
  return iVar1;
}



/* Address: 0x10066bd58 | FUN_10066bd58 */

int FUN_10066bd58(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 - param_2;
  return iVar1;
}



/* Address: 0x10066bd64 | FUN_10066bd64 */

undefined4 FUN_10066bd64(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = param_2;
  return uVar1;
}



/* Address: 0x10066bd6c | FUN_10066bd6c */

undefined4 FUN_10066bd6c(undefined4 *param_1)

{
  return *param_1;
}



/* Address: 0x10066bd74 | FUN_10066bd74 */

void FUN_10066bd74(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}



/* Address: 0x10066bd7c | FUN_10066bd7c */

void FUN_10066bd7c(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = _malloc(4);
  *puVar1 = param_1;
  return;
}



/* Address: 0x10066bda4 | _free */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _free(void *param_1)

{
  _free(param_1);
  return;
}



/* Address: 0x10066bda8 | FUN_10066bda8 */

bool FUN_10066bda8(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == param_2) {
    *param_1 = param_3;
  }
  return iVar1 == param_2;
}



/* Address: 0x10066bdbc | FUN_10066bdbc */

int FUN_10066bdbc(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + param_2;
  return iVar1;
}



/* Address: 0x10066bdc4 | FUN_10066bdc4 */

int FUN_10066bdc4(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 - param_2;
  return iVar1;
}



/* Address: 0x10066bdd0 | FUN_10066bdd0 */

undefined4 FUN_10066bdd0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = param_2;
  return uVar1;
}



/* Address: 0x10066bdd8 | FUN_10066bdd8 */

undefined4 FUN_10066bdd8(undefined4 *param_1)

{
  return *param_1;
}



/* Address: 0x10066bde0 | FUN_10066bde0 */

void FUN_10066bde0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}



/* Address: 0x10066bde8 | FUN_10066bde8 */

void FUN_10066bde8(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  return;
}



/* Address: 0x10066bdf0 | FUN_10066bdf0 */

bool FUN_10066bdf0(byte *param_1,uint param_2,byte param_3)

{
  byte bVar1;
  
  bVar1 = *param_1;
  if (bVar1 == (byte)param_2) {
    *param_1 = param_3;
  }
  return bVar1 == param_2;
}



/* Address: 0x10066be04 | FUN_10066be04 */

byte FUN_10066be04(byte *param_1,char param_2)

{
  byte bVar1;
  
  bVar1 = *param_1;
  *param_1 = bVar1 + param_2;
  return bVar1 & 1;
}



/* Address: 0x10066be10 | FUN_10066be10 */

byte FUN_10066be10(byte *param_1,char param_2)

{
  byte bVar1;
  
  bVar1 = *param_1;
  *param_1 = bVar1 - param_2;
  return bVar1 & 1;
}



/* Address: 0x10066be20 | FUN_10066be20 */

byte FUN_10066be20(byte *param_1,byte param_2)

{
  byte bVar1;
  
  bVar1 = *param_1;
  *param_1 = param_2;
  return bVar1 & 1;
}



/* Address: 0x10066be2c | FUN_10066be2c */

undefined1 FUN_10066be2c(undefined1 *param_1)

{
  return *param_1;
}



/* Address: 0x10066be34 | FUN_10066be34 */

void FUN_10066be34(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  return;
}



/* Address: 0x10066be3c | FUN_10066be3c */

void FUN_10066be3c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}



/* Address: 0x10066be44 | FUN_10066be44 */

bool FUN_10066be44(long *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == param_2) {
    *param_1 = param_3;
  }
  return lVar1 == param_2;
}



/* Address: 0x10066be58 | FUN_10066be58 */

long FUN_10066be58(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = lVar1 + param_2;
  return lVar1;
}



/* Address: 0x10066be60 | FUN_10066be60 */

long FUN_10066be60(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = lVar1 - param_2;
  return lVar1;
}



/* Address: 0x10066be6c | FUN_10066be6c */

undefined8 FUN_10066be6c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = param_2;
  return uVar1;
}



/* Address: 0x10066be74 | FUN_10066be74 */

undefined8 FUN_10066be74(undefined8 *param_1)

{
  return *param_1;
}



/* Address: 0x10066be7c | FUN_10066be7c */

void FUN_10066be7c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}



/* Address: 0x10066be84 | FUN_10066be84 */

void FUN_10066be84(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}



/* Address: 0x10066be8c | FUN_10066be8c */

bool FUN_10066be8c(long *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == param_2) {
    *param_1 = param_3;
  }
  return lVar1 == param_2;
}



/* Address: 0x10066bea0 | FUN_10066bea0 */

long FUN_10066bea0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = lVar1 + param_2;
  return lVar1;
}



/* Address: 0x10066bea8 | FUN_10066bea8 */

long FUN_10066bea8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = lVar1 - param_2;
  return lVar1;
}


