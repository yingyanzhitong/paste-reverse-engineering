/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100a0e220 | FUN_100a0e220 */

long * FUN_100a0e220(long *param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  NWEndpoint NVar3;
  long lVar4;
  long *plVar5;
  undefined7 extraout_var;
  undefined8 uVar6;
  ulong uVar7;
  
  lVar4 = 0;
  FUN_100a0de2c();
  uVar2 = *(uint *)(*(long *)(lVar4 + -8) + 0x50);
  if ((uVar2 >> 0x11 & 1) == 0) {
    plVar5 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,lVar4);
    if ((int)plVar5 == 2) {
      NVar3 = Network::NWEndpoint::typeMetadataAccessor();
      (**(code **)(*(long *)(CONCAT71(extraout_var,NVar3.value) + -8) + 0x10))
                (param_1,param_2,CONCAT71(extraout_var,NVar3.value));
      uVar6 = 2;
    }
    else if ((int)plVar5 == 1) {
      lVar1 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = lVar1;
      _swift_bridgeObjectRetain();
      uVar6 = 1;
    }
    else {
      lVar1 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = lVar1;
      param_1[2] = param_2[2];
      _swift_bridgeObjectRetain();
      uVar6 = 0;
    }
    _swift_storeEnumTagMultiPayload(param_1,lVar4,uVar6);
  }
  else {
    lVar4 = *param_2;
    *param_1 = lVar4;
    uVar7 = (ulong)uVar2 & 0xff;
    param_1 = (long *)(lVar4 + (uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x100a0e310 | FUN_100a0e310 */

void FUN_100a0e310(long param_1)

{
  NWEndpoint NVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined7 extraout_var;
  
  uVar3 = 0;
  FUN_100a0de2c(0);
  lVar4 = param_1;
  _swift_getEnumCaseMultiPayload(param_1,uVar3);
  iVar2 = (int)lVar4;
  if (iVar2 == 2) {
    NVar1 = Network::NWEndpoint::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x000100a0e378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(CONCAT71(extraout_var,NVar1.value) + -8) + 8))
              (param_1,CONCAT71(extraout_var,NVar1.value));
    return;
  }
  if ((iVar2 != 1) && (iVar2 != 0)) {
    return;
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  return;
}



/* Address: 0x100a0e388 | FUN_100a0e388 */

undefined8 * FUN_100a0e388(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  NWEndpoint NVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined7 extraout_var;
  
  uVar3 = 0;
  FUN_100a0de2c(0);
  puVar4 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,uVar3);
  if ((int)puVar4 == 2) {
    NVar2 = Network::NWEndpoint::typeMetadataAccessor();
    (**(code **)(*(long *)(CONCAT71(extraout_var,NVar2.value) + -8) + 0x10))
              (param_1,param_2,CONCAT71(extraout_var,NVar2.value));
  }
  else {
    if ((int)puVar4 == 1) {
      uVar1 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = uVar1;
    }
    else {
      uVar1 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = uVar1;
      param_1[2] = param_2[2];
    }
    _swift_bridgeObjectRetain();
  }
  _swift_storeEnumTagMultiPayload(param_1,uVar3,puVar4);
  return param_1;
}



/* Address: 0x100a0e434 | FUN_100a0e434 */

undefined8 * FUN_100a0e434(undefined8 *param_1,undefined8 *param_2)

{
  NWEndpoint NVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined7 extraout_var;
  
  if (param_1 != param_2) {
    FUN_100a0e500(param_1);
    uVar2 = 0;
    FUN_100a0de2c(0);
    puVar3 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,uVar2);
    if ((int)puVar3 == 2) {
      NVar1 = Network::NWEndpoint::typeMetadataAccessor();
      (**(code **)(*(long *)(CONCAT71(extraout_var,NVar1.value) + -8) + 0x10))
                (param_1,param_2,CONCAT71(extraout_var,NVar1.value));
    }
    else {
      if ((int)puVar3 == 1) {
        *param_1 = *param_2;
        param_1[1] = param_2[1];
      }
      else {
        *param_1 = *param_2;
        param_1[1] = param_2[1];
        param_1[2] = param_2[2];
      }
      _swift_bridgeObjectRetain();
    }
    _swift_storeEnumTagMultiPayload(param_1,uVar2,puVar3);
  }
  return param_1;
}



/* Address: 0x100a0e500 | FUN_100a0e500 */

undefined8 FUN_100a0e500(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100a0de2c();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Address: 0x100a0e53c | FUN_100a0e53c */

void * FUN_100a0e53c(void *param_1,void *param_2)

{
  NWEndpoint NVar1;
  long lVar2;
  undefined7 extraout_var;
  void *pvVar3;
  
  lVar2 = 0;
  FUN_100a0de2c();
  pvVar3 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,lVar2);
  if ((int)pvVar3 == 2) {
    NVar1 = Network::NWEndpoint::typeMetadataAccessor();
    (**(code **)(*(long *)(CONCAT71(extraout_var,NVar1.value) + -8) + 0x20))
              (param_1,param_2,CONCAT71(extraout_var,NVar1.value));
    _swift_storeEnumTagMultiPayload(param_1,lVar2,2);
    return param_1;
  }
  pvVar3 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(lVar2 + -8) + 0x40));
  return pvVar3;
}



