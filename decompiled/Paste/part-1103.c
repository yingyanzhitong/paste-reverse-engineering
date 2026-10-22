/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b9a1f0 | FUN_100b9a1f0 */

void FUN_100b9a1f0(undefined8 param_1,ulong param_2)

{
  FUN_100071370(param_1,param_2 & 0xffffffff | 0xee00676e00000000);
  return;
}



/* Address: 0x100b9a1fc | FUN_100b9a1fc */

void FUN_100b9a1fc(void)

{
  undefined1 in_w8;
  long in_x9;
  long unaff_x21;
  
  *(undefined1 *)(unaff_x21 + in_x9) = in_w8;
  return;
}



/* Address: 0x100b9a208 | FUN_100b9a208 */

void FUN_100b9a208(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_allocWithZone();
  FUN_100b9a250(param_1,param_2,param_3);
  return;
}



/* Address: 0x100b9a250 | FUN_100b9a250 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100b9a250(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  ID IVar3;
  long extraout_x8;
  long extraout_x9;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  _swift_getObjectType();
  puVar2 = &DAT_1010458b0;
  FUN_100b6730c();
  FUN_100b6f9e0(*(undefined8 *)(*(long *)(puVar2 + -8) + 0x40));
  *(long *)(unaff_x20 + SentrySpotlightTransport::options) = param_1;
  *(undefined8 *)(unaff_x20 + SentrySpotlightTransport::requestManager) = param_2;
  *(undefined8 *)(unaff_x20 + SentrySpotlightTransport::requestBuilder) = param_3;
  param_1 = param_1 + SentryOptions::spotlightUrl;
  FUN_100b78ca0(param_1,auStack_68);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _swift_unknownObjectRetain(param_2);
  _swift_bridgeObjectRetain(uVar1);
  Foundation::URL::_init();
  _swift_bridgeObjectRelease(uVar1);
  FUN_100b9a3a0(extraout_x9 - extraout_x8,unaff_x20 + SentrySpotlightTransport::apiURL);
  IVar3 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff88,"init");
  _swift_unknownObjectRelease(param_2);
  FUN_100b6fce4();
  return IVar3;
}



/* Address: 0x100b9a3a0 | FUN_100b9a3a0 */

undefined8 FUN_100b9a3a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_1010458b0;
  FUN_100b6730c();
  (**(code **)(*(long *)(puVar1 + -8) + 0x20))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100b9a3e8 | SentrySpotlightTransport::initWithOptions:requestManager:requestBuilder: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x28 bytes */

ID SentrySpotlightTransport::initWithOptions_requestManager_requestBuilder_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  _swift_unknownObjectRetain(param_4);
  FUN_100b9a250(param_3,param_4,param_5);
  return param_3;
}



/* Address: 0x100b9a444 | FUN_100b9a444 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100b9a84c) */

void FUN_100b9a444(long param_1,undefined8 param_2,undefined8 param_3,void *param_4)

{
  String *pSVar1;
  code *pcVar2;
  URLRequest_conflict UVar3;
  undefined *puVar4;
  URL UVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  URLRequest_conflict UVar10;
  NSURLRequest *pNVar11;
  void *pvVar12;
  _StringGuts _Var13;
  URL UVar14;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  undefined8 uVar15;
  ID self;
  long unaff_x20;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  undefined *local_a8;
  undefined8 local_a0;
  code *local_98;
  undefined *puStack_90;
  code *local_88;
  undefined8 uStack_80;
  undefined *local_70;
  undefined8 uStack_68;
  
  UVar3 = Foundation::URLRequest::typeMetadataAccessor();
  lVar17 = *(long *)(UVar3.unknown + -8);
  FUN_100b6f9e0(*(undefined8 *)(lVar17 + 0x40));
  lVar21 = extraout_x9 - extraout_x8;
  puVar18 = (undefined *)(lVar21 - extraout_x8);
  puVar4 = &DAT_1010458b0;
  FUN_100b6730c();
  FUN_100b6f9e0(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  lVar16 = extraout_x9_00 - extraout_x8_00;
  UVar5 = Foundation::URL::typeMetadataAccessor();
  lVar19 = *(long *)(UVar5.unknown + -8);
  FUN_100b6f9e0(*(undefined8 *)(lVar19 + 0x40));
  FUN_10001830c(unaff_x20 + SentrySpotlightTransport::apiURL,lVar16);
  _Var13.unknown = &DAT_00000001;
  lVar6 = lVar16;
  UVar14 = UVar5;
  FUN_1000c9ff0();
  if ((int)lVar6 == 1) {
    FUN_100054698(lVar16);
    FUN_100b84dac(0);
    local_a8 = (undefined *)0x0;
    local_a0 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x5e,_Var13);
    local_70 = local_a8;
    uStack_68 = local_a0;
    SVar23.bridgeObject = (void *)0x8000000100dcce10;
    SVar23.str = (char *)0xd00000000000005c;
    SVar24.bridgeObject = param_4;
    SVar24.str = UVar14.unknown;
    Swift::String::append(SVar23,SVar24);
    pSVar1 = (String *)
             (*(long *)(unaff_x20 + SentrySpotlightTransport::options) + SentryOptions::spotlightUrl
             );
    FUN_100b78ca0(pSVar1,&local_a8);
    pvVar12 = pSVar1->bridgeObject;
    SVar23 = *pSVar1;
    _swift_bridgeObjectRetain(pvVar12);
    SVar25.bridgeObject = param_4;
    SVar25.str = UVar14.unknown;
    Swift::String::append(SVar23,SVar25);
    _swift_bridgeObjectRelease(pvVar12);
    uVar15 = uStack_68;
    FUN_100b84df8(3,local_70,uStack_68,0xd000000000000064,0x8000000100dcce70,0x19);
    _swift_bridgeObjectRelease(uVar15);
  }
  else {
    (**(code **)(lVar19 + 0x20))(extraout_x9_01 - extraout_x8_01,lVar16);
    uVar22 = *(ulong *)(param_1 + _TtC6Sentry14SentryEnvelope::items);
    uVar7 = uVar22;
    thunk_FUN_100b6cd50();
    puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (uVar7 != 0) {
      if ((long)uVar7 < 1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100b9a9f4);
        (*pcVar2)();
      }
      _swift_bridgeObjectRetain(uVar22);
      uVar20 = 0;
      UVar10 = UVar3;
      puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
      UVar14 = UVar5;
      do {
        if ((uVar22 & 0xc000000000000001) == 0) {
          uVar8 = *(ulong *)(uVar22 + uVar20 * 8 + 0x20);
        }
        else {
          uVar8 = uVar20;
          FUN_100b6d3d4(uVar20,uVar22);
        }
        lVar6 = _TtC6Sentry18SentryEnvelopeItem::header;
        _objc_msgSend(*(ID *)(uVar8 + _TtC6Sentry18SentryEnvelopeItem::header),"type");
        SVar23 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        FUN_100b9adf4(SVar23.str,SVar23.bridgeObject);
        if (UVar10.unknown == (undefined *)0x746e657665 && UVar14.unknown == &DAT_e500000000000000)
        {
LAB_100b9a748:
          _swift_bridgeObjectRelease(UVar14.unknown);
LAB_100b9a750:
          puVar9 = puVar4;
          _swift_isUniquelyReferenced_nonNull_native();
          local_a8 = puVar4;
          if (((ulong)puVar9 & 1) == 0) {
            FUN_100b69630(0,*(long *)(puVar4 + 0x10) + 1);
          }
                    /* WARNING: Load size is inaccurate */
          UVar10.unknown = local_a8[0x10];
          UVar14.unknown = UVar10.unknown + 1;
          if ((undefined *)(*(ulong *)(local_a8 + 0x18) >> 1) <= UVar10.unknown) {
            FUN_100b69630(1 < *(ulong *)(local_a8 + 0x18),UVar14.unknown);
          }
          *(undefined **)(local_a8 + 0x10) = UVar14.unknown;
          *(ulong *)(local_a8 + (long)UVar10.unknown * 8 + 0x20) = uVar8;
          puVar4 = local_a8;
        }
        else {
          Swift::_stringCompareWithSmolCheck
                    ((_StringGuts)UVar10.unknown,(_StringGuts)UVar14.unknown,
                     (_StringComparisonResult)0x65);
          FUN_100b9ae04();
          if (((ulong)UVar10.unknown & 1) != 0) goto LAB_100b9a750;
          _objc_msgSend(*(ID *)(uVar8 + lVar6),"type");
          SVar23 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          FUN_100b9adf4(SVar23.str,SVar23.bridgeObject);
          if (UVar10.unknown == (undefined *)0x746361736e617274 &&
              UVar14.unknown == &DAT_eb000000006e6f69) goto LAB_100b9a748;
          Swift::_stringCompareWithSmolCheck
                    ((_StringGuts)UVar10.unknown,(_StringGuts)UVar14.unknown,
                     (_StringComparisonResult)0x74);
          FUN_100b9ae04();
          if (((ulong)UVar10.unknown & 1) != 0) goto LAB_100b9a750;
          FUN_100b6fce4();
        }
        uVar20 = uVar20 + 1;
      } while (uVar7 != uVar20);
      _swift_bridgeObjectRelease(uVar22);
    }
    uVar15 = *(undefined8 *)(param_1 + _TtC6Sentry14SentryEnvelope::header);
    FUN_100ba7bd8(0);
    _objc_allocWithZone();
    FUN_100ba7a24(uVar15,puVar4);
    FUN_100bcf290(lVar21);
    UVar10.unknown = puVar18;
    (**(code **)(lVar17 + 0x20))(puVar18,lVar21,UVar3.unknown);
    self = *(ID *)(unaff_x20 + SentrySpotlightTransport::requestManager);
    pNVar11 = Foundation::URLRequest::_bridgeToObjectiveC(UVar10);
    local_88 = FUN_100b9a9f4;
    uStack_80 = 0;
    local_a8 = PTR___NSConcreteStackBlock_100ea82a0;
    local_a0 = 0x42000000;
    local_98 = FUN_100b9aaf0;
    puStack_90 = &DAT_100f39090;
    pvVar12 = __Block_copy(&local_a8);
    _objc_msgSend(self,"addRequest:completionHandler:",pNVar11,pvVar12);
    __Block_release(pvVar12);
    FUN_100b6fce4();
    (**(code **)(lVar17 + 8))(puVar18,UVar3.unknown);
    (**(code **)(lVar19 + 8))(extraout_x9_01 - extraout_x8_01,UVar5.unknown);
  }
  return;
}



