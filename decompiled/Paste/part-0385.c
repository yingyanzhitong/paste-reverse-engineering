/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1004be170 | FUN_1004be170 */

ulong FUN_1004be170(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  URL UVar2;
  long lVar3;
  ulong uVar4;
  
  UVar2.unknown = (undefined *)0x0;
  FUN_1004bcbcc();
  lVar3 = *(long *)(UVar2.unknown + -8);
  if ((int)param_2 == *(int *)(lVar3 + 0x54)) {
    iVar1 = *(int *)(param_3 + 0x1c);
  }
  else {
    UVar2 = Foundation::URL::typeMetadataAccessor();
    lVar3 = *(long *)(UVar2.unknown + -8);
    if ((int)param_2 != *(int *)(lVar3 + 0x54)) {
      uVar4 = *(ulong *)(param_1 + *(int *)(param_3 + 0x28));
      if (0xfffffffe < uVar4) {
        uVar4 = 0xffffffff;
      }
      return (ulong)((int)uVar4 + 1);
    }
    iVar1 = *(int *)(param_3 + 0x24);
  }
  uVar4 = param_1 + iVar1;
                    /* WARNING: Could not recover jumptable at 0x0001004be1e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x30))(uVar4,param_2,UVar2.unknown);
  return uVar4;
}



/* Address: 0x1004be214 | FUN_1004be214 */

void FUN_1004be214(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1004be220 | FUN_1004be220 */

void FUN_1004be220(long param_1,undefined8 param_2,int param_3,long param_4)

{
  int iVar1;
  URL UVar2;
  long lVar3;
  
  UVar2.unknown = (undefined *)0x0;
  FUN_1004bcbcc();
  lVar3 = *(long *)(UVar2.unknown + -8);
  if (param_3 == *(int *)(lVar3 + 0x54)) {
    iVar1 = *(int *)(param_4 + 0x1c);
  }
  else {
    UVar2 = Foundation::URL::typeMetadataAccessor();
    lVar3 = *(long *)(UVar2.unknown + -8);
    if (param_3 != *(int *)(lVar3 + 0x54)) {
      *(ulong *)(param_1 + *(int *)(param_4 + 0x28)) = (ulong)((int)param_2 - 1);
      return;
    }
    iVar1 = *(int *)(param_4 + 0x24);
  }
                    /* WARNING: Could not recover jumptable at 0x0001004be2a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x38))(param_1 + iVar1,param_2,param_2,UVar2.unknown);
  return;
}



/* Address: 0x1004be2c0 | FUN_1004be2c0 */

void FUN_1004be2c0(long param_1,ulong param_2)

{
  long lVar1;
  URL UVar2;
  undefined *local_78;
  undefined *puStack_70;
  undefined *local_68;
  long local_60;
  undefined *puStack_58;
  long local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  
  local_78 = &DAT_100c50728;
  puStack_70 = &DAT_100c50740;
  local_68 = &DAT_100c50758;
  lVar1 = 0x13f;
  FUN_1004bcbcc();
  if (param_2 < 0x40) {
    local_60 = *(long *)(lVar1 + -8) + 0x40;
    puStack_58 = &DAT_100c50728;
    UVar2 = Foundation::URL::typeMetadataAccessor();
    if (param_2 < 0x40) {
      local_50 = *(long *)(UVar2.unknown + -8) + 0x40;
      puStack_48 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40;
      local_40 = &DAT_100c50770;
      puStack_38 = &DAT_100c50788;
      puStack_28 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
      local_30 = &DAT_100c507a0;
      _swift_initStructMetadata(param_1,0x100,0xb,&local_78,param_1 + 0x10);
    }
  }
  return;
}



/* Address: 0x1004be39c | FUN_1004be39c */

undefined1  [16] FUN_1004be39c(void)

{
  return ZEXT816(0x100ed99a0);
}



/* Address: 0x1004be3ac | FUN_1004be3ac */

void FUN_1004be3ac(undefined8 *param_1)

{
  FUN_1004b8e9c(*param_1,param_1[1],param_1[2],param_1[3],*(undefined1 *)(param_1 + 4));
  return;
}



/* Address: 0x1004be3c0 | FUN_1004be3c0 */

undefined8 * FUN_1004be3c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = *(undefined1 *)(param_2 + 4);
  FUN_1004b8e20(uVar1,uVar3,uVar2,uVar4,uVar5);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  *(undefined1 *)(param_1 + 4) = uVar5;
  return param_1;
}



/* Address: 0x1004be420 | FUN_1004be420 */

undefined8 * FUN_1004be420(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  
  uVar1 = *param_2;
  uVar5 = param_2[1];
  uVar2 = param_2[2];
  uVar6 = param_2[3];
  uVar9 = *(undefined1 *)(param_2 + 4);
  FUN_1004b8e20(uVar1,uVar5,uVar2,uVar6,uVar9);
  uVar3 = *param_1;
  uVar7 = param_1[1];
  uVar4 = param_1[2];
  uVar8 = param_1[3];
  *param_1 = uVar1;
  param_1[1] = uVar5;
  param_1[2] = uVar2;
  param_1[3] = uVar6;
  uVar10 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = uVar9;
  FUN_1004b8e9c(uVar3,uVar7,uVar4,uVar8,uVar10);
  return param_1;
}



/* Address: 0x1004be490 | FUN_1004be490 */

void FUN_1004be490(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  return;
}



/* Address: 0x1004be4a4 | FUN_1004be4a4 */

undefined8 * FUN_1004be4a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar3 = *(undefined1 *)(param_2 + 4);
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar6 = param_1[3];
  uVar7 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[3] = uVar9;
  param_1[2] = uVar8;
  uVar4 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = uVar3;
  FUN_1004b8e9c(uVar5,uVar1,uVar2,uVar6,uVar4);
  return param_1;
}



/* Address: 0x1004be4ec | FUN_1004be4ec */

int FUN_1004be4ec(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfc < param_2) && (*(char *)((long)param_1 + 0x21) != '\0')) {
    return *param_1 + 0xfd;
  }
  uVar1 = *(byte *)(param_1 + 8) ^ 0xff;
  if (*(byte *)(param_1 + 8) < 4) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x1004be534 | FUN_1004be534 */

void FUN_1004be534(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xfd) {
    if (0xfc < param_3) {
      *(undefined1 *)((long)param_1 + 0x21) = 0;
    }
    if (param_2 != 0) {
      *(char *)(param_1 + 4) = -(char)param_2;
      return;
    }
  }
  else {
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined1 *)(param_1 + 4) = 0;
    *param_1 = (ulong)(param_2 - 0xfd);
    param_1[1] = 0;
    if (0xfc < param_3) {
      *(undefined1 *)((long)param_1 + 0x21) = 1;
    }
  }
  return;
}



/* Address: 0x1004be57c | FUN_1004be57c */

undefined1  [16] FUN_1004be57c(void)

{
  return ZEXT816(0x100ed9a30);
}



/* Address: 0x1004be58c | FUN_1004be58c */

void FUN_1004be58c(void)

{
  return;
}



/* Address: 0x1004be590 | FUN_1004be590 */

undefined1  [16] FUN_1004be590(void)

{
  return ZEXT816(0x100ed9ac0);
}



/* Address: 0x1004be5a0 | FUN_1004be5a0 */

void FUN_1004be5a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  return;
}



/* Address: 0x1004be5b4 | FUN_1004be5b4 */

undefined1  [16] FUN_1004be5b4(void)

{
  return ZEXT816(0x100ed9b50);
}



/* Address: 0x1004be5c4 | FUN_1004be5c4 */

void FUN_1004be5c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  return;
}



/* Address: 0x1004be5d0 | FUN_1004be5d0 */

undefined1  [16] FUN_1004be5d0(void)

{
  return ZEXT816(0x100ed9bc8);
}



/* Address: 0x1004be5e0 | FUN_1004be5e0 */

long * FUN_1004be5e0(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  URL UVar2;
  long *plVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    UVar2 = Foundation::URL::typeMetadataAccessor();
    lVar7 = *(long *)(UVar2.unknown + -8);
    pcVar8 = *(code **)(lVar7 + 0x30);
    plVar3 = param_2;
    (*pcVar8)(param_2,1,UVar2.unknown);
    if ((int)plVar3 == 0) {
      (**(code **)(lVar7 + 0x10))(param_1,param_2,UVar2.unknown);
      (**(code **)(lVar7 + 0x38))(param_1,0,1,UVar2.unknown);
    }
    else {
      puVar4 = &DAT_100fcb378;
      FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
      _memcpy(param_1,param_2,*(size_t *)(*(long *)(puVar4 + -8) + 0x40));
    }
    lVar9 = (long)*(int *)(param_3 + 0x14);
    lVar5 = (long)param_2 + lVar9;
    (*pcVar8)(lVar5,1,UVar2.unknown);
    if ((int)lVar5 == 0) {
      (**(code **)(lVar7 + 0x10))((long)param_1 + lVar9,(long)param_2 + lVar9,UVar2.unknown);
      (**(code **)(lVar7 + 0x38))((long)param_1 + lVar9,0,1,UVar2.unknown);
    }
    else {
      puVar4 = &DAT_100fcb378;
      FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
      _memcpy((void *)((long)param_1 + lVar9),(void *)((long)param_2 + lVar9),
              *(size_t *)(*(long *)(puVar4 + -8) + 0x40));
    }
    lVar9 = (long)*(int *)(param_3 + 0x18);
    lVar5 = (long)param_2 + lVar9;
    (*pcVar8)(lVar5,1,UVar2.unknown);
    if ((int)lVar5 == 0) {
      (**(code **)(lVar7 + 0x10))((long)param_1 + lVar9,(long)param_2 + lVar9,UVar2.unknown);
      (**(code **)(lVar7 + 0x38))((long)param_1 + lVar9,0,1,UVar2.unknown);
    }
    else {
      puVar4 = &DAT_100fcb378;
      FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
      _memcpy((void *)((long)param_1 + lVar9),(void *)((long)param_2 + lVar9),
              *(size_t *)(*(long *)(puVar4 + -8) + 0x40));
    }
    lVar9 = (long)*(int *)(param_3 + 0x1c);
    lVar5 = (long)param_2 + lVar9;
    (*pcVar8)(lVar5,1,UVar2.unknown);
    if ((int)lVar5 == 0) {
      (**(code **)(lVar7 + 0x10))((long)param_1 + lVar9,(long)param_2 + lVar9,UVar2.unknown);
      (**(code **)(lVar7 + 0x38))((long)param_1 + lVar9,0,1,UVar2.unknown);
    }
    else {
      puVar4 = &DAT_100fcb378;
      FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
      _memcpy((void *)((long)param_1 + lVar9),(void *)((long)param_2 + lVar9),
              *(size_t *)(*(long *)(puVar4 + -8) + 0x40));
    }
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



/* Address: 0x1004be81c | FUN_1004be81c */

void FUN_1004be81c(long param_1,long param_2)

{
  int iVar1;
  URL UVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar4 = *(long *)(UVar2.unknown + -8);
  pcVar5 = *(code **)(lVar4 + 0x30);
  lVar3 = param_1;
  (*pcVar5)(param_1,1,UVar2.unknown);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar4 + 8))(param_1,UVar2.unknown);
  }
  iVar1 = *(int *)(param_2 + 0x14);
  lVar3 = param_1 + iVar1;
  (*pcVar5)(lVar3,1,UVar2.unknown);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar4 + 8))(param_1 + iVar1,UVar2.unknown);
  }
  iVar1 = *(int *)(param_2 + 0x18);
  lVar3 = param_1 + iVar1;
  (*pcVar5)(lVar3,1,UVar2.unknown);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar4 + 8))(param_1 + iVar1,UVar2.unknown);
  }
  iVar1 = *(int *)(param_2 + 0x1c);
  lVar3 = param_1 + iVar1;
  (*pcVar5)(lVar3,1,UVar2.unknown);
  if ((int)lVar3 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001004be908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))(param_1 + iVar1,UVar2.unknown);
  return;
}



/* Address: 0x1004be90c | FUN_1004be90c */

void * FUN_1004be90c(void *param_1,void *param_2,long param_3)

