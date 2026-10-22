/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10097c374 | thunk_FUN_10061f7a8 */

void thunk_FUN_10061f7a8(void)

{
  thunk_FUN_10061f7a8();
  return;
}



/* Address: 0x10097c378 | FUN_10097c378 */

code * FUN_10097c378(code *param_1,ulong param_2,code *param_3,undefined8 param_4,undefined8 param_5
                    )

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  code *pcVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 unaff_x20;
  long unaff_x21;
  ulong uVar8;
  code *pcVar9;
  code *pcVar10;
  ulong uVar11;
  code *local_98;
  ulong local_90;
  undefined4 local_88;
  ushort local_84;
  byte local_82;
  undefined1 auStack_80 [16];
  uint local_70;
  uint local_54;
  code *pcVar4;
  
  local_70 = 0x600;
  if (((uint)param_3 & 0xff) != 1) {
    local_70 = 8;
  }
  if ((param_2 >> 0x3c & 1) == 0) {
    if ((param_2 >> 0x3d & 1) == 0) {
      if (((ulong)param_1 >> 0x3c & 1) == 0) goto LAB_10097c5e4;
      puVar6 = (undefined1 *)(ulong)(local_70 | 1);
      param_1 = (code *)0x180;
      iVar3 = Darwin::open((undefined *)((param_2 & 0xfffffffffffffff) + 0x20),local_70 | 1,0x180);
      pcVar4 = (code *)CONCAT44(extraout_var,iVar3);
    }
    else {
      local_90 = param_2 & 0xffffffffffffff;
      puVar6 = (undefined1 *)(ulong)(local_70 | 1);
      pcVar9 = (code *)0x180;
      local_98 = param_1;
      iVar3 = Darwin::open((UnsafePointer<__int8>)&local_98,local_70 | 1,0x180);
      pcVar4 = (code *)CONCAT44(extraout_var_00,iVar3);
      param_1 = pcVar9;
    }
    pcVar9 = pcVar4;
    if (-1 < iVar3) goto LAB_10097c418;
    FUN_10097d3a0();
    _swift_allocError(&DAT_100f1e9a0,pcVar4,0,0);
    uVar7 = 1;
LAB_10097c5b0:
    *(undefined8 *)pcVar4 = uVar7;
    _swift_willThrow();
  }
  else {
LAB_10097c5e4:
    pcVar4 = FUN_10097d1c0;
    puVar6 = auStack_80;
    Swift::_StringGuts::__slowWithCString((_StringGuts)0x10097d1c0);
    if (unaff_x21 != 0) {
      return param_3;
    }
    pcVar9 = (code *)(ulong)local_54;
LAB_10097c418:
    if (((uint)param_3 & 0xff) == 1) {
      FUN_100611728();
      pcVar5 = (code *)0x18;
      FUN_100488140(0x18,pcVar4,puVar6,param_1,param_2);
      _swift_beginAccess(pcVar5 + 0x10,auStack_80,0,0);
      local_88 = *(undefined4 *)(pcVar5 + 0x10);
      local_90 = 0;
      local_84 = 0;
      local_82 = 0;
      local_98 = pcVar5;
      FUN_10097923c();
      param_3 = local_98;
      uVar1 = local_90 & 0xffffffff;
      uVar2 = local_90 >> 0x20;
      uVar11 = (ulong)local_84;
      uVar8 = (ulong)local_82;
      _swift_beginAccess(local_98 + 0x18,&local_98,0,0);
      pcVar10 = (code *)(uVar2 - uVar1);
      pcVar5 = pcVar9;
      _write(pcVar9,*(long *)(param_3 + 0x18) + uVar11 * 0x100 + uVar8 + uVar1,pcVar10);
      pcVar4 = param_3;
      _swift_release();
      if (pcVar5 != pcVar10) {
        FUN_10097d3a0();
        _swift_allocError(&DAT_100f1e9a0,pcVar4,0,0);
        uVar7 = 2;
        goto LAB_10097c5b0;
      }
    }
    FUN_100654ce4(0);
    _swift_allocObject();
    FUN_100654088(pcVar9);
    _swift_allocObject(unaff_x20,0x40,7);
    _swift_retain(param_5);
    param_3 = pcVar9;
    FUN_10097d1d8(pcVar9,param_4,param_5);
    _swift_release(pcVar9);
  }
  return param_3;
}