/* Address: 0x100b9a9f4 | FUN_100b9a9f4 */

void FUN_100b9a9f4(undefined8 param_1,undefined *param_2,char *param_3,void *param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  _StringGuts _Var3;
  String SVar4;
  String SVar5;
  undefined *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (param_2 != (undefined *)0x0) {
    _Var3.unknown = param_2;
    FUN_100b84dac(0);
    local_50 = 0;
    uStack_48 = 0xe000000000000000;
    _swift_errorRetain(param_2);
    Swift::_StringGuts::grow(0x21,_Var3);
    SVar4.bridgeObject = (void *)0x8000000100dccfd0;
    SVar4.str = (char *)0xd00000000000001f;
    SVar5.bridgeObject = param_4;
    SVar5.str = param_3;
    Swift::String::append(SVar4,SVar5);
    puVar2 = &DAT_101044978;
    local_58 = param_2;
    FUN_100b6730c(&DAT_101044978);
    Swift::__print_unlocked
              (&local_58,&local_50,puVar2,
               PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
               PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
              );
    uVar1 = uStack_48;
    FUN_100b84df8(4,local_50,uStack_48,0xd000000000000064,0x8000000100dcce70,0x30);
    _swift_bridgeObjectRelease(uVar1);
    _swift_errorRelease(param_2);
  }
  return;
}



/* Address: 0x100b9aaf0 | FUN_100b9aaf0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b9aaf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _swift_retain(uVar2);
  (*pcVar1)(param_2,param_3);
  _swift_release(uVar2);
  return 0;
}



/* Address: 0x100b9ab68 | SentrySpotlightTransport::sendEnvelope: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentrySpotlightTransport::sendEnvelope_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100b9a444(param_3);
  return;
}



/* Address: 0x100b9abb8 | thunk_FUN_100b9a444 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100b9a84c) */

void thunk_FUN_100b9a444(long param_1,undefined8 param_2,undefined8 param_3,void *param_4)

