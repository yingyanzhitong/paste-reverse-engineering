/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100364968 | FUN_100364968 */

undefined8 FUN_100364968(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fc07f0;
  FUN_1000037f0(&DAT_100fc07f0,&DAT_100c42950);
  (**(code **)(*(long *)(puVar1 + -8) + 0x28))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1003649b8 | FUN_1003649b8 */

void FUN_1003649b8(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x1003649ec | FUN_1003649ec */

void FUN_1003649ec(undefined8 param_1)

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
  plVar5 = (long *)0xf0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100008284;
  FUN_1003601e0(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Address: 0x100364a64 | FUN_100364a64 */

undefined8 FUN_100364a64(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fbe6e8;
  FUN_1000037f0(&DAT_100fbe6e8,&DAT_100c43250);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100364ab4 | FUN_100364ab4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100364ab4(ID param_1,code *param_2)

{
  char *pcVar1;
  String SVar2;
  void *pvVar3;
  NSObject *pNVar4;
  bool bVar5;
  ID IVar6;
  NSString *pNVar7;
  NSObject *pNVar8;
  void *pvVar9;
  String SVar10;
  String local_58;
  NSObject *local_48;
  
  IVar6 = objc_stub::title(param_1);
  if (IVar6 == 0) {
    local_58 = (String)ZEXT816(0);
  }
  else {
    local_58 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  local_48 = (NSObject *)objc_stub::sourceApplication(param_1);
  (*param_2)(&local_58);
  SVar2 = local_58;
  pcVar1 = local_58.str;
  pvVar3 = local_58.bridgeObject;
  _swift_bridgeObjectRetain(local_58.bridgeObject);
  IVar6 = objc_stub::title(param_1);
  if (IVar6 == 0) {
    if (pvVar3 != (undefined *)0x0) {
LAB_100364b94:
      _swift_bridgeObjectRelease(pvVar3);
LAB_100364b9c:
      pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
LAB_100364bc0:
      objc_stub::setTitle_(param_1,pNVar7);
    }
  }
  else {
    SVar10 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    pvVar9 = SVar10.bridgeObject;
    if (pvVar3 == (undefined *)0x0) {
      if (pvVar9 != (void *)0x0) {
        _swift_bridgeObjectRelease(pvVar9);
        pNVar7 = (NSString *)0x0;
        goto LAB_100364bc0;
      }
    }
    else {
      if (pvVar9 == (void *)0x0) goto LAB_100364b94;
      if (SVar10 == SVar2) {
        _swift_bridgeObjectRelease(pvVar3);
        _swift_bridgeObjectRelease(pvVar9);
      }
      else {
        bVar5 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)pcVar1,(_StringGuts)pvVar3,
                           (_StringComparisonResult)(__int8)SVar10.str);
        _swift_bridgeObjectRelease(pvVar3);
        _swift_bridgeObjectRelease(pvVar9);
        if (!bVar5) goto LAB_100364b9c;
      }
    }
  }
  pNVar4 = local_48;
  pNVar8 = (NSObject *)objc_stub::sourceApplication(param_1);
  if (pNVar4 == (NSObject *)0x0) {
    if (pNVar8 == (NSObject *)0x0) goto LAB_100364c50;
  }
  else if (pNVar8 != (NSObject *)0x0) {
    FUN_100311d0c(0);
    bVar5 = (extension_ObjectiveC)::__C::NSObject::___infix(pNVar4,pNVar8);
    if (bVar5) goto LAB_100364c50;
  }
  objc_stub::setSourceApplication_(param_1,pNVar4);
LAB_100364c50:
  _swift_bridgeObjectRelease(pvVar3);
  return;
}



/* Address: 0x100364ca0 | FUN_100364ca0 */

void FUN_100364ca0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100362844(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100364cb8 | FUN_100364cb8 */

uint FUN_100364cb8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100361e40(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return (uint)param_1 & 1;
}



/* Address: 0x100364cd4 | FUN_100364cd4 */

void FUN_100364cd4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc1210 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c42d18;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c42d18,&DAT_100ecca40);
  DAT_100fc1210 = pTVar1;
  return;
}



/* Address: 0x100364d14 | FUN_100364d14 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100364d14(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x100364d40 | FUN_100364d40 */

void FUN_100364d40(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100361280(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100364d48 | FUN_100364d48 */

undefined8 FUN_100364d48(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100317b10();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x100364d8c | FUN_100364d8c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100364d8c(void)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  URL UVar5;
  undefined8 uVar6;
  AttributedString AVar7;
  long unaff_x20;
  ulong uVar8;
  
  lVar3 = 0;
  FUN_100317b10();
  uVar8 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  puVar1 = (undefined8 *)(unaff_x20 + (uVar8 + 0x18 & (uVar8 ^ 0xffffffffffffffff)));
  puVar4 = puVar1;
  _swift_getEnumCaseMultiPayload(puVar1,lVar3);
  iVar2 = (int)puVar4;
  if (iVar2 < 2) {
    if (iVar2 == 0) {
      lVar3 = 0;
      FUN_10031a030();
      iVar2 = *(int *)(lVar3 + 0x14);
      AVar7 = Foundation::AttributedString::typeMetadataAccessor();
      (**(code **)(*(long *)(AVar7.unknown + -8) + 8))((long)puVar1 + (long)iVar2,AVar7.unknown);
      goto LAB_100364ec4;
    }
    if (iVar2 != 1) goto LAB_100364ec4;
    UVar5 = Foundation::URL::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar5.unknown + -8) + 8))(puVar1,UVar5.unknown);
    lVar3 = 0;
    FUN_1003187b8();
    _swift_bridgeObjectRelease(*(undefined8 *)((long)puVar1 + (long)*(int *)(lVar3 + 0x14) + 8));
    puVar4 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar3 + 0x18));
    if ((ulong)puVar4[1] >> 0x3c < 0xf) {
      FUN_10003bf2c(*puVar4);
    }
    puVar1 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar3 + 0x1c));
    uVar8 = puVar1[1];
    if (0xe < uVar8 >> 0x3c) goto LAB_100364ec4;
    uVar6 = *puVar1;
  }
  else if (iVar2 == 2) {
    uVar6 = puVar1[2];
    uVar8 = puVar1[3];
  }
  else {
    if (iVar2 != 4) goto LAB_100364ec4;
    _swift_bridgeObjectRelease(*puVar1);
    uVar8 = puVar1[3];
    if (0xe < uVar8 >> 0x3c) goto LAB_100364ec4;
    uVar6 = puVar1[2];
  }
  FUN_10003bf2c(uVar6,uVar8);
LAB_100364ec4:
  _swift_deallocObject();
  return;
}



/* Address: 0x100364ee8 | FUN_100364ee8 */

