/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100bbb808 | FUN_100bbb808 */

undefined1  [16] FUN_100bbb808(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 6) {
    uVar1 = param_1;
  }
  auVar2[8] = 5 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Address: 0x100bbb818 | FUN_100bbb818 */

void FUN_100bbb818(undefined8 *param_1,undefined8 *param_2,byte param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_100bbb808();
  *param_1 = uVar1;
  *(byte *)(param_1 + 1) = param_3 & 1;
  return;
}



/* Address: 0x100bbb848 | FUN_100bbb848 */

void FUN_100bbb848(long param_1,char *param_2)

{
  void *pvVar1;
  String SVar2;
  undefined1 auStack_68 [24];
  undefined8 local_50;
  
  pvVar1 = *(void **)(param_1 + 0x20);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  Swift::Encoder::_singleValueContainer();
  FUN_100bbb720();
  FUN_10007d048(auStack_68,local_50);
  SVar2.bridgeObject = pvVar1;
  SVar2.str = param_2;
  Swift::SingleValueEncodingContainer::_encode(SVar2);
  FUN_100b678c0();
  FUN_100004594(auStack_68);
  return;
}



/* Address: 0x100bbb8f4 | FUN_100bbb8f4 */

void FUN_100bbb8f4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100bbb848(param_1,*unaff_x20);
  return;
}



/* Address: 0x100bbb90c | FUN_100bbb90c */

undefined8 FUN_100bbb90c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  
  if (param_1 < 6) {
    return *(undefined8 *)(&DAT_100c9cb58 + param_1 * 8);
  }
  FUN_100bb5928(&DAT_100f3a9b8,param_2,param_3,PTR___type_metadata_for_Swift_Int_100eac6f8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100bbb94c);
  (*pcVar1)();
}



/* Address: 0x100bbb94c | FUN_100bbb94c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100bbb94c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  NSString *pNVar1;
  NSDictionary *pNVar2;
  ID IVar3;
  ID unaff_x20;
  
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  if (param_4 == 0) {
    pNVar2 = (NSDictionary *)0x0;
  }
  else {
    pNVar2 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(param_4);
  }
  IVar3 = _objc_msgSend(unaff_x20,"initWithDomain:code:userInfo:",pNVar1,param_3,pNVar2);
  return IVar3;
}



/* Address: 0x100bbba00 | thunk_FUN_100bbba04 */

void thunk_FUN_100bbba04(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101047140 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9ca80;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9ca80,&DAT_100f3a9b8);
  DAT_101047140 = pTVar1;
  return;
}



/* Address: 0x100bbba04 | FUN_100bbba04 */

void FUN_100bbba04(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101047140 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9ca80;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9ca80,&DAT_100f3a9b8);
  DAT_101047140 = pTVar1;
  return;
}



/* Address: 0x100bbba44 | FUN_100bbba44 */

undefined1  [16] FUN_100bbba44(void)

{
  return ZEXT816(0x100f3a9b8);
}



/* Address: 0x100bbba54 | FUN_100bbba54 */

void FUN_100bbba54(_StringGuts param_1,_StringGuts param_2)

{
  _StringComparisonResult unaff_w23;
  
  Swift::_stringCompareWithSmolCheck(param_1,param_2,unaff_w23);
  return;
}



/* Address: 0x100bbba64 | FUN_100bbba64 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100bbba64(Data param_1,ulong param_2)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  char *pcVar5;
  char *pcVar6;
  _StringGuts _Var7;
  ulong uVar8;
  ulong uVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  
  if (param_1.unknown == (undefined *)0x19d) {
    uVar3 = param_2;
    Foundation::URLRequest::_get_httpBody((URLRequest_conflict)0x19d);
    if (uVar3 >> 0x3c < 0xf) {
      Foundation::Data::get_count(param_1);
      FUN_10003bf18(param_1.unknown,uVar3);
    }
    uVar8 = *(ulong *)(param_2 + _TtC6Sentry14SentryEnvelope::items);
    uVar3 = uVar8;
    thunk_FUN_100b6cd50();
    puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (uVar3 != 0) {
      _swift_bridgeObjectRetain(uVar8);
      FUN_100071750(0,uVar3 & ((long)uVar3 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100bbbd38);
        (*pcVar2)();
      }
      uVar9 = 0;
      do {
        if ((uVar8 & 0xc000000000000001) == 0) {
          uVar4 = *(ulong *)(uVar8 + uVar9 * 8 + 0x20);
        }
        else {
          uVar4 = uVar9;
          FUN_100b6d3d4(uVar9,uVar8);
        }
        _objc_msgSend(*(ID *)(uVar4 + _TtC6Sentry18SentryEnvelopeItem::header),"type");
        SVar10 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        uVar4 = *(ulong *)(puVar1 + 0x10);
        if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar4) {
          FUN_100071750(1 < *(ulong *)(puVar1 + 0x18),uVar4 + 1,1);
        }
        uVar9 = uVar9 + 1;
        *(ulong *)(puVar1 + 0x10) = uVar4 + 1;
        *(String *)(puVar1 + uVar4 * 0x10 + 0x20) = SVar10;
      } while (uVar3 != uVar9);
      _swift_bridgeObjectRelease(uVar8);
    }
    pcVar5 = &DAT_101044808;
    FUN_100b6730c();
    pcVar6 = pcVar5;
    FUN_100092e94();
    SVar10.bridgeObject = &SUB_e200000000000000;
    SVar10.str = (char *)0x202c;
    SVar10 = (extension_Swift)::Swift::BidirectionalCollection::_joined(SVar10);
    _Var7.unknown = SVar10.bridgeObject;
    _swift_bridgeObjectRelease(puVar1);
    Swift::_StringGuts::grow(0xb4,_Var7);
    SVar11.bridgeObject = (void *)0x8000000100dcf530;
    SVar11.str = (char *)0xd000000000000062;
    SVar13.bridgeObject = pcVar6;
    SVar13.str = pcVar5;
    Swift::String::append(SVar11,SVar13);
    SVar14.bridgeObject = pcVar6;
    SVar14.str = pcVar5;
    Swift::String::append(SVar10,SVar14);
    _swift_bridgeObjectRelease(SVar10.bridgeObject);
    SVar12.bridgeObject = (void *)0x8000000100dcf5a0;
    SVar12.str = (char *)0xd00000000000004e;
    SVar15.bridgeObject = pcVar6;
    SVar15.str = pcVar5;
    Swift::String::append(SVar12,SVar15);
    SVar10 = Swift::CustomStringConvertible::get_description();
    SVar16.bridgeObject = pcVar6;
    SVar16.str = pcVar5;
    Swift::String::append(SVar10,SVar16);
    _swift_bridgeObjectRelease(SVar10.bridgeObject);
    FUN_100b84dac(0);
    FUN_100b84df8(4,0,0xe000000000000000,0xd000000000000073,0x8000000100dcf5f0,0x1b);
    _swift_bridgeObjectRelease(0xe000000000000000);
  }
  return;
}



/* Address: 0x100bbbd38 | SentryHttpTransportHttpStatusCodeLogger::logHttpResponseErrorWithStatusCode:envelope:request: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

void SentryHttpTransportHttpStatusCodeLogger::logHttpResponseErrorWithStatusCode_envelope_request_
               (ID param_1,SEL param_2,long_long param_3,ID param_4,ID param_5)

{
  URLRequest_conflict UVar1;
  long lVar2;
  long lVar3;
  
  UVar1 = Foundation::URLRequest::typeMetadataAccessor();
  lVar3 = *(long *)(UVar1.unknown + -8);
  lVar2 = *(long *)(lVar3 + 0x40);
  Foundation::URLRequest::__unconditionallyBridgeFromObjectiveC((URLRequest_conflict)param_5);
  FUN_100bbba64(param_3,param_4,&stack0xffffffffffffffc0 + -(lVar2 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar3 + 8))
            (&stack0xffffffffffffffc0 + -(lVar2 + 0xfU & 0xfffffffffffffff0),UVar1.unknown);
  return;
}



/* Address: 0x100bbbdd8 | SentryHttpTransportHttpStatusCodeLogger::init */

/* Function Stack Size: 0x10 bytes */

ID SentryHttpTransportHttpStatusCodeLogger::init(ID param_1,SEL param_2)

{
  FUN_1001fddc8();
  return param_1;
}



/* Address: 0x100bbbdf8 | FUN_100bbbdf8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100bbbdf8(void)

{
  return ZEXT816(0x100fa34a0);
}



/* Address: 0x100bbbe18 | FUN_100bbbe18 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_100bbbe18(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 local_88;
  undefined1 auStack_80 [32];
  
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 != 0) {
    FUN_100071750(0,lVar5,0);
    do {
      param_1 = param_1 + 0x20;
      FUN_10000cbfc(param_1,auStack_80);
      uVar3 = 0;
      FUN_100b673ec(0,&DAT_1010471a0,&PTR__OBJC_CLASS___NSExpression_100f8e218);
      puVar4 = &local_88;
      puVar6 = auStack_80;
      _swift_dynamicCast(puVar4,puVar6,PTR___type_metadata_for_Any_100eae0c0 + 8,uVar3,6);
      if ((int)puVar4 == 0) {
        puVar6 = &SUB_e200000000000000;
        uVar3 = 0x4025;
      }
      else {
        uVar3 = local_88;
        FUN_100bbc6b8();
      }
      uVar1 = *(ulong *)(puVar2 + 0x10);
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
        FUN_100071750(1 < *(ulong *)(puVar2 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(puVar2 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puVar2 + uVar1 * 0x10 + 0x20) = uVar3;
      *(undefined1 **)(puVar2 + uVar1 * 0x10 + 0x28) = puVar6;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return puVar2;
}



/* Address: 0x100bbbf98 | FUN_100bbbf98 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_100bbbf98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 unaff_x21;
  undefined1 auVar2 [16];
  
  puVar1 = &_OBJC_CLASS___NSCompoundPredicate;
  FUN_100bbc9d8();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = &_OBJC_CLASS___NSComparisonPredicate;
    FUN_100bbc9d8();
    if (puVar1 == (undefined *)0x0) {
      param_2 = 0x8000000100dcf690;
      unaff_x21 = 0xd000000000000013;
    }
    else {
      FUN_100bbc9e4();
      FUN_100bbc39c();
    }
  }
  else {
    FUN_100bbc9e4();
    FUN_100bbc03c();
  }
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = unaff_x21;
  return auVar2;
}



/* Address: 0x100bbc03c | FUN_100bbc03c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

String FUN_100bbc03c(ID param_1,undefined8 param_2,char *param_3,char *param_4)

{
  ulong uVar1;
  ID IVar2;
  ID IVar3;
  char **ppcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  long lVar10;
  void *pvVar11;
  undefined *puVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  char *local_88;
  char *local_80;
  char *local_78;
  String separator;
  
  IVar3 = _objc_msgSend(param_1,"subpredicates");
  puVar12 = PTR___type_metadata_for_Any_100eae0c0;
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  lVar10 = *(long *)(IVar3 + 0x10);
  pcVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
  IVar2 = IVar3;
  if (lVar10 == 0) {
    _swift_bridgeObjectRelease(IVar3);
    pcVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    do {
      FUN_10000cbfc(IVar2 + 0x20,&local_80);
      param_4 = (char *)0x0;
      FUN_100b673ec(0,&DAT_101047198,&PTR__OBJC_CLASS___NSPredicate_100f8db30);
      ppcVar4 = &local_88;
      param_3 = puVar12 + 8;
      _swift_dynamicCast(ppcVar4,&local_80,param_3,param_4,6);
      pcVar9 = local_88;
      if (((ulong)ppcVar4 & 1) != 0) {
        pcVar5 = &_OBJC_CLASS___NSCompoundPredicate;
        pcVar6 = local_88;
        _swift_dynamicCastObjCClass();
        if (pcVar6 == (char *)0x0) {
          FUN_100bbbf98();
          pcVar6 = pcVar8;
          _swift_isUniquelyReferenced_nonNull_native();
          pcVar7 = pcVar8;
          if (((ulong)pcVar6 & 1) == 0) {
            pcVar7 = (char *)0x0;
            param_3 = &DAT_00000001;
            FUN_100089044(0,*(long *)(pcVar8 + 0x10) + 1);
            param_4 = pcVar8;
          }
          uVar1 = *(ulong *)(pcVar7 + 0x10);
          pcVar8 = pcVar7;
          if (*(ulong *)(pcVar7 + 0x18) >> 1 <= uVar1) {
            pcVar8 = (char *)(ulong)(1 < *(ulong *)(pcVar7 + 0x18));
            param_3 = &DAT_00000001;
            FUN_100089044(pcVar8,uVar1 + 1);
            param_4 = pcVar7;
          }
          *(ulong *)(pcVar8 + 0x10) = uVar1 + 1;
          pcVar6 = pcVar8 + uVar1 * 0x10;
          *(char **)(pcVar6 + 0x20) = pcVar9;
        }
        else {
          local_80 = (char *)0x28;
          local_78 = (undefined *)0xe100000000000000;
          FUN_100bbbf98();
          SVar13.bridgeObject = pcVar5;
          SVar13.str = pcVar9;
          SVar18.bridgeObject = param_4;
          SVar18.str = param_3;
          Swift::String::append(SVar13,SVar18);
          _swift_bridgeObjectRelease(pcVar5);
          SVar14.bridgeObject = (void *)0xe100000000000000;
          SVar14.str = (char *)0x29;
          SVar19.bridgeObject = param_4;
          SVar19.str = param_3;
          Swift::String::append(SVar14,SVar19);
          pcVar5 = local_78;
          pcVar9 = local_80;
          pcVar6 = pcVar8;
          _swift_isUniquelyReferenced_nonNull_native();
          pcVar7 = pcVar8;
          if (((ulong)pcVar6 & 1) == 0) {
            pcVar7 = (char *)0x0;
            param_3 = &DAT_00000001;
            FUN_100089044(0,*(long *)(pcVar8 + 0x10) + 1);
            param_4 = pcVar8;
          }
          uVar1 = *(ulong *)(pcVar7 + 0x10);
          pcVar8 = pcVar7;
          if (*(ulong *)(pcVar7 + 0x18) >> 1 <= uVar1) {
            pcVar8 = (char *)(ulong)(1 < *(ulong *)(pcVar7 + 0x18));
            param_3 = &DAT_00000001;
            FUN_100089044(pcVar8,uVar1 + 1);
            param_4 = pcVar7;
          }
          *(ulong *)(pcVar8 + 0x10) = uVar1 + 1;
          pcVar6 = pcVar8 + uVar1 * 0x10;
          *(char **)(pcVar6 + 0x20) = pcVar9;
        }
        *(char **)(pcVar6 + 0x28) = pcVar5;
        puVar12 = PTR___type_metadata_for_Any_100eae0c0;
      }
      lVar10 = lVar10 + -1;
      IVar2 = IVar2 + 0x20;
    } while (lVar10 != 0);
    _swift_bridgeObjectRelease(IVar3);
  }
  if (*(long *)(pcVar8 + 0x10) == 1) {
    pcVar5 = "compoundPredicateType";
    pcVar9 = (char *)_objc_msgSend(param_1,"compoundPredicateType");
    FUN_100bbc54c();
    SVar15.bridgeObject = (void *)0xe100000000000000;
    SVar15.str = (char *)0x20;
    SVar20.bridgeObject = param_4;
    SVar20.str = param_3;
    local_80 = pcVar9;
    local_78 = pcVar5;
    Swift::String::append(SVar15,SVar20);
    if (*(long *)(pcVar8 + 0x10) == 0) {
      pcVar9 = (char *)0x0;
      pvVar11 = (void *)0xe000000000000000;
    }
    else {
      pcVar9 = *(char **)(pcVar8 + 0x20);
      pvVar11 = *(void **)(pcVar8 + 0x28);
      _swift_bridgeObjectRetain(pvVar11);
    }
    _swift_bridgeObjectRelease(pcVar8);
    SVar17.bridgeObject = pvVar11;
    SVar17.str = pcVar9;
    SVar21.bridgeObject = param_4;
    SVar21.str = param_3;
    Swift::String::append(SVar17,SVar21);
    _swift_bridgeObjectRelease(pvVar11);
    SVar16.bridgeObject = local_78;
    SVar16.str = local_80;
  }
  else {
    pcVar5 = "compoundPredicateType";
    local_80 = pcVar8;
    pcVar9 = (char *)_objc_msgSend(param_1,"compoundPredicateType");
    FUN_100bbc54c();
    FUN_100b6730c(&DAT_101044808);
    FUN_100092e94();
    separator.bridgeObject = pcVar5;
    separator.str = pcVar9;
    SVar16 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator);
    _swift_bridgeObjectRelease(pcVar8);
    _swift_bridgeObjectRelease(pcVar5);
  }
  return SVar16;
}



/* Address: 0x100bbc39c | FUN_100bbc39c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_100bbc39c(ID param_1,undefined8 param_2,char *param_3,void *param_4)

{
  char *pcVar1;
  ID IVar2;
  char *pcVar3;
  char *pcVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  undefined1 auVar9 [16];
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  
  pcVar3 = "predicateOperatorType";
  pcVar1 = (char *)_objc_msgSend(param_1,"predicateOperatorType");
  FUN_100bbc5a4();
  if (pcVar3 == (char *)0x0) {
    pcVar4 = (char *)0x8000000100dcf6e0;
    IVar2 = 0xd00000000000001a;
  }
  else {
    pcVar4 = "leftExpression";
    IVar2 = _objc_msgSend(param_1,"leftExpression");
    FUN_100bbc6b8();
    SVar5.bridgeObject = (void *)0xe100000000000000;
    SVar5.str = (char *)0x20;
    SVar10.bridgeObject = param_4;
    SVar10.str = param_3;
    Swift::String::append(SVar5,SVar10);
    SVar6.bridgeObject = pcVar3;
    SVar6.str = pcVar1;
    SVar11.bridgeObject = param_4;
    SVar11.str = param_3;
    Swift::String::append(SVar6,SVar11);
    _swift_bridgeObjectRelease(pcVar3);
    SVar7.bridgeObject = (void *)0xe100000000000000;
    SVar7.str = (char *)0x20;
    SVar12.bridgeObject = param_4;
    SVar12.str = param_3;
    Swift::String::append(SVar7,SVar12);
    pcVar3 = "rightExpression";
    pcVar1 = (char *)_objc_msgSend(param_1,"rightExpression");
    FUN_100bbc6b8();
    SVar8.bridgeObject = pcVar3;
    SVar8.str = pcVar1;
    SVar13.bridgeObject = param_4;
    SVar13.str = param_3;
    Swift::String::append(SVar8,SVar13);
    _swift_bridgeObjectRelease(pcVar3);
  }
  auVar9._8_8_ = pcVar4;
  auVar9._0_8_ = IVar2;
  return auVar9;
}



/* Address: 0x100bbc4d4 | _TtC6Sentry25SentryPredicateDescriptor::predicateDescription: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry25SentryPredicateDescriptor::predicateDescription_(ID param_1,SEL param_2,ID param_3)

{
  NSString *pNVar1;
  
  FUN_100bbbf98(param_3);
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  return (ID)pNVar1;
}



/* Address: 0x100bbc54c | FUN_100bbc54c */

