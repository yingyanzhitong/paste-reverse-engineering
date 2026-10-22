/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100146ff4 | FUN_100146ff4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100147c78) */

void FUN_100146ff4(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,char param_10)

{
  char *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  byte bVar9;
  code *pcVar10;
  bool bVar11;
  Date DVar12;
  CharacterSet CVar13;
  CharacterSet CVar14;
  char *pcVar15;
  undefined *puVar16;
  undefined *puVar17;
  byte *pbVar18;
  undefined *puVar19;
  undefined *puVar20;
  class_t *pcVar21;
  class_t *pcVar22;
  undefined8 uVar23;
  ulong *extraout_x1;
  ulong *extraout_x1_00;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar25;
  long lVar26;
  long lVar27;
  long unaff_x20;
  long lVar28;
  ulong uVar29;
  undefined *puVar30;
  ulong *puVar31;
  CharacterSet in;
  ID IVar32;
  undefined1 *puVar33;
  ulong uVar34;
  uint uVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  String SVar39;
  String SVar40;
  String SVar41;
  String separator;
  String separator_00;
  String separator_01;
  undefined *local_210;
  undefined8 *local_208;
  undefined *local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  long local_1e8;
  long local_1e0;
  long local_1d8;
  undefined1 *local_1d0;
  ulong local_1c8;
  long local_1c0;
  ID local_1b0;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [40];
  undefined *local_120;
  undefined8 local_118;
  undefined1 auStack_110 [32];
  objc_super local_f0;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  byte local_98 [24];
  undefined1 auStack_80 [32];
  void *pvVar24;
  
  DVar12 = Foundation::Date::typeMetadataAccessor();
  lVar36 = *(long *)(DVar12.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar36 + 0x40));
  lVar37 = (long)&local_210 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  CVar13 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar26 = *(long *)(CVar13.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar26 + 0x40));
  in.unknown = (undefined *)(lVar37 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  IVar32 = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::setupLock);
  objc_stub::lock(IVar32);
  lVar38 = _TtC7PostHog10PostHogSDK::enabled;
  bVar9 = *(byte *)(unaff_x20 + _TtC7PostHog10PostHogSDK::enabled);
  objc_stub::unlock(IVar32);
  lVar27 = PostHogConfig::optOut;
  if ((bVar9 & 1) == 0) {
    if (DAT_101057340 != '\x01') {
      return;
    }
    pcVar15 = &DAT_100fae660;
    FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
    _swift_allocObject();
    pcVar15[0x18] = '\x02';
    pcVar15[0x19] = '\0';
    pcVar15[0x1a] = '\0';
    pcVar15[0x1b] = '\0';
    pcVar15[0x1c] = '\0';
    pcVar15[0x1d] = '\0';
    pcVar15[0x1e] = '\0';
    pcVar15[0x1f] = '\0';
    pcVar15[0x10] = '\x01';
    pcVar15[0x11] = '\0';
    pcVar15[0x12] = '\0';
    pcVar15[0x13] = '\0';
    pcVar15[0x14] = '\0';
    pcVar15[0x15] = '\0';
    pcVar15[0x16] = '\0';
    pcVar15[0x17] = '\0';
    *(undefined **)(pcVar15 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
    pcVar15[0x20] = 'X';
    pcVar15[0x21] = '\0';
    pcVar15[0x22] = '\0';
    pcVar15[0x23] = '\0';
    pcVar15[0x24] = '\0';
    pcVar15[0x25] = '\0';
    pcVar15[0x26] = '\0';
    pcVar15[0x27] = -0x30;
    pcVar15[0x28] = '@';
    pcVar15[0x29] = '\x15';
    pcVar15[0x2a] = -0x27;
    pcVar15[0x2b] = '\0';
    pcVar15[0x2c] = '\x01';
    pcVar15[0x2d] = '\0';
    pcVar15[0x2e] = '\0';
    pcVar15[0x2f] = -0x80;
    SVar39.bridgeObject = (void *)0x20;
    SVar39.str = pcVar15;
    separator.bridgeObject = (void *)0xa;
    separator.str = (char *)0xe100000000000000;
    Swift::_print(SVar39,separator);
    _swift_release(pcVar15);
    return;
  }
  local_1c0 = _TtC7PostHog10PostHogSDK::config;
  lVar28 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::config);
  CVar14.unknown = (undefined *)(lVar28 + PostHogConfig::optOut);
  _swift_beginAccess(CVar14.unknown,auStack_80,0,0);
  if (*(char *)(lVar28 + lVar27) == '\x01') {
    if (DAT_101057340 != '\x01') {
      return;
    }
    pcVar15 = &DAT_100fae660;
    FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
    _swift_allocObject();
    pcVar15[0x18] = '\x02';
    pcVar15[0x19] = '\0';
    pcVar15[0x1a] = '\0';
    pcVar15[0x1b] = '\0';
    pcVar15[0x1c] = '\0';
    pcVar15[0x1d] = '\0';
    pcVar15[0x1e] = '\0';
    pcVar15[0x1f] = '\0';
    pcVar15[0x10] = '\x01';
    pcVar15[0x11] = '\0';
    pcVar15[0x12] = '\0';
    pcVar15[0x13] = '\0';
    pcVar15[0x14] = '\0';
    pcVar15[0x15] = '\0';
    pcVar15[0x16] = '\0';
    pcVar15[0x17] = '\0';
    pcVar1 = "[PostHog] PostHog is in OptOut state.";
    *(undefined **)(pcVar15 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
    lVar38 = -0x33;
LAB_1001473cc:
    *(long *)(pcVar15 + 0x20) = lVar38 + -0x2fffffffffffffa8;
    *(ulong *)(pcVar15 + 0x28) = (ulong)(pcVar1 + -0x20) | 0x8000000000000000;
    SVar40.bridgeObject = (void *)0x20;
    SVar40.str = pcVar15;
    separator_00.bridgeObject = (void *)0xa;
    separator_00.str = (char *)0xe100000000000000;
    Swift::_print(SVar40,separator_00);
    _swift_release(pcVar15);
    return;
  }
  local_120 = param_1;
  local_118 = param_2;
  Foundation::CharacterSet::get_whitespacesAndNewlines(CVar14);
  FUN_1001013b8();
  SVar39 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
  pvVar24 = SVar39.bridgeObject;
  (**(code **)(lVar26 + 8))(in.unknown,CVar13.unknown);
  _swift_bridgeObjectRelease(pvVar24);
  uVar29 = (ulong)SVar39.str & 0xffffffffffff;
  if (((ulong)pvVar24 & 0x2000000000000000) != 0) {
    uVar29 = (ulong)pvVar24 >> 0x38 & 0xf;
  }
  if (uVar29 == 0) {
    if (DAT_101057340 != '\x01') {
      return;
    }
    pcVar15 = &DAT_100fae660;
    FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
    _swift_allocObject();
    pcVar15[0x18] = '\x02';
    pcVar15[0x19] = '\0';
    pcVar15[0x1a] = '\0';
    pcVar15[0x1b] = '\0';
    pcVar15[0x1c] = '\0';
    pcVar15[0x1d] = '\0';
    pcVar15[0x1e] = '\0';
    pcVar15[0x1f] = '\0';
    pcVar15[0x10] = '\x01';
    pcVar15[0x11] = '\0';
    pcVar15[0x12] = '\0';
    pcVar15[0x13] = '\0';
    pcVar15[0x14] = '\0';
    pcVar15[0x15] = '\0';
    pcVar15[0x16] = '\0';
    pcVar15[0x17] = '\0';
    pcVar1 = "[PostHog] captureLog: empty body, dropping";
    *(undefined **)(pcVar15 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
    lVar38 = -0x2e;
    goto LAB_1001473cc;
  }
  local_1d8 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::logsQueue);
  if (local_1d8 == 0) {
    return;
  }
  _swift_retain();
  objc_stub::lock(IVar32);
  bVar9 = *(byte *)(unaff_x20 + lVar38);
  objc_stub::unlock(IVar32);
  lVar38 = PostHogConfig::storageManager;
  if ((bVar9 & 1) == 0) {
    if (DAT_101057340 == '\x01') {
      pcVar15 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      _swift_allocObject();
      pcVar15[0x18] = '\x02';
      pcVar15[0x19] = '\0';
      pcVar15[0x1a] = '\0';
      pcVar15[0x1b] = '\0';
      pcVar15[0x1c] = '\0';
      pcVar15[0x1d] = '\0';
      pcVar15[0x1e] = '\0';
      pcVar15[0x1f] = '\0';
      pcVar15[0x10] = '\x01';
      pcVar15[0x11] = '\0';
      pcVar15[0x12] = '\0';
      pcVar15[0x13] = '\0';
      pcVar15[0x14] = '\0';
      pcVar15[0x15] = '\0';
      pcVar15[0x16] = '\0';
      pcVar15[0x17] = '\0';
      *(undefined **)(pcVar15 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      pcVar15[0x20] = 'X';
      pcVar15[0x21] = '\0';
      pcVar15[0x22] = '\0';
      pcVar15[0x23] = '\0';
      pcVar15[0x24] = '\0';
      pcVar15[0x25] = '\0';
      pcVar15[0x26] = '\0';
      pcVar15[0x27] = -0x30;
      pcVar15[0x28] = '@';
      pcVar15[0x29] = '\x15';
      pcVar15[0x2a] = -0x27;
      pcVar15[0x2b] = '\0';
      pcVar15[0x2c] = '\x01';
      pcVar15[0x2d] = '\0';
      pcVar15[0x2e] = '\0';
      pcVar15[0x2f] = -0x80;
      SVar41.bridgeObject = (void *)0x20;
      SVar41.str = pcVar15;
      separator_01.bridgeObject = (void *)0xa;
      separator_01.str = (char *)0xe100000000000000;
      Swift::_print(SVar41,separator_01);
      _swift_release(pcVar15);
    }
LAB_100147474:
    uVar25 = 0;
    puVar33 = (undefined1 *)0xe000000000000000;
  }
  else {
    lVar27 = *(long *)(unaff_x20 + local_1c0);
    puVar33 = auStack_160;
    _swift_beginAccess(lVar27 + PostHogConfig::storageManager,puVar33,0,0);
    uVar29 = *(ulong *)(lVar27 + lVar38);
    if (uVar29 == 0) goto LAB_100147474;
    uVar25 = uVar29;
    _swift_retain();
    FUN_10015cd34();
    _swift_release(uVar29);
  }
  lVar26 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::sessionManager);
  Foundation::Date::init();
  lVar27 = 1;
  lVar38 = lVar37;
  FUN_10015687c();
  local_1e8 = lVar27;
  local_1e0 = lVar38;
  (**(code **)(lVar36 + 8))(lVar37,DVar12.unknown);
  IVar32 = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::lastScreenLock);
  objc_stub::lock(IVar32);
  uVar8 = *(undefined8 *)(unaff_x20 + _TtC7PostHog10PostHogSDK::_lastScreenName);
  uVar23 = ((undefined8 *)(unaff_x20 + _TtC7PostHog10PostHogSDK::_lastScreenName))[1];
  _swift_bridgeObjectRetain(uVar23);
  objc_stub::unlock(IVar32);
  IVar32 = *(ID *)(lVar26 + _TtC7PostHog21PostHogSessionManager::sessionLock);
  objc_stub::lock(IVar32);
  bVar9 = *(byte *)(lVar26 + _TtC7PostHog21PostHogSessionManager::isAppInBackground);
  uVar35 = (uint)bVar9;
  puVar16 = (undefined *)objc_stub::unlock(IVar32);
  puVar30 = *(undefined **)(unaff_x20 + _TtC7PostHog10PostHogSDK::remoteConfig);
  puVar31 = extraout_x1;
  local_1f8 = uVar23;
  local_1f0 = uVar8;
  if (puVar30 != (undefined *)0x0) {
    IVar32 = *(ID *)(puVar30 + 0x60);
    _swift_retain(puVar30);
    objc_stub::lock(IVar32);
    puVar16 = &DAT_100c2ef68;
    _swift_getKeyPath();
    puVar17 = puVar16;
    FUN_10012fef0();
    _swift_release(puVar16);
    objc_stub::unlock(IVar32);
    puVar31 = extraout_x1_00;
    _swift_release();
    puVar16 = puVar30;
    if (puVar17 != (undefined *)0x0) {
      local_208 = (undefined8 *)CONCAT44(local_208._4_4_,(uint)bVar9);
      puVar31 = (ulong *)(puVar17 + 0x40);
      uVar34 = -1L << ((ulong)(byte)puVar17[0x20] & 0x3f);
      uVar29 = 0xffffffffffffffff;
      if (-uVar34 < 0x40) {
        uVar29 = ~(-1L << (-uVar34 & 0x3f));
      }
      uVar29 = uVar29 & *puVar31;
      local_1d0 = puVar33;
      local_1c8 = uVar25;
      _swift_bridgeObjectRetain(puVar17);
      lVar38 = 0;
      lVar27 = lVar38;
      puVar16 = PTR___swiftEmptyArrayStorage_100eae0d8;
      while( true ) {
        while (uVar29 != 0) {
          uVar25 = (uVar29 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar29 & 0x5555555555555555) << 1;
          uVar25 = (uVar25 & 0xcccccccccccccccc) >> 2 | (uVar25 & 0x3333333333333333) << 2;
          uVar25 = (uVar25 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar25 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar25 = (uVar25 & 0xff00ff00ff00ff00) >> 8 | (uVar25 & 0xff00ff00ff00ff) << 8;
          uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10;
          uVar29 = uVar29 - 1 & uVar29;
          uVar25 = LZCOUNT(uVar25 >> 0x20 | uVar25 << 0x20) | lVar38 << 6;
          puVar2 = (undefined8 *)(*(long *)(puVar17 + 0x30) + uVar25 * 0x10);
          puVar30 = (undefined *)*puVar2;
          uVar8 = puVar2[1];
          local_120 = puVar30;
          local_118 = uVar8;
          FUN_10000cbfc(*(long *)(puVar17 + 0x38) + uVar25 * 0x20,auStack_110);
          FUN_10000cbfc(auStack_110,auStack_148);
          _swift_bridgeObjectRetain(uVar8);
          pbVar18 = local_98;
          _swift_dynamicCast(pbVar18,auStack_148,PTR___type_metadata_for_Any_100eae0c0 + 8,
                             PTR___type_metadata_for_Swift_Bool_100eac570,6);
          lVar27 = lVar38;
          if (((int)pbVar18 == 0) || ((local_98[0] & 1) != 0)) {
            _swift_bridgeObjectRetain(uVar8);
            FUN_1000fb4c4(&local_120,&DAT_100fae908,&DAT_100c2eec0);
            puVar19 = puVar16;
            _swift_isUniquelyReferenced_nonNull_native();
            puVar20 = puVar16;
            if (((ulong)puVar19 & 1) == 0) {
              puVar20 = (undefined *)0x0;
              FUN_10010540c(0,*(long *)(puVar16 + 0x10) + 1,1,puVar16);
            }
            uVar25 = *(ulong *)(puVar20 + 0x10);
            puVar16 = (undefined *)(uVar25 + 1);
            if (*(ulong *)(puVar20 + 0x18) >> 1 <= uVar25) {
              puVar20 = (undefined *)(ulong)(1 < *(ulong *)(puVar20 + 0x18));
              local_200 = puVar16;
              FUN_10010540c(puVar20,puVar16,1);
              puVar16 = local_200;
            }
            *(undefined **)(puVar20 + 0x10) = puVar16;
            *(undefined **)(puVar20 + uVar25 * 0x10 + 0x20) = puVar30;
            *(undefined8 *)(puVar20 + uVar25 * 0x10 + 0x28) = uVar8;
            puVar16 = puVar20;
          }
          else {
            FUN_1000fb4c4(&local_120,&DAT_100fae908,&DAT_100c2eec0);
          }
        }
        bVar11 = SCARRY8(lVar38,1);
        lVar38 = lVar38 + 1;
        if (bVar11) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x100147c78);
          (*pcVar10)();
        }
        if ((long)(0x3f - uVar34 >> 6) <= lVar38) break;
        uVar29 = puVar31[lVar38];
      }
      _swift_bridgeObjectRelease(puVar17);
      FUN_10000c650(puVar17,puVar31,~uVar34,lVar27,0);
      local_120 = puVar16;
      _swift_bridgeObjectRetain(puVar16);
      FUN_1001124b0(&local_120);
      _swift_bridgeObjectRelease();
      local_200 = local_120;
      puVar33 = local_1d0;
      uVar25 = local_1c8;
      uVar35 = (uint)local_208;
      goto LAB_10014781c;
    }
  }
  local_200 = PTR___swiftEmptyArrayStorage_100eae0d8;