{
  String *pSVar1;
  code *pcVar2;
  URLRequest_conflict UVar3;
  undefined *puVar4;
  URL UVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  URLRequest_conflict UVar10;
  NSURLRequest *pNVar11;
  void *pvVar12;
  _StringGuts _Var13;
  URL UVar14;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  undefined8 uVar15;
  ID self;
  long lVar16;
  long unaff_x20;
  long lVar17;
  undefined *puVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  UVar3 = Foundation::URLRequest::typeMetadataAccessor();
  lVar17 = *(long *)(UVar3.unknown + -8);
  FUN_100b6f9e0(*(undefined8 *)(lVar17 + 0x40));
  lVar21 = extraout_x9 - extraout_x8;
  puVar18 = (undefined *)(lVar21 - extraout_x8);
  puVar4 = &DAT_1010458b0;
  FUN_100b6730c();
  FUN_100b6f9e0(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  lVar16 = extraout_x9_00 - extraout_x8_00;
  UVar5 = Foundation::URL::typeMetadataAccessor();
  lVar19 = *(long *)(UVar5.unknown + -8);
  FUN_100b6f9e0(*(undefined8 *)(lVar19 + 0x40));
  FUN_10001830c(unaff_x20 + SentrySpotlightTransport::apiURL,lVar16);
  _Var13.unknown = &DAT_00000001;
  lVar6 = lVar16;
  UVar14 = UVar5;
  FUN_1000c9ff0();
  if ((int)lVar6 == 1) {
    FUN_100054698(lVar16);
    FUN_100b84dac(0);
    puStack_a8 = (undefined *)0x0;
    uStack_a0 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x5e,_Var13);
    puStack_70 = puStack_a8;
    uStack_68 = uStack_a0;
    SVar23.bridgeObject = (void *)0x8000000100dcce10;
    SVar23.str = (char *)0xd00000000000005c;
    SVar24.bridgeObject = param_4;
    SVar24.str = UVar14.unknown;
    Swift::String::append(SVar23,SVar24);
    pSVar1 = (String *)
             (*(long *)(unaff_x20 + SentrySpotlightTransport::options) + SentryOptions::spotlightUrl
             );
    FUN_100b78ca0(pSVar1,&puStack_a8);
    pvVar12 = pSVar1->bridgeObject;
    SVar23 = *pSVar1;
    _swift_bridgeObjectRetain(pvVar12);
    SVar25.bridgeObject = param_4;
    SVar25.str = UVar14.unknown;
    Swift::String::append(SVar23,SVar25);
    _swift_bridgeObjectRelease(pvVar12);
    uVar15 = uStack_68;
    FUN_100b84df8(3,puStack_70,uStack_68,0xd000000000000064,0x8000000100dcce70,0x19);
    _swift_bridgeObjectRelease(uVar15);
  }
  else {
    (**(code **)(lVar19 + 0x20))(extraout_x9_01 - extraout_x8_01,lVar16);
    uVar22 = *(ulong *)(param_1 + _TtC6Sentry14SentryEnvelope::items);
    uVar7 = uVar22;
    thunk_FUN_100b6cd50();
    puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (uVar7 != 0) {
      if ((long)uVar7 < 1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100b9a9f4);
        (*pcVar2)();
      }
      _swift_bridgeObjectRetain(uVar22);
      uVar20 = 0;
      UVar10 = UVar3;
      puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
      UVar14 = UVar5;
      do {
        if ((uVar22 & 0xc000000000000001) == 0) {
          uVar8 = *(ulong *)(uVar22 + uVar20 * 8 + 0x20);
        }
        else {
          uVar8 = uVar20;
          FUN_100b6d3d4(uVar20,uVar22);
        }
        lVar6 = _TtC6Sentry18SentryEnvelopeItem::header;
        _objc_msgSend(*(ID *)(uVar8 + _TtC6Sentry18SentryEnvelopeItem::header),"type");
        SVar23 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        FUN_100b9adf4(SVar23.str,SVar23.bridgeObject);
        if (UVar10.unknown == (undefined *)0x746e657665 && UVar14.unknown == &DAT_e500000000000000)
        {
LAB_100b9a748:
          _swift_bridgeObjectRelease(UVar14.unknown);
LAB_100b9a750:
          puVar9 = puVar4;
          _swift_isUniquelyReferenced_nonNull_native();
          puStack_a8 = puVar4;
          if (((ulong)puVar9 & 1) == 0) {
            FUN_100b69630(0,*(long *)(puVar4 + 0x10) + 1);
          }
                    /* WARNING: Load size is inaccurate */
          UVar10.unknown = puStack_a8[0x10];
          UVar14.unknown = UVar10.unknown + 1;
          if ((undefined *)(*(ulong *)(puStack_a8 + 0x18) >> 1) <= UVar10.unknown) {
            FUN_100b69630(1 < *(ulong *)(puStack_a8 + 0x18),UVar14.unknown);
          }
          *(undefined **)(puStack_a8 + 0x10) = UVar14.unknown;
          *(ulong *)(puStack_a8 + (long)UVar10.unknown * 8 + 0x20) = uVar8;
          puVar4 = puStack_a8;
        }
        else {
          Swift::_stringCompareWithSmolCheck
                    ((_StringGuts)UVar10.unknown,(_StringGuts)UVar14.unknown,
                     (_StringComparisonResult)0x65);
          FUN_100b9ae04();
          if (((ulong)UVar10.unknown & 1) != 0) goto LAB_100b9a750;
          _objc_msgSend(*(ID *)(uVar8 + lVar6),"type");
          SVar23 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          FUN_100b9adf4(SVar23.str,SVar23.bridgeObject);
          if (UVar10.unknown == (undefined *)0x746361736e617274 &&
              UVar14.unknown == &DAT_eb000000006e6f69) goto LAB_100b9a748;
          Swift::_stringCompareWithSmolCheck
                    ((_StringGuts)UVar10.unknown,(_StringGuts)UVar14.unknown,
                     (_StringComparisonResult)0x74);
          FUN_100b9ae04();
          if (((ulong)UVar10.unknown & 1) != 0) goto LAB_100b9a750;
          FUN_100b6fce4();
        }
        uVar20 = uVar20 + 1;
      } while (uVar7 != uVar20);
      _swift_bridgeObjectRelease(uVar22);
    }
    uVar15 = *(undefined8 *)(param_1 + _TtC6Sentry14SentryEnvelope::header);
    FUN_100ba7bd8(0);
    _objc_allocWithZone();
    FUN_100ba7a24(uVar15,puVar4);
    FUN_100bcf290(lVar21);
    UVar10.unknown = puVar18;
    (**(code **)(lVar17 + 0x20))(puVar18,lVar21,UVar3.unknown);
    self = *(ID *)(unaff_x20 + SentrySpotlightTransport::requestManager);
    pNVar11 = Foundation::URLRequest::_bridgeToObjectiveC(UVar10);
    pcStack_88 = FUN_100b9a9f4;
    uStack_80 = 0;
    puStack_a8 = PTR___NSConcreteStackBlock_100ea82a0;
    uStack_a0 = 0x42000000;
    pcStack_98 = FUN_100b9aaf0;
    puStack_90 = &DAT_100f39090;
    pvVar12 = __Block_copy(&puStack_a8);
    _objc_msgSend(self,"addRequest:completionHandler:",pNVar11,pvVar12);
    __Block_release(pvVar12);
    FUN_100b6fce4();
    (**(code **)(lVar17 + 8))(puVar18,UVar3.unknown);
    (**(code **)(lVar19 + 8))(extraout_x9_01 - extraout_x8_01,UVar5.unknown);
  }
  return;
}



/* Address: 0x100b9abbc | SentrySpotlightTransport::storeEnvelope: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentrySpotlightTransport::storeEnvelope_(ID param_1,SEL param_2,ID param_3)

{
  thunk_FUN_100b9a444(param_3);
  return;
}



/* Address: 0x100b9ac0c | SentrySpotlightTransport::flush: */

