/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100172a08 | FUN_100172a08 */

void FUN_100172a08(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100172a14 | FUN_100172a14 */

void FUN_100172a14(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  _swift_retain(uVar2);
  (*pcVar1)();
  _swift_release(uVar2);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100172a64 | FUN_100172a64 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100172a64(void)

{
  return ZEXT816(0x100fb2bc0);
}



/* Address: 0x100172a84 | FUN_100172a84 */

undefined1  [16] FUN_100172a84(Date param_1,ulong param_2)

{
  Date DVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined *local_48;
  undefined *puStack_40;
  undefined *local_38;
  undefined *puStack_30;
  long local_28;
  
  local_48 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40;
  puStack_40 = PTR___value_witness_table_for_Builtin_UnknownObject_100eabd30 + 0x40;
  local_38 = &DAT_100c300a0;
  puStack_30 = puStack_40;
  DVar1 = Foundation::Date::typeMetadataAccessor();
  if (param_2 < 0x40) {
    local_28 = *(long *)(DVar1.unknown + -8) + 0x40;
    uVar2 = 0;
    _swift_initClassMetadata2(param_1.unknown,0,5,&local_48,param_1.unknown + 0x58);
    if (param_1.unknown == (undefined *)0x0) {
      param_1.unknown = (undefined *)0x0;
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0x3f;
    param_1 = DVar1;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = param_1.unknown;
  return auVar3;
}



/* Address: 0x100172b18 | FUN_100172b18 */

void FUN_100172b18(void)

{
  long lVar1;
  Date DVar2;
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = DAT_100fb2ca8;
  DVar2 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar2.unknown + -8) + 8))(unaff_x20 + lVar1,DVar2.unknown);
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100172b6c | FUN_100172b6c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100172b6c(void)

{
  long lVar1;
  Date DVar2;
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_100004550(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  lVar1 = DAT_100fb2c20;
  DVar2 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar2.unknown + -8) + 8))(unaff_x20 + lVar1,DVar2.unknown);
  return;
}



/* Address: 0x100172bcc | FUN_100172bcc */

void FUN_100172bcc(void)

{
  FUN_100172b6c();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100172bf0 | FUN_100172bf0 */

void FUN_100172bf0(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100172bfc | FUN_100172bfc */

undefined1  [16] FUN_100172bfc(Date param_1,ulong param_2)

{
  Date DVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined *local_38;
  undefined *puStack_30;
  long local_28;
  
  local_38 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
  puStack_30 = PTR___value_witness_table_for_____>____100eae0d0 + 0x40;
  DVar1 = Foundation::Date::typeMetadataAccessor();
  if (param_2 < 0x40) {
    local_28 = *(long *)(DVar1.unknown + -8) + 0x40;
    uVar2 = 0;
    _swift_initClassMetadata2(param_1.unknown,0,3,&local_38,param_1.unknown + 0x58);
    if (param_1.unknown == (undefined *)0x0) {
      param_1.unknown = (undefined *)0x0;
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0x3f;
    param_1 = DVar1;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = param_1.unknown;
  return auVar3;
}



/* Address: 0x100172c84 | FUN_100172c84 */

void FUN_100172c84(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100172c90 | _swift_allocateGenericClassMetadata */

void _swift_allocateGenericClassMetadata(void)

{
  _swift_allocateGenericClassMetadata();
  return;
}



/* Address: 0x100172c94 | FUN_100172c94 */

void FUN_100172c94(void)

{
  long lVar1;
  ulong *puVar2;
  long unaff_x20;
  ulong *puVar3;
  long unaff_x21;
  ulong uVar4;
  undefined1 uVar5;
  undefined8 local_70;
  long lStack_68;
  code *local_60;
  code *pcStack_58;
  code *local_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  if ((*(byte *)(unaff_x20 + 0x30) & 1) == 0) {
    lVar1 = 0;
    FUN_100173a44();
    _swift_allocObject();
    _swift_weakInit(lVar1 + 0x10,0);
    _swift_weakAssign(lVar1 + 0x10);
    local_70 = 0;
    local_60 = _swift_retain;
    pcStack_58 = _swift_release;
    local_50 = thunk_FUN_100173560;
    puVar3 = *(ulong **)(unaff_x20 + 0x38);
    puVar2 = puVar3;
    lStack_68 = lVar1;
    _SCNetworkReachabilitySetCallback(puVar3,FUN_10017354c,&local_70);
    if ((int)puVar2 == 0) {
      uVar5 = 2;
    }
    else {
      puVar2 = puVar3;
      _SCNetworkReachabilitySetDispatchQueue(puVar3,*(undefined8 *)(unaff_x20 + 0x40));
      if ((int)puVar2 != 0) {
        _swift_unownedRetainStrong();
        _swift_unownedRetain();
        _swift_unownedRetain();
        _swift_release();
        (extension_Dispatch)::__C::OS_dispatch_queue::_sync();
        _swift_unownedRelease();
        _swift_unownedRelease();
        _swift_release(lVar1);
        if (unaff_x21 == 0) {
          *(undefined1 *)(unaff_x20 + 0x30) = 1;
        }
        goto LAB_100172e30;
      }
      uVar5 = 3;
    }
    _SCNetworkReachabilitySetCallback(puVar3,0,0);
    _SCNetworkReachabilitySetDispatchQueue(puVar3,0);
    *(undefined1 *)(unaff_x20 + 0x30) = 0;
    _SCError();
    uVar4 = (ulong)puVar3 & 0xffffffff;
    FUN_100173a64();
    _swift_allocError(&DAT_100eba100,puVar3,0,0);
    *puVar3 = uVar4;
    puVar3[1] = 0;
    *(undefined4 *)(puVar3 + 2) = 0;
    *(undefined1 *)((long)puVar3 + 0x14) = uVar5;
    _swift_willThrow();
    _swift_release(lVar1);
  }
LAB_100172e30:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100172e64 | FUN_100172e64 */

void FUN_100172e64(void)

{
  DAT_101057348 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  return;
}



/* Address: 0x100172e98 | FUN_100172e98 */

undefined8 * FUN_100172e98(void)

{
  if (DAT_100fb2d30 != -1) {
    _swift_once(&DAT_100fb2d30,FUN_100172e64);
  }
  return &DAT_101057348;
}



/* Address: 0x100172ed8 | thunk_FUN_100172f20 */

void thunk_FUN_100172f20(void)

{
  FUN_100172f20();
  return;
}



/* Address: 0x100172edc | FUN_100172edc */

void FUN_100172edc(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\x01') {
    _swift_bridgeObjectRetain(param_2);
    return;
  }
  return;
}



/* Address: 0x100172ef4 | FUN_100172ef4 */

void FUN_100172ef4(undefined8 *param_1)

{
  FUN_100172f08(*param_1,param_1[1],*(undefined4 *)(param_1 + 2),
                *(undefined1 *)((long)param_1 + 0x14));
  return;
}



/* Address: 0x100172f08 | FUN_100172f08 */

void FUN_100172f08(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\x01') {
    _swift_bridgeObjectRelease(param_2);
    return;
  }
  return;
}



/* Address: 0x100172f20 | FUN_100172f20 */

undefined8 * FUN_100172f20(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined4 *)(param_2 + 2);
  uVar4 = *(undefined1 *)((long)param_2 + 0x14);
  FUN_100172edc(uVar1,uVar2,uVar3,uVar4);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined4 *)(param_1 + 2) = uVar3;
  *(undefined1 *)((long)param_1 + 0x14) = uVar4;
  return param_1;
}



/* Address: 0x100172f7c | FUN_100172f7c */

undefined8 * FUN_100172f7c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar5 = *(undefined4 *)(param_2 + 2);
  uVar7 = *(undefined1 *)((long)param_2 + 0x14);
  FUN_100172edc(uVar1,uVar3,uVar5,uVar7);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  uVar6 = *(undefined4 *)(param_1 + 2);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  *(undefined4 *)(param_1 + 2) = uVar5;
  uVar8 = *(undefined1 *)((long)param_1 + 0x14);
  *(undefined1 *)((long)param_1 + 0x14) = uVar7;
  FUN_100172f08(uVar2,uVar4,uVar6,uVar8);
  return param_1;
}



/* Address: 0x100172fe8 | FUN_100172fe8 */

void FUN_100172fe8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined8 *)((long)param_1 + 0xd) = *(undefined8 *)((long)param_2 + 0xd);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x100172ffc | FUN_100172ffc */

