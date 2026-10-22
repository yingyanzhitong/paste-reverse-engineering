/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1003f0ae4 | FUN_1003f0ae4 */

void FUN_1003f0ae4(void)

{
  FUN_1003f0808();
  return;
}



/* Address: 0x1003f0af8 | FUN_1003f0af8 */

void FUN_1003f0af8(void)

{
  FUN_1003f0610();
  return;
}



/* Address: 0x1003f0b0c | FUN_1003f0b0c */

undefined1  [16] FUN_1003f0b0c(void)

{
  return ZEXT816(0x100ed0b58);
}



/* Address: 0x1003f0b1c | FUN_1003f0b1c */

void FUN_1003f0b1c(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x38));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x40));
  _swift_release(*(undefined8 *)(param_1 + 0x50));
  return;
}



/* Address: 0x1003f0b64 | FUN_1003f0b64 */

undefined8 * FUN_1003f0b64(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  param_1[6] = param_2[6];
  uVar3 = param_2[8];
  uVar5 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar5;
  uVar4 = param_2[10];
  uVar6 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar6;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar3);
  _swift_retain(uVar4);
  return param_1;
}



/* Address: 0x1003f0c08 | FUN_1003f0c08 */

undefined8 * FUN_1003f0c08(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
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
  param_1[6] = param_2[6];
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[8];
  param_1[8] = param_2[8];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_1[10];
  uVar1 = param_2[10];
  uVar3 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar3;
  _swift_retain(uVar1);
  _swift_release(uVar2);
  return param_1;
}



/* Address: 0x1003f0ce8 | FUN_1003f0ce8 */

void FUN_1003f0ce8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
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
  uVar6 = param_2[9];
  uVar5 = param_2[8];
  param_1[10] = param_2[10];
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  param_1[9] = uVar6;
  param_1[8] = uVar5;
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  return;
}



/* Address: 0x1003f0d0c | FUN_1003f0d0c */

undefined8 * FUN_1003f0d0c(undefined8 *param_1,undefined8 *param_2)

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
  uVar2 = param_2[5];
  uVar1 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  param_1[6] = param_2[6];
  _swift_bridgeObjectRelease(param_1[7]);
  uVar2 = param_1[8];
  uVar1 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_1[10];
  uVar1 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar1;
  _swift_release(uVar2);
  return param_1;
}



/* Address: 0x1003f0d90 | FUN_1003f0d90 */

int FUN_1003f0d90(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x16] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x1003f0dd8 | FUN_1003f0dd8 */

void FUN_1003f0dd8(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
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
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 0xb) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 0xb) = 0;
    }
    if (param_2 != 0) {
      param_1[1] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x1003f0e2c | FUN_1003f0e2c */

undefined1  [16] FUN_1003f0e2c(void)

{
  return ZEXT816(0x100ed0bd0);
}



/* Address: 0x1003f0e3c | FUN_1003f0e3c */

long * FUN_1003f0e3c(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  URL UVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  code *pcVar14;
  ulong uVar15;
  long lVar16;
  
  uVar8 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar8 >> 0x11 & 1) == 0) {
    lVar16 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar16;
    lVar3 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar3;
    lVar4 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = lVar4;
    lVar5 = param_2[7];
    param_1[6] = param_2[6];
    param_1[7] = lVar5;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
    uVar6 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar6;
    uVar7 = puVar2[3];
    puVar1[2] = puVar2[2];
    puVar1[3] = uVar7;
    lVar10 = 0;
    FUN_1003efaa0();
    iVar9 = *(int *)(lVar10 + 0x18);
    UVar11 = Foundation::URL::typeMetadataAccessor();
    pcVar14 = *(code **)(*(long *)(UVar11.unknown + -8) + 0x10);
    _swift_bridgeObjectRetain(lVar16);
    _swift_bridgeObjectRetain(lVar3);
    _swift_bridgeObjectRetain(lVar4);
    _swift_bridgeObjectRetain(lVar5);
    _swift_bridgeObjectRetain(uVar6);
    _swift_bridgeObjectRetain(uVar7);
    (*pcVar14)((long)puVar1 + (long)iVar9,(long)puVar2 + (long)iVar9,UVar11.unknown);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
    lVar16 = *(long *)(lVar10 + -8);
    puVar12 = puVar2;
    (**(code **)(lVar16 + 0x30))(puVar2,1,lVar10);
    if ((int)puVar12 == 0) {
      uVar6 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar6;
      uVar6 = puVar2[3];
      puVar1[2] = puVar2[2];
      puVar1[3] = uVar6;
      iVar9 = *(int *)(lVar10 + 0x18);
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar6);
      (*pcVar14)((long)puVar1 + (long)iVar9,(long)puVar2 + (long)iVar9,UVar11.unknown);
      (**(code **)(lVar16 + 0x38))(puVar1,0,1,lVar10);
    }
    else {
      puVar13 = &DAT_100fc4090;
      FUN_1000037f0(&DAT_100fc4090,&DAT_100c464e0);
      _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar13 + -8) + 0x40));
    }
  }
  else {
    lVar16 = *param_2;
    *param_1 = lVar16;
    uVar15 = (ulong)uVar8 & 0xff;
    param_1 = (long *)(lVar16 + (uVar15 + 0x10 & (uVar15 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1003f1010 | FUN_1003f1010 */

void FUN_1003f1010(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  URL UVar3;
  long lVar4;
  code *UNRECOVERED_JUMPTABLE;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x38));
  lVar4 = param_1 + *(int *)(param_2 + 0x20);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0x18));
  lVar2 = 0;
  FUN_1003efaa0();
  iVar1 = *(int *)(lVar2 + 0x18);
  UVar3 = Foundation::URL::typeMetadataAccessor();
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(UVar3.unknown + -8) + 8);
  (*UNRECOVERED_JUMPTABLE)(lVar4 + iVar1,UVar3.unknown);
  param_1 = param_1 + *(int *)(param_2 + 0x24);
  lVar4 = param_1;
  (**(code **)(*(long *)(lVar2 + -8) + 0x30))(param_1,1,lVar2);
  if ((int)lVar4 != 0) {
    return;
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001003f110c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1 + *(int *)(lVar2 + 0x18),UVar3.unknown);
  return;
}



