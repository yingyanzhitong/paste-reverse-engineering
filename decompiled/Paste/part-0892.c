/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10099a20c | FUN_10099a20c */

void FUN_10099a20c(void)

{
  FUN_10099a304(PTR__swift_errorRelease_100eae218,0x20,PTR__swift_deallocObject_100eae1b0);
  return;
}



/* Address: 0x10099a224 | FUN_10099a224 */

void FUN_10099a224(void)

{
  long unaff_x20;
  
  FUN_100999410(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10099a22c | FUN_10099a22c */

void FUN_10099a22c(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x10099a23c | FUN_10099a23c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10099a23c(void)

{
  return ZEXT816(0x100ff1d48);
}



/* Address: 0x10099a25c | FUN_10099a25c */

undefined1  [16] FUN_10099a25c(void)

{
  return ZEXT816(0x100f22968);
}



/* Address: 0x10099a26c | FUN_10099a26c */

undefined8 FUN_10099a26c(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff1db8;
  FUN_1000f7830(&DAT_100ff1db8,&DAT_100c8b7d0);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x10099a2b4 | FUN_10099a2b4 */

undefined8 FUN_10099a2b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff1db8;
  FUN_1000f7830(&DAT_100ff1db8,&DAT_100c8b7d0);
  (**(code **)(*(long *)(puVar1 + -8) + 0x28))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x10099a304 | FUN_10099a304 */

void FUN_10099a304(code *param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010099a354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x10099a358 | thunk_FUN_10099a0e8 */

void thunk_FUN_10099a0e8(void)

{
  FUN_10099a0e8();
  return;
}



/* Address: 0x10099a35c | thunk_FUN_10099a0e8 */

void thunk_FUN_10099a0e8(void)

{
  FUN_10099a0e8();
  return;
}



/* Address: 0x10099a360 | thunk_FUN_10099a0e8 */

void thunk_FUN_10099a0e8(void)

{
  FUN_10099a0e8();
  return;
}



/* Address: 0x10099a364 | thunk_FUN_10099a0e8 */

void thunk_FUN_10099a0e8(void)

{
  FUN_10099a0e8();
  return;
}



/* Address: 0x10099a368 | thunk_FUN_10099a0fc */

void thunk_FUN_10099a0fc(void)

{
  FUN_10099a0fc();
  return;
}



/* Address: 0x10099a36c | thunk_FUN_10099a0fc */

void thunk_FUN_10099a0fc(void)

{
  FUN_10099a0fc();
  return;
}



/* Address: 0x10099a370 | thunk_FUN_10099a0fc */

void thunk_FUN_10099a0fc(void)

{
  FUN_10099a0fc();
  return;
}



/* Address: 0x10099a374 | thunk_FUN_10099a0fc */

void thunk_FUN_10099a0fc(void)

{
  FUN_10099a0fc();
  return;
}



/* Address: 0x10099a378 | thunk_FUN_1009996b0 */

void thunk_FUN_1009996b0(void)

{
  FUN_1009996b0();
  return;
}



/* Address: 0x10099a37c | thunk_FUN_10099a224 */

void thunk_FUN_10099a224(void)

{
  FUN_10099a224();
  return;
}



/* Address: 0x10099a380 | thunk_FUN_100030410 */

void thunk_FUN_100030410(void)

{
  FUN_100030410();
  return;
}



/* Address: 0x10099a384 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x10099a388 | thunk_FUN_100405f18 */

void thunk_FUN_100405f18(void)

{
  thunk_FUN_100405f18();
  return;
}



/* Address: 0x10099a38c | thunk_FUN_10099a20c */

void thunk_FUN_10099a20c(void)

{
  FUN_10099a20c();
  return;
}



/* Address: 0x10099a390 | thunk_FUN_10099a22c */

void thunk_FUN_10099a22c(void)

{
  FUN_10099a22c();
  return;
}



/* Address: 0x10099a394 | FUN_10099a394 */

void FUN_10099a394(undefined8 *param_1,code *param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  code *pcVar8;
  
  puVar2 = param_1;
  FUN_10063de0c();
  uVar7 = *puVar2;
  uVar3 = param_1[4];
  lVar1 = param_1[5];
  _swift_getObjectType();
  uVar4 = uVar3;
  lVar6 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar4 & 1) == 0) {
    puVar5 = &DAT_100f22ea8;
    _swift_allocObject(&DAT_100f22ea8,0x20,7);
    *(undefined8 **)(puVar5 + 0x10) = param_1;
    *(undefined8 *)(puVar5 + 0x18) = uVar7;
    pcVar8 = *(code **)(lVar1 + 0x18);
    _swift_retain(param_1);
    _swift_errorRetain(uVar7);
    (*pcVar8)(thunk_FUN_1008d678c,puVar5,uVar3,lVar1);
    _swift_release(puVar5);
  }
  else {
    thunk_FUN_1005de8f4(uVar7);
    FUN_1006486f8();
    FUN_100004550(uVar7,lVar6);
    _swift_bridgeObjectRelease(param_3);
  }
  (*param_2)();
  return;
}



/* Address: 0x10099a48c | FUN_10099a48c */

undefined *
FUN_10099a48c(__uint64 param_1,DispatchQoS param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 *puVar2;
  long lVar3;
  DispatchTimeInterval DVar4;
  DispatchWorkItemFlags DVar5;
  undefined7 extraout_var;
  TimerFlags TVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  TimerFlags TVar11;
  void *aBlock;
  ulong uVar12;
  undefined *puVar13;
  long lVar14;
  DispatchWorkItemFlags flags;
  ulong uVar15;
  undefined8 unaff_x20;
  code *pcVar16;
  undefined *puVar17;
  long lVar18;
  undefined *puVar19;
  long lVar20;
  TimerFlags flags_00;
  DispatchWorkItemFlags deadline;
  undefined1 auStack_130 [8];
  undefined8 *local_128;
  undefined8 *local_120;
  long local_118;
  undefined *local_110;
  long local_108;
  long local_100;
  long local_f8;
  undefined8 local_f0;
  undefined1 auStack_b0 [24];
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *puStack_80;
  code *local_78;
  undefined *local_70;
  
  local_f0 = param_3;
  DVar5 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar14 = *(long *)(DVar5.unknown + -8);
  flags.unknown = auStack_130 + -(*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  DVar4 = Dispatch::DispatchTimeInterval::typeMetadataAccessor();
  local_f8 = CONCAT71(extraout_var,DVar4.value);
  local_100 = *(long *)(local_f8 + -8);
  uVar15 = *(long *)(local_100 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_108 = (long)flags.unknown - uVar15;
  lVar20 = local_108 - uVar15;
  local_110 = (undefined *)Dispatch::DispatchTime::typeMetadataAccessor();
  local_118 = *(long *)(local_110 + -8);
  deadline.unknown =
       (undefined *)(lVar20 - (*(long *)(local_118 + 0x40) + 0xfU & 0xfffffffffffffff0));
  TVar6 = TimerFlags::_typeMetadataAccessor();
  lVar18 = *(long *)(TVar6.unknown + -8);
  flags_00.unknown = deadline.unknown + -(*(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = &DAT_100ff07b8;
  FUN_1000f7830(&DAT_100ff07b8,&DAT_100c89500);
  _swift_allocObject();
  *(undefined8 *)(puVar7 + 0x20) = unaff_x20;
  *(undefined ***)(puVar7 + 0x28) = &PTR_PTR_100f21d18;
  local_120 = (undefined8 *)(puVar7 + 0x10);
  *local_120 = 0;
  puVar7[0x18] = 0xff;
  uVar8 = 0;
  FUN_1009a1eac(0);
  local_128 = (undefined8 *)(puVar7 + 0x30);
  *local_128 = 0;
  *(undefined8 *)(puVar7 + 0x38) = 0;
  *(undefined8 *)(puVar7 + 0x40) = 0;
  local_98 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1009a1ef0();
  _swift_retain();
  puVar9 = &DAT_100ff1c78;
  FUN_1000f7830(&DAT_100ff1c78,&DAT_100c8adc0);
  puVar10 = puVar9;
  FUN_1009a1f34();
  Swift::SetAlgebra::_init(flags_00.unknown,&local_98,puVar9,puVar10,TVar6.unknown,uVar8);
  TVar11.unknown = flags_00.unknown;
  (extension_Dispatch)::__C::OS_dispatch_source::_makeTimerSource(flags_00);
  (**(code **)(lVar18 + 8))(flags_00.unknown,TVar6.unknown);
  puVar9 = TVar11.unknown;
  _swift_getObjectType(TVar11.unknown);
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x10099a9d4);
    (*pcVar16)();
  }
  Dispatch::DispatchTime::init(param_1);
  FUN_100993360(lVar20,puVar9);
  lVar18 = local_108;
  FUN_1009933a4(local_108,puVar9);
  (extension_Dispatch)::__C::OS_dispatch_source_timer::schedule
            ((DispatchTime)deadline.unknown,(DispatchTimeInterval)(__int8)lVar20,
             (DispatchTimeInterval)(__int8)lVar18);
  lVar3 = local_f8;
  pcVar16 = *(code **)(local_100 + 8);
  (*pcVar16)(lVar18,local_f8);
  (*pcVar16)(lVar20,lVar3);
  (**(code **)(local_118 + 8))(deadline.unknown,local_110);
  Dispatch::DispatchWorkItemFlags::get_enforceQoS(deadline);
  puVar9 = &DAT_100f22ed0;
  _swift_allocObject(&DAT_100f22ed0,0x30,7);
  *(undefined8 *)(puVar9 + 0x10) = unaff_x20;
  *(undefined **)(puVar9 + 0x18) = puVar7;
  *(undefined8 *)(puVar9 + 0x20) = local_f0;
  *(undefined8 *)(puVar9 + 0x28) = param_4;
  local_78 = FUN_1009a1f88;
  local_98 = PTR___NSConcreteStackBlock_100ea82a0;
  local_90 = 0x42000000;
  local_88 = thunk_FUN_100030410;
  puStack_80 = &DAT_100f22ee8;
  local_70 = puVar9;
  aBlock = __Block_copy(&local_98);
  _swift_retain(unaff_x20);
  _swift_retain(puVar7);
  _swift_retain(param_4);
  (extension_Dispatch)::__C::OS_dispatch_source::_setEventHandler(param_2,flags);
  __Block_release(aBlock);
  (**(code **)(lVar14 + 8))(flags.unknown,DVar5.unknown);
  _swift_release(local_70);
  (extension_Dispatch)::__C::OS_dispatch_source::resume();
  puVar9 = &DAT_100f22f20;
  _swift_allocObject(&DAT_100f22f20,0x18,7);
  *(undefined **)(puVar9 + 0x10) = TVar11.unknown;
  puVar10 = &DAT_100f22f48;
  _swift_allocObject(&DAT_100f22f48,0x28,7);
  *(code **)(puVar10 + 0x10) = FUN_100997b58;
  *(undefined **)(puVar10 + 0x18) = puVar9;
  *(undefined **)(puVar10 + 0x20) = puVar7;
  uVar15 = *(ulong *)(puVar7 + 0x20);
  lVar14 = *(long *)(puVar7 + 0x28);
  _swift_getObjectType();
  pcVar16 = *(code **)(lVar14 + 0x10);
  _swift_retain_n(puVar7,3);
  _swift_unknownObjectRetain_n(TVar11.unknown,2);
  _swift_retain_n(puVar9,2);
  uVar12 = uVar15;
  (*pcVar16)(uVar15,lVar14);
  puVar2 = local_120;
  if ((uVar12 & 1) == 0) {
    _swift_unknownObjectRelease(TVar11.unknown);
    puVar13 = &DAT_100f22f70;
    _swift_allocObject(&DAT_100f22f70,0x28,7);
    *(undefined **)(puVar13 + 0x10) = puVar7;
    *(code **)(puVar13 + 0x18) = thunk_FUN_1006225d4;
    *(undefined **)(puVar13 + 0x20) = puVar10;
    pcVar16 = *(code **)(lVar14 + 0x18);
    _swift_retain(puVar7);
    _swift_retain(puVar10);
    (*pcVar16)(thunk_FUN_1008db360,puVar13,uVar15,lVar14);
    _swift_release(puVar13);
    puVar13 = puVar7;
    puVar17 = puVar9;
    puVar19 = puVar7;
  }
  else {
    _swift_beginAccess(local_120,&local_98,0,0);
    cVar1 = puVar7[0x18];
    puVar13 = puVar9;
    puVar17 = puVar7;
    puVar19 = puVar10;
    if (cVar1 == -1) {
      _swift_unknownObjectRelease(TVar11.unknown);
      _swift_beginAccess(local_128,auStack_b0,0x21,0);
      FUN_10064967c(thunk_FUN_1006225d4,puVar10);
      _swift_endAccess(auStack_b0);
      puVar10 = puVar7;
    }
    else {
      uVar8 = *puVar2;
      FUN_100308524(uVar8,cVar1);
      (extension_Dispatch)::__C::OS_dispatch_source::cancel();
      _swift_unknownObjectRelease(TVar11.unknown);
      FUN_100308538(uVar8,cVar1);
      puVar10 = puVar7;
    }
  }
  _swift_release(puVar13);
  _swift_release(puVar19);
  _swift_release(puVar9);
  _swift_release(puVar17);
  _swift_release(puVar10);
  puVar9 = &DAT_100f22f98;
  _swift_allocObject(&DAT_100f22f98,0x18,7);
  *(undefined **)(puVar9 + 0x10) = TVar11.unknown;
  return puVar7;
}



/* Address: 0x10099a9d4 | FUN_10099a9d4 */

void FUN_10099a9d4(undefined1 *param_1,long param_2,code *param_3)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 local_60 [2];
  
  if (param_1[_TtC20NIOTransportServices14NIOTSEventLoop::state] != '\x02') {
    pcVar9 = param_3;
    _swift_getObjectType(*(undefined8 *)(param_2 + 0x20));
    FUN_100642338();
    (*param_3)(local_60);
    uVar8 = 0;
    uVar7 = local_60[0];
    FUN_100630328(local_60[0],0);
    FUN_1006486f8();
    FUN_100004550(uVar7,uVar8);
    _swift_bridgeObjectRelease(pcVar9);
    FUN_1002ec258(local_60[0],0);
    return;
  }
  FUN_100997b80();
  puVar2 = &DAT_100eef640;
  uVar7 = 0;
  _swift_allocError(&DAT_100eef640,param_1,0,0);
  *param_1 = 2;
  uVar3 = *(ulong *)(param_2 + 0x20);
  lVar1 = *(long *)(param_2 + 0x28);
  _swift_getObjectType();
  uVar4 = uVar3;
  lVar6 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar4 & 1) == 0) {
    puVar5 = &DAT_100f22fc0;
    _swift_allocObject(&DAT_100f22fc0,0x20,7);
    *(long *)(puVar5 + 0x10) = param_2;
    *(undefined **)(puVar5 + 0x18) = puVar2;
    pcVar9 = *(code **)(lVar1 + 0x18);
    _swift_retain(param_2);
    _swift_errorRetain(puVar2);
    (*pcVar9)(thunk_FUN_1008d678c,puVar5,uVar3,lVar1);
    _swift_release(puVar5);
  }
  else {
    puVar5 = puVar2;
    thunk_FUN_1005de8f4(puVar2);
    FUN_1006486f8();
    FUN_100004550(puVar5,lVar6);
    _swift_bridgeObjectRelease(uVar7);
  }
  _swift_errorRelease(puVar2);
  return;
}



/* Address: 0x10099ab88 | FUN_10099ab88 */

void FUN_10099ab88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  DispatchTime DVar2;
  DispatchTime DVar3;
  __uint64 _Var4;
  long lVar5;
  long lVar6;
  
  DVar2 = Dispatch::DispatchTime::typeMetadataAccessor();
  lVar6 = *(long *)(DVar2.unknown + -8);
  lVar5 = *(long *)(lVar6 + 0x40);
  DVar3 = Dispatch::DispatchTime::now(DVar2);
  _Var4 = Dispatch::DispatchTime::get_uptimeNanoseconds(DVar3);
  (**(code **)(lVar6 + 8))
            (&stack0xffffffffffffffa0 + -(lVar5 + 0xfU & 0xfffffffffffffff0),DVar2.unknown);
  if (0x7ffffffffffffffe < _Var4) {
    _Var4 = 0x7fffffffffffffff;
  }
  uVar1 = 0x7fffffffffffffff;
  if (!SCARRY8(_Var4,param_1)) {
    uVar1 = _Var4 + param_1 & ((long)(_Var4 + param_1) >> 0x3f ^ 0xffffffffffffffffU);
  }
  FUN_10099a48c(uVar1,param_2,param_3,param_4);
  return;
}



/* Address: 0x10099ac4c | FUN_10099ac4c */

undefined8 FUN_10099ac4c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _swift_getObjectType();
  uVar1 = param_1;
  FUN_1009a11b8(param_1);
  _swift_unknownObjectRelease(param_1);
  return uVar1;
}



