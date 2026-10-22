/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1005eaa50 | FUN_1005eaa50 */

void FUN_1005eaa50(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x98) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x90));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1005eaab4;
  }
  else {
    pcVar1 = FUN_1005eabc4;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1005eaab4 | FUN_1005eaab4 */

void FUN_1005eaab4(void)

{
  long *plVar1;
  long unaff_x22;
  
  (**(code **)(*(long *)(unaff_x22 + 0x40) + 8))
            (*(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)(unaff_x22 + 0x38));
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



/* Address: 0x1005eab48 | FUN_1005eab48 */

void FUN_1005eab48(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
  (**(code **)(*(long *)(unaff_x22 + 0x70) + 8))(uVar3,*(undefined8 *)(unaff_x22 + 0x68));
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001005eabc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005eabc4 | FUN_1005eabc4 */

void FUN_1005eabc4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  (**(code **)(*(long *)(unaff_x22 + 0x40) + 8))
            (*(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)(unaff_x22 + 0x38));
  uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
  (**(code **)(*(long *)(unaff_x22 + 0x70) + 8))(uVar3,*(undefined8 *)(unaff_x22 + 0x68));
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001005eac4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005eac50 | FUN_1005eac50 */

void FUN_1005eac50(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1005eac5c | FUN_1005eac5c */

void FUN_1005eac5c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1005e9d48(param_1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1005eac64 | FUN_1005eac64 */

void FUN_1005eac64(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c664f0,param_1);
  return;
}



/* Address: 0x1005eac74 | FUN_1005eac74 */

void FUN_1005eac74(void)

{
  FUN_1005e87f0();
  return;
}



/* Address: 0x1005eac80 | FUN_1005eac80 */

long * FUN_1005eac80(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  Continuation_conflict CVar5;
  ulong uVar6;
  
  lVar3 = 0;
  FUN_1005e9588(0,*(undefined8 *)(param_3 + 0x10));
  uVar1 = *(uint *)(*(long *)(lVar3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    plVar4 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,lVar3);
    bVar2 = (int)plVar4 != 1;
    if (bVar2) {
      CVar5 = Swift::AsyncStream::Continuation::typeMetadataAccessor();
      (**(code **)(*(long *)(CVar5.unknown + -8) + 0x10))(param_1,param_2,CVar5.unknown);
    }
    else {
      *param_1 = *param_2;
      _swift_retain();
    }
    _swift_storeEnumTagMultiPayload(param_1,lVar3,!bVar2);
  }
  else {
    lVar3 = *param_2;
    *param_1 = lVar3;
    uVar6 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar3 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1005ead50 | FUN_1005ead50 */

void FUN_1005ead50(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  Continuation_conflict CVar3;
  
  uVar1 = 0;
  FUN_1005e9588(0,*(undefined8 *)(param_2 + 0x10));
  puVar2 = param_1;
  _swift_getEnumCaseMultiPayload(param_1,uVar1);
  if ((int)puVar2 == 1) {
    _swift_release(*param_1);
    return;
  }
  CVar3 = Swift::AsyncStream::Continuation::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001005eadb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(CVar3.unknown + -8) + 8))(param_1,CVar3.unknown);
  return;
}



/* Address: 0x1005eadbc | FUN_1005eadbc */

undefined8 * FUN_1005eadbc(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  Continuation_conflict CVar4;
  
  uVar2 = 0;
  FUN_1005e9588(0,*(undefined8 *)(param_3 + 0x10));
  puVar3 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,uVar2);
  bVar1 = (int)puVar3 != 1;
  if (bVar1) {
    CVar4 = Swift::AsyncStream::Continuation::typeMetadataAccessor();
    (**(code **)(*(long *)(CVar4.unknown + -8) + 0x10))(param_1,param_2,CVar4.unknown);
  }
  else {
    *param_1 = *param_2;
    _swift_retain();
  }
  _swift_storeEnumTagMultiPayload(param_1,uVar2,!bVar1);
  return param_1;
}



/* Address: 0x1005eae58 | FUN_1005eae58 */

undefined8 * FUN_1005eae58(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  Continuation_conflict CVar4;
  
  if (param_1 != param_2) {
    lVar2 = 0;
    FUN_1005e9588(0,*(undefined8 *)(param_3 + 0x10));
    (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1,lVar2);
    puVar3 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,lVar2);
    bVar1 = (int)puVar3 != 1;
    if (bVar1) {
      CVar4 = Swift::AsyncStream::Continuation::typeMetadataAccessor();
      (**(code **)(*(long *)(CVar4.unknown + -8) + 0x10))(param_1,param_2,CVar4.unknown);
    }
    else {
      *param_1 = *param_2;
      _swift_retain();
    }
    _swift_storeEnumTagMultiPayload(param_1,lVar2,!bVar1);
  }
  return param_1;
}



/* Address: 0x1005eaf10 | FUN_1005eaf10 */

void * FUN_1005eaf10(void *param_1,void *param_2,long param_3)

{
  long lVar1;
  void *pvVar2;
  Continuation_conflict CVar3;
  
  lVar1 = 0;
  FUN_1005e9588(0,*(undefined8 *)(param_3 + 0x10));
  pvVar2 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,lVar1);
  if ((int)pvVar2 != 0) {
    pvVar2 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(lVar1 + -8) + 0x40));
    return pvVar2;
  }
  CVar3 = Swift::AsyncStream::Continuation::typeMetadataAccessor();
  (**(code **)(*(long *)(CVar3.unknown + -8) + 0x20))(param_1,param_2,CVar3.unknown);
  _swift_storeEnumTagMultiPayload(param_1,lVar1,0);
  return param_1;
}



