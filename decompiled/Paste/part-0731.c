/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1007fcc48 | FUN_1007fcc48 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1007fcc48(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  TimeZone TVar3;
  ID self;
  Dictionary<undefined,undefined> DVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x21;
  
  TVar3 = Foundation::TimeZone::typeMetadataAccessor();
  lVar7 = *(long *)(*(long *)(TVar3.unknown + -8) + 0x40);
  self = objc_stub::processInfo((ID)&_OBJC_CLASS___NSProcessInfo);
  objc_stub::environment(self);
  DVar4 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  if (*(long *)(DVar4.unknown + 0x10) == 0) {
    _swift_bridgeObjectRelease(DVar4.unknown);
    *param_1 = 0;
  }
  else {
    _swift_bridgeObjectRetain(DVar4.unknown);
    uVar6 = 0;
    lVar5 = -0x2fffffffffffffea;
    FUN_100071370();
    if ((uVar6 & 1) == 0) {
      _swift_bridgeObjectRelease_n(DVar4.unknown,2);
      *param_1 = 0;
    }
    else {
      puVar1 = (undefined8 *)(*(long *)(DVar4.unknown + 0x38) + lVar5 * 0x10);
      TVar3.unknown = (undefined *)*puVar1;
      uVar2 = puVar1[1];
      _swift_bridgeObjectRetain(uVar2);
      _swift_bridgeObjectRelease_n(DVar4.unknown,2);
      thunk_FUN_1005b3cd0(TVar3.unknown,uVar2);
      Foundation::TimeZone::get_current(TVar3);
      FUN_1007fdeb8(TVar3.unknown,&stack0xffffffffffffffb0 + -(lVar7 + 0xfU & 0xfffffffffffffff0));
      if (unaff_x21 == 0) {
        *param_1 = TVar3.unknown;
      }
      else {
        *param_2 = unaff_x21;
      }
    }
  }
  return;
}



/* Address: 0x1007fcdc0 | FUN_1007fcdc0 */

void FUN_1007fcdc0(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  undefined8 uVar1;
  byte bVar2;
  long lVar3;
  long *plVar4;
  undefined7 extraout_var;
  _StringGuts _Var6;
  undefined *puVar7;
  uint uVar8;
  char *pcVar9;
  void *pvVar10;
  long unaff_x20;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 auStack_50 [12];
  undefined4 local_44;
  long local_40;
  undefined8 uStack_38;
  undefined4 *puVar5;
  
  _os_unfair_lock_lock(unaff_x20 + 0x10);
  lVar3 = unaff_x20 + _TtC13Configuration16FileAccessLogger::formatStyle;
  FUN_1007fcf78();
  local_40 = lVar3;
  uStack_38 = param_2;
  _swift_bridgeObjectRetain(param_2);
  SVar11.bridgeObject = (void *)0xe100000000000000;
  SVar11.str = (char *)0xa;
  SVar13.bridgeObject = param_4;
  SVar13.str = param_3;
  Swift::String::append(SVar11,SVar13);
  _swift_bridgeObjectRelease(param_2);
  uVar1 = uStack_38;
  uVar8 = *(uint *)(unaff_x20 + 0x14);
  FUN_1007fe14c();
  plVar4 = &local_40;
  FUN_1005abf00(plVar4,uVar8,PTR___type_metadata_for_Swift_String_UTF8View_100eac1a0,param_2);
  if ((uVar8 & 0xff) == 1) {
    local_44 = (int)plVar4;
    bVar2 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    puVar5 = (undefined4 *)CONCAT71(extraout_var,bVar2);
    _Var6.unknown = (undefined *)puVar5;
    if ((bVar2 & 1) != 0) {
      FUN_1007fe10c();
      _Var6.unknown = (undefined *)&local_44;
      _swift_willThrowTypedImpl(_Var6.unknown,&DAT_100ee42f8,puVar5);
    }
    FUN_1007fe10c();
    puVar7 = &DAT_100ee42f8;
    pcVar9 = (char *)0x0;
    pvVar10 = (void *)0x0;
    _swift_allocError(&DAT_100ee42f8);
    *(int *)_Var6.unknown = (int)plVar4;
    _swift_bridgeObjectRelease(uVar1);
    local_40 = 0;
    uStack_38 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x26,_Var6);
    SVar12.bridgeObject = (void *)0x8000000100db1ba0;
    SVar12.str = (char *)0xd000000000000024;
    SVar14.bridgeObject = pvVar10;
    SVar14.str = pcVar9;
    Swift::String::append(SVar12,SVar14);
    _swift_getErrorValue(puVar7,auStack_50,&local_68);
    Swift::DefaultStringInterpolation::_appendInterpolation(local_68,uStack_60);
    uVar1 = uStack_38;
    FUN_100856824(local_40,uStack_38);
    _swift_bridgeObjectRelease(uVar1);
    _swift_errorRelease(puVar7);
  }
  else {
    _swift_bridgeObjectRelease(uVar1);
  }
  _os_unfair_lock_unlock(unaff_x20 + 0x10);
  return;
}



/* Address: 0x1007fcf58 | FUN_1007fcf58 */

void FUN_1007fcf58(void)

{
  FUN_1007fcdc0();
  return;
}



/* Address: 0x1007fcf78 | FUN_1007fcf78 */