void FUN_100364ee8(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_100317b10();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  FUN_100361420(*(undefined8 *)(unaff_x20 + 0x10),
                unaff_x20 + (uVar2 + 0x18 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x100364f18 | FUN_100364f18 */

void FUN_100364f18(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100364f28 | FUN_100364f28 */

void FUN_100364f28(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  _swift_retain(uVar1);
  return;
}



/* Address: 0x100364f3c | FUN_100364f3c */

void FUN_100364f3c(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100364f44 | thunk_FUN_1003643c0 */

undefined * thunk_FUN_1003643c0(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 != 0) {
    puVar2 = &DAT_100fbe4e8;
    FUN_1000037f0(&DAT_100fbe4e8,&DAT_100c40a80);
    _swift_allocObject();
    puVar3 = puVar2;
    _malloc_size();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(long *)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Address: 0x100364f48 | thunk_FUN_100360bcc */

void thunk_FUN_100360bcc(void)

{
  thunk_FUN_100360bcc();
  return;
}



/* Address: 0x100364f4c | FUN_100364f4c */

void FUN_100364f4c(char *param_1,void *param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  __uint8 _Var1;
  undefined *puVar2;
  TaskPriority TVar3;
  undefined1 *puVar4;
  TaskPriority TVar5;
  UnownedSerialExecutor UVar6;
  ContiguousArray<__int8> CVar7;
  undefined8 *puVar8;
  long extraout_x8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  String SVar13;
  undefined1 auStack_c0 [8];
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
  
  puVar2 = &DAT_100fbe478;
  FUN_1000037f0(&DAT_100fbe478,&DAT_100c40940);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_c0 + -extraout_x8;
  FUN_100330d70(param_3,puVar9);
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  lVar12 = *(long *)(TVar3.unknown + -8);
  puVar4 = puVar9;
  (**(code **)(lVar12 + 0x30))(puVar9,1,TVar3.unknown);
  TVar5.unknown = param_5;
  _swift_retain();
  if ((int)puVar4 == 1) {
    FUN_100005808(puVar9,&DAT_100fbe478,&DAT_100c40940);
    uVar10 = 0x1c00;
  }
  else {
    _Var1 = Swift::TaskPriority::get_rawValue(TVar5);
    (**(code **)(lVar12 + 8))(puVar9,TVar3.unknown);
    uVar10 = (ulong)_Var1 | 0x1c00;
  }
  lVar12 = *(long *)(param_5 + 0x10);
  lVar11 = *(long *)(param_5 + 0x18);
  _swift_unknownObjectRetain(lVar12);
  _swift_release(param_5);
  if (lVar12 == 0) {
    UVar6.unknown = (undefined *)0x0;
    lVar11 = 0;
  }
  else {
    _swift_getObjectType(lVar12);
    UVar6 = Swift::Actor::get_unownedExecutor();
    _swift_unknownObjectRelease(lVar12);
  }
  if (param_2 == (void *)0x0) {
    FUN_100005808(param_3,&DAT_100fbe478,&DAT_100c40940);
    puVar2 = &DAT_100eccec0;
    _swift_allocObject(&DAT_100eccec0,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_4;
    *(undefined **)(puVar2 + 0x18) = param_5;
    if (lVar11 == 0 && UVar6.unknown == (undefined *)0x0) {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      local_80 = 0;
      uStack_78 = 0;
      puVar8 = &local_80;
      local_70 = UVar6.unknown;
      lStack_68 = lVar11;
    }
    _swift_task_create(uVar10,puVar8,PTR___type_metadata_for____100eae0c8 + 8,&DAT_100c43068,puVar2)
    ;
  }
  else {
    SVar13.bridgeObject = param_2;
    SVar13.str = param_1;
    CVar7 = Swift::String::get_utf8CString(SVar13);
    _swift_bridgeObjectRelease(param_2);
    puVar2 = &DAT_100eccee8;
    _swift_allocObject(&DAT_100eccee8,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_4;
    *(undefined **)(puVar2 + 0x18) = param_5;
    _swift_retain(param_5);
    if (lVar11 == 0 && UVar6.unknown == (undefined *)0x0) {
      puStack_b0 = (undefined8 *)0x0;
    }
    else {
      local_a0 = 0;
      uStack_98 = 0;
      puStack_b0 = &local_a0;
      local_90 = UVar6.unknown;
      lStack_88 = lVar11;
    }
    local_b8 = 7;
    local_a8 = CVar7.unknown + 0x20;
    _swift_task_create(uVar10,&local_b8,PTR___type_metadata_for____100eae0c8 + 8,&DAT_100c43070,
                       puVar2);
    _swift_release(CVar7.unknown);
    FUN_100005808(param_3,&DAT_100fbe478,&DAT_100c40940);
    _swift_release(param_5);
  }
  return;
}



/* Address: 0x1003651d8 | FUN_1003651d8 */

void FUN_1003651d8(char *param_1,void *param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  __uint8 _Var1;
  undefined *puVar2;
  TaskPriority TVar3;
  undefined1 *puVar4;
  TaskPriority TVar5;
  UnownedSerialExecutor UVar6;
  ContiguousArray<__int8> CVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long extraout_x8;
  undefined1 *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  String SVar14;
  undefined1 auStack_c0 [8];
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
  
  puVar2 = &DAT_100fbe478;
  FUN_1000037f0(&DAT_100fbe478,&DAT_100c40940);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = auStack_c0 + -extraout_x8;
  FUN_100330d70(param_3,puVar10);
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  lVar13 = *(long *)(TVar3.unknown + -8);
  puVar4 = puVar10;
  (**(code **)(lVar13 + 0x30))(puVar10,1,TVar3.unknown);
  TVar5.unknown = param_5;
  _swift_retain();
  if ((int)puVar4 == 1) {
    FUN_100005808(puVar10,&DAT_100fbe478,&DAT_100c40940);
    uVar11 = 0x1c00;
  }
  else {
    _Var1 = Swift::TaskPriority::get_rawValue(TVar5);
    (**(code **)(lVar13 + 8))(puVar10,TVar3.unknown);
    uVar11 = (ulong)_Var1 | 0x1c00;
  }
  lVar13 = *(long *)(param_5 + 0x10);
  lVar12 = *(long *)(param_5 + 0x18);
  _swift_unknownObjectRetain(lVar13);
  _swift_release(param_5);
  if (lVar13 == 0) {
    UVar6.unknown = (undefined *)0x0;
    lVar12 = 0;
  }
  else {
    _swift_getObjectType(lVar13);
    UVar6 = Swift::Actor::get_unownedExecutor();
    _swift_unknownObjectRelease(lVar13);
  }
  if (param_2 == (void *)0x0) {
    FUN_100005808(param_3,&DAT_100fbe478,&DAT_100c40940);
    puVar2 = &DAT_100eccf10;
    _swift_allocObject(&DAT_100eccf10,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_4;
    *(undefined **)(puVar2 + 0x18) = param_5;
    puVar8 = &DAT_100fbe6c8;
    FUN_1000037f0(&DAT_100fbe6c8,&DAT_100c43090);
    if (lVar12 == 0 && UVar6.unknown == (undefined *)0x0) {
      puVar9 = (undefined8 *)0x0;
    }
    else {
      local_80 = 0;
      uStack_78 = 0;
      puVar9 = &local_80;
      local_70 = UVar6.unknown;
      lStack_68 = lVar12;
    }
    _swift_task_create(uVar11,puVar9,puVar8,&DAT_100c43088,puVar2);
  }
  else {
    SVar14.bridgeObject = param_2;
    SVar14.str = param_1;
    CVar7 = Swift::String::get_utf8CString(SVar14);
    _swift_bridgeObjectRelease(param_2);
    puVar2 = &DAT_100eccf38;
    _swift_allocObject(&DAT_100eccf38,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_4;
    *(undefined **)(puVar2 + 0x18) = param_5;
    _swift_retain(param_5);
    puVar8 = &DAT_100fbe6c8;
    FUN_1000037f0(&DAT_100fbe6c8,&DAT_100c43090);
    puStack_b0 = (undefined8 *)0x0;
    if (lVar12 != 0 || UVar6.unknown != (undefined *)0x0) {
      local_a0 = 0;
      uStack_98 = 0;
      puStack_b0 = &local_a0;
      local_90 = UVar6.unknown;
      lStack_88 = lVar12;
    }
    local_b8 = 7;
    local_a8 = CVar7.unknown + 0x20;
    _swift_task_create(uVar11,&local_b8,puVar8,&DAT_100c43098,puVar2);
    _swift_release(param_5);
    _swift_release(CVar7.unknown);
    FUN_100005808(param_3,&DAT_100fbe478,&DAT_100c40940);
  }
  return;
}



/* Address: 0x100365478 | FUN_100365478 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_100365478(undefined8 *param_1)

{
  __CocoaSet _Var1;
  undefined8 uVar2;
  code *pcVar3;
  code *pcVar4;
  undefined8 uVar5;
  code *pcVar6;
  Iterator IVar7;
  Iterator *_cocoa;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  ulong *puVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  undefined *local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  undefined *local_90;
  undefined *local_88;
  ulong *puStack_80;
  ulong local_78;
  long lStack_70;
  ulong local_68;
  
  FUN_10000ec2c(0,&DAT_100fbe420,&PTR__OBJC_CLASS___NSManagedObjectID_100f8d7a8);
  FUN_10036c8f4(&DAT_100fc04c0,&DAT_100fbe420,&PTR__OBJC_CLASS___NSManagedObjectID_100f8d7a8);
  IVar7.unknown = (undefined *)Swift::Set::init(0);
  puVar13 = (undefined *)*param_1;
  pcVar6 = (code *)param_1[1];
  uVar2 = param_1[2];
  pcVar4 = (code *)param_1[3];
  uVar10 = param_1[4];
  local_90 = IVar7.unknown;
  if (((ulong)puVar13 & 0xc000000000000001) == 0) {
    lVar15 = 0;
    uVar12 = -1L << ((ulong)(byte)puVar13[0x20] & 0x3f);
    puVar14 = (ulong *)(puVar13 + 0x38);
    uVar11 = ~uVar12;
    uVar12 = -uVar12;
    uVar17 = 0xffffffffffffffff;
    if (uVar12 < 0x40) {
      uVar17 = ~(-1L << (uVar12 & 0x3f));
    }
    uVar17 = uVar17 & *puVar14;
  }
  else {
    _Var1.unknown = (undefined *)((ulong)puVar13 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar13) {
      _Var1.unknown = puVar13;
    }
    _cocoa = Swift::__CocoaSet::makeIterator(_Var1);
    FUN_10000ec2c(0,&DAT_100fc0660,&PTR__OBJC_CLASS___NSManagedObject_100f8db08);
    FUN_10036c8f4(&DAT_100fbe5d0,&DAT_100fc0660,&PTR__OBJC_CLASS___NSManagedObject_100f8db08);
    IVar7 = Swift::Set::Iterator::_init(_cocoa);
    uVar11 = local_78;
    puVar13 = local_88;
    puVar14 = puStack_80;
    lVar15 = lStack_70;
    uVar17 = local_68;
  }
  pcVar3 = (code *)param_1[5];
  uVar5 = param_1[6];
  uVar12 = uVar11 + 0x40 >> 6;
  lVar16 = lVar15;
  do {
    lVar18 = lVar15;
    if ((long)puVar13 < 0) {
      Swift::__CocoaSet::Iterator::_next((Iterator *)((ulong)puVar13 & 0x7fffffffffffffff));
      if (IVar7.unknown == (undefined *)0x0) {
LAB_10036571c:
        FUN_10000c650(puVar13,puVar14,uVar11,lVar16,uVar17);
        _swift_release(uVar5);
        _swift_release(uVar10);
        _swift_release(uVar2);
        return local_90;
      }
      uVar8 = 0;
      local_b0 = IVar7.unknown;
      FUN_10000ec2c(0,&DAT_100fc0660,&PTR__OBJC_CLASS___NSManagedObject_100f8db08);
      _swift_dynamicCast(&local_a8,&local_b0,PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8,
                         uVar8,7);
      lVar18 = local_a8;
    }
    else {
      while (lVar16 = lVar18, uVar17 == 0) {
        lVar18 = lVar16 + 1;
        if (SCARRY8(lVar16,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100365774);
          (*pcVar6)();
        }
        if ((long)uVar12 <= lVar18) {
          uVar17 = 0;
          if ((long)uVar12 <= lVar15 + 1) {
            uVar12 = lVar15 + 1;
          }
          lVar16 = uVar12 - 1;
          goto LAB_10036571c;
        }
        uVar17 = puVar14[lVar18];
      }
      uVar9 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar17 = uVar17 - 1 & uVar17;
      lVar18 = *(long *)(*(long *)(puVar13 + 0x30) + LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) * 8 +
                        lVar16 * 0x200);
      lVar15 = lVar16;
    }
    if (lVar18 == 0) goto LAB_10036571c;
    uVar9 = 0;
    local_a0 = lVar18;
    (*pcVar6)();
    if ((uVar9 & 1) == 0) {
LAB_100365684:
      IVar7.unknown = (undefined *)0x0;
    }
    else {
      local_a0 = lVar18;
      (*pcVar4)(&local_a8,&local_a0);
      lVar18 = local_a8;
      local_98 = local_a8;
      uVar9 = 0;
      (*pcVar3)();
      if ((uVar9 & 1) == 0) goto LAB_100365684;
      FUN_100369f88(&local_98,lVar18,&DAT_100fbe420,&PTR__OBJC_CLASS___NSManagedObjectID_100f8d7a8,
                    &DAT_100fbe418,&DAT_100c40440);
      IVar7.unknown = (undefined *)0x0;
    }
  } while( true );
}



/* Address: 0x100365774 | FUN_100365774 */

undefined * FUN_100365774(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  code *pcVar6;
  bool bVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_78 [8];
  undefined8 local_70;
  undefined *local_68;
  
  local_68 = (undefined *)Swift::Set::init(*(__int64 *)(param_1 + 0x10));
  lVar9 = 0;
  puVar8 = (ulong *)(param_1 + 0x40);
  uVar10 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar11 = 0xffffffffffffffff;
  if (-uVar10 < 0x40) {
    uVar11 = ~(-1L << (-uVar10 & 0x3f));
  }
  uVar11 = uVar11 & *puVar8;
  lVar1 = lVar9;
  while( true ) {
    for (; uVar11 != 0; uVar11 = uVar11 - 1 & uVar11) {
      uVar5 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      puVar2 = (undefined8 *)
               (*(long *)(param_1 + 0x30) + LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) * 0x10 +
               lVar1 * 0x400);
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      _swift_bridgeObjectRetain(uVar4);
      FUN_100369c0c(auStack_78,uVar3,uVar4);
      _swift_bridgeObjectRelease(local_70);
      lVar9 = lVar1;
    }
    bVar7 = SCARRY8(lVar1,1);
    lVar1 = lVar1 + 1;
    if (bVar7) break;
    if ((long)(0x3f - uVar10 >> 6) <= lVar1) {
      FUN_10000c650(param_1,puVar8,~uVar10,lVar9,0);
      return local_68;
    }
    uVar11 = puVar8[lVar1];
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1003658a8);
  (*pcVar6)();
}



/* Address: 0x1003658a8 | FUN_1003658a8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003658a8(Iterator param_1)

{
  long lVar1;
  __CocoaSet _Var2;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  Iterator *_cocoa;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong *puVar11;
  long lVar12;
  undefined *local_98;
  long local_90;
  undefined *local_88;
  ulong *puStack_80;
  ulong local_78;
  long lStack_70;
  ulong local_68;
  
  if (((ulong)param_1.unknown & 0xc000000000000001) == 0) {
    lVar12 = 0;
    uVar7 = -1L << ((ulong)(byte)param_1.unknown[0x20] & 0x3f);
    puVar11 = (ulong *)(param_1.unknown + 0x38);
    uVar8 = ~uVar7;
    uVar7 = -uVar7;
    uVar9 = 0xffffffffffffffff;
    if (uVar7 < 0x40) {
      uVar9 = ~(-1L << (uVar7 & 0x3f));
    }
    uVar9 = uVar9 & *puVar11;
    puVar10 = param_1.unknown;
  }
  else {
    _Var2.unknown = param_1.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < param_1.unknown) {
      _Var2.unknown = param_1.unknown;
    }
    _cocoa = Swift::__CocoaSet::makeIterator(_Var2);
    FUN_10000ec2c(0,&DAT_100fbe420,&PTR__OBJC_CLASS___NSManagedObjectID_100f8d7a8);
    FUN_10036c8f4(&DAT_100fc04c0,&DAT_100fbe420,&PTR__OBJC_CLASS___NSManagedObjectID_100f8d7a8);
    param_1 = Swift::Set::Iterator::_init(_cocoa);
    uVar8 = local_78;
    uVar9 = local_68;
    puVar10 = local_88;
    puVar11 = puStack_80;
    lVar12 = lStack_70;
  }
  do {
    uVar7 = uVar9;
    lVar4 = lVar12;
    if ((long)puVar10 < 0) {
      Swift::__CocoaSet::Iterator::_next((Iterator *)((ulong)puVar10 & 0x7fffffffffffffff));
      if (param_1.unknown == (undefined *)0x0) {
LAB_100365a80:
        local_90 = 0;
LAB_100365a84:
        FUN_10000c650(puVar10,puVar11,uVar8,lVar12,uVar9);
        return;
      }
      uVar6 = 0;
      local_98 = param_1.unknown;
      FUN_10000ec2c(0,&DAT_100fbe420,&PTR__OBJC_CLASS___NSManagedObjectID_100f8d7a8);
      _swift_dynamicCast(&local_90,&local_98,PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8,
                         uVar6,7);
      if (local_90 == 0) goto LAB_100365a84;
    }
    else {
      while (uVar7 == 0) {
        lVar1 = lVar4 + 1;
        if (SCARRY8(lVar4,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100365ac0);
          (*pcVar5)();
        }
        if ((long)(uVar8 + 0x40 >> 6) <= lVar1) {
          uVar9 = 0;
          goto LAB_100365a80;
        }
        lVar4 = lVar1;
        uVar7 = puVar11[lVar1];
      }
      uVar3 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      local_90 = *(long *)(*(long *)(puVar10 + 0x30) + LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) * 8 +
                          lVar4 * 0x200);
      if (local_90 == 0) goto LAB_100365a84;
      uVar9 = uVar7 - 1 & uVar7;
      lVar12 = lVar4;
    }
    FUN_100369f88(&local_98,local_90,&DAT_100fbe420,&PTR__OBJC_CLASS___NSManagedObjectID_100f8d7a8,
                  &DAT_100fbe418,&DAT_100c40440);
    param_1.unknown = (undefined *)0x0;
  } while( true );
}



/* Address: 0x100365ac0 | FUN_100365ac0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100365ac0(Iterator param_1)

{
  long lVar1;
  __CocoaSet _Var2;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  Iterator *_cocoa;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong *puVar11;
  long lVar12;
  undefined *local_98;
  long local_90;
  undefined *local_88;
  ulong *puStack_80;
  ulong local_78;
  long lStack_70;
  ulong local_68;
  
  if (((ulong)param_1.unknown & 0xc000000000000001) == 0) {
    lVar12 = 0;
    uVar7 = -1L << ((ulong)(byte)param_1.unknown[0x20] & 0x3f);
    puVar11 = (ulong *)(param_1.unknown + 0x38);
    uVar8 = ~uVar7;
    uVar7 = -uVar7;
    uVar9 = 0xffffffffffffffff;
    if (uVar7 < 0x40) {
      uVar9 = ~(-1L << (uVar7 & 0x3f));
    }
    uVar9 = uVar9 & *puVar11;
    puVar10 = param_1.unknown;
  }
  else {
    _Var2.unknown = param_1.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < param_1.unknown) {
      _Var2.unknown = param_1.unknown;
    }
    _cocoa = Swift::__CocoaSet::makeIterator(_Var2);
    FUN_10000ec2c(0,&DAT_100fc0660,&PTR__OBJC_CLASS___NSManagedObject_100f8db08);
    FUN_10036c8f4(&DAT_100fbe5d0,&DAT_100fc0660,&PTR__OBJC_CLASS___NSManagedObject_100f8db08);
    param_1 = Swift::Set::Iterator::_init(_cocoa);
    uVar8 = local_78;
    uVar9 = local_68;
    puVar10 = local_88;
    puVar11 = puStack_80;
    lVar12 = lStack_70;
  }
  do {
    uVar7 = uVar9;
    lVar4 = lVar12;
    if ((long)puVar10 < 0) {
      Swift::__CocoaSet::Iterator::_next((Iterator *)((ulong)puVar10 & 0x7fffffffffffffff));
      if (param_1.unknown == (undefined *)0x0) {
LAB_100365c98:
        local_90 = 0;
LAB_100365c9c:
        FUN_10000c650(puVar10,puVar11,uVar8,lVar12,uVar9);
        return;
      }
      uVar6 = 0;
      local_98 = param_1.unknown;
      FUN_10000ec2c(0,&DAT_100fc0660,&PTR__OBJC_CLASS___NSManagedObject_100f8db08);
      _swift_dynamicCast(&local_90,&local_98,PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8,
                         uVar6,7);
      if (local_90 == 0) goto LAB_100365c9c;
    }
    else {
      while (uVar7 == 0) {
        lVar1 = lVar4 + 1;
        if (SCARRY8(lVar4,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100365cd8);
          (*pcVar5)();
        }
        if ((long)(uVar8 + 0x40 >> 6) <= lVar1) {
          uVar9 = 0;
          goto LAB_100365c98;
        }
        lVar4 = lVar1;
        uVar7 = puVar11[lVar1];
      }
      uVar3 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      local_90 = *(long *)(*(long *)(puVar10 + 0x30) + LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) * 8 +
                          lVar4 * 0x200);
      if (local_90 == 0) goto LAB_100365c9c;
      uVar9 = uVar7 - 1 & uVar7;
      lVar12 = lVar4;
    }
    FUN_100369f88(&local_98,local_90,&DAT_100fc0660,&PTR__OBJC_CLASS___NSManagedObject_100f8db08,
                  &DAT_100fbe430,&DAT_100c43050);
    param_1.unknown = (undefined *)0x0;
  } while( true );
}



/* Address: 0x100365cd8 | FUN_100365cd8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100365cd8(void)

{
  ID IVar1;
  undefined8 uVar2;
  undefined *self;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_68 [24];
  undefined8 local_50;
  long lStack_48;
  
  IVar1 = *(ID *)(unaff_x20 + 0x28);
  if (IVar1 == 0) {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
    FUN_1000da768(auStack_68);
    FUN_100004640(auStack_68,local_50);
    uVar2 = local_50;
    (**(code **)(lStack_48 + 0x10))(local_50,lStack_48);
    self = &_OBJC_CLASS___NSFetchedResultsController;
    _objc_allocWithZone();
    IVar1 = objc_stub::FUN_100c04180((ID)self,uVar3,uVar2,0,0);
    FUN_100004594(auStack_68);
    *(ID *)(unaff_x20 + 0x28) = IVar1;
  }
  return IVar1;
}



/* Address: 0x100365db4 | FUN_100365db4 */

void FUN_100365db4(undefined8 param_1)

{
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == *(long *)PTR____stack_chk_guard_100ea82f0) {
    FUN_100365e18(param_1,FUN_1003214a8,&DAT_100ecce70,FUN_10036c880,FUN_10036c8a8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100365e18 | FUN_100365e18 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100365e18(undefined8 param_1,undefined *param_2,long param_3,void *param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  _CocoaArrayWrapper _Var2;
  undefined8 uVar3;
  code *pcVar4;
  undefined *puVar5;
  __int64 _Var6;
  CurrentValueSubject *pCVar7;
  StaticString *self;
  ID IVar8;
  class_t *pcVar9;
  class_t *pcVar10;
  undefined *puVar11;
  undefined *puVar12;
  ID self_00;
  StaticString SVar13;
  undefined *extraout_x1;
  _StringGuts _Var14;
  StaticString *pSVar15;
  void *pvVar16;
  long lVar17;
  long unaff_x20;
  undefined8 uVar18;
  ulong uVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  objc_super local_d8;
  objc_super local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a0 [16];
  StaticString local_90;
  undefined *puStack_88;
  undefined8 local_78;
  long lStack_70;
  long local_68;
  
  puVar11 = PTR___swiftEmptyArrayStorage_100eae0d8;
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  uVar19 = (ulong)puVar11 >> 0x3e;
  puVar12 = PTR___swiftEmptySetSingleton_100eae0e8;
  pvVar16 = param_4;
  if ((uVar19 != 0) &&
     (_Var6 = Swift::_CocoaArrayWrapper::get_endIndex
                        ((_CocoaArrayWrapper)PTR___swiftEmptyArrayStorage_100eae0d8),
     puVar12 = PTR___swiftEmptySetSingleton_100eae0e8, _Var6 != 0)) {
    puVar12 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1002fcf38();
  }
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined **)(unaff_x20 + 0x40) = puVar12;
  puVar12 = &DAT_100c42ff0;
  _swift_getKeyPath();
  puVar5 = &DAT_100fbdba8;
  FUN_1000037f0(&DAT_100fbdba8,&DAT_100c435d0);
  _swift_allocObject();
  FUN_1000da6e0(puVar12,puVar5);
  *(undefined **)(unaff_x20 + 0x58) = puVar12;
  puVar12 = &DAT_100c43020;
  _swift_getKeyPath();
  puVar5 = &DAT_100fc1300;
  FUN_1000037f0(&DAT_100fc1300,&DAT_100c43048);
  _swift_allocObject();
  FUN_1000da6e0(puVar12,puVar5);
  *(undefined **)(unaff_x20 + 0x60) = puVar12;
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined **)(unaff_x20 + 0x10) = puVar11;
  puStack_88 = PTR___swiftEmptySetSingleton_100eae0e8;
  if ((uVar19 != 0) &&
     (_Var6 = Swift::_CocoaArrayWrapper::get_endIndex
                        ((_CocoaArrayWrapper)PTR___swiftEmptyArrayStorage_100eae0d8),
     puStack_88 = PTR___swiftEmptySetSingleton_100eae0e8, _Var6 != 0)) {
    puVar12 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1002fcf38();
    puStack_88 = puVar12;
  }
  local_90.unknown = puVar11;
  pCVar7 = (CurrentValueSubject *)&DAT_100fc0650;
  FUN_1000037f0(&DAT_100fc0650,&DAT_100c424f0);
  _swift_allocObject();
  self = &local_90;
  Combine::CurrentValueSubject::_init(pCVar7);
  *(StaticString **)(unaff_x20 + 0x18) = self;
  FUN_100365cd8();
  local_90.unknown = (undefined *)0x0;
  pSVar15 = &local_90;
  IVar8 = objc_stub::FUN_100c07c00((ID)self);
  if ((int)IVar8 == 0) {
    SVar13.unknown = local_90.unknown;
    _Var14.unknown = extraout_x1;
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    local_90.unknown = (undefined *)0x0;
    puStack_88 = (undefined *)0xe000000000000000;
    _swift_errorRetain(SVar13.unknown);
    Swift::_StringGuts::grow(0x1a,_Var14);
    SVar20.bridgeObject = (void *)0x8000000100da31a0;
    SVar20.str = (char *)0xd000000000000018;
    SVar22.bridgeObject = pvVar16;
    SVar22.str = (char *)pSVar15;
    Swift::String::append(SVar20,SVar22);
    _swift_getErrorValue(SVar13.unknown,auStack_a0,&local_b8);
    Swift::DefaultStringInterpolation::_appendInterpolation(local_b8,uStack_b0);
    SVar21.bridgeObject = (void *)0x2;
    SVar21.str = (char *)0xb;
    Swift::_assertionFailure
              ((StaticString)0x100d8deb0,SVar21,local_90,(__uint64)puStack_88,0xda3190);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100366344);
    (*pcVar4)();
  }
  FUN_100366344();
  lVar17 = param_3;
  _swift_allocObject(param_3,0x18,7);
  _swift_weakInit(lVar17 + 0x10);
  pcVar9 = (class_t *)0x0;
  FUN_1003550dc();
  pcVar10 = pcVar9;
  _objc_allocWithZone();
  *(undefined **)((long)&pcVar10->isa + _TtC9PasteCore32DifferenceFetchedResultsDelegate::ids) =
       param_2;
  puVar1 = (undefined8 *)
           ((long)&pcVar10->isa + _TtC9PasteCore32DifferenceFetchedResultsDelegate::handler);
  *puVar1 = param_4;
  puVar1[1] = lVar17;
  local_c8.receiver = (ID)pcVar10;
  local_c8.super_class = pcVar9;
  _swift_bridgeObjectRetain(param_2);
  _swift_retain();
  IVar8 = _objc_msgSendSuper2(&local_c8,"init");
  *(ID *)(unaff_x20 + 0x30) = IVar8;
  objc_stub::setDelegate_(*(ID *)(unaff_x20 + 0x28),IVar8);
  if ((ulong)param_2 >> 0x3e == 0) {
    lVar17 = *(long *)(((ulong)param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var2.unknown = (undefined *)((ulong)param_2 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_2) {
      _Var2.unknown = param_2;
    }
    lVar17 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  if (lVar17 == 0) {
    _swift_bridgeObjectRelease(param_2);
  }
  else {
    puVar11 = PTR___swiftEmptySetSingleton_100eae0e8;
    if ((uVar19 != 0) &&
       (_Var6 = Swift::_CocoaArrayWrapper::get_endIndex
                          ((_CocoaArrayWrapper)PTR___swiftEmptyArrayStorage_100eae0d8),
       puVar11 = PTR___swiftEmptySetSingleton_100eae0e8, _Var6 != 0)) {
      puVar11 = PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_1002fcf38();
    }
    uVar18 = *(undefined8 *)(unaff_x20 + 0x48);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x50);
    *(undefined **)(unaff_x20 + 0x48) = param_2;
    *(undefined **)(unaff_x20 + 0x50) = puVar11;
    FUN_1001b9e60(uVar18,uVar3);
  }
  FUN_100366b38();
  uVar18 = *(undefined8 *)(unaff_x20 + 0x58);
  _swift_retain(uVar18);
  FUN_1000da768(&local_90);
  _swift_release(uVar18);
  FUN_100004640(&local_90,local_78);
  uVar18 = local_78;
  (**(code **)(lStack_70 + 0x10))(local_78,lStack_70);
  _swift_allocObject(param_3,0x18,7);
  _swift_weakInit(param_3 + 0x10);
  _swift_release();
  pcVar9 = (class_t *)0x0;
  FUN_10035557c();
  pcVar10 = pcVar9;
  _objc_allocWithZone();
  puVar1 = (undefined8 *)
           ((long)&pcVar10->isa +
           _TtC9PasteCoreP33_9486B9FF9DE242091A03430635F3A7DA31ContextObjectsDidChangeObserver::
           handler);
  *puVar1 = param_5;
  puVar1[1] = param_3;
  local_d8.receiver = (ID)pcVar10;
  local_d8.super_class = pcVar9;
  _swift_retain_n(param_3,2);
  IVar8 = _objc_msgSendSuper2(&local_d8,"init");
  self_00 = objc_stub::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  objc_stub::addObserver_selector_name_object_
            (self_00,IVar8,"contextObjectsDidChange:",
             *(undefined8 *)PTR__NSManagedObjectContextObjectsDidChangeNotification_100ea99f0,uVar18
            );
  _swift_release_n(param_3,2);
  FUN_100004594(&local_90);
  *(ID *)(unaff_x20 + 0x38) = IVar8;
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100366344 | FUN_100366344 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_100366344(code *param_1)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  bool bVar3;
  ID IVar4;
  _ArrayBuffer _Var5;
  ContiguousArray CVar6;
  ulong uVar7;
  _ArrayBuffer _Var8;
  long lVar9;
  undefined *puVar10;
  NSObject *pNVar11;
  NSObject *pNVar12;
  undefined *extraout_x1;
  undefined *extraout_x1_00;
  undefined *extraout_x1_01;
  undefined *extraout_x1_02;
  long unaff_x20;
  ulong uVar13;
  ulong uVar14;
  undefined *puVar15;
  ContiguousArray CVar16;
  __int64 _Var17;
  undefined *local_88 [3];
  ID local_70;
  long lStack_68;
  
  FUN_1000da768(local_88);
  FUN_100004640(local_88,local_70);
  (**(code **)(lStack_68 + 0x10))(local_70,lStack_68);
  IVar4 = objc_stub::hasChanges(local_70);
  _Var5.unknown = (undefined *)local_88;
  FUN_100004594();
  if ((int)IVar4 == 0) {
    FUN_100367014();
    if ((ulong)_Var5.unknown >> 0x3e == 0) {
      _Var8.unknown = _Var5.unknown;
      puVar15 = *(undefined **)(((ulong)_Var5.unknown & 0xffffffffffffff8) + 0x10);
    }
    else {
      _Var1.unknown = _Var5.unknown & 0xffffffffffffff8;
      if (((ulong)_Var5.unknown & 0x8000000000000000) != 0) {
        _Var1.unknown = _Var5.unknown;
      }
      _Var8.unknown = (undefined *)Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
      puVar15 = _Var8.unknown;
    }
    FUN_100365cd8();
    _Var8.unknown = (undefined *)objc_stub::FUN_100c09d40(_Var8.unknown);
    if (_Var8.unknown == (undefined *)0x0) {
LAB_1003667cc:
      _swift_bridgeObjectRelease(_Var5.unknown);
    }
    else {
      FUN_1000037f0(&DAT_100fc06a0,&DAT_100c42520);
      (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
      if ((ulong)_Var8.unknown >> 0x3e == 0) {
        lVar9 = *(long *)(((ulong)_Var8.unknown & 0xffffffffffffff8) + 0x10);
      }
      else {
        _Var1.unknown = _Var8.unknown & 0xffffffffffffff8;
        if ((undefined *)0x7fffffffffffffff < _Var8.unknown) {
          _Var1.unknown = _Var8.unknown;
        }
        lVar9 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
      }
      if (lVar9 == 0) {
        _swift_bridgeObjectRelease(_Var8.unknown);
        goto LAB_1003667cc;
      }
      if (((ulong)_Var8.unknown & 0xc000000000000001) == 0) {
        if (*(long *)(((ulong)_Var8.unknown & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100366960);
          (*pcVar2)();
        }
        IVar4 = *(ID *)(_Var8.unknown + 0x20);
        _swift_unknownObjectRetain(IVar4);
      }
      else {
        IVar4 = 0;
        Swift::_ArrayBuffer::__getElementSlowPath(0,_Var8);
      }
      _swift_bridgeObjectRelease(_Var8.unknown);
      puVar10 = (undefined *)objc_stub::FUN_100c072a0(IVar4);
      _swift_unknownObjectRelease(IVar4);
      if (puVar15 != puVar10) goto LAB_1003667cc;
      if ((ulong)_Var5.unknown >> 0x3e == 0) {
        _Var17 = *(__int64 *)((_Var5.unknown & 0xffffffffffffff8U) + 0x10);
        if (_Var17 == 0) goto LAB_100366678;
LAB_1003665ac:
        if (((ulong)_Var5.unknown & 0xc000000000000001) == 0) {
          if (*(long *)(((ulong)_Var5.unknown & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100366970);
            (*pcVar2)();
          }
          pNVar11 = *(NSObject **)(_Var5.unknown + 0x20);
        }
        else {
          pNVar11 = (NSObject *)0x0;
          Swift::_ArrayBuffer::__getElementSlowPath(0,_Var5);
        }
        pNVar12 = (NSObject *)0x0;
        FUN_100367184();
        if (pNVar11 != (NSObject *)0x0) {
          if (pNVar12 != (NSObject *)0x0) {
            FUN_10000ec2c(0,&DAT_100fbe420,&PTR__OBJC_CLASS___NSManagedObjectID_100f8d7a8);
            bVar3 = (extension_ObjectiveC)::__C::NSObject::___infix(pNVar11,pNVar12);
            if (bVar3) goto LAB_1003666ac;
          }
          goto LAB_1003667cc;
        }
        if (pNVar12 != (NSObject *)0x0) goto LAB_100366698;
LAB_1003666ac:
        pNVar11 = (NSObject *)(_Var17 - 1);
        if (SBORROW8(_Var17,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100366978);
          (*pcVar2)();
        }
        if (((ulong)_Var5.unknown & 0xc000000000000001) == 0) {
          if ((long)pNVar11 < 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100366984);
            (*pcVar2)();
          }
          if (*(NSObject **)(((ulong)_Var5.unknown & 0xffffffffffffff8) + 0x10) <= pNVar11) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100366988);
            (*pcVar2)();
          }
          pNVar11 = *(NSObject **)(_Var5.unknown + (long)pNVar11 * 8 + 0x20);
        }
        else {
          Swift::_ArrayBuffer::__getElementSlowPath((__int64)pNVar11,_Var5);
        }
LAB_1003666e0:
        pNVar12 = (NSObject *)(puVar15 + -1);
        if (SBORROW8((long)puVar15,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100366974);
          (*pcVar2)();
        }
        FUN_100367184();
        if (pNVar11 == (NSObject *)0x0) {
          if (pNVar12 == (NSObject *)0x0) {
            return _Var5.unknown;
          }
          _swift_bridgeObjectRelease(_Var5.unknown);
        }
        else {
          if (pNVar12 != (NSObject *)0x0) {
            FUN_10000ec2c(0,&DAT_100fbe420,&PTR__OBJC_CLASS___NSManagedObjectID_100f8d7a8);
            bVar3 = (extension_ObjectiveC)::__C::NSObject::___infix(pNVar11,pNVar12);
            if (bVar3) {
              return _Var5.unknown;
            }
            goto LAB_1003667cc;
          }
          _swift_bridgeObjectRelease(_Var5.unknown);
        }
      }
      else {
        _Var1.unknown = _Var5.unknown & 0xffffffffffffff8U;
        if (((ulong)_Var5.unknown & 0x8000000000000000) != 0) {
          _Var1.unknown = _Var5.unknown;
        }
        _Var17 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
        if (_Var17 != 0) goto LAB_1003665ac;
LAB_100366678:
        lVar9 = 0;
        FUN_100367184();
        if (lVar9 == 0) {
          pNVar11 = (NSObject *)0x0;
          goto LAB_1003666e0;
        }
LAB_100366698:
        _swift_bridgeObjectRelease(_Var5.unknown);
      }
    }
    _Var5.unknown = (undefined *)objc_stub::FUN_100c023c0(*(ID *)(unaff_x20 + 0x28));
    puVar15 = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (_Var5.unknown == (undefined *)0x0) {
      CVar6.unknown = extraout_x1_01;
      _Var5.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
      if ((ulong)PTR___swiftEmptyArrayStorage_100eae0d8 >> 0x3e == 0) goto LAB_10036681c;
LAB_1003668f4:
      _Var1.unknown = _Var5.unknown & 0xffffffffffffff8;
      if ((undefined *)0x7fffffffffffffff < _Var5.unknown) {
        _Var1.unknown = _Var5.unknown;
      }
      uVar13 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    }
    else {
      CVar6.unknown = (undefined *)0x0;
      (*param_1)();
      (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
      if ((ulong)_Var5.unknown >> 0x3e != 0) goto LAB_1003668f4;
LAB_10036681c:
      uVar13 = *(ulong *)(((ulong)_Var5.unknown & 0xffffffffffffff8) + 0x10);
    }
    if (uVar13 != 0) {
      local_88[0] = puVar15;
      Swift::ContiguousArray::_reserveCapacity(uVar13,CVar6);
      if ((long)uVar13 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100366948);
        (*pcVar2)();
      }
      uVar14 = 0;
      do {
        if (((ulong)_Var5.unknown & 0xc000000000000001) == 0) {
          if ((long)uVar14 < 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100366940);
            (*pcVar2)();
          }
          if (*(ulong *)(((ulong)_Var5.unknown & 0xffffffffffffff8) + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100366944);
            (*pcVar2)();
          }
          uVar7 = *(ulong *)(_Var5.unknown + uVar14 * 8 + 0x20);
        }
        else {
          uVar7 = uVar14;
          Swift::_ArrayBuffer::__getElementSlowPath(uVar14,_Var5);
        }
        uVar14 = uVar14 + 1;
        IVar4 = objc_stub::objectID(uVar7);
        CVar6.unknown = extraout_x1_02;
        Swift::ContiguousArray::__makeUniqueAndReserveCapacityIfNotUnique((ContiguousArray)0x0);
                    /* WARNING: Load size is inaccurate */
        CVar16.unknown = local_88[0][0x10];
        Swift::ContiguousArray::__reserveCapacityAssumingUniqueBuffer((__int64)CVar16.unknown,CVar6)
        ;
        Swift::ContiguousArray::__appendElementAssumeUniqueAndCapacity(CVar16.unknown,IVar4);
        Swift::ContiguousArray::__endMutation(CVar16);
      } while (uVar13 != uVar14);
      goto LAB_1003668d8;
    }
    goto LAB_10036690c;
  }
  FUN_100365cd8();
  _Var5.unknown = (undefined *)objc_stub::FUN_100c023c0(_Var5.unknown);
  puVar15 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (_Var5.unknown == (undefined *)0x0) {
    CVar6.unknown = extraout_x1;
    _Var5.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    if ((ulong)PTR___swiftEmptyArrayStorage_100eae0d8 >> 0x3e == 0) goto LAB_100366414;
LAB_100366644:
    _Var1.unknown = _Var5.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var5.unknown) {
      _Var1.unknown = _Var5.unknown;
    }
    uVar13 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  else {
    CVar6.unknown = (undefined *)0x0;
    (*param_1)();
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
    if ((ulong)_Var5.unknown >> 0x3e != 0) goto LAB_100366644;
LAB_100366414:
    uVar13 = *(ulong *)(((ulong)_Var5.unknown & 0xffffffffffffff8) + 0x10);
  }
  if (uVar13 != 0) {
    local_88[0] = puVar15;
    Swift::ContiguousArray::_reserveCapacity(uVar13,CVar6);
    if ((long)uVar13 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1003667b0);
      (*pcVar2)();
    }
    uVar14 = 0;
    do {
      if (((ulong)_Var5.unknown & 0xc000000000000001) == 0) {
        if ((long)uVar14 < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100366790);
          (*pcVar2)();
        }
        if (*(ulong *)(((ulong)_Var5.unknown & 0xffffffffffffff8) + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100366794);
          (*pcVar2)();
        }
        uVar7 = *(ulong *)(_Var5.unknown + uVar14 * 8 + 0x20);
      }
      else {
        uVar7 = uVar14;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar14,_Var5);
      }
      uVar14 = uVar14 + 1;
      IVar4 = objc_stub::objectID(uVar7);
      CVar6.unknown = extraout_x1_00;
      Swift::ContiguousArray::__makeUniqueAndReserveCapacityIfNotUnique((ContiguousArray)0x0);
                    /* WARNING: Load size is inaccurate */
      CVar16.unknown = local_88[0][0x10];
      Swift::ContiguousArray::__reserveCapacityAssumingUniqueBuffer((__int64)CVar16.unknown,CVar6);
      Swift::ContiguousArray::__appendElementAssumeUniqueAndCapacity(CVar16.unknown,IVar4);
      Swift::ContiguousArray::__endMutation(CVar16);
    } while (uVar13 != uVar14);
LAB_1003668d8:
    _swift_bridgeObjectRelease(_Var5.unknown);
    return local_88[0];
  }
LAB_10036690c:
  _swift_bridgeObjectRelease(_Var5.unknown);
  return PTR___swiftEmptyArrayStorage_100eae0d8;
}



/* Address: 0x100366988 | FUN_100366988 */

void FUN_100366988(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  param_3 = param_3 + 0x10;
  _swift_weakLoadStrong();
  if (param_3 != 0) {
    FUN_1003669fc(param_1,param_2,param_4,param_5);
    _swift_release(param_3);
    return;
  }
  return;
}



/* Address: 0x1003669fc | FUN_1003669fc */

void FUN_1003669fc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long unaff_x20;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_78 [3];
  undefined8 local_60;
  long lStack_58;
  
  lVar3 = *(long *)(unaff_x20 + 0x48);
  if (lVar3 == 0) {
    _swift_bridgeObjectRetain(param_1);
    _swift_bridgeObjectRetain(param_2);
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x20 + 0x50);
    local_78[0] = uVar4;
    FUN_10036c934(lVar3,uVar4);
    _swift_bridgeObjectRetain(param_1);
    _swift_bridgeObjectRetain(uVar4);
    _swift_bridgeObjectRetain(param_2);
    FUN_1003658a8();
    _swift_bridgeObjectRelease(uVar4);
    _swift_bridgeObjectRelease(lVar3);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x48);
    param_2 = local_78[0];
  }
  uVar1 = *(undefined8 *)(unaff_x20 + 0x50);
  *(undefined8 *)(unaff_x20 + 0x48) = param_1;
  *(undefined8 *)(unaff_x20 + 0x50) = param_2;
  FUN_1001b9e60(uVar4,uVar1);
  if (lVar3 == 0) {
    FUN_1000da768(local_78);
    FUN_100004640(local_78,local_60);
    _swift_allocObject(param_3,0x18,7);
    _swift_weakInit(param_3 + 0x10);
    pcVar2 = *(code **)(lStack_58 + 8);
    _swift_retain(param_3);
    (*pcVar2)(param_4,param_3,local_60,lStack_58);
    _swift_release_n(param_3,2);
    FUN_100004594(local_78);
  }
  return;
}



/* Address: 0x100366b38 | FUN_100366b38 */

void FUN_100366b38(void)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong local_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  uVar2 = *(ulong *)(unaff_x20 + 0x48);
  if (uVar2 != 0) {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x50);
    *(ulong *)(unaff_x20 + 0x48) = 0;
    *(undefined8 *)(unaff_x20 + 0x50) = 0;
    _swift_beginAccess(unaff_x20 + 0x10,auStack_58,1,0);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
    _swift_bridgeObjectRetain(uVar4);
    uVar1 = uVar2;
    FUN_1003699b8(uVar2,uVar4);
    _swift_bridgeObjectRelease(uVar4);
    if ((uVar1 & 1) == 0) {
      uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
      *(ulong *)(unaff_x20 + 0x10) = uVar2;
      _swift_bridgeObjectRetain_n(uVar2,2);
      _swift_bridgeObjectRelease(uVar4);
      uVar1 = uVar2;
      FUN_10036bf0c();
      _swift_bridgeObjectRelease(uVar2);
      uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
      *(ulong *)(unaff_x20 + 0x40) = uVar1;
      _swift_bridgeObjectRelease(uVar4);
    }
    local_68 = uVar2;
    uStack_60 = uVar3;
    Combine::CurrentValueSubject::send(*(CurrentValueSubject **)(unaff_x20 + 0x18),&local_68);
    _swift_bridgeObjectRelease(uVar3);
    _swift_bridgeObjectRelease(uVar2);
  }
  return;
}



/* Address: 0x100366c14 | FUN_100366c14 */

void FUN_100366c14(undefined8 param_1,long param_2,code *param_3)

{
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    (*param_3)(param_1);
    _swift_release(param_2);
    return;
  }
  return;
}



