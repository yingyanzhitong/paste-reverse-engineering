/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1005d35d4 | FUN_1005d35d4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_1005d35d4(undefined8 param_1)

{
  URL UVar1;
  URLRequest_conflict UVar2;
  ID IVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  URL url;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  String SVar8;
  String SVar9;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar6 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar6 + 0x40));
  url.unknown = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  UVar2 = Foundation::URLRequest::typeMetadataAccessor();
  lVar7 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar7 + 0x40));
  lVar5 = (long)url.unknown - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar4 = lVar5 - extraout_x12;
  (**(code **)(lVar6 + 0x10))(url.unknown,param_1,UVar1.unknown);
  Foundation::URLRequest::init(url,(NSURLRequestCachePolicy)0x0,60.0);
  SVar8.bridgeObject = (void *)0x8000000100dab8a0;
  SVar8.str = (char *)0xd000000000000011;
  Foundation::URLRequest::_setValue(SVar8,(URLRequest_conflict)0x747065636341);
  SVar9.bridgeObject = &DAT_e800000000000000;
  SVar9.str = (char *)0x65686361632d6f6e;
  Foundation::URLRequest::_setValue(SVar9,(URLRequest_conflict)0x6f432d6568636143);
  (**(code **)(lVar7 + 0x10))(lVar5,lVar4,UVar2.unknown);
  IVar3 = NSURLSessionConfiguration::defaultSessionConfiguration
                    ((ID)&_OBJC_CLASS___NSURLSessionConfiguration);
  FUN_1005d75bc();
  _swift_allocObject();
  FUN_1005d75f4(lVar5,IVar3);
  (**(code **)(lVar6 + 8))(param_1,UVar1.unknown);
  (**(code **)(lVar7 + 8))(lVar4,UVar2.unknown);
  return lVar5;
}



/* Address: 0x1005d37b8 | FUN_1005d37b8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1005d37b8(undefined8 param_1,undefined8 param_2)

{
  _swift_allocObject();
  FUN_1005d75f4(param_1,param_2);
  return param_1;
}



/* Address: 0x1005d3810 | FUN_1005d3810 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1005d3810(undefined8 param_1)

{
  FUN_1005d75f4();
  return param_1;
}



/* Address: 0x1005d3840 | FUN_1005d3840 */

void FUN_1005d3840(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_4;
  puVar1 = &DAT_100fd4898;
  FUN_1000f7830(&DAT_100fd4898,&DAT_100c65408);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x38) = uVar2;
  _swift_task_switch(FUN_1005d38a4,0,0);
  return;
}



/* Address: 0x1005d38a4 | FUN_1005d38a4 */

void FUN_1005d38a4(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x30);
  _swift_beginAccess(lVar2 + 0x10,unaff_x22 + 0x10,0,0);
  lVar2 = lVar2 + 0x10;
  _swift_weakLoadStrong();
  *(long *)(unaff_x22 + 0x40) = lVar2;
  if (lVar2 != 0) {
    _swift_task_switch(FUN_1005d3928,lVar2,0);
    return;
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  **(undefined1 **)(unaff_x22 + 0x28) = 1;
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001005d3924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005d3928 | FUN_1005d3928 */

void FUN_1005d3928(void)

{
  long lVar1;
  TaskPriority TVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar1 = *(long *)(unaff_x22 + 0x40);
  TVar2 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar2.unknown + -8) + 0x38))(uVar6,1,1,TVar2.unknown);
  puVar3 = &DAT_100ee7750;
  _swift_allocObject(&DAT_100ee7750,0x18,7);
  _swift_weakInit(puVar3 + 0x10,lVar1);
  puVar4 = &DAT_100ee77f0;
  _swift_allocObject(&DAT_100ee77f0,0x28,7);
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined8 *)(puVar4 + 0x18) = 0;
  *(undefined **)(puVar4 + 0x20) = puVar3;
  uVar5 = 0;
  FUN_1005d3b3c(0,0,uVar6,&DAT_100c65998,puVar4);
  FUN_1000fb4c4(uVar6,&DAT_100fd4898,&DAT_100c65408);
  uVar6 = *(undefined8 *)(lVar1 + _TtC11EventSource11EventSource::connectionTask);
  *(undefined8 *)(lVar1 + _TtC11EventSource11EventSource::connectionTask) = uVar5;
  _swift_release(lVar1);
  _swift_release(uVar6);
  _swift_task_switch(FUN_1005d3a24,0,0);
  return;
}



/* Address: 0x1005d3a24 | FUN_1005d3a24 */

void FUN_1005d3a24(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  **(undefined1 **)(unaff_x22 + 0x28) = 0;
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001005d3a58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005d3a5c | FUN_1005d3a5c */

void FUN_1005d3a5c(void)

{
  undefined8 in_x3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = in_x3;
  _swift_task_switch(FUN_1005d3a74,0,0);
  return;
}



/* Address: 0x1005d3a74 | FUN_1005d3a74 */

void FUN_1005d3a74(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x28);
  _swift_beginAccess(lVar2 + 0x10,unaff_x22 + 0x10,0,0);
  lVar2 = lVar2 + 0x10;
  _swift_weakLoadStrong();
  *(long *)(unaff_x22 + 0x30) = lVar2;
  if (lVar2 != 0) {
    plVar1 = (long *)0x290;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x38) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_1005d3af8;
    FUN_1005d3e28();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001005d3af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005d3af8 | FUN_1005d3af8 */

void FUN_1005d3af8(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  long lVar2;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x30);
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x38));
  _swift_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001005d3b38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x1005d3b3c | FUN_1005d3b3c */

void FUN_1005d3b3c(char *param_1,void *param_2,undefined8 param_3,undefined8 param_4,
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
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  undefined8 *puStack_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined *local_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined *local_60;
  long lStack_58;
  
  puVar2 = &DAT_100fd4898;
  FUN_1000f7830(&DAT_100fd4898,&DAT_100c65408);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_b0 + -extraout_x8;
  FUN_1005d7f98(param_3,puVar9);
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  lVar12 = *(long *)(TVar3.unknown + -8);
  puVar4 = puVar9;
  (**(code **)(lVar12 + 0x30))(puVar9,1,TVar3.unknown);
  TVar5.unknown = param_5;
  _swift_retain();
  if ((int)puVar4 == 1) {
    FUN_1000fb4c4(puVar9,&DAT_100fd4898,&DAT_100c65408);
    uVar10 = 0x1000;
  }
  else {
    _Var1 = Swift::TaskPriority::get_rawValue(TVar5);
    (**(code **)(lVar12 + 8))(puVar9,TVar3.unknown);
    uVar10 = (ulong)_Var1 | 0x1000;
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
    puVar2 = &DAT_100ee7818;
    _swift_allocObject(&DAT_100ee7818,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_4;
    *(undefined **)(puVar2 + 0x18) = param_5;
    if (lVar11 == 0 && UVar6.unknown == (undefined *)0x0) {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      local_70 = 0;
      uStack_68 = 0;
      puVar8 = &local_70;
      local_60 = UVar6.unknown;
      lStack_58 = lVar11;
    }
    _swift_task_create(uVar10,puVar8,PTR___type_metadata_for____100eae0c8 + 8,&DAT_100c659a8,puVar2)
    ;
  }
  else {
    SVar13.bridgeObject = param_2;
    SVar13.str = param_1;
    CVar7 = Swift::String::get_utf8CString(SVar13);
    puVar2 = &DAT_100ee7840;
    _swift_allocObject(&DAT_100ee7840,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_4;
    *(undefined **)(puVar2 + 0x18) = param_5;
    _swift_retain(param_5);
    if (lVar11 == 0 && UVar6.unknown == (undefined *)0x0) {
      puStack_a0 = (undefined8 *)0x0;
    }
    else {
      local_90 = 0;
      uStack_88 = 0;
      puStack_a0 = &local_90;
      local_80 = UVar6.unknown;
      lStack_78 = lVar11;
    }
    local_a8 = 7;
    local_98 = CVar7.unknown + 0x20;
    _swift_task_create(uVar10,&local_a8,PTR___type_metadata_for____100eae0c8 + 8,&DAT_100c659b0,
                       puVar2);
    _swift_release(param_5);
    _swift_release(CVar7.unknown);
  }
  return;
}



/* Address: 0x1005d3d88 | FUN_1005d3d88 */

void FUN_1005d3d88(void)

{
  long lVar1;
  Task TVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _TtC11EventSource11EventSource::readyState;
  _swift_beginAccess(unaff_x20 + _TtC11EventSource11EventSource::readyState,auStack_48,1,0);
  *(undefined1 *)(unaff_x20 + lVar1) = 2;
  lVar1 = _TtC11EventSource11EventSource::connectionTask;
  puVar4 = *(undefined **)(unaff_x20 + _TtC11EventSource11EventSource::connectionTask);
  if (puVar4 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    TVar2.unknown = puVar4;
    _swift_retain();
    Swift::Task::cancel(TVar2);
    _swift_release(puVar4);
    uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
  }
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
  _swift_release(uVar3);
  return;
}



/* Address: 0x1005d3e28 | FUN_1005d3e28 */

void FUN_1005d3e28(void)

{
  undefined *puVar1;
  ulong uVar2;
  AsyncBytes AVar3;
  URLRequest_conflict UVar4;
  long lVar5;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x130) = unaff_x20;
  puVar1 = &DAT_100fd4d40;
  FUN_1000f7830(&DAT_100fd4d40,&DAT_100c65948);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x138) = uVar2;
  AVar3 = AsyncBytes::_typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x140) = AVar3.unknown;
  lVar5 = *(long *)(AVar3.unknown + -8);
  *(long *)(unaff_x22 + 0x148) = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x150) = uVar2;
  UVar4 = Foundation::URLRequest::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x158) = UVar4.unknown;
  lVar5 = *(long *)(UVar4.unknown + -8);
  *(long *)(unaff_x22 + 0x160) = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x168) = uVar2;
  _swift_task_switch(FUN_1005d3edc);
  return;
}



/* Address: 0x1005d3edc | FUN_1005d3edc */

void FUN_1005d3edc(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  Task TVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  long lVar11;
  
  lVar8 = *(long *)(unaff_x22 + 0x130);
  FUN_1005d7bdc();
  _swift_allocObject();
  *(long *)(unaff_x22 + 0x170) = param_1;
  _swift_defaultActor_initialize();
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0xe000000000000000;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined1 *)(param_1 + 0xa8) = 1;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0xe000000000000000;
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  *(undefined8 *)(param_1 + 0xc0) = 3000;
  *(undefined **)(param_1 + 200) = puVar2;
  *(undefined1 *)(param_1 + 0xd0) = 0;
  puVar3 = PTR___swiftEmptySetSingleton_100eae0e8;
  *(undefined **)(param_1 + 0xd8) = puVar2;
  *(undefined **)(param_1 + 0xe0) = puVar3;
  lVar11 = _TtC11EventSource11EventSource::readyState;
  uVar1 = _TtC11EventSource11EventSource::request;
  *(long *)(unaff_x22 + 0x178) = _TtC11EventSource11EventSource::readyState;
  *(undefined8 *)(unaff_x22 + 0x180) = uVar1;
  uVar1 = _TtC11EventSource11EventSource::_onErrorCallback;
  lVar6 = _TtC11EventSource11EventSource::session;
  *(undefined8 *)(unaff_x22 + 0x188) = _TtC11EventSource11EventSource::_onOpenCallback;
  *(undefined8 *)(unaff_x22 + 400) = uVar1;
  lVar7 = _TtC11EventSource11EventSource::maximumFinalizationEventCount;
  uVar1 = _TtC11EventSource11EventSource::_onMessageCallback;
  *(long *)(unaff_x22 + 0x198) = _TtC11EventSource11EventSource::maximumFinalizationEventCount;
  *(undefined8 *)(unaff_x22 + 0x1a0) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x1a8) = *(undefined8 *)(lVar8 + lVar6);
  _swift_beginAccess(lVar8 + lVar11,unaff_x22 + 0x90,1,0);
  TVar5.unknown = (undefined *)(lVar8 + lVar7);
  _swift_beginAccess(TVar5.unknown,unaff_x22 + 0xa8,0,0);
  bVar4 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar5);
  if (!bVar4) {
    lVar6 = *(long *)(unaff_x22 + 0x130);
    if (*(char *)(lVar6 + *(long *)(unaff_x22 + 0x178)) != '\x02') {
      lVar7 = *(long *)(unaff_x22 + 0x180);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x168);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x170);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x158);
      lVar11 = *(long *)(unaff_x22 + 0x160);
      *(undefined1 *)(lVar6 + *(long *)(unaff_x22 + 0x178)) = 0;
      (**(code **)(lVar11 + 0x10))(uVar1,lVar6 + lVar7,uVar9);
      _swift_task_switch(FUN_1005d41d8,uVar10,0);
      return;
    }
  }
  _swift_release(*(undefined8 *)(unaff_x22 + 0x170));
  lVar11 = *(long *)(unaff_x22 + 0x178);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x150);
  lVar6 = *(long *)(unaff_x22 + 0x130);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x138);
  _swift_beginAccess(lVar6 + lVar11,unaff_x22 + 0xc0,1,0);
  *(undefined1 *)(lVar6 + lVar11) = 2;
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001005d404c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005d4094 | FUN_1005d4094 */

