/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b840e4 | FUN_100b840e4 */

undefined * FUN_100b840e4(undefined *param_1,undefined8 param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong uVar4;
  _StringGuts _Var5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  _StringGuts _Var11;
  _StringGuts _Var12;
  long lVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined *local_a0;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_70;
  undefined8 uStack_68;
  
  local_80 = 0x3b;
  uStack_78 = 0xe100000000000000;
  local_70 = param_1;
  uStack_68 = param_2;
  FUN_100008378();
  puVar3 = &local_80;
  (extension_Foundation)::Swift::StringProtocol::_components
            (puVar3,PTR___type_metadata_for_Swift_String_100eac208,
             PTR___type_metadata_for_Swift_String_100eac208,param_1,param_1);
  uVar9 = puVar3[2];
  if (uVar9 == 0) {
    _swift_bridgeObjectRelease(puVar3);
    puVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    uVar14 = 0;
    local_a0 = (undefined *)0x8000000100dcb060;
    puVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
    do {
      lVar13 = DAT_101043258;
      if ((ulong)puVar3[2] <= uVar14) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100b8449c);
        (*pcVar1)();
      }
      if (DAT_101043258 != 0) {
        puVar6 = (undefined *)puVar3[uVar14 * 2 + 4];
        _Var12.unknown = (undefined *)(puVar3 + uVar14 * 2 + 4)[1];
        _swift_bridgeObjectRetain(_Var12.unknown);
        puVar10 = &DAT_101043268;
        do {
          puVar15 = (undefined *)*puVar10;
          _Var5.unknown = puVar15;
          _Var11.unknown = (undefined *)0xe000000000000000;
          switch(puVar15) {
          case (undefined *)0x0:
            break;
          case (undefined *)0x1:
            _Var11.unknown = &DAT_e700000000000000;
            _Var5.unknown = (undefined *)0x746c7561666564;
            break;
          case (undefined *)0x2:
            _Var11.unknown = &DAT_e500000000000000;
            _Var5.unknown = (undefined *)0x726f727265;
            break;
          case (undefined *)0x3:
            uVar4 = 0x6f6973736573;
            goto LAB_100b842d8;
          case (undefined *)0x4:
            _Var5.unknown = (undefined *)0x746361736e617274;
            _Var11.unknown = &DAT_eb000000006e6f69;
            break;
          case (undefined *)0x5:
            _Var11.unknown = (undefined *)0xea0000000000746e;
            _Var5.unknown = (undefined *)0x656d686361747461;
            break;
          case (undefined *)0x6:
            goto switchD_100b841e4_caseD_6;
          case (undefined *)0x7:
            _Var11.unknown = &DAT_e700000000000000;
            _Var5.unknown = (undefined *)0x656c69666f7270;
            break;
          case (undefined *)0x8:
            _Var5.unknown = (undefined *)0x625f63697274656d;
            _Var11.unknown = (undefined *)0xed000074656b6375;
            break;
          case (undefined *)0x9:
            _Var11.unknown = &DAT_e600000000000000;
            _Var5.unknown = (undefined *)0x79616c706572;
            break;
          case (undefined *)0xa:
            _Var5.unknown = (undefined *)0xd000000000000010;
            _Var11.unknown = (undefined *)0x8000000100dcb080;
            break;
          case (undefined *)0xb:
            _Var11.unknown = &DAT_e400000000000000;
            _Var5.unknown = (undefined *)0x6e617073;
            break;
          case (undefined *)0xc:
            _Var11.unknown = &DAT_e800000000000000;
            _Var5.unknown = (undefined *)0x6b63616264656566;
            break;
          case (undefined *)0xd:
            _Var11.unknown = &DAT_e800000000000000;
            _Var5.unknown = (undefined *)0x6d6574695f676f6c;
            break;
          case (undefined *)0xe:
            _Var5.unknown = (undefined *)0x656d5f6563617274;
            _Var11.unknown = (undefined *)0xec00000063697274;
            break;
          case (undefined *)0xf:
            _Var11.unknown = &DAT_e800000000000000;
            _Var5.unknown = (undefined *)0x657479625f676f6c;
            break;
          case (undefined *)0x10:
            _Var5.unknown = (undefined *)0xd000000000000011;
            _Var11.unknown = local_a0;
            break;
          case (undefined *)0x11:
            uVar4 = 0x776f6e6b6e75;
LAB_100b842d8:
            _Var5.unknown = (undefined *)(uVar4 | 0x6e000000000000);
            _Var11.unknown = &DAT_e700000000000000;
            break;
          default:
            local_70 = puVar15;
            Swift::__diagnoseUnexpectedEnumCaseValue
                      (&DAT_100f3c108,&local_70,&DAT_100f3c108,
                       PTR___type_metadata_for_Swift_UInt_100eacb00);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100b844c0);
            (*pcVar1)();
          }
          if (_Var5.unknown == puVar6 && _Var11.unknown == _Var12.unknown) {
            _swift_bridgeObjectRelease(_Var12.unknown);
            _Var12.unknown = _Var11.unknown;
LAB_100b843bc:
            _swift_bridgeObjectRelease(_Var12.unknown);
            if (puVar15 != (undefined *)0x11) {
              puVar6 = puVar8;
              _swift_isUniquelyReferenced_nonNull_native();
              puVar7 = puVar8;
              if (((ulong)puVar6 & 1) == 0) {
                puVar7 = (undefined *)0x0;
                FUN_100b6e88c(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
              }
              uVar4 = *(ulong *)(puVar7 + 0x10);
              puVar8 = puVar7;
              if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar4) {
                puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
                FUN_100b6e88c(puVar8,uVar4 + 1,1,puVar7);
              }
              *(ulong *)(puVar8 + 0x10) = uVar4 + 1;
              *(undefined **)(puVar8 + uVar4 * 8 + 0x20) = puVar15;
            }
            goto LAB_100b84404;
          }
          bVar2 = Swift::_stringCompareWithSmolCheck
                            (_Var5,_Var11,(_StringComparisonResult)(__int8)puVar6);
          _swift_bridgeObjectRelease(_Var11.unknown);
          if (bVar2) goto LAB_100b843bc;
switchD_100b841e4_caseD_6:
          lVar13 = lVar13 + -1;
          puVar10 = puVar10 + 1;
        } while (lVar13 != 0);
        _swift_bridgeObjectRelease(_Var12.unknown);
      }
