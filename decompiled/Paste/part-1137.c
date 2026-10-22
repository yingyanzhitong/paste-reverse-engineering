/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100bc8f68 | _TtC6Sentry18MechanismDecodable::initWithType: */

/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry18MechanismDecodable::initWithType_(ID param_1,SEL param_2,ID param_3)

{
  char *pcVar1;
  String SVar2;
  
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pcVar1 = SVar2.str;
  FUN_100bc8eec(pcVar1,SVar2.bridgeObject);
  return (ID)pcVar1;
}



/* Address: 0x100bc8f90 | FUN_100bc8f90 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100bc8f90(void)

{
  return ZEXT816(0x100fa43f0);
}



/* Address: 0x100bc8fb0 | FUN_100bc8fb0 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100bc8fe4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_100bc8fb0(undefined8 param_1,undefined8 param_2)

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



/* Address: 0x100bc900c | thunk_FUN_100bc8fb0 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100bc8fe4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong thunk_FUN_100bc8fb0(undefined8 param_1,undefined8 param_2)

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



/* Address: 0x100bc9010 | FUN_100bc9010 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100bc9284) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

String FUN_100bc9010(ulong param_1,undefined8 param_2,ConformanceFlags *param_3,undefined8 param_4,
                    ConformanceFlags *param_5)

{
  undefined1 uVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined **self;
  char *pcVar6;
  ConformanceFlags *pCVar7;
  class_t *pcVar8;
  undefined **ppuVar9;
  undefined1 *puVar10;
  undefined **ppuVar11;
  void *pvVar12;
  long lVar13;
  ConformanceFlags *unaff_x19;
  byte *unaff_x20;
  ConformanceFlags *unaff_x21;
  ConformanceFlags *unaff_x22;
  undefined1 *puVar14;
  char *pcVar15;
  ConformanceFlags *unaff_x23;
  char *pcVar16;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
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
  String SVar35;
  String SVar36;
  String SVar37;
  String SVar38;
  String SVar39;
  String SVar40;
  String SVar41;
  String SVar42;
  String SVar43;
  String SVar44;
  String SVar45;
  String SVar46;
  String SVar47;
  String SVar48;
  String SVar49;
  String SVar50;
  String SVar51;
  String SVar52;
  String SVar53;
  undefined **in_stack_00000008;
  undefined **in_stack_00000010;
  undefined **in_stack_00000018;
  undefined1 auStack_40 [7];
  undefined1 auStack_39 [9];
  
  uVar4 = uRam0000000065707976;
  ppuVar9 = (undefined **)&DAT_e400000000000000;
  uVar5 = 0x65707974;
  self = (undefined **)&DAT_65707974;
  ppuVar11 = (undefined **)(param_1 & 0xff);
  lVar13 = (ulong)*(byte *)(ppuVar11 + 0x20193ad6) * 4 + 0x100bc903c;
  pCVar7 = (ConformanceFlags *)self;
  switch(ppuVar11) {
  default:
    ppuVar9 = (undefined **)&DAT_e700000000000000;
  case (undefined **)0x44:
  case (undefined **)0x52:
  case (undefined **)0x78:
  case (undefined **)0x86:
  case (undefined **)0xa0:
  case (undefined **)0xae:
  case (undefined **)0xe6:
  case (undefined **)0xf0:
    self = (undefined **)0x646e6168;
    goto switchD_100bc9038_caseD_3a;
  case (undefined **)0x2:
  case (undefined **)0x7:
    self = (undefined **)0x7973;
  case (undefined **)0xb:
    self = (undefined **)((ulong)self & 0xffffffff0000ffff | 0x6568746e0000);
  case (undefined **)0x9:
    self = (undefined **)((ulong)self | 0x6974000000000000);
  case (undefined **)0xcc:
  case (undefined **)0xd4:
  case (undefined **)0xdc:
    ppuVar9 = (undefined **)0x63;
  case (undefined **)0xa:
    ppuVar9 = (undefined **)((ulong)ppuVar9 & 0xffffffffffff | 0xe900000000000000);
    goto switchD_100bc9038_caseD_e;
  case (undefined **)0x3:
  case (undefined **)0xc:
    ppuVar9 = (undefined **)&DAT_eb000000006e6f69;
    self = (undefined **)0x6564;
  case (undefined **)0x10:
    SVar20.str = (char *)((ulong)self & 0xffffffff0000ffff | 0x7470697263730000);
    SVar20.bridgeObject = ppuVar9;
    return SVar20;
  case (undefined **)0x4:
    uVar5 = 0x6164;
  case (undefined **)0xd2:
    SVar18.str = (char *)(ulong)(uVar5 & 0xffff | 0x61740000);
    SVar18.bridgeObject = &DAT_e400000000000000;
    return SVar18;
  case (undefined **)0x5:
    ppuVar11 = (undefined **)0x63;
  case (undefined **)0xb8:
    ppuVar9 = (undefined **)((ulong)ppuVar11 | 0xe900000000000008);
  case (undefined **)0xf:
    self = (undefined **)0x6568;
    goto switchD_100bc9038_caseD_a8;
  case (undefined **)0x6:
    self = (undefined **)0x6174656d;
  case (undefined **)0x0:
    SVar22.bridgeObject = &DAT_e400000000000000;
    SVar22.str = (char *)self;
    return SVar22;
  case (undefined **)0xe:
    goto switchD_100bc9038_caseD_e;
  case (undefined **)0x20:
    goto switchD_100bc9038_caseD_20;
  case (undefined **)0x24:
  case (undefined **)0x2e:
  case (undefined **)0x48:
    SVar30 = (extension_Swift)::Swift::CodingKey::get_description();
    return SVar30;
  case (undefined **)0x2f:
    register0x00000008 = (BADSPACEBASE *)auStack_40;
  case (undefined **)0x22:
  case (undefined **)0x2b:
    *(ConformanceFlags **)((long)register0x00000008 + 0x10) = unaff_x23;
    *(ConformanceFlags **)((long)register0x00000008 + 0x18) = unaff_x22;
  case (undefined **)0x2d:
  case (undefined **)0x5e:
    *(byte **)((long)register0x00000008 + 0x20) = unaff_x20;
    *(ConformanceFlags **)((long)register0x00000008 + 0x28) = unaff_x19;
  case (undefined **)0x21:
  case (undefined **)0x2a:
  case (undefined **)0x31:
  case (undefined **)0x63:
    *(undefined8 *)((long)register0x00000008 + 0x30) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + 0x38) = unaff_x30;
  case (undefined **)0x61:
    unaff_x19 = unaff_x21;
  case (undefined **)0x23:
  case (undefined **)0x26:
  case (undefined **)0x5f:
    self = (undefined **)&DAT_101045580;
    FUN_100b6730c(&DAT_101045580);
  case (undefined **)0x30:
  case (undefined **)0x6c:
  case (undefined **)0x80:
  case (undefined **)0xd8:
    unaff_x22 = (ConformanceFlags *)self;
  case (undefined **)0x28:
  case (undefined **)0x34:
    ppuVar11 = (undefined **)0x4;
  case (undefined **)0x25:
  case (undefined **)0x60:
    *(char *)((long)register0x00000008 + 7) = (char)ppuVar11;
  case (undefined **)0x2c:
  case (undefined **)0x5d:
    self = (undefined **)&DAT_101047888;
    FUN_100b6730c(&DAT_101047888);
    unaff_x23 = (ConformanceFlags *)self;
  case (undefined **)0x27:
  case (undefined **)0x65:
    switchD_100b81688::caseD_d8();
  case (undefined **)0x38:
  case (undefined **)0xec:
    param_3 = unaff_x23;
    pCVar7 = unaff_x22;
    ppuVar11 = (undefined **)((long)register0x00000008 + 8);
    ppuVar9 = (undefined **)((long)register0x00000008 + 7);
    param_5 = (ConformanceFlags *)self;
    unaff_x22 = pCVar7;
    goto switchD_100bc9038_caseD_64;
  case (undefined **)0x35:
  case (undefined **)0x49:
  case (undefined **)0x69:
  case (undefined **)0x7d:
  case (undefined **)0x91:
  case (undefined **)0xa5:
  case (undefined **)0xb9:
  case (undefined **)0xcd:
  case (undefined **)0xd5:
  case (undefined **)0xdd:
  case (undefined **)0xf1:
    goto switchD_100bc9038_caseD_35;
  case (undefined **)0x36:
  case (undefined **)0x4a:
  case (undefined **)0x6a:
  case (undefined **)0x7e:
  case (undefined **)0x92:
  case (undefined **)0xa6:
  case (undefined **)0xba:
  case (undefined **)0xce:
  case (undefined **)0xd6:
  case (undefined **)0xde:
  case (undefined **)0xf2:
    FUN_100bec894();
    SVar24.bridgeObject = ppuVar9;
    SVar24.str = (char *)self;
    return SVar24;
  case (undefined **)0x3a:
  case (undefined **)0x42:
  case (undefined **)0x6e:
  case (undefined **)0x76:
  case (undefined **)0x96:
  case (undefined **)0x9e:
  case (undefined **)0xbe:
  case (undefined **)0xc6:
  case (undefined **)0xc8:
  case (undefined **)0xf6:
  case (undefined **)0xfe:
    goto switchD_100bc9038_caseD_3a;
  case (undefined **)0x4c:
    FUN_100bc9274();
    SVar30 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
    return SVar30;
  case (undefined **)0x4d:
  case (undefined **)0xd1:
    break;
  case (undefined **)0x4e:
  case (undefined **)0x82:
  case (undefined **)0xaa:
  case (undefined **)0xda:
  case (undefined **)0xe2:
    goto switchD_100bc9038_caseD_4e;
  case (undefined **)0x4f:
  case (undefined **)0x83:
  case (undefined **)0xab:
  case (undefined **)0xdb:
  case (undefined **)0xe3:
    self = (undefined **)&TargetProtocolConformanceDescriptor_100c9cff4.Flags;
    goto switchD_100bc9348_caseD_75;
  case (undefined **)0x58:
    FUN_100bc8a04();
    if (unaff_x21 == (ConformanceFlags *)0x0) {
      *(undefined ***)unaff_x19 = self;
    }
    SVar32.bridgeObject = ppuVar9;
    SVar32.str = (char *)self;
    return SVar32;
  case (undefined **)0x59:
  case (undefined **)0x8d:
    goto switchD_100bc9038_caseD_59;
  case (undefined **)0x5c:
    self = (undefined **)(ulong)*unaff_x20;
  case (undefined **)0x29:
  case (undefined **)0x5a:
  case (undefined **)0x8e:
  case (undefined **)0x94:
  case (undefined **)0xb6:
  case (undefined **)0xee:
    FUN_100bc9010(self);
    SVar28.bridgeObject = ppuVar9;
    SVar28.str = (char *)self;
    return SVar28;
  case (undefined **)0x64:
    goto switchD_100bc9038_caseD_64;
  case (undefined **)0x68:
    thunk_FUN_100bc8fb0();
    *(char *)unaff_x19 = (char)self;
  case (undefined **)0x62:
    goto switchD_100bc9038_caseD_20;
  case (undefined **)0x7c:
    pcVar6 = (char *)(ulong)*unaff_x20;
    FUN_100bc9010();
    *(char **)unaff_x19 = pcVar6;
    *(undefined ***)(unaff_x19 + 2) = ppuVar9;
    SVar27.bridgeObject = ppuVar9;
    SVar27.str = pcVar6;
    return SVar27;
  case (undefined **)0x81:
  case (undefined **)0xa9:
    lVar13 = 0xffffff06;
    break;
  case (undefined **)0x8c:
    goto switchD_100bc9038_caseD_8c;
  case (undefined **)0x90:
    pcVar6 = (char *)CONCAT35(uRam0000000065707979,
                              CONCAT23(uRam0000000065707977,
                                       CONCAT12(uRam0000000065707976,
                                                CONCAT11(DAT_65707975,DAT_65707974))));
    pvVar12 = _DAT_6570797c;
    FUN_100bc8fb0(pcVar6,_DAT_6570797c);
    *(char *)ppuVar11 = (char)pcVar6;
    SVar26.bridgeObject = pvVar12;
    SVar26.str = pcVar6;
    return SVar26;
  case (undefined **)0xa4:
  case (undefined **)0xf5:
    ppuVar9 = (undefined **)(ulong)DAT_e400000000000000;
  case (undefined **)0x39:
  case (undefined **)0x6d:
  case (undefined **)0x95:
  case (undefined **)0xbd:
    pcVar6 = (char *)(ulong)DAT_65707974;
    switchD_100beb5ac::caseD_e5(pcVar6,ppuVar9);
    SVar23.bridgeObject = ppuVar9;
    SVar23.str = pcVar6;
    return SVar23;
  case (undefined **)0xa8:
  case (undefined **)0xbc:
    goto switchD_100bc9038_caseD_a8;
  case (undefined **)0xb4:
    pvVar12 = (void *)(ulong)*unaff_x20;
    FUN_100bed5ac(&DAT_65707974,pvVar12);
    SVar25.bridgeObject = pvVar12;
    SVar25.str = (char *)self;
    return SVar25;
  case (undefined **)0xb5:
  case (undefined **)0xed:
switchD_100bc9038_caseD_b5:
    uRam0000000065707976 = uVar4;
    _swift_getWitnessTable(self,ppuVar9);
    ppuVar11 = (undefined **)&_TtC6Sentry19SentryReplayOptions::includedViewClasses;
switchD_100bc9038_caseD_f4:
    ppuVar11[0x114] = (undefined *)self;
    SVar41.bridgeObject = ppuVar9;
    SVar41.str = (char *)self;
    return SVar41;
  case (undefined **)0xd0:
    switchD_100bc9038::caseD_2f();
    SVar33.bridgeObject = ppuVar9;
    SVar33.str = (char *)self;
    return SVar33;
  case (undefined **)0xd9:
  case (undefined **)0xe1:
    goto switchD_100bc9348_caseD_0;
  case (undefined **)0xe0:
    SVar30.bridgeObject = &DAT_e400000000000000;
    SVar30.str = &DAT_65707974;
    return SVar30;
  case (undefined **)0xf4:
    goto switchD_100bc9038_caseD_f4;
  }
  goto switchD_100bc9038_caseD_4d;
switchD_100bc9038_caseD_20:
  SVar29.bridgeObject = ppuVar9;
  SVar29.str = (char *)self;
  return SVar29;
switchD_100bc9038_caseD_a8:
  SVar21.str = (char *)((ulong)self & 0xffffffff0000ffff | 0x6e696c5f706c0000);
  SVar21.bridgeObject = ppuVar9;
  return SVar21;
switchD_100bc9038_caseD_e:
  SVar19.bridgeObject = ppuVar9;
  SVar19.str = (char *)self;
  return SVar19;
switchD_100bc9038_caseD_3a:
  SVar17.str = (char *)((ulong)self | 0x64656c00000000);
  SVar17.bridgeObject = ppuVar9;
  return SVar17;
switchD_100bc9038_caseD_64:
  Swift::KeyedDecodingContainer::_decodeIfPresent(ppuVar11,pCVar7,ppuVar9,param_3,unaff_x22,param_5)
  ;
  if (unaff_x19 == (ConformanceFlags *)0x0) {
    pCVar7 = *(ConformanceFlags **)((long)register0x00000008 + 8);
  }
  SVar31.bridgeObject = ppuVar9;
  SVar31.str = (char *)pCVar7;
  return SVar31;
switchD_100bc9038_caseD_4d:
  uVar5 = ((uint)((ulong)lVar13 >> 8) & 0xffffff) + 1;
  pvVar12 = (void *)(ulong)uVar5;
  DAT_65707974 = (byte)lVar13;
  uVar1 = (undefined1)uVar5;
  uRam0000000065707976 = (undefined1)(uVar5 >> 8);
  switch(ppuVar11) {
  case (undefined **)0x0:
    break;
  default:
    DAT_65707975 = uVar1;
  case (undefined **)0x3d:
  case (undefined **)0x4b:
  case (undefined **)0x71:
  case (undefined **)0x7f:
  case (undefined **)0x99:
  case (undefined **)0xa7:
  case (undefined **)0xdf:
  case (undefined **)0xe9:
    SVar34.bridgeObject = &DAT_e400000000000000;
    SVar34.str = &DAT_65707974;
    uRam0000000065707976 = uVar4;
    return SVar34;
  case (undefined **)0x2:
    DAT_65707975 = uVar1;
    uVar4 = uRam0000000065707976;
  case (undefined **)0xc5:
  case (undefined **)0xcd:
  case (undefined **)0xd5:
    uRam0000000065707976 = uVar4;
    SVar38.bridgeObject = &DAT_e400000000000000;
    SVar38.str = &DAT_65707974;
    return SVar38;
  case (undefined **)0x3:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100bc9388);
    uRam0000000065707976 = uVar4;
    (*pcVar3)();
  case (undefined **)0x4:
    uRam0000000065707977 = (undefined2)(uVar5 >> 0x10);
    SVar37.bridgeObject = &DAT_e400000000000000;
    SVar37.str = &DAT_65707974;
    DAT_65707975 = uVar1;
    return SVar37;
  case (undefined **)0x7:
    self = &PTR_thunk_FUN_100bc7500_100f3b000;
  case (undefined **)0x5:
switchD_100bc9038_caseD_8c:
    SVar39.bridgeObject = (void *)0x0;
    SVar39.str = (char *)((long)self + 0x240);
    uRam0000000065707976 = uVar4;
    return SVar39;
  case (undefined **)0x9:
    self = (undefined **)DAT_1010478a0;
    if (DAT_1010478a0 != (ConformanceFlags *)0x0) {
switchD_100bc9038_caseD_35:
      SVar40.bridgeObject = &DAT_e400000000000000;
      SVar40.str = (char *)self;
      uRam0000000065707976 = uVar4;
      return SVar40;
    }
  case (undefined **)0xb1:
    self = (undefined **)&TargetProtocolConformanceDescriptor_100c9cff4.Flags;
  case (undefined **)0x8:
    self = (undefined **)((long)self + 0x7e0);
  case (undefined **)0xa1:
  case (undefined **)0xb5:
    ppuVar9 = &PTR_thunk_FUN_100bc7500_100f3b000;
switchD_100bc9038_caseD_59:
    ppuVar9 = ppuVar9 + 0x48;
    goto switchD_100bc9038_caseD_b5;
  case (undefined **)0x1d:
  case (undefined **)0x27:
  case (undefined **)0x41:
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
  case (undefined **)0x28:
    *(undefined8 *)((long)register0x00000008 + 0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + 0x18) = unaff_x30;
  case (undefined **)0x1b:
  case (undefined **)0x24:
  case (undefined **)0x26:
  case (undefined **)0x57:
  case (undefined **)0x1a:
  case (undefined **)0x23:
  case (undefined **)0x2a:
  case (undefined **)0x5c:
    uRam0000000065707976 = uVar4;
    FUN_1001fddc8();
    uVar4 = uRam0000000065707976;
  case (undefined **)0x5a:
    uRam0000000065707976 = uVar4;
    uVar4 = uRam0000000065707976;
  case (undefined **)0x1c:
    uRam0000000065707976 = uVar4;
    SVar46.bridgeObject = ppuVar9;
    SVar46.str = (char *)self;
    return SVar46;
  case (undefined **)0x1f:
  case (undefined **)0x58:
    self = (undefined **)&objc::class_rw_t::_TtC6Sentry24SentryByteCountFormatter.ivars;
  case (undefined **)0x29:
  case (undefined **)0x65:
  case (undefined **)0x79:
  case (undefined **)0xd1:
    self = (undefined **)((long)self + 0x4a0);
  case (undefined **)0x21:
  case (undefined **)0x2d:
  case (undefined **)0x1e:
  case (undefined **)0x59:
    ppuVar9 = (undefined **)0x0;
  case (undefined **)0x25:
  case (undefined **)0x56:
    SVar47.bridgeObject = ppuVar9;
    SVar47.str = (char *)self;
    uRam0000000065707976 = uVar4;
    return SVar47;
  case (undefined **)0x20:
  case (undefined **)0x5e:
  case (undefined **)0x31:
  case (undefined **)0xe5:
    ppuVar9 = (undefined **)0x0;
    uRam0000000065707976 = uVar4;
    _swift_initClassMetadata2(&DAT_65707974,0,0,&stack0x00000008,0x657079cc);
    uVar4 = uRam0000000065707976;
  case (undefined **)0x5d:
    uRam0000000065707976 = uVar4;
    if ((ConformanceFlags *)self == (ConformanceFlags *)0x0) {
      ppuVar9 = (undefined **)0x0;
    }
    SVar48.bridgeObject = ppuVar9;
    SVar48.str = (char *)self;
    return SVar48;
  case (undefined **)0x2e:
  case (undefined **)0x42:
  case (undefined **)0x62:
  case (undefined **)0x76:
  case (undefined **)0x8a:
  case (undefined **)0x9e:
  case (undefined **)0xb2:
  case (undefined **)0xc6:
  case (undefined **)0xce:
  case (undefined **)0xd6:
  case (undefined **)0xea:
    uRam0000000065707976 = uVar4;
    FUN_100bc968c();
    uVar4 = uRam0000000065707976;
  case (undefined **)0x52:
  case (undefined **)0x86:
    uRam0000000065707976 = uVar4;
    uVar4 = uRam0000000065707976;
  case (undefined **)0xae:
  case (undefined **)0xe6:
    uRam0000000065707976 = uVar4;
    uVar4 = uRam0000000065707976;
  case (undefined **)0xed:
    uRam0000000065707976 = uVar4;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = ppuVar9;
    return (String)(auVar2 << 0x40);
  case (undefined **)0x33:
  case (undefined **)0x3b:
  case (undefined **)0x67:
  case (undefined **)0x6f:
  case (undefined **)0x8f:
  case (undefined **)0x97:
  case (undefined **)0xb7:
  case (undefined **)0xbf:
  case (undefined **)0xc1:
  case (undefined **)0xef:
  case (undefined **)0xf7:
    break;
  case (undefined **)0x47:
  case (undefined **)0x7b:
  case (undefined **)0xa3:
  case (undefined **)0xd3:
  case (undefined **)0xdb:
    uRam0000000065707976 = uVar4;
    _swift_getGenericMetadata();
    SVar51.bridgeObject = ppuVar9;
    SVar51.str = (char *)self;
    return SVar51;
  case (undefined **)0x48:
  case (undefined **)0x7c:
  case (undefined **)0xa4:
  case (undefined **)0xd4:
  case (undefined **)0xdc:
    pcVar6 = (char *)0x6f6365736f6e616e;
    puVar10 = (undefined1 *)0xea0000000000646e;
    uRam0000000065707976 = uVar4;
    FUN_100bca260(0x6f6365736f6e616e,0xea0000000000646e);
    if (((ulong)pcVar6 & 1) == 0) {
      puVar14 = (undefined1 *)0xeb00000000646e6f;
      pcVar6 = (char *)0x6365736f7263696d;
      if ((unaff_x20 == (byte *)0x6365736f7263696d &&
           unaff_x21 == (ConformanceFlags *)0xeb00000000646e6f) ||
         (puVar10 = puVar14, FUN_100bca260(0x6365736f7263696d,0xeb00000000646e6f),
         ((ulong)pcVar6 & 1) != 0)) {
        FUN_100b6f980();
        unaff_x20 = (byte *)0x0;
        unaff_x21 = (ConformanceFlags *)&DAT_00000001;
      }
      else {
        pcVar6 = (char *)0x636573696c6c696d;
        if ((unaff_x20 == (byte *)0x636573696c6c696d &&
             unaff_x21 == (ConformanceFlags *)0xeb00000000646e6f) ||
           (FUN_100bca260(0x636573696c6c696d,0xeb00000000646e6f), puVar10 = puVar14,
           ((ulong)pcVar6 & 1) != 0)) {
          FUN_100b6f980();
          unaff_x20 = (byte *)0x0;
          unaff_x21 = (ConformanceFlags *)0x2;
        }
        else {
          pcVar6 = (char *)0x646e6f636573;
          if (unaff_x20 != (byte *)0x646e6f636573 ||
              unaff_x21 != (ConformanceFlags *)&DAT_e600000000000000) {
            puVar10 = &DAT_e600000000000000;
            FUN_100bca260(0x646e6f636573,&DAT_e600000000000000);
            if (((ulong)pcVar6 & 1) == 0) {
              pcVar6 = (char *)0x6574756e696d;
              if (unaff_x20 != (byte *)0x6574756e696d ||
                  unaff_x21 != (ConformanceFlags *)&DAT_e600000000000000) {
                puVar10 = &DAT_e600000000000000;
                FUN_100bca260(0x6574756e696d,&DAT_e600000000000000);
                if (((ulong)pcVar6 & 1) == 0) {
                  if (unaff_x20 != (byte *)0x72756f68 ||
                      unaff_x21 != (ConformanceFlags *)&DAT_e400000000000000) {
                    pcVar6 = (char *)0x72756f68;
                    puVar10 = &DAT_e400000000000000;
                    FUN_100bca260(0x72756f68,&DAT_e400000000000000);
                    if (((ulong)pcVar6 & 1) == 0) {
                      if (unaff_x20 != (byte *)0x796164 ||
                          unaff_x21 != (ConformanceFlags *)0xe300000000000000) {
                        pcVar6 = (char *)0x796164;
                        puVar10 = (undefined1 *)0xe300000000000000;
                        FUN_100bca260(0x796164,0xe300000000000000);
                        if (((ulong)pcVar6 & 1) == 0) {
                          if (unaff_x20 != (byte *)0x6b656577 ||
                              unaff_x21 != (ConformanceFlags *)&DAT_e400000000000000) {
                            pcVar6 = (char *)0x6b656577;
                            puVar10 = &DAT_e400000000000000;
                            FUN_100bca260(0x6b656577,&DAT_e400000000000000);
                            if (((ulong)pcVar6 & 1) == 0) {
                              if (unaff_x20 != (byte *)0x746962 ||
                                  unaff_x21 != (ConformanceFlags *)0xe300000000000000) {
                                pcVar6 = (char *)0x746962;
                                puVar10 = (undefined1 *)0xe300000000000000;
                                FUN_100bca260(0x746962,0xe300000000000000);
                                if (((ulong)pcVar6 & 1) == 0) {
                                  uVar4 = unaff_x20 == (byte *)0x65747962 &&
                                          unaff_x21 == (ConformanceFlags *)&DAT_e400000000000000;
                                  if (unaff_x20 != (byte *)0x65747962 ||
                                      unaff_x21 != (ConformanceFlags *)&DAT_e400000000000000) {
                                    pcVar6 = (char *)0x65747962;
                                    puVar10 = &DAT_e400000000000000;
                                    FUN_100bca260(0x65747962,&DAT_e400000000000000);
                                    if (((ulong)pcVar6 & 1) == 0) {
                                      pcVar6 = (char *)0x6f6c696b;
                                      FUN_100bca284();
                                      if (((bool)uVar4 &&
                                           unaff_x21 == (ConformanceFlags *)&DAT_e800000000000000)
                                         || (FUN_100bca24c(), ((ulong)pcVar6 & 1) != 0)) {
                                        FUN_100b6f980();
                                        unaff_x20 = (byte *)0x0;
                                        unaff_x21 = (ConformanceFlags *)0xa;
                                      }
                                      else {
                                        pcVar15 = (char *)0x657479626962656d;
                                        pcVar6 = (char *)0x657479626962696b;
                                        if ((unaff_x20 == (byte *)0x657479626962696b &&
                                             unaff_x21 == (ConformanceFlags *)&DAT_e800000000000000)
                                           || (FUN_100bca24c(), ((ulong)pcVar6 & 1) != 0)) {
                                          FUN_100b6f980();
                                          unaff_x20 = (byte *)0x0;
                                          unaff_x21 = (ConformanceFlags *)0xb;
                                        }
                                        else {
                                          pcVar16 = (char *)0x657479626167656d;
                                          if ((unaff_x20 == (byte *)0x657479626167656d &&
                                               unaff_x21 ==
                                               (ConformanceFlags *)&DAT_e800000000000000) ||
                                             (FUN_100bca24c(), pcVar6 = pcVar16,
                                             ((ulong)pcVar16 & 1) != 0)) {
                                            FUN_100b6f980();
                                            unaff_x20 = (byte *)0x0;
                                            unaff_x21 = (ConformanceFlags *)0xc;
                                          }
                                          else if ((unaff_x20 == (byte *)0x657479626962656d &&
                                                    unaff_x21 ==
                                                    (ConformanceFlags *)&DAT_e800000000000000) ||
                                                  (FUN_100bca24c(), pcVar6 = pcVar15,
                                                  ((ulong)pcVar15 & 1) != 0)) {
                                            FUN_100b6f980();
                                            unaff_x20 = (byte *)0x0;
                                            unaff_x21 = (ConformanceFlags *)0xd;
                                          }
                                          else {
                                            pcVar6 = (char *)0x6574796261676967;
                                            if ((unaff_x20 == (byte *)0x6574796261676967 &&
                                                 unaff_x21 ==
                                                 (ConformanceFlags *)&DAT_e800000000000000) ||
                                               (FUN_100bca24c(), ((ulong)pcVar6 & 1) != 0)) {
                                              FUN_100b6f980();
                                              unaff_x20 = (byte *)0x0;
                                              unaff_x21 = (ConformanceFlags *)0xe;
                                            }
                                            else {
                                              pcVar6 = (char *)0x6574796269626967;
                                              uVar4 = unaff_x20 == (byte *)0x6574796269626967 &&
                                                      unaff_x21 ==
                                                      (ConformanceFlags *)&DAT_e800000000000000;
                                              if (((bool)uVar4) ||
                                                 (FUN_100bca24c(), ((ulong)pcVar6 & 1) != 0)) {
                                                FUN_100b6f980();
                                                unaff_x20 = (byte *)0x0;
                                                unaff_x21 = (ConformanceFlags *)0xf;
                                              }
                                              else {
                                                pcVar6 = (char *)0x61726574;
                                                FUN_100bca284();
                                                if (((bool)uVar4 &&
                                                     unaff_x21 ==
                                                     (ConformanceFlags *)&DAT_e800000000000000) ||
                                                   (FUN_100bca24c(), ((ulong)pcVar6 & 1) != 0)) {
                                                  FUN_100b6f980();
                                                  unaff_x20 = (byte *)0x0;
                                                  unaff_x21 = (ConformanceFlags *)0x10;
                                                }
                                                else {
                                                  pcVar6 = (char *)0x6574796269626574;
                                                  uVar4 = unaff_x20 == (byte *)0x6574796269626574 &&
                                                          unaff_x21 ==
                                                          (ConformanceFlags *)&DAT_e800000000000000;
                                                  if (((bool)uVar4) ||
                                                     (FUN_100bca24c(), ((ulong)pcVar6 & 1) != 0)) {
                                                    FUN_100b6f980();
                                                    unaff_x20 = (byte *)0x0;
                                                    unaff_x21 = (ConformanceFlags *)0x11;
                                                  }
                                                  else {
                                                    pcVar6 = (char *)0x61746570;
                                                    FUN_100bca284();
                                                    if (((bool)uVar4 &&
                                                         unaff_x21 ==
                                                         (ConformanceFlags *)&DAT_e800000000000000)
                                                       || (FUN_100bca24c(), ((ulong)pcVar6 & 1) != 0
                                                          )) {
                                                      FUN_100b6f980();
                                                      unaff_x20 = (byte *)0x0;
                                                      unaff_x21 = (ConformanceFlags *)&DAT_00000012;
                                                    }
                                                    else {
                                                      pcVar6 = (char *)0x6574796269626570;
                                                      if ((unaff_x20 == (byte *)0x6574796269626570
                                                           && unaff_x21 ==
                                                              (ConformanceFlags *)
                                                              &DAT_e800000000000000) ||
                                                         (FUN_100bca24c(), ((ulong)pcVar6 & 1) != 0)
                                                         ) {
                                                        FUN_100b6f980();
                                                        unaff_x20 = (byte *)0x0;
                                                        unaff_x21 = (ConformanceFlags *)0x13;
                                                      }
                                                      else {
                                                        pcVar6 = (char *)0x65747962617865;
                                                        uVar4 = unaff_x20 ==
                                                                (byte *)0x65747962617865 &&
                                                                unaff_x21 ==
                                                                (ConformanceFlags *)
                                                                &DAT_e700000000000000;
                                                        if (unaff_x20 != (byte *)0x65747962617865 ||
                                                            unaff_x21 !=
                                                            (ConformanceFlags *)
                                                            &DAT_e700000000000000) {
                                                          puVar10 = &DAT_e700000000000000;
                                                          FUN_100bca260(0x65747962617865,
                                                                        &DAT_e700000000000000);
                                                          if (((ulong)pcVar6 & 1) == 0) {
                                                            pcVar6 = (char *)0x69627865;
                                                            FUN_100bca284();
                                                            if (((bool)uVar4 &&
                                                                 unaff_x21 ==
                                                                 (ConformanceFlags *)
                                                                 &DAT_e800000000000000) ||
                                                               (FUN_100bca24c(),
                                                               ((ulong)pcVar6 & 1) != 0)) {
                                                              FUN_100b6f980();
                                                              unaff_x20 = (byte *)0x0;
                                                              unaff_x21 = (ConformanceFlags *)0x15;
                                                            }
                                                            else {
                                                              pcVar6 = (char *)0x6f69746172;
                                                              if (unaff_x20 != (byte *)0x6f69746172
                                                                  || unaff_x21 !=
                                                                     (ConformanceFlags *)
                                                                     &DAT_e500000000000000) {
                                                                puVar10 = &DAT_e500000000000000;
                                                                FUN_100bca260(0x6f69746172,
                                                                              &DAT_e500000000000000)
                                                                ;
                                                                if (((ulong)pcVar6 & 1) == 0) {
                                                                  pcVar6 = (char *)0x746e6563726570;
                                                                  if (unaff_x20 !=
                                                                      (byte *)0x746e6563726570 ||
                                                                      unaff_x21 !=
                                                                      (ConformanceFlags *)
                                                                      &DAT_e700000000000000) {
                                                                    puVar10 = &DAT_e700000000000000;
                                                                    FUN_100bca260(0x746e6563726570,
                                                                                  &
                                                  DAT_e700000000000000);
                                                  if (((ulong)pcVar6 & 1) == 0) goto LAB_100bc978c;
                                                  }
                                                  FUN_100b6f980();
                                                  unaff_x20 = (byte *)0x0;
                                                  unaff_x21 = (ConformanceFlags *)0x17;
                                                  goto LAB_100bc978c;
                                                  }
                                                  }
                                                  FUN_100b6f980();
                                                  unaff_x20 = (byte *)0x0;
                                                  unaff_x21 = (ConformanceFlags *)0x16;
                                                  }
                                                  goto LAB_100bc978c;
                                                  }
                                                  }
                                                  FUN_100b6f980();
                                                  unaff_x20 = (byte *)0x0;
                                                  unaff_x21 = (ConformanceFlags *)0x14;
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                      goto LAB_100bc978c;
                                    }
                                  }
                                  FUN_100b6f980();
                                  unaff_x20 = (byte *)0x0;
                                  unaff_x21 = (ConformanceFlags *)&DAT_00000009;
                                  goto LAB_100bc978c;
                                }
                              }
                              FUN_100b6f980();
                              unaff_x20 = (byte *)0x0;
                              unaff_x21 = (ConformanceFlags *)0x8;
                              goto LAB_100bc978c;
                            }
                          }
                          FUN_100b6f980();
                          unaff_x20 = (byte *)0x0;
                          unaff_x21 = (ConformanceFlags *)0x7;
                          goto LAB_100bc978c;
                        }
                      }
                      FUN_100b6f980();
                      unaff_x20 = (byte *)0x0;
                      unaff_x21 = (ConformanceFlags *)0x6;
                      goto LAB_100bc978c;
                    }
                  }
                  FUN_100b6f980();
                  unaff_x20 = (byte *)0x0;
                  unaff_x21 = (ConformanceFlags *)0x5;
                  goto LAB_100bc978c;
                }
              }
              FUN_100b6f980();
              unaff_x20 = (byte *)0x0;
              unaff_x21 = (ConformanceFlags *)0x4;
              goto LAB_100bc978c;
            }
          }
          FUN_100b6f980();
          unaff_x20 = (byte *)0x0;
          unaff_x21 = (ConformanceFlags *)0x3;
        }
      }
    }
    else {
      FUN_100b6f980();
      unaff_x20 = (byte *)0x0;
      unaff_x21 = (ConformanceFlags *)0x0;
    }
LAB_100bc978c:
    *ppuVar11 = unaff_x20;
    ppuVar11[1] = (undefined *)unaff_x21;
    SVar53.bridgeObject = puVar10;
    SVar53.str = pcVar6;
    return SVar53;
  case (undefined **)0x51:
    uRam0000000065707976 = uVar4;
    return (String)(ZEXT816(0xe400000000000000) << 0x40);
  case (undefined **)0x61:
  case (undefined **)0x5b:
    ppuVar11 = &PTR__TtC6Sentry31SentrySwiftIntegrationInstaller_100f8e000;
    unaff_x19 = (ConformanceFlags *)self;
  case (undefined **)0x19:
    unaff_x20 = ppuVar11[0x3a];
  case (undefined **)0x45:
    uRam0000000065707976 = uVar4;
    FUN_100004640(unaff_x19,*(undefined8 *)(unaff_x19 + 6));
    Swift::__bridgeAnythingToObjectiveC();
    pcVar6 = "swizzleWithTracker:";
    _objc_msgSend((ID)unaff_x20,"swizzleWithTracker:",unaff_x19);
    _swift_unknownObjectRelease(unaff_x19);
    SVar45.bridgeObject = pcVar6;
    SVar45.str = (char *)unaff_x19;
    return SVar45;
  case (undefined **)0x75:
switchD_100bc9348_caseD_75:
    self = (undefined **)((long)self + 0x718);
    ppuVar9 = (undefined **)&DAT_100f3b240;
    uRam0000000065707976 = uVar4;
    _swift_getWitnessTable(self,&DAT_100f3b240);
    ppuVar11 = (undefined **)&DAT_1010478b0;
    uVar4 = uRam0000000065707976;
  case (undefined **)0x55:
    uRam0000000065707976 = uVar4;
    *ppuVar11 = (undefined *)self;
    uVar4 = uRam0000000065707976;
  case (undefined **)0x22:
  case (undefined **)0x53:
  case (undefined **)0x87:
  case (undefined **)0x8d:
  case (undefined **)0xaf:
  case (undefined **)0xe7:
    uRam0000000065707976 = uVar4;
    SVar44.bridgeObject = ppuVar9;
    SVar44.str = (char *)self;
    return SVar44;
  case (undefined **)0x85:
    uRam0000000065707976 = uVar4;
    __swift_stdlib_reportUnimplementedInitializer(&DAT_65707974,0x26,"init()",6,0);
    uVar4 = uRam0000000065707976;
  case (undefined **)0xfe:
    uRam0000000065707976 = uVar4;
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100bc96b8);
    (*pcVar3)();
  case (undefined **)0x9d:
  case (undefined **)0xee:
    ppuVar11 = (undefined **)&_TtC6Sentry19SentryReplayOptions::includedViewClasses;
  case (undefined **)0x32:
  case (undefined **)0x66:
  case (undefined **)0x8e:
  case (undefined **)0xb6:
    SVar42.str = ppuVar11[0x115];
    if (SVar42.str != (char *)0x0) {
      SVar42.bridgeObject = &DAT_e400000000000000;
      uRam0000000065707976 = uVar4;
      return SVar42;
    }
  case (undefined **)0x2f:
  case (undefined **)0x43:
  case (undefined **)0x63:
  case (undefined **)0x77:
  case (undefined **)0x8b:
  case (undefined **)0x9f:
  case (undefined **)0xb3:
  case (undefined **)0xc7:
  case (undefined **)0xcf:
  case (undefined **)0xd7:
  case (undefined **)0xeb:
  case (undefined **)0xff:
    self = (undefined **)&TargetProtocolConformanceDescriptor_100c9cff4.Flags;
  case (undefined **)0xad:
    self = (undefined **)((long)self + 0x740);
    ppuVar9 = &PTR_thunk_FUN_100bc7500_100f3b000;
switchD_100bc9038_caseD_4e:
    ppuVar9 = ppuVar9 + 0x48;
    uRam0000000065707976 = uVar4;
    _swift_getWitnessTable(self,ppuVar9);
    ppuVar11 = (undefined **)&_TtC6Sentry19SentryReplayOptions::includedViewClasses;
    uVar4 = uRam0000000065707976;
  case (undefined **)0x89:
    uRam0000000065707976 = uVar4;
    ppuVar11[0x115] = (undefined *)self;
    SVar43.bridgeObject = ppuVar9;
    SVar43.str = (char *)self;
    return SVar43;
  case (undefined **)0xc9:
    pvVar12 = (void *)0x0;
    uRam0000000065707976 = uVar4;
    in_stack_00000008 = ppuVar11;
    in_stack_00000010 = ppuVar11;
    in_stack_00000018 = ppuVar11;
    _swift_initClassMetadata2(&DAT_65707974,0,3,&stack0x00000008,0x657079e4);
    if ((ConformanceFlags *)self == (ConformanceFlags *)0x0) {
      pvVar12 = (void *)0x0;
    }
    SVar49.bridgeObject = pvVar12;
    SVar49.str = (char *)self;
    return SVar49;
  case (undefined **)0xcb:
    DAT_65707975 = 0;
    uRam0000000065707976 = 0;
    uRam0000000065707977 = 0;
    uVar4 = uRam0000000065707976;
    break;
  case (undefined **)0xd2:
  case (undefined **)0xda:
    ppuVar11 = &PTR__TtC6Sentry31SentrySwiftIntegrationInstaller_100f8e000;
  case (undefined **)0x7a:
  case (undefined **)0xa2:
    self = (undefined **)ppuVar11[0x49];
  case (undefined **)0x46:
  case (undefined **)0xca:
    uRam0000000065707976 = uVar4;
    _objc_msgSend((ID)self,"stop");
    pcVar8 = &objc::class_t::SentryNSFileManagerSwizzlingHelper;
    pcVar6 = "stop";
    SentryNSFileManagerSwizzlingHelper::stop
              ((ID)&objc::class_t::SentryNSFileManagerSwizzlingHelper,"stop");
    SVar50.bridgeObject = pcVar6;
    SVar50.str = (char *)pcVar8;
    return SVar50;
  case (undefined **)0xd9:
    uRam0000000065707976 = uVar4;
    __swift_stdlib_reportUnimplementedInitializer(&DAT_65707974,0x1c,param_3,6,0);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100bc95a0);
    (*pcVar3)();
  case (undefined **)0xf9:
    DAT_65707974 = 6;
    SVar35.bridgeObject = &DAT_e400000000000000;
    SVar35.str = &DAT_65707974;
    uRam0000000065707976 = uVar4;
    return SVar35;
  case (undefined **)0xfd:
    uRam0000000065707976 = uVar4;
    FUN_100bebf90(ppuVar11,pvVar12);
    SVar52.bridgeObject = pvVar12;
    SVar52.str = (char *)ppuVar11;
    return SVar52;
  }
switchD_100bc9348_caseD_0:
  uRam0000000065707976 = uVar4;
  SVar36.bridgeObject = &DAT_e400000000000000;
  SVar36.str = &DAT_65707974;
  return SVar36;
}



/* Address: 0x100bc90d0 | switchD_100bc9038::caseD_a4 */