/* Address: 0x100a0e5d8 | FUN_100a0e5d8 */

void * FUN_100a0e5d8(void *param_1,void *param_2)

{
  NWEndpoint NVar1;
  long lVar2;
  undefined7 extraout_var;
  void *pvVar3;
  
  if (param_1 != param_2) {
    FUN_100a0e500(param_1);
    lVar2 = 0;
    FUN_100a0de2c();
    pvVar3 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,lVar2);
    if ((int)pvVar3 != 2) {
      pvVar3 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(lVar2 + -8) + 0x40));
      return pvVar3;
    }
    NVar1 = Network::NWEndpoint::typeMetadataAccessor();
    (**(code **)(*(long *)(CONCAT71(extraout_var,NVar1.value) + -8) + 0x20))
              (param_1,param_2,CONCAT71(extraout_var,NVar1.value));
    _swift_storeEnumTagMultiPayload(param_1,lVar2,2);
  }
  return param_1;
}



/* Address: 0x100a0e684 | FUN_100a0e684 */

void FUN_100a0e684(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x100a0e690 | FUN_100a0e690 */

void FUN_100a0e690(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100a0de2c();
                    /* WARNING: Could not recover jumptable at 0x000100a0e6c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x30))(param_1,param_2,lVar1);
  return;
}



/* Address: 0x100a0e6cc | FUN_100a0e6cc */

void FUN_100a0e6cc(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x100a0e6d8 | FUN_100a0e6d8 */

void FUN_100a0e6d8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100a0de2c();
                    /* WARNING: Could not recover jumptable at 0x000100a0e714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,param_2,param_2,lVar1);
  return;
}



/* Address: 0x100a0e718 | FUN_100a0e718 */

void FUN_100a0e718(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100ff48e0,&TargetStructDescriptor_100cc9318);
  return;
}



/* Address: 0x100a0e72c | FUN_100a0e72c */

void FUN_100a0e72c(long param_1,ulong param_2)

{
  long lVar1;
  long local_28;
  
  lVar1 = 0x13f;
  FUN_100a0de2c();
  if (param_2 < 0x40) {
    local_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0x100,1,&local_28,param_1 + 0x10);
  }
  return;
}



/* Address: 0x100a0e794 | FUN_100a0e794 */

long * FUN_100a0e794(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  NWEndpoint NVar2;
  long *plVar3;
  long lVar4;
  undefined7 extraout_var;
  undefined8 uVar5;
  ulong uVar6;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    plVar3 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    if ((int)plVar3 == 2) {
      NVar2 = Network::NWEndpoint::typeMetadataAccessor();
      (**(code **)(*(long *)(CONCAT71(extraout_var,NVar2.value) + -8) + 0x10))
                (param_1,param_2,CONCAT71(extraout_var,NVar2.value));
      uVar5 = 2;
    }
    else if ((int)plVar3 == 1) {
      lVar4 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = lVar4;
      _swift_bridgeObjectRetain();
      uVar5 = 1;
    }
    else {
      lVar4 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = lVar4;
      param_1[2] = param_2[2];
      _swift_bridgeObjectRetain();
      uVar5 = 0;
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,uVar5);
  }
  else {
    lVar4 = *param_2;
    *param_1 = lVar4;
    uVar6 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar4 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x100a0e87c | FUN_100a0e87c */

void FUN_100a0e87c(long param_1)

{
  NWEndpoint NVar1;
  int iVar2;
  long lVar3;
  undefined7 extraout_var;
  
  lVar3 = param_1;
  _swift_getEnumCaseMultiPayload();
  iVar2 = (int)lVar3;
  if (iVar2 == 2) {
    NVar1 = Network::NWEndpoint::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x000100a0e8d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(CONCAT71(extraout_var,NVar1.value) + -8) + 8))
              (param_1,CONCAT71(extraout_var,NVar1.value));
    return;
  }
  if ((iVar2 != 1) && (iVar2 != 0)) {
    return;
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  return;
}



/* Address: 0x100a0e8e4 | FUN_100a0e8e4 */

undefined8 * FUN_100a0e8e4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  NWEndpoint NVar2;
  undefined8 *puVar3;
  undefined7 extraout_var;
  
  puVar3 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  if ((int)puVar3 == 2) {
    NVar2 = Network::NWEndpoint::typeMetadataAccessor();
    (**(code **)(*(long *)(CONCAT71(extraout_var,NVar2.value) + -8) + 0x10))
              (param_1,param_2,CONCAT71(extraout_var,NVar2.value));
  }
  else {
    if ((int)puVar3 == 1) {
      uVar1 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = uVar1;
    }
    else {
      uVar1 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = uVar1;
      param_1[2] = param_2[2];
    }
    _swift_bridgeObjectRetain();
  }
  _swift_storeEnumTagMultiPayload(param_1,param_3,puVar3);
  return param_1;
}



/* Address: 0x100a0e988 | FUN_100a0e988 */