/* Address: 0x1003f1110 | FUN_1003f1110 */

undefined8 * FUN_1003f1110(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  URL UVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  long lVar13;
  code *pcVar14;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar3 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  uVar4 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar4;
  uVar5 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar5;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar11 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  uVar6 = puVar11[1];
  *puVar1 = *puVar11;
  puVar1[1] = uVar6;
  uVar7 = puVar11[3];
  puVar1[2] = puVar11[2];
  puVar1[3] = uVar7;
  lVar9 = 0;
  FUN_1003efaa0();
  iVar8 = *(int *)(lVar9 + 0x18);
  UVar10 = Foundation::URL::typeMetadataAccessor();
  pcVar14 = *(code **)(*(long *)(UVar10.unknown + -8) + 0x10);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar7);
  (*pcVar14)((long)puVar1 + (long)iVar8,(long)puVar11 + (long)iVar8,UVar10.unknown);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  lVar13 = *(long *)(lVar9 + -8);
  puVar11 = param_2;
  (**(code **)(lVar13 + 0x30))(param_2,1,lVar9);
  if ((int)puVar11 == 0) {
    uVar2 = param_2[1];
    *puVar1 = *param_2;
    puVar1[1] = uVar2;
    uVar2 = param_2[3];
    puVar1[2] = param_2[2];
    puVar1[3] = uVar2;
    iVar8 = *(int *)(lVar9 + 0x18);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar2);
    (*pcVar14)((long)puVar1 + (long)iVar8,(long)param_2 + (long)iVar8,UVar10.unknown);
    (**(code **)(lVar13 + 0x38))(puVar1,0,1,lVar9);
  }
  else {
    puVar12 = &DAT_100fc4090;
    FUN_1000037f0(&DAT_100fc4090,&DAT_100c464e0);
    _memcpy(puVar1,param_2,*(size_t *)(*(long *)(puVar12 + -8) + 0x40));
  }
  return param_1;
}



/* Address: 0x1003f12b0 | FUN_1003f12b0 */

undefined8 * FUN_1003f12b0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  URL UVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  
  *param_1 = *param_2;
  uVar8 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar8);
  param_1[2] = param_2[2];
  uVar8 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar8);
  param_1[4] = param_2[4];
  uVar8 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar8);
  param_1[6] = param_2[6];
  uVar8 = param_1[7];
  param_1[7] = param_2[7];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar8);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar5 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  *puVar1 = *puVar5;
  uVar8 = puVar1[1];
  puVar1[1] = puVar5[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar8);
  puVar1[2] = puVar5[2];
  uVar8 = puVar1[3];
  puVar1[3] = puVar5[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar8);
  lVar3 = 0;
  FUN_1003efaa0();
  iVar2 = *(int *)(lVar3 + 0x18);
  UVar4 = Foundation::URL::typeMetadataAccessor();
  lVar11 = *(long *)(UVar4.unknown + -8);
  pcVar9 = *(code **)(lVar11 + 0x18);
  (*pcVar9)((long)puVar1 + (long)iVar2,(long)puVar5 + (long)iVar2,UVar4.unknown);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  lVar10 = *(long *)(lVar3 + -8);
  pcVar12 = *(code **)(lVar10 + 0x30);
  puVar5 = puVar1;
  (*pcVar12)(puVar1,1,lVar3);
  puVar6 = param_2;
  (*pcVar12)(param_2,1,lVar3);
  if ((int)puVar5 == 0) {
    if ((int)puVar6 == 0) {
      *puVar1 = *param_2;
      uVar8 = puVar1[1];
      puVar1[1] = param_2[1];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(uVar8);
      puVar1[2] = param_2[2];
      uVar8 = puVar1[3];
      puVar1[3] = param_2[3];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(uVar8);
      (*pcVar9)((long)puVar1 + (long)*(int *)(lVar3 + 0x18),
                (long)param_2 + (long)*(int *)(lVar3 + 0x18),UVar4.unknown);
      return param_1;
    }
    FUN_10005241c(puVar1,FUN_1003efaa0);
  }
  else if ((int)puVar6 == 0) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    puVar1[2] = param_2[2];
    uVar8 = param_2[3];
    puVar1[3] = uVar8;
    iVar2 = *(int *)(lVar3 + 0x18);
    pcVar9 = *(code **)(lVar11 + 0x10);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar8);
    (*pcVar9)((long)puVar1 + (long)iVar2,(long)param_2 + (long)iVar2,UVar4.unknown);
    (**(code **)(lVar10 + 0x38))(puVar1,0,1,lVar3);
    return param_1;
  }
  puVar7 = &DAT_100fc4090;
  FUN_1000037f0(&DAT_100fc4090,&DAT_100c464e0);
  _memcpy(puVar1,param_2,*(size_t *)(*(long *)(puVar7 + -8) + 0x40));
  return param_1;
}