void FUN_1005d4094(void)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x1b0) = *(undefined8 *)(*(long *)(unaff_x22 + 0x170) + 0xc0);
  _swift_task_switch(FUN_1005d40b4,*(undefined8 *)(unaff_x22 + 0x130),0);
  return;
}



/* Address: 0x1005d40b4 | FUN_1005d40b4 */

void FUN_1005d40b4(void)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  long *plVar3;
  ulong uVar4;
  long unaff_x22;
  
  uVar4 = *(ulong *)(unaff_x22 + 0x1b0);
  if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005d4124);
    (*pcVar2)();
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar4;
  if (SUB168(auVar1 * ZEXT816(1000000),8) == 0) {
    plVar3 = (long *)(ulong)*(uint *)(PTR__sleep_100eaed60 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x1b8) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_1005d4128;
    (extension_Swift)::Swift::Task::_sleep(uVar4 * 1000000);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1005d4128);
  (*pcVar2)();
}



/* Address: 0x1005d4128 | FUN_1005d4128 */

void FUN_1005d4128(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x1c0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x1b8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1005d4184;
  }
  else {
    pcVar1 = FUN_1005d5328;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar2 + 0x130),0);
  return;
}



/* Address: 0x1005d4184 | FUN_1005d4184 */

void FUN_1005d4184(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x180);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x158);
  lVar5 = *(long *)(unaff_x22 + 0x160);
  lVar6 = *(long *)(unaff_x22 + 0x130);
  *(undefined1 *)(lVar6 + *(long *)(unaff_x22 + 0x178)) = 0;
  (**(code **)(lVar5 + 0x10))(uVar1,lVar6 + lVar3,uVar2);
  _swift_task_switch(FUN_1005d41d8,uVar4,0);
  return;
}



/* Address: 0x1005d41d8 | FUN_1005d41d8 */

void FUN_1005d41d8(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x130);
  *(undefined8 *)(unaff_x22 + 0x1c8) = *(undefined8 *)(*(long *)(unaff_x22 + 0x170) + 0xb0);
  *(undefined8 *)(unaff_x22 + 0x1d0) = *(undefined8 *)(*(long *)(unaff_x22 + 0x170) + 0xb8);
  _swift_bridgeObjectRetain();
  _swift_task_switch(FUN_1005d4228,uVar1,0);
  return;
}



/* Address: 0x1005d4228 | FUN_1005d4228 */

tuple2_conflict7 FUN_1005d4228(void)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long unaff_x22;
  tuple2_conflict7 tVar4;
  
  uVar3 = *(ulong *)(unaff_x22 + 0x1d0);
  uVar1 = (ulong)((String *)(unaff_x22 + 0x1c8))->str & 0xffffffffffff;
  if ((uVar3 & 0x2000000000000000) != 0) {
    uVar1 = uVar3 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    Foundation::URLRequest::_setValue
              (*(String *)(unaff_x22 + 0x1c8),(URLRequest_conflict)0x6576452d7473614c);
    uVar3 = *(ulong *)(unaff_x22 + 0x1d0);
  }
  _swift_bridgeObjectRelease(uVar3);
  plVar2 = (long *)(ulong)*(uint *)(PTR__bytes_100ea7950 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x1d8) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1005d42d0;
  tVar4 = (extension_Foundation)::__C::NSURLSession::_bytes
                    ((URLRequest_conflict)*(undefined **)(unaff_x22 + 0x150));
  return tVar4;
}



/* Address: 0x1005d42d0 | FUN_1005d42d0 */

void FUN_1005d42d0(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x1e0) = param_1;
  *(long *)(lVar2 + 0x1e8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x1d8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1005d4330;
  }
  else {
    pcVar1 = FUN_1005d55bc;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar2 + 0x130),0);
  return;
}



/* Address: 0x1005d4330 | FUN_1005d4330 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1005d4330(void)

{
  int iVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  CancellationError CVar5;
  long *plVar6;
  Task TVar7;
  undefined8 uVar8;
  code *pcVar9;
  int *piVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long unaff_x22;
  long lVar15;
  long lVar16;
  
  puVar11 = *(undefined8 **)(unaff_x22 + 0x1e0);
  _swift_dynamicCastObjCClass(puVar11,&_OBJC_CLASS___NSHTTPURLResponse);
  if (puVar11 == (undefined8 *)0x0) {
    lVar15 = *(long *)(unaff_x22 + 0x160);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x168);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x150);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x158);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x140);
    lVar16 = *(long *)(unaff_x22 + 0x148);
    FUN_1005d77b4();
    puVar3 = &DAT_100ee7588;
    _swift_allocError(&DAT_100ee7588,puVar11,0,0);
    *puVar11 = 0;
    puVar11[1] = 0;
    *(undefined1 *)(puVar11 + 2) = 0;
    _swift_willThrow();
    (**(code **)(lVar16 + 8))(uVar13,uVar14);
    pcVar9 = *(code **)(lVar15 + 8);
  }
  else {
    puVar3 = *(undefined **)(unaff_x22 + 0x1e8);
    FUN_1005d7cd8(puVar11);
    if (puVar3 == (undefined *)0x0) {
      lVar15 = *(long *)(unaff_x22 + 0x188);
      lVar16 = *(long *)(unaff_x22 + 0x130);
      *(undefined1 *)(lVar16 + *(long *)(unaff_x22 + 0x178)) = 1;
      piVar10 = *(int **)(lVar16 + lVar15);
      *(int **)(unaff_x22 + 0x1f0) = piVar10;
      if (piVar10 == (int *)0x0) {
        plVar6 = (long *)0x160;
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x208) = plVar6;
        *plVar6 = unaff_x22;
        plVar6[1] = (long)FUN_1005d4850;
        FUN_1005d5b34(*(undefined8 *)(unaff_x22 + 0x150),*(undefined8 *)(unaff_x22 + 0x170));
        return;
      }
      uVar13 = *(undefined8 *)(*(long *)(unaff_x22 + 0x130) + *(long *)(unaff_x22 + 0x188) + 8);
      *(undefined8 *)(unaff_x22 + 0x1f8) = uVar13;
      iVar1 = *piVar10;
      plVar6 = (long *)(ulong)(uint)piVar10[1];
      _swift_retain(uVar13);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x200) = plVar6;
      *plVar6 = unaff_x22;
      plVar6[1] = (long)FUN_1005d47a8;
                    /* WARNING: Could not recover jumptable at 0x0001005d4624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)piVar10 + (long)iVar1))();
      return;
    }
    lVar15 = *(long *)(unaff_x22 + 0x160);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x168);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x158);
    (**(code **)(*(long *)(unaff_x22 + 0x148) + 8))
              (*(undefined8 *)(unaff_x22 + 0x150),*(undefined8 *)(unaff_x22 + 0x140));
    pcVar9 = *(code **)(lVar15 + 8);
  }
  (*pcVar9)(uVar12,uVar8);
  *(undefined **)(unaff_x22 + 0x260) = puVar3;
  uVar13 = *(undefined8 *)(unaff_x22 + 0x138);
  *(undefined **)(unaff_x22 + 0x120) = puVar3;
  _swift_errorRetain(puVar3);
  puVar4 = &DAT_100fd4d48;
  FUN_1000f7830(&DAT_100fd4d48,&DAT_100c65950);
  *(undefined **)(unaff_x22 + 0x268) = puVar4;
  CVar5 = Swift::CancellationError::typeMetadataAccessor();
  _swift_dynamicCast(uVar13,unaff_x22 + 0x120,puVar4,CVar5.unknown,6);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x138);
  if ((int)uVar13 == 0) {
    lVar15 = *(long *)(unaff_x22 + 0x178);
    lVar16 = *(long *)(unaff_x22 + 0x130);
    (**(code **)(*(long *)(CVar5.unknown + -8) + 0x38))(uVar14,1,1,CVar5.unknown);
    FUN_1000fb4c4(uVar14,&DAT_100fd4d40,&DAT_100c65948);
    if (*(char *)(lVar16 + lVar15) != '\x02') {
      puVar11 = (undefined8 *)(*(long *)(unaff_x22 + 0x130) + *(long *)(unaff_x22 + 400));
      piVar10 = (int *)*puVar11;
      *(int **)(unaff_x22 + 0x270) = piVar10;
      if (piVar10 != (int *)0x0) {
        uVar13 = puVar11[1];
        *(undefined8 *)(unaff_x22 + 0x278) = uVar13;
        _swift_errorRetain(puVar3);
        FUN_100011128(piVar10,uVar13);
        iVar1 = *piVar10;
        plVar6 = (long *)(ulong)(uint)piVar10[1];
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x280) = plVar6;
        *plVar6 = unaff_x22;
        plVar6[1] = (long)FUN_1005d519c;
                    /* WARNING: Could not recover jumptable at 0x0001005d46ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((long)piVar10 + (long)iVar1))(puVar3);
        return;
      }
      *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x260);
      TVar7.unknown = (undefined *)(unaff_x22 + 0x108);
      _swift_dynamicCast(TVar7.unknown,unaff_x22 + 0x128,*(undefined8 *)(unaff_x22 + 0x268),
                         &DAT_100ee7588,6);
      if (((ulong)TVar7.unknown & 1) == 0) {
        bVar2 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar7);
        if (bVar2) {
          uVar13 = *(undefined8 *)(unaff_x22 + 0x170);
        }
        else {
          uVar13 = *(undefined8 *)(unaff_x22 + 0x170);
          if (*(char *)(*(long *)(unaff_x22 + 0x130) + *(long *)(unaff_x22 + 0x178)) != '\x02') {
            _swift_task_switch(FUN_1005d4094,uVar13,0);
            return;
          }
        }
        _swift_release(uVar13);
      }
      else {
        lVar15 = *(long *)(unaff_x22 + 0x178);
        lVar16 = *(long *)(unaff_x22 + 0x130);
        _swift_release(*(undefined8 *)(unaff_x22 + 0x170));
        FUN_1005d79b8(*(undefined8 *)(unaff_x22 + 0x108),*(undefined8 *)(unaff_x22 + 0x110),
                      *(undefined1 *)(unaff_x22 + 0x118));
        *(undefined1 *)(lVar16 + lVar15) = 2;
      }
      goto LAB_1005d452c;
    }
    uVar13 = *(undefined8 *)(unaff_x22 + 0x170);
  }
  else {
    uVar13 = *(undefined8 *)(unaff_x22 + 0x170);
    (**(code **)(*(long *)(CVar5.unknown + -8) + 0x38))(uVar14,0,1,CVar5.unknown);
    FUN_1000fb4c4(uVar14,&DAT_100fd4d40,&DAT_100c65948);
  }
  _swift_release(uVar13);
  _swift_errorRelease(puVar3);
LAB_1005d452c:
  lVar16 = *(long *)(unaff_x22 + 0x178);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x150);
  lVar15 = *(long *)(unaff_x22 + 0x130);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x138);
  _swift_beginAccess(lVar15 + lVar16,unaff_x22 + 0xc0,1,0);
  *(undefined1 *)(lVar15 + lVar16) = 2;
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar13);
                    /* WARNING: Could not recover jumptable at 0x0001005d4590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005d47a8 | FUN_1005d47a8 */