/* Address: 0x1005eafb4 | FUN_1005eafb4 */

void * FUN_1005eafb4(void *param_1,void *param_2,long param_3)

{
  long lVar1;
  void *pvVar2;
  Continuation_conflict CVar3;
  long lVar4;
  
  if (param_1 != param_2) {
    lVar1 = 0;
    FUN_1005e9588(0,*(undefined8 *)(param_3 + 0x10));
    lVar4 = *(long *)(lVar1 + -8);
    (**(code **)(lVar4 + 8))(param_1,lVar1);
    pvVar2 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,lVar1);
    if ((int)pvVar2 != 0) {
      pvVar2 = _memcpy(param_1,param_2,*(size_t *)(lVar4 + 0x40));
      return pvVar2;
    }
    CVar3 = Swift::AsyncStream::Continuation::typeMetadataAccessor();
    (**(code **)(*(long *)(CVar3.unknown + -8) + 0x20))(param_1,param_2,CVar3.unknown);
    _swift_storeEnumTagMultiPayload(param_1,lVar1,0);
  }
  return param_1;
}



/* Address: 0x1005eb07c | FUN_1005eb07c */

void FUN_1005eb07c(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1005eb088 | FUN_1005eb088 */

void FUN_1005eb088(void)

{
  FUN_1005e8df0();
  return;
}



/* Address: 0x1005eb094 | FUN_1005eb094 */

void FUN_1005eb094(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1005eb0a0 | FUN_1005eb0a0 */

void FUN_1005eb0a0(void)

{
  FUN_1005e8e48();
  return;
}



/* Address: 0x1005eb0ac | FUN_1005eb0ac */

void FUN_1005eb0ac(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1005eb0b8 | FUN_1005eb0b8 */

undefined1  [16] FUN_1005eb0b8(long param_1)

{
  AsyncStream AVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  long local_30;
  long local_28;
  
  uVar4 = *(ulong *)(param_1 + 0x10);
  uVar2 = uVar4;
  AVar1 = Swift::AsyncStream::typeMetadataAccessor();
  if (uVar2 < 0x40) {
    local_30 = *(long *)(AVar1.unknown + -8) + 0x40;
    AVar1.unknown = (undefined *)Swift::AsyncStream::Continuation::typeMetadataAccessor();
    if (uVar4 < 0x40) {
      local_28 = *(long *)(AVar1.unknown + -8) + 0x40;
      _swift_initStructMetadata(param_1,0,2,&local_30,param_1 + 0x18);
      AVar1.unknown = (undefined *)0x0;
      uVar3 = 0;
      goto LAB_1005eb138;
    }
  }
  uVar3 = 0x3f;
LAB_1005eb138:
  auVar5._8_8_ = uVar3;
  auVar5._0_8_ = AVar1.unknown;
  return auVar5;
}



/* Address: 0x1005eb148 | FUN_1005eb148 */

long * FUN_1005eb148(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  AsyncStream AVar3;
  Continuation_conflict CVar4;
  long lVar5;
  ulong uVar6;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    AVar3 = Swift::AsyncStream::typeMetadataAccessor();
    (**(code **)(*(long *)(AVar3.unknown + -8) + 0x10))(param_1,param_2,AVar3.unknown);
    iVar2 = *(int *)(param_3 + 0x1c);
    CVar4 = Swift::AsyncStream::Continuation::typeMetadataAccessor();
    (**(code **)(*(long *)(CVar4.unknown + -8) + 0x10))
              ((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,CVar4.unknown);
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



/* Address: 0x1005eb1f4 | FUN_1005eb1f4 */

void FUN_1005eb1f4(long param_1,long param_2)

{
  int iVar1;
  AsyncStream AVar2;
  Continuation_conflict CVar3;
  
  AVar2 = Swift::AsyncStream::typeMetadataAccessor();
  (**(code **)(*(long *)(AVar2.unknown + -8) + 8))(param_1,AVar2.unknown);
  iVar1 = *(int *)(param_2 + 0x1c);
  CVar3 = Swift::AsyncStream::Continuation::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001005eb25c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(CVar3.unknown + -8) + 8))(param_1 + iVar1,CVar3.unknown);
  return;
}



/* Address: 0x1005eb260 | FUN_1005eb260 */

long FUN_1005eb260(long param_1,long param_2,long param_3)

{
  int iVar1;
  AsyncStream AVar2;
  Continuation_conflict CVar3;
  
  AVar2 = Swift::AsyncStream::typeMetadataAccessor();
  (**(code **)(*(long *)(AVar2.unknown + -8) + 0x10))(param_1,param_2,AVar2.unknown);
  iVar1 = *(int *)(param_3 + 0x1c);
  CVar3 = Swift::AsyncStream::Continuation::typeMetadataAccessor();
  (**(code **)(*(long *)(CVar3.unknown + -8) + 0x10))(param_1 + iVar1,param_2 + iVar1,CVar3.unknown)
  ;
  return param_1;
}



/* Address: 0x1005eb2e0 | FUN_1005eb2e0 */

long FUN_1005eb2e0(long param_1,long param_2,long param_3)

{
  int iVar1;
  AsyncStream AVar2;
  Continuation_conflict CVar3;
  
  AVar2 = Swift::AsyncStream::typeMetadataAccessor();
  (**(code **)(*(long *)(AVar2.unknown + -8) + 0x18))(param_1,param_2,AVar2.unknown);
  iVar1 = *(int *)(param_3 + 0x1c);
  CVar3 = Swift::AsyncStream::Continuation::typeMetadataAccessor();
  (**(code **)(*(long *)(CVar3.unknown + -8) + 0x18))(param_1 + iVar1,param_2 + iVar1,CVar3.unknown)
  ;
  return param_1;
}



/* Address: 0x1005eb360 | FUN_1005eb360 */

long FUN_1005eb360(long param_1,long param_2,long param_3)

{
  int iVar1;
  AsyncStream AVar2;
  Continuation_conflict CVar3;
  
  AVar2 = Swift::AsyncStream::typeMetadataAccessor();
  (**(code **)(*(long *)(AVar2.unknown + -8) + 0x20))(param_1,param_2,AVar2.unknown);
  iVar1 = *(int *)(param_3 + 0x1c);
  CVar3 = Swift::AsyncStream::Continuation::typeMetadataAccessor();
  (**(code **)(*(long *)(CVar3.unknown + -8) + 0x20))(param_1 + iVar1,param_2 + iVar1,CVar3.unknown)
  ;
  return param_1;
}



/* Address: 0x1005eb3e0 | FUN_1005eb3e0 */

long FUN_1005eb3e0(long param_1,long param_2,long param_3)

{
  int iVar1;
  AsyncStream AVar2;
  Continuation_conflict CVar3;
  
  AVar2 = Swift::AsyncStream::typeMetadataAccessor();
  (**(code **)(*(long *)(AVar2.unknown + -8) + 0x28))(param_1,param_2,AVar2.unknown);
  iVar1 = *(int *)(param_3 + 0x1c);
  CVar3 = Swift::AsyncStream::Continuation::typeMetadataAccessor();
  (**(code **)(*(long *)(CVar3.unknown + -8) + 0x28))(param_1 + iVar1,param_2 + iVar1,CVar3.unknown)
  ;
  return param_1;
}



/* Address: 0x1005eb460 | FUN_1005eb460 */

void FUN_1005eb460(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1005eb46c | FUN_1005eb46c */

void FUN_1005eb46c(long param_1,undefined8 param_2,long param_3)

{
  AsyncStream AVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  AVar1 = Swift::AsyncStream::typeMetadataAccessor();
  if ((int)param_2 == *(int *)(*(long *)(AVar1.unknown + -8) + 0x54)) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(AVar1.unknown + -8) + 0x30);
  }
  else {
    AVar1.unknown = (undefined *)Swift::AsyncStream::Continuation::typeMetadataAccessor();
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(AVar1.unknown + -8) + 0x30);
    param_1 = param_1 + *(int *)(param_3 + 0x1c);
  }
                    /* WARNING: Could not recover jumptable at 0x0001005eb4e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,AVar1.unknown);
  return;
}



/* Address: 0x1005eb4ec | FUN_1005eb4ec */

void FUN_1005eb4ec(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1005eb4f8 | FUN_1005eb4f8 */

void FUN_1005eb4f8(long param_1,undefined8 param_2,int param_3,long param_4)

{
  AsyncStream AVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  AVar1 = Swift::AsyncStream::typeMetadataAccessor();
  if (param_3 == *(int *)(*(long *)(AVar1.unknown + -8) + 0x54)) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(AVar1.unknown + -8) + 0x38);
  }
  else {
    AVar1.unknown = (undefined *)Swift::AsyncStream::Continuation::typeMetadataAccessor();
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(AVar1.unknown + -8) + 0x38);
    param_1 = param_1 + *(int *)(param_4 + 0x1c);
  }
                    /* WARNING: Could not recover jumptable at 0x0001005eb584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_2,AVar1.unknown);
  return;
}



/* Address: 0x1005eb588 | FUN_1005eb588 */

void FUN_1005eb588(void)

{
  FUN_1005e87f0();
  return;
}



/* Address: 0x1005eb594 | FUN_1005eb594 */

void FUN_1005eb594(undefined8 param_1,undefined8 param_2)

{
  Iterator IVar1;
  
  IVar1 = Swift::AsyncStream::Iterator::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001005eb5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(IVar1.unknown + -8))(param_1,param_2,IVar1.unknown);
  return;
}