/* Function Stack Size: 0x18 bytes */

long_long SentrySpotlightTransport::flush_(ID param_1,SEL param_2,double param_3)

{
  return 0;
}



/* Address: 0x100b9ac14 | SentrySpotlightTransport::recordLostEvent:reason: */

/* Function Stack Size: 0x20 bytes */

void SentrySpotlightTransport::recordLostEvent_reason_
               (ID param_1,SEL param_2,unsigned_long_long param_3,unsigned_long_long param_4)

{
  return;
}



/* Address: 0x100b9ac18 | SentrySpotlightTransport::recordLostEvent:reason:quantity: */

/* Function Stack Size: 0x28 bytes */

void SentrySpotlightTransport::recordLostEvent_reason_quantity_
               (ID param_1,SEL param_2,unsigned_long_long param_3,unsigned_long_long param_4,
               unsigned_long_long param_5)

{
  return;
}



/* Address: 0x100b9ac1c | FUN_100b9ac1c */

void FUN_100b9ac1c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("Sentry.SentrySpotlightTransport",0x1f,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100b9ac48);
  (*pcVar1)();
}



/* Address: 0x100b9ac48 | SentrySpotlightTransport::init */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentrySpotlightTransport::init(ID param_1,SEL param_2)

{
  ID IVar1;
  
  FUN_100b9ac1c();
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + requestManager));
  IVar1 = param_1 + apiURL;
  FUN_100054698();
  return IVar1;
}



/* Address: 0x100b9ac54 | SentrySpotlightTransport::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentrySpotlightTransport::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + requestManager));
  FUN_100054698(param_1 + apiURL);
  return;
}



/* Address: 0x100b9acac | FUN_100b9acac */

void FUN_100b9acac(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  _swift_retain(uVar1);
  return;
}



/* Address: 0x100b9acbc | FUN_100b9acbc */

void FUN_100b9acbc(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100b9acc4 | FUN_100b9acc4 */

void FUN_100b9acc4(void)

{
  FUN_100b9accc(0);
  return;
}



/* Address: 0x100b9accc | FUN_100b9accc */

void FUN_100b9accc(undefined8 param_1)

{
  if (DAT_1010460b8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100cce4d0);
  return;
}



/* Address: 0x100b9ad04 | FUN_100b9ad04 */

void FUN_100b9ad04(long param_1,ulong param_2)

{
  long lVar1;
  undefined *local_40;
  undefined *puStack_38;
  undefined *local_30;
  long local_28;
  
  local_40 = PTR___value_witness_table_for_Builtin_UnknownObject_100eabd30 + 0x40;
  puStack_38 = &DAT_100c9b600;
  lVar1 = 0x13f;
  local_30 = local_40;
  FUN_100b9ada0();
  if (param_2 < 0x40) {
    local_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_updateClassMetadata2(param_1,0x100,4,&local_40,param_1 + 0x50);
  }
  return;
}



/* Address: 0x100b9ad8c | FUN_100b9ad8c */

void FUN_100b9ad8c(undefined8 param_1,undefined8 param_2)

{
  _swift_lookUpClassMethod(param_1,param_2,&TargetClassDescriptor_100cce4d0);
  return;
}



/* Address: 0x100b9ad98 | FUN_100b9ad98 */

void FUN_100b9ad98(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b9ad9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x70))();
  return;
}



/* Address: 0x100b9ada0 | FUN_100b9ada0 */

void FUN_100b9ada0(void)

{
  Optional OVar1;
  URL UVar2;
  undefined7 extraout_var;
  
  if (DAT_1010460c8 == 0) {
    UVar2 = Foundation::URL::typeMetadataAccessor();
    OVar1 = Swift::Optional::typeMetadataAccessor();
    if (UVar2.unknown == (undefined *)0x0) {
      DAT_1010460c8 = CONCAT71(extraout_var,OVar1.value);
    }
  }
  return;
}



/* Address: 0x100b9adf4 | FUN_100b9adf4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b9adf4(void)

{
  return 0;
}



/* Address: 0x100b9ae04 | FUN_100b9ae04 */

void FUN_100b9ae04(void)

{
  _swift_bridgeObjectRelease();
  return;
}



/* Address: 0x100b9ae10 | FUN_100b9ae10 */

void FUN_100b9ae10(undefined8 param_1)

{
  _swift_getObjectType();
  FUN_100b9b584(param_1);
  return;
}



/* Address: 0x100b9ae3c | _TtC6Sentry16SentryANRTracker::addListener: */

/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry16SentryANRTracker::addListener_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100b9ae80();
  return;
}



/* Address: 0x100b9ae48 | FUN_100b9ae48 */

void FUN_100b9ae48(undefined8 param_1)

{
  _swift_getObjectType();
  FUN_100b9b4c0(param_1);
  return;
}



/* Address: 0x100b9ae74 | _TtC6Sentry16SentryANRTracker::removeListener: */

/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry16SentryANRTracker::removeListener_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100b9ae80();
  return;
}



/* Address: 0x100b9ae80 | FUN_100b9ae80 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b9ae80(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _swift_getObjectType(param_3);
  _swift_unknownObjectRetain(param_3);
  (*param_4)(param_3,param_1,uVar1);
  _swift_unknownObjectRelease(param_3);
  return 0;
}



/* Address: 0x100b9aee8 | FUN_100b9aee8 */

void FUN_100b9aee8(void)

{
  long unaff_x20;
  long unaff_x21;
  
  FUN_100b9b7d0(unaff_x20 + _TtC6Sentry16SentryANRTracker::helper);
  (**(code **)(unaff_x21 + 0x18))();
  FUN_100b56e60();
  return;
}



/* Address: 0x100b9af24 | _TtC6Sentry16SentryANRTracker::clear */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

int __thiscall _TtC6Sentry16SentryANRTracker::clear(_TtC6Sentry16SentryANRTracker *this)

{
  FUN_100b9aee8();
  return 0;
}



/* Address: 0x100b9af4c | FUN_100b9af4c */

void FUN_100b9af4c(void)

{
  code *pcVar1;
  
  FUN_100b9b7dc("Sentry.SentryANRTracker",0x17,"init()");
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100b9af70);
  (*pcVar1)();
}



/* Address: 0x100b9af70 | _TtC6Sentry16SentryANRTracker::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry16SentryANRTracker::init(ID param_1,SEL param_2)

{
  ID IVar1;
  
  FUN_100b9af4c();
  FUN_100004594(param_1 + helper);
  IVar1 = *(ID *)(param_1 + mapping);
  _swift_bridgeObjectRelease();
  return IVar1;
}



/* Address: 0x100b9af7c | _TtC6Sentry16SentryANRTracker::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry16SentryANRTracker::_cxx_destruct(ID param_1,SEL param_2)

{
  FUN_100004594(param_1 + helper);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + mapping));
  return;
}



/* Address: 0x100b9afb4 | FUN_100b9afb4 */

