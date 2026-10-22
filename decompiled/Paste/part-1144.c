/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100bd4ef8 | _TtC6Sentry9SentryLog::init */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry9SentryLog::init(ID param_1,SEL param_2)

{
  long lVar1;
  ID IVar2;
  
  FUN_100bd4ecc();
  lVar1 = timestamp;
  IVar2 = param_1;
  FUN_100b7982c();
  (**(code **)(*(long *)(IVar2 - 8) + 8))(param_1 + lVar1,IVar2);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + body + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + attributes));
  return 0;
}



/* Address: 0x100bd4f04 | _TtC6Sentry9SentryLog::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry9SentryLog::_cxx_destruct(ID param_1,SEL param_2)

{
  long lVar1;
  ID IVar2;
  
  lVar1 = timestamp;
  IVar2 = param_1;
  FUN_100b7982c();
  (**(code **)(*(long *)(IVar2 - 8) + 8))(param_1 + lVar1,IVar2);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + body + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + attributes));
  return;
}



/* Address: 0x100bd4f90 | FUN_100bd4f90 */

undefined8 FUN_100bd4f90(undefined8 param_1)

{
  FUN_100b78c58();
  FUN_100b86d54();
  FUN_100bd623c();
  FUN_100b6f838();
  return param_1;
}



/* Address: 0x100bd4fe0 | FUN_100bd4fe0 */

void FUN_100bd4fe0(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_50 [32];
  
  FUN_100bd6474();
  FUN_100b6f838();
  lVar1 = _TtC6Sentry9SentryLog::attributes;
  FUN_100b80d38(unaff_x20 + _TtC6Sentry9SentryLog::attributes,auStack_50);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  _swift_bridgeObjectRelease(uVar2);
  FUN_100b78c90();
  return;
}



/* Address: 0x100bd5030 | FUN_100bd5030 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100bd5064 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_100bd5030(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_100b6730c(&DAT_101045018);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (6 < uVar1) {
    uVar1 = 7;
  }
  return uVar1;
}



/* Address: 0x100bd508c | thunk_FUN_100bd5030 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100bd5064 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong thunk_FUN_100bd5030(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_100b6730c(&DAT_101045018);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (6 < uVar1) {
    uVar1 = 7;
  }
  return uVar1;
}



/* Address: 0x100bd5090 | FUN_100bd5090 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100bd53f8) */

String FUN_100bd5090(ulong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                    undefined *param_5)

