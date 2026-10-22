/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1009d7ca4 | FUN_1009d7ca4 */

void FUN_1009d7ca4(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100ff3420,&TargetEnumDescriptor_100cc88f0);
  return;
}



/* Address: 0x1009d7cb8 | FUN_1009d7cb8 */

undefined8 FUN_1009d7cb8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1009d7ca4();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x1009d7cfc | FUN_1009d7cfc */

undefined8 FUN_1009d7cfc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1009d7ca4();
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x1009d7d40 | FUN_1009d7d40 */

undefined8 FUN_1009d7d40(undefined8 param_1,undefined8 param_2)

{
  FUN_1009dab60(param_2,param_1);
  return param_2;
}



/* Address: 0x1009d7d7c | FUN_1009d7d7c */

undefined8 FUN_1009d7d7c(undefined8 param_1)

{
  FUN_1009dab3c();
  return param_1;
}



/* Address: 0x1009d7db0 | FUN_1009d7db0 */

void FUN_1009d7db0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff3230 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8cb84;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8cb84,&DAT_100f26798);
  DAT_100ff3230 = pTVar1;
  return;
}



/* Address: 0x1009d7df0 | FUN_1009d7df0 */

void FUN_1009d7df0(void)

{
  FUN_1009d79f8(0);
  return;
}



/* Address: 0x1009d7df8 | FUN_1009d7df8 */

void FUN_1009d7df8(long param_1,ulong param_2)

{
  long lVar1;
  undefined *local_60;
  undefined *puStack_58;
  undefined *local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  undefined *local_30;
  long local_28;
  
  puStack_58 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
  local_60 = &DAT_100c8c7a8;
  local_50 = &DAT_100c8c7c0;
  puStack_48 = &DAT_100c8c7d8;
  puStack_38 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40;
  local_40 = &DAT_100c8c7d8;
  lVar1 = 0x13f;
  local_30 = puStack_38;
  FUN_1009d7ca4();
  if (param_2 < 0x40) {
    local_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_updateClassMetadata2(param_1,0x100,8,&local_60,param_1 + 0x50);
  }
  return;
}



/* Address: 0x1009d7ea4 | FUN_1009d7ea4 */

long * FUN_1009d7ea4(long *param_1,long *param_2,long param_3)

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
      puVar2 = &DAT_100ff3228;
      FUN_1000f7830(&DAT_100ff3228,&DAT_100c8c6c0);
      (**(code **)(*(long *)(puVar2 + -8) + 0x10))(param_1,param_2,puVar2);
      puVar2 = &DAT_100ff3220;
      FUN_1000f7830(&DAT_100ff3220,&DAT_100c8c6b8);
      *(undefined8 *)((long)param_1 + (long)*(int *)(puVar2 + 0x30)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(puVar2 + 0x30));
      _swift_retain();
      uVar4 = 1;
    }
    else {
      if ((int)plVar3 != 0) {
        plVar3 = _memcpy(param_1,param_2,*(size_t *)(lVar6 + 0x40));
        return plVar3;
      }
      *param_1 = *param_2;
      _swift_bridgeObjectRetain();
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



/* Address: 0x1009d7fb0 | FUN_1009d7fb0 */

void FUN_1009d7fb0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  
  puVar1 = param_1;
  _swift_getEnumCaseMultiPayload();
  if ((int)puVar1 == 1) {
    puVar2 = &DAT_100ff3228;
    FUN_1000f7830(&DAT_100ff3228,&DAT_100c8c6c0);
    (**(code **)(*(long *)(puVar2 + -8) + 8))(param_1,puVar2);
    puVar2 = &DAT_100ff3220;
    FUN_1000f7830(&DAT_100ff3220,&DAT_100c8c6b8);
    _swift_release(*(undefined8 *)((long)param_1 + (long)*(int *)(puVar2 + 0x30)));
    return;
  }
  if ((int)puVar1 == 0) {
    _swift_bridgeObjectRelease(*param_1);
    return;
  }
  return;
}



/* Address: 0x1009d803c | FUN_1009d803c */

undefined8 * FUN_1009d803c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  if ((int)puVar2 == 1) {
    puVar1 = &DAT_100ff3228;
    FUN_1000f7830(&DAT_100ff3228,&DAT_100c8c6c0);
    (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_1,param_2,puVar1);
    puVar1 = &DAT_100ff3220;
    FUN_1000f7830(&DAT_100ff3220,&DAT_100c8c6b8);
    *(undefined8 *)((long)param_1 + (long)*(int *)(puVar1 + 0x30)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(puVar1 + 0x30));
    _swift_retain();
    uVar3 = 1;
  }
  else {
    if ((int)puVar2 != 0) {
      puVar2 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
      return puVar2;
    }
    *param_1 = *param_2;
    _swift_bridgeObjectRetain();
    uVar3 = 0;
  }
  _swift_storeEnumTagMultiPayload(param_1,param_3,uVar3);
  return param_1;
}



