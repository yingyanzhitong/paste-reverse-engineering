/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100a8da70 | FUN_100a8da70 */

long * FUN_100a8da70(long *param_1,long *param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  Optional OVar3;
  long lVar4;
  CheckedContinuation CVar5;
  undefined7 extraout_var;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  uVar2 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar2 >> 0x11 & 1) == 0) {
    lVar6 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = lVar6;
    *(char *)(param_1 + 2) = (char)param_2[2];
    lVar6 = param_2[3];
    if (lVar6 == 0) {
      lVar6 = param_2[3];
      param_1[4] = param_2[4];
      param_1[3] = lVar6;
    }
    else {
      lVar4 = param_2[4];
      param_1[3] = lVar6;
      param_1[4] = lVar4;
      _swift_retain();
    }
    lVar6 = param_2[5];
    param_1[5] = lVar6;
    lVar8 = (long)*(int *)(param_3 + 0x28);
    Swift::Optional::typeMetadataAccessor();
    _swift_retain(lVar6);
    FUN_1000f8b08(&DAT_100ff69f8,&DAT_100c910f0);
    CVar5 = Swift::CheckedContinuation::typeMetadataAccessor();
    lVar4 = *(long *)(CVar5.unknown + -8);
    lVar6 = (long)param_2 + lVar8;
    (**(code **)(lVar4 + 0x30))(lVar6,1,CVar5.unknown);
    if ((int)lVar6 == 0) {
      (**(code **)(lVar4 + 0x10))((long)param_1 + lVar8,(long)param_2 + lVar8,CVar5.unknown);
      (**(code **)(lVar4 + 0x38))((long)param_1 + lVar8,0,1,CVar5.unknown);
    }
    else {
      OVar3 = Swift::Optional::typeMetadataAccessor();
      _memcpy((void *)((long)param_1 + lVar8),(void *)((long)param_2 + lVar8),
              *(size_t *)(*(long *)(CONCAT71(extraout_var,OVar3.value) + -8) + 0x40));
    }
    iVar1 = *(int *)(param_3 + 0x30);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
    lVar6 = *(long *)((long)param_2 + (long)iVar1);
    *(long *)((long)param_1 + (long)iVar1) = lVar6;
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x34)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
    _swift_retain();
  }
  else {
    lVar6 = *param_2;
    *param_1 = lVar6;
    uVar7 = (ulong)uVar2 & 0xff;
    param_1 = (long *)(lVar6 + (uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff)));
  }
  _swift_retain(lVar6);
  return param_1;
}



/* Address: 0x100a8dbf0 | FUN_100a8dbf0 */

void FUN_100a8dbf0(long param_1,long param_2)

{
  int iVar1;
  CheckedContinuation CVar2;
  long lVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    _swift_release(*(undefined8 *)(param_1 + 0x20));
  }
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  iVar1 = *(int *)(param_2 + 0x28);
  Swift::Optional::typeMetadataAccessor();
  FUN_1000f8b08(&DAT_100ff69f8,&DAT_100c910f0);
  CVar2 = Swift::CheckedContinuation::typeMetadataAccessor();
  lVar4 = *(long *)(CVar2.unknown + -8);
  lVar3 = param_1 + iVar1;
  (**(code **)(lVar4 + 0x30))(lVar3,1,CVar2.unknown);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar4 + 8))(param_1 + iVar1,CVar2.unknown);
  }
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x2c)));
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x30)));
  return;
}



/* Address: 0x100a8dcbc | FUN_100a8dcbc */

undefined8 * FUN_100a8dcbc(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  Optional OVar2;
  undefined8 uVar3;
  CheckedContinuation CVar4;
  undefined7 extraout_var;
  long lVar5;
  long lVar6;
  long lVar7;
  
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  lVar5 = param_2[3];
  if (lVar5 == 0) {
    lVar5 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = lVar5;
  }
  else {
    uVar3 = param_2[4];
    param_1[3] = lVar5;
    param_1[4] = uVar3;
    _swift_retain();
  }
  uVar3 = param_2[5];
  param_1[5] = uVar3;
  lVar7 = (long)*(int *)(param_3 + 0x28);
  Swift::Optional::typeMetadataAccessor();
  _swift_retain(uVar3);
  FUN_1000f8b08(&DAT_100ff69f8,&DAT_100c910f0);
  CVar4 = Swift::CheckedContinuation::typeMetadataAccessor();
  lVar6 = *(long *)(CVar4.unknown + -8);
  lVar5 = (long)param_2 + lVar7;
  (**(code **)(lVar6 + 0x30))(lVar5,1,CVar4.unknown);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar6 + 0x10))((long)param_1 + lVar7,(long)param_2 + lVar7,CVar4.unknown);
    (**(code **)(lVar6 + 0x38))((long)param_1 + lVar7,0,1,CVar4.unknown);
  }
  else {
    OVar2 = Swift::Optional::typeMetadataAccessor();
    _memcpy((void *)((long)param_1 + lVar7),(void *)((long)param_2 + lVar7),
            *(size_t *)(*(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 0x40));
  }
  iVar1 = *(int *)(param_3 + 0x30);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  uVar3 = *(undefined8 *)((long)param_2 + (long)iVar1);
  *(undefined8 *)((long)param_1 + (long)iVar1) = uVar3;
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x34)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  _swift_retain();
  _swift_retain(uVar3);
  return param_1;
}



/* Address: 0x100a8de14 | FUN_100a8de14 */