/* Address: 0x100366c6c | FUN_100366c6c */

void FUN_100366c6c(undefined8 param_1)

{
  __CocoaSet _Var1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long unaff_x20;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_90 [24];
  undefined8 local_78;
  code *pcStack_70;
  undefined8 local_68;
  code *pcStack_60;
  undefined8 local_58;
  code *pcStack_50;
  undefined *local_48;
  
  puVar4 = *(undefined8 **)(unaff_x20 + 0x48);
  if (puVar4 == (undefined8 *)0x0) {
    _swift_beginAccess(unaff_x20 + 0x10,auStack_90,0,0);
    puVar4 = *(undefined8 **)(unaff_x20 + 0x10);
    puVar6 = *(undefined8 **)(unaff_x20 + 0x48);
    _swift_bridgeObjectRetain(puVar4);
    if (puVar6 == (undefined8 *)0x0) {
      puVar5 = *(undefined8 **)(unaff_x20 + 0x40);
      _swift_bridgeObjectRetain(puVar5);
      goto LAB_100366ce0;
    }
  }
  else {
    _swift_bridgeObjectRetain(puVar4);
    puVar6 = puVar4;
  }
  puVar5 = puVar6;
  _swift_bridgeObjectRetain();
  FUN_10036bf0c();
  _swift_bridgeObjectRelease(puVar6);
LAB_100366ce0:
  puVar2 = &DAT_100ecd028;
  _swift_allocObject(&DAT_100ecd028,0x18,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar5;
  pcStack_70 = FUN_10036be08;
  local_68 = 0;
  pcStack_60 = FUN_100354680;
  local_58 = 0;
  pcStack_50 = thunk_FUN_10036c8ec;
  local_78 = param_1;
  local_48 = puVar2;
  _swift_bridgeObjectRetain(param_1);
  puVar6 = &local_78;
  FUN_100365478();
  if (((ulong)puVar6 & 0xc000000000000001) == 0) {
    lVar3 = puVar6[2];
  }
  else {
    _Var1.unknown = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
    if ((undefined8 *)0x7fffffffffffffff < puVar6) {
      _Var1.unknown = (undefined *)puVar6;
    }
    lVar3 = Swift::__CocoaSet::get_count(_Var1);
  }
  puVar5 = puVar4;
  if (lVar3 != 0) {
    FUN_1003669fc(puVar4,puVar6,&DAT_100ecd000,thunk_FUN_10036c960);
    puVar5 = puVar6;
    puVar6 = puVar4;
  }
  _swift_bridgeObjectRelease(puVar5);
  _swift_bridgeObjectRelease(puVar6);
  return;
}



/* Address: 0x100366db8 | FUN_100366db8 */

void FUN_100366db8(undefined8 param_1)

{
  __CocoaSet _Var1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long unaff_x20;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_90 [24];
  undefined8 local_78;
  code *pcStack_70;
  undefined8 local_68;
  code *pcStack_60;
  undefined8 local_58;
  code *pcStack_50;
  undefined *local_48;
  
  puVar4 = *(undefined8 **)(unaff_x20 + 0x48);
  if (puVar4 == (undefined8 *)0x0) {
    _swift_beginAccess(unaff_x20 + 0x10,auStack_90,0,0);
    puVar4 = *(undefined8 **)(unaff_x20 + 0x10);
    puVar6 = *(undefined8 **)(unaff_x20 + 0x48);
    _swift_bridgeObjectRetain(puVar4);
    if (puVar6 == (undefined8 *)0x0) {
      puVar5 = *(undefined8 **)(unaff_x20 + 0x40);
      _swift_bridgeObjectRetain(puVar5);
      goto LAB_100366e2c;
    }
  }
  else {
    _swift_bridgeObjectRetain(puVar4);
    puVar6 = puVar4;
  }
  puVar5 = puVar6;
  _swift_bridgeObjectRetain();
  FUN_10036bf0c();
  _swift_bridgeObjectRelease(puVar6);
LAB_100366e2c:
  puVar2 = &DAT_100ecce98;
  _swift_allocObject(&DAT_100ecce98,0x18,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar5;
  pcStack_70 = FUN_10036be40;
  local_68 = 0;
  pcStack_60 = FUN_100354680;
  local_58 = 0;
  pcStack_50 = FUN_10036c8ec;
  local_78 = param_1;
  local_48 = puVar2;
  _swift_bridgeObjectRetain(param_1);
  puVar6 = &local_78;
  FUN_100365478();
  if (((ulong)puVar6 & 0xc000000000000001) == 0) {
    lVar3 = puVar6[2];
  }
  else {
    _Var1.unknown = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
    if ((undefined8 *)0x7fffffffffffffff < puVar6) {
      _Var1.unknown = (undefined *)puVar6;
    }
    lVar3 = Swift::__CocoaSet::get_count(_Var1);
  }
  puVar5 = puVar4;
  if (lVar3 != 0) {
    FUN_1003669fc(puVar4,puVar6,&DAT_100ecce70,FUN_10036c960);
    puVar5 = puVar6;
    puVar6 = puVar4;
  }
  _swift_bridgeObjectRelease(puVar5);
  _swift_bridgeObjectRelease(puVar6);
  return;
}



/* Address: 0x100366f04 | FUN_100366f04 */

void FUN_100366f04(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong local_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    uVar3 = *(ulong *)(param_1 + 0x48);
    if (uVar3 == 0) {
      _swift_release(param_1);
      return;
    }
    uVar4 = *(undefined8 *)(param_1 + 0x50);
    *(ulong *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    _swift_beginAccess(param_1 + 0x10,auStack_58,1,0);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    _swift_bridgeObjectRetain(uVar2);
    uVar1 = uVar3;
    FUN_1003699b8(uVar3,uVar2);
    _swift_bridgeObjectRelease(uVar2);
    if ((uVar1 & 1) == 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      *(ulong *)(param_1 + 0x10) = uVar3;
      _swift_bridgeObjectRetain_n(uVar3,2);
      _swift_bridgeObjectRelease(uVar2);
      uVar1 = uVar3;
      FUN_10036bf0c();
      _swift_bridgeObjectRelease(uVar3);
      uVar2 = *(undefined8 *)(param_1 + 0x40);
      *(ulong *)(param_1 + 0x40) = uVar1;
      _swift_bridgeObjectRelease(uVar2);
    }
    local_68 = uVar3;
    uStack_60 = uVar4;
    Combine::CurrentValueSubject::send(*(CurrentValueSubject **)(param_1 + 0x18),&local_68);
    _swift_bridgeObjectRelease(uVar4);
    _swift_bridgeObjectRelease(uVar3);
    _swift_release(param_1);
  }
  return;
}



/* Address: 0x100367014 | FUN_100367014 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100367120) */

ID FUN_100367014(void)

{
  code *pcVar1;
  ID IVar2;
  undefined *self;
  ID self_00;
  long unaff_x20;
  ID self_01;
  undefined1 auStack_58 [24];
  undefined8 local_40;
  long lStack_38;
  
  self_01 = *(ID *)(unaff_x20 + 0x20);
  IVar2 = objc_stub::FUN_100c01c20(self_01);
  if (IVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100367184);
    (*pcVar1)();
  }
  self = &_OBJC_CLASS___NSFetchRequest;
  _objc_allocWithZone();
  self_00 = objc_stub::initWithEntityName_((ID)self,IVar2);
  IVar2 = objc_stub::FUN_100c07f60(self_01);
  objc_stub::setPredicate_(self_00,IVar2);
  IVar2 = objc_stub::FUN_100c0ef00(self_01);
  objc_stub::FUN_100c0dbc0(self_00,IVar2);
  objc_stub::FUN_100c0d760(self_00,1);
  FUN_1000da768(auStack_58);
  FUN_100004640(auStack_58,local_40);
  (**(code **)(lStack_38 + 0x10))(local_40,lStack_38);
  FUN_10000ec2c(0,&DAT_100fbe420,&PTR__OBJC_CLASS___NSManagedObjectID_100f8d7a8);
  (extension_CoreData)::__C::NSManagedObjectContext::_fetch();
  FUN_100004594(auStack_58);
  return self_00;
}



/* Address: 0x100367184 | FUN_100367184 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID FUN_100367184(__int64 param_1)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  IndexPath IVar3;
  undefined *self;
  _ArrayBuffer _Var4;
  long lVar5;
  ID IVar6;
  IndexPath IVar7;
  NSIndexPath *pNVar8;
  long extraout_x8;
  long unaff_x20;
  ID IVar9;
  long lVar10;
  
  IVar3 = Foundation::IndexPath::typeMetadataAccessor();
  lVar10 = *(long *)(IVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar10 + 0x40));
  if (-1 < param_1) {
    self = IVar3.unknown;
    FUN_100365cd8();
    _Var4.unknown = (undefined *)objc_stub::FUN_100c09d40(self);
    if (_Var4.unknown != (undefined *)0x0) {
      FUN_1000037f0(&DAT_100fc06a0,&DAT_100c42520);
      (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
      if ((ulong)_Var4.unknown >> 0x3e == 0) {
        lVar5 = *(long *)(((ulong)_Var4.unknown & 0xffffffffffffff8) + 0x10);
      }
      else {
        _Var1.unknown = _Var4.unknown & 0xffffffffffffff8;
        if ((undefined *)0x7fffffffffffffff < _Var4.unknown) {
          _Var1.unknown = _Var4.unknown;
        }
        lVar5 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
      }
      if (lVar5 == 0) {
        _swift_bridgeObjectRelease(_Var4.unknown);
      }
      else {
        if (((ulong)_Var4.unknown & 0xc000000000000001) == 0) {
          if (*(long *)(((ulong)_Var4.unknown & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10036735c);
            (*pcVar2)();
          }
          IVar9 = *(ID *)(_Var4.unknown + 0x20);
          _swift_unknownObjectRetain(IVar9);
        }
        else {
          IVar9 = 0;
          Swift::_ArrayBuffer::__getElementSlowPath(0,_Var4);
        }
        _swift_bridgeObjectRelease(_Var4.unknown);
        IVar6 = objc_stub::FUN_100c072a0(IVar9);
        _swift_unknownObjectRelease(IVar9);
        if (param_1 < (long)IVar6) {
          IVar9 = *(ID *)(unaff_x20 + 0x28);
          IVar7 = (extension_AppKit)::Foundation::IndexPath::init(param_1,0);
          pNVar8 = Foundation::IndexPath::_bridgeToObjectiveC(IVar7);
          (**(code **)(lVar10 + 8))
                    (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                     IVar3.unknown);
          IVar9 = objc_stub::FUN_100c07460(IVar9,pNVar8);
          IVar9 = objc_stub::objectID(IVar9);
          return IVar9;
        }
      }
    }
  }
  return 0;
}



/* Address: 0x10036735c | FUN_10036735c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10036735c(void *param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  UnownedSerialExecutor UVar4;
  long unaff_x22;
  long *plVar5;
  String isolation;
  
  *(undefined8 *)(unaff_x22 + 0xb8) = param_3;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_4;
  *(void **)(unaff_x22 + 0xa8) = param_1;
  *(ulong *)(unaff_x22 + 0xb0) = param_2;
  if (DAT_100fc09c8 != -1) {
    _swift_once(&DAT_100fc09c8,FUN_100357ea0);
  }
  FUN_1000da768(unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  lVar3 = *(long *)(unaff_x22 + 0xa0);
  FUN_100004640(unaff_x22 + 0x80,uVar2);
  (**(code **)(lVar3 + 0x18))(uVar2,lVar3);
  *(undefined8 *)(unaff_x22 + 200) = uVar2;
  FUN_100004594(unaff_x22 + 0x80);
  lVar3 = 0;
  FUN_100357efc();
  _swift_allocObject();
  *(long *)(unaff_x22 + 0xd0) = lVar3;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x18) = 0;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 0;
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(undefined8 *)(lVar3 + 0x38) = 0;
  *(undefined8 *)(lVar3 + 0x50) = 0;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  *(undefined8 *)(lVar3 + 0x60) = 0;
  *(undefined8 *)(lVar3 + 0x58) = 0;
  *(undefined8 *)(lVar3 + 0x70) = 0;
  *(undefined8 *)(lVar3 + 0x68) = 0;
  *(undefined8 *)(lVar3 + 0x80) = 0;
  *(undefined8 *)(lVar3 + 0x78) = 0;
  *(undefined8 *)(lVar3 + 0x90) = 0;
  *(undefined8 *)(lVar3 + 0x88) = 0;
  *(undefined8 *)(lVar3 + 0xa0) = 0;
  *(undefined8 *)(lVar3 + 0x98) = 0;
  *(undefined8 *)(lVar3 + 0xb0) = 0;
  *(undefined8 *)(lVar3 + 0xa8) = 0;
  *(undefined8 *)(lVar3 + 0x10) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x68) = param_3;
  *(undefined8 *)(unaff_x22 + 0x70) = param_4;
  *(long *)(unaff_x22 + 0x78) = lVar3;
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar1 & 1) != 0) {
    plVar5 = (long *)(ulong)*(uint *)(PTR__withCheckedThrowingContinuation_100eaefc8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xd8) = plVar5;
    FUN_1000037f0(&DAT_100fbe6c8,&DAT_100c43090);
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_100367564;
    isolation.bridgeObject = param_1;
    isolation.str = (char *)(unaff_x22 + 0xe8);
    Swift::_withCheckedThrowingContinuation(isolation);
    return;
  }
  if (param_1 == (void *)0x0) {
    UVar4.unknown = (undefined *)0x0;
    param_2 = 0;
  }
  else {
    _swift_getObjectType(param_1);
    param_2 = param_2 & 0xcfffffffffffffff;
    UVar4 = Swift::Actor::get_unownedExecutor();
  }
  _swift_task_switch(FUN_1003675e8,UVar4.unknown,param_2);
  return;
}



/* Address: 0x100367564 | FUN_100367564 */

void FUN_100367564(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0xd8));
  if (unaff_x20 == 0) {
    *(undefined1 *)(lVar4 + 0xea) = *(undefined1 *)(lVar4 + 0xe8);
    uVar1 = *(undefined8 *)(lVar4 + 0xa8);
    uVar3 = *(undefined8 *)(lVar4 + 0xb0);
    FUN_1000da368(uVar1,uVar3);
    pcVar2 = FUN_1003677b0;
  }
  else {
    *(long *)(lVar4 + 0xe0) = unaff_x20;
    uVar1 = *(undefined8 *)(lVar4 + 0xa8);
    uVar3 = *(undefined8 *)(lVar4 + 0xb0);
    FUN_1000da368(uVar1,uVar3);
    pcVar2 = FUN_1003677f0;
  }
  _swift_task_switch(pcVar2,uVar1,uVar3);
  return;
}