undefined1  [16]
FUN_1007fcf78(undefined8 param_1,_StringGuts param_2,char *param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  char cVar2;
  ushort uVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  undefined1 auVar7 [16];
  undefined *puVar8;
  long lVar9;
  ISO8601FormatStyle IVar10;
  ISO8601FormatStyle IVar11;
  _StringGuts _Var12;
  void *pvVar13;
  char *pcVar14;
  undefined *puVar15;
  long lVar16;
  undefined8 *puVar17;
  char *pcVar18;
  char *pcVar19;
  undefined8 uVar20;
  char *unaff_x20;
  undefined1 *puVar21;
  undefined *puVar22;
  undefined8 uVar23;
  char *pcVar24;
  char *pcVar25;
  undefined8 uVar26;
  uint uVar27;
  undefined1 *puVar28;
  undefined8 uVar29;
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
  String SVar54;
  String SVar55;
  String SVar56;
  String SVar57;
  String SVar58;
  String SVar59;
  String SVar60;
  String SVar61;
  String SVar62;
  String SVar63;
  String SVar64;
  String SVar65;
  String SVar66;
  char *local_170;
  char **local_168;
  char *local_160;
  undefined *local_138;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined1 auStack_108 [8];
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e0 [8];
  char *local_d8;
  undefined1 *puStack_d0;
  char *local_a0;
  undefined *puStack_98;
  char *local_90;
  undefined1 *puStack_88;
  undefined8 local_80;
  undefined7 uStack_78;
  undefined1 local_71;
  undefined1 uStack_70;
  char cStack_6f;
  undefined1 uStack_6e;
  
  lVar9 = 0;
  FUN_1007fb264();
  lVar16 = *(long *)(*(long *)(unaff_x20 + *(int *)(lVar9 + 0x14)) + 0x10);
  if (lVar16 != 0) {
    puVar17 = (undefined8 *)(*(long *)(unaff_x20 + *(int *)(lVar9 + 0x14)) + 0x20);
    do {
      local_138 = (undefined *)puVar17[1];
      pcVar19 = (char *)*puVar17;
      puVar28 = (undefined1 *)puVar17[3];
      pcVar18 = (char *)puVar17[2];
      uVar20 = puVar17[5];
      uVar23 = puVar17[4];
      uVar27 = *(uint *)((long)puVar17 + 0x2f);
      uStack_70 = (undefined1)(uVar27 >> 8);
      cStack_6f = (char)(uVar27 >> 0x10);
      uStack_6e = (undefined1)(uVar27 >> 0x18);
      uStack_78 = (undefined7)uVar20;
      local_71 = (undefined1)((ulong)uVar20 >> 0x38);
      local_a0 = pcVar19;
      puStack_98 = local_138;
      local_90 = pcVar18;
      puStack_88 = puVar28;
      local_80 = uVar23;
      if ((uVar27 >> 0x18 != 1) && (cStack_6f != '\x02')) {
        uVar27 = uVar27 >> 8;
        param_2.unknown = (undefined *)&local_d8;
        FUN_1007fe2c8(&local_a0);
        goto LAB_1007fd054;
      }
      puVar17 = puVar17 + 7;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  pcVar19 = (char *)0x0;
  local_138 = (undefined *)0x0;
  pcVar18 = (char *)0x0;
  puVar28 = (undefined1 *)0x0;
  uVar23 = 0;
  uVar20 = 0;
  uVar27 = 0;
LAB_1007fd054:
  pcVar24 = unaff_x20 + *(int *)(lVar9 + 0x1c);
  pcVar14 = *(char **)pcVar24;
  _Var12.unknown = *(undefined **)(pcVar24 + 8);
  uVar3 = *(ushort *)(pcVar24 + 0x10);
  pcVar25 = (char *)(ulong)uVar3;
  puVar21 = (undefined1 *)(ulong)(byte)pcVar24[0x12];
  if (pcVar24[0x12] == 1) {
    local_a0 = (char *)0x0;
    puStack_98 = (void *)0xe000000000000000;
    _swift_errorRetain(pcVar14);
    Swift::_StringGuts::grow(0x12,param_2);
    SVar34.bridgeObject = (void *)0x8000000100db1bf0;
    SVar34.str = (char *)0xd000000000000010;
    SVar46.bridgeObject = param_4;
    SVar46.str = param_3;
    Swift::String::append(SVar34,SVar46);
    _swift_getErrorValue(pcVar14,auStack_e0,&local_f8);
    Swift::DefaultStringInterpolation::_appendInterpolation(local_f8,uStack_f0);
    puVar22 = puStack_98;
    local_170 = local_a0;
    puVar21 = &DAT_00000001;
    FUN_1007fb2c4(pcVar14);
    uVar29 = 0xa300000000000000;
    local_168 = (char **)&DAT_e700000000000000;
    local_160 = (char *)0x3e726f7272653c;
    pcVar24 = (char *)0x8c9de2;
    goto LAB_1007fd400;
  }
  if ((uVar3 & 0xff00) == 0x200) {
    local_160 = (char *)0x3e6c696e3c;
    if (local_138 != (undefined *)0x0) {
      local_168 = (char **)&DAT_e500000000000000;
LAB_1007fd1a8:
      FUN_1007fe3ec(pcVar19,local_138,pcVar18,puVar28,uVar23,uVar20,uVar27);
      FUN_1007fb2c4(pcVar14);
      lVar16 = *(long *)(unaff_x20 + *(int *)(lVar9 + 0x18));
      if (lVar16 == 0) {
        local_a0 = (char *)0x64656469766f7270;
        puStack_98 = (void *)0xec00000020796220;
        _swift_bridgeObjectRetain(local_138);
        SVar33.bridgeObject = local_138;
        SVar33.str = pcVar19;
        SVar50.bridgeObject = puVar21;
        SVar50.str = pcVar25;
        Swift::String::append(SVar33,SVar50);
        _swift_bridgeObjectRelease(local_138);
        puVar22 = puStack_98;
        local_170 = local_a0;
        _Var12.unknown = local_138;
        pcVar25 = pcVar18;
        puVar21 = puVar28;
        FUN_1007fe388(pcVar19);
        uVar29 = 0xa300000000000000;
        pcVar24 = (char *)0x859ce2;
      }
      else {
        local_a0 = (char *)0x0;
        puStack_98 = (void *)0xe000000000000000;
        _swift_errorRetain(lVar16);
        Swift::_StringGuts::grow(0x28,_Var12);
        SVar30.bridgeObject = (void *)0xec00000020796220;
        SVar30.str = (char *)0x64656469766f7270;
        SVar47.bridgeObject = puVar21;
        SVar47.str = pcVar25;
        Swift::String::append(SVar30,SVar47);
        _swift_bridgeObjectRetain(local_138);
        SVar31.bridgeObject = local_138;
        SVar31.str = pcVar19;
        SVar48.bridgeObject = puVar21;
        SVar48.str = pcVar25;
        Swift::String::append(SVar31,SVar48);
        _swift_bridgeObjectRelease(local_138);
        SVar32.bridgeObject = (void *)0x8000000100db1c70;
        SVar32.str = (char *)0xd000000000000018;
        SVar49.bridgeObject = puVar21;
        SVar49.str = pcVar25;
        Swift::String::append(SVar32,SVar49);
        _swift_getErrorValue(lVar16,auStack_108,&local_120);
        Swift::DefaultStringInterpolation::_appendInterpolation(local_120,uStack_118);
        puVar22 = puStack_98;
        local_170 = local_a0;
        _swift_errorRelease(lVar16);
        _Var12.unknown = local_138;
        pcVar25 = pcVar18;
        puVar21 = puVar28;
        FUN_1007fe388(pcVar19);
        uVar29 = 0xa400000000000000;
        pcVar24 = (char *)0xa19f9ff0;
      }
      goto LAB_1007fd400;
    }
    pcVar24 = "all providers returned nil";
    local_170 = (char *)0xd00000000000001a;
    local_168 = (char **)&DAT_e500000000000000;
    _Var12.unknown = param_2.unknown;
    pcVar25 = param_3;
    puVar21 = param_4;
  }
  else {
    if ((uVar3 >> 8 & 1) == 0) {
      FUN_1007fb278(pcVar14,_Var12.unknown,pcVar25,puVar21);
      FUN_1007fb28c(pcVar14,_Var12.unknown,pcVar25);
      local_160 = pcVar14;
      local_168 = (char **)_Var12.unknown;
      FUN_1007fd6a8(pcVar14,_Var12.unknown,pcVar25);
      FUN_1007fb2c4(pcVar14,_Var12.unknown,pcVar25,puVar21);
    }
    else {
      FUN_1007fb278(pcVar14,_Var12.unknown,pcVar25,puVar21);
      local_168 = (char **)0xea00000000003e44;
      local_160 = (char *)0x455443414445523c;
    }
    if (local_138 != (undefined *)0x0) goto LAB_1007fd1a8;
    FUN_1007fb2c4(pcVar14);
    pcVar24 = "all providers returned nil, got the default value";
    local_170 = (char *)0xd000000000000031;
  }
  uVar29 = 0xa400000000000000;
  puVar22 = (undefined *)((ulong)(pcVar24 + -0x20) | 0x8000000000000000);
  pcVar24 = (char *)0xa19f9ff0;
LAB_1007fd400:
  local_a0 = (char *)0x0;
  puStack_98 = (void *)0xe000000000000000;
  Swift::_StringGuts::grow(0x13,_Var12);
  cVar2 = *unaff_x20;
  pcVar14 = (char *)0x6863746566;
  if (cVar2 != '\x01') {
    pcVar14 = (char *)0x6863746177;
  }
  local_d8 = (char *)0x746567;
  if (cVar2 != '\0') {
    local_d8 = pcVar14;
  }
  puVar1 = (undefined1 *)0xe300000000000000;
  if (cVar2 != '\0') {
    puVar1 = &DAT_e500000000000000;
  }
  puStack_d0 = puVar1;
  FUN_1007fe304();
  SVar34 = (extension_Foundation)::Swift::StringProtocol::get_capitalized();
  _swift_bridgeObjectRelease(puVar1);
  SVar51.bridgeObject = puVar21;
  SVar51.str = pcVar25;
  Swift::String::append(SVar34,SVar51);
  _swift_bridgeObjectRelease(SVar34.bridgeObject);
  SVar35.bridgeObject = (void *)0xe100000000000000;
  SVar35.str = (char *)0x20;
  SVar52.bridgeObject = puVar21;
  SVar52.str = pcVar25;
  Swift::String::append(SVar35,SVar52);
  pcVar14 = "\x01\x02";
  puVar15 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
  Swift::__print_unlocked
            (unaff_x20 + 0x18,&local_a0,&DAT_100f046d8,
             PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
             PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
            );
  SVar36.bridgeObject = &DAT_e600000000000000;
  SVar36.str = (char *)0x206d6f726620;
  SVar53.bridgeObject = puVar15;
  SVar53.str = pcVar14;
  Swift::String::append(SVar36,SVar53);
  local_d8 = *(char **)(unaff_x20 + 0x20);
  puStack_d0 = *(undefined1 **)(unaff_x20 + 0x28);
  uVar26 = *(undefined8 *)(unaff_x20 + 0x30);
  _swift_bridgeObjectRetain();
  SVar37.bridgeObject = (void *)0xe100000000000000;
  SVar37.str = &DAT_0000003a;
  SVar54.bridgeObject = puVar15;
  SVar54.str = pcVar14;
  Swift::String::append(SVar37,SVar54);
  local_100 = uVar26;
  SVar34 = Swift::CustomStringConvertible::get_description();
  SVar55.bridgeObject = puVar15;
  SVar55.str = pcVar14;
  Swift::String::append(SVar34,SVar55);
  _swift_bridgeObjectRelease(SVar34.bridgeObject);
  puVar21 = puStack_d0;
  SVar4.bridgeObject = puStack_d0;
  SVar4.str = local_d8;
  SVar56.bridgeObject = puVar15;
  SVar56.str = pcVar14;
  Swift::String::append(SVar4,SVar56);
  _swift_bridgeObjectRelease(puVar21);
  SVar38.bridgeObject = &DAT_e400000000000000;
  SVar38.str = (char *)0x20746120;
  SVar57.bridgeObject = puVar15;
  SVar57.str = pcVar14;
  Swift::String::append(SVar38,SVar57);
  FUN_1007fb128();
  IVar10 = Foundation::Date::ISO8601FormatStyle::typeMetadataAccessor();
  IVar11 = IVar10;
  FUN_1007fe344();
  Foundation::Date::_formatted(&local_d8,param_1,IVar10.unknown);
  puVar21 = puStack_d0;
  SVar5.bridgeObject = puStack_d0;
  SVar5.str = local_d8;
  SVar58.bridgeObject = puVar15;
  SVar58.str = IVar11.unknown;
  _Var12.unknown = puStack_d0;
  Swift::String::append(SVar5,SVar58);
  _swift_bridgeObjectRelease(puVar21);
  puVar8 = puStack_98;
  SVar6.bridgeObject = puStack_98;
  SVar6.str = local_a0;
  local_a0 = (char *)0x0;
  puStack_98 = (undefined *)0xe000000000000000;
  Swift::_StringGuts::grow(0x17,_Var12);
  _swift_bridgeObjectRelease(puStack_98);
  SVar39.bridgeObject = (void *)0xe100000000000000;
  SVar39.str = (char *)0x20;
  SVar59.bridgeObject = puVar15;
  SVar59.str = IVar11.unknown;
  local_a0 = pcVar24;
  puStack_98 = (undefined *)uVar29;
  Swift::String::append(SVar39,SVar59);
  pcVar24 = *(char **)(unaff_x20 + 8);
  pvVar13 = *(void **)(unaff_x20 + 0x10);
  thunk_FUN_1007ff8e4();
  SVar40.bridgeObject = pvVar13;
  SVar40.str = pcVar24;
  SVar60.bridgeObject = puVar15;
  SVar60.str = IVar11.unknown;
  Swift::String::append(SVar40,SVar60);
  _swift_bridgeObjectRelease(pvVar13);
  SVar41.bridgeObject = &DAT_e500000000000000;
  SVar41.str = (char *)0x22203e2d20;
  SVar61.bridgeObject = puVar15;
  SVar61.str = IVar11.unknown;
  Swift::String::append(SVar41,SVar61);
  SVar42.bridgeObject = local_168;
  SVar42.str = local_160;
  SVar62.bridgeObject = puVar15;
  SVar62.str = IVar11.unknown;
  Swift::String::append(SVar42,SVar62);
  _swift_bridgeObjectRelease(local_168);
  SVar43.bridgeObject = &DAT_e400000000000000;
  SVar43.str = (char *)0x202d2022;
  SVar63.bridgeObject = puVar15;
  SVar63.str = IVar11.unknown;
  Swift::String::append(SVar43,SVar63);
  SVar44.bridgeObject = puVar22;
  SVar44.str = local_170;
  SVar64.bridgeObject = puVar15;
  SVar64.str = IVar11.unknown;
  Swift::String::append(SVar44,SVar64);
  _swift_bridgeObjectRelease(puVar22);
  SVar45.bridgeObject = (void *)0xe300000000000000;
  SVar45.str = (char *)0x202f20;
  SVar65.bridgeObject = puVar15;
  SVar65.str = IVar11.unknown;
  Swift::String::append(SVar45,SVar65);
  SVar66.bridgeObject = puVar15;
  SVar66.str = IVar11.unknown;
  Swift::String::append(SVar6,SVar66);
  _swift_bridgeObjectRelease(puVar8);
  FUN_1007fe388(pcVar19,local_138,pcVar18,puVar28,uVar23,uVar20,uVar27);
  auVar7._8_8_ = puStack_98;
  auVar7._0_8_ = local_a0;
  return auVar7;
}



/* Address: 0x1007fd6a8 | FUN_1007fd6a8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x00010081a2d8) */
/* WARNING: Removing unreachable block (ram,0x00010081a1ac) */
/* WARNING: Removing unreachable block (ram,0x000100804f44) */

String FUN_1007fd6a8(Hasher UNRECOVERED_JUMPTABLE_08,Hasher UNRECOVERED_JUMPTABLE,code *param_3,
                    code *param_4,code *param_5,code param_6,undefined8 param_7,undefined8 param_8,
                    undefined8 param_9,code *param_10,code *param_11,code *param_12,
                    undefined8 param_13,undefined8 param_14,undefined *param_15,undefined8 param_16,
                    code *param_17,long param_18)

{
  ulong *puVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  bool in_ZR;
  bool bVar6;
  Optional OVar7;
  byte bVar8;
  uint uVar9;
  __DataStorage *p_Var10;
  TimeZone TVar11;
  ID IVar12;
  NSString *pNVar13;
  undefined7 extraout_var;
  undefined *puVar14;
  undefined *puVar15;
  char *pcVar16;
  code *pcVar17;
  undefined8 uVar18;
  long lVar19;
  Date DVar20;
  undefined *puVar21;
  SEL op;
  Hasher HVar22;
  void *pvVar24;
  code *pcVar25;
  uint uVar26;
  code *pcVar27;
  undefined1 uVar28;
  undefined2 uVar29;
  code *pcVar30;
  code **ppcVar31;
  code *pcVar32;
  undefined8 uVar33;
  code *pcVar34;
  ushort uVar35;
  ushort *puVar36;
  ulong in_x16;
  uint uVar37;
  code *unaff_x19;
  code *pcVar38;
  undefined8 *puVar39;
  undefined4 uVar40;
  Hasher unaff_x20;
  Data DVar41;
  long lVar42;
  undefined8 uVar43;
  Data unaff_x21;
  undefined8 uVar44;
  uint uVar45;
  code *unaff_x22;
  long lVar46;
  code *unaff_x23;
  double *pdVar47;
  long lVar48;
  undefined1 *puVar49;
  uint uVar50;
  code *unaff_x24;
  undefined8 uVar51;
  code *pcVar52;
  ulong uVar53;
  code *unaff_x25;
  long lVar54;
  code *unaff_x26;
  ulong uVar55;
  code *UNRECOVERED_JUMPTABLE_04;
  uint uVar56;
  code *unaff_x27;
  long lVar57;
  code *unaff_x28;
  code *UNRECOVERED_JUMPTABLE_07;
  code *pcVar58;
  undefined *puVar59;
  String SVar60;
  String SVar61;
  String separator;
  String SVar62;
  String SVar63;
  String SVar64;
  String SVar65;
  String SVar66;
  String SVar67;
  String SVar68;
  String SVar69;
  String SVar70;
  String SVar71;
  String SVar72;
  String SVar73;
  String SVar74;
  String SVar75;
  String SVar76;
  String SVar77;
  String SVar78;
  String SVar79;
  String SVar80;
  String SVar81;
  String SVar82;
  String SVar83;
  String SVar84;
  String SVar85;
  String SVar86;
  String SVar87;
  String SVar88;
  String SVar89;
  String SVar90;
  String SVar91;
  String SVar92;
  String SVar93;
  String SVar94;
  String SVar95;
  String SVar96;
  String SVar97;
  String SVar98;
  String SVar99;
  tuple2_conflict1 tVar100;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_128;
  code *in_stack_fffffffffffffee0;
  undefined8 uStack_118;
  code *in_stack_fffffffffffffef0;
  undefined *in_stack_fffffffffffffef8;
  undefined *in_stack_ffffffffffffff00;
  ulong in_stack_ffffffffffffff08;
  code *in_stack_ffffffffffffff10;
  ulong in_stack_ffffffffffffff18;
  code *in_stack_ffffffffffffff20;
  ulong in_stack_ffffffffffffff28;
  code *in_stack_ffffffffffffff30;
  code *in_stack_ffffffffffffff38;
  code *pcStack_c0;
  code *pcStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  code *in_stack_ffffffffffffff68;
  undefined8 local_90;
  uint uStack_88;
  uint uStack_84;
  code *in_stack_ffffffffffffff80;
  code *in_stack_ffffffffffffff88;
  long in_stack_ffffffffffffff90;
  code *pcVar101;
  int iVar102;
  String separator_00;
  undefined7 extraout_var_00;
  Hasher HVar23;
  
  uVar50 = local_90._4_4_;
  uVar26 = (uint)local_90;
  SVar60.bridgeObject = unaff_x20.unknown;
  SVar60.str = (char *)unaff_x19;
  UNRECOVERED_JUMPTABLE_07 = (code *)&stack0xfffffffffffffff0;
  pcVar30 = *(code **)PTR____stack_chk_guard_100ea82f0;
  ppcVar31 = (code **)((ulong)param_3 & 0xff);
  puVar36 = &switchD_1007fd6f0::switchdataD_100c7adb0;
  uVar45 = (uint)unaff_x22;
  uVar37 = (uint)unaff_x19;
  uVar56 = (uint)unaff_x27;
  local_90._0_4_ = (uint)UNRECOVERED_JUMPTABLE_08.unknown;
  local_90._4_4_ = (uint)((ulong)UNRECOVERED_JUMPTABLE_08.unknown >> 0x20);
  uVar2 = local_90._4_4_;
  uVar9 = (uint)unaff_x24;
  local_90._4_4_ = (uint)((ulong)unaff_x24 >> 0x20);
  uVar5 = local_90._4_4_;
  pcVar17 = (code *)UNRECOVERED_JUMPTABLE_08.unknown;
  HVar22.unknown = UNRECOVERED_JUMPTABLE.unknown;
  pcVar25 = param_3;
  pcVar27 = param_4;
  pcVar34 = (code *)ppcVar31;
  pcVar52 = unaff_x24;
  UNRECOVERED_JUMPTABLE_04 = unaff_x25;
  pcVar38 = unaff_x27;
  pcVar58 = unaff_x28;
  local_90._4_4_ = uVar50;
  pcVar101 = pcVar30;
  pcVar32 = unaff_x26;
  HVar23.unknown = unaff_x26;
  local_90 = (code *)PTR___swiftEmptyArrayStorage_100eae0d8;
  switch(ppcVar31) {
  default:
    unaff_x19 = (code *)UNRECOVERED_JUMPTABLE_08.unknown;
  case (code **)0x60:
  case (code **)0x67:
  case (code **)0x87:
  case (code **)0x94:
  case (code **)0x9b:
  case (code **)0xbb:
  case (code **)0xdb:
  case (code **)0xf7:
    unaff_x20.unknown = UNRECOVERED_JUMPTABLE.unknown;
    goto switchD_1007fd6f0_caseD_44;
  case (code **)0x1:
    local_90._4_4_ = uVar2;
    SVar62 = Swift::CustomStringConvertible::get_description();
    goto LAB_1007fdd14;
  case (code **)0x2:
    local_90._0_4_ = 0;
    local_90._4_4_ = 0;
    uStack_88 = 0;
    uStack_84 = 0xe0000000;
    double::_write((undefined *)&local_90,(double)UNRECOVERED_JUMPTABLE_08.unknown);
    goto LAB_1007fd9dc;
  case (code **)0x3:
    local_90._0_4_ = 0;
    local_90._4_4_ = 0;
    uStack_88 = 0;
    uStack_84 = 0xe0000000;
    bVar6 = ((ulong)UNRECOVERED_JUMPTABLE_08.unknown & 1) == 0;
    pcVar16 = (char *)0x65757274;
    if (bVar6) {
      pcVar16 = (char *)0x65736c6166;
    }
    puVar49 = &DAT_e400000000000000;
    if (bVar6) {
      puVar49 = &DAT_e500000000000000;
    }
    SVar61.bridgeObject = puVar49;
    SVar61.str = pcVar16;
    SVar99.bridgeObject = param_4;
    SVar99.str = (char *)param_3;
    Swift::String::append(SVar61,SVar99);
    _swift_bridgeObjectRelease(puVar49);
LAB_1007fd9dc:
    SVar62.str._4_4_ = local_90._4_4_;
    SVar62.str._0_4_ = (uint)local_90;
    SVar62.bridgeObject._0_4_ = uStack_88;
    SVar62.bridgeObject._4_4_ = uStack_84;
    goto LAB_1007fdd14;
  case (code **)0x4:
    unaff_x19 = (code *)UNRECOVERED_JUMPTABLE_08.unknown;
    unaff_x20.unknown = UNRECOVERED_JUMPTABLE.unknown;
  case (code **)0x24:
  case (code **)0x28:
  case (code **)0x31:
  case (code **)0x3f:
  case (code **)0x4b:
  case (code **)0x79:
  case (code **)0xad:
  case (code **)0xb1:
  case (code **)0xb5:
  case (code **)0xcd:
  case (code **)0xd1:
  case (code **)0xd5:
  case (code **)0xed:
  case (code **)0xf1:
    param_3 = (code *)0x4;
    goto switchD_1007fd6f0_caseD_32;
  case (code **)0x5:
    local_90._4_4_ = uVar2;
    FUN_1000f7830(&DAT_100fe6f38,&DAT_100c7b090);
    FUN_100134584(&DAT_100fe6f40,&DAT_100fe6f38,&DAT_100c7b090,
                  PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100eac518);
    separator.bridgeObject = (void *)0xe100000000000000;
    separator.str = (char *)0x2c;
    SVar62 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator);
    goto LAB_1007fdd14;
  case (code **)0x6:
    puVar36 = &USHORT_100c7ae20;
    local_90._0_4_ = uVar26;
    _swift_getKeyPath(&USHORT_100c7ae20);
    lVar57 = *(long *)(UNRECOVERED_JUMPTABLE_08.unknown + 0x10);
    if (lVar57 == 0) {
      _swift_release(puVar36);
      unaff_x19 = (code *)PTR___swiftEmptyArrayStorage_100eae0d8;
    }
    else {
      uStack_a8._0_4_ = SUB84(PTR___swiftEmptyArrayStorage_100eae0d8,0);
      uStack_a8._4_2_ = (__int16)((ulong)PTR___swiftEmptyArrayStorage_100eae0d8 >> 0x20);
      uStack_a8._6_2_ = (undefined2)((ulong)PTR___swiftEmptyArrayStorage_100eae0d8 >> 0x30);
      FUN_10083547c(0,lVar57,0);
      unaff_x19 = (code *)CONCAT26(uStack_a8._6_2_,CONCAT24(uStack_a8._4_2_,(undefined4)uStack_a8));
      do {
        _swift_getAtKeyPath(&local_90,&stack0xffffffffffffff68,puVar36);
        uVar33 = CONCAT44(local_90._4_4_,(uint)local_90);
        uVar18 = CONCAT44(uStack_84,uStack_88);
        uStack_a8._0_4_ = SUB84(unaff_x19,0);
        uStack_a8._4_2_ = (__int16)((ulong)unaff_x19 >> 0x20);
        uStack_a8._6_2_ = (undefined2)((ulong)unaff_x19 >> 0x30);
        uVar55 = *(ulong *)(unaff_x19 + 0x10);
        if (*(ulong *)(unaff_x19 + 0x18) >> 1 <= uVar55) {
          FUN_10083547c(1 < *(ulong *)(unaff_x19 + 0x18),uVar55 + 1,1);
          unaff_x19 = (code *)CONCAT26(uStack_a8._6_2_,
                                       CONCAT24(uStack_a8._4_2_,(undefined4)uStack_a8));
        }
        *(ulong *)(unaff_x19 + 0x10) = uVar55 + 1;
        *(undefined8 *)(unaff_x19 + uVar55 * 0x10 + 0x20) = uVar33;
        *(undefined8 *)(unaff_x19 + uVar55 * 0x10 + 0x28) = uVar18;
        lVar57 = lVar57 + -1;
      } while (lVar57 != 0);
      _swift_release(puVar36);
    }
    break;
  case (code **)0x7:
    lVar57 = *(long *)(UNRECOVERED_JUMPTABLE_08.unknown + 0x10);
    unaff_x19 = (code *)PTR___swiftEmptyArrayStorage_100eae0d8;
    if (lVar57 != 0) {
      FUN_10083547c(0,lVar57,0);
      unaff_x19 = local_90;
      pdVar47 = (double *)(UNRECOVERED_JUMPTABLE_08.unknown + 0x20);
      do {
        SVar60 = double::get_description(*pdVar47);
        local_90._0_4_ = (uint)unaff_x19;
        local_90._4_4_ = (uint)((ulong)unaff_x19 >> 0x20);
        uVar55 = *(ulong *)(unaff_x19 + 0x10);
        if (*(ulong *)(unaff_x19 + 0x18) >> 1 <= uVar55) {
          FUN_10083547c(1 < *(ulong *)(unaff_x19 + 0x18),uVar55 + 1,1);
          unaff_x19 = (code *)CONCAT44(local_90._4_4_,(uint)local_90);
        }
        *(ulong *)(unaff_x19 + 0x10) = uVar55 + 1;
        *(String *)(unaff_x19 + uVar55 * 0x10 + 0x20) = SVar60;
        lVar57 = lVar57 + -1;
        pdVar47 = pdVar47 + 1;
      } while (lVar57 != 0);
    }
    break;
  case (code **)0x8:
    lVar57 = *(long *)(UNRECOVERED_JUMPTABLE_08.unknown + 0x10);
    unaff_x19 = (code *)PTR___swiftEmptyArrayStorage_100eae0d8;
    if (lVar57 != 0) {
      FUN_10083547c(0,lVar57,0);
      UNRECOVERED_JUMPTABLE_07 = (code *)(UNRECOVERED_JUMPTABLE_08.unknown + 0x20);
      lVar19 = *(ulong *)(local_90 + 0x10) << 4;
      uVar55 = *(ulong *)(local_90 + 0x10);
      unaff_x19 = local_90;
      do {
        uVar33 = 0x65757274;
        if (*UNRECOVERED_JUMPTABLE_07 == (code)0x0) {
          uVar33 = 0x65736c6166;
        }
        puVar49 = &DAT_e400000000000000;
        if (*UNRECOVERED_JUMPTABLE_07 == (code)0x0) {
          puVar49 = &DAT_e500000000000000;
        }
        local_90._0_4_ = (uint)unaff_x19;
        local_90._4_4_ = (uint)((ulong)unaff_x19 >> 0x20);
        uVar53 = uVar55 + 1;
        if (*(ulong *)(unaff_x19 + 0x18) >> 1 <= uVar55) {
          FUN_10083547c(1 < *(ulong *)(unaff_x19 + 0x18),uVar53,1);
          unaff_x19 = (code *)CONCAT44(local_90._4_4_,(uint)local_90);
        }
        *(ulong *)(unaff_x19 + 0x10) = uVar53;
        *(undefined8 *)(unaff_x19 + lVar19 + 0x20) = uVar33;
        *(undefined1 **)(unaff_x19 + lVar19 + 0x28) = puVar49;
        lVar19 = lVar19 + 0x10;
        UNRECOVERED_JUMPTABLE_07 = UNRECOVERED_JUMPTABLE_07 + 1;
        lVar57 = lVar57 + -1;
        uVar55 = uVar53;
      } while (lVar57 != 0);
    }
    break;
  case (code **)0x9:
  case (code **)0x4f:
                    /* WARNING: Load size is inaccurate */
    unaff_x21.unknown = UNRECOVERED_JUMPTABLE_08.unknown[0x10];
    unaff_x19 = (code *)PTR___swiftEmptyArrayStorage_100eae0d8;
    in_stack_ffffffffffffff68 = (code *)PTR___swiftEmptyArrayStorage_100eae0d8;
    if ((code *)unaff_x21.unknown != (code *)0x0) goto switchD_1007fd6f0_caseD_b;
    break;
  case (code **)0xa:
    goto switchD_1007fd6f0_caseD_a;
  case (code **)0xb:
  case (code **)0xf:
  case (code **)0x47:
  case (code **)0x59:
  case (code **)0x63:
  case (code **)0x6d:
  case (code **)0x77:
  case (code **)0x7b:
  case (code **)0x7f:
  case (code **)0x83:
  case (code **)0x8d:
  case (code **)0x97:
  case (code **)0xa1:
  case (code **)0xab:
  case (code **)0xaf:
  case (code **)0xb3:
  case (code **)0xb7:
  case (code **)0xc1:
  case (code **)0xcb:
  case (code **)0xcf:
  case (code **)0xd3:
  case (code **)0xd7:
  case (code **)0xe1:
  case (code **)0xeb:
  case (code **)0xef:
  case (code **)0xf3:
  case (code **)0xfd:
switchD_1007fd6f0_caseD_b:
    unaff_x19 = in_stack_ffffffffffffff68;
    local_90._0_4_ = uVar26;
    FUN_10083547c(0,unaff_x21.unknown,0);
    FUN_100134584(&DAT_100fe6f30,&DAT_100fe6f28,&USHORT_100c7ae10,
                  PTR__Foundation__Swift__Array<undefined>_>Foundation__ContiguousBytes_100ea78a8);
    UNRECOVERED_JUMPTABLE_07 = (code *)(UNRECOVERED_JUMPTABLE_08.unknown + 0x20);
    do {
      unaff_x22 = UNRECOVERED_JUMPTABLE_07 + 8;
      unaff_x25 = *(code **)UNRECOVERED_JUMPTABLE_07;
      UNRECOVERED_JUMPTABLE.unknown = &DAT_100fe6f28;
      FUN_1000f7830(&DAT_100fe6f28,&USHORT_100c7ae10);
      local_90._0_4_ = (uint)unaff_x25;
      local_90._4_4_ = (uint)((ulong)unaff_x25 >> 0x20);
      UNRECOVERED_JUMPTABLE_08.unknown = (undefined *)&local_90;
      uVar26 = (uint)local_90;
switchD_1007fd6f0_caseD_39:
      local_90._0_4_ = uVar26;
      FUN_100004640(UNRECOVERED_JUMPTABLE_08.unknown,UNRECOVERED_JUMPTABLE.unknown);
      lVar57 = *(long *)UNRECOVERED_JUMPTABLE_08.unknown;
      uVar55 = *(ulong *)(lVar57 + 0x10);
      if (uVar55 == 0) {
        _swift_bridgeObjectRetain_n(unaff_x25,2);
        DVar41.unknown = (undefined *)0x0;
        UNRECOVERED_JUMPTABLE_07 = (code *)0xc000000000000000;
      }
      else if (uVar55 < 0xf) {
        uStack_a0._0_4_ = 0;
        uStack_a0._4_2_ = 0;
        uStack_a8._0_4_ = 0;
        uStack_a8._4_2_ = 0;
        uStack_a8._6_2_ = 0;
        uStack_a0._6_1_ = (undefined1)uVar55;
        _memcpy(&uStack_a8,(void *)(lVar57 + 0x20),uVar55);
        DVar41.unknown =
             (undefined *)CONCAT26(uStack_a8._6_2_,CONCAT24(uStack_a8._4_2_,(undefined4)uStack_a8));
        unaff_x23 = (code *)((ulong)unaff_x23 & 0xf00000000000000 |
                            (ulong)CONCAT16(uStack_a0._6_1_,
                                            CONCAT24(uStack_a0._4_2_,(uint)uStack_a0)));
        _swift_bridgeObjectRetain_n(unaff_x25,2);
        UNRECOVERED_JUMPTABLE_07 = unaff_x23;
      }
      else {
        p_Var10 = Foundation::__DataStorage::typeMetadataAccessor();
        _swift_allocObject(p_Var10,*(undefined4 *)(p_Var10 + 0x30),*(undefined2 *)(p_Var10 + 0x34));
        _swift_bridgeObjectRetain_n(unaff_x25,2);
        p_Var10 = Foundation::__DataStorage::_init(p_Var10,lVar57 + 0x20);
        if (uVar55 < 0x7fffffff) {
          DVar41.unknown = (undefined *)(uVar55 << 0x20);
          UNRECOVERED_JUMPTABLE_07 = (code *)((ulong)p_Var10 | 0x4000000000000000);
        }
        else {
          DVar41.unknown = Foundation::Data::RangeReference::typeMetadataAccessor();
          _swift_allocObject(DVar41.unknown,0x20,7);
          *(undefined8 *)(DVar41.unknown + 0x10) = 0;
          *(ulong *)(DVar41.unknown + 0x18) = uVar55;
          UNRECOVERED_JUMPTABLE_07 = (code *)((ulong)p_Var10 | 0x8000000000000000);
        }
      }
      FUN_100004594(&local_90);
      SVar60 = Foundation::Data::base64EncodedString((NSDataBase64EncodingOptions)0x0,DVar41);
      FUN_10003bf2c(DVar41.unknown,UNRECOVERED_JUMPTABLE_07);
      _swift_bridgeObjectRelease(unaff_x25);
      uVar55 = *(ulong *)(unaff_x19 + 0x10);
      if (*(ulong *)(unaff_x19 + 0x18) >> 1 <= uVar55) {
        FUN_10083547c(1 < *(ulong *)(unaff_x19 + 0x18),uVar55 + 1,1);
      }
      *(ulong *)(unaff_x19 + 0x10) = uVar55 + 1;
      *(String *)(unaff_x19 + uVar55 * 0x10 + 0x20) = SVar60;
      unaff_x21.unknown = unaff_x21.unknown + -1;
      UNRECOVERED_JUMPTABLE_07 = unaff_x22;
    } while ((code *)unaff_x21.unknown != (code *)0x0);
    break;
  case (code **)0xc:
    FUN_1007ffcdc();
    *(code ***)(unaff_x22 + 0x88) = ppcVar31;
    *(ushort **)(unaff_x22 + 0x90) = puVar36;
    puVar39 = (undefined8 *)0x100;
    _swift_task_alloc();
    *(undefined8 **)(unaff_x22 + 0x98) = puVar39;
    *puVar39 = unaff_x22;
    puVar39[1] = FUN_1008185e0;
    pvVar24 = (void *)((ulong)unaff_x20.unknown & 0xcfffffffffffffff);
    FUN_10082ee24();
    SVar81.bridgeObject = pvVar24;
    SVar81.str = (char *)unaff_x19;
    return SVar81;
  case (code **)0xd:
  case (code **)0x5b:
  case (code **)0x6f:
  case (code **)0x74:
  case (code **)0x8f:
  case (code **)0xa3:
  case (code **)0xa8:
  case (code **)0xc3:
  case (code **)0xc8:
  case (code **)0xe3:
  case (code **)0xff:
    goto switchD_1007fd6f0_caseD_d;
  case (code **)0xe:
    goto switchD_1007fd6f0_caseD_e;
  case (code **)0x14:
    goto switchD_1007fd6f0_caseD_14;
  case (code **)0x18:
    local_90._0_4_ = uVar26;
    _swift_task_dealloc();
    HVar22.unknown = unaff_x23;
    FUN_100804a74();
    uVar26 = (uint)unaff_x21.unknown;
    FUN_1007fb2c4();
    _swift_bridgeObjectRelease();
    unaff_x24 = unaff_x25;
    if ((uVar26 >> 0x10 & 0xff) == 1) {
      _swift_errorRetain(unaff_x25);
      UNRECOVERED_JUMPTABLE_07 = (code *)0x0;
      bVar6 = true;
      uVar29 = 1;
      UNRECOVERED_JUMPTABLE_04 = (code *)0x0;
    }
    else if ((uVar26 & 0xff00) == 0x200) {
      unaff_x24 = *(code **)(unaff_x27 + 0x68);
      UNRECOVERED_JUMPTABLE_07 = (code *)(ulong)(byte)unaff_x27[0xa8];
      _swift_bridgeObjectRetain(unaff_x24);
      FUN_1007fb2c4(unaff_x25,HVar22.unknown,unaff_x21.unknown,uVar26 >> 0x10);
      bVar6 = false;
      uVar29 = 0;
      UNRECOVERED_JUMPTABLE_04 = (code *)0x0;
    }
    else if ((uVar26 & 0xff) == 4) {
      UNRECOVERED_JUMPTABLE_07 = (code *)(ulong)(uVar26 >> 8 & 1);
      FUN_1007fb28c(unaff_x25,HVar22.unknown,unaff_x21.unknown);
      bVar6 = false;
      uVar29 = 0;
      UNRECOVERED_JUMPTABLE_04 = (code *)0x0;
    }
    else {
      UNRECOVERED_JUMPTABLE_07 = unaff_x25;
      FUN_1000f4a4c(unaff_x25,HVar22.unknown,unaff_x21.unknown);
      UNRECOVERED_JUMPTABLE_04 = UNRECOVERED_JUMPTABLE_07;
      FUN_10080b43c();
      unaff_x24 = (code *)&DAT_100f04860;
      _swift_allocError(&DAT_100f04860,UNRECOVERED_JUMPTABLE_04,0,0);
      *UNRECOVERED_JUMPTABLE_04 = SUB81(UNRECOVERED_JUMPTABLE_07,0);
      UNRECOVERED_JUMPTABLE_04[1] = (code)0x4;
      _swift_willThrow();
      _swift_errorRetain(unaff_x24);
      UNRECOVERED_JUMPTABLE_07 = (code *)0x0;
      bVar6 = true;
      uVar29 = 1;
      UNRECOVERED_JUMPTABLE_04 = unaff_x24;
    }
    FUN_10080b3ec(*(long *)(unaff_x27 + 0x88) + 0x18,unaff_x27 + 0x38);
    uVar18 = *(undefined8 *)(unaff_x27 + 0x98);
    uVar33 = *(undefined8 *)(unaff_x27 + 0x90);
    if (*(long *)(unaff_x27 + 0x50) == 0) {
      uVar18 = *(undefined8 *)(unaff_x27 + 0x98);
      _swift_bridgeObjectRelease(unaff_x19);
      _swift_bridgeObjectRelease(uVar33);
      _swift_bridgeObjectRelease(uVar18);
      FUN_10080a674(unaff_x27 + 0x38);
      unaff_x19 = (code *)unaff_x21.unknown;
    }
    else {
      pcStack_b0 = *(code **)(unaff_x27 + 0x80);
      uStack_84 = (uint)UNRECOVERED_JUMPTABLE_07;
      local_90._0_4_ = (uint)UNRECOVERED_JUMPTABLE_04;
      local_90._4_4_ = (uint)((ulong)UNRECOVERED_JUMPTABLE_04 >> 0x20);
      uVar43 = *(undefined8 *)(unaff_x27 + 0x70);
      puVar59 = *(undefined **)(unaff_x27 + 0x78);
      FUN_100076508(unaff_x27 + 0x38,unaff_x27 + 0x10);
      uVar51 = *(undefined8 *)(unaff_x27 + 0x28);
      lVar57 = *(long *)(unaff_x27 + 0x30);
      UNRECOVERED_JUMPTABLE_07 = unaff_x27 + 0x10;
      FUN_100004640(UNRECOVERED_JUMPTABLE_07,uVar51);
      uStack_a0._0_4_ = (uint)UNRECOVERED_JUMPTABLE_07;
      uStack_a0._4_2_ = (undefined2)((ulong)UNRECOVERED_JUMPTABLE_07 >> 0x20);
      uStack_a0._6_1_ = (undefined1)((ulong)UNRECOVERED_JUMPTABLE_07 >> 0x30);
      uStack_a0._7_1_ = (undefined1)((ulong)UNRECOVERED_JUMPTABLE_07 >> 0x38);
      lVar19 = 0;
      FUN_1007fb264();
      uStack_a8._6_2_ = 0;
      puVar49 = (undefined1 *)(*(long *)(*(long *)(lVar19 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0)
      ;
      uStack_a8._4_2_ = uVar29;
      _swift_task_alloc();
      FUN_1007fb128();
      DVar20.unknown = puVar59;
      _swift_bridgeObjectRetain();
      Foundation::Date::get_now(DVar20);
      *puVar49 = 1;
      *(undefined8 *)(puVar49 + 0x10) = uVar18;
      *(undefined8 *)(puVar49 + 8) = uVar33;
      puVar49[0x18] = 4;
      *(undefined8 *)(puVar49 + 0x20) = uVar43;
      *(undefined **)(puVar49 + 0x28) = puVar59;
      UNRECOVERED_JUMPTABLE_04 = (code *)CONCAT44(local_90._4_4_,(uint)local_90);
      UNRECOVERED_JUMPTABLE_07 = (code *)(ulong)uStack_84;
      *(code **)(puVar49 + 0x30) = pcStack_b0;
      uVar35 = 0;
      if (!bVar6) {
        uVar35 = (ushort)(uStack_84 << 8) | 4;
      }
      iVar102 = *(int *)(lVar19 + 0x18);
      *(code **)(puVar49 + *(int *)(lVar19 + 0x14)) = unaff_x19;
      *(code **)(puVar49 + iVar102) = UNRECOVERED_JUMPTABLE_04;
      puVar39 = (undefined8 *)(puVar49 + *(int *)(lVar19 + 0x1c));
      *puVar39 = unaff_x24;
      puVar39[1] = 0;
      *(ushort *)(puVar39 + 2) = uVar35;
      *(bool *)((long)puVar39 + 0x12) = bVar6;
      pcVar58 = *(code **)(lVar57 + 8);
      _swift_errorRetain(UNRECOVERED_JUMPTABLE_04);
      FUN_10081c834(unaff_x24,UNRECOVERED_JUMPTABLE_07,CONCAT22(uStack_a8._6_2_,uStack_a8._4_2_));
      (*pcVar58)(puVar49,uVar51,lVar57);
      unaff_x19 = (code *)((ulong)unaff_x21.unknown & 0xffffffff);
      FUN_10080a754(puVar49);
      _swift_task_dealloc(puVar49);
      FUN_100004594(unaff_x27 + 0x10);
    }
    if (bVar6 == false) {
      FUN_1007fb2c4(unaff_x25,HVar22.unknown,unaff_x19,(ulong)unaff_x19 >> 0x10 & 0xffff);
      _swift_errorRelease(UNRECOVERED_JUMPTABLE_04);
      UNRECOVERED_JUMPTABLE_07 = *(code **)(unaff_x28 + 8);
                    /* WARNING: Could not recover jumptable at 0x000100817fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_07)(unaff_x24);
      SVar77.bridgeObject = UNRECOVERED_JUMPTABLE_07;
      SVar77.str = (char *)unaff_x24;
      return SVar77;
    }
    *(code **)(unaff_x27 + 0x60) = unaff_x24;
    bVar8 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar8 & 1) != 0) {
      unaff_x20.unknown = (undefined *)((ulong)unaff_x19 >> 0x10 & 0xffff);
      _swift_errorRetain(unaff_x24);
      UNRECOVERED_JUMPTABLE_08.unknown = &DAT_100fe7218;
      UNRECOVERED_JUMPTABLE.unknown = &DAT_100c7c6a0;
      unaff_x21.unknown = UNRECOVERED_JUMPTABLE_07;
      unaff_x23 = unaff_x25;
      uVar26 = (uint)local_90;
      pcVar38 = (code *)HVar22.unknown;
      goto switchD_1007fd6f0_caseD_fe;
    }
    FUN_1007fb2c4(unaff_x25,HVar22.unknown,unaff_x19,(ulong)unaff_x19 >> 0x10 & 0xffff);
    goto LAB_100817fd0;
  case (code **)0x19:
    goto switchD_1007fd6f0_caseD_19;
  case (code **)0x1a:
    UNRECOVERED_JUMPTABLE_07 = unaff_x25;
    if (uVar37 == 1) {
      local_90._0_4_ = uVar26;
      _swift_errorRetain();
      uStack_84 = 0;
    }
    else {
      if ((uVar56 & 0xff00) != 0x200) {
        if ((uVar56 & 0xff) == 2) {
          bVar6 = false;
          uStack_84 = uVar56 >> 8 & 1;
          UNRECOVERED_JUMPTABLE_04 = (code *)0x0;
          local_90._0_4_ = uVar26;
        }
        else {
          local_90._0_4_ = uVar26;
          FUN_1000f4a4c();
          pcVar58 = UNRECOVERED_JUMPTABLE_04;
          FUN_10080b43c();
          UNRECOVERED_JUMPTABLE_07 = (code *)&DAT_100f04860;
          _swift_allocError(&DAT_100f04860,pcVar58,0,0);
          *pcVar58 = SUB81(UNRECOVERED_JUMPTABLE_04,0);
          pcVar58[1] = (code)0x2;
          _swift_willThrow();
          _swift_errorRetain(UNRECOVERED_JUMPTABLE_07);
          uStack_84 = 0;
          bVar6 = true;
          UNRECOVERED_JUMPTABLE_04 = UNRECOVERED_JUMPTABLE_07;
        }
        goto LAB_100816478;
      }
      uVar33 = *(undefined8 *)(unaff_x24 + 0x88);
      uVar18 = *(undefined8 *)(unaff_x24 + 0x90);
      local_90._0_4_ = uVar26;
      FUN_10080a3bc();
      UNRECOVERED_JUMPTABLE_07 = (code *)&DAT_100f05368;
      _swift_allocError(&DAT_100f05368,UNRECOVERED_JUMPTABLE_08.unknown,0,0);
      *(undefined8 *)UNRECOVERED_JUMPTABLE_08.unknown = uVar33;
      *(undefined8 *)(UNRECOVERED_JUMPTABLE_08.unknown + 8) = uVar18;
      *(undefined8 *)(UNRECOVERED_JUMPTABLE_08.unknown + 0x10) = 0;
      *(undefined8 *)(UNRECOVERED_JUMPTABLE_08.unknown + 0x18) = 0;
      UNRECOVERED_JUMPTABLE_08.unknown[0x20] = (code)0x0;
      _swift_bridgeObjectRetain(uVar33);
      _swift_bridgeObjectRetain(uVar18);
    }
    bVar6 = true;
    UNRECOVERED_JUMPTABLE_04 = (code *)0x0;
LAB_100816478:
    FUN_10080b3ec(*(long *)(unaff_x24 + 0x80) + 0x18,unaff_x24 + 0x38);
    uVar18 = *(undefined8 *)(unaff_x24 + 0x90);
    uVar33 = *(undefined8 *)(unaff_x24 + 0x88);
    if (*(long *)(unaff_x24 + 0x50) == 0) {
      uVar18 = *(undefined8 *)(unaff_x24 + 0x90);
      _swift_bridgeObjectRelease(in_stack_ffffffffffffff90);
      _swift_bridgeObjectRelease(uVar33);
      _swift_bridgeObjectRelease(uVar18);
      FUN_10080a674(unaff_x24 + 0x38);
    }
    else {
      uStack_a8._0_4_ = SUB84(UNRECOVERED_JUMPTABLE_07,0);
      uStack_a8._4_2_ = (__int16)((ulong)UNRECOVERED_JUMPTABLE_07 >> 0x20);
      uStack_a8._6_2_ = (undefined2)((ulong)UNRECOVERED_JUMPTABLE_07 >> 0x30);
      uStack_a0._0_4_ = (uint)UNRECOVERED_JUMPTABLE_04;
      uStack_a0._4_2_ = (undefined2)((ulong)UNRECOVERED_JUMPTABLE_04 >> 0x20);
      uStack_a0._6_1_ = (undefined1)((ulong)UNRECOVERED_JUMPTABLE_04 >> 0x30);
      uStack_a0._7_1_ = (undefined1)((ulong)UNRECOVERED_JUMPTABLE_04 >> 0x38);
      local_90._4_4_ = (uint)((ulong)unaff_x22 >> 0x20);
      puVar59 = *(undefined **)(unaff_x24 + 0x70);
      uVar51 = *(undefined8 *)(unaff_x24 + 0x78);
      uVar44 = *(undefined8 *)(unaff_x24 + 0x68);
      local_90._0_4_ = uVar45;
      uStack_88 = uVar56;
      FUN_100076508(unaff_x24 + 0x38,unaff_x24 + 0x10);
      uVar43 = *(undefined8 *)(unaff_x24 + 0x28);
      lVar57 = *(long *)(unaff_x24 + 0x30);
      UNRECOVERED_JUMPTABLE_07 = unaff_x24 + 0x10;
      FUN_100004640(UNRECOVERED_JUMPTABLE_07,uVar43);
      lVar19 = 0;
      pcStack_b0 = UNRECOVERED_JUMPTABLE_07;
      FUN_1007fb264();
      puVar49 = (undefined1 *)(*(long *)(*(long *)(lVar19 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0)
      ;
      _swift_task_alloc();
      FUN_1007fb128();
      DVar20.unknown = puVar59;
      _swift_bridgeObjectRetain();
      Foundation::Date::get_now(DVar20);
      *puVar49 = 1;
      *(undefined8 *)(puVar49 + 0x10) = uVar18;
      *(undefined8 *)(puVar49 + 8) = uVar33;
      puVar49[0x18] = 2;
      *(undefined8 *)(puVar49 + 0x20) = uVar44;
      *(undefined **)(puVar49 + 0x28) = puVar59;
      *(undefined8 *)(puVar49 + 0x30) = uVar51;
      if (!bVar6) {
        uVar35 = (ushort)((uStack_84 & 1) << 8) | 2;
        UNRECOVERED_JUMPTABLE_07 =
             (code *)CONCAT26(uStack_a8._6_2_,CONCAT24(uStack_a8._4_2_,(undefined4)uStack_a8));
      }
      else {
        UNRECOVERED_JUMPTABLE_07 =
             (code *)CONCAT26(uStack_a8._6_2_,CONCAT24(uStack_a8._4_2_,(undefined4)uStack_a8));
        _swift_errorRetain(UNRECOVERED_JUMPTABLE_07);
        uVar35 = 0;
      }
      iVar102 = *(int *)(lVar19 + 0x18);
      *(long *)(puVar49 + *(int *)(lVar19 + 0x14)) = in_stack_ffffffffffffff90;
      UNRECOVERED_JUMPTABLE_04 =
           (code *)CONCAT17(uStack_a0._7_1_,
                            CONCAT16(uStack_a0._6_1_,CONCAT24(uStack_a0._4_2_,(uint)uStack_a0)));
      *(code **)(puVar49 + iVar102) = UNRECOVERED_JUMPTABLE_04;
      puVar39 = (undefined8 *)(puVar49 + *(int *)(lVar19 + 0x1c));
      *puVar39 = UNRECOVERED_JUMPTABLE_07;
      puVar39[1] = 0;
      *(ushort *)(puVar39 + 2) = uVar35;
      *(bool *)((long)puVar39 + 0x12) = bVar6;
      pcVar58 = *(code **)(lVar57 + 8);
      _swift_errorRetain(UNRECOVERED_JUMPTABLE_04);
      (*pcVar58)(puVar49,uVar43,lVar57);
      FUN_10080a754(puVar49);
      _swift_task_dealloc(puVar49);
      FUN_100004594(unaff_x24 + 0x10);
      unaff_x27 = (code *)(ulong)uStack_88;
      unaff_x22 = (code *)CONCAT44(local_90._4_4_,(uint)local_90);
    }
    if (bVar6) {
      *(code **)(unaff_x24 + 0x60) = UNRECOVERED_JUMPTABLE_07;
      bVar8 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
      if ((bVar8 & 1) == 0) {
        FUN_1007fb2c4(unaff_x25,unaff_x22,unaff_x27,(ulong)unaff_x27 >> 0x10 & 0xffff);
      }
      else {
        _swift_errorRetain(UNRECOVERED_JUMPTABLE_07);
        puVar59 = &DAT_100fe7218;
        FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
        _swift_willThrowTypedImpl
                  (unaff_x24 + 0x60,puVar59,
                   PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
        FUN_1007fb2c4(unaff_x25,unaff_x22,unaff_x27,(ulong)unaff_x27 >> 0x10 & 0xffff);
        unaff_x22 = (code *)(ulong)uStack_84;
        FUN_10080d5a4(UNRECOVERED_JUMPTABLE_07,unaff_x22,1);
      }
      _swift_errorRelease(UNRECOVERED_JUMPTABLE_04);
      UNRECOVERED_JUMPTABLE_07 = *(code **)(pcVar30 + 8);
    }
    else {
      FUN_1007fb2c4(unaff_x25,unaff_x22,unaff_x27,(ulong)unaff_x27 >> 0x10 & 0xffff);
      _swift_errorRelease(UNRECOVERED_JUMPTABLE_04);
      UNRECOVERED_JUMPTABLE_07 = *(code **)(pcVar30 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010081671c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_07)();
    SVar74.bridgeObject = unaff_x22;
    SVar74.str = (char *)UNRECOVERED_JUMPTABLE_07;
    return SVar74;
  case (code **)0x1b:
    *(undefined8 *)(unaff_x22 + 0x78) = param_9;
    *(code **)(unaff_x22 + 0x80) = param_12;
    *(undefined8 *)(unaff_x22 + 0x68) = param_7;
    *(undefined8 *)(unaff_x22 + 0x70) = param_8;
    unaff_x22[0xa1] = param_6;
    pcVar25 = param_10;
    pcVar27 = param_11;
    ppcVar31 = (code **)param_3;
    puVar36 = (ushort *)param_4;
    unaff_x19 = (code *)UNRECOVERED_JUMPTABLE_08.unknown;
    unaff_x20.unknown = UNRECOVERED_JUMPTABLE.unknown;
    unaff_x24 = param_12;
    goto switchD_1007fd6f0_caseD_19;
  case (code **)0x1c:
    pcStack_c0 = (code *)((ulong)UNRECOVERED_JUMPTABLE_07 | in_x16);
    lVar19 = *(long *)unaff_x22;
    uVar55 = (ulong)*(byte *)(lVar19 + 0xa0);
    lVar57 = *(long *)unaff_x22;
    _swift_task_dealloc(*(undefined8 *)(lVar19 + 0x98));
    UNRECOVERED_JUMPTABLE_04 = (code *)UNRECOVERED_JUMPTABLE_08.unknown;
    HVar22.unknown = UNRECOVERED_JUMPTABLE.unknown;
    pcVar58 = param_3;
    FUN_100804a74();
    uVar26 = (uint)pcVar58;
    FUN_1007fb2c4(UNRECOVERED_JUMPTABLE.unknown,param_3,param_4,(uint)param_4 >> 0x10);
    _swift_bridgeObjectRelease(UNRECOVERED_JUMPTABLE_08.unknown);
    UNRECOVERED_JUMPTABLE_07 = UNRECOVERED_JUMPTABLE_04;
    if ((uVar26 >> 0x10 & 0xff) == 1) {
      _swift_errorRetain(UNRECOVERED_JUMPTABLE_04);
      puVar59 = (undefined *)0x0;
      uVar40 = 1;
      bVar6 = true;
      pcVar58 = (code *)0x0;
    }
    else if ((uVar26 & 0xff00) == 0x200) {
      FUN_1007fb2c4(UNRECOVERED_JUMPTABLE_04,HVar22.unknown,pcVar58,(ulong)pcVar58 >> 0x10 & 0xffff)
      ;
      puVar59 = (undefined *)0x0;
      bVar6 = false;
      uVar40 = 0;
      UNRECOVERED_JUMPTABLE_07 = (code *)0x0;
      pcVar58 = (code *)0x0;
    }
    else if ((uVar26 & 0xff) == 7) {
      puVar59 = (undefined *)(ulong)(uVar26 >> 8 & 1);
      FUN_1007fb28c(UNRECOVERED_JUMPTABLE_04,HVar22.unknown,pcVar58);
      bVar6 = false;
      uVar40 = 0;
      pcVar58 = (code *)0x0;
    }
    else {
      pcVar38 = UNRECOVERED_JUMPTABLE_04;
      FUN_1000f4a4c(UNRECOVERED_JUMPTABLE_04,HVar22.unknown,pcVar58);
      pcVar58 = pcVar38;
      FUN_10080b43c();
      UNRECOVERED_JUMPTABLE_07 = (code *)&DAT_100f04860;
      _swift_allocError(&DAT_100f04860,pcVar58,0,0);
      *pcVar58 = SUB81(pcVar38,0);
      pcVar58[1] = (code)0x7;
      _swift_willThrow();
      _swift_errorRetain(UNRECOVERED_JUMPTABLE_07);
      puVar59 = (undefined *)0x0;
      bVar6 = true;
      uVar40 = 1;
      pcVar58 = UNRECOVERED_JUMPTABLE_07;
    }
    FUN_10080b3ec(*(long *)(lVar19 + 0x80) + 0x18,lVar19 + 0x38);
    uVar18 = *(undefined8 *)(lVar19 + 0x90);
    uVar33 = *(undefined8 *)(lVar19 + 0x88);
    if (*(long *)(lVar19 + 0x50) == 0) {
      uVar18 = *(undefined8 *)(lVar19 + 0x90);
      _swift_bridgeObjectRelease(uVar55);
      _swift_bridgeObjectRelease(uVar33);
      _swift_bridgeObjectRelease(uVar18);
      FUN_10080a674(lVar19 + 0x38);
    }
    else {
      puVar21 = *(undefined **)(lVar19 + 0x70);
      uVar51 = *(undefined8 *)(lVar19 + 0x78);
      uVar44 = *(undefined8 *)(lVar19 + 0x68);
      FUN_100076508(lVar19 + 0x38,lVar19 + 0x10);
      uVar43 = *(undefined8 *)(lVar19 + 0x28);
      lVar46 = *(long *)(lVar19 + 0x30);
      FUN_100004640();
      lVar54 = 0;
      FUN_1007fb264();
      puVar49 = (undefined1 *)(*(long *)(*(long *)(lVar54 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0)
      ;
      _swift_task_alloc();
      FUN_1007fb128();
      DVar20.unknown = puVar21;
      _swift_bridgeObjectRetain();
      Foundation::Date::get_now(DVar20);
      uVar28 = 1;
      *puVar49 = 1;
      *(undefined8 *)(puVar49 + 0x10) = uVar18;
      *(undefined8 *)(puVar49 + 8) = uVar33;
      puVar49[0x18] = 7;
      *(undefined8 *)(puVar49 + 0x20) = uVar44;
      *(undefined **)(puVar49 + 0x28) = puVar21;
      *(undefined8 *)(puVar49 + 0x30) = uVar51;
      pcVar38 = UNRECOVERED_JUMPTABLE_07;
      if (bVar6) {
        uVar35 = 0;
      }
      else {
        if (UNRECOVERED_JUMPTABLE_07 == (code *)0x0) {
          pcVar38 = (code *)0x0;
          uVar35 = 0x200;
        }
        else {
          uVar35 = (ushort)((int)puVar59 << 8) | 7;
        }
        uVar28 = 0;
      }
      iVar102 = *(int *)(lVar54 + 0x18);
      *(ulong *)(puVar49 + *(int *)(lVar54 + 0x14)) = uVar55;
      *(code **)(puVar49 + iVar102) = pcVar58;
      puVar39 = (undefined8 *)(puVar49 + *(int *)(lVar54 + 0x1c));
      *puVar39 = pcVar38;
      puVar39[1] = 0;
      *(ushort *)(puVar39 + 2) = uVar35;
      *(undefined1 *)((long)puVar39 + 0x12) = uVar28;
      pcVar38 = *(code **)(lVar46 + 8);
      _swift_errorRetain(pcVar58);
      FUN_10081c834(UNRECOVERED_JUMPTABLE_07,puVar59,uVar40);
      (*pcVar38)(puVar49,uVar43,lVar46);
      FUN_10080a754(puVar49);
      _swift_task_dealloc(puVar49);
      FUN_100004594(lVar19 + 0x10);
    }
    if (bVar6) {
      *(code **)(lVar19 + 0x60) = UNRECOVERED_JUMPTABLE_07;
      bVar8 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
      if ((bVar8 & 1) == 0) {
        FUN_1007fb2c4(UNRECOVERED_JUMPTABLE_04,HVar22.unknown,uVar26,uVar26 >> 0x10);
      }
      else {
        _swift_errorRetain(UNRECOVERED_JUMPTABLE_07);
        puVar21 = &DAT_100fe7218;
        FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
        _swift_willThrowTypedImpl
                  (lVar19 + 0x60,puVar21,
                   PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
        FUN_1007fb2c4(UNRECOVERED_JUMPTABLE_04,HVar22.unknown,uVar26,uVar26 >> 0x10);
        FUN_10081c820(UNRECOVERED_JUMPTABLE_07,puVar59,1);
        HVar22.unknown = puVar59;
      }
      _swift_errorRelease(pcVar58);
      UNRECOVERED_JUMPTABLE_07 = *(code **)(lVar57 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010081a944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_07)();
      SVar85.bridgeObject = HVar22.unknown;
      SVar85.str = (char *)UNRECOVERED_JUMPTABLE_07;
      return SVar85;
    }
    FUN_1007fb2c4(UNRECOVERED_JUMPTABLE_04,HVar22.unknown,uVar26,uVar26 >> 0x10);
    _swift_errorRelease(pcVar58);
    UNRECOVERED_JUMPTABLE_04 = *(code **)(lVar57 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010081a7c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_04)(UNRECOVERED_JUMPTABLE_07);
    SVar84.bridgeObject = UNRECOVERED_JUMPTABLE_04;
    SVar84.str = (char *)UNRECOVERED_JUMPTABLE_07;
    return SVar84;
  case (code **)0x1d:
                    /* WARNING: Could not recover jumptable at 0x000100819430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)UNRECOVERED_JUMPTABLE_08.unknown)();
    SVar82.bridgeObject = UNRECOVERED_JUMPTABLE.unknown;
    SVar82.str = UNRECOVERED_JUMPTABLE_08.unknown;
    return SVar82;
  case (code **)0x1e:
    bVar8 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast
                      ((__int16)UNRECOVERED_JUMPTABLE_08.unknown,
                       (__int16)UNRECOVERED_JUMPTABLE.unknown,(__int16)param_3,(__int16)param_4,0,0)
    ;
    if ((bVar8 & 1) == 0) {
      FUN_1007fb2c4();
    }
    else {
      _swift_errorRetain();
      puVar59 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (unaff_x24 + 0x60,puVar59,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      FUN_1007fb2c4();
      FUN_1002ec258();
    }
    _swift_errorRelease();
    UNRECOVERED_JUMPTABLE_07 = *(code **)(unaff_x22 + 8);
    pcVar16 = (char *)0x0;
                    /* WARNING: Could not recover jumptable at 0x000100817560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_07)(0);
    SVar76.bridgeObject = UNRECOVERED_JUMPTABLE_07;
    SVar76.str = pcVar16;
    return SVar76;
  case (code **)0x1f:
    _swift_allocError();
    *(undefined **)UNRECOVERED_JUMPTABLE.unknown = unaff_x21.unknown;
    *(code **)((long)UNRECOVERED_JUMPTABLE.unknown + 8) = unaff_x19;
    *(undefined8 *)((long)UNRECOVERED_JUMPTABLE.unknown + 0x10) = 0;
    *(undefined8 *)((long)UNRECOVERED_JUMPTABLE.unknown + 0x18) = 0;
    *(undefined1 *)((long)UNRECOVERED_JUMPTABLE.unknown + 0x20) = 0;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain();
    FUN_1007fb2c4();
    uVar33 = 0;
    FUN_10080b3ec(*(long *)(unaff_x27 + 0x80) + 0x18,unaff_x27 + 0x38);
    UNRECOVERED_JUMPTABLE_07 = *(code **)(unaff_x27 + 0x90);
    uVar18 = *(undefined8 *)(unaff_x27 + 0x88);
    if (*(long *)(unaff_x27 + 0x50) == 0) {
      uVar43 = *(undefined8 *)(unaff_x27 + 0x90);
      _swift_bridgeObjectRelease(unaff_x27);
      _swift_bridgeObjectRelease(uVar18);
      _swift_bridgeObjectRelease(uVar43);
      FUN_10080a674(unaff_x27 + 0x38);
      UNRECOVERED_JUMPTABLE_04 = unaff_x26;
    }
    else {
      uVar33 = *(undefined8 *)(unaff_x27 + 0x78);
      uStack_a8._0_4_ = (undefined4)uVar33;
      uStack_a8._4_2_ = (__int16)((ulong)uVar33 >> 0x20);
      uStack_a8._6_2_ = (undefined2)((ulong)uVar33 >> 0x30);
      uStack_88 = 0;
      uStack_84 = 0;
      uVar33 = *(undefined8 *)(unaff_x27 + 0x68);
      puVar59 = *(undefined **)(unaff_x27 + 0x70);
      local_90._4_4_ = (uint)unaff_x26;
      FUN_100076508(unaff_x27 + 0x38,unaff_x27 + 0x10);
      uVar43 = *(undefined8 *)(unaff_x27 + 0x28);
      lVar57 = *(long *)(unaff_x27 + 0x30);
      FUN_100004640(unaff_x27 + 0x10,uVar43);
      lVar19 = 0;
      FUN_1007fb264();
      uStack_a0._4_2_ = 1;
      uStack_a0._6_1_ = 0;
      uStack_a0._7_1_ = 0;
      puVar49 = (undefined1 *)(*(long *)(*(long *)(lVar19 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0)
      ;
      _swift_task_alloc();
      FUN_1007fb128();
      DVar20.unknown = puVar59;
      _swift_bridgeObjectRetain();
      Foundation::Date::get_now(DVar20);
      *puVar49 = 1;
      *(code **)(puVar49 + 0x10) = UNRECOVERED_JUMPTABLE_07;
      *(undefined8 *)(puVar49 + 8) = uVar18;
      puVar49[0x18] = 6;
      *(undefined8 *)(puVar49 + 0x20) = uVar33;
      *(undefined **)(puVar49 + 0x28) = puVar59;
      uVar33 = CONCAT44(uStack_84,uStack_88);
      UNRECOVERED_JUMPTABLE_04 = (code *)(ulong)local_90._4_4_;
      *(ulong *)(puVar49 + 0x30) =
           CONCAT26(uStack_a8._6_2_,CONCAT24(uStack_a8._4_2_,(undefined4)uStack_a8));
      iVar102 = *(int *)(lVar19 + 0x18);
      *(code **)(puVar49 + *(int *)(lVar19 + 0x14)) = unaff_x27;
      *(undefined8 *)(puVar49 + iVar102) = uVar33;
      puVar39 = (undefined8 *)(puVar49 + *(int *)(lVar19 + 0x1c));
      *puVar39 = UNRECOVERED_JUMPTABLE_08.unknown;
      puVar39[1] = 0;
      *(undefined2 *)(puVar39 + 2) = 0;
      *(undefined1 *)((long)puVar39 + 0x12) = 1;
      pcVar58 = *(code **)(lVar57 + 8);
      _swift_errorRetain(uVar33);
      FUN_10081c834(UNRECOVERED_JUMPTABLE_08.unknown,UNRECOVERED_JUMPTABLE_04,
                    CONCAT13(uStack_a0._7_1_,CONCAT12(uStack_a0._6_1_,uStack_a0._4_2_)));
      unaff_x28 = (code *)((ulong)unaff_x28 & 0xffffffff);
      (*pcVar58)(puVar49,uVar43,lVar57);
      FUN_10080a754(puVar49);
      _swift_task_dealloc(puVar49);
      FUN_100004594(unaff_x27 + 0x10);
    }
    *(undefined **)(unaff_x27 + 0x60) = UNRECOVERED_JUMPTABLE_08.unknown;
    bVar8 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar8 & 1) == 0) {
      FUN_1007fb2c4(unaff_x23,UNRECOVERED_JUMPTABLE_07,unaff_x28,(ulong)unaff_x28 >> 0x10 & 0xffff);
    }
    else {
      _swift_errorRetain(UNRECOVERED_JUMPTABLE_08.unknown);
      puVar59 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (unaff_x27 + 0x60,puVar59,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      FUN_1007fb2c4(unaff_x23,UNRECOVERED_JUMPTABLE_07,unaff_x28,(ulong)unaff_x28 >> 0x10 & 0xffff);
      FUN_10081c820(UNRECOVERED_JUMPTABLE_08.unknown,UNRECOVERED_JUMPTABLE_04,1);
      UNRECOVERED_JUMPTABLE_07 = UNRECOVERED_JUMPTABLE_04;
    }
    _swift_errorRelease(uVar33);
    UNRECOVERED_JUMPTABLE_04 = *(code **)(unaff_x26 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010081a39c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_04)();
    SVar83.bridgeObject = UNRECOVERED_JUMPTABLE_07;
    SVar83.str = (char *)UNRECOVERED_JUMPTABLE_04;
    return SVar83;
  case (code **)0x2c:
  case (code **)0x5f:
  case (code **)0x73:
  case (code **)0x93:
  case (code **)0xa7:
  case (code **)0xc7:
  case (code **)0xe7:
  case (code **)0xe8:
    goto switchD_1007fd6f0_caseD_2c;
  case (code **)0x2d:
    Swift::Hasher::_combine((__uint64)UNRECOVERED_JUMPTABLE_08.unknown,UNRECOVERED_JUMPTABLE);
    SVar97.bridgeObject = unaff_x21.unknown;
    SVar97.str = (char *)unaff_x19;
    Swift::String::hash(unaff_x20,SVar97);
    SVar64.bridgeObject = unaff_x19;
    SVar64.str = unaff_x20.unknown;
    return SVar64;
  case (code **)0x30:
    uStack_a0._4_2_ = (undefined2)((ulong)unaff_x27 >> 0x20);
    uStack_a0._6_1_ = (undefined1)((ulong)unaff_x27 >> 0x30);
    uStack_a0._7_1_ = (undefined1)((ulong)unaff_x27 >> 0x38);
    local_90._4_4_ = (uint)((ulong)unaff_x25 >> 0x20);
    uVar33 = *(undefined8 *)(unaff_x20.unknown + 0x40);
    lVar57 = *(long *)(unaff_x20.unknown + 0x48);
    uStack_a0._0_4_ = uVar56;
    local_90._0_4_ = (int)unaff_x25;
    uStack_88 = uVar9;
    uStack_84 = uVar5;
    FUN_100004640(unaff_x20.unknown + 0x28,uVar33);
    (**(code **)(lVar57 + 8))
              (UNRECOVERED_JUMPTABLE_08.unknown,UNRECOVERED_JUMPTABLE.unknown,uVar33,lVar57);
    pcVar58 = *(code **)(unaff_x20.unknown + 0x10);
    UNRECOVERED_JUMPTABLE_07 = (code *)UNRECOVERED_JUMPTABLE_08.unknown;
    UNRECOVERED_JUMPTABLE_04 = (code *)UNRECOVERED_JUMPTABLE.unknown;
    if (*(long *)(pcVar58 + 0x10) == 0) {
LAB_10083bf78:
      pcVar58 = (code *)0x0;
      pcVar38 = (code *)0x0;
      uVar35 = 0x200;
    }
    else {
      _swift_bridgeObjectRetain(pcVar58);
      FUN_100071370();
      if (((ulong)UNRECOVERED_JUMPTABLE_04 & 1) == 0) {
        _swift_bridgeObjectRelease(pcVar58);
        UNRECOVERED_JUMPTABLE_07 = pcVar58;
        goto LAB_10083bf78;
      }
      puVar39 = (undefined8 *)(*(long *)(pcVar58 + 0x38) + (long)UNRECOVERED_JUMPTABLE_07 * 0x18);
      UNRECOVERED_JUMPTABLE_07 = (code *)*puVar39;
      UNRECOVERED_JUMPTABLE_04 = (code *)puVar39[1];
      uStack_a8._6_2_ = (undefined2)((ulong)param_3 >> 0x10);
      uStack_a8._4_2_ = (__int16)param_3;
      FUN_1001037b4(UNRECOVERED_JUMPTABLE_07,UNRECOVERED_JUMPTABLE_04);
      _swift_bridgeObjectRelease(pcVar58);
      pcVar58 = (code *)UNRECOVERED_JUMPTABLE_08.unknown;
      pcVar38 = (code *)UNRECOVERED_JUMPTABLE.unknown;
      pcVar17 = UNRECOVERED_JUMPTABLE_07;
      FUN_10083a9e8();
      if ((code *)unaff_x21.unknown != (code *)0x0) {
        FUN_10003bf2c(UNRECOVERED_JUMPTABLE_07,UNRECOVERED_JUMPTABLE_04);
        _swift_bridgeObjectRelease(UNRECOVERED_JUMPTABLE.unknown);
        UNRECOVERED_JUMPTABLE_07 = (code *)UNRECOVERED_JUMPTABLE.unknown;
        goto LAB_10083bf90;
      }
      FUN_10003bf2c(UNRECOVERED_JUMPTABLE_07,UNRECOVERED_JUMPTABLE_04);
      uVar35 = (ushort)pcVar17 & 0x1ff;
    }
    *ppcVar31 = (code *)UNRECOVERED_JUMPTABLE_08.unknown;
    *(undefined **)((long)ppcVar31 + 8) = UNRECOVERED_JUMPTABLE.unknown;
    *(code **)((long)ppcVar31 + 0x10) = pcVar58;
    *(code **)((long)ppcVar31 + 0x18) = pcVar38;
    *(ushort *)((long)ppcVar31 + 0x20) = uVar35;
LAB_10083bf90:
    SVar92.bridgeObject = UNRECOVERED_JUMPTABLE_04;
    SVar92.str = (char *)UNRECOVERED_JUMPTABLE_07;
    return SVar92;
  case (code **)0x32:
  case (code **)0x3d:
  case (code **)0x49:
    goto switchD_1007fd6f0_caseD_32;
  case (code **)0x38:
    goto switchD_1007fd6f0_caseD_38;
  case (code **)0x39:
  case (code **)0x6b:
  case (code **)0x8b:
  case (code **)0x9f:
  case (code **)0xbf:
  case (code **)0xdf:
  case (code **)0xfb:
    goto switchD_1007fd6f0_caseD_39;
  case (code **)0x3c:
    puVar59 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_100800568(PTR___swiftEmptyArrayStorage_100eae0d8,FUN_100071370);
    HVar22.unknown = UNRECOVERED_JUMPTABLE.unknown;
    FUN_10082e974(UNRECOVERED_JUMPTABLE_08.unknown,UNRECOVERED_JUMPTABLE.unknown,puVar59);
    _swift_bridgeObjectRelease(UNRECOVERED_JUMPTABLE.unknown);
    _swift_bridgeObjectRelease(puVar59);
    SVar66.bridgeObject = HVar22.unknown;
    SVar66.str = UNRECOVERED_JUMPTABLE_08.unknown;
    return SVar66;
  case (code **)0x3e:
switchD_1007fd6f0_caseD_3e:
    FUN_100076508(UNRECOVERED_JUMPTABLE_08.unknown,UNRECOVERED_JUMPTABLE.unknown);
    FUN_100004640();
    UNRECOVERED_JUMPTABLE_08.unknown = (code *)0x0;
    FUN_1007fb264();
    puVar36 = (ushort *)&stack0xffffffffffffffd0;
    ppcVar31 = &pcStack_b0;
    unaff_x20.unknown = UNRECOVERED_JUMPTABLE_08.unknown;
    lStack_128 = in_stack_ffffffffffffff90;
    in_stack_fffffffffffffee0 = in_stack_ffffffffffffff88;
  case (code **)0x51:
  case (code **)0x65:
  case (code **)0x7d:
  case (code **)0x81:
  case (code **)0x85:
  case (code **)0x99:
    unaff_x27 = in_stack_ffffffffffffff20;
    *(code ***)(puVar36 + -0x80) = ppcVar31;
    lVar57 = -(*(long *)(*(long *)(UNRECOVERED_JUMPTABLE_08.unknown + -8) + 0x40) + 0xfU &
              0xfffffffffffffff0);
    puVar49 = (undefined1 *)((long)&pcStack_b0 + lVar57);
    FUN_1007fb128();
    DVar20.unknown = in_stack_fffffffffffffef8;
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar20);
    *puVar49 = 0;
    *(code **)((long)&uStack_a8 + lVar57) = unaff_x24;
    *(code **)((long)&uStack_a0 + lVar57) = in_stack_ffffffffffffff38;
    (&stack0xffffffffffffff68)[lVar57] = 0;
    *(code **)((long)&local_90 + lVar57) = in_stack_fffffffffffffef0;
    *(undefined **)((long)&uStack_88 + lVar57) = in_stack_fffffffffffffef8;
    *(undefined **)(&stack0xffffffffffffff80 + lVar57) = in_stack_ffffffffffffff00;
    bVar6 = ((ulong)unaff_x25 & 1) == 0;
    uVar26 = (uint)((ulong)pcVar38 >> 0x20);
    UNRECOVERED_JUMPTABLE_07 = unaff_x26;
    if (bVar6) {
      _swift_errorRetain(unaff_x19);
      uVar53 = (ulong)uVar26;
      uVar55 = uVar53;
      FUN_10081c834(unaff_x26,uVar53,0);
      FUN_1005b32e4();
      FUN_10081c820(unaff_x26,uVar53,0);
      _swift_errorRelease(0);
      uVar29 = (undefined2)(uVar26 << 8);
    }
    else {
      _swift_errorRetain(unaff_x19);
      FUN_10081c834(unaff_x26,uVar26,1);
      _swift_errorRelease(0);
      uVar55 = 0;
      uVar29 = 0;
    }
    iVar102 = *(int *)(unaff_x20.unknown + 0x18);
    *(ulong *)(puVar49 + *(int *)(unaff_x20.unknown + 0x14)) = in_stack_ffffffffffffff28;
    *(code **)(puVar49 + iVar102) = unaff_x19;
    puVar39 = (undefined8 *)(puVar49 + *(int *)(unaff_x20.unknown + 0x1c));
    *puVar39 = UNRECOVERED_JUMPTABLE_07;
    puVar39[1] = uVar55;
    *(undefined2 *)(puVar39 + 2) = uVar29;
    *(bool *)((long)puVar39 + 0x12) = !bVar6;
    (**(code **)(lStack_128 + 8))(puVar49,in_stack_fffffffffffffee0);
    FUN_10080a754(puVar49);
    FUN_100004594(&local_90);
    uVar55 = (ulong)pcVar38 & 0xffffffff;
    if (((ulong)unaff_x25 & 1) == 0) {
      _swift_bridgeObjectRetain(unaff_x26);
      FUN_10080a6bc(in_stack_ffffffffffffff10,in_stack_ffffffffffffff18,uVar55,uStack_118._4_4_);
      FUN_1007fb2c4(unaff_x27,pcStack_c0);
      pvVar24 = (void *)(ulong)uVar26;
      FUN_10081c820(unaff_x26,pvVar24,0);
      _swift_errorRelease(unaff_x19);
      _swift_bridgeObjectRelease(in_stack_ffffffffffffff30);
    }
    else {
LAB_10083d7b4:
      local_90._0_4_ = (uint)unaff_x26;
      local_90._4_4_ = (uint)((ulong)unaff_x26 >> 0x20);
      bVar8 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
      _swift_errorRetain(unaff_x26);
      if ((bVar8 & 1) != 0) {
        puVar59 = &DAT_100fe7218;
        FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
        _swift_willThrowTypedImpl
                  (&local_90,puVar59,
                   PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      }
      FUN_10080a6bc(in_stack_ffffffffffffff10,in_stack_ffffffffffffff18,uVar55,uStack_118._4_4_);
      FUN_1007fb2c4(unaff_x27,pcStack_c0);
      pvVar24 = (void *)((ulong)pcVar38 >> 0x20);
      FUN_10081c820(unaff_x26,pvVar24,1);
      _swift_errorRelease(unaff_x19);
      _swift_bridgeObjectRelease(in_stack_ffffffffffffff30);
    }
    SVar96.bridgeObject = pvVar24;
    SVar96.str = (char *)unaff_x26;
    return SVar96;
  case (code **)0x42:
    goto switchD_1007fd6f0_caseD_42;
  case (code **)0x43:
    pvVar24 = (void *)CONCAT44(uStack_84,uStack_88);
    FUN_100806454(UNRECOVERED_JUMPTABLE_08.unknown,pvVar24);
    SVar86.bridgeObject = pvVar24;
    SVar86.str = UNRECOVERED_JUMPTABLE_08.unknown;
    return SVar86;
  case (code **)0x44:
  case (code **)0x4c:
    goto switchD_1007fd6f0_caseD_44;
  case (code **)0x46:
    goto switchD_1007fd6f0_caseD_46;
  case (code **)0x48:
    _swift_bridgeObjectRetain();
    _swift_isUniquelyReferenced_nonNull_native();
    uStack_a0._4_2_ = (undefined2)((ulong)unaff_x19 >> 0x20);
    uStack_a0._6_1_ = (undefined1)((ulong)unaff_x19 >> 0x30);
    uStack_a0._7_1_ = (undefined1)((ulong)unaff_x19 >> 0x38);
    uStack_a0._0_4_ = uVar37;
    FUN_100800c1c();
    _swift_bridgeObjectRelease();
    SVar65.bridgeObject._4_2_ = uStack_a0._4_2_;
    SVar65.bridgeObject._0_4_ = (uint)uStack_a0;
    SVar65.bridgeObject._6_1_ = uStack_a0._6_1_;
    SVar65.bridgeObject._7_1_ = uStack_a0._7_1_;
    SVar65.str = (char *)in_stack_ffffffffffffff68;
    return SVar65;
  case (code **)0x4a:
    goto switchD_1007fd6f0_caseD_4a;
  case (code **)0x4d:
    local_90._0_4_ = uVar26;
    TVar11 = Foundation::TimeZone::typeMetadataAccessor();
    lVar57 = *(long *)(TVar11.unknown + -8);
    lVar19 = (long)&pcStack_b0 - (*(long *)(lVar57 + 0x40) + 0xfU & 0xfffffffffffffff0);
    UNRECOVERED_JUMPTABLE_07 = unaff_x23;
    _swift_bridgeObjectRetain();
    FUN_1005b4c38();
    UNRECOVERED_JUMPTABLE_04 = UNRECOVERED_JUMPTABLE_07;
    FUN_1005b4634();
    if (((ulong)UNRECOVERED_JUMPTABLE_04 & 1) == 0) {
      uStack_a0._4_2_ = (undefined2)((ulong)unaff_x26 >> 0x20);
      uStack_a0._6_1_ = (undefined1)((ulong)unaff_x26 >> 0x30);
      uStack_a0._7_1_ = (undefined1)((ulong)unaff_x26 >> 0x38);
      uStack_a0._0_4_ = (uint)unaff_x26;
      IVar12 = NSFileManager::defaultManager
                         ((ID)&_OBJC_CLASS___NSFileManager,UNRECOVERED_JUMPTABLE.unknown);
      FUN_1005b32e4(UNRECOVERED_JUMPTABLE_07);
      _swift_bridgeObjectRelease(UNRECOVERED_JUMPTABLE_07);
      op = UNRECOVERED_JUMPTABLE.unknown;
      pNVar13 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(UNRECOVERED_JUMPTABLE.unknown);
      local_90._0_4_ = 0;
      local_90._4_4_ = 0;
      IVar12 = NSFileManager::createDirectoryAtPath_withIntermediateDirectories_attributes_error_
                         (IVar12,op,pNVar13,1,0,&local_90);
      if ((int)IVar12 != 0) {
        unaff_x26 = (code *)CONCAT17(uStack_a0._7_1_,
                                     CONCAT16(uStack_a0._6_1_,
                                              CONCAT24(uStack_a0._4_2_,(uint)uStack_a0)));
        goto LAB_1007fdfd0;
      }
      _swift_bridgeObjectRelease();
      Foundation::__convertNSErrorToError();
      _swift_willThrow(0);
      UNRECOVERED_JUMPTABLE_07 = *(code **)(lVar57 + 8);
      unaff_x26 = (code *)CONCAT17(uStack_a0._7_1_,
                                   CONCAT16(uStack_a0._6_1_,
                                            CONCAT24(uStack_a0._4_2_,(uint)uStack_a0)));
    }
    else {
      _swift_bridgeObjectRelease(UNRECOVERED_JUMPTABLE_07);
LAB_1007fdfd0:
      FUN_1005b32d0(&stack0xffffffffffffff6c,FUN_1007fe49c,&local_90);
      _swift_bridgeObjectRelease();
      if (unaff_x24 == (code *)0x0) {
        (**(code **)(lVar57 + 0x10))(lVar19,unaff_x26,TVar11.unknown);
        unaff_x23 = (code *)0x0;
        FUN_1007fe194();
        _swift_allocObject();
        FUN_1007fc55c((int)((ulong)in_stack_ffffffffffffff68 >> 0x20),lVar19);
        (**(code **)(lVar57 + 8))(unaff_x26,TVar11.unknown);
        goto LAB_1007fe0c8;
      }
      UNRECOVERED_JUMPTABLE_07 = *(code **)(lVar57 + 8);
    }
    (*UNRECOVERED_JUMPTABLE_07)(unaff_x26,TVar11.unknown);
LAB_1007fe0c8:
    if (*(code **)PTR____stack_chk_guard_100ea82f0 == pcVar30) {
      SVar63.bridgeObject = TVar11.unknown;
      SVar63.str = (char *)unaff_x23;
      return SVar63;
    }
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  case (code **)0x4e:
    UNRECOVERED_JUMPTABLE_04 = unaff_x22;
    local_90._0_4_ = uVar26;
    (*unaff_x19)();
    UNRECOVERED_JUMPTABLE_07 = (code *)UNRECOVERED_JUMPTABLE_08.unknown;
    puVar59 = UNRECOVERED_JUMPTABLE.unknown;
    pcVar58 = UNRECOVERED_JUMPTABLE_04;
    FUN_100804a74();
    uVar26 = (uint)pcVar58;
    FUN_1007fb2c4(UNRECOVERED_JUMPTABLE.unknown,UNRECOVERED_JUMPTABLE_04,param_4,
                  (ulong)param_4 >> 0x10 & 0xffff);
    _swift_bridgeObjectRelease(UNRECOVERED_JUMPTABLE_08.unknown);
    lVar57 = 0xff;
    _swift_getTupleTypeMetadata2();
    OVar7 = Swift::Optional::typeMetadataAccessor();
    lVar19 = CONCAT71(extraout_var,OVar7.value);
    lVar46 = *(long *)(lVar19 + -8);
    lVar42 = *(long *)(lVar46 + 0x40);
    lVar54 = (long)&pcStack_b0 - (lVar42 + 0xfU & 0xfffffffffffffff0);
    if ((uVar26 >> 0x10 & 0xff) == 1) {
      local_90._0_4_ = (uint)UNRECOVERED_JUMPTABLE_07;
      local_90._4_4_ = (uint)((ulong)UNRECOVERED_JUMPTABLE_07 >> 0x20);
      bVar8 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
      if ((bVar8 & 1) != 0) {
        puVar21 = &DAT_100fe7218;
        FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
        _swift_willThrowTypedImpl
                  (&local_90,puVar21,
                   PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      }
      pcVar58 = (code *)0x200;
      UNRECOVERED_JUMPTABLE_04 = (code *)0x0;
      puVar21 = (undefined *)0x0;
    }
    else {
      FUN_1007fb28c(UNRECOVERED_JUMPTABLE_07,puVar59,pcVar58);
      UNRECOVERED_JUMPTABLE_04 = UNRECOVERED_JUMPTABLE_07;
      puVar21 = puVar59;
    }
    lVar48 = lVar54 - (lVar42 + 0xfU & 0xfffffffffffffff0);
    pcStack_b0 = (code *)CONCAT62(pcStack_b0._2_6_,(short)pcVar58);
    puVar14 = &DAT_100fe7180;
    pcStack_c0 = UNRECOVERED_JUMPTABLE_04;
    FUN_1000f7830(&DAT_100fe7180,&DAT_100c7ccf0);
    puVar15 = &DAT_100fe7218;
    FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
    FUN_100617fb8(lVar48,FUN_10080aff0,&local_90,puVar14,puVar15,lVar57,
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,
                  &stack0xffffffffffffff20);
    FUN_1007fb2d8(UNRECOVERED_JUMPTABLE_04,puVar21,pcVar58);
    (**(code **)(lVar46 + 0x20))(lVar54,lVar48,lVar19);
    FUN_1000f8cac(uStack_148,&pcStack_c0,&DAT_100fe7238,&DAT_100c7c0c0);
    if (CONCAT26(uStack_a8._6_2_,CONCAT24(uStack_a8._4_2_,(undefined4)uStack_a8)) == 0) {
      _swift_errorRelease(0);
      FUN_1007fb2c4(UNRECOVERED_JUMPTABLE_07,puVar59,uVar26,uVar26 >> 0x10);
      _swift_bridgeObjectRelease(uStack_140);
      _swift_bridgeObjectRelease(uStack_138);
      _swift_bridgeObjectRelease(unaff_x21.unknown);
      FUN_10080a674(&pcStack_c0);
    }
    else {
      FUN_100076508(&pcStack_c0,&local_90);
      FUN_100004640(&local_90,uStack_150);
      lVar48 = 0;
      FUN_1007fb264();
      puVar49 = (undefined1 *)
                (lVar54 - (*(long *)(*(long *)(lVar48 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
      FUN_1007fb128();
      DVar20.unknown = param_15;
      _swift_bridgeObjectRetain();
      Foundation::Date::get_now(DVar20);
      *puVar49 = 0;
      *(undefined8 *)(puVar49 + 8) = uStack_138;
      *(undefined8 *)(puVar49 + 0x10) = uStack_140;
      puVar49[0x18] = (char)unaff_x22;
      *(undefined8 *)(puVar49 + 0x20) = param_14;
      *(undefined **)(puVar49 + 0x28) = param_15;
      *(undefined8 *)(puVar49 + 0x30) = param_16;
      uStack_a8._0_4_ = SUB84(param_12,0);
      uStack_a8._4_2_ = (__int16)((ulong)param_12 >> 0x20);
      uStack_a8._6_2_ = (undefined2)((ulong)param_12 >> 0x30);
      uStack_a0._0_4_ = (uint)param_13;
      uStack_a0._4_2_ = (undefined2)((ulong)param_13 >> 0x20);
      uStack_a0._6_1_ = (undefined1)((ulong)param_13 >> 0x30);
      uStack_a0._7_1_ = (undefined1)((ulong)param_13 >> 0x38);
      pcStack_b0 = unaff_x28;
      FUN_1006946ec(&stack0xffffffffffffff20,FUN_10080b008,&pcStack_c0,lVar19,
                    PTR___type_metadata_for_Swift_Never_100eadc38,&DAT_100f047e0,
                    PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
      iVar102 = *(int *)(lVar48 + 0x18);
      *(undefined **)(puVar49 + *(int *)(lVar48 + 0x14)) = unaff_x21.unknown;
      *(undefined8 *)(puVar49 + iVar102) = 0;
      puVar39 = (undefined8 *)(puVar49 + *(int *)(lVar48 + 0x1c));
      puVar39[1] = in_stack_ffffffffffffff28;
      *puVar39 = in_stack_ffffffffffffff20;
      *(short *)(puVar39 + 2) = (short)in_stack_ffffffffffffff30;
      *(undefined1 *)((long)puVar39 + 0x12) = 0;
      UNRECOVERED_JUMPTABLE_04 = *(code **)(in_stack_ffffffffffffff10 + 8);
      _swift_errorRetain(0);
      (*UNRECOVERED_JUMPTABLE_04)(puVar49,uStack_150,in_stack_ffffffffffffff10);
      FUN_1007fb2c4(UNRECOVERED_JUMPTABLE_07,puVar59,uVar26,uVar26 >> 0x10);
      _swift_errorRelease(0);
      FUN_10080a754(puVar49);
      FUN_100004594(&local_90);
    }
    lVar42 = lVar54 - (lVar42 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar46 + 0x20))(lVar42,lVar54,lVar19);
    lVar54 = lVar42;
    (**(code **)(*(long *)(lVar57 + -8) + 0x30))(lVar42,1,lVar57);
    if ((int)lVar54 == 1) {
      (**(code **)(lVar46 + 8))(lVar42,lVar19);
      puVar49 = &DAT_00000001;
      (**(code **)(*(long *)(unaff_x28 + -8) + 0x38))(in_stack_fffffffffffffef0,1,1);
    }
    else {
      lVar57 = *(long *)(unaff_x28 + -8);
      (**(code **)(lVar57 + 0x20))(in_stack_fffffffffffffef0,lVar42,unaff_x28);
      puVar49 = (undefined1 *)0x0;
      (**(code **)(lVar57 + 0x38))(in_stack_fffffffffffffef0,0,1,unaff_x28);
    }
    SVar70.bridgeObject = puVar49;
    SVar70.str = (char *)in_stack_fffffffffffffef0;
    return SVar70;
  case (code **)0x50:
    SVar71.bridgeObject = UNRECOVERED_JUMPTABLE.unknown;
    SVar71.str = UNRECOVERED_JUMPTABLE_08.unknown;
    return SVar71;
  case (code **)0x58:
    goto switchD_1007fd6f0_caseD_58;
  case (code **)0x5a:
    goto switchD_1007fd6f0_caseD_5a;
  case (code **)0x62:
    goto switchD_1007fd6f0_caseD_62;
  case (code **)0x64:
    goto switchD_1007fd6f0_caseD_64;
  case (code **)0x6a:
    _swift_errorRetain();
    in_stack_ffffffffffffff18 = 0;
    unaff_x26 = (code *)0x0;
    in_stack_fffffffffffffee0 = (code *)0x0;
    unaff_x20.unknown = &DAT_00000001;
    uVar40 = 1;
    goto LAB_100827544;
  case (code **)0x6c:
    goto switchD_1007fd6f0_caseD_6c;
  case (code **)0x6e:
    goto switchD_1007fd6f0_caseD_6e;
  case (code **)0x76:
  case (code **)0x7a:
  case (code **)0x7e:
  case (code **)0x82:
    goto switchD_1007fd6f0_caseD_76;
  case (code **)0x78:
    goto LAB_10083bcd4;
  case (code **)0x7c:
    FUN_1000f7830();
    UNRECOVERED_JUMPTABLE.unknown = UNRECOVERED_JUMPTABLE_08.unknown;
    param_3 = (code *)PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
  case (code **)0x80:
    _swift_willThrowTypedImpl(&local_90,UNRECOVERED_JUMPTABLE.unknown,param_3);
LAB_10080b5d4:
    _swift_bridgeObjectRetain();
    unaff_x24 = (code *)0x0;
    ppcVar31 = (code **)in_stack_ffffffffffffff10;
switchD_1007fd6f0_caseD_64:
    FUN_10080b3ec((code *)((long)ppcVar31 + 0x18),&stack0xffffffffffffff48);
    if (CONCAT17(uStack_a0._7_1_,CONCAT16(uStack_a0._6_1_,CONCAT24(uStack_a0._4_2_,(uint)uStack_a0))
                ) == 0) {
      _swift_errorRelease(unaff_x24);
      FUN_1007fb2c4(unaff_x22,in_stack_ffffffffffffff38);
      _swift_bridgeObjectRelease(in_stack_ffffffffffffff20);
      _swift_bridgeObjectRelease(in_stack_ffffffffffffff28);
      _swift_bridgeObjectRelease(in_stack_ffffffffffffff18);
      FUN_10080a674(&stack0xffffffffffffff48);
      _swift_bridgeObjectRelease();
    }
    else {
      FUN_100076508(&stack0xffffffffffffff48,&local_90);
      FUN_100004640(&local_90,in_stack_ffffffffffffff88);
      lVar19 = 0;
      FUN_1007fb264();
      lVar57 = -(*(long *)(*(long *)(lVar19 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      puVar49 = (undefined1 *)((long)&pcStack_b0 + lVar57);
      FUN_1007fb128();
      DVar20.unknown = in_stack_fffffffffffffef8;
      _swift_bridgeObjectRetain();
      Foundation::Date::get_now(DVar20);
      *puVar49 = 0;
      *(ulong *)((long)&uStack_a8 + lVar57) = in_stack_ffffffffffffff28;
      *(code **)((long)&uStack_a0 + lVar57) = in_stack_ffffffffffffff20;
      (&stack0xffffffffffffff68)[lVar57] = 0;
      *(code **)((long)&local_90 + lVar57) = in_stack_fffffffffffffef0;
      *(undefined **)((long)&uStack_88 + lVar57) = in_stack_fffffffffffffef8;
      *(undefined **)(&stack0xffffffffffffff80 + lVar57) = in_stack_ffffffffffffff00;
      uVar29 = 0x100;
      if ((in_stack_ffffffffffffff08 & 0x100000000) == 0) {
        uVar29 = 0;
      }
      iVar102 = *(int *)(lVar19 + 0x18);
      *(ulong *)(puVar49 + *(int *)(lVar19 + 0x14)) = in_stack_ffffffffffffff18;
      *(code **)(puVar49 + iVar102) = unaff_x24;
      puVar39 = (undefined8 *)(puVar49 + *(int *)(lVar19 + 0x1c));
      *puVar39 = in_stack_ffffffffffffff30;
      puVar39[1] = unaff_x19;
      *(undefined2 *)(puVar39 + 2) = uVar29;
      *(undefined1 *)((long)puVar39 + 0x12) = 0;
      UNRECOVERED_JUMPTABLE_07 = *(code **)(in_stack_ffffffffffffff90 + 8);
      _swift_errorRetain(unaff_x24);
      _swift_bridgeObjectRetain(unaff_x19);
      (*UNRECOVERED_JUMPTABLE_07)(puVar49,in_stack_ffffffffffffff88,in_stack_ffffffffffffff90);
      FUN_1007fb2c4(unaff_x22,in_stack_ffffffffffffff38);
      _swift_errorRelease(unaff_x24);
      FUN_10080a754(puVar49);
      FUN_100004594(&local_90);
      _swift_bridgeObjectRelease(unaff_x27);
    }
    SVar72.bridgeObject = unaff_x19;
    SVar72.str = (char *)in_stack_ffffffffffffff30;
    return SVar72;
  case (code **)0x84:
    unaff_x22 = unaff_x23;
    if ((int)ppcVar31 != 0x200) {
      if (((ulong)unaff_x28 & 0xff) == 0) {
        in_stack_ffffffffffffff08 = ((ulong)unaff_x28 >> 8 & 1) << 0x20;
        FUN_1007fb28c();
        unaff_x24 = (code *)0x0;
        ppcVar31 = (code **)in_stack_ffffffffffffff10;
        unaff_x19 = in_stack_ffffffffffffff38;
        in_stack_ffffffffffffff30 = unaff_x23;
      }
      else {
        UNRECOVERED_JUMPTABLE_07 = unaff_x23;
        FUN_1000f4a4c();
        UNRECOVERED_JUMPTABLE_04 = UNRECOVERED_JUMPTABLE_07;
        FUN_10080b43c();
        unaff_x24 = (code *)&DAT_100f04860;
        _swift_allocError(&DAT_100f04860,UNRECOVERED_JUMPTABLE_04,0,0);
        *UNRECOVERED_JUMPTABLE_04 = SUB81(UNRECOVERED_JUMPTABLE_07,0);
        UNRECOVERED_JUMPTABLE_04[1] = (code)0x0;
        _swift_willThrow();
        _swift_bridgeObjectRetain();
        ppcVar31 = (code **)in_stack_ffffffffffffff10;
      }
      goto switchD_1007fd6f0_caseD_64;
    }
    FUN_1007fb2c4();
    goto LAB_10080b5d4;
  case (code **)0x8a:
    FUN_1007fb28c();
    uVar40 = 0;
    unaff_x25 = unaff_x24;
    in_stack_fffffffffffffee0 = unaff_x27;
LAB_100827544:
    in_stack_ffffffffffffff28 = CONCAT44(uVar37,uVar40);
    FUN_10080b3ec(unaff_x28 + 0x18,&stack0xffffffffffffff48);
    in_stack_ffffffffffffff20 = unaff_x25;
    if (CONCAT17(uStack_a0._7_1_,CONCAT16(uStack_a0._6_1_,CONCAT24(uStack_a0._4_2_,(uint)uStack_a0))
                ) == 0) {
      _swift_bridgeObjectRelease(in_stack_ffffffffffffff38);
      _swift_bridgeObjectRelease(pcStack_c0);
      _swift_bridgeObjectRelease(in_stack_ffffffffffffff30);
      FUN_10080a674(&stack0xffffffffffffff48);
      UNRECOVERED_JUMPTABLE_08.unknown = unaff_x26;
      pcVar38 = in_stack_fffffffffffffee0;
      unaff_x23 = in_stack_fffffffffffffee0;
    }
    else {
      uStack_118 = (long)in_stack_fffffffffffffee0 << 0x20;
      UNRECOVERED_JUMPTABLE_08.unknown = &stack0xffffffffffffff48;
      in_stack_fffffffffffffef0 = unaff_x24;
switchD_1007fd6f0_caseD_38:
      FUN_100076508(UNRECOVERED_JUMPTABLE_08.unknown,&local_90);
      FUN_100004640(&local_90,in_stack_ffffffffffffff88);
      lVar19 = 0;
      FUN_1007fb264();
      lVar57 = -(*(long *)(*(long *)(lVar19 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      puVar49 = (undefined1 *)((long)&pcStack_b0 + lVar57);
      FUN_1007fb128();
      DVar20.unknown = in_stack_ffffffffffffff00;
      _swift_bridgeObjectRetain();
      Foundation::Date::get_now(DVar20);
      *puVar49 = 0;
      *(code **)((long)&uStack_a8 + lVar57) = pcStack_c0;
      *(code **)((long)&uStack_a0 + lVar57) = in_stack_ffffffffffffff38;
      (&stack0xffffffffffffff68)[lVar57] = 2;
      *(undefined **)((long)&local_90 + lVar57) = in_stack_fffffffffffffef8;
      *(undefined **)((long)&uStack_88 + lVar57) = in_stack_ffffffffffffff00;
      *(ulong *)(&stack0xffffffffffffff80 + lVar57) = in_stack_ffffffffffffff08;
      bVar6 = ((ulong)unaff_x20.unknown & 1) == 0;
      if (bVar6) {
        uVar35 = (ushort)((int)(in_stack_ffffffffffffff18 >> 0x20) << 8) | 2;
      }
      else {
        _swift_errorRetain(unaff_x25);
        uVar35 = 0;
      }
      _swift_errorRetain(unaff_x26);
      _swift_errorRelease(0);
      iVar102 = *(int *)(lVar19 + 0x18);
      *(code **)(puVar49 + *(int *)(lVar19 + 0x14)) = in_stack_ffffffffffffff30;
      *(code **)(puVar49 + iVar102) = unaff_x26;
      puVar39 = (undefined8 *)(puVar49 + *(int *)(lVar19 + 0x1c));
      *puVar39 = unaff_x25;
      puVar39[1] = 0;
      *(ushort *)(puVar39 + 2) = uVar35;
      *(bool *)((long)puVar39 + 0x12) = !bVar6;
      (**(code **)(in_stack_ffffffffffffff90 + 8))
                (puVar49,in_stack_ffffffffffffff88,in_stack_ffffffffffffff90);
      FUN_10080a754(puVar49);
      FUN_100004594(&local_90);
      pcVar38 = (code *)(uStack_118 >> 0x20);
      UNRECOVERED_JUMPTABLE_08.unknown = unaff_x26;
      unaff_x23 = in_stack_fffffffffffffee0;
      unaff_x24 = in_stack_fffffffffffffef0;
    }
    uVar26 = (uint)(in_stack_ffffffffffffff28 >> 0x20);
    if (((ulong)unaff_x20.unknown & 1) == 0) {
      FUN_10080a6bc(in_stack_ffffffffffffff20,unaff_x23,pcVar38,
                    in_stack_ffffffffffffff28 & 0xffffffff);
      FUN_1007fb2c4(unaff_x24,unaff_x27,uVar26,uVar26 >> 0x10);
      _swift_errorRelease(UNRECOVERED_JUMPTABLE_08.unknown);
      UNRECOVERED_JUMPTABLE.unknown = unaff_x27;
switchD_1007fd6f0_caseD_9e:
    }
    else {
      local_90._0_4_ = (uint)unaff_x25;
      local_90._4_4_ = (uint)((ulong)unaff_x25 >> 0x20);
      bVar8 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
      _swift_errorRetain(unaff_x25);
      if ((bVar8 & 1) != 0) {
        puVar59 = &DAT_100fe7218;
        FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
        _swift_willThrowTypedImpl
                  (&local_90,puVar59,
                   PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      }
      param_4 = (code *)(in_stack_ffffffffffffff28 & 0xffffffff);
      unaff_x19 = (code *)(ulong)uVar26;
      unaff_x20.unknown = (undefined *)(ulong)(uVar26 >> 0x10);
      unaff_x22 = unaff_x27;
      unaff_x26 = (code *)UNRECOVERED_JUMPTABLE_08.unknown;
      uVar26 = (uint)local_90;
switchD_1007fd6f0_caseD_be:
      local_90._0_4_ = uVar26;
      UNRECOVERED_JUMPTABLE_08.unknown = unaff_x26;
      FUN_10080a6bc(in_stack_ffffffffffffff20,unaff_x23,pcVar38,param_4);
      FUN_1007fb2c4(unaff_x24,unaff_x22,unaff_x19,unaff_x20.unknown);
      UNRECOVERED_JUMPTABLE.unknown = (undefined *)(in_stack_ffffffffffffff18 >> 0x20);
      FUN_10080d5a4(unaff_x25,UNRECOVERED_JUMPTABLE.unknown,1);
      _swift_errorRelease(UNRECOVERED_JUMPTABLE_08.unknown);
    }
    SVar90.bridgeObject = UNRECOVERED_JUMPTABLE.unknown;
    SVar90.str = UNRECOVERED_JUMPTABLE_08.unknown;
    return SVar90;
  case (code **)0x8c:
    param_11 = UNRECOVERED_JUMPTABLE_07;
    UNRECOVERED_JUMPTABLE_07 = (code *)&param_11;
    uStack_a0._0_4_ = (uint)param_5;
    uStack_a0._4_2_ = (undefined2)((ulong)param_5 >> 0x20);
    uStack_a0._6_1_ = (undefined1)((ulong)param_5 >> 0x30);
    uStack_a0._7_1_ = (undefined1)((ulong)param_5 >> 0x38);
    pcVar34 = param_17;
    unaff_x24 = param_5;
    unaff_x25 = param_4;
    in_stack_ffffffffffffff90 = param_18;
    pcVar58 = param_3;
    pcVar38 = (code *)UNRECOVERED_JUMPTABLE_08.unknown;
    HVar23.unknown = UNRECOVERED_JUMPTABLE.unknown;
    goto switchD_1007fd6f0_caseD_76;
  case (code **)0x8e:
    goto switchD_1007fd6f0_caseD_8e;
  case (code **)0x96:
    SVar88.bridgeObject = UNRECOVERED_JUMPTABLE.unknown;
    SVar88.str = UNRECOVERED_JUMPTABLE_08.unknown;
    return SVar88;
  case (code **)0x98:
    UNRECOVERED_JUMPTABLE_07 = unaff_x26;
    if (in_ZR) {
      _swift_errorRetain();
      pcVar38 = pcStack_c0;
    }
    else {
      if ((uVar45 & 0xff00) != 0x200) {
        uVar26 = uVar45 & 0x1ff;
        bVar6 = ((ulong)unaff_x22 & 0xff) == 0;
        if (bVar6) {
          uVar55 = CONCAT44(uVar45 >> 8,uVar56) & 0x1ffffffff;
          FUN_1007fb278();
          UNRECOVERED_JUMPTABLE_04 = (code *)0x0;
          pcVar58 = in_stack_ffffffffffffff30;
        }
        else {
          FUN_1000f4a4c();
          pcVar58 = UNRECOVERED_JUMPTABLE_07;
          FUN_10080b43c();
          UNRECOVERED_JUMPTABLE_04 = (code *)&DAT_100f04860;
          _swift_allocError(&DAT_100f04860,pcVar58,0,0);
          *pcVar58 = SUB81(UNRECOVERED_JUMPTABLE_07,0);
          pcVar58[1] = (code)0x0;
          _swift_willThrow();
          _swift_errorRetain(UNRECOVERED_JUMPTABLE_04);
          uVar55 = 0;
          UNRECOVERED_JUMPTABLE_07 = UNRECOVERED_JUMPTABLE_04;
          pcVar58 = (code *)0x0;
        }
        bVar6 = !bVar6;
        FUN_1007fb278();
        uVar55 = uVar55 & 0xffffffff00000000;
        pcVar38 = pcStack_c0;
        pcVar17 = unaff_x26;
        pcVar25 = in_stack_ffffffffffffff30;
        goto LAB_10080ba90;
      }
      FUN_10080a3bc();
      UNRECOVERED_JUMPTABLE_07 = (code *)&DAT_100f05368;
      _swift_allocError(&DAT_100f05368,UNRECOVERED_JUMPTABLE_08.unknown,0,0);
      pcVar38 = pcStack_c0;
      *(code **)UNRECOVERED_JUMPTABLE_08.unknown = pcStack_c0;
      *(ulong *)(UNRECOVERED_JUMPTABLE_08.unknown + 8) = in_stack_ffffffffffffff28;
      *(undefined8 *)(UNRECOVERED_JUMPTABLE_08.unknown + 0x10) = 0;
      *(undefined8 *)(UNRECOVERED_JUMPTABLE_08.unknown + 0x18) = 0;
      UNRECOVERED_JUMPTABLE_08.unknown[0x20] = (code)0x0;
      _swift_bridgeObjectRetain(pcStack_c0);
      _swift_bridgeObjectRetain(in_stack_ffffffffffffff28);
    }
    _swift_errorRetain(UNRECOVERED_JUMPTABLE_07);
    pcVar58 = (code *)0x0;
    UNRECOVERED_JUMPTABLE_04 = (code *)0x0;
    uVar26 = 0;
    bVar6 = true;
    uVar55 = 1;
    pcVar17 = UNRECOVERED_JUMPTABLE_07;
    pcVar25 = (code *)0x0;
LAB_10080ba90:
    FUN_10080b3ec(in_stack_ffffffffffffff38 + 0x18,&stack0xffffffffffffff48);
    iVar102 = (int)(uVar55 >> 0x20);
    if (CONCAT17(uStack_a0._7_1_,CONCAT16(uStack_a0._6_1_,CONCAT24(uStack_a0._4_2_,(uint)uStack_a0))
                ) == 0) {
      _swift_bridgeObjectRelease(in_stack_ffffffffffffff28);
      _swift_bridgeObjectRelease(pcVar38);
      _swift_bridgeObjectRelease(in_stack_ffffffffffffff18);
      FUN_10080a674(&stack0xffffffffffffff48);
    }
    else {
      FUN_100076508(&stack0xffffffffffffff48,&local_90);
      pcStack_c0 = UNRECOVERED_JUMPTABLE_04;
      FUN_100004640();
      lVar19 = 0;
      FUN_1007fb264();
      lVar57 = -(*(long *)(*(long *)(lVar19 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      puVar49 = (undefined1 *)((long)&pcStack_b0 + lVar57);
      FUN_1007fb128();
      DVar20.unknown = in_stack_fffffffffffffef0;
      _swift_bridgeObjectRetain();
      Foundation::Date::get_now(DVar20);
      *puVar49 = 0;
      *(code **)((long)&uStack_a8 + lVar57) = pcVar38;
      *(ulong *)((long)&uStack_a0 + lVar57) = in_stack_ffffffffffffff28;
      (&stack0xffffffffffffff68)[lVar57] = 0;
      *(ulong *)((long)&local_90 + lVar57) = uStack_118;
      *(code **)((long)&uStack_88 + lVar57) = in_stack_fffffffffffffef0;
      uVar29 = 0;
      if (bVar6 == false) {
        uVar29 = (short)(iVar102 << 8);
      }
      pcVar38 = (code *)0x0;
      if (bVar6 == false) {
        pcVar38 = pcVar58;
      }
      *(undefined **)(&stack0xffffffffffffff80 + lVar57) = in_stack_fffffffffffffef8;
      _swift_errorRetain(pcStack_c0);
      FUN_100813fa8(UNRECOVERED_JUMPTABLE_07,pcVar58,iVar102,bVar6);
      _swift_errorRelease(0);
      UNRECOVERED_JUMPTABLE_04 = pcStack_c0;
      iVar3 = *(int *)(lVar19 + 0x18);
      *(ulong *)(puVar49 + *(int *)(lVar19 + 0x14)) = in_stack_ffffffffffffff18;
      *(code **)(puVar49 + iVar3) = pcStack_c0;
      puVar39 = (undefined8 *)(puVar49 + *(int *)(lVar19 + 0x1c));
      *puVar39 = UNRECOVERED_JUMPTABLE_07;
      puVar39[1] = pcVar38;
      *(undefined2 *)(puVar39 + 2) = uVar29;
      *(bool *)((long)puVar39 + 0x12) = bVar6;
      (**(code **)(in_stack_ffffffffffffff90 + 8))(puVar49,in_stack_ffffffffffffff88);
      FUN_10080a754(puVar49);
      FUN_100004594(&local_90);
    }
    if (bVar6 == false) {
      _swift_bridgeObjectRetain(pcVar58);
      FUN_10080a6bc(pcVar17,pcVar25,uVar26,uVar55 & 0xffffffff);
      FUN_1007fb2c4(unaff_x26,in_stack_ffffffffffffff30,unaff_x22,(ulong)unaff_x22 >> 0x10 & 0xffff)
      ;
      FUN_100813f90(UNRECOVERED_JUMPTABLE_07,pcVar58,iVar102,0);
      _swift_errorRelease(UNRECOVERED_JUMPTABLE_04);
      _swift_bridgeObjectRelease(in_stack_ffffffffffffff20);
    }
    else {
      local_90._0_4_ = (uint)UNRECOVERED_JUMPTABLE_07;
      local_90._4_4_ = (uint)((ulong)UNRECOVERED_JUMPTABLE_07 >> 0x20);
      bVar8 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
      _swift_errorRetain(UNRECOVERED_JUMPTABLE_07);
      if ((bVar8 & 1) != 0) {
        puVar59 = &DAT_100fe7218;
        FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
        _swift_willThrowTypedImpl
                  (&local_90,puVar59,
                   PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      }
      FUN_10080a6bc(pcVar17,pcVar25,uVar26,uVar55 & 0xffffffff);
      FUN_1007fb2c4(unaff_x26,in_stack_ffffffffffffff30,unaff_x22,(ulong)unaff_x22 >> 0x10 & 0xffff)
      ;
      FUN_100813f90(UNRECOVERED_JUMPTABLE_07,pcVar58,iVar102,1);
      _swift_errorRelease(UNRECOVERED_JUMPTABLE_04);
      _swift_bridgeObjectRelease(in_stack_ffffffffffffff20);
    }
    SVar73.bridgeObject = pcVar58;
    SVar73.str = (char *)UNRECOVERED_JUMPTABLE_07;
    return SVar73;
  case (code **)0x9e:
    goto switchD_1007fd6f0_caseD_9e;
  case (code **)0xa0:
    goto switchD_1007fd6f0_caseD_a0;
  case (code **)0xa2:
switchD_1007fd6f0_caseD_a2:
    FUN_1007fb2c4(pcVar17,HVar22.unknown,unaff_x28,unaff_x20.unknown);
LAB_1008181f8:
    unaff_x22 = (code *)&DAT_00000001;
    uVar29 = 1;
    unaff_x20.unknown = unaff_x24;
    unaff_x25 = (code *)0x0;
    pcVar58 = unaff_x28;
    goto LAB_1008181fc;
  case (code **)0xaa:
  case (code **)0xae:
  case (code **)0xb2:
  case (code **)0xb6:
    goto switchD_1007fd6f0_caseD_aa;
  case (code **)0xac:
  case (code **)0xb0:
    goto switchD_1007fd6f0_caseD_ac;
  case (code **)0xb4:
    *(undefined **)(unaff_x20.unknown + 0x20) = UNRECOVERED_JUMPTABLE_08.unknown;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease();
    UNRECOVERED_JUMPTABLE_07 = unaff_x19 + 0x28;
    FUN_10008820c(unaff_x20.unknown + 0x28,UNRECOVERED_JUMPTABLE_07);
    SVar95.bridgeObject = UNRECOVERED_JUMPTABLE_07;
    SVar95.str = unaff_x20.unknown;
    return SVar95;
  case (code **)0xb8:
    (*param_3)();
    if ((code *)unaff_x21.unknown == (code *)0x0) {
      unaff_x23 = unaff_x24;
      unaff_x26 = (code *)UNRECOVERED_JUMPTABLE.unknown;
      _swift_bridgeObjectRetain();
      *(code **)unaff_x19 = unaff_x27;
      *(code **)(unaff_x19 + 8) = unaff_x24;
      *(undefined **)(unaff_x19 + 0x10) = UNRECOVERED_JUMPTABLE_08.unknown;
      *(undefined **)(unaff_x19 + 0x18) = UNRECOVERED_JUMPTABLE.unknown;
      *(short *)(unaff_x19 + 0x20) = (short)param_3;
    }
    else {
      (**(code **)(unaff_x25 + 0x20))();
    }
    SVar69.bridgeObject = unaff_x26;
    SVar69.str = (char *)unaff_x23;
    return SVar69;
  case (code **)0xb9:
  case (code **)0xd9:
  case (code **)0xf5:
    unaff_x26 = (code *)(UNRECOVERED_JUMPTABLE_08.unknown + 0x368);
    _swift_allocError(unaff_x26,UNRECOVERED_JUMPTABLE.unknown,0,0);
    *(code **)UNRECOVERED_JUMPTABLE.unknown = in_stack_ffffffffffffff20;
    *(code **)((long)UNRECOVERED_JUMPTABLE.unknown + 8) = in_stack_ffffffffffffff38;
    *(undefined8 *)((long)UNRECOVERED_JUMPTABLE.unknown + 0x10) = 0;
    *(undefined8 *)((long)UNRECOVERED_JUMPTABLE.unknown + 0x18) = 0;
    *(undefined1 *)((long)UNRECOVERED_JUMPTABLE.unknown + 0x20) = 0;
    _swift_bridgeObjectRetain(in_stack_ffffffffffffff20);
    _swift_bridgeObjectRetain(in_stack_ffffffffffffff38);
    _swift_errorRetain(unaff_x26);
    pcVar38 = (code *)0x0;
    unaff_x19 = (code *)0x0;
    in_stack_ffffffffffffff18 = 0;
    uVar55 = 0;
    uStack_118._4_4_ = 1;
    FUN_10080b3ec(unaff_x25 + 0x18,&stack0xffffffffffffff48);
    in_stack_ffffffffffffff10 = unaff_x26;
    if (CONCAT17(uStack_a0._7_1_,CONCAT16(uStack_a0._6_1_,CONCAT24(uStack_a0._4_2_,(uint)uStack_a0))
                ) != 0) {
      uStack_118 = 0x100000000;
      unaff_x25 = (code *)&DAT_00000001;
      unaff_x19 = (code *)0x0;
      pcVar38 = (code *)0x0;
      UNRECOVERED_JUMPTABLE_08.unknown = &stack0xffffffffffffff48;
      UNRECOVERED_JUMPTABLE.unknown = (undefined *)&local_90;
      unaff_x24 = in_stack_ffffffffffffff20;
      in_stack_ffffffffffffff20 = unaff_x27;
      goto switchD_1007fd6f0_caseD_3e;
    }
    _swift_bridgeObjectRelease(in_stack_ffffffffffffff38);
    _swift_bridgeObjectRelease(in_stack_ffffffffffffff20);
    _swift_bridgeObjectRelease(in_stack_ffffffffffffff28);
    FUN_10080a674(&stack0xffffffffffffff48);
    goto LAB_10083d7b4;
  case (code **)0xbe:
    goto switchD_1007fd6f0_caseD_be;
  case (code **)0xc0:
    goto switchD_1007fd6f0_caseD_c0;
  case (code **)0xc2:
    unaff_x27 = *(code **)unaff_x22;
    pcVar38 = (code *)(ulong)(byte)unaff_x27[0xa0];
    pcVar32 = *(code **)unaff_x22;
    unaff_x26 = (code *)(ulong)((uint)param_4 >> 0x10);
    _swift_task_dealloc(*(undefined8 *)(unaff_x27 + 0x98));
    unaff_x28 = param_3;
    FUN_100804a74();
    uVar26 = (uint)unaff_x28;
    FUN_1007fb2c4(UNRECOVERED_JUMPTABLE.unknown,param_3,param_4,unaff_x26);
    _swift_bridgeObjectRelease();
    unaff_x19 = pcVar17;
    if ((uVar26 >> 0x10 & 0xff) == 1) {
      _swift_errorRetain(pcVar17);
      unaff_x26 = (code *)0x0;
      unaff_x24 = pcVar17;
      goto LAB_1008181f8;
    }
    if ((uVar26 & 0xff00) == 0x200) {
      unaff_x20.unknown = (undefined *)(ulong)(uVar26 >> 0x10);
      uVar33 = *(undefined8 *)(unaff_x27 + 0x88);
      uVar18 = *(undefined8 *)(unaff_x27 + 0x90);
      FUN_10080a3bc();
      unaff_x24 = (code *)&DAT_100f05368;
      _swift_allocError(&DAT_100f05368,UNRECOVERED_JUMPTABLE_08.unknown,0,0);
      *(undefined8 *)UNRECOVERED_JUMPTABLE_08.unknown = uVar33;
      *(undefined8 *)(UNRECOVERED_JUMPTABLE_08.unknown + 8) = uVar18;
      *(undefined8 *)(UNRECOVERED_JUMPTABLE_08.unknown + 0x10) = 0;
      *(undefined8 *)(UNRECOVERED_JUMPTABLE_08.unknown + 0x18) = 0;
      UNRECOVERED_JUMPTABLE_08.unknown[0x20] = (code)0x0;
      _swift_bridgeObjectRetain(uVar33);
      _swift_bridgeObjectRetain(uVar18);
      goto switchD_1007fd6f0_caseD_a2;
    }
    pcVar58 = unaff_x28;
    if ((uVar26 & 0xff) == 4) {
      unaff_x26 = (code *)(ulong)(uVar26 >> 8 & 1);
      FUN_1007fb28c(pcVar17,HVar22.unknown,unaff_x28);
      unaff_x22 = (code *)0x0;
      uVar29 = 0;
      unaff_x20.unknown = pcVar17;
      unaff_x25 = (code *)0x0;
    }
    else {
      FUN_1000f4a4c(pcVar17,HVar22.unknown,unaff_x28);
      UNRECOVERED_JUMPTABLE_07 = pcVar17;
      FUN_10080b43c();
      unaff_x20.unknown = &DAT_100f04860;
      _swift_allocError(&DAT_100f04860,UNRECOVERED_JUMPTABLE_07,0,0);
      *UNRECOVERED_JUMPTABLE_07 = SUB81(pcVar17,0);
      UNRECOVERED_JUMPTABLE_07[1] = (code)0x4;
      _swift_willThrow();
      _swift_errorRetain(unaff_x20.unknown);
      unaff_x26 = (code *)0x0;
      unaff_x22 = (code *)&DAT_00000001;
      uVar29 = 1;
      unaff_x25 = (code *)unaff_x20.unknown;
    }
LAB_1008181fc:
    FUN_10080b3ec(*(long *)(unaff_x27 + 0x80) + 0x18,unaff_x27 + 0x38);
    pcVar30 = *(code **)(unaff_x27 + 0x90);
    in_stack_ffffffffffffff90 = *(long *)(unaff_x27 + 0x88);
    if (*(long *)(unaff_x27 + 0x50) == 0) {
      uVar33 = *(undefined8 *)(unaff_x27 + 0x90);
      _swift_bridgeObjectRelease(pcVar38);
      _swift_bridgeObjectRelease(in_stack_ffffffffffffff90);
      _swift_bridgeObjectRelease(uVar33);
      FUN_10080a674(unaff_x27 + 0x38);
      unaff_x24 = (code *)unaff_x20.unknown;
      if ((int)unaff_x22 == 0) goto LAB_100818400;
    }
    else {
      uVar33 = *(undefined8 *)(unaff_x27 + 0x78);
      uStack_a8._0_4_ = (undefined4)uVar33;
      uStack_a8._4_2_ = (__int16)((ulong)uVar33 >> 0x20);
      uStack_a8._6_2_ = (undefined2)((ulong)uVar33 >> 0x30);
      local_90._4_4_ = (uint)unaff_x26;
      uStack_88 = (uint)unaff_x25;
      uStack_84 = (uint)((ulong)unaff_x25 >> 0x20);
      unaff_x25 = *(code **)(unaff_x27 + 0x68);
      unaff_x26 = *(code **)(unaff_x27 + 0x70);
      FUN_100076508(unaff_x27 + 0x38,unaff_x27 + 0x10);
      in_stack_ffffffffffffff88 = (code *)((long)pcVar58 << 0x20);
      unaff_x28 = *(code **)(unaff_x27 + 0x28);
      unaff_x23 = *(code **)(unaff_x27 + 0x30);
      FUN_100004640(unaff_x27 + 0x10,unaff_x28);
      unaff_x24 = (code *)0x0;
      FUN_1007fb264();
      uStack_a0._6_1_ = 0;
      uStack_a0._7_1_ = 0;
      unaff_x21.unknown =
           (undefined *)(*(long *)(*(long *)(unaff_x24 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      uStack_a0._4_2_ = uVar29;
      _swift_task_alloc();
switchD_1007fd6f0_caseD_8e:
      FUN_1007fb128();
      DVar20.unknown = unaff_x26;
      _swift_bridgeObjectRetain();
      Foundation::Date::get_now(DVar20);
      *unaff_x21.unknown = (code)0x1;
      *(code **)(unaff_x21.unknown + 0x10) = pcVar30;
      *(long *)(unaff_x21.unknown + 8) = in_stack_ffffffffffffff90;
      unaff_x21.unknown[0x18] = (code)0x4;
      *(code **)(unaff_x21.unknown + 0x20) = unaff_x25;
      *(code **)(unaff_x21.unknown + 0x28) = unaff_x26;
      unaff_x25 = (code *)CONCAT44(uStack_84,uStack_88);
      unaff_x26 = (code *)(ulong)local_90._4_4_;
      *(ulong *)(unaff_x21.unknown + 0x30) =
           CONCAT26(uStack_a8._6_2_,CONCAT24(uStack_a8._4_2_,(undefined4)uStack_a8));
      uVar35 = 0;
      if ((int)unaff_x22 == 0) {
        uVar35 = (ushort)((local_90._4_4_ & 1) << 8) | 4;
      }
      iVar102 = *(int *)(unaff_x24 + 0x18);
      *(code **)(unaff_x21.unknown + *(int *)(unaff_x24 + 0x14)) = pcVar38;
      *(code **)(unaff_x21.unknown + iVar102) = unaff_x25;
      UNRECOVERED_JUMPTABLE_07 = (code *)(unaff_x21.unknown + *(int *)(unaff_x24 + 0x1c));
      *(undefined **)UNRECOVERED_JUMPTABLE_07 = unaff_x20.unknown;
      *(undefined8 *)(UNRECOVERED_JUMPTABLE_07 + 8) = 0;
      *(ushort *)(UNRECOVERED_JUMPTABLE_07 + 0x10) = uVar35;
      UNRECOVERED_JUMPTABLE_07[0x12] = SUB81(unaff_x22,0);
      UNRECOVERED_JUMPTABLE_07 = *(code **)(unaff_x23 + 8);
      _swift_errorRetain(unaff_x25);
      FUN_10081c834(unaff_x20.unknown,unaff_x26,
                    CONCAT13(uStack_a0._7_1_,CONCAT12(uStack_a0._6_1_,uStack_a0._4_2_)));
      pcVar58 = (code *)((ulong)in_stack_ffffffffffffff88 >> 0x20);
      (*UNRECOVERED_JUMPTABLE_07)(unaff_x21.unknown,unaff_x28,unaff_x23);
      FUN_10080a754(unaff_x21.unknown);
      _swift_task_dealloc(unaff_x21.unknown);
      FUN_100004594(unaff_x27 + 0x10);
      unaff_x24 = (code *)unaff_x20.unknown;
      if (((ulong)unaff_x22 & 1) == 0) {
LAB_100818400:
        FUN_1007fb2c4(unaff_x19,pcVar30,pcVar58,(ulong)pcVar58 >> 0x10 & 0xffff);
        _swift_errorRelease(unaff_x25);
        UNRECOVERED_JUMPTABLE.unknown = *(undefined **)(pcVar32 + 8);
        unaff_x24 = (code *)unaff_x20.unknown;
switchD_1007fd6f0_caseD_5a:
                    /* WARNING: Could not recover jumptable at 0x000100818448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)UNRECOVERED_JUMPTABLE.unknown)(unaff_x24);
        SVar79.bridgeObject = UNRECOVERED_JUMPTABLE.unknown;
        SVar79.str = (char *)unaff_x24;
        return SVar79;
      }
    }
    *(code **)(unaff_x27 + 0x60) = unaff_x24;
    bVar8 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar8 & 1) == 0) {
      FUN_1007fb2c4(unaff_x19,pcVar30,pcVar58,(ulong)pcVar58 >> 0x10 & 0xffff);
    }
    else {
      unaff_x20.unknown = (undefined *)((ulong)pcVar58 >> 0x10 & 0xffff);
      _swift_errorRetain(unaff_x24);
      pcVar101 = pcVar30;
switchD_1007fd6f0_caseD_6e:
      pcVar30 = unaff_x26;
      puVar59 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (unaff_x27 + 0x60,puVar59,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      FUN_1007fb2c4(unaff_x19,pcVar101,pcVar58,unaff_x20.unknown);
      FUN_10081c820(unaff_x24,pcVar30,1);
    }
    _swift_errorRelease(unaff_x25);
    UNRECOVERED_JUMPTABLE_07 = *(code **)(pcVar32 + 8);
                    /* WARNING: Could not recover jumptable at 0x0001008184c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_07)();
    SVar80.bridgeObject = pcVar30;
    SVar80.str = (char *)UNRECOVERED_JUMPTABLE_07;
    return SVar80;
  case (code **)0xca:
  case (code **)0xce:
  case (code **)0xd2:
  case (code **)0xd6:
    goto switchD_1007fd6f0_caseD_ca;
  case (code **)0xcc:
  case (code **)0xd0:
  case (code **)0xec:
    UNRECOVERED_JUMPTABLE.unknown = (undefined *)((ulong)unaff_x19 >> 0x30 & 0xff);
    UNRECOVERED_JUMPTABLE_08.unknown = &stack0xffffffffffffff90;
switchD_1007fd6f0_caseD_ac:
    SVar98.bridgeObject = param_3;
    SVar98.str = UNRECOVERED_JUMPTABLE.unknown;
    tVar100 = Swift::String::_fromUTF8Repairing
                        ((UnsafeBufferPointer<__int8>)UNRECOVERED_JUMPTABLE_08.unknown,SVar98);
    param_3 = tVar100._16_8_;
    UNRECOVERED_JUMPTABLE.unknown = tVar100.result.bridgeObject;
    UNRECOVERED_JUMPTABLE_08.unknown = tVar100.result.str;
    unaff_x23 = (code *)UNRECOVERED_JUMPTABLE.unknown;
LAB_10083bcd4:
    FUN_1008322f8(UNRECOVERED_JUMPTABLE_08.unknown,UNRECOVERED_JUMPTABLE.unknown,param_3);
    (extension__StringProcessing)::Swift::Collection::_trimmingPrefix();
    uVar33 = CONCAT44(uStack_84,uStack_88);
    FUN_1000f7830(&DAT_100fe7498,&DAT_100c7c980);
    FUN_100134584(&DAT_100fe74a0,&DAT_100fe7498,&DAT_100c7c980,
                  PTR_Swift__Swift__ReversedCollection<undefined>_>Swift__Collection_100ead3a0);
    (extension__StringProcessing)::Swift::Collection::_trimmingPrefix();
    _swift_bridgeObjectRelease(uVar33);
    ppcVar31 = (code **)CONCAT44(uStack_84,uStack_88);
    puVar59 = &DAT_100fe74a8;
    FUN_1000f7830(&DAT_100fe74a8,&DAT_100c7c630);
    puVar21 = &DAT_100fe74b0;
    FUN_100134584(&DAT_100fe74b0,&DAT_100fe74a8,&DAT_100c7c630,
                  PTR_Swift__Swift__ReversedCollection<undefined>_>Swift__Sequence_100ead398);
    SVar60 = Swift::String::_init(&stack0xffffffffffffff90,puVar59,puVar21);
    _swift_bridgeObjectRelease(unaff_x23);
    puVar36 = *(ushort **)PTR____stack_chk_guard_100ea82f0;
switchD_1007fd6f0_caseD_4a:
    if ((code **)puVar36 == ppcVar31) {
      return SVar60;
    }
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  case (code **)0xd4:
    FUN_100004594();
    SVar94.bridgeObject = UNRECOVERED_JUMPTABLE.unknown;
    SVar94.str = UNRECOVERED_JUMPTABLE_08.unknown;
    return SVar94;
  case (code **)0xd8:
    lVar54 = *(long *)unaff_x22;
    uVar33 = *(undefined8 *)(lVar54 + 0xb0);
    uVar18 = *(undefined8 *)(lVar54 + 0xa0);
    lVar19 = *(long *)(lVar54 + 0xa8);
    lVar57 = *(long *)(lVar54 + 0x90);
    uVar43 = *(undefined8 *)(lVar54 + 0x98);
    uVar51 = *(undefined8 *)(lVar54 + 0x88);
    lVar46 = *(long *)unaff_x22;
    pcStack_c0 = UNRECOVERED_JUMPTABLE_07;
    _swift_task_dealloc(*(undefined8 *)(lVar54 + 0xb8));
    FUN_100004594(lVar54 + 0x10);
    (**(code **)(lVar19 + 8))(uVar33,uVar18);
    (**(code **)(lVar57 + 8))(uVar43,uVar51);
    puVar59 = &DAT_100fe71b0;
    FUN_1000fb4c4(lVar54 + 0x60,&DAT_100fe71b0,&DAT_100c7bac0);
    _swift_task_dealloc(uVar33);
    _swift_task_dealloc(uVar43);
    UNRECOVERED_JUMPTABLE_07 = *(code **)(lVar46 + 8);
                    /* WARNING: Could not recover jumptable at 0x000100803edc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_07)();
    SVar68.bridgeObject = puVar59;
    SVar68.str = (char *)UNRECOVERED_JUMPTABLE_07;
    return SVar68;
  case (code **)0xde:
    local_90._0_4_ = uVar26;
    _swift_bridgeObjectRelease();
    if ((int)unaff_x23 == 1) {
      local_90._0_4_ = uVar9;
      local_90._4_4_ = uVar5;
      bVar8 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
      if ((bVar8 & 1) != 0) {
        puVar59 = &DAT_100fe7218;
        FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
        _swift_willThrowTypedImpl
                  (&local_90,puVar59,
                   PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      }
      unaff_x26 = (code *)0x0;
LAB_100827984:
      pcVar52 = (code *)0x2;
    }
    else {
      if ((uVar37 & 0xff00) == 0x200) {
        FUN_1007fb2c4();
        unaff_x26 = (code *)0x0;
        goto LAB_100827984;
      }
      if ((uVar37 & 0xff) != 3) {
        UNRECOVERED_JUMPTABLE_07 = unaff_x24;
        FUN_1000f4a4c();
        UNRECOVERED_JUMPTABLE_04 = UNRECOVERED_JUMPTABLE_07;
        FUN_10080b43c();
        unaff_x26 = (code *)&DAT_100f04860;
        _swift_allocError(&DAT_100f04860,UNRECOVERED_JUMPTABLE_04,0,0);
        *UNRECOVERED_JUMPTABLE_04 = SUB81(UNRECOVERED_JUMPTABLE_07,0);
        UNRECOVERED_JUMPTABLE_04[1] = (code)0x3;
        _swift_willThrow();
        goto LAB_100827984;
      }
      pcVar52 = (code *)(ulong)(uVar37 & 0x100 | uVar9 & 1);
      FUN_1007fb28c();
      unaff_x26 = (code *)0x0;
    }
    uVar50 = (uint)pcVar52;
    FUN_10080b3ec(unaff_x28 + 0x18,&stack0xffffffffffffff48);
    in_stack_ffffffffffffff38 = unaff_x24;
    uVar26 = (uint)local_90;
    if (CONCAT17(uStack_a0._7_1_,CONCAT16(uStack_a0._6_1_,CONCAT24(uStack_a0._4_2_,(uint)uStack_a0))
                ) == 0) {
      _swift_errorRelease(unaff_x26);
      FUN_1007fb2c4(unaff_x24);
      _swift_bridgeObjectRelease(in_stack_ffffffffffffff28);
      _swift_bridgeObjectRelease(in_stack_ffffffffffffff30);
      _swift_bridgeObjectRelease(in_stack_ffffffffffffff20);
      FUN_10080a674(&stack0xffffffffffffff48);
      uVar26 = uVar50 & 0xff;
      goto LAB_100827b10;
    }
  case (code **)0xfa:
    local_90._0_4_ = uVar26;
    FUN_100076508(&stack0xffffffffffffff48,&local_90);
    FUN_100004640(&local_90,in_stack_ffffffffffffff88);
    lVar19 = 0;
    FUN_1007fb264();
    lVar57 = -(*(long *)(*(long *)(lVar19 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar49 = (undefined1 *)((long)&pcStack_b0 + lVar57);
    FUN_1007fb128();
    DVar20.unknown = in_stack_ffffffffffffff10;
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar20);
    *puVar49 = 0;
    *(code **)((long)&uStack_a8 + lVar57) = in_stack_ffffffffffffff30;
    *(ulong *)((long)&uStack_a0 + lVar57) = in_stack_ffffffffffffff28;
    (&stack0xffffffffffffff68)[lVar57] = 3;
    *(ulong *)((long)&local_90 + lVar57) = in_stack_ffffffffffffff08;
    *(code **)((long)&uStack_88 + lVar57) = in_stack_ffffffffffffff10;
    *(ulong *)(&stack0xffffffffffffff80 + lVar57) = in_stack_ffffffffffffff18;
    uVar50 = (uint)pcVar52;
    uVar26 = uVar50 & 0xff;
    uVar2 = 0;
    if (uVar26 != 2) {
      uVar2 = uVar50 & 1;
    }
    uVar35 = 0x200;
    if (uVar26 != 2) {
      uVar35 = (ushort)pcVar52 & 0x100 | 3;
    }
    iVar102 = *(int *)(lVar19 + 0x18);
    *(code **)(puVar49 + *(int *)(lVar19 + 0x14)) = in_stack_ffffffffffffff20;
    *(code **)(puVar49 + iVar102) = unaff_x26;
    puVar1 = (ulong *)(puVar49 + *(int *)(lVar19 + 0x1c));
    *puVar1 = (ulong)uVar2;
    puVar1[1] = 0;
    *(ushort *)(puVar1 + 2) = uVar35;
    *(undefined1 *)((long)puVar1 + 0x12) = 0;
    UNRECOVERED_JUMPTABLE_07 = *(code **)(in_stack_ffffffffffffff90 + 8);
    _swift_errorRetain(unaff_x26);
    (*UNRECOVERED_JUMPTABLE_07)(puVar49,in_stack_ffffffffffffff88,in_stack_ffffffffffffff90);
    FUN_1007fb2c4(in_stack_ffffffffffffff38,unaff_x27);
    _swift_errorRelease(unaff_x26);
    FUN_10080a754(puVar49);
    FUN_100004594(&local_90);
LAB_100827b10:
    if (uVar26 != 2) {
      uVar26 = uVar50 & 1;
    }
    SVar91.str = (char *)(ulong)uVar26;
    SVar91.bridgeObject = unaff_x27;
    return SVar91;
  case (code **)0xe0:
    goto switchD_1007fd6f0_caseD_e0;
  case (code **)0xe2:
    goto switchD_1007fd6f0_caseD_e2;
  case (code **)0xea:
  case (code **)0xee:
  case (code **)0xf2:
    goto switchD_1007fd6f0_caseD_ea;
  case (code **)0xf0:
    SVar93.str._0_1_ = Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
    SVar93.str._1_7_ = extraout_var_00;
    SVar93.bridgeObject = UNRECOVERED_JUMPTABLE.unknown;
    return SVar93;
  case (code **)0xf4:
    local_90._0_4_ = uVar26;
    FUN_100076688(UNRECOVERED_JUMPTABLE_08.unknown,unaff_x22 + 0x38);
    Swift::AsyncStream::Continuation::_yield(unaff_x22 + 0x38);
    (**(code **)(unaff_x28 + 8))();
    _swift_task_dealloc();
    *(code **)(unaff_x22 + 0x78) = unaff_x26;
    puVar59 = &DAT_100fe71a8;
    FUN_1008044f8(&DAT_100fe71a8,&DAT_100fe7188,&DAT_100c7baa0);
    *(undefined **)(unaff_x22 + 0x80) = puVar59;
    FUN_10000cbb0(unaff_x22 + 0x60);
    (**(code **)(unaff_x25 + 0x10))();
    piVar4 = (int *)CONCAT17(uStack_a0._7_1_,
                             CONCAT16(uStack_a0._6_1_,CONCAT24(uStack_a0._4_2_,(uint)uStack_a0)));
    puVar39 = (undefined8 *)(ulong)(uint)piVar4[1];
    lVar57 = (long)*piVar4 + (long)piVar4;
    uStack_a0._0_4_ = (uint)lVar57;
    uStack_a0._4_2_ = (undefined2)((ulong)lVar57 >> 0x20);
    uStack_a0._6_1_ = (undefined1)((ulong)lVar57 >> 0x30);
    uStack_a0._7_1_ = (undefined1)((ulong)lVar57 >> 0x38);
    _swift_task_alloc();
    *(undefined8 **)(unaff_x22 + 0xb8) = puVar39;
    *puVar39 = unaff_x22;
    puVar39[1] = FUN_100803e28;
    pvVar24 = (void *)CONCAT44(uStack_84,uStack_88);
                    /* WARNING: Could not recover jumptable at 0x000100803e24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)CONCAT17(uStack_a0._7_1_,
                       CONCAT16(uStack_a0._6_1_,CONCAT24(uStack_a0._4_2_,(uint)uStack_a0))))
              (puVar39,in_stack_ffffffffffffff68,pvVar24,
               CONCAT44(local_90._4_4_,(uint)local_90) & 0xcfffffffffffffff,unaff_x22 + 0x60);
    SVar67.bridgeObject = pvVar24;
    SVar67.str = (char *)in_stack_ffffffffffffff68;
    return SVar67;
  case (code **)0xfc:
    _swift_allocObject();
    *(undefined **)(unaff_x22 + 0x10) = UNRECOVERED_JUMPTABLE_08.unknown;
    *(code **)(UNRECOVERED_JUMPTABLE_08.unknown + 0x10) = unaff_x24;
    *(code **)(UNRECOVERED_JUMPTABLE_08.unknown + 0x18) = unaff_x19;
    *(code **)(UNRECOVERED_JUMPTABLE_08.unknown + 0x20) = unaff_x25;
    *(undefined **)(UNRECOVERED_JUMPTABLE_08.unknown + 0x28) = unaff_x20.unknown;
    *(code **)(UNRECOVERED_JUMPTABLE_08.unknown + 0x30) = unaff_x28;
    *(code **)(UNRECOVERED_JUMPTABLE_08.unknown + 0x38) = unaff_x23;
    *(undefined **)(UNRECOVERED_JUMPTABLE_08.unknown + 0x40) = unaff_x21.unknown;
    *(code **)(UNRECOVERED_JUMPTABLE_08.unknown + 0x48) = unaff_x27;
    UNRECOVERED_JUMPTABLE_08.unknown = &DAT_100f04df0;
    _swift_allocObject(&DAT_100f04df0,0x40,7);
    goto switchD_1007fd6f0_caseD_ea;
  case (code **)0xfe:
switchD_1007fd6f0_caseD_fe:
    local_90._0_4_ = uVar26;
    HVar22.unknown = unaff_x21.unknown;
    FUN_1000f7830(UNRECOVERED_JUMPTABLE_08.unknown,UNRECOVERED_JUMPTABLE.unknown);
    _swift_willThrowTypedImpl
              (unaff_x27 + 0x60,UNRECOVERED_JUMPTABLE_08.unknown,
               PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    FUN_1007fb2c4(unaff_x23,pcVar38,unaff_x19,unaff_x20.unknown);
    FUN_10081c820(unaff_x24,HVar22.unknown,1);
LAB_100817fd0:
    _swift_errorRelease(UNRECOVERED_JUMPTABLE_04);
    UNRECOVERED_JUMPTABLE_08.unknown = *(undefined **)(unaff_x28 + 8);
    uVar26 = (uint)local_90;
switchD_1007fd6f0_caseD_e2:
    local_90._0_4_ = uVar26;
                    /* WARNING: Could not recover jumptable at 0x000100818000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)UNRECOVERED_JUMPTABLE_08.unknown)();
    SVar78.bridgeObject = HVar22.unknown;
    SVar78.str = UNRECOVERED_JUMPTABLE_08.unknown;
    return SVar78;
  }
  local_90._0_4_ = (uint)unaff_x19;
  local_90._4_4_ = (uint)((ulong)unaff_x19 >> 0x20);
  FUN_1000f7830(&DAT_100fe6f38,&DAT_100c7b090);
  FUN_100134584(&DAT_100fe6f40,&DAT_100fe6f38,&DAT_100c7b090,
                PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100eac518);
  separator_00.bridgeObject = (void *)0xe100000000000000;
  separator_00.str = (char *)0x2c;
  SVar62 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator_00);
  _swift_bridgeObjectRelease(unaff_x19);
LAB_1007fdd14:
  if (*(code **)PTR____stack_chk_guard_100ea82f0 == pcVar30) {
    return SVar62;
  }
LAB_1007fdd50:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
switchD_1007fd6f0_caseD_ea:
  *(undefined **)(unaff_x22 + 0x18) = UNRECOVERED_JUMPTABLE_08.unknown;
  *(code **)(UNRECOVERED_JUMPTABLE_08.unknown + 0x10) = unaff_x24;
  *(code **)(UNRECOVERED_JUMPTABLE_08.unknown + 0x18) = unaff_x19;
  *(code **)(UNRECOVERED_JUMPTABLE_08.unknown + 0x20) = unaff_x25;
  *(undefined **)(UNRECOVERED_JUMPTABLE_08.unknown + 0x28) = unaff_x20.unknown;
  *(code **)(UNRECOVERED_JUMPTABLE_08.unknown + 0x30) = unaff_x28;
  *(code **)(UNRECOVERED_JUMPTABLE_08.unknown + 0x38) = unaff_x23;
  FUN_10036c934();
  _swift_retain();
  pcVar38 = (code *)UNRECOVERED_JUMPTABLE_08.unknown;
switchD_1007fd6f0_caseD_e0:
  FUN_10036c934();
  unaff_x25 = (code *)0xd0;
  goto switchD_1007fd6f0_caseD_46;
switchD_1007fd6f0_caseD_76:
  uStack_88 = (uint)*(undefined8 *)(UNRECOVERED_JUMPTABLE_07 + 0x28);
  uStack_84 = (uint)((ulong)*(undefined8 *)(UNRECOVERED_JUMPTABLE_07 + 0x28) >> 0x20);
  local_90._0_4_ = (uint)*(undefined8 *)(UNRECOVERED_JUMPTABLE_07 + 0x20);
  local_90._4_4_ = (uint)((ulong)*(undefined8 *)(UNRECOVERED_JUMPTABLE_07 + 0x20) >> 0x20);
  unaff_x27 = *(code **)(UNRECOVERED_JUMPTABLE_07 + 0x50);
  unaff_x26 = *(code **)(UNRECOVERED_JUMPTABLE_07 + 0x58);
  ppcVar31 = *(code ***)(UNRECOVERED_JUMPTABLE_07 + 0x40);
  uVar26 = (uint)local_90;
  in_stack_ffffffffffffff88 = pcVar34;
  goto switchD_1007fd6f0_caseD_e;
switchD_1007fd6f0_caseD_46:
  UNRECOVERED_JUMPTABLE_08.unknown = unaff_x25;
  _swift_retain();
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(unaff_x27);
  _swift_task_alloc();
  unaff_x25 = (code *)UNRECOVERED_JUMPTABLE_08.unknown;
switchD_1007fd6f0_caseD_ca:
  *(undefined **)(unaff_x22 + 0x20) = UNRECOVERED_JUMPTABLE_08.unknown;
  Swift::Array<undefined>::typeMetadataAccessor();
  *(code **)unaff_x25 = unaff_x22;
  *(code **)(unaff_x25 + 8) = thunk_FUN_1008214bc;
switchD_1007fd6f0_caseD_c0:
  param_3 = (code *)((ulong)in_stack_ffffffffffffff80 & 0xcfffffffffffffff);
  param_11 = pcVar38;
  goto switchD_1007fd6f0_caseD_aa;
switchD_1007fd6f0_caseD_e:
  local_90._0_4_ = uVar26;
  unaff_x28 = *(code **)(UNRECOVERED_JUMPTABLE_07 + 0x48);
  unaff_x21.unknown = *(undefined **)(UNRECOVERED_JUMPTABLE_07 + 0x68);
  unaff_x19 = *(code **)(UNRECOVERED_JUMPTABLE_07 + 0x70);
  unaff_x20.unknown = *(undefined **)(UNRECOVERED_JUMPTABLE_07 + 0x60);
  pcVar34 = unaff_x22;
  uVar26 = (uint)local_90;
  in_stack_ffffffffffffff80 = (code *)ppcVar31;
switchD_1007fd6f0_caseD_6c:
  local_90._0_4_ = uVar26;
  pcVar30 = pcVar34 + 0x10;
  *(undefined8 *)pcVar30 = param_8;
  UNRECOVERED_JUMPTABLE_08.unknown = &DAT_100f04e18;
  _swift_allocObject(&DAT_100f04e18,0x50,7);
  *(undefined **)(unaff_x22 + 0x18) = UNRECOVERED_JUMPTABLE_08.unknown;
  *(undefined **)(UNRECOVERED_JUMPTABLE_08.unknown + 0x10) = unaff_x20.unknown;
  *(undefined **)(UNRECOVERED_JUMPTABLE_08.unknown + 0x18) = unaff_x21.unknown;
  *(code **)(UNRECOVERED_JUMPTABLE_08.unknown + 0x20) = unaff_x19;
  *(code **)(UNRECOVERED_JUMPTABLE_08.unknown + 0x28) = unaff_x28;
  *(code **)(UNRECOVERED_JUMPTABLE_08.unknown + 0x30) = unaff_x27;
  *(code **)(UNRECOVERED_JUMPTABLE_08.unknown + 0x38) = unaff_x26;
  unaff_x23 = (code *)UNRECOVERED_JUMPTABLE_08.unknown;
  uVar26 = (uint)local_90;
switchD_1007fd6f0_caseD_62:
  local_90._0_4_ = uVar26;
  *(code **)(UNRECOVERED_JUMPTABLE_08.unknown + 0x40) = unaff_x25;
  *(code **)(UNRECOVERED_JUMPTABLE_08.unknown + 0x48) = unaff_x24;
  UNRECOVERED_JUMPTABLE_08.unknown = &DAT_100f04e40;
  _swift_allocObject(&DAT_100f04e40,0x40,7);
  unaff_x24 = (code *)UNRECOVERED_JUMPTABLE_08.unknown;
  in_stack_ffffffffffffff68 = unaff_x25;
  uVar26 = (uint)local_90;
  goto switchD_1007fd6f0_caseD_a;
switchD_1007fd6f0_caseD_32:
  HVar22.unknown = unaff_x20.unknown;
  pcVar17 = unaff_x19;
  local_90._0_4_ = uVar26;
  FUN_1007fb2a0(UNRECOVERED_JUMPTABLE_08.unknown,UNRECOVERED_JUMPTABLE.unknown,param_3);
  unaff_x21.unknown = pcVar17;
  FUN_1007fde04();
  unaff_x22 = (code *)UNRECOVERED_JUMPTABLE.unknown;
  uVar26 = (uint)local_90;
switchD_1007fd6f0_caseD_14:
  local_90._0_4_ = uVar26;
  FUN_1007fb2ec(pcVar17,HVar22.unknown,4);
  SVar60 = Foundation::Data::base64EncodedString((NSDataBase64EncodingOptions)0x0,unaff_x21);
  FUN_10003bf2c(unaff_x21.unknown,unaff_x22);
  ppcVar31 = (code **)pcVar30;
  uVar26 = (uint)local_90;
switchD_1007fd6f0_caseD_42:
  local_90._0_4_ = uVar26;
  if ((code **)*(code **)PTR____stack_chk_guard_100ea82f0 == ppcVar31) {
    return SVar60;
  }
  goto LAB_1007fdd50;
switchD_1007fd6f0_caseD_44:
  UNRECOVERED_JUMPTABLE_08.unknown = UNRECOVERED_JUMPTABLE.unknown;
switchD_1007fd6f0_caseD_2c:
  local_90._0_4_ = uVar26;
  _swift_bridgeObjectRetain(UNRECOVERED_JUMPTABLE_08.unknown);
  uVar26 = (uint)local_90;
switchD_1007fd6f0_caseD_d:
  local_90._0_4_ = uVar26;
  SVar62.bridgeObject = unaff_x20.unknown;
  SVar62.str = (char *)unaff_x19;
  goto LAB_1007fdd14;
switchD_1007fd6f0_caseD_19:
  unaff_x22[0xa0] = SUB81(param_5,0);
  FUN_1007ffcdc(ppcVar31,puVar36,pcVar25,pcVar27);
  *(code ***)(unaff_x22 + 0x88) = ppcVar31;
  *(ushort **)(unaff_x22 + 0x90) = puVar36;
  uVar33 = *(undefined8 *)(unaff_x24 + 0x10);
  puVar39 = (undefined8 *)0x100;
  _swift_task_alloc();
  *(undefined8 **)(unaff_x22 + 0x98) = puVar39;
  *puVar39 = unaff_x22;
  puVar39[1] = FUN_100816d14;
  pvVar24 = (void *)((ulong)unaff_x20.unknown & 0xcfffffffffffffff);
  FUN_10082ee24(unaff_x19,pvVar24,ppcVar31,puVar36,3,uVar33);
  SVar75.bridgeObject = pvVar24;
  SVar75.str = (char *)unaff_x19;
  return SVar75;
switchD_1007fd6f0_caseD_aa:
  UNRECOVERED_JUMPTABLE_08.unknown = in_stack_ffffffffffffff88;
  UNRECOVERED_JUMPTABLE.unknown = pcVar30;
switchD_1007fd6f0_caseD_a0:
  FUN_100807ab8(UNRECOVERED_JUMPTABLE_08.unknown,UNRECOVERED_JUMPTABLE.unknown,param_3);
  SVar87.bridgeObject = UNRECOVERED_JUMPTABLE.unknown;
  SVar87.str = UNRECOVERED_JUMPTABLE_08.unknown;
  return SVar87;
switchD_1007fd6f0_caseD_a:
  local_90._0_4_ = uVar26;
  *(undefined **)(unaff_x22 + 0x20) = UNRECOVERED_JUMPTABLE_08.unknown;
  *(undefined **)(UNRECOVERED_JUMPTABLE_08.unknown + 0x10) = unaff_x20.unknown;
  *(undefined **)(UNRECOVERED_JUMPTABLE_08.unknown + 0x18) = unaff_x21.unknown;
  *(code **)(UNRECOVERED_JUMPTABLE_08.unknown + 0x20) = unaff_x19;
  *(code **)(UNRECOVERED_JUMPTABLE_08.unknown + 0x28) = unaff_x28;
  *(code **)(UNRECOVERED_JUMPTABLE_08.unknown + 0x30) = unaff_x27;
  *(code **)(UNRECOVERED_JUMPTABLE_08.unknown + 0x38) = unaff_x26;
  uVar26 = (uint)local_90;
switchD_1007fd6f0_caseD_58:
  local_90._0_4_ = uVar26;
  FUN_10036c934(unaff_x28,unaff_x27);
  _swift_retain(unaff_x26);
  FUN_10036c934(unaff_x28,unaff_x27);
  puVar39 = (undefined8 *)0xd0;
  _swift_retain(unaff_x26);
  _swift_bridgeObjectRetain(unaff_x25);
  uVar33 = CONCAT17(uStack_a0._7_1_,
                    CONCAT16(uStack_a0._6_1_,CONCAT24(uStack_a0._4_2_,(uint)uStack_a0)));
  _swift_bridgeObjectRetain(uVar33);
  _swift_task_alloc();
  *(undefined8 **)(unaff_x22 + 0x28) = puVar39;
  uVar18 = 0;
  Swift::Array<undefined>::typeMetadataAccessor();
  *puVar39 = unaff_x22;
  puVar39[1] = thunk_FUN_100823440;
  *(code **)(UNRECOVERED_JUMPTABLE_07 + 0x28) = unaff_x24;
  *(ulong *)(UNRECOVERED_JUMPTABLE_07 + 0x30) = CONCAT44(local_90._4_4_,(uint)local_90);
  *(ulong *)(UNRECOVERED_JUMPTABLE_07 + 0x38) = CONCAT44(uStack_84,uStack_88);
  *(code **)(UNRECOVERED_JUMPTABLE_07 + 0x40) = in_stack_ffffffffffffff88;
  *(long *)(UNRECOVERED_JUMPTABLE_07 + 0x48) = in_stack_ffffffffffffff90;
  *(undefined **)(UNRECOVERED_JUMPTABLE_07 + 0x78) = unaff_x21.unknown;
  *(code **)(UNRECOVERED_JUMPTABLE_07 + 0x50) = in_stack_ffffffffffffff80;
  *(code **)(UNRECOVERED_JUMPTABLE_07 + 0x58) = unaff_x28;
  *(undefined8 *)(UNRECOVERED_JUMPTABLE_07 + 0x70) = uVar18;
  *(code **)(UNRECOVERED_JUMPTABLE_07 + 0x60) = unaff_x27;
  *(code **)(UNRECOVERED_JUMPTABLE_07 + 0x68) = unaff_x26;
  *(code **)(UNRECOVERED_JUMPTABLE_07 + 0x18) = unaff_x23;
  *(code **)(UNRECOVERED_JUMPTABLE_07 + 0x20) = thunk_FUN_10082278c;
  *(code **)(UNRECOVERED_JUMPTABLE_07 + 0x10) = FUN_100822978;
  FUN_100808514(pcVar38,HVar23.unknown,(ulong)pcVar58 & 0xcfffffffffffffff,in_stack_ffffffffffffff68
                ,uVar33,5,*(undefined4 *)(UNRECOVERED_JUMPTABLE_07 + -0x54),pcVar30);
  SVar89.bridgeObject = HVar23.unknown;
  SVar89.str = (char *)pcVar38;
  return SVar89;
}



/* Address: 0x1007fdd54 | FUN_1007fdd54 */

void FUN_1007fdd54(undefined4 *param_1,ulong param_2)

{
  byte bVar1;
  undefined7 extraout_var;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 local_24;
  undefined4 *puVar2;
  
  FUN_1005ac238();
  uVar4 = (undefined4)param_2;
  if ((param_2 & 0xff00000000) == 0x100000000) {
    local_24 = uVar4;
    bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    puVar2 = (undefined4 *)CONCAT71(extraout_var,bVar1);
    puVar3 = puVar2;
    if ((bVar1 & 1) != 0) {
      FUN_1007fe10c();
      puVar3 = &local_24;
      _swift_willThrowTypedImpl(puVar3,&DAT_100ee42f8,puVar2);
    }
    FUN_1007fe10c();
    _swift_allocError(&DAT_100ee42f8,puVar3,0,0);
    *puVar3 = uVar4;
  }
  else {
    *param_1 = uVar4;
  }
  return;
}



/* Address: 0x1007fde04 | FUN_1007fde04 */

undefined1  [16] FUN_1007fde04(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long local_68 [3];
  undefined *local_50;
  undefined *local_48;
  undefined1 local_40 [16];
  
  puVar2 = &DAT_100fe6f28;
  FUN_1000f7830(&DAT_100fe6f28,&USHORT_100c7ae10);
  puVar3 = &DAT_100fe6f30;
  local_50 = puVar2;
  FUN_100134584(&DAT_100fe6f30,&DAT_100fe6f28,&USHORT_100c7ae10,
                PTR__Foundation__Swift__Array<undefined>_>Foundation__ContiguousBytes_100ea78a8);
  plVar4 = local_68;
  local_68[0] = param_1;
  local_48 = puVar3;
  FUN_100004640(plVar4,puVar2);
  lVar1 = *plVar4 + 0x20;
  lVar5 = *(long *)(*plVar4 + 0x10);
  _swift_bridgeObjectRetain(param_1);
  FUN_100441844(local_40,lVar1,lVar1 + lVar5);
  FUN_100004594(local_68);
  return local_40;
}



/* Address: 0x1007fdeb8 | FUN_1007fdeb8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ulong FUN_1007fdeb8(ulong param_1,undefined8 param_2)

{
  TimeZone TVar1;
  ulong uVar2;
  ulong uVar3;
  ID IVar4;
  NSString *pNVar5;
  undefined8 extraout_x1;
  undefined8 uVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long unaff_x21;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 local_90 [2];
  undefined8 local_80;
  undefined4 local_78;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  TVar1 = Foundation::TimeZone::typeMetadataAccessor();
  lVar8 = *(long *)(TVar1.unknown + -8);
  lVar9 = (long)&local_a0 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar2 = param_1;
  _swift_bridgeObjectRetain();
  FUN_1005b4c38();
  uVar3 = uVar2;
  FUN_1005b4634();
  if ((uVar3 & 1) == 0) {
    local_a0 = param_2;
    IVar4 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
    uVar6 = extraout_x1;
    FUN_1005b32e4(uVar2);
    _swift_bridgeObjectRelease(uVar2);
    pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(uVar6);
    local_90[0] = 0;
    IVar4 = NSFileManager::createDirectoryAtPath_withIntermediateDirectories_attributes_error_
                      (IVar4,pNVar5,1,0,local_90);
    param_2 = local_a0;
    if ((int)IVar4 != 0) goto LAB_1007fdfd0;
    _swift_bridgeObjectRelease(param_1);
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    pcVar7 = *(code **)(lVar8 + 8);
    param_2 = local_a0;
  }
  else {
    _swift_bridgeObjectRelease(uVar2);
LAB_1007fdfd0:
    local_80 = 0x20800000001;
    local_78 = 0x10001a4;
    FUN_1005b32d0(&local_94,FUN_1007fe49c,local_90,param_1,&DAT_100ee4520);
    _swift_bridgeObjectRelease(param_1);
    if (unaff_x21 == 0) {
      (**(code **)(lVar8 + 0x10))(lVar9,param_2,TVar1.unknown);
      param_1 = 0;
      FUN_1007fe194();
      _swift_allocObject();
      FUN_1007fc55c(local_94,lVar9);
      (**(code **)(lVar8 + 8))(param_2,TVar1.unknown);
      goto LAB_1007fe0c8;
    }
    pcVar7 = *(code **)(lVar8 + 8);
  }
  (*pcVar7)(param_2,TVar1.unknown);
LAB_1007fe0c8:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1007fe10c | FUN_1007fe10c */

void FUN_1007fe10c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe6e38 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c61428;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c61428,&DAT_100ee42f8);
  DAT_100fe6e38 = pTVar1;
  return;
}



/* Address: 0x1007fe14c | FUN_1007fe14c */

void FUN_1007fe14c(void)

{
  undefined *puVar1;
  
  if (DAT_100fe6e40 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift__Swift__String__UTF8View_>Swift__Sequence_100eac1a8;
  _swift_getWitnessTable
            (PTR_Swift__Swift__String__UTF8View_>Swift__Sequence_100eac1a8,
             PTR___type_metadata_for_Swift_String_UTF8View_100eac1a0);
  DAT_100fe6e40 = puVar1;
  return;
}



/* Address: 0x1007fe18c | FUN_1007fe18c */

void FUN_1007fe18c(void)

{
  FUN_1007fe194(0);
  return;
}



/* Address: 0x1007fe194 | FUN_1007fe194 */

void FUN_1007fe194(undefined8 param_1)

{
  if (DAT_100fe6e70 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100cc1968);
  return;
}



/* Address: 0x1007fe1cc | FUN_1007fe1cc */

undefined1  [16] FUN_1007fe1cc(ISO8601FormatStyle param_1,ulong param_2)

{
  ISO8601FormatStyle IVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  ushort *local_30;
  long local_28;
  
  local_30 = &USHORT_100c7adf8;
  IVar1 = Foundation::Date::ISO8601FormatStyle::typeMetadataAccessor();
  if (param_2 < 0x40) {
    local_28 = *(long *)(IVar1.unknown + -8) + 0x40;
    uVar2 = 0x100;
    _swift_updateClassMetadata2(param_1.unknown,0x100,2,&local_30,param_1.unknown + 0x50);
    if (param_1.unknown == (undefined *)0x0) {
      param_1.unknown = (undefined *)0x0;
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0x3f;
    param_1 = IVar1;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = param_1.unknown;
  return auVar3;
}



/* Address: 0x1007fe244 | FUN_1007fe244 */

undefined * FUN_1007fe244(void)

{
  undefined *puVar1;
  
  if (PTR__swift_runtimeSupportsNoncopyableTypes_100eae408 != (undefined *)0x0) {
    puVar1 = (undefined *)0x0;
    FUN_1007fe278(0);
    return puVar1;
  }
  return PTR___type_metadata_for____100eae0c8 + 8;
}



/* Address: 0x1007fe250 | FUN_1007fe250 */

void FUN_1007fe250(void)

{
  FUN_1007fe278(0);
  return;
}



/* Address: 0x1007fe278 | FUN_1007fe278 */

void FUN_1007fe278(void)

{
  Mutex MVar1;
  undefined *puVar2;
  
  if (DAT_100fe6f00 != (undefined *)0x0) {
    return;
  }
  puVar2 = &DAT_100ee4520;
  MVar1 = Synchronization::Mutex::typeMetadataAccessor();
  if (puVar2 != (undefined *)0x0) {
    return;
  }
  DAT_100fe6f00 = MVar1.unknown;
  return;
}



/* Address: 0x1007fe2c8 | FUN_1007fe2c8 */

undefined8 FUN_1007fe2c8(undefined8 param_1,undefined8 param_2)

{
  FUN_1007fc198(param_2,param_1);
  return param_2;
}



/* Address: 0x1007fe304 | FUN_1007fe304 */

void FUN_1007fe304(void)

{
  undefined *puVar1;
  
  if (DAT_100fe6f18 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift__Swift__String_>Swift__StringProtocol_100eac258;
  _swift_getWitnessTable
            (PTR_Swift__Swift__String_>Swift__StringProtocol_100eac258,
             PTR___type_metadata_for_Swift_String_100eac208);
  DAT_100fe6f18 = puVar1;
  return;
}



/* Address: 0x1007fe344 | FUN_1007fe344 */

void FUN_1007fe344(void)

{
  ISO8601FormatStyle IVar1;
  undefined *puVar2;
  
  if (DAT_100fe6f20 != (undefined *)0x0) {
    return;
  }
  IVar1 = Foundation::Date::ISO8601FormatStyle::typeMetadataAccessor();
  puVar2 = PTR_Foundation__Foundation__Date__ISO8601FormatStyle_>Foundation__FormatStyle_100ea73e0;
  _swift_getWitnessTable
            (PTR_Foundation__Foundation__Date__ISO8601FormatStyle_>Foundation__FormatStyle_100ea73e0
             ,IVar1.unknown);
  DAT_100fe6f20 = puVar2;
  return;
}



/* Address: 0x1007fe388 | FUN_1007fe388 */

void FUN_1007fe388(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  if (param_2 != 0) {
    _swift_bridgeObjectRelease(param_2);
    FUN_1007fc148(param_3,param_4,param_5,param_6,param_7,(uint)param_7 >> 0x10 & 0xff);
    return;
  }
  return;
}



/* Address: 0x1007fe3ec | FUN_1007fe3ec */

void FUN_1007fe3ec(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  if (param_2 != 0) {
    _swift_bridgeObjectRetain(param_2);
    FUN_1007fc0c4(param_3,param_4,param_5,param_6,param_7,(uint)param_7 >> 0x10 & 0xff);
    return;
  }
  return;
}



/* Address: 0x1007fe454 | thunk_FUN_1007fe458 */

void thunk_FUN_1007fe458(void)

{
  FUN_1007fe458();
  return;
}



/* Address: 0x1007fe458 | FUN_1007fe458 */

void FUN_1007fe458(void)

{
  undefined *puVar1;
  
  if (DAT_100fe6f48 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift____int64_>Swift__BinaryInteger_100eac738;
  _swift_getWitnessTable
            (PTR_Swift____int64_>Swift__BinaryInteger_100eac738,
             PTR___type_metadata_for_Swift_Int_100eac6f8);
  DAT_100fe6f48 = puVar1;
  return;
}



/* Address: 0x1007fe498 | thunk_FUN_100801100 */

void thunk_FUN_100801100(void)

{
  FUN_100801100();
  return;
}



/* Address: 0x1007fe49c | FUN_1007fe49c */

void FUN_1007fe49c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1007fdd54(param_1,*(undefined4 *)(unaff_x20 + 0x10),*(undefined4 *)(unaff_x20 + 0x14),
                (ulong)*(uint3 *)(unaff_x20 + 0x18),*(undefined1 *)(unaff_x20 + 0x1b));
  return;
}



/* Address: 0x1007fe4c4 | thunk_FUN_1007ff6a4 */

void thunk_FUN_1007ff6a4(void)

{
  FUN_1007ff6a4();
  return;
}



/* Address: 0x1007fe4c8 | FUN_1007fe4c8 */

void FUN_1007fe4c8(Hasher param_1,Hasher param_2,void *param_3,byte param_4)

{
  Hasher HVar1;
  Hasher HVar2;
  String SVar3;
  
  if (param_4 < 2) {
    if (param_4 == 0) {
      Swift::Hasher::_combine(0,param_2);
      SVar3.bridgeObject = param_3;
      SVar3.str = param_2.unknown;
      Swift::String::hash(param_1,SVar3);
      return;
    }
    HVar2.unknown = param_2.unknown;
    Swift::Hasher::_combine(1,param_2);
    Swift::Hasher::_combine((__uint64)param_2.unknown,HVar2);
  }
  else if (param_4 == 2) {
    HVar1.unknown = param_2.unknown;
    Swift::Hasher::_combine(2,param_2);
    HVar2.unknown = (undefined *)0x0;
    if (((ulong)param_2.unknown & 0x7fffffffffffffff) != 0) {
      HVar2.unknown = param_2.unknown;
    }
    Swift::Hasher::_combine((__uint64)HVar2.unknown,HVar1);
  }
  else {
    HVar2.unknown = param_2.unknown;
    Swift::Hasher::_combine(3,param_2);
    Swift::Hasher::_combine((byte)param_2.unknown & 1,HVar2);
  }
  return;
}



/* Address: 0x1007fe56c | FUN_1007fe56c */

void FUN_1007fe56c(char *param_1,undefined *param_2,byte param_3)

{
  uint uVar1;
  Hasher into;
  Hasher HVar2;
  String SVar3;
  undefined1 auStack_78 [72];
  
  HVar2.unknown = param_2;
  Swift::Hasher::init(0);
  if (param_3 < 2) {
    if (param_3 == 0) {
      Swift::Hasher::_combine(0,HVar2);
      into.unknown = auStack_78;
      SVar3.bridgeObject = param_2;
      SVar3.str = param_1;
      Swift::String::hash(into,SVar3);
    }
    else {
      Swift::Hasher::_combine(1,HVar2);
      Swift::Hasher::_combine((__uint64)param_1,HVar2);
      into.unknown = param_1;
    }
  }
  else if (param_3 == 2) {
    Swift::Hasher::_combine(2,HVar2);
    into.unknown = (char *)0x0;
    if (((ulong)param_1 & 0x7fffffffffffffff) != 0) {
      into.unknown = param_1;
    }
    Swift::Hasher::_combine((__uint64)into.unknown,HVar2);
  }
  else {
    Swift::Hasher::_combine(3,HVar2);
    uVar1 = (uint)param_1 & 1;
    into.unknown = (undefined *)(ulong)uVar1;
    Swift::Hasher::_combine((__uint8)uVar1,HVar2);
  }
  Swift::Hasher::_finalize(into);
  return;
}



/* Address: 0x1007fe634 | FUN_1007fe634 */

void FUN_1007fe634(undefined8 *param_1,undefined8 *param_2)

{
  FUN_1007ff6a4(*param_1,param_1[1],*(undefined1 *)(param_1 + 2),*param_2,param_2[1],
                *(undefined1 *)(param_2 + 2));
  return;
}



/* Address: 0x1007fe650 | FUN_1007fe650 */

void FUN_1007fe650(void)

{
  undefined8 *unaff_x20;
  
  FUN_1007fe56c(*unaff_x20,unaff_x20[1],*(undefined1 *)(unaff_x20 + 2));
  return;
}



/* Address: 0x1007fe65c | FUN_1007fe65c */

void FUN_1007fe65c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1007fe4c8(param_1,*unaff_x20,unaff_x20[1],*(undefined1 *)(unaff_x20 + 2));
  return;
}



/* Address: 0x1007fe668 | FUN_1007fe668 */

void FUN_1007fe668(__int64 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  Hasher HVar4;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = *(undefined1 *)(unaff_x20 + 2);
  Swift::Hasher::init(param_1);
  HVar4.unknown = auStack_78;
  FUN_1007fe4c8(HVar4.unknown,uVar1,uVar2,uVar3);
  Swift::Hasher::_finalize(HVar4);
  return;
}



/* Address: 0x1007fe6bc | FUN_1007fe6bc */

String FUN_1007fe6bc(char *param_1,void *param_2,byte param_3)

{
  char *pcVar1;
  undefined1 *puVar2;
  bool bVar3;
  String SVar4;
  
  if (param_3 < 2) {
    if (param_3 == 0) {
      _swift_bridgeObjectRetain(param_2);
      SVar4.bridgeObject = param_2;
      SVar4.str = param_1;
    }
    else {
      SVar4 = Swift::CustomStringConvertible::get_description();
    }
  }
  else {
    if (param_3 == 2) {
      SVar4 = double::get_description((double)param_1);
      return SVar4;
    }
    bVar3 = ((ulong)param_1 & 1) == 0;
    pcVar1 = (char *)0x65757274;
    if (bVar3) {
      pcVar1 = (char *)0x65736c6166;
    }
    puVar2 = &DAT_e400000000000000;
    if (bVar3) {
      puVar2 = &DAT_e500000000000000;
    }
    SVar4.bridgeObject = puVar2;
    SVar4.str = pcVar1;
  }
  return SVar4;
}



/* Address: 0x1007fe76c | FUN_1007fe76c */

String FUN_1007fe76c(void)

{
  undefined1 *puVar1;
  byte bVar2;
  bool bVar3;
  void *pvVar4;
  char *pcVar5;
  double *unaff_x20;
  String SVar6;
  
  pcVar5 = (char *)*unaff_x20;
  bVar2 = *(byte *)(unaff_x20 + 2);
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      pvVar4 = (void *)unaff_x20[1];
      _swift_bridgeObjectRetain(pvVar4);
      SVar6.bridgeObject = pvVar4;
      SVar6.str = pcVar5;
    }
    else {
      SVar6 = Swift::CustomStringConvertible::get_description();
    }
  }
  else {
    if (bVar2 == 2) {
      SVar6 = double::get_description((double)pcVar5);
      return SVar6;
    }
    bVar3 = ((ulong)pcVar5 & 1) == 0;
    pcVar5 = (char *)0x65757274;
    if (bVar3) {
      pcVar5 = (char *)0x65736c6166;
    }
    puVar1 = &DAT_e400000000000000;
    if (bVar3) {
      puVar1 = &DAT_e500000000000000;
    }
    SVar6.bridgeObject = puVar1;
    SVar6.str = pcVar5;
  }
  return SVar6;
}



/* Address: 0x1007fe81c | FUN_1007fe81c */

undefined8 FUN_1007fe81c(undefined8 param_1)

{
  return param_1;
}



/* Address: 0x1007fe82c | FUN_1007fe82c */

void FUN_1007fe82c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 2;
  return;
}



/* Address: 0x1007fe840 | FUN_1007fe840 */

ulong FUN_1007fe840(ulong param_1)

{
  return param_1 & 1;
}



/* Address: 0x1007fe850 | FUN_1007fe850 */

void FUN_1007fe850(ulong *param_1,byte *param_2)

{
  *param_1 = (ulong)*param_2;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 3;
  return;
}



/* Address: 0x1007fe864 | FUN_1007fe864 */

/* WARNING: Removing unreachable block (ram,0x0001007feb9c) */

String FUN_1007fe864(long param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  char ****ppppcVar3;
  ulong uVar4;
  char ****ppppcVar5;
  char ****ppppcVar6;
  byte bVar7;
  char ****ppppcVar8;
  char ***pppcVar9;
  code *pcVar10;
  bool bVar11;
  char *****pppppcVar12;
  char *****pppppcVar13;
  char *pcVar14;
  void *pvVar15;
  char *****pppppcVar16;
  char ****ppppcVar17;
  char ****ppppcVar18;
  char *pcVar19;
  char ****ppppcVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  char ****local_98;
  char ***pppcStack_90;
  undefined8 local_88;
  void *pvStack_80;
  undefined8 local_78;
  String separator;
  
  pppppcVar16 = *(char ******)(param_1 + 0x10);
  if (pppppcVar16 == (char *****)0x0) {
    SVar23 = (String)(ZEXT816(0xe000000000000000) << 0x40);
  }
  else {
    _swift_bridgeObjectRetain();
    pppppcVar12 = pppppcVar16;
    FUN_100835bd8(pppppcVar16,0);
    pppppcVar13 = &local_98;
    FUN_1008375f8(pppppcVar13,pppppcVar12 + 4,pppppcVar16,param_1);
    FUN_10000c650(local_98,pppcStack_90,local_88,pvStack_80,local_78);
    if (pppppcVar13 != pppppcVar16) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1007feb9c);
      (*pcVar10)();
    }
    local_98 = (char ****)pppppcVar12;
    FUN_1007feba8(&local_98);
    ppppcVar8 = local_98;
    ppppcVar18 = (char ****)PTR___swiftEmptyArrayStorage_100eae0d8;
    ppppcVar20 = (char ****)local_98[2];
    if (ppppcVar20 == (char ****)0x0) {
      _swift_release(local_98);
      ppppcVar18 = (char ****)PTR___swiftEmptyArrayStorage_100eae0d8;
    }
    else {
      pcVar14 = (char *)0x0;
      FUN_10083547c(0,ppppcVar20);
      ppppcVar17 = (char ****)0x0;
      pppppcVar16 = (char *****)(ppppcVar8 + 8);
      pvVar15 = pvStack_80;
      do {
        if (ppppcVar8[2] <= ppppcVar17) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x1007feb98);
          (*pcVar10)();
        }
        pppppcVar13 = (char *****)pppppcVar16[-4];
        ppppcVar5 = pppppcVar16[-3];
        ppppcVar3 = (char ****)((String *)(pppppcVar16 + -2))->str;
        ppppcVar6 = pppppcVar16[-1];
        SVar23 = *(String *)(pppppcVar16 + -2);
        bVar7 = *(byte *)pppppcVar16;
        pcVar19 = (char *)(ulong)bVar7;
        if (bVar7 < 2) {
          if (bVar7 == 0) {
            FUN_1004a7398(ppppcVar3,ppppcVar6,0);
            pcVar14 = (char *)0x0;
            FUN_1004a7398(ppppcVar3,ppppcVar6);
            _swift_bridgeObjectRetain(ppppcVar5);
          }
          else {
            local_98 = ppppcVar3;
            _swift_bridgeObjectRetain(ppppcVar5);
            SVar23 = Swift::CustomStringConvertible::get_description();
          }
        }
        else {
          if (bVar7 == 2) {
            local_98 = (char ****)0x0;
            pppcStack_90 = (void *)0xe000000000000000;
            _swift_bridgeObjectRetain(ppppcVar5);
            pcVar14 = 
            PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
            ;
            double::_write((undefined *)&local_98,(double)ppppcVar3);
          }
          else {
            local_98 = (char ****)0x0;
            pppcStack_90 = (void *)0xe000000000000000;
            bVar11 = ((ulong)ppppcVar3 & 1) == 0;
            pcVar1 = (char *)0x65757274;
            if (bVar11) {
              pcVar1 = (char *)0x65736c6166;
            }
            puVar2 = &DAT_e400000000000000;
            if (bVar11) {
              puVar2 = &DAT_e500000000000000;
            }
            _swift_bridgeObjectRetain(ppppcVar5);
            SVar21.bridgeObject = puVar2;
            SVar21.str = pcVar1;
            SVar24.bridgeObject = pvVar15;
            SVar24.str = pcVar14;
            Swift::String::append(SVar21,SVar24);
            _swift_bridgeObjectRelease(puVar2);
          }
          SVar23.bridgeObject = pppcStack_90;
          SVar23.str = (char *)local_98;
        }
        local_98 = (char ****)pppppcVar13;
        pppcStack_90 = (char ***)ppppcVar5;
        _swift_bridgeObjectRetain(ppppcVar5);
        SVar22.bridgeObject = (void *)0xe100000000000000;
        SVar22.str = (char *)0x3d;
        SVar25.bridgeObject = pvVar15;
        SVar25.str = pcVar14;
        Swift::String::append(SVar22,SVar25);
        SVar26.bridgeObject = pvVar15;
        SVar26.str = pcVar14;
        Swift::String::append(SVar23,SVar26);
        _swift_bridgeObjectRelease(ppppcVar5);
        _swift_bridgeObjectRelease(SVar23.bridgeObject);
        FUN_1004dc818(ppppcVar3,ppppcVar6);
        pppcVar9 = pppcStack_90;
        ppppcVar3 = local_98;
        uVar4 = *(ulong *)((long)ppppcVar18 + 0x10);
        if (*(ulong *)((long)ppppcVar18 + 0x18) >> 1 <= uVar4) {
          pcVar19 = &DAT_00000001;
          FUN_10083547c(1 < *(ulong *)((long)ppppcVar18 + 0x18),uVar4 + 1);
        }
        ppppcVar17 = (char ****)((long)ppppcVar17 + 1);
        *(ulong *)((long)ppppcVar18 + 0x10) = uVar4 + 1;
        *(char *****)((long)ppppcVar18 + uVar4 * 0x10 + 0x20) = ppppcVar3;
        *(char ****)((long)ppppcVar18 + uVar4 * 0x10 + 0x28) = pppcVar9;
        pppppcVar16 = pppppcVar16 + 5;
        pcVar14 = pcVar19;
      } while (ppppcVar20 != ppppcVar17);
      _swift_release(ppppcVar8);
    }
    local_98 = ppppcVar18;
    FUN_1000f7830(&DAT_100fe6f38,&DAT_100c7b090);
    FUN_1007ff838();
    separator.bridgeObject = (void *)0xe100000000000000;
    separator.str = (char *)0x3b;
    SVar23 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator);
    _swift_bridgeObjectRelease(ppppcVar18);
  }
  return SVar23;
}