/* Address: 0x1003f152c | FUN_1003f152c */

undefined8 * FUN_1003f152c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  URL UVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  code *pcVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar9 = *param_2;
  uVar11 = param_2[3];
  uVar10 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar9;
  param_1[3] = uVar11;
  param_1[2] = uVar10;
  uVar9 = param_2[4];
  uVar11 = param_2[7];
  uVar10 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar9;
  param_1[7] = uVar11;
  param_1[6] = uVar10;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar5 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  uVar9 = *puVar5;
  uVar11 = puVar5[3];
  uVar10 = puVar5[2];
  puVar1[1] = puVar5[1];
  *puVar1 = uVar9;
  puVar1[3] = uVar11;
  puVar1[2] = uVar10;
  lVar3 = 0;
  FUN_1003efaa0();
  iVar2 = *(int *)(lVar3 + 0x18);
  UVar4 = Foundation::URL::typeMetadataAccessor();
  pcVar7 = *(code **)(*(long *)(UVar4.unknown + -8) + 0x20);
  (*pcVar7)((long)puVar1 + (long)iVar2,(long)puVar5 + (long)iVar2,UVar4.unknown);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  lVar8 = *(long *)(lVar3 + -8);
  puVar5 = param_2;
  (**(code **)(lVar8 + 0x30))(param_2,1,lVar3);
  if ((int)puVar5 == 0) {
    uVar9 = *param_2;
    uVar11 = param_2[3];
    uVar10 = param_2[2];
    puVar1[1] = param_2[1];
    *puVar1 = uVar9;
    puVar1[3] = uVar11;
    puVar1[2] = uVar10;
    (*pcVar7)((long)puVar1 + (long)*(int *)(lVar3 + 0x18),
              (long)param_2 + (long)*(int *)(lVar3 + 0x18),UVar4.unknown);
    (**(code **)(lVar8 + 0x38))(puVar1,0,1,lVar3);
  }
  else {
    puVar6 = &DAT_100fc4090;
    FUN_1000037f0(&DAT_100fc4090,&DAT_100c464e0);
    _memcpy(puVar1,param_2,*(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
  return param_1;
}



/* Address: 0x1003f1654 | FUN_1003f1654 */

undefined8 * FUN_1003f1654(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  URL UVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar13 = param_2[1];
  uVar3 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar13;
  _swift_bridgeObjectRelease(uVar3);
  uVar13 = param_2[3];
  uVar3 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar13;
  _swift_bridgeObjectRelease(uVar3);
  uVar13 = param_2[5];
  uVar3 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar13;
  _swift_bridgeObjectRelease(uVar3);
  uVar13 = param_2[7];
  uVar3 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar13;
  _swift_bridgeObjectRelease(uVar3);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar6 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  uVar13 = puVar6[1];
  uVar3 = puVar1[1];
  *puVar1 = *puVar6;
  puVar1[1] = uVar13;
  _swift_bridgeObjectRelease(uVar3);
  uVar13 = puVar6[3];
  uVar3 = puVar1[3];
  puVar1[2] = puVar6[2];
  puVar1[3] = uVar13;
  _swift_bridgeObjectRelease(uVar3);
  lVar4 = 0;
  FUN_1003efaa0();
  iVar2 = *(int *)(lVar4 + 0x18);
  UVar5 = Foundation::URL::typeMetadataAccessor();
  lVar10 = *(long *)(UVar5.unknown + -8);
  pcVar9 = *(code **)(lVar10 + 0x28);
  (*pcVar9)((long)puVar1 + (long)iVar2,(long)puVar6 + (long)iVar2,UVar5.unknown);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  lVar11 = *(long *)(lVar4 + -8);
  pcVar12 = *(code **)(lVar11 + 0x30);
  puVar6 = puVar1;
  (*pcVar12)(puVar1,1,lVar4);
  puVar7 = param_2;
  (*pcVar12)(param_2,1,lVar4);
  if ((int)puVar6 == 0) {
    if ((int)puVar7 == 0) {
      uVar13 = param_2[1];
      uVar3 = puVar1[1];
      *puVar1 = *param_2;
      puVar1[1] = uVar13;
      _swift_bridgeObjectRelease(uVar3);
      uVar13 = param_2[3];
      uVar3 = puVar1[3];
      puVar1[2] = param_2[2];
      puVar1[3] = uVar13;
      _swift_bridgeObjectRelease(uVar3);
      (*pcVar9)((long)puVar1 + (long)*(int *)(lVar4 + 0x18),
                (long)param_2 + (long)*(int *)(lVar4 + 0x18),UVar5.unknown);
      return param_1;
    }
    FUN_10005241c(puVar1,FUN_1003efaa0);
  }
  else if ((int)puVar7 == 0) {
    uVar13 = *param_2;
    uVar14 = param_2[3];
    uVar3 = param_2[2];
    puVar1[1] = param_2[1];
    *puVar1 = uVar13;
    puVar1[3] = uVar14;
    puVar1[2] = uVar3;
    (**(code **)(lVar10 + 0x20))
              ((long)puVar1 + (long)*(int *)(lVar4 + 0x18),
               (long)param_2 + (long)*(int *)(lVar4 + 0x18),UVar5.unknown);
    (**(code **)(lVar11 + 0x38))(puVar1,0,1,lVar4);
    return param_1;
  }
  puVar8 = &DAT_100fc4090;
  FUN_1000037f0(&DAT_100fc4090,&DAT_100c464e0);
  _memcpy(puVar1,param_2,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
  return param_1;
}



/* Address: 0x1003f182c | FUN_1003f182c */

void FUN_1003f182c(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1003f1838 | FUN_1003f1838 */

ulong FUN_1003f1838(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  
  if ((int)param_2 == 0x7fffffff) {
    uVar3 = *(ulong *)(param_1 + 8);
    if (0xfffffffe < uVar3) {
      uVar3 = 0xffffffff;
    }
    return (ulong)((int)uVar3 + 1);
  }
  puVar2 = (undefined *)0x0;
  FUN_1003efaa0();
  lVar4 = *(long *)(puVar2 + -8);
  if ((int)param_2 == *(int *)(lVar4 + 0x54)) {
    iVar1 = *(int *)(param_3 + 0x20);
  }
  else {
    puVar2 = &DAT_100fc4090;
    FUN_1000037f0(&DAT_100fc4090,&DAT_100c464e0);
    lVar4 = *(long *)(puVar2 + -8);
    iVar1 = *(int *)(param_3 + 0x24);
  }
  uVar3 = param_1 + iVar1;
                    /* WARNING: Could not recover jumptable at 0x0001003f18e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 0x30))(uVar3,param_2,puVar2);
  return uVar3;
}



/* Address: 0x1003f18e4 | FUN_1003f18e4 */

void FUN_1003f18e4(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1003f18f0 | FUN_1003f18f0 */

void FUN_1003f18f0(long param_1,undefined8 param_2,int param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  if (param_3 == 0x7fffffff) {
    *(ulong *)(param_1 + 8) = (ulong)((int)param_2 - 1);
    return;
  }
  puVar2 = (undefined *)0x0;
  FUN_1003efaa0();
  lVar3 = *(long *)(puVar2 + -8);
  if (param_3 == *(int *)(lVar3 + 0x54)) {
    iVar1 = *(int *)(param_4 + 0x20);
  }
  else {
    puVar2 = &DAT_100fc4090;
    FUN_1000037f0(&DAT_100fc4090,&DAT_100c464e0);
    lVar3 = *(long *)(puVar2 + -8);
    iVar1 = *(int *)(param_4 + 0x24);
  }
                    /* WARNING: Could not recover jumptable at 0x0001003f1994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x38))(param_1 + iVar1,param_2,param_2,puVar2);
  return;
}



/* Address: 0x1003f1998 | FUN_1003f1998 */

void FUN_1003f1998(long param_1,ulong param_2)

{
  long lVar1;
  undefined *local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  long local_30;
  long local_28;
  
  local_50 = &DAT_100c46658;
  puStack_48 = &DAT_100c46658;
  local_40 = &DAT_100c46658;
  puStack_38 = &DAT_100c46670;
  lVar1 = 0x13f;
  FUN_1003efaa0();
  if (param_2 < 0x40) {
    local_30 = *(long *)(lVar1 + -8) + 0x40;
    lVar1 = 0x13f;
    FUN_1003f1a34();
    if (param_2 < 0x40) {
      local_28 = *(long *)(lVar1 + -8) + 0x40;
      _swift_initStructMetadata(param_1,0x100,6,&local_50,param_1 + 0x10);
    }
  }
  return;
}



/* Address: 0x1003f1a34 | FUN_1003f1a34 */

void FUN_1003f1a34(void)

{
  Optional OVar1;
  long lVar2;
  undefined7 extraout_var;
  
  if (DAT_100fc4160 == 0) {
    lVar2 = 0xff;
    FUN_1003efaa0();
    OVar1 = Swift::Optional::typeMetadataAccessor();
    if (lVar2 == 0) {
      DAT_100fc4160 = CONCAT71(extraout_var,OVar1.value);
    }
  }
  return;
}



/* Address: 0x1003f1a88 | FUN_1003f1a88 */

long * FUN_1003f1a88(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  URL UVar4;
  long lVar5;
  ulong uVar6;
  code *pcVar7;
  
  uVar2 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar2 >> 0x11 & 1) == 0) {
    lVar5 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar5;
    lVar1 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar1;
    iVar3 = *(int *)(param_3 + 0x18);
    UVar4 = Foundation::URL::typeMetadataAccessor();
    pcVar7 = *(code **)(*(long *)(UVar4.unknown + -8) + 0x10);
    _swift_bridgeObjectRetain(lVar5);
    _swift_bridgeObjectRetain(lVar1);
    (*pcVar7)((long)param_1 + (long)iVar3,(long)param_2 + (long)iVar3,UVar4.unknown);
  }
  else {
    lVar5 = *param_2;
    *param_1 = lVar5;
    uVar6 = (ulong)uVar2 & 0xff;
    param_1 = (long *)(lVar5 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1003f1b38 | FUN_1003f1b38 */

void FUN_1003f1b38(long param_1,long param_2)

{
  int iVar1;
  URL UVar2;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  iVar1 = *(int *)(param_2 + 0x18);
  UVar2 = Foundation::URL::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001003f1b80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(UVar2.unknown + -8) + 8))(param_1 + iVar1,UVar2.unknown);
  return;
}



/* Address: 0x1003f1b84 | FUN_1003f1b84 */

undefined8 * FUN_1003f1b84(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  URL UVar4;
  code *pcVar5;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  iVar3 = *(int *)(param_3 + 0x18);
  UVar4 = Foundation::URL::typeMetadataAccessor();
  pcVar5 = *(code **)(*(long *)(UVar4.unknown + -8) + 0x10);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  (*pcVar5)((long)param_1 + (long)iVar3,(long)param_2 + (long)iVar3,UVar4.unknown);
  return param_1;
}



/* Address: 0x1003f1c08 | FUN_1003f1c08 */

undefined8 * FUN_1003f1c08(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  URL UVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar3 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  param_1[2] = param_2[2];
  uVar3 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  iVar1 = *(int *)(param_3 + 0x18);
  UVar2 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar2.unknown + -8) + 0x18))
            ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,UVar2.unknown);
  return param_1;
}



/* Address: 0x1003f1c9c | FUN_1003f1c9c */

undefined8 * FUN_1003f1c9c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  URL UVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = *param_2;
  uVar5 = param_2[3];
  uVar4 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  iVar1 = *(int *)(param_3 + 0x18);
  UVar2 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar2.unknown + -8) + 0x20))
            ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,UVar2.unknown);
  return param_1;
}