LAB_10014781c:
  FUN_10016dd00();
  local_210 = param_4;
  if (param_4 == (undefined *)0x0) {
    puVar30 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1000f8154();
    local_210 = puVar30;
  }
  if (param_10 == '\x01') {
    _swift_bridgeObjectRetain(param_4);
    local_1b0 = 0;
  }
  else {
    puVar30 = &_OBJC_CLASS___NSNumber;
    _objc_allocWithZone();
    _swift_bridgeObjectRetain(param_4);
    local_1b0 = objc_stub::initWithInteger_((ID)puVar30,param_9);
  }
  uVar29 = uVar25 & 0xffffffffffff;
  if (((ulong)puVar33 & 0x2000000000000000) != 0) {
    uVar29 = (ulong)puVar33 >> 0x38 & 0xf;
  }
  if (uVar29 == 0) {
    _swift_bridgeObjectRelease(puVar33);
    uVar25 = 0;
    puVar33 = (undefined1 *)0x0;
  }
  uVar8 = 0x756f72676b636162;
  if (uVar35 == 0) {
    uVar8 = 0x756f726765726f66;
  }
  pcVar21 = (class_t *)0x0;
  local_1d0 = puVar33;
  local_1c8 = uVar25;
  FUN_10010c0bc();
  pcVar22 = pcVar21;
  _objc_allocWithZone();
  puVar2 = (undefined8 *)((long)&pcVar22->isa + _TtC7PostHog16PostHogLogRecord::traceId);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar3 = (undefined8 *)((long)&pcVar22->isa + _TtC7PostHog16PostHogLogRecord::spanId);
  *puVar3 = 0;
  puVar3[1] = 0;
  lVar38 = _TtC7PostHog16PostHogLogRecord::traceFlags;
  *(undefined8 *)((long)&pcVar22->isa + _TtC7PostHog16PostHogLogRecord::traceFlags) = 0;
  puVar4 = (ulong *)((long)&pcVar22->isa + _TtC7PostHog16PostHogLogRecord::distinctId);
  *puVar4 = 0;
  puVar4[1] = 0;
  plVar5 = (long *)((long)&pcVar22->isa + _TtC7PostHog16PostHogLogRecord::sessionId);
  *plVar5 = 0;
  plVar5[1] = 0;
  puVar6 = (undefined8 *)((long)&pcVar22->isa + _TtC7PostHog16PostHogLogRecord::screenName);
  *puVar6 = 0;
  puVar6[1] = 0;
  local_208 = (undefined8 *)((long)&pcVar22->isa + _TtC7PostHog16PostHogLogRecord::appState);
  *local_208 = 0;
  local_208[1] = 0;
  puVar7 = (undefined8 *)((long)&pcVar22->isa + _TtC7PostHog16PostHogLogRecord::body);
  *puVar7 = param_1;
  puVar7[1] = param_2;
  *(undefined8 *)((long)&pcVar22->isa + _TtC7PostHog16PostHogLogRecord::level) = param_3;
  *(undefined **)((long)&pcVar22->isa + _TtC7PostHog16PostHogLogRecord::attributes) = local_210;
  _swift_beginAccess(puVar2,&local_120,1,0);
  *puVar2 = param_5;
  puVar2[1] = param_6;
  _swift_beginAccess(puVar3,auStack_148,1,0);
  *puVar3 = param_7;
  puVar3[1] = param_8;
  _swift_beginAccess((long)&pcVar22->isa + lVar38,local_98,1,0);
  *(ID *)((long)&pcVar22->isa + lVar38) = local_1b0;
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_8);
  _swift_bridgeObjectRetain(param_6);
  puVar2 = (undefined8 *)((long)&pcVar22->isa + _TtC7PostHog16PostHogLogRecord::timeUnixNano);
  *puVar2 = puVar16;
  puVar2[1] = puVar31;
  puVar2 = (undefined8 *)
           ((long)&pcVar22->isa + _TtC7PostHog16PostHogLogRecord::observedTimeUnixNano);
  *puVar2 = puVar16;
  puVar2[1] = puVar31;
  _swift_beginAccess(puVar4,auStack_b0,1,0);
  uVar29 = puVar4[1];
  *puVar4 = local_1c8;
  puVar4[1] = (ulong)local_1d0;
  _swift_bridgeObjectRetain(puVar31);
  _swift_bridgeObjectRelease(uVar29);
  _swift_beginAccess(plVar5,auStack_c8,1,0);
  lVar38 = plVar5[1];
  *plVar5 = local_1e0;
  plVar5[1] = local_1e8;
  _swift_bridgeObjectRelease(lVar38);
  _swift_beginAccess(puVar6,auStack_e0,1,0);
  uVar23 = puVar6[1];
  *puVar6 = local_1f0;
  puVar6[1] = local_1f8;
  _swift_bridgeObjectRelease(uVar23);
  uVar23 = local_208[1];
  *local_208 = uVar8;
  local_208[1] = 0xea0000000000646e;
  _swift_bridgeObjectRelease(uVar23);
  *(undefined **)((long)&pcVar22->isa + _TtC7PostHog16PostHogLogRecord::featureFlagKeys) = local_200
  ;
  local_f0.receiver = (ID)pcVar22;
  local_f0.super_class = pcVar21;
  IVar32 = _objc_msgSendSuper2(&local_f0,"init");
  FUN_10010e788();
  lVar38 = local_1d8;
  if (IVar32 != 0) {
    FUN_100136870(IVar32,FUN_100136748);
  }
  _swift_release(lVar38);
  return;
}



/* Address: 0x100147c88 | FUN_100147c88 */

uint FUN_100147c88(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [32];
  
  uVar2 = *param_1;
  uVar1 = param_1[1];
  local_60 = uVar2;
  uStack_58 = uVar1;
  FUN_10000cbfc(param_2,auStack_50);
  _swift_bridgeObjectRetain(uVar1);
  FUN_100052458(uVar2,uVar1,param_3);
  FUN_1000fb4c4(&local_60,&DAT_100fae908,&DAT_100c2eec0);
  return (uint)uVar2 & 1;
}



/* Address: 0x100147d10 | FUN_100147d10 */

void FUN_100147d10(undefined8 param_1,undefined8 param_2)

{
  FUN_100147d24(param_1,param_2,0);
  return;
}



/* Address: 0x100147d18 | _TtC7PostHog10PostHogSDK::screen: */

/* Function Stack Size: 0x18 bytes */

void _TtC7PostHog10PostHogSDK::screen_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100150a80();
  return;
}



/* Address: 0x100147d24 | FUN_100147d24 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x00010014842c) */

void FUN_100147d24(undefined *param_1,undefined *param_2,undefined *param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  bool bVar3;
  Date DVar4;
  undefined *puVar5;
  char *pcVar6;
  undefined7 extraout_var;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar12;
  long lVar13;
  long lVar14;
  ID self;
  long lVar15;
  _StringGuts _Var16;
  long lVar17;
  ID self_00;
  undefined **ppuVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String separator;
  String separator_00;
  String separator_01;
  undefined8 local_140;
  undefined8 uStack_138;
  long local_128;
  long local_120;
  uint local_114;
  undefined *local_110;
  undefined *local_108;
  undefined *local_100;
  long local_f8;
  undefined *local_f0 [14];
  undefined1 auStack_80 [32];
  
  DVar4 = Foundation::Date::typeMetadataAccessor();
  local_f8 = *(long *)(DVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_f8 + 0x40));
  lVar13 = (long)&local_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100faf508;
  FUN_1000f7830(&DAT_100faf508,&DAT_100c2e2e0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = lVar13 - extraout_x8_00;
  self_00 = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::setupLock);
  objc_stub::lock(self_00);
  lVar12 = _TtC7PostHog10PostHogSDK::enabled;
  bVar2 = *(byte *)(unaff_x20 + _TtC7PostHog10PostHogSDK::enabled);
  objc_stub::unlock(self_00);
  lVar9 = PostHogConfig::optOut;
  lVar15 = _TtC7PostHog10PostHogSDK::config;
  if ((bVar2 & 1) == 0) {
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
      pcVar6[0x20] = 'X';
      pcVar6[0x21] = '\0';
      pcVar6[0x22] = '\0';
      pcVar6[0x23] = '\0';
      pcVar6[0x24] = '\0';
      pcVar6[0x25] = '\0';
      pcVar6[0x26] = '\0';
      pcVar6[0x27] = -0x30;
      pcVar6[0x28] = '@';
      pcVar6[0x29] = '\x15';
      pcVar6[0x2a] = -0x27;
      pcVar6[0x2b] = '\0';
      pcVar6[0x2c] = '\x01';
      pcVar6[0x2d] = '\0';
      pcVar6[0x2e] = '\0';
      pcVar6[0x2f] = -0x80;
      SVar20.bridgeObject = (void *)0x20;
      SVar20.str = pcVar6;
      separator_00.bridgeObject = (void *)0xa;
      separator_00.str = (char *)0xe100000000000000;
      Swift::_print(SVar20,separator_00);
      _swift_release(pcVar6);
      return;
    }
  }
  else {
    lVar14 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::config);
    local_108 = param_3;
    local_100 = DVar4.unknown;
    _swift_beginAccess(lVar14 + PostHogConfig::optOut,auStack_80,0,0);
    if (*(char *)(lVar14 + lVar9) == '\x01') {
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
        pcVar6[0x20] = '%';
        pcVar6[0x21] = '\0';
        pcVar6[0x22] = '\0';
        pcVar6[0x23] = '\0';
        pcVar6[0x24] = '\0';
        pcVar6[0x25] = '\0';
        pcVar6[0x26] = '\0';
        pcVar6[0x27] = -0x30;
        pcVar6[0x28] = '\0';
        pcVar6[0x29] = '\x16';
        pcVar6[0x2a] = -0x27;
        pcVar6[0x2b] = '\0';
        pcVar6[0x2c] = '\x01';
        pcVar6[0x2d] = '\0';
        pcVar6[0x2e] = '\0';
        pcVar6[0x2f] = -0x80;
        SVar19.bridgeObject = (void *)0x20;
        SVar19.str = pcVar6;
        separator.bridgeObject = (void *)0xa;
        separator.str = (char *)0xe100000000000000;
        Swift::_print(SVar19,separator);
        _swift_release(pcVar6);
      }
    }
    else {
      FUN_100168a90();
      if (param_2 != (undefined *)0x0) {
        local_120 = lVar15;
        self = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::lastScreenLock);
        local_110 = param_1;
        objc_stub::lock(self);
        puVar1 = (undefined8 *)(unaff_x20 + _TtC7PostHog10PostHogSDK::_lastScreenName);
        _Var16.unknown = (undefined *)puVar1[1];
        if (_Var16.unknown == (undefined *)0x0) {
          local_114 = 0;
        }
        else if (((undefined *)*puVar1 == local_110) && (_Var16.unknown == param_2)) {
          local_114 = 1;
        }
        else {
          bVar3 = Swift::_stringCompareWithSmolCheck
                            ((undefined *)*puVar1,_Var16,(_StringComparisonResult)(__int8)local_110)
          ;
          local_114 = (uint)CONCAT71(extraout_var,bVar3);
        }
        puVar5 = local_110;
        *puVar1 = local_110;
        puVar1[1] = param_2;
        _swift_bridgeObjectRetain(param_2);
        _swift_bridgeObjectRelease(_Var16.unknown);
        objc_stub::unlock(self);
        lVar15 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::queue);
        if (lVar15 != 0) {
          puVar7 = &DAT_100fae678;
          FUN_1000f7830(&DAT_100fae678,&DAT_100c2e190);
          _swift_initStackObject();
          uStack_138 = 2;
          local_140 = 1;
          *(undefined8 *)(puVar7 + 0x18) = 2;
          *(undefined8 *)(puVar7 + 0x10) = 1;
          *(undefined8 *)(puVar7 + 0x20) = 0x5f6e656572637324;
          *(undefined **)(puVar7 + 0x48) = PTR___type_metadata_for_Swift_String_100eac208;
          *(undefined8 *)(puVar7 + 0x28) = 0xec000000656d616e;
          *(undefined **)(puVar7 + 0x30) = puVar5;
          *(undefined **)(puVar7 + 0x38) = param_2;
          _swift_bridgeObjectRetain(param_2);
          local_128 = lVar15;
          _swift_retain(lVar15);
          puVar5 = puVar7;
          FUN_1000f8154();
          _swift_setDeallocating(puVar7);
          FUN_1000fb4c4(puVar7 + 0x20,&DAT_100fae490,&DAT_100c2de60);
          puVar7 = local_108;
          FUN_10016ead0();
          if (puVar7 == (undefined *)0x0) {
            puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
            FUN_1000f8154(PTR___swiftEmptyArrayStorage_100eae0d8);
          }
          puVar8 = puVar5;
          _swift_isUniquelyReferenced_nonNull_native(puVar5);
          local_f0[0] = puVar5;
          FUN_100103e2c(puVar7,FUN_100152dbc,0,puVar8,local_f0);
          _swift_bridgeObjectRelease(puVar7);
          puVar7 = local_f0[0];
          local_108 = param_2;
          objc_stub::lock(self_00);
          bVar2 = *(byte *)(unaff_x20 + lVar12);
          objc_stub::unlock(self_00);
          puVar5 = local_100;
          lVar15 = PostHogConfig::storageManager;
          if ((bVar2 & 1) == 0) {
            if (DAT_101057340 == '\x01') {
              pcVar6 = &DAT_100fae660;
              FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
              _swift_allocObject();
              *(undefined8 *)(pcVar6 + 0x18) = uStack_138;
              *(undefined8 *)(pcVar6 + 0x10) = local_140;
              *(undefined **)(pcVar6 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
              pcVar6[0x20] = 'X';
              pcVar6[0x21] = '\0';
              pcVar6[0x22] = '\0';
              pcVar6[0x23] = '\0';
              pcVar6[0x24] = '\0';
              pcVar6[0x25] = '\0';
              pcVar6[0x26] = '\0';
              pcVar6[0x27] = -0x30;
              pcVar6[0x28] = '@';
              pcVar6[0x29] = '\x15';
              pcVar6[0x2a] = -0x27;
              pcVar6[0x2b] = '\0';
              pcVar6[0x2c] = '\x01';
              pcVar6[0x2d] = '\0';
              pcVar6[0x2e] = '\0';
              pcVar6[0x2f] = -0x80;
              SVar21.bridgeObject = (void *)0x20;
              SVar21.str = pcVar6;
              separator_01.bridgeObject = (void *)0xa;
              separator_01.str = (char *)0xe100000000000000;
              Swift::_print(SVar21,separator_01);
              _swift_release(pcVar6);
            }
            lVar15 = 0;
            ppuVar18 = (undefined **)0xe000000000000000;
          }
          else {
            lVar12 = *(long *)(unaff_x20 + local_120);
            ppuVar18 = local_f0;
            _swift_beginAccess(lVar12 + PostHogConfig::storageManager,ppuVar18,0,0);
            lVar12 = *(long *)(lVar12 + lVar15);
            if (lVar12 == 0) {
              lVar15 = 0;
              ppuVar18 = (undefined **)0xe000000000000000;
              puVar5 = local_100;
            }
            else {
              lVar15 = lVar12;
              _swift_retain(lVar12);
              FUN_10015cd34();
              _swift_release(lVar12);
              puVar5 = local_100;
            }
          }
          lVar12 = local_f8;
          (**(code **)(local_f8 + 0x38))(lVar17,1,1,puVar5);
          lVar9 = lVar15;
          FUN_10013ec54(lVar15,ppuVar18,puVar7,0,0,0,1,lVar17);
          _swift_release(puVar7);
          FUN_1000fb4c4(lVar17,&DAT_100faf508,&DAT_100c2e2e0);
          Foundation::Date::init();
          lVar17 = 0x6e656572637324;
          FUN_100149464(0x6e656572637324,&DAT_e700000000000000,lVar15,ppuVar18,lVar9,lVar13);
          _swift_bridgeObjectRelease(lVar9);
          _swift_bridgeObjectRelease(ppuVar18);
          (**(code **)(lVar12 + 8))(lVar13,puVar5);
          lVar15 = local_128;
          if (lVar17 != 0) {
            FUN_100136870(lVar17,FUN_10013662c);
            FUN_1001349c8(lVar17,FUN_10010f72c);
            puVar5 = local_108;
            if (DAT_100fae858 != -1) {
              _swift_once(&DAT_100fae858,FUN_1000fbcdc);
            }
            uVar11 = DAT_101057190;
            uVar10 = DAT_101057190;
            _swift_retain(DAT_101057190);
            FUN_1000fbd10();
            _swift_release(uVar11);
            FUN_100168584();
            FUN_100134ac8(local_110,puVar5);
            _swift_bridgeObjectRelease(puVar5);
            _swift_unknownObjectRelease(uVar10);
            _swift_release(uVar11);
            if ((local_114 & 1) == 0) {
              FUN_100151c48();
            }
            _swift_release(lVar15);
            return;
          }
          _swift_release(local_128);
          param_2 = local_108;
        }
        _swift_bridgeObjectRelease(param_2);
      }
    }
  }
  return;
}



/* Address: 0x100148438 | _TtC7PostHog10PostHogSDK::screenWithTitle:properties: */

/* Function Stack Size: 0x20 bytes */

void _TtC7PostHog10PostHogSDK::screenWithTitle_properties_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  FUN_1001509c8();
  return;
}