{
  long *plVar1;
  char *pcVar2;
  String SVar3;
  Date DVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  void *pvVar9;
  undefined8 *puVar10;
  long extraout_x8;
  undefined8 uVar11;
  long extraout_x9;
  long unaff_x19;
  byte *unaff_x20;
  long lVar12;
  ID self;
  long unaff_x21;
  long unaff_x22;
  long unaff_x24;
  Date unaff_x25;
  byte *unaff_x26;
  byte *unaff_x27;
  undefined8 *unaff_x29;
  undefined8 *puVar13;
  undefined8 unaff_x30;
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
  undefined8 *in_stack_00000050;
  undefined8 in_stack_00000058;
  
  SVar24.bridgeObject = unaff_x25.unknown;
  SVar24.str = (char *)unaff_x20;
  puVar8 = (undefined8 *)&SUB_e900000000000070;
  DVar4.unknown = &DAT_6d617473656d6974;
  SVar3.bridgeObject = &SUB_e900000000000070;
  SVar3.str = &DAT_6d617473656d6974;
  puVar10 = (undefined8 *)(param_1 & 0xff);
  puVar13 = unaff_x29;
  switch(puVar10) {
  case (undefined8 *)0x0:
    goto switchD_100bd50c4_caseD_0;
  default:
    puVar8 = (undefined8 *)&DAT_e800000000000000;
  case (undefined8 *)0x26:
  case (undefined8 *)0x40:
  case (undefined8 *)0x4e:
  case (undefined8 *)0xaa:
  case (undefined8 *)0xcc:
  case (undefined8 *)0xda:
  case (undefined8 *)0xf4:
    DVar4.unknown = (byte *)0x7274;
  case (undefined8 *)0x22:
    DVar4.unknown = (undefined *)((ulong)DVar4.unknown & 0xffffffff0000ffff | 0x63610000);
switchD_100bd50c4_caseD_1a:
    SVar14.str = (char *)((ulong)DVar4.unknown & 0xffffffff | 0x64695f6500000000);
    SVar14.bridgeObject = puVar8;
    return SVar14;
  case (undefined8 *)0x2:
  case (undefined8 *)0xb:
    puVar8 = (undefined8 *)&DAT_e700000000000000;
  case (undefined8 *)0x24:
    DVar4.unknown = (byte *)0x7073;
  case (undefined8 *)0x9:
    DVar4.unknown = (undefined *)((ulong)DVar4.unknown & 0xffff00000000ffff | 0x695f6e610000);
  case (undefined8 *)0xa:
    DVar4.unknown = (undefined *)((ulong)DVar4.unknown & 0xffffffffffff | 0x64000000000000);
switchD_100bd50c4_caseD_e:
    SVar16.bridgeObject = puVar8;
    SVar16.str = DVar4.unknown;
    return SVar16;
  case (undefined8 *)0x3:
  case (undefined8 *)0xc:
  case (undefined8 *)0x98:
  case (undefined8 *)0xa0:
    puVar8 = (undefined8 *)&DAT_e500000000000000;
    DVar4.unknown = (byte *)0x656c;
  case (undefined8 *)0x7c:
    DVar4.unknown = (undefined *)((ulong)DVar4.unknown & 0xffff00000000ffff | 0x6c65760000);
switchD_100bd50c4_caseD_10:
    SVar17.bridgeObject = puVar8;
    SVar17.str = DVar4.unknown;
    return SVar17;
  case (undefined8 *)0x4:
    puVar8 = (undefined8 *)&DAT_e400000000000000;
  case (undefined8 *)0x90:
  case (undefined8 *)0xa8:
    DVar4.unknown = (byte *)0x6f62;
  case (undefined8 *)0x80:
  case (undefined8 *)0x88:
    DVar4.unknown = (undefined *)(ulong)((uint)DVar4.unknown & 0xffff | 0x79640000);
switchD_100bd50c4_caseD_7:
    SVar15.bridgeObject = puVar8;
    SVar15.str = DVar4.unknown;
    return SVar15;
  case (undefined8 *)0x5:
  case (undefined8 *)0xbc:
    puVar8 = (undefined8 *)0xea00000000007365;
    DVar4.unknown = (byte *)0x7475626972747461;
  case (undefined8 *)0xf:
    SVar18.bridgeObject = puVar8;
    SVar18.str = DVar4.unknown;
    return SVar18;
  case (undefined8 *)0x6:
    puVar8 = (undefined8 *)0x6d756e5f;
  case (undefined8 *)0x19:
  case (undefined8 *)0x35:
  case (undefined8 *)0xc1:
  case (undefined8 *)0xe9:
    puVar8 = (undefined8 *)((ulong)puVar8 & 0xffffffffffff | 0xef72656200000000);
    DVar4.unknown = (byte *)0x6573;
  case (undefined8 *)0x92:
    DVar4.unknown = (undefined *)((ulong)DVar4.unknown & 0xffff | 0x7974697265760000);
switchD_100bd50c4_caseD_0:
    SVar19.bridgeObject = puVar8;
    SVar19.str = DVar4.unknown;
    return SVar19;
  case (undefined8 *)0x7:
  case (undefined8 *)0xd0:
    goto switchD_100bd50c4_caseD_7;
  case (undefined8 *)0xe:
    goto switchD_100bd50c4_caseD_e;
  case (undefined8 *)0x10:
  case (undefined8 *)0xfc:
    goto switchD_100bd50c4_caseD_10;
  case (undefined8 *)0x14:
    goto switchD_100bd50c4_caseD_14;
  case (undefined8 *)0x15:
  case (undefined8 *)0x31:
  case (undefined8 *)0x45:
  case (undefined8 *)0xbd:
  case (undefined8 *)0xd1:
    goto switchD_100bd50c4_caseD_15;
  case (undefined8 *)0x18:
    goto switchD_100bd50c4_caseD_18;
  case (undefined8 *)0x1a:
  case (undefined8 *)0x36:
  case (undefined8 *)0x3e:
  case (undefined8 *)0x78:
  case (undefined8 *)0xc2:
  case (undefined8 *)0xca:
  case (undefined8 *)0xea:
  case (undefined8 *)0xf2:
    goto switchD_100bd50c4_caseD_1a;
  case (undefined8 *)0x1c:
  case (undefined8 *)0x29:
    goto switchD_100bd50c4_caseD_1c;
  case (undefined8 *)0x1d:
  case (undefined8 *)0xe5:
  case (undefined8 *)0xf9:
    goto switchD_100bd50c4_caseD_1d;
  case (undefined8 *)0x28:
    FUN_100bd5e68(&DAT_6d617473656d6974,&SUB_e900000000000070);
    SVar24 = (extension_Swift)::Swift::CodingKey::get_description();
    return SVar24;
  case (undefined8 *)0x2a:
  case (undefined8 *)0x4a:
  case (undefined8 *)0xd6:
  case (undefined8 *)0xfe:
    goto switchD_100bd50c4_caseD_2a;
  case (undefined8 *)0x2b:
  case (undefined8 *)0x4b:
  case (undefined8 *)0x95:
  case (undefined8 *)0x96:
  case (undefined8 *)0xac:
  case (undefined8 *)0xad:
  case (undefined8 *)0xae:
  case (undefined8 *)0xd7:
  case (undefined8 *)0xff:
    goto switchD_100bd50c4_caseD_2b;
  case (undefined8 *)0x2c:
    goto switchD_100bd50c4_caseD_2c;
  case (undefined8 *)0x2d:
    goto switchD_100bd50c4_caseD_2d;
  case (undefined8 *)0x30:
    goto switchD_100bd50c4_caseD_30;
  case (undefined8 *)0x34:
  case (undefined8 *)0xb2:
  case (undefined8 *)0xd4:
    break;
  case (undefined8 *)0x44:
    goto switchD_100bd50c4_caseD_44;
  case (undefined8 *)0x48:
    goto switchD_100bd50c4_caseD_48;
  case (undefined8 *)0x49:
  case (undefined8 *)0x63:
    goto switchD_100bd50c4_caseD_49;
  case (undefined8 *)0x55:
  case (undefined8 *)0xe1:
    goto switchD_100bd50c4_caseD_55;
  case (undefined8 *)0x60:
  case (undefined8 *)0xb7:
    goto switchD_100bd50c4_caseD_60;
  case (undefined8 *)0x61:
  case (undefined8 *)0xb4:
  case (undefined8 *)0xd5:
  case (undefined8 *)0xfd:
    goto switchD_100bd50c4_caseD_61;
  case (undefined8 *)0x62:
    goto switchD_100bd50c4_caseD_62;
  case (undefined8 *)0x64:
  case (undefined8 *)0xb8:
    goto switchD_100bd50c4_caseD_64;
  case (undefined8 *)0x66:
  case (undefined8 *)0xb1:
    goto switchD_100bd50c4_caseD_66;
  case (undefined8 *)0x67:
  case (undefined8 *)0xb5:
    goto switchD_100bd50c4_caseD_67;
  case (undefined8 *)0x70:
    FUN_100bd5e68(&DAT_6d617473656d6974,&SUB_e900000000000070);
  case (undefined8 *)0x5f:
    SVar24 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
    return SVar24;
  case (undefined8 *)0x94:
    goto switchD_100bd50c4_caseD_94;
  case (undefined8 *)0x97:
  case (undefined8 *)0xaf:
    goto switchD_100bd50c4_caseD_97;
  case (undefined8 *)0xb0:
    DVar4.unknown = (undefined *)(ulong)*unaff_x20;
  case (undefined8 *)0x2e:
  case (undefined8 *)0x56:
  case (undefined8 *)0xe2:
    FUN_100bd5090(DVar4.unknown);
    SVar22.bridgeObject = puVar8;
    SVar22.str = DVar4.unknown;
    return SVar22;
  case (undefined8 *)0xb3:
    goto switchD_100bd50c4_caseD_b3;
  case (undefined8 *)0xb6:
  case (undefined8 *)0x54:
  case (undefined8 *)0x65:
    SVar23.bridgeObject = &SUB_e900000000000070;
    SVar23.str = &DAT_6d617473656d6974;
    return SVar23;
  case (undefined8 *)0xb9:
    goto switchD_100bd50c4_caseD_b9;
  case (undefined8 *)0xc0:
    DVar4.unknown = (undefined *)(ulong)*unaff_x20;
  case (undefined8 *)0x16:
  case (undefined8 *)0x1e:
  case (undefined8 *)0x32:
  case (undefined8 *)0x46:
  case (undefined8 *)0xbe:
  case (undefined8 *)0xd2:
  case (undefined8 *)0xe6:
  case (undefined8 *)0xfa:
    FUN_100bec8ac(DVar4.unknown);
    SVar20.bridgeObject = puVar8;
    SVar20.str = DVar4.unknown;
    return SVar20;
  case (undefined8 *)0xe0:
    SVar21.bridgeObject = &SUB_e900000000000070;
    SVar21.str = &DAT_6d617473656d6974;
    return SVar21;
  case (undefined8 *)0xe4:
    goto switchD_100bd50c4_caseD_e4;
  case (undefined8 *)0xf8:
    goto switchD_100bd50c4_caseD_f8;
  }
switchD_100bd50c4_caseD_60:
switchD_100bd50c4_caseD_67:
  puVar13 = &stack0x00000050;
  in_stack_00000050 = unaff_x29;
  in_stack_00000058 = unaff_x30;
switchD_100bd50c4_caseD_b3:
  puVar13[-0x22] = unaff_x21;
  puVar13[-0x21] = unaff_x20;
switchD_100bd50c4_caseD_61:
  unaff_x20 = DVar4.unknown;
switchD_100bd50c4_caseD_66:
  DVar4 = Foundation::Date::typeMetadataAccessor();
  unaff_x25 = DVar4;
switchD_100bd50c4_caseD_49:
  unaff_x19 = *(long *)(DVar4.unknown + -8);
switchD_100bd50c4_caseD_b9:
  puVar10 = *(undefined8 **)(unaff_x19 + 0x40);
switchD_100bd50c4_caseD_62:
  FUN_100b6f9e0(puVar10);
  unaff_x26 = (byte *)(extraout_x9 - extraout_x8);
  DVar4.unknown = &DAT_101047dd0;
switchD_100bd50c4_caseD_64:
  FUN_100b6730c();
  unaff_x22 = *(long *)(DVar4.unknown + -8);
  unaff_x27 = DVar4.unknown;
switchD_100bd50c4_caseD_1c:
  FUN_100b6f9e0(*(undefined8 *)(unaff_x22 + 0x40));
switchD_100bd50c4_caseD_97:
switchD_100bd50c4_caseD_18:
  FUN_100004640(unaff_x20,*(undefined8 *)(unaff_x20 + 0x18));
switchD_100bd50c4_caseD_44:
  FUN_100bd5e68();
  unaff_x24 = puVar13[-0x21];
  Swift::Encoder::_container();
  puVar10 = &DAT_101058000;
switchD_100bd50c4_caseD_30:
  DVar4.unknown = unaff_x26;
  lVar12 = puVar10[0x93];
  FUN_100b78ca0(unaff_x24 + lVar12,puVar13 + -0xe);
  (**(code **)(unaff_x19 + 0x10))(DVar4.unknown,unaff_x24 + lVar12,unaff_x25.unknown);
  *(undefined1 *)(puVar13 + -0x11) = 0;
  param_5 = &DAT_101047de0;
  FUN_100003a00(&DAT_101047de0,PTR_typeMetadataAccessor_100ea7480,
                PTR_Foundation__Foundation__Date_>Swift__Encodable_100ea7490);
  puVar8 = puVar13 + -0x11;
  unaff_x29 = puVar13;
switchD_100bd50c4_caseD_14:
  lVar12 = unaff_x29[-0x22];
  Swift::KeyedEncodingContainer::_encode(DVar4.unknown,puVar8,unaff_x27,unaff_x25.unknown,param_5);
  if (lVar12 == 0) {
    FUN_100bd67b8();
    lVar12 = _TtC6Sentry9SentryLog::traceId;
    FUN_100b78ca0(unaff_x24 + _TtC6Sentry9SentryLog::traceId,unaff_x29 + -0x11);
    _objc_msgSend(*(ID *)(unaff_x24 + lVar12),"sentryIdString");
    SVar24 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    *(undefined1 *)(unaff_x29 + -0x14) = 1;
    FUN_100bd6750(SVar24.str,SVar24.bridgeObject,unaff_x29 + -0x14);
    Swift::KeyedEncodingContainer::_encode();
    FUN_100b7c97c();
    unaff_x19 = _TtC6Sentry9SentryLog::spanId;
    FUN_100b78ca0(unaff_x24 + _TtC6Sentry9SentryLog::spanId,unaff_x29 + -0x14);
    unaff_x21 = 0;
switchD_100bd50c4_caseD_48:
    if (*(ID *)(unaff_x24 + unaff_x19) == 0) {
      SVar24 = (String)ZEXT816(0);
    }
    else {
      _objc_msgSend(*(ID *)(unaff_x24 + unaff_x19),"sentrySpanIdString");
      unaff_x24 = unaff_x22;
switchD_100bd50c4_caseD_1d:
switchD_100bd50c4_caseD_15:
      unaff_x22 = unaff_x24;
      SVar24 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    }
    *(undefined1 *)(unaff_x29 + -0x17) = 2;
    unaff_x24 = unaff_x22;
switchD_100bd50c4_caseD_2d:
    param_3 = unaff_x29 + -0x17;
switchD_100bd50c4_caseD_55:
    FUN_100bd6750(SVar24.str,SVar24.bridgeObject,param_3);
    Swift::KeyedEncodingContainer::_encodeIfPresent();
    if (unaff_x21 == 0) {
      FUN_100b7c97c();
      unaff_x21 = 0;
      unaff_x19 = _TtC6Sentry9SentryLog::level;
switchD_100bd50c4_caseD_e4:
      puVar10 = unaff_x29 + -1;
switchD_100bd50c4_caseD_94:
      unaff_x22 = puVar10[-0x20];
switchD_100bd50c4_caseD_2b:
      lVar12 = unaff_x22 + unaff_x19;
      FUN_100b78ca0(lVar12,unaff_x29 + -0x17);
      unaff_x29[-0x1a] = *(undefined8 *)(unaff_x22 + unaff_x19);
      *(undefined1 *)(unaff_x29 + -0x1d) = 3;
      FUN_100bd5ea8();
      DVar4.unknown = (undefined *)(unaff_x29 + -0x1a);
      puVar8 = unaff_x29 + -0x1d;
      FUN_100bd6830(DVar4.unknown,puVar8,unaff_x27,&DAT_100f3a9b8,lVar12);
      if (unaff_x21 == 0) {
        plVar1 = (long *)(unaff_x22 + _TtC6Sentry9SentryLog::body);
        FUN_100b78ca0(plVar1,unaff_x29 + -0x1a);
        pcVar2 = (char *)*plVar1;
        pvVar9 = (void *)plVar1[1];
        *(undefined1 *)(unaff_x29 + -0x1d) = 4;
        _swift_bridgeObjectRetain(pvVar9);
        pcVar5 = pcVar2;
        FUN_100bd6750(pcVar2,pvVar9,unaff_x29 + -0x1d);
        Swift::KeyedEncodingContainer::_encode();
        SVar24.bridgeObject = pvVar9;
        SVar24.str = pcVar5;
        if (pcVar2 != (char *)0x0) goto LAB_100bd5480;
        FUN_100b7c97c();
        lVar12 = _TtC6Sentry9SentryLog::attributes;
        FUN_100b78ca0(unaff_x22 + _TtC6Sentry9SentryLog::attributes,unaff_x29 + -0x1d);
        unaff_x29[-0x20] = *(undefined8 *)(unaff_x22 + lVar12);
        *(undefined1 *)((long)unaff_x29 + -0x41) = 5;
        puVar6 = &DAT_101047df0;
        FUN_100b6730c(&DAT_101047df0);
        puVar7 = puVar6;
        FUN_100bd5ee8();
        FUN_100bd6830(unaff_x29 + -0x20,(long)unaff_x29 + -0x41,unaff_x27,puVar6,puVar7);
        lVar12 = _TtC6Sentry9SentryLog::severityNumber;
        FUN_100b78ca0(unaff_x22 + _TtC6Sentry9SentryLog::severityNumber,unaff_x29 + -0x20);
        self = *(ID *)(unaff_x22 + lVar12);
        if (self == 0) {
          DVar4.unknown = (byte *)0x0;
        }
        else {
          DVar4.unknown = (undefined *)_objc_msgSend(self,"integerValue");
        }
        puVar8 = (undefined8 *)(ulong)(self == 0);
        *(undefined1 *)((long)unaff_x29 + -0x41) = 6;
        FUN_100bd6750(DVar4.unknown,puVar8,(long)unaff_x29 + -0x41);
        Swift::KeyedEncodingContainer::_encodeIfPresent();
      }
      uVar11 = *(undefined8 *)(unaff_x24 + 8);
      goto LAB_100bd5384;
    }
LAB_100bd5480:
    FUN_100bd680c(*(undefined8 *)(unaff_x24 + 8));
    FUN_100b7c97c();
    SVar3 = SVar24;
  }
  else {
    FUN_100bd67b8();
    uVar11 = *(undefined8 *)(unaff_x22 + 8);
LAB_100bd5384:
    FUN_100bd680c(uVar11);
    SVar3.bridgeObject = puVar8;
    SVar3.str = DVar4.unknown;
  }
switchD_100bd50c4_caseD_f8:
switchD_100bd50c4_caseD_2a:
switchD_100bd50c4_caseD_2c:
  return SVar3;
}