undefined8 * FUN_100a8de14(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  Optional OVar1;
  undefined8 uVar2;
  CheckedContinuation CVar3;
  long lVar4;
  undefined7 extraout_var;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  lVar5 = param_2[3];
  if (param_1[3] == 0) {
    if (lVar5 == 0) goto LAB_100a8dea0;
    uVar2 = param_2[4];
    param_1[3] = lVar5;
    param_1[4] = uVar2;
    _swift_retain();
  }
  else if (lVar5 == 0) {
    _swift_release(param_1[4]);
LAB_100a8dea0:
    lVar5 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = lVar5;
  }
  else {
    uVar2 = param_2[4];
    uVar6 = param_1[4];
    param_1[3] = lVar5;
    param_1[4] = uVar2;
    _swift_retain();
    _swift_release(uVar6);
  }
  uVar2 = param_1[5];
  param_1[5] = param_2[5];
  _swift_retain();
  _swift_release(uVar2);
  lVar7 = (long)*(int *)(param_3 + 0x28);
  Swift::Optional::typeMetadataAccessor();
  FUN_1000f8b08(&DAT_100ff69f8,&DAT_100c910f0);
  CVar3 = Swift::CheckedContinuation::typeMetadataAccessor();
  lVar8 = *(long *)(CVar3.unknown + -8);
  pcVar9 = *(code **)(lVar8 + 0x30);
  lVar5 = (long)param_1 + lVar7;
  (*pcVar9)(lVar5,1,CVar3.unknown);
  lVar4 = (long)param_2 + lVar7;
  (*pcVar9)(lVar4,1,CVar3.unknown);
  if ((int)lVar5 == 0) {
    if ((int)lVar4 == 0) {
      (**(code **)(lVar8 + 0x18))((long)param_1 + lVar7,(long)param_2 + lVar7,CVar3.unknown);
      goto LAB_100a8df9c;
    }
    (**(code **)(lVar8 + 8))((long)param_1 + lVar7,CVar3.unknown);
  }
  else if ((int)lVar4 == 0) {
    (**(code **)(lVar8 + 0x10))((long)param_1 + lVar7,(long)param_2 + lVar7,CVar3.unknown);
    (**(code **)(lVar8 + 0x38))((long)param_1 + lVar7,0,1,CVar3.unknown);
    goto LAB_100a8df9c;
  }
  OVar1 = Swift::Optional::typeMetadataAccessor();
  _memcpy((void *)((long)param_1 + lVar7),(void *)((long)param_2 + lVar7),
          *(size_t *)(*(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 0x40));
LAB_100a8df9c:
  lVar5 = (long)*(int *)(param_3 + 0x2c);
  uVar2 = *(undefined8 *)((long)param_1 + lVar5);
  *(undefined8 *)((long)param_1 + lVar5) = *(undefined8 *)((long)param_2 + lVar5);
  _swift_retain();
  _swift_release(uVar2);
  lVar5 = (long)*(int *)(param_3 + 0x30);
  uVar2 = *(undefined8 *)((long)param_1 + lVar5);
  *(undefined8 *)((long)param_1 + lVar5) = *(undefined8 *)((long)param_2 + lVar5);
  _swift_retain();
  _swift_release(uVar2);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x34)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  return param_1;
}



/* Address: 0x100a8e014 | FUN_100a8e014 */

undefined8 * FUN_100a8e014(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  Optional OVar2;
  CheckedContinuation CVar3;
  long lVar4;
  undefined7 extraout_var;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar7 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar7 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar7;
  param_1[5] = param_2[5];
  lVar5 = (long)*(int *)(param_3 + 0x28);
  Swift::Optional::typeMetadataAccessor();
  FUN_1000f8b08(&DAT_100ff69f8,&DAT_100c910f0);
  CVar3 = Swift::CheckedContinuation::typeMetadataAccessor();
  lVar6 = *(long *)(CVar3.unknown + -8);
  lVar4 = (long)param_2 + lVar5;
  (**(code **)(lVar6 + 0x30))(lVar4,1,CVar3.unknown);
  if ((int)lVar4 == 0) {
    (**(code **)(lVar6 + 0x20))((long)param_1 + lVar5,(long)param_2 + lVar5,CVar3.unknown);
    (**(code **)(lVar6 + 0x38))((long)param_1 + lVar5,0,1,CVar3.unknown);
  }
  else {
    OVar2 = Swift::Optional::typeMetadataAccessor();
    _memcpy((void *)((long)param_1 + lVar5),(void *)((long)param_2 + lVar5),
            *(size_t *)(*(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 0x40));
  }
  iVar1 = *(int *)(param_3 + 0x30);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  *(undefined8 *)((long)param_1 + (long)iVar1) = *(undefined8 *)((long)param_2 + (long)iVar1);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x34)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  return param_1;
}



/* Address: 0x100a8e13c | FUN_100a8e13c */

