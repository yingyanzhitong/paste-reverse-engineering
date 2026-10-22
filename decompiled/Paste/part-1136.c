/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100bc73fc | FUN_100bc73fc */

void FUN_100bc73fc(undefined8 *param_1)

{
  FUN_100bc6a4c(*param_1);
  FUN_100b56e88();
  return;
}



/* Address: 0x100bc741c | FUN_100bc741c */

void FUN_100bc741c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x19;
  
  FUN_100b78d0c();
  FUN_100bc6b68();
  *unaff_x19 = param_1;
  unaff_x19[1] = param_2;
  FUN_100b56e88();
  return;
}



/* Address: 0x100bc743c | thunk_FUN_100bc6c60 */

void thunk_FUN_100bc6c60(void)

{
  FUN_100bc6c60();
  return;
}



/* Address: 0x100bc7440 | FUN_100bc7440 */

void FUN_100bc7440(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  FUN_100b78d0c();
  FUN_100bc6e70();
  *unaff_x19 = param_1;
  FUN_100b56e88();
  return;
}



/* Address: 0x100bc7460 | thunk_FUN_100bc6f70 */

void thunk_FUN_100bc6f70(void)

{
  FUN_100bc6f70();
  return;
}



/* Address: 0x100bc7464 | FUN_100bc7464 */

void FUN_100bc7464(byte param_1)

{
  byte *unaff_x19;
  
  FUN_100b78d0c();
  FUN_100bc6264();
  *unaff_x19 = param_1 & 1;
  FUN_100b56e88();
  return;
}



/* Address: 0x100bc7488 | FUN_100bc7488 */

void FUN_100bc7488(undefined1 *param_1)

{
  FUN_100bc628c(*param_1);
  FUN_100b56e88();
  return;
}



/* Address: 0x100bc74a8 | FUN_100bc74a8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100bc74a8(void)

{
  return ZEXT816(0x100fa40e0);
}



/* Address: 0x100bc74c8 | FUN_100bc74c8 */

void FUN_100bc74c8(undefined8 param_1,undefined8 param_2)

{
  _swift_lookUpClassMethod(param_1,param_2,&TargetClassDescriptor_100ccfbb8);
  return;
}



/* Address: 0x100bc74d4 | FUN_100bc74d4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100bc74d4(void)

{
  return ZEXT816(0x100fa4260);
}



/* Address: 0x100bc74f4 | FUN_100bc74f4 */

void FUN_100bc74f4(undefined8 param_1,undefined8 param_2)

{
  _swift_lookUpClassMethod(param_1,param_2,&TargetClassDescriptor_100ccfc38);
  return;
}



/* Address: 0x100bc7500 | FUN_100bc7500 */

void FUN_100bc7500(void)