/* Address: 0x1003675e8 | FUN_1003675e8 */

void FUN_1003675e8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  UnsafeContinuation<undefined,undefined> continuation;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x22;
  String function;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 200);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xc0);
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0xe9;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_100367720;
  continuation.unknown = (undefined *)(unaff_x22 + 0x10);
  _swift_continuation_init(continuation.unknown,1);
  puVar5 = &DAT_100fc1320;
  FUN_1000037f0(&DAT_100fc1320,&DAT_100c430a8);
  lVar7 = *(long *)(puVar5 + -8);
  uVar6 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar6);
  FUN_1000037f0(&DAT_100fbe6c8,&DAT_100c43090);
  FUN_1000037f0(&DAT_100fc1bb0,&DAT_100c422e0);
  function.bridgeObject = (void *)0x8000000100da2d80;
  function.str = (char *)0xd000000000000013;
  Swift::CheckedContinuation::init(continuation,function);
  FUN_10036782c(uVar6,uVar1,uVar2,uVar4,uVar3);
  (**(code **)(lVar7 + 8))(uVar6,puVar5);
  _swift_task_dealloc(uVar6);
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x100367720 | FUN_100367720 */

void FUN_100367720(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  lVar5 = *(long *)(lVar4 + 0x30);
  if (lVar5 == 0) {
    *(undefined1 *)(lVar4 + 0xea) = *(undefined1 *)(lVar4 + 0xe9);
    uVar1 = *(undefined8 *)(lVar4 + 0xa8);
    uVar3 = *(undefined8 *)(lVar4 + 0xb0);
    FUN_1000da368(uVar1,uVar3);
    pcVar2 = FUN_1003677b0;
  }
  else {
    _swift_willThrow();
    *(long *)(lVar4 + 0xe0) = lVar5;
    uVar1 = *(undefined8 *)(lVar4 + 0xa8);
    uVar3 = *(undefined8 *)(lVar4 + 0xb0);
    FUN_1000da368(uVar1,uVar3);
    pcVar2 = FUN_1003677f0;
  }
  _swift_task_switch(pcVar2,uVar1,uVar3);
  return;
}



