/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b990c0 | _TtC6Sentry14SentryAppState::initWithReleaseName:osVersion:vendorId:isDebugging:systemBootTimestamp: */

/* Function Stack Size: 0x34 bytes */

ID _TtC6Sentry14SentryAppState::
   initWithReleaseName_osVersion_vendorId_isDebugging_systemBootTimestamp_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,bool param_6,ID param_7)

{
  Date DVar1;
  char *pcVar2;
  long lVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  
  DVar1 = Foundation::Date::typeMetadataAccessor();
  lVar3 = *(long *)(*(long *)(DVar1.unknown + -8) + 0x40);
  if (param_3 == 0) {
    SVar4 = (String)ZEXT816(0);
  }
  else {
    SVar4 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  pcVar2 = SVar4.str;
  SVar5 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  if (param_5 == 0) {
    SVar6 = (String)ZEXT816(0);
  }
  else {
    SVar6 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  Foundation::Date::__unconditionallyBridgeFromObjectiveC((Date)param_7);
  FUN_100b98f4c(pcVar2,SVar4.bridgeObject,SVar5.str,SVar5.bridgeObject,SVar6.str,SVar6.bridgeObject,
                param_6,&stack0xffffffffffffffa0 + -(lVar3 + 0xfU & 0xfffffffffffffff0));
  return (ID)pcVar2;
}



/* Address: 0x100b991b0 | FUN_100b991b0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100b991b0(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  Date DVar11;
  ID IVar12;
  ulong uVar13;
  ulong uVar14;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long unaff_x20;
  long unaff_x28;
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  undefined1 auStack_a0 [24];
  undefined1 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 auStack_50 [32];
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long local_18;
  
  FUN_100b6fd78();
  lVar7 = param_1;
  FUN_100b7982c();
  FUN_100b9a184();
  puVar1 = (undefined8 *)(unaff_x20 + _TtC6Sentry14SentryAppState::releaseName);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _TtC6Sentry14SentryAppState::vendorId);
  *puVar2 = 0;
  puVar2[1] = 0;
  if (*(long *)(param_1 + 0x10) == 0) {
LAB_100b992ec:
    FUN_100b80d38(puVar1,auStack_50);
    uVar10 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
LAB_100b99300:
    _swift_bridgeObjectRelease(uVar10);
    if (*(long *)(param_1 + 0x10) == 0) {
LAB_100b9965c:
      FUN_100b6f860();
      goto LAB_100b99678;
    }
    FUN_100b6fa2c();
    uVar13 = 0xea00000000006e6f;
    FUN_100071370(0x69737265765f736f);
    if ((uVar13 & 1) == 0) {
      FUN_100b9411c();
      goto LAB_100b99678;
    }
    FUN_100b9a118();
    FUN_100b6f860();
    puVar9 = &local_68;
    FUN_100b9a138(puVar9,&local_30);
    if (((ulong)puVar9 & 1) == 0) goto LAB_100b9965c;
    puVar9 = (undefined8 *)(unaff_x20 + _TtC6Sentry14SentryAppState::osVersion);
    *puVar9 = local_68;
    puVar9[1] = local_60;
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_100b99700;
    FUN_100b6fa2c();
    uVar13 = 0;
    FUN_100071370(0x695f726f646e6576);
    if ((uVar13 & 1) == 0) {
LAB_100b99708:
      FUN_100b9411c();
LAB_100b9970c:
      bVar6 = false;
      bVar5 = true;
    }
    else {
      FUN_100b9a118();
      FUN_100b6f860();
      puVar9 = &local_68;
      FUN_100b9a138(puVar9,&local_30);
      if (((ulong)puVar9 & 1) == 0) goto LAB_100b99700;
      FUN_100b80d38(puVar2,&local_68);
      uVar10 = puVar2[1];
      *puVar2 = local_68;
      puVar2[1] = local_60;
      _swift_bridgeObjectRelease(uVar10);
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_100b6fa2c();
        uVar13 = 0x67756265645f7369;
        uVar14 = 0xec000000676e6967;
        FUN_100071370();
        if ((uVar14 & 1) != 0) {
          FUN_100b9a118();
          FUN_100b6f860();
          FUN_100b9a1b4();
          FUN_100b6f80c(PTR___type_metadata_for_Any_100eae0c0);
          if (((uVar13 & 1) == 0) || (FUN_100b9a1fc(local_78), extraout_x8_00 == 0))
          goto LAB_100b99700;
          FUN_100b6fa2c();
          uVar13 = 0;
          uVar14 = 0xd000000000000015;
          FUN_100071370();
          if ((uVar13 & 1) == 0) goto LAB_100b99708;
          FUN_100b9a118();
          FUN_100b6f860();
          FUN_100b9a1b4();
          FUN_100b9a138();
          if ((uVar14 & 1) == 0) {
LAB_100b99700:
            FUN_100b6f860();
            goto LAB_100b9970c;
          }
          local_a8 = uStack_70;
          DVar11.unknown = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
          _swift_bridgeObjectRelease(local_a8);
          FUN_100b40378();
          if (DVar11.unknown == (undefined *)0x0) goto LAB_100b99700;
          Foundation::Date::__unconditionallyBridgeFromObjectiveC(DVar11);
          (**(code **)(unaff_x28 + 0x20))(auStack_b0 + -extraout_x8);
          (**(code **)(unaff_x28 + 0x10))
                    (unaff_x20 + _TtC6Sentry14SentryAppState::systemBootTimestamp,
                     auStack_b0 + -extraout_x8,lVar7);
          if (*(long *)(param_1 + 0x10) == 0) {
LAB_100b99730:
            FUN_100b6f860();
          }
          else {
            FUN_100b6fa2c();
            uVar14 = 0x76697463615f7369;
            uVar13 = 0xe900000000000065;
            FUN_100071370();
            if ((uVar13 & 1) != 0) {
              FUN_100b9a118();
              FUN_100b6f860();
              FUN_100b9a1b4();
              FUN_100b6f80c(PTR___type_metadata_for_Any_100eae0c0);
              if (((uVar14 & 1) == 0) || (FUN_100b9a1fc(local_78), extraout_x8_01 == 0))
              goto LAB_100b99730;
              FUN_100b6fa2c();
              uVar13 = 0x6d7265745f736177;
              uVar14 = 0xee00646574616e69;
              FUN_100071370();
              if ((uVar14 & 1) == 0) goto LAB_100b99738;
              FUN_100b9a118();
              FUN_100b6f860();
              FUN_100b9a1b4();
              FUN_100b6f80c(PTR___type_metadata_for_Any_100eae0c0);
              if (((uVar13 & 1) == 0) || (FUN_100b9a1fc(local_78), extraout_x8_02 == 0))
              goto LAB_100b99730;
              FUN_100b6fa2c();
              uVar14 = 0x6f5f726e615f7369;
              uVar13 = 0;
              FUN_100b9a1f0();
              if ((uVar13 & 1) == 0) goto LAB_100b99738;
              FUN_100b9a118();
              FUN_100b6f860();
              FUN_100b9a1b4();
              FUN_100b6f80c(PTR___type_metadata_for_Any_100eae0c0);
              if ((uVar14 & 1) == 0) goto LAB_100b99730;
              FUN_100b9a1fc(local_78);
              if (extraout_x8_03 == 0) {
LAB_100b99750:
                uStack_28 = 0;
                local_30 = 0;
                local_18 = 0;
                uStack_20 = 0;
              }
              else {
                FUN_100b6fa2c();
                uVar14 = 0x725f6b64735f7369;
                uVar13 = 0x696e6e75;
                FUN_100b9a1f0();
                if ((uVar13 & 1) == 0) {
                  FUN_100b6f860();
                  goto LAB_100b99750;
                }
                FUN_100b9a118();
                FUN_100b6f860();
              }
              FUN_100b6f860();
              if (local_18 == 0) {
                FUN_100013954();
LAB_100b9979c:
                *(undefined1 *)(unaff_x20 + _TtC6Sentry14SentryAppState::isSDKRunning) = 1;
              }
              else {
                FUN_100b9a1b4();
                FUN_100b6f80c(PTR___type_metadata_for_Any_100eae0c0);
                if ((uVar14 & 1) == 0) goto LAB_100b9979c;
                *(undefined1 *)(unaff_x20 + _TtC6Sentry14SentryAppState::isSDKRunning) = local_78;
              }
              FUN_100b6f934();
              FUN_100b99ea0();
              IVar12 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff78,"init");
              FUN_100b9a1a4();
              goto LAB_100b996f0;
            }
LAB_100b99738:
            FUN_100b9411c();
          }
          FUN_100b9a1a4();
          bVar5 = true;
          bVar6 = true;
          goto LAB_100b99680;
        }
        FUN_100b6f860();
      }
      FUN_100b6f860();
      bVar6 = false;
      bVar5 = true;
    }
  }
  else {
    FUN_100b6fa2c();
    lVar8 = 0x5f657361656c6572;
    uVar13 = 0;
    FUN_100071370(0x5f657361656c6572);
    if ((uVar13 & 1) == 0) {
      FUN_100b6f860();
      goto LAB_100b992ec;
    }
    FUN_10000cbfc(*(long *)(param_1 + 0x38) + lVar8 * 0x20,auStack_50);
    FUN_100b6f860();
    FUN_100011080(auStack_50,&local_30);
    FUN_10000cbfc(&local_30,auStack_50);
    puVar9 = &local_68;
    FUN_100b9a138(puVar9,auStack_50);
    if (((ulong)puVar9 & 1) != 0) {
      _swift_bridgeObjectRelease(local_60);
      FUN_100011080(&local_30,auStack_50);
      puVar9 = &local_68;
      FUN_100b9a138(puVar9,auStack_50);
      uVar4 = local_60;
      uVar3 = local_68;
      if ((int)puVar9 == 0) {
        uVar3 = 0;
        uVar4 = 0;
      }
      FUN_100b80d38(puVar1,auStack_a0);
      uVar10 = puVar1[1];
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      goto LAB_100b99300;
    }
    FUN_100b6f860();
    FUN_100004594(&local_30);
LAB_100b99678:
    bVar5 = false;
    bVar6 = false;
  }
LAB_100b99680:
  _swift_bridgeObjectRelease(puVar1[1]);
  if (bVar5) {
    FUN_100b9a1c0(unaff_x20 + _TtC6Sentry14SentryAppState::osVersion);
  }
  _swift_bridgeObjectRelease(puVar2[1]);
  if (bVar6) {
    (**(code **)(unaff_x28 + 8))(unaff_x20 + _TtC6Sentry14SentryAppState::systemBootTimestamp,lVar7)
    ;
  }
  FUN_100b6f934();
  FUN_100b99ea0();
  _swift_deallocPartialClassInstance();
  IVar12 = 0;
LAB_100b996f0:
  FUN_100b56ea0(IVar12);
  return;
}



/* Address: 0x100b997d4 | FUN_100b997d4 */

void FUN_100b997d4(undefined8 param_1)

{
  if (DAT_101046060 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100cce3a0);
  return;
}



/* Address: 0x100b9980c | _TtC6Sentry14SentryAppState::initWithJSONObject: */

/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry14SentryAppState::initWithJSONObject_(ID param_1,SEL param_2,ID param_3)

{
  Dictionary<undefined,undefined> DVar1;
  
  DVar1 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  FUN_100b991b0();
  return (ID)DVar1.unknown;
}



/* Address: 0x100b99854 | FUN_100b99854 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100b998a8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100b99854(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined8 uVar4;
  NSDate *pNVar5;
  undefined1 *puVar6;
  long unaff_x20;
  Date unaff_x25;
  long unaff_x28;
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  String local_48;
  undefined *local_30;
  undefined1 auStack_28 [24];
  undefined *local_10;
  
  FUN_100b6fd78();
  FUN_100b7982c();
  FUN_100b9a184();
  puVar2 = PTR___type_metadata_for_Swift_String_100eac208;
  local_10 = (undefined *)
             Swift::Dictionary::_init
                       (param_1,PTR___type_metadata_for_Swift_String_100eac208,
                        PTR___type_metadata_for_Any_100eae0c0 + 8,
                        PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218
                       );
  puVar1 = (undefined8 *)(unaff_x20 + _TtC6Sentry14SentryAppState::releaseName);
  FUN_100b78ca0(puVar1,auStack_28);
  if (puVar1[1] != 0) {
    FUN_100b9a16c(*puVar1);
    FUN_100b9a150();
  }
  puVar1 = (undefined8 *)(unaff_x20 + _TtC6Sentry14SentryAppState::osVersion);
  FUN_100b78ca0(puVar1,auStack_60);
  FUN_100b9a16c(*puVar1,puVar1[1]);
  FUN_100b78fe8(&local_48,0x69737265765f736f,0xea00000000006e6f);
  puVar1 = (undefined8 *)(unaff_x20 + _TtC6Sentry14SentryAppState::vendorId);
  FUN_100b78ca0(puVar1,auStack_78);
  if (puVar1[1] != 0) {
    FUN_100b9a16c(*puVar1);
    FUN_100b78fe8(&local_48,0x695f726f646e6576,0xe900000000000064);
  }
  FUN_100b78ca0(unaff_x20 + _TtC6Sentry14SentryAppState::isDebugging,auStack_90);
  pcVar3 = &_OBJC_CLASS___NSNumber;
  _objc_allocWithZone();
  FUN_100b9a144();
  uVar4 = 0;
  FUN_100b7f4fc();
  local_48.str = pcVar3;
  local_30 = (undefined *)uVar4;
  FUN_100b9a150();
  FUN_100b78ca0(unaff_x20 + _TtC6Sentry14SentryAppState::systemBootTimestamp,auStack_a8);
  (**(code **)(unaff_x28 + 0x10))();
  pNVar5 = Foundation::Date::_bridgeToObjectiveC(unaff_x25);
  (**(code **)(unaff_x28 + 8))();
  FUN_100b40420(pNVar5);
  local_48 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  local_30 = puVar2;
  FUN_100b78fe8(&local_48,0xd000000000000015,0x8000000100dccc80);
  puVar6 = auStack_c0;
  FUN_100b78ca0(unaff_x20 + _TtC6Sentry14SentryAppState::isActive,puVar6);
  _objc_allocWithZone(&_OBJC_CLASS___NSNumber);
  FUN_100b9a144();
  FUN_100b9a1c8();
  FUN_100b78fe8(&local_48,(ulong)puVar6 & 0xffff | 0x76697463615f0000,0xe900000000000065);
  pcVar3 = (char *)(unaff_x20 + _TtC6Sentry14SentryAppState::wasTerminated);
  FUN_100b78ca0(pcVar3,auStack_d8);
  FUN_100b9a178();
  FUN_100b9a144();
  local_48.str = pcVar3;
  local_30 = (undefined *)uVar4;
  FUN_100b9a150();
  FUN_100b78ca0(unaff_x20 + _TtC6Sentry14SentryAppState::isANROngoing,auStack_f0);
  FUN_100b9a178();
  FUN_100b9a144();
  FUN_100b9a1c8();
  FUN_100b9a150();
  FUN_100b78ca0(unaff_x20 + _TtC6Sentry14SentryAppState::isSDKRunning,auStack_108);
  FUN_100b9a178();
  FUN_100b9a144();
  FUN_100b9a1c8();
  FUN_100b9a150();
  FUN_100b56ea0(local_10);
  return;
}



/* Address: 0x100b99bb8 | _TtC6Sentry14SentryAppState::serialize */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry14SentryAppState::serialize(ID param_1,SEL param_2)

{
  NSDictionary *pNVar1;
  
  FUN_100b99854(param_1);
  pNVar1 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_1);
  return (ID)pNVar1;
}



/* Address: 0x100b99c1c | FUN_100b99c1c */

void FUN_100b99c1c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("Sentry.SentryAppState",0x15,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100b99c48);
  (*pcVar1)();
}