void FUN_1005d47a8(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x130);
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x200));
  _swift_task_switch(FUN_1005d47f4,uVar1,0);
  return;
}



/* Address: 0x1005d47f4 | FUN_1005d47f4 */

void FUN_1005d47f4(void)

{
  long *plVar1;
  long unaff_x22;
  
  FUN_100004550(*(undefined8 *)(unaff_x22 + 0x1f0),*(undefined8 *)(unaff_x22 + 0x1f8));
  plVar1 = (long *)0x160;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x208) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005d4850;
  FUN_1005d5b34(*(undefined8 *)(unaff_x22 + 0x150),*(undefined8 *)(unaff_x22 + 0x170));
  return;
}



/* Address: 0x1005d4850 | FUN_1005d4850 */

void FUN_1005d4850(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  *(long *)(lVar3 + 0x210) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x208));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar3 + 0x170);
    pcVar1 = FUN_1005d48b0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar3 + 0x130);
    pcVar1 = FUN_1005d5860;
  }
  _swift_task_switch(pcVar1,uVar2,0);
  return;
}



/* Address: 0x1005d48b0 | FUN_1005d48b0 */

void FUN_1005d48b0(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x130);
  FUN_1005d2a7c();
  _swift_task_switch(FUN_1005d48f0,uVar1,0);
  return;
}



/* Address: 0x1005d48f0 | FUN_1005d48f0 */

void FUN_1005d48f0(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x170);
  *(undefined8 *)(unaff_x22 + 0x218) =
       *(undefined8 *)(*(long *)(unaff_x22 + 0x130) + *(long *)(unaff_x22 + 0x198));
  _swift_beginAccess(lVar1 + 0xd8,unaff_x22 + 0xd8,0,0);
  _swift_task_switch(FUN_1005d494c,lVar1,0);
  return;
}



/* Address: 0x1005d494c | FUN_1005d494c */

void FUN_1005d494c(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long unaff_x22;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  plVar5 = (long *)(*(long *)(unaff_x22 + 0x170) + 0xd8);
  lVar4 = *plVar5;
  lVar2 = *(long *)(lVar4 + 0x10);
  if (lVar2 == 0) {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x130);
    pcVar1 = FUN_1005d4cd8;
  }
  else {
    *(ulong *)(unaff_x22 + 0x220) =
         *(ulong *)(unaff_x22 + 0x218) &
         ((long)*(ulong *)(unaff_x22 + 0x218) >> 0x3f ^ 0xffffffffffffffffU);
    *(undefined8 *)(unaff_x22 + 0x228) = 0;
    _swift_beginAccess(plVar5,unaff_x22 + 0xf0,0x21,0);
    uVar7 = *(undefined8 *)(lVar4 + 0x28);
    uVar3 = *(undefined8 *)(lVar4 + 0x20);
    uVar9 = *(undefined8 *)(lVar4 + 0x38);
    uVar8 = *(undefined8 *)(lVar4 + 0x30);
    uVar11 = *(undefined8 *)(lVar4 + 0x48);
    uVar10 = *(undefined8 *)(lVar4 + 0x40);
    uVar12 = *(undefined8 *)(lVar4 + 0x49);
    *(undefined8 *)(unaff_x22 + 0x41) = *(undefined8 *)(lVar4 + 0x51);
    *(undefined8 *)(unaff_x22 + 0x39) = uVar12;
    *(undefined8 *)(unaff_x22 + 0x28) = uVar9;
    *(undefined8 *)(unaff_x22 + 0x20) = uVar8;
    *(undefined8 *)(unaff_x22 + 0x38) = uVar11;
    *(undefined8 *)(unaff_x22 + 0x30) = uVar10;
    *(undefined8 *)(unaff_x22 + 0x18) = uVar7;
    *(undefined8 *)(unaff_x22 + 0x10) = uVar3;
    FUN_1005d099c(unaff_x22 + 0x10,unaff_x22 + 0x50);
    lVar6 = lVar4;
    _swift_isUniquelyReferenced_nonNull_native();
    *plVar5 = lVar4;
    if (((int)lVar6 == 0) || (*(ulong *)(lVar4 + 0x18) >> 1 < lVar2 - 1U)) {
      lVar4 = *(long *)(unaff_x22 + 0x170);
      FUN_1005d06d4();
      *(long *)(lVar4 + 0xd8) = lVar6;
      lVar4 = lVar6;
    }
    lVar2 = *(long *)(unaff_x22 + 0x170);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x130);
    FUN_1005d7e54(lVar4 + 0x20);
    lVar6 = *(long *)(lVar4 + 0x10);
    _memmove((void *)(lVar4 + 0x20),(void *)(lVar4 + 0x60),lVar6 * 0x40 - 0x40);
    *(long *)(lVar4 + 0x10) = lVar6 + -1;
    *(long *)(lVar2 + 0xd8) = lVar4;
    _swift_endAccess(unaff_x22 + 0xf0);
    pcVar1 = FUN_1005d4a68;
  }
  _swift_task_switch(pcVar1,uVar3,0);
  return;
}



/* Address: 0x1005d4a68 | FUN_1005d4a68 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1005d4a68(void)

{
  undefined8 *puVar1;
  bool bVar2;
  Task TVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  long lVar11;
  undefined8 uVar12;
  code *local_50;
  
  if (*(long *)(unaff_x22 + 0x228) != *(long *)(unaff_x22 + 0x220)) {
    puVar1 = (undefined8 *)(*(long *)(unaff_x22 + 0x130) + *(long *)(unaff_x22 + 0x1a0));
    piVar7 = (int *)*puVar1;
    *(int **)(unaff_x22 + 0x230) = piVar7;
    if (piVar7 == (int *)0x0) {
      uVar10 = *(undefined8 *)(unaff_x22 + 0x170);
      FUN_1005d7e54(unaff_x22 + 0x10);
      pcVar4 = FUN_1005d4f24;
LAB_1005d4bf4:
      _swift_task_switch(pcVar4,uVar10,0);
      return;
    }
    uVar10 = puVar1[1];
    *(undefined8 *)(unaff_x22 + 0x238) = uVar10;
    pcVar4 = (code *)(ulong)(uint)piVar7[1];
    local_50 = (code *)((long)piVar7 + (long)*piVar7);
    _swift_retain(uVar10);
    _swift_task_alloc();
    *(code **)(unaff_x22 + 0x240) = pcVar4;
    *(long *)pcVar4 = unaff_x22;
    *(code **)(pcVar4 + 8) = FUN_1005d4eb4;
    lVar6 = unaff_x22 + 0x10;
LAB_1005d4bbc:
                    /* WARNING: Could not recover jumptable at 0x0001005d4bd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*local_50)(pcVar4,lVar6);
    return;
  }
  TVar3.unknown = (undefined *)(unaff_x22 + 0x10);
  FUN_1005d7e54();
  bVar2 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar3);
  if ((bVar2) || (*(char *)(*(long *)(unaff_x22 + 0x130) + *(long *)(unaff_x22 + 0x178)) == '\x02'))
  {
    uVar10 = *(undefined8 *)(unaff_x22 + 0x168);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x158);
    lVar11 = *(long *)(unaff_x22 + 0x160);
    lVar6 = *(long *)(unaff_x22 + 0x148);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x150);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x140);
    _swift_release(*(undefined8 *)(unaff_x22 + 0x170));
    (**(code **)(lVar6 + 8))(uVar9,uVar12);
    (**(code **)(lVar11 + 8))(uVar10,uVar8);
  }
  else {
    puVar1 = (undefined8 *)(*(long *)(unaff_x22 + 0x130) + *(long *)(unaff_x22 + 400));
    piVar7 = (int *)*puVar1;
    *(int **)(unaff_x22 + 0x248) = piVar7;
    if (piVar7 != (int *)0x0) {
      uVar10 = puVar1[1];
      *(undefined8 *)(unaff_x22 + 0x250) = uVar10;
      plVar5 = (long *)(ulong)(uint)piVar7[1];
      local_50 = (code *)((long)piVar7 + (long)*piVar7);
      _swift_retain(uVar10);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 600) = plVar5;
      pcVar4 = FUN_1005d503c;
      *plVar5 = unaff_x22;
      plVar5[1] = (long)FUN_1005d503c;
      lVar6 = 0;
      goto LAB_1005d4bbc;
    }
    lVar6 = *(long *)(unaff_x22 + 0x160);
    TVar3.unknown = *(undefined **)(unaff_x22 + 0x168);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x158);
    (**(code **)(*(long *)(unaff_x22 + 0x148) + 8))
              (*(undefined8 *)(unaff_x22 + 0x150),*(undefined8 *)(unaff_x22 + 0x140));
    (**(code **)(lVar6 + 8))(TVar3.unknown,uVar10);
    bVar2 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar3);
    if (bVar2) {
      _swift_release(*(undefined8 *)(unaff_x22 + 0x170));
    }
    else {
      uVar10 = *(undefined8 *)(unaff_x22 + 0x170);
      if (*(char *)(*(long *)(unaff_x22 + 0x130) + *(long *)(unaff_x22 + 0x178)) != '\x02') {
        pcVar4 = FUN_1005d4094;
        goto LAB_1005d4bf4;
      }
      _swift_release(uVar10);
    }
  }
  lVar11 = *(long *)(unaff_x22 + 0x178);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x150);
  lVar6 = *(long *)(unaff_x22 + 0x130);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x138);
  _swift_beginAccess(lVar6 + lVar11,unaff_x22 + 0xc0,1,0);
  *(undefined1 *)(lVar6 + lVar11) = 2;
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar10);
                    /* WARNING: Could not recover jumptable at 0x0001005d4b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005d4cd8 | FUN_1005d4cd8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1005d4cd8(Task param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  long *plVar5;
  Task TVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  long lVar11;
  undefined8 uVar12;
  
  bVar4 = (extension_Swift)::Swift::Task::_get_isCancelled(param_1);
  if ((bVar4) || (*(char *)(*(long *)(unaff_x22 + 0x130) + *(long *)(unaff_x22 + 0x178)) == '\x02'))
  {
    uVar10 = *(undefined8 *)(unaff_x22 + 0x168);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x158);
    lVar11 = *(long *)(unaff_x22 + 0x160);
    lVar3 = *(long *)(unaff_x22 + 0x148);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x150);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x140);
    _swift_release(*(undefined8 *)(unaff_x22 + 0x170));
    (**(code **)(lVar3 + 8))(uVar9,uVar12);
    (**(code **)(lVar11 + 8))(uVar10,uVar8);
  }
  else {
    puVar1 = (undefined8 *)(*(long *)(unaff_x22 + 0x130) + *(long *)(unaff_x22 + 400));
    piVar7 = (int *)*puVar1;
    *(int **)(unaff_x22 + 0x248) = piVar7;
    if (piVar7 != (int *)0x0) {
      uVar10 = puVar1[1];
      *(undefined8 *)(unaff_x22 + 0x250) = uVar10;
      iVar2 = *piVar7;
      plVar5 = (long *)(ulong)(uint)piVar7[1];
      _swift_retain(uVar10);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 600) = plVar5;
      *plVar5 = unaff_x22;
      plVar5[1] = (long)FUN_1005d503c;
                    /* WARNING: Could not recover jumptable at 0x0001005d4e28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)piVar7 + (long)iVar2))(0);
      return;
    }
    lVar3 = *(long *)(unaff_x22 + 0x160);
    TVar6.unknown = *(undefined **)(unaff_x22 + 0x168);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x158);
    (**(code **)(*(long *)(unaff_x22 + 0x148) + 8))
              (*(undefined8 *)(unaff_x22 + 0x150),*(undefined8 *)(unaff_x22 + 0x140));
    (**(code **)(lVar3 + 8))(TVar6.unknown,uVar10);
    bVar4 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar6);
    if (bVar4) {
      _swift_release(*(undefined8 *)(unaff_x22 + 0x170));
    }
    else {
      if (*(char *)(*(long *)(unaff_x22 + 0x130) + *(long *)(unaff_x22 + 0x178)) != '\x02') {
        _swift_task_switch(FUN_1005d4094,*(undefined8 *)(unaff_x22 + 0x170),0);
        return;
      }
      _swift_release(*(undefined8 *)(unaff_x22 + 0x170));
    }
  }
  lVar11 = *(long *)(unaff_x22 + 0x178);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x150);
  lVar3 = *(long *)(unaff_x22 + 0x130);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x138);
  _swift_beginAccess(lVar3 + lVar11,unaff_x22 + 0xc0,1,0);
  *(undefined1 *)(lVar3 + lVar11) = 2;
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar10);
                    /* WARNING: Could not recover jumptable at 0x0001005d4db4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005d4eb4 | FUN_1005d4eb4 */