/* Address: 0x1007feba8 | FUN_1007feba8 */

void FUN_1007feba8(ulong *param_1)

{
  __int64 _Var1;
  ContiguousArray CVar2;
  _ContiguousArrayBuffer<undefined> _Var3;
  ulong uVar4;
  ulong minimumCapacity;
  ulong uVar5;
  undefined *local_68;
  ulong uStack_60;
  undefined1 auStack_58 [8];
  long local_50;
  ulong uStack_48;
  
  uVar4 = *param_1;
  uVar5 = uVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar5 & 1) == 0) {
    FUN_10084744c();
  }
  uVar5 = *(ulong *)(uVar4 + 0x10);
  local_50 = uVar4 + 0x20;
  uStack_48 = uVar5;
  _Var1 = Swift::_minimumMergeRunLength(uVar5);
  if (_Var1 < (long)uVar5) {
    minimumCapacity = uVar5 >> 1;
    _Var3.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (1 < uVar5) {
      CVar2.unknown = &DAT_100fe6f70;
      FUN_1000f7830(&DAT_100fe6f70,&DAT_100c7b080);
      _Var3 = Swift::ContiguousArray::_allocateBufferUninitialized(minimumCapacity,CVar2);
      *(ulong *)(_Var3.unknown + 0x10) = minimumCapacity;
    }
    local_68 = _Var3.unknown + 0x20;
    uStack_60 = minimumCapacity;
    FUN_1007fecb4(&local_68,auStack_58,&local_50,_Var1);
    *(undefined8 *)(_Var3.unknown + 0x10) = 0;
    _swift_release(_Var3.unknown);
  }
  else if (uVar5 != 0) {
    FUN_1007ff104(0,uVar5,1,&local_50);
  }
  *param_1 = uVar4;
  return;
}