/* Address: 0x100148444 | FUN_100148444 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100148444(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  Date DVar2;
  undefined *puVar3;
  char *pcVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 *puVar14;
  ID self;
  long lVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String separator;
  String separator_00;
  String separator_01;
  undefined8 local_100;
  undefined8 uStack_f8;
  char *local_f0;
  long local_e8;
  undefined *local_e0;
  undefined1 auStack_d8 [88];
  undefined1 auStack_80 [32];
  
  DVar2 = Foundation::Date::typeMetadataAccessor();
  lVar15 = *(long *)(DVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar15 + 0x40));
  lVar12 = (long)&local_100 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100faf508;
  FUN_1000f7830(&DAT_100faf508,&DAT_100c2e2e0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = lVar12 - extraout_x8_00;
  self = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::setupLock);
  objc_stub::lock(self);
  lVar11 = _TtC7PostHog10PostHogSDK::enabled;
  bVar1 = *(byte *)(unaff_x20 + _TtC7PostHog10PostHogSDK::enabled);
  objc_stub::unlock(self);
  lVar8 = PostHogConfig::optOut;
  lVar10 = _TtC7PostHog10PostHogSDK::config;
  if ((bVar1 & 1) == 0) {
    if (DAT_101057340 != '\x01') {
      return;
    }
    pcVar4 = &DAT_100fae660;
    FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
    _swift_allocObject();
    pcVar4[0x18] = '\x02';
    pcVar4[0x19] = '\0';
    pcVar4[0x1a] = '\0';
    pcVar4[0x1b] = '\0';
    pcVar4[0x1c] = '\0';
    pcVar4[0x1d] = '\0';
    pcVar4[0x1e] = '\0';
    pcVar4[0x1f] = '\0';
    pcVar4[0x10] = '\x01';
    pcVar4[0x11] = '\0';
    pcVar4[0x12] = '\0';
    pcVar4[0x13] = '\0';
    pcVar4[0x14] = '\0';
    pcVar4[0x15] = '\0';
    pcVar4[0x16] = '\0';
    pcVar4[0x17] = '\0';
    *(undefined **)(pcVar4 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
    pcVar4[0x20] = 'X';
    pcVar4[0x21] = '\0';
    pcVar4[0x22] = '\0';
    pcVar4[0x23] = '\0';
    pcVar4[0x24] = '\0';
    pcVar4[0x25] = '\0';
    pcVar4[0x26] = '\0';
    pcVar4[0x27] = -0x30;
    pcVar4[0x28] = '@';
    pcVar4[0x29] = '\x15';
    pcVar4[0x2a] = -0x27;
    pcVar4[0x2b] = '\0';
    pcVar4[0x2c] = '\x01';
    pcVar4[0x2d] = '\0';
    pcVar4[0x2e] = '\0';
    pcVar4[0x2f] = -0x80;
    SVar17.bridgeObject = (void *)0x20;
    SVar17.str = pcVar4;
    separator_00.bridgeObject = (void *)0xa;
    separator_00.str = (char *)0xe100000000000000;
    Swift::_print(SVar17,separator_00);
    _swift_release(pcVar4);
    return;
  }
  lVar9 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::config);
  local_e8 = lVar15;
  local_e0 = DVar2.unknown;
  _swift_beginAccess(lVar9 + PostHogConfig::optOut,auStack_80,0,0);
  if (*(char *)(lVar9 + lVar8) == '\x01') {
    if (DAT_101057340 != '\x01') {
      return;
    }
    pcVar4 = &DAT_100fae660;
    FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
    _swift_allocObject();
    pcVar4[0x18] = '\x02';
    pcVar4[0x19] = '\0';
    pcVar4[0x1a] = '\0';
    pcVar4[0x1b] = '\0';
    pcVar4[0x1c] = '\0';
    pcVar4[0x1d] = '\0';
    pcVar4[0x1e] = '\0';
    pcVar4[0x1f] = '\0';
    pcVar4[0x10] = '\x01';
    pcVar4[0x11] = '\0';
    pcVar4[0x12] = '\0';
    pcVar4[0x13] = '\0';
    pcVar4[0x14] = '\0';
    pcVar4[0x15] = '\0';
    pcVar4[0x16] = '\0';
    pcVar4[0x17] = '\0';
    *(undefined **)(pcVar4 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
    pcVar4[0x20] = '%';
    pcVar4[0x21] = '\0';
    pcVar4[0x22] = '\0';
    pcVar4[0x23] = '\0';
    pcVar4[0x24] = '\0';
    pcVar4[0x25] = '\0';
    pcVar4[0x26] = '\0';
    pcVar4[0x27] = -0x30;
    pcVar4[0x28] = '\0';
    pcVar4[0x29] = '\x16';
    pcVar4[0x2a] = -0x27;
    pcVar4[0x2b] = '\0';
    pcVar4[0x2c] = '\x01';
    pcVar4[0x2d] = '\0';
    pcVar4[0x2e] = '\0';
    pcVar4[0x2f] = -0x80;
    SVar16.bridgeObject = (void *)0x20;
    SVar16.str = pcVar4;
    separator.bridgeObject = (void *)0xa;
    separator.str = (char *)0xe100000000000000;
    Swift::_print(SVar16,separator);
  }
  else {
    uVar5 = 0x3a5f287361696c61;
    FUN_10013ea50(0x3a5f287361696c61,0xe900000000000029);
    if ((uVar5 & 1) == 0) {
      return;
    }
    local_f0 = *(char **)(unaff_x20 + _TtC7PostHog10PostHogSDK::queue);
    if (local_f0 == (char *)0x0) {
      return;
    }
    puVar3 = &DAT_100fafa88;
    FUN_1000f7830(&DAT_100fafa88,&DAT_100c2f410);
    _swift_initStackObject();
    uStack_f8 = 2;
    local_100 = 1;
    *(undefined8 *)(puVar3 + 0x18) = 2;
    *(undefined8 *)(puVar3 + 0x10) = 1;
    *(undefined8 *)(puVar3 + 0x20) = 0x7361696c61;
    *(undefined1 **)(puVar3 + 0x28) = &DAT_e500000000000000;
    *(undefined8 *)(puVar3 + 0x30) = param_1;
    *(undefined8 *)(puVar3 + 0x38) = param_2;
    _swift_retain(local_f0);
    _swift_bridgeObjectRetain(param_2);
    puVar6 = puVar3;
    FUN_1000f8280(puVar3);
    _swift_setDeallocating(puVar3);
    FUN_1000fb4c4(puVar3 + 0x20,&DAT_100fafa90,&DAT_100c2e6f0);
    objc_stub::lock(self);
    bVar1 = *(byte *)(unaff_x20 + lVar11);
    objc_stub::unlock(self);
    puVar3 = local_e0;
    lVar11 = PostHogConfig::storageManager;
    if ((bVar1 & 1) == 0) {
      if (DAT_101057340 == '\x01') {
        pcVar4 = &DAT_100fae660;
        FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
        _swift_allocObject();
        *(undefined8 *)(pcVar4 + 0x18) = uStack_f8;
        *(undefined8 *)(pcVar4 + 0x10) = local_100;
        *(undefined **)(pcVar4 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
        pcVar4[0x20] = 'X';
        pcVar4[0x21] = '\0';
        pcVar4[0x22] = '\0';
        pcVar4[0x23] = '\0';
        pcVar4[0x24] = '\0';
        pcVar4[0x25] = '\0';
        pcVar4[0x26] = '\0';
        pcVar4[0x27] = -0x30;
        pcVar4[0x28] = '@';
        pcVar4[0x29] = '\x15';
        pcVar4[0x2a] = -0x27;
        pcVar4[0x2b] = '\0';
        pcVar4[0x2c] = '\x01';
        pcVar4[0x2d] = '\0';
        pcVar4[0x2e] = '\0';
        pcVar4[0x2f] = -0x80;
        SVar18.bridgeObject = (void *)0x20;
        SVar18.str = pcVar4;
        separator_01.bridgeObject = (void *)0xa;
        separator_01.str = (char *)0xe100000000000000;
        Swift::_print(SVar18,separator_01);
        _swift_release(pcVar4);
      }
      lVar10 = 0;
      puVar14 = (undefined1 *)0xe000000000000000;
    }
    else {
      lVar10 = *(long *)(unaff_x20 + lVar10);
      puVar14 = auStack_d8;
      _swift_beginAccess(lVar10 + PostHogConfig::storageManager,puVar14,0,0);
      lVar11 = *(long *)(lVar10 + lVar11);
      if (lVar11 == 0) {
        lVar10 = 0;
        puVar14 = (undefined1 *)0xe000000000000000;
        puVar3 = local_e0;
      }
      else {
        lVar10 = lVar11;
        _swift_retain(lVar11);
        FUN_10015cd34();
        _swift_release(lVar11);
        puVar3 = local_e0;
      }
    }
    puVar7 = puVar6;
    FUN_100138368(puVar6);
    _swift_bridgeObjectRelease(puVar6);
    lVar11 = local_e8;
    (**(code **)(local_e8 + 0x38))(lVar13,1,1,puVar3);
    lVar8 = lVar10;
    FUN_10013ec54(lVar10,puVar14,puVar7,0,0,0,1,lVar13);
    _swift_bridgeObjectRelease(puVar7);
    FUN_1000fb4c4(lVar13,&DAT_100faf508,&DAT_100c2e2e0);
    Foundation::Date::init();
    lVar13 = 0x5f65746165726324;
    FUN_100149464(0x5f65746165726324,0xed00007361696c61,lVar10,puVar14,lVar8,lVar12);
    _swift_bridgeObjectRelease(lVar8);
    _swift_bridgeObjectRelease(puVar14);
    (**(code **)(lVar11 + 8))(lVar12,puVar3);
    pcVar4 = local_f0;
    if (lVar13 != 0) {
      FUN_100136870(lVar13,FUN_10013662c);
      FUN_1001349c8(lVar13,FUN_10010f72c);
      _swift_release(pcVar4);
      return;
    }
  }
  _swift_release(pcVar4);
  return;
}



/* Address: 0x100148988 | _TtC7PostHog10PostHogSDK::alias: */

/* Function Stack Size: 0x18 bytes */

void _TtC7PostHog10PostHogSDK::alias_(ID param_1,SEL param_2,ID param_3)

{
  FUN_10014ae5c();
  return;
}



/* Address: 0x100148994 | FUN_100148994 */

/* WARNING: Removing unreachable block (ram,0x000100148d94) */

undefined * FUN_100148994(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  _StringGuts _Var4;
  _StringGuts _Var5;
  undefined *puVar6;
  code *pcVar7;
  bool bVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long unaff_x20;
  long lVar18;
  long lVar19;
  ID self;
  undefined *local_90 [2];
  undefined *local_80 [3];
  undefined *local_68;
  
  lVar18 = _TtC7PostHog10PostHogSDK::storage;
  lVar19 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::storage);
  if (lVar19 == 0) {
    puVar10 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1000f8280(PTR___swiftEmptyArrayStorage_100eae0d8);
    return puVar10;
  }
  self = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::groupsLock);
  _swift_retain(lVar19);
  objc_stub::lock(self);
  lVar18 = *(long *)(unaff_x20 + lVar18);
  if (lVar18 != 0) {
    _swift_retain(lVar18);
    FUN_10015a838(local_80,0xc);
    _swift_release(lVar18);
    if (local_68 == (undefined *)0x0) {
      FUN_1000fb4c4(local_80,&DAT_100fae668,&DAT_100c2e4a0);
    }
    else {
      puVar10 = &DAT_100fb09d8;
      FUN_1000f7830(&DAT_100fb09d8,&DAT_100c2ee28);
      ppuVar9 = local_90;
      _swift_dynamicCast(ppuVar9,local_80,PTR___type_metadata_for_Any_100eae0c0 + 8,puVar10,6);
      if (((ulong)ppuVar9 & 1) != 0) {
        puVar10 = local_90[0];
        FUN_100138efc();
        _swift_bridgeObjectRelease(local_90[0]);
        if (puVar10 != (undefined *)0x0) goto LAB_100148abc;
      }
    }
  }
  puVar10 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1000f8280();
LAB_100148abc:
  _swift_bridgeObjectRetain(puVar10);
  _swift_bridgeObjectRetain(param_1);
  puVar11 = puVar10;
  _swift_isUniquelyReferenced_nonNull_native(puVar10);
  local_80[0] = puVar10;
  FUN_100155400(param_1,FUN_100153a88,0,puVar11,local_80);
  _swift_bridgeObjectRelease(param_1);
  puVar6 = local_80[0];
  puVar12 = local_80[0];
  _swift_retain();
  FUN_10013860c();
  _swift_release(puVar6);
  puVar11 = &DAT_100fb09d8;
  FUN_1000f7830(&DAT_100fb09d8,&DAT_100c2ee28);
  local_80[0] = puVar12;
  local_68 = puVar11;
  FUN_10015ab00(0xc,local_80);
  FUN_100004594(local_80);
  objc_stub::unlock(self);
  uVar16 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar17 = ~(-1L << (uVar16 & 0x3f));
  }
  uVar17 = uVar17 & *(ulong *)(param_1 + 0x40);
  _swift_bridgeObjectRetain(param_1);
  lVar18 = 0;
  while( true ) {
    while (uVar17 == 0) {
      bVar8 = SCARRY8(lVar18,1);
      lVar18 = lVar18 + 1;
      if (bVar8) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100148d94);
        (*pcVar7)();
      }
      if ((long)(uVar16 + 0x3f >> 6) <= lVar18) {
        _swift_release(lVar19);
        _swift_bridgeObjectRelease(puVar10);
        _swift_release(param_1);
        return puVar6;
      }
      uVar17 = ((ulong *)(param_1 + 0x40))[lVar18];
    }
    if (*(long *)(puVar10 + 0x10) == 0) break;
    uVar15 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
    uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
    uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
    uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
    uVar15 = lVar18 << 10 | LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) << 4;
    plVar1 = (long *)(*(long *)(param_1 + 0x30) + uVar15);
    plVar2 = (long *)(*(long *)(param_1 + 0x38) + uVar15);
    puVar11 = (undefined *)*plVar2;
    puVar12 = (undefined *)plVar2[1];
    lVar13 = *plVar1;
    uVar15 = plVar1[1];
    _swift_bridgeObjectRetain(puVar10);
    _swift_bridgeObjectRetain(puVar12);
    _swift_bridgeObjectRetain(uVar15);
    uVar14 = uVar15;
    FUN_100071370();
    if ((uVar14 & 1) == 0) {
      _swift_bridgeObjectRelease(puVar12);
      _swift_release(param_1);
      _swift_bridgeObjectRelease(puVar10);
      _swift_bridgeObjectRelease(uVar15);
      goto LAB_100148d2c;
    }
    uVar17 = uVar17 - 1 & uVar17;
    puVar3 = (undefined8 *)(*(long *)(puVar10 + 0x38) + lVar13 * 0x10);
    _Var4.unknown = (undefined *)*puVar3;
    _Var5.unknown = (undefined *)puVar3[1];
    _swift_bridgeObjectRetain(_Var5.unknown);
    _swift_bridgeObjectRelease(puVar10);
    _swift_bridgeObjectRelease(uVar15);
    if (_Var4.unknown == puVar11 && _Var5.unknown == puVar12) {
      _swift_bridgeObjectRelease(_Var5.unknown);
      _swift_bridgeObjectRelease(puVar12);
    }
    else {
      bVar8 = Swift::_stringCompareWithSmolCheck
                        (_Var4,_Var5,(_StringComparisonResult)(__int8)puVar11);
      _swift_bridgeObjectRelease(_Var5.unknown);
      _swift_bridgeObjectRelease(puVar12);
      if (!bVar8) {
        _swift_release(param_1);
LAB_100148d2c:
        lVar18 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::remoteConfig);
        if (lVar18 == 0) {
          _swift_release(lVar19);
          _swift_bridgeObjectRelease(puVar10);
        }
        else {
          _swift_retain(lVar18);
          FUN_10012cef4(0,0);
          _swift_release(lVar19);
          _swift_bridgeObjectRelease(puVar10);
          _swift_release(lVar18);
        }
        return puVar6;
      }
    }
  }
  _swift_release(param_1);
  goto LAB_100148d2c;
}



