/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1005e8af8 | FUN_1005e8af8 */

void FUN_1005e8af8(void)

{
  FUN_1005e8b0c();
  return;
}



/* Address: 0x1005e8b0c | FUN_1005e8b0c */

undefined8 *
FUN_1005e8b0c(undefined8 *param_1,undefined8 *param_2,long param_3,code *param_4,code *param_5)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (param_1 != param_2) {
    uVar6 = *(undefined8 *)(param_3 + 0x10);
    lVar2 = 0;
    (*param_4)(0,uVar6);
    (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1,lVar2);
    puVar3 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,lVar2);
    bVar1 = (int)puVar3 != 1;
    if (bVar1) {
      puVar4 = &DAT_100fd4f20;
      FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
      lVar5 = 0;
      (*param_5)(0,uVar6,puVar4,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      (**(code **)(*(long *)(lVar5 + -8) + 0x10))(param_1,param_2,lVar5);
    }
    else {
      *param_1 = *param_2;
      _swift_retain();
    }
    _swift_storeEnumTagMultiPayload(param_1,lVar2,!bVar1);
  }
  return param_1;
}



/* Address: 0x1005e8bf0 | FUN_1005e8bf0 */

void FUN_1005e8bf0(void)

{
  FUN_1005e8c04();
  return;
}



/* Address: 0x1005e8c04 | FUN_1005e8c04 */

void * FUN_1005e8c04(void *param_1,void *param_2,long param_3,code *param_4,code *param_5)

{
  long lVar1;
  void *pvVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_3 + 0x10);
  lVar1 = 0;
  (*param_4)(0,uVar5);
  pvVar2 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,lVar1);
  if ((int)pvVar2 != 0) {
    pvVar2 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(lVar1 + -8) + 0x40));
    return pvVar2;
  }
  puVar3 = &DAT_100fd4f20;
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  lVar4 = 0;
  (*param_5)(0,uVar5,puVar3,PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90)
  ;
  (**(code **)(*(long *)(lVar4 + -8) + 0x20))(param_1,param_2,lVar4);
  _swift_storeEnumTagMultiPayload(param_1,lVar1,0);
  return param_1;
}



/* Address: 0x1005e8cd8 | FUN_1005e8cd8 */

void FUN_1005e8cd8(void)

{
  FUN_1005e8cec();
  return;
}



/* Address: 0x1005e8cec | FUN_1005e8cec */

void * FUN_1005e8cec(void *param_1,void *param_2,long param_3,code *param_4,code *param_5)

{
  long lVar1;
  void *pvVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (param_1 != param_2) {
    uVar4 = *(undefined8 *)(param_3 + 0x10);
    lVar1 = 0;
    (*param_4)(0,uVar4);
    lVar5 = *(long *)(lVar1 + -8);
    (**(code **)(lVar5 + 8))(param_1,lVar1);
    pvVar2 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,lVar1);
    if ((int)pvVar2 != 0) {
      pvVar2 = _memcpy(param_1,param_2,*(size_t *)(lVar5 + 0x40));
      return pvVar2;
    }
    puVar3 = &DAT_100fd4f20;
    FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
    lVar5 = 0;
    (*param_5)(0,uVar4,puVar3,
               PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    (**(code **)(*(long *)(lVar5 + -8) + 0x20))(param_1,param_2,lVar5);
    _swift_storeEnumTagMultiPayload(param_1,lVar1,0);
  }
  return param_1;
}



/* Address: 0x1005e8dd8 | FUN_1005e8dd8 */

void FUN_1005e8dd8(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1005e8de4 | FUN_1005e8de4 */

void FUN_1005e8de4(void)

{
  FUN_1005e8df0();
  return;
}



/* Address: 0x1005e8df0 | FUN_1005e8df0 */

void FUN_1005e8df0(undefined8 param_1,undefined8 param_2,long param_3,code *param_4)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_4)(0,*(undefined8 *)(param_3 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001005e8e2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x30))(param_1,param_2,lVar1);
  return;
}



/* Address: 0x1005e8e30 | FUN_1005e8e30 */

void FUN_1005e8e30(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1005e8e3c | FUN_1005e8e3c */

void FUN_1005e8e3c(void)

{
  FUN_1005e8e48();
  return;
}



/* Address: 0x1005e8e48 | FUN_1005e8e48 */

void FUN_1005e8e48(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  code *param_5)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_5)(0,*(undefined8 *)(param_4 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001005e8e88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,param_2,param_2,lVar1);
  return;
}