undefined8 * FUN_100a0e988(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  NWEndpoint NVar1;
  undefined8 *puVar2;
  undefined7 extraout_var;
  
  if (param_1 != param_2) {
    FUN_100a0e500(param_1);
    puVar2 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    if ((int)puVar2 == 2) {
      NVar1 = Network::NWEndpoint::typeMetadataAccessor();
      (**(code **)(*(long *)(CONCAT71(extraout_var,NVar1.value) + -8) + 0x10))
                (param_1,param_2,CONCAT71(extraout_var,NVar1.value));
    }
    else {
      if ((int)puVar2 == 1) {
        *param_1 = *param_2;
        param_1[1] = param_2[1];
      }
      else {
        *param_1 = *param_2;
        param_1[1] = param_2[1];
        param_1[2] = param_2[2];
      }
      _swift_bridgeObjectRetain();
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,puVar2);
  }
  return param_1;
}



/* Address: 0x100a0ea4c | FUN_100a0ea4c */

void * FUN_100a0ea4c(void *param_1,void *param_2,long param_3)

{
  NWEndpoint NVar1;
  undefined7 extraout_var;
  void *pvVar2;
  
  pvVar2 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  if ((int)pvVar2 == 2) {
    NVar1 = Network::NWEndpoint::typeMetadataAccessor();
    (**(code **)(*(long *)(CONCAT71(extraout_var,NVar1.value) + -8) + 0x20))
              (param_1,param_2,CONCAT71(extraout_var,NVar1.value));
    _swift_storeEnumTagMultiPayload(param_1,param_3,2);
    return param_1;
  }
  pvVar2 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
  return pvVar2;
}



/* Address: 0x100a0eae0 | FUN_100a0eae0 */

void * FUN_100a0eae0(void *param_1,void *param_2,long param_3)

{
  NWEndpoint NVar1;
  undefined7 extraout_var;
  void *pvVar2;
  
  if (param_1 != param_2) {
    FUN_100a0e500(param_1);
    pvVar2 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    if ((int)pvVar2 != 2) {
      pvVar2 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
      return pvVar2;
    }
    NVar1 = Network::NWEndpoint::typeMetadataAccessor();
    (**(code **)(*(long *)(CONCAT71(extraout_var,NVar1.value) + -8) + 0x20))
              (param_1,param_2,CONCAT71(extraout_var,NVar1.value));
    _swift_storeEnumTagMultiPayload(param_1,param_3,2);
  }
  return param_1;
}



/* Address: 0x100a0eb84 | FUN_100a0eb84 */

undefined1  [16] FUN_100a0eb84(undefined8 param_1,ulong param_2)

{
  NWEndpoint NVar1;
  undefined7 extraout_var;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined *local_38;
  undefined *puStack_30;
  long local_28;
  
  local_38 = &DAT_100c8df50;
  puStack_30 = &DAT_100c8df68;
  NVar1 = Network::NWEndpoint::typeMetadataAccessor();
  lVar2 = CONCAT71(extraout_var,NVar1.value);
  if (param_2 < 0x40) {
    local_28 = *(long *)(lVar2 + -8) + 0x40;
    _swift_initEnumMetadataMultiPayload(param_1,0x100,3,&local_38);
    lVar2 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = 0x3f;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = lVar2;
  return auVar4;
}



/* Address: 0x100a0ebfc | FUN_100a0ebfc */

undefined8 FUN_100a0ebfc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100a0de2c();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x100a0ec40 | FUN_100a0ec40 */

undefined8 FUN_100a0ec40(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff49c0;
  FUN_1000f7830(&DAT_100ff49c0,&DAT_100c8dfa8);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x100a0ec88 | thunk_FUN_100a0ded4 */

void thunk_FUN_100a0ded4(void)

{
  thunk_FUN_100a0ded4();
  return;
}



/* Address: 0x100a0ec8c | FUN_100a0ec8c */

void FUN_100a0ec8c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  long lVar6;
  double dVar7;
  
  dVar2 = 3.8138514037700914e+180;
  uVar3 = 0xeb0000000074756f;
  thunk_FUN_1007fffbc();
  dVar7 = dVar2;
  uVar4 = uVar3;
  FUN_10080c984();
  FUN_1001b9e60(param_2,param_3);
  _swift_bridgeObjectRelease(uVar3);
  _swift_bridgeObjectRelease(dVar2);
  _swift_release(param_4);
  if (((uint)uVar4 & 0xff) == 1) {
    lVar6 = 0;
    uVar5 = 1;
  }
  else {
    dVar7 = dVar7 * 1000000000.0;
    if (0x7fefffffffffffff < (ulong)ABS(dVar7)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a0edf4);
      (*pcVar1)();
    }
    if (dVar7 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a0edf8);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= dVar7) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a0edfc);
      (*pcVar1)();
    }
    uVar5 = 0;
    lVar6 = (long)dVar7;
  }
  *param_1 = FUN_1000f26f8;
  param_1[1] = 0;
  param_1[2] = lVar6;
  *(undefined1 *)(param_1 + 3) = uVar5;
  *(undefined1 *)((long)param_1 + 0x19) = 0;
  param_1[5] = 0x14000;
  param_1[4] = 0x14000;
  param_1[6] = 1000;
  return;
}



/* Address: 0x100a0edfc | FUN_100a0edfc */

void FUN_100a0edfc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  *(undefined1 *)(param_1 + 3) = param_5;
  *(undefined1 *)((long)param_1 + 0x19) = 0;
  param_1[5] = 0x14000;
  param_1[4] = 0x14000;
  param_1[6] = 1000;
  return;
}



