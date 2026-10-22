/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10013cd18 | FUN_10013cd18 */

void FUN_10013cd18(void)

{
  byte bVar1;
  char *pcVar2;
  ID self;
  long unaff_x20;
  String SVar3;
  String separator;
  
  self = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::setupLock);
  objc_stub::lock(self);
  bVar1 = *(byte *)(unaff_x20 + _TtC7PostHog10PostHogSDK::enabled);
  objc_stub::unlock(self);
  if ((bVar1 & 1) == 0) {
    if (DAT_101057340 == '\x01') {
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
      _swift_release(pcVar2);
      return;
    }
  }
  else {
    FUN_100156c48(0,0);
  }
  return;
}



/* Address: 0x10013ce10 | _TtC7PostHog10PostHogSDK::startSession */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC7PostHog10PostHogSDK::startSession(ID param_1,SEL param_2)

{
  FUN_10014e7d4();
  if ((param_1 & 1) != 0) {
    FUN_100156c48(0,0);
  }
  return;
}



/* Address: 0x10013ce58 | FUN_10013ce58 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10013ce58(void)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  Date DVar4;
  char *pcVar5;
  long extraout_x8;
  undefined1 *puVar6;
  long unaff_x20;
  ID self;
  String SVar7;
  String separator;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  puVar3 = &DAT_100faf508;
  FUN_1000f7830(&DAT_100faf508,&DAT_100c2e2e0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_50 + -extraout_x8;
  self = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::setupLock);
  objc_stub::lock(self);
  bVar1 = *(byte *)(unaff_x20 + _TtC7PostHog10PostHogSDK::enabled);
  objc_stub::unlock(self);
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
      SVar7.bridgeObject = (void *)0x20;
      SVar7.str = pcVar5;
      separator.bridgeObject = (void *)0xa;
      separator.str = (char *)0xe100000000000000;
      Swift::_print(SVar7,separator);
      _swift_release(pcVar5);
      return;
    }
  }
  else {
    _swift_beginAccess(s_posthog_ios_100fb15a8,auStack_48,0,0);
    if ((s_posthog_ios_100fb15a8._0_8_ != -0x2fffffffffffffec ||
         ram0x000100fb15b0 != (undefined *)0x8000000100d92b80) &&
       (bVar2 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)s_posthog_ios_100fb15a8._0_8_,ram0x000100fb15b0,
                           (_StringComparisonResult)0x14), !bVar2)) {
      DVar4 = Foundation::Date::typeMetadataAccessor();
      (**(code **)(*(long *)(DVar4.unknown + -8) + 0x38))(puVar6,1,1,DVar4.unknown);
      FUN_100157428(0,0,puVar6,2);
      FUN_1000fb4c4(puVar6,&DAT_100faf508,&DAT_100c2e2e0);
    }
  }
  return;
}



/* Address: 0x10013d038 | _TtC7PostHog10PostHogSDK::endSession */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC7PostHog10PostHogSDK::endSession(ID param_1,SEL param_2)

{
  FUN_10013ce58(param_1);
  return;
}



/* Address: 0x10013d060 | FUN_10013d060 */

void FUN_10013d060(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined *puVar2;
  URL UVar3;
  undefined1 *puVar4;
  char *pcVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar7;
  undefined1 *puVar8;
  ID self;
  long lVar9;
  String SVar10;
  String separator;
  
  puVar2 = &DAT_100fae670;
  FUN_1000f7830(&DAT_100fae670,&DAT_100c2e0e8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = &stack0xffffffffffffffa0 + -extraout_x8;
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar9 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  lVar7 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  self = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::setupLock);
  objc_stub::lock(self);
  bVar1 = *(byte *)(unaff_x20 + _TtC7PostHog10PostHogSDK::enabled);
  objc_stub::unlock(self);
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
      SVar10.bridgeObject = (void *)0x20;
      SVar10.str = pcVar5;
      separator.bridgeObject = (void *)0xa;
      separator.str = (char *)0xe100000000000000;
      Swift::_print(SVar10,separator);
      _swift_release(pcVar5);
      return;
    }
  }
  else {
    FUN_1000f8cac(param_1,puVar8,&DAT_100fae670,&DAT_100c2e0e8);
    puVar4 = puVar8;
    (**(code **)(lVar9 + 0x30))(puVar8,1,UVar3.unknown);
    if ((int)puVar4 == 1) {
      FUN_1000fb4c4(puVar8,&DAT_100fae670,&DAT_100c2e0e8);
    }
    else {
      (**(code **)(lVar9 + 0x20))(lVar7,puVar8,UVar3.unknown);
      lVar6 = lVar7;
      FUN_1000fb25c(lVar7,param_2,param_3);
      FUN_1001432c4(0xd000000000000010,0x8000000100d92ba0,lVar6);
      _swift_bridgeObjectRelease(lVar6);
      (**(code **)(lVar9 + 8))(lVar7,UVar3.unknown);
    }
  }
  return;
}



/* Address: 0x10013d2a4 | _TtC7PostHog10PostHogSDK::captureDeepLinkWithUrl:referrer: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void _TtC7PostHog10PostHogSDK::captureDeepLinkWithUrl_referrer_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  URL UVar2;
  long extraout_x8;
  undefined1 *puVar3;
  String SVar4;
  
  puVar1 = &DAT_100fae670;
  FUN_1000f7830(&DAT_100fae670,&DAT_100c2e0e8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffd0 + -extraout_x8;
  if (param_3 == 0) {
    UVar2 = Foundation::URL::typeMetadataAccessor();
  }
  else {
    Foundation::URL::__unconditionallyBridgeFromObjectiveC((URL)param_3);
    UVar2 = Foundation::URL::typeMetadataAccessor();
  }
  (**(code **)(*(long *)(UVar2.unknown + -8) + 0x38))(puVar3,param_3 == 0,1);
  if (param_4 == 0) {
    SVar4 = (String)(ZEXT816(0) << 0x40);
  }
  else {
    SVar4 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  FUN_10013d060(puVar3,SVar4.str,SVar4.bridgeObject);
  _swift_bridgeObjectRelease(SVar4.bridgeObject);
  FUN_1000fb4c4(puVar3,&DAT_100fae670,&DAT_100c2e0e8);
  return;
}



/* Address: 0x10013d3b8 | FUN_10013d3b8 */

void FUN_10013d3b8(undefined8 param_1)

{
  byte bVar1;
  URL UVar2;
  undefined *puVar3;
  long lVar4;
  char *pcVar5;
  URL UVar6;
  URL UVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar8;
  long unaff_x20;
  undefined1 *puVar9;
  long lVar10;
  ID self;
  long lVar11;
  String SVar12;
  String separator;
  undefined1 auStack_b0 [80];
  
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar11 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  puVar9 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100fae670;
  FUN_1000f7830(&DAT_100fae670,&DAT_100c2e0e8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  lVar10 = (long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar8 = lVar10 - extraout_x12;
  (**(code **)(lVar11 + 0x10))(lVar8,param_1,UVar2.unknown);
  (**(code **)(lVar11 + 0x38))(lVar8,0,1,UVar2.unknown);
  self = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::setupLock);
  objc_stub::lock(self);
  bVar1 = *(byte *)(unaff_x20 + _TtC7PostHog10PostHogSDK::enabled);
  objc_stub::unlock(self);
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
      SVar12.bridgeObject = (void *)0x20;
      SVar12.str = pcVar5;
      separator.bridgeObject = (void *)0xa;
      separator.str = (char *)0xe100000000000000;
      Swift::_print(SVar12,separator);
      _swift_release(pcVar5);
    }
  }
  else {
    FUN_1000f8cac(lVar8,lVar10,&DAT_100fae670,&DAT_100c2e0e8);
    lVar4 = lVar10;
    (**(code **)(lVar11 + 0x30))(lVar10,1,UVar2.unknown);
    if ((int)lVar4 == 1) {
      FUN_1000fb4c4(lVar8,&DAT_100fae670,&DAT_100c2e0e8);
      lVar8 = lVar10;
    }
    else {
      (**(code **)(lVar11 + 0x20))(puVar9,lVar10,UVar2.unknown);
      UVar6.unknown = &DAT_100fae678;
      FUN_1000f7830(&DAT_100fae678,&DAT_100c2e190);
      _swift_initStackObject();
      *(undefined8 *)(UVar6.unknown + 0x18) = 2;
      *(undefined8 *)(UVar6.unknown + 0x10) = 1;
      *(undefined8 *)(UVar6.unknown + 0x20) = 0x6c7275;
      *(undefined8 *)(UVar6.unknown + 0x28) = 0xe300000000000000;
      SVar12 = Foundation::URL::get_absoluteString(UVar6);
      *(undefined **)(UVar6.unknown + 0x48) = PTR___type_metadata_for_Swift_String_100eac208;
      *(String *)(UVar6.unknown + 0x30) = SVar12;
      UVar7.unknown = UVar6.unknown;
      FUN_1000f8154(UVar6.unknown);
      _swift_setDeallocating(UVar6.unknown);
      FUN_1000fb4c4(UVar6.unknown + 0x20,&DAT_100fae490,&DAT_100c2de60);
      FUN_1001432c4(0xd000000000000010,0x8000000100d92ba0,UVar7.unknown);
      _swift_bridgeObjectRelease(UVar7.unknown);
      (**(code **)(lVar11 + 8))(puVar9,UVar2.unknown);
    }
  }
  FUN_1000fb4c4(lVar8,&DAT_100fae670,&DAT_100c2e0e8);
  return;
}



/* Address: 0x10013d6c4 | _TtC7PostHog10PostHogSDK::captureDeepLinkWithUrl: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC7PostHog10PostHogSDK::captureDeepLinkWithUrl_(ID param_1,SEL param_2,ID param_3)

{
  URL UVar1;
  long extraout_x8;
  long lVar2;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar2 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar2 + 0x40));
  Foundation::URL::__unconditionallyBridgeFromObjectiveC((URL)param_3);
  FUN_10013d3b8(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar2 + 8))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar1.unknown);
  return;
}



/* Address: 0x10013d768 | FUN_10013d768 */

void FUN_10013d768(long param_1)

{
  ulong *puVar1;
  byte bVar2;
  ID self;
  ulong uVar3;
  ulong uVar4;
  bool bVar5;
  URL UVar6;
  URL UVar7;
  char *pcVar8;
  _DictionaryStorage *this;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long extraout_x8;
  long lVar12;
  long extraout_x8_00;
  undefined *puVar13;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  code *pcVar14;
  long unaff_x20;
  long lVar15;
  long lVar16;
  code *pcVar17;
  long lVar18;
  String SVar19;
  String separator;
  char *local_150;
  long local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined *local_128;
  code *local_120;
  long local_118;
  long local_110;
  ID local_108;
  ulong local_e8;
  ulong uStack_e0;
  undefined1 auStack_d8 [64];
  undefined8 local_98;
  undefined8 local_90;
  String local_88;
  undefined *local_70;
  
  puVar13 = &DAT_100fae670;
  FUN_1000f7830(&DAT_100fae670,&DAT_100c2e0e8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar13 + -8) + 0x40));
  lVar9 = (long)&local_150 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar12 = lVar9 - extraout_x12;
  UVar6 = Foundation::URL::typeMetadataAccessor();
  lVar18 = *(long *)(UVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar18 + 0x40));
  puVar13 = (undefined *)(lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  local_128 = puVar13;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar13 = puVar13 + -extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar16 = *(long *)(param_1 + 0x10);
  if (lVar16 != 0) {
    local_108 = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::setupLock);
    param_1 = param_1 + ((ulong)*(byte *)(lVar18 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar18 + 0x50) ^ 0xffffffffffffffff));
    local_110 = _TtC7PostHog10PostHogSDK::enabled;
    lVar15 = *(long *)(lVar18 + 0x48);
    local_130 = 0x8000000100d91540;
    pcVar17 = *(code **)(lVar18 + 0x10);
    local_150 = "posthog-react-native";
    uStack_138 = 2;
    local_140 = 1;
    local_148 = lVar9;
    local_120 = pcVar17;
    local_118 = lVar15;
    do {
      (*pcVar17)((long)puVar13 - extraout_x12_01,param_1,UVar6.unknown);
      pcVar14 = *(code **)(lVar18 + 0x20);
      UVar7.unknown = puVar13;
      (*pcVar14)(puVar13,(long)puVar13 - extraout_x12_01,UVar6.unknown);
      bVar5 = Foundation::URL::get_isFileURL(UVar7);
      if (bVar5) {
        (**(code **)(lVar18 + 8))(puVar13,UVar6.unknown);
      }
      else {
        (*pcVar17)(lVar12,puVar13,UVar6.unknown);
        (**(code **)(lVar18 + 0x38))(lVar12,0,1,UVar6.unknown);
        self = local_108;
        objc_stub::lock(local_108);
        bVar2 = *(byte *)(unaff_x20 + local_110);
        objc_stub::unlock(self);
        lVar15 = local_118;
        if ((bVar2 & 1) == 0) {
          if (DAT_101057340 == '\x01') {
            pcVar8 = &DAT_100fae660;
            FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
            _swift_allocObject();
            *(undefined8 *)(pcVar8 + 0x18) = uStack_138;
            *(undefined8 *)(pcVar8 + 0x10) = local_140;
            *(undefined **)(pcVar8 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
            pcVar8[0x20] = 'X';
            pcVar8[0x21] = '\0';
            pcVar8[0x22] = '\0';
            pcVar8[0x23] = '\0';
            pcVar8[0x24] = '\0';
            pcVar8[0x25] = '\0';
            pcVar8[0x26] = '\0';
            pcVar8[0x27] = -0x30;
            *(undefined8 *)(pcVar8 + 0x28) = local_130;
            SVar19.bridgeObject = (void *)0x20;
            SVar19.str = pcVar8;
            separator.bridgeObject = (void *)0xa;
            separator.str = (char *)0xe100000000000000;
            Swift::_print(SVar19,separator);
            _swift_release(pcVar8);
          }
          FUN_1000fb4c4(lVar12,&DAT_100fae670,&DAT_100c2e0e8);
          (**(code **)(lVar18 + 8))(puVar13,UVar6.unknown);
          pcVar17 = local_120;
        }
        else {
          FUN_1000f8cac(lVar12,lVar9,&DAT_100fae670,&DAT_100c2e0e8);
          lVar15 = lVar9;
          (**(code **)(lVar18 + 0x30))(lVar9,1,UVar6.unknown);
          if ((int)lVar15 == 1) {
            FUN_1000fb4c4(lVar12,&DAT_100fae670,&DAT_100c2e0e8);
            (**(code **)(lVar18 + 8))(puVar13,UVar6.unknown);
            FUN_1000fb4c4(lVar9,&DAT_100fae670,&DAT_100c2e0e8);
            lVar15 = local_118;
            pcVar17 = local_120;
          }
          else {
            UVar7.unknown = local_128;
            (*pcVar14)(local_128,lVar9,UVar6.unknown);
            local_98 = 0x6c7275;
            local_90 = 0xe300000000000000;
            local_88 = Foundation::URL::get_absoluteString(UVar7);
            local_70 = PTR___type_metadata_for_Swift_String_100eac208;
            this = (_DictionaryStorage *)&DAT_100fae488;
            FUN_1000f7830(&DAT_100fae488,&DAT_100c2de58);
            lVar9 = 1;
            Swift::_DictionaryStorage::_allocate(this,1);
            FUN_1000f8cac(&local_98,&local_e8,&DAT_100fae490,&DAT_100c2de60);
            uVar4 = uStack_e0;
            uVar3 = local_e8;
            uVar10 = local_e8;
            uVar11 = uStack_e0;
            FUN_100071370();
            if ((uVar11 & 1) != 0) {
                    /* WARNING: Does not return */
              pcVar17 = (code *)SoftwareBreakpoint(1,0x10013dc74);
              (*pcVar17)();
            }
            lVar15 = lVar9 + (uVar10 >> 6) * 8;
            *(ulong *)(lVar15 + 0x40) = *(ulong *)(lVar15 + 0x40) | 1L << (uVar10 & 0x3f);
            puVar1 = (ulong *)(*(long *)(lVar9 + 0x30) + uVar10 * 0x10);
            *puVar1 = uVar3;
            puVar1[1] = uVar4;
            FUN_100011080(auStack_d8,*(long *)(lVar9 + 0x38) + uVar10 * 0x20);
            if (SCARRY8(*(long *)(lVar9 + 0x10),1)) {
                    /* WARNING: Does not return */
              pcVar17 = (code *)SoftwareBreakpoint(1,0x10013dc78);
              (*pcVar17)();
            }
            *(long *)(lVar9 + 0x10) = *(long *)(lVar9 + 0x10) + 1;
            FUN_1000fb4c4(&local_98,&DAT_100fae490,&DAT_100c2de60);
            FUN_1001432c4(0xd000000000000010,(ulong)local_150 | 0x8000000000000000,lVar9);
            _swift_release(lVar9);
            pcVar17 = *(code **)(lVar18 + 8);
            (*pcVar17)(local_128,UVar6.unknown);
            FUN_1000fb4c4(lVar12,&DAT_100fae670,&DAT_100c2e0e8);
            (*pcVar17)(puVar13,UVar6.unknown);
            lVar15 = local_118;
            pcVar17 = local_120;
            lVar9 = local_148;
          }
        }
      }
      param_1 = param_1 + lVar15;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  return;
}



/* Address: 0x10013dc78 | _TtC7PostHog10PostHogSDK::captureDeepLinkWithUrls: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC7PostHog10PostHogSDK::captureDeepLinkWithUrls_(ID param_1,SEL param_2,ID param_3)

{
  Foundation::URL::typeMetadataAccessor();
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  FUN_10013d768(param_3);
  _swift_bridgeObjectRelease(param_3);
  return;
}



/* Address: 0x10013dcd0 | FUN_10013dcd0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10013dcd0(ID param_1)

{
  bool bVar1;
  undefined *puVar2;
  URL UVar3;
  URL UVar4;
  undefined1 *puVar5;
  _StringGuts _Var6;
  long extraout_x8;
  long extraout_x8_00;
  long lVar7;
  long lVar8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar9;
  long lVar10;
  URL UVar11;
  code *pcVar12;
  code *pcVar13;
  String SVar14;
  String SVar15;
  undefined1 auStack_80 [8];
  long local_78;
  
  puVar2 = &DAT_100fae670;
  FUN_1000f7830(&DAT_100fae670,&DAT_100c2e0e8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar2 + -8) + 0x40));
  puVar5 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  UVar11.unknown = puVar5 + -extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar9 = (long)UVar11.unknown - extraout_x12_00;
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar10 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar10 + 0x40));
  lVar8 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_78 = lVar8;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar8 = lVar8 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar7 = lVar8 - extraout_x12_02;
  objc_stub::activityType(param_1);
  SVar14 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  _Var6.unknown = SVar14.bridgeObject;
  SVar15 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  if (SVar14 == SVar15) {
    _swift_bridgeObjectRelease(_Var6.unknown);
    _swift_bridgeObjectRelease(SVar15.bridgeObject);
  }
  else {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)SVar14.str,_Var6,(_StringComparisonResult)(__int8)SVar15.str);
    _swift_bridgeObjectRelease(_Var6.unknown);
    _swift_bridgeObjectRelease(SVar15.bridgeObject);
    if (!bVar1) {
      return;
    }
  }
  UVar4.unknown = (undefined *)objc_stub::webpageURL(param_1);
  if (UVar4.unknown != (undefined *)0x0) {
    Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar4);
    (**(code **)(lVar10 + 0x20))(lVar7,lVar8,UVar3.unknown);
    pcVar12 = *(code **)(lVar10 + 0x10);
    (*pcVar12)(lVar9,lVar7,UVar3.unknown);
    pcVar13 = *(code **)(lVar10 + 0x38);
    (*pcVar13)(lVar9,0,1,UVar3.unknown);
    UVar4.unknown = (undefined *)objc_stub::referrerURL(param_1);
    if (UVar4.unknown != (undefined *)0x0) {
      Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar4);
    }
    (*pcVar13)(puVar5,UVar4.unknown == (undefined *)0x0,1,UVar3.unknown);
    FUN_10011532c(puVar5,UVar11.unknown,&DAT_100fae670,&DAT_100c2e0e8);
    puVar5 = UVar11.unknown;
    (**(code **)(lVar10 + 0x30))(UVar11.unknown,1,UVar3.unknown);
    lVar8 = local_78;
    if ((int)puVar5 == 0) {
      (*pcVar12)(local_78,UVar11.unknown,UVar3.unknown);
      FUN_1000fb4c4(UVar11.unknown,&DAT_100fae670,&DAT_100c2e0e8);
      SVar14 = Foundation::URL::get_absoluteString(UVar11);
      (**(code **)(lVar10 + 8))(lVar8,UVar3.unknown);
    }
    else {
      FUN_1000fb4c4(UVar11.unknown,&DAT_100fae670,&DAT_100c2e0e8);
      SVar14 = (String)ZEXT816(0);
    }
    FUN_10013d060(lVar9,SVar14.str,SVar14.bridgeObject);
    _swift_bridgeObjectRelease(SVar14.bridgeObject);
    FUN_1000fb4c4(lVar9,&DAT_100fae670,&DAT_100c2e0e8);
    (**(code **)(lVar10 + 8))(lVar7,UVar3.unknown);
  }
  return;
}



/* Address: 0x10013e02c | _TtC7PostHog10PostHogSDK::captureDeepLinkWithUserActivity: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC7PostHog10PostHogSDK::captureDeepLinkWithUserActivity_(ID param_1,SEL param_2,ID param_3)

{
  FUN_10013dcd0(param_3);
  return;
}



/* Address: 0x10013e07c | FUN_10013e07c */

/* WARNING: Type propagation algorithm not settling */

char * FUN_10013e07c(undefined8 param_1,undefined8 param_2,char *param_3,char *param_4)

{
  void *pvVar1;
  code *pcVar2;
  char **ppcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  char *pcVar8;
  char *pcVar9;
  undefined8 *puVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ID IVar19;
  long unaff_x20;
  long lVar20;
  long lVar21;
  ulong uVar22;
  String SVar23;
  String SVar24;
  char *local_130;
  ulong uStack_128;
  undefined8 uStack_120;
  long local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  char *local_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  char *local_d0;
  void *pvStack_c8;
  undefined8 local_c0;
  undefined *puStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  char *local_a0;
  void *pvStack_98;
  undefined8 uStack_90;
  undefined *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  char *local_70;
  
  lVar21 = _TtC7PostHog10PostHogSDK::storage;
  lVar20 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::storage);
  if (lVar20 == 0) {
LAB_10013e144:
    pcVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1000f8154();
  }
  else {
    _swift_retain(lVar20);
    FUN_10015a838(&local_a0,0xd);
    _swift_release(lVar20);
    if (local_88 == (undefined *)0x0) {
      param_3 = &DAT_100c2e4a0;
      FUN_1000fb4c4(&local_a0,&DAT_100fae668);
      goto LAB_10013e144;
    }
    param_4 = &DAT_100fb09d8;
    FUN_1000f7830(&DAT_100fb09d8,&DAT_100c2ee28);
    ppcVar3 = &local_d0;
    param_3 = PTR___type_metadata_for_Any_100eae0c0 + 8;
    _swift_dynamicCast(ppcVar3,&local_a0,param_3,param_4,6);
    pcVar12 = local_d0;
    if (((ulong)ppcVar3 & 1) == 0) goto LAB_10013e144;
    pcVar4 = local_d0;
    FUN_1001389ac();
    _swift_bridgeObjectRelease(pcVar12);
    if (pcVar4 == (char *)0x0) goto LAB_10013e144;
  }
  IVar19 = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::groupsLock);
  local_70 = pcVar4;
  objc_stub::lock(IVar19);
  lVar21 = *(long *)(unaff_x20 + lVar21);
  if (lVar21 != 0) {
    _swift_retain(lVar21);
    FUN_10015a838(&local_a0,0xc);
    _swift_release(lVar21);
    if (local_88 == (undefined *)0x0) {
      param_3 = &DAT_100c2e4a0;
      FUN_1000fb4c4(&local_a0,&DAT_100fae668);
    }
    else {
      param_4 = &DAT_100fb09d8;
      FUN_1000f7830(&DAT_100fb09d8,&DAT_100c2ee28);
      ppcVar3 = &local_d0;
      param_3 = PTR___type_metadata_for_Any_100eae0c0 + 8;
      _swift_dynamicCast(ppcVar3,&local_a0,param_3,param_4,6);
      pcVar12 = local_d0;
      if (((ulong)ppcVar3 & 1) != 0) {
        pcVar5 = local_d0;
        FUN_100138efc();
        _swift_bridgeObjectRelease(pcVar12);
        if (pcVar5 != (char *)0x0) goto LAB_10013e218;
      }
    }
  }
  pcVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1000f8280();