undefined8 * FUN_100172ffc(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *(undefined4 *)(param_2 + 2);
  uVar3 = *(undefined1 *)((long)param_2 + 0x14);
  uVar5 = *param_1;
  uVar6 = param_1[1];
  uVar2 = *(undefined4 *)(param_1 + 2);
  uVar7 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  *(undefined4 *)(param_1 + 2) = uVar1;
  uVar4 = *(undefined1 *)((long)param_1 + 0x14);
  *(undefined1 *)((long)param_1 + 0x14) = uVar3;
  FUN_100172f08(uVar5,uVar6,uVar2,uVar4);
  return param_1;
}



/* Address: 0x10017304c | FUN_10017304c */

int FUN_10017304c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfb < param_2) && (*(char *)((long)param_1 + 0x15) != '\0')) {
    return *param_1 + 0xfc;
  }
  uVar1 = *(byte *)(param_1 + 5) ^ 0xff;
  if (*(byte *)(param_1 + 5) < 5) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x100173094 | FUN_100173094 */

void FUN_100173094(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xfc) {
    if (0xfb < param_3) {
      *(undefined1 *)((long)param_1 + 0x15) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + 0x14) = -(char)param_2;
      return;
    }
  }
  else {
    *(undefined1 *)((long)param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    *param_1 = (ulong)(param_2 - 0xfc);
    param_1[1] = 0;
    if (0xfb < param_3) {
      *(undefined1 *)((long)param_1 + 0x15) = 1;
    }
  }
  return;
}



/* Address: 0x1001730dc | FUN_1001730dc */

undefined1 FUN_1001730dc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x14);
}



/* Address: 0x1001730e4 | FUN_1001730e4 */

void FUN_1001730e4(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x14) = param_2;
  return;
}



/* Address: 0x1001730ec | FUN_1001730ec */

undefined1  [16] FUN_1001730ec(void)

{
  return ZEXT816(0x100eba100);
}



/* Address: 0x1001730fc | FUN_1001730fc */

void FUN_1001730fc(void)

{
  DAT_101057350 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  return;
}



/* Address: 0x100173130 | FUN_100173130 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001001733a8) */

void FUN_100173130(void)