/* Address: 0x100bd515c | FUN_100bd515c */

void FUN_100bd515c(undefined1 *param_1,undefined1 *param_2)

{
  FUN_100bec00c(*param_1,*param_2);
  return;
}



/* Address: 0x100bd5168 | switchD_100bd50c4::caseD_c0 */

void switchD_100bd50c4::caseD_c0(void)

{
  undefined1 *unaff_x20;
  
  FUN_100bec8ac(*unaff_x20);
  return;
}



/* Address: 0x100bd5170 | FUN_100bd5170 */

void FUN_100bd5170(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  switchD_100becca8::caseD_e2(param_1,*unaff_x20);
  return;
}



/* Address: 0x100bd5178 | FUN_100bd5178 */

void FUN_100bd5178(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  FUN_100bed4c4(param_1,*unaff_x20);
  return;
}



/* Address: 0x100bd5180 | FUN_100bd5180 */

void FUN_100bd5180(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_100bd5030(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x100bd51ac | FUN_100bd51ac */

void FUN_100bd51ac(ulong *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  byte *unaff_x20;
  
  uVar1 = (ulong)*unaff_x20;
  FUN_100bd5090();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



/* Address: 0x100bd51d4 | switchD_100bd50c4::caseD_b0 */

void switchD_100bd50c4::caseD_b0(void)

{
  undefined1 *unaff_x20;
  
  FUN_100bd5090(*unaff_x20);
  return;
}



/* Address: 0x100bd51dc | FUN_100bd51dc */

void FUN_100bd51dc(undefined1 *param_1,undefined1 param_2)

{
  thunk_FUN_100bd5030();
  *param_1 = param_2;
  return;
}



/* Address: 0x100bd5200 | FUN_100bd5200 */

String FUN_100bd5200(void)

{
  String SVar1;
  
  FUN_100bd5e68();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100bd5228 | switchD_100bd50c4::caseD_28 */

String switchD_100bd50c4::caseD_28(void)

{
  String SVar1;
  
  FUN_100bd5e68();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100bd5250 | FUN_100bd5250 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100bd53f8) */

void FUN_100bd5250(long param_1)

{
  long *plVar1;
  Date DVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  ID IVar7;
  long extraout_x8;
  undefined8 uVar8;
  long extraout_x9;
  long lVar9;
  long unaff_x20;
  ID self;
  long unaff_x21;
  long lVar10;
  String SVar11;
  undefined8 local_110 [3];
  undefined1 local_f8 [24];
  undefined8 local_e0 [3];
  undefined1 local_c8 [24];
  undefined1 local_b0 [24];
  undefined1 local_98 [24];
  undefined1 auStack_80 [32];
  undefined1 local_51;
  
  DVar2 = Foundation::Date::typeMetadataAccessor();
  lVar9 = *(long *)(DVar2.unknown + -8);
  FUN_100b6f9e0(*(undefined8 *)(lVar9 + 0x40));
  puVar3 = &DAT_101047dd0;
  FUN_100b6730c();
  lVar10 = *(long *)(puVar3 + -8);
  FUN_100b6f9e0(*(undefined8 *)(lVar10 + 0x40));
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100bd5e68();
  Swift::Encoder::_container();
  lVar5 = _TtC6Sentry9SentryLog::timestamp;
  FUN_100b78ca0(unaff_x20 + _TtC6Sentry9SentryLog::timestamp,auStack_80);
  (**(code **)(lVar9 + 0x10))(extraout_x9 - extraout_x8,unaff_x20 + lVar5,DVar2.unknown);
  local_98[0] = 0;
  puVar4 = &DAT_101047de0;
  FUN_100003a00(&DAT_101047de0,PTR_typeMetadataAccessor_100ea7480,
                PTR_Foundation__Foundation__Date_>Swift__Encodable_100ea7490);
  Swift::KeyedEncodingContainer::_encode
            (extraout_x9 - extraout_x8,local_98,puVar3,DVar2.unknown,puVar4);
  if (unaff_x21 == 0) {
    FUN_100bd67b8();
    lVar5 = _TtC6Sentry9SentryLog::traceId;
    FUN_100b78ca0(unaff_x20 + _TtC6Sentry9SentryLog::traceId,local_98);
    _objc_msgSend(*(ID *)(unaff_x20 + lVar5),"sentryIdString");
    SVar11 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    local_b0[0] = 1;
    FUN_100bd6750(SVar11.str,SVar11.bridgeObject,local_b0);
    Swift::KeyedEncodingContainer::_encode();
    FUN_100b7c97c();
    lVar5 = _TtC6Sentry9SentryLog::spanId;
    FUN_100b78ca0(unaff_x20 + _TtC6Sentry9SentryLog::spanId,local_b0);
    if (*(ID *)(unaff_x20 + lVar5) == 0) {
      SVar11 = (String)ZEXT816(0);
    }
    else {
      _objc_msgSend(*(ID *)(unaff_x20 + lVar5),"sentrySpanIdString");
      SVar11 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    }
    local_c8[0] = 2;
    FUN_100bd6750(SVar11.str,SVar11.bridgeObject,local_c8);
    Swift::KeyedEncodingContainer::_encodeIfPresent();
    FUN_100b7c97c();
    lVar9 = _TtC6Sentry9SentryLog::level;
    lVar5 = unaff_x20 + _TtC6Sentry9SentryLog::level;
    FUN_100b78ca0(lVar5,local_c8);
    local_e0[0] = *(undefined8 *)(unaff_x20 + lVar9);
    local_f8[0] = 3;
    FUN_100bd5ea8();
    FUN_100bd6830(local_e0,local_f8,puVar3,&DAT_100f3a9b8,lVar5);
    plVar1 = (long *)(unaff_x20 + _TtC6Sentry9SentryLog::body);
    FUN_100b78ca0(plVar1,local_e0);
    lVar5 = *plVar1;
    lVar9 = plVar1[1];
    local_f8[0] = 4;
    _swift_bridgeObjectRetain(lVar9);
    FUN_100bd6750(lVar5,lVar9,local_f8);
    Swift::KeyedEncodingContainer::_encode();
    if (lVar5 != 0) {
      FUN_100bd680c(*(undefined8 *)(lVar10 + 8));
      FUN_100b7c97c();
      return;
    }
    FUN_100b7c97c();
    lVar5 = _TtC6Sentry9SentryLog::attributes;
    FUN_100b78ca0(unaff_x20 + _TtC6Sentry9SentryLog::attributes,local_f8);
    local_110[0] = *(undefined8 *)(unaff_x20 + lVar5);
    local_51 = 5;
    puVar4 = &DAT_101047df0;
    FUN_100b6730c(&DAT_101047df0);
    puVar6 = puVar4;
    FUN_100bd5ee8();
    FUN_100bd6830(local_110,&local_51,puVar3,puVar4,puVar6);
    lVar5 = _TtC6Sentry9SentryLog::severityNumber;
    FUN_100b78ca0(unaff_x20 + _TtC6Sentry9SentryLog::severityNumber,local_110);
    self = *(ID *)(unaff_x20 + lVar5);
    if (self == 0) {
      IVar7 = 0;
    }
    else {
      IVar7 = _objc_msgSend(self,"integerValue");
    }
    local_51 = 6;
    FUN_100bd6750(IVar7,self == 0,&local_51);
    Swift::KeyedEncodingContainer::_encodeIfPresent();
    uVar8 = *(undefined8 *)(lVar10 + 8);
  }
  else {
    FUN_100bd67b8();
    uVar8 = *(undefined8 *)(lVar10 + 8);
  }
  FUN_100bd680c(uVar8);
  return;
}



/* Address: 0x100bd560c | FUN_100bd560c */

void FUN_100bd560c(void)

{
  FUN_100bd5250();
  return;
}



/* Address: 0x100bd562c | FUN_100bd562c */

void FUN_100bd562c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  
  lVar1 = param_6 + (param_1 >> 6) * 8;
  *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (param_1 & 0x3f);
  puVar2 = (undefined8 *)(*(long *)(param_6 + 0x30) + param_1 * 0x10);
  *puVar2 = param_2;
  puVar2[1] = param_3;
  puVar2 = (undefined8 *)(*(long *)(param_6 + 0x38) + param_1 * 0x10);
  *puVar2 = param_4;
  puVar2[1] = param_5;
  if (!SCARRY8(*(long *)(param_6 + 0x10),1)) {
    *(long *)(param_6 + 0x10) = *(long *)(param_6 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100bd5678);
  (*pcVar3)();
}



/* Address: 0x100bd5678 | FUN_100bd5678 */

void FUN_100bd5678(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,long param_7)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  
  lVar1 = param_7 + (param_1 >> 6) * 8;
  *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (param_1 & 0x3f);
  puVar3 = (undefined8 *)(*(long *)(param_7 + 0x30) + param_1 * 0x10);
  *puVar3 = param_2;
  puVar3[1] = param_3;
  puVar3 = (undefined8 *)(*(long *)(param_7 + 0x38) + param_1 * 0x18);
  *puVar3 = param_4;
  puVar3[1] = param_5;
  *(undefined1 *)(puVar3 + 2) = param_6;
  if (!SCARRY8(*(long *)(param_7 + 0x10),1)) {
    *(long *)(param_7 + 0x10) = *(long *)(param_7 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100bd56cc);
  (*pcVar2)();
}



/* Address: 0x100bd56cc | FUN_100bd56cc */

void FUN_100bd56cc(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  Date DVar2;
  long lVar3;
  
  lVar3 = param_4 + (param_1 >> 6) * 8;
  *(ulong *)(lVar3 + 0x40) = *(ulong *)(lVar3 + 0x40) | 1L << (param_1 & 0x3f);
  *(undefined8 *)(*(long *)(param_4 + 0x30) + param_1 * 8) = param_2;
  lVar3 = *(long *)(param_4 + 0x38);
  DVar2 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar2.unknown + -8) + 0x20))
            (lVar3 + *(long *)(*(long *)(DVar2.unknown + -8) + 0x48) * param_1,param_3,DVar2.unknown
            );
  if (!SCARRY8(*(long *)(param_4 + 0x10),1)) {
    *(long *)(param_4 + 0x10) = *(long *)(param_4 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100bd5758);
  (*pcVar1)();
}



/* Address: 0x100bd5758 | FUN_100bd5758 */

void FUN_100bd5758(undefined *param_1,ulong param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined *puVar3;
  long extraout_x8;
  long extraout_x9;
  long *unaff_x19;
  long in_stack_00000008;
  
  FUN_100bd678c();
  FUN_100bd66fc();
  FUN_100bd6774();
  FUN_100bd66e0();
  FUN_100bd66ec();
  uVar2 = extraout_x8 + extraout_x9 == 0;
  if (SCARRY8(extraout_x8,extraout_x9)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100bd5800);
    (*pcVar1)();
  }
  puVar3 = &DAT_101044768;
  FUN_100b6730c();
  FUN_100bd66cc();
  if (((ulong)puVar3 & 1) != 0) {
    FUN_100bd66e0();
    FUN_100bd6728();
    param_1 = puVar3;
    if (!(bool)uVar2) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100bd5810);
      (*pcVar1)();
    }
  }
  if ((param_2 & 1) == 0) {
    FUN_100bd6760(param_1);
    FUN_1000d93f0();
    FUN_100b940f8();
  }
  else {
    FUN_100004594(*(long *)(in_stack_00000008 + 0x38) + (long)param_1 * 0x20);
    FUN_100011080();
  }
  *unaff_x19 = in_stack_00000008;
  FUN_100bd66b0();
  return;
}



