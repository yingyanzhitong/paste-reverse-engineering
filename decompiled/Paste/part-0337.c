/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100425e4c | FUN_100425e4c */

void FUN_100425e4c(void)

{
  FUN_100425e58();
  return;
}



/* Address: 0x100425e58 | FUN_100425e58 */

undefined8 * FUN_100425e58(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,code *param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  (*param_4)(uVar3,uVar4,uVar2);
  return param_1;
}



/* Address: 0x100425e9c | FUN_100425e9c */

int FUN_100425e9c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x1e < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0x1f;
  }
  uVar1 = (*(byte *)(param_1 + 4) >> 2 & 0x1e | (uint)(*(byte *)(param_1 + 4) >> 7)) ^ 0x1f;
  if (0x1d < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x100425ef0 | FUN_100425ef0 */

void FUN_100425ef0(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x1f) {
    if (0x1e < param_3) {
      *(undefined1 *)((long)param_1 + 0x11) = 0;
    }
    if (param_2 != 0) {
      *param_1 = 0;
      param_1[1] = 0;
      *(byte *)(param_1 + 2) = (((byte)(-param_2 >> 1) & 0xf) + (char)param_2 * -0x10) * '\b';
      return;
    }
  }
  else {
    *(undefined1 *)(param_1 + 2) = 0;
    *param_1 = (ulong)(param_2 - 0x1f);
    param_1[1] = 0;
    if (0x1e < param_3) {
      *(undefined1 *)((long)param_1 + 0x11) = 1;
    }
  }
  return;
}



/* Address: 0x100425f44 | FUN_100425f44 */

undefined1  [16] FUN_100425f44(void)

{
  return ZEXT816(0x100ed3ed0);
}



/* Address: 0x100425f54 | FUN_100425f54 */

long * FUN_100425f54(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  Date DVar9;
  undefined *puVar10;
  ulong uVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  
  lVar13 = *(long *)(param_3 + -8);
  uVar4 = *(uint *)(lVar13 + 0x50);
  if ((uVar4 >> 0x11 & 1) == 0) {
    puVar6 = &DAT_100fc5b48;
    FUN_1000f7830(&DAT_100fc5b48,&DAT_100c492d8);
    lVar14 = *(long *)(puVar6 + -8);
    plVar7 = param_2;
    (**(code **)(lVar14 + 0x30))(param_2,1,puVar6);
    if ((int)plVar7 != 0) {
      plVar7 = _memcpy(param_1,param_2,*(size_t *)(lVar13 + 0x40));
      return plVar7;
    }
    lVar16 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar16;
    lVar13 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = lVar13;
    lVar13 = param_2[4];
    lVar8 = param_2[5];
    param_1[4] = lVar13;
    param_1[5] = lVar8;
    lVar18 = param_2[6];
    param_1[6] = lVar18;
    lVar8 = 0;
    FUN_100424764();
    iVar5 = *(int *)(lVar8 + 0x20);
    DVar9 = Foundation::Date::typeMetadataAccessor();
    lVar17 = *(long *)(DVar9.unknown + -8);
    pcVar12 = *(code **)(lVar17 + 0x10);
    _swift_bridgeObjectRetain(lVar16);
    _swift_bridgeObjectRetain(lVar13);
    _swift_bridgeObjectRetain(lVar18);
    (*pcVar12)((long)param_1 + (long)iVar5,(long)param_2 + (long)iVar5,DVar9.unknown);
    (*pcVar12)((long)param_1 + (long)*(int *)(lVar8 + 0x24),
               (long)param_2 + (long)*(int *)(lVar8 + 0x24),DVar9.unknown);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x28));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x28));
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    lVar16 = (long)*(int *)(lVar8 + 0x2c);
    pcVar15 = *(code **)(lVar17 + 0x30);
    _swift_bridgeObjectRetain();
    lVar13 = (long)param_2 + lVar16;
    (*pcVar15)(lVar13,1,DVar9.unknown);
    if ((int)lVar13 == 0) {
      (*pcVar12)((long)param_1 + lVar16,(long)param_2 + lVar16,DVar9.unknown);
      (**(code **)(lVar17 + 0x38))((long)param_1 + lVar16,0,1,DVar9.unknown);
    }
    else {
      puVar10 = &DAT_100fc5a30;
      FUN_1000f7830(&DAT_100fc5a30,&DAT_100c49370);
      _memcpy((void *)((long)param_1 + lVar16),(void *)((long)param_2 + lVar16),
              *(size_t *)(*(long *)(puVar10 + -8) + 0x40));
    }
    lVar16 = (long)*(int *)(lVar8 + 0x30);
    lVar13 = (long)param_2 + lVar16;
    (*pcVar15)(lVar13,1,DVar9.unknown);
    if ((int)lVar13 == 0) {
      (*pcVar12)((long)param_1 + lVar16,(long)param_2 + lVar16,DVar9.unknown);
      (**(code **)(lVar17 + 0x38))((long)param_1 + lVar16,0,1,DVar9.unknown);
    }
    else {
      puVar10 = &DAT_100fc5a30;
      FUN_1000f7830(&DAT_100fc5a30,&DAT_100c49370);
      _memcpy((void *)((long)param_1 + lVar16),(void *)((long)param_2 + lVar16),
              *(size_t *)(*(long *)(puVar10 + -8) + 0x40));
    }
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar8 + 0x34)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar8 + 0x34));
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar8 + 0x38)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar8 + 0x38));
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar8 + 0x3c)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar8 + 0x3c));
    (**(code **)(lVar14 + 0x38))(param_1,0,1,puVar6);
  }
  else {
    lVar13 = *param_2;
    *param_1 = lVar13;
    uVar11 = (ulong)uVar4 & 0xff;
    param_1 = (long *)(lVar13 + (uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1004261ec | FUN_1004261ec */

void FUN_1004261ec(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  Date DVar4;
  code *UNRECOVERED_JUMPTABLE;
  code *pcVar5;
  long lVar6;
  
  puVar2 = &DAT_100fc5b48;
  FUN_1000f7830(&DAT_100fc5b48,&DAT_100c492d8);
  lVar6 = param_1;
  (**(code **)(*(long *)(puVar2 + -8) + 0x30))(param_1,1,puVar2);
  if ((int)lVar6 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x20));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x30));
    lVar3 = 0;
    FUN_100424764();
    iVar1 = *(int *)(lVar3 + 0x20);
    DVar4 = Foundation::Date::typeMetadataAccessor();
    lVar6 = *(long *)(DVar4.unknown + -8);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar6 + 8);
    (*UNRECOVERED_JUMPTABLE)(param_1 + iVar1,DVar4.unknown);
    (*UNRECOVERED_JUMPTABLE)(param_1 + *(int *)(lVar3 + 0x24),DVar4.unknown);
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar3 + 0x28) + 8));
    iVar1 = *(int *)(lVar3 + 0x2c);
    pcVar5 = *(code **)(lVar6 + 0x30);
    lVar6 = param_1 + iVar1;
    (*pcVar5)(lVar6,1,DVar4.unknown);
    if ((int)lVar6 == 0) {
      (*UNRECOVERED_JUMPTABLE)(param_1 + iVar1,DVar4.unknown);
    }
    iVar1 = *(int *)(lVar3 + 0x30);
    lVar6 = param_1 + iVar1;
    (*pcVar5)(lVar6,1,DVar4.unknown);
    if ((int)lVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000100426328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1 + iVar1,DVar4.unknown);
      return;
    }
  }
  return;
}



/* Address: 0x10042632c | FUN_10042632c */

