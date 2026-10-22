/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100403f80 | FUN_100403f80 */

void FUN_100403f80(void)

{
  long unaff_x20;
  
  FUN_10040380c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100403f88 | FUN_100403f88 */

void FUN_100403f88(long param_1,long param_2)

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



/* Address: 0x100403f9c | FUN_100403f9c */

void FUN_100403f9c(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100403fa4 | FUN_100403fa4 */

void FUN_100403fa4(void)

{
  undefined *puVar1;
  
  if (DAT_100fc4db0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift____int64_>Swift__FixedWidthInteger_100eac740;
  _swift_getWitnessTable
            (PTR_Swift____int64_>Swift__FixedWidthInteger_100eac740,
             PTR___type_metadata_for_Swift_Int_100eac6f8);
  DAT_100fc4db0 = puVar1;
  return;
}



/* Address: 0x100403fe4 | thunk_FUN_100403f5c */

void thunk_FUN_100403f5c(void)

{
  FUN_100403f5c();
  return;
}



/* Address: 0x100403fe8 | thunk_FUN_100403284 */

void thunk_FUN_100403284(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c47568,param_1);
  return;
}



/* Address: 0x100403fec | thunk_FUN_1001a9714 */

void thunk_FUN_1001a9714(void)

{
  _swift_allocateGenericValueMetadata();
  return;
}



/* Address: 0x100403ff0 | FUN_100403ff0 */

void FUN_100403ff0(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100404000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x10))(param_2,param_1);
  return;
}



/* Address: 0x100404004 | _TtC18PasteNotifications35UserNotificationCenterDelegateProxy::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC18PasteNotifications35UserNotificationCenterDelegateProxy::init(ID param_1,SEL param_2)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("PasteNotifications.UserNotificationCenterDelegateProxy",0x36,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100404030);
  (*pcVar1)();
}



/* Address: 0x100404030 | _TtC18PasteNotifications35UserNotificationCenterDelegateProxy::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void _TtC18PasteNotifications35UserNotificationCenterDelegateProxy::_cxx_destruct
               (ID param_1,SEL param_2)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + delegates));
  return;
}



/* Address: 0x100404040 | FUN_100404040 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100404040(void)

{
  return ZEXT816(0x100f9bec0);
}



/* Address: 0x100404060 | FUN_100404060 */

void FUN_100404060(ID param_1)

{
  objc_stub::respondsToSelector_
            (param_1,"userNotificationCenter:willPresentNotification:withCompletionHandler:");
  return;
}



/* Address: 0x10040407c | FUN_10040407c */