LAB_10013e218:
  objc_stub::unlock(IVar19);
  if (*(long *)(pcVar5 + 0x10) != 0) {
    puVar6 = &DAT_100fafa98;
    FUN_1000f7830(&DAT_100fafa98,&DAT_100c2e850);
    local_d0 = pcVar5;
    puStack_b8 = puVar6;
    if (puVar6 == (undefined *)0x0) {
      _swift_bridgeObjectRetain(pcVar5);
      param_3 = &DAT_100c2e4a0;
      FUN_1000fb4c4(&local_d0,&DAT_100fae668,&DAT_100c2e4a0);
      FUN_10016fcc4(&local_a0,0x7370756f726724,&DAT_e700000000000000);
      FUN_1000fb4c4(&local_a0,&DAT_100fae668);
    }
    else {
      FUN_100011080(&local_d0,&local_a0);
      _swift_bridgeObjectRetain(pcVar5);
      param_4 = pcVar4;
      _swift_isUniquelyReferenced_nonNull_native();
      param_3 = &DAT_e700000000000000;
      local_d0 = pcVar4;
      FUN_10016fe74(&local_a0,0x7370756f726724);
      local_70 = local_d0;
    }
  }
  lVar21 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::remoteConfig);
  if (lVar21 != 0) {
    IVar19 = *(ID *)(lVar21 + 0x60);
    _swift_retain(lVar21);
    objc_stub::lock(IVar19);
    puVar6 = &DAT_100c2ef68;
    _swift_getKeyPath();
    puVar7 = puVar6;
    FUN_10012fef0();
    _swift_release(puVar6);
    objc_stub::unlock(IVar19);
    _swift_release(lVar21);
    if (puVar7 != (undefined *)0x0) {
      uVar16 = 1L << ((ulong)(byte)puVar7[0x20] & 0x3f);
      uVar22 = 0xffffffffffffffff;
      if ((puVar7[0x20] & 0x3f) < 6) {
        uVar22 = ~(-1L << (uVar16 & 0x3f));
      }
      uVar22 = uVar22 & *(ulong *)(puVar7 + 0x40);
      uVar16 = uVar16 + 0x3f >> 6;
      lVar21 = 0;
      pcVar12 = PTR___swiftEmptyArrayStorage_100eae0d8;
      do {
        if (uVar22 == 0) {
          uVar22 = uVar16;
          if ((long)uVar16 <= lVar21 + 1) {
            uVar22 = lVar21 + 1;
          }
          lVar17 = uVar22 - 1;
          lVar20 = lVar21;
          do {
            lVar21 = lVar20 + 1;
            if (SCARRY8(lVar20,1)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10013e8c0);
              (*pcVar2)();
            }
            if ((long)uVar16 <= lVar21) {
              uVar22 = 0;
              puStack_b8 = (undefined *)0x0;
              local_c0 = 0;
              uStack_a8 = 0;
              local_b0 = 0;
              pvStack_c8 = (void *)0x0;
              local_d0 = (char *)0x0;
              goto LAB_10013e440;
            }
            uVar22 = *(ulong *)((long)(puVar7 + 0x40) + lVar21 * 8);
            lVar20 = lVar20 + 1;
          } while (uVar22 == 0);
        }
        uVar15 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
        uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
        uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
        uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
        uVar22 = uVar22 - 1 & uVar22;
        uVar15 = LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) | lVar21 << 6;
        puVar10 = (undefined8 *)(*(long *)(puVar7 + 0x30) + uVar15 * 0x10);
        local_d0 = (char *)*puVar10;
        pvVar1 = (void *)puVar10[1];
        pvStack_c8 = pvVar1;
        FUN_10000cbfc(*(long *)(puVar7 + 0x38) + uVar15 * 0x20,&local_c0);
        _swift_bridgeObjectRetain(pvVar1);
        lVar17 = lVar21;
LAB_10013e440:
        pvVar1 = pvStack_c8;
        pcVar4 = local_d0;
        pvStack_98 = pvStack_c8;
        local_a0 = local_d0;
        local_88 = puStack_b8;
        uStack_90 = local_c0;
        uStack_78 = uStack_a8;
        local_80 = local_b0;
        if (pvStack_c8 == (void *)0x0) {
          _swift_release(puVar7);
          if (*(long *)(pcVar12 + 0x10) == 0) {
            _swift_bridgeObjectRelease(pcVar12);
          }
          else {
            puVar6 = &DAT_100faf898;
            FUN_1000f7830(&DAT_100faf898,&DAT_100c2eeb0);
            local_d0 = pcVar12;
            puStack_b8 = puVar6;
            if (puVar6 != (undefined *)0x0) {
              FUN_100011080(&local_d0,&local_a0);
              _swift_bridgeObjectRetain(pcVar12);
              pcVar4 = local_70;
              pcVar13 = local_70;
              _swift_isUniquelyReferenced_nonNull_native(local_70);
              local_d0 = pcVar4;
              FUN_10016fe74(&local_a0,0xd000000000000015,0x8000000100d93230,pcVar13);
              _swift_bridgeObjectRelease(pcVar12);
              _swift_bridgeObjectRelease(pcVar5);
              return local_d0;
            }
            _swift_bridgeObjectRetain(pcVar12);
            FUN_1000fb4c4(&local_d0,&DAT_100fae668,&DAT_100c2e4a0);
            FUN_10016fcc4(&local_a0,0xd000000000000015,0x8000000100d93230);
            FUN_1000fb4c4(&local_a0,&DAT_100fae668,&DAT_100c2e4a0);
            _swift_bridgeObjectRelease(pcVar12);
          }
          break;
        }
        FUN_100011080(&uStack_90,&local_d0);
        local_f0 = (char *)0x6572757461656624;
        uStack_e8 = 0xe90000000000002f;
        SVar23.bridgeObject = pvVar1;
        SVar23.str = pcVar4;
        SVar24.bridgeObject = param_4;
        SVar24.str = param_3;
        Swift::String::append(SVar23,SVar24);
        uVar15 = uStack_e8;
        pcVar13 = local_f0;
        FUN_10000cbfc(&local_d0,&local_f0);
        uStack_128 = uStack_e8;
        local_130 = local_f0;
        local_118 = lStack_d8;
        uStack_120 = uStack_e0;
        if (lStack_d8 == 0) {
          FUN_1000fb4c4(&local_130,&DAT_100fae668,&DAT_100c2e4a0);
          pcVar11 = local_70;
          _swift_bridgeObjectRetain(local_70);
          uVar14 = uVar15;
          FUN_100071370();
          _swift_bridgeObjectRelease(pcVar11);
          if ((uVar14 & 1) == 0) {
            _swift_bridgeObjectRelease(uVar15);
            uStack_108 = 0;
            local_110 = 0;
            uStack_f8 = 0;
            uStack_100 = 0;
          }
          else {
            pcVar9 = pcVar11;
            _swift_isUniquelyReferenced_nonNull_native();
            local_130 = pcVar11;
            if ((int)pcVar9 == 0) {
              FUN_10017057c();
            }
            pcVar11 = local_130;
            _swift_bridgeObjectRelease
                      (*(undefined8 *)(*(long *)(local_130 + 0x30) + (long)pcVar13 * 0x10 + 8));
            FUN_100011080(*(long *)(pcVar11 + 0x38) + (long)pcVar13 * 0x20,&local_110);
            FUN_1000d9d9c(pcVar13,pcVar11);
            _swift_bridgeObjectRelease(uVar15);
            local_70 = pcVar11;
          }
          FUN_1000fb4c4(&local_110,&DAT_100fae668,&DAT_100c2e4a0);
        }
        else {
          FUN_100011080(&local_130,&local_110);
          pcVar9 = local_70;
          pcVar8 = local_70;
          _swift_isUniquelyReferenced_nonNull_native();
          local_130 = pcVar9;
          pcVar11 = pcVar13;
          uVar14 = uVar15;
          FUN_100071370();
          uVar18 = (ulong)~(uint)uVar14 & 1;
          lVar21 = *(long *)(pcVar9 + 0x10) + uVar18;
          if (SCARRY8(*(long *)(pcVar9 + 0x10),uVar18)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10013e8c4);
            (*pcVar2)();
          }
          if (*(long *)(pcVar9 + 0x18) < lVar21) {
            FUN_100170ddc(lVar21,pcVar8);
            pcVar11 = pcVar13;
            uVar18 = uVar15;
            FUN_100071370();
            pcVar9 = local_130;
            if (((uint)uVar14 & 1) != ((uint)uVar18 & 1)) {
              Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10013e8d8);
              (*pcVar2)();
            }
          }
          else {
            pcVar9 = local_130;
            if (((ulong)pcVar8 & 1) == 0) {
              FUN_10017057c();
              pcVar9 = local_130;
            }
          }
          local_130 = pcVar9;
          if ((uVar14 & 1) == 0) {
            *(ulong *)(pcVar9 + ((ulong)pcVar11 >> 6) * 8 + 0x40) =
                 *(ulong *)(pcVar9 + ((ulong)pcVar11 >> 6) * 8 + 0x40) |
                 1L << ((ulong)pcVar11 & 0x3f);
            puVar10 = (undefined8 *)(*(long *)(pcVar9 + 0x30) + (long)pcVar11 * 0x10);
            *puVar10 = pcVar13;
            puVar10[1] = uVar15;
            FUN_100011080(&local_110,*(long *)(pcVar9 + 0x38) + (long)pcVar11 * 0x20);
            if (SCARRY8(*(long *)(pcVar9 + 0x10),1)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10013e8c8);
              (*pcVar2)();
            }
            *(long *)(pcVar9 + 0x10) = *(long *)(pcVar9 + 0x10) + 1;
            local_70 = pcVar9;
          }
          else {
            lVar21 = *(long *)(pcVar9 + 0x38) + (long)pcVar11 * 0x20;
            FUN_100004594(lVar21);
            FUN_100011080(&local_110,lVar21);
            _swift_bridgeObjectRelease(uVar15);
            local_70 = pcVar9;
          }
        }
        FUN_10000cbfc(&local_d0,&local_f0);
        puVar10 = &local_110;
        param_3 = PTR___type_metadata_for_Any_100eae0c0 + 8;
        param_4 = PTR___type_metadata_for_Swift_Bool_100eac570;
        _swift_dynamicCast(puVar10,&local_f0,param_3,PTR___type_metadata_for_Swift_Bool_100eac570,6)
        ;
        lVar21 = lVar17;
        if ((((ulong)puVar10 & 1) == 0) || ((char)local_110 == '\x01')) {
          pcVar13 = pcVar12;
          _swift_isUniquelyReferenced_nonNull_native();
          pcVar11 = pcVar12;
          if (((ulong)pcVar13 & 1) == 0) {
            pcVar11 = (char *)0x0;
            param_3 = &DAT_00000001;
            FUN_10010540c(0,*(long *)(pcVar12 + 0x10) + 1);
            param_4 = pcVar12;
          }
          uVar15 = *(ulong *)(pcVar11 + 0x10);
          pcVar12 = pcVar11;
          if (*(ulong *)(pcVar11 + 0x18) >> 1 <= uVar15) {
            pcVar12 = (char *)(ulong)(1 < *(ulong *)(pcVar11 + 0x18));
            param_3 = &DAT_00000001;
            FUN_10010540c(pcVar12,uVar15 + 1);
            param_4 = pcVar11;
          }
          *(ulong *)(pcVar12 + 0x10) = uVar15 + 1;
          *(char **)(pcVar12 + uVar15 * 0x10 + 0x20) = pcVar4;
          *(void **)(pcVar12 + uVar15 * 0x10 + 0x28) = pvVar1;
          FUN_100004594(&local_d0);
        }
        else {
          FUN_100004594(&local_d0);
          _swift_bridgeObjectRelease(pvVar1);
        }
      } while( true );
    }
  }
  _swift_bridgeObjectRelease(pcVar5);
  return local_70;
}



/* Address: 0x10013e8d8 | FUN_10013e8d8 */

byte FUN_10013e8d8(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  long unaff_x20;
  long lVar6;
  ID IVar7;
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar3 = PostHogConfig::personProfiles;
  lVar4 = _TtC7PostHog10PostHogSDK::config;
  lVar6 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::config);
  _swift_beginAccess(lVar6 + PostHogConfig::personProfiles,auStack_58,0,0);
  lVar2 = PostHogConfig::personProfiles;
  if (*(int *)(lVar6 + lVar3) == 0) {
    bVar5 = 0;
  }
  else {
    lVar6 = *(long *)(unaff_x20 + lVar4);
    _swift_beginAccess(lVar6 + PostHogConfig::personProfiles,auStack_70,0,0);
    lVar3 = PostHogConfig::storageManager;
    if (*(int *)(lVar6 + lVar2) == 2) {
      lVar2 = *(long *)(unaff_x20 + lVar4);
      _swift_beginAccess(lVar2 + PostHogConfig::storageManager,auStack_88,0,0);
      lVar3 = *(long *)(lVar2 + lVar3);
      if (lVar3 != 0) {
        IVar7 = *(ID *)(lVar3 + 0x30);
        _swift_retain(lVar3);
        objc_stub::lock(IVar7);
        FUN_10015cf7c(lVar3);
        objc_stub::unlock(IVar7);
        bVar5 = *(byte *)(lVar3 + 0x88);
        _swift_release(lVar3);
        lVar3 = PostHogConfig::storageManager;
        if ((bVar5 & 1) == 0) {
          lVar4 = *(long *)(unaff_x20 + lVar4);
          _swift_beginAccess(lVar4 + PostHogConfig::storageManager,auStack_a8,0,0);
          lVar4 = *(long *)(lVar4 + lVar3);
          if (lVar4 != 0) {
            IVar7 = *(ID *)(lVar4 + 0x38);
            _swift_retain(lVar4);
            objc_stub::lock(IVar7);
            if (*(char *)(lVar4 + 0x89) == '\x02') {
              if (*(long *)(lVar4 + 0x10) == 0) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x10013ea50);
                (*pcVar1)();
              }
              bVar5 = 0x11;
              FUN_10015c47c();
              *(byte *)(lVar4 + 0x89) = bVar5 & 1;
            }
            objc_stub::unlock(IVar7);
            bVar5 = *(byte *)(lVar4 + 0x89);
            _swift_release(lVar4);
            goto LAB_10013ea30;
          }
        }
      }
    }
    bVar5 = 1;
  }
LAB_10013ea30:
  return bVar5 & 1;
}



/* Address: 0x10013ea50 | FUN_10013ea50 */

bool FUN_10013ea50(char *param_1,void *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  code *pcVar5;
  char *pcVar6;
  _StringGuts _Var7;
  char *pcVar8;
  char *pcVar9;
  void *pvVar10;
  long lVar11;
  long unaff_x20;
  ID self;
  long lVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String separator;
  char *local_90;
  void *local_88;
  undefined *local_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar2 = PostHogConfig::personProfiles;
  lVar11 = _TtC7PostHog10PostHogSDK::config;
  lVar12 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::config);
  _Var7.unknown = auStack_58;
  pcVar8 = (char *)0x0;
  pvVar10 = (void *)0x0;
  _swift_beginAccess(lVar12 + PostHogConfig::personProfiles);
  lVar3 = PostHogConfig::storageManager;
  iVar1 = *(int *)(lVar12 + lVar2);
  if (iVar1 == 0) {
    local_90 = (char *)0x0;
    local_88 = (void *)0xe000000000000000;
    Swift::_StringGuts::grow(0x51,_Var7);
    SVar13.bridgeObject = param_2;
    SVar13.str = param_1;
    SVar17.bridgeObject = pvVar10;
    SVar17.str = pcVar8;
    Swift::String::append(SVar13,SVar17);
    SVar14.bridgeObject = (void *)0x8000000100d93560;
    SVar14.str = (char *)0xd00000000000004f;
    SVar18.bridgeObject = pvVar10;
    SVar18.str = pcVar8;
    Swift::String::append(SVar14,SVar18);
    pvVar4 = local_88;
    pcVar8 = local_90;
    if (DAT_101057340 == '\x01') {
      pcVar6 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      pcVar9 = (char *)0x7;
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
      local_90 = (char *)0x676f4874736f505b;
      local_88 = (void *)0xea0000000000205d;
      SVar15.bridgeObject = pvVar4;
      SVar15.str = pcVar8;
      SVar19.bridgeObject = pvVar10;
      SVar19.str = pcVar9;
      Swift::String::append(SVar15,SVar19);
      *(undefined **)(pcVar6 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      *(char **)(pcVar6 + 0x20) = local_90;
      *(void **)(pcVar6 + 0x28) = local_88;
      SVar16.bridgeObject = (void *)0x20;
      SVar16.str = pcVar6;
      separator.bridgeObject = (void *)0xa;
      separator.str = (char *)0xe100000000000000;
      Swift::_print(SVar16,separator);
      _swift_release(pcVar6);
    }
    _swift_bridgeObjectRelease(pvVar4);
  }
  else {
    lVar11 = *(long *)(unaff_x20 + lVar11);
    _swift_beginAccess(lVar11 + PostHogConfig::storageManager,auStack_70,0,0);
    lVar11 = *(long *)(lVar11 + lVar3);
    if (lVar11 != 0) {
      self = *(ID *)(lVar11 + 0x38);
      _swift_retain(lVar11);
      objc_stub::lock(self);
      if ((*(byte *)(lVar11 + 0x89) & 1) == 0) {
        *(undefined1 *)(lVar11 + 0x89) = 1;
        if (*(long *)(lVar11 + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10013ec54);
          (*pcVar5)();
        }
        local_78 = PTR___type_metadata_for_Swift_Bool_100eac570;
        local_90 = (char *)CONCAT71(local_90._1_7_,1);
        FUN_10015ab00(0x11,&local_90);
        FUN_100004594(&local_90);
      }
      objc_stub::unlock(self);
      _swift_release(lVar11);
    }
  }
  return iVar1 != 0;
}



/* Address: 0x10013ec54 | FUN_10013ec54 */

/* WARNING: Removing unreachable block (ram,0x00010013faac) */
/* WARNING: Removing unreachable block (ram,0x00010013fac0) */
/* WARNING: Removing unreachable block (ram,0x00010013fa80) */
/* WARNING: Removing unreachable block (ram,0x00010013fab8) */
/* WARNING: Removing unreachable block (ram,0x00010013fa84) */
/* WARNING: Removing unreachable block (ram,0x00010013fa98) */

undefined *
FUN_10013ec54(undefined *param_1,void *param_2,undefined *param_3,undefined *param_4,
             undefined *param_5,long param_6,ulong param_7,undefined8 param_8)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined *puVar4;
  CharacterSet CVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  char *pcVar8;
  void *pvVar9;
  undefined1 *puVar10;
  void *pvVar11;
  long extraout_x8;
  long extraout_x8_00;
  undefined *puVar12;
  long extraout_x8_01;
  long unaff_x20;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  ID IVar20;
  ulong uVar21;
  undefined *puVar22;
  ulong uVar23;
  String SVar24;
  undefined1 auStack_130 [8];
  long local_128;
  undefined *local_120;
  ulong local_118;
  undefined *local_110;
  void *pvStack_108;
  undefined *local_100;
  undefined *local_f8;
  undefined8 local_f0;
  undefined *local_e8;
  undefined *local_e0;
  long local_d8;
  undefined1 auStack_d0 [24];
  undefined *local_b8;
  void *pvStack_b0;
  undefined *local_a0;
  undefined *local_98;
  void *pvStack_90;
  undefined *local_70;
  
  puVar4 = &DAT_100faf508;
  local_110 = param_1;
  pvStack_108 = param_2;
  local_f8 = param_5;
  local_f0 = param_8;
  FUN_1000f7830(&DAT_100faf508,&DAT_100c2e2e0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_130 + -extraout_x8;
  local_e0 = (undefined *)Foundation::Date::typeMetadataAccessor();
  local_d8 = *(long *)(local_e0 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_d8 + 0x40));
  puVar12 = puVar6 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_e8 = puVar12;
  CVar5 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar17 = *(long *)(CVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar17 + 0x40));
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1000f8154();
  lVar19 = _TtC7PostHog10PostHogSDK::context;
  local_70 = puVar4;
  if ((param_7 & 1) != 0) {
    puVar13 = *(undefined **)(unaff_x20 + _TtC7PostHog10PostHogSDK::context);
    local_128 = lVar17;
    local_120 = CVar5.unknown;
    local_100 = puVar6;
    if (puVar13 == (undefined *)0x0) {
      puVar13 = puVar4;
      FUN_10013e07c();
    }
    else {
      local_118 = CONCAT44(local_118._4_4_,(int)param_7);
      puVar6 = puVar13;
      _swift_retain();
      FUN_100123e8c();
      _swift_release(puVar13);
      puVar14 = *(undefined **)(unaff_x20 + lVar19);
      if (puVar14 == (undefined *)0x0) {
        puVar22 = (undefined *)0x0;
      }
      else {
        puVar22 = puVar14;
        _swift_retain();
        FUN_100124854();
        _swift_release(puVar14);
        puVar13 = puVar14;
      }
      FUN_10013e07c();
      if (puVar6 != (undefined *)0x0) {
        puVar14 = puVar4;
        _swift_bridgeObjectRetain(puVar4);
        _swift_isUniquelyReferenced_nonNull_native();
        local_98 = puVar4;
        FUN_100153dac(puVar6,FUN_100152dbc,0,puVar14,&local_98);
        _swift_bridgeObjectRelease(puVar4);
        _swift_bridgeObjectRelease(puVar6);
        puVar4 = local_98;
      }
      if (puVar22 == (undefined *)0x0) {
        param_7 = local_118 & 0xffffffff;
      }
      else {
        puVar6 = puVar4;
        _swift_bridgeObjectRetain(puVar4);
        _swift_isUniquelyReferenced_nonNull_native();
        local_98 = puVar4;
        FUN_100153dac(puVar22,FUN_100152dbc,0,puVar6,&local_98);
        param_7 = local_118 & 0xffffffff;
        _swift_bridgeObjectRelease(puVar4);
        _swift_bridgeObjectRelease(puVar22);
        puVar4 = local_98;
      }
    }
    puVar6 = puVar4;
    _swift_bridgeObjectRetain(puVar4);
    _swift_isUniquelyReferenced_nonNull_native();
    local_98 = puVar4;
    FUN_100153dac(puVar13,FUN_100152dbc,0,puVar6,&local_98);
    _swift_bridgeObjectRelease(puVar4);
    _swift_bridgeObjectRelease(puVar13);
    puVar6 = local_98;
    local_70 = local_98;
    puVar4 = local_f8;
    if (param_4 != (undefined *)0x0) {
      puVar4 = &DAT_100fae898;
      FUN_1000f7830(&DAT_100fae898,&DAT_100c2e4e0);
      local_b8 = param_4;
      local_a0 = puVar4;
      if (puVar4 == (undefined *)0x0) {
        _swift_bridgeObjectRetain(param_4);
        FUN_1000fb4c4(&local_b8,&DAT_100fae668,&DAT_100c2e4a0);
        FUN_10016fcc4(&local_98,0x74657324,&DAT_e400000000000000);
        FUN_1000fb4c4(&local_98,&DAT_100fae668,&DAT_100c2e4a0);
        puVar4 = local_f8;
      }
      else {
        FUN_100011080(&local_b8,&local_98);
        _swift_bridgeObjectRetain(param_4);
        puVar4 = puVar6;
        _swift_isUniquelyReferenced_nonNull_native(puVar6);
        local_b8 = puVar6;
        FUN_10016fe74(&local_98,0x74657324,&DAT_e400000000000000,puVar4);
        puVar4 = local_f8;
        local_70 = local_b8;
      }
    }
    local_f8 = puVar4;
    if (puVar4 != (undefined *)0x0) {
      puVar6 = &DAT_100fae898;
      FUN_1000f7830(&DAT_100fae898,&DAT_100c2e4e0);
      local_b8 = puVar4;
      local_a0 = puVar6;
      if (puVar6 == (undefined *)0x0) {
        _swift_bridgeObjectRetain(puVar4);
        FUN_1000fb4c4(&local_b8,&DAT_100fae668,&DAT_100c2e4a0);
        FUN_10016fcc4(&local_98,0x636e6f5f74657324,0xe900000000000065);
        FUN_1000fb4c4(&local_98,&DAT_100fae668,&DAT_100c2e4a0);
      }
      else {
        FUN_100011080(&local_b8,&local_98);
        _swift_bridgeObjectRetain(puVar4);
        puVar4 = local_70;
        puVar6 = local_70;
        _swift_isUniquelyReferenced_nonNull_native(local_70);
        local_b8 = puVar4;
        FUN_10016fe74(&local_98,0x636e6f5f74657324,0xe900000000000065,puVar6);
        local_70 = local_b8;
      }
    }
    puVar4 = local_70;
    if (param_6 != 0) {
      lVar19 = 0x7370756f726724;
      if (*(long *)(local_70 + 0x10) == 0) {
LAB_10013f124:
        puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
        FUN_1000f8280();
      }
      else {
        _swift_bridgeObjectRetain(local_70);
        uVar16 = 0;
        FUN_100071370(0x7370756f726724);
        if ((uVar16 & 1) == 0) {
          _swift_bridgeObjectRelease(puVar4);
          goto LAB_10013f124;
        }
        FUN_10000cbfc(*(long *)(puVar4 + 0x38) + lVar19 * 0x20,&local_98);
        _swift_bridgeObjectRelease(puVar4);
        puVar6 = &DAT_100fafa98;
        FUN_1000f7830(&DAT_100fafa98,&DAT_100c2e850);
        ppuVar7 = &local_b8;
        _swift_dynamicCast(ppuVar7,&local_98,PTR___type_metadata_for_Any_100eae0c0 + 8,puVar6,6);
        puVar6 = local_b8;
        if (((ulong)ppuVar7 & 1) == 0) goto LAB_10013f124;
      }
      _swift_bridgeObjectRetain(param_6);
      puVar13 = puVar6;
      _swift_isUniquelyReferenced_nonNull_native(puVar6);
      local_98 = puVar6;
      FUN_100153b1c(param_6,FUN_100153a88,0,puVar13,&local_98);
      _swift_bridgeObjectRelease(param_6);
      puVar13 = local_98;
      puVar6 = &DAT_100fafa98;
      FUN_1000f7830(&DAT_100fafa98,&DAT_100c2e850);
      local_b8 = puVar13;
      local_a0 = puVar6;
      if (puVar6 == (undefined *)0x0) {
        FUN_1000fb4c4(&local_b8,&DAT_100fae668,&DAT_100c2e4a0);
        FUN_10016fcc4(&local_98,0x7370756f726724,&DAT_e700000000000000);
        FUN_1000fb4c4(&local_98,&DAT_100fae668,&DAT_100c2e4a0);
      }
      else {
        FUN_100011080(&local_b8,&local_98);
        puVar6 = puVar4;
        _swift_isUniquelyReferenced_nonNull_native(puVar4);
        local_b8 = puVar4;
        FUN_10016fe74(&local_98,0x7370756f726724,&DAT_e700000000000000,puVar6);
        local_70 = local_b8;
      }
    }
    lVar17 = PostHogConfig::storageManager;
    lVar15 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::config);
    lVar19 = lVar15 + PostHogConfig::storageManager;
    _swift_beginAccess(lVar19,auStack_d0,0,0);
    puVar4 = PTR___type_metadata_for_Swift_Bool_100eac570;
    uVar3 = (undefined1)lVar19;
    lVar19 = *(long *)(lVar15 + lVar17);
    puVar6 = local_70;
    if (lVar19 != 0) {
      IVar20 = *(ID *)(lVar19 + 0x30);
      _swift_retain(lVar19);
      objc_stub::lock(IVar20);
      FUN_10015cf7c(lVar19);
      objc_stub::unlock(IVar20);
      uVar3 = *(undefined1 *)(lVar19 + 0x88);
      _swift_release(lVar19);
      local_b8 = (undefined *)(CONCAT71(local_b8._1_7_,uVar3) & 0xffffffffffffff01);
      local_a0 = puVar4;
      FUN_100011080(&local_b8,&local_98);
      puVar6 = local_70;
      puVar13 = local_70;
      _swift_isUniquelyReferenced_nonNull_native(local_70);
      local_b8 = puVar6;
      ppuVar7 = &local_98;
      FUN_10016fe74(ppuVar7,0x6e6564695f736924,0xee00646569666974,puVar13);
      uVar3 = SUB81(ppuVar7,0);
      puVar6 = local_b8;
    }
    FUN_10013e8d8();
    local_b8 = (undefined *)(CONCAT71(local_b8._1_7_,uVar3) & 0xffffffffffffff01);
    local_a0 = puVar4;
    FUN_100011080(&local_b8,&local_98);
    puVar4 = puVar6;
    _swift_isUniquelyReferenced_nonNull_native(puVar6);
    local_b8 = puVar6;
    FUN_10016fe74(&local_98,0xd000000000000017,0x8000000100d931f0,puVar4);
    puVar4 = local_b8;
    local_70 = local_b8;
    if ((param_3 == (undefined *)0x0) || (*(long *)(param_3 + 0x10) == 0)) {
LAB_10013f428:
      SVar24 = (String)ZEXT816(0);
    }
    else {
      _swift_bridgeObjectRetain(param_3);
      lVar19 = 0x5f6e656572637324;
      uVar16 = 0;
      FUN_100071370(0x5f6e656572637324);
      if ((uVar16 & 1) == 0) {
        _swift_bridgeObjectRelease(param_3);
        goto LAB_10013f428;
      }
      FUN_10000cbfc(*(long *)(param_3 + 0x38) + lVar19 * 0x20,&local_98);
      _swift_bridgeObjectRelease(param_3);
      CVar5.unknown = (undefined *)&local_b8;
      _swift_dynamicCast(CVar5.unknown,&local_98,PTR___type_metadata_for_Any_100eae0c0 + 8,
                         PTR___type_metadata_for_Swift_String_100eac208,6);
      pvVar11 = pvStack_b0;
      if (((ulong)CVar5.unknown & 1) == 0) goto LAB_10013f428;
      local_98 = local_b8;
      pvStack_90 = pvStack_b0;
      Foundation::CharacterSet::get_whitespacesAndNewlines(CVar5);
      FUN_1001013b8();
      SVar24 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters
                         ((CharacterSet)(puVar12 + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0)));
      (**(code **)(local_128 + 8))
                (puVar12 + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0),local_120);
      _swift_bridgeObjectRelease(pvVar11);
    }
    pvVar9 = SVar24.bridgeObject;
    pcVar8 = SVar24.str;
    IVar20 = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::lastScreenLock);
    objc_stub::lock(IVar20);
    puVar6 = *(undefined **)(unaff_x20 + _TtC7PostHog10PostHogSDK::_lastScreenName);
    pvVar11 = (void *)((ulong *)(unaff_x20 + _TtC7PostHog10PostHogSDK::_lastScreenName))[1];
    _swift_bridgeObjectRetain(pvVar11);
    objc_stub::unlock(IVar20);
    if (pvVar11 != (void *)0x0) {
      uVar16 = (ulong)puVar6 & 0xffffffffffff;
      if (((ulong)pvVar11 & 0x2000000000000000) != 0) {
        uVar16 = (ulong)pvVar11 >> 0x38 & 0xf;
      }
      if (uVar16 == 0) {
        _swift_bridgeObjectRelease(pvVar11);
      }
      else {
        FUN_100155f7c(pcVar8,pvVar9);
        _swift_bridgeObjectRelease(pvVar9);
        pvVar9 = pvVar11;
        if (((ulong)pcVar8 & 1) != 0) {
          local_a0 = PTR___type_metadata_for_Swift_String_100eac208;
          local_b8 = puVar6;
          pvStack_b0 = pvVar11;
          FUN_100011080(&local_b8,&local_98);
          puVar6 = puVar4;
          _swift_isUniquelyReferenced_nonNull_native(puVar4);
          local_b8 = puVar4;
          FUN_10016fe74(&local_98,0x5f6e656572637324,0xec000000656d616e,puVar6);
          local_70 = local_b8;
          puVar4 = local_b8;
          puVar6 = local_100;
          goto LAB_10013f520;
        }
      }
    }
    _swift_bridgeObjectRelease(pvVar9);
    puVar6 = local_100;
  }
