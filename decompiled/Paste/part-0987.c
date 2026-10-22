/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100a8fcd8 | FUN_100a8fcd8 */

undefined8 * FUN_100a8fcd8(undefined8 *param_1,undefined8 *param_2)

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



/* Address: 0x100a8fd44 | thunk_FUN_100a8fd48 */

undefined8 * thunk_FUN_100a8fd48(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar6 = param_2[2];
  uVar3 = *(undefined1 *)(param_2 + 3);
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar7 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[2] = uVar6;
  uVar4 = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = uVar3;
  FUN_100a8fbc4(uVar5,uVar1,uVar2,uVar4);
  return param_1;
}



/* Address: 0x100a8fd48 | FUN_100a8fd48 */

undefined8 * FUN_100a8fd48(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar6 = param_2[2];
  uVar3 = *(undefined1 *)(param_2 + 3);
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar7 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[2] = uVar6;
  uVar4 = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = uVar3;
  FUN_100a8fbc4(uVar5,uVar1,uVar2,uVar4);
  return param_1;
}



/* Address: 0x100a8fd94 | thunk_FUN_1002dd93c */

int thunk_FUN_1002dd93c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0x19) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)(param_1 + 6) ^ 0xff;
  if (*(byte *)(param_1 + 6) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x100a8fd98 | thunk_FUN_1002dd984 */

void thunk_FUN_1002dd984(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xff) {
    if (0xfe < param_3) {
      *(undefined1 *)((long)param_1 + 0x19) = 0;
    }
    if (param_2 != 0) {
      *(char *)(param_1 + 3) = -(char)param_2;
      return;
    }
  }
  else {
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    *param_1 = (ulong)(param_2 - 0xff);
    if (0xfe < param_3) {
      *(undefined1 *)((long)param_1 + 0x19) = 1;
    }
  }
  return;
}



/* Address: 0x100a8fd9c | FUN_100a8fd9c */

void FUN_100a8fd9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\x02') {
    _swift_bridgeObjectRetain();
    return;
  }
  if (param_4 != '\x01') {
    if (param_4 == '\0') {
      FUN_100011128();
      return;
    }
    return;
  }
  _swift_bridgeObjectRetain();
  FUN_100011128(param_2,param_3);
  return;
}



/* Address: 0x100a8fdec | FUN_100a8fdec */

void FUN_100a8fdec(undefined8 *param_1)

{
  FUN_100a8faa8(*param_1,param_1[1],param_1[2],*(undefined1 *)(param_1 + 3));
  return;
}



/* Address: 0x100a8fe00 | FUN_100a8fe00 */

undefined8 * FUN_100a8fe00(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar4 = param_2[2];
  uVar3 = *(undefined1 *)(param_2 + 3);
  FUN_100a8fd9c(uVar1,uVar2,uVar4,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar4;
  *(undefined1 *)(param_1 + 3) = uVar3;
  return param_1;
}



/* Address: 0x100a8fe5c | FUN_100a8fe5c */

undefined8 * FUN_100a8fe5c(undefined8 *param_1,undefined8 *param_2)

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
  FUN_100a8fd9c(uVar1,uVar3,uVar8,uVar5);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  uVar7 = param_1[2];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar8;
  uVar6 = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = uVar5;
  FUN_100a8faa8(uVar2,uVar4,uVar7,uVar6);
  return param_1;
}



/* Address: 0x100a8fec8 | FUN_100a8fec8 */

undefined8 * FUN_100a8fec8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar6 = param_2[2];
  uVar3 = *(undefined1 *)(param_2 + 3);
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar7 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[2] = uVar6;
  uVar4 = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = uVar3;
  FUN_100a8faa8(uVar5,uVar1,uVar2,uVar4);
  return param_1;
}



/* Address: 0x100a8ff14 | FUN_100a8ff14 */

void FUN_100a8ff14(long param_1)

{
  long lVar1;
  Optional OVar2;
  undefined7 extraout_var;
  CheckedContinuation CVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [32];
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  long lStack_38;
  ulong uVar3;
  
  uVar6 = *(ulong *)(param_1 + 0x10);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  uVar3 = CONCAT71(extraout_var,OVar2.value);
  FUN_1000f8b08(&DAT_100ff69f8,&DAT_100c910f0);
  CVar4 = Swift::CheckedContinuation::typeMetadataAccessor();
  if (uVar3 < 0x40) {
    lVar5 = 0x13f;
    _swift_checkMetadataState();
    if (uVar6 < 0x40) {
      lVar1 = *(long *)(CVar4.unknown + -8) + 0x40;
      lVar5 = *(long *)(lVar5 + -8);
      _swift_getTupleTypeLayout2(auStack_70,lVar1,lVar5 + 0x40);
      local_50 = auStack_70;
      _swift_getTupleTypeLayout3
                (auStack_90,lVar1,lVar5 + 0x40,
                 PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40);
      local_48 = auStack_90;
      _swift_getTupleTypeLayout3(auStack_b0,lVar1,&DAT_100c92fd8,&DAT_100c92d28);
      local_40 = auStack_b0;
      lStack_38 = lVar1;
      _swift_initEnumMetadataMultiPayload(param_1,0,4,&local_50);
    }
  }
  return;
}



/* Address: 0x100a90030 | FUN_100a90030 */