/* Address: 0x1005eb5d4 | FUN_1005eb5d4 */

void FUN_1005eb5d4(undefined8 param_1)

{
  Iterator IVar1;
  
  IVar1 = Swift::AsyncStream::Iterator::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001005eb608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(IVar1.unknown + -8) + 8))(param_1,IVar1.unknown);
  return;
}



/* Address: 0x1005eb60c | FUN_1005eb60c */

undefined8 FUN_1005eb60c(undefined8 param_1,undefined8 param_2)

{
  Iterator IVar1;
  
  IVar1 = Swift::AsyncStream::Iterator::typeMetadataAccessor();
  (**(code **)(*(long *)(IVar1.unknown + -8) + 0x10))(param_1,param_2,IVar1.unknown);
  return param_1;
}



/* Address: 0x1005eb654 | FUN_1005eb654 */

undefined8 FUN_1005eb654(undefined8 param_1,undefined8 param_2)

{
  Iterator IVar1;
  
  IVar1 = Swift::AsyncStream::Iterator::typeMetadataAccessor();
  (**(code **)(*(long *)(IVar1.unknown + -8) + 0x18))(param_1,param_2,IVar1.unknown);
  return param_1;
}



/* Address: 0x1005eb69c | FUN_1005eb69c */

undefined8 FUN_1005eb69c(undefined8 param_1,undefined8 param_2)

