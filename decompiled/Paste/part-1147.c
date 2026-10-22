/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100bd962c | thunk_FUN_100bd950c */

void thunk_FUN_100bd950c(void)

{
  FUN_100bd950c();
  return;
}



/* Address: 0x100bd9630 | FUN_100bd9630 */

void FUN_100bd9630(byte *param_1,byte param_2)

{
  FUN_100bd9490();
  *param_1 = param_2 & 1;
  return;
}



/* Address: 0x100bd9658 | FUN_100bd9658 */

void FUN_100bd9658(void)

{
  FUN_1000dcbb0();
  return;
}



/* Address: 0x100bd9670 | FUN_100bd9670 */

void FUN_100bd9670(byte *param_1,byte param_2)

{
  FUN_1000d1c18();
  *param_1 = param_2 & 1;
  return;
}



/* Address: 0x100bd9698 | FUN_100bd9698 */

String FUN_100bd9698(void)

{
  String SVar1;
  
  FUN_100bd9710();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100bd96c0 | FUN_100bd96c0 */

String FUN_100bd96c0(void)

{
  String SVar1;
  
  FUN_100bd9710();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100bd96e8 | FUN_100bd96e8 */

void FUN_100bd96e8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x21;
  
  FUN_100bd9530();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
  }
  return;
}



/* Address: 0x100bd9710 | FUN_100bd9710 */

void FUN_100bd9710(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101047f40 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9e924;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9e924,&DAT_100f3c290);
  DAT_101047f40 = pTVar1;
  return;
}



/* Address: 0x100bd9750 | FUN_100bd9750 */

void FUN_100bd9750(undefined8 param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 2;
  if (0xffff < param_3 + 1U) {
    uVar2 = 4;
  }
  if (param_3 + 1U < 0x100) {
    uVar2 = 1;
  }
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = uVar2;
  }
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100bd978c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_100bd9790 + (ulong)(byte)(&DAT_100c9e7f0)[uVar1] * 4))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100bd97ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_100bd97b0 + (ulong)(byte)(&DAT_100c9e7f5)[uVar1] * 4))();
  return;
}



/* Address: 0x100bd97dc | FUN_100bd97dc */

undefined1  [16] FUN_100bd97dc(void)

{
  return ZEXT816(0x100f3c290);
}



/* Address: 0x100bd97ec | thunk_FUN_100bd97f0 */

void thunk_FUN_100bd97f0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101047f48 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9e8fc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9e8fc,&DAT_100f3c290);
  DAT_101047f48 = pTVar1;
  return;
}



/* Address: 0x100bd97f0 | FUN_100bd97f0 */

void FUN_100bd97f0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101047f48 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9e8fc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9e8fc,&DAT_100f3c290);
  DAT_101047f48 = pTVar1;
  return;
}



/* Address: 0x100bd9830 | thunk_FUN_100bd9834 */

void thunk_FUN_100bd9834(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101047f50 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9e894;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9e894,&DAT_100f3c290);
  DAT_101047f50 = pTVar1;
  return;
}



/* Address: 0x100bd9834 | FUN_100bd9834 */

void FUN_100bd9834(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101047f50 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9e894;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9e894,&DAT_100f3c290);
  DAT_101047f50 = pTVar1;
  return;
}



/* Address: 0x100bd9874 | thunk_FUN_100bd9878 */

void thunk_FUN_100bd9878(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101047f58 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9e86c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9e86c,&DAT_100f3c290);
  DAT_101047f58 = pTVar1;
  return;
}



/* Address: 0x100bd9878 | FUN_100bd9878 */

void FUN_100bd9878(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101047f58 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9e86c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9e86c,&DAT_100f3c290);
  DAT_101047f58 = pTVar1;
  return;
}



/* Address: 0x100bd98b8 | FUN_100bd98b8 */

void FUN_100bd98b8(undefined8 param_1,undefined8 param_2)

{
  FUN_1000c9ffc(param_1,param_2,1);
  return;
}



/* Address: 0x100bd98c4 | FUN_100bd98c4 */

void FUN_100bd98c4(void)

{
  FUN_10003bf18();
  _swift_release();
  return;
}



/* Address: 0x100bd98e0 | FUN_100bd98e0 */

void FUN_100bd98e0(void)

{
  FUN_100b69e08();
  FUN_100b69e84();
  FUN_100bda3cc();
  FUN_100b56e88();
  return;
}



/* Address: 0x100bd9904 | FUN_100bd9904 */

void FUN_100bd9904(void)

{
  FUN_100b69e08();
  FUN_100b69e84();
  FUN_100bd9e58();
  FUN_100b56e88();
  return;
}



/* Address: 0x100bd9928 | _TtC6Sentry18SentryEnvelopeItem::data */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry18SentryEnvelopeItem::data(ID param_1,SEL param_2)

{
  NSData *pNVar1;
  
  FUN_100bd9984();
  if ((ulong)param_2 >> 0x3c < 0xf) {
    pNVar1 = Foundation::Data::_bridgeToObjectiveC((Data)param_1);
    FUN_10003bf18(param_1,param_2);
  }
  else {
    pNVar1 = (NSData *)0x0;
  }
  return (ID)pNVar1;
}



/* Address: 0x100bd9984 | FUN_100bd9984 */

void FUN_100bd9984(void)

{
  FUN_100b6faf0();
  FUN_100b6d4cc();
  FUN_100b6faf0();
  return;
}



/* Address: 0x100bd99b8 | FUN_100bd99b8 */

void FUN_100bd99b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_100b69e08();
  FUN_100bd9a1c(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  FUN_100b69e70();
  return;
}



/* Address: 0x100bd9a1c | FUN_100bd9a1c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined *
FUN_100bd9a1c(undefined *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  Data DVar2;
  __int64 _Var3;
  
  DVar2.unknown = param_1;
  FUN_100b69e00();
  FUN_100b69e84();
  if (param_4 >> 0x3c < 0xf) {
    FUN_100ba42f0();
    FUN_100b6d4cc();
    FUN_100ba42f0();
    _Var3 = Foundation::Data::get_count(DVar2);
    FUN_100ba42f0();
    FUN_10003bf18();
    if (_Var3 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100bd9b30);
      (*pcVar1)();
    }
  }
  else {
    _Var3 = 0;
  }
  _objc_allocWithZone(&objc::class_t::SentryEnvelopeItemHeader);
  FUN_100b6cad4(param_1,param_2,_Var3,param_5,param_6,param_7);
  FUN_100bad7d4();
  FUN_100bdbadc();
  FUN_100bdba4c();
  FUN_100bdb9f4();
  FUN_100b97e4c();
  FUN_100b6f960();
  FUN_100bdb980();
  return param_1;
}



/* Address: 0x100bd9b30 | _TtC6Sentry18SentryEnvelopeItem::initWithType:data:contentType:itemCount: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x30 bytes */

