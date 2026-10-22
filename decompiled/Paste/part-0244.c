/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1002f3d34 | thunk_FUN_1002f3d38 */

void thunk_FUN_1002f3d38(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbd968 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c3ec88;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3ec88,&DAT_100ec8df0);
  DAT_100fbd968 = pTVar1;
  return;
}



/* Address: 0x1002f3d38 | FUN_1002f3d38 */

void FUN_1002f3d38(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbd968 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c3ec88;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3ec88,&DAT_100ec8df0);
  DAT_100fbd968 = pTVar1;
  return;
}



/* Address: 0x1002f3d78 | thunk_FUN_1002e1208 */

void thunk_FUN_1002e1208(void)

{
  FUN_1002e1208();
  return;
}



/* Address: 0x1002f3d7c | thunk_FUN_1000e5808 */

void thunk_FUN_1000e5808(void)

{
  FUN_1000e5808();
  return;
}



/* Address: 0x1002f3d80 | thunk_FUN_1002f3a3c */

void thunk_FUN_1002f3a3c(void)

{
  FUN_1002f3a3c();
  return;
}



/* Address: 0x1002f3d84 | FUN_1002f3d84 */

void FUN_1002f3d84(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  return;
}



/* Address: 0x1002f3d94 | FUN_1002f3d94 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_1002f3d94(byte param_1,undefined8 param_2,undefined *param_3)

{
  ulong uVar1;
  CharacterSet CVar2;
  CharacterSet CVar3;
  Substring timeIntervalSince1970;
  undefined *puVar4;
  ID self;
  Date DVar5;
  NSDate *pNVar6;
  uint uVar7;
  undefined1 *puVar8;
  char *pcVar9;
  void *pvVar10;
  long extraout_x8;
  long extraout_x8_00;
  Substring timeIntervalSince1970_00;
  CharacterSet in;
  void *pvVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  undefined1 auVar18 [16];
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  undefined8 auStack_100 [4];
  undefined1 auStack_e0 [8];
  undefined1 *local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  undefined1 *puStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a0;
  undefined *local_98;
  String *local_90;
  String local_80;
  
  local_d0 = (undefined *)Foundation::Date::typeMetadataAccessor();
  lVar12 = *(long *)(local_d0 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar12 + 0x40));
  local_d8 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  CVar2 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar14 = *(long *)(CVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar14 + 0x40));
  in.unknown = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0) +
               -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  CVar3.unknown = param_3;
  local_a0 = param_2;
  local_98 = param_3;
  _swift_bridgeObjectRetain();
  CVar3 = Foundation::CharacterSet::get_whitespaces(CVar3);
  FUN_1002da77c();
  SVar15 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
  pvVar11 = SVar15.bridgeObject;
  (**(code **)(lVar14 + 8))(in.unknown);
  _swift_bridgeObjectRelease(param_3);
  uVar1 = (ulong)SVar15.str & 0xffffffffffff;
  if (((ulong)pvVar11 & 0x2000000000000000) != 0) {
    uVar1 = (ulong)pvVar11 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) goto LAB_1002f3ff8;
  local_80 = SVar15;
  if (2 < param_1) {
    if (param_1 != 3) {
      if (param_1 == 4) {
        local_a0 = 0;
        local_98 = (undefined *)0xe000000000000000;
        Swift::_StringGuts::grow(0x17,(_StringGuts)CVar2.unknown);
        _swift_bridgeObjectRelease(local_98);
        local_a0 = 0xd000000000000011;
        local_98 = (undefined *)0x8000000100da16c0;
        goto LAB_1002f4040;
      }
      local_a0 = 0;
      local_98 = (undefined *)0xe000000000000000;
      Swift::_StringGuts::grow(0x17,(_StringGuts)CVar2.unknown);
      _swift_bridgeObjectRelease(local_98);
      local_a0 = 0xd000000000000012;
      local_98 = (undefined *)0x8000000100da16a0;
      goto LAB_1002f421c;
    }
    local_80.bridgeObject = (void *)0xe100000000000000;
    local_80.str = (char *)0x20;
    local_90 = &local_80;
    lVar14 = 0x7fffffffffffffff;
    FUN_1002d95dc(0x7fffffffffffffff,1,FUN_1002dee10,&local_a0,SVar15.str,pvVar11);
    if (*(long *)(lVar14 + 0x10) == 2) {
      timeIntervalSince1970.unknown = *(undefined **)(lVar14 + 0x20);
      uVar7 = (uint)*(undefined8 *)(lVar14 + 0x28);
      _swift_bridgeObjectRetain(*(undefined8 *)(lVar14 + 0x38));
      double::_init(timeIntervalSince1970);
      if ((uVar7 & 0xff) == 1) goto LAB_1002f3ff8;
      if (*(ulong *)(lVar14 + 0x10) < 2) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x1002f45b0);
        (*pcVar13)();
      }
      timeIntervalSince1970_00.unknown = *(undefined **)(lVar14 + 0x40);
      uVar7 = (uint)*(undefined8 *)(lVar14 + 0x48);
      pvVar11 = *(void **)(lVar14 + 0x58);
      _swift_bridgeObjectRetain(pvVar11);
      _swift_bridgeObjectRelease(lVar14);
      double::_init(timeIntervalSince1970_00);
      if ((uVar7 & 0xff) != 1) {
        puVar4 = &_OBJC_CLASS___NSISO8601DateFormatter;
        _objc_allocWithZone();
        self = objc_stub::init((ID)puVar4);
        puVar8 = local_d8;
        DVar5 = Foundation::Date::init(timeIntervalSince1970.unknown);
        pNVar6 = Foundation::Date::_bridgeToObjectiveC(DVar5);
        puVar4 = local_d0;
        pcVar13 = *(code **)(lVar12 + 8);
        (*pcVar13)(puVar8,local_d0);
        objc_stub::stringFromDate_(self,pNVar6);
        SVar15 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        DVar5 = Foundation::Date::init(timeIntervalSince1970_00.unknown);
        pNVar6 = Foundation::Date::_bridgeToObjectiveC(DVar5);
        (*pcVar13)(puVar8,puVar4);
        objc_stub::stringFromDate_(self);
        SVar16 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        local_a0 = 0;
        local_98 = (undefined *)0xe000000000000000;
        Swift::_StringGuts::grow(0x55,(_StringGuts)SVar16.bridgeObject);
        SVar19.bridgeObject = (void *)0x8000000100da1640;
        SVar19.str = (char *)0xd000000000000026;
        SVar23.bridgeObject = pvVar11;
        SVar23.str = (char *)pNVar6;
        Swift::String::append(SVar19,SVar23);
        SVar24.bridgeObject = pvVar11;
        SVar24.str = (char *)pNVar6;
        Swift::String::append(SVar15,SVar24);
        _swift_bridgeObjectRelease(SVar15.bridgeObject);
        SVar15.bridgeObject = (void *)0x8000000100da1670;
        SVar15.str = (char *)0xd000000000000029;
        SVar25.bridgeObject = pvVar11;
        SVar25.str = (char *)pNVar6;
        Swift::String::append(SVar15,SVar25);
        SVar26.bridgeObject = pvVar11;
        SVar26.str = (char *)pNVar6;
        Swift::String::append(SVar16,SVar26);
        _swift_bridgeObjectRelease(SVar16.bridgeObject);
        SVar16.bridgeObject = &SUB_e200000000000000;
        SVar16.str = (char *)0x2929;
        SVar27.bridgeObject = pvVar11;
        SVar27.str = (char *)pNVar6;
        Swift::String::append(SVar16,SVar27);
        goto LAB_1002f43c4;
      }
    }
    else {
LAB_1002f3ff8:
      _swift_bridgeObjectRelease();
    }
    local_a0 = 0;
    local_98 = (undefined *)0x0;
    goto LAB_1002f43c4;
  }
  if (param_1 == 0) {
    local_a0 = 0;
    local_98 = (undefined *)0xe000000000000000;
    Swift::_StringGuts::grow(0x12,(_StringGuts)CVar2.unknown);
    _swift_bridgeObjectRelease(local_98);
    local_a0 = 0x7070416574736170;
    local_98 = (undefined *)0xed000022203d3d20;
LAB_1002f421c:
    puVar4 = PTR___type_metadata_for_Swift_String_100eac208;
    local_b8 = 0x5c;
    uStack_b0 = 0xe100000000000000;
    local_c8 = 0x5c5c;
    puStack_c0 = &SUB_e200000000000000;
    *(undefined **)(in.unknown + -0x10) = CVar3.unknown;
    *(undefined **)(in.unknown + -8) = CVar3.unknown;
    *(undefined **)(in.unknown + -0x18) = CVar3.unknown;
    *(undefined **)(in.unknown + -0x20) = PTR___type_metadata_for_Swift_String_100eac208;
    local_80 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                         (&local_b8,&local_c8,0,0,0,1,PTR___type_metadata_for_Swift_String_100eac208
                          ,PTR___type_metadata_for_Swift_String_100eac208);
    pvVar10 = local_80.bridgeObject;
    local_b8 = 0x22;
    uStack_b0 = 0xe100000000000000;
    local_c8 = 0x225c;
    puStack_c0 = &SUB_e200000000000000;
    *(undefined **)(in.unknown + -0x10) = CVar3.unknown;
    *(undefined **)(in.unknown + -8) = CVar3.unknown;
    *(undefined **)(in.unknown + -0x20) = puVar4;
    *(undefined **)(in.unknown + -0x18) = CVar3.unknown;
    SVar15 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                       (&local_b8,&local_c8,0,0,0,1,puVar4,puVar4);
    _swift_bridgeObjectRelease(pvVar10);
    local_b8 = 0x2a;
    uStack_b0 = 0xe100000000000000;
    local_c8 = 0x2a5c;
    puStack_c0 = &SUB_e200000000000000;
    local_80 = SVar15;
    *(undefined **)(in.unknown + -0x10) = CVar3.unknown;
    *(undefined **)(in.unknown + -8) = CVar3.unknown;
    *(undefined **)(in.unknown + -0x20) = puVar4;
    *(undefined **)(in.unknown + -0x18) = CVar3.unknown;
    SVar16 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                       (&local_b8,&local_c8,0,0,0,1,puVar4,puVar4);
    _swift_bridgeObjectRelease(SVar15.bridgeObject);
    local_b8 = 0x3f;
    uStack_b0 = 0xe100000000000000;
    local_c8 = 0x3f5c;
    puStack_c0 = &SUB_e200000000000000;
    local_80 = SVar16;
    *(undefined **)(in.unknown + -0x10) = CVar3.unknown;
    *(undefined **)(in.unknown + -8) = CVar3.unknown;
    *(undefined **)(in.unknown + -0x20) = puVar4;
    *(undefined **)(in.unknown + -0x18) = CVar3.unknown;
    pcVar9 = (char *)0x0;
    pvVar10 = (void *)0x0;
    SVar15 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                       (&local_b8,&local_c8,0,0,0,1,puVar4,puVar4);
    _swift_bridgeObjectRelease(pvVar11);
    _swift_bridgeObjectRelease(SVar16.bridgeObject);
    SVar21.bridgeObject = pvVar10;
    SVar21.str = pcVar9;
    Swift::String::append(SVar15,SVar21);
    _swift_bridgeObjectRelease(SVar15.bridgeObject);
    uVar7 = 0x646322;
    puVar8 = (undefined1 *)0xe300000000000000;
  }
  else {
    if (param_1 == 1) {
      local_a0 = 0;
      local_98 = (undefined *)0xe000000000000000;
      Swift::_StringGuts::grow(0x13,(_StringGuts)CVar2.unknown);
      _swift_bridgeObjectRelease(local_98);
      local_a0 = 0x7079546574736170;
      local_98 = (undefined *)0xee0022203d3d2065;
      goto LAB_1002f421c;
    }
    local_a0 = 0;
    local_98 = (undefined *)0xe000000000000000;
    Swift::_StringGuts::grow(0x11,(_StringGuts)CVar2.unknown);
    _swift_bridgeObjectRelease(local_98);
    local_a0 = 0x3d3d20656c746974;
    local_98 = (undefined *)0xeb000000002a2220;
LAB_1002f4040:
    puVar4 = PTR___type_metadata_for_Swift_String_100eac208;
    local_b8 = 0x5c;
    uStack_b0 = 0xe100000000000000;
    local_c8 = 0x5c5c;
    puStack_c0 = &SUB_e200000000000000;
    *(undefined **)(in.unknown + -0x10) = CVar3.unknown;
    *(undefined **)(in.unknown + -8) = CVar3.unknown;
    *(undefined **)(in.unknown + -0x18) = CVar3.unknown;
    *(undefined **)(in.unknown + -0x20) = PTR___type_metadata_for_Swift_String_100eac208;
    local_80 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                         (&local_b8,&local_c8,0,0,0,1,PTR___type_metadata_for_Swift_String_100eac208
                          ,PTR___type_metadata_for_Swift_String_100eac208);
    pvVar10 = local_80.bridgeObject;
    local_b8 = 0x22;
    uStack_b0 = 0xe100000000000000;
    local_c8 = 0x225c;
    puStack_c0 = &SUB_e200000000000000;
    *(undefined **)(in.unknown + -0x10) = CVar3.unknown;
    *(undefined **)(in.unknown + -8) = CVar3.unknown;
    *(undefined **)(in.unknown + -0x20) = puVar4;
    *(undefined **)(in.unknown + -0x18) = CVar3.unknown;
    SVar15 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                       (&local_b8,&local_c8,0,0,0,1,puVar4,puVar4);
    _swift_bridgeObjectRelease(pvVar10);
    local_b8 = 0x2a;
    uStack_b0 = 0xe100000000000000;
    local_c8 = 0x2a5c;
    puStack_c0 = &SUB_e200000000000000;
    local_80 = SVar15;
    *(undefined **)(in.unknown + -0x10) = CVar3.unknown;
    *(undefined **)(in.unknown + -8) = CVar3.unknown;
    *(undefined **)(in.unknown + -0x20) = puVar4;
    *(undefined **)(in.unknown + -0x18) = CVar3.unknown;
    SVar16 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                       (&local_b8,&local_c8,0,0,0,1,puVar4,puVar4);
    _swift_bridgeObjectRelease(SVar15.bridgeObject);
    local_b8 = 0x3f;
    uStack_b0 = 0xe100000000000000;
    local_c8 = 0x3f5c;
    puStack_c0 = &SUB_e200000000000000;
    local_80 = SVar16;
    *(undefined **)(in.unknown + -0x10) = CVar3.unknown;
    *(undefined **)(in.unknown + -8) = CVar3.unknown;
    *(undefined **)(in.unknown + -0x20) = puVar4;
    *(undefined **)(in.unknown + -0x18) = CVar3.unknown;
    pcVar9 = (char *)0x0;
    pvVar10 = (void *)0x0;
    SVar15 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                       (&local_b8,&local_c8,0,0,0,1,puVar4,puVar4);
    _swift_bridgeObjectRelease(pvVar11);
    _swift_bridgeObjectRelease(SVar16.bridgeObject);
    SVar20.bridgeObject = pvVar10;
    SVar20.str = pcVar9;
    Swift::String::append(SVar15,SVar20);
    _swift_bridgeObjectRelease(SVar15.bridgeObject);
    uVar7 = 0x6463222a;
    puVar8 = &DAT_e400000000000000;
  }
  SVar17.str = (char *)(ulong)uVar7;
  SVar17.bridgeObject = puVar8;
  SVar22.bridgeObject = pvVar10;
  SVar22.str = pcVar9;
  Swift::String::append(SVar17,SVar22);
LAB_1002f43c4:
  auVar18._8_8_ = local_98;
  auVar18._0_8_ = local_a0;
  return auVar18;
}



/* Address: 0x1002f45b0 | FUN_1002f45b0 */

