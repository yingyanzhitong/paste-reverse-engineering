/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100bb5b64 | FUN_100bb5b64 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100bb5b64(ID param_1)

{
  ID IVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  code *unaff_x25;
  ID local_80;
  undefined1 local_78 [32];
  
  FUN_100bb5ef4();
  IVar1 = _objc_msgSend(param_1,"lock");
  FUN_10021b704();
  pcVar2 = (code *)local_78;
  plVar3 = (long *)&stack0xffffffffffffffa8;
  _swift_readAtKeyPath();
  lVar4 = *plVar3;
  FUN_10021b704();
  (*pcVar2)(local_78,0);
  FUN_100b7ca38();
  if (lVar4 == 0) {
    (*unaff_x25)(local_78);
    local_80 = IVar1;
    FUN_10021b704();
    _swift_setAtReferenceWritableKeyPath(&local_80);
    FUN_100b6fbcc();
  }
  FUN_100bb5eb4();
  FUN_100bad87c();
  FUN_100b7ca38();
  FUN_100bb5f28();
  return;
}



/* Address: 0x100bb5c3c | FUN_100bb5c3c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined1 * FUN_100bb5c3c(ID param_1,code *param_2,undefined8 param_3,code *param_4)

{
  undefined1 *puVar1;
  char *pcVar2;
  undefined1 *puVar3;
  undefined1 auStack_80 [32];
  
  pcVar2 = "lock";
  _objc_msgSend(param_1,"lock");
  FUN_100bb5ed0();
  puVar3 = *(undefined1 **)pcVar2;
  puVar1 = auStack_80;
  (*param_2)(puVar1,0);
  FUN_100b7ca38();
  if (puVar3 == (undefined1 *)0x0) {
    (*param_4)(auStack_80);
    FUN_100bb5ebc();
    FUN_10021b704();
    FUN_100bb5ee4();
    FUN_100b6fbcc();
    puVar3 = puVar1;
  }
  FUN_100bb5eb4();
  FUN_100bad87c();
  FUN_100b7ca38();
  return puVar3;
}



/* Address: 0x100bb5d14 | FUN_100bb5d14 */

void FUN_100bb5d14(ID param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x21;
  undefined1 local_38 [8];
  
  _objc_msgSend(param_1,"lock");
  FUN_100bafb08(local_38,param_2,param_3);
  FUN_100bb5f1c();
  if (unaff_x21 == 0) {
    FUN_100bb5ea8();
    FUN_100b6f868();
  }
  else {
    FUN_100bb5ea8();
    FUN_100b6f868();
  }
  return;
}



/* Address: 0x100bb5d90 | FUN_100bb5d90 */

uint FUN_100bb5d90(ID param_1,ulong param_2,undefined8 param_3)

{
  long unaff_x21;
  byte local_31;
  
  _objc_msgSend(param_1,"lock");
  FUN_100baf40c(&local_31,param_2,param_3);
  FUN_100bb5f1c();
  if (unaff_x21 == 0) {
    FUN_100bb5eb4();
    FUN_100b6fce4();
    param_2 = (ulong)local_31;
    FUN_100b6f868();
  }
  else {
    FUN_100bb5eb4();
    FUN_100b6f868();
    FUN_100b6fce4();
  }
  return (uint)param_2 & 1;
}



/* Address: 0x100bb5e20 | FUN_100bb5e20 */

void FUN_100bb5e20(ID param_1)

{
  long unaff_x21;
  undefined1 local_28 [8];
  
  _objc_msgSend(param_1,"lock");
  FUN_100bb5f28(local_28);
  FUN_100bde078();
  FUN_100bb5f1c();
  if (unaff_x21 == 0) {
    FUN_100bb5ea8();
    FUN_100b6f868();
  }
  else {
    FUN_100bb5ea8();
    FUN_100b6f868();
  }
  FUN_100bb5f10();
  return;
}



/* Address: 0x100bb5e80 | FUN_100bb5e80 */

void FUN_100bb5e80(void)

{
  FUN_100bb5b3c();
  return;
}



/* Address: 0x100bb5e94 | FUN_100bb5e94 */

void FUN_100bb5e94(void)

{
  FUN_100bb5b50();
  return;
}



/* Address: 0x100bb5ea8 | FUN_100bb5ea8 */

void FUN_100bb5ea8(long param_1)

{
  ID unaff_x22;
  
  _objc_msgSend(unaff_x22,*(SEL *)(param_1 + 0xf90));
  return;
}



/* Address: 0x100bb5eb4 | FUN_100bb5eb4 */

void FUN_100bb5eb4(undefined8 param_1,SEL param_2)

{
  ID unaff_x23;
  
  _objc_msgSend(unaff_x23,param_2);
  return;
}



/* Address: 0x100bb5ebc | FUN_100bb5ebc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100bb5ebc(void)

{
  return;
}



/* Address: 0x100bb5ed0 | FUN_100bb5ed0 */

void FUN_100bb5ed0(void)

{
  _swift_readAtKeyPath(&stack0x00000010,&stack0x00000038);
  return;
}



/* Address: 0x100bb5ee4 | FUN_100bb5ee4 */

void FUN_100bb5ee4(void)

{
  _swift_setAtReferenceWritableKeyPath(&stack0x00000008);
  return;
}



/* Address: 0x100bb5ef4 | FUN_100bb5ef4 */

void FUN_100bb5ef4(void)

{
  return;
}



/* Address: 0x100bb5f10 | FUN_100bb5f10 */

void FUN_100bb5f10(void)

{
  return;
}



/* Address: 0x100bb5f1c | FUN_100bb5f1c */

void FUN_100bb5f1c(void)

{
  return;
}



/* Address: 0x100bb5f28 | FUN_100bb5f28 */

void FUN_100bb5f28(void)

{
  return;
}



/* Address: 0x100bb5f34 | FUN_100bb5f34 */

undefined1 * FUN_100bb5f34(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_58 [40];
  
  FUN_100076688(param_1,auStack_58);
  puVar1 = auStack_58;
  FUN_100bb5f90(puVar1);
  FUN_100004594(param_1);
  return puVar1;
}



/* Address: 0x100bb5f90 | FUN_100bb5f90 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100bb631c) */
/* WARNING: Removing unreachable block (ram,0x000100bb6258) */
/* WARNING: Removing unreachable block (ram,0x000100bb6270) */

ID FUN_100bb5f90(long param_1)

{
  long lVar1;
  undefined *puVar2;
  NSString *pNVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  ID unaff_x20;
  long unaff_x21;
  long lVar7;
  undefined1 auStack_70 [8];
  long local_68;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar2 = &DAT_101046e70;
  FUN_100b6730c();
  lVar7 = *(long *)(puVar2 + -8);
  lVar6 = *(long *)(lVar7 + 0x40);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  switchD_100bb6464::caseD_4f();
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
    _objc_msgSend(unaff_x20,"setDebugID:",pNVar3);
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
    _objc_msgSend(unaff_x20,"setType:",pNVar3);
    uVar4 = 0;
    local_53 = 2;
    FUN_100b7e4f0(0);
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_68,&DAT_100f3d290,&local_53,puVar2,&DAT_100f3d290,uVar4);
    lVar1 = 0;
    if (local_68 != 1) {
      lVar1 = local_68;
    }
    _objc_msgSend(unaff_x20,"setImageSize:",lVar1);
    FUN_10001486c(local_68);
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
    _objc_msgSend(unaff_x20,"setImageAddress:",pNVar3);
    local_55 = 4;
    puVar5 = puVar2;
    Swift::KeyedDecodingContainer::_decodeIfPresent(&local_55);
    if (puVar5 == (undefined *)0x0) {
      pNVar3 = (NSString *)0x0;
    }
    else {
      pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(puVar5);
    }
    _objc_msgSend(unaff_x20,"setImageVmAddress:",pNVar3);
    local_56 = 5;
    puVar5 = puVar2;
    Swift::KeyedDecodingContainer::_decodeIfPresent(&local_56);
    if (puVar5 == (undefined *)0x0) {
      pNVar3 = (NSString *)0x0;
    }
    else {
      pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(puVar5);
    }
    _objc_msgSend(unaff_x20,"setCodeFile:",pNVar3);
    (**(code **)(lVar7 + 8))(auStack_70 + -(lVar6 + 0xfU & 0xfffffffffffffff0),puVar2);
    FUN_100004594(param_1);
  }
  else {
    FUN_100004594(param_1);
  }
  return unaff_x20;
}