/* Address: 0x10099ac9c | FUN_10099ac9c */

undefined8 FUN_10099ac9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _swift_getObjectType();
  _swift_getObjectType(param_3);
  uVar1 = param_1;
  FUN_1009a1250(param_1,param_3);
  _swift_unknownObjectRelease(param_1);
  _swift_unknownObjectRelease(param_3);
  return uVar1;
}



/* Address: 0x10099ad1c | FUN_10099ad1c */

long FUN_10099ad1c(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  _swift_allocObject();
  lVar2 = param_1;
  _swift_retain_n(param_1,2);
  FUN_1009a0b04();
  if (lVar2 != 0) {
    _swift_release(param_1);
    return lVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10099ad84);
  (*pcVar1)();
}



/* Address: 0x10099ad84 | FUN_10099ad84 */

void FUN_10099ad84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 unaff_x20;
  
  _swift_allocObject();
  uVar1 = param_1;
  _swift_getObjectType(param_1);
  FUN_1009a0e4c(param_1,param_3,param_4,unaff_x20,uVar1,param_2);
  return;
}



/* Address: 0x10099adf0 | FUN_10099adf0 */

void FUN_10099adf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _swift_getObjectType();
  FUN_1009a0e4c(param_1,param_3,param_4);
  return;
}



/* Address: 0x10099ae44 | FUN_10099ae44 */

long FUN_10099ae44(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 unaff_x20;
  
  _swift_allocObject();
  _swift_retain(param_1);
  _swift_retain(param_2);
  lVar2 = param_1;
  FUN_1009a0b04(param_1,param_2,&PTR_PTR_100f22918,unaff_x20);
  if (lVar2 != 0) {
    _swift_release(param_1);
    _swift_release(param_2);
    return lVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10099aecc);
  (*pcVar1)();
}



/* Address: 0x10099aecc | FUN_10099aecc */

void FUN_10099aecc(undefined8 param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  puVar1 = (undefined8 *)
           (unaff_x20 + _TtC20NIOTransportServices22NIOTSListenerBootstrap::bindTimeout);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
  _swift_retain();
  return;
}



/* Address: 0x10099aee8 | FUN_10099aee8 */

void FUN_10099aee8(undefined8 param_1)

{
  FUN_100983e88(param_1,&_TtC20NIOTransportServices22NIOTSListenerBootstrap::serverQoS);
  return;
}



/* Address: 0x10099aef4 | FUN_10099aef4 */

void FUN_10099aef4(undefined8 param_1)

{
  FUN_100983e88(param_1,&_TtC20NIOTransportServices22NIOTSListenerBootstrap::childQoS);
  return;
}



/* Address: 0x10099af00 | FUN_10099af00 */

void FUN_10099af00(undefined8 param_1)

{
  FUN_100983f78(param_1,&_TtC20NIOTransportServices22NIOTSListenerBootstrap::tcpOptions);
  return;
}



/* Address: 0x10099af0c | FUN_10099af0c */

void FUN_10099af0c(undefined8 param_1)

{
  FUN_100983f78(param_1,&_TtC20NIOTransportServices22NIOTSListenerBootstrap::childTCPOptions);
  return;
}



/* Address: 0x10099af18 | FUN_10099af18 */

void FUN_10099af18(undefined8 param_1)

{
  FUN_100983fc4(param_1,&_TtC20NIOTransportServices22NIOTSListenerBootstrap::tlsOptions);
  return;
}



/* Address: 0x10099af24 | FUN_10099af24 */

void FUN_10099af24(undefined8 param_1)

{
  FUN_100983fc4(param_1,&_TtC20NIOTransportServices22NIOTSListenerBootstrap::childTLSOptions);
  return;
}



/* Address: 0x10099af30 | FUN_10099af30 */

void FUN_10099af30(undefined8 param_1,undefined8 param_2)

{
  FUN_100984014(param_1,param_2,
                &_TtC20NIOTransportServices22NIOTSListenerBootstrap::nwParametersConfigurator);
  return;
}



/* Address: 0x10099af3c | FUN_10099af3c */

void FUN_10099af3c(undefined8 param_1,undefined8 param_2)

{
  FUN_100984014(param_1,param_2,
                &_TtC20NIOTransportServices22NIOTSListenerBootstrap::childNWParametersConfigurator);
  return;
}



/* Address: 0x10099af48 | FUN_10099af48 */

void FUN_10099af48(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0x50,auStack_48,0x21,0);
  FUN_100989c20(param_1);
  _swift_endAccess(auStack_48);
  _swift_retain();
  return;
}



/* Address: 0x10099afa8 | FUN_10099afa8 */

undefined * FUN_10099afa8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long unaff_x20;
  
  if (param_3 >> 0x10 == 0) {
    puVar5 = &DAT_100f22a20;
    _swift_allocObject(&DAT_100f22a20,0x28,7);
    *(undefined8 *)(puVar5 + 0x10) = param_1;
    *(undefined8 *)(puVar5 + 0x18) = param_2;
    *(ulong *)(puVar5 + 0x20) = param_3;
    _swift_bridgeObjectRetain(param_2);
    puVar1 = (undefined *)0x0;
    FUN_10099b20c(0,1,FUN_1009a1348,puVar5);
    _swift_release(puVar5);
  }
  else {
    puVar2 = *(ulong **)(unaff_x20 + 0x10);
    lVar7 = *(long *)(unaff_x20 + 0x18);
    _swift_getObjectType();
    (**(code **)(lVar7 + 0x10))();
    puVar3 = puVar2;
    _swift_getObjectType();
    puVar4 = puVar3;
    FUN_100982b50();
    puVar5 = &DAT_100f21b58;
    _swift_allocError(&DAT_100f21b58,puVar4,0,0);
    *puVar4 = param_3;
    puVar6 = &DAT_100ff07c0;
    FUN_1000f7830(&DAT_100ff07c0,&DAT_100c89400);
    puVar1 = puVar5;
    FUN_10063dd74(puVar5,puVar3,puVar6,lVar7);
    _swift_unknownObjectRelease(puVar2);
    _swift_errorRelease(puVar5);
  }
  return puVar1;
}



/* Address: 0x10099b0c4 | FUN_10099b0c4 */

/* WARNING: Removing unreachable block (ram,0x00010099b100) */
/* WARNING: Removing unreachable block (ram,0x00010099b120) */
/* WARNING: Removing unreachable block (ram,0x00010099b19c) */

void FUN_10099b0c4(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  FUN_100668048(param_3,param_4,param_5);
  uVar1 = 0;
  FUN_1009a2af4(0);
  FUN_10061d040(param_3,param_2,uVar1,&PTR_PTR_100f24068);
  _swift_release(param_3 & 0x3fffffffffffffff);
  return;
}



/* Address: 0x10099b20c | FUN_10099b20c */

