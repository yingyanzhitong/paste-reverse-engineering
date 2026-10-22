/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1003753f8 | FUN_1003753f8 */

void FUN_1003753f8(void)

{
  long unaff_x20;
  
  FUN_100372440(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined1 *)(unaff_x20 + 0x30));
  return;
}



/* Address: 0x100375408 | FUN_100375408 */

void FUN_100375408(void)

{
  FUN_100375410(0x30);
  return;
}



/* Address: 0x100375410 | FUN_100375410 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100375410(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x100375458 | FUN_100375458 */

void FUN_100375458(void)

{
  long unaff_x20;
  
  FUN_100371f2c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x100375464 | FUN_100375464 */

void FUN_100375464(void)

{
  long unaff_x20;
  
  FUN_100371fd4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x100375480 | FUN_100375480 */

void FUN_100375480(void)

{
  long unaff_x20;
  
  FUN_1003724f0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined1 *)(unaff_x20 + 0x30));
  return;
}



/* Address: 0x1003754a0 | FUN_1003754a0 */

void FUN_1003754a0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc14c0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c43528;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c43528,&DAT_100ecd430);
  DAT_100fc14c0 = pTVar1;
  return;
}



/* Address: 0x1003754e0 | FUN_1003754e0 */

void FUN_1003754e0(void)

{
  undefined *puVar1;
  
  if (DAT_100fc14c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift____int64_>Swift__BinaryInteger_100eac738;
  _swift_getWitnessTable
            (PTR_Swift____int64_>Swift__BinaryInteger_100eac738,
             PTR___type_metadata_for_Swift_Int_100eac6f8);
  DAT_100fc14c8 = puVar1;
  return;
}



/* Address: 0x100375520 | FUN_100375520 */

void FUN_100375520(void)

{
  Date DVar1;
  undefined *puVar2;
  
  if (DAT_100fc14d0 != (undefined *)0x0) {
    return;
  }
  DVar1 = Foundation::Date::typeMetadataAccessor();
  puVar2 = PTR_Foundation__Foundation__Date_>Swift__CustomStringConvertible_100ea74b8;
  _swift_getWitnessTable
            (PTR_Foundation__Foundation__Date_>Swift__CustomStringConvertible_100ea74b8,
             DVar1.unknown);
  DAT_100fc14d0 = puVar2;
  return;
}



/* Address: 0x100375564 | FUN_100375564 */

void FUN_100375564(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  _swift_retain(uVar1);
  return;
}



/* Address: 0x100375578 | FUN_100375578 */

void FUN_100375578(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100375580 | FUN_100375580 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100375580(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1003755a4 | FUN_1003755a4 */

void FUN_1003755a4(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1003755b4 | FUN_1003755b4 */

undefined1  [16] FUN_1003755b4(void)

{
  return ZEXT816(0x100ecd430);
}



/* Address: 0x1003755c4 | FUN_1003755c4 */

long * FUN_1003755c4(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  Date DVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  uVar5 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar5 >> 0x11 & 1) == 0) {
    lVar6 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar6;
    lVar6 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar6;
    lVar10 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = lVar10;
    lVar11 = param_2[6];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(lVar6);
    _swift_bridgeObjectRetain(lVar10);
    if (lVar11 == 0) {
      lVar6 = param_2[6];
      param_1[7] = param_2[7];
      param_1[6] = lVar6;
    }
    else {
      lVar6 = param_2[7];
      param_1[6] = lVar11;
      param_1[7] = lVar6;
      _swift_retain();
    }
    lVar10 = param_2[10];
    lVar6 = param_2[9];
    param_1[8] = param_2[8];
    param_1[9] = lVar6;
    _swift_bridgeObjectRetain();
    if (lVar10 == 0) {
      lVar6 = param_2[10];
      param_1[0xb] = param_2[0xb];
      param_1[10] = lVar6;
    }
    else {
      lVar6 = param_2[0xb];
      param_1[10] = lVar10;
      param_1[0xb] = lVar6;
      _swift_retain();
    }
    lVar10 = (long)*(int *)(param_3 + 0x28);
    DVar7 = Foundation::Date::typeMetadataAccessor();
    lVar11 = *(long *)(DVar7.unknown + -8);
    lVar6 = (long)param_2 + lVar10;
    (**(code **)(lVar11 + 0x30))(lVar6,1,DVar7.unknown);
    if ((int)lVar6 == 0) {
      (**(code **)(lVar11 + 0x10))((long)param_1 + lVar10,(long)param_2 + lVar10,DVar7.unknown);
      (**(code **)(lVar11 + 0x38))((long)param_1 + lVar10,0,1,DVar7.unknown);
    }
    else {
      puVar8 = &DAT_100fbe6e8;
      FUN_1000037f0(&DAT_100fbe6e8,&DAT_100c43250);
      _memcpy((void *)((long)param_1 + lVar10),(void *)((long)param_2 + lVar10),
              *(size_t *)(*(long *)(puVar8 + -8) + 0x40));
    }
    iVar4 = *(int *)(param_3 + 0x30);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar4);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar4);
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar3);
  }
  else {
    lVar6 = *param_2;
    *param_1 = lVar6;
    uVar9 = (ulong)uVar5 & 0xff;
    param_1 = (long *)(lVar6 + (uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x100375764 | FUN_100375764 */

void FUN_100375764(long param_1,long param_2)

{
  int iVar1;
  Date DVar2;
  long lVar3;
  long lVar4;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x28));
  if (*(long *)(param_1 + 0x30) != 0) {
    _swift_release(*(undefined8 *)(param_1 + 0x38));
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x48));
  if (*(long *)(param_1 + 0x50) != 0) {
    _swift_release(*(undefined8 *)(param_1 + 0x58));
  }
  iVar1 = *(int *)(param_2 + 0x28);
  DVar2 = Foundation::Date::typeMetadataAccessor();
  lVar4 = *(long *)(DVar2.unknown + -8);
  lVar3 = param_1 + iVar1;
  (**(code **)(lVar4 + 0x30))(lVar3,1,DVar2.unknown);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar4 + 8))(param_1 + iVar1,DVar2.unknown);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x2c) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x30) + 8));
  return;
}



/* Address: 0x10037582c | FUN_10037582c */

undefined8 * FUN_10037582c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  Date DVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  uVar5 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  uVar5 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar5;
  uVar3 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar3;
  lVar9 = param_2[6];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar3);
  if (lVar9 == 0) {
    lVar9 = param_2[6];
    param_1[7] = param_2[7];
    param_1[6] = lVar9;
  }
  else {
    uVar5 = param_2[7];
    param_1[6] = lVar9;
    param_1[7] = uVar5;
    _swift_retain();
  }
  lVar9 = param_2[10];
  uVar5 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar5;
  _swift_bridgeObjectRetain();
  if (lVar9 == 0) {
    lVar9 = param_2[10];
    param_1[0xb] = param_2[0xb];
    param_1[10] = lVar9;
  }
  else {
    uVar5 = param_2[0xb];
    param_1[10] = lVar9;
    param_1[0xb] = uVar5;
    _swift_retain();
  }
  lVar8 = (long)*(int *)(param_3 + 0x28);
  DVar6 = Foundation::Date::typeMetadataAccessor();
  lVar10 = *(long *)(DVar6.unknown + -8);
  lVar9 = (long)param_2 + lVar8;
  (**(code **)(lVar10 + 0x30))(lVar9,1,DVar6.unknown);
  if ((int)lVar9 == 0) {
    (**(code **)(lVar10 + 0x10))((long)param_1 + lVar8,(long)param_2 + lVar8,DVar6.unknown);
    (**(code **)(lVar10 + 0x38))((long)param_1 + lVar8,0,1,DVar6.unknown);
  }
  else {
    puVar7 = &DAT_100fbe6e8;
    FUN_1000037f0(&DAT_100fbe6e8,&DAT_100c43250);
    _memcpy((void *)((long)param_1 + lVar8),(void *)((long)param_2 + lVar8),
            *(size_t *)(*(long *)(puVar7 + -8) + 0x40));
  }
  iVar4 = *(int *)(param_3 + 0x30);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  uVar5 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar5;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar4);
  param_2 = (undefined8 *)((long)param_2 + (long)iVar4);
  uVar5 = param_2[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar5;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar5);
  return param_1;
}



/* Address: 0x1003759a0 | FUN_1003759a0 */

