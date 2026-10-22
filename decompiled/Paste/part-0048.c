/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100090c28 | FUN_100090c28 */

void FUN_100090c28(void)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x18));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100090c88;
  }
  else {
    _swift_errorRelease();
    pcVar1 = FUN_100090ce0;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100090c88 | FUN_100090c88 */

void FUN_100090c88(void)

{
  long unaff_x22;
  
  **(undefined1 **)(unaff_x22 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x000100090c94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100090c98 | FUN_100090c98 */

void FUN_100090c98(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x20));
  _swift_task_switch(thunk_FUN_100090c88,0,0);
  return;
}



/* Address: 0x100090ce0 | FUN_100090ce0 */

void FUN_100090ce0(void)

{
  long unaff_x22;
  
  **(undefined1 **)(unaff_x22 + 0x10) = 1;
                    /* WARNING: Could not recover jumptable at 0x000100090cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100090cf4 | FUN_100090cf4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100090cf4(char *param_1,void *param_2,char *param_3,void *param_4)

{
  void *pvVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  String SVar6;
  String SVar7;
  undefined1 auStack_88 [24];
  undefined8 local_70;
  long lStack_68;
  
  pcVar3 = param_3 + 0x10;
  pcVar4 = param_3;
  _swift_unknownObjectWeakLoadStrong();
  if (pcVar3 != (char *)0x0) {
    uVar5 = *(undefined8 *)(pcVar3 + _TtC5Paste11AppDelegate::logger);
    _swift_retain(uVar5);
    FUN_1000d468c(auStack_88,0);
    _swift_release(uVar5);
    lVar2 = lStack_68;
    uVar5 = local_70;
    FUN_100004640(auStack_88,local_70);
    pcVar3 = (char *)0x6c696e;
    if (param_2 != (void *)0x0) {
      pcVar3 = param_1;
    }
    pvVar1 = (void *)0xe300000000000000;
    if (param_2 != (void *)0x0) {
      pvVar1 = param_2;
    }
    _swift_bridgeObjectRetain(param_2);
    SVar6.bridgeObject = pvVar1;
    SVar6.str = pcVar3;
    SVar7.bridgeObject = param_4;
    SVar7.str = pcVar4;
    Swift::String::append(SVar6,SVar7);
    _swift_bridgeObjectRelease(pvVar1);
    FUN_1000d4dd4(0x3a44492072657355,0xe900000000000020,uVar5,lVar2);
    _swift_bridgeObjectRelease(0xe900000000000020);
    FUN_100004594(auStack_88);
  }
  pcVar3 = param_3 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (pcVar3 != (char *)0x0) {
    uVar5 = *(undefined8 *)(pcVar3 + _TtC5Paste11AppDelegate::analytics);
    _swift_retain(uVar5);
    FUN_1000da768(auStack_88,0);
    _swift_release(uVar5);
    lVar2 = lStack_68;
    uVar5 = local_70;
    FUN_100004640(auStack_88,local_70);
    (**(code **)(lVar2 + 8))(param_1,param_2,uVar5,lVar2);
    FUN_100004594(auStack_88);
  }
  param_3 = param_3 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_3 != (char *)0x0) {
    uVar5 = *(undefined8 *)(param_3 + _TtC5Paste11AppDelegate::telemetry);
    _swift_retain(uVar5);
    FUN_1000da768(auStack_88,0);
    _swift_release(uVar5);
    FUN_100004640(auStack_88,local_70);
    (**(code **)(lStack_68 + 0x18))(param_1,param_2,local_70,lStack_68);
    FUN_100004594(auStack_88);
  }
  return;
}



/* Address: 0x100090eec | FUN_100090eec */

undefined1  [16] FUN_100090eec(void)

{
  MainActor *pMVar1;
  undefined8 *puVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  undefined *puVar5;
  undefined1 local_40 [16];
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  puVar5 = PTR_typeMetadataAccessor_100eaec10;
  pMVar1 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  puVar2 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar5,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("Paste/AppDelegate.swift",0x17,1,0xea,UVar3.unknown,puVar2)
    ;
  }
  puVar5 = &DAT_100faa8d0;
  FUN_1000037f0(&DAT_100faa8d0,&DAT_100c281d0);
  FUN_100357f60(local_40,FUN_100090fc0,0,puVar5);
  _swift_release(pMVar1);
  return local_40;
}



/* Address: 0x100090fc0 | FUN_100090fc0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100090fc0(__int64 *param_1)

{
  _CocoaArrayWrapper _Var1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  __int64 _Var5;
  undefined auStack_a0 [24];
  undefined *local_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  undefined8 local_60;
  long lStack_58;
  
  puVar4 = auStack_a0;
  FUN_1003594c0(auStack_78);
  FUN_100004640(auStack_78,local_60);
  FUN_1003595f8(auStack_a0);
  lVar2 = lStack_80;
  puVar3 = local_88;
  FUN_100004640(auStack_a0,local_88);
  (**(code **)(lVar2 + 0x28))(puVar3,lVar2);
  (**(code **)(lStack_58 + 0x10))();
  FUN_100004594();
  FUN_1000386a0();
  if ((ulong)puVar4 >> 0x3e == 0) {
    _Var5 = *(__int64 *)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)puVar4 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar4) {
      _Var1.unknown = puVar4;
    }
    _Var5 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  _swift_bridgeObjectRelease();
  _swift_release(puVar3);
  *param_1 = _Var5;
  FUN_1003595f8(auStack_a0);
  FUN_100004640(auStack_a0,local_88);
  puVar3 = local_88;
  (**(code **)(lStack_80 + 0x18))(local_88,lStack_80);
  puVar4 = puVar3;
  FUN_1000386a0();
  if ((ulong)puVar4 >> 0x3e == 0) {
    _Var5 = *(__int64 *)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)puVar4 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar4) {
      _Var1.unknown = puVar4;
    }
    _Var5 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  _swift_bridgeObjectRelease();
  _swift_release(puVar3);
  param_1[1] = _Var5;
  FUN_100004594(auStack_a0);
  FUN_100004594(auStack_78);
  return;
}



/* Address: 0x100091150 | FUN_100091150 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100091150(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  code *pcVar1;
  ID self;
  ID IVar2;
  NSString *pNVar3;
  undefined8 extraout_x1;
  undefined8 uVar4;
  undefined1 auStack_78 [24];
  ID local_60;
  long lStack_58;
  
  FUN_100359be8(auStack_78);
  FUN_100004640(auStack_78,local_60);
  self = local_60;
  (**(code **)(lStack_58 + 0x10))(local_60,lStack_58);
  IVar2 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
  uVar4 = extraout_x1;
  FUN_1000f50ac(IVar2);
  if ((param_4 & 0xff) != 1) {
    FUN_1000f4a7c(IVar2,uVar4,param_3);
    pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(uVar4);
    objc_stub::setAppVersion_(self,pNVar3);
    FUN_100004594(auStack_78);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100091254);
  (*pcVar1)();
}



/* Address: 0x100091254 | FUN_100091254 */

void FUN_100091254(void)

{
  undefined1 local_11;
  
  local_11 = 1;
  FUN_1002ccc34(0xd000000000000014,0x8000000100d8f070,&local_11,
                PTR___type_metadata_for_Swift_Bool_100eac570);
  return;
}



/* Address: 0x10009129c | FUN_10009129c */

void FUN_10009129c(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_a8 [24];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  puVar1 = (undefined8 *)(*param_2 + _TtC5Paste11AppDelegate::_lastLaunchedVersion);
  _swift_beginAccess(puVar1,auStack_a8,0,0);
  uVar5 = puVar1[1];
  uVar3 = *puVar1;
  uStack_78 = puVar1[3];
  uVar6 = puVar1[2];
  uStack_68 = puVar1[5];
  uVar4 = puVar1[4];
  uVar2 = puVar1[6];
  local_90 = uVar3;
  uStack_88 = uVar5;
  local_80 = uVar6;
  local_70 = uVar4;
  local_60 = uVar2;
  _swift_retain(uVar3);
  _swift_retain(uVar5);
  _swift_retain(uVar6);
  _swift_retain(uVar4);
  _swift_retain(uVar2);
  FUN_1000037f0(&DAT_100faa8b0,&DAT_100c28168);
  FUN_1002ca7e0(param_1);
  _swift_release(uVar2);
  _swift_release(uVar4);
  _swift_release(uVar6);
  _swift_release(uVar5);
  _swift_release(uVar3);
  return;
}



/* Address: 0x100091390 | FUN_100091390 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100091390(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 local_48;
  
  uVar7 = param_1[1];
  uVar6 = *param_1;
  uVar5 = param_1[2];
  uVar1 = *(undefined1 *)(param_1 + 3);
  uVar4 = *param_2;
  puVar2 = &DAT_100c28170;
  _swift_getKeyPath(&DAT_100c28170);
  puVar3 = &DAT_100c28198;
  _swift_getKeyPath(&DAT_100c28198);
  local_60 = uVar6;
  uStack_58 = uVar7;
  local_50 = uVar5;
  local_48 = uVar1;
  FUN_1002cb5a0(&local_60,uVar4,puVar2,puVar3);
  return;
}



/* Address: 0x100091420 | FUN_100091420 */

void FUN_100091420(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined1 local_28;
  
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  local_28 = 1;
  puVar1 = &DAT_100faa858;
  FUN_1000037f0(&DAT_100faa858,&DAT_100c28000);
  FUN_1002ccc34(param_1,0xd000000000000013,0x8000000100d8f090,&local_40,puVar1);
  return;
}



/* Address: 0x100091490 | FUN_100091490 */

void FUN_100091490(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined1 local_28;
  
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  local_28 = 1;
  puVar1 = &DAT_100faa858;
  FUN_1000037f0(&DAT_100faa858,&DAT_100c28000);
  FUN_1002ccc34(param_1,0xd000000000000013,0x8000000100d8f090,&local_40,puVar1);
  return;
}



/* Address: 0x100091500 | FUN_100091500 */

void FUN_100091500(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100faa860 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2d940;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2d940,&DAT_100eb6f68);
  DAT_100faa860 = pTVar1;
  return;
}