undefined * FUN_10099b20c(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  Cache CVar1;
  Implementation IVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long lVar7;
  MultipathServiceType MVar8;
  int iVar9;
  undefined *puVar10;
  class_t *pcVar11;
  class_t *pcVar12;
  undefined7 extraout_var;
  undefined8 uVar13;
  DispatchQoS DVar14;
  undefined7 extraout_var_00;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  ulong uVar20;
  long lVar21;
  long unaff_x20;
  class_t *pcVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  code *pcVar25;
  undefined8 uVar26;
  long lVar27;
  code *pcVar28;
  undefined8 uVar29;
  long local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  class_t *local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined *local_140;
  undefined4 local_134;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  class_t *local_118;
  undefined8 local_110;
  Implementation local_108;
  long local_100;
  long local_f8;
  undefined8 local_f0;
  long local_e8;
  pthread_mutexattr_t local_e0;
  pthread_mutexattr_t local_d0;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  puVar10 = &DAT_100ff0820;
  local_100 = param_1;
  FUN_1000f7830(&DAT_100ff0820,&DAT_100c89460);
  uVar20 = *(long *)(*(long *)(puVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_e8 = (long)&local_1a0 - uVar20;
  lVar27 = local_e8 - uVar20;
  pcVar22 = *(class_t **)(unaff_x20 + 0x10);
  lVar21 = *(long *)(unaff_x20 + 0x18);
  _swift_getObjectType();
  pcVar25 = *(code **)(lVar21 + 0x10);
  pcVar11 = pcVar22;
  (*pcVar25)();
  pcVar12 = pcVar11;
  _object_getClass();
  if (pcVar12 != &objc::class_t::_TtC20NIOTransportServices14NIOTSEventLoop) {
                    /* WARNING: Does not return */
    pcVar25 = (code *)SoftwareBreakpoint(1,0x10099be20);
    (*pcVar25)();
  }
  CVar1 = *(Cache *)(unaff_x20 + 0x30);
  IVar2 = *(Implementation *)(unaff_x20 + 0x38);
  local_134 = param_2;
  local_130 = param_3;
  local_120 = param_4;
  local_118 = pcVar11;
  local_108 = IVar2;
  local_f8 = lVar27;
  if (CVar1 == 0) {
    _swift_unknownObjectRetain(pcVar11);
    pcVar28 = FUN_1009a2054;
  }
  else {
    pcVar11 = (class_t *)&DAT_100f231f0;
    _swift_allocObject(&DAT_100f231f0,0x20,7);
    pcVar11->cache = CVar1;
    pcVar11->vtable = IVar2;
    pcVar28 = thunk_FUN_10093c770;
  }
  puVar10 = &DAT_100f23178;
  _swift_allocObject(&DAT_100f23178,0x20,7);
  *(code **)(puVar10 + 0x10) = pcVar28;
  *(class_t **)(puVar10 + 0x18) = pcVar11;
  uVar13 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x48);
  local_140 = puVar10;
  _swift_beginAccess(unaff_x20 + 0x50,auStack_88,0,0);
  local_f0 = *(undefined8 *)(unaff_x20 + 0x50);
  _swift_beginAccess(unaff_x20 + 0x58,auStack_a0,0,0);
  lVar7 = local_100;
  lVar27 = _TtC20NIOTransportServices22NIOTSListenerBootstrap::childQoS;
  uVar23 = *(undefined8 *)(unaff_x20 + 0x58);
  local_148 = uVar23;
  local_128 = uVar13;
  local_110 = uVar19;
  if (local_100 == 0) {
    uVar19 = *(undefined8 *)
              (unaff_x20 + _TtC20NIOTransportServices22NIOTSListenerBootstrap::tcpOptions);
    local_100 = *(long *)(unaff_x20 + _TtC20NIOTransportServices22NIOTSListenerBootstrap::tlsOptions
                         );
    local_190 = *(undefined8 *)
                 (unaff_x20 +
                 _TtC20NIOTransportServices22NIOTSListenerBootstrap::nwParametersConfigurator);
    local_188 = ((undefined8 *)
                (unaff_x20 +
                _TtC20NIOTransportServices22NIOTSListenerBootstrap::nwParametersConfigurator))[1];
    uStack_178 = *(undefined8 *)(unaff_x20 + 0x28);
    local_180 = *(class_t **)(unaff_x20 + 0x20);
    _swift_beginAccess(unaff_x20 + _TtC20NIOTransportServices22NIOTSListenerBootstrap::childQoS,
                       auStack_b8,0,0);
    FUN_100982e5c(unaff_x20 + lVar27,local_f8);
    uVar26 = *(undefined8 *)
              (unaff_x20 + _TtC20NIOTransportServices22NIOTSListenerBootstrap::childTCPOptions);
    local_150 = *(undefined8 *)
                 (unaff_x20 + _TtC20NIOTransportServices22NIOTSListenerBootstrap::childTLSOptions);
    local_158 = *(undefined8 *)
                 (unaff_x20 +
                 _TtC20NIOTransportServices22NIOTSListenerBootstrap::childNWParametersConfigurator);
    local_170 = ((undefined8 *)
                (unaff_x20 +
                _TtC20NIOTransportServices22NIOTSListenerBootstrap::childNWParametersConfigurator))
                [1];
    DVar14 = Dispatch::DispatchQoS::typeMetadataAccessor();
    (**(code **)(*(long *)(DVar14.unknown + -8) + 0x38))(local_e8,1,1);
    lVar27 = 0;
    FUN_1009a2af4();
    uVar20 = (ulong)*(uint *)(lVar27 + 0x30);
    uVar18 = (ulong)*(ushort *)(lVar27 + 0x34);
    _swift_allocObject();
    lVar21 = lVar27;
    FUN_100611728();
    *(long *)(lVar27 + 0x10) = lVar21;
    *(ulong *)(lVar27 + 0x18) = uVar20;
    *(ulong *)(lVar27 + 0x20) = uVar18;
    *(undefined **)(lVar27 + 0x28) = DVar14.unknown;
    *(undefined8 *)(lVar27 + 0x48) = 0;
    *(undefined8 *)(lVar27 + 0x58) = 0;
    *(undefined8 *)(lVar27 + 0x80) = 0;
    *(undefined8 *)(lVar27 + 0x30) = 0;
    *(undefined8 *)(lVar27 + 0x38) = 0;
    *(undefined2 *)(lVar27 + 0x88) = 0x101;
    puVar10 = &DAT_100ff0960;
    FUN_1000f7830(&DAT_100ff0960,&DAT_100c8af90);
    _swift_allocObject();
    puVar10[0x10] = 0;
    *(undefined **)(lVar27 + 0x90) = puVar10;
    *(undefined2 *)(lVar27 + 0x98) = 0x100;
    *(undefined4 *)(lVar27 + 0x9a) = 0;
    lVar21 = DAT_101058250;
    uVar3 = *(undefined4 *)
             PTR___enum_case_for_Network_NWParameters_MultipathServiceType_disabled_Network_NWParameters_MultipathServiceType_Type___>_Network_NWParameters_MultipathServiceType_100eaa130
    ;
    MVar8 = Network::NWParameters::MultipathServiceType::typeMetadataAccessor();
    (**(code **)(*(long *)(CONCAT71(extraout_var_00,MVar8.value) + -8) + 0x68))
              (lVar27 + lVar21,uVar3,CONCAT71(extraout_var_00,MVar8.value));
    puVar5 = (undefined8 *)(lVar27 + DAT_101058278);
    puVar5[1] = 0xf000000000000007;
    *puVar5 = 0xf000000000000007;
    local_1a0 = DAT_101058280;
    puVar10 = &DAT_100ff0968;
    FUN_1000f7830(&DAT_100ff0968,&DAT_100c89510);
    _swift_allocObject();
    local_d0.__sig = 0;
    local_d0.__opaque[0] = '\0';
    local_d0.__opaque[1] = '\0';
    local_d0.__opaque[2] = '\0';
    local_d0.__opaque[3] = '\0';
    local_d0.__opaque[4] = '\0';
    local_d0.__opaque[5] = '\0';
    local_d0.__opaque[6] = '\0';
    local_d0.__opaque[7] = '\0';
    _swift_retain(uVar19);
    _swift_retain(uVar26);
    pcVar11 = local_118;
    _swift_unknownObjectRetain(local_118);
    FUN_100011128(CVar1,local_108);
    uVar24 = local_110;
    FUN_100011128(uVar13,local_110);
    _swift_retain(local_100);
    _swift_bridgeObjectRetain(local_f0);
    uVar13 = local_190;
    _swift_bridgeObjectRetain(uVar23);
    local_198 = uVar19;
    _swift_retain(uVar19);
    local_108 = uVar26;
    _swift_retain(uVar26);
    uVar19 = local_188;
    FUN_100011128(uVar13);
    _swift_retain(local_150);
    FUN_100011128(local_158,local_170);
    _pthread_mutexattr_init(&local_d0);
    iVar9 = _pthread_mutex_init((pthread_mutex_t *)(puVar10 + 0x10),&local_d0);
    if (iVar9 != 0) {
                    /* WARNING: Does not return */
      pcVar25 = (code *)SoftwareBreakpoint(1,0x10099be2c);
      (*pcVar25)();
    }
    *(undefined **)(lVar27 + local_1a0) = puVar10;
    *(class_t **)(lVar27 + 0x40) = pcVar11;
    puVar10 = &DAT_100ff07b8;
    FUN_1000f7830(&DAT_100ff07b8,&DAT_100c89500);
    _swift_allocObject();
    *(class_t **)(puVar10 + 0x20) = pcVar11;
    *(undefined ***)(puVar10 + 0x28) = &PTR_PTR_100f21d18;
    *(undefined8 *)(puVar10 + 0x30) = 0;
    *(undefined8 *)(puVar10 + 0x10) = 0;
    puVar10[0x18] = 0xff;
    *(undefined8 *)(puVar10 + 0x38) = 0;
    *(undefined8 *)(puVar10 + 0x40) = 0;
    *(undefined **)(lVar27 + 0x50) = puVar10;
    _swift_unknownObjectRetain_n(pcVar11,2);
    lVar7 = local_e8;
    uVar26 = 0xd000000000000025;
    FUN_100992394(0xd000000000000025,0x8000000100db6e50,local_e8);
    lVar21 = local_f8;
    uVar23 = local_198;
    *(undefined8 *)(lVar27 + 0x78) = uVar26;
    *(undefined8 *)(lVar27 + DAT_101058288) = local_198;
    *(long *)(lVar27 + 0x60) = local_100;
    *(undefined8 *)(lVar27 + 0x68) = uVar13;
    *(undefined8 *)(lVar27 + 0x70) = uVar19;
    puVar5 = (undefined8 *)(lVar27 + DAT_101058258);
    puVar5[1] = uStack_178;
    *puVar5 = local_180;
    FUN_100982e5c(local_f8,lVar27 + DAT_101058260);
    IVar2 = local_108;
    *(Implementation *)(lVar27 + DAT_101058290) = local_108;
    *(undefined8 *)(lVar27 + DAT_101058268) = local_150;
    puVar5 = (undefined8 *)(lVar27 + DAT_101058270);
    *puVar5 = local_158;
    puVar5[1] = local_170;
    FUN_100631d88(0);
    _swift_allocObject();
    _swift_unknownObjectRetain(local_180);
    lVar15 = lVar27;
    _swift_retain();
    FUN_10062b720();
    uVar13 = local_f0;
    _swift_release(uVar23);
    _swift_release(IVar2);
    _swift_unknownObjectRelease(pcVar11);
    FUN_100986e74(lVar7);
    FUN_100986e74(lVar21);
    uVar19 = *(undefined8 *)(lVar27 + 0x48);
    *(long *)(lVar27 + 0x48) = lVar15;
  }
  else {
    FUN_100011128(CVar1,local_108);
    FUN_100011128(uVar13,uVar19);
    _swift_retain(lVar7);
    _swift_bridgeObjectRetain(local_f0);
    _swift_bridgeObjectRetain(uVar23);
    (*pcVar25)(pcVar22,lVar21);
    local_180 = pcVar22;
    _object_getClass();
    lVar21 = _TtC20NIOTransportServices22NIOTSListenerBootstrap::serverQoS;
    if (pcVar22 != &objc::class_t::_TtC20NIOTransportServices14NIOTSEventLoop) {
                    /* WARNING: Does not return */
      pcVar25 = (code *)SoftwareBreakpoint(1,0x10099be24);
      (*pcVar25)();
    }
    _swift_beginAccess(unaff_x20 + _TtC20NIOTransportServices22NIOTSListenerBootstrap::serverQoS,
                       auStack_b8,0,0);
    FUN_100982e5c(unaff_x20 + lVar21,local_f8);
    lVar21 = _TtC20NIOTransportServices22NIOTSListenerBootstrap::childQoS;
    uVar23 = *(undefined8 *)
              (unaff_x20 + _TtC20NIOTransportServices22NIOTSListenerBootstrap::tcpOptions);
    uVar24 = *(undefined8 *)
              (unaff_x20 + _TtC20NIOTransportServices22NIOTSListenerBootstrap::tlsOptions);
    local_108 = *(undefined8 *)
                 (unaff_x20 +
                 _TtC20NIOTransportServices22NIOTSListenerBootstrap::nwParametersConfigurator);
    local_150 = ((undefined8 *)
                (unaff_x20 +
                _TtC20NIOTransportServices22NIOTSListenerBootstrap::nwParametersConfigurator))[1];
    uStack_168 = *(undefined8 *)(unaff_x20 + 0x28);
    local_170 = *(undefined8 *)(unaff_x20 + 0x20);
    uVar19 = 0;
    _swift_beginAccess(unaff_x20 + _TtC20NIOTransportServices22NIOTSListenerBootstrap::childQoS,
                       &local_d0,0);
    FUN_100982e5c(unaff_x20 + lVar21,local_e8);
    uVar26 = *(undefined8 *)
              (unaff_x20 + _TtC20NIOTransportServices22NIOTSListenerBootstrap::childTCPOptions);
    uVar29 = *(undefined8 *)
              (unaff_x20 + _TtC20NIOTransportServices22NIOTSListenerBootstrap::childTLSOptions);
    uVar13 = *(undefined8 *)
              (unaff_x20 +
              _TtC20NIOTransportServices22NIOTSListenerBootstrap::childNWParametersConfigurator);
    local_158 = ((undefined8 *)
                (unaff_x20 +
                _TtC20NIOTransportServices22NIOTSListenerBootstrap::childNWParametersConfigurator))
                [1];
    lVar27 = 0;
    FUN_1009a2af4();
    uVar20 = (ulong)*(uint *)(lVar27 + 0x30);
    uVar18 = (ulong)*(ushort *)(lVar27 + 0x34);
    _swift_allocObject();
    lVar21 = lVar27;
    FUN_100611728();
    *(long *)(lVar27 + 0x10) = lVar21;
    *(ulong *)(lVar27 + 0x18) = uVar20;
    *(ulong *)(lVar27 + 0x20) = uVar18;
    *(undefined8 *)(lVar27 + 0x28) = uVar19;
    *(undefined8 *)(lVar27 + 0x48) = 0;
    *(undefined8 *)(lVar27 + 0x58) = 0;
    *(undefined8 *)(lVar27 + 0x80) = 0;
    *(undefined8 *)(lVar27 + 0x30) = 0;
    *(undefined8 *)(lVar27 + 0x38) = 0;
    *(undefined2 *)(lVar27 + 0x88) = 0x101;
    puVar10 = &DAT_100ff0960;
    FUN_1000f7830(&DAT_100ff0960,&DAT_100c8af90);
    _swift_allocObject();
    puVar10[0x10] = 0;
    *(undefined **)(lVar27 + 0x90) = puVar10;
    *(undefined2 *)(lVar27 + 0x98) = 0x100;
    *(undefined4 *)(lVar27 + 0x9a) = 0;
    lVar21 = DAT_101058250;
    uVar3 = *(undefined4 *)
             PTR___enum_case_for_Network_NWParameters_MultipathServiceType_disabled_Network_NWParameters_MultipathServiceType_Type___>_Network_NWParameters_MultipathServiceType_100eaa130
    ;
    MVar8 = Network::NWParameters::MultipathServiceType::typeMetadataAccessor();
    (**(code **)(*(long *)(CONCAT71(extraout_var,MVar8.value) + -8) + 0x68))
              (lVar27 + lVar21,uVar3,CONCAT71(extraout_var,MVar8.value));
    puVar5 = (undefined8 *)(lVar27 + DAT_101058278);
    puVar5[1] = 0xf000000000000007;
    *puVar5 = 0xf000000000000007;
    lVar21 = DAT_101058280;
    puVar10 = &DAT_100ff0968;
    FUN_1000f7830(&DAT_100ff0968,&DAT_100c89510);
    _swift_allocObject();
    local_e0.__sig = 0;
    local_e0.__opaque[0] = '\0';
    local_e0.__opaque[1] = '\0';
    local_e0.__opaque[2] = '\0';
    local_e0.__opaque[3] = '\0';
    local_e0.__opaque[4] = '\0';
    local_e0.__opaque[5] = '\0';
    local_e0.__opaque[6] = '\0';
    local_e0.__opaque[7] = '\0';
    _swift_retain(uVar24);
    _swift_retain_n(uVar23,2);
    _swift_retain_n(uVar26,2);
    FUN_100011128(local_108,local_150);
    local_188 = uVar29;
    _swift_retain(uVar29);
    local_190 = uVar13;
    FUN_100011128(uVar13,local_158);
    _pthread_mutexattr_init(&local_e0);
    iVar9 = _pthread_mutex_init((pthread_mutex_t *)(puVar10 + 0x10),&local_e0);
    pcVar11 = local_180;
    if (iVar9 != 0) {
                    /* WARNING: Does not return */
      pcVar25 = (code *)SoftwareBreakpoint(1,0x10099be28);
      (*pcVar25)();
    }
    *(undefined **)(lVar27 + lVar21) = puVar10;
    *(class_t **)(lVar27 + 0x40) = local_180;
    puVar10 = &DAT_100ff07b8;
    FUN_1000f7830(&DAT_100ff07b8,&DAT_100c89500);
    _swift_allocObject();
    lVar7 = local_e8;
    lVar21 = local_f8;
    *(class_t **)(puVar10 + 0x20) = pcVar11;
    *(undefined ***)(puVar10 + 0x28) = &PTR_PTR_100f21d18;
    *(undefined8 *)(puVar10 + 0x30) = 0;
    *(undefined8 *)(puVar10 + 0x10) = 0;
    puVar10[0x18] = 0xff;
    *(undefined8 *)(puVar10 + 0x38) = 0;
    *(undefined8 *)(puVar10 + 0x40) = 0;
    *(undefined **)(lVar27 + 0x50) = puVar10;
    _swift_unknownObjectRetain_n(pcVar11,2);
    uVar13 = 0xd000000000000025;
    FUN_100992394(0xd000000000000025,0x8000000100db6e50,lVar21);
    *(undefined8 *)(lVar27 + 0x78) = uVar13;
    *(undefined8 *)(lVar27 + DAT_101058288) = uVar23;
    *(undefined8 *)(lVar27 + 0x60) = uVar24;
    *(Implementation *)(lVar27 + 0x68) = local_108;
    *(undefined8 *)(lVar27 + 0x70) = local_150;
    puVar5 = (undefined8 *)(lVar27 + DAT_101058258);
    puVar5[1] = uStack_168;
    *puVar5 = local_170;
    FUN_100982e5c(lVar7,lVar27 + DAT_101058260);
    *(undefined8 *)(lVar27 + DAT_101058290) = uVar26;
    *(undefined8 *)(lVar27 + DAT_101058268) = local_188;
    puVar5 = (undefined8 *)(lVar27 + DAT_101058270);
    *puVar5 = local_190;
    puVar5[1] = local_158;
    FUN_100631d88(0);
    _swift_allocObject();
    _swift_unknownObjectRetain(local_170);
    lVar15 = lVar27;
    _swift_retain();
    FUN_10062b720();
    _swift_release(uVar23);
    _swift_release(uVar26);
    _swift_unknownObjectRelease(pcVar11);
    FUN_100986e74(lVar7);
    FUN_100986e74(lVar21);
    uVar13 = *(undefined8 *)(lVar27 + 0x48);
    *(long *)(lVar27 + 0x48) = lVar15;
    _swift_release(uVar13);
    uVar19 = *(undefined8 *)(lVar27 + 0x58);
    *(long *)(lVar27 + 0x58) = local_100;
    pcVar11 = local_118;
    uVar13 = local_f0;
    uVar24 = local_110;
  }
  _swift_release(uVar19);
  uVar26 = *(undefined8 *)
            (unaff_x20 + _TtC20NIOTransportServices22NIOTSListenerBootstrap::bindTimeout);
  uVar4 = *(undefined1 *)
           ((undefined8 *)
            (unaff_x20 + _TtC20NIOTransportServices22NIOTSListenerBootstrap::bindTimeout) + 1);
  puVar10 = &DAT_100f231a0;
  _swift_allocObject(&DAT_100f231a0,0x71,7);
  uVar23 = local_120;
  uVar19 = local_128;
  puVar6 = local_140;
  *(undefined8 *)(puVar10 + 0x10) = uVar13;
  *(long *)(puVar10 + 0x18) = lVar27;
  *(code **)(puVar10 + 0x20) = thunk_FUN_10093c220;
  *(undefined **)(puVar10 + 0x28) = local_140;
  *(class_t **)(puVar10 + 0x30) = pcVar11;
  *(undefined8 *)(puVar10 + 0x38) = local_128;
  *(undefined8 *)(puVar10 + 0x40) = uVar24;
  *(undefined8 *)(puVar10 + 0x48) = local_148;
  puVar10[0x50] = (byte)local_134 & 1;
  *(undefined8 *)(puVar10 + 0x58) = local_130;
  *(undefined8 *)(puVar10 + 0x60) = local_120;
  *(undefined8 *)(puVar10 + 0x68) = uVar26;
  puVar10[0x70] = uVar4;
  puVar16 = &DAT_100ff0970;
  FUN_1000f7830(&DAT_100ff0970,&DAT_100c89518);
  _swift_allocObject();
  *(class_t **)(puVar16 + 0x20) = pcVar11;
  *(undefined ***)(puVar16 + 0x28) = &PTR_PTR_100f21d18;
  *(undefined8 *)(puVar16 + 0x10) = 0;
  puVar16[0x18] = 0xff;
  *(undefined8 *)(puVar16 + 0x38) = 0;
  *(undefined8 *)(puVar16 + 0x40) = 0;
  *(undefined8 *)(puVar16 + 0x30) = 0;
  puVar17 = &DAT_100f231c8;
  _swift_allocObject(&DAT_100f231c8,0x28,7);
  *(undefined **)(puVar17 + 0x10) = puVar16;
  *(code **)(puVar17 + 0x18) = FUN_1009a20ec;
  *(undefined **)(puVar17 + 0x20) = puVar10;
  lVar21 = _TtC20NIOTransportServices14NIOTSEventLoop::defaultQoS;
  _swift_unknownObjectRetain_n(pcVar11,2);
  FUN_100011128(uVar19,uVar24);
  _swift_retain(lVar27);
  _swift_retain(puVar6);
  _swift_retain(uVar23);
  _swift_retain(puVar16);
  _swift_retain(puVar10);
  FUN_100992db8((undefined *)((long)&pcVar11->isa + lVar21),FUN_100982f6c,puVar17);
  _swift_release(puVar17);
  _swift_release(puVar10);
  puVar10 = puVar16;
  FUN_10099f888(puVar16);
  _swift_release(puVar6);
  _swift_unknownObjectRelease(pcVar11);
  _swift_release(lVar27);
  FUN_100004550(uVar19,uVar24);
  _swift_release(puVar16);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
    return puVar10;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x10099be30 | FUN_10099be30 */

undefined8 FUN_10099be30(ulong param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &DAT_100f22a48;
  _swift_allocObject(&DAT_100f22a48,0x18,7);
  *(ulong *)(puVar1 + 0x10) = param_1;
  _swift_retain(param_1 & 0x3fffffffffffffff);
  uVar2 = 0;
  FUN_10099b20c(0,1,FUN_1009a1354,puVar1);
  _swift_release(puVar1);
  return uVar2;
}



/* Address: 0x10099bea0 | FUN_10099bea0 */

undefined8 FUN_10099bea0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &DAT_100f22a70;
  _swift_allocObject(&DAT_100f22a70,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  _swift_bridgeObjectRetain(param_2);
  uVar2 = 0;
  FUN_10099b20c(0,1,FUN_1009a13c8,puVar1);
  _swift_release(puVar1);
  return uVar2;
}



/* Address: 0x10099bf14 | FUN_10099bf14 */

/* WARNING: Removing unreachable block (ram,0x00010099bf5c) */
/* WARNING: Removing unreachable block (ram,0x00010099bf7c) */
/* WARNING: Removing unreachable block (ram,0x00010099bff8) */

void FUN_10099bf14(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _swift_bridgeObjectRetain(param_4);
  FUN_100667868(param_3,param_4);
  uVar1 = 0;
  FUN_1009a2af4(0);
  FUN_10061d040(param_3,param_2,uVar1,&PTR_PTR_100f24068);
  _swift_release(param_3 & 0x3fffffffffffffff);
  return;
}



/* Address: 0x10099c068 | FUN_10099c068 */

undefined8 FUN_10099c068(undefined8 param_1)

{
  NWEndpoint NVar1;
  undefined7 extraout_var;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar2;
  
  NVar1 = Network::NWEndpoint::typeMetadataAccessor();
  lVar2 = CONCAT71(extraout_var,NVar1.value);
  lVar6 = *(long *)(lVar2 + -8);
  lVar7 = *(long *)(lVar6 + 0x40);
  (**(code **)(lVar6 + 0x10))
            (&stack0xffffffffffffffb0 + -(lVar7 + 0xfU & 0xfffffffffffffff0),param_1,lVar2);
  uVar5 = (ulong)*(byte *)(lVar6 + 0x50);
  uVar8 = uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff);
  puVar3 = &DAT_100f22a98;
  _swift_allocObject(&DAT_100f22a98,uVar8 + lVar7,uVar5 | 7);
  (**(code **)(lVar6 + 0x20))
            (puVar3 + uVar8,&stack0xffffffffffffffb0 + -(lVar7 + 0xfU & 0xfffffffffffffff0),lVar2);
  uVar4 = 0;
  FUN_10099b20c(0,1,FUN_1009a13d0,puVar3);
  _swift_release(puVar3);
  return uVar4;
}



/* Address: 0x10099c13c | FUN_10099c13c */

void FUN_10099c13c(undefined8 param_1)

{
  FUN_10099b20c(param_1,0,thunk_FUN_10099ed08,0);
  return;
}



/* Address: 0x10099c150 | FUN_10099c150 */

void FUN_10099c150(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined1 param_15)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  uVar8 = param_3;
  FUN_100623594(param_3,&PTR_PTR_100f24068,param_2);
  puVar1 = &DAT_100f23330;
  _swift_allocObject(&DAT_100f23330,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  _swift_retain();
  _swift_retain(param_5);
  _swift_retain(param_3);
  uVar2 = uVar8;
  FUN_10098029c(uVar8,FUN_100987108,puVar1);
  _swift_release(uVar8);
  _swift_release_n(puVar1,2);
  puVar1 = &DAT_100f23358;
  _swift_allocObject(&DAT_100f23358,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_6;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_7;
  *(undefined8 *)(puVar1 + 0x28) = param_8;
  *(undefined8 *)(puVar1 + 0x30) = param_9;
  _swift_retain(param_3);
  _swift_retain(puVar1);
  _swift_retain(param_6);
  FUN_100011128(param_7,param_8);
  _swift_bridgeObjectRetain(param_9);
  uVar8 = uVar2;
  FUN_10098029c(uVar2,FUN_1009a21a4,puVar1);
  _swift_release(uVar2);
  _swift_release_n(puVar1,2);
  puVar1 = &DAT_100f23380;
  _swift_allocObject(&DAT_100f23380,0x28,7);
  puVar1[0x10] = param_10;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_6;
  _swift_retain(param_3);
  _swift_retain(param_6);
  uVar2 = uVar8;
  FUN_10098029c(uVar8,FUN_1009a21b4,puVar1);
  _swift_release(uVar8);
  _swift_release(puVar1);
  puVar1 = &DAT_100f233a8;
  _swift_allocObject(&DAT_100f233a8,0x39,7);
  *(undefined8 *)(puVar1 + 0x10) = param_6;
  *(undefined8 *)(puVar1 + 0x18) = param_12;
  *(undefined8 *)(puVar1 + 0x20) = param_13;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  *(undefined8 *)(puVar1 + 0x30) = param_14;
  puVar1[0x38] = param_15;
  _swift_retain(param_3);
  _swift_retain(param_6);
  _swift_retain(puVar1);
  _swift_retain(param_13);
  uVar8 = uVar2;
  FUN_10098029c(uVar2,FUN_1009a21c8,puVar1);
  _swift_release(uVar2);
  _swift_release_n(puVar1,2);
  puVar1 = &DAT_100f233d0;
  _swift_allocObject(&DAT_100f233d0,0x20,7);
  *(code **)(puVar1 + 0x10) = FUN_1009871f4;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  _swift_retain_n(param_3,2);
  pcVar3 = FUN_10093d450;
  FUN_10099ffc0(FUN_10093d450,puVar1);
  _swift_release(uVar8);
  _swift_release(puVar1);
  puVar1 = &DAT_100f233f8;
  _swift_allocObject(&DAT_100f233f8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_6;
  puVar4 = &DAT_100ff0978;
  FUN_1000f7830(&DAT_100ff0978,&DAT_100c89520);
  _swift_allocObject();
  lVar7 = *(long *)(pcVar3 + 0x30);
  uVar11 = *(ulong *)(pcVar3 + 0x28);
  *(undefined8 *)(puVar4 + 0x30) = *(undefined8 *)(pcVar3 + 0x30);
  *(ulong *)(puVar4 + 0x28) = uVar11;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined8 *)(puVar4 + 0x18) = 0;
  puVar4[0x20] = 0xff;
  *(undefined8 *)(puVar4 + 0x40) = 0;
  *(undefined8 *)(puVar4 + 0x48) = 0;
  *(undefined8 *)(puVar4 + 0x38) = 0;
  puVar5 = &DAT_100f23420;
  _swift_allocObject(&DAT_100f23420,0x30,7);
  *(code **)(puVar5 + 0x10) = pcVar3;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  *(code **)(puVar5 + 0x20) = FUN_1009a21dc;
  *(undefined **)(puVar5 + 0x28) = puVar1;
  uVar6 = uVar11;
  _swift_getObjectType();
  pcVar9 = *(code **)(lVar7 + 0x10);
  _swift_retain_n(param_6,2);
  _swift_retain_n(pcVar3,2);
  _swift_retain_n(puVar4,2);
  _swift_retain_n(puVar1,2);
  _swift_retain(param_3);
  _swift_unknownObjectRetain(uVar11);
  uVar11 = uVar6;
  (*pcVar9)(uVar6,lVar7);
  if ((uVar11 & 1) == 0) {
    puVar10 = &DAT_100f23448;
    _swift_allocObject(&DAT_100f23448,0x28,7);
    *(code **)(puVar10 + 0x10) = pcVar3;
    *(code **)(puVar10 + 0x18) = FUN_10098725c;
    *(undefined **)(puVar10 + 0x20) = puVar5;
    pcVar9 = *(code **)(lVar7 + 0x18);
    _swift_retain(pcVar3);
    _swift_retain(puVar5);
    (*pcVar9)(thunk_FUN_1009806c8,puVar10,uVar6,lVar7);
    _swift_release(puVar1);
    _swift_release(pcVar3);
    _swift_release(puVar10);
  }
  else {
    _swift_beginAccess(pcVar3 + 0x10,auStack_78,0,0);
    if (pcVar3[0x20] == (code)0xff) {
      _swift_beginAccess(pcVar3 + 0x38,auStack_90,0x21,0);
      FUN_10064967c(FUN_10098725c,puVar5);
      _swift_endAccess(auStack_90);
      pcVar9 = (code *)0x0;
      puVar10 = (undefined *)0x0;
      uVar8 = 0;
    }
    else {
      _swift_retain(param_3);
      _swift_retain(param_6);
      pcVar9 = pcVar3;
      puVar10 = puVar4;
      uVar8 = param_3;
      FUN_1009a1748(pcVar3,puVar4,param_3,param_6);
      _swift_release(param_3);
      _swift_release(param_6);
    }
    FUN_1006486f8(pcVar9,puVar10,uVar8);
    FUN_100004550(pcVar9,puVar10);
    _swift_release(puVar1);
    _swift_release(pcVar3);
    _swift_bridgeObjectRelease(uVar8);
  }
  _swift_release(param_6);
  _swift_release(param_3);
  _swift_release(puVar1);
  _swift_release(puVar4);
  _swift_release(pcVar3);
  _swift_release(puVar5);
  *param_1 = puVar4;
  return;
}



/* Address: 0x10099c67c | FUN_10099c67c */

undefined8
FUN_10099c67c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_2 + 0x48);
  if (lVar4 != 0) {
    puVar2 = &DAT_100ff1f30;
    FUN_1000f7830(&DAT_100ff1f30,&DAT_100c8afa0);
    _swift_allocObject();
    *(undefined8 *)(puVar2 + 0x10) = param_3;
    *(undefined8 *)(puVar2 + 0x18) = param_4;
    *(undefined8 *)(puVar2 + 0x20) = param_5;
    _swift_retain(lVar4);
    FUN_100011128(param_3,param_4);
    _swift_bridgeObjectRetain(param_5);
    FUN_100626a9c(puVar2,&PTR_PTR_100f1f0a8,0,0,1,0x8000000000000000,lVar4);
    _swift_release(lVar4);
    _swift_release(puVar2);
    uVar3 = 0;
    FUN_10099f7ec(0,0);
    FUN_1002ec258(0,0);
    return uVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10099c770);
  (*pcVar1)();
}