String FUN_1002f45b0(char *param_1)

{
  char cVar1;
  char **ppcVar2;
  bool bVar3;
  byte bVar4;
  CharacterSet CVar5;
  CharacterSet CVar6;
  undefined *puVar7;
  char *pcVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  char *pcVar12;
  undefined *puVar13;
  uint uVar14;
  char *pcVar16;
  undefined1 *puVar17;
  long extraout_x8;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 *puVar21;
  code *pcVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  char *pcVar26;
  undefined8 uVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String separator;
  String SVar33;
  String separator_00;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  String SVar38;
  String SVar39;
  String SVar40;
  char *local_120;
  undefined *local_118;
  char *local_110;
  char *local_108;
  undefined1 *local_100;
  char *local_f8;
  code *local_f0;
  undefined8 local_e8;
  undefined1 *puStack_e0;
  undefined *local_d8;
  undefined8 uStack_d0;
  String local_c8;
  undefined *local_b8;
  long local_70;
  void *pvVar15;
  
  ppcVar2 = &local_120;
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_b8 = PTR___swiftEmptyArrayStorage_100eae0d8;
  local_f0 = *(code **)(param_1 + 0x10);
  puVar11 = PTR___swiftEmptyArrayStorage_100eae0d8;
  local_110 = param_1;
  if (local_f0 != (code *)0x0) {
    uVar20 = 0;
    param_1 = param_1 + 0x38;
    pcVar26 = (char *)-(long)local_f0;
    ppcVar2 = &local_120;
    local_120 = param_1;
    local_108 = pcVar26;
LAB_1002f4614:
    pcVar22 = (code *)uVar20;
    if (uVar20 <= local_f0) {
      pcVar22 = local_f0;
    }
    param_1 = param_1 + uVar20 * 0x20;
    uVar20 = uVar20 + 1;
    local_118 = puVar11;
    do {
      if (uVar20 - (long)pcVar22 == 1) {
                    /* WARNING: Does not return */
        pcVar22 = (code *)SoftwareBreakpoint(1,0x1002f4e70);
        (*pcVar22)();
      }
      if (*param_1 == '\x01') {
        puVar11 = *(undefined **)(param_1 + -0x10);
        local_f8 = *(char **)(param_1 + -8);
        uVar27 = *(undefined8 *)*(undefined1 (*) [16])(param_1 + -0x18);
        local_c8 = *(String *)(param_1 + -0x18);
        CVar5 = Foundation::CharacterSet::typeMetadataAccessor();
        lVar24 = *(long *)(CVar5.unknown + -8);
        local_100 = (undefined1 *)ppcVar2;
        (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar24 + 0x40));
        CVar6.unknown = puVar11;
        _swift_bridgeObjectRetain();
        Foundation::CharacterSet::get_whitespaces(CVar6);
        FUN_1002da77c();
        SVar28 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters
                           ((undefined *)
                            ((long)ppcVar2 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)));
        pvVar15 = SVar28.bridgeObject;
        (**(code **)(lVar24 + 8))
                  ((undefined *)((long)ppcVar2 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)),
                   CVar5.unknown);
        FUN_100008320(uVar27,puVar11,local_f8,1);
        ppcVar2 = (char **)local_100;
        puVar11 = local_118;
        uVar19 = (ulong)SVar28.str & 0xffffffffffff;
        if (((ulong)pvVar15 & 0x2000000000000000) != 0) {
          uVar19 = (ulong)pvVar15 >> 0x38 & 0xf;
        }
        if (uVar19 != 0) goto LAB_1002f4738;
        _swift_bridgeObjectRelease(pvVar15);
        pcVar26 = local_108;
      }
      uVar20 = uVar20 + 1;
      param_1 = param_1 + 0x20;
      puVar11 = local_118;
      if (pcVar26 + uVar20 == &DAT_00000001) break;
    } while( true );
  }