/* Address: 0x100a0ee28 | FUN_100a0ee28 */

undefined1  [16] FUN_100a0ee28(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  _swift_retain(*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Address: 0x100a0ee54 | FUN_100a0ee54 */

undefined1 FUN_100a0ee54(void)

{
  long unaff_x20;
  
  return *(undefined1 *)(unaff_x20 + 0x19);
}



/* Address: 0x100a0ee5c | FUN_100a0ee5c */

void FUN_100a0ee5c(undefined1 param_1)

{
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0x19) = param_1;
  return;
}



/* Address: 0x100a0ee64 | FUN_100a0ee64 */

undefined1  [16] FUN_100a0ee64(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x19;
  auVar1._0_8_ = FUN_100004520;
  return auVar1;
}



/* Address: 0x100a0ee74 | FUN_100a0ee74 */

undefined8 FUN_100a0ee74(void)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + 0x20);
}



/* Address: 0x100a0ee80 | FUN_100a0ee80 */

void FUN_100a0ee80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  *(undefined8 *)(unaff_x20 + 0x30) = param_3;
  return;
}



/* Address: 0x100a0ee8c | FUN_100a0ee8c */

void FUN_100a0ee8c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  *(undefined1 *)(param_1 + 3) = param_5;
  *(undefined1 *)((long)param_1 + 0x19) = 0;
  param_1[4] = param_6;
  param_1[5] = param_7;
  param_1[6] = param_8;
  return;
}



/* Address: 0x100a0eea8 | FUN_100a0eea8 */

void FUN_100a0eea8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100f28158;
  _swift_allocObject(&DAT_100f28158,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = FUN_1000386a0;
  param_1[3] = puVar1;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 5) = 1;
  param_1[7] = 0x14000;
  param_1[6] = 0x14000;
  param_1[8] = 1000;
  return;
}



/* Address: 0x100a0ef30 | FUN_100a0ef30 */

