/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100be71b0 | FUN_100be71b0 */

void FUN_100be71b0(void)

{
  ID unaff_x20;
  
  _objc_msgSend(unaff_x20,"isActive");
  return;
}



/* Address: 0x100be71d0 | FUN_100be71d0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100be71d0(void)

{
  return ZEXT816(0x100fa5a10);
}



/* Address: 0x100be71f0 | FUN_100be71f0 */

int FUN_100be71f0(int *param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = -1;
  }
  else if ((param_2 < 0xff) || (*(char *)((long)param_1 + 9) == '\0')) {
    iVar1 = *(byte *)(param_1 + 2) - 2;
    if (*(byte *)(param_1 + 2) < 2) {
      iVar1 = -1;
    }
  }
  else {
    iVar1 = *param_1 + 0xfe;
  }
  return iVar1 + 1;
}



/* Address: 0x100be722c | FUN_100be722c */

undefined1  [16] FUN_100be722c(void)

{
  return ZEXT816(0x100f3cc78);
}



/* Address: 0x100be723c | FUN_100be723c */

void FUN_100be723c(char *param_1,uint param_2,uint param_3)

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
                    /* WARNING: Could not recover jumptable at 0x000100be7284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_100be7288 + (ulong)(byte)(&DAT_100c9f3c5)[uVar1] * 4))();
    return;
  }
  *param_1 = (char)param_2 + '\x01';
                    /* WARNING: Could not recover jumptable at 0x000100be72b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_100be72bc + (ulong)(byte)(&DAT_100c9f3c0)[uVar1] * 4))();
  return;
}



/* Address: 0x100be72f8 | FUN_100be72f8 */

undefined1  [16] FUN_100be72f8(void)

{
  return ZEXT816(0x100f3cd10);
}



/* Address: 0x100be7308 | thunk_FUN_100be730c */

void thunk_FUN_100be730c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101048708 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9f424;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9f424,&DAT_100f3cd10);
  DAT_101048708 = pTVar1;
  return;
}



/* Address: 0x100be730c | FUN_100be730c */

void FUN_100be730c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101048708 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9f424;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9f424,&DAT_100f3cd10);
  DAT_101048708 = pTVar1;
  return;
}



/* Address: 0x100be734c | _TtC6Sentry22SentryMeasurementValue::value */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry22SentryMeasurementValue::value(ID param_1,SEL param_2)

{
  FUN_100be736c();
  return param_1;
}



/* Address: 0x100be736c | FUN_100be736c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100be736c(void)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + _TtC6Sentry22SentryMeasurementValue::value);
}



/* Address: 0x100be737c | _TtC6Sentry22SentryMeasurementValue::unit */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry22SentryMeasurementValue::unit(ID param_1,SEL param_2)

{
  FUN_100be739c();
  return param_1;
}



/* Address: 0x100be739c | FUN_100be739c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100be739c(void)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + _TtC6Sentry22SentryMeasurementValue::unit);
}



/* Address: 0x100be73cc | FUN_100be73cc */

void FUN_100be73cc(undefined8 param_1)

{
  FUN_100b69e08();
  FUN_100be73f8(param_1);
  return;
}



/* Address: 0x100be73f8 | FUN_100be73f8 */

void FUN_100be73f8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100b69e00();
  *(undefined8 *)(unaff_x20 + _TtC6Sentry22SentryMeasurementValue::value) = param_1;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry22SentryMeasurementValue::unit) = 0;
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffd0,"init");
  return;
}



/* Address: 0x100be744c | _TtC6Sentry22SentryMeasurementValue::initWithValue: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry22SentryMeasurementValue::initWithValue_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100be73f8();
  return param_3;
}



/* Address: 0x100be7474 | FUN_100be7474 */

void FUN_100be7474(undefined8 param_1,undefined8 param_2)

{
  FUN_100b69e08();
  FUN_100be74b0(param_1,param_2);
  return;
}



/* Address: 0x100be74b0 | FUN_100be74b0 */

void FUN_100be74b0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_100b69e00();
  *(undefined8 *)(unaff_x20 + _TtC6Sentry22SentryMeasurementValue::value) = param_1;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry22SentryMeasurementValue::unit) = param_2;
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"init");
  return;
}