long * FUN_100a90030(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long *plVar2;
  CheckedContinuation CVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    plVar2 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    lVar9 = *(long *)(param_3 + 0x10);
    Swift::Optional::typeMetadataAccessor();
    FUN_1000f8b08(&DAT_100ff69f8,&DAT_100c910f0);
    CVar3 = Swift::CheckedContinuation::typeMetadataAccessor();
    (**(code **)(*(long *)(CVar3.unknown + -8) + 0x10))(param_1,param_2,CVar3.unknown);
    iVar10 = (int)plVar2;
    if (iVar10 < 2) {
      if (iVar10 == 0) {
        lVar4 = 0;
        _swift_getTupleTypeMetadata2(0,CVar3.unknown,lVar9,0,0);
        (**(code **)(*(long *)(lVar9 + -8) + 0x10))
                  ((long)param_1 + (long)*(int *)(lVar4 + 0x30),
                   (long)param_2 + (long)*(int *)(lVar4 + 0x30),lVar9);
        uVar7 = 0;
      }
      else {
        puVar5 = &DAT_100ff7700;
        FUN_1000f8b08(&DAT_100ff7700,&DAT_100c92ec8);
        lVar4 = 0;
        _swift_getTupleTypeMetadata3(0,CVar3.unknown,lVar9,puVar5,0,0);
        (**(code **)(*(long *)(lVar9 + -8) + 0x10))
                  ((long)param_1 + (long)*(int *)(lVar4 + 0x30),
                   (long)param_2 + (long)*(int *)(lVar4 + 0x30),lVar9);
        *(undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x40)) =
             *(undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x40));
        _swift_bridgeObjectRetain();
        uVar7 = 1;
      }
    }
    else if (iVar10 == 2) {
      puVar5 = &DAT_100ff6ed8;
      FUN_1000f8b08(&DAT_100ff6ed8,&DAT_100c91fd8);
      puVar6 = &DAT_100ff7710;
      FUN_1000f8b08(&DAT_100ff7710,&DAT_100c92ef0);
      lVar9 = 0;
      _swift_getTupleTypeMetadata3(0,CVar3.unknown,puVar5,puVar6,0,0);
      iVar10 = *(int *)(lVar9 + 0x30);
      uVar7 = *(undefined8 *)((long)param_2 + (long)iVar10);
      _swift_errorRetain(uVar7);
      *(undefined8 *)((long)param_1 + (long)iVar10) = uVar7;
      plVar2 = (long *)((long)param_1 + (long)*(int *)(lVar9 + 0x40));
      param_2 = (long *)((long)param_2 + (long)*(int *)(lVar9 + 0x40));
      if (*param_2 == 0) {
        lVar9 = *param_2;
        plVar2[1] = param_2[1];
        *plVar2 = lVar9;
      }
      else {
        lVar9 = param_2[1];
        *plVar2 = *param_2;
        plVar2[1] = lVar9;
        _swift_retain();
      }
      uVar7 = 2;
    }
    else {
      uVar7 = 3;
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



/* Address: 0x100a90274 | FUN_100a90274 */

void FUN_100a90274(long param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  CheckedContinuation CVar3;
  long lVar4;
  CheckedContinuation CVar5;
  undefined *puVar6;
  undefined *puVar7;
  code *UNRECOVERED_JUMPTABLE;
  long lVar8;
  
  lVar4 = param_1;
  _swift_getEnumCaseMultiPayload();
  iVar2 = (int)lVar4;
  if (iVar2 < 2) {
    if (iVar2 == 0) {
      CVar3.unknown = *(undefined **)(param_2 + 0x10);
      Swift::Optional::typeMetadataAccessor();
      FUN_1000f8b08(&DAT_100ff69f8,&DAT_100c910f0);
      CVar5 = Swift::CheckedContinuation::typeMetadataAccessor();
      (**(code **)(*(long *)(CVar5.unknown + -8) + 8))(param_1,CVar5.unknown);
      lVar4 = 0;
      _swift_getTupleTypeMetadata2(0,CVar5.unknown,CVar3.unknown,0,0);
      UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(CVar3.unknown + -8) + 8);
      param_1 = param_1 + *(int *)(lVar4 + 0x30);
LAB_100a90444:
                    /* WARNING: Could not recover jumptable at 0x000100a90450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,CVar3.unknown);
      return;
    }
    if (iVar2 == 1) {
      lVar8 = *(long *)(param_2 + 0x10);
      Swift::Optional::typeMetadataAccessor();
      FUN_1000f8b08(&DAT_100ff69f8,&DAT_100c910f0);
      CVar3 = Swift::CheckedContinuation::typeMetadataAccessor();
      (**(code **)(*(long *)(CVar3.unknown + -8) + 8))(param_1,CVar3.unknown);
      puVar6 = &DAT_100ff7700;
      FUN_1000f8b08(&DAT_100ff7700,&DAT_100c92ec8);
      lVar4 = 0;
      _swift_getTupleTypeMetadata3(0,CVar3.unknown,lVar8,puVar6,0,0);
      (**(code **)(*(long *)(lVar8 + -8) + 8))(param_1 + *(int *)(lVar4 + 0x30),lVar8);
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar4 + 0x40)));
      return;
    }
  }
  else if (iVar2 == 2) {
    Swift::Optional::typeMetadataAccessor();
    FUN_1000f8b08(&DAT_100ff69f8,&DAT_100c910f0);
    CVar3 = Swift::CheckedContinuation::typeMetadataAccessor();
    (**(code **)(*(long *)(CVar3.unknown + -8) + 8))(param_1,CVar3.unknown);
    puVar6 = &DAT_100ff6ed8;
    FUN_1000f8b08(&DAT_100ff6ed8,&DAT_100c91fd8);
    puVar7 = &DAT_100ff7710;
    FUN_1000f8b08(&DAT_100ff7710,&DAT_100c92ef0);
    lVar4 = 0;
    _swift_getTupleTypeMetadata3(0,CVar3.unknown,puVar6,puVar7,0,0);
    _swift_errorRelease(*(undefined8 *)(param_1 + *(int *)(lVar4 + 0x30)));
    plVar1 = (long *)(param_1 + *(int *)(lVar4 + 0x40));
    if (*plVar1 != 0) {
      _swift_release(plVar1[1]);
      return;
    }
  }
  else if (iVar2 == 3) {
    Swift::Optional::typeMetadataAccessor();
    FUN_1000f8b08(&DAT_100ff69f8,&DAT_100c910f0);
    CVar3 = Swift::CheckedContinuation::typeMetadataAccessor();
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(CVar3.unknown + -8) + 8);
    goto LAB_100a90444;
  }
  return;
}



/* Address: 0x100a90534 | FUN_100a90534 */

long FUN_100a90534(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  CheckedContinuation CVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  
  lVar3 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  lVar9 = *(long *)(param_3 + 0x10);
  Swift::Optional::typeMetadataAccessor();
  FUN_1000f8b08(&DAT_100ff69f8,&DAT_100c910f0);
  CVar4 = Swift::CheckedContinuation::typeMetadataAccessor();
  (**(code **)(*(long *)(CVar4.unknown + -8) + 0x10))(param_1,param_2,CVar4.unknown);
  iVar8 = (int)lVar3;
  if (iVar8 < 2) {
    if (iVar8 == 0) {
      lVar5 = 0;
      _swift_getTupleTypeMetadata2(0,CVar4.unknown,lVar9,0,0);
      (**(code **)(*(long *)(lVar9 + -8) + 0x10))
                (param_1 + *(int *)(lVar5 + 0x30),param_2 + *(int *)(lVar5 + 0x30),lVar9);
    }
    else {
      puVar6 = &DAT_100ff7700;
      FUN_1000f8b08(&DAT_100ff7700,&DAT_100c92ec8);
      lVar5 = 0;
      _swift_getTupleTypeMetadata3(0,CVar4.unknown,lVar9,puVar6,0,0);
      (**(code **)(*(long *)(lVar9 + -8) + 0x10))
                (param_1 + *(int *)(lVar5 + 0x30),param_2 + *(int *)(lVar5 + 0x30),lVar9);
      *(undefined8 *)(param_1 + *(int *)(lVar5 + 0x40)) =
           *(undefined8 *)(param_2 + *(int *)(lVar5 + 0x40));
      _swift_bridgeObjectRetain();
    }
  }
  else if (iVar8 == 2) {
    puVar6 = &DAT_100ff6ed8;
    FUN_1000f8b08(&DAT_100ff6ed8,&DAT_100c91fd8);
    puVar7 = &DAT_100ff7710;
    FUN_1000f8b08(&DAT_100ff7710,&DAT_100c92ef0);
    lVar9 = 0;
    _swift_getTupleTypeMetadata3(0,CVar4.unknown,puVar6,puVar7,0,0);
    iVar8 = *(int *)(lVar9 + 0x30);
    uVar10 = *(undefined8 *)(param_2 + iVar8);
    _swift_errorRetain(uVar10);
    *(undefined8 *)(param_1 + iVar8) = uVar10;
    plVar1 = (long *)(param_1 + *(int *)(lVar9 + 0x40));
    plVar2 = (long *)(param_2 + *(int *)(lVar9 + 0x40));
    if (*plVar2 == 0) {
      lVar9 = *plVar2;
      plVar1[1] = plVar2[1];
      *plVar1 = lVar9;
    }
    else {
      lVar9 = plVar2[1];
      *plVar1 = *plVar2;
      plVar1[1] = lVar9;
      _swift_retain();
    }
  }
  _swift_storeEnumTagMultiPayload(param_1,param_3,lVar3);
  return param_1;
}



/* Address: 0x100a9072c | FUN_100a9072c */

long FUN_100a9072c(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  CheckedContinuation CVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  
  if (param_1 != param_2) {
    (**(code **)(*(long *)(param_3 + -8) + 8))(param_1,param_3);
    lVar3 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    lVar9 = *(long *)(param_3 + 0x10);
    Swift::Optional::typeMetadataAccessor();
    FUN_1000f8b08(&DAT_100ff69f8,&DAT_100c910f0);
    CVar4 = Swift::CheckedContinuation::typeMetadataAccessor();
    (**(code **)(*(long *)(CVar4.unknown + -8) + 0x10))(param_1,param_2,CVar4.unknown);
    iVar8 = (int)lVar3;
    if (iVar8 < 2) {
      if (iVar8 == 0) {
        lVar5 = 0;
        _swift_getTupleTypeMetadata2(0,CVar4.unknown,lVar9,0,0);
        (**(code **)(*(long *)(lVar9 + -8) + 0x10))
                  (param_1 + *(int *)(lVar5 + 0x30),param_2 + *(int *)(lVar5 + 0x30),lVar9);
      }
      else {
        puVar6 = &DAT_100ff7700;
        FUN_1000f8b08(&DAT_100ff7700,&DAT_100c92ec8);
        lVar5 = 0;
        _swift_getTupleTypeMetadata3(0,CVar4.unknown,lVar9,puVar6,0,0);
        (**(code **)(*(long *)(lVar9 + -8) + 0x10))
                  (param_1 + *(int *)(lVar5 + 0x30),param_2 + *(int *)(lVar5 + 0x30),lVar9);
        *(undefined8 *)(param_1 + *(int *)(lVar5 + 0x40)) =
             *(undefined8 *)(param_2 + *(int *)(lVar5 + 0x40));
        _swift_bridgeObjectRetain();
      }
    }
    else if (iVar8 == 2) {
      puVar6 = &DAT_100ff6ed8;
      FUN_1000f8b08(&DAT_100ff6ed8,&DAT_100c91fd8);
      puVar7 = &DAT_100ff7710;
      FUN_1000f8b08(&DAT_100ff7710,&DAT_100c92ef0);
      lVar9 = 0;
      _swift_getTupleTypeMetadata3(0,CVar4.unknown,puVar6,puVar7,0,0);
      iVar8 = *(int *)(lVar9 + 0x30);
      uVar10 = *(undefined8 *)(param_2 + iVar8);
      _swift_errorRetain(uVar10);
      *(undefined8 *)(param_1 + iVar8) = uVar10;
      plVar1 = (long *)(param_1 + *(int *)(lVar9 + 0x40));
      plVar2 = (long *)(param_2 + *(int *)(lVar9 + 0x40));
      if (*plVar2 == 0) {
        lVar9 = *plVar2;
        plVar1[1] = plVar2[1];
        *plVar1 = lVar9;
      }
      else {
        lVar9 = plVar2[1];
        *plVar1 = *plVar2;
        plVar1[1] = lVar9;
        _swift_retain();
      }
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,lVar3);
  }
  return param_1;
}



/* Address: 0x100a90940 | FUN_100a90940 */

long FUN_100a90940(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  CheckedContinuation CVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  
  lVar3 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  lVar9 = *(long *)(param_3 + 0x10);
  Swift::Optional::typeMetadataAccessor();
  FUN_1000f8b08(&DAT_100ff69f8,&DAT_100c910f0);
  CVar4 = Swift::CheckedContinuation::typeMetadataAccessor();
  (**(code **)(*(long *)(CVar4.unknown + -8) + 0x20))(param_1,param_2,CVar4.unknown);
  iVar8 = (int)lVar3;
  if (iVar8 < 2) {
    if (iVar8 == 0) {
      lVar5 = 0;
      _swift_getTupleTypeMetadata2(0,CVar4.unknown,lVar9,0,0);
      (**(code **)(*(long *)(lVar9 + -8) + 0x20))
                (param_1 + *(int *)(lVar5 + 0x30),param_2 + *(int *)(lVar5 + 0x30),lVar9);
    }
    else {
      puVar6 = &DAT_100ff7700;
      FUN_1000f8b08(&DAT_100ff7700,&DAT_100c92ec8);
      lVar5 = 0;
      _swift_getTupleTypeMetadata3(0,CVar4.unknown,lVar9,puVar6,0,0);
      (**(code **)(*(long *)(lVar9 + -8) + 0x20))
                (param_1 + *(int *)(lVar5 + 0x30),param_2 + *(int *)(lVar5 + 0x30),lVar9);
      *(undefined8 *)(param_1 + *(int *)(lVar5 + 0x40)) =
           *(undefined8 *)(param_2 + *(int *)(lVar5 + 0x40));
    }
  }
  else if (iVar8 == 2) {
    puVar6 = &DAT_100ff6ed8;
    FUN_1000f8b08(&DAT_100ff6ed8,&DAT_100c91fd8);
    puVar7 = &DAT_100ff7710;
    FUN_1000f8b08(&DAT_100ff7710,&DAT_100c92ef0);
    lVar9 = 0;
    _swift_getTupleTypeMetadata3(0,CVar4.unknown,puVar6,puVar7,0,0);
    *(undefined8 *)(param_1 + *(int *)(lVar9 + 0x30)) =
         *(undefined8 *)(param_2 + *(int *)(lVar9 + 0x30));
    puVar1 = (undefined8 *)(param_2 + *(int *)(lVar9 + 0x40));
    uVar10 = *puVar1;
    puVar2 = (undefined8 *)(param_1 + *(int *)(lVar9 + 0x40));
    puVar2[1] = puVar1[1];
    *puVar2 = uVar10;
  }
  _swift_storeEnumTagMultiPayload(param_1,param_3,lVar3);
  return param_1;
}



/* Address: 0x100a90b00 | FUN_100a90b00 */

long FUN_100a90b00(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  CheckedContinuation CVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  
  if (param_1 != param_2) {
    (**(code **)(*(long *)(param_3 + -8) + 8))(param_1,param_3);
    lVar3 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    lVar9 = *(long *)(param_3 + 0x10);
    Swift::Optional::typeMetadataAccessor();
    FUN_1000f8b08(&DAT_100ff69f8,&DAT_100c910f0);
    CVar4 = Swift::CheckedContinuation::typeMetadataAccessor();
    (**(code **)(*(long *)(CVar4.unknown + -8) + 0x20))(param_1,param_2,CVar4.unknown);
    iVar8 = (int)lVar3;
    if (iVar8 < 2) {
      if (iVar8 == 0) {
        lVar5 = 0;
        _swift_getTupleTypeMetadata2(0,CVar4.unknown,lVar9,0,0);
        (**(code **)(*(long *)(lVar9 + -8) + 0x20))
                  (param_1 + *(int *)(lVar5 + 0x30),param_2 + *(int *)(lVar5 + 0x30),lVar9);
      }
      else {
        puVar6 = &DAT_100ff7700;
        FUN_1000f8b08(&DAT_100ff7700,&DAT_100c92ec8);
        lVar5 = 0;
        _swift_getTupleTypeMetadata3(0,CVar4.unknown,lVar9,puVar6,0,0);
        (**(code **)(*(long *)(lVar9 + -8) + 0x20))
                  (param_1 + *(int *)(lVar5 + 0x30),param_2 + *(int *)(lVar5 + 0x30),lVar9);
        *(undefined8 *)(param_1 + *(int *)(lVar5 + 0x40)) =
             *(undefined8 *)(param_2 + *(int *)(lVar5 + 0x40));
      }
    }
    else if (iVar8 == 2) {
      puVar6 = &DAT_100ff6ed8;
      FUN_1000f8b08(&DAT_100ff6ed8,&DAT_100c91fd8);
      puVar7 = &DAT_100ff7710;
      FUN_1000f8b08(&DAT_100ff7710,&DAT_100c92ef0);
      lVar9 = 0;
      _swift_getTupleTypeMetadata3(0,CVar4.unknown,puVar6,puVar7,0,0);
      *(undefined8 *)(param_1 + *(int *)(lVar9 + 0x30)) =
           *(undefined8 *)(param_2 + *(int *)(lVar9 + 0x30));
      puVar1 = (undefined8 *)(param_2 + *(int *)(lVar9 + 0x40));
      uVar10 = *puVar1;
      puVar2 = (undefined8 *)(param_1 + *(int *)(lVar9 + 0x40));
      puVar2[1] = puVar1[1];
      *puVar2 = uVar10;
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,lVar3);
  }
  return param_1;
}



/* Address: 0x100a90cdc | FUN_100a90cdc */

undefined1  [16] FUN_100a90cdc(void)

{
  return ZEXT816(0x100f2ed28);
}



/* Address: 0x100a90cec | FUN_100a90cec */

undefined1  [16] FUN_100a90cec(undefined8 param_1)

{
  Optional OVar1;
  undefined7 extraout_var;
  CheckedContinuation CVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_50 [32];
  undefined1 *local_30;
  undefined *puStack_28;
  ulong uVar2;
  
  OVar1 = Swift::Optional::typeMetadataAccessor();
  uVar2 = CONCAT71(extraout_var,OVar1.value);
  FUN_1000f8b08(&DAT_100ff69f8,&DAT_100c910f0);
  CVar3 = Swift::CheckedContinuation::typeMetadataAccessor();
  if (uVar2 < 0x40) {
    _swift_getTupleTypeLayout2(auStack_50,*(long *)(CVar3.unknown + -8) + 0x40,&DAT_100c92d28);
    puStack_28 = &DAT_100c93038;
    local_30 = auStack_50;
    _swift_initEnumMetadataMultiPayload(param_1,0,2,&local_30);
    CVar3.unknown = (undefined *)0x0;
    uVar4 = 0;
  }
  else {
    uVar4 = 0x3f;
  }
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = CVar3.unknown;
  return auVar5;
}



/* Address: 0x100a90da0 | FUN_100a90da0 */

long * FUN_100a90da0(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  CheckedContinuation CVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    plVar2 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    if ((int)plVar2 == 1) {
      *param_1 = *param_2;
      lVar8 = param_2[1];
      _swift_bridgeObjectRetain();
      if (lVar8 == 0) {
        lVar8 = param_2[1];
        param_1[2] = param_2[2];
        param_1[1] = lVar8;
      }
      else {
        lVar3 = param_2[2];
        param_1[1] = lVar8;
        param_1[2] = lVar3;
        _swift_retain();
      }
      uVar6 = 1;
    }
    else {
      Swift::Optional::typeMetadataAccessor();
      FUN_1000f8b08(&DAT_100ff69f8,&DAT_100c910f0);
      CVar4 = Swift::CheckedContinuation::typeMetadataAccessor();
      (**(code **)(*(long *)(CVar4.unknown + -8) + 0x10))(param_1,param_2,CVar4.unknown);
      puVar5 = &DAT_100ff7710;
      FUN_1000f8b08(&DAT_100ff7710,&DAT_100c92ef0);
      lVar8 = 0;
      _swift_getTupleTypeMetadata2(0,CVar4.unknown,puVar5,0,0);
      plVar2 = (long *)((long)param_1 + (long)*(int *)(lVar8 + 0x30));
      param_2 = (long *)((long)param_2 + (long)*(int *)(lVar8 + 0x30));
      if (*param_2 == 0) {
        lVar8 = *param_2;
        plVar2[1] = param_2[1];
        *plVar2 = lVar8;
      }
      else {
        lVar8 = param_2[1];
        *plVar2 = *param_2;
        plVar2[1] = lVar8;
        _swift_retain();
      }
      uVar6 = 0;
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,uVar6);
  }
  else {
    lVar8 = *param_2;
    *param_1 = lVar8;
    uVar7 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar8 + (uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x100a90f1c | FUN_100a90f1c */

void FUN_100a90f1c(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  CheckedContinuation CVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  
  puVar2 = param_1;
  _swift_getEnumCaseMultiPayload();
  if ((int)puVar2 == 1) {
    _swift_bridgeObjectRelease(*param_1);
    if (param_1[1] == 0) {
      return;
    }
    plVar6 = param_1 + 2;
  }
  else {
    Swift::Optional::typeMetadataAccessor();
    FUN_1000f8b08(&DAT_100ff69f8,&DAT_100c910f0);
    CVar3 = Swift::CheckedContinuation::typeMetadataAccessor();
    (**(code **)(*(long *)(CVar3.unknown + -8) + 8))(param_1,CVar3.unknown);
    puVar4 = &DAT_100ff7710;
    FUN_1000f8b08(&DAT_100ff7710,&DAT_100c92ef0);
    lVar5 = 0;
    _swift_getTupleTypeMetadata2(0,CVar3.unknown,puVar4,0,0);
    plVar1 = (long *)((long)param_1 + (long)*(int *)(lVar5 + 0x30));
    plVar6 = plVar1 + 1;
    if (*plVar1 == 0) {
      return;
    }
  }
  _swift_release(*plVar6);
  return;
}



/* Address: 0x100a91000 | FUN_100a91000 */

undefined8 * FUN_100a91000(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  CheckedContinuation CVar5;
  undefined *puVar6;
  long lVar7;
  
  puVar3 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  if ((int)puVar3 == 1) {
    *param_1 = *param_2;
    lVar7 = param_2[1];
    _swift_bridgeObjectRetain();
    if (lVar7 == 0) {
      lVar7 = param_2[1];
      param_1[2] = param_2[2];
      param_1[1] = lVar7;
    }
    else {
      uVar4 = param_2[2];
      param_1[1] = lVar7;
      param_1[2] = uVar4;
      _swift_retain();
    }
    uVar4 = 1;
  }
  else {
    Swift::Optional::typeMetadataAccessor();
    FUN_1000f8b08(&DAT_100ff69f8,&DAT_100c910f0);
    CVar5 = Swift::CheckedContinuation::typeMetadataAccessor();
    (**(code **)(*(long *)(CVar5.unknown + -8) + 0x10))(param_1,param_2,CVar5.unknown);
    puVar6 = &DAT_100ff7710;
    FUN_1000f8b08(&DAT_100ff7710,&DAT_100c92ef0);
    lVar7 = 0;
    _swift_getTupleTypeMetadata2(0,CVar5.unknown,puVar6,0,0);
    plVar1 = (long *)((long)param_1 + (long)*(int *)(lVar7 + 0x30));
    plVar2 = (long *)((long)param_2 + (long)*(int *)(lVar7 + 0x30));
    if (*plVar2 == 0) {
      uVar4 = 0;
      lVar7 = *plVar2;
      plVar1[1] = plVar2[1];
      *plVar1 = lVar7;
    }
    else {
      lVar7 = plVar2[1];
      *plVar1 = *plVar2;
      plVar1[1] = lVar7;
      _swift_retain();
      uVar4 = 0;
    }
  }
  _swift_storeEnumTagMultiPayload(param_1,param_3,uVar4);
  return param_1;
}



/* Address: 0x100a9114c | FUN_100a9114c */

undefined8 * FUN_100a9114c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  CheckedContinuation CVar5;
  undefined *puVar6;
  long lVar7;
  
  if (param_1 != param_2) {
    (**(code **)(*(long *)(param_3 + -8) + 8))(param_1,param_3);
    puVar3 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    if ((int)puVar3 == 1) {
      *param_1 = *param_2;
      lVar7 = param_2[1];
      _swift_bridgeObjectRetain();
      if (lVar7 == 0) {
        lVar7 = param_2[1];
        param_1[2] = param_2[2];
        param_1[1] = lVar7;
      }
      else {
        uVar4 = param_2[2];
        param_1[1] = lVar7;
        param_1[2] = uVar4;
        _swift_retain();
      }
      uVar4 = 1;
    }
    else {
      Swift::Optional::typeMetadataAccessor();
      FUN_1000f8b08(&DAT_100ff69f8,&DAT_100c910f0);
      CVar5 = Swift::CheckedContinuation::typeMetadataAccessor();
      (**(code **)(*(long *)(CVar5.unknown + -8) + 0x10))(param_1,param_2,CVar5.unknown);
      puVar6 = &DAT_100ff7710;
      FUN_1000f8b08(&DAT_100ff7710,&DAT_100c92ef0);
      lVar7 = 0;
      _swift_getTupleTypeMetadata2(0,CVar5.unknown,puVar6,0,0);
      plVar1 = (long *)((long)param_1 + (long)*(int *)(lVar7 + 0x30));
      plVar2 = (long *)((long)param_2 + (long)*(int *)(lVar7 + 0x30));
      if (*plVar2 == 0) {
        uVar4 = 0;
        lVar7 = *plVar2;
        plVar1[1] = plVar2[1];
        *plVar1 = lVar7;
      }
      else {
        lVar7 = plVar2[1];
        *plVar1 = *plVar2;
        plVar1[1] = lVar7;
        _swift_retain();
        uVar4 = 0;
      }
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,uVar4);
  }
  return param_1;
}



/* Address: 0x100a912b4 | FUN_100a912b4 */

void * FUN_100a912b4(void *param_1,void *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  CheckedContinuation CVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  pvVar3 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  if ((int)pvVar3 != 0) {
    pvVar3 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
    return pvVar3;
  }
  Swift::Optional::typeMetadataAccessor();
  FUN_1000f8b08(&DAT_100ff69f8,&DAT_100c910f0);
  CVar4 = Swift::CheckedContinuation::typeMetadataAccessor();
  (**(code **)(*(long *)(CVar4.unknown + -8) + 0x20))(param_1,param_2,CVar4.unknown);
  puVar5 = &DAT_100ff7710;
  FUN_1000f8b08(&DAT_100ff7710,&DAT_100c92ef0);
  lVar6 = 0;
  _swift_getTupleTypeMetadata2(0,CVar4.unknown,puVar5,0,0);
  puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x30));
  uVar7 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x30));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar7;
  _swift_storeEnumTagMultiPayload(param_1,param_3,0);
  return param_1;
}