LAB_10013f520:
  lVar19 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::context);
  if (lVar19 != 0) {
    lVar17 = lVar19;
    _swift_retain(lVar19);
    FUN_100123f2c();
    _swift_release(lVar19);
    puVar12 = puVar4;
    _swift_bridgeObjectRetain(puVar4);
    _swift_isUniquelyReferenced_nonNull_native();
    local_98 = puVar4;
    FUN_100153dac(lVar17,FUN_100152dbc,0,puVar12,&local_98);
    _swift_bridgeObjectRelease(puVar4);
    _swift_bridgeObjectRelease(lVar17);
    local_70 = local_98;
    puVar4 = local_98;
  }
  puVar12 = local_e0;
  uVar16 = 0xeb0000000064695f;
  if ((param_3 == (undefined *)0x0) || (*(long *)(param_3 + 0x10) == 0)) {
LAB_10013f660:
    local_100 = (undefined *)0x0;
LAB_10013f674:
    pvVar9 = (void *)0x0;
    local_f8 = (undefined *)CONCAT44(local_f8._4_4_,1);
LAB_10013f67c:
    uVar18 = 0;
    FUN_1000f8cac(local_f0,puVar6,&DAT_100faf508,&DAT_100c2e2e0);
    lVar19 = local_d8;
    pcVar1 = *(code **)(local_d8 + 0x30);
    puVar10 = puVar6;
    (*pcVar1)(puVar6,1,puVar12);
    puVar13 = local_e8;
    if ((int)puVar10 == 1) {
      Foundation::Date::init();
      puVar10 = puVar6;
      (*pcVar1)(puVar6,1,puVar12);
      if ((int)puVar10 != 1) {
        FUN_1000fb4c4(puVar6,&DAT_100faf508,&DAT_100c2e2e0);
      }
    }
    else {
      (**(code **)(lVar19 + 0x20))(local_e8,puVar6,puVar12);
    }
    pvVar11 = (void *)0x0;
    puVar6 = puVar13;
    FUN_10015687c();
    (**(code **)(local_d8 + 8))(puVar13,puVar12);
    if (pvVar11 == (void *)0x0) {
      _swift_bridgeObjectRelease(pvVar9);
      goto LAB_10013f7c0;
    }
    if (((ulong)local_f8 & 1) == 0) {
      uVar16 = (ulong)pvVar9 & 0x2000000000000000;
      uVar21 = (ulong)local_100 & 0xffffffffffff;
      uVar23 = (ulong)pvVar9 >> 0x38 & 0xf;
      local_118 = uVar18;
      goto LAB_10013f794;
    }
LAB_10013f7e4:
    local_a0 = PTR___type_metadata_for_Swift_String_100eac208;
    local_b8 = puVar6;
    pvStack_b0 = pvVar11;
    FUN_100011080(&local_b8,&local_98);
    puVar6 = puVar4;
    _swift_isUniquelyReferenced_nonNull_native(puVar4);
    local_b8 = puVar4;
    FUN_10016fe74(&local_98,0x6e6f697373657324,0xeb0000000064695f,puVar6);
    local_70 = local_b8;
    puVar4 = local_b8;
    if (param_3 == (undefined *)0x0) goto LAB_10013f95c;
LAB_10013f848:
    uVar16 = 0xeb0000000064695f;
    if (*(long *)(param_3 + 0x10) == 0) goto LAB_10013f95c;
    _swift_bridgeObjectRetain(param_3);
    lVar19 = 0x74636e6974736964;
    FUN_100071370(0x74636e6974736964);
    if ((uVar16 & 1) == 0) {
      _swift_bridgeObjectRelease(param_3);
      goto LAB_10013f95c;
    }
    FUN_10000cbfc(*(long *)(param_3 + 0x38) + lVar19 * 0x20,&local_98);
    _swift_bridgeObjectRelease(param_3);
    ppuVar7 = &local_b8;
    _swift_dynamicCast(ppuVar7,&local_98,PTR___type_metadata_for_Any_100eae0c0 + 8,
                       PTR___type_metadata_for_Swift_String_100eac208,6);
    bVar2 = (int)ppuVar7 == 0;
    pvVar11 = pvStack_b0;
    if (bVar2) {
      pvVar11 = (void *)0x0;
    }
    uVar16 = (ulong)local_b8 & 0xffffffffffff;
    if (bVar2) {
      uVar16 = 0;
    }
  }
  else {
    _swift_bridgeObjectRetain(param_3);
    lVar19 = 0x6e6f697373657324;
    FUN_100071370(0x6e6f697373657324);
    if ((uVar16 & 1) == 0) {
      _swift_bridgeObjectRelease(param_3);
      goto LAB_10013f660;
    }
    FUN_10000cbfc(*(long *)(param_3 + 0x38) + lVar19 * 0x20,&local_98);
    _swift_bridgeObjectRelease(param_3);
    ppuVar7 = &local_b8;
    _swift_dynamicCast(ppuVar7,&local_98,PTR___type_metadata_for_Any_100eae0c0 + 8,
                       PTR___type_metadata_for_Swift_String_100eac208,6);
    pvVar11 = pvStack_b0;
    if (((ulong)ppuVar7 & 1) == 0) goto LAB_10013f660;
    local_100 = local_b8;
    if (pvStack_b0 == (void *)0x0) goto LAB_10013f674;
    local_118 = 0;
    uVar16 = (ulong)pvStack_b0 & 0x2000000000000000;
    uVar21 = (ulong)local_b8 & 0xffffffffffff;
    uVar23 = (ulong)pvStack_b0 >> 0x38 & 0xf;
    uVar18 = uVar21;
    if (uVar16 != 0) {
      uVar18 = uVar23;
    }
    if (uVar18 == 0) {
      local_f8 = (undefined *)((ulong)local_f8 & 0xffffffff00000000);
      puVar12 = local_e0;
      pvVar9 = pvStack_b0;
      goto LAB_10013f67c;
    }
    _swift_bridgeObjectRetain(pvStack_b0);
    puVar6 = local_100;
    pvVar9 = pvVar11;
LAB_10013f794:
    _swift_bridgeObjectRelease(pvVar9);
    if (uVar16 != 0) {
      uVar21 = uVar23;
    }
    uVar18 = local_118;
    if (uVar21 == 0) goto LAB_10013f7e4;
    _swift_bridgeObjectRelease(pvVar11);
    uVar18 = local_118;
LAB_10013f7c0:
    if (param_3 != (undefined *)0x0) goto LAB_10013f848;
LAB_10013f95c:
    uVar16 = 0;
    pvVar11 = (void *)0x0;
  }
  if ((param_7 & 1) == 0) {
    if (pvVar11 != (void *)0x0) {
      _swift_bridgeObjectRelease();
      if (((ulong)pvVar11 & 0x2000000000000000) != 0) {
        uVar16 = (ulong)pvVar11 >> 0x38 & 0xf;
      }
      puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
      if (uVar16 != 0) goto joined_r0x00010013f96c;
    }
    pvVar11 = pvStack_108;
    local_b8 = local_110;
    pvStack_b0 = pvStack_108;
    local_a0 = PTR___type_metadata_for_Swift_String_100eac208;
    FUN_100011080(&local_b8,&local_98);
    _swift_bridgeObjectRetain(pvVar11);
    puVar6 = puVar4;
    _swift_isUniquelyReferenced_nonNull_native(puVar4);
    local_b8 = puVar4;
    FUN_10016fe74(&local_98,0x74636e6974736964,0xeb0000000064695f,puVar6);
    puVar4 = local_b8;
    puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
    local_70 = local_b8;
  }
  else {
    _swift_bridgeObjectRelease();
    puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
joined_r0x00010013f96c:
  puVar12 = param_3;
  PTR___swiftEmptyArrayStorage_100eae0d8 = puVar6;
  if (param_3 == (undefined *)0x0) {
    FUN_1000f8154(puVar6);
    puVar12 = puVar6;
  }
  _swift_bridgeObjectRetain(param_3);
  _swift_bridgeObjectRetain(puVar4);
  _swift_bridgeObjectRetain(puVar12);
  puVar6 = puVar4;
  _swift_isUniquelyReferenced_nonNull_native(puVar4);
  local_98 = puVar4;
  FUN_100153dac(puVar12,FUN_100152dbc,0,puVar6,&local_98);
  _swift_bridgeObjectRelease(puVar12);
  puVar6 = local_98;
  if (uVar18 != 0) {
    _swift_release(local_98);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10013fa98);
    (*pcVar1)();
  }
  _swift_bridgeObjectRetain(local_98);
  _swift_bridgeObjectRelease(puVar4);
  puVar4 = puVar12;
  FUN_100152df4(puVar12);
  _swift_bridgeObjectRelease(puVar12);
  puVar12 = puVar6;
  _swift_isUniquelyReferenced_nonNull_native(puVar6);
  local_98 = puVar6;
  FUN_100103e2c(puVar4,FUN_100152dbc,0,puVar12,&local_98);
  _swift_release(puVar6);
  _swift_release(puVar4);
  return local_98;
}



/* Address: 0x10013fac8 | FUN_10013fac8 */

bool FUN_10013fac8(String *param_1,undefined8 param_2)

{
  _StringGuts _Var1;
  _StringGuts _Var2;
  String SVar3;
  bool bVar4;
  String SVar5;
  undefined *local_60;
  undefined *puStack_58;
  undefined1 auStack_50 [32];
  
  _Var1.unknown = param_1->str;
  _Var2.unknown = param_1->bridgeObject;
  SVar3 = *param_1;
  local_60 = _Var1.unknown;
  puStack_58 = _Var2.unknown;
  FUN_10000cbfc(param_2,auStack_50);
  _swift_bridgeObjectRetain(_Var2.unknown);
  SVar5.bridgeObject = (void *)0xe90000000000002f;
  SVar5.str = (char *)0x6572757461656624;
  bVar4 = Swift::String::hasPrefix(SVar5,SVar3);
  if ((bVar4) ||
     ((_Var1.unknown == (undefined *)0xd000000000000015 &&
      (_Var2.unknown == (undefined *)0x8000000100d93230)))) {
    bVar4 = true;
  }
  else {
    bVar4 = Swift::_stringCompareWithSmolCheck(_Var1,_Var2,(_StringComparisonResult)0x15);
  }
  FUN_1000fb4c4(&local_60,&DAT_100fae908,&DAT_100c2eec0);
  return bVar4;
}



/* Address: 0x10013fbac | FUN_10013fbac */

void FUN_10013fbac(void)

{
  byte bVar1;
  ulong uVar2;
  long unaff_x20;
  ID IVar3;
  ulong uVar4;
  long lVar5;
  char *pcVar6;
  undefined8 uVar7;
  String SVar8;
  String separator;
  
  IVar3 = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::setupLock);
  objc_stub::lock(IVar3);
  bVar1 = *(byte *)(unaff_x20 + _TtC7PostHog10PostHogSDK::enabled);
  objc_stub::unlock(IVar3);
  if ((bVar1 & 1) == 0) {
    if (DAT_101057340 != '\x01') {
      return;
    }
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
    SVar8.bridgeObject = (void *)0x20;
    SVar8.str = pcVar6;
    separator.bridgeObject = (void *)0xa;
    separator.str = (char *)0xe100000000000000;
    Swift::_print(SVar8,separator);
  }
  else {
    uVar4 = *(ulong *)(unaff_x20 + _TtC7PostHog10PostHogSDK::queue);
    if (uVar4 != 0) {
      uVar2 = uVar4;
      _swift_retain();
      FUN_100137c74();
      if ((uVar2 & 1) != 0) {
        IVar3 = *(ID *)(uVar4 + DAT_100fb0358);
        objc_stub::lock(IVar3);
        uVar7 = *(undefined8 *)(uVar4 + DAT_100fb0350);
        objc_stub::unlock(IVar3);
        _swift_retain(uVar4);
        FUN_1001370a8(uVar7,FUN_100153aec,uVar4,&DAT_100eb8a08,&DAT_100eb8a30,FUN_100155b0c,
                      &DAT_100eb8a48);
        _swift_release(uVar4);
      }
      _swift_release(uVar4);
    }
    lVar5 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::replayQueue);
    if (lVar5 != 0) {
      _swift_retain(lVar5);
      FUN_100168104();
      _swift_release(lVar5);
    }
    uVar4 = *(ulong *)(unaff_x20 + _TtC7PostHog10PostHogSDK::logsQueue);
    if (uVar4 != 0) {
      uVar2 = uVar4;
      _swift_retain();
      FUN_100137c74();
      if ((uVar2 & 1) != 0) {
        IVar3 = *(ID *)(uVar4 + DAT_100fb0358);
        objc_stub::lock(IVar3);
        uVar7 = *(undefined8 *)(uVar4 + DAT_100fb0350);
        objc_stub::unlock(IVar3);
        _swift_retain(uVar4);
        FUN_1001370a8(uVar7,FUN_100153abc,uVar4,&DAT_100eb8ad0,&DAT_100eb8af8,FUN_100155bb0,
                      &DAT_100eb8b10);
        _swift_release(uVar4);
      }
      _swift_release(uVar4);
    }
    pcVar6 = *(char **)(unaff_x20 + _TtC7PostHog10PostHogSDK::pushSubscriptionHandler);
    if (pcVar6 == (char *)0x0) {
      return;
    }
    _swift_retain(pcVar6);
    FUN_10015e1f0();
  }
  _swift_release(pcVar6);
  return;
}



/* Address: 0x10013fdf8 | _TtC7PostHog10PostHogSDK::flush */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC7PostHog10PostHogSDK::flush(ID param_1,SEL param_2)

{
  FUN_10013fbac(param_1);
  return;
}



/* Address: 0x10013fe20 | FUN_10013fe20 */

void FUN_10013fe20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined1 uVar3;
  bool bVar4;
  char *pcVar5;
  undefined8 uVar6;
  long extraout_x1;
  long unaff_x20;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  ID IVar10;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  _StringGuts _Var14;
  _StringGuts _Var15;
  ID self;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String separator;
  String separator_00;
  String separator_01;
  long local_120;
  undefined8 local_110;
  long local_108;
  undefined8 local_100;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  self = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::setupLock);
  objc_stub::lock(self);
  lVar12 = _TtC7PostHog10PostHogSDK::enabled;
  bVar2 = *(byte *)(unaff_x20 + _TtC7PostHog10PostHogSDK::enabled);
  objc_stub::unlock(self);
  lVar13 = _TtC7PostHog10PostHogSDK::pushSubscriptionHandler;
  if ((bVar2 & 1) == 0) {
    if (DAT_101057340 != '\x01') {
      return;
    }
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
    SVar19.bridgeObject = (void *)0x20;
    SVar19.str = pcVar5;
    separator.bridgeObject = (void *)0xa;
    separator.str = (char *)0xe100000000000000;
    Swift::_print(SVar19,separator);
    _swift_release(pcVar5);
    return;
  }
  lVar7 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::pushSubscriptionHandler);
  if (lVar7 == 0) {
LAB_10013ffc4:
    _Var14.unknown = (undefined *)0x0;
    _Var15.unknown = (undefined *)0x0;
    local_120 = 0;
    local_110 = 0;
    local_108 = 0;
    local_100 = 0;
  }
  else {
    local_120 = lVar7;
    local_108 = extraout_x1;
    _swift_retain();
    FUN_10015e570();
    _swift_release(lVar7);
    if (local_108 == 0) goto LAB_10013ffc4;
    objc_stub::lock(self);
    bVar2 = *(byte *)(unaff_x20 + lVar12);
    objc_stub::unlock(self);
    lVar7 = PostHogConfig::storageManager;
    local_110 = param_3;
    local_100 = param_4;
    if ((bVar2 & 1) == 0) {
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
        SVar20.bridgeObject = (void *)0x20;
        SVar20.str = pcVar5;
        separator_00.bridgeObject = (void *)0xa;
        separator_00.str = (char *)0xe100000000000000;
        Swift::_print(SVar20,separator_00);
        _swift_release(pcVar5);
      }
LAB_10014005c:
      _Var14.unknown = (undefined *)0x0;
      _Var15.unknown = (undefined *)0xe000000000000000;
    }
    else {
      lVar8 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::config);
      _Var15.unknown = auStack_f8;
      _swift_beginAccess(lVar8 + PostHogConfig::storageManager,_Var15.unknown,0,0);
      puVar9 = *(undefined **)(lVar8 + lVar7);
      if (puVar9 == (undefined *)0x0) goto LAB_10014005c;
      _Var14.unknown = puVar9;
      _swift_retain();
      FUN_10015cd34();
      _swift_release(puVar9);
    }
  }
  lVar7 = PostHogConfig::reuseAnonymousId;
  lVar8 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::storage);
  if (lVar8 != 0) {
    lVar16 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::config);
    _swift_beginAccess(lVar16 + PostHogConfig::reuseAnonymousId,auStack_80,0,0);
    uVar3 = *(undefined1 *)(lVar16 + lVar7);
    _swift_retain(lVar8);
    FUN_10015afa4(uVar3);
    _swift_release(lVar8);
  }
  lVar16 = PostHogConfig::storageManager;
  lVar7 = _TtC7PostHog10PostHogSDK::config;
  lVar17 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::config);
  _swift_beginAccess(lVar17 + PostHogConfig::storageManager,auStack_98,0,0);
  lVar8 = PostHogConfig::reuseAnonymousId;
  lVar16 = *(long *)(lVar17 + lVar16);
  if (lVar16 != 0) {
    _swift_beginAccess(lVar17 + PostHogConfig::reuseAnonymousId,auStack_b0,0,0);
    uVar3 = *(undefined1 *)(lVar17 + lVar8);
    _swift_retain(lVar16);
    FUN_10015d208(uVar3,0);
    _swift_release(lVar16);
  }
  IVar10 = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::flagCallReportedLock);
  objc_stub::lock(IVar10);
  lVar8 = _TtC7PostHog10PostHogSDK::flagCallReported;
  _swift_beginAccess(unaff_x20 + _TtC7PostHog10PostHogSDK::flagCallReported,auStack_c8,1,0);
  uVar6 = *(undefined8 *)(unaff_x20 + lVar8);
  *(undefined **)(unaff_x20 + lVar8) = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  _swift_bridgeObjectRelease(uVar6);
  objc_stub::unlock(IVar10);
  lVar8 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::sessionManager);
  FUN_100156e78();
  uVar6 = *(undefined8 *)(lVar8 + _TtC7PostHog21PostHogSessionManager::didBecomeActiveToken);
  *(undefined8 *)(lVar8 + _TtC7PostHog21PostHogSessionManager::didBecomeActiveToken) = 0;
  _swift_release(uVar6);
  uVar6 = *(undefined8 *)(lVar8 + _TtC7PostHog21PostHogSessionManager::didEnterBackgroundToken);
  *(undefined8 *)(lVar8 + _TtC7PostHog21PostHogSessionManager::didEnterBackgroundToken) = 0;
  _swift_release(uVar6);
  uVar6 = *(undefined8 *)(lVar8 + _TtC7PostHog21PostHogSessionManager::applicationEventToken);
  *(undefined8 *)(lVar8 + _TtC7PostHog21PostHogSessionManager::applicationEventToken) = 0;
  _swift_release(uVar6);
  lVar8 = _TtC7PostHog10PostHogSDK::remoteConfig;
  lVar16 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::remoteConfig);
  if (lVar16 != 0) {
    _swift_retain(lVar16);
    FUN_100131318();
    _swift_release(lVar16);
  }
  IVar10 = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::lastScreenLock);
  objc_stub::lock(IVar10);
  puVar1 = (undefined8 *)(unaff_x20 + _TtC7PostHog10PostHogSDK::_lastScreenName);
  uVar6 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  _swift_bridgeObjectRelease(uVar6);
  objc_stub::unlock(IVar10);
  lVar8 = *(long *)(unaff_x20 + lVar8);
  if (lVar8 != 0) {
    _swift_retain(lVar8);
    FUN_10012cef4(0,0);
    _swift_release(lVar8);
  }
  FUN_100151c48();
  if (_Var15.unknown == (undefined *)0x0) {
    return;
  }
  objc_stub::lock(self);
  bVar2 = *(byte *)(unaff_x20 + lVar12);
  objc_stub::unlock(self);
  lVar12 = PostHogConfig::storageManager;
  if ((bVar2 & 1) == 0) {
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
      SVar21.bridgeObject = (void *)0x20;
      SVar21.str = pcVar5;
      separator_01.bridgeObject = (void *)0xa;
      separator_01.str = (char *)0xe100000000000000;
      Swift::_print(SVar21,separator_01);
      _swift_release(pcVar5);
    }
    puVar9 = (undefined *)0x0;
    puVar11 = (undefined1 *)0xe000000000000000;
    if (_Var14.unknown == (undefined *)0x0) goto LAB_100140358;
LAB_10014036c:
    bVar4 = Swift::_stringCompareWithSmolCheck
                      (_Var14,_Var15,(_StringComparisonResult)(__int8)puVar9);
    _swift_bridgeObjectRelease(puVar11);
    if (bVar4) goto LAB_1001403c4;
    lVar12 = *(long *)(unaff_x20 + lVar13);
    if (lVar12 != 0) {
      _swift_retain(lVar12);
      FUN_10015e6c4(_Var14.unknown,_Var15.unknown,local_120,local_108,local_110,local_100);
      _swift_release(lVar12);
      goto LAB_1001403c4;
    }
  }
  else {
    lVar7 = *(long *)(unaff_x20 + lVar7);
    puVar11 = auStack_e0;
    _swift_beginAccess(lVar7 + PostHogConfig::storageManager,puVar11,0,0);
    puVar18 = *(undefined **)(lVar7 + lVar12);
    if (puVar18 == (undefined *)0x0) {
      puVar9 = (undefined *)0x0;
      puVar11 = (undefined1 *)0xe000000000000000;
    }
    else {
      puVar9 = puVar18;
      _swift_retain();
      FUN_10015cd34();
      _swift_release(puVar18);
    }
    if (_Var14.unknown != puVar9) goto LAB_10014036c;
LAB_100140358:
    if (_Var15.unknown != puVar11) goto LAB_10014036c;
    _swift_bridgeObjectRelease(puVar11);
LAB_1001403c4:
    lVar13 = *(long *)(unaff_x20 + lVar13);
    if (lVar13 != 0) {
      _swift_retain(lVar13);
      FUN_10015e888(local_120,local_108,local_110,local_100);
      _swift_release(lVar13);
      _swift_bridgeObjectRelease(local_100);
      goto LAB_100140410;
    }
  }
  _swift_bridgeObjectRelease(local_100);
LAB_100140410:
  _swift_bridgeObjectRelease(local_108);
  _swift_bridgeObjectRelease(_Var15.unknown);
  return;
}



/* Address: 0x10014043c | _TtC7PostHog10PostHogSDK::reset */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC7PostHog10PostHogSDK::reset(ID param_1,SEL param_2)

{
  FUN_10013fe20(param_1);
  return;
}



/* Address: 0x100140464 | FUN_100140464 */

void FUN_100140464(long param_1)

{
  byte bVar1;
  char *pcVar2;
  long unaff_x20;
  ID IVar3;
  String SVar4;
  String separator;
  
  IVar3 = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::setupLock);
  objc_stub::lock(IVar3);
  bVar1 = *(byte *)(unaff_x20 + _TtC7PostHog10PostHogSDK::enabled);
  objc_stub::unlock(IVar3);
  if ((bVar1 & 1) == 0) {
    if (DAT_101057340 == '\x01') {
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
      SVar4.bridgeObject = (void *)0x20;
      SVar4.str = pcVar2;
      separator.bridgeObject = (void *)0xa;
      separator.str = (char *)0xe100000000000000;
      Swift::_print(SVar4,separator);
      _swift_release(pcVar2);
      return;
    }
  }
  else {
    FUN_10016ead0();
    if (param_1 != 0) {
      IVar3 = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::personPropsLock);
      objc_stub::lock(IVar3);
      FUN_1001405a8();
      objc_stub::unlock(IVar3);
      _swift_bridgeObjectRelease(param_1);
      FUN_100151c48();
      return;
    }
  }
  return;
}



/* Address: 0x1001405a8 | FUN_1001405a8 */

void FUN_1001405a8(long param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long unaff_x21;
  undefined *local_68;
  undefined *local_60 [3];
  undefined *local_48;
  
  lVar6 = _TtC7PostHog10PostHogSDK::storage;
  lVar5 = *(long *)(param_1 + _TtC7PostHog10PostHogSDK::storage);
  if (lVar5 != 0) {
    _swift_retain(lVar5);
    FUN_10015a838(local_60,0xd);
    _swift_release(lVar5);
    if (local_48 == (undefined *)0x0) {
      FUN_1000fb4c4(local_60,&DAT_100fae668,&DAT_100c2e4a0);
    }
    else {
      puVar2 = &DAT_100fb09d8;
      FUN_1000f7830(&DAT_100fb09d8,&DAT_100c2ee28);
      ppuVar3 = &local_68;
      _swift_dynamicCast(ppuVar3,local_60,PTR___type_metadata_for_Any_100eae0c0 + 8,puVar2,6);
      if (((ulong)ppuVar3 & 1) != 0) {
        puVar2 = local_68;
        FUN_1001389ac();
        _swift_bridgeObjectRelease(local_68);
        if (puVar2 != (undefined *)0x0) goto LAB_100140680;
      }
    }
  }
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1000f8154();
LAB_100140680:
  if (param_2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100140754);
    (*pcVar1)();
  }
  _swift_bridgeObjectRetain(param_2);
  puVar4 = puVar2;
  _swift_isUniquelyReferenced_nonNull_native(puVar2);
  local_60[0] = puVar2;
  FUN_100103e2c(param_2,FUN_100152dbc,0,puVar4,local_60);
  if (unaff_x21 != 0) {
    _swift_bridgeObjectRelease(param_2);
    _swift_release(local_60[0]);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100140768);
    (*pcVar1)();
  }
  _swift_bridgeObjectRelease(param_2);
  puVar2 = local_60[0];
  lVar6 = *(long *)(param_1 + lVar6);
  if (lVar6 == 0) {
    _swift_release(local_60[0]);
  }
  else {
    _swift_retain(lVar6);
    puVar4 = puVar2;
    FUN_100137da0();
    _swift_release(puVar2);
    puVar2 = &DAT_100fb09d8;
    FUN_1000f7830(&DAT_100fb09d8,&DAT_100c2ee28);
    local_60[0] = puVar4;
    local_48 = puVar2;
    FUN_10015ab00(0xd,local_60);
    _swift_release(lVar6);
    FUN_100004594(local_60);
  }
  return;
}



/* Address: 0x100140768 | _TtC7PostHog10PostHogSDK::registerProperties: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC7PostHog10PostHogSDK::registerProperties_(ID param_1,SEL param_2,ID param_3)

{
  Dictionary<undefined,undefined> DVar1;
  
  DVar1 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  FUN_100140464(DVar1.unknown);
  _swift_bridgeObjectRelease(DVar1.unknown);
  return;
}



/* Address: 0x1001407d8 | FUN_1001407d8 */

void FUN_1001407d8(void)

{
  byte bVar1;
  char *pcVar2;
  long unaff_x20;
  ID IVar3;
  String SVar4;
  String separator;
  
  IVar3 = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::setupLock);
  objc_stub::lock(IVar3);
  bVar1 = *(byte *)(unaff_x20 + _TtC7PostHog10PostHogSDK::enabled);
  objc_stub::unlock(IVar3);
  if ((bVar1 & 1) != 0) {
    IVar3 = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::personPropsLock);
    objc_stub::lock(IVar3);
    FUN_10014091c();
    objc_stub::unlock(IVar3);
    FUN_100151c48();
    return;
  }
  if (DAT_101057340 == '\x01') {
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
    SVar4.bridgeObject = (void *)0x20;
    SVar4.str = pcVar2;
    separator.bridgeObject = (void *)0xa;
    separator.str = (char *)0xe100000000000000;
    Swift::_print(SVar4,separator);
    _swift_release(pcVar2);
    return;
  }
  return;
}



/* Address: 0x10014091c | FUN_10014091c */

void FUN_10014091c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *local_70 [3];
  undefined *local_58;
  undefined *local_48;
  
  lVar6 = _TtC7PostHog10PostHogSDK::storage;
  lVar5 = *(long *)(param_1 + _TtC7PostHog10PostHogSDK::storage);
  if (lVar5 != 0) {
    _swift_retain(lVar5);
    FUN_10015a838(local_70,0xd);
    _swift_release(lVar5);
    if (local_58 == (undefined *)0x0) {
      FUN_1000fb4c4(local_70,&DAT_100fae668,&DAT_100c2e4a0);
    }
    else {
      puVar1 = &DAT_100fb09d8;
      FUN_1000f7830(&DAT_100fb09d8,&DAT_100c2ee28);
      ppuVar2 = &local_48;
      _swift_dynamicCast(ppuVar2,local_70,PTR___type_metadata_for_Any_100eae0c0 + 8,puVar1,6);
      if (((ulong)ppuVar2 & 1) != 0) {
        puVar1 = local_48;
        FUN_1001389ac();
        _swift_bridgeObjectRelease(local_48);
        if (puVar1 != (undefined *)0x0) goto LAB_1001409fc;
      }
    }
  }
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1000f8154();
LAB_1001409fc:
  local_48 = puVar1;
  FUN_10016fcc4(local_70,param_2,param_3);
  FUN_1000fb4c4(local_70,&DAT_100fae668,&DAT_100c2e4a0);
  puVar1 = local_48;
  lVar6 = *(long *)(param_1 + lVar6);
  if (lVar6 != 0) {
    _swift_retain(lVar6);
    puVar3 = puVar1;
    FUN_100137da0();
    puVar4 = &DAT_100fb09d8;
    FUN_1000f7830(&DAT_100fb09d8,&DAT_100c2ee28);
    local_70[0] = puVar3;
    local_58 = puVar4;
    FUN_10015ab00(0xd,local_70);
    _swift_release(lVar6);
    FUN_100004594(local_70);
  }
  _swift_bridgeObjectRelease(puVar1);
  return;
}