void FUN_10040407c(ID param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  void *aBlock;
  undefined *local_70;
  undefined8 local_68;
  code *local_60;
  undefined *puStack_58;
  code *local_50;
  undefined *local_48;
  
  puVar2 = &DAT_100ed20e8;
  _swift_allocObject(&DAT_100ed20e8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  IVar3 = _objc_msgSend(param_1,"respondsToSelector:",
                        "userNotificationCenter:willPresentNotification:withCompletionHandler:");
  if ((IVar3 & 1) != 0) {
    local_50 = FUN_100134330;
    local_70 = PTR___NSConcreteStackBlock_100ea82a0;
    local_68 = 0x42000000;
    local_60 = FUN_100061d58;
    puStack_58 = &DAT_100ed2100;
    local_48 = puVar2;
    aBlock = __Block_copy(&local_70);
    _swift_retain(param_3);
    _swift_unknownObjectRetain(param_1);
    _swift_retain(puVar2);
    objc_stub::userNotificationCenter_willPresentNotification_withCompletionHandler_
              (param_1,param_4,param_5,aBlock);
    __Block_release(aBlock);
    puVar1 = local_48;
    _swift_unknownObjectRelease(param_1);
    _swift_release(puVar2);
    _swift_release(puVar1);
    return;
  }
  _swift_retain(param_3);
  _swift_release(puVar2);
  return;
}



/* Address: 0x1004041b0 | FUN_1004041b0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1004041b0(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined *param_7,undefined8 param_8,
                  undefined8 param_9,code *param_10)

{
  long lVar1;
  undefined *puVar2;
  DispatchQoS qos;
  DispatchWorkItemFlags flags;
  undefined *puVar3;
  undefined8 uVar4;
  DispatchTime DVar5;
  void *aBlock;
  DispatchQoS DVar6;
  undefined *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  OS_dispatch_queue *unaff_x20;
  DispatchTime DVar9;
  undefined auStack_120 [8];
  long local_118;
  undefined8 local_110;
  DispatchTime local_108;
  undefined *local_100;
  DispatchQoS local_f8;
  long local_f0;
  undefined *puStack_e8;
  DispatchWorkItemFlags local_e0;
  long local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  code *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  code *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined *local_88;
  undefined1 auStack_80 [32];
  
  local_110 = param_8;
  local_c8 = param_4;
  local_d0 = (undefined *)Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_d8 = *(long *)(local_d0 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_d8 + 0x40));
  puVar7 = auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_e0.unknown = puVar7;
  puStack_e8 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_f0 = *(long *)(puStack_e8 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_f0 + 0x40));
  local_f8.unknown = puVar7 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_100 = (undefined *)Dispatch::DispatchTime::typeMetadataAccessor();
  local_118 = *(long *)(local_100 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_118 + 0x40));
  DVar9.unknown =
       puVar7 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0) +
       -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_108.unknown = DVar9.unknown + -extraout_x12;
  FUN_100404b70();
  _swift_allocObject(param_7,0x48,7);
  uVar4 = local_c8;
  *(OS_dispatch_queue **)(param_7 + 0x10) = unaff_x20;
  *(undefined8 *)(param_7 + 0x18) = param_1;
  *(code **)(param_7 + 0x20) = param_2;
  *(undefined8 *)(param_7 + 0x28) = param_5;
  *(undefined8 *)(param_7 + 0x30) = param_6;
  *(undefined8 *)(param_7 + 0x38) = param_3;
  *(undefined8 *)(param_7 + 0x40) = local_c8;
  lVar1 = _TtC18PasteNotifications35UserNotificationCenterDelegateProxy::delegates;
  local_c0 = param_2;
  _swift_beginAccess(unaff_x20 +
                     _TtC18PasteNotifications35UserNotificationCenterDelegateProxy::delegates,
                     auStack_80,0,0);
  if (*(long *)(*(long *)(unaff_x20 + lVar1) + 0x10) == 0) {
    FUN_100402918(0);
    _swift_retain(uVar4);
    _swift_retain(param_6);
    _swift_retain(local_c0);
    DVar5.unknown = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(unaff_x20);
    Dispatch::DispatchTime::now(DVar5);
    DVar5.unknown = local_108.unknown;
    Dispatch::__infix(DVar9,0.5);
    puVar2 = local_100;
    local_c0 = *(code **)(local_118 + 8);
    (*local_c0)(DVar9.unknown,local_100);
    local_90 = local_110;
    local_b0 = PTR___NSConcreteStackBlock_100ea82a0;
    local_a8 = 0x42000000;
    local_a0 = thunk_FUN_100030410;
    uStack_98 = param_9;
    local_88 = param_7;
    aBlock = __Block_copy(&local_b0);
    DVar6.unknown = param_7;
    _swift_retain();
    qos.unknown = local_f8.unknown;
    DVar6 = Dispatch::DispatchQoS::get_unspecified(DVar6);
    local_b8 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1004058a8();
    puVar7 = &DAT_100fc4e00;
    FUN_1000037f0(&DAT_100fc4e00,&DAT_100c476c0);
    puVar8 = puVar7;
    FUN_100402980();
    puVar3 = local_d0;
    flags.unknown = local_e0.unknown;
    Swift::SetAlgebra::_init(local_e0.unknown,&local_b8,puVar7,puVar8,local_d0,DVar6.unknown);
    (extension_Dispatch)::__C::OS_dispatch_queue::_asyncAfter(DVar5,qos,flags);
    __Block_release(aBlock);
    _swift_release(param_7);
    (**(code **)(local_d8 + 8))(flags.unknown,puVar3);
    (**(code **)(local_f0 + 8))(qos.unknown,puStack_e8);
    (*local_c0)(DVar5.unknown,puVar2);
    param_7 = local_88;
  }
  else {
    _swift_retain(uVar4);
    _swift_retain(param_6);
    _swift_retain(local_c0);
    (*param_10)();
  }
  _swift_release(param_7);
  return;
}



/* Address: 0x100404524 | _TtC18PasteNotifications35UserNotificationCenterDelegateProxy::userNotificationCenter:willPresentNotification:withCompletionHandler: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

void _TtC18PasteNotifications35UserNotificationCenterDelegateProxy::
     userNotificationCenter_willPresentNotification_withCompletionHandler_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
  void *pvVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  pvVar1 = __Block_copy((void *)param_5);
  puVar2 = &DAT_100ed1f58;
  _swift_allocObject(&DAT_100ed1f58,0x18,7);
  *(void **)(puVar2 + 0x10) = pvVar1;
  puVar3 = &DAT_100ed1f80;
  _swift_allocObject(&DAT_100ed1f80,0x20,7);
  *(ID *)(puVar3 + 0x10) = param_3;
  *(ID *)(puVar3 + 0x18) = param_4;
  puVar4 = &DAT_100ed1fa8;
  _swift_allocObject(&DAT_100ed1fa8,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_100405dac;
  *(undefined **)(puVar4 + 0x18) = puVar2;
  _swift_retain(puVar2);
  FUN_1004041b0(FUN_100404060,0,FUN_100405dbc,puVar3,FUN_100405dc4,puVar4,&DAT_100ed1fd0,
                FUN_100405ec4,&DAT_100ed1fe8,FUN_100404ccc);
  _swift_release(puVar3);
  _swift_release(puVar4);
  _swift_release(puVar2);
  return;
}



/* Address: 0x100404684 | FUN_100404684 */

void FUN_100404684(ID param_1)

{
  objc_stub::respondsToSelector_
            (param_1,"userNotificationCenter:didReceiveNotificationResponse:withCompletionHandler:")
  ;
  return;
}



/* Address: 0x1004046a0 | FUN_1004046a0 */

void FUN_1004046a0(ID param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puVar3;
  void *aBlock;
  undefined *local_70;
  undefined8 local_68;
  code *local_60;
  undefined *puStack_58;
  code *local_50;
  undefined *local_48;
  
  puVar1 = &DAT_100ed1ee0;
  _swift_allocObject(&DAT_100ed1ee0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  IVar2 = _objc_msgSend(param_1,"respondsToSelector:",
                        "userNotificationCenter:didReceiveNotificationResponse:withCompletionHandler:"
                       );
  if ((IVar2 & 1) != 0) {
    puVar3 = &DAT_100ed1f08;
    _swift_allocObject(&DAT_100ed1f08,0x20,7);
    *(code **)(puVar3 + 0x10) = FUN_1000386a0;
    *(undefined **)(puVar3 + 0x18) = puVar1;
    local_50 = FUN_1000386a0;
    local_70 = PTR___NSConcreteStackBlock_100ea82a0;
    local_68 = 0x42000000;
    local_60 = thunk_FUN_100030410;
    puStack_58 = &DAT_100ed1f20;
    local_48 = puVar3;
    aBlock = __Block_copy(&local_70);
    _swift_retain(param_3);
    _swift_unknownObjectRetain(param_1);
    _swift_retain(puVar3);
    objc_stub::userNotificationCenter_didReceiveNotificationResponse_withCompletionHandler_
              (param_1,param_4,param_5,aBlock);
    __Block_release(aBlock);
    puVar1 = local_48;
    _swift_unknownObjectRelease(param_1);
    _swift_release(puVar3);
    _swift_release(puVar1);
    return;
  }
  _swift_retain(param_3);
  _swift_release(puVar1);
  return;
}



/* Address: 0x1004047f8 | _TtC18PasteNotifications35UserNotificationCenterDelegateProxy::userNotificationCenter:didReceiveNotificationResponse:withCompletionHandler: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

void _TtC18PasteNotifications35UserNotificationCenterDelegateProxy::
     userNotificationCenter_didReceiveNotificationResponse_withCompletionHandler_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
  void *pvVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  pvVar1 = __Block_copy((void *)param_5);
  puVar2 = &DAT_100ed1e68;
  _swift_allocObject(&DAT_100ed1e68,0x18,7);
  *(void **)(puVar2 + 0x10) = pvVar1;
  puVar3 = &DAT_100ed1e90;
  _swift_allocObject(&DAT_100ed1e90,0x20,7);
  *(ID *)(puVar3 + 0x10) = param_3;
  *(ID *)(puVar3 + 0x18) = param_4;
  puVar4 = &DAT_100ed1eb8;
  _swift_allocObject(&DAT_100ed1eb8,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_100166ac0;
  *(undefined **)(puVar4 + 0x18) = puVar2;
  _swift_retain(puVar2);
  FUN_1004041b0(FUN_100404684,0,FUN_100405d80,puVar3,FUN_1000386a0,puVar4,&DAT_100ed1d28,
                FUN_100405880,&DAT_100ed1d40,FUN_1004052a4);
  _swift_release(puVar3);
  _swift_release(puVar4);
  _swift_release(puVar2);
  return;
}



/* Address: 0x100404958 | FUN_100404958 */

void FUN_100404958(ID param_1)

{
  objc_stub::respondsToSelector_(param_1,"userNotificationCenter:openSettingsForNotification:");
  return;
}



/* Address: 0x100404974 | _TtC18PasteNotifications35UserNotificationCenterDelegateProxy::userNotificationCenter:openSettingsForNotification: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void _TtC18PasteNotifications35UserNotificationCenterDelegateProxy::
     userNotificationCenter_openSettingsForNotification_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ed1d00;
  _swift_allocObject(&DAT_100ed1d00,0x20,7);
  *(ID *)(puVar1 + 0x10) = param_3;
  *(ID *)(puVar1 + 0x18) = param_4;
  FUN_1004041b0(FUN_100404958,0,FUN_100404b08,puVar1,FUN_100004520,0,&DAT_100ed1d28,FUN_100405880,
                &DAT_100ed1d40,FUN_1004052a4);
  _swift_release(puVar1);
  return;
}



/* Address: 0x100404a70 | _swift_unknownObjectWeakDestroy */

void _swift_unknownObjectWeakDestroy(void)

{
  _swift_unknownObjectWeakDestroy();
  return;
}



/* Address: 0x100404a74 | _swift_unknownObjectWeakCopyInit */

void _swift_unknownObjectWeakCopyInit(void)

{
  _swift_unknownObjectWeakCopyInit();
  return;
}



/* Address: 0x100404a78 | _swift_unknownObjectWeakCopyAssign */

void _swift_unknownObjectWeakCopyAssign(void)

{
  _swift_unknownObjectWeakCopyAssign();
  return;
}



/* Address: 0x100404a7c | _swift_unknownObjectWeakTakeInit */

void _swift_unknownObjectWeakTakeInit(void)

{
  _swift_unknownObjectWeakTakeInit();
  return;
}



/* Address: 0x100404a80 | _swift_unknownObjectWeakTakeAssign */

void _swift_unknownObjectWeakTakeAssign(void)

{
  _swift_unknownObjectWeakTakeAssign();
  return;
}



/* Address: 0x100404a84 | FUN_100404a84 */

int FUN_100404a84(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[2] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Address: 0x100404aa4 | FUN_100404aa4 */

void FUN_100404aa4(ulong *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  
  if (param_2 == 0) {
    if (param_3 == 0) {
      return;
    }
    uVar1 = 0;
  }
  else {
    *param_1 = (ulong)(param_2 - 1);
    if (param_3 == 0) {
      return;
    }
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 1) = uVar1;
  return;
}



/* Address: 0x100404acc | FUN_100404acc */

undefined1  [16] FUN_100404acc(void)

{
  return ZEXT816(0x100ed1cd8);
}



/* Address: 0x100404adc | FUN_100404adc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100404adc(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100404b08 | FUN_100404b08 */

void FUN_100404b08(ID param_1,code *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  IVar3 = _objc_msgSend(param_1,"respondsToSelector:",
                        "userNotificationCenter:openSettingsForNotification:");
  if ((IVar3 & 1) != 0) {
    objc_stub::userNotificationCenter_openSettingsForNotification_(param_1,uVar1,uVar2);
  }
  (*param_2)();
  return;
}



/* Address: 0x100404b70 | FUN_100404b70 */

void FUN_100404b70(void)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_88 [8];
  undefined *local_80;
  undefined1 auStack_78 [24];
  
  lVar2 = _TtC18PasteNotifications35UserNotificationCenterDelegateProxy::delegates;
  _swift_beginAccess(unaff_x20 +
                     _TtC18PasteNotifications35UserNotificationCenterDelegateProxy::delegates,
                     auStack_78,1,0);
  lVar8 = *(long *)(unaff_x20 + lVar2);
  uVar10 = *(ulong *)(lVar8 + 0x10);
  _swift_bridgeObjectRetain(lVar8);
  puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar10 != 0) {
    uVar11 = 0;
    lVar9 = lVar8 + 0x20;
    do {
      if (*(ulong *)(lVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100404ccc);
        (*pcVar3)();
      }
      FUN_1004058ec(lVar9,auStack_88);
      puVar4 = auStack_88;
      _swift_unknownObjectWeakLoadStrong();
      if (puVar4 == (undefined1 *)0x0) {
        FUN_1001683a4(auStack_88);
      }
      else {
        _swift_unknownObjectRelease();
        puVar5 = puVar7;
        _swift_isUniquelyReferenced_nonNull_native();
        local_80 = puVar7;
        if (((ulong)puVar5 & 1) == 0) {
          FUN_100405b9c(0,*(long *)(puVar7 + 0x10) + 1,1);
        }
        uVar1 = *(ulong *)(local_80 + 0x10);
        if (*(ulong *)(local_80 + 0x18) >> 1 <= uVar1) {
          FUN_100405b9c(1 < *(ulong *)(local_80 + 0x18),uVar1 + 1,1);
        }
        puVar7 = local_80;
        *(ulong *)(local_80 + 0x10) = uVar1 + 1;
        FUN_100405d4c(auStack_88,local_80 + uVar1 * 8 + 0x20);
      }
      uVar11 = uVar11 + 1;
      lVar9 = lVar9 + 8;
    } while (uVar10 != uVar11);
  }
  _swift_bridgeObjectRelease(lVar8);
  uVar6 = *(undefined8 *)(unaff_x20 + lVar2);
  *(undefined **)(unaff_x20 + lVar2) = puVar7;
  _swift_bridgeObjectRelease(uVar6);
  return;
}



/* Address: 0x100404ccc | FUN_100404ccc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100404ccc(long param_1,code *param_2,undefined8 param_3,code *param_4,undefined8 param_5,
                  code *param_6,undefined8 param_7)

{
  _CocoaArrayWrapper _Var1;
  ulong uVar2;
  ulong uVar3;
  DispatchQoS qos;
  DispatchWorkItemFlags flags;
  undefined *puVar4;
  code *pcVar5;
  dispatch_group_t group;
  undefined *puVar6;
  undefined *puVar7;
  OS_dispatch_queue *pOVar8;
  OS_dispatch_queue *queue;
  void *aBlock;
  DispatchQoS DVar9;
  undefined *puVar10;
  _ArrayBuffer _Var11;
  long extraout_x8;
  long extraout_x8_00;
  long lVar12;
  undefined8 *puVar13;
  undefined **ppuVar14;
  _ArrayBuffer _Var15;
  undefined8 uVar16;
  undefined **ppuVar17;
  undefined8 uVar18;
  long lVar19;
  ContiguousArray CVar20;
  long lVar21;
  DispatchQoS local_130;
  long local_128;
  undefined *local_120;
  DispatchWorkItemFlags local_118;
  long local_110;
  undefined *local_108;
  code *local_100;
  undefined8 uStack_f8;
  ulong local_f0;
  code *local_e8;
  undefined8 uStack_e0;
  undefined *local_d8;
  _ArrayBuffer local_d0;
  undefined8 local_c8;
  code *local_c0;
  undefined *puStack_b8;
  code *local_b0;
  undefined *local_a8;
  undefined1 auStack_a0 [24];
  undefined *local_88;
  undefined *apuStack_80 [4];
  
  local_100 = param_4;
  uStack_f8 = param_5;
  local_e8 = param_6;
  uStack_e0 = param_7;
  local_d8 = (undefined *)param_3;
  local_108 = (undefined *)Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_110 = *(long *)(local_108 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_110 + 0x40));
  puVar7 = (undefined *)((long)&local_130 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_118.unknown = puVar7;
  local_120 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_128 = *(long *)(local_120 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_128 + 0x40));
  lVar19 = _TtC18PasteNotifications35UserNotificationCenterDelegateProxy::delegates;
  local_130.unknown = puVar7 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  _Var11.unknown = (undefined *)apuStack_80;
  _swift_beginAccess(param_1 + _TtC18PasteNotifications35UserNotificationCenterDelegateProxy::
                               delegates,_Var11.unknown,0,0);
  puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar12 = *(long *)(param_1 + lVar19);
  local_d0.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar19 = *(long *)(lVar12 + 0x10);
  _Var15.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar19 != 0) {
    lVar21 = lVar12 + 0x20;
    _swift_bridgeObjectRetain(lVar12);
    _Var15.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    do {
      FUN_1004058ec(lVar21,auStack_a0);
      _Var11.unknown = (undefined *)&local_88;
      FUN_1004058ec(auStack_a0);
      ppuVar14 = &local_88;
      _swift_unknownObjectWeakLoadStrong();
      FUN_1001683a4(&local_88);
      FUN_1001683a4(auStack_a0);
      if (ppuVar14 != (undefined **)0x0) {
        Swift::Array<undefined>::__makeUniqueAndReserveCapacityIfNotUnique();
        uVar2 = *(ulong *)(((ulong)local_d0.unknown & 0xffffffffffffff8) + 0x10);
        uVar3 = *(ulong *)(((ulong)local_d0.unknown & 0xffffffffffffff8) + 0x18);
        if (uVar3 >> 1 <= uVar2) {
          Swift::Array<undefined>::__createNewBuffer(1 < uVar3,uVar2 + 1,1);
        }
        Swift::Array<undefined>::__appendElementAssumeUniqueAndCapacity(uVar2);
        _Var11.unknown = (undefined *)ppuVar14;
        _Var15.unknown = local_d0.unknown;
      }
      lVar21 = lVar21 + 8;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    _swift_bridgeObjectRelease(lVar12);
  }
  local_d0.unknown = puVar7;
  if ((ulong)_Var15.unknown >> 0x3e == 0) {
    lVar19 = *(long *)(((ulong)_Var15.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = _Var15.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var15.unknown) {
      _Var1.unknown = _Var15.unknown;
    }
    lVar19 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (lVar19 != 0) {
    ppuVar14 = (undefined **)0x0;
    do {
      if (((ulong)_Var15.unknown & 0xc000000000000001) == 0) {
        if (*(undefined ***)(((ulong)_Var15.unknown & 0xffffffffffffff8) + 0x10) <= ppuVar14) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100404f38);
          (*pcVar5)();
        }
        ppuVar17 = *(undefined ***)(_Var15.unknown + (long)ppuVar14 * 8 + 0x20);
        _swift_unknownObjectRetain(ppuVar17);
      }
      else {
        ppuVar17 = ppuVar14;
        _Var11.unknown = _Var15.unknown;
        Swift::_ArrayBuffer::__getElementSlowPath((__int64)ppuVar14,_Var15);
      }
      if (SCARRY8((long)ppuVar14,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100404f34);
        (*pcVar5)();
      }
      lVar12 = (long)ppuVar14 + 1;
      CVar20.unknown = (undefined *)ppuVar17;
      (*param_2)();
      if (((ulong)CVar20.unknown & 1) == 0) {
        _swift_unknownObjectRelease(ppuVar17);
      }
      else {
        Swift::ContiguousArray::__makeUniqueAndReserveCapacityIfNotUnique(CVar20);
                    /* WARNING: Load size is inaccurate */
        CVar20.unknown = local_d0.unknown[0x10];
        Swift::ContiguousArray::__reserveCapacityAssumingUniqueBuffer
                  ((__int64)CVar20.unknown,(ContiguousArray)_Var11.unknown);
        Swift::ContiguousArray::__appendElementAssumeUniqueAndCapacity();
        Swift::ContiguousArray::__endMutation(CVar20);
        _Var11.unknown = (undefined *)ppuVar17;
      }
      ppuVar14 = (undefined **)((long)ppuVar14 + 1);
    } while (lVar12 != lVar19);
  }
  _swift_bridgeObjectRelease(_Var15.unknown);
  _Var11.unknown = local_d0.unknown;
  if (((long)local_d0.unknown < 0) || (((ulong)local_d0.unknown >> 0x3e & 1) != 0)) {
    lVar19 = Swift::_CocoaArrayWrapper::get_endIndex((_CocoaArrayWrapper)local_d0.unknown);
    puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    lVar19 = *(long *)(local_d0.unknown + 0x10);
    puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  PTR___swiftEmptyArrayStorage_100eae0d8 = puVar7;
  if (lVar19 == 0) {
    _swift_release(_Var11.unknown);
    (*local_100)(PTR___swiftEmptyArrayStorage_100eae0d8);
  }
  else {
    group = _dispatch_group_create();
    puVar6 = &DAT_100ed2020;
    _swift_allocObject(&DAT_100ed2020,0x18,7);
    *(undefined **)(puVar6 + 0x10) = puVar7;
    local_d8 = puVar6;
    if (lVar19 < 1) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1004052a4);
      (*pcVar5)();
    }
    lVar12 = 0;
    local_f0 = (ulong)_Var11.unknown & 0xc000000000000001;
    do {
      if (local_f0 == 0) {
        lVar21 = *(long *)(_Var11.unknown + lVar12 * 8 + 0x20);
        _swift_unknownObjectRetain(lVar21);
      }
      else {
        lVar21 = lVar12;
        Swift::_ArrayBuffer::__getElementSlowPath(lVar12,_Var11);
      }
      lVar12 = lVar12 + 1;
      _dispatch_group_enter(group);
      puVar7 = &DAT_100ed1da0;
      _swift_allocObject(&DAT_100ed1da0,0x20,7);
      *(undefined8 *)(puVar7 + 0x18) = 0;
      puVar13 = (undefined8 *)(puVar7 + 0x10);
      *puVar13 = 0;
      puVar6 = &DAT_100ed2048;
      _swift_allocObject(&DAT_100ed2048,0x18,7);
      *(dispatch_group_t *)(puVar6 + 0x10) = group;
      _swift_beginAccess(puVar13,auStack_a0,1,0);
      uVar18 = *puVar13;
      uVar16 = *(undefined8 *)(puVar7 + 0x18);
      *puVar13 = thunk_FUN_100405d34;
      *(undefined **)(puVar7 + 0x18) = puVar6;
      FUN_100004550(uVar18,uVar16);
      puVar6 = &DAT_100ed2070;
      _swift_allocObject(&DAT_100ed2070,0x20,7);
      *(undefined **)(puVar6 + 0x10) = local_d8;
      *(undefined **)(puVar6 + 0x18) = puVar7;
      _swift_retain();
      _swift_retain(puVar7);
      (*local_e8)(lVar21,FUN_100405f0c,puVar6);
      _swift_unknownObjectRelease(lVar21);
      _swift_release(puVar7);
      _swift_release(puVar6);
    } while (lVar19 != lVar12);
    _swift_release(_Var11.unknown);
    pOVar8 = (OS_dispatch_queue *)0x0;
    FUN_100402918();
    queue = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar8);
    puVar7 = &DAT_100ed2098;
    _swift_allocObject(&DAT_100ed2098,0x28,7);
    puVar4 = local_d8;
    uVar16 = uStack_f8;
    *(code **)(puVar7 + 0x10) = local_100;
    *(undefined8 *)(puVar7 + 0x18) = uStack_f8;
    *(undefined **)(puVar7 + 0x20) = local_d8;
    local_b0 = FUN_100405f44;
    local_d0.unknown = PTR___NSConcreteStackBlock_100ea82a0;
    local_c8 = 0x42000000;
    local_c0 = thunk_FUN_100030410;
    puStack_b8 = &DAT_100ed20b0;
    local_a8 = puVar7;
    aBlock = __Block_copy(&local_d0);
    _swift_retain(uVar16);
    DVar9.unknown = puVar4;
    _swift_retain();
    qos.unknown = local_130.unknown;
    DVar9 = Dispatch::DispatchQoS::get_unspecified(DVar9);
    local_88 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1004058a8();
    puVar7 = &DAT_100fc4e00;
    FUN_1000037f0(&DAT_100fc4e00,&DAT_100c476c0);
    puVar10 = puVar7;
    FUN_100402980();
    puVar6 = local_108;
    flags.unknown = local_118.unknown;
    Swift::SetAlgebra::_init(local_118.unknown,&local_88,puVar7,puVar10,local_108,DVar9.unknown);
    (extension_Dispatch)::__C::OS_dispatch_group::_notify(qos,flags,queue);
    __Block_release(aBlock);
    (**(code **)(local_110 + 8))(flags.unknown,puVar6);
    (**(code **)(local_128 + 8))(qos.unknown,local_120);
    puVar7 = local_a8;
    _swift_release(puVar4);
    _swift_release(puVar7);
  }
  return;
}