/* Address: 0x10097c614 | FUN_10097c614 */

void FUN_10097c614(__int32 *param_1,UnsafePointer<__int8> param_2,uint param_3)

{
  __int32 _Var1;
  undefined4 extraout_var;
  undefined8 *puVar2;
  
  _Var1 = Darwin::open(param_2,param_3 | 1,0x180);
  puVar2 = (undefined8 *)CONCAT44(extraout_var,_Var1);
  if (_Var1 < 0) {
    FUN_10097d3a0();
    _swift_allocError(&DAT_100f1e9a0,puVar2,0,0);
    *puVar2 = 1;
    _swift_willThrow();
  }
  else {
    *param_1 = _Var1;
  }
  return;
}



/* Address: 0x10097c680 | FUN_10097c680 */

void FUN_10097c680(void)

{
  (extension_Dispatch)::__C::OS_dispatch_group::wait();
  (extension_Dispatch)::__C::OS_dispatch_queue::_sync();
  return;
}



/* Address: 0x10097c6d4 | FUN_10097c6d4 */

void FUN_10097c6d4(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = unaff_x20;
  _swift_task_switch(FUN_10097c6ec,0,0);
  return;
}



/* Address: 0x10097c6ec | FUN_10097c6ec */

void FUN_10097c6ec(void)

{
  byte bVar1;
  long *plVar2;
  UnsafeContinuation<undefined,undefined> continuation;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x22;
  long lVar6;
  String isolation;
  String function;
  
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar1 & 1) != 0) {
    plVar2 = (long *)(ulong)*(uint *)(PTR__withCheckedThrowingContinuation_100eaefc8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x58) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_10091398c;
    isolation.bridgeObject = (void *)0x0;
    isolation.str = (char *)plVar2;
    Swift::_withCheckedThrowingContinuation(isolation);
    return;
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0x50);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1009139f0;
  continuation.unknown = (undefined *)(unaff_x22 + 0x10);
  _swift_continuation_init(continuation.unknown,1);
  puVar3 = &DAT_100ff0390;
  FUN_1000f7830(&DAT_100ff0390,&DAT_100c88df8);
  lVar6 = *(long *)(puVar3 + -8);
  uVar4 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar4);
  FUN_1000f7830(&DAT_100fefc50,&DAT_100c88e00);
  function.bridgeObject = &DAT_e700000000000000;
  function.str = (char *)0x292865736f6c63;
  Swift::CheckedContinuation::init(continuation,function);
  FUN_10097c874(uVar4,uVar5);
  (**(code **)(lVar6 + 8))(uVar4,puVar3);
  _swift_task_dealloc(uVar4);
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x10097c874 | FUN_10097c874 */

void FUN_10097c874(undefined8 param_1,DispatchQoS param_2)