LAB_1002f47c8:
  puVar13 = PTR___type_metadata_for_Swift_String_100eac208;
  if (*(long *)(puVar11 + 0x10) == 0) {
    _swift_bridgeObjectRelease(puVar11);
    local_f8 = PTR___swiftEmptyArrayStorage_100eae0d8;
    goto LAB_1002f4c08;
  }
  local_c8.str = puVar11;
  pcVar26 = &DAT_100fbd080;
  FUN_1000037f0(&DAT_100fbd080,&DAT_100c3ecf0);
  pcVar8 = pcVar26;
  FUN_1002dd7b0();
  SVar28.bridgeObject = (void *)0xe100000000000000;
  SVar28.str = (char *)0x20;
  SVar28 = (extension_Swift)::Swift::BidirectionalCollection::_joined(SVar28);
  _swift_bridgeObjectRelease();
  local_d8 = (undefined *)0x5c;
  uStack_d0 = 0xe100000000000000;
  local_e8 = 0x5c5c;
  puStack_e0 = &SUB_e200000000000000;
  local_c8 = SVar28;
  FUN_1002da77c();
  *(undefined **)((long)ppcVar2 + -0x10) = puVar11;
  *(undefined **)((long)ppcVar2 + -8) = puVar11;
  *(undefined **)((long)ppcVar2 + -0x20) = puVar13;
  *(undefined **)((long)ppcVar2 + -0x18) = puVar11;
  local_c8 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                       (&local_d8,&local_e8,0,0,0,1,puVar13,puVar13);
  pvVar15 = local_c8.bridgeObject;
  local_d8 = (undefined *)0x22;
  uStack_d0 = 0xe100000000000000;
  local_e8 = 0x225c;
  puStack_e0 = &SUB_e200000000000000;
  *(undefined **)((long)ppcVar2 + -0x10) = puVar11;
  *(undefined **)((long)ppcVar2 + -8) = puVar11;
  *(undefined **)((long)ppcVar2 + -0x20) = puVar13;
  *(undefined **)((long)ppcVar2 + -0x18) = puVar11;
  SVar29 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                     (&local_d8,&local_e8,0,0,0,1,puVar13,puVar13);
  _swift_bridgeObjectRelease(pvVar15);
  local_d8 = (undefined *)0x2a;
  uStack_d0 = 0xe100000000000000;
  local_e8 = 0x2a5c;
  puStack_e0 = &SUB_e200000000000000;
  local_c8 = SVar29;
  *(undefined **)((long)ppcVar2 + -0x10) = puVar11;
  *(undefined **)((long)ppcVar2 + -8) = puVar11;
  *(undefined **)((long)ppcVar2 + -0x20) = puVar13;
  *(undefined **)((long)ppcVar2 + -0x18) = puVar11;
  SVar30 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                     (&local_d8,&local_e8,0,0,0,1,puVar13,puVar13);
  _swift_bridgeObjectRelease(SVar29.bridgeObject);
  local_d8 = (undefined *)0x3f;
  uStack_d0 = 0xe100000000000000;
  local_e8 = 0x3f5c;
  puStack_e0 = &SUB_e200000000000000;
  local_c8 = SVar30;
  *(undefined **)((long)ppcVar2 + -0x10) = puVar11;
  *(undefined **)((long)ppcVar2 + -8) = puVar11;
  *(undefined **)((long)ppcVar2 + -0x20) = puVar13;
  *(undefined **)((long)ppcVar2 + -0x18) = puVar11;
  puVar17 = (undefined1 *)0x0;
  SVar29 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                     (&local_d8,&local_e8,0,0,0,1,puVar13,puVar13);
  _swift_bridgeObjectRelease(SVar28.bridgeObject);
  _swift_bridgeObjectRelease(SVar30.bridgeObject);
  puVar9 = &DAT_100fbd038;
  FUN_1000037f0(&DAT_100fbd038,&DAT_100c3e1b0);
  _swift_initStackObject();
  *(undefined8 *)(puVar9 + 0x18) = 4;
  *(undefined8 *)(puVar9 + 0x10) = 2;
  *(undefined8 *)(puVar9 + 0x20) = 0x656c746974;
  *(undefined1 **)(puVar9 + 0x28) = &DAT_e500000000000000;
  *(undefined8 *)(puVar9 + 0x30) = 0x746e6f4374786574;
  *(undefined8 *)(puVar9 + 0x38) = 0xeb00000000746e65;
  bVar4 = Swift::_stdlib_isOSVersionAtLeast(0x1a,4,0);
  if ((bVar4 & 1) == 0) {
    lVar24 = *(long *)(puVar9 + 0x10);
    if (lVar24 != 0) goto LAB_1002f4a80;
    local_100 = puVar9;
    _swift_bridgeObjectRelease(SVar29.bridgeObject);
    puVar11 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    lVar24 = 3;
    puVar10 = &DAT_00000001;
    local_108 = pcVar8;
    local_f8 = pcVar26;
    FUN_1002daf0c(1,3,1);
    *(undefined8 *)(puVar10 + 0x10) = 3;
    *(undefined8 *)(puVar10 + 0x40) = 0xd000000000000012;
    *(undefined8 *)(puVar10 + 0x48) = 0x8000000100da1620;
    puVar17 = puVar9;
    puVar9 = puVar10;
    pcVar8 = local_108;
    pcVar26 = local_f8;
LAB_1002f4a80:
    local_f8 = pcVar26;
    local_108 = pcVar8;
    local_d8 = PTR___swiftEmptyArrayStorage_100eae0d8;
    pcVar26 = (char *)0x0;
    FUN_1002dd1f8(0,lVar24);
    puVar21 = (undefined8 *)(puVar9 + 0x28);
    local_100 = puVar9;
    do {
      puVar11 = local_d8;
      local_c8.str = (char *)puVar21[-1];
      uVar27 = *puVar21;
      local_c8.bridgeObject = (void *)uVar27;
      _swift_bridgeObjectRetain_n(uVar27,2);
      SVar30.bridgeObject = &DAT_e400000000000000;
      SVar30.str = (char *)0x22203d20;
      SVar34.bridgeObject = puVar17;
      SVar34.str = pcVar26;
      Swift::String::append(SVar30,SVar34);
      SVar35.bridgeObject = puVar17;
      SVar35.str = pcVar26;
      Swift::String::append(SVar29,SVar35);
      SVar31.bridgeObject = &DAT_e600000000000000;
      SVar31.str = (char *)0x74647763222a;
      SVar36.bridgeObject = puVar17;
      SVar36.str = pcVar26;
      Swift::String::append(SVar31,SVar36);
      _swift_bridgeObjectRelease(uVar27);
      pvVar15 = local_c8.bridgeObject;
      pcVar8 = local_c8.str;
      uVar20 = *(ulong *)(puVar11 + 0x10);
      local_d8 = puVar11;
      if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar20) {
        pcVar26 = &DAT_00000001;
        FUN_1002dd1f8(1 < *(ulong *)(puVar11 + 0x18),uVar20 + 1);
      }
      puVar11 = local_d8;
      puVar21 = puVar21 + 2;
      *(ulong *)(local_d8 + 0x10) = uVar20 + 1;
      *(char **)(local_d8 + uVar20 * 0x10 + 0x20) = pcVar8;
      *(void **)(local_d8 + uVar20 * 0x10 + 0x28) = pvVar15;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    _swift_bridgeObjectRelease(SVar29.bridgeObject);
    pcVar26 = local_f8;
    pcVar8 = local_108;
  }
  local_c8.bridgeObject = (void *)0xe100000000000000;
  local_c8.str = (char *)0x28;
  SVar29.bridgeObject = &DAT_e400000000000000;
  SVar29.str = (char *)0x207c7c20;
  local_d8 = puVar11;
  SVar28 = (extension_Swift)::Swift::BidirectionalCollection::_joined(SVar29);
  _swift_bridgeObjectRelease(puVar11);
  SVar37.bridgeObject = pcVar8;
  SVar37.str = pcVar26;
  Swift::String::append(SVar28,SVar37);
  _swift_bridgeObjectRelease(SVar28.bridgeObject);
  SVar32.bridgeObject = (void *)0xe100000000000000;
  SVar32.str = (char *)0x29;
  SVar38.bridgeObject = pcVar8;
  SVar38.str = pcVar26;
  Swift::String::append(SVar32,SVar38);
  pcVar26 = local_c8.str;
  pvVar15 = local_c8.bridgeObject;
  puVar11 = (undefined *)0x0;
  FUN_1002daf0c(0,1,1,PTR___swiftEmptyArrayStorage_100eae0d8);
  uVar20 = *(ulong *)(puVar11 + 0x10);
  local_f8 = puVar11;
  if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar20) {
    puVar13 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
    FUN_1002daf0c(puVar13,uVar20 + 1,1,puVar11);
    local_f8 = puVar13;
  }
  pcVar8 = local_f8;
  *(ulong *)(local_f8 + 0x10) = uVar20 + 1;
  *(char **)(local_f8 + uVar20 * 0x10 + 0x20) = pcVar26;
  *(void **)(local_f8 + uVar20 * 0x10 + 0x28) = pvVar15;
  _swift_bridgeObjectRelease(local_100);
  local_b8 = pcVar8;
LAB_1002f4c08:
  pcVar26 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1002e0d2c();
  pcVar22 = (code *)0x0;
  if (local_f0 != (code *)0x0) {
    pcVar8 = local_110 + 0x38;
    do {
      cVar1 = *pcVar8;
      if (cVar1 != '\x01') {
        puVar9 = *(undefined1 **)(pcVar8 + -0x18);
        pcVar12 = *(char **)(pcVar8 + -0x10);
        uVar27 = *(undefined8 *)(pcVar8 + -8);
        _swift_bridgeObjectRetain(uVar27);
        puVar17 = puVar9;
        pcVar16 = pcVar12;
        FUN_1002f3d94(puVar9,pcVar12,uVar27);
        if (pcVar16 != (char *)0x0) {
          uVar20 = 0;
          local_108 = pcVar16;
          local_100 = puVar17;
          FUN_100004550(pcVar22);
          puVar11 = pcVar26;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar14 = (uint)puVar11;
          local_c8.str = pcVar26;
          puVar17 = puVar9;
          FUN_1002f9310();
          uVar19 = (ulong)~(uint)uVar20 & 1;
          if (SCARRY8(*(long *)(pcVar26 + 0x10),uVar19)) {
                    /* WARNING: Does not return */
            pcVar22 = (code *)SoftwareBreakpoint(1,0x1002f4e74);
            (*pcVar22)();
          }
          local_110 = pcVar12;
          if (*(long *)(pcVar26 + 0x18) < (long)(*(long *)(pcVar26 + 0x10) + uVar19)) {
            FUN_1002f98fc();
            puVar17 = puVar9;
            FUN_1002f9310();
            if (((uint)uVar20 & 1) != (uVar14 & 1)) {
              Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
              pcVar22 = (code *)SoftwareBreakpoint(1,0x1002f50fc);
              (*pcVar22)();
            }
            pcVar26 = local_c8.str;
          }
          else if (((ulong)puVar11 & 1) == 0) {
            FUN_1002f9460();
            pcVar26 = local_c8.str;
          }
          else {
            pcVar26 = local_c8.str;
          }
          if ((uVar20 & 1) == 0) {
            *(ulong *)(pcVar26 + ((ulong)puVar17 >> 6) * 8 + 0x40) =
                 *(ulong *)(pcVar26 + ((ulong)puVar17 >> 6) * 8 + 0x40) |
                 1L << ((ulong)puVar17 & 0x3f);
            puVar17[*(long *)(pcVar26 + 0x30)] = (char)puVar9;
            *(undefined **)(*(long *)(pcVar26 + 0x38) + (long)puVar17 * 8) =
                 PTR___swiftEmptyArrayStorage_100eae0d8;
            if (SCARRY8(*(long *)(pcVar26 + 0x10),1)) {
                    /* WARNING: Does not return */
              pcVar22 = (code *)SoftwareBreakpoint(1,0x1002f50c8);
              (*pcVar22)();
            }
            *(long *)(pcVar26 + 0x10) = *(long *)(pcVar26 + 0x10) + 1;
          }
          lVar24 = *(long *)(pcVar26 + 0x38);
          uVar23 = *(ulong *)(lVar24 + (long)puVar17 * 8);
          uVar20 = uVar23;
          _swift_isUniquelyReferenced_nonNull_native();
          *(ulong *)(lVar24 + (long)puVar17 * 8) = uVar23;
          uVar19 = uVar23;
          if ((uVar20 & 1) == 0) {
            uVar19 = 0;
            FUN_1002daf0c(0,*(long *)(uVar23 + 0x10) + 1,1,uVar23);
            *(ulong *)(lVar24 + (long)puVar17 * 8) = uVar19;
          }
          uVar20 = *(ulong *)(uVar19 + 0x10);
          uVar23 = uVar19;
          if (*(ulong *)(uVar19 + 0x18) >> 1 <= uVar20) {
            uVar23 = (ulong)(1 < *(ulong *)(uVar19 + 0x18));
            FUN_1002daf0c(uVar23,uVar20 + 1,1,uVar19);
            *(ulong *)(lVar24 + (long)puVar17 * 8) = uVar23;
          }
          *(ulong *)(uVar23 + 0x10) = uVar20 + 1;
          lVar24 = uVar23 + uVar20 * 0x10;
          *(undefined1 **)(lVar24 + 0x20) = local_100;
          *(char **)(lVar24 + 0x28) = local_108;
          pcVar22 = FUN_1002f3d84;
          pcVar12 = local_110;
        }
        FUN_100008320(puVar9,pcVar12,uVar27,cVar1);
      }
      pcVar8 = pcVar8 + 0x20;
      local_f0 = (code *)((long)local_f0 - 1);
    } while (local_f0 != (code *)0x0);
  }
  uVar19 = 1L << ((ulong)(byte)pcVar26[0x20] & 0x3f);
  uVar20 = 0xffffffffffffffff;
  if ((pcVar26[0x20] & 0x3fU) < 6) {
    uVar20 = ~(-1L << (uVar19 & 0x3f));
  }
  uVar20 = uVar20 & *(ulong *)(pcVar26 + 0x40);
  local_f0 = pcVar22;
  _swift_bridgeObjectRetain(pcVar26);
  lVar24 = 0;
  do {
    while (uVar20 == 0) {
      bVar3 = SCARRY8(lVar24,1);
      lVar24 = lVar24 + 1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar22 = (code *)SoftwareBreakpoint(1,0x1002f50c4);
        (*pcVar22)();
      }
      if ((long)(uVar19 + 0x3f >> 6) <= lVar24) {
        _swift_release(pcVar26);
        FUN_1000037f0(&DAT_100fbd080,&DAT_100c3ecf0);
        FUN_1002dd7b0();
        separator_00.bridgeObject = &DAT_e400000000000000;
        separator_00.str = (char *)0x20262620;
        SVar28 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator_00);
        _swift_bridgeObjectRelease(local_f8);
        _swift_bridgeObjectRelease(pcVar26);
        FUN_100004550(local_f0,0);
        if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_70) {
                    /* WARNING: Subroutine does not return */
          ___stack_chk_fail();
        }
        return SVar28;
      }
      uVar20 = *(ulong *)((long)(pcVar26 + 0x40) + lVar24 * 8);
    }
    uVar23 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
    uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
    uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
    uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
    puVar11 = *(undefined **)
               (*(long *)(pcVar26 + 0x38) + LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) * 8 +
               lVar24 * 0x200);
    if (*(long *)(puVar11 + 0x10) == 1) {
      pcVar8 = *(char **)(puVar11 + 0x20);
      pvVar15 = *(void **)(puVar11 + 0x28);
      _swift_bridgeObjectRetain(pvVar15);
      pcVar12 = local_f8;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((ulong)pcVar12 & 1) == 0) {
        puVar11 = (undefined *)0x0;
        FUN_1002daf0c(0,*(long *)(local_f8 + 0x10) + 1,1);
        local_f8 = puVar11;
      }
      uVar23 = *(ulong *)(local_f8 + 0x10);
      uVar18 = *(ulong *)(local_f8 + 0x18);
      lVar25 = uVar23 + 1;
      if (uVar18 >> 1 <= uVar23) {
LAB_1002f4e74:
        puVar11 = (undefined *)(ulong)(1 < uVar18);
        FUN_1002daf0c(puVar11,lVar25,1,local_f8);
        local_f8 = puVar11;
      }
    }
    else {
      local_c8.bridgeObject = (void *)0xe100000000000000;
      local_c8.str = (char *)0x28;
      local_d8 = puVar11;
      _swift_bridgeObjectRetain(puVar11);
      pcVar8 = &DAT_100fbd080;
      FUN_1000037f0(&DAT_100fbd080,&DAT_100c3ecf0);
      pcVar12 = pcVar8;
      FUN_1002dd7b0();
      separator.bridgeObject = &DAT_e400000000000000;
      separator.str = (char *)0x207c7c20;
      SVar28 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator);
      _swift_bridgeObjectRelease(puVar11);
      SVar39.bridgeObject = pcVar12;
      SVar39.str = pcVar8;
      Swift::String::append(SVar28,SVar39);
      _swift_bridgeObjectRelease(SVar28.bridgeObject);
      SVar33.bridgeObject = (void *)0xe100000000000000;
      SVar33.str = (char *)0x29;
      SVar40.bridgeObject = pcVar12;
      SVar40.str = pcVar8;
      Swift::String::append(SVar33,SVar40);
      pcVar8 = local_c8.str;
      pvVar15 = local_c8.bridgeObject;
      pcVar12 = local_f8;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((ulong)pcVar12 & 1) == 0) {
        puVar11 = (undefined *)0x0;
        FUN_1002daf0c(0,*(long *)(local_f8 + 0x10) + 1,1);
        local_f8 = puVar11;
      }
      uVar23 = *(ulong *)(local_f8 + 0x10);
      uVar18 = *(ulong *)(local_f8 + 0x18);
      lVar25 = uVar23 + 1;
      if (uVar18 >> 1 <= uVar23) goto LAB_1002f4e74;
    }
    uVar20 = uVar20 - 1 & uVar20;
    *(long *)(local_f8 + 0x10) = lVar25;
    *(char **)(local_f8 + uVar23 * 0x10 + 0x20) = pcVar8;
    *(void **)(local_f8 + uVar23 * 0x10 + 0x28) = pvVar15;
    local_b8 = local_f8;
  } while( true );