/* Address: 0x100091510 | FUN_100091510 */

void FUN_100091510(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2d940;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2d940,&DAT_100eb6f68);
  DAT_100faa860 = pTVar1;
  return;
}



/* Address: 0x100091540 | FUN_100091540 */

void FUN_100091540(long *param_1,code *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_38;
  
  if (*param_1 == 0) {
    puVar1 = &DAT_100faa858;
    FUN_100005c24(&DAT_100faa858,&DAT_100c28000);
    puVar2 = puVar1;
    (*param_2)();
    local_38 = puVar2;
    _swift_getWitnessTable(param_3,puVar1,&local_38);
    *param_1 = param_3;
  }
  return;
}



/* Address: 0x1000915b0 | FUN_1000915b0 */

void FUN_1000915b0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100faa870 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2d968;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2d968,&DAT_100eb6f68);
  DAT_100faa870 = pTVar1;
  return;
}



/* Address: 0x1000915c0 | FUN_1000915c0 */

void FUN_1000915c0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2d968;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2d968,&DAT_100eb6f68);
  DAT_100faa870 = pTVar1;
  return;
}



/* Address: 0x1000915f0 | FUN_1000915f0 */

void FUN_1000915f0(void)

{
  undefined1 local_11;
  
  local_11 = 1;
  FUN_1002ccc34(0xd000000000000014,0x8000000100d8f070,&local_11,
                PTR___type_metadata_for_Swift_Bool_100eac570);
  return;
}



