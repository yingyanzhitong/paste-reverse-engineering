/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1009f029c | FUN_1009f029c */

long * FUN_1009f029c(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined *puVar4;
  long *plVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  lVar9 = *(long *)(param_3 + -8);
  uVar1 = *(uint *)(lVar9 + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    plVar5 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    iVar3 = (int)plVar5;
    if (iVar3 == 2) {
      lVar9 = param_2[1];
      lVar10 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = lVar10;
      _swift_retain(lVar9);
      uVar7 = 2;
    }
    else if (iVar3 == 1) {
      puVar4 = &DAT_100ff3c10;
      FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
      plVar5 = param_2;
      _swift_getEnumCaseMultiPayload(param_2,puVar4);
      bVar2 = (int)plVar5 != 1;
      if (bVar2) {
        puVar6 = &DAT_100ff3c18;
        FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
        (**(code **)(*(long *)(puVar6 + -8) + 0x10))(param_1,param_2,puVar6);
      }
      else {
        *param_1 = *param_2;
        _swift_retain();
      }
      _swift_storeEnumTagMultiPayload(param_1,puVar4,!bVar2);
      lVar9 = 0;
      FUN_1009eda8c();
      *(undefined1 *)((long)param_1 + (long)*(int *)(lVar9 + 0x14)) =
           *(undefined1 *)((long)param_2 + (long)*(int *)(lVar9 + 0x14));
      uVar7 = 1;
    }
    else {
      if (iVar3 != 0) {
        plVar5 = _memcpy(param_1,param_2,*(size_t *)(lVar9 + 0x40));
        return plVar5;
      }
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      *(int *)(param_1 + 2) = (int)param_2[2];
      *(undefined4 *)((long)param_1 + 0x13) = *(undefined4 *)((long)param_2 + 0x13);
      _swift_retain();
      uVar7 = 0;
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,uVar7);
  }
  else {
    lVar9 = *param_2;
    *param_1 = lVar9;
    uVar8 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar9 + (uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1009f0428 | FUN_1009f0428 */

void FUN_1009f0428(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar2 = param_1;
  _swift_getEnumCaseMultiPayload();
  iVar1 = (int)puVar2;
  if (iVar1 == 2) {
    uVar4 = param_1[1];
  }
  else {
    if (iVar1 == 1) {
      puVar3 = &DAT_100ff3c10;
      FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
      puVar2 = param_1;
      _swift_getEnumCaseMultiPayload(param_1,puVar3);
      if ((int)puVar2 != 1) {
        puVar3 = &DAT_100ff3c18;
        FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
                    /* WARNING: Could not recover jumptable at 0x0001009f04c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(puVar3 + -8) + 8))(param_1,puVar3);
        return;
      }
    }
    else if (iVar1 != 0) {
      return;
    }
    uVar4 = *param_1;
  }
  _swift_release(uVar4);
  return;
}



/* Address: 0x1009f04cc | FUN_1009f04cc */

undefined8 * FUN_1009f04cc(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar4 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  iVar2 = (int)puVar4;
  if (iVar2 == 2) {
    uVar7 = param_2[1];
    uVar8 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar8;
    _swift_retain(uVar7);
    uVar7 = 2;
  }
  else if (iVar2 == 1) {
    puVar3 = &DAT_100ff3c10;
    FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
    puVar4 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,puVar3);
    bVar1 = (int)puVar4 != 1;
    if (bVar1) {
      puVar5 = &DAT_100ff3c18;
      FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
      (**(code **)(*(long *)(puVar5 + -8) + 0x10))(param_1,param_2,puVar5);
    }
    else {
      *param_1 = *param_2;
      _swift_retain();
    }
    _swift_storeEnumTagMultiPayload(param_1,puVar3,!bVar1);
    lVar6 = 0;
    FUN_1009eda8c();
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar6 + 0x14)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar6 + 0x14));
    uVar7 = 1;
  }
  else {
    if (iVar2 != 0) {
      puVar4 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
      return puVar4;
    }
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    *(undefined4 *)((long)param_1 + 0x13) = *(undefined4 *)((long)param_2 + 0x13);
    _swift_retain();
    uVar7 = 0;
  }
  _swift_storeEnumTagMultiPayload(param_1,param_3,uVar7);
  return param_1;
}



/* Address: 0x1009f0630 | FUN_1009f0630 */

undefined8 * FUN_1009f0630(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (param_1 != param_2) {
    FUN_10005241c(param_1,FUN_1009eda78);
    puVar5 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    iVar3 = (int)puVar5;
    if (iVar3 == 2) {
      uVar8 = param_2[1];
      uVar9 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar9;
      _swift_retain(uVar8);
      uVar8 = 2;
    }
    else if (iVar3 == 1) {
      puVar4 = &DAT_100ff3c10;
      FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
      puVar5 = param_2;
      _swift_getEnumCaseMultiPayload(param_2,puVar4);
      bVar2 = (int)puVar5 != 1;
      if (bVar2) {
        puVar6 = &DAT_100ff3c18;
        FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
        (**(code **)(*(long *)(puVar6 + -8) + 0x10))(param_1,param_2,puVar6);
      }
      else {
        *param_1 = *param_2;
        _swift_retain();
      }
      _swift_storeEnumTagMultiPayload(param_1,puVar4,!bVar2);
      lVar7 = 0;
      FUN_1009eda8c();
      *(undefined1 *)((long)param_1 + (long)*(int *)(lVar7 + 0x14)) =
           *(undefined1 *)((long)param_2 + (long)*(int *)(lVar7 + 0x14));
      uVar8 = 1;
    }
    else {
      if (iVar3 != 0) {
        puVar5 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
        return puVar5;
      }
      *param_1 = *param_2;
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
      *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)((long)param_2 + 0xc);
      uVar1 = *(undefined4 *)(param_2 + 2);
      *(undefined4 *)((long)param_1 + 0x13) = *(undefined4 *)((long)param_2 + 0x13);
      *(undefined4 *)(param_1 + 2) = uVar1;
      _swift_retain();
      uVar8 = 0;
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,uVar8);
  }
  return param_1;
}



/* Address: 0x1009f07b4 | FUN_1009f07b4 */

void * FUN_1009f07b4(void *param_1,void *param_2,long param_3)

{
  undefined *puVar1;
  void *pvVar2;
  undefined *puVar3;
  long lVar4;
  
  pvVar2 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  if ((int)pvVar2 == 1) {
    puVar1 = &DAT_100ff3c10;
    FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
    pvVar2 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,puVar1);
    if ((int)pvVar2 == 0) {
      puVar3 = &DAT_100ff3c18;
      FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
      (**(code **)(*(long *)(puVar3 + -8) + 0x20))(param_1,param_2,puVar3);
      _swift_storeEnumTagMultiPayload(param_1,puVar1,0);
    }
    else {
      _memcpy(param_1,param_2,*(size_t *)(*(long *)(puVar1 + -8) + 0x40));
    }
    lVar4 = 0;
    FUN_1009eda8c();
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar4 + 0x14)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0x14));
    _swift_storeEnumTagMultiPayload(param_1,param_3,1);
    return param_1;
  }
  pvVar2 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
  return pvVar2;
}