void FUN_1005d4eb4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar2 = *(undefined8 *)(lVar3 + 0x238);
  uVar1 = *(undefined8 *)(lVar3 + 0x230);
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x240));
  FUN_100004550(uVar1,uVar2);
  uVar1 = *(undefined8 *)(lVar3 + 0x170);
  FUN_1005d7e54(lVar3 + 0x10);
  _swift_task_switch(FUN_1005d4f24,uVar1,0);
  return;
}



/* Address: 0x1005d4f24 | FUN_1005d4f24 */

void FUN_1005d4f24(void)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong *puVar6;
  long unaff_x22;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar6 = (ulong *)(*(long *)(unaff_x22 + 0x170) + 0xd8);
  uVar5 = *puVar6;
  lVar3 = *(long *)(uVar5 + 0x10);
  if (lVar3 == 0) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x130);
    pcVar2 = FUN_1005d4cd8;
  }
  else {
    *(long *)(unaff_x22 + 0x228) = *(long *)(unaff_x22 + 0x228) + 1;
    _swift_beginAccess(puVar6,unaff_x22 + 0xf0,0x21,0);
    uVar8 = *(undefined8 *)(uVar5 + 0x28);
    uVar4 = *(undefined8 *)(uVar5 + 0x20);
    uVar10 = *(undefined8 *)(uVar5 + 0x38);
    uVar9 = *(undefined8 *)(uVar5 + 0x30);
    uVar12 = *(undefined8 *)(uVar5 + 0x48);
    uVar11 = *(undefined8 *)(uVar5 + 0x40);
    uVar13 = *(undefined8 *)(uVar5 + 0x49);
    *(undefined8 *)(unaff_x22 + 0x41) = *(undefined8 *)(uVar5 + 0x51);
    *(undefined8 *)(unaff_x22 + 0x39) = uVar13;
    *(undefined8 *)(unaff_x22 + 0x28) = uVar10;
    *(undefined8 *)(unaff_x22 + 0x20) = uVar9;
    *(undefined8 *)(unaff_x22 + 0x38) = uVar12;
    *(undefined8 *)(unaff_x22 + 0x30) = uVar11;
    *(undefined8 *)(unaff_x22 + 0x18) = uVar8;
    *(undefined8 *)(unaff_x22 + 0x10) = uVar4;
    FUN_1005d099c(unaff_x22 + 0x10,unaff_x22 + 0x50);
    uVar1 = uVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    *puVar6 = uVar5;
    if (((uVar1 & 1) == 0) || (*(ulong *)(uVar5 + 0x18) >> 1 < lVar3 - 1U)) {
      lVar3 = *(long *)(unaff_x22 + 0x170);
      FUN_1005d06d4();
      *(ulong *)(lVar3 + 0xd8) = uVar1;
      uVar5 = uVar1;
    }
    lVar3 = *(long *)(unaff_x22 + 0x170);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x130);
    FUN_1005d7e54(uVar5 + 0x20);
    lVar7 = *(long *)(uVar5 + 0x10);
    _memmove((void *)(uVar5 + 0x20),(void *)(uVar5 + 0x60),lVar7 * 0x40 - 0x40);
    *(long *)(uVar5 + 0x10) = lVar7 + -1;
    *(ulong *)(lVar3 + 0xd8) = uVar5;
    _swift_endAccess(unaff_x22 + 0xf0);
    pcVar2 = FUN_1005d4a68;
  }
  _swift_task_switch(pcVar2,uVar4,0);
  return;
}



/* Address: 0x1005d503c | FUN_1005d503c */

void FUN_1005d503c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  uVar3 = *(undefined8 *)(lVar1 + 0x250);
  uVar2 = *(undefined8 *)(lVar1 + 0x248);
  uVar4 = *(undefined8 *)(lVar1 + 0x130);
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 600));
  FUN_100004550(uVar2,uVar3);
  _swift_task_switch(FUN_1005d50a4,uVar4,0);
  return;
}



/* Address: 0x1005d50a4 | FUN_1005d50a4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1005d50a4(void)

{
  long lVar1;
  bool bVar2;
  Task TVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  long lVar7;
  
  lVar1 = *(long *)(unaff_x22 + 0x160);
  TVar3.unknown = *(undefined **)(unaff_x22 + 0x168);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x158);
  (**(code **)(*(long *)(unaff_x22 + 0x148) + 8))
            (*(undefined8 *)(unaff_x22 + 0x150),*(undefined8 *)(unaff_x22 + 0x140));
  (**(code **)(lVar1 + 8))(TVar3.unknown,uVar4);
  bVar2 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar3);
  if (bVar2) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x170);
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x170);
    if (*(char *)(*(long *)(unaff_x22 + 0x130) + *(long *)(unaff_x22 + 0x178)) != '\x02') {
      _swift_task_switch(FUN_1005d4094,uVar4,0);
      return;
    }
  }
  _swift_release(uVar4);
  lVar7 = *(long *)(unaff_x22 + 0x178);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x150);
  lVar1 = *(long *)(unaff_x22 + 0x130);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x138);
  _swift_beginAccess(lVar1 + lVar7,unaff_x22 + 0xc0,1,0);
  *(undefined1 *)(lVar1 + lVar7) = 2;
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0001005d5174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005d519c | FUN_1005d519c */

void FUN_1005d519c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *unaff_x22;
  undefined8 uVar5;
  
  lVar1 = *unaff_x22;
  uVar3 = *(undefined8 *)(lVar1 + 0x278);
  uVar2 = *(undefined8 *)(lVar1 + 0x270);
  uVar4 = *(undefined8 *)(lVar1 + 0x260);
  uVar5 = *(undefined8 *)(lVar1 + 0x130);
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x280));
  _swift_errorRelease(uVar4);
  FUN_100004550(uVar2,uVar3);
  _swift_task_switch(FUN_1005d5210,uVar5,0);
  return;
}



/* Address: 0x1005d5210 | FUN_1005d5210 */

void FUN_1005d5210(void)

{
  long lVar1;
  bool bVar2;
  Task TVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x260);
  TVar3.unknown = (undefined *)(unaff_x22 + 0x108);
  _swift_dynamicCast(TVar3.unknown,unaff_x22 + 0x128,*(undefined8 *)(unaff_x22 + 0x268),
                     &DAT_100ee7588,6);
  if (((ulong)TVar3.unknown & 1) == 0) {
    bVar2 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar3);
    if (bVar2) {
      uVar4 = *(undefined8 *)(unaff_x22 + 0x170);
    }
    else {
      uVar4 = *(undefined8 *)(unaff_x22 + 0x170);
      if (*(char *)(*(long *)(unaff_x22 + 0x130) + *(long *)(unaff_x22 + 0x178)) != '\x02') {
        _swift_task_switch(FUN_1005d4094,uVar4,0);
        return;
      }
    }
    _swift_release(uVar4);
  }
  else {
    lVar1 = *(long *)(unaff_x22 + 0x178);
    lVar5 = *(long *)(unaff_x22 + 0x130);
    _swift_release(*(undefined8 *)(unaff_x22 + 0x170));
    FUN_1005d79b8(*(undefined8 *)(unaff_x22 + 0x108),*(undefined8 *)(unaff_x22 + 0x110),
                  *(undefined1 *)(unaff_x22 + 0x118));
    *(undefined1 *)(lVar5 + lVar1) = 2;
  }
  lVar5 = *(long *)(unaff_x22 + 0x178);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x150);
  lVar1 = *(long *)(unaff_x22 + 0x130);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x138);
  _swift_beginAccess(lVar1 + lVar5,unaff_x22 + 0xc0,1,0);
  *(undefined1 *)(lVar1 + lVar5) = 2;
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0001005d5300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005d5328 | FUN_1005d5328 */

void FUN_1005d5328(void)