void FUN_100a0ef30(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x100a0ef54 | FUN_100a0ef54 */

void FUN_100a0ef54(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  uVar1 = *param_4;
  uVar3 = param_4[3];
  uVar2 = param_4[2];
  param_1[3] = param_4[1];
  param_1[2] = uVar1;
  param_1[5] = uVar3;
  param_1[4] = uVar2;
  uVar1 = param_4[4];
  param_1[7] = param_4[5];
  param_1[6] = uVar1;
  param_1[8] = param_4[6];
  return;
}



/* Address: 0x100a0ef74 | FUN_100a0ef74 */

code * FUN_100a0ef74(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  undefined1 auStack_90 [16];
  
  _swift_getObjectType();
  lVar4 = *(long *)(param_2 + 8);
  (**(code **)(lVar4 + 0x50))();
  uVar1 = param_1;
  _swift_getObjectType();
  puVar2 = &DAT_100ff49c8;
  FUN_1000f7830(&DAT_100ff49c8,&DAT_100c8dfb0);
  pcVar3 = FUN_100a0f314;
  FUN_1006413ec(FUN_100a0f314,auStack_90,uVar1,puVar2,lVar4);
  _swift_unknownObjectRelease(param_1);
  return pcVar3;
}



/* Address: 0x100a0f02c | FUN_100a0f02c */

void FUN_100a0f02c(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  code *pcVar2;
  char cVar3;
  byte bVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  code *pcVar12;
  ulong uVar13;
  long unaff_x21;
  
  pcVar2 = *(code **)(param_2 + 0x10);
  uVar13 = *(ulong *)(param_2 + 0x20);
  cVar3 = *(char *)(param_2 + 0x28);
  bVar4 = *(byte *)(param_2 + 0x29);
  uVar7 = param_3;
  _swift_getObjectType();
  pcVar12 = *(code **)(param_4 + 0x28);
  uVar8 = uVar7;
  (*pcVar12)();
  FUN_10088bb18(1,0x8000000000000000,bVar4 & 1,0,0,0,0,0,1);
  _swift_release(uVar8);
  if (unaff_x21 == 0) {
    uVar8 = uVar7;
    (*pcVar12)(uVar7,param_4);
    FUN_100877838(0);
    _swift_allocObject();
    uVar9 = 0;
    FUN_1008760f0(0,0);
    FUN_100626a9c();
    _swift_release(uVar8);
    _swift_release(uVar9);
    uVar8 = uVar7;
    (*pcVar12)(uVar7,param_4);
    uVar9 = uVar8;
    (*pcVar2)();
    uVar10 = uVar9;
    FUN_100a0f330();
    _swift_bridgeObjectRelease(uVar9);
    FUN_100632174(uVar10,1,0x8000000000000000,uVar8);
    _swift_release(uVar8);
    _swift_bridgeObjectRelease(uVar10);
    (*pcVar12)(uVar7,param_4);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar13;
    bVar6 = cVar3 == '\x01';
    lVar11 = 0;
    if (!bVar6) {
      lVar11 = uVar13 * 1000000000;
    }
    lVar1 = 0;
    if (!bVar6) {
      lVar1 = ((long)uVar13 >> 0x3f & 0xffffffffc4653600U) + SUB168(auVar5 * ZEXT816(1000000000),8);
    }
    FUN_100a1f6c0();
    _swift_allocObject();
    _swift_retain(param_5);
    FUN_100a1f4ac(lVar11,lVar1,bVar6,param_5);
    _swift_release(param_5);
    FUN_100626a9c(lVar11,&PTR_PTR_100f285d8,0,0,1,0x8000000000000000,uVar7);
    _swift_release(uVar7);
    _swift_release(lVar11);
    _swift_unknownObjectRetain(param_3);
    FUN_100a0f464(param_1);
  }
  return;
}



/* Address: 0x100a0f314 | FUN_100a0f314 */

void FUN_100a0f314(void)

{
  long unaff_x20;
  
  FUN_100a0f02c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x100a0f330 | FUN_100a0f330 */

undefined * FUN_100a0f330(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_68;
  
  lVar7 = *(long *)(param_1 + 0x10);
  local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar7 != 0) {
    FUN_1009fd6f8(0,lVar7,0);
    puVar8 = (undefined8 *)(param_1 + 0x20);
    do {
      puVar4 = local_68;
      uStack_88 = puVar8[1];
      local_90 = *puVar8;
      _swift_unknownObjectRetain(local_90);
      puVar5 = &DAT_100ff4ac0;
      FUN_1000f7830(&DAT_100ff4ac0,&DAT_100c8e100);
      puVar6 = &DAT_100ff4478;
      FUN_1000f7830(&DAT_100ff4478,&DAT_100c8da80);
      _swift_dynamicCast(&local_80,&local_90,puVar5,puVar6,7);
      uVar3 = uStack_78;
      uVar2 = local_80;
      uVar1 = *(ulong *)(puVar4 + 0x10);
      local_68 = puVar4;
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
        FUN_1009fd6f8(1 < *(ulong *)(puVar4 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(local_68 + 0x10) = uVar1 + 1;
      *(undefined8 *)(local_68 + uVar1 * 0x10 + 0x28) = uVar3;
      *(undefined8 *)(local_68 + uVar1 * 0x10 + 0x20) = uVar2;
      lVar7 = lVar7 + -1;
      puVar8 = puVar8 + 2;
    } while (lVar7 != 0);
  }
  return local_68;
}



/* Address: 0x100a0f464 | FUN_100a0f464 */

void FUN_100a0f464(ulong *param_1,ulong param_2,ulong param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  code *pcVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x21;
  undefined1 *puVar11;
  long lVar12;
  ulong auStack_90 [4];
  undefined1 auStack_70 [8];
  
  puVar6 = &DAT_100ff4568;
  FUN_1000f7830(&DAT_100ff4568,&DAT_100c8dc00);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = auStack_70 + -extraout_x8;
  puVar6 = &DAT_100ff4ab8;
  FUN_1000f7830(&DAT_100ff4ab8,&DAT_100c8e0f8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = (long)puVar11 - extraout_x8_00;
  uVar7 = param_2;
  _swift_getObjectType();
  lVar10 = *(long *)(param_3 + 8);
  uVar8 = uVar7;
  (**(code **)(lVar10 + 0x50))();
  uVar9 = uVar8;
  _swift_getObjectType();
  (**(code **)(lVar10 + 0x10))();
  if ((uVar9 & 1) != 0) {
    _swift_unknownObjectRelease(uVar8);
    *param_1 = param_2;
    param_1[1] = param_3;
    uVar1 = *param_4;
    uVar2 = param_4[1];
    uVar3 = *(undefined1 *)(param_4 + 2);
    uVar4 = *(undefined1 *)((long)param_4 + 0x11);
    _swift_unknownObjectRetain(param_2);
    *(ulong *)(lVar12 + -0x10) = param_3;
    *(undefined **)(lVar12 + -0x20) = &DAT_100f08218;
    *(undefined **)(lVar12 + -0x18) = &DAT_100f082a8;
    FUN_1005e03dc(lVar12,puVar11,uVar1,uVar2,uVar3,uVar4,0,uVar7);
    _swift_unknownObjectRelease(param_2);
    if (unaff_x21 == 0) {
      puVar6 = &DAT_100ff49c8;
      FUN_1000f7830(&DAT_100ff49c8,&DAT_100c8dfb0);
      FUN_10011532c(lVar12,(long)param_1 + (long)*(int *)(puVar6 + 0x24),&DAT_100ff4ab8,
                    &DAT_100c8e0f8);
      FUN_10011532c(puVar11,(long)param_1 + (long)*(int *)(puVar6 + 0x28),&DAT_100ff4568,
                    &DAT_100c8dc00);
    }
    else {
      _swift_unknownObjectRelease(param_2);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x100a0f654);
  (*pcVar5)();
}



/* Address: 0x100a0f654 | FUN_100a0f654 */

void FUN_100a0f654(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x300;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_100a0f6cc(param_1,param_2);
  return;
}



/* Address: 0x100a0f6cc | FUN_100a0f6cc */

void FUN_100a0f6cc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(unaff_x22 + 0x2c8) = param_2;
  *(undefined8 *)(unaff_x22 + 0x2c0) = param_1;
  uVar1 = unaff_x20[4];
  uVar3 = unaff_x20[7];
  uVar2 = unaff_x20[6];
  *(undefined8 *)(unaff_x22 + 0x180) = unaff_x20[5];
  *(undefined8 *)(unaff_x22 + 0x178) = uVar1;
  *(undefined8 *)(unaff_x22 + 400) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x188) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x198) = unaff_x20[8];
  uVar3 = *unaff_x20;
  uVar2 = unaff_x20[3];
  uVar1 = unaff_x20[2];
  *(undefined8 *)(unaff_x22 + 0x160) = unaff_x20[1];
  *(undefined8 *)(unaff_x22 + 0x158) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x170) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x168) = uVar1;
  _swift_task_switch(FUN_100a0f704,0,0);
  return;
}