{
  long unaff_x20;
  
  __Block_release(*(void **)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x100bc7524 | FUN_100bc7524 */

void FUN_100bc7524(void)

{
  FUN_100bc6430();
  return;
}



/* Address: 0x100bc752c | thunk_FUN_100bc73c4 */

void thunk_FUN_100bc73c4(void)

{
  FUN_100bc73c4();
  return;
}



/* Address: 0x100bc7530 | thunk_FUN_100bc64f4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void thunk_FUN_100bc64f4(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  }
  _swift_retain(uVar2);
  (*pcVar1)(param_2,param_3,param_4);
  _swift_release(uVar2);
  _swift_bridgeObjectRelease(param_2);
  return;
}



/* Address: 0x100bc7534 | thunk_FUN_100bc7500 */

void thunk_FUN_100bc7500(void)

{
  FUN_100bc7500();
  return;
}



/* Address: 0x100bc7538 | thunk_FUN_100bc7500 */

void thunk_FUN_100bc7500(void)

{
  FUN_100bc7500();
  return;
}



/* Address: 0x100bc753c | thunk_FUN_100b836dc */

void thunk_FUN_100b836dc(void)

{
  FUN_100bc62ac();
  return;
}



/* Address: 0x100bc7540 | thunk_FUN_100bc73d4 */

void thunk_FUN_100bc73d4(void)

{
  FUN_100bc73d4();
  return;
}



/* Address: 0x100bc7544 | FUN_100bc7544 */

void FUN_100bc7544(undefined8 param_1,SEL param_2)

{
  ID unaff_x20;
  
  _objc_msgSend(unaff_x20,param_2);
  return;
}



/* Address: 0x100bc7550 | FUN_100bc7550 */

void FUN_100bc7550(void)

{
  _swift_getObjectType();
  return;
}



/* Address: 0x100bc7560 | FUN_100bc7560 */

void FUN_100bc7560(void)

{
  FUN_100bc6c18();
  return;
}



/* Address: 0x100bc756c | FUN_100bc756c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_100bc756c(Data param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  NSData *pNVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined1 auStack_b0 [32];
  undefined8 local_90;
  long local_88;
  undefined1 auStack_80 [32];
  
  pNVar7 = Foundation::Data::_bridgeToObjectiveC(param_1);
  puVar8 = (undefined *)
           SentrySerialization::deserializeArrayFromJsonData_
                     ((ID)&objc::class_t::SentrySerialization,"deserializeArrayFromJsonData:",
                      (ID)pNVar7);
  puVar4 = PTR___type_metadata_for_Any_100eae0c0;
  if (puVar8 == (undefined *)0x0) {
    FUN_100b84dac(0);
    FUN_100b84df8(4,0xd000000000000041,0x8000000100dd02c0,0xd000000000000073,0x8000000100dd0310,10);
    puVar11 = (undefined *)0x0;
  }
  else {
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
    puVar11 = puVar8;
    FUN_100bc77d4();
    if (puVar11 == (undefined *)0x0) {
      FUN_100b84dac();
      FUN_100b84df8(3,0xd000000000000045,0x8000000100dd0390,0xd000000000000073,0x8000000100dd0310,
                    0x12);
      lVar13 = *(long *)(puVar8 + 0x10);
      if (lVar13 == 0) {
        _swift_bridgeObjectRelease(puVar8);
        puVar11 = PTR___swiftEmptyArrayStorage_100eae0d8;
      }
      else {
        _swift_bridgeObjectRetain(puVar8);
        puVar3 = PTR___type_metadata_for_Swift_String_100eac208;
        puVar11 = PTR___swiftEmptyArrayStorage_100eae0d8;
        puVar12 = puVar8;
        do {
          puVar12 = puVar12 + 0x20;
          FUN_10000cbfc(puVar12,auStack_80);
          FUN_10000cbfc(auStack_80,auStack_b0);
          puVar9 = &local_90;
          _swift_dynamicCast(puVar9,auStack_b0,puVar4 + 8,puVar3,6);
          if (((ulong)puVar9 & 1) == 0) {
            local_90 = 0;
            local_88 = 0;
          }
          FUN_100004594(auStack_80);
          lVar6 = local_88;
          uVar5 = local_90;
          if (local_88 != 0) {
            puVar10 = puVar11;
            _swift_isUniquelyReferenced_nonNull_native();
            if (((ulong)puVar10 & 1) == 0) {
              plVar1 = (long *)(puVar11 + 0x10);
              puVar11 = (undefined *)0x0;
              FUN_100bc78e4(0,*plVar1 + 1);
            }
            uVar2 = *(ulong *)(puVar11 + 0x10);
            if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar2) {
              puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
              FUN_100bc78e4(puVar11,uVar2 + 1);
            }
            *(ulong *)(puVar11 + 0x10) = uVar2 + 1;
            *(undefined8 *)(puVar11 + uVar2 * 0x10 + 0x20) = uVar5;
            *(long *)(puVar11 + uVar2 * 0x10 + 0x28) = lVar6;
          }
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
        _swift_bridgeObjectRelease_n(puVar8,2);
      }
    }
    else {
      _swift_bridgeObjectRelease(puVar8);
    }
  }
  return puVar11;
}



/* Address: 0x100bc77d4 | FUN_100bc77d4 */

undefined * FUN_100bc77d4(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [32];
  undefined *local_68;
  
  lVar8 = *(long *)(param_1 + 0x10);
  local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_100071750(0,lVar8,0);
  puVar4 = PTR___type_metadata_for_Any_100eae0c0;
  puVar3 = PTR___type_metadata_for_Swift_String_100eac208;
  puVar2 = local_68;
  while( true ) {
    if (lVar8 == 0) {
      return puVar2;
    }
    param_1 = param_1 + 0x20;
    local_68 = puVar2;
    FUN_10000cbfc(param_1,auStack_88);
    puVar7 = &local_98;
    _swift_dynamicCast(puVar7,auStack_88,puVar4 + 8,puVar3,6);
    uVar6 = uStack_90;
    uVar5 = local_98;
    if ((int)puVar7 == 0) break;
    uVar1 = *(ulong *)(puVar2 + 0x10);
    local_68 = puVar2;
    if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
      FUN_100071750(1 < *(ulong *)(puVar2 + 0x18),uVar1 + 1,1);
    }
    *(ulong *)(local_68 + 0x10) = uVar1 + 1;
    *(undefined8 *)(local_68 + uVar1 * 0x10 + 0x20) = uVar5;
    *(undefined8 *)(local_68 + uVar1 * 0x10 + 0x28) = uVar6;
    lVar8 = lVar8 + -1;
    puVar2 = local_68;
  }
  _swift_release(puVar2);
  return (undefined *)0x0;
}



/* Address: 0x100bc78e4 | FUN_100bc78e4 */

void FUN_100bc78e4(undefined8 param_1,undefined8 param_2)

{
  FUN_100089044(param_1,param_2,1);
  return;
}



/* Address: 0x100bc78f0 | FUN_100bc78f0 */

void FUN_100bc78f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_allocWithZone();
  FUN_100bc7950(param_1,param_2,param_3,param_4,param_5);
  return;
}