undefined8 * FUN_1003759a0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  Date DVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  
  *param_1 = *param_2;
  uVar7 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar7);
  param_1[2] = param_2[2];
  uVar7 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar7);
  param_1[4] = param_2[4];
  uVar7 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar7);
  lVar6 = param_2[6];
  if (param_1[6] == 0) {
    if (lVar6 == 0) goto LAB_100375a74;
    uVar7 = param_2[7];
    param_1[6] = lVar6;
    param_1[7] = uVar7;
    _swift_retain();
  }
  else if (lVar6 == 0) {
    _swift_release(param_1[7]);
LAB_100375a74:
    lVar6 = param_2[6];
    param_1[7] = param_2[7];
    param_1[6] = lVar6;
  }
  else {
    uVar7 = param_2[7];
    uVar8 = param_1[7];
    param_1[6] = lVar6;
    param_1[7] = uVar7;
    _swift_retain();
    _swift_release(uVar8);
  }
  param_1[8] = param_2[8];
  uVar7 = param_1[9];
  param_1[9] = param_2[9];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar7);
  lVar6 = param_2[10];
  if (param_1[10] == 0) {
    if (lVar6 == 0) goto LAB_100375aec;
    uVar7 = param_2[0xb];
    param_1[10] = lVar6;
    param_1[0xb] = uVar7;
    _swift_retain();
  }
  else if (lVar6 == 0) {
    _swift_release(param_1[0xb]);
LAB_100375aec:
    lVar6 = param_2[10];
    param_1[0xb] = param_2[0xb];
    param_1[10] = lVar6;
  }
  else {
    uVar7 = param_2[0xb];
    uVar8 = param_1[0xb];
    param_1[10] = lVar6;
    param_1[0xb] = uVar7;
    _swift_retain();
    _swift_release(uVar8);
  }
  lVar9 = (long)*(int *)(param_3 + 0x28);
  DVar3 = Foundation::Date::typeMetadataAccessor();
  lVar10 = *(long *)(DVar3.unknown + -8);
  pcVar11 = *(code **)(lVar10 + 0x30);
  lVar6 = (long)param_1 + lVar9;
  (*pcVar11)(lVar6,1,DVar3.unknown);
  lVar4 = (long)param_2 + lVar9;
  (*pcVar11)(lVar4,1,DVar3.unknown);
  if ((int)lVar6 == 0) {
    if ((int)lVar4 == 0) {
      (**(code **)(lVar10 + 0x18))((long)param_1 + lVar9,(long)param_2 + lVar9,DVar3.unknown);
      goto LAB_100375ba4;
    }
    (**(code **)(lVar10 + 8))((long)param_1 + lVar9,DVar3.unknown);
  }
  else if ((int)lVar4 == 0) {
    (**(code **)(lVar10 + 0x10))((long)param_1 + lVar9,(long)param_2 + lVar9,DVar3.unknown);
    (**(code **)(lVar10 + 0x38))((long)param_1 + lVar9,0,1,DVar3.unknown);
    goto LAB_100375ba4;
  }
  puVar5 = &DAT_100fbe6e8;
  FUN_1000037f0(&DAT_100fbe6e8,&DAT_100c43250);
  _memcpy((void *)((long)param_1 + lVar9),(void *)((long)param_2 + lVar9),
          *(size_t *)(*(long *)(puVar5 + -8) + 0x40));
LAB_100375ba4:
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  *puVar1 = *puVar2;
  uVar7 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar7);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  *puVar1 = *param_2;
  uVar7 = puVar1[1];
  puVar1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar7);
  return param_1;
}



/* Address: 0x100375c30 | FUN_100375c30 */

undefined8 * FUN_100375c30(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  Date DVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
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
  uVar9 = param_2[8];
  uVar11 = param_2[0xb];
  uVar10 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar9;
  param_1[0xb] = uVar11;
  param_1[10] = uVar10;
  lVar7 = (long)*(int *)(param_3 + 0x28);
  DVar4 = Foundation::Date::typeMetadataAccessor();
  lVar8 = *(long *)(DVar4.unknown + -8);
  lVar5 = (long)param_2 + lVar7;
  (**(code **)(lVar8 + 0x30))(lVar5,1,DVar4.unknown);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar8 + 0x20))((long)param_1 + lVar7,(long)param_2 + lVar7,DVar4.unknown);
    (**(code **)(lVar8 + 0x38))((long)param_1 + lVar7,0,1,DVar4.unknown);
  }
  else {
    puVar6 = &DAT_100fbe6e8;
    FUN_1000037f0(&DAT_100fbe6e8,&DAT_100c43250);
    _memcpy((void *)((long)param_1 + lVar7),(void *)((long)param_2 + lVar7),
            *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
  iVar1 = *(int *)(param_3 + 0x30);
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  uVar9 = *puVar2;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar9;
  param_2 = (undefined8 *)((long)param_2 + (long)iVar1);
  uVar9 = *param_2;
  puVar2 = (undefined8 *)((long)param_1 + (long)iVar1);
  puVar2[1] = param_2[1];
  *puVar2 = uVar9;
  return param_1;
}



/* Address: 0x100375d18 | FUN_100375d18 */

undefined8 * FUN_100375d18(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  Date DVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  
  uVar4 = param_2[1];
  uVar3 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  _swift_bridgeObjectRelease(uVar3);
  uVar4 = param_2[3];
  uVar3 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar4;
  _swift_bridgeObjectRelease(uVar3);
  uVar4 = param_2[5];
  uVar3 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar4;
  _swift_bridgeObjectRelease(uVar3);
  lVar8 = param_2[6];
  if (param_1[6] == 0) {
    if (lVar8 == 0) goto LAB_100375db0;
    uVar4 = param_2[7];
    param_1[6] = lVar8;
    param_1[7] = uVar4;
  }
  else if (lVar8 == 0) {
    _swift_release(param_1[7]);
LAB_100375db0:
    lVar8 = param_2[6];
    param_1[7] = param_2[7];
    param_1[6] = lVar8;
  }
  else {
    uVar3 = param_2[7];
    uVar4 = param_1[7];
    param_1[6] = lVar8;
    param_1[7] = uVar3;
    _swift_release(uVar4);
  }
  uVar4 = param_2[9];
  uVar3 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar4;
  _swift_bridgeObjectRelease(uVar3);
  lVar8 = param_2[10];
  if (param_1[10] == 0) {
    if (lVar8 == 0) goto LAB_100375e0c;
    uVar4 = param_2[0xb];
    param_1[10] = lVar8;
    param_1[0xb] = uVar4;
  }
  else if (lVar8 == 0) {
    _swift_release(param_1[0xb]);
LAB_100375e0c:
    lVar8 = param_2[10];
    param_1[0xb] = param_2[0xb];
    param_1[10] = lVar8;
  }
  else {
    uVar3 = param_2[0xb];
    uVar4 = param_1[0xb];
    param_1[10] = lVar8;
    param_1[0xb] = uVar3;
    _swift_release(uVar4);
  }
  lVar9 = (long)*(int *)(param_3 + 0x28);
  DVar5 = Foundation::Date::typeMetadataAccessor();
  lVar10 = *(long *)(DVar5.unknown + -8);
  pcVar11 = *(code **)(lVar10 + 0x30);
  lVar8 = (long)param_1 + lVar9;
  (*pcVar11)(lVar8,1,DVar5.unknown);
  lVar6 = (long)param_2 + lVar9;
  (*pcVar11)(lVar6,1,DVar5.unknown);
  if ((int)lVar8 == 0) {
    if ((int)lVar6 == 0) {
      (**(code **)(lVar10 + 0x28))((long)param_1 + lVar9,(long)param_2 + lVar9,DVar5.unknown);
      goto LAB_100375ec4;
    }
    (**(code **)(lVar10 + 8))((long)param_1 + lVar9,DVar5.unknown);
  }
  else if ((int)lVar6 == 0) {
    (**(code **)(lVar10 + 0x20))((long)param_1 + lVar9,(long)param_2 + lVar9,DVar5.unknown);
    (**(code **)(lVar10 + 0x38))((long)param_1 + lVar9,0,1,DVar5.unknown);
    goto LAB_100375ec4;
  }
  puVar7 = &DAT_100fbe6e8;
  FUN_1000037f0(&DAT_100fbe6e8,&DAT_100c43250);
  _memcpy((void *)((long)param_1 + lVar9),(void *)((long)param_2 + lVar9),
          *(size_t *)(*(long *)(puVar7 + -8) + 0x40));
LAB_100375ec4:
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  uVar4 = puVar2[1];
  uVar3 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar4;
  _swift_bridgeObjectRelease(uVar3);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  uVar4 = param_2[1];
  uVar3 = puVar1[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar4;
  _swift_bridgeObjectRelease(uVar3);
  return param_1;
}



/* Address: 0x100375f30 | FUN_100375f30 */

void FUN_100375f30(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x100375f3c | FUN_100375f3c */

ulong FUN_100375f3c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  if ((int)param_2 == 0x7fffffff) {
    uVar2 = *(ulong *)(param_1 + 8);
    if (0xfffffffe < uVar2) {
      uVar2 = 0xffffffff;
    }
    return (ulong)((int)uVar2 + 1);
  }
  puVar1 = &DAT_100fbe6e8;
  FUN_1000037f0(&DAT_100fbe6e8,&DAT_100c43250);
  uVar2 = param_1 + *(int *)(param_3 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x000100375fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar1 + -8) + 0x30))(uVar2,param_2,puVar1);
  return uVar2;
}



/* Address: 0x100375fc8 | FUN_100375fc8 */

