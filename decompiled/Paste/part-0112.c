/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100162e9c | FUN_100162e9c */

void FUN_100162e9c(void)

{
  long unaff_x20;
  
  FUN_100160a00(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x100162ea8 | FUN_100162ea8 */

void FUN_100162ea8(void)

{
  long unaff_x20;
  
  _swift_errorRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x100162ecc | FUN_100162ecc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100162ecc(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x100162f00 | FUN_100162f00 */

void FUN_100162f00(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100160c14(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100162f0c | FUN_100162f0c */

undefined8 FUN_100162f0c(undefined8 param_1)

{
  FUN_10015d994();
  return param_1;
}



/* Address: 0x100162f40 | FUN_100162f40 */

void FUN_100162f40(char *param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  char *pcVar10;
  _StringGuts extraout_x1;
  char *pcVar11;
  char *pcVar12;
  void *pvVar13;
  void *pvVar14;
  long unaff_x20;
  ID IVar15;
  long lVar16;
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
  String separator;
  String SVar28;
  String SVar29;
  String SVar30;
  String separator_00;
  String separator_01;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  char *local_70;
  void *local_68;
  char *local_58;
  char *local_50;
  void *local_48;
  
  lVar9 = PostHogConfig::pushIdentityProvider;
  uVar2 = (uint)param_2.unknown & 0xff;
  if (uVar2 == 1) {
LAB_100162f68:
    local_70 = (char *)0x0;
    local_68 = (void *)0xe000000000000000;
    Swift::_StringGuts::grow(0x44,param_2);
    SVar17.bridgeObject = (void *)0x8000000100d94830;
    SVar17.str = (char *)0xd00000000000001f;
    SVar27.bridgeObject = param_4;
    SVar27.str = param_3;
    Swift::String::append(SVar17,SVar27);
    if (uVar2 == 1) {
      SVar18.bridgeObject = &DAT_e400000000000000;
      SVar18.str = (char *)0x656e6f6e;
    }
    else {
      local_50 = param_1;
      SVar18 = Swift::CustomStringConvertible::get_description();
    }
    SVar28.bridgeObject = param_4;
    SVar28.str = param_3;
    Swift::String::append(SVar18,SVar28);
    _swift_bridgeObjectRelease(SVar18.bridgeObject);
    SVar19.bridgeObject = (void *)0x8000000100d94850;
    SVar19.str = (char *)0xd000000000000023;
    SVar29.bridgeObject = param_4;
    SVar29.str = param_3;
    Swift::String::append(SVar19,SVar29);
    pvVar14 = local_68;
    pcVar12 = local_70;
    if (DAT_101057340 != '\x01') goto LAB_10016318c;
    pcVar10 = &DAT_100fae660;
    FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
    pcVar11 = (char *)0x7;
    _swift_allocObject();
    pcVar10[0x18] = '\x02';
    pcVar10[0x19] = '\0';
    pcVar10[0x1a] = '\0';
    pcVar10[0x1b] = '\0';
    pcVar10[0x1c] = '\0';
    pcVar10[0x1d] = '\0';
    pcVar10[0x1e] = '\0';
    pcVar10[0x1f] = '\0';
    pcVar10[0x10] = '\x01';
    pcVar10[0x11] = '\0';
    pcVar10[0x12] = '\0';
    pcVar10[0x13] = '\0';
    pcVar10[0x14] = '\0';
    pcVar10[0x15] = '\0';
    pcVar10[0x16] = '\0';
    pcVar10[0x17] = '\0';
    local_70 = (char *)0x676f4874736f505b;
    local_68 = (void *)0xea0000000000205d;
    SVar20.bridgeObject = pvVar14;
    SVar20.str = pcVar12;
    SVar30.bridgeObject = param_4;
    SVar30.str = pcVar11;
    Swift::String::append(SVar20,SVar30);
    pcVar12 = local_70;
    pvVar13 = local_68;
  }
  else {
    if (param_1 + -200 < (char *)0x64) {
      IVar15 = *(ID *)(unaff_x20 + _TtC7PostHog30PostHogPushSubscriptionHandler::recordLock);
      objc_stub::lock(IVar15);
      FUN_100161220(param_3);
      objc_stub::unlock(IVar15);
      if (DAT_101057340 != '\x01') {
        return;
      }
      pcVar12 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      _swift_allocObject();
      pcVar12[0x18] = '\x02';
      pcVar12[0x19] = '\0';
      pcVar12[0x1a] = '\0';
      pcVar12[0x1b] = '\0';
      pcVar12[0x1c] = '\0';
      pcVar12[0x1d] = '\0';
      pcVar12[0x1e] = '\0';
      pcVar12[0x1f] = '\0';
      pcVar12[0x10] = '\x01';
      pcVar12[0x11] = '\0';
      pcVar12[0x12] = '\0';
      pcVar12[0x13] = '\0';
      pcVar12[0x14] = '\0';
      pcVar12[0x15] = '\0';
      pcVar12[0x16] = '\0';
      pcVar12[0x17] = '\0';
      *(undefined **)(pcVar12 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      pcVar12[0x20] = '6';
      pcVar12[0x21] = '\0';
      pcVar12[0x22] = '\0';
      pcVar12[0x23] = '\0';
      pcVar12[0x24] = '\0';
      pcVar12[0x25] = '\0';
      pcVar12[0x26] = '\0';
      pcVar12[0x27] = -0x30;
      pcVar12[0x28] = '\0';
      pcVar12[0x29] = 'I';
      pcVar12[0x2a] = -0x27;
      pcVar12[0x2b] = '\0';
      pcVar12[0x2c] = '\x01';
      pcVar12[0x2d] = '\0';
      pcVar12[0x2e] = '\0';
      pcVar12[0x2f] = -0x80;
      SVar24.bridgeObject = (void *)0x20;
      SVar24.str = pcVar12;
      separator.bridgeObject = (void *)0xa;
      separator.str = (char *)0xe100000000000000;
      Swift::_print(SVar24,separator);
      _swift_release(pcVar12);
      return;
    }
    if (param_1 == (char *)0x1ad) goto LAB_100162f68;
    if (param_1 == (char *)0x191) {
      lVar16 = *(long *)(unaff_x20 + 0x28);
      pcVar12 = (char *)0x0;
      pvVar13 = (void *)0x0;
      _swift_beginAccess(lVar16 + PostHogConfig::pushIdentityProvider,&local_70);
      if ((*(long *)(lVar16 + lVar9) != 0) && (((ulong)param_4 & 1) == 0)) {
        IVar15 = *(ID *)(unaff_x20 + 0x60);
        objc_stub::lock(IVar15);
        puVar1 = (undefined8 *)
                 (unaff_x20 + _TtC7PostHog30PostHogPushSubscriptionHandler::cachedIdentityToken);
        uVar3 = *puVar1;
        uVar6 = puVar1[1];
        uVar4 = puVar1[2];
        uVar7 = puVar1[3];
        uVar5 = puVar1[4];
        uVar8 = puVar1[5];
        puVar1[1] = 0;
        *puVar1 = 0;
        puVar1[3] = 0;
        puVar1[2] = 0;
        puVar1[5] = 0;
        puVar1[4] = 0;
        FUN_1001553c4(uVar3,uVar6,uVar4,uVar7,uVar5,uVar8);
        objc_stub::unlock(IVar15);
        if (DAT_101057340 == '\x01') {
          pcVar12 = &DAT_100fae660;
          FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
          _swift_allocObject();
          pcVar12[0x18] = '\x02';
          pcVar12[0x19] = '\0';
          pcVar12[0x1a] = '\0';
          pcVar12[0x1b] = '\0';
          pcVar12[0x1c] = '\0';
          pcVar12[0x1d] = '\0';
          pcVar12[0x1e] = '\0';
          pcVar12[0x1f] = '\0';
          pcVar12[0x10] = '\x01';
          pcVar12[0x11] = '\0';
          pcVar12[0x12] = '\0';
          pcVar12[0x13] = '\0';
          pcVar12[0x14] = '\0';
          pcVar12[0x15] = '\0';
          pcVar12[0x16] = '\0';
          pcVar12[0x17] = '\0';
          *(undefined **)(pcVar12 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
          pcVar12[0x20] = 'T';
          pcVar12[0x21] = '\0';
          pcVar12[0x22] = '\0';
          pcVar12[0x23] = '\0';
          pcVar12[0x24] = '\0';
          pcVar12[0x25] = '\0';
          pcVar12[0x26] = '\0';
          pcVar12[0x27] = -0x30;
          pcVar12[0x28] = -0x60;
          pcVar12[0x29] = 'H';
          pcVar12[0x2a] = -0x27;
          pcVar12[0x2b] = '\0';
          pcVar12[0x2c] = '\x01';
          pcVar12[0x2d] = '\0';
          pcVar12[0x2e] = '\0';
          pcVar12[0x2f] = -0x80;
          SVar22.bridgeObject = (void *)0x20;
          SVar22.str = pcVar12;
          separator_01.bridgeObject = (void *)0xa;
          separator_01.str = (char *)0xe100000000000000;
          Swift::_print(SVar22,separator_01);
          _swift_release(pcVar12);
        }
        FUN_10015f710(param_3,1);
        return;
      }
    }
    else {
      pcVar12 = param_3;
      pvVar13 = param_4;
      if (param_1 + -500 < (char *)0x64) goto LAB_100162f68;
    }
    IVar15 = *(ID *)(unaff_x20 + _TtC7PostHog30PostHogPushSubscriptionHandler::recordLock);
    objc_stub::lock(IVar15);
    FUN_100161220(param_3);
    objc_stub::unlock(IVar15);
    local_50 = (char *)0x0;
    local_48 = (void *)0xe000000000000000;
    Swift::_StringGuts::grow(0x3b,extraout_x1);
    SVar23.bridgeObject = (void *)0x8000000100d94830;
    SVar23.str = (char *)0xd00000000000001f;
    SVar31.bridgeObject = pvVar13;
    SVar31.str = pcVar12;
    Swift::String::append(SVar23,SVar31);
    local_58 = param_1;
    SVar24 = Swift::CustomStringConvertible::get_description();
    SVar32.bridgeObject = pvVar13;
    SVar32.str = pcVar12;
    Swift::String::append(SVar24,SVar32);
    _swift_bridgeObjectRelease(SVar24.bridgeObject);
    SVar25.bridgeObject = (void *)0x8000000100d94880;
    SVar25.str = (char *)0xd00000000000001a;
    SVar33.bridgeObject = pvVar13;
    SVar33.str = pcVar12;
    Swift::String::append(SVar25,SVar33);
    pvVar14 = local_48;
    pcVar12 = local_50;
    if (DAT_101057340 != '\x01') goto LAB_10016318c;
    pcVar10 = &DAT_100fae660;
    FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
    pcVar11 = (char *)0x7;
    _swift_allocObject();
    pcVar10[0x18] = '\x02';
    pcVar10[0x19] = '\0';
    pcVar10[0x1a] = '\0';
    pcVar10[0x1b] = '\0';
    pcVar10[0x1c] = '\0';
    pcVar10[0x1d] = '\0';
    pcVar10[0x1e] = '\0';
    pcVar10[0x1f] = '\0';
    pcVar10[0x10] = '\x01';
    pcVar10[0x11] = '\0';
    pcVar10[0x12] = '\0';
    pcVar10[0x13] = '\0';
    pcVar10[0x14] = '\0';
    pcVar10[0x15] = '\0';
    pcVar10[0x16] = '\0';
    pcVar10[0x17] = '\0';
    local_50 = (char *)0x676f4874736f505b;
    local_48 = (void *)0xea0000000000205d;
    SVar26.bridgeObject = pvVar14;
    SVar26.str = pcVar12;
    SVar34.bridgeObject = pvVar13;
    SVar34.str = pcVar11;
    Swift::String::append(SVar26,SVar34);
    pcVar12 = local_50;
    pvVar13 = local_48;
  }
  *(undefined **)(pcVar10 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
  *(char **)(pcVar10 + 0x20) = pcVar12;
  *(void **)(pcVar10 + 0x28) = pvVar13;
  SVar21.bridgeObject = (void *)0x20;
  SVar21.str = pcVar10;
  separator_00.bridgeObject = (void *)0xa;
  separator_00.str = (char *)0xe100000000000000;
  Swift::_print(SVar21,separator_00);
  _swift_release(pcVar10);
LAB_10016318c:
  _swift_bridgeObjectRelease(pvVar14);
  return;
}



/* Address: 0x100163400 | FUN_100163400 */

void FUN_100163400(long param_1,char param_2,char *param_3,void *param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  void *pvVar10;
  code *pcVar11;
  Date DVar12;
  undefined *puVar13;
  char *pcVar14;
  Date DVar15;
  _StringGuts extraout_x1;
  undefined1 *puVar16;
  undefined *extraout_x1_00;
  _StringGuts _Var17;
  _StringGuts extraout_x1_01;
  char *pcVar18;
  char *pcVar19;
  long extraout_x8;
  long extraout_x8_00;
  long lVar20;
  long unaff_x20;
  ID IVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  double dVar26;
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
  String separator;
  String separator_00;
  String separator_01;
  undefined *local_e0;
  undefined8 local_d8;
  char *local_d0;
  uint local_c4;
  undefined1 auStack_c0 [24];
  long local_a8;
  char *local_a0;
  void *local_98;
  undefined1 auStack_88 [24];
  
  local_c4 = (uint)param_4;
  local_d8 = param_5;
  local_d0 = param_3;
  DVar12 = Foundation::Date::typeMetadataAccessor();
  lVar25 = *(long *)(DVar12.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar25 + 0x40));
  lVar24 = (long)&local_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar13 = &DAT_100faf508;
  FUN_1000f7830(&DAT_100faf508,&DAT_100c2e2e0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = PostHogConfig::pushIdentityProvider;
  lVar23 = lVar24 - extraout_x8_00;
  if (param_2 != '\x01') {
    if (param_1 == 0x191) {
      lVar20 = *(long *)(unaff_x20 + 0x28);
      param_3 = (char *)0x0;
      param_4 = (void *)0x0;
      local_e0 = DVar12.unknown;
      _swift_beginAccess(lVar20 + PostHogConfig::pushIdentityProvider,auStack_c0);
      DVar12.unknown = local_e0;
      if (*(long *)(lVar20 + lVar1) != 0) {
        IVar21 = *(ID *)(unaff_x20 + 0x60);
        objc_stub::lock(IVar21);
        if ((*(byte *)(unaff_x20 + _TtC7PostHog30PostHogPushSubscriptionHandler::didAuthRetry) & 1)
            == 0) {
          *(undefined1 *)(unaff_x20 + _TtC7PostHog30PostHogPushSubscriptionHandler::didAuthRetry) =
               1;
          puVar2 = (undefined8 *)
                   (unaff_x20 + _TtC7PostHog30PostHogPushSubscriptionHandler::cachedIdentityToken);
          uVar3 = *puVar2;
          uVar6 = puVar2[1];
          uVar4 = puVar2[2];
          uVar7 = puVar2[3];
          uVar5 = puVar2[4];
          uVar8 = puVar2[5];
          puVar2[1] = 0;
          *puVar2 = 0;
          puVar2[3] = 0;
          puVar2[2] = 0;
          puVar2[5] = 0;
          puVar2[4] = 0;
          FUN_1001553c4(uVar3,uVar6,uVar4,uVar7,uVar5,uVar8);
          objc_stub::unlock(IVar21);
          if ((DAT_101057340 & 1) != 0) {
            pcVar14 = &DAT_100fae660;
            FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
            _swift_allocObject();
            pcVar14[0x18] = '\x02';
            pcVar14[0x19] = '\0';
            pcVar14[0x1a] = '\0';
            pcVar14[0x1b] = '\0';
            pcVar14[0x1c] = '\0';
            pcVar14[0x1d] = '\0';
            pcVar14[0x1e] = '\0';
            pcVar14[0x1f] = '\0';
            pcVar14[0x10] = '\x01';
            pcVar14[0x11] = '\0';
            pcVar14[0x12] = '\0';
            pcVar14[0x13] = '\0';
            pcVar14[0x14] = '\0';
            pcVar14[0x15] = '\0';
            pcVar14[0x16] = '\0';
            pcVar14[0x17] = '\0';
            *(undefined **)(pcVar14 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
            pcVar14[0x20] = 'V';
            pcVar14[0x21] = '\0';
            pcVar14[0x22] = '\0';
            pcVar14[0x23] = '\0';
            pcVar14[0x24] = '\0';
            pcVar14[0x25] = '\0';
            pcVar14[0x26] = '\0';
            pcVar14[0x27] = -0x30;
            pcVar14[0x28] = -0x80;
            pcVar14[0x29] = 'F';
            pcVar14[0x2a] = -0x27;
            pcVar14[0x2b] = '\0';
            pcVar14[0x2c] = '\x01';
            pcVar14[0x2d] = '\0';
            pcVar14[0x2e] = '\0';
            pcVar14[0x2f] = -0x80;
            SVar28.bridgeObject = (void *)0x20;
            SVar28.str = pcVar14;
            separator_00.bridgeObject = (void *)0xa;
            separator_00.str = (char *)0xe100000000000000;
            Swift::_print(SVar28,separator_00);
            _swift_release(pcVar14);
          }
          FUN_10015f418(local_d8,param_6,param_7,param_8);
          return;
        }
        objc_stub::unlock(IVar21);
      }
    }
    if ((param_1 != 0x1ad) && (99 < param_1 - 500U)) {
      IVar21 = *(ID *)(unaff_x20 + 0x60);
      objc_stub::lock(IVar21);
      *(undefined1 *)(unaff_x20 + _TtC7PostHog30PostHogPushSubscriptionHandler::halted) = 1;
      objc_stub::unlock(IVar21);
      lVar1 = PostHogConfig::pushIdentityProvider;
      _Var17.unknown = extraout_x1_00;
      if (param_1 == 0x191) {
        lVar23 = *(long *)(unaff_x20 + 0x28);
        _Var17.unknown = auStack_88;
        param_3 = (char *)0x0;
        param_4 = (void *)0x0;
        _swift_beginAccess(lVar23 + PostHogConfig::pushIdentityProvider);
        if (*(long *)(lVar23 + lVar1) == 0) {
          if (DAT_101057340 != 1) {
            return;
          }
          pcVar14 = &DAT_100fae660;
          FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
          _swift_allocObject();
          pcVar14[0x18] = '\x02';
          pcVar14[0x19] = '\0';
          pcVar14[0x1a] = '\0';
          pcVar14[0x1b] = '\0';
          pcVar14[0x1c] = '\0';
          pcVar14[0x1d] = '\0';
          pcVar14[0x1e] = '\0';
          pcVar14[0x1f] = '\0';
          pcVar14[0x10] = '\x01';
          pcVar14[0x11] = '\0';
          pcVar14[0x12] = '\0';
          pcVar14[0x13] = '\0';
          pcVar14[0x14] = '\0';
          pcVar14[0x15] = '\0';
          pcVar14[0x16] = '\0';
          pcVar14[0x17] = '\0';
          *(undefined **)(pcVar14 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
          pcVar14[0x20] = -0x6a;
          pcVar14[0x21] = '\0';
          pcVar14[0x22] = '\0';
          pcVar14[0x23] = '\0';
          pcVar14[0x24] = '\0';
          pcVar14[0x25] = '\0';
          pcVar14[0x26] = '\0';
          pcVar14[0x27] = '\x10';
          pcVar14[0x28] = -0x20;
          pcVar14[0x29] = 'E';
          pcVar14[0x2a] = -0x27;
          pcVar14[0x2b] = '\0';
          pcVar14[0x2c] = '\x01';
          pcVar14[0x2d] = '\0';
          pcVar14[0x2e] = '\0';
          pcVar14[0x2f] = -0x80;
          SVar36.bridgeObject = (void *)0x20;
          SVar36.str = pcVar14;
          separator_01.bridgeObject = (void *)0xa;
          separator_01.str = (char *)0xe100000000000000;
          Swift::_print(SVar36,separator_01);
          _swift_release(pcVar14);
          return;
        }
      }
      local_a0 = (char *)0x0;
      local_98 = (void *)0xe000000000000000;
      Swift::_StringGuts::grow(0x47,_Var17);
      SVar29.bridgeObject = (void *)0x8000000100d94580;
      SVar29.str = (char *)0xd000000000000023;
      SVar39.bridgeObject = param_4;
      SVar39.str = param_3;
      Swift::String::append(SVar29,SVar39);
      local_a8 = param_1;
      SVar28 = Swift::CustomStringConvertible::get_description();
      SVar40.bridgeObject = param_4;
      SVar40.str = param_3;
      Swift::String::append(SVar28,SVar40);
      _swift_bridgeObjectRelease(SVar28.bridgeObject);
      puVar16 = (undefined1 *)0x8000000100d945b0;
      pcVar14 = (char *)0xd000000000000022;
      goto LAB_1001638dc;
    }
  }
  IVar21 = *(ID *)(unaff_x20 + 0x60);
  objc_stub::lock(IVar21);
  lVar20 = *(long *)(unaff_x20 + 0x68);
  lVar1 = lVar20 + 1;
  if (SCARRY8(lVar20,1)) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x100163b10);
    (*pcVar11)();
  }
  *(long *)(unaff_x20 + 0x68) = lVar1;
  objc_stub::unlock(IVar21);
  lVar9 = PostHogConfig::maxRetries;
  lVar22 = *(long *)(unaff_x20 + 0x28);
  param_3 = (char *)0x0;
  param_4 = (void *)0x0;
  _swift_beginAccess(lVar22 + PostHogConfig::maxRetries,auStack_88);
  if (*(long *)(lVar22 + lVar9) < lVar1) {
    objc_stub::lock(IVar21);
    *(undefined1 *)(unaff_x20 + _TtC7PostHog30PostHogPushSubscriptionHandler::halted) = 1;
    objc_stub::unlock(IVar21);
    local_a0 = (char *)0x0;
    local_98 = (void *)0xe000000000000000;
    Swift::_StringGuts::grow(0x4d,extraout_x1);
    SVar27.bridgeObject = (void *)0x8000000100d94520;
    SVar27.str = (char *)0xd000000000000020;
    SVar37.bridgeObject = param_4;
    SVar37.str = param_3;
    Swift::String::append(SVar27,SVar37);
    local_a8 = *(long *)(lVar22 + lVar9);
    SVar28 = Swift::CustomStringConvertible::get_description();
    SVar38.bridgeObject = param_4;
    SVar38.str = param_3;
    Swift::String::append(SVar28,SVar38);
    _swift_bridgeObjectRelease(SVar28.bridgeObject);
    pcVar14 = (char *)0xd00000000000002b;
    puVar16 = (undefined1 *)0x8000000100d94550;
  }
  else {
    pcVar14 = local_d0;
    if ((local_c4 & 0xff) == 1) {
      if (SBORROW8(lVar1,1)) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x100163b14);
        (*pcVar11)();
      }
      dVar26 = (double)lVar20;
      _exp2();
      pcVar14 = (char *)0x403e000000000000;
      if (dVar26 * 5.0 <= 30.0) {
        pcVar14 = (char *)(dVar26 * 5.0);
      }
    }
    objc_stub::lock(IVar21);
    DVar15 = Foundation::Date::init();
    Foundation::Date::addingTimeInterval((double)pcVar14,DVar15);
    (**(code **)(lVar25 + 8))(lVar24,DVar12.unknown);
    (**(code **)(lVar25 + 0x38))(lVar23,0,1,DVar12.unknown);
    lVar24 = _TtC7PostHog30PostHogPushSubscriptionHandler::pausedUntil;
    pcVar18 = (char *)0x21;
    param_4 = (void *)0x0;
    _swift_beginAccess(unaff_x20 + _TtC7PostHog30PostHogPushSubscriptionHandler::pausedUntil,
                       &local_a0);
    FUN_100155a94(lVar23,unaff_x20 + lVar24);
    _swift_endAccess(&local_a0);
    objc_stub::unlock(IVar21);
    local_a0 = (char *)0x0;
    local_98 = (void *)0xe000000000000000;
    Swift::_StringGuts::grow(0x3a,extraout_x1_01);
    SVar30.bridgeObject = (void *)0x8000000100d944f0;
    SVar30.str = (char *)0xd000000000000022;
    SVar41.bridgeObject = param_4;
    SVar41.str = pcVar18;
    Swift::String::append(SVar30,SVar41);
    local_a8 = lVar1;
    SVar28 = Swift::CustomStringConvertible::get_description();
    SVar42.bridgeObject = param_4;
    SVar42.str = pcVar18;
    Swift::String::append(SVar28,SVar42);
    _swift_bridgeObjectRelease(SVar28.bridgeObject);
    SVar31.bridgeObject = (void *)0xe100000000000000;
    SVar31.str = (char *)0x2f;
    SVar43.bridgeObject = param_4;
    SVar43.str = pcVar18;
    Swift::String::append(SVar31,SVar43);
    local_a8 = *(long *)(lVar22 + lVar9);
    SVar28 = Swift::CustomStringConvertible::get_description();
    SVar44.bridgeObject = param_4;
    SVar44.str = pcVar18;
    Swift::String::append(SVar28,SVar44);
    _swift_bridgeObjectRelease(SVar28.bridgeObject);
    SVar32.bridgeObject = (void *)0xef206e6920676e69;
    SVar32.str = (char *)0x7972746552202e29;
    SVar45.bridgeObject = param_4;
    SVar45.str = pcVar18;
    Swift::String::append(SVar32,SVar45);
    param_3 = 
    PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
    ;
    double::_write((undefined *)&local_a0,(double)pcVar14);
    pcVar14 = (char *)0x2e73;
    puVar16 = &SUB_e200000000000000;
  }
LAB_1001638dc:
  SVar33.bridgeObject = puVar16;
  SVar33.str = pcVar14;
  SVar46.bridgeObject = param_4;
  SVar46.str = param_3;
  Swift::String::append(SVar33,SVar46);
  pvVar10 = local_98;
  pcVar14 = local_a0;
  if (DAT_101057340 == 1) {
    pcVar18 = &DAT_100fae660;
    FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
    pcVar19 = (char *)0x7;
    _swift_allocObject();
    pcVar18[0x18] = '\x02';
    pcVar18[0x19] = '\0';
    pcVar18[0x1a] = '\0';
    pcVar18[0x1b] = '\0';
    pcVar18[0x1c] = '\0';
    pcVar18[0x1d] = '\0';
    pcVar18[0x1e] = '\0';
    pcVar18[0x1f] = '\0';
    pcVar18[0x10] = '\x01';
    pcVar18[0x11] = '\0';
    pcVar18[0x12] = '\0';
    pcVar18[0x13] = '\0';
    pcVar18[0x14] = '\0';
    pcVar18[0x15] = '\0';
    pcVar18[0x16] = '\0';
    pcVar18[0x17] = '\0';
    local_a0 = (char *)0x676f4874736f505b;
    local_98 = (void *)0xea0000000000205d;
    SVar34.bridgeObject = pvVar10;
    SVar34.str = pcVar14;
    SVar47.bridgeObject = param_4;
    SVar47.str = pcVar19;
    Swift::String::append(SVar34,SVar47);
    *(undefined **)(pcVar18 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
    *(char **)(pcVar18 + 0x20) = local_a0;
    *(void **)(pcVar18 + 0x28) = local_98;
    SVar35.bridgeObject = (void *)0x20;
    SVar35.str = pcVar18;
    separator.bridgeObject = (void *)0xa;
    separator.str = (char *)0xe100000000000000;
    Swift::_print(SVar35,separator);
    _swift_release(pcVar18);
  }
  _swift_bridgeObjectRelease(pvVar10);
  return;
}



/* Address: 0x100163b14 | FUN_100163b14 */

void FUN_100163b14(void)

{
  FUN_100163c48(0x49);
  return;
}



/* Address: 0x100163b1c | FUN_100163b1c */

void FUN_100163b1c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10015f8a0(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),unaff_x20 + 0x18,
                *(undefined1 *)(unaff_x20 + 0x48));
  return;
}



/* Address: 0x100163b2c | thunk_FUN_100163b30 */

void thunk_FUN_100163b30(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_deallocObject();
  return;
}



/* Address: 0x100163b30 | FUN_100163b30 */

void FUN_100163b30(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_deallocObject();
  return;
}



/* Address: 0x100163b64 | FUN_100163b64 */

void FUN_100163b64(void)

{
  long unaff_x20;
  
  FUN_100160cbc(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Address: 0x100163b74 | FUN_100163b74 */

void FUN_100163b74(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x58));
  _swift_deallocObject();
  return;
}



/* Address: 0x100163bc0 | FUN_100163bc0 */

void FUN_100163bc0(void)

{
  long unaff_x20;
  
  FUN_100160ecc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Address: 0x100163bf4 | FUN_100163bf4 */

void FUN_100163bf4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_deallocObject();
  return;
}



/* Address: 0x100163c38 | FUN_100163c38 */

void FUN_100163c38(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10015fdbc(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),unaff_x20 + 0x18,
                *(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Address: 0x100163c48 | FUN_100163c48 */

void FUN_100163c48(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_deallocObject();
  return;
}



/* Address: 0x100163c90 | FUN_100163c90 */

void FUN_100163c90(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10015fe2c(param_1,*(undefined8 *)(unaff_x20 + 0x10),unaff_x20 + 0x18,
                *(undefined1 *)(unaff_x20 + 0x48));
  return;
}



/* Address: 0x100163ca0 | FUN_100163ca0 */

void FUN_100163ca0(undefined8 param_1,long param_2)

{
  if (param_2 == 1) {
    return;
  }
  _swift_bridgeObjectRetain(param_2);
  return;
}



/* Address: 0x100163cb4 | FUN_100163cb4 */

void FUN_100163cb4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x100163ce0 | FUN_100163ce0 */

void FUN_100163ce0(void)

{
  long unaff_x20;
  
  FUN_10015ed68(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100163cec | thunk_FUN_10000c210 */

void thunk_FUN_10000c210(void)

{
  FUN_10000c210();
  return;
}



/* Address: 0x100163cf0 | thunk_FUN_10000c240 */

void thunk_FUN_10000c240(void)

{
  FUN_10000c240();
  return;
}



/* Address: 0x100163cf4 | thunk_FUN_10000c294 */

void thunk_FUN_10000c294(void)

{
  FUN_10000c294();
  return;
}



/* Address: 0x100163cf8 | thunk_FUN_10000c334 */

void thunk_FUN_10000c334(void)

{
  FUN_10000c334();
  return;
}



/* Address: 0x100163cfc | thunk_FUN_10000c388 */

void thunk_FUN_10000c388(void)

{
  FUN_10000c388();
  return;
}



/* Address: 0x100163d00 | thunk_FUN_10000c3d0 */

void thunk_FUN_10000c3d0(void)

{
  FUN_10000c3d0();
  return;
}



/* Address: 0x100163d04 | FUN_100163d04 */

undefined1  [16] FUN_100163d04(void)

{
  return ZEXT816(0x100eb94f0);
}



/* Address: 0x100163d14 | FUN_100163d14 */

undefined1  [16] FUN_100163d14(void)

{
  return ZEXT816(0x100eb9578);
}



/* Address: 0x100163d24 | thunk_FUN_100162d54 */

void thunk_FUN_100162d54(void)

{
  FUN_100162d54();
  return;
}



/* Address: 0x100163d28 | thunk_FUN_100162d54 */

void thunk_FUN_100162d54(void)

{
  FUN_100162d54();
  return;
}



/* Address: 0x100163d2c | thunk_FUN_100162d54 */

void thunk_FUN_100162d54(void)

{
  FUN_100162d54();
  return;
}



/* Address: 0x100163d30 | thunk_FUN_100162d54 */

void thunk_FUN_100162d54(void)

{
  FUN_100162d54();
  return;
}



/* Address: 0x100163d34 | thunk_FUN_100162d54 */

void thunk_FUN_100162d54(void)

{
  FUN_100162d54();
  return;
}



/* Address: 0x100163d38 | thunk_FUN_100162d68 */

void thunk_FUN_100162d68(void)

{
  FUN_100162d68();
  return;
}



/* Address: 0x100163d3c | thunk_FUN_100162d68 */

void thunk_FUN_100162d68(void)

{
  FUN_100162d68();
  return;
}



/* Address: 0x100163d40 | thunk_FUN_100162d68 */

void thunk_FUN_100162d68(void)

{
  FUN_100162d68();
  return;
}



/* Address: 0x100163d44 | thunk_FUN_100162d68 */

void thunk_FUN_100162d68(void)

{
  FUN_100162d68();
  return;
}



/* Address: 0x100163d48 | thunk_FUN_100162d68 */

void thunk_FUN_100162d68(void)

{
  FUN_100162d68();
  return;
}



/* Address: 0x100163d4c | thunk_FUN_10000c3d0 */

void thunk_FUN_10000c3d0(void)

{
  FUN_10000c3d0();
  return;
}



/* Address: 0x100163d50 | thunk_FUN_10000c210 */

void thunk_FUN_10000c210(void)

{
  FUN_10000c210();
  return;
}



/* Address: 0x100163d54 | thunk_FUN_10000c240 */

void thunk_FUN_10000c240(void)

{
  FUN_10000c240();
  return;
}



/* Address: 0x100163d58 | thunk_FUN_10000c294 */

void thunk_FUN_10000c294(void)

{
  FUN_10000c294();
  return;
}



/* Address: 0x100163d5c | thunk_FUN_10000c334 */

void thunk_FUN_10000c334(void)

{
  FUN_10000c334();
  return;
}



/* Address: 0x100163d60 | thunk_FUN_10000c388 */

void thunk_FUN_10000c388(void)

{
  FUN_10000c388();
  return;
}



/* Address: 0x100163d64 | thunk_FUN_100162d08 */

void thunk_FUN_100162d08(void)

{
  FUN_100162d08();
  return;
}



/* Address: 0x100163d68 | thunk_FUN_100163b30 */

void thunk_FUN_100163b30(void)

{
  thunk_FUN_100163b30();
  return;
}



/* Address: 0x100163d6c | thunk_FUN_100163b64 */

void thunk_FUN_100163b64(void)

{
  long unaff_x20;
  
  FUN_100160cbc(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Address: 0x100163d70 | thunk_FUN_100163b74 */

void thunk_FUN_100163b74(void)

{
  thunk_FUN_100163b74();
  return;
}



/* Address: 0x100163d74 | thunk_FUN_100163bc0 */

void thunk_FUN_100163bc0(void)

{
  long unaff_x20;
  
  FUN_100160ecc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Address: 0x100163d78 | thunk_FUN_100163bf4 */

void thunk_FUN_100163bf4(void)

{
  thunk_FUN_100163bf4();
  return;
}



/* Address: 0x100163d7c | thunk_FUN_100163b14 */

void thunk_FUN_100163b14(void)

{
  FUN_100163b14();
  return;
}



/* Address: 0x100163d80 | FUN_100163d80 */

undefined * FUN_100163d80(long param_1,ulong param_2)

{
  ulong uVar1;
  __DataStorage _Var2;
  uint uVar3;
  code *pcVar4;
  __DataStorage *p_Var5;
  long lVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  int iVar10;
  undefined *puVar11;
  long lVar12;
  uint uVar13;
  String SVar14;
  __DataStorage local_7e [4];
  undefined1 local_7a;
  undefined1 local_79;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined1 local_75;
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_72;
  undefined1 local_71;
  undefined *local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar3 = (uint)(param_2 >> 0x20);
  uVar13 = uVar3 >> 0x1e;
  iVar10 = (int)param_1;
  puVar11 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar3 >> 0x1e < 2) {
    if (uVar13 == 0) {
      uVar9 = param_2 >> 0x30 & 0xff;
    }
    else {
      iVar8 = (int)((ulong)param_1 >> 0x20);
      if (SBORROW4(iVar8,iVar10)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1001640b4);
        (*pcVar4)();
      }
      uVar9 = (ulong)(iVar8 - iVar10);
    }
  }
  else {
    if (uVar13 != 2) goto LAB_100164054;
    uVar9 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
    if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100163df0);
      (*pcVar4)();
    }
  }
  if (uVar9 != 0) {
    local_70 = PTR___swiftEmptyArrayStorage_100eae0d8;
    p_Var5 = (__DataStorage *)0x0;
    FUN_10010fa9c(0,uVar9 & ((long)uVar9 >> 0x3f ^ 0xffffffffffffffffU),0);
    if (uVar3 >> 0x1e == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = (long)iVar10;
      if (uVar13 == 2) {
        lVar12 = *(long *)(param_1 + 0x10);
      }
    }
    if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1001640b0);
      (*pcVar4)();
    }
    do {
      puVar11 = local_70;
      if (uVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100164094);
        (*pcVar4)();
      }
      if (uVar13 == 2) {
        if (lVar12 < *(long *)(param_1 + 0x10)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100164098);
          (*pcVar4)();
        }
        if (*(long *)(param_1 + 0x18) <= lVar12) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1001640a4);
          (*pcVar4)();
        }
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var5);
        if (p_Var5 == (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1001640bc);
          (*pcVar4)();
        }
        lVar6 = Foundation::__DataStorage::get__offset
                          ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var5);
        if (SBORROW8(lVar12,lVar6)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1001640ac);
          (*pcVar4)();
        }
LAB_100163f14:
        _Var2 = p_Var5[lVar12 - lVar6];
      }
      else {
        if (uVar3 >> 0x1e == 1) {
          if ((lVar12 < iVar10) || (param_1 >> 0x20 <= lVar12)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1001640a0);
            (*pcVar4)();
          }
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var5);
          if (p_Var5 == (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1001640b8);
            (*pcVar4)();
          }
          lVar6 = Foundation::__DataStorage::get__offset
                            ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var5);
          if (SBORROW8(lVar12,lVar6)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1001640a8);
            (*pcVar4)();
          }
          goto LAB_100163f14;
        }
        if ((long)(param_2 >> 0x30 & 0xff) <= lVar12) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10016409c);
          (*pcVar4)();
        }
        local_7e[0] = SUB81(param_1,0);
        local_7e[1] = (__DataStorage)(char)((ulong)param_1 >> 8);
        local_7e[2] = (__DataStorage)(char)((ulong)param_1 >> 0x10);
        local_7e[3] = (__DataStorage)(char)((ulong)param_1 >> 0x18);
        local_7a = (char)((ulong)param_1 >> 0x20);
        local_79 = (char)((ulong)param_1 >> 0x28);
        local_78 = (char)((ulong)param_1 >> 0x30);
        local_77 = (char)((ulong)param_1 >> 0x38);
        local_76 = (char)param_2;
        local_75 = (char)(param_2 >> 8);
        local_74 = (char)(param_2 >> 0x10);
        local_73 = (char)(param_2 >> 0x18);
        local_72 = (char)(param_2 >> 0x20);
        local_71 = (char)(param_2 >> 0x28);
        _Var2 = local_7e[lVar12];
      }
      puVar7 = &DAT_100fae860;
      FUN_1000f7830(&DAT_100fae860,&DAT_100c2e1c0);
      _swift_allocObject();
      *(undefined8 *)(puVar7 + 0x18) = 2;
      *(undefined8 *)(puVar7 + 0x10) = 1;
      *(undefined **)(puVar7 + 0x38) = PTR___type_metadata_for_Swift_UInt8_100eadcd0;
      *(undefined **)(puVar7 + 0x40) =
           PTR___protocol_witness_table_for_Swift_UInt8___Swift_CVarArg_in_Swift_100eadd00;
      *(__DataStorage *)(puVar7 + 0x20) = _Var2;
      SVar14 = (extension_Foundation)::Swift::String::_init();
      p_Var5 = (__DataStorage *)SVar14.str;
      local_70 = puVar11;
      uVar1 = *(ulong *)(puVar11 + 0x10);
      if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar1) {
        FUN_10010fa9c(1 < *(ulong *)(puVar11 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(local_70 + 0x10) = uVar1 + 1;
      *(String *)(local_70 + uVar1 * 0x10 + 0x20) = SVar14;
      lVar12 = lVar12 + 1;
      uVar9 = uVar9 - 1;
      puVar11 = local_70;
    } while (uVar9 != 0);
  }
LAB_100164054:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return puVar11;
}