/* Address: 0x1003677b0 | FUN_1003677b0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003677b0(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0xd0));
                    /* WARNING: Could not recover jumptable at 0x0001003677ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined1 *)(unaff_x22 + 0xea));
  return;
}



/* Address: 0x1003677f0 | FUN_1003677f0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003677f0(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0xd0));
                    /* WARNING: Could not recover jumptable at 0x000100367828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10036782c | FUN_10036782c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10036782c(undefined8 param_1,ID param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  ID IVar2;
  void *pvVar3;
  undefined *puVar4;
  long extraout_x8;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *puStack_88;
  code *local_80;
  undefined *local_78;
  
  puVar1 = &DAT_100fc1320;
  local_b0 = param_1;
  local_a8 = param_3;
  FUN_1000037f0(&DAT_100fc1320,&DAT_100c430a8);
  lVar7 = *(long *)(puVar1 + -8);
  lVar6 = *(long *)(lVar7 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(lVar6 + 0xfU & 0xfffffffffffffff0);
  IVar2 = objc_stub::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  uVar8 = *(undefined8 *)PTR__NSManagedObjectContextDidSaveNotification_100ea99e8;
  local_80 = FUN_10035a134;
  local_78 = (undefined *)0x0;
  local_a0 = PTR___NSConcreteStackBlock_100ea82a0;
  local_98 = 0x42000000;
  local_90 = FUN_100059f04;
  puStack_88 = &DAT_100eccf78;
  pvVar3 = __Block_copy(&local_a0);
  _swift_release(local_78);
  IVar2 = objc_stub::addObserverForName_object_queue_usingBlock_(IVar2,uVar8,param_2,0,pvVar3);
  __Block_release(pvVar3);
  (**(code **)(lVar7 + 0x10))((long)&local_b0 - extraout_x8,local_b0,puVar1);
  uVar5 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar9 = uVar5 + 0x38 & (uVar5 ^ 0xffffffffffffffff);
  puVar4 = &DAT_100eccfb0;
  _swift_allocObject(&DAT_100eccfb0,uVar9 + lVar6,uVar5 | 7);
  *(undefined8 *)(puVar4 + 0x10) = local_a8;
  *(undefined8 *)(puVar4 + 0x18) = param_4;
  *(undefined8 *)(puVar4 + 0x20) = param_5;
  *(ID *)(puVar4 + 0x28) = param_2;
  *(ID *)(puVar4 + 0x30) = IVar2;
  (**(code **)(lVar7 + 0x20))(puVar4 + uVar9,(long)&local_b0 - extraout_x8,puVar1);
  local_80 = FUN_10036cb90;
  local_a0 = PTR___NSConcreteStackBlock_100ea82a0;
  local_98 = 0x42000000;
  local_90 = FUN_100030410;
  puStack_88 = &DAT_100eccfc8;
  local_78 = puVar4;
  pvVar3 = __Block_copy(&local_a0);
  puVar1 = local_78;
  _swift_retain(param_4);
  _swift_retain(param_5);
  _swift_unknownObjectRetain(IVar2);
  _swift_release(puVar1);
  objc_stub::performBlock_(param_2,pvVar3);
  __Block_release(pvVar3);
  _swift_unknownObjectRelease(IVar2);
  return;
}



/* Address: 0x100367a54 | FUN_100367a54 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100367a98) */
/* WARNING: Removing unreachable block (ram,0x000100367c44) */
/* WARNING: Removing unreachable block (ram,0x000100367adc) */