void FUN_100375fc8(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x100375fd4 | FUN_100375fd4 */

void FUN_100375fd4(long param_1,undefined8 param_2,int param_3,long param_4)

{
  undefined *puVar1;
  
  if (param_3 == 0x7fffffff) {
    *(ulong *)(param_1 + 8) = (ulong)((int)param_2 - 1);
    return;
  }
  puVar1 = &DAT_100fbe6e8;
  FUN_1000037f0(&DAT_100fbe6e8,&DAT_100c43250);
                    /* WARNING: Could not recover jumptable at 0x000100376050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar1 + -8) + 0x38))
            (param_1 + *(int *)(param_4 + 0x28),param_2,param_2,puVar1);
  return;
}



/* Address: 0x100376054 | FUN_100376054 */

void FUN_100376054(long param_1,ulong param_2)

{
  long lVar1;
  undefined *local_68;
  undefined *puStack_60;
  undefined *local_58;
  undefined *puStack_50;
  undefined *local_48;
  undefined *puStack_40;
  long local_38;
  undefined *puStack_30;
  undefined *local_28;
  
  local_68 = &DAT_100c43448;
  puStack_60 = &DAT_100c43448;
  local_58 = &DAT_100c43448;
  puStack_50 = &DAT_100c43460;
  local_48 = &DAT_100c43460;
  puStack_40 = &DAT_100c43460;
  lVar1 = 0x13f;
  FUN_1003760dc();
  if (param_2 < 0x40) {
    local_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = &DAT_100c43460;
    local_28 = &DAT_100c43460;
    _swift_initStructMetadata(param_1,0x100,9,&local_68,param_1 + 0x10);
  }
  return;
}



/* Address: 0x1003760dc | FUN_1003760dc */

void FUN_1003760dc(void)

{
  Optional OVar1;
  Date DVar2;
  undefined7 extraout_var;
  
  if (DAT_100fc1548 == 0) {
    DVar2 = Foundation::Date::typeMetadataAccessor();
    OVar1 = Swift::Optional::typeMetadataAccessor();
    if (DVar2.unknown == (undefined *)0x0) {
      DAT_100fc1548 = CONCAT71(extraout_var,OVar1.value);
    }
  }
  return;
}



/* Address: 0x100376130 | thunk_FUN_1003754a0 */

void thunk_FUN_1003754a0(void)

{
  FUN_1003754a0();
  return;
}



/* Address: 0x100376134 | thunk_FUN_100376138 */

void thunk_FUN_100376138(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc1598 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c43500;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c43500,&DAT_100ecd430);
  DAT_100fc1598 = pTVar1;
  return;
}



/* Address: 0x100376138 | FUN_100376138 */

void FUN_100376138(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc1598 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c43500;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c43500,&DAT_100ecd430);
  DAT_100fc1598 = pTVar1;
  return;
}



/* Address: 0x100376178 | thunk_FUN_100375580 */

void thunk_FUN_100375580(void)

{
  FUN_100375580();
  return;
}



/* Address: 0x10037617c | thunk_FUN_100375564 */

void thunk_FUN_100375564(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  _swift_retain(uVar1);
  return;
}



/* Address: 0x100376180 | thunk_FUN_100309b24 */

void thunk_FUN_100309b24(void)

{
  FUN_100309924();
  return;
}



/* Address: 0x100376184 | thunk_FUN_100375578 */

void thunk_FUN_100375578(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100376188 | thunk_FUN_1003755a4 */

void thunk_FUN_1003755a4(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x10037618c | FUN_10037618c */

long FUN_10037618c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  _swift_allocObject();
  _swift_getKeyPath(&DAT_100c43580);
  FUN_1002cb7e0(&local_58);
  *(undefined8 *)(unaff_x20 + 0x18) = uStack_50;
  *(undefined8 *)(unaff_x20 + 0x10) = local_58;
  *(undefined8 *)(unaff_x20 + 0x28) = uStack_40;
  *(undefined8 *)(unaff_x20 + 0x20) = local_48;
  *(undefined8 *)(unaff_x20 + 0x38) = uStack_30;
  *(undefined8 *)(unaff_x20 + 0x30) = local_38;
  *(undefined8 *)(unaff_x20 + 0x40) = local_28;
  puVar1 = &DAT_100c435a8;
  _swift_getKeyPath();
  puVar2 = &DAT_100fbdba8;
  FUN_1000037f0(&DAT_100fbdba8,&DAT_100c435d0);
  _swift_allocObject();
  FUN_1000da6e0(puVar1,puVar2);
  *(undefined **)(unaff_x20 + 0x48) = puVar1;
  return unaff_x20;
}



/* Address: 0x100376240 | FUN_100376240 */

undefined1 FUN_100376240(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_a0 [31];
  undefined1 local_81;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_a0,0,0);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  local_80 = uVar2;
  uStack_78 = uVar4;
  local_70 = uVar5;
  local_60 = uVar3;
  local_50 = uVar1;
  _swift_retain(uVar2);
  _swift_retain(uVar4);
  _swift_retain(uVar5);
  _swift_retain(uVar3);
  _swift_retain(uVar1);
  FUN_1000037f0(&DAT_100fbe4a0,&DAT_100c444c0);
  FUN_1002ca7e0(&local_81);
  _swift_release(uVar1);
  _swift_release(uVar3);
  _swift_release(uVar5);
  _swift_release(uVar4);
  _swift_release(uVar2);
  return local_81;
}



/* Address: 0x10037631c | FUN_10037631c */

void FUN_10037631c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_10035de24();
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined ***)(param_1 + 0x20) = &PTR_PTR_100ecc5e0;
  FUN_1000d80e0(param_1,"PasteCore/DI+PasteCore.swift",0x1c,2,0x59,0x13,FUN_1002fd83c,0);
  return;
}



/* Address: 0x100376378 | FUN_100376378 */

undefined8 FUN_100376378(void)

{
  undefined1 local_29;
  undefined8 local_28 [3];
  
  local_29 = 0;
  FUN_1002ccc34(local_28,0x72616e6942657375,0xee007473696c5079,&local_29,
                PTR___type_metadata_for_Swift_Bool_100eac570);
  return local_28[0];
}



/* Address: 0x1003763d0 | FUN_1003763d0 */

void FUN_1003763d0(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_a8 [24];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  lVar1 = *param_2;
  _swift_beginAccess(lVar1 + 0x10,auStack_a8,0,0);
  uVar5 = *(undefined8 *)(lVar1 + 0x18);
  uVar3 = *(undefined8 *)(lVar1 + 0x10);
  uStack_78 = *(undefined8 *)(lVar1 + 0x28);
  uVar6 = *(undefined8 *)(lVar1 + 0x20);
  uStack_68 = *(undefined8 *)(lVar1 + 0x38);
  uVar4 = *(undefined8 *)(lVar1 + 0x30);
  uVar2 = *(undefined8 *)(lVar1 + 0x40);
  local_90 = uVar3;
  uStack_88 = uVar5;
  local_80 = uVar6;
  local_70 = uVar4;
  local_60 = uVar2;
  _swift_retain(uVar3);
  _swift_retain(uVar5);
  _swift_retain(uVar6);
  _swift_retain(uVar4);
  _swift_retain(uVar2);
  FUN_1000037f0(&DAT_100fbe4a0,&DAT_100c444c0);
  FUN_1002ca7e0(param_1);
  _swift_release(uVar2);
  _swift_release(uVar4);
  _swift_release(uVar6);
  _swift_release(uVar5);
  _swift_release(uVar3);
  return;
}



/* Address: 0x1003764b8 | FUN_1003764b8 */

void FUN_1003764b8(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 local_31;
  
  uVar1 = *param_1;
  uVar4 = *param_2;
  puVar2 = &DAT_100c435e0;
  _swift_getKeyPath(&DAT_100c435e0);
  puVar3 = &DAT_100c43608;
  _swift_getKeyPath(&DAT_100c43608);
  local_31 = uVar1;
  _swift_retain(uVar4);
  FUN_1002cb5a0(&local_31,uVar4,puVar2,puVar3);
  return;
}



/* Address: 0x100376528 | FUN_100376528 */

void FUN_100376528(undefined1 param_1)

{
  undefined1 local_31;
  
  _swift_getKeyPath(&DAT_100c435e0);
  _swift_getKeyPath(&DAT_100c43608);
  local_31 = param_1;
  _swift_retain();
  FUN_1002cb5a0(&local_31);
  return;
}



/* Address: 0x100376594 | FUN_100376594 */

undefined1  [16] FUN_100376594(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  
  puVar1 = (undefined8 *)0x70;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    puVar1 = _malloc(0x70);
  }
  else {
    _swift_coroFrameAlloc(0x70,0xc11);
  }
  *param_1 = puVar1;
  puVar1[10] = unaff_x20;
  puVar2 = &DAT_100c435e0;
  _swift_getKeyPath();
  puVar1[0xb] = puVar2;
  puVar2 = &DAT_100c43608;
  _swift_getKeyPath();
  puVar1[0xc] = puVar2;
  _swift_beginAccess(unaff_x20 + 0x10,puVar1 + 7,0,0);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1[1] = *(undefined8 *)(unaff_x20 + 0x18);
  *puVar1 = uVar8;
  puVar1[3] = uVar5;
  puVar1[2] = uVar4;
  puVar1[5] = uVar7;
  puVar1[4] = uVar6;
  puVar1[6] = uVar3;
  uVar6 = *puVar1;
  uVar7 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[4];
  _swift_retain(uVar6);
  _swift_retain(uVar7);
  _swift_retain(uVar4);
  _swift_retain(uVar5);
  _swift_retain(uVar3);
  FUN_1000037f0(&DAT_100fbe4a0,&DAT_100c444c0);
  FUN_1002ca7e0((long)puVar1 + 0x69);
  _swift_release(uVar6);
  _swift_release(uVar7);
  _swift_release(uVar4);
  _swift_release(uVar5);
  _swift_release(uVar3);
  *(undefined1 *)(puVar1 + 0xd) = *(undefined1 *)((long)puVar1 + 0x69);
  auVar9._8_8_ = puVar1 + 0xd;
  auVar9._0_8_ = FUN_1003766d4;
  return auVar9;
}



/* Address: 0x1003766d4 | FUN_1003766d4 */

void FUN_1003766d4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined8 uVar4;
  
  pvVar3 = (void *)*param_1;
  uVar1 = *(undefined8 *)((long)pvVar3 + 0x58);
  uVar2 = *(undefined8 *)((long)pvVar3 + 0x60);
  uVar4 = *(undefined8 *)((long)pvVar3 + 0x50);
  *(undefined1 *)((long)pvVar3 + 0x69) = *(undefined1 *)((long)pvVar3 + 0x68);
  _swift_retain(uVar4);
  FUN_1002cb5a0((undefined1 *)((long)pvVar3 + 0x69),uVar4,uVar1,uVar2);
  _free(pvVar3);
  return;
}