/* Address: 0x10099c770 | FUN_10099c770 */

void FUN_10099c770(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if ((param_1 & 1) == 0) {
    puVar2 = &DAT_100ff07b8;
    FUN_1000f7830(&DAT_100ff07b8,&DAT_100c89500);
    _swift_allocObject();
    *(undefined8 *)(puVar2 + 0x20) = param_3;
    *(undefined ***)(puVar2 + 0x28) = &PTR_PTR_100f21d18;
    *(undefined8 *)(puVar2 + 0x10) = 0;
    puVar2[0x18] = 0;
    *(undefined8 *)(puVar2 + 0x38) = 0;
    *(undefined8 *)(puVar2 + 0x40) = 0;
    *(undefined8 *)(puVar2 + 0x30) = 0;
    _swift_retain(param_3);
  }
  else {
    uVar1 = 0;
    FUN_1009a2af4(0);
    FUN_100622844("NIOTransportServices/NIOTSListenerBootstrap.swift",0x31,2,0x198,uVar1,
                  &PTR_PTR_100f23fa0);
  }
  return;
}



/* Address: 0x10099c81c | FUN_10099c81c */

undefined *
FUN_10099c81c(long param_1,code *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
             char param_6)

{
  long lVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  code *pcVar12;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  puVar3 = &DAT_100ff07b8;
  FUN_1000f7830(&DAT_100ff07b8,&DAT_100c89500);
  _swift_allocObject();
  *(long *)(puVar3 + 0x20) = param_1;
  *(undefined ***)(puVar3 + 0x28) = &PTR_PTR_100f21d18;
  puVar11 = (undefined8 *)(puVar3 + 0x10);
  *puVar11 = 0;
  puVar3[0x18] = 0xff;
  *(undefined8 *)(puVar3 + 0x30) = 0;
  *(undefined8 *)(puVar3 + 0x38) = 0;
  *(undefined8 *)(puVar3 + 0x40) = 0;
  _swift_retain(param_1);
  (*param_2)(param_4,puVar3);
  if (param_6 != '\x01') {
    puVar4 = &DAT_100f23678;
    _swift_allocObject(&DAT_100f23678,0x28,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(undefined8 *)(puVar4 + 0x18) = param_5;
    *(undefined8 *)(puVar4 + 0x20) = param_4;
    lVar1 = _TtC20NIOTransportServices14NIOTSEventLoop::defaultQoS;
    _swift_retain(puVar3);
    _swift_retain(param_4);
    pcVar9 = FUN_1009a2298;
    param_1 = param_1 + lVar1;
    FUN_10099ab88();
    _swift_release(puVar4);
    puVar4 = &DAT_100f236a0;
    _swift_allocObject(&DAT_100f236a0,0x28,7);
    *(undefined8 *)(puVar4 + 0x10) = param_5;
    *(long *)(puVar4 + 0x18) = param_1;
    *(code **)(puVar4 + 0x20) = pcVar9;
    puVar5 = &DAT_100f236c8;
    _swift_allocObject(&DAT_100f236c8,0x28,7);
    *(code **)(puVar5 + 0x10) = FUN_1009830e0;
    *(undefined **)(puVar5 + 0x18) = puVar4;
    *(undefined **)(puVar5 + 0x20) = puVar3;
    uVar6 = *(ulong *)(puVar3 + 0x20);
    lVar1 = *(long *)(puVar3 + 0x28);
    _swift_getObjectType();
    pcVar12 = *(code **)(lVar1 + 0x10);
    _swift_retain_n(puVar3,3);
    _swift_retain_n(param_5,2);
    _swift_retain_n(pcVar9,2);
    _swift_retain_n(puVar4,2);
    uVar7 = uVar6;
    (*pcVar12)(uVar6,lVar1);
    if ((uVar7 & 1) == 0) {
      puVar8 = &DAT_100f236f0;
      _swift_allocObject(&DAT_100f236f0,0x28,7);
      *(undefined **)(puVar8 + 0x10) = puVar3;
      *(code **)(puVar8 + 0x18) = thunk_FUN_1006225d4;
      *(undefined **)(puVar8 + 0x20) = puVar5;
      pcVar12 = *(code **)(lVar1 + 0x18);
      _swift_retain(puVar3);
      _swift_retain(puVar5);
      (*pcVar12)(thunk_FUN_1008db360,puVar8,uVar6,lVar1);
      _swift_release(param_5);
      _swift_release(puVar8);
      _swift_release(puVar3);
      _swift_release_n(puVar4,2);
      _swift_release(puVar5);
    }
    else {
      _swift_beginAccess(puVar11,auStack_78,0,0);
      cVar2 = puVar3[0x18];
      if (cVar2 == -1) {
        _swift_beginAccess(puVar3 + 0x30,auStack_90,0x21,0);
        FUN_10064967c(thunk_FUN_1006225d4,puVar5);
        _swift_endAccess(auStack_90);
      }
      else {
        uVar10 = *puVar11;
        FUN_100308524(uVar10,cVar2);
        FUN_10099a394(param_5,param_1,pcVar9);
        FUN_100308538(uVar10,cVar2);
      }
      _swift_release(puVar5);
      _swift_release(param_5);
      _swift_release_n(puVar4,2);
      _swift_release(puVar3);
    }
    _swift_release(param_5);
    _swift_release(puVar3);
    _swift_release_n(pcVar9,2);
  }
  return puVar3;
}



/* Address: 0x10099cb4c | FUN_10099cb4c */

undefined * FUN_10099cb4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1009af6bc(param_1,2,0);
  puVar1 = &DAT_100ff0978;
  FUN_1000f7830(&DAT_100ff0978,&DAT_100c89520);
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  *(undefined ***)(puVar1 + 0x30) = &PTR_PTR_100f21d18;
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  puVar1[0x20] = 1;
  *(undefined8 *)(puVar1 + 0x40) = 0;
  *(undefined8 *)(puVar1 + 0x48) = 0;
  *(undefined8 *)(puVar1 + 0x38) = 0;
  _swift_retain(param_3);
  _swift_errorRetain(param_1);
  return puVar1;
}