void FUN_100367a54(code *param_1,undefined8 param_2,undefined8 param_3,ID param_4,undefined8 param_5
                  )

{
  ID IVar1;
  undefined *puVar2;
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  ID local_70;
  
  (*param_1)(local_90,param_3);
  IVar1 = objc_stub::hasChanges(param_4);
  if ((int)IVar1 != 0) {
    local_70 = param_4;
    FUN_1002ff9c8(FUN_10030844c,local_80);
  }
  IVar1 = objc_stub::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  objc_stub::removeObserver_(IVar1,param_5);
  local_80[0] = local_90[0];
  puVar2 = &DAT_100fc1320;
  FUN_1000037f0(&DAT_100fc1320,&DAT_100c430a8);
  Swift::CheckedContinuation::resume(local_80,puVar2);
  return;
}



/* Address: 0x100367c5c | FUN_100367c5c */

char * FUN_100367c5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    long param_5)

{
  UUID UVar1;
  UUID UVar2;
  char *pcVar3;
  long extraout_x8;
  long lVar4;
  String SVar5;
  undefined1 auStack_70 [8];
  
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  lVar4 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar4 + 0x40));
  UVar2 = Foundation::UUID::init();
  SVar5 = Foundation::UUID::get_uuidString(UVar2);
  pcVar3 = SVar5.str;
  (**(code **)(lVar4 + 8))(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar1.unknown);
  (**(code **)(*(long *)(param_5 + 0x10) + 8))
            (pcVar3,SVar5.bridgeObject,param_1,param_2,param_3,param_4);
  _swift_bridgeObjectRelease(SVar5.bridgeObject);
  return pcVar3;
}