{
  uint uVar1;
  DispatchWorkItemFlags DVar2;
  DispatchQoS DVar3;
  undefined *puVar4;
  void *aBlock;
  DispatchQoS DVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  ID self;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  long unaff_x20;
  undefined8 uVar10;
  long lVar11;
  DispatchWorkItemFlags qos;
  long lVar12;
  long local_d0;
  long local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  code *local_a8;
  undefined *puStack_a0;
  code *local_98;
  undefined *local_90;
  undefined *local_80 [2];
  undefined *local_70;
  
  DVar2 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar11 = *(long *)(DVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  lVar9 = (long)&local_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar3 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar12 = *(long *)(DVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar12 + 0x40));
  qos.unknown = (undefined *)(lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  puVar4 = &DAT_100eba120;
  _swift_allocObject(&DAT_100eba120,0x18,7);
  _swift_weakInit(puVar4 + 0x10);
  if (*(long *)(unaff_x20 + 0x48) == 0) {
    _swift_beginAccess(puVar4 + 0x10,&local_b8,0,0);
    puVar8 = puVar4 + 0x10;
    _swift_weakLoadStrong();
    if (puVar8 != (undefined *)0x0) {
      if (puVar8[0x54] == '\x01') {
        _swift_unownedRetainStrong(puVar8);
        _swift_retain(puVar4);
        _swift_unownedRetain(puVar8);
        _swift_unownedRetain();
        _swift_release();
        local_70 = puVar8;
        (extension_Dispatch)::__C::OS_dispatch_queue::_sync();
        _swift_unownedRelease(puVar8);
        _swift_unownedRelease(puVar8);
      }
      else {
        _swift_retain(puVar4);
      }
      uVar1 = *(uint *)(puVar8 + 0x50);
      if (puVar8[0x54] == '\x01' || (uVar1 & 2) == 0) {
        lVar9 = 0x18;
      }
      else {
        lVar9 = 0x18;
        if ((((uint)((uVar1 & 0x28) == 0) | uVar1 >> 4) & (uVar1 & 4) >> 2) == 0) {
          lVar9 = 0x10;
        }
      }
      uVar10 = *(undefined8 *)(puVar8 + lVar9);
      _swift_retain(uVar10);
      FUN_100134bdc(puVar8);
      _swift_release(uVar10);
      self = *(ID *)(puVar8 + 0x28);
      if (DAT_100fb2f58 != -1) {
        _swift_once(&DAT_100fb2f58,FUN_1001730fc);
      }
      objc_stub::postNotificationName_object_(self,DAT_101057350,puVar8);
      _swift_release(puVar8);
      _swift_release_n(puVar4,2);
      return;
    }
  }
  else {
    local_98 = FUN_100173ac8;
    local_b8 = PTR___NSConcreteStackBlock_100ea82a0;
    local_b0 = 0x42000000;
    local_a8 = FUN_100030410;
    puStack_a0 = &DAT_100eba138;
    local_90 = puVar4;
    aBlock = __Block_copy(&local_b8);
    DVar5.unknown = puVar4;
    local_c0 = DVar3.unknown;
    _swift_retain_n(puVar4,2);
    Dispatch::DispatchQoS::get_unspecified(DVar5);
    local_80[0] = PTR___swiftEmptyArrayStorage_100eae0d8;
    puVar6 = &DAT_100fafdf0;
    FUN_100003a00(&DAT_100fafdf0,PTR_typeMetadataAccessor_100eae670,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680);
    puVar8 = &DAT_100fafdf8;
    local_c8 = lVar12;
    FUN_1000f7830(&DAT_100fafdf8,&DAT_100c2e830);
    puVar7 = &DAT_100fafe00;
    local_d0 = lVar11;
    FUN_100155c48(&DAT_100fafe00,&DAT_100fafdf8,&DAT_100c2e830);
    Swift::SetAlgebra::_init(lVar9,local_80,puVar8,puVar7,DVar2.unknown,puVar6);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
    __Block_release(aBlock);
    _swift_release_n(puVar4,2);
    (**(code **)(local_d0 + 8))(lVar9,DVar2.unknown);
    (**(code **)(local_c8 + 8))(qos.unknown,local_c0);
    puVar4 = local_90;
  }
  _swift_release(puVar4);
  return;
}



/* Address: 0x1001734c0 | FUN_1001734c0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001734c0(void)

{
  long unaff_x20;
  
  _SCNetworkReachabilitySetCallback(*(undefined8 *)(unaff_x20 + 0x38),0,0);
  _SCNetworkReachabilitySetDispatchQueue(*(undefined8 *)(unaff_x20 + 0x38),0);
  *(undefined1 *)(unaff_x20 + 0x30) = 0;
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10017352c | FUN_10017352c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10017352c(void)

{
  return ZEXT816(0x100fb2d78);
}



/* Address: 0x10017354c | FUN_10017354c */

void FUN_10017354c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100173ea8(param_2,param_3);
  return;
}



/* Address: 0x100173558 | _swift_retain */

void _swift_retain(void)

{
  _swift_retain();
  return;
}



/* Address: 0x10017355c | _swift_release */

void _swift_release(void)

{
  _swift_release();
  return;
}



/* Address: 0x100173560 | FUN_100173560 */

NSString * FUN_100173560(long param_1,undefined8 param_2)

{
  long lVar1;
  NSString *pNVar2;
  
  lVar1 = param_1;
  _swift_retain();
  lVar1 = lVar1 + 0x10;
  _swift_weakLoadStrong();
  if (lVar1 == 0) {
    param_2 = 0xe300000000000000;
  }
  else if (*(char *)(lVar1 + 0x54) == '\x01') {
    _swift_release();
    param_2 = 0x8000000100d94dc0;
  }
  else {
    FUN_100173618(*(undefined4 *)(lVar1 + 0x50));
    _swift_release(lVar1);
  }
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  _swift_release(param_1);
  return pNVar2;
}



/* Address: 0x100173614 | thunk_FUN_100173560 */

NSString * thunk_FUN_100173560(long param_1,undefined8 param_2)

{
  long lVar1;
  NSString *pNVar2;
  
  lVar1 = param_1;
  _swift_retain();
  lVar1 = lVar1 + 0x10;
  _swift_weakLoadStrong();
  if (lVar1 == 0) {
    param_2 = 0xe300000000000000;
  }
  else if (*(char *)(lVar1 + 0x54) == '\x01') {
    _swift_release();
    param_2 = 0x8000000100d94dc0;
  }
  else {
    FUN_100173618(*(undefined4 *)(lVar1 + 0x50));
    _swift_release(lVar1);
  }
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  _swift_release(param_1);
  return pNVar2;
}



/* Address: 0x100173618 | FUN_100173618 */