/* Address: 0x1005e8e8c | FUN_1005e8e8c */

void FUN_1005e8e8c(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1005e8e98 | FUN_1005e8e98 */

void FUN_1005e8e98(void)

{
  FUN_1005e8ea4();
  return;
}



/* Address: 0x1005e8ea4 | FUN_1005e8ea4 */

void FUN_1005e8ea4(long param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long local_40;
  undefined *puStack_38;
  
  uVar3 = *(ulong *)(param_1 + 0x10);
  puVar1 = &DAT_100fd4f20;
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  lVar2 = 0x13f;
  (*param_4)(0x13f,uVar3,puVar1,
             PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
  if (uVar3 < 0x40) {
    local_40 = *(long *)(lVar2 + -8) + 0x40;
    puStack_38 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
    _swift_initEnumMetadataMultiPayload(param_1,0,2,&local_40);
  }
  return;
}



/* Address: 0x1005e8f48 | FUN_1005e8f48 */

void FUN_1005e8f48(void)

{
  FUN_1005e8f54();
  return;
}



/* Address: 0x1005e8f54 | FUN_1005e8f54 */

long * FUN_1005e8f54(long *param_1,long *param_2,long param_3,code *param_4)

{
  uint uVar1;
  bool bVar2;
  long *plVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    plVar3 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    bVar2 = (int)plVar3 != 1;
    if (bVar2) {
      uVar7 = *(undefined8 *)(param_3 + 0x10);
      puVar4 = &DAT_100fd4f20;
      FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
      lVar5 = 0;
      (*param_4)(0,uVar7,puVar4,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      (**(code **)(*(long *)(lVar5 + -8) + 0x10))(param_1,param_2,lVar5);
    }
    else {
      *param_1 = *param_2;
      _swift_retain();
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,!bVar2);
  }
  else {
    lVar5 = *param_2;
    *param_1 = lVar5;
    uVar6 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar5 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1005e9044 | FUN_1005e9044 */

void FUN_1005e9044(undefined8 param_1,undefined8 param_2)

{
  FUN_1005e9050(param_1,param_2,PTR_typeMetadataAccessor_100eaee90);
  return;
}



/* Address: 0x1005e9050 | FUN_1005e9050 */

void FUN_1005e9050(undefined8 *param_1,long param_2,code *param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = param_1;
  _swift_getEnumCaseMultiPayload();
  if ((int)puVar1 == 1) {
    _swift_release(*param_1);
    return;
  }
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  puVar2 = &DAT_100fd4f20;
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  lVar3 = 0;
  (*param_3)(0,uVar4,puVar2,PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90)
  ;
                    /* WARNING: Could not recover jumptable at 0x0001005e90d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar3 + -8) + 8))(param_1,lVar3);
  return;
}



/* Address: 0x1005e90dc | FUN_1005e90dc */

void FUN_1005e90dc(void)

{
  FUN_1005e90e8();
  return;
}



/* Address: 0x1005e90e8 | FUN_1005e90e8 */

undefined8 * FUN_1005e90e8(undefined8 *param_1,undefined8 *param_2,long param_3,code *param_4)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar2 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  bVar1 = (int)puVar2 != 1;
  if (bVar1) {
    uVar5 = *(undefined8 *)(param_3 + 0x10);
    puVar3 = &DAT_100fd4f20;
    FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
    lVar4 = 0;
    (*param_4)(0,uVar5,puVar3,
               PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    (**(code **)(*(long *)(lVar4 + -8) + 0x10))(param_1,param_2,lVar4);
  }
  else {
    *param_1 = *param_2;
    _swift_retain();
  }
  _swift_storeEnumTagMultiPayload(param_1,param_3,!bVar1);
  return param_1;
}



/* Address: 0x1005e91a4 | FUN_1005e91a4 */

void FUN_1005e91a4(void)

{
  FUN_1005e91b0();
  return;
}



/* Address: 0x1005e91b0 | FUN_1005e91b0 */

undefined8 * FUN_1005e91b0(undefined8 *param_1,undefined8 *param_2,long param_3,code *param_4)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (param_1 != param_2) {
    (**(code **)(*(long *)(param_3 + -8) + 8))(param_1,param_3);
    puVar2 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    bVar1 = (int)puVar2 != 1;
    if (bVar1) {
      uVar5 = *(undefined8 *)(param_3 + 0x10);
      puVar3 = &DAT_100fd4f20;
      FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
      lVar4 = 0;
      (*param_4)(0,uVar5,puVar3,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      (**(code **)(*(long *)(lVar4 + -8) + 0x10))(param_1,param_2,lVar4);
    }
    else {
      *param_1 = *param_2;
      _swift_retain();
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,!bVar1);
  }
  return param_1;
}



/* Address: 0x1005e9288 | FUN_1005e9288 */

void FUN_1005e9288(void)

{
  FUN_1005e9294();
  return;
}



/* Address: 0x1005e9294 | FUN_1005e9294 */

void * FUN_1005e9294(void *param_1,void *param_2,long param_3,code *param_4)

{
  void *pvVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  pvVar1 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  if ((int)pvVar1 != 0) {
    pvVar1 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
    return pvVar1;
  }
  uVar4 = *(undefined8 *)(param_3 + 0x10);
  puVar2 = &DAT_100fd4f20;
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  lVar3 = 0;
  (*param_4)(0,uVar4,puVar2,PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90)
  ;
  (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1,param_2,lVar3);
  _swift_storeEnumTagMultiPayload(param_1,param_3,0);
  return param_1;
}



/* Address: 0x1005e935c | FUN_1005e935c */

void FUN_1005e935c(void)

{
  FUN_1005e9368();
  return;
}



/* Address: 0x1005e9368 | FUN_1005e9368 */

void * FUN_1005e9368(void *param_1,void *param_2,long param_3,code *param_4)

{
  void *pvVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_1 != param_2) {
    lVar3 = *(long *)(param_3 + -8);
    (**(code **)(lVar3 + 8))(param_1,param_3);
    pvVar1 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    if ((int)pvVar1 != 0) {
      pvVar1 = _memcpy(param_1,param_2,*(size_t *)(lVar3 + 0x40));
      return pvVar1;
    }
    uVar4 = *(undefined8 *)(param_3 + 0x10);
    puVar2 = &DAT_100fd4f20;
    FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
    lVar3 = 0;
    (*param_4)(0,uVar4,puVar2,
               PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1,param_2,lVar3);
    _swift_storeEnumTagMultiPayload(param_1,param_3,0);
  }
  return param_1;
}



/* Address: 0x1005e9448 | thunk_FUN_1000c9ff0 */

void thunk_FUN_1000c9ff0(void)

{
  FUN_1000c9ff0();
  return;
}



/* Address: 0x1005e944c | thunk_FUN_1000c9ffc */

void thunk_FUN_1000c9ffc(void)

{
  FUN_1000c9ffc();
  return;
}



/* Address: 0x1005e9450 | _swift_getEnumCaseMultiPayload */

void _swift_getEnumCaseMultiPayload(void)

{
  _swift_getEnumCaseMultiPayload();
  return;
}



/* Address: 0x1005e9454 | thunk_FUN_1000ca00c */

void thunk_FUN_1000ca00c(void)

{
  FUN_1000ca00c();
  return;
}



/* Address: 0x1005e9458 | FUN_1005e9458 */

void FUN_1005e9458(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  TargetProtocolConformanceDescriptor *pTVar4;
  Continuation_conflict CVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  lVar1 = 0;
  FUN_1005e9588(0,uVar6);
  puVar7 = (undefined8 *)
           (&stack0xffffffffffffffc0 +
           -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(puVar7);
  puVar2 = puVar7;
  _swift_getEnumCaseMultiPayload(puVar7,lVar1);
  if ((int)puVar2 == 1) {
    uVar8 = *puVar7;
    uVar3 = 0;
    FUN_1005e6500(0,uVar6);
    pTVar4 = &TargetProtocolConformanceDescriptor_100c661a4;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c661a4,uVar3);
    FUN_1005ec47c(uVar8,uVar6,uVar3,pTVar4);
    _swift_release(uVar8);
  }
  else {
    CVar5 = Swift::AsyncStream::Continuation::typeMetadataAccessor();
    lVar9 = *(long *)(CVar5.unknown + -8);
    lVar1 = (long)puVar7 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar9 + 0x20))(lVar1,puVar7,CVar5.unknown);
    Swift::AsyncStream::Continuation::finish(CVar5);
    (**(code **)(lVar9 + 8))(lVar1,CVar5.unknown);
  }
  return;
}



/* Address: 0x1005e9588 | FUN_1005e9588 */

void FUN_1005e9588(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1005e9594 | FUN_1005e9594 */

void FUN_1005e9594(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_108 [24];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  lVar4 = *param_4;
  _swift_getObjectType();
  FUN_100642338();
  lVar5 = *(long *)(lVar4 + 0x60);
  FUN_1005e668c(&local_a8,param_4);
  uStack_e8 = uStack_a0;
  local_f0 = local_a8;
  uStack_d8 = uStack_90;
  uStack_e0 = local_98;
  uStack_c8 = uStack_80;
  local_d0 = local_88;
  uStack_b8 = uStack_70;
  uStack_c0 = local_78;
  uVar1 = 0;
  FUN_1005e6500(0,lVar5);
  pTVar2 = &TargetProtocolConformanceDescriptor_100c661a4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c661a4,uVar1);
  lVar3 = 1;
  lVar4 = lVar5;
  FUN_1005ec260(lVar5,1,param_6,&local_f0,lVar5,uVar1,pTVar2);
  _swift_release(uStack_70);
  _swift_release(uStack_80);
  _swift_release(uStack_90);
  _swift_unknownObjectRelease(local_a8);
  _swift_unknownObjectRelease(param_2);
  _swift_beginAccess(param_4 + 0xb,&local_f0,1,0);
  lVar6 = param_4[0xb];
  param_4[0xb] = lVar4;
  _swift_retain(lVar4);
  _swift_release(lVar6);
  _swift_beginAccess(param_4 + 0xc,auStack_108,1,0);
  lVar6 = param_4[0xc];
  param_4[0xc] = lVar3;
  _swift_retain(lVar3);
  _swift_release(lVar4);
  _swift_release(param_4);
  _swift_release(lVar6);
  *param_1 = lVar3;
  uVar1 = 0;
  FUN_1005e9588(0,lVar5);
  _swift_storeEnumTagMultiPayload(param_1,uVar1,1);
  return;
}



/* Address: 0x1005e9738 | FUN_1005e9738 */

void FUN_1005e9738(undefined8 param_1)

{
  FUN_1005e7898(param_1,PTR_typeMetadataAccessor_100eaece8);
  return;
}



/* Address: 0x1005e9744 | FUN_1005e9744 */

void FUN_1005e9744(undefined8 param_1,long param_2)

{
  int iVar1;
  Continuation_conflict CVar2;
  long unaff_x20;
  
  iVar1 = *(int *)(param_2 + 0x1c);
  CVar2 = Swift::AsyncStream::Continuation::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001005e9788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(CVar2.unknown + -8) + 0x10))(param_1,unaff_x20 + iVar1,CVar2.unknown);
  return;
}