ID _TtC6Sentry18SentryEnvelopeItem::initWithType_data_contentType_itemCount_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6)

{
  char *pcVar1;
  Data DVar2;
  void *pvVar3;
  String SVar4;
  String SVar5;
  
  SVar4 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pcVar1 = SVar4.str;
  if (param_4 == 0) {
    pvVar3 = (void *)0xf000000000000000;
    DVar2.unknown = (undefined *)0x0;
  }
  else {
    pvVar3 = SVar4.bridgeObject;
    DVar2 = Foundation::Data::__unconditionallyBridgeFromObjectiveC((Data)param_4);
  }
  SVar5 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  FUN_100bd9a1c(pcVar1,SVar4.bridgeObject,DVar2.unknown,pvVar3,SVar5.str,SVar5.bridgeObject,param_6)
  ;
  return (ID)pcVar1;
}



/* Address: 0x100bd9c0c | FUN_100bd9c0c */

void FUN_100bd9c0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_100b69e08();
  FUN_100bd9c68(param_1,param_2,param_3,param_4,param_5);
  return;
}



/* Address: 0x100bd9c68 | FUN_100bd9c68 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100bd9c68(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  ulong param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  Data unaff_x20;
  undefined *puVar3;
  
  FUN_100b6f960();
  if (param_4 >> 0x3c < 0xf) {
    FUN_100ba42f0();
    FUN_100b6d4cc();
    FUN_100ba42f0();
    puVar3 = (undefined *)Foundation::Data::get_count(unaff_x20);
    unaff_x20.unknown = puVar3;
    FUN_100ba42f0();
    FUN_10003bf18();
  }
  else {
    puVar3 = (undefined *)0x0;
  }
  FUN_100b94080();
  if (-1 < (long)puVar3) {
    FUN_100bdba70(param_1,param_2,puVar3,unaff_x20.unknown);
    uVar2 = param_1;
    if ((param_5 & 1) != 0) {
      uVar2 = 0x616f636f63;
      FUN_100bdb904(0x616f636f63,&DAT_e500000000000000,param_1);
    }
    FUN_100b6faa8();
    FUN_100bdbad4();
    FUN_100bdba4c();
    FUN_100bdb9f4();
    FUN_100b6f960();
    FUN_100bdb980();
    FUN_100b69e70(uVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100bd9d5c);
  (*pcVar1)();
}



/* Address: 0x100bd9d5c | _TtC6Sentry18SentryEnvelopeItem::initWithType:data:addPlatform: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x24 bytes */

ID _TtC6Sentry18SentryEnvelopeItem::initWithType_data_addPlatform_
             (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5)

{
  char *pcVar1;
  Data DVar2;
  void *pvVar3;
  String SVar4;
  
  SVar4 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pcVar1 = SVar4.str;
  if (param_4 == 0) {
    pvVar3 = (void *)0xf000000000000000;
    DVar2.unknown = (undefined *)0x0;
  }
  else {
    pvVar3 = SVar4.bridgeObject;
    DVar2 = Foundation::Data::__unconditionallyBridgeFromObjectiveC((Data)param_4);
  }
  FUN_100bd9c68(pcVar1,SVar4.bridgeObject,DVar2.unknown,pvVar3,param_5);
  return (ID)pcVar1;
}



/* Address: 0x100bd9df0 | FUN_100bd9df0 */

void FUN_100bd9df0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  FUN_100b69e00();
  *(undefined8 *)(unaff_x20 + _TtC6Sentry18SentryEnvelopeItem::header) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC6Sentry18SentryEnvelopeItem::data);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"init");
  return;
}