/* Address: 0x100bd5810 | FUN_100bd5810 */

void FUN_100bd5810(long param_1,ulong param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined7 extraout_var;
  uint uVar6;
  ulong uVar7;
  _NativeDictionary _Var8;
  long extraout_x8;
  long extraout_x9;
  long *unaff_x20;
  long *plVar9;
  long in_stack_00000008;
  long lVar5;
  
  FUN_100bd678c();
  lVar3 = param_1;
  uVar7 = param_2;
  _Var8.unknown = param_3;
  FUN_100bd6720();
  lVar4 = lVar3;
  FUN_100bd6774();
  FUN_100bd6824();
  FUN_100bd66ec();
  lVar5 = extraout_x8 + extraout_x9;
  if (SCARRY8(extraout_x8,extraout_x9)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100bd5904);
    (*pcVar1)();
  }
  FUN_100b6730c(&DAT_101046318);
  FUN_100bd6780();
  bVar2 = Swift::_NativeDictionary::ensureUnique(SUB81(lVar3,0),lVar5,_Var8);
  uVar6 = (uint)lVar5;
  lVar5 = CONCAT71(extraout_var,bVar2);
  if ((bVar2) && (FUN_100bd6824(), lVar4 = lVar5, ((uint)uVar7 & 1) != (uVar6 & 1))) {
    Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100bd5914);
    (*pcVar1)();
  }
  if ((uVar7 & 1) == 0) {
    FUN_100bd5678(lVar4,param_4,param_5,param_1,param_2,(ulong)param_3 & 0xffffffff,
                  in_stack_00000008);
    _swift_bridgeObjectRetain(param_5);
  }
  else {
    plVar9 = (long *)(*(long *)(in_stack_00000008 + 0x38) + lVar4 * 0x18);
    FUN_100b69560(*plVar9,plVar9[1],(char)plVar9[2]);
    *plVar9 = param_1;
    plVar9[1] = param_2;
    *(char *)(plVar9 + 2) = (char)param_3;
  }
  *unaff_x20 = in_stack_00000008;
  FUN_100bd66b0();
  return;
}