LAB_100b84404:
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar9);
    _swift_bridgeObjectRelease(puVar3);
  }
  return puVar8;
}



/* Address: 0x100b84508 | FUN_100b84508 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100b84508(undefined8 param_1,double param_2,undefined8 param_3,ID param_4)

{
  undefined *puVar1;
  Date DVar2;
  Date DVar3;
  ulong uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  
  puVar1 = &DAT_101044980;
  FUN_100b6730c();
  uVar4 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar6 = &stack0xffffffffffffffa0 + -uVar4;
  lVar5 = (long)puVar6 - uVar4;
  DVar2 = Foundation::Date::typeMetadataAccessor();
  lVar10 = *(long *)(DVar2.unknown + -8);
  uVar4 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar9 = lVar5 - uVar4;
  lVar7 = lVar9 - uVar4;
  DVar3.unknown =
       (undefined *)
       _objc_msgSend(*(ID *)(unaff_x20 + SentryRateLimitParser::currentDateProvider),"date");
  Foundation::Date::__unconditionallyBridgeFromObjectiveC(DVar3);
  DVar3.unknown = (undefined *)_objc_msgSend(param_4,"doubleValue");
  Foundation::Date::addingTimeInterval(param_2,DVar3);
  pcVar8 = *(code **)(lVar10 + 8);
  (*pcVar8)(lVar9,DVar2.unknown);
  FUN_100b7d154(0);
  (**(code **)(lVar10 + 0x10))(puVar6,lVar7,DVar2.unknown);
  FUN_1000c9ffc(puVar6,0,1,DVar2.unknown);
  FUN_100b7cdd4(lVar5,puVar6,param_3);
  FUN_10004e7d4(puVar6);
  lVar9 = lVar5;
  FUN_1000c9ff0(lVar5,1,DVar2.unknown);
  if ((int)lVar9 == 1) {
    (**(code **)(lVar10 + 0x20))(param_1,lVar7,DVar2.unknown);
    lVar9 = lVar5;
    FUN_1000c9ff0(lVar5,1,DVar2.unknown);
    if ((int)lVar9 != 1) {
      FUN_10004e7d4(lVar5);
    }
  }
  else {
    (*pcVar8)(lVar7,DVar2.unknown);
    (**(code **)(lVar10 + 0x20))(param_1,lVar5,DVar2.unknown);
  }
  return;
}



/* Address: 0x100b846d4 | FUN_100b846d4 */