/* Address: 0x100bd9e58 | FUN_100bd9e58 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100bd9e58(undefined8 param_1)

{
  code *pcVar1;
  bool bVar2;
  Date DVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  class_t *self;
  ID self_00;
  ID IVar7;
  Date DVar8;
  undefined *puVar9;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  Data DVar10;
  undefined *puVar11;
  char *pcVar12;
  char *pcVar13;
  undefined **ppuVar14;
  char *pcVar15;
  undefined *puVar16;
  long lVar17;
  void *pvVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  char *local_80;
  char *local_78;
  undefined *local_68;
  
  FUN_100b69e00();
  DVar3 = Foundation::Date::typeMetadataAccessor();
  local_88 = *(long *)(DVar3.unknown + -8);
  lVar17 = *(long *)(local_88 + 0x40);
  uVar4 = 0;
  FUN_100b6f5fc();
  uVar5 = uVar4;
  FUN_10021b704();
  FUN_100b78ce8();
  puVar11 = PTR___type_metadata_for_Swift_String_100eac208;
  puVar16 = PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218;
  FUN_100bdbaac(PTR___type_metadata_for_Any_100eae0c0);
  FUN_100b6f868();
  puVar6 = &DAT_101044968;
  FUN_100b6730c();
  puVar9 = puVar6;
  local_68 = puVar6;
  FUN_100bdba80();
  DVar10.unknown = (undefined *)&local_80;
  FUN_100004594();
  if (0xe < (ulong)puVar11 >> 0x3c) {
    self = &objc::class_t::SentryEvent;
    local_98 = uVar4;
    local_90 = param_1;
    _objc_allocWithZone();
    self_00 = _objc_msgSend((ID)self,"init");
    pcVar12 = "setLevel:";
    pcVar15 = (char *)0x3;
    _objc_msgSend(self_00,"setLevel:");
    pvVar18 = (void *)0xe000000000000000;
    local_80 = (char *)0x0;
    local_78 = (char *)0xe000000000000000;
    Swift::_StringGuts::grow(0x32,(_StringGuts)pcVar12);
    pcVar12 = local_78;
    _swift_bridgeObjectRelease();
    local_80 = (char *)0xd00000000000002f;
    local_78 = (char *)0x8000000100dd0f20;
    pcVar13 = "message";
    FUN_100b78ce8();
    SVar19.bridgeObject = pcVar13;
    SVar19.str = pcVar12;
    if (pcVar12 != (char *)0x0) {
      IVar7 = _objc_msgSend((ID)pcVar12,"description");
      FUN_100b6f868(IVar7);
      SVar19 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      pvVar18 = SVar19.bridgeObject;
      FUN_100b6fa78();
    }
    FUN_100bdbaf8();
    SVar21.bridgeObject = puVar16;
    SVar21.str = pcVar15;
    Swift::String::append(SVar19,SVar21);
    _swift_bridgeObjectRelease(pvVar18);
    SVar20.bridgeObject = (void *)0xe100000000000000;
    SVar20.str = (char *)0x27;
    uVar4 = 0x27;
    SVar22.bridgeObject = puVar16;
    SVar22.str = pcVar15;
    Swift::String::append(SVar20,SVar22);
    pcVar12 = local_78;
    DVar8.unknown = local_80;
    FUN_100b94080();
    FUN_100bda330(DVar8.unknown,pcVar12,uVar4);
    FUN_100bdb9c4();
    FUN_100b6f868();
    ppuVar14 = &PTR_s_releaseName_100f88f90;
    FUN_100bdba78();
    if (ppuVar14 != (undefined **)0x0) {
      FUN_100bdbaf0();
      FUN_100bdba0c();
    }
    FUN_100bdb9c4();
    FUN_100b6f868();
    ppuVar14 = &PTR_s_environment_100f87378;
    FUN_100bdba78();
    if (ppuVar14 != (undefined **)0x0) {
      FUN_100bdbaf0();
      FUN_100bdba0c();
    }
    FUN_100bdb9c4();
    FUN_100b6f868();
    FUN_100b78ce8();
    if (DVar8.unknown == (char *)0x0) {
      SVar19 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      DVar8.unknown = SVar19.str;
      FUN_100bdbaf0(DVar8.unknown,SVar19.bridgeObject);
      FUN_100bdba0c();
    }
    FUN_100bdb9c4();
    FUN_100b6f868();
    FUN_100b78ce8();
    if (DVar8.unknown != (undefined *)0x0) {
      DVar8 = Foundation::Date::__unconditionallyBridgeFromObjectiveC(DVar8);
      FUN_100b6f868();
      Foundation::Date::_bridgeToObjectiveC(DVar8);
      (**(code **)(local_88 + 8))(auStack_a0 + -(lVar17 + 0xfU & 0xfffffffffffffff0),DVar3.unknown);
    }
    FUN_100bdb9c4();
    FUN_100b6f868();
    puVar9 = (undefined *)_objc_msgSend(self_00,"serialize");
    puVar11 = PTR___type_metadata_for_Swift_String_100eac208;
    FUN_100bdbaac(PTR___type_metadata_for_Any_100eae0c0,puVar9);
    FUN_100b6f868();
    local_68 = puVar6;
    FUN_100bdba80();
    DVar10.unknown = (undefined *)&local_80;
    FUN_100004594();
    param_1 = local_90;
  }
  ppuVar14 = &PTR_s_type_100f8af28;
  FUN_100bdba78();
  if (ppuVar14 != (undefined **)0x0) {
    if (DVar10.unknown == (undefined *)0x746361736e617274 &&
        ppuVar14 == (undefined **)&DAT_eb000000006e6f69) {
      FUN_100b6fbc4();
      goto LAB_100bda284;
    }
    bVar2 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)DVar10.unknown,(_StringGuts)ppuVar14,
                       (_StringComparisonResult)0x74);
    DVar10.unknown = (undefined *)CONCAT71(extraout_var,bVar2);
    FUN_100b6fbc4();
    if (bVar2) goto LAB_100bda284;
  }
  ppuVar14 = &PTR_s_type_100f8af28;
  FUN_100bdba78();
  if (ppuVar14 != (undefined **)0x0) {
    if (DVar10.unknown == (undefined *)0x6b63616264656566 &&
        ppuVar14 == (undefined **)&DAT_e800000000000000) {
      FUN_100b6fbc4();
    }
    else {
      bVar2 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)DVar10.unknown,(_StringGuts)ppuVar14,
                         (_StringComparisonResult)0x66);
      DVar10.unknown = (undefined *)CONCAT71(extraout_var_00,bVar2);
      FUN_100b6fbc4();
    }
  }
LAB_100bda284:
  if ((ulong)puVar11 >> 0x3c < 0xf) {
    FUN_100bdbaf8();
    DVar10.unknown = (undefined *)Foundation::Data::get_count(DVar10);
    puVar6 = DVar10.unknown;
  }
  else {
    puVar6 = (undefined *)0x0;
  }
  FUN_100b94080();
  if (-1 < (long)puVar6) {
    FUN_100bdba4c();
    FUN_100bdba70();
    FUN_100b6f934();
    _objc_allocWithZone(param_1);
    FUN_100bdbaf8();
    FUN_100b6d4cc();
    FUN_100bd9df0(DVar10.unknown,puVar9,puVar11);
    FUN_100bad7d4();
    uVar4 = uVar5;
    _swift_getObjectType(uVar5);
    FUN_100bdb994(uVar5,uVar4);
    FUN_100bdbaf8();
    FUN_10003bf18();
    FUN_100b56ea0(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100bda330);
  (*pcVar1)();
}



/* Address: 0x100bda330 | FUN_100bda330 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100bda330(undefined8 param_1,undefined8 param_2)

{
  NSString *pNVar1;
  ID IVar2;
  ID unaff_x20;
  
  _swift_getObjCClassFromMetadata();
  _objc_allocWithZone();
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  IVar2 = _objc_msgSend(unaff_x20,"initWithFormatted:",pNVar1);
  return IVar2;
}



/* Address: 0x100bda3a4 | _TtC6Sentry18SentryEnvelopeItem::initWithEvent: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry18SentryEnvelopeItem::initWithEvent_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100bd9e58();
  return param_3;
}



/* Address: 0x100bda3cc | FUN_100bda3cc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100bda3cc(long param_1)

{
  code *pcVar1;
  NSDictionary *pNVar2;
  ID IVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  undefined8 uVar7;
  long local_58 [2];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  FUN_100b69e00();
  uVar7 = *(undefined8 *)(param_1 + _TtC6Sentry13SentrySession::lock);
  FUN_10021b704();
  FUN_100bb5940(uVar7,param_1);
  pNVar2 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  FUN_100b6f860();
  local_58[0] = 0;
  pcVar5 = "dataWithJSONObject:options:error:";
  IVar3 = _objc_msgSend((ID)&_OBJC_CLASS___NSJSONSerialization,"dataWithJSONObject:options:error:",
                        pNVar2,0,local_58);
  FUN_100b6f934();
  lVar4 = local_58[0];
  if (IVar3 == 0) {
    Foundation::__convertNSErrorToError();
    FUN_100b6f934();
    _swift_willThrow();
    _swift_errorRelease(lVar4);
    lVar6 = 0;
  }
  else {
    FUN_100b7ca30();
    FUN_100b6f868();
    lVar6 = lVar4;
    FUN_100b6d4e0(lVar4,pcVar5);
    FUN_100bdbae4();
    FUN_10003bf2c(lVar4,pcVar5);
  }
  FUN_100b94080();
  if (-1 < lVar6) {
    uVar7 = 0x6e6f6973736573;
    FUN_100bdba70(0x6e6f6973736573,&DAT_e700000000000000,lVar6,lVar4);
    FUN_100bad7d4();
    FUN_100bdbadc();
    FUN_100bdba4c();
    FUN_100bdb9f4();
    FUN_100b6fa78();
    FUN_100b6f960();
    FUN_100bdb980();
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_48) {
      FUN_100bdba24(uVar7);
      return;
    }
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100bda590);
  (*pcVar1)();
}



/* Address: 0x100bda594 | _TtC6Sentry18SentryEnvelopeItem::initWithSession: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry18SentryEnvelopeItem::initWithSession_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100bda3cc();
  return param_3;
}



/* Address: 0x100bda5bc | FUN_100bda5bc */