/* Address: 0x1003f1cf4 | FUN_1003f1cf4 */

undefined8 * FUN_1003f1cf4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  URL UVar4;
  
  uVar1 = param_2[1];
  uVar3 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar3);
  uVar1 = param_2[3];
  uVar3 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar3);
  iVar2 = *(int *)(param_3 + 0x18);
  UVar4 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar4.unknown + -8) + 0x28))
            ((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,UVar4.unknown);
  return param_1;
}



/* Address: 0x1003f1d68 | FUN_1003f1d68 */

void FUN_1003f1d68(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1003f1d74 | FUN_1003f1d74 */

ulong FUN_1003f1d74(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  URL UVar2;
  ulong uVar3;
  
  if ((int)param_2 == 0x7ffffffe) {
    uVar3 = *(ulong *)(param_1 + 8);
    if (0xfffffffe < uVar3) {
      uVar3 = 0xffffffff;
    }
    uVar1 = (int)uVar3 - 1;
    if (0x7fffffff < uVar1) {
      uVar1 = 0xffffffff;
    }
    return (ulong)(uVar1 + 1);
  }
  UVar2 = Foundation::URL::typeMetadataAccessor();
  uVar3 = param_1 + *(int *)(param_3 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001003f1df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(UVar2.unknown + -8) + 0x30))(uVar3,param_2,UVar2.unknown);
  return uVar3;
}