undefined1  [16] FUN_100173618(ulong param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 auVar9 [16];
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  
  pcVar1 = (char *)0x2d;
  if ((param_1 & 2) != 0) {
    pcVar1 = (char *)0x52;
  }
  pcVar2 = (char *)0x2d;
  if ((param_1 & 4) != 0) {
    pcVar2 = (char *)0x63;
  }
  pcVar3 = (char *)0x2d;
  if ((param_1 & 1) != 0) {
    pcVar3 = (char *)0x74;
  }
  pcVar4 = (char *)0x2d;
  if ((param_1 & 0x10) != 0) {
    pcVar4 = &DAT_00000069;
  }
  pcVar5 = (char *)0x2d;
  if ((param_1 & 8) != 0) {
    pcVar5 = (char *)0x43;
  }
  pcVar6 = (char *)0x2d;
  if ((param_1 & 0x20) != 0) {
    pcVar6 = (char *)0x44;
  }
  pcVar7 = (char *)0x2d;
  if ((param_1 & 0x10000) != 0) {
    pcVar7 = (char *)0x6c;
  }
  pcVar8 = (char *)0x2d;
  if ((param_1 & 0x20000) != 0) {
    pcVar8 = (char *)0x64;
  }
  Swift::_StringGuts::grow(0x13,param_2);
  _swift_bridgeObjectRelease(0xe000000000000000);
  SVar10.bridgeObject = (void *)0xe100000000000000;
  SVar10.str = pcVar1;
  SVar19.bridgeObject = param_4;
  SVar19.str = param_3;
  Swift::String::append(SVar10,SVar19);
  SVar11.bridgeObject = (void *)0xe100000000000000;
  SVar11.str = (char *)0x20;
  SVar20.bridgeObject = param_4;
  SVar20.str = param_3;
  Swift::String::append(SVar11,SVar20);
  SVar12.bridgeObject = (void *)0xe100000000000000;
  SVar12.str = pcVar2;
  SVar21.bridgeObject = param_4;
  SVar21.str = param_3;
  Swift::String::append(SVar12,SVar21);
  SVar13.bridgeObject = (void *)0xe100000000000000;
  SVar13.str = pcVar3;
  SVar22.bridgeObject = param_4;
  SVar22.str = param_3;
  Swift::String::append(SVar13,SVar22);
  SVar14.bridgeObject = (void *)0xe100000000000000;
  SVar14.str = pcVar4;
  SVar23.bridgeObject = param_4;
  SVar23.str = param_3;
  Swift::String::append(SVar14,SVar23);
  SVar15.bridgeObject = (void *)0xe100000000000000;
  SVar15.str = pcVar5;
  SVar24.bridgeObject = param_4;
  SVar24.str = param_3;
  Swift::String::append(SVar15,SVar24);
  SVar16.bridgeObject = (void *)0xe100000000000000;
  SVar16.str = pcVar6;
  SVar25.bridgeObject = param_4;
  SVar25.str = param_3;
  Swift::String::append(SVar16,SVar25);
  SVar17.bridgeObject = (void *)0xe100000000000000;
  SVar17.str = pcVar7;
  SVar26.bridgeObject = param_4;
  SVar26.str = param_3;
  Swift::String::append(SVar17,SVar26);
  SVar18.bridgeObject = (void *)0xe100000000000000;
  SVar18.str = pcVar8;
  SVar27.bridgeObject = param_4;
  SVar27.str = param_3;
  Swift::String::append(SVar18,SVar27);
  auVar9._8_8_ = 0xe100000000000000;
  auVar9._0_8_ = 0x2d;
  return auVar9;
}



/* Address: 0x100173774 | FUN_100173774 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100173774(ulong *param_1)

{
  char cVar1;
  ulong *puVar2;
  ulong uVar3;
  int local_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_3c = 0;
  puVar2 = param_1;
  _swift_unownedRetainStrong();
  uVar3 = puVar2[7];
  _swift_release(param_1);
  _SCNetworkReachabilityGetFlags(uVar3,&local_3c);
  _swift_unownedRetainStrong(param_1);
  if ((int)uVar3 == 0) {
    _SCNetworkReachabilitySetCallback(param_1[7],0,0);
    _SCNetworkReachabilitySetDispatchQueue(param_1[7],0);
    *(undefined1 *)(param_1 + 6) = 0;
    _swift_release();
    _SCError();
    uVar3 = (ulong)param_1 & 0xffffffff;
    FUN_100173a64();
    _swift_allocError(&DAT_100eba100,param_1,0,0);
    *param_1 = uVar3;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    *(undefined1 *)((long)param_1 + 0x14) = 4;
    _swift_willThrow();
  }
  else {
    uVar3 = param_1[10];
    cVar1 = *(char *)((long)param_1 + 0x54);
    *(int *)(param_1 + 10) = local_3c;
    *(undefined1 *)((long)param_1 + 0x54) = 0;
    if ((cVar1 == '\x01') || (local_3c != (int)uVar3)) {
      FUN_100173130();
    }
    _swift_release(param_1);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1001738b0 | FUN_1001738b0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100173938) */

void FUN_1001738b0(long param_1)

{
  uint uVar1;
  ID self;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x54) == '\x01') {
      _swift_unownedRetainStrong(param_1);
      _swift_unownedRetain();
      _swift_unownedRetain();
      _swift_release();
      (extension_Dispatch)::__C::OS_dispatch_queue::_sync();
      _swift_unownedRelease(param_1);
      _swift_unownedRelease(param_1);
    }
    uVar1 = *(uint *)(param_1 + 0x50);
    if ((*(char *)(param_1 + 0x54) == '\x01' || (uVar1 & 2) == 0) ||
       (((uVar1 & 0x10) != 0 || (uVar1 & 0x28) == 0) && (uVar1 & 4) != 0)) {
      lVar2 = 0x18;
    }
    else {
      lVar2 = 0x10;
    }
    uVar3 = *(undefined8 *)(param_1 + lVar2);
    _swift_retain(uVar3);
    FUN_100134bdc(param_1);
    _swift_release(uVar3);
    self = *(ID *)(param_1 + 0x28);
    if (DAT_100fb2f58 != -1) {
      _swift_once(&DAT_100fb2f58,FUN_1001730fc);
    }
    objc_stub::postNotificationName_object_(self,DAT_101057350,param_1);
    _swift_release(param_1);
  }
  return;
}



/* Address: 0x100173a20 | FUN_100173a20 */

void FUN_100173a20(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100173a44 | FUN_100173a44 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100173a44(void)

{
  return ZEXT816(0x100fb2ed8);
}



/* Address: 0x100173a64 | FUN_100173a64 */

void FUN_100173a64(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb2f50 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c301d0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c301d0,&DAT_100eba100);
  DAT_100fb2f50 = pTVar1;
  return;
}



/* Address: 0x100173aa4 | FUN_100173aa4 */