/* Address: 0x1009d8120 | FUN_1009d8120 */

undefined8 * FUN_1009d8120(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (param_1 != param_2) {
    FUN_10005241c(param_1,FUN_1009d7ca4);
    puVar2 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    if ((int)puVar2 == 1) {
      puVar1 = &DAT_100ff3228;
      FUN_1000f7830(&DAT_100ff3228,&DAT_100c8c6c0);
      (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_1,param_2,puVar1);
      puVar1 = &DAT_100ff3220;
      FUN_1000f7830(&DAT_100ff3220,&DAT_100c8c6b8);
      *(undefined8 *)((long)param_1 + (long)*(int *)(puVar1 + 0x30)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(puVar1 + 0x30));
      _swift_retain();
      uVar3 = 1;
    }
    else {
      if ((int)puVar2 != 0) {
        puVar2 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
        return puVar2;
      }
      *param_1 = *param_2;
      _swift_bridgeObjectRetain();
      uVar3 = 0;
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,uVar3);
  }
  return param_1;
}



/* Address: 0x1009d821c | FUN_1009d821c */

void * FUN_1009d821c(void *param_1,void *param_2,long param_3)

{
  undefined *puVar1;
  void *pvVar2;
  
  pvVar2 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  if ((int)pvVar2 == 1) {
    puVar1 = &DAT_100ff3228;
    FUN_1000f7830(&DAT_100ff3228,&DAT_100c8c6c0);
    (**(code **)(*(long *)(puVar1 + -8) + 0x20))(param_1,param_2,puVar1);
    puVar1 = &DAT_100ff3220;
    FUN_1000f7830(&DAT_100ff3220,&DAT_100c8c6b8);
    *(undefined8 *)((long)param_1 + (long)*(int *)(puVar1 + 0x30)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(puVar1 + 0x30));
    _swift_storeEnumTagMultiPayload(param_1,param_3,1);
    return param_1;
  }
  pvVar2 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
  return pvVar2;
}



/* Address: 0x1009d82dc | FUN_1009d82dc */

void * FUN_1009d82dc(void *param_1,void *param_2,long param_3)

{
  undefined *puVar1;
  void *pvVar2;
  
  if (param_1 != param_2) {
    FUN_10005241c(param_1,FUN_1009d7ca4);
    pvVar2 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    if ((int)pvVar2 != 1) {
      pvVar2 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
      return pvVar2;
    }
    puVar1 = &DAT_100ff3228;
    FUN_1000f7830(&DAT_100ff3228,&DAT_100c8c6c0);
    (**(code **)(*(long *)(puVar1 + -8) + 0x20))(param_1,param_2,puVar1);
    puVar1 = &DAT_100ff3220;
    FUN_1000f7830(&DAT_100ff3220,&DAT_100c8c6b8);
    *(undefined8 *)((long)param_1 + (long)*(int *)(puVar1 + 0x30)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(puVar1 + 0x30));
    _swift_storeEnumTagMultiPayload(param_1,param_3,1);
  }
  return param_1;
}



/* Address: 0x1009d83b4 | FUN_1009d83b4 */

void FUN_1009d83b4(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined1 auStack_50 [32];
  undefined *local_30;
  undefined1 *local_28;
  
  local_30 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40;
  lVar1 = 0x13f;
  FUN_1009d8440();
  if (param_2 < 0x40) {
    _swift_getTupleTypeLayout2
              (auStack_50,*(long *)(lVar1 + -8) + 0x40,
               PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40);
    local_28 = auStack_50;
    _swift_initEnumMetadataMultiPayload(param_1,0x100,2,&local_30);
  }
  return;
}



/* Address: 0x1009d8440 | FUN_1009d8440 */

void FUN_1009d8440(void)

{
  Continuation_conflict CVar1;
  undefined *puVar2;
  
  if (DAT_100ff3430 != (undefined *)0x0) {
    return;
  }
  puVar2 = PTR___type_metadata_for____100eae0c8 + 8;
  CVar1 = Swift::AsyncStream::Continuation::typeMetadataAccessor();
  if (puVar2 != (undefined *)0x0) {
    return;
  }
  DAT_100ff3430 = CVar1.unknown;
  return;
}



/* Address: 0x1009d8494 | FUN_1009d8494 */

void FUN_1009d8494(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  
  if (DAT_100ff3460 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_1009d79f8(0xff);
  pTVar2 = &TargetProtocolConformanceDescriptor_100c8c710;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8c710,uVar1);
  DAT_100ff3460 = pTVar2;
  return;
}



/* Address: 0x1009d84d8 | FUN_1009d84d8 */