void switchD_100bc9038::caseD_a4(undefined1 *param_1,undefined1 *param_2)

{
  switchD_100beb5ac::caseD_e5(*param_1,*param_2);
  return;
}



/* Address: 0x100bc90dc | FUN_100bc90dc */

void FUN_100bc90dc(void)

{
  undefined1 *unaff_x20;
  
  FUN_100bec894(*unaff_x20);
  return;
}



/* Address: 0x100bc90e4 | FUN_100bc90e4 */

void FUN_100bc90e4(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  FUN_100becb0c(param_1,*unaff_x20);
  return;
}



/* Address: 0x100bc90ec | switchD_100bc9038::caseD_b4 */

void switchD_100bc9038::caseD_b4(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  FUN_100bed5ac(param_1,*unaff_x20);
  return;
}



/* Address: 0x100bc90f4 | FUN_100bc90f4 */

void FUN_100bc90f4(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_100bc8fb0(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x100bc9120 | FUN_100bc9120 */

void FUN_100bc9120(ulong *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  byte *unaff_x20;
  
  uVar1 = (ulong)*unaff_x20;
  FUN_100bc9010();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



/* Address: 0x100bc9148 | switchD_100bc9038::caseD_5c */

void switchD_100bc9038::caseD_5c(void)

{
  undefined1 *unaff_x20;
  
  FUN_100bc9010(*unaff_x20);
  return;
}



/* Address: 0x100bc9150 | FUN_100bc9150 */

void FUN_100bc9150(undefined1 *param_1,undefined1 param_2)

{
  thunk_FUN_100bc8fb0();
  *param_1 = param_2;
  return;
}



/* Address: 0x100bc9174 | FUN_100bc9174 */

String FUN_100bc9174(void)

{
  String SVar1;
  
  FUN_100bc9274();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100bc919c | FUN_100bc919c */

String FUN_100bc919c(void)

{
  String SVar1;
  
  FUN_100bc9274();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100bc91c4 | switchD_100bc9038::caseD_2f */

void switchD_100bc9038::caseD_2f(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 local_39;
  undefined1 local_38 [8];
  
  puVar1 = &DAT_101045580;
  FUN_100b6730c(&DAT_101045580);
  local_39 = 4;
  puVar2 = &DAT_101047888;
  FUN_100b6730c(&DAT_101047888);
  puVar3 = puVar2;
  switchD_100b81688::caseD_d8();
  Swift::KeyedDecodingContainer::_decodeIfPresent(local_38,puVar1,&local_39,puVar2,puVar1,puVar3);
  return;
}



/* Address: 0x100bc924c | FUN_100bc924c */

void FUN_100bc924c(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_100bc8a04();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x100bc9274 | FUN_100bc9274 */

void FUN_100bc9274(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101047890 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9d808;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9d808,&DAT_100f3b240);
  DAT_101047890 = pTVar1;
  return;
}



/* Address: 0x100bc92b4 | FUN_100bc92b4 */

void FUN_100bc92b4(void)

{
  long unaff_x20;
  
  switchD_100bc9038::caseD_2f(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100bc92cc | FUN_100bc92cc */

void FUN_100bc92cc(char *param_1,uint param_2,uint param_3)

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
                    /* WARNING: Could not recover jumptable at 0x000100bc9314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_100bc9318 + (ulong)(&BYTE_100c9d6bc)[uVar1] * 4))();
    return;
  }
  *param_1 = (char)param_2 + '\x06';
                    /* WARNING: Could not recover jumptable at 0x000100bc9348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(&switchD_100bc9348::switchdataD_100c9d6b7)[uVar1] * 4 + 0x100bc934c))();
  return;
}



/* Address: 0x100bc9388 | switchD_100bc9348::caseD_7 */

undefined1  [16] switchD_100bc9348::caseD_7(void)

{
  return ZEXT816(0x100f3b240);
}



/* Address: 0x100bc9398 | switchD_100bc9348::caseD_9 */

void switchD_100bc9348::caseD_9(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_1010478a0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9d7e0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9d7e0,&DAT_100f3b240);
  DAT_1010478a0 = pTVar1;
  return;
}



/* Address: 0x100bc939c | switchD_100bc9348::caseD_9 */

void switchD_100bc9348::caseD_9(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_1010478a0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9d7e0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9d7e0,&DAT_100f3b240);
  DAT_1010478a0 = pTVar1;
  return;
}



/* Address: 0x100bc93dc | switchD_100bc9348::caseD_9d */

void switchD_100bc9348::caseD_9d(void)

{
  byte *pbVar1;
  
  if (DAT_1010478a8 != (byte *)0x0) {
    return;
  }
  pbVar1 = &BYTE_100c9d740;
  _swift_getWitnessTable(&BYTE_100c9d740,&DAT_100f3b240);
  DAT_1010478a8 = pbVar1;
  return;
}



/* Address: 0x100bc93e0 | switchD_100bc9348::caseD_9d */

void switchD_100bc9348::caseD_9d(void)

{
  byte *pbVar1;
  
  if (DAT_1010478a8 != (byte *)0x0) {
    return;
  }
  pbVar1 = &BYTE_100c9d740;
  _swift_getWitnessTable(&BYTE_100c9d740,&DAT_100f3b240);
  DAT_1010478a8 = pbVar1;
  return;
}



/* Address: 0x100bc9420 | thunk_FUN_100bc9424 */

void thunk_FUN_100bc9424(void)

{
  byte *pbVar1;
  
  if (DAT_1010478b0 != (byte *)0x0) {
    return;
  }
  pbVar1 = &BYTE_100c9d718;
  _swift_getWitnessTable(&BYTE_100c9d718,&DAT_100f3b240);
  DAT_1010478b0 = pbVar1;
  return;
}



/* Address: 0x100bc9424 | FUN_100bc9424 */

void FUN_100bc9424(void)

{
  byte *pbVar1;
  
  if (DAT_1010478b0 != (byte *)0x0) {
    return;
  }
  pbVar1 = &BYTE_100c9d718;
  _swift_getWitnessTable(&BYTE_100c9d718,&DAT_100f3b240);
  DAT_1010478b0 = pbVar1;
  return;
}



/* Address: 0x100bc9464 | thunk_FUN_100bc9010 */

void thunk_FUN_100bc9010(void)

{
  FUN_100bc9010();
  return;
}



/* Address: 0x100bc9468 | FUN_100bc9468 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100bc9468(long param_1)

{
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  Swift::__bridgeAnythingToObjectiveC();
  _objc_msgSend((ID)&objc::class_t::SentryCoreDataSwizzlingHelper,"swizzleWithTracker:",param_1);
  _swift_unknownObjectRelease(param_1);
  return;
}



/* Address: 0x100bc94d0 | _TtC6Sentry23SentryCoreDataSwizzling::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry23SentryCoreDataSwizzling::init(ID param_1,SEL param_2)

{
  FUN_1001fddc8();
  return param_1;
}



/* Address: 0x100bc94f0 | switchD_100bc9348::caseD_1f */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] switchD_100bc9348::caseD_1f(void)

{
  return ZEXT816(0x100fa44a0);
}



/* Address: 0x100bc9510 | FUN_100bc9510 */

void FUN_100bc9510(long param_1)

{
  undefined1 auStack_18 [8];
  
  _swift_initClassMetadata2(param_1,0,0,auStack_18,param_1 + 0x58);
  return;
}



/* Address: 0x100bc9544 | FUN_100bc9544 */

void FUN_100bc9544(void)

{
  FUN_100b2b92c(0);
  return;
}



/* Address: 0x100bc954c | FUN_100bc954c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100bc954c(undefined8 param_1)

{
  FUN_100bc9544(param_1);
  return 0;
}



/* Address: 0x100bc9574 | FUN_100bc9574 */

void FUN_100bc9574(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("Sentry.SwiftAsyncIntegration",0x1c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100bc95a0);
  (*pcVar1)();
}



/* Address: 0x100bc95a0 | FUN_100bc95a0 */

void FUN_100bc95a0(void)

{
  FUN_100bc9574();
  FUN_100024ee0();
  return;
}



/* Address: 0x100bc95ac | FUN_100bc95ac */

void FUN_100bc95ac(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100bc95b8 | FUN_100bc95b8 */

void FUN_100bc95b8(long param_1)

{
  undefined *local_28;
  undefined *puStack_20;
  undefined *local_18;
  
  local_28 = PTR___value_witness_table_for_Builtin_UnknownObject_100eabd30 + 0x40;
  puStack_20 = local_28;
  local_18 = local_28;
  _swift_initClassMetadata2(param_1,0,3,&local_28,param_1 + 0x70);
  return;
}



/* Address: 0x100bc9600 | FUN_100bc9600 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100bc9600(void)

{
  long unaff_x20;
  
  _objc_msgSend(*(ID *)(*(long *)(unaff_x20 + DAT_101047980) +
                       _TtC6Sentry19SentryFileIOTracker::helper),"disable");
  _objc_msgSend((ID)&objc::class_t::SentryNSDataSwizzlingHelper,"stop");
  SentryNSFileManagerSwizzlingHelper::stop
            ((ID)&objc::class_t::SentryNSFileManagerSwizzlingHelper,"stop");
  return;
}



/* Address: 0x100bc9664 | FUN_100bc9664 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100bc9664(undefined8 param_1)

{
  FUN_100bc9600(param_1);
  return 0;
}



/* Address: 0x100bc968c | FUN_100bc968c */

void FUN_100bc968c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("Sentry.SentryFileIOTrackingIntegration",0x26,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100bc96b8);
  (*pcVar1)();
}



/* Address: 0x100bc96b8 | switchD_100bc9348::caseD_2e */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 switchD_100bc9348::caseD_2e(void)

{
  FUN_100bc968c();
  return 0;
}



/* Address: 0x100bc96c4 | FUN_100bc96c4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100bc96c4(void)

{
  return 0;
}



/* Address: 0x100bc970c | FUN_100bc970c */

void FUN_100bc970c(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetClassDescriptor_100ccfe20);
  return;
}



/* Address: 0x100bc9718 | FUN_100bc9718 */

void FUN_100bc9718(undefined8 *param_1,undefined8 *param_2)

{
  FUN_100bebf90(*param_1,param_1[1],*param_2,param_2[1]);
  return;
}



/* Address: 0x100bc972c | FUN_100bc972c */

void FUN_100bc972c(long *param_1,long param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = 0;
  if ((param_2 == 0x6f6365736f6e616e && param_3 == (undefined1 *)0xea0000000000646e) ||
     (FUN_100bca260(0x6f6365736f6e616e,0xea0000000000646e), (uVar2 & 1) != 0)) {
    FUN_100b6f980();
    param_2 = 0;
    param_3 = (undefined1 *)0x0;
  }
  else {
    uVar2 = 0x6365736f7263696d;
    if ((param_2 == 0x6365736f7263696d && param_3 == (undefined1 *)0xeb00000000646e6f) ||
       (FUN_100bca260(0x6365736f7263696d,0xeb00000000646e6f), (uVar2 & 1) != 0)) {
      FUN_100b6f980();
      param_2 = 0;
      param_3 = (undefined1 *)0x1;
    }
    else {
      uVar2 = 0x636573696c6c696d;
      if ((param_2 == 0x636573696c6c696d && param_3 == (undefined1 *)0xeb00000000646e6f) ||
         (FUN_100bca260(0x636573696c6c696d,0xeb00000000646e6f), (uVar2 & 1) != 0)) {
        FUN_100b6f980();
        param_2 = 0;
        param_3 = (undefined1 *)0x2;
      }
      else {
        uVar2 = 0x646e6f636573;
        if ((param_2 == 0x646e6f636573 && param_3 == &DAT_e600000000000000) ||
           (FUN_100bca260(0x646e6f636573,&DAT_e600000000000000), (uVar2 & 1) != 0)) {
          FUN_100b6f980();
          param_2 = 0;
          param_3 = (undefined1 *)0x3;
        }
        else {
          uVar2 = 0x6574756e696d;
          if ((param_2 == 0x6574756e696d && param_3 == &DAT_e600000000000000) ||
             (FUN_100bca260(0x6574756e696d,&DAT_e600000000000000), (uVar2 & 1) != 0)) {
            FUN_100b6f980();
            param_2 = 0;
            param_3 = (undefined1 *)0x4;
          }
          else {
            if (param_2 != 0x72756f68 || param_3 != &DAT_e400000000000000) {
              uVar2 = 0;
              FUN_100bca260(0x72756f68,&DAT_e400000000000000);
              if ((uVar2 & 1) == 0) {
                if (param_2 != 0x796164 || param_3 != (undefined1 *)0xe300000000000000) {
                  uVar2 = 0;
                  FUN_100bca260(0x796164,0xe300000000000000);
                  if ((uVar2 & 1) == 0) {
                    if (param_2 != 0x6b656577 || param_3 != &DAT_e400000000000000) {
                      uVar2 = 0x6b656577;
                      FUN_100bca260(0x6b656577,&DAT_e400000000000000);
                      if ((uVar2 & 1) == 0) {
                        if (param_2 != 0x746962 || param_3 != (undefined1 *)0xe300000000000000) {
                          uVar2 = 0;
                          FUN_100bca260(0x746962,0xe300000000000000);
                          if ((uVar2 & 1) == 0) {
                            uVar1 = param_2 == 0x65747962 && param_3 == &DAT_e400000000000000;
                            if (param_2 != 0x65747962 || param_3 != &DAT_e400000000000000) {
                              uVar2 = 0;
                              FUN_100bca260(0x65747962,&DAT_e400000000000000);
                              if ((uVar2 & 1) == 0) {
                                uVar2 = 0x6f6c696b;
                                FUN_100bca284();
                                if (((bool)uVar1 && param_3 == &DAT_e800000000000000) ||
                                   (FUN_100bca24c(), (uVar2 & 1) != 0)) {
                                  FUN_100b6f980();
                                  param_2 = 0;
                                  param_3 = (undefined1 *)0xa;
                                }
                                else {
                                  uVar3 = 0x657479626962656d;
                                  uVar2 = 0x657479626962696b;
                                  if ((param_2 == 0x657479626962696b &&
                                       param_3 == &DAT_e800000000000000) ||
                                     (FUN_100bca24c(), (uVar2 & 1) != 0)) {
                                    FUN_100b6f980();
                                    param_2 = 0;
                                    param_3 = (undefined1 *)0xb;
                                  }
                                  else {
                                    uVar2 = 0x657479626167656d;
                                    if ((param_2 == 0x657479626167656d &&
                                         param_3 == &DAT_e800000000000000) ||
                                       (FUN_100bca24c(), (uVar2 & 1) != 0)) {
                                      FUN_100b6f980();
                                      param_2 = 0;
                                      param_3 = (undefined1 *)0xc;
                                    }
                                    else if ((param_2 == 0x657479626962656d &&
                                              param_3 == &DAT_e800000000000000) ||
                                            (FUN_100bca24c(), (uVar3 & 1) != 0)) {
                                      FUN_100b6f980();
                                      param_2 = 0;
                                      param_3 = (undefined1 *)0xd;
                                    }
                                    else {
                                      uVar2 = 0x6574796261676967;
                                      if ((param_2 == 0x6574796261676967 &&
                                           param_3 == &DAT_e800000000000000) ||
                                         (FUN_100bca24c(), (uVar2 & 1) != 0)) {
                                        FUN_100b6f980();
                                        param_2 = 0;
                                        param_3 = (undefined1 *)0xe;
                                      }
                                      else {
                                        uVar2 = 0x6574796269626967;
                                        uVar1 = param_2 == 0x6574796269626967 &&
                                                param_3 == &DAT_e800000000000000;
                                        if (((bool)uVar1) || (FUN_100bca24c(), (uVar2 & 1) != 0)) {
                                          FUN_100b6f980();
                                          param_2 = 0;
                                          param_3 = (undefined1 *)0xf;
                                        }
                                        else {
                                          uVar2 = 0;
                                          FUN_100bca284();
                                          if (((bool)uVar1 && param_3 == &DAT_e800000000000000) ||
                                             (FUN_100bca24c(), (uVar2 & 1) != 0)) {
                                            FUN_100b6f980();
                                            param_2 = 0;
                                            param_3 = (undefined1 *)0x10;
                                          }
                                          else {
                                            uVar2 = 0;
                                            uVar1 = param_2 == 0x6574796269626574 &&
                                                    param_3 == &DAT_e800000000000000;
                                            if (((bool)uVar1) || (FUN_100bca24c(), (uVar2 & 1) != 0)
                                               ) {
                                              FUN_100b6f980();
                                              param_2 = 0;
                                              param_3 = (undefined1 *)0x11;
                                            }
                                            else {
                                              uVar2 = 0;
                                              FUN_100bca284();
                                              if (((bool)uVar1 && param_3 == &DAT_e800000000000000)
                                                 || (FUN_100bca24c(), (uVar2 & 1) != 0)) {
                                                FUN_100b6f980();
                                                param_2 = 0;
                                                param_3 = (undefined1 *)0x12;
                                              }
                                              else {
                                                uVar2 = 0;
                                                if ((param_2 == 0x6574796269626570 &&
                                                     param_3 == &DAT_e800000000000000) ||
                                                   (FUN_100bca24c(), (uVar2 & 1) != 0)) {
                                                  FUN_100b6f980();
                                                  param_2 = 0;
                                                  param_3 = (undefined1 *)0x13;
                                                }
                                                else {
                                                  uVar2 = 0x65747962617865;
                                                  uVar1 = param_2 == 0x65747962617865 &&
                                                          param_3 == &DAT_e700000000000000;
                                                  if (((bool)uVar1) ||
                                                     (FUN_100bca260(0x65747962617865,
                                                                    &DAT_e700000000000000),
                                                     (uVar2 & 1) != 0)) {
                                                    FUN_100b6f980();
                                                    param_2 = 0;
                                                    param_3 = (undefined1 *)0x14;
                                                  }
                                                  else {
                                                    uVar2 = 0x69627865;
                                                    FUN_100bca284();
                                                    if (((bool)uVar1 &&
                                                         param_3 == &DAT_e800000000000000) ||
                                                       (FUN_100bca24c(), (uVar2 & 1) != 0)) {
                                                      FUN_100b6f980();
                                                      param_2 = 0;
                                                      param_3 = (undefined1 *)0x15;
                                                    }
                                                    else {
                                                      uVar2 = 0;
                                                      if ((param_2 == 0x6f69746172 &&
                                                           param_3 == &DAT_e500000000000000) ||
                                                         (FUN_100bca260(0x6f69746172,
                                                                        &DAT_e500000000000000),
                                                         (uVar2 & 1) != 0)) {
                                                        FUN_100b6f980();
                                                        param_2 = 0;
                                                        param_3 = (undefined1 *)0x16;
                                                      }
                                                      else {
                                                        uVar2 = 0;
                                                        if ((param_2 == 0x746e6563726570 &&
                                                             param_3 == &DAT_e700000000000000) ||
                                                           (FUN_100bca260(0x746e6563726570,
                                                                          &DAT_e700000000000000),
                                                           (uVar2 & 1) != 0)) {
                                                          FUN_100b6f980();
                                                          param_2 = 0;
                                                          param_3 = (undefined1 *)0x17;
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                                goto LAB_100bc978c;
                              }
                            }
                            FUN_100b6f980();
                            param_2 = 0;
                            param_3 = (undefined1 *)0x9;
                            goto LAB_100bc978c;
                          }
                        }
                        FUN_100b6f980();
                        param_2 = 0;
                        param_3 = (undefined1 *)0x8;
                        goto LAB_100bc978c;
                      }
                    }
                    FUN_100b6f980();
                    param_2 = 0;
                    param_3 = (undefined1 *)0x7;
                    goto LAB_100bc978c;
                  }
                }
                FUN_100b6f980();
                param_2 = 0;
                param_3 = (undefined1 *)0x6;
                goto LAB_100bc978c;
              }
            }
            FUN_100b6f980();
            param_2 = 0;
            param_3 = (undefined1 *)0x5;
          }
        }
      }
    }
  }
LAB_100bc978c:
  *param_1 = param_2;
  param_1[1] = (long)param_3;
  return;
}



/* Address: 0x100bc9c68 | FUN_100bc9c68 */

undefined1  [16] FUN_100bc9c68(void)

{
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined1 *puVar1;
  long unaff_x20;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  puVar1 = (undefined1 *)0xea0000000000646e;
  uVar2 = 0x6f6365736f6e616e;
  switch(*(undefined8 *)(unaff_x20 + 8)) {
  case 1:
    uVar2 = 0x736f7263696d;
    goto LAB_100bc9d28;
  case 2:
    uVar2 = 0x73696c6c696d;
LAB_100bc9d28:
    uVar2 = uVar2 | 0x6365000000000000;
    puVar1 = (undefined1 *)0xeb00000000646e6f;
    break;
  case 3:
    puVar1 = &DAT_e600000000000000;
    uVar2 = 0x646e6f636573;
    break;
  case 4:
    puVar1 = &DAT_e600000000000000;
    uVar2 = 0x6574756e696d;
    break;
  case 5:
    puVar1 = &DAT_e400000000000000;
    uVar2 = 0x72756f68;
    break;
  case 6:
    puVar1 = (undefined1 *)0xe300000000000000;
    uVar2 = 0x796164;
    break;
  case 7:
    puVar1 = &DAT_e400000000000000;
    uVar2 = 0x6b656577;
    break;
  case 8:
    puVar1 = (undefined1 *)0xe300000000000000;
    uVar2 = 0x746962;
    break;
  case 9:
    puVar1 = &DAT_e400000000000000;
    uVar2 = 0x65747962;
    break;
  case 10:
    uVar2 = 0x6f6c696b;
    goto LAB_100bc9df4;
  case 0xb:
    FUN_100bca270();
    uVar2 = extraout_x8 + 0x3fe;
    goto LAB_100bc9e2c;
  case 0xc:
    uVar2 = 0x6167656d;
    goto LAB_100bc9df4;
  case 0xd:
    uVar2 = 0x656d;
    goto LAB_100bc9dc0;
  case 0xe:
    uVar2 = 0x6167656d;
    goto LAB_100bc9d44;
  case 0xf:
    uVar2 = 0x6962656d;
LAB_100bc9d44:
    uVar2 = (uVar2 | 0x6574796200000000) + 0x3fa;
    goto LAB_100bc9e2c;
  case 0x10:
    uVar2 = 0x61726574;
    goto LAB_100bc9df4;
  case 0x11:
    FUN_100bca270();
    uVar2 = extraout_x8_00 + 7;
    goto LAB_100bc9e2c;
  case 0x12:
    uVar2 = 0x61746570;
    goto LAB_100bc9df4;
  case 0x13:
    FUN_100bca270();
    uVar2 = extraout_x8_01 + 3;
LAB_100bc9e2c:
    puVar1 = &DAT_e800000000000000;
    break;
  case 0x14:
    puVar1 = &DAT_e700000000000000;
    uVar2 = 0x65747962617865;
    break;
  case 0x15:
    uVar2 = 0x7865;
LAB_100bc9dc0:
    uVar2 = uVar2 | 0x69620000;
LAB_100bc9df4:
    puVar1 = &DAT_e800000000000000;
    uVar2 = uVar2 | 0x6574796200000000;
    break;
  case 0x16:
    puVar1 = &DAT_e500000000000000;
    uVar2 = 0x6f69746172;
    break;
  case 0x17:
    puVar1 = &DAT_e700000000000000;
    uVar2 = 0x746e6563726570;
  }
  FUN_100bc9e6c();
  auVar3._8_8_ = puVar1;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Address: 0x100bc9e6c | FUN_100bc9e6c */

void FUN_100bc9e6c(undefined8 param_1,ulong param_2)

{
  if (param_2 < 0x18) {
    return;
  }
  _swift_bridgeObjectRetain(param_2);
  return;
}



/* Address: 0x100bc9e80 | FUN_100bc9e80 */

void FUN_100bc9e80(undefined8 *param_1)

{
  FUN_100bc972c(*param_1,param_1[1]);
  return;
}



/* Address: 0x100bc9e8c | FUN_100bc9e8c */

void FUN_100bc9e8c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100bc9c68();
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



/* Address: 0x100bc9eb0 | FUN_100bc9eb0 */

void FUN_100bc9eb0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  void *pvVar4;
  undefined8 *unaff_x20;
  String SVar5;
  undefined1 auStack_68 [24];
  undefined8 local_50;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  pcVar3 = *(char **)(param_1 + 0x18);
  pvVar4 = *(void **)(param_1 + 0x20);
  FUN_100004640(param_1,pcVar3);
  Swift::Encoder::_singleValueContainer();
  FUN_100bc9c68();
  FUN_100bc9e6c(uVar1,uVar2);
  FUN_100bc9f7c(uVar1,uVar2);
  FUN_10007d048(auStack_68,local_50);
  SVar5.bridgeObject = pvVar4;
  SVar5.str = pcVar3;
  Swift::SingleValueEncodingContainer::_encode(SVar5);
  _swift_bridgeObjectRelease(pvVar4);
  FUN_100004594(auStack_68);
  return;
}



/* Address: 0x100bc9f7c | FUN_100bc9f7c */

void FUN_100bc9f7c(undefined8 param_1,ulong param_2)

{
  if (param_2 < 0x18) {
    return;
  }
  _swift_bridgeObjectRelease(param_2);
  return;
}



/* Address: 0x100bc9f90 | FUN_100bc9f90 */

void FUN_100bc9f90(void)

{
  FUN_100bc9eb0();
  return;
}



/* Address: 0x100bc9fa4 | FUN_100bc9fa4 */

void FUN_100bc9fa4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



/* Address: 0x100bc9fac | thunk_FUN_100bc9fb0 */

void thunk_FUN_100bc9fb0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101047a38 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9da24;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9da24,&DAT_100f3b528);
  DAT_101047a38 = pTVar1;
  return;
}



/* Address: 0x100bc9fb0 | FUN_100bc9fb0 */

void FUN_100bc9fb0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101047a38 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9da24;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9da24,&DAT_100f3b528);
  DAT_101047a38 = pTVar1;
  return;
}



/* Address: 0x100bc9ff0 | FUN_100bc9ff0 */

void FUN_100bc9ff0(undefined8 *param_1)

{
  FUN_100bc9fa4(*param_1,param_1[1]);
  return;
}



/* Address: 0x100bc9ffc | thunk_FUN_100bca000 */

void thunk_FUN_100bca000(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101047a40 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9da64;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9da64,&DAT_100f3b528);
  DAT_101047a40 = pTVar1;
  return;
}



/* Address: 0x100bca000 | FUN_100bca000 */

void FUN_100bca000(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101047a40 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9da64;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9da64,&DAT_100f3b528);
  DAT_101047a40 = pTVar1;
  return;
}



/* Address: 0x100bca040 | thunk_FUN_100bca044 */

undefined8 * thunk_FUN_100bca044(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  if (uVar1 < 0xffffffff) {
    uVar2 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar2;
  }
  else {
    *param_1 = *param_2;
    param_1[1] = uVar1;
    _swift_bridgeObjectRetain();
  }
  return param_1;
}



/* Address: 0x100bca044 | FUN_100bca044 */

undefined8 * FUN_100bca044(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  if (uVar1 < 0xffffffff) {
    uVar2 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar2;
  }
  else {
    *param_1 = *param_2;
    param_1[1] = uVar1;
    _swift_bridgeObjectRetain();
  }
  return param_1;
}



/* Address: 0x100bca08c | FUN_100bca08c */

undefined8 * FUN_100bca08c(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1[1];
  if (uVar1 < 0xffffffff) {
    if (0xfffffffe < (ulong)param_2[1]) {
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      _swift_bridgeObjectRetain();
      return param_1;
    }
  }
  else {
    if (0xfffffffe < (ulong)param_2[1]) {
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(uVar1);
      return param_1;
    }
    _swift_bridgeObjectRelease(uVar1);
  }
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  return param_1;
}



/* Address: 0x100bca12c | FUN_100bca12c */

undefined8 * FUN_100bca12c(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (0xfffffffe < (ulong)param_1[1]) {
    uVar1 = param_2[1];
    if (0xfffffffe < uVar1) {
      *param_1 = *param_2;
      param_1[1] = uVar1;
      _swift_bridgeObjectRelease();
      return param_1;
    }
    _swift_bridgeObjectRelease();
  }
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  return param_1;
}



/* Address: 0x100bca18c | FUN_100bca18c */

int FUN_100bca18c(int *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7fffffe7 < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7fffffe8;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (0x18 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2 + -0x17;
  }
  return iVar1;
}


