/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100bb3bc4 | FUN_100bb3bc4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

String FUN_100bb3bc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    ID param_5)

{
  NSString *pNVar1;
  NSString *pNVar2;
  ID IVar3;
  String SVar4;
  
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_4);
  IVar3 = _objc_msgSend(param_5,"pathForResource:ofType:",pNVar1,pNVar2);
  if (IVar3 == 0) {
    SVar4 = (String)ZEXT816(0);
  }
  else {
    SVar4 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  return SVar4;
}



/* Address: 0x100bb3c88 | FUN_100bb3c88 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100bb3c88(void)

{
  return ZEXT816(0x100fa2aa8);
}



/* Address: 0x100bb3ca8 | FUN_100bb3ca8 */

void FUN_100bb3ca8(undefined8 param_1,undefined8 param_2)

{
  _swift_lookUpClassMethod(param_1,param_2,&TargetClassDescriptor_100ccf12c);
  return;
}



/* Address: 0x100bb3cb4 | FUN_100bb3cb4 */

void FUN_100bb3cb4(undefined8 *param_1,undefined8 *param_2,code *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*param_3)();
  *param_1 = uVar1;
  return;
}



/* Address: 0x100bb3ce0 | FUN_100bb3ce0 */

void FUN_100bb3ce0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  
  puVar2 = &DAT_100f3a420;
  _swift_allocObject(&DAT_100f3a420,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  lVar1 = _TtC6Sentry26SentryGlobalEventProcessor::processors;
  _swift_retain(param_2);
  FUN_100b939cc();
  lVar4 = *(long *)(*(long *)(unaff_x20 + lVar1) + 0x10);
  FUN_100b93c20(lVar4);
  lVar3 = *(long *)(unaff_x20 + lVar1);
  *(long *)(lVar3 + 0x10) = lVar4 + 1;
  lVar4 = lVar3 + lVar4 * 0x10;
  *(code **)(lVar4 + 0x20) = FUN_1001103b0;
  *(undefined **)(lVar4 + 0x28) = puVar2;
  *(long *)(unaff_x20 + lVar1) = lVar3;
  return;
}



/* Address: 0x100bb3d7c | FUN_100bb3d7c */

void FUN_100bb3d7c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x100bb3da0 | _TtC6Sentry26SentryGlobalEventProcessor::addEventProcessor: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry26SentryGlobalEventProcessor::addEventProcessor_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  void *pvVar1;
  undefined *puVar2;
  
  pvVar1 = __Block_copy((void *)param_3);
  puVar2 = &DAT_100f3a448;
  _swift_allocObject(&DAT_100f3a448,0x18,7);
  *(void **)(puVar2 + 0x10) = pvVar1;
  FUN_100bb3ce0(FUN_100b93d10,puVar2);
  _swift_release(puVar2);
  return;
}



/* Address: 0x100bb3e14 | FUN_100bb3e14 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_100bb3e14(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long local_50;
  long local_48;
  
  lVar3 = *(long *)(unaff_x20 + _TtC6Sentry26SentryGlobalEventProcessor::processors);
  lVar4 = *(long *)(lVar3 + 0x10);
  if (lVar4 != 0) {
    _swift_bridgeObjectRetain(lVar3);
    puVar5 = (undefined8 *)(lVar3 + 0x28);
    do {
      pcVar1 = (code *)puVar5[-1];
      uVar2 = *puVar5;
      local_48 = param_1;
      _swift_retain(uVar2);
      (*pcVar1)(&local_50,&local_48);
      _swift_release(uVar2);
      param_1 = local_50;
      if (local_50 == 0) break;
      puVar5 = puVar5 + 2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    _swift_bridgeObjectRelease(lVar3);
  }
  return param_1;
}



/* Address: 0x100bb3ecc | _TtC6Sentry26SentryGlobalEventProcessor::reportAll: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry26SentryGlobalEventProcessor::reportAll_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100bb3e14();
  return param_3;
}



/* Address: 0x100bb3f28 | FUN_100bb3f28 */

void FUN_100bb3f28(void)

{
  long unaff_x20;
  
  _swift_getObjectType();
  *(undefined **)(unaff_x20 + _TtC6Sentry26SentryGlobalEventProcessor::processors) =
       PTR___swiftEmptyArrayStorage_100eae0d8;
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"init");
  return;
}