void FUN_1009d84d8(void)

{
  FUN_1003aa0a4(0x38);
  return;
}



/* Address: 0x1009d84e0 | FUN_1009d84e0 */

void FUN_1009d84e0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  plVar5 = (long *)0x350;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)thunk_FUN_1005c804c;
  FUN_1009d554c(plVar5,param_1,uVar1,uVar3,uVar2,uVar4,uVar6);
  return;
}



/* Address: 0x1009d8568 | FUN_1009d8568 */

void FUN_1009d8568(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1009d858c | FUN_1009d858c */

undefined * FUN_1009d858c(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined7 uVar8;
  undefined1 uVar9;
  undefined8 uVar10;
  code *pcVar11;
  _DictionaryStorage *this;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined *capacity;
  ulong local_a0;
  ulong uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined7 local_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar12 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100ff3498;
    FUN_1000f7830(&DAT_100ff3498,&DAT_100c8c880);
    puVar12 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    param_1 = param_1 + 0x20;
    _swift_retain();
    do {
      FUN_1000f8cac(param_1,&local_a0,&DAT_100ff3480,&DAT_100c8c838);
      uVar10 = uStack_6f;
      uVar9 = uStack_70;
      uVar8 = local_77;
      uVar7 = uStack_78;
      uVar6 = uStack_80;
      uVar5 = uStack_88;
      uVar4 = local_90;
      uVar3 = uStack_98;
      uVar2 = local_a0;
      uVar13 = local_a0;
      uVar14 = uStack_98;
      FUN_100071370();
      if ((uVar14 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x1009d86cc);
        (*pcVar11)();
      }
      uVar14 = uVar13 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar12 + uVar14 + 0x40) =
           *(ulong *)(puVar12 + uVar14 + 0x40) | 1L << (uVar13 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar12 + 0x30) + uVar13 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar15 = (undefined8 *)(*(long *)(puVar12 + 0x38) + uVar13 * 0x30);
      puVar15[1] = uVar5;
      *puVar15 = uVar4;
      puVar15[3] = CONCAT71(uVar8,uVar7);
      puVar15[2] = uVar6;
      *(undefined8 *)((long)puVar15 + 0x21) = uVar10;
      *(ulong *)((long)puVar15 + 0x19) = CONCAT17(uVar9,uVar8);
      if (SCARRY8(*(long *)(puVar12 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x1009d86d0);
        (*pcVar11)();
      }
      *(long *)(puVar12 + 0x10) = *(long *)(puVar12 + 0x10) + 1;
      param_1 = param_1 + 0x40;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar12);
  }
  return puVar12;
}



/* Address: 0x1009d86d0 | FUN_1009d86d0 */

undefined8 FUN_1009d86d0(undefined8 param_1,undefined8 param_2)

{
  FUN_1009d8fdc(param_2,param_1,&DAT_100f263d8);
  return param_2;
}



/* Address: 0x1009d8704 | FUN_1009d8704 */

undefined8 FUN_1009d8704(undefined8 param_1)

{
  FUN_1009d8f60(param_1,&DAT_100f263d8);
  return param_1;
}



/* Address: 0x1009d8730 | FUN_1009d8730 */

void FUN_1009d8730(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  plVar5 = (long *)0x350;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1005c804c;
  FUN_1009d554c(plVar5,param_1,uVar1,uVar3,uVar2,uVar4,uVar6);
  return;
}



/* Address: 0x1009d87b8 | FUN_1009d87b8 */

undefined8 FUN_1009d87b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff31c8;
  FUN_1000f7830(&DAT_100ff31c8,&DAT_100c8c5d0);
  (**(code **)(*(long *)(puVar1 + -8) + 0x28))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1009d8808 | FUN_1009d8808 */

void FUN_1009d8808(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x1009d882c | FUN_1009d882c */

void FUN_1009d882c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)thunk_FUN_1005c804c;
  FUN_1009d4f70(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Address: 0x1009d88ac | FUN_1009d88ac */

void FUN_1009d88ac(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  plVar5 = (long *)0x1c00;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)thunk_FUN_1005c804c;
  FUN_1009cc9ec(plVar5,param_1,param_2,uVar1,uVar3,uVar2,uVar4,uVar6);
  return;
}



/* Address: 0x1009d8944 | FUN_1009d8944 */

void FUN_1009d8944(void)

{
  FUN_1003aa0a4(0x28);
  return;
}



/* Address: 0x1009d894c | FUN_1009d894c */

