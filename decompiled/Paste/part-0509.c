/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1005da64c | FUN_1005da64c */

void FUN_1005da64c(void)

{
  long unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x0001005da684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005da688 | FUN_1005da688 */

void FUN_1005da688(undefined8 param_1,long param_2)

{
  long lVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  puVar3 = &DAT_100ee8610;
  _swift_allocObject(&DAT_100ee8610,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  puVar4 = &DAT_100ee8638;
  _swift_allocObject(&DAT_100ee8638,0x28,7);
  *(code **)(puVar4 + 0x10) = thunk_FUN_1005dfe90;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  *(long *)(puVar4 + 0x20) = param_2;
  uVar5 = *(ulong *)(param_2 + 0x20);
  lVar1 = *(long *)(param_2 + 0x28);
  _swift_getObjectType();
  pcVar10 = *(code **)(lVar1 + 0x10);
  _swift_retain_n(puVar3,2);
  _swift_retain_n(param_2,2);
  uVar6 = uVar5;
  (*pcVar10)(uVar5,lVar1);
  if ((uVar6 & 1) != 0) {
    _swift_beginAccess(param_2 + 0x10,auStack_68,0,0);
    uVar9 = *(undefined8 *)(param_2 + 0x10);
    cVar2 = *(char *)(param_2 + 0x18);
    if (cVar2 == '\x01') {
      puVar7 = &DAT_100fd4f20;
      FUN_1000f7830(&DAT_100fd4f20,&DAT_100c660a0);
      puVar8 = (undefined8 *)PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90
      ;
      _swift_allocError();
      *puVar8 = uVar9;
      FUN_1005dfeb4(uVar9,1);
      _swift_continuation_throwingResumeWithError(param_1,puVar7);
    }
    else if (cVar2 == -1) {
      _swift_beginAccess(param_2 + 0x30,auStack_80,0x21,0);
      FUN_10064967c(FUN_1005dffb0,puVar4);
      _swift_endAccess(auStack_80);
    }
    else {
      _swift_continuation_throwingResume(param_1);
      FUN_100308538(uVar9,cVar2);
    }
    FUN_1006486f8(0,0,0);
    FUN_100004550(0,0);
    _swift_release(param_2);
    _swift_release_n(puVar3,2);
    _swift_release(puVar4);
    _swift_bridgeObjectRelease(0);
    return;
  }
  puVar7 = &DAT_100ee8660;
  _swift_allocObject(&DAT_100ee8660,0x28,7);
  *(long *)(puVar7 + 0x10) = param_2;
  *(code **)(puVar7 + 0x18) = FUN_1005dffb0;
  *(undefined **)(puVar7 + 0x20) = puVar4;
  pcVar10 = *(code **)(lVar1 + 0x18);
  _swift_retain(param_2);
  _swift_retain(puVar4);
  (*pcVar10)(FUN_1005dfe64,puVar7,uVar5,lVar1);
  _swift_release(puVar7);
  _swift_release(param_2);
  _swift_release_n(puVar3,2);
  _swift_release(puVar4);
  return;
}



/* Address: 0x1005da8d8 | FUN_1005da8d8 */

void FUN_1005da8d8(undefined8 param_1,long param_2)

{
  long lVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  puVar3 = &DAT_100ee8598;
  _swift_allocObject(&DAT_100ee8598,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  puVar4 = &DAT_100ee85c0;
  _swift_allocObject(&DAT_100ee85c0,0x28,7);
  *(code **)(puVar4 + 0x10) = thunk_FUN_1005dfe90;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  *(long *)(puVar4 + 0x20) = param_2;
  uVar5 = *(ulong *)(param_2 + 0x20);
  lVar1 = *(long *)(param_2 + 0x28);
  _swift_getObjectType();
  pcVar10 = *(code **)(lVar1 + 0x10);
  _swift_retain_n(puVar3,2);
  _swift_retain_n(param_2,2);
  uVar6 = uVar5;
  (*pcVar10)(uVar5,lVar1);
  if ((uVar6 & 1) != 0) {
    _swift_beginAccess(param_2 + 0x10,auStack_68,0,0);
    uVar9 = *(undefined8 *)(param_2 + 0x10);
    cVar2 = *(char *)(param_2 + 0x18);
    if (cVar2 == '\x01') {
      puVar7 = &DAT_100fd4f20;
      FUN_1000f7830(&DAT_100fd4f20,&DAT_100c660a0);
      puVar8 = (undefined8 *)PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90
      ;
      _swift_allocError();
      *puVar8 = uVar9;
      FUN_1005dfeb4(uVar9,1);
      _swift_continuation_throwingResumeWithError(param_1,puVar7);
    }
    else if (cVar2 == -1) {
      _swift_beginAccess(param_2 + 0x30,auStack_80,0x21,0);
      FUN_10064967c(FUN_1005dffb0,puVar4);
      _swift_endAccess(auStack_80);
    }
    else {
      _swift_continuation_throwingResume(param_1);
      FUN_100308538(uVar9,cVar2);
    }
    FUN_1006486f8(0,0,0);
    FUN_100004550(0,0);
    _swift_release(param_2);
    _swift_release_n(puVar3,2);
    _swift_release(puVar4);
    _swift_bridgeObjectRelease(0);
    return;
  }
  puVar7 = &DAT_100ee85e8;
  _swift_allocObject(&DAT_100ee85e8,0x28,7);
  *(long *)(puVar7 + 0x10) = param_2;
  *(code **)(puVar7 + 0x18) = FUN_1005dffb0;
  *(undefined **)(puVar7 + 0x20) = puVar4;
  pcVar10 = *(code **)(lVar1 + 0x18);
  _swift_retain(param_2);
  _swift_retain(puVar4);
  (*pcVar10)(thunk_FUN_1005dfe64,puVar7,uVar5,lVar1);
  _swift_release(puVar7);
  _swift_release(param_2);
  _swift_release_n(puVar3,2);
  _swift_release(puVar4);
  return;
}



/* Address: 0x1005dab28 | FUN_1005dab28 */

void FUN_1005dab28(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  puVar2 = &DAT_100ee84d0;
  _swift_allocObject(&DAT_100ee84d0,0x18,7);
  *(long *)(puVar2 + 0x10) = param_1;
  puVar3 = &DAT_100ee84f8;
  _swift_allocObject(&DAT_100ee84f8,0x28,7);
  *(code **)(puVar3 + 0x10) = FUN_1005dff28;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  *(long *)(puVar3 + 0x20) = param_2;
  uVar4 = *(ulong *)(param_2 + 0x20);
  lVar1 = *(long *)(param_2 + 0x28);
  _swift_getObjectType();
  pcVar9 = *(code **)(lVar1 + 0x10);
  _swift_retain_n(puVar2,2);
  _swift_retain_n(param_2,2);
  uVar5 = uVar4;
  (*pcVar9)(uVar4,lVar1);
  if ((uVar5 & 1) != 0) {
    _swift_beginAccess(param_2 + 0x10,auStack_68,0,0);
    uVar8 = *(undefined8 *)(param_2 + 0x10);
    if (*(char *)(param_2 + 0x18) == '\x01') {
      puVar6 = &DAT_100fd4f20;
      FUN_1000f7830(&DAT_100fd4f20,&DAT_100c660a0);
      puVar7 = (undefined8 *)PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90
      ;
      _swift_allocError();
      *puVar7 = uVar8;
      FUN_1005dfee0(uVar8,1);
      _swift_continuation_throwingResumeWithError(param_1,puVar6);
    }
    else if (*(char *)(param_2 + 0x18) == -1) {
      _swift_beginAccess(param_2 + 0x30,auStack_80,0x21,0);
      FUN_10064967c(FUN_1005dfed4,puVar3);
      _swift_endAccess(auStack_80);
    }
    else {
      FUN_1005dfee0(uVar8);
      **(undefined8 **)(*(long *)(param_1 + 0x40) + 0x28) = uVar8;
      _swift_continuation_throwingResume(param_1);
    }
    FUN_1006486f8(0,0,0);
    FUN_100004550(0,0);
    _swift_release(param_2);
    _swift_release_n(puVar2,2);
    _swift_release(puVar3);
    _swift_bridgeObjectRelease(0);
    return;
  }
  puVar6 = &DAT_100ee8520;
  _swift_allocObject(&DAT_100ee8520,0x28,7);
  *(long *)(puVar6 + 0x10) = param_2;
  *(code **)(puVar6 + 0x18) = FUN_1005dfed4;
  *(undefined **)(puVar6 + 0x20) = puVar3;
  pcVar9 = *(code **)(lVar1 + 0x18);
  _swift_retain(param_2);
  _swift_retain(puVar3);
  (*pcVar9)(FUN_1005dfe64,puVar6,uVar4,lVar1);
  _swift_release(puVar6);
  _swift_release(param_2);
  _swift_release_n(puVar2,2);
  _swift_release(puVar3);
  return;
}



/* Address: 0x1005dad80 | FUN_1005dad80 */

void FUN_1005dad80(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  puVar2 = &DAT_100ee8408;
  _swift_allocObject(&DAT_100ee8408,0x18,7);
  *(long *)(puVar2 + 0x10) = param_1;
  puVar3 = &DAT_100ee8430;
  _swift_allocObject(&DAT_100ee8430,0x28,7);
  *(code **)(puVar3 + 0x10) = thunk_FUN_1005dff28;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  *(long *)(puVar3 + 0x20) = param_2;
  uVar4 = *(ulong *)(param_2 + 0x20);
  lVar1 = *(long *)(param_2 + 0x28);
  _swift_getObjectType();
  pcVar9 = *(code **)(lVar1 + 0x10);
  _swift_retain_n(puVar2,2);
  _swift_retain_n(param_2,2);
  uVar5 = uVar4;
  (*pcVar9)(uVar4,lVar1);
  if ((uVar5 & 1) != 0) {
    _swift_beginAccess(param_2 + 0x10,auStack_68,0,0);
    uVar8 = *(undefined8 *)(param_2 + 0x10);
    if (*(char *)(param_2 + 0x18) == '\x01') {
      puVar6 = &DAT_100fd4f20;
      FUN_1000f7830(&DAT_100fd4f20,&DAT_100c660a0);
      puVar7 = (undefined8 *)PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90
      ;
      _swift_allocError();
      *puVar7 = uVar8;
      FUN_1005dfee0(uVar8,1);
      _swift_continuation_throwingResumeWithError(param_1,puVar6);
    }
    else if (*(char *)(param_2 + 0x18) == -1) {
      _swift_beginAccess(param_2 + 0x30,auStack_80,0x21,0);
      FUN_10064967c(FUN_1005dfed4,puVar3);
      _swift_endAccess(auStack_80);
    }
    else {
      FUN_1005dfee0(uVar8);
      **(undefined8 **)(*(long *)(param_1 + 0x40) + 0x28) = uVar8;
      _swift_continuation_throwingResume(param_1);
    }
    FUN_1006486f8(0,0,0);
    FUN_100004550(0,0);
    _swift_release(param_2);
    _swift_release_n(puVar2,2);
    _swift_release(puVar3);
    _swift_bridgeObjectRelease(0);
    return;
  }
  puVar6 = &DAT_100ee8458;
  _swift_allocObject(&DAT_100ee8458,0x28,7);
  *(long *)(puVar6 + 0x10) = param_2;
  *(code **)(puVar6 + 0x18) = FUN_1005dfed4;
  *(undefined **)(puVar6 + 0x20) = puVar3;
  pcVar9 = *(code **)(lVar1 + 0x18);
  _swift_retain(param_2);
  _swift_retain(puVar3);
  (*pcVar9)(FUN_1005dfe64,puVar6,uVar4,lVar1);
  _swift_release(puVar6);
  _swift_release(param_2);
  _swift_release_n(puVar2,2);
  _swift_release(puVar3);
  return;
}



/* Address: 0x1005dafd8 | FUN_1005dafd8 */

void FUN_1005dafd8(undefined8 param_1,long param_2)

{
  long lVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  puVar3 = &DAT_100ee8340;
  _swift_allocObject(&DAT_100ee8340,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  puVar4 = &DAT_100ee8368;
  _swift_allocObject(&DAT_100ee8368,0x28,7);
  *(code **)(puVar4 + 0x10) = FUN_1005dfe90;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  *(long *)(puVar4 + 0x20) = param_2;
  uVar5 = *(ulong *)(param_2 + 0x20);
  lVar1 = *(long *)(param_2 + 0x28);
  _swift_getObjectType();
  pcVar10 = *(code **)(lVar1 + 0x10);
  _swift_retain_n(puVar3,2);
  _swift_retain_n(param_2,2);
  uVar6 = uVar5;
  (*pcVar10)(uVar5,lVar1);
  if ((uVar6 & 1) != 0) {
    _swift_beginAccess(param_2 + 0x10,auStack_68,0,0);
    uVar9 = *(undefined8 *)(param_2 + 0x10);
    cVar2 = *(char *)(param_2 + 0x18);
    if (cVar2 == '\x01') {
      puVar7 = &DAT_100fd4f20;
      FUN_1000f7830(&DAT_100fd4f20,&DAT_100c660a0);
      puVar8 = (undefined8 *)PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90
      ;
      _swift_allocError();
      *puVar8 = uVar9;
      FUN_1005dfeb4(uVar9,1);
      _swift_continuation_throwingResumeWithError(param_1,puVar7);
    }
    else if (cVar2 == -1) {
      _swift_beginAccess(param_2 + 0x30,auStack_80,0x21,0);
      FUN_10064967c(FUN_1005dfea8,puVar4);
      _swift_endAccess(auStack_80);
    }
    else {
      _swift_continuation_throwingResume(param_1);
      FUN_100308538(uVar9,cVar2);
    }
    FUN_1006486f8(0,0,0);
    FUN_100004550(0,0);
    _swift_release(param_2);
    _swift_release_n(puVar3,2);
    _swift_release(puVar4);
    _swift_bridgeObjectRelease(0);
    return;
  }
  puVar7 = &DAT_100ee8390;
  _swift_allocObject(&DAT_100ee8390,0x28,7);
  *(long *)(puVar7 + 0x10) = param_2;
  *(code **)(puVar7 + 0x18) = FUN_1005dfea8;
  *(undefined **)(puVar7 + 0x20) = puVar4;
  pcVar10 = *(code **)(lVar1 + 0x18);
  _swift_retain(param_2);
  _swift_retain(puVar4);
  (*pcVar10)(FUN_1005dfe64,puVar7,uVar5,lVar1);
  _swift_release(puVar7);
  _swift_release(param_2);
  _swift_release_n(puVar3,2);
  _swift_release(puVar4);
  return;
}



/* Address: 0x1005db228 | FUN_1005db228 */

void FUN_1005db228(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *param_2;
  puVar1 = &DAT_100ee8700;
  _swift_allocObject(&DAT_100ee8700,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = *(undefined8 *)(lVar2 + 0x50);
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  FUN_100646e1c(FUN_1005e0228,puVar1);
  _swift_release(puVar1);
  return;
}



/* Address: 0x1005db288 | FUN_1005db288 */

void FUN_1005db288(void)

{
  FUN_1005db228();
  return;
}



/* Address: 0x1005db290 | FUN_1005db290 */

/* WARNING: Type propagation algorithm not settling */

void FUN_1005db290(undefined8 param_1,undefined8 param_2,long param_3)

{
  Result RVar1;
  long lVar2;
  undefined *puVar3;
  undefined7 extraout_var;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 local_70 [2];
  long lVar4;
  
  lVar2 = 0;
  local_70[0] = param_2;
  FUN_1006638e4(0,param_3);
  lVar8 = (long)local_70 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = *(long *)(param_3 + -8);
  uVar6 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar10 = lVar8 - uVar6;
  lVar9 = lVar10 - uVar6;
  puVar3 = &DAT_100fd4f20;
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  RVar1 = Swift::Result::typeMetadataAccessor();
  lVar4 = CONCAT71(extraout_var,RVar1.value);
  puVar11 = (undefined8 *)
            (lVar9 - (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  (**(code **)(*(long *)(lVar4 + -8) + 0x10))(puVar11,param_1,lVar4);
  puVar5 = puVar11;
  _swift_getEnumCaseMultiPayload(puVar11,lVar4);
  if ((int)puVar5 == 1) {
    local_70[1] = *puVar11;
    FUN_1005ec180(local_70 + 1,local_70[0],lVar2,puVar3,
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
  }
  else {
    (**(code **)(lVar7 + 0x20))(lVar9,puVar11,param_3);
    (**(code **)(lVar7 + 0x10))(lVar10,lVar9,param_3);
    FUN_1005cfcb0(lVar8,lVar10,param_3);
    FUN_1005ec10c(lVar8,local_70[0],lVar2,puVar3,
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    (**(code **)(lVar7 + 8))(lVar9,param_3);
  }
  return;
}



/* Address: 0x1005db434 | FUN_1005db434 */

void FUN_1005db434(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x80) = param_2;
  *(undefined8 *)(unaff_x22 + 0x88) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x78) = param_1;
  _swift_task_switch(FUN_1005db450,0,0);
  return;
}



/* Address: 0x1005db450 | FUN_1005db450 */

void FUN_1005db450(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  long *plVar4;
  UnsafeContinuation<undefined,undefined> continuation;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long unaff_x22;
  long lVar8;
  String isolation;
  String function;
  
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x80);
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0x88);
  bVar3 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar3 & 1) != 0) {
    plVar4 = (long *)(ulong)*(uint *)(PTR__withCheckedThrowingContinuation_100eaefc8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x90) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_1005db604;
    isolation.bridgeObject = (void *)0x0;
    isolation.str = (char *)plVar4;
    Swift::_withCheckedThrowingContinuation(isolation);
    return;
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x78);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1005db668;
  continuation.unknown = (undefined *)(unaff_x22 + 0x10);
  _swift_continuation_init(continuation.unknown,1);
  puVar5 = &DAT_100fd4f18;
  FUN_1000f7830(&DAT_100fd4f18,0x100c65d70);
  lVar8 = *(long *)(puVar5 + -8);
  uVar6 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar6);
  FUN_1000f7830(&DAT_100fd4f20,&DAT_100c660a0);
  function.bridgeObject = (void *)0x8000000100dae750;
  function.str = (char *)0xd000000000000014;
  Swift::CheckedContinuation::init(continuation,function);
  FUN_1005db6d8(uVar6,uVar2,uVar7,uVar1);
  (**(code **)(lVar8 + 8))(uVar6,puVar5);
  _swift_task_dealloc(uVar6);
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x1005db604 | FUN_1005db604 */

void FUN_1005db604(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x90));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1000e5808;
  }
  else {
    *(long *)(lVar2 + 0x98) = unaff_x20;
    pcVar1 = FUN_1002e20ac;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1005db668 | FUN_1005db668 */

void FUN_1005db668(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  lVar3 = *(long *)(lVar2 + 0x30);
  if (lVar3 == 0) {
    pcVar1 = FUN_1000e5808;
  }
  else {
    _swift_willThrow();
    *(long *)(lVar2 + 0x98) = lVar3;
    pcVar1 = FUN_1002e20ac;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1005db6d8 | FUN_1005db6d8 */

void FUN_1005db6d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  puVar1 = &DAT_100fd4f18;
  FUN_1000f7830(&DAT_100fd4f18,0x100c65d70);
  lVar4 = *(long *)(puVar1 + -8);
  lVar5 = *(long *)(lVar4 + 0x40);
  (**(code **)(lVar4 + 0x10))
            (&stack0xffffffffffffffa0 + -(lVar5 + 0xfU & 0xfffffffffffffff0),param_1,puVar1);
  uVar3 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar6 = uVar3 + 0x10 & (uVar3 ^ 0xffffffffffffffff);
  puVar2 = &DAT_100ee86d8;
  _swift_allocObject(&DAT_100ee86d8,uVar6 + lVar5,uVar3 | 7);
  (**(code **)(lVar4 + 0x20))
            (puVar2 + uVar6,&stack0xffffffffffffffa0 + -(lVar5 + 0xfU & 0xfffffffffffffff0),puVar1);
  FUN_10063d8a4(FUN_1005e01d0,puVar2,param_3,param_4);
  _swift_release(puVar2);
  return;
}



/* Address: 0x1005db7c8 | FUN_1005db7c8 */

void FUN_1005db7c8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1005db6d8(param_1,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1005db7d4 | FUN_1005db7d4 */

void FUN_1005db7d4(long param_1)

{
  undefined *puVar1;
  long local_28;
  
  if (param_1 == 0) {
    FUN_1000f7830(&DAT_100fd4f18,0x100c65d70);
    Swift::CheckedContinuation::resume();
  }
  else {
    local_28 = param_1;
    _swift_errorRetain();
    puVar1 = &DAT_100fd4f18;
    FUN_1000f7830(&DAT_100fd4f18,0x100c65d70);
    Swift::CheckedContinuation::resume(&local_28,puVar1);
  }
  return;
}



/* Address: 0x1005db844 | FUN_1005db844 */

void FUN_1005db844(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  TaskPriority TVar2;
  long lVar3;
  
  puVar1 = &DAT_100fd4f28;
  FUN_1000f7830(&DAT_100fd4f28,0x100c65d80);
  lVar3 = *(long *)(*(long *)(puVar1 + -8) + 0x40);
  TVar2 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar2.unknown + -8) + 0x38))
            (&stack0xffffffffffffffc0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),1,1,TVar2.unknown);
  puVar1 = &DAT_100ee8150;
  _swift_allocObject(&DAT_100ee8150,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_1;
  *(undefined8 *)(puVar1 + 0x30) = param_2;
  *(undefined8 *)(puVar1 + 0x38) = param_3;
  _swift_retain(param_2);
  _swift_retain(param_3);
  FUN_1005df828(0,0,&stack0xffffffffffffffc0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),0x100c65d90,
                puVar1);
  return;
}