/* Address: 0x1003f1dfc | FUN_1003f1dfc */

void FUN_1003f1dfc(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1003f1e08 | FUN_1003f1e08 */

void FUN_1003f1e08(long param_1,ulong param_2,int param_3,long param_4)

{
  URL UVar1;
  
  if (param_3 == 0x7ffffffe) {
    *(ulong *)(param_1 + 8) = param_2 & 0xffffffff;
    return;
  }
  UVar1 = Foundation::URL::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001003f1e78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(UVar1.unknown + -8) + 0x38))
            (param_1 + *(int *)(param_4 + 0x18),param_2,param_2,UVar1.unknown);
  return;
}



/* Address: 0x1003f1e7c | FUN_1003f1e7c */

undefined1  [16] FUN_1003f1e7c(long param_1,ulong param_2)

{
  URL UVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined *local_38;
  undefined *puStack_30;
  long local_28;
  
  local_38 = &DAT_100c46670;
  puStack_30 = &DAT_100c46670;
  UVar1 = Foundation::URL::typeMetadataAccessor();
  if (param_2 < 0x40) {
    local_28 = *(long *)(UVar1.unknown + -8) + 0x40;
    _swift_initStructMetadata(param_1,0x100,3,&local_38,param_1 + 0x10);
    UVar1.unknown = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    uVar2 = 0x3f;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = UVar1.unknown;
  return auVar3;
}



/* Address: 0x1003f1ef0 | FUN_1003f1ef0 */

undefined1  [16] FUN_1003f1ef0(void)

{
  return ZEXT816(0x100ed0c78);
}



/* Address: 0x1003f1f00 | FUN_1003f1f00 */

undefined1  [16] FUN_1003f1f00(void)

{
  return ZEXT816(0x100ed0d08);
}



/* Address: 0x1003f1f10 | thunk_FUN_1003f1f14 */

void thunk_FUN_1003f1f14(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc4238 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4672c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4672c,&DAT_100ed0d08);
  DAT_100fc4238 = pTVar1;
  return;
}