/* Address: 0x100091638 | thunk_FUN_10006d2a4 */

void thunk_FUN_10006d2a4(void)

{
  FUN_10006d2a4();
  return;
}



/* Address: 0x10009163c | FUN_10009163c */

void FUN_10009163c(void)

{
  undefined1 local_11;
  
  local_11 = 0;
  FUN_1002ccc34(0x616e4550434d7369,0xec00000064656c62,&local_11,
                PTR___type_metadata_for_Swift_Bool_100eac570);
  return;
}



/* Address: 0x100091684 | FUN_100091684 */

void FUN_100091684(void)

{
  undefined1 local_11;
  
  local_11 = 0;
  FUN_1002ccc34(0x616e4550434d7369,0xec00000064656c62,&local_11,
                PTR___type_metadata_for_Swift_Bool_100eac570);
  return;
}



/* Address: 0x1000916cc | FUN_1000916cc */

void FUN_1000916cc(undefined8 *param_1,undefined8 param_2)

{
  FUN_10046e5d8();
  *param_1 = param_2;
  return;
}



/* Address: 0x1000916f0 | FUN_1000916f0 */

void FUN_1000916f0(undefined8 *param_1,undefined8 param_2)

{
  FUN_100af264c();
  *param_1 = param_2;
  return;
}



/* Address: 0x100091714 | FUN_100091714 */