/* Address: 0x100367d48 | FUN_100367d48 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100367d48(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100367d74 | FUN_100367d74 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100367d74(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100367da8 | FUN_100367da8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100367da8(ID param_1)

{
  undefined *puVar1;
  NSPredicate *pNVar2;
  undefined *puVar3;
  long *unaff_x20;
  long lVar4;
  
  lVar4 = *unaff_x20;
  FUN_100329764();
  pNVar2 = (NSPredicate *)0x0;
  FUN_10000ec2c(0,&DAT_100fbeb38,&PTR__OBJC_CLASS___NSPredicate_100f8db30);
  puVar3 = &DAT_100fbeb40;
  FUN_1000037f0(&DAT_100fbeb40,&DAT_100c42e40);
  _swift_allocObject();
  *(undefined8 *)(puVar3 + 0x18) = 2;
  *(undefined8 *)(puVar3 + 0x10) = 1;
  puVar1 = PTR___protocol_witness_table_for_Swift_Int___Swift_CVarArg_in_Swift_100eac760;
  *(undefined **)(puVar3 + 0x38) = PTR___type_metadata_for_Swift_Int_100eac6f8;
  *(undefined **)(puVar3 + 0x40) = puVar1;
  *(undefined8 *)(puVar3 + 0x20) = 2;
  pNVar2 = (extension_Foundation)::__C::NSPredicate::___allocating_init(pNVar2);
  objc_stub::setPredicate_(param_1,pNVar2);
  FUN_10032a5b0(param_1,*(undefined8 *)(lVar4 + 0x20));
  return param_1;
}



/* Address: 0x100367e90 | FUN_100367e90 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100367e90(ID param_1)

{
  undefined *puVar1;
  NSPredicate *pNVar2;
  undefined *puVar3;
  long unaff_x20;
  
  FUN_100329764();
  pNVar2 = (NSPredicate *)0x0;
  FUN_10000ec2c(0,&DAT_100fbeb38,&PTR__OBJC_CLASS___NSPredicate_100f8db30);
  puVar3 = &DAT_100fbeb40;
  FUN_1000037f0(&DAT_100fbeb40,&DAT_100c42e40);
  _swift_allocObject();
  *(undefined8 *)(puVar3 + 0x18) = 2;
  *(undefined8 *)(puVar3 + 0x10) = 1;
  puVar1 = PTR___protocol_witness_table_for_Swift_Int___Swift_CVarArg_in_Swift_100eac760;
  *(undefined **)(puVar3 + 0x38) = PTR___type_metadata_for_Swift_Int_100eac6f8;
  *(undefined **)(puVar3 + 0x40) = puVar1;
  *(undefined8 *)(puVar3 + 0x20) = 2;
  pNVar2 = (extension_Foundation)::__C::NSPredicate::___allocating_init(pNVar2);
  objc_stub::setPredicate_(param_1,pNVar2);
  FUN_10032a5b0(param_1,*(undefined8 *)(unaff_x20 + 0x20));
  return param_1;
}



/* Address: 0x100367f78 | FUN_100367f78 */

void FUN_100367f78(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 local_48;
  
  FUN_100329764();
  puVar1 = &DAT_100fc1220;
  FUN_1000037f0(&DAT_100fc1220,&DAT_100c42ee8);
  _swift_allocObject();
  FUN_100365e18(param_1,FUN_10032b0c8,&DAT_100ecd000,FUN_10036cbec,FUN_10036cc14);
  local_48 = param_1;
  FUN_1000037f0(&DAT_100fc0d10,&DAT_100c42ef0);
  _swift_allocObject();
  puVar2 = &DAT_100fc1228;
  FUN_100016eac(&DAT_100fc1228,&DAT_100fc1220,&DAT_100c42ee8,
                &TargetProtocolConformanceDescriptor_100c424d0);
  FUN_1001ae768(&local_48,puVar1,puVar2);
  return;
}



/* Address: 0x10036805c | thunk_FUN_10036c094 */

void thunk_FUN_10036c094(void)

{
  FUN_10036c094();
  return;
}



/* Address: 0x100368060 | FUN_100368060 */

void FUN_100368060(void)

{
  FUN_100368080();
  return;
}



/* Address: 0x100368080 | FUN_100368080 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100368080(undefined *param_1,undefined8 param_2)

{
  _CocoaArrayWrapper _Var1;
  undefined *puVar2;
  code *pcVar3;
  _ArrayBuffer self;
  NSPredicate *pNVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x20;
  
  self.unknown = param_1;
  FUN_100329764();
  pNVar4 = (NSPredicate *)0x0;
  FUN_10000ec2c(0,&DAT_100fbeb38,&PTR__OBJC_CLASS___NSPredicate_100f8db30);
  puVar5 = &DAT_100fbeb40;
  FUN_1000037f0(&DAT_100fbeb40,&DAT_100c42e40);
  _swift_allocObject();
  *(undefined8 *)(puVar5 + 0x18) = 4;
  *(undefined8 *)(puVar5 + 0x10) = 2;
  puVar2 = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined **)(puVar5 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
  puVar6 = puVar5;
  FUN_10030d9e0();
  *(undefined8 *)(puVar5 + 0x20) = 0x696669746e656469;
  *(undefined8 *)(puVar5 + 0x28) = 0xea00000000007265;
  *(undefined **)(puVar5 + 0x60) = puVar2;
  *(undefined **)(puVar5 + 0x68) = puVar6;
  *(undefined **)(puVar5 + 0x40) = puVar6;
  *(undefined **)(puVar5 + 0x48) = param_1;
  *(undefined8 *)(puVar5 + 0x50) = param_2;
  _swift_bridgeObjectRetain(param_2);
  pNVar4 = (extension_Foundation)::__C::NSPredicate::___allocating_init(pNVar4);
  objc_stub::setPredicate_((ID)self.unknown,pNVar4);
  FUN_10032a5b0(self.unknown,*(undefined8 *)(unaff_x20 + 0x20));
  if ((ulong)self.unknown >> 0x3e == 0) {
    lVar8 = *(long *)(((ulong)self.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = self.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < self.unknown) {
      _Var1.unknown = self.unknown;
    }
    lVar8 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (lVar8 == 0) {
    _swift_bridgeObjectRelease();
    uVar7 = 0;
  }
  else {
    if (((ulong)self.unknown & 0xc000000000000001) == 0) {
      if (*(long *)(((ulong)self.unknown & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100368230);
        (*pcVar3)();
      }
      uVar7 = *(undefined8 *)(self.unknown + 0x20);
    }
    else {
      uVar7 = 0;
      Swift::_ArrayBuffer::__getElementSlowPath(0,self);
    }
    _swift_bridgeObjectRelease(self.unknown);
  }
  return uVar7;
}



/* Address: 0x100368230 | FUN_100368230 */

void FUN_100368230(void)

{
  FUN_100368250();
  return;
}



/* Address: 0x100368250 | FUN_100368250 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0001003684a4) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010036849c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ID FUN_100368250(void)

{
  LocalizedStringResource LVar1;
  ID IVar2;
  NSString *pNVar3;
  undefined *puVar4;
  NSArray *pNVar5;
  undefined8 uVar6;
  JSONEncoder *pJVar7;
  JSONEncoder *pJVar8;
  Data DVar9;
  NSData *pNVar10;
  long extraout_x8;
  long unaff_x20;
  ID IVar11;
  String SVar12;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined1 local_58;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  IVar2 = 0xd000000000000017;
  FUN_100368080(0xd000000000000017,0x8000000100da2350);
  if (IVar2 == 0) {
    FUN_1001c43ac(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    SVar12 = (extension_Foundation)::Swift::String::init
                       ((LocalizedStringResource)
                        (auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)));
    IVar11 = *(ID *)(unaff_x20 + 0x20);
    IVar2 = 0;
    FUN_10032b0c8();
    _objc_allocWithZone();
    IVar2 = objc_stub::initWithContext_(IVar2,IVar11);
    pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    objc_stub::setIdentifier_(IVar2,pNVar3);
    pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar12.bridgeObject);
    objc_stub::setName_(IVar2,pNVar3);
    puVar4 = &DAT_100fbe4e8;
    FUN_1000037f0(&DAT_100fbe4e8,&DAT_100c40a80);
    _swift_allocObject();
    *(undefined8 *)(puVar4 + 0x18) = 3;
    *(undefined8 *)(puVar4 + 0x10) = 1;
    *(ID *)(puVar4 + 0x20) = IVar2;
    FUN_10000ec2c(0,&DAT_100fc0660,&PTR__OBJC_CLASS___NSManagedObject_100f8db08);
    pNVar5 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
    _swift_release(puVar4);
    local_80 = 0;
    IVar11 = objc_stub::FUN_100c075e0(IVar11,pNVar5,&local_80);
    if ((int)IVar11 == 0) {
      uVar6 = local_80;
      Foundation::__convertNSErrorToError();
      _swift_willThrow(0);
      _swift_errorRelease(uVar6);
    }
    pJVar7 = Foundation::JSONEncoder::typeMetadataAccessor();
    _swift_allocObject(pJVar7,*(undefined4 *)(pJVar7 + 0x30),*(undefined2 *)(pJVar7 + 0x34));
    pJVar8 = Foundation::JSONEncoder::init(pJVar7);
    uStack_78 = 0xe900000000000064;
    local_80._0_1_ = 'c';
    local_80._1_1_ = 'l';
    local_80._2_1_ = 'i';
    local_80._3_1_ = 'p';
    local_80._4_1_ = 'b';
    local_80._5_1_ = 'o';
    local_80._6_1_ = 'a';
    local_80._7_1_ = 'r';
    local_70 = 0x1e;
    local_68 = 0;
    local_60 = 0;
    local_58 = 1;
    pJVar7 = pJVar8;
    FUN_10032b230();
    puVar4 = &DAT_100eca9e8;
    DVar9 = Foundation::JSONEncoder::_encode(pJVar8,pJVar7,&DAT_100eca9e8,pJVar7);
    _swift_release(pJVar8);
    pNVar10 = Foundation::Data::_bridgeToObjectiveC(DVar9);
    FUN_10003bf2c(DVar9.unknown,puVar4);
    objc_stub::setRawAttributes_(IVar2,pNVar10);
    objc_stub::setRawType_(IVar2,1);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_48) {
    return IVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100368540 | FUN_100368540 */

void FUN_100368540(void)

{
  FUN_100368560();
  return;
}



/* Address: 0x100368560 | FUN_100368560 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100368758) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100368750 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ID FUN_100368560(void)

{
  ID IVar1;
  NSString *pNVar2;
  undefined *puVar3;
  NSArray *pNVar4;
  JSONEncoder *pJVar5;
  JSONEncoder *pJVar6;
  Data DVar7;
  NSData *pNVar8;
  ulong in_x4;
  long unaff_x20;
  ID IVar9;
  undefined8 uVar10;
  undefined8 local_90;
  undefined1 *puStack_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined1 local_68;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  IVar9 = *(ID *)(unaff_x20 + 0x20);
  IVar1 = 0;
  FUN_10032b0c8();
  _objc_allocWithZone();
  IVar1 = objc_stub::initWithContext_(IVar1,IVar9);
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  objc_stub::setIdentifier_(IVar1,pNVar2);
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  objc_stub::setName_(IVar1,pNVar2);
  puVar3 = &DAT_100fbe4e8;
  FUN_1000037f0(&DAT_100fbe4e8,&DAT_100c40a80);
  _swift_allocObject();
  *(undefined8 *)(puVar3 + 0x18) = 3;
  *(undefined8 *)(puVar3 + 0x10) = 1;
  *(ID *)(puVar3 + 0x20) = IVar1;
  FUN_10000ec2c(0,&DAT_100fc0660,&PTR__OBJC_CLASS___NSManagedObject_100f8db08);
  pNVar4 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_release(puVar3);
  local_90 = 0;
  IVar9 = objc_stub::FUN_100c075e0(IVar9,pNVar4,&local_90);
  if ((int)IVar9 == 0) {
    uVar10 = local_90;
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    _swift_errorRelease(uVar10);
  }
  uVar10 = *(undefined8 *)(&DAT_100c430b0 + (in_x4 & 0xff) * 8);
  pJVar5 = Foundation::JSONEncoder::typeMetadataAccessor();
  _swift_allocObject(pJVar5,*(undefined4 *)(pJVar5 + 0x30),*(undefined2 *)(pJVar5 + 0x34));
  pJVar6 = Foundation::JSONEncoder::init(pJVar5);
  puStack_88 = &DAT_e800000000000000;
  local_90._0_1_ = 'p';
  local_90._1_1_ = 'i';
  local_90._2_1_ = 'n';
  local_90._3_1_ = 'b';
  local_90._4_1_ = 'o';
  local_90._5_1_ = 'a';
  local_90._6_1_ = 'r';
  local_90._7_1_ = 'd';
  local_80 = 0;
  local_78 = 1;
  local_68 = 0;
  pJVar5 = pJVar6;
  local_70 = uVar10;
  FUN_10032b230();
  puVar3 = &DAT_100eca9e8;
  DVar7 = Foundation::JSONEncoder::_encode(pJVar6,pJVar5,&DAT_100eca9e8,pJVar5);
  _swift_release(pJVar6);
  pNVar8 = Foundation::Data::_bridgeToObjectiveC(DVar7);
  FUN_10003bf2c(DVar7.unknown,puVar3);
  objc_stub::setRawAttributes_(IVar1,pNVar8);
  objc_stub::setRawType_(IVar1,2);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_58) {
    return IVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1003687f8 | FUN_1003687f8 */