/* Address: 0x1007fecb4 | FUN_1007fecb4 */

void FUN_1007fecb4(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  long lVar1;
  ulong *puVar2;
  undefined8 uVar3;
  _StringGuts _Var4;
  undefined8 uVar5;
  undefined1 uVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  _StringGuts _Var13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  long *plVar22;
  long *plVar23;
  long lVar24;
  long unaff_x21;
  long lVar25;
  ulong *puVar26;
  long lVar27;
  ulong uVar28;
  undefined8 uVar29;
  long lVar30;
  undefined8 uVar31;
  long lVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined *local_58;
  
  local_58 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar27 = param_3[1];
  if (0 < lVar27) {
    lVar16 = 0;
    do {
      lVar24 = lVar16 + 1;
      if (lVar24 < lVar27) {
        lVar25 = *param_3;
        puVar14 = (undefined8 *)(lVar25 + lVar24 * 0x28);
        _Var13.unknown = (undefined *)*puVar14;
        _Var4.unknown = (undefined *)puVar14[1];
        puVar14 = (undefined8 *)(lVar25 + lVar16 * 0x28);
        puVar12 = (undefined *)*puVar14;
        if (_Var13.unknown == puVar12 && _Var4.unknown == (undefined *)puVar14[1]) {
          bVar8 = false;
        }
        else {
          bVar8 = Swift::_stringCompareWithSmolCheck
                            (_Var13,_Var4,(_StringComparisonResult)(__int8)puVar12);
        }
        lVar19 = lVar16 + 2;
        lVar24 = lVar19;
        if (lVar19 < lVar27) {
          plVar22 = (long *)(lVar25 + lVar16 * 0x28 + 0x30);
          do {
            _Var13.unknown = (undefined *)plVar22[5];
            if ((undefined *)plVar22[4] == (undefined *)plVar22[-1] &&
                _Var13.unknown == (undefined *)*plVar22) {
              if (bVar8 != false) goto LAB_1007fedb8;
            }
            else {
              bVar9 = Swift::_stringCompareWithSmolCheck
                                ((undefined *)plVar22[4],_Var13,
                                 (_StringComparisonResult)(__int8)(undefined *)plVar22[-1]);
              lVar24 = lVar19;
              if (bVar8 != bVar9) break;
            }
            lVar19 = lVar19 + 1;
            plVar22 = plVar22 + 5;
            lVar24 = lVar27;
          } while (lVar27 != lVar19);
        }
        lVar19 = lVar24;
        if (bVar8 != false) {
LAB_1007fedb8:
          if (lVar19 < lVar16) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1007ff0d8);
            (*pcVar7)();
          }
          lVar24 = lVar19;
          if (lVar16 < lVar19) {
            lVar15 = lVar19 * 0x28;
            lVar17 = lVar16 * 0x28;
            lVar27 = lVar16;
            do {
              lVar19 = lVar19 + -1;
              if (lVar27 != lVar19) {
                if (lVar25 == 0) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x1007ff0f8);
                  (*pcVar7)();
                }
                puVar14 = (undefined8 *)(lVar25 + lVar17);
                lVar1 = lVar25 + lVar15;
                uVar3 = *puVar14;
                uVar5 = puVar14[1];
                uVar6 = *(undefined1 *)(puVar14 + 4);
                uVar31 = puVar14[3];
                uVar29 = puVar14[2];
                uVar21 = *(undefined8 *)(lVar1 + -8);
                uVar34 = *(undefined8 *)(lVar1 + -0x10);
                uVar33 = *(undefined8 *)(lVar1 + -0x18);
                uVar35 = *(undefined8 *)(lVar1 + -0x28);
                puVar14[1] = *(undefined8 *)(lVar1 + -0x20);
                *puVar14 = uVar35;
                puVar14[3] = uVar34;
                puVar14[2] = uVar33;
                puVar14[4] = uVar21;
                *(undefined8 *)(lVar1 + -0x28) = uVar3;
                *(undefined8 *)(lVar1 + -0x20) = uVar5;
                *(undefined8 *)(lVar1 + -0x10) = uVar31;
                *(undefined8 *)(lVar1 + -0x18) = uVar29;
                *(undefined1 *)(lVar1 + -8) = uVar6;
              }
              lVar27 = lVar27 + 1;
              lVar15 = lVar15 + -0x28;
              lVar17 = lVar17 + 0x28;
            } while (lVar27 < lVar19);
          }
        }
      }
      lVar27 = param_3[1];
      lVar25 = lVar24;
      if (lVar24 < lVar27) {
        if (SBORROW8(lVar24,lVar16)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1007ff0d4);
          (*pcVar7)();
        }
        if (lVar24 - lVar16 < param_4) {
          if (SCARRY8(lVar16,param_4)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1007ff0dc);
            (*pcVar7)();
          }
          lVar19 = lVar16 + param_4;
          if (lVar27 <= lVar16 + param_4) {
            lVar19 = lVar27;
          }
          if (lVar19 < lVar16) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1007ff0e0);
            (*pcVar7)();
          }
          if (lVar24 != lVar19) {
            lVar15 = *param_3;
            plVar22 = (long *)(lVar15 + lVar24 * 0x28 + -0x28);
            lVar27 = lVar16 - lVar24;
            lVar17 = lVar27;
            plVar23 = plVar22;
LAB_1007feeb8:
            do {
              _Var13.unknown = (undefined *)plVar22[5];
              if ((_Var13.unknown != (undefined *)*plVar22 ||
                   (undefined *)plVar22[6] != (undefined *)plVar22[1]) &&
                 (bVar8 = Swift::_stringCompareWithSmolCheck
                                    (_Var13,(undefined *)plVar22[6],
                                     (_StringComparisonResult)(__int8)(undefined *)*plVar22), bVar8)
                 ) {
                if (lVar15 == 0) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x1007ff0e4);
                  (*pcVar7)();
                }
                lVar25 = plVar22[5];
                lVar1 = plVar22[6];
                lVar32 = plVar22[8];
                lVar30 = plVar22[7];
                lVar20 = plVar22[4];
                plVar22[6] = plVar22[1];
                plVar22[5] = *plVar22;
                plVar22[8] = plVar22[3];
                plVar22[7] = plVar22[2];
                *plVar22 = lVar25;
                plVar22[1] = lVar1;
                plVar22[3] = lVar32;
                plVar22[2] = lVar30;
                *(char *)(plVar22 + 4) = (char)plVar22[9];
                plVar22[9] = lVar20;
                bVar8 = lVar27 != -1;
                lVar27 = lVar27 + 1;
                plVar22 = plVar22 + -5;
                if (bVar8) goto LAB_1007feeb8;
              }
              lVar24 = lVar24 + 1;
              plVar22 = plVar23 + 5;
              lVar27 = lVar17 + -1;
              lVar25 = lVar19;
              lVar17 = lVar27;
              plVar23 = plVar22;
            } while (lVar24 != lVar19);
          }
        }
      }
      puVar12 = local_58;
      if (lVar25 < lVar16) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1007ff0c4);
        (*pcVar7)();
      }
      puVar10 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar11 = puVar12;
      if (((ulong)puVar10 & 1) == 0) {
        puVar11 = (undefined *)0x0;
        FUN_1008441e8(0,*(long *)(puVar12 + 0x10) + 1,1,puVar12);
      }
      uVar28 = *(ulong *)(puVar11 + 0x10);
      puVar12 = puVar11;
      if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar28) {
        puVar12 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
        FUN_1008441e8(puVar12,uVar28 + 1,1,puVar11);
      }
      *(ulong *)(puVar12 + 0x10) = uVar28 + 1;
      *(long *)(puVar12 + uVar28 * 0x10 + 0x20) = lVar16;
      *(long *)(puVar12 + uVar28 * 0x10 + 0x28) = lVar25;
      local_58 = puVar12;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1007ff0fc);
        (*pcVar7)();
      }
      FUN_1007ff1f0(&local_58,*param_1,param_3);
      puVar12 = local_58;
      if (unaff_x21 != 0) goto LAB_1007ff094;
      lVar27 = param_3[1];
      lVar16 = lVar25;
    } while (lVar25 < lVar27);
  }
  puVar12 = local_58;
  lVar27 = *param_1;
  if (lVar27 == 0) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x1007ff104);
    (*pcVar7)();
  }
  puVar10 = local_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar10 & 1) == 0) {
    FUN_100844370();
  }
  puVar26 = (ulong *)(puVar12 + 0x10);
  uVar28 = *puVar26;
  while (1 < uVar28) {
    lVar16 = *param_3;
    if (lVar16 == 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1007ff100);
      (*pcVar7)();
    }
    plVar22 = (long *)(puVar12 + uVar28 * 0x10);
    lVar24 = *plVar22;
    puVar2 = puVar26 + uVar28 * 2;
    uVar18 = puVar2[1];
    FUN_1007ff460(lVar16 + lVar24 * 0x28,lVar16 + *puVar2 * 0x28,lVar16 + uVar18 * 0x28,lVar27);
    if (unaff_x21 != 0) break;
    if ((long)uVar18 < lVar24) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1007ff0c8);
      (*pcVar7)();
    }
    if (*puVar26 <= uVar28 - 2) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1007ff0cc);
      (*pcVar7)();
    }
    *plVar22 = lVar24;
    plVar22[1] = uVar18;
    uVar18 = *puVar26;
    lVar16 = uVar18 - uVar28;
    if (uVar18 < uVar28) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1007ff0d0);
      (*pcVar7)();
    }
    uVar28 = uVar18 - 1;
    _memmove(puVar2,puVar2 + 2,lVar16 * 0x10);
    *puVar26 = uVar28;
  }