/* Address: 0x1005e978c | FUN_1005e978c */

void FUN_1005e978c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  AsyncStream AVar2;
  long lVar3;
  Continuation_conflict CVar4;
  
  AVar2 = Swift::AsyncStream::typeMetadataAccessor();
  (**(code **)(*(long *)(AVar2.unknown + -8) + 0x20))(param_1,param_2,AVar2.unknown);
  lVar3 = 0;
  FUN_1005eac50(0,param_4);
  iVar1 = *(int *)(lVar3 + 0x1c);
  CVar4 = Swift::AsyncStream::Continuation::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001005e980c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(CVar4.unknown + -8) + 0x20))(param_1 + iVar1,param_3,CVar4.unknown);
  return;
}



/* Address: 0x1005e9810 | FUN_1005e9810 */

void FUN_1005e9810(undefined8 param_1)

{
  Iterator IVar1;
  AsyncStream AVar2;
  long lVar3;
  long lVar4;
  
  IVar1 = Swift::AsyncStream::Iterator::typeMetadataAccessor();
  lVar4 = *(long *)(IVar1.unknown + -8);
  lVar3 = *(long *)(lVar4 + 0x40);
  AVar2 = Swift::AsyncStream::typeMetadataAccessor();
  Swift::AsyncStream::_makeAsyncIterator(AVar2);
  (**(code **)(lVar4 + 0x20))
            (param_1,&stack0xffffffffffffffc0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),IVar1.unknown);
  return;
}