/* Address: 0x100bb6394 | _TtC6Sentry18DebugMetaDecodable::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry18DebugMetaDecodable::init(ID param_1,SEL param_2)

{
  FUN_1001fddc8();
  return param_1;
}



/* Address: 0x100bb63b4 | FUN_100bb63b4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100bb63b4(void)

{
  return ZEXT816(0x100fa2f68);
}



/* Address: 0x100bb63d4 | FUN_100bb63d4 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100bb6408 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_100bb63d4(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_100b6730c(&DAT_101045018);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (5 < uVar1) {
    uVar1 = 6;
  }
  return uVar1;
}



/* Address: 0x100bb6430 | thunk_FUN_100bb63d4 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100bb6408 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong thunk_FUN_100bb63d4(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_100b6730c(&DAT_101045018);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (5 < uVar1) {
    uVar1 = 6;
  }
  return uVar1;
}



/* Address: 0x100bb6434 | FUN_100bb6434 */

/* WARNING: Removing unreachable block (ram,0x000100bb66a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

String FUN_100bb6434(char *param_1,undefined8 param_2,code *param_3,ulong param_4)

{
  uint uVar1;
  char *pcVar2;
  undefined *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 *unaff_x19;
  byte *unaff_x20;
  long unaff_x21;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  String SVar7;
  String SVar8;
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
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  
code_r0x000100bb6434:
  puVar3 = &DAT_e800000000000000;
  pcVar2 = &DAT_64695f6775626564;
  puVar5 = (undefined8 *)((ulong)param_1 & 0xff);
  switch(puVar5) {
  default:
    puVar3 = &DAT_e400000000000000;
  case (undefined8 *)0x34:
  case (undefined8 *)0x42:
  case (undefined8 *)0x68:
  case (undefined8 *)0x76:
  case (undefined8 *)0x90:
  case (undefined8 *)0x9e:
  case (undefined8 *)0xd6:
  case (undefined8 *)0xe0:
    pcVar2 = &DAT_65707974;
    goto switchD_100bb6464_caseD_2a;
  case (undefined8 *)0x2:
  case (undefined8 *)0x8:
    pcVar2 = (char *)0x6d69;
  case (undefined8 *)0xbc:
  case (undefined8 *)0xc4:
  case (undefined8 *)0xcc:
    pcVar2 = (char *)((ulong)pcVar2 & 0xffffffff0000ffff | 0x67610000);
  case (undefined8 *)0x9:
    pcVar2 = (char *)((ulong)pcVar2 & 0xffff0000ffffffff | 0x5f6500000000);
  case (undefined8 *)0xd:
    pcVar2 = (char *)((ulong)pcVar2 & 0xffffffffffff | 0x6973000000000000);
    goto switchD_100bb6464_caseD_b;
  case (undefined8 *)0x3:
    puVar5 = (undefined8 *)0x657a;
  case (undefined8 *)0xf:
    puVar3 = (undefined *)(((ulong)puVar5 | 0xea00000000000000) + 0xcea);
    pcVar2 = (char *)0x67616d69;
  case (undefined8 *)0xe4:
    pcVar2 = (char *)((ulong)pcVar2 & 0xffff0000ffffffff | 0x5f6500000000);
    goto switchD_100bb6464_caseD_a8;
  case (undefined8 *)0x4:
  case (undefined8 *)0xf0:
    puVar3 = (undefined *)0xec00000072646461;
  case (undefined8 *)0xc2:
  case (undefined8 *)0xfa:
    pcVar2 = (char *)0x67616d69;
  case (undefined8 *)0x6:
    pcVar2 = (char *)((ulong)pcVar2 & 0xffff0000ffffffff | 0x5f6500000000);
    goto switchD_100bb6464_caseD_a;
  case (undefined8 *)0x5:
  case (undefined8 *)0xe:
    puVar3 = (undefined *)0xe900000000000065;
    pcVar2 = (char *)0x6c69665f65646f63;
  case (undefined8 *)0x0:
    SVar11.bridgeObject = puVar3;
    SVar11.str = pcVar2;
    return SVar11;
  case (undefined8 *)0xa:
    goto switchD_100bb6464_caseD_a;
  case (undefined8 *)0xb:
    goto switchD_100bb6464_caseD_b;
  case (undefined8 *)0x11:
  case (undefined8 *)0x16:
  case (undefined8 *)0x1a:
  case (undefined8 *)0x21:
  case (undefined8 *)0x53:
    goto switchD_100bb6464_caseD_11;
  case (undefined8 *)0x13:
    goto switchD_100bb6464_caseD_13;
  case (undefined8 *)0x14:
  case (undefined8 *)0x51:
    goto switchD_100bb6464_caseD_14;
  case (undefined8 *)0x15:
    goto switchD_100bb6464_caseD_15;
  case (undefined8 *)0x17:
    goto switchD_100bb6464_caseD_17;
  case (undefined8 *)0x18:
  case (undefined8 *)0x1e:
  case (undefined8 *)0x38:
  case (undefined8 *)0xc0:
  case (undefined8 *)0x12:
  case (undefined8 *)0x1f:
    unaff_x19 = puVar5;
  case (undefined8 *)0x1b:
    goto switchD_100bb6464_caseD_1b;
  case (undefined8 *)0x1c:
  case (undefined8 *)0x4d:
    goto switchD_100bb6464_caseD_1c;
  case (undefined8 *)0x1d:
  case (undefined8 *)0x4e:
    goto switchD_100bb6464_caseD_1d;
  case (undefined8 *)0x20:
switchD_100bb6464_caseD_20:
    SVar19.bridgeObject = &DAT_e800000000000000;
    SVar19.str = pcVar2;
    return SVar19;
  case (undefined8 *)0x25:
  case (undefined8 *)0x39:
  case (undefined8 *)0x59:
  case (undefined8 *)0x6d:
  case (undefined8 *)0x81:
  case (undefined8 *)0x95:
  case (undefined8 *)0xa9:
  case (undefined8 *)0xbd:
  case (undefined8 *)0xc5:
  case (undefined8 *)0xcd:
  case (undefined8 *)0xdd:
  case (undefined8 *)0xe1:
    break;
  case (undefined8 *)0x26:
  case (undefined8 *)0x3a:
  case (undefined8 *)0x5a:
  case (undefined8 *)0x6e:
  case (undefined8 *)0x82:
  case (undefined8 *)0x96:
  case (undefined8 *)0xaa:
  case (undefined8 *)0xbe:
  case (undefined8 *)0xc6:
  case (undefined8 *)0xce:
  case (undefined8 *)0xe2:
  case (undefined8 *)0xf6:
  case (undefined8 *)0xfe:
    pvVar4 = (void *)(ulong)*unaff_x20;
    FUN_100bed594(&DAT_64695f6775626564,pvVar4);
    SVar13.bridgeObject = pvVar4;
    SVar13.str = pcVar2;
    return SVar13;
  case (undefined8 *)0x28:
  case (undefined8 *)0x5c:
    _DAT_64695f6775626565 = 0;
    SVar24.bridgeObject = &DAT_e800000000000000;
    SVar24.str = &DAT_64695f6775626564;
    return SVar24;
  case (undefined8 *)0x29:
  case (undefined8 *)0x5d:
  case (undefined8 *)0x85:
  case (undefined8 *)0xad:
  case (undefined8 *)0xe5:
    pcVar2 = (char *)CONCAT35(uRam64695f6775626569,
                              CONCAT41(_DAT_64695f6775626565,DAT_64695f6775626564));
    puVar3 = _DAT_64695f677562656c;
    unaff_x19 = puVar5;
  case (undefined8 *)0x80:
    FUN_100bb63d4(pcVar2,puVar3);
    *(char *)unaff_x19 = (char)pcVar2;
switchD_100bb6464_caseD_dc:
    SVar14.bridgeObject = puVar3;
    SVar14.str = pcVar2;
    return SVar14;
  case (undefined8 *)0x2a:
  case (undefined8 *)0x32:
  case (undefined8 *)0x5e:
  case (undefined8 *)0x66:
  case (undefined8 *)0x86:
  case (undefined8 *)0x8e:
  case (undefined8 *)0xae:
  case (undefined8 *)0xb6:
  case (undefined8 *)0xb8:
  case (undefined8 *)0xe6:
  case (undefined8 *)0xee:
    goto switchD_100bb6464_caseD_2a;
  case (undefined8 *)0x3c:
    return (String)ZEXT816(0x100f3a680);
  case (undefined8 *)0x3e:
  case (undefined8 *)0x72:
  case (undefined8 *)0x9a:
  case (undefined8 *)0xca:
  case (undefined8 *)0xd2:
    param_3 = FUN_100bb6814;
    param_4 = 0xd000000000000046;
  case (undefined8 *)0xf4:
  case (undefined8 *)0xfc:
    FUN_100bb686c(&DAT_64695f6775626564,&DAT_e800000000000000,param_3,param_4);
    SVar27.bridgeObject = puVar3;
    SVar27.str = pcVar2;
    return SVar27;
  case (undefined8 *)0x49:
  case (undefined8 *)0x7d:
  case (undefined8 *)0xa5:
  case (undefined8 *)0xf5:
  case (undefined8 *)0xfd:
    SVar25.bridgeObject = &DAT_e800000000000000;
    SVar25.str = &DAT_64695f6775626564;
    return SVar25;
  case (undefined8 *)0x4c:
  case (undefined8 *)0x10:
  case (undefined8 *)0x19:
  case (undefined8 *)0x4a:
  case (undefined8 *)0x7e:
  case (undefined8 *)0xa6:
  case (undefined8 *)0xde:
    thunk_FUN_100bb63d4();
    *(char *)puVar5 = (char)pcVar2;
  case (undefined8 *)0x48:
    goto switchD_100bb6464_caseD_58;
  case (undefined8 *)0x4f:
    pcVar2 = DAT_101046e78;
    if (DAT_101046e78 != (char *)0x0) goto switchD_100bb6464_caseD_20;
  case (undefined8 *)0x24:
  case (undefined8 *)0x50:
    goto switchD_100bb6464_caseD_50;
  case (undefined8 *)0x52:
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
  case (undefined8 *)0x70:
  case (undefined8 *)0xc8:
    *(undefined8 *)((long)register0x00000008 + 0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + 0x18) = unaff_x30;
    goto switchD_100bb6464_caseD_15;
  case (undefined8 *)0x54:
    uVar1 = (uint)param_3 + 5;
    uVar6 = 2;
    if (0xfffeff < uVar1) {
      uVar6 = 4;
    }
    if (uVar1 >> 8 < 0xff) {
      uVar6 = 1;
    }
    uVar1 = 0;
    if (0xfa < (uint)param_3) {
      uVar1 = uVar6;
    }
                    /* WARNING: Could not recover jumptable at 0x000100bb6694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_100bb6698 + (ulong)(&BYTE_100c9c70b)[uVar1] * 4))();
    SVar21.bridgeObject = puVar3;
    SVar21.str = pcVar2;
    return SVar21;
  case (undefined8 *)0x55:
    goto switchD_100bb6464_caseD_55;
  case (undefined8 *)0x58:
    goto switchD_100bb6464_caseD_58;
  case (undefined8 *)0x6c:
    SVar15.bridgeObject = &DAT_e800000000000000;
    SVar15.str = &DAT_64695f6775626564;
    return SVar15;
  case (undefined8 *)0x7c:
                    /* WARNING: Could not recover jumptable at 0x000100bb66c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_100bb66cc +
              (ulong)*(byte *)((ulong)*(byte *)(puVar5 + 0x201938e0) * 4 + 0x100bb6b6e +
                              (long)puVar5) * 4))();
    SVar22.bridgeObject = puVar3;
    SVar22.str = pcVar2;
    return SVar22;
  case (undefined8 *)0x84:
    goto switchD_100bb6464_caseD_84;
  case (undefined8 *)0x94:
    pcVar2 = (char *)(ulong)*unaff_x20;
    FUN_100bec860(pcVar2);
    SVar12.bridgeObject = puVar3;
    SVar12.str = pcVar2;
    return SVar12;
  case (undefined8 *)0x98:
    param_3 = FUN_100bb6840;
    param_4 = 0x14;
  case (undefined8 *)0x3f:
  case (undefined8 *)0x73:
  case (undefined8 *)0x9b:
  case (undefined8 *)0xcb:
  case (undefined8 *)0xd3:
  case (undefined8 *)0xf8:
    FUN_100bb686c(&DAT_64695f6775626564,&DAT_e800000000000000,param_3,
                  param_4 & 0xffffffffffff | 0xd000000000000000);
    SVar28.bridgeObject = puVar3;
    SVar28.str = pcVar2;
    return SVar28;
  case (undefined8 *)0x99:
  case (undefined8 *)0xc9:
  case (undefined8 *)0xd1:
    puVar5 = (undefined8 *)0x5;
  case (undefined8 *)0x3d:
  case (undefined8 *)0x71:
    DAT_64695f6775626564 = (char)puVar5;
    SVar23.bridgeObject = &DAT_e800000000000000;
    SVar23.str = &DAT_64695f6775626564;
    return SVar23;
  case (undefined8 *)0xa4:
    puVar3 = (undefined *)((ulong)(puVar5 + 0x1d4) | 0x8000000000000000);
  case (undefined8 *)0xf9:
    pcVar2 = (char *)0x46;
    FUN_100bb68ec(0x46,puVar3);
    SVar26.bridgeObject = puVar3;
    SVar26.str = pcVar2;
    return SVar26;
  case (undefined8 *)0xa8:
    goto switchD_100bb6464_caseD_a8;
  case (undefined8 *)0xac:
    goto switchD_100bb6464_caseD_ac;
  case (undefined8 *)0xc1:
    *puVar5 = &DAT_64695f6775626564;
    SVar17.bridgeObject = &DAT_e800000000000000;
    SVar17.str = &DAT_64695f6775626564;
    return SVar17;
  case (undefined8 *)0xd0:
    goto switchD_100bb6464_caseD_d0;
  case (undefined8 *)0xdc:
    goto switchD_100bb6464_caseD_dc;
  }
  param_1 = pcVar2;
  goto code_r0x000100bb6434;
switchD_100bb6464_caseD_50:
switchD_100bb6464_caseD_1c:
  pcVar2 = "P";
switchD_100bb6464_caseD_d0:
  pcVar2 = pcVar2 + 0x848;
  puVar3 = &DAT_100f3a680;
switchD_100bb6464_caseD_55:
  _swift_getWitnessTable(pcVar2,puVar3);
switchD_100bb6464_caseD_17:
  puVar5 = &DAT_101046000;
  goto switchD_100bb6464_caseD_13;
switchD_100bb6464_caseD_58:
  SVar16.bridgeObject = puVar3;
  SVar16.str = pcVar2;
  return SVar16;
switchD_100bb6464_caseD_a:
  SVar8.str = (char *)((ulong)pcVar2 & 0xffffffffffff | 0x6d76000000000000);
  SVar8.bridgeObject = puVar3;
  return SVar8;
switchD_100bb6464_caseD_a8:
  SVar10.str = (char *)((ulong)pcVar2 & 0xffffffffffff | 0x6461000000000000);
  SVar10.bridgeObject = puVar3;
  return SVar10;
switchD_100bb6464_caseD_b:
  SVar9.bridgeObject = (void *)0xea0000000000657a;
  SVar9.str = pcVar2;
  return SVar9;
switchD_100bb6464_caseD_2a:
  SVar7.bridgeObject = puVar3;
  SVar7.str = pcVar2;
  return SVar7;
switchD_100bb6464_caseD_15:
  switchD_100bb6464::caseD_4f();
switchD_100bb6464_caseD_ac:
  SVar17 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar17;
switchD_100bb6464_caseD_13:
  puVar5[0x1cf] = pcVar2;
switchD_100bb6464_caseD_84:
  SVar20.bridgeObject = puVar3;
  SVar20.str = pcVar2;
  return SVar20;
switchD_100bb6464_caseD_1b:
  FUN_100bb5f34();
switchD_100bb6464_caseD_1d:
  if (unaff_x21 == 0) {
switchD_100bb6464_caseD_11:
    *unaff_x19 = pcVar2;
  }
switchD_100bb6464_caseD_14:
  SVar18.bridgeObject = puVar3;
  SVar18.str = pcVar2;
  return SVar18;
}



/* Address: 0x100bb64f0 | FUN_100bb64f0 */