/* Address: 0x100bc7950 | FUN_100bc7950 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100bc7950(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                undefined *param_5)

{
  DispatchTimeInterval DVar1;
  undefined7 extraout_var;
  DispatchTime DVar3;
  DispatchWorkItemFlags DVar4;
  DispatchQoS DVar5;
  TimerFlags TVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  TimerFlags TVar10;
  ID IVar11;
  ID IVar12;
  void *aBlock;
  DispatchQoS DVar13;
  DispatchTime DVar14;
  long lVar15;
  long extraout_x8;
  undefined8 *puVar16;
  long lVar17;
  long extraout_x8_00;
  long lVar18;
  long extraout_x8_01;
  DispatchWorkItemFlags flags;
  long lVar19;
  long extraout_x8_02;
  long extraout_x9;
  undefined8 *puVar20;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  long unaff_x20;
  code *pcVar21;
  DispatchQoS qos;
  long lVar22;
  TimerFlags flags_00;
  undefined *local_a8;
  undefined8 local_a0;
  code *local_98;
  undefined *puStack_90;
  undefined8 local_88;
  undefined *local_80;
  long lVar2;
  
  DVar1 = Dispatch::DispatchTimeInterval::typeMetadataAccessor();
  lVar2 = CONCAT71(extraout_var,DVar1.value);
  lVar15 = *(long *)(lVar2 + -8);
  FUN_100bc8078();
  puVar20 = (undefined8 *)(extraout_x9 - extraout_x8);
  puVar16 = (undefined8 *)((long)puVar20 - extraout_x8);
  DVar3 = Dispatch::DispatchTime::typeMetadataAccessor();
  lVar17 = *(long *)(DVar3.unknown + -8);
  FUN_100bc8078();
  DVar4 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar18 = *(long *)(DVar4.unknown + -8);
  FUN_100bc8078();
  flags.unknown = (undefined *)(extraout_x9_01 - extraout_x8_01);
  DVar5 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar19 = *(long *)(DVar5.unknown + -8);
  FUN_100bc8078();
  qos.unknown = (undefined *)(extraout_x9_02 - extraout_x8_02);
  TVar6 = TimerFlags::_typeMetadataAccessor();
  puVar8 = PTR__typeMetadataAccessor_100eae810;
  lVar22 = *(long *)(TVar6.unknown + -8);
  flags_00.unknown = qos.unknown + -(*(long *)(lVar22 + 0x40) + 0xfU & 0xfffffffffffffff0);
  *(long *)(unaff_x20 + _TtC6Sentry27SentryDispatchSourceWrapper::queueWrapper) = param_3;
  FUN_100bc7d64(0);
  _objc_msgSend(*(ID *)(param_3 + _TtC6Sentry26SentryDispatchQueueWrapper::internalWrapper),"queue")
  ;
  local_a8 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar7 = &DAT_101047728;
  FUN_100003a00(&DAT_101047728,puVar8,PTR__Dispatch__TimerFlags_>Swift__SetAlgebra_100eae820);
  puVar8 = &DAT_101047730;
  FUN_100b6730c(&DAT_101047730);
  puVar9 = &DAT_101047738;
  FUN_100bc8038(&DAT_101047738,&DAT_101047730);
  Swift::SetAlgebra::_init(flags_00.unknown,&local_a8,puVar8,puVar9,TVar6.unknown,puVar7);
  TVar10.unknown = flags_00.unknown;
  (extension_Dispatch)::__C::OS_dispatch_source::_makeTimerSource(flags_00);
  (**(code **)(lVar22 + 8))(flags_00.unknown,TVar6.unknown);
  *(undefined **)(unaff_x20 + _TtC6Sentry27SentryDispatchSourceWrapper::source) = TVar10.unknown;
  FUN_100bc7da0();
  IVar11 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff88,"init");
  IVar12 = IVar11;
  FUN_100b69e00();
  local_a8 = PTR___NSConcreteStackBlock_100ea82a0;
  local_a0 = 0x42000000;
  local_98 = FUN_100030410;
  puStack_90 = &DAT_100f3b078;
  local_88 = param_4;
  local_80 = param_5;
  aBlock = __Block_copy(&local_a8);
  FUN_100bc80a0();
  DVar13.unknown = param_5;
  _swift_retain();
  Dispatch::DispatchQoS::get_unspecified(DVar13);
  FUN_100bc7dd8(flags.unknown,IVar12);
  (extension_Dispatch)::__C::OS_dispatch_source::_setEventHandler(qos,flags);
  __Block_release(aBlock);
  FUN_100bc8098();
  (**(code **)(lVar18 + 8))(flags.unknown,DVar4.unknown);
  (**(code **)(lVar19 + 8))(qos.unknown,DVar5.unknown);
  DVar14.unknown = local_80;
  _swift_release();
  FUN_100b69e00();
  FUN_100bc80a0();
  Dispatch::DispatchTime::now(DVar14);
  *puVar16 = param_1;
  FUN_100bc808c(puVar16);
  *puVar20 = param_2;
  FUN_100bc808c(puVar20);
  (extension_Dispatch)::__C::OS_dispatch_source_timer::schedule
            ((undefined *)(extraout_x9_00 - extraout_x8_00),(DispatchTimeInterval)(__int8)puVar16,
             (DispatchTimeInterval)(__int8)puVar20);
  FUN_100bc8098();
  pcVar21 = *(code **)(lVar15 + 8);
  (*pcVar21)(puVar20,lVar2);
  (*pcVar21)(puVar16,lVar2);
  (**(code **)(lVar17 + 8))((undefined *)(extraout_x9_00 - extraout_x8_00),DVar3.unknown);
  FUN_100b69e00();
  FUN_100bc80a0();
  (extension_Dispatch)::__C::OS_dispatch_source::resume();
  _swift_release(param_5);
  FUN_100bc8098();
  return IVar11;
}



/* Address: 0x100bc7d64 | FUN_100bc7d64 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100bc7d64(void)

{
  undefined *puVar1;
  
  if (DAT_101047720 == (undefined *)0x0) {
    puVar1 = &_OBJC_CLASS___OS_dispatch_source;
    _swift_getObjCClassMetadata();
    DAT_101047720 = puVar1;
  }
  return;
}



/* Address: 0x100bc7da0 | FUN_100bc7da0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100bc7da0(void)

{
  return ZEXT816(0x100fa4320);
}



/* Address: 0x100bc7dc0 | FUN_100bc7dc0 */