{
  undefined8 *puVar1;
  int iVar2;
  bool bVar3;
  undefined *puVar4;
  CancellationError CVar5;
  long *plVar6;
  Task TVar7;
  int *piVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long unaff_x22;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0x1c0);
  *(undefined8 *)(unaff_x22 + 0x260) = uVar9;
  uVar10 = *(ulong *)(unaff_x22 + 0x138);
  *(undefined8 *)(unaff_x22 + 0x120) = uVar9;
  _swift_errorRetain(uVar9);
  puVar4 = &DAT_100fd4d48;
  FUN_1000f7830(&DAT_100fd4d48,&DAT_100c65950);
  *(undefined **)(unaff_x22 + 0x268) = puVar4;
  CVar5 = Swift::CancellationError::typeMetadataAccessor();
  _swift_dynamicCast(uVar10,unaff_x22 + 0x120,puVar4,CVar5.unknown,6);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x138);
  if ((uVar10 & 1) == 0) {
    lVar13 = *(long *)(unaff_x22 + 0x178);
    lVar14 = *(long *)(unaff_x22 + 0x130);
    (**(code **)(*(long *)(CVar5.unknown + -8) + 0x38))(uVar11,1,1,CVar5.unknown);
    FUN_1000fb4c4(uVar11,&DAT_100fd4d40,&DAT_100c65948);
    if (*(char *)(lVar14 + lVar13) != '\x02') {
      puVar1 = (undefined8 *)(*(long *)(unaff_x22 + 0x130) + *(long *)(unaff_x22 + 400));
      piVar8 = (int *)*puVar1;
      *(int **)(unaff_x22 + 0x270) = piVar8;
      if (piVar8 != (int *)0x0) {
        uVar11 = puVar1[1];
        *(undefined8 *)(unaff_x22 + 0x278) = uVar11;
        _swift_errorRetain(uVar9);
        FUN_100011128(piVar8,uVar11);
        iVar2 = *piVar8;
        plVar6 = (long *)(ulong)(uint)piVar8[1];
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x280) = plVar6;
        *plVar6 = unaff_x22;
        plVar6[1] = (long)FUN_1005d519c;
                    /* WARNING: Could not recover jumptable at 0x0001005d5518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((long)piVar8 + (long)iVar2))(uVar9);
        return;
      }
      *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x260);
      TVar7.unknown = (undefined *)(unaff_x22 + 0x108);
      _swift_dynamicCast(TVar7.unknown,unaff_x22 + 0x128,*(undefined8 *)(unaff_x22 + 0x268),
                         &DAT_100ee7588,6);
      if (((ulong)TVar7.unknown & 1) == 0) {
        bVar3 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar7);
        if (bVar3) {
          uVar9 = *(undefined8 *)(unaff_x22 + 0x170);
        }
        else {
          uVar9 = *(undefined8 *)(unaff_x22 + 0x170);
          if (*(char *)(*(long *)(unaff_x22 + 0x130) + *(long *)(unaff_x22 + 0x178)) != '\x02') {
            _swift_task_switch(FUN_1005d4094,uVar9,0);
            return;
          }
        }
        _swift_release(uVar9);
      }
      else {
        lVar13 = *(long *)(unaff_x22 + 0x178);
        lVar14 = *(long *)(unaff_x22 + 0x130);
        _swift_release(*(undefined8 *)(unaff_x22 + 0x170));
        FUN_1005d79b8(*(undefined8 *)(unaff_x22 + 0x108),*(undefined8 *)(unaff_x22 + 0x110),
                      *(undefined1 *)(unaff_x22 + 0x118));
        *(undefined1 *)(lVar14 + lVar13) = 2;
      }
      goto LAB_1005d543c;
    }
    uVar12 = *(undefined8 *)(unaff_x22 + 0x170);
  }
  else {
    uVar12 = *(undefined8 *)(unaff_x22 + 0x170);
    (**(code **)(*(long *)(CVar5.unknown + -8) + 0x38))(uVar11,0,1,CVar5.unknown);
    FUN_1000fb4c4(uVar11,&DAT_100fd4d40,&DAT_100c65948);
  }
  _swift_release(uVar12);
  _swift_errorRelease(uVar9);
LAB_1005d543c:
  lVar14 = *(long *)(unaff_x22 + 0x178);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x150);
  lVar13 = *(long *)(unaff_x22 + 0x130);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x138);
  _swift_beginAccess(lVar13 + lVar14,unaff_x22 + 0xc0,1,0);
  *(undefined1 *)(lVar13 + lVar14) = 2;
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar9);
                    /* WARNING: Could not recover jumptable at 0x0001005d5498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005d55bc | FUN_1005d55bc */

void FUN_1005d55bc(void)

{
  undefined8 *puVar1;
  int iVar2;
  bool bVar3;
  undefined *puVar4;
  CancellationError CVar5;
  long *plVar6;
  Task TVar7;
  int *piVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long unaff_x22;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  
  (**(code **)(*(long *)(unaff_x22 + 0x160) + 8))
            (*(undefined8 *)(unaff_x22 + 0x168),*(undefined8 *)(unaff_x22 + 0x158));
  uVar9 = *(undefined8 *)(unaff_x22 + 0x1e8);
  *(undefined8 *)(unaff_x22 + 0x260) = uVar9;
  uVar10 = *(ulong *)(unaff_x22 + 0x138);
  *(undefined8 *)(unaff_x22 + 0x120) = uVar9;
  _swift_errorRetain(uVar9);
  puVar4 = &DAT_100fd4d48;
  FUN_1000f7830(&DAT_100fd4d48,&DAT_100c65950);
  *(undefined **)(unaff_x22 + 0x268) = puVar4;
  CVar5 = Swift::CancellationError::typeMetadataAccessor();
  _swift_dynamicCast(uVar10,unaff_x22 + 0x120,puVar4,CVar5.unknown,6);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x138);
  if ((uVar10 & 1) == 0) {
    lVar13 = *(long *)(unaff_x22 + 0x178);
    lVar14 = *(long *)(unaff_x22 + 0x130);
    (**(code **)(*(long *)(CVar5.unknown + -8) + 0x38))(uVar11,1,1,CVar5.unknown);
    FUN_1000fb4c4(uVar11,&DAT_100fd4d40,&DAT_100c65948);
    if (*(char *)(lVar14 + lVar13) != '\x02') {
      puVar1 = (undefined8 *)(*(long *)(unaff_x22 + 0x130) + *(long *)(unaff_x22 + 400));
      piVar8 = (int *)*puVar1;
      *(int **)(unaff_x22 + 0x270) = piVar8;
      if (piVar8 != (int *)0x0) {
        uVar11 = puVar1[1];
        *(undefined8 *)(unaff_x22 + 0x278) = uVar11;
        _swift_errorRetain(uVar9);
        FUN_100011128(piVar8,uVar11);
        iVar2 = *piVar8;
        plVar6 = (long *)(ulong)(uint)piVar8[1];
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x280) = plVar6;
        *plVar6 = unaff_x22;
        plVar6[1] = (long)FUN_1005d519c;
                    /* WARNING: Could not recover jumptable at 0x0001005d57bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((long)piVar8 + (long)iVar2))(uVar9);
        return;
      }
      *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x260);
      TVar7.unknown = (undefined *)(unaff_x22 + 0x108);
      _swift_dynamicCast(TVar7.unknown,unaff_x22 + 0x128,*(undefined8 *)(unaff_x22 + 0x268),
                         &DAT_100ee7588,6);
      if (((ulong)TVar7.unknown & 1) == 0) {
        bVar3 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar7);
        if (bVar3) {
          uVar9 = *(undefined8 *)(unaff_x22 + 0x170);
        }
        else {
          uVar9 = *(undefined8 *)(unaff_x22 + 0x170);
          if (*(char *)(*(long *)(unaff_x22 + 0x130) + *(long *)(unaff_x22 + 0x178)) != '\x02') {
            _swift_task_switch(FUN_1005d4094,uVar9,0);
            return;
          }
        }
        _swift_release(uVar9);
      }
      else {
        lVar13 = *(long *)(unaff_x22 + 0x178);
        lVar14 = *(long *)(unaff_x22 + 0x130);
        _swift_release(*(undefined8 *)(unaff_x22 + 0x170));
        FUN_1005d79b8(*(undefined8 *)(unaff_x22 + 0x108),*(undefined8 *)(unaff_x22 + 0x110),
                      *(undefined1 *)(unaff_x22 + 0x118));
        *(undefined1 *)(lVar14 + lVar13) = 2;
      }
      goto LAB_1005d56e0;
    }
    uVar12 = *(undefined8 *)(unaff_x22 + 0x170);
  }
  else {
    uVar12 = *(undefined8 *)(unaff_x22 + 0x170);
    (**(code **)(*(long *)(CVar5.unknown + -8) + 0x38))(uVar11,0,1,CVar5.unknown);
    FUN_1000fb4c4(uVar11,&DAT_100fd4d40,&DAT_100c65948);
  }
  _swift_release(uVar12);
  _swift_errorRelease(uVar9);
LAB_1005d56e0:
  lVar14 = *(long *)(unaff_x22 + 0x178);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x150);
  lVar13 = *(long *)(unaff_x22 + 0x130);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x138);
  _swift_beginAccess(lVar13 + lVar14,unaff_x22 + 0xc0,1,0);
  *(undefined1 *)(lVar13 + lVar14) = 2;
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar9);
                    /* WARNING: Could not recover jumptable at 0x0001005d573c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005d5860 | FUN_1005d5860 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1005d5860(void)

{
  undefined8 *puVar1;
  int iVar2;
  bool bVar3;
  undefined *puVar4;
  CancellationError CVar5;
  long *plVar6;
  Task TVar7;
  int *piVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long unaff_x22;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  
  lVar13 = *(long *)(unaff_x22 + 0x160);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x158);
  (**(code **)(*(long *)(unaff_x22 + 0x148) + 8))
            (*(undefined8 *)(unaff_x22 + 0x150),*(undefined8 *)(unaff_x22 + 0x140));
  (**(code **)(lVar13 + 8))(uVar9,uVar11);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x210);
  *(undefined8 *)(unaff_x22 + 0x260) = uVar9;
  uVar10 = *(ulong *)(unaff_x22 + 0x138);
  *(undefined8 *)(unaff_x22 + 0x120) = uVar9;
  _swift_errorRetain(uVar9);
  puVar4 = &DAT_100fd4d48;
  FUN_1000f7830(&DAT_100fd4d48,&DAT_100c65950);
  *(undefined **)(unaff_x22 + 0x268) = puVar4;
  CVar5 = Swift::CancellationError::typeMetadataAccessor();
  _swift_dynamicCast(uVar10,unaff_x22 + 0x120,puVar4,CVar5.unknown,6);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x138);
  if ((uVar10 & 1) == 0) {
    lVar13 = *(long *)(unaff_x22 + 0x178);
    lVar14 = *(long *)(unaff_x22 + 0x130);
    (**(code **)(*(long *)(CVar5.unknown + -8) + 0x38))(uVar11,1,1,CVar5.unknown);
    FUN_1000fb4c4(uVar11,&DAT_100fd4d40,&DAT_100c65948);
    if (*(char *)(lVar14 + lVar13) != '\x02') {
      puVar1 = (undefined8 *)(*(long *)(unaff_x22 + 0x130) + *(long *)(unaff_x22 + 400));
      piVar8 = (int *)*puVar1;
      *(int **)(unaff_x22 + 0x270) = piVar8;
      if (piVar8 != (int *)0x0) {
        uVar11 = puVar1[1];
        *(undefined8 *)(unaff_x22 + 0x278) = uVar11;
        _swift_errorRetain(uVar9);
        FUN_100011128(piVar8,uVar11);
        iVar2 = *piVar8;
        plVar6 = (long *)(ulong)(uint)piVar8[1];
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x280) = plVar6;
        *plVar6 = unaff_x22;
        plVar6[1] = (long)FUN_1005d519c;
                    /* WARNING: Could not recover jumptable at 0x0001005d5a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((long)piVar8 + (long)iVar2))(uVar9);
        return;
      }
      *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x260);
      TVar7.unknown = (undefined *)(unaff_x22 + 0x108);
      _swift_dynamicCast(TVar7.unknown,unaff_x22 + 0x128,*(undefined8 *)(unaff_x22 + 0x268),
                         &DAT_100ee7588,6);
      if (((ulong)TVar7.unknown & 1) == 0) {
        bVar3 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar7);
        if (bVar3) {
          uVar9 = *(undefined8 *)(unaff_x22 + 0x170);
        }
        else {
          uVar9 = *(undefined8 *)(unaff_x22 + 0x170);
          if (*(char *)(*(long *)(unaff_x22 + 0x130) + *(long *)(unaff_x22 + 0x178)) != '\x02') {
            _swift_task_switch(FUN_1005d4094,uVar9,0);
            return;
          }
        }
        _swift_release(uVar9);
      }
      else {
        lVar13 = *(long *)(unaff_x22 + 0x178);
        lVar14 = *(long *)(unaff_x22 + 0x130);
        _swift_release(*(undefined8 *)(unaff_x22 + 0x170));
        FUN_1005d79b8(*(undefined8 *)(unaff_x22 + 0x108),*(undefined8 *)(unaff_x22 + 0x110),
                      *(undefined1 *)(unaff_x22 + 0x118));
        *(undefined1 *)(lVar14 + lVar13) = 2;
      }
      goto LAB_1005d59ac;
    }
    uVar12 = *(undefined8 *)(unaff_x22 + 0x170);
  }
  else {
    uVar12 = *(undefined8 *)(unaff_x22 + 0x170);
    (**(code **)(*(long *)(CVar5.unknown + -8) + 0x38))(uVar11,0,1,CVar5.unknown);
    FUN_1000fb4c4(uVar11,&DAT_100fd4d40,&DAT_100c65948);
  }
  _swift_release(uVar12);
  _swift_errorRelease(uVar9);
LAB_1005d59ac:
  lVar14 = *(long *)(unaff_x22 + 0x178);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x150);
  lVar13 = *(long *)(unaff_x22 + 0x130);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x138);
  _swift_beginAccess(lVar13 + lVar14,unaff_x22 + 0xc0,1,0);
  *(undefined1 *)(lVar13 + lVar14) = 2;
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar9);
                    /* WARNING: Could not recover jumptable at 0x0001005d5a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005d5b34 | FUN_1005d5b34 */

void FUN_1005d5b34(undefined8 param_1,undefined8 param_2)

{
  AsyncBytes AVar1;
  ulong uVar2;
  long lVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xf8) = param_2;
  *(undefined8 *)(unaff_x22 + 0x100) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xf0) = param_1;
  AVar1 = AsyncBytes::_typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x108) = AVar1.unknown;
  lVar3 = *(long *)(AVar1.unknown + -8);
  *(long *)(unaff_x22 + 0x110) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x118) = uVar2;
  _swift_task_switch(FUN_1005d5b98);
  return;
}