undefined8 * FUN_100a8e13c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  Optional OVar1;
  undefined8 uVar2;
  CheckedContinuation CVar3;
  long lVar4;
  undefined7 extraout_var;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  lVar5 = param_2[3];
  if (param_1[3] == 0) {
    if (lVar5 == 0) goto LAB_100a8e1b4;
    uVar2 = param_2[4];
    param_1[3] = lVar5;
    param_1[4] = uVar2;
  }
  else if (lVar5 == 0) {
    _swift_release(param_1[4]);
LAB_100a8e1b4:
    lVar5 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = lVar5;
  }
  else {
    uVar6 = param_2[4];
    uVar2 = param_1[4];
    param_1[3] = lVar5;
    param_1[4] = uVar6;
    _swift_release(uVar2);
  }
  uVar2 = param_1[5];
  param_1[5] = param_2[5];
  _swift_release(uVar2);
  lVar7 = (long)*(int *)(param_3 + 0x28);
  Swift::Optional::typeMetadataAccessor();
  FUN_1000f8b08(&DAT_100ff69f8,&DAT_100c910f0);
  CVar3 = Swift::CheckedContinuation::typeMetadataAccessor();
  lVar8 = *(long *)(CVar3.unknown + -8);
  pcVar9 = *(code **)(lVar8 + 0x30);
  lVar5 = (long)param_1 + lVar7;
  (*pcVar9)(lVar5,1,CVar3.unknown);
  lVar4 = (long)param_2 + lVar7;
  (*pcVar9)(lVar4,1,CVar3.unknown);
  if ((int)lVar5 == 0) {
    if ((int)lVar4 == 0) {
      (**(code **)(lVar8 + 0x28))((long)param_1 + lVar7,(long)param_2 + lVar7,CVar3.unknown);
      goto LAB_100a8e2a8;
    }
    (**(code **)(lVar8 + 8))((long)param_1 + lVar7,CVar3.unknown);
  }
  else if ((int)lVar4 == 0) {
    (**(code **)(lVar8 + 0x20))((long)param_1 + lVar7,(long)param_2 + lVar7,CVar3.unknown);
    (**(code **)(lVar8 + 0x38))((long)param_1 + lVar7,0,1,CVar3.unknown);
    goto LAB_100a8e2a8;
  }
  OVar1 = Swift::Optional::typeMetadataAccessor();
  _memcpy((void *)((long)param_1 + lVar7),(void *)((long)param_2 + lVar7),
          *(size_t *)(*(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 0x40));
LAB_100a8e2a8:
  lVar5 = (long)*(int *)(param_3 + 0x2c);
  uVar2 = *(undefined8 *)((long)param_1 + lVar5);
  *(undefined8 *)((long)param_1 + lVar5) = *(undefined8 *)((long)param_2 + lVar5);
  _swift_release(uVar2);
  lVar5 = (long)*(int *)(param_3 + 0x30);
  uVar2 = *(undefined8 *)((long)param_1 + lVar5);
  *(undefined8 *)((long)param_1 + lVar5) = *(undefined8 *)((long)param_2 + lVar5);
  _swift_release(uVar2);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x34)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  return param_1;
}



/* Address: 0x100a8e310 | FUN_100a8e310 */

void FUN_100a8e310(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x100a8e31c | FUN_100a8e31c */

ulong FUN_100a8e31c(long param_1,undefined8 param_2,long param_3)

{
  Optional OVar1;
  undefined7 extraout_var;
  ulong uVar2;
  
  if ((int)param_2 == 0x7fffffff) {
    uVar2 = *(ulong *)(param_1 + 0x28);
    if (0xfffffffe < uVar2) {
      uVar2 = 0xffffffff;
    }
    return (ulong)((int)uVar2 + 1);
  }
  Swift::Optional::typeMetadataAccessor();
  FUN_1000f8b08(&DAT_100ff69f8,&DAT_100c910f0);
  Swift::CheckedContinuation::typeMetadataAccessor();
  OVar1 = Swift::Optional::typeMetadataAccessor();
  uVar2 = param_1 + *(int *)(param_3 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x000100a8e3d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 0x30))
            (uVar2,param_2,CONCAT71(extraout_var,OVar1.value));
  return uVar2;
}



/* Address: 0x100a8e3dc | FUN_100a8e3dc */

void FUN_100a8e3dc(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x100a8e3e8 | FUN_100a8e3e8 */

void FUN_100a8e3e8(long param_1,undefined8 param_2,int param_3,long param_4)

{
  Optional OVar1;
  undefined7 extraout_var;
  
  if (param_3 == 0x7fffffff) {
    *(ulong *)(param_1 + 0x28) = (ulong)((int)param_2 - 1);
    return;
  }
  Swift::Optional::typeMetadataAccessor();
  FUN_1000f8b08(&DAT_100ff69f8,&DAT_100c910f0);
  Swift::CheckedContinuation::typeMetadataAccessor();
  OVar1 = Swift::Optional::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x000100a8e498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 0x38))
            (param_1 + *(int *)(param_4 + 0x28),param_2,param_2,CONCAT71(extraout_var,OVar1.value));
  return;
}



/* Address: 0x100a8e49c | FUN_100a8e49c */

void FUN_100a8e49c(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *local_40;
  long local_38;
  undefined *puStack_30;
  undefined *local_28;
  
  local_40 = &DAT_100c92d58;
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  FUN_100a8cf3c();
  if (uVar2 < 0x40) {
    local_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = &DAT_100c92d70;
    local_28 = &DAT_100c92d10;
    _swift_initEnumMetadataMultiPayload(param_1,0,4,&local_40);
  }
  return;
}



/* Address: 0x100a8e524 | FUN_100a8e524 */