/* Address: 0x1004052a4 | FUN_1004052a4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1004052a4(long param_1,code *param_2,undefined8 param_3,code *param_4,undefined8 param_5,
                  code *param_6,undefined8 param_7)

{
  _CocoaArrayWrapper _Var1;
  ulong uVar2;
  ulong uVar3;
  DispatchQoS qos;
  DispatchWorkItemFlags flags;
  undefined *puVar4;
  code *pcVar5;
  dispatch_group_t group;
  undefined *puVar6;
  undefined *puVar7;
  OS_dispatch_queue *pOVar8;
  OS_dispatch_queue *queue;
  void *aBlock;
  DispatchQoS DVar9;
  undefined *puVar10;
  _ArrayBuffer _Var11;
  long extraout_x8;
  long extraout_x8_00;
  long lVar12;
  undefined8 *puVar13;
  undefined **ppuVar14;
  _ArrayBuffer _Var15;
  undefined8 uVar16;
  undefined **ppuVar17;
  undefined8 uVar18;
  long lVar19;
  ContiguousArray CVar20;
  long lVar21;
  DispatchQoS local_130;
  long local_128;
  undefined *local_120;
  DispatchWorkItemFlags local_118;
  long local_110;
  undefined *local_108;
  code *local_100;
  undefined8 uStack_f8;
  ulong local_f0;
  code *local_e8;
  undefined8 uStack_e0;
  undefined *local_d8;
  _ArrayBuffer local_d0;
  undefined8 local_c8;
  code *local_c0;
  undefined *puStack_b8;
  code *local_b0;
  undefined *local_a8;
  undefined1 auStack_a0 [24];
  undefined *local_88;
  undefined *apuStack_80 [4];
  
  local_100 = param_4;
  uStack_f8 = param_5;
  local_e8 = param_6;
  uStack_e0 = param_7;
  local_d8 = (undefined *)param_3;
  local_108 = (undefined *)Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_110 = *(long *)(local_108 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_110 + 0x40));
  puVar7 = (undefined *)((long)&local_130 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_118.unknown = puVar7;
  local_120 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_128 = *(long *)(local_120 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_128 + 0x40));
  lVar19 = _TtC18PasteNotifications35UserNotificationCenterDelegateProxy::delegates;
  local_130.unknown = puVar7 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  _Var11.unknown = (undefined *)apuStack_80;
  _swift_beginAccess(param_1 + _TtC18PasteNotifications35UserNotificationCenterDelegateProxy::
                               delegates,_Var11.unknown,0,0);
  puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar12 = *(long *)(param_1 + lVar19);
  local_d0.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar19 = *(long *)(lVar12 + 0x10);
  _Var15.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar19 != 0) {
    lVar21 = lVar12 + 0x20;
    _swift_bridgeObjectRetain(lVar12);
    _Var15.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    do {
      FUN_1004058ec(lVar21,auStack_a0);
      _Var11.unknown = (undefined *)&local_88;
      FUN_1004058ec(auStack_a0);
      ppuVar14 = &local_88;
      _swift_unknownObjectWeakLoadStrong();
      FUN_1001683a4(&local_88);
      FUN_1001683a4(auStack_a0);
      if (ppuVar14 != (undefined **)0x0) {
        Swift::Array<undefined>::__makeUniqueAndReserveCapacityIfNotUnique();
        uVar2 = *(ulong *)(((ulong)local_d0.unknown & 0xffffffffffffff8) + 0x10);
        uVar3 = *(ulong *)(((ulong)local_d0.unknown & 0xffffffffffffff8) + 0x18);
        if (uVar3 >> 1 <= uVar2) {
          Swift::Array<undefined>::__createNewBuffer(1 < uVar3,uVar2 + 1,1);
        }
        Swift::Array<undefined>::__appendElementAssumeUniqueAndCapacity(uVar2);
        _Var11.unknown = (undefined *)ppuVar14;
        _Var15.unknown = local_d0.unknown;
      }
      lVar21 = lVar21 + 8;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    _swift_bridgeObjectRelease(lVar12);
  }
  local_d0.unknown = puVar7;
  if ((ulong)_Var15.unknown >> 0x3e == 0) {
    lVar19 = *(long *)(((ulong)_Var15.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = _Var15.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var15.unknown) {
      _Var1.unknown = _Var15.unknown;
    }
    lVar19 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (lVar19 != 0) {
    ppuVar14 = (undefined **)0x0;
    do {
      if (((ulong)_Var15.unknown & 0xc000000000000001) == 0) {
        if (*(undefined ***)(((ulong)_Var15.unknown & 0xffffffffffffff8) + 0x10) <= ppuVar14) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100405510);
          (*pcVar5)();
        }
        ppuVar17 = *(undefined ***)(_Var15.unknown + (long)ppuVar14 * 8 + 0x20);
        _swift_unknownObjectRetain(ppuVar17);
      }
      else {
        ppuVar17 = ppuVar14;
        _Var11.unknown = _Var15.unknown;
        Swift::_ArrayBuffer::__getElementSlowPath((__int64)ppuVar14,_Var15);
      }
      if (SCARRY8((long)ppuVar14,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10040550c);
        (*pcVar5)();
      }
      lVar12 = (long)ppuVar14 + 1;
      CVar20.unknown = (undefined *)ppuVar17;
      (*param_2)();
      if (((ulong)CVar20.unknown & 1) == 0) {
        _swift_unknownObjectRelease(ppuVar17);
      }
      else {
        Swift::ContiguousArray::__makeUniqueAndReserveCapacityIfNotUnique(CVar20);
                    /* WARNING: Load size is inaccurate */
        CVar20.unknown = local_d0.unknown[0x10];
        Swift::ContiguousArray::__reserveCapacityAssumingUniqueBuffer
                  ((__int64)CVar20.unknown,(ContiguousArray)_Var11.unknown);
        Swift::ContiguousArray::__appendElementAssumeUniqueAndCapacity();
        Swift::ContiguousArray::__endMutation(CVar20);
        _Var11.unknown = (undefined *)ppuVar17;
      }
      ppuVar14 = (undefined **)((long)ppuVar14 + 1);
    } while (lVar12 != lVar19);
  }
  _swift_bridgeObjectRelease(_Var15.unknown);
  _Var11.unknown = local_d0.unknown;
  if (((long)local_d0.unknown < 0) || (((ulong)local_d0.unknown >> 0x3e & 1) != 0)) {
    lVar19 = Swift::_CocoaArrayWrapper::get_endIndex((_CocoaArrayWrapper)local_d0.unknown);
    puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    lVar19 = *(long *)(local_d0.unknown + 0x10);
    puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  PTR___swiftEmptyArrayStorage_100eae0d8 = puVar7;
  if (lVar19 == 0) {
    _swift_release(_Var11.unknown);
    (*local_100)(PTR___swiftEmptyArrayStorage_100eae0d8);
  }
  else {
    group = _dispatch_group_create();
    puVar6 = &DAT_100ed1d78;
    _swift_allocObject(&DAT_100ed1d78,0x18,7);
    *(undefined **)(puVar6 + 0x10) = puVar7;
    local_d8 = puVar6;
    if (lVar19 < 1) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10040587c);
      (*pcVar5)();
    }
    lVar12 = 0;
    local_f0 = (ulong)_Var11.unknown & 0xc000000000000001;
    do {
      if (local_f0 == 0) {
        lVar21 = *(long *)(_Var11.unknown + lVar12 * 8 + 0x20);
        _swift_unknownObjectRetain(lVar21);
      }
      else {
        lVar21 = lVar12;
        Swift::_ArrayBuffer::__getElementSlowPath(lVar12,_Var11);
      }
      lVar12 = lVar12 + 1;
      _dispatch_group_enter(group);
      puVar7 = &DAT_100ed1da0;
      _swift_allocObject(&DAT_100ed1da0,0x20,7);
      *(undefined8 *)(puVar7 + 0x18) = 0;
      puVar13 = (undefined8 *)(puVar7 + 0x10);
      *puVar13 = 0;
      puVar6 = &DAT_100ed1dc8;
      _swift_allocObject(&DAT_100ed1dc8,0x18,7);
      *(dispatch_group_t *)(puVar6 + 0x10) = group;
      _swift_beginAccess(puVar13,auStack_a0,1,0);
      uVar18 = *puVar13;
      uVar16 = *(undefined8 *)(puVar7 + 0x18);
      *puVar13 = FUN_100405d34;
      *(undefined **)(puVar7 + 0x18) = puVar6;
      FUN_100004550(uVar18,uVar16);
      puVar6 = &DAT_100ed1df0;
      _swift_allocObject(&DAT_100ed1df0,0x20,7);
      *(undefined **)(puVar6 + 0x10) = local_d8;
      *(undefined **)(puVar6 + 0x18) = puVar7;
      _swift_retain();
      _swift_retain(puVar7);
      (*local_e8)(lVar21,FUN_100405d40,puVar6);
      _swift_unknownObjectRelease(lVar21);
      _swift_release(puVar7);
      _swift_release(puVar6);
    } while (lVar19 != lVar12);
    _swift_release(_Var11.unknown);
    pOVar8 = (OS_dispatch_queue *)0x0;
    FUN_100402918();
    queue = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar8);
    puVar7 = &DAT_100ed1e18;
    _swift_allocObject(&DAT_100ed1e18,0x28,7);
    puVar4 = local_d8;
    uVar16 = uStack_f8;
    *(code **)(puVar7 + 0x10) = local_100;
    *(undefined8 *)(puVar7 + 0x18) = uStack_f8;
    *(undefined **)(puVar7 + 0x20) = local_d8;
    local_b0 = thunk_FUN_100405f44;
    local_d0.unknown = PTR___NSConcreteStackBlock_100ea82a0;
    local_c8 = 0x42000000;
    local_c0 = thunk_FUN_100030410;
    puStack_b8 = &DAT_100ed1e30;
    local_a8 = puVar7;
    aBlock = __Block_copy(&local_d0);
    _swift_retain(uVar16);
    DVar9.unknown = puVar4;
    _swift_retain();
    qos.unknown = local_130.unknown;
    DVar9 = Dispatch::DispatchQoS::get_unspecified(DVar9);
    local_88 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1004058a8();
    puVar7 = &DAT_100fc4e00;
    FUN_1000037f0(&DAT_100fc4e00,&DAT_100c476c0);
    puVar10 = puVar7;
    FUN_100402980();
    puVar6 = local_108;
    flags.unknown = local_118.unknown;
    Swift::SetAlgebra::_init(local_118.unknown,&local_88,puVar7,puVar10,local_108,DVar9.unknown);
    (extension_Dispatch)::__C::OS_dispatch_group::_notify(qos,flags,queue);
    __Block_release(aBlock);
    (**(code **)(local_110 + 8))(flags.unknown,puVar6);
    (**(code **)(local_128 + 8))(qos.unknown,local_120);
    puVar7 = local_a8;
    _swift_release(puVar4);
    _swift_release(puVar7);
  }
  return;
}