void FUN_1009d894c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1005c804c;
  FUN_1009d0e18(plVar3,param_1,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x1009d89c0 | FUN_1009d89c0 */

void FUN_1009d89c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1005c804c;
  FUN_1009d0f28(plVar3,param_1,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x1009d8a34 | FUN_1009d8a34 */

void FUN_1009d8a34(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  puVar1 = &DAT_100ff3238;
  FUN_1000f7830(&DAT_100ff3238,&DAT_100c8c6e0);
  lVar2 = *(long *)(puVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x20 & (uVar3 ^ 0xffffffffffffffff)),puVar1);
  _swift_deallocObject();
  return;
}



/* Address: 0x1009d8aac | FUN_1009d8aac */

void FUN_1009d8aac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined *puVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  puVar4 = &DAT_100ff3238;
  FUN_1000f7830(&DAT_100ff3238,&DAT_100c8c6e0);
  bVar3 = *(byte *)(*(long *)(puVar4 + -8) + 0x50);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar5 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)thunk_FUN_1005c804c;
  FUN_1009d10c0(plVar5,param_1,uVar1,uVar2,
                unaff_x20 + ((ulong)bVar3 + 0x20 & ((ulong)bVar3 ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x1009d8b48 | thunk_FUN_1009d8cb4 */

void thunk_FUN_1009d8cb4(void)

{
  FUN_1009d8cb4();
  return;
}



/* Address: 0x1009d8b4c | FUN_1009d8b4c */

void FUN_1009d8b4c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x68);
  plVar3 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1005c804c;
  FUN_1009d5a44(plVar3,param_1,uVar1,uVar2,uVar4,unaff_x20 + 0x28,uVar5);
  return;
}



/* Address: 0x1009d8bd4 | FUN_1009d8bd4 */

void FUN_1009d8bd4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1005c804c;
  FUN_1009d13d4(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Address: 0x1009d8c40 | FUN_1009d8c40 */

void FUN_1009d8c40(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1005c804c;
  FUN_1009d5f20(plVar3,param_1,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x1009d8cb4 | FUN_1009d8cb4 */

void FUN_1009d8cb4(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  FUN_100004594(unaff_x20 + 0x28);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x60));
  _swift_deallocObject();
  return;
}



/* Address: 0x1009d8cf0 | FUN_1009d8cf0 */

void FUN_1009d8cf0(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x1009d8d14 | FUN_1009d8d14 */

void FUN_1009d8d14(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1005c804c;
  FUN_1009d1284(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Address: 0x1009d8d80 | FUN_1009d8d80 */

void FUN_1009d8d80(undefined8 param_1)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_1009d6154(plVar1,param_1);
  return;
}



/* Address: 0x1009d8ddc | FUN_1009d8ddc */

void FUN_1009d8ddc(void)

{
  FUN_100750e48();
  return;
}



/* Address: 0x1009d8df0 | FUN_1009d8df0 */

void FUN_1009d8df0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1005c804c;
  FUN_1009d5d78(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Address: 0x1009d8e5c | FUN_1009d8e5c */

void FUN_1009d8e5c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1009d64b8(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1009d8e64 | FUN_1009d8e64 */

undefined8 FUN_1009d8e64(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1009d7ca4();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x1009d8ea8 | FUN_1009d8ea8 */

undefined8 FUN_1009d8ea8(undefined8 param_1,undefined8 param_2)

{
  thunk_FUN_1009da920(param_2,param_1);
  return param_2;
}



/* Address: 0x1009d8ee4 | FUN_1009d8ee4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1009d8ee4(undefined8 param_1,undefined8 param_2)

{
  (*_DAT_10130ba10)(param_2,param_1);
  return param_2;
}



/* Address: 0x1009d8f20 | FUN_1009d8f20 */

void FUN_1009d8f20(void)

{
  undefined *puVar1;
  
  if (DAT_100ff34f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100c8ce5c;
  _swift_getWitnessTable(&DAT_100c8ce5c,&DAT_100f26b88);
  DAT_100ff34f0 = puVar1;
  return;
}



/* Address: 0x1009d8f60 | FUN_1009d8f60 */

void FUN_1009d8f60(int *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 0x14);
  if (3 < *(byte *)(param_1 + 0x14)) {
    uVar1 = *param_1 + 4;
  }
  if (uVar1 != 3) {
    if (uVar1 == 1) {
      FUN_100004594(param_1);
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0xe));
      _swift_errorRelease(*(undefined8 *)(param_1 + 0x12));
      return;
    }
    if (uVar1 != 0) {
      return;
    }
  }
  FUN_100004594(param_1);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0xe));
  return;
}



/* Address: 0x1009d8fdc | FUN_1009d8fdc */

undefined8 * FUN_1009d8fdc(undefined8 *param_1,int *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = (uint)*(byte *)(param_2 + 0x14);
  if (3 < *(byte *)(param_2 + 0x14)) {
    uVar2 = *param_2 + 4;
  }
  if ((int)uVar2 < 2) {
    if (uVar2 == 0) {
      lVar3 = *(long *)(param_2 + 6);
      param_1[4] = *(undefined8 *)(param_2 + 8);
      param_1[3] = lVar3;
      (*(code *)**(undefined8 **)(lVar3 + -8))(param_1);
      *(short *)(param_1 + 5) = (short)param_2[10];
      uVar4 = *(undefined8 *)(param_2 + 0xe);
      param_1[6] = *(undefined8 *)(param_2 + 0xc);
      param_1[7] = uVar4;
      param_1[8] = *(undefined8 *)(param_2 + 0x10);
      *(undefined1 *)(param_1 + 10) = 0;
      _swift_bridgeObjectRetain();
      return param_1;
    }
    if (uVar2 != 1) {
LAB_1009d90b4:
      uVar4 = *(undefined8 *)(param_2 + 8);
      uVar6 = *(undefined8 *)(param_2 + 0xe);
      uVar5 = *(undefined8 *)(param_2 + 0xc);
      param_1[5] = *(undefined8 *)(param_2 + 10);
      param_1[4] = uVar4;
      param_1[7] = uVar6;
      param_1[6] = uVar5;
      uVar4 = *(undefined8 *)(param_2 + 0x10);
      param_1[9] = *(undefined8 *)(param_2 + 0x12);
      param_1[8] = uVar4;
      *(char *)(param_1 + 10) = (char)param_2[0x14];
      uVar4 = *(undefined8 *)param_2;
      uVar6 = *(undefined8 *)(param_2 + 6);
      uVar5 = *(undefined8 *)(param_2 + 4);
      param_1[1] = *(undefined8 *)(param_2 + 2);
      *param_1 = uVar4;
      param_1[3] = uVar6;
      param_1[2] = uVar5;
      return param_1;
    }
    lVar3 = *(long *)(param_2 + 6);
    param_1[4] = *(undefined8 *)(param_2 + 8);
    param_1[3] = lVar3;
    (*(code *)**(undefined8 **)(lVar3 + -8))(param_1);
    *(short *)(param_1 + 5) = (short)param_2[10];
    uVar4 = *(undefined8 *)(param_2 + 0xe);
    param_1[6] = *(undefined8 *)(param_2 + 0xc);
    param_1[7] = uVar4;
    uVar4 = *(undefined8 *)(param_2 + 0x12);
    param_1[8] = *(undefined8 *)(param_2 + 0x10);
    _swift_bridgeObjectRetain();
    _swift_errorRetain(uVar4);
    param_1[9] = uVar4;
    uVar1 = 1;
  }
  else {
    if (uVar2 != 2) {
      if (uVar2 == 3) {
        lVar3 = *(long *)(param_2 + 6);
        param_1[4] = *(undefined8 *)(param_2 + 8);
        param_1[3] = lVar3;
        (*(code *)**(undefined8 **)(lVar3 + -8))(param_1);
        *(short *)(param_1 + 5) = (short)param_2[10];
        uVar4 = *(undefined8 *)(param_2 + 0xe);
        param_1[6] = *(undefined8 *)(param_2 + 0xc);
        param_1[7] = uVar4;
        *(undefined1 *)(param_1 + 10) = 3;
        _swift_bridgeObjectRetain();
        return param_1;
      }
      goto LAB_1009d90b4;
    }
    *(char *)param_1 = (char)*param_2;
    uVar1 = 2;
  }
  *(undefined1 *)(param_1 + 10) = uVar1;
  return param_1;
}



/* Address: 0x1009d913c | FUN_1009d913c */

int * FUN_1009d913c(int *param_1,int *param_2)

{
  long lVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (param_1 == param_2) {
    return param_1;
  }
  uVar3 = (uint)*(byte *)(param_1 + 0x14);
  if (3 < *(byte *)(param_1 + 0x14)) {
    uVar3 = *param_1 + 4;
  }
  if (uVar3 == 3) {
LAB_1009d9180:
    FUN_100004594(param_1);
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0xe));
  }
  else if (uVar3 == 1) {
    FUN_100004594(param_1);
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0xe));
    _swift_errorRelease(*(undefined8 *)(param_1 + 0x12));
  }
  else if (uVar3 == 0) goto LAB_1009d9180;
  uVar3 = (uint)*(byte *)(param_2 + 0x14);
  if (3 < *(byte *)(param_2 + 0x14)) {
    uVar3 = *param_2 + 4;
  }
  if ((int)uVar3 < 2) {
    if (uVar3 == 0) {
      lVar1 = *(long *)(param_2 + 6);
      *(long *)(param_1 + 6) = lVar1;
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      (*(code *)**(undefined8 **)(lVar1 + -8))(param_1,param_2);
      *(char *)(param_1 + 10) = (char)param_2[10];
      *(undefined1 *)((long)param_1 + 0x29) = *(undefined1 *)((long)param_2 + 0x29);
      *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
      *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
      *(undefined1 *)(param_1 + 0x14) = 0;
      _swift_bridgeObjectRetain();
      return param_1;
    }
    if (uVar3 != 1) {
LAB_1009d92a0:
      uVar4 = *(undefined8 *)param_2;
      uVar6 = *(undefined8 *)(param_2 + 6);
      uVar5 = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar4;
      *(undefined8 *)(param_1 + 6) = uVar6;
      *(undefined8 *)(param_1 + 4) = uVar5;
      uVar5 = *(undefined8 *)(param_2 + 10);
      uVar4 = *(undefined8 *)(param_2 + 8);
      uVar7 = *(undefined8 *)(param_2 + 0xe);
      uVar6 = *(undefined8 *)(param_2 + 0xc);
      uVar9 = *(undefined8 *)(param_2 + 0x12);
      uVar8 = *(undefined8 *)(param_2 + 0x10);
      *(char *)(param_1 + 0x14) = (char)param_2[0x14];
      *(undefined8 *)(param_1 + 0xe) = uVar7;
      *(undefined8 *)(param_1 + 0xc) = uVar6;
      *(undefined8 *)(param_1 + 0x12) = uVar9;
      *(undefined8 *)(param_1 + 0x10) = uVar8;
      *(undefined8 *)(param_1 + 10) = uVar5;
      *(undefined8 *)(param_1 + 8) = uVar4;
      return param_1;
    }
    lVar1 = *(long *)(param_2 + 6);
    *(long *)(param_1 + 6) = lVar1;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    (*(code *)**(undefined8 **)(lVar1 + -8))(param_1,param_2);
    *(char *)(param_1 + 10) = (char)param_2[10];
    *(undefined1 *)((long)param_1 + 0x29) = *(undefined1 *)((long)param_2 + 0x29);
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    uVar4 = *(undefined8 *)(param_2 + 0x12);
    _swift_bridgeObjectRetain();
    _swift_errorRetain(uVar4);
    *(undefined8 *)(param_1 + 0x12) = uVar4;
    uVar2 = 1;
  }
  else {
    if (uVar3 != 2) {
      if (uVar3 == 3) {
        lVar1 = *(long *)(param_2 + 6);
        *(long *)(param_1 + 6) = lVar1;
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
        (*(code *)**(undefined8 **)(lVar1 + -8))(param_1,param_2);
        *(char *)(param_1 + 10) = (char)param_2[10];
        *(undefined1 *)((long)param_1 + 0x29) = *(undefined1 *)((long)param_2 + 0x29);
        *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
        *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
        *(undefined1 *)(param_1 + 0x14) = 3;
        _swift_bridgeObjectRetain();
        return param_1;
      }
      goto LAB_1009d92a0;
    }
    *(char *)param_1 = (char)*param_2;
    uVar2 = 2;
  }
  *(undefined1 *)(param_1 + 0x14) = uVar2;
  return param_1;
}