/* Address: 0x1003f1f14 | FUN_1003f1f14 */

void FUN_1003f1f14(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc4238 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4672c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4672c,&DAT_100ed0d08);
  DAT_100fc4238 = pTVar1;
  return;
}



/* Address: 0x1003f1f54 | thunk_FUN_1003f1f58 */

void thunk_FUN_1003f1f58(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc4240 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c467e4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c467e4,&DAT_100ed0c78);
  DAT_100fc4240 = pTVar1;
  return;
}



/* Address: 0x1003f1f58 | FUN_1003f1f58 */

void FUN_1003f1f58(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc4240 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c467e4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c467e4,&DAT_100ed0c78);
  DAT_100fc4240 = pTVar1;
  return;
}



/* Address: 0x1003f1f98 | thunk_FUN_1003f1f9c */

void thunk_FUN_1003f1f9c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc4248 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4677c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4677c,&DAT_100ed0c78);
  DAT_100fc4248 = pTVar1;
  return;
}



/* Address: 0x1003f1f9c | FUN_1003f1f9c */

void FUN_1003f1f9c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc4248 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4677c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4677c,&DAT_100ed0c78);
  DAT_100fc4248 = pTVar1;
  return;
}



/* Address: 0x1003f1fdc | thunk_FUN_1003f1fe0 */

void thunk_FUN_1003f1fe0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc4250 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c46754;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c46754,&DAT_100ed0c78);
  DAT_100fc4250 = pTVar1;
  return;
}



/* Address: 0x1003f1fe0 | FUN_1003f1fe0 */

void FUN_1003f1fe0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc4250 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c46754;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c46754,&DAT_100ed0c78);
  DAT_100fc4250 = pTVar1;
  return;
}



/* Address: 0x1003f2020 | thunk_FUN_1003f2024 */

void thunk_FUN_1003f2024(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc4258 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c466c4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c466c4,&DAT_100ed0d08);
  DAT_100fc4258 = pTVar1;
  return;
}



/* Address: 0x1003f2024 | FUN_1003f2024 */

void FUN_1003f2024(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc4258 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c466c4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c466c4,&DAT_100ed0d08);
  DAT_100fc4258 = pTVar1;
  return;
}



/* Address: 0x1003f2064 | thunk_FUN_1003f2068 */

void thunk_FUN_1003f2068(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc4260 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4669c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4669c,&DAT_100ed0d08);
  DAT_100fc4260 = pTVar1;
  return;
}



/* Address: 0x1003f2068 | FUN_1003f2068 */

void FUN_1003f2068(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc4260 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4669c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4669c,&DAT_100ed0d08);
  DAT_100fc4260 = pTVar1;
  return;
}



/* Address: 0x1003f20a8 | FUN_1003f20a8 */

undefined4 FUN_1003f20a8(undefined1 *param_1,undefined1 *param_2)

{
  bool bVar1;
  _StringComparisonResult expecting;
  
  if (param_1 != &SUB_00006469 || param_2 != &SUB_e200000000000000) {
    expecting.value = (__int8)param_1;
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x6469,(_StringGuts)0xe200000000000000,expecting);
    if (!bVar1) {
      if (((param_1 == (undefined1 *)0x6c6f626d7973) && (param_2 == &DAT_e600000000000000)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x6c6f626d7973,(_StringGuts)0xe600000000000000,expecting),
         bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 1;
      }
      if (((param_1 != (undefined1 *)0x656c746974) || (param_2 != &DAT_e500000000000000)) &&
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x656c746974,(_StringGuts)0xe500000000000000,expecting),
         !bVar1)) {
        if (((param_1 != (undefined1 *)0x7470697263736564) || (param_2 != &DAT_eb000000006e6f69)) &&
           (bVar1 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)0x7470697263736564,(_StringGuts)0xeb000000006e6f69,
                               expecting), !bVar1)) {
          if (((param_1 != (undefined1 *)0x417972616d697270) ||
              (param_2 != (undefined1 *)0xed00006e6f697463)) &&
             (bVar1 = Swift::_stringCompareWithSmolCheck
                                ((_StringGuts)0x417972616d697270,(_StringGuts)0xed00006e6f697463,
                                 expecting), !bVar1)) {
            if ((param_1 == (undefined1 *)0x7261646e6f636573) &&
               (param_2 == (undefined1 *)0xef6e6f6974634179)) {
              _swift_bridgeObjectRelease(0xef6e6f6974634179);
              return 5;
            }
            bVar1 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)0x7261646e6f636573,(_StringGuts)0xef6e6f6974634179,
                               expecting);
            _swift_bridgeObjectRelease(param_2);
            if (bVar1) {
              return 5;
            }
            return 6;
          }
          _swift_bridgeObjectRelease(param_2);
          return 4;
        }
        _swift_bridgeObjectRelease(param_2);
        return 3;
      }
      _swift_bridgeObjectRelease(param_2);
      return 2;
    }
  }
  _swift_bridgeObjectRelease(param_2);
  return 0;
}