/* Address: 0x100a913b4 | FUN_100a913b4 */

void * FUN_100a913b4(void *param_1,void *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  CheckedContinuation CVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  if (param_1 != param_2) {
    lVar6 = *(long *)(param_3 + -8);
    (**(code **)(lVar6 + 8))(param_1,param_3);
    pvVar3 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    if ((int)pvVar3 != 0) {
      pvVar3 = _memcpy(param_1,param_2,*(size_t *)(lVar6 + 0x40));
      return pvVar3;
    }
    Swift::Optional::typeMetadataAccessor();
    FUN_1000f8b08(&DAT_100ff69f8,&DAT_100c910f0);
    CVar4 = Swift::CheckedContinuation::typeMetadataAccessor();
    (**(code **)(*(long *)(CVar4.unknown + -8) + 0x20))(param_1,param_2,CVar4.unknown);
    puVar5 = &DAT_100ff7710;
    FUN_1000f8b08(&DAT_100ff7710,&DAT_100c92ef0);
    lVar6 = 0;
    _swift_getTupleTypeMetadata2(0,CVar4.unknown,puVar5,0,0);
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x30));
    uVar7 = *puVar1;
    puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x30));
    puVar2[1] = puVar1[1];
    *puVar2 = uVar7;
    _swift_storeEnumTagMultiPayload(param_1,param_3,0);
  }
  return param_1;
}