/* Address: 0x100376734 | FUN_100376734 */

void FUN_100376734(void)

{
  undefined1 local_11;
  
  local_11 = 0;
  FUN_1002ccc34(0x72616e6942657375,0xee007473696c5079,&local_11,
                PTR___type_metadata_for_Swift_Bool_100eac570);
  return;
}



/* Address: 0x100376780 | FUN_100376780 */

undefined * FUN_100376780(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_98 [24];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_98,0,0);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  local_80 = uVar3;
  uStack_78 = uVar5;
  local_70 = uVar6;
  local_60 = uVar4;
  local_50 = uVar2;
  _swift_retain(uVar3);
  _swift_retain(uVar5);
  _swift_retain(uVar6);
  _swift_retain(uVar4);
  _swift_retain(uVar2);
  puVar1 = &DAT_100fbe4a0;
  FUN_1000037f0(&DAT_100fbe4a0,&DAT_100c444c0);
  FUN_1002cb1ec();
  _swift_release(uVar2);
  _swift_release(uVar4);
  _swift_release(uVar6);
  _swift_release(uVar5);
  _swift_release(uVar3);
  return puVar1;
}



/* Address: 0x10037685c | FUN_10037685c */

void FUN_10037685c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  _swift_getKeyPath(&DAT_100c43580);
  FUN_1002cb7e0(&local_58);
  *(undefined8 *)(unaff_x20 + 0x18) = uStack_50;
  *(undefined8 *)(unaff_x20 + 0x10) = local_58;
  *(undefined8 *)(unaff_x20 + 0x28) = uStack_40;
  *(undefined8 *)(unaff_x20 + 0x20) = local_48;
  *(undefined8 *)(unaff_x20 + 0x38) = uStack_30;
  *(undefined8 *)(unaff_x20 + 0x30) = local_38;
  *(undefined8 *)(unaff_x20 + 0x40) = local_28;
  puVar1 = &DAT_100c435a8;
  _swift_getKeyPath();
  puVar2 = &DAT_100fbdba8;
  FUN_1000037f0(&DAT_100fbdba8,&DAT_100c435d0);
  _swift_allocObject();
  FUN_1000da6e0(puVar1,puVar2);
  *(undefined **)(unaff_x20 + 0x48) = puVar1;
  return;
}



/* Address: 0x100376900 | FUN_100376900 */

void FUN_100376900(void)

{
  undefined1 local_11;
  
  local_11 = 0;
  FUN_1002ccc34(0x72616e6942657375,0xee007473696c5079,&local_11,
                PTR___type_metadata_for_Swift_Bool_100eac570);
  return;
}



/* Address: 0x10037694c | FUN_10037694c */

void FUN_10037694c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_10035de24();
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined ***)(param_1 + 0x20) = &PTR_PTR_100ecc5e0;
  FUN_1000d80e0(param_1,"PasteCore/DI+PasteCore.swift",0x1c,2,0x59,0x13,FUN_1002fd83c,0);
  return;
}



/* Address: 0x1003769a8 | thunk_FUN_1003763d0 */

void thunk_FUN_1003763d0(void)

{
  FUN_1003763d0();
  return;
}



/* Address: 0x1003769ac | thunk_FUN_1003764b8 */

void thunk_FUN_1003764b8(void)

{
  FUN_1003764b8();
  return;
}



/* Address: 0x1003769b0 | FUN_1003769b0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003769b0(void)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char local_d1;
  byte local_d0 [24];
  undefined8 local_b8;
  long lStack_b0;
  undefined1 auStack_a8 [24];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_a8,0,0);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  local_90 = uVar2;
  uStack_88 = uVar4;
  local_80 = uVar5;
  local_70 = uVar3;
  local_60 = uVar1;
  _swift_retain(uVar2);
  _swift_retain(uVar4);
  _swift_retain(uVar5);
  _swift_retain(uVar3);
  _swift_retain(uVar1);
  FUN_1000037f0(&DAT_100fbe4a0,&DAT_100c444c0);
  FUN_1002ca7e0(local_d0);
  _swift_release(uVar1);
  _swift_release(uVar3);
  _swift_release(uVar5);
  _swift_release(uVar4);
  _swift_release(uVar2);
  if ((local_d0[0] & 1) == 0) {
    FUN_1000da768(local_d0);
    FUN_100004640(local_d0,local_b8);
    (**(code **)(lStack_b0 + 0x10))(local_b8,lStack_b0);
    FUN_100004594(local_d0);
    (extension_CoreData)::__C::NSManagedObjectContext::_performAndWait();
    if (local_d1 == '\x01') {
      _swift_getKeyPath(&DAT_100c435e0);
      _swift_getKeyPath(&DAT_100c43608);
      local_d0[0] = 1;
      _swift_retain();
      FUN_1002cb5a0(local_d0);
    }
  }
  return;
}



/* Address: 0x100376b54 | FUN_100376b54 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100376e20 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100376b54(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  _ArrayBuffer _Var5;
  ulong uVar6;
  Locale LVar7;
  undefined1 *puVar8;
  NSComparisonResult NVar9;
  __int64 _Var10;
  undefined *puVar11;
  ContiguousArray CVar12;
  void *pvVar13;
  long extraout_x8;
  undefined1 *puVar14;
  ulong uVar15;
  ulong uVar16;
  _CocoaArrayWrapper _Var17;
  ContiguousArray CVar18;
  long lVar19;
  String SVar20;
  undefined8 auStack_c0 [2];
  undefined1 auStack_b0 [8];
  String local_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar11 = &DAT_100fbfd10;
  FUN_1000037f0(&DAT_100fbfd10,&DAT_100c411c0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = -extraout_x8;
  puVar14 = auStack_b0 + lVar2;
  local_80 = (String)ZEXT816(0);
  uStack_68 = 0;
  uStack_70 = 0;
  _Var5.unknown = (undefined *)&local_80;
  FUN_10035f4cc(_Var5.unknown,param_2);
  FUN_100005808(&local_80,&DAT_100fbe6f0,&DAT_100c42750);
  local_80.str = PTR___swiftEmptyArrayStorage_100eae0d8;
  if ((ulong)_Var5.unknown >> 0x3e == 0) {
    lVar19 = *(long *)(((ulong)_Var5.unknown & 0xffffffffffffff8) + 0x10);
    _Var17.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    _Var17.unknown = _Var5.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var5.unknown) {
      _Var17.unknown = _Var5.unknown;
    }
    lVar19 = Swift::_CocoaArrayWrapper::get_endIndex(_Var17);
    _Var17.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  PTR___swiftEmptyArrayStorage_100eae0d8 = _Var17.unknown;
  if (lVar19 != 0) {
    uVar16 = 0;
    do {
      if (((ulong)_Var5.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)_Var5.unknown & 0xffffffffffffff8) + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100376d04);
          (*pcVar3)();
        }
        uVar6 = *(ulong *)(_Var5.unknown + uVar16 * 8 + 0x20);
      }
      else {
        uVar6 = uVar16;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar16,_Var5);
      }
      lVar1 = uVar16 + 1;
      if (SCARRY8(uVar16,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100376d00);
        (*pcVar3)();
      }
      objc_stub::FUN_100bfdce0(uVar6);
      SVar20 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      puVar11 = SVar20.bridgeObject;
      CVar18.unknown = puVar11;
      CVar12.unknown = puVar11;
      _swift_bridgeObjectRelease();
      uVar15 = (ulong)SVar20.str & 0xffffffffffff;
      if (((ulong)puVar11 & 0x2000000000000000) != 0) {
        uVar15 = (ulong)puVar11 >> 0x38 & 0xf;
      }
      if (uVar15 != 0) {
        Swift::ContiguousArray::__makeUniqueAndReserveCapacityIfNotUnique(CVar18);
        CVar18.unknown = *(undefined **)(local_80.str + 0x10);
        Swift::ContiguousArray::__reserveCapacityAssumingUniqueBuffer
                  ((__int64)CVar18.unknown,CVar12);
        Swift::ContiguousArray::__appendElementAssumeUniqueAndCapacity(CVar18.unknown,uVar6);
        Swift::ContiguousArray::__endMutation(CVar18);
      }
      uVar16 = uVar16 + 1;
    } while (lVar1 != lVar19);
    _Var17.unknown = local_80.str;
  }
  _swift_bridgeObjectRelease(_Var5.unknown);
  if (((long)_Var17.unknown < 0) || (((ulong)_Var17.unknown >> 0x3e & 1) != 0)) {
    _Var10 = Swift::_CocoaArrayWrapper::get_endIndex(_Var17);
    if (_Var10 == 0) goto LAB_100376eac;
    uVar16 = Swift::_CocoaArrayWrapper::get_endIndex(_Var17);
  }
  else {
    uVar16 = *(ulong *)(_Var17.unknown + 0x10);
    if (uVar16 == 0) {
LAB_100376eac:
      _swift_release(_Var17.unknown);
      bVar4 = false;
      goto LAB_100376eb8;
    }
  }
  puVar11 = PTR___type_metadata_for_Swift_String_100eac208;
  uVar6 = 0;
  do {
    uVar15 = uVar6;
    if (uVar16 == uVar15) break;
    if (((ulong)_Var17.unknown & 0xc000000000000001) == 0) {
      if (*(ulong *)(_Var17.unknown + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100376e90);
        (*pcVar3)();
      }
      uVar6 = *(ulong *)(_Var17.unknown + uVar15 * 8 + 0x20);
    }
    else {
      uVar6 = uVar15;
      Swift::_ArrayBuffer::__getElementSlowPath(uVar15,(_ArrayBuffer)_Var17.unknown);
    }
    if (SCARRY8(uVar15,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100376e8c);
      (*pcVar3)();
    }
    objc_stub::FUN_100bfdce0(uVar6);
    local_80 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    pvVar13 = local_80.bridgeObject;
    LVar7 = Foundation::Locale::typeMetadataAccessor();
    puVar8 = puVar14;
    (**(code **)(*(long *)(LVar7.unknown + -8) + 0x38))(puVar14,1,1,LVar7.unknown);
    FUN_10030cce0();
    *(undefined1 **)((long)auStack_c0 + lVar2) = puVar8;
    *(undefined1 **)((long)auStack_c0 + lVar2 + 8) = puVar8;
    NVar9 = (extension_Foundation)::Swift::StringProtocol::_compare
                      (puVar8,0x40,0,0,1,puVar14,puVar11,puVar11);
    FUN_100005808(puVar14,&DAT_100fbfd10,&DAT_100c411c0);
    _swift_bridgeObjectRelease(pvVar13);
    uVar6 = uVar15 + 1;
  } while (NVar9.unknown != (undefined *)0xffffffffffffffff);
  bVar4 = uVar16 == uVar15;
  _swift_release(_Var17.unknown);
LAB_100376eb8:
  *(bool *)param_1 = bVar4;
  return;
}



/* Address: 0x100376ee4 | FUN_100376ee4 */