/* Address: 0x1005e9898 | FUN_1005e9898 */

void FUN_1005e9898(undefined8 param_1,undefined8 param_2)

{
  Iterator IVar1;
  
  IVar1 = Swift::AsyncStream::Iterator::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001005e98d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(IVar1.unknown + -8) + 0x20))(param_1,param_2,IVar1.unknown);
  return;
}



/* Address: 0x1005e98d4 | FUN_1005e98d4 */

void FUN_1005e98d4(undefined8 param_1)

{
  FUN_1005e7898(param_1,PTR_typeMetadataAccessor_100eaecd0);
  return;
}



/* Address: 0x1005e98e0 | FUN_1005e98e0 */

void FUN_1005e98e0(void)

{
  Iterator IVar1;
  
  IVar1 = Swift::AsyncStream::Iterator::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001005e9918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(IVar1.unknown + -8) + 0x28))();
  return;
}



/* Address: 0x1005e991c | FUN_1005e991c */

void FUN_1005e991c(Iterator param_1)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)(ulong)*(uint *)(PTR__next_100eaecc8 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  Swift::AsyncStream::Iterator::typeMetadataAccessor();
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  Swift::AsyncStream::Iterator::_next(param_1);
  return;
}



/* Address: 0x1005e9994 | FUN_1005e9994 */