/* Address: 0x100b99c48 | _TtC6Sentry14SentryAppState::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry14SentryAppState::init(ID param_1,SEL param_2)

{
  ID IVar1;
  
  FUN_100b99c1c();
  FUN_100b99ea0();
  IVar1 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffd0,"dealloc");
  return IVar1;
}



/* Address: 0x100b99c54 | FUN_100b99c54 */

void FUN_100b99c54(void)

{
  FUN_100b99ea0();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x100b99c84 | _TtC6Sentry14SentryAppState::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry14SentryAppState::_cxx_destruct(ID param_1,SEL param_2)

{
  long lVar1;
  ID IVar2;
  
  IVar2 = param_1;
  FUN_100b9a1c0(param_1 + releaseName);
  FUN_100b9a1c0(param_1 + osVersion);
  FUN_100b9a1c0(param_1 + vendorId);
  lVar1 = systemBootTimestamp;
  FUN_100b7982c();
                    /* WARNING: Could not recover jumptable at 0x000100b99ce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(IVar2 - 8) + 8))(param_1 + lVar1,IVar2);
  return;
}



/* Address: 0x100b99cec | FUN_100b99cec */

void FUN_100b99cec(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x19;
  
  FUN_100b9a128();
  FUN_100b985fc();
  *unaff_x19 = param_1;
  unaff_x19[1] = param_2;
  FUN_100b56e88();
  return;
}



/* Address: 0x100b99d08 | FUN_100b99d08 */

void FUN_100b99d08(void)

{
  FUN_100b988b0();
  return;
}



/* Address: 0x100b99d24 | FUN_100b99d24 */

void FUN_100b99d24(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x19;
  
  FUN_100b9a128();
  FUN_100b98658();
  *unaff_x19 = param_1;
  unaff_x19[1] = param_2;
  FUN_100b56e88();
  return;
}



/* Address: 0x100b99d40 | thunk_FUN_100b98728 */

void thunk_FUN_100b98728(void)

{
  FUN_100b98728();
  return;
}



/* Address: 0x100b99d44 | FUN_100b99d44 */

void FUN_100b99d44(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x19;
  
  FUN_100b9a128();
  FUN_100b987b4();
  *unaff_x19 = param_1;
  unaff_x19[1] = param_2;
  FUN_100b56e88();
  return;
}



/* Address: 0x100b99d60 | FUN_100b99d60 */

void FUN_100b99d60(void)

{
  FUN_100b988b0();
  return;
}



/* Address: 0x100b99d7c | FUN_100b99d7c */

void FUN_100b99d7c(void)

{
  FUN_100b9a128();
  FUN_100b98914();
  FUN_100b9a1d8();
  FUN_100b56e88();
  return;
}



/* Address: 0x100b99d98 | FUN_100b99d98 */

void FUN_100b99d98(void)

{
  FUN_100b9a15c();
  FUN_100b98968();
  FUN_100b56e88();
  return;
}



/* Address: 0x100b99db0 | FUN_100b99db0 */

void FUN_100b99db0(void)

{
  FUN_100b98a0c();
  FUN_100b56e88();
  return;
}



/* Address: 0x100b99dcc | thunk_FUN_100b98b34 */

void thunk_FUN_100b98b34(void)

{
  FUN_100b98b34();
  return;
}



/* Address: 0x100b99dd0 | FUN_100b99dd0 */

void FUN_100b99dd0(void)

{
  FUN_100b9a128();
  FUN_100b98bc8();
  FUN_100b9a1d8();
  FUN_100b56e88();
  return;
}



/* Address: 0x100b99dec | FUN_100b99dec */

void FUN_100b99dec(void)

{
  FUN_100b9a15c();
  FUN_100b98c1c();
  FUN_100b56e88();
  return;
}



/* Address: 0x100b99e04 | FUN_100b99e04 */

void FUN_100b99e04(void)

{
  FUN_100b9a128();
  FUN_100b98c98();
  FUN_100b9a1d8();
  FUN_100b56e88();
  return;
}



/* Address: 0x100b99e20 | FUN_100b99e20 */

void FUN_100b99e20(void)

{
  FUN_100b9a15c();
  FUN_100b98cec();
  FUN_100b56e88();
  return;
}



/* Address: 0x100b99e38 | FUN_100b99e38 */

void FUN_100b99e38(void)

{
  FUN_100b9a128();
  FUN_100b98d68();
  FUN_100b9a1d8();
  FUN_100b56e88();
  return;
}



/* Address: 0x100b99e54 | FUN_100b99e54 */

void FUN_100b99e54(void)

{
  FUN_100b9a15c();
  FUN_100b98dbc();
  FUN_100b56e88();
  return;
}



/* Address: 0x100b99e6c | FUN_100b99e6c */

void FUN_100b99e6c(void)

{
  FUN_100b9a128();
  FUN_100b98e38();
  FUN_100b9a1d8();
  FUN_100b56e88();
  return;
}



/* Address: 0x100b99e88 | FUN_100b99e88 */

void FUN_100b99e88(void)

{
  FUN_100b9a15c();
  FUN_100b98e8c();
  FUN_100b56e88();
  return;
}



/* Address: 0x100b99ea0 | FUN_100b99ea0 */

void FUN_100b99ea0(void)

{
  FUN_100b997d4(0);
  return;
}



/* Address: 0x100b99ea8 | FUN_100b99ea8 */

undefined1  [16] FUN_100b99ea8(Date param_1,ulong param_2)

{
  Date DVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined *local_68;
  undefined *puStack_60;
  undefined *local_58;
  undefined *puStack_50;
  long local_48;
  undefined *puStack_40;
  undefined *local_38;
  undefined *puStack_30;
  undefined *local_28;
  
  local_68 = &DAT_100c9b580;
  puStack_60 = &DAT_100c9b598;
  local_58 = &DAT_100c9b580;
  puStack_50 = &DAT_100c9b5b0;
  DVar1 = Foundation::Date::typeMetadataAccessor();
  if (param_2 < 0x40) {
    local_48 = *(long *)(DVar1.unknown + -8) + 0x40;
    puStack_40 = &DAT_100c9b5b0;
    local_38 = &DAT_100c9b5b0;
    puStack_30 = &DAT_100c9b5b0;
    local_28 = &DAT_100c9b5b0;
    uVar2 = 0x100;
    _swift_updateClassMetadata2(param_1.unknown,0x100,9,&local_68,param_1.unknown + 0x50);
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



/* Address: 0x100b99f3c | FUN_100b99f3c */

void FUN_100b99f3c(undefined8 param_1,undefined8 param_2)

{
  _swift_lookUpClassMethod(param_1,param_2,&TargetClassDescriptor_100cce3a0);
  return;
}



/* Address: 0x100b99f48 | FUN_100b99f48 */

void FUN_100b99f48(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b99f60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x98))();
  return;
}



/* Address: 0x100b99f64 | FUN_100b99f64 */

void FUN_100b99f64(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b99f7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 200))();
  return;
}