void FUN_100376ee4(void)

{
  long unaff_x20;
  
  FUN_100376b54(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100376efc | FUN_100376efc */

void FUN_100376efc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_release(uVar4);
  _swift_release(uVar3);
  _swift_release(uVar2);
  _swift_release(uVar1);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Address: 0x100376f64 | FUN_100376f64 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100376f64(void)

{
  return ZEXT816(0x100fc15e0);
}



/* Address: 0x100376f84 | FUN_100376f84 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100376f84(undefined8 param_1,undefined8 param_2,undefined8 param_3,void *param_4)

{
  bool bVar1;
  URL self;
  NSString *pNVar2;
  ID IVar3;
  undefined *puVar4;
  _StringGuts _Var5;
  Dictionary<undefined,undefined> DVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  void *pvVar10;
  char *pcVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  _StringGuts _Var15;
  char *pcVar17;
  undefined8 *puVar18;
  long lVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String separator;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  undefined1 local_a8 [16];
  undefined *local_98;
  undefined8 local_90;
  undefined1 *puStack_88;
  undefined8 uStack_80;
  long local_78;
  long local_68;
  void *pvVar16;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  self.unknown = (undefined *)objc_stub::defaultManager(&_OBJC_CLASS___NSFileManager);
  SVar20 = Foundation::URL::get_path(self);
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar3 = objc_stub::fileExistsAtPath_((ID)self.unknown);
  if ((int)IVar3 == 0) {
    _swift_bridgeObjectRelease(SVar20.bridgeObject);
    local_90 = param_2;
    puStack_88 = (undefined1 *)param_3;
    _swift_bridgeObjectRetain(param_3);
    SVar20.bridgeObject = &DAT_e800000000000000;
    SVar20.str = (char *)0x676e697373696d3d;
    SVar25.bridgeObject = param_4;
    SVar25.str = (char *)pNVar2;
    Swift::String::append(SVar20,SVar25);
    goto LAB_100377618;
  }
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar3 = objc_stub::FUN_100c05be0((ID)self.unknown,pNVar2);
  uVar8 = 0x72;
  if ((int)IVar3 == 0) {
    uVar8 = 0x2d;
  }
  puVar4 = (undefined *)0x0;
  FUN_10037f834(0,1,1,PTR___swiftEmptyArrayStorage_100eae0d8);
  uVar9 = *(ulong *)(puVar4 + 0x10);
  puVar12 = puVar4;
  if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar9) {
    puVar12 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
    FUN_10037f834(puVar12,uVar9 + 1,1,puVar4);
  }
  *(ulong *)(puVar12 + 0x10) = uVar9 + 1;
  *(undefined8 *)(puVar12 + uVar9 * 0x10 + 0x20) = uVar8;
  *(undefined8 *)(puVar12 + uVar9 * 0x10 + 0x28) = 0xe100000000000000;
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar3 = objc_stub::FUN_100c05e40((ID)self.unknown,pNVar2);
  uVar8 = 0x77;
  if ((int)IVar3 == 0) {
    uVar8 = 0x2d;
  }
  uVar9 = *(ulong *)(puVar12 + 0x10);
  puVar4 = puVar12;
  if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar9) {
    puVar4 = (undefined *)(ulong)(1 < *(ulong *)(puVar12 + 0x18));
    FUN_10037f834(puVar4,uVar9 + 1,1,puVar12);
  }
  *(ulong *)(puVar4 + 0x10) = uVar9 + 1;
  *(undefined8 *)(puVar4 + uVar9 * 0x10 + 0x20) = uVar8;
  *(undefined8 *)(puVar4 + uVar9 * 0x10 + 0x28) = 0xe100000000000000;
  local_98 = puVar4;
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar20.bridgeObject);
  local_90 = 0;
  puVar18 = &local_90;
  IVar3 = objc_stub::attributesOfItemAtPath_error_((ID)self.unknown);
  if (IVar3 == 0) {
    uVar8 = local_90;
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    _swift_errorRelease(uVar8);
    SVar21.bridgeObject = puVar18;
    SVar21.str = (char *)pNVar2;
  }
  else {
    _Var5.unknown = (undefined *)0x0;
    FUN_1002fc1c4();
    puVar12 = _Var5.unknown;
    FUN_100377b30();
    puVar13 = PTR___type_metadata_for_Any_100eae0c0;
    pcVar17 = PTR___type_metadata_for_Any_100eae0c0 + 8;
    DVar6 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
    if (*(long *)(DVar6.unknown + 0x10) != 0) {
      lVar19 = *(long *)PTR__NSFilePosixPermissions_100ea7bc0;
      _swift_bridgeObjectRetain(DVar6.unknown);
      thunk_FUN_1001f5454(lVar19);
      if (((ulong)_Var5.unknown & 1) == 0) {
        _swift_bridgeObjectRelease(DVar6.unknown);
      }
      else {
        FUN_10000cbfc(*(long *)(DVar6.unknown + 0x38) + lVar19 * 0x20,&local_90);
        _swift_bridgeObjectRelease(DVar6.unknown);
        puVar7 = local_a8;
        _Var5.unknown = (undefined *)0x0;
        pcVar17 = puVar13 + 8;
        puVar12 = PTR___type_metadata_for_Swift_Int_100eac6f8;
        _swift_dynamicCast();
        if (((ulong)puVar7 & 1) != 0) {
          local_90 = 0x3d65646f6d;
          puStack_88 = &DAT_e500000000000000;
          FUN_1003754e0();
          pcVar17 = (char *)0x0;
          puVar12 = PTR___type_metadata_for_Swift_Int_100eac6f8;
          SVar20 = Swift::String::_init
                             (local_a8,8,0,PTR___type_metadata_for_Swift_Int_100eac6f8,puVar7);
          SVar24.bridgeObject = puVar12;
          SVar24.str = pcVar17;
          _Var5.unknown = SVar20.bridgeObject;
          Swift::String::append(SVar20,SVar24);
          _swift_bridgeObjectRelease(SVar20.bridgeObject);
          puVar7 = puStack_88;
          uVar8 = local_90;
          uVar9 = *(ulong *)(puVar4 + 0x10);
          puVar14 = puVar4;
          if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar9) {
            puVar14 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
            pcVar17 = &DAT_00000001;
            _Var5.unknown = (undefined *)(uVar9 + 1);
            FUN_10037f834();
            puVar12 = puVar4;
          }
          *(undefined **)(puVar14 + 0x10) = (undefined *)(uVar9 + 1);
          *(undefined8 *)(puVar14 + uVar9 * 0x10 + 0x20) = uVar8;
          *(undefined1 **)(puVar14 + uVar9 * 0x10 + 0x28) = puVar7;
          puVar4 = puVar14;
          local_98 = puVar14;
        }
      }
    }
    puVar14 = puVar4;
    if (*(long *)(DVar6.unknown + 0x10) == 0) {
LAB_10037737c:
      SVar21.bridgeObject = puVar12;
      SVar21.str = pcVar17;
      lVar19 = *(long *)(DVar6.unknown + 0x10);
      puVar4 = puVar14;
    }
    else {
      lVar19 = *(long *)PTR__NSFileOwnerAccountID_100ea7bb0;
      _swift_bridgeObjectRetain(DVar6.unknown);
      thunk_FUN_1001f5454(lVar19);
      if (((ulong)_Var5.unknown & 1) != 0) {
        FUN_10000cbfc(*(long *)(DVar6.unknown + 0x38) + lVar19 * 0x20,&local_90);
        _swift_bridgeObjectRelease(DVar6.unknown);
        uVar9 = 0;
        _Var5.unknown = (undefined *)0x0;
        pcVar17 = puVar13 + 8;
        puVar12 = PTR___type_metadata_for_Swift_Int_100eac6f8;
        _swift_dynamicCast();
        if ((uVar9 & 1) != 0) {
          local_90 = 0x3d72656e776f;
          puStack_88 = &DAT_e600000000000000;
          SVar20 = Swift::CustomStringConvertible::get_description();
          SVar26.bridgeObject = puVar12;
          SVar26.str = pcVar17;
          _Var5.unknown = SVar20.bridgeObject;
          Swift::String::append(SVar20,SVar26);
          _swift_bridgeObjectRelease(SVar20.bridgeObject);
          puVar7 = puStack_88;
          uVar8 = local_90;
          uVar9 = *(ulong *)(puVar4 + 0x10);
          if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar9) {
            puVar14 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
            pcVar17 = &DAT_00000001;
            _Var5.unknown = (undefined *)(uVar9 + 1);
            FUN_10037f834();
            puVar12 = puVar4;
          }
          *(undefined **)(puVar14 + 0x10) = (undefined *)(uVar9 + 1);
          *(undefined8 *)(puVar14 + uVar9 * 0x10 + 0x20) = uVar8;
          *(undefined1 **)(puVar14 + uVar9 * 0x10 + 0x28) = puVar7;
          local_98 = puVar14;
        }
        goto LAB_10037737c;
      }
      _swift_bridgeObjectRelease(DVar6.unknown);
      SVar21.bridgeObject = puVar12;
      SVar21.str = pcVar17;
      lVar19 = *(long *)(DVar6.unknown + 0x10);
    }
    if (lVar19 != 0) {
      lVar19 = *(long *)PTR__NSFileType_100ea7bd0;
      _swift_bridgeObjectRetain(DVar6.unknown);
      thunk_FUN_1001f5454(lVar19);
      if (((ulong)_Var5.unknown & 1) == 0) {
        _swift_bridgeObjectRelease(DVar6.unknown);
        SVar21.bridgeObject = puVar12;
        SVar21.str = pcVar17;
      }
      else {
        FUN_10000cbfc(*(long *)(DVar6.unknown + 0x38) + lVar19 * 0x20,&local_90);
        _swift_bridgeObjectRelease(DVar6.unknown);
        pvVar10 = (void *)0x0;
        FUN_1002fc1b0();
        uVar9 = 0;
        _Var5.unknown = (undefined *)0x0;
        pcVar17 = puVar13 + 8;
        _swift_dynamicCast();
        SVar21.bridgeObject = pvVar10;
        SVar21.str = pcVar17;
        if ((uVar9 & 1) != 0) {
          SVar20 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          _Var15.unknown = SVar20.bridgeObject;
          SVar21 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          pvVar16 = SVar21.bridgeObject;
          pcVar17 = SVar21.str;
          if (SVar20 == SVar21) {
            _swift_bridgeObjectRelease(_Var15.unknown);
            _swift_bridgeObjectRelease(pvVar16);
            SVar21.bridgeObject = pvVar10;
            SVar21.str = pcVar17;
          }
          else {
            _Var5.unknown = _Var15.unknown;
            bVar1 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)SVar20.str,_Var15,
                               (_StringComparisonResult)(__int8)SVar21.str);
            _swift_bridgeObjectRelease(_Var15.unknown);
            _swift_bridgeObjectRelease(pvVar16);
            if (!bVar1) goto LAB_10037745c;
          }
          _swift_bridgeObjectRelease(DVar6.unknown);
          goto LAB_10037759c;
        }
      }
    }
LAB_10037745c:
    if (*(long *)(DVar6.unknown + 0x10) == 0) {
LAB_1003774ac:
      puStack_88 = (undefined1 *)0x0;
      local_90 = 0;
      local_78 = 0;
      uStack_80 = 0;
    }
    else {
      lVar19 = *(long *)PTR__NSFileSize_100ea7bc8;
      _swift_bridgeObjectRetain(DVar6.unknown);
      thunk_FUN_1001f5454(lVar19);
      if (((ulong)_Var5.unknown & 1) == 0) {
        _swift_bridgeObjectRelease(DVar6.unknown);
        goto LAB_1003774ac;
      }
      FUN_10000cbfc(*(long *)(DVar6.unknown + 0x38) + lVar19 * 0x20,&local_90);
      _swift_bridgeObjectRelease(DVar6.unknown);
    }
    _swift_bridgeObjectRelease(DVar6.unknown);
    if (local_78 == 0) {
      FUN_10030e660(&local_90);
    }
    else {
      puVar7 = local_a8;
      pcVar17 = puVar13 + 8;
      puVar12 = PTR___type_metadata_for_Swift_Int64_100eadc00;
      _swift_dynamicCast(puVar7,&local_90,pcVar17,PTR___type_metadata_for_Swift_Int64_100eadc00,6);
      SVar21.bridgeObject = puVar12;
      SVar21.str = pcVar17;
      if (((ulong)puVar7 & 1) != 0) {
        local_90 = 0x3d657a6973;
        puStack_88 = &DAT_e500000000000000;
        SVar20 = Swift::CustomStringConvertible::get_description();
        SVar27.bridgeObject = puVar12;
        SVar27.str = pcVar17;
        Swift::String::append(SVar20,SVar27);
        _swift_bridgeObjectRelease(SVar20.bridgeObject);
        puVar7 = puStack_88;
        uVar8 = local_90;
        uVar9 = *(ulong *)(puVar4 + 0x10);
        puVar13 = puVar4;
        if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar9) {
          puVar13 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
          pcVar17 = &DAT_00000001;
          FUN_10037f834(puVar13,uVar9 + 1);
          puVar12 = puVar4;
        }
        SVar21.bridgeObject = puVar12;
        SVar21.str = pcVar17;
        *(ulong *)(puVar13 + 0x10) = uVar9 + 1;
        *(undefined8 *)(puVar13 + uVar9 * 0x10 + 0x20) = uVar8;
        *(undefined1 **)(puVar13 + uVar9 * 0x10 + 0x28) = puVar7;
        puVar4 = puVar13;
        local_98 = puVar13;
      }
    }
  }
LAB_10037759c:
  local_90 = param_2;
  puStack_88 = (undefined1 *)param_3;
  _swift_bridgeObjectRetain(param_3);
  SVar22.bridgeObject = &SUB_e200000000000000;
  SVar22.str = (char *)0x5b3d;
  Swift::String::append(SVar22,SVar21);
  pcVar17 = &DAT_100fbedd8;
  FUN_1000037f0(&DAT_100fbedd8,&DAT_100c42ed0);
  pcVar11 = pcVar17;
  FUN_100310704();
  separator.bridgeObject = (void *)0xe100000000000000;
  separator.str = (char *)0x2c;
  SVar20 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator);
  SVar28.bridgeObject = pcVar11;
  SVar28.str = pcVar17;
  Swift::String::append(SVar20,SVar28);
  _swift_bridgeObjectRelease(SVar20.bridgeObject);
  SVar23.bridgeObject = (void *)0xe100000000000000;
  SVar23.str = (char *)0x5d;
  SVar29.bridgeObject = pcVar11;
  SVar29.str = pcVar17;
  Swift::String::append(SVar23,SVar29);
  _swift_bridgeObjectRelease(puVar4);
LAB_100377618:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(local_90,puStack_88);
  }
  return;
}



/* Address: 0x100377700 | FUN_100377700 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0001003779d4) */

String FUN_100377700(URL param_1,undefined8 param_2,undefined8 param_3,void *param_4)

{
  undefined *puVar1;
  ulong uVar2;
  uid_t uVar3;
  URL UVar4;
  URL UVar5;
  undefined *puVar6;
  long lVar7;
  undefined1 *puVar8;
  URLResourceValues forKeys;
  undefined *puVar9;
  uint uVar10;
  undefined8 uVar11;
  void *pvVar12;
  char *pcVar13;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined1 *puVar14;
  long lVar15;
  long lVar16;
  code *pcVar17;
  long lVar18;
  String SVar19;
  String SVar20;
  String separator;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  undefined1 auStack_c0 [8];
  undefined *local_b8;
  long local_b0;
  undefined1 auStack_a0 [40];
  String local_78;
  undefined *local_68;
  
  local_b8 = (undefined *)Foundation::URLResourceValues::typeMetadataAccessor();
  lVar18 = *(long *)(local_b8 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar18 + 0x40));
  UVar4 = Foundation::URL::typeMetadataAccessor();
  lVar16 = *(long *)(UVar4.unknown + -8);
  UVar5 = UVar4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar16 + 0x40));
  puVar14 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0) +
            -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar15 = (long)puVar14 - extraout_x12;
  Foundation::URL::deletingLastPathComponent(UVar5);
  puVar6 = &DAT_100fc1bf0;
  FUN_1000037f0(&DAT_100fc1bf0,&DAT_100c40ad0);
  pcVar13 = (char *)0x7;
  _swift_allocObject();
  *(undefined8 *)(puVar6 + 0x18) = 10;
  *(undefined8 *)(puVar6 + 0x10) = 5;
  local_78.str = (char *)0x3d646975;
  local_78.bridgeObject = &DAT_e400000000000000;
  uVar3 = _getuid();
  local_68 = (undefined *)CONCAT44(local_68._4_4_,uVar3);
  SVar19 = Swift::CustomStringConvertible::get_description();
  SVar21.bridgeObject = param_4;
  SVar21.str = pcVar13;
  Swift::String::append(SVar19,SVar21);
  _swift_bridgeObjectRelease(SVar19.bridgeObject);
  *(char **)(puVar6 + 0x20) = local_78.str;
  *(void **)(puVar6 + 0x28) = local_78.bridgeObject;
  uVar11 = 0x726964;
  lVar7 = lVar15;
  FUN_100376f84(lVar15,0x726964,0xe300000000000000);
  *(long *)(puVar6 + 0x30) = lVar7;
  *(undefined8 *)(puVar6 + 0x38) = uVar11;
  uVar11 = 0x6264;
  pcVar13 = &SUB_e200000000000000;
  FUN_100376f84();
  *(undefined **)(puVar6 + 0x40) = param_1.unknown;
  *(undefined8 *)(puVar6 + 0x48) = uVar11;
  local_78 = Foundation::URL::get_path(param_1);
  pvVar12 = local_78.bridgeObject;
  _swift_bridgeObjectRetain(pvVar12);
  SVar19.bridgeObject = &DAT_e400000000000000;
  SVar19.str = (char *)0x6c61772d;
  SVar22.bridgeObject = param_4;
  SVar22.str = pcVar13;
  Swift::String::append(SVar19,SVar22);
  _swift_bridgeObjectRelease(pvVar12);
  pvVar12 = local_78.bridgeObject;
  Foundation::URL::_init();
  _swift_bridgeObjectRelease(pvVar12);
  uVar11 = 0x6c6177;
  pcVar13 = (char *)0xe300000000000000;
  puVar8 = puVar14;
  FUN_100376f84();
  pcVar17 = *(code **)(lVar16 + 8);
  UVar5.unknown = puVar14;
  (*pcVar17)(puVar14,UVar4.unknown);
  *(undefined1 **)(puVar6 + 0x50) = puVar8;
  *(undefined8 *)(puVar6 + 0x58) = uVar11;
  local_78 = Foundation::URL::get_path(UVar5);
  pvVar12 = local_78.bridgeObject;
  _swift_bridgeObjectRetain(pvVar12);
  SVar20.bridgeObject = &DAT_e400000000000000;
  SVar20.str = (char *)0x6d68732d;
  SVar23.bridgeObject = param_4;
  SVar23.str = pcVar13;
  Swift::String::append(SVar20,SVar23);
  _swift_bridgeObjectRelease(pvVar12);
  pvVar12 = local_78.bridgeObject;
  Foundation::URL::_init();
  _swift_bridgeObjectRelease(pvVar12);
  uVar11 = 0x6d6873;
  pcVar13 = (char *)0xe300000000000000;
  puVar8 = puVar14;
  FUN_100376f84();
  (*pcVar17)(puVar14,UVar4.unknown);
  *(undefined1 **)(puVar6 + 0x60) = puVar8;
  *(undefined8 *)(puVar6 + 0x68) = uVar11;
  puVar9 = &DAT_100fbf508;
  local_68 = puVar6;
  FUN_1000037f0(&DAT_100fbf508,&DAT_100c40b90);
  UVar5.unknown = auStack_a0;
  _swift_initStackObject();
  *(undefined8 *)(puVar9 + 0x18) = 2;
  *(undefined8 *)(puVar9 + 0x10) = 1;
  *(undefined8 *)(puVar9 + 0x20) =
       *(undefined8 *)PTR__NSURLVolumeAvailableCapacityForImportantUsageKey_100ea9af0;
  forKeys.unknown = puVar9;
  FUN_1002fca9c();
  _swift_setDeallocating(puVar9);
  FUN_100313308(puVar9 + 0x20);
  Foundation::URL::_resourceValues((Set<NSURLResourceKey>)forKeys.unknown,UVar5);
  uVar10 = (uint)UVar5.unknown;
  _swift_bridgeObjectRelease();
  Foundation::URLResourceValues::_get_volumeAvailableCapacityForImportantUsage(forKeys);
  (**(code **)(lVar18 + 8))(auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),local_b8);
  puVar9 = puVar6;
  if ((uVar10 & 0xff) != 1) {
    local_78.bridgeObject = &DAT_e700000000000000;
    local_78.str = (char *)0x3d424d65657266;
    puVar1 = forKeys.unknown + 0xfffff;
    if (-1 < (long)forKeys.unknown) {
      puVar1 = forKeys.unknown;
    }
    local_b0 = (long)puVar1 >> 0x14;
    SVar19 = Swift::CustomStringConvertible::get_description();
    SVar24.bridgeObject = param_4;
    SVar24.str = pcVar13;
    Swift::String::append(SVar19,SVar24);
    _swift_bridgeObjectRelease(SVar19.bridgeObject);
    pcVar13 = local_78.str;
    pvVar12 = local_78.bridgeObject;
    uVar2 = *(ulong *)(puVar6 + 0x10);
    if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar2) {
      puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
      FUN_10037f834(puVar9,uVar2 + 1,1,puVar6);
    }
    *(ulong *)(puVar9 + 0x10) = uVar2 + 1;
    *(char **)(puVar9 + uVar2 * 0x10 + 0x20) = pcVar13;
    *(void **)(puVar9 + uVar2 * 0x10 + 0x28) = pvVar12;
    local_68 = puVar9;
  }
  FUN_1000037f0(&DAT_100fbedd8,&DAT_100c42ed0);
  FUN_100310704();
  separator.bridgeObject = (void *)0xe100000000000000;
  separator.str = (char *)0x20;
  SVar19 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator);
  (*pcVar17)(lVar15,UVar4.unknown);
  _swift_bridgeObjectRelease(puVar9);
  return SVar19;
}