void FUN_1003687f8(void)

{
  FUN_100368818();
  return;
}



/* Address: 0x100368818 | FUN_100368818 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001003688d4) */

undefined8 FUN_100368818(ID param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  ID IVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *local_90 [3];
  undefined *local_78;
  undefined8 *local_70;
  
  IVar4 = param_1;
  FUN_10032a1ec();
  if ((IVar4 & 1) == 0) {
    FUN_1000da768(local_90);
    FUN_1003acd8c(param_1);
    _swift_release(local_90[0]);
  }
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar1 = 0;
  FUN_100363c68();
  _swift_initStackObject();
  *(undefined8 *)(lVar1 + 0x10) = uVar5;
  local_90[0] = (undefined *)objc_stub::managedObjectContext(param_1);
  if (local_90[0] == (undefined *)0x0) {
    puVar2 = &DAT_100fbe920;
    FUN_1000037f0(&DAT_100fbe920,&DAT_100c408d0);
    puVar3 = &DAT_100fbfdb0;
    local_78 = puVar2;
    FUN_100016eac(&DAT_100fbfdb0,&DAT_100fbe920,&DAT_100c408d0,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548);
    local_90[0] = PTR___swiftEmptyArrayStorage_100eae0d8;
    local_70 = puVar3;
  }
  else {
    FUN_100329088();
    FUN_1003214a8(0);
    (extension_CoreData)::__C::NSManagedObjectContext::_fetch();
    puVar2 = &DAT_100fbe920;
    FUN_1000037f0(&DAT_100fbe920,&DAT_100c408d0);
    puVar3 = &DAT_100fbfdb0;
    local_78 = puVar2;
    FUN_100016eac(&DAT_100fbfdb0,&DAT_100fbe920,&DAT_100c408d0,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548);
    local_70 = puVar3;
  }
  FUN_100004640(local_90,puVar2);
  FUN_100363004();
  FUN_100004594(local_90);
  IVar4 = objc_stub::managedObjectContext(param_1);
  objc_stub::deleteObject_(IVar4,param_1);
  return 0;
}



/* Address: 0x100368a10 | FUN_100368a10 */

void FUN_100368a10(void)

{
  FUN_100368a30();
  return;
}



/* Address: 0x100368a30 | FUN_100368a30 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100368a30(NSObject *param_1,__int64 param_2)

{
  _CocoaArrayWrapper _Var1;
  IndexSet fromOffsets;
  code *pcVar2;
  bool bVar3;
  _ArrayBuffer _Var4;
  NSObject *pNVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong self;
  ID IVar8;
  undefined *puVar9;
  void *pvVar10;
  ID self_00;
  long extraout_x8;
  undefined8 uVar11;
  long unaff_x20;
  undefined *puVar12;
  ulong uVar13;
  NSObject *pNVar14;
  NSObject *pNVar15;
  ulong uVar16;
  ulong uVar17;
  IndexSet local_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_a8;
  undefined8 local_a0;
  code *local_98;
  undefined *local_90;
  code *local_88;
  undefined *local_80;
  _ArrayBuffer local_78;
  
  local_c0 = (undefined *)param_2;
  local_b8 = (undefined *)Foundation::IndexSet::typeMetadataAccessor();
  local_c8 = *(undefined **)(local_b8 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_c8 + 0x40));
  local_d0.unknown = (undefined *)((long)&local_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_90 = PTR___type_metadata_for_Swift_String_100eac208;
  local_a8 = (undefined *)0x617461646174656d;
  local_a0 = 0xee007865646e692e;
  _Var4.unknown = (undefined *)&local_a8;
  FUN_10035f4b8(_Var4.unknown,*(undefined8 *)(unaff_x20 + 0x20));
  FUN_100005808(&local_a8,&DAT_100fbe6f0,&DAT_100c42750);
  puVar12 = _Var4.unknown & 0xffffffffffffff8;
  local_78.unknown = _Var4.unknown;
  if ((ulong)_Var4.unknown >> 0x3e == 0) {
    pNVar15 = *(NSObject **)(puVar12 + 0x10);
  }
  else {
    _Var1.unknown = puVar12;
    if ((undefined *)0x7fffffffffffffff < _Var4.unknown) {
      _Var1.unknown = _Var4.unknown;
    }
    pNVar15 = (NSObject *)Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  _swift_bridgeObjectRetain(_Var4.unknown);
  pNVar14 = (NSObject *)0x0;
  while( true ) {
    if (pNVar15 == pNVar14) {
      _swift_bridgeObjectRelease_n(_Var4.unknown,2);
      return;
    }
    if (((ulong)_Var4.unknown & 0xc000000000000001) == 0) {
      if (*(NSObject **)(puVar12 + 0x10) <= pNVar14) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100369058);
        (*pcVar2)();
      }
      pNVar5 = *(NSObject **)(_Var4.unknown + (long)pNVar14 * 8 + 0x20);
    }
    else {
      pNVar5 = pNVar14;
      Swift::_ArrayBuffer::__getElementSlowPath((__int64)pNVar14,_Var4);
    }
    FUN_10000ec2c(0,&DAT_100fc1230,&PTR__OBJC_CLASS___NSObject_100f8d7f0);
    bVar3 = (extension_ObjectiveC)::__C::NSObject::___infix(pNVar5,param_1);
    if (bVar3) break;
    bVar3 = SCARRY8((long)pNVar14,1);
    pNVar14 = pNVar14 + 1;
    if (bVar3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10036905c);
      (*pcVar2)();
    }
  }
  _swift_bridgeObjectRelease(_Var4.unknown);
  puVar12 = &DAT_100fbe6d0;
  FUN_1000037f0(&DAT_100fbe6d0,&DAT_100c407e0);
  _swift_allocObject();
  *(undefined8 *)(puVar12 + 0x18) = 2;
  *(undefined8 *)(puVar12 + 0x10) = 1;
  *(NSObject **)(puVar12 + 0x20) = pNVar14;
  puVar6 = &DAT_100fc1200;
  local_a8 = puVar12;
  FUN_100003a00(&DAT_100fc1200,PTR_typeMetadataAccessor_100ea76d0,
                PTR_Foundation__Foundation__IndexSet_>Swift__SetAlgebra_100ea76d8);
  puVar12 = &DAT_100fc1238;
  FUN_1000037f0(&DAT_100fc1238,&DAT_100c42ef8);
  puVar7 = &DAT_100fc1240;
  FUN_100016eac(&DAT_100fc1240,&DAT_100fc1238,&DAT_100c42ef8,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530);
  puVar9 = local_b8;
  fromOffsets.unknown = local_d0.unknown;
  Swift::SetAlgebra::_init(local_d0.unknown,&local_a8,puVar12,puVar7,local_b8,puVar6);
  FUN_1000037f0(&DAT_100fc0d00,&DAT_100c42f00);
  FUN_100016eac(&DAT_100fc1248,&DAT_100fc0d00,&DAT_100c42f00,
                PTR_Swift__Swift__Array<undefined>_>Swift__MutableCollection_100eac520);
  (extension_SwiftUI)::Swift::MutableCollection::move(fromOffsets,(__int64)local_c0);
  (**(code **)(local_c8 + 8))(fromOffsets.unknown,puVar9);
  FUN_1000da768(&local_a8);
  pcVar2 = local_88;
  puVar12 = local_90;
  FUN_100004640(&local_a8,local_90);
  (**(code **)(pcVar2 + 0x18))(puVar12,pcVar2);
  local_c0 = puVar12;
  FUN_100004594(&local_a8);
  _Var4.unknown = local_78.unknown;
  puVar12 = local_78.unknown & 0xffffffffffffff8;
  if ((ulong)local_78.unknown >> 0x3e == 0) {
    uVar13 = *(ulong *)(puVar12 + 0x10);
  }
  else {
    _Var1.unknown = puVar12;
    if ((undefined *)0x7fffffffffffffff < local_78.unknown) {
      _Var1.unknown = local_78.unknown;
    }
    uVar13 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  pcVar2 = (code *)0x0;
  local_b8 = (undefined *)0x0;
  uVar16 = 0;
  while (uVar17 = uVar16, uVar16 != uVar13) {
    while( true ) {
      if (((ulong)_Var4.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(puVar12 + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100369064);
          (*pcVar2)();
        }
        self = *(ulong *)(_Var4.unknown + uVar17 * 8 + 0x20);
      }
      else {
        self = uVar17;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar17,_Var4);
      }
      uVar16 = uVar17 + 1;
      if (SCARRY8(uVar17,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100369060);
        (*pcVar2)();
      }
      IVar8 = objc_stub::FUN_100c06ce0(self);
      IVar8 = objc_stub::FUN_100c03880(IVar8);
      if (uVar17 != IVar8) break;
      uVar17 = uVar17 + 1;
      if (uVar16 == uVar13) goto LAB_100368f04;
    }
    IVar8 = objc_stub::FUN_100c06ce0(self);
    objc_stub::FUN_100c0c320(IVar8,uVar17);
    puVar6 = &DAT_100eccc50;
    _swift_allocObject(&DAT_100eccc50,0x20,7);
    *(undefined **)(puVar6 + 0x10) = local_c0;
    *(ulong *)(puVar6 + 0x18) = self;
    local_c8 = local_c0;
    FUN_100004550(pcVar2,local_b8);
    puVar7 = &DAT_100eccc78;
    _swift_allocObject(&DAT_100eccc78,0x20,7);
    *(code **)(puVar7 + 0x10) = FUN_10036c25c;
    *(undefined **)(puVar7 + 0x18) = puVar6;
    local_88 = FUN_1000386a0;
    local_a8 = PTR___NSConcreteStackBlock_100ea82a0;
    local_a0 = 0x42000000;
    local_98 = FUN_1000d5218;
    local_90 = &DAT_100eccc90;
    local_80 = puVar7;
    pvVar10 = __Block_copy(&local_a8);
    puVar9 = local_80;
    _swift_retain(puVar7);
    _swift_release(puVar9);
    objc_stub::performBlockAndWait_((ID)local_c8,pvVar10);
    __Block_release(pvVar10);
    puVar9 = puVar7;
    _swift_isEscapingClosureAtFileLocation(puVar7,"",0x99,0x4b,0x2e,1);
    _swift_release(puVar7);
    pcVar2 = FUN_10036c25c;
    local_b8 = puVar6;
    if (((ulong)puVar9 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100368f04);
      (*pcVar2)();
    }
  }
LAB_100368f04:
  IVar8 = objc_stub::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  uVar11 = *(undefined8 *)PTR__NSManagedObjectContextDidSaveNotification_100ea99e8;
  puVar12 = &DAT_100ecccc8;
  _swift_allocObject(&DAT_100ecccc8,0x18,7);
  _swift_weakInit(puVar12 + 0x10,unaff_x20);
  local_88 = FUN_10036c290;
  local_a8 = PTR___NSConcreteStackBlock_100ea82a0;
  local_a0 = 0x42000000;
  local_98 = FUN_100059f04;
  local_90 = &DAT_100eccce0;
  local_80 = puVar12;
  pvVar10 = __Block_copy(&local_a8);
  puVar12 = local_c0;
  _swift_release(local_80);
  IVar8 = objc_stub::addObserverForName_object_queue_usingBlock_(IVar8,uVar11,puVar12,0,pvVar10);
  __Block_release(pvVar10);
  FUN_10035ca9c(0);
  self_00 = objc_stub::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  objc_stub::removeObserver_(self_00,IVar8);
  _swift_bridgeObjectRelease(_Var4.unknown);
  _swift_unknownObjectRelease(IVar8);
  FUN_100004550(pcVar2,local_b8);
  return;
}



/* Address: 0x10036908c | thunk_FUN_10036c448 */

void thunk_FUN_10036c448(void)

{
  FUN_10036c448();
  return;
}



/* Address: 0x100369090 | FUN_100369090 */

void FUN_100369090(void)

{
  FUN_1003690b0();
  return;
}