/* Address: 0x1005d5b98 | FUN_1005d5b98 */

void FUN_1005d5b98(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x100);
  (**(code **)(*(long *)(unaff_x22 + 0x110) + 0x10))
            (*(undefined8 *)(unaff_x22 + 0x118),*(undefined8 *)(unaff_x22 + 0xf0),
             *(undefined8 *)(unaff_x22 + 0x108));
  FUN_1005d7e80();
  Swift::AsyncSequence::_makeAsyncIterator();
  lVar3 = _TtC11EventSource11EventSource::readyState;
  uVar2 = _TtC11EventSource11EventSource::_onMessageCallback;
  *(long *)(unaff_x22 + 0x120) = _TtC11EventSource11EventSource::readyState;
  *(undefined8 *)(unaff_x22 + 0x128) = uVar2;
  _swift_beginAccess(lVar1 + lVar3,unaff_x22 + 0xa8,0,0);
  _swift_task_switch(FUN_1005d5c2c,0,0);
  return;
}



/* Address: 0x1005d5c2c | FUN_1005d5c2c */

void FUN_1005d5c2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  long *plVar2;
  long unaff_x22;
  _AsyncBytesBuffer _Var3;
  
  puVar1 = *(undefined1 **)(unaff_x22 + 0x98);
  if (puVar1 != *(undefined1 **)(unaff_x22 + 0xa0)) {
    *(undefined1 *)(unaff_x22 + 0x49) = *puVar1;
    *(undefined1 **)(unaff_x22 + 0x98) = puVar1 + 1;
    _swift_task_switch(FUN_1005d5cb0,*(undefined8 *)(unaff_x22 + 0x100),0);
    return;
  }
  plVar2 = (long *)(ulong)*(uint *)(PTR__reloadBufferAndNext_100ea6f10 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x130) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1005d5d34;
  _Var3.endPointer.unknown = (undefined *)param_2;
  _Var3.nextPointer.unknown = (undefined *)plVar2;
  _Var3._16_8_ = param_3;
  Foundation::_AsyncBytesBuffer::_reloadBufferAndNext(_Var3);
  return;
}



/* Address: 0x1005d5cb0 | FUN_1005d5cb0 */

void FUN_1005d5cb0(Task param_1)

{
  bool bVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x4c) = *(undefined1 *)(unaff_x22 + 0x49);
  bVar1 = (extension_Swift)::Swift::Task::_get_isCancelled(param_1);
  if ((!bVar1) && (*(char *)(*(long *)(unaff_x22 + 0x100) + *(long *)(unaff_x22 + 0x120)) != '\x02')
     ) {
    _swift_task_switch(FUN_1005d5e70,*(undefined8 *)(unaff_x22 + 0xf8),0);
    return;
  }
  uVar2 = *(undefined8 *)(unaff_x22 + 0x118);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x22 + 0x90));
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001005d5d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005d5d34 | FUN_1005d5d34 */

void FUN_1005d5d34(undefined2 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x138) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x130));
  if (unaff_x20 == 0) {
    *(undefined2 *)(lVar2 + 0x4a) = param_1;
    pcVar1 = FUN_1005d5da0;
  }
  else {
    pcVar1 = FUN_1005d5e30;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar2 + 0x100),0);
  return;
}



/* Address: 0x1005d5da0 | FUN_1005d5da0 */

void FUN_1005d5da0(Task param_1)

{
  bool bVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  if ((*(ushort *)(unaff_x22 + 0x4a) & 0xff00) != 0x100) {
    *(char *)(unaff_x22 + 0x4c) = (char)*(ushort *)(unaff_x22 + 0x4a);
    bVar1 = (extension_Swift)::Swift::Task::_get_isCancelled(param_1);
    if ((!bVar1) &&
       (*(char *)(*(long *)(unaff_x22 + 0x100) + *(long *)(unaff_x22 + 0x120)) != '\x02')) {
      _swift_task_switch(FUN_1005d5e70,*(undefined8 *)(unaff_x22 + 0xf8),0);
      return;
    }
  }
  uVar2 = *(undefined8 *)(unaff_x22 + 0x118);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x22 + 0x90));
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001005d5e0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005d5e30 | FUN_1005d5e30 */

void FUN_1005d5e30(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x118);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x22 + 0x90));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001005d5e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005d5e70 | FUN_1005d5e70 */

void FUN_1005d5e70(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0xf8);
  FUN_1005d1d08(*(undefined1 *)(unaff_x22 + 0x4c));
  _swift_beginAccess(lVar1 + 0xd8,unaff_x22 + 0xc0,0,0);
  _swift_task_switch(thunk_FUN_1005d6008,lVar1,0);
  return;
}



/* Address: 0x1005d5ec4 | FUN_1005d5ec4 */

void FUN_1005d5ec4(void)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  int *piVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  puVar1 = (undefined8 *)(*(long *)(unaff_x22 + 0x100) + *(long *)(unaff_x22 + 0x128));
  piVar4 = (int *)*puVar1;
  *(int **)(unaff_x22 + 0x140) = piVar4;
  if (piVar4 != (int *)0x0) {
    uVar5 = puVar1[1];
    *(undefined8 *)(unaff_x22 + 0x148) = uVar5;
    iVar2 = *piVar4;
    plVar3 = (long *)(ulong)(uint)piVar4[1];
    _swift_retain(uVar5);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x150) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_1005d5f78;
                    /* WARNING: Could not recover jumptable at 0x0001005d5f48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)piVar4 + (long)iVar2))(plVar3,unaff_x22 + 0x10);
    return;
  }
  FUN_1005d7e54(unaff_x22 + 0x10);
  _swift_task_switch(FUN_1005d6008,*(undefined8 *)(unaff_x22 + 0xf8),0);
  return;
}



/* Address: 0x1005d5f78 | FUN_1005d5f78 */

void FUN_1005d5f78(void)

{
  long lVar1;
  undefined8 uVar2;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  uVar2 = *(undefined8 *)(lVar1 + 0x100);
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x150));
  FUN_1005d7e54(lVar1 + 0x10);
  _swift_task_switch(FUN_1005d5fcc,uVar2,0);
  return;
}



/* Address: 0x1005d5fcc | FUN_1005d5fcc */

void FUN_1005d5fcc(void)

{
  long unaff_x22;
  
  FUN_100004550(*(undefined8 *)(unaff_x22 + 0x140),*(undefined8 *)(unaff_x22 + 0x148));
  _swift_task_switch(FUN_1005d6008,*(undefined8 *)(unaff_x22 + 0xf8),0);
  return;
}



/* Address: 0x1005d6008 | FUN_1005d6008 */

void FUN_1005d6008(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x22;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  plVar5 = (long *)(*(long *)(unaff_x22 + 0xf8) + 0xd8);
  lVar4 = *plVar5;
  lVar3 = *(long *)(lVar4 + 0x10);
  if (lVar3 == 0) {
    pcVar1 = FUN_1005d5c2c;
    uVar2 = 0;
  }
  else {
    _swift_beginAccess(plVar5,unaff_x22 + 0xd8,0x21,0);
    uVar7 = *(undefined8 *)(lVar4 + 0x28);
    uVar2 = *(undefined8 *)(lVar4 + 0x20);
    uVar9 = *(undefined8 *)(lVar4 + 0x38);
    uVar8 = *(undefined8 *)(lVar4 + 0x30);
    uVar11 = *(undefined8 *)(lVar4 + 0x48);
    uVar10 = *(undefined8 *)(lVar4 + 0x40);
    uVar12 = *(undefined8 *)(lVar4 + 0x49);
    *(undefined8 *)(unaff_x22 + 0x41) = *(undefined8 *)(lVar4 + 0x51);
    *(undefined8 *)(unaff_x22 + 0x39) = uVar12;
    *(undefined8 *)(unaff_x22 + 0x28) = uVar9;
    *(undefined8 *)(unaff_x22 + 0x20) = uVar8;
    *(undefined8 *)(unaff_x22 + 0x38) = uVar11;
    *(undefined8 *)(unaff_x22 + 0x30) = uVar10;
    *(undefined8 *)(unaff_x22 + 0x18) = uVar7;
    *(undefined8 *)(unaff_x22 + 0x10) = uVar2;
    FUN_1005d099c(unaff_x22 + 0x10,unaff_x22 + 0x50);
    lVar6 = lVar4;
    _swift_isUniquelyReferenced_nonNull_native();
    *plVar5 = lVar4;
    if (((int)lVar6 == 0) || (*(ulong *)(lVar4 + 0x18) >> 1 < lVar3 - 1U)) {
      lVar4 = *(long *)(unaff_x22 + 0xf8);
      FUN_1005d06d4();
      *(long *)(lVar4 + 0xd8) = lVar6;
      lVar4 = lVar6;
    }
    lVar3 = *(long *)(unaff_x22 + 0xf8);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x100);
    FUN_1005d7e54(lVar4 + 0x20);
    lVar6 = *(long *)(lVar4 + 0x10);
    _memmove((void *)(lVar4 + 0x20),(void *)(lVar4 + 0x60),lVar6 * 0x40 - 0x40);
    *(long *)(lVar4 + 0x10) = lVar6 + -1;
    *(long *)(lVar3 + 0xd8) = lVar4;
    _swift_endAccess(unaff_x22 + 0xd8);
    pcVar1 = FUN_1005d5ec4;
  }
  _swift_task_switch(pcVar1,uVar2,0);
  return;
}



/* Address: 0x1005d6110 | FUN_1005d6110 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1005d6110(void)

{
  long lVar1;
  URLRequest_conflict UVar2;
  long unaff_x20;
  
  lVar1 = _TtC11EventSource11EventSource::request;
  UVar2 = Foundation::URLRequest::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar2.unknown + -8) + 8))(unaff_x20 + lVar1,UVar2.unknown);
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC11EventSource11EventSource::connectionTask));
  FUN_100004550(*(undefined8 *)(unaff_x20 + _TtC11EventSource11EventSource::_onOpenCallback),
                ((undefined8 *)(unaff_x20 + _TtC11EventSource11EventSource::_onOpenCallback))[1]);
  FUN_100004550(*(undefined8 *)(unaff_x20 + _TtC11EventSource11EventSource::_onMessageCallback),
                ((undefined8 *)(unaff_x20 + _TtC11EventSource11EventSource::_onMessageCallback))[1])
  ;
  FUN_100004550(*(undefined8 *)(unaff_x20 + _TtC11EventSource11EventSource::_onErrorCallback),
                ((undefined8 *)(unaff_x20 + _TtC11EventSource11EventSource::_onErrorCallback))[1]);
  _swift_defaultActor_destroy();
  return;
}



/* Address: 0x1005d61b4 | FUN_1005d61b4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1005d61b4(void)

{
  long lVar1;
  URLRequest_conflict UVar2;
  long unaff_x20;
  
  lVar1 = _TtC11EventSource11EventSource::request;
  UVar2 = Foundation::URLRequest::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar2.unknown + -8) + 8))(unaff_x20 + lVar1,UVar2.unknown);
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC11EventSource11EventSource::connectionTask));
  FUN_100004550(*(undefined8 *)(unaff_x20 + _TtC11EventSource11EventSource::_onOpenCallback),
                ((undefined8 *)(unaff_x20 + _TtC11EventSource11EventSource::_onOpenCallback))[1]);
  FUN_100004550(*(undefined8 *)(unaff_x20 + _TtC11EventSource11EventSource::_onMessageCallback),
                ((undefined8 *)(unaff_x20 + _TtC11EventSource11EventSource::_onMessageCallback))[1])
  ;
  FUN_100004550(*(undefined8 *)(unaff_x20 + _TtC11EventSource11EventSource::_onErrorCallback),
                ((undefined8 *)(unaff_x20 + _TtC11EventSource11EventSource::_onErrorCallback))[1]);
  _swift_defaultActor_destroy();
  _swift_defaultActor_deallocate();
  return;
}



/* Address: 0x1005d6258 | FUN_1005d6258 */