long * FUN_100a8e524(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  Optional OVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  CheckedContinuation CVar6;
  undefined1 *puVar7;
  undefined7 extraout_var;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  lVar10 = *(long *)(param_3 + -8);
  uVar1 = *(uint *)(lVar10 + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    plVar5 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    iVar3 = (int)plVar5;
    if (iVar3 == 2) {
      *(char *)param_1 = (char)*param_2;
      lVar10 = param_2[2];
      param_1[1] = param_2[1];
      _swift_retain();
      _swift_errorRetain(lVar10);
      param_1[2] = lVar10;
      lVar10 = param_2[3];
      if (lVar10 == 0) {
        lVar10 = param_2[3];
        param_1[4] = param_2[4];
        param_1[3] = lVar10;
      }
      else {
        lVar4 = param_2[4];
        param_1[3] = lVar10;
        param_1[4] = lVar4;
        _swift_retain();
      }
      uVar8 = 2;
    }
    else if (iVar3 == 1) {
      lVar10 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = lVar10;
      *(char *)(param_1 + 2) = (char)param_2[2];
      lVar10 = param_2[3];
      if (lVar10 == 0) {
        lVar10 = param_2[3];
        param_1[4] = param_2[4];
        param_1[3] = lVar10;
      }
      else {
        lVar4 = param_2[4];
        param_1[3] = lVar10;
        param_1[4] = lVar4;
        _swift_retain();
      }
      lVar4 = param_2[5];
      param_1[5] = lVar4;
      lVar10 = 0;
      FUN_100a8cf3c(0,*(undefined8 *)(param_3 + 0x10));
      lVar11 = (long)*(int *)(lVar10 + 0x28);
      Swift::Optional::typeMetadataAccessor();
      _swift_retain(lVar4);
      FUN_1000f8b08(&DAT_100ff69f8,&DAT_100c910f0);
      CVar6 = Swift::CheckedContinuation::typeMetadataAccessor();
      lVar4 = *(long *)(CVar6.unknown + -8);
      puVar7 = (undefined1 *)((long)param_2 + lVar11);
      (**(code **)(lVar4 + 0x30))(puVar7,1,CVar6.unknown);
      if ((int)puVar7 == 0) {
        (**(code **)(lVar4 + 0x10))
                  ((undefined1 *)((long)param_1 + lVar11),(undefined1 *)((long)param_2 + lVar11),
                   CVar6.unknown);
        (**(code **)(lVar4 + 0x38))((undefined1 *)((long)param_1 + lVar11),0,1,CVar6.unknown);
      }
      else {
        OVar2 = Swift::Optional::typeMetadataAccessor();
        _memcpy((undefined1 *)((long)param_1 + lVar11),(undefined1 *)((long)param_2 + lVar11),
                *(size_t *)(*(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 0x40));
      }
      *(undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x2c)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x2c));
      uVar8 = *(undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x30));
      *(undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x30)) = uVar8;
      *(undefined1 *)((long)param_1 + (long)*(int *)(lVar10 + 0x34)) =
           *(undefined1 *)((long)param_2 + (long)*(int *)(lVar10 + 0x34));
      _swift_retain();
      _swift_retain(uVar8);
      uVar8 = 1;
    }
    else {
      if (iVar3 != 0) {
        plVar5 = _memcpy(param_1,param_2,*(size_t *)(lVar10 + 0x40));
        return plVar5;
      }
      lVar10 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = lVar10;
      *(char *)(param_1 + 2) = (char)param_2[2];
      lVar10 = param_2[3];
      if (lVar10 == 0) {
        lVar10 = param_2[3];
        param_1[4] = param_2[4];
        param_1[3] = lVar10;
      }
      else {
        lVar4 = param_2[4];
        param_1[3] = lVar10;
        param_1[4] = lVar4;
        _swift_retain();
      }
      uVar8 = 0;
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,uVar8);
  }
  else {
    lVar10 = *param_2;
    *param_1 = lVar10;
    uVar9 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar10 + (uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x100a8e7b4 | FUN_100a8e7b4 */

void FUN_100a8e7b4(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  CheckedContinuation CVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = param_1;
  _swift_getEnumCaseMultiPayload();
  iVar1 = (int)lVar4;
  if (iVar1 == 2) {
    _swift_release(*(undefined8 *)(param_1 + 8));
    _swift_errorRelease(*(undefined8 *)(param_1 + 0x10));
    lVar4 = *(long *)(param_1 + 0x18);
  }
  else {
    if (iVar1 == 1) {
      if (*(long *)(param_1 + 0x18) != 0) {
        _swift_release(*(undefined8 *)(param_1 + 0x20));
      }
      _swift_release(*(undefined8 *)(param_1 + 0x28));
      lVar2 = 0;
      FUN_100a8cf3c(0,*(undefined8 *)(param_2 + 0x10));
      iVar1 = *(int *)(lVar2 + 0x28);
      Swift::Optional::typeMetadataAccessor();
      FUN_1000f8b08(&DAT_100ff69f8,&DAT_100c910f0);
      CVar3 = Swift::CheckedContinuation::typeMetadataAccessor();
      lVar5 = *(long *)(CVar3.unknown + -8);
      lVar4 = param_1 + iVar1;
      (**(code **)(lVar5 + 0x30))(lVar4,1,CVar3.unknown);
      if ((int)lVar4 == 0) {
        (**(code **)(lVar5 + 8))(param_1 + iVar1,CVar3.unknown);
      }
      _swift_release(*(undefined8 *)(param_1 + *(int *)(lVar2 + 0x2c)));
      lVar4 = (long)*(int *)(lVar2 + 0x30);
      goto LAB_100a8e8a4;
    }
    if (iVar1 != 0) {
      return;
    }
    lVar4 = *(long *)(param_1 + 0x18);
  }
  if (lVar4 == 0) {
    return;
  }
  lVar4 = 0x20;
LAB_100a8e8a4:
  _swift_release(*(undefined8 *)(param_1 + lVar4));
  return;
}



/* Address: 0x100a8e8e8 | FUN_100a8e8e8 */

undefined8 * FUN_100a8e8e8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  Optional OVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  CheckedContinuation CVar5;
  undefined1 *puVar6;
  undefined7 extraout_var;
  long lVar7;
  long lVar8;
  long lVar9;
  
  puVar4 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  iVar2 = (int)puVar4;
  if (iVar2 == 2) {
    *(undefined1 *)param_1 = *(undefined1 *)param_2;
    uVar3 = param_2[2];
    param_1[1] = param_2[1];
    _swift_retain();
    _swift_errorRetain(uVar3);
    param_1[2] = uVar3;
    lVar7 = param_2[3];
    if (lVar7 == 0) {
      lVar7 = param_2[3];
      param_1[4] = param_2[4];
      param_1[3] = lVar7;
    }
    else {
      uVar3 = param_2[4];
      param_1[3] = lVar7;
      param_1[4] = uVar3;
      _swift_retain();
    }
    uVar3 = 2;
  }
  else if (iVar2 == 1) {
    uVar3 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar3;
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
    lVar7 = param_2[3];
    if (lVar7 == 0) {
      lVar7 = param_2[3];
      param_1[4] = param_2[4];
      param_1[3] = lVar7;
    }
    else {
      uVar3 = param_2[4];
      param_1[3] = lVar7;
      param_1[4] = uVar3;
      _swift_retain();
    }
    uVar3 = param_2[5];
    param_1[5] = uVar3;
    lVar7 = 0;
    FUN_100a8cf3c(0,*(undefined8 *)(param_3 + 0x10));
    lVar9 = (long)*(int *)(lVar7 + 0x28);
    Swift::Optional::typeMetadataAccessor();
    _swift_retain(uVar3);
    FUN_1000f8b08(&DAT_100ff69f8,&DAT_100c910f0);
    CVar5 = Swift::CheckedContinuation::typeMetadataAccessor();
    lVar8 = *(long *)(CVar5.unknown + -8);
    puVar6 = (undefined1 *)((long)param_2 + lVar9);
    (**(code **)(lVar8 + 0x30))(puVar6,1,CVar5.unknown);
    if ((int)puVar6 == 0) {
      (**(code **)(lVar8 + 0x10))
                ((undefined1 *)((long)param_1 + lVar9),(undefined1 *)((long)param_2 + lVar9),
                 CVar5.unknown);
      (**(code **)(lVar8 + 0x38))((undefined1 *)((long)param_1 + lVar9),0,1,CVar5.unknown);
    }
    else {
      OVar1 = Swift::Optional::typeMetadataAccessor();
      _memcpy((undefined1 *)((long)param_1 + lVar9),(undefined1 *)((long)param_2 + lVar9),
              *(size_t *)(*(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 0x40));
    }
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x2c)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x2c));
    uVar3 = *(undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x30));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x30)) = uVar3;
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar7 + 0x34)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar7 + 0x34));
    _swift_retain();
    _swift_retain(uVar3);
    uVar3 = 1;
  }
  else {
    if (iVar2 != 0) {
      puVar4 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
      return puVar4;
    }
    uVar3 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar3;
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
    lVar7 = param_2[3];
    if (lVar7 == 0) {
      lVar7 = param_2[3];
      param_1[4] = param_2[4];
      param_1[3] = lVar7;
    }
    else {
      uVar3 = param_2[4];
      param_1[3] = lVar7;
      param_1[4] = uVar3;
      _swift_retain();
    }
    uVar3 = 0;
  }
  _swift_storeEnumTagMultiPayload(param_1,param_3,uVar3);
  return param_1;
}