/* Address: 0x100140aac | _TtC7PostHog10PostHogSDK::unregisterProperties: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC7PostHog10PostHogSDK::unregisterProperties_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  String SVar2;
  
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  IVar1 = param_1;
  FUN_10014e7d4();
  if ((IVar1 & 1) != 0) {
    IVar1 = *(ID *)(param_1 + personPropsLock);
    objc_stub::lock(IVar1);
    FUN_10014091c(param_1,SVar2.str,SVar2.bridgeObject);
    objc_stub::unlock(IVar1);
    FUN_100151c48();
  }
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  return;
}



/* Address: 0x100140b3c | FUN_100140b3c */

void FUN_100140b3c(undefined8 param_1,undefined8 param_2)

{
  FUN_100140c50(param_1,param_2,0,0);
  return;
}



/* Address: 0x100140b48 | _TtC7PostHog10PostHogSDK::identify: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC7PostHog10PostHogSDK::identify_(ID param_1,SEL param_2,ID param_3)

{
  String SVar1;
  
  SVar1 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  FUN_100140c50(SVar1.str,SVar1.bridgeObject,0,0);
  _swift_bridgeObjectRelease(SVar1.bridgeObject);
  return;
}



/* Address: 0x100140bac | FUN_100140bac */

void FUN_100140bac(void)

{
  FUN_100140c50();
  return;
}



/* Address: 0x100140bb4 | _TtC7PostHog10PostHogSDK::identifyWithDistinctId:userProperties: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void _TtC7PostHog10PostHogSDK::identifyWithDistinctId_userProperties_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  Dictionary<undefined,undefined> DVar1;
  String SVar2;
  
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  DVar1.unknown = (undefined *)0x0;
  if (param_4 != 0) {
    DVar1 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  }
  FUN_100140c50(SVar2.str,SVar2.bridgeObject,DVar1.unknown,0);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  _swift_bridgeObjectRelease(DVar1.unknown);
  return;
}



/* Address: 0x100140c50 | FUN_100140c50 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100140c50(char *param_1,undefined *param_2,char *param_3,char *param_4)

{
  byte bVar1;
  _StringGuts _Var2;
  Dictionary DVar3;
  code *pcVar4;
  bool bVar5;
  Encoding EVar6;
  Date DVar7;
  undefined *puVar8;
  char *pcVar9;
  ulong uVar10;
  _StringGuts _Var11;
  Dictionary DVar12;
  _StringGuts extraout_x1;
  undefined *extraout_x1_00;
  void *pvVar13;
  void *pvVar14;
  undefined *extraout_x1_01;
  _StringGuts _Var15;
  char *pcVar16;
  char *pcVar17;
  undefined1 *puVar18;
  long extraout_x8;
  long lVar19;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar20;
  long unaff_x20;
  char *pcVar21;
  ID IVar22;
  long lVar23;
  ID IVar24;
  long lVar25;
  char *pcVar26;
  long lVar27;
  undefined1 *puVar28;
  undefined1 *puVar29;
  long lVar30;
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
  String separator;
  String separator_00;
  String SVar43;
  String SVar44;
  String SVar45;
  String separator_01;
  String separator_02;
  String SVar46;
  String SVar47;
  String separator_03;
  String separator_04;
  long alStack_250 [2];
  undefined1 auStack_240 [8];
  undefined1 *local_238;
  long local_230;
  char *local_228;
  char *local_220;
  char *local_218;
  char *local_210;
  char *local_208;
  _StringGuts local_200;
  _StringGuts local_1f8;
  char *local_1e8;
  undefined1 auStack_1c8 [104];
  char *local_160;
  undefined1 *puStack_158;
  undefined *local_148;
  undefined1 auStack_140 [104];
  char *local_d8;
  void *local_d0;
  undefined *local_c0;
  Dictionary local_b8 [4];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  pcVar16 = param_3;
  pcVar21 = param_4;
  EVar6 = Encoding::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(EVar6.unknown + -8) + 0x40));
  DVar7 = Foundation::Date::typeMetadataAccessor();
  lVar19 = *(long *)(DVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar19 + 0x40));
  puVar28 = auStack_240 +
            (-(extraout_x8_00 + 0xfU & 0xfffffffffffffff0) -
            (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar8 = &DAT_100faf508;
  FUN_1000f7830(&DAT_100faf508,&DAT_100c2e2e0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar20 = (long)puVar28 - extraout_x8_01;
  IVar24 = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::setupLock);
  objc_stub::lock(IVar24);
  lVar27 = _TtC7PostHog10PostHogSDK::enabled;
  bVar1 = *(byte *)(unaff_x20 + _TtC7PostHog10PostHogSDK::enabled);
  objc_stub::unlock(IVar24);
  lVar25 = PostHogConfig::optOut;
  lVar23 = _TtC7PostHog10PostHogSDK::config;
  if ((bVar1 & 1) == 0) {
    if (DAT_101057340 != '\x01') {
      return;
    }
    pcVar16 = &DAT_100fae660;
    FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
    _swift_allocObject();
    pcVar16[0x18] = '\x02';
    pcVar16[0x19] = '\0';
    pcVar16[0x1a] = '\0';
    pcVar16[0x1b] = '\0';
    pcVar16[0x1c] = '\0';
    pcVar16[0x1d] = '\0';
    pcVar16[0x1e] = '\0';
    pcVar16[0x1f] = '\0';
    pcVar16[0x10] = '\x01';
    pcVar16[0x11] = '\0';
    pcVar16[0x12] = '\0';
    pcVar16[0x13] = '\0';
    pcVar16[0x14] = '\0';
    pcVar16[0x15] = '\0';
    pcVar16[0x16] = '\0';
    pcVar16[0x17] = '\0';
    *(undefined **)(pcVar16 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
    pcVar16[0x20] = 'X';
    pcVar16[0x21] = '\0';
    pcVar16[0x22] = '\0';
    pcVar16[0x23] = '\0';
    pcVar16[0x24] = '\0';
    pcVar16[0x25] = '\0';
    pcVar16[0x26] = '\0';
    pcVar16[0x27] = -0x30;
    pcVar16[0x28] = '@';
    pcVar16[0x29] = '\x15';
    pcVar16[0x2a] = -0x27;
    pcVar16[0x2b] = '\0';
    pcVar16[0x2c] = '\x01';
    pcVar16[0x2d] = '\0';
    pcVar16[0x2e] = '\0';
    pcVar16[0x2f] = -0x80;
    SVar32.bridgeObject = (void *)0x20;
    SVar32.str = pcVar16;
    separator_00.bridgeObject = (void *)0xa;
    separator_00.str = (char *)0xe100000000000000;
    Swift::_print(SVar32,separator_00);
    _swift_release(pcVar16);
    return;
  }
  uVar10 = (ulong)param_1 & 0xffffffffffff;
  if (((ulong)param_2 & 0x2000000000000000) != 0) {
    uVar10 = (ulong)param_2 >> 0x38 & 0xf;
  }
  if (uVar10 == 0) {
    local_d8 = (char *)0x0;
    local_d0 = (void *)0xe000000000000000;
    Swift::_StringGuts::grow(0x34,extraout_x1);
    SVar33.bridgeObject = (void *)0x8000000100d92cd0;
    SVar33.str = &DAT_d000000000000032;
    SVar43.bridgeObject = pcVar21;
    SVar43.str = pcVar16;
    Swift::String::append(SVar33,SVar43);
    SVar34.bridgeObject = param_2;
    SVar34.str = param_1;
    SVar44.bridgeObject = pcVar21;
    SVar44.str = pcVar16;
    Swift::String::append(SVar34,SVar44);
    pvVar13 = local_d0;
    pcVar16 = local_d8;
    if (DAT_101057340 == '\x01') {
      pcVar9 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      pcVar26 = (char *)0x7;
      _swift_allocObject();
      pcVar9[0x18] = '\x02';
      pcVar9[0x19] = '\0';
      pcVar9[0x1a] = '\0';
      pcVar9[0x1b] = '\0';
      pcVar9[0x1c] = '\0';
      pcVar9[0x1d] = '\0';
      pcVar9[0x1e] = '\0';
      pcVar9[0x1f] = '\0';
      pcVar9[0x10] = '\x01';
      pcVar9[0x11] = '\0';
      pcVar9[0x12] = '\0';
      pcVar9[0x13] = '\0';
      pcVar9[0x14] = '\0';
      pcVar9[0x15] = '\0';
      pcVar9[0x16] = '\0';
      pcVar9[0x17] = '\0';
      local_d8 = (char *)0x676f4874736f505b;
      local_d0 = (void *)0xea0000000000205d;
      SVar35.bridgeObject = pvVar13;
      SVar35.str = pcVar16;
      SVar45.bridgeObject = pcVar21;
      SVar45.str = pcVar26;
      Swift::String::append(SVar35,SVar45);
      *(undefined **)(pcVar9 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      *(char **)(pcVar9 + 0x20) = local_d8;
      *(void **)(pcVar9 + 0x28) = local_d0;
      SVar36.bridgeObject = (void *)0x20;
      SVar36.str = pcVar9;
      separator_01.bridgeObject = (void *)0xa;
      separator_01.str = (char *)0xe100000000000000;
      Swift::_print(SVar36,separator_01);
      _swift_release(pcVar9);
    }
    _swift_bridgeObjectRelease(pvVar13);
    return;
  }
  lVar30 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::config);
  local_208 = param_4;
  local_200.unknown = param_2;
  local_1f8.unknown = param_1;
  _swift_beginAccess(lVar30 + PostHogConfig::optOut,auStack_80,0,0);
  if (*(char *)(lVar30 + lVar25) == '\x01') {
    if (DAT_101057340 != '\x01') {
      return;
    }
    pcVar16 = &DAT_100fae660;
    FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
    _swift_allocObject();
    pcVar16[0x18] = '\x02';
    pcVar16[0x19] = '\0';
    pcVar16[0x1a] = '\0';
    pcVar16[0x1b] = '\0';
    pcVar16[0x1c] = '\0';
    pcVar16[0x1d] = '\0';
    pcVar16[0x1e] = '\0';
    pcVar16[0x1f] = '\0';
    pcVar16[0x10] = '\x01';
    pcVar16[0x11] = '\0';
    pcVar16[0x12] = '\0';
    pcVar16[0x13] = '\0';
    pcVar16[0x14] = '\0';
    pcVar16[0x15] = '\0';
    pcVar16[0x16] = '\0';
    pcVar16[0x17] = '\0';
    *(undefined **)(pcVar16 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
    pcVar16[0x20] = '%';
    pcVar16[0x21] = '\0';
    pcVar16[0x22] = '\0';
    pcVar16[0x23] = '\0';
    pcVar16[0x24] = '\0';
    pcVar16[0x25] = '\0';
    pcVar16[0x26] = '\0';
    pcVar16[0x27] = -0x30;
    pcVar16[0x28] = '\0';
    pcVar16[0x29] = '\x16';
    pcVar16[0x2a] = -0x27;
    pcVar16[0x2b] = '\0';
    pcVar16[0x2c] = '\x01';
    pcVar16[0x2d] = '\0';
    pcVar16[0x2e] = '\0';
    pcVar16[0x2f] = -0x80;
    SVar31.bridgeObject = (void *)0x20;
    SVar31.str = pcVar16;
    separator.bridgeObject = (void *)0xa;
    separator.str = (char *)0xe100000000000000;
    Swift::_print(SVar31,separator);
    goto LAB_100141768;
  }
  uVar10 = 0xd000000000000031;
  FUN_10013ea50(0xd000000000000031,0x8000000100d92bc0);
  lVar25 = PostHogConfig::storageManager;
  if ((uVar10 & 1) == 0) {
    return;
  }
  local_210 = *(char **)(unaff_x20 + _TtC7PostHog10PostHogSDK::queue);
  if (local_210 == (char *)0x0) {
    return;
  }
  lVar30 = *(long *)(unaff_x20 + lVar23);
  pcVar16 = (char *)0x0;
  puVar18 = (undefined1 *)0x0;
  _swift_beginAccess(lVar30 + PostHogConfig::storageManager,auStack_98);
  local_218 = *(char **)(lVar30 + lVar25);
  if (local_218 == (char *)0x0) {
    return;
  }
  _swift_retain(local_210);
  _swift_retain(local_218);
  objc_stub::lock(IVar24);
  bVar1 = *(byte *)(unaff_x20 + lVar27);
  objc_stub::unlock(IVar24);
  lVar27 = PostHogConfig::storageManager;
  local_220 = param_3;
  if ((bVar1 & 1) == 0) {
    if (DAT_101057340 == '\x01') {
      pcVar21 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      _swift_allocObject();
      pcVar21[0x18] = '\x02';
      pcVar21[0x19] = '\0';
      pcVar21[0x1a] = '\0';
      pcVar21[0x1b] = '\0';
      pcVar21[0x1c] = '\0';
      pcVar21[0x1d] = '\0';
      pcVar21[0x1e] = '\0';
      pcVar21[0x1f] = '\0';
      pcVar21[0x10] = '\x01';
      pcVar21[0x11] = '\0';
      pcVar21[0x12] = '\0';
      pcVar21[0x13] = '\0';
      pcVar21[0x14] = '\0';
      pcVar21[0x15] = '\0';
      pcVar21[0x16] = '\0';
      pcVar21[0x17] = '\0';
      *(undefined **)(pcVar21 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      pcVar21[0x20] = 'X';
      pcVar21[0x21] = '\0';
      pcVar21[0x22] = '\0';
      pcVar21[0x23] = '\0';
      pcVar21[0x24] = '\0';
      pcVar21[0x25] = '\0';
      pcVar21[0x26] = '\0';
      pcVar21[0x27] = -0x30;
      pcVar21[0x28] = '@';
      pcVar21[0x29] = '\x15';
      pcVar21[0x2a] = -0x27;
      pcVar21[0x2b] = '\0';
      pcVar21[0x2c] = '\x01';
      pcVar21[0x2d] = '\0';
      pcVar21[0x2e] = '\0';
      pcVar21[0x2f] = -0x80;
      SVar37.bridgeObject = (void *)0x20;
      SVar37.str = pcVar21;
      separator_02.bridgeObject = (void *)0xa;
      separator_02.str = (char *)0xe100000000000000;
      puVar18 = (undefined1 *)0xa;
      pcVar16 = (char *)0xe100000000000000;
      Swift::_print(SVar37,separator_02);
      _swift_release(pcVar21);
    }
    local_228 = (char *)0x0;
    puVar29 = (undefined1 *)0xe000000000000000;
  }
  else {
    lVar25 = *(long *)(unaff_x20 + lVar23);
    puVar29 = auStack_1c8;
    pcVar16 = (char *)0x0;
    puVar18 = (undefined1 *)0x0;
    _swift_beginAccess(lVar25 + PostHogConfig::storageManager);
    pcVar21 = *(char **)(lVar25 + lVar27);
    if (pcVar21 == (char *)0x0) {
      local_228 = (char *)0x0;
      puVar29 = (undefined1 *)0xe000000000000000;
    }
    else {
      pcVar9 = pcVar21;
      _swift_retain();
      FUN_10015cd34();
      local_228 = pcVar9;
      _swift_release(pcVar21);
    }
  }
  pcVar26 = local_218;
  IVar24 = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::identifyLock);
  objc_stub::lock(IVar24);
  IVar22 = *(ID *)(pcVar26 + 0x30);
  objc_stub::lock(IVar22);
  FUN_10015cf7c(pcVar26);
  objc_stub::unlock(IVar22);
  pcVar9 = local_220;
  pcVar21 = local_228;
  bVar1 = pcVar26[0x88];
  if (bVar1 != 2) {
    if (((local_1f8.unknown == local_228) && (local_200.unknown == puVar29)) ||
       (pcVar16 = local_228, puVar18 = puVar29,
       bVar5 = Swift::_stringCompareWithSmolCheck
                         (local_1f8,local_200,(_StringComparisonResult)(__int8)local_228), bVar5)) {
      if ((bVar1 & 1) == 0) goto LAB_100141314;
      objc_stub::unlock(IVar24);
      if (((pcVar9 != (char *)0x0) && (*(long *)(pcVar9 + 0x10) != 0)) ||
         ((_Var15.unknown = extraout_x1_00, local_208 != (char *)0x0 &&
          (*(long *)(local_208 + 0x10) != 0)))) {
        _swift_bridgeObjectRelease(puVar29);
        _Var2.unknown = local_1f8.unknown;
        _Var15.unknown = local_200.unknown;
        pcVar21 = local_208;
        _Var11.unknown = local_1f8.unknown;
        FUN_100142274(local_1f8.unknown,local_200.unknown,pcVar9,local_208);
        pcVar16 = local_210;
        if (((ulong)_Var11.unknown & 1) == 0) {
          if (DAT_101057340 == '\x01') {
            pcVar21 = &DAT_100fae660;
            FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
            _swift_allocObject();
            pcVar21[0x18] = '\x02';
            pcVar21[0x19] = '\0';
            pcVar21[0x1a] = '\0';
            pcVar21[0x1b] = '\0';
            pcVar21[0x1c] = '\0';
            pcVar21[0x1d] = '\0';
            pcVar21[0x1e] = '\0';
            pcVar21[0x1f] = '\0';
            pcVar21[0x10] = '\x01';
            pcVar21[0x11] = '\0';
            pcVar21[0x12] = '\0';
            pcVar21[0x13] = '\0';
            pcVar21[0x14] = '\0';
            pcVar21[0x15] = '\0';
            pcVar21[0x16] = '\0';
            pcVar21[0x17] = '\0';
            *(undefined **)(pcVar21 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
            pcVar21[0x20] = 'g';
            pcVar21[0x21] = '\0';
            pcVar21[0x22] = '\0';
            pcVar21[0x23] = '\0';
            pcVar21[0x24] = '\0';
            pcVar21[0x25] = '\0';
            pcVar21[0x26] = '\0';
            pcVar21[0x27] = -0x30;
            pcVar21[0x28] = ' ';
            pcVar21[0x29] = ',';
            pcVar21[0x2a] = -0x27;
            pcVar21[0x2b] = '\0';
            pcVar21[0x2c] = '\x01';
            pcVar21[0x2d] = '\0';
            pcVar21[0x2e] = '\0';
            pcVar21[0x2f] = -0x80;
            SVar42.bridgeObject = (void *)0x20;
            SVar42.str = pcVar21;
            separator_04.bridgeObject = (void *)0xa;
            separator_04.str = (char *)0xe100000000000000;
            Swift::_print(SVar42,separator_04);
            _swift_release(pcVar21);
          }
          _swift_release(pcVar26);
        }
        else {
          (**(code **)(lVar19 + 0x38))(lVar20,1,1,DVar7.unknown);
          *(long *)(lVar20 + -0x10) = lVar20;
          FUN_100145cf8(0x74657324,&DAT_e400000000000000,_Var2.unknown,_Var15.unknown,0,pcVar9,
                        pcVar21,0);
          FUN_1000fb4c4(lVar20,&DAT_100faf508,&DAT_100c2e2e0);
          FUN_100142640(pcVar9,pcVar21);
          _swift_release(pcVar16);
          pcVar16 = pcVar26;
        }
        goto LAB_100141768;
      }
    }
    else {
      if ((bVar1 & 1) == 0) goto LAB_1001418a4;
      objc_stub::unlock(IVar24);
      _Var15.unknown = extraout_x1_01;
    }
    local_d8 = (char *)0x0;
    local_d0 = (void *)0xe000000000000000;
    Swift::_StringGuts::grow(0x1e,_Var15);
    _swift_bridgeObjectRelease(local_d0);
    local_d8 = (char *)0xd00000000000001c;
    local_d0 = (void *)0x8000000100d92c00;
    SVar39.bridgeObject = puVar29;
    SVar39.str = pcVar21;
    SVar46.bridgeObject = puVar18;
    SVar46.str = pcVar16;
    Swift::String::append(SVar39,SVar46);
    _swift_bridgeObjectRelease(puVar29);
    pvVar13 = local_d0;
    pcVar21 = local_d8;
    pcVar16 = local_210;
    if (DAT_101057340 == '\x01') {
      pcVar9 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      pcVar17 = (char *)0x7;
      _swift_allocObject();
      pcVar9[0x18] = '\x02';
      pcVar9[0x19] = '\0';
      pcVar9[0x1a] = '\0';
      pcVar9[0x1b] = '\0';
      pcVar9[0x1c] = '\0';
      pcVar9[0x1d] = '\0';
      pcVar9[0x1e] = '\0';
      pcVar9[0x1f] = '\0';
      pcVar9[0x10] = '\x01';
      pcVar9[0x11] = '\0';
      pcVar9[0x12] = '\0';
      pcVar9[0x13] = '\0';
      pcVar9[0x14] = '\0';
      pcVar9[0x15] = '\0';
      pcVar9[0x16] = '\0';
      pcVar9[0x17] = '\0';
      local_d8 = (char *)0x676f4874736f505b;
      local_d0 = (void *)0xea0000000000205d;
      SVar40.bridgeObject = pvVar13;
      SVar40.str = pcVar21;
      SVar47.bridgeObject = puVar18;
      SVar47.str = pcVar17;
      Swift::String::append(SVar40,SVar47);
      *(undefined **)(pcVar9 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      *(char **)(pcVar9 + 0x20) = local_d8;
      *(void **)(pcVar9 + 0x28) = local_d0;
      SVar41.bridgeObject = (void *)0x20;
      SVar41.str = pcVar9;
      separator_03.bridgeObject = (void *)0xa;
      separator_03.str = (char *)0xe100000000000000;
      Swift::_print(SVar41,separator_03);
      _swift_release(pcVar9);
      _swift_bridgeObjectRelease(pvVar13);
    }
    else {
      _swift_bridgeObjectRelease(local_d0);
    }
    _swift_release(pcVar26);
    goto LAB_100141768;
  }
  if (((local_1f8.unknown == local_228) && (local_200.unknown == puVar29)) ||
     (bVar5 = Swift::_stringCompareWithSmolCheck
                        (local_1f8,local_200,(_StringComparisonResult)(__int8)local_228), bVar5)) {
LAB_100141314:
    IVar22 = *(ID *)(pcVar26 + 0x30);
    objc_stub::lock(IVar22);
    pcVar26[0x88] = '\x01';
    if (*(long *)(pcVar26 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100141cc8);
      (*pcVar4)();
    }
    local_c0 = PTR___type_metadata_for_Swift_Bool_100eac570;
    local_d8 = (char *)CONCAT71(local_d8._1_7_,1);
    FUN_10015ab00(0x10,&local_d8);
    FUN_100004594(&local_d8);
    objc_stub::unlock(IVar22);
    objc_stub::unlock(IVar24);
    _swift_bridgeObjectRelease(puVar29);
    pcVar16 = local_208;
    FUN_100142640(pcVar9,local_208);
    (**(code **)(lVar19 + 0x38))(lVar20,1,1,DVar7.unknown);
    *(long *)(lVar20 + -0x10) = lVar20;
    _Var2.unknown = local_1f8.unknown;
    _Var15.unknown = local_200.unknown;
    FUN_100145cf8(0x74657324,&DAT_e400000000000000,local_1f8.unknown,local_200.unknown,0,pcVar9,
                  pcVar16,0);
    FUN_1000fb4c4(lVar20,&DAT_100faf508,&DAT_100c2e2e0);
    pcVar16 = &DAT_100fae678;
    FUN_1000f7830(&DAT_100fae678,&DAT_100c2e190);
    _swift_initStackObject();
    pcVar16[0x18] = '\x02';
    pcVar16[0x19] = '\0';
    pcVar16[0x1a] = '\0';
    pcVar16[0x1b] = '\0';
    pcVar16[0x1c] = '\0';
    pcVar16[0x1d] = '\0';
    pcVar16[0x1e] = '\0';
    pcVar16[0x1f] = '\0';
    pcVar16[0x10] = '\x01';
    pcVar16[0x11] = '\0';
    pcVar16[0x12] = '\0';
    pcVar16[0x13] = '\0';
    pcVar16[0x14] = '\0';
    pcVar16[0x15] = '\0';
    pcVar16[0x16] = '\0';
    pcVar16[0x17] = '\0';
    pcVar26 = pcVar16 + 0x20;
    pcVar26[0] = 'd';
    pcVar26[1] = 'i';
    pcVar26[2] = 's';
    pcVar26[3] = 't';
    pcVar26[4] = 'i';
    pcVar26[5] = 'n';
    pcVar26[6] = 'c';
    pcVar26[7] = 't';
    *(undefined **)(pcVar16 + 0x48) = PTR___type_metadata_for_Swift_String_100eac208;
    pcVar16[0x28] = '_';
    pcVar16[0x29] = 'i';
    pcVar16[0x2a] = 'd';
    pcVar16[0x2b] = '\0';
    pcVar16[0x2c] = '\0';
    pcVar16[0x2d] = '\0';
    pcVar16[0x2e] = '\0';
    pcVar16[0x2f] = -0x15;
    *(undefined **)(pcVar16 + 0x30) = _Var2.unknown;
    *(undefined **)(pcVar16 + 0x38) = _Var15.unknown;
    _swift_bridgeObjectRetain(_Var15.unknown);
    pcVar21 = pcVar16;
    FUN_1000f8154();
    _swift_setDeallocating(pcVar16);
    FUN_1000fb4c4(pcVar26,&DAT_100fae490,&DAT_100c2de60);
    pcVar16 = local_210;
    local_b8[0].unknown = pcVar21;
    if (pcVar9 != (char *)0x0) {
      puVar8 = &DAT_100fae898;
      FUN_1000f7830(&DAT_100fae898,&DAT_100c2e4e0);
      local_160 = pcVar9;
      local_148 = puVar8;
      if (puVar8 == (undefined *)0x0) {
        _swift_bridgeObjectRetain(pcVar9);
        FUN_1000fb4c4(&local_160,&DAT_100fae668,&DAT_100c2e4a0);
        FUN_10016fcc4(&local_d8,0xd000000000000013,0x8000000100d92cb0);
        FUN_1000fb4c4(&local_d8,&DAT_100fae668,&DAT_100c2e4a0);
      }
      else {
        FUN_100011080(&local_160,&local_d8);
        _swift_bridgeObjectRetain(pcVar9);
        pcVar26 = pcVar21;
        _swift_isUniquelyReferenced_nonNull_native(pcVar21);
        local_160 = pcVar21;
        FUN_10016fe74(&local_d8,0xd000000000000013,0x8000000100d92cb0,pcVar26);
        local_b8[0].unknown = local_160;
      }
    }
    pcVar21 = local_208;
    if (local_208 != (char *)0x0) {
      puVar8 = &DAT_100fae898;
      FUN_1000f7830(&DAT_100fae898,&DAT_100c2e4e0);
      local_160 = pcVar21;
      local_148 = puVar8;
      if (puVar8 == (undefined *)0x0) {
        _swift_bridgeObjectRetain(pcVar21);
        FUN_1000fb4c4(&local_160,&DAT_100fae668,&DAT_100c2e4a0);
        FUN_10016fcc4(&local_d8,0xd000000000000017,0x8000000100d92c90);
        FUN_1000fb4c4(&local_d8,&DAT_100fae668,&DAT_100c2e4a0);
      }
      else {
        FUN_100011080(&local_160,&local_d8);
        _swift_bridgeObjectRetain(pcVar21);
        DVar3.unknown = local_b8[0].unknown;
        DVar12.unknown = local_b8[0].unknown;
        _swift_isUniquelyReferenced_nonNull_native(local_b8[0].unknown);
        local_160 = DVar3.unknown;
        FUN_10016fe74(&local_d8,0xd000000000000017,0x8000000100d92c90,DVar12.unknown);
        local_b8[0].unknown = local_160;
      }
    }
    DVar3.unknown = local_b8[0].unknown;
    pvVar13 = (void *)0x2;
    DVar12.unknown = local_b8[0].unknown;
    FUN_10016f414();
    if ((ulong)pvVar13 >> 0x3c < 0xf) {
      Encoding::_get_utf8((Encoding)DVar12.unknown);
      EVar6.unknown = DVar12.unknown;
      pvVar14 = pvVar13;
      (extension_Foundation)::Swift::String::_init((Encoding)DVar12.unknown);
      pcVar16 = local_210;
      SVar38.bridgeObject = pvVar14;
      SVar38.str = EVar6.unknown;
      FUN_10003bf18(DVar12.unknown,pvVar13);
      if (pvVar14 == (void *)0x0) goto LAB_10014168c;
    }
    else {
LAB_10014168c:
      SVar38 = Swift::Dictionary::get_description(DVar3);
    }
    _swift_bridgeObjectRelease(DVar3.unknown);
    IVar24 = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::cachedPersonPropertiesLock);
    objc_stub::lock(IVar24);
    pvVar13 = ((String *)(unaff_x20 + _TtC7PostHog10PostHogSDK::cachedPersonPropertiesHash))->
              bridgeObject;
    *(String *)(unaff_x20 + _TtC7PostHog10PostHogSDK::cachedPersonPropertiesHash) = SVar38;
    _swift_bridgeObjectRetain(SVar38.bridgeObject);
    _swift_bridgeObjectRelease(pvVar13);
    objc_stub::unlock(IVar24);
    _swift_bridgeObjectRelease(SVar38.bridgeObject);
    if ((((pcVar9 != (char *)0x0) && (*(long *)(pcVar9 + 0x10) != 0)) ||
        ((local_208 != (char *)0x0 && (*(long *)(local_208 + 0x10) != 0)))) &&
       (lVar23 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::remoteConfig), lVar23 != 0)) {
      _swift_retain(lVar23);
      FUN_10012cef4(0,0);
      _swift_release(lVar23);
    }
    FUN_100151c48();
  }
  else {
LAB_1001418a4:
    lVar27 = PostHogConfig::reuseAnonymousId;
    local_230 = lVar23;
    lVar23 = *(long *)(unaff_x20 + lVar23);
    _swift_beginAccess(lVar23 + PostHogConfig::reuseAnonymousId,local_b8,0,0);
    if ((*(byte *)(lVar23 + lVar27) & 1) == 0) {
      FUN_10015cb10(local_228,puVar29);
    }
    _Var2.unknown = local_1f8.unknown;
    _Var15.unknown = local_200.unknown;
    local_238 = puVar29;
    FUN_10015ce90(local_1f8.unknown,local_200.unknown);
    IVar22 = *(ID *)(pcVar26 + 0x30);
    objc_stub::lock(IVar22);
    pcVar26[0x88] = '\x01';
    if (*(long *)(pcVar26 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100141ccc);
      (*pcVar4)();
    }
    local_c0 = PTR___type_metadata_for_Swift_Bool_100eac570;
    local_d8 = (char *)CONCAT71(local_d8._1_7_,1);
    FUN_10015ab00(0x10,&local_d8);
    FUN_100004594(&local_d8);
    objc_stub::unlock(IVar22);
    objc_stub::unlock(IVar24);
    pcVar16 = &DAT_100fae678;
    FUN_1000f7830(&DAT_100fae678,&DAT_100c2e190);
    _swift_initStackObject();
    pcVar16[0x18] = '\x02';
    pcVar16[0x19] = '\0';
    pcVar16[0x1a] = '\0';
    pcVar16[0x1b] = '\0';
    pcVar16[0x1c] = '\0';
    pcVar16[0x1d] = '\0';
    pcVar16[0x1e] = '\0';
    pcVar16[0x1f] = '\0';
    pcVar16[0x10] = '\x01';
    pcVar16[0x11] = '\0';
    pcVar16[0x12] = '\0';
    pcVar16[0x13] = '\0';
    pcVar16[0x14] = '\0';
    pcVar16[0x15] = '\0';
    pcVar16[0x16] = '\0';
    pcVar16[0x17] = '\0';
    pcVar21 = pcVar16 + 0x20;
    pcVar21[0] = 'd';
    puVar8 = PTR___type_metadata_for_Swift_String_100eac208;
    pcVar21[1] = 'i';
    pcVar21[2] = 's';
    pcVar21[3] = 't';
    pcVar21[4] = 'i';
    pcVar21[5] = 'n';
    pcVar21[6] = 'c';
    pcVar21[7] = 't';
    *(undefined **)(pcVar16 + 0x48) = PTR___type_metadata_for_Swift_String_100eac208;
    pcVar16[0x28] = '_';
    pcVar16[0x29] = 'i';
    pcVar16[0x2a] = 'd';
    pcVar16[0x2b] = '\0';
    pcVar16[0x2c] = '\0';
    pcVar16[0x2d] = '\0';
    pcVar16[0x2e] = '\0';
    pcVar16[0x2f] = -0x15;
    *(undefined **)(pcVar16 + 0x30) = _Var2.unknown;
    *(undefined **)(pcVar16 + 0x38) = _Var15.unknown;
    _swift_bridgeObjectRetain(_Var15.unknown);
    local_1e8 = pcVar16;
    FUN_1000f8154();
    _swift_setDeallocating(pcVar16);
    FUN_1000fb4c4(pcVar21,&DAT_100fae490,&DAT_100c2de60);
    lVar23 = PostHogConfig::reuseAnonymousId;
    lVar27 = *(long *)(unaff_x20 + local_230);
    _swift_beginAccess(lVar27 + PostHogConfig::reuseAnonymousId,auStack_140,0,0);
    if ((*(byte *)(lVar27 + lVar23) & 1) == 0) {
      local_160 = local_228;
      puStack_158 = local_238;
      local_148 = puVar8;
      FUN_100011080(&local_160,&local_d8);
      pcVar16 = local_1e8;
      _swift_isUniquelyReferenced_nonNull_native(local_1e8);
      local_160 = local_1e8;
      FUN_10016fe74(&local_d8,0xd000000000000011,0x8000000100d92030,pcVar16);
      local_1e8 = local_160;
    }
    else {
      _swift_bridgeObjectRelease(local_238);
    }
    pcVar16 = local_208;
    pcVar21 = local_220;
    FUN_10016ead0(local_220);
    FUN_10016ead0(pcVar16);
    (**(code **)(lVar19 + 0x38))(lVar20,1,1,DVar7.unknown);
    _Var2.unknown = local_1f8.unknown;
    _Var15.unknown = local_200.unknown;
    _Var11.unknown = local_1f8.unknown;
    FUN_10013ec54(local_1f8.unknown,local_200.unknown,local_1e8,pcVar21,pcVar16,0,1,lVar20);
    _swift_bridgeObjectRelease(pcVar16);
    _swift_bridgeObjectRelease(pcVar21);
    FUN_1000fb4c4(lVar20,&DAT_100faf508,&DAT_100c2e2e0);
    Foundation::Date::init();
    lVar23 = 0x6669746e65646924;
    FUN_100149464(0x6669746e65646924,0xe900000000000079,_Var2.unknown,_Var15.unknown,_Var11.unknown,
                  puVar28);
    _swift_bridgeObjectRelease(_Var11.unknown);
    (**(code **)(lVar19 + 8))(puVar28,DVar7.unknown);
    if (lVar23 == 0) {
      _swift_bridgeObjectRelease(local_1e8);
      pcVar16 = local_210;
    }
    else {
      FUN_100142640(local_220,local_208);
      pcVar16 = local_210;
      FUN_100136870(lVar23,FUN_10013662c);
      FUN_1001349c8(lVar23,FUN_10010f72c);
      lVar23 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::remoteConfig);
      if (lVar23 != 0) {
        _swift_retain(lVar23);
        FUN_10012cef4(0,0);
        _swift_release(lVar23);
      }
      FUN_100151c48();
      _swift_bridgeObjectRelease(local_1e8);
    }
  }
  _swift_release(pcVar16);
  pcVar16 = local_218;
LAB_100141768:
  _swift_release(pcVar16);
  return;
}



/* Address: 0x100141ccc | _TtC7PostHog10PostHogSDK::identifyWithDistinctId:userProperties:userPropertiesSetOnce: */