void FUN_100bc7dc0(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  _swift_retain(uVar1);
  return;
}



/* Address: 0x100bc7dd0 | FUN_100bc7dd0 */

void FUN_100bc7dd0(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100bc7dd8 | FUN_100bc7dd8 */

void FUN_100bc7dd8(undefined8 param_1)

{
  DispatchWorkItemFlags DVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *local_48;
  
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_48 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar2 = &DAT_100fa82c0;
  FUN_100003a00(&DAT_100fa82c0,PTR_typeMetadataAccessor_100eae670,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680);
  puVar3 = &DAT_101047770;
  FUN_100b6730c(&DAT_101047770);
  puVar4 = &DAT_100fa82d0;
  FUN_100bc8038(&DAT_100fa82d0,&DAT_101047770);
  Swift::SetAlgebra::_init(param_1,&local_48,puVar3,puVar4,DVar1.unknown,puVar2);
  return;
}



/* Address: 0x100bc7e84 | _TtC6Sentry27SentryDispatchSourceWrapper::initWithInterval:leeway:queue:eventHandler: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x30 bytes */

ID _TtC6Sentry27SentryDispatchSourceWrapper::initWithInterval_leeway_queue_eventHandler_
             (ID param_1,SEL param_2,long_long param_3,long_long param_4,ID param_5,ID param_6,
             undefined4 param_7)

{
  void *pvVar1;
  undefined *puVar2;
  
  pvVar1 = __Block_copy((void *)param_6);
  puVar2 = &DAT_100f3b0b0;
  _swift_allocObject(&DAT_100f3b0b0,0x18,7);
  *(void **)(puVar2 + 0x10) = pvVar1;
  FUN_100bc7950(param_3,param_4,param_5,FUN_100166ac0,puVar2);
  return param_3;
}



/* Address: 0x100bc7f0c | FUN_100bc7f0c */

void FUN_100bc7f0c(void)

{
  FUN_100b69e00();
  (extension_Dispatch)::__C::OS_dispatch_source::cancel();
  return;
}



/* Address: 0x100bc7f38 | _TtC6Sentry27SentryDispatchSourceWrapper::cancel */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry27SentryDispatchSourceWrapper::cancel(ID param_1,SEL param_2)

{
  FUN_100bc7f0c(param_1);
  return;
}



/* Address: 0x100bc7f60 | FUN_100bc7f60 */

void FUN_100bc7f60(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("Sentry.SentryDispatchSourceWrapper",0x22,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100bc7f8c);
  (*pcVar1)();
}



/* Address: 0x100bc7f8c | _TtC6Sentry27SentryDispatchSourceWrapper::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry27SentryDispatchSourceWrapper::init(ID param_1,SEL param_2)

{
  ID IVar1;
  
  FUN_100bc7f60();
  FUN_100bc7da0();
  IVar1 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffd0,"dealloc");
  return IVar1;
}



/* Address: 0x100bc7f98 | FUN_100bc7f98 */

void FUN_100bc7f98(void)

{
  FUN_100bc7da0();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x100bc7fc8 | _TtC6Sentry27SentryDispatchSourceWrapper::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry27SentryDispatchSourceWrapper::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + source));
  return;
}