undefined1  [16] FUN_100bbc54c(long param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  uVar4 = 0x202c;
  if (param_1 == 2) {
    uVar4 = 0x20524f20;
  }
  puVar1 = &SUB_e200000000000000;
  if (param_1 == 2) {
    puVar1 = &DAT_e400000000000000;
  }
  uVar2 = 0x20444e4120;
  if (param_1 != 1) {
    uVar2 = uVar4;
  }
  puVar3 = &DAT_e500000000000000;
  if (param_1 != 1) {
    puVar3 = puVar1;
  }
  uVar4 = 0x544f4e;
  if (param_1 != 0) {
    uVar4 = uVar2;
  }
  puVar1 = (undefined1 *)0xe300000000000000;
  if (param_1 != 0) {
    puVar1 = puVar3;
  }
  auVar5._8_8_ = puVar1;
  auVar5._0_8_ = uVar4;
  return auVar5;
}



/* Address: 0x100bbc5a4 | FUN_100bbc5a4 */

undefined1  [16] FUN_100bbc5a4(long param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  switch(param_1) {
  case 0:
    auVar5._8_8_ = 0xe100000000000000;
    auVar5._0_8_ = 0x3c;
    return auVar5;
  case 1:
    auVar12._8_8_ = &SUB_e200000000000000;
    auVar12._0_8_ = 0x3d3c;
    return auVar12;
  case 2:
    auVar9._8_8_ = 0xe100000000000000;
    auVar9._0_8_ = 0x3e;
    return auVar9;
  case 3:
    auVar10._8_8_ = &SUB_e200000000000000;
    auVar10._0_8_ = 0x3d3e;
    return auVar10;
  case 4:
    auVar7._8_8_ = &SUB_e200000000000000;
    auVar7._0_8_ = 0x3d3d;
    return auVar7;
  case 5:
    auVar13._8_8_ = &SUB_e200000000000000;
    auVar13._0_8_ = 0x3d21;
    return auVar13;
  case 6:
    auVar14._8_8_ = &DAT_e700000000000000;
    auVar14._0_8_ = 0x5345484354414d;
    return auVar14;
  case 7:
    auVar11._8_8_ = &DAT_e400000000000000;
    auVar11._0_8_ = 0x454b494c;
    return auVar11;
  case 8:
    auVar16._8_8_ = 0xea00000000004854;
    auVar16._0_8_ = 0x4957534e49474542;
    return auVar16;
  case 9:
    auVar8._8_8_ = &DAT_e800000000000000;
    auVar8._0_8_ = 0x4854495753444e45;
    return auVar8;
  case 10:
    auVar15._8_8_ = &SUB_e200000000000000;
    auVar15._0_8_ = 0x4e49;
    return auVar15;
  }
  uVar4 = 0x4e454557544542;
  if (param_1 != 100) {
    uVar4 = 0;
  }
  puVar1 = &DAT_e700000000000000;
  if (param_1 != 100) {
    puVar1 = (undefined1 *)0x0;
  }
  uVar2 = 0x534e4941544e4f43;
  if (param_1 != 99) {
    uVar2 = uVar4;
  }
  puVar3 = &DAT_e800000000000000;
  if (param_1 != 99) {
    puVar3 = puVar1;
  }
  auVar6._8_8_ = puVar3;
  auVar6._0_8_ = uVar2;
  return auVar6;
}



/* Address: 0x100bbc6b8 | FUN_100bbc6b8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

String FUN_100bbc6b8(ID param_1,undefined8 param_2,char *param_3,char *param_4)

{
  String SVar1;
  ID IVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  char *pcVar6;
  char *pcVar7;
  String separator;
  String SVar9;
  String SVar10;
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
  undefined8 local_68;
  char *local_60;
  undefined1 *local_58;
  String SVar8;
  
  pcVar6 = "expressionType";
  IVar2 = _objc_msgSend(param_1,"expressionType");
  if (IVar2 == 0) {
LAB_100bbc7ec:
    SVar1.bridgeObject = &SUB_e200000000000000;
    SVar1.str = (char *)0x4025;
  }
  else {
    if (IVar2 == 0x14) {
      local_60 = (char *)0x0;
      local_58 = (undefined1 *)0xe000000000000000;
      Swift::_StringGuts::grow(0x11,(_StringGuts)pcVar6);
      _swift_bridgeObjectRelease(local_58);
      local_60 = (char *)0x285952414e524554;
      local_58 = &DAT_e800000000000000;
      pcVar7 = "predicate";
      pcVar6 = (char *)_objc_msgSend(param_1,"predicate");
      FUN_100bbbf98();
      SVar8.bridgeObject = pcVar7;
      SVar8.str = pcVar6;
      SVar15.bridgeObject = param_4;
      SVar15.str = param_3;
      Swift::String::append(SVar8,SVar15);
      _swift_bridgeObjectRelease(pcVar7);
      SVar9.bridgeObject = (void *)0xe100000000000000;
      SVar9.str = (char *)0x2c;
      SVar16.bridgeObject = param_4;
      SVar16.str = param_3;
      Swift::String::append(SVar9,SVar16);
      pcVar7 = "trueExpression";
      pcVar6 = (char *)_objc_msgSend(param_1,"trueExpression");
      FUN_100bbc6b8();
      SVar10.bridgeObject = pcVar7;
      SVar10.str = pcVar6;
      SVar17.bridgeObject = param_4;
      SVar17.str = param_3;
      Swift::String::append(SVar10,SVar17);
      _swift_bridgeObjectRelease(pcVar7);
      SVar11.bridgeObject = (void *)0xe100000000000000;
      SVar11.str = (char *)0x2c;
      SVar18.bridgeObject = param_4;
      SVar18.str = param_3;
      Swift::String::append(SVar11,SVar18);
      pcVar7 = "falseExpression";
      pcVar6 = (char *)_objc_msgSend(param_1,"falseExpression");
      FUN_100bbc6b8();
      SVar12.bridgeObject = pcVar7;
      SVar12.str = pcVar6;
      SVar19.bridgeObject = param_4;
      SVar19.str = param_3;
      Swift::String::append(SVar12,SVar19);
      _swift_bridgeObjectRelease(pcVar7);
      pcVar6 = (char *)0x29;
    }
    else {
      if (IVar2 != 0xe) {
        _objc_msgSend(param_1,"description");
        SVar8 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        return SVar8;
      }
      IVar2 = _objc_msgSend(param_1,"collection");
      Swift::__bridgeAnyObjectToAny();
      _swift_unknownObjectRelease(IVar2);
      puVar3 = &DAT_101045048;
      FUN_100b6730c(&DAT_101045048);
      puVar4 = &local_68;
      _swift_dynamicCast(puVar4,&local_60,PTR___type_metadata_for_Any_100eae0c0 + 8,puVar3,6);
      if ((int)puVar4 == 0) goto LAB_100bbc7ec;
      uVar5 = local_68;
      FUN_100bbbe18();
      _swift_bridgeObjectRelease(local_68);
      local_60 = (char *)0x7b;
      local_58 = (undefined1 *)0xe100000000000000;
      param_3 = &DAT_101044808;
      FUN_100b6730c();
      param_4 = param_3;
      FUN_100092e94();
      separator.bridgeObject = &SUB_e200000000000000;
      separator.str = (char *)0x202c;
      SVar8 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator);
      _swift_bridgeObjectRelease(uVar5);
      SVar14.bridgeObject = param_4;
      SVar14.str = param_3;
      Swift::String::append(SVar8,SVar14);
      _swift_bridgeObjectRelease(SVar8.bridgeObject);
      pcVar6 = (char *)0x7d;
    }
    SVar13.bridgeObject = (void *)0xe100000000000000;
    SVar13.str = pcVar6;
    SVar20.bridgeObject = param_4;
    SVar20.str = param_3;
    Swift::String::append(SVar13,SVar20);
    SVar1.bridgeObject = local_58;
    SVar1.str = local_60;
  }
  return SVar1;
}



/* Address: 0x100bbc998 | _TtC6Sentry25SentryPredicateDescriptor::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry25SentryPredicateDescriptor::init(ID param_1,SEL param_2)

{
  FUN_1001fddc8();
  return param_1;
}



/* Address: 0x100bbc9b8 | FUN_100bbc9b8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100bbc9b8(void)

{
  return ZEXT816(0x100fa3550);
}



/* Address: 0x100bbc9d8 | FUN_100bbc9d8 */

void FUN_100bbc9d8(void)

{
  _swift_dynamicCastObjCClass();
  return;
}



/* Address: 0x100bbc9e4 | FUN_100bbc9e4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100bbc9e4(void)

{
  return;
}



/* Address: 0x100bbc9f0 | FUN_100bbc9f0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_100bbc9f0(double param_1)

{
  Date DVar1;
  Date DVar2;
  ID IVar3;
  Date DVar4;
  ulong uVar5;
  long unaff_x20;
  ID self;
  long lVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  
  DVar1 = Foundation::Date::typeMetadataAccessor();
  lVar9 = *(long *)(DVar1.unknown + -8);
  uVar5 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar6 = (long)(&stack0xffffffffffffffb0 + -uVar5) - uVar5;
  lVar7 = *(long *)(unaff_x20 + _TtC6Sentry36SentryCrashIntegrationSessionHandler::fileManager);
  DVar2 = DVar1;
  FUN_100b9d9f0();
  if (DVar2.unknown == (undefined *)0x0) {
    FUN_100b84dac();
    lVar6 = 1;
    FUN_100b84df8(1,0xd000000000000020,0x8000000100dcf780,0xd00000000000007e,0x8000000100dcf7b0,0x33
                 );
  }
  else {
    self = *(ID *)(unaff_x20 + _TtC6Sentry36SentryCrashIntegrationSessionHandler::crashWrapper);
    IVar3 = _objc_msgSend(self,"crashedLastLaunch");
    if ((int)IVar3 == 0) {
      return 0;
    }
    DVar4.unknown =
         (undefined *)
         _objc_msgSend(*(ID *)(*(long *)(unaff_x20 +
                                        _TtC6Sentry36SentryCrashIntegrationSessionHandler::bridge) +
                              _TtC6Sentry17SentryCrashBridge::dateProvider),"date");
    Foundation::Date::__unconditionallyBridgeFromObjectiveC(DVar4);
    DVar4.unknown = (undefined *)_objc_msgSend(self,"activeDurationSinceLastCrash");
    Foundation::Date::addingTimeInterval(-param_1,DVar4);
    pcVar8 = *(code **)(lVar9 + 8);
    (*pcVar8)(&stack0xffffffffffffffb0 + -uVar5,DVar1.unknown);
    FUN_100bdd4fc(lVar6);
    FUN_100b9da78(DVar2.unknown);
    _objc_msgSend(*(ID *)(lVar7 + _TtC6Sentry17SentryFileManager::helper),"deleteCurrentSession");
    (*pcVar8)(lVar6,DVar1.unknown);
  }
  return lVar6;
}



/* Address: 0x100bbcbc0 | FUN_100bbcbc0 */