{
  URL UVar1;
  void *pvVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar5 = *(long *)(UVar1.unknown + -8);
  pcVar6 = *(code **)(lVar5 + 0x30);
  pvVar2 = param_2;
  (*pcVar6)(param_2,1,UVar1.unknown);
  if ((int)pvVar2 == 0) {
    (**(code **)(lVar5 + 0x10))(param_1,param_2,UVar1.unknown);
    (**(code **)(lVar5 + 0x38))(param_1,0,1,UVar1.unknown);
  }
  else {
    puVar3 = &DAT_100fcb378;
    FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
    _memcpy(param_1,param_2,*(size_t *)(*(long *)(puVar3 + -8) + 0x40));
  }
  lVar7 = (long)*(int *)(param_3 + 0x14);
  lVar4 = (long)param_2 + lVar7;
  (*pcVar6)(lVar4,1,UVar1.unknown);
  if ((int)lVar4 == 0) {
    (**(code **)(lVar5 + 0x10))((long)param_1 + lVar7,(long)param_2 + lVar7,UVar1.unknown);
    (**(code **)(lVar5 + 0x38))((long)param_1 + lVar7,0,1,UVar1.unknown);
  }
  else {
    puVar3 = &DAT_100fcb378;
    FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
    _memcpy((void *)((long)param_1 + lVar7),(void *)((long)param_2 + lVar7),
            *(size_t *)(*(long *)(puVar3 + -8) + 0x40));
  }
  lVar7 = (long)*(int *)(param_3 + 0x18);
  lVar4 = (long)param_2 + lVar7;
  (*pcVar6)(lVar4,1,UVar1.unknown);
  if ((int)lVar4 == 0) {
    (**(code **)(lVar5 + 0x10))((long)param_1 + lVar7,(long)param_2 + lVar7,UVar1.unknown);
    (**(code **)(lVar5 + 0x38))((long)param_1 + lVar7,0,1,UVar1.unknown);
  }
  else {
    puVar3 = &DAT_100fcb378;
    FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
    _memcpy((void *)((long)param_1 + lVar7),(void *)((long)param_2 + lVar7),
            *(size_t *)(*(long *)(puVar3 + -8) + 0x40));
  }
  lVar7 = (long)*(int *)(param_3 + 0x1c);
  lVar4 = (long)param_2 + lVar7;
  (*pcVar6)(lVar4,1,UVar1.unknown);
  if ((int)lVar4 == 0) {
    (**(code **)(lVar5 + 0x10))((long)param_1 + lVar7,(long)param_2 + lVar7,UVar1.unknown);
    (**(code **)(lVar5 + 0x38))((long)param_1 + lVar7,0,1,UVar1.unknown);
  }
  else {
    puVar3 = &DAT_100fcb378;
    FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
    _memcpy((void *)((long)param_1 + lVar7),(void *)((long)param_2 + lVar7),
            *(size_t *)(*(long *)(puVar3 + -8) + 0x40));
  }
  return param_1;
}



/* Address: 0x1004beb1c | FUN_1004beb1c */

void * FUN_1004beb1c(void *param_1,void *param_2,long param_3)

{
  URL UVar1;
  void *pvVar2;
  void *pvVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar7 = *(long *)(UVar1.unknown + -8);
  pcVar8 = *(code **)(lVar7 + 0x30);
  pvVar2 = param_1;
  (*pcVar8)(param_1,1,UVar1.unknown);
  pvVar3 = param_2;
  (*pcVar8)(param_2,1,UVar1.unknown);
  if ((int)pvVar2 == 0) {
    if ((int)pvVar3 != 0) {
      (**(code **)(lVar7 + 8))(param_1,UVar1.unknown);
      goto LAB_1004bebc4;
    }
    (**(code **)(lVar7 + 0x18))(param_1,param_2,UVar1.unknown);
  }
  else if ((int)pvVar3 == 0) {
    (**(code **)(lVar7 + 0x10))(param_1,param_2,UVar1.unknown);
    (**(code **)(lVar7 + 0x38))(param_1,0,1,UVar1.unknown);
  }
  else {
LAB_1004bebc4:
    puVar4 = &DAT_100fcb378;
    FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
    _memcpy(param_1,param_2,*(size_t *)(*(long *)(puVar4 + -8) + 0x40));
  }
  lVar9 = (long)*(int *)(param_3 + 0x14);
  lVar5 = (long)param_1 + lVar9;
  (*pcVar8)(lVar5,1,UVar1.unknown);
  lVar6 = (long)param_2 + lVar9;
  (*pcVar8)(lVar6,1,UVar1.unknown);
  if ((int)lVar5 == 0) {
    if ((int)lVar6 != 0) {
      (**(code **)(lVar7 + 8))((long)param_1 + lVar9,UVar1.unknown);
      goto LAB_1004bec60;
    }
    (**(code **)(lVar7 + 0x18))((long)param_1 + lVar9,(long)param_2 + lVar9,UVar1.unknown);
  }
  else if ((int)lVar6 == 0) {
    (**(code **)(lVar7 + 0x10))((long)param_1 + lVar9,(long)param_2 + lVar9,UVar1.unknown);
    (**(code **)(lVar7 + 0x38))((long)param_1 + lVar9,0,1,UVar1.unknown);
  }
  else {
LAB_1004bec60:
    puVar4 = &DAT_100fcb378;
    FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
    _memcpy((void *)((long)param_1 + lVar9),(void *)((long)param_2 + lVar9),
            *(size_t *)(*(long *)(puVar4 + -8) + 0x40));
  }
  lVar9 = (long)*(int *)(param_3 + 0x18);
  lVar5 = (long)param_1 + lVar9;
  (*pcVar8)(lVar5,1,UVar1.unknown);
  lVar6 = (long)param_2 + lVar9;
  (*pcVar8)(lVar6,1,UVar1.unknown);
  if ((int)lVar5 == 0) {
    if ((int)lVar6 == 0) {
      (**(code **)(lVar7 + 0x18))((long)param_1 + lVar9,(long)param_2 + lVar9,UVar1.unknown);
      goto LAB_1004bed24;
    }
    (**(code **)(lVar7 + 8))((long)param_1 + lVar9,UVar1.unknown);
  }
  else if ((int)lVar6 == 0) {
    (**(code **)(lVar7 + 0x10))((long)param_1 + lVar9,(long)param_2 + lVar9,UVar1.unknown);
    (**(code **)(lVar7 + 0x38))((long)param_1 + lVar9,0,1,UVar1.unknown);
    goto LAB_1004bed24;
  }
  puVar4 = &DAT_100fcb378;
  FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
  _memcpy((void *)((long)param_1 + lVar9),(void *)((long)param_2 + lVar9),
          *(size_t *)(*(long *)(puVar4 + -8) + 0x40));
LAB_1004bed24:
  lVar9 = (long)*(int *)(param_3 + 0x1c);
  lVar5 = (long)param_1 + lVar9;
  (*pcVar8)(lVar5,1,UVar1.unknown);
  lVar6 = (long)param_2 + lVar9;
  (*pcVar8)(lVar6,1,UVar1.unknown);
  if ((int)lVar5 == 0) {
    if ((int)lVar6 == 0) {
      (**(code **)(lVar7 + 0x18))((long)param_1 + lVar9,(long)param_2 + lVar9,UVar1.unknown);
      return param_1;
    }
    (**(code **)(lVar7 + 8))((long)param_1 + lVar9,UVar1.unknown);
  }
  else if ((int)lVar6 == 0) {
    (**(code **)(lVar7 + 0x10))((long)param_1 + lVar9,(long)param_2 + lVar9,UVar1.unknown);
    (**(code **)(lVar7 + 0x38))((long)param_1 + lVar9,0,1,UVar1.unknown);
    return param_1;
  }
  puVar4 = &DAT_100fcb378;
  FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
  _memcpy((void *)((long)param_1 + lVar9),(void *)((long)param_2 + lVar9),
          *(size_t *)(*(long *)(puVar4 + -8) + 0x40));
  return param_1;
}



/* Address: 0x1004bee3c | FUN_1004bee3c */

void * FUN_1004bee3c(void *param_1,void *param_2,long param_3)

{
  URL UVar1;
  void *pvVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar5 = *(long *)(UVar1.unknown + -8);
  pcVar6 = *(code **)(lVar5 + 0x30);
  pvVar2 = param_2;
  (*pcVar6)(param_2,1,UVar1.unknown);
  if ((int)pvVar2 == 0) {
    (**(code **)(lVar5 + 0x20))(param_1,param_2,UVar1.unknown);
    (**(code **)(lVar5 + 0x38))(param_1,0,1,UVar1.unknown);
  }
  else {
    puVar3 = &DAT_100fcb378;
    FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
    _memcpy(param_1,param_2,*(size_t *)(*(long *)(puVar3 + -8) + 0x40));
  }
  lVar7 = (long)*(int *)(param_3 + 0x14);
  lVar4 = (long)param_2 + lVar7;
  (*pcVar6)(lVar4,1,UVar1.unknown);
  if ((int)lVar4 == 0) {
    (**(code **)(lVar5 + 0x20))((long)param_1 + lVar7,(long)param_2 + lVar7,UVar1.unknown);
    (**(code **)(lVar5 + 0x38))((long)param_1 + lVar7,0,1,UVar1.unknown);
  }
  else {
    puVar3 = &DAT_100fcb378;
    FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
    _memcpy((void *)((long)param_1 + lVar7),(void *)((long)param_2 + lVar7),
            *(size_t *)(*(long *)(puVar3 + -8) + 0x40));
  }
  lVar7 = (long)*(int *)(param_3 + 0x18);
  lVar4 = (long)param_2 + lVar7;
  (*pcVar6)(lVar4,1,UVar1.unknown);
  if ((int)lVar4 == 0) {
    (**(code **)(lVar5 + 0x20))((long)param_1 + lVar7,(long)param_2 + lVar7,UVar1.unknown);
    (**(code **)(lVar5 + 0x38))((long)param_1 + lVar7,0,1,UVar1.unknown);
  }
  else {
    puVar3 = &DAT_100fcb378;
    FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
    _memcpy((void *)((long)param_1 + lVar7),(void *)((long)param_2 + lVar7),
            *(size_t *)(*(long *)(puVar3 + -8) + 0x40));
  }
  lVar7 = (long)*(int *)(param_3 + 0x1c);
  lVar4 = (long)param_2 + lVar7;
  (*pcVar6)(lVar4,1,UVar1.unknown);
  if ((int)lVar4 == 0) {
    (**(code **)(lVar5 + 0x20))((long)param_1 + lVar7,(long)param_2 + lVar7,UVar1.unknown);
    (**(code **)(lVar5 + 0x38))((long)param_1 + lVar7,0,1,UVar1.unknown);
  }
  else {
    puVar3 = &DAT_100fcb378;
    FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
    _memcpy((void *)((long)param_1 + lVar7),(void *)((long)param_2 + lVar7),
            *(size_t *)(*(long *)(puVar3 + -8) + 0x40));
  }
  return param_1;
}



/* Address: 0x1004bf04c | FUN_1004bf04c */

void * FUN_1004bf04c(void *param_1,void *param_2,long param_3)

{
  URL UVar1;
  void *pvVar2;
  void *pvVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar7 = *(long *)(UVar1.unknown + -8);
  pcVar8 = *(code **)(lVar7 + 0x30);
  pvVar2 = param_1;
  (*pcVar8)(param_1,1,UVar1.unknown);
  pvVar3 = param_2;
  (*pcVar8)(param_2,1,UVar1.unknown);
  if ((int)pvVar2 == 0) {
    if ((int)pvVar3 != 0) {
      (**(code **)(lVar7 + 8))(param_1,UVar1.unknown);
      goto LAB_1004bf0f4;
    }
    (**(code **)(lVar7 + 0x28))(param_1,param_2,UVar1.unknown);
  }
  else if ((int)pvVar3 == 0) {
    (**(code **)(lVar7 + 0x20))(param_1,param_2,UVar1.unknown);
    (**(code **)(lVar7 + 0x38))(param_1,0,1,UVar1.unknown);
  }
  else {
LAB_1004bf0f4:
    puVar4 = &DAT_100fcb378;
    FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
    _memcpy(param_1,param_2,*(size_t *)(*(long *)(puVar4 + -8) + 0x40));
  }
  lVar9 = (long)*(int *)(param_3 + 0x14);
  lVar5 = (long)param_1 + lVar9;
  (*pcVar8)(lVar5,1,UVar1.unknown);
  lVar6 = (long)param_2 + lVar9;
  (*pcVar8)(lVar6,1,UVar1.unknown);
  if ((int)lVar5 == 0) {
    if ((int)lVar6 != 0) {
      (**(code **)(lVar7 + 8))((long)param_1 + lVar9,UVar1.unknown);
      goto LAB_1004bf190;
    }
    (**(code **)(lVar7 + 0x28))((long)param_1 + lVar9,(long)param_2 + lVar9,UVar1.unknown);
  }
  else if ((int)lVar6 == 0) {
    (**(code **)(lVar7 + 0x20))((long)param_1 + lVar9,(long)param_2 + lVar9,UVar1.unknown);
    (**(code **)(lVar7 + 0x38))((long)param_1 + lVar9,0,1,UVar1.unknown);
  }
  else {
LAB_1004bf190:
    puVar4 = &DAT_100fcb378;
    FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
    _memcpy((void *)((long)param_1 + lVar9),(void *)((long)param_2 + lVar9),
            *(size_t *)(*(long *)(puVar4 + -8) + 0x40));
  }
  lVar9 = (long)*(int *)(param_3 + 0x18);
  lVar5 = (long)param_1 + lVar9;
  (*pcVar8)(lVar5,1,UVar1.unknown);
  lVar6 = (long)param_2 + lVar9;
  (*pcVar8)(lVar6,1,UVar1.unknown);
  if ((int)lVar5 == 0) {
    if ((int)lVar6 == 0) {
      (**(code **)(lVar7 + 0x28))((long)param_1 + lVar9,(long)param_2 + lVar9,UVar1.unknown);
      goto LAB_1004bf254;
    }
    (**(code **)(lVar7 + 8))((long)param_1 + lVar9,UVar1.unknown);
  }
  else if ((int)lVar6 == 0) {
    (**(code **)(lVar7 + 0x20))((long)param_1 + lVar9,(long)param_2 + lVar9,UVar1.unknown);
    (**(code **)(lVar7 + 0x38))((long)param_1 + lVar9,0,1,UVar1.unknown);
    goto LAB_1004bf254;
  }
  puVar4 = &DAT_100fcb378;
  FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
  _memcpy((void *)((long)param_1 + lVar9),(void *)((long)param_2 + lVar9),
          *(size_t *)(*(long *)(puVar4 + -8) + 0x40));
LAB_1004bf254:
  lVar9 = (long)*(int *)(param_3 + 0x1c);
  lVar5 = (long)param_1 + lVar9;
  (*pcVar8)(lVar5,1,UVar1.unknown);
  lVar6 = (long)param_2 + lVar9;
  (*pcVar8)(lVar6,1,UVar1.unknown);
  if ((int)lVar5 == 0) {
    if ((int)lVar6 == 0) {
      (**(code **)(lVar7 + 0x28))((long)param_1 + lVar9,(long)param_2 + lVar9,UVar1.unknown);
      return param_1;
    }
    (**(code **)(lVar7 + 8))((long)param_1 + lVar9,UVar1.unknown);
  }
  else if ((int)lVar6 == 0) {
    (**(code **)(lVar7 + 0x20))((long)param_1 + lVar9,(long)param_2 + lVar9,UVar1.unknown);
    (**(code **)(lVar7 + 0x38))((long)param_1 + lVar9,0,1,UVar1.unknown);
    return param_1;
  }
  puVar4 = &DAT_100fcb378;
  FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
  _memcpy((void *)((long)param_1 + lVar9),(void *)((long)param_2 + lVar9),
          *(size_t *)(*(long *)(puVar4 + -8) + 0x40));
  return param_1;
}