Character FUN_1005d6258(char *param_1,void *param_2)

{
  ulong uVar1;
  Character CVar2;
  String SVar3;
  
  uVar1 = (ulong)param_1 & 0xffffffffffff;
  if (((ulong)param_2 & 0x2000000000000000) != 0) {
    uVar1 = (ulong)param_2 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    SVar3.bridgeObject = param_2;
    SVar3.str = param_1;
    CVar2 = Swift::String::get_subscript((Index)0xf,SVar3);
    return CVar2;
  }
  return (Character)ZEXT816(0);
}



/* Address: 0x1005d6298 | FUN_1005d6298 */

undefined8 FUN_1005d6298(undefined8 *param_1,char *param_2,undefined *param_3)

{
  undefined8 *puVar1;
  _StringGuts _Var2;
  _StringGuts _Var3;
  undefined8 uVar4;
  bool bVar5;
  Hasher into;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  String SVar9;
  long local_98 [9];
  
  lVar8 = *unaff_x20;
  Swift::Hasher::init(*(__int64 *)(lVar8 + 0x28));
  into.unknown = (undefined *)local_98;
  SVar9.bridgeObject = param_3;
  SVar9.str = param_2;
  Swift::String::hash(into,SVar9);
  uVar6 = Swift::Hasher::_finalize(into);
  uVar7 = -1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
  uVar6 = uVar6 & (uVar7 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar8 + 0x38 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) != 0) {
    do {
      puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x30) + uVar6 * 0x10);
      _Var2.unknown = (undefined *)*puVar1;
      _Var3.unknown = (undefined *)puVar1[1];
      if ((_Var2.unknown == param_2 && _Var3.unknown == param_3) ||
         (bVar5 = Swift::_stringCompareWithSmolCheck
                            (_Var2,_Var3,(_StringComparisonResult)(__int8)param_2), bVar5)) {
        _swift_bridgeObjectRelease(param_3);
        puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x30) + uVar6 * 0x10);
        uVar4 = puVar1[1];
        *param_1 = *puVar1;
        param_1[1] = uVar4;
        _swift_bridgeObjectRetain();
        return 0;
      }
      uVar6 = uVar6 + 1 & ~uVar7;
    } while ((*(ulong *)(lVar8 + 0x38 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) != 0);
  }
  lVar8 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native(lVar8);
  local_98[0] = *unaff_x20;
  _swift_bridgeObjectRetain(param_3);
  FUN_1005d66e0(param_2,param_3,uVar6,lVar8);
  *unaff_x20 = local_98[0];
  *param_1 = param_2;
  param_1[1] = param_3;
  return 1;
}



/* Address: 0x1005d63dc | FUN_1005d63dc */

/* WARNING: Removing unreachable block (ram,0x0001005d64d0) */

undefined1  [16] FUN_1005d63dc(undefined *param_1,ulong param_2,undefined8 param_3)

{
  undefined *puVar1;
  _StringObject _Var2;
  UnsafeBufferPointer<__int8> UVar3;
  void *pvVar4;
  void *pvVar5;
  String SVar6;
  undefined1 auVar7 [16];
  undefined *local_40;
  ulong uStack_38;
  
  local_40 = param_1;
  uStack_38 = param_2;
  _swift_bridgeObjectRetain(param_2);
  SVar6 = Swift::String::_init
                    (&local_40,PTR___type_metadata_for_Swift_String_100eac208,
                     PTR___protocol_witness_table_for_Swift_String___Swift_LosslessStringConvertible_in_Swift_100eac270
                     ,
                     PTR___protocol_witness_table_for_Swift_String___Swift_Sequence_in_Swift_100eac238
                    );
  pvVar4 = SVar6.bridgeObject;
  puVar1 = local_40;
  if (((ulong)pvVar4 >> 0x3c & 1) != 0) {
    FUN_1005d64dc();
    _swift_bridgeObjectRelease(pvVar4);
    puVar1 = local_40;
    pvVar4 = SVar6.bridgeObject;
  }
  local_40 = SVar6.str;
  pvVar5 = SVar6.bridgeObject;
  if (((ulong)pvVar4 >> 0x3d & 1) == 0) {
    if (((ulong)local_40 >> 0x3c & 1) == 0) {
      pvVar4 = pvVar5;
      _Var2.unknown = local_40;
      local_40 = puVar1;
      UVar3 = Swift::_StringObject::get_sharedUTF8(_Var2);
    }
    else {
      UVar3.unknown = (undefined *)(((ulong)pvVar5 & 0xfffffffffffffff) + 0x20);
      pvVar4 = (void *)((ulong)local_40 & 0xffffffffffff);
      local_40 = puVar1;
    }
    FUN_1000c43a8(UVar3.unknown);
  }
  else {
    pvVar4 = (void *)((ulong)pvVar5 >> 0x38 & 0xf);
    uStack_38 = (ulong)pvVar5 & 0xffffffffffffff;
    UVar3.unknown = (undefined *)&local_40;
    FUN_1000c43a8(UVar3.unknown,pvVar4,param_3);
  }
  _swift_bridgeObjectRelease(pvVar5);
  auVar7._8_8_ = pvVar4;
  auVar7._0_8_ = UVar3.unknown;
  return auVar7;
}



/* Address: 0x1005d64dc | FUN_1005d64dc */

undefined1  [16]
FUN_1005d64dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0xf;
  FUN_1000102ac(0xf,param_1,param_2);
  FUN_1005d652c();
  _swift_bridgeObjectRelease(param_4);
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = uVar1;
  return auVar2;
}



/* Address: 0x1005d652c | FUN_1005d652c */

String FUN_1005d652c(Index param_1,Index param_2,_StringObject param_3,ulong param_4)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  UnsafeBufferPointer<__int8> UVar5;
  Index IVar6;
  ulong uVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  undefined *local_68;
  ulong uStack_60;
  undefined8 local_50;
  
  if ((param_4 >> 0x3c & 1) != 0) {
    IVar6.cmsgPointer.unknown = param_1.cmsgPointer.unknown;
    ppuVar2 = (undefined **)
              Swift::Substring::UTF8View::distance
                        (param_1,param_2,(UTF8View)param_1.cmsgPointer.unknown);
    ppuVar3 = (undefined **)PTR___swiftEmptyArrayStorage_100eae0d8;
    if (ppuVar2 != (undefined **)0x0) {
      ppuVar3 = ppuVar2;
      FUN_1005d6670(ppuVar2,0);
      ppuVar4 = &local_68;
      IVar6.cmsgPointer.unknown = (UnsafeMutablePointer)(UnsafeMutablePointer)ppuVar2;
      FUN_1000742b4(ppuVar4,ppuVar3 + 4,ppuVar2,param_1.cmsgPointer.unknown,
                    param_2.cmsgPointer.unknown,param_3.unknown,param_4);
      _swift_bridgeObjectRetain(param_4);
      _swift_bridgeObjectRelease(local_50);
      if (ppuVar4 != ppuVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1005d662c);
        (*pcVar1)();
      }
    }
    SVar8.str = ppuVar3[2];
    SVar8.bridgeObject = (void *)IVar6.cmsgPointer.unknown;
    SVar8 = Swift::String::_uncheckedFromUTF8((UnsafeBufferPointer<__int8>)(ppuVar3 + 4),SVar8);
    _swift_release(ppuVar3);
    return SVar8;
  }
  uVar7 = (ulong)param_1.cmsgPointer.unknown >> 0x10;
  if ((param_4 >> 0x3d & 1) != 0) {
    uStack_60 = param_4 & 0xffffffffffffff;
    SVar10.str = (char *)(((ulong)param_2.cmsgPointer.unknown >> 0x10) - uVar7);
    SVar10.bridgeObject = param_3.unknown;
    local_68 = param_3.unknown;
    SVar8 = Swift::String::_uncheckedFromUTF8((undefined *)((long)&local_68 + uVar7),SVar10);
    return SVar8;
  }
  if (((ulong)param_3.unknown >> 0x3c & 1) == 0) {
    UVar5 = Swift::_StringObject::get_sharedUTF8(param_3);
    if (UVar5.unknown == (undefined *)0x0) {
      UVar5.unknown = (undefined *)0x0;
      goto LAB_1005d6564;
    }
  }
  else {
    UVar5.unknown = (undefined *)((param_4 & 0xfffffffffffffff) + 0x20);
  }
  UVar5.unknown = UVar5.unknown + uVar7;
LAB_1005d6564:
  SVar9.str = (char *)(((ulong)param_2.cmsgPointer.unknown >> 0x10) - uVar7);
  SVar9.bridgeObject = param_3.unknown;
  SVar8 = Swift::String::_uncheckedFromUTF8(UVar5,SVar9);
  return SVar8;
}



/* Address: 0x1005d6670 | FUN_1005d6670 */

undefined * FUN_1005d6670(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 != 0) {
    puVar1 = &DAT_100fd4880;
    FUN_1000f7830(&DAT_100fd4880,&DAT_100c653e8);
    _swift_allocObject();
    puVar2 = puVar1;
    _malloc_size();
    *(long *)(puVar1 + 0x10) = param_1;
    *(long *)(puVar1 + 0x18) = (long)puVar2 * 2 + -0x40;
  }
  return puVar1;
}



/* Address: 0x1005d66e0 | FUN_1005d66e0 */

void FUN_1005d66e0(char *param_1,undefined *param_2,ulong param_3,ulong param_4)

{
  undefined8 *puVar1;
  _StringGuts _Var2;
  _StringGuts _Var3;
  code *pcVar4;
  bool bVar5;
  Hasher into;
  ulong uVar6;
  long lVar7;
  long *unaff_x20;
  long lVar8;
  String SVar9;
  undefined1 auStack_98 [72];
  
  uVar6 = *(ulong *)(*unaff_x20 + 0x10);
  if (uVar6 < *(ulong *)(*unaff_x20 + 0x18)) {
    if ((param_4 & 1) == 0) {
      FUN_1005d6a6c();
    }
  }
  else {
    if ((param_4 & 1) == 0) {
      FUN_1005d6844(uVar6 + 1);
    }
    else {
      FUN_1005d6bc8();
    }
    lVar8 = *unaff_x20;
    Swift::Hasher::init(*(__int64 *)(lVar8 + 0x28));
    into.unknown = auStack_98;
    SVar9.bridgeObject = param_2;
    SVar9.str = param_1;
    Swift::String::hash(into,SVar9);
    param_3 = Swift::Hasher::_finalize(into);
    uVar6 = -1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    param_3 = param_3 & (uVar6 ^ 0xffffffffffffffff);
    if ((*(ulong *)(lVar8 + 0x38 + (param_3 >> 6) * 8) >> (param_3 & 0x3f) & 1) != 0) {
      do {
        puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x30) + param_3 * 0x10);
        _Var2.unknown = (undefined *)*puVar1;
        _Var3.unknown = (undefined *)puVar1[1];
        if ((_Var2.unknown == param_1 && _Var3.unknown == param_2) ||
           (bVar5 = Swift::_stringCompareWithSmolCheck
                              (_Var2,_Var3,(_StringComparisonResult)(__int8)param_1), bVar5)) {
          Swift::_ELEMENT_TYPE_OF_SET_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1005d6844);
          (*pcVar4)();
        }
        param_3 = param_3 + 1 & ~uVar6;
      } while ((*(ulong *)(lVar8 + 0x38 + (param_3 >> 6) * 8) >> (param_3 & 0x3f) & 1) != 0);
    }
  }
  lVar7 = *unaff_x20;
  lVar8 = lVar7 + (param_3 >> 6) * 8;
  *(ulong *)(lVar8 + 0x38) = *(ulong *)(lVar8 + 0x38) | 1L << (param_3 & 0x3f);
  puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x30) + param_3 * 0x10);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (!SCARRY8(*(long *)(lVar7 + 0x10),1)) {
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1005d6834);
  (*pcVar4)();
}