void FUN_100091714(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1000b1e44(0);
  FUN_1000d80e0(param_1,"Paste/AppDelegate+Handoff.swift",0x1f,2,0x7d,0x13,FUN_1000b1e64,0,uVar1);
  return;
}



/* Address: 0x100091764 | FUN_100091764 */

void FUN_100091764(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  Instant IVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = unaff_x20;
  IVar1 = Swift::ContinuousClock::Instant::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x40) = IVar1.unknown;
  lVar4 = *(long *)(IVar1.unknown + -8);
  *(long *)(unaff_x22 + 0x48) = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x58) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x10) = param_3;
  *(undefined8 *)(unaff_x22 + 0x18) = param_4;
  *(undefined1 *)(unaff_x22 + 0x20) = param_5;
  _swift_task_switch(FUN_100091800,0,0);
  return;
}



/* Address: 0x100091800 | FUN_100091800 */

void FUN_100091800(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  lVar3 = *(long *)(unaff_x22 + 0x48);
  Swift::ContinuousClock::typeMetadataAccessor();
  FUN_100003a00(&DAT_100faa8a0,PTR_typeMetadataAccessor_100eaef18,
                PTR_Swift__Swift__ContinuousClock_>Swift__Clock_100eaef28);
  Swift::Clock::_get_now();
  FUN_100003a00(&DAT_100faa8a8,PTR_typeMetadataAccessor_100eaeef0,
                PTR_Swift__Swift__ContinuousClock__Instant_>Swift__InstantProtocol_100eaef08);
  Swift::InstantProtocol::_advanced();
  pcVar5 = *(code **)(lVar3 + 8);
  *(code **)(unaff_x22 + 0x60) = pcVar5;
  (*pcVar5)(uVar1,uVar2);
  plVar4 = (long *)(ulong)*(uint *)(PTR__sleep_100eaefe8 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x68) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100091908;
  Swift::Clock::_sleep();
  return;
}



/* Address: 0x100091908 | FUN_100091908 */

void FUN_100091908(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  long *unaff_x22;
  long lVar4;
  long lVar5;
  
  lVar5 = *unaff_x22;
  pcVar1 = *(code **)(lVar5 + 0x60);
  uVar2 = *(undefined8 *)(lVar5 + 0x58);
  uVar3 = *(undefined8 *)(lVar5 + 0x40);
  lVar4 = *unaff_x22;
  *(long *)(lVar5 + 0x70) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar5 + 0x68));
  (*pcVar1)(uVar2,uVar3);
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_1000919ac,0,0);
    return;
  }
  uVar2 = *(undefined8 *)(lVar5 + 0x50);
  _swift_task_dealloc(*(undefined8 *)(lVar5 + 0x58));
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001000919a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))();
  return;
}



/* Address: 0x1000919ac | FUN_1000919ac */

void FUN_1000919ac(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x58));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001000919e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1000919e8 | FUN_1000919e8 */