void FUN_100bda5bc(undefined8 param_1,undefined8 param_2)

{
  FUN_100b69e08();
  FUN_100bda5f0(param_1,param_2);
  FUN_100b56e60();
  return;
}



/* Address: 0x100bda5f0 | FUN_100bda5f0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100bda5f0(char *param_1,char *param_2,char *param_3,void *param_4)

{
  code *pcVar1;
  Data DVar2;
  ID IVar3;
  NSString *pNVar4;
  ID IVar5;
  ulong uVar6;
  Dictionary<undefined,undefined> DVar7;
  long lVar8;
  char *pcVar9;
  __int64 _Var10;
  char *pcVar11;
  class_t *pcVar12;
  undefined **ppuVar13;
  char *pcVar14;
  _StringGuts _Var15;
  undefined *puVar16;
  char *pcVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  char *local_c0;
  undefined1 local_b8 [24];
  undefined1 auStack_a0 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long local_78;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  pcVar11 = param_2;
  FUN_100b69e00();
  FUN_10021b704();
  DVar2.unknown = param_1;
  FUN_100bdb848();
  if ((ulong)pcVar11 >> 0x3c < 0xf) {
    pcVar14 = DVar2.unknown;
    _Var15.unknown = pcVar11;
    FUN_100bdbac8();
    pcVar9 = DVar2.unknown;
    pcVar17 = pcVar11;
    if ((long)pcVar14 < 1 || pcVar14 <= param_2) {
LAB_100bdab60:
      FUN_100b6d4cc(DVar2.unknown,pcVar11);
      FUN_100bdbaa0();
      _Var10 = Foundation::Data::get_count(DVar2);
      if (_Var10 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100bdad08);
        (*pcVar1)();
      }
      _objc_msgSend((ID)param_1,"filename");
      SVar21 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      FUN_100b6f934();
      ppuVar13 = &PTR_s_contentType_100f86b58;
      pcVar11 = param_1;
      FUN_100bdb8b4(param_1,&PTR_s_contentType_100f86b58);
      IVar3 = _objc_msgSend((ID)param_1,"attachmentType");
      pcVar12 = &objc::class_t::SentryEnvelopeAttachmentHeader;
      _objc_allocWithZone(&objc::class_t::SentryEnvelopeAttachmentHeader);
      uVar19 = 0x656d686361747461;
      FUN_100b6ca28(pcVar12,0x656d686361747461,0xea0000000000746e,_Var10,SVar21.str,
                    SVar21.bridgeObject,pcVar11,ppuVar13,IVar3);
      FUN_100bad7d4();
      FUN_100bdbadc();
      FUN_10021b704();
      FUN_100bdbaa0();
      FUN_100b6d4e0();
      FUN_100bd9df0(uVar19,pcVar9,pcVar17);
      FUN_100bdbaa0();
      FUN_10003bf18();
      FUN_100b6fa78();
      FUN_100bdbaa0();
      FUN_10003bf2c();
      FUN_100bdbab4();
      FUN_100b6f960();
      FUN_100bdb980();
      goto LAB_100bdacc8;
    }
    FUN_100b6faa8();
    FUN_100b6f870();
    FUN_100bdba90();
    Swift::_StringGuts::grow(0x99,_Var15);
    FUN_100bdb9a0("m allowed attachment size of ",0xd000000000000023);
    _objc_msgSend((ID)param_1,"filename");
    SVar21 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    FUN_100b6f868();
    SVar22.bridgeObject = param_4;
    SVar22.str = param_3;
    Swift::String::append(SVar21,SVar22);
    FUN_100b6fb14();
    FUN_100bdb9a0("ent with filename \'");
    FUN_100bdbac8();
    puVar16 = 
    PTR___protocol_witness_table_for_Swift_Int___Swift_CustomStringConvertible_in_Swift_100eac748;
    FUN_100bdba58(PTR___type_metadata_for_Swift_Int_100eac6f8,
                  PTR___protocol_witness_table_for_Swift_Int___Swift_CustomStringConvertible_in_Swift_100eac748
                 );
    FUN_100bdb9d0();
    _swift_bridgeObjectRelease(puVar16);
    FUN_100bdb9a0(" size of the it located at \'",0xd00000000000003d);
    FUN_100bdba58(PTR___type_metadata_for_Swift_UInt_100eacb00,
                  PTR___protocol_witness_table_for_Swift_UInt___Swift_CustomStringConvertible_in_Swift_100eacb20
                 );
    FUN_100bdb9d0();
    FUN_100b6fbc4();
    FUN_100bdb9d8();
    FUN_100bdbb04(
                 "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Swift/Tools/SentryEnvelopeItem.swift"
                 );
    FUN_100bdba18(1);
    FUN_100b84df8();
    FUN_100b6fbc4();
    FUN_10003bf18(DVar2.unknown,pcVar11);
LAB_100bdacb8:
    FUN_100b6fce4();
  }
  else {
    ppuVar13 = &PTR_s_path_100f88ab8;
    FUN_100bdb8b4(param_1);
    if (ppuVar13 == (undefined **)0x0) {
      FUN_100b6faa8();
LAB_100bdac88:
      FUN_100b6f870();
      FUN_100bdb9fc("error for event with message: \'");
      FUN_100bdb9ac();
      FUN_100b84df8();
      goto LAB_100bdacb8;
    }
    IVar3 = _objc_msgSend((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
    pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    local_90 = 0;
    pcVar14 = "attributesOfItemAtPath:error:";
    puVar18 = &local_90;
    IVar5 = _objc_msgSend(IVar3,"attributesOfItemAtPath:error:");
    FUN_100b6f868();
    uVar19 = local_90;
    if (IVar5 != 0) {
      uVar6 = 0;
      FUN_100b65000();
      FUN_100b97ce4();
      DVar7 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
      if (*(long *)(DVar7.unknown + 0x10) == 0) {
        uStack_88 = 0;
        local_90 = 0;
        local_78 = 0;
        uStack_80 = 0;
      }
      else {
        lVar8 = *(long *)PTR__NSFileSize_100ea7bc8;
        _swift_bridgeObjectRetain(DVar7.unknown);
        FUN_100b6ccd8(lVar8);
        if ((uVar6 & 1) == 0) {
          FUN_100b6f860();
          uStack_88 = 0;
          local_90 = 0;
          local_78 = 0;
          uStack_80 = 0;
          FUN_100b6fbcc();
        }
        else {
          FUN_10000cbfc(*(long *)(DVar7.unknown + 0x38) + lVar8 * 0x20,&local_90);
          FUN_100b6fbcc();
          FUN_100b6f860();
        }
      }
      FUN_100b6f860();
      if (local_78 == 0) {
        FUN_100013954(&local_90);
      }
      else {
        uVar6 = 0;
        _Var15.unknown = (undefined *)&local_90;
        pcVar14 = PTR___type_metadata_for_Any_100eae0c0 + 8;
        puVar16 = PTR___type_metadata_for_Swift_UInt64_100eade90;
        _swift_dynamicCast();
        if (((uVar6 & 1) != 0) && (param_2 < local_c0)) {
          FUN_100b6faa8();
          FUN_100b6f870();
          FUN_100bdba90();
          Swift::_StringGuts::grow(0x8d,_Var15);
          FUN_100bdb9a0("chment with path: ",0xd00000000000003c);
          FUN_100bdba60();
          FUN_100b6fb14();
          SVar21.bridgeObject = &DAT_e700000000000000;
          SVar21.str = (char *)0x20687469772027;
          SVar24.bridgeObject = puVar16;
          SVar24.str = pcVar14;
          Swift::String::append(SVar21,SVar24);
          FUN_100bdba58(PTR___type_metadata_for_Swift_UInt64_100eade90,
                        PTR___protocol_witness_table_for_Swift_UInt64___Swift_CustomStringConvertible_in_Swift_100eadeb8
                       );
          FUN_100bdb9d0();
          FUN_100b6f8ec();
          FUN_100bdb9a0(" size of the it located at \'",0xd00000000000003d);
          FUN_100bdba58(PTR___type_metadata_for_Swift_UInt_100eacb00,
                        PTR___protocol_witness_table_for_Swift_UInt___Swift_CustomStringConvertible_in_Swift_100eacb20
                       );
          FUN_100bdb9d0();
          FUN_100b6f8ec();
          FUN_100bdb9d8();
          FUN_100bdbb04(
                       "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Swift/Tools/SentryEnvelopeItem.swift"
                       );
          FUN_100bdba18(1);
          FUN_100b6fa68();
          FUN_100bdbab4();
          FUN_100b6f8ec(0);
          goto LAB_100bdacbc;
        }
      }
      pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      FUN_100b6fb14();
      pcVar17 = "contentsAtPath:";
      pcVar9 = (char *)_objc_msgSend(IVar3,"contentsAtPath:",pNVar4);
      FUN_100bc0704(pcVar9);
      if (DVar7.unknown != (undefined *)0x0) {
        FUN_100b7ca30();
        FUN_100b6f868();
        FUN_100b97e4c();
        FUN_100bdbaa0();
        FUN_100b6d4e0();
        goto LAB_100bdab60;
      }
      FUN_100b6faa8();
      FUN_100b97e4c();
      goto LAB_100bdac88;
    }
    FUN_100bad7d4(local_90);
    Foundation::__convertNSErrorToError();
    FUN_100b6f868();
    _swift_willThrow();
    FUN_100b97e4c();
    FUN_100b6f870();
    FUN_100bdba90();
    Swift::_StringGuts::grow(0x3f,(_StringGuts)pcVar14);
    FUN_100bdb9a0("/SentryEnvelopeItem.swift",&DAT_d000000000000032);
    FUN_100bdba60();
    FUN_100b6fb14();
    SVar20.bridgeObject = (void *)0xe900000000000020;
    SVar20.str = (char *)0x3a726f727245202e;
    SVar23.bridgeObject = puVar18;
    SVar23.str = (char *)pNVar4;
    Swift::String::append(SVar20,SVar23);
    _swift_getErrorValue(uVar19,auStack_a0,local_b8);
    SVar21 = (extension_Foundation)::Swift::Error::get_localizedDescription();
    FUN_100bdb9d0(SVar21.str,SVar21.bridgeObject);
    FUN_100b6fbc4();
    FUN_100bdbb04(
                 "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Swift/Tools/SentryEnvelopeItem.swift"
                 );
    FUN_100bdba18(4);
    FUN_100b6fa68();
    FUN_100bdbab4();
    FUN_100b6fbc4();
    _swift_errorRelease(uVar19);
  }
LAB_100bdacbc:
  FUN_100b6f960();
  FUN_100bdb980();
  uVar19 = 0;
LAB_100bdacc8:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return uVar19;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100bdad0c | _TtC6Sentry18SentryEnvelopeItem::initWithAttachment:maxAttachmentSize: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID _TtC6Sentry18SentryEnvelopeItem::initWithAttachment_maxAttachmentSize_
             (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4)

{
  FUN_100bda5f0(param_3,param_4);
  return param_3;
}



/* Address: 0x100bdad3c | FUN_100bdad3c */