/* Address: 0x1009d933c | FUN_1009d933c */

void FUN_1009d933c(undefined8 *param_1,undefined8 *param_2)

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
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  param_1[9] = uVar6;
  param_1[8] = uVar5;
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  return;
}



/* Address: 0x1009d9360 | FUN_1009d9360 */

void FUN_1009d9360(int *param_1,int *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_1 == param_2) {
    return;
  }
  uVar1 = (uint)*(byte *)(param_1 + 0x14);
  if (3 < *(byte *)(param_1 + 0x14)) {
    uVar1 = *param_1 + 4;
  }
  if (uVar1 == 3) {
LAB_1009d93a0:
    FUN_100004594();
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0xe));
  }
  else if (uVar1 == 1) {
    FUN_100004594();
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0xe));
    _swift_errorRelease(*(undefined8 *)(param_1 + 0x12));
  }
  else if (uVar1 == 0) goto LAB_1009d93a0;
  uVar1 = (uint)*(byte *)(param_2 + 0x14);
  if (3 < *(byte *)(param_2 + 0x14)) {
    uVar1 = *param_2 + 4;
  }
  if ((int)uVar1 < 2) {
    if (uVar1 == 0) {
      uVar2 = *(undefined8 *)(param_2 + 8);
      uVar4 = *(undefined8 *)(param_2 + 0xe);
      uVar3 = *(undefined8 *)(param_2 + 0xc);
      *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
      *(undefined8 *)(param_1 + 8) = uVar2;
      *(undefined8 *)(param_1 + 0xe) = uVar4;
      *(undefined8 *)(param_1 + 0xc) = uVar3;
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
      uVar4 = *(undefined8 *)param_2;
      uVar3 = *(undefined8 *)(param_2 + 6);
      uVar2 = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar4;
      *(undefined8 *)(param_1 + 6) = uVar3;
      *(undefined8 *)(param_1 + 4) = uVar2;
      *(undefined1 *)(param_1 + 0x14) = 0;
      return;
    }
    if (uVar1 != 1) {
LAB_1009d9438:
      uVar2 = *(undefined8 *)(param_2 + 8);
      uVar4 = *(undefined8 *)(param_2 + 0xe);
      uVar3 = *(undefined8 *)(param_2 + 0xc);
      *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
      *(undefined8 *)(param_1 + 8) = uVar2;
      *(undefined8 *)(param_1 + 0xe) = uVar4;
      *(undefined8 *)(param_1 + 0xc) = uVar3;
      uVar2 = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
      *(undefined8 *)(param_1 + 0x10) = uVar2;
      *(char *)(param_1 + 0x14) = (char)param_2[0x14];
      uVar2 = *(undefined8 *)param_2;
      uVar4 = *(undefined8 *)(param_2 + 6);
      uVar3 = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar2;
      *(undefined8 *)(param_1 + 6) = uVar4;
      *(undefined8 *)(param_1 + 4) = uVar3;
      return;
    }
    uVar2 = *(undefined8 *)(param_2 + 8);
    uVar4 = *(undefined8 *)(param_2 + 0xe);
    uVar3 = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(param_1 + 8) = uVar2;
    *(undefined8 *)(param_1 + 0xe) = uVar4;
    *(undefined8 *)(param_1 + 0xc) = uVar3;
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    uVar4 = *(undefined8 *)param_2;
    uVar3 = *(undefined8 *)(param_2 + 6);
    uVar2 = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)param_1 = uVar4;
    *(undefined8 *)(param_1 + 6) = uVar3;
    *(undefined8 *)(param_1 + 4) = uVar2;
  }
  else if (uVar1 == 2) {
    *(char *)param_1 = (char)*param_2;
    uVar1 = 2;
  }
  else {
    if (uVar1 != 3) goto LAB_1009d9438;
    uVar2 = *(undefined8 *)param_2;
    uVar4 = *(undefined8 *)(param_2 + 6);
    uVar3 = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)param_1 = uVar2;
    *(undefined8 *)(param_1 + 6) = uVar4;
    *(undefined8 *)(param_1 + 4) = uVar3;
    uVar2 = *(undefined8 *)(param_2 + 8);
    uVar4 = *(undefined8 *)(param_2 + 0xe);
    uVar3 = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(param_1 + 8) = uVar2;
    *(undefined8 *)(param_1 + 0xe) = uVar4;
    *(undefined8 *)(param_1 + 0xc) = uVar3;
  }
  *(char *)(param_1 + 0x14) = (char)uVar1;
  return;
}