void FUN_1000919e8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  char local_2d0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  byte local_a8;
  undefined7 uStack_a7;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  
  _swift_getKeyPath(&DAT_100c28220);
  FUN_1002cb7e0(&local_188);
  uStack_1b8 = uStack_180;
  local_1c0 = local_188;
  uStack_1a8 = uStack_170;
  uStack_1b0 = local_178;
  uStack_198 = uStack_160;
  local_1a0 = local_168;
  local_190 = local_158;
  puVar1 = &DAT_100faa2f0;
  FUN_1000037f0(&DAT_100faa2f0,&DAT_100c25940);
  FUN_1002ca7e0(&local_a8);
  if ((local_a8 & 1) == 0) {
    puVar2 = &DAT_100c28248;
    _swift_getKeyPath(&DAT_100c28248);
    puVar3 = &DAT_100fa80e0;
    FUN_100038704(&DAT_100fa80e0,FUN_1000386c4,
                  PTR__Swift__protocol_conformance_descriptor_for_<A_where_A:_Swift_Decodable>_A____Swift_Decodable_in_Swift_>Swift__Decodable_100eae0b0
                 );
    puVar4 = &DAT_100faa900;
    FUN_100038704(&DAT_100faa900,FUN_100038774,
                  PTR__Swift__protocol_conformance_descriptor_for_<A_where_A:_Swift_Encodable>_A____Swift_Encodable_in_Swift_>Swift__Encodable_100eae098
                 );
    FUN_1002cb88c(&local_150,puVar2,puVar3,puVar4);
    uStack_1f8 = uStack_148;
    local_200 = local_150;
    uStack_1e8 = uStack_138;
    uStack_1f0 = local_140;
    uStack_1d8 = uStack_128;
    local_1e0 = local_130;
    local_1d0 = local_120;
    _swift_getKeyPath(&DAT_100c28270);
    FUN_1002cb88c(&local_118);
    uStack_238 = uStack_110;
    local_240 = local_118;
    uStack_228 = uStack_100;
    uStack_230 = local_108;
    uStack_218 = uStack_f0;
    local_220 = local_f8;
    local_210 = local_e8;
    _swift_getKeyPath(&DAT_100c28298);
    FUN_1002cb88c(&local_e0);
    uStack_278 = uStack_d8;
    local_280 = local_e0;
    uStack_268 = uStack_c8;
    uStack_270 = local_d0;
    uStack_258 = uStack_b8;
    local_260 = local_c0;
    local_250 = local_b0;
    _swift_getKeyPath(&DAT_100c282c0);
    FUN_1002cb88c(&local_a8);
    uStack_2b8 = uStack_a0;
    uStack_2a8 = uStack_90;
    uStack_2b0 = uStack_98;
    uStack_298 = uStack_80;
    local_2a0 = local_88;
    local_290 = local_78;
    puVar2 = &DAT_100faa910;
    FUN_1000037f0(&DAT_100faa910,&DAT_100c25220);
    FUN_1002ca7e0(&local_2e0);
    if (local_2d0 == '\x01') {
      if (DAT_100fab8f0 != -1) {
        _swift_once(&DAT_100fab8f0,FUN_1000affa8);
      }
      uStack_2d8 = DAT_101057070;
      local_2e0 = DAT_101057068;
      local_2d0 = '\0';
      FUN_1002cac1c(&local_2e0,puVar2);
    }
    FUN_1002ca7e0(&local_2e0,puVar2);
    if (local_2d0 == '\x01') {
      if (DAT_100fab8e8 != -1) {
        _swift_once(&DAT_100fab8e8,FUN_1000affd4);
      }
      uStack_2d8 = DAT_101057060;
      local_2e0 = DAT_101057058;
      local_2d0 = '\0';
      FUN_1002cac1c(&local_2e0,puVar2);
    }
    FUN_1002ca7e0(&local_2e0,puVar2);
    if (local_2d0 == '\x01') {
      if (DAT_100fab8e0 != -1) {
        _swift_once(&DAT_100fab8e0,FUN_1000b0000);
      }
      uStack_2d8 = DAT_101057050;
      local_2e0 = DAT_101057048;
      local_2d0 = '\0';
      FUN_1002cac1c(&local_2e0,puVar2);
    }
    FUN_1002ca7e0(&local_2e0,puVar2);
    if (local_2d0 == '\x01') {
      if (DAT_100fab8d8 != -1) {
        _swift_once(&DAT_100fab8d8,FUN_1000b0028);
      }
      uStack_2d8 = DAT_101057040;
      local_2e0 = DAT_101057038;
      local_2d0 = '\0';
      FUN_1002cac1c(&local_2e0,puVar2);
      _swift_release(local_120);
      _swift_release(local_130);
      _swift_release(local_140);
      _swift_release(uStack_148);
      _swift_release(local_150);
      _swift_release(local_e8);
      _swift_release(local_f8);
      _swift_release(local_108);
      _swift_release(uStack_110);
      _swift_release(local_118);
    }
    else {
      _swift_release(local_120);
      _swift_release(local_130);
      _swift_release(local_140);
      _swift_release(uStack_148);
      _swift_release(local_150);
      _swift_release(local_e8);
      _swift_release(local_f8);
      _swift_release(local_108);
      _swift_release(uStack_110);
      _swift_release(local_118);
    }
    _swift_release(local_b0);
    _swift_release(local_c0);
    _swift_release(local_d0);
    _swift_release(uStack_d8);
    _swift_release(local_e0);
    _swift_release(local_78);
    _swift_release(local_88);
    _swift_release(uStack_98);
    _swift_release(uStack_a0);
    _swift_release(CONCAT71(uStack_a7,local_a8));
    local_200 = CONCAT71(local_200._1_7_,1);
    FUN_1002cac1c(&local_200,puVar1);
    _swift_release(local_158);
    _swift_release(local_168);
    _swift_release(local_178);
    _swift_release(uStack_180);
  }
  else {
    _swift_release(local_158);
    _swift_release(local_168);
    _swift_release(local_178);
    _swift_release(uStack_180);
  }
  _swift_release(local_188);
  return;
}