/* Address: 0x100b99f80 | FUN_100b99f80 */

void FUN_100b99f80(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b99f98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0xf8))();
  return;
}



/* Address: 0x100b99f9c | FUN_100b99f9c */

void FUN_100b99f9c(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b99fb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x110))();
  return;
}



/* Address: 0x100b99fb8 | FUN_100b99fb8 */

void FUN_100b99fb8(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b99fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x118))();
  return;
}



/* Address: 0x100b99fd4 | FUN_100b99fd4 */

void FUN_100b99fd4(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b99fec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x120))();
  return;
}



/* Address: 0x100b99ff0 | FUN_100b99ff0 */

void FUN_100b99ff0(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b9a008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x128))();
  return;
}



/* Address: 0x100b9a00c | FUN_100b9a00c */

void FUN_100b9a00c(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b9a024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x130))();
  return;
}



/* Address: 0x100b9a028 | FUN_100b9a028 */

void FUN_100b9a028(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b9a040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x138))();
  return;
}



/* Address: 0x100b9a044 | FUN_100b9a044 */

void FUN_100b9a044(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b9a05c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x140))();
  return;
}



/* Address: 0x100b9a060 | FUN_100b9a060 */

void FUN_100b9a060(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b9a078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x148))();
  return;
}



/* Address: 0x100b9a07c | FUN_100b9a07c */