LAB_1002f4738:
  puVar13 = local_118;
  _swift_isUniquelyReferenced_nonNull_native();
  puVar7 = puVar11;
  if (((ulong)puVar13 & 1) == 0) {
    puVar7 = (undefined *)0x0;
    FUN_1002daf0c(0,*(long *)(puVar11 + 0x10) + 1,1,puVar11);
  }
  pcVar26 = local_108;
  param_1 = local_120;
  uVar19 = *(ulong *)(puVar7 + 0x10);
  puVar11 = puVar7;
  if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar19) {
    puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
    FUN_1002daf0c(puVar11,uVar19 + 1,1,puVar7);
  }
  *(ulong *)(puVar11 + 0x10) = uVar19 + 1;
  *(String *)(puVar11 + uVar19 * 0x10 + 0x20) = SVar28;
  if (pcVar26 + uVar20 == (char *)0x0) goto LAB_1002f47c8;
  goto LAB_1002f4614;
}



/* Address: 0x1002f50fc | thunk_FUN_1002f5748 */

undefined * thunk_FUN_1002f5748(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  Locale LVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  long extraout_x8;
  uint uVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 auStack_b0 [2];
  undefined1 auStack_a0 [8];
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  puVar9 = &DAT_100fbd970;
  FUN_1000037f0(&DAT_100fbd970,&DAT_100c3ed18);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = -extraout_x8;
  puVar13 = auStack_a0 + lVar2;
  FUN_1002f5588(param_1,param_2);
  uStack_88 = *(ulong *)(param_1 + 0x10);
  if (uStack_88 == 0) {
LAB_1002f5958:
    _swift_bridgeObjectRelease(param_1);
    puVar9 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    uVar15 = 0;
    uVar11 = param_3 & 0xffffffffffff;
    if ((param_4 & 0x2000000000000000) != 0) {
      uVar11 = param_4 >> 0x38 & 0xf;
    }
    uStack_90 = uVar11 << 2;
    uVar12 = (uint)(param_3 >> 0x3b) & 1;
    if ((param_4 & 0x1000000000000000) == 0) {
      uVar12 = 1;
    }
    uStack_98 = 7;
    if (uVar12 == 0) {
      uStack_98 = 0xb;
    }
    uStack_98 = uStack_98 | uVar11 << 0x10;
    puVar14 = (undefined8 *)(param_1 + 0x28);
    puVar9 = PTR___swiftEmptyArrayStorage_100eae0d8;
    uVar11 = 0xf;
    uStack_70 = param_3;
    uStack_68 = param_4;
    do {
      if (*(ulong *)(param_1 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1002f599c);
        (*pcVar3)();
      }
      uStack_80 = puVar14[-1];
      uVar1 = *puVar14;
      uStack_78 = uVar1;
      if (uStack_90 < uVar11 >> 0xe) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1002f59a0);
        (*pcVar3)();
      }
      LVar4 = Foundation::Locale::typeMetadataAccessor();
      puVar5 = puVar13;
      (**(code **)(*(long *)(LVar4.unknown + -8) + 0x38))(puVar13,1,1,LVar4.unknown);
      FUN_1002da77c();
      _swift_bridgeObjectRetain(uVar1);
      *(undefined1 **)((long)auStack_b0 + lVar2) = puVar5;
      *(undefined1 **)((long)auStack_b0 + lVar2 + 8) = puVar5;
      puVar6 = &uStack_80;
      uVar10 = 0x401;
      (extension_Foundation)::Swift::StringProtocol::_range();
      FUN_1002f59b0(puVar13);
      _swift_bridgeObjectRelease(uVar1);
      if (((uint)uVar11 & 0xff) == 1) {
        _swift_bridgeObjectRelease(puVar9);
        goto LAB_1002f5958;
      }
      puVar7 = puVar9;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar8 = puVar9;
      if (((ulong)puVar7 & 1) == 0) {
        puVar8 = (undefined *)0x0;
        FUN_1002dadf0(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
      }
      uVar11 = *(ulong *)(puVar8 + 0x10);
      puVar9 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar11) {
        puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
        FUN_1002dadf0(puVar9,uVar11 + 1,1,puVar8);
      }
      uVar15 = uVar15 + 1;
      *(ulong *)(puVar9 + 0x10) = uVar11 + 1;
      *(undefined8 **)(puVar9 + uVar11 * 0x10 + 0x20) = puVar6;
      *(ulong *)(puVar9 + uVar11 * 0x10 + 0x28) = uVar10;
      puVar14 = puVar14 + 2;
      uVar11 = uVar10;
    } while (uStack_88 != uVar15);
    _swift_bridgeObjectRelease(param_1);
  }
  return puVar9;
}



/* Address: 0x1002f5100 | FUN_1002f5100 */

undefined1  [16] FUN_1002f5100(undefined8 param_1)

{
  undefined1 auVar1 [16];
  char *pcVar2;
  char *pcVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  
  FUN_1002f5588();
  pcVar2 = &DAT_100fbd080;
  FUN_1000037f0(&DAT_100fbd080,&DAT_100c3ecf0);
  pcVar3 = pcVar2;
  FUN_1002dd7b0();
  SVar4.bridgeObject = &SUB_e200000000000000;
  SVar4.str = (char *)0x2a2e;
  SVar4 = (extension_Swift)::Swift::BidirectionalCollection::_joined(SVar4);
  _swift_bridgeObjectRelease(param_1);
  SVar6.bridgeObject = pcVar3;
  SVar6.str = pcVar2;
  Swift::String::append(SVar4,SVar6);
  _swift_bridgeObjectRelease(SVar4.bridgeObject);
  _swift_bridgeObjectRetain(&SUB_e200000000000000);
  SVar5.bridgeObject = &SUB_e200000000000000;
  SVar5.str = (char *)0x2a2e;
  SVar7.bridgeObject = pcVar3;
  SVar7.str = pcVar2;
  Swift::String::append(SVar5,SVar7);
  _swift_bridgeObjectRelease(&SUB_e200000000000000);
  auVar1._8_8_ = &SUB_e200000000000000;
  auVar1._0_8_ = 0x2a2e;
  return auVar1;
}



/* Address: 0x1002f51d0 | FUN_1002f51d0 */

undefined * FUN_1002f51d0(long param_1,ulong param_2,char *param_3,void *param_4)