{
  DispatchWorkItemFlags DVar1;
  undefined *puVar2;
  undefined *puVar3;
  void *aBlock;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  ulong uVar9;
  DispatchWorkItemFlags qos;
  ulong uVar10;
  long lVar11;
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  long local_b0;
  undefined *puStack_a8;
  long local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_a0 = *(long *)(DVar1.unknown + -8);
  puVar7 = auStack_c0 + -(*(long *)(local_a0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puStack_a8 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_b0 = *(long *)(puStack_a8 + -8);
  qos.unknown = puVar7 + -(*(long *)(local_b0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_b8 = *(undefined8 *)(param_2.unknown + 0x18);
  puVar2 = &DAT_100ff0390;
  FUN_1000f7830(&DAT_100ff0390,&DAT_100c88df8);
  lVar6 = *(long *)(puVar2 + -8);
  lVar8 = *(long *)(lVar6 + 0x40);
  lVar11 = (long)qos.unknown - (lVar8 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar6 + 0x10))(lVar11,param_1,puVar2);
  uVar5 = (ulong)*(byte *)(lVar6 + 0x50);
  uVar10 = uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff);
  uVar9 = lVar8 + uVar10 + 7 & 0xfffffffffffffff8;
  puVar3 = &DAT_100f1ec00;
  _swift_allocObject(&DAT_100f1ec00,uVar9 + 8,uVar5 | 7);
  (**(code **)(lVar6 + 0x20))(puVar3 + uVar10,lVar11,puVar2);
  *(undefined **)(puVar3 + uVar9) = param_2.unknown;
  local_70 = FUN_10097d954;
  local_90 = PTR___NSConcreteStackBlock_100ea82a0;
  local_88 = 0x42000000;
  local_80 = FUN_100030410;
  puStack_78 = &DAT_100f1ec18;
  local_68 = puVar3;
  aBlock = __Block_copy(&local_90);
  _swift_retain();
  Dispatch::DispatchQoS::get_unspecified(param_2);
  local_98 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar2 = &DAT_100ff0398;
  FUN_100003a00(&DAT_100ff0398,PTR_typeMetadataAccessor_100eae670,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680);
  puVar3 = &DAT_100ff03a0;
  FUN_1000f7830(&DAT_100ff03a0,&DAT_100c88e08);
  puVar4 = &DAT_100ff03a8;
  FUN_100155c48(&DAT_100ff03a8,&DAT_100ff03a0,&DAT_100c88e08);
  Swift::SetAlgebra::_init(puVar7,&local_98,puVar3,puVar4,DVar1.unknown,puVar2);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(aBlock);
  (**(code **)(local_a0 + 8))(puVar7,DVar1.unknown);
  (**(code **)(local_b0 + 8))(qos.unknown,puStack_a8);
  _swift_release(local_68);
  return;
}



/* Address: 0x10097cac8 | FUN_10097cac8 */

/* WARNING: Removing unreachable block (ram,0x00010097caf0) */

void FUN_10097cac8(void)

{
  FUN_100654460();
  FUN_1000f7830(&DAT_100ff0390,&DAT_100c88df8);
  Swift::CheckedContinuation::resume();
  return;
}



/* Address: 0x10097cb50 | FUN_10097cb50 */

void FUN_10097cb50(DispatchQoS param_1,undefined8 param_2,undefined8 param_3)

{
  DispatchWorkItemFlags DVar1;
  undefined *puVar2;
  void *aBlock;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  long lVar5;
  DispatchWorkItemFlags qos;
  DispatchQoS local_c0;
  undefined8 uStack_b8;
  long local_b0;
  undefined *puStack_a8;
  long local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_a0 = *(long *)(DVar1.unknown + -8);
  lVar5 = (long)&local_c0 - (*(long *)(local_a0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puStack_a8 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_b0 = *(long *)(puStack_a8 + -8);
  qos.unknown = (undefined *)(lVar5 - (*(long *)(local_b0 + 0x40) + 0xfU & 0xfffffffffffffff0));
  uStack_b8 = *(undefined8 *)(unaff_x20 + 0x18);
  local_c0.unknown = *(undefined **)(unaff_x20 + 0x20);
  puVar2 = &DAT_100f1e648;
  _swift_allocObject(&DAT_100f1e648,0x2f,7);
  *(long *)(puVar2 + 0x10) = unaff_x20;
  *(undefined **)(puVar2 + 0x18) = param_1.unknown;
  *(int *)(puVar2 + 0x20) = (int)param_2;
  *(int *)(puVar2 + 0x24) = (int)((ulong)param_2 >> 0x20);
  *(int *)(puVar2 + 0x28) = (int)param_3;
  *(short *)(puVar2 + 0x2c) = (short)((ulong)param_3 >> 0x20);
  puVar2[0x2e] = (char)((ulong)param_3 >> 0x30);
  local_70 = FUN_10097d418;
  local_90 = PTR___NSConcreteStackBlock_100ea82a0;
  local_88 = 0x42000000;
  local_80 = FUN_100030410;
  puStack_78 = &DAT_100f1e660;
  local_68 = puVar2;
  aBlock = __Block_copy(&local_90);
  _swift_retain();
  _swift_retain();
  Dispatch::DispatchQoS::get_unspecified(param_1);
  local_98 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar2 = &DAT_100ff0398;
  FUN_100003a00(&DAT_100ff0398,PTR_typeMetadataAccessor_100eae670,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680);
  puVar3 = &DAT_100ff03a0;
  FUN_1000f7830(&DAT_100ff03a0,&DAT_100c88e08);
  puVar4 = &DAT_100ff03a8;
  FUN_100155c48(&DAT_100ff03a8,&DAT_100ff03a0,&DAT_100c88e08);
  Swift::SetAlgebra::_init(lVar5,&local_98,puVar3,puVar4,DVar1.unknown,puVar2);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async(local_c0,qos);
  __Block_release(aBlock);
  (**(code **)(local_a0 + 8))(lVar5,DVar1.unknown);
  (**(code **)(local_b0 + 8))(qos.unknown,puStack_a8);
  _swift_release(local_68);
  return;
}



/* Address: 0x10097cd54 | FUN_10097cd54 */

/* WARNING: Removing unreachable block (ram,0x00010097cdc0) */

void FUN_10097cd54(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_60 [16];
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined2 local_3c;
  undefined1 local_3a;
  
  local_40 = (undefined4)param_4;
  if (*(long *)(param_1 + 0x38) == 0) {
    local_48 = (undefined4)param_3;
    uStack_44 = (undefined4)((ulong)param_3 >> 0x20);
    local_3c = (undefined2)((ulong)param_4 >> 0x20);
    local_3a = (undefined1)((ulong)param_4 >> 0x30);
    local_50 = param_2;
    FUN_1006541ac(FUN_10097d8b0,auStack_60,PTR___type_metadata_for____100eae0c8 + 8);
    return;
  }
  return;
}



/* Address: 0x10097ce00 | FUN_10097ce00 */

void FUN_10097ce00(undefined8 *param_1,long param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulong uVar4;
  undefined1 auStack_58 [24];
  
  _swift_retain(param_2);
  _swift_beginAccess(param_2 + 0x18,auStack_58,0,0);
  uVar4 = param_3;
  do {
    uVar3 = (uint)uVar4;
    if (uVar3 == (uint)(param_3 >> 0x20)) {
LAB_10097cecc:
      _swift_release(param_2);
      return;
    }
    puVar2 = param_1;
    _write(param_1,*(long *)(param_2 + 0x18) +
                   (param_4 >> 0x18 & 0xffff00) + (param_4 >> 0x30 & 0xff) + (uVar4 & 0xffffffff),
           (param_3 >> 0x20) - (uVar4 & 0xffffffff));
    if ((long)puVar2 < 1) {
      FUN_10097d3a0();
      _swift_allocError(&DAT_100f1e9a0,puVar2,0,0);
      *puVar2 = 2;
      _swift_willThrow();
      goto LAB_10097cecc;
    }
    if ((ulong)puVar2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10097cef4);
      (*pcVar1)();
    }
    uVar4 = (ulong)(uVar3 + (uint)puVar2);
    if (CARRY4(uVar3,(uint)puVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10097ce9c);
      (*pcVar1)();
    }
  } while( true );
}



/* Address: 0x10097cef4 | FUN_10097cef4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10097cef4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_errorRelease(*(undefined8 *)(unaff_x20 + 0x38));
  return;
}



/* Address: 0x10097cf30 | FUN_10097cf30 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10097cf30(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_errorRelease(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10097cf74 | FUN_10097cf74 */

void FUN_10097cf74(undefined8 param_1,char param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  
  if (param_2 != '\x01') {
    FUN_100973bdc();
    return;
  }
  uVar2 = *(ulong *)(param_3 + 0x20);
  lVar1 = *(long *)(param_3 + 0x28);
  lVar6 = param_3;
  _swift_getObjectType();
  uVar3 = uVar2;
  lVar5 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar3 & 1) != 0) {
    thunk_FUN_1005de8f4(param_1);
    FUN_1006486f8();
    FUN_100004550(param_1,lVar5);
    _swift_bridgeObjectRelease(lVar6);
    return;
  }
  puVar4 = &DAT_100f1eca0;
  _swift_allocObject(&DAT_100f1eca0,0x20,7);
  *(long *)(puVar4 + 0x10) = param_3;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  pcVar7 = *(code **)(lVar1 + 0x18);
  _swift_retain(param_3);
  FUN_100308524(param_1,1);
  (*pcVar7)(FUN_1008d678c,puVar4,uVar2,lVar1);
  _swift_release(puVar4);
  return;
}



/* Address: 0x10097d074 | FUN_10097d074 */

void FUN_10097d074(undefined8 *param_1,undefined8 param_2)

{
  FUN_10097cf74(*param_1,*(undefined1 *)(param_1 + 1),param_2);
  return;
}



/* Address: 0x10097d088 | FUN_10097d088 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10097d088(void)

{
  return ZEXT816(0x100ff0480);
}



/* Address: 0x10097d0a8 | FUN_10097d0a8 */

void FUN_10097d0a8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff0380 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8916c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8916c,&DAT_100f1ebe0);
  DAT_100ff0380 = pTVar1;
  return;
}