/* Address: 0x100bd5914 | FUN_100bd5914 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100bd5914(undefined *param_1,ulong param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined *puVar3;
  long extraout_x8;
  long extraout_x9;
  long *unaff_x19;
  undefined8 unaff_x21;
  long in_stack_00000008;
  
  FUN_100bd678c();
  FUN_100bd66fc();
  FUN_100bd6774();
  FUN_100bd66e0();
  FUN_100bd66ec();
  uVar2 = extraout_x8 + extraout_x9 == 0;
  if (SCARRY8(extraout_x8,extraout_x9)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100bd59b0);
    (*pcVar1)();
  }
  puVar3 = &DAT_1010456f8;
  FUN_100b6730c();
  FUN_100bd66cc();
  if (((ulong)puVar3 & 1) != 0) {
    FUN_100bd66e0();
    FUN_100bd67c8();
    param_1 = puVar3;
    if (!(bool)uVar2) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100bd59c0);
      (*pcVar1)();
    }
  }
  if ((param_2 & 1) == 0) {
    FUN_100bd6760(param_1);
    FUN_10016fc7c();
    FUN_100b940f8();
  }
  else {
    *(undefined8 *)(*(long *)(in_stack_00000008 + 0x38) + (long)param_1 * 8) = unaff_x21;
  }
  *unaff_x19 = in_stack_00000008;
  FUN_100bd66b0();
  return;
}



/* Address: 0x100bd59c0 | FUN_100bd59c0 */

void FUN_100bd59c0(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x9;
  long *unaff_x20;
  long lVar6;
  undefined8 local_58;
  
  uVar5 = param_2;
  FUN_100bd6714();
  FUN_100bd6774();
  uVar3 = param_2;
  FUN_100b6cc14(param_2);
  FUN_100bd66ec();
  uVar2 = extraout_x8 + extraout_x9 == 0;
  if (SCARRY8(extraout_x8,extraout_x9)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100bd5a84);
    (*pcVar1)();
  }
  uVar4 = 0;
  FUN_100b6730c();
  FUN_100bd6780();
  FUN_100bd67e8();
  if ((uVar4 & 1) != 0) {
    FUN_100b6cc14(param_2);
    FUN_100bd6728();
    uVar3 = param_2;
    if (!(bool)uVar2) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100bd5a94);
      (*pcVar1)();
    }
  }
  if ((uVar5 & 1) == 0) {
    FUN_100bd67d8();
    FUN_100bd56cc();
  }
  else {
    lVar6 = *(long *)(local_58 + 0x38);
    FUN_100b7982c();
    FUN_100bd6844();
    (**(code **)(extraout_x8_00 + 0x28))(lVar6 + *(long *)(extraout_x8_00 + 0x48) * uVar3);
  }
  *unaff_x20 = local_58;
  FUN_100bd6738();
  return;
}



/* Address: 0x100bd5a94 | FUN_100bd5a94 */

void FUN_100bd5a94(long param_1,ulong param_2,undefined *param_3,undefined8 param_4)

