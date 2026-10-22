/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100be8c68 | FUN_100be8c68 */

void FUN_100be8c68(void)

{
  return;
}



/* Address: 0x100be8c7c | thunk_FUN_100be8c80 */

void thunk_FUN_100be8c80(void)

{
  long in_x5;
  
                    /* WARNING: Could not recover jumptable at 0x000100be8c84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x5 + 8))();
  return;
}



/* Address: 0x100be8c80 | FUN_100be8c80 */

void FUN_100be8c80(void)

{
  long in_x5;
  
                    /* WARNING: Could not recover jumptable at 0x000100be8c84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x5 + 8))();
  return;
}



/* Address: 0x100be8c88 | thunk_FUN_100be8c8c */

void thunk_FUN_100be8c8c(undefined8 param_1,undefined8 param_2,undefined8 *param_3,
                        undefined8 param_4,undefined8 param_5,long param_6)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_3[1];
  uStack_20 = *param_3;
  (**(code **)(param_6 + 0x10))(param_1,param_2,&uStack_20);
  return;
}



/* Address: 0x100be8c8c | FUN_100be8c8c */

void FUN_100be8c8c(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 local_20;
  undefined8 uStack_18;
  
  uStack_18 = param_3[1];
  local_20 = *param_3;
  (**(code **)(param_6 + 0x10))(param_1,param_2,&local_20);
  return;
}



/* Address: 0x100be8cb8 | thunk_FUN_100be8cbc */

void thunk_FUN_100be8cbc(undefined8 param_1,undefined8 param_2,undefined8 *param_3,
                        undefined8 param_4,undefined8 param_5,long param_6)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_3[1];
  uStack_20 = *param_3;
  (**(code **)(param_6 + 0x18))(param_1,param_2,&uStack_20);
  return;
}



/* Address: 0x100be8cbc | FUN_100be8cbc */

void FUN_100be8cbc(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 local_20;
  undefined8 uStack_18;
  
  uStack_18 = param_3[1];
  local_20 = *param_3;
  (**(code **)(param_6 + 0x18))(param_1,param_2,&local_20);
  return;
}



/* Address: 0x100be8ce8 | FUN_100be8ce8 */

void FUN_100be8ce8(void)