/* Address: 0x10097d0e8 | FUN_10097d0e8 */

void FUN_10097d0e8(undefined8 param_1,ulong param_2)

{
  _swift_release();
  _swift_release(param_2 & 0x7fffffffffffffff);
  return;
}



/* Address: 0x10097d10c | FUN_10097d10c */

long FUN_10097d10c(long param_1)

{
  FUN_10097d0e8(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  return param_1;
}



/* Address: 0x10097d138 | FUN_10097d138 */

void FUN_10097d138(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x10097d15c | FUN_10097d15c */

void FUN_10097d15c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x10097d190 | FUN_10097d190 */

void FUN_10097d190(void)

{
  long unaff_x20;
  
  FUN_10097bbe4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x10097d19c | FUN_10097d19c */

void FUN_10097d19c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x10097d1c0 | FUN_10097d1c0 */

void FUN_10097d1c0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10097c614(param_1,*(undefined4 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x10097d1d8 | FUN_10097d1d8 */

void FUN_10097d1d8(DispatchQoS param_1,undefined8 param_2,undefined8 param_3)

{
  AutoreleaseFrequency AVar1;
  undefined7 extraout_var;
  Attributes AVar2;
  DispatchQoS DVar3;
  dispatch_group_t pdVar4;
  OS_dispatch_queue *pOVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  OS_dispatch_queue *pOVar9;
  long lVar10;
  long unaff_x20;
  long lVar11;
  Attributes attributes;
  String label;
  OS_dispatch_queue *local_90;
  long local_88;
  long lStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined *local_68;
  
  local_78 = param_2;
  uStack_70 = param_3;
  AVar1 = (extension_Dispatch)::__C::OS_dispatch_queue::AutoreleaseFrequency::typeMetadataAccessor()
  ;
  lStack_80 = CONCAT71(extraout_var,AVar1.value);
  local_88 = *(long *)(lStack_80 + -8);
  lVar11 = (long)&local_90 - (*(long *)(local_88 + 0x40) + 0xfU & 0xfffffffffffffff0);
  AVar2 = Attributes::_typeMetadataAccessor();
  puVar7 = PTR__typeMetadataAccessor_100eae788;
  attributes.unknown =
       (undefined *)
       (lVar11 - (*(long *)(*(long *)(AVar2.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  DVar3 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar10 = *(long *)(*(long *)(DVar3.unknown + -8) + 0x40);
  pdVar4 = _dispatch_group_create();
  *(dispatch_group_t *)(unaff_x20 + 0x20) = pdVar4;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined **)(unaff_x20 + 0x10) = param_1.unknown;
  pOVar5 = (OS_dispatch_queue *)0x0;
  FUN_10097d9a0();
  local_90 = pOVar5;
  _swift_retain();
  Dispatch::DispatchQoS::get_unspecified(param_1);
  local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar6 = &DAT_100ff06c0;
  FUN_100003a00(&DAT_100ff06c0,puVar7,PTR__Dispatch__Attributes_>Swift__SetAlgebra_100eae798);
  puVar7 = &DAT_100ff06c8;
  FUN_1000f7830(&DAT_100ff06c8,&DAT_100c891b0);
  puVar8 = &DAT_100ff06d0;
  FUN_100155c48(&DAT_100ff06d0,&DAT_100ff06c8,&DAT_100c891b0);
  Swift::SetAlgebra::_init(attributes.unknown,&local_68,puVar7,puVar8,AVar2.unknown,puVar6);
  (**(code **)(local_88 + 0x68))
            (lVar11,*(undefined4 *)
                     PTR___enum_case_for__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_inherit__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_Type___>__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_100eae7d0
             ,lStack_80);
  label.bridgeObject = (void *)0x8000000100db6cf0;
  label.str = (char *)0xd000000000000042;
  pOVar9 = (extension_Dispatch)::__C::OS_dispatch_queue::___allocating_init
                     (local_90,label,
                      (DispatchQoS)(attributes.unknown + -(lVar10 + 0xfU & 0xfffffffffffffff0)),
                      attributes,(AutoreleaseFrequency)(__int8)lVar11);
  *(OS_dispatch_queue **)(unaff_x20 + 0x18) = pOVar9;
  *(undefined8 *)(unaff_x20 + 0x28) = local_78;
  *(undefined8 *)(unaff_x20 + 0x30) = uStack_70;
  return;
}



/* Address: 0x10097d3a0 | FUN_10097d3a0 */

void FUN_10097d3a0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff0388 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c88fb8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c88fb8,&DAT_100f1e9a0);
  DAT_100ff0388 = pTVar1;
  return;
}



/* Address: 0x10097d3e0 | FUN_10097d3e0 */

void FUN_10097d3e0(void)

{
  FUN_100654460();
  return;
}



/* Address: 0x10097d400 | FUN_10097d400 */

void FUN_10097d400(void)

{
  FUN_10097c874();
  return;
}



/* Address: 0x10097d408 | FUN_10097d408 */

void FUN_10097d408(void)

{
  FUN_100622760(PTR__swift_release_100eae3e8,0x2f);
  return;
}



/* Address: 0x10097d418 | FUN_10097d418 */

void FUN_10097d418(void)

{
  long unaff_x20;
  
  FUN_10097cd54(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),(ulong)*(uint7 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x10097d438 | FUN_10097d438 */

void FUN_10097d438(long param_1,long param_2)

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



/* Address: 0x10097d44c | FUN_10097d44c */

void FUN_10097d44c(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x10097d454 | thunk_FUN_10097d458 */

void thunk_FUN_10097d458(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff03b0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c88e10;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c88e10,&DAT_100f1e7e0);
  DAT_100ff03b0 = pTVar1;
  return;
}



/* Address: 0x10097d458 | FUN_10097d458 */

void FUN_10097d458(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff03b0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c88e10;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c88e10,&DAT_100f1e7e0);
  DAT_100ff03b0 = pTVar1;
  return;
}



/* Address: 0x10097d498 | thunk_FUN_10097d49c */

void thunk_FUN_10097d49c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff03b8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c88e78;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c88e78,&DAT_100f1e8f0);
  DAT_100ff03b8 = pTVar1;
  return;
}



/* Address: 0x10097d49c | FUN_10097d49c */

void FUN_10097d49c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff03b8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c88e78;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c88e78,&DAT_100f1e8f0);
  DAT_100ff03b8 = pTVar1;
  return;
}



/* Address: 0x10097d4dc | thunk_FUN_10097d4e0 */

void thunk_FUN_10097d4e0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff0438 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c88f50;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c88f50,&DAT_100f1e980);
  DAT_100ff0438 = pTVar1;
  return;
}



/* Address: 0x10097d4e0 | FUN_10097d4e0 */

void FUN_10097d4e0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff0438 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c88f50;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c88f50,&DAT_100f1e980);
  DAT_100ff0438 = pTVar1;
  return;
}