/* Address: 0x100a0f704 | FUN_100a0f704 */

void FUN_100a0f704(void)

{
  byte bVar1;
  long *plVar2;
  code *pcVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x2c0);
  *(undefined8 **)(unaff_x22 + 0x28) = (undefined8 *)(unaff_x22 + 0x158);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x2c8);
  *(undefined8 *)(unaff_x22 + 0x220) = *(undefined8 *)(unaff_x22 + 0x2c0);
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar1 & 1) != 0) {
    plVar2 = (long *)(ulong)*(uint *)(PTR__withTaskCancellationHandler_100eaefb8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x2d0) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_100a0f880;
    Swift::_withTaskCancellationHandler();
    return;
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0x2c8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x2c0);
  pcVar3 = FUN_100a15624;
  _swift_task_addCancellationHandler(FUN_100a15624,unaff_x22 + 0x210);
  *(code **)(unaff_x22 + 0x2d8) = pcVar3;
  *(undefined8 *)(unaff_x22 + 0x1f0) = *(undefined8 *)(unaff_x22 + 0x180);
  *(undefined8 *)(unaff_x22 + 0x1e8) = *(undefined8 *)(unaff_x22 + 0x178);
  *(undefined8 *)(unaff_x22 + 0x200) = *(undefined8 *)(unaff_x22 + 400);
  *(undefined8 *)(unaff_x22 + 0x1f8) = *(undefined8 *)(unaff_x22 + 0x188);
  *(undefined8 *)(unaff_x22 + 0x208) = *(undefined8 *)(unaff_x22 + 0x198);
  *(undefined8 *)(unaff_x22 + 0x1d0) = *(undefined8 *)(unaff_x22 + 0x160);
  *(undefined8 *)(unaff_x22 + 0x1c8) = *(undefined8 *)(unaff_x22 + 0x158);
  *(undefined8 *)(unaff_x22 + 0x1e0) = *(undefined8 *)(unaff_x22 + 0x170);
  *(undefined8 *)(unaff_x22 + 0x1d8) = *(undefined8 *)(unaff_x22 + 0x168);
  *(undefined8 **)(unaff_x22 + 0x1b0) = (undefined8 *)(unaff_x22 + 0x1c8);
  *(undefined8 *)(unaff_x22 + 0x1c0) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x1b8) = uVar4;
  plVar2 = (long *)0x130;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x2e0) = plVar2;
  FUN_1000f7830(&DAT_100ff49c8,&DAT_100c8dfb0);
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100a0f8e4;
  FUN_1005e175c();
  return;
}



/* Address: 0x100a0f880 | FUN_100a0f880 */

void FUN_100a0f880(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x2d0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1002e1208;
  }
  else {
    *(long *)(lVar2 + 0x2f0) = unaff_x20;
    pcVar1 = FUN_100a0f9d8;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a0f8e4 | FUN_100a0f8e4 */

void FUN_100a0f8e4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x2e8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x2e0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a0f948;
  }
  else {
    pcVar1 = FUN_100a0f98c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a0f948 | FUN_100a0f948 */

void FUN_100a0f948(void)

{
  long unaff_x22;
  
  _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x2d8));
  _swift_task_switch(FUN_1002e1208,0,0);
  return;
}



/* Address: 0x100a0f98c | FUN_100a0f98c */

void FUN_100a0f98c(void)

{
  long unaff_x22;
  
  _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x2d8));
  *(undefined8 *)(unaff_x22 + 0x2f0) = *(undefined8 *)(unaff_x22 + 0x2e8);
  _swift_task_switch(FUN_100a0f9d8,0,0);
  return;
}



/* Address: 0x100a0f9d8 | FUN_100a0f9d8 */

void FUN_100a0f9d8(void)