{
  long in_x5;
  
                    /* WARNING: Could not recover jumptable at 0x000100be8cec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x5 + 0x10))();
  return;
}



/* Address: 0x100be8cf0 | FUN_100be8cf0 */

void FUN_100be8cf0(void)

{
  long in_x5;
  
                    /* WARNING: Could not recover jumptable at 0x000100be8cf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x5 + 0x18))();
  return;
}



/* Address: 0x100be8cf8 | FUN_100be8cf8 */

undefined8 FUN_100be8cf8(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long *unaff_x20;
  
  lVar3 = *unaff_x20;
  if (*(long *)(lVar3 + 0x10) != 0) {
    uVar1 = *(undefined8 *)(lVar3 + 0x20);
    _swift_bridgeObjectRetain(*(undefined8 *)(lVar3 + 0x28));
    FUN_100bb7340(0,1);
    return uVar1;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100be8d50);
  (*pcVar2)();
}



/* Address: 0x100be8d50 | FUN_100be8d50 */

void FUN_100be8d50(void)

{
  long unaff_x20;
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_68 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(lVar2 + 0x10);
  _os_unfair_lock_lock(uVar1);
  _swift_beginAccess(lVar2 + 0x18,auStack_68,0x21,0);
  FUN_100be8dec(lVar2 + 0x18);
  _swift_endAccess(auStack_68);
  _os_unfair_lock_unlock(uVar1);
  return;
}



/* Address: 0x100be8dec | FUN_100be8dec */

void FUN_100be8dec(ulong *param_1,ulong param_2,long param_3,ulong param_4,byte param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = *(ulong *)(param_2 + 0x10);
  if (0 < (long)uVar5) {
    uVar3 = param_1[1];
    lVar4 = *(long *)(uVar3 + 0x10);
    uVar6 = param_2;
    _swift_bridgeObjectRetain(param_4);
    if (lVar4 != 0) {
      _swift_bridgeObjectRetain(uVar3);
      lVar4 = param_3;
      uVar6 = param_4;
      FUN_100071370();
      if ((uVar6 & 1) != 0) {
        uVar5 = *(ulong *)(*(long *)(uVar3 + 0x38) + lVar4 * 8);
        _swift_bridgeObjectRelease(uVar3);
        if ((*(byte *)(param_2 + 0x18) & 1) == 0) {
          FUN_100bae338(uVar5);
          _swift_bridgeObjectRelease(uVar6);
          FUN_100b939d8();
          lVar4 = *(long *)(*param_1 + 0x10);
          FUN_100b93c2c(lVar4);
          uVar5 = *param_1;
          *(long *)(uVar5 + 0x10) = lVar4 + 1;
          lVar4 = uVar5 + lVar4 * 0x18;
          *(long *)(lVar4 + 0x20) = param_3;
          *(ulong *)(lVar4 + 0x28) = param_4;
          *(byte *)(lVar4 + 0x30) = param_5 & 1;
          *param_1 = uVar5;
          FUN_100bb6a24(param_1);
          return;
        }
        uVar6 = *param_1;
        uVar3 = uVar6;
        _swift_isUniquelyReferenced_nonNull_native();
        if ((uVar3 & 1) == 0) {
          FUN_100baff9c();
        }
        if (-1 < (long)uVar5) {
          if (uVar5 < *(ulong *)(uVar6 + 0x10)) {
            lVar4 = uVar6 + uVar5 * 0x18;
            uVar2 = *(undefined8 *)(lVar4 + 0x28);
            *(long *)(lVar4 + 0x20) = param_3;
            *(ulong *)(lVar4 + 0x28) = param_4;
            *(byte *)(lVar4 + 0x30) = param_5 & 1;
            _swift_bridgeObjectRelease(uVar2);
            *param_1 = uVar6;
            return;
          }
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100be900c);
          (*pcVar1)();
        }
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100be9008);
        (*pcVar1)();
      }
      _swift_bridgeObjectRelease(uVar3);
    }
    uVar3 = *(ulong *)(*param_1 + 0x10);
    if (uVar5 <= uVar3) {
      if ((*(byte *)(param_2 + 0x18) & 1) != 0) {
        _swift_bridgeObjectRelease(param_4);
        return;
      }
      FUN_100be8cf8();
      _swift_bridgeObjectRelease(uVar6);
      FUN_100bb6a24(param_1);
      uVar3 = *(ulong *)(*param_1 + 0x10);
    }
    _swift_bridgeObjectRetain(param_4);
    FUN_100bd5c38(uVar3,param_3,param_4);
    _swift_bridgeObjectRelease(param_4);
    FUN_100b939d8();
    lVar4 = *(long *)(*param_1 + 0x10);
    FUN_100b93c2c(lVar4);
    uVar5 = *param_1;
    *(long *)(uVar5 + 0x10) = lVar4 + 1;
    lVar4 = uVar5 + lVar4 * 0x18;
    *(long *)(lVar4 + 0x20) = param_3;
    *(ulong *)(lVar4 + 0x28) = param_4;
    *(byte *)(lVar4 + 0x30) = param_5 & 1;
    *param_1 = uVar5;
  }
  return;
}



/* Address: 0x100be900c | FUN_100be900c */

void FUN_100be900c(void)

{
  FUN_100be9048(100,0);
  return;
}



/* Address: 0x100be9018 | SentryFeatureFlagBufferWrapper::scopeBuffer */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryFeatureFlagBufferWrapper::scopeBuffer(ID param_1,SEL param_2)

{
  _swift_getObjCClassMetadata();
  FUN_100be900c();
  return param_1;
}



/* Address: 0x100be903c | FUN_100be903c */

void FUN_100be903c(void)

{
  FUN_100be9048(10,1);
  return;
}



/* Address: 0x100be9048 | FUN_100be9048 */

void FUN_100be9048(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_100bb718c(0);
  _swift_allocObject();
  FUN_100bb68f4(param_1,param_2,PTR___swiftEmptyArrayStorage_100eae0d8);
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + SentryFeatureFlagBufferWrapper::buffer) = param_1;
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"init");
  FUN_100b69e90();
  return;
}