{
  code *pcVar1;
  bool bVar2;
  Index after;
  Substring SVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  Index IVar7;
  void *pvVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  Index IVar13;
  Character CVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  char *pcVar8;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1002f5520);
    (*pcVar1)();
  }
  uVar11 = (ulong)param_4 >> 0x38 & 0xf;
  uVar10 = (uint)((ulong)param_3 >> 0x20);
  if (param_1 != 0) {
    uVar12 = (ulong)param_3 & 0xffffffffffff;
    if (((ulong)param_4 & 0x2000000000000000) != 0) {
      uVar12 = uVar11;
    }
    if (uVar12 != 0) {
      uVar10 = uVar10 >> 0x1b & 1;
      if (((ulong)param_4 & 0x1000000000000000) == 0) {
        uVar10 = 1;
      }
      uVar11 = 7;
      if (uVar10 == 0) {
        uVar11 = 0xb;
      }
      SVar22.str = (char *)(uVar11 | uVar12 << 0x10);
      uVar12 = uVar12 * 4;
      IVar13.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0xf;
      puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
      while (uVar11 = (ulong)IVar13.cmsgPointer.unknown >> 0xe, uVar11 != uVar12) {
        while( true ) {
          SVar15.bridgeObject = param_4;
          SVar15.str = param_3;
          CVar14 = Swift::String::get_subscript(IVar13,SVar15);
          bVar2 = Swift::Character::get_isWhitespace(CVar14);
          _swift_bridgeObjectRelease(CVar14.bridgeObject);
          after.cmsgPointer.unknown = IVar13.cmsgPointer.unknown;
          while (!bVar2) {
            SVar16.bridgeObject = param_4;
            SVar16.str = param_3;
            after = Swift::String::index(after,SVar16);
            uVar11 = (ulong)after.cmsgPointer.unknown >> 0xe;
            if (uVar11 == uVar12) goto LAB_1002f53f8;
            SVar17.bridgeObject = param_4;
            SVar17.str = param_3;
            CVar14 = Swift::String::get_subscript(after,SVar17);
            bVar2 = Swift::Character::get_isWhitespace(CVar14);
            _swift_bridgeObjectRelease(CVar14.bridgeObject);
          }
          if (((ulong)IVar13.cmsgPointer.unknown >> 0xe != uVar11) || ((param_2 & 1) == 0)) break;
          SVar18.bridgeObject = param_4;
          SVar18.str = param_3;
          IVar13 = Swift::String::index(after,SVar18);
          uVar11 = (ulong)IVar13.cmsgPointer.unknown >> 0xe;
          if (uVar11 == uVar12) goto LAB_1002f53f8;
        }
        if (uVar11 < (ulong)IVar13.cmsgPointer.unknown >> 0xe) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1002f5588);
          (*pcVar1)();
        }
        SVar19.bridgeObject = param_3;
        SVar19.str = (char *)after.cmsgPointer.unknown;
        IVar7.cmsgPointer.unknown = after.cmsgPointer.unknown;
        pcVar8 = param_3;
        pvVar9 = param_4;
        SVar3 = Swift::String::get_subscript((Range<Index>)IVar13.cmsgPointer.unknown,SVar19);
        puVar4 = puVar6;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar5 = puVar6;
        if (((ulong)puVar4 & 1) == 0) {
          puVar5 = (undefined *)0x0;
          FUN_1002dabb0(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
        }
        uVar11 = *(ulong *)(puVar5 + 0x10);
        puVar6 = puVar5;
        if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar11) {
          puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
          FUN_1002dabb0(puVar6,uVar11 + 1,1,puVar5);
        }
        *(ulong *)(puVar6 + 0x10) = uVar11 + 1;
        *(undefined **)(puVar6 + uVar11 * 0x20 + 0x20) = SVar3.unknown;
        *(UnsafeMutablePointer *)(puVar6 + uVar11 * 0x20 + 0x28) = IVar7.cmsgPointer.unknown;
        *(char **)(puVar6 + uVar11 * 0x20 + 0x30) = pcVar8;
        *(void **)(puVar6 + uVar11 * 0x20 + 0x38) = pvVar9;
        SVar20.bridgeObject = param_4;
        SVar20.str = param_3;
        IVar13 = Swift::String::index(after,SVar20);
        if (*(long *)(puVar6 + 0x10) == param_1) break;
      }
LAB_1002f53f8:
      if (((ulong)IVar13.cmsgPointer.unknown >> 0xe != uVar12) || ((param_2 & 1) == 0)) {
        if ((ulong)IVar13.cmsgPointer.unknown >> 0xe <= uVar12) {
          SVar21.bridgeObject = param_3;
          SVar21.str = SVar22.str;
          pvVar9 = param_4;
          SVar3 = Swift::String::get_subscript((Range<Index>)IVar13.cmsgPointer.unknown,SVar21);
          _swift_bridgeObjectRelease(param_4);
          puVar4 = puVar6;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar5 = puVar6;
          if (((ulong)puVar4 & 1) == 0) {
            puVar5 = (undefined *)0x0;
            FUN_1002dabb0(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
          }
          uVar11 = *(ulong *)(puVar5 + 0x10);
          puVar6 = puVar5;
          if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar11) {
            puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
            FUN_1002dabb0(puVar6,uVar11 + 1,1,puVar5);
          }
          *(ulong *)(puVar6 + 0x10) = uVar11 + 1;
          *(undefined **)(puVar6 + uVar11 * 0x20 + 0x20) = SVar3.unknown;
          *(char **)(puVar6 + uVar11 * 0x20 + 0x28) = SVar22.str;
          *(char **)(puVar6 + uVar11 * 0x20 + 0x30) = param_3;
          *(void **)(puVar6 + uVar11 * 0x20 + 0x38) = pvVar9;
          return puVar6;
        }
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1002f5544);
        (*pcVar1)();
      }
      goto LAB_1002f54ec;
    }
  }
  uVar12 = (ulong)param_3 & 0xffffffffffff;
  if (((ulong)param_4 & 0x2000000000000000) != 0) {
    uVar12 = uVar11;
  }
  if ((uVar12 == 0) && ((param_2 & 1) != 0)) {
    _swift_bridgeObjectRelease(param_4);
    return PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  uVar10 = uVar10 >> 0x1b & 1;
  if (((ulong)param_4 & 0x1000000000000000) == 0) {
    uVar10 = 1;
  }
  uVar11 = 7;
  if (uVar10 == 0) {
    uVar11 = 0xb;
  }
  SVar22.str = (char *)(uVar11 | uVar12 << 0x10);
  SVar22.bridgeObject = param_3;
  pvVar9 = param_4;
  SVar3 = Swift::String::get_subscript((Range<Index>)0xf,SVar22);
  puVar4 = (undefined *)0x0;
  FUN_1002dabb0(0,1,1,PTR___swiftEmptyArrayStorage_100eae0d8);
  uVar11 = *(ulong *)(puVar4 + 0x10);
  puVar6 = puVar4;
  if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar11) {
    puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
    FUN_1002dabb0(puVar6,uVar11 + 1,1,puVar4);
  }
  *(ulong *)(puVar6 + 0x10) = uVar11 + 1;
  *(undefined **)(puVar6 + uVar11 * 0x20 + 0x20) = SVar3.unknown;
  *(char **)(puVar6 + uVar11 * 0x20 + 0x28) = SVar22.str;
  *(char **)(puVar6 + uVar11 * 0x20 + 0x30) = param_3;
  *(void **)(puVar6 + uVar11 * 0x20 + 0x38) = pvVar9;
LAB_1002f54ec:
  _swift_bridgeObjectRelease(param_4);
  return puVar6;
}



/* Address: 0x1002f5588 | FUN_1002f5588 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_1002f5588(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  NSString *pNVar4;
  void *pvVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  String SVar9;
  String SVar10;
  
  _swift_bridgeObjectRetain(param_2);
  lVar3 = 0x7fffffffffffffff;
  FUN_1002f51d0(0x7fffffffffffffff,1,param_1,param_2);
  puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar6 = *(long *)(lVar3 + 0x10);
  if (lVar6 == 0) {
    _swift_bridgeObjectRelease(lVar3);
    puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    FUN_1002dd1f8(0,lVar6,0);
    puVar8 = (undefined8 *)(lVar3 + 0x38);
    do {
      SVar9 = *(String *)(puVar8 + -3);
      pvVar2 = (void *)*puVar8;
      _swift_bridgeObjectRetain(pvVar2);
      pvVar5 = pvVar2;
      SVar9 = Swift::String::__fromSubstring(SVar9);
      pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(SVar9.bridgeObject);
      NSRegularExpression::escapedPatternForString_((ID)&_OBJC_CLASS___NSRegularExpression);
      SVar9 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      SVar10.bridgeObject = pvVar5;
      SVar10.str = (char *)pNVar4;
      Swift::String::append(SVar9,SVar10);
      _swift_bridgeObjectRelease(pvVar2);
      _swift_bridgeObjectRelease(SVar9.bridgeObject);
      uVar1 = *(ulong *)(puVar7 + 0x10);
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
        FUN_1002dd1f8(1 < *(ulong *)(puVar7 + 0x18),uVar1 + 1,1);
      }
      puVar8 = puVar8 + 4;
      *(ulong *)(puVar7 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puVar7 + uVar1 * 0x10 + 0x20) = 0x625c;
      *(undefined1 **)(puVar7 + uVar1 * 0x10 + 0x28) = &SUB_e200000000000000;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    _swift_bridgeObjectRelease(lVar3);
  }
  return puVar7;
}



/* Address: 0x1002f5748 | FUN_1002f5748 */

undefined * FUN_1002f5748(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  Locale LVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  long extraout_x8;
  uint uVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 auStack_b0 [2];
  undefined1 auStack_a0 [8];
  ulong local_98;
  ulong local_90;
  ulong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  ulong local_70;
  ulong uStack_68;
  
  puVar9 = &DAT_100fbd970;
  FUN_1000037f0(&DAT_100fbd970,&DAT_100c3ed18);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = -extraout_x8;
  puVar13 = auStack_a0 + lVar2;
  FUN_1002f5588(param_1,param_2);
  local_88 = *(ulong *)(param_1 + 0x10);
  if (local_88 == 0) {
LAB_1002f5958:
    _swift_bridgeObjectRelease(param_1);
    puVar9 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    uVar15 = 0;
    uVar11 = param_3 & 0xffffffffffff;
    if ((param_4 & 0x2000000000000000) != 0) {
      uVar11 = param_4 >> 0x38 & 0xf;
    }
    local_90 = uVar11 << 2;
    uVar12 = (uint)(param_3 >> 0x3b) & 1;
    if ((param_4 & 0x1000000000000000) == 0) {
      uVar12 = 1;
    }
    local_98 = 7;
    if (uVar12 == 0) {
      local_98 = 0xb;
    }
    local_98 = local_98 | uVar11 << 0x10;
    puVar14 = (undefined8 *)(param_1 + 0x28);
    puVar9 = PTR___swiftEmptyArrayStorage_100eae0d8;
    uVar11 = 0xf;
    local_70 = param_3;
    uStack_68 = param_4;
    do {
      if (*(ulong *)(param_1 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1002f599c);
        (*pcVar3)();
      }
      local_80 = puVar14[-1];
      uVar1 = *puVar14;
      uStack_78 = uVar1;
      if (local_90 < uVar11 >> 0xe) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1002f59a0);
        (*pcVar3)();
      }
      LVar4 = Foundation::Locale::typeMetadataAccessor();
      puVar5 = puVar13;
      (**(code **)(*(long *)(LVar4.unknown + -8) + 0x38))(puVar13,1,1,LVar4.unknown);
      FUN_1002da77c();
      _swift_bridgeObjectRetain(uVar1);
      *(undefined1 **)((long)auStack_b0 + lVar2) = puVar5;
      *(undefined1 **)((long)auStack_b0 + lVar2 + 8) = puVar5;
      puVar6 = &local_80;
      uVar10 = 0x401;
      (extension_Foundation)::Swift::StringProtocol::_range();
      FUN_1002f59b0(puVar13);
      _swift_bridgeObjectRelease(uVar1);
      if (((uint)uVar11 & 0xff) == 1) {
        _swift_bridgeObjectRelease(puVar9);
        goto LAB_1002f5958;
      }
      puVar7 = puVar9;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar8 = puVar9;
      if (((ulong)puVar7 & 1) == 0) {
        puVar8 = (undefined *)0x0;
        FUN_1002dadf0(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
      }
      uVar11 = *(ulong *)(puVar8 + 0x10);
      puVar9 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar11) {
        puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
        FUN_1002dadf0(puVar9,uVar11 + 1,1,puVar8);
      }
      uVar15 = uVar15 + 1;
      *(ulong *)(puVar9 + 0x10) = uVar11 + 1;
      *(undefined8 **)(puVar9 + uVar11 * 0x10 + 0x20) = puVar6;
      *(ulong *)(puVar9 + uVar11 * 0x10 + 0x28) = uVar10;
      puVar14 = puVar14 + 2;
      uVar11 = uVar10;
    } while (local_88 != uVar15);
    _swift_bridgeObjectRelease(param_1);
  }
  return puVar9;
}