void FUN_1005e9994(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005dfae0;
  FUN_1005e991c(plVar1,param_1,param_2);
  return;
}



/* Address: 0x1005e99fc | FUN_1005e99fc */

void FUN_1005e99fc(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)(ulong)*(uint *)(PTR__next_100eaebe8 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005e9a88;
  (extension_Swift)::Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x1005e9a88 | FUN_1005e9a88 */

void FUN_1005e9a88(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001005e9ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Address: 0x1005e9ad4 | FUN_1005e9ad4 */

void FUN_1005e9ad4(long param_1)

{
  FUN_1005e9810();
                    /* WARNING: Could not recover jumptable at 0x0001005e9b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -8) + 8))();
  return;
}



/* Address: 0x1005e9b04 | FUN_1005e9b04 */

void FUN_1005e9b04(undefined8 param_1)

{
  FUN_1005e7898(param_1,FUN_1005e9588);
  return;
}



/* Address: 0x1005e9b10 | FUN_1005e9b10 */

void FUN_1005e9b10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  Optional OVar1;
  BufferingPolicy BVar2;
  Continuation_conflict CVar3;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  long lVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long local_b0;
  undefined8 local_a8;
  long local_a0;
  long local_98;
  long local_90;
  undefined *puStack_88;
  undefined8 local_70;
  long lStack_68;
  long lVar4;
  
  local_a8 = param_2;
  local_a0 = param_1;
  CVar3 = Swift::AsyncStream::Continuation::typeMetadataAccessor();
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar4 = CONCAT71(extraout_var,OVar1.value);
  lVar6 = *(long *)(lVar4 + -8);
  uVar14 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar8 = (long)&local_b0 - uVar14;
  lVar9 = *(long *)(CVar3.unknown + -8);
  (**(code **)(lVar9 + 0x38))(lVar8,1,1,CVar3.unknown);
  puStack_88 = (undefined *)Swift::AsyncStream::typeMetadataAccessor();
  local_90 = *(long *)(puStack_88 + -8);
  uVar12 = *(long *)(local_90 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar11 = lVar8 - uVar12;
  local_70 = param_3;
  lStack_68 = lVar8;
  BVar2 = Swift::AsyncStream::Continuation::BufferingPolicy::typeMetadataAccessor();
  lVar5 = *(long *)(CONCAT71(extraout_var_00,BVar2.value) + -8);
  lVar13 = lVar11 - (*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar5 + 0x68))
            (lVar13,*(undefined4 *)
                     PTR___enum_case_for_Swift_AsyncStream_Continuation_BufferingPolicy_unbounded<A>_Swift_AsyncStream<A>_Continuation_BufferingPolicy_Type___>_Swift_AsyncStream<A>_Continuation_BufferingPolicy_100eaec78
             ,CONCAT71(extraout_var_00,BVar2.value));
  Swift::AsyncStream::_init((BufferingPolicy)(__int8)param_3);
  lVar13 = lVar13 - uVar14;
  pcVar7 = *(code **)(lVar6 + 0x10);
  local_b0 = lVar6;
  local_98 = lVar4;
  (*pcVar7)(lVar13,lVar8,lVar4);
  pcVar10 = *(code **)(lVar9 + 0x30);
  lVar4 = lVar13;
  (*pcVar10)(lVar13,1,CVar3.unknown);
  if ((int)lVar4 == 1) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x1005e9d44);
    (*pcVar7)();
  }
  FUN_1005e9dcc(local_a0,lVar13,param_3);
  lVar6 = lVar13 - uVar12;
  local_a0 = lVar13;
  (**(code **)(local_90 + 0x10))(lVar6,lVar11,puStack_88);
  lVar4 = local_98;
  lVar9 = lVar6 - uVar14;
  (*pcVar7)(lVar9,lVar8,local_98);
  lVar5 = lVar9;
  (*pcVar10)(lVar9,1,CVar3.unknown);
  if ((int)lVar5 != 1) {
    (**(code **)(local_90 + 8))(lVar11,puStack_88);
    FUN_1005e978c(local_a8,lVar6,lVar9,param_3);
    (**(code **)(local_b0 + 8))(lVar8,lVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x1005e9d48);
  (*pcVar7)();
}



/* Address: 0x1005e9d48 | FUN_1005e9d48 */

void FUN_1005e9d48(undefined8 param_1,undefined8 param_2)

{
  Optional OVar1;
  Continuation_conflict CVar2;
  undefined7 extraout_var;
  long lVar3;
  
  CVar2 = Swift::AsyncStream::Continuation::typeMetadataAccessor();
  OVar1 = Swift::Optional::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 8))
            (param_2,CONCAT71(extraout_var,OVar1.value));
  lVar3 = *(long *)(CVar2.unknown + -8);
  (**(code **)(lVar3 + 0x10))(param_2,param_1,CVar2.unknown);
                    /* WARNING: Could not recover jumptable at 0x0001005e9dc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x38))(param_2,0,1,CVar2.unknown);
  return;
}



/* Address: 0x1005e9dcc | FUN_1005e9dcc */