/* Address: 0x1003f22a4 | FUN_1003f22a4 */

undefined4 FUN_1003f22a4(long param_1,undefined1 *param_2)

{
  bool bVar1;
  _StringComparisonResult expecting;
  
  if (param_1 != 0x6c6f626d7973 || param_2 != &DAT_e600000000000000) {
    expecting.value = (__int8)param_1;
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x6c6f626d7973,(_StringGuts)0xe600000000000000,expecting);
    if (!bVar1) {
      if (((param_1 != 0x656c746974) || (param_2 != &DAT_e500000000000000)) &&
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x656c746974,(_StringGuts)0xe500000000000000,expecting),
         !bVar1)) {
        if ((param_1 == 0x6c7275) && (param_2 == (undefined1 *)0xe300000000000000)) {
          _swift_bridgeObjectRelease(0xe300000000000000);
          return 2;
        }
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x6c7275,(_StringGuts)0xe300000000000000,expecting);
        _swift_bridgeObjectRelease(param_2);
        if (bVar1) {
          return 2;
        }
        return 3;
      }
      _swift_bridgeObjectRelease(param_2);
      return 1;
    }
  }
  _swift_bridgeObjectRelease(param_2);
  return 0;
}



/* Address: 0x1003f23b0 | FUN_1003f23b0 */

void FUN_1003f23b0(void)

{
  long unaff_x20;
  
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 &
               **(ulong **)(unaff_x20 + _TtC11PasteCoreUI8BaseCell::contentView)) + 0x58))();
  return;
}



/* Address: 0x1003f23f0 | FUN_1003f23f0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1003f23f0(ID param_1)

{
  ID IVar1;
  ID unaff_x20;
  
  IVar1 = param_1;
  if (param_1 == 0) {
    IVar1 = NSColor::clearColor((ID)&_OBJC_CLASS___NSColor);
  }
  FUN_1003f24a8(0);
  FUN_10021a014(IVar1);
  objc_stub::setAppearance_(unaff_x20,IVar1);
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 &
               **(ulong **)(unaff_x20 + _TtC11PasteCoreUI8BaseCell::contentView)) + 0x60))(param_1);
  return;
}



/* Address: 0x1003f24a8 | FUN_1003f24a8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_1003f24a8(void)

{
  undefined *puVar1;
  
  if (DAT_100fc3128 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___NSAppearance;
  _swift_getObjCClassMetadata();
  DAT_100fc3128 = puVar1;
  return;
}



/* Address: 0x1003f24ec | FUN_1003f24ec */

undefined1  [16] FUN_1003f24ec(long *param_1)

{
  long *plVar1;
  ulong *puVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  puVar2 = *(ulong **)(unaff_x20 + _TtC11PasteCoreUI8BaseCell::contentView);
  param_1[1] = unaff_x20;
  param_1[2] = (long)puVar2;
  plVar1 = param_1;
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *puVar2) + 0x58))();
  *param_1 = (long)plVar1;
  auVar3._8_8_ = param_1;
  auVar3._0_8_ = FUN_1003f2548;
  return auVar3;
}



/* Address: 0x1003f2548 | FUN_1003f2548 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_1003f2548(ID *param_1,uint param_2)

{
  ID IVar1;
  ulong *puVar2;
  ID IVar3;
  ID IVar4;
  
  IVar4 = *param_1;
  if ((param_2 & 1) == 0) {
    IVar3 = IVar4;
    if (IVar4 == 0) {
      IVar3 = NSColor::clearColor((ID)&_OBJC_CLASS___NSColor);
    }
    IVar1 = param_1[1];
    puVar2 = (ulong *)param_1[2];
    FUN_1003f24a8(0);
    FUN_10021a014(IVar3);
    objc_stub::setAppearance_(IVar1,IVar3);
    (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *puVar2) + 0x60))(IVar4);
    return IVar4;
  }
  IVar3 = IVar4;
  if (IVar4 == 0) {
    IVar3 = NSColor::clearColor((ID)&_OBJC_CLASS___NSColor);
  }
  IVar1 = param_1[1];
  puVar2 = (ulong *)param_1[2];
  FUN_1003f24a8(0);
  FUN_10021a014(IVar3);
  objc_stub::setAppearance_(IVar1,IVar3);
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *puVar2) + 0x60))(IVar4);
  return 0;
}



/* Address: 0x1003f26c4 | FUN_1003f26c4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003f26c4(void)

{
  bool bVar1;
  byte bVar2;
  undefined *self;
  undefined8 *self_00;
  undefined8 *puVar3;
  ID unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  self = &_OBJC_CLASS___NSShadow;
  _objc_allocWithZone();
  self_00 = (undefined8 *)objc_stub::init((ID)self);
  puVar3 = self_00;
  FUN_1001fe2f8();
  uVar4 = *puVar3;
  bVar2 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
  bVar1 = (bVar2 & 1) == 0;
  uVar5 = 0x3fb47ae147ae147b;
  if (bVar1) {
    uVar5 = 0x3fb999999999999a;
  }
  uVar6 = 0;
  if (bVar1) {
    uVar6 = 0xbff0000000000000;
  }
  FUN_1002067b8(uVar5,uVar4);
  objc_stub::FUN_100c0da40((ID)self_00,uVar4);
  objc_stub::FUN_100c0da60((ID)self_00,0,uVar6);
  objc_stub::FUN_100c0da20((ID)self_00,0x4000000000000000);
  objc_stub::FUN_100c0da00(unaff_x20,self_00);
  return 0;
}



/* Address: 0x1003f27b4 | FUN_1003f27b4 */