void FUN_100bb64f0(undefined1 *param_1,undefined1 *param_2)

{
  switchD_100beb9e8::caseD_73(*param_1,*param_2);
  return;
}



/* Address: 0x100bb64fc | switchD_100bb6464::caseD_94 */

void switchD_100bb6464::caseD_94(void)

{
  undefined1 *unaff_x20;
  
  FUN_100bec860(*unaff_x20);
  return;
}



/* Address: 0x100bb6504 | FUN_100bb6504 */

void FUN_100bb6504(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  FUN_100becc6c(param_1,*unaff_x20);
  return;
}



/* Address: 0x100bb650c | switchD_100bb6464::caseD_26 */

void switchD_100bb6464::caseD_26(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  FUN_100bed594(param_1,*unaff_x20);
  return;
}



/* Address: 0x100bb6514 | switchD_100bb6464::caseD_29 */

void switchD_100bb6464::caseD_29(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_100bb63d4(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x100bb6540 | FUN_100bb6540 */

void FUN_100bb6540(ulong *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  byte *unaff_x20;
  
  uVar1 = (ulong)*unaff_x20;
  FUN_100bb6434();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



/* Address: 0x100bb6568 | FUN_100bb6568 */

void FUN_100bb6568(void)

{
  undefined1 *unaff_x20;
  
  FUN_100bb6434(*unaff_x20);
  return;
}



/* Address: 0x100bb6570 | FUN_100bb6570 */

void FUN_100bb6570(undefined1 *param_1,undefined1 param_2)

{
  thunk_FUN_100bb63d4();
  *param_1 = param_2;
  return;
}



/* Address: 0x100bb6594 | switchD_100bb6464::caseD_52 */

String switchD_100bb6464::caseD_52(void)

{
  String SVar1;
  
  caseD_4f();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100bb65bc | FUN_100bb65bc */

String FUN_100bb65bc(void)

{
  String SVar1;
  
  switchD_100bb6464::caseD_4f();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100bb65e4 | FUN_100bb65e4 */

void FUN_100bb65e4(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_100bb5f34();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x100bb660c | switchD_100bb6464::caseD_4f */

void switchD_100bb6464::caseD_4f(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101046e78 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9c848;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9c848,&DAT_100f3a680);
  DAT_101046e78 = pTVar1;
  return;
}



/* Address: 0x100bb664c | switchD_100bb6464::caseD_54 */

void switchD_100bb6464::caseD_54(char *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 2;
  if (0xfffeff < param_3 + 5) {
    uVar2 = 4;
  }
  if (param_3 + 5 >> 8 < 0xff) {
    uVar2 = 1;
  }
  uVar1 = 0;
  if (0xfa < param_3) {
    uVar1 = uVar2;
  }
  if (param_2 < 0xfb) {
                    /* WARNING: Could not recover jumptable at 0x000100bb6694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_100bb6698 + (ulong)(&BYTE_100c9c70b)[uVar1] * 4))();
    return;
  }
  *param_1 = (char)param_2 + '\x05';
                    /* WARNING: Could not recover jumptable at 0x000100bb66c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_100bb66cc + (ulong)(&BYTE_100c9c706)[uVar1] * 4))();
  return;
}



/* Address: 0x100bb6708 | switchD_100bb6464::caseD_3c */

undefined1  [16] switchD_100bb6464::caseD_3c(void)

{
  return ZEXT816(0x100f3a680);
}



/* Address: 0x100bb6718 | thunk_FUN_100bb671c */

void thunk_FUN_100bb671c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101046e80 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9c820;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9c820,&DAT_100f3a680);
  DAT_101046e80 = pTVar1;
  return;
}



/* Address: 0x100bb671c | FUN_100bb671c */

void FUN_100bb671c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101046e80 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9c820;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9c820,&DAT_100f3a680);
  DAT_101046e80 = pTVar1;
  return;
}



/* Address: 0x100bb675c | thunk_FUN_100bb6760 */

void thunk_FUN_100bb6760(void)

{
  undefined *puVar1;
  
  if (DAT_101046e88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100c9c780;
  _swift_getWitnessTable(&DAT_100c9c780,&DAT_100f3a680);
  DAT_101046e88 = puVar1;
  return;
}



/* Address: 0x100bb6760 | FUN_100bb6760 */

void FUN_100bb6760(void)

{
  undefined *puVar1;
  
  if (DAT_101046e88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100c9c780;
  _swift_getWitnessTable(&DAT_100c9c780,&DAT_100f3a680);
  DAT_101046e88 = puVar1;
  return;
}



/* Address: 0x100bb67a0 | thunk_FUN_100bb67a4 */

void thunk_FUN_100bb67a4(void)

{
  undefined *puVar1;
  
  if (DAT_101046e90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100c9c758;
  _swift_getWitnessTable(&DAT_100c9c758,&DAT_100f3a680);
  DAT_101046e90 = puVar1;
  return;
}



/* Address: 0x100bb67a4 | FUN_100bb67a4 */

void FUN_100bb67a4(void)

{
  undefined *puVar1;
  
  if (DAT_101046e90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100c9c758;
  _swift_getWitnessTable(&DAT_100c9c758,&DAT_100f3a680);
  DAT_101046e90 = puVar1;
  return;
}



/* Address: 0x100bb67e4 | switchD_100bb6464::caseD_25 */

/* WARNING: Removing unreachable block (ram,0x000100bb66a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

String switchD_100bb6464::caseD_25(char *param_1,undefined8 param_2,code *param_3,ulong param_4)

{
  uint uVar1;
  char *pcVar2;
  undefined *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 *unaff_x19;
  byte *unaff_x20;
  long unaff_x21;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  String SVar7;
  String SVar8;
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
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  
code_r0x000100bb67e4:
  puVar3 = &DAT_e800000000000000;
  pcVar2 = &DAT_64695f6775626564;
  puVar5 = (undefined8 *)((ulong)param_1 & 0xff);
  param_1 = pcVar2;
  switch(puVar5) {
  default:
    puVar3 = &DAT_e400000000000000;
  case (undefined8 *)0x34:
  case (undefined8 *)0x42:
  case (undefined8 *)0x68:
  case (undefined8 *)0x76:
  case (undefined8 *)0x90:
  case (undefined8 *)0x9e:
  case (undefined8 *)0xd6:
  case (undefined8 *)0xe0:
    pcVar2 = &DAT_65707974;
    goto switchD_100bb6464_caseD_2a;
  case (undefined8 *)0x2:
  case (undefined8 *)0x8:
    pcVar2 = (char *)0x6d69;
  case (undefined8 *)0xbc:
  case (undefined8 *)0xc4:
  case (undefined8 *)0xcc:
    pcVar2 = (char *)((ulong)pcVar2 & 0xffffffff0000ffff | 0x67610000);
  case (undefined8 *)0x9:
    pcVar2 = (char *)((ulong)pcVar2 & 0xffff0000ffffffff | 0x5f6500000000);
  case (undefined8 *)0xd:
    pcVar2 = (char *)((ulong)pcVar2 & 0xffffffffffff | 0x6973000000000000);
    goto switchD_100bb6464_caseD_b;
  case (undefined8 *)0x3:
    puVar5 = (undefined8 *)0x657a;
  case (undefined8 *)0xf:
    puVar3 = (undefined *)(((ulong)puVar5 | 0xea00000000000000) + 0xcea);
    pcVar2 = (char *)0x67616d69;
  case (undefined8 *)0xe4:
    pcVar2 = (char *)((ulong)pcVar2 & 0xffff0000ffffffff | 0x5f6500000000);
    goto switchD_100bb6464_caseD_a8;
  case (undefined8 *)0x4:
  case (undefined8 *)0xf0:
    puVar3 = (undefined *)0xec00000072646461;
  case (undefined8 *)0xc2:
  case (undefined8 *)0xfa:
    pcVar2 = (char *)0x67616d69;
  case (undefined8 *)0x6:
    pcVar2 = (char *)((ulong)pcVar2 & 0xffff0000ffffffff | 0x5f6500000000);
    goto switchD_100bb6464_caseD_a;
  case (undefined8 *)0x5:
  case (undefined8 *)0xe:
    puVar3 = (undefined *)0xe900000000000065;
    pcVar2 = (char *)0x6c69665f65646f63;
  case (undefined8 *)0x0:
    SVar11.bridgeObject = puVar3;
    SVar11.str = pcVar2;
    return SVar11;
  case (undefined8 *)0xa:
    goto switchD_100bb6464_caseD_a;
  case (undefined8 *)0xb:
    goto switchD_100bb6464_caseD_b;
  case (undefined8 *)0x11:
  case (undefined8 *)0x16:
  case (undefined8 *)0x1a:
  case (undefined8 *)0x21:
  case (undefined8 *)0x53:
    goto switchD_100bb6464_caseD_11;
  case (undefined8 *)0x13:
    goto switchD_100bb6464_caseD_13;
  case (undefined8 *)0x14:
  case (undefined8 *)0x51:
    goto switchD_100bb6464_caseD_14;
  case (undefined8 *)0x15:
    goto switchD_100bb6464_caseD_15;
  case (undefined8 *)0x17:
    goto switchD_100bb6464_caseD_17;
  case (undefined8 *)0x18:
  case (undefined8 *)0x1e:
  case (undefined8 *)0x38:
  case (undefined8 *)0xc0:
  case (undefined8 *)0x12:
  case (undefined8 *)0x1f:
    unaff_x19 = puVar5;
  case (undefined8 *)0x1b:
    goto switchD_100bb6464_caseD_1b;
  case (undefined8 *)0x1c:
  case (undefined8 *)0x4d:
    goto switchD_100bb6464_caseD_1c;
  case (undefined8 *)0x1d:
  case (undefined8 *)0x4e:
    goto switchD_100bb6464_caseD_1d;
  case (undefined8 *)0x20:
switchD_100bb6464_caseD_20:
    SVar19.bridgeObject = &DAT_e800000000000000;
    SVar19.str = pcVar2;
    return SVar19;
  case (undefined8 *)0x25:
  case (undefined8 *)0x39:
  case (undefined8 *)0x59:
  case (undefined8 *)0x6d:
  case (undefined8 *)0x81:
  case (undefined8 *)0x95:
  case (undefined8 *)0xa9:
  case (undefined8 *)0xbd:
  case (undefined8 *)0xc5:
  case (undefined8 *)0xcd:
  case (undefined8 *)0xdd:
  case (undefined8 *)0xe1:
    goto code_r0x000100bb67e4;
  case (undefined8 *)0x26:
  case (undefined8 *)0x3a:
  case (undefined8 *)0x5a:
  case (undefined8 *)0x6e:
  case (undefined8 *)0x82:
  case (undefined8 *)0x96:
  case (undefined8 *)0xaa:
  case (undefined8 *)0xbe:
  case (undefined8 *)0xc6:
  case (undefined8 *)0xce:
  case (undefined8 *)0xe2:
  case (undefined8 *)0xf6:
  case (undefined8 *)0xfe:
    pvVar4 = (void *)(ulong)*unaff_x20;
    FUN_100bed594(&DAT_64695f6775626564,pvVar4);
    SVar13.bridgeObject = pvVar4;
    SVar13.str = pcVar2;
    return SVar13;
  case (undefined8 *)0x28:
  case (undefined8 *)0x5c:
    _DAT_64695f6775626565 = 0;
    SVar24.bridgeObject = &DAT_e800000000000000;
    SVar24.str = &DAT_64695f6775626564;
    return SVar24;
  case (undefined8 *)0x29:
  case (undefined8 *)0x5d:
  case (undefined8 *)0x85:
  case (undefined8 *)0xad:
  case (undefined8 *)0xe5:
    pcVar2 = (char *)CONCAT35(uRam64695f6775626569,
                              CONCAT41(_DAT_64695f6775626565,DAT_64695f6775626564));
    puVar3 = _DAT_64695f677562656c;
    unaff_x19 = puVar5;
  case (undefined8 *)0x80:
    FUN_100bb63d4(pcVar2,puVar3);
    *(char *)unaff_x19 = (char)pcVar2;
switchD_100bb6464_caseD_dc:
    SVar14.bridgeObject = puVar3;
    SVar14.str = pcVar2;
    return SVar14;
  case (undefined8 *)0x2a:
  case (undefined8 *)0x32:
  case (undefined8 *)0x5e:
  case (undefined8 *)0x66:
  case (undefined8 *)0x86:
  case (undefined8 *)0x8e:
  case (undefined8 *)0xae:
  case (undefined8 *)0xb6:
  case (undefined8 *)0xb8:
  case (undefined8 *)0xe6:
  case (undefined8 *)0xee:
    goto switchD_100bb6464_caseD_2a;
  case (undefined8 *)0x3c:
    return (String)ZEXT816(0x100f3a680);
  case (undefined8 *)0x3e:
  case (undefined8 *)0x72:
  case (undefined8 *)0x9a:
  case (undefined8 *)0xca:
  case (undefined8 *)0xd2:
    param_3 = FUN_100bb6814;
    param_4 = 0xd000000000000046;
  case (undefined8 *)0xf4:
  case (undefined8 *)0xfc:
    FUN_100bb686c(&DAT_64695f6775626564,&DAT_e800000000000000,param_3,param_4);
    SVar27.bridgeObject = puVar3;
    SVar27.str = pcVar2;
    return SVar27;
  case (undefined8 *)0x49:
  case (undefined8 *)0x7d:
  case (undefined8 *)0xa5:
  case (undefined8 *)0xf5:
  case (undefined8 *)0xfd:
    SVar25.bridgeObject = &DAT_e800000000000000;
    SVar25.str = &DAT_64695f6775626564;
    return SVar25;
  case (undefined8 *)0x4c:
  case (undefined8 *)0x10:
  case (undefined8 *)0x19:
  case (undefined8 *)0x4a:
  case (undefined8 *)0x7e:
  case (undefined8 *)0xa6:
  case (undefined8 *)0xde:
    thunk_FUN_100bb63d4();
    *(char *)puVar5 = (char)pcVar2;
  case (undefined8 *)0x48:
    goto switchD_100bb6464_caseD_58;
  case (undefined8 *)0x4f:
    pcVar2 = DAT_101046e78;
    if (DAT_101046e78 != (char *)0x0) goto switchD_100bb6464_caseD_20;
  case (undefined8 *)0x24:
  case (undefined8 *)0x50:
    break;
  case (undefined8 *)0x52:
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
  case (undefined8 *)0x70:
  case (undefined8 *)0xc8:
    *(undefined8 *)((long)register0x00000008 + 0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + 0x18) = unaff_x30;
    goto switchD_100bb6464_caseD_15;
  case (undefined8 *)0x54:
    uVar1 = (uint)param_3 + 5;
    uVar6 = 2;
    if (0xfffeff < uVar1) {
      uVar6 = 4;
    }
    if (uVar1 >> 8 < 0xff) {
      uVar6 = 1;
    }
    uVar1 = 0;
    if (0xfa < (uint)param_3) {
      uVar1 = uVar6;
    }
                    /* WARNING: Could not recover jumptable at 0x000100bb6694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_100bb6698 + (ulong)(&BYTE_100c9c70b)[uVar1] * 4))();
    SVar21.bridgeObject = puVar3;
    SVar21.str = pcVar2;
    return SVar21;
  case (undefined8 *)0x55:
    goto switchD_100bb6464_caseD_55;
  case (undefined8 *)0x58:
    goto switchD_100bb6464_caseD_58;
  case (undefined8 *)0x6c:
    SVar15.bridgeObject = &DAT_e800000000000000;
    SVar15.str = &DAT_64695f6775626564;
    return SVar15;
  case (undefined8 *)0x7c:
                    /* WARNING: Could not recover jumptable at 0x000100bb66c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_100bb66cc +
              (ulong)*(byte *)((ulong)*(byte *)(puVar5 + 0x201938e0) * 4 + 0x100bb6b6e +
                              (long)puVar5) * 4))();
    SVar22.bridgeObject = puVar3;
    SVar22.str = pcVar2;
    return SVar22;
  case (undefined8 *)0x84:
    goto switchD_100bb6464_caseD_84;
  case (undefined8 *)0x94:
    pcVar2 = (char *)(ulong)*unaff_x20;
    FUN_100bec860(pcVar2);
    SVar12.bridgeObject = puVar3;
    SVar12.str = pcVar2;
    return SVar12;
  case (undefined8 *)0x98:
    param_3 = FUN_100bb6840;
    param_4 = 0x14;
  case (undefined8 *)0x3f:
  case (undefined8 *)0x73:
  case (undefined8 *)0x9b:
  case (undefined8 *)0xcb:
  case (undefined8 *)0xd3:
  case (undefined8 *)0xf8:
    FUN_100bb686c(&DAT_64695f6775626564,&DAT_e800000000000000,param_3,
                  param_4 & 0xffffffffffff | 0xd000000000000000);
    SVar28.bridgeObject = puVar3;
    SVar28.str = pcVar2;
    return SVar28;
  case (undefined8 *)0x99:
  case (undefined8 *)0xc9:
  case (undefined8 *)0xd1:
    puVar5 = (undefined8 *)0x5;
  case (undefined8 *)0x3d:
  case (undefined8 *)0x71:
    DAT_64695f6775626564 = (char)puVar5;
    SVar23.bridgeObject = &DAT_e800000000000000;
    SVar23.str = &DAT_64695f6775626564;
    return SVar23;
  case (undefined8 *)0xa4:
    puVar3 = (undefined *)((ulong)(puVar5 + 0x1d4) | 0x8000000000000000);
  case (undefined8 *)0xf9:
    pcVar2 = (char *)0x46;
    FUN_100bb68ec(0x46,puVar3);
    SVar26.bridgeObject = puVar3;
    SVar26.str = pcVar2;
    return SVar26;
  case (undefined8 *)0xa8:
    goto switchD_100bb6464_caseD_a8;
  case (undefined8 *)0xac:
    goto switchD_100bb6464_caseD_ac;
  case (undefined8 *)0xc1:
    *puVar5 = &DAT_64695f6775626564;
    SVar17.bridgeObject = &DAT_e800000000000000;
    SVar17.str = &DAT_64695f6775626564;
    return SVar17;
  case (undefined8 *)0xd0:
    goto switchD_100bb6464_caseD_d0;
  case (undefined8 *)0xdc:
    goto switchD_100bb6464_caseD_dc;
  }
switchD_100bb6464_caseD_1c:
  pcVar2 = "P";
switchD_100bb6464_caseD_d0:
  pcVar2 = pcVar2 + 0x848;
  puVar3 = &DAT_100f3a680;
switchD_100bb6464_caseD_55:
  _swift_getWitnessTable(pcVar2,puVar3);
switchD_100bb6464_caseD_17:
  puVar5 = &DAT_101046000;
  goto switchD_100bb6464_caseD_13;
switchD_100bb6464_caseD_58:
  SVar16.bridgeObject = puVar3;
  SVar16.str = pcVar2;
  return SVar16;
switchD_100bb6464_caseD_a:
  SVar8.str = (char *)((ulong)pcVar2 & 0xffffffffffff | 0x6d76000000000000);
  SVar8.bridgeObject = puVar3;
  return SVar8;
switchD_100bb6464_caseD_a8:
  SVar10.str = (char *)((ulong)pcVar2 & 0xffffffffffff | 0x6461000000000000);
  SVar10.bridgeObject = puVar3;
  return SVar10;
switchD_100bb6464_caseD_b:
  SVar9.bridgeObject = (void *)0xea0000000000657a;
  SVar9.str = pcVar2;
  return SVar9;
switchD_100bb6464_caseD_2a:
  SVar7.bridgeObject = puVar3;
  SVar7.str = pcVar2;
  return SVar7;
switchD_100bb6464_caseD_15:
  caseD_4f();
switchD_100bb6464_caseD_ac:
  SVar17 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar17;
switchD_100bb6464_caseD_13:
  puVar5[0x1cf] = pcVar2;
switchD_100bb6464_caseD_84:
  SVar20.bridgeObject = puVar3;
  SVar20.str = pcVar2;
  return SVar20;
switchD_100bb6464_caseD_1b:
  FUN_100bb5f34();
switchD_100bb6464_caseD_1d:
  if (unaff_x21 == 0) {
switchD_100bb6464_caseD_11:
    *unaff_x19 = pcVar2;
  }
switchD_100bb6464_caseD_14:
  SVar18.bridgeObject = puVar3;
  SVar18.str = pcVar2;
  return SVar18;
}



/* Address: 0x100bb67e8 | FUN_100bb67e8 */

void FUN_100bb67e8(void)

{
  FUN_100bb68ec(0x13,0x8000000100dcee80);
  return;
}



/* Address: 0x100bb6800 | _TtC6Sentry34SentryWatchdogTerminationConstants::ExceptionType */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry34SentryWatchdogTerminationConstants::ExceptionType(ID param_1,SEL param_2)

{
  FUN_100bb686c(param_1,param_2,FUN_100bb67e8,0xd000000000000013);
  return param_1;
}



/* Address: 0x100bb6814 | FUN_100bb6814 */

void FUN_100bb6814(void)

{
  FUN_100bb68ec(0x46,0x8000000100dceea0);
  return;
}



/* Address: 0x100bb682c | _TtC6Sentry34SentryWatchdogTerminationConstants::ExceptionValue */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry34SentryWatchdogTerminationConstants::ExceptionValue(ID param_1,SEL param_2)

{
  FUN_100bb686c(param_1,param_2,FUN_100bb6814,0xd000000000000046);
  return param_1;
}



/* Address: 0x100bb6840 | FUN_100bb6840 */

void FUN_100bb6840(void)

{
  FUN_100bb68ec(0x14,0x8000000100dceef0);
  return;
}



/* Address: 0x100bb6858 | _TtC6Sentry34SentryWatchdogTerminationConstants::MechanismType */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry34SentryWatchdogTerminationConstants::MechanismType(ID param_1,SEL param_2)

{
  FUN_100bb686c(param_1,param_2,FUN_100bb6840,0xd000000000000014);
  return param_1;
}



/* Address: 0x100bb686c | FUN_100bb686c */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

NSString * FUN_100bb686c(undefined8 param_1,undefined8 param_2,code *param_3)

{
  NSString *pNVar1;
  
  (*param_3)();
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  return pNVar1;
}



/* Address: 0x100bb68a8 | _TtC6Sentry34SentryWatchdogTerminationConstants::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry34SentryWatchdogTerminationConstants::init(ID param_1,SEL param_2)

{
  FUN_1001fddc8();
  return param_1;
}



/* Address: 0x100bb68c8 | _TtC6Sentry34SentryWatchdogTerminationConstants::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry34SentryWatchdogTerminationConstants::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}



/* Address: 0x100bb68cc | FUN_100bb68cc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100bb68cc(void)

{
  return ZEXT816(0x100fa3018);
}



/* Address: 0x100bb68ec | FUN_100bb68ec */

ulong FUN_100bb68ec(ulong param_1)

{
  return param_1 & 0xffffffffffff | 0xd000000000000000;
}



/* Address: 0x100bb68f4 | FUN_100bb68f4 */

void FUN_100bb68f4(ulong param_1,byte param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  Dictionary DVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_60 [24];
  undefined *local_48;
  
  *(ulong *)(unaff_x20 + 0x10) = param_1;
  *(byte *)(unaff_x20 + 0x18) = param_2 & 1;
  lVar2 = param_3;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)lVar2 == 0) || ((long)(*(ulong *)(param_3 + 0x18) >> 1) < (long)param_1)) {
    FUN_100b6f004();
    param_3 = lVar2;
  }
  local_48 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  DVar3.unknown = &DAT_101046f80;
  FUN_100b6730c();
  Swift::Dictionary::reserveCapacity(param_1 & ((long)param_1 >> 0x3f ^ 0xffffffffffffffffU),DVar3);
  puVar1 = local_48;
  FUN_100b6730c(&DAT_101046f88);
  FUN_100bb7534();
  _swift_bridgeObjectRetain(param_3);
  _swift_bridgeObjectRetain(puVar1);
  lVar2 = param_3;
  FUN_100b886d8(param_3,puVar1);
  *(long *)(unaff_x20 + 0x20) = lVar2;
  uVar4 = *(undefined8 *)(lVar2 + 0x10);
  _os_unfair_lock_lock(uVar4);
  FUN_100b80d44(lVar2 + 0x18,auStack_60,0x21);
  FUN_100bb6a24(lVar2 + 0x18);
  _swift_endAccess(auStack_60);
  _os_unfair_lock_unlock(uVar4);
  _swift_bridgeObjectRelease(param_3);
  FUN_100b6f8ec();
  return;
}



/* Address: 0x100bb6a24 | FUN_100bb6a24 */

void FUN_100bb6a24(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  _Variant _Var7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  _NativeDictionary _Var11;
  undefined7 extraout_var;
  undefined *capacity;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  
  _Var7.unknown = &DAT_101046f70;
  FUN_100b6730c();
  Swift::Dictionary::_Variant::removeAll(true,_Var7);
  lVar8 = *param_1;
  lVar12 = *(long *)(lVar8 + 0x10);
  if (lVar12 == 0) {
    return;
  }
  _swift_bridgeObjectRetain();
  lVar16 = 0;
  puVar15 = (undefined8 *)(lVar8 + 0x28);
  do {
    uVar3 = puVar15[-1];
    uVar4 = *puVar15;
    _swift_bridgeObjectRetain(uVar4);
    uVar9 = param_1[1];
    _swift_isUniquelyReferenced_nonNull_native();
    lVar14 = param_1[1];
    uVar10 = uVar9;
    FUN_100bb751c();
    uVar13 = (ulong)~(uint)_Var7.unknown & 1;
    capacity = (undefined *)(*(long *)(lVar14 + 0x10) + uVar13);
    if (SCARRY8(*(long *)(lVar14 + 0x10),uVar13)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100bb6bbc);
      (*pcVar5)();
    }
    _Var11.unknown = &DAT_101046f78;
    FUN_100b6730c();
    bVar6 = Swift::_NativeDictionary::ensureUnique(SUB81(uVar9,0),(__int64)capacity,_Var11);
    uVar9 = CONCAT71(extraout_var,bVar6);
    if ((bVar6) &&
       (FUN_100bb751c(), uVar10 = uVar9, ((uint)_Var7.unknown & 1) != ((uint)capacity & 1))) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100bb6bd0);
      (*pcVar5)();
    }
    if (((ulong)_Var7.unknown & 1) == 0) {
      lVar1 = lVar14 + (uVar10 >> 6) * 8;
      *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (uVar10 & 0x3f);
      puVar2 = (undefined8 *)(*(long *)(lVar14 + 0x30) + uVar10 * 0x10);
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      *(long *)(*(long *)(lVar14 + 0x38) + uVar10 * 8) = lVar16;
      if (SCARRY8(*(long *)(lVar14 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100bb6bc0);
        (*pcVar5)();
      }
      *(long *)(lVar14 + 0x10) = *(long *)(lVar14 + 0x10) + 1;
    }
    else {
      *(long *)(*(long *)(lVar14 + 0x38) + uVar10 * 8) = lVar16;
      FUN_100b6f8ec();
    }
    lVar16 = lVar16 + 1;
    param_1[1] = lVar14;
    puVar15 = puVar15 + 3;
    _Var7.unknown = capacity;
  } while (lVar12 != lVar16);
  _swift_bridgeObjectRelease(lVar8);
  return;
}



/* Address: 0x100bb6bd0 | FUN_100bb6bd0 */

undefined8 FUN_100bb6bd0(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(lVar2 + 0x10);
  _os_unfair_lock_lock(uVar1);
  FUN_100b80d44(lVar2 + 0x18,auStack_38,1);
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  FUN_100b6fa2c();
  _os_unfair_lock_unlock(uVar1);
  return uVar3;
}



/* Address: 0x100bb6c24 | FUN_100bb6c24 */

void FUN_100bb6c24(void)

{
  int iVar1;
  undefined8 uVar2;
  _Variant _Var3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  undefined1 auStack_48 [24];
  
  lVar6 = *(long *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(lVar6 + 0x10);
  _os_unfair_lock_lock(uVar4);
  FUN_100b80d44(lVar6 + 0x18,auStack_48,0x21);
  iVar1 = (int)*(undefined8 *)(lVar6 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar5 = *(long *)(lVar6 + 0x18);
  if (iVar1 == 0) {
    uVar2 = 0;
    FUN_100b6de14(0,*(ulong *)(lVar5 + 0x18) >> 1);
    _swift_bridgeObjectRelease(lVar5);
    *(undefined8 *)(lVar6 + 0x18) = uVar2;
  }
  else {
    FUN_100bb7340(0,*(undefined8 *)(lVar5 + 0x10));
  }
  _Var3.unknown = &DAT_101046f70;
  FUN_100b6730c();
  Swift::Dictionary::_Variant::removeAll(true,_Var3);
  _swift_endAccess(auStack_48);
  _os_unfair_lock_unlock(uVar4);
  return;
}



/* Address: 0x100bb6cdc | FUN_100bb6cdc */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100bb6ddc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

Dictionary<undefined,undefined> FUN_100bb6cdc(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined *puVar5;
  Dictionary<undefined,undefined> DVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  long lVar11;
  
  FUN_100bb6bd0();
  puVar9 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar11 = *(long *)(param_1 + 0x10);
  if (lVar11 == 0) {
    _swift_bridgeObjectRelease(param_1);
    puVar9 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    FUN_100b69614(0,lVar11,0);
    puVar8 = PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218;
    puVar7 = PTR___type_metadata_for_Swift_String_100eac208;
    puVar10 = (undefined1 *)(param_1 + 0x30);
    do {
      uVar1 = *(undefined8 *)(puVar10 + -0x10);
      uVar3 = *(undefined8 *)(puVar10 + -8);
      uVar4 = *puVar10;
      puVar5 = &DAT_1010448c8;
      FUN_100b6730c();
      _swift_initStackObject();
      *(undefined8 *)(puVar5 + 0x18) = 4;
      *(undefined8 *)(puVar5 + 0x10) = 2;
      *(undefined8 *)(puVar5 + 0x20) = 0x67616c66;
      *(undefined1 **)(puVar5 + 0x28) = &DAT_e400000000000000;
      *(undefined8 *)(puVar5 + 0x30) = uVar1;
      *(undefined8 *)(puVar5 + 0x38) = uVar3;
      *(undefined **)(puVar5 + 0x48) = puVar7;
      *(undefined8 *)(puVar5 + 0x50) = 0x746c75736572;
      *(undefined1 **)(puVar5 + 0x58) = &DAT_e600000000000000;
      *(undefined **)(puVar5 + 0x78) = PTR___type_metadata_for_Swift_Bool_100eac570;
      puVar5[0x60] = uVar4;
      FUN_100b6fa2c();
      DVar6 = Swift::Dictionary::_init
                        (puVar5,puVar7,PTR___type_metadata_for_Any_100eae0c0 + 8,puVar8);
      uVar2 = *(ulong *)(puVar9 + 0x10);
      if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar2) {
        FUN_100b69614(1 < *(ulong *)(puVar9 + 0x18),uVar2 + 1,1);
      }
      *(ulong *)(puVar9 + 0x10) = uVar2 + 1;
      *(undefined **)(puVar9 + uVar2 * 8 + 0x20) = DVar6.unknown;
      puVar10 = puVar10 + 0x18;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    _swift_bridgeObjectRelease(param_1);
  }
  if (*(long *)(puVar9 + 0x10) == 0) {
    _swift_bridgeObjectRelease(puVar9);
    DVar6.unknown = (undefined *)0x0;
  }
  else {
    puVar7 = &DAT_1010448c8;
    FUN_100b6730c();
    _swift_initStackObject();
    *(undefined8 *)(puVar7 + 0x18) = 2;
    *(undefined8 *)(puVar7 + 0x10) = 1;
    *(undefined8 *)(puVar7 + 0x20) = 0x7365756c6176;
    *(undefined1 **)(puVar7 + 0x28) = &DAT_e600000000000000;
    puVar8 = &DAT_101045338;
    FUN_100b6730c();
    *(undefined **)(puVar7 + 0x48) = puVar8;
    *(undefined **)(puVar7 + 0x30) = puVar9;
    DVar6 = Swift::Dictionary::_init
                      (puVar8,PTR___type_metadata_for_Swift_String_100eac208,
                       PTR___type_metadata_for_Any_100eae0c0 + 8,
                       PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218
                      );
  }
  return (Dictionary<undefined,undefined>)DVar6.unknown;
}



/* Address: 0x100bb6ef8 | FUN_100bb6ef8 */

undefined * FUN_100bb6ef8(long param_1,undefined8 param_2,_NativeDictionary param_3,void *param_4)

{
  ulong *puVar1;
  undefined1 uVar2;
  String SVar3;
  ulong uVar4;
  ulong uVar5;
  code *pcVar6;
  bool bVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined1 *puVar14;
  undefined *puVar15;
  ulong uVar16;
  String SVar17;
  undefined1 auStack_a0 [32];
  ulong local_80;
  ulong local_78;
  undefined *local_68;
  
  FUN_100bb6bd0();
  lVar13 = *(long *)(param_1 + 0x10);
  if (lVar13 == 0) {
    _swift_bridgeObjectRelease();
    puVar15 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  }
  else {
    _swift_bridgeObjectRetain();
    puVar15 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
    puVar14 = (undefined1 *)(param_1 + 0x30);
    do {
      uVar2 = *puVar14;
      uVar16 = *(ulong *)(puVar14 + -8);
      SVar3 = *(String *)(puVar14 + -0x10);
      local_80 = 0xd000000000000010;
      local_78 = 0x8000000100dcefd0;
      _swift_bridgeObjectRetain_n(uVar16,2);
      SVar17.bridgeObject = param_4;
      SVar17.str = param_3.unknown;
      Swift::String::append(SVar3,SVar17);
      FUN_100b6f8ec();
      uVar5 = local_78;
      uVar4 = local_80;
      local_68 = PTR___type_metadata_for_Swift_Bool_100eac570;
      local_80 = CONCAT71(local_80._1_7_,uVar2);
      FUN_100011080(&local_80,auStack_a0);
      puVar8 = puVar15;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar9 = uVar4;
      uVar10 = uVar5;
      FUN_100071370();
      lVar11 = *(long *)(puVar15 + 0x10);
      uVar12 = (ulong)~(uint)uVar10 & 1;
      if (SCARRY8(lVar11,uVar12)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100bb70fc);
        (*pcVar6)();
      }
      param_3.unknown = &DAT_101044768;
      FUN_100b6730c();
      bVar7 = Swift::_NativeDictionary::ensureUnique(SUB81(puVar8,0),lVar11 + uVar12,param_3);
      if ((bVar7) &&
         (uVar9 = uVar4, uVar12 = uVar5, FUN_100071370(), ((uint)uVar10 & 1) != ((uint)uVar12 & 1)))
      {
        Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100bb7110);
        (*pcVar6)();
      }
      if ((uVar10 & 1) == 0) {
        *(ulong *)(puVar15 + (uVar9 >> 6) * 8 + 0x40) =
             *(ulong *)(puVar15 + (uVar9 >> 6) * 8 + 0x40) | 1L << (uVar9 & 0x3f);
        puVar1 = (ulong *)(*(long *)(puVar15 + 0x30) + uVar9 * 0x10);
        *puVar1 = uVar4;
        puVar1[1] = uVar5;
        FUN_100011080(auStack_a0,*(long *)(puVar15 + 0x38) + uVar9 * 0x20);
        if (SCARRY8(*(long *)(puVar15 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100bb7100);
          (*pcVar6)();
        }
        *(long *)(puVar15 + 0x10) = *(long *)(puVar15 + 0x10) + 1;
      }
      else {
        lVar11 = *(long *)(puVar15 + 0x38) + uVar9 * 0x20;
        FUN_100004594(lVar11);
        FUN_100011080(auStack_a0,lVar11);
        FUN_100b6f8ec();
        uVar16 = uVar5;
      }
      _swift_bridgeObjectRelease(uVar16);
      puVar14 = puVar14 + 0x18;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    _swift_bridgeObjectRelease_n(param_1,2);
  }
  return puVar15;
}



/* Address: 0x100bb7110 | FUN_100bb7110 */

undefined8 FUN_100bb7110(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  
  uVar2 = *unaff_x20;
  uVar3 = unaff_x20[2];
  uVar1 = *(undefined1 *)(unaff_x20 + 3);
  FUN_100bb6bd0();
  FUN_100bb7534(uVar2);
  FUN_100bb68f4(uVar3,uVar1,param_1);
  return uVar2;
}



/* Address: 0x100bb7168 | FUN_100bb7168 */

void FUN_100bb7168(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100bb718c | FUN_100bb718c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100bb718c(void)

{
  return ZEXT816(0x101046f00);
}