void FUN_100b846d4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("Sentry.RateLimitParser",0x16,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100b84700);
  (*pcVar1)();
}



/* Address: 0x100b84700 | SentryRateLimitParser::init */

/* Function Stack Size: 0x10 bytes */

ID SentryRateLimitParser::init(ID param_1,SEL param_2)

{
  ID IVar1;
  
  FUN_100b846d4();
  IVar1 = *(ID *)(param_1 + currentDateProvider);
  _swift_unknownObjectRelease();
  return IVar1;
}



/* Address: 0x100b8470c | SentryRateLimitParser::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void SentryRateLimitParser::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + currentDateProvider));
  return;
}



/* Address: 0x100b8471c | FUN_100b8471c */

void FUN_100b8471c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_allocWithZone(param_2);
  FUN_100b84750(param_1,param_2,param_3);
  return;
}



/* Address: 0x100b84750 | FUN_100b84750 */

void FUN_100b84750(undefined8 param_1,class_t *param_2)

{
  class_t *pcVar1;
  objc_super local_30;
  
  pcVar1 = param_2;
  _swift_getObjectType();
  *(undefined8 *)((long)&param_2->isa + SentryRateLimitParser::currentDateProvider) = param_1;
  local_30.receiver = (ID)param_2;
  local_30.super_class = pcVar1;
  _objc_msgSendSuper2(&local_30,"init");
  return;
}



/* Address: 0x100b847a0 | FUN_100b847a0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100b847a0(void)

{
  return ZEXT816(0x100fa0770);
}



/* Address: 0x100b847c0 | FUN_100b847c0 */

void FUN_100b847c0(undefined8 param_1,undefined8 param_2)

{
  _swift_lookUpClassMethod(param_1,param_2,&TargetClassDescriptor_100ccde24);
  return;
}



/* Address: 0x100b847cc | FUN_100b847cc */

void FUN_100b847cc(_StringGuts param_1,_StringGuts param_2,_StringComparisonResult param_3)

{
  Swift::_stringCompareWithSmolCheck(param_1,param_2,param_3);
  return;
}



/* Address: 0x100b847d8 | FUN_100b847d8 */

void FUN_100b847d8(void)

{
  return;
}



/* Address: 0x100b847ec | FUN_100b847ec */

void FUN_100b847ec(void)

{
  FUN_100b84508();
  return;
}



/* Address: 0x100b84800 | FUN_100b84800 */

void FUN_100b84800(void)

{
  FUN_1000c9ffc();
  return;
}



/* Address: 0x100b84810 | FUN_100b84810 */

void FUN_100b84810(void)

{
  return;
}



/* Address: 0x100b8481c | FUN_100b8481c */

void FUN_100b8481c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x29;
  
  (extension_Foundation)::Swift::StringProtocol::_components
            (param_1,param_2,param_2,*(undefined8 *)(unaff_x29 + -0xc0),
             *(undefined8 *)(unaff_x29 + -0xc0));
  return;
}



/* Address: 0x100b8482c | FUN_100b8482c */