/* Address: 0x100377b30 | FUN_100377b30 */

void FUN_100377b30(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  
  if (DAT_100fbe250 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_1002fc1c4(0xff);
  pTVar2 = &TargetProtocolConformanceDescriptor_100c403ac;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c403ac,uVar1);
  DAT_100fbe250 = pTVar2;
  return;
}



/* Address: 0x100377b74 | FUN_100377b74 */

undefined8 FUN_100377b74(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_40;
  undefined8 local_38 [3];
  
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1003c9a84();
  puVar2 = &DAT_100fc1650;
  local_40 = puVar1;
  FUN_1000037f0(&DAT_100fc1650,&DAT_100c43680);
  FUN_1002ccc34(local_38,0xd000000000000017,0x8000000100da36e0,&local_40,puVar2);
  return local_38[0];
}



/* Address: 0x100377be8 | FUN_100377be8 */

void FUN_100377be8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_28;
  
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1003c9a84();
  puVar2 = &DAT_100fc1650;
  local_28 = puVar1;
  FUN_1000037f0(&DAT_100fc1650,&DAT_100c43680);
  FUN_1002ccc34(param_1,0xd000000000000017,0x8000000100da36e0,&local_28,puVar2);
  return;
}



/* Address: 0x100377c58 | FUN_100377c58 */