void FUN_100bbcbc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  _swift_getObjectType();
  *(undefined8 *)(unaff_x20 + _TtC6Sentry36SentryCrashIntegrationSessionHandler::crashWrapper) =
       param_1;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry36SentryCrashIntegrationSessionHandler::fileManager) =
       param_2;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry36SentryCrashIntegrationSessionHandler::bridge) = param_3;
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"init");
  return;
}



/* Address: 0x100bbcc34 | FUN_100bbcc34 */

void FUN_100bbcc34(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("Sentry.SentryCrashIntegrationSessionHandler",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100bbcc60);
  (*pcVar1)();
}



/* Address: 0x100bbcc60 | _TtC6Sentry36SentryCrashIntegrationSessionHandler::init */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry36SentryCrashIntegrationSessionHandler::init(ID param_1,SEL param_2)

{
  FUN_100bbcc34();
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + crashWrapper));
  return 0;
}



/* Address: 0x100bbcc6c | _TtC6Sentry36SentryCrashIntegrationSessionHandler::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry36SentryCrashIntegrationSessionHandler::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + crashWrapper));
  return;
}



/* Address: 0x100bbccb4 | FUN_100bbccb4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100bbccb4(void)

{
  return ZEXT816(0x100fa3600);
}



/* Address: 0x100bbccd4 | FUN_100bbccd4 */

/* WARNING: Removing unreachable block (ram,0x000100bbcd2c) */
/* WARNING: Removing unreachable block (ram,0x000100bbcf48) */
/* WARNING: Removing unreachable block (ram,0x000100bbcd68) */
/* WARNING: Removing unreachable block (ram,0x000100bbd024) */
/* WARNING: Removing unreachable block (ram,0x000100bbcd78) */
/* WARNING: Removing unreachable block (ram,0x000100bbcd80) */
/* WARNING: Removing unreachable block (ram,0x000100bbd02c) */
/* WARNING: Removing unreachable block (ram,0x000100bbd030) */

undefined1  [16] FUN_100bbccd4(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long unaff_x20;
  undefined1 auVar5 [16];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long local_78;
  
  FUN_100004640(unaff_x20 + _TtC6Sentry23SentryExtensionDetector::infoPlistWrapper,
                *(undefined8 *)
                 (unaff_x20 + _TtC6Sentry23SentryExtensionDetector::infoPlistWrapper + 0x18));
  lVar1 = 0x736e65747845534e;
  FUN_100b7fa24(0x736e65747845534e,&DAT_eb000000006e6f69);
  if (*(long *)(lVar1 + 0x10) == 0) {
LAB_100bbd008:
    uStack_88 = 0;
    local_90 = 0;
    local_78 = 0;
    uStack_80 = 0;
    _swift_bridgeObjectRelease(lVar1);
LAB_100bbd018:
    FUN_100013954(&local_90);
  }
  else {
    _swift_bridgeObjectRetain(lVar1);
    lVar2 = -0x2fffffffffffffe6;
    uVar4 = 0;
    FUN_100071370(0xd00000000000001a);
    if ((uVar4 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar1);
      goto LAB_100bbd008;
    }
    FUN_10000cbfc(*(long *)(lVar1 + 0x38) + lVar2 * 0x20,&local_90);
    _swift_bridgeObjectRelease_n(lVar1,2);
    if (local_78 == 0) goto LAB_100bbd018;
    puVar3 = &local_b0;
    _swift_dynamicCast(puVar3,&local_90,PTR___type_metadata_for_Any_100eae0c0 + 8,
                       PTR___type_metadata_for_Swift_String_100eac208,6);
    if (((ulong)puVar3 & 1) != 0) goto LAB_100bbd03c;
  }
  local_b0 = 0;
  uStack_a8 = 0;
LAB_100bbd03c:
  auVar5._8_8_ = uStack_a8;
  auVar5._0_8_ = local_b0;
  return auVar5;
}



/* Address: 0x100bbd054 | FUN_100bbd054 */

void FUN_100bbd054(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("Sentry.SentryExtensionDetector",0x1e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100bbd080);
  (*pcVar1)();
}



/* Address: 0x100bbd080 | _TtC6Sentry23SentryExtensionDetector::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry23SentryExtensionDetector::init(ID param_1,SEL param_2)

{
  ID IVar1;
  
  FUN_100bbd054();
  IVar1 = param_1 + infoPlistWrapper;
  FUN_100004594();
  return IVar1;
}



/* Address: 0x100bbd08c | _TtC6Sentry23SentryExtensionDetector::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry23SentryExtensionDetector::_cxx_destruct(ID param_1,SEL param_2)

{
  FUN_100004594(param_1 + infoPlistWrapper);
  return;
}



/* Address: 0x100bbd0ac | FUN_100bbd0ac */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100bbd0ac(void)

{
  return ZEXT816(0x100fa36d0);
}



/* Address: 0x100bbd0cc | FUN_100bbd0cc */

void FUN_100bbd0cc(undefined8 param_1)

{
  long unaff_x22;
  undefined8 local_38;
  
  FUN_100bbd8c8();
  local_38 = param_1;
  (**(code **)(unaff_x22 + 0x18))(&local_38);
  return;
}



/* Address: 0x100bbd118 | _TtC6Sentry31SentryDefaultTelemetryProcessor::addLog: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry31SentryDefaultTelemetryProcessor::addLog_(ID param_1,SEL param_2,ID param_3)

{
  _swift_retain(param_1);
  FUN_100bbd0cc(param_3);
  _swift_release(param_1);
  return;
}



/* Address: 0x100bbd15c | FUN_100bbd15c */

double FUN_100bbd15c(double param_1)

{
  long unaff_x20;
  double dVar1;
  
  FUN_100bbd8c8();
  FUN_100bbd8b4();
  dVar1 = param_1;
  FUN_100004640(unaff_x20 + 0x38,*(undefined8 *)(unaff_x20 + 0x50));
  FUN_100bbd8b4();
  return param_1 + dVar1;
}



/* Address: 0x100bbd1ac | _TtC6Sentry31SentryDefaultTelemetryProcessor::forwardTelemetryData */

/* Function Stack Size: 0x10 bytes */

double _TtC6Sentry31SentryDefaultTelemetryProcessor::forwardTelemetryData(ID param_1,SEL param_2)

{
  double in_d0;
  
  _swift_retain();
  FUN_100bbd15c();
  _swift_release(param_1);
  return in_d0;
}



/* Address: 0x100bbd1e8 | FUN_100bbd1e8 */

void FUN_100bbd1e8(void)