void FUN_100b8482c(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x000100b84830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x100b84834 | FUN_100b84834 */

void FUN_100b84834(void)

{
  FUN_100b6cc14();
  return;
}



/* Address: 0x100b8483c | FUN_100b8483c */

void FUN_100b8483c(void)

{
  _swift_bridgeObjectRetain();
  return;
}



/* Address: 0x100b84844 | FUN_100b84844 */

void FUN_100b84844(code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x000100b84848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x100b8484c | FUN_100b8484c */

void FUN_100b8484c(void)

{
  return;
}



/* Address: 0x100b84858 | FUN_100b84858 */

void FUN_100b84858(long param_1)

{
  ulong in_x9;
  
  *(ulong *)(param_1 + 0x40) = *(ulong *)(param_1 + 0x40) | in_x9;
  return;
}



/* Address: 0x100b8486c | FUN_100b8486c */

void FUN_100b8486c(void)

{
  return;
}



/* Address: 0x100b84880 | FUN_100b84880 */

void FUN_100b84880(ulong param_1,undefined8 param_2,char *param_3,void *param_4)

{
  undefined8 uVar1;
  String SVar2;
  code *pcVar3;
  String SVar4;
  
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100b848e0);
    (*pcVar3)();
  }
  if (param_1 < DAT_101042f30) {
    uVar1 = *(undefined8 *)(&DAT_101042f48 + param_1 * 0x10);
    SVar2 = *(String *)(&DAT_101042f40 + param_1 * 0x10);
    _swift_bridgeObjectRetain(uVar1);
    SVar4.bridgeObject = param_4;
    SVar4.str = param_3;
    Swift::String::append(SVar2,SVar4);
    _swift_bridgeObjectRelease(uVar1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100b848e4);
  (*pcVar3)();
}



/* Address: 0x100b848e4 | FUN_100b848e4 */

void FUN_100b848e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  
  if (param_1 == 0) {
    puVar3 = (undefined *)0x0;
    pcVar4 = FUN_100b84c88;
  }
  else {
    puVar3 = &DAT_100f37ac8;
    FUN_100b84f78();
    *(long *)(puVar3 + 0x10) = param_1;
    *(undefined8 *)(puVar3 + 0x18) = param_2;
    pcVar4 = FUN_100076648;
  }
  puVar2 = &DAT_100f37aa0;
  FUN_100b84f78();
  *(code **)(puVar2 + 0x10) = pcVar4;
  *(undefined **)(puVar2 + 0x18) = puVar3;
  uVar1 = DAT_101045798;
  PTR_FUN_101045790 = FUN_100b84cb8;
  DAT_101045798 = puVar2;
  FUN_100011128(param_1,param_2);
  _swift_release(uVar1);
  return;
}



/* Address: 0x100b84974 | FUN_100b84974 */

void FUN_100b84974(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  String SVar2;
  String separator;
  
  pcVar1 = &DAT_101044920;
  FUN_100b6730c();
  _swift_allocObject();
  pcVar1[0x18] = '\x02';
  pcVar1[0x19] = '\0';
  pcVar1[0x1a] = '\0';
  pcVar1[0x1b] = '\0';
  pcVar1[0x1c] = '\0';
  pcVar1[0x1d] = '\0';
  pcVar1[0x1e] = '\0';
  pcVar1[0x1f] = '\0';
  pcVar1[0x10] = '\x01';
  pcVar1[0x11] = '\0';
  pcVar1[0x12] = '\0';
  pcVar1[0x13] = '\0';
  pcVar1[0x14] = '\0';
  pcVar1[0x15] = '\0';
  pcVar1[0x16] = '\0';
  pcVar1[0x17] = '\0';
  *(undefined **)(pcVar1 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined8 *)(pcVar1 + 0x20) = param_1;
  *(undefined8 *)(pcVar1 + 0x28) = param_2;
  _swift_bridgeObjectRetain(param_2);
  SVar2.bridgeObject = (void *)0x20;
  SVar2.str = pcVar1;
  separator.bridgeObject = (void *)0xa;
  separator.str = (char *)0xe100000000000000;
  Swift::_print(SVar2,separator);
  _swift_bridgeObjectRelease(pcVar1);
  return;
}



/* Address: 0x100b849f8 | FUN_100b849f8 */

void FUN_100b849f8(void)

{
  ID self;
  
  self = 0;
  FUN_100be20e0();
  _objc_allocWithZone();
  DAT_1010457a0 = _objc_msgSend(self,"init");
  return;
}



/* Address: 0x100b84a28 | FUN_100b84a28 */

void FUN_100b84a28(undefined1 param_1,undefined8 param_2)

{
  DAT_101045780 = param_1;
  DAT_101045788 = param_2;
  return;
}