/* Address: 0x100a914cc | FUN_100a914cc */

void FUN_100a914cc(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined1 auStack_58 [32];
  long local_38;
  undefined1 *local_30;
  undefined *puStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    local_38 = *(long *)(lVar1 + -8) + 0x40;
    _swift_getTupleTypeLayout2
              (auStack_58,local_38,
               PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40);
    puStack_28 = &DAT_100c93070;
    local_30 = auStack_58;
    _swift_initEnumMetadataMultiPayload(param_1,0,3,&local_38);
  }
  return;
}



/* Address: 0x100a91558 | FUN_100a91558 */

long * FUN_100a91558(long *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  
  lVar5 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar9 = *(ulong *)(lVar5 + 0x40);
  uVar1 = (uVar9 + 7 & 0xfffffffffffffff8) + 8;
  if (uVar1 <= uVar9) {
    uVar1 = uVar9;
  }
  if (uVar1 < 0x19) {
    uVar1 = 0x18;
  }
  if ((*(uint *)(lVar5 + 0x50) & 0x1000f8) != 0 || 0x18 < uVar1 + 1) {
    uVar6 = *(uint *)(lVar5 + 0x50) & 0xf8;
    lVar5 = *(long *)param_2;
    *param_1 = lVar5;
    _swift_retain();
    return (long *)(lVar5 + ((ulong)(uVar6 + 0x17 & (uVar6 ^ 0xffffffff)) & 0x1f8));
  }
  bVar2 = *(byte *)((long)param_2 + uVar1);
  uVar6 = (uint)bVar2;
  if (2 < bVar2) {
    uVar8 = (uint)uVar1;
    uVar7 = 4;
    if (uVar8 < 4) {
      uVar7 = uVar8;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) goto LAB_100a9165c;
      uVar7 = (uint)(byte)*param_2;
    }
    else if (uVar7 == 2) {
      uVar7 = (uint)(ushort)*param_2;
    }
    else if (uVar7 == 3) {
      uVar7 = (uint)(uint3)*param_2;
    }
    else {
      uVar7 = *param_2;
    }
    uVar6 = uVar7 | bVar2 - 3 << (ulong)((uVar8 & 3) << 3);
    if (3 < uVar8) {
      uVar6 = uVar7;
    }
    uVar6 = uVar6 + 3;
  }