/* Address: 0x100be7510 | _TtC6Sentry22SentryMeasurementValue::initWithValue:unit: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID _TtC6Sentry22SentryMeasurementValue::initWithValue_unit_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  FUN_100be74b0(param_3,param_4);
  return param_3;
}



/* Address: 0x100be7558 | FUN_100be7558 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100be75f0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

Dictionary<undefined,undefined> FUN_100be7558(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  String local_b8;
  undefined *local_a0;
  undefined *local_48;
  
  puVar1 = &DAT_1010448c8;
  FUN_100b6730c();
  _swift_initStackObject();
  *(undefined8 *)(puVar1 + 0x18) = 2;
  *(undefined8 *)(puVar1 + 0x10) = 1;
  *(undefined1 **)(puVar1 + 0x20) = &DAT_65756c6176;
  *(undefined1 **)(puVar1 + 0x28) = &DAT_e500000000000000;
  uVar3 = *(undefined8 *)(unaff_x20 + _TtC6Sentry22SentryMeasurementValue::value);
  uVar2 = 0;
  FUN_100b7f4fc();
  *(undefined8 *)(puVar1 + 0x48) = uVar2;
  *(undefined8 *)(puVar1 + 0x30) = uVar3;
  puVar1 = PTR___type_metadata_for_Swift_String_100eac208;
  local_48 = (undefined *)
             Swift::Dictionary::_init
                       (uVar2,PTR___type_metadata_for_Swift_String_100eac208,
                        PTR___type_metadata_for_Any_100eae0c0 + 8,
                        PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218
                       );
  if (*(ID *)(unaff_x20 + _TtC6Sentry22SentryMeasurementValue::unit) != 0) {
    _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry22SentryMeasurementValue::unit),"unit");
    local_b8 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    local_a0 = puVar1;
    FUN_100b78fe8(&local_b8,0x74696e75,&DAT_e400000000000000);
  }
  return (Dictionary<undefined,undefined>)local_48;
}



/* Address: 0x100be7684 | _TtC6Sentry22SentryMeasurementValue::serialize */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry22SentryMeasurementValue::serialize(ID param_1,SEL param_2)

{
  NSDictionary *pNVar1;
  
  FUN_100be7558(param_1);
  pNVar1 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_1);
  return (ID)pNVar1;
}



/* Address: 0x100be76e8 | FUN_100be76e8 */

void FUN_100be76e8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("Sentry.SentryMeasurementValue",0x1d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100be7714);
  (*pcVar1)();
}



/* Address: 0x100be7714 | _TtC6Sentry22SentryMeasurementValue::init */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry22SentryMeasurementValue::init(ID param_1,SEL param_2)

{
  FUN_100be76e8();
  return 0;
}



/* Address: 0x100be7720 | _TtC6Sentry22SentryMeasurementValue::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry22SentryMeasurementValue::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}



/* Address: 0x100be7758 | FUN_100be7758 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100be7758(void)

{
  return ZEXT816(0x100fa5ac0);
}



/* Address: 0x100be7778 | FUN_100be7778 */

void FUN_100be7778(undefined8 param_1,undefined8 param_2)

{
  _swift_lookUpClassMethod(param_1,param_2,&TargetClassDescriptor_100cd0c1c);
  return;
}



/* Address: 0x100be7784 | FUN_100be7784 */

void FUN_100be7784(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100be7788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x60))();
  return;
}



/* Address: 0x100be778c | FUN_100be778c */

void FUN_100be778c(undefined8 param_1,ulong param_2)

{
  Foundation::JSONDecoder::DateDecodingStrategy::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x000100be77f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_100be77f8 + (ulong)(byte)(&DAT_100c9f480)[param_2 >> 0x3e] * 4))();
  return;
}



/* Address: 0x100be79e4 | FUN_100be79e4 */

void FUN_100be79e4(undefined8 param_1,ulong param_2)

{
  Foundation::JSONDecoder::DateDecodingStrategy::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x000100be7a4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_100be7a50 + (ulong)(byte)(&DAT_100c9f484)[param_2 >> 0x3e] * 4))();
  return;
}



/* Address: 0x100be7c34 | thunk_FUN_100be79e4 */

void thunk_FUN_100be79e4(undefined8 param_1,ulong param_2)

{
  Foundation::JSONDecoder::DateDecodingStrategy::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x000100be7a4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_100be7a50 + (ulong)(byte)(&DAT_100c9f484)[param_2 >> 0x3e] * 4))();
  return;
}