/* Address: 0x100a8eb50 | FUN_100a8eb50 */

undefined8 * FUN_100a8eb50(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  Optional OVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  CheckedContinuation CVar5;
  undefined1 *puVar6;
  undefined7 extraout_var;
  long lVar7;
  long lVar8;
  long lVar9;
  
  if (param_1 != param_2) {
    lVar7 = *(long *)(param_3 + -8);
    (**(code **)(lVar7 + 8))(param_1,param_3);
    puVar4 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    iVar2 = (int)puVar4;
    if (iVar2 == 2) {
      *(undefined1 *)param_1 = *(undefined1 *)param_2;
      param_1[1] = param_2[1];
      uVar3 = param_2[2];
      _swift_retain();
      _swift_errorRetain(uVar3);
      param_1[2] = uVar3;
      lVar7 = param_2[3];
      if (lVar7 == 0) {
        lVar7 = param_2[3];
        param_1[4] = param_2[4];
        param_1[3] = lVar7;
      }
      else {
        uVar3 = param_2[4];
        param_1[3] = lVar7;
        param_1[4] = uVar3;
        _swift_retain();
      }
      uVar3 = 2;
    }
    else if (iVar2 == 1) {
      uVar3 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar3;
      *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
      lVar7 = param_2[3];
      if (lVar7 == 0) {
        lVar7 = param_2[3];
        param_1[4] = param_2[4];
        param_1[3] = lVar7;
      }
      else {
        uVar3 = param_2[4];
        param_1[3] = lVar7;
        param_1[4] = uVar3;
        _swift_retain();
      }
      uVar3 = param_2[5];
      param_1[5] = uVar3;
      lVar7 = 0;
      FUN_100a8cf3c(0,*(undefined8 *)(param_3 + 0x10));
      lVar9 = (long)*(int *)(lVar7 + 0x28);
      Swift::Optional::typeMetadataAccessor();
      _swift_retain(uVar3);
      FUN_1000f8b08(&DAT_100ff69f8,&DAT_100c910f0);
      CVar5 = Swift::CheckedContinuation::typeMetadataAccessor();
      lVar8 = *(long *)(CVar5.unknown + -8);
      puVar6 = (undefined1 *)((long)param_2 + lVar9);
      (**(code **)(lVar8 + 0x30))(puVar6,1,CVar5.unknown);
      if ((int)puVar6 == 0) {
        (**(code **)(lVar8 + 0x10))
                  ((undefined1 *)((long)param_1 + lVar9),(undefined1 *)((long)param_2 + lVar9),
                   CVar5.unknown);
        (**(code **)(lVar8 + 0x38))((undefined1 *)((long)param_1 + lVar9),0,1,CVar5.unknown);
      }
      else {
        OVar1 = Swift::Optional::typeMetadataAccessor();
        _memcpy((undefined1 *)((long)param_1 + lVar9),(undefined1 *)((long)param_2 + lVar9),
                *(size_t *)(*(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 0x40));
      }
      *(undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x2c)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x2c));
      uVar3 = *(undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x30));
      *(undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x30)) = uVar3;
      *(undefined1 *)((long)param_1 + (long)*(int *)(lVar7 + 0x34)) =
           *(undefined1 *)((long)param_2 + (long)*(int *)(lVar7 + 0x34));
      _swift_retain();
      _swift_retain(uVar3);
      uVar3 = 1;
    }
    else {
      if (iVar2 != 0) {
        puVar4 = _memcpy(param_1,param_2,*(size_t *)(lVar7 + 0x40));
        return puVar4;
      }
      uVar3 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar3;
      *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
      lVar7 = param_2[3];
      if (lVar7 == 0) {
        lVar7 = param_2[3];
        param_1[4] = param_2[4];
        param_1[3] = lVar7;
      }
      else {
        uVar3 = param_2[4];
        param_1[3] = lVar7;
        param_1[4] = uVar3;
        _swift_retain();
      }
      uVar3 = 0;
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,uVar3);
  }
  return param_1;
}