/* Address: 0x10097d520 | FUN_10097d520 */

undefined1  [16] FUN_10097d520(void)

{
  return ZEXT816(0x100f1e7e0);
}



/* Address: 0x10097d530 | FUN_10097d530 */

undefined1  [16] FUN_10097d530(void)

{
  return ZEXT816(0x100f1e858);
}



/* Address: 0x10097d540 | FUN_10097d540 */

undefined1  [16] FUN_10097d540(void)

{
  return ZEXT816(0x100f1e8f0);
}



/* Address: 0x10097d550 | FUN_10097d550 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10097d550(void)

{
  return ZEXT816(0x100ff0630);
}



/* Address: 0x10097d570 | FUN_10097d570 */

undefined1  [16] FUN_10097d570(void)

{
  return ZEXT816(0x100f1e980);
}



/* Address: 0x10097d580 | FUN_10097d580 */

undefined1  [16] FUN_10097d580(void)

{
  return ZEXT816(0x100f1e9a0);
}



/* Address: 0x10097d590 | FUN_10097d590 */

undefined1  [16] FUN_10097d590(void)

{
  return ZEXT816(0x100f1ea38);
}



/* Address: 0x10097d5a0 | FUN_10097d5a0 */

undefined1  [16] FUN_10097d5a0(void)