undefined8 * FUN_10042632c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  Date DVar7;
  long lVar8;
  undefined *puVar9;
  code *pcVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar4 = &DAT_100fc5b48;
  FUN_1000f7830(&DAT_100fc5b48,&DAT_100c492d8);
  lVar11 = *(long *)(puVar4 + -8);
  puVar5 = param_2;
  (**(code **)(lVar11 + 0x30))(param_2,1,puVar4);
  if ((int)puVar5 != 0) {
    puVar5 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
    return puVar5;
  }
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar16 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar16;
  uVar16 = param_2[4];
  uVar15 = param_2[5];
  param_1[4] = uVar16;
  param_1[5] = uVar15;
  uVar15 = param_2[6];
  param_1[6] = uVar15;
  lVar6 = 0;
  FUN_100424764();
  iVar3 = *(int *)(lVar6 + 0x20);
  DVar7 = Foundation::Date::typeMetadataAccessor();
  lVar14 = *(long *)(DVar7.unknown + -8);
  pcVar10 = *(code **)(lVar14 + 0x10);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar16);
  _swift_bridgeObjectRetain(uVar15);
  (*pcVar10)((long)param_1 + (long)iVar3,(long)param_2 + (long)iVar3,DVar7.unknown);
  (*pcVar10)((long)param_1 + (long)*(int *)(lVar6 + 0x24),
             (long)param_2 + (long)*(int *)(lVar6 + 0x24),DVar7.unknown);
  puVar5 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x28));
  puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x28));
  uVar16 = puVar1[1];
  *puVar5 = *puVar1;
  puVar5[1] = uVar16;
  lVar13 = (long)*(int *)(lVar6 + 0x2c);
  pcVar12 = *(code **)(lVar14 + 0x30);
  _swift_bridgeObjectRetain();
  lVar8 = (long)param_2 + lVar13;
  (*pcVar12)(lVar8,1,DVar7.unknown);
  if ((int)lVar8 == 0) {
    (*pcVar10)((long)param_1 + lVar13,(long)param_2 + lVar13,DVar7.unknown);
    (**(code **)(lVar14 + 0x38))((long)param_1 + lVar13,0,1,DVar7.unknown);
  }
  else {
    puVar9 = &DAT_100fc5a30;
    FUN_1000f7830(&DAT_100fc5a30,&DAT_100c49370);
    _memcpy((void *)((long)param_1 + lVar13),(void *)((long)param_2 + lVar13),
            *(size_t *)(*(long *)(puVar9 + -8) + 0x40));
  }
  lVar13 = (long)*(int *)(lVar6 + 0x30);
  lVar8 = (long)param_2 + lVar13;
  (*pcVar12)(lVar8,1,DVar7.unknown);
  if ((int)lVar8 == 0) {
    (*pcVar10)((long)param_1 + lVar13,(long)param_2 + lVar13,DVar7.unknown);
    (**(code **)(lVar14 + 0x38))((long)param_1 + lVar13,0,1,DVar7.unknown);
  }
  else {
    puVar9 = &DAT_100fc5a30;
    FUN_1000f7830(&DAT_100fc5a30,&DAT_100c49370);
    _memcpy((void *)((long)param_1 + lVar13),(void *)((long)param_2 + lVar13),
            *(size_t *)(*(long *)(puVar9 + -8) + 0x40));
  }
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar6 + 0x34)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar6 + 0x34));
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar6 + 0x38)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar6 + 0x38));
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar6 + 0x3c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar6 + 0x3c));
  (**(code **)(lVar11 + 0x38))(param_1,0,1,puVar4);
  return param_1;
}



/* Address: 0x1004265a0 | FUN_1004265a0 */

undefined8 * FUN_1004265a0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  Date DVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  code *pcVar10;
  code *pcVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  
  puVar2 = &DAT_100fc5b48;
  FUN_1000f7830(&DAT_100fc5b48,&DAT_100c492d8);
  lVar12 = *(long *)(puVar2 + -8);
  pcVar10 = *(code **)(lVar12 + 0x30);
  puVar7 = param_1;
  (*pcVar10)(param_1,1,puVar2);
  puVar3 = param_2;
  (*pcVar10)(param_2,1,puVar2);
  if ((int)puVar7 != 0) {
    if ((int)puVar3 == 0) {
      *param_1 = *param_2;
      uVar9 = param_2[1];
      param_1[1] = uVar9;
      param_1[2] = param_2[2];
      param_1[3] = param_2[3];
      uVar13 = param_2[4];
      param_1[4] = uVar13;
      param_1[5] = param_2[5];
      uVar16 = param_2[6];
      param_1[6] = uVar16;
      lVar4 = 0;
      FUN_100424764();
      iVar1 = *(int *)(lVar4 + 0x20);
      DVar5 = Foundation::Date::typeMetadataAccessor();
      lVar15 = *(long *)(DVar5.unknown + -8);
      pcVar10 = *(code **)(lVar15 + 0x10);
      _swift_bridgeObjectRetain(uVar9);
      _swift_bridgeObjectRetain(uVar13);
      _swift_bridgeObjectRetain(uVar16);
      (*pcVar10)((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,DVar5.unknown);
      (*pcVar10)((long)param_1 + (long)*(int *)(lVar4 + 0x24),
                 (long)param_2 + (long)*(int *)(lVar4 + 0x24),DVar5.unknown);
      puVar7 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x28));
      puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x28));
      *puVar7 = *puVar3;
      puVar7[1] = puVar3[1];
      lVar14 = (long)*(int *)(lVar4 + 0x2c);
      pcVar11 = *(code **)(lVar15 + 0x30);
      _swift_bridgeObjectRetain();
      lVar8 = (long)param_2 + lVar14;
      (*pcVar11)(lVar8,1,DVar5.unknown);
      if ((int)lVar8 == 0) {
        (*pcVar10)((long)param_1 + lVar14,(long)param_2 + lVar14,DVar5.unknown);
        (**(code **)(lVar15 + 0x38))((long)param_1 + lVar14,0,1,DVar5.unknown);
      }
      else {
        puVar6 = &DAT_100fc5a30;
        FUN_1000f7830(&DAT_100fc5a30,&DAT_100c49370);
        _memcpy((void *)((long)param_1 + lVar14),(void *)((long)param_2 + lVar14),
                *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
      }
      lVar14 = (long)*(int *)(lVar4 + 0x30);
      lVar8 = (long)param_2 + lVar14;
      (*pcVar11)(lVar8,1,DVar5.unknown);
      if ((int)lVar8 == 0) {
        (*pcVar10)((long)param_1 + lVar14,(long)param_2 + lVar14,DVar5.unknown);
        (**(code **)(lVar15 + 0x38))((long)param_1 + lVar14,0,1,DVar5.unknown);
      }
      else {
        puVar6 = &DAT_100fc5a30;
        FUN_1000f7830(&DAT_100fc5a30,&DAT_100c49370);
        _memcpy((void *)((long)param_1 + lVar14),(void *)((long)param_2 + lVar14),
                *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
      }
      *(undefined1 *)((long)param_1 + (long)*(int *)(lVar4 + 0x34)) =
           *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0x34));
      *(undefined1 *)((long)param_1 + (long)*(int *)(lVar4 + 0x38)) =
           *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0x38));
      *(undefined1 *)((long)param_1 + (long)*(int *)(lVar4 + 0x3c)) =
           *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0x3c));
      (**(code **)(lVar12 + 0x38))(param_1,0,1,puVar2);
      return param_1;
    }
LAB_100426740:
    puVar7 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
    return puVar7;
  }
  if ((int)puVar3 != 0) {
    FUN_1000fb4c4(param_1,&DAT_100fc5b48,&DAT_100c492d8);
    goto LAB_100426740;
  }
  *param_1 = *param_2;
  uVar9 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar9);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  uVar9 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar9);
  param_1[5] = param_2[5];
  uVar9 = param_1[6];
  param_1[6] = param_2[6];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar9);
  lVar4 = 0;
  FUN_100424764();
  iVar1 = *(int *)(lVar4 + 0x20);
  DVar5 = Foundation::Date::typeMetadataAccessor();
  lVar14 = *(long *)(DVar5.unknown + -8);
  pcVar10 = *(code **)(lVar14 + 0x18);
  (*pcVar10)((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,DVar5.unknown);
  (*pcVar10)((long)param_1 + (long)*(int *)(lVar4 + 0x24),
             (long)param_2 + (long)*(int *)(lVar4 + 0x24),DVar5.unknown);
  puVar7 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x28));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x28));
  *puVar7 = *puVar3;
  uVar9 = puVar7[1];
  puVar7[1] = puVar3[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar9);
  lVar15 = (long)*(int *)(lVar4 + 0x2c);
  pcVar11 = *(code **)(lVar14 + 0x30);
  lVar12 = (long)param_1 + lVar15;
  (*pcVar11)(lVar12,1,DVar5.unknown);
  lVar8 = (long)param_2 + lVar15;
  (*pcVar11)(lVar8,1,DVar5.unknown);
  if ((int)lVar12 == 0) {
    if ((int)lVar8 != 0) {
      (**(code **)(lVar14 + 8))((long)param_1 + lVar15,DVar5.unknown);
      goto LAB_10042699c;
    }
    (*pcVar10)((long)param_1 + lVar15,(long)param_2 + lVar15,DVar5.unknown);
  }
  else if ((int)lVar8 == 0) {
    (**(code **)(lVar14 + 0x10))((long)param_1 + lVar15,(long)param_2 + lVar15,DVar5.unknown);
    (**(code **)(lVar14 + 0x38))((long)param_1 + lVar15,0,1,DVar5.unknown);
  }
  else {
LAB_10042699c:
    puVar2 = &DAT_100fc5a30;
    FUN_1000f7830(&DAT_100fc5a30,&DAT_100c49370);
    _memcpy((void *)((long)param_1 + lVar15),(void *)((long)param_2 + lVar15),
            *(size_t *)(*(long *)(puVar2 + -8) + 0x40));
  }
  lVar15 = (long)*(int *)(lVar4 + 0x30);
  lVar12 = (long)param_1 + lVar15;
  (*pcVar11)(lVar12,1,DVar5.unknown);
  lVar8 = (long)param_2 + lVar15;
  (*pcVar11)(lVar8,1,DVar5.unknown);
  if ((int)lVar12 == 0) {
    if ((int)lVar8 == 0) {
      (*pcVar10)((long)param_1 + lVar15,(long)param_2 + lVar15,DVar5.unknown);
      goto LAB_100426a60;
    }
    (**(code **)(lVar14 + 8))((long)param_1 + lVar15,DVar5.unknown);
  }
  else if ((int)lVar8 == 0) {
    (**(code **)(lVar14 + 0x10))((long)param_1 + lVar15,(long)param_2 + lVar15,DVar5.unknown);
    (**(code **)(lVar14 + 0x38))((long)param_1 + lVar15,0,1,DVar5.unknown);
    goto LAB_100426a60;
  }
  puVar2 = &DAT_100fc5a30;
  FUN_1000f7830(&DAT_100fc5a30,&DAT_100c49370);
  _memcpy((void *)((long)param_1 + lVar15),(void *)((long)param_2 + lVar15),
          *(size_t *)(*(long *)(puVar2 + -8) + 0x40));