/* Address: 0x100be7c38 | _TtC6Sentry18SentryEventDecoder::decodeEventWithJsonData: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry18SentryEventDecoder::decodeEventWithJsonData_(ID param_1,SEL param_2,ID param_3)

{
  Data DVar1;
  Data DVar2;
  
  DVar1 = Foundation::Data::__unconditionallyBridgeFromObjectiveC((Data)param_3);
  DVar2 = DVar1;
  thunk_FUN_100be79e4(DVar1.unknown,param_2);
  FUN_10003bf2c(DVar1.unknown,param_2);
  return (ID)DVar2.unknown;
}



/* Address: 0x100be7ca0 | FUN_100be7ca0 */

void FUN_100be7ca0(void)

{
  FUN_100be7cd0();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"init");
  return;
}



/* Address: 0x100be7cd0 | FUN_100be7cd0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100be7cd0(void)

{
  return ZEXT816(0x100fa5b90);
}



/* Address: 0x100be7cf0 | _TtC6Sentry18SentryEventDecoder::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry18SentryEventDecoder::init(ID param_1,SEL param_2)

{
  FUN_100be7ca0();
  return param_1;
}



/* Address: 0x100be7d10 | FUN_100be7d10 */

void FUN_100be7d10(void)

{
  FUN_100be7cd0();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x100be7d40 | FUN_100be7d40 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100be7e8c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100be7d40(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 *unaff_x20;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar2 = &DAT_1010448c8;
  FUN_100b6730c();
  _swift_initStackObject();
  *(undefined8 *)(puVar2 + 0x18) = 0xc;
  *(undefined8 *)(puVar2 + 0x10) = 6;
  *(undefined8 *)(puVar2 + 0x20) = 0x656d616e;
  *(undefined1 **)(puVar2 + 0x28) = &DAT_e400000000000000;
  puVar1 = PTR___type_metadata_for_Swift_String_100eac208;
  uVar6 = unaff_x20[1];
  uVar5 = *unaff_x20;
  uVar8 = unaff_x20[3];
  uVar7 = unaff_x20[2];
  *(undefined8 *)(puVar2 + 0x38) = uVar6;
  *(undefined8 *)(puVar2 + 0x30) = uVar5;
  puVar3 = puVar2;
  FUN_100be8bf4();
  *(undefined **)(puVar3 + 0x48) = puVar1;
  *(undefined8 *)(puVar3 + 0x50) = extraout_x8;
  *(undefined1 **)(puVar3 + 0x58) = &DAT_e700000000000000;
  *(undefined8 *)(puVar3 + 0x68) = uVar8;
  *(undefined8 *)(puVar3 + 0x60) = uVar7;
  local_60 = uVar7;
  uStack_58 = uVar8;
  uStack_50 = uVar5;
  uStack_48 = uVar6;
  FUN_100be8c40();
  *(undefined **)(puVar3 + 0x78) = puVar1;
  *(undefined8 *)(puVar3 + 0x80) = extraout_x8_00;
  *(undefined8 *)(puVar3 + 0x88) = 0xec000000736e6f69;
  uVar5 = unaff_x20[4];
  puVar3 = &DAT_101044808;
  local_68 = uVar5;
  FUN_100b6730c();
  *(undefined8 *)(puVar2 + 0x90) = uVar5;
  FUN_100be8c2c();
  *(undefined **)(puVar2 + 0xa8) = puVar3;
  *(undefined8 *)(puVar2 + 0xb0) = extraout_x8_01;
  uStack_70 = unaff_x20[5];
  uVar5 = unaff_x20[6];
  *(undefined1 **)(puVar2 + 0xb8) = &DAT_e800000000000000;
  *(undefined8 *)(puVar2 + 0xc0) = uStack_70;
  local_78 = uVar5;
  FUN_100be8c68();
  *(undefined **)(puVar2 + 0xd8) = puVar3;
  *(undefined8 *)(puVar2 + 0xe0) = extraout_x8_02;
  *(undefined1 **)(puVar2 + 0xe8) = &DAT_e800000000000000;
  puVar3 = &DAT_1010487a0;
  FUN_100b6730c();
  *(undefined8 *)(puVar2 + 0xf0) = uVar5;
  FUN_100be8c54();
  *(undefined **)(puVar2 + 0x108) = puVar3;
  *(undefined8 *)(puVar2 + 0x110) = extraout_x8_03;
  *(undefined1 **)(puVar2 + 0x118) = &DAT_e800000000000000;
  uVar4 = (ulong)*(byte *)(unaff_x20 + 7);
  FUN_100be8b40(&uStack_50);
  FUN_100be8b40(&local_60);
  FUN_100be8b68(&local_68);
  FUN_100be8b68(&uStack_70);
  FUN_100be8b68(&local_78);
  FUN_100bb42a8();
  uVar5 = 0;
  FUN_100bb4358();
  *(undefined8 *)(puVar2 + 0x138) = uVar5;
  *(ulong *)(puVar2 + 0x120) = uVar4;
  Swift::Dictionary::_init
            (uVar5,puVar1,PTR___type_metadata_for_Any_100eae0c0 + 8,
             PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218);
  return;
}



/* Address: 0x100be7ea8 | FUN_100be7ea8 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100be8460 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100be7ea8(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  NSDictionary *pNVar5;
  NSDictionary *pNVar6;
  ulong uVar7;
  undefined *puVar8;
  Dictionary<undefined,undefined> DVar9;
  long lVar10;
  long *plVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined8 extraout_x8;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long local_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  long local_b8;
  long local_a0;
  long lStack_98;
  long local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  
  local_78 = PTR___swiftEmptySetSingleton_100eae0e8;
  local_70 = PTR___swiftEmptySetSingleton_100eae0e8;
  local_80 = PTR___swiftEmptySetSingleton_100eae0e8;
  pNVar5 = (NSDictionary *)0x0;
  FUN_100bb4358();
  pNVar6 = (extension_Foundation)::__C::NSDictionary::___allocating_init(pNVar5);
  FUN_100bb4154();
  puVar12 = PTR___type_metadata_for_Any_100eae0c0;
  bVar4 = (byte)pNVar6;
  if (param_2 == 0) {
    FUN_100be8be8();
LAB_100be7f8c:
    FUN_100bbb460();
    lVar20 = 0;
    if (param_2 != 0) {
LAB_100be7fa8:
      uVar18 = 0xe000000000000000;
      lVar20 = 0;
      goto LAB_100be7fac;
    }
    FUN_100be8be8();
    uVar18 = 0xe000000000000000;
LAB_100be801c:
    FUN_100bbb460();
    if (param_2 != 0) {
LAB_100be8024:
      uVar17 = 0xe000000000000000;
      lVar19 = 0;
      goto LAB_100be802c;
    }
    lVar19 = 0;
    FUN_100be8be8();
    uVar17 = 0xe000000000000000;
LAB_100be8140:
    FUN_100bbb460();
    if (param_2 == 0) goto LAB_100be8148;
LAB_100be816c:
    FUN_100be8c2c();
    FUN_100be8bcc();
    puVar13 = PTR___type_metadata_for_Swift_String_100eac208;
    FUN_100be8bc0();
    if (*(long *)(param_2 + 0x10) == 0) {
LAB_100be81b0:
      FUN_100be8be8();
    }
    else {
      FUN_100b6fbac();
      FUN_100be8bb4();
      if (((ulong)puVar13 & 1) == 0) {
        FUN_100b6f8ec();
        goto LAB_100be81b0;
      }
      FUN_100be8ba4();
      FUN_100b6f8ec();
    }
    FUN_100b6f8ec();
    FUN_100be8c08();
    if (local_88 == 0) goto LAB_100be8254;
    uVar7 = 0;
    FUN_100b6730c();
    FUN_100be8b90();
    if ((uVar7 & 1) == 0) goto joined_r0x000100be824c;
    lVar15 = *(long *)(local_d0 + 0x10);
    if (lVar15 != 0) {
      do {
        FUN_100be8c20();
        FUN_100be8bd8();
        FUN_100b6f878();
        if ((uVar7 & 1) != 0) {
          FUN_10007253c(&local_d0,local_a0,lStack_98);
          uVar7 = uStack_c8;
          _swift_bridgeObjectRelease();
        }
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      FUN_100b6fbc4();
      goto joined_r0x000100be824c;
    }
    FUN_100b6fbc4();
LAB_100be825c:
    FUN_100be8c68();
    FUN_100be8bcc();
    puVar13 = PTR___type_metadata_for_Swift_String_100eac208;
    FUN_100be8bc0();
    if (*(long *)(param_2 + 0x10) == 0) {
LAB_100be82a8:
      FUN_100be8be8();
    }
    else {
      FUN_100b6fbac();
      FUN_100be8bb4();
      if (((ulong)puVar13 & 1) == 0) {
        FUN_100b6f8ec();
        goto LAB_100be82a8;
      }
      FUN_100be8ba4();
      FUN_100b6f8ec();
    }
    FUN_100b6f8ec();
    FUN_100be8c08();
    if (local_88 == 0) goto LAB_100be84cc;
    uVar7 = 0;
    FUN_100b6730c();
    FUN_100be8b90();
    lVar15 = local_d0;
    puVar13 = PTR___type_metadata_for_Swift_String_100eac208;
    if ((uVar7 & 1) == 0) goto joined_r0x000100be84c4;
    lVar16 = *(long *)(local_d0 + 0x10);
    if (lVar16 != 0) {
      lVar21 = local_d0;
      do {
        lVar21 = lVar21 + 0x20;
        FUN_10000cbfc(lVar21,&local_d0);
        uVar7 = 0;
        FUN_100b6730c();
        FUN_100be8bd8();
        FUN_100b6f878();
        lVar1 = local_a0;
        if ((uVar7 & 1) != 0) {
          if (*(long *)(local_a0 + 0x10) == 0) {
LAB_100be83bc:
            FUN_100b6f860();
          }
          else {
            _swift_bridgeObjectRetain(local_a0);
            uVar7 = 0;
            uVar14 = 0;
            FUN_100071370();
            if ((uVar14 & 1) == 0) {
              _swift_bridgeObjectRelease_n(lVar1,2);
            }
            else {
              FUN_100be8c10();
              FUN_100b6f860();
              FUN_100be8bd8();
              FUN_100b6f878();
              lVar10 = lStack_98;
              lVar2 = local_a0;
              if ((uVar7 & 1) == 0) goto LAB_100be83bc;
              if (*(long *)(lVar1 + 0x10) == 0) {
LAB_100be83d8:
                uStack_c8 = 0;
                local_d0 = 0;
                local_b8 = 0;
                uStack_c0 = 0;
              }
              else {
                _swift_bridgeObjectRetain(lVar1);
                uVar7 = 0;
                uVar14 = 0;
                FUN_100071370();
                if ((uVar14 & 1) == 0) {
                  FUN_100b6f860();
                  goto LAB_100be83d8;
                }
                FUN_100be8c10();
                FUN_100b6f860();
              }
              FUN_100b6f860();
              if (local_b8 == 0) {
                _swift_bridgeObjectRelease(lVar10);
                FUN_100013954(&local_d0);
              }
              else {
                FUN_100be8bd8();
                FUN_100b6f878();
                lVar3 = lStack_98;
                lVar1 = local_a0;
                if ((uVar7 & 1) != 0) {
                  puVar8 = &DAT_101044b18;
                  FUN_100b6730c();
                  _swift_allocObject();
                  *(undefined8 *)(puVar8 + 0x18) = 4;
                  *(undefined8 *)(puVar8 + 0x10) = 2;
                  *(undefined8 *)(puVar8 + 0x20) = 0x656d616e;
                  *(undefined1 **)(puVar8 + 0x28) = &DAT_e400000000000000;
                  *(long *)(puVar8 + 0x30) = lVar2;
                  FUN_100be8bf4();
                  *(long *)(puVar8 + 0x38) = lVar10;
                  *(undefined8 *)(puVar8 + 0x40) = extraout_x8;
                  *(undefined1 **)(puVar8 + 0x48) = &DAT_e700000000000000;
                  *(long *)(puVar8 + 0x50) = lVar1;
                  *(long *)(puVar8 + 0x58) = lVar3;
                  DVar9 = Swift::Dictionary::_init
                                    (puVar8,puVar13,puVar13,
                                     PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218
                                    );
                  FUN_100b70b54(&local_d0,DVar9.unknown);
                  lVar10 = local_d0;
                }
                _swift_bridgeObjectRelease(lVar10);
              }
            }
          }
        }
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      _swift_bridgeObjectRelease(lVar15);
      goto joined_r0x000100be84c4;
    }
    _swift_bridgeObjectRelease();
LAB_100be84d4:
    FUN_100be8c54();
    puVar13 = PTR___type_metadata_for_Swift_String_100eac208;
    FUN_100be8bc0();
    if (*(long *)(param_2 + 0x10) == 0) {
LAB_100be8520:
      FUN_100be8be8();
    }
    else {
      FUN_100b6fbac();
      FUN_100be8bb4();
      if (((ulong)puVar13 & 1) == 0) {
        FUN_100b6f8ec();
        goto LAB_100be8520;
      }
      FUN_100be8ba4();
      FUN_100b6f8ec();
    }
    FUN_100b6f8ec();
    FUN_100be8c08();
    if (local_88 != 0) {
      plVar11 = &local_d0;
      FUN_100b6f878(plVar11,&local_a0,puVar12 + 8,pNVar5);
      if (((ulong)plVar11 & 1) != 0) {
        lVar15 = local_d0;
        FUN_100bb4154();
        bVar4 = (byte)lVar15;
      }
      goto LAB_100be8560;
    }
  }
  else {
    FUN_100be8bcc(0x656d616e);
    puVar13 = PTR___type_metadata_for_Swift_String_100eac208;
    FUN_100be8bc0();
    if (*(long *)(param_2 + 0x10) == 0) {
LAB_100be7f60:
      FUN_100be8be8();
    }
    else {
      FUN_100b6fbac();
      FUN_100be8bb4();
      if (((ulong)puVar13 & 1) == 0) {
        FUN_100b6f8ec();
        goto LAB_100be7f60;
      }
      FUN_100be8ba4();
      FUN_100b6f8ec();
    }
    FUN_100b6f8ec();
    FUN_100be8c08();
    if (local_88 == 0) goto LAB_100be7f8c;
    FUN_100be8b90();
    uVar18 = uStack_c8;
    lVar20 = local_d0;
    if (((ulong)pNVar6 & 1) == 0) goto LAB_100be7fa8;
LAB_100be7fac:
    FUN_100be8bf4();
    FUN_100be8bcc();
    puVar13 = PTR___type_metadata_for_Swift_String_100eac208;
    FUN_100be8bc0();
    if (*(long *)(param_2 + 0x10) == 0) {
LAB_100be7ff0:
      FUN_100be8be8();
    }
    else {
      FUN_100b6fbac();
      FUN_100be8bb4();
      if (((ulong)puVar13 & 1) == 0) {
        FUN_100b6f8ec();
        goto LAB_100be7ff0;
      }
      FUN_100be8ba4();
      FUN_100b6f8ec();
    }
    FUN_100b6f8ec();
    FUN_100be8c08();
    if (local_88 == 0) goto LAB_100be801c;
    FUN_100be8b90();
    uVar17 = uStack_c8;
    lVar19 = local_d0;
    if (((ulong)pNVar6 & 1) == 0) goto LAB_100be8024;
LAB_100be802c:
    FUN_100be8c40();
    FUN_100be8bcc();
    puVar13 = PTR___type_metadata_for_Swift_String_100eac208;
    FUN_100be8bc0();
    if (*(long *)(param_2 + 0x10) == 0) {
LAB_100be8078:
      FUN_100be8be8();
    }
    else {
      FUN_100b6fbac();
      FUN_100be8bb4();
      if (((ulong)puVar13 & 1) == 0) {
        FUN_100b6f8ec();
        goto LAB_100be8078;
      }
      FUN_100be8ba4();
      FUN_100b6f8ec();
    }
    FUN_100b6f8ec();
    FUN_100be8c08();
    if (local_88 == 0) goto LAB_100be8140;
    uVar7 = 0;
    FUN_100b6730c();
    FUN_100be8b90();
    if ((uVar7 & 1) != 0) {
      lVar15 = *(long *)(local_d0 + 0x10);
      if (lVar15 != 0) {
        do {
          FUN_100be8c20();
          FUN_100be8bd8();
          FUN_100b6f878();
          if ((uVar7 & 1) != 0) {
            FUN_10007253c(&local_d0,local_a0,lStack_98);
            uVar7 = uStack_c8;
            _swift_bridgeObjectRelease();
          }
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
        FUN_100b6fbc4();
        goto LAB_100be812c;
      }
      FUN_100b6fbc4();
      goto LAB_100be816c;
    }
LAB_100be812c:
    if (param_2 != 0) goto LAB_100be816c;
LAB_100be8148:
    FUN_100be8be8();
LAB_100be8254:
    FUN_100bbb460();
joined_r0x000100be824c:
    if (param_2 != 0) goto LAB_100be825c;
    FUN_100be8be8();
LAB_100be84cc:
    FUN_100bbb460();
joined_r0x000100be84c4:
    if (param_2 != 0) goto LAB_100be84d4;
    FUN_100be8be8();
  }
  FUN_100bbb460();
LAB_100be8560:
  puVar12 = local_70;
  FUN_100b85d84();
  puVar13 = local_78;
  FUN_100b85d84();
  FUN_100b85d98();
  *param_1 = lVar20;
  param_1[1] = uVar18;
  param_1[2] = lVar19;
  param_1[3] = uVar17;
  param_1[4] = (long)puVar12;
  param_1[5] = (long)puVar13;
  param_1[6] = (long)local_80;
  *(byte *)(param_1 + 7) = bVar4 & 1;
  return;
}



/* Address: 0x100be85d8 | FUN_100be85d8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100be85d8(String *param_1,void *param_2,byte param_3)

{
  ID self;
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  String SVar4;
  String SVar5;
  undefined8 local_70;
  char *local_68;
  
  self = _objc_msgSend((ID)&objc::class_t::SentrySDKInternal,"currentHub");
  pcVar1 = (char *)_objc_msgSend(self,"trimmedInstalledIntegrationNames");
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  pcVar2 = (char *)0x0;
  FUN_100b70c54();
  FUN_100b70a2c();
  local_68 = pcVar2;
  FUN_100be10a0(0);
  lVar3 = 2;
  FUN_100be0f30();
  if (lVar3 != 0) {
    FUN_100b70b54(&local_70,lVar3);
    _swift_bridgeObjectRelease(local_70);
    pcVar2 = local_68;
  }
  _objc_msgSend((ID)&objc::class_t::SentryMeta,"sdkName");
  SVar4 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  _objc_msgSend((ID)&objc::class_t::SentryMeta,"versionString");
  SVar5 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  FUN_100b85d98();
  *param_1 = SVar4;
  param_1[1] = SVar5;
  param_1[2].str = pcVar1;
  param_1[2].bridgeObject = param_2;
  param_1[3].str = pcVar2;
  *(byte *)&param_1[3].bridgeObject = param_3 & 1;
  return;
}



/* Address: 0x100be875c | FUN_100be875c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100be875c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [64];
  
  FUN_100be44a0(0);
  lVar2 = param_1;
  FUN_100be3f64(param_1);
  lVar1 = SentryOptions::sendDefaultPii;
  _swift_beginAccess(param_1 + SentryOptions::sendDefaultPii,auStack_88,0,0);
  FUN_100be85d8(auStack_70,lVar2,*(undefined1 *)(param_1 + lVar1));
  uVar3 = 0;
  FUN_100be7d40(0);
  FUN_100be87fc(auStack_70);
  return uVar3;
}



/* Address: 0x100be87fc | FUN_100be87fc */

long FUN_100be87fc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x30));
  _swift_bridgeObjectRelease(uVar2);
  _swift_bridgeObjectRelease(uVar3);
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(uVar4);
  return param_1;
}