void FUN_100bdad3c(void)

{
  FUN_100b69e08();
  FUN_100b69e84();
  FUN_100bdad60();
  FUN_100b56e88();
  return;
}



/* Address: 0x100bdad60 | FUN_100bdad60 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100bdad60(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  NSDictionary *pNVar4;
  ID IVar5;
  long lVar6;
  long lVar7;
  long local_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  FUN_100b69e00();
  puVar2 = &_OBJC_CLASS___NSJSONSerialization;
  FUN_10021b704();
  puVar3 = puVar2;
  FUN_100b7f208();
  pNVar4 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  FUN_100b6f860();
  local_50 = 0;
  IVar5 = _objc_msgSend((ID)&_OBJC_CLASS___NSJSONSerialization,"dataWithJSONObject:options:error:",
                        pNVar4,0,&local_50);
  FUN_100bc0704(IVar5);
  if (puVar3 == (undefined *)0x0) {
    lVar6 = local_50;
    Foundation::__convertNSErrorToError();
    FUN_100b6f934();
    _swift_willThrow();
    FUN_100b6f870();
    lVar7 = 4;
    FUN_100b84df8(4,0xd000000000000021,0x8000000100dd10f0,0xd000000000000059,0x8000000100dd0f70,0x9f
                 );
    FUN_100b94080();
    FUN_100b74a20();
    FUN_100b6c914();
    FUN_100b6fce4();
    FUN_100bdbad4();
    FUN_100bdba4c();
    FUN_100bdb9f4();
    _swift_errorRelease(lVar6);
  }
  else {
    lVar7 = local_50;
    FUN_100b7ca30();
    FUN_100b6f868();
    FUN_100b94080();
    FUN_100bdbae4();
    if (lVar7 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100bdaf64);
      (*pcVar1)();
    }
    FUN_100b74a20();
    FUN_100b6c914();
    FUN_100b6fce4();
    FUN_100bdbad4();
    FUN_100bdba4c();
    FUN_100bdb9f4();
  }
  FUN_100b6faa8();
  puVar3 = puVar2;
  _swift_getObjectType(puVar2);
  FUN_100bdb994(puVar2,puVar3);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_48) {
    FUN_100bdba24(lVar7);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100bdaf68 | _TtC6Sentry18SentryEnvelopeItem::initWithClientReport: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry18SentryEnvelopeItem::initWithClientReport_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100bdad60();
  return param_3;
}



/* Address: 0x100bdaf90 | FUN_100bdaf90 */