/* Address: 0x100b84a3c | FUN_100b84a3c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100b84a3c(char *param_1,void *param_2,char *param_3,void *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  Date DVar4;
  Date DVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  undefined8 local_70;
  undefined8 uStack_68;
  
  pcVar6 = param_3;
  DVar4 = Foundation::Date::typeMetadataAccessor();
  lVar8 = *(long *)(DVar4.unknown + -8);
  lVar7 = *(long *)(lVar8 + 0x40);
  if ((param_3 != (char *)0x0) &&
     (((char *)0x4 < param_3 || (DAT_101045780 == '\x01' && DAT_101045788 <= param_3)))) {
    if (DAT_101042dc0 != -1) {
      _swift_once(&DAT_101042dc0,FUN_100b849f8);
    }
    DVar5.unknown = (undefined *)_objc_msgSend(DAT_1010457a0,"date");
    Foundation::Date::__unconditionallyBridgeFromObjectiveC(DVar5);
    dVar9 = Foundation::Date::get_timeIntervalSince1970((Date)0x0);
    (**(code **)(lVar8 + 8))((long)&local_70 - (lVar7 + 0xfU & 0xfffffffffffffff0));
    uVar2 = DAT_101045798;
    puVar1 = PTR_FUN_101045790;
    local_70 = 0;
    uStack_68 = 0xe000000000000000;
    _swift_retain(DAT_101045798);
    Swift::_StringGuts::grow(0x15,(_StringGuts)DVar4.unknown);
    SVar10.bridgeObject = (void *)0xea00000000005b20;
    SVar10.str = (char *)0x5d7972746e65535b;
    SVar13.bridgeObject = param_4;
    SVar13.str = pcVar6;
    Swift::String::append(SVar10,SVar13);
    FUN_100b84880(param_3);
    SVar11.bridgeObject = (void *)0xe300000000000000;
    SVar11.str = (char *)0x5b205d;
    SVar14.bridgeObject = param_4;
    SVar14.str = pcVar6;
    Swift::String::append(SVar11,SVar14);
    pcVar6 = 
    PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
    ;
    double::_write((undefined *)&local_70,dVar9);
    FUN_100b84f84();
    SVar12.bridgeObject = param_2;
    SVar12.str = param_1;
    SVar15.bridgeObject = param_4;
    SVar15.str = pcVar6;
    Swift::String::append(SVar12,SVar15);
    uVar3 = uStack_68;
    (*(code *)puVar1)(local_70,uStack_68);
    _swift_release(uVar2);
    _swift_bridgeObjectRelease(uVar3);
  }
  return;
}



/* Address: 0x100b84bf8 | FUN_100b84bf8 */

bool FUN_100b84bf8(ulong param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_1 != 0) {
    if (4 < param_1) {
      return true;
    }
    if (DAT_101045780 != '\x01') {
      return false;
    }
    bVar1 = DAT_101045788 <= param_1;
  }
  return bVar1;
}



/* Address: 0x100b84c38 | _TtC6Sentry12SentrySDKLog::logWithMessage:andLevel: */

/* Function Stack Size: 0x20 bytes */

void _TtC6Sentry12SentrySDKLog::logWithMessage_andLevel_
               (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4)

{
  String SVar1;
  
  SVar1 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  FUN_100b84a3c(SVar1.str,SVar1.bridgeObject,param_4);
  _swift_bridgeObjectRelease(SVar1.bridgeObject);
  return;
}



/* Address: 0x100b84c6c | _TtC6Sentry12SentrySDKLog::willLogAtLevel: */

/* Function Stack Size: 0x18 bytes */

bool _TtC6Sentry12SentrySDKLog::willLogAtLevel_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  uint uVar1;
  
  uVar1 = (uint)param_3;
  FUN_100b84bf8();
  return uVar1 & 1;
}



/* Address: 0x100b84c88 | FUN_100b84c88 */

void FUN_100b84c88(undefined8 *param_1)

{
  FUN_100b84974(*param_1,param_1[1]);
  return;
}



/* Address: 0x100b84c94 | FUN_100b84c94 */

void FUN_100b84c94(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x100b84cb8 | FUN_100b84cb8 */

void FUN_100b84cb8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = param_1;
  uStack_28 = param_2;
  (**(code **)(unaff_x20 + 0x10))(&local_30);
  return;
}



/* Address: 0x100b84ce8 | _TtC6Sentry12SentrySDKLog::setOutput: */

/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry12SentrySDKLog::setOutput_(ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  void *pvVar1;
  undefined *puVar2;
  code *pcVar3;
  
  pvVar1 = __Block_copy((void *)param_3);
  if (pvVar1 == (void *)0x0) {
    puVar2 = (undefined *)0x0;
    pcVar3 = (code *)0x0;
  }
  else {
    puVar2 = &DAT_100f37af0;
    _swift_allocObject(&DAT_100f37af0,0x18,7);
    *(void **)(puVar2 + 0x10) = pvVar1;
    pcVar3 = FUN_100b84df0;
  }
  FUN_100b848e4(pcVar3,puVar2);
  FUN_100004550(pcVar3,puVar2);
  return;
}