/* Address: 0x1005d6844 | FUN_1005d6844 */

void FUN_1005d6844(long param_1)

{
  undefined8 *puVar1;
  String *pSVar2;
  __int64 capacity;
  char *pcVar3;
  void *pvVar4;
  String SVar5;
  bool bVar6;
  code *pcVar7;
  _SetStorage *this;
  __RawSetStorage *p_Var8;
  Hasher into;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  __RawSetStorage *original;
  long lVar15;
  ulong uVar16;
  undefined1 auStack_a8 [72];
  
  original = (__RawSetStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_SetStorage *)&DAT_100fd4d78;
  FUN_1000f7830(&DAT_100fd4d78,&DAT_100c659d0);
  p_Var8 = original;
  Swift::_SetStorage::_resize(this,original,capacity,false);
  if (*(long *)(original + 0x10) == 0) {
LAB_1005d6a34:
    _swift_release(original);
    *unaff_x20 = (long)p_Var8;
    return;
  }
  uVar13 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar16 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar16 = uVar16 & *(ulong *)(original + 0x38);
  lVar11 = 0;
  do {
    if (uVar16 == 0) {
      do {
        lVar15 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1005d6a68);
          (*pcVar7)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar15) goto LAB_1005d6a34;
        uVar16 = *(ulong *)(original + 0x38 + lVar15 * 8);
        lVar11 = lVar11 + 1;
      } while (uVar16 == 0);
      uVar10 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
    }
    else {
      uVar10 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
      lVar15 = lVar11;
    }
    pSVar2 = (String *)(*(long *)(original + 0x30) + (LZCOUNT(uVar10) | lVar15 << 6) * 0x10);
    pcVar3 = pSVar2->str;
    pvVar4 = pSVar2->bridgeObject;
    SVar5 = *pSVar2;
    Swift::Hasher::init(*(__int64 *)(p_Var8 + 0x28));
    _swift_bridgeObjectRetain(pvVar4);
    into.unknown = auStack_a8;
    Swift::String::hash(into,SVar5);
    uVar9 = Swift::Hasher::_finalize(into);
    uVar14 = -1L << ((ulong)(byte)p_Var8[0x20] & 0x3f);
    uVar9 = uVar9 & (uVar14 ^ 0xffffffffffffffff);
    uVar12 = uVar9 >> 6;
    uVar10 = -1L << (uVar9 & 0x3f) & (*(ulong *)(p_Var8 + uVar12 * 8 + 0x38) ^ 0xffffffffffffffff);
    if (uVar10 == 0) {
      bVar6 = false;
      uVar10 = 0x3f - uVar14 >> 6;
      do {
        uVar9 = uVar12 + 1;
        if ((uVar9 == uVar10) && (bVar6)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1005d6a6c);
          (*pcVar7)();
        }
        uVar12 = 0;
        if (uVar9 != uVar10) {
          uVar12 = uVar9;
        }
        bVar6 = (bool)(uVar9 == uVar10 | bVar6);
      } while (*(ulong *)(p_Var8 + uVar12 * 8 + 0x38) == 0xffffffffffffffff);
      uVar10 = ~*(ulong *)(p_Var8 + uVar12 * 8 + 0x38);
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar12 << 6;
    }
    else {
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar9 & 0x7fffffffffffffc0;
    }
    uVar12 = uVar10 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var8 + uVar12 + 0x38) = 1L << (uVar10 & 0x3f) | *(ulong *)(p_Var8 + uVar12 + 0x38);
    puVar1 = (undefined8 *)(*(long *)(p_Var8 + 0x30) + uVar10 * 0x10);
    *puVar1 = pcVar3;
    puVar1[1] = pvVar4;
    *(long *)(p_Var8 + 0x10) = *(long *)(p_Var8 + 0x10) + 1;
    lVar11 = lVar15;
  } while( true );
}



/* Address: 0x1005d6a6c | FUN_1005d6a6c */

void FUN_1005d6a6c(void)

{
  __RawSetStorage *p_Var1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  _SetStorage *this;
  __RawSetStorage *p_Var6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *unaff_x20;
  __RawSetStorage *original;
  long lVar11;
  
  this = (_SetStorage *)&DAT_100fd4d78;
  FUN_1000f7830(&DAT_100fd4d78,&DAT_100c659d0);
  original = (__RawSetStorage *)*unaff_x20;
  p_Var6 = original;
  Swift::_SetStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x38;
    uVar7 = (1L << ((ulong)(byte)p_Var6[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var6 != original || p_Var1 + uVar7 * 8 <= p_Var6 + 0x38) {
      _memmove(p_Var6 + 0x38,p_Var1,uVar7 << 3);
    }
    lVar11 = 0;
    *(undefined8 *)(p_Var6 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar8 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar7 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar7 = ~(-1L << (uVar8 & 0x3f));
    }
    uVar7 = uVar7 & *(ulong *)(original + 0x38);
    if (uVar7 == 0) goto LAB_1005d6b48;
    do {
      uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar7 = uVar7 - 1 & uVar7;
      while( true ) {
        lVar10 = (LZCOUNT(uVar9) | lVar11 << 6) * 0x10;
        puVar2 = (undefined8 *)(*(long *)(original + 0x30) + lVar10);
        uVar4 = puVar2[1];
        puVar3 = (undefined8 *)(*(long *)(p_Var6 + 0x30) + lVar10);
        *puVar3 = *puVar2;
        puVar3[1] = uVar4;
        _swift_bridgeObjectRetain();
        if (uVar7 != 0) break;
LAB_1005d6b48:
        do {
          lVar10 = lVar11 + 1;
          if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1005d6bc8);
            (*pcVar5)();
          }
          if ((long)(uVar8 + 0x3f >> 6) <= lVar10) goto LAB_1005d6ba0;
          uVar7 = *(ulong *)(p_Var1 + lVar10 * 8);
          lVar11 = lVar11 + 1;
        } while (uVar7 == 0);
        uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
        uVar7 = uVar7 - 1 & uVar7;
        lVar11 = lVar10;
      }
    } while( true );
  }
LAB_1005d6ba0:
  _swift_release(original);
  *unaff_x20 = (long)p_Var6;
  return;
}



/* Address: 0x1005d6bc8 | FUN_1005d6bc8 */

void FUN_1005d6bc8(long param_1)

{
  undefined8 *puVar1;
  String *pSVar2;
  __int64 capacity;
  char *pcVar3;
  void *pvVar4;
  String SVar5;
  bool bVar6;
  code *pcVar7;
  _SetStorage *this;
  __RawSetStorage *p_Var8;
  Hasher into;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  __RawSetStorage *original;
  __RawSetStorage *p_Var15;
  long lVar16;
  ulong uVar17;
  undefined1 auStack_a8 [72];
  
  original = (__RawSetStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_SetStorage *)&DAT_100fd4d78;
  FUN_1000f7830(&DAT_100fd4d78,&DAT_100c659d0);
  p_Var8 = original;
  Swift::_SetStorage::_resize(this,original,capacity,true);
  if (*(long *)(original + 0x10) == 0) {
LAB_1005d6df8:
    _swift_release(original);
    *unaff_x20 = (long)p_Var8;
    return;
  }
  p_Var15 = original + 0x38;
  uVar13 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar17 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar17 = uVar17 & *(ulong *)p_Var15;
  lVar11 = 0;
  do {
    if (uVar17 == 0) {
      do {
        lVar16 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1005d6e28);
          (*pcVar7)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar16) {
          uVar17 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          if (((byte)original[0x20] & 0x3f) < 6) {
            *(long *)p_Var15 = -1L << (uVar17 & 0x3f);
          }
          else {
            _bzero(p_Var15,uVar17 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_1005d6df8;
        }
        uVar17 = *(ulong *)(p_Var15 + lVar16 * 8);
        lVar11 = lVar11 + 1;
      } while (uVar17 == 0);
      uVar10 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
    }
    else {
      uVar10 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
      lVar16 = lVar11;
    }
    pSVar2 = (String *)(*(long *)(original + 0x30) + (LZCOUNT(uVar10) | lVar16 << 6) * 0x10);
    pcVar3 = pSVar2->str;
    pvVar4 = pSVar2->bridgeObject;
    SVar5 = *pSVar2;
    Swift::Hasher::init(*(__int64 *)(p_Var8 + 0x28));
    into.unknown = auStack_a8;
    Swift::String::hash(into,SVar5);
    uVar9 = Swift::Hasher::_finalize(into);
    uVar14 = -1L << ((ulong)(byte)p_Var8[0x20] & 0x3f);
    uVar9 = uVar9 & (uVar14 ^ 0xffffffffffffffff);
    uVar12 = uVar9 >> 6;
    uVar10 = -1L << (uVar9 & 0x3f) & (*(ulong *)(p_Var8 + uVar12 * 8 + 0x38) ^ 0xffffffffffffffff);
    if (uVar10 == 0) {
      bVar6 = false;
      uVar10 = 0x3f - uVar14 >> 6;
      do {
        uVar9 = uVar12 + 1;
        if ((uVar9 == uVar10) && (bVar6)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1005d6e2c);
          (*pcVar7)();
        }
        uVar12 = 0;
        if (uVar9 != uVar10) {
          uVar12 = uVar9;
        }
        bVar6 = (bool)(uVar9 == uVar10 | bVar6);
      } while (*(ulong *)(p_Var8 + uVar12 * 8 + 0x38) == 0xffffffffffffffff);
      uVar10 = ~*(ulong *)(p_Var8 + uVar12 * 8 + 0x38);
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar12 << 6;
    }
    else {
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar9 & 0x7fffffffffffffc0;
    }
    uVar12 = uVar10 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var8 + uVar12 + 0x38) = 1L << (uVar10 & 0x3f) | *(ulong *)(p_Var8 + uVar12 + 0x38);
    puVar1 = (undefined8 *)(*(long *)(p_Var8 + 0x30) + uVar10 * 0x10);
    *puVar1 = pcVar3;
    puVar1[1] = pvVar4;
    *(long *)(p_Var8 + 0x10) = *(long *)(p_Var8 + 0x10) + 1;
    lVar11 = lVar16;
  } while( true );
}



/* Address: 0x1005d6e2c | FUN_1005d6e2c */

void FUN_1005d6e2c(long param_1)

{
  char *pcVar1;
  ulong uVar2;
  void *pvVar3;
  code *pcVar4;
  char *pcVar5;
  uint uVar6;
  String *unaff_x20;
  String SVar7;
  
  if (param_1 == 0) {
    return;
  }
  if (-1 < param_1) {
    pvVar3 = unaff_x20->bridgeObject;
    pcVar1 = unaff_x20->str;
    if (((ulong)pvVar3 & 0x2000000000000000) != 0) {
      pcVar1 = (char *)((ulong)pvVar3 >> 0x38 & 0xf);
    }
    uVar6 = (uint)((ulong)unaff_x20->str >> 0x3b) & 1;
    if (((ulong)pvVar3 & 0x1000000000000000) == 0) {
      uVar6 = 1;
    }
    uVar2 = 7;
    if (uVar6 == 0) {
      uVar2 = 0xb;
    }
    pcVar5 = (char *)0xf;
    Swift::String::_index((Index)0xf,param_1,(Index)(uVar2 | (long)pcVar1 << 0x10),*unaff_x20);
    if (((uint)param_1 & 0xff) != 1) {
      SVar7.bridgeObject = pcVar5;
      SVar7.str = pcVar5;
      Swift::String::removeSubrange((Range<Index>)0xf,SVar7);
      return;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1005d6ea8);
    (*pcVar4)();
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1005d6ea4);
  (*pcVar4)();
}