/* Address: 0x1005db924 | FUN_1005db924 */

void FUN_1005db924(void)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  int *in_x3;
  undefined8 in_x5;
  long in_x6;
  long lVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = in_x5;
  *(long *)(unaff_x22 + 0x18) = in_x6;
  lVar4 = *(long *)(in_x6 + -8);
  *(long *)(unaff_x22 + 0x20) = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x28) = uVar2;
  iVar1 = *in_x3;
  plVar3 = (long *)(ulong)(uint)in_x3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1005db9b8;
                    /* WARNING: Could not recover jumptable at 0x0001005db9b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)in_x3))(plVar3,uVar2);
  return;
}



/* Address: 0x1005db9b8 | FUN_1005db9b8 */

void FUN_1005db9b8(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x38) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x30));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1005dba1c;
  }
  else {
    pcVar1 = FUN_1005dba80;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1005dba1c | FUN_1005dba1c */

void FUN_1005dba1c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
  FUN_100646e88(uVar2,*(undefined8 *)(unaff_x22 + 0x10),uVar3);
  (**(code **)(lVar1 + 8))(uVar2,uVar3);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x0001005dba7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005dba80 | FUN_1005dba80 */

void FUN_1005dba80(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  FUN_100646f54(uVar1,*(undefined8 *)(unaff_x22 + 0x10),*(undefined8 *)(unaff_x22 + 0x18));
  _swift_errorRelease(uVar1);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x0001005dbacc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005dbad0 | FUN_1005dbad0 */

void FUN_1005dbad0(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_deallocObject();
  return;
}



/* Address: 0x1005dbb04 | FUN_1005dbb04 */

void FUN_1005dbb04(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  plVar7 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_1005c804c;
  FUN_1005db924(plVar7,param_1,uVar1,uVar4,uVar5,uVar3,uVar6,uVar2);
  return;
}



/* Address: 0x1005dbba4 | FUN_1005dbba4 */

void FUN_1005dbba4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_4;
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
  *(undefined8 *)(unaff_x22 + 0x60) = param_3;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  _swift_task_switch(FUN_1005dbbc4,0,0);
  return;
}



/* Address: 0x1005dbbc4 | FUN_1005dbbc4 */

void FUN_1005dbbc4(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  (**(code **)(*(long *)(unaff_x22 + 0x68) + 0x88))
            (uVar1,*(undefined8 *)(unaff_x22 + 0x60),*(undefined8 *)(unaff_x22 + 0x58));
  *(undefined8 *)(unaff_x22 + 0x78) = uVar1;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1005dbc30;
  _swift_continuation_init(unaff_x22 + 0x10,1);
  FUN_1005da688();
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x1005dbc30 | FUN_1005dbc30 */

void FUN_1005dbc30(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0x80) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_1005dbc9c;
  }
  else {
    _swift_willThrow();
    pcVar1 = FUN_1005dbcd8;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1005dbc9c | FUN_1005dbc9c */

void FUN_1005dbc9c(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x0001005dbcd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005dbcd8 | FUN_1005dbcd8 */

void FUN_1005dbcd8(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x0001005dbd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005dbd14 | FUN_1005dbd14 */

void FUN_1005dbd14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_6;
  *(undefined8 *)(unaff_x22 + 0x80) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x68) = param_4;
  *(undefined8 *)(unaff_x22 + 0x70) = param_5;
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
  *(undefined8 *)(unaff_x22 + 0x60) = param_3;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  _swift_task_switch(FUN_1005dbd38,0,0);
  return;
}



/* Address: 0x1005dbd38 | FUN_1005dbd38 */

void FUN_1005dbd38(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  (**(code **)(*(long *)(unaff_x22 + 0x70) + 0x48))
            (uVar1,*(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x68),
             *(undefined8 *)(unaff_x22 + 0x78),*(undefined8 *)(unaff_x22 + 0x60));
  *(undefined8 *)(unaff_x22 + 0x88) = uVar1;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1005dbda8;
  _swift_continuation_init(unaff_x22 + 0x10,1);
  FUN_1005da688();
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x1005dbda8 | FUN_1005dbda8 */

void FUN_1005dbda8(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0x90) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_1005dbe14;
  }
  else {
    _swift_willThrow();
    pcVar1 = FUN_1005dbe50;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1005dbe14 | FUN_1005dbe14 */

void FUN_1005dbe14(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x88));
                    /* WARNING: Could not recover jumptable at 0x0001005dbe4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005dbe50 | FUN_1005dbe50 */

void FUN_1005dbe50(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x88));
                    /* WARNING: Could not recover jumptable at 0x0001005dbe88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005dbe8c | FUN_1005dbe8c */

void FUN_1005dbe8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_6;
  *(undefined8 *)(unaff_x22 + 0x40) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = param_5;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  _swift_task_switch(FUN_1005dbeb0,0,0);
  return;
}