/* Address: 0x100bb3f70 | _TtC6Sentry26SentryGlobalEventProcessor::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry26SentryGlobalEventProcessor::init(ID param_1,SEL param_2)

{
  FUN_100bb3f28();
  return param_1;
}



/* Address: 0x100bb3f90 | _TtC6Sentry26SentryGlobalEventProcessor::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry26SentryGlobalEventProcessor::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + processors));
  return;
}



/* Address: 0x100bb3fa0 | FUN_100bb3fa0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100bb3fa0(void)

{
  return ZEXT816(0x100fa2b78);
}



/* Address: 0x100bb3fc0 | FUN_100bb3fc0 */

void FUN_100bb3fc0(void)

{
  long unaff_x20;
  
  __Block_release(*(void **)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x100bb3fe4 | FUN_100bb3fe4 */

int FUN_100bb3fe4(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    uVar1 = 0xffffffff;
    goto LAB_100bb4074;
  }
  if (param_2 < 0xff) {
LAB_100bb4058:
    uVar1 = 0xffffffff;
    if (1 < *param_1) {
      uVar1 = *param_1 + 0x7ffffffe & 0x7fffffff;
    }
  }
  else {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
joined_r0x000100bb403c:
      if (uVar1 == 0) goto LAB_100bb4058;
    }
    else {
      if (iVar2 != 2) {
        uVar1 = (uint)param_1[1];
        goto joined_r0x000100bb403c;
      }
      uVar1 = (uint)*(ushort *)(param_1 + 1);
      if (*(ushort *)(param_1 + 1) == 0) goto LAB_100bb4058;
    }
    uVar1 = ((uint)*param_1 | uVar1 << 8) - 2;
  }
LAB_100bb4074:
  return uVar1 + 1;
}



/* Address: 0x100bb407c | FUN_100bb407c */