/* Address: 0x100148da0 | FUN_100148da0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100148da0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  byte bVar1;
  Date DVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 *puVar13;
  char *pcVar14;
  ID self;
  String SVar15;
  String SVar16;
  String SVar17;
  String separator;
  String separator_00;
  String separator_01;
  char *local_180;
  undefined *local_178;
  long local_170;
  undefined *local_168;
  long local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined *local_148 [3];
  undefined *local_130;
  undefined1 auStack_128 [160];
  undefined *local_88;
  undefined1 auStack_80 [32];
  
  local_158 = param_1;
  local_150 = param_2;
  DVar2 = Foundation::Date::typeMetadataAccessor();
  local_160 = *(long *)(DVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_160 + 0x40));
  lVar10 = (long)&local_180 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100faf508;
  FUN_1000f7830(&DAT_100faf508,&DAT_100c2e2e0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = lVar10 - extraout_x8_00;
  self = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::setupLock);
  objc_stub::lock(self);
  lVar9 = _TtC7PostHog10PostHogSDK::enabled;
  bVar1 = *(byte *)(unaff_x20 + _TtC7PostHog10PostHogSDK::enabled);
  objc_stub::unlock(self);
  lVar8 = PostHogConfig::optOut;
  if ((bVar1 & 1) == 0) {
    if (DAT_101057340 != '\x01') {
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
    pcVar14[0x20] = 'X';
    pcVar14[0x21] = '\0';
    pcVar14[0x22] = '\0';
    pcVar14[0x23] = '\0';
    pcVar14[0x24] = '\0';
    pcVar14[0x25] = '\0';
    pcVar14[0x26] = '\0';
    pcVar14[0x27] = -0x30;
    pcVar14[0x28] = '@';
    pcVar14[0x29] = '\x15';
    pcVar14[0x2a] = -0x27;
    pcVar14[0x2b] = '\0';
    pcVar14[0x2c] = '\x01';
    pcVar14[0x2d] = '\0';
    pcVar14[0x2e] = '\0';
    pcVar14[0x2f] = -0x80;
    SVar16.bridgeObject = (void *)0x20;
    SVar16.str = pcVar14;
    separator_00.bridgeObject = (void *)0xa;
    separator_00.str = (char *)0xe100000000000000;
    Swift::_print(SVar16,separator_00);
    _swift_release(pcVar14);
    return;
  }
  local_170 = _TtC7PostHog10PostHogSDK::config;
  lVar12 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::config);
  local_168 = DVar2.unknown;
  _swift_beginAccess(lVar12 + PostHogConfig::optOut,auStack_80,0,0);
  if (*(char *)(lVar12 + lVar8) == '\x01') {
    if (DAT_101057340 != '\x01') {
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
    pcVar14[0x20] = '%';
    pcVar14[0x21] = '\0';
    pcVar14[0x22] = '\0';
    pcVar14[0x23] = '\0';
    pcVar14[0x24] = '\0';
    pcVar14[0x25] = '\0';
    pcVar14[0x26] = '\0';
    pcVar14[0x27] = -0x30;
    pcVar14[0x28] = '\0';
    pcVar14[0x29] = '\x16';
    pcVar14[0x2a] = -0x27;
    pcVar14[0x2b] = '\0';
    pcVar14[0x2c] = '\x01';
    pcVar14[0x2d] = '\0';
    pcVar14[0x2e] = '\0';
    pcVar14[0x2f] = -0x80;
    SVar15.bridgeObject = (void *)0x20;
    SVar15.str = pcVar14;
    separator.bridgeObject = (void *)0xa;
    separator.str = (char *)0xe100000000000000;
    Swift::_print(SVar15,separator);
    goto LAB_100149440;
  }
  pcVar14 = *(char **)(unaff_x20 + _TtC7PostHog10PostHogSDK::queue);
  if (pcVar14 == (char *)0x0) {
    return;
  }
  puVar3 = &DAT_100fae678;
  local_178 = param_5;
  FUN_1000f7830(&DAT_100fae678,&DAT_100c2e190);
  _swift_initStackObject();
  *(undefined8 *)(puVar3 + 0x18) = 4;
  *(undefined8 *)(puVar3 + 0x10) = 2;
  *(undefined8 *)(puVar3 + 0x20) = 0x745f70756f726724;
  puVar5 = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined8 *)(puVar3 + 0x28) = 0xeb00000000657079;
  *(undefined8 *)(puVar3 + 0x30) = local_158;
  *(undefined8 *)(puVar3 + 0x38) = local_150;
  *(undefined **)(puVar3 + 0x48) = puVar5;
  *(undefined8 *)(puVar3 + 0x50) = 0x6b5f70756f726724;
  *(undefined **)(puVar3 + 0x78) = puVar5;
  *(undefined8 *)(puVar3 + 0x58) = 0xea00000000007965;
  *(undefined8 *)(puVar3 + 0x60) = param_3;
  *(undefined8 *)(puVar3 + 0x68) = param_4;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(param_4);
  local_180 = pcVar14;
  _swift_retain(pcVar14);
  puVar4 = puVar3;
  FUN_1000f8154();
  _swift_setDeallocating(puVar3);
  puVar5 = &DAT_100fae490;
  FUN_1000f7830(&DAT_100fae490,&DAT_100c2de60);
  _swift_arrayDestroy(puVar3 + 0x20,2,puVar5);
  puVar3 = local_178;
  puVar6 = local_178;
  local_88 = puVar4;
  FUN_10016ead0();
  puVar5 = local_168;
  if (puVar6 != (undefined *)0x0) {
    puVar7 = &DAT_100fae898;
    FUN_1000f7830(&DAT_100fae898,&DAT_100c2e4e0);
    local_148[0] = puVar6;
    local_130 = puVar7;
    if (puVar7 == (undefined *)0x0) {
      FUN_1000fb4c4(local_148,&DAT_100fae668,&DAT_100c2e4a0);
      FUN_10016fcc4(auStack_128,0x735f70756f726724,0xea00000000007465);
      FUN_1000fb4c4(auStack_128,&DAT_100fae668,&DAT_100c2e4a0);
    }
    else {
      FUN_100011080(local_148,auStack_128);
      puVar6 = puVar4;
      _swift_isUniquelyReferenced_nonNull_native(puVar4);
      local_148[0] = puVar4;
      FUN_10016fe74(auStack_128,0x735f70756f726724,0xea00000000007465,puVar6);
      local_88 = local_148[0];
    }
  }
  FUN_100142758(local_158,local_150,puVar3);
  objc_stub::lock(self);
  bVar1 = *(byte *)(unaff_x20 + lVar9);
  objc_stub::unlock(self);
  lVar9 = PostHogConfig::storageManager;
  if ((bVar1 & 1) == 0) {
    if (DAT_101057340 == '\x01') {
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
      pcVar14[0x20] = 'X';
      pcVar14[0x21] = '\0';
      pcVar14[0x22] = '\0';
      pcVar14[0x23] = '\0';
      pcVar14[0x24] = '\0';
      pcVar14[0x25] = '\0';
      pcVar14[0x26] = '\0';
      pcVar14[0x27] = -0x30;
      pcVar14[0x28] = '@';
      pcVar14[0x29] = '\x15';
      pcVar14[0x2a] = -0x27;
      pcVar14[0x2b] = '\0';
      pcVar14[0x2c] = '\x01';
      pcVar14[0x2d] = '\0';
      pcVar14[0x2e] = '\0';
      pcVar14[0x2f] = -0x80;
      SVar17.bridgeObject = (void *)0x20;
      SVar17.str = pcVar14;
      separator_01.bridgeObject = (void *)0xa;
      separator_01.str = (char *)0xe100000000000000;
      Swift::_print(SVar17,separator_01);
      _swift_release(pcVar14);
    }
LAB_100149308:
    lVar8 = 0;
    puVar13 = (undefined1 *)0xe000000000000000;
  }
  else {
    lVar8 = *(long *)(unaff_x20 + local_170);
    puVar13 = auStack_128;
    _swift_beginAccess(lVar8 + PostHogConfig::storageManager,puVar13,0,0);
    lVar9 = *(long *)(lVar8 + lVar9);
    if (lVar9 == 0) goto LAB_100149308;
    lVar8 = lVar9;
    _swift_retain(lVar9);
    FUN_10015cd34();
    _swift_release(lVar9);
  }
  puVar3 = local_88;
  lVar9 = local_160;
  (**(code **)(local_160 + 0x38))(lVar11,1,1,puVar5);
  lVar12 = lVar8;
  FUN_10013ec54(lVar8,puVar13,puVar3,0,0,0,1,lVar11);
  FUN_1000fb4c4(lVar11,&DAT_100faf508,&DAT_100c2e2e0);
  Foundation::Date::init();
  lVar11 = 0x646970756f726724;
  FUN_100149464(0x646970756f726724,0xee00796669746e65,lVar8,puVar13,lVar12,lVar10);
  _swift_bridgeObjectRelease(lVar12);
  _swift_bridgeObjectRelease(puVar13);
  (**(code **)(lVar9 + 8))(lVar10,puVar5);
  pcVar14 = local_180;
  if (lVar11 == 0) {
    _swift_bridgeObjectRelease(puVar3);
    pcVar14 = local_180;
  }
  else {
    FUN_100136870(lVar11,FUN_10013662c);
    FUN_1001349c8(lVar11,FUN_10010f72c);
    _swift_bridgeObjectRelease(puVar3);
  }
LAB_100149440:
  _swift_release(pcVar14);
  return;
}



/* Address: 0x100149464 | FUN_100149464 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

char * FUN_100149464(char *param_1,_StringGuts param_2,undefined8 param_3,undefined *param_4,
                    Dictionary<undefined,undefined> param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  undefined *puVar7;
  NSDictionary *pNVar8;
  class_t *pcVar9;
  class_t *pcVar10;
  Date DVar11;
  char *pcVar12;
  undefined *extraout_x1;
  _StringGuts _Var13;
  char *pcVar14;
  long extraout_x8;
  long lVar15;
  long unaff_x20;
  ID IVar16;
  ID self;
  void *pvVar17;
  undefined1 *puVar18;
  char *pcVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String separator;
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  long local_b0;
  char *local_a8;
  undefined *local_a0;
  char *local_88;
  void *local_80;
  ID local_78;
  objc_super local_70;
  
  local_b8 = param_6;
  local_a0 = param_4;
  local_a8 = (char *)Foundation::UUID::typeMetadataAccessor();
  lVar15 = *(long *)(local_a8 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar15 + 0x40));
  puVar18 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_b0 = _TtC7PostHog10PostHogSDK::config;
  IVar16 = *(ID *)(*(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::config) +
                  PostHogConfig::_propertiesSanitizer);
  if (IVar16 == 0) {
    _swift_bridgeObjectRetain(param_5.unknown);
  }
  else {
    _swift_unknownObjectRetain(IVar16);
    param_4 = PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218;
    pNVar8 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
    objc_stub::sanitize_(IVar16,pNVar8);
    param_5 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
    _swift_unknownObjectRelease(IVar16);
  }
  if (DAT_100fb3060 != -1) {
    _swift_once(&DAT_100fb3060,FUN_100173f28);
  }
  FUN_100173f94(puVar18);
  pcVar9 = (class_t *)0x0;
  FUN_1001145d4();
  pcVar10 = pcVar9;
  _objc_allocWithZone();
  puVar7 = local_a0;
  puVar1 = (undefined8 *)((long)&pcVar10->isa + PostHogEvent::apiKey);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar2 = (undefined8 *)((long)&pcVar10->isa + PostHogEvent::event);
  *puVar2 = param_1;
  puVar2[1] = param_2.unknown;
  puVar2 = (undefined8 *)((long)&pcVar10->isa + PostHogEvent::distinctId);
  *puVar2 = param_3;
  puVar2[1] = local_a0;
  *(undefined **)((long)&pcVar10->isa + PostHogEvent::properties) = param_5.unknown;
  lVar5 = PostHogEvent::timestamp;
  DVar11 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar11.unknown + -8) + 0x10))
            ((long)&pcVar10->isa + lVar5,local_b8,DVar11.unknown);
  pcVar6 = local_a8;
  pcVar12 = local_a8;
  (**(code **)(lVar15 + 0x10))((long)&pcVar10->isa + PostHogEvent::uuid,puVar18);
  *puVar1 = 0;
  puVar1[1] = 0;
  local_70.receiver = (ID)pcVar10;
  local_70.super_class = pcVar9;
  _swift_bridgeObjectRetain(param_2.unknown);
  _swift_bridgeObjectRetain(puVar7);
  IVar16 = _objc_msgSendSuper2(&local_70,"init");
  (**(code **)(lVar15 + 8))(puVar18,pcVar6);
  lVar15 = *(long *)(*(long *)(unaff_x20 + local_b0) + PostHogConfig::beforeSend);
  self = *(ID *)(lVar15 + 0x10);
  local_78 = IVar16;
  _swift_retain(lVar15);
  objc_stub::lock(self);
  pcVar3 = *(code **)(lVar15 + 0x18);
  uVar4 = *(undefined8 *)(lVar15 + 0x20);
  _swift_retain(uVar4);
  objc_stub::unlock(self);
  _Var13.unknown = extraout_x1;
  (*pcVar3)(&local_88,&local_78);
  _swift_release(lVar15);
  _swift_release(uVar4);
  pcVar6 = local_88;
  if (local_88 == (char *)0x0) {
    local_88 = (char *)0x0;
    local_80 = (void *)0xe000000000000000;
    Swift::_StringGuts::grow(0x1c,_Var13);
    _swift_bridgeObjectRelease(local_80);
    local_88 = (char *)0x20676f4874736f50;
    local_80 = (void *)0xee0020746e657665;
    SVar20.bridgeObject = param_2.unknown;
    SVar20.str = param_1;
    SVar25.bridgeObject = param_4;
    SVar25.str = pcVar12;
    Swift::String::append(SVar20,SVar25);
    SVar21.bridgeObject = (void *)0xec00000064657070;
    SVar21.str = (char *)0x6f72642073617720;
    SVar26.bridgeObject = param_4;
    SVar26.str = pcVar12;
    Swift::String::append(SVar21,SVar26);
    pvVar17 = local_80;
    pcVar19 = local_88;
    _swift_bridgeObjectRetain(param_2.unknown);
    FUN_100114774();
    if (((uint)param_1 & 0xff) != 10) {
      local_88 = (char *)0x0;
      local_80 = (void *)0xe000000000000000;
      Swift::_StringGuts::grow(0x27,param_2);
      _swift_bridgeObjectRelease(local_80);
      SVar22.bridgeObject = (void *)0x8000000100d93530;
      SVar22.str = (char *)0xd000000000000025;
      SVar27.bridgeObject = param_4;
      SVar27.str = pcVar12;
      local_88 = pcVar19;
      local_80 = pvVar17;
      Swift::String::append(SVar22,SVar27);
      pvVar17 = local_80;
      pcVar19 = local_88;
    }
    if (DAT_101057340 == '\x01') {
      pcVar12 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      pcVar14 = (char *)0x7;
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
      local_88 = (char *)0x676f4874736f505b;
      local_80 = (void *)0xea0000000000205d;
      SVar23.bridgeObject = pvVar17;
      SVar23.str = pcVar19;
      SVar28.bridgeObject = param_4;
      SVar28.str = pcVar14;
      Swift::String::append(SVar23,SVar28);
      *(undefined **)(pcVar12 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      *(char **)(pcVar12 + 0x20) = local_88;
      *(void **)(pcVar12 + 0x28) = local_80;
      SVar24.bridgeObject = (void *)0x20;
      SVar24.str = pcVar12;
      separator.bridgeObject = (void *)0xa;
      separator.str = (char *)0xe100000000000000;
      Swift::_print(SVar24,separator);
      _swift_release(pcVar12);
    }
    _swift_bridgeObjectRelease(pvVar17);
  }
  return pcVar6;
}



/* Address: 0x1001498d8 | FUN_1001498d8 */

void FUN_1001498d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  long lVar2;
  char *pcVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  ID self;
  long lVar7;
  String SVar8;
  String SVar9;
  String separator;
  String separator_00;
  undefined1 auStack_68 [24];
  
  self = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::setupLock);
  objc_stub::lock(self);
  bVar1 = *(byte *)(unaff_x20 + _TtC7PostHog10PostHogSDK::enabled);
  objc_stub::unlock(self);
  lVar2 = PostHogConfig::optOut;
  if ((bVar1 & 1) == 0) {
    if (DAT_101057340 == '\x01') {
      pcVar3 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      _swift_allocObject();
      pcVar3[0x18] = '\x02';
      pcVar3[0x19] = '\0';
      pcVar3[0x1a] = '\0';
      pcVar3[0x1b] = '\0';
      pcVar3[0x1c] = '\0';
      pcVar3[0x1d] = '\0';
      pcVar3[0x1e] = '\0';
      pcVar3[0x1f] = '\0';
      pcVar3[0x10] = '\x01';
      pcVar3[0x11] = '\0';
      pcVar3[0x12] = '\0';
      pcVar3[0x13] = '\0';
      pcVar3[0x14] = '\0';
      pcVar3[0x15] = '\0';
      pcVar3[0x16] = '\0';
      pcVar3[0x17] = '\0';
      *(undefined **)(pcVar3 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      pcVar3[0x20] = 'X';
      pcVar3[0x21] = '\0';
      pcVar3[0x22] = '\0';
      pcVar3[0x23] = '\0';
      pcVar3[0x24] = '\0';
      pcVar3[0x25] = '\0';
      pcVar3[0x26] = '\0';
      pcVar3[0x27] = -0x30;
      pcVar3[0x28] = '@';
      pcVar3[0x29] = '\x15';
      pcVar3[0x2a] = -0x27;
      pcVar3[0x2b] = '\0';
      pcVar3[0x2c] = '\x01';
      pcVar3[0x2d] = '\0';
      pcVar3[0x2e] = '\0';
      pcVar3[0x2f] = -0x80;
      SVar9.bridgeObject = (void *)0x20;
      SVar9.str = pcVar3;
      separator_00.bridgeObject = (void *)0xa;
      separator_00.str = (char *)0xe100000000000000;
      Swift::_print(SVar9,separator_00);
      _swift_release(pcVar3);
      return;
    }
  }
  else {
    lVar7 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::config);
    _swift_beginAccess(lVar7 + PostHogConfig::optOut,auStack_68,0,0);
    if (*(char *)(lVar7 + lVar2) == '\x01') {
      if (DAT_101057340 == '\x01') {
        pcVar3 = &DAT_100fae660;
        FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
        _swift_allocObject();
        pcVar3[0x18] = '\x02';
        pcVar3[0x19] = '\0';
        pcVar3[0x1a] = '\0';
        pcVar3[0x1b] = '\0';
        pcVar3[0x1c] = '\0';
        pcVar3[0x1d] = '\0';
        pcVar3[0x1e] = '\0';
        pcVar3[0x1f] = '\0';
        pcVar3[0x10] = '\x01';
        pcVar3[0x11] = '\0';
        pcVar3[0x12] = '\0';
        pcVar3[0x13] = '\0';
        pcVar3[0x14] = '\0';
        pcVar3[0x15] = '\0';
        pcVar3[0x16] = '\0';
        pcVar3[0x17] = '\0';
        *(undefined **)(pcVar3 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
        pcVar3[0x20] = '%';
        pcVar3[0x21] = '\0';
        pcVar3[0x22] = '\0';
        pcVar3[0x23] = '\0';
        pcVar3[0x24] = '\0';
        pcVar3[0x25] = '\0';
        pcVar3[0x26] = '\0';
        pcVar3[0x27] = -0x30;
        pcVar3[0x28] = '\0';
        pcVar3[0x29] = '\x16';
        pcVar3[0x2a] = -0x27;
        pcVar3[0x2b] = '\0';
        pcVar3[0x2c] = '\x01';
        pcVar3[0x2d] = '\0';
        pcVar3[0x2e] = '\0';
        pcVar3[0x2f] = -0x80;
        SVar8.bridgeObject = (void *)0x20;
        SVar8.str = pcVar3;
        separator.bridgeObject = (void *)0xa;
        separator.str = (char *)0xe100000000000000;
        Swift::_print(SVar8,separator);
        _swift_release(pcVar3);
      }
    }
    else {
      uVar4 = 0;
      FUN_10013ea50(0xd000000000000020,0x8000000100d92e60);
      if ((uVar4 & 1) != 0) {
        puVar5 = &DAT_100fafa88;
        FUN_1000f7830(&DAT_100fafa88,&DAT_100c2f410);
        _swift_initStackObject();
        *(undefined8 *)(puVar5 + 0x18) = 2;
        *(undefined8 *)(puVar5 + 0x10) = 1;
        *(undefined8 *)(puVar5 + 0x20) = param_1;
        *(undefined8 *)(puVar5 + 0x28) = param_2;
        *(undefined8 *)(puVar5 + 0x30) = param_3;
        *(undefined8 *)(puVar5 + 0x38) = param_4;
        _swift_bridgeObjectRetain(param_2);
        _swift_bridgeObjectRetain(param_4);
        puVar6 = puVar5;
        FUN_1000f8280(puVar5);
        _swift_setDeallocating(puVar5);
        FUN_1000fb4c4(puVar5 + 0x20,&DAT_100fafa90,&DAT_100c2e6f0);
        puVar5 = puVar6;
        FUN_100148994(puVar6);
        _swift_bridgeObjectRelease(puVar6);
        _swift_bridgeObjectRelease(puVar5);
        FUN_100148da0(param_1,param_2,param_3,param_4,0);
        FUN_100151c48();
      }
    }
  }
  return;
}



/* Address: 0x100149b84 | _TtC7PostHog10PostHogSDK::groupWithType:key: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void _TtC7PostHog10PostHogSDK::groupWithType_key_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  String SVar1;
  String SVar2;
  
  SVar1 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  FUN_1001498d8(SVar1.str,SVar1.bridgeObject,SVar2.str,SVar2.bridgeObject);
  _swift_bridgeObjectRelease(SVar1.bridgeObject);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  return;
}



/* Address: 0x100149c08 | FUN_100149c08 */