/* Address: 0x100a8edd4 | FUN_100a8edd4 */

undefined8 * FUN_100a8edd4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  Optional OVar1;
  long lVar2;
  CheckedContinuation CVar3;
  long lVar4;
  undefined7 extraout_var;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar5 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  if ((int)puVar5 == 1) {
    uVar8 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar8;
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
    uVar8 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = uVar8;
    param_1[5] = param_2[5];
    lVar2 = 0;
    FUN_100a8cf3c(0,*(undefined8 *)(param_3 + 0x10));
    lVar6 = (long)*(int *)(lVar2 + 0x28);
    Swift::Optional::typeMetadataAccessor();
    FUN_1000f8b08(&DAT_100ff69f8,&DAT_100c910f0);
    CVar3 = Swift::CheckedContinuation::typeMetadataAccessor();
    lVar7 = *(long *)(CVar3.unknown + -8);
    lVar4 = (long)param_2 + lVar6;
    (**(code **)(lVar7 + 0x30))(lVar4,1,CVar3.unknown);
    if ((int)lVar4 == 0) {
      (**(code **)(lVar7 + 0x20))((long)param_1 + lVar6,(long)param_2 + lVar6,CVar3.unknown);
      (**(code **)(lVar7 + 0x38))((long)param_1 + lVar6,0,1,CVar3.unknown);
    }
    else {
      OVar1 = Swift::Optional::typeMetadataAccessor();
      _memcpy((void *)((long)param_1 + lVar6),(void *)((long)param_2 + lVar6),
              *(size_t *)(*(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 0x40));
    }
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0x2c)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar2 + 0x2c));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0x30)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar2 + 0x30));
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar2 + 0x34)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar2 + 0x34));
    _swift_storeEnumTagMultiPayload(param_1,param_3,1);
    return param_1;
  }
  puVar5 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
  return puVar5;
}



/* Address: 0x100a8ef68 | FUN_100a8ef68 */

undefined8 * FUN_100a8ef68(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  Optional OVar1;
  long lVar2;
  CheckedContinuation CVar3;
  undefined7 extraout_var;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  if (param_1 != param_2) {
    lVar5 = *(long *)(param_3 + -8);
    (**(code **)(lVar5 + 8))(param_1,param_3);
    puVar4 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    if ((int)puVar4 != 1) {
      puVar4 = _memcpy(param_1,param_2,*(size_t *)(lVar5 + 0x40));
      return puVar4;
    }
    uVar8 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar8;
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
    uVar8 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = uVar8;
    param_1[5] = param_2[5];
    lVar2 = 0;
    FUN_100a8cf3c(0,*(undefined8 *)(param_3 + 0x10));
    lVar6 = (long)*(int *)(lVar2 + 0x28);
    Swift::Optional::typeMetadataAccessor();
    FUN_1000f8b08(&DAT_100ff69f8,&DAT_100c910f0);
    CVar3 = Swift::CheckedContinuation::typeMetadataAccessor();
    lVar7 = *(long *)(CVar3.unknown + -8);
    lVar5 = (long)param_2 + lVar6;
    (**(code **)(lVar7 + 0x30))(lVar5,1,CVar3.unknown);
    if ((int)lVar5 == 0) {
      (**(code **)(lVar7 + 0x20))((long)param_1 + lVar6,(long)param_2 + lVar6,CVar3.unknown);
      (**(code **)(lVar7 + 0x38))((long)param_1 + lVar6,0,1,CVar3.unknown);
    }
    else {
      OVar1 = Swift::Optional::typeMetadataAccessor();
      _memcpy((void *)((long)param_1 + lVar6),(void *)((long)param_2 + lVar6),
              *(size_t *)(*(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 0x40));
    }
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0x2c)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar2 + 0x2c));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0x30)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar2 + 0x30));
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar2 + 0x34)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar2 + 0x34));
    _swift_storeEnumTagMultiPayload(param_1,param_3,1);
  }
  return param_1;
}



/* Address: 0x100a8f114 | FUN_100a8f114 */