/* Address: 0x1001640c0 | FUN_1001640c0 */

void FUN_1001640c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001001640c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))();
  return;
}



/* Address: 0x1001640c8 | FUN_1001640c8 */

void FUN_1001640c8(undefined8 param_1)

{
  FUN_100164cc0();
  _swift_allocObject();
  FUN_100164100();
  DAT_101057318 = param_1;
  return;
}



/* Address: 0x100164100 | FUN_100164100 */

void FUN_100164100(void)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  puVar1 = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar2 = objc_stub::init((ID)puVar1);
  puVar1 = PTR___swiftEmptySetSingleton_100eae0e8;
  *(ID *)(unaff_x20 + 0x28) = IVar2;
  *(undefined **)(unaff_x20 + 0x30) = puVar1;
  puVar1 = &DAT_100eb95d0;
  _swift_allocObject(&DAT_100eb95d0,0x18,7);
  _swift_weakInit(puVar1 + 0x10,0);
  puVar3 = &DAT_100fb1908;
  FUN_1000f7830(&DAT_100fb1908,&DAT_100c2f500);
  _swift_allocObject();
  _swift_retain(puVar1);
  puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1000f853c();
  *(undefined **)(puVar3 + 0x10) = puVar4;
  puVar4 = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar2 = objc_stub::init((ID)puVar4);
  *(ID *)(puVar3 + 0x18) = IVar2;
  *(code **)(puVar3 + 0x20) = FUN_100165494;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  *(undefined **)(unaff_x20 + 0x10) = puVar3;
  puVar3 = &DAT_100fb1910;
  FUN_1000f7830(&DAT_100fb1910,&DAT_100c2f800);
  _swift_allocObject();
  _swift_retain(puVar1);
  FUN_1000f8390();
  *(undefined **)(puVar3 + 0x10) = puVar5;
  puVar5 = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar2 = objc_stub::init((ID)puVar5);
  *(ID *)(puVar3 + 0x18) = IVar2;
  *(code **)(puVar3 + 0x20) = FUN_100166a68;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  *(undefined **)(unaff_x20 + 0x18) = puVar3;
  _swift_beginAccess(puVar1 + 0x10,auStack_58,1,0);
  _swift_weakAssign(puVar1 + 0x10);
  _swift_release(puVar1);
  return;
}