{
  long unaff_x20;
  
  FUN_100004594(unaff_x20 + 0x10);
  FUN_100004594(unaff_x20 + 0x38);
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100bbd214 | thunk_FUN_100bbd218 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * thunk_FUN_100bbd218(undefined8 param_1,long param_2)

{
  long lVar1;
  DateEncodingStrategy DVar2;
  undefined7 extraout_var;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  JSONEncoder *this;
  JSONEncoder *pJVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uStack_190;
  long lStack_188;
  undefined4 uStack_17c;
  code *pcStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  undefined *puStack_140;
  undefined8 *apuStack_138 [3];
  undefined *puStack_120;
  undefined *puStack_118;
  undefined8 *apuStack_110 [3];
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  long lStack_70;
  long lVar3;
  
  DVar2 = Foundation::JSONEncoder::DateEncodingStrategy::typeMetadataAccessor();
  lVar3 = CONCAT71(extraout_var,DVar2.value);
  lVar15 = *(long *)(lVar3 + -8);
  lVar13 = (long)&uStack_190 - (*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  lStack_170 = lVar3;
  FUN_100bf0518();
  _swift_allocObject();
  *(undefined8 *)(lVar4 + 0x10) = param_1;
  lVar1 = _TtC6Sentry25SentryDependencyContainer::notificationCenterWrapper;
  _swift_beginAccess(param_2 + _TtC6Sentry25SentryDependencyContainer::notificationCenterWrapper,
                     auStack_d0,0,0);
  uVar12 = *(undefined8 *)(param_2 + lVar1);
  uVar5 = 0;
  FUN_100b8ad24();
  uStack_168 = uVar5;
  _swift_allocObject();
  _swift_unknownObjectRetain(param_1);
  _swift_unknownObjectRetain();
  FUN_100b8aaf4();
  uVar5 = 0;
  uStack_190 = uVar12;
  FUN_100bb06f4();
  uStack_150 = uVar5;
  _objc_allocWithZone();
  pcVar6 = "io.sentry.log-batcher";
  FUN_100bb04d0("io.sentry.log-batcher");
  uStack_158 = 0x100000;
  uStack_160 = 100;
  uStack_80 = 0x100000;
  uStack_88 = 100;
  uStack_90 = 0x4014000000000000;
  pcStack_78 = FUN_100bbd78c;
  lStack_70 = lVar4;
  this = Foundation::JSONEncoder::typeMetadataAccessor();
  pJVar7 = this;
  _swift_allocObject(this,*(undefined4 *)(this + 0x30),*(undefined2 *)(this + 0x34));
  _swift_retain(lVar4);
  pJVar7 = Foundation::JSONEncoder::init(pJVar7);
  uStack_17c = *(undefined4 *)
                PTR___enum_case_for_Foundation_JSONEncoder_DateEncodingStrategy_secondsSince1970_Foundation_JSONEncoder_DateEncodingStrategy_Type___>_Foundation_JSONEncoder_DateEncodingStrategy_100ea6aa8
  ;
  pcStack_178 = *(code **)(lVar15 + 0x68);
  lStack_188 = lVar13;
  (*pcStack_178)(lVar13,uStack_17c,lVar3);
  Foundation::JSONEncoder::set_dateEncodingStrategy(pJVar7,(DateEncodingStrategy)(__int8)lVar13);
  lVar3 = _TtC6Sentry25SentryDependencyContainer::dateProvider;
  _swift_beginAccess(param_2 + _TtC6Sentry25SentryDependencyContainer::dateProvider,auStack_e8,0,0);
  uVar14 = *(undefined8 *)(param_2 + lVar3);
  puVar8 = &DAT_101047300;
  FUN_100b6730c();
  puStack_140 = puVar8;
  _swift_allocObject();
  uVar5 = uStack_190;
  puVar9 = &uStack_90;
  FUN_100bbd79c(puVar9,PTR___swiftEmptyArrayStorage_100eae0d8,0,pJVar7,uVar14,pcVar6,uStack_190,
                puVar8);
  uVar12 = *(undefined8 *)(param_2 + lVar1);
  puStack_148 = puVar9;
  _swift_allocObject(uStack_168,0x28,7);
  _swift_unknownObjectRetain(uVar14);
  _swift_retain(uVar5);
  _swift_unknownObjectRetain(uVar12);
  FUN_100b8aaf4();
  _objc_allocWithZone(uStack_150);
  pcVar6 = "io.sentry.metric-batcher";
  FUN_100bb04d0("io.sentry.metric-batcher");
  uStack_a8 = uStack_158;
  uStack_b0 = uStack_160;
  uStack_b8 = 0x4014000000000000;
  pcStack_a0 = FUN_100bbd794;
  lStack_98 = lVar4;
  _swift_allocObject(this,*(undefined4 *)(this + 0x30),*(undefined2 *)(this + 0x34));
  _swift_retain(lVar4);
  pJVar7 = Foundation::JSONEncoder::init(this);
  lVar1 = lStack_188;
  (*pcStack_178)(lStack_188,uStack_17c,lStack_170);
  Foundation::JSONEncoder::set_dateEncodingStrategy(pJVar7,(DateEncodingStrategy)(__int8)lVar1);
  uVar14 = *(undefined8 *)(param_2 + lVar3);
  puVar8 = &DAT_101047308;
  FUN_100b6730c();
  puVar10 = puVar8;
  _swift_allocObject();
  puVar9 = &uStack_b8;
  FUN_100bbd79c(puVar9,PTR___swiftEmptyArrayStorage_100eae0d8,0,pJVar7,uVar14,pcVar6,uVar12,puVar10)
  ;
  _swift_unknownObjectRetain(uVar14);
  _swift_release(lVar4);
  _swift_release(uVar5);
  puStack_f8 = puStack_140;
  puVar10 = &DAT_101047310;
  FUN_100bbd874(&DAT_101047310,&DAT_101047300);
  apuStack_110[0] = puStack_148;
  puVar11 = &DAT_101047318;
  puStack_120 = puVar8;
  puStack_f0 = puVar10;
  FUN_100bbd874(&DAT_101047318,&DAT_101047308);
  apuStack_138[0] = puVar9;
  puStack_118 = puVar11;
  FUN_100bbd76c();
  _swift_allocObject();
  FUN_100076508(apuStack_110,puVar11 + 0x10);
  FUN_100076508(apuStack_138,puVar11 + 0x38);
  return puVar11;
}



/* Address: 0x100bbd218 | FUN_100bbd218 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_100bbd218(undefined8 param_1,long param_2)

{
  long lVar1;
  DateEncodingStrategy DVar2;
  undefined7 extraout_var;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  JSONEncoder *this;
  JSONEncoder *pJVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 local_190;
  long local_188;
  undefined4 local_17c;
  code *local_178;
  long local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 *local_148;
  undefined *local_140;
  undefined8 *local_138 [3];
  undefined *local_120;
  undefined *local_118;
  undefined8 *local_110 [3];
  undefined *local_f8;
  undefined *local_f0;
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  code *local_a0;
  long lStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  code *local_78;
  long lStack_70;
  long lVar3;
  
  DVar2 = Foundation::JSONEncoder::DateEncodingStrategy::typeMetadataAccessor();
  lVar3 = CONCAT71(extraout_var,DVar2.value);
  lVar15 = *(long *)(lVar3 + -8);
  lVar13 = (long)&local_190 - (*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  local_170 = lVar3;
  FUN_100bf0518();
  _swift_allocObject();
  *(undefined8 *)(lVar4 + 0x10) = param_1;
  lVar1 = _TtC6Sentry25SentryDependencyContainer::notificationCenterWrapper;
  _swift_beginAccess(param_2 + _TtC6Sentry25SentryDependencyContainer::notificationCenterWrapper,
                     auStack_d0,0,0);
  uVar12 = *(undefined8 *)(param_2 + lVar1);
  uVar5 = 0;
  FUN_100b8ad24();
  local_168 = uVar5;
  _swift_allocObject();
  _swift_unknownObjectRetain(param_1);
  _swift_unknownObjectRetain();
  FUN_100b8aaf4();
  uVar5 = 0;
  local_190 = uVar12;
  FUN_100bb06f4();
  local_150 = uVar5;
  _objc_allocWithZone();
  pcVar6 = "io.sentry.log-batcher";
  FUN_100bb04d0("io.sentry.log-batcher");
  uStack_158 = 0x100000;
  local_160 = 100;
  uStack_80 = 0x100000;
  local_88 = 100;
  local_90 = 0x4014000000000000;
  local_78 = FUN_100bbd78c;
  lStack_70 = lVar4;
  this = Foundation::JSONEncoder::typeMetadataAccessor();
  pJVar7 = this;
  _swift_allocObject(this,*(undefined4 *)(this + 0x30),*(undefined2 *)(this + 0x34));
  _swift_retain(lVar4);
  pJVar7 = Foundation::JSONEncoder::init(pJVar7);
  local_17c = *(undefined4 *)
               PTR___enum_case_for_Foundation_JSONEncoder_DateEncodingStrategy_secondsSince1970_Foundation_JSONEncoder_DateEncodingStrategy_Type___>_Foundation_JSONEncoder_DateEncodingStrategy_100ea6aa8
  ;
  local_178 = *(code **)(lVar15 + 0x68);
  local_188 = lVar13;
  (*local_178)(lVar13,local_17c,lVar3);
  Foundation::JSONEncoder::set_dateEncodingStrategy(pJVar7,(DateEncodingStrategy)(__int8)lVar13);
  lVar3 = _TtC6Sentry25SentryDependencyContainer::dateProvider;
  _swift_beginAccess(param_2 + _TtC6Sentry25SentryDependencyContainer::dateProvider,auStack_e8,0,0);
  uVar14 = *(undefined8 *)(param_2 + lVar3);
  puVar8 = &DAT_101047300;
  FUN_100b6730c();
  local_140 = puVar8;
  _swift_allocObject();
  uVar5 = local_190;
  puVar9 = &local_90;
  FUN_100bbd79c(puVar9,PTR___swiftEmptyArrayStorage_100eae0d8,0,pJVar7,uVar14,pcVar6,local_190,
                puVar8);
  uVar12 = *(undefined8 *)(param_2 + lVar1);
  local_148 = puVar9;
  _swift_allocObject(local_168,0x28,7);
  _swift_unknownObjectRetain(uVar14);
  _swift_retain(uVar5);
  _swift_unknownObjectRetain(uVar12);
  FUN_100b8aaf4();
  _objc_allocWithZone(local_150);
  pcVar6 = "io.sentry.metric-batcher";
  FUN_100bb04d0("io.sentry.metric-batcher");
  uStack_a8 = uStack_158;
  local_b0 = local_160;
  local_b8 = 0x4014000000000000;
  local_a0 = FUN_100bbd794;
  lStack_98 = lVar4;
  _swift_allocObject(this,*(undefined4 *)(this + 0x30),*(undefined2 *)(this + 0x34));
  _swift_retain(lVar4);
  pJVar7 = Foundation::JSONEncoder::init(this);
  lVar1 = local_188;
  (*local_178)(local_188,local_17c,local_170);
  Foundation::JSONEncoder::set_dateEncodingStrategy(pJVar7,(DateEncodingStrategy)(__int8)lVar1);
  uVar14 = *(undefined8 *)(param_2 + lVar3);
  puVar8 = &DAT_101047308;
  FUN_100b6730c();
  puVar10 = puVar8;
  _swift_allocObject();
  puVar9 = &local_b8;
  FUN_100bbd79c(puVar9,PTR___swiftEmptyArrayStorage_100eae0d8,0,pJVar7,uVar14,pcVar6,uVar12,puVar10)
  ;
  _swift_unknownObjectRetain(uVar14);
  _swift_release(lVar4);
  _swift_release(uVar5);
  local_f8 = local_140;
  puVar10 = &DAT_101047310;
  FUN_100bbd874(&DAT_101047310,&DAT_101047300);
  local_110[0] = local_148;
  puVar11 = &DAT_101047318;
  local_120 = puVar8;
  local_f0 = puVar10;
  FUN_100bbd874(&DAT_101047318,&DAT_101047308);
  local_138[0] = puVar9;
  local_118 = puVar11;
  FUN_100bbd76c();
  _swift_allocObject();
  FUN_100076508(local_110,puVar11 + 0x10);
  FUN_100076508(local_138,puVar11 + 0x38);
  return puVar11;
}



/* Address: 0x100bbd624 | _TtC6Sentry31SentryTelemetryProcessorFactory::getProcessorWithTransport:dependencies: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID _TtC6Sentry31SentryTelemetryProcessorFactory::getProcessorWithTransport_dependencies_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  
  _swift_unknownObjectRetain(param_3);
  IVar1 = param_3;
  thunk_FUN_100bbd218(param_3,param_4);
  _swift_unknownObjectRelease(param_3);
  return IVar1;
}



/* Address: 0x100bbd684 | FUN_100bbd684 */

void FUN_100bbd684(void)

{
  FUN_100bf0338();
  return;
}



/* Address: 0x100bbd6a8 | FUN_100bbd6a8 */

void FUN_100bbd6a8(void)

{
  FUN_100bf0338();
  return;
}



/* Address: 0x100bbd6cc | FUN_100bbd6cc */

void FUN_100bbd6cc(void)

{
  FUN_100bbd6fc();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"init");
  return;
}



/* Address: 0x100bbd6fc | FUN_100bbd6fc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100bbd6fc(void)

{
  return ZEXT816(0x100fa3790);
}



/* Address: 0x100bbd71c | _TtC6Sentry31SentryTelemetryProcessorFactory::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry31SentryTelemetryProcessorFactory::init(ID param_1,SEL param_2)

{
  FUN_100bbd6cc();
  return param_1;
}



/* Address: 0x100bbd73c | FUN_100bbd73c */

void FUN_100bbd73c(void)

{
  FUN_100bbd6fc();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x100bbd76c | FUN_100bbd76c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100bbd76c(void)

{
  return ZEXT816(0x101047258);
}



/* Address: 0x100bbd78c | FUN_100bbd78c */

void FUN_100bbd78c(void)

{
  FUN_100bbd684();
  return;
}



/* Address: 0x100bbd794 | FUN_100bbd794 */

void FUN_100bbd794(void)

{
  FUN_100bbd6a8();
  return;
}



/* Address: 0x100bbd79c | FUN_100bbd79c */

long FUN_100bbd79c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = 0;
  FUN_100bb06f4();
  *(undefined8 *)(param_8 + 0x70) = uVar1;
  *(undefined ***)(param_8 + 0x78) = &PTR_PTR_100f39f80;
  *(undefined8 *)(param_8 + 0x58) = param_6;
  uVar1 = 0;
  FUN_100b8ad24();
  *(undefined8 *)(param_8 + 0x80) = param_7;
  *(undefined8 *)(param_8 + 0x98) = uVar1;
  *(undefined ***)(param_8 + 0xa0) = &PTR_PTR_100f37ec0;
  *(undefined8 *)(param_8 + 0x40) = param_3;
  *(undefined8 *)(param_8 + 0x48) = param_4;
  *(undefined8 *)(param_8 + 0xa8) = 0;
  uVar2 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  *(undefined8 *)(param_8 + 0x18) = param_1[1];
  *(undefined8 *)(param_8 + 0x10) = uVar2;
  *(undefined8 *)(param_8 + 0x28) = uVar4;
  *(undefined8 *)(param_8 + 0x20) = uVar3;
  *(undefined8 *)(param_8 + 0x30) = param_1[4];
  *(undefined8 *)(param_8 + 0x38) = param_2;
  *(undefined8 *)(param_8 + 0x50) = param_5;
  FUN_100004640((undefined8 *)(param_8 + 0x80),uVar1);
  FUN_100b8ad44(param_8,&PTR_PTR_100f3c598,uVar1,&PTR_PTR_100f37ec0);
  return param_8;
}



/* Address: 0x100bbd874 | FUN_100bbd874 */

void FUN_100bbd874(long *param_1,undefined8 param_2)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (*param_1 == 0) {
    FUN_100b6734c(param_2);
    pTVar1 = &TargetProtocolConformanceDescriptor_100c9ec34;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9ec34,param_2);
    *param_1 = (long)pTVar1;
  }
  return;
}



/* Address: 0x100bbd8b4 | FUN_100bbd8b4 */

void FUN_100bbd8b4(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000100bbd8c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 0x20))();
  return;
}



/* Address: 0x100bbd8c8 | FUN_100bbd8c8 */

void FUN_100bbd8c8(void)