LAB_100426a60:
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar4 + 0x34)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0x34));
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar4 + 0x38)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0x38));
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar4 + 0x3c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0x3c));
  return param_1;
}



/* Address: 0x100426ad0 | FUN_100426ad0 */

undefined8 * FUN_100426ad0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  Date DVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  code *pcVar12;
  long lVar13;
  undefined8 uVar14;
  
  puVar3 = &DAT_100fc5b48;
  FUN_1000f7830(&DAT_100fc5b48,&DAT_100c492d8);
  lVar9 = *(long *)(puVar3 + -8);
  puVar4 = param_2;
  (**(code **)(lVar9 + 0x30))(param_2,1,puVar3);
  if ((int)puVar4 != 0) {
    puVar4 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
    return puVar4;
  }
  uVar14 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar14;
  param_1[2] = param_2[2];
  uVar14 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar14;
  uVar14 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar14;
  lVar5 = 0;
  FUN_100424764();
  iVar1 = *(int *)(lVar5 + 0x20);
  DVar6 = Foundation::Date::typeMetadataAccessor();
  lVar10 = *(long *)(DVar6.unknown + -8);
  pcVar11 = *(code **)(lVar10 + 0x20);
  (*pcVar11)((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,DVar6.unknown);
  (*pcVar11)((long)param_1 + (long)*(int *)(lVar5 + 0x24),
             (long)param_2 + (long)*(int *)(lVar5 + 0x24),DVar6.unknown);
  puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x28));
  uVar14 = *puVar4;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x28));
  puVar2[1] = puVar4[1];
  *puVar2 = uVar14;
  lVar13 = (long)*(int *)(lVar5 + 0x2c);
  pcVar12 = *(code **)(lVar10 + 0x30);
  lVar7 = (long)param_2 + lVar13;
  (*pcVar12)(lVar7,1,DVar6.unknown);
  if ((int)lVar7 == 0) {
    (*pcVar11)((long)param_1 + lVar13,(long)param_2 + lVar13,DVar6.unknown);
    (**(code **)(lVar10 + 0x38))((long)param_1 + lVar13,0,1,DVar6.unknown);
  }
  else {
    puVar8 = &DAT_100fc5a30;
    FUN_1000f7830(&DAT_100fc5a30,&DAT_100c49370);
    _memcpy((void *)((long)param_1 + lVar13),(void *)((long)param_2 + lVar13),
            *(size_t *)(*(long *)(puVar8 + -8) + 0x40));
  }
  lVar13 = (long)*(int *)(lVar5 + 0x30);
  lVar7 = (long)param_2 + lVar13;
  (*pcVar12)(lVar7,1,DVar6.unknown);
  if ((int)lVar7 == 0) {
    (*pcVar11)((long)param_1 + lVar13,(long)param_2 + lVar13,DVar6.unknown);
    (**(code **)(lVar10 + 0x38))((long)param_1 + lVar13,0,1,DVar6.unknown);
  }
  else {
    puVar8 = &DAT_100fc5a30;
    FUN_1000f7830(&DAT_100fc5a30,&DAT_100c49370);
    _memcpy((void *)((long)param_1 + lVar13),(void *)((long)param_2 + lVar13),
            *(size_t *)(*(long *)(puVar8 + -8) + 0x40));
  }
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar5 + 0x34)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar5 + 0x34));
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar5 + 0x38)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar5 + 0x38));
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar5 + 0x3c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar5 + 0x3c));
  (**(code **)(lVar9 + 0x38))(param_1,0,1,puVar3);
  return param_1;
}



/* Address: 0x100426d04 | FUN_100426d04 */

undefined8 * FUN_100426d04(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  Date DVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  
  puVar2 = &DAT_100fc5b48;
  FUN_1000f7830(&DAT_100fc5b48,&DAT_100c492d8);
  lVar11 = *(long *)(puVar2 + -8);
  pcVar12 = *(code **)(lVar11 + 0x30);
  puVar7 = param_1;
  (*pcVar12)(param_1,1,puVar2);
  puVar3 = param_2;
  (*pcVar12)(param_2,1,puVar2);
  if ((int)puVar7 != 0) {
    if ((int)puVar3 == 0) {
      uVar9 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar9;
      param_1[2] = param_2[2];
      uVar9 = param_2[3];
      param_1[4] = param_2[4];
      param_1[3] = uVar9;
      uVar9 = param_2[5];
      param_1[6] = param_2[6];
      param_1[5] = uVar9;
      lVar4 = 0;
      FUN_100424764();
      iVar1 = *(int *)(lVar4 + 0x20);
      DVar5 = Foundation::Date::typeMetadataAccessor();
      lVar13 = *(long *)(DVar5.unknown + -8);
      pcVar12 = *(code **)(lVar13 + 0x20);
      (*pcVar12)((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,DVar5.unknown);
      (*pcVar12)((long)param_1 + (long)*(int *)(lVar4 + 0x24),
                 (long)param_2 + (long)*(int *)(lVar4 + 0x24),DVar5.unknown);
      puVar7 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x28));
      uVar9 = *puVar7;
      puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x28));
      puVar3[1] = puVar7[1];
      *puVar3 = uVar9;
      lVar15 = (long)*(int *)(lVar4 + 0x2c);
      pcVar14 = *(code **)(lVar13 + 0x30);
      lVar10 = (long)param_2 + lVar15;
      (*pcVar14)(lVar10,1,DVar5.unknown);
      if ((int)lVar10 == 0) {
        (*pcVar12)((long)param_1 + lVar15,(long)param_2 + lVar15,DVar5.unknown);
        (**(code **)(lVar13 + 0x38))((long)param_1 + lVar15,0,1,DVar5.unknown);
      }
      else {
        puVar6 = &DAT_100fc5a30;
        FUN_1000f7830(&DAT_100fc5a30,&DAT_100c49370);
        _memcpy((void *)((long)param_1 + lVar15),(void *)((long)param_2 + lVar15),
                *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
      }
      lVar15 = (long)*(int *)(lVar4 + 0x30);
      lVar10 = (long)param_2 + lVar15;
      (*pcVar14)(lVar10,1,DVar5.unknown);
      if ((int)lVar10 == 0) {
        (*pcVar12)((long)param_1 + lVar15,(long)param_2 + lVar15,DVar5.unknown);
        (**(code **)(lVar13 + 0x38))((long)param_1 + lVar15,0,1,DVar5.unknown);
      }
      else {
        puVar6 = &DAT_100fc5a30;
        FUN_1000f7830(&DAT_100fc5a30,&DAT_100c49370);
        _memcpy((void *)((long)param_1 + lVar15),(void *)((long)param_2 + lVar15),
                *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
      }
      *(undefined1 *)((long)param_1 + (long)*(int *)(lVar4 + 0x34)) =
           *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0x34));
      *(undefined1 *)((long)param_1 + (long)*(int *)(lVar4 + 0x38)) =
           *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0x38));
      *(undefined1 *)((long)param_1 + (long)*(int *)(lVar4 + 0x3c)) =
           *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0x3c));
      (**(code **)(lVar11 + 0x38))(param_1,0,1,puVar2);
      return param_1;
    }