/* Function Stack Size: 0x28 bytes */

void _TtC7PostHog10PostHogSDK::identifyWithDistinctId_userProperties_userPropertiesSetOnce_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  FUN_100144910();
  return;
}



/* Address: 0x100141cd8 | FUN_100141cd8 */

void FUN_100141cd8(undefined8 param_1)

{
  FUN_100141d58(param_1,0);
  return;
}



/* Address: 0x100141ce0 | _TtC7PostHog10PostHogSDK::setPersonPropertiesWithUserPropertiesToSet: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC7PostHog10PostHogSDK::setPersonPropertiesWithUserPropertiesToSet_
               (ID param_1,SEL param_2,ID param_3)

{
  Dictionary<undefined,undefined> DVar1;
  
  if (param_3 == 0) {
    DVar1.unknown = (undefined *)0x0;
  }
  else {
    DVar1 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  }
  FUN_100141d58(DVar1.unknown,0);
  _swift_bridgeObjectRelease(DVar1.unknown);
  return;
}



/* Address: 0x100141d58 | FUN_100141d58 */

void FUN_100141d58(long param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  char *pcVar5;
  undefined *puVar6;
  Date DVar7;
  long extraout_x8;
  long unaff_x20;
  long lVar8;
  ID self;
  undefined1 *puVar9;
  undefined1 *puVar10;
  ulong uVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String separator;
  String separator_00;
  String separator_01;
  undefined8 auStack_a0 [2];
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [32];
  undefined *local_68;
  
  puVar3 = &DAT_100faf508;
  FUN_1000f7830(&DAT_100faf508,&DAT_100c2e2e0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_90 + -extraout_x8;
  self = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::setupLock);
  objc_stub::lock(self);
  lVar2 = _TtC7PostHog10PostHogSDK::enabled;
  bVar1 = *(byte *)(unaff_x20 + _TtC7PostHog10PostHogSDK::enabled);
  objc_stub::unlock(self);
  if ((bVar1 & 1) == 0) {
    if (DAT_101057340 != '\x01') {
      return;
    }
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
    SVar12.bridgeObject = (void *)0x20;
    SVar12.str = pcVar5;
    separator.bridgeObject = (void *)0xa;
    separator.str = (char *)0xe100000000000000;
    Swift::_print(SVar12,separator);
    _swift_release(pcVar5);
    return;
  }
  if ((param_1 == 0) || (*(long *)(param_1 + 0x10) == 0)) {
    if (param_2 == 0) {
      return;
    }
    if (*(long *)(param_2 + 0x10) == 0) {
      return;
    }
  }
  uVar4 = 0xd000000000000041;
  FUN_10013ea50(0xd000000000000041,0x8000000100d92d10);
  if ((uVar4 & 1) == 0) {
    return;
  }
  objc_stub::lock(self);
  bVar1 = *(byte *)(unaff_x20 + lVar2);
  objc_stub::unlock(self);
  lVar2 = PostHogConfig::storageManager;
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
      SVar13.bridgeObject = (void *)0x20;
      SVar13.str = pcVar5;
      separator_00.bridgeObject = (void *)0xa;
      separator_00.str = (char *)0xe100000000000000;
      Swift::_print(SVar13,separator_00);
      _swift_release(pcVar5);
    }
  }
  else {
    lVar8 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::config);
    puVar10 = auStack_88;
    _swift_beginAccess(lVar8 + PostHogConfig::storageManager,puVar10,0,0);
    uVar4 = *(ulong *)(lVar8 + lVar2);
    if (uVar4 != 0) {
      uVar11 = uVar4;
      _swift_retain();
      FUN_10015cd34();
      _swift_release(uVar4);
      goto LAB_100141fbc;
    }
  }
  uVar11 = 0;
  puVar10 = (undefined1 *)0xe000000000000000;
LAB_100141fbc:
  uVar4 = uVar11;
  FUN_100142274(uVar11,puVar10,param_1,param_2);
  if ((uVar4 & 1) == 0) {
    _swift_bridgeObjectRelease(puVar10);
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
      pcVar5[0x20] = 'f';
      pcVar5[0x21] = '\0';
      pcVar5[0x22] = '\0';
      pcVar5[0x23] = '\0';
      pcVar5[0x24] = '\0';
      pcVar5[0x25] = '\0';
      pcVar5[0x26] = '\0';
      pcVar5[0x27] = -0x30;
      pcVar5[0x28] = '`';
      pcVar5[0x29] = '-';
      pcVar5[0x2a] = -0x27;
      pcVar5[0x2b] = '\0';
      pcVar5[0x2c] = '\x01';
      pcVar5[0x2d] = '\0';
      pcVar5[0x2e] = '\0';
      pcVar5[0x2f] = -0x80;
      SVar14.bridgeObject = (void *)0x20;
      SVar14.str = pcVar5;
      separator_01.bridgeObject = (void *)0xa;
      separator_01.str = (char *)0xe100000000000000;
      Swift::_print(SVar14,separator_01);
      _swift_release(pcVar5);
    }
  }
  else {
    puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1000f8154();
    if (param_2 != 0) {
      _swift_bridgeObjectRetain(param_2);
      puVar6 = puVar3;
      _swift_isUniquelyReferenced_nonNull_native(puVar3);
      local_68 = puVar3;
      FUN_100103e2c(param_2,FUN_100152dbc,0,puVar6,&local_68);
      _swift_bridgeObjectRelease(param_2);
      puVar3 = local_68;
    }
    if (param_1 != 0) {
      _swift_bridgeObjectRetain(param_1);
      puVar6 = puVar3;
      _swift_isUniquelyReferenced_nonNull_native(puVar3);
      local_68 = puVar3;
      FUN_100103e2c(param_1,FUN_100152dbc,0,puVar6,&local_68);
      _swift_bridgeObjectRelease(param_1);
      puVar3 = local_68;
    }
    if (*(long *)(puVar3 + 0x10) != 0) {
      FUN_10014a018(puVar3,0);
    }
    DVar7 = Foundation::Date::typeMetadataAccessor();
    (**(code **)(*(long *)(DVar7.unknown + -8) + 0x38))(puVar9,1,1,DVar7.unknown);
    *(undefined1 **)((long)auStack_a0 + -extraout_x8) = puVar9;
    FUN_100145cf8(0x74657324,&DAT_e400000000000000,uVar11,puVar10,0,param_1,param_2,0);
    _swift_bridgeObjectRelease(puVar10);
    FUN_1000fb4c4(puVar9,&DAT_100faf508,&DAT_100c2e2e0);
    _swift_bridgeObjectRelease(puVar3);
  }
  return;
}



/* Address: 0x1001421bc | _TtC7PostHog10PostHogSDK::setPersonPropertiesWithUserPropertiesToSet:userPropertiesToSetOnce: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void _TtC7PostHog10PostHogSDK::setPersonPropertiesWithUserPropertiesToSet_userPropertiesToSetOnce_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  Dictionary<undefined,undefined> DVar1;
  Dictionary<undefined,undefined> DVar2;
  
  if (param_3 == 0) {
    DVar1.unknown = (undefined *)0x0;
  }
  else {
    DVar1 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  }
  if (param_4 == 0) {
    DVar2.unknown = (undefined *)0x0;
  }
  else {
    DVar2 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  }
  FUN_100141d58(DVar1.unknown,DVar2.unknown);
  _swift_bridgeObjectRelease(DVar2.unknown);
  _swift_bridgeObjectRelease(DVar1.unknown);
  return;
}



/* Address: 0x100142274 | FUN_100142274 */

undefined8
FUN_100142274(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

{
  String *pSVar1;
  String SVar2;
  Dictionary DVar3;
  bool bVar4;
  Encoding EVar5;
  undefined *puVar6;
  undefined *puVar7;
  Dictionary DVar8;
  void *pvVar9;
  void *pvVar10;
  _StringGuts _Var11;
  undefined8 uVar12;
  long unaff_x20;
  ID self;
  String SVar13;
  undefined *local_f8 [3];
  undefined *local_e0;
  undefined1 auStack_d8 [112];
  Dictionary local_68;
  
  EVar5 = Encoding::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(EVar5.unknown + -8) + 0x40));
  puVar6 = &DAT_100fae678;
  FUN_1000f7830(&DAT_100fae678,&DAT_100c2e190);
  _swift_initStackObject();
  *(undefined8 *)(puVar6 + 0x18) = 2;
  *(undefined8 *)(puVar6 + 0x10) = 1;
  *(undefined8 *)(puVar6 + 0x20) = 0x74636e6974736964;
  *(undefined **)(puVar6 + 0x48) = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined8 *)(puVar6 + 0x28) = 0xeb0000000064695f;
  *(undefined8 *)(puVar6 + 0x30) = param_1;
  *(undefined8 *)(puVar6 + 0x38) = param_2;
  _swift_bridgeObjectRetain(param_2);
  puVar7 = puVar6;
  FUN_1000f8154();
  _swift_setDeallocating(puVar6);
  FUN_1000fb4c4(puVar6 + 0x20,&DAT_100fae490,&DAT_100c2de60);
  local_68.unknown = puVar7;
  if (param_3 != (undefined *)0x0) {
    puVar6 = &DAT_100fae898;
    FUN_1000f7830(&DAT_100fae898,&DAT_100c2e4e0);
    local_f8[0] = param_3;
    local_e0 = puVar6;
    if (puVar6 == (undefined *)0x0) {
      _swift_bridgeObjectRetain(param_3);
      FUN_1000fb4c4(local_f8,&DAT_100fae668,&DAT_100c2e4a0);
      FUN_10016fcc4(auStack_d8,0xd000000000000013,0x8000000100d92cb0);
      FUN_1000fb4c4(auStack_d8,&DAT_100fae668,&DAT_100c2e4a0);
    }
    else {
      FUN_100011080(local_f8,auStack_d8);
      _swift_bridgeObjectRetain(param_3);
      puVar6 = puVar7;
      _swift_isUniquelyReferenced_nonNull_native(puVar7);
      local_f8[0] = puVar7;
      FUN_10016fe74(auStack_d8,0xd000000000000013,0x8000000100d92cb0,puVar6);
      local_68.unknown = local_f8[0];
    }
  }
  if (param_4 != (undefined *)0x0) {
    puVar6 = &DAT_100fae898;
    FUN_1000f7830(&DAT_100fae898,&DAT_100c2e4e0);
    local_f8[0] = param_4;
    local_e0 = puVar6;
    if (puVar6 == (undefined *)0x0) {
      _swift_bridgeObjectRetain(param_4);
      FUN_1000fb4c4(local_f8,&DAT_100fae668,&DAT_100c2e4a0);
      FUN_10016fcc4(auStack_d8,0xd000000000000017,0x8000000100d92c90);
      FUN_1000fb4c4(auStack_d8,&DAT_100fae668,&DAT_100c2e4a0);
    }
    else {
      FUN_100011080(local_f8,auStack_d8);
      _swift_bridgeObjectRetain(param_4);
      DVar3.unknown = local_68.unknown;
      DVar8.unknown = local_68.unknown;
      _swift_isUniquelyReferenced_nonNull_native(local_68.unknown);
      local_f8[0] = DVar3.unknown;
      FUN_10016fe74(auStack_d8,0xd000000000000017,0x8000000100d92c90,DVar8.unknown);
      local_68.unknown = local_f8[0];
    }
  }
  DVar3.unknown = local_68.unknown;
  pvVar9 = (void *)0x2;
  DVar8.unknown = local_68.unknown;
  FUN_10016f414();
  if ((ulong)pvVar9 >> 0x3c < 0xf) {
    Encoding::_get_utf8((Encoding)DVar8.unknown);
    EVar5.unknown = DVar8.unknown;
    pvVar10 = pvVar9;
    (extension_Foundation)::Swift::String::_init((Encoding)DVar8.unknown);
    SVar13.bridgeObject = pvVar10;
    SVar13.str = EVar5.unknown;
    FUN_10003bf18(DVar8.unknown,pvVar9);
    if (pvVar10 != (void *)0x0) goto LAB_100142590;
  }
  SVar13 = Swift::Dictionary::get_description(DVar3);
LAB_100142590:
  _swift_bridgeObjectRelease(DVar3.unknown);
  self = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::cachedPersonPropertiesLock);
  objc_stub::lock(self);
  pSVar1 = (String *)(unaff_x20 + _TtC7PostHog10PostHogSDK::cachedPersonPropertiesHash);
  _Var11.unknown = pSVar1->bridgeObject;
  if ((_Var11.unknown == (undefined *)0x0) ||
     ((SVar2.bridgeObject = _Var11.unknown, SVar2.str = pSVar1->str, SVar13 != SVar2 &&
      (bVar4 = Swift::_stringCompareWithSmolCheck
                         ((_StringGuts)pSVar1->str,_Var11,
                          (_StringComparisonResult)(__int8)SVar13.str), !bVar4)))) {
    *pSVar1 = SVar13;
    _swift_bridgeObjectRetain(SVar13.bridgeObject);
    _swift_bridgeObjectRelease(_Var11.unknown);
    uVar12 = 1;
  }
  else {
    uVar12 = 0;
  }
  objc_stub::unlock(self);
  _swift_bridgeObjectRelease(SVar13.bridgeObject);
  return uVar12;
}



/* Address: 0x100142640 | FUN_100142640 */

/* WARNING: Removing unreachable block (ram,0x00010014274c) */

void FUN_100142640(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  ID self;
  undefined *puVar3;
  undefined *local_38;
  
  FUN_10016ead0();
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1000f8154();
  }
  FUN_10016ead0();
  if (param_2 == (undefined *)0x0) {
    param_2 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1000f8154(PTR___swiftEmptyArrayStorage_100eae0d8);
  }
  puVar1 = param_1;
  _swift_isUniquelyReferenced_nonNull_native(param_1);
  local_38 = param_1;
  FUN_100153dac(param_2,FUN_100152dbc,0,puVar1,&local_38);
  _swift_bridgeObjectRelease(param_2);
  puVar1 = local_38;
  if ((*(long *)(local_38 + 0x10) != 0) &&
     (puVar3 = *(undefined **)(unaff_x20 + _TtC7PostHog10PostHogSDK::remoteConfig),
     puVar3 != (undefined *)0x0)) {
    self = *(ID *)(puVar3 + 0x170);
    _swift_retain(puVar3);
    objc_stub::lock(self);
    FUN_100130030(&local_38,puVar3,puVar1);
    objc_stub::unlock(self);
    puVar2 = puVar1;
    if ((char)local_38 == '\x01') {
      FUN_1001347d0();
      puVar2 = puVar3;
      puVar3 = puVar1;
    }
    _swift_release(puVar2);
    puVar1 = puVar3;
  }
  _swift_release(puVar1);
  return;
}



/* Address: 0x100142758 | FUN_100142758 */

void FUN_100142758(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  long unaff_x20;
  long lVar1;
  ID self;
  
  FUN_10016ead0();
  if (param_3 == (undefined *)0x0) {
    param_3 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1000f8154();
  }
  if (*(long *)(param_3 + 0x10) != 0) {
    lVar1 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::remoteConfig);
    if (lVar1 != 0) {
      self = *(ID *)(lVar1 + 0x180);
      _swift_retain(lVar1);
      objc_stub::lock(self);
      FUN_1001302dc(lVar1,param_1,param_2,param_3);
      objc_stub::unlock(self);
      _swift_release(lVar1);
    }
  }
  _swift_bridgeObjectRelease();
  return;
}



/* Address: 0x100142804 | FUN_100142804 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100142804(_StringGuts param_1,_StringGuts param_2)

{
  byte bVar1;
  bool bVar2;
  Date DVar3;
  undefined *puVar4;
  undefined *puVar5;
  char *pcVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  long extraout_x8;
  long extraout_x8_00;
  char *pcVar10;
  undefined8 uVar11;
  long extraout_x12;
  undefined8 *puVar12;
  long unaff_x20;
  long lVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  ID self;
  undefined1 *puVar20;
  long lVar21;
  undefined8 *puVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String separator;
  String separator_00;
  String separator_01;
  undefined8 uStack_150;
  uint local_144;
  long local_140;
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined8 *local_e0 [3];
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long local_a8;
  undefined1 auStack_a0 [24];
  undefined8 *local_88;
  undefined1 auStack_80 [32];
  
  DVar3 = Foundation::Date::typeMetadataAccessor();
  lVar21 = *(long *)(DVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar21 + 0x40));
  lVar17 = (long)&uStack_150 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100faf508;
  FUN_1000f7830(&DAT_100faf508,&DAT_100c2e2e0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  lVar18 = lVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar12 = (undefined8 *)(lVar18 - extraout_x12);
  (**(code **)(lVar21 + 0x38))(puVar12,1,1,DVar3.unknown);
  self = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::setupLock);
  objc_stub::lock(self);
  lVar8 = _TtC7PostHog10PostHogSDK::enabled;
  bVar1 = *(byte *)(unaff_x20 + _TtC7PostHog10PostHogSDK::enabled);
  objc_stub::unlock(self);
  lVar15 = PostHogConfig::optOut;
  lVar13 = _TtC7PostHog10PostHogSDK::config;
  if ((bVar1 & 1) == 0) {
    if (DAT_101057340 != '\x01') goto LAB_100142a48;
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
    pcVar6 = 
    "[PostHog] PostHog method was called without `setup` being complete. Call wil be ignored.";
    *(undefined **)(pcVar10 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
    uVar11 = 0xd000000000000058;
LAB_100142a28:
    *(undefined8 *)(pcVar10 + 0x20) = uVar11;
    *(ulong *)(pcVar10 + 0x28) = (ulong)(pcVar6 + -0x20) | 0x8000000000000000;
    SVar23.bridgeObject = (void *)0x20;
    SVar23.str = pcVar10;
    separator.bridgeObject = (void *)0xa;
    separator.str = (char *)0xe100000000000000;
    Swift::_print(SVar23,separator);
  }
  else {
    lVar14 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::config);
    _swift_beginAccess(lVar14 + PostHogConfig::optOut,auStack_80,0,0);
    if (*(char *)(lVar14 + lVar15) == '\x01') {
      if (DAT_101057340 != '\x01') goto LAB_100142a48;
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
      pcVar6 = "[PostHog] PostHog is in OptOut state.";
      *(undefined **)(pcVar10 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      uVar11 = 0xd000000000000025;
      goto LAB_100142a28;
    }
    pcVar10 = *(char **)(unaff_x20 + _TtC7PostHog10PostHogSDK::queue);
    if (pcVar10 == (char *)0x0) goto LAB_100142a48;
    local_144 = (uint)(param_1.unknown == (undefined *)0x6974706563786524 &&
                      param_2.unknown == (undefined *)0xea00000000006e6f);
    local_140 = lVar21;
    if ((param_1.unknown != (undefined *)0x6974706563786524 ||
         param_2.unknown != (undefined *)0xea00000000006e6f) &&
       (bVar2 = Swift::_stringCompareWithSmolCheck(param_1,param_2,(_StringComparisonResult)0x24),
       !bVar2)) {
      _swift_retain(pcVar10);
LAB_100142c28:
      if ((param_1.unknown == (undefined *)0x6f687370616e7324) &&
         (param_2.unknown == (undefined *)0xe900000000000074)) {
        bVar2 = false;
      }
      else {
        bVar2 = Swift::_stringCompareWithSmolCheck(param_1,param_2,(_StringComparisonResult)0x24);
        bVar2 = !bVar2;
      }
      lVar15 = local_140;
      FUN_1000f8cac(puVar12,lVar18,&DAT_100faf508,&DAT_100c2e2e0);
      pcVar16 = *(code **)(lVar15 + 0x30);
      lVar21 = lVar18;
      (*pcVar16)(lVar18,1,DVar3.unknown);
      if ((int)lVar21 == 1) {
        Foundation::Date::init();
        lVar15 = lVar18;
        (*pcVar16)(lVar18,1,DVar3.unknown);
        if ((int)lVar15 != 1) {
          FUN_1000fb4c4(lVar18,&DAT_100faf508,&DAT_100c2e2e0);
        }
      }
      else {
        (**(code **)(lVar15 + 0x20))(lVar17,lVar18,DVar3.unknown);
      }
      objc_stub::lock(self);
      bVar1 = *(byte *)(unaff_x20 + lVar8);
      objc_stub::unlock(self);
      lVar8 = PostHogConfig::storageManager;
      if ((bVar1 & 1) == 0) {
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
          SVar25.bridgeObject = (void *)0x20;
          SVar25.str = pcVar6;
          separator_01.bridgeObject = (void *)0xa;
          separator_01.str = (char *)0xe100000000000000;
          Swift::_print(SVar25,separator_01);
          _swift_release(pcVar6);
        }
        puVar19 = (undefined8 *)0x0;
        puVar20 = (undefined1 *)0xe000000000000000;
      }
      else {
        lVar13 = *(long *)(unaff_x20 + lVar13);
        puVar20 = auStack_f8;
        _swift_beginAccess(lVar13 + PostHogConfig::storageManager,puVar20,0,0);
        puVar22 = *(undefined8 **)(lVar13 + lVar8);
        if (puVar22 == (undefined8 *)0x0) {
          puVar19 = (undefined8 *)0x0;
          puVar20 = (undefined1 *)0xe000000000000000;
        }
        else {
          puVar19 = puVar22;
          _swift_retain();
          FUN_10015cd34();
          _swift_release(puVar22);
        }
      }
      puVar22 = puVar19;
      FUN_10013ec54(puVar19,puVar20,0,0,0,0,bVar2,puVar12);
      local_88 = puVar22;
      if (((local_144 & 1) != 0) ||
         (bVar2 = Swift::_stringCompareWithSmolCheck(param_1,param_2,(_StringComparisonResult)0x24),
         bVar2)) {
        if (puVar22[2] != 0) {
          _swift_bridgeObjectRetain(puVar22);
          uVar9 = 0;
          lVar13 = -0x2ffffffffffffff0;
          FUN_100071370(0xd000000000000010);
          if ((uVar9 & 1) != 0) {
            FUN_10000cbfc(puVar22[7] + lVar13 * 0x20,&local_c0);
            _swift_bridgeObjectRelease(puVar22);
            FUN_1000fb4c4(&local_c0,&DAT_100fae668,&DAT_100c2e4a0);
            goto LAB_100143028;
          }
          _swift_bridgeObjectRelease(puVar22);
        }
        uStack_b8 = 0;
        local_c0 = 0;
        local_a8 = 0;
        uStack_b0 = 0;
        puVar7 = &local_c0;
        FUN_1000fb4c4(puVar7,&DAT_100fae668,&DAT_100c2e4a0);
        FUN_100150cd8();
        if (puVar7 != (undefined8 *)0x0) {
          puVar4 = &DAT_100fae868;
          FUN_1000f7830(&DAT_100fae868,&DAT_100c2e2f0);
          local_e0[0] = puVar7;
          local_c8 = puVar4;
          if (puVar4 == (undefined *)0x0) {
            FUN_1000fb4c4(local_e0,&DAT_100fae668,&DAT_100c2e4a0);
            FUN_10016fcc4(&local_c0,0xd000000000000010,0x8000000100d914f0);
            FUN_1000fb4c4(&local_c0,&DAT_100fae668,&DAT_100c2e4a0);
            puVar22 = local_88;
          }
          else {
            FUN_100011080(local_e0,&local_c0);
            puVar7 = puVar22;
            _swift_isUniquelyReferenced_nonNull_native(puVar22);
            local_e0[0] = puVar22;
            FUN_10016fe74(&local_c0,0xd000000000000010,0x8000000100d914f0,puVar7);
            puVar22 = local_e0[0];
          }
        }
      }
LAB_100143028:
      FUN_100149464(param_1.unknown,param_2.unknown,puVar19,puVar20,puVar22,lVar17);
      _swift_bridgeObjectRelease(puVar20);
      if (param_1.unknown != (undefined *)0x0) {
        puVar19 = (undefined8 *)(param_1.unknown + PostHogEvent::event);
        _swift_beginAccess(puVar19,local_e0,0,0);
        if ((((undefined *)*puVar19 == (undefined *)0x6f687370616e7324) &&
            ((undefined *)puVar19[1] == (undefined *)0xe900000000000074)) ||
           (bVar2 = Swift::_stringCompareWithSmolCheck
                              ((undefined *)*puVar19,(undefined *)puVar19[1],
                               (_StringComparisonResult)0x24), bVar2)) {
          lVar13 = PostHogEvent::properties;
          _swift_beginAccess(param_1.unknown + PostHogEvent::properties,auStack_a0,0,0);
          lVar13 = *(long *)(param_1.unknown + lVar13);
          if (*(long *)(lVar13 + 0x10) == 0) {
            uStack_b8 = 0;
            local_c0 = 0;
            local_a8 = 0;
            uStack_b0 = 0;
          }
          else {
            _swift_bridgeObjectRetain(lVar13);
            lVar8 = 0x6e6f697373657324;
            uVar9 = 0xeb0000000064695f;
            FUN_100071370(0x6e6f697373657324);
            if ((uVar9 & 1) == 0) {
              uStack_b8 = 0;
              local_c0 = 0;
              local_a8 = 0;
              uStack_b0 = 0;
            }
            else {
              FUN_10000cbfc(*(long *)(lVar13 + 0x38) + lVar8 * 0x20,&local_c0);
            }
            _swift_bridgeObjectRelease(lVar13);
            if (local_a8 != 0) {
              FUN_1000fb4c4(&local_c0,&DAT_100fae668,&DAT_100c2e4a0);
              FUN_100142640(0,0);
              lVar13 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::replayQueue);
              if (lVar13 != 0) {
                _swift_retain(lVar13);
                FUN_100167d84(param_1.unknown);
                _swift_release(lVar13);
              }
              goto LAB_1001431f0;
            }
          }
          _swift_release(pcVar10);
          (**(code **)(local_140 + 8))(lVar17,DVar3.unknown);
          FUN_1000fb4c4(puVar12,&DAT_100faf508,&DAT_100c2e2e0);
          puVar4 = &DAT_100fae668;
          puVar5 = &DAT_100c2e4a0;
          puVar12 = &local_c0;
          goto LAB_1001432a8;
        }
        FUN_100142640(0,0);
        FUN_100136870(param_1.unknown,FUN_10013662c);
LAB_1001431f0:
        FUN_1001349c8(param_1.unknown,FUN_10010f72c);
      }
      _swift_release(pcVar10);
      (**(code **)(local_140 + 8))(lVar17,DVar3.unknown);
      puVar4 = &DAT_100faf508;
      puVar5 = &DAT_100c2e2e0;
LAB_1001432a8:
      FUN_1000fb4c4(puVar12,puVar4,puVar5);
      _swift_bridgeObjectRelease(puVar22);
      return;
    }
    lVar15 = _TtC7PostHog26PostHogErrorTrackingConfig::ignoredExceptionTypes;
    lVar21 = *(long *)(lVar14 + PostHogConfig::errorTrackingConfig);
    _swift_beginAccess(lVar21 + _TtC7PostHog26PostHogErrorTrackingConfig::ignoredExceptionTypes,
                       auStack_110,0,0);
    lVar21 = *(long *)(lVar21 + lVar15);
    lVar15 = *(long *)(lVar21 + 0x10);
    _swift_retain(pcVar10);
    if (lVar15 == 0) goto LAB_100142c28;
    _swift_bridgeObjectRetain(lVar21);
    puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1000f8154();
    puVar5 = puVar4;
    FUN_100103b68();
    _swift_bridgeObjectRelease(lVar21);
    _swift_bridgeObjectRelease(puVar4);
    if (((ulong)puVar5 & 1) == 0) goto LAB_100142c28;
    if (DAT_101057340 != '\x01') {
      FUN_1000fb4c4(puVar12,&DAT_100faf508,&DAT_100c2e2e0);
      _swift_release(pcVar10);
      return;
    }
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
    pcVar6[0x20] = '\\';
    pcVar6[0x21] = '\0';
    pcVar6[0x22] = '\0';
    pcVar6[0x23] = '\0';
    pcVar6[0x24] = '\0';
    pcVar6[0x25] = '\0';
    pcVar6[0x26] = '\0';
    pcVar6[0x27] = -0x30;
    pcVar6[0x28] = -0x60;
    pcVar6[0x29] = '\x15';
    pcVar6[0x2a] = -0x27;
    pcVar6[0x2b] = '\0';
    pcVar6[0x2c] = '\x01';
    pcVar6[0x2d] = '\0';
    pcVar6[0x2e] = '\0';
    pcVar6[0x2f] = -0x80;
    SVar24.bridgeObject = (void *)0x20;
    SVar24.str = pcVar6;
    separator_00.bridgeObject = (void *)0xa;
    separator_00.str = (char *)0xe100000000000000;
    Swift::_print(SVar24,separator_00);
    _swift_release(pcVar6);
  }
  _swift_release(pcVar10);
LAB_100142a48:
  FUN_1000fb4c4(puVar12,&DAT_100faf508,&DAT_100c2e2e0);
  return;
}



/* Address: 0x1001432b8 | _TtC7PostHog10PostHogSDK::capture: */