void FUN_100bb407c(char *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 2;
  if (0xfffeff < param_3 + 1) {
    uVar2 = 4;
  }
  if (param_3 + 1 >> 8 < 0xff) {
    uVar2 = 1;
  }
  uVar1 = 0;
  if (0xfe < param_3) {
    uVar1 = uVar2;
  }
  if (param_2 < 0xff) {
                    /* WARNING: Could not recover jumptable at 0x000100bb40c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_100bb40c8 + (ulong)(byte)(&DAT_100c9c505)[uVar1] * 4))();
    return;
  }
  *param_1 = (char)param_2 + '\x01';
                    /* WARNING: Could not recover jumptable at 0x000100bb40f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_100bb40fc + (ulong)(byte)(&DAT_100c9c500)[uVar1] * 4))();
  return;
}



/* Address: 0x100bb4138 | FUN_100bb4138 */

undefined1  [16] FUN_100bb4138(void)

{
  return ZEXT816(0x100f3a4e0);
}



/* Address: 0x100bb4148 | FUN_100bb4148 */

void FUN_100bb4148(undefined1 *param_1,undefined1 *param_2)

{
  FUN_100528c10(*param_1,*param_2);
  return;
}



/* Address: 0x100bb4154 | FUN_100bb4154 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

bool FUN_100bb4154(ID param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  ID IVar3;
  ulong uVar4;
  _StringGuts local_80;
  _StringGuts _Stack_78;
  undefined8 local_70;
  undefined1 *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 local_50;
  undefined1 *puStack_48;
  undefined8 uStack_40;
  long local_38;
  
  uVar4 = 0;
  local_70 = 0x70695f7265666e69;
  puStack_68 = &DAT_e800000000000000;
  puVar2 = &local_70;
  Swift::__bridgeAnythingNonVerbatimToObjectiveC
            (puVar2,PTR___type_metadata_for_Swift_String_100eac208);
  IVar3 = _objc_msgSend(param_1,"__swift_objectForKeyedSubscript:",puVar2);
  _swift_unknownObjectRelease(puVar2);
  if (IVar3 == 0) {
    puStack_68 = (undefined1 *)0x0;
    local_70 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(IVar3);
  }
  puStack_48 = puStack_68;
  local_50 = local_70;
  local_38 = lStack_58;
  uStack_40 = uStack_60;
  if (lStack_58 == 0) {
    FUN_100b6faa8();
    FUN_100013954(&local_50);
  }
  else {
    _swift_dynamicCast(&local_80,&local_50,PTR___type_metadata_for_Any_100eae0c0 + 8,
                       PTR___type_metadata_for_Swift_String_100eac208,6);
    if ((uVar4 & 1) != 0) {
      if (local_80.unknown != (undefined *)0x6f747561 || _Stack_78.unknown != &DAT_e400000000000000)
      {
        bVar1 = Swift::_stringCompareWithSmolCheck(local_80,_Stack_78,(_StringComparisonResult)0x61)
        ;
        FUN_100b6faa8();
        _swift_bridgeObjectRelease(_Stack_78.unknown);
        return bVar1;
      }
      FUN_100b6faa8();
      _swift_bridgeObjectRelease(_Stack_78.unknown);
      return true;
    }
    FUN_100b6faa8();
  }
  return false;
}



/* Address: 0x100bb42a8 | FUN_100bb42a8 */

void FUN_100bb42a8(ulong param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  bool bVar4;
  undefined *puVar5;
  NSDictionary *pNVar6;
  
  puVar5 = &DAT_101046ce0;
  FUN_100b6730c();
  _swift_allocObject();
  *(undefined8 *)(puVar5 + 0x18) = 2;
  *(undefined8 *)(puVar5 + 0x10) = 1;
  puVar3 = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined8 *)(puVar5 + 0x20) = 0x70695f7265666e69;
  *(undefined1 **)(puVar5 + 0x28) = &DAT_e800000000000000;
  bVar4 = (param_1 & 1) == 0;
  uVar1 = 0x6f747561;
  if (bVar4) {
    uVar1 = 0x726576656e;
  }
  *(undefined **)(puVar5 + 0x58) = puVar3;
  puVar2 = &DAT_e400000000000000;
  if (bVar4) {
    puVar2 = &DAT_e500000000000000;
  }
  *(undefined **)(puVar5 + 0x38) = puVar3;
  *(undefined8 *)(puVar5 + 0x40) = uVar1;
  *(undefined1 **)(puVar5 + 0x48) = puVar2;
  pNVar6 = (NSDictionary *)0x0;
  FUN_100bb4358(0);
  (extension_Foundation)::__C::NSDictionary::___allocating_init(pNVar6);
  return;
}



/* Address: 0x100bb4358 | FUN_100bb4358 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100bb4358(void)

{
  undefined *puVar1;
  
  if (DAT_101046ce8 == (undefined *)0x0) {
    puVar1 = &_OBJC_CLASS___NSDictionary;
    _swift_getObjCClassMetadata();
    DAT_101046ce8 = puVar1;
  }
  return;
}



/* Address: 0x100bb4394 | FUN_100bb4394 */

void FUN_100bb4394(char *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 2;
  if (0xfffeff < param_3 + 1) {
    uVar2 = 4;
  }
  if (param_3 + 1 >> 8 < 0xff) {
    uVar2 = 1;
  }
  uVar1 = 0;
  if (0xfe < param_3) {
    uVar1 = uVar2;
  }
  if (param_2 < 0xff) {
                    /* WARNING: Could not recover jumptable at 0x000100bb43dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_100bb43e0 + (ulong)(byte)(&DAT_100c9c565)[uVar1] * 4))();
    return;
  }
  *param_1 = (char)param_2 + '\x01';
                    /* WARNING: Could not recover jumptable at 0x000100bb4410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_100bb4414 + (ulong)(byte)(&UNK_100c9c560)[uVar1] * 4))();
  return;
}



/* Address: 0x100bb4450 | FUN_100bb4450 */

undefined1  [16] FUN_100bb4450(void)

{
  return ZEXT816(0x100f3a568);
}



/* Address: 0x100bb4460 | FUN_100bb4460 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100bb4460(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  ID IVar2;
  long unaff_x20;
  
  _swift_getObjectType();
  puVar1 = (undefined8 *)(unaff_x20 + _TtC6Sentry21SentryAppStateManager::releaseName);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry21SentryAppStateManager::crashWrapper) = param_3;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry21SentryAppStateManager::fileManager) = param_4;
  _swift_unknownObjectRetain(param_3);
  IVar2 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffb0,"init");
  _swift_unknownObjectRelease(param_3);
  return IVar2;
}



/* Address: 0x100bb4520 | FUN_100bb4520 */

void FUN_100bb4520(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("Sentry.SentryAppStateManager",0x1c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100bb454c);
  (*pcVar1)();
}



/* Address: 0x100bb454c | _TtC6Sentry21SentryAppStateManager::init */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry21SentryAppStateManager::init(ID param_1,SEL param_2)

{
  FUN_100bb4520();
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + releaseName + 8));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + crashWrapper));
  return 0;
}



/* Address: 0x100bb4558 | _TtC6Sentry21SentryAppStateManager::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry21SentryAppStateManager::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + releaseName + 8));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + crashWrapper));
  return;
}



/* Address: 0x100bb45a4 | FUN_100bb45a4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100bb45a4(void)

{
  return ZEXT816(0x100fa2c30);
}



/* Address: 0x100bb45c4 | FUN_100bb45c4 */

void FUN_100bb45c4(undefined8 param_1,undefined8 param_2)