bool FUN_100377c58(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  Date DVar3;
  undefined1 *puVar4;
  Date DVar5;
  Date DVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  code *pcVar7;
  long lVar8;
  Date DVar9;
  long lVar10;
  double dVar11;
  
  puVar2 = &DAT_100fbe6e8;
  FUN_1000037f0(&DAT_100fbe6e8,&DAT_100c43250);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  DVar6.unknown = &stack0xffffffffffffffb0 + -extraout_x8;
  DVar3 = Foundation::Date::typeMetadataAccessor();
  lVar10 = *(long *)(DVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar10 + 0x40));
  lVar8 = (long)DVar6.unknown - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  DVar9.unknown = (undefined *)(lVar8 - extraout_x12);
  FUN_100364a64(param_1,DVar6.unknown);
  puVar4 = DVar6.unknown;
  (**(code **)(lVar10 + 0x30))(DVar6.unknown,1,DVar3.unknown);
  if ((int)puVar4 == 1) {
    FUN_100378618(DVar6.unknown);
    bVar1 = true;
  }
  else {
    DVar5.unknown = DVar9.unknown;
    (**(code **)(lVar10 + 0x20))(DVar9.unknown,DVar6.unknown,DVar3.unknown);
    Foundation::Date::get_now(DVar5);
    dVar11 = Foundation::Date::timeIntervalSince(DVar9,DVar6);
    pcVar7 = *(code **)(lVar10 + 8);
    (*pcVar7)(lVar8,DVar3.unknown);
    (*pcVar7)(DVar9.unknown,DVar3.unknown);
    bVar1 = dVar11 < 0.0;
    if (86400.0 <= dVar11) {
      bVar1 = true;
    }
  }
  return bVar1;
}



/* Address: 0x100377dbc | FUN_100377dbc */