/* Address: 0x100be90c8 | SentryFeatureFlagBufferWrapper::spanBuffer */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryFeatureFlagBufferWrapper::spanBuffer(ID param_1,SEL param_2)

{
  _swift_getObjCClassMetadata();
  FUN_100be903c();
  return param_1;
}



/* Address: 0x100be90ec | FUN_100be90ec */

void FUN_100be90ec(void)

{
  FUN_100be8d50();
  return;
}



/* Address: 0x100be9114 | SentryFeatureFlagBufferWrapper::addWithName:result: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x1c bytes */

void SentryFeatureFlagBufferWrapper::addWithName_result_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  String SVar1;
  
  SVar1 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  FUN_100be90ec(SVar1.str,SVar1.bridgeObject,param_4);
  _swift_bridgeObjectRelease(SVar1.bridgeObject);
  return;
}



/* Address: 0x100be9174 | FUN_100be9174 */

void FUN_100be9174(void)

{
  FUN_100bb6c24();
  return;
}



/* Address: 0x100be919c | SentryFeatureFlagBufferWrapper::removeAll */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryFeatureFlagBufferWrapper::removeAll(ID param_1,SEL param_2)

{
  FUN_100be9174(param_1);
  return;
}



/* Address: 0x100be91c4 | FUN_100be91c4 */

void FUN_100be91c4(void)

{
  long lVar1;
  long unaff_x20;
  objc_super local_40;
  
  _swift_getObjectType();
  lVar1 = unaff_x20;
  FUN_100bb7110();
  _objc_allocWithZone();
  *(long *)(unaff_x20 + SentryFeatureFlagBufferWrapper::buffer) = lVar1;
  _objc_msgSendSuper2(&local_40,"init");
  FUN_100b69e90();
  return;
}



/* Address: 0x100be9224 | SentryFeatureFlagBufferWrapper::copyBuffer */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryFeatureFlagBufferWrapper::copyBuffer(ID param_1,SEL param_2)

{
  FUN_100be91c4();
  return param_1;
}



/* Address: 0x100be9258 | FUN_100be9258 */

void FUN_100be9258(void)

{
  FUN_100bb6cdc();
  return;
}



/* Address: 0x100be9280 | SentryFeatureFlagBufferWrapper::serializeForContext */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryFeatureFlagBufferWrapper::serializeForContext(ID param_1,SEL param_2)

{
  NSDictionary *pNVar1;
  
  FUN_100be9258();
  if (param_1 == 0) {
    pNVar1 = (NSDictionary *)0x0;
  }
  else {
    pNVar1 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(param_1);
  }
  return (ID)pNVar1;
}



/* Address: 0x100be92f0 | FUN_100be92f0 */

void FUN_100be92f0(void)

{
  FUN_100bb6ef8();
  return;
}



/* Address: 0x100be9318 | SentryFeatureFlagBufferWrapper::serializeForSpanData */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryFeatureFlagBufferWrapper::serializeForSpanData(ID param_1,SEL param_2)

{
  NSDictionary *pNVar1;
  
  FUN_100be92f0(param_1);
  pNVar1 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_1);
  return (ID)pNVar1;
}



/* Address: 0x100be937c | FUN_100be937c */

void FUN_100be937c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("Sentry.SentryFeatureFlagBufferWrapper",0x25,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100be93a8);
  (*pcVar1)();
}



/* Address: 0x100be93a8 | SentryFeatureFlagBufferWrapper::init */

/* Function Stack Size: 0x10 bytes */

ID SentryFeatureFlagBufferWrapper::init(ID param_1,SEL param_2)

{
  ID IVar1;
  
  FUN_100be937c();
  IVar1 = *(ID *)(param_1 + buffer);
  _swift_release();
  return IVar1;
}



/* Address: 0x100be93b4 | SentryFeatureFlagBufferWrapper::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void SentryFeatureFlagBufferWrapper::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_release(*(undefined8 *)(param_1 + buffer));
  return;
}



/* Address: 0x100be93c4 | FUN_100be93c4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100be93c4(void)

{
  return ZEXT816(0x100fa5cf0);
}



/* Address: 0x100be93e4 | FUN_100be93e4 */

void FUN_100be93e4(undefined8 param_1,undefined8 param_2)