/* Address: 0x1009f08b8 | FUN_1009f08b8 */

void * FUN_1009f08b8(void *param_1,void *param_2,long param_3)

{
  undefined *puVar1;
  void *pvVar2;
  undefined *puVar3;
  long lVar4;
  
  if (param_1 != param_2) {
    FUN_10005241c(param_1,FUN_1009eda78);
    pvVar2 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    if ((int)pvVar2 != 1) {
      pvVar2 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
      return pvVar2;
    }
    puVar1 = &DAT_100ff3c10;
    FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
    pvVar2 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,puVar1);
    if ((int)pvVar2 == 0) {
      puVar3 = &DAT_100ff3c18;
      FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
      (**(code **)(*(long *)(puVar3 + -8) + 0x20))(param_1,param_2,puVar3);
      _swift_storeEnumTagMultiPayload(param_1,puVar1,0);
    }
    else {
      _memcpy(param_1,param_2,*(size_t *)(*(long *)(puVar1 + -8) + 0x40));
    }
    lVar4 = 0;
    FUN_1009eda8c();
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar4 + 0x14)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0x14));
    _swift_storeEnumTagMultiPayload(param_1,param_3,1);
  }
  return param_1;
}



/* Address: 0x1009f09d4 | FUN_1009f09d4 */

void FUN_1009f09d4(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined *local_38;
  long local_30;
  undefined *puStack_28;
  
  local_38 = &DAT_100c8d660;
  lVar1 = 0x13f;
  FUN_1009eda8c();
  if (param_2 < 0x40) {
    local_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = PTR___value_witness_table_for_____>____100eae0d0 + 0x40;
    _swift_initEnumMetadataMultiPayload(param_1,0x100,3,&local_38);
  }
  return;
}



/* Address: 0x1009f0a50 | FUN_1009f0a50 */

undefined1  [16] FUN_1009f0a50(void)

{
  return ZEXT816(0x100f270b8);
}



/* Address: 0x1009f0a60 | FUN_1009f0a60 */

long * FUN_1009f0a60(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    puVar3 = &DAT_100ff3c10;
    FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
    plVar4 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,puVar3);
    bVar2 = (int)plVar4 != 1;
    if (bVar2) {
      puVar6 = &DAT_100ff3c18;
      FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
      (**(code **)(*(long *)(puVar6 + -8) + 0x10))(param_1,param_2,puVar6);
    }
    else {
      *param_1 = *param_2;
      _swift_retain();
    }
    _swift_storeEnumTagMultiPayload(param_1,puVar3,!bVar2);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  }
  else {
    lVar5 = *param_2;
    *param_1 = lVar5;
    uVar7 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar5 + (uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff)));
  }
  _swift_retain();
  return param_1;
}