/* Address: 0x100be885c | _TtC6Sentry17SentrySdkInfoObjC::optionsToDict: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry17SentrySdkInfoObjC::optionsToDict_(ID param_1,SEL param_2,ID param_3)

{
  NSDictionary *pNVar1;
  
  FUN_100be875c(param_3);
  pNVar1 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_3);
  return (ID)pNVar1;
}



/* Address: 0x100be88c4 | _TtC6Sentry17SentrySdkInfoObjC::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry17SentrySdkInfoObjC::init(ID param_1,SEL param_2)

{
  FUN_1001fddc8();
  return param_1;
}



/* Address: 0x100be88e4 | FUN_100be88e4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100be88e4(void)

{
  return ZEXT816(0x100fa5c40);
}



/* Address: 0x100be8904 | FUN_100be8904 */

void FUN_100be8904(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Address: 0x100be8944 | FUN_100be8944 */

undefined8 * FUN_100be8944(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  uVar1 = param_2[4];
  uVar3 = param_2[5];
  param_1[4] = uVar1;
  param_1[5] = uVar3;
  uVar4 = param_2[6];
  param_1[6] = uVar4;
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  return param_1;
}



/* Address: 0x100be89c0 | FUN_100be89c0 */

undefined8 * FUN_100be89c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  return param_1;
}