{
  return ZEXT816(0x100f1eac8);
}



/* Address: 0x10097d5b0 | FUN_10097d5b0 */

void FUN_10097d5b0(undefined8 param_1,ulong param_2)

{
  _swift_retain();
  _swift_retain(param_2 & 0x7fffffffffffffff);
  return;
}



/* Address: 0x10097d5d4 | FUN_10097d5d4 */

void FUN_10097d5d4(long param_1)

{
  FUN_10097d0e8(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Address: 0x10097d5e0 | FUN_10097d5e0 */

undefined8 * FUN_10097d5e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  uVar1 = param_2[2];
  FUN_10097d5b0(uVar2,uVar1);
  param_1[1] = uVar2;
  param_1[2] = uVar1;
  uVar2 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar2;
  uVar2 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar2;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  return param_1;
}



/* Address: 0x10097d640 | FUN_10097d640 */

undefined8 * FUN_10097d640(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  *param_1 = *param_2;
  uVar1 = param_2[1];
  uVar3 = param_2[2];
  FUN_10097d5b0(uVar1,uVar3);
  uVar2 = param_1[1];
  uVar4 = param_1[2];
  param_1[1] = uVar1;
  param_1[2] = uVar3;
  FUN_10097d0e8(uVar2,uVar4);
  param_1[3] = param_2[3];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  uVar5 = *(undefined4 *)((long)param_2 + 0x2c);
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  *(undefined4 *)((long)param_1 + 0x2c) = uVar5;
  *(undefined4 *)((long)param_1 + 0x34) = *(undefined4 *)((long)param_2 + 0x34);
  *(undefined2 *)(param_1 + 7) = *(undefined2 *)(param_2 + 7);
  *(undefined2 *)((long)param_1 + 0x3a) = *(undefined2 *)((long)param_2 + 0x3a);
  return param_1;
}



/* Address: 0x10097d6d0 | FUN_10097d6d0 */

void FUN_10097d6d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar6 = param_2[5];
  uVar5 = param_2[4];
  uVar7 = *(undefined8 *)((long)param_2 + 0x2c);
  *(undefined8 *)((long)param_1 + 0x34) = *(undefined8 *)((long)param_2 + 0x34);
  *(undefined8 *)((long)param_1 + 0x2c) = uVar7;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x10097d6ec | FUN_10097d6ec */

undefined8 * FUN_10097d6ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  FUN_10097d0e8(uVar2,param_1[2]);
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  *(undefined4 *)((long)param_1 + 0x2c) = *(undefined4 *)((long)param_2 + 0x2c);
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  uVar1 = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)((long)param_1 + 0x34) = *(undefined4 *)((long)param_2 + 0x34);
  *(undefined4 *)(param_1 + 7) = uVar1;
  return param_1;
}