{
  _swift_lookUpClassMethod(param_1,param_2,&TargetClassDescriptor_100cd0d04);
  return;
}



/* Address: 0x100be93f0 | FUN_100be93f0 */

void FUN_100be93f0(void)

{
  undefined8 *unaff_x20;
  
  switchD_100bec5a8::caseD_a5(*unaff_x20);
  return;
}



/* Address: 0x100be93f8 | FUN_100be93f8 */

void FUN_100be93f8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100bed29c(param_1,*unaff_x20);
  return;
}



/* Address: 0x100be9400 | FUN_100be9400 */

void FUN_100be9400(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  thunk_FUN_100bed4dc(param_1,*unaff_x20);
  return;
}



/* Address: 0x100be9408 | FUN_100be9408 */

undefined1  [16] FUN_100be9408(long param_1)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long local_18;
  
  if (param_1 == 1) {
    auVar2._8_8_ = &DAT_e600000000000000;
    auVar2._0_8_ = 0x726566667562;
    return auVar2;
  }
  if (param_1 == 0) {
    auVar3._8_8_ = &DAT_e700000000000000;
    auVar3._0_8_ = 0x6e6f6973736573;
    return auVar3;
  }
  local_18 = param_1;
  Swift::__diagnoseUnexpectedEnumCaseValue
            (&DAT_100f3ce08,&local_18,&DAT_100f3ce08,PTR___type_metadata_for_Swift_Int_100eac6f8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100be9470);
  (*pcVar1)();
}



/* Address: 0x100be9470 | thunk_FUN_100be9474 */

void thunk_FUN_100be9474(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_1010487d8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9f560;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9f560,&DAT_100f3ce08);
  DAT_1010487d8 = pTVar1;
  return;
}



/* Address: 0x100be9474 | FUN_100be9474 */

void FUN_100be9474(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_1010487d8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9f560;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9f560,&DAT_100f3ce08);
  DAT_1010487d8 = pTVar1;
  return;
}



/* Address: 0x100be94b4 | FUN_100be94b4 */

void FUN_100be94b4(void)

{
  undefined8 *unaff_x20;
  
  FUN_100be9408(*unaff_x20);
  return;
}



/* Address: 0x100be94bc | FUN_100be94bc */

undefined1  [16] FUN_100be94bc(void)

{
  return ZEXT816(0x100f3ce08);
}



/* Address: 0x100be94cc | FUN_100be94cc */

void FUN_100be94cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  _swift_getObjectType(param_5);
  FUN_100be9c54(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



/* Address: 0x100be953c | FUN_100be953c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100be953c(void)

{
  FUN_100be9efc(0);
  _swift_getObjCClassFromMetadata();
  _NSStringFromClass();
  _DAT_1010584d8 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  return 0;
}



/* Address: 0x100be9598 | _TtC6Sentry13LoadValidator::checkForDuplicatedSDKWithImageName:imageAddress:imageSize:objcRuntimeWrapper:dispatchQueueWrapper: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x38 bytes */

void _TtC6Sentry13LoadValidator::
     checkForDuplicatedSDKWithImageName_imageAddress_imageSize_objcRuntimeWrapper_dispatchQueueWrapper_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,ID param_7)

{
  ID IVar1;
  String SVar2;
  
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  _swift_getObjCClassMetadata(param_1);
  IVar1 = param_6;
  _swift_getObjectType(param_6);
  _swift_unknownObjectRetain(param_6);
  FUN_100be9c54(SVar2.str,SVar2.bridgeObject,param_4,param_5,param_6,param_7,param_1,IVar1);
  _swift_unknownObjectRelease(param_6);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  return;
}



/* Address: 0x100be9678 | FUN_100be9678 */