void FUN_100149c08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  byte bVar1;
  long lVar2;
  char *pcVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  ID self;
  long lVar7;
  String SVar8;
  String SVar9;
  String separator;
  String separator_00;
  undefined1 auStack_78 [24];
  
  self = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::setupLock);
  objc_stub::lock(self);
  bVar1 = *(byte *)(unaff_x20 + _TtC7PostHog10PostHogSDK::enabled);
  objc_stub::unlock(self);
  lVar2 = PostHogConfig::optOut;
  if ((bVar1 & 1) == 0) {
    if (DAT_101057340 == '\x01') {
      pcVar3 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      _swift_allocObject();
      pcVar3[0x18] = '\x02';
      pcVar3[0x19] = '\0';
      pcVar3[0x1a] = '\0';
      pcVar3[0x1b] = '\0';
      pcVar3[0x1c] = '\0';
      pcVar3[0x1d] = '\0';
      pcVar3[0x1e] = '\0';
      pcVar3[0x1f] = '\0';
      pcVar3[0x10] = '\x01';
      pcVar3[0x11] = '\0';
      pcVar3[0x12] = '\0';
      pcVar3[0x13] = '\0';
      pcVar3[0x14] = '\0';
      pcVar3[0x15] = '\0';
      pcVar3[0x16] = '\0';
      pcVar3[0x17] = '\0';
      *(undefined **)(pcVar3 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      pcVar3[0x20] = 'X';
      pcVar3[0x21] = '\0';
      pcVar3[0x22] = '\0';
      pcVar3[0x23] = '\0';
      pcVar3[0x24] = '\0';
      pcVar3[0x25] = '\0';
      pcVar3[0x26] = '\0';
      pcVar3[0x27] = -0x30;
      pcVar3[0x28] = '@';
      pcVar3[0x29] = '\x15';
      pcVar3[0x2a] = -0x27;
      pcVar3[0x2b] = '\0';
      pcVar3[0x2c] = '\x01';
      pcVar3[0x2d] = '\0';
      pcVar3[0x2e] = '\0';
      pcVar3[0x2f] = -0x80;
      SVar9.bridgeObject = (void *)0x20;
      SVar9.str = pcVar3;
      separator_00.bridgeObject = (void *)0xa;
      separator_00.str = (char *)0xe100000000000000;
      Swift::_print(SVar9,separator_00);
      _swift_release(pcVar3);
      return;
    }
  }
  else {
    lVar7 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::config);
    _swift_beginAccess(lVar7 + PostHogConfig::optOut,auStack_78,0,0);
    if (*(char *)(lVar7 + lVar2) == '\x01') {
      if (DAT_101057340 == '\x01') {
        pcVar3 = &DAT_100fae660;
        FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
        _swift_allocObject();
        pcVar3[0x18] = '\x02';
        pcVar3[0x19] = '\0';
        pcVar3[0x1a] = '\0';
        pcVar3[0x1b] = '\0';
        pcVar3[0x1c] = '\0';
        pcVar3[0x1d] = '\0';
        pcVar3[0x1e] = '\0';
        pcVar3[0x1f] = '\0';
        pcVar3[0x10] = '\x01';
        pcVar3[0x11] = '\0';
        pcVar3[0x12] = '\0';
        pcVar3[0x13] = '\0';
        pcVar3[0x14] = '\0';
        pcVar3[0x15] = '\0';
        pcVar3[0x16] = '\0';
        pcVar3[0x17] = '\0';
        *(undefined **)(pcVar3 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
        pcVar3[0x20] = '%';
        pcVar3[0x21] = '\0';
        pcVar3[0x22] = '\0';
        pcVar3[0x23] = '\0';
        pcVar3[0x24] = '\0';
        pcVar3[0x25] = '\0';
        pcVar3[0x26] = '\0';
        pcVar3[0x27] = -0x30;
        pcVar3[0x28] = '\0';
        pcVar3[0x29] = '\x16';
        pcVar3[0x2a] = -0x27;
        pcVar3[0x2b] = '\0';
        pcVar3[0x2c] = '\x01';
        pcVar3[0x2d] = '\0';
        pcVar3[0x2e] = '\0';
        pcVar3[0x2f] = -0x80;
        SVar8.bridgeObject = (void *)0x20;
        SVar8.str = pcVar3;
        separator.bridgeObject = (void *)0xa;
        separator.str = (char *)0xe100000000000000;
        Swift::_print(SVar8,separator);
        _swift_release(pcVar3);
      }
    }
    else {
      uVar4 = 0;
      FUN_10013ea50(0xd000000000000020,0x8000000100d92e60);
      if ((uVar4 & 1) != 0) {
        puVar5 = &DAT_100fafa88;
        FUN_1000f7830(&DAT_100fafa88,&DAT_100c2f410);
        _swift_initStackObject();
        *(undefined8 *)(puVar5 + 0x18) = 2;
        *(undefined8 *)(puVar5 + 0x10) = 1;
        *(undefined8 *)(puVar5 + 0x20) = param_1;
        *(undefined8 *)(puVar5 + 0x28) = param_2;
        *(undefined8 *)(puVar5 + 0x30) = param_3;
        *(undefined8 *)(puVar5 + 0x38) = param_4;
        _swift_bridgeObjectRetain(param_2);
        _swift_bridgeObjectRetain(param_4);
        puVar6 = puVar5;
        FUN_1000f8280(puVar5);
        _swift_setDeallocating(puVar5);
        FUN_1000fb4c4(puVar5 + 0x20,&DAT_100fafa90,&DAT_100c2e6f0);
        puVar5 = puVar6;
        FUN_100148994(puVar6);
        _swift_bridgeObjectRelease(puVar6);
        _swift_bridgeObjectRelease(puVar5);
        FUN_10016ead0(param_5);
        FUN_100148da0(param_1,param_2,param_3,param_4,param_5);
        _swift_bridgeObjectRelease(param_5);
        FUN_100151c48();
      }
    }
  }
  return;
}



/* Address: 0x100149ed8 | _TtC7PostHog10PostHogSDK::groupWithType:key:groupProperties: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

void _TtC7PostHog10PostHogSDK::groupWithType_key_groupProperties_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  Dictionary<undefined,undefined> DVar1;
  String SVar2;
  String SVar3;
  
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  SVar3 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  DVar1.unknown = (undefined *)0x0;
  if (param_5 != 0) {
    DVar1 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  }
  FUN_100149c08(SVar2.str,SVar2.bridgeObject,SVar3.str,SVar3.bridgeObject,DVar1.unknown);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  _swift_bridgeObjectRelease(SVar3.bridgeObject);
  _swift_bridgeObjectRelease(DVar1.unknown);
  return;
}



/* Address: 0x100149f9c | FUN_100149f9c */

void FUN_100149f9c(undefined8 param_1)

{
  FUN_10014a018(param_1,1);
  return;
}



/* Address: 0x100149fa4 | _TtC7PostHog10PostHogSDK::setPersonPropertiesForFlags: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC7PostHog10PostHogSDK::setPersonPropertiesForFlags_(ID param_1,SEL param_2,ID param_3)

{
  Dictionary<undefined,undefined> DVar1;
  
  DVar1 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  FUN_10014a018(DVar1.unknown,1);
  _swift_bridgeObjectRelease(DVar1.unknown);
  return;
}



/* Address: 0x10014a018 | FUN_10014a018 */

void FUN_10014a018(undefined *param_1,ulong param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  char *pcVar4;
  ID IVar5;
  String SVar6;
  String separator;
  char local_51;
  
  IVar5 = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::setupLock);
  objc_stub::lock(IVar5);
  bVar1 = *(byte *)(unaff_x20 + _TtC7PostHog10PostHogSDK::enabled);
  objc_stub::unlock(IVar5);
  if ((bVar1 & 1) == 0) {
    if (DAT_101057340 == '\x01') {
      pcVar4 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      _swift_allocObject();
      pcVar4[0x18] = '\x02';
      pcVar4[0x19] = '\0';
      pcVar4[0x1a] = '\0';
      pcVar4[0x1b] = '\0';
      pcVar4[0x1c] = '\0';
      pcVar4[0x1d] = '\0';
      pcVar4[0x1e] = '\0';
      pcVar4[0x1f] = '\0';
      pcVar4[0x10] = '\x01';
      pcVar4[0x11] = '\0';
      pcVar4[0x12] = '\0';
      pcVar4[0x13] = '\0';
      pcVar4[0x14] = '\0';
      pcVar4[0x15] = '\0';
      pcVar4[0x16] = '\0';
      pcVar4[0x17] = '\0';
      *(undefined **)(pcVar4 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      pcVar4[0x20] = 'X';
      pcVar4[0x21] = '\0';
      pcVar4[0x22] = '\0';
      pcVar4[0x23] = '\0';
      pcVar4[0x24] = '\0';
      pcVar4[0x25] = '\0';
      pcVar4[0x26] = '\0';
      pcVar4[0x27] = -0x30;
      pcVar4[0x28] = '@';
      pcVar4[0x29] = '\x15';
      pcVar4[0x2a] = -0x27;
      pcVar4[0x2b] = '\0';
      pcVar4[0x2c] = '\x01';
      pcVar4[0x2d] = '\0';
      pcVar4[0x2e] = '\0';
      pcVar4[0x2f] = -0x80;
      SVar6.bridgeObject = (void *)0x20;
      SVar6.str = pcVar4;
      separator.bridgeObject = (void *)0xa;
      separator.str = (char *)0xe100000000000000;
      Swift::_print(SVar6,separator);
      goto LAB_10014a1f0;
    }
  }
  else {
    FUN_10016ead0();
    if (param_1 == (undefined *)0x0) {
      param_1 = PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_1000f8154();
      lVar3 = *(long *)(param_1 + 0x10);
      lVar2 = _TtC7PostHog10PostHogSDK::remoteConfig;
    }
    else {
      lVar3 = *(long *)(param_1 + 0x10);
      lVar2 = _TtC7PostHog10PostHogSDK::remoteConfig;
    }
    _TtC7PostHog10PostHogSDK::remoteConfig = lVar2;
    if (lVar3 == 0) {
      _swift_bridgeObjectRelease();
      return;
    }
    lVar3 = *(long *)(unaff_x20 + lVar2);
    if (lVar3 == 0) {
      _swift_bridgeObjectRelease();
    }
    else {
      IVar5 = *(ID *)(lVar3 + 0x170);
      _swift_retain(lVar3);
      objc_stub::lock(IVar5);
      FUN_100130030(&local_51,lVar3,param_1);
      objc_stub::unlock(IVar5);
      if (local_51 == '\x01') {
        FUN_1001347d0(*(undefined8 *)(lVar3 + 0x1a8));
        _swift_release(lVar3);
        _swift_bridgeObjectRelease(param_1);
      }
      else {
        _swift_bridgeObjectRelease(param_1);
        _swift_release(lVar3);
      }
    }
    if (((param_2 & 1) != 0) && (pcVar4 = *(char **)(unaff_x20 + lVar2), pcVar4 != (char *)0x0)) {
      _swift_retain(pcVar4);
      FUN_10012cef4(0,0);
LAB_10014a1f0:
      _swift_release(pcVar4);
      return;
    }
  }
  return;
}



/* Address: 0x10014a228 | _TtC7PostHog10PostHogSDK::setPersonPropertiesForFlagsWithProperties:reloadFeatureFlags: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x1c bytes */

void _TtC7PostHog10PostHogSDK::setPersonPropertiesForFlagsWithProperties_reloadFeatureFlags_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  Dictionary<undefined,undefined> DVar1;
  
  DVar1 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  FUN_10014a018(DVar1.unknown,param_4);
  _swift_bridgeObjectRelease(DVar1.unknown);
  return;
}



/* Address: 0x10014a2a0 | FUN_10014a2a0 */

void FUN_10014a2a0(void)

{
  byte bVar1;
  long lVar2;
  ID self;
  long lVar3;
  long unaff_x20;
  char *pcVar4;
  String SVar5;
  String separator;
  
  self = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::setupLock);
  objc_stub::lock(self);
  bVar1 = *(byte *)(unaff_x20 + _TtC7PostHog10PostHogSDK::enabled);
  objc_stub::unlock(self);
  lVar2 = _TtC7PostHog10PostHogSDK::remoteConfig;
  if ((bVar1 & 1) == 0) {
    if (DAT_101057340 == '\x01') {
      pcVar4 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      _swift_allocObject();
      pcVar4[0x18] = '\x02';
      pcVar4[0x19] = '\0';
      pcVar4[0x1a] = '\0';
      pcVar4[0x1b] = '\0';
      pcVar4[0x1c] = '\0';
      pcVar4[0x1d] = '\0';
      pcVar4[0x1e] = '\0';
      pcVar4[0x1f] = '\0';
      pcVar4[0x10] = '\x01';
      pcVar4[0x11] = '\0';
      pcVar4[0x12] = '\0';
      pcVar4[0x13] = '\0';
      pcVar4[0x14] = '\0';
      pcVar4[0x15] = '\0';
      pcVar4[0x16] = '\0';
      pcVar4[0x17] = '\0';
      *(undefined **)(pcVar4 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      pcVar4[0x20] = 'X';
      pcVar4[0x21] = '\0';
      pcVar4[0x22] = '\0';
      pcVar4[0x23] = '\0';
      pcVar4[0x24] = '\0';
      pcVar4[0x25] = '\0';
      pcVar4[0x26] = '\0';
      pcVar4[0x27] = -0x30;
      pcVar4[0x28] = '@';
      pcVar4[0x29] = '\x15';
      pcVar4[0x2a] = -0x27;
      pcVar4[0x2b] = '\0';
      pcVar4[0x2c] = '\x01';
      pcVar4[0x2d] = '\0';
      pcVar4[0x2e] = '\0';
      pcVar4[0x2f] = -0x80;
      SVar5.bridgeObject = (void *)0x20;
      SVar5.str = pcVar4;
      separator.bridgeObject = (void *)0xa;
      separator.str = (char *)0xe100000000000000;
      Swift::_print(SVar5,separator);
LAB_10014a3a4:
      _swift_release(pcVar4);
      return;
    }
  }
  else {
    lVar3 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::remoteConfig);
    if (lVar3 != 0) {
      _swift_retain(lVar3);
      FUN_10013021c();
      _swift_release(lVar3);
      pcVar4 = *(char **)(unaff_x20 + lVar2);
      if (pcVar4 != (char *)0x0) {
        _swift_retain(pcVar4);
        FUN_10012cef4(0,0);
        goto LAB_10014a3a4;
      }
    }
  }
  return;
}



/* Address: 0x10014a3c8 | _TtC7PostHog10PostHogSDK::resetPersonPropertiesForFlags */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC7PostHog10PostHogSDK::resetPersonPropertiesForFlags(ID param_1,SEL param_2)

{
  FUN_10014a2a0(param_1);
  return;
}



/* Address: 0x10014a3f0 | FUN_10014a3f0 */

void FUN_10014a3f0(ulong param_1)

{
  byte bVar1;
  long lVar2;
  long unaff_x20;
  char *pcVar3;
  ID self;
  long lVar4;
  String SVar5;
  String separator;
  
  self = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::setupLock);
  objc_stub::lock(self);
  bVar1 = *(byte *)(unaff_x20 + _TtC7PostHog10PostHogSDK::enabled);
  objc_stub::unlock(self);
  lVar2 = _TtC7PostHog10PostHogSDK::remoteConfig;
  if ((bVar1 & 1) == 0) {
    if (DAT_101057340 != '\x01') {
      return;
    }
    pcVar3 = &DAT_100fae660;
    FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
    _swift_allocObject();
    pcVar3[0x18] = '\x02';
    pcVar3[0x19] = '\0';
    pcVar3[0x1a] = '\0';
    pcVar3[0x1b] = '\0';
    pcVar3[0x1c] = '\0';
    pcVar3[0x1d] = '\0';
    pcVar3[0x1e] = '\0';
    pcVar3[0x1f] = '\0';
    pcVar3[0x10] = '\x01';
    pcVar3[0x11] = '\0';
    pcVar3[0x12] = '\0';
    pcVar3[0x13] = '\0';
    pcVar3[0x14] = '\0';
    pcVar3[0x15] = '\0';
    pcVar3[0x16] = '\0';
    pcVar3[0x17] = '\0';
    *(undefined **)(pcVar3 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
    pcVar3[0x20] = 'X';
    pcVar3[0x21] = '\0';
    pcVar3[0x22] = '\0';
    pcVar3[0x23] = '\0';
    pcVar3[0x24] = '\0';
    pcVar3[0x25] = '\0';
    pcVar3[0x26] = '\0';
    pcVar3[0x27] = -0x30;
    pcVar3[0x28] = '@';
    pcVar3[0x29] = '\x15';
    pcVar3[0x2a] = -0x27;
    pcVar3[0x2b] = '\0';
    pcVar3[0x2c] = '\x01';
    pcVar3[0x2d] = '\0';
    pcVar3[0x2e] = '\0';
    pcVar3[0x2f] = -0x80;
    SVar5.bridgeObject = (void *)0x20;
    SVar5.str = pcVar3;
    separator.bridgeObject = (void *)0xa;
    separator.str = (char *)0xe100000000000000;
    Swift::_print(SVar5,separator);
  }
  else {
    lVar4 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::remoteConfig);
    if (lVar4 != 0) {
      _swift_retain(lVar4);
      FUN_10013021c();
      _swift_release(lVar4);
    }
    if (((param_1 & 1) == 0) || (pcVar3 = *(char **)(unaff_x20 + lVar2), pcVar3 == (char *)0x0)) {
      return;
    }
    _swift_retain(pcVar3);
    FUN_10012cef4(0,0);
  }
  _swift_release(pcVar3);
  return;
}



/* Address: 0x10014a530 | _TtC7PostHog10PostHogSDK::resetPersonPropertiesForFlagsWithReloadFeatureFlags: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x14 bytes */

void _TtC7PostHog10PostHogSDK::resetPersonPropertiesForFlagsWithReloadFeatureFlags_
               (ID param_1,SEL param_2,bool param_3)

{
  FUN_10014a3f0(param_3);
  return;
}



/* Address: 0x10014a560 | FUN_10014a560 */

void FUN_10014a560(void)

{
  FUN_10014a5fc();
  return;
}



/* Address: 0x10014a568 | _TtC7PostHog10PostHogSDK::setGroupPropertiesForFlags:properties: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void _TtC7PostHog10PostHogSDK::setGroupPropertiesForFlags_properties_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  Dictionary<undefined,undefined> DVar1;
  String SVar2;
  
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  DVar1 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  FUN_10014a5fc(SVar2.str,SVar2.bridgeObject,DVar1.unknown,1);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  _swift_bridgeObjectRelease(DVar1.unknown);
  return;
}



/* Address: 0x10014a5fc | FUN_10014a5fc */

void FUN_10014a5fc(undefined8 param_1,undefined8 param_2,undefined *param_3,ulong param_4)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  char *pcVar4;
  ID IVar5;
  String SVar6;
  String separator;
  
  IVar5 = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::setupLock);
  objc_stub::lock(IVar5);
  bVar1 = *(byte *)(unaff_x20 + _TtC7PostHog10PostHogSDK::enabled);
  objc_stub::unlock(IVar5);
  if ((bVar1 & 1) == 0) {
    if (DAT_101057340 != '\x01') {
      return;
    }
    pcVar4 = &DAT_100fae660;
    FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
    _swift_allocObject();
    pcVar4[0x18] = '\x02';
    pcVar4[0x19] = '\0';
    pcVar4[0x1a] = '\0';
    pcVar4[0x1b] = '\0';
    pcVar4[0x1c] = '\0';
    pcVar4[0x1d] = '\0';
    pcVar4[0x1e] = '\0';
    pcVar4[0x1f] = '\0';
    pcVar4[0x10] = '\x01';
    pcVar4[0x11] = '\0';
    pcVar4[0x12] = '\0';
    pcVar4[0x13] = '\0';
    pcVar4[0x14] = '\0';
    pcVar4[0x15] = '\0';
    pcVar4[0x16] = '\0';
    pcVar4[0x17] = '\0';
    *(undefined **)(pcVar4 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
    pcVar4[0x20] = 'X';
    pcVar4[0x21] = '\0';
    pcVar4[0x22] = '\0';
    pcVar4[0x23] = '\0';
    pcVar4[0x24] = '\0';
    pcVar4[0x25] = '\0';
    pcVar4[0x26] = '\0';
    pcVar4[0x27] = -0x30;
    pcVar4[0x28] = '@';
    pcVar4[0x29] = '\x15';
    pcVar4[0x2a] = -0x27;
    pcVar4[0x2b] = '\0';
    pcVar4[0x2c] = '\x01';
    pcVar4[0x2d] = '\0';
    pcVar4[0x2e] = '\0';
    pcVar4[0x2f] = -0x80;
    SVar6.bridgeObject = (void *)0x20;
    SVar6.str = pcVar4;
    separator.bridgeObject = (void *)0xa;
    separator.str = (char *)0xe100000000000000;
    Swift::_print(SVar6,separator);
  }
  else {
    FUN_10016ead0();
    if (param_3 == (undefined *)0x0) {
      param_3 = PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_1000f8154();
      lVar3 = *(long *)(param_3 + 0x10);
      lVar2 = _TtC7PostHog10PostHogSDK::remoteConfig;
    }
    else {
      lVar3 = *(long *)(param_3 + 0x10);
      lVar2 = _TtC7PostHog10PostHogSDK::remoteConfig;
    }
    _TtC7PostHog10PostHogSDK::remoteConfig = lVar2;
    if (lVar3 == 0) {
      _swift_bridgeObjectRelease();
      return;
    }
    lVar3 = *(long *)(unaff_x20 + lVar2);
    if (lVar3 != 0) {
      IVar5 = *(ID *)(lVar3 + 0x180);
      _swift_retain(lVar3);
      objc_stub::lock(IVar5);
      FUN_1001302dc(lVar3,param_1,param_2,param_3);
      objc_stub::unlock(IVar5);
      _swift_release(lVar3);
    }
    _swift_bridgeObjectRelease();
    if (((param_4 & 1) == 0) || (pcVar4 = *(char **)(unaff_x20 + lVar2), pcVar4 == (char *)0x0)) {
      return;
    }
    _swift_retain(pcVar4);
    FUN_10012cef4(0,0);
  }
  _swift_release(pcVar4);
  return;
}