/* Address: 0x10099cbdc | FUN_10099cbdc */

void FUN_10099cbdc(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  FUN_100004550(*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  FUN_100004550(*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x58));
  FUN_100986e74(unaff_x20 + _TtC20NIOTransportServices22NIOTSListenerBootstrap::serverQoS);
  FUN_100986e74(unaff_x20 + _TtC20NIOTransportServices22NIOTSListenerBootstrap::childQoS);
  _swift_release(*(undefined8 *)
                  (unaff_x20 + _TtC20NIOTransportServices22NIOTSListenerBootstrap::tcpOptions));
  _swift_release(*(undefined8 *)
                  (unaff_x20 + _TtC20NIOTransportServices22NIOTSListenerBootstrap::childTCPOptions))
  ;
  _swift_release(*(undefined8 *)
                  (unaff_x20 + _TtC20NIOTransportServices22NIOTSListenerBootstrap::tlsOptions));
  _swift_release(*(undefined8 *)
                  (unaff_x20 + _TtC20NIOTransportServices22NIOTSListenerBootstrap::childTLSOptions))
  ;
  FUN_100004550(*(undefined8 *)
                 (unaff_x20 +
                 _TtC20NIOTransportServices22NIOTSListenerBootstrap::nwParametersConfigurator),
                ((undefined8 *)
                (unaff_x20 +
                _TtC20NIOTransportServices22NIOTSListenerBootstrap::nwParametersConfigurator))[1]);
  FUN_100004550(*(undefined8 *)
                 (unaff_x20 +
                 _TtC20NIOTransportServices22NIOTSListenerBootstrap::childNWParametersConfigurator),
                ((undefined8 *)
                (unaff_x20 +
                _TtC20NIOTransportServices22NIOTSListenerBootstrap::childNWParametersConfigurator))
                [1]);
  return;
}