void FUN_100be9678(code *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  bool bVar2;
  undefined4 local_60;
  undefined1 local_59;
  long local_58;
  
  bVar2 = false;
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_59 = 0;
  if (param_4 < 0x100be9c2d) {
    if (CARRY8(param_4,param_5)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100be976c);
      (*pcVar1)();
    }
    bVar2 = thunk_FUN_100004520 < (code *)(param_4 + param_5);
  }
  local_60 = 0;
  _swift_unknownObjectRetain(param_8);
  _swift_bridgeObjectRetain(param_7);
  FUN_100be9ab0(param_6,param_7,param_8,&local_60,param_3,bVar2,param_6,param_7,&local_59);
  if (param_1 != (code *)0x0) {
    (*param_1)(local_59);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100be9770 | FUN_100be9770 */

void FUN_100be9770(undefined8 param_1,ID param_2,uint *param_3,undefined8 param_4,ulong param_5,
                  char *param_6,void *param_7,undefined1 *param_8)

{
  String SVar1;
  String SVar2;
  void *pvVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  char *pcVar7;
  char *pcVar8;
  _StringGuts _Var10;
  char *pcVar11;
  ulong uVar12;
  undefined8 *puVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String separator;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  char *local_80;
  void *pvStack_78;
  String local_70;
  _StringGuts _Var9;
  
  puVar5 = (undefined8 *)_objc_msgSend(param_2,"copyClassNamesForImage:amount:",param_1,param_3);
  puVar6 = PTR___type_metadata_for_Swift_String_100eac208;
  if (puVar5 != (undefined8 *)0x0) {
    uVar12 = (ulong)*param_3;
    puVar13 = puVar5;
    if (*param_3 != 0) {
      do {
        SVar14 = Swift::String::init((undefined *)*puVar13);
        _Var9.unknown = SVar14.bridgeObject;
        _Var10.unknown = SVar14.str;
        if (DAT_101042e88 != -1) {
          _Var10.unknown = (undefined *)&DAT_101042e88;
          _swift_once(&DAT_101042e88,FUN_100be953c);
        }
        pvVar3 = DAT_1010584e0;
        pcVar11 = DAT_1010584d8;
        SVar2.bridgeObject = DAT_1010584e0;
        SVar2.str = DAT_1010584d8;
        if (SVar14 == SVar2) {
LAB_100be983c:
          if ((param_5 & 1) == 0) goto LAB_100be984c;
          _swift_bridgeObjectRelease(_Var9.unknown);
        }
        else {
          bVar4 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)SVar14.str,_Var9,
                             (_StringComparisonResult)(__int8)DAT_1010584d8);
          _Var10.unknown = (undefined *)(ulong)bVar4;
          if (bVar4) goto LAB_100be983c;
LAB_100be984c:
          local_80 = pcVar11;
          pvStack_78 = pvVar3;
          local_70 = SVar14;
          FUN_100008378();
          bVar4 = (extension_Foundation)::Swift::StringProtocol::_contains
                            (&local_80,puVar6,puVar6,_Var10.unknown,_Var10.unknown);
          _swift_bridgeObjectRelease(_Var9.unknown);
          if (bVar4) {
            puVar6 = &DAT_101044958;
            FUN_100b6730c();
            _swift_allocObject();
            *(undefined8 *)(puVar6 + 0x18) = 2;
            *(undefined8 *)(puVar6 + 0x10) = 1;
            *(undefined8 *)(puVar6 + 0x20) = 0x100000000000003f;
            *(undefined8 *)(puVar6 + 0x28) = 0x8000000100dd2090;
            pcVar7 = &DAT_00000001;
            _Var10.unknown = (undefined *)0x2;
            pcVar11 = &DAT_00000001;
            FUN_100089044();
            pcVar7[0x10] = '\x02';
            pcVar7[0x11] = '\0';
            pcVar7[0x12] = '\0';
            pcVar7[0x13] = '\0';
            pcVar7[0x14] = '\0';
            pcVar7[0x15] = '\0';
            pcVar7[0x16] = '\0';
            pcVar7[0x17] = '\0';
            pcVar7[0x30] = 'J';
            pcVar7[0x31] = '\0';
            pcVar7[0x32] = '\0';
            pcVar7[0x33] = '\0';
            pcVar7[0x34] = '\0';
            pcVar7[0x35] = '\0';
            pcVar7[0x36] = '\0';
            pcVar7[0x37] = '\x10';
            pcVar7[0x38] = -0x30;
            pcVar7[0x39] = ' ';
            pcVar7[0x3a] = -0x23;
            pcVar7[0x3b] = '\0';
            pcVar7[0x3c] = '\x01';
            pcVar7[0x3d] = '\0';
            pcVar7[0x3e] = '\0';
            pcVar7[0x3f] = -0x80;
            local_70.str = (char *)0x0;
            local_70.bridgeObject = (void *)0xe000000000000000;
            Swift::_StringGuts::grow(0x46,_Var10);
            SVar15.bridgeObject = (void *)0x8000000100dd2120;
            SVar15.str = (char *)0xd00000000000002b;
            SVar17.bridgeObject = puVar6;
            SVar17.str = pcVar11;
            Swift::String::append(SVar15,SVar17);
            pvVar3 = DAT_1010584e0;
            SVar14.bridgeObject = DAT_1010584e0;
            SVar14.str = DAT_1010584d8;
            _swift_bridgeObjectRetain(DAT_1010584e0);
            SVar18.bridgeObject = puVar6;
            SVar18.str = pcVar11;
            Swift::String::append(SVar14,SVar18);
            _swift_bridgeObjectRelease(pvVar3);
            SVar16.bridgeObject = (void *)0x8000000100dd2150;
            SVar16.str = (char *)0xd000000000000017;
            SVar19.bridgeObject = puVar6;
            SVar19.str = pcVar11;
            Swift::String::append(SVar16,SVar19);
            SVar1.bridgeObject = param_7;
            SVar1.str = param_6;
            SVar20.bridgeObject = puVar6;
            SVar20.str = pcVar11;
            Swift::String::append(SVar1,SVar20);
            pvVar3 = local_70.bridgeObject;
            pcVar11 = local_70.str;
            uVar12 = *(ulong *)(pcVar7 + 0x10);
            pcVar8 = pcVar7;
            if (*(ulong *)(pcVar7 + 0x18) >> 1 <= uVar12) {
              pcVar8 = (char *)(ulong)(1 < *(ulong *)(pcVar7 + 0x18));
              FUN_100089044(pcVar8,uVar12 + 1,1,pcVar7);
            }
            *(ulong *)(pcVar8 + 0x10) = uVar12 + 1;
            *(char **)(pcVar8 + uVar12 * 0x10 + 0x20) = pcVar11;
            *(void **)(pcVar8 + uVar12 * 0x10 + 0x28) = pvVar3;
            FUN_100b84dac(0);
            local_70.str = pcVar8;
            FUN_100b6730c(&DAT_101044808);
            FUN_100092e94();
            separator.bridgeObject = (void *)0xe100000000000000;
            separator.str = (char *)0xa;
            SVar14 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator);
            _swift_bridgeObjectRelease(pcVar8);
            FUN_100b84df8(4,SVar14.str,SVar14.bridgeObject,0xd000000000000054,0x8000000100dd2170,
                          0x49);
            _swift_bridgeObjectRelease(SVar14.bridgeObject);
            *param_8 = 1;
            break;
          }
        }
        uVar12 = uVar12 - 1;
        puVar13 = puVar13 + 1;
      } while (uVar12 != 0);
    }
    _free(puVar5);
  }
  return;
}