/* Address: 0x10014a7d0 | _TtC7PostHog10PostHogSDK::setGroupPropertiesForFlags:properties:reloadFeatureFlags: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x24 bytes */

void _TtC7PostHog10PostHogSDK::setGroupPropertiesForFlags_properties_reloadFeatureFlags_
               (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5)

{
  Dictionary<undefined,undefined> DVar1;
  String SVar2;
  
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  DVar1 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  FUN_10014a5fc(SVar2.str,SVar2.bridgeObject,DVar1.unknown,param_5);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  _swift_bridgeObjectRelease(DVar1.unknown);
  return;
}



/* Address: 0x10014a870 | FUN_10014a870 */

void FUN_10014a870(void)

{
  byte bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  char *pcVar5;
  ID IVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  String SVar9;
  String separator;
  undefined *local_78 [3];
  undefined *local_60;
  undefined1 auStack_58 [24];
  
  IVar6 = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::setupLock);
  objc_stub::lock(IVar6);
  bVar1 = *(byte *)(unaff_x20 + _TtC7PostHog10PostHogSDK::enabled);
  objc_stub::unlock(IVar6);
  lVar8 = _TtC7PostHog10PostHogSDK::remoteConfig;
  if ((bVar1 & 1) == 0) {
    if (DAT_101057340 == '\x01') {
      pcVar5 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      _swift_allocObject();
      pcVar5[0x18] = '\x02';
      pcVar5[0x19] = '\0';
      pcVar5[0x1a] = '\0';
      pcVar5[0x1b] = '\0';
      pcVar5[0x1c] = '\0';
      pcVar5[0x1d] = '\0';
      pcVar5[0x1e] = '\0';
      pcVar5[0x1f] = '\0';
      pcVar5[0x10] = '\x01';
      pcVar5[0x11] = '\0';
      pcVar5[0x12] = '\0';
      pcVar5[0x13] = '\0';
      pcVar5[0x14] = '\0';
      pcVar5[0x15] = '\0';
      pcVar5[0x16] = '\0';
      pcVar5[0x17] = '\0';
      *(undefined **)(pcVar5 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      pcVar5[0x20] = 'X';
      pcVar5[0x21] = '\0';
      pcVar5[0x22] = '\0';
      pcVar5[0x23] = '\0';
      pcVar5[0x24] = '\0';
      pcVar5[0x25] = '\0';
      pcVar5[0x26] = '\0';
      pcVar5[0x27] = -0x30;
      pcVar5[0x28] = '@';
      pcVar5[0x29] = '\x15';
      pcVar5[0x2a] = -0x27;
      pcVar5[0x2b] = '\0';
      pcVar5[0x2c] = '\x01';
      pcVar5[0x2d] = '\0';
      pcVar5[0x2e] = '\0';
      pcVar5[0x2f] = -0x80;
      SVar9.bridgeObject = (void *)0x20;
      SVar9.str = pcVar5;
      separator.bridgeObject = (void *)0xa;
      separator.str = (char *)0xe100000000000000;
      Swift::_print(SVar9,separator);
      _swift_release(pcVar5);
      return;
    }
  }
  else {
    lVar7 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::remoteConfig);
    if (lVar7 != 0) {
      IVar6 = *(ID *)(lVar7 + 0x180);
      _swift_retain(lVar7);
      objc_stub::lock(IVar6);
      _swift_beginAccess(lVar7 + 0x188,auStack_58,1,0);
      puVar3 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
      uVar2 = *(undefined8 *)(lVar7 + 0x188);
      *(undefined **)(lVar7 + 0x188) = PTR___swiftEmptyDictionarySingleton_100eae0e0;
      _swift_bridgeObjectRelease(uVar2);
      FUN_10013804c();
      puVar4 = &DAT_100fb09d8;
      FUN_1000f7830(&DAT_100fb09d8,&DAT_100c2ee28);
      local_78[0] = puVar3;
      local_60 = puVar4;
      FUN_10015ab00(0x19,local_78);
      FUN_100004594(local_78);
      objc_stub::unlock(IVar6);
      _swift_release(lVar7);
      lVar8 = *(long *)(unaff_x20 + lVar8);
      if (lVar8 != 0) {
        _swift_retain(lVar8);
        FUN_10012cef4(0,0);
        _swift_release(lVar8);
      }
    }
  }
  return;
}



/* Address: 0x10014aa30 | _TtC7PostHog10PostHogSDK::resetGroupPropertiesForFlags */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC7PostHog10PostHogSDK::resetGroupPropertiesForFlags(ID param_1,SEL param_2)

{
  FUN_10014a870(param_1);
  return;
}



/* Address: 0x10014aa58 | FUN_10014aa58 */

void FUN_10014aa58(ulong param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  char *pcVar5;
  long unaff_x20;
  long lVar6;
  ID IVar7;
  long lVar8;
  String SVar9;
  String separator;
  undefined *local_88 [3];
  undefined *local_70;
  undefined1 auStack_68 [24];
  
  IVar7 = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::setupLock);
  objc_stub::lock(IVar7);
  bVar1 = *(byte *)(unaff_x20 + _TtC7PostHog10PostHogSDK::enabled);
  objc_stub::unlock(IVar7);
  lVar6 = _TtC7PostHog10PostHogSDK::remoteConfig;
  if ((bVar1 & 1) == 0) {
    if (DAT_101057340 == '\x01') {
      pcVar5 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      _swift_allocObject();
      pcVar5[0x18] = '\x02';
      pcVar5[0x19] = '\0';
      pcVar5[0x1a] = '\0';
      pcVar5[0x1b] = '\0';
      pcVar5[0x1c] = '\0';
      pcVar5[0x1d] = '\0';
      pcVar5[0x1e] = '\0';
      pcVar5[0x1f] = '\0';
      pcVar5[0x10] = '\x01';
      pcVar5[0x11] = '\0';
      pcVar5[0x12] = '\0';
      pcVar5[0x13] = '\0';
      pcVar5[0x14] = '\0';
      pcVar5[0x15] = '\0';
      pcVar5[0x16] = '\0';
      pcVar5[0x17] = '\0';
      *(undefined **)(pcVar5 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      pcVar5[0x20] = 'X';
      pcVar5[0x21] = '\0';
      pcVar5[0x22] = '\0';
      pcVar5[0x23] = '\0';
      pcVar5[0x24] = '\0';
      pcVar5[0x25] = '\0';
      pcVar5[0x26] = '\0';
      pcVar5[0x27] = -0x30;
      pcVar5[0x28] = '@';
      pcVar5[0x29] = '\x15';
      pcVar5[0x2a] = -0x27;
      pcVar5[0x2b] = '\0';
      pcVar5[0x2c] = '\x01';
      pcVar5[0x2d] = '\0';
      pcVar5[0x2e] = '\0';
      pcVar5[0x2f] = -0x80;
      SVar9.bridgeObject = (void *)0x20;
      SVar9.str = pcVar5;
      separator.bridgeObject = (void *)0xa;
      separator.str = (char *)0xe100000000000000;
      Swift::_print(SVar9,separator);
      _swift_release(pcVar5);
      return;
    }
  }
  else {
    lVar8 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::remoteConfig);
    if (lVar8 != 0) {
      IVar7 = *(ID *)(lVar8 + 0x180);
      _swift_retain(lVar8);
      objc_stub::lock(IVar7);
      _swift_beginAccess(lVar8 + 0x188,auStack_68,1,0);
      puVar3 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
      uVar2 = *(undefined8 *)(lVar8 + 0x188);
      *(undefined **)(lVar8 + 0x188) = PTR___swiftEmptyDictionarySingleton_100eae0e0;
      _swift_bridgeObjectRelease(uVar2);
      FUN_10013804c();
      puVar4 = &DAT_100fb09d8;
      FUN_1000f7830(&DAT_100fb09d8,&DAT_100c2ee28);
      local_88[0] = puVar3;
      local_70 = puVar4;
      FUN_10015ab00(0x19,local_88);
      FUN_100004594(local_88);
      objc_stub::unlock(IVar7);
      _swift_release(lVar8);
    }
    if (((param_1 & 1) != 0) && (lVar6 = *(long *)(unaff_x20 + lVar6), lVar6 != 0)) {
      _swift_retain(lVar6);
      FUN_10012cef4(0,0);
      _swift_release(lVar6);
    }
  }
  return;
}



/* Address: 0x10014ac30 | _TtC7PostHog10PostHogSDK::resetGroupPropertiesForFlagsWithReloadFeatureFlags: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x14 bytes */

void _TtC7PostHog10PostHogSDK::resetGroupPropertiesForFlagsWithReloadFeatureFlags_
               (ID param_1,SEL param_2,bool param_3)

{
  FUN_10014aa58(param_3);
  return;
}



/* Address: 0x10014ac60 | FUN_10014ac60 */

void FUN_10014ac60(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  char *pcVar4;
  ID IVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  undefined8 uVar8;
  String SVar9;
  String separator;
  undefined8 local_70 [3];
  undefined *local_58;
  
  IVar5 = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::setupLock);
  objc_stub::lock(IVar5);
  bVar1 = *(byte *)(unaff_x20 + _TtC7PostHog10PostHogSDK::enabled);
  objc_stub::unlock(IVar5);
  lVar7 = _TtC7PostHog10PostHogSDK::remoteConfig;
  if ((bVar1 & 1) == 0) {
    if (DAT_101057340 == '\x01') {
      pcVar4 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      _swift_allocObject();
      pcVar4[0x18] = '\x02';
      pcVar4[0x19] = '\0';
      pcVar4[0x1a] = '\0';
      pcVar4[0x1b] = '\0';
      pcVar4[0x1c] = '\0';
      pcVar4[0x1d] = '\0';
      pcVar4[0x1e] = '\0';
      pcVar4[0x1f] = '\0';
      pcVar4[0x10] = '\x01';
      pcVar4[0x11] = '\0';
      pcVar4[0x12] = '\0';
      pcVar4[0x13] = '\0';
      pcVar4[0x14] = '\0';
      pcVar4[0x15] = '\0';
      pcVar4[0x16] = '\0';
      pcVar4[0x17] = '\0';
      *(undefined **)(pcVar4 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      pcVar4[0x20] = 'X';
      pcVar4[0x21] = '\0';
      pcVar4[0x22] = '\0';
      pcVar4[0x23] = '\0';
      pcVar4[0x24] = '\0';
      pcVar4[0x25] = '\0';
      pcVar4[0x26] = '\0';
      pcVar4[0x27] = -0x30;
      pcVar4[0x28] = '@';
      pcVar4[0x29] = '\x15';
      pcVar4[0x2a] = -0x27;
      pcVar4[0x2b] = '\0';
      pcVar4[0x2c] = '\x01';
      pcVar4[0x2d] = '\0';
      pcVar4[0x2e] = '\0';
      pcVar4[0x2f] = -0x80;
      SVar9.bridgeObject = (void *)0x20;
      SVar9.str = pcVar4;
      separator.bridgeObject = (void *)0xa;
      separator.str = (char *)0xe100000000000000;
      Swift::_print(SVar9,separator);
      _swift_release(pcVar4);
      return;
    }
  }
  else {
    lVar6 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::remoteConfig);
    if (lVar6 != 0) {
      IVar5 = *(ID *)(lVar6 + 0x180);
      _swift_retain(lVar6);
      objc_stub::lock(IVar5);
      _swift_beginAccess(lVar6 + 0x188,local_70,0x21,0);
      FUN_10016fd94(param_1,param_2);
      _swift_endAccess(local_70);
      _swift_bridgeObjectRelease(param_1);
      uVar8 = *(undefined8 *)(lVar6 + 0x188);
      uVar2 = uVar8;
      _swift_bridgeObjectRetain();
      FUN_10013804c();
      _swift_bridgeObjectRelease(uVar8);
      puVar3 = &DAT_100fb09d8;
      FUN_1000f7830(&DAT_100fb09d8,&DAT_100c2ee28);
      local_70[0] = uVar2;
      local_58 = puVar3;
      FUN_10015ab00(0x19,local_70);
      FUN_100004594(local_70);
      objc_stub::unlock(IVar5);
      _swift_release(lVar6);
      lVar7 = *(long *)(unaff_x20 + lVar7);
      if (lVar7 != 0) {
        _swift_retain(lVar7);
        FUN_10012cef4(0,0);
        _swift_release(lVar7);
      }
    }
  }
  return;
}



/* Address: 0x10014ae50 | _TtC7PostHog10PostHogSDK::resetGroupPropertiesForFlagsWithGroupType: */

/* Function Stack Size: 0x18 bytes */

void _TtC7PostHog10PostHogSDK::resetGroupPropertiesForFlagsWithGroupType_
               (ID param_1,SEL param_2,ID param_3)

{
  FUN_10014ae5c();
  return;
}



/* Address: 0x10014ae5c | FUN_10014ae5c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10014ae5c(void)

{
  code *in_x3;
  String SVar1;
  
  SVar1 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  (*in_x3)(SVar1.str,SVar1.bridgeObject);
  _swift_bridgeObjectRelease(SVar1.bridgeObject);
  return;
}



/* Address: 0x10014aeb8 | FUN_10014aeb8 */

void FUN_10014aeb8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  byte bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  char *pcVar4;
  long unaff_x20;
  long lVar5;
  ID IVar6;
  long lVar7;
  undefined8 uVar8;
  String SVar9;
  String separator;
  undefined8 local_70 [3];
  undefined *local_58;
  
  IVar6 = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::setupLock);
  objc_stub::lock(IVar6);
  bVar1 = *(byte *)(unaff_x20 + _TtC7PostHog10PostHogSDK::enabled);
  objc_stub::unlock(IVar6);
  lVar5 = _TtC7PostHog10PostHogSDK::remoteConfig;
  if ((bVar1 & 1) == 0) {
    if (DAT_101057340 == '\x01') {
      pcVar4 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      _swift_allocObject();
      pcVar4[0x18] = '\x02';
      pcVar4[0x19] = '\0';
      pcVar4[0x1a] = '\0';
      pcVar4[0x1b] = '\0';
      pcVar4[0x1c] = '\0';
      pcVar4[0x1d] = '\0';
      pcVar4[0x1e] = '\0';
      pcVar4[0x1f] = '\0';
      pcVar4[0x10] = '\x01';
      pcVar4[0x11] = '\0';
      pcVar4[0x12] = '\0';
      pcVar4[0x13] = '\0';
      pcVar4[0x14] = '\0';
      pcVar4[0x15] = '\0';
      pcVar4[0x16] = '\0';
      pcVar4[0x17] = '\0';
      *(undefined **)(pcVar4 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      pcVar4[0x20] = 'X';
      pcVar4[0x21] = '\0';
      pcVar4[0x22] = '\0';
      pcVar4[0x23] = '\0';
      pcVar4[0x24] = '\0';
      pcVar4[0x25] = '\0';
      pcVar4[0x26] = '\0';
      pcVar4[0x27] = -0x30;
      pcVar4[0x28] = '@';
      pcVar4[0x29] = '\x15';
      pcVar4[0x2a] = -0x27;
      pcVar4[0x2b] = '\0';
      pcVar4[0x2c] = '\x01';
      pcVar4[0x2d] = '\0';
      pcVar4[0x2e] = '\0';
      pcVar4[0x2f] = -0x80;
      SVar9.bridgeObject = (void *)0x20;
      SVar9.str = pcVar4;
      separator.bridgeObject = (void *)0xa;
      separator.str = (char *)0xe100000000000000;
      Swift::_print(SVar9,separator);
      _swift_release(pcVar4);
      return;
    }
  }
  else {
    lVar7 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::remoteConfig);
    if (lVar7 != 0) {
      IVar6 = *(ID *)(lVar7 + 0x180);
      _swift_retain(lVar7);
      objc_stub::lock(IVar6);
      _swift_beginAccess(lVar7 + 0x188,local_70,0x21,0);
      FUN_10016fd94(param_1,param_2);
      _swift_endAccess(local_70);
      _swift_bridgeObjectRelease(param_1);
      uVar8 = *(undefined8 *)(lVar7 + 0x188);
      uVar2 = uVar8;
      _swift_bridgeObjectRetain();
      FUN_10013804c();
      _swift_bridgeObjectRelease(uVar8);
      puVar3 = &DAT_100fb09d8;
      FUN_1000f7830(&DAT_100fb09d8,&DAT_100c2ee28);
      local_70[0] = uVar2;
      local_58 = puVar3;
      FUN_10015ab00(0x19,local_70);
      FUN_100004594(local_70);
      objc_stub::unlock(IVar6);
      _swift_release(lVar7);
    }
    if (((param_3 & 1) != 0) && (lVar5 = *(long *)(unaff_x20 + lVar5), lVar5 != 0)) {
      _swift_retain(lVar5);
      FUN_10012cef4(0,0);
      _swift_release(lVar5);
    }
  }
  return;
}



/* Address: 0x10014b0b4 | _TtC7PostHog10PostHogSDK::resetGroupPropertiesForFlagsWithGroupType:reloadFeatureFlags: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x1c bytes */

void _TtC7PostHog10PostHogSDK::resetGroupPropertiesForFlagsWithGroupType_reloadFeatureFlags_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  String SVar1;
  
  SVar1 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  FUN_10014aeb8(SVar1.str,SVar1.bridgeObject,param_4);
  _swift_bridgeObjectRelease(SVar1.bridgeObject);
  return;
}