/* Address: 0x10097d754 | FUN_10097d754 */

int FUN_10097d754(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x3ffe < param_2) && ((char)param_1[0xf] != '\0')) {
    return *param_1 + 0x3fff;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
  uVar1 = (uVar1 >> 0x1f |
          (uVar1 >> 0x12 & 0x1c00 | ((uint)*(undefined8 *)(param_1 + 4) & 7) << 7 |
          (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x39) & 0x78 |
          (uint)*(undefined8 *)(param_1 + 2) & 7) << 1) ^ 0x3fff;
  if (0x3ffd < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x10097d7cc | FUN_10097d7cc */

void FUN_10097d7cc(ulong *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 < 0x3fff) {
    if (0x3ffe < param_3) {
      *(undefined1 *)((long)param_1 + 0x3c) = 0;
    }
    if (param_2 != 0) {
      uVar1 = -param_2 >> 1 & 0x1fff | (-param_2 & 0x3fff) << 0xd;
      uVar2 = (ulong)uVar1;
      param_1[1] = (uVar2 | uVar2 << 0x39) & 0xf000000000000007;
      param_1[2] = ((ulong)(uVar1 >> 7) | uVar2 << 0x32) & 0xf000000000000007;
      return;
    }
  }
  else {
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 7) = 0;
    *param_1 = (ulong)(param_2 - 0x3fff);
    if (0x3ffe < param_3) {
      *(undefined1 *)((long)param_1 + 0x3c) = 1;
    }
  }
  return;
}