undefined1 FUN_1003f27b4(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _TtC11PasteCoreUI8BaseCell::isSelected;
  _swift_beginAccess(unaff_x20 + _TtC11PasteCoreUI8BaseCell::isSelected,auStack_38,0,0);
  return *(undefined1 *)(unaff_x20 + lVar1);
}



/* Address: 0x1003f27f4 | FUN_1003f27f4 */

void FUN_1003f27f4(undefined8 param_1)

{
  FUN_1003f2894(param_1,&_TtC11PasteCoreUI8BaseCell::isSelected);
  return;
}



/* Address: 0x1003f2800 | FUN_1003f2800 */

undefined1  [16] FUN_1003f2800(long param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  *(long *)(param_1 + 0x18) = unaff_x20;
  lVar1 = _TtC11PasteCoreUI8BaseCell::isSelected;
  _swift_beginAccess(unaff_x20 + _TtC11PasteCoreUI8BaseCell::isSelected,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = thunk_FUN_1003f29d0;
  return auVar2;
}



/* Address: 0x1003f2844 | thunk_FUN_1003f29d0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void thunk_FUN_1003f29d0(ulong param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  code *pcVar5;
  
  uVar2 = param_1;
  _swift_endAccess();
  puVar1 = PTR__swift_isaMask_100eae3b0;
  if ((param_2 & 1) == 0) {
    puVar4 = *(ulong **)
              ((long)*(ulong **)(param_1 + 0x18) + _TtC11PasteCoreUI8BaseCell::selectionView);
    pcVar5 = *(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & **(ulong **)(param_1 + 0x18)) +
                       0xa8);
    (*pcVar5)();
    if (((uVar2 & 1) == 0) ||
       ((**(code **)((*(ulong *)puVar1 & **(ulong **)(param_1 + 0x18)) + 0xc0))(), (uVar2 & 1) == 0)
       ) {
      (*pcVar5)();
      if ((uVar2 & 1) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined8 *)
                 (*(long *)(param_1 + 0x18) + _TtC11PasteCoreUI8BaseCell::selectionColor);
      }
    }
    else {
      uVar3 = *(undefined8 *)
               (*(long *)(param_1 + 0x18) + _TtC11PasteCoreUI8BaseCell::selectionColor);
      FUN_100218b08(uVar3);
    }
    (**(code **)((*(ulong *)puVar1 & *puVar4) + 0x60))(uVar3);
  }
  return;
}



/* Address: 0x1003f2848 | FUN_1003f2848 */

undefined1 FUN_1003f2848(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _TtC11PasteCoreUI8BaseCell::isDimmed;
  _swift_beginAccess(unaff_x20 + _TtC11PasteCoreUI8BaseCell::isDimmed,auStack_38,0,0);
  return *(undefined1 *)(unaff_x20 + lVar1);
}



/* Address: 0x1003f2888 | FUN_1003f2888 */

void FUN_1003f2888(undefined8 param_1)

{
  FUN_1003f2894(param_1,&_TtC11PasteCoreUI8BaseCell::isDimmed);
  return;
}



/* Address: 0x1003f2894 | FUN_1003f2894 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003f2894(undefined1 param_1,long *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong *unaff_x20;
  long lVar5;
  code *pcVar6;
  undefined1 auStack_48 [24];
  
  lVar5 = *param_2;
  uVar2 = (long)unaff_x20 + lVar5;
  _swift_beginAccess(uVar2,auStack_48,1,0);
  *(undefined1 *)((long)unaff_x20 + lVar5) = param_1;
  puVar1 = PTR__swift_isaMask_100eae3b0;
  puVar4 = *(ulong **)((long)unaff_x20 + _TtC11PasteCoreUI8BaseCell::selectionView);
  pcVar6 = *(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0xa8);
  (*pcVar6)();
  if (((uVar2 & 1) == 0) ||
     ((**(code **)((*(ulong *)puVar1 & *unaff_x20) + 0xc0))(), (uVar2 & 1) == 0)) {
    (*pcVar6)();
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)((long)unaff_x20 + _TtC11PasteCoreUI8BaseCell::selectionColor);
    }
  }
  else {
    uVar3 = *(undefined8 *)((long)unaff_x20 + _TtC11PasteCoreUI8BaseCell::selectionColor);
    FUN_100218b08(uVar3);
  }
  (**(code **)((*(ulong *)puVar1 & *puVar4) + 0x60))(uVar3);
  return;
}



/* Address: 0x1003f298c | FUN_1003f298c */

undefined1  [16] FUN_1003f298c(long param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  *(long *)(param_1 + 0x18) = unaff_x20;
  lVar1 = _TtC11PasteCoreUI8BaseCell::isDimmed;
  _swift_beginAccess(unaff_x20 + _TtC11PasteCoreUI8BaseCell::isDimmed,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = thunk_FUN_1003f29d0;
  return auVar2;
}