void FUN_100b9a07c(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b9a094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x150))();
  return;
}



/* Address: 0x100b9a098 | FUN_100b9a098 */

void FUN_100b9a098(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b9a0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x158))();
  return;
}



/* Address: 0x100b9a0b4 | FUN_100b9a0b4 */

void FUN_100b9a0b4(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b9a0cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x160))();
  return;
}



/* Address: 0x100b9a0d0 | FUN_100b9a0d0 */

void FUN_100b9a0d0(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b9a0e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x168))();
  return;
}



/* Address: 0x100b9a0ec | FUN_100b9a0ec */

void FUN_100b9a0ec(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b9a0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x170))();
  return;
}



/* Address: 0x100b9a0f4 | FUN_100b9a0f4 */

void FUN_100b9a0f4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b9a0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x178))();
  return;
}



/* Address: 0x100b9a0fc | FUN_100b9a0fc */

void FUN_100b9a0fc(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b9a114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x180))();
  return;
}



/* Address: 0x100b9a118 | FUN_100b9a118 */

void FUN_100b9a118(long param_1)

{
  long unaff_x20;
  long unaff_x29;
  
  FUN_10000cbfc(*(long *)(unaff_x20 + 0x38) + param_1 * 0x20,unaff_x29 + -0x80);
  return;
}