{
  long *plVar1;
  code *pcVar2;
  undefined1 uVar3;
  bool bVar4;
  long lVar5;
  undefined7 extraout_var;
  ulong uVar7;
  _NativeDictionary _Var8;
  long extraout_x8;
  long extraout_x9;
  long *unaff_x20;
  long in_stack_00000008;
  long lVar6;
  
  FUN_100bd678c();
  lVar6 = param_1;
  uVar7 = param_2;
  _Var8.unknown = param_3;
  FUN_100bd6720();
  lVar5 = lVar6;
  FUN_100bd6774();
  FUN_100bd6818();
  FUN_100bd66ec();
  uVar3 = extraout_x8 + extraout_x9 == 0;
  if (SCARRY8(extraout_x8,extraout_x9)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100bd5b64);
    (*pcVar2)();
  }
  FUN_100b6730c(&DAT_101045be0);
  FUN_100bd6780();
  bVar4 = Swift::_NativeDictionary::ensureUnique(SUB81(lVar6,0),extraout_x8 + extraout_x9,_Var8);
  lVar6 = CONCAT71(extraout_var,bVar4);
  if (bVar4) {
    FUN_100bd6818();
    FUN_100bd67c8();
    lVar5 = lVar6;
    if (!(bool)uVar3) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100bd5b74);
      (*pcVar2)();
    }
  }
  if ((uVar7 & 1) == 0) {
    FUN_100bd562c(lVar5,param_3,param_4,param_1,param_2,in_stack_00000008);
    FUN_100b940f8();
  }
  else {
    plVar1 = (long *)(*(long *)(in_stack_00000008 + 0x38) + lVar5 * 0x10);
    _swift_bridgeObjectRelease(plVar1[1]);
    *plVar1 = param_1;
    plVar1[1] = param_2;
  }
  *unaff_x20 = in_stack_00000008;
  FUN_100bd66b0();
  return;
}



/* Address: 0x100bd5b74 | FUN_100bd5b74 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100bd5b74(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long extraout_x8;
  long extraout_x9;
  long *unaff_x20;
  undefined8 unaff_x21;
  undefined8 local_58;
  
  uVar5 = param_2;
  FUN_100bd6714();
  FUN_100bd6774();
  uVar3 = param_2;
  FUN_100b6cc60();
  FUN_100bd66ec();
  uVar2 = extraout_x8 + extraout_x9 == 0;
  if (SCARRY8(extraout_x8,extraout_x9)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100bd5c28);
    (*pcVar1)();
  }
  uVar4 = 0;
  FUN_100b6730c();
  FUN_100bd6780();
  FUN_100bd67e8();
  if ((uVar4 & 1) != 0) {
    FUN_100b6cc60();
    FUN_100bd6728();
    uVar3 = param_2;
    if (!(bool)uVar2) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100bd5c38);
      (*pcVar1)();
    }
  }
  if ((uVar5 & 1) == 0) {
    FUN_100bd67d8();
    FUN_10031c608();
  }
  else {
    *(undefined8 *)(*(long *)(local_58 + 0x38) + uVar3 * 8) = unaff_x21;
  }
  *unaff_x20 = local_58;
  FUN_100bd6738();
  return;
}



/* Address: 0x100bd5c38 | FUN_100bd5c38 */

void FUN_100bd5c38(undefined *param_1,ulong param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long extraout_x8;
  long extraout_x9;
  long *unaff_x20;
  long in_stack_00000008;
  
  FUN_100bd678c();
  puVar3 = param_1;
  uVar5 = param_2;
  FUN_100bd6720();
  FUN_100bd6774();
  FUN_100bd67f4();
  FUN_100bd66ec();
  uVar2 = extraout_x8 + extraout_x9 == 0;
  if (SCARRY8(extraout_x8,extraout_x9)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100bd5cec);
    (*pcVar1)();
  }
  puVar4 = &DAT_101046f78;
  FUN_100b6730c();
  FUN_100bd66cc();
  if (((ulong)puVar4 & 1) != 0) {
    FUN_100bd67f4();
    FUN_100bd6728();
    puVar3 = puVar4;
    if (!(bool)uVar2) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100bd5cfc);
      (*pcVar1)();
    }
  }
  if ((uVar5 & 1) == 0) {
    FUN_10016fc7c(puVar3,param_2,param_3,param_1,in_stack_00000008);
    _swift_bridgeObjectRetain(param_3);
  }
  else {
    *(undefined **)(*(long *)(in_stack_00000008 + 0x38) + (long)puVar3 * 8) = param_1;
  }
  *unaff_x20 = in_stack_00000008;
  FUN_100bd66b0();
  return;
}



/* Address: 0x100bd5cfc | FUN_100bd5cfc */

void FUN_100bd5cfc(undefined *param_1,ulong param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined *puVar3;
  long extraout_x8;
  long extraout_x9;
  long *unaff_x19;
  undefined8 unaff_x21;
  long lVar4;
  long in_stack_00000008;
  
  FUN_100bd678c();
  FUN_100bd66fc();
  FUN_100bd6774();
  FUN_100bd66e0();
  FUN_100bd66ec();
  uVar2 = extraout_x8 + extraout_x9 == 0;
  if (SCARRY8(extraout_x8,extraout_x9)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100bd5d98);
    (*pcVar1)();
  }
  puVar3 = &DAT_101047e60;
  FUN_100b6730c();
  FUN_100bd66cc();
  if (((ulong)puVar3 & 1) != 0) {
    FUN_100bd66e0();
    FUN_100bd67c8();
    param_1 = puVar3;
    if (!(bool)uVar2) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100bd5da8);
      (*pcVar1)();
    }
  }
  if ((param_2 & 1) == 0) {
    FUN_100bd6760(param_1);
    FUN_10016fc7c();
    FUN_100b940f8();
  }
  else {
    lVar4 = *(long *)(in_stack_00000008 + 0x38);
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + (long)param_1 * 8));
    *(undefined8 *)(lVar4 + (long)param_1 * 8) = unaff_x21;
  }
  *unaff_x19 = in_stack_00000008;
  FUN_100bd66b0();
  return;
}



/* Address: 0x100bd5da8 | FUN_100bd5da8 */

undefined8 FUN_100bd5da8(_NativeDictionary param_1,ulong param_2)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 auStack_40 [8];
  undefined8 local_38;
  
  uVar1 = *unaff_x20;
  _swift_bridgeObjectRetain(uVar1);
  FUN_100071370();
  _swift_bridgeObjectRelease(uVar1);
  if ((param_2 & 1) == 0) {
    local_50 = 0;
  }
  else {
    _swift_isUniquelyReferenced_nonNull_native(*unaff_x20);
    local_48 = *unaff_x20;
    FUN_100b6730c(&DAT_1010456f8);
    Swift::_NativeDictionary::uncheckedRemove((Bucket)auStack_40,SUB81(&local_50,0),param_1);
    _swift_bridgeObjectRelease(local_38);
    *unaff_x20 = local_48;
  }
  return local_50;
}



/* Address: 0x100bd5e68 | FUN_100bd5e68 */

void FUN_100bd5e68(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101047dd8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9e49c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9e49c,&DAT_100f3be98);
  DAT_101047dd8 = pTVar1;
  return;
}



/* Address: 0x100bd5ea8 | FUN_100bd5ea8 */

void FUN_100bd5ea8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101047de8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9cb20;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9cb20,&DAT_100f3a9b8);
  DAT_101047de8 = pTVar1;
  return;
}



/* Address: 0x100bd5ee8 | FUN_100bd5ee8 */

void FUN_100bd5ee8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_101047df8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_101047df0;
  FUN_100b6734c(&DAT_101047df0);
  puVar2 = &DAT_101047e00;
  FUN_100003a00(&DAT_101047e00,FUN_100b69598,&DAT_100c98e50);
  local_30 = PTR___protocol_witness_table_for_Swift_String___Swift_Encodable_in_Swift_100eac210;
  puVar3 = PTR__Swift__Swift__Dictionary<undefined,undefined>_>Swift__Encodable_100eabe68;
  puStack_28 = puVar2;
  _swift_getWitnessTable
            (PTR__Swift__Swift__Dictionary<undefined,undefined>_>Swift__Encodable_100eabe68,puVar1,
             &local_30);
  DAT_101047df8 = puVar3;
  return;
}