/* Address: 0x10099cca8 | FUN_10099cca8 */

void FUN_10099cca8(void)

{
  FUN_10099cbdc();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10099cccc | FUN_10099cccc */

void FUN_10099cccc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_10;
  *(undefined8 *)(unaff_x22 + 0x58) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x40) = param_8;
  *(undefined8 *)(unaff_x22 + 0x48) = param_9;
  *(undefined1 *)(unaff_x22 + 0x70) = param_7;
  *(undefined8 *)(unaff_x22 + 0x30) = param_5;
  *(undefined8 *)(unaff_x22 + 0x38) = param_6;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  _swift_task_switch(FUN_10099cd00,0,0);
  return;
}



/* Address: 0x10099cd00 | FUN_10099cd00 */

void FUN_10099cd00(ulong *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long unaff_x22;
  ulong uVar11;
  
  uVar11 = *(ulong *)(unaff_x22 + 0x28);
  if (uVar11 >> 0x10 == 0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x18);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x20);
    uVar7 = *(undefined1 *)(unaff_x22 + 0x70);
    puVar8 = &DAT_100f22ac0;
    _swift_allocObject(&DAT_100f22ac0,0x28,7);
    *(undefined8 *)(puVar8 + 0x10) = uVar9;
    *(undefined8 *)(puVar8 + 0x18) = uVar6;
    *(ulong *)(puVar8 + 0x20) = uVar11;
    _swift_bridgeObjectRetain(uVar6);
    uVar9 = 0;
    FUN_10099d528(0,uVar3,uVar5,uVar7,uVar2,uVar4,FUN_1009a13dc,puVar8,uVar1);
    *(undefined8 *)(unaff_x22 + 0x60) = uVar9;
    _swift_release(puVar8);
    plVar10 = (long *)0x50;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x68) = plVar10;
    *plVar10 = unaff_x22;
    plVar10[1] = (long)FUN_10099ce50;
    FUN_1005da4a4(plVar10,*(undefined8 *)(unaff_x22 + 0x10));
    return;
  }
  FUN_100982b50();
  _swift_allocError(&DAT_100f21b58,param_1,0,0);
  *param_1 = uVar11;
  _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x00010099ce4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10099ce50 | FUN_10099ce50 */

void FUN_10099ce50(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  long lVar2;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x60);
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x68));
  _swift_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010099ce98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x10099ce9c | FUN_10099ce9c */

/* WARNING: Removing unreachable block (ram,0x00010099d130) */
/* WARNING: Removing unreachable block (ram,0x00010099d234) */
/* WARNING: Removing unreachable block (ram,0x00010099d154) */
/* WARNING: Removing unreachable block (ram,0x00010099d2a0) */

void FUN_10099ce9c(undefined8 param_1,long param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined1 auStack_90 [24];
  undefined8 local_78 [3];
  
  uVar3 = 0;
  local_78[0] = param_1;
  FUN_1009a2af4();
  pcVar4 = "NIOTransportServices/NIOTSListenerBootstrap.swift";
  FUN_100622844("NIOTransportServices/NIOTSListenerBootstrap.swift",0x31,2,0x1d4,uVar3,
                &PTR_PTR_100f23fa0);
  puVar5 = &DAT_100f23038;
  _swift_allocObject(&DAT_100f23038,0x38,7);
  *(ulong *)(puVar5 + 0x10) = param_3;
  *(undefined8 *)(puVar5 + 0x18) = param_4;
  *(undefined8 *)(puVar5 + 0x20) = param_5;
  *(undefined8 *)(puVar5 + 0x28) = param_1;
  *(long *)(puVar5 + 0x30) = param_2;
  puVar6 = &DAT_100f23060;
  _swift_allocObject(&DAT_100f23060,0x28,7);
  *(code **)(puVar6 + 0x10) = FUN_1009a2044;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  *(char **)(puVar6 + 0x20) = pcVar4;
  uVar7 = *(ulong *)(pcVar4 + 0x20);
  lVar1 = *(long *)(pcVar4 + 0x28);
  _swift_getObjectType();
  pcVar12 = *(code **)(lVar1 + 0x10);
  _swift_bridgeObjectRetain_n(param_4,2);
  _swift_retain_n(param_1,2);
  _swift_retain_n(param_2,2);
  _swift_retain_n(puVar5,2);
  _swift_retain_n(pcVar4,2);
  uVar8 = uVar7;
  (*pcVar12)(uVar7,lVar1);
  if ((uVar8 & 1) == 0) {
    puVar9 = &DAT_100f23088;
    _swift_allocObject(&DAT_100f23088,0x28,7);
    *(char **)(puVar9 + 0x10) = pcVar4;
    *(code **)(puVar9 + 0x18) = thunk_FUN_1006225d4;
    *(undefined **)(puVar9 + 0x20) = puVar6;
    pcVar12 = *(code **)(lVar1 + 0x18);
    _swift_retain(pcVar4);
    _swift_retain(puVar6);
    (*pcVar12)(thunk_FUN_1008db360,puVar9,uVar7,lVar1);
    _swift_bridgeObjectRelease(param_4);
    _swift_release(puVar9);
    _swift_release(pcVar4);
    _swift_release_n(puVar5,2);
    _swift_release(puVar6);
  }
  else {
    uVar3 = 0;
    _swift_beginAccess(pcVar4 + 0x10,local_78,0,0);
    uVar13 = *(undefined8 *)(pcVar4 + 0x10);
    cVar2 = pcVar4[0x18];
    if (cVar2 == '\x01') {
      uVar7 = *(ulong *)(param_2 + 0x20);
      lVar1 = *(long *)(param_2 + 0x28);
      _swift_getObjectType();
      pcVar12 = *(code **)(lVar1 + 0x10);
      FUN_100308524(uVar13,1);
      uVar8 = uVar7;
      lVar11 = lVar1;
      (*pcVar12)(uVar7,lVar1);
      if ((uVar8 & 1) == 0) {
        puVar9 = &DAT_100f230b0;
        _swift_allocObject(&DAT_100f230b0,0x20,7);
        *(long *)(puVar9 + 0x10) = param_2;
        *(undefined8 *)(puVar9 + 0x18) = uVar13;
        pcVar12 = *(code **)(lVar1 + 0x18);
        _swift_retain(param_2);
        FUN_1005dfeb4(uVar13,1);
        (*pcVar12)(thunk_FUN_1008d678c,puVar9,uVar7,lVar1);
        _swift_release(puVar9);
      }
      else {
        uVar10 = uVar13;
        thunk_FUN_1005de8f4(uVar13);
        FUN_1006486f8();
        FUN_100004550(uVar10,lVar11);
        _swift_bridgeObjectRelease(uVar3);
      }
      FUN_100308538(uVar13,1);
    }
    else if (cVar2 == -1) {
      _swift_beginAccess(pcVar4 + 0x30,auStack_90,0x21,0);
      FUN_10064967c(thunk_FUN_1006225d4,puVar6);
      _swift_endAccess(auStack_90);
    }
    else {
      FUN_100668048(param_3,param_4,param_5);
      FUN_10061d040();
      _swift_release(param_3 & 0x3fffffffffffffff);
      FUN_100308538(uVar13,cVar2);
    }
    FUN_1006486f8(0,0,0);
    FUN_100004550(0,0);
    _swift_bridgeObjectRelease(param_4);
    _swift_release(pcVar4);
    _swift_release_n(puVar5,2);
    _swift_release(puVar6);
    _swift_bridgeObjectRelease(0);
  }
  _swift_release(pcVar4);
  _swift_release(param_2);
  _swift_release(param_1);
  return;
}