{
  long unaff_x20;
  
  FUN_100004640(unaff_x20 + 0x10,*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x100bbd8d8 | FUN_100bbd8d8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100bbd8d8(byte *param_1,undefined8 *param_2,undefined *param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  byte bVar10;
  undefined **ppuVar11;
  long lVar12;
  code *extraout_x9;
  undefined8 *puVar13;
  undefined8 *unaff_x20;
  char *pcVar14;
  undefined8 unaff_x22;
  long lVar15;
  undefined8 unaff_x23;
  undefined8 *unaff_x24;
  ulong unaff_x25;
  undefined8 *unaff_x26;
  undefined8 unaff_x27;
  char *unaff_x29;
  void *unaff_x30;
  float fVar16;
  String SVar17;
  undefined1 in_stack_00000000;
  char *in_stack_00000038;
  undefined8 in_stack_00000050;
  undefined auStack_61 [9];
  undefined1 auStack_58 [40];
  
  puVar2 = &stack0xffffffffffffffd0;
  puVar9 = &stack0xfffffffffffffff0;
  puVar13 = (undefined8 *)*unaff_x20;
  bVar10 = *(byte *)(unaff_x20 + 2);
  ppuVar11 = (undefined **)(ulong)bVar10;
  puVar3 = &stack0xffffffffffffffd0;
  puVar4 = &stack0xffffffffffffffd0;
  switch(bVar10) {
  default:
    param_2 = (undefined8 *)unaff_x20[1];
  case 0x44:
  case 0x48:
  case 0x52:
  case 0x92:
  case 0xac:
  case 0xba:
  case 0xfa:
    ppuVar11 = (undefined **)PTR___type_metadata_for_Swift_String_100eac208;
switchD_100bbd908_caseD_3a:
    *(undefined ***)(param_1 + 0x18) = ppuVar11;
switchD_100bbd908_caseD_8:
    *(undefined8 **)param_1 = puVar13;
    *(undefined8 **)(param_1 + 8) = param_2;
switchD_100bbd908_caseD_ec:
    goto switchD_100bbd908_caseD_1b;
  case 1:
  case 0x31:
    ppuVar11 = &PTR_Swift__UnsafePointer_100eac000;
  case 0x23:
    *(char **)(param_1 + 0x18) = ((String *)((long)ppuVar11 + 0x570))->str;
    bVar10 = (byte)puVar13 & 1;
switchD_100bbd908_caseD_14:
    *param_1 = bVar10;
switchD_100bbd908_caseD_4d:
switchD_100bbd908_caseD_1a:
    FUN_100b56e60();
    return;
  case 2:
  case 0x24:
  case 0x28:
    ppuVar11 = &PTR_Swift__UnsafePointer_100eac000;
  case 0x2c:
    ppuVar11 = ((String *)((long)ppuVar11 + 0x6f0))->bridgeObject;
switchD_100bbd908_caseD_74:
switchD_100bbd908_caseD_2b:
    *(undefined ***)(param_1 + 0x18) = ppuVar11;
switchD_100bbd908_caseD_2f:
    *(undefined8 **)param_1 = puVar13;
switchD_100bbd908_caseD_22:
    goto switchD_100bbd908_caseD_4d;
  case 3:
  case 0x1c:
  case 0x2a:
    ppuVar11 = &PTR_Swift__UnsafePointer_100eac000;
  case 0x34:
    ppuVar11 = (undefined **)((String *)((long)ppuVar11 + 0x5d0))->str;
    goto switchD_100bbd908_caseD_2b;
  case 4:
    param_2 = (undefined8 *)0x101044000;
  case 0x76:
  case 0xde:
  case 0xe6:
  case 0xee:
    param_2 = param_2 + 0x101;
    break;
  case 5:
  case 0x27:
  case 0x30:
    param_2 = (undefined8 *)0x101044000;
  case 0x8c:
    param_2 = param_2 + 0x11c;
    break;
  case 6:
    param_2 = (undefined8 *)&DAT_1010448e8;
    break;
  case 7:
    param_2 = (undefined8 *)&DAT_1010448f0;
    break;
  case 8:
  case 0x6c:
  case 0xb4:
  case 0xd4:
    goto switchD_100bbd908_caseD_8;
  case 9:
    goto switchD_100bbd908_caseD_9;
  case 10:
    goto switchD_100bbd908_caseD_a;
  case 0xb:
    goto switchD_100bbd908_caseD_b;
  case 0x11:
    goto switchD_100bbd908_caseD_11;
  case 0x12:
  case 0x21:
    goto switchD_100bbd908_caseD_12;
  case 0x13:
  case 0x36:
  case 0x4a:
  case 0x5e:
  case 0x72:
  case 0x7a:
  case 0x82:
  case 0x8a:
  case 0x9e:
  case 0xb2:
  case 0xc6:
  case 0xda:
  case 0xe2:
  case 0xea:
  case 0xf2:
    goto switchD_100bbd908_caseD_13;
  case 0x14:
    goto switchD_100bbd908_caseD_14;
  case 0x15:
    goto switchD_100bbd908_caseD_15;
  case 0x16:
    goto switchD_100bbd908_caseD_16;
  case 0x17:
    goto switchD_100bbd908_caseD_17;
  case 0x19:
    goto switchD_100bbd908_caseD_19;
  case 0x1a:
  case 0xb5:
    goto switchD_100bbd908_caseD_1a;
  case 0x1b:
  case 0x7c:
    goto switchD_100bbd908_caseD_1b;
  case 0x1d:
    goto switchD_100bbd908_caseD_1d;
  case 0x1e:
    uVar7 = (ulong)param_2 & 0xffff00000000ffff | 0x7961720000;
    goto switchD_100bbda5c_caseD_0;
  case 0x1f:
    goto switchD_100bbd908_caseD_1f;
  case 0x22:
  case 0x2d:
    goto switchD_100bbd908_caseD_22;
  case 0x25:
    puVar2 = &stack0xffffffffffffff70;
    goto switchD_100bbd908_caseD_13;
  case 0x26:
    goto switchD_100bbd908_caseD_26;
  case 0x2b:
    goto switchD_100bbd908_caseD_2b;
  case 0x2f:
    goto switchD_100bbd908_caseD_2f;
  case 0x35:
  case 0x49:
    goto switchD_100bbd908_caseD_35;
  case 0x38:
  case 0xc1:
    goto switchD_100bbd908_caseD_38;
  case 0x39:
  case 0x61:
  case 0xa1:
  case 0xc9:
    goto switchD_100bbd908_caseD_39;
  case 0x3a:
  case 0x42:
  case 0x62:
  case 0x6a:
  case 0xa2:
  case 0xaa:
  case 0xca:
  case 0xd2:
    goto switchD_100bbd908_caseD_3a;
  case 0x4c:
  case 200:
    goto switchD_100bbd908_caseD_4c;
  case 0x4d:
  case 0x7d:
  case 0x85:
  case 0x8d:
  case 0xf5:
    goto switchD_100bbd908_caseD_4d;
  case 0x4e:
  case 0x7e:
  case 0x86:
  case 0x8e:
  case 0xb6:
  case 0xf6:
    goto switchD_100bbd908_caseD_4e;
  case 0x4f:
  case 0x7f:
  case 0x87:
  case 0x8f:
  case 0xb7:
  case 0xf7:
    puVar13 = param_2;
    FUN_10000cbfc(param_2,&stack0x00000038);
    puVar6 = PTR___type_metadata_for_Any_100eae0c0;
    iVar5 = (int)puVar13;
    FUN_100bbef2c();
    if (iVar5 != 0) {
      ((String *)ppuVar11)->str = unaff_x29;
      ((String *)ppuVar11)->bridgeObject = unaff_x30;
LAB_100bbdd3c:
      *(undefined1 *)&((String *)((long)ppuVar11 + 0x10))->str = 0;
      return;
    }
    FUN_100bbef40();
    FUN_100bbef2c();
    if (iVar5 == 0) {
      FUN_100bbef40();
      FUN_100bbef2c();
      if (iVar5 == 0) {
        FUN_100bbef40();
        FUN_100bbef2c();
        if (iVar5 == 0) {
          FUN_100bbef40();
          FUN_100bbef2c();
          if (iVar5 == 0) {
            FUN_100bbef40();
            iVar5 = 0x1044808;
            FUN_100b6730c();
            FUN_100bbef2c();
            if (iVar5 == 0) {
              FUN_100bbef40();
              iVar5 = 0x10448e0;
              FUN_100b6730c();
              FUN_100bbef2c();
              if (iVar5 == 0) {
                FUN_100bbef40();
                iVar5 = 0x10448e8;
                FUN_100b6730c();
                FUN_100bbef2c();
                if (iVar5 != 0) {
                  FUN_100bbefdc();
                  *(undefined1 *)&((String *)((long)ppuVar11 + 0x10))->str = 6;
                  return;
                }
                FUN_100bbef40();
                iVar5 = 0x10448f0;
                FUN_100b6730c();
                FUN_100bbef2c();
                if (iVar5 == 0) {
                  FUN_100bbef40();
                  iVar5 = 0x1044948;
                  FUN_100b6730c();
                  FUN_100bbef2c();
                  if (iVar5 == 0) {
                    FUN_100bbef40();
                    FUN_100bbef2c();
                    if (iVar5 == 0) {
                      FUN_100bbef40();
                      iVar5 = 0;
                      FUN_100b69598();
                      FUN_100bbef2c();
                      if (iVar5 != 0) {
                        FUN_100b690bc(ppuVar11);
                        return;
                      }
                      FUN_10000cbfc(param_2,&stack0x00000018);
                      puVar8 = &DAT_101044950;
                      FUN_100b6730c(&DAT_101044950);
                      puVar9 = &stack0xfffffffffffffff0;
                      _swift_dynamicCast(puVar9,&stack0x00000018,puVar6 + 8,puVar8,6);
                      if ((int)puVar9 != 0) {
                        FUN_100076508(&stack0xfffffffffffffff0,&stack0x00000038);
                        FUN_100004640(&stack0x00000038,in_stack_00000050);
                        FUN_100b9fdbc(ppuVar11);
                        (*extraout_x9)();
                        FUN_100004594(&stack0x00000038);
                        return;
                      }
                      FUN_100bbed68(&stack0xfffffffffffffff0);
                      FUN_100bbef40();
                      SVar17 = Swift::String::_init(&stack0x00000038,puVar6 + 8);
                      *(String *)ppuVar11 = SVar17;
                      goto LAB_100bbdd3c;
                    }
                    ((String *)ppuVar11)->bridgeObject = unaff_x30;
                    ((String *)ppuVar11)->str = unaff_x29;
                    goto LAB_100bbddd0;
                  }
                  lVar15 = *(long *)(unaff_x29 + 0x10);
                  if (lVar15 == 0) {
                    _swift_bridgeObjectRelease(unaff_x29);
                    pcVar14 = PTR___swiftEmptyArrayStorage_100eae0d8;
                  }
                  else {
                    in_stack_00000038 = PTR___swiftEmptyArrayStorage_100eae0d8;
                    FUN_100b69544(0,lVar15,0);
                    lVar12 = 0x20;
                    uVar7 = *(ulong *)(in_stack_00000038 + 0x10);
                    do {
                      fVar16 = *(float *)(unaff_x29 + lVar12);
                      uVar1 = uVar7 + 1;
                      if (*(ulong *)(in_stack_00000038 + 0x18) >> 1 <= uVar7) {
                        FUN_100b69544(1 < *(ulong *)(in_stack_00000038 + 0x18),uVar1,1);
                      }
                      pcVar14 = in_stack_00000038;
                      *(ulong *)(in_stack_00000038 + 0x10) = uVar1;
                      *(double *)(in_stack_00000038 + uVar7 * 8 + 0x20) = (double)fVar16;
                      lVar12 = lVar12 + 4;
                      lVar15 = lVar15 + -1;
                      uVar7 = uVar1;
                    } while (lVar15 != 0);
                    _swift_bridgeObjectRelease(unaff_x29);
                  }
                  ((String *)ppuVar11)->str = pcVar14;
                }
                else {
                  ((String *)ppuVar11)->str = unaff_x29;
                }
                ((String *)ppuVar11)->bridgeObject = (void *)0x0;
                in_stack_00000000 = 7;
              }
              else {
                FUN_100bbefdc();
                in_stack_00000000 = 5;
              }
            }
            else {
              FUN_100bbefdc();
              in_stack_00000000 = 4;
            }
            goto LAB_100bbddd0;
          }
          ((String *)ppuVar11)->str = (char *)(double)SUB84(unaff_x29,0);
        }
        else {
          ((String *)ppuVar11)->str = unaff_x29;
        }
        ((String *)ppuVar11)->bridgeObject = (void *)0x0;
        in_stack_00000000 = 3;
      }
      else {
        FUN_100bbefdc();
        in_stack_00000000 = 2;
      }
    }
    else {
      ((String *)ppuVar11)->str = (char *)((ulong)unaff_x29 & 0xff);
      ((String *)ppuVar11)->bridgeObject = (void *)0x0;
      in_stack_00000000 = 1;
    }
LAB_100bbddd0:
    *(undefined1 *)&((String *)((long)ppuVar11 + 0x10))->str = in_stack_00000000;
    return;
  case 0x58:
    unaff_x20 = unaff_x20 + 0x101;
    FUN_100bbefa8();
    param_6 = (undefined8 *)&DAT_101047348;
    param_4 = (undefined8 *)
              PTR___protocol_witness_table_for_Swift_String___Swift_Encodable_in_Swift_100eac210;
    goto LAB_100bbdc14;
  case 0x59:
  case 0x99:
    goto switchD_100bbd908_caseD_59;
  case 0x5a:
  case 0x9a:
  case 0xc2:
    goto switchD_100bbd908_caseD_5a;
  case 0x5c:
    goto switchD_100bbd908_caseD_5c;
  case 0x5d:
  case 0x71:
  case 0x79:
  case 0x81:
  case 0x89:
  case 0x9c:
  case 0x9d:
  case 0xb1:
  case 0xc5:
  case 0xd9:
  case 0xe1:
  case 0xe9:
  case 0xf1:
    param_2 = (undefined8 *)((long)param_2 + 0x94);
    goto switchD_100bbd908_caseD_35;
  case 0x60:
    param_6 = param_2;
    param_2 = unaff_x24;
    goto LAB_100bbdc14;
  case 0x70:
  case 0x78:
  case 0x80:
  case 0x88:
    puVar13 = param_2;
  case 0xdd:
  case 0xe5:
    param_2 = (undefined8 *)*param_2;
switchD_100bbd908_caseD_75:
    if (param_2 == (undefined8 *)0x0) {
      FUN_100b6734c(param_3);
switchD_100bbd908_caseD_4e:
      param_4 = (undefined8 *)&stack0xffffffffffffffd8;
      param_2 = (undefined8 *)PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100eac510;
switchD_100bbd908_caseD_5c:
      _swift_getWitnessTable(param_2,param_3,param_4);
      *puVar13 = param_2;
    }
    return;
  case 0x74:
    goto switchD_100bbd908_caseD_74;
  case 0x75:
    goto switchD_100bbd908_caseD_75;
  case 0x84:
  case 0xc0:
    break;
  case 0x98:
    goto switchD_100bbd908_caseD_98;
  case 0xa0:
    uVar7 = (ulong)param_2 & 0xffff | 0x72656765740000;
switchD_100bbda5c_caseD_0:
    auStack_58[0] = 0;
    FUN_100bbefb0(uVar7);
    Swift::KeyedEncodingContainer::_encode();
    if (param_1 != (byte *)0x0) {
      FUN_100bbef94();
      _swift_bridgeObjectRelease();
      return;
    }
    _swift_bridgeObjectRelease();
                    /* WARNING: Could not recover jumptable at 0x000100bbdac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(&BYTE_100c9cd40)[unaff_x25 & 0xffffffff] * 4 + 0x100bbdac4))();
    return;
  case 0xb0:
    goto switchD_100bbd908_caseD_b0;
  case 0xc4:
  case 0xed:
    goto switchD_100bbd908_caseD_c4;
  case 0xd8:
  case 0xe0:
  case 0xe8:
  case 0xf0:
    FUN_100bbef84();
    unaff_x20 = (undefined8 *)&DAT_1010448e8;
    FUN_100bbefa8();
    param_6 = (undefined8 *)&DAT_101047338;
    param_4 = (undefined8 *)
              PTR___protocol_witness_table_for_Swift_Int___Swift_Encodable_in_Swift_100eac700;
LAB_100bbdc14:
    FUN_100bbdca4(param_6,unaff_x20,param_4);
    unaff_x24 = param_2;
switchD_100bbd908_caseD_c4:
    param_2 = (undefined8 *)auStack_58;
    param_3 = auStack_61;
    param_4 = puVar13;
switchD_100bbd908_caseD_98:
    FUN_100bbefb0(param_2,param_3,param_4,unaff_x24,param_6);
    Swift::KeyedEncodingContainer::_encode();
LAB_100bbdc38:
    FUN_100bbef94();
switchD_100bbd908_caseD_b0:
    return;
  case 0xdc:
  case 0xe4:
    FUN_100bbefb0(param_2,param_3,puVar13);
    Swift::KeyedEncodingContainer::_encode();
    goto LAB_100bbdc38;
  case 0xec:
    goto switchD_100bbd908_caseD_ec;
  case 0xf4:
    goto switchD_100bbd908_caseD_f4;
  }
  FUN_100b6730c();
switchD_100bbd908_caseD_a:
  *(undefined8 **)(param_1 + 0x18) = param_2;
switchD_100bbd908_caseD_12:
  *(undefined8 **)param_1 = puVar13;
  param_2 = puVar13;
switchD_100bbd908_caseD_1b:
switchD_100bbd908_caseD_b:
  _swift_bridgeObjectRetain(param_2);
  return;
switchD_100bbd908_caseD_35:
  param_3 = &DAT_100f3a000;
switchD_100bbd908_caseD_59:
  param_3 = param_3 + 0xb60;
switchD_100bbd908_caseD_38:
  _swift_getWitnessTable(param_2,param_3);
  DAT_101047328 = param_2;
switchD_100bbd908_caseD_f4:
  return;
switchD_100bbd908_caseD_13:
  *(undefined8 *)(puVar2 + 0x10) = unaff_x27;
  *(undefined8 **)(puVar2 + 0x18) = unaff_x26;
  puVar3 = puVar2;
switchD_100bbd908_caseD_39:
  *(ulong *)(puVar3 + 0x20) = unaff_x25;
  *(undefined8 **)(puVar3 + 0x28) = unaff_x24;
  puVar4 = puVar3;
switchD_100bbd908_caseD_9:
  *(undefined8 *)(puVar4 + 0x30) = unaff_x23;
  *(undefined8 *)(puVar4 + 0x38) = unaff_x22;
  *(undefined8 **)(puVar4 + 0x40) = unaff_x20;
  *(undefined8 **)(puVar4 + 0x48) = puVar13;
  *(undefined1 **)(puVar4 + 0x50) = puVar9;
  *(void **)(puVar4 + 0x58) = unaff_x30;
  puVar9 = puVar4 + 0x50;
switchD_100bbd908_caseD_26:
switchD_100bbd908_caseD_17:
switchD_100bbd908_caseD_1f:
  puVar6 = &DAT_101047320;
  FUN_100b6730c();
  lVar15 = *(long *)(puVar6 + -8);
  *(long *)(puVar9 + -0x60) = lVar15;
  FUN_100bbefbc(*(undefined8 *)(lVar15 + 0x40));
  unaff_x26 = param_2;
switchD_100bbd908_caseD_11:
  param_2 = unaff_x26;
  *(undefined8 *)(puVar9 + -0x68) = unaff_x20[1];
  unaff_x25 = (ulong)*(byte *)(unaff_x20 + 2);
  unaff_x27 = param_2[3];
switchD_100bbd908_caseD_19:
  FUN_100004640(param_2,unaff_x27);
switchD_100bbd908_caseD_15:
  FUN_100bbdc64();
switchD_100bbd908_caseD_5a:
switchD_100bbd908_caseD_1d:
  Swift::Encoder::_container();
switchD_100bbd908_caseD_16:
  param_2 = (undefined8 *)&DAT_676e69727473;
  ppuVar11 = (undefined **)&UNK_100c9c000;
switchD_100bbd908_caseD_4c:
                    /* WARNING: Could not recover jumptable at 0x000100bbda5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)*(byte *)((long)&((String *)((long)ppuVar11 + 0xd30))->bridgeObject + unaff_x25)
             * 4 + 0x100bbda60))(param_2);
  return;
}



/* Address: 0x100bbd9ac | switchD_100bbd908::caseD_25 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void switchD_100bbd908::caseD_25(undefined *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  String *pSVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  byte *pbVar8;
  long lVar9;
  undefined *puVar10;
  ulong uVar11;
  code *extraout_x9;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar12;
  undefined8 *unaff_x20;
  char *pcVar13;
  undefined *unaff_x21;
  byte unaff_w22;
  long lVar14;
  undefined *puVar15;
  undefined8 unaff_x25;
  undefined *puVar16;
  byte unaff_w27;
  char *unaff_x28;
  float fVar17;
  String SVar18;
  undefined8 uStack_68;
  char *local_58;
  
  iVar2 = (int)&stack0xffffffffffffffa0;
  pSVar4 = (String *)&DAT_101047320;
  FUN_100b6730c();
  FUN_100bbefbc(*(undefined8 *)((long)pSVar4[-1].bridgeObject + 0x40));
  puVar15 = (undefined *)*unaff_x20;
  uVar7 = unaff_x20[1];
  bVar1 = *(byte *)(unaff_x20 + 2);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100bbdc64();
  Swift::Encoder::_container();
  puVar16 = &DAT_e600000000000000;
  puVar5 = &DAT_676e69727473;
  pbVar8 = &switchD_100bbda5c::switchdataD_100c9cd38;
  UNRECOVERED_JUMPTABLE =
       (code *)(ulong)(&switchD_100bbda5c::switchdataD_100c9cd38)[(long)(ulong)bVar1];
  puVar10 = (undefined *)((long)UNRECOVERED_JUMPTABLE * 4 + 0x100bbda60);
  puVar6 = puVar5;
  switch(bVar1) {
  case 0:
  case 100:
  case 0xac:
  case 0xcc:
    goto switchD_100bbda5c_caseD_0;
  case 1:
    puVar16 = &DAT_e700000000000000;
    puVar5 = (undefined *)0x61656c6f6f62;
  case 0x1e:
    puVar5 = (undefined *)((ulong)puVar5 | 0x6e000000000000);
switchD_100bbda5c_caseD_f:
switchD_100bbda5c_caseD_0:
    local_58 = (char *)((ulong)local_58 & 0xffffffffffffff00);
switchD_100bbda5c_caseD_e4:
switchD_100bbda5c_caseD_6e:
    FUN_100bbefb0(puVar5);
switchD_100bbda5c_caseD_1c:
    Swift::KeyedEncodingContainer::_encode();
switchD_100bbda5c_caseD_24:
switchD_100bbda5c_caseD_6c:
    if (unaff_x21 == (undefined *)0x0) {
switchD_100bbda5c_caseD_1a:
      _swift_bridgeObjectRelease(puVar16);
      puVar10 = &UNK_100c9c000;
      pbVar8 = (byte *)(ulong)bVar1;
      goto switchD_100bbda5c_caseD_29;
    }
switchD_100bbda5c_caseD_14:
    FUN_100bbef94();
    goto switchD_100bbda5c_caseD_2c;
  case 2:
    puVar16 = &DAT_e700000000000000;
  case 10:
  case 0x19:
    puVar5 = (undefined *)0x65746e69;
switchD_100bbda5c_caseD_13:
    puVar5 = (undefined *)((ulong)puVar5 & 0xffff0000ffffffff | 0x72656700000000);
    goto switchD_100bbda5c_caseD_0;
  case 3:
    puVar5 = (undefined *)0x6f64;
  case 0x1d:
    puVar5 = (undefined *)((ulong)puVar5 & 0xffffffff0000ffff | 0x62750000);
switchD_100bbda5c_caseD_b:
    puVar5 = (undefined *)((ulong)puVar5 & 0xffff0000ffffffff | 0x656c00000000);
switchD_100bbda5c_caseD_31:
    goto switchD_100bbda5c_caseD_0;
  default:
    puVar16 = &DAT_e500000000000000;
  case 0x3c:
  case 0x40:
  case 0x4a:
  case 0x8a:
  case 0xa4:
  case 0xb2:
  case 0xf2:
    puVar5 = (undefined *)0x61727261;
switchD_100bbda5c_caseD_32:
    puVar5 = (undefined *)((ulong)puVar5 & 0xffff0000ffffffff | 0x7900000000);
    goto switchD_100bbda5c_caseD_0;
  case 9:
    goto switchD_100bbda5c_caseD_9;
  case 0xb:
  case 0x2e:
  case 0x42:
  case 0x56:
  case 0x6a:
  case 0x72:
  case 0x7a:
  case 0x82:
  case 0x96:
  case 0xaa:
  case 0xbe:
  case 0xd2:
  case 0xda:
  case 0xe2:
  case 0xea:
  case 0xfe:
    goto switchD_100bbda5c_caseD_b;
  case 0xc:
    goto switchD_100bbda5c_caseD_c;
  case 0xd:
    goto switchD_100bbda5c_caseD_d;
  case 0xe:
    goto switchD_100bbda5c_caseD_e;
  case 0xf:
    goto switchD_100bbda5c_caseD_f;
  case 0x11:
    FUN_100bbefb0();
    Swift::KeyedEncodingContainer::_encode();
    goto switchD_100bbda5c_caseD_d;
  case 0x12:
  case 0xad:
    goto switchD_100bbda5c_caseD_12;
  case 0x13:
  case 0x74:
    goto switchD_100bbda5c_caseD_13;
  case 0x14:
  case 0x22:
    goto switchD_100bbda5c_caseD_14;
  case 0x15:
    FUN_100bbef84();
    param_1 = (undefined *)0x101044000;
    goto switchD_100bbda5c_caseD_e;
  case 0x16:
    FUN_100bbefb0();
    Swift::KeyedEncodingContainer::_encode();
    break;
  case 0x17:
    FUN_100bbef84();
    param_1 = &DAT_101044808;
    FUN_100bbefa8();
    puVar6 = &DAT_101047348;
    puVar15 = puVar5;
    goto switchD_100bbda5c_caseD_9;
  case 0x1a:
  case 0x25:
    goto switchD_100bbda5c_caseD_1a;
  case 0x1b:
    goto switchD_100bbda5c_caseD_1b;
  case 0x1c:
  case 0x20:
    goto switchD_100bbda5c_caseD_1c;
  case 0x1f:
  case 0x28:
    goto switchD_100bbda5c_caseD_1f;
  case 0x23:
    goto switchD_100bbda5c_caseD_23;
  case 0x24:
    goto switchD_100bbda5c_caseD_24;
  case 0x27:
    goto switchD_100bbda5c_caseD_27;
  case 0x29:
    goto switchD_100bbda5c_caseD_29;
  case 0x2c:
    goto switchD_100bbda5c_caseD_2c;
  case 0x2d:
  case 0x41:
    goto switchD_100bbda5c_caseD_2d;
  case 0x30:
  case 0xb9:
  case 0xf9:
    goto switchD_100bbda5c_caseD_30;
  case 0x31:
  case 0x59:
  case 0x99:
  case 0xc1:
    goto switchD_100bbda5c_caseD_31;
  case 0x32:
  case 0x3a:
  case 0x5a:
  case 0x62:
  case 0x9a:
  case 0xa2:
  case 0xc2:
  case 0xca:
    goto switchD_100bbda5c_caseD_32;
  case 0x44:
  case 0xc0:
    goto switchD_100bbda5c_caseD_44;
  case 0x45:
  case 0x75:
  case 0x7d:
  case 0x85:
  case 0xed:
    FUN_100bbefe8();
    goto switchD_100bbda5c_caseD_12;
  case 0x46:
  case 0x76:
  case 0x7e:
  case 0x86:
  case 0xae:
  case 0xee:
    goto switchD_100bbda5c_caseD_46;
  case 0x47:
  case 0x77:
  case 0x7f:
  case 0x87:
  case 0xaf:
  case 0xef:
    goto switchD_100bbda5c_caseD_47;
  case 0x50:
    uVar7 = 0x676e69727507;
    _swift_getWitnessTable(0x676e69727507,&DAT_100f3ab60);
    DAT_101047328 = uVar7;
    return;
  case 0x51:
  case 0x91:
    goto switchD_100bbda5c_caseD_51;
  case 0x52:
  case 0x92:
  case 0xba:
  case 0xfa:
    FUN_100bbefb0(&local_58,pSVar4);
    Swift::KeyedEncodingContainer::_encode();
    break;
  case 0x54:
    goto switchD_100bbda5c_caseD_54;
  case 0x55:
  case 0x69:
  case 0x71:
  case 0x79:
  case 0x81:
  case 0x94:
  case 0x95:
  case 0xa9:
  case 0xbd:
  case 0xd1:
  case 0xd9:
  case 0xe1:
  case 0xe9:
  case 0xfd:
    goto switchD_100bbda5c_caseD_55;
  case 0x58:
    goto switchD_100bbda5c_caseD_58;
  case 0x68:
  case 0x70:
  case 0x78:
  case 0x80:
    goto switchD_100bbda5c_caseD_68;
  case 0x6c:
    goto switchD_100bbda5c_caseD_6c;
  case 0x6d:
    goto switchD_100bbda5c_caseD_6d;
  case 0x6e:
  case 0xd6:
  case 0xde:
  case 0xe6:
    goto switchD_100bbda5c_caseD_6e;
  case 0x7c:
  case 0xb8:
    goto switchD_100bbda5c_caseD_7c;
  case 0x84:
    goto switchD_100bbda5c_caseD_84;
  case 0x90:
    goto switchD_100bbda5c_caseD_90;
  case 0x98:
    goto switchD_100bbda5c_caseD_98;
  case 0xa8:
    goto switchD_100bbda5c_caseD_a8;
  case 0xbc:
  case 0xe5:
    goto switchD_100bbda5c_caseD_bc;
  case 0xd0:
  case 0xd8:
  case 0xe0:
  case 0xe8:
    goto switchD_100bbda5c_caseD_d0;
  case 0xd4:
  case 0xdc:
    pSVar4 = (String *)pbVar8;
    param_1 = puVar5;
  case 0xfc:
    FUN_10000cbfc(&DAT_676e69727473,&local_58);
    unaff_x21 = PTR___type_metadata_for_Any_100eae0c0;
    FUN_100bbef2c();
    if ((int)puVar5 != 0) {
      pSVar4->str = unaff_x28;
      pSVar4->bridgeObject = local_58;
LAB_100bbdd3c:
      *(byte *)&pSVar4[1].str = 0;
switchD_100bbda5c_caseD_58:
      goto switchD_100bbda5c_caseD_55;
    }
switchD_100bbda5c_caseD_d0:
    FUN_100bbef40();
    FUN_100bbef2c();
    if ((int)puVar5 == 0) {
      FUN_100bbef40();
switchD_100bbda5c_caseD_bc:
      iVar3 = (int)puVar5;
      FUN_100bbef2c();
      if (iVar3 != 0) {
        FUN_100bbefdc();
switchD_100bbda5c_caseD_90:
        unaff_w27 = 2;
        goto LAB_100bbddd0;
      }
      FUN_100bbef40();
      FUN_100bbef2c();
      if (iVar3 != 0) {
        pSVar4->str = unaff_x28;
switchD_100bbda5c_caseD_a8:
LAB_100bbddc8:
        pSVar4->bridgeObject = (void *)0x0;
        unaff_w27 = 3;
        goto LAB_100bbddd0;
      }
      FUN_100bbef40();
      FUN_100bbef2c();
      if (iVar3 != 0) {
        pSVar4->str = (char *)(double)SUB84(unaff_x28,0);
        goto LAB_100bbddc8;
      }
      FUN_100bbef40();
      puVar5 = (undefined *)0x101044000;
switchD_100bbda5c_caseD_ec:
      iVar3 = (int)puVar5 + 0x808;
      FUN_100b6730c();
      FUN_100bbef2c();
      if (iVar3 != 0) {
switchD_100bbda5c_caseD_68:
        FUN_100bbefdc();
        pbVar8 = (byte *)0x4;
switchD_100bbda5c_caseD_d5:
        unaff_w27 = (byte)pbVar8;
        goto LAB_100bbddd0;
      }
switchD_100bbda5c_caseD_6d:
      FUN_100bbef40();
      puVar5 = &DAT_1010448e0;
      FUN_100b6730c();
      FUN_100bbef2c();
switchD_100bbda5c_caseD_46:
      if ((int)puVar5 != 0) {
        FUN_100bbefdc();
        pbVar8 = (byte *)0x5;
switchD_100bbda5c_caseD_54:
        unaff_w27 = (byte)pbVar8;
        goto LAB_100bbddd0;
      }
      FUN_100bbef40();
      iVar3 = 0x10448e8;
      FUN_100b6730c();
      unaff_w22 = 6;
      FUN_100bbef2c();
      if (iVar3 == 0) {
        FUN_100bbef40();
        iVar3 = 0x10448f0;
        FUN_100b6730c();
        FUN_100bbef2c();
        if (iVar3 == 0) {
          FUN_100bbef40();
          iVar3 = 0x1044948;
          FUN_100b6730c();
          FUN_100bbef2c();
          if (iVar3 == 0) {
            FUN_100bbef40();
            FUN_100bbef2c();
            if (iVar3 != 0) {
              pSVar4->bridgeObject = local_58;
              pSVar4->str = unaff_x28;
              goto LAB_100bbddd0;
            }
            FUN_100bbef40();
            iVar3 = 0;
            FUN_100b69598();
            FUN_100bbef2c();
            if (iVar3 == 0) {
              FUN_10000cbfc(param_1,&stack0xffffffffffffffc8);
              puVar10 = &DAT_101044950;
              FUN_100b6730c(&DAT_101044950);
              _swift_dynamicCast(&stack0xffffffffffffffa0,&stack0xffffffffffffffc8,unaff_x21 + 8,
                                 puVar10,6);
              if (iVar2 == 0) {
                local_58 = (char *)0x0;
                FUN_100bbed68(&stack0xffffffffffffffa0);
                FUN_100bbef40();
                SVar18 = Swift::String::_init(&local_58,unaff_x21 + 8);
                *pSVar4 = SVar18;
                goto LAB_100bbdd3c;
              }
              FUN_100076508(&stack0xffffffffffffffa0,&local_58);
              FUN_100004640(&local_58,unaff_x25);
              FUN_100b9fdbc(pSVar4);
              (*extraout_x9)();
              FUN_100004594(&local_58);
            }
            else {
              FUN_100b690bc(pSVar4);
            }
            goto switchD_100bbda5c_caseD_55;
          }
          lVar14 = *(long *)(unaff_x28 + 0x10);
          if (lVar14 == 0) {
            _swift_bridgeObjectRelease(unaff_x28);
            pcVar13 = PTR___swiftEmptyArrayStorage_100eae0d8;
          }
          else {
            local_58 = PTR___swiftEmptyArrayStorage_100eae0d8;
            FUN_100b69544(0,lVar14,0);
            lVar9 = 0x20;
            uVar11 = *(ulong *)(local_58 + 0x10);
            do {
              fVar17 = *(float *)(unaff_x28 + lVar9);
              uVar12 = uVar11 + 1;
              if (*(ulong *)(local_58 + 0x18) >> 1 <= uVar11) {
                uStack_68 = uVar12;
                FUN_100b69544(1 < *(ulong *)(local_58 + 0x18),uVar12,1);
                uVar12 = uStack_68;
              }
              pcVar13 = local_58;
              *(ulong *)(local_58 + 0x10) = uVar12;
              *(double *)(local_58 + uVar11 * 8 + 0x20) = (double)fVar17;
              lVar9 = lVar9 + 4;
              lVar14 = lVar14 + -1;
              uVar11 = uVar12;
            } while (lVar14 != 0);
            _swift_bridgeObjectRelease(unaff_x28);
          }
          pSVar4->str = pcVar13;
        }
        else {
          pSVar4->str = unaff_x28;
        }
        pSVar4->bridgeObject = (void *)0x0;
        unaff_w27 = 7;
        goto LAB_100bbddd0;
      }
      FUN_100bbefdc();
switchD_100bbda5c_caseD_47:
      *(byte *)&pSVar4[1].str = unaff_w22;
    }
    else {
      pSVar4->str = (char *)((ulong)unaff_x28 & 0xff);
      pSVar4->bridgeObject = (void *)0x0;
      unaff_w27 = 1;
LAB_100bbddd0:
      *(byte *)&pSVar4[1].str = unaff_w27;
    }
switchD_100bbda5c_caseD_55:
switchD_100bbda5c_caseD_2d:
switchD_100bbda5c_caseD_51:
switchD_100bbda5c_caseD_30:
    return;
  case 0xd5:
  case 0xdd:
    goto switchD_100bbda5c_caseD_d5;
  case 0xe4:
    goto switchD_100bbda5c_caseD_e4;
  case 0xec:
    goto switchD_100bbda5c_caseD_ec;
  case 0xf8:
    puVar6 = (undefined *)0x676e697277b3;
    goto LAB_100bbdc14;
  }
LAB_100bbdc38:
  FUN_100bbef94();
switchD_100bbda5c_caseD_98:
  return;
switchD_100bbda5c_caseD_12:
switchD_100bbda5c_caseD_1f:
  puVar5 = puVar15;
switchD_100bbda5c_caseD_84:
  FUN_100bbefb0(puVar5,uVar7);
  Swift::KeyedEncodingContainer::_encode();
switchD_100bbda5c_caseD_7c:
  goto LAB_100bbdc38;
switchD_100bbda5c_caseD_e:
  param_1 = param_1 + 0x8f0;
  FUN_100bbefa8();
  puVar6 = (undefined *)0x101047330;
  puVar15 = puVar5;
switchD_100bbda5c_caseD_44:
  goto LAB_100bbdc14;
switchD_100bbda5c_caseD_d:
  goto LAB_100bbdc38;
switchD_100bbda5c_caseD_9:
LAB_100bbdc14:
  FUN_100bbdca4(puVar6,param_1);
  FUN_100bbefb0(&local_58,(long)&uStack_68 + 7,pSVar4,puVar15,puVar6);
  Swift::KeyedEncodingContainer::_encode();
  goto LAB_100bbdc38;
switchD_100bbda5c_caseD_29:
  puVar10 = puVar10 + 0xd40;
  goto switchD_100bbda5c_caseD_1b;
switchD_100bbda5c_caseD_2c:
  puVar5 = puVar16;
  goto switchD_100bbda5c_caseD_23;
switchD_100bbda5c_caseD_1b:
  UNRECOVERED_JUMPTABLE = (code *)((ulong)pbVar8[(long)puVar10] * 4 + 0x100bbdac4);
switchD_100bbda5c_caseD_c:
                    /* WARNING: Could not recover jumptable at 0x000100bbdac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
switchD_100bbda5c_caseD_23:
  _swift_bridgeObjectRelease(puVar5);
switchD_100bbda5c_caseD_27:
  return;
}



/* Address: 0x100bbdc64 | FUN_100bbdc64 */

void FUN_100bbdc64(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101047328 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9d094;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9d094,&DAT_100f3ab60);
  DAT_101047328 = pTVar1;
  return;
}



/* Address: 0x100bbdca4 | FUN_100bbdca4 */

void FUN_100bbdca4(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 local_28;
  
  if (*param_1 == 0) {
    FUN_100b6734c(param_2);
    puVar1 = PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100eac510;
    local_28 = param_3;
    _swift_getWitnessTable
              (PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100eac510,param_2,&local_28);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Address: 0x100bbdcf8 | FUN_100bbdcf8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100bbdcf8(String *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined *puVar5;
  char **ppcVar6;
  long lVar7;
  ulong uVar8;
  code *extraout_x9;
  char *pcVar9;
  long lVar10;
  float fVar11;
  String SVar12;
  char *local_a0;
  void *pvStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 auStack_78 [32];
  char *local_58 [3];
  undefined8 local_40;
  
  uVar4 = param_2;
  FUN_10000cbfc(param_2,local_58);
  puVar2 = PTR___type_metadata_for_Any_100eae0c0;
  iVar3 = (int)uVar4;
  FUN_100bbef2c();
  if (iVar3 != 0) {
    param_1->str = local_a0;
    param_1->bridgeObject = pvStack_98;
LAB_100bbdd3c:
    *(undefined1 *)&param_1[1].str = 0;
    return;
  }
  FUN_100bbef40();
  FUN_100bbef2c();
  if (iVar3 == 0) {
    FUN_100bbef40();
    FUN_100bbef2c();
    if (iVar3 == 0) {
      FUN_100bbef40();
      FUN_100bbef2c();
      if (iVar3 == 0) {
        FUN_100bbef40();
        FUN_100bbef2c();
        if (iVar3 == 0) {
          FUN_100bbef40();
          iVar3 = 0x1044808;
          FUN_100b6730c();
          FUN_100bbef2c();
          if (iVar3 == 0) {
            FUN_100bbef40();
            iVar3 = 0x10448e0;
            FUN_100b6730c();
            FUN_100bbef2c();
            if (iVar3 == 0) {
              FUN_100bbef40();
              iVar3 = 0x10448e8;
              FUN_100b6730c();
              FUN_100bbef2c();
              if (iVar3 != 0) {
                FUN_100bbefdc();
                *(undefined1 *)&param_1[1].str = 6;
                return;
              }
              FUN_100bbef40();
              iVar3 = 0x10448f0;
              FUN_100b6730c();
              FUN_100bbef2c();
              if (iVar3 == 0) {
                FUN_100bbef40();
                iVar3 = 0x1044948;
                FUN_100b6730c();
                FUN_100bbef2c();
                if (iVar3 == 0) {
                  FUN_100bbef40();
                  FUN_100bbef2c();
                  if (iVar3 == 0) {
                    FUN_100bbef40();
                    iVar3 = 0;
                    FUN_100b69598();
                    FUN_100bbef2c();
                    if (iVar3 != 0) {
                      FUN_100b690bc(param_1);
                      return;
                    }
                    FUN_10000cbfc(param_2,auStack_78);
                    puVar5 = &DAT_101044950;
                    FUN_100b6730c(&DAT_101044950);
                    ppcVar6 = &local_a0;
                    _swift_dynamicCast(ppcVar6,auStack_78,puVar2 + 8,puVar5,6);
                    if ((int)ppcVar6 != 0) {
                      FUN_100076508(&local_a0,local_58);
                      FUN_100004640(local_58,local_40);
                      FUN_100b9fdbc(param_1);
                      (*extraout_x9)();
                      FUN_100004594(local_58);
                      return;
                    }
                    local_80 = 0;
                    pvStack_98 = (void *)0x0;
                    local_a0 = (char *)0x0;
                    uStack_88 = 0;
                    local_90 = 0;
                    FUN_100bbed68(&local_a0);
                    FUN_100bbef40();
                    SVar12 = Swift::String::_init(local_58,puVar2 + 8);
                    *param_1 = SVar12;
                    goto LAB_100bbdd3c;
                  }
                  param_1->bridgeObject = pvStack_98;
                  param_1->str = local_a0;
                  goto LAB_100bbddd0;
                }
                lVar10 = *(long *)(local_a0 + 0x10);
                if (lVar10 == 0) {
                  _swift_bridgeObjectRelease(local_a0);
                  pcVar9 = PTR___swiftEmptyArrayStorage_100eae0d8;
                }
                else {
                  local_58[0] = PTR___swiftEmptyArrayStorage_100eae0d8;
                  FUN_100b69544(0,lVar10,0);
                  lVar7 = 0x20;
                  uVar8 = *(ulong *)(local_58[0] + 0x10);
                  do {
                    fVar11 = *(float *)(local_a0 + lVar7);
                    uVar1 = uVar8 + 1;
                    if (*(ulong *)(local_58[0] + 0x18) >> 1 <= uVar8) {
                      FUN_100b69544(1 < *(ulong *)(local_58[0] + 0x18),uVar1,1);
                    }
                    pcVar9 = local_58[0];
                    *(ulong *)(local_58[0] + 0x10) = uVar1;
                    *(double *)(local_58[0] + uVar8 * 8 + 0x20) = (double)fVar11;
                    lVar7 = lVar7 + 4;
                    lVar10 = lVar10 + -1;
                    uVar8 = uVar1;
                  } while (lVar10 != 0);
                  _swift_bridgeObjectRelease(local_a0);
                }
                param_1->str = pcVar9;
              }
              else {
                param_1->str = local_a0;
              }
              param_1->bridgeObject = (void *)0x0;
              local_90._0_1_ = 7;
            }
            else {
              FUN_100bbefdc();
              local_90._0_1_ = 5;
            }
          }
          else {
            FUN_100bbefdc();
            local_90._0_1_ = 4;
          }
          goto LAB_100bbddd0;
        }
        param_1->str = (char *)(double)local_a0._0_4_;
      }
      else {
        param_1->str = local_a0;
      }
      param_1->bridgeObject = (void *)0x0;
      local_90._0_1_ = 3;
    }
    else {
      FUN_100bbefdc();
      local_90._0_1_ = 2;
    }
  }
  else {
    param_1->str = (char *)((ulong)local_a0 & 0xff);
    param_1->bridgeObject = (void *)0x0;
    local_90._0_1_ = 1;
  }
LAB_100bbddd0:
  *(undefined1 *)&param_1[1].str = (undefined1)local_90;
  return;
}



/* Address: 0x100bbe070 | FUN_100bbe070 */

/* WARNING: Removing unreachable block (ram,0x000100bbe438) */
/* WARNING: Removing unreachable block (ram,0x000100bbe4bc) */

undefined8 *
FUN_100bbe070(double param_1,double param_2,_StringGuts param_3,_StringGuts param_4,
             undefined8 *param_5)

{
  undefined8 *puVar1;
  char cVar2;
  byte bVar3;
  code *pcVar4;
  byte in_ZR;
  undefined1 in_CY;
  bool bVar5;
  _StringComparisonResult expecting;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined8 *in_x11;
  undefined8 *in_x12;
  byte *in_x13;
  uint in_w14;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined8 *puVar13;
  undefined8 *unaff_d8;
  undefined8 *unaff_d9;
  
  expecting.value = (__int8)param_5;
  puVar1 = *(undefined8 **)param_3.unknown;
  puVar9 = (undefined8 *)((long)param_3.unknown + 8);
  puVar13 = (undefined8 *)(ulong)*(byte *)((long)param_3.unknown + 0x10);
  puVar10 = *(undefined8 **)param_4.unknown;
  cVar2 = *(char *)((long)param_4.unknown + 0x10);
  uVar12 = 0;
  pbVar7 = (byte *)(ulong)*(byte *)(puVar13 + 0x201939a9);
  pbVar6 = (byte *)((long)pbVar7 * 4 + 0x100bbe0b0);
  bVar5 = (bool)in_ZR;
  pbVar8 = pbVar7;
  puVar11 = puVar1;
  switch(*(byte *)((long)param_3.unknown + 0x10)) {
  default:
    param_3.unknown = (undefined *)*puVar9;
  case 0x2c:
  case 0x30:
  case 0x3a:
  case 0x7a:
  case 0x94:
  case 0xa2:
  case 0xe2:
    puVar11 = (undefined8 *)param_3.unknown;
    if (cVar2 != '\0') {
LAB_100bbe248:
      _swift_bridgeObjectRetain(puVar11);
LAB_100bbe24c:
      FUN_100b6faf0();
      FUN_100bbef4c();
      FUN_100bbef64();
      FUN_100b69560();
      uVar12 = 0;
      goto LAB_100bbe298;
    }
    bVar5 = puVar1 == puVar10;
switchD_100bbe0ac_caseD_22:
    in_ZR = false;
    if (bVar5) {
      in_ZR = (undefined8 *)*puVar9 == *(undefined8 **)((long)param_4.unknown + 8);
    }
switchD_100bbe0ac_caseD_54:
    if ((bool)in_ZR) {
      puVar13 = (undefined8 *)&DAT_00000001;
    }
    else {
switchD_100bbe0ac_caseD_d4:
      FUN_100b9fdbc();
      param_5 = puVar10;
switchD_100bbe0ac_caseD_5e:
      expecting.value = (__int8)param_5;
switchD_100bbe0ac_caseD_c:
      bVar5 = Swift::_stringCompareWithSmolCheck(param_3,param_4,expecting);
      param_3.unknown = (undefined *)(ulong)bVar5;
switchD_100bbe0ac_caseD_14:
      puVar13 = (undefined8 *)param_3.unknown;
switchD_100bbe0ac_caseD_5c:
    }
    FUN_100b6faf0();
    FUN_100bbef4c();
    FUN_100bbef4c();
    FUN_100bbef64();
switchD_100bbe0ac_caseD_88:
    uVar12 = (uint)puVar13;
    break;
  case 1:
    if (cVar2 == '\x01') {
      FUN_100b9fdbc();
      FUN_100bbef64();
      goto switchD_100bbe0ac_caseD_42;
    }
    goto LAB_100bbe24c;
  case 2:
  case 0x9d:
    in_ZR = cVar2 == '\x02';
  case 0xf:
  case 0x18:
    if ((bool)in_ZR) {
switchD_100bbe0ac_caseD_74:
      FUN_100b9fdbc();
      FUN_100bbef64();
switchD_100bbe0ac_caseD_6c:
      FUN_100b69560();
      in_ZR = puVar1 == puVar10;
switchD_100bbe0ac_caseD_9:
      uVar12 = (uint)in_ZR;
      goto LAB_100bbe298;
    }
    goto LAB_100bbe24c;
  case 3:
  case 100:
    unaff_d8 = puVar1;
    unaff_d9 = puVar10;
    if (cVar2 != '\x03') goto LAB_100bbe24c;
  case 0xd:
    FUN_100b9fdbc();
switchD_100bbe0ac_caseD_1e:
switchD_100bbe0ac_caseD_21:
    FUN_100bbef64();
    FUN_100b69560();
    uVar12 = 1;
    in_ZR = false;
    if (!NAN((double)unaff_d8) && !NAN((double)unaff_d9)) {
      in_ZR = (double)unaff_d8 == (double)unaff_d9;
    }
switchD_100bbe0ac_caseD_e:
    if (!(bool)in_ZR) {
      uVar12 = 0;
    }
    goto LAB_100bbe298;
  case 4:
  case 0x12:
    in_ZR = cVar2 == '\x04';
  case 0x1c:
    if ((bool)in_ZR) {
switchD_100bbe0ac_caseD_13:
      FUN_100b7ca98();
switchD_100bbe0ac_caseD_17:
      FUN_100bbe2b4();
switchD_100bbe0ac_caseD_a:
      FUN_100b6faf0();
      FUN_100bbef4c();
      puVar13 = (undefined8 *)param_3.unknown;
switchD_100bbe0ac_caseD_19:
switchD_100bbe0ac_caseD_b:
      FUN_100bbef4c();
      FUN_100bbef64();
switchD_100bbe0ac_caseD_35:
      uVar12 = (uint)puVar13;
      break;
    }
    goto LAB_100bbe248;
  case 5:
    if (cVar2 == '\x05') {
      FUN_100b7ca98();
      FUN_100bbe378();
      FUN_100b6faf0();
      puVar13 = (undefined8 *)param_3.unknown;
      goto switchD_100bbe0ac_caseD_34;
    }
    goto LAB_100bbe248;
  case 6:
    if (cVar2 != '\x06') goto LAB_100bbe248;
    FUN_100b7ca98();
    FUN_100bbe404();
    FUN_100b6faf0();
    FUN_100bbef4c();
    puVar13 = (undefined8 *)param_3.unknown;
  case 0xe8:
    uVar12 = (uint)puVar13;
    FUN_100bbef4c();
    FUN_100bbef64();
    break;
  case 7:
    if (cVar2 != '\a') goto LAB_100bbe248;
    FUN_100b7ca98();
    uVar12 = (uint)param_3.unknown;
    FUN_100bbe488();
    FUN_100b6faf0();
    FUN_100bbef4c();
    FUN_100bbef4c();
    FUN_100bbef64();
    break;
  case 9:
    goto switchD_100bbe0ac_caseD_9;
  case 10:
  case 0x15:
  case 0xf0:
    goto switchD_100bbe0ac_caseD_a;
  case 0xb:
    goto switchD_100bbe0ac_caseD_b;
  case 0xc:
  case 0x10:
    goto switchD_100bbe0ac_caseD_c;
  case 0xe:
    goto switchD_100bbe0ac_caseD_e;
  case 0x13:
    goto switchD_100bbe0ac_caseD_13;
  case 0x14:
    goto switchD_100bbe0ac_caseD_14;
  case 0x17:
    goto switchD_100bbe0ac_caseD_17;
  case 0x19:
    goto switchD_100bbe0ac_caseD_19;
  case 0x1d:
  case 0x31:
    goto switchD_100bbe0ac_caseD_1d;
  case 0x1e:
  case 0x32:
  case 0x46:
  case 0x5a:
  case 0x62:
  case 0x6a:
  case 0x72:
  case 0x86:
  case 0x9a:
  case 0xae:
  case 0xc2:
  case 0xca:
  case 0xd2:
  case 0xda:
  case 0xee:
    goto switchD_100bbe0ac_caseD_1e;
  case 0x20:
  case 0xa9:
  case 0xe9:
    goto LAB_100bbe448;
  case 0x21:
  case 0x49:
  case 0x89:
  case 0xb1:
  case 0xf1:
    goto switchD_100bbe0ac_caseD_21;
  case 0x22:
  case 0x2a:
  case 0x4a:
  case 0x52:
  case 0x8a:
  case 0x92:
  case 0xb2:
  case 0xba:
  case 0xf2:
  case 0xfa:
    goto switchD_100bbe0ac_caseD_22;
  case 0x34:
  case 0xb0:
switchD_100bbe0ac_caseD_34:
    uVar12 = (uint)puVar13;
    FUN_100bbef4c();
    FUN_100bbef4c();
    FUN_100bbef64();
    break;
  case 0x35:
  case 0x65:
  case 0x6d:
  case 0x75:
  case 0xdd:
    goto switchD_100bbe0ac_caseD_35;
  case 0x36:
  case 0x66:
  case 0x6e:
  case 0x76:
  case 0x9e:
  case 0xde:
    goto switchD_100bbe0ac_caseD_36;
  case 0x37:
  case 0x67:
  case 0x6f:
  case 0x77:
  case 0x9f:
  case 0xdf:
    if (param_1 != param_2) {
      return (undefined8 *)0x0;
    }
    pbVar7 = (byte *)0x0;
    do {
      if (&BYTE_100c9cd47 < pbVar7 + 1) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100bbe50c);
        (*pcVar4)();
      }
      pbVar6 = pbVar7 + 5;
      pbVar8 = pbVar7 + 5;
      bVar5 = pbVar7 != &BYTE_100c9cd46;
      pbVar7 = pbVar7 + 1;
    } while (*(double *)((long)param_3.unknown + pbVar6 * 8) ==
             *(double *)((long)param_4.unknown + pbVar8 * 8) && bVar5);
    return (undefined8 *)
           (ulong)(*(double *)((long)param_3.unknown + pbVar6 * 8) ==
                  *(double *)((long)param_4.unknown + pbVar8 * 8));
  case 0x40:
    if (!(bool)in_ZR) {
      return (undefined8 *)0x0;
    }
    if ((puVar1 != (undefined8 *)0x0) && (param_3.unknown != param_4.unknown)) {
      if ((*(undefined **)((long)param_3.unknown + 0x20) !=
           *(undefined **)((long)param_4.unknown + 0x20) ||
           *(undefined **)((long)param_3.unknown + 0x28) !=
           *(undefined **)((long)param_4.unknown + 0x28)) &&
         (bVar5 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)*(undefined **)((long)param_3.unknown + 0x20),
                             (_StringGuts)*(undefined **)((long)param_3.unknown + 0x28),
                             (_StringComparisonResult)
                             (__int8)*(undefined **)((long)param_4.unknown + 0x20)), !bVar5)) {
        return (undefined8 *)0x0;
      }
      if (puVar1 != (undefined8 *)&DAT_00000001) {
        puVar10 = (undefined8 *)((long)param_3.unknown + 0x38);
        puVar9 = (undefined8 *)((long)param_4.unknown + 0x38);
        puVar11 = (undefined8 *)&DAT_00000001;
        do {
          if (puVar1 <= puVar11) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100bbe378);
            (*pcVar4)();
          }
          if (((undefined *)puVar10[-1] != (undefined *)puVar9[-1] ||
               (undefined *)*puVar10 != (undefined *)*puVar9) &&
             (bVar5 = Swift::_stringCompareWithSmolCheck
                                ((undefined *)puVar10[-1],(undefined *)*puVar10,
                                 (_StringComparisonResult)(__int8)(undefined *)puVar9[-1]), !bVar5))
          {
            return (undefined8 *)0x0;
          }
          puVar11 = (undefined8 *)((long)puVar11 + 1);
          puVar10 = puVar10 + 2;
          puVar9 = puVar9 + 2;
        } while (puVar1 != puVar11);
      }
    }
    param_3.unknown = &DAT_00000001;
  case 0xc4:
  case 0xcc:
switchD_100bbe0ac_caseD_ec:
    return (undefined8 *)param_3.unknown;
  case 0x41:
  case 0x81:
    goto switchD_100bbe0ac_caseD_41;
  case 0x42:
  case 0x82:
  case 0xaa:
  case 0xea:
switchD_100bbe0ac_caseD_42:
    FUN_100b69560();
    uVar12 = (uint)puVar10 ^ (uint)puVar1 ^ 1;
    goto LAB_100bbe298;
  case 0x44:
    goto switchD_100bbe0ac_caseD_44;
  case 0x45:
  case 0x59:
  case 0x61:
  case 0x69:
  case 0x71:
  case 0x84:
  case 0x85:
  case 0x99:
  case 0xad:
  case 0xc1:
  case 0xc9:
  case 0xd1:
  case 0xd9:
  case 0xed:
    pbVar7 = *(byte **)((long)param_4.unknown + 0x20);
switchD_100bbe0ac_caseD_1d:
    in_ZR = pbVar6 == pbVar7;
switchD_100bbe0ac_caseD_41:
    if (!(bool)in_ZR) {
switchD_100bbe0ac_caseD_dc:
      return (undefined8 *)0x0;
    }
LAB_100bbe448:
    pbVar7 = (byte *)0x0;
    pbVar6 = &BYTE_100c9cd46;
    in_x11 = (undefined8 *)((long)param_3.unknown + 0x28);
switchD_100bbe0ac_caseD_58:
    in_x12 = (undefined8 *)((long)param_4.unknown + 0x28);
    while( true ) {
      in_x13 = pbVar7 + 1;
switchD_100bbe0ac_caseD_c5:
      in_CY = &BYTE_100c9cd47 < in_x13;
switchD_100bbe0ac_caseD_5d:
      if ((bool)in_CY) break;
      param_3.unknown = (undefined *)(ulong)(in_x11[(long)pbVar7] == in_x12[(long)pbVar7]);
      in_ZR = true;
      if (in_x11[(long)pbVar7] == in_x12[(long)pbVar7]) {
        in_ZR = pbVar6 == pbVar7;
      }
switchD_100bbe0ac_caseD_36:
      pbVar7 = in_x13;
      if ((bool)in_ZR) {
        return (undefined8 *)param_3.unknown;
      }
    }
switchD_100bbe0ac_caseD_44:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100bbe488);
    (*pcVar4)();
  case 0x48:
    if ((bool)in_ZR) {
      uVar12 = 1;
      goto LAB_100bbe3b0;
    }
  case 0xc0:
  case 200:
  case 0xd0:
  case 0xd8:
    if (*(char *)((long)param_3.unknown + 0x20) == *(char *)((long)param_4.unknown + 0x20)) {
      pbVar7 = (byte *)0x0;
switchD_100bbe0ac_caseD_ac:
      pbVar6 = &BYTE_100c9cd46;
      in_x11 = (undefined8 *)((long)param_3.unknown + 0x21);
      in_x12 = (undefined8 *)((long)param_4.unknown + 0x21);
      pbVar8 = pbVar7;
switchD_100bbe0ac_caseD_80:
      do {
        pbVar7 = pbVar8 + 1;
        if (&BYTE_100c9cd47 < pbVar7) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100bbe404);
          (*pcVar4)();
        }
        bVar3 = *(byte *)((long)in_x11 + (long)pbVar8) ^ *(byte *)((long)in_x12 + (long)pbVar8);
        in_w14 = (uint)bVar3;
        if ((bVar3 & 1) != 0) break;
        in_ZR = pbVar6 == pbVar8;