/* Address: 0x10040587c | thunk_FUN_100405e88 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void thunk_FUN_100405e88(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_deallocObject();
  return;
}



/* Address: 0x100405880 | FUN_100405880 */

void FUN_100405880(void)

{
  FUN_100405ed0(FUN_1004052a4);
  return;
}



/* Address: 0x10040588c | FUN_10040588c */

void FUN_10040588c(long param_1,long param_2)

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



/* Address: 0x1004058a0 | FUN_1004058a0 */

void FUN_1004058a0(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x1004058a8 | FUN_1004058a8 */

void FUN_1004058a8(void)

{
  DispatchWorkItemFlags DVar1;
  undefined *puVar2;
  
  if (DAT_100fc4bf0 != (undefined *)0x0) {
    return;
  }
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  puVar2 = PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680;
  _swift_getWitnessTable
            (PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680,
             DVar1.unknown);
  DAT_100fc4bf0 = puVar2;
  return;
}



/* Address: 0x1004058ec | FUN_1004058ec */

void FUN_1004058ec(undefined8 param_1,undefined8 param_2)

{
  _swift_unknownObjectWeakCopyInit(param_2,param_1);
  return;
}



/* Address: 0x1004058fc | FUN_1004058fc */

void FUN_1004058fc(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  ulong uVar6;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_58,0x21,0);
  uVar6 = *(ulong *)(param_2 + 0x10);
  uVar2 = uVar6;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(param_2 + 0x10) = uVar6;
  uVar3 = uVar6;
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
    FUN_10040fe1c(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
    *(ulong *)(param_2 + 0x10) = uVar3;
  }
  uVar2 = *(ulong *)(uVar3 + 0x10);
  uVar6 = uVar3;
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
    uVar6 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    FUN_10040fe1c(uVar6,uVar2 + 1,1,uVar3);
  }
  *(ulong *)(uVar6 + 0x10) = uVar2 + 1;
  *(undefined8 *)(uVar6 + uVar2 * 8 + 0x20) = param_1;
  *(ulong *)(param_2 + 0x10) = uVar6;
  _swift_endAccess(auStack_58);
  _swift_beginAccess(param_3 + 0x10,auStack_58,0,0);
  pcVar5 = *(code **)(param_3 + 0x10);
  if (pcVar5 != (code *)0x0) {
    uVar4 = *(undefined8 *)(param_3 + 0x18);
    _swift_retain(uVar4);
    (*pcVar5)();
    FUN_100004550(pcVar5,uVar4);
  }
  _swift_beginAccess(param_3 + 0x10,auStack_70,1,0);
  uVar4 = *(undefined8 *)(param_3 + 0x10);
  uVar1 = *(undefined8 *)(param_3 + 0x18);
  *(undefined8 *)(param_3 + 0x10) = 0;
  *(undefined8 *)(param_3 + 0x18) = 0;
  FUN_100004550(uVar4,uVar1);
  return;
}