{
  _swift_lookUpClassMethod(param_1,param_2,&TargetClassDescriptor_100ccf1cc);
  return;
}



/* Address: 0x100bb45d0 | FUN_100bb45d0 */

void FUN_100bb45d0(undefined8 param_1)

{
  FUN_100bb4954(param_1,FUN_100b8b4b4,&DAT_101046d30);
  return;
}



/* Address: 0x100bb45e4 | FUN_100bb45e4 */

void FUN_100bb45e4(void)

{
  FUN_100bb4690(&DAT_101042df8,&DAT_101046d30,FUN_100bb45d0);
  return;
}



/* Address: 0x100bb4600 | SentryDependencies::random */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

long SentryDependencies::random(void)

{
  long in_x0;
  
  FUN_100bb45e4();
  return in_x0;
}



/* Address: 0x100bb4614 | FUN_100bb4614 */

void FUN_100bb4614(undefined8 param_1)

{
  FUN_100bb4954(param_1,FUN_100bbf100,&DAT_101046d38);
  return;
}



/* Address: 0x100bb4628 | FUN_100bb4628 */

void FUN_100bb4628(void)

{
  FUN_100bb476c(&DAT_101042e00,&DAT_101046d38,FUN_100bb4614);
  return;
}



/* Address: 0x100bb4644 | SentryDependencies::threadWrapper */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryDependencies::threadWrapper(ID param_1,SEL param_2)

{
  FUN_100bb4628();
  return param_1;
}



/* Address: 0x100bb4658 | FUN_100bb4658 */

void FUN_100bb4658(undefined8 param_1)

{
  FUN_100bb47c8(param_1,&PTR__OBJC_CLASS___NSProcessInfo_100f8d798,&PTR_s_processInfo_100f88c88,
                &DAT_101046d40);
  return;
}



/* Address: 0x100bb4674 | FUN_100bb4674 */

void FUN_100bb4674(void)

{
  FUN_100bb4690(&DAT_101042e08,&DAT_101046d40,FUN_100bb4658);
  return;
}



/* Address: 0x100bb4690 | FUN_100bb4690 */

void FUN_100bb4690(void)

{
  undefined1 in_ZR;
  undefined8 *unaff_x19;
  
  FUN_100bb49e8();
  if (!(bool)in_ZR) {
    _swift_once();
  }
  _swift_unknownObjectRetain(*unaff_x19);
  return;
}



/* Address: 0x100bb46bc | SentryDependencies::processInfoWrapper */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryDependencies::processInfoWrapper(ID param_1,SEL param_2)

{
  FUN_100bb4674();
  return param_1;
}



/* Address: 0x100bb46d0 | FUN_100bb46d0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100bb46d0(void)

{
  ID IVar1;
  long lVar2;
  long lVar3;
  
  IVar1 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle,"mainBundle");
  lVar2 = 0;
  FUN_100b7faa0();
  lVar3 = lVar2;
  _swift_allocObject();
  *(ID *)(lVar3 + 0x10) = IVar1;
  DAT_101058488 = &PTR_PTR_100f37728;
  DAT_101058468 = lVar3;
  DAT_101058480 = lVar2;
  FUN_100b56e88();
  return;
}



/* Address: 0x100bb473c | FUN_100bb473c */

void FUN_100bb473c(undefined8 param_1)

{
  FUN_100bb4954(param_1,FUN_100bb06f4,&DAT_101046d48);
  return;
}



/* Address: 0x100bb4750 | FUN_100bb4750 */

void FUN_100bb4750(void)

{
  FUN_100bb476c(&DAT_101042e18,&DAT_101046d48,FUN_100bb473c);
  return;
}



/* Address: 0x100bb476c | FUN_100bb476c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100bb476c(void)

{
  undefined1 in_ZR;
  undefined8 *unaff_x19;
  
  FUN_100bb49e8();
  if (!(bool)in_ZR) {
    _swift_once();
  }
  return *unaff_x19;
}



/* Address: 0x100bb4798 | SentryDependencies::dispatchQueueWrapper */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryDependencies::dispatchQueueWrapper(ID param_1,SEL param_2)

{
  FUN_100bb4750();
  return param_1;
}



/* Address: 0x100bb47ac | FUN_100bb47ac */

void FUN_100bb47ac(undefined8 param_1)

{
  FUN_100bb47c8(param_1,&PTR__OBJC_CLASS___NSNotificationCenter_100f8d638,
                &PTR_s_defaultCenter_100f86f48,&DAT_101046d50);
  return;
}



