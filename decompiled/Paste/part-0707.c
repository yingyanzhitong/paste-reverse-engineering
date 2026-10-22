/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1007b8bdc | FUN_1007b8bdc */

void FUN_1007b8bdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\x01') {
    _swift_bridgeObjectRetain();
    return;
  }
  _swift_retain(param_3);
  return;
}



/* Address: 0x1007b8bf4 | FUN_1007b8bf4 */

void FUN_1007b8bf4(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1007b8c00 | FUN_1007b8c00 */

void FUN_1007b8c00(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1007b8c0c | FUN_1007b8c0c */

void FUN_1007b8c0c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (DAT_100fe4b68 == 0) {
    uVar1 = 0xff;
    FUN_1007b8c70(0xff);
    puVar2 = PTR___type_metadata_for_Swift_UInt64_100eade90;
    _swift_getTupleTypeMetadata2(param_1,PTR___type_metadata_for_Swift_UInt64_100eade90,uVar1,0,0);
    if (puVar2 == (undefined *)0x0) {
      DAT_100fe4b68 = param_1;
    }
  }
  return;
}



/* Address: 0x1007b8c70 | FUN_1007b8c70 */

void FUN_1007b8c70(void)

{
  undefined8 uVar1;
  
  if (DAT_100fe4b70 != 0) {
    return;
  }
  uVar1 = 0x44000000;
  _swift_getFunctionTypeMetadata0(0x44000000,PTR___type_metadata_for____100eae0c8 + 8);
  DAT_100fe4b70 = uVar1;
  return;
}



/* Address: 0x1007b8cb8 | FUN_1007b8cb8 */

void FUN_1007b8cb8(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1007b8cc4 | FUN_1007b8cc4 */

void FUN_1007b8cc4(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1007b8cd0 | FUN_1007b8cd0 */

void FUN_1007b8cd0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe4b78 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c78758;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c78758,&DAT_100f01e38);
  DAT_100fe4b78 = pTVar1;
  return;
}



/* Address: 0x1007b8d10 | FUN_1007b8d10 */

void FUN_1007b8d10(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1007b568c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),param_2);
  return;
}



/* Address: 0x1007b8d34 | FUN_1007b8d34 */

void FUN_1007b8d34(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fe4b88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fe4b80;
  FUN_1000f8b08(&DAT_100fe4b80,&DAT_100c78168);
  puVar2 = PTR_Swift__Swift__PartialRangeFrom<undefined>_>Swift__RangeExpression_100ead200;
  _swift_getWitnessTable
            (PTR_Swift__Swift__PartialRangeFrom<undefined>_>Swift__RangeExpression_100ead200,puVar1)
  ;
  DAT_100fe4b88 = puVar2;
  return;
}



/* Address: 0x1007b8d84 | FUN_1007b8d84 */

void FUN_1007b8d84(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1007b8d90 | FUN_1007b8d90 */

void FUN_1007b8d90(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,*(undefined1 *)(param_1 + 1));
  return;
}



/* Address: 0x1007b8dbc | FUN_1007b8dbc */

void FUN_1007b8dbc(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1007b8dc8 | FUN_1007b8dc8 */

void FUN_1007b8dc8(long param_1)

{
  if (param_1 == 1) {
    return;
  }
  FUN_100004550();
  return;
}



/* Address: 0x1007b8dd8 | FUN_1007b8dd8 */

void FUN_1007b8dd8(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1007b8de4 | FUN_1007b8de4 */

void FUN_1007b8de4(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 != -1) {
    FUN_1007b8df8();
    return;
  }
  return;
}



/* Address: 0x1007b8df8 | FUN_1007b8df8 */

void FUN_1007b8df8(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 != '\0') {
    return;
  }
  _swift_release(param_2);
  return;
}



/* Address: 0x1007b8e0c | FUN_1007b8e0c */

void FUN_1007b8e0c(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 != '\0') {
    return;
  }
  _swift_retain(param_2);
  return;
}



/* Address: 0x1007b8e20 | FUN_1007b8e20 */