{
  Iterator IVar1;
  
  IVar1 = Swift::AsyncStream::Iterator::typeMetadataAccessor();
  (**(code **)(*(long *)(IVar1.unknown + -8) + 0x20))(param_1,param_2,IVar1.unknown);
  return param_1;
}



/* Address: 0x1005eb6e4 | FUN_1005eb6e4 */

undefined8 FUN_1005eb6e4(undefined8 param_1,undefined8 param_2)

{
  Iterator IVar1;
  
  IVar1 = Swift::AsyncStream::Iterator::typeMetadataAccessor();
  (**(code **)(*(long *)(IVar1.unknown + -8) + 0x28))(param_1,param_2,IVar1.unknown);
  return param_1;
}



/* Address: 0x1005eb72c | FUN_1005eb72c */

void FUN_1005eb72c(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1005eb738 | FUN_1005eb738 */

void FUN_1005eb738(void)

{
  FUN_1005e8df0();
  return;
}



/* Address: 0x1005eb744 | FUN_1005eb744 */

void FUN_1005eb744(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1005eb750 | FUN_1005eb750 */

void FUN_1005eb750(void)

{
  FUN_1005e8e48();
  return;
}



/* Address: 0x1005eb75c | FUN_1005eb75c */

void FUN_1005eb75c(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1005eb768 | FUN_1005eb768 */

undefined1  [16] FUN_1005eb768(long param_1)

{
  Continuation_conflict CVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  long local_30;
  undefined *puStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  CVar1 = Swift::AsyncStream::Continuation::typeMetadataAccessor();
  if (uVar2 < 0x40) {
    local_30 = *(long *)(CVar1.unknown + -8) + 0x40;
    puStack_28 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
    _swift_initEnumMetadataMultiPayload(param_1,0,2,&local_30);
    CVar1.unknown = (undefined *)0x0;
    uVar3 = 0;
  }
  else {
    uVar3 = 0x3f;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = CVar1.unknown;
  return auVar4;
}



/* Address: 0x1005eb7dc | FUN_1005eb7dc */

long * FUN_1005eb7dc(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  Continuation_conflict CVar5;
  ulong uVar6;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    plVar3 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    bVar2 = (int)plVar3 != 1;
    if (bVar2) {
      CVar5 = Swift::AsyncStream::Continuation::typeMetadataAccessor();
      (**(code **)(*(long *)(CVar5.unknown + -8) + 0x10))(param_1,param_2,CVar5.unknown);
    }
    else {
      *param_1 = *param_2;
      _swift_retain();
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,!bVar2);
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



/* Address: 0x1005eb89c | FUN_1005eb89c */

void FUN_1005eb89c(undefined8 *param_1)

{
  undefined8 *puVar1;
  Continuation_conflict CVar2;
  
  puVar1 = param_1;
  _swift_getEnumCaseMultiPayload();
  if ((int)puVar1 == 1) {
    _swift_release(*param_1);
    return;
  }
  CVar2 = Swift::AsyncStream::Continuation::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001005eb8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(CVar2.unknown + -8) + 8))(param_1,CVar2.unknown);
  return;
}



/* Address: 0x1005eb8f4 | FUN_1005eb8f4 */

undefined8 * FUN_1005eb8f4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  Continuation_conflict CVar3;
  
  puVar2 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  bVar1 = (int)puVar2 != 1;
  if (bVar1) {
    CVar3 = Swift::AsyncStream::Continuation::typeMetadataAccessor();
    (**(code **)(*(long *)(CVar3.unknown + -8) + 0x10))(param_1,param_2,CVar3.unknown);
  }
  else {
    *param_1 = *param_2;
    _swift_retain();
  }
  _swift_storeEnumTagMultiPayload(param_1,param_3,!bVar1);
  return param_1;
}



/* Address: 0x1005eb980 | FUN_1005eb980 */

undefined8 * FUN_1005eb980(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  Continuation_conflict CVar3;
  
  if (param_1 != param_2) {
    (**(code **)(*(long *)(param_3 + -8) + 8))(param_1,param_3);
    puVar2 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    bVar1 = (int)puVar2 != 1;
    if (bVar1) {
      CVar3 = Swift::AsyncStream::Continuation::typeMetadataAccessor();
      (**(code **)(*(long *)(CVar3.unknown + -8) + 0x10))(param_1,param_2,CVar3.unknown);
    }
    else {
      *param_1 = *param_2;
      _swift_retain();
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,!bVar1);
  }
  return param_1;
}



/* Address: 0x1005eba28 | FUN_1005eba28 */

void * FUN_1005eba28(void *param_1,void *param_2,long param_3)

{
  void *pvVar1;
  Continuation_conflict CVar2;
  
  pvVar1 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  if ((int)pvVar1 != 0) {
    pvVar1 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
    return pvVar1;
  }
  CVar2 = Swift::AsyncStream::Continuation::typeMetadataAccessor();
  (**(code **)(*(long *)(CVar2.unknown + -8) + 0x20))(param_1,param_2,CVar2.unknown);
  _swift_storeEnumTagMultiPayload(param_1,param_3,0);
  return param_1;
}



/* Address: 0x1005ebabc | FUN_1005ebabc */

void * FUN_1005ebabc(void *param_1,void *param_2,long param_3)

{
  void *pvVar1;
  Continuation_conflict CVar2;
  long lVar3;
  
  if (param_1 != param_2) {
    lVar3 = *(long *)(param_3 + -8);
    (**(code **)(lVar3 + 8))(param_1,param_3);
    pvVar1 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    if ((int)pvVar1 != 0) {
      pvVar1 = _memcpy(param_1,param_2,*(size_t *)(lVar3 + 0x40));
      return pvVar1;
    }
    CVar2 = Swift::AsyncStream::Continuation::typeMetadataAccessor();
    (**(code **)(*(long *)(CVar2.unknown + -8) + 0x20))(param_1,param_2,CVar2.unknown);
    _swift_storeEnumTagMultiPayload(param_1,param_3,0);
  }
  return param_1;
}



/* Address: 0x1005ebb68 | _swift_retain */

void _swift_retain(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_100eae3f8)();
  return;
}



/* Address: 0x1005ebb6c | FUN_1005ebb6c */

void FUN_1005ebb6c(void)

{
  undefined8 in_x4;
  
  FUN_1005fbbb0(in_x4);
  return;
}



/* Address: 0x1005ebb74 | FUN_1005ebb74 */

void FUN_1005ebb74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  FUN_1005fbbb0(param_4,param_2,1,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



/* Address: 0x1005ebbb4 | FUN_1005ebbb4 */

void FUN_1005ebbb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_1005fbac8(param_1,param_2,PTR___type_metadata_for_Swift_Never_100eadc38,param_3,param_4,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40,
                param_5,param_6);
  return;
}



/* Address: 0x1005ebbd8 | FUN_1005ebbd8 */

void FUN_1005ebbd8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *unaff_x20;
  uVar1 = uVar2;
  FUN_1005ebbb4(uVar2,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18),
                *(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28),
                *(undefined8 *)(param_2 + 0x30));
  _swift_release(uVar2);
  *param_1 = uVar1;
  return;
}