/* Address: 0x100be9ab0 | FUN_100be9ab0 */

void FUN_100be9ab0(undefined8 param_1,_StringObject param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,byte param_7,undefined8 param_8,
                  undefined8 param_9)

{
  UnsafeBufferPointer<__int8> UVar1;
  long unaff_x21;
  undefined *local_50;
  ulong uStack_48;
  
  if (((param_3 >> 0x3c & 1) == 0) &&
     ((param_3 & 0x2000000000000000) != 0 || ((ulong)param_2.unknown & 0x1000000000000000) != 0)) {
    if ((param_3 >> 0x3d & 1) != 0) {
      uStack_48 = param_3 & 0xffffffffffffff;
      local_50 = param_2.unknown;
      FUN_100be9770(param_1,&local_50,param_4,param_5,param_6,param_7 & 1,param_8,param_9);
      if (unaff_x21 != 0) {
        _swift_bridgeObjectRelease(param_9);
        _swift_unknownObjectRelease(param_4);
        return;
      }
      _swift_unknownObjectRelease(param_4);
      goto LAB_100be9bf8;
    }
    if (((ulong)param_2.unknown >> 0x3c & 1) == 0) {
      UVar1 = Swift::_StringObject::get_sharedUTF8(param_2);
    }
    else {
      UVar1.unknown = (undefined *)((param_3 & 0xfffffffffffffff) + 0x20);
    }
    FUN_100acc7f8(param_1,UVar1.unknown);
  }
  else {
    Swift::_StringGuts::__slowWithCString((_StringGuts)0x100be9ed4);
  }
  if (unaff_x21 != 0) {
    _swift_bridgeObjectRelease(param_9);
    _swift_unknownObjectRelease(param_4);
    return;
  }
  _swift_unknownObjectRelease(param_4);
LAB_100be9bf8:
  _swift_bridgeObjectRelease(param_9);
  return;
}