/* Address: 0x100164258 | FUN_100164258 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100164258(long param_1,long param_2)

{
  long lVar1;
  ID IVar2;
  ID IVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ID self;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    if (param_1 == 0) {
      lVar1 = 0;
      FUN_10000ec2c(0,&DAT_100fb1960,&PTR__OBJC_CLASS___UNUserNotificationCenter_100f8d8f8);
      if (DAT_100fb1968 != -1) {
        _swift_once(&DAT_100fb1968,FUN_1001647cc);
      }
      if (DAT_100fb1978 != -1) {
        _swift_once(&DAT_100fb1978,FUN_1001647e0);
      }
      uVar5 = DAT_100fb1980;
      _swift_getObjCClassFromMetadata();
      lVar6 = lVar1;
      _class_getInstanceMethod();
      if ((lVar6 != 0) && (_class_getInstanceMethod(lVar1,uVar5), lVar1 != 0)) {
        _method_exchangeImplementations(lVar6,lVar1);
      }
    }
    else if (param_1 == 1) {
      lVar1 = 0;
      FUN_10000ec2c(0,&DAT_100fb1960,&PTR__OBJC_CLASS___UNUserNotificationCenter_100f8d8f8);
      if (DAT_100fb1968 != -1) {
        _swift_once(&DAT_100fb1968,FUN_1001647cc);
      }
      if (DAT_100fb1978 != -1) {
        _swift_once(&DAT_100fb1978,FUN_1001647e0);
      }
      uVar5 = DAT_100fb1980;
      _swift_getObjCClassFromMetadata();
      lVar6 = lVar1;
      _class_getInstanceMethod();
      if ((lVar6 != 0) && (_class_getInstanceMethod(lVar1,uVar5), lVar1 != 0)) {
        _method_exchangeImplementations(lVar6,lVar1);
      }
      IVar2 = UNUserNotificationCenter::currentNotificationCenter
                        ((ID)&_OBJC_CLASS___UNUserNotificationCenter);
      IVar2 = UNUserNotificationCenter::delegate(IVar2);
      if (IVar2 != 0) {
        IVar3 = IVar2;
        _swift_getObjectType(IVar2);
        self = *(ID *)(param_2 + 0x28);
        objc_stub::lock(self);
        _swift_beginAccess(param_2 + 0x30,auStack_78,0x21,0);
        puVar4 = auStack_60;
        FUN_1001656b4(puVar4,IVar3);
        _swift_endAccess(auStack_78);
        objc_stub::unlock(self);
        if (((ulong)puVar4 & 1) != 0) {
          uVar5 = 0;
          FUN_10000ec2c(0,&DAT_100fb1938,&PTR__OBJC_CLASS___NSObject_100f8d7f0);
          FUN_10015d654(IVar3,
                        "userNotificationCenter:didReceiveNotificationResponse:withCompletionHandler:"
                        ,"ph_swizzled_userNotificationCenter:didReceive:withCompletionHandler:",
                        uVar5,"ph_noop_userNotificationCenter:didReceive:withCompletionHandler:");
        }
        _swift_release(param_2);
        _swift_unknownObjectRelease(IVar2);
        return;
      }
    }
    _swift_release();
  }
  return;
}



/* Address: 0x10016453c | FUN_10016453c */