void FUN_1005e9dcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  Continuation_conflict CVar1;
  undefined8 uVar2;
  
  CVar1 = Swift::AsyncStream::Continuation::typeMetadataAccessor();
  (**(code **)(*(long *)(CVar1.unknown + -8) + 0x20))(param_1,param_2,CVar1.unknown);
  uVar2 = 0;
  FUN_1005e9588(0,param_3);
  _swift_storeEnumTagMultiPayload(param_1,uVar2,0);
  return;
}



/* Address: 0x1005e9e30 | FUN_1005e9e30 */

void FUN_1005e9e30(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 unaff_x20;
  long lVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
  lVar3 = *(long *)(param_2 + 0x10);
  *(long *)(unaff_x22 + 0x20) = lVar3;
  lVar2 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x28) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x30) = uVar1;
  lVar2 = 0;
  FUN_1005e9588(0,lVar3);
  *(long *)(unaff_x22 + 0x38) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x40) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x48) = uVar1;
  _swift_task_switch(FUN_1005e9ec0,0,0);
  return;
}



/* Address: 0x1005e9ec0 | FUN_1005e9ec0 */

void FUN_1005e9ec0(void)

{
  long lVar1;
  YieldResult YVar2;
  long *plVar3;
  undefined8 uVar4;
  TargetProtocolConformanceDescriptor *pTVar5;
  Continuation_conflict CVar6;
  ulong uVar7;
  undefined7 extraout_var;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  long lVar11;
  long lVar12;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x38);
  (**(code **)(*(long *)(unaff_x22 + 0x40) + 0x10))(uVar4,*(undefined8 *)(unaff_x22 + 0x18),uVar9);
  _swift_getEnumCaseMultiPayload(uVar4,uVar9);
  if ((int)uVar4 == 1) {
    uVar9 = *(undefined8 *)(unaff_x22 + 0x20);
    uVar10 = **(undefined8 **)(unaff_x22 + 0x48);
    *(undefined8 *)(unaff_x22 + 0x50) = uVar10;
    plVar3 = (long *)0x50;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x58) = plVar3;
    uVar4 = 0;
    FUN_1005e6500(0,uVar9);
    pTVar5 = &TargetProtocolConformanceDescriptor_100c661a4;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c661a4,uVar4);
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_1005ea0ac;
    FUN_1005ec2f8(*(undefined8 *)(unaff_x22 + 0x10),uVar10,*(undefined8 *)(unaff_x22 + 0x20),uVar4,
                  pTVar5);
    return;
  }
  lVar1 = *(long *)(unaff_x22 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x10);
  CVar6 = Swift::AsyncStream::Continuation::typeMetadataAccessor();
  lVar11 = *(long *)(CVar6.unknown + -8);
  uVar7 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar7);
  (**(code **)(lVar11 + 0x20))();
  YVar2 = Swift::AsyncStream::Continuation::YieldResult::typeMetadataAccessor();
  lVar12 = *(long *)(CONCAT71(extraout_var,YVar2.value) + -8);
  uVar8 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar8);
  (**(code **)(lVar1 + 0x10))(uVar4,uVar9,uVar10);
  Swift::AsyncStream::Continuation::_yield(uVar8,uVar4,CVar6.unknown);
  (**(code **)(lVar12 + 8))(uVar8,CONCAT71(extraout_var,YVar2.value));
  (**(code **)(lVar11 + 8))(uVar7,CVar6.unknown);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar7);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x30);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x48));
  _swift_task_dealloc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0001005ea0a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005ea0ac | FUN_1005ea0ac */