/* Address: 0x1004bf36c | FUN_1004bf36c */

void FUN_1004bf36c(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1004bf378 | FUN_1004bf378 */

void FUN_1004bf378(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fcb378;
  FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
                    /* WARNING: Could not recover jumptable at 0x0001004bf3bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar1 + -8) + 0x30))(param_1,param_2,puVar1);
  return;
}



/* Address: 0x1004bf3c0 | FUN_1004bf3c0 */

void FUN_1004bf3c0(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1004bf3cc | FUN_1004bf3cc */

void FUN_1004bf3cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fcb378;
  FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
                    /* WARNING: Could not recover jumptable at 0x0001004bf414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar1 + -8) + 0x38))(param_1,param_2,param_2,puVar1);
  return;
}



/* Address: 0x1004bf418 | FUN_1004bf418 */

void FUN_1004bf418(long param_1,ulong param_2)

{
  long lVar1;
  long local_40;
  long lStack_38;
  long local_30;
  long lStack_28;
  
  lVar1 = 0x13f;
  FUN_1004bf484();
  if (param_2 < 0x40) {
    local_40 = *(long *)(lVar1 + -8) + 0x40;
    lStack_38 = local_40;
    local_30 = local_40;
    lStack_28 = local_40;
    _swift_initStructMetadata(param_1,0x100,4,&local_40,param_1 + 0x10);
  }
  return;
}



/* Address: 0x1004bf484 | FUN_1004bf484 */

void FUN_1004bf484(void)

{
  Optional OVar1;
  URL UVar2;
  undefined7 extraout_var;
  
  if (DAT_100fcb5d0 == 0) {
    UVar2 = Foundation::URL::typeMetadataAccessor();
    OVar1 = Swift::Optional::typeMetadataAccessor();
    if (UVar2.unknown == (undefined *)0x0) {
      DAT_100fcb5d0 = CONCAT71(extraout_var,OVar1.value);
    }
  }
  return;
}



/* Address: 0x1004bf4d8 | FUN_1004bf4d8 */

long * FUN_1004bf4d8(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  URL UVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  code *pcVar12;
  code *pcVar13;
  long lVar14;
  
  uVar3 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar3 >> 0x11 & 1) == 0) {
    *param_1 = *param_2;
    iVar4 = *(int *)(param_3 + 0x14);
    UVar5 = Foundation::URL::typeMetadataAccessor();
    lVar11 = *(long *)(UVar5.unknown + -8);
    pcVar12 = *(code **)(lVar11 + 0x10);
    (*pcVar12)((long)param_1 + (long)iVar4,(long)param_2 + (long)iVar4,UVar5.unknown);
    (*pcVar12)((long)param_1 + (long)*(int *)(param_3 + 0x18),
               (long)param_2 + (long)*(int *)(param_3 + 0x18),UVar5.unknown);
    lVar14 = (long)*(int *)(param_3 + 0x1c);
    pcVar13 = *(code **)(lVar11 + 0x30);
    lVar7 = (long)param_2 + lVar14;
    (*pcVar13)(lVar7,1,UVar5.unknown);
    if ((int)lVar7 == 0) {
      (*pcVar12)((long)param_1 + lVar14,(long)param_2 + lVar14,UVar5.unknown);
      (**(code **)(lVar11 + 0x38))((long)param_1 + lVar14,0,1,UVar5.unknown);
    }
    else {
      puVar6 = &DAT_100fcb378;
      FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
      _memcpy((void *)((long)param_1 + lVar14),(void *)((long)param_2 + lVar14),
              *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
    }
    lVar14 = (long)*(int *)(param_3 + 0x20);
    lVar7 = (long)param_2 + lVar14;
    (*pcVar13)(lVar7,1,UVar5.unknown);
    if ((int)lVar7 == 0) {
      (*pcVar12)((long)param_1 + lVar14,(long)param_2 + lVar14,UVar5.unknown);
      (**(code **)(lVar11 + 0x38))((long)param_1 + lVar14,0,1,UVar5.unknown);
    }
    else {
      puVar6 = &DAT_100fcb378;
      FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
      _memcpy((void *)((long)param_1 + lVar14),(void *)((long)param_2 + lVar14),
              *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
    }
    lVar14 = (long)*(int *)(param_3 + 0x24);
    lVar7 = (long)param_2 + lVar14;
    (*pcVar13)(lVar7,1,UVar5.unknown);
    if ((int)lVar7 == 0) {
      (*pcVar12)((long)param_1 + lVar14,(long)param_2 + lVar14,UVar5.unknown);
      (**(code **)(lVar11 + 0x38))((long)param_1 + lVar14,0,1,UVar5.unknown);
    }
    else {
      puVar6 = &DAT_100fcb378;
      FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
      _memcpy((void *)((long)param_1 + lVar14),(void *)((long)param_2 + lVar14),
              *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
    }
    lVar14 = (long)*(int *)(param_3 + 0x28);
    lVar7 = (long)param_2 + lVar14;
    (*pcVar13)(lVar7,1,UVar5.unknown);
    if ((int)lVar7 == 0) {
      (*pcVar12)((long)param_1 + lVar14,(long)param_2 + lVar14,UVar5.unknown);
      (**(code **)(lVar11 + 0x38))((long)param_1 + lVar14,0,1,UVar5.unknown);
    }
    else {
      puVar6 = &DAT_100fcb378;
      FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
      _memcpy((void *)((long)param_1 + lVar14),(void *)((long)param_2 + lVar14),
              *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
    }
    iVar4 = *(int *)(param_3 + 0x30);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
    uVar9 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar9;
    uVar10 = *(undefined8 *)((long)param_2 + (long)iVar4);
    *(undefined8 *)((long)param_1 + (long)iVar4) = uVar10;
    uVar9 = *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x34)) = uVar9;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar10);
    _swift_bridgeObjectRetain(uVar9);
  }
  else {
    lVar7 = *param_2;
    *param_1 = lVar7;
    uVar8 = (ulong)uVar3 & 0xff;
    param_1 = (long *)(lVar7 + (uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1004bf778 | FUN_1004bf778 */

void FUN_1004bf778(long param_1,long param_2)

{
  int iVar1;
  URL UVar2;
  code *pcVar3;
  code *pcVar4;
  long lVar5;
  
  iVar1 = *(int *)(param_2 + 0x14);
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar5 = *(long *)(UVar2.unknown + -8);
  pcVar3 = *(code **)(lVar5 + 8);
  (*pcVar3)(param_1 + iVar1,UVar2.unknown);
  (*pcVar3)(param_1 + *(int *)(param_2 + 0x18),UVar2.unknown);
  iVar1 = *(int *)(param_2 + 0x1c);
  pcVar4 = *(code **)(lVar5 + 0x30);
  lVar5 = param_1 + iVar1;
  (*pcVar4)(lVar5,1,UVar2.unknown);
  if ((int)lVar5 == 0) {
    (*pcVar3)(param_1 + iVar1,UVar2.unknown);
  }
  iVar1 = *(int *)(param_2 + 0x20);
  lVar5 = param_1 + iVar1;
  (*pcVar4)(lVar5,1,UVar2.unknown);
  if ((int)lVar5 == 0) {
    (*pcVar3)(param_1 + iVar1,UVar2.unknown);
  }
  iVar1 = *(int *)(param_2 + 0x24);
  lVar5 = param_1 + iVar1;
  (*pcVar4)(lVar5,1,UVar2.unknown);
  if ((int)lVar5 == 0) {
    (*pcVar3)(param_1 + iVar1,UVar2.unknown);
  }
  iVar1 = *(int *)(param_2 + 0x28);
  lVar5 = param_1 + iVar1;
  (*pcVar4)(lVar5,1,UVar2.unknown);
  if ((int)lVar5 == 0) {
    (*pcVar3)(param_1 + iVar1,UVar2.unknown);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x2c) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x30)));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x34)));
  return;
}



/* Address: 0x1004bf89c | FUN_1004bf89c */