/* Address: 0x10014b114 | FUN_10014b114 */

void FUN_10014b114(void)

{
  byte bVar1;
  ID self;
  long unaff_x20;
  char *pcVar2;
  String SVar3;
  String separator;
  
  self = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::setupLock);
  objc_stub::lock(self);
  bVar1 = *(byte *)(unaff_x20 + _TtC7PostHog10PostHogSDK::enabled);
  objc_stub::unlock(self);
  if ((bVar1 & 1) == 0) {
    if (DAT_101057340 != '\x01') {
      return;
    }
    pcVar2 = &DAT_100fae660;
    FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
    _swift_allocObject();
    pcVar2[0x18] = '\x02';
    pcVar2[0x19] = '\0';
    pcVar2[0x1a] = '\0';
    pcVar2[0x1b] = '\0';
    pcVar2[0x1c] = '\0';
    pcVar2[0x1d] = '\0';
    pcVar2[0x1e] = '\0';
    pcVar2[0x1f] = '\0';
    pcVar2[0x10] = '\x01';
    pcVar2[0x11] = '\0';
    pcVar2[0x12] = '\0';
    pcVar2[0x13] = '\0';
    pcVar2[0x14] = '\0';
    pcVar2[0x15] = '\0';
    pcVar2[0x16] = '\0';
    pcVar2[0x17] = '\0';
    *(undefined **)(pcVar2 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
    pcVar2[0x20] = 'X';
    pcVar2[0x21] = '\0';
    pcVar2[0x22] = '\0';
    pcVar2[0x23] = '\0';
    pcVar2[0x24] = '\0';
    pcVar2[0x25] = '\0';
    pcVar2[0x26] = '\0';
    pcVar2[0x27] = -0x30;
    pcVar2[0x28] = '@';
    pcVar2[0x29] = '\x15';
    pcVar2[0x2a] = -0x27;
    pcVar2[0x2b] = '\0';
    pcVar2[0x2c] = '\x01';
    pcVar2[0x2d] = '\0';
    pcVar2[0x2e] = '\0';
    pcVar2[0x2f] = -0x80;
    SVar3.bridgeObject = (void *)0x20;
    SVar3.str = pcVar2;
    separator.bridgeObject = (void *)0xa;
    separator.str = (char *)0xe100000000000000;
    Swift::_print(SVar3,separator);
  }
  else {
    pcVar2 = *(char **)(unaff_x20 + _TtC7PostHog10PostHogSDK::remoteConfig);
    if (pcVar2 == (char *)0x0) {
      return;
    }
    _swift_retain(pcVar2);
    FUN_10012cef4(FUN_100004520,0);
  }
  _swift_release(pcVar2);
  return;
}



/* Address: 0x10014b21c | _TtC7PostHog10PostHogSDK::reloadFeatureFlags */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC7PostHog10PostHogSDK::reloadFeatureFlags(ID param_1,SEL param_2)

{
  ID IVar1;
  long lVar2;
  
  IVar1 = param_1;
  FUN_10014e7d4();
  if ((IVar1 & 1) != 0) {
    lVar2 = *(long *)(param_1 + remoteConfig);
    if (lVar2 != 0) {
      _swift_retain(lVar2);
      FUN_10012cef4(FUN_100004520,0);
      _swift_release(lVar2);
    }
  }
  return;
}



/* Address: 0x10014b27c | FUN_10014b27c */

void FUN_10014b27c(code *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined *puVar2;
  char *pcVar3;
  long unaff_x20;
  ID self;
  long lVar4;
  String SVar5;
  String separator;
  
  self = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::setupLock);
  objc_stub::lock(self);
  bVar1 = *(byte *)(unaff_x20 + _TtC7PostHog10PostHogSDK::enabled);
  objc_stub::unlock(self);
  if ((bVar1 & 1) == 0) {
    if (DAT_101057340 == '\x01') {
      pcVar3 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      _swift_allocObject();
      pcVar3[0x18] = '\x02';
      pcVar3[0x19] = '\0';
      pcVar3[0x1a] = '\0';
      pcVar3[0x1b] = '\0';
      pcVar3[0x1c] = '\0';
      pcVar3[0x1d] = '\0';
      pcVar3[0x1e] = '\0';
      pcVar3[0x1f] = '\0';
      pcVar3[0x10] = '\x01';
      pcVar3[0x11] = '\0';
      pcVar3[0x12] = '\0';
      pcVar3[0x13] = '\0';
      pcVar3[0x14] = '\0';
      pcVar3[0x15] = '\0';
      pcVar3[0x16] = '\0';
      pcVar3[0x17] = '\0';
      *(undefined **)(pcVar3 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      pcVar3[0x20] = 'X';
      pcVar3[0x21] = '\0';
      pcVar3[0x22] = '\0';
      pcVar3[0x23] = '\0';
      pcVar3[0x24] = '\0';
      pcVar3[0x25] = '\0';
      pcVar3[0x26] = '\0';
      pcVar3[0x27] = -0x30;
      pcVar3[0x28] = '@';
      pcVar3[0x29] = '\x15';
      pcVar3[0x2a] = -0x27;
      pcVar3[0x2b] = '\0';
      pcVar3[0x2c] = '\x01';
      pcVar3[0x2d] = '\0';
      pcVar3[0x2e] = '\0';
      pcVar3[0x2f] = -0x80;
      SVar5.bridgeObject = (void *)0x20;
      SVar5.str = pcVar3;
      separator.bridgeObject = (void *)0xa;
      separator.str = (char *)0xe100000000000000;
      Swift::_print(SVar5,separator);
      _swift_release(pcVar3);
    }
  }
  else {
    lVar4 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::remoteConfig);
    if (lVar4 != 0) {
      puVar2 = &DAT_100eb88b8;
      _swift_allocObject(&DAT_100eb88b8,0x20,7);
      *(code **)(puVar2 + 0x10) = param_1;
      *(undefined8 *)(puVar2 + 0x18) = param_2;
      _swift_retain(lVar4);
      _swift_retain(param_2);
      FUN_10012cef4(FUN_1000386a0,puVar2);
      _swift_release(lVar4);
      _swift_release(puVar2);
      return;
    }
  }
  (*param_1)();
  return;
}



/* Address: 0x10014b3d4 | _TtC7PostHog10PostHogSDK::reloadFeatureFlagsWithCallback: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC7PostHog10PostHogSDK::reloadFeatureFlagsWithCallback_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  void *aBlock;
  undefined *puVar1;
  void *pvVar2;
  undefined *puVar3;
  long lVar4;
  
  aBlock = __Block_copy((void *)param_3);
  puVar1 = &DAT_100eb88f0;
  _swift_allocObject(&DAT_100eb88f0,0x18,7);
  *(void **)(puVar1 + 0x10) = aBlock;
  pvVar2 = __Block_copy(aBlock);
  FUN_10014e7d4();
  if (((ulong)pvVar2 & 1) != 0) {
    lVar4 = *(long *)(param_1 + remoteConfig);
    if (lVar4 != 0) {
      puVar3 = &DAT_100eb8918;
      _swift_allocObject(&DAT_100eb8918,0x20,7);
      *(code **)(puVar3 + 0x10) = FUN_100155a18;
      *(undefined **)(puVar3 + 0x18) = puVar1;
      _swift_retain(lVar4);
      _swift_retain(puVar1);
      FUN_10012cef4(thunk_FUN_1000386a0,puVar3);
      _swift_release(puVar1);
      __Block_release(aBlock);
      _swift_release(lVar4);
      _swift_release(puVar3);
      return;
    }
  }
  (**(code **)((long)aBlock + 0x10))(aBlock);
  _swift_release(puVar1);
  __Block_release(aBlock);
  return;
}



/* Address: 0x10014b4f4 | FUN_10014b4f4 */

void FUN_10014b4f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10014b724(0x6572757461656624,0xed0000776569765f,param_1,param_2,param_3,param_4,
                0xd000000000000012,0x8000000100d92e90);
  return;
}



/* Address: 0x10014b540 | _TtC7PostHog10PostHogSDK::captureFeatureViewWithFlag:flagVariant: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void _TtC7PostHog10PostHogSDK::captureFeatureViewWithFlag_flagVariant_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  String SVar1;
  String SVar2;
  
  SVar1 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  if (param_4 == 0) {
    SVar2 = (String)(ZEXT816(0) << 0x40);
  }
  else {
    SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  FUN_10014b724(0x6572757461656624,0xed0000776569765f,SVar1.str,SVar1.bridgeObject,SVar2.str,
                SVar2.bridgeObject,0xd000000000000012,0x8000000100d92e90);
  _swift_bridgeObjectRelease(SVar1.bridgeObject);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  return;
}



/* Address: 0x10014b60c | FUN_10014b60c */

void FUN_10014b60c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10014b724(0xd000000000000014,0x8000000100d92eb0,param_1,param_2,param_3,param_4,
                0xd000000000000019,0x8000000100d92ed0);
  return;
}



/* Address: 0x10014b654 | _TtC7PostHog10PostHogSDK::captureFeatureInteractionWithFlag:flagVariant: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void _TtC7PostHog10PostHogSDK::captureFeatureInteractionWithFlag_flagVariant_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  String SVar1;
  String SVar2;
  
  SVar1 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  if (param_4 == 0) {
    SVar2 = (String)(ZEXT816(0) << 0x40);
  }
  else {
    SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  FUN_10014b724(0xd000000000000014,0x8000000100d92eb0,SVar1.str,SVar1.bridgeObject,SVar2.str,
                SVar2.bridgeObject,0xd000000000000019,0x8000000100d92ed0);
  _swift_bridgeObjectRelease(SVar1.bridgeObject);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  return;
}



/* Address: 0x10014b724 | FUN_10014b724 */

void FUN_10014b724(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4,
                  undefined *param_5,long param_6,char *param_7,void *param_8)

{
  byte bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  char *pcVar8;
  _StringGuts _Var9;
  char *pcVar10;
  char *pcVar11;
  void *pvVar12;
  long unaff_x20;
  long lVar13;
  ID self;
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
  String separator;
  String separator_00;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String separator_01;
  undefined1 auStack_180 [160];
  undefined *local_e0;
  long lStack_d8;
  undefined8 local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  long local_a8;
  char *local_a0;
  undefined *local_98;
  undefined1 auStack_80 [32];
  
  self = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::setupLock);
  objc_stub::lock(self);
  bVar1 = *(byte *)(unaff_x20 + _TtC7PostHog10PostHogSDK::enabled);
  objc_stub::unlock(self);
  lVar2 = PostHogConfig::optOut;
  if ((bVar1 & 1) == 0) {
    if (DAT_101057340 == '\x01') {
      pcVar10 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
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
      *(undefined **)(pcVar10 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      pcVar10[0x20] = 'X';
      pcVar10[0x21] = '\0';
      pcVar10[0x22] = '\0';
      pcVar10[0x23] = '\0';
      pcVar10[0x24] = '\0';
      pcVar10[0x25] = '\0';
      pcVar10[0x26] = '\0';
      pcVar10[0x27] = -0x30;
      pcVar10[0x28] = '@';
      pcVar10[0x29] = '\x15';
      pcVar10[0x2a] = -0x27;
      pcVar10[0x2b] = '\0';
      pcVar10[0x2c] = '\x01';
      pcVar10[0x2d] = '\0';
      pcVar10[0x2e] = '\0';
      pcVar10[0x2f] = -0x80;
      SVar15.bridgeObject = (void *)0x20;
      SVar15.str = pcVar10;
      separator_00.bridgeObject = (void *)0xa;
      separator_00.str = (char *)0xe100000000000000;
      Swift::_print(SVar15,separator_00);
      _swift_release(pcVar10);
      return;
    }
  }
  else {
    lVar13 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::config);
    pvVar12 = (void *)0x0;
    _swift_beginAccess(lVar13 + PostHogConfig::optOut,auStack_80,0);
    puVar7 = PTR___type_metadata_for_Swift_String_100eac208;
    if (*(char *)(lVar13 + lVar2) == '\x01') {
      if (DAT_101057340 == '\x01') {
        pcVar10 = &DAT_100fae660;
        FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
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
        *(undefined **)(pcVar10 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
        pcVar10[0x20] = '%';
        pcVar10[0x21] = '\0';
        pcVar10[0x22] = '\0';
        pcVar10[0x23] = '\0';
        pcVar10[0x24] = '\0';
        pcVar10[0x25] = '\0';
        pcVar10[0x26] = '\0';
        pcVar10[0x27] = -0x30;
        pcVar10[0x28] = '\0';
        pcVar10[0x29] = '\x16';
        pcVar10[0x2a] = -0x27;
        pcVar10[0x2b] = '\0';
        pcVar10[0x2c] = '\x01';
        pcVar10[0x2d] = '\0';
        pcVar10[0x2e] = '\0';
        pcVar10[0x2f] = -0x80;
        SVar14.bridgeObject = (void *)0x20;
        SVar14.str = pcVar10;
        separator.bridgeObject = (void *)0xa;
        separator.str = (char *)0xe100000000000000;
        Swift::_print(SVar14,separator);
        _swift_release(pcVar10);
      }
    }
    else {
      local_e0 = (undefined *)0x0;
      if (param_6 != 0) {
        local_e0 = param_5;
      }
      local_c8 = (undefined *)0x0;
      if (param_6 != 0) {
        local_c8 = PTR___type_metadata_for_Swift_String_100eac208;
      }
      local_d0 = 0;
      lStack_d8 = param_6;
      if (param_6 == 0) {
        FUN_10014c1d8(&local_c0,param_3,param_4,0);
        if (local_c8 != (undefined *)0x0) {
          FUN_1000fb4c4(&local_e0,&DAT_100fae668,&DAT_100c2e4a0);
        }
      }
      else {
        FUN_100011080(&local_e0,&local_c0);
        _swift_bridgeObjectRetain(param_6);
      }
      if (local_a8 == 0) {
        _Var9.unknown = &DAT_100fae668;
        pcVar10 = &DAT_100c2e4a0;
        FUN_1000fb4c4(&local_c0);
        local_a0 = (char *)0x0;
        local_98 = (undefined *)0xe000000000000000;
        Swift::_StringGuts::grow(0x56,_Var9);
        SVar18.bridgeObject = param_8;
        SVar18.str = param_7;
        SVar26.bridgeObject = pvVar12;
        SVar26.str = pcVar10;
        Swift::String::append(SVar18,SVar26);
        SVar19.bridgeObject = (void *)0x8000000100d933f0;
        SVar19.str = (char *)0xd000000000000012;
        SVar27.bridgeObject = pvVar12;
        SVar27.str = pcVar10;
        Swift::String::append(SVar19,SVar27);
        SVar20.bridgeObject = param_4;
        SVar20.str = param_3;
        SVar28.bridgeObject = pvVar12;
        SVar28.str = pcVar10;
        Swift::String::append(SVar20,SVar28);
        SVar21.bridgeObject = (void *)0x8000000100d93410;
        SVar21.str = (char *)0xd000000000000040;
        SVar29.bridgeObject = pvVar12;
        SVar29.str = pcVar10;
        Swift::String::append(SVar21,SVar29);
        puVar5 = local_98;
        pcVar10 = local_a0;
        if (DAT_101057340 == '\x01') {
          pcVar8 = &DAT_100fae660;
          FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
          pcVar11 = (char *)0x7;
          _swift_allocObject();
          pcVar8[0x18] = '\x02';
          pcVar8[0x19] = '\0';
          pcVar8[0x1a] = '\0';
          pcVar8[0x1b] = '\0';
          pcVar8[0x1c] = '\0';
          pcVar8[0x1d] = '\0';
          pcVar8[0x1e] = '\0';
          pcVar8[0x1f] = '\0';
          pcVar8[0x10] = '\x01';
          pcVar8[0x11] = '\0';
          pcVar8[0x12] = '\0';
          pcVar8[0x13] = '\0';
          pcVar8[0x14] = '\0';
          pcVar8[0x15] = '\0';
          pcVar8[0x16] = '\0';
          pcVar8[0x17] = '\0';
          local_a0 = (char *)0x676f4874736f505b;
          local_98 = (undefined *)0xea0000000000205d;
          SVar22.bridgeObject = puVar5;
          SVar22.str = pcVar10;
          SVar30.bridgeObject = pvVar12;
          SVar30.str = pcVar11;
          Swift::String::append(SVar22,SVar30);
          *(undefined **)(pcVar8 + 0x38) = puVar7;
          *(char **)(pcVar8 + 0x20) = local_a0;
          *(undefined **)(pcVar8 + 0x28) = local_98;
          SVar23.bridgeObject = (void *)0x20;
          SVar23.str = pcVar8;
          separator_01.bridgeObject = (void *)0xa;
          separator_01.str = (char *)0xe100000000000000;
          Swift::_print(SVar23,separator_01);
          _swift_release(pcVar8);
        }
      }
      else {
        FUN_100011080(&local_c0,&local_a0);
        puVar3 = &DAT_100fae678;
        FUN_1000f7830(&DAT_100fae678,&DAT_100c2e190);
        puVar4 = puVar3;
        _swift_initStackObject();
        *(undefined8 *)(puVar4 + 0x20) = 0x5f65727574616566;
        *(undefined8 *)(puVar4 + 0x18) = 2;
        *(undefined8 *)(puVar4 + 0x10) = 1;
        *(undefined **)(puVar4 + 0x48) = puVar7;
        *(undefined8 *)(puVar4 + 0x28) = 0xec00000067616c66;
        *(char **)(puVar4 + 0x30) = param_3;
        *(void **)(puVar4 + 0x38) = param_4;
        _swift_bridgeObjectRetain(param_4);
        puVar5 = puVar4;
        FUN_1000f8154();
        _swift_setDeallocating(puVar4);
        FUN_1000fb4c4(puVar4 + 0x20,&DAT_100fae490,&DAT_100c2de60);
        FUN_10000cbfc(&local_a0,&local_c0);
        ppuVar6 = &local_e0;
        pcVar10 = PTR___type_metadata_for_Any_100eae0c0 + 8;
        puVar4 = puVar7;
        _swift_dynamicCast(ppuVar6,&local_c0,pcVar10,puVar7,6);
        if (((ulong)ppuVar6 & 1) != 0) {
          local_c8 = puVar7;
          FUN_100011080(&local_e0,&local_c0);
          puVar4 = puVar5;
          _swift_isUniquelyReferenced_nonNull_native();
          pcVar10 = (char *)0x8000000100d93460;
          local_e0 = puVar5;
          FUN_10016fe74(&local_c0,0xd000000000000014);
          puVar5 = local_e0;
        }
        _swift_initStackObject(puVar3,auStack_180);
        *(undefined8 *)(puVar3 + 0x18) = 2;
        *(undefined8 *)(puVar3 + 0x10) = 1;
        local_c0 = param_1;
        uStack_b8 = param_2;
        _swift_bridgeObjectRetain(param_2);
        SVar16.bridgeObject = (void *)0xe100000000000000;
        SVar16.str = (char *)0x2f;
        SVar24.bridgeObject = puVar4;
        SVar24.str = pcVar10;
        Swift::String::append(SVar16,SVar24);
        SVar17.bridgeObject = param_4;
        SVar17.str = param_3;
        SVar25.bridgeObject = puVar4;
        SVar25.str = pcVar10;
        Swift::String::append(SVar17,SVar25);
        *(undefined8 *)(puVar3 + 0x20) = local_c0;
        *(undefined8 *)(puVar3 + 0x28) = uStack_b8;
        FUN_10000cbfc(&local_a0,puVar3 + 0x30);
        puVar7 = puVar3;
        FUN_1000f8154(puVar3);
        _swift_setDeallocating(puVar3);
        FUN_1000fb4c4(puVar3 + 0x20,&DAT_100fae490,&DAT_100c2de60);
        FUN_100143dc8(param_1,param_2,puVar5,puVar7);
        _swift_bridgeObjectRelease(puVar7);
        FUN_100004594(&local_a0);
      }
      _swift_bridgeObjectRelease(puVar5);
    }
  }
  return;
}