{
  _StringGuts _Var1;
  char *pcVar2;
  void *pvVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  long unaff_x22;
  long lVar8;
  String SVar9;
  String SVar10;
  
  lVar8 = *(long *)(unaff_x22 + 0x2c8);
  pcVar2 = (char *)0x0;
  pvVar3 = (void *)0x0;
  _swift_beginAccess(lVar8 + 0x20,unaff_x22 + 0x278);
  FUN_100076688(lVar8 + 0x20,unaff_x22 + 0x228);
  uVar4 = *(ulong *)(unaff_x22 + 0x240);
  lVar6 = *(long *)(unaff_x22 + 0x248);
  FUN_100004640(unaff_x22 + 0x228,uVar4);
  (**(code **)(lVar6 + 0x70))(uVar4,lVar6);
  FUN_100004594(unaff_x22 + 0x228);
  if ((uVar4 & 0xff) == 0) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x2f0);
    FUN_100076688(lVar8 + 0x20,unaff_x22 + 0x250);
    puVar7 = *(undefined **)(unaff_x22 + 0x268);
    lVar6 = *(long *)(unaff_x22 + 0x270);
    _Var1.unknown = puVar7;
    FUN_100004640(unaff_x22 + 0x250);
    Swift::_StringGuts::grow(0x2a,_Var1);
    SVar9.bridgeObject = (void *)0x8000000100db7f30;
    SVar9.str = (char *)0xd000000000000028;
    SVar10.bridgeObject = pvVar3;
    SVar10.str = pcVar2;
    Swift::String::append(SVar9,SVar10);
    _swift_getErrorValue(uVar5,unaff_x22 + 0x2b8,unaff_x22 + 0x290);
    Swift::DefaultStringInterpolation::_appendInterpolation
              (*(undefined8 *)(unaff_x22 + 0x290),*(undefined8 *)(unaff_x22 + 0x298));
    FUN_100a15770();
    (extension_Swift)::Swift::ExpressibleByStringInterpolation::_init
              ((DefaultStringInterpolation)0x0);
    *(undefined1 *)(unaff_x22 + 0x98) = 0;
    *(undefined1 *)(unaff_x22 + 0x38) = 0;
    *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x2a8);
    *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0x2b0);
    *(undefined8 *)(unaff_x22 + 0x58) = 0;
    *(undefined8 *)(unaff_x22 + 0x50) = 0;
    *(undefined8 *)(unaff_x22 + 0x68) = 0;
    *(undefined8 *)(unaff_x22 + 0x60) = 0;
    *(undefined8 *)(unaff_x22 + 0x70) = 0xd000000000000028;
    *(undefined8 *)(unaff_x22 + 0x78) = 0x8000000100db7ed0;
    *(undefined8 *)(unaff_x22 + 0x80) = 0xd000000000000020;
    *(undefined8 *)(unaff_x22 + 0x88) = 0x8000000100db7f00;
    *(undefined8 *)(unaff_x22 + 0x90) = 0x5e;
    *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0x2a8);
    *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(unaff_x22 + 0x2b0);
    *(undefined8 *)(unaff_x22 + 0xb8) = 0;
    *(undefined8 *)(unaff_x22 + 0xb0) = 0;
    *(undefined8 *)(unaff_x22 + 200) = 0;
    *(undefined8 *)(unaff_x22 + 0xc0) = 0;
    *(undefined8 *)(unaff_x22 + 0xd0) = 0xd000000000000028;
    *(undefined8 *)(unaff_x22 + 0xd8) = 0x8000000100db7ed0;
    *(undefined8 *)(unaff_x22 + 0xe0) = 0xd000000000000020;
    *(undefined8 *)(unaff_x22 + 0xe8) = 0x8000000100db7f00;
    *(undefined8 *)(unaff_x22 + 0xf0) = 0x5e;
    FUN_1005bf638(unaff_x22 + 0x38,unaff_x22 + 0xf8);
    FUN_1004eaa3c((undefined1 *)(unaff_x22 + 0x98));
    (**(code **)(lVar6 + 0x28))(unaff_x22 + 0x38,puVar7,lVar6);
    _swift_errorRelease(uVar5);
    FUN_1004eaa3c(unaff_x22 + 0x38);
    FUN_100004594(unaff_x22 + 0x250);
  }
  else {
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x2f0));
  }
                    /* WARNING: Could not recover jumptable at 0x000100a0fbec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a0fbf0 | FUN_100a0fbf0 */

void FUN_100a0fbf0(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  param_1[1] = *(undefined8 *)(unaff_x20 + 0x18);
  *param_1 = uVar2;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  param_1[6] = *(undefined8 *)(unaff_x20 + 0x40);
  _swift_retain(uVar1);
  return;
}



/* Address: 0x100a0fc10 | FUN_100a0fc10 */

undefined ** FUN_100a0fc10(void)

{
  return &PTR_PTR_100f28188;
}



/* Address: 0x100a0fc1c | FUN_100a0fc1c */

code * FUN_100a0fc1c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long lVar5;
  undefined8 *unaff_x20;
  undefined1 auStack_d0 [16];
  undefined8 *local_c0;
  undefined8 uStack_b8;
  long local_b0;
  undefined8 uStack_a8;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  uStack_68 = unaff_x20[5];
  local_70 = unaff_x20[4];
  uStack_58 = unaff_x20[7];
  uStack_60 = unaff_x20[6];
  local_50 = unaff_x20[8];
  uStack_88 = unaff_x20[1];
  local_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  uVar1 = param_1;
  _swift_getObjectType();
  lVar5 = *(long *)(param_2 + 8);
  local_98 = param_1;
  (**(code **)(lVar5 + 0x50))();
  uVar2 = uVar1;
  _swift_getObjectType();
  local_c0 = &local_90;
  puVar3 = &DAT_100ff49c8;
  uStack_b8 = param_1;
  local_b0 = param_2;
  uStack_a8 = param_3;
  FUN_1000f7830(&DAT_100ff49c8,&DAT_100c8dfb0);
  pcVar4 = FUN_100a15864;
  FUN_1006413ec(FUN_100a15864,auStack_d0,uVar2,puVar3,lVar5);
  _swift_unknownObjectRelease(uVar1);
  return pcVar4;
}