/* Function Stack Size: 0x18 bytes */

void _TtC7PostHog10PostHogSDK::capture_(ID param_1,SEL param_2,ID param_3)

{
  FUN_10014ae5c();
  return;
}



/* Address: 0x1001432c4 | FUN_1001432c4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001432c4(_StringGuts param_1,_StringGuts param_2,undefined *param_3)

{
  char *pcVar1;
  byte bVar2;
  bool bVar3;
  Date DVar4;
  undefined *puVar5;
  char *pcVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar11;
  long extraout_x12;
  undefined8 *puVar12;
  long unaff_x20;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  code *pcVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 *puVar20;
  ID self;
  undefined1 *puVar21;
  long lVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String separator;
  String separator_00;
  String separator_01;
  undefined8 uStack_150;
  uint local_144;
  long local_140;
  char *local_138;
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined8 *local_e0 [3];
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long local_a8;
  undefined1 auStack_a0 [24];
  undefined8 *local_88;
  undefined1 auStack_80 [32];
  
  DVar4 = Foundation::Date::typeMetadataAccessor();
  lVar22 = *(long *)(DVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar22 + 0x40));
  lVar14 = (long)&uStack_150 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100faf508;
  FUN_1000f7830(&DAT_100faf508,&DAT_100c2e2e0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  lVar19 = lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar12 = (undefined8 *)(lVar19 - extraout_x12);
  (**(code **)(lVar22 + 0x38))(puVar12,1,1,DVar4.unknown);
  self = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::setupLock);
  objc_stub::lock(self);
  lVar9 = _TtC7PostHog10PostHogSDK::enabled;
  bVar2 = *(byte *)(unaff_x20 + _TtC7PostHog10PostHogSDK::enabled);
  objc_stub::unlock(self);
  lVar16 = PostHogConfig::optOut;
  lVar13 = _TtC7PostHog10PostHogSDK::config;
  if ((bVar2 & 1) == 0) {
    if (DAT_101057340 != '\x01') goto LAB_100143510;
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
    pcVar1 = 
    "[PostHog] PostHog method was called without `setup` being complete. Call wil be ignored.";
    *(undefined **)(pcVar6 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
    uVar11 = 0xd000000000000058;
LAB_1001434f0:
    *(undefined8 *)(pcVar6 + 0x20) = uVar11;
    *(ulong *)(pcVar6 + 0x28) = (ulong)(pcVar1 + -0x20) | 0x8000000000000000;
    SVar23.bridgeObject = (void *)0x20;
    SVar23.str = pcVar6;
    separator.bridgeObject = (void *)0xa;
    separator.str = (char *)0xe100000000000000;
    Swift::_print(SVar23,separator);
  }
  else {
    lVar15 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::config);
    _swift_beginAccess(lVar15 + PostHogConfig::optOut,auStack_80,0,0);
    if (*(char *)(lVar15 + lVar16) == '\x01') {
      if (DAT_101057340 != '\x01') goto LAB_100143510;
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
      pcVar1 = "[PostHog] PostHog is in OptOut state.";
      *(undefined **)(pcVar6 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      uVar11 = 0xd000000000000025;
      goto LAB_1001434f0;
    }
    local_138 = *(char **)(unaff_x20 + _TtC7PostHog10PostHogSDK::queue);
    if (local_138 == (char *)0x0) goto LAB_100143510;
    local_144 = (uint)(param_1.unknown == (undefined *)0x6974706563786524 &&
                      param_2.unknown == (undefined *)0xea00000000006e6f);
    local_140 = lVar22;
    if ((param_1.unknown != (undefined *)0x6974706563786524 ||
         param_2.unknown != (undefined *)0xea00000000006e6f) &&
       (bVar3 = Swift::_stringCompareWithSmolCheck(param_1,param_2,(_StringComparisonResult)0x24),
       !bVar3)) {
LAB_100143638:
      _swift_retain(local_138);
LAB_100143730:
      if ((param_1.unknown == (undefined *)0x6f687370616e7324) &&
         (param_2.unknown == (undefined *)0xe900000000000074)) {
        bVar3 = false;
      }
      else {
        bVar3 = Swift::_stringCompareWithSmolCheck(param_1,param_2,(_StringComparisonResult)0x24);
        bVar3 = !bVar3;
      }
      FUN_1000f8cac(puVar12,lVar19,&DAT_100faf508,&DAT_100c2e2e0);
      lVar16 = local_140;
      pcVar17 = *(code **)(local_140 + 0x30);
      lVar22 = lVar19;
      (*pcVar17)(lVar19,1,DVar4.unknown);
      if ((int)lVar22 == 1) {
        Foundation::Date::init();
        lVar16 = lVar19;
        (*pcVar17)(lVar19,1,DVar4.unknown);
        if ((int)lVar16 != 1) {
          FUN_1000fb4c4(lVar19,&DAT_100faf508,&DAT_100c2e2e0);
        }
      }
      else {
        (**(code **)(lVar16 + 0x20))(lVar14,lVar19,DVar4.unknown);
      }
      objc_stub::lock(self);
      bVar2 = *(byte *)(unaff_x20 + lVar9);
      objc_stub::unlock(self);
      lVar9 = PostHogConfig::storageManager;
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
          SVar25.bridgeObject = (void *)0x20;
          SVar25.str = pcVar6;
          separator_01.bridgeObject = (void *)0xa;
          separator_01.str = (char *)0xe100000000000000;
          Swift::_print(SVar25,separator_01);
          _swift_release(pcVar6);
        }
LAB_10014392c:
        puVar20 = (undefined8 *)0x0;
        puVar21 = (undefined1 *)0xe000000000000000;
      }
      else {
        lVar13 = *(long *)(unaff_x20 + lVar13);
        puVar21 = auStack_f8;
        _swift_beginAccess(lVar13 + PostHogConfig::storageManager,puVar21,0,0);
        puVar18 = *(undefined8 **)(lVar13 + lVar9);
        if (puVar18 == (undefined8 *)0x0) goto LAB_10014392c;
        puVar20 = puVar18;
        _swift_retain();
        FUN_10015cd34();
        _swift_release(puVar18);
      }
      FUN_10016ead0(param_3);
      puVar18 = puVar20;
      FUN_10013ec54(puVar20,puVar21,param_3,0,0,0,bVar3,puVar12);
      _swift_bridgeObjectRelease(param_3);
      local_88 = puVar18;
      if (((local_144 & 1) != 0) ||
         (bVar3 = Swift::_stringCompareWithSmolCheck(param_1,param_2,(_StringComparisonResult)0x24),
         bVar3)) {
        if (puVar18[2] != 0) {
          _swift_bridgeObjectRetain(puVar18);
          uVar10 = 0;
          lVar13 = -0x2ffffffffffffff0;
          FUN_100071370(0xd000000000000010);
          if ((uVar10 & 1) != 0) {
            FUN_10000cbfc(puVar18[7] + lVar13 * 0x20,&local_c0);
            _swift_bridgeObjectRelease(puVar18);
            FUN_1000fb4c4(&local_c0,&DAT_100fae668,&DAT_100c2e4a0);
            goto LAB_100143b2c;
          }
          _swift_bridgeObjectRelease(puVar18);
        }
        uStack_b8 = 0;
        local_c0 = 0;
        local_a8 = 0;
        uStack_b0 = 0;
        puVar8 = &local_c0;
        FUN_1000fb4c4(puVar8,&DAT_100fae668,&DAT_100c2e4a0);
        FUN_100150cd8();
        if (puVar8 != (undefined8 *)0x0) {
          puVar5 = &DAT_100fae868;
          FUN_1000f7830(&DAT_100fae868,&DAT_100c2e2f0);
          local_e0[0] = puVar8;
          local_c8 = puVar5;
          if (puVar5 == (undefined *)0x0) {
            FUN_1000fb4c4(local_e0,&DAT_100fae668,&DAT_100c2e4a0);
            FUN_10016fcc4(&local_c0,0xd000000000000010,0x8000000100d914f0);
            FUN_1000fb4c4(&local_c0,&DAT_100fae668,&DAT_100c2e4a0);
            puVar18 = local_88;
          }
          else {
            FUN_100011080(local_e0,&local_c0);
            puVar8 = puVar18;
            _swift_isUniquelyReferenced_nonNull_native(puVar18);
            local_e0[0] = puVar18;
            FUN_10016fe74(&local_c0,0xd000000000000010,0x8000000100d914f0,puVar8);
            puVar18 = local_e0[0];
          }
        }
      }
LAB_100143b2c:
      FUN_100149464(param_1.unknown,param_2.unknown,puVar20,puVar21,puVar18,lVar14);
      _swift_bridgeObjectRelease(puVar21);
      if (param_1.unknown != (undefined *)0x0) {
        puVar20 = (undefined8 *)(param_1.unknown + PostHogEvent::event);
        _swift_beginAccess(puVar20,local_e0,0,0);
        if ((((undefined *)*puVar20 == (undefined *)0x6f687370616e7324) &&
            ((undefined *)puVar20[1] == (undefined *)0xe900000000000074)) ||
           (bVar3 = Swift::_stringCompareWithSmolCheck
                              ((undefined *)*puVar20,(undefined *)puVar20[1],
                               (_StringComparisonResult)0x24), bVar3)) {
          lVar13 = PostHogEvent::properties;
          _swift_beginAccess(param_1.unknown + PostHogEvent::properties,auStack_a0,0,0);
          lVar13 = *(long *)(param_1.unknown + lVar13);
          if (*(long *)(lVar13 + 0x10) == 0) {
            uStack_b8 = 0;
            local_c0 = 0;
            local_a8 = 0;
            uStack_b0 = 0;
          }
          else {
            _swift_bridgeObjectRetain(lVar13);
            lVar9 = 0x6e6f697373657324;
            uVar10 = 0xeb0000000064695f;
            FUN_100071370(0x6e6f697373657324);
            if ((uVar10 & 1) == 0) {
              uStack_b8 = 0;
              local_c0 = 0;
              local_a8 = 0;
              uStack_b0 = 0;
            }
            else {
              FUN_10000cbfc(*(long *)(lVar13 + 0x38) + lVar9 * 0x20,&local_c0);
            }
            _swift_bridgeObjectRelease(lVar13);
            if (local_a8 != 0) {
              FUN_1000fb4c4(&local_c0,&DAT_100fae668,&DAT_100c2e4a0);
              FUN_100142640(0,0);
              lVar13 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::replayQueue);
              if (lVar13 != 0) {
                _swift_retain(lVar13);
                FUN_100167d84(param_1.unknown);
                _swift_release(lVar13);
              }
              goto LAB_100143cf4;
            }
          }
          _swift_release(local_138);
          (**(code **)(local_140 + 8))(lVar14,DVar4.unknown);
          FUN_1000fb4c4(puVar12,&DAT_100faf508,&DAT_100c2e2e0);
          puVar5 = &DAT_100fae668;
          puVar7 = &DAT_100c2e4a0;
          puVar12 = &local_c0;
          goto LAB_100143dac;
        }
        FUN_100142640(0,0);
        FUN_100136870(param_1.unknown,FUN_10013662c);
LAB_100143cf4:
        FUN_1001349c8(param_1.unknown,FUN_10010f72c);
      }
      _swift_release(local_138);
      (**(code **)(local_140 + 8))(lVar14,DVar4.unknown);
      puVar5 = &DAT_100faf508;
      puVar7 = &DAT_100c2e2e0;
LAB_100143dac:
      FUN_1000fb4c4(puVar12,puVar5,puVar7);
      _swift_bridgeObjectRelease(puVar18);
      return;
    }
    lVar16 = _TtC7PostHog26PostHogErrorTrackingConfig::ignoredExceptionTypes;
    lVar22 = *(long *)(lVar15 + PostHogConfig::errorTrackingConfig);
    _swift_beginAccess(lVar22 + _TtC7PostHog26PostHogErrorTrackingConfig::ignoredExceptionTypes,
                       auStack_110,0,0);
    lVar16 = *(long *)(lVar22 + lVar16);
    if (*(long *)(lVar16 + 0x10) == 0) goto LAB_100143638;
    if (param_3 == (undefined *)0x0) {
      _swift_retain(local_138);
      _swift_bridgeObjectRetain(lVar16);
      puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_1000f8154();
    }
    else {
      _swift_retain(local_138);
      _swift_bridgeObjectRetain(lVar16);
      puVar5 = param_3;
    }
    _swift_bridgeObjectRetain(param_3);
    puVar7 = puVar5;
    FUN_100103b68(puVar5,lVar16);
    _swift_bridgeObjectRelease(lVar16);
    _swift_bridgeObjectRelease(puVar5);
    if (((ulong)puVar7 & 1) == 0) goto LAB_100143730;
    if (DAT_101057340 != '\x01') {
      FUN_1000fb4c4(puVar12,&DAT_100faf508,&DAT_100c2e2e0);
      _swift_release(local_138);
      return;
    }
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
    pcVar6[0x20] = '\\';
    pcVar6[0x21] = '\0';
    pcVar6[0x22] = '\0';
    pcVar6[0x23] = '\0';
    pcVar6[0x24] = '\0';
    pcVar6[0x25] = '\0';
    pcVar6[0x26] = '\0';
    pcVar6[0x27] = -0x30;
    pcVar6[0x28] = -0x60;
    pcVar6[0x29] = '\x15';
    pcVar6[0x2a] = -0x27;
    pcVar6[0x2b] = '\0';
    pcVar6[0x2c] = '\x01';
    pcVar6[0x2d] = '\0';
    pcVar6[0x2e] = '\0';
    pcVar6[0x2f] = -0x80;
    SVar24.bridgeObject = (void *)0x20;
    SVar24.str = pcVar6;
    separator_00.bridgeObject = (void *)0xa;
    separator_00.str = (char *)0xe100000000000000;
    Swift::_print(SVar24,separator_00);
    _swift_release(pcVar6);
    pcVar6 = local_138;
  }
  _swift_release(pcVar6);
LAB_100143510:
  FUN_1000fb4c4(puVar12,&DAT_100faf508,&DAT_100c2e2e0);
  return;
}



/* Address: 0x100143dbc | _TtC7PostHog10PostHogSDK::captureWithEvent:properties: */

/* Function Stack Size: 0x20 bytes */

void _TtC7PostHog10PostHogSDK::captureWithEvent_properties_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  FUN_1001509c8();
  return;
}