/* Address: 0x10099d330 | FUN_10099d330 */

/* WARNING: Removing unreachable block (ram,0x00010099d3cc) */
/* WARNING: Removing unreachable block (ram,0x00010099d3ec) */
/* WARNING: Removing unreachable block (ram,0x00010099d4b8) */

void FUN_10099d330(undefined8 *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  
  if (*(char *)(param_1 + 1) == '\x01') {
    uVar6 = *param_1;
    uVar2 = *(ulong *)(param_6 + 0x20);
    lVar1 = *(long *)(param_6 + 0x28);
    _swift_getObjectType();
    uVar3 = uVar2;
    lVar5 = lVar1;
    (**(code **)(lVar1 + 0x10))();
    if ((uVar3 & 1) != 0) {
      thunk_FUN_1005de8f4(uVar6);
      FUN_1006486f8();
      FUN_100004550(uVar6,lVar5);
      _swift_bridgeObjectRelease(param_3);
      return;
    }
    puVar4 = &DAT_100f23100;
    _swift_allocObject(&DAT_100f23100,0x20,7);
    *(long *)(puVar4 + 0x10) = param_6;
    *(undefined8 *)(puVar4 + 0x18) = uVar6;
    pcVar7 = *(code **)(lVar1 + 0x18);
    _swift_retain(param_6);
    FUN_100308524(uVar6,1);
    (*pcVar7)(thunk_FUN_1008d678c,puVar4,uVar2,lVar1);
  }
  else {
    FUN_100668048(param_2,param_3,param_4);
    uVar6 = 0;
    FUN_1009a2af4(0);
    FUN_10061d040(param_2,param_6,uVar6,&PTR_PTR_100f24068);
    puVar4 = (undefined *)(param_2 & 0x3fffffffffffffff);
  }
  _swift_release(puVar4);
  return;
}



/* Address: 0x10099d528 | FUN_10099d528 */

code * FUN_10099d528(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined8 param_9)