/* Address: 0x1005ebc24 | FUN_1005ebc24 */

void FUN_1005ebc24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
  plVar1 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005ebcdc;
  FUN_1005fbb50(plVar1,param_1,param_2,param_3,PTR___type_metadata_for_Swift_Never_100eadc38,param_4
                ,param_5,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40,
                param_6,param_7);
  return;
}



/* Address: 0x1005ebcdc | FUN_1005ebcdc */

void FUN_1005ebcdc(void)

{
  long unaff_x20;
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x20));
  if (unaff_x20 != 0) {
    _swift_errorRelease();
    _swift_task_switch(FUN_1005ebd4c,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001005ebd48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Address: 0x1005ebd4c | FUN_1005ebd4c */

void FUN_1005ebd4c(void)

{
  long unaff_x22;
  
  (**(code **)(*(long *)(*(long *)(unaff_x22 + 0x18) + -8) + 0x38))
            (*(undefined8 *)(unaff_x22 + 0x10),1,1);
                    /* WARNING: Could not recover jumptable at 0x0001005ebd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005ebd94 | FUN_1005ebd94 */

void FUN_1005ebd94(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  undefined8 uVar7;
  long unaff_x22;
  
  uVar7 = *unaff_x20;
  plVar5 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  uVar6 = *(undefined8 *)(param_2 + 0x30);
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1005dfae0;
  FUN_1005ebc24(plVar5,param_1,uVar7,uVar1,uVar3,uVar2,uVar4,uVar6);
  return;
}



/* Address: 0x1005ebe0c | FUN_1005ebe0c */

void FUN_1005ebe0c(void)

{
  FUN_1005fb920();
  return;
}



/* Address: 0x1005ebe54 | FUN_1005ebe54 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001005ebef4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

uint FUN_1005ebe54(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  CollectionOfOne CVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 auStack_90 [4];
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar3 = *(long *)(param_3 + -8);
  lVar5 = (long)&local_70 - (*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_70 = param_4;
  uStack_68 = param_5;
  CVar1 = Swift::CollectionOfOne::typeMetadataAccessor();
  lVar4 = *(long *)(CVar1.unknown + -8);
  lVar6 = lVar5 - (*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar3 + 0x10))(lVar5,param_1,param_3);
  Swift::CollectionOfOne::init(lVar6,CVar1.unknown,param_3);
  puVar2 = PTR_Swift__Swift__CollectionOfOne<undefined>_>Swift__Sequence_100ead040;
  _swift_getWitnessTable
            (PTR_Swift__Swift__CollectionOfOne<undefined>_>Swift__Sequence_100ead040,CVar1.unknown);
  *(undefined8 *)(lVar6 + -0x18) = param_7;
  *(undefined **)(lVar6 + -0x10) = puVar2;
  *(undefined8 *)(lVar6 + -0x20) = param_6;
  lVar3 = lVar6;
  FUN_1005fb920(lVar6,param_2,param_3,PTR___type_metadata_for_Swift_Never_100eadc38,local_70,
                uStack_68,CVar1.unknown,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  (**(code **)(lVar4 + 8))(lVar6,CVar1.unknown);
  return (uint)lVar3 & 0xff;
}



/* Address: 0x1005ebf78 | FUN_1005ebf78 */

void FUN_1005ebf78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_1005fb828(param_1,param_2,PTR___type_metadata_for_Swift_Never_100eadc38,param_3,param_4,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40,
                param_5,param_6);
  return;
}



/* Address: 0x1005ebf9c | FUN_1005ebf9c */

void FUN_1005ebf9c(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c66680,param_1);
  return;
}



/* Address: 0x1005ebfac | FUN_1005ebfac */

void FUN_1005ebfac(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c666c8,param_1);
  return;
}



/* Address: 0x1005ebfbc | FUN_1005ebfbc */

void FUN_1005ebfbc(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetStructDescriptor_100cb6a5c);
  return;
}