/* Address: 0x100143dc8 | FUN_100143dc8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100143dc8(undefined *param_1,undefined *param_2,undefined *param_3,long param_4)

{
  char *pcVar1;
  byte bVar2;
  undefined8 *puVar3;
  bool bVar4;
  Date DVar5;
  undefined *puVar6;
  char *pcVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  _StringGuts _Var10;
  long lVar11;
  ulong uVar12;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar13;
  long extraout_x12;
  undefined8 *puVar14;
  long unaff_x20;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  ID self;
  undefined1 *puVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  code *pcVar22;
  long lVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String separator;
  String separator_00;
  String separator_01;
  undefined8 uStack_150;
  long local_148;
  char *local_140;
  undefined8 *local_138;
  long local_130;
  undefined *local_128;
  _StringGuts local_120;
  _StringGuts local_118;
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined8 *local_e0 [3];
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long local_a8;
  undefined1 auStack_a0 [24];
  undefined8 *local_88;
  undefined1 auStack_80 [32];
  
  local_128 = param_3;
  local_120.unknown = param_2;
  local_118.unknown = param_1;
  DVar5 = Foundation::Date::typeMetadataAccessor();
  lVar23 = *(long *)(DVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar23 + 0x40));
  lVar20 = (long)&uStack_150 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_100faf508;
  FUN_1000f7830(&DAT_100faf508,&DAT_100c2e2e0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  lVar15 = lVar20 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar14 = (undefined8 *)(lVar15 - extraout_x12);
  (**(code **)(lVar23 + 0x38))(puVar14,1,1,DVar5.unknown);
  self = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::setupLock);
  objc_stub::lock(self);
  lVar11 = _TtC7PostHog10PostHogSDK::enabled;
  bVar2 = *(byte *)(unaff_x20 + _TtC7PostHog10PostHogSDK::enabled);
  objc_stub::unlock(self);
  lVar21 = PostHogConfig::optOut;
  lVar16 = _TtC7PostHog10PostHogSDK::config;
  if ((bVar2 & 1) == 0) {
    if (DAT_101057340 != '\x01') goto LAB_100144020;
    pcVar7 = &DAT_100fae660;
    FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
    _swift_allocObject();
    pcVar7[0x18] = '\x02';
    pcVar7[0x19] = '\0';
    pcVar7[0x1a] = '\0';
    pcVar7[0x1b] = '\0';
    pcVar7[0x1c] = '\0';
    pcVar7[0x1d] = '\0';
    pcVar7[0x1e] = '\0';
    pcVar7[0x1f] = '\0';
    pcVar7[0x10] = '\x01';
    pcVar7[0x11] = '\0';
    pcVar7[0x12] = '\0';
    pcVar7[0x13] = '\0';
    pcVar7[0x14] = '\0';
    pcVar7[0x15] = '\0';
    pcVar7[0x16] = '\0';
    pcVar7[0x17] = '\0';
    pcVar1 = 
    "[PostHog] PostHog method was called without `setup` being complete. Call wil be ignored.";
    *(undefined **)(pcVar7 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
    uVar13 = 0xd000000000000058;
LAB_100144000:
    *(undefined8 *)(pcVar7 + 0x20) = uVar13;
    *(ulong *)(pcVar7 + 0x28) = (ulong)(pcVar1 + -0x20) | 0x8000000000000000;
    SVar24.bridgeObject = (void *)0x20;
    SVar24.str = pcVar7;
    separator.bridgeObject = (void *)0xa;
    separator.str = (char *)0xe100000000000000;
    Swift::_print(SVar24,separator);
  }
  else {
    lVar19 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::config);
    local_138 = (undefined8 *)lVar20;
    local_130 = param_4;
    _swift_beginAccess(lVar19 + PostHogConfig::optOut,auStack_80,0,0);
    if (*(char *)(lVar19 + lVar21) == '\x01') {
      if (DAT_101057340 != '\x01') goto LAB_100144020;
      pcVar7 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      _swift_allocObject();
      pcVar7[0x18] = '\x02';
      pcVar7[0x19] = '\0';
      pcVar7[0x1a] = '\0';
      pcVar7[0x1b] = '\0';
      pcVar7[0x1c] = '\0';
      pcVar7[0x1d] = '\0';
      pcVar7[0x1e] = '\0';
      pcVar7[0x1f] = '\0';
      pcVar7[0x10] = '\x01';
      pcVar7[0x11] = '\0';
      pcVar7[0x12] = '\0';
      pcVar7[0x13] = '\0';
      pcVar7[0x14] = '\0';
      pcVar7[0x15] = '\0';
      pcVar7[0x16] = '\0';
      pcVar7[0x17] = '\0';
      pcVar1 = "[PostHog] PostHog is in OptOut state.";
      *(undefined **)(pcVar7 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      uVar13 = 0xd000000000000025;
      goto LAB_100144000;
    }
    local_140 = *(char **)(unaff_x20 + _TtC7PostHog10PostHogSDK::queue);
    if (local_140 == (char *)0x0) goto LAB_100144020;
    uStack_150._4_4_ =
         (uint)(local_118.unknown == (undefined *)0x6974706563786524 &&
               local_120.unknown == (undefined *)0xea00000000006e6f);
    local_148 = lVar23;
    if ((local_118.unknown != (undefined *)0x6974706563786524 ||
         local_120.unknown != (undefined *)0xea00000000006e6f) &&
       (bVar4 = Swift::_stringCompareWithSmolCheck
                          (local_118,local_120,(_StringComparisonResult)0x24), !bVar4)) {
LAB_100144150:
      _swift_retain(local_140);
LAB_100144248:
      if ((local_118.unknown == (undefined *)0x6f687370616e7324) &&
         (local_120.unknown == (undefined *)0xe900000000000074)) {
        bVar4 = false;
      }
      else {
        bVar4 = Swift::_stringCompareWithSmolCheck
                          (local_118,local_120,(_StringComparisonResult)0x24);
        bVar4 = !bVar4;
      }
      FUN_1000f8cac(puVar14,lVar15,&DAT_100faf508,&DAT_100c2e2e0);
      lVar21 = local_148;
      pcVar22 = *(code **)(local_148 + 0x30);
      lVar20 = lVar15;
      (*pcVar22)(lVar15,1,DVar5.unknown);
      puVar3 = local_138;
      if ((int)lVar20 == 1) {
        Foundation::Date::init();
        lVar21 = lVar15;
        (*pcVar22)(lVar15,1,DVar5.unknown);
        if ((int)lVar21 != 1) {
          FUN_1000fb4c4(lVar15,&DAT_100faf508,&DAT_100c2e2e0);
        }
      }
      else {
        (**(code **)(lVar21 + 0x20))(local_138,lVar15,DVar5.unknown);
      }
      objc_stub::lock(self);
      bVar2 = *(byte *)(unaff_x20 + lVar11);
      objc_stub::unlock(self);
      lVar11 = PostHogConfig::storageManager;
      if ((bVar2 & 1) == 0) {
        if (DAT_101057340 == '\x01') {
          pcVar7 = &DAT_100fae660;
          FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
          _swift_allocObject();
          pcVar7[0x18] = '\x02';
          pcVar7[0x19] = '\0';
          pcVar7[0x1a] = '\0';
          pcVar7[0x1b] = '\0';
          pcVar7[0x1c] = '\0';
          pcVar7[0x1d] = '\0';
          pcVar7[0x1e] = '\0';
          pcVar7[0x1f] = '\0';
          pcVar7[0x10] = '\x01';
          pcVar7[0x11] = '\0';
          pcVar7[0x12] = '\0';
          pcVar7[0x13] = '\0';
          pcVar7[0x14] = '\0';
          pcVar7[0x15] = '\0';
          pcVar7[0x16] = '\0';
          pcVar7[0x17] = '\0';
          *(undefined **)(pcVar7 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
          pcVar7[0x20] = 'X';
          pcVar7[0x21] = '\0';
          pcVar7[0x22] = '\0';
          pcVar7[0x23] = '\0';
          pcVar7[0x24] = '\0';
          pcVar7[0x25] = '\0';
          pcVar7[0x26] = '\0';
          pcVar7[0x27] = -0x30;
          pcVar7[0x28] = '@';
          pcVar7[0x29] = '\x15';
          pcVar7[0x2a] = -0x27;
          pcVar7[0x2b] = '\0';
          pcVar7[0x2c] = '\x01';
          pcVar7[0x2d] = '\0';
          pcVar7[0x2e] = '\0';
          pcVar7[0x2f] = -0x80;
          SVar26.bridgeObject = (void *)0x20;
          SVar26.str = pcVar7;
          separator_01.bridgeObject = (void *)0xa;
          separator_01.str = (char *)0xe100000000000000;
          Swift::_print(SVar26,separator_01);
          _swift_release(pcVar7);
        }
LAB_10014443c:
        local_138 = (undefined8 *)0x0;
        puVar18 = (undefined1 *)0xe000000000000000;
      }
      else {
        lVar16 = *(long *)(unaff_x20 + lVar16);
        puVar18 = auStack_f8;
        _swift_beginAccess(lVar16 + PostHogConfig::storageManager,puVar18,0,0);
        puVar17 = *(undefined8 **)(lVar16 + lVar11);
        if (puVar17 == (undefined8 *)0x0) goto LAB_10014443c;
        puVar9 = puVar17;
        _swift_retain();
        FUN_10015cd34();
        local_138 = puVar9;
        _swift_release(puVar17);
      }
      lVar16 = local_130;
      if ((local_130 != 0) && (*(long *)(local_130 + 0x10) != 0)) {
        FUN_10013ea50(0xd000000000000085,0x8000000100d92dd0);
      }
      puVar6 = local_128;
      FUN_10016ead0(local_128);
      FUN_10016ead0(lVar16);
      puVar17 = local_138;
      FUN_10013ec54(local_138,puVar18,puVar6,lVar16,0,0,bVar4,puVar14);
      _swift_bridgeObjectRelease(lVar16);
      _swift_bridgeObjectRelease(puVar6);
      local_88 = puVar17;
      if (((uStack_150._4_4_ & 1) != 0) ||
         (bVar4 = Swift::_stringCompareWithSmolCheck
                            (local_118,local_120,(_StringComparisonResult)0x24), bVar4)) {
        if (puVar17[2] != 0) {
          _swift_bridgeObjectRetain(puVar17);
          uVar12 = 0;
          lVar16 = -0x2ffffffffffffff0;
          FUN_100071370(0xd000000000000010);
          if ((uVar12 & 1) != 0) {
            FUN_10000cbfc(puVar17[7] + lVar16 * 0x20,&local_c0);
            _swift_bridgeObjectRelease(puVar17);
            FUN_1000fb4c4(&local_c0,&DAT_100fae668,&DAT_100c2e4a0);
            goto LAB_100144688;
          }
          _swift_bridgeObjectRelease(puVar17);
        }
        uStack_b8 = 0;
        local_c0 = 0;
        local_a8 = 0;
        uStack_b0 = 0;
        puVar9 = &local_c0;
        FUN_1000fb4c4(puVar9,&DAT_100fae668,&DAT_100c2e4a0);
        FUN_100150cd8();
        if (puVar9 != (undefined8 *)0x0) {
          puVar6 = &DAT_100fae868;
          FUN_1000f7830(&DAT_100fae868,&DAT_100c2e2f0);
          local_e0[0] = puVar9;
          local_c8 = puVar6;
          if (puVar6 == (undefined *)0x0) {
            FUN_1000fb4c4(local_e0,&DAT_100fae668,&DAT_100c2e4a0);
            FUN_10016fcc4(&local_c0,0xd000000000000010,0x8000000100d914f0);
            FUN_1000fb4c4(&local_c0,&DAT_100fae668,&DAT_100c2e4a0);
            puVar17 = local_88;
          }
          else {
            FUN_100011080(local_e0,&local_c0);
            puVar9 = puVar17;
            _swift_isUniquelyReferenced_nonNull_native(puVar17);
            local_e0[0] = puVar17;
            FUN_10016fe74(&local_c0,0xd000000000000010,0x8000000100d914f0,puVar9);
            puVar17 = local_e0[0];
          }
        }
      }
LAB_100144688:
      _Var10.unknown = local_118.unknown;
      FUN_100149464(local_118.unknown,local_120.unknown,local_138,puVar18,puVar17,puVar3);
      _swift_bridgeObjectRelease(puVar18);
      if (_Var10.unknown != (undefined *)0x0) {
        puVar9 = (undefined8 *)(_Var10.unknown + PostHogEvent::event);
        _swift_beginAccess(puVar9,local_e0,0,0);
        if ((((undefined *)*puVar9 == (undefined *)0x6f687370616e7324) &&
            ((undefined *)puVar9[1] == (undefined *)0xe900000000000074)) ||
           (bVar4 = Swift::_stringCompareWithSmolCheck
                              ((undefined *)*puVar9,(undefined *)puVar9[1],
                               (_StringComparisonResult)0x24), bVar4)) {
          lVar16 = PostHogEvent::properties;
          _swift_beginAccess(_Var10.unknown + PostHogEvent::properties,auStack_a0,0,0);
          lVar16 = *(long *)(_Var10.unknown + lVar16);
          if (*(long *)(lVar16 + 0x10) == 0) {
            uStack_b8 = 0;
            local_c0 = 0;
            local_a8 = 0;
            uStack_b0 = 0;
          }
          else {
            _swift_bridgeObjectRetain(lVar16);
            lVar11 = 0x6e6f697373657324;
            uVar12 = 0xeb0000000064695f;
            FUN_100071370(0x6e6f697373657324);
            if ((uVar12 & 1) == 0) {
              uStack_b8 = 0;
              local_c0 = 0;
              local_a8 = 0;
              uStack_b0 = 0;
            }
            else {
              FUN_10000cbfc(*(long *)(lVar16 + 0x38) + lVar11 * 0x20,&local_c0);
            }
            _swift_bridgeObjectRelease(lVar16);
            if (local_a8 != 0) {
              FUN_1000fb4c4(&local_c0,&DAT_100fae668,&DAT_100c2e4a0);
              FUN_100142640(local_130,0);
              lVar16 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::replayQueue);
              if (lVar16 != 0) {
                _swift_retain(lVar16);
                FUN_100167d84(_Var10.unknown);
                _swift_release(lVar16);
              }
              goto LAB_10014483c;
            }
          }
          _swift_release(local_140);
          (**(code **)(local_148 + 8))(puVar3,DVar5.unknown);
          FUN_1000fb4c4(puVar14,&DAT_100faf508,&DAT_100c2e2e0);
          puVar6 = &DAT_100fae668;
          puVar8 = &DAT_100c2e4a0;
          puVar14 = &local_c0;
          goto LAB_1001448f4;
        }
        FUN_100142640(local_130,0);
        FUN_100136870(_Var10.unknown,FUN_10013662c);
LAB_10014483c:
        FUN_1001349c8(_Var10.unknown,FUN_10010f72c);
      }
      _swift_release(local_140);
      (**(code **)(local_148 + 8))(puVar3,DVar5.unknown);
      puVar6 = &DAT_100faf508;
      puVar8 = &DAT_100c2e2e0;
LAB_1001448f4:
      FUN_1000fb4c4(puVar14,puVar6,puVar8);
      _swift_bridgeObjectRelease(puVar17);
      return;
    }
    lVar21 = _TtC7PostHog26PostHogErrorTrackingConfig::ignoredExceptionTypes;
    lVar20 = *(long *)(lVar19 + PostHogConfig::errorTrackingConfig);
    _swift_beginAccess(lVar20 + _TtC7PostHog26PostHogErrorTrackingConfig::ignoredExceptionTypes,
                       auStack_110,0,0);
    puVar6 = local_128;
    lVar21 = *(long *)(lVar20 + lVar21);
    if (*(long *)(lVar21 + 0x10) == 0) goto LAB_100144150;
    if (local_128 == (undefined *)0x0) {
      _swift_retain(local_140);
      _swift_bridgeObjectRetain(lVar21);
      puVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_1000f8154();
    }
    else {
      _swift_retain(local_140);
      _swift_bridgeObjectRetain(lVar21);
      puVar8 = puVar6;
    }
    _swift_bridgeObjectRetain(puVar6);
    puVar6 = puVar8;
    FUN_100103b68(puVar8,lVar21);
    _swift_bridgeObjectRelease(lVar21);
    _swift_bridgeObjectRelease(puVar8);
    if (((ulong)puVar6 & 1) == 0) goto LAB_100144248;
    if (DAT_101057340 != '\x01') {
      FUN_1000fb4c4(puVar14,&DAT_100faf508,&DAT_100c2e2e0);
      _swift_release(local_140);
      return;
    }
    pcVar7 = &DAT_100fae660;
    FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
    _swift_allocObject();
    pcVar7[0x18] = '\x02';
    pcVar7[0x19] = '\0';
    pcVar7[0x1a] = '\0';
    pcVar7[0x1b] = '\0';
    pcVar7[0x1c] = '\0';
    pcVar7[0x1d] = '\0';
    pcVar7[0x1e] = '\0';
    pcVar7[0x1f] = '\0';
    pcVar7[0x10] = '\x01';
    pcVar7[0x11] = '\0';
    pcVar7[0x12] = '\0';
    pcVar7[0x13] = '\0';
    pcVar7[0x14] = '\0';
    pcVar7[0x15] = '\0';
    pcVar7[0x16] = '\0';
    pcVar7[0x17] = '\0';
    *(undefined **)(pcVar7 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
    pcVar7[0x20] = '\\';
    pcVar7[0x21] = '\0';
    pcVar7[0x22] = '\0';
    pcVar7[0x23] = '\0';
    pcVar7[0x24] = '\0';
    pcVar7[0x25] = '\0';
    pcVar7[0x26] = '\0';
    pcVar7[0x27] = -0x30;
    pcVar7[0x28] = -0x60;
    pcVar7[0x29] = '\x15';
    pcVar7[0x2a] = -0x27;
    pcVar7[0x2b] = '\0';
    pcVar7[0x2c] = '\x01';
    pcVar7[0x2d] = '\0';
    pcVar7[0x2e] = '\0';
    pcVar7[0x2f] = -0x80;
    SVar25.bridgeObject = (void *)0x20;
    SVar25.str = pcVar7;
    separator_00.bridgeObject = (void *)0xa;
    separator_00.str = (char *)0xe100000000000000;
    Swift::_print(SVar25,separator_00);
    _swift_release(pcVar7);
    pcVar7 = local_140;
  }
  _swift_release(pcVar7);
LAB_100144020:
  FUN_1000fb4c4(puVar14,&DAT_100faf508,&DAT_100c2e2e0);
  return;
}



/* Address: 0x100144904 | _TtC7PostHog10PostHogSDK::captureWithEvent:properties:userProperties: */

/* Function Stack Size: 0x28 bytes */

void _TtC7PostHog10PostHogSDK::captureWithEvent_properties_userProperties_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  FUN_100144910();
  return;
}



/* Address: 0x100144910 | FUN_100144910 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100144910(void)

{
  Dictionary<undefined,undefined> DVar1;
  Dictionary<undefined,undefined> DVar2;
  long in_x3;
  long in_x4;
  code *in_x5;
  String SVar3;
  
  SVar3 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  DVar1.unknown = (undefined *)0x0;
  if (in_x3 != 0) {
    DVar1 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  }
  DVar2.unknown = (undefined *)0x0;
  if (in_x4 != 0) {
    DVar2 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  }
  (*in_x5)(SVar3.str,SVar3.bridgeObject,DVar1.unknown,DVar2.unknown);
  _swift_bridgeObjectRelease(SVar3.bridgeObject);
  _swift_bridgeObjectRelease(DVar2.unknown);
  _swift_bridgeObjectRelease(DVar1.unknown);
  return;
}



/* Address: 0x1001449f0 | FUN_1001449f0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001449f0(undefined *param_1,undefined *param_2,undefined *param_3,long param_4,
                  long param_5)

{
  char *pcVar1;
  byte bVar2;
  bool bVar3;
  Date DVar4;
  undefined *puVar5;
  char *pcVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long lVar9;
  _StringGuts _Var10;
  ulong uVar11;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar12;
  long extraout_x12;
  undefined8 *puVar13;
  long unaff_x20;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined1 *puVar17;
  long lVar18;
  long lVar19;
  ID self;
  long lVar20;
  code *pcVar21;
  long lVar22;
  undefined8 *puVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String separator;
  String separator_00;
  String separator_01;
  undefined8 uStack_160;
  uint local_154;
  long local_150;
  char *local_148;
  long local_140;
  long local_138;
  undefined8 *local_130;
  undefined *local_128;
  _StringGuts local_120;
  _StringGuts local_118;
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined8 *local_e0 [3];
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long local_a8;
  undefined1 auStack_a0 [24];
  undefined8 *local_88;
  undefined1 auStack_80 [32];
  
  local_130 = (undefined8 *)param_4;
  local_128 = param_3;
  local_120.unknown = param_2;
  local_118.unknown = param_1;
  DVar4 = Foundation::Date::typeMetadataAccessor();
  lVar22 = *(long *)(DVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar22 + 0x40));
  lVar19 = (long)&uStack_160 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100faf508;
  FUN_1000f7830(&DAT_100faf508,&DAT_100c2e2e0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  lVar14 = lVar19 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar13 = (undefined8 *)(lVar14 - extraout_x12);
  (**(code **)(lVar22 + 0x38))(puVar13,1,1,DVar4.unknown);
  self = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::setupLock);
  objc_stub::lock(self);
  lVar9 = _TtC7PostHog10PostHogSDK::enabled;
  bVar2 = *(byte *)(unaff_x20 + _TtC7PostHog10PostHogSDK::enabled);
  objc_stub::unlock(self);
  lVar20 = PostHogConfig::optOut;
  lVar15 = _TtC7PostHog10PostHogSDK::config;
  if ((bVar2 & 1) == 0) {
    if (DAT_101057340 != '\x01') goto LAB_100144c50;
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
    pcVar1 = 
    "[PostHog] PostHog method was called without `setup` being complete. Call wil be ignored.";
    *(undefined **)(pcVar6 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
    uVar12 = 0xd000000000000058;
LAB_100144c30:
    *(undefined8 *)(pcVar6 + 0x20) = uVar12;
    *(ulong *)(pcVar6 + 0x28) = (ulong)(pcVar1 + -0x20) | 0x8000000000000000;
    SVar24.bridgeObject = (void *)0x20;
    SVar24.str = pcVar6;
    separator.bridgeObject = (void *)0xa;
    separator.str = (char *)0xe100000000000000;
    Swift::_print(SVar24,separator);
  }
  else {
    lVar18 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::config);
    local_140 = lVar19;
    local_138 = param_5;
    _swift_beginAccess(lVar18 + PostHogConfig::optOut,auStack_80,0,0);
    if (*(char *)(lVar18 + lVar20) == '\x01') {
      if (DAT_101057340 != '\x01') goto LAB_100144c50;
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
      pcVar1 = "[PostHog] PostHog is in OptOut state.";
      *(undefined **)(pcVar6 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      uVar12 = 0xd000000000000025;
      goto LAB_100144c30;
    }
    local_148 = *(char **)(unaff_x20 + _TtC7PostHog10PostHogSDK::queue);
    if (local_148 == (char *)0x0) goto LAB_100144c50;
    local_154 = (uint)(local_118.unknown == (undefined *)0x6974706563786524 &&
                      local_120.unknown == (undefined *)0xea00000000006e6f);
    local_150 = lVar22;
    if ((local_118.unknown != (undefined *)0x6974706563786524 ||
         local_120.unknown != (undefined *)0xea00000000006e6f) &&
       (bVar3 = Swift::_stringCompareWithSmolCheck
                          (local_118,local_120,(_StringComparisonResult)0x24), !bVar3)) {
LAB_100144d80:
      _swift_retain(local_148);
LAB_100144e78:
      if ((local_118.unknown == (undefined *)0x6f687370616e7324) &&
         (local_120.unknown == (undefined *)0xe900000000000074)) {
        bVar3 = false;
      }
      else {
        bVar3 = Swift::_stringCompareWithSmolCheck
                          (local_118,local_120,(_StringComparisonResult)0x24);
        bVar3 = !bVar3;
      }
      FUN_1000f8cac(puVar13,lVar14,&DAT_100faf508,&DAT_100c2e2e0);
      lVar20 = local_150;
      pcVar21 = *(code **)(local_150 + 0x30);
      lVar19 = lVar14;
      (*pcVar21)(lVar14,1,DVar4.unknown);
      if ((int)lVar19 == 1) {
        Foundation::Date::init();
        lVar20 = lVar14;
        (*pcVar21)(lVar14,1,DVar4.unknown);
        puVar23 = local_130;
        if ((int)lVar20 != 1) {
          FUN_1000fb4c4(lVar14,&DAT_100faf508,&DAT_100c2e2e0);
        }
      }
      else {
        (**(code **)(lVar20 + 0x20))(local_140,lVar14,DVar4.unknown);
        puVar23 = local_130;
      }
      objc_stub::lock(self);
      bVar2 = *(byte *)(unaff_x20 + lVar9);
      objc_stub::unlock(self);
      lVar9 = PostHogConfig::storageManager;
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
          SVar26.bridgeObject = (void *)0x20;
          SVar26.str = pcVar6;
          separator_01.bridgeObject = (void *)0xa;
          separator_01.str = (char *)0xe100000000000000;
          Swift::_print(SVar26,separator_01);
          _swift_release(pcVar6);
        }
LAB_100145078:
        local_130 = (undefined8 *)0x0;
        puVar17 = (undefined1 *)0xe000000000000000;
        if (puVar23 == (undefined8 *)0x0) goto LAB_100145090;
LAB_100145088:
        if (*(long *)((long)puVar23 + 0x10) == 0) goto LAB_100145090;
LAB_1001450ac:
        FUN_10013ea50(0xd000000000000085,0x8000000100d92dd0);
      }
      else {
        lVar15 = *(long *)(unaff_x20 + lVar15);
        puVar17 = auStack_f8;
        _swift_beginAccess(lVar15 + PostHogConfig::storageManager,puVar17,0,0);
        puVar16 = *(undefined8 **)(lVar15 + lVar9);
        if (puVar16 == (undefined8 *)0x0) goto LAB_100145078;
        puVar8 = puVar16;
        _swift_retain();
        FUN_10015cd34();
        local_130 = puVar8;
        _swift_release(puVar16);
        if (puVar23 != (undefined8 *)0x0) goto LAB_100145088;
LAB_100145090:
        if ((local_138 != 0) && (*(long *)(local_138 + 0x10) != 0)) goto LAB_1001450ac;
      }
      puVar5 = local_128;
      FUN_10016ead0(local_128);
      lVar15 = (long)puVar23;
      FUN_10016ead0(puVar23);
      lVar9 = local_138;
      FUN_10016ead0(local_138);
      puVar16 = local_130;
      FUN_10013ec54(local_130,puVar17,puVar5,lVar15,lVar9,0,bVar3,puVar13);
      _swift_bridgeObjectRelease(lVar9);
      _swift_bridgeObjectRelease(lVar15);
      _swift_bridgeObjectRelease(puVar5);
      local_88 = puVar16;
      if (((local_154 & 1) != 0) ||
         (bVar3 = Swift::_stringCompareWithSmolCheck
                            (local_118,local_120,(_StringComparisonResult)0x24), lVar15 = local_140,
         bVar3)) {
        lVar15 = local_140;
        if (puVar16[2] != 0) {
          _swift_bridgeObjectRetain(puVar16);
          uVar11 = 0;
          lVar9 = -0x2ffffffffffffff0;
          FUN_100071370(0xd000000000000010);
          if ((uVar11 & 1) != 0) {
            FUN_10000cbfc(puVar16[7] + lVar9 * 0x20,&local_c0);
            _swift_bridgeObjectRelease(puVar16);
            FUN_1000fb4c4(&local_c0,&DAT_100fae668,&DAT_100c2e4a0);
            goto LAB_10014530c;
          }
          _swift_bridgeObjectRelease(puVar16);
        }
        uStack_b8 = 0;
        local_c0 = 0;
        local_a8 = 0;
        uStack_b0 = 0;
        puVar8 = &local_c0;
        FUN_1000fb4c4(puVar8,&DAT_100fae668,&DAT_100c2e4a0);
        FUN_100150cd8();
        if (puVar8 != (undefined8 *)0x0) {
          puVar5 = &DAT_100fae868;
          FUN_1000f7830(&DAT_100fae868,&DAT_100c2e2f0);
          local_e0[0] = puVar8;
          local_c8 = puVar5;
          if (puVar5 == (undefined *)0x0) {
            FUN_1000fb4c4(local_e0,&DAT_100fae668,&DAT_100c2e4a0);
            FUN_10016fcc4(&local_c0,0xd000000000000010,0x8000000100d914f0);
            FUN_1000fb4c4(&local_c0,&DAT_100fae668,&DAT_100c2e4a0);
            puVar16 = local_88;
          }
          else {
            FUN_100011080(local_e0,&local_c0);
            puVar8 = puVar16;
            _swift_isUniquelyReferenced_nonNull_native(puVar16);
            local_e0[0] = puVar16;
            FUN_10016fe74(&local_c0,0xd000000000000010,0x8000000100d914f0,puVar8);
            puVar16 = local_e0[0];
          }
        }
      }
LAB_10014530c:
      _Var10.unknown = local_118.unknown;
      FUN_100149464(local_118.unknown,local_120.unknown,local_130,puVar17,puVar16,lVar15);
      _swift_bridgeObjectRelease(puVar17);
      if (_Var10.unknown == (undefined *)0x0) {
        _swift_release(local_148);
        pcVar21 = *(code **)(local_150 + 8);
      }
      else {
        puVar8 = (undefined8 *)(_Var10.unknown + PostHogEvent::event);
        _swift_beginAccess(puVar8,local_e0,0,0);
        if ((((undefined *)*puVar8 == (undefined *)0x6f687370616e7324) &&
            ((undefined *)puVar8[1] == (undefined *)0xe900000000000074)) ||
           (bVar3 = Swift::_stringCompareWithSmolCheck
                              ((undefined *)*puVar8,(undefined *)puVar8[1],
                               (_StringComparisonResult)0x24), bVar3)) {
          lVar9 = PostHogEvent::properties;
          _swift_beginAccess(_Var10.unknown + PostHogEvent::properties,auStack_a0,0,0);
          lVar20 = *(long *)(_Var10.unknown + lVar9);
          if (*(long *)(lVar20 + 0x10) == 0) {
            uStack_b8 = 0;
            local_c0 = 0;
            local_a8 = 0;
            uStack_b0 = 0;
            lVar9 = local_150;
          }
          else {
            _swift_bridgeObjectRetain(lVar20);
            lVar9 = 0x6e6f697373657324;
            uVar11 = 0xeb0000000064695f;
            FUN_100071370(0x6e6f697373657324);
            if ((uVar11 & 1) == 0) {
              uStack_b8 = 0;
              local_c0 = 0;
              local_a8 = 0;
              uStack_b0 = 0;
            }
            else {
              FUN_10000cbfc(*(long *)(lVar20 + 0x38) + lVar9 * 0x20,&local_c0);
            }
            lVar9 = local_150;
            _swift_bridgeObjectRelease(lVar20);
            if (local_a8 != 0) {
              FUN_1000fb4c4(&local_c0,&DAT_100fae668,&DAT_100c2e4a0);
              FUN_100142640(puVar23,local_138);
              lVar20 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::replayQueue);
              if (lVar20 != 0) {
                _swift_retain(lVar20);
                FUN_100167d84(_Var10.unknown);
                _swift_release(lVar20);
              }
              goto LAB_1001454f4;
            }
          }
          _swift_release(local_148);
          (**(code **)(lVar9 + 8))(lVar15,DVar4.unknown);
          FUN_1000fb4c4(puVar13,&DAT_100faf508,&DAT_100c2e2e0);
          puVar5 = &DAT_100fae668;
          puVar7 = &DAT_100c2e4a0;
          puVar13 = &local_c0;
          goto LAB_10014559c;
        }
        FUN_100142640(puVar23,local_138);
        FUN_100136870(_Var10.unknown,FUN_10013662c);
        lVar9 = local_150;
LAB_1001454f4:
        FUN_1001349c8(_Var10.unknown,FUN_10010f72c);
        _swift_release(local_148);
        pcVar21 = *(code **)(lVar9 + 8);
      }
      (*pcVar21)(lVar15,DVar4.unknown);
      puVar5 = &DAT_100faf508;
      puVar7 = &DAT_100c2e2e0;
LAB_10014559c:
      FUN_1000fb4c4(puVar13,puVar5,puVar7);
      _swift_bridgeObjectRelease(puVar16);
      return;
    }
    lVar20 = _TtC7PostHog26PostHogErrorTrackingConfig::ignoredExceptionTypes;
    lVar19 = *(long *)(lVar18 + PostHogConfig::errorTrackingConfig);
    _swift_beginAccess(lVar19 + _TtC7PostHog26PostHogErrorTrackingConfig::ignoredExceptionTypes,
                       auStack_110,0,0);
    puVar5 = local_128;
    lVar20 = *(long *)(lVar19 + lVar20);
    if (*(long *)(lVar20 + 0x10) == 0) goto LAB_100144d80;
    if (local_128 == (undefined *)0x0) {
      _swift_retain(local_148);
      _swift_bridgeObjectRetain(lVar20);
      puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_1000f8154();
    }
    else {
      _swift_retain(local_148);
      _swift_bridgeObjectRetain(lVar20);
      puVar7 = puVar5;
    }
    _swift_bridgeObjectRetain(puVar5);
    puVar5 = puVar7;
    FUN_100103b68(puVar7,lVar20);
    _swift_bridgeObjectRelease(lVar20);
    _swift_bridgeObjectRelease(puVar7);
    if (((ulong)puVar5 & 1) == 0) goto LAB_100144e78;
    if (DAT_101057340 != '\x01') {
      FUN_1000fb4c4(puVar13,&DAT_100faf508,&DAT_100c2e2e0);
      _swift_release(local_148);
      return;
    }
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
    pcVar6[0x20] = '\\';
    pcVar6[0x21] = '\0';
    pcVar6[0x22] = '\0';
    pcVar6[0x23] = '\0';
    pcVar6[0x24] = '\0';
    pcVar6[0x25] = '\0';
    pcVar6[0x26] = '\0';
    pcVar6[0x27] = -0x30;
    pcVar6[0x28] = -0x60;
    pcVar6[0x29] = '\x15';
    pcVar6[0x2a] = -0x27;
    pcVar6[0x2b] = '\0';
    pcVar6[0x2c] = '\x01';
    pcVar6[0x2d] = '\0';
    pcVar6[0x2e] = '\0';
    pcVar6[0x2f] = -0x80;
    SVar25.bridgeObject = (void *)0x20;
    SVar25.str = pcVar6;
    separator_00.bridgeObject = (void *)0xa;
    separator_00.str = (char *)0xe100000000000000;
    Swift::_print(SVar25,separator_00);
    _swift_release(pcVar6);
    pcVar6 = local_148;
  }
  _swift_release(pcVar6);
LAB_100144c50:
  FUN_1000fb4c4(puVar13,&DAT_100faf508,&DAT_100c2e2e0);
  return;
}



/* Address: 0x1001455ac | _TtC7PostHog10PostHogSDK::captureWithEvent:properties:userProperties:userPropertiesSetOnce: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x30 bytes */

void _TtC7PostHog10PostHogSDK::captureWithEvent_properties_userProperties_userPropertiesSetOnce_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6)

{
  Dictionary<undefined,undefined> DVar1;
  Dictionary<undefined,undefined> DVar2;
  Dictionary<undefined,undefined> DVar3;
  String SVar4;
  
  SVar4 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  DVar1.unknown = (undefined *)0x0;
  if (param_4 != 0) {
    DVar1 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  }
  DVar2.unknown = (undefined *)0x0;
  if (param_5 != 0) {
    DVar2 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  }
  DVar3.unknown = (undefined *)0x0;
  if (param_6 != 0) {
    DVar3 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  }
  FUN_1001449f0(SVar4.str,SVar4.bridgeObject,DVar1.unknown,DVar2.unknown,DVar3.unknown);
  _swift_bridgeObjectRelease(SVar4.bridgeObject);
  _swift_bridgeObjectRelease(DVar3.unknown);
  _swift_bridgeObjectRelease(DVar2.unknown);
  _swift_bridgeObjectRelease(DVar1.unknown);
  return;
}



/* Address: 0x1001456bc | FUN_1001456bc */

void FUN_1001456bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  Date DVar2;
  long extraout_x8;
  undefined1 *puVar3;
  undefined8 auStack_70 [2];
  
  puVar1 = &DAT_100faf508;
  FUN_1000f7830(&DAT_100faf508,&DAT_100c2e2e0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffa0 + -extraout_x8;
  DVar2 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar2.unknown + -8) + 0x38))(puVar3,1,1,DVar2.unknown);
  *(undefined1 **)((long)auStack_70 + -extraout_x8) = puVar3;
  FUN_100145cf8(param_1,param_2,0,0,param_3,param_4,param_5,param_6);
  FUN_1000fb4c4(puVar3,&DAT_100faf508,&DAT_100c2e2e0);
  return;
}