void FUN_100bdaf90(void)

{
  FUN_100b69e08();
  FUN_100ba42f0();
  FUN_100bdafc8();
  FUN_100b56e60();
  return;
}



/* Address: 0x100bdafc8 | FUN_100bdafc8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100bdb3b0) */

void FUN_100bdafc8(ID param_1,undefined8 param_2,undefined *param_3)

{
  NSDataReadingOptions contentsOf;
  code *pcVar1;
  URL UVar2;
  undefined8 uVar3;
  undefined8 ****ppppuVar4;
  undefined *puVar5;
  URL UVar6;
  undefined *puVar7;
  NSData *pNVar8;
  URL UVar9;
  NSURL *pNVar10;
  NSDictionary *pNVar11;
  Data DVar12;
  undefined8 ****ppppuVar13;
  undefined8 ****ppppuVar14;
  char *pcVar15;
  undefined8 ****ppppuVar16;
  ulong uVar17;
  ID IVar18;
  long lVar19;
  undefined *puVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  undefined1 auStack_160 [8];
  undefined *local_158;
  undefined *local_150;
  undefined *local_148;
  undefined8 local_140;
  code *local_138;
  undefined8 local_130;
  ID local_128;
  undefined *local_120;
  ID local_118;
  NSDataReadingOptions local_110;
  undefined8 ***local_108 [15];
  undefined8 ***local_90;
  undefined8 uStack_88;
  undefined *local_78;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  IVar18 = param_1;
  UVar9.unknown = param_3;
  FUN_100b69e00();
  local_118 = IVar18;
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar19 = *(long *)(UVar2.unknown + -8);
  uVar17 = *(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_110.unknown = auStack_160 + -uVar17 + -uVar17;
  uVar3 = 0;
  FUN_100b6f5fc();
  FUN_10021b704();
  ppppuVar4 = (undefined8 ****)_objc_msgSend(param_1,"serialize");
  puVar7 = PTR___type_metadata_for_Swift_String_100eac208;
  FUN_100bdbaac(PTR___type_metadata_for_Any_100eae0c0);
  FUN_100b6f868();
  puVar5 = &DAT_101044968;
  FUN_100b6730c();
  DVar12.unknown = (undefined *)&local_90;
  local_90 = ppppuVar4;
  local_78 = puVar5;
  FUN_100b6a3a4();
  UVar6.unknown = (undefined *)&local_90;
  puVar5 = puVar7;
  FUN_100004594();
  if ((ulong)puVar7 >> 0x3c < 0xf) {
    local_130 = uVar3;
    local_128 = param_1;
    local_120 = puVar7;
    FUN_100bcdfe0();
    if (0xe < (ulong)puVar5 >> 0x3c) {
      FUN_100b6faa8();
      FUN_100b6f870();
      FUN_100bdb9fc("pe item. Event will be nil.");
      FUN_100bdb9ac();
      FUN_100b84df8();
      FUN_10003bf18(DVar12.unknown,local_120);
      goto LAB_100bdb194;
    }
    local_140 = param_2;
    Foundation::URL::deletingPathExtension(UVar6);
    contentsOf.unknown = local_110.unknown;
    SVar21.bridgeObject = (void *)0xe300000000000000;
    SVar21.str = (char *)0x746164;
    Foundation::URL::appendingPathExtension(SVar21,UVar9);
    local_138 = *(code **)(lVar19 + 8);
    (*local_138)(auStack_160 + -uVar17,UVar2.unknown);
    puVar7 = &DAT_101047f70;
    FUN_100b6730c();
    _swift_initStackObject();
    puVar20 = local_120;
    *(undefined8 *)(puVar7 + 0x18) = 6;
    *(undefined8 *)(puVar7 + 0x10) = 3;
    *(undefined8 *)(puVar7 + 0x20) = 0x655f79616c706572;
    *(undefined8 *)(puVar7 + 0x28) = 0xec000000746e6576;
    pNVar8 = Foundation::Data::_bridgeToObjectiveC(DVar12);
    *(NSData **)(puVar7 + 0x30) = pNVar8;
    *(undefined8 *)(puVar7 + 0x38) = 0xd000000000000010;
    *(undefined8 *)(puVar7 + 0x40) = 0x8000000100dd11d0;
    local_150 = UVar6.unknown;
    local_148 = puVar5;
    UVar9.unknown = Foundation::Data::_bridgeToObjectiveC(UVar6.unknown);
    *(undefined **)(puVar7 + 0x48) = UVar9.unknown;
    *(undefined8 *)(puVar7 + 0x50) = 0x765f79616c706572;
    *(undefined8 *)(puVar7 + 0x58) = 0xec0000006f656469;
    pNVar10 = Foundation::URL::_bridgeToObjectiveC(UVar9);
    *(NSURL **)(puVar7 + 0x60) = pNVar10;
    FUN_100b6730c(&DAT_101047f78);
    FUN_100bdbb10();
    UVar9.unknown = (undefined *)Swift::Dictionary::_init();
    FUN_100bdbb10();
    pNVar11 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease();
    pNVar10 = Foundation::URL::_bridgeToObjectiveC(UVar9);
    IVar18 = _objc_msgSend((ID)&objc::class_t::SentryMsgPackSerializer,
                           "serializeDictionaryToMessagePack:intoFile:",pNVar11,pNVar10);
    FUN_100b6fce4();
    FUN_100b6f868();
    pcVar1 = local_138;
    if ((int)IVar18 != 0) {
      uVar17 = 0;
      local_158 = DVar12.unknown;
      DVar12 = Foundation::Data::_init(contentsOf);
      UVar9.unknown = (undefined *)_objc_msgSend(&_OBJC_CLASS___NSFileManager,"defaultManager");
      pNVar10 = Foundation::URL::_bridgeToObjectiveC(UVar9);
      local_90 = (undefined8 ****)0x0;
      pcVar15 = "removeItemAtURL:error:";
      ppppuVar16 = &local_90;
      ppppuVar13 = (undefined8 ****)_objc_msgSend((ID)UVar9.unknown,"removeItemAtURL:error:");
      ppppuVar14 = ppppuVar13;
      FUN_100b6f934();
      FUN_100b6f868();
      ppppuVar4 = (undefined8 ****)local_90;
      if ((int)ppppuVar13 == 0) {
        FUN_10021b704();
        Foundation::__convertNSErrorToError();
        FUN_100b6f934();
        _swift_willThrow();
        FUN_100b6f870();
        local_90 = (undefined8 ****)0x0;
        uStack_88 = 0xe000000000000000;
        ppppuVar13 = &local_90;
        Swift::_StringGuts::grow(0x37,(_StringGuts)pcVar15);
        SVar22.bridgeObject = (void *)0x8000000100dd1230;
        SVar22.str = (char *)0xd000000000000035;
        SVar23.bridgeObject = ppppuVar16;
        SVar23.str = (char *)pNVar10;
        Swift::String::append(SVar22,SVar23);
        puVar5 = &DAT_101044978;
        local_108[0] = ppppuVar4;
        FUN_100b6730c(&DAT_101044978);
        Swift::__print_unlocked
                  (local_108,&local_90,puVar5,
                   PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
                   PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
                  );
        uVar3 = uStack_88;
        FUN_100bdbb04(
                     "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Swift/Tools/SentryEnvelopeItem.swift"
                     );
        FUN_100bdba18(4);
        FUN_100b6fa68();
        _swift_bridgeObjectRelease(uVar3);
        puVar20 = local_120;
        _swift_errorRelease(ppppuVar4);
        ppppuVar14 = ppppuVar4;
      }
      else {
        FUN_10021b704();
        ppppuVar13 = ppppuVar4;
      }
      if (uVar17 >> 0x3c < 0xf) {
        FUN_100b6d4e0(DVar12.unknown,uVar17);
        ppppuVar14 = (undefined8 ****)Foundation::Data::get_count(DVar12);
        FUN_100b69e84();
        FUN_10003bf18();
      }
      else {
        ppppuVar13 = (undefined8 ****)0x0;
      }
      FUN_100b94080();
      if ((long)ppppuVar13 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100bdb690);
        (*pcVar1)();
      }
      FUN_100bdba70(0x765f79616c706572,0xec0000006f656469,ppppuVar13,ppppuVar14);
      FUN_100b6faa8();
      IVar18 = local_118;
      _objc_allocWithZone(local_118);
      FUN_100bdba4c();
      FUN_100bdb9f4();
      FUN_10003bf18(local_158,puVar20);
      FUN_100bdba38();
      FUN_100b6f934();
      FUN_100bdbabc();
      (*pcVar1)(param_3,UVar2.unknown);
      (*pcVar1)(contentsOf.unknown,UVar2.unknown);
      FUN_100b6f960();
      FUN_100bdb980();
      goto LAB_100bdb1b8;
    }
    FUN_100b6faa8();
    FUN_100b6f870();
    FUN_100bdb9fc("replay_recording");
    FUN_100bdb9ac();
    FUN_100b84df8();
    FUN_10003bf18(DVar12.unknown,puVar20);
    FUN_100bdba38();
    FUN_100bdbabc(0);
    pcVar1 = local_138;
    (*local_138)(param_3,UVar2.unknown);
    (*pcVar1)(contentsOf.unknown,UVar2.unknown);
  }
  else {
    FUN_100b6faa8();
    FUN_100b6f870();
    FUN_100bdb9fc("ze client report.");
    FUN_100bdb9ac();
    FUN_100b84df8();
LAB_100bdb194:
    FUN_100b6fbcc(0);
    (**(code **)(lVar19 + 8))(param_3,UVar2.unknown);
  }
  FUN_100b6f960();
  FUN_100bdb980();
  IVar18 = 0;
LAB_100bdb1b8:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  FUN_100b56ea0(IVar18);
  return;
}