uint FUN_100377dbc(undefined8 param_1,uint param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  char **ppcVar3;
  long lVar4;
  undefined1 *puVar5;
  Date DVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  long extraout_x8;
  long extraout_x8_00;
  char *pcVar12;
  long lVar13;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  code *pcVar14;
  bool bVar15;
  Date DVar16;
  long lVar17;
  undefined1 auStack_200 [8];
  undefined8 local_1f8;
  undefined8 local_1f0;
  long local_1e8;
  undefined1 *local_1e0;
  long local_1d8;
  long local_1d0;
  long local_1c8;
  long local_1c0;
  undefined8 local_1b8;
  char *local_1b0;
  char *local_1a8;
  char *local_1a0;
  long local_198;
  char *local_190;
  undefined *local_188;
  uint local_180;
  uint local_17c;
  long local_128 [3];
  undefined8 local_110;
  long lStack_108;
  long local_100;
  ulong uStack_f8;
  undefined *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  
  local_1c0 = param_3;
  local_1b8 = param_1;
  DVar6 = Foundation::Date::typeMetadataAccessor();
  lVar17 = *(long *)(DVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar17 + 0x40));
  puVar7 = &DAT_100fbe6e8;
  local_1e0 = auStack_200 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_1000037f0(&DAT_100fbe6e8,&DAT_100c43250);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar7 + -8) + 0x40));
  lVar13 = (long)(auStack_200 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_1e8 = lVar13;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar13 = lVar13 - extraout_x12;
  local_1d0 = lVar13;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar13 = lVar13 - extraout_x12_00;
  local_1d8 = lVar13;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  DVar16.unknown = (undefined *)(lVar13 - extraout_x12_01);
  puVar7 = &DAT_100c43658;
  _swift_getKeyPath(&DAT_100c43658);
  puVar8 = puVar7;
  FUN_100378508();
  puVar9 = puVar8;
  FUN_100378590();
  FUN_1002cb88c(&local_a8,puVar7,puVar8,puVar9);
  uVar1 = param_2 & 0xff;
  local_190 = " item object not found in store";
  uStack_d8 = uStack_a0;
  local_e0 = local_a8;
  uStack_c8 = uStack_90;
  uStack_d0 = local_98;
  uStack_b8 = uStack_80;
  local_c0 = local_88;
  local_198 = -0x2fffffffffffffef;
  uVar2 = 0x8000000100da3660;
  lVar13 = -0x2fffffffffffffef;
  if (uVar1 != 5) {
    uVar2 = 0xef657661732d7075;
    lVar13 = 0x6e61656c632d3976;
  }
  local_b0 = local_78;
  local_1a0 = "v9-cleanup-remove";
  uVar11 = 0x8000000100da3680;
  lVar4 = -0x2fffffffffffffed;
  if (uVar1 != 3) {
    uVar11 = 0xef6e65706f2d7075;
    lVar4 = 0x6e61656c632d3976;
  }
  if (uVar1 < 5) {
    uVar2 = uVar11;
    lVar13 = lVar4;
  }
  local_1a8 = "store-migration-status-metadata";
  local_1b0 = "v9-cleanup-metadata";
  pcVar12 = "store-migration-status-metadata";
  lVar4 = -0x2fffffffffffffed;
  if (uVar1 != 1) {
    pcVar12 = "v9-cleanup-metadata";
    lVar4 = -0x2fffffffffffffe1;
  }
  uVar11 = 0xea00000000006461;
  lVar10 = 0x6f6c2d65726f7473;
  if (uVar1 != 0) {
    uVar11 = (ulong)pcVar12 | 0x8000000000000000;
    lVar10 = lVar4;
  }
  if (uVar1 < 3) {
    uVar2 = uVar11;
    lVar13 = lVar10;
  }
  puVar7 = &DAT_100fc1670;
  local_17c = param_2;
  FUN_1000037f0(&DAT_100fc1670,&DAT_100c43688);
  local_188 = puVar7;
  FUN_1002ca7e0(local_128);
  lVar4 = local_128[0];
  if (*(long *)(local_128[0] + 0x10) == 0) {
    bVar15 = true;
  }
  else {
    _swift_bridgeObjectRetain(local_128[0]);
    uVar11 = uVar2;
    FUN_100071370(lVar13);
    bVar15 = (uVar11 & 1) == 0;
    if (!bVar15) {
      (**(code **)(lVar17 + 0x10))
                (DVar16.unknown,*(long *)(lVar4 + 0x38) + *(long *)(lVar17 + 0x48) * lVar13,
                 DVar6.unknown);
    }
    _swift_bridgeObjectRelease(lVar4);
  }
  pcVar14 = *(code **)(lVar17 + 0x38);
  local_1c8 = lVar17;
  (*pcVar14)(DVar16.unknown,bVar15,1,DVar6.unknown);
  _swift_bridgeObjectRelease(uVar2);
  _swift_bridgeObjectRelease(lVar4);
  puVar7 = DVar16.unknown;
  FUN_100377c58();
  FUN_100378618();
  lVar13 = local_1d8;
  local_180 = (uint)puVar7;
  if (((ulong)puVar7 & 1) == 0) {
    _swift_release(local_78);
    _swift_release(local_88);
    _swift_release(local_98);
    _swift_release(uStack_a0);
    _swift_release(local_a8);
    goto LAB_1003784dc;
  }
  local_1f8 = local_98;
  local_1f0 = uStack_a0;
  uVar1 = local_17c & 0xff;
  uVar2 = (ulong)local_190 | 0x8000000000000000;
  lVar17 = local_198;
  if (uVar1 != 5) {
    uVar2 = 0xef657661732d7075;
    lVar17 = 0x6e61656c632d3976;
  }
  uVar11 = (ulong)local_1a0 | 0x8000000000000000;
  lVar4 = -0x2fffffffffffffed;
  if (uVar1 != 3) {
    uVar11 = 0xef6e65706f2d7075;
    lVar4 = 0x6e61656c632d3976;
  }
  if (uVar1 < 5) {
    uVar2 = uVar11;
    lVar17 = lVar4;
  }
  ppcVar3 = &local_1a8;
  lVar4 = -0x2fffffffffffffed;
  if (uVar1 != 1) {
    ppcVar3 = &local_1b0;
    lVar4 = -0x2fffffffffffffe1;
  }
  lVar10 = 0x6f6c2d65726f7473;
  if (uVar1 != 0) {
    lVar10 = lVar4;
  }
  uVar11 = 0xea00000000006461;
  if (uVar1 != 0) {
    uVar11 = (ulong)*ppcVar3 | 0x8000000000000000;
  }
  if (uVar1 < 3) {
    uVar2 = uVar11;
    lVar17 = lVar10;
  }
  Foundation::Date::get_now(DVar16);
  (*pcVar14)(lVar13,0,1,DVar6.unknown);
  FUN_1002ca7e0(local_128,local_188);
  lVar4 = local_1d0;
  FUN_100354148(lVar13,local_1d0);
  lVar13 = local_1c8;
  lVar10 = lVar4;
  (**(code **)(local_1c8 + 0x30))(lVar4,1,DVar6.unknown);
  puVar5 = local_1e0;
  if ((int)lVar10 == 1) {
    FUN_100378618(lVar4);
    lVar13 = local_1e8;
    FUN_100380a70(local_1e8,lVar17,uVar2);
    _swift_bridgeObjectRelease(uVar2);
    FUN_100378618(lVar13);
  }
  else {
    (**(code **)(lVar13 + 0x20))(local_1e0,lVar4,DVar6.unknown);
    lVar13 = local_128[0];
    _swift_isUniquelyReferenced_nonNull_native(local_128[0]);
    local_100 = local_128[0];
    FUN_100380d88(puVar5,lVar17,uVar2,lVar13);
    _swift_bridgeObjectRelease(uVar2);
    local_128[0] = local_100;
  }
  local_100 = local_128[0];
  FUN_1002cac1c(&local_100,local_188);
  uVar1 = local_17c & 0xff;
  if (uVar1 < 3) {
    if (uVar1 == 0) {
      uStack_f8 = 0xea00000000006461;
      local_100 = 0x6f6c2d65726f7473;
    }
    else {
      pcVar12 = local_1a8;
      if (uVar1 == 1) goto LAB_100378338;
      uStack_f8 = (ulong)local_1b0 | 0x8000000000000000;
      local_100 = -0x2fffffffffffffe1;
    }
  }
  else if (uVar1 < 5) {
    pcVar12 = local_1a0;
    if (uVar1 == 3) {
LAB_100378338:
      uStack_f8 = (ulong)pcVar12 | 0x8000000000000000;
      local_100 = -0x2fffffffffffffed;
    }
    else {
      uStack_f8 = 0xef6e65706f2d7075;
      local_100 = 0x6e61656c632d3976;
    }
  }
  else if (uVar1 == 5) {
    uStack_f8 = (ulong)local_190 | 0x8000000000000000;
    local_100 = local_198;
  }
  else {
    local_100 = 0x6e61656c632d3976;
    uStack_f8 = 0xef657661732d7075;
  }
  local_e8 = PTR___type_metadata_for_Swift_String_100eac208;
  FUN_100011080(&local_100,local_128);
  lVar13 = local_1c0;
  lVar17 = local_1c0;
  _swift_bridgeObjectRetain(local_1c0);
  _swift_isUniquelyReferenced_nonNull_native();
  local_100 = lVar13;
  FUN_100380c64(local_128,0x656372756f73,&DAT_e600000000000000,lVar17);
  lVar13 = local_100;
  puVar7 = &DAT_100c43690;
  _swift_getKeyPath(&DAT_100c43690);
  puVar8 = &DAT_100fbdbb0;
  FUN_1000037f0(&DAT_100fbdbb0,&DAT_100c3eff0);
  _swift_initStackObject();
  FUN_1000da6e0(puVar7,puVar8);
  FUN_1000da768(local_128);
  _swift_release(puVar7);
  FUN_100004640(local_128,local_110);
  (**(code **)(lStack_108 + 0x28))(local_1b8,lVar13,local_110,lStack_108);
  _swift_release(local_78);
  _swift_release(local_88);
  _swift_release(local_1f8);
  _swift_release(local_1f0);
  _swift_release(local_a8);
  FUN_100004594(local_128);
  _swift_bridgeObjectRelease(lVar13);
LAB_1003784dc:
  return local_180 & 1;
}



/* Address: 0x100378504 | thunk_FUN_100377be8 */

void thunk_FUN_100377be8(void)

{
  FUN_100377be8();
  return;
}



/* Address: 0x100378508 | FUN_100378508 */

void FUN_100378508(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fc1648 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fc1650;
  FUN_100005c24(&DAT_100fc1650,&DAT_100c43680);
  puVar2 = &DAT_100fc1658;
  FUN_1000e8c70(&DAT_100fc1658,PTR_Foundation__Foundation__Date_>Swift__Decodable_100ea74a8);
  local_30 = PTR___protocol_witness_table_for_Swift_String___Swift_Decodable_in_Swift_100eac240;
  puVar3 = PTR__Swift__Swift__Dictionary<undefined,undefined>_>Swift__Decodable_100eabe78;
  puStack_28 = puVar2;
  _swift_getWitnessTable
            (PTR__Swift__Swift__Dictionary<undefined,undefined>_>Swift__Decodable_100eabe78,puVar1,
             &local_30);
  DAT_100fc1648 = puVar3;
  return;
}