void FUN_1007b8e20(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1007b8e2c | FUN_1007b8e2c */

void FUN_1007b8e2c(void)

{
  char in_w3;
  
  if (in_w3 == '\x01') {
    _swift_bridgeObjectRelease();
    return;
  }
  FUN_1007b8df8();
  return;
}



/* Address: 0x1007b8e40 | FUN_1007b8e40 */

void FUN_1007b8e40(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1007b8e4c | FUN_1007b8e4c */

void FUN_1007b8e4c(void)

{
  char in_w3;
  
  if (in_w3 == '\x01') {
    _swift_bridgeObjectRetain();
    return;
  }
  FUN_1007b8e0c();
  return;
}



/* Address: 0x1007b8e60 | FUN_1007b8e60 */

void FUN_1007b8e60(undefined8 param_1)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_1007b3540(plVar1,param_1);
  return;
}



/* Address: 0x1007b8ed0 | FUN_1007b8ed0 */

void FUN_1007b8ed0(void)

{
  FUN_1007b4944();
  return;
}



/* Address: 0x1007b8ed8 | FUN_1007b8ed8 */

void FUN_1007b8ed8(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1007b8ee4 | FUN_1007b8ee4 */

void FUN_1007b8ee4(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1007b8ef0 | FUN_1007b8ef0 */

void FUN_1007b8ef0(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1007b8efc | FUN_1007b8efc */

void FUN_1007b8efc(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1007b8f08 | FUN_1007b8f08 */

void FUN_1007b8f08(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    _swift_release(*(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}



/* Address: 0x1007b8f1c | thunk_FUN_1007b8f20 */

undefined8 * thunk_FUN_1007b8f20(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
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



/* Address: 0x1007b8f20 | FUN_1007b8f20 */

undefined8 * FUN_1007b8f20(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
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



/* Address: 0x1007b8f78 | thunk_FUN_1007b8f7c */

undefined8 * thunk_FUN_1007b8f7c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
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



/* Address: 0x1007b8f7c | FUN_1007b8f7c */

undefined8 * FUN_1007b8f7c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
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



/* Address: 0x1007b9014 | thunk_FUN_1007b9018 */

undefined8 * thunk_FUN_1007b9018(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
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



/* Address: 0x1007b9018 | FUN_1007b9018 */

undefined8 * FUN_1007b9018(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
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



/* Address: 0x1007b90ac | thunk_FUN_1007b90b0 */

int thunk_FUN_1007b90b0(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[10] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x1007b90b0 | FUN_1007b90b0 */

int FUN_1007b90b0(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[10] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x1007b910c | thunk_FUN_1007b9110 */

void thunk_FUN_1007b9110(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x7fffffff) {
    if (0x7ffffffe < param_3) {
      *(undefined1 *)(param_1 + 5) = 0;
    }
    if (param_2 != 0) {
      param_1[3] = (ulong)param_2;
      return;
    }
  }
  else {
    param_1[2] = 0;
    param_1[1] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    *param_1 = (ulong)(param_2 + 0x80000001);
    if (0x7ffffffe < param_3) {
      *(undefined1 *)(param_1 + 5) = 1;
    }
  }
  return;
}



/* Address: 0x1007b9110 | FUN_1007b9110 */

void FUN_1007b9110(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x7fffffff) {
    if (0x7ffffffe < param_3) {
      *(undefined1 *)(param_1 + 5) = 0;
    }
    if (param_2 != 0) {
      param_1[3] = (ulong)param_2;
      return;
    }
  }
  else {
    param_1[2] = 0;
    param_1[1] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    *param_1 = (ulong)(param_2 + 0x80000001);
    if (0x7ffffffe < param_3) {
      *(undefined1 *)(param_1 + 5) = 1;
    }
  }
  return;
}



/* Address: 0x1007b916c | FUN_1007b916c */

void FUN_1007b916c(undefined8 *param_1)

{
  undefined8 local_18;
  
  local_18 = *param_1;
  _swift_getFunctionTypeMetadata
            (0x46000001,&local_18,&DAT_100c78268,PTR___type_metadata_for_Swift_Int_100eac6f8);
  Swift::Optional::typeMetadataAccessor();
  return;
}



/* Address: 0x1007b91b8 | FUN_1007b91b8 */

undefined1  [16] FUN_1007b91b8(Mutex param_1)

{
  ulong uVar1;
  Mutex MVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  long local_28;
  
  uVar1 = 0xff;
  FUN_1007b8cc4(0xff,*(undefined8 *)(param_1.unknown + 0x50),*(undefined8 *)(param_1.unknown + 0x58)
                ,*(undefined8 *)(param_1.unknown + 0x60));
  MVar2 = Synchronization::Mutex::typeMetadataAccessor();
  if (uVar1 < 0x40) {
    local_28 = *(long *)(MVar2.unknown + -8) + 0x40;
    uVar3 = 0;
    _swift_initClassMetadata2(param_1.unknown,0,1,&local_28,param_1.unknown + 0x68);
    if (param_1.unknown == (undefined *)0x0) {
      param_1.unknown = (undefined *)0x0;
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0x3f;
    param_1 = MVar2;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = param_1.unknown;
  return auVar4;
}



/* Address: 0x1007b9238 | FUN_1007b9238 */

void FUN_1007b9238(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1007b9244 | FUN_1007b9244 */

Mutex FUN_1007b9244(undefined8 *param_1)

{
  Mutex MVar1;
  
  if (PTR__swift_runtimeSupportsNoncopyableTypes_100eae408 != (undefined *)0x0) {
    FUN_1007b8cc4(0xff,*param_1,param_1[1],param_1[2]);
    MVar1 = Synchronization::Mutex::typeMetadataAccessor();
    return (Mutex)MVar1.unknown;
  }
  return (Mutex)(PTR___type_metadata_for____100eae0c8 + 8);
}



/* Address: 0x1007b9250 | FUN_1007b9250 */

void FUN_1007b9250(undefined8 *param_1)

{
  FUN_1007b8cc4(0xff,*param_1,param_1[1],param_1[2]);
  Synchronization::Mutex::typeMetadataAccessor();
  return;
}



/* Address: 0x1007b928c | FUN_1007b928c */

void FUN_1007b928c(long param_1)

{
  long lVar1;
  ulong uVar2;
  long local_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  FUN_1007b8aa0(0x13f,uVar2,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  if (uVar2 < 0x40) {
    local_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0,1,&local_28,param_1 + 0x28);
  }
  return;
}



/* Address: 0x1007b92fc | FUN_1007b92fc */

void FUN_1007b92fc(int *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  
  lVar3 = *(long *)(param_2 + 0x18);
  lVar6 = *(long *)(lVar3 + -8);
  uVar4 = (ulong)*(byte *)(lVar6 + 0x50);
  lVar2 = *(long *)(lVar6 + 0x40);
  if (*(int *)(lVar6 + 0x54) == 0) {
    lVar2 = lVar2 + 1;
  }
  uVar5 = (lVar2 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)) + 0x27 & 0xfffffffffffffff8) + 8;
  if (uVar5 < 0x91) {
    uVar5 = 0x90;
  }
  uVar1 = (uint)*(byte *)((long)param_1 + uVar5);
  if (2 < *(byte *)((long)param_1 + uVar5) && (uVar5 & 0xffffffff) != 0) {
    uVar1 = *param_1 + 3;
  }
  if (uVar1 != 2) {
    if (uVar1 == 1) {
      puVar7 = (undefined8 *)((long)param_1 + 9U & 0xfffffffffffffff8);
      _swift_release(*puVar7);
      uVar5 = (long)puVar7 + uVar4 + 8 & ~uVar4;
      uVar4 = uVar5;
      (**(code **)(lVar6 + 0x30))(uVar5,1,lVar3);
      if ((int)uVar4 == 0) {
        (**(code **)(lVar6 + 8))(uVar5,lVar3);
      }
      puVar7 = (undefined8 *)(lVar2 + uVar5 + 7 & 0xfffffffffffffff8);
      FUN_1007b8ba0(*puVar7,puVar7[1],puVar7[2],*(undefined1 *)(puVar7 + 3));
      return;
    }
    if (*(long *)(param_1 + 6) != 0) {
      _swift_release(*(undefined8 *)(param_1 + 8));
    }
    FUN_1007b8ba0(*(undefined8 *)(param_1 + 0xc),*(undefined8 *)(param_1 + 0xe),
                  *(undefined8 *)(param_1 + 0x10),(char)param_1[0x12]);
    _swift_release(*(undefined8 *)(param_1 + 0x14));
    _swift_release(*(undefined8 *)(param_1 + 0x18));
    _swift_release(*(undefined8 *)(param_1 + 0x1a));
    return;
  }
  return;
}



/* Address: 0x1007b9460 | FUN_1007b9460 */

void FUN_1007b9460(undefined8 *param_1,int *param_2,long param_3)

{
  ulong uVar1;
  void *pvVar2;
  undefined1 uVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 *puVar6;
  size_t sVar7;
  undefined8 *puVar8;
  long lVar9;
  void *pvVar10;
  void *pvVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar9 = *(long *)(param_3 + 0x18);
  lVar12 = *(long *)(lVar9 + -8);
  uVar4 = (ulong)*(byte *)(lVar12 + 0x50);
  sVar7 = *(size_t *)(lVar12 + 0x40);
  if (*(int *)(lVar12 + 0x54) == 0) {
    sVar7 = sVar7 + 1;
  }
  uVar1 = (sVar7 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)) + 0x27 & 0xfffffffffffffff8) + 8;
  if (uVar1 < 0x91) {
    uVar1 = 0x90;
  }
  uVar5 = (uint)*(byte *)((long)param_2 + uVar1);
  if (2 < *(byte *)((long)param_2 + uVar1) && (uVar1 & 0xffffffff) != 0) {
    uVar5 = *param_2 + 3;
  }
  if (uVar5 == 2) {
    *(short *)param_1 = (short)*param_2;
    *(undefined1 *)((long)param_1 + 2) = *(undefined1 *)((long)param_2 + 2);
    uVar3 = 2;
  }
  else if (uVar5 == 1) {
    *(char *)param_1 = (char)*param_2;
    *(undefined1 *)((long)param_1 + 1) = *(undefined1 *)((long)param_2 + 1);
    puVar6 = (undefined8 *)((ulong)((long)param_1 + 9U) & 0xfffffffffffffff8);
    puVar8 = (undefined8 *)((long)param_2 + 9U & 0xfffffffffffffff8);
    *puVar6 = *puVar8;
    pvVar10 = (void *)((long)puVar6 + uVar4 + 8 & ~uVar4);
    pvVar11 = (void *)((long)puVar8 + uVar4 + 8 & ~uVar4);
    pvVar2 = pvVar11;
    (**(code **)(lVar12 + 0x30))(pvVar11,1,lVar9);
    if ((int)pvVar2 == 0) {
      (**(code **)(lVar12 + 0x20))(pvVar10,pvVar11,lVar9);
      (**(code **)(lVar12 + 0x38))(pvVar10,0,1,lVar9);
    }
    else {
      _memcpy(pvVar10,pvVar11,sVar7);
    }
    puVar6 = (undefined8 *)((long)pvVar10 + sVar7 + 7 & 0xfffffffffffffff8);
    puVar8 = (undefined8 *)((long)pvVar11 + sVar7 + 7 & 0xfffffffffffffff8);
    uVar14 = puVar8[1];
    uVar13 = *puVar8;
    uVar15 = *(undefined8 *)((long)puVar8 + 9);
    *(undefined8 *)((long)puVar6 + 0x11) = *(undefined8 *)((long)puVar8 + 0x11);
    *(undefined8 *)((long)puVar6 + 9) = uVar15;
    puVar6[1] = uVar14;
    *puVar6 = uVar13;
    *(undefined8 *)((long)pvVar10 + sVar7 + 0x27 & 0xfffffffffffffff8) =
         *(undefined8 *)((long)pvVar11 + sVar7 + 0x27 & 0xfffffffffffffff8);
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
    uVar13 = *(undefined8 *)(param_2 + 0x18);
    uVar15 = *(undefined8 *)(param_2 + 0x1e);
    uVar14 = *(undefined8 *)(param_2 + 0x1c);
    param_1[0xd] = *(undefined8 *)(param_2 + 0x1a);
    param_1[0xc] = uVar13;
    param_1[0xf] = uVar15;
    param_1[0xe] = uVar14;
    uVar13 = *(undefined8 *)(param_2 + 0x20);
    param_1[0x11] = *(undefined8 *)(param_2 + 0x22);
    param_1[0x10] = uVar13;
    uVar13 = *(undefined8 *)(param_2 + 8);
    uVar15 = *(undefined8 *)(param_2 + 0xe);
    uVar14 = *(undefined8 *)(param_2 + 0xc);
    param_1[5] = *(undefined8 *)(param_2 + 10);
    param_1[4] = uVar13;
    param_1[7] = uVar15;
    param_1[6] = uVar14;
    uVar15 = *(undefined8 *)(param_2 + 0x10);
    uVar14 = *(undefined8 *)(param_2 + 0x16);
    uVar13 = *(undefined8 *)(param_2 + 0x14);
    param_1[9] = *(undefined8 *)(param_2 + 0x12);
    param_1[8] = uVar15;
    param_1[0xb] = uVar14;
    param_1[10] = uVar13;
    uVar15 = *(undefined8 *)param_2;
    uVar14 = *(undefined8 *)(param_2 + 6);
    uVar13 = *(undefined8 *)(param_2 + 4);
    param_1[1] = *(undefined8 *)(param_2 + 2);
    *param_1 = uVar15;
    param_1[3] = uVar14;
    param_1[2] = uVar13;
  }
  *(undefined1 *)((long)param_1 + uVar1) = uVar3;
  return;
}



/* Address: 0x1007b9630 | FUN_1007b9630 */

int * FUN_1007b9630(int *param_1,int *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  void *pvVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  size_t sVar7;
  long lVar8;
  void *pvVar9;
  undefined8 *puVar10;
  ulong uVar11;
  void *pvVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  if (param_1 != param_2) {
    lVar8 = *(long *)(param_3 + 0x18);
    lVar13 = *(long *)(lVar8 + -8);
    uVar14 = (ulong)*(byte *)(lVar13 + 0x50);
    sVar7 = *(size_t *)(lVar13 + 0x40);
    if (*(int *)(lVar13 + 0x54) == 0) {
      sVar7 = sVar7 + 1;
    }
    uVar1 = (sVar7 + (uVar14 + 0x10 & (uVar14 ^ 0xffffffffffffffff)) + 0x27 & 0xfffffffffffffff8) +
            8;
    if (uVar1 < 0x91) {
      uVar1 = 0x90;
    }
    uVar5 = (uint)*(byte *)((long)param_1 + uVar1);
    if (2 < *(byte *)((long)param_1 + uVar1) && (uVar1 & 0xffffffff) != 0) {
      uVar5 = *param_1 + 3;
    }
    uVar15 = ~uVar14;
    if (uVar5 != 2) {
      if (uVar5 == 1) {
        puVar10 = (undefined8 *)((long)param_1 + 9U & 0xfffffffffffffff8);
        _swift_release(*puVar10);
        uVar11 = (long)puVar10 + uVar14 + 8 & uVar15;
        uVar2 = uVar11;
        (**(code **)(lVar13 + 0x30))(uVar11,1,lVar8);
        if ((int)uVar2 == 0) {
          (**(code **)(lVar13 + 8))(uVar11,lVar8);
        }
        puVar10 = (undefined8 *)(sVar7 + uVar11 + 7 & 0xfffffffffffffff8);
        FUN_1007b8ba0(*puVar10,puVar10[1],puVar10[2],*(undefined1 *)(puVar10 + 3));
      }
      else {
        if (*(long *)(param_1 + 6) != 0) {
          _swift_release(*(undefined8 *)(param_1 + 8));
        }
        FUN_1007b8ba0(*(undefined8 *)(param_1 + 0xc),*(undefined8 *)(param_1 + 0xe),
                      *(undefined8 *)(param_1 + 0x10),(char)param_1[0x12]);
        _swift_release(*(undefined8 *)(param_1 + 0x14));
        _swift_release(*(undefined8 *)(param_1 + 0x18));
        _swift_release(*(undefined8 *)(param_1 + 0x1a));
      }
    }
    uVar5 = (uint)*(byte *)((long)param_2 + uVar1);
    if ((uVar1 & 0xffffffff) != 0 && 2 < *(byte *)((long)param_2 + uVar1)) {
      uVar5 = *param_2 + 3;
    }
    if (uVar5 == 2) {
      *(short *)param_1 = (short)*param_2;
      *(undefined1 *)((long)param_1 + 2) = *(undefined1 *)((long)param_2 + 2);
      uVar4 = 2;
    }
    else if (uVar5 == 1) {
      *(char *)param_1 = (char)*param_2;
      *(undefined1 *)((long)param_1 + 1) = *(undefined1 *)((long)param_2 + 1);
      puVar10 = (undefined8 *)((long)param_1 + 9U & 0xfffffffffffffff8);
      puVar6 = (undefined8 *)((long)param_2 + 9U & 0xfffffffffffffff8);
      *puVar10 = *puVar6;
      pvVar9 = (void *)((long)puVar10 + uVar14 + 8 & uVar15);
      pvVar12 = (void *)((long)puVar6 + uVar14 + 8 & uVar15);
      pvVar3 = pvVar12;
      (**(code **)(lVar13 + 0x30))(pvVar12,1,lVar8);
      if ((int)pvVar3 == 0) {
        (**(code **)(lVar13 + 0x20))(pvVar9,pvVar12,lVar8);
        (**(code **)(lVar13 + 0x38))(pvVar9,0,1,lVar8);
      }
      else {
        _memcpy(pvVar9,pvVar12,sVar7);
      }
      puVar10 = (undefined8 *)((long)pvVar9 + sVar7 + 7 & 0xfffffffffffffff8);
      puVar6 = (undefined8 *)((long)pvVar12 + sVar7 + 7 & 0xfffffffffffffff8);
      uVar17 = puVar6[1];
      uVar16 = *puVar6;
      uVar18 = *(undefined8 *)((long)puVar6 + 9);
      *(undefined8 *)((long)puVar10 + 0x11) = *(undefined8 *)((long)puVar6 + 0x11);
      *(undefined8 *)((long)puVar10 + 9) = uVar18;
      puVar10[1] = uVar17;
      *puVar10 = uVar16;
      *(undefined8 *)((long)pvVar9 + sVar7 + 0x27 & 0xfffffffffffffff8) =
           *(undefined8 *)((long)pvVar12 + sVar7 + 0x27 & 0xfffffffffffffff8);
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
      uVar16 = *(undefined8 *)(param_2 + 0x18);
      uVar18 = *(undefined8 *)(param_2 + 0x1e);
      uVar17 = *(undefined8 *)(param_2 + 0x1c);
      *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
      *(undefined8 *)(param_1 + 0x18) = uVar16;
      *(undefined8 *)(param_1 + 0x1e) = uVar18;
      *(undefined8 *)(param_1 + 0x1c) = uVar17;
      uVar16 = *(undefined8 *)(param_2 + 0x20);
      *(undefined8 *)(param_1 + 0x22) = *(undefined8 *)(param_2 + 0x22);
      *(undefined8 *)(param_1 + 0x20) = uVar16;
      uVar16 = *(undefined8 *)(param_2 + 8);
      uVar18 = *(undefined8 *)(param_2 + 0xe);
      uVar17 = *(undefined8 *)(param_2 + 0xc);
      *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
      *(undefined8 *)(param_1 + 8) = uVar16;
      *(undefined8 *)(param_1 + 0xe) = uVar18;
      *(undefined8 *)(param_1 + 0xc) = uVar17;
      uVar18 = *(undefined8 *)(param_2 + 0x10);
      uVar17 = *(undefined8 *)(param_2 + 0x16);
      uVar16 = *(undefined8 *)(param_2 + 0x14);
      *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
      *(undefined8 *)(param_1 + 0x10) = uVar18;
      *(undefined8 *)(param_1 + 0x16) = uVar17;
      *(undefined8 *)(param_1 + 0x14) = uVar16;
      uVar18 = *(undefined8 *)param_2;
      uVar17 = *(undefined8 *)(param_2 + 6);
      uVar16 = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar18;
      *(undefined8 *)(param_1 + 6) = uVar17;
      *(undefined8 *)(param_1 + 4) = uVar16;
    }
    *(undefined1 *)((long)param_1 + uVar1) = uVar4;
  }
  return param_1;
}



/* Address: 0x1007b98d8 | FUN_1007b98d8 */

int FUN_1007b98d8(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  
  lVar4 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  lVar5 = *(long *)(lVar4 + 0x40);
  if (*(int *)(lVar4 + 0x54) == 0) {
    lVar5 = lVar5 + 1;
  }
  uVar1 = (lVar5 + ((ulong)*(byte *)(lVar4 + 0x50) + 0x10 &
                   ((ulong)*(byte *)(lVar4 + 0x50) ^ 0xffffffffffffffff)) + 0x27 &
          0xfffffffffffffff8) + 8;
  if (uVar1 < 0x91) {
    uVar1 = 0x90;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    uVar8 = uVar1 | 1;
    uVar6 = (uint)uVar8;
    uVar9 = 2;
    uVar7 = uVar9;
    if (uVar6 < 4) {
      uVar7 = (param_2 + 2 >> 8) + 1;
    }
    if (0xffff < uVar7) {
      uVar9 = 4;
    }
    if (uVar7 < 0x100) {
      uVar9 = 1;
    }
    uVar2 = 0;
    if (1 < uVar7) {
      uVar2 = uVar9;
    }
    if (uVar2 < 2) {
      if ((uVar2 != 0) &&
         (uVar9 = (uint)*(byte *)((long)param_1 + uVar8), *(byte *)((long)param_1 + uVar8) != 0))
      goto LAB_1007b9988;
    }
    else if (uVar2 == 2) {
      uVar9 = (uint)*(ushort *)((long)param_1 + uVar8);
      if (*(ushort *)((long)param_1 + uVar8) != 0) {
LAB_1007b9988:
        uVar9 = uVar9 - 1 << (ulong)((uVar6 & 3) << 3);
        if (uVar6 < 4) {
          uVar7 = (uint)(byte)*param_1;
        }
        else {
          uVar7 = *param_1;
          uVar9 = 0;
        }
        return (uVar7 | uVar9) + 0xfe;
      }
    }
    else {
      uVar9 = *(uint *)((long)param_1 + uVar8);
      if (uVar9 != 0) goto LAB_1007b9988;
    }
  }
  iVar3 = 0;
  if (2 < *(byte *)((long)param_1 + uVar1)) {
    iVar3 = (*(byte *)((long)param_1 + uVar1) ^ 0xff) + 1;
  }
  return iVar3;
}



/* Address: 0x1007b99d4 | FUN_1007b99d4 */

void FUN_1007b99d4(uint *param_1,uint param_2,uint param_3,long param_4)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  
  lVar5 = *(long *)(*(long *)(param_4 + 0x18) + -8);
  lVar6 = *(long *)(lVar5 + 0x40);
  if (*(int *)(lVar5 + 0x54) == 0) {
    lVar6 = lVar6 + 1;
  }
  uVar1 = (lVar6 + ((ulong)*(byte *)(lVar5 + 0x50) + 0x10 &
                   ((ulong)*(byte *)(lVar5 + 0x50) ^ 0xffffffffffffffff)) + 0x27 &
          0xfffffffffffffff8) + 8;
  if (uVar1 < 0x91) {
    uVar1 = 0x90;
  }
  uVar8 = uVar1 | 1;
  if (param_3 < 0xfe) {
    uVar3 = 0;
  }
  else {
    uVar7 = 2;
    uVar2 = uVar7;
    if ((uint)uVar8 < 4) {
      uVar2 = (param_3 + 2 >> 8) + 1;
    }
    if (0xffff < uVar2) {
      uVar7 = 4;
    }
    if (uVar2 < 0x100) {
      uVar7 = 1;
    }
    uVar3 = 0;
    if (1 < uVar2) {
      uVar3 = uVar7;
    }
  }
  if (param_2 < 0xfe) {
    if (uVar3 < 2) {
      if (uVar3 != 0) {
        *(undefined1 *)((long)param_1 + uVar8) = 0;
      }
    }
    else if (uVar3 == 2) {
      *(undefined2 *)((long)param_1 + uVar8) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + uVar8) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + uVar1) = -(char)param_2;
    }
  }
  else {
    param_2 = param_2 - 0xfe;
    _bzero(param_1,uVar8);
    iVar4 = 1;
    if ((uint)uVar8 < 4) {
      iVar4 = (param_2 >> 8) + 1;
      *(char *)param_1 = (char)param_2;
    }
    else {
      *param_1 = param_2;
    }
    if (uVar3 < 2) {
      if (uVar3 != 0) {
        *(char *)((long)param_1 + uVar8) = (char)iVar4;
      }
    }
    else if (uVar3 == 2) {
      *(short *)((long)param_1 + uVar8) = (short)iVar4;
    }
    else {
      *(int *)((long)param_1 + uVar8) = iVar4;
    }
  }
  return;
}



/* Address: 0x1007b9b2c | FUN_1007b9b2c */

void FUN_1007b9b2c(undefined8 param_1)

{
  FUN_1007bfa94(param_1,FUN_1007b8aa0);
  return;
}



/* Address: 0x1007b9b38 | FUN_1007b9b38 */

void FUN_1007b9b38(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1007b9b44 | FUN_1007b9b44 */

void FUN_1007b9b44(void)

{
  FUN_1007b8c70(0);
  return;
}



/* Address: 0x1007b9b4c | FUN_1007b9b4c */

undefined1  [16] FUN_1007b9b4c(long param_1)

{
  Optional OVar1;
  undefined7 extraout_var;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_40 [20];
  undefined4 local_2c;
  
  uVar3 = *(ulong *)(param_1 + 0x18);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar2 = CONCAT71(extraout_var,OVar1.value);
  if (uVar3 < 0x40) {
    _swift_getTupleTypeLayout3
              (auStack_40,&DAT_100c782e8,*(long *)(lVar2 + -8) + 0x40,&DAT_100c78300);
    _swift_initEnumMetadataSingleCase(param_1,0,auStack_40);
    lVar2 = 0;
    uVar4 = 0;
    *(undefined4 *)(*(long *)(param_1 + -8) + 0x54) = local_2c;
  }
  else {
    uVar4 = 0x3f;
  }
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = lVar2;
  return auVar5;
}



/* Address: 0x1007b9bd0 | FUN_1007b9bd0 */

long * FUN_1007b9bd0(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  void *pvVar5;
  ulong uVar6;
  undefined8 *puVar7;
  size_t sVar8;
  long lVar9;
  void *pvVar10;
  void *pvVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  
  lVar9 = *(long *)(param_3 + 0x18);
  lVar13 = *(long *)(lVar9 + -8);
  uVar6 = (ulong)*(uint *)(lVar13 + 0x50) & 0xff;
  sVar8 = *(size_t *)(lVar13 + 0x40);
  if (*(int *)(lVar13 + 0x54) == 0) {
    sVar8 = sVar8 + 1;
  }
  lVar1 = sVar8 + 7;
  if (((uint)uVar6 < 8 && (*(uint *)(lVar13 + 0x50) & 0x100000) == 0) &&
      ((-uVar6 - 9 | uVar6) - lVar1 | 7) < 0x19) {
    *param_1 = *param_2;
    pvVar10 = (void *)((long)param_1 + uVar6 + 8 & (uVar6 ^ 0xffffffffffffffff));
    pvVar11 = (void *)((long)param_2 + uVar6 + 8 & (uVar6 ^ 0xffffffffffffffff));
    pvVar5 = pvVar11;
    (**(code **)(lVar13 + 0x30))(pvVar11,1,lVar9);
    if ((int)pvVar5 == 0) {
      (**(code **)(lVar13 + 0x10))(pvVar10,pvVar11,lVar9);
      (**(code **)(lVar13 + 0x38))(pvVar10,0,1,lVar9);
    }
    else {
      _memcpy(pvVar10,pvVar11,sVar8);
    }
    puVar14 = (undefined8 *)(lVar1 + (long)pvVar10 & 0xfffffffffffffff8);
    puVar7 = (undefined8 *)(lVar1 + (long)pvVar11 & 0xfffffffffffffff8);
    uVar2 = *puVar7;
    uVar3 = puVar7[1];
    uVar12 = puVar7[2];
    uVar4 = *(undefined1 *)(puVar7 + 3);
    FUN_1007b8bdc(uVar2,uVar3,uVar12,uVar4);
    *puVar14 = uVar2;
    puVar14[1] = uVar3;
    puVar14[2] = uVar12;
    *(undefined1 *)(puVar14 + 3) = uVar4;
  }
  else {
    lVar9 = *param_2;
    *param_1 = lVar9;
    param_1 = (long *)(lVar9 + ((ulong)((uint)uVar6 & 0xf8 ^ 0x1f8) & uVar6 + 0x10));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1007b9d28 | FUN_1007b9d28 */

undefined8 * FUN_1007b9d28(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  size_t sVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  void *pvVar5;
  ulong uVar6;
  undefined8 *puVar7;
  void *pvVar8;
  void *pvVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  size_t sVar14;
  undefined8 *puVar15;
  
  *param_1 = *param_2;
  lVar11 = *(long *)(param_3 + 0x18);
  lVar13 = *(long *)(lVar11 + -8);
  uVar6 = (ulong)*(byte *)(lVar13 + 0x50);
  pvVar8 = (void *)(uVar6 + 8 + (long)param_1 & (uVar6 ^ 0xffffffffffffffff));
  pvVar9 = (void *)(uVar6 + 8 + (long)param_2 & (uVar6 ^ 0xffffffffffffffff));
  pvVar5 = pvVar9;
  (**(code **)(lVar13 + 0x30))(pvVar9,1,lVar11);
  if ((int)pvVar5 == 0) {
    (**(code **)(lVar13 + 0x10))(pvVar8,pvVar9,lVar11);
    (**(code **)(lVar13 + 0x38))(pvVar8,0,1,lVar11);
    iVar10 = *(int *)(lVar13 + 0x54);
    sVar14 = *(size_t *)(lVar13 + 0x40);
  }
  else {
    iVar10 = *(int *)(lVar13 + 0x54);
    sVar14 = *(size_t *)(lVar13 + 0x40);
    sVar1 = sVar14;
    if (iVar10 == 0) {
      sVar1 = sVar14 + 1;
    }
    _memcpy(pvVar8,pvVar9,sVar1);
  }
  if (iVar10 == 0) {
    sVar14 = sVar14 + 1;
  }
  puVar15 = (undefined8 *)((long)pvVar8 + sVar14 + 7 & 0xfffffffffffffff8);
  puVar7 = (undefined8 *)((long)pvVar9 + sVar14 + 7 & 0xfffffffffffffff8);
  uVar2 = *puVar7;
  uVar3 = puVar7[1];
  uVar12 = puVar7[2];
  uVar4 = *(undefined1 *)(puVar7 + 3);
  FUN_1007b8bdc(uVar2,uVar3,uVar12,uVar4);
  *puVar15 = uVar2;
  puVar15[1] = uVar3;
  puVar15[2] = uVar12;
  *(undefined1 *)(puVar15 + 3) = uVar4;
  return param_1;
}



/* Address: 0x1007b9e38 | FUN_1007b9e38 */

undefined8 * FUN_1007b9e38(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  void *pvVar7;
  void *pvVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  size_t sVar12;
  void *pvVar13;
  void *pvVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 *puVar18;
  code *pcVar19;
  
  *param_1 = *param_2;
  lVar15 = *(long *)(param_3 + 0x18);
  lVar17 = *(long *)(lVar15 + -8);
  uVar10 = (ulong)*(byte *)(lVar17 + 0x50);
  pvVar13 = (void *)(uVar10 + 8 + (long)param_1 & (uVar10 ^ 0xffffffffffffffff));
  pvVar14 = (void *)(uVar10 + 8 + (long)param_2 & (uVar10 ^ 0xffffffffffffffff));
  pcVar19 = *(code **)(lVar17 + 0x30);
  pvVar7 = pvVar13;
  (*pcVar19)(pvVar13,1,lVar15);
  pvVar8 = pvVar14;
  (*pcVar19)(pvVar14,1,lVar15);
  if ((int)pvVar7 == 0) {
    if ((int)pvVar8 == 0) {
      (**(code **)(lVar17 + 0x18))(pvVar13,pvVar14,lVar15);
      goto LAB_1007b9f0c;
    }
    (**(code **)(lVar17 + 8))(pvVar13,lVar15);
  }
  else if ((int)pvVar8 == 0) {
    (**(code **)(lVar17 + 0x10))(pvVar13,pvVar14,lVar15);
    (**(code **)(lVar17 + 0x38))(pvVar13,0,1,lVar15);
    goto LAB_1007b9f0c;
  }
  sVar12 = *(size_t *)(lVar17 + 0x40);
  if (*(int *)(lVar17 + 0x54) == 0) {
    sVar12 = sVar12 + 1;
  }
  _memcpy(pvVar13,pvVar14,sVar12);
LAB_1007b9f0c:
  lVar15 = *(long *)(lVar17 + 0x40);
  if (*(int *)(lVar17 + 0x54) == 0) {
    lVar15 = lVar15 + 1;
  }
  puVar18 = (undefined8 *)((long)pvVar13 + lVar15 + 7 & 0xfffffffffffffff8);
  puVar11 = (undefined8 *)((long)pvVar14 + lVar15 + 7 & 0xfffffffffffffff8);
  uVar1 = *puVar11;
  uVar3 = puVar11[1];
  uVar16 = puVar11[2];
  uVar5 = *(undefined1 *)(puVar11 + 3);
  FUN_1007b8bdc(uVar1,uVar3,uVar16,uVar5);
  uVar2 = *puVar18;
  uVar4 = puVar18[1];
  uVar9 = puVar18[2];
  *puVar18 = uVar1;
  puVar18[1] = uVar3;
  puVar18[2] = uVar16;
  uVar6 = *(undefined1 *)(puVar18 + 3);
  *(undefined1 *)(puVar18 + 3) = uVar5;
  FUN_1007b8ba0(uVar2,uVar4,uVar9,uVar6);
  return param_1;
}



/* Address: 0x1007b9fa4 | FUN_1007b9fa4 */

void FUN_1007b9fa4(void)

{
  Optional OVar1;
  UnsafeContinuation UVar2;
  undefined8 uVar3;
  
  Swift::Optional::typeMetadataAccessor();
  FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
  UVar2 = Swift::UnsafeContinuation::typeMetadataAccessor();
  OVar1 = Swift::Optional::typeMetadataAccessor();
  uVar3 = 0xff;
  FUN_1007c0680(0xff,&DAT_100fe4b60,FUN_1007961c8);
  _swift_getTupleTypeMetadata3
            (0,UVar2.unknown,OVar1.value,uVar3,"consumerContinuation failure onTerminations ",0);
  return;
}



/* Address: 0x1007ba040 | FUN_1007ba040 */

void FUN_1007ba040(undefined8 param_1,undefined8 param_2)

{
  FUN_1007ba16c(param_1,param_2,FUN_1007ba1b4);
  return;
}



/* Address: 0x1007ba04c | FUN_1007ba04c */

void FUN_1007ba04c(void)

{
  FUN_1007ba22c();
  return;
}



/* Address: 0x1007ba058 | FUN_1007ba058 */

void FUN_1007ba058(void)

{
  FUN_1007ba2c4();
  return;
}



/* Address: 0x1007ba064 | FUN_1007ba064 */

void FUN_1007ba064(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar6 = param_2[5];
  uVar5 = param_2[4];
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x1007ba080 | FUN_1007ba080 */

void FUN_1007ba080(void)

{
  FUN_1007ba38c();
  return;
}



/* Address: 0x1007ba08c | thunk_FUN_1007bf7a8 */

int thunk_FUN_1007bf7a8(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7e < param_2) && (*(char *)((long)param_1 + 0x31) != '\0')) {
    return *param_1 + 0x7f;
  }
  uVar1 = (*(byte *)(param_1 + 0xc) & 0x7e | (uint)(*(byte *)(param_1 + 0xc) >> 7)) ^ 0x7f;
  if (0x7d < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}