LAB_100426e50:
    puVar7 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
    return puVar7;
  }
  if ((int)puVar3 != 0) {
    FUN_1000fb4c4(param_1,&DAT_100fc5b48,&DAT_100c492d8);
    goto LAB_100426e50;
  }
  uVar9 = param_2[1];
  uVar8 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar9;
  _swift_bridgeObjectRelease(uVar8);
  uVar9 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar9;
  uVar9 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRelease(uVar9);
  uVar9 = param_2[6];
  uVar8 = param_1[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar9;
  _swift_bridgeObjectRelease(uVar8);
  lVar4 = 0;
  FUN_100424764();
  iVar1 = *(int *)(lVar4 + 0x20);
  DVar5 = Foundation::Date::typeMetadataAccessor();
  lVar13 = *(long *)(DVar5.unknown + -8);
  pcVar12 = *(code **)(lVar13 + 0x28);
  (*pcVar12)((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,DVar5.unknown);
  (*pcVar12)((long)param_1 + (long)*(int *)(lVar4 + 0x24),
             (long)param_2 + (long)*(int *)(lVar4 + 0x24),DVar5.unknown);
  puVar7 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x28));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x28));
  uVar9 = puVar3[1];
  uVar8 = puVar7[1];
  *puVar7 = *puVar3;
  puVar7[1] = uVar9;
  _swift_bridgeObjectRelease(uVar8);
  lVar15 = (long)*(int *)(lVar4 + 0x2c);
  pcVar14 = *(code **)(lVar13 + 0x30);
  lVar11 = (long)param_1 + lVar15;
  (*pcVar14)(lVar11,1,DVar5.unknown);
  lVar10 = (long)param_2 + lVar15;
  (*pcVar14)(lVar10,1,DVar5.unknown);
  if ((int)lVar11 == 0) {
    if ((int)lVar10 != 0) {
      (**(code **)(lVar13 + 8))((long)param_1 + lVar15,DVar5.unknown);
      goto LAB_100427064;
    }
    (*pcVar12)((long)param_1 + lVar15,(long)param_2 + lVar15,DVar5.unknown);
  }
  else if ((int)lVar10 == 0) {
    (**(code **)(lVar13 + 0x20))((long)param_1 + lVar15,(long)param_2 + lVar15,DVar5.unknown);
    (**(code **)(lVar13 + 0x38))((long)param_1 + lVar15,0,1,DVar5.unknown);
  }
  else {
LAB_100427064:
    puVar2 = &DAT_100fc5a30;
    FUN_1000f7830(&DAT_100fc5a30,&DAT_100c49370);
    _memcpy((void *)((long)param_1 + lVar15),(void *)((long)param_2 + lVar15),
            *(size_t *)(*(long *)(puVar2 + -8) + 0x40));
  }
  lVar15 = (long)*(int *)(lVar4 + 0x30);
  lVar11 = (long)param_1 + lVar15;
  (*pcVar14)(lVar11,1,DVar5.unknown);
  lVar10 = (long)param_2 + lVar15;
  (*pcVar14)(lVar10,1,DVar5.unknown);
  if ((int)lVar11 == 0) {
    if ((int)lVar10 == 0) {
      (*pcVar12)((long)param_1 + lVar15,(long)param_2 + lVar15,DVar5.unknown);
      goto LAB_100427128;
    }
    (**(code **)(lVar13 + 8))((long)param_1 + lVar15,DVar5.unknown);
  }
  else if ((int)lVar10 == 0) {
    (**(code **)(lVar13 + 0x20))((long)param_1 + lVar15,(long)param_2 + lVar15,DVar5.unknown);
    (**(code **)(lVar13 + 0x38))((long)param_1 + lVar15,0,1,DVar5.unknown);
    goto LAB_100427128;
  }
  puVar2 = &DAT_100fc5a30;
  FUN_1000f7830(&DAT_100fc5a30,&DAT_100c49370);
  _memcpy((void *)((long)param_1 + lVar15),(void *)((long)param_2 + lVar15),
          *(size_t *)(*(long *)(puVar2 + -8) + 0x40));
LAB_100427128:
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar4 + 0x34)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0x34));
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar4 + 0x38)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0x38));
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar4 + 0x3c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0x3c));
  return param_1;
}



/* Address: 0x100427194 | FUN_100427194 */

void FUN_100427194(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1004271a0 | FUN_1004271a0 */

int FUN_1004271a0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  
  puVar2 = &DAT_100fc5b48;
  FUN_1000f7830(&DAT_100fc5b48,&DAT_100c492d8);
  (**(code **)(*(long *)(puVar2 + -8) + 0x30))(param_1,param_2,puVar2);
  iVar1 = 0;
  if ((int)param_1 != 0) {
    iVar1 = (int)param_1 + -1;
  }
  return iVar1;
}



/* Address: 0x1004271f4 | FUN_1004271f4 */

void FUN_1004271f4(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x100427200 | FUN_100427200 */

void FUN_100427200(undefined8 param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = param_2 + 1;
  }
  puVar2 = &DAT_100fc5b48;
  FUN_1000f7830(&DAT_100fc5b48,&DAT_100c492d8);
                    /* WARNING: Could not recover jumptable at 0x000100427258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar2 + -8) + 0x38))(param_1,iVar1,param_3,puVar2);
  return;
}



/* Address: 0x10042725c | FUN_10042725c */

void FUN_10042725c(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fc5b48;
  FUN_1000f7830(&DAT_100fc5b48,&DAT_100c492d8);
                    /* WARNING: Could not recover jumptable at 0x00010042729c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar1 + -8) + 0x30))(param_1,1,puVar1);
  return;
}



/* Address: 0x1004272a0 | FUN_1004272a0 */

void FUN_1004272a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fc5b48;
  FUN_1000f7830(&DAT_100fc5b48,&DAT_100c492d8);
                    /* WARNING: Could not recover jumptable at 0x0001004272e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar1 + -8) + 0x38))(param_1,param_2,1,puVar1);
  return;
}



/* Address: 0x1004272ec | FUN_1004272ec */

void FUN_1004272ec(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100fc6080,&TargetEnumDescriptor_100cb0040);
  return;
}



/* Address: 0x100427300 | FUN_100427300 */

void FUN_100427300(undefined8 param_1,ulong param_2)

{
  long lVar1;
  
  lVar1 = 0x13f;
  FUN_100424764();
  if (param_2 < 0x40) {
    _swift_initEnumMetadataSinglePayload(param_1,0x100,*(long *)(lVar1 + -8) + 0x40,1);
  }
  return;
}



/* Address: 0x100427354 | FUN_100427354 */

long * FUN_100427354(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  Date DVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_3 + -8);
  uVar1 = *(uint *)(lVar7 + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    plVar4 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    if ((int)plVar4 == 1) {
      DVar2 = Foundation::Date::typeMetadataAccessor();
      (**(code **)(*(long *)(DVar2.unknown + -8) + 0x10))(param_1,param_2,DVar2.unknown);
      puVar3 = &DAT_100fc5b30;
      FUN_1000f7830(&DAT_100fc5b30,&DAT_100c492c8);
      *(undefined8 *)((long)param_1 + (long)*(int *)(puVar3 + 0x30)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(puVar3 + 0x30));
      _swift_bridgeObjectRetain();
      uVar5 = 1;
    }
    else {
      if ((int)plVar4 != 0) {
        plVar4 = _memcpy(param_1,param_2,*(size_t *)(lVar7 + 0x40));
        return plVar4;
      }
      DVar2 = Foundation::Date::typeMetadataAccessor();
      (**(code **)(*(long *)(DVar2.unknown + -8) + 0x10))(param_1,param_2,DVar2.unknown);
      puVar3 = &DAT_100fc5b30;
      FUN_1000f7830(&DAT_100fc5b30,&DAT_100c492c8);
      *(undefined8 *)((long)param_1 + (long)*(int *)(puVar3 + 0x30)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(puVar3 + 0x30));
      _swift_bridgeObjectRetain();
      uVar5 = 0;
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,uVar5);
  }
  else {
    lVar7 = *param_2;
    *param_1 = lVar7;
    uVar6 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar7 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x10042748c | FUN_10042748c */

void FUN_10042748c(long param_1)

{
  long lVar1;
  Date DVar2;
  undefined *puVar3;
  
  lVar1 = param_1;
  _swift_getEnumCaseMultiPayload();
  if ((uint)lVar1 < 2) {
    DVar2 = Foundation::Date::typeMetadataAccessor();
    (**(code **)(*(long *)(DVar2.unknown + -8) + 8))(param_1,DVar2.unknown);
    puVar3 = &DAT_100fc5b30;
    FUN_1000f7830(&DAT_100fc5b30,&DAT_100c492c8);
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(puVar3 + 0x30)));
    return;
  }
  return;
}



/* Address: 0x1004274f8 | FUN_1004274f8 */

void * FUN_1004274f8(void *param_1,void *param_2,long param_3)

{
  Date DVar1;
  undefined *puVar2;
  void *pvVar3;
  undefined8 uVar4;
  
  pvVar3 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  if ((int)pvVar3 == 1) {
    DVar1 = Foundation::Date::typeMetadataAccessor();
    (**(code **)(*(long *)(DVar1.unknown + -8) + 0x10))(param_1,param_2,DVar1.unknown);
    puVar2 = &DAT_100fc5b30;
    FUN_1000f7830(&DAT_100fc5b30,&DAT_100c492c8);
    *(undefined8 *)((long)param_1 + (long)*(int *)(puVar2 + 0x30)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(puVar2 + 0x30));
    _swift_bridgeObjectRetain();
    uVar4 = 1;
  }
  else {
    if ((int)pvVar3 != 0) {
      pvVar3 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
      return pvVar3;
    }
    DVar1 = Foundation::Date::typeMetadataAccessor();
    (**(code **)(*(long *)(DVar1.unknown + -8) + 0x10))(param_1,param_2,DVar1.unknown);
    puVar2 = &DAT_100fc5b30;
    FUN_1000f7830(&DAT_100fc5b30,&DAT_100c492c8);
    *(undefined8 *)((long)param_1 + (long)*(int *)(puVar2 + 0x30)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(puVar2 + 0x30));
    _swift_bridgeObjectRetain();
    uVar4 = 0;
  }
  _swift_storeEnumTagMultiPayload(param_1,param_3,uVar4);
  return param_1;
}



/* Address: 0x100427608 | FUN_100427608 */