/* Address: 0x1002f59a0 | FUN_1002f59a0 */

undefined1  [16] FUN_1002f59a0(void)

{
  return ZEXT816(0x100ec8e90);
}



/* Address: 0x1002f59b0 | FUN_1002f59b0 */

undefined8 FUN_1002f59b0(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fbd970;
  FUN_1000037f0(&DAT_100fbd970,&DAT_100c3ed18);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x1002f59f8 | _TtC11PasteSearch20FilterTextAttachment::initWithCoder: */

/* Function Stack Size: 0x18 bytes */

ID _TtC11PasteSearch20FilterTextAttachment::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  code *pcVar1;
  String SVar2;
  
  SVar2.bridgeObject = (void *)0x2;
  SVar2.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar2,(StaticString)0xd000000000000025,0x8000000100d8dc00,
             0xda1750);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1002f5a50);
  (*pcVar1)();
}



/* Address: 0x1002f5a50 | _TtC11PasteSearch20FilterTextAttachment::viewProviderForParentView:location:textContainer: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x28 bytes */

ID _TtC11PasteSearch20FilterTextAttachment::viewProviderForParentView_location_textContainer_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ID IVar1;
  ID self;
  
  _swift_unknownObjectRetain(param_4);
  IVar1 = objc_stub::textLayoutManager(param_5);
  self = 0;
  FUN_1002f5df8();
  _objc_allocWithZone();
  IVar1 = objc_stub::initWithTextAttachment_parentView_textLayoutManager_location_
                    (self,param_1,param_3,IVar1,param_4);
  _swift_unknownObjectRelease(param_4);
  return IVar1;
}



/* Address: 0x1002f5b14 | _TtC11PasteSearch20FilterTextAttachment::initWithData:ofType: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

ID _TtC11PasteSearch20FilterTextAttachment::initWithData_ofType_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  code *pcVar1;
  Data DVar2;
  
  if (param_3 != 0) {
    DVar2 = Foundation::Data::__unconditionallyBridgeFromObjectiveC((Data)param_3);
    FUN_10003bf2c(DVar2.unknown,param_2);
  }
  __swift_stdlib_reportUnimplementedInitializer
            ("PasteSearch.FilterTextAttachment",0x20,"init(data:ofType:)",0x12,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1002f5b94);
  (*pcVar1)();
}



/* Address: 0x1002f5b94 | _TtC11PasteSearch20FilterTextAttachment::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void _TtC11PasteSearch20FilterTextAttachment::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_release(*(undefined8 *)(param_1 + viewProvider + 8));
  return;
}



/* Address: 0x1002f5ba8 | FUN_1002f5ba8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1002f5ba8(void)

{
  return ZEXT816(0x100f978e0);
}



/* Address: 0x1002f5bc8 | _TtC11PasteSearchP33_0C06718F5CA6EF522CBD4C6C16546CFC32FilterTextAttachmentViewProvider::initWithTextAttachment:parentView:textLayoutManager:location: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x30 bytes */

ID _TtC11PasteSearchP33_0C06718F5CA6EF522CBD4C6C16546CFC32FilterTextAttachmentViewProvider::
   initWithTextAttachment_parentView_textLayoutManager_location_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6)

{
  class_t *pcVar1;
  ID self;
  objc_super local_50;
  
  pcVar1 = (class_t *)param_1;
  _swift_getObjectType();
  local_50.receiver = param_1;
  local_50.super_class = pcVar1;
  _swift_unknownObjectRetain(param_6);
  self = _objc_msgSendSuper2(&local_50,
                             "initWithTextAttachment:parentView:textLayoutManager:location:",param_3
                             ,param_4,param_5,param_6);
  objc_stub::setTracksTextAttachmentViewBounds_(self,1);
  _swift_unknownObjectRelease(param_6);
  return self;
}



/* Address: 0x1002f5c94 | FUN_1002f5c94 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1002f5c94(void)

{
  ID IVar1;
  ID IVar2;
  ID unaff_x20;
  
  IVar1 = objc_stub::textAttachment(unaff_x20);
  if (IVar1 != 0) {
    IVar2 = IVar1;
    FUN_1002f5ba8();
    _swift_dynamicCastClass(IVar1,IVar2);
    if (IVar1 != 0) {
      (**(code **)(IVar1 + _TtC11PasteSearch20FilterTextAttachment::viewProvider))();
      objc_stub::setView_(unaff_x20,IVar1);
      IVar1 = objc_stub::view(unaff_x20);
      if (IVar1 != 0) {
        objc_stub::setTranslatesAutoresizingMaskIntoConstraints_(IVar1,0);
      }
    }
    return 0;
  }
  return 0;
}



/* Address: 0x1002f5d4c | _TtC11PasteSearchP33_0C06718F5CA6EF522CBD4C6C16546CFC32FilterTextAttachmentViewProvider::loadView */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11PasteSearchP33_0C06718F5CA6EF522CBD4C6C16546CFC32FilterTextAttachmentViewProvider::
     loadView(ID param_1,SEL param_2)

{
  FUN_1002f5c94(param_1);
  return;
}



/* Address: 0x1002f5d74 | _TtC11PasteSearchP33_0C06718F5CA6EF522CBD4C6C16546CFC32FilterTextAttachmentViewProvider::attachmentBoundsForAttributes:location:textContainer:proposedLineFragment:position: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x58 bytes */

CGRect _TtC11PasteSearchP33_0C06718F5CA6EF522CBD4C6C16546CFC32FilterTextAttachmentViewProvider::
       attachmentBoundsForAttributes_location_textContainer_proposedLineFragment_position_
                 (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,CGRect param_6,
                 CGPoint param_7)

{
  undefined1 auVar1 [32];
  ID self;
  undefined8 extraout_d0;
  double in_d1;
  double dVar2;
  undefined8 uVar3;
  
  self = objc_stub::view(param_1);
  if (self == 0) {
    dVar2 = 0.0;
    uVar3 = 0;
    in_d1 = 0.0;
  }
  else {
    objc_stub::fittingSize(self);
    dVar2 = in_d1 * -0.25;
    uVar3 = extraout_d0;
  }
  auVar1._16_8_ = in_d1;
  auVar1._8_8_ = uVar3;
  auVar1._0_8_ = dVar2;
  auVar1._24_8_ = 0;
  return (CGRect)(auVar1 << 0x40);
}



/* Address: 0x1002f5df8 | FUN_1002f5df8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1002f5df8(void)

{
  return ZEXT816(0x100f979a0);
}



/* Address: 0x1002f5e18 | FUN_1002f5e18 */

void FUN_1002f5e18(ulong param_1,long param_2,long param_3,ulong param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_78 [24];
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  lVar8 = *(long *)(unaff_x20 + 0x30);
  _swift_bridgeObjectRetain(uVar5);
  uVar2 = param_1;
  FUN_1002de150(param_1,uVar5);
  _swift_bridgeObjectRelease(uVar5);
  if (((uVar2 & 1) == 0) || (param_2 != lVar4 || param_3 != lVar8)) {
    if ((param_4 & 1) == 0) {
      uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
      if (*(long *)(unaff_x20 + 0x40) == 0) {
        *(undefined8 *)(unaff_x20 + 0x40) = uVar5;
        *(undefined8 *)(unaff_x20 + 0x50) = *(undefined8 *)(unaff_x20 + 0x30);
        *(undefined8 *)(unaff_x20 + 0x48) = *(undefined8 *)(unaff_x20 + 0x28);
        _swift_bridgeObjectRetain(uVar5);
      }
      *(ulong *)(unaff_x20 + 0x20) = param_1;
      *(long *)(unaff_x20 + 0x28) = param_2;
      *(long *)(unaff_x20 + 0x30) = param_3;
      _swift_bridgeObjectRetain(param_1);
      _swift_bridgeObjectRelease(uVar5);
      FUN_1002f60fc();
    }
    else {
      FUN_1002f5fe8();
      uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
      uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
      uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
      _swift_beginAccess(unaff_x20 + 0x10,auStack_78,0x21,0);
      uVar6 = *(ulong *)(unaff_x20 + 0x10);
      _swift_bridgeObjectRetain(uVar5);
      uVar2 = uVar6;
      _swift_isUniquelyReferenced_nonNull_native();
      *(ulong *)(unaff_x20 + 0x10) = uVar6;
      uVar3 = uVar6;
      if ((uVar2 & 1) == 0) {
        uVar3 = 0;
        FUN_1002db298(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
        *(ulong *)(unaff_x20 + 0x10) = uVar3;
      }
      uVar2 = *(ulong *)(uVar3 + 0x10);
      uVar6 = uVar3;
      if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
        uVar6 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
        FUN_1002db298(uVar6,uVar2 + 1,1,uVar3);
      }
      *(ulong *)(uVar6 + 0x10) = uVar2 + 1;
      lVar4 = uVar6 + uVar2 * 0x18;
      *(undefined8 *)(lVar4 + 0x20) = uVar5;
      *(undefined8 *)(lVar4 + 0x28) = uVar1;
      *(undefined8 *)(lVar4 + 0x30) = uVar7;
      *(ulong *)(unaff_x20 + 0x10) = uVar6;
      _swift_endAccess(auStack_78);
      uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
      *(ulong *)(unaff_x20 + 0x20) = param_1;
      *(long *)(unaff_x20 + 0x28) = param_2;
      *(long *)(unaff_x20 + 0x30) = param_3;
      _swift_bridgeObjectRetain(param_1);
      _swift_bridgeObjectRelease(uVar5);
    }
    _swift_beginAccess(unaff_x20 + 0x18,auStack_78,1,0);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
    *(undefined **)(unaff_x20 + 0x18) = PTR___swiftEmptyArrayStorage_100eae0d8;
    _swift_bridgeObjectRelease(uVar5);
  }
  return;
}