void FUN_1005ea0ac(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x60) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x58));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1005ea110;
  }
  else {
    pcVar1 = FUN_1005ea160;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1005ea110 | FUN_1005ea110 */

void FUN_1005ea110(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x50));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x48));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001005ea15c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005ea160 | FUN_1005ea160 */

void FUN_1005ea160(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x50));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001005ea1ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005ea1b0 | FUN_1005ea1b0 */

void FUN_1005ea1b0(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  Optional OVar1;
  ulong uVar2;
  ulong uVar3;
  undefined7 extraout_var;
  long lVar4;
  undefined8 unaff_x20;
  long lVar5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_4;
  *(undefined8 *)(unaff_x22 + 0x28) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(long *)(unaff_x22 + 0x18) = param_3;
  lVar5 = *(long *)(param_2 + 0x10);
  *(long *)(unaff_x22 + 0x30) = lVar5;
  lVar4 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0x38) = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x40) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x48) = uVar3;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  uVar3 = *(long *)(*(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 0x40) + 0xfU &
          0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar3;
  lVar4 = *(long *)(param_3 + -8);
  *(long *)(unaff_x22 + 0x58) = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar3;
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
  *(long *)(unaff_x22 + 0x68) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x70) = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x78) = uVar3;
  lVar4 = 0;
  FUN_1005e9588(0,lVar5);
  *(long *)(unaff_x22 + 0x80) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x88) = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x90) = uVar3;
  _swift_task_switch(FUN_1005ea2e0,0,0);
  return;
}



/* Address: 0x1005ea2e0 | FUN_1005ea2e0 */

void FUN_1005ea2e0(void)

{
  long lVar1;
  YieldResult YVar2;
  long *plVar3;
  undefined8 uVar4;
  TargetProtocolConformanceDescriptor *pTVar5;
  Continuation_conflict CVar6;
  ulong uVar7;
  undefined7 extraout_var;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x22;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x80);
  (**(code **)(*(long *)(unaff_x22 + 0x88) + 0x10))(uVar4,*(undefined8 *)(unaff_x22 + 0x28),uVar9);
  _swift_getEnumCaseMultiPayload(uVar4,uVar9);
  if ((int)uVar4 == 1) {
    uVar9 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar10 = **(undefined8 **)(unaff_x22 + 0x90);
    *(undefined8 *)(unaff_x22 + 0x98) = uVar10;
    plVar3 = (long *)0x60;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xa0) = plVar3;
    uVar4 = 0;
    FUN_1005e6500(0,uVar9);
    pTVar5 = &TargetProtocolConformanceDescriptor_100c661a4;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c661a4,uVar4);
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_1005ea5c4;
    FUN_1005ec3dc(*(undefined8 *)(unaff_x22 + 0x10),uVar10,*(undefined8 *)(unaff_x22 + 0x30),uVar4,
                  *(undefined8 *)(unaff_x22 + 0x18),pTVar5,*(undefined8 *)(unaff_x22 + 0x20));
    return;
  }
  lVar12 = *(long *)(unaff_x22 + 0x58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x60);
  lVar1 = *(long *)(unaff_x22 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x10);
  CVar6 = Swift::AsyncStream::Continuation::typeMetadataAccessor();
  lVar14 = *(long *)(CVar6.unknown + -8);
  uVar7 = *(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar7);
  (**(code **)(lVar14 + 0x20))();
  (**(code **)(lVar12 + 0x10))(uVar9,uVar10,uVar4);
  Swift::Sequence::_makeIterator();
  while( true ) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x30);
    _swift_getAssociatedConformanceWitness
              (*(undefined8 *)(unaff_x22 + 0x20),*(undefined8 *)(unaff_x22 + 0x18),
               *(undefined8 *)(unaff_x22 + 0x68),
               PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
               PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
              );
    Swift::IteratorProtocol::_next();
    (**(code **)(lVar1 + 0x30))(uVar4,1,uVar9);
    if ((int)uVar4 == 1) break;
    uVar4 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x30);
    (**(code **)(lVar1 + 0x20))(uVar4,*(undefined8 *)(unaff_x22 + 0x50),uVar10);
    YVar2 = Swift::AsyncStream::Continuation::YieldResult::typeMetadataAccessor();
    lVar12 = *(long *)(CONCAT71(extraout_var,YVar2.value) + -8);
    uVar8 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc(uVar8);
    (**(code **)(lVar1 + 0x10))(uVar9,uVar4,uVar10);
    Swift::AsyncStream::Continuation::_yield(uVar8,uVar9,CVar6.unknown);
    (**(code **)(lVar12 + 8))(uVar8,CONCAT71(extraout_var,YVar2.value));
    (**(code **)(lVar1 + 8))(uVar4,uVar10);
    _swift_task_dealloc(uVar8);
  }
  (**(code **)(*(long *)(unaff_x22 + 0x70) + 8))
            (*(undefined8 *)(unaff_x22 + 0x78),*(undefined8 *)(unaff_x22 + 0x68));
  (**(code **)(lVar14 + 8))(uVar7,CVar6.unknown);
  _swift_task_dealloc(uVar7);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x40);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x90));
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar13);
                    /* WARNING: Could not recover jumptable at 0x0001005ea5c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005ea5c4 | FUN_1005ea5c4 */