void * FUN_100427608(void *param_1,void *param_2,long param_3)

{
  Date DVar1;
  undefined *puVar2;
  void *pvVar3;
  undefined8 uVar4;
  
  if (param_1 != param_2) {
    FUN_10005241c(param_1,FUN_100427730);
    pvVar3 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    if ((int)pvVar3 == 1) {
      DVar1 = Foundation::Date::typeMetadataAccessor();
      (**(code **)(*(long *)(DVar1.unknown + -8) + 0x10))(param_1,param_2,DVar1.unknown);
      puVar2 = &DAT_100fc5b30;
      FUN_1000f7830(&DAT_100fc5b30,&DAT_100c492c8);
      *(undefined8 *)((long)param_1 + (long)*(int *)(puVar2 + 0x30)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(puVar2 + 0x30));
      _swift_bridgeObjectRetain();
      uVar4 = 1;
    }
    else {
      if ((int)pvVar3 != 0) {
        pvVar3 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
        return pvVar3;
      }
      DVar1 = Foundation::Date::typeMetadataAccessor();
      (**(code **)(*(long *)(DVar1.unknown + -8) + 0x10))(param_1,param_2,DVar1.unknown);
      puVar2 = &DAT_100fc5b30;
      FUN_1000f7830(&DAT_100fc5b30,&DAT_100c492c8);
      *(undefined8 *)((long)param_1 + (long)*(int *)(puVar2 + 0x30)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(puVar2 + 0x30));
      _swift_bridgeObjectRetain();
      uVar4 = 0;
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,uVar4);
  }
  return param_1;
}



/* Address: 0x100427730 | FUN_100427730 */

void FUN_100427730(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100fc6100,&TargetEnumDescriptor_100cb0068);
  return;
}



/* Address: 0x100427744 | FUN_100427744 */

void * FUN_100427744(void *param_1,void *param_2,long param_3)

{
  Date DVar1;
  undefined *puVar2;
  void *pvVar3;
  undefined8 uVar4;
  
  pvVar3 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  if ((int)pvVar3 == 1) {
    DVar1 = Foundation::Date::typeMetadataAccessor();
    (**(code **)(*(long *)(DVar1.unknown + -8) + 0x20))(param_1,param_2,DVar1.unknown);
    puVar2 = &DAT_100fc5b30;
    FUN_1000f7830(&DAT_100fc5b30,&DAT_100c492c8);
    *(undefined8 *)((long)param_1 + (long)*(int *)(puVar2 + 0x30)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(puVar2 + 0x30));
    uVar4 = 1;
  }
  else {
    if ((int)pvVar3 != 0) {
      pvVar3 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
      return pvVar3;
    }
    DVar1 = Foundation::Date::typeMetadataAccessor();
    (**(code **)(*(long *)(DVar1.unknown + -8) + 0x20))(param_1,param_2,DVar1.unknown);
    puVar2 = &DAT_100fc5b30;
    FUN_1000f7830(&DAT_100fc5b30,&DAT_100c492c8);
    *(undefined8 *)((long)param_1 + (long)*(int *)(puVar2 + 0x30)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(puVar2 + 0x30));
    uVar4 = 0;
  }
  _swift_storeEnumTagMultiPayload(param_1,param_3,uVar4);
  return param_1;
}



/* Address: 0x10042784c | FUN_10042784c */

void * FUN_10042784c(void *param_1,void *param_2,long param_3)

{
  Date DVar1;
  undefined *puVar2;
  void *pvVar3;
  undefined8 uVar4;
  
  if (param_1 != param_2) {
    FUN_10005241c(param_1,FUN_100427730);
    pvVar3 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    if ((int)pvVar3 == 1) {
      DVar1 = Foundation::Date::typeMetadataAccessor();
      (**(code **)(*(long *)(DVar1.unknown + -8) + 0x20))(param_1,param_2,DVar1.unknown);
      puVar2 = &DAT_100fc5b30;
      FUN_1000f7830(&DAT_100fc5b30,&DAT_100c492c8);
      *(undefined8 *)((long)param_1 + (long)*(int *)(puVar2 + 0x30)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(puVar2 + 0x30));
      uVar4 = 1;
    }
    else {
      if ((int)pvVar3 != 0) {
        pvVar3 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
        return pvVar3;
      }
      DVar1 = Foundation::Date::typeMetadataAccessor();
      (**(code **)(*(long *)(DVar1.unknown + -8) + 0x20))(param_1,param_2,DVar1.unknown);
      puVar2 = &DAT_100fc5b30;
      FUN_1000f7830(&DAT_100fc5b30,&DAT_100c492c8);
      *(undefined8 *)((long)param_1 + (long)*(int *)(puVar2 + 0x30)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(puVar2 + 0x30));
      uVar4 = 0;
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,uVar4);
  }
  return param_1;
}



/* Address: 0x10042796c | FUN_10042796c */

undefined1  [16] FUN_10042796c(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  Date DVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [32];
  undefined1 *local_40;
  undefined1 *local_38;
  
  DVar2 = Foundation::Date::typeMetadataAccessor();
  puVar1 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38;
  if (param_2 < 0x40) {
    lVar4 = *(long *)(DVar2.unknown + -8);
    _swift_getTupleTypeLayout2
              (auStack_60,lVar4 + 0x40,
               PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40);
    local_40 = auStack_60;
    _swift_getTupleTypeLayout2(auStack_80,lVar4 + 0x40,puVar1 + 0x40);
    local_38 = auStack_80;
    _swift_initEnumMetadataMultiPayload(param_1,0x100,2,&local_40);
    DVar2.unknown = (undefined *)0x0;
    uVar3 = 0;
  }
  else {
    uVar3 = 0x3f;
  }
  auVar5._8_8_ = uVar3;
  auVar5._0_8_ = DVar2.unknown;
  return auVar5;
}



/* Address: 0x100427a08 | FUN_100427a08 */

void FUN_100427a08(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  return;
}



/* Address: 0x100427a1c | FUN_100427a1c */

undefined1  [16] FUN_100427a1c(void)

{
  return ZEXT816(0x100ed3f80);
}



/* Address: 0x100427a2c | FUN_100427a2c */

long * FUN_100427a2c(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  Date DVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  
  uVar4 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar4 >> 0x11 & 1) == 0) {
    lVar11 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar11;
    lVar8 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = lVar8;
    lVar8 = param_2[4];
    lVar12 = param_2[5];
    param_1[4] = lVar8;
    param_1[5] = lVar12;
    lVar12 = param_2[6];
    param_1[6] = lVar12;
    iVar5 = *(int *)(param_3 + 0x20);
    DVar6 = Foundation::Date::typeMetadataAccessor();
    lVar13 = *(long *)(DVar6.unknown + -8);
    pcVar14 = *(code **)(lVar13 + 0x10);
    _swift_bridgeObjectRetain(lVar11);
    _swift_bridgeObjectRetain(lVar8);
    _swift_bridgeObjectRetain(lVar12);
    (*pcVar14)((long)param_1 + (long)iVar5,(long)param_2 + (long)iVar5,DVar6.unknown);
    (*pcVar14)((long)param_1 + (long)*(int *)(param_3 + 0x24),
               (long)param_2 + (long)*(int *)(param_3 + 0x24),DVar6.unknown);
    lVar11 = (long)*(int *)(param_3 + 0x2c);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    pcVar10 = *(code **)(lVar13 + 0x30);
    _swift_bridgeObjectRetain();
    lVar8 = (long)param_2 + lVar11;
    (*pcVar10)(lVar8,1,DVar6.unknown);
    if ((int)lVar8 == 0) {
      (*pcVar14)((long)param_1 + lVar11,(long)param_2 + lVar11,DVar6.unknown);
      (**(code **)(lVar13 + 0x38))((long)param_1 + lVar11,0,1,DVar6.unknown);
    }
    else {
      puVar7 = &DAT_100fc5a30;
      FUN_1000f7830(&DAT_100fc5a30,&DAT_100c49370);
      _memcpy((void *)((long)param_1 + lVar11),(void *)((long)param_2 + lVar11),
              *(size_t *)(*(long *)(puVar7 + -8) + 0x40));
    }
    lVar11 = (long)*(int *)(param_3 + 0x30);
    lVar8 = (long)param_2 + lVar11;
    (*pcVar10)(lVar8,1,DVar6.unknown);
    if ((int)lVar8 == 0) {
      (*pcVar14)((long)param_1 + lVar11,(long)param_2 + lVar11,DVar6.unknown);
      (**(code **)(lVar13 + 0x38))((long)param_1 + lVar11,0,1,DVar6.unknown);
    }
    else {
      puVar7 = &DAT_100fc5a30;
      FUN_1000f7830(&DAT_100fc5a30,&DAT_100c49370);
      _memcpy((void *)((long)param_1 + lVar11),(void *)((long)param_2 + lVar11),
              *(size_t *)(*(long *)(puVar7 + -8) + 0x40));
    }
    iVar5 = *(int *)(param_3 + 0x38);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x34)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
    *(undefined1 *)((long)param_1 + (long)iVar5) = *(undefined1 *)((long)param_2 + (long)iVar5);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
  }
  else {
    lVar8 = *param_2;
    *param_1 = lVar8;
    uVar9 = (ulong)uVar4 & 0xff;
    param_1 = (long *)(lVar8 + (uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x100427c24 | FUN_100427c24 */

void FUN_100427c24(long param_1,long param_2)

{
  int iVar1;
  Date DVar2;
  code *UNRECOVERED_JUMPTABLE;
  code *pcVar3;
  long lVar4;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x30));
  iVar1 = *(int *)(param_2 + 0x20);
  DVar2 = Foundation::Date::typeMetadataAccessor();
  lVar4 = *(long *)(DVar2.unknown + -8);
  UNRECOVERED_JUMPTABLE = *(code **)(lVar4 + 8);
  (*UNRECOVERED_JUMPTABLE)(param_1 + iVar1,DVar2.unknown);
  (*UNRECOVERED_JUMPTABLE)(param_1 + *(int *)(param_2 + 0x24),DVar2.unknown);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x28) + 8));
  iVar1 = *(int *)(param_2 + 0x2c);
  pcVar3 = *(code **)(lVar4 + 0x30);
  lVar4 = param_1 + iVar1;
  (*pcVar3)(lVar4,1,DVar2.unknown);
  if ((int)lVar4 == 0) {
    (*UNRECOVERED_JUMPTABLE)(param_1 + iVar1,DVar2.unknown);
  }
  iVar1 = *(int *)(param_2 + 0x30);
  lVar4 = param_1 + iVar1;
  (*pcVar3)(lVar4,1,DVar2.unknown);
  if ((int)lVar4 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100427d28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1 + iVar1,DVar2.unknown);
  return;
}