/* Address: 0x100bc8000 | FUN_100bc8000 */

void FUN_100bc8000(undefined8 param_1,undefined8 param_2)

{
  _swift_lookUpClassMethod(param_1,param_2,&TargetClassDescriptor_100ccfc74);
  return;
}



/* Address: 0x100bc800c | FUN_100bc800c */

void FUN_100bc800c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100bc8010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x60))();
  return;
}



/* Address: 0x100bc8014 | FUN_100bc8014 */

void FUN_100bc8014(void)

{
  long unaff_x20;
  
  __Block_release(*(void **)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x100bc8038 | FUN_100bc8038 */

void FUN_100bc8038(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    FUN_100b6734c(param_2);
    puVar1 = PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530;
    _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Address: 0x100bc8078 | FUN_100bc8078 */

void FUN_100bc8078(void)

{
  return;
}



/* Address: 0x100bc808c | FUN_100bc808c */

void FUN_100bc808c(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x000100bc8094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x100bc8098 | FUN_100bc8098 */

void FUN_100bc8098(void)

{
  _swift_unknownObjectRelease();
  return;
}



/* Address: 0x100bc80a0 | FUN_100bc80a0 */

void FUN_100bc80a0(void)

{
  _swift_unknownObjectRetain();
  return;
}



/* Address: 0x100bc80a8 | FUN_100bc80a8 */

void FUN_100bc80a8(long param_1)

{
  undefined *local_58;
  undefined *puStack_50;
  undefined *local_48;
  undefined *puStack_40;
  undefined *local_38;
  undefined *puStack_30;
  undefined *local_28;
  undefined *puStack_20;
  undefined *local_18;
  
  local_58 = PTR___value_witness_table_for_Builtin_UnknownObject_100eabd30 + 0x40;
  local_38 = &DAT_100c9d630;
  puStack_20 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
  local_18 = &DAT_100c9d648;
  puStack_50 = local_58;
  local_48 = local_58;
  puStack_40 = local_58;
  puStack_30 = local_58;
  local_28 = local_58;
  _swift_initClassMetadata2(param_1,0,9,&local_58,param_1 + 0x90);
  return;
}



/* Address: 0x100bc8118 | FUN_100bc8118 */

void FUN_100bc8118(void)

{
  _swift_getObjectType();
  FUN_100b9b4c0();
  return;
}



/* Address: 0x100bc8144 | FUN_100bc8144 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100bc8144(undefined8 param_1,undefined8 param_2)

{
  NSString *pNVar1;
  ID IVar2;
  ID unaff_x20;
  
  _swift_getObjCClassFromMetadata();
  _objc_allocWithZone();
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  IVar2 = _objc_msgSend(unaff_x20,"initWithType:",pNVar1);
  return IVar2;
}



/* Address: 0x100bc81b8 | FUN_100bc81b8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100bc81b8(undefined8 param_1)

{
  FUN_100bc8118(param_1);
  return 0;
}



/* Address: 0x100bc81e0 | FUN_100bc81e0 */

void FUN_100bc81e0(void)

{
  _swift_getObjectType();
  FUN_100bc8118();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffd0,"dealloc");
  return;
}



/* Address: 0x100bc8224 | FUN_100bc8224 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100bc8224(undefined8 param_1)

{
  FUN_100bc81e0(param_1);
  return;
}



/* Address: 0x100bc8248 | FUN_100bc8248 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100bc8248(long param_1)

{
  FUN_100b78cd4(DAT_101047780,0);
  FUN_100b78cd4(DAT_101047788);
  FUN_100b78cd4(DAT_101047790);
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + DAT_101047798));
  FUN_100b78cd4(DAT_1010477a0);
  FUN_100b78cd4(DAT_1010477a8);
  _swift_release(*(undefined8 *)(param_1 + DAT_1010477b0));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + DAT_1010477b8 + 8));
  return;
}



/* Address: 0x100bc82e0 | FUN_100bc82e0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100bc82e0(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  code *pcVar4;
  ulong uVar5;
  class_t *pcVar6;
  ID self;
  ID self_00;
  undefined8 uVar7;
  ID IVar8;
  NSNumber *pNVar9;
  NSNumber *this;
  ulong uVar10;
  undefined *self_01;
  NSArray *pNVar11;
  char *pcVar13;
  void *pvVar14;
  undefined8 uVar15;
  long unaff_x20;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  double dVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  _StringGuts _Var12;
  
  lVar19 = *(long *)(unaff_x20 + DAT_1010477b0);
  uVar16 = *(ulong *)(lVar19 + 0x10);
  _os_unfair_lock_lock(uVar16);
  _swift_beginAccess(lVar19 + 0x18,auStack_78,1,0);
  cVar3 = *(char *)(lVar19 + 0x18);
  _os_unfair_lock_unlock();
  if (cVar3 == '\x01') {
    FUN_100bc0e1c();
    uVar5 = uVar16;
    thunk_FUN_100b6cd50();
    lVar19 = SentryOptions::appHangTimeoutInterval;
    if (uVar5 != 0) {
      lVar17 = *(long *)(unaff_x20 + DAT_101047780);
      pcVar13 = (char *)0x0;
      pvVar14 = (void *)0x0;
      _swift_beginAccess(lVar17 + SentryOptions::appHangTimeoutInterval,auStack_90);
      dVar20 = *(double *)(lVar17 + lVar19) * 1000.0;
      if (0x7fefffffffffffff < (ulong)ABS(dVar20)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100bc88d0);
        (*pcVar4)();
      }
      if (dVar20 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100bc88d4);
        (*pcVar4)();
      }
      if (9.223372036854776e+18 <= dVar20) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100bc88d8);
        (*pcVar4)();
      }
      SVar21 = Swift::CustomStringConvertible::get_description();
      SVar24.bridgeObject = pvVar14;
      SVar24.str = pcVar13;
      Swift::String::append(SVar21,SVar24);
      _swift_bridgeObjectRelease(SVar21.bridgeObject);
      SVar22.bridgeObject = (void *)0xe300000000000000;
      SVar22.str = (char *)0x736d20;
      _Var12.unknown = (undefined *)0xe300000000000000;
      SVar25.bridgeObject = pvVar14;
      SVar25.str = pcVar13;
      Swift::String::append(SVar22,SVar25);
      SVar21.bridgeObject = (void *)0xe900000000000020;
      SVar21.str = (char *)0x747361656c207461;
      Swift::_StringGuts::grow(0x13,_Var12);
      _swift_bridgeObjectRelease(0xe000000000000000);
      SVar26.bridgeObject = pvVar14;
      SVar26.str = pcVar13;
      Swift::String::append(SVar21,SVar26);
      _swift_bridgeObjectRelease(0xe900000000000020);
      SVar23.bridgeObject = (void *)0xe100000000000000;
      SVar23.str = (char *)0x2e;
      SVar27.bridgeObject = pvVar14;
      SVar27.str = pcVar13;
      Swift::String::append(SVar23,SVar27);
      self_00 = 0xd000000000000010;
      pcVar6 = &objc::class_t::SentryEvent;
      _objc_allocWithZone();
      pcVar13 = "initWithLevel:";
      self = _objc_msgSend((ID)pcVar6,"initWithLevel:",4);
      FUN_100b8cc3c(0);
      FUN_100b8c99c(param_1);
      pcVar6 = &objc::class_t::SentryException;
      _objc_allocWithZone(&objc::class_t::SentryException);
      FUN_100bc8964(0xd000000000000010,0x8000000100dd0530,param_1,pcVar13,pcVar6);
      FUN_100b94080();
      uVar7 = 0x676e6148707041;
      FUN_100bc8144(0x676e6148707041,&DAT_e700000000000000);
      _objc_msgSend(self_00,"setMechanism:",uVar7);
      uVar2 = uVar16 & 0xc000000000000001;
      thunk_FUN_100bc4380(0,uVar2 == 0,uVar16);
      if (uVar2 == 0) {
        IVar8 = *(ID *)(uVar16 + 0x20);
      }
      else {
        IVar8 = 0;
        FUN_100b6dad8(0,uVar16);
      }
      IVar8 = _objc_msgSend(IVar8,"stacktrace");
      FUN_100b6f868();
      _objc_msgSend(self_00,"setStacktrace:",IVar8);
      FUN_100b97e4c();
      pNVar9 = (NSNumber *)_objc_msgSend(self_00,"stacktrace");
      if (pNVar9 != (NSNumber *)0x0) {
        this = pNVar9;
        FUN_100b94080(pNVar9,&DAT_100fa87f8,&PTR__OBJC_CLASS___NSNumber_100f8d750);
        (extension_Foundation)::__C::NSNumber::__allocating_init(this,true);
        FUN_100b9fdc8(pNVar9,"setSnapshot:");
        FUN_100b97e4c();
        FUN_100b6f868();
      }
      if (0 < (long)uVar5) {
        _swift_bridgeObjectRetain(uVar16);
        uVar18 = 0;
        do {
          if (uVar2 == 0) {
            uVar10 = *(ulong *)(uVar16 + uVar18 * 8 + 0x20);
          }
          else {
            uVar10 = uVar18;
            FUN_100b6dad8(uVar18,uVar16);
          }
          uVar1 = uVar18 + 1;
          self_01 = &_OBJC_CLASS___NSNumber;
          _objc_allocWithZone();
          _objc_msgSend((ID)self_01,"initWithBool:",(ulong)(uVar18 == 0));
          FUN_100b9fdc8(uVar10,"setCurrent:");
          FUN_100b97e4c();
          FUN_100b6f868();
          uVar18 = uVar1;
        } while (uVar5 != uVar1);
        FUN_100b6f980();
        FUN_100b93928();
        _swift_allocObject();
        *(undefined8 *)(uVar10 + 0x18) = 3;
        *(undefined8 *)(uVar10 + 0x10) = 1;
        *(ID *)(uVar10 + 0x20) = self_00;
        FUN_100b94080();
        pNVar11 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
        _swift_bridgeObjectRelease(uVar10);
        _objc_msgSend(self,"setExceptions:",pNVar11);
        FUN_100b94080(0,&DAT_101044928,&PTR_SentryThread_100f8de78);
        (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
        FUN_100b9fdc8(self,"setThreads:");
        FUN_100b6f868();
        FUN_100be26d8(uVar16);
        FUN_100b6f980();
        FUN_100b94080();
        (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
        _swift_bridgeObjectRelease(uVar16);
        FUN_100b9fdc8(self,"setDebugMeta:");
        FUN_100b6f868();
        _objc_msgSend((ID)&objc::class_t::SentrySDKInternal,"captureEvent:",self);
        return;
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100bc88ec);
      (*pcVar4)();
    }
    FUN_100b6f980();
    FUN_100b84dac(0);
    pcVar13 = 
    "Getting current thread returned an empty list. Can\'t create AppHang event without a stacktrace."
    ;
    lVar19 = -0x1c;
    uVar7 = 3;
    uVar15 = 0x62;
  }
  else {
    FUN_100b84dac(0);
    pcVar13 = "AppHangTracking paused. Ignoring reported app hang.";
    lVar19 = -0x48;
    uVar7 = 1;
    uVar15 = 0x53;
  }
  FUN_100b84df8(uVar7,lVar19 + -0x2fffffffffffff85,(ulong)(pcVar13 + -0x20) | 0x8000000000000000,
                0xd00000000000007b,0x8000000100dce5e0,uVar15);
  return;
}



/* Address: 0x100bc88ec | FUN_100bc88ec */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100bc88ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100bc82e0(param_3);
  return 0;
}



/* Address: 0x100bc891c | FUN_100bc891c */

void FUN_100bc891c(void)

{
  return;
}



/* Address: 0x100bc8920 | FUN_100bc8920 */

void FUN_100bc8920(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("Sentry.SentryHangTrackingIntegration",0x24,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100bc894c);
  (*pcVar1)();
}



/* Address: 0x100bc894c | FUN_100bc894c */

void FUN_100bc894c(undefined8 param_1,undefined8 param_2)

{
  FUN_100bc8920();
  _swift_getGenericMetadata(param_1,param_2,&TargetClassDescriptor_100ccfcb8);
  return;
}



/* Address: 0x100bc8958 | FUN_100bc8958 */

void FUN_100bc8958(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetClassDescriptor_100ccfcb8);
  return;
}



/* Address: 0x100bc8964 | FUN_100bc8964 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100bc8964(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  NSString *pNVar1;
  NSString *pNVar2;
  ID IVar3;
  ID unaff_x20;
  
  if (param_2 == 0) {
    pNVar1 = (NSString *)0x0;
  }
  else {
    pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(param_2);
  }
  if (param_4 == 0) {
    pNVar2 = (NSString *)0x0;
  }
  else {
    pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    FUN_100b6f980();
  }
  IVar3 = _objc_msgSend(unaff_x20,"initWithValue:type:",pNVar1,pNVar2);
  return IVar3;
}



/* Address: 0x100bc8a04 | FUN_100bc8a04 */

undefined1 * FUN_100bc8a04(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_58 [40];
  
  FUN_100076688(param_1,auStack_58);
  puVar1 = auStack_58;
  FUN_100bc8a60(puVar1);
  FUN_100004594(param_1);
  return puVar1;
}



/* Address: 0x100bc8a60 | FUN_100bc8a60 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100bc8dd0) */
/* WARNING: Removing unreachable block (ram,0x000100bc8dd8) */
/* WARNING: Removing unreachable block (ram,0x000100bc8b1c) */

ID FUN_100bc8a60(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  NSString *pNVar5;
  code *pcVar6;
  NSDictionary *pNVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ID unaff_x20;
  long unaff_x21;
  long lVar10;
  String SVar11;
  undefined1 auStack_90 [16];
  undefined8 auStack_80 [2];
  undefined1 auStack_70 [15];
  undefined1 local_61;
  undefined1 local_58;
  undefined7 uStack_57;
  
  puVar4 = &DAT_101047888;
  FUN_100b6730c();
  lVar10 = *(long *)(puVar4 + -8);
  lVar2 = -(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100bc9274();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_58 = 0;
    SVar11 = Swift::KeyedDecodingContainer::_decode(&local_58,puVar4);
    _objc_allocWithZone();
    pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar11.bridgeObject);
    unaff_x20 = _objc_msgSend(unaff_x20,"initWithType:",pNVar5);
    local_58 = 3;
    puVar9 = puVar4;
    Swift::KeyedDecodingContainer::_decodeIfPresent(&local_58);
    if (puVar9 == (undefined *)0x0) {
      pNVar5 = (NSString *)0x0;
    }
    else {
      pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(puVar9);
    }
    _objc_msgSend(unaff_x20,"setDesc:",pNVar5);
    *(undefined1 **)((long)auStack_80 + lVar2) = auStack_70 + lVar2;
    pcVar6 = FUN_100bc92b4;
    FUN_100bd03e0(FUN_100bc92b4,auStack_90 + lVar2);
    if (pcVar6 == (code *)0x0) {
      pNVar7 = (NSDictionary *)0x0;
    }
    else {
      pNVar7 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(pcVar6);
    }
    _objc_msgSend(unaff_x20,"setData:",pNVar7);
    uVar8 = 0;
    local_61 = 1;
    FUN_100b7e4f0(0);
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_58,&DAT_100f3d290,&local_61,puVar4,&DAT_100f3d290,uVar8);
    lVar3 = CONCAT71(uStack_57,local_58);
    lVar1 = 0;
    if (lVar3 != 1) {
      lVar1 = lVar3;
    }
    _objc_msgSend(unaff_x20,"setHandled:",lVar1);
    FUN_10001486c(lVar3);
    local_61 = 2;
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_58,&DAT_100f3d290,&local_61,puVar4,&DAT_100f3d290,uVar8);
    lVar3 = CONCAT71(uStack_57,local_58);
    lVar1 = 0;
    if (lVar3 != 1) {
      lVar1 = lVar3;
    }
    _objc_msgSend(unaff_x20,"setSynthetic:",lVar1);
    FUN_10001486c(lVar3);
    local_58 = 5;
    puVar9 = puVar4;
    Swift::KeyedDecodingContainer::_decodeIfPresent(&local_58);
    if (puVar9 == (undefined *)0x0) {
      pNVar5 = (NSString *)0x0;
    }
    else {
      pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(puVar9);
    }
    _objc_msgSend(unaff_x20,"setHelpLink:",pNVar5);
    uVar8 = 0;
    FUN_100be60a4(0);
    local_61 = 6;
    puVar9 = &DAT_101047898;
    FUN_100003a00(&DAT_101047898,FUN_100be60a4,&TargetProtocolConformanceDescriptor_100c9f08c);
    Swift::KeyedDecodingContainer::_decodeIfPresent(&local_58,uVar8,&local_61,puVar4,uVar8,puVar9);
    _objc_msgSend(unaff_x20,"setMeta:",CONCAT71(uStack_57,local_58));
    (**(code **)(lVar10 + 8))(auStack_70 + lVar2,puVar4);
    FUN_100004594(param_1);
  }
  else {
    FUN_100004594(param_1);
  }
  return unaff_x20;
}



/* Address: 0x100bc8eec | FUN_100bc8eec */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100bc8eec(undefined8 param_1,undefined8 param_2)

{
  NSString *pNVar1;
  ID IVar2;
  
  _swift_getObjectType();
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  IVar2 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"initWithType:",pNVar1);
  return IVar2;
}