LAB_1007ff094:
  _swift_bridgeObjectRelease(puVar12);
  return;
}



/* Address: 0x1007ff104 | FUN_1007ff104 */

void FUN_1007ff104(long param_1,long param_2,long param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  _StringGuts _Var5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  if (param_3 != param_2) {
    lVar7 = *param_4;
    plVar8 = (long *)(lVar7 + param_3 * 0x28 + -0x28);
    param_1 = param_1 - param_3;
    lVar10 = param_1;
    plVar9 = plVar8;
LAB_1007ff188:
    do {
      _Var5.unknown = (undefined *)plVar8[5];
      if ((_Var5.unknown != (undefined *)*plVar8 || (undefined *)plVar8[6] != (undefined *)plVar8[1]
          ) && (bVar4 = Swift::_stringCompareWithSmolCheck
                                  (_Var5,(undefined *)plVar8[6],
                                   (_StringComparisonResult)(__int8)(undefined *)*plVar8), bVar4)) {
        if (lVar7 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1007ff1f0);
          (*pcVar3)();
        }
        lVar1 = plVar8[5];
        lVar2 = plVar8[6];
        lVar12 = plVar8[8];
        lVar11 = plVar8[7];
        lVar6 = plVar8[4];
        plVar8[6] = plVar8[1];
        plVar8[5] = *plVar8;
        plVar8[8] = plVar8[3];
        plVar8[7] = plVar8[2];
        *plVar8 = lVar1;
        plVar8[1] = lVar2;
        plVar8[3] = lVar12;
        plVar8[2] = lVar11;
        *(char *)(plVar8 + 4) = (char)plVar8[9];
        plVar8[9] = lVar6;
        bVar4 = param_1 != -1;
        param_1 = param_1 + 1;
        plVar8 = plVar8 + -5;
        if (bVar4) goto LAB_1007ff188;
      }
      param_3 = param_3 + 1;
      plVar8 = plVar9 + 5;
      param_1 = lVar10 + -1;
      lVar10 = param_1;
      plVar9 = plVar8;
    } while (param_3 != param_2);
  }
  return;
}