/* Address: 0x1009f0b44 | FUN_1009f0b44 */

void FUN_1009f0b44(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar1 = &DAT_100ff3c10;
  FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
  puVar2 = param_1;
  _swift_getEnumCaseMultiPayload(param_1,puVar1);
  if ((int)puVar2 == 1) {
    _swift_release(*param_1);
  }
  else {
    puVar1 = &DAT_100ff3c18;
    FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
    (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  }
  _swift_release(*(undefined8 *)((long)param_1 + (long)*(int *)(param_2 + 0x14)));
  return;
}



/* Address: 0x1009f0bc8 | FUN_1009f0bc8 */

undefined8 * FUN_1009f0bc8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  
  puVar2 = &DAT_100ff3c10;
  FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
  puVar3 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,puVar2);
  bVar1 = (int)puVar3 != 1;
  if (bVar1) {
    puVar4 = &DAT_100ff3c18;
    FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
    (**(code **)(*(long *)(puVar4 + -8) + 0x10))(param_1,param_2,puVar4);
  }
  else {
    *param_1 = *param_2;
    _swift_retain();
  }
  _swift_storeEnumTagMultiPayload(param_1,puVar2,!bVar1);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  _swift_retain();
  return param_1;
}



/* Address: 0x1009f0c84 | FUN_1009f0c84 */

undefined8 * FUN_1009f0c84(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (param_1 != param_2) {
    puVar2 = &DAT_100ff3c10;
    FUN_1000fb4c4(param_1,&DAT_100ff3c10,&DAT_100c8e0d0);
    FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
    puVar3 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,puVar2);
    bVar1 = (int)puVar3 != 1;
    if (bVar1) {
      puVar4 = &DAT_100ff3c18;
      FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
      (**(code **)(*(long *)(puVar4 + -8) + 0x10))(param_1,param_2,puVar4);
    }
    else {
      *param_1 = *param_2;
      _swift_retain();
    }
    _swift_storeEnumTagMultiPayload(param_1,puVar2,!bVar1);
  }
  lVar5 = (long)*(int *)(param_3 + 0x14);
  uVar6 = *(undefined8 *)((long)param_1 + lVar5);
  *(undefined8 *)((long)param_1 + lVar5) = *(undefined8 *)((long)param_2 + lVar5);
  _swift_retain();
  _swift_release(uVar6);
  return param_1;
}



/* Address: 0x1009f0d74 | FUN_1009f0d74 */

void * FUN_1009f0d74(void *param_1,void *param_2,long param_3)

{
  undefined *puVar1;
  void *pvVar2;
  undefined *puVar3;
  
  puVar1 = &DAT_100ff3c10;
  FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
  pvVar2 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,puVar1);
  if ((int)pvVar2 == 0) {
    puVar3 = &DAT_100ff3c18;
    FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
    (**(code **)(*(long *)(puVar3 + -8) + 0x20))(param_1,param_2,puVar3);
    _swift_storeEnumTagMultiPayload(param_1,puVar1,0);
  }
  else {
    _memcpy(param_1,param_2,*(size_t *)(*(long *)(puVar1 + -8) + 0x40));
  }
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  return param_1;
}



/* Address: 0x1009f0e2c | FUN_1009f0e2c */

void * FUN_1009f0e2c(void *param_1,void *param_2,long param_3)

{
  undefined *puVar1;
  void *pvVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (param_1 != param_2) {
    puVar1 = &DAT_100ff3c10;
    FUN_1000fb4c4(param_1,&DAT_100ff3c10,&DAT_100c8e0d0);
    FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
    pvVar2 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,puVar1);
    if ((int)pvVar2 == 0) {
      puVar3 = &DAT_100ff3c18;
      FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
      (**(code **)(*(long *)(puVar3 + -8) + 0x20))(param_1,param_2,puVar3);
      _swift_storeEnumTagMultiPayload(param_1,puVar1,0);
    }
    else {
      _memcpy(param_1,param_2,*(size_t *)(*(long *)(puVar1 + -8) + 0x40));
    }
  }
  lVar5 = (long)*(int *)(param_3 + 0x14);
  uVar4 = *(undefined8 *)((long)param_1 + lVar5);
  *(undefined8 *)((long)param_1 + lVar5) = *(undefined8 *)((long)param_2 + lVar5);
  _swift_release(uVar4);
  return param_1;
}



/* Address: 0x1009f0f14 | FUN_1009f0f14 */