/* Address: 0x100be9c2c | thunk_FUN_100004520 */

void thunk_FUN_100004520(void)

{
  FUN_100004520();
  return;
}



/* Address: 0x100be9c30 | _TtC6Sentry13LoadValidator::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry13LoadValidator::init(ID param_1,SEL param_2)

{
  FUN_1001fddc8();
  return param_1;
}



/* Address: 0x100be9c50 | _TtC6Sentry13LoadValidator::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry13LoadValidator::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}



/* Address: 0x100be9c54 | FUN_100be9c54 */

void FUN_100be9c54(undefined8 param_1,undefined8 param_2,ID param_3,ID param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = _objc_msgSend(param_3,"unsignedLongLongValue");
  IVar2 = _objc_msgSend(param_4,"unsignedLongLongValue");
  FUN_100be9d18(param_1,param_2,IVar1,IVar2,param_5,param_6,0,0,param_7,param_8);
  return;
}



/* Address: 0x100be9cf8 | FUN_100be9cf8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100be9cf8(void)

{
  return ZEXT816(0x100fa5db0);
}



/* Address: 0x100be9d18 | FUN_100be9d18 */

void FUN_100be9d18(char *param_1,void *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,code *param_7,undefined8 param_8,
                  undefined8 param_9)

{
  bool bVar1;
  undefined *puVar2;
  String SVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  
  SVar3.bridgeObject = (void *)0x8000000100dce2b0;
  SVar3.str = (char *)0xd000000000000029;
  SVar7.bridgeObject = param_2;
  SVar7.str = param_1;
  bVar1 = Swift::String::hasPrefix(SVar3,SVar7);
  if ((((!bVar1) &&
       (SVar4.bridgeObject = (void *)0x8000000100dce2e0, SVar4.str = (char *)0xd000000000000031,
       SVar8.bridgeObject = param_2, SVar8.str = param_1,
       bVar1 = Swift::String::hasPrefix(SVar4,SVar8), !bVar1)) &&
      (SVar5.bridgeObject = (void *)0x8000000100d91940, SVar5.str = (char *)0xd000000000000010,
      SVar9.bridgeObject = param_2, SVar9.str = param_1,
      bVar1 = Swift::String::hasPrefix(SVar5,SVar9), !bVar1)) &&
     (SVar6.bridgeObject = (void *)0xe90000000000002f, SVar6.str = (char *)0x62696c2f7273752f,
     SVar10.bridgeObject = param_2, SVar10.str = param_1,
     bVar1 = Swift::String::hasPrefix(SVar6,SVar10), !bVar1)) {
    puVar2 = &DAT_100f3ce90;
    _swift_allocObject(&DAT_100f3ce90,0x50,7);
    *(code **)(puVar2 + 0x10) = param_7;
    *(undefined8 *)(puVar2 + 0x18) = param_8;
    *(undefined8 *)(puVar2 + 0x20) = param_9;
    *(undefined8 *)(puVar2 + 0x28) = param_3;
    *(undefined8 *)(puVar2 + 0x30) = param_4;
    *(char **)(puVar2 + 0x38) = param_1;
    *(void **)(puVar2 + 0x40) = param_2;
    *(undefined8 *)(puVar2 + 0x48) = param_5;
    FUN_100011128(param_7,param_8);
    _swift_bridgeObjectRetain(param_2);
    _swift_unknownObjectRetain(param_5);
    FUN_100bb0798(FUN_100bb01a8,puVar2);
    _swift_release(puVar2);
    return;
  }
  if (param_7 != (code *)0x0) {
    (*param_7)(0);
  }
  return;
}



/* Address: 0x100be9e98 | FUN_100be9e98 */