/* Address: 0x10014bca4 | FUN_10014bca4 */

void FUN_10014bca4(undefined8 param_1,undefined8 param_2)

{
  FUN_10014bd8c(param_1,param_2,2);
  return;
}



/* Address: 0x10014bcac | _TtC7PostHog10PostHogSDK::getFeatureFlagResult: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC7PostHog10PostHogSDK::getFeatureFlagResult_(ID param_1,SEL param_2,ID param_3)

{
  char *pcVar1;
  String SVar2;
  
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pcVar1 = SVar2.str;
  FUN_10014bd8c(pcVar1,SVar2.bridgeObject,2);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  return (ID)pcVar1;
}



/* Address: 0x10014bd18 | FUN_10014bd18 */

void FUN_10014bd18(undefined8 param_1,undefined8 param_2,uint param_3)

{
  FUN_10014bd8c(param_1,param_2,param_3 & 1);
  return;
}



/* Address: 0x10014bd20 | _TtC7PostHog10PostHogSDK::getFeatureFlagResultWithKey:sendFeatureFlagEvent: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x1c bytes */

ID _TtC7PostHog10PostHogSDK::getFeatureFlagResultWithKey_sendFeatureFlagEvent_
             (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  char *pcVar1;
  String SVar2;
  
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pcVar1 = SVar2.str;
  FUN_10014bd8c(pcVar1,SVar2.bridgeObject,param_4);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  return (ID)pcVar1;
}



/* Address: 0x10014bd8c | FUN_10014bd8c */

long FUN_10014bd8c(long param_1,undefined8 param_2,byte param_3)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  long unaff_x20;
  ID self;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  String SVar9;
  String separator;
  undefined8 local_b0;
  long lStack_a8;
  undefined8 local_a0;
  undefined *puStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *local_78;
  undefined1 auStack_68 [24];
  
  self = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::setupLock);
  objc_stub::lock(self);
  bVar1 = *(byte *)(unaff_x20 + _TtC7PostHog10PostHogSDK::enabled);
  objc_stub::unlock(self);
  if ((bVar1 & 1) == 0) {
    if (DAT_101057340 == '\x01') {
      pcVar4 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      _swift_allocObject();
      pcVar4[0x18] = '\x02';
      pcVar4[0x19] = '\0';
      pcVar4[0x1a] = '\0';
      pcVar4[0x1b] = '\0';
      pcVar4[0x1c] = '\0';
      pcVar4[0x1d] = '\0';
      pcVar4[0x1e] = '\0';
      pcVar4[0x1f] = '\0';
      pcVar4[0x10] = '\x01';
      pcVar4[0x11] = '\0';
      pcVar4[0x12] = '\0';
      pcVar4[0x13] = '\0';
      pcVar4[0x14] = '\0';
      pcVar4[0x15] = '\0';
      pcVar4[0x16] = '\0';
      pcVar4[0x17] = '\0';
      *(undefined **)(pcVar4 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      pcVar4[0x20] = 'X';
      pcVar4[0x21] = '\0';
      pcVar4[0x22] = '\0';
      pcVar4[0x23] = '\0';
      pcVar4[0x24] = '\0';
      pcVar4[0x25] = '\0';
      pcVar4[0x26] = '\0';
      pcVar4[0x27] = -0x30;
      pcVar4[0x28] = '@';
      pcVar4[0x29] = '\x15';
      pcVar4[0x2a] = -0x27;
      pcVar4[0x2b] = '\0';
      pcVar4[0x2c] = '\x01';
      pcVar4[0x2d] = '\0';
      pcVar4[0x2e] = '\0';
      pcVar4[0x2f] = -0x80;
      SVar9.bridgeObject = (void *)0x20;
      SVar9.str = pcVar4;
      separator.bridgeObject = (void *)0xa;
      separator.str = (char *)0xe100000000000000;
      Swift::_print(SVar9,separator);
      _swift_release(pcVar4);
    }
  }
  else {
    lVar6 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::remoteConfig);
    if (lVar6 != 0) {
      _swift_retain(lVar6);
      lVar3 = param_1;
      FUN_1001307b8(param_1,param_2);
      lVar5 = PostHogConfig::sendFeatureFlagEvent;
      if (param_3 == 2) {
        lVar7 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::config);
        _swift_beginAccess(lVar7 + PostHogConfig::sendFeatureFlagEvent,auStack_68,0,0);
        param_3 = *(byte *)(lVar7 + lVar5);
      }
      if ((param_3 & 1) != 0) {
        if (lVar3 == 0) {
          uStack_88 = 0;
          local_90 = 0;
          local_78 = (undefined *)0x0;
          uStack_80 = 0;
        }
        else {
          lVar5 = ((undefined8 *)(lVar3 + PostHogFeatureFlagResult::variant))[1];
          if (lVar5 == 0) {
            uVar2 = (ulong)local_90 >> 8;
            local_90 = CONCAT71((int7)uVar2,
                                *(undefined1 *)(lVar3 + PostHogFeatureFlagResult::enabled));
            local_78 = PTR___type_metadata_for_Swift_Bool_100eac570;
          }
          else {
            uVar8 = *(undefined8 *)(lVar3 + PostHogFeatureFlagResult::variant);
            _swift_bridgeObjectRetain();
            local_a0 = 0;
            puStack_98 = PTR___type_metadata_for_Swift_String_100eac208;
            local_b0 = uVar8;
            lStack_a8 = lVar5;
            FUN_100011080(&local_b0,&local_90);
          }
        }
        FUN_10014c948(param_1,param_2,&local_90);
        _swift_release(lVar6);
        FUN_1000fb4c4(&local_90,&DAT_100fae668,&DAT_100c2e4a0);
        return lVar3;
      }
      _swift_release(lVar6);
      return lVar3;
    }
  }
  return 0;
}



/* Address: 0x10014bfb8 | FUN_10014bfb8 */

void FUN_10014bfb8(undefined8 param_1,undefined8 param_2)

{
  FUN_10014c1d8(param_1,param_2,2);
  return;
}



/* Address: 0x10014bfc0 | _TtC7PostHog10PostHogSDK::getFeatureFlag: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC7PostHog10PostHogSDK::getFeatureFlag_(ID param_1,SEL param_2,ID param_3)

{
  long extraout_x8;
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  String SVar4;
  undefined1 auStack_60 [24];
  long local_48;
  
  SVar4 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  FUN_10014c1d8(auStack_60,SVar4.str,SVar4.bridgeObject,2);
  _swift_bridgeObjectRelease(SVar4.bridgeObject);
  if (local_48 == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    FUN_100004640(auStack_60,local_48);
    lVar3 = *(long *)(local_48 + -8);
    (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar3 + 0x40));
    puVar2 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar3 + 0x10))(puVar2);
    puVar1 = puVar2;
    Swift::__bridgeAnythingToObjectiveC(puVar2,local_48);
    (**(code **)(lVar3 + 8))(puVar2,local_48);
    FUN_100004594(auStack_60);
  }
  return (ID)puVar1;
}



/* Address: 0x10014c0c8 | FUN_10014c0c8 */

void FUN_10014c0c8(undefined8 param_1,undefined8 param_2,uint param_3)

{
  FUN_10014c1d8(param_1,param_2,param_3 & 1);
  return;
}



/* Address: 0x10014c0d0 | _TtC7PostHog10PostHogSDK::getFeatureFlagWithKey:sendFeatureFlagEvent: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x1c bytes */

ID _TtC7PostHog10PostHogSDK::getFeatureFlagWithKey_sendFeatureFlagEvent_
             (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  long extraout_x8;
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  String SVar4;
  undefined1 auStack_60 [24];
  long local_48;
  
  SVar4 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  FUN_10014c1d8(auStack_60,SVar4.str,SVar4.bridgeObject,param_4);
  _swift_bridgeObjectRelease(SVar4.bridgeObject);
  if (local_48 == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    FUN_100004640(auStack_60,local_48);
    lVar3 = *(long *)(local_48 + -8);
    (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar3 + 0x40));
    puVar2 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar3 + 0x10))(puVar2);
    puVar1 = puVar2;
    Swift::__bridgeAnythingToObjectiveC(puVar2,local_48);
    (**(code **)(lVar3 + 8))(puVar2,local_48);
    FUN_100004594(auStack_60);
  }
  return (ID)puVar1;
}



/* Address: 0x10014c1d8 | FUN_10014c1d8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10014c1d8(undefined8 *param_1,long param_2)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_50;
  long lStack_48;
  undefined8 local_40;
  undefined *puStack_38;
  
  FUN_10014bd8c();
  if (param_2 == 0) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    lVar2 = ((undefined8 *)(param_2 + PostHogFeatureFlagResult::variant))[1];
    if (lVar2 == 0) {
      uVar1 = *(undefined1 *)(param_2 + PostHogFeatureFlagResult::enabled);
      param_1[3] = PTR___type_metadata_for_Swift_Bool_100eac570;
      *(undefined1 *)param_1 = uVar1;
    }
    else {
      uVar3 = *(undefined8 *)(param_2 + PostHogFeatureFlagResult::variant);
      _swift_bridgeObjectRetain(lVar2);
      local_40 = 0;
      puStack_38 = PTR___type_metadata_for_Swift_String_100eac208;
      local_50 = uVar3;
      lStack_48 = lVar2;
      FUN_100011080(&local_50,param_1);
    }
  }
  return;
}



/* Address: 0x10014c28c | FUN_10014c28c */

void FUN_10014c28c(undefined8 param_1,undefined8 param_2)

{
  FUN_10014c374(param_1,param_2,2);
  return;
}



/* Address: 0x10014c294 | _TtC7PostHog10PostHogSDK::isFeatureEnabled: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

bool _TtC7PostHog10PostHogSDK::isFeatureEnabled_(ID param_1,SEL param_2,ID param_3)

{
  char *pcVar1;
  String SVar2;
  
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pcVar1 = SVar2.str;
  FUN_10014c374(pcVar1,SVar2.bridgeObject,2);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  return (uint)pcVar1 & 1;
}



/* Address: 0x10014c300 | FUN_10014c300 */

void FUN_10014c300(undefined8 param_1,undefined8 param_2,uint param_3)

{
  FUN_10014c374(param_1,param_2,param_3 & 1);
  return;
}



/* Address: 0x10014c308 | _TtC7PostHog10PostHogSDK::isFeatureEnabledWithKey:sendFeatureFlagEvent: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x1c bytes */

bool _TtC7PostHog10PostHogSDK::isFeatureEnabledWithKey_sendFeatureFlagEvent_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  char *pcVar1;
  String SVar2;
  
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pcVar1 = SVar2.str;
  FUN_10014c374(pcVar1,SVar2.bridgeObject,param_4);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  return (uint)pcVar1 & 1;
}



/* Address: 0x10014c374 | FUN_10014c374 */

undefined1 FUN_10014c374(void)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  undefined1 local_70 [8];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  uVar3 = 0;
  iVar2 = (int)local_70;
  FUN_10014c1d8(&local_40);
  FUN_1000f8cac(&local_40,&local_60,&DAT_100fae668,&DAT_100c2e4a0);
  puVar1 = PTR___type_metadata_for_Any_100eae0c0;
  if (local_48 == 0) {
    FUN_1000fb4c4(&local_60,&DAT_100fae668,&DAT_100c2e4a0);
  }
  else {
    _swift_dynamicCast(local_70,&local_60,PTR___type_metadata_for_Any_100eae0c0 + 8,
                       PTR___type_metadata_for_Swift_String_100eac208,6);
    if ((uVar3 & 1) != 0) {
      _swift_bridgeObjectRelease(local_68);
      FUN_1000fb4c4(&local_40,&DAT_100fae668,&DAT_100c2e4a0);
      return 1;
    }
  }
  uStack_58 = uStack_38;
  local_60 = local_40;
  local_48 = lStack_28;
  uStack_50 = uStack_30;
  if (lStack_28 == 0) {
    FUN_1000fb4c4(&local_60,&DAT_100fae668,&DAT_100c2e4a0);
  }
  else {
    _swift_dynamicCast(local_70,&local_60,puVar1 + 8,PTR___type_metadata_for_Swift_Bool_100eac570,6)
    ;
    if (iVar2 != 0) {
      return local_70[0];
    }
  }
  return 0;
}



/* Address: 0x10014c47c | FUN_10014c47c */

char * FUN_10014c47c(void)

{
  byte bVar1;
  ID self;
  char *pcVar2;
  long unaff_x20;
  char *pcVar3;
  String SVar4;
  String separator;
  
  self = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::setupLock);
  objc_stub::lock(self);
  bVar1 = *(byte *)(unaff_x20 + _TtC7PostHog10PostHogSDK::enabled);
  objc_stub::unlock(self);
  if ((bVar1 & 1) == 0) {
    if (DAT_101057340 != '\x01') {
      return (char *)0x0;
    }
    pcVar3 = &DAT_100fae660;
    FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
    _swift_allocObject();
    pcVar3[0x18] = '\x02';
    pcVar3[0x19] = '\0';
    pcVar3[0x1a] = '\0';
    pcVar3[0x1b] = '\0';
    pcVar3[0x1c] = '\0';
    pcVar3[0x1d] = '\0';
    pcVar3[0x1e] = '\0';
    pcVar3[0x1f] = '\0';
    pcVar3[0x10] = '\x01';
    pcVar3[0x11] = '\0';
    pcVar3[0x12] = '\0';
    pcVar3[0x13] = '\0';
    pcVar3[0x14] = '\0';
    pcVar3[0x15] = '\0';
    pcVar3[0x16] = '\0';
    pcVar3[0x17] = '\0';
    *(undefined **)(pcVar3 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
    pcVar3[0x20] = 'X';
    pcVar3[0x21] = '\0';
    pcVar3[0x22] = '\0';
    pcVar3[0x23] = '\0';
    pcVar3[0x24] = '\0';
    pcVar3[0x25] = '\0';
    pcVar3[0x26] = '\0';
    pcVar3[0x27] = -0x30;
    pcVar3[0x28] = '@';
    pcVar3[0x29] = '\x15';
    pcVar3[0x2a] = -0x27;
    pcVar3[0x2b] = '\0';
    pcVar3[0x2c] = '\x01';
    pcVar3[0x2d] = '\0';
    pcVar3[0x2e] = '\0';
    pcVar3[0x2f] = -0x80;
    SVar4.bridgeObject = (void *)0x20;
    SVar4.str = pcVar3;
    separator.bridgeObject = (void *)0xa;
    separator.str = (char *)0xe100000000000000;
    Swift::_print(SVar4,separator);
    pcVar2 = (char *)0x0;
  }
  else {
    pcVar3 = *(char **)(unaff_x20 + _TtC7PostHog10PostHogSDK::remoteConfig);
    if (pcVar3 == (char *)0x0) {
      return (char *)0x0;
    }
    pcVar2 = pcVar3;
    _swift_retain(pcVar3);
    FUN_100130a64();
  }
  _swift_release(pcVar3);
  return pcVar2;
}



/* Address: 0x10014c580 | _TtC7PostHog10PostHogSDK::getAllFeatureFlags */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC7PostHog10PostHogSDK::getAllFeatureFlags(ID param_1,SEL param_2)

{
  ID IVar1;
  long lVar2;
  NSArray *pNVar3;
  long lVar4;
  
  IVar1 = param_1;
  FUN_10014e7d4();
  if (((IVar1 & 1) != 0) && (lVar4 = *(long *)(param_1 + remoteConfig), lVar4 != 0)) {
    lVar2 = lVar4;
    _swift_retain();
    FUN_100130a64();
    _swift_release(lVar4);
    if (lVar2 == 0) {
      return 0;
    }
    FUN_10011597c();
    pNVar3 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(lVar2);
    return (ID)pNVar3;
  }
  return 0;
}



/* Address: 0x10014c620 | FUN_10014c620 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10014c620(undefined8 *param_1,long param_2,undefined8 param_3)

{
  FUN_10014bd8c(param_2,param_3,0);
  if (param_2 != 0) {
    FUN_1000f8cac(param_2 + PostHogFeatureFlagResult::payload,param_1,&DAT_100fae668,&DAT_100c2e4a0)
    ;
    return 0;
  }
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return 0;
}



/* Address: 0x10014c68c | _TtC7PostHog10PostHogSDK::getFeatureFlagPayload: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC7PostHog10PostHogSDK::getFeatureFlagPayload_(ID param_1,SEL param_2,ID param_3)

{
  char *pcVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  String SVar5;
  undefined1 auStack_60 [24];
  long local_48;
  
  SVar5 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pcVar1 = SVar5.str;
  FUN_10014bd8c(pcVar1,SVar5.bridgeObject,0);
  _swift_bridgeObjectRelease(SVar5.bridgeObject);
  if ((pcVar1 != (char *)0x0) &&
     (FUN_1000f8cac(pcVar1 + PostHogFeatureFlagResult::payload,auStack_60,&DAT_100fae668,
                    &DAT_100c2e4a0), local_48 != 0)) {
    FUN_100004640(auStack_60,local_48);
    lVar4 = *(long *)(local_48 + -8);
    (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar4 + 0x40));
    puVar3 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar4 + 0x10))(puVar3);
    puVar2 = puVar3;
    Swift::__bridgeAnythingToObjectiveC(puVar3,local_48);
    (**(code **)(lVar4 + 8))(puVar3,local_48);
    FUN_100004594(auStack_60);
    return (ID)puVar2;
  }
  return 0;
}