/* Address: 0x1001457b4 | _TtC7PostHog10PostHogSDK::captureWithEvent:properties:userProperties:userPropertiesSetOnce:groups: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x38 bytes */

void _TtC7PostHog10PostHogSDK::
     captureWithEvent_properties_userProperties_userPropertiesSetOnce_groups_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,ID param_7)

{
  undefined *puVar1;
  Dictionary<undefined,undefined> DVar2;
  Dictionary<undefined,undefined> DVar3;
  Dictionary<undefined,undefined> DVar4;
  Dictionary<undefined,undefined> DVar5;
  Date DVar6;
  long extraout_x8;
  undefined1 *puVar7;
  String SVar8;
  undefined8 auStack_70 [2];
  
  puVar1 = &DAT_100faf508;
  FUN_1000f7830(&DAT_100faf508,&DAT_100c2e2e0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = &stack0xffffffffffffffa0 + -extraout_x8;
  SVar8 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  DVar2.unknown = (undefined *)0x0;
  if (param_4 != 0) {
    DVar2 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  }
  DVar3.unknown = (undefined *)0x0;
  if (param_5 != 0) {
    DVar3 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  }
  DVar4.unknown = (undefined *)0x0;
  if (param_6 != 0) {
    DVar4 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  }
  if (param_7 == 0) {
    DVar5.unknown = (undefined *)0x0;
  }
  else {
    DVar5 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  }
  DVar6 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar6.unknown + -8) + 0x38))(puVar7,1,1,DVar6.unknown);
  *(undefined1 **)((long)auStack_70 + -extraout_x8) = puVar7;
  FUN_100145cf8(SVar8.str,SVar8.bridgeObject,0,0,DVar2.unknown,DVar3.unknown,DVar4.unknown,
                DVar5.unknown);
  _swift_bridgeObjectRelease(SVar8.bridgeObject);
  _swift_bridgeObjectRelease(DVar5.unknown);
  _swift_bridgeObjectRelease(DVar4.unknown);
  _swift_bridgeObjectRelease(DVar3.unknown);
  _swift_bridgeObjectRelease(DVar2.unknown);
  FUN_1000fb4c4(puVar7,&DAT_100faf508,&DAT_100c2e2e0);
  return;
}



/* Address: 0x1001459b0 | FUN_1001459b0 */

void FUN_1001459b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  Date DVar2;
  long extraout_x8;
  undefined1 *puVar3;
  undefined8 auStack_70 [2];
  
  puVar1 = &DAT_100faf508;
  FUN_1000f7830(&DAT_100faf508,&DAT_100c2e2e0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffa0 + -extraout_x8;
  DVar2 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar2.unknown + -8) + 0x38))(puVar3,1,1,DVar2.unknown);
  *(undefined1 **)((long)auStack_70 + -extraout_x8) = puVar3;
  FUN_100145cf8(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_1000fb4c4(puVar3,&DAT_100faf508,&DAT_100c2e2e0);
  return;
}



/* Address: 0x100145ab0 | _TtC7PostHog10PostHogSDK::captureWithEvent:distinctId:properties:userProperties:userPropertiesSetOnce:groups: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x40 bytes */

void _TtC7PostHog10PostHogSDK::
     captureWithEvent_distinctId_properties_userProperties_userPropertiesSetOnce_groups_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,ID param_7,
               ID param_8)

{
  void *pvVar1;
  undefined *puVar2;
  Dictionary<undefined,undefined> DVar3;
  Dictionary<undefined,undefined> DVar4;
  Dictionary<undefined,undefined> DVar5;
  Dictionary<undefined,undefined> DVar6;
  Date DVar7;
  long extraout_x8;
  undefined1 *puVar8;
  String SVar9;
  String SVar10;
  undefined8 auStack_90 [2];
  undefined1 auStack_80 [8];
  char *local_78;
  char *local_70;
  void *local_68;
  
  puVar2 = &DAT_100faf508;
  FUN_1000f7830(&DAT_100faf508,&DAT_100c2e2e0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_80 + -extraout_x8;
  SVar9 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  local_70 = SVar9.str;
  if (param_4 == 0) {
    SVar10 = (String)ZEXT816(0);
  }
  else {
    SVar10 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  local_68 = SVar10.bridgeObject;
  local_78 = SVar10.str;
  DVar3.unknown = (undefined *)0x0;
  if (param_5 != 0) {
    DVar3 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
    SVar10.bridgeObject = local_68;
    SVar10.str = local_78;
  }
  local_68 = SVar10.bridgeObject;
  local_78 = SVar10.str;
  DVar4.unknown = (undefined *)0x0;
  if (param_6 != 0) {
    DVar4 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
    SVar10.bridgeObject = local_68;
    SVar10.str = local_78;
  }
  local_68 = SVar10.bridgeObject;
  local_78 = SVar10.str;
  if (param_7 == 0) {
    DVar5.unknown = (undefined *)0x0;
  }
  else {
    DVar5 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
    SVar10.bridgeObject = local_68;
    SVar10.str = local_78;
  }
  if (param_8 == 0) {
    DVar6.unknown = (undefined *)0x0;
  }
  else {
    local_68 = SVar10.bridgeObject;
    local_78 = SVar10.str;
    DVar6 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
    SVar10.bridgeObject = local_68;
    SVar10.str = local_78;
  }
  local_68 = SVar10.bridgeObject;
  local_78 = SVar10.str;
  DVar7 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar7.unknown + -8) + 0x38))(puVar8,1,1,DVar7.unknown);
  *(undefined1 **)((long)auStack_90 + -extraout_x8) = puVar8;
  pvVar1 = local_68;
  FUN_100145cf8(local_70,SVar9.bridgeObject,local_78,local_68,DVar3.unknown,DVar4.unknown,
                DVar5.unknown,DVar6.unknown);
  _swift_bridgeObjectRelease(SVar9.bridgeObject);
  _swift_bridgeObjectRelease(DVar6.unknown);
  _swift_bridgeObjectRelease(DVar5.unknown);
  _swift_bridgeObjectRelease(DVar4.unknown);
  _swift_bridgeObjectRelease(DVar3.unknown);
  _swift_bridgeObjectRelease(pvVar1);
  FUN_1000fb4c4(puVar8,&DAT_100faf508,&DAT_100c2e2e0);
  return;
}



/* Address: 0x100145cf8 | FUN_100145cf8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100145cf8(undefined *param_1,undefined *param_2,undefined8 *param_3,undefined1 *param_4,
                  undefined *param_5,long param_6,long param_7,long param_8,undefined8 param_9)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  Date DVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined7 extraout_var;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  _StringGuts _Var10;
  undefined1 *puVar11;
  ulong uVar12;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  ID self;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  code *pcVar17;
  long lVar18;
  long lVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String separator;
  String separator_00;
  String separator_01;
  String separator_02;
  uint local_170;
  uint local_16c;
  undefined *local_168;
  char *local_160;
  long local_158;
  long local_150;
  long local_148;
  undefined8 *local_140;
  undefined *local_138;
  undefined8 local_130;
  long local_128;
  _StringGuts local_120;
  _StringGuts local_118;
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined8 *local_e0 [3];
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long local_a8;
  undefined1 auStack_a0 [24];
  undefined8 *local_88;
  undefined1 auStack_80 [32];
  
  local_130 = param_9;
  puVar3 = &DAT_100faf508;
  local_148 = param_6;
  local_140 = param_3;
  local_138 = param_5;
  local_120.unknown = param_2;
  local_118.unknown = param_1;
  FUN_1000f7830(&DAT_100faf508,&DAT_100c2e2e0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar18 = (long)&local_170 - extraout_x8;
  DVar4 = Foundation::Date::typeMetadataAccessor();
  lVar15 = *(long *)(DVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar15 + 0x40));
  local_128 = lVar18 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  self = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::setupLock);
  objc_stub::lock(self);
  lVar14 = _TtC7PostHog10PostHogSDK::enabled;
  bVar1 = *(byte *)(unaff_x20 + _TtC7PostHog10PostHogSDK::enabled);
  objc_stub::unlock(self);
  lVar19 = PostHogConfig::optOut;
  lVar8 = _TtC7PostHog10PostHogSDK::config;
  if ((bVar1 & 1) == 0) {
    if (DAT_101057340 != '\x01') {
      return;
    }
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
    SVar21.bridgeObject = (void *)0x20;
    SVar21.str = pcVar5;
    separator_00.bridgeObject = (void *)0xa;
    separator_00.str = (char *)0xe100000000000000;
    Swift::_print(SVar21,separator_00);
    _swift_release(pcVar5);
    return;
  }
  lVar16 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::config);
  local_158 = lVar15;
  local_150 = param_7;
  _swift_beginAccess(lVar16 + PostHogConfig::optOut,auStack_80,0,0);
  if (*(char *)(lVar16 + lVar19) == '\x01') {
    if (DAT_101057340 != '\x01') {
      return;
    }
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
    pcVar5[0x20] = '%';
    pcVar5[0x21] = '\0';
    pcVar5[0x22] = '\0';
    pcVar5[0x23] = '\0';
    pcVar5[0x24] = '\0';
    pcVar5[0x25] = '\0';
    pcVar5[0x26] = '\0';
    pcVar5[0x27] = -0x30;
    pcVar5[0x28] = '\0';
    pcVar5[0x29] = '\x16';
    pcVar5[0x2a] = -0x27;
    pcVar5[0x2b] = '\0';
    pcVar5[0x2c] = '\x01';
    pcVar5[0x2d] = '\0';
    pcVar5[0x2e] = '\0';
    pcVar5[0x2f] = -0x80;
    SVar20.bridgeObject = (void *)0x20;
    SVar20.str = pcVar5;
    separator.bridgeObject = (void *)0xa;
    separator.str = (char *)0xe100000000000000;
    Swift::_print(SVar20,separator);
    goto LAB_10014675c;
  }
  local_160 = *(char **)(unaff_x20 + _TtC7PostHog10PostHogSDK::queue);
  if (local_160 == (char *)0x0) {
    return;
  }
  bVar2 = local_118.unknown == (undefined *)0x6974706563786524 &&
          local_120.unknown == (undefined *)0xea00000000006e6f;
  local_16c = (uint)bVar2;
  local_168 = DVar4.unknown;
  if ((bVar2) ||
     (bVar2 = Swift::_stringCompareWithSmolCheck(local_118,local_120,(_StringComparisonResult)0x24),
     bVar2)) {
    lVar19 = _TtC7PostHog26PostHogErrorTrackingConfig::ignoredExceptionTypes;
    lVar15 = *(long *)(lVar16 + PostHogConfig::errorTrackingConfig);
    _swift_beginAccess(lVar15 + _TtC7PostHog26PostHogErrorTrackingConfig::ignoredExceptionTypes,
                       auStack_110,0,0);
    puVar3 = local_138;
    lVar19 = *(long *)(lVar15 + lVar19);
    if (*(long *)(lVar19 + 0x10) == 0) goto LAB_100146074;
    if (local_138 == (undefined *)0x0) {
      _swift_retain(local_160);
      _swift_bridgeObjectRetain(lVar19);
      puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_1000f8154();
    }
    else {
      _swift_retain(local_160);
      _swift_bridgeObjectRetain(lVar19);
      puVar6 = puVar3;
    }
    _swift_bridgeObjectRetain(puVar3);
    puVar3 = puVar6;
    FUN_100103b68(puVar6,lVar19);
    _swift_bridgeObjectRelease(lVar19);
    _swift_bridgeObjectRelease(puVar6);
    if (((ulong)puVar3 & 1) != 0) {
      pcVar5 = local_160;
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
        pcVar5[0x20] = '\\';
        pcVar5[0x21] = '\0';
        pcVar5[0x22] = '\0';
        pcVar5[0x23] = '\0';
        pcVar5[0x24] = '\0';
        pcVar5[0x25] = '\0';
        pcVar5[0x26] = '\0';
        pcVar5[0x27] = -0x30;
        pcVar5[0x28] = -0x60;
        pcVar5[0x29] = '\x15';
        pcVar5[0x2a] = -0x27;
        pcVar5[0x2b] = '\0';
        pcVar5[0x2c] = '\x01';
        pcVar5[0x2d] = '\0';
        pcVar5[0x2e] = '\0';
        pcVar5[0x2f] = -0x80;
        SVar22.bridgeObject = (void *)0x20;
        SVar22.str = pcVar5;
        separator_01.bridgeObject = (void *)0xa;
        separator_01.str = (char *)0xe100000000000000;
        Swift::_print(SVar22,separator_01);
        _swift_release(pcVar5);
        pcVar5 = local_160;
      }
      goto LAB_10014675c;
    }
  }
  else {
LAB_100146074:
    _swift_retain(local_160);
  }
  if ((local_118.unknown == (undefined *)0x6f687370616e7324) &&
     (local_120.unknown == (undefined *)0xe900000000000074)) {
    local_170 = 0;
  }
  else {
    bVar2 = Swift::_stringCompareWithSmolCheck(local_118,local_120,(_StringComparisonResult)0x24);
    local_170 = (uint)CONCAT71(extraout_var,bVar2) ^ 1;
  }
  puVar3 = local_168;
  FUN_1000f8cac(local_130,lVar18,&DAT_100faf508,&DAT_100c2e2e0);
  lVar19 = local_158;
  pcVar17 = *(code **)(local_158 + 0x30);
  lVar15 = lVar18;
  (*pcVar17)(lVar18,1,puVar3);
  if ((int)lVar15 == 1) {
    Foundation::Date::init();
    lVar15 = lVar18;
    (*pcVar17)(lVar18,1,puVar3);
    lVar19 = local_148;
    if ((int)lVar15 != 1) {
      FUN_1000fb4c4(lVar18,&DAT_100faf508,&DAT_100c2e2e0);
    }
  }
  else {
    (**(code **)(lVar19 + 0x20))(local_128,lVar18,puVar3);
    lVar19 = local_148;
  }
  puVar11 = param_4;
  if (param_4 == (undefined1 *)0x0) {
    objc_stub::lock(self);
    bVar1 = *(byte *)(unaff_x20 + lVar14);
    objc_stub::unlock(self);
    lVar14 = PostHogConfig::storageManager;
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
        SVar23.bridgeObject = (void *)0x20;
        SVar23.str = pcVar5;
        separator_02.bridgeObject = (void *)0xa;
        separator_02.str = (char *)0xe100000000000000;
        Swift::_print(SVar23,separator_02);
        _swift_release(pcVar5);
      }
    }
    else {
      lVar8 = *(long *)(unaff_x20 + lVar8);
      puVar11 = auStack_f8;
      _swift_beginAccess(lVar8 + PostHogConfig::storageManager,puVar11,0,0);
      puVar13 = *(undefined8 **)(lVar8 + lVar14);
      if (puVar13 != (undefined8 *)0x0) {
        puVar7 = puVar13;
        _swift_retain();
        FUN_10015cd34();
        local_140 = puVar7;
        _swift_release(puVar13);
        goto LAB_100146390;
      }
    }
    local_140 = (undefined8 *)0x0;
    puVar11 = (undefined1 *)0xe000000000000000;
  }
LAB_100146390:
  if ((((lVar19 == 0) || (*(long *)(lVar19 + 0x10) == 0)) &&
      ((local_150 == 0 || (*(long *)(local_150 + 0x10) == 0)))) &&
     ((param_8 == 0 || (*(long *)(param_8 + 0x10) == 0)))) {
    _swift_bridgeObjectRetain(param_4);
  }
  else {
    _swift_bridgeObjectRetain(param_4);
    FUN_10013ea50(0xd000000000000085,0x8000000100d92dd0);
  }
  puVar3 = local_138;
  FUN_10016ead0(local_138);
  FUN_10016ead0(lVar19);
  lVar8 = local_150;
  FUN_10016ead0(local_150);
  puVar13 = local_140;
  puVar7 = local_140;
  FUN_10013ec54(local_140,puVar11,puVar3,lVar19,lVar8,param_8,local_170 & 1,local_130);
  _swift_bridgeObjectRelease(lVar8);
  _swift_bridgeObjectRelease(lVar19);
  _swift_bridgeObjectRelease(puVar3);
  local_88 = puVar7;
  if (((local_16c & 1) != 0) ||
     (bVar2 = Swift::_stringCompareWithSmolCheck(local_118,local_120,(_StringComparisonResult)0x24),
     puVar3 = local_168, bVar2)) {
    puVar3 = local_168;
    if (puVar7[2] != 0) {
      _swift_bridgeObjectRetain(puVar7);
      uVar12 = 0;
      lVar8 = -0x2ffffffffffffff0;
      FUN_100071370(0xd000000000000010);
      if ((uVar12 & 1) != 0) {
        FUN_10000cbfc(puVar7[7] + lVar8 * 0x20,&local_c0);
        _swift_bridgeObjectRelease(puVar7);
        FUN_1000fb4c4(&local_c0,&DAT_100fae668,&DAT_100c2e4a0);
        goto LAB_100146620;
      }
      _swift_bridgeObjectRelease(puVar7);
    }
    uStack_b8 = 0;
    local_c0 = 0;
    local_a8 = 0;
    uStack_b0 = 0;
    puVar9 = &local_c0;
    FUN_1000fb4c4(puVar9,&DAT_100fae668,&DAT_100c2e4a0);
    FUN_100150cd8();
    if (puVar9 != (undefined8 *)0x0) {
      puVar6 = &DAT_100fae868;
      FUN_1000f7830(&DAT_100fae868,&DAT_100c2e2f0);
      local_e0[0] = puVar9;
      local_c8 = puVar6;
      if (puVar6 == (undefined *)0x0) {
        FUN_1000fb4c4(local_e0,&DAT_100fae668,&DAT_100c2e4a0);
        FUN_10016fcc4(&local_c0,0xd000000000000010,0x8000000100d914f0);
        FUN_1000fb4c4(&local_c0,&DAT_100fae668,&DAT_100c2e4a0);
        puVar7 = local_88;
      }
      else {
        FUN_100011080(local_e0,&local_c0);
        puVar9 = puVar7;
        _swift_isUniquelyReferenced_nonNull_native(puVar7);
        local_e0[0] = puVar7;
        FUN_10016fe74(&local_c0,0xd000000000000010,0x8000000100d914f0,puVar9);
        puVar7 = local_e0[0];
      }
    }
  }
LAB_100146620:
  lVar8 = local_128;
  _Var10.unknown = local_118.unknown;
  FUN_100149464(local_118.unknown,local_120.unknown,puVar13,puVar11,puVar7,local_128);
  _swift_bridgeObjectRelease(puVar11);
  if (_Var10.unknown == (undefined *)0x0) {
    (**(code **)(local_158 + 8))(lVar8,puVar3);
    _swift_bridgeObjectRelease(puVar7);
    pcVar5 = local_160;
LAB_10014675c:
    _swift_release(pcVar5);
    return;
  }
  puVar13 = (undefined8 *)(_Var10.unknown + PostHogEvent::event);
  _swift_beginAccess(puVar13,local_e0,0,0);
  if ((((undefined *)*puVar13 == (undefined *)0x6f687370616e7324) &&
      ((undefined *)puVar13[1] == (undefined *)0xe900000000000074)) ||
     (bVar2 = Swift::_stringCompareWithSmolCheck
                        ((undefined *)*puVar13,(undefined *)puVar13[1],(_StringComparisonResult)0x24
                        ), bVar2)) {
    lVar14 = PostHogEvent::properties;
    _swift_beginAccess(_Var10.unknown + PostHogEvent::properties,auStack_a0,0,0);
    lVar14 = *(long *)(_Var10.unknown + lVar14);
    if (*(long *)(lVar14 + 0x10) == 0) {
      uStack_b8 = 0;
      local_c0 = 0;
      local_a8 = 0;
      uStack_b0 = 0;
    }
    else {
      _swift_bridgeObjectRetain(lVar14);
      lVar19 = 0x6e6f697373657324;
      uVar12 = 0xeb0000000064695f;
      FUN_100071370(0x6e6f697373657324);
      if ((uVar12 & 1) == 0) {
        uStack_b8 = 0;
        local_c0 = 0;
        local_a8 = 0;
        uStack_b0 = 0;
      }
      else {
        FUN_10000cbfc(*(long *)(lVar14 + 0x38) + lVar19 * 0x20,&local_c0);
      }
      _swift_bridgeObjectRelease(lVar14);
      if (local_a8 != 0) {
        FUN_1000fb4c4(&local_c0,&DAT_100fae668,&DAT_100c2e4a0);
        FUN_100142640(local_148,local_150);
        lVar14 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::replayQueue);
        if (lVar14 != 0) {
          _swift_retain(lVar14);
          FUN_100167d84(_Var10.unknown);
          _swift_release(lVar14);
        }
        goto LAB_100146814;
      }
    }
    (**(code **)(local_158 + 8))(lVar8,puVar3);
    _swift_release(local_160);
    FUN_1000fb4c4(&local_c0,&DAT_100fae668,&DAT_100c2e4a0);
  }
  else {
    FUN_100142640(local_148,local_150);
    FUN_100136870(_Var10.unknown,FUN_10013662c);
LAB_100146814:
    FUN_1001349c8(_Var10.unknown,FUN_10010f72c);
    _swift_release(local_160);
    (**(code **)(local_158 + 8))(lVar8,puVar3);
  }
  _swift_bridgeObjectRelease(puVar7);
  return;
}



/* Address: 0x1001468cc | _TtC7PostHog10PostHogSDK::captureWithEvent:distinctId:properties:userProperties:userPropertiesSetOnce:groups:timestamp: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x48 bytes */

void _TtC7PostHog10PostHogSDK::
     captureWithEvent_distinctId_properties_userProperties_userPropertiesSetOnce_groups_timestamp_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,ID param_7,
               ID param_8,ID param_9)

{
  void *pvVar1;
  void *pvVar2;
  undefined *puVar3;
  Dictionary<undefined,undefined> DVar4;
  Dictionary<undefined,undefined> DVar5;
  Dictionary<undefined,undefined> DVar6;
  Date DVar7;
  long extraout_x8;
  undefined1 *puVar8;
  String SVar9;
  undefined8 auStack_a0 [2];
  undefined1 auStack_90 [8];
  undefined *local_88;
  char *local_80;
  String local_78;
  void *local_68;
  
  puVar3 = &DAT_100faf508;
  FUN_1000f7830(&DAT_100faf508,&DAT_100c2e2e0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_90 + -extraout_x8;
  local_78 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  if (param_4 == 0) {
    SVar9 = (String)ZEXT816(0);
  }
  else {
    SVar9 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  local_68 = SVar9.bridgeObject;
  local_80 = SVar9.str;
  if (param_5 == 0) {
    local_88 = (undefined *)0x0;
  }
  else {
    local_88 = (undefined *)
               (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
    SVar9.bridgeObject = local_68;
    SVar9.str = local_80;
  }
  DVar4.unknown = (undefined *)0x0;
  if (param_6 != 0) {
    local_68 = SVar9.bridgeObject;
    local_80 = SVar9.str;
    DVar4 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
    SVar9.bridgeObject = local_68;
    SVar9.str = local_80;
  }
  local_68 = SVar9.bridgeObject;
  local_80 = SVar9.str;
  if (param_7 == 0) {
    DVar5.unknown = (undefined *)0x0;
  }
  else {
    DVar5 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
    SVar9.bridgeObject = local_68;
    SVar9.str = local_80;
  }
  if (param_8 == 0) {
    DVar6.unknown = (undefined *)0x0;
  }
  else {
    local_68 = SVar9.bridgeObject;
    local_80 = SVar9.str;
    DVar6 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
    SVar9.bridgeObject = local_68;
    SVar9.str = local_80;
  }
  local_80 = SVar9.str;
  local_68 = SVar9.bridgeObject;
  if (param_9 == 0) {
    DVar7 = Foundation::Date::typeMetadataAccessor();
  }
  else {
    Foundation::Date::__unconditionallyBridgeFromObjectiveC((Date)param_9);
    DVar7 = Foundation::Date::typeMetadataAccessor();
  }
  (**(code **)(*(long *)(DVar7.unknown + -8) + 0x38))(puVar8,param_9 == 0,1);
  *(undefined1 **)((long)auStack_a0 + -extraout_x8) = puVar8;
  pvVar2 = local_68;
  puVar3 = local_88;
  pvVar1 = local_78.bridgeObject;
  FUN_100145cf8(local_78.str,local_78.bridgeObject,local_80,local_68,local_88,DVar4.unknown,
                DVar5.unknown,DVar6.unknown);
  _swift_bridgeObjectRelease(pvVar1);
  _swift_bridgeObjectRelease(DVar6.unknown);
  _swift_bridgeObjectRelease(DVar5.unknown);
  _swift_bridgeObjectRelease(DVar4.unknown);
  _swift_bridgeObjectRelease(puVar3);
  _swift_bridgeObjectRelease(pvVar2);
  FUN_1000fb4c4(puVar8,&DAT_100faf508,&DAT_100c2e2e0);
  return;
}



/* Address: 0x100146b58 | FUN_100146b58 */

void FUN_100146b58(undefined8 param_1,undefined8 param_2)

{
  FUN_100146ff4(param_1,param_2,2,0,0,0,0,0,0,1);
  return;
}



/* Address: 0x100146b98 | _TtC7PostHog10PostHogSDK::captureLogWithBody: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC7PostHog10PostHogSDK::captureLogWithBody_(ID param_1,SEL param_2,ID param_3)

{
  String SVar1;
  
  SVar1 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  FUN_100146ff4(SVar1.str,SVar1.bridgeObject,2,0,0,0,0,0,0,1);
  _swift_bridgeObjectRelease(SVar1.bridgeObject);
  return;
}



/* Address: 0x100146c20 | FUN_100146c20 */

void FUN_100146c20(void)

{
  FUN_100146ff4();
  return;
}



/* Address: 0x100146c5c | _TtC7PostHog10PostHogSDK::captureLogWithBody:level: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void _TtC7PostHog10PostHogSDK::captureLogWithBody_level_
               (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  String SVar1;
  
  SVar1 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  FUN_100146ff4(SVar1.str,SVar1.bridgeObject,param_4,0,0,0,0,0,0,1);
  _swift_bridgeObjectRelease(SVar1.bridgeObject);
  return;
}



/* Address: 0x100146ce4 | FUN_100146ce4 */

void FUN_100146ce4(void)

{
  FUN_100146ff4();
  return;
}



/* Address: 0x100146d1c | _TtC7PostHog10PostHogSDK::captureLogWithBody:level:attributes: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

void _TtC7PostHog10PostHogSDK::captureLogWithBody_level_attributes_
               (ID param_1,SEL param_2,ID param_3,long_long param_4,ID param_5)

{
  Dictionary<undefined,undefined> DVar1;
  String SVar2;
  
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  DVar1.unknown = (undefined *)0x0;
  if (param_5 != 0) {
    DVar1 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  }
  FUN_100146ff4(SVar2.str,SVar2.bridgeObject,param_4,DVar1.unknown,0,0,0,0,0,1);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  _swift_bridgeObjectRelease(DVar1.unknown);
  return;
}



/* Address: 0x100146de8 | FUN_100146de8 */

void FUN_100146de8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  ID param_9)

{
  ID IVar1;
  
  if (param_9 == 0) {
    IVar1 = 0;
  }
  else {
    IVar1 = objc_stub::integerValue(param_9);
  }
  FUN_100146ff4(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,IVar1,param_9 == 0);
  return;
}



/* Address: 0x100146e94 | _TtC7PostHog10PostHogSDK::captureLogWithBody:level:attributes:traceId:spanId:traceFlags: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x40 bytes */

void _TtC7PostHog10PostHogSDK::captureLogWithBody_level_attributes_traceId_spanId_traceFlags_
               (ID param_1,SEL param_2,ID param_3,long_long param_4,ID param_5,ID param_6,ID param_7
               ,ID param_8)

{
  Dictionary<undefined,undefined> DVar1;
  ID IVar2;
  String SVar3;
  String SVar4;
  String SVar5;
  
  SVar3 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  DVar1.unknown = (undefined *)0x0;
  if (param_5 != 0) {
    DVar1 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  }
  if (param_6 == 0) {
    SVar4 = (String)(ZEXT816(0) << 0x40);
  }
  else {
    SVar4 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  if (param_7 == 0) {
    SVar5 = (String)(ZEXT816(0) << 0x40);
  }
  else {
    SVar5 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  if (param_8 == 0) {
    IVar2 = 0;
  }
  else {
    IVar2 = objc_stub::integerValue(param_8);
  }
  FUN_100146ff4(SVar3.str,SVar3.bridgeObject,param_4,DVar1.unknown,SVar4.str,SVar4.bridgeObject,
                SVar5.str,SVar5.bridgeObject,IVar2,param_8 == 0);
  _swift_bridgeObjectRelease(SVar3.bridgeObject);
  _swift_bridgeObjectRelease(SVar5.bridgeObject);
  _swift_bridgeObjectRelease(SVar4.bridgeObject);
  _swift_bridgeObjectRelease(DVar1.unknown);
  return;
}



/* Address: 0x100146ff0 | thunk_FUN_100146ff4 */

void thunk_FUN_100146ff4(void)

{
  FUN_100146ff4();
  return;
}