void FUN_100a8f114(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100a8f120 | FUN_100a8f120 */

void FUN_100a8f120(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100a8f12c | FUN_100a8f12c */

void FUN_100a8f12c(void)

{
  FUN_100a8f134(0);
  return;
}



/* Address: 0x100a8f134 | FUN_100a8f134 */

void FUN_100a8f134(void)

{
  Optional OVar1;
  long lVar2;
  undefined7 extraout_var;
  
  if (DAT_100ff76f0 == 0) {
    lVar2 = 0xff;
    FUN_100a8f188();
    OVar1 = Swift::Optional::typeMetadataAccessor();
    if (lVar2 == 0) {
      DAT_100ff76f0 = CONCAT71(extraout_var,OVar1.value);
    }
  }
  return;
}



/* Address: 0x100a8f188 | FUN_100a8f188 */

void FUN_100a8f188(void)

{
  undefined8 uVar1;
  
  if (DAT_100ff76f8 != 0) {
    return;
  }
  uVar1 = 0x44000000;
  _swift_getFunctionTypeMetadata0(0x44000000,PTR___type_metadata_for____100eae0c8 + 8);
  DAT_100ff76f8 = uVar1;
  return;
}



/* Address: 0x100a8f1d0 | FUN_100a8f1d0 */

void FUN_100a8f1d0(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c92e68,param_1);
  return;
}



/* Address: 0x100a8f1e0 | FUN_100a8f1e0 */

void FUN_100a8f1e0(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100a8f1ec | FUN_100a8f1ec */

void FUN_100a8f1ec(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100a8d984(0,*(undefined8 *)(unaff_x20 + 0x10));
  FUN_100a8a960(param_1);
  return;
}



/* Address: 0x100a8f234 | FUN_100a8f234 */

void FUN_100a8f234(undefined8 param_1)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_100a8b294(plVar1,param_1);
  return;
}



/* Address: 0x100a8f290 | FUN_100a8f290 */

void FUN_100a8f290(void)

{
  FUN_100a8c3bc();
  return;
}



/* Address: 0x100a8f298 | FUN_100a8f298 */

void FUN_100a8f298(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined4 param_12,
                  undefined8 param_13)

{
  int iVar1;
  Optional OVar2;
  long lVar3;
  undefined7 extraout_var;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined1 *)(param_1 + 2) = param_4;
  param_1[3] = param_5;
  param_1[4] = param_6;
  param_1[5] = param_7;
  lVar3 = 0;
  FUN_100a8cf3c(0,param_13);
  iVar1 = *(int *)(lVar3 + 0x28);
  Swift::Optional::typeMetadataAccessor();
  FUN_1000f8b08(&DAT_100ff69f8,&DAT_100c910f0);
  Swift::CheckedContinuation::typeMetadataAccessor();
  OVar2 = Swift::Optional::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 0x20))
            ((long)param_1 + (long)iVar1,param_8,CONCAT71(extraout_var,OVar2.value));
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x2c)) = param_9;
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x30)) = param_10;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar3 + 0x34)) = param_11;
  return;
}



/* Address: 0x100a8f37c | FUN_100a8f37c */

void FUN_100a8f37c(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100a8f388 | FUN_100a8f388 */

void FUN_100a8f388(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100a8d984(0,*(undefined8 *)(unaff_x20 + 0x10));
  FUN_100a8c6f0(param_1);
  return;
}



/* Address: 0x100a8f3d0 | FUN_100a8f3d0 */

void FUN_100a8f3d0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff7708 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c931a8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c931a8,&DAT_100f2ed28);
  DAT_100ff7708 = pTVar1;
  return;
}



/* Address: 0x100a8f410 | FUN_100a8f410 */

void FUN_100a8f410(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  UnownedSerialExecutor UVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_7;
  *(undefined8 *)(unaff_x22 + 0x78) = param_8;
  *(undefined8 *)(unaff_x22 + 0x60) = param_5;
  *(undefined8 *)(unaff_x22 + 0x68) = param_6;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  *(undefined8 *)(unaff_x22 + 0x58) = param_4;
  if (param_2 == 0) {
    UVar1.unknown = (undefined *)0x0;
    param_3 = 0;
  }
  else {
    _swift_getObjectType(param_2);
    UVar1 = Swift::Actor::get_unownedExecutor();
  }
  _swift_task_switch(FUN_100a8f484,UVar1.unknown,param_3);
  return;
}



/* Address: 0x100a8f484 | FUN_100a8f484 */

void FUN_100a8f484(void)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x50);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1005da450;
  _swift_continuation_init(unaff_x22 + 0x10,1);
  FUN_100a8f504();
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x100a8f504 | FUN_100a8f504 */

void FUN_100a8f504(UnsafeContinuation<undefined,undefined> param_1,code *param_2,undefined8 param_3,
                  char *param_4,void *param_5)

{
  CheckedContinuation CVar1;
  long lVar2;
  long lVar3;
  String function;
  
  FUN_1000f7830(&DAT_100ff69f8,&DAT_100c910f0);
  CVar1 = Swift::CheckedContinuation::typeMetadataAccessor();
  lVar3 = *(long *)(CVar1.unknown + -8);
  lVar2 = *(long *)(lVar3 + 0x40);
  _swift_bridgeObjectRetain(param_5);
  function.bridgeObject = param_5;
  function.str = param_4;
  Swift::CheckedContinuation::init(param_1,function);
  (*param_2)(&stack0xffffffffffffffa0 + -(lVar2 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar3 + 8))
            (&stack0xffffffffffffffa0 + -(lVar2 + 0xfU & 0xfffffffffffffff0),CVar1.unknown);
  return;
}



/* Address: 0x100a8f5f0 | FUN_100a8f5f0 */