LAB_100a9165c:
  if (uVar6 == 2) {
    lVar5 = *(long *)param_2;
    _swift_errorRetain(lVar5);
    *param_1 = lVar5;
    lVar5 = *(long *)(param_2 + 2);
    if (lVar5 == 0) {
      lVar5 = *(long *)(param_2 + 2);
      param_1[2] = *(long *)(param_2 + 4);
      param_1[1] = lVar5;
    }
    else {
      lVar3 = *(long *)(param_2 + 4);
      param_1[1] = lVar5;
      param_1[2] = lVar3;
      _swift_retain();
    }
    *(undefined1 *)((long)param_1 + uVar1) = 2;
  }
  else if (uVar6 == 1) {
    (**(code **)(lVar5 + 0x10))(param_1);
    *(undefined8 *)((long)param_1 + uVar9 + 7 & 0xfffffffffffffff8) =
         *(undefined8 *)((ulong)((long)param_2 + uVar9 + 7) & 0xfffffffffffffff8);
    *(undefined1 *)((long)param_1 + uVar1) = 1;
    _swift_bridgeObjectRetain();
  }
  else {
    if (uVar6 != 0) {
      plVar4 = _memcpy(param_1,param_2,uVar1 + 1);
      return plVar4;
    }
    (**(code **)(lVar5 + 0x10))(param_1);
    *(undefined1 *)((long)param_1 + uVar1) = 0;
  }
  return param_1;
}



/* Address: 0x100a91724 | FUN_100a91724 */

void FUN_100a91724(uint *param_1,long param_2)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  
  lVar3 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  uVar7 = *(ulong *)(lVar3 + 0x40);
  uVar1 = (uVar7 + 7 & 0xfffffffffffffff8) + 8;
  if (uVar1 <= uVar7) {
    uVar1 = uVar7;
  }
  if (uVar1 < 0x19) {
    uVar1 = 0x18;
  }
  bVar2 = *(byte *)((long)param_1 + uVar1);
  uVar5 = (uint)bVar2;
  if (2 < bVar2) {
    uVar4 = (uint)uVar1;
    uVar6 = 4;
    if (uVar4 < 4) {
      uVar6 = uVar4;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_100a917d0;
      uVar6 = (uint)(byte)*param_1;
    }
    else if (uVar6 == 2) {
      uVar6 = (uint)(ushort)*param_1;
    }
    else if (uVar6 == 3) {
      uVar6 = (uint)(uint3)*param_1;
    }
    else {
      uVar6 = *param_1;
    }
    uVar5 = uVar6 | bVar2 - 3 << (ulong)((uVar4 & 3) << 3);
    if (3 < uVar4) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 3;
  }
LAB_100a917d0:
  if (uVar5 == 2) {
    _swift_errorRelease(*(undefined8 *)param_1);
    if (*(long *)(param_1 + 2) != 0) {
      _swift_release(*(undefined8 *)(param_1 + 4));
      return;
    }
  }
  else {
    if (uVar5 == 1) {
      (**(code **)(lVar3 + 8))();
      _swift_bridgeObjectRelease
                (*(undefined8 *)((ulong)((long)param_1 + uVar7 + 7) & 0xfffffffffffffff8));
      return;
    }
    if (uVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000100a917f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar3 + 8))();
      return;
    }
  }
  return;
}



/* Address: 0x100a91850 | FUN_100a91850 */

undefined8 * FUN_100a91850(undefined8 *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  byte bVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  
  lVar4 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar9 = *(ulong *)(lVar4 + 0x40);
  uVar1 = (uVar9 + 7 & 0xfffffffffffffff8) + 8;
  if (uVar1 <= uVar9) {
    uVar1 = uVar9;
  }
  if (uVar1 < 0x19) {
    uVar1 = 0x18;
  }
  bVar2 = *(byte *)((long)param_2 + uVar1);
  uVar5 = (uint)bVar2;
  if (2 < bVar2) {
    uVar8 = (uint)uVar1;
    uVar6 = 4;
    if (uVar8 < 4) {
      uVar6 = uVar8;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_100a91904;
      uVar6 = (uint)(byte)*param_2;
    }
    else if (uVar6 == 2) {
      uVar6 = (uint)(ushort)*param_2;
    }
    else if (uVar6 == 3) {
      uVar6 = (uint)(uint3)*param_2;
    }
    else {
      uVar6 = *param_2;
    }
    uVar5 = uVar6 | bVar2 - 3 << (ulong)((uVar8 & 3) << 3);
    if (3 < uVar8) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 3;
  }
LAB_100a91904:
  if (uVar5 == 2) {
    uVar7 = *(undefined8 *)param_2;
    _swift_errorRetain(uVar7);
    *param_1 = uVar7;
    lVar4 = *(long *)(param_2 + 2);
    if (lVar4 == 0) {
      uVar7 = *(undefined8 *)(param_2 + 2);
      param_1[2] = *(undefined8 *)(param_2 + 4);
      param_1[1] = uVar7;
    }
    else {
      uVar7 = *(undefined8 *)(param_2 + 4);
      param_1[1] = lVar4;
      param_1[2] = uVar7;
      _swift_retain();
    }
    *(undefined1 *)((long)param_1 + uVar1) = 2;
  }
  else if (uVar5 == 1) {
    (**(code **)(lVar4 + 0x10))(param_1);
    *(undefined8 *)((long)param_1 + uVar9 + 7 & 0xfffffffffffffff8) =
         *(undefined8 *)((ulong)((long)param_2 + uVar9 + 7) & 0xfffffffffffffff8);
    *(undefined1 *)((long)param_1 + uVar1) = 1;
    _swift_bridgeObjectRetain();
  }
  else {
    if (uVar5 != 0) {
      puVar3 = _memcpy(param_1,param_2,uVar1 + 1);
      return puVar3;
    }
    (**(code **)(lVar4 + 0x10))(param_1);
    *(undefined1 *)((long)param_1 + uVar1) = 0;
  }
  return param_1;
}