void FUN_100173aa4(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x100173ac8 | FUN_100173ac8 */

void FUN_100173ac8(void)

{
  FUN_1001738b0();
  return;
}



/* Address: 0x100173ad0 | FUN_100173ad0 */

void FUN_100173ad0(long param_1,long param_2)

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



/* Address: 0x100173ae4 | FUN_100173ae4 */

void FUN_100173ae4(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100173aec | FUN_100173aec */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 * FUN_100173aec(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  AutoreleaseFrequency AVar4;
  undefined7 extraout_var;
  Attributes AVar5;
  DispatchQoS DVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ID IVar11;
  undefined *puVar12;
  OS_dispatch_queue *pOVar13;
  OS_dispatch_queue *pOVar14;
  undefined8 *puVar15;
  long lVar16;
  long extraout_x8;
  undefined1 *puVar17;
  long extraout_x8_00;
  Attributes attributes;
  long extraout_x8_01;
  long lVar18;
  String label;
  undefined1 auStack_e0 [8];
  char *local_d8;
  OS_dispatch_queue *pOStack_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 *local_b8;
  undefined *local_80;
  undefined2 local_78;
  undefined6 uStack_76;
  undefined2 local_70;
  undefined6 uStack_6e;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  AVar4 = (extension_Dispatch)::__C::OS_dispatch_queue::AutoreleaseFrequency::typeMetadataAccessor()
  ;
  lVar16 = *(long *)(CONCAT71(extraout_var,AVar4.value) + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar16 + 0x40));
  puVar17 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  AVar5 = Attributes::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(AVar5.unknown + -8) + 0x40));
  attributes.unknown = puVar17 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar6 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar18 = *(long *)(DVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar18 + 0x40));
  uStack_6e = 0;
  uStack_76 = 0;
  local_70 = 0;
  local_78 = 0x210;
  puVar7 = (undefined8 *)0x0;
  _SCNetworkReachabilityCreateWithAddress(0,&local_78);
  if (puVar7 == (undefined8 *)0x0) {
    uVar1 = CONCAT62(uStack_76,local_78);
    uVar2 = CONCAT62(uStack_6e,local_70);
    _SCError();
    puVar15 = puVar7;
    FUN_100173a64();
    _swift_allocError(&DAT_100eba100,puVar15,0,0);
    *puVar15 = uVar1;
    puVar15[1] = uVar2;
    *(int *)(puVar15 + 2) = (int)puVar7;
    *(undefined1 *)((long)puVar15 + 0x14) = 0;
    _swift_willThrow();
    (**(code **)(lVar18 + 8))(param_1,DVar6.unknown);
  }
  else {
    puVar8 = puVar7;
    FUN_10017352c();
    _swift_allocObject();
    puVar9 = &DAT_100fb2f60;
    local_b8 = param_3;
    FUN_1000f7830(&DAT_100fb2f60,&DAT_100c302b0);
    puVar12 = puVar9;
    local_c0 = param_2;
    _swift_allocObject();
    puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
    puVar10 = PTR___swiftEmptyArrayStorage_100eae0d8;
    local_c8 = CONCAT71(extraout_var,AVar4.value);
    FUN_1000f8c98();
    *(undefined **)(puVar12 + 0x10) = puVar10;
    puVar10 = &_OBJC_CLASS___NSLock;
    _objc_allocWithZone();
    IVar11 = objc_stub::init((ID)puVar10);
    *(undefined8 *)(puVar12 + 0x20) = 0;
    *(undefined8 *)(puVar12 + 0x28) = 0;
    *(ID *)(puVar12 + 0x18) = IVar11;
    puVar8[2] = puVar12;
    _swift_allocObject(puVar9,0x30,7);
    puVar12 = puVar3;
    FUN_1000f8c98();
    *(undefined **)(puVar9 + 0x10) = puVar12;
    puVar12 = &_OBJC_CLASS___NSLock;
    _objc_allocWithZone();
    IVar11 = objc_stub::init((ID)puVar12);
    *(undefined8 *)(puVar9 + 0x20) = 0;
    *(undefined8 *)(puVar9 + 0x28) = 0;
    *(ID *)(puVar9 + 0x18) = IVar11;
    puVar8[3] = puVar9;
    *(undefined1 *)(puVar8 + 4) = 1;
    IVar11 = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
    puVar8[5] = IVar11;
    *(undefined1 *)(puVar8 + 6) = 0;
    *(undefined4 *)(puVar8 + 10) = 0;
    *(undefined1 *)((long)puVar8 + 0x54) = 1;
    *(undefined1 *)((long)puVar8 + 0x21) = 1;
    puVar8[7] = puVar7;
    pOVar13 = (OS_dispatch_queue *)0x0;
    FUN_1000f8a74();
    local_d8 = "unavailable flags";
    pOStack_d0 = pOVar13;
    (**(code **)(lVar18 + 0x10))
              (attributes.unknown + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0),param_1,
               DVar6.unknown);
    local_80 = puVar3;
    puVar7 = &DAT_100fae2f0;
    FUN_100003a00(&DAT_100fae2f0,PTR__typeMetadataAccessor_100eae788,
                  PTR__Dispatch__Attributes_>Swift__SetAlgebra_100eae798);
    puVar9 = &DAT_100fae2f8;
    FUN_1000f7830(&DAT_100fae2f8,&DAT_100c2db90);
    puVar15 = &DAT_100fae300;
    FUN_100155c48(&DAT_100fae300,&DAT_100fae2f8,&DAT_100c2db90);
    Swift::SetAlgebra::_init(attributes.unknown,&local_80,puVar9,puVar15,AVar5.unknown,puVar7);
    (**(code **)(lVar16 + 0x68))
              (puVar17,*(undefined4 *)
                        PTR___enum_case_for__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_inherit__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_Type___>__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_100eae7d0
               ,local_c8);
    label.bridgeObject = (void *)((ulong)local_d8 | 0x8000000000000000);
    label.str = (char *)0xd00000000000001e;
    pOVar14 = (extension_Dispatch)::__C::OS_dispatch_queue::___allocating_init
                        (pOStack_d0,label,
                         (DispatchQoS)
                         (attributes.unknown + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0)),
                         attributes,(AutoreleaseFrequency)(__int8)puVar17);
    (**(code **)(lVar18 + 8))(param_1,DVar6.unknown);
    puVar8[8] = pOVar14;
    puVar8[9] = local_b8;
    param_3 = puVar8;
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100173ea8 | FUN_100173ea8 */

void FUN_100173ea8(int param_1,long param_2)

{
  int iVar1;
  char cVar2;
  long lVar3;
  
  if (param_2 != 0) {
    _swift_retain(param_2);
    lVar3 = param_2 + 0x10;
    _swift_weakLoadStrong();
    if (lVar3 != 0) {
      iVar1 = *(int *)(lVar3 + 0x50);
      cVar2 = *(char *)(lVar3 + 0x54);
      *(int *)(lVar3 + 0x50) = param_1;
      *(undefined1 *)(lVar3 + 0x54) = 0;
      if (cVar2 == '\x01' || param_1 != iVar1) {
        FUN_100173130();
      }
      _swift_release(param_2);
      param_2 = lVar3;
    }
    _swift_release(param_2);
    return;
  }
  return;
}



/* Address: 0x100173f24 | thunk_FUN_100172f20 */

void thunk_FUN_100172f20(void)

{
  FUN_100172f20();
  return;
}