/* Address: 0x1007ff1f0 | FUN_1007ff1f0 */

undefined8 FUN_1007ff1f0(ulong *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  uVar8 = *param_1;
  if (1 < *(ulong *)(uVar8 + 0x10)) {
    uVar6 = uVar8;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar6 & 1) == 0) {
      FUN_100844370();
    }
    *param_1 = uVar8;
    uVar6 = *(ulong *)(uVar8 + 0x10);
    do {
      lVar9 = uVar6 - 1;
      if (uVar6 < 4) {
        if (uVar6 == 3) {
          bVar5 = SBORROW8(*(long *)(uVar8 + 0x28),*(long *)(uVar8 + 0x20));
          lVar7 = *(long *)(uVar8 + 0x28) - *(long *)(uVar8 + 0x20);
          goto LAB_1007ff2c8;
        }
        if (uVar6 < 2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1007ff448);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar7 = *plVar1;
        lVar12 = plVar1[1];
        bVar5 = SBORROW8(lVar12,lVar7);
        lVar12 = lVar12 - lVar7;
LAB_1007ff32c:
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1007ff438);
          (*pcVar4)();
        }
        lVar7 = uVar8 + lVar9 * 0x10;
        lVar2 = *(long *)(lVar7 + 0x20);
        lVar7 = *(long *)(lVar7 + 0x28);
        if (SBORROW8(lVar7,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1007ff440);
          (*pcVar4)();
        }
        lVar10 = lVar9;
        if (lVar7 - lVar2 < lVar12) {
          return 1;
        }
      }
      else {
        lVar12 = uVar8 + 0x20 + uVar6 * 0x10;
        if (SBORROW8(*(long *)(lVar12 + -0x38),*(long *)(lVar12 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1007ff420);
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar12 + -0x28) - *(long *)(lVar12 + -0x30);
        if (SBORROW8(*(long *)(lVar12 + -0x28),*(long *)(lVar12 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1007ff424);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar2 = *plVar1;
        lVar10 = plVar1[1];
        lVar3 = lVar10 - lVar2;
        if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1007ff42c);
          (*pcVar4)();
        }
        if (SCARRY8(lVar7,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1007ff434);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar7 + lVar3 < *(long *)(lVar12 + -0x38) - *(long *)(lVar12 + -0x40)) {
LAB_1007ff2c8:
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1007ff428);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1007ff430);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar3 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1007ff43c);
            (*pcVar4)();
          }
          if (SCARRY8(lVar12,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1007ff444);
            (*pcVar4)();
          }
          bVar5 = false;
          if (lVar12 + lVar3 < lVar7) goto LAB_1007ff32c;
          lVar10 = uVar6 - 2;
          if (lVar3 <= lVar7) {
            lVar10 = lVar9;
          }
        }
        else {
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar12 = *plVar1;
          lVar2 = plVar1[1];
          if (SBORROW8(lVar2,lVar12)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1007ff44c);
            (*pcVar4)();
          }
          lVar10 = uVar6 - 2;
          if (lVar2 - lVar12 <= lVar7) {
            lVar10 = lVar9;
          }
        }
      }
      uVar11 = lVar10 - 1;
      if (uVar6 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1007ff414);
        (*pcVar4)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1007ff460);
        (*pcVar4)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar7 = plVar1[1];
      FUN_1007ff460(lVar9 + lVar12 * 0x28,lVar9 + *plVar1 * 0x28,lVar9 + lVar7 * 0x28,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1007ff418);
        (*pcVar4)();
      }
      uVar6 = uVar8;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar6 & 1) == 0) {
        FUN_100844370();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1007ff41c);
        (*pcVar4)();
      }
      lVar9 = uVar8 + uVar11 * 0x10;
      *(long *)(lVar9 + 0x20) = lVar12;
      *(long *)(lVar9 + 0x28) = lVar7;
      *param_1 = uVar8;
      FUN_1008442e8(lVar10);
      uVar8 = *param_1;
      uVar6 = *(ulong *)(uVar8 + 0x10);
    } while (1 < uVar6);
  }
  return 1;
}