/* Address: 0x100091f3c | FUN_100091f3c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100091f3c(MainActor *param_1)

{
  undefined *puVar1;
  URL UVar2;
  ID IVar3;
  TaskPriority TVar4;
  MainActor *pMVar5;
  undefined8 *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar7;
  undefined8 unaff_x20;
  long lVar8;
  long lVar9;
  String SVar10;
  undefined1 auStack_80 [16];
  ID local_70;
  ID local_68;
  
  puVar1 = &DAT_100faa890;
  FUN_1000037f0(&DAT_100faa890,&DAT_100c22f68);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_80 + -extraout_x8;
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar9 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  lVar8 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  IVar3 = objc_stub::hierarchicalRootRecordID((ID)param_1);
  if (IVar3 != 0) {
    puVar1 = &DAT_100fa81f0;
    local_70 = IVar3;
    FUN_1000037f0(&DAT_100fa81f0,&DAT_100c2ae00);
    FUN_100357f60(&local_68,FUN_100092300,auStack_80,puVar1);
    if (local_68 != 0) {
      objc_stub::identifier(local_68);
      SVar10 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      FUN_1001ac4c4(lVar8,SVar10.str,SVar10.bridgeObject);
      _swift_bridgeObjectRelease(SVar10.bridgeObject);
      FUN_1000a1cb0(lVar8);
      (**(code **)(lVar9 + 8))(lVar8,UVar2.unknown);
      return;
    }
  }
  TVar4 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar4.unknown + -8) + 0x38))(puVar7,1,1,TVar4.unknown);
  pMVar5 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar5 = Swift::MainActor::get_shared(pMVar5,param_1);
  puVar6 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  puVar1 = &DAT_100eb3588;
  _swift_allocObject(&DAT_100eb3588,0x30,7);
  *(MainActor **)(puVar1 + 0x10) = pMVar5;
  *(undefined8 **)(puVar1 + 0x18) = puVar6;
  *(undefined8 *)(puVar1 + 0x20) = unaff_x20;
  *(MainActor **)(puVar1 + 0x28) = param_1;
  FUN_1000645b0(0,0,puVar7,&DAT_100c28120,puVar1);
  _swift_release();
  return;
}



/* Address: 0x100092178 | FUN_100092178 */

void FUN_100092178(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  undefined8 uVar1;
  _StringGuts _Var2;
  String SVar3;
  String SVar4;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  undefined *local_50;
  undefined8 uStack_48;
  
  FUN_1000d468c(auStack_68);
  _Var2.unknown = local_50;
  FUN_100004640(auStack_68);
  local_78 = 0;
  uStack_70 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x3b,_Var2);
  SVar3.bridgeObject = (void *)0x8000000100d8f0f0;
  SVar3.str = (char *)0xd000000000000039;
  SVar4.bridgeObject = param_4;
  SVar4.str = param_3;
  Swift::String::append(SVar3,SVar4);
  _swift_getErrorValue(param_1,auStack_80,&local_98);
  Swift::DefaultStringInterpolation::_appendInterpolation(local_98,uStack_90);
  uVar1 = uStack_70;
  FUN_1000d4e0c(local_78,uStack_70,local_50,uStack_48);
  _swift_bridgeObjectRelease(uVar1);
  FUN_100004594(auStack_68);
  return;
}



/* Address: 0x100092254 | FUN_100092254 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100092254(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x100092288 | FUN_100092288 */