void FUN_1009f0f14(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1009f0f20 | FUN_1009f0f20 */

ulong FUN_1009f0f20(ulong param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  puVar1 = &DAT_100ff3ce0;
  FUN_1000f7830(&DAT_100ff3ce0,&DAT_100c8d348);
  if ((int)param_2 == *(int *)(*(long *)(puVar1 + -8) + 0x54)) {
                    /* WARNING: Could not recover jumptable at 0x0001009f0f7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(puVar1 + -8) + 0x30))(param_1,param_2,puVar1);
    return param_1;
  }
  uVar2 = *(ulong *)(param_1 + (long)*(int *)(param_3 + 0x14));
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  return (ulong)((int)uVar2 + 1);
}



/* Address: 0x1009f0fa8 | FUN_1009f0fa8 */

void FUN_1009f0fa8(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1009f0fb4 | FUN_1009f0fb4 */

void FUN_1009f0fb4(long param_1,undefined8 param_2,int param_3,long param_4)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff3ce0;
  FUN_1000f7830(&DAT_100ff3ce0,&DAT_100c8d348);
  if (param_3 == *(int *)(*(long *)(puVar1 + -8) + 0x54)) {
                    /* WARNING: Could not recover jumptable at 0x0001009f1018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(puVar1 + -8) + 0x38))(param_1,param_2,param_2,puVar1);
    return;
  }
  *(ulong *)(param_1 + *(int *)(param_4 + 0x14)) = (ulong)((int)param_2 - 1);
  return;
}



/* Address: 0x1009f1038 | FUN_1009f1038 */

void FUN_1009f1038(void)

{
  FUN_1009f1664();
  return;
}



/* Address: 0x1009f1048 | FUN_1009f1048 */

void FUN_1009f1048(undefined8 param_1)

{
  undefined *puVar1;
  
  if (DAT_100ff4110 != 0) {
    return;
  }
  puVar1 = &DAT_100f08218;
  FUN_1005e828c();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  DAT_100ff4110 = param_1;
  return;
}



/* Address: 0x1009f1098 | FUN_1009f1098 */

long * FUN_1009f1098(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    puVar3 = &DAT_100ff3c10;
    FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
    plVar4 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,puVar3);
    bVar2 = (int)plVar4 != 1;
    if (bVar2) {
      puVar6 = &DAT_100ff3c18;
      FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
      (**(code **)(*(long *)(puVar6 + -8) + 0x10))(param_1,param_2,puVar6);
    }
    else {
      *param_1 = *param_2;
      _swift_retain();
    }
    _swift_storeEnumTagMultiPayload(param_1,puVar3,!bVar2);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  }
  else {
    lVar5 = *param_2;
    *param_1 = lVar5;
    uVar7 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar5 + (uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1009f117c | FUN_1009f117c */

void FUN_1009f117c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar1 = &DAT_100ff3c10;
  FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
  puVar2 = param_1;
  _swift_getEnumCaseMultiPayload(param_1,puVar1);
  if ((int)puVar2 == 1) {
    _swift_release(*param_1);
    return;
  }
  puVar1 = &DAT_100ff3c18;
  FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
                    /* WARNING: Could not recover jumptable at 0x0001009f11f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return;
}



/* Address: 0x1009f11f4 | FUN_1009f11f4 */

undefined8 * FUN_1009f11f4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  
  puVar2 = &DAT_100ff3c10;
  FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
  puVar3 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,puVar2);
  bVar1 = (int)puVar3 != 1;
  if (bVar1) {
    puVar4 = &DAT_100ff3c18;
    FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
    (**(code **)(*(long *)(puVar4 + -8) + 0x10))(param_1,param_2,puVar4);
  }
  else {
    *param_1 = *param_2;
    _swift_retain();
  }
  _swift_storeEnumTagMultiPayload(param_1,puVar2,!bVar1);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  return param_1;
}



/* Address: 0x1009f12ac | FUN_1009f12ac */

undefined8 * FUN_1009f12ac(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  
  if (param_1 != param_2) {
    puVar2 = &DAT_100ff3c10;
    FUN_1000fb4c4(param_1,&DAT_100ff3c10,&DAT_100c8e0d0);
    FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
    puVar3 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,puVar2);
    bVar1 = (int)puVar3 != 1;
    if (bVar1) {
      puVar4 = &DAT_100ff3c18;
      FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
      (**(code **)(*(long *)(puVar4 + -8) + 0x10))(param_1,param_2,puVar4);
    }
    else {
      *param_1 = *param_2;
      _swift_retain();
    }
    _swift_storeEnumTagMultiPayload(param_1,puVar2,!bVar1);
  }
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  return param_1;
}



/* Address: 0x1009f138c | FUN_1009f138c */

void * FUN_1009f138c(void *param_1,void *param_2,long param_3)

{
  undefined *puVar1;
  void *pvVar2;
  undefined *puVar3;
  
  puVar1 = &DAT_100ff3c10;
  FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
  pvVar2 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,puVar1);
  if ((int)pvVar2 == 0) {
    puVar3 = &DAT_100ff3c18;
    FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
    (**(code **)(*(long *)(puVar3 + -8) + 0x20))(param_1,param_2,puVar3);
    _swift_storeEnumTagMultiPayload(param_1,puVar1,0);
  }
  else {
    _memcpy(param_1,param_2,*(size_t *)(*(long *)(puVar1 + -8) + 0x40));
  }
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  return param_1;
}



/* Address: 0x1009f1444 | FUN_1009f1444 */

void * FUN_1009f1444(void *param_1,void *param_2,long param_3)

{
  undefined *puVar1;
  void *pvVar2;
  undefined *puVar3;
  
  if (param_1 != param_2) {
    puVar1 = &DAT_100ff3c10;
    FUN_1000fb4c4(param_1,&DAT_100ff3c10,&DAT_100c8e0d0);
    FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
    pvVar2 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,puVar1);
    if ((int)pvVar2 == 0) {
      puVar3 = &DAT_100ff3c18;
      FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
      (**(code **)(*(long *)(puVar3 + -8) + 0x20))(param_1,param_2,puVar3);
      _swift_storeEnumTagMultiPayload(param_1,puVar1,0);
    }
    else {
      _memcpy(param_1,param_2,*(size_t *)(*(long *)(puVar1 + -8) + 0x40));
    }
  }
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  return param_1;
}



/* Address: 0x1009f1524 | FUN_1009f1524 */

void FUN_1009f1524(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1009f1530 | FUN_1009f1530 */

ulong FUN_1009f1530(ulong param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  uint uVar3;
  
  puVar1 = &DAT_100ff3c00;
  FUN_1000f7830(&DAT_100ff3c00,&DAT_100c8d460);
  if ((int)param_2 == *(int *)(*(long *)(puVar1 + -8) + 0x54)) {
                    /* WARNING: Could not recover jumptable at 0x0001009f158c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(puVar1 + -8) + 0x30))(param_1,param_2,puVar1);
    return param_1;
  }
  uVar3 = (uint)*(byte *)(param_1 + (long)*(int *)(param_3 + 0x14));
  if (uVar3 < 2) {
    uVar2 = 0;
  }
  else {
    uVar2 = (ulong)((uVar3 + 0x7ffffffe & 0x7fffffff) + 1);
  }
  return uVar2;
}



/* Address: 0x1009f15c8 | FUN_1009f15c8 */

void FUN_1009f15c8(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1009f15d4 | FUN_1009f15d4 */

void FUN_1009f15d4(long param_1,undefined8 param_2,int param_3,long param_4)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff3c00;
  FUN_1000f7830(&DAT_100ff3c00,&DAT_100c8d460);
  if (param_3 == *(int *)(*(long *)(puVar1 + -8) + 0x54)) {
                    /* WARNING: Could not recover jumptable at 0x0001009f1638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(puVar1 + -8) + 0x38))(param_1,param_2,param_2,puVar1);
    return;
  }
  *(char *)(param_1 + *(int *)(param_4 + 0x14)) = (char)param_2 + '\x01';
  return;
}



/* Address: 0x1009f1658 | FUN_1009f1658 */

void FUN_1009f1658(void)

{
  FUN_1009f1664();
  return;
}



/* Address: 0x1009f1664 | FUN_1009f1664 */

void FUN_1009f1664(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long local_30;
  undefined8 uStack_28;
  
  lVar1 = 0x13f;
  FUN_1009f1048();
  if (param_2 < 0x40) {
    local_30 = *(long *)(lVar1 + -8) + 0x40;
    uStack_28 = param_4;
    _swift_initStructMetadata(param_1,0x100,2,&local_30,param_1 + 0x10);
  }
  return;
}



/* Address: 0x1009f16d0 | FUN_1009f16d0 */

long * FUN_1009f16d0(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_3 + -8);
  uVar1 = *(uint *)(lVar6 + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    plVar3 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    if ((int)plVar3 == 1) {
      *param_1 = *param_2;
      _swift_retain();
      uVar4 = 1;
    }
    else {
      if ((int)plVar3 != 0) {
        plVar3 = _memcpy(param_1,param_2,*(size_t *)(lVar6 + 0x40));
        return plVar3;
      }
      puVar2 = &DAT_100ff3d48;
      FUN_1000f7830(&DAT_100ff3d48,&DAT_100c8d4d0);
      lVar6 = *(long *)(puVar2 + -8);
      plVar3 = param_2;
      (**(code **)(lVar6 + 0x30))(param_2,1,puVar2);
      if ((int)plVar3 == 0) {
        (**(code **)(lVar6 + 0x10))(param_1,param_2,puVar2);
        (**(code **)(lVar6 + 0x38))(param_1,0,1,puVar2);
      }
      else {
        puVar2 = &DAT_100ff3d50;
        FUN_1000f7830(&DAT_100ff3d50,&DAT_100c8d458);
        _memcpy(param_1,param_2,*(size_t *)(*(long *)(puVar2 + -8) + 0x40));
      }
      uVar4 = 0;
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,uVar4);
  }
  else {
    lVar6 = *param_2;
    *param_1 = lVar6;
    uVar5 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar6 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1009f1824 | FUN_1009f1824 */

void FUN_1009f1824(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = param_1;
  _swift_getEnumCaseMultiPayload();
  if ((int)puVar1 == 1) {
    _swift_release(*param_1);
    return;
  }
  if ((int)puVar1 == 0) {
    puVar2 = &DAT_100ff3d48;
    FUN_1000f7830(&DAT_100ff3d48,&DAT_100c8d4d0);
    lVar3 = *(long *)(puVar2 + -8);
    puVar1 = param_1;
    (**(code **)(lVar3 + 0x30))(param_1,1,puVar2);
    if ((int)puVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001009f18b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar3 + 8))(param_1,puVar2);
      return;
    }
  }
  return;
}



/* Address: 0x1009f18bc | FUN_1009f18bc */

undefined8 * FUN_1009f18bc(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar2 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  if ((int)puVar2 == 1) {
    *param_1 = *param_2;
    _swift_retain();
    uVar3 = 1;
  }
  else {
    if ((int)puVar2 != 0) {
      puVar2 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
      return puVar2;
    }
    puVar1 = &DAT_100ff3d48;
    FUN_1000f7830(&DAT_100ff3d48,&DAT_100c8d4d0);
    lVar4 = *(long *)(puVar1 + -8);
    puVar2 = param_2;
    (**(code **)(lVar4 + 0x30))(param_2,1,puVar1);
    if ((int)puVar2 == 0) {
      (**(code **)(lVar4 + 0x10))(param_1,param_2,puVar1);
      (**(code **)(lVar4 + 0x38))(param_1,0,1,puVar1);
    }
    else {
      puVar1 = &DAT_100ff3d50;
      FUN_1000f7830(&DAT_100ff3d50,&DAT_100c8d458);
      _memcpy(param_1,param_2,*(size_t *)(*(long *)(puVar1 + -8) + 0x40));
    }
    uVar3 = 0;
  }
  _swift_storeEnumTagMultiPayload(param_1,param_3,uVar3);
  return param_1;
}



/* Address: 0x1009f19e8 | FUN_1009f19e8 */

undefined8 * FUN_1009f19e8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (param_1 != param_2) {
    FUN_10005241c(param_1,FUN_1009ea95c);
    puVar2 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    if ((int)puVar2 == 1) {
      *param_1 = *param_2;
      _swift_retain();
      uVar3 = 1;
    }
    else {
      if ((int)puVar2 != 0) {
        puVar2 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
        return puVar2;
      }
      puVar1 = &DAT_100ff3d48;
      FUN_1000f7830(&DAT_100ff3d48,&DAT_100c8d4d0);
      lVar4 = *(long *)(puVar1 + -8);
      puVar2 = param_2;
      (**(code **)(lVar4 + 0x30))(param_2,1,puVar1);
      if ((int)puVar2 == 0) {
        (**(code **)(lVar4 + 0x10))(param_1,param_2,puVar1);
        (**(code **)(lVar4 + 0x38))(param_1,0,1,puVar1);
      }
      else {
        puVar1 = &DAT_100ff3d50;
        FUN_1000f7830(&DAT_100ff3d50,&DAT_100c8d458);
        _memcpy(param_1,param_2,*(size_t *)(*(long *)(puVar1 + -8) + 0x40));
      }
      uVar3 = 0;
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,uVar3);
  }
  return param_1;
}



/* Address: 0x1009f1b2c | FUN_1009f1b2c */

void * FUN_1009f1b2c(void *param_1,void *param_2,long param_3)

{
  void *pvVar1;
  undefined *puVar2;
  long lVar3;
  
  pvVar1 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  if ((int)pvVar1 != 0) {
    pvVar1 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
    return pvVar1;
  }
  puVar2 = &DAT_100ff3d48;
  FUN_1000f7830(&DAT_100ff3d48,&DAT_100c8d4d0);
  lVar3 = *(long *)(puVar2 + -8);
  pvVar1 = param_2;
  (**(code **)(lVar3 + 0x30))(param_2,1,puVar2);
  if ((int)pvVar1 == 0) {
    (**(code **)(lVar3 + 0x20))(param_1,param_2,puVar2);
    (**(code **)(lVar3 + 0x38))(param_1,0,1,puVar2);
  }
  else {
    puVar2 = &DAT_100ff3d50;
    FUN_1000f7830(&DAT_100ff3d50,&DAT_100c8d458);
    _memcpy(param_1,param_2,*(size_t *)(*(long *)(puVar2 + -8) + 0x40));
  }
  _swift_storeEnumTagMultiPayload(param_1,param_3,0);
  return param_1;
}



/* Address: 0x1009f1c34 | FUN_1009f1c34 */

void * FUN_1009f1c34(void *param_1,void *param_2,long param_3)

{
  void *pvVar1;
  undefined *puVar2;
  long lVar3;
  
  if (param_1 != param_2) {
    FUN_10005241c(param_1,FUN_1009ea95c);
    pvVar1 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    if ((int)pvVar1 != 0) {
      pvVar1 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
      return pvVar1;
    }
    puVar2 = &DAT_100ff3d48;
    FUN_1000f7830(&DAT_100ff3d48,&DAT_100c8d4d0);
    lVar3 = *(long *)(puVar2 + -8);
    pvVar1 = param_2;
    (**(code **)(lVar3 + 0x30))(param_2,1,puVar2);
    if ((int)pvVar1 == 0) {
      (**(code **)(lVar3 + 0x20))(param_1,param_2,puVar2);
      (**(code **)(lVar3 + 0x38))(param_1,0,1,puVar2);
    }
    else {
      puVar2 = &DAT_100ff3d50;
      FUN_1000f7830(&DAT_100ff3d50,&DAT_100c8d458);
      _memcpy(param_1,param_2,*(size_t *)(*(long *)(puVar2 + -8) + 0x40));
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,0);
  }
  return param_1;
}



/* Address: 0x1009f1d54 | FUN_1009f1d54 */

void FUN_1009f1d54(undefined8 param_1,ulong param_2)

{
  long lVar1;
  long local_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  FUN_1009f1dc4();
  if (param_2 < 0x40) {
    local_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
    _swift_initEnumMetadataMultiPayload(param_1,0x100,2,&local_30);
  }
  return;
}



/* Address: 0x1009f1dc4 | FUN_1009f1dc4 */

void FUN_1009f1dc4(void)

{
  Optional OVar1;
  undefined *puVar2;
  undefined7 extraout_var;
  
  if (DAT_100ff4250 == 0) {
    puVar2 = &DAT_100ff3d48;
    FUN_1000f8b08(&DAT_100ff3d48,&DAT_100c8d4d0);
    OVar1 = Swift::Optional::typeMetadataAccessor();
    if (puVar2 == (undefined *)0x0) {
      DAT_100ff4250 = CONCAT71(extraout_var,OVar1.value);
    }
  }
  return;
}



/* Address: 0x1009f1e24 | FUN_1009f1e24 */

void FUN_1009f1e24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  byte param_5)

{
  if (param_5 < 2) {
    _swift_retain(param_2);
    return;
  }
  return;
}



/* Address: 0x1009f1e3c | FUN_1009f1e3c */

void FUN_1009f1e3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  byte param_5)

{
  if (param_5 < 2) {
    _swift_release(param_2);
    return;
  }
  return;
}



/* Address: 0x1009f1e54 | FUN_1009f1e54 */

void FUN_1009f1e54(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x1009f1e78 | FUN_1009f1e78 */

void FUN_1009f1e78(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  _swift_task_switch(FUN_1009f1e90,0,0);
  return;
}



/* Address: 0x1009f1e90 | FUN_1009f1e90 */

void FUN_1009f1e90(void)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x30);
  _swift_beginAccess(lVar2 + 0x10,unaff_x22 + 0x10,0x21,0);
  uVar3 = *(undefined8 *)(*(long *)(lVar2 + 0x10) + 0x10);
  plVar1 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x38) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1009f1f14;
  FUN_1009f6408(uVar3);
  return;
}