/* Address: 0x1009d9498 | FUN_1009d9498 */

int FUN_1009d9498(int *param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfb < param_2) && (*(char *)((long)param_1 + 0x51) != '\0')) {
    return *param_1 + 0xfc;
  }
  iVar1 = 0;
  if (4 < *(byte *)(param_1 + 0x14)) {
    iVar1 = (*(byte *)(param_1 + 0x14) ^ 0xff) + 1;
  }
  return iVar1;
}



/* Address: 0x1009d94d4 | FUN_1009d94d4 */

void FUN_1009d94d4(int *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xfc) {
    if (0xfb < param_3) {
      *(undefined1 *)((long)param_1 + 0x51) = 0;
    }
    if (param_2 != 0) {
      *(char *)(param_1 + 0x14) = -(char)param_2;
      return;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x14) = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[0] = 0;
    param_1[1] = 0;
    *param_1 = param_2 - 0xfc;
    if (0xfb < param_3) {
      *(undefined1 *)((long)param_1 + 0x51) = 1;
    }
  }
  return;
}



/* Address: 0x1009d9528 | FUN_1009d9528 */

uint FUN_1009d9528(int *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 0x14);
  if (3 < *(byte *)(param_1 + 0x14)) {
    uVar1 = *param_1 + 4;
  }
  return uVar1;
}