/* Address: 0x100bd5f70 | FUN_100bd5f70 */

void FUN_100bd5f70(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_101047e08;
  FUN_100003a00(&DAT_101047e08,FUN_100bd5fac,&DAT_100c9e320);
  *(undefined **)(param_1 + 8) = puVar1;
  return;
}



/* Address: 0x100bd5fac | FUN_100bd5fac */

void FUN_100bd5fac(undefined8 param_1)

{
  if (DAT_101047e38 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100cd0188);
  return;
}



/* Address: 0x100bd5fe4 | FUN_100bd5fe4 */

void FUN_100bd5fe4(void)

{
  FUN_100bd5fac(0);
  return;
}



/* Address: 0x100bd5fec | FUN_100bd5fec */

undefined1  [16] FUN_100bd5fec(Date param_1,ulong param_2)

{
  Date DVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  long local_58;
  undefined *puStack_50;
  byte *local_48;
  undefined *puStack_40;
  byte *local_38;
  undefined *puStack_30;
  byte *local_28;
  
  DVar1 = Foundation::Date::typeMetadataAccessor();
  if (param_2 < 0x40) {
    local_58 = *(long *)(DVar1.unknown + -8) + 0x40;
    puStack_50 = PTR___value_witness_table_for_Builtin_UnknownObject_100eabd30 + 0x40;
    puStack_40 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
    local_48 = &BYTE_100c9e370;
    puStack_30 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40;
    local_38 = &BYTE_100c9e388;
    local_28 = &BYTE_100c9e370;
    uVar2 = 0x100;
    _swift_updateClassMetadata2(param_1.unknown,0x100,7,&local_58,param_1.unknown + 0x50);
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



/* Address: 0x100bd6098 | FUN_100bd6098 */

void FUN_100bd6098(undefined8 param_1,undefined8 param_2)

{
  _swift_lookUpClassMethod(param_1,param_2,&TargetClassDescriptor_100cd0188);
  return;
}



/* Address: 0x100bd60a4 | FUN_100bd60a4 */

void FUN_100bd60a4(char *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 2;
  if (0xfffeff < param_3 + 6) {
    uVar2 = 4;
  }
  if (param_3 + 6 >> 8 < 0xff) {
    uVar2 = 1;
  }
  uVar1 = 0;
  if (0xf9 < param_3) {
    uVar1 = uVar2;
  }
  if (param_2 < 0xfa) {
                    /* WARNING: Could not recover jumptable at 0x000100bd60ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_100bd60f0 + (ulong)(&BYTE_100c9e2fc)[uVar1] * 4))();
    return;
  }
  *param_1 = (char)param_2 + '\x06';
                    /* WARNING: Could not recover jumptable at 0x000100bd6120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_100bd6124 + (ulong)(&BYTE_100c9e2f7)[uVar1] * 4))();
  return;
}



/* Address: 0x100bd6160 | FUN_100bd6160 */

undefined1  [16] FUN_100bd6160(void)

{
  return ZEXT816(0x100f3be98);
}



/* Address: 0x100bd6170 | thunk_FUN_100bd6174 */

void thunk_FUN_100bd6174(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101047e48 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9e474;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9e474,&DAT_100f3be98);
  DAT_101047e48 = pTVar1;
  return;
}



/* Address: 0x100bd6174 | FUN_100bd6174 */

void FUN_100bd6174(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101047e48 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9e474;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9e474,&DAT_100f3be98);
  DAT_101047e48 = pTVar1;
  return;
}



/* Address: 0x100bd61b4 | thunk_FUN_100bd61b8 */

void thunk_FUN_100bd61b8(void)

{
  undefined *puVar1;
  
  if (DAT_101047e50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100c9e3d4;
  _swift_getWitnessTable(&DAT_100c9e3d4,&DAT_100f3be98);
  DAT_101047e50 = puVar1;
  return;
}



/* Address: 0x100bd61b8 | FUN_100bd61b8 */

void FUN_100bd61b8(void)

{
  undefined *puVar1;
  
  if (DAT_101047e50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100c9e3d4;
  _swift_getWitnessTable(&DAT_100c9e3d4,&DAT_100f3be98);
  DAT_101047e50 = puVar1;
  return;
}



/* Address: 0x100bd61f8 | thunk_FUN_100bd61fc */

void thunk_FUN_100bd61fc(void)

{
  undefined *puVar1;
  
  if (DAT_101047e58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100c9e3ac;
  _swift_getWitnessTable(&DAT_100c9e3ac,&DAT_100f3be98);
  DAT_101047e58 = puVar1;
  return;
}



/* Address: 0x100bd61fc | FUN_100bd61fc */

void FUN_100bd61fc(void)

{
  undefined *puVar1;
  
  if (DAT_101047e58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100c9e3ac;
  _swift_getWitnessTable(&DAT_100c9e3ac,&DAT_100f3be98);
  DAT_101047e58 = puVar1;
  return;
}



/* Address: 0x100bd623c | FUN_100bd623c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

__RawDictionaryStorage * FUN_100bd623c(__RawDictionaryStorage *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  __RawDictionaryStorage *p_Var9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 local_a0 [3];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  
  this = (_DictionaryStorage *)&DAT_101046320;
  FUN_100b6730c();
  p_Var4 = param_1;
  Swift::_DictionaryStorage::_copy(this,param_1);
  lVar13 = 0;
  p_Var9 = param_1 + 0x40;
  uVar7 = 1L << ((ulong)(byte)param_1[0x20] & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((long)uVar7 < 0x40) {
    uVar12 = ~(-1L << (uVar7 & 0x3f));
  }
  uVar12 = uVar12 & *(ulong *)p_Var9;
  uVar7 = uVar7 + 0x3f >> 6;
  lVar14 = lVar13;
  if (uVar12 == 0) goto LAB_100bd62e0;
  do {
    uVar11 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
    uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
    uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
    uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
    uVar12 = uVar12 - 1 & uVar12;
    uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | lVar13 << 6;
    while( true ) {
      puVar8 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar11 * 0x10);
      uVar1 = *puVar8;
      uVar2 = puVar8[1];
      uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x38) + uVar11 * 8);
      uVar5 = 0;
      FUN_100b69598();
      local_a0[0] = uVar10;
      local_88 = uVar5;
      _swift_bridgeObjectRetain(uVar2);
      FUN_100bbdcf8(&local_80,local_a0);
      FUN_100004594(local_a0);
      uVar6 = uVar11 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(p_Var4 + uVar6 + 0x40) = *(ulong *)(p_Var4 + uVar6 + 0x40) | 1L << (uVar11 & 0x3f);
      puVar8 = (undefined8 *)(*(long *)(p_Var4 + 0x30) + uVar11 * 0x10);
      *puVar8 = uVar1;
      puVar8[1] = uVar2;
      puVar8 = (undefined8 *)(*(long *)(p_Var4 + 0x38) + uVar11 * 0x18);
      puVar8[1] = uStack_78;
      *puVar8 = local_80;
      *(undefined1 *)(puVar8 + 2) = local_70;
      if (SCARRY8(*(long *)(p_Var4 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100bd6470);
        (*pcVar3)();
      }
      *(long *)(p_Var4 + 0x10) = *(long *)(p_Var4 + 0x10) + 1;
      lVar14 = lVar13;
      if (uVar12 != 0) break;
LAB_100bd62e0:
      lVar13 = lVar14 + 1;
      if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100bd6474);
        (*pcVar3)();
      }
      if ((long)uVar7 <= lVar13) {
        return p_Var4;
      }
      uVar12 = *(ulong *)(p_Var9 + lVar13 * 8);
      if (uVar12 == 0) {
        lVar13 = lVar14 + 2;
        if ((long)uVar7 <= lVar13) {
          return p_Var4;
        }
        uVar12 = *(ulong *)(p_Var9 + lVar13 * 8);
        if (uVar12 == 0) {
          lVar13 = lVar14 + 3;
          if ((long)uVar7 <= lVar13) {
            return p_Var4;
          }
          uVar12 = *(ulong *)(p_Var9 + lVar13 * 8);
          if (uVar12 == 0) {
            lVar13 = lVar14 + 4;
            if ((long)uVar7 <= lVar13) {
              return p_Var4;
            }
            uVar12 = *(ulong *)(p_Var9 + lVar13 * 8);
            if (uVar12 == 0) {
              do {
                lVar13 = lVar14;
                if ((long)uVar7 <= lVar13 + 5) {
                  return p_Var4;
                }
                uVar12 = *(ulong *)(param_1 + lVar13 * 8 + 0x68);
                lVar14 = lVar13 + 1;
              } while (uVar12 == 0);
              lVar13 = lVar13 + 5;
            }
          }
        }
      }
      uVar11 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 - 1 & uVar12;
      uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | lVar13 << 6;
    }
  } while( true );
}



/* Address: 0x100bd6474 | FUN_100bd6474 */

__RawDictionaryStorage * FUN_100bd6474(__RawDictionaryStorage *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  code *pcVar7;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  __RawDictionaryStorage *p_Var13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  
  this = (_DictionaryStorage *)&DAT_101045700;
  FUN_100b6730c();
  p_Var8 = param_1;
  Swift::_DictionaryStorage::_copy(this,param_1);
  lVar12 = 0;
  p_Var13 = param_1 + 0x40;
  uVar11 = 1L << ((ulong)(byte)param_1[0x20] & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if ((long)uVar11 < 0x40) {
    uVar14 = ~(-1L << (uVar11 & 0x3f));
  }
  uVar14 = uVar14 & *(ulong *)p_Var13;
  uVar11 = uVar11 + 0x3f >> 6;
  if (uVar14 == 0) goto LAB_100bd6520;
  do {
    uVar16 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
    uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
    uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
    uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
    uVar14 = uVar14 - 1 & uVar14;
    uVar16 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) | lVar12 << 6;
    while( true ) {
      puVar9 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar16 * 0x10);
      uVar2 = *puVar9;
      uVar4 = puVar9[1];
      puVar9 = (undefined8 *)(*(long *)(param_1 + 0x38) + uVar16 * 0x18);
      uVar3 = *puVar9;
      uVar5 = puVar9[1];
      uVar6 = *(undefined1 *)(puVar9 + 2);
      local_78 = uVar3;
      uStack_70 = uVar5;
      local_68 = uVar6;
      FUN_100b69598(0);
      _objc_allocWithZone();
      _swift_bridgeObjectRetain(uVar4);
      FUN_100ba5a34(uVar3,uVar5,uVar6);
      puVar9 = &local_78;
      FUN_100b686e4();
      uVar10 = uVar16 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(p_Var8 + uVar10 + 0x40) =
           *(ulong *)(p_Var8 + uVar10 + 0x40) | 1L << (uVar16 & 0x3f);
      puVar1 = (undefined8 *)(*(long *)(p_Var8 + 0x30) + uVar16 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar4;
      *(undefined8 **)(*(long *)(p_Var8 + 0x38) + uVar16 * 8) = puVar9;
      if (SCARRY8(*(long *)(p_Var8 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100bd66a8);
        (*pcVar7)();
      }
      *(long *)(p_Var8 + 0x10) = *(long *)(p_Var8 + 0x10) + 1;
      if (uVar14 != 0) break;
LAB_100bd6520:
      lVar15 = lVar12 + 1;
      if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100bd66ac);
        (*pcVar7)();
      }
      if ((long)uVar11 <= lVar15) {
        return p_Var8;
      }
      uVar14 = *(ulong *)(p_Var13 + lVar15 * 8);
      if (uVar14 == 0) {
        lVar15 = lVar12 + 2;
        if ((long)uVar11 <= lVar15) {
          return p_Var8;
        }
        uVar14 = *(ulong *)(p_Var13 + lVar15 * 8);
        if (uVar14 == 0) {
          lVar15 = lVar12 + 3;
          if ((long)uVar11 <= lVar15) {
            return p_Var8;
          }
          uVar14 = *(ulong *)(p_Var13 + lVar15 * 8);
          if (uVar14 == 0) {
            lVar15 = lVar12 + 4;
            if ((long)uVar11 <= lVar15) {
              return p_Var8;
            }
            uVar14 = *(ulong *)(p_Var13 + lVar15 * 8);
            if (uVar14 == 0) {
              do {
                lVar15 = lVar12;
                if ((long)uVar11 <= lVar15 + 5) {
                  return p_Var8;
                }
                uVar14 = *(ulong *)(param_1 + lVar15 * 8 + 0x68);
                lVar12 = lVar15 + 1;
              } while (uVar14 == 0);
              lVar15 = lVar15 + 5;
            }
          }
        }
      }
      uVar16 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
      uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
      uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
      uVar14 = uVar14 - 1 & uVar14;
      uVar16 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) | lVar15 << 6;
      lVar12 = lVar15;
    }
  } while( true );
}



/* Address: 0x100bd66ac | thunk_FUN_100bd5090 */

void thunk_FUN_100bd5090(void)

{
  FUN_100bd5090();
  return;
}



/* Address: 0x100bd66b0 | FUN_100bd66b0 */

void FUN_100bd66b0(void)

{
  return;
}



/* Address: 0x100bd66cc | FUN_100bd66cc */

void FUN_100bd66cc(_NativeDictionary param_1)

{
  bool unaff_w26;
  __int64 unaff_x27;
  
  Swift::_NativeDictionary::ensureUnique(unaff_w26,unaff_x27,param_1);
  return;
}



/* Address: 0x100bd66e0 | FUN_100bd66e0 */

void FUN_100bd66e0(void)

{
  FUN_100071370();
  return;
}



/* Address: 0x100bd66ec | FUN_100bd66ec */

void FUN_100bd66ec(void)

{
  return;
}



/* Address: 0x100bd66fc | FUN_100bd66fc */

void FUN_100bd66fc(void)

{
  undefined8 *unaff_x20;
  
  _swift_isUniquelyReferenced_nonNull_native(*unaff_x20);
  return;
}



/* Address: 0x100bd6714 | FUN_100bd6714 */

void FUN_100bd6714(void)

{
  undefined8 *unaff_x20;
  
  _swift_isUniquelyReferenced_nonNull_native(*unaff_x20);
  return;
}



/* Address: 0x100bd6720 | FUN_100bd6720 */

void FUN_100bd6720(void)

{
  undefined8 *unaff_x20;
  
  _swift_isUniquelyReferenced_nonNull_native(*unaff_x20);
  return;
}



/* Address: 0x100bd6728 | FUN_100bd6728 */

void FUN_100bd6728(void)

{
  return;
}



/* Address: 0x100bd6738 | FUN_100bd6738 */

void FUN_100bd6738(void)

{
  return;
}



/* Address: 0x100bd6750 | FUN_100bd6750 */

void FUN_100bd6750(void)

{
  return;
}



/* Address: 0x100bd6760 | FUN_100bd6760 */

void FUN_100bd6760(void)

{
  return;
}



/* Address: 0x100bd6774 | FUN_100bd6774 */

void FUN_100bd6774(void)

{
  return;
}



/* Address: 0x100bd6780 | FUN_100bd6780 */

void FUN_100bd6780(void)

{
  return;
}



/* Address: 0x100bd678c | FUN_100bd678c */

void FUN_100bd678c(void)

{
  return;
}