/* Address: 0x100b84d50 | FUN_100b84d50 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b84d50(undefined8 param_1,undefined8 param_2,long param_3)

{
  NSString *pNVar1;
  
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  (**(code **)(param_3 + 0x10))(param_3,pNVar1);
  return 0;
}



/* Address: 0x100b84d88 | _TtC6Sentry12SentrySDKLog::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry12SentrySDKLog::init(ID param_1,SEL param_2)

{
  FUN_1001fddc8();
  return param_1;
}



/* Address: 0x100b84da8 | _TtC6Sentry12SentrySDKLog::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry12SentrySDKLog::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}



/* Address: 0x100b84dac | FUN_100b84dac */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100b84dac(void)

{
  return ZEXT816(0x100fa0830);
}



/* Address: 0x100b84dcc | FUN_100b84dcc */

void FUN_100b84dcc(void)

{
  long unaff_x20;
  
  __Block_release(*(void **)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x100b84df0 | FUN_100b84df0 */

void FUN_100b84df0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_100b84d50(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100b84df8 | FUN_100b84df8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100b84df8(ulong param_1,char *param_2,char *param_3,void *param_4)

{
  code *pcVar1;
  NSString *self;
  ID self_00;
  char *pcVar2;
  String SVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  
  if ((param_1 != 0) && ((4 < param_1 || (DAT_101045780 == '\x01' && DAT_101045788 <= param_1)))) {
    pcVar2 = param_3;
    self = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    self_00 = _objc_msgSend((ID)self,"lastPathComponent");
    if (self_00 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100b84f74);
      (*pcVar1)();
    }
    _objc_msgSend(self_00,"stringByDeletingPathExtension");
    SVar3 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    SVar5.bridgeObject = param_4;
    SVar5.str = pcVar2;
    Swift::String::append(SVar3,SVar5);
    _swift_bridgeObjectRelease(SVar3.bridgeObject);
    SVar3.bridgeObject = (void *)0xe100000000000000;
    SVar3.str = &DAT_0000003a;
    SVar6.bridgeObject = param_4;
    SVar6.str = pcVar2;
    Swift::String::append(SVar3,SVar6);
    SVar3 = Swift::CustomStringConvertible::get_description();
    SVar7.bridgeObject = param_4;
    SVar7.str = pcVar2;
    Swift::String::append(SVar3,SVar7);
    _swift_bridgeObjectRelease(SVar3.bridgeObject);
    FUN_100b84f84();
    SVar4.bridgeObject = param_3;
    SVar4.str = param_2;
    SVar8.bridgeObject = param_4;
    SVar8.str = pcVar2;
    Swift::String::append(SVar4,SVar8);
    FUN_100b84a3c(0x5b,0xe100000000000000,param_1);
    _swift_bridgeObjectRelease(0xe100000000000000);
  }
  return;
}



/* Address: 0x100b84f74 | thunk_FUN_100b84c94 */

void thunk_FUN_100b84c94(void)

{
  FUN_100b84c94();
  return;
}



/* Address: 0x100b84f78 | FUN_100b84f78 */

void FUN_100b84f78(undefined8 param_1)

{
  _swift_allocObject(param_1,0x20,7);
  return;
}



/* Address: 0x100b84f84 | FUN_100b84f84 */

void FUN_100b84f84(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  String SVar1;
  String SVar2;
  
  SVar1.bridgeObject = &SUB_e200000000000000;
  SVar1.str = (char *)0x205d;
  SVar2.bridgeObject = param_4;
  SVar2.str = param_3;
  Swift::String::append(SVar1,SVar2);
  return;
}



/* Address: 0x100b84f90 | FUN_100b84f90 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100b84f90(undefined8 param_1,undefined8 param_2)

{
  FUN_100b85354();
  _objc_allocWithZone();
  FUN_100bb059c(param_1,param_2);
  return;
}



/* Address: 0x100b84fdc | _TtC6Sentry21SentryDispatchFactory::queueWithName:attributes: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID _TtC6Sentry21SentryDispatchFactory::queueWithName_attributes_
             (ID param_1,SEL param_2,const_char__ param_3,ID param_4)

{
  FUN_100b84f90(param_3,param_4);
  return (ID)param_3;
}



/* Address: 0x100b85040 | FUN_100b85040 */

void FUN_100b85040(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_100b85354();
  _objc_allocWithZone();
  FUN_100bb0500(param_1,param_2,uVar1);
  return;
}



/* Address: 0x100b8507c | _TtC6Sentry21SentryDispatchFactory::createUtilityQueue:relativePriority: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x1c bytes */

ID _TtC6Sentry21SentryDispatchFactory::createUtilityQueue_relativePriority_
             (ID param_1,SEL param_2,const_char__ param_3,int param_4)

{
  FUN_100b85040(param_3,param_4);
  return (ID)param_3;
}



/* Address: 0x100b850c8 | FUN_100b850c8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100b850c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_100b85354();
  _objc_allocWithZone();
  FUN_100bb059c(param_3,param_4);
  FUN_100bc7da0(0);
  _objc_allocWithZone();
  _swift_retain(param_6);
  FUN_100bc7950(param_1,param_2,param_3,param_5,param_6);
  return;
}



/* Address: 0x100b8516c | _TtC6Sentry21SentryDispatchFactory::sourceWithInterval:leeway:queueName:attributes:eventHandler: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x38 bytes */

ID _TtC6Sentry21SentryDispatchFactory::sourceWithInterval_leeway_queueName_attributes_eventHandler_
             (ID param_1,SEL param_2,long_long param_3,long_long param_4,const_char__ param_5,
             ID param_6,ID param_7,undefined4 param_8)

{
  void *pvVar1;
  undefined *puVar2;
  
  pvVar1 = __Block_copy((void *)param_7);
  puVar2 = &DAT_100f37b18;
  _swift_allocObject(&DAT_100f37b18,0x18,7);
  *(void **)(puVar2 + 0x10) = pvVar1;
  FUN_100b850c8(param_3,param_4,param_5,param_6,FUN_100155a18,puVar2);
  _swift_release(puVar2);
  return param_3;
}



/* Address: 0x100b85230 | FUN_100b85230 */

void FUN_100b85230(void)

{
  FUN_100b852b0();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"init");
  return;
}



/* Address: 0x100b85260 | _TtC6Sentry21SentryDispatchFactory::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry21SentryDispatchFactory::init(ID param_1,SEL param_2)

{
  FUN_100b85230();
  return param_1;
}



/* Address: 0x100b85280 | FUN_100b85280 */

void FUN_100b85280(void)

{
  FUN_100b852b0();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x100b852b0 | FUN_100b852b0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100b852b0(void)

{
  return ZEXT816(0x100fa08e0);
}



/* Address: 0x100b852d0 | FUN_100b852d0 */

void FUN_100b852d0(undefined8 param_1,undefined8 param_2)

{
  _swift_lookUpClassMethod(param_1,param_2,&TargetClassDescriptor_100ccde8c);
  return;
}



/* Address: 0x100b852dc | FUN_100b852dc */

void FUN_100b852dc(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b852f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x50))();
  return;
}