/* Address: 0x1007ff460 | FUN_1007ff460 */

undefined8
FUN_1007ff460(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  size_t sVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar1 = ((long)param_2 - (long)param_1) / 0x28;
  lVar2 = ((long)param_3 - (long)param_2) / 0x28;
  if (lVar1 < lVar2) {
    if ((param_4 != param_1) || (param_1 + lVar1 * 5 <= param_4)) {
      _memmove(param_4,param_1,lVar1 * 0x28);
    }
    puVar8 = param_4 + lVar1 * 5;
    puVar5 = param_1;
    if (0x27 < (long)param_2 - (long)param_1) {
      do {
        if (param_3 <= param_2) break;
        if (((undefined *)*param_2 == (undefined *)*param_4 &&
             (undefined *)param_2[1] == (undefined *)param_4[1]) ||
           (bVar3 = Swift::_stringCompareWithSmolCheck
                              ((undefined *)*param_2,(undefined *)param_2[1],
                               (_StringComparisonResult)(__int8)(undefined *)*param_4), !bVar3)) {
          puVar6 = param_4 + 5;
          puVar7 = param_4;
        }
        else {
          puVar6 = param_4;
          puVar7 = param_2;
          param_2 = param_2 + 5;
        }
        param_4 = puVar6;
        if (puVar5 != puVar7) {
          uVar11 = puVar7[1];
          uVar10 = *puVar7;
          uVar13 = puVar7[3];
          uVar12 = puVar7[2];
          puVar5[4] = puVar7[4];
          puVar5[1] = uVar11;
          *puVar5 = uVar10;
          puVar5[3] = uVar13;
          puVar5[2] = uVar12;
        }
        puVar5 = puVar5 + 5;
      } while (param_4 < puVar8);
    }
  }
  else {
    if ((param_4 != param_2) || (param_2 + lVar2 * 5 <= param_4)) {
      _memmove(param_4,param_2,lVar2 * 0x28);
    }
    puVar7 = param_4 + lVar2 * 5;
    puVar5 = param_2;
    puVar8 = puVar7;
    if ((param_1 < param_2) && (0x27 < (long)param_3 - (long)param_2)) {
      do {
        puVar9 = param_2 + -5;
        puVar6 = param_3;
        while( true ) {
          param_3 = puVar6 + -5;
          puVar8 = puVar7 + -5;
          if (((undefined *)*puVar8 != (undefined *)param_2[-5] ||
               (undefined *)puVar7[-4] != (undefined *)param_2[-4]) &&
             (bVar3 = Swift::_stringCompareWithSmolCheck
                                ((undefined *)*puVar8,(undefined *)puVar7[-4],
                                 (_StringComparisonResult)(__int8)(undefined *)param_2[-5]), bVar3))
          break;
          if (puVar6 != puVar7) {
            uVar11 = puVar7[-4];
            uVar10 = *puVar8;
            uVar13 = puVar7[-2];
            uVar12 = puVar7[-3];
            puVar6[-1] = puVar7[-1];
            puVar6[-4] = uVar11;
            *param_3 = uVar10;
            puVar6[-2] = uVar13;
            puVar6[-3] = uVar12;
          }
          puVar5 = param_2;
          puVar7 = puVar8;
          puVar6 = param_3;
          if (puVar8 <= param_4) goto LAB_1007ff640;
        }
        if (puVar6 != param_2) {
          uVar11 = param_2[-4];
          uVar10 = *puVar9;
          uVar13 = param_2[-2];
          uVar12 = param_2[-3];
          puVar6[-1] = param_2[-1];
          puVar6[-4] = uVar11;
          *param_3 = uVar10;
          puVar6[-2] = uVar13;
          puVar6[-3] = uVar12;
        }
        puVar5 = puVar9;
        puVar8 = puVar7;
      } while ((param_1 < puVar9) && (param_2 = puVar9, param_4 < puVar7));
    }
  }
LAB_1007ff640:
  sVar4 = (((long)puVar8 - (long)param_4) / 0x28) * 0x28;
  if ((puVar5 != param_4) ||
     ((undefined8 *)((long)puVar8 + (sVar4 - ((long)puVar8 - (long)param_4))) <= puVar5)) {
    _memmove(puVar5,param_4,sVar4);
  }
  return 1;
}