/* Address: 0x1002f5fe8 | FUN_1002f5fe8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002f5fe8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  ulong uVar7;
  long *plVar8;
  undefined1 auStack_68 [24];
  
  if (*(ID *)(unaff_x20 + 0x38) != 0) {
    objc_stub::invalidate(*(ID *)(unaff_x20 + 0x38));
  }
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  plVar8 = (long *)(unaff_x20 + 0x40);
  lVar6 = *plVar8;
  if (lVar6 != 0) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
    _swift_beginAccess(unaff_x20 + 0x10,auStack_68,0x21,0);
    uVar7 = *(ulong *)(unaff_x20 + 0x10);
    _swift_bridgeObjectRetain(lVar6);
    uVar3 = uVar7;
    _swift_isUniquelyReferenced_nonNull_native();
    *(ulong *)(unaff_x20 + 0x10) = uVar7;
    uVar4 = uVar7;
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
      FUN_1002db298(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
      *(ulong *)(unaff_x20 + 0x10) = uVar4;
    }
    uVar3 = *(ulong *)(uVar4 + 0x10);
    uVar7 = uVar4;
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar3) {
      uVar7 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      FUN_1002db298(uVar7,uVar3 + 1,1,uVar4);
    }
    *(ulong *)(uVar7 + 0x10) = uVar3 + 1;
    lVar5 = uVar7 + uVar3 * 0x18;
    *(long *)(lVar5 + 0x20) = lVar6;
    *(undefined8 *)(lVar5 + 0x28) = uVar1;
    *(undefined8 *)(lVar5 + 0x30) = uVar2;
    *(ulong *)(unaff_x20 + 0x10) = uVar7;
    _swift_endAccess(auStack_68);
    lVar6 = *plVar8;
    *(undefined8 *)(unaff_x20 + 0x48) = 0;
    *(undefined8 *)(unaff_x20 + 0x50) = 0;
    *plVar8 = 0;
    _swift_bridgeObjectRelease(lVar6);
  }
  return;
}



/* Address: 0x1002f60fc | FUN_1002f60fc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1002f60fc(void)

{
  undefined *puVar1;
  void *aBlock;
  ID IVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined *local_70;
  undefined8 local_68;
  code *local_60;
  undefined *puStack_58;
  code *local_50;
  undefined *local_48;
  
  if (*(ID *)(unaff_x20 + 0x38) != 0) {
    objc_stub::invalidate(*(ID *)(unaff_x20 + 0x38));
  }
  uVar3 = *(undefined8 *)(unaff_x20 + 0x58);
  puVar1 = &DAT_100ec8fa8;
  _swift_allocObject(&DAT_100ec8fa8,0x18,7);
  _swift_weakInit(puVar1 + 0x10);
  local_50 = FUN_1002f6f0c;
  local_70 = PTR___NSConcreteStackBlock_100ea82a0;
  local_68 = 0x42000000;
  local_60 = FUN_100136224;
  puStack_58 = &DAT_100ec8fc0;
  local_48 = puVar1;
  aBlock = __Block_copy(&local_70);
  _swift_release(local_48);
  IVar2 = NSTimer::scheduledTimerWithTimeInterval_repeats_block_
                    ((ID)&_OBJC_CLASS___NSTimer,uVar3,0,aBlock);
  __Block_release(aBlock);
  *(ID *)(unaff_x20 + 0x38) = IVar2;
  return 0;
}



/* Address: 0x1002f61f0 | FUN_1002f61f0 */

long FUN_1002f61f0(void)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x20;
  ulong uVar9;
  undefined8 uVar10;
  undefined1 auStack_78 [24];
  
  FUN_1002f5fe8();
  lVar2 = unaff_x20 + 0x10;
  puVar6 = auStack_78;
  uVar7 = 0x21;
  _swift_beginAccess();
  FUN_1002f633c();
  _swift_endAccess(auStack_78);
  if (lVar2 != 0) {
    uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
    uVar10 = *(undefined8 *)(unaff_x20 + 0x30);
    _swift_beginAccess(unaff_x20 + 0x18,auStack_78,0x21,0);
    uVar9 = *(ulong *)(unaff_x20 + 0x18);
    _swift_bridgeObjectRetain(lVar2);
    _swift_bridgeObjectRetain(uVar4);
    uVar3 = uVar9;
    _swift_isUniquelyReferenced_nonNull_native();
    *(ulong *)(unaff_x20 + 0x18) = uVar9;
    uVar5 = uVar9;
    if ((uVar3 & 1) == 0) {
      uVar5 = 0;
      FUN_1002db298(0,*(long *)(uVar9 + 0x10) + 1,1,uVar9);
      *(ulong *)(unaff_x20 + 0x18) = uVar5;
    }
    uVar3 = *(ulong *)(uVar5 + 0x10);
    uVar9 = uVar5;
    if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar3) {
      uVar9 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
      FUN_1002db298(uVar9,uVar3 + 1,1,uVar5);
    }
    *(ulong *)(uVar9 + 0x10) = uVar3 + 1;
    lVar8 = uVar9 + uVar3 * 0x18;
    *(undefined8 *)(lVar8 + 0x20) = uVar4;
    *(undefined8 *)(lVar8 + 0x28) = uVar1;
    *(undefined8 *)(lVar8 + 0x30) = uVar10;
    *(ulong *)(unaff_x20 + 0x18) = uVar9;
    _swift_endAccess(auStack_78);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
    *(long *)(unaff_x20 + 0x20) = lVar2;
    *(undefined1 **)(unaff_x20 + 0x28) = puVar6;
    *(undefined8 *)(unaff_x20 + 0x30) = uVar7;
    _swift_bridgeObjectRelease(uVar4);
  }
  return lVar2;
}



/* Address: 0x1002f633c | FUN_1002f633c */

undefined8 FUN_1002f633c(void)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong *unaff_x20;
  
  uVar5 = *unaff_x20;
  if (*(long *)(uVar5 + 0x10) == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = uVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar2 & 1) == 0) {
      FUN_1002dd714();
      lVar4 = *(long *)(uVar5 + 0x10);
    }
    else {
      lVar4 = *(long *)(uVar5 + 0x10);
    }
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1002f63b8);
      (*pcVar1)();
    }
    uVar3 = *(undefined8 *)(uVar5 + lVar4 * 0x18 + 8);
    *(long *)(uVar5 + 0x10) = lVar4 + -1;
    *unaff_x20 = uVar5;
  }
  return uVar3;
}



/* Address: 0x1002f63b8 | FUN_1002f63b8 */

undefined8 FUN_1002f63b8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(unaff_x20 + 0x18,auStack_78,0x21,0);
  uVar10 = *(ulong *)(unaff_x20 + 0x18);
  if (*(long *)(uVar10 + 0x10) == 0) {
    _swift_endAccess(auStack_78);
    uVar8 = 0;
  }
  else {
    uVar5 = uVar10;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar5 & 1) == 0) {
      FUN_1002dd714();
      lVar6 = *(long *)(uVar10 + 0x10);
    }
    else {
      lVar6 = *(long *)(uVar10 + 0x10);
    }
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1002f650c);
      (*pcVar3)();
    }
    lVar7 = uVar10 + lVar6 * 0x18;
    uVar8 = *(undefined8 *)(lVar7 + 8);
    uVar1 = *(undefined8 *)(lVar7 + 0x10);
    uVar9 = *(undefined8 *)(lVar7 + 0x18);
    *(long *)(uVar10 + 0x10) = lVar6 + -1;
    *(ulong *)(unaff_x20 + 0x18) = uVar10;
    _swift_endAccess(auStack_78);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
    uVar12 = *(undefined8 *)(unaff_x20 + 0x30);
    _swift_beginAccess(unaff_x20 + 0x10,auStack_78,0x21,0);
    uVar11 = *(ulong *)(unaff_x20 + 0x10);
    _swift_bridgeObjectRetain(uVar8);
    _swift_bridgeObjectRetain(uVar4);
    uVar10 = uVar11;
    _swift_isUniquelyReferenced_nonNull_native();
    *(ulong *)(unaff_x20 + 0x10) = uVar11;
    uVar5 = uVar11;
    if ((uVar10 & 1) == 0) {
      uVar5 = 0;
      FUN_1002db298(0,*(long *)(uVar11 + 0x10) + 1,1,uVar11);
      *(ulong *)(unaff_x20 + 0x10) = uVar5;
    }
    uVar10 = *(ulong *)(uVar5 + 0x10);
    uVar11 = uVar5;
    if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar10) {
      uVar11 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
      FUN_1002db298(uVar11,uVar10 + 1,1,uVar5);
    }
    *(ulong *)(uVar11 + 0x10) = uVar10 + 1;
    lVar6 = uVar11 + uVar10 * 0x18;
    *(undefined8 *)(lVar6 + 0x20) = uVar4;
    *(undefined8 *)(lVar6 + 0x28) = uVar2;
    *(undefined8 *)(lVar6 + 0x30) = uVar12;
    *(ulong *)(unaff_x20 + 0x10) = uVar11;
    _swift_endAccess(auStack_78);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
    *(undefined8 *)(unaff_x20 + 0x20) = uVar8;
    *(undefined8 *)(unaff_x20 + 0x28) = uVar1;
    *(undefined8 *)(unaff_x20 + 0x30) = uVar9;
    _swift_bridgeObjectRelease(uVar4);
  }
  return uVar8;
}



/* Address: 0x1002f6550 | FUN_1002f6550 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002f6550(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_38,1,0);
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined **)(unaff_x20 + 0x10) = PTR___swiftEmptyArrayStorage_100eae0d8;
  _swift_bridgeObjectRelease(uVar2);
  _swift_beginAccess(unaff_x20 + 0x18,auStack_50,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  _swift_bridgeObjectRelease(uVar2);
  if (*(ID *)(unaff_x20 + 0x38) != 0) {
    objc_stub::invalidate(*(ID *)(unaff_x20 + 0x38));
  }
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Address: 0x1002f65e0 | FUN_1002f65e0 */

void FUN_1002f65e0(undefined8 param_1,MainActor *param_2)

{
  undefined *puVar1;
  TaskPriority TVar2;
  MainActor *pMVar3;
  MainActor *pMVar4;
  long extraout_x8;
  
  puVar1 = &DAT_100fbd5a0;
  FUN_1000037f0(&DAT_100fbd5a0,&DAT_100c3de10);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  TVar2 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar2.unknown + -8) + 0x38))
            (&stack0xffffffffffffffd0 + -extraout_x8,1,1,TVar2.unknown);
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  pMVar4 = param_2;
  _swift_retain();
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar4);
  pMVar4 = pMVar3;
  FUN_1002f6cd0();
  puVar1 = &DAT_100ec8ff8;
  _swift_allocObject(&DAT_100ec8ff8,0x28,7);
  *(MainActor **)(puVar1 + 0x10) = pMVar3;
  *(MainActor **)(puVar1 + 0x18) = pMVar4;
  *(MainActor **)(puVar1 + 0x20) = param_2;
  FUN_1002d6558(0,0,&stack0xffffffffffffffd0 + -extraout_x8,&DAT_100c3ee00,puVar1);
  _swift_release();
  return;
}



/* Address: 0x1002f66c8 | FUN_1002f66c8 */

void FUN_1002f66c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  MainActor *pMVar1;
  UnownedSerialExecutor UVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_4;
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar1 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  *(MainActor **)(unaff_x22 + 0x20) = pMVar1;
  FUN_1002f6cd0();
  UVar2 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_1002f6734,UVar2.unknown,pMVar1);
  return;
}



/* Address: 0x1002f6734 | FUN_1002f6734 */

void FUN_1002f6734(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x18);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x20));
  lVar1 = lVar1 + 0x10;
  _swift_weakLoadStrong();
  if (lVar1 != 0) {
    FUN_1002f5fe8();
    _swift_release(lVar1);
  }
  *(bool *)*(undefined8 *)(unaff_x22 + 0x10) = lVar1 == 0;
                    /* WARNING: Could not recover jumptable at 0x0001002f6790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1002f6794 | FUN_1002f6794 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002f6794(void)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  long unaff_x20;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1002f6cd0();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteSearch/SearchInputCoordinator.UndoManager.swift",0x34,1,0x52,UVar3.unknown,
               pMVar1);
  }
  if (*(ID *)(unaff_x20 + 0x38) != 0) {
    objc_stub::invalidate(*(ID *)(unaff_x20 + 0x38));
  }
  _swift_release(pMVar2);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Address: 0x1002f6850 | FUN_1002f6850 */