/* Address: 0x100bdb694 | _TtC6Sentry18SentryEnvelopeItem::initWithReplayEvent:replayRecording:video: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x28 bytes */

ID _TtC6Sentry18SentryEnvelopeItem::initWithReplayEvent_replayRecording_video_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  URL UVar1;
  long lVar2;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar2 = *(long *)(*(long *)(UVar1.unknown + -8) + 0x40);
  Foundation::URL::__unconditionallyBridgeFromObjectiveC((URL)param_5);
  FUN_100bdafc8(param_3,param_4,&stack0xffffffffffffffc0 + -(lVar2 + 0xfU & 0xfffffffffffffff0));
  return param_3;
}



/* Address: 0x100bdb728 | FUN_100bdb728 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100bdb728(void)

{
  long unaff_x20;
  String SVar1;
  
  _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry18SentryEnvelopeItem::header),"type");
  SVar1 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  FUN_100b6faa8();
  FUN_100b56e60(SVar1.str,SVar1.bridgeObject);
  return;
}



/* Address: 0x100bdb77c | _TtC6Sentry18SentryEnvelopeItem::type */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry18SentryEnvelopeItem::type(ID param_1,SEL param_2)

{
  NSString *pNVar1;
  
  FUN_100bdb728(param_1);
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  return (ID)pNVar1;
}