/* Address: 0x100b852f8 | FUN_100b852f8 */

void FUN_100b852f8(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b85310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x58))();
  return;
}



/* Address: 0x100b85314 | FUN_100b85314 */

void FUN_100b85314(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b8532c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x60))();
  return;
}



/* Address: 0x100b85330 | FUN_100b85330 */

void FUN_100b85330(void)

{
  long unaff_x20;
  
  __Block_release(*(void **)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x100b85354 | FUN_100b85354 */

void FUN_100b85354(void)

{
  FUN_100bb06f4(0);
  return;
}



/* Address: 0x100b8535c | _TtC6Sentry15SentryVideoInfo::path */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry15SentryVideoInfo::path(ID param_1,SEL param_2)

{
  FUN_100b85488(param_1,param_2,PTR_typeMetadataAccessor_100ea71a8,FUN_100b85378,
                PTR__bridgeToObjectiveC_100ea70e0);
  return param_1;
}



/* Address: 0x100b85378 | FUN_100b85378 */

void FUN_100b85378(void)

{
  FUN_100b85554(&_TtC6Sentry15SentryVideoInfo::path,PTR_typeMetadataAccessor_100ea71a8);
  return;
}



/* Address: 0x100b8538c | _TtC6Sentry15SentryVideoInfo::height */

/* Function Stack Size: 0x10 bytes */

long_long _TtC6Sentry15SentryVideoInfo::height(ID param_1,SEL param_2)

{
  FUN_100b853ac();
  return param_1;
}