/* Address: 0x100a919dc | FUN_100a919dc */

uint * FUN_100a919dc(uint *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  byte bVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar6 = *(long *)(param_3 + 0x10);
  lVar10 = *(long *)(lVar6 + -8);
  uVar9 = *(ulong *)(lVar10 + 0x40);
  uVar1 = (uVar9 + 7 & 0xfffffffffffffff8) + 8;
  if (uVar1 <= uVar9) {
    uVar1 = uVar9;
  }
  if (uVar1 < 0x19) {
    uVar1 = 0x18;
  }
  uVar8 = (uint)uVar1;
  bVar2 = *(byte *)((long)param_1 + uVar1);
  uVar4 = (uint)bVar2;
  if (2 < bVar2) {
    uVar5 = 4;
    if (uVar8 < 4) {
      uVar5 = uVar8;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_100a91aa4;
      uVar5 = (uint)(byte)*param_1;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*param_1;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*param_1;
    }
    else {
      uVar5 = *param_1;
    }
    uVar4 = uVar5 | bVar2 - 3 << (ulong)(uVar8 << 3 & 0x1f);
    if (3 < uVar8) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 3;
  }
LAB_100a91aa4:
  if (uVar4 == 2) {
    _swift_errorRelease(*(undefined8 *)param_1);
    if (*(long *)(param_1 + 2) != 0) {
      _swift_release(*(undefined8 *)(param_1 + 4));
    }
  }
  else if (uVar4 == 1) {
    (**(code **)(lVar10 + 8))(param_1,lVar6);
    _swift_bridgeObjectRelease
              (*(undefined8 *)((ulong)((long)param_1 + uVar9 + 7) & 0xfffffffffffffff8));
  }
  else if (uVar4 == 0) {
    (**(code **)(lVar10 + 8))(param_1,lVar6);
  }
  bVar2 = *(byte *)((long)param_2 + uVar1);
  uVar4 = (uint)bVar2;
  if (2 < bVar2) {
    uVar5 = 4;
    if (uVar8 < 4) {
      uVar5 = uVar8;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_100a91b7c;
      uVar5 = (uint)(byte)*param_2;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*param_2;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*param_2;
    }
    else {
      uVar5 = *param_2;
    }
    uVar4 = uVar5 | bVar2 - 3 << (ulong)(uVar8 << 3 & 0x1f);
    if (3 < uVar8) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 3;
  }
LAB_100a91b7c:
  if (uVar4 == 2) {
    uVar7 = *(undefined8 *)param_2;
    _swift_errorRetain(uVar7);
    *(undefined8 *)param_1 = uVar7;
    lVar6 = *(long *)(param_2 + 2);
    if (lVar6 == 0) {
      uVar7 = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(param_1 + 2) = uVar7;
    }
    else {
      uVar7 = *(undefined8 *)(param_2 + 4);
      *(long *)(param_1 + 2) = lVar6;
      *(undefined8 *)(param_1 + 4) = uVar7;
      _swift_retain();
    }
    *(byte *)((long)param_1 + uVar1) = 2;
  }
  else if (uVar4 == 1) {
    (**(code **)(lVar10 + 0x10))(param_1,param_2,lVar6);
    *(undefined8 *)((ulong)((long)param_1 + uVar9 + 7) & 0xfffffffffffffff8) =
         *(undefined8 *)((ulong)((long)param_2 + uVar9 + 7) & 0xfffffffffffffff8);
    *(byte *)((long)param_1 + uVar1) = 1;
    _swift_bridgeObjectRetain();
  }
  else {
    if (uVar4 != 0) {
      puVar3 = _memcpy(param_1,param_2,uVar1 + 1);
      return puVar3;
    }
    (**(code **)(lVar10 + 0x10))(param_1,param_2,lVar6);
    *(byte *)((long)param_1 + uVar1) = 0;
  }
  return param_1;
}



/* Address: 0x100a91c70 | FUN_100a91c70 */

undefined8 * FUN_100a91c70(undefined8 *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  byte bVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  lVar4 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar8 = *(ulong *)(lVar4 + 0x40);
  uVar1 = (uVar8 + 7 & 0xfffffffffffffff8) + 8;
  if (uVar1 <= uVar8) {
    uVar1 = uVar8;
  }
  if (uVar1 < 0x19) {
    uVar1 = 0x18;
  }
  bVar2 = *(byte *)((long)param_2 + uVar1);
  uVar5 = (uint)bVar2;
  if (2 < bVar2) {
    uVar7 = (uint)uVar1;
    uVar6 = 4;
    if (uVar7 < 4) {
      uVar6 = uVar7;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_100a91d20;
      uVar6 = (uint)(byte)*param_2;
    }
    else if (uVar6 == 2) {
      uVar6 = (uint)(ushort)*param_2;
    }
    else if (uVar6 == 3) {
      uVar6 = (uint)(uint3)*param_2;
    }
    else {
      uVar6 = *param_2;
    }
    uVar5 = uVar6 | bVar2 - 3 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 3;
  }
LAB_100a91d20:
  if (uVar5 == 2) {
    uVar9 = *(undefined8 *)param_2;
    param_1[1] = *(undefined8 *)(param_2 + 2);
    *param_1 = uVar9;
    param_1[2] = *(undefined8 *)(param_2 + 4);
    *(undefined1 *)((long)param_1 + uVar1) = 2;
  }
  else if (uVar5 == 1) {
    (**(code **)(lVar4 + 0x20))();
    *(undefined8 *)((long)param_1 + uVar8 + 7 & 0xfffffffffffffff8) =
         *(undefined8 *)((ulong)((long)param_2 + uVar8 + 7) & 0xfffffffffffffff8);
    *(undefined1 *)((long)param_1 + uVar1) = 1;
  }
  else {
    if (uVar5 != 0) {
      puVar3 = _memcpy(param_1,param_2,uVar1 + 1);
      return puVar3;
    }
    (**(code **)(lVar4 + 0x20))();
    *(undefined1 *)((long)param_1 + uVar1) = 0;
  }
  return param_1;
}



/* Address: 0x100a91dc8 | FUN_100a91dc8 */

uint * FUN_100a91dc8(uint *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  uint *puVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar6 = *(long *)(param_3 + 0x10);
  lVar9 = *(long *)(lVar6 + -8);
  uVar8 = *(ulong *)(lVar9 + 0x40);
  uVar1 = (uVar8 + 7 & 0xfffffffffffffff8) + 8;
  if (uVar1 <= uVar8) {
    uVar1 = uVar8;
  }
  if (uVar1 < 0x19) {
    uVar1 = 0x18;
  }
  uVar7 = (uint)uVar1;
  bVar3 = *(byte *)((long)param_1 + uVar1);
  uVar4 = (uint)bVar3;
  if (2 < bVar3) {
    uVar5 = 4;
    if (uVar7 < 4) {
      uVar5 = uVar7;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_100a91e90;
      uVar5 = (uint)(byte)*param_1;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*param_1;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*param_1;
    }
    else {
      uVar5 = *param_1;
    }
    uVar4 = uVar5 | bVar3 - 3 << (ulong)(uVar7 << 3 & 0x1f);
    if (3 < uVar7) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 3;
  }
LAB_100a91e90:
  if (uVar4 == 2) {
    _swift_errorRelease(*(undefined8 *)param_1);
    if (*(long *)(param_1 + 2) != 0) {
      _swift_release(*(undefined8 *)(param_1 + 4));
    }
  }
  else if (uVar4 == 1) {
    (**(code **)(lVar9 + 8))(param_1,lVar6);
    _swift_bridgeObjectRelease
              (*(undefined8 *)((ulong)((long)param_1 + uVar8 + 7) & 0xfffffffffffffff8));
  }
  else if (uVar4 == 0) {
    (**(code **)(lVar9 + 8))(param_1,lVar6);
  }
  bVar3 = *(byte *)((long)param_2 + uVar1);
  uVar4 = (uint)bVar3;
  if (2 < bVar3) {
    uVar5 = 4;
    if (uVar7 < 4) {
      uVar5 = uVar7;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_100a91f68;
      uVar5 = (uint)(byte)*param_2;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*param_2;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*param_2;
    }
    else {
      uVar5 = *param_2;
    }
    uVar4 = uVar5 | bVar3 - 3 << (ulong)(uVar7 << 3 & 0x1f);
    if (3 < uVar7) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 3;
  }
LAB_100a91f68:
  if (uVar4 == 2) {
    uVar10 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)param_1 = uVar10;
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    bVar3 = 2;
  }
  else {
    if (uVar4 != 1) {
      if (uVar4 == 0) {
        (**(code **)(lVar9 + 0x20))(param_1,param_2,lVar6);
        *(byte *)((long)param_1 + uVar1) = 0;
        return param_1;
      }
      puVar2 = _memcpy(param_1,param_2,uVar1 + 1);
      return puVar2;
    }
    (**(code **)(lVar9 + 0x20))(param_1,param_2,lVar6);
    *(undefined8 *)((ulong)((long)param_1 + uVar8 + 7) & 0xfffffffffffffff8) =
         *(undefined8 *)((ulong)((long)param_2 + uVar8 + 7) & 0xfffffffffffffff8);
    bVar3 = 1;
  }
  *(byte *)((long)param_1 + uVar1) = bVar3;
  return param_1;
}