/* Address: 0x100a0fce4 | FUN_100a0fce4 */

void FUN_100a0fce4(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *unaff_x20;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = unaff_x20[4];
  uVar4 = unaff_x20[7];
  uVar3 = unaff_x20[6];
  *(undefined8 *)(unaff_x22 + 0x38) = unaff_x20[5];
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x50) = unaff_x20[8];
  uVar4 = *unaff_x20;
  uVar3 = unaff_x20[3];
  uVar2 = unaff_x20[2];
  plVar1 = (long *)0x300;
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x58) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10081d37c;
  FUN_100a0f6cc(param_1,param_2);
  return;
}



/* Address: 0x100a0fd78 | FUN_100a0fd78 */

undefined8 * FUN_100a0fd78(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[1];
  uVar2 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar2 = param_2[3];
  param_1[4] = param_2[4];
  *(undefined2 *)(param_1 + 5) = *(undefined2 *)(param_2 + 5);
  param_1[8] = param_2[8];
  uVar3 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar3;
  _swift_retain(uVar1);
  _swift_retain(uVar2);
  return param_1;
}



/* Address: 0x100a0fdd0 | FUN_100a0fdd0 */

undefined8 * FUN_100a0fdd0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_1[1];
  uVar1 = param_2[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  _swift_retain(uVar1);
  _swift_release(uVar2);
  uVar2 = param_1[3];
  uVar1 = param_2[3];
  uVar3 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  _swift_retain(uVar1);
  _swift_release(uVar2);
  uVar1 = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[4] = uVar1;
  *(undefined1 *)((long)param_1 + 0x29) = *(undefined1 *)((long)param_2 + 0x29);
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  return param_1;
}



/* Address: 0x100a0fe64 | FUN_100a0fe64 */

void FUN_100a0fe64(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  uVar4 = param_2[5];
  uVar3 = param_2[4];
  uVar6 = param_2[7];
  uVar5 = param_2[6];
  param_1[8] = param_2[8];
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  param_1[7] = uVar6;
  param_1[6] = uVar5;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  return;
}



/* Address: 0x100a0fe88 | FUN_100a0fe88 */

undefined8 * FUN_100a0fe88(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_release(uVar1);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  _swift_release(uVar1);
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  *(undefined1 *)((long)param_1 + 0x29) = *(undefined1 *)((long)param_2 + 0x29);
  uVar1 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar1;
  param_1[8] = param_2[8];
  return param_1;
}



/* Address: 0x100a0fef4 | FUN_100a0fef4 */

undefined1  [16] FUN_100a0fef4(void)

{
  return ZEXT816(0x100f28200);
}



/* Address: 0x100a0ff04 | FUN_100a0ff04 */

void FUN_100a0ff04(void)

{
  FUN_100a0ff0c(0);
  return;
}



/* Address: 0x100a0ff0c | FUN_100a0ff0c */

void FUN_100a0ff0c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 local_28;
  undefined8 local_20;
  undefined *local_18;
  
  if (DAT_100ff49f8 != 0) {
    return;
  }
  uVar1 = 0xff;
  FUN_1009e1f14();
  uVar2 = 0xff;
  local_28 = uVar1;
  FUN_100a03644();
  puVar3 = &DAT_100ff4a00;
  local_20 = uVar2;
  FUN_1000f8b08(&DAT_100ff4a00,&DAT_100c8e400);
  uVar1 = 0x67000003;
  local_18 = puVar3;
  _swift_getFunctionTypeMetadata
            (0x67000003,&local_28,&DAT_100c8e020,PTR___type_metadata_for____100eae0c8 + 8);
  DAT_100ff49f8 = uVar1;
  return;
}



/* Address: 0x100a0ff9c | FUN_100a0ff9c */

undefined8 * FUN_100a0ff9c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_2 + 3);
  uVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  param_1[6] = param_2[6];
  _swift_retain(uVar1);
  return param_1;
}



/* Address: 0x100a0ffe8 | FUN_100a0ffe8 */

undefined8 * FUN_100a0ffe8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_1[1];
  uVar1 = param_2[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  _swift_retain(uVar1);
  _swift_release(uVar2);
  uVar1 = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[2] = uVar1;
  *(undefined1 *)((long)param_1 + 0x19) = *(undefined1 *)((long)param_2 + 0x19);
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  return param_1;
}



/* Address: 0x100a10060 | FUN_100a10060 */

void FUN_100a10060(undefined8 *param_1,undefined8 *param_2)

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
  param_1[6] = param_2[6];
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x100a1007c | FUN_100a1007c */

undefined8 * FUN_100a1007c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_release(uVar1);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  *(undefined1 *)((long)param_1 + 0x19) = *(undefined1 *)((long)param_2 + 0x19);
  uVar1 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  param_1[6] = param_2[6];
  return param_1;
}



/* Address: 0x100a100d8 | FUN_100a100d8 */

undefined1  [16] FUN_100a100d8(void)

{
  return ZEXT816(0x100f28280);
}