/* Address: 0x1007ff6a4 | FUN_1007ff6a4 */

uint FUN_1007ff6a4(_StringGuts param_1,_StringGuts param_2,byte param_3,undefined *param_4,
                  undefined *param_5,char param_6)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  if (1 < param_3) {
    uVar1 = (uint)((double)param_1.unknown == (double)param_4);
    if (param_6 != '\x02') {
      uVar1 = 0;
    }
    uVar2 = (uint)param_4 ^ (uint)param_1.unknown ^ 1;
    if (param_6 != '\x03') {
      uVar2 = 0;
    }
    if (param_3 != 2) {
      uVar1 = uVar2;
    }
    return uVar1 & 1;
  }
  if (param_3 != 0) {
    return (uint)(param_6 == '\x01' && param_1.unknown == param_4);
  }
  if (param_6 != '\0') {
    return 0;
  }
  if ((param_1.unknown == param_4) && (param_2.unknown == param_5)) {
    return 1;
  }
  bVar3 = Swift::_stringCompareWithSmolCheck
                    (param_1,param_2,(_StringComparisonResult)(__int8)param_4);
  return (uint)bVar3;
}



/* Address: 0x1007ff748 | thunk_FUN_1007ff74c */

void thunk_FUN_1007ff74c(void)

{
  undefined *puVar1;
  
  if (DAT_100fe6f58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100c7ae60;
  _swift_getWitnessTable(&DAT_100c7ae60,&DAT_100f042b0);
  DAT_100fe6f58 = puVar1;
  return;
}



/* Address: 0x1007ff74c | FUN_1007ff74c */

void FUN_1007ff74c(void)

{
  undefined *puVar1;
  
  if (DAT_100fe6f58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100c7ae60;
  _swift_getWitnessTable(&DAT_100c7ae60,&DAT_100f042b0);
  DAT_100fe6f58 = puVar1;
  return;
}



/* Address: 0x1007ff78c | thunk_FUN_1007ff790 */

void thunk_FUN_1007ff790(void)

{
  undefined *puVar1;
  
  if (DAT_100fe6f60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100c7af30;
  _swift_getWitnessTable(&DAT_100c7af30,&DAT_100f042b0);
  DAT_100fe6f60 = puVar1;
  return;
}



/* Address: 0x1007ff790 | FUN_1007ff790 */

void FUN_1007ff790(void)

{
  undefined *puVar1;
  
  if (DAT_100fe6f60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100c7af30;
  _swift_getWitnessTable(&DAT_100c7af30,&DAT_100f042b0);
  DAT_100fe6f60 = puVar1;
  return;
}



/* Address: 0x1007ff7d0 | thunk_FUN_1007ff7d4 */

void thunk_FUN_1007ff7d4(void)

{
  undefined *puVar1;
  
  if (DAT_100fe6f68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100c7af70;
  _swift_getWitnessTable(&DAT_100c7af70,&DAT_100f042b0);
  DAT_100fe6f68 = puVar1;
  return;
}



/* Address: 0x1007ff7d4 | FUN_1007ff7d4 */

void FUN_1007ff7d4(void)

{
  undefined *puVar1;
  
  if (DAT_100fe6f68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100c7af70;
  _swift_getWitnessTable(&DAT_100c7af70,&DAT_100f042b0);
  DAT_100fe6f68 = puVar1;
  return;
}



/* Address: 0x1007ff814 | FUN_1007ff814 */

void FUN_1007ff814(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x1007ff828 | FUN_1007ff828 */

undefined1  [16] FUN_1007ff828(void)

{
  return ZEXT816(0x100f042b0);
}



/* Address: 0x1007ff838 | FUN_1007ff838 */

void FUN_1007ff838(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fe6f40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fe6f38;
  FUN_1000f8b08(&DAT_100fe6f38,&DAT_100c7b090);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100eac518;
  _swift_getWitnessTable
            (PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100eac518,puVar1);
  DAT_100fe6f40 = puVar2;
  return;
}



/* Address: 0x1007ff888 | thunk_FUN_1007ff8e4 */

String thunk_FUN_1007ff8e4(undefined8 param_1,char *param_2)

{
  ulong uVar1;
  char *pcVar2;
  char *pcVar3;
  String SVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  void *pvVar4;
  
  _swift_bridgeObjectRetain();
  pcVar2 = &DAT_100fe6f38;
  FUN_1000f7830(&DAT_100fe6f38,&DAT_100c7b090);
  pcVar3 = pcVar2;
  FUN_1007ff838();
  SVar5.bridgeObject = (void *)0xe100000000000000;
  SVar5.str = (char *)0x2e;
  SVar5 = (extension_Swift)::Swift::BidirectionalCollection::_joined(SVar5);
  pvVar4 = SVar5.bridgeObject;
  _swift_bridgeObjectRelease(param_1);
  FUN_1007fe864();
  uVar1 = (ulong)param_2 & 0xffffffffffff;
  if (((ulong)pvVar4 & 0x2000000000000000) != 0) {
    uVar1 = (ulong)pvVar4 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    _swift_bridgeObjectRelease(pvVar4);
  }
  else {
    SVar6.bridgeObject = &SUB_e200000000000000;
    SVar6.str = (char *)0x5b20;
    SVar9.bridgeObject = pcVar3;
    SVar9.str = pcVar2;
    Swift::String::append(SVar6,SVar9);
    SVar7.bridgeObject = pvVar4;
    SVar7.str = param_2;
    SVar10.bridgeObject = pcVar3;
    SVar10.str = pcVar2;
    Swift::String::append(SVar7,SVar10);
    _swift_bridgeObjectRelease(pvVar4);
    SVar8.bridgeObject = (void *)0xe100000000000000;
    SVar8.str = (char *)0x5d;
    SVar11.bridgeObject = pcVar3;
    SVar11.str = pcVar2;
    Swift::String::append(SVar8,SVar11);
  }
  return SVar5;
}



/* Address: 0x1007ff88c | FUN_1007ff88c */

undefined1  [16] FUN_1007ff88c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = param_2;
  FUN_10082e974();
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(param_3);
  auVar2._8_8_ = uVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Address: 0x1007ff8d8 | FUN_1007ff8d8 */

void FUN_1007ff8d8(void)

{
  FUN_1007ffbd4();
  return;
}



/* Address: 0x1007ff8e4 | FUN_1007ff8e4 */

String FUN_1007ff8e4(undefined8 param_1,char *param_2)

{
  ulong uVar1;
  char *pcVar2;
  char *pcVar3;
  String SVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  void *pvVar4;
  
  _swift_bridgeObjectRetain();
  pcVar2 = &DAT_100fe6f38;
  FUN_1000f7830(&DAT_100fe6f38,&DAT_100c7b090);
  pcVar3 = pcVar2;
  FUN_1007ff838();
  SVar5.bridgeObject = (void *)0xe100000000000000;
  SVar5.str = (char *)0x2e;
  SVar5 = (extension_Swift)::Swift::BidirectionalCollection::_joined(SVar5);
  pvVar4 = SVar5.bridgeObject;
  _swift_bridgeObjectRelease(param_1);
  FUN_1007fe864();
  uVar1 = (ulong)param_2 & 0xffffffffffff;
  if (((ulong)pvVar4 & 0x2000000000000000) != 0) {
    uVar1 = (ulong)pvVar4 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    _swift_bridgeObjectRelease(pvVar4);
  }
  else {
    SVar6.bridgeObject = &SUB_e200000000000000;
    SVar6.str = (char *)0x5b20;
    SVar9.bridgeObject = pcVar3;
    SVar9.str = pcVar2;
    Swift::String::append(SVar6,SVar9);
    SVar7.bridgeObject = pvVar4;
    SVar7.str = param_2;
    SVar10.bridgeObject = pcVar3;
    SVar10.str = pcVar2;
    Swift::String::append(SVar7,SVar10);
    _swift_bridgeObjectRelease(pvVar4);
    SVar8.bridgeObject = (void *)0xe100000000000000;
    SVar8.str = (char *)0x5d;
    SVar11.bridgeObject = pcVar3;
    SVar11.str = pcVar2;
    Swift::String::append(SVar8,SVar11);
  }
  return SVar5;
}



/* Address: 0x1007ff9d8 | thunk_FUN_1007ff9dc */

void thunk_FUN_1007ff9dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *param_2;
  uVar1 = param_2[1];
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_100800568(PTR___swiftEmptyArrayStorage_100eae0d8,FUN_100071370);
  uVar4 = uVar1;
  FUN_10082e974(uVar3,uVar1,puVar2);
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(puVar2);
  *param_1 = uVar3;
  param_1[1] = uVar4;
  return;
}



/* Address: 0x1007ff9dc | FUN_1007ff9dc */

void FUN_1007ff9dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *param_2;
  uVar1 = param_2[1];
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_100800568(PTR___swiftEmptyArrayStorage_100eae0d8,FUN_100071370);
  uVar4 = uVar1;
  FUN_10082e974(uVar3,uVar1,puVar2);
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(puVar2);
  *param_1 = uVar3;
  param_1[1] = uVar4;
  return;
}



/* Address: 0x1007ffa50 | FUN_1007ffa50 */

uint FUN_1007ffa50(uint param_1)

{
  FUN_1008002e0();
  return param_1 & 1;
}



/* Address: 0x1007ffa68 | FUN_1007ffa68 */

uint FUN_1007ffa68(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_1008002e0(uVar1,param_1[1],*param_2,param_2[1]);
  return (uint)uVar1 & 1;
}



/* Address: 0x1007ffa90 | thunk_FUN_1007ffa94 */

void thunk_FUN_1007ffa94(Hasher param_1,Hasher param_2,undefined8 param_3)

{
  char *pcVar1;
  void *pvVar2;
  __uint64 _Var3;
  undefined8 *puVar4;
  String SVar5;
  
  _Var3 = *(__uint64 *)(param_2.unknown + 0x10);
  Swift::Hasher::_combine(_Var3,param_2);
  if (_Var3 != 0) {
    puVar4 = (undefined8 *)(param_2.unknown + 0x28);
    do {
      pcVar1 = (char *)puVar4[-1];
      pvVar2 = (void *)*puVar4;
      _swift_bridgeObjectRetain(pvVar2);
      SVar5.bridgeObject = pvVar2;
      SVar5.str = pcVar1;
      Swift::String::hash(param_1,SVar5);
      _swift_bridgeObjectRelease(pvVar2);
      puVar4 = puVar4 + 2;
      _Var3 = _Var3 - 1;
    } while (_Var3 != 0);
  }
  FUN_10080009c(param_1.unknown,param_3);
  return;
}



/* Address: 0x1007ffa94 | FUN_1007ffa94 */

void FUN_1007ffa94(Hasher param_1,Hasher param_2,undefined8 param_3)

{
  char *pcVar1;
  void *pvVar2;
  __uint64 _Var3;
  undefined8 *puVar4;
  String SVar5;
  
  _Var3 = *(__uint64 *)(param_2.unknown + 0x10);
  Swift::Hasher::_combine(_Var3,param_2);
  if (_Var3 != 0) {
    puVar4 = (undefined8 *)(param_2.unknown + 0x28);
    do {
      pcVar1 = (char *)puVar4[-1];
      pvVar2 = (void *)*puVar4;
      _swift_bridgeObjectRetain(pvVar2);
      SVar5.bridgeObject = pvVar2;
      SVar5.str = pcVar1;
      Swift::String::hash(param_1,SVar5);
      _swift_bridgeObjectRelease(pvVar2);
      puVar4 = puVar4 + 2;
      _Var3 = _Var3 - 1;
    } while (_Var3 != 0);
  }
  FUN_10080009c(param_1.unknown,param_3);
  return;
}