void FUN_100b9afb4(undefined8 param_1)

{
  ID self;
  long unaff_x20;
  
  self = unaff_x20 + _TtC6Sentry15DelegateWrapper::helper;
  _swift_unknownObjectWeakLoadStrong();
  if (self != 0) {
    FUN_100bca294(param_1);
    _objc_msgSend(self,"anrDetectedWithType:",param_1);
    _swift_unknownObjectRelease(self);
    return;
  }
  FUN_100b56e60();
  return;
}



/* Address: 0x100b9b018 | _TtC6Sentry15DelegateWrapper::anrDetected: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry15DelegateWrapper::anrDetected_(ID param_1,SEL param_2,long_long param_3)

{
  FUN_100b9afb4(param_3);
  return;
}



/* Address: 0x100b9b048 | FUN_100b9b048 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100b9b048(undefined8 param_1,ID param_2)

{
  ID self;
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  self = unaff_x20 + _TtC6Sentry15DelegateWrapper::helper;
  _swift_unknownObjectWeakLoadStrong();
  if (self != 0) {
    if (param_2 == 0) {
      uVar1 = 0;
    }
    else {
      _objc_msgSend(param_2,"minDuration");
      uVar2 = param_1;
      _objc_msgSend(param_2,"maxDuration");
      uVar1 = 0;
      FUN_100bb4a90(0);
      _objc_allocWithZone();
      FUN_100bb49fc(param_1,uVar2);
    }
    _objc_msgSend(self,"anrStoppedWithResult:",uVar1);
    _swift_unknownObjectRelease(self);
    return;
  }
  return;
}



/* Address: 0x100b9b114 | _TtC6Sentry15DelegateWrapper::anrStopped: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry15DelegateWrapper::anrStopped_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100b9b048(param_3);
  return;
}



/* Address: 0x100b9b168 | FUN_100b9b168 */

void FUN_100b9b168(void)

{
  code *pcVar1;
  
  FUN_100b9b7dc("Sentry.DelegateWrapper",0x16,"init()");
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100b9b18c);
  (*pcVar1)();
}



/* Address: 0x100b9b18c | _TtC6Sentry15DelegateWrapper::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry15DelegateWrapper::init(ID param_1,SEL param_2)

{
  ID IVar1;
  
  FUN_100b9b168();
  IVar1 = param_1 + helper;
  FUN_1001683a4();
  return IVar1;
}



/* Address: 0x100b9b198 | _TtC6Sentry15DelegateWrapper::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry15DelegateWrapper::_cxx_destruct(ID param_1,SEL param_2)

{
  FUN_1001683a4(param_1 + helper);
  return;
}



/* Address: 0x100b9b1a8 | FUN_100b9b1a8 */

void FUN_100b9b1a8(long param_1)

{
  undefined1 uVar1;
  code *pcVar2;
  undefined1 uVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong extraout_x8;
  long extraout_x8_00;
  ulong extraout_x8_01;
  long extraout_x8_02;
  ulong uVar8;
  long lVar9;
  ulong unaff_x23;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  undefined1 auStack_90 [8];
  undefined1 *local_88;
  undefined8 local_80;
  
  lVar6 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar10 = ((1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)) + 0x3fU >> 6) * 8;
  if ((0xd < (*(byte *)(param_1 + 0x20) & 0x3f)) &&
     ((bVar4 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xc,3,0,0xf,4,0),
      (bVar4 & 1) == 0 ||
      (uVar7 = uVar10, _swift_stdlib_isStackAllocationSafe(uVar10,8), (uVar7 & 1) == 0)))) {
    _swift_slowAlloc(uVar10,0xffffffffffffffff);
    FUN_100b9b7c4();
    lVar9 = 0;
    puVar11 = (ulong *)(param_1 + 0x40);
    uVar7 = *puVar11;
    uVar8 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
    uVar10 = 0xffffffffffffffff;
    if ((long)uVar8 < 0x40) {
      uVar10 = ~(-1L << (uVar8 & 0x3f));
    }
    uVar12 = uVar8 + 0x3f >> 6;
    uVar1 = SBORROW8(uVar8,0x40);
    do {
      uVar3 = uVar1;
      if ((uVar10 & uVar7) == 0) {
        lVar5 = lVar9 + 1;
        if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100b9b4bc);
          (*pcVar2)();
        }
        uVar3 = SBORROW8(lVar5,uVar12);
        if ((long)uVar12 <= lVar5) {
LAB_100b9b454:
          FUN_100b9b79c(local_80);
          _swift_slowDealloc(local_80,0xffffffffffffffff,0xffffffffffffffff);
          lVar9 = *(long *)PTR____stack_chk_guard_100ea82f0;
          goto joined_r0x000100b9b488;
        }
        if (puVar11[lVar5] == 0) {
          lVar5 = lVar9 + 2;
          uVar3 = SBORROW8(lVar5,uVar12);
          if ((long)uVar12 <= lVar5) goto LAB_100b9b454;
          if (puVar11[lVar5] == 0) {
            lVar5 = lVar9 + 3;
            uVar3 = SBORROW8(lVar5,uVar12);
            if ((long)uVar12 <= lVar5) goto LAB_100b9b454;
            if (puVar11[lVar5] == 0) {
              do {
                lVar5 = lVar9;
                uVar3 = SBORROW8(lVar5 + 4,uVar12);
                if ((long)uVar12 <= lVar5 + 4) goto LAB_100b9b454;
                lVar9 = lVar5 + 1;
              } while (*(long *)(param_1 + 0x60 + lVar5 * 8) == 0);
              lVar5 = lVar5 + 4;
            }
          }
        }
        FUN_100b9b7ac(lVar5);
        lVar9 = extraout_x8_02;
      }
      else {
        FUN_100b9b7e8();
        unaff_x23 = extraout_x8_01 | lVar9 << 6;
      }
      lVar5 = *(long *)(*(long *)(param_1 + 0x38) + unaff_x23 * 8) +
              _TtC6Sentry15DelegateWrapper::helper;
      _swift_unknownObjectWeakLoadStrong();
      uVar1 = uVar3;
      if (lVar5 != 0) {
        _swift_unknownObjectRelease();
        FUN_100b9b774();
        uVar1 = 0;
        if ((bool)uVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100b9b454);
          (*pcVar2)();
        }
      }
    } while( true );
  }
  local_88 = auStack_90;
  FUN_100b9b7c4();
  lVar9 = 0;
  puVar11 = (ulong *)(param_1 + 0x40);
  uVar7 = *puVar11;
  uVar8 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar10 = 0xffffffffffffffff;
  if ((long)uVar8 < 0x40) {
    uVar10 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar12 = uVar8 + 0x3f >> 6;
  uVar1 = SBORROW8(uVar8,0x40);
  do {
    uVar3 = uVar1;
    if ((uVar10 & uVar7) == 0) {
      lVar5 = lVar9 + 1;
      if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100b9b4b8);
        (*pcVar2)();
      }
      uVar3 = SBORROW8(lVar5,uVar12);
      if ((long)uVar12 <= lVar5) {
LAB_100b9b338:
        FUN_100b9b79c(local_80);
        lVar9 = *(long *)PTR____stack_chk_guard_100ea82f0;
joined_r0x000100b9b488:
        if (lVar9 != lVar6) {
                    /* WARNING: Subroutine does not return */
          ___stack_chk_fail();
        }
        return;
      }
      if (puVar11[lVar5] == 0) {
        lVar5 = lVar9 + 2;
        uVar3 = SBORROW8(lVar5,uVar12);
        if ((long)uVar12 <= lVar5) goto LAB_100b9b338;
        if (puVar11[lVar5] == 0) {
          lVar5 = lVar9 + 3;
          uVar3 = SBORROW8(lVar5,uVar12);
          if ((long)uVar12 <= lVar5) goto LAB_100b9b338;
          if (puVar11[lVar5] == 0) {
            do {
              lVar5 = lVar9;
              uVar3 = SBORROW8(lVar5 + 4,uVar12);
              if ((long)uVar12 <= lVar5 + 4) goto LAB_100b9b338;
              lVar9 = lVar5 + 1;
            } while (*(long *)(param_1 + 0x60 + lVar5 * 8) == 0);
            lVar5 = lVar5 + 4;
          }
        }
      }
      FUN_100b9b7ac(lVar5);
      lVar9 = extraout_x8_00;
    }
    else {
      FUN_100b9b7e8();
      unaff_x23 = extraout_x8 | lVar9 << 6;
    }
    lVar5 = *(long *)(*(long *)(param_1 + 0x38) + unaff_x23 * 8) +
            _TtC6Sentry15DelegateWrapper::helper;
    _swift_unknownObjectWeakLoadStrong();
    uVar1 = uVar3;
    if (lVar5 != 0) {
      _swift_unknownObjectRelease();
      FUN_100b9b774();
      uVar1 = 0;
      if ((bool)uVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100b9b338);
        (*pcVar2)();
      }
    }
  } while( true );
}