void FUN_10016453c(long param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 == 0) {
    return;
  }
  if (param_1 == 0) {
    pcVar1 = FUN_100166a94;
    puVar2 = &DAT_100eb9610;
  }
  else {
    if (param_1 != 1) goto LAB_1001645ac;
    pcVar1 = FUN_100166a70;
    puVar2 = &DAT_100eb95e8;
  }
  FUN_1001645c4(pcVar1,puVar2);
LAB_1001645ac:
  _swift_release(param_2);
  return;
}



/* Address: 0x1001645c4 | FUN_1001645c4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001645c4(undefined8 param_1,undefined8 param_2)

{
  DispatchWorkItemFlags DVar1;
  OS_dispatch_queue *pOVar2;
  undefined *puVar3;
  void *aBlock;
  DispatchQoS DVar4;
  undefined8 *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long lVar6;
  long lVar7;
  DispatchWorkItemFlags qos;
  undefined *local_a0;
  long local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined *local_68;
  
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_98 = *(long *)(DVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_98 + 0x40));
  lVar6 = (long)&local_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_a0 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar7 = *(long *)(local_a0 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar7 + 0x40));
  qos.unknown = (undefined *)(lVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  pOVar2 = (OS_dispatch_queue *)0x0;
  FUN_10000ec2c(0,&DAT_100fae2e8,&PTR__OBJC_CLASS___OS_dispatch_queue_100f8d6e8);
  (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar2);
  puVar3 = &DAT_100eb95d0;
  _swift_allocObject(&DAT_100eb95d0,0x18,7);
  _swift_weakInit(puVar3 + 0x10);
  local_90 = PTR___NSConcreteStackBlock_100ea82a0;
  local_88 = 0x42000000;
  local_80 = FUN_100030410;
  uStack_78 = param_2;
  local_70 = param_1;
  local_68 = puVar3;
  aBlock = __Block_copy(&local_90);
  DVar4.unknown = local_68;
  _swift_release();
  DVar4 = Dispatch::DispatchQoS::get_unspecified(DVar4);
  local_90 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_10011dab0();
  puVar3 = &DAT_100fafdf8;
  FUN_1000f7830(&DAT_100fafdf8,&DAT_100c2e830);
  puVar5 = &DAT_100fafe00;
  FUN_100134584(&DAT_100fafe00,&DAT_100fafdf8,&DAT_100c2e830,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530);
  Swift::SetAlgebra::_init(lVar6,&local_90,puVar3,puVar5,DVar1.unknown,DVar4.unknown);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(aBlock);
  (**(code **)(local_98 + 8))(lVar6,DVar1.unknown);
  (**(code **)(lVar7 + 8))(qos.unknown,local_a0);
  return;
}



/* Address: 0x1001647cc | FUN_1001647cc */