void FUN_1002f6850(undefined8 param_1)

{
  FUN_1002f6794();
  _swift_deallocClassInstance(param_1,0x60,7);
  return;
}



/* Address: 0x1002f687c | FUN_1002f687c */

void FUN_1002f687c(void)

{
  byte bVar1;
  __uint8 _Var2;
  int iVar3;
  MainActor *pMVar4;
  MainActor *pMVar5;
  undefined *puVar6;
  TaskPriority TVar7;
  MainActor *pMVar8;
  TaskPriority TVar9;
  UnownedSerialExecutor UVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 unaff_x20;
  undefined1 *puVar14;
  undefined1 *puVar15;
  MainActor *pMVar16;
  long lVar17;
  undefined1 auStack_a0 [8];
  undefined1 *local_98;
  undefined1 *local_90;
  MainActor *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_70;
  MainActor *pMStack_68;
  
  pMVar4 = Swift::MainActor::typeMetadataAccessor();
  pMVar5 = Swift::MainActor::get_shared(pMVar4,pMVar4);
  pMVar16 = pMVar5;
  FUN_1002f6cd0();
  Swift::Actor::get_unownedExecutor();
  _swift_release(pMVar5);
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,4,0,0x12,4,0);
  if ((bVar1 & 1) == 0) {
    iVar3 = _pthread_main_np();
    if (iVar3 == 1) {
      FUN_1002f6794();
      _swift_deallocClassInstance();
      return;
    }
    pMVar5 = (MainActor *)&DAT_100ec8f30;
    _swift_allocObject(&DAT_100ec8f30,0x18,7);
    *(undefined8 *)(pMVar5 + 0x10) = unaff_x20;
    puVar6 = &DAT_100fbd5a0;
    FUN_1000037f0(&DAT_100fbd5a0,&DAT_100c3de10);
    lVar17 = *(long *)(*(long *)(puVar6 + -8) + 0x40);
    local_90 = auStack_a0;
    (*(code *)PTR____chkstk_darwin_100ea82c0)();
    uVar13 = lVar17 + 0xfU & 0xfffffffffffffff0;
    puVar15 = auStack_a0 + -uVar13;
    TVar7 = Swift::TaskPriority::typeMetadataAccessor();
    lVar17 = *(long *)(TVar7.unknown + -8);
    (**(code **)(lVar17 + 0x38))(puVar15,1,1,TVar7.unknown);
    pMVar8 = pMVar5;
    _swift_retain();
    pMVar4 = Swift::MainActor::get_shared(pMVar4,pMVar8);
    puVar6 = &DAT_100ec8f58;
    _swift_allocObject(&DAT_100ec8f58,0x30,7);
    *(MainActor **)(puVar6 + 0x10) = pMVar4;
    *(MainActor **)(puVar6 + 0x18) = pMVar16;
    *(code **)(puVar6 + 0x20) = FUN_1002f6850;
    *(MainActor **)(puVar6 + 0x28) = pMVar5;
    local_98 = puVar15;
    local_88 = pMVar5;
    (*(code *)PTR____chkstk_darwin_100ea82c0)();
    puVar14 = puVar15 + -uVar13;
    FUN_1002d6c5c(puVar15,puVar14);
    TVar9.unknown = puVar14;
    (**(code **)(lVar17 + 0x30))(puVar14,1,TVar7.unknown);
    if ((int)TVar9.unknown == 1) {
      FUN_1002d6cac(puVar14);
      uVar13 = 0x1000;
    }
    else {
      _Var2 = Swift::TaskPriority::get_rawValue(TVar9);
      (**(code **)(lVar17 + 8))(puVar14,TVar7.unknown);
      uVar13 = (ulong)_Var2 | 0x1000;
    }
    if (pMVar4 == (MainActor *)0x0) {
      UVar10.unknown = (undefined *)0x0;
      pMVar16 = (MainActor *)0x0;
    }
    else {
      _swift_getObjectType(pMVar4);
      _swift_unknownObjectRetain(pMVar4);
      UVar10 = Swift::Actor::get_unownedExecutor();
      _swift_unknownObjectRelease(pMVar4);
    }
    puVar11 = &DAT_100ec8f80;
    _swift_allocObject(&DAT_100ec8f80,0x20,7);
    *(undefined **)(puVar11 + 0x10) = &DAT_100c3ede0;
    *(undefined **)(puVar11 + 0x18) = puVar6;
    if (pMVar16 == (MainActor *)0x0 && UVar10.unknown == (undefined *)0x0) {
      puVar12 = (undefined8 *)0x0;
    }
    else {
      local_80 = 0;
      uStack_78 = 0;
      puVar12 = &local_80;
      local_70 = UVar10.unknown;
      pMStack_68 = pMVar16;
    }
    _swift_task_create(uVar13,puVar12,PTR___type_metadata_for____100eae0c8 + 8,&DAT_100c3edf0,
                       puVar11);
    _swift_release();
    FUN_1002d6cac(puVar15);
    _swift_release(local_88);
  }
  else {
    _swift_task_deinitOnExecutor();
  }
  return;
}



/* Address: 0x1002f6b8c | FUN_1002f6b8c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1002f6b8c(void)

{
  return ZEXT816(0x100fbda10);
}



/* Address: 0x1002f6bac | FUN_1002f6bac */

undefined8 * FUN_1002f6bac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Address: 0x1002f6be0 | FUN_1002f6be0 */

undefined8 * FUN_1002f6be0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  return param_1;
}



/* Address: 0x1002f6c34 | FUN_1002f6c34 */

undefined8 * FUN_1002f6c34(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  return param_1;
}



/* Address: 0x1002f6c70 | FUN_1002f6c70 */

undefined1  [16] FUN_1002f6c70(void)

{
  return ZEXT816(0x100ec8f08);
}



/* Address: 0x1002f6c80 | FUN_1002f6c80 */

bool FUN_1002f6c80(ulong *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar3 = *param_1;
  uVar1 = param_1[1];
  uVar4 = param_1[2];
  uVar2 = param_2[1];
  uVar5 = param_2[2];
  FUN_1002de150(uVar3,*param_2);
  return (uVar3 & 1) != 0 && (uVar1 == uVar2 && uVar4 == uVar5);
}



/* Address: 0x1002f6cd0 | FUN_1002f6cd0 */

void FUN_1002f6cd0(void)

{
  MainActor *pMVar1;
  undefined *puVar2;
  
  if (DAT_100fbda98 != (undefined *)0x0) {
    return;
  }
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  puVar2 = PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18;
  _swift_getWitnessTable(PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18,pMVar1);
  DAT_100fbda98 = puVar2;
  return;
}



/* Address: 0x1002f6d14 | FUN_1002f6d14 */

void FUN_1002f6d14(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x1002f6d38 | FUN_1002f6d38 */

void FUN_1002f6d38(void)

{
  MainActor *pMVar1;
  UnownedSerialExecutor UVar2;
  undefined8 in_x3;
  undefined8 in_x4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = in_x3;
  *(undefined8 *)(unaff_x22 + 0x18) = in_x4;
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar1 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  *(MainActor **)(unaff_x22 + 0x20) = pMVar1;
  FUN_1002f6cd0();
  UVar2 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_1001f1a6c,UVar2.unknown,pMVar1);
  return;
}



/* Address: 0x1002f6da4 | FUN_1002f6da4 */

void FUN_1002f6da4(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x1002f6dd0 | FUN_1002f6dd0 */

void FUN_1002f6dd0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)thunk_FUN_100008284;
  FUN_1002f6d38(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Address: 0x1002f6e54 | FUN_1002f6e54 */

void FUN_1002f6e54(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1002f6e78 | FUN_1002f6e78 */

void FUN_1002f6e78(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100008284;
  FUN_10007493c(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Address: 0x1002f6ee8 | FUN_1002f6ee8 */

void FUN_1002f6ee8(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x1002f6f0c | FUN_1002f6f0c */

void FUN_1002f6f0c(void)

{
  FUN_1002f65e0();
  return;
}



/* Address: 0x1002f6f14 | FUN_1002f6f14 */

void FUN_1002f6f14(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  _swift_retain(uVar1);
  return;
}



/* Address: 0x1002f6f28 | FUN_1002f6f28 */

void FUN_1002f6f28(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x1002f6f30 | FUN_1002f6f30 */

void FUN_1002f6f30(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x1002f6f5c | FUN_1002f6f5c */

void FUN_1002f6f5c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar3 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100008284;
  FUN_1002f66c8(plVar3,param_1,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x1002f6fc8 | thunk_FUN_1002f6bac */

void thunk_FUN_1002f6bac(void)

{
  FUN_1002f6bac();
  return;
}



/* Address: 0x1002f6fcc | FUN_1002f6fcc */

undefined1  [16] FUN_1002f6fcc(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x18);
  _swift_retain(*(undefined8 *)(unaff_x20 + 0x20));
  return auVar1;
}



/* Address: 0x1002f6ff8 | FUN_1002f6ff8 */

undefined1  [16] FUN_1002f6ff8(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x28);
  _swift_retain(*(undefined8 *)(unaff_x20 + 0x30));
  return auVar1;
}



/* Address: 0x1002f7024 | FUN_1002f7024 */

undefined1  [16] FUN_1002f7024(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x38);
  _swift_retain(*(undefined8 *)(unaff_x20 + 0x40));
  return auVar1;
}



/* Address: 0x1002f7050 | FUN_1002f7050 */

undefined1  [16] FUN_1002f7050(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x48);
  _swift_retain(*(undefined8 *)(unaff_x20 + 0x50));
  return auVar1;
}



/* Address: 0x1002f707c | FUN_1002f707c */

undefined1  [16] FUN_1002f707c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x58);
  _swift_retain(*(undefined8 *)(unaff_x20 + 0x60));
  return auVar1;
}



/* Address: 0x1002f70a8 | FUN_1002f70a8 */

long FUN_1002f70a8(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  lVar3 = *(long *)(unaff_x20 + 0x68);
  lVar4 = lVar3;
  if (lVar3 == 0) {
    uVar5 = *(undefined8 *)(unaff_x20 + 0x78);
    if (DAT_100fbd0a0 != -1) {
      _swift_once(&DAT_100fbd0a0,FUN_1002ddf4c);
    }
    uVar2 = DAT_101057918;
    lVar4 = 0;
    FUN_1002f6b8c();
    _swift_allocObject();
    puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
    *(undefined **)(lVar4 + 0x10) = PTR___swiftEmptyArrayStorage_100eae0d8;
    *(undefined **)(lVar4 + 0x18) = puVar1;
    *(undefined8 *)(lVar4 + 0x40) = 0;
    *(undefined8 *)(lVar4 + 0x38) = 0;
    *(undefined8 *)(lVar4 + 0x50) = 0;
    *(undefined8 *)(lVar4 + 0x48) = 0;
    *(undefined8 *)(lVar4 + 0x28) = 0;
    *(undefined8 *)(lVar4 + 0x30) = 0;
    *(undefined8 *)(lVar4 + 0x20) = uVar2;
    *(undefined8 *)(lVar4 + 0x58) = uVar5;
    uVar5 = *(undefined8 *)(unaff_x20 + 0x68);
    *(long *)(unaff_x20 + 0x68) = lVar4;
    _swift_bridgeObjectRetain(uVar2);
    _swift_retain(lVar4);
    _swift_release(uVar5);
    lVar3 = 0;
  }
  _swift_retain(lVar3);
  return lVar4;
}