/* Address: 0x10097d84c | FUN_10097d84c */

undefined1  [16] FUN_10097d84c(void)

{
  return ZEXT816(0x100f1eb40);
}



/* Address: 0x10097d85c | FUN_10097d85c */

undefined1  [16] FUN_10097d85c(void)

{
  return ZEXT816(0x100f1ebe0);
}



/* Address: 0x10097d86c | thunk_FUN_10097d870 */

void thunk_FUN_10097d870(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff06b0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c89144;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c89144,&DAT_100f1eac8);
  DAT_100ff06b0 = pTVar1;
  return;
}



/* Address: 0x10097d870 | FUN_10097d870 */

void FUN_10097d870(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff06b0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c89144;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c89144,&DAT_100f1eac8);
  DAT_100ff06b0 = pTVar1;
  return;
}



/* Address: 0x10097d8b0 | FUN_10097d8b0 */

void FUN_10097d8b0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10097ce00(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                (ulong)*(uint7 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x10097d8dc | FUN_10097d8dc */

void FUN_10097d8dc(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  
  puVar1 = &DAT_100ff0390;
  FUN_1000f7830(&DAT_100ff0390,&DAT_100c88df8);
  lVar2 = *(long *)(puVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50) + 0x10 &
          ((ulong)*(byte *)(lVar2 + 0x50) ^ 0xffffffffffffffff);
  lVar4 = *(long *)(lVar2 + 0x40);
  (**(code **)(lVar2 + 8))(unaff_x20 + uVar3,puVar1);
  _swift_release(*(undefined8 *)(unaff_x20 + (lVar4 + uVar3 + 7 & 0xfffffffffffffff8)));
  _swift_deallocObject();
  return;
}



/* Address: 0x10097d954 | FUN_10097d954 */

void FUN_10097d954(void)

{
  undefined *puVar1;
  ulong uVar2;
  long unaff_x20;
  
  puVar1 = &DAT_100ff0390;
  FUN_1000f7830(&DAT_100ff0390,&DAT_100c88df8);
  uVar2 = (ulong)*(byte *)(*(long *)(puVar1 + -8) + 0x50);
  uVar2 = uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff);
  FUN_10097cac8(unaff_x20 + uVar2,
                *(undefined8 *)
                 (unaff_x20 +
                 (*(long *)(*(long *)(puVar1 + -8) + 0x40) + uVar2 + 7 & 0xfffffffffffffff8)));
  return;
}



/* Address: 0x10097d9a0 | FUN_10097d9a0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_10097d9a0(void)

{
  undefined *puVar1;
  
  if (DAT_100ff06b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___OS_dispatch_queue;
  _swift_getObjCClassMetadata();
  DAT_100ff06b8 = puVar1;
  return;
}



/* Address: 0x10097d9e4 | FUN_10097d9e4 */

void FUN_10097d9e4(undefined8 *param_1)

{
  FUN_10097cf74(*param_1,*(undefined1 *)(param_1 + 1));
  return;
}



/* Address: 0x10097d9f8 | FUN_10097d9f8 */

void FUN_10097d9f8(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}