void FUN_1005ea5c4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xa8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xa0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1005ea628;
  }
  else {
    pcVar1 = FUN_1005ea6b4;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1005ea628 | FUN_1005ea628 */

void FUN_1005ea628(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x98));
  uVar4 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x40);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x90));
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar5);
                    /* WARNING: Could not recover jumptable at 0x0001005ea6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005ea6b4 | FUN_1005ea6b4 */

void FUN_1005ea6b4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x40);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x98));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar6);
                    /* WARNING: Could not recover jumptable at 0x0001005ea73c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005ea740 | FUN_1005ea740 */

void FUN_1005ea740(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  Optional OVar1;
  ulong uVar2;
  undefined7 extraout_var;
  undefined8 unaff_x20;
  long lVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = unaff_x20;
  *(long *)(unaff_x22 + 0x18) = param_2;
  *(long *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  lVar3 = *(long *)(param_2 + 0x10);
  *(long *)(unaff_x22 + 0x38) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x40) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x48) = uVar2;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  uVar2 = *(long *)(*(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 0x40) + 0xfU &
          0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar2;
  lVar3 = *(long *)(param_3 + -8);
  *(long *)(unaff_x22 + 0x58) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar2;
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  *(long *)(unaff_x22 + 0x68) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x70) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x78) = uVar2;
  _swift_task_switch(FUN_1005ea83c,0,0);
  return;
}



/* Address: 0x1005ea83c | FUN_1005ea83c */

void FUN_1005ea83c(void)

{
  long *plVar1;
  long unaff_x22;
  
  (**(code **)(*(long *)(unaff_x22 + 0x58) + 0x10))
            (*(undefined8 *)(unaff_x22 + 0x60),*(undefined8 *)(unaff_x22 + 0x10),
             *(undefined8 *)(unaff_x22 + 0x20));
  Swift::AsyncSequence::_makeAsyncIterator();
  _swift_getAssociatedConformanceWitness
            (*(undefined8 *)(unaff_x22 + 0x28),*(undefined8 *)(unaff_x22 + 0x20),
             *(undefined8 *)(unaff_x22 + 0x68),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
            );
  plVar1 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x80) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005ea8fc;
  Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x1005ea8fc | FUN_1005ea8fc */

void FUN_1005ea8fc(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x88) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x80));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1005ea960;
  }
  else {
    pcVar1 = FUN_1005eab48;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1005ea960 | FUN_1005ea960 */

void FUN_1005ea960(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar2 = *(long *)(unaff_x22 + 0x40);
  uVar3 = uVar5;
  (**(code **)(lVar2 + 0x30))(uVar5,1,uVar1);
  if ((int)uVar3 == 1) {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x48);
    (**(code **)(*(long *)(unaff_x22 + 0x70) + 8))(uVar3,*(undefined8 *)(unaff_x22 + 0x68));
    _swift_task_dealloc(uVar3);
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar6);
                    /* WARNING: Could not recover jumptable at 0x0001005ea9f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  (**(code **)(lVar2 + 0x20))(*(undefined8 *)(unaff_x22 + 0x48),uVar5,uVar1);
  plVar4 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x90) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1005eaa50;
  FUN_1005e9e30(*(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)(unaff_x22 + 0x18));
  return;
}