/* Address: 0x100bb47c8 | FUN_100bb47c8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100bb47c8(undefined8 param_1,ID *param_2,undefined8 *param_3,ID *param_4)

{
  ID IVar1;
  
  IVar1 = _objc_msgSend(*param_2,(SEL)*param_3);
  *param_4 = IVar1;
  FUN_100b56e88();
  return;
}



/* Address: 0x100bb4800 | FUN_100bb4800 */

void FUN_100bb4800(void)

{
  FUN_100bb4690(&DAT_101042e20,&DAT_101046d50,FUN_100bb47ac);
  return;
}



/* Address: 0x100bb481c | SentryDependencies::notificationCenterWrapper */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryDependencies::notificationCenterWrapper(ID param_1,SEL param_2)

{
  FUN_100bb4800();
  return param_1;
}



/* Address: 0x100bb4830 | FUN_100bb4830 */

void FUN_100bb4830(undefined8 param_1)

{
  FUN_100bb4954(param_1,FUN_100bb014c,&DAT_101046d58);
  return;
}



/* Address: 0x100bb4844 | FUN_100bb4844 */

void FUN_100bb4844(void)

{
  FUN_100bb476c(&DAT_101042e28,&DAT_101046d58,FUN_100bb4830);
  return;
}



/* Address: 0x100bb4860 | SentryDependencies::binaryImageCache */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryDependencies::binaryImageCache(ID param_1,SEL param_2)

{
  FUN_100bb4844();
  return param_1;
}



/* Address: 0x100bb4874 | FUN_100bb4874 */

void FUN_100bb4874(undefined8 param_1)

{
  FUN_100bb4954(param_1,FUN_100be31e4,&DAT_101046d60);
  return;
}



/* Address: 0x100bb4888 | FUN_100bb4888 */

void FUN_100bb4888(void)

{
  FUN_100bb476c(&DAT_101042e30,&DAT_101046d60,FUN_100bb4874);
  return;
}



/* Address: 0x100bb48a4 | SentryDependencies::debugImageProvider */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryDependencies::debugImageProvider(ID param_1,SEL param_2)

{
  FUN_100bb4888();
  return param_1;
}



/* Address: 0x100bb48b8 | FUN_100bb48b8 */

void FUN_100bb48b8(undefined8 param_1)

{
  FUN_100bb4954(param_1,FUN_100ba75f8,&DAT_101046d68);
  return;
}



/* Address: 0x100bb48cc | FUN_100bb48cc */

void FUN_100bb48cc(void)

{
  FUN_100bb476c(&DAT_101042e38,&DAT_101046d68,FUN_100bb48b8);
  return;
}



/* Address: 0x100bb48e8 | SentryDependencies::sysctlWrapper */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryDependencies::sysctlWrapper(ID param_1,SEL param_2)

{
  FUN_100bb48cc();
  return param_1;
}



/* Address: 0x100bb48fc | FUN_100bb48fc */

void FUN_100bb48fc(undefined8 param_1)

{
  FUN_100bb4954(param_1,FUN_100be20e0,&DAT_101046d70);
  return;
}



/* Address: 0x100bb4910 | FUN_100bb4910 */

void FUN_100bb4910(void)

{
  FUN_100bb476c(&DAT_101042e40,&DAT_101046d70,FUN_100bb48fc);
  return;
}



/* Address: 0x100bb492c | SentryDependencies::dateProvider */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryDependencies::dateProvider(ID param_1,SEL param_2)

{
  FUN_100bb4910();
  return param_1;
}



/* Address: 0x100bb4940 | FUN_100bb4940 */

void FUN_100bb4940(undefined8 param_1)

{
  FUN_100bb4954(param_1,FUN_100b8c97c,&DAT_101046d78);
  return;
}



/* Address: 0x100bb4954 | FUN_100bb4954 */

void FUN_100bb4954(undefined8 param_1,code *param_2,ID *param_3)

{
  ID IVar1;
  
  IVar1 = 0;
  (*param_2)();
  _objc_allocWithZone();
  IVar1 = _objc_msgSend(IVar1,"init");
  *param_3 = IVar1;
  FUN_100b56e88();
  return;
}



/* Address: 0x100bb4988 | FUN_100bb4988 */

void FUN_100bb4988(void)

{
  FUN_100bb476c(&DAT_101042e48,&DAT_101046d78,FUN_100bb4940);
  return;
}



/* Address: 0x100bb49a4 | SentryDependencies::init */

/* Function Stack Size: 0x10 bytes */

ID SentryDependencies::init(ID param_1,SEL param_2)

{
  FUN_1001fddc8();
  return param_1;
}