void FUN_100be9e98(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_deallocObject();
  return;
}



/* Address: 0x100be9ed4 | FUN_100be9ed4 */

void FUN_100be9ed4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100be9770(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined1 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Address: 0x100be9efc | FUN_100be9efc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100be9efc(void)

{
  class_t *pcVar1;
  
  if (DAT_101048808 == (class_t *)0x0) {
    pcVar1 = &objc::class_t::SentryDependencyContainerSwiftHelper;
    _swift_getObjCClassMetadata();
    DAT_101048808 = pcVar1;
  }
  return;
}



/* Address: 0x100be9f38 | FUN_100be9f38 */

void FUN_100be9f38(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 *param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  uVar8 = *param_6;
  uVar5 = *(undefined1 *)(param_6 + 1);
  uVar3 = *param_7;
  uVar4 = param_7[1];
  lVar6 = param_2;
  FUN_100beb3e8();
  *(undefined8 *)(param_1 + *(int *)(lVar6 + 0x1c)) = 0;
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar6 + 0x24));
  puVar1[1] = 0x18;
  *puVar1 = 0;
  lVar7 = lVar6;
  FUN_100b7982c();
  (**(code **)(*(long *)(lVar7 + -8) + 0x20))(param_1,param_2,lVar7);
  *(undefined8 *)(param_1 + *(int *)(lVar6 + 0x18)) = param_3;
  puVar2 = (undefined8 *)(param_1 + *(int *)(lVar6 + 0x14));
  *puVar2 = param_4;
  puVar2[1] = param_5;
  FUN_100bcd840(*puVar1,puVar1[1]);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  *(undefined8 *)(param_1 + *(int *)(lVar6 + 0x28)) = param_8;
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar6 + 0x20));
  *puVar1 = uVar8;
  *(undefined1 *)(puVar1 + 1) = uVar5;
  return;
}



/* Address: 0x100bea018 | FUN_100bea018 */

void FUN_100bea018(undefined8 param_1)

{
  if (DAT_1010488a0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetStructDescriptor_100cd0d88);
  return;
}



/* Address: 0x100bea050 | FUN_100bea050 */

void FUN_100bea050(undefined8 param_1,long param_2)

{
  FUN_100b7982c();
                    /* WARNING: Could not recover jumptable at 0x000100bea080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_2 + -8) + 0x10))(param_1);
  return;
}



/* Address: 0x100bea084 | FUN_100bea084 */

void FUN_100bea084(long param_1)

{
  FUN_100b7982c();
                    /* WARNING: Could not recover jumptable at 0x000100bea0b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -8) + 0x28))();
  return;
}



/* Address: 0x100bea0b8 | FUN_100bea0b8 */

undefined1  [16] FUN_100bea0b8(long param_1)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  
  FUN_100beb3e8();
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + *(int *)(param_1 + 0x14));
  auVar2 = *pauVar1;
  _swift_bridgeObjectRetain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Address: 0x100bea0f0 | FUN_100bea0f0 */

void FUN_100bea0f0(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = param_1;
  FUN_100beb3e8();
  plVar1 = (long *)(unaff_x20 + *(int *)(lVar2 + 0x14));
  _swift_bridgeObjectRelease(plVar1[1]);
  *plVar1 = param_1;
  plVar1[1] = param_2;
  FUN_100b56e60();
  return;
}



/* Address: 0x100bea128 | FUN_100bea128 */

undefined1  [16] FUN_100bea128(long param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  FUN_100beb3dc();
  auVar1._8_8_ = unaff_x20 + *(int *)(param_1 + 0x14);
  auVar1._0_8_ = FUN_100004520;
  return auVar1;
}



/* Address: 0x100bea148 | FUN_100bea148 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100bea148(long param_1)

{
  long unaff_x20;
  
  FUN_100beb3dc();
  return *(undefined8 *)(unaff_x20 + *(int *)(param_1 + 0x18));
}



/* Address: 0x100bea160 | FUN_100bea160 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100bea160(long param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = param_1;
  FUN_100beb3e8();
  *(long *)(unaff_x20 + *(int *)(lVar1 + 0x18)) = param_1;
  FUN_100b56e60(0);
  return;
}