/* Address: 0x100173f28 | FUN_100173f28 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100173f58 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100173f28(long param_1)

{
  _ArrayBuffer<undefined> _Var1;
  undefined *self;
  ID IVar2;
  
  FUN_100174940();
  _swift_allocObject();
  _Var1 = Swift::Array<undefined>::_allocateBufferUninitialized
                    (param_1,PTR___type_metadata_for_Swift_UInt8_100eadcd0);
  *(undefined8 *)(_Var1.unknown + 0x10) = 10;
  *(undefined8 *)(_Var1.unknown + 0x20) = 0;
  *(undefined2 *)(_Var1.unknown + 0x28) = 0;
  *(undefined **)(param_1 + 0x10) = _Var1.unknown;
  *(undefined8 *)(param_1 + 0x18) = 0;
  self = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar2 = objc_stub::init((ID)self);
  *(ID *)(param_1 + 0x20) = IVar2;
  DAT_101057358 = param_1;
  return;
}



/* Address: 0x100173f94 | FUN_100173f94 */

void FUN_100173f94(undefined8 param_1)

{
  undefined *puVar1;
  UUID UVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  code *pcVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  ID self;
  long lVar8;
  
  puVar1 = &DAT_100fafc20;
  FUN_1000f7830(&DAT_100fafc20,&DAT_100c2e758);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar1 + -8) + 0x40));
  puVar5 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar7 = (long)puVar5 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar6 = lVar7 - extraout_x12_00;
  UVar2 = Foundation::UUID::typeMetadataAccessor();
  lVar8 = *(long *)(UVar2.unknown + -8);
  (**(code **)(lVar8 + 0x38))(lVar6,1,1,UVar2.unknown);
  self = *(ID *)(unaff_x20 + 0x20);
  objc_stub::lock(self);
  FUN_100174104(lVar7);
  FUN_100174a94(lVar7,lVar6);
  objc_stub::unlock(self);
  FUN_100174ae4(lVar6,puVar5);
  pcVar4 = *(code **)(lVar8 + 0x30);
  puVar3 = puVar5;
  (*pcVar4)(puVar5,1,UVar2.unknown);
  if ((int)puVar3 == 1) {
    Foundation::UUID::init();
    puVar3 = puVar5;
    (*pcVar4)(puVar5,1,UVar2.unknown);
    if ((int)puVar3 != 1) {
      FUN_100174b34(puVar5);
    }
  }
  else {
    (**(code **)(lVar8 + 0x20))(param_1,puVar5,UVar2.unknown);
  }
  FUN_100174b34(lVar6);
  return;
}



/* Address: 0x100174104 | FUN_100174104 */

/* WARNING: Type propagation algorithm not settling */

void FUN_100174104(undefined8 param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined2 uVar4;
  long lVar5;
  code *pcVar6;
  Date DVar7;
  Date DVar8;
  ulong *puVar9;
  ulong uVar10;
  undefined *puVar11;
  UUID UVar12;
  undefined *puVar13;
  undefined1 *puVar14;
  uint uVar15;
  long extraout_x8;
  ulong uVar16;
  long unaff_x20;
  undefined8 uVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  undefined8 uVar22;
  double dVar23;
  tuple16 uuid;
  byte bStack_d0;
  undefined4 uStack_cf;
  undefined2 uStack_cb;
  undefined1 auStack_c9 [9];
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  undefined *local_b0;
  undefined *local_a8 [3];
  ulong local_90;
  undefined1 auStack_88 [16];
  long local_78;
  
  local_78 = *(long *)PTR____stack_chk_guard_100ea82f0;
  DVar7 = Foundation::Date::typeMetadataAccessor();
  lVar18 = *(long *)(DVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar18 + 0x40));
  lVar5 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar8 = Foundation::Date::init();
  dVar23 = Foundation::Date::get_timeIntervalSince1970(DVar8);
  (**(code **)(lVar18 + 8))(auStack_c0 + lVar5,DVar7.unknown);
  puVar13 = PTR___swiftEmptyArrayStorage_100eae0d8;
  dVar23 = dVar23 * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(dVar23)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100174598);
    (*pcVar6)();
  }
  if (dVar23 <= -1.0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10017459c);
    (*pcVar6)();
  }
  if (1.8446744073709552e+19 <= dVar23) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1001745a0);
    (*pcVar6)();
  }
  uVar19 = (ulong)dVar23;
  local_b0 = PTR___swiftEmptyArrayStorage_100eae0d8;
  uVar16 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
  uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
  local_90 = uVar16 >> 0x20 | uVar16 << 0x20;
  puVar9 = &local_90;
  puVar14 = auStack_88;
  FUN_10017499c(puVar9);
  uVar16 = (ulong)puVar14 >> 0x30 & 0xff;
  lVar18 = 0;
  if (5 < uVar16) {
    lVar18 = uVar16 - 6;
  }
  __Foundation_Data__Representation_subscript_getter____Swift_Range<Swift_Int>___>_Foundation_Data
            (lVar18,uVar16,puVar9,(ulong)puVar14 & 0xffffffffffffff);
  FUN_1001037b4();
  FUN_1001745c0(lVar18,uVar16);
  if (*(ulong *)(unaff_x20 + 0x18) == uVar19) {
    _swift_beginAccess(unaff_x20 + 0x10,&local_90,0,0);
    uVar15 = 1;
    lVar20 = 0x29;
    while( true ) {
      while (uVar15 == 0) {
        if (lVar20 == 0x20) goto LAB_100174420;
        lVar20 = lVar20 + -1;
        uVar15 = 0;
      }
      uVar19 = *(ulong *)(unaff_x20 + 0x10);
      if (*(ulong *)(uVar19 + 0x10) < lVar20 - 0x1fU) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100174590);
        (*pcVar6)();
      }
      bVar3 = *(byte *)(uVar19 + lVar20);
      _swift_beginAccess(unaff_x20 + 0x10,local_a8,0x21,0);
      uVar10 = uVar19;
      _swift_isUniquelyReferenced_nonNull_native();
      *(ulong *)(unaff_x20 + 0x10) = uVar19;
      if ((uVar10 & 1) == 0) {
        FUN_100174988();
      }
      if (*(ulong *)(uVar19 + 0x10) < lVar20 - 0x1fU) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100174594);
        (*pcVar6)();
      }
      uVar15 = bVar3 + 1;
      *(char *)(uVar19 + lVar20) = (char)uVar15;
      *(ulong *)(unaff_x20 + 0x10) = uVar19;
      _swift_endAccess(local_a8);
      if (lVar20 == 0x20) break;
      uVar15 = uVar15 >> 8;
      lVar20 = lVar20 + -1;
    }
  }
  else {
    *(ulong *)(unaff_x20 + 0x18) = uVar19;
    uVar17 = *(undefined8 *)PTR__kSecRandomDefault_100eaa508;
    _swift_beginAccess(unaff_x20 + 0x10,&local_90,1,0);
    uVar21 = *(ulong *)(unaff_x20 + 0x10);
    uVar22 = *(undefined8 *)(uVar21 + 0x10);
    _swift_beginAccess(unaff_x20 + 0x10,local_a8,0x21,0);
    uVar19 = uVar21;
    _swift_isUniquelyReferenced_nonNull_native();
    *(ulong *)(unaff_x20 + 0x10) = uVar21;
    uVar10 = uVar21;
    if ((uVar19 & 1) == 0) {
      uVar10 = 0;
      FUN_1001060d0(0,uVar22,0,uVar21);
    }
    *(ulong *)(unaff_x20 + 0x10) = uVar10;
    _swift_bridgeObjectRetain(uVar10);
    _SecRandomCopyBytes(uVar17,uVar22,uVar10 + 0x20);
    _swift_endAccess(local_a8);
    _swift_bridgeObjectRelease(uVar10);
    if ((int)uVar17 != 0) {
      local_a8[0] = puVar13;
      lVar20 = 10;
      FUN_10010faf0(0,10,0);
      do {
        puVar13 = local_a8[0];
        local_b8 = 0;
        _swift_stdlib_random(&local_b8,8);
        uVar17 = local_b8;
        uVar19 = *(ulong *)(puVar13 + 0x10);
        local_a8[0] = puVar13;
        if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar19) {
          FUN_10010faf0(1 < *(ulong *)(puVar13 + 0x18),uVar19 + 1,1);
        }
        *(ulong *)(local_a8[0] + 0x10) = uVar19 + 1;
        local_a8[0][uVar19 + 0x20] = (char)uVar17;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      uVar17 = *(undefined8 *)(unaff_x20 + 0x10);
      *(undefined **)(unaff_x20 + 0x10) = local_a8[0];
      _swift_bridgeObjectRelease(uVar17);
    }
  }