/* Address: 0x100a9202c | FUN_100a9202c */

int FUN_100a9202c(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar6 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40);
  uVar1 = (uVar6 + 7 & 0xfffffffffffffff8) + 8;
  if (uVar1 <= uVar6) {
    uVar1 = uVar6;
  }
  if (uVar1 < 0x19) {
    uVar1 = 0x18;
  }
  uVar4 = 0xfc - (1U >> (ulong)(((uint)uVar1 & 3) << 3));
  if (3 < (uint)uVar1) {
    uVar4 = 0xfc;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 <= uVar4) goto LAB_100a92104;
  uVar6 = uVar1 + 1;
  uVar7 = (uint)uVar6;
  uVar3 = uVar7 << 3;
  if (uVar7 < 4) {
    uVar8 = ((param_2 + ~(-1 << (ulong)(uVar3 & 0x1f))) - uVar4 >> (ulong)(uVar3 & 0x1f)) + 1;
    if (uVar8 < 0x100) {
      if (uVar8 < 2) goto LAB_100a92104;
      goto LAB_100a92090;
    }
    if (uVar8 >> 0x10 == 0) {
      uVar8 = (uint)*(ushort *)((long)param_1 + uVar6);
    }
    else {
      uVar8 = *(uint *)((long)param_1 + uVar6);
    }
  }
  else {
LAB_100a92090:
    uVar8 = (uint)*(byte *)((long)param_1 + uVar6);
  }
  if (uVar8 != 0) {
    uVar2 = 0;
    if (uVar7 < 4) {
      uVar2 = uVar8 - 1 << (ulong)(uVar3 & 0x1f);
    }
    if (uVar7 != 0) {
      uVar3 = 4;
      if (uVar7 < 4) {
        uVar3 = uVar7;
      }
      if ((int)uVar3 < 3) {
        if (uVar3 == 1) {
          uVar6 = (ulong)(byte)*param_1;
        }
        else {
          uVar6 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar3 == 3) {
        uVar6 = (ulong)(uint3)*param_1;
      }
      else {
        uVar6 = (ulong)*param_1;
      }
    }
    return uVar4 + ((uint)uVar6 | uVar2) + 1;
  }
LAB_100a92104:
  iVar5 = 0x100 - (uint)*(byte *)((long)param_1 + uVar1);
  if (uVar4 <= (*(byte *)((long)param_1 + uVar1) ^ 0xff)) {
    iVar5 = 0;
  }
  return iVar5;
}



/* Address: 0x100a9216c | FUN_100a9216c */

void FUN_100a9216c(uint *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  ulong uVar2;
  size_t sVar3;
  undefined2 uVar4;
  uint uVar5;
  byte bVar6;
  ulong uVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  
  uVar7 = *(ulong *)(*(long *)(*(long *)(param_4 + 0x10) + -8) + 0x40);
  uVar2 = (uVar7 + 7 & 0xfffffffffffffff8) + 8;
  if (uVar2 <= uVar7) {
    uVar2 = uVar7;
  }
  if (uVar2 < 0x19) {
    uVar2 = 0x18;
  }
  uVar5 = 0xfc - (1U >> (ulong)(((uint)uVar2 & 3) << 3));
  if (3 < (uint)uVar2) {
    uVar5 = 0xfc;
  }
  sVar3 = uVar2 + 1;
  uVar9 = (uint)sVar3;
  if (uVar5 < param_3) {
    uVar1 = ((param_3 + ~(-1 << (ulong)(uVar9 << 3 & 0x1f))) - uVar5 >> (ulong)(uVar9 << 3 & 0x1f))
            + 1;
    bVar8 = 2;
    if (0xffff < uVar1) {
      bVar8 = 4;
    }
    if (uVar1 < 0x100) {
      bVar8 = 1 < uVar1;
    }
    bVar6 = 1;
    if (uVar9 < 4) {
      bVar6 = bVar8;
    }
  }
  else {
    bVar6 = 0;
  }
  if (uVar5 < param_2) {
    param_2 = param_2 + ~uVar5;
    if (uVar9 < 4) {
      iVar10 = (param_2 >> (ulong)(uVar9 << 3 & 0x1f)) + 1;
      if (uVar9 != 0) {
        uVar5 = param_2 & (-1 << (ulong)(uVar9 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar3);
        uVar4 = (undefined2)uVar5;
        if (uVar9 == 3) {
          *(undefined2 *)param_1 = uVar4;
          *(char *)((long)param_1 + 2) = (char)(uVar5 >> 0x10);
        }
        else if (uVar9 == 2) {
          *(undefined2 *)param_1 = uVar4;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,sVar3);
      *param_1 = param_2;
      iVar10 = 1;
    }
    if (bVar6 < 2) {
      if (bVar6 != 0) {
        *(char *)((long)param_1 + sVar3) = (char)iVar10;
      }
    }
    else if (bVar6 == 2) {
      *(short *)((long)param_1 + sVar3) = (short)iVar10;
    }
    else {
      *(int *)((long)param_1 + sVar3) = iVar10;
    }
  }
  else {
    if (bVar6 < 2) {
      if (bVar6 != 0) {
        *(undefined1 *)((long)param_1 + sVar3) = 0;
      }
    }
    else if (bVar6 == 2) {
      *(undefined2 *)((long)param_1 + sVar3) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar3) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + uVar2) = -(char)param_2;
    }
  }
  return;
}



/* Address: 0x100a92344 | FUN_100a92344 */

uint FUN_100a92344(uint *param_1,long param_2)

{
  ulong uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  
  uVar5 = *(ulong *)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 0x40);
  uVar1 = (uVar5 + 7 & 0xfffffffffffffff8) + 8;
  if (uVar1 <= uVar5) {
    uVar1 = uVar5;
  }
  if (uVar1 < 0x19) {
    uVar1 = 0x18;
  }
  bVar2 = *(byte *)((long)param_1 + uVar1);
  uVar3 = (uint)bVar2;
  if (2 < bVar2) {
    uVar6 = (uint)uVar1;
    uVar4 = 4;
    if (uVar6 < 4) {
      uVar4 = uVar6;
    }
    if ((int)uVar4 < 2) {
      if (uVar4 == 0) {
        return uVar3;
      }
      uVar4 = (uint)(byte)*param_1;
    }
    else if (uVar4 == 2) {
      uVar4 = (uint)(ushort)*param_1;
    }
    else if (uVar4 == 3) {
      uVar4 = (uint)(uint3)*param_1;
    }
    else {
      uVar4 = *param_1;
    }
    uVar3 = uVar4 | bVar2 - 3 << (ulong)((uVar6 & 3) << 3);
    if (3 < uVar6) {
      uVar3 = uVar4;
    }
    uVar3 = uVar3 + 3;
  }
  return uVar3;
}



/* Address: 0x100a923ec | FUN_100a923ec */