void FUN_1001647cc(void)

{
  DAT_100fb1970 = "setDelegate:";
  return;
}



/* Address: 0x1001647e0 | FUN_1001647e0 */

void FUN_1001647e0(void)

{
  DAT_100fb1980 = "ph_swizzled_setDelegate:";
  return;
}



/* Address: 0x1001647f4 | FUN_1001647f4 */

void FUN_1001647f4(long param_1)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    FUN_100164848();
    _swift_release(param_1);
  }
  return;
}



/* Address: 0x100164848 | FUN_100164848 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100164848(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  ID IVar4;
  undefined8 uVar5;
  char *pcVar6;
  long unaff_x20;
  String SVar7;
  String separator;
  
  IVar3 = NSApplication::sharedApplication((ID)&_OBJC_CLASS___NSApplication);
  IVar3 = NSApplication::delegate(IVar3);
  if (IVar3 != 0) {
    IVar4 = IVar3;
    _object_getClass();
    if (IVar4 != 0) {
      _swift_getObjCClassMetadata();
      *(ID *)(unaff_x20 + 0x20) = IVar4;
      if (DAT_100fb1918 != -1) {
        _swift_once(&DAT_100fb1918,FUN_100164c34);
      }
      uVar1 = DAT_100fb1920;
      if (DAT_100fb1928 != -1) {
        _swift_once(&DAT_100fb1928,FUN_100164c48);
      }
      uVar2 = DAT_100fb1930;
      uVar5 = 0;
      FUN_10000ec2c(0,&DAT_100fb1938,&PTR__OBJC_CLASS___NSObject_100f8d7f0);
      FUN_10015d654(IVar4,uVar1,uVar2,uVar5,0);
      if (DAT_100fb1940 != -1) {
        _swift_once(&DAT_100fb1940,FUN_100164c5c);
      }
      uVar1 = DAT_100fb1948;
      if (DAT_100fb1950 != -1) {
        _swift_once(&DAT_100fb1950,FUN_100164c70);
      }
      FUN_10015d654(IVar4,uVar1,DAT_100fb1958,uVar5,0);
      _swift_unknownObjectRelease(IVar3);
      return;
    }
    _swift_unknownObjectRelease(IVar3);
  }
  if (DAT_101057340 == '\x01') {
    pcVar6 = &DAT_100fae660;
    FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
    _swift_allocObject();
    pcVar6[0x18] = '\x02';
    pcVar6[0x19] = '\0';
    pcVar6[0x1a] = '\0';
    pcVar6[0x1b] = '\0';
    pcVar6[0x1c] = '\0';
    pcVar6[0x1d] = '\0';
    pcVar6[0x1e] = '\0';
    pcVar6[0x1f] = '\0';
    pcVar6[0x10] = '\x01';
    pcVar6[0x11] = '\0';
    pcVar6[0x12] = '\0';
    pcVar6[0x13] = '\0';
    pcVar6[0x14] = '\0';
    pcVar6[0x15] = '\0';
    pcVar6[0x16] = '\0';
    pcVar6[0x17] = '\0';
    *(undefined **)(pcVar6 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
    pcVar6[0x20] = 'G';
    pcVar6[0x21] = '\0';
    pcVar6[0x22] = '\0';
    pcVar6[0x23] = '\0';
    pcVar6[0x24] = '\0';
    pcVar6[0x25] = '\0';
    pcVar6[0x26] = '\0';
    pcVar6[0x27] = -0x30;
    pcVar6[0x28] = '`';
    pcVar6[0x29] = 'I';
    pcVar6[0x2a] = -0x27;
    pcVar6[0x2b] = '\0';
    pcVar6[0x2c] = '\x01';
    pcVar6[0x2d] = '\0';
    pcVar6[0x2e] = '\0';
    pcVar6[0x2f] = -0x80;
    SVar7.bridgeObject = (void *)0x20;
    SVar7.str = pcVar6;
    separator.bridgeObject = (void *)0xa;
    separator.str = (char *)0xe100000000000000;
    Swift::_print(SVar7,separator);
    _swift_release(pcVar6);
    return;
  }
  return;
}



/* Address: 0x100164a84 | FUN_100164a84 */