LAB_100174420:
  _swift_beginAccess(unaff_x20 + 0x10,local_a8,0,0);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_100174824();
  puVar13 = local_b0;
  if (*(ulong *)(local_b0 + 0x10) < 7) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1001745a4);
    (*pcVar6)();
  }
  bVar3 = local_b0[0x26];
  puVar11 = local_b0;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar11 & 1) == 0) {
    FUN_100174988();
  }
  uVar19 = *(ulong *)(puVar13 + 0x10);
  if (uVar19 < 7) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1001745b8);
    (*pcVar6)();
  }
  puVar13[0x26] = bVar3 & 0xf | 0x70;
  if (uVar19 < 9) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1001745bc);
    (*pcVar6)();
  }
  bVar3 = puVar13[0x28] & 0x3f | 0x80;
  puVar13[0x28] = bVar3;
  if (uVar19 == 0x10) {
    uVar1 = *(undefined4 *)(puVar13 + 0x29);
    uVar4 = *(undefined2 *)(puVar13 + 0x2d);
    uVar2 = puVar13[0x21];
    uuid._ = 0;
    uuid._ = 0;
    uuid._ = 0;
    uuid._ = 0;
    uuid._ = 0;
    uuid._ = 0;
    uuid._ = 0;
    uuid._ = puVar13[0x20];
    auStack_c9[lVar5] = puVar13[0x2f];
    *(undefined2 *)((long)&uStack_cb + lVar5) = uVar4;
    *(undefined4 *)((long)&uStack_cf + lVar5) = uVar1;
    (&bStack_d0)[lVar5] = bVar3;
    uuid._ = uVar2;
    uuid._ = 0;
    uuid._0 = 0;
    uuid._1 = 0;
    uuid._2 = 0;
    uuid._3 = 0;
    uuid._4 = 0;
    uuid._5 = 0;
    Foundation::UUID::init(uuid);
    FUN_10003bf2c(lVar18,uVar16);
    UVar12 = Foundation::UUID::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar12.unknown + -8) + 0x38))(param_1,0,1,UVar12.unknown);
  }
  else {
    UVar12 = Foundation::UUID::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar12.unknown + -8) + 0x38))(param_1,1,1,UVar12.unknown);
    FUN_10003bf2c(lVar18,uVar16);
  }
  _swift_bridgeObjectRelease(puVar13);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1001745c0 | FUN_1001745c0 */

void FUN_1001745c0(long param_1,ulong param_2)