void FUN_100092288(undefined8 param_1)

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
  plVar5 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100008284;
  FUN_10008f6a4(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Address: 0x100092300 | FUN_100092300 */

void FUN_100092300(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10008f5ec(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100092308 | FUN_100092308 */

void FUN_100092308(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x100092334 | FUN_100092334 */

void FUN_100092334(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_100008284;
  FUN_10008ee34(plVar3,param_1,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x1000923a0 | FUN_1000923a0 */

void FUN_1000923a0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1000923c4 | FUN_1000923c4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000923c4(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x1000923f0 | FUN_1000923f0 */

void FUN_1000923f0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long *plVar4;
  long unaff_x20;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined1 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar4 = (long *)0x90;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)thunk_FUN_100008284;
  FUN_10008daa8(plVar4,param_1,uVar1,uVar2,uVar3,uVar5);
  return;
}



/* Address: 0x10009246c | thunk_FUN_10009129c */

void thunk_FUN_10009129c(void)

{
  FUN_10009129c();
  return;
}



/* Address: 0x100092470 | thunk_FUN_100091390 */

void thunk_FUN_100091390(void)

{
  FUN_100091390();
  return;
}



/* Address: 0x100092474 | thunk_FUN_1002cc214 */

void thunk_FUN_1002cc214(void)

{
  FUN_1002cc214();
  return;
}



/* Address: 0x100092478 | FUN_100092478 */

void FUN_100092478(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x10009249c | FUN_10009249c */

void FUN_10009249c(void)

{
  FUN_100090cf4();
  return;
}



/* Address: 0x1000924a4 | FUN_1000924a4 */

void FUN_1000924a4(void)

{
  FUN_100090898();
  return;
}



/* Address: 0x1000924ac | FUN_1000924ac */

void FUN_1000924ac(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x1000924d8 | FUN_1000924d8 */

void FUN_1000924d8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  long *plVar4;
  uint uVar5;
  long unaff_x20;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  bVar3 = *(byte *)(unaff_x20 + 0x20);
  uVar5 = 0x100;
  if (*(char *)(unaff_x20 + 0x21) == '\0') {
    uVar5 = 0;
  }
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar4 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)thunk_FUN_100008284;
  FUN_100090b9c(plVar4,param_1,uVar1,uVar2,uVar5 | bVar3,uVar6);
  return;
}



/* Address: 0x100092564 | FUN_100092564 */

void FUN_100092564(void)

{
  undefined1 local_11;
  
  local_11 = 0;
  FUN_1002ccc34(0xd000000000000024,0x8000000100d8f150,&local_11,
                PTR___type_metadata_for_Swift_Bool_100eac570);
  return;
}



/* Address: 0x1000925a8 | thunk_FUN_1000a1c44 */

void thunk_FUN_1000a1c44(void)

{
  FUN_1000a1c44();
  return;
}



/* Address: 0x1000925ac | thunk_FUN_1000a2fb8 */

void thunk_FUN_1000a2fb8(void)

{
  FUN_1000a2fb8();
  return;
}



/* Address: 0x1000925b0 | thunk_FUN_100095150 */

void thunk_FUN_100095150(void)

{
  FUN_100095150();
  return;
}



/* Address: 0x1000925b4 | thunk_FUN_1000951bc */

void thunk_FUN_1000951bc(void)

{
  FUN_1000951bc();
  return;
}



/* Address: 0x1000925b8 | thunk_FUN_1000923a0 */

void thunk_FUN_1000923a0(void)

{
  FUN_1000923a0();
  return;
}



/* Address: 0x1000925bc | thunk_FUN_1000923a0 */

void thunk_FUN_1000923a0(void)

{
  FUN_1000923a0();
  return;
}



/* Address: 0x1000925c0 | thunk_FUN_1000923a0 */

void thunk_FUN_1000923a0(void)

{
  FUN_1000923a0();
  return;
}



/* Address: 0x1000925c4 | thunk_FUN_100090c88 */

void thunk_FUN_100090c88(void)

{
  FUN_100090c88();
  return;
}



/* Address: 0x1000925c8 | FUN_1000925c8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000925c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ID param_5)

{
  undefined8 *puVar1;
  ID IVar2;
  code *pcVar3;
  ID unaff_x20;
  undefined8 uVar4;
  undefined8 extraout_d0;
  
  _swift_getObjectType();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"mouseDown:",param_5);
  objc_stub::locationInWindow(param_5);
  puVar1 = (undefined8 *)(unaff_x20 + _TtCC5Paste10MainWindow12ResizeHandle::initialLocation);
  *puVar1 = extraout_d0;
  puVar1[1] = param_2;
  *(undefined1 *)(puVar1 + 2) = 0;
  IVar2 = objc_stub::window(unaff_x20);
  if (IVar2 == 0) {
    param_3 = 0;
    param_4 = 0;
  }
  else {
    objc_stub::frame(IVar2);
  }
  puVar1 = (undefined8 *)(unaff_x20 + _TtCC5Paste10MainWindow12ResizeHandle::initialWindowSize);
  puVar1[1] = param_4;
  *puVar1 = param_3;
  *(bool *)(puVar1 + 2) = IVar2 == 0;
  IVar2 = objc_stub::clickCount(param_5);
  if (IVar2 == 2) {
    pcVar3 = *(code **)(unaff_x20 + _TtCC5Paste10MainWindow12ResizeHandle::onResetSize);
    if (pcVar3 != (code *)0x0) {
      uVar4 = ((undefined8 *)(unaff_x20 + _TtCC5Paste10MainWindow12ResizeHandle::onResetSize))[1];
      _swift_retain(uVar4);
      (*pcVar3)();
      FUN_100004550(pcVar3,uVar4);
    }
  }
  return;
}



/* Address: 0x1000926c4 | _TtCC5Paste10MainWindow12ResizeHandle::mouseDown: */

/* Function Stack Size: 0x18 bytes */

void _TtCC5Paste10MainWindow12ResizeHandle::mouseDown_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100092878();
  return;
}



/* Address: 0x1000926d4 | FUN_1000926d4 */

void FUN_1000926d4(ID param_1)

{
  undefined8 *puVar1;
  ID IVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  _swift_getObjectType();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffd0,"mouseUp:",param_1);
  puVar1 = (undefined8 *)(unaff_x20 + _TtCC5Paste10MainWindow12ResizeHandle::initialLocation);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _TtCC5Paste10MainWindow12ResizeHandle::initialWindowSize);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  IVar2 = objc_stub::clickCount(param_1);
  if ((long)IVar2 < 2) {
    pcVar3 = *(code **)(unaff_x20 + _TtCC5Paste10MainWindow12ResizeHandle::onEndResize);
    if (pcVar3 != (code *)0x0) {
      uVar4 = ((undefined8 *)(unaff_x20 + _TtCC5Paste10MainWindow12ResizeHandle::onEndResize))[1];
      _swift_retain(uVar4);
      (*pcVar3)();
      FUN_100004550(pcVar3,uVar4);
    }
  }
  return;
}



/* Address: 0x100092784 | _TtCC5Paste10MainWindow12ResizeHandle::mouseUp: */

/* Function Stack Size: 0x18 bytes */

void _TtCC5Paste10MainWindow12ResizeHandle::mouseUp_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100092878();
  return;
}



/* Address: 0x100092794 | FUN_100092794 */

void FUN_100092794(undefined8 param_1,double param_2,ID param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  
  _swift_getObjectType();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffb0,"mouseDragged:",param_3);
  if ((*(char *)(unaff_x20 + _TtCC5Paste10MainWindow12ResizeHandle::initialLocation + 0x10) !=
       '\x01') &&
     (puVar1 = (undefined8 *)(unaff_x20 + _TtCC5Paste10MainWindow12ResizeHandle::initialWindowSize),
     *(char *)(puVar1 + 2) != '\x01')) {
    uVar4 = *puVar1;
    dVar5 = (double)puVar1[1];
    dVar6 = *(double *)(unaff_x20 + _TtCC5Paste10MainWindow12ResizeHandle::initialLocation + 8);
    objc_stub::locationInWindow(param_3);
    pcVar2 = *(code **)(unaff_x20 + _TtCC5Paste10MainWindow12ResizeHandle::onLiveResize);
    if (pcVar2 != (code *)0x0) {
      uVar3 = ((undefined8 *)(unaff_x20 + _TtCC5Paste10MainWindow12ResizeHandle::onLiveResize))[1];
      _swift_retain(uVar3);
      (*pcVar2)(uVar4,dVar5 - (dVar6 - param_2));
      FUN_100004550(pcVar2,uVar3);
    }
  }
  return;
}



/* Address: 0x100092868 | _TtCC5Paste10MainWindow12ResizeHandle::mouseDragged: */

/* Function Stack Size: 0x18 bytes */

void _TtCC5Paste10MainWindow12ResizeHandle::mouseDragged_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100092878();
  return;
}



/* Address: 0x100092878 | FUN_100092878 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
FUN_100092878(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             code *param_5)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1000081a8();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/MainWindow.ResizeHandle.swift",0x23,1,param_4,UVar3.unknown,pMVar1);
  }
  (*param_5)(param_3);
  _swift_release(pMVar2);
  return 0;
}