/* Address: 0x100b9a128 | FUN_100b9a128 */

void FUN_100b9a128(void)

{
  return;
}



/* Address: 0x100b9a138 | FUN_100b9a138 */

void FUN_100b9a138(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x26;
  
  _swift_dynamicCast(param_1,param_2,unaff_x26 + 8,param_4,6);
  return;
}



/* Address: 0x100b9a144 | FUN_100b9a144 */

void FUN_100b9a144(ID param_1)

{
  long unaff_x27;
  
  _objc_msgSend(param_1,*(SEL *)(unaff_x27 + 0xae0));
  return;
}



/* Address: 0x100b9a150 | FUN_100b9a150 */

void FUN_100b9a150(void)

{
  long unaff_x29;
  
  FUN_100b78fe8(unaff_x29 + -0x98);
  return;
}



/* Address: 0x100b9a15c | FUN_100b9a15c */

undefined1 FUN_100b9a15c(undefined1 *param_1)

{
  return *param_1;
}



/* Address: 0x100b9a16c | FUN_100b9a16c */

void FUN_100b9a16c(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x26;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -0x80) = unaff_x26;
  *(undefined8 *)(unaff_x29 + -0x98) = param_1;
  *(undefined8 *)(unaff_x29 + -0x90) = param_2;
  _swift_bridgeObjectRetain();
  return;
}