undefined8 * FUN_1004bf89c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  URL UVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  code *pcVar10;
  code *pcVar11;
  long lVar12;
  
  *param_1 = *param_2;
  iVar3 = *(int *)(param_3 + 0x14);
  UVar4 = Foundation::URL::typeMetadataAccessor();
  lVar9 = *(long *)(UVar4.unknown + -8);
  pcVar10 = *(code **)(lVar9 + 0x10);
  (*pcVar10)((long)param_1 + (long)iVar3,(long)param_2 + (long)iVar3,UVar4.unknown);
  (*pcVar10)((long)param_1 + (long)*(int *)(param_3 + 0x18),
             (long)param_2 + (long)*(int *)(param_3 + 0x18),UVar4.unknown);
  lVar12 = (long)*(int *)(param_3 + 0x1c);
  pcVar11 = *(code **)(lVar9 + 0x30);
  lVar5 = (long)param_2 + lVar12;
  (*pcVar11)(lVar5,1,UVar4.unknown);
  if ((int)lVar5 == 0) {
    (*pcVar10)((long)param_1 + lVar12,(long)param_2 + lVar12,UVar4.unknown);
    (**(code **)(lVar9 + 0x38))((long)param_1 + lVar12,0,1,UVar4.unknown);
  }
  else {
    puVar6 = &DAT_100fcb378;
    FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
    _memcpy((void *)((long)param_1 + lVar12),(void *)((long)param_2 + lVar12),
            *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
  lVar12 = (long)*(int *)(param_3 + 0x20);
  lVar5 = (long)param_2 + lVar12;
  (*pcVar11)(lVar5,1,UVar4.unknown);
  if ((int)lVar5 == 0) {
    (*pcVar10)((long)param_1 + lVar12,(long)param_2 + lVar12,UVar4.unknown);
    (**(code **)(lVar9 + 0x38))((long)param_1 + lVar12,0,1,UVar4.unknown);
  }
  else {
    puVar6 = &DAT_100fcb378;
    FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
    _memcpy((void *)((long)param_1 + lVar12),(void *)((long)param_2 + lVar12),
            *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
  lVar12 = (long)*(int *)(param_3 + 0x24);
  lVar5 = (long)param_2 + lVar12;
  (*pcVar11)(lVar5,1,UVar4.unknown);
  if ((int)lVar5 == 0) {
    (*pcVar10)((long)param_1 + lVar12,(long)param_2 + lVar12,UVar4.unknown);
    (**(code **)(lVar9 + 0x38))((long)param_1 + lVar12,0,1,UVar4.unknown);
  }
  else {
    puVar6 = &DAT_100fcb378;
    FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
    _memcpy((void *)((long)param_1 + lVar12),(void *)((long)param_2 + lVar12),
            *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
  lVar12 = (long)*(int *)(param_3 + 0x28);
  lVar5 = (long)param_2 + lVar12;
  (*pcVar11)(lVar5,1,UVar4.unknown);
  if ((int)lVar5 == 0) {
    (*pcVar10)((long)param_1 + lVar12,(long)param_2 + lVar12,UVar4.unknown);
    (**(code **)(lVar9 + 0x38))((long)param_1 + lVar12,0,1,UVar4.unknown);
  }
  else {
    puVar6 = &DAT_100fcb378;
    FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
    _memcpy((void *)((long)param_1 + lVar12),(void *)((long)param_2 + lVar12),
            *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
  iVar3 = *(int *)(param_3 + 0x30);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  uVar7 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar7;
  uVar8 = *(undefined8 *)((long)param_2 + (long)iVar3);
  *(undefined8 *)((long)param_1 + (long)iVar3) = uVar8;
  uVar7 = *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x34)) = uVar7;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar8);
  _swift_bridgeObjectRetain(uVar7);
  return param_1;
}



/* Address: 0x1004bfb10 | FUN_1004bfb10 */

undefined8 * FUN_1004bfb10(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  URL UVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  code *pcVar10;
  code *pcVar11;
  long lVar12;
  
  *param_1 = *param_2;
  iVar3 = *(int *)(param_3 + 0x14);
  UVar4 = Foundation::URL::typeMetadataAccessor();
  lVar9 = *(long *)(UVar4.unknown + -8);
  pcVar10 = *(code **)(lVar9 + 0x18);
  (*pcVar10)((long)param_1 + (long)iVar3,(long)param_2 + (long)iVar3,UVar4.unknown);
  (*pcVar10)((long)param_1 + (long)*(int *)(param_3 + 0x18),
             (long)param_2 + (long)*(int *)(param_3 + 0x18),UVar4.unknown);
  lVar12 = (long)*(int *)(param_3 + 0x1c);
  pcVar11 = *(code **)(lVar9 + 0x30);
  lVar7 = (long)param_1 + lVar12;
  (*pcVar11)(lVar7,1,UVar4.unknown);
  lVar5 = (long)param_2 + lVar12;
  (*pcVar11)(lVar5,1,UVar4.unknown);
  if ((int)lVar7 == 0) {
    if ((int)lVar5 != 0) {
      (**(code **)(lVar9 + 8))((long)param_1 + lVar12,UVar4.unknown);
      goto LAB_1004bfbf4;
    }
    (*pcVar10)((long)param_1 + lVar12,(long)param_2 + lVar12,UVar4.unknown);
  }
  else if ((int)lVar5 == 0) {
    (**(code **)(lVar9 + 0x10))((long)param_1 + lVar12,(long)param_2 + lVar12,UVar4.unknown);
    (**(code **)(lVar9 + 0x38))((long)param_1 + lVar12,0,1,UVar4.unknown);
  }
  else {
LAB_1004bfbf4:
    puVar6 = &DAT_100fcb378;
    FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
    _memcpy((void *)((long)param_1 + lVar12),(void *)((long)param_2 + lVar12),
            *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
  lVar12 = (long)*(int *)(param_3 + 0x20);
  lVar7 = (long)param_1 + lVar12;
  (*pcVar11)(lVar7,1,UVar4.unknown);
  lVar5 = (long)param_2 + lVar12;
  (*pcVar11)(lVar5,1,UVar4.unknown);
  if ((int)lVar7 == 0) {
    if ((int)lVar5 != 0) {
      (**(code **)(lVar9 + 8))((long)param_1 + lVar12,UVar4.unknown);
      goto LAB_1004bfc90;
    }
    (*pcVar10)((long)param_1 + lVar12,(long)param_2 + lVar12,UVar4.unknown);
  }
  else if ((int)lVar5 == 0) {
    (**(code **)(lVar9 + 0x10))((long)param_1 + lVar12,(long)param_2 + lVar12,UVar4.unknown);
    (**(code **)(lVar9 + 0x38))((long)param_1 + lVar12,0,1,UVar4.unknown);
  }
  else {
LAB_1004bfc90:
    puVar6 = &DAT_100fcb378;
    FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
    _memcpy((void *)((long)param_1 + lVar12),(void *)((long)param_2 + lVar12),
            *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
  lVar12 = (long)*(int *)(param_3 + 0x24);
  lVar7 = (long)param_1 + lVar12;
  (*pcVar11)(lVar7,1,UVar4.unknown);
  lVar5 = (long)param_2 + lVar12;
  (*pcVar11)(lVar5,1,UVar4.unknown);
  if ((int)lVar7 == 0) {
    if ((int)lVar5 != 0) {
      (**(code **)(lVar9 + 8))((long)param_1 + lVar12,UVar4.unknown);
      goto LAB_1004bfd2c;
    }
    (*pcVar10)((long)param_1 + lVar12,(long)param_2 + lVar12,UVar4.unknown);
  }
  else if ((int)lVar5 == 0) {
    (**(code **)(lVar9 + 0x10))((long)param_1 + lVar12,(long)param_2 + lVar12,UVar4.unknown);
    (**(code **)(lVar9 + 0x38))((long)param_1 + lVar12,0,1,UVar4.unknown);
  }
  else {
LAB_1004bfd2c:
    puVar6 = &DAT_100fcb378;
    FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
    _memcpy((void *)((long)param_1 + lVar12),(void *)((long)param_2 + lVar12),
            *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
  lVar12 = (long)*(int *)(param_3 + 0x28);
  lVar7 = (long)param_1 + lVar12;
  (*pcVar11)(lVar7,1,UVar4.unknown);
  lVar5 = (long)param_2 + lVar12;
  (*pcVar11)(lVar5,1,UVar4.unknown);
  if ((int)lVar7 == 0) {
    if ((int)lVar5 == 0) {
      (*pcVar10)((long)param_1 + lVar12,(long)param_2 + lVar12,UVar4.unknown);
      goto LAB_1004bfdf0;
    }
    (**(code **)(lVar9 + 8))((long)param_1 + lVar12,UVar4.unknown);
  }
  else if ((int)lVar5 == 0) {
    (**(code **)(lVar9 + 0x10))((long)param_1 + lVar12,(long)param_2 + lVar12,UVar4.unknown);
    (**(code **)(lVar9 + 0x38))((long)param_1 + lVar12,0,1,UVar4.unknown);
    goto LAB_1004bfdf0;
  }
  puVar6 = &DAT_100fcb378;
  FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
  _memcpy((void *)((long)param_1 + lVar12),(void *)((long)param_2 + lVar12),
          *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
LAB_1004bfdf0:
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  *puVar1 = *puVar2;
  uVar8 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar8);
  lVar7 = (long)*(int *)(param_3 + 0x30);
  uVar8 = *(undefined8 *)((long)param_1 + lVar7);
  *(undefined8 *)((long)param_1 + lVar7) = *(undefined8 *)((long)param_2 + lVar7);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar8);
  lVar7 = (long)*(int *)(param_3 + 0x34);
  uVar8 = *(undefined8 *)((long)param_1 + lVar7);
  *(undefined8 *)((long)param_1 + lVar7) = *(undefined8 *)((long)param_2 + lVar7);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar8);
  return param_1;
}



/* Address: 0x1004bfec4 | FUN_1004bfec4 */

undefined8 * FUN_1004bfec4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  URL UVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  code *pcVar8;
  code *pcVar9;
  long lVar10;
  undefined8 uVar11;
  
  *param_1 = *param_2;
  iVar1 = *(int *)(param_3 + 0x14);
  UVar4 = Foundation::URL::typeMetadataAccessor();
  lVar7 = *(long *)(UVar4.unknown + -8);
  pcVar8 = *(code **)(lVar7 + 0x20);
  (*pcVar8)((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,UVar4.unknown);
  (*pcVar8)((long)param_1 + (long)*(int *)(param_3 + 0x18),
            (long)param_2 + (long)*(int *)(param_3 + 0x18),UVar4.unknown);
  lVar10 = (long)*(int *)(param_3 + 0x1c);
  pcVar9 = *(code **)(lVar7 + 0x30);
  lVar5 = (long)param_2 + lVar10;
  (*pcVar9)(lVar5,1,UVar4.unknown);
  if ((int)lVar5 == 0) {
    (*pcVar8)((long)param_1 + lVar10,(long)param_2 + lVar10,UVar4.unknown);
    (**(code **)(lVar7 + 0x38))((long)param_1 + lVar10,0,1,UVar4.unknown);
  }
  else {
    puVar6 = &DAT_100fcb378;
    FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
    _memcpy((void *)((long)param_1 + lVar10),(void *)((long)param_2 + lVar10),
            *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
  lVar10 = (long)*(int *)(param_3 + 0x20);
  lVar5 = (long)param_2 + lVar10;
  (*pcVar9)(lVar5,1,UVar4.unknown);
  if ((int)lVar5 == 0) {
    (*pcVar8)((long)param_1 + lVar10,(long)param_2 + lVar10,UVar4.unknown);
    (**(code **)(lVar7 + 0x38))((long)param_1 + lVar10,0,1,UVar4.unknown);
  }
  else {
    puVar6 = &DAT_100fcb378;
    FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
    _memcpy((void *)((long)param_1 + lVar10),(void *)((long)param_2 + lVar10),
            *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
  lVar10 = (long)*(int *)(param_3 + 0x24);
  lVar5 = (long)param_2 + lVar10;
  (*pcVar9)(lVar5,1,UVar4.unknown);
  if ((int)lVar5 == 0) {
    (*pcVar8)((long)param_1 + lVar10,(long)param_2 + lVar10,UVar4.unknown);
    (**(code **)(lVar7 + 0x38))((long)param_1 + lVar10,0,1,UVar4.unknown);
  }
  else {
    puVar6 = &DAT_100fcb378;
    FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
    _memcpy((void *)((long)param_1 + lVar10),(void *)((long)param_2 + lVar10),
            *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
  lVar10 = (long)*(int *)(param_3 + 0x28);
  lVar5 = (long)param_2 + lVar10;
  (*pcVar9)(lVar5,1,UVar4.unknown);
  if ((int)lVar5 == 0) {
    (*pcVar8)((long)param_1 + lVar10,(long)param_2 + lVar10,UVar4.unknown);
    (**(code **)(lVar7 + 0x38))((long)param_1 + lVar10,0,1,UVar4.unknown);
  }
  else {
    puVar6 = &DAT_100fcb378;
    FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
    _memcpy((void *)((long)param_1 + lVar10),(void *)((long)param_2 + lVar10),
            *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
  iVar1 = *(int *)(param_3 + 0x30);
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  uVar11 = *puVar2;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar11;
  *(undefined8 *)((long)param_1 + (long)iVar1) = *(undefined8 *)((long)param_2 + (long)iVar1);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x34)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  return param_1;
}



/* Address: 0x1004c011c | FUN_1004c011c */

undefined8 * FUN_1004c011c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  URL UVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  code *pcVar12;
  long lVar13;
  
  *param_1 = *param_2;
  iVar3 = *(int *)(param_3 + 0x14);
  UVar4 = Foundation::URL::typeMetadataAccessor();
  lVar10 = *(long *)(UVar4.unknown + -8);
  pcVar11 = *(code **)(lVar10 + 0x28);
  (*pcVar11)((long)param_1 + (long)iVar3,(long)param_2 + (long)iVar3,UVar4.unknown);
  (*pcVar11)((long)param_1 + (long)*(int *)(param_3 + 0x18),
             (long)param_2 + (long)*(int *)(param_3 + 0x18),UVar4.unknown);
  lVar13 = (long)*(int *)(param_3 + 0x1c);
  pcVar12 = *(code **)(lVar10 + 0x30);
  lVar9 = (long)param_1 + lVar13;
  (*pcVar12)(lVar9,1,UVar4.unknown);
  lVar5 = (long)param_2 + lVar13;
  (*pcVar12)(lVar5,1,UVar4.unknown);
  if ((int)lVar9 == 0) {
    if ((int)lVar5 != 0) {
      (**(code **)(lVar10 + 8))((long)param_1 + lVar13,UVar4.unknown);
      goto LAB_1004c0200;
    }
    (*pcVar11)((long)param_1 + lVar13,(long)param_2 + lVar13,UVar4.unknown);
  }
  else if ((int)lVar5 == 0) {
    (**(code **)(lVar10 + 0x20))((long)param_1 + lVar13,(long)param_2 + lVar13,UVar4.unknown);
    (**(code **)(lVar10 + 0x38))((long)param_1 + lVar13,0,1,UVar4.unknown);
  }
  else {
LAB_1004c0200:
    puVar6 = &DAT_100fcb378;
    FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
    _memcpy((void *)((long)param_1 + lVar13),(void *)((long)param_2 + lVar13),
            *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
  lVar13 = (long)*(int *)(param_3 + 0x20);
  lVar9 = (long)param_1 + lVar13;
  (*pcVar12)(lVar9,1,UVar4.unknown);
  lVar5 = (long)param_2 + lVar13;
  (*pcVar12)(lVar5,1,UVar4.unknown);
  if ((int)lVar9 == 0) {
    if ((int)lVar5 != 0) {
      (**(code **)(lVar10 + 8))((long)param_1 + lVar13,UVar4.unknown);
      goto LAB_1004c029c;
    }
    (*pcVar11)((long)param_1 + lVar13,(long)param_2 + lVar13,UVar4.unknown);
  }
  else if ((int)lVar5 == 0) {
    (**(code **)(lVar10 + 0x20))((long)param_1 + lVar13,(long)param_2 + lVar13,UVar4.unknown);
    (**(code **)(lVar10 + 0x38))((long)param_1 + lVar13,0,1,UVar4.unknown);
  }
  else {
LAB_1004c029c:
    puVar6 = &DAT_100fcb378;
    FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
    _memcpy((void *)((long)param_1 + lVar13),(void *)((long)param_2 + lVar13),
            *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
  lVar13 = (long)*(int *)(param_3 + 0x24);
  lVar9 = (long)param_1 + lVar13;
  (*pcVar12)(lVar9,1,UVar4.unknown);
  lVar5 = (long)param_2 + lVar13;
  (*pcVar12)(lVar5,1,UVar4.unknown);
  if ((int)lVar9 == 0) {
    if ((int)lVar5 != 0) {
      (**(code **)(lVar10 + 8))((long)param_1 + lVar13,UVar4.unknown);
      goto LAB_1004c0338;
    }
    (*pcVar11)((long)param_1 + lVar13,(long)param_2 + lVar13,UVar4.unknown);
  }
  else if ((int)lVar5 == 0) {
    (**(code **)(lVar10 + 0x20))((long)param_1 + lVar13,(long)param_2 + lVar13,UVar4.unknown);
    (**(code **)(lVar10 + 0x38))((long)param_1 + lVar13,0,1,UVar4.unknown);
  }
  else {
LAB_1004c0338:
    puVar6 = &DAT_100fcb378;
    FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
    _memcpy((void *)((long)param_1 + lVar13),(void *)((long)param_2 + lVar13),
            *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
  lVar13 = (long)*(int *)(param_3 + 0x28);
  lVar9 = (long)param_1 + lVar13;
  (*pcVar12)(lVar9,1,UVar4.unknown);
  lVar5 = (long)param_2 + lVar13;
  (*pcVar12)(lVar5,1,UVar4.unknown);
  if ((int)lVar9 == 0) {
    if ((int)lVar5 == 0) {
      (*pcVar11)((long)param_1 + lVar13,(long)param_2 + lVar13,UVar4.unknown);
      goto LAB_1004c03fc;
    }
    (**(code **)(lVar10 + 8))((long)param_1 + lVar13,UVar4.unknown);
  }
  else if ((int)lVar5 == 0) {
    (**(code **)(lVar10 + 0x20))((long)param_1 + lVar13,(long)param_2 + lVar13,UVar4.unknown);
    (**(code **)(lVar10 + 0x38))((long)param_1 + lVar13,0,1,UVar4.unknown);
    goto LAB_1004c03fc;
  }
  puVar6 = &DAT_100fcb378;
  FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
  _memcpy((void *)((long)param_1 + lVar13),(void *)((long)param_2 + lVar13),
          *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
LAB_1004c03fc:
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  uVar8 = puVar2[1];
  uVar7 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar8;
  _swift_bridgeObjectRelease(uVar7);
  lVar9 = (long)*(int *)(param_3 + 0x30);
  uVar8 = *(undefined8 *)((long)param_1 + lVar9);
  *(undefined8 *)((long)param_1 + lVar9) = *(undefined8 *)((long)param_2 + lVar9);
  _swift_bridgeObjectRelease(uVar8);
  lVar9 = (long)*(int *)(param_3 + 0x34);
  uVar8 = *(undefined8 *)((long)param_1 + lVar9);
  *(undefined8 *)((long)param_1 + lVar9) = *(undefined8 *)((long)param_2 + lVar9);
  _swift_bridgeObjectRelease(uVar8);
  return param_1;
}



/* Address: 0x1004c04b0 | FUN_1004c04b0 */

void FUN_1004c04b0(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1004c04bc | FUN_1004c04bc */

ulong FUN_1004c04bc(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  URL UVar3;
  long lVar4;
  ulong uVar5;
  
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar4 = *(long *)(UVar3.unknown + -8);
  if ((int)param_2 == *(int *)(lVar4 + 0x54)) {
    iVar1 = *(int *)(param_3 + 0x14);
  }
  else {
    UVar3.unknown = &DAT_100fcb378;
    FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
    lVar4 = *(long *)(UVar3.unknown + -8);
    if ((int)param_2 != *(int *)(lVar4 + 0x54)) {
      uVar5 = *(ulong *)(param_1 + *(int *)(param_3 + 0x2c) + 8);
      if (0xfffffffe < uVar5) {
        uVar5 = 0xffffffff;
      }
      uVar2 = (int)uVar5 - 1;
      if (0x7fffffff < uVar2) {
        uVar2 = 0xffffffff;
      }
      return (ulong)(uVar2 + 1);
    }
    iVar1 = *(int *)(param_3 + 0x1c);
  }
  uVar5 = param_1 + iVar1;
                    /* WARNING: Could not recover jumptable at 0x0001004c0540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 0x30))(uVar5,param_2,UVar3.unknown);
  return uVar5;
}



/* Address: 0x1004c057c | FUN_1004c057c */

void FUN_1004c057c(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1004c0588 | FUN_1004c0588 */

void FUN_1004c0588(long param_1,ulong param_2,int param_3,long param_4)

{
  int iVar1;
  URL UVar2;
  long lVar3;
  
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar3 = *(long *)(UVar2.unknown + -8);
  if (param_3 == *(int *)(lVar3 + 0x54)) {
    iVar1 = *(int *)(param_4 + 0x14);
  }
  else {
    UVar2.unknown = &DAT_100fcb378;
    FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
    lVar3 = *(long *)(UVar2.unknown + -8);
    if (param_3 != *(int *)(lVar3 + 0x54)) {
      *(ulong *)(param_1 + *(int *)(param_4 + 0x2c) + 8) = param_2 & 0xffffffff;
      return;
    }
    iVar1 = *(int *)(param_4 + 0x1c);
  }
                    /* WARNING: Could not recover jumptable at 0x0001004c0614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x38))(param_1 + iVar1,param_2,param_2,UVar2.unknown);
  return;
}



/* Address: 0x1004c0638 | FUN_1004c0638 */

void FUN_1004c0638(long param_1,ulong param_2)

{
  URL UVar1;
  long lVar2;
  undefined *local_70;
  long local_68;
  long lStack_60;
  long local_58;
  long lStack_50;
  long local_48;
  long lStack_40;
  undefined *local_38;
  undefined *puStack_30;
  undefined *local_28;
  
  local_70 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
  UVar1 = Foundation::URL::typeMetadataAccessor();
  if (param_2 < 0x40) {
    local_68 = *(long *)(UVar1.unknown + -8) + 0x40;
    lVar2 = 0x13f;
    lStack_60 = local_68;
    FUN_1004bf484();
    if (param_2 < 0x40) {
      local_58 = *(long *)(lVar2 + -8) + 0x40;
      local_38 = &DAT_100c50788;
      puStack_30 = &DAT_100c50880;
      local_28 = &DAT_100c50880;
      lStack_50 = local_58;
      local_48 = local_58;
      lStack_40 = local_58;
      _swift_initStructMetadata(param_1,0x100,10,&local_70,param_1 + 0x10);
    }
  }
  return;
}



/* Address: 0x1004c06e8 | FUN_1004c06e8 */

void FUN_1004c06e8(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x1004c070c | FUN_1004c070c */

undefined * FUN_1004c070c(void)

{
  return &DAT_100c508f0;
}



/* Address: 0x1004c0718 | FUN_1004c0718 */

undefined1  [16] FUN_1004c0718(void)

{
  return ZEXT816(0x100ed9cc8);
}



/* Address: 0x1004c0728 | thunk_FUN_1004c3ce8 */

void thunk_FUN_1004c3ce8(void)

{
  FUN_1004c3ce8();
  return;
}



/* Address: 0x1004c072c | thunk_FUN_1004c3ab0 */

void thunk_FUN_1004c3ab0(void)

{
  FUN_1004c3ab0();
  return;
}



/* Address: 0x1004c0730 | FUN_1004c0730 */

undefined * FUN_1004c0730(long param_1,ulong param_2,char *param_3,void *param_4)

{
  code *pcVar1;
  bool bVar2;
  Index after;
  Substring SVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  Index IVar7;
  void *pvVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  Index IVar13;
  Character CVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  char *pcVar8;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1004c0a80);
    (*pcVar1)();
  }
  uVar11 = (ulong)param_4 >> 0x38 & 0xf;
  uVar10 = (uint)((ulong)param_3 >> 0x20);
  if (param_1 != 0) {
    uVar12 = (ulong)param_3 & 0xffffffffffff;
    if (((ulong)param_4 & 0x2000000000000000) != 0) {
      uVar12 = uVar11;
    }
    if (uVar12 != 0) {
      uVar10 = uVar10 >> 0x1b & 1;
      if (((ulong)param_4 & 0x1000000000000000) == 0) {
        uVar10 = 1;
      }
      uVar11 = 7;
      if (uVar10 == 0) {
        uVar11 = 0xb;
      }
      SVar22.str = (char *)(uVar11 | uVar12 << 0x10);
      uVar12 = uVar12 * 4;
      IVar13.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0xf;
      puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
      while (uVar11 = (ulong)IVar13.cmsgPointer.unknown >> 0xe, uVar11 != uVar12) {
        while( true ) {
          SVar15.bridgeObject = param_4;
          SVar15.str = param_3;
          CVar14 = Swift::String::get_subscript(IVar13,SVar15);
          bVar2 = Swift::Character::get_isWhitespace(CVar14);
          _swift_bridgeObjectRelease(CVar14.bridgeObject);
          after.cmsgPointer.unknown = IVar13.cmsgPointer.unknown;
          while (!bVar2) {
            SVar16.bridgeObject = param_4;
            SVar16.str = param_3;
            after = Swift::String::index(after,SVar16);
            uVar11 = (ulong)after.cmsgPointer.unknown >> 0xe;
            if (uVar11 == uVar12) goto LAB_1004c0958;
            SVar17.bridgeObject = param_4;
            SVar17.str = param_3;
            CVar14 = Swift::String::get_subscript(after,SVar17);
            bVar2 = Swift::Character::get_isWhitespace(CVar14);
            _swift_bridgeObjectRelease(CVar14.bridgeObject);
          }
          if (((ulong)IVar13.cmsgPointer.unknown >> 0xe != uVar11) || ((param_2 & 1) == 0)) break;
          SVar18.bridgeObject = param_4;
          SVar18.str = param_3;
          IVar13 = Swift::String::index(after,SVar18);
          uVar11 = (ulong)IVar13.cmsgPointer.unknown >> 0xe;
          if (uVar11 == uVar12) goto LAB_1004c0958;
        }
        if (uVar11 < (ulong)IVar13.cmsgPointer.unknown >> 0xe) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1004c0ae8);
          (*pcVar1)();
        }
        SVar19.bridgeObject = param_3;
        SVar19.str = (char *)after.cmsgPointer.unknown;
        IVar7.cmsgPointer.unknown = after.cmsgPointer.unknown;
        pcVar8 = param_3;
        pvVar9 = param_4;
        SVar3 = Swift::String::get_subscript((Range<Index>)IVar13.cmsgPointer.unknown,SVar19);
        puVar4 = puVar6;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar5 = puVar6;
        if (((ulong)puVar4 & 1) == 0) {
          puVar5 = (undefined *)0x0;
          FUN_1004a47bc(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
        }
        uVar11 = *(ulong *)(puVar5 + 0x10);
        puVar6 = puVar5;
        if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar11) {
          puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
          FUN_1004a47bc(puVar6,uVar11 + 1,1,puVar5);
        }
        *(ulong *)(puVar6 + 0x10) = uVar11 + 1;
        *(undefined **)(puVar6 + uVar11 * 0x20 + 0x20) = SVar3.unknown;
        *(UnsafeMutablePointer *)(puVar6 + uVar11 * 0x20 + 0x28) = IVar7.cmsgPointer.unknown;
        *(char **)(puVar6 + uVar11 * 0x20 + 0x30) = pcVar8;
        *(void **)(puVar6 + uVar11 * 0x20 + 0x38) = pvVar9;
        SVar20.bridgeObject = param_4;
        SVar20.str = param_3;
        IVar13 = Swift::String::index(after,SVar20);
        if (*(long *)(puVar6 + 0x10) == param_1) break;
      }
LAB_1004c0958:
      if (((ulong)IVar13.cmsgPointer.unknown >> 0xe != uVar12) || ((param_2 & 1) == 0)) {
        if ((ulong)IVar13.cmsgPointer.unknown >> 0xe <= uVar12) {
          SVar21.bridgeObject = param_3;
          SVar21.str = SVar22.str;
          pvVar9 = param_4;
          SVar3 = Swift::String::get_subscript((Range<Index>)IVar13.cmsgPointer.unknown,SVar21);
          _swift_bridgeObjectRelease(param_4);
          puVar4 = puVar6;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar5 = puVar6;
          if (((ulong)puVar4 & 1) == 0) {
            puVar5 = (undefined *)0x0;
            FUN_1004a47bc(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
          }
          uVar11 = *(ulong *)(puVar5 + 0x10);
          puVar6 = puVar5;
          if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar11) {
            puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
            FUN_1004a47bc(puVar6,uVar11 + 1,1,puVar5);
          }
          *(ulong *)(puVar6 + 0x10) = uVar11 + 1;
          *(undefined **)(puVar6 + uVar11 * 0x20 + 0x20) = SVar3.unknown;
          *(char **)(puVar6 + uVar11 * 0x20 + 0x28) = SVar22.str;
          *(char **)(puVar6 + uVar11 * 0x20 + 0x30) = param_3;
          *(void **)(puVar6 + uVar11 * 0x20 + 0x38) = pvVar9;
          return puVar6;
        }
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1004c0aa4);
        (*pcVar1)();
      }
      goto LAB_1004c0a4c;
    }
  }
  uVar12 = (ulong)param_3 & 0xffffffffffff;
  if (((ulong)param_4 & 0x2000000000000000) != 0) {
    uVar12 = uVar11;
  }
  if ((uVar12 == 0) && ((param_2 & 1) != 0)) {
    _swift_bridgeObjectRelease(param_4);
    return PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  uVar10 = uVar10 >> 0x1b & 1;
  if (((ulong)param_4 & 0x1000000000000000) == 0) {
    uVar10 = 1;
  }
  uVar11 = 7;
  if (uVar10 == 0) {
    uVar11 = 0xb;
  }
  SVar22.str = (char *)(uVar11 | uVar12 << 0x10);
  SVar22.bridgeObject = param_3;
  pvVar9 = param_4;
  SVar3 = Swift::String::get_subscript((Range<Index>)0xf,SVar22);
  puVar4 = (undefined *)0x0;
  FUN_1004a47bc(0,1,1,PTR___swiftEmptyArrayStorage_100eae0d8);
  uVar11 = *(ulong *)(puVar4 + 0x10);
  puVar6 = puVar4;
  if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar11) {
    puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
    FUN_1004a47bc(puVar6,uVar11 + 1,1,puVar4);
  }
  *(ulong *)(puVar6 + 0x10) = uVar11 + 1;
  *(undefined **)(puVar6 + uVar11 * 0x20 + 0x20) = SVar3.unknown;
  *(char **)(puVar6 + uVar11 * 0x20 + 0x28) = SVar22.str;
  *(char **)(puVar6 + uVar11 * 0x20 + 0x30) = param_3;
  *(void **)(puVar6 + uVar11 * 0x20 + 0x38) = pvVar9;
LAB_1004c0a4c:
  _swift_bridgeObjectRelease(param_4);
  return puVar6;
}



/* Address: 0x1004c0ae8 | thunk_FUN_1004c1b44 */

void thunk_FUN_1004c1b44(void)

{
  FUN_1004c1b44();
  return;
}



/* Address: 0x1004c0aec | thunk_FUN_1004c1da8 */

void thunk_FUN_1004c1da8(void)

{
  FUN_1004c1da8();
  return;
}



/* Address: 0x1004c0af0 | thunk_FUN_1004c2cc4 */

void thunk_FUN_1004c2cc4(void)

{
  FUN_1004c2cc4();
  return;
}



/* Address: 0x1004c0af4 | FUN_1004c0af4 */

void FUN_1004c0af4(undefined8 param_1,bool param_2)

{
  bool bVar1;
  undefined *puVar2;
  URLComponents UVar3;
  URLComponents UVar4;
  URL UVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  void *pvVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  URLComponents *this;
  URLComponents UVar11;
  long lVar12;
  long lVar13;
  String SVar14;
  String SVar15;
  URLComponents local_70 [2];
  void *pvVar8;
  URLComponents *pUVar10;
  
  puVar2 = &DAT_100fcb378;
  FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = (undefined8 *)((long)local_70 - extraout_x8);
  puVar2 = &DAT_100fcb380;
  FUN_1000f7830(&DAT_100fcb380,&DAT_100c504a0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  UVar11.unknown = (undefined *)((long)puVar7 - extraout_x8_00);
  UVar3 = Foundation::URLComponents::typeMetadataAccessor();
  lVar13 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar13 + 0x40));
  this = (URLComponents *)((long)UVar11.unknown - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  Foundation::URLComponents::_init(param_2);
  pUVar10 = (URLComponents *)UVar11.unknown;
  (**(code **)(lVar13 + 0x30))(UVar11.unknown,1,UVar3.unknown);
  if ((int)pUVar10 == 1) {
    FUN_1000fb4c4(UVar11.unknown,&DAT_100fcb380,&DAT_100c504a0);
    this = (URLComponents *)UVar11.unknown;
    goto LAB_1004c0d48;
  }
  UVar4.unknown = (undefined *)this;
  (**(code **)(lVar13 + 0x20))(this,UVar11.unknown,UVar3.unknown);
  Foundation::URLComponents::_get_scheme(UVar4);
  if ((URLComponents *)UVar11.unknown != (URLComponents *)0x0) {
    SVar14.bridgeObject = UVar11.unknown;
    SVar14.str = UVar4.unknown;
    SVar14 = Swift::String::lowercased(SVar14);
    pvVar8 = SVar14.bridgeObject;
    pvVar9 = pvVar8;
    _swift_bridgeObjectRelease();
    Foundation::URLComponents::_get_host(UVar11);
    if (pvVar9 != (void *)0x0) {
      SVar15.bridgeObject = pvVar9;
      SVar15.str = UVar11.unknown;
      local_70[1].unknown = (undefined *)param_1;
      SVar15 = Swift::String::lowercased(SVar15);
      pUVar10 = SVar15.bridgeObject;
      _swift_bridgeObjectRelease(pvVar9);
      local_70[0].unknown = SVar14.str;
      FUN_1004c1c40(SVar14.str,pvVar8,SVar15.str,pUVar10);
      if (((ulong)SVar14.str & 1) == 0) {
        (**(code **)(lVar13 + 8))(this,UVar3.unknown);
        _swift_bridgeObjectRelease(pvVar8);
        _swift_bridgeObjectRelease();
        this = pUVar10;
        goto LAB_1004c0d48;
      }
      Foundation::URLComponents::_get_fragment((URLComponents)SVar14.str);
      puVar6 = SVar14.bridgeObject;
      UVar11.unknown = SVar14.str;
      if (puVar6 != (undefined8 *)0x0) {
        _swift_bridgeObjectRelease(pvVar8);
        _swift_bridgeObjectRelease(pUVar10);
        _swift_bridgeObjectRelease();
        FUN_1004a3fb4();
        _swift_allocError(&DAT_100ed9e90,puVar6,0,0);
        *puVar6 = 0xd000000000000028;
        puVar6[1] = 0x8000000100daa7c0;
        puVar6[2] = 0;
        puVar6[3] = 0;
        *(undefined1 *)(puVar6 + 4) = 1;
        goto LAB_1004c0ee4;
      }
      Foundation::URLComponents::_set_scheme(this);
      Foundation::URLComponents::_set_host(this);
      Foundation::URLComponents::_set_query(this);
      Foundation::URLComponents::_set_fragment(this);
      SVar14 = Foundation::URLComponents::get_path(UVar11);
      UVar11.unknown = SVar14.bridgeObject;
      if ((SVar14.str == (undefined *)0x2f) && (UVar11.unknown == (undefined *)0xe100000000000000))
      {
        _swift_bridgeObjectRelease(0xe100000000000000);
LAB_1004c0e44:
        UVar4.unknown = local_70[1].unknown;
        UVar11.unknown = (undefined *)0x0;
        Foundation::URLComponents::set_path(this,(String)(ZEXT816(0xe000000000000000) << 0x40));
      }
      else {
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)SVar14.str,(_StringGuts)UVar11.unknown,
                           (_StringComparisonResult)0x2f);
        _swift_bridgeObjectRelease();
        UVar4.unknown = local_70[1].unknown;
        if (bVar1) goto LAB_1004c0e44;
      }
      Foundation::URLComponents::_get_url(UVar11);
      UVar5 = Foundation::URL::typeMetadataAccessor();
      lVar12 = *(long *)(UVar5.unknown + -8);
      puVar6 = puVar7;
      (**(code **)(lVar12 + 0x30))(puVar7,1,UVar5.unknown);
      if ((int)puVar6 != 1) {
        (**(code **)(lVar13 + 8))(this,UVar3.unknown);
        (**(code **)(lVar12 + 0x20))(UVar4.unknown,puVar7,UVar5.unknown);
        return;
      }
      FUN_1000fb4c4(puVar7,&DAT_100fcb378,&DAT_100c50170);
      FUN_1004a3fb4();
      _swift_allocError(&DAT_100ed9e90,puVar7,0,0);
      *puVar7 = 0xd000000000000020;
      puVar7[1] = 0x8000000100daa790;
      puVar7[2] = 0;
      puVar7[3] = 0;
      *(undefined1 *)(puVar7 + 4) = 1;
LAB_1004c0ee4:
      _swift_willThrow();
      (**(code **)(lVar13 + 8))(this,UVar3.unknown);
      return;
    }
    _swift_bridgeObjectRelease(pvVar8);
  }
  (**(code **)(lVar13 + 8))(this,UVar3.unknown);
LAB_1004c0d48:
  FUN_1004a3fb4();
  _swift_allocError(&DAT_100ed9e90,this,0,0);
  this->unknown = (undefined *)0xd00000000000002c;
  this[1].unknown = (undefined *)0x8000000100daa760;
  this[2].unknown = (undefined *)0x0;
  this[3].unknown = (undefined *)0x0;
  *(undefined1 *)&this[4].unknown = 1;
  _swift_willThrow();
  return;
}



/* Address: 0x1004c0f28 | FUN_1004c0f28 */

void FUN_1004c0f28(undefined8 param_1,bool param_2)

{
  undefined *puVar1;
  URLComponents UVar2;
  URLComponents UVar3;
  char *pcVar4;
  URL UVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  void *pvVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  URLComponents *this;
  URLComponents UVar11;
  long lVar12;
  long lVar13;
  String SVar14;
  String SVar15;
  URLComponents aUStack_70 [2];
  void *pvVar8;
  URLComponents *pUVar10;
  
  puVar1 = &DAT_100fcb378;
  FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = (undefined8 *)((long)aUStack_70 - extraout_x8);
  puVar1 = &DAT_100fcb380;
  FUN_1000f7830(&DAT_100fcb380,&DAT_100c504a0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  UVar11.unknown = (undefined *)((long)puVar7 - extraout_x8_00);
  UVar2 = Foundation::URLComponents::typeMetadataAccessor();
  lVar13 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar13 + 0x40));
  this = (URLComponents *)((long)UVar11.unknown - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  Foundation::URLComponents::_init(param_2);
  pUVar10 = (URLComponents *)UVar11.unknown;
  (**(code **)(lVar13 + 0x30))(UVar11.unknown,1,UVar2.unknown);
  if ((int)pUVar10 == 1) {
    FUN_1000fb4c4(UVar11.unknown,&DAT_100fcb380,&DAT_100c504a0);
    this = (URLComponents *)UVar11.unknown;
  }
  else {
    UVar3.unknown = (undefined *)this;
    (**(code **)(lVar13 + 0x20))(this,UVar11.unknown,UVar2.unknown);
    Foundation::URLComponents::_get_scheme(UVar3);
    if ((URLComponents *)UVar11.unknown != (URLComponents *)0x0) {
      SVar14.bridgeObject = UVar11.unknown;
      SVar14.str = UVar3.unknown;
      SVar14 = Swift::String::lowercased(SVar14);
      pvVar8 = SVar14.bridgeObject;
      pcVar4 = SVar14.str;
      pvVar9 = pvVar8;
      _swift_bridgeObjectRelease();
      Foundation::URLComponents::_get_host(UVar11);
      if (pvVar9 != (void *)0x0) {
        SVar15.bridgeObject = pvVar9;
        SVar15.str = UVar11.unknown;
        aUStack_70[1].unknown = (undefined *)param_1;
        SVar14 = Swift::String::lowercased(SVar15);
        pUVar10 = SVar14.bridgeObject;
        _swift_bridgeObjectRelease(pvVar9);
        FUN_1004c1c40(pcVar4,pvVar8,SVar14.str,pUVar10);
        if (((ulong)pcVar4 & 1) != 0) {
          Foundation::URLComponents::_set_scheme(this);
          Foundation::URLComponents::_set_host(this);
          Foundation::URLComponents::set_path(this,(String)(ZEXT816(0xe000000000000000) << 0x40));
          Foundation::URLComponents::_set_query(this);
          UVar11.unknown = (undefined *)0x0;
          Foundation::URLComponents::_set_fragment(this);
          Foundation::URLComponents::_get_url(UVar11);
          UVar5 = Foundation::URL::typeMetadataAccessor();
          lVar12 = *(long *)(UVar5.unknown + -8);
          puVar6 = puVar7;
          (**(code **)(lVar12 + 0x30))(puVar7,1,UVar5.unknown);
          if ((int)puVar6 == 1) {
            FUN_1000fb4c4(puVar7,&DAT_100fcb378,&DAT_100c50170);
            FUN_1004a3fb4();
            _swift_allocError(&DAT_100ed9e90,puVar7,0,0);
            *puVar7 = 0xd00000000000001b;
            puVar7[1] = 0x8000000100daa7f0;
            puVar7[2] = 0;
            puVar7[3] = 0;
            *(undefined1 *)(puVar7 + 4) = 1;
            _swift_willThrow();
            (**(code **)(lVar13 + 8))(this,UVar2.unknown);
            return;
          }
          (**(code **)(lVar13 + 8))(this,UVar2.unknown);
          (**(code **)(lVar12 + 0x20))(aUStack_70[1].unknown,puVar7,UVar5.unknown);
          return;
        }
        (**(code **)(lVar13 + 8))(this,UVar2.unknown);
        _swift_bridgeObjectRelease(pvVar8);
        _swift_bridgeObjectRelease();
        this = pUVar10;
        goto LAB_1004c11e8;
      }
      _swift_bridgeObjectRelease(pvVar8);
    }
    (**(code **)(lVar13 + 8))(this,UVar2.unknown);
  }
LAB_1004c11e8:
  FUN_1004a3fb4();
  _swift_allocError(&DAT_100ed9e90,this,0,0);
  this->unknown = (undefined *)0xd00000000000002c;
  this[1].unknown = (undefined *)0x8000000100daa760;
  this[2].unknown = (undefined *)0x0;
  this[3].unknown = (undefined *)0x0;
  *(undefined1 *)&this[4].unknown = 1;
  _swift_willThrow();
  return;
}



/* Address: 0x1004c1288 | thunk_FUN_1004c2594 */

void thunk_FUN_1004c2594(void)

{
  FUN_1004c2594();
  return;
}



/* Address: 0x1004c128c | FUN_1004c128c */

void FUN_1004c128c(void)

{
  FUN_1004c0af4();
  return;
}



/* Address: 0x1004c12a0 | FUN_1004c12a0 */

void FUN_1004c12a0(void)

{
  FUN_1004c0f28();
  return;
}



/* Address: 0x1004c12b4 | FUN_1004c12b4 */

undefined8 FUN_1004c12b4(undefined8 *param_1,char *param_2,undefined *param_3)

{
  undefined8 *puVar1;
  _StringGuts _Var2;
  _StringGuts _Var3;
  undefined8 uVar4;
  bool bVar5;
  Hasher into;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  String SVar9;
  long local_98 [9];
  
  lVar8 = *unaff_x20;
  Swift::Hasher::init(*(__int64 *)(lVar8 + 0x28));
  into.unknown = (undefined *)local_98;
  SVar9.bridgeObject = param_3;
  SVar9.str = param_2;
  Swift::String::hash(into,SVar9);
  uVar6 = Swift::Hasher::_finalize(into);
  uVar7 = -1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
  uVar6 = uVar6 & (uVar7 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar8 + 0x38 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) != 0) {
    do {
      puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x30) + uVar6 * 0x10);
      _Var2.unknown = (undefined *)*puVar1;
      _Var3.unknown = (undefined *)puVar1[1];
      if ((_Var2.unknown == param_2 && _Var3.unknown == param_3) ||
         (bVar5 = Swift::_stringCompareWithSmolCheck
                            (_Var2,_Var3,(_StringComparisonResult)(__int8)param_2), bVar5)) {
        _swift_bridgeObjectRelease(param_3);
        puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x30) + uVar6 * 0x10);
        uVar4 = puVar1[1];
        *param_1 = *puVar1;
        param_1[1] = uVar4;
        _swift_bridgeObjectRetain();
        return 0;
      }
      uVar6 = uVar6 + 1 & ~uVar7;
    } while ((*(ulong *)(lVar8 + 0x38 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) != 0);
  }
  lVar8 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native(lVar8);
  local_98[0] = *unaff_x20;
  _swift_bridgeObjectRetain(param_3);
  FUN_1004c13f8(param_2,param_3,uVar6,lVar8);
  *unaff_x20 = local_98[0];
  *param_1 = param_2;
  param_1[1] = param_3;
  return 1;
}



/* Address: 0x1004c13f8 | FUN_1004c13f8 */

void FUN_1004c13f8(char *param_1,undefined *param_2,ulong param_3,ulong param_4)

{
  undefined8 *puVar1;
  _StringGuts _Var2;
  _StringGuts _Var3;
  code *pcVar4;
  bool bVar5;
  Hasher into;
  ulong uVar6;
  long lVar7;
  long *unaff_x20;
  long lVar8;
  String SVar9;
  undefined1 auStack_98 [72];
  
  uVar6 = *(ulong *)(*unaff_x20 + 0x10);
  if (uVar6 < *(ulong *)(*unaff_x20 + 0x18)) {
    if ((param_4 & 1) == 0) {
      FUN_1004c1784();
    }
  }
  else {
    if ((param_4 & 1) == 0) {
      FUN_1004c155c(uVar6 + 1);
    }
    else {
      FUN_1004c18e0();
    }
    lVar8 = *unaff_x20;
    Swift::Hasher::init(*(__int64 *)(lVar8 + 0x28));
    into.unknown = auStack_98;
    SVar9.bridgeObject = param_2;
    SVar9.str = param_1;
    Swift::String::hash(into,SVar9);
    param_3 = Swift::Hasher::_finalize(into);
    uVar6 = -1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    param_3 = param_3 & (uVar6 ^ 0xffffffffffffffff);
    if ((*(ulong *)(lVar8 + 0x38 + (param_3 >> 6) * 8) >> (param_3 & 0x3f) & 1) != 0) {
      do {
        puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x30) + param_3 * 0x10);
        _Var2.unknown = (undefined *)*puVar1;
        _Var3.unknown = (undefined *)puVar1[1];
        if ((_Var2.unknown == param_1 && _Var3.unknown == param_2) ||
           (bVar5 = Swift::_stringCompareWithSmolCheck
                              (_Var2,_Var3,(_StringComparisonResult)(__int8)param_1), bVar5)) {
          Swift::_ELEMENT_TYPE_OF_SET_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1004c155c);
          (*pcVar4)();
        }
        param_3 = param_3 + 1 & ~uVar6;
      } while ((*(ulong *)(lVar8 + 0x38 + (param_3 >> 6) * 8) >> (param_3 & 0x3f) & 1) != 0);
    }
  }
  lVar7 = *unaff_x20;
  lVar8 = lVar7 + (param_3 >> 6) * 8;
  *(ulong *)(lVar8 + 0x38) = *(ulong *)(lVar8 + 0x38) | 1L << (param_3 & 0x3f);
  puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x30) + param_3 * 0x10);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (!SCARRY8(*(long *)(lVar7 + 0x10),1)) {
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1004c154c);
  (*pcVar4)();
}



/* Address: 0x1004c155c | FUN_1004c155c */

void FUN_1004c155c(long param_1)

{
  undefined8 *puVar1;
  String *pSVar2;
  __int64 capacity;
  char *pcVar3;
  void *pvVar4;
  String SVar5;
  bool bVar6;
  code *pcVar7;
  _SetStorage *this;
  __RawSetStorage *p_Var8;
  Hasher into;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  __RawSetStorage *original;
  long lVar15;
  ulong uVar16;
  undefined1 auStack_a8 [72];
  
  original = (__RawSetStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_SetStorage *)&DAT_100fcbb28;
  FUN_1000f7830(&DAT_100fcbb28,&DAT_100c509e8);
  p_Var8 = original;
  Swift::_SetStorage::_resize(this,original,capacity,false);
  if (*(long *)(original + 0x10) == 0) {
LAB_1004c174c:
    _swift_release(original);
    *unaff_x20 = (long)p_Var8;
    return;
  }
  uVar13 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar16 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar16 = uVar16 & *(ulong *)(original + 0x38);
  lVar11 = 0;
  do {
    if (uVar16 == 0) {
      do {
        lVar15 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1004c1780);
          (*pcVar7)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar15) goto LAB_1004c174c;
        uVar16 = *(ulong *)(original + 0x38 + lVar15 * 8);
        lVar11 = lVar11 + 1;
      } while (uVar16 == 0);
      uVar10 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
    }
    else {
      uVar10 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
      lVar15 = lVar11;
    }
    pSVar2 = (String *)(*(long *)(original + 0x30) + (LZCOUNT(uVar10) | lVar15 << 6) * 0x10);
    pcVar3 = pSVar2->str;
    pvVar4 = pSVar2->bridgeObject;
    SVar5 = *pSVar2;
    Swift::Hasher::init(*(__int64 *)(p_Var8 + 0x28));
    _swift_bridgeObjectRetain(pvVar4);
    into.unknown = auStack_a8;
    Swift::String::hash(into,SVar5);
    uVar9 = Swift::Hasher::_finalize(into);
    uVar14 = -1L << ((ulong)(byte)p_Var8[0x20] & 0x3f);
    uVar9 = uVar9 & (uVar14 ^ 0xffffffffffffffff);
    uVar12 = uVar9 >> 6;
    uVar10 = -1L << (uVar9 & 0x3f) & (*(ulong *)(p_Var8 + uVar12 * 8 + 0x38) ^ 0xffffffffffffffff);
    if (uVar10 == 0) {
      bVar6 = false;
      uVar10 = 0x3f - uVar14 >> 6;
      do {
        uVar9 = uVar12 + 1;
        if ((uVar9 == uVar10) && (bVar6)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1004c1784);
          (*pcVar7)();
        }
        uVar12 = 0;
        if (uVar9 != uVar10) {
          uVar12 = uVar9;
        }
        bVar6 = (bool)(uVar9 == uVar10 | bVar6);
      } while (*(ulong *)(p_Var8 + uVar12 * 8 + 0x38) == 0xffffffffffffffff);
      uVar10 = ~*(ulong *)(p_Var8 + uVar12 * 8 + 0x38);
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar12 << 6;
    }
    else {
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar9 & 0x7fffffffffffffc0;
    }
    uVar12 = uVar10 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var8 + uVar12 + 0x38) = 1L << (uVar10 & 0x3f) | *(ulong *)(p_Var8 + uVar12 + 0x38);
    puVar1 = (undefined8 *)(*(long *)(p_Var8 + 0x30) + uVar10 * 0x10);
    *puVar1 = pcVar3;
    puVar1[1] = pvVar4;
    *(long *)(p_Var8 + 0x10) = *(long *)(p_Var8 + 0x10) + 1;
    lVar11 = lVar15;
  } while( true );
}



/* Address: 0x1004c1784 | FUN_1004c1784 */

void FUN_1004c1784(void)

{
  __RawSetStorage *p_Var1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  _SetStorage *this;
  __RawSetStorage *p_Var6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *unaff_x20;
  __RawSetStorage *original;
  long lVar11;
  
  this = (_SetStorage *)&DAT_100fcbb28;
  FUN_1000f7830(&DAT_100fcbb28,&DAT_100c509e8);
  original = (__RawSetStorage *)*unaff_x20;
  p_Var6 = original;
  Swift::_SetStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x38;
    uVar7 = (1L << ((ulong)(byte)p_Var6[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var6 != original || p_Var1 + uVar7 * 8 <= p_Var6 + 0x38) {
      _memmove(p_Var6 + 0x38,p_Var1,uVar7 << 3);
    }
    lVar11 = 0;
    *(undefined8 *)(p_Var6 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar8 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar7 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar7 = ~(-1L << (uVar8 & 0x3f));
    }
    uVar7 = uVar7 & *(ulong *)(original + 0x38);
    if (uVar7 == 0) goto LAB_1004c1860;
    do {
      uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar7 = uVar7 - 1 & uVar7;
      while( true ) {
        lVar10 = (LZCOUNT(uVar9) | lVar11 << 6) * 0x10;
        puVar2 = (undefined8 *)(*(long *)(original + 0x30) + lVar10);
        uVar4 = puVar2[1];
        puVar3 = (undefined8 *)(*(long *)(p_Var6 + 0x30) + lVar10);
        *puVar3 = *puVar2;
        puVar3[1] = uVar4;
        _swift_bridgeObjectRetain();
        if (uVar7 != 0) break;
LAB_1004c1860:
        do {
          lVar10 = lVar11 + 1;
          if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1004c18e0);
            (*pcVar5)();
          }
          if ((long)(uVar8 + 0x3f >> 6) <= lVar10) goto LAB_1004c18b8;
          uVar7 = *(ulong *)(p_Var1 + lVar10 * 8);
          lVar11 = lVar11 + 1;
        } while (uVar7 == 0);
        uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
        uVar7 = uVar7 - 1 & uVar7;
        lVar11 = lVar10;
      }
    } while( true );
  }
LAB_1004c18b8:
  _swift_release(original);
  *unaff_x20 = (long)p_Var6;
  return;
}



/* Address: 0x1004c18e0 | FUN_1004c18e0 */

void FUN_1004c18e0(long param_1)

{
  undefined8 *puVar1;
  String *pSVar2;
  __int64 capacity;
  char *pcVar3;
  void *pvVar4;
  String SVar5;
  bool bVar6;
  code *pcVar7;
  _SetStorage *this;
  __RawSetStorage *p_Var8;
  Hasher into;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  __RawSetStorage *original;
  __RawSetStorage *p_Var15;
  long lVar16;
  ulong uVar17;
  undefined1 auStack_a8 [72];
  
  original = (__RawSetStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_SetStorage *)&DAT_100fcbb28;
  FUN_1000f7830(&DAT_100fcbb28,&DAT_100c509e8);
  p_Var8 = original;
  Swift::_SetStorage::_resize(this,original,capacity,true);
  if (*(long *)(original + 0x10) == 0) {
LAB_1004c1b10:
    _swift_release(original);
    *unaff_x20 = (long)p_Var8;
    return;
  }
  p_Var15 = original + 0x38;
  uVar13 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar17 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar17 = uVar17 & *(ulong *)p_Var15;
  lVar11 = 0;
  do {
    if (uVar17 == 0) {
      do {
        lVar16 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1004c1b40);
          (*pcVar7)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar16) {
          uVar17 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          if (((byte)original[0x20] & 0x3f) < 6) {
            *(long *)p_Var15 = -1L << (uVar17 & 0x3f);
          }
          else {
            _bzero(p_Var15,uVar17 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_1004c1b10;
        }
        uVar17 = *(ulong *)(p_Var15 + lVar16 * 8);
        lVar11 = lVar11 + 1;
      } while (uVar17 == 0);
      uVar10 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
    }
    else {
      uVar10 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
      lVar16 = lVar11;
    }
    pSVar2 = (String *)(*(long *)(original + 0x30) + (LZCOUNT(uVar10) | lVar16 << 6) * 0x10);
    pcVar3 = pSVar2->str;
    pvVar4 = pSVar2->bridgeObject;
    SVar5 = *pSVar2;
    Swift::Hasher::init(*(__int64 *)(p_Var8 + 0x28));
    into.unknown = auStack_a8;
    Swift::String::hash(into,SVar5);
    uVar9 = Swift::Hasher::_finalize(into);
    uVar14 = -1L << ((ulong)(byte)p_Var8[0x20] & 0x3f);
    uVar9 = uVar9 & (uVar14 ^ 0xffffffffffffffff);
    uVar12 = uVar9 >> 6;
    uVar10 = -1L << (uVar9 & 0x3f) & (*(ulong *)(p_Var8 + uVar12 * 8 + 0x38) ^ 0xffffffffffffffff);
    if (uVar10 == 0) {
      bVar6 = false;
      uVar10 = 0x3f - uVar14 >> 6;
      do {
        uVar9 = uVar12 + 1;
        if ((uVar9 == uVar10) && (bVar6)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1004c1b44);
          (*pcVar7)();
        }
        uVar12 = 0;
        if (uVar9 != uVar10) {
          uVar12 = uVar9;
        }
        bVar6 = (bool)(uVar9 == uVar10 | bVar6);
      } while (*(ulong *)(p_Var8 + uVar12 * 8 + 0x38) == 0xffffffffffffffff);
      uVar10 = ~*(ulong *)(p_Var8 + uVar12 * 8 + 0x38);
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar12 << 6;
    }
    else {
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar9 & 0x7fffffffffffffc0;
    }
    uVar12 = uVar10 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var8 + uVar12 + 0x38) = 1L << (uVar10 & 0x3f) | *(ulong *)(p_Var8 + uVar12 + 0x38);
    puVar1 = (undefined8 *)(*(long *)(p_Var8 + 0x30) + uVar10 * 0x10);
    *puVar1 = pcVar3;
    puVar1[1] = pvVar4;
    *(long *)(p_Var8 + 0x10) = *(long *)(p_Var8 + 0x10) + 1;
    lVar11 = lVar16;
  } while( true );
}



/* Address: 0x1004c1b44 | FUN_1004c1b44 */

/* WARNING: Removing unreachable block (ram,0x0001004c1c34) */

String FUN_1004c1b44(long param_1)

{
  undefined8 **ppuVar1;
  code *pcVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  undefined8 ***pppuVar5;
  String SVar6;
  undefined8 **local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  pppuVar5 = *(undefined8 ****)(param_1 + 0x10);
  if (pppuVar5 == (undefined8 ***)0x0) {
    SVar6 = (String)ZEXT816(0);
  }
  else {
    _swift_bridgeObjectRetain();
    pppuVar3 = pppuVar5;
    FUN_1004b4ca0(pppuVar5,0);
    pppuVar4 = &local_58;
    FUN_100370d3c(pppuVar4,pppuVar3 + 4,pppuVar5,param_1);
    FUN_10000c650(local_58,uStack_50,local_48,uStack_40,local_38);
    if (pppuVar4 != pppuVar5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1004c1c34);
      (*pcVar2)();
    }
    local_58 = pppuVar3;
    FUN_1004b7b80(&local_58);
    ppuVar1 = local_58;
    FUN_1000f7830(&DAT_100fcb568,&DAT_100c50360);
    FUN_1004b8a64();
    SVar6.bridgeObject = (void *)0xe100000000000000;
    SVar6.str = (char *)0x20;
    SVar6 = (extension_Swift)::Swift::BidirectionalCollection::_joined(SVar6);
    _swift_release(ppuVar1);
  }
  return SVar6;
}



/* Address: 0x1004c1c40 | FUN_1004c1c40 */

bool FUN_1004c1c40(_StringGuts param_1,_StringGuts param_2,_StringGuts param_3,_StringGuts param_4)

{
  bool bVar1;
  
  if (((param_1.unknown != (undefined *)0x7370747468) || (param_2.unknown != &DAT_e500000000000000))
     && (bVar1 = Swift::_stringCompareWithSmolCheck(param_1,param_2,(_StringComparisonResult)0x68),
        !bVar1)) {
    if (((param_1.unknown != (undefined *)0x70747468) || (param_2.unknown != &DAT_e400000000000000))
       && (bVar1 = Swift::_stringCompareWithSmolCheck(param_1,param_2,(_StringComparisonResult)0x68)
          , !bVar1)) {
      return false;
    }
    if (((param_3.unknown != (undefined *)0x736f686c61636f6c) ||
        (param_4.unknown != (undefined *)0xe900000000000074)) &&
       ((bVar1 = Swift::_stringCompareWithSmolCheck(param_3,param_4,(_StringComparisonResult)0x6c),
        !bVar1 && ((((param_3.unknown != (undefined *)0x2e302e302e373231 ||
                     (param_4.unknown != (undefined *)0xe900000000000031)) &&
                    (bVar1 = Swift::_stringCompareWithSmolCheck
                                       (param_3,param_4,(_StringComparisonResult)0x31), !bVar1)) &&
                   ((param_3.unknown != (undefined *)0x313a3a ||
                    (param_4.unknown != (undefined *)0xe300000000000000)))))))) {
      bVar1 = Swift::_stringCompareWithSmolCheck(param_3,param_4,(_StringComparisonResult)0x3a);
      return bVar1;
    }
  }
  return true;
}



/* Address: 0x1004c1da8 | FUN_1004c1da8 */

undefined * FUN_1004c1da8(bool param_1)

{
  ulong uVar1;
  String SVar2;
  bool bVar3;
  URL UVar4;
  URLComponents UVar5;
  URLComponents UVar6;
  char *pcVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  _StringGuts _Var12;
  void *pvVar13;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined *puVar14;
  long lVar15;
  URLComponents *pUVar16;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long lVar17;
  URLComponents *pUVar18;
  code *pcVar19;
  long lVar20;
  URLComponents UVar21;
  code *pcVar22;
  long lVar23;
  long lVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  URLComponents local_c0;
  code *local_b8;
  long local_b0;
  undefined *local_a8;
  long local_a0;
  long local_98;
  long local_90;
  URLComponents *local_88;
  long local_80;
  URLComponents *local_78;
  char *local_70;
  void *pvStack_68;
  void *pvVar11;
  
  puVar8 = &DAT_100fcb378;
  FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar8 + -8) + 0x40));
  lVar20 = (long)&local_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_80 = lVar20;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar20 = lVar20 - extraout_x12;
  UVar4 = Foundation::URL::typeMetadataAccessor();
  lVar17 = *(long *)(UVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar17 + 0x40));
  lVar23 = lVar20 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar15 = lVar23 - extraout_x12_00;
  local_98 = lVar15;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar15 = lVar15 - extraout_x12_01;
  local_90 = lVar15;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar15 = lVar15 - extraout_x12_02;
  puVar8 = &DAT_100fcb380;
  FUN_1000f7830(&DAT_100fcb380,&DAT_100c504a0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  UVar21.unknown = (undefined *)(lVar15 - extraout_x8_01);
  UVar5 = Foundation::URLComponents::typeMetadataAccessor();
  lVar24 = *(long *)(UVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar24 + 0x40));
  local_88 = (URLComponents *)(UVar21.unknown + -(extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  pUVar16 = (URLComponents *)
            ((long)(UVar21.unknown + -(extraout_x8_02 + 0xfU & 0xfffffffffffffff0)) -
            extraout_x12_03);
  local_78 = pUVar16;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  pUVar16 = (URLComponents *)((long)pUVar16 - extraout_x12_04);
  Foundation::URLComponents::_init(param_1);
  puVar8 = UVar21.unknown;
  (**(code **)(lVar24 + 0x30))(UVar21.unknown,1,UVar5.unknown);
  if ((int)puVar8 == 1) {
    FUN_1000fb4c4(UVar21.unknown,&DAT_100fcb380,&DAT_100c504a0);
    return PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  UVar6.unknown = (undefined *)pUVar16;
  (**(code **)(lVar24 + 0x20))(pUVar16,UVar21.unknown,UVar5.unknown);
  Foundation::URLComponents::_get_scheme(UVar6);
  if (UVar21.unknown == (undefined *)0x0) {
LAB_1004c2170:
    (**(code **)(lVar24 + 8))(pUVar16,UVar5.unknown);
    return PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  SVar25.bridgeObject = UVar21.unknown;
  SVar25.str = UVar6.unknown;
  local_a0 = lVar17;
  SVar25 = Swift::String::lowercased(SVar25);
  pvVar11 = SVar25.bridgeObject;
  pcVar7 = SVar25.str;
  pvVar13 = pvVar11;
  _swift_bridgeObjectRelease();
  Foundation::URLComponents::_get_host(UVar21);
  if (pvVar13 == (void *)0x0) {
    _swift_bridgeObjectRelease(pvVar11);
    goto LAB_1004c2170;
  }
  SVar26.bridgeObject = pvVar13;
  SVar26.str = UVar21.unknown;
  local_b0 = lVar23;
  local_a8 = UVar4.unknown;
  SVar25 = Swift::String::lowercased(SVar26);
  _swift_bridgeObjectRelease(pvVar13);
  pvVar13 = SVar25.bridgeObject;
  FUN_1004c1c40(pcVar7,pvVar11,SVar25.str);
  _swift_bridgeObjectRelease(pvVar11);
  _swift_bridgeObjectRelease(SVar25.bridgeObject);
  if (((ulong)pcVar7 & 1) == 0) goto LAB_1004c2170;
  pUVar18 = pUVar16;
  Foundation::URLComponents::_set_query(pUVar16);
  UVar21.unknown = (undefined *)0x0;
  Foundation::URLComponents::_set_fragment(pUVar18);
  SVar25 = Foundation::URLComponents::get_path(UVar21);
  _Var12.unknown = SVar25.bridgeObject;
  if ((SVar25.str != (undefined *)0x2f) || (_Var12.unknown != (undefined *)0xe100000000000000)) {
    pvVar13 = (void *)0xe100000000000000;
    bVar3 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)SVar25.str,_Var12,(_StringComparisonResult)0x2f);
    if (!bVar3) goto LAB_1004c20b4;
  }
  _swift_bridgeObjectRelease(_Var12.unknown);
  SVar25 = (String)(ZEXT816(0xe000000000000000) << 0x40);
LAB_1004c20b4:
  pUVar18 = local_78;
  puVar8 = local_a8;
  local_b8 = *(code **)(lVar24 + 0x10);
  UVar21 = UVar5;
  (*local_b8)(local_78,pUVar16);
  local_70 = (char *)0xd000000000000025;
  pvStack_68 = (void *)0x8000000100da7190;
  local_c0.unknown = (undefined *)0x8000000100da7190;
  SVar28.bridgeObject = pvVar13;
  SVar28.str = UVar21.unknown;
  Swift::String::append(SVar25,SVar28);
  _swift_bridgeObjectRelease(SVar25.bridgeObject);
  SVar2.bridgeObject = pvStack_68;
  SVar2.str = local_70;
  UVar21.unknown = local_70;
  Foundation::URLComponents::set_path(pUVar18,SVar2);
  Foundation::URLComponents::_get_url(UVar21);
  lVar17 = local_a0;
  pcVar22 = *(code **)(local_a0 + 0x30);
  lVar23 = lVar20;
  (*pcVar22)(lVar20,1,puVar8);
  if ((int)lVar23 == 1) {
    FUN_1000fb4c4(lVar20,&DAT_100fcb378,&DAT_100c50170);
    puVar14 = PTR___swiftEmptyArrayStorage_100eae0d8;
    pUVar18 = local_88;
  }
  else {
    pcVar19 = *(code **)(lVar17 + 0x20);
    (*pcVar19)(lVar15,lVar20,puVar8);
    (**(code **)(lVar17 + 0x10))(local_90,lVar15,puVar8);
    puVar8 = (undefined *)0x0;
    FUN_1004a4640(0,1,1,PTR___swiftEmptyArrayStorage_100eae0d8);
    pUVar18 = local_88;
    uVar1 = *(ulong *)(puVar8 + 0x10);
    puVar14 = puVar8;
    if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
      puVar14 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
      FUN_1004a4640(puVar14,uVar1 + 1,1,puVar8);
    }
    lVar17 = local_a0;
    puVar8 = local_a8;
    *(ulong *)(puVar14 + 0x10) = uVar1 + 1;
    (*pcVar19)(puVar14 + *(long *)(local_a0 + 0x48) * uVar1 +
                         ((ulong)*(byte *)(local_a0 + 0x50) + 0x20 &
                         ((ulong)*(byte *)(local_a0 + 0x50) ^ 0xffffffffffffffff)),local_90,local_a8
              );
    (**(code **)(lVar17 + 8))(lVar15,puVar8);
  }
  (*local_b8)(pUVar18,pUVar16,UVar5.unknown);
  UVar21.unknown = (undefined *)0xd000000000000025;
  SVar27.bridgeObject = local_c0.unknown;
  SVar27.str = (char *)0xd000000000000025;
  Foundation::URLComponents::set_path(pUVar18,SVar27);
  lVar15 = local_80;
  Foundation::URLComponents::_get_url(UVar21);
  lVar23 = lVar15;
  (*pcVar22)(lVar15,1,puVar8);
  lVar20 = local_98;
  if ((int)lVar23 == 1) {
    pcVar22 = *(code **)(lVar24 + 8);
    (*pcVar22)(pUVar18,UVar5.unknown);
    (*pcVar22)(local_78,UVar5.unknown);
    (*pcVar22)(pUVar16,UVar5.unknown);
    FUN_1000fb4c4(lVar15,&DAT_100fcb378,&DAT_100c50170);
    return puVar14;
  }
  pcVar22 = *(code **)(lVar17 + 0x20);
  (*pcVar22)(local_98,lVar15,puVar8);
  (**(code **)(lVar17 + 0x10))(local_b0,lVar20,puVar8);
  puVar9 = puVar14;
  _swift_isUniquelyReferenced_nonNull_native();
  puVar10 = puVar14;
  if (((ulong)puVar9 & 1) == 0) {
    puVar10 = (undefined *)0x0;
    FUN_1004a4640(0,*(long *)(puVar14 + 0x10) + 1,1,puVar14);
  }
  uVar1 = *(ulong *)(puVar10 + 0x10);
  puVar14 = puVar10;
  if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar1) {
    puVar14 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
    FUN_1004a4640(puVar14,uVar1 + 1,1,puVar10);
  }
  lVar15 = local_a0;
  *(ulong *)(puVar14 + 0x10) = uVar1 + 1;
  (*pcVar22)(puVar14 + *(long *)(local_a0 + 0x48) * uVar1 +
                       ((ulong)*(byte *)(local_a0 + 0x50) + 0x20 &
                       ((ulong)*(byte *)(local_a0 + 0x50) ^ 0xffffffffffffffff)),local_b0,puVar8);
  (**(code **)(lVar15 + 8))(lVar20,puVar8);
  pcVar22 = *(code **)(lVar24 + 8);
  (*pcVar22)(pUVar18,UVar5.unknown);
  (*pcVar22)(local_78,UVar5.unknown);
  (*pcVar22)(pUVar16,UVar5.unknown);
  return puVar14;
}