/* Address: 0x1005dbeb0 | FUN_1005dbeb0 */

void FUN_1005dbeb0(void)

{
  undefined8 uVar1;
  long *plVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  (**(code **)(*(long *)(unaff_x22 + 0x30) + 0x50))
            (uVar1,*(undefined8 *)(unaff_x22 + 0x28),*(undefined8 *)(unaff_x22 + 0x38),
             *(undefined8 *)(unaff_x22 + 0x20));
  *(undefined8 *)(unaff_x22 + 0x48) = uVar1;
  plVar2 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x50) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1005dbf20;
  FUN_1005da4a4(plVar2,*(undefined8 *)(unaff_x22 + 0x10));
  return;
}



/* Address: 0x1005dbf20 | FUN_1005dbf20 */

void FUN_1005dbf20(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  long lVar2;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x48);
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x50));
  _swift_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001005dbf68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x1005dbf6c | FUN_1005dbf6c */

void FUN_1005dbf6c(void)

{
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = in_x5;
  *(undefined8 *)(unaff_x22 + 0x60) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x50) = in_x4;
  _swift_task_switch(FUN_1005dbf88,0,0);
  return;
}



/* Address: 0x1005dbf88 | FUN_1005dbf88 */

void FUN_1005dbf88(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  FUN_100622964(uVar1,*(undefined8 *)(unaff_x22 + 0x58));
  *(undefined8 *)(unaff_x22 + 0x68) = uVar1;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1005dbfec;
  _swift_continuation_init(unaff_x22 + 0x10,1);
  FUN_1005da8d8();
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x1005dbfec | FUN_1005dbfec */

void FUN_1005dbfec(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0x70) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = thunk_FUN_1005dc9f8;
  }
  else {
    _swift_willThrow();
    pcVar1 = thunk_FUN_1005dca34;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1005dc058 | FUN_1005dc058 */

void FUN_1005dc058(undefined8 param_1)

{
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = in_x6;
  *(undefined8 *)(unaff_x22 + 0x68) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  *(undefined8 *)(unaff_x22 + 0x58) = in_x5;
  _swift_task_switch(FUN_1005dc074,0,0);
  return;
}



/* Address: 0x1005dc074 | FUN_1005dc074 */

void FUN_1005dc074(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  FUN_1006229bc(uVar1,*(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x60));
  *(undefined8 *)(unaff_x22 + 0x70) = uVar1;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1005dc0d8;
  _swift_continuation_init(unaff_x22 + 0x10,1);
  FUN_1005da8d8();
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x1005dc0d8 | FUN_1005dc0d8 */

void FUN_1005dc0d8(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0x78) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = thunk_FUN_1005dd380;
  }
  else {
    _swift_willThrow();
    pcVar1 = thunk_FUN_1005dd034;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1005dc144 | FUN_1005dc144 */

void FUN_1005dc144(undefined8 param_1)

{
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = in_x6;
  *(undefined8 *)(unaff_x22 + 0x68) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  *(undefined8 *)(unaff_x22 + 0x58) = in_x5;
  _swift_task_switch(FUN_1005dc160,0,0);
  return;
}



/* Address: 0x1005dc160 | FUN_1005dc160 */

void FUN_1005dc160(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  FUN_100622a28(uVar1,*(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x60));
  *(undefined8 *)(unaff_x22 + 0x70) = uVar1;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1005dc0d8;
  _swift_continuation_init(unaff_x22 + 0x10,1);
  FUN_1005da8d8();
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x1005dc1c4 | FUN_1005dc1c4 */

void FUN_1005dc1c4(undefined8 param_1)

{
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = in_x6;
  *(undefined8 *)(unaff_x22 + 0x68) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  *(undefined8 *)(unaff_x22 + 0x58) = in_x5;
  _swift_task_switch(FUN_1005dc1e0,0,0);
  return;
}



/* Address: 0x1005dc1e0 | FUN_1005dc1e0 */

void FUN_1005dc1e0(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  FUN_100622a94(uVar1,*(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x60));
  *(undefined8 *)(unaff_x22 + 0x70) = uVar1;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1005dc0d8;
  _swift_continuation_init(unaff_x22 + 0x10,1);
  FUN_1005da8d8();
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x1005dc244 | FUN_1005dc244 */

void FUN_1005dc244(undefined1 param_1)

{
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = in_x6;
  *(undefined8 *)(unaff_x22 + 0x60) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x50) = in_x5;
  *(undefined1 *)(unaff_x22 + 0x78) = param_1;
  _swift_task_switch(FUN_1005dc264,0,0);
  return;
}



/* Address: 0x1005dc264 | FUN_1005dc264 */

void FUN_1005dc264(void)

{
  ulong uVar1;
  long unaff_x22;
  
  uVar1 = (ulong)*(byte *)(unaff_x22 + 0x78);
  FUN_100622b00(uVar1,*(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x58));
  *(ulong *)(unaff_x22 + 0x68) = uVar1;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1005dbfec;
  _swift_continuation_init(unaff_x22 + 0x10,1);
  FUN_1005da8d8();
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x1005dc2cc | FUN_1005dc2cc */

void FUN_1005dc2cc(undefined8 param_1)

{
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = in_x6;
  *(undefined8 *)(unaff_x22 + 0x68) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  *(undefined8 *)(unaff_x22 + 0x58) = in_x5;
  _swift_task_switch(FUN_1005dc2e8,0,0);
  return;
}



/* Address: 0x1005dc2e8 | FUN_1005dc2e8 */

void FUN_1005dc2e8(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  FUN_100622b6c(uVar1,*(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x60));
  *(undefined8 *)(unaff_x22 + 0x70) = uVar1;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1005dc0d8;
  _swift_continuation_init(unaff_x22 + 0x10,1);
  FUN_1005da8d8();
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x1005dc34c | FUN_1005dc34c */

void FUN_1005dc34c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x88) = param_6;
  *(undefined8 *)(unaff_x22 + 0x90) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x78) = param_4;
  *(undefined8 *)(unaff_x22 + 0x80) = param_5;
  *(undefined8 *)(unaff_x22 + 0x68) = param_2;
  *(undefined8 *)(unaff_x22 + 0x70) = param_3;
  *(undefined8 *)(unaff_x22 + 0x60) = param_1;
  _swift_task_switch(FUN_1005dc370,0,0);
  return;
}



/* Address: 0x1005dc370 | FUN_1005dc370 */

void FUN_1005dc370(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  long unaff_x22;
  ulong uVar14;
  ulong local_78;
  ulong local_70;
  
  uVar4 = *(ulong *)(*(long *)(unaff_x22 + 0x90) + 0x30);
  lVar1 = *(long *)(*(long *)(unaff_x22 + 0x90) + 0x38);
  _swift_getObjectType();
  uVar14 = uVar4;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar14 & 1) == 0) {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x70);
    puVar5 = &DAT_100ee8178;
    _swift_allocObject(&DAT_100ee8178,0x48,7);
    *(undefined8 *)(puVar5 + 0x10) = uVar3;
    *(undefined8 *)(puVar5 + 0x18) = uVar8;
    *(undefined8 *)(puVar5 + 0x20) = uVar2;
    uVar11 = *(undefined8 *)(unaff_x22 + 0x60);
    *(undefined8 *)(puVar5 + 0x30) = *(undefined8 *)(unaff_x22 + 0x68);
    *(undefined8 *)(puVar5 + 0x28) = uVar11;
    *(undefined8 *)(puVar5 + 0x38) = uVar12;
    *(undefined8 *)(puVar5 + 0x40) = uVar7;
    pcVar13 = *(code **)(lVar1 + 0x20);
    FUN_1005dfcb0(uVar3,uVar8);
    _swift_bridgeObjectRetain(uVar7);
    _swift_retain(uVar2);
    _swift_unknownObjectRetain(uVar11);
    pcVar6 = FUN_1005dfc8c;
    (*pcVar13)(FUN_1005dfc8c,puVar5,PTR___type_metadata_for____100eae0c8 + 8,uVar4,lVar1);
    _swift_release(puVar5);
  }
  else {
    uVar14 = *(ulong *)(unaff_x22 + 0x88);
    uVar9 = (uint)(uVar14 >> 0x3e);
    if (uVar9 == 2) {
      uVar10 = *(ulong *)(unaff_x22 + 0x80);
      local_78 = (ulong)(uVar10 != 0 || uVar14 != 0x8000000000000000);
      local_70 = 0x8000000000000000;
    }
    else if (uVar9 == 1) {
      uVar10 = *(ulong *)(unaff_x22 + 0x80);
      local_78 = uVar10;
      local_70 = uVar14 & 0x3fffffffffffffff | 0x4000000000000000;
    }
    else {
      uVar10 = *(ulong *)(unaff_x22 + 0x80);
      local_78 = uVar10;
      local_70 = uVar14;
    }
    uVar11 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar12 = uVar7;
    _swift_getObjectType(uVar7);
    FUN_1005dfcb0(uVar10,uVar14);
    FUN_100630400(uVar7,uVar8,uVar2,local_78,local_70,uVar11,uVar12,uVar3);
    *(undefined8 *)(unaff_x22 + 0x50) = uVar7;
    *(char *)(unaff_x22 + 0x58) = (char)uVar8;
    pcVar6 = (code *)(unaff_x22 + 0x50);
    FUN_10063db28(pcVar6,uVar4,PTR___type_metadata_for____100eae0c8 + 8,lVar1);
    FUN_1005dfc80(uVar10,uVar14);
    FUN_1002ec258(uVar7,uVar8);
  }
  *(code **)(unaff_x22 + 0x98) = pcVar6;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1005dc5a0;
  _swift_continuation_init(unaff_x22 + 0x10,1);
  FUN_1005da8d8();
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x1005dc5a0 | FUN_1005dc5a0 */