/* Address: 0x100b9a178 | FUN_100b9a178 */

void FUN_100b9a178(void)

{
  long unaff_x22;
  
  _objc_allocWithZone(*(undefined8 *)(unaff_x22 + 0x750));
  return;
}



/* Address: 0x100b9a184 | FUN_100b9a184 */

void FUN_100b9a184(void)

{
  return;
}



/* Address: 0x100b9a1a4 | FUN_100b9a1a4 */

void FUN_100b9a1a4(void)

{
  long unaff_x28;
  
                    /* WARNING: Could not recover jumptable at 0x000100b9a1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x28 + 8))();
  return;
}



/* Address: 0x100b9a1b4 | FUN_100b9a1b4 */

undefined1  [16] FUN_100b9a1b4(void)

{
  long unaff_x29;
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = unaff_x29 + -200;
  auVar1._8_8_ = unaff_x29 + -0x80;
  return auVar1;
}



/* Address: 0x100b9a1c0 | FUN_100b9a1c0 */

void FUN_100b9a1c0(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  return;
}



/* Address: 0x100b9a1c8 | FUN_100b9a1c8 */

void FUN_100b9a1c8(undefined8 param_1)

{
  undefined8 unaff_x23;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -0x80) = unaff_x23;
  *(undefined8 *)(unaff_x29 + -0x98) = param_1;
  return;
}



/* Address: 0x100b9a1d8 | FUN_100b9a1d8 */

void FUN_100b9a1d8(byte param_1)

{
  byte *unaff_x19;
  
  *unaff_x19 = param_1 & 1;
  return;
}



/* Address: 0x100b9a1e4 | FUN_100b9a1e4 */

void FUN_100b9a1e4(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  
  uVar1 = unaff_x20[1];
  *unaff_x20 = unaff_x21;
  unaff_x20[1] = unaff_x19;
  _swift_bridgeObjectRelease(uVar1);
  return;
}