/* Address: 0x1009d9544 | FUN_1009d9544 */

void FUN_1009d9544(int *param_1,uint param_2)

{
  if (3 < param_2) {
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[0] = 0;
    param_1[1] = 0;
    *param_1 = param_2 - 4;
    param_2 = 4;
  }
  *(char *)(param_1 + 0x14) = (char)param_2;
  return;
}



/* Address: 0x1009d9570 | FUN_1009d9570 */

undefined1  [16] FUN_1009d9570(void)

{
  return ZEXT816(0x100f263d8);
}



/* Address: 0x1009d9580 | FUN_1009d9580 */

void FUN_1009d9580(void)

{
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == *(long *)PTR____stack_chk_guard_100ea82f0) {
    FUN_1009d0990();
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1009d95d8 | thunk_FUN_1009d8568 */

void thunk_FUN_1009d8568(void)

{
  FUN_1009d8568();
  return;
}



/* Address: 0x1009d95dc | thunk_FUN_1009d8568 */

void thunk_FUN_1009d8568(void)

{
  FUN_1009d8568();
  return;
}



/* Address: 0x1009d95e0 | thunk_FUN_1009d8568 */

void thunk_FUN_1009d8568(void)

{
  FUN_1009d8568();
  return;
}



/* Address: 0x1009d95e4 | thunk_FUN_1009d8cf0 */

void thunk_FUN_1009d8cf0(void)

{
  FUN_1009d8cf0();
  return;
}



/* Address: 0x1009d95e8 | thunk_FUN_1009d1038 */

void thunk_FUN_1009d1038(void)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  char *pcVar4;
  long unaff_x22;
  
  cVar1 = *(char *)(unaff_x22 + 0x30);
  FUN_10005241c(*(undefined8 *)(unaff_x22 + 0x20),FUN_1009df7d0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
  pcVar4 = *(char **)(unaff_x22 + 0x10);
  if (cVar1 == '\r') {
    _swift_task_dealloc(uVar2);
    pcVar4[0x38] = '\0';
    pcVar4[0x39] = '\0';
    pcVar4[0x3a] = '\0';
    pcVar4[0x3b] = '\0';
    pcVar4[0x3c] = '\0';
    pcVar4[0x3d] = '\0';
    pcVar4[0x3e] = '\0';
    pcVar4[0x3f] = '\0';
    pcVar4[0x30] = '\0';
    pcVar4[0x31] = '\0';
    pcVar4[0x32] = '\0';
    pcVar4[0x33] = '\0';
    pcVar4[0x34] = '\0';
    pcVar4[0x35] = '\0';
    pcVar4[0x36] = '\0';
    pcVar4[0x37] = '\0';
    pcVar4[0x48] = '\0';
    pcVar4[0x49] = '\0';
    pcVar4[0x4a] = '\0';
    pcVar4[0x4b] = '\0';
    pcVar4[0x4c] = '\0';
    pcVar4[0x4d] = '\0';
    pcVar4[0x4e] = '\0';
    pcVar4[0x4f] = '\0';
    pcVar4[0x40] = '\0';
    pcVar4[0x41] = '\0';
    pcVar4[0x42] = '\0';
    pcVar4[0x43] = '\0';
    pcVar4[0x44] = '\0';
    pcVar4[0x45] = '\0';
    pcVar4[0x46] = '\0';
    pcVar4[0x47] = '\0';
    pcVar4[0x18] = '\0';
    pcVar4[0x19] = '\0';
    pcVar4[0x1a] = '\0';
    pcVar4[0x1b] = '\0';
    pcVar4[0x1c] = '\0';
    pcVar4[0x1d] = '\0';
    pcVar4[0x1e] = '\0';
    pcVar4[0x1f] = '\0';
    pcVar4[0x10] = '\0';
    pcVar4[0x11] = '\0';
    pcVar4[0x12] = '\0';
    pcVar4[0x13] = '\0';
    pcVar4[0x14] = '\0';
    pcVar4[0x15] = '\0';
    pcVar4[0x16] = '\0';
    pcVar4[0x17] = '\0';
    pcVar4[0x28] = '\0';
    pcVar4[0x29] = '\0';
    pcVar4[0x2a] = '\0';
    pcVar4[0x2b] = '\0';
    pcVar4[0x2c] = '\0';
    pcVar4[0x2d] = '\0';
    pcVar4[0x2e] = '\0';
    pcVar4[0x2f] = '\0';
    pcVar4[0x20] = '\0';
    pcVar4[0x21] = '\0';
    pcVar4[0x22] = '\0';
    pcVar4[0x23] = '\0';
    pcVar4[0x24] = '\0';
    pcVar4[0x25] = '\0';
    pcVar4[0x26] = '\0';
    pcVar4[0x27] = '\0';
    pcVar4[8] = '\0';
    pcVar4[9] = '\0';
    pcVar4[10] = '\0';
    pcVar4[0xb] = '\0';
    pcVar4[0xc] = '\0';
    pcVar4[0xd] = '\0';
    pcVar4[0xe] = '\0';
    pcVar4[0xf] = '\0';
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4[4] = '\0';
    pcVar4[5] = '\0';
    pcVar4[6] = '\0';
    pcVar4[7] = '\0';
    uVar3 = 4;
  }
  else {
    *pcVar4 = cVar1;
    _swift_task_dealloc(uVar2);
    uVar3 = 2;
  }
  *(undefined1 *)(*(long *)(unaff_x22 + 0x10) + 0x50) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x0001009d10bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}