/* Address: 0x100405a24 | FUN_100405a24 */

void FUN_100405a24(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  code *pcVar7;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_48,0x21,0);
  uVar6 = *(ulong *)(param_1 + 0x10);
  uVar4 = uVar6;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(param_1 + 0x10) = uVar6;
  uVar3 = uVar6;
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
    FUN_10040ff1c(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
    *(ulong *)(param_1 + 0x10) = uVar3;
  }
  lVar1 = *(ulong *)(uVar3 + 0x10) + 1;
  uVar4 = uVar3;
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= *(ulong *)(uVar3 + 0x10)) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    FUN_10040ff1c(uVar4,lVar1,1,uVar3);
  }
  *(long *)(uVar4 + 0x10) = lVar1;
  *(ulong *)(param_1 + 0x10) = uVar4;
  _swift_endAccess(auStack_48);
  _swift_beginAccess(param_2 + 0x10,auStack_48,0,0);
  pcVar7 = *(code **)(param_2 + 0x10);
  if (pcVar7 != (code *)0x0) {
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    _swift_retain(uVar5);
    (*pcVar7)();
    FUN_100004550(pcVar7,uVar5);
  }
  _swift_beginAccess(param_2 + 0x10,auStack_60,1,0);
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  FUN_100004550(uVar5,uVar2);
  return;
}