void FUN_100a8f5f0(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100a8f644();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x100a8f60c | FUN_100a8f60c */

void FUN_100a8f60c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100a8f74c();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x100a8f628 | FUN_100a8f628 */

void FUN_100a8f628(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100a8f83c();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x100a8f644 | FUN_100a8f644 */

undefined * FUN_100a8f644(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100a8f74c);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100ff6fe0;
    FUN_1000f7830(&DAT_100ff6fe0,&DAT_100c924a0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,PTR___type_metadata_for_Swift_String_100eac208);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x100a8f74c | FUN_100a8f74c */

undefined * FUN_100a8f74c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  size_t sVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100a8f83c);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  sVar6 = *(size_t *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)sVar6) {
    uVar5 = sVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100ff7728;
    FUN_1000f7830(&DAT_100ff7728,&DAT_100c92f20);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(size_t *)(puVar3 + 0x10) = sVar6;
    *(long *)(puVar3 + 0x18) = (long)puVar4 * 2 + -0x40;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar4,puVar1,sVar6);
  }
  else {
    if (puVar3 != param_4 || puVar1 + sVar6 <= puVar4) {
      _memmove(puVar4,puVar1,sVar6);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x100a8f83c | FUN_100a8f83c */

undefined * FUN_100a8f83c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100a8f96c);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar6 != 0) {
    puVar3 = &DAT_100ff7718;
    FUN_1000f7830(&DAT_100ff7718,&DAT_100c92ef8);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100ff7720;
    FUN_1000f7830(&DAT_100ff7720,&DAT_100c92f00);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x100a8f96c | FUN_100a8f96c */

void FUN_100a8f96c(void)

{
  FUN_100a8b364();
  return;
}



/* Address: 0x100a8f974 | FUN_100a8f974 */

void FUN_100a8f974(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100a8f980 | FUN_100a8f980 */

void FUN_100a8f980(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = 0;
  FUN_100a8d984(0,*(undefined8 *)(unaff_x20 + 0x10));
  FUN_100a8b95c(param_1,uVar1,uVar2);
  return;
}



/* Address: 0x100a8f9d0 | FUN_100a8f9d0 */

void FUN_100a8f9d0(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100a8f9dc | FUN_100a8f9dc */

long FUN_100a8f9dc(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  _swift_retain(param_1);
  FUN_100a88ae8();
  return unaff_x20;
}



/* Address: 0x100a8fa2c | FUN_100a8fa2c */

void FUN_100a8fa2c(void)

{
  long unaff_x20;
  
  FUN_100a8d984(0,*(undefined8 *)(unaff_x20 + 0x10));
  FUN_100a89da4();
  return;
}



/* Address: 0x100a8fa6c | FUN_100a8fa6c */

void FUN_100a8fa6c(undefined8 param_1)

{
  FUN_100a8fb5c(param_1,FUN_100a8a3fc);
  return;
}



/* Address: 0x100a8fa88 | FUN_100a8fa88 */

void FUN_100a8fa88(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100a8fa94 | FUN_100a8fa94 */

void FUN_100a8fa94(void)

{
  char in_w3;
  
  if (in_w3 != -1) {
    FUN_100a8faa8();
    return;
  }
  return;
}



/* Address: 0x100a8faa8 | FUN_100a8faa8 */

void FUN_100a8faa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\x02') {
    _swift_bridgeObjectRelease();
    return;
  }
  if (param_4 != '\x01') {
    if (param_4 == '\0') {
      FUN_100004550();
      return;
    }
    return;
  }
  _swift_bridgeObjectRelease();
  FUN_100004550(param_2,param_3);
  return;
}



/* Address: 0x100a8faf8 | FUN_100a8faf8 */

void FUN_100a8faf8(undefined8 param_1)

{
  FUN_100a8fb5c(param_1,FUN_100a8a05c);
  return;
}



/* Address: 0x100a8fb14 | FUN_100a8fb14 */

void FUN_100a8fb14(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100a8fb20 | FUN_100a8fb20 */

void FUN_100a8fb20(void)

{
  char in_w3;
  
  if (in_w3 != -1) {
    FUN_100a8fbc4();
  }
  return;
}



/* Address: 0x100a8fb2c | FUN_100a8fb2c */

void FUN_100a8fb2c(void)

{
  FUN_100a8fbc4();
  return;
}



/* Address: 0x100a8fb40 | FUN_100a8fb40 */

void FUN_100a8fb40(undefined8 param_1)

{
  FUN_100a8fb5c(param_1,FUN_100a89a30);
  return;
}



/* Address: 0x100a8fb5c | FUN_100a8fb5c */

void FUN_100a8fb5c(undefined8 *param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = 0;
  FUN_100a8d984();
  (*param_3)();
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = param_4;
  *(undefined1 *)(param_1 + 3) = param_5;
  return;
}



/* Address: 0x100a8fbb8 | FUN_100a8fbb8 */

void FUN_100a8fbb8(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100a8fbc4 | FUN_100a8fbc4 */

void FUN_100a8fbc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\x01') {
    _swift_bridgeObjectRelease();
    FUN_100004550(param_2,param_3);
    return;
  }
  FUN_100004550();
  return;
}



/* Address: 0x100a8fc00 | FUN_100a8fc00 */

void FUN_100a8fc00(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = *(undefined8 *)((long)param_2 + 9);
  *(undefined8 *)((long)param_1 + 0x11) = *(undefined8 *)((long)param_2 + 0x11);
  *(undefined8 *)((long)param_1 + 9) = uVar3;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x100a8fc14 | FUN_100a8fc14 */

void FUN_100a8fc14(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\x01') {
    _swift_bridgeObjectRetain();
    FUN_100011128(param_2,param_3);
    return;
  }
  FUN_100011128();
  return;
}



/* Address: 0x100a8fc50 | FUN_100a8fc50 */

void FUN_100a8fc50(undefined8 *param_1)

{
  FUN_100a8fbc4(*param_1,param_1[1],param_1[2],*(undefined1 *)(param_1 + 3));
  return;
}



/* Address: 0x100a8fc74 | thunk_FUN_100a8fc78 */

undefined8 * thunk_FUN_100a8fc78(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar4 = param_2[2];
  uVar3 = *(undefined1 *)(param_2 + 3);
  FUN_100a8fc14(uVar1,uVar2,uVar4,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar4;
  *(undefined1 *)(param_1 + 3) = uVar3;
  return param_1;
}



/* Address: 0x100a8fc78 | FUN_100a8fc78 */

undefined8 * FUN_100a8fc78(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar4 = param_2[2];
  uVar3 = *(undefined1 *)(param_2 + 3);
  FUN_100a8fc14(uVar1,uVar2,uVar4,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar4;
  *(undefined1 *)(param_1 + 3) = uVar3;
  return param_1;
}



/* Address: 0x100a8fcd4 | thunk_FUN_100a8fcd8 */

undefined8 * thunk_FUN_100a8fcd8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar8 = param_2[2];
  uVar5 = *(undefined1 *)(param_2 + 3);
  FUN_100a8fc14(uVar1,uVar3,uVar8,uVar5);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  uVar7 = param_1[2];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar8;
  uVar6 = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = uVar5;
  FUN_100a8fbc4(uVar2,uVar4,uVar7,uVar6);
  return param_1;
}