/* Address: 0x100bdb7d4 | FUN_100bdb7d4 */

void FUN_100bdb7d4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("Sentry.SentryEnvelopeItem",0x19,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100bdb800);
  (*pcVar1)();
}



/* Address: 0x100bdb800 | _TtC6Sentry18SentryEnvelopeItem::init */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry18SentryEnvelopeItem::init(ID param_1,SEL param_2)

{
  ID IVar1;
  
  FUN_100bdb7d4();
  IVar1 = *(ID *)(param_1 + data);
  FUN_10003bf18(IVar1,((ID *)(param_1 + data))[1]);
  return IVar1;
}



/* Address: 0x100bdb80c | _TtC6Sentry18SentryEnvelopeItem::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry18SentryEnvelopeItem::_cxx_destruct(ID param_1,SEL param_2)

{
  FUN_10003bf18(*(undefined8 *)(param_1 + data),((undefined8 *)(param_1 + data))[1]);
  return;
}



/* Address: 0x100bdb848 | FUN_100bdb848 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100bdb848(ID param_1)

{
  Data DVar1;
  
  DVar1.unknown = (undefined *)_objc_msgSend(param_1,"data");
  if (DVar1.unknown != (undefined *)0x0) {
    Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar1);
    FUN_100b6f934();
  }
  FUN_100b6faf0();
  FUN_100b56e60();
  return;
}



/* Address: 0x100bdb89c | FUN_100bdb89c */

void FUN_100bdb89c(undefined8 param_1)

{
  FUN_100bdb8b4(param_1,&PTR_s_path_100f88ab8);
  return;
}



/* Address: 0x100bdb8a8 | FUN_100bdb8a8 */

void FUN_100bdb8a8(undefined8 param_1)

{
  FUN_100bdb8b4(param_1,&PTR_s_contentType_100f86b58);
  return;
}



/* Address: 0x100bdb8b4 | FUN_100bdb8b4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100bdb8b4(ID param_1,undefined8 *param_2)

{
  ID IVar1;
  String SVar2;
  
  IVar1 = _objc_msgSend(param_1,(SEL)*param_2);
  if (IVar1 != 0) {
    SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    FUN_100b6f934(SVar2.str,SVar2.bridgeObject);
  }
  FUN_100b6faf0();
  FUN_100b56e60();
  return;
}



/* Address: 0x100bdb904 | FUN_100bdb904 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100bdb904(undefined8 param_1,undefined8 param_2,ID param_3)

{
  NSString *pNVar1;
  
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  _objc_msgSend(param_3,"setPlatform:",pNVar1);
  return 0;
}



/* Address: 0x100bdb954 | FUN_100bdb954 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100bdb954(void)

{
  return ZEXT816(0x100fa4b90);
}



/* Address: 0x100bdb974 | FUN_100bdb974 */

void FUN_100bdb974(undefined8 param_1,undefined8 param_2)

{
  _swift_lookUpClassMethod(param_1,param_2,&TargetClassDescriptor_100cd0320);
  return;
}



/* Address: 0x100bdb980 | FUN_100bdb980 */

void FUN_100bdb980(void)

{
  _swift_deallocPartialClassInstance();
  return;
}



/* Address: 0x100bdb994 | FUN_100bdb994 */

void FUN_100bdb994(undefined8 param_1,undefined8 param_2)

{
  _swift_deallocPartialClassInstance(param_1,param_2,0x20,7);
  return;
}



/* Address: 0x100bdb9a0 | FUN_100bdb9a0 */

void FUN_100bdb9a0(ulong param_1,char *param_2,undefined8 param_3,char *param_4,void *param_5)

{
  String SVar1;
  String SVar2;
  
  SVar1.bridgeObject = (void *)(param_1 | 0x8000000000000000);
  SVar1.str = param_2;
  SVar2.bridgeObject = param_5;
  SVar2.str = param_4;
  Swift::String::append(SVar1,SVar2);
  return;
}



/* Address: 0x100bdb9ac | FUN_100bdb9ac */

undefined8 FUN_100bdb9ac(void)

{
  return 4;
}



/* Address: 0x100bdb9c4 | FUN_100bdb9c4 */

void FUN_100bdb9c4(undefined8 param_1,SEL param_2)

{
  ID unaff_x27;
  
  _objc_msgSend(unaff_x27,param_2);
  return;
}



/* Address: 0x100bdb9d0 | FUN_100bdb9d0 */

void FUN_100bdb9d0(char *param_1,void *param_2,char *param_3,void *param_4)

{
  String SVar1;
  String SVar2;
  
  SVar1.bridgeObject = param_2;
  SVar1.str = param_1;
  SVar2.bridgeObject = param_4;
  SVar2.str = param_3;
  Swift::String::append(SVar1,SVar2);
  return;
}



/* Address: 0x100bdb9d8 | FUN_100bdb9d8 */

void FUN_100bdb9d8(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  String SVar1;
  String SVar2;
  
  SVar1.bridgeObject = &DAT_e700000000000000;
  SVar1.str = (char *)0x2e736574796220;
  SVar2.bridgeObject = param_4;
  SVar2.str = param_3;
  Swift::String::append(SVar1,SVar2);
  return;
}



/* Address: 0x100bdb9f4 | FUN_100bdb9f4 */

void FUN_100bdb9f4(void)

{
  FUN_100bd9df0();
  return;
}



/* Address: 0x100bdb9fc | FUN_100bdb9fc */

void FUN_100bdb9fc(void)

{
  return;
}