/* Address: 0x100b9b4c0 | FUN_100b9b4c0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100b9b4c0(long param_1,long param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [24];
  
  lVar3 = _TtC6Sentry16SentryANRTracker::mapping;
  puVar2 = auStack_58;
  _swift_beginAccess(param_2 + _TtC6Sentry16SentryANRTracker::mapping,puVar2,0x20,0);
  lVar3 = *(long *)(param_2 + lVar3);
  if ((*(long *)(lVar3 + 0x10) == 0) || (lVar1 = param_1, FUN_100b6cc60(), ((ulong)puVar2 & 1) == 0)
     ) {
    _swift_endAccess(auStack_58);
  }
  else {
    uVar4 = *(undefined8 *)(*(long *)(lVar3 + 0x38) + lVar1 * 8);
    _swift_endAccess(auStack_58);
    FUN_100b9b7d0(param_2 + _TtC6Sentry16SentryANRTracker::helper);
    (**(code **)(param_1 + 0x10))(uVar4,param_2,param_1);
  }
  return;
}



/* Address: 0x100b9b584 | FUN_100b9b584 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b9b584(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [24];
  
  lVar1 = _TtC6Sentry16SentryANRTracker::mapping;
  _swift_beginAccess(param_2 + _TtC6Sentry16SentryANRTracker::mapping,auStack_58,1,0);
  uVar3 = *(undefined8 *)(param_2 + lVar1);
  uVar2 = uVar3;
  _swift_bridgeObjectRetain();
  FUN_100b9b1a8();
  _swift_bridgeObjectRelease(uVar3);
  uVar3 = *(undefined8 *)(param_2 + lVar1);
  *(undefined8 *)(param_2 + lVar1) = uVar2;
  _swift_bridgeObjectRelease(uVar3);
  FUN_100b9b6d4();
  _objc_allocWithZone();
  uVar3 = param_1;
  _swift_unknownObjectRetain(param_1);
  FUN_100b9b6f4();
  _swift_beginAccess(param_2 + lVar1,auStack_78,0x21,0);
  FUN_100bd5b74(uVar3,param_1);
  _swift_endAccess(auStack_78);
  param_2 = param_2 + _TtC6Sentry16SentryANRTracker::helper;
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  lVar1 = *(long *)(param_2 + 0x20);
  FUN_100004640(param_2,uVar2);
  (**(code **)(lVar1 + 8))(uVar3,uVar2,lVar1);
  return 0;
}



/* Address: 0x100b9b6a8 | FUN_100b9b6a8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100b9b6a8(void)

{
  return ZEXT816(0x100fa1950);
}



/* Address: 0x100b9b6c8 | FUN_100b9b6c8 */

void FUN_100b9b6c8(undefined8 param_1,undefined8 param_2)

{
  _swift_lookUpClassMethod(param_1,param_2,&TargetClassDescriptor_100cce578);
  return;
}



/* Address: 0x100b9b6d4 | FUN_100b9b6d4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100b9b6d4(void)

{
  return ZEXT816(0x100fa1a18);
}



/* Address: 0x100b9b6f4 | FUN_100b9b6f4 */

ID FUN_100b9b6f4(undefined8 param_1,class_t *param_2)

{
  long lVar1;
  class_t *pcVar2;
  ID IVar3;
  objc_super local_40;
  
  pcVar2 = param_2;
  _swift_getObjectType();
  lVar1 = _TtC6Sentry15DelegateWrapper::helper;
  _swift_unknownObjectWeakInit((long)&param_2->isa + _TtC6Sentry15DelegateWrapper::helper,0);
  _swift_unknownObjectWeakAssign((long)&param_2->isa + lVar1,param_1);
  local_40.receiver = (ID)param_2;
  local_40.super_class = pcVar2;
  IVar3 = _objc_msgSendSuper2(&local_40,"init");
  _swift_unknownObjectRelease(param_1);
  return IVar3;
}



/* Address: 0x100b9b774 | FUN_100b9b774 */

void FUN_100b9b774(void)

{
  ulong uVar1;
  ulong unaff_x23;
  long unaff_x29;
  
  uVar1 = unaff_x23 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(*(long *)(unaff_x29 + -0x70) + uVar1) =
       *(ulong *)(*(long *)(unaff_x29 + -0x70) + uVar1) | 1L << (unaff_x23 & 0x3f);
  return;
}



/* Address: 0x100b9b79c | FUN_100b9b79c */