void FUN_100a923ec(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  undefined2 uVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar4 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40);
  uVar1 = (uVar4 + 7 & 0xfffffffffffffff8) + 8;
  if (uVar1 <= uVar4) {
    uVar1 = uVar4;
  }
  if (uVar1 < 0x19) {
    uVar1 = 0x18;
  }
  if (param_2 < 3) {
    *(char *)((long)param_1 + uVar1) = (char)param_2;
  }
  else {
    param_2 = param_2 - 3;
    uVar5 = (uint)uVar1;
    if (uVar5 < 4) {
      *(char *)((long)param_1 + uVar1) = (char)(param_2 >> (ulong)(uVar5 << 3 & 0x1f)) + '\x03';
      if (uVar5 != 0) {
        uVar2 = param_2 & (-1 << (ulong)(uVar5 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,uVar1);
        uVar3 = (undefined2)uVar2;
        if (uVar5 == 3) {
          *(undefined2 *)param_1 = uVar3;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar5 == 2) {
          *(undefined2 *)param_1 = uVar3;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      *(undefined1 *)((long)param_1 + uVar1) = 3;
      _bzero(param_1,uVar1);
      *param_1 = param_2;
    }
  }
  return;
}



/* Address: 0x100a924c8 | FUN_100a924c8 */

undefined8 * FUN_100a924c8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  _swift_retain();
  return param_1;
}



/* Address: 0x100a924f4 | FUN_100a924f4 */

void FUN_100a924f4(undefined8 *param_1)

{
  _swift_release(*param_1);
  return;
}



/* Address: 0x100a924fc | FUN_100a924fc */

undefined8 * FUN_100a924fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_retain();
  _swift_release(uVar1);
  return param_1;
}



/* Address: 0x100a92534 | FUN_100a92534 */

void FUN_100a92534(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x100a92540 | FUN_100a92540 */

undefined8 * FUN_100a92540(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_release(uVar1);
  return param_1;
}



/* Address: 0x100a92570 | thunk_FUN_1002c17b8 */

void thunk_FUN_1002c17b8(void)

{
  FUN_1002c17b8();
  return;
}



/* Address: 0x100a92574 | thunk_FUN_1002c1800 */

void thunk_FUN_1002c1800(void)

{
  FUN_1002c1800();
  return;
}



/* Address: 0x100a92578 | FUN_100a92578 */

void FUN_100a92578(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100a92584 | FUN_100a92584 */

void FUN_100a92584(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100a92590 | FUN_100a92590 */

void FUN_100a92590(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100a9259c | FUN_100a9259c */

void FUN_100a9259c(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100a925a8 | FUN_100a925a8 */

void FUN_100a925a8(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 8));
  _swift_errorRelease(*(undefined8 *)(param_1 + 0x10));
  if (*(long *)(param_1 + 0x18) != 0) {
    _swift_release(*(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}



/* Address: 0x100a925ec | FUN_100a925ec */

undefined1 * FUN_100a925ec(undefined1 *param_1,undefined1 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 8);
  _swift_retain(uVar3);
  _swift_errorRetain(uVar2);
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  *(undefined8 *)(param_1 + 8) = uVar3;
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(long *)(param_1 + 0x18) = lVar1;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    *(long *)(param_1 + 0x18) = lVar1;
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x100a92670 | FUN_100a92670 */

undefined1 * FUN_100a92670(undefined1 *param_1,undefined1 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  _swift_retain();
  _swift_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  _swift_errorRetain(uVar3);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  _swift_errorRelease(uVar2);
  lVar1 = *(long *)(param_2 + 0x18);
  if (*(long *)(param_1 + 0x18) == 0) {
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_2 + 0x20);
      *(long *)(param_1 + 0x18) = lVar1;
      *(undefined8 *)(param_1 + 0x20) = uVar2;
      _swift_retain();
      return param_1;
    }
  }
  else {
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_2 + 0x20);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      *(long *)(param_1 + 0x18) = lVar1;
      *(undefined8 *)(param_1 + 0x20) = uVar2;
      _swift_retain();
      _swift_release(uVar3);
      return param_1;
    }
    _swift_release(*(undefined8 *)(param_1 + 0x20));
  }
  lVar1 = *(long *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(long *)(param_1 + 0x18) = lVar1;
  return param_1;
}



/* Address: 0x100a92730 | FUN_100a92730 */

undefined1 * FUN_100a92730(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  _swift_release(*(undefined8 *)(param_1 + 8));
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar3;
  _swift_errorRelease(uVar1);
  lVar2 = *(long *)(param_2 + 0x18);
  if (*(long *)(param_1 + 0x18) == 0) {
    if (lVar2 != 0) {
      uVar1 = *(undefined8 *)(param_2 + 0x20);
      *(long *)(param_1 + 0x18) = lVar2;
      *(undefined8 *)(param_1 + 0x20) = uVar1;
      return param_1;
    }
  }
  else {
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_2 + 0x20);
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      *(long *)(param_1 + 0x18) = lVar2;
      *(undefined8 *)(param_1 + 0x20) = uVar3;
      _swift_release(uVar1);
      return param_1;
    }
    _swift_release(*(undefined8 *)(param_1 + 0x20));
  }
  lVar2 = *(long *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(long *)(param_1 + 0x18) = lVar2;
  return param_1;
}



/* Address: 0x100a927c8 | FUN_100a927c8 */

void FUN_100a927c8(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100a927d4 | FUN_100a927d4 */

undefined8 * FUN_100a927d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  lVar2 = param_2[3];
  if (lVar2 != 0) {
    uVar1 = param_2[4];
    param_1[3] = lVar2;
    param_1[4] = uVar1;
    _swift_retain(uVar1);
    return param_1;
  }
  lVar2 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = lVar2;
  return param_1;
}



/* Address: 0x100a9282c | FUN_100a9282c */

undefined8 * FUN_100a9282c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  lVar2 = param_2[3];
  if (param_1[3] == 0) {
    if (lVar2 != 0) {
      uVar1 = param_2[4];
      param_1[3] = lVar2;
      param_1[4] = uVar1;
      _swift_retain();
      return param_1;
    }
  }
  else {
    if (lVar2 != 0) {
      uVar1 = param_2[4];
      uVar3 = param_1[4];
      param_1[3] = lVar2;
      param_1[4] = uVar1;
      _swift_retain();
      _swift_release(uVar3);
      return param_1;
    }
    _swift_release(param_1[4]);
  }
  lVar2 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = lVar2;
  return param_1;
}



/* Address: 0x100a928c4 | FUN_100a928c4 */

undefined8 * FUN_100a928c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  lVar2 = param_2[3];
  if (param_1[3] == 0) {
    if (lVar2 != 0) {
      uVar1 = param_2[4];
      param_1[3] = lVar2;
      param_1[4] = uVar1;
      return param_1;
    }
  }
  else {
    if (lVar2 != 0) {
      uVar3 = param_2[4];
      uVar1 = param_1[4];
      param_1[3] = lVar2;
      param_1[4] = uVar3;
      _swift_release(uVar1);
      return param_1;
    }
    _swift_release(param_1[4]);
  }
  lVar2 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = lVar2;
  return param_1;
}



/* Address: 0x100a92958 | FUN_100a92958 */

void FUN_100a92958(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100a92964 | FUN_100a92964 */

void FUN_100a92964(void)

{
  FUN_100a9296c(0);
  return;
}



/* Address: 0x100a9296c | FUN_100a9296c */

void FUN_100a9296c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (DAT_100ff7db0 == 0) {
    puVar1 = &DAT_100ff7700;
    FUN_1000f8b08(&DAT_100ff7700,&DAT_100c92ec8);
    uVar2 = 0xff;
    FUN_100a8f134(0xff);
    _swift_getTupleTypeMetadata2(param_1,puVar1,uVar2,0,0);
    if (puVar1 == (undefined *)0x0) {
      DAT_100ff7db0 = param_1;
    }
  }
  return;
}



/* Address: 0x100a929e4 | FUN_100a929e4 */

void FUN_100a929e4(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100a929f0 | thunk_FUN_100a8fc50 */

void thunk_FUN_100a8fc50(void)

{
  FUN_100a8fc50();
  return;
}



/* Address: 0x100a929f4 | thunk_FUN_1002dd9cc */

void thunk_FUN_1002dd9cc(void)

{
  FUN_1002dd9cc();
  return;
}



/* Address: 0x100a929f8 | thunk_FUN_1005fc418 */

void thunk_FUN_1005fc418(void)

{
  FUN_1005fc418();
  return;
}



/* Address: 0x100a929fc | thunk_FUN_100a8fb20 */

void thunk_FUN_100a8fb20(void)

{
  char in_w3;
  
  if (in_w3 != -1) {
    FUN_100a8fbc4();
  }
  return;
}



/* Address: 0x100a92a00 | thunk_FUN_1002dd984 */

void thunk_FUN_1002dd984(void)

{
  thunk_FUN_1002dd984();
  return;
}


