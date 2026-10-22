/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1005df710 | FUN_1005df710 */

undefined8 FUN_1005df710(long param_1,long param_2,code *param_3)

{
  char cVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [24];
  undefined8 local_70 [3];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_58,0,0);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  cVar1 = *(char *)(param_2 + 0x18);
  if (cVar1 == '\x01') {
    uVar3 = 1;
    FUN_1005dff00(uVar4,1);
  }
  else {
    if (cVar1 == -1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1005df828);
      (*pcVar2)();
    }
    local_70[0] = uVar4;
    FUN_1005dfee0(uVar4,cVar1);
    (*param_3)(local_70);
    FUN_1005dfe70(uVar4,cVar1);
    uVar4 = 0;
    uVar3 = 0;
  }
  _swift_beginAccess(param_1 + 0x10,local_70,1,0);
  if (*(char *)(param_1 + 0x18) == -1) {
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    *(undefined1 *)(param_1 + 0x18) = uVar3;
    _swift_beginAccess(param_1 + 0x30,auStack_88,1,0);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  else {
    FUN_1002ec258(uVar4,uVar3);
    uVar4 = 0;
  }
  return uVar4;
}



/* Address: 0x1005df828 | FUN_1005df828 */

void FUN_1005df828(char *param_1,void *param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  __uint8 _Var1;
  undefined *puVar2;
  TaskPriority TVar3;
  TaskPriority TVar4;
  UnownedSerialExecutor UVar5;
  ContiguousArray<__int8> CVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  String SVar11;
  undefined auStack_c0 [8];
  undefined8 local_b8;
  undefined8 *puStack_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_70;
  long lStack_68;
  
  puVar2 = &DAT_100fd4f28;
  FUN_1000f7830(&DAT_100fd4f28,0x100c65d80);
  puVar2 = auStack_c0 + -(*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_1005dffc0(param_3,puVar2);
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  lVar10 = *(long *)(TVar3.unknown + -8);
  TVar4.unknown = puVar2;
  (**(code **)(lVar10 + 0x30))(puVar2,1,TVar3.unknown);
  if ((int)TVar4.unknown == 1) {
    FUN_1005e0010(puVar2);
    uVar8 = 0x1c00;
    lVar10 = *(long *)(param_5 + 0x10);
  }
  else {
    _Var1 = Swift::TaskPriority::get_rawValue(TVar4);
    (**(code **)(lVar10 + 8))(puVar2,TVar3.unknown);
    uVar8 = (ulong)_Var1 | 0x1c00;
    lVar10 = *(long *)(param_5 + 0x10);
  }
  if (lVar10 == 0) {
    UVar5.unknown = (undefined *)0x0;
    lVar9 = 0;
  }
  else {
    lVar9 = *(long *)(param_5 + 0x18);
    _swift_getObjectType(lVar10);
    _swift_unknownObjectRetain(lVar10);
    UVar5 = Swift::Actor::get_unownedExecutor();
    _swift_unknownObjectRelease(lVar10);
  }
  if (param_2 == (void *)0x0) {
    FUN_1005e0010(param_3);
    puVar2 = &DAT_100ee8688;
    _swift_allocObject(&DAT_100ee8688,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_4;
    *(long *)(puVar2 + 0x18) = param_5;
    if (lVar9 == 0 && UVar5.unknown == (undefined *)0x0) {
      puVar7 = (undefined8 *)0x0;
    }
    else {
      local_80 = 0;
      uStack_78 = 0;
      puVar7 = &local_80;
      local_70 = UVar5.unknown;
      lStack_68 = lVar9;
    }
    _swift_task_create(uVar8,puVar7,PTR___type_metadata_for____100eae0c8 + 8,&DAT_100c65fb0,puVar2);
  }
  else {
    SVar11.bridgeObject = param_2;
    SVar11.str = param_1;
    CVar6 = Swift::String::get_utf8CString(SVar11);
    _swift_bridgeObjectRelease(param_2);
    puVar2 = &DAT_100ee86b0;
    _swift_allocObject(&DAT_100ee86b0,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_4;
    *(long *)(puVar2 + 0x18) = param_5;
    _swift_retain(param_5);
    if (lVar9 == 0 && UVar5.unknown == (undefined *)0x0) {
      puStack_b0 = (undefined8 *)0x0;
    }
    else {
      local_a0 = 0;
      uStack_98 = 0;
      puStack_b0 = &local_a0;
      local_90 = UVar5.unknown;
      lStack_88 = lVar9;
    }
    local_b8 = 7;
    local_a8 = CVar6.unknown + 0x20;
    _swift_task_create(uVar8,&local_b8,PTR___type_metadata_for____100eae0c8 + 8,&DAT_100c65fb8,
                       puVar2);
    _swift_release(CVar6.unknown);
    FUN_1005e0010(param_3);
    _swift_release(param_5);
  }
  return;
}



/* Address: 0x1005dfa74 | FUN_1005dfa74 */

void FUN_1005dfa74(undefined8 param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  iVar1 = *param_2;
  plVar2 = (long *)(ulong)(uint)param_2[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1005dfae0;
                    /* WARNING: Could not recover jumptable at 0x0001005dfadc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_2))(plVar2,param_1);
  return;
}



/* Address: 0x1005dfae0 | FUN_1005dfae0 */

void FUN_1005dfae0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001005dfb24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Address: 0x1005dfb28 | FUN_1005dfb28 */

void FUN_1005dfb28(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_1;
  if (*(char *)(param_1 + 1) == '\x01') {
    puVar1 = &DAT_100fd4f20;
    FUN_1000f7830(&DAT_100fd4f20,&DAT_100c660a0);
    puVar2 = (undefined8 *)PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
    _swift_allocError();
    *puVar2 = uVar3;
    _swift_errorRetain(uVar3);
    _swift_continuation_throwingResumeWithError(param_2,puVar1);
  }
  else {
    **(undefined8 **)(*(long *)(param_2 + 0x40) + 0x28) = uVar3;
    _swift_retain(uVar3);
    _swift_continuation_throwingResume(param_2);
  }
  return;
}



/* Address: 0x1005dfbc0 | FUN_1005dfbc0 */

void FUN_1005dfbc0(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 1) == '\x01') {
    uVar3 = *param_1;
    puVar1 = &DAT_100fd4f20;
    FUN_1000f7830(&DAT_100fd4f20,&DAT_100c660a0);
    puVar2 = (undefined8 *)PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
    _swift_allocError();
    *puVar2 = uVar3;
    _swift_errorRetain(uVar3);
    _swift_continuation_throwingResumeWithError(param_2,puVar1);
  }
  else {
    _swift_continuation_throwingResume(param_2);
  }
  return;
}



/* Address: 0x1005dfc44 | FUN_1005dfc44 */

void FUN_1005dfc44(void)

{
  long unaff_x20;
  
  FUN_1005dfc80(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_deallocObject();
  return;
}



/* Address: 0x1005dfc80 | FUN_1005dfc80 */

void FUN_1005dfc80(undefined8 param_1,long param_2)

{
  if (-1 < param_2) {
    _swift_unknownObjectRelease();
    return;
  }
  return;
}



/* Address: 0x1005dfc8c | FUN_1005dfc8c */

void FUN_1005dfc8c(void)

{
  long unaff_x20;
  
  FUN_100627ff0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Address: 0x1005dfcb0 | FUN_1005dfcb0 */

void FUN_1005dfcb0(undefined8 param_1,long param_2)

{
  if (-1 < param_2) {
    _swift_unknownObjectRetain();
    return;
  }
  return;
}



/* Address: 0x1005dfcbc | FUN_1005dfcbc */

void FUN_1005dfcbc(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x1005dfcf0 | FUN_1005dfcf0 */

void FUN_1005dfcf0(void)

{
  long unaff_x20;
  
  FUN_1006289cc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x1005dfcfc | FUN_1005dfcfc */

void FUN_1005dfcfc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd4f30 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c69568;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c69568,&DAT_100eed960);
  DAT_100fd4f30 = pTVar1;
  return;
}



/* Address: 0x1005dfd3c | FUN_1005dfd3c */

void FUN_1005dfd3c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_errorRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1005dfd68 | FUN_1005dfd68 */

void FUN_1005dfd68(void)

{
  long unaff_x20;
  
  FUN_1005de99c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1005dfd80 | FUN_1005dfd80 */

void FUN_1005dfd80(void)

{
  FUN_1005dff40(PTR__swift_bridgeObjectRelease_100eae160);
  return;
}



/* Address: 0x1005dfd8c | FUN_1005dfd8c */

void FUN_1005dfd8c(void)

{
  long unaff_x20;
  
  FUN_100628f10(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x1005dfd98 | FUN_1005dfd98 */

void FUN_1005dfd98(void)

{
  undefined8 uVar1;
  
  if (DAT_100fd4f38 != 0) {
    return;
  }
  uVar1 = 0x100c65e48;
  _swift_getWitnessTable(0x100c65e48,&DAT_100ee8270);
  DAT_100fd4f38 = uVar1;
  return;
}



/* Address: 0x1005dfdd8 | FUN_1005dfdd8 */

void FUN_1005dfdd8(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1005dfde4 | thunk_FUN_1005dfde8 */

void thunk_FUN_1005dfde8(void)

{
  undefined8 uVar1;
  
  if (DAT_100fd4f40 != 0) {
    return;
  }
  uVar1 = 0x100c65e88;
  _swift_getWitnessTable(0x100c65e88,&DAT_100ee8270);
  DAT_100fd4f40 = uVar1;
  return;
}



/* Address: 0x1005dfde8 | FUN_1005dfde8 */

void FUN_1005dfde8(void)

{
  undefined8 uVar1;
  
  if (DAT_100fd4f40 != 0) {
    return;
  }
  uVar1 = 0x100c65e88;
  _swift_getWitnessTable(0x100c65e88,&DAT_100ee8270);
  DAT_100fd4f40 = uVar1;
  return;
}



/* Address: 0x1005dfe28 | FUN_1005dfe28 */

void FUN_1005dfe28(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  return;
}



/* Address: 0x1005dfe3c | FUN_1005dfe3c */

undefined1  [16] FUN_1005dfe3c(void)

{
  return ZEXT816(0x100ee8270);
}



/* Address: 0x1005dfe4c | FUN_1005dfe4c */

void FUN_1005dfe4c(void)

{
  FUN_1005dff40(PTR__swift_release_100eae3e8);
  return;
}



/* Address: 0x1005dfe58 | FUN_1005dfe58 */

void FUN_1005dfe58(void)

{
  long unaff_x20;
  
  FUN_1005df710(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x1005dfe64 | FUN_1005dfe64 */

void FUN_1005dfe64(void)

{
  long unaff_x20;
  
  thunk_FUN_10064bebc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1005dfe70 | FUN_1005dfe70 */

void FUN_1005dfe70(undefined8 param_1,char param_2)

{
  if (param_2 != -1) {
    FUN_1005dff14();
  }
  return;
}



/* Address: 0x1005dfe90 | FUN_1005dfe90 */

void FUN_1005dfe90(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1005dfbc0(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1005dfea8 | FUN_1005dfea8 */

void FUN_1005dfea8(void)

{
  long unaff_x20;
  
  FUN_10064c270(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1005dfeb4 | FUN_1005dfeb4 */

void FUN_1005dfeb4(undefined8 param_1,char param_2)

{
  if (param_2 != -1) {
    FUN_100308524();
    return;
  }
  return;
}



/* Address: 0x1005dfec8 | FUN_1005dfec8 */

void FUN_1005dfec8(void)

{
  long unaff_x20;
  
  FUN_1005df60c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x1005dfed4 | FUN_1005dfed4 */

void FUN_1005dfed4(void)

{
  long unaff_x20;
  
  thunk_FUN_10064c25c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1005dfee0 | FUN_1005dfee0 */

void FUN_1005dfee0(undefined8 param_1,char param_2)

{
  if (param_2 != -1) {
    FUN_1005dff00();
  }
  return;
}



/* Address: 0x1005dff00 | FUN_1005dff00 */

void FUN_1005dff00(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
    _swift_errorRetain();
    return;
  }
  _swift_retain();
  return;
}



/* Address: 0x1005dff14 | FUN_1005dff14 */

void FUN_1005dff14(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
    _swift_errorRelease();
    return;
  }
  _swift_release();
  return;
}



/* Address: 0x1005dff28 | FUN_1005dff28 */

void FUN_1005dff28(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1005dfb28(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1005dff40 | FUN_1005dff40 */

void FUN_1005dff40(code *param_1)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x1005dff80 | FUN_1005dff80 */

void FUN_1005dff80(void)

{
  long unaff_x20;
  
  FUN_1005df4f0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x1005dff9c | FUN_1005dff9c */

void FUN_1005dff9c(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1005dffac | thunk_FUN_100405f18 */

void thunk_FUN_100405f18(void)

{
  FUN_100405f18();
  return;
}



/* Address: 0x1005dffb0 | FUN_1005dffb0 */

void FUN_1005dffb0(void)

{
  long unaff_x20;
  
  thunk_FUN_10064c1b0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1005dffbc | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  FUN_100049040();
  return;
}



/* Address: 0x1005dffc0 | FUN_1005dffc0 */

undefined8 FUN_1005dffc0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fd4f28;
  FUN_1000f7830(&DAT_100fd4f28,0x100c65d80);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1005e0010 | FUN_1005e0010 */

undefined8 FUN_1005e0010(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fd4f28;
  FUN_1000f7830(&DAT_100fd4f28,0x100c65d80);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x1005e0058 | FUN_1005e0058 */

void FUN_1005e0058(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1005e007c | FUN_1005e007c */

void FUN_1005e007c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1005c804c;
  FUN_1005dfa74(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Address: 0x1005e00f4 | FUN_1005e00f4 */

void FUN_1005e00f4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1005c804c;
  FUN_1005dfa74(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Address: 0x1005e016c | FUN_1005e016c */

void FUN_1005e016c(void)

{
  undefined *puVar1;
  ulong uVar2;
  long unaff_x20;
  
  puVar1 = &DAT_100fd4f18;
  FUN_1000f7830(&DAT_100fd4f18,0x100c65d70);
  uVar2 = (ulong)*(byte *)(*(long *)(puVar1 + -8) + 0x50);
  (**(code **)(*(long *)(puVar1 + -8) + 8))
            (unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)),puVar1);
  _swift_deallocObject();
  return;
}



/* Address: 0x1005e01d0 | FUN_1005e01d0 */

void FUN_1005e01d0(undefined8 param_1)

{
  undefined *puVar1;
  long unaff_x20;
  
  puVar1 = &DAT_100fd4f18;
  FUN_1000f7830(&DAT_100fd4f18,0x100c65d70);
  FUN_1005db7d4(param_1,unaff_x20 +
                        ((ulong)*(byte *)(*(long *)(puVar1 + -8) + 0x50) + 0x10 &
                        ((ulong)*(byte *)(*(long *)(puVar1 + -8) + 0x50) ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x1005e0218 | FUN_1005e0218 */

void FUN_1005e0218(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1005e0228 | FUN_1005e0228 */

void FUN_1005e0228(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1005db290(param_1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1005e0230 | thunk_FUN_1005e0058 */

void thunk_FUN_1005e0058(void)

{
  FUN_1005e0058();
  return;
}



/* Address: 0x1005e0234 | thunk_FUN_1001f6390 */

void thunk_FUN_1001f6390(void)

{
  FUN_1001f6390();
  return;
}



/* Address: 0x1005e0238 | thunk_FUN_1005dff80 */

void thunk_FUN_1005dff80(void)

{
  long unaff_x20;
  
  FUN_1005df4f0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x1005e023c | thunk_FUN_1005dd380 */

void thunk_FUN_1005dd380(void)

{
  FUN_1005dd380();
  return;
}



/* Address: 0x1005e0240 | thunk_FUN_1005dc9f8 */

void thunk_FUN_1005dc9f8(void)

{
  FUN_1005dc9f8();
  return;
}



/* Address: 0x1005e0244 | thunk_FUN_1005dd070 */

void thunk_FUN_1005dd070(void)

{
  FUN_1005dd070();
  return;
}



/* Address: 0x1005e0248 | thunk_FUN_1005de8f4 */

undefined8 thunk_FUN_1005de8f4(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_58,1,0);
  uVar1 = 0;
  if (*(char *)(unaff_x20 + 0x18) == -1) {
    *(undefined8 *)(unaff_x20 + 0x10) = param_1;
    *(undefined1 *)(unaff_x20 + 0x18) = 1;
    _swift_beginAccess(unaff_x20 + 0x30,auStack_70,1,0);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
    *(undefined8 *)(unaff_x20 + 0x38) = 0;
    *(undefined8 *)(unaff_x20 + 0x40) = 0;
    *(undefined8 *)(unaff_x20 + 0x30) = 0;
    _swift_errorRetain(param_1);
  }
  return uVar1;
}



/* Address: 0x1005e024c | thunk_FUN_1005de99c */

void thunk_FUN_1005de99c(void)

{
  thunk_FUN_1005de99c();
  return;
}



/* Address: 0x1005e0250 | thunk_FUN_1005dd034 */

void thunk_FUN_1005dd034(void)

{
  FUN_1005dd034();
  return;
}



/* Address: 0x1005e0254 | thunk_FUN_1005dca34 */

void thunk_FUN_1005dca34(void)

{
  FUN_1005dca34();
  return;
}



/* Address: 0x1005e0258 | thunk_FUN_1005dcff4 */

void thunk_FUN_1005dcff4(void)

{
  FUN_1005dcff4();
  return;
}



/* Address: 0x1005e025c | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x1005e0260 | thunk_FUN_1005dfe4c */

void thunk_FUN_1005dfe4c(void)

{
  FUN_1005dfe4c();
  return;
}