{
  uint uVar1;
  code *pcVar2;
  Iterator IVar3;
  Iterator IVar4;
  ulong uVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  long extraout_x8;
  ulong uVar9;
  ulong *unaff_x20;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  tuple2 tVar14;
  undefined1 auStack_70 [14];
  undefined1 local_62;
  char local_61;
  
  IVar3 = Foundation::Data::Iterator::typeMetadataAccessor();
  lVar12 = *(long *)(IVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar12 + 0x40));
  uVar1 = (uint)(param_2 >> 0x20);
  uVar7 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar7 == 0) {
      uVar13 = param_2 >> 0x30 & 0xff;
    }
    else {
      iVar8 = (int)((ulong)param_1 >> 0x20);
      if (SBORROW4(iVar8,(int)param_1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100174824);
        (*pcVar2)();
      }
      uVar13 = (ulong)(iVar8 - (int)param_1);
    }
  }
  else {
    uVar13 = 0;
    if ((uVar7 == 2) &&
       (uVar13 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10),
       SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10)))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100174654);
      (*pcVar2)();
    }
  }
  uVar10 = *unaff_x20;
  lVar11 = *(long *)(uVar10 + 0x10);
  if (SCARRY8(lVar11,uVar13)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100174744);
    (*pcVar2)();
  }
  uVar5 = uVar10;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)uVar5 == 0) ||
     (uVar9 = *(ulong *)(uVar10 + 0x18) >> 1, (long)uVar9 < (long)(lVar11 + uVar13))) {
    FUN_1001060d0();
    uVar9 = *(ulong *)(uVar5 + 0x18) >> 1;
    uVar10 = uVar5;
  }
  lVar11 = *(long *)(uVar10 + 0x10);
  tVar14 = Foundation::Data::_copyContents
                     ((UnsafeMutableBufferPointer<__int8>)
                      (auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)),
                      (undefined *)(uVar10 + lVar11 + 0x20));
  IVar4 = tVar14._.unknown;
  FUN_10003bf2c(param_1,param_2);
  if ((long)IVar4.unknown < (long)uVar13) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100174748);
    (*pcVar2)();
  }
  if (0 < (long)IVar4.unknown) {
    if (SCARRY8(*(long *)(uVar10 + 0x10),(long)IVar4.unknown)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100174820);
      (*pcVar2)();
    }
    *(undefined **)(uVar10 + 0x10) = IVar4.unknown + *(long *)(uVar10 + 0x10);
  }
  if (IVar4.unknown == (undefined *)(uVar9 - lVar11)) {
    lVar11 = *(long *)(uVar10 + 0x10);
    FUN_100174a50();
    Swift::IteratorProtocol::_next();
    cVar6 = local_61;
    while (cVar6 != '\x01') {
      uVar13 = *(ulong *)(uVar10 + 0x18) >> 1;
      if ((long)uVar13 < lVar11 + 1) {
        uVar5 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
        FUN_1001060d0(uVar5,lVar11 + 1,1,uVar10);
        uVar13 = *(ulong *)(uVar5 + 0x18) >> 1;
        uVar10 = uVar5;
        cVar6 = local_61;
      }
      if ((cVar6 != '\x01') && (lVar11 < (long)uVar13)) {
        do {
          *(undefined1 *)(uVar10 + 0x20 + lVar11) = local_62;
          lVar11 = lVar11 + 1;
          Swift::IteratorProtocol::_next();
          cVar6 = local_61;
        } while (local_61 != '\x01' && lVar11 < (long)uVar13);
      }
      *(long *)(uVar10 + 0x10) = lVar11;
    }
  }
  (**(code **)(lVar12 + 8))(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),IVar3.unknown);
  *unaff_x20 = uVar10;
  return;
}



/* Address: 0x100174824 | FUN_100174824 */

void FUN_100174824(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  ulong uVar5;
  long lVar6;
  
  uVar5 = *(ulong *)(param_1 + 0x10);
  lVar4 = *unaff_x20;
  lVar6 = *(long *)(lVar4 + 0x10);
  if (SCARRY8(lVar6,uVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100174908);
    (*pcVar1)();
  }
  lVar2 = lVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)lVar2 == 0) ||
     (uVar3 = *(ulong *)(lVar4 + 0x18) >> 1, (long)uVar3 < (long)(lVar6 + uVar5))) {
    FUN_1001060d0();
    uVar3 = *(ulong *)(lVar2 + 0x18) >> 1;
    lVar6 = *(long *)(param_1 + 0x10);
    lVar4 = lVar2;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x10);
  }
  if (lVar6 == 0) {
    _swift_bridgeObjectRelease(param_1);
    if (uVar5 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10017490c);
      (*pcVar1)();
    }
  }
  else {
    if (uVar3 - *(long *)(lVar4 + 0x10) < uVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100174910);
      (*pcVar1)();
    }
    _memcpy((void *)(lVar4 + *(long *)(lVar4 + 0x10) + 0x20),(void *)(param_1 + 0x20),uVar5);
    _swift_bridgeObjectRelease(param_1);
    if (uVar5 != 0) {
      if (SCARRY8(*(long *)(lVar4 + 0x10),uVar5)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100174914);
        (*pcVar1)();
      }
      *(ulong *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + uVar5;
    }
  }
  *unaff_x20 = lVar4;
  return;
}



/* Address: 0x100174914 | FUN_100174914 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100174914(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100174940 | FUN_100174940 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100174940(void)

{
  return ZEXT816(0x100fb2fa8);
}



/* Address: 0x100174960 | FUN_100174960 */

void FUN_100174960(long param_1)

{
  FUN_10010540c(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x100174974 | FUN_100174974 */

void FUN_100174974(long param_1)

{
  FUN_100105994(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x100174988 | FUN_100174988 */

void FUN_100174988(long param_1)

{
  FUN_1001060d0(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x10017499c | FUN_10017499c */

void FUN_10017499c(void *param_1,void *param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  undefined1 local_1a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar1 = 0;
  if (param_1 != (void *)0x0) {
    uVar1 = (long)param_2 - (long)param_1;
  }
  if ((long)uVar1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100174a48);
    (*pcVar2)();
  }
  if (0xff < uVar1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100174a4c);
    (*pcVar2)();
  }
  local_28 = 0;
  local_1a = (undefined1)uVar1;
  local_1c = 0;
  local_20 = 0;
  if ((param_1 != (void *)0x0) && (param_2 != param_1)) {
    _memcpy(&local_28,param_1,(long)param_2 - (long)param_1);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(local_28);
  }
  return;
}



/* Address: 0x100174a50 | FUN_100174a50 */

void FUN_100174a50(void)

{
  Iterator IVar1;
  undefined *puVar2;
  
  if (DAT_100fb3058 != (undefined *)0x0) {
    return;
  }
  IVar1 = Foundation::Data::Iterator::typeMetadataAccessor();
  puVar2 = PTR_Foundation__Foundation__Data__Iterator_>Swift__IteratorProtocol_100ea72d8;
  _swift_getWitnessTable
            (PTR_Foundation__Foundation__Data__Iterator_>Swift__IteratorProtocol_100ea72d8,
             IVar1.unknown);
  DAT_100fb3058 = puVar2;
  return;
}



/* Address: 0x100174a94 | FUN_100174a94 */

undefined8 FUN_100174a94(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fafc20;
  FUN_1000f7830(&DAT_100fafc20,&DAT_100c2e758);
  (**(code **)(*(long *)(puVar1 + -8) + 0x28))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100174ae4 | FUN_100174ae4 */

undefined8 FUN_100174ae4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fafc20;
  FUN_1000f7830(&DAT_100fafc20,&DAT_100c2e758);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100174b34 | FUN_100174b34 */

undefined8 FUN_100174b34(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fafc20;
  FUN_1000f7830(&DAT_100fafc20,&DAT_100c2e758);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}