switchD_100bbe0ac_caseD_98:
        pbVar8 = pbVar7;
      } while (!(bool)in_ZR);
      uVar12 = in_w14 ^ 1;
    }
    else {
      uVar12 = 0;
    }
LAB_100bbe3b0:
    return (undefined8 *)(ulong)(uVar12 & 1);
  case 0x54:
  case 0x9c:
  case 0xbc:
  case 0xfc:
    goto switchD_100bbe0ac_caseD_54;
  case 0x58:
  case 0x60:
  case 0x68:
  case 0x70:
    goto switchD_100bbe0ac_caseD_58;
  case 0x5c:
    goto switchD_100bbe0ac_caseD_5c;
  case 0x5d:
    goto switchD_100bbe0ac_caseD_5d;
  case 0x5e:
  case 0xc6:
  case 0xce:
  case 0xd6:
    goto switchD_100bbe0ac_caseD_5e;
  case 0x6c:
  case 0xa8:
    goto switchD_100bbe0ac_caseD_6c;
  case 0x74:
    goto switchD_100bbe0ac_caseD_74;
  case 0x80:
    goto switchD_100bbe0ac_caseD_80;
  case 0x88:
    goto switchD_100bbe0ac_caseD_88;
  case 0x98:
    goto switchD_100bbe0ac_caseD_98;
  case 0xac:
  case 0xd5:
    goto switchD_100bbe0ac_caseD_ac;
  case 0xc5:
  case 0xcd:
    goto switchD_100bbe0ac_caseD_c5;
  case 0xd4:
    goto switchD_100bbe0ac_caseD_d4;
  case 0xdc:
    goto switchD_100bbe0ac_caseD_dc;
  case 0xec:
    goto switchD_100bbe0ac_caseD_ec;
  }
  FUN_100b69560();
LAB_100bbe298:
  return (undefined8 *)(ulong)(uVar12 & 1);
}


