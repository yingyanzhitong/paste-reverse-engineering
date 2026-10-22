/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100ba67dc | FUN_100ba67dc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100ba67dc(undefined8 param_1)

{
  FUN_100ba678c(param_1);
  return 0;
}



/* Address: 0x100ba6804 | FUN_100ba6804 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100ba6804(undefined8 param_1)

{
  _objc_msgSend((ID)&objc::class_t::SentrySDKInternal,"addBreadcrumb:",param_1);
  return;
}



/* Address: 0x100ba6838 | FUN_100ba6838 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100ba6838(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100ba6804(param_3);
  return 0;
}



/* Address: 0x100ba6880 | FUN_100ba6880 */

void FUN_100ba6880(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("Sentry.SentryAutoBreadcrumbTrackingIntegration",0x2e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100ba68ac);
  (*pcVar1)();
}



/* Address: 0x100ba68ac | FUN_100ba68ac */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100ba68ac(void)

{
  FUN_100ba6880();
  return 0;
}



/* Address: 0x100ba68b8 | FUN_100ba68b8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100ba68b8(void)

{
  return 0;
}



/* Address: 0x100ba68c8 | FUN_100ba68c8 */

void FUN_100ba68c8(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100ba68d4 | FUN_100ba68d4 */

undefined1 * FUN_100ba68d4(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_58 [40];
  
  FUN_100076688(param_1,auStack_58);
  puVar1 = auStack_58;
  FUN_100ba6930(puVar1);
  FUN_100004594(param_1);
  return puVar1;
}



/* Address: 0x100ba6930 | FUN_100ba6930 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100ba6cac) */

ID FUN_100ba6930(long param_1)

{
  long lVar1;
  undefined *puVar2;
  NSString *pNVar3;
  undefined8 uVar4;
  undefined *puVar5;
  code *pcVar6;
  NSDictionary *pNVar7;
  ID unaff_x20;
  long unaff_x21;
  long lVar8;
  undefined8 auStack_80 [2];
  undefined1 auStack_70 [8];
  undefined8 local_68;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar2 = &DAT_101046570;
  FUN_100b6730c();
  lVar8 = *(long *)(puVar2 + -8);
  lVar1 = -(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100ba7168();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    _objc_allocWithZone();
    unaff_x20 = _objc_msgSend(unaff_x20,"init");
    local_51 = 0;
    puVar5 = puVar2;
    Swift::KeyedDecodingContainer::_decodeIfPresent(&local_51);
    if (puVar5 == (undefined *)0x0) {
      pNVar3 = (NSString *)0x0;
    }
    else {
      pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(puVar5);
    }
    _objc_msgSend(unaff_x20,"setUserId:",pNVar3);
    local_52 = 1;
    puVar5 = puVar2;
    Swift::KeyedDecodingContainer::_decodeIfPresent(&local_52);
    if (puVar5 == (undefined *)0x0) {
      pNVar3 = (NSString *)0x0;
    }
    else {
      pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(puVar5);
    }
    _objc_msgSend(unaff_x20,"setEmail:",pNVar3);
    local_53 = 2;
    puVar5 = puVar2;
    Swift::KeyedDecodingContainer::_decodeIfPresent(&local_53);
    if (puVar5 == (undefined *)0x0) {
      pNVar3 = (NSString *)0x0;
    }
    else {
      pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(puVar5);
    }
    _objc_msgSend(unaff_x20,"setUsername:",pNVar3);
    local_54 = 3;
    puVar5 = puVar2;
    Swift::KeyedDecodingContainer::_decodeIfPresent(&local_54);
    if (puVar5 == (undefined *)0x0) {
      pNVar3 = (NSString *)0x0;
    }
    else {
      pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(puVar5);
    }
    _objc_msgSend(unaff_x20,"setIpAddress:",pNVar3);
    local_55 = 5;
    puVar5 = puVar2;
    Swift::KeyedDecodingContainer::_decodeIfPresent(&local_55);
    if (puVar5 == (undefined *)0x0) {
      pNVar3 = (NSString *)0x0;
    }
    else {
      pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(puVar5);
    }
    _objc_msgSend(unaff_x20,"setName:",pNVar3);
    uVar4 = 0;
    FUN_100bb2d30(0);
    local_56 = 6;
    puVar5 = &DAT_101046580;
    FUN_100003a00(&DAT_101046580,FUN_100bb2d30,&TargetProtocolConformanceDescriptor_100c9c314);
    Swift::KeyedDecodingContainer::_decodeIfPresent(&local_68,uVar4,&local_56,puVar2,uVar4,puVar5);
    _objc_msgSend(unaff_x20,"setGeo:",local_68);
    *(undefined1 **)((long)auStack_80 + lVar1) = auStack_70 + lVar1;
    pcVar6 = FUN_100ba71a8;
    FUN_100bd03e0();
    if (pcVar6 == (code *)0x0) {
      pNVar7 = (NSDictionary *)0x0;
    }
    else {
      pNVar7 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(pcVar6);
    }
    _objc_msgSend(unaff_x20,"setData:",pNVar7);
    (**(code **)(lVar8 + 8))(auStack_70 + lVar1,puVar2);
    FUN_100004594(param_1);
  }
  else {
    FUN_100004594(param_1);
  }
  return unaff_x20;
}



/* Address: 0x100ba6dcc | FUN_100ba6dcc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100ba6dcc(undefined8 param_1,undefined8 param_2)

{
  NSString *pNVar1;
  ID IVar2;
  
  FUN_100b69e00();
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  IVar2 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"initWithUserId:",pNVar1);
  return IVar2;
}



/* Address: 0x100ba6e44 | _TtC6Sentry13UserDecodable::initWithUserId: */

/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry13UserDecodable::initWithUserId_(ID param_1,SEL param_2,ID param_3)

{
  char *pcVar1;
  String SVar2;
  
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pcVar1 = SVar2.str;
  FUN_100ba6dcc(pcVar1,SVar2.bridgeObject);
  return (ID)pcVar1;
}



/* Address: 0x100ba6e6c | _TtC6Sentry13UserDecodable::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry13UserDecodable::init(ID param_1,SEL param_2)

{
  FUN_100b813a8();
  return param_1;
}



/* Address: 0x100ba6e8c | FUN_100ba6e8c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100ba6e8c(void)

{
  return ZEXT816(0x100fa2070);
}



/* Address: 0x100ba6eac | FUN_100ba6eac */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100ba6ee0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_100ba6eac(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_100b6730c(&DAT_101045018);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (7 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}



/* Address: 0x100ba6f08 | thunk_FUN_100ba6eac */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100ba6ee0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong thunk_FUN_100ba6eac(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_100b6730c(&DAT_101045018);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (7 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}



/* Address: 0x100ba6f0c | FUN_100ba6f0c */

/* WARNING: Removing unreachable block (ram,0x000100ba72d8) */
/* WARNING: Removing unreachable block (ram,0x000100ba71cc) */
/* WARNING: Removing unreachable block (ram,0x000100ba71e0) */
/* WARNING: Removing unreachable block (ram,0x000100ba71ec) */
/* WARNING: Removing unreachable block (ram,0x000100ba7214) */
/* WARNING: Removing unreachable block (ram,0x000100ba71f8) */
/* WARNING: Removing unreachable block (ram,0x000100ba7200) */
/* WARNING: Removing unreachable block (ram,0x000100ba722c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

String FUN_100ba6f0c(ulong param_1,undefined8 param_2,char *param_3,char *param_4,char *param_5)

{
  uint uVar1;
  char *pcVar2;
  bool in_CY;
  char *pcVar3;
  TargetProtocolConformanceDescriptor *pTVar4;
  undefined1 *puVar5;
  void *pvVar6;
  undefined *puVar7;
  int iVar8;
  ulong *puVar9;
  uint uVar10;
  code *UNRECOVERED_JUMPTABLE;
  code *UNRECOVERED_JUMPTABLE_00;
  ulong *unaff_x19;
  byte *unaff_x20;
  ulong *unaff_x21;
  char *unaff_x22;
  char *unaff_x23;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
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
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  undefined1 auStack_40 [7];
  undefined1 auStack_39 [25];
  
  puVar5 = &SUB_e200000000000000;
  pcVar3 = &SUB_00006469;
  puVar9 = (ulong *)(param_1 & 0xff);
  UNRECOVERED_JUMPTABLE_00 = (code *)(ulong)*(byte *)((long)puVar9 + 0x100c9bae4);
  UNRECOVERED_JUMPTABLE = (code *)((long)UNRECOVERED_JUMPTABLE_00 * 4 + 0x100ba6f34);
  uVar10 = 0xc9bae4;
  pcVar2 = pcVar3;
  switch(puVar9) {
  default:
    puVar5 = &DAT_e500000000000000;
  case (ulong *)0x34:
  case (ulong *)0x42:
  case (ulong *)0x68:
  case (ulong *)0x76:
  case (ulong *)0x90:
  case (ulong *)0x9e:
  case (ulong *)0xd6:
    pcVar3 = (char *)0x69616d65;
  case (ulong *)0x2a:
  case (ulong *)0x32:
  case (ulong *)0x5e:
  case (ulong *)0x66:
  case (ulong *)0x86:
  case (ulong *)0x8e:
  case (ulong *)0xae:
  case (ulong *)0xb6:
  case (ulong *)0xb8:
  case (ulong *)0xe6:
  case (ulong *)0xee:
    pcVar3 = (char *)((ulong)pcVar3 | 0x6c00000000);
    goto switchD_100ba6f30_caseD_84;
  case (ulong *)0x2:
    puVar5 = &DAT_e800000000000000;
  case (ulong *)0xa:
    pcVar3 = (char *)0x72657375;
  case (ulong *)0xb:
    pcVar3 = (char *)((ulong)pcVar3 | 0x616e00000000);
  case (ulong *)0xf:
    pcVar3 = (char *)((ulong)pcVar3 | 0x656d000000000000);
    goto switchD_100ba6f30_caseD_d;
  case (ulong *)0x3:
    puVar5 = (undefined1 *)0xea00000000007373;
    pcVar3 = (char *)0x7069;
  case (ulong *)0x11:
    pcVar3 = (char *)((ulong)pcVar3 | 0x615f0000);
    goto switchD_100ba6f30_caseD_58;
  case (ulong *)0x4:
    puVar5 = &DAT_e700000000000000;
    pcVar3 = (char *)0x6573;
  case (ulong *)0xc2:
  case (ulong *)0xfa:
    pcVar3 = (char *)((ulong)pcVar3 | 0x6e656d670000);
  case (ulong *)0x8:
  case (ulong *)0x6c:
    pcVar3 = (char *)((ulong)pcVar3 | 0x74000000000000);
    goto switchD_100ba6f30_caseD_c;
  case (ulong *)0x5:
    SVar16.bridgeObject = &DAT_e400000000000000;
    SVar16.str = (char *)0x656d616e;
    return SVar16;
  case (ulong *)0x6:
  case (ulong *)0x3c:
    SVar17.bridgeObject = (void *)0xe300000000000000;
    SVar17.str = (char *)0x6f6567;
    return SVar17;
  case (ulong *)0x7:
    puVar5 = &DAT_e400000000000000;
    pcVar3 = (char *)0x61746164;
  case (ulong *)0x0:
  case (ulong *)0x10:
    SVar15.bridgeObject = puVar5;
    SVar15.str = pcVar3;
    return SVar15;
  case (ulong *)0xc:
    goto switchD_100ba6f30_caseD_c;
  case (ulong *)0xd:
    goto switchD_100ba6f30_caseD_d;
  case (ulong *)0x15:
    SVar24 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
    return SVar24;
  case (ulong *)0x16:
  case (ulong *)0x55:
    goto switchD_100ba6f30_caseD_16;
  case (ulong *)0x17:
  case (ulong *)0x1a:
  case (ulong *)0x21:
  case (ulong *)0x53:
    goto switchD_100ba6f30_caseD_17;
  case (ulong *)0x18:
    goto switchD_100ba6f30_caseD_18;
  case (ulong *)0x19:
  case (ulong *)0x4a:
  case (ulong *)0x7e:
  case (ulong *)0xa6:
  case (ulong *)0xde:
    thunk_FUN_100ba6eac();
    *(char *)puVar9 = (char)pcVar3;
  case (ulong *)0x52:
    SVar23.bridgeObject = puVar5;
    SVar23.str = pcVar3;
    return SVar23;
  case (ulong *)0x1b:
    goto switchD_100ba6f30_caseD_1b;
  case (ulong *)0x1c:
  case (ulong *)0x4d:
    goto switchD_100ba6f30_caseD_1c;
  case (ulong *)0x1d:
  case (ulong *)0x4e:
    goto switchD_100ba6f30_caseD_1d;
  case (ulong *)0x1e:
    register0x00000008 = (BADSPACEBASE *)auStack_40;
  case (ulong *)0x1f:
    *(char **)((long)register0x00000008 + 0x10) = unaff_x23;
    *(char **)((long)register0x00000008 + 0x18) = unaff_x22;
    goto switchD_100ba6f30_caseD_1b;
  case (ulong *)0x20:
    goto switchD_100ba6f30_caseD_20;
  case (ulong *)0x24:
    unaff_x19 = puVar9;
  case (ulong *)0x70:
  case (ulong *)0xc8:
    pcVar3 = (char *)(ulong)*unaff_x20;
    FUN_100ba6f0c();
    *unaff_x19 = (ulong)pcVar3;
    unaff_x19[1] = (ulong)puVar5;
    SVar21.bridgeObject = puVar5;
    SVar21.str = pcVar3;
    return SVar21;
  case (ulong *)0x25:
  case (ulong *)0x39:
  case (ulong *)0x59:
  case (ulong *)0x6d:
    goto switchD_100ba6f30_caseD_25;
  case (ulong *)0x26:
  case (ulong *)0x3a:
  case (ulong *)0x5a:
  case (ulong *)0x6e:
  case (ulong *)0x82:
  case (ulong *)0x96:
  case (ulong *)0xaa:
  case (ulong *)0xbe:
  case (ulong *)0xc6:
  case (ulong *)0xce:
  case (ulong *)0xe2:
  case (ulong *)0xf6:
  case (ulong *)0xfe:
    pvVar6 = (void *)(ulong)*unaff_x20;
    FUN_100becd28(&SUB_00006469,pvVar6);
    SVar18.bridgeObject = pvVar6;
    SVar18.str = pcVar3;
    return SVar18;
  case (ulong *)0x28:
    goto switchD_100ba6f30_caseD_28;
  case (ulong *)0x29:
  case (ulong *)0x5d:
  case (ulong *)0x7c:
  case (ulong *)0x85:
    goto switchD_100ba6f30_caseD_29;
  case (ulong *)0x38:
  case (ulong *)0xad:
  case (ulong *)0xe5:
    goto switchD_100ba6f30_caseD_29;
  case (ulong *)0x3d:
    iVar8 = -1;
    goto LAB_100ba7240;
  case (ulong *)0x3e:
  case (ulong *)0x72:
  case (ulong *)0x9a:
  case (ulong *)0xca:
  case (ulong *)0xd2:
    SVar32.bridgeObject = &SUB_e200000000000000;
    SVar32.str = &SUB_00006469;
    return SVar32;
  case (ulong *)0x3f:
  case (ulong *)0x73:
  case (ulong *)0x9b:
  case (ulong *)0xcb:
  case (ulong *)0xd3:
    goto switchD_100ba6f30_caseD_3f;
  case (ulong *)0x48:
    goto switchD_100ba6f30_caseD_48;
  case (ulong *)0x49:
    UNRECOVERED_JUMPTABLE = (code *)0xffffff07;
  case (ulong *)0x7d:
  case (ulong *)0x81:
  case (ulong *)0x95:
  case (ulong *)0xa5:
  case (ulong *)0xa9:
  case (ulong *)0xac:
  case (ulong *)0xbd:
  case (ulong *)0xc5:
  case (ulong *)0xcd:
  case (ulong *)0xdd:
  case (ulong *)0xe1:
  case (ulong *)0xf5:
  case (ulong *)0xfd:
    goto switchD_100ba6f30_caseD_25;
  case (ulong *)0x4c:
    FUN_100ba6f0c();
    SVar22.bridgeObject = puVar5;
    SVar22.str = pcVar3;
    return SVar22;
  case (ulong *)0x4f:
    goto switchD_100ba6f30_caseD_4f;
  case (ulong *)0x50:
    goto switchD_100ba6f30_caseD_50;
  case (ulong *)0x51:
    goto switchD_100ba6f30_caseD_51;
  case (ulong *)0x54:
    goto switchD_100ba6f30_caseD_54;
  case (ulong *)0x58:
    goto switchD_100ba6f30_caseD_58;
  case (ulong *)0x5c:
    FUN_100bed57c();
    SVar19.bridgeObject = puVar5;
    SVar19.str = pcVar3;
    return SVar19;
  case (ulong *)0x84:
  case (ulong *)0xf0:
    goto switchD_100ba6f30_caseD_84;
  case (ulong *)0x94:
    DAT_0000646a = 0xe4;
    uRam000000000000646b = 0xba;
    SVar33.bridgeObject = &SUB_e200000000000000;
    SVar33.str = &SUB_00006469;
    return SVar33;
  case (ulong *)0x98:
    DAT_0000646a = 0;
    uRam000000000000646b = 0;
    uRam000000000000646c = 0;
    break;
  case (ulong *)0x99:
  case (ulong *)0xc9:
  case (ulong *)0xd1:
    if ((int)puVar9 != 0) {
      iVar8 = ((uint)SUB_00006469 | (int)puVar9 << 8) - 8;
      goto LAB_100ba7240;
    }
  case (ulong *)0x71:
LAB_100ba7234:
    puVar9 = (ulong *)(ulong)SUB_00006469;
    goto switchD_100ba6f30_caseD_f4;
  case (ulong *)0xa4:
    if (unaff_x21 == (ulong *)0x0) {
      *unaff_x19 = (ulong)&SUB_00006469;
    }
    SVar26.bridgeObject = &SUB_e200000000000000;
    SVar26.str = &SUB_00006469;
    return SVar26;
  case (ulong *)0xa8:
    DAT_0000646a = 0xe4;
    SVar30.bridgeObject = &SUB_e200000000000000;
    SVar30.str = &SUB_00006469;
    return SVar30;
  case (ulong *)0xbc:
  case (ulong *)0xc4:
  case (ulong *)0xcc:
    break;
  case (ulong *)0xc0:
    goto switchD_100ba6f30_caseD_c0;
  case (ulong *)0xc1:
    goto switchD_100ba6f30_caseD_c1;
  case (ulong *)0xd0:
    SVar24 = (extension_Swift)::Swift::CodingKey::get_description();
    return SVar24;
  case (ulong *)0xe0:
    if (!in_CY) {
      uVar10 = 1;
    }
    uVar1 = 0;
    if (0xf8 < (uint)param_3) {
      uVar1 = uVar10;
    }
    puVar9 = (ulong *)(ulong)uVar1;
  case (ulong *)0xdc:
    UNRECOVERED_JUMPTABLE =
         (code *)(&UNK_100ba7294 + (ulong)*(byte *)((long)puVar9 + 0x100c9baf1) * 4);
    goto switchD_100ba6f30_caseD_c1;
  case (ulong *)0xe4:
    goto LAB_100ba7234;
  case (ulong *)0xf4:
  case (ulong *)0xfc:
    goto switchD_100ba6f30_caseD_f4;
  case (ulong *)0xf8:
    goto switchD_100ba6f30_caseD_f8;
  case (ulong *)0xf9:
    if (DAT_101046588 != (TargetProtocolConformanceDescriptor *)0x0) {
      SVar24.bridgeObject = &SUB_e200000000000000;
      SVar24.str = (char *)DAT_101046588;
      return SVar24;
    }
  case (ulong *)0x80:
    goto switchD_100ba6f30_caseD_3f;
  }
  SVar31.bridgeObject = &SUB_e200000000000000;
  SVar31.str = &SUB_00006469;
  return SVar31;
switchD_100ba6f30_caseD_29:
  pcVar3 = (char *)CONCAT35(uRam000000000000646e,
                            CONCAT23(uRam000000000000646c,
                                     CONCAT12(uRam000000000000646b,
                                              CONCAT11(DAT_0000646a,SUB_00006469))));
  puVar5 = _DAT_00006471;
  FUN_100ba6eac(pcVar3,_DAT_00006471);
  unaff_x19 = puVar9;
  goto switchD_100ba6f30_caseD_28;
switchD_100ba6f30_caseD_25:
  SUB_00006469 = (byte)UNRECOVERED_JUMPTABLE;
  UNRECOVERED_JUMPTABLE_00 =
       (code *)((ulong)*(byte *)((long)puVar9 + 0x100c9baec) * 4 + 0x100ba72c8);
  goto switchD_100ba6f30_caseD_48;
switchD_100ba6f30_caseD_1b:
  *(byte **)((long)register0x00000008 + 0x20) = unaff_x20;
  *(ulong **)((long)register0x00000008 + 0x28) = unaff_x19;
switchD_100ba6f30_caseD_1d:
  *(undefined8 *)((long)register0x00000008 + 0x30) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + 0x38) = unaff_x30;
switchD_100ba6f30_caseD_17:
  unaff_x19 = unaff_x21;
switchD_100ba6f30_caseD_51:
  pcVar3 = (char *)&DAT_101045000;
switchD_100ba6f30_caseD_4f:
  unaff_x22 = pcVar3 + 0x580;
  FUN_100b6730c(unaff_x22);
switchD_100ba6f30_caseD_20:
  *(undefined1 *)((long)register0x00000008 + 7) = 7;
switchD_100ba6f30_caseD_50:
  pcVar3 = (char *)&DAT_101046000;
switchD_100ba6f30_caseD_1c:
  pcVar3 = pcVar3 + 0x570;
  FUN_100b6730c(pcVar3);
  unaff_x23 = pcVar3;
switchD_100ba6f30_caseD_18:
  switchD_100b81688::caseD_d8();
switchD_100ba6f30_caseD_16:
  param_3 = unaff_x23;
  param_4 = unaff_x22;
  puVar9 = (ulong *)((long)register0x00000008 + 8);
  puVar5 = (undefined1 *)((long)register0x00000008 + 7);
  pcVar2 = param_4;
  param_5 = pcVar3;
  goto switchD_100ba6f30_caseD_54;
switchD_100ba6f30_caseD_c1:
                    /* WARNING: Could not recover jumptable at 0x000100ba7290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  SVar28.bridgeObject = puVar5;
  SVar28.str = pcVar3;
  return SVar28;
switchD_100ba6f30_caseD_3f:
  pTVar4 = &TargetProtocolConformanceDescriptor_100c9bc04;
  puVar7 = &DAT_100f39830;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9bc04,&DAT_100f39830);
  DAT_101046588 = pTVar4;
  SVar34.bridgeObject = puVar7;
  SVar34.str = (char *)pTVar4;
  return SVar34;
switchD_100ba6f30_caseD_28:
  *(char *)unaff_x19 = (char)pcVar3;
  SVar20.bridgeObject = puVar5;
  SVar20.str = pcVar3;
  return SVar20;
switchD_100ba6f30_caseD_48:
                    /* WARNING: Could not recover jumptable at 0x000100ba72c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  SVar29.bridgeObject = puVar5;
  SVar29.str = pcVar3;
  return SVar29;
switchD_100ba6f30_caseD_c:
  SVar12.bridgeObject = puVar5;
  SVar12.str = pcVar3;
  return SVar12;
switchD_100ba6f30_caseD_58:
  SVar14.str = (char *)((ulong)pcVar3 | 0x6572646400000000);
  SVar14.bridgeObject = puVar5;
  return SVar14;
switchD_100ba6f30_caseD_d:
  SVar13.bridgeObject = puVar5;
  SVar13.str = pcVar3;
  return SVar13;
switchD_100ba6f30_caseD_84:
  SVar11.bridgeObject = puVar5;
  SVar11.str = pcVar3;
  return SVar11;
switchD_100ba6f30_caseD_f4:
  iVar8 = (uint)puVar9 - 8;
  if ((uint)puVar9 < 8) {
    iVar8 = -1;
  }
LAB_100ba7240:
  SVar27.str = (char *)(ulong)(iVar8 + 1);
  SVar27.bridgeObject = &SUB_e200000000000000;
  return SVar27;
switchD_100ba6f30_caseD_54:
  pcVar3 = pcVar2;
  Swift::KeyedDecodingContainer::_decodeIfPresent(puVar9,pcVar3,puVar5,param_3,param_4,param_5);
  unaff_x21 = unaff_x19;
switchD_100ba6f30_caseD_f8:
  if (unaff_x21 == (ulong *)0x0) {
switchD_100ba6f30_caseD_c0:
    pcVar3 = *(char **)((long)register0x00000008 + 8);
  }
  SVar25.bridgeObject = puVar5;
  SVar25.str = pcVar3;
  return SVar25;
}



/* Address: 0x100ba6fc4 | FUN_100ba6fc4 */

void FUN_100ba6fc4(undefined1 *param_1,undefined1 *param_2)

{
  FUN_100bebbd8(*param_1,*param_2);
  return;
}



/* Address: 0x100ba6fd0 | FUN_100ba6fd0 */

void FUN_100ba6fd0(void)

{
  undefined1 *unaff_x20;
  
  FUN_100bec83c(*unaff_x20);
  return;
}



/* Address: 0x100ba6fd8 | switchD_100ba6f30::caseD_26 */

void switchD_100ba6f30::caseD_26(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  FUN_100becd28(param_1,*unaff_x20);
  return;
}



/* Address: 0x100ba6fe0 | FUN_100ba6fe0 */

void FUN_100ba6fe0(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  FUN_100bed57c(param_1,*unaff_x20);
  return;
}



/* Address: 0x100ba6fe8 | switchD_100ba6f30::caseD_38 */

void switchD_100ba6f30::caseD_38(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_100ba6eac(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x100ba7014 | FUN_100ba7014 */

void FUN_100ba7014(ulong *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  byte *unaff_x20;
  
  uVar1 = (ulong)*unaff_x20;
  FUN_100ba6f0c();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



/* Address: 0x100ba703c | FUN_100ba703c */

void FUN_100ba703c(void)

{
  undefined1 *unaff_x20;
  
  FUN_100ba6f0c(*unaff_x20);
  return;
}



/* Address: 0x100ba7044 | switchD_100ba6f30::caseD_19 */

void switchD_100ba6f30::caseD_19(undefined1 *param_1,undefined1 param_2)

{
  thunk_FUN_100ba6eac();
  *param_1 = param_2;
  return;
}



/* Address: 0x100ba7068 | FUN_100ba7068 */

String FUN_100ba7068(void)

{
  String SVar1;
  
  FUN_100ba7168();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100ba7090 | FUN_100ba7090 */

String FUN_100ba7090(void)

{
  String SVar1;
  
  FUN_100ba7168();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100ba70b8 | switchD_100ba6f30::caseD_1e */

void switchD_100ba6f30::caseD_1e(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 local_39;
  undefined1 local_38 [8];
  
  puVar1 = &DAT_101045580;
  FUN_100b6730c(&DAT_101045580);
  local_39 = 7;
  puVar2 = &DAT_101046570;
  FUN_100b6730c(&DAT_101046570);
  puVar3 = puVar2;
  switchD_100b81688::caseD_d8();
  Swift::KeyedDecodingContainer::_decodeIfPresent(local_38,puVar1,&local_39,puVar2,puVar1,puVar3);
  return;
}



/* Address: 0x100ba7140 | FUN_100ba7140 */

void FUN_100ba7140(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_100ba68d4();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x100ba7168 | FUN_100ba7168 */

void FUN_100ba7168(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101046578 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9bc2c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9bc2c,&DAT_100f39830);
  DAT_101046578 = pTVar1;
  return;
}



/* Address: 0x100ba71a8 | FUN_100ba71a8 */

void FUN_100ba71a8(void)

{
  long unaff_x20;
  
  switchD_100ba6f30::caseD_1e(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100ba71c0 | FUN_100ba71c0 */

int FUN_100ba71c0(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = -1;
    goto LAB_100ba7240;
  }
  if (param_2 < 0xf9) {
LAB_100ba7234:
    iVar2 = *param_1 - 8;
    if (*param_1 < 8) {
      iVar2 = -1;
    }
  }
  else {
    iVar2 = 2;
    if (0xfffeff < param_2 + 7) {
      iVar2 = 4;
    }
    if (param_2 + 7 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
joined_r0x000100ba7218:
      if (uVar1 == 0) goto LAB_100ba7234;
    }
    else {
      if (iVar2 != 2) {
        uVar1 = (uint)param_1[1];
        goto joined_r0x000100ba7218;
      }
      uVar1 = (uint)*(ushort *)(param_1 + 1);
      if (*(ushort *)(param_1 + 1) == 0) goto LAB_100ba7234;
    }
    iVar2 = ((uint)*param_1 | uVar1 << 8) - 8;
  }
LAB_100ba7240:
  return iVar2 + 1;
}



/* Address: 0x100ba7248 | FUN_100ba7248 */

void FUN_100ba7248(char *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 2;
  if (0xfffeff < param_3 + 7) {
    uVar2 = 4;
  }
  if (param_3 + 7 >> 8 < 0xff) {
    uVar2 = 1;
  }
  uVar1 = 0;
  if (0xf8 < param_3) {
    uVar1 = uVar2;
  }
  if (param_2 < 0xf9) {
                    /* WARNING: Could not recover jumptable at 0x000100ba7290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_100ba7294 + (ulong)(&BYTE_100c9baf1)[uVar1] * 4))();
    return;
  }
  *param_1 = (char)param_2 + '\a';
                    /* WARNING: Could not recover jumptable at 0x000100ba72c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(&BYTE_100c9baec)[uVar1] * 4 + 0x100ba72c8))();
  return;
}



/* Address: 0x100ba7304 | FUN_100ba7304 */

undefined1  [16] FUN_100ba7304(void)

{
  return ZEXT816(0x100f39830);
}



/* Address: 0x100ba7314 | switchD_100ba6f30::caseD_f9 */

void switchD_100ba6f30::caseD_f9(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101046588 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9bc04;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9bc04,&DAT_100f39830);
  DAT_101046588 = pTVar1;
  return;
}



/* Address: 0x100ba7318 | FUN_100ba7318 */

void FUN_100ba7318(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101046588 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9bc04;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9bc04,&DAT_100f39830);
  DAT_101046588 = pTVar1;
  return;
}



/* Address: 0x100ba7358 | thunk_FUN_100ba735c */

void thunk_FUN_100ba735c(void)

{
  undefined *puVar1;
  
  if (DAT_101046590 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100c9bb64;
  _swift_getWitnessTable(&DAT_100c9bb64,&DAT_100f39830);
  DAT_101046590 = puVar1;
  return;
}



/* Address: 0x100ba735c | FUN_100ba735c */

void FUN_100ba735c(void)

{
  undefined *puVar1;
  
  if (DAT_101046590 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100c9bb64;
  _swift_getWitnessTable(&DAT_100c9bb64,&DAT_100f39830);
  DAT_101046590 = puVar1;
  return;
}



/* Address: 0x100ba739c | thunk_FUN_100ba73a0 */

void thunk_FUN_100ba73a0(void)

{
  undefined *puVar1;
  
  if (DAT_101046598 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100c9bb3c;
  _swift_getWitnessTable(&DAT_100c9bb3c,&DAT_100f39830);
  DAT_101046598 = puVar1;
  return;
}



/* Address: 0x100ba73a0 | FUN_100ba73a0 */

void FUN_100ba73a0(void)

{
  undefined *puVar1;
  
  if (DAT_101046598 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100c9bb3c;
  _swift_getWitnessTable(&DAT_100c9bb3c,&DAT_100f39830);
  DAT_101046598 = puVar1;
  return;
}



/* Address: 0x100ba73e0 | thunk_FUN_100ba6f0c */

void thunk_FUN_100ba6f0c(void)

{
  FUN_100ba6f0c();
  return;
}



/* Address: 0x100ba73e4 | _TtC6Sentry12SentrySysctl::systemBootTimestamp */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry12SentrySysctl::systemBootTimestamp(ID param_1,SEL param_2)

{
  FUN_100ba7408(param_1,param_2,FUN_100ba73f0);
  return param_1;
}



/* Address: 0x100ba73f0 | FUN_100ba73f0 */

void FUN_100ba73f0(void)

{
  FUN_100ba7528(&PTR_s_systemBootTimestamp_100f85ce0);
  return;
}



/* Address: 0x100ba73fc | _TtC6Sentry12SentrySysctl::processStartTimestamp */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry12SentrySysctl::processStartTimestamp(ID param_1,SEL param_2)

{
  FUN_100ba7408(param_1,param_2,FUN_100ba74a0);
  return param_1;
}



/* Address: 0x100ba7408 | FUN_100ba7408 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

NSDate * FUN_100ba7408(undefined8 param_1,undefined8 param_2,code *param_3)

{
  Date DVar1;
  NSDate *pNVar2;
  long lVar3;
  long lVar4;
  
  DVar1 = Foundation::Date::typeMetadataAccessor();
  lVar4 = *(long *)(DVar1.unknown + -8);
  lVar3 = *(long *)(lVar4 + 0x40);
  (*param_3)(&stack0xffffffffffffffc0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),param_1);
  pNVar2 = Foundation::Date::_bridgeToObjectiveC((Date)0x0);
  (**(code **)(lVar4 + 8))
            (&stack0xffffffffffffffc0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),DVar1.unknown);
  return pNVar2;
}



/* Address: 0x100ba74a0 | FUN_100ba74a0 */

void FUN_100ba74a0(void)

{
  FUN_100ba7528(&PTR_s_processStartTimestamp_100f85cc8);
  return;
}



/* Address: 0x100ba74ac | _TtC6Sentry12SentrySysctl::runtimeInitSystemTimestamp */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

unsigned_long_long _TtC6Sentry12SentrySysctl::runtimeInitSystemTimestamp(ID param_1,SEL param_2)

{
  FUN_100ba74e0();
  return param_1;
}



/* Address: 0x100ba74e0 | FUN_100ba74e0 */

void FUN_100ba74e0(void)

{
  long unaff_x20;
  
  _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry12SentrySysctl::objcHelper),
                "runtimeInitSystemTimestamp");
  return;
}



/* Address: 0x100ba74f8 | _TtC6Sentry12SentrySysctl::runtimeInitTimestamp */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry12SentrySysctl::runtimeInitTimestamp(ID param_1,SEL param_2)

{
  FUN_100ba7408(param_1,param_2,FUN_100ba7504);
  return param_1;
}



/* Address: 0x100ba7504 | FUN_100ba7504 */

void FUN_100ba7504(void)

{
  FUN_100ba7528(&PTR_s_runtimeInitTimestamp_100f85cd8);
  return;
}



/* Address: 0x100ba7510 | _TtC6Sentry12SentrySysctl::moduleInitializationTimestamp */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry12SentrySysctl::moduleInitializationTimestamp(ID param_1,SEL param_2)

{
  FUN_100ba7408(param_1,param_2,FUN_100ba751c);
  return param_1;
}



/* Address: 0x100ba751c | FUN_100ba751c */

void FUN_100ba751c(void)

{
  FUN_100ba7528(&PTR_s_moduleInitializationTimestamp_100f85cc0);
  return;
}



/* Address: 0x100ba7528 | FUN_100ba7528 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100ba7528(undefined8 *param_1)

{
  Date DVar1;
  long unaff_x20;
  
  DVar1.unknown =
       (undefined *)
       _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry12SentrySysctl::objcHelper),(SEL)*param_1);
  Foundation::Date::__unconditionallyBridgeFromObjectiveC(DVar1);
  return 0;
}



/* Address: 0x100ba7574 | FUN_100ba7574 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100ba7574(void)

{
  long lVar1;
  class_t *self;
  ID IVar2;
  long unaff_x20;
  
  lVar1 = _TtC6Sentry12SentrySysctl::objcHelper;
  self = &objc::class_t::SentrySysctlObjC;
  _objc_allocWithZone();
  IVar2 = _objc_msgSend((ID)self,"init");
  *(ID *)(unaff_x20 + lVar1) = IVar2;
  FUN_100ba75f8();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffb0,"init");
  return;
}



/* Address: 0x100ba75f8 | FUN_100ba75f8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100ba75f8(void)

{
  return ZEXT816(0x100fa2120);
}



/* Address: 0x100ba7618 | _TtC6Sentry12SentrySysctl::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry12SentrySysctl::init(ID param_1,SEL param_2)

{
  FUN_100ba7574();
  return param_1;
}



/* Address: 0x100ba7638 | FUN_100ba7638 */

void FUN_100ba7638(void)

{
  FUN_100ba75f8();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x100ba7668 | _TtC6Sentry12SentrySysctl::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry12SentrySysctl::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}



/* Address: 0x100ba7678 | FUN_100ba7678 */

void FUN_100ba7678(undefined8 param_1,undefined8 param_2)

{
  _swift_lookUpClassMethod(param_1,param_2,&TargetClassDescriptor_100cceb88);
  return;
}



/* Address: 0x100ba7684 | FUN_100ba7684 */

void FUN_100ba7684(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100ba769c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x58))();
  return;
}



/* Address: 0x100ba76a0 | FUN_100ba76a0 */

void FUN_100ba76a0(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100ba76b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x60))();
  return;
}



/* Address: 0x100ba76bc | FUN_100ba76bc */

void FUN_100ba76bc(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100ba76d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x68))();
  return;
}



/* Address: 0x100ba76d8 | FUN_100ba76d8 */

void FUN_100ba76d8(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100ba76f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x70))();
  return;
}



/* Address: 0x100ba76f4 | FUN_100ba76f4 */

void FUN_100ba76f4(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100ba770c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x78))();
  return;
}



/* Address: 0x100ba7710 | FUN_100ba7710 */

void FUN_100ba7710(void)

{
  FUN_100ba7c04();
  FUN_100ba7c14();
  FUN_100ba7a24();
  FUN_100b56e60();
  return;
}