/* Address: 0x100405b38 | FUN_100405b38 */

void FUN_100405b38(code *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_3 + 0x10,auStack_48,0,0);
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  _swift_bridgeObjectRetain(uVar1);
  (*param_1)();
  _swift_bridgeObjectRelease(uVar1);
  return;
}



/* Address: 0x100405b98 | thunk_FUN_100030410 */

void thunk_FUN_100030410(void)

{
  FUN_100030410();
  return;
}



/* Address: 0x100405b9c | FUN_100405b9c */

void FUN_100405b9c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100405bb8();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x100405bb8 | FUN_100405bb8 */

undefined * FUN_100405bb8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100405ce4);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fc4e10;
    FUN_1000037f0(&DAT_100fc4e10,&DAT_100c476c8);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,&DAT_100ed1cd8);
  }
  else {
    if (puVar3 < param_4 || puVar4 + uVar6 * 8 <= puVar1) {
      _swift_arrayInitWithTakeFrontToBack(puVar1,puVar4,uVar6,&DAT_100ed1cd8);
    }
    else if (puVar3 != param_4) {
      _swift_arrayInitWithTakeBackToFront(puVar1,puVar4,uVar6,&DAT_100ed1cd8);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x100405ce4 | FUN_100405ce4 */

void FUN_100405ce4(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  }
  _swift_deallocObject();
  return;
}



/* Address: 0x100405d10 | FUN_100405d10 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100405d10(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100405d34 | FUN_100405d34 */

void FUN_100405d34(void)

{
  long unaff_x20;
  
  _dispatch_group_leave(*(dispatch_group_t *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100405d3c | thunk_FUN_100220288 */

void thunk_FUN_100220288(void)

{
  FUN_100220288();
  return;
}



/* Address: 0x100405d40 | FUN_100405d40 */

void FUN_100405d40(void)

{
  long unaff_x20;
  
  FUN_100405a24(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100405d48 | thunk_FUN_100405f18 */

void thunk_FUN_100405f18(void)

{
  FUN_100405f18();
  return;
}



/* Address: 0x100405d4c | FUN_100405d4c */

void FUN_100405d4c(undefined8 param_1,undefined8 param_2)

{
  _swift_unknownObjectWeakTakeInit(param_2,param_1);
  return;
}



/* Address: 0x100405d5c | FUN_100405d5c */

void FUN_100405d5c(void)

{
  long unaff_x20;
  
  __Block_release(*(void **)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x100405d80 | FUN_100405d80 */

void FUN_100405d80(void)

{
  FUN_1004046a0();
  return;
}



/* Address: 0x100405d88 | FUN_100405d88 */

void FUN_100405d88(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x100405dac | FUN_100405dac */

void FUN_100405dac(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100405db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Address: 0x100405dbc | FUN_100405dbc */

void FUN_100405dbc(void)

{
  FUN_10040407c();
  return;
}



/* Address: 0x100405dc4 | FUN_100405dc4 */

void FUN_100405dc4(long param_1)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong *puVar7;
  long unaff_x20;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  undefined1 auVar25 [16];
  byte bVar41;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  undefined8 uVar42;
  byte bVar49;
  byte bVar50;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  undefined8 uVar51;
  byte bVar58;
  byte bVar59;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  undefined8 uVar60;
  byte bVar67;
  byte bVar68;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  undefined8 uVar69;
  byte bVar76;
  undefined8 uVar77;
  undefined8 uVar78;
  undefined8 uVar79;
  undefined8 uVar80;
  undefined8 uVar81;
  undefined8 uVar82;
  undefined8 uVar83;
  undefined8 uVar84;
  
  uVar4 = *(ulong *)(param_1 + 0x10);
  if (uVar4 == 0) {
    uVar2 = 0;
  }
  else {
    if (uVar4 < 8) {
      uVar6 = 0;
      uVar2 = 0;
    }
    else {
      uVar6 = uVar4 & 0x7ffffffffffffff8;
      puVar3 = (undefined8 *)(param_1 + 0x50);
      bVar8 = 0;
      bVar9 = 0;
      bVar10 = 0;
      bVar11 = 0;
      bVar12 = 0;
      bVar13 = 0;
      bVar14 = 0;
      bVar15 = 0;
      bVar16 = 0;
      bVar17 = 0;
      bVar18 = 0;
      bVar19 = 0;
      bVar20 = 0;
      bVar21 = 0;
      bVar22 = 0;
      bVar23 = 0;
      bVar24 = 0;
      bVar26 = 0;
      bVar27 = 0;
      bVar28 = 0;
      bVar29 = 0;
      bVar30 = 0;
      bVar31 = 0;
      bVar32 = 0;
      bVar33 = 0;
      bVar34 = 0;
      bVar35 = 0;
      bVar36 = 0;
      bVar37 = 0;
      bVar38 = 0;
      bVar39 = 0;
      bVar40 = 0;
      uVar42 = 0;
      uVar51 = 0;
      uVar60 = 0;
      uVar69 = 0;
      uVar2 = uVar6;
      do {
        uVar78 = puVar3[-5];
        uVar77 = puVar3[-6];
        uVar80 = puVar3[-3];
        uVar79 = puVar3[-4];
        uVar82 = puVar3[-1];
        uVar81 = puVar3[-2];
        uVar84 = puVar3[1];
        uVar83 = *puVar3;
        bVar8 = (byte)uVar77 | bVar8;
        bVar9 = (byte)((ulong)uVar77 >> 8) | bVar9;
        bVar10 = (byte)((ulong)uVar77 >> 0x10) | bVar10;
        bVar11 = (byte)((ulong)uVar77 >> 0x18) | bVar11;
        bVar12 = (byte)((ulong)uVar77 >> 0x20) | bVar12;
        bVar13 = (byte)((ulong)uVar77 >> 0x28) | bVar13;
        bVar14 = (byte)((ulong)uVar77 >> 0x30) | bVar14;
        bVar15 = (byte)((ulong)uVar77 >> 0x38) | bVar15;
        bVar16 = (byte)uVar78 | bVar16;
        bVar17 = (byte)((ulong)uVar78 >> 8) | bVar17;
        bVar18 = (byte)((ulong)uVar78 >> 0x10) | bVar18;
        bVar19 = (byte)((ulong)uVar78 >> 0x18) | bVar19;
        bVar20 = (byte)((ulong)uVar78 >> 0x20) | bVar20;
        bVar21 = (byte)((ulong)uVar78 >> 0x28) | bVar21;
        bVar22 = (byte)((ulong)uVar78 >> 0x30) | bVar22;
        bVar23 = (byte)((ulong)uVar78 >> 0x38) | bVar23;
        bVar24 = (byte)uVar79 | bVar24;
        bVar26 = (byte)((ulong)uVar79 >> 8) | bVar26;
        bVar27 = (byte)((ulong)uVar79 >> 0x10) | bVar27;
        bVar28 = (byte)((ulong)uVar79 >> 0x18) | bVar28;
        bVar29 = (byte)((ulong)uVar79 >> 0x20) | bVar29;
        bVar30 = (byte)((ulong)uVar79 >> 0x28) | bVar30;
        bVar31 = (byte)((ulong)uVar79 >> 0x30) | bVar31;
        bVar32 = (byte)((ulong)uVar79 >> 0x38) | bVar32;
        bVar33 = (byte)uVar80 | bVar33;
        bVar34 = (byte)((ulong)uVar80 >> 8) | bVar34;
        bVar35 = (byte)((ulong)uVar80 >> 0x10) | bVar35;
        bVar36 = (byte)((ulong)uVar80 >> 0x18) | bVar36;
        bVar37 = (byte)((ulong)uVar80 >> 0x20) | bVar37;
        bVar38 = (byte)((ulong)uVar80 >> 0x28) | bVar38;
        bVar39 = (byte)((ulong)uVar80 >> 0x30) | bVar39;
        bVar40 = (byte)((ulong)uVar80 >> 0x38) | bVar40;
        bVar41 = (byte)uVar81 | (byte)uVar42;
        bVar43 = (byte)((ulong)uVar81 >> 8) | (byte)((ulong)uVar42 >> 8);
        bVar44 = (byte)((ulong)uVar81 >> 0x10) | (byte)((ulong)uVar42 >> 0x10);
        bVar45 = (byte)((ulong)uVar81 >> 0x18) | (byte)((ulong)uVar42 >> 0x18);
        bVar46 = (byte)((ulong)uVar81 >> 0x20) | (byte)((ulong)uVar42 >> 0x20);
        bVar47 = (byte)((ulong)uVar81 >> 0x28) | (byte)((ulong)uVar42 >> 0x28);
        bVar48 = (byte)((ulong)uVar81 >> 0x30) | (byte)((ulong)uVar42 >> 0x30);
        bVar49 = (byte)((ulong)uVar81 >> 0x38) | (byte)((ulong)uVar42 >> 0x38);
        uVar42 = CONCAT17(bVar49,CONCAT16(bVar48,CONCAT15(bVar47,CONCAT14(bVar46,CONCAT13(bVar45,
                                                  CONCAT12(bVar44,CONCAT11(bVar43,bVar41)))))));
        bVar50 = (byte)uVar82 | (byte)uVar51;
        bVar52 = (byte)((ulong)uVar82 >> 8) | (byte)((ulong)uVar51 >> 8);
        bVar53 = (byte)((ulong)uVar82 >> 0x10) | (byte)((ulong)uVar51 >> 0x10);
        bVar54 = (byte)((ulong)uVar82 >> 0x18) | (byte)((ulong)uVar51 >> 0x18);
        bVar55 = (byte)((ulong)uVar82 >> 0x20) | (byte)((ulong)uVar51 >> 0x20);
        bVar56 = (byte)((ulong)uVar82 >> 0x28) | (byte)((ulong)uVar51 >> 0x28);
        bVar57 = (byte)((ulong)uVar82 >> 0x30) | (byte)((ulong)uVar51 >> 0x30);
        bVar58 = (byte)((ulong)uVar82 >> 0x38) | (byte)((ulong)uVar51 >> 0x38);
        uVar51 = CONCAT17(bVar58,CONCAT16(bVar57,CONCAT15(bVar56,CONCAT14(bVar55,CONCAT13(bVar54,
                                                  CONCAT12(bVar53,CONCAT11(bVar52,bVar50)))))));
        bVar59 = (byte)uVar83 | (byte)uVar60;
        bVar61 = (byte)((ulong)uVar83 >> 8) | (byte)((ulong)uVar60 >> 8);
        bVar62 = (byte)((ulong)uVar83 >> 0x10) | (byte)((ulong)uVar60 >> 0x10);
        bVar63 = (byte)((ulong)uVar83 >> 0x18) | (byte)((ulong)uVar60 >> 0x18);
        bVar64 = (byte)((ulong)uVar83 >> 0x20) | (byte)((ulong)uVar60 >> 0x20);
        bVar65 = (byte)((ulong)uVar83 >> 0x28) | (byte)((ulong)uVar60 >> 0x28);
        bVar66 = (byte)((ulong)uVar83 >> 0x30) | (byte)((ulong)uVar60 >> 0x30);
        bVar67 = (byte)((ulong)uVar83 >> 0x38) | (byte)((ulong)uVar60 >> 0x38);
        uVar60 = CONCAT17(bVar67,CONCAT16(bVar66,CONCAT15(bVar65,CONCAT14(bVar64,CONCAT13(bVar63,
                                                  CONCAT12(bVar62,CONCAT11(bVar61,bVar59)))))));
        bVar68 = (byte)uVar84 | (byte)uVar69;
        bVar70 = (byte)((ulong)uVar84 >> 8) | (byte)((ulong)uVar69 >> 8);
        bVar71 = (byte)((ulong)uVar84 >> 0x10) | (byte)((ulong)uVar69 >> 0x10);
        bVar72 = (byte)((ulong)uVar84 >> 0x18) | (byte)((ulong)uVar69 >> 0x18);
        bVar73 = (byte)((ulong)uVar84 >> 0x20) | (byte)((ulong)uVar69 >> 0x20);
        bVar74 = (byte)((ulong)uVar84 >> 0x28) | (byte)((ulong)uVar69 >> 0x28);
        bVar75 = (byte)((ulong)uVar84 >> 0x30) | (byte)((ulong)uVar69 >> 0x30);
        bVar76 = (byte)((ulong)uVar84 >> 0x38) | (byte)((ulong)uVar69 >> 0x38);
        uVar69 = CONCAT17(bVar76,CONCAT16(bVar75,CONCAT15(bVar74,CONCAT14(bVar73,CONCAT13(bVar72,
                                                  CONCAT12(bVar71,CONCAT11(bVar70,bVar68)))))));
        puVar3 = puVar3 + 8;
        uVar2 = uVar2 - 8;
      } while (uVar2 != 0);
      bVar59 = bVar59 | bVar41 | bVar24 | bVar8;
      bVar61 = bVar61 | bVar43 | bVar26 | bVar9;
      bVar62 = bVar62 | bVar44 | bVar27 | bVar10;
      bVar63 = bVar63 | bVar45 | bVar28 | bVar11;
      bVar64 = bVar64 | bVar46 | bVar29 | bVar12;
      bVar65 = bVar65 | bVar47 | bVar30 | bVar13;
      bVar66 = bVar66 | bVar48 | bVar31 | bVar14;
      bVar67 = bVar67 | bVar49 | bVar32 | bVar15;
      bVar68 = bVar68 | bVar50 | bVar33 | bVar16;
      bVar70 = bVar70 | bVar52 | bVar34 | bVar17;
      bVar71 = bVar71 | bVar53 | bVar35 | bVar18;
      bVar72 = bVar72 | bVar54 | bVar36 | bVar19;
      bVar73 = bVar73 | bVar55 | bVar37 | bVar20;
      bVar74 = bVar74 | bVar56 | bVar38 | bVar21;
      bVar75 = bVar75 | bVar57 | bVar39 | bVar22;
      bVar76 = bVar76 | bVar58 | bVar40 | bVar23;
      auVar25[1] = bVar61;
      auVar25[0] = bVar59;
      auVar25[2] = bVar62;
      auVar25[3] = bVar63;
      auVar25[4] = bVar64;
      auVar25[5] = bVar65;
      auVar25[6] = bVar66;
      auVar25[7] = bVar67;
      auVar25[8] = bVar68;
      auVar25[9] = bVar70;
      auVar25[10] = bVar71;
      auVar25[0xb] = bVar72;
      auVar25[0xc] = bVar73;
      auVar25[0xd] = bVar74;
      auVar25[0xe] = bVar75;
      auVar25[0xf] = bVar76;
      auVar1[1] = bVar61;
      auVar1[0] = bVar59;
      auVar1[2] = bVar62;
      auVar1[3] = bVar63;
      auVar1[4] = bVar64;
      auVar1[5] = bVar65;
      auVar1[6] = bVar66;
      auVar1[7] = bVar67;
      auVar1[8] = bVar68;
      auVar1[9] = bVar70;
      auVar1[10] = bVar71;
      auVar1[0xb] = bVar72;
      auVar1[0xc] = bVar73;
      auVar1[0xd] = bVar74;
      auVar1[0xe] = bVar75;
      auVar1[0xf] = bVar76;
      auVar25 = NEON_ext(auVar25,auVar1,8,1);
      uVar2 = CONCAT17(bVar67 | auVar25[7],
                       CONCAT16(bVar66 | auVar25[6],
                                CONCAT15(bVar65 | auVar25[5],
                                         CONCAT14(bVar64 | auVar25[4],
                                                  CONCAT13(bVar63 | auVar25[3],
                                                           CONCAT12(bVar62 | auVar25[2],
                                                                    CONCAT11(bVar61 | auVar25[1],
                                                                             bVar59 | auVar25[0]))))
                                        )));
      if (uVar4 == uVar6) goto LAB_100405e74;
    }
    lVar5 = uVar4 - uVar6;
    puVar7 = (ulong *)(param_1 + uVar6 * 8 + 0x20);
    do {
      uVar2 = *puVar7 | uVar2;
      lVar5 = lVar5 + -1;
      puVar7 = puVar7 + 1;
    } while (lVar5 != 0);
  }
LAB_100405e74:
  (**(code **)(unaff_x20 + 0x10))(uVar2);
  return;
}



/* Address: 0x100405e88 | FUN_100405e88 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100405e88(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_deallocObject();
  return;
}



/* Address: 0x100405ec4 | FUN_100405ec4 */

void FUN_100405ec4(void)

{
  FUN_100405ed0(FUN_100404ccc);
  return;
}



/* Address: 0x100405ed0 | FUN_100405ed0 */

void FUN_100405ed0(code *UNRECOVERED_JUMPTABLE)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100405ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
             *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
             *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
             *(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Address: 0x100405ee8 | FUN_100405ee8 */

void FUN_100405ee8(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x100405f0c | FUN_100405f0c */

void FUN_100405f0c(undefined8 *param_1)

{
  long unaff_x20;
  
  FUN_1004058fc(*param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100405f18 | FUN_100405f18 */

void FUN_100405f18(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}