/* Address: 0x1009f1f14 | FUN_1009f1f14 */

void FUN_1009f1f14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined8 *puVar1;
  long *unaff_x22;
  long lVar2;
  long lVar3;
  
  lVar3 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(long *)(lVar3 + 0x40) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x38));
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_1009f1fcc,0,0);
    return;
  }
  puVar1 = *(undefined8 **)(lVar3 + 0x28);
  _swift_endAccess(lVar3 + 0x10);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(char *)((long)puVar1 + 0x16) = (char)((ulong)param_3 >> 0x30);
  *(short *)((long)puVar1 + 0x14) = (short)((ulong)param_3 >> 0x20);
  *(int *)(puVar1 + 2) = (int)param_3;
                    /* WARNING: Could not recover jumptable at 0x0001009f1fc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x1009f1fcc | FUN_1009f1fcc */

void FUN_1009f1fcc(void)

{
  long unaff_x22;
  
  _swift_endAccess(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001009f2004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1009f2008 | FUN_1009f2008 */

void FUN_1009f2008(undefined8 param_1)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_1009f1e78(plVar1,param_1);
  return;
}



/* Address: 0x1009f2078 | thunk_FUN_1009ebf30 */

void thunk_FUN_1009ebf30(void)

{
  FUN_1009ebf30();
  return;
}



/* Address: 0x1009f207c | thunk_FUN_1009ea194 */

void thunk_FUN_1009ea194(void)

{
  FUN_1009ea194();
  return;
}



/* Address: 0x1009f2080 | thunk_FUN_1009ebeec */

void thunk_FUN_1009ebeec(void)

{
  FUN_1009ebeec();
  return;
}



/* Address: 0x1009f2084 | thunk_FUN_1009ebfe4 */

void thunk_FUN_1009ebfe4(void)

{
  FUN_1009ebfe4();
  return;
}



/* Address: 0x1009f2088 | thunk_FUN_1009ed468 */

void thunk_FUN_1009ed468(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar3 = *unaff_x20;
  uVar4 = *(undefined8 *)(lVar3 + 0x10);
  puVar1 = &DAT_100ff4280;
  FUN_1000f7830(&DAT_100ff4280,&DAT_100c8d6f0);
  _swift_allocObject();
  uVar6 = *(undefined8 *)(lVar3 + 0x20);
  uVar5 = *(undefined8 *)(lVar3 + 0x18);
  lVar2 = *(long *)(lVar3 + 0x18);
  *(undefined8 *)(puVar1 + 0x10) = uVar4;
  *(undefined8 *)(puVar1 + 0x20) = uVar6;
  *(undefined8 *)(puVar1 + 0x18) = uVar5;
  if (0 < lVar2) {
    FUN_1009ed8b4(puVar1 + 0x10,puVar1 + 0x28,(undefined8 *)(lVar3 + 0x10),lVar3 + 0x28,
                  &DAT_100f08218);
  }
  _swift_release(lVar3);
  *unaff_x20 = (long)puVar1;
  return;
}



/* Address: 0x1009f208c | thunk_FUN_1009ebe8c */

void thunk_FUN_1009ebe8c(void)

{
  FUN_1009ebe8c();
  return;
}



/* Address: 0x1009f2090 | FUN_1009f2090 */

void FUN_1009f2090(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_60 [32];
  undefined1 *local_40;
  long lStack_38;
  
  uVar3 = *(ulong *)(param_1 + 0x18);
  lVar1 = 0x13f;
  _swift_getAssociatedTypeWitness
            (0x13f,uVar3,*(undefined8 *)(param_1 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  if (uVar3 < 0x40) {
    lVar2 = 0x13f;
    FUN_1009f1048();
    if (uVar3 < 0x40) {
      lVar2 = *(long *)(lVar2 + -8) + 0x40;
      _swift_getTupleTypeLayout2(auStack_60,*(long *)(lVar1 + -8) + 0x40,lVar2);
      local_40 = auStack_60;
      lStack_38 = lVar2;
      _swift_initEnumMetadataMultiPayload(param_1,0,2,&local_40);
    }
  }
  return;
}



/* Address: 0x1009f213c | thunk_FUN_1009f2400 */

void thunk_FUN_1009f2400(void)

{
  FUN_1009f2400();
  return;
}



/* Address: 0x1009f2140 | thunk_FUN_1009f2758 */

void thunk_FUN_1009f2758(void)

{
  FUN_1009f2758();
  return;
}



/* Address: 0x1009f2144 | thunk_FUN_1009f29ec */

void thunk_FUN_1009f29ec(void)

{
  FUN_1009f29ec();
  return;
}



/* Address: 0x1009f2148 | thunk_FUN_1009f2cf8 */

void thunk_FUN_1009f2cf8(void)

{
  FUN_1009f2cf8();
  return;
}



/* Address: 0x1009f214c | thunk_FUN_1009f3218 */

void thunk_FUN_1009f3218(void)

{
  FUN_1009f3218();
  return;
}



/* Address: 0x1009f2150 | thunk_FUN_1009f351c */

void thunk_FUN_1009f351c(void)

{
  FUN_1009f351c();
  return;
}



/* Address: 0x1009f2154 | thunk_FUN_1009f3a34 */

void thunk_FUN_1009f3a34(void)

{
  FUN_1009f3a34();
  return;
}



/* Address: 0x1009f2158 | thunk_FUN_1009f3bb4 */

void thunk_FUN_1009f3bb4(void)

{
  FUN_1009f3bb4();
  return;
}



/* Address: 0x1009f215c | FUN_1009f215c */

uint FUN_1009f215c(uint *param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar3 = *(long *)(*(long *)(lVar3 + -8) + 0x40);
  puVar4 = &DAT_100ff3c18;
  FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
  uVar7 = (ulong)*(uint *)(*(long *)(puVar4 + -8) + 0x50) & 0xf8 | 7;
  uVar6 = *(ulong *)(*(long *)(puVar4 + -8) + 0x40);
  if (uVar6 < 9) {
    uVar6 = 8;
  }
  uVar7 = (lVar3 + uVar7 & (uVar7 ^ 0xffffffffffffffff)) + uVar6 + 1;
  if (uVar7 < uVar6 + 1) {
    uVar7 = uVar6 + 1;
  }
  bVar1 = *(byte *)((long)param_1 + uVar7);
  uVar2 = (uint)bVar1;
  if (1 < bVar1) {
    uVar5 = (uint)uVar7;
    uVar8 = 4;
    if (uVar5 < 4) {
      uVar8 = uVar5;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) {
        return uVar2;
      }
      uVar8 = (uint)(byte)*param_1;
    }
    else if (uVar8 == 2) {
      uVar8 = (uint)(ushort)*param_1;
    }
    else if (uVar8 == 3) {
      uVar8 = (uint)(uint3)*param_1;
    }
    else {
      uVar8 = *param_1;
    }
    uVar2 = uVar8 | bVar1 - 2 << (ulong)((uVar5 & 3) << 3);
    if (3 < uVar5) {
      uVar2 = uVar8;
    }
    uVar2 = uVar2 + 2;
  }
  return uVar2;
}