void FUN_100b9b79c(undefined8 param_1)

{
  long unaff_x29;
  
  FUN_100be1948(param_1,*(undefined8 *)(unaff_x29 + -0x60));
  return;
}



/* Address: 0x100b9b7ac | FUN_100b9b7ac */

void FUN_100b9b7ac(void)

{
  return;
}



/* Address: 0x100b9b7c4 | FUN_100b9b7c4 */

void FUN_100b9b7c4(void *param_1)

{
  size_t unaff_x24;
  long unaff_x29;
  
  *(void **)(unaff_x29 + -0x70) = param_1;
  _bzero(param_1,unaff_x24);
  return;
}



/* Address: 0x100b9b7d0 | FUN_100b9b7d0 */

void FUN_100b9b7d0(long param_1)

{
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Address: 0x100b9b7dc | FUN_100b9b7dc */

void FUN_100b9b7dc(void)

{
  __swift_stdlib_reportUnimplementedInitializer();
  return;
}



/* Address: 0x100b9b7e8 | FUN_100b9b7e8 */

void FUN_100b9b7e8(void)

{
  return;
}



/* Address: 0x100b9b7fc | FUN_100b9b7fc */

void FUN_100b9b7fc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  URL UVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  
  uVar2 = param_3;
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar4 = *(long *)(UVar1.unknown + -8);
  puVar3 = &stack0xffffffffffffffa0 + -(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100b87b98(puVar3);
  param_2 = param_2 + SentryDsn::url;
  FUN_100b9b8c4(param_2);
  FUN_100b9bbbc(param_1,puVar3,param_3,param_4,param_2,uVar2);
  (**(code **)(lVar4 + 8))(puVar3,UVar1.unknown);
  FUN_100b6f8ec();
  FUN_100b9c050();
  return;
}



/* Address: 0x100b9b8c4 | FUN_100b9b8c4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_100b9b8c4(void)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  char *pcVar3;
  void *pvVar4;
  undefined *puVar5;
  URL UVar6;
  String *pSVar7;
  String *pSVar8;
  String *pSVar9;
  String *pSVar10;
  void *in_x3;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String local_80;
  undefined *local_68;
  undefined8 local_60;
  undefined1 *puStack_58;
  
  puVar2 = PTR___type_metadata_for_Swift_String_100eac208;
  pSVar7 = &local_80;
  pSVar8 = &local_80;
  pSVar9 = &local_80;
  pSVar10 = &local_80;
  local_60 = 0x207972746e6553;
  puStack_58 = &DAT_e700000000000000;
  local_68 = PTR___type_metadata_for_Swift_String_100eac208;
  local_80.str = (char *)0x37;
  local_80.bridgeObject = (void *)0xe100000000000000;
  pcVar3 = (char *)0x765f7972746e6573;
  pvVar4 = (void *)0xee006e6f69737265;
  FUN_100b9bfc0();
  FUN_100004594(&local_80);
  local_80.bridgeObject = pvVar4;
  local_80.str = pcVar3;
  _swift_bridgeObjectRetain(pvVar4);
  SVar12.bridgeObject = (void *)0xe100000000000000;
  SVar12.str = (char *)0x2c;
  SVar16.bridgeObject = in_x3;
  SVar16.str = (char *)pSVar7;
  Swift::String::append(SVar12,SVar16);
  _swift_bridgeObjectRelease(pvVar4);
  pvVar4 = local_80.bridgeObject;
  SVar17.bridgeObject = in_x3;
  SVar17.str = (char *)pSVar7;
  Swift::String::append(local_80,SVar17);
  _swift_bridgeObjectRelease(pvVar4);
  _objc_msgSend((ID)&objc::class_t::SentryMeta,"sdkName");
  local_80 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  SVar11.bridgeObject = (void *)0xe100000000000000;
  SVar11.str = (char *)0x2f;
  SVar18.bridgeObject = in_x3;
  SVar18.str = (char *)pSVar7;
  Swift::String::append(SVar11,SVar18);
  _objc_msgSend((ID)&objc::class_t::SentryMeta,"versionString");
  SVar12 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  SVar19.bridgeObject = in_x3;
  SVar19.str = (char *)pSVar7;
  Swift::String::append(SVar12,SVar19);
  _swift_bridgeObjectRelease(SVar12.bridgeObject);
  local_68 = puVar2;
  pcVar3 = (char *)0x635f7972746e6573;
  pvVar4 = (void *)0xed0000746e65696c;
  FUN_100b9bfc0();
  FUN_100004594(&local_80);
  local_80.bridgeObject = pvVar4;
  local_80.str = pcVar3;
  _swift_bridgeObjectRetain(pvVar4);
  SVar13.bridgeObject = (void *)0xe100000000000000;
  SVar13.str = (char *)0x2c;
  SVar20.bridgeObject = in_x3;
  SVar20.str = (char *)pSVar8;
  Swift::String::append(SVar13,SVar20);
  _swift_bridgeObjectRelease(pvVar4);
  UVar6.unknown = local_80.bridgeObject;
  SVar21.bridgeObject = in_x3;
  SVar21.str = (char *)pSVar8;
  puVar5 = local_80.bridgeObject;
  Swift::String::append(local_80,SVar21);
  _swift_bridgeObjectRelease();
  Foundation::URL::_get_user(UVar6);
  local_68 = puVar2;
  local_80.str = (char *)0x0;
  if (puVar5 != (undefined *)0x0) {
    local_80.str = UVar6.unknown;
  }
  local_80.bridgeObject = (undefined *)0xe000000000000000;
  if (puVar5 != (undefined *)0x0) {
    local_80.bridgeObject = puVar5;
  }
  pcVar3 = (char *)0x6b5f7972746e6573;
  UVar6.unknown = (undefined *)0xea00000000007965;
  FUN_100b9bfc0();
  FUN_100004594(&local_80);
  SVar14.bridgeObject = UVar6.unknown;
  SVar14.str = pcVar3;
  SVar22.bridgeObject = in_x3;
  SVar22.str = (char *)pSVar9;
  puVar5 = UVar6.unknown;
  Swift::String::append(SVar14,SVar22);
  _swift_bridgeObjectRelease();
  Foundation::URL::_get_password(UVar6);
  if (puVar5 != (undefined *)0x0) {
    local_68 = puVar2;
    pcVar3 = (char *)0x735f7972746e6573;
    pvVar4 = (void *)0xed00007465726365;
    local_80.str = UVar6.unknown;
    local_80.bridgeObject = puVar5;
    FUN_100b9bfc0();
    FUN_100004594(&local_80);
    local_80.bridgeObject = (void *)0xe100000000000000;
    local_80.str = (char *)0x2c;
    SVar15.bridgeObject = pvVar4;
    SVar15.str = pcVar3;
    SVar23.bridgeObject = in_x3;
    SVar23.str = (char *)pSVar10;
    Swift::String::append(SVar15,SVar23);
    _swift_bridgeObjectRelease(pvVar4);
    pvVar4 = local_80.bridgeObject;
    SVar24.bridgeObject = in_x3;
    SVar24.str = (char *)pSVar10;
    Swift::String::append(local_80,SVar24);
    _swift_bridgeObjectRelease(pvVar4);
  }
  auVar1._8_8_ = puStack_58;
  auVar1._0_8_ = local_60;
  return auVar1;
}



/* Address: 0x100b9bbbc | FUN_100b9bbbc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100b9bbbc(URLRequest *param_1,undefined8 param_2,Data param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined1 auVar1 [16];
  URL UVar2;
  NSData *pNVar3;
  Data DVar4;
  char *pcVar5;
  undefined *puVar6;
  URLRequest_conflict UVar7;
  char *pcVar8;
  void *pvVar9;
  bool unaff_w20;
  URL url;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  char *local_80;
  String local_78;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  UVar2 = Foundation::URL::typeMetadataAccessor();
  url.unknown = (undefined *)
                ((long)&local_80 -
                (*(long *)(*(long *)(UVar2.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  (**(code **)(*(long *)(UVar2.unknown + -8) + 0x10))(url.unknown,param_2,UVar2.unknown);
  Foundation::URLRequest::init(url,(NSURLRequestCachePolicy)0x1,15.0);
  Foundation::URLRequest::_set_httpMethod(param_1);
  if (param_6 != 0) {
    FUN_100b9c068(param_5,param_6,0x7972746e65532d58,0xed0000687475412d);
  }
  pcVar8 = (char *)0x2d746e65746e6f43;
  pvVar9 = (void *)0xec00000065707954;
  FUN_100b9c068(0xd00000000000001d,0x8000000100dcd120);
  _objc_msgSend((ID)&objc::class_t::SentryMeta,"sdkName");
  SVar10 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  FUN_100b6f868();
  SVar11.bridgeObject = (void *)0xe100000000000000;
  SVar11.str = (char *)0x2f;
  SVar13.bridgeObject = pvVar9;
  SVar13.str = pcVar8;
  local_78 = SVar10;
  Swift::String::append(SVar11,SVar13);
  _objc_msgSend((ID)&objc::class_t::SentryMeta,"versionString");
  SVar10 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  FUN_100b6f868();
  SVar14.bridgeObject = pvVar9;
  SVar14.str = pcVar8;
  Swift::String::append(SVar10,SVar14);
  _swift_bridgeObjectRelease(SVar10.bridgeObject);
  pvVar9 = local_78.bridgeObject;
  FUN_100b9c068(local_78.str,local_78.bridgeObject,0x6567412d72657355,0xea0000000000746e);
  _swift_bridgeObjectRelease(pvVar9);
  SVar10.bridgeObject = &DAT_e400000000000000;
  SVar10.str = (char *)0x70697a67;
  Foundation::URLRequest::_setValue(SVar10,(URLRequest_conflict)0xd000000000000010);
  pNVar3 = Foundation::Data::_bridgeToObjectiveC(param_3);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_78.bridgeObject;
  local_78 = (String)(auVar1 << 0x40);
  pcVar8 = "sentry_gzippedWithData:compressionLevel:error:";
  pvVar9 = (void *)0xffffffffffffffff;
  DVar4.unknown =
       (undefined *)
       _objc_msgSend((ID)&objc::class_t::SentryNSDataUtils,
                     "sentry_gzippedWithData:compressionLevel:error:",pNVar3,0xffffffffffffffff,
                     &local_78);
  if (DVar4.unknown == (undefined *)0x0) {
    pcVar5 = local_78.str;
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    FUN_100b84dac(0);
    local_78.str = (char *)0x0;
    local_78.bridgeObject = (void *)0xe000000000000000;
    Swift::_StringGuts::grow(0x2c,(_StringGuts)pcVar8);
    SVar12.bridgeObject = (void *)0x8000000100dcd140;
    SVar12.str = (char *)0xd00000000000002a;
    SVar16.bridgeObject = pvVar9;
    SVar16.str = (char *)pNVar3;
    Swift::String::append(SVar12,SVar16);
    puVar6 = &DAT_101044978;
    local_80 = pcVar5;
    FUN_100b6730c(&DAT_101044978);
    Swift::__print_unlocked
              (&local_80,&local_78,puVar6,
               PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
               PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
              );
    pvVar9 = local_78.bridgeObject;
    FUN_100b84a3c(local_78.str,local_78.bridgeObject,4);
    _swift_bridgeObjectRelease(pvVar9);
    _swift_willThrow();
    UVar7 = Foundation::URLRequest::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar7.unknown + -8) + 8))(param_1,UVar7.unknown);
  }
  else {
    Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar4);
    FUN_100b6f868();
    Foundation::URLRequest::_set_httpBody(param_1);
    FUN_100b84dac(0);
    local_78.str = (char *)0x0;
    local_78.bridgeObject = (void *)0xe000000000000000;
    Swift::_StringGuts::grow(0x17,(_StringGuts)pcVar8);
    _swift_bridgeObjectRelease(local_78.bridgeObject);
    local_78.str = (char *)0xd000000000000015;
    local_78.bridgeObject = (void *)0x8000000100dcd170;
    SVar10 = Swift::__typeName(unaff_w20);
    SVar15.bridgeObject = pvVar9;
    SVar15.str = (char *)pNVar3;
    Swift::String::append(SVar10,SVar15);
    FUN_100b6f8ec();
    FUN_100b84a3c(local_78.str,local_78.bridgeObject,1);
    FUN_100b6f8ec();
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    FUN_100b9c050();
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100b9bfc0 | FUN_100b9bfc0 */

undefined1  [16] FUN_100b9bfc0(char *param_1,void *param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  char *pcVar2;
  String SVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0xe000000000000000;
  SVar3.bridgeObject = param_2;
  SVar3.str = param_1;
  SVar5.bridgeObject = param_4;
  SVar5.str = param_3;
  pcVar2 = param_3;
  Swift::String::append(SVar3,SVar5);
  SVar4.bridgeObject = (void *)0xe100000000000000;
  SVar4.str = (char *)0x3d;
  SVar6.bridgeObject = param_4;
  SVar6.str = pcVar2;
  Swift::String::append(SVar4,SVar6);
  Swift::__print_unlocked
            (param_3,&local_30,PTR___type_metadata_for_Any_100eae0c0 + 8,
             PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
             PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
            );
  auVar1._8_8_ = uStack_28;
  auVar1._0_8_ = local_30;
  return auVar1;
}



/* Address: 0x100b9c030 | FUN_100b9c030 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100b9c030(void)

{
  return ZEXT816(0x101046178);
}