/* Address: 0x100be8a7c | FUN_100be8a7c */

undefined8 * FUN_100be8a7c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  _swift_bridgeObjectRelease(param_1[3]);
  uVar2 = param_1[4];
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  _swift_bridgeObjectRelease(param_1[5]);
  uVar2 = param_1[6];
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  return param_1;
}



/* Address: 0x100be8af0 | FUN_100be8af0 */

int FUN_100be8af0(int *param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    iVar1 = -1;
  }
  else if ((param_2 < 0) && (*(char *)((long)param_1 + 0x39) != '\0')) {
    iVar1 = *param_1 + 0x7fffffff;
  }
  else {
    uVar2 = *(ulong *)(param_1 + 2);
    if (0xfffffffe < uVar2) {
      uVar2 = 0xffffffff;
    }
    iVar1 = (int)uVar2;
  }
  return iVar1 + 1;
}



/* Address: 0x100be8b30 | FUN_100be8b30 */

undefined1  [16] FUN_100be8b30(void)

{
  return ZEXT816(0x100f3cdd0);
}



/* Address: 0x100be8b40 | FUN_100be8b40 */

long FUN_100be8b40(long param_1)

{
  _swift_bridgeObjectRetain(*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Address: 0x100be8b68 | FUN_100be8b68 */

undefined8 * FUN_100be8b68(undefined8 *param_1)

{
  _swift_bridgeObjectRetain(*param_1);
  return param_1;
}



/* Address: 0x100be8b90 | FUN_100be8b90 */

void FUN_100be8b90(void)

{
  undefined8 in_x3;
  long unaff_x21;
  long unaff_x29;
  
  _swift_dynamicCast(&stack0x00000070,unaff_x29 + -0x90,unaff_x21 + 8,in_x3,6);
  return;
}



/* Address: 0x100be8ba4 | FUN_100be8ba4 */

void FUN_100be8ba4(long param_1)

{
  long unaff_x23;
  long unaff_x29;
  
  FUN_10000cbfc(*(long *)(unaff_x23 + 0x38) + param_1 * 0x20,unaff_x29 + -0x90);
  return;
}



/* Address: 0x100be8bb4 | FUN_100be8bb4 */

void FUN_100be8bb4(void)

{
  FUN_100b6cb68(&stack0x00000070);
  return;
}



/* Address: 0x100be8bc0 | FUN_100be8bc0 */

void FUN_100be8bc0(void)

{
  Swift::AnyHashable::_init(&stack0x00000070);
  return;
}



/* Address: 0x100be8bcc | FUN_100be8bcc */

void FUN_100be8bcc(undefined8 param_1)

{
  undefined8 uStack0000000000000060;
  
  uStack0000000000000060 = param_1;
  _swift_bridgeObjectRetain();
  return;
}



/* Address: 0x100be8bd8 | FUN_100be8bd8 */

long FUN_100be8bd8(void)

{
  long unaff_x29;
  
  return unaff_x29 + -0x90;
}



/* Address: 0x100be8be8 | FUN_100be8be8 */

void FUN_100be8be8(void)

{
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -0x88) = 0;
  *(undefined8 *)(unaff_x29 + -0x90) = 0;
  *(undefined8 *)(unaff_x29 + -0x78) = 0;
  *(undefined8 *)(unaff_x29 + -0x80) = 0;
  return;
}



/* Address: 0x100be8bf4 | FUN_100be8bf4 */

void FUN_100be8bf4(void)

{
  return;
}



/* Address: 0x100be8c08 | FUN_100be8c08 */

void FUN_100be8c08(void)

{
  FUN_100089674(&stack0x00000070);
  return;
}



/* Address: 0x100be8c10 | FUN_100be8c10 */

void FUN_100be8c10(long param_1)

{
  long unaff_x20;
  
  FUN_10000cbfc(*(long *)(unaff_x20 + 0x38) + param_1 * 0x20,&stack0x00000070);
  return;
}



/* Address: 0x100be8c20 | FUN_100be8c20 */

void FUN_100be8c20(void)

{
  FUN_10000cbfc();
  return;
}



/* Address: 0x100be8c2c | FUN_100be8c2c */

void FUN_100be8c2c(void)

{
  return;
}



/* Address: 0x100be8c40 | FUN_100be8c40 */

void FUN_100be8c40(void)

{
  return;
}



/* Address: 0x100be8c54 | FUN_100be8c54 */

void FUN_100be8c54(void)

{
  return;
}