void FUN_100164a84(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    lVar3 = *(long *)(param_1 + 0x20);
    if (lVar3 != 0) {
      if (DAT_100fb1918 != -1) {
        _swift_once(&DAT_100fb1918,FUN_100164c34);
      }
      if (DAT_100fb1928 != -1) {
        _swift_once(&DAT_100fb1928,FUN_100164c48);
      }
      uVar1 = DAT_100fb1930;
      _swift_getObjCClassFromMetadata();
      lVar4 = lVar3;
      _class_getInstanceMethod();
      if ((lVar4 != 0) && (lVar5 = lVar3, _class_getInstanceMethod(lVar3,uVar1), lVar5 != 0)) {
        _method_exchangeImplementations(lVar4,lVar5);
      }
      if (DAT_100fb1940 != -1) {
        _swift_once(&DAT_100fb1940,FUN_100164c5c);
      }
      uVar1 = DAT_100fb1948;
      if (DAT_100fb1950 != -1) {
        _swift_once(&DAT_100fb1950,FUN_100164c70);
      }
      uVar2 = DAT_100fb1958;
      lVar4 = lVar3;
      _class_getInstanceMethod(lVar3,uVar1);
      if ((lVar4 != 0) && (_class_getInstanceMethod(lVar3,uVar2), lVar3 != 0)) {
        _method_exchangeImplementations(lVar4,lVar3);
      }
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    _swift_release(param_1);
  }
  return;
}