{
  Cache CVar1;
  Implementation IVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined *puVar7;
  MultipathServiceType MVar8;
  int iVar9;
  undefined *puVar10;
  class_t *pcVar11;
  class_t *pcVar12;
  long lVar13;
  undefined7 extraout_var;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  DispatchQoS DVar17;
  undefined7 extraout_var_00;
  long lVar18;
  code *pcVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  long unaff_x20;
  class_t *pcVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  code *pcVar27;
  undefined8 uVar28;
  long local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined4 local_134;
  Implementation local_130;
  undefined8 uStack_128;
  long local_120;
  undefined8 local_118;
  long local_110;
  class_t *local_108;
  undefined *local_100;
  undefined8 local_f8;
  long local_f0;
  undefined8 local_e8;
  pthread_mutexattr_t local_e0;
  pthread_mutexattr_t local_d0;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  puVar10 = &DAT_100ff0820;
  local_148 = param_2;
  local_140 = param_3;
  local_134 = param_4;
  local_110 = param_1;
  FUN_1000f7830(&DAT_100ff0820,&DAT_100c89460);
  uVar21 = *(long *)(*(long *)(puVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_120 = (long)&local_190 - uVar21;
  local_f0 = local_120 - uVar21;
  pcVar23 = *(class_t **)(unaff_x20 + 0x10);
  lVar22 = *(long *)(unaff_x20 + 0x18);
  _swift_getObjectType();
  pcVar27 = *(code **)(lVar22 + 0x10);
  pcVar11 = pcVar23;
  (*pcVar27)();
  local_108 = pcVar11;
  _object_getClass();
  pcVar12 = local_108;
  if (pcVar11 != &objc::class_t::_TtC20NIOTransportServices14NIOTSEventLoop) {
                    /* WARNING: Does not return */
    pcVar27 = (code *)SoftwareBreakpoint(1,0x10099e05c);
    (*pcVar27)();
  }
  CVar1 = *(Cache *)(unaff_x20 + 0x30);
  IVar2 = *(Implementation *)(unaff_x20 + 0x38);
  local_168 = param_5;
  local_160 = param_7;
  local_158 = param_6;
  local_150 = param_8;
  local_130 = IVar2;
  if (CVar1 == 0) {
    _swift_unknownObjectRetain(local_108);
    pcVar19 = thunk_FUN_1009a2054;
  }
  else {
    pcVar12 = (class_t *)&DAT_100f22d18;
    _swift_allocObject(&DAT_100f22d18,0x20,7);
    pcVar12->cache = CVar1;
    pcVar12->vtable = IVar2;
    pcVar19 = FUN_10093c770;
  }
  puVar10 = &DAT_100f22ca0;
  _swift_allocObject(&DAT_100f22ca0,0x20,7);
  *(code **)(puVar10 + 0x10) = pcVar19;
  *(class_t **)(puVar10 + 0x18) = pcVar12;
  uVar15 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x48);
  local_100 = puVar10;
  _swift_beginAccess(unaff_x20 + 0x50,auStack_88,0,0);
  local_118 = *(undefined8 *)(unaff_x20 + 0x50);
  _swift_beginAccess(unaff_x20 + 0x58,auStack_a0,0,0);
  lVar6 = local_110;
  lVar13 = _TtC20NIOTransportServices22NIOTSListenerBootstrap::childQoS;
  uVar26 = *(undefined8 *)(unaff_x20 + 0x58);
  local_170 = uVar26;
  local_f8 = uVar15;
  local_e8 = uVar16;
  if (local_110 == 0) {
    local_110 = *(long *)(unaff_x20 + _TtC20NIOTransportServices22NIOTSListenerBootstrap::tcpOptions
                         );
    uVar28 = *(undefined8 *)
              (unaff_x20 + _TtC20NIOTransportServices22NIOTSListenerBootstrap::tlsOptions);
    local_188 = *(undefined8 *)
                 (unaff_x20 +
                 _TtC20NIOTransportServices22NIOTSListenerBootstrap::nwParametersConfigurator);
    uVar16 = ((undefined8 *)
             (unaff_x20 +
             _TtC20NIOTransportServices22NIOTSListenerBootstrap::nwParametersConfigurator))[1];
    uStack_178 = *(undefined8 *)(unaff_x20 + 0x28);
    local_180 = *(undefined8 *)(unaff_x20 + 0x20);
    _swift_beginAccess(unaff_x20 + _TtC20NIOTransportServices22NIOTSListenerBootstrap::childQoS,
                       auStack_b8,0,0);
    FUN_100982e5c(unaff_x20 + lVar13,local_f0);
    DVar17 = Dispatch::DispatchQoS::typeMetadataAccessor();
    (**(code **)(*(long *)(DVar17.unknown + -8) + 0x38))(local_120,1,1);
    lVar13 = 0;
    FUN_1009a2af4();
    uVar21 = (ulong)*(uint *)(lVar13 + 0x30);
    uVar20 = (ulong)*(ushort *)(lVar13 + 0x34);
    _swift_allocObject();
    lVar22 = lVar13;
    FUN_100611728();
    *(long *)(lVar13 + 0x10) = lVar22;
    *(ulong *)(lVar13 + 0x18) = uVar21;
    *(ulong *)(lVar13 + 0x20) = uVar20;
    *(undefined **)(lVar13 + 0x28) = DVar17.unknown;
    *(undefined8 *)(lVar13 + 0x48) = 0;
    *(undefined8 *)(lVar13 + 0x58) = 0;
    *(undefined8 *)(lVar13 + 0x80) = 0;
    *(undefined8 *)(lVar13 + 0x30) = 0;
    *(undefined8 *)(lVar13 + 0x38) = 0;
    *(undefined2 *)(lVar13 + 0x88) = 0x101;
    puVar10 = &DAT_100ff0960;
    FUN_1000f7830(&DAT_100ff0960,&DAT_100c8af90);
    _swift_allocObject();
    puVar10[0x10] = 0;
    *(undefined **)(lVar13 + 0x90) = puVar10;
    *(undefined2 *)(lVar13 + 0x98) = 0x100;
    *(undefined4 *)(lVar13 + 0x9a) = 0;
    lVar22 = DAT_101058250;
    uVar3 = *(undefined4 *)
             PTR___enum_case_for_Network_NWParameters_MultipathServiceType_disabled_Network_NWParameters_MultipathServiceType_Type___>_Network_NWParameters_MultipathServiceType_100eaa130
    ;
    MVar8 = Network::NWParameters::MultipathServiceType::typeMetadataAccessor();
    (**(code **)(*(long *)(CONCAT71(extraout_var_00,MVar8.value) + -8) + 0x68))
              (lVar13 + lVar22,uVar3,CONCAT71(extraout_var_00,MVar8.value));
    puVar5 = (undefined8 *)(lVar13 + DAT_101058278);
    puVar5[1] = 0xf000000000000007;
    *puVar5 = 0xf000000000000007;
    local_190 = DAT_101058280;
    puVar10 = &DAT_100ff0968;
    FUN_1000f7830(&DAT_100ff0968,&DAT_100c89510);
    _swift_allocObject();
    local_d0.__sig = 0;
    local_d0.__opaque[0] = '\0';
    local_d0.__opaque[1] = '\0';
    local_d0.__opaque[2] = '\0';
    local_d0.__opaque[3] = '\0';
    local_d0.__opaque[4] = '\0';
    local_d0.__opaque[5] = '\0';
    local_d0.__opaque[6] = '\0';
    local_d0.__opaque[7] = '\0';
    _swift_retain(uVar28);
    lVar22 = local_110;
    _swift_retain_n(local_110,3);
    uVar25 = local_188;
    FUN_100011128(local_188,uVar16);
    _swift_unknownObjectRetain(local_108);
    FUN_100011128(CVar1,local_130);
    FUN_100011128(uVar15,local_e8);
    uVar15 = local_118;
    _swift_bridgeObjectRetain(local_118);
    _swift_bridgeObjectRetain(uVar26);
    _swift_retain(lVar22);
    _swift_retain(uVar28);
    local_130 = uVar16;
    FUN_100011128(uVar25,uVar16);
    _pthread_mutexattr_init(&local_d0);
    iVar9 = _pthread_mutex_init((pthread_mutex_t *)(puVar10 + 0x10),&local_d0);
    pcVar12 = local_108;
    if (iVar9 != 0) {
                    /* WARNING: Does not return */
      pcVar27 = (code *)SoftwareBreakpoint(1,0x10099e068);
      (*pcVar27)();
    }
    *(undefined **)(lVar13 + local_190) = puVar10;
    *(class_t **)(lVar13 + 0x40) = local_108;
    puVar10 = &DAT_100ff07b8;
    FUN_1000f7830(&DAT_100ff07b8,&DAT_100c89500);
    _swift_allocObject();
    *(class_t **)(puVar10 + 0x20) = pcVar12;
    *(undefined ***)(puVar10 + 0x28) = &PTR_PTR_100f21d18;
    *(undefined8 *)(puVar10 + 0x10) = 0;
    puVar10[0x18] = 0xff;
    *(undefined8 *)(puVar10 + 0x38) = 0;
    *(undefined8 *)(puVar10 + 0x40) = 0;
    *(undefined8 *)(puVar10 + 0x30) = 0;
    *(undefined **)(lVar13 + 0x50) = puVar10;
    _swift_unknownObjectRetain_n(pcVar12,2);
    lVar22 = local_120;
    uVar16 = 0xd000000000000025;
    FUN_100992394(0xd000000000000025,0x8000000100db6e50,local_120);
    lVar14 = local_f0;
    lVar6 = local_110;
    IVar2 = local_130;
    *(undefined8 *)(lVar13 + 0x78) = uVar16;
    *(long *)(lVar13 + DAT_101058288) = local_110;
    *(undefined8 *)(lVar13 + 0x60) = uVar28;
    *(undefined8 *)(lVar13 + 0x68) = uVar25;
    *(Implementation *)(lVar13 + 0x70) = local_130;
    puVar5 = (undefined8 *)(lVar13 + DAT_101058258);
    puVar5[1] = uStack_178;
    *puVar5 = local_180;
    FUN_100982e5c(local_f0,lVar13 + DAT_101058260);
    *(long *)(lVar13 + DAT_101058290) = lVar6;
    *(undefined8 *)(lVar13 + DAT_101058268) = uVar28;
    puVar5 = (undefined8 *)(lVar13 + DAT_101058270);
    *puVar5 = uVar25;
    puVar5[1] = IVar2;
    FUN_100631d88(0);
    _swift_allocObject();
    _swift_unknownObjectRetain(local_180);
    lVar18 = lVar13;
    _swift_retain();
    FUN_10062b720();
    _swift_release_n(lVar6,2);
    _swift_unknownObjectRelease(pcVar12);
    FUN_100986e74(lVar22);
    FUN_100986e74(lVar14);
    uVar16 = *(undefined8 *)(lVar13 + 0x48);
    *(long *)(lVar13 + 0x48) = lVar18;
  }
  else {
    FUN_100011128(CVar1,local_130);
    FUN_100011128(uVar15,uVar16);
    _swift_retain(lVar6);
    _swift_bridgeObjectRetain(local_118);
    _swift_bridgeObjectRetain(uVar26);
    (*pcVar27)(pcVar23,lVar22);
    pcVar12 = pcVar23;
    _object_getClass();
    lVar22 = _TtC20NIOTransportServices22NIOTSListenerBootstrap::serverQoS;
    if (pcVar12 != &objc::class_t::_TtC20NIOTransportServices14NIOTSEventLoop) {
                    /* WARNING: Does not return */
      pcVar27 = (code *)SoftwareBreakpoint(1,0x10099e060);
      (*pcVar27)();
    }
    _swift_beginAccess(unaff_x20 + _TtC20NIOTransportServices22NIOTSListenerBootstrap::serverQoS,
                       auStack_b8,0,0);
    FUN_100982e5c(unaff_x20 + lVar22,local_f0);
    lVar22 = _TtC20NIOTransportServices22NIOTSListenerBootstrap::childQoS;
    uVar28 = *(undefined8 *)
              (unaff_x20 + _TtC20NIOTransportServices22NIOTSListenerBootstrap::tcpOptions);
    uVar25 = *(undefined8 *)
              (unaff_x20 + _TtC20NIOTransportServices22NIOTSListenerBootstrap::tlsOptions);
    uVar15 = *(undefined8 *)
              (unaff_x20 +
              _TtC20NIOTransportServices22NIOTSListenerBootstrap::nwParametersConfigurator);
    uVar16 = ((undefined8 *)
             (unaff_x20 +
             _TtC20NIOTransportServices22NIOTSListenerBootstrap::nwParametersConfigurator))[1];
    uStack_128 = *(undefined8 *)(unaff_x20 + 0x28);
    local_130 = *(undefined8 *)(unaff_x20 + 0x20);
    uVar26 = 0;
    _swift_beginAccess(unaff_x20 + _TtC20NIOTransportServices22NIOTSListenerBootstrap::childQoS,
                       &local_d0,0);
    lVar6 = local_120;
    FUN_100982e5c(unaff_x20 + lVar22,local_120);
    lVar13 = 0;
    FUN_1009a2af4();
    uVar21 = (ulong)*(uint *)(lVar13 + 0x30);
    uVar20 = (ulong)*(ushort *)(lVar13 + 0x34);
    _swift_allocObject();
    lVar22 = lVar13;
    FUN_100611728();
    *(long *)(lVar13 + 0x10) = lVar22;
    *(ulong *)(lVar13 + 0x18) = uVar21;
    *(ulong *)(lVar13 + 0x20) = uVar20;
    *(undefined8 *)(lVar13 + 0x28) = uVar26;
    *(undefined8 *)(lVar13 + 0x48) = 0;
    *(undefined8 *)(lVar13 + 0x58) = 0;
    *(undefined8 *)(lVar13 + 0x80) = 0;
    *(undefined8 *)(lVar13 + 0x30) = 0;
    *(undefined8 *)(lVar13 + 0x38) = 0;
    *(undefined2 *)(lVar13 + 0x88) = 0x101;
    puVar10 = &DAT_100ff0960;
    FUN_1000f7830(&DAT_100ff0960,&DAT_100c8af90);
    _swift_allocObject();
    puVar10[0x10] = 0;
    *(undefined **)(lVar13 + 0x90) = puVar10;
    *(undefined2 *)(lVar13 + 0x98) = 0x100;
    *(undefined4 *)(lVar13 + 0x9a) = 0;
    lVar22 = DAT_101058250;
    uVar3 = *(undefined4 *)
             PTR___enum_case_for_Network_NWParameters_MultipathServiceType_disabled_Network_NWParameters_MultipathServiceType_Type___>_Network_NWParameters_MultipathServiceType_100eaa130
    ;
    MVar8 = Network::NWParameters::MultipathServiceType::typeMetadataAccessor();
    (**(code **)(*(long *)(CONCAT71(extraout_var,MVar8.value) + -8) + 0x68))
              (lVar13 + lVar22,uVar3,CONCAT71(extraout_var,MVar8.value));
    puVar5 = (undefined8 *)(lVar13 + DAT_101058278);
    puVar5[1] = 0xf000000000000007;
    *puVar5 = 0xf000000000000007;
    lVar22 = DAT_101058280;
    puVar10 = &DAT_100ff0968;
    FUN_1000f7830(&DAT_100ff0968,&DAT_100c89510);
    _swift_allocObject();
    local_e0.__sig = 0;
    local_e0.__opaque[0] = '\0';
    local_e0.__opaque[1] = '\0';
    local_e0.__opaque[2] = '\0';
    local_e0.__opaque[3] = '\0';
    local_e0.__opaque[4] = '\0';
    local_e0.__opaque[5] = '\0';
    local_e0.__opaque[6] = '\0';
    local_e0.__opaque[7] = '\0';
    _swift_retain(uVar25);
    _swift_retain_n(uVar28,3);
    FUN_100011128(uVar15,uVar16);
    _swift_retain(uVar28);
    _swift_retain(uVar25);
    FUN_100011128(uVar15,uVar16);
    _pthread_mutexattr_init(&local_e0);
    iVar9 = _pthread_mutex_init((pthread_mutex_t *)(puVar10 + 0x10),&local_e0);
    if (iVar9 != 0) {
                    /* WARNING: Does not return */
      pcVar27 = (code *)SoftwareBreakpoint(1,0x10099e064);
      (*pcVar27)();
    }
    *(undefined **)(lVar13 + lVar22) = puVar10;
    *(class_t **)(lVar13 + 0x40) = pcVar23;
    puVar10 = &DAT_100ff07b8;
    FUN_1000f7830(&DAT_100ff07b8,&DAT_100c89500);
    _swift_allocObject();
    *(class_t **)(puVar10 + 0x20) = pcVar23;
    *(undefined ***)(puVar10 + 0x28) = &PTR_PTR_100f21d18;
    *(undefined8 *)(puVar10 + 0x10) = 0;
    puVar10[0x18] = 0xff;
    *(undefined8 *)(puVar10 + 0x38) = 0;
    *(undefined8 *)(puVar10 + 0x40) = 0;
    *(undefined8 *)(puVar10 + 0x30) = 0;
    *(undefined **)(lVar13 + 0x50) = puVar10;
    _swift_unknownObjectRetain_n(pcVar23,2);
    lVar22 = local_f0;
    uVar26 = 0xd000000000000025;
    FUN_100992394(0xd000000000000025,0x8000000100db6e50,local_f0);
    *(undefined8 *)(lVar13 + 0x78) = uVar26;
    *(undefined8 *)(lVar13 + DAT_101058288) = uVar28;
    *(undefined8 *)(lVar13 + 0x60) = uVar25;
    *(undefined8 *)(lVar13 + 0x68) = uVar15;
    *(undefined8 *)(lVar13 + 0x70) = uVar16;
    puVar5 = (undefined8 *)(lVar13 + DAT_101058258);
    puVar5[1] = uStack_128;
    *puVar5 = local_130;
    FUN_100982e5c(lVar6,lVar13 + DAT_101058260);
    *(undefined8 *)(lVar13 + DAT_101058290) = uVar28;
    *(undefined8 *)(lVar13 + DAT_101058268) = uVar25;
    puVar5 = (undefined8 *)(lVar13 + DAT_101058270);
    *puVar5 = uVar15;
    puVar5[1] = uVar16;
    FUN_100631d88(0);
    _swift_allocObject();
    _swift_unknownObjectRetain(local_130);
    lVar14 = lVar13;
    _swift_retain();
    FUN_10062b720();
    _swift_release_n(uVar28,2);
    _swift_unknownObjectRelease(pcVar23);
    FUN_100986e74(lVar6);
    FUN_100986e74(lVar22);
    uVar15 = *(undefined8 *)(lVar13 + 0x48);
    *(long *)(lVar13 + 0x48) = lVar14;
    _swift_release(uVar15);
    uVar16 = *(undefined8 *)(lVar13 + 0x58);
    *(long *)(lVar13 + 0x58) = local_110;
    uVar15 = local_118;
    pcVar12 = local_108;
  }
  _swift_release(uVar16);
  uVar24 = *(undefined8 *)
            (unaff_x20 + _TtC20NIOTransportServices22NIOTSListenerBootstrap::bindTimeout);
  uVar4 = *(undefined1 *)
           ((undefined8 *)
            (unaff_x20 + _TtC20NIOTransportServices22NIOTSListenerBootstrap::bindTimeout) + 1);
  puVar10 = &DAT_100f22cc8;
  _swift_allocObject(&DAT_100f22cc8,0x99,7);
  uVar28 = local_e8;
  uVar25 = local_f8;
  uVar26 = local_150;
  uVar16 = local_158;
  *(undefined8 *)(puVar10 + 0x10) = param_9;
  *(undefined8 *)(puVar10 + 0x18) = uVar15;
  *(long *)(puVar10 + 0x20) = lVar13;
  *(code **)(puVar10 + 0x28) = FUN_10093c220;
  *(undefined **)(puVar10 + 0x30) = local_100;
  *(undefined8 *)(puVar10 + 0x38) = local_f8;
  *(undefined8 *)(puVar10 + 0x40) = local_e8;
  *(undefined8 *)(puVar10 + 0x48) = local_170;
  *(undefined8 *)(puVar10 + 0x50) = local_148;
  *(undefined8 *)(puVar10 + 0x58) = local_140;
  puVar10[0x60] = (char)local_134;
  *(undefined8 *)(puVar10 + 0x68) = local_168;
  *(undefined8 *)(puVar10 + 0x70) = local_158;
  *(class_t **)(puVar10 + 0x78) = pcVar12;
  *(undefined8 *)(puVar10 + 0x80) = local_160;
  *(undefined8 *)(puVar10 + 0x88) = local_150;
  *(undefined8 *)(puVar10 + 0x90) = uVar24;
  puVar10[0x98] = uVar4;
  _swift_unknownObjectRetain(pcVar12);
  FUN_100011128(uVar25,uVar28);
  uVar15 = 0;
  FUN_1009943f8(0);
  uVar25 = 0xff;
  FUN_1005e3ae8(0xff,param_9,PTR___type_metadata_for_Swift_Never_100eadc38);
  uVar28 = 0;
  FUN_1006529e0(0,uVar25);
  _swift_retain(lVar13);
  puVar7 = local_100;
  _swift_retain(local_100);
  _swift_retain(uVar16);
  _swift_retain(uVar26);
  pcVar27 = FUN_1009a16dc;
  FUN_100640e7c(FUN_1009a16dc,puVar10,uVar15,uVar28,&PTR_PTR_100f21d18);
  _swift_release(puVar10);
  puVar10 = &DAT_100f22cf0;
  _swift_allocObject(&DAT_100f22cf0,0x18,7);
  *(undefined8 *)(puVar10 + 0x10) = param_9;
  pcVar19 = FUN_1008fe84c;
  thunk_FUN_10064a5bc(FUN_1008fe84c,puVar10,uVar25);
  _swift_release(puVar7);
  _swift_unknownObjectRelease(pcVar12);
  _swift_release(lVar13);
  FUN_100004550(local_f8,local_e8);
  _swift_release(pcVar27);
  _swift_release(puVar10);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
    return pcVar19;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