void FUN_1005dc5a0(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0xa0) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_1005dc60c;
  }
  else {
    _swift_willThrow();
    pcVar1 = FUN_1005dc648;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1005dc60c | FUN_1005dc60c */

void FUN_1005dc60c(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x0001005dc644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005dc648 | FUN_1005dc648 */

void FUN_1005dc648(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x0001005dc680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005dc684 | FUN_1005dc684 */

void FUN_1005dc684(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
  *(undefined8 *)(unaff_x22 + 0x60) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  _swift_task_switch(FUN_1005dc6a0,0,0);
  return;
}



/* Address: 0x1005dc6a0 | FUN_1005dc6a0 */

void FUN_1005dc6a0(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  FUN_100626050(uVar1,*(undefined8 *)(unaff_x22 + 0x58));
  *(undefined8 *)(unaff_x22 + 0x68) = uVar1;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1005dbfec;
  _swift_continuation_init(unaff_x22 + 0x10,1);
  FUN_1005da8d8();
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x1005dc704 | FUN_1005dc704 */

void FUN_1005dc704(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
  *(undefined8 *)(unaff_x22 + 0x60) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  _swift_task_switch(FUN_1005dc720,0,0);
  return;
}



/* Address: 0x1005dc720 | FUN_1005dc720 */

void FUN_1005dc720(void)

{
  long lVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long unaff_x22;
  long lVar11;
  code *pcVar12;
  
  puVar10 = *(undefined **)(*(long *)(unaff_x22 + 0x60) + 0x30);
  lVar1 = *(long *)(*(long *)(unaff_x22 + 0x60) + 0x38);
  _swift_getObjectType();
  puVar4 = puVar10;
  FUN_1006422fc();
  *(undefined **)(unaff_x22 + 0x68) = puVar4;
  puVar5 = puVar10;
  (**(code **)(lVar1 + 0x10))(puVar10,lVar1);
  lVar11 = *(long *)(unaff_x22 + 0x60);
  if (((ulong)puVar5 & 1) == 0) {
    uVar9 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
    puVar6 = &DAT_100ee81a0;
    _swift_allocObject(&DAT_100ee81a0,0x30,7);
    *(long *)(puVar6 + 0x10) = lVar11;
    *(undefined8 *)(puVar6 + 0x18) = uVar9;
    *(undefined8 *)(puVar6 + 0x20) = uVar2;
    *(undefined **)(puVar6 + 0x28) = puVar4;
    pcVar12 = *(code **)(lVar1 + 0x18);
    _swift_retain(puVar4);
    _swift_retain(lVar11);
    _swift_bridgeObjectRetain(uVar2);
    (*pcVar12)(FUN_1005dfcf0,puVar6,puVar10,lVar1);
  }
  else {
    if (*(long *)(lVar11 + 0x10) != 0) {
      puVar10 = *(undefined **)(*(long *)(lVar11 + 0x10) + 0x10);
      puVar5 = puVar10;
      _swift_retain();
      while (puVar6 = puVar10, puVar6 != (undefined *)0x0) {
        if (puVar6 == *(undefined **)(lVar11 + 0x18)) {
          _swift_release();
          puVar5 = puVar6;
          break;
        }
                    /* WARNING: Load size is inaccurate */
        if ((puVar6[0x28] == *(undefined **)(unaff_x22 + 0x50) &&
             puVar6[0x30] == *(undefined **)(unaff_x22 + 0x58)) ||
           (bVar3 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)puVar6[0x28],(_StringGuts)puVar6[0x30],
                               (_StringComparisonResult)(__int8)*(undefined **)(unaff_x22 + 0x50)),
           bVar3)) {
          FUN_1006313ac(puVar6,puVar4);
          goto LAB_1005dc948;
        }
        puVar10 = *(undefined **)(puVar6 + 0x10);
        _swift_retain(puVar10);
        _swift_release();
        puVar5 = puVar6;
      }
    }
    FUN_1005dfcfc();
    puVar10 = &DAT_100eed960;
    uVar9 = 0;
    _swift_allocError(&DAT_100eed960,puVar5,0,0);
    *puVar5 = 1;
    uVar7 = *(ulong *)(puVar4 + 0x20);
    lVar1 = *(long *)(puVar4 + 0x28);
    _swift_getObjectType();
    uVar8 = uVar7;
    lVar11 = lVar1;
    (**(code **)(lVar1 + 0x10))();
    if ((uVar8 & 1) != 0) {
      puVar5 = puVar10;
      FUN_1005de8f4(puVar10);
      FUN_1006486f8();
      _swift_errorRelease(puVar10);
      FUN_100004550(puVar5,lVar11);
      _swift_bridgeObjectRelease(uVar9);
      goto LAB_1005dc94c;
    }
    puVar6 = &DAT_100ee81c8;
    _swift_allocObject(&DAT_100ee81c8,0x20,7);
    *(undefined **)(puVar6 + 0x10) = puVar4;
    *(undefined **)(puVar6 + 0x18) = puVar10;
    pcVar12 = *(code **)(lVar1 + 0x18);
    _swift_retain(puVar4);
    _swift_errorRetain(puVar10);
    (*pcVar12)(FUN_1005dfd68,puVar6,uVar7,lVar1);
    _swift_errorRelease(puVar10);
  }
LAB_1005dc948:
  _swift_release(puVar6);
LAB_1005dc94c:
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1005dc98c;
  _swift_continuation_init(unaff_x22 + 0x10,1);
  FUN_1005da8d8();
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x1005dc98c | FUN_1005dc98c */

void FUN_1005dc98c(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0x70) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_1005dc9f8;
  }
  else {
    _swift_willThrow();
    pcVar1 = FUN_1005dca34;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1005dc9f8 | FUN_1005dc9f8 */

void FUN_1005dc9f8(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x0001005dca30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005dca34 | FUN_1005dca34 */

void FUN_1005dca34(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x0001005dca6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005dca70 | FUN_1005dca70 */

void FUN_1005dca70(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  *(undefined8 *)(unaff_x22 + 0x58) = unaff_x20;
  _swift_task_switch(FUN_1005dca88,0,0);
  return;
}



/* Address: 0x1005dca88 | FUN_1005dca88 */

void FUN_1005dca88(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar2 = *(undefined8 *)(*(long *)(unaff_x22 + 0x58) + 0x30);
  _swift_getObjectType();
  FUN_1006422fc();
  *(undefined8 *)(unaff_x22 + 0x60) = uVar2;
  FUN_10062858c(uVar1,uVar2);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1005dcb1c;
  _swift_continuation_init(unaff_x22 + 0x10,1);
  FUN_1005da8d8();
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}