/* Address: 0x100427d2c | FUN_100427d2c */

undefined8 * FUN_100427d2c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  Date DVar5;
  long lVar6;
  undefined *puVar7;
  code *pcVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  code *pcVar12;
  undefined8 uVar13;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  uVar13 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar13;
  uVar13 = param_2[4];
  uVar10 = param_2[5];
  param_1[4] = uVar13;
  param_1[5] = uVar10;
  uVar10 = param_2[6];
  param_1[6] = uVar10;
  iVar4 = *(int *)(param_3 + 0x20);
  DVar5 = Foundation::Date::typeMetadataAccessor();
  lVar11 = *(long *)(DVar5.unknown + -8);
  pcVar12 = *(code **)(lVar11 + 0x10);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar13);
  _swift_bridgeObjectRetain(uVar10);
  (*pcVar12)((long)param_1 + (long)iVar4,(long)param_2 + (long)iVar4,DVar5.unknown);
  (*pcVar12)((long)param_1 + (long)*(int *)(param_3 + 0x24),
             (long)param_2 + (long)*(int *)(param_3 + 0x24),DVar5.unknown);
  lVar9 = (long)*(int *)(param_3 + 0x2c);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  uVar13 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar13;
  pcVar8 = *(code **)(lVar11 + 0x30);
  _swift_bridgeObjectRetain();
  lVar6 = (long)param_2 + lVar9;
  (*pcVar8)(lVar6,1,DVar5.unknown);
  if ((int)lVar6 == 0) {
    (*pcVar12)((long)param_1 + lVar9,(long)param_2 + lVar9,DVar5.unknown);
    (**(code **)(lVar11 + 0x38))((long)param_1 + lVar9,0,1,DVar5.unknown);
  }
  else {
    puVar7 = &DAT_100fc5a30;
    FUN_1000f7830(&DAT_100fc5a30,&DAT_100c49370);
    _memcpy((void *)((long)param_1 + lVar9),(void *)((long)param_2 + lVar9),
            *(size_t *)(*(long *)(puVar7 + -8) + 0x40));
  }
  lVar9 = (long)*(int *)(param_3 + 0x30);
  lVar6 = (long)param_2 + lVar9;
  (*pcVar8)(lVar6,1,DVar5.unknown);
  if ((int)lVar6 == 0) {
    (*pcVar12)((long)param_1 + lVar9,(long)param_2 + lVar9,DVar5.unknown);
    (**(code **)(lVar11 + 0x38))((long)param_1 + lVar9,0,1,DVar5.unknown);
  }
  else {
    puVar7 = &DAT_100fc5a30;
    FUN_1000f7830(&DAT_100fc5a30,&DAT_100c49370);
    _memcpy((void *)((long)param_1 + lVar9),(void *)((long)param_2 + lVar9),
            *(size_t *)(*(long *)(puVar7 + -8) + 0x40));
  }
  iVar4 = *(int *)(param_3 + 0x38);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x34)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  *(undefined1 *)((long)param_1 + (long)iVar4) = *(undefined1 *)((long)param_2 + (long)iVar4);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
  return param_1;
}



/* Address: 0x100427ef8 | FUN_100427ef8 */

undefined8 * FUN_100427ef8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  Date DVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  code *pcVar10;
  code *pcVar11;
  long lVar12;
  
  *param_1 = *param_2;
  uVar8 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar8);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  uVar8 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar8);
  param_1[5] = param_2[5];
  uVar8 = param_1[6];
  param_1[6] = param_2[6];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar8);
  iVar3 = *(int *)(param_3 + 0x20);
  DVar4 = Foundation::Date::typeMetadataAccessor();
  lVar9 = *(long *)(DVar4.unknown + -8);
  pcVar10 = *(code **)(lVar9 + 0x18);
  (*pcVar10)((long)param_1 + (long)iVar3,(long)param_2 + (long)iVar3,DVar4.unknown);
  (*pcVar10)((long)param_1 + (long)*(int *)(param_3 + 0x24),
             (long)param_2 + (long)*(int *)(param_3 + 0x24),DVar4.unknown);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  *puVar1 = *puVar2;
  uVar8 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar8);
  lVar12 = (long)*(int *)(param_3 + 0x2c);
  pcVar11 = *(code **)(lVar9 + 0x30);
  lVar5 = (long)param_1 + lVar12;
  (*pcVar11)(lVar5,1,DVar4.unknown);
  lVar6 = (long)param_2 + lVar12;
  (*pcVar11)(lVar6,1,DVar4.unknown);
  if ((int)lVar5 == 0) {
    if ((int)lVar6 != 0) {
      (**(code **)(lVar9 + 8))((long)param_1 + lVar12,DVar4.unknown);
      goto LAB_100428068;
    }
    (*pcVar10)((long)param_1 + lVar12,(long)param_2 + lVar12,DVar4.unknown);
  }
  else if ((int)lVar6 == 0) {
    (**(code **)(lVar9 + 0x10))((long)param_1 + lVar12,(long)param_2 + lVar12,DVar4.unknown);
    (**(code **)(lVar9 + 0x38))((long)param_1 + lVar12,0,1,DVar4.unknown);
  }
  else {
LAB_100428068:
    puVar7 = &DAT_100fc5a30;
    FUN_1000f7830(&DAT_100fc5a30,&DAT_100c49370);
    _memcpy((void *)((long)param_1 + lVar12),(void *)((long)param_2 + lVar12),
            *(size_t *)(*(long *)(puVar7 + -8) + 0x40));
  }
  lVar12 = (long)*(int *)(param_3 + 0x30);
  lVar5 = (long)param_1 + lVar12;
  (*pcVar11)(lVar5,1,DVar4.unknown);
  lVar6 = (long)param_2 + lVar12;
  (*pcVar11)(lVar6,1,DVar4.unknown);
  if ((int)lVar5 == 0) {
    if ((int)lVar6 == 0) {
      (*pcVar10)((long)param_1 + lVar12,(long)param_2 + lVar12,DVar4.unknown);
      goto LAB_10042812c;
    }
    (**(code **)(lVar9 + 8))((long)param_1 + lVar12,DVar4.unknown);
  }
  else if ((int)lVar6 == 0) {
    (**(code **)(lVar9 + 0x10))((long)param_1 + lVar12,(long)param_2 + lVar12,DVar4.unknown);
    (**(code **)(lVar9 + 0x38))((long)param_1 + lVar12,0,1,DVar4.unknown);
    goto LAB_10042812c;
  }
  puVar7 = &DAT_100fc5a30;
  FUN_1000f7830(&DAT_100fc5a30,&DAT_100c49370);
  _memcpy((void *)((long)param_1 + lVar12),(void *)((long)param_2 + lVar12),
          *(size_t *)(*(long *)(puVar7 + -8) + 0x40));
LAB_10042812c:
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x34)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x38)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
  return param_1;
}



/* Address: 0x100428198 | FUN_100428198 */

undefined8 * FUN_100428198(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  Date DVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  code *pcVar8;
  code *pcVar9;
  long lVar10;
  undefined8 uVar11;
  
  uVar11 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar11;
  param_1[2] = param_2[2];
  uVar11 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar11;
  uVar11 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar11;
  iVar1 = *(int *)(param_3 + 0x20);
  DVar4 = Foundation::Date::typeMetadataAccessor();
  lVar7 = *(long *)(DVar4.unknown + -8);
  pcVar8 = *(code **)(lVar7 + 0x20);
  (*pcVar8)((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,DVar4.unknown);
  (*pcVar8)((long)param_1 + (long)*(int *)(param_3 + 0x24),
            (long)param_2 + (long)*(int *)(param_3 + 0x24),DVar4.unknown);
  lVar10 = (long)*(int *)(param_3 + 0x2c);
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  uVar11 = *puVar2;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar11;
  pcVar9 = *(code **)(lVar7 + 0x30);
  lVar5 = (long)param_2 + lVar10;
  (*pcVar9)(lVar5,1,DVar4.unknown);
  if ((int)lVar5 == 0) {
    (*pcVar8)((long)param_1 + lVar10,(long)param_2 + lVar10,DVar4.unknown);
    (**(code **)(lVar7 + 0x38))((long)param_1 + lVar10,0,1,DVar4.unknown);
  }
  else {
    puVar6 = &DAT_100fc5a30;
    FUN_1000f7830(&DAT_100fc5a30,&DAT_100c49370);
    _memcpy((void *)((long)param_1 + lVar10),(void *)((long)param_2 + lVar10),
            *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
  lVar10 = (long)*(int *)(param_3 + 0x30);
  lVar5 = (long)param_2 + lVar10;
  (*pcVar9)(lVar5,1,DVar4.unknown);
  if ((int)lVar5 == 0) {
    (*pcVar8)((long)param_1 + lVar10,(long)param_2 + lVar10,DVar4.unknown);
    (**(code **)(lVar7 + 0x38))((long)param_1 + lVar10,0,1,DVar4.unknown);
  }
  else {
    puVar6 = &DAT_100fc5a30;
    FUN_1000f7830(&DAT_100fc5a30,&DAT_100c49370);
    _memcpy((void *)((long)param_1 + lVar10),(void *)((long)param_2 + lVar10),
            *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
  iVar1 = *(int *)(param_3 + 0x38);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x34)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  *(undefined1 *)((long)param_1 + (long)iVar1) = *(undefined1 *)((long)param_2 + (long)iVar1);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
  return param_1;
}



/* Address: 0x100428338 | FUN_100428338 */

undefined8 * FUN_100428338(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  Date DVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  code *pcVar11;
  code *pcVar12;
  long lVar13;
  
  uVar5 = param_2[1];
  uVar4 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  _swift_bridgeObjectRelease(uVar4);
  uVar5 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar5;
  uVar5 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRelease(uVar5);
  uVar5 = param_2[6];
  uVar4 = param_1[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar5;
  _swift_bridgeObjectRelease(uVar4);
  iVar3 = *(int *)(param_3 + 0x20);
  DVar6 = Foundation::Date::typeMetadataAccessor();
  lVar10 = *(long *)(DVar6.unknown + -8);
  pcVar11 = *(code **)(lVar10 + 0x28);
  (*pcVar11)((long)param_1 + (long)iVar3,(long)param_2 + (long)iVar3,DVar6.unknown);
  (*pcVar11)((long)param_1 + (long)*(int *)(param_3 + 0x24),
             (long)param_2 + (long)*(int *)(param_3 + 0x24),DVar6.unknown);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  uVar5 = puVar2[1];
  uVar4 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar5;
  _swift_bridgeObjectRelease(uVar4);
  lVar13 = (long)*(int *)(param_3 + 0x2c);
  pcVar12 = *(code **)(lVar10 + 0x30);
  lVar7 = (long)param_1 + lVar13;
  (*pcVar12)(lVar7,1,DVar6.unknown);
  lVar8 = (long)param_2 + lVar13;
  (*pcVar12)(lVar8,1,DVar6.unknown);
  if ((int)lVar7 == 0) {
    if ((int)lVar8 != 0) {
      (**(code **)(lVar10 + 8))((long)param_1 + lVar13,DVar6.unknown);
      goto LAB_100428468;
    }
    (*pcVar11)((long)param_1 + lVar13,(long)param_2 + lVar13,DVar6.unknown);
  }
  else if ((int)lVar8 == 0) {
    (**(code **)(lVar10 + 0x20))((long)param_1 + lVar13,(long)param_2 + lVar13,DVar6.unknown);
    (**(code **)(lVar10 + 0x38))((long)param_1 + lVar13,0,1,DVar6.unknown);
  }
  else {
LAB_100428468:
    puVar9 = &DAT_100fc5a30;
    FUN_1000f7830(&DAT_100fc5a30,&DAT_100c49370);
    _memcpy((void *)((long)param_1 + lVar13),(void *)((long)param_2 + lVar13),
            *(size_t *)(*(long *)(puVar9 + -8) + 0x40));
  }
  lVar13 = (long)*(int *)(param_3 + 0x30);
  lVar7 = (long)param_1 + lVar13;
  (*pcVar12)(lVar7,1,DVar6.unknown);
  lVar8 = (long)param_2 + lVar13;
  (*pcVar12)(lVar8,1,DVar6.unknown);
  if ((int)lVar7 == 0) {
    if ((int)lVar8 == 0) {
      (*pcVar11)((long)param_1 + lVar13,(long)param_2 + lVar13,DVar6.unknown);
      goto LAB_10042852c;
    }
    (**(code **)(lVar10 + 8))((long)param_1 + lVar13,DVar6.unknown);
  }
  else if ((int)lVar8 == 0) {
    (**(code **)(lVar10 + 0x20))((long)param_1 + lVar13,(long)param_2 + lVar13,DVar6.unknown);
    (**(code **)(lVar10 + 0x38))((long)param_1 + lVar13,0,1,DVar6.unknown);
    goto LAB_10042852c;
  }
  puVar9 = &DAT_100fc5a30;
  FUN_1000f7830(&DAT_100fc5a30,&DAT_100c49370);
  _memcpy((void *)((long)param_1 + lVar13),(void *)((long)param_2 + lVar13),
          *(size_t *)(*(long *)(puVar9 + -8) + 0x40));
LAB_10042852c:
  iVar3 = *(int *)(param_3 + 0x38);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x34)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  *(undefined1 *)((long)param_1 + (long)iVar3) = *(undefined1 *)((long)param_2 + (long)iVar3);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
  return param_1;
}



/* Address: 0x100428594 | FUN_100428594 */

void FUN_100428594(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1004285a0 | FUN_1004285a0 */

ulong FUN_1004285a0(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  Date DVar2;
  ulong uVar3;
  long lVar4;
  
  if ((int)param_2 == 0x7fffffff) {
    uVar3 = *(ulong *)(param_1 + 8);
    if (0xfffffffe < uVar3) {
      uVar3 = 0xffffffff;
    }
    return (ulong)((int)uVar3 + 1);
  }
  DVar2 = Foundation::Date::typeMetadataAccessor();
  lVar4 = *(long *)(DVar2.unknown + -8);
  if ((int)param_2 == *(int *)(lVar4 + 0x54)) {
    iVar1 = *(int *)(param_3 + 0x20);
  }
  else {
    DVar2.unknown = &DAT_100fc5a30;
    FUN_1000f7830(&DAT_100fc5a30,&DAT_100c49370);
    lVar4 = *(long *)(DVar2.unknown + -8);
    iVar1 = *(int *)(param_3 + 0x2c);
  }
  uVar3 = param_1 + iVar1;
                    /* WARNING: Could not recover jumptable at 0x000100428648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 0x30))(uVar3,param_2,DVar2.unknown);
  return uVar3;
}



/* Address: 0x10042864c | FUN_10042864c */

void FUN_10042864c(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x100428658 | FUN_100428658 */

void FUN_100428658(long param_1,undefined8 param_2,int param_3,long param_4)

{
  int iVar1;
  Date DVar2;
  long lVar3;
  
  if (param_3 == 0x7fffffff) {
    *(ulong *)(param_1 + 8) = (ulong)((int)param_2 - 1);
    return;
  }
  DVar2 = Foundation::Date::typeMetadataAccessor();
  lVar3 = *(long *)(DVar2.unknown + -8);
  if (param_3 == *(int *)(lVar3 + 0x54)) {
    iVar1 = *(int *)(param_4 + 0x20);
  }
  else {
    DVar2.unknown = &DAT_100fc5a30;
    FUN_1000f7830(&DAT_100fc5a30,&DAT_100c49370);
    lVar3 = *(long *)(DVar2.unknown + -8);
    iVar1 = *(int *)(param_4 + 0x2c);
  }
                    /* WARNING: Could not recover jumptable at 0x0001004286fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x38))(param_1 + iVar1,param_2,param_2,DVar2.unknown);
  return;
}



/* Address: 0x100428700 | FUN_100428700 */

void FUN_100428700(long param_1,ulong param_2)

{
  Date DVar1;
  long lVar2;
  undefined *local_80;
  undefined *puStack_78;
  undefined *local_70;
  undefined *puStack_68;
  long local_60;
  long lStack_58;
  undefined *local_50;
  long local_48;
  long lStack_40;
  undefined *local_38;
  undefined *puStack_30;
  undefined *local_28;
  
  puStack_78 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
  local_80 = &DAT_100c49c60;
  local_70 = &DAT_100c49c60;
  puStack_68 = &DAT_100c49c60;
  DVar1 = Foundation::Date::typeMetadataAccessor();
  if (param_2 < 0x40) {
    local_60 = *(long *)(DVar1.unknown + -8) + 0x40;
    local_50 = &DAT_100c49c78;
    lVar2 = 0x13f;
    lStack_58 = local_60;
    FUN_1004287bc();
    if (param_2 < 0x40) {
      local_48 = *(long *)(lVar2 + -8) + 0x40;
      local_38 = &DAT_100c49c90;
      puStack_30 = &DAT_100c49c90;
      local_28 = &DAT_100c49c90;
      lStack_40 = local_48;
      _swift_initStructMetadata(param_1,0x100,0xc,&local_80,param_1 + 0x10);
    }
  }
  return;
}



/* Address: 0x1004287bc | FUN_1004287bc */

void FUN_1004287bc(void)

{
  Optional OVar1;
  Date DVar2;
  undefined7 extraout_var;
  
  if (DAT_100fc61a0 == 0) {
    DVar2 = Foundation::Date::typeMetadataAccessor();
    OVar1 = Swift::Optional::typeMetadataAccessor();
    if (DVar2.unknown == (undefined *)0x0) {
      DAT_100fc61a0 = CONCAT71(extraout_var,OVar1.value);
    }
  }
  return;
}



/* Address: 0x100428810 | FUN_100428810 */

void FUN_100428810(void)

{
  FUN_100425d80();
  return;
}



/* Address: 0x10042881c | FUN_10042881c */

void FUN_10042881c(undefined8 *param_1)

{
  FUN_10041ae14(*param_1,param_1[1],*(undefined1 *)(param_1 + 2));
  return;
}



/* Address: 0x10042882c | FUN_10042882c */

void FUN_10042882c(void)

{
  FUN_100425dec();
  return;
}



/* Address: 0x100428840 | FUN_100428840 */

void FUN_100428840(void)

{
  FUN_100425e58();
  return;
}



/* Address: 0x10042884c | FUN_10042884c */

int FUN_10042884c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfb < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xfc;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 5) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x100428894 | FUN_100428894 */

void FUN_100428894(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xfc) {
    if (0xfb < param_3) {
      *(undefined1 *)((long)param_1 + 0x11) = 0;
    }
    if (param_2 != 0) {
      *(char *)(param_1 + 2) = -(char)param_2;
      return;
    }
  }
  else {
    *(undefined1 *)(param_1 + 2) = 0;
    *param_1 = (ulong)(param_2 - 0xfc);
    param_1[1] = 0;
    if (0xfb < param_3) {
      *(undefined1 *)((long)param_1 + 0x11) = 1;
    }
  }
  return;
}



/* Address: 0x1004288d8 | FUN_1004288d8 */

uint FUN_1004288d8(int *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1 + 4;
  if (*(byte *)(param_1 + 4) < 4) {
    uVar1 = (uint)*(byte *)(param_1 + 4);
  }
  return uVar1;
}



/* Address: 0x1004288f0 | FUN_1004288f0 */

void FUN_1004288f0(ulong *param_1,uint param_2)

{
  if (3 < param_2) {
    *param_1 = (ulong)(param_2 - 4);
    param_1[1] = 0;
    param_2 = 4;
  }
  *(char *)(param_1 + 2) = (char)param_2;
  return;
}



/* Address: 0x100428908 | FUN_100428908 */

undefined1  [16] FUN_100428908(void)

{
  return ZEXT816(0x100ed4010);
}



/* Address: 0x100428918 | FUN_100428918 */

int FUN_100428918(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf5 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 10) {
      iVar2 = 4;
    }
    if (param_2 + 10 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_100428994;
        goto LAB_100428978;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_100428978:
      return ((uint)*param_1 | uVar1 << 8) - 10;
    }
  }
LAB_100428994:
  iVar2 = *param_1 - 0xb;
  if (*param_1 < 0xb) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Address: 0x1004289a8 | FUN_1004289a8 */

void FUN_1004289a8(char *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 2;
  if (0xfffeff < param_3 + 10) {
    uVar3 = 4;
  }
  if (param_3 + 10 >> 8 < 0xff) {
    uVar3 = 1;
  }
  uVar2 = 0;
  if (0xf5 < param_3) {
    uVar2 = uVar3;
  }
  if (param_2 < 0xf6) {
    if (uVar2 < 2) {
      if (uVar2 != 0) {
        param_1[1] = '\0';
        if (param_2 == 0) {
          return;
        }
        goto LAB_100428a28;
      }
    }
    else if (uVar2 == 2) {
      param_1[1] = '\0';
      param_1[2] = '\0';
    }
    else {
      param_1[1] = '\0';
      param_1[2] = '\0';
      param_1[3] = '\0';
      param_1[4] = '\0';
    }
    if (param_2 != 0) {
LAB_100428a28:
      *param_1 = (char)param_2 + '\n';
      return;
    }
  }
  else {
    iVar1 = (param_2 - 0xf6 >> 8) + 1;
    *param_1 = (char)(param_2 - 0xf6);
    if (1 < uVar2) {
      if (uVar2 != 2) {
        *(int *)(param_1 + 1) = iVar1;
        return;
      }
      *(short *)(param_1 + 1) = (short)iVar1;
      return;
    }
    if (uVar2 != 0) {
      param_1[1] = (char)iVar1;
      return;
    }
  }
  return;
}



/* Address: 0x100428a58 | FUN_100428a58 */

undefined1  [16] FUN_100428a58(void)

{
  return ZEXT816(0x100ed40a0);
}



/* Address: 0x100428a68 | FUN_100428a68 */

undefined1  [16] FUN_100428a68(void)

{
  return ZEXT816(0x100ed4130);
}



/* Address: 0x100428a78 | FUN_100428a78 */

int FUN_100428a78(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf6 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 9) {
      iVar2 = 4;
    }
    if (param_2 + 9 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_100428af4;
        goto LAB_100428ad8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_100428ad8:
      return ((uint)*param_1 | uVar1 << 8) - 9;
    }
  }
LAB_100428af4:
  iVar2 = *param_1 - 10;
  if (*param_1 < 10) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Address: 0x100428b08 | FUN_100428b08 */

void FUN_100428b08(char *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 2;
  if (0xfffeff < param_3 + 9) {
    uVar3 = 4;
  }
  if (param_3 + 9 >> 8 < 0xff) {
    uVar3 = 1;
  }
  uVar2 = 0;
  if (0xf6 < param_3) {
    uVar2 = uVar3;
  }
  if (param_2 < 0xf7) {
    if (uVar2 < 2) {
      if (uVar2 != 0) {
        param_1[1] = '\0';
        if (param_2 == 0) {
          return;
        }
        goto LAB_100428b88;
      }
    }
    else if (uVar2 == 2) {
      param_1[1] = '\0';
      param_1[2] = '\0';
    }
    else {
      param_1[1] = '\0';
      param_1[2] = '\0';
      param_1[3] = '\0';
      param_1[4] = '\0';
    }
    if (param_2 != 0) {
LAB_100428b88:
      *param_1 = (char)param_2 + '\t';
      return;
    }
  }
  else {
    iVar1 = (param_2 - 0xf7 >> 8) + 1;
    *param_1 = (char)(param_2 - 0xf7);
    if (1 < uVar2) {
      if (uVar2 != 2) {
        *(int *)(param_1 + 1) = iVar1;
        return;
      }
      *(short *)(param_1 + 1) = (short)iVar1;
      return;
    }
    if (uVar2 != 0) {
      param_1[1] = (char)iVar1;
      return;
    }
  }
  return;
}



/* Address: 0x100428bb8 | FUN_100428bb8 */

undefined1  [16] FUN_100428bb8(void)

{
  return ZEXT816(0x100ed41c0);
}



/* Address: 0x100428bc8 | FUN_100428bc8 */

void FUN_100428bc8(void)

{
  return;
}



/* Address: 0x100428bcc | FUN_100428bcc */

undefined1  [16] FUN_100428bcc(void)

{
  return ZEXT816(0x100ed4250);
}



/* Address: 0x100428bdc | FUN_100428bdc */

undefined1  [16] FUN_100428bdc(void)

{
  return ZEXT816(0x100ed42e0);
}



/* Address: 0x100428bec | thunk_FUN_100428bf0 */

void thunk_FUN_100428bf0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc61f8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c49d94;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c49d94,&DAT_100ed42e0);
  DAT_100fc61f8 = pTVar1;
  return;
}



/* Address: 0x100428bf0 | FUN_100428bf0 */

void FUN_100428bf0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc61f8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c49d94;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c49d94,&DAT_100ed42e0);
  DAT_100fc61f8 = pTVar1;
  return;
}



/* Address: 0x100428c30 | thunk_FUN_100428c34 */

void thunk_FUN_100428c34(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc6200 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c49d2c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c49d2c,&DAT_100ed42e0);
  DAT_100fc6200 = pTVar1;
  return;
}



/* Address: 0x100428c34 | FUN_100428c34 */

void FUN_100428c34(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc6200 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c49d2c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c49d2c,&DAT_100ed42e0);
  DAT_100fc6200 = pTVar1;
  return;
}


