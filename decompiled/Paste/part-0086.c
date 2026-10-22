/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1000f8f4c | _TtC7PostHog29ApplicationLifecyclePublisher::appDidEnterBackground */

/* Function Stack Size: 0x10 bytes */

void _TtC7PostHog29ApplicationLifecyclePublisher::appDidEnterBackground(ID param_1,SEL param_2)

{
  _swift_retain();
  FUN_1001347d0();
  _swift_release(param_1);
  return;
}



/* Address: 0x1000f8f78 | _TtC7PostHog29ApplicationLifecyclePublisher::appDidBecomeActive */

/* Function Stack Size: 0x10 bytes */

void _TtC7PostHog29ApplicationLifecyclePublisher::appDidBecomeActive(ID param_1,SEL param_2)

{
  _swift_retain();
  FUN_1001347d0();
  _swift_release(param_1);
  return;
}



/* Address: 0x1000f8fa4 | _TtC7PostHog29ApplicationLifecyclePublisher::appDidFinishLaunching */

/* Function Stack Size: 0x10 bytes */

void _TtC7PostHog29ApplicationLifecyclePublisher::appDidFinishLaunching(ID param_1,SEL param_2)

{
  _swift_retain();
  FUN_1001347d0();
  _swift_release(param_1);
  return;
}



/* Address: 0x1000f8fd0 | FUN_1000f8fd0 */

void FUN_1000f8fd0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1000f9004 | FUN_1000f9004 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1000f9004(void)

{
  return ZEXT816(0x100fae508);
}



/* Address: 0x1000f9024 | FUN_1000f9024 */

void FUN_1000f9024(void)

{
  long lVar1;
  undefined *self;
  ID IVar2;
  
  lVar1 = 0;
  FUN_10012b2e0();
  _swift_allocObject();
  self = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar2 = objc_stub::init((ID)self);
  *(ID *)(lVar1 + 0x10) = IVar2;
  *(undefined1 *)(lVar1 + 0x18) = 0;
  DAT_100fae650 = lVar1;
  return;
}



/* Address: 0x1000f9074 | FUN_1000f9074 */

undefined8 FUN_1000f9074(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  ID self;
  
  if (DAT_100fae648 != -1) {
    _swift_once(&DAT_100fae648,FUN_1000f9024);
  }
  lVar1 = DAT_100fae650;
  self = *(ID *)(DAT_100fae650 + 0x10);
  objc_stub::lock(self);
  if ((*(byte *)(lVar1 + 0x18) & 1) == 0) {
    *(undefined1 *)(lVar1 + 0x18) = 1;
    objc_stub::unlock(self);
    _swift_unknownObjectWeakAssign(unaff_x20 + 0x10,param_1);
    FUN_1000f9114();
    FUN_1000f9314();
    uVar2 = 3;
  }
  else {
    objc_stub::unlock(self);
    uVar2 = 0;
  }
  return uVar2;
}



/* Address: 0x1000f9114 | FUN_1000f9114 */

void FUN_1000f9114(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  
  if (DAT_100fae858 != -1) {
    _swift_once(&DAT_100fae858,FUN_1000fbcdc);
  }
  lVar1 = DAT_101057190;
  lVar2 = DAT_101057190;
  _swift_retain();
  FUN_1000fbc40();
  _swift_release(lVar1);
  uVar7 = *(undefined8 *)(lVar2 + 0x20);
  puVar6 = &DAT_100eb7580;
  puVar3 = puVar6;
  _swift_allocObject(&DAT_100eb7580,0x18,7);
  _swift_weakInit(puVar3 + 0x10);
  puVar4 = &DAT_100eb75a8;
  _swift_allocObject(&DAT_100eb75a8,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_1000fb054;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  _swift_retain(uVar7);
  pcVar5 = FUN_1000386a0;
  FUN_1000f9b3c(FUN_1000386a0,puVar4);
  _swift_release(uVar7);
  _swift_release(puVar4);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  *(code **)(unaff_x20 + 0x30) = pcVar5;
  _swift_release(uVar7);
  uVar7 = *(undefined8 *)(lVar2 + 0x10);
  puVar3 = puVar6;
  _swift_allocObject(&DAT_100eb7580,0x18,7);
  _swift_weakInit(puVar3 + 0x10);
  puVar4 = &DAT_100eb75d0;
  _swift_allocObject(&DAT_100eb75d0,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_1000fb074;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  _swift_retain(uVar7);
  pcVar5 = thunk_FUN_1000386a0;
  FUN_1000f9b3c(thunk_FUN_1000386a0,puVar4);
  _swift_release(uVar7);
  _swift_release(puVar4);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  *(code **)(unaff_x20 + 0x20) = pcVar5;
  _swift_release(uVar7);
  uVar7 = *(undefined8 *)(lVar2 + 0x18);
  _swift_allocObject(&DAT_100eb7580,0x18,7);
  _swift_weakInit(puVar6 + 0x10);
  puVar4 = &DAT_100eb75f8;
  _swift_allocObject(&DAT_100eb75f8,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_1000fb094;
  *(undefined **)(puVar4 + 0x18) = puVar6;
  _swift_retain(uVar7);
  pcVar5 = thunk_FUN_1000386a0;
  FUN_1000f9b3c(thunk_FUN_1000386a0,puVar4);
  _swift_unknownObjectRelease(lVar2);
  _swift_release(uVar7);
  _swift_release(puVar4);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x28);
  *(code **)(unaff_x20 + 0x28) = pcVar5;
  _swift_release(uVar7);
  return;
}



/* Address: 0x1000f9314 | FUN_1000f9314 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void * FUN_1000f9314(void)

{
  String SVar1;
  undefined *puVar2;
  long lVar3;
  bool bVar4;
  char *pcVar5;
  ID IVar6;
  Dictionary<undefined,undefined> DVar7;
  char *pcVar8;
  String *pSVar9;
  NSString *pNVar10;
  ID IVar11;
  void *pvVar12;
  char *pcVar13;
  NSString *pNVar14;
  void *extraout_x1;
  void *pvVar15;
  ulong uVar16;
  _StringGuts _Var17;
  long unaff_x20;
  long lVar18;
  void *pvVar19;
  undefined8 uVar20;
  String SVar21;
  String SVar22;
  char *local_d0;
  String local_c8;
  undefined *local_b0;
  char *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long local_88;
  undefined1 auStack_78 [24];
  
  lVar18 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  lVar3 = PostHogConfig::captureApplicationLifecycleEvents;
  if (lVar18 == 0) {
    return (void *)0x0;
  }
  if ((DAT_100fae658 & 1) != 0) {
    return (void *)0x0;
  }
  DAT_100fae658 = 1;
  lVar18 = *(long *)(lVar18 + _TtC7PostHog10PostHogSDK::config);
  _swift_beginAccess(lVar18 + PostHogConfig::captureApplicationLifecycleEvents,auStack_78,0,0);
  if ((*(byte *)(lVar18 + lVar3) & 1) == 0) {
    if (DAT_101057340 != '\x01') {
      return (void *)0x0;
    }
    pcVar8 = &DAT_100fae660;
    FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
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
    *(undefined **)(pcVar8 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
    pcVar8[0x20] = -0x7d;
    pcVar8[0x21] = '\0';
    pcVar8[0x22] = '\0';
    pcVar8[0x23] = '\0';
    pcVar8[0x24] = '\0';
    pcVar8[0x25] = '\0';
    pcVar8[0x26] = '\0';
    pcVar8[0x27] = -0x30;
    pcVar8[0x28] = 'p';
    pcVar8[0x29] = '\b';
    pcVar8[0x2a] = -0x27;
    pcVar8[0x2b] = '\0';
    pcVar8[0x2c] = '\x01';
    pcVar8[0x2d] = '\0';
    pcVar8[0x2e] = '\0';
    pcVar8[0x2f] = -0x80;
    SVar21.bridgeObject = (void *)0x20;
    SVar21.str = pcVar8;
    SVar22.bridgeObject = (void *)0xa;
    SVar22.str = (char *)0xe100000000000000;
    Swift::_print(SVar21,SVar22);
    _swift_release(pcVar8);
    return (void *)0x0;
  }
  pcVar5 = (char *)NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
  pcVar8 = pcVar5;
  pvVar15 = extraout_x1;
  FUN_10016c244();
  IVar6 = objc_stub::infoDictionary((ID)pcVar5);
  puVar2 = PTR___type_metadata_for_Any_100eae0c0;
  if (IVar6 == 0) {
    uStack_98 = 0;
    local_a0 = 0;
    local_88 = 0;
    uStack_90 = 0;
LAB_1000f9560:
    FUN_1000faea8(&local_a0);
    local_d0 = (char *)0x0;
    pvVar19 = (void *)0x0;
  }
  else {
    DVar7 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
    if (*(long *)(DVar7.unknown + 0x10) == 0) {
LAB_1000f9514:
      uStack_98 = 0;
      local_a0 = 0;
      local_88 = 0;
      uStack_90 = 0;
    }
    else {
      _swift_bridgeObjectRetain(DVar7.unknown);
      lVar18 = 0x656c646e75424643;
      uVar16 = 0;
      FUN_100071370(0x656c646e75424643);
      if ((uVar16 & 1) == 0) {
        _swift_bridgeObjectRelease(DVar7.unknown);
        goto LAB_1000f9514;
      }
      FUN_10000cbfc(*(long *)(DVar7.unknown + 0x38) + lVar18 * 0x20,&local_a0);
      _swift_bridgeObjectRelease(DVar7.unknown);
    }
    _swift_bridgeObjectRelease(DVar7.unknown);
    if (local_88 == 0) goto LAB_1000f9560;
    pSVar9 = &local_c8;
    _swift_dynamicCast(pSVar9,&local_a0,puVar2 + 8,PTR___type_metadata_for_Swift_String_100eac208,6)
    ;
    pvVar19 = local_c8.bridgeObject;
    local_d0 = local_c8.str;
    if ((int)pSVar9 == 0) {
      local_d0 = (char *)0x0;
      pvVar19 = (void *)0x0;
    }
  }
  IVar6 = NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  pNVar10 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar11 = NSUserDefaults::stringForKey_(IVar6,pNVar10);
  if (IVar11 == 0) {
    SVar21 = (String)ZEXT816(0);
  }
  else {
    SVar21 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  pvVar12 = SVar21.bridgeObject;
  pNVar10 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar11 = NSUserDefaults::stringForKey_(IVar6,pNVar10);
  if (IVar11 == 0) {
    pcVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1000f8154();
    local_a8 = pcVar5;
LAB_1000f9708:
    _swift_bridgeObjectRelease(pvVar12);
    pcVar5 = "ed in configuration";
    uVar20 = 0xd000000000000015;
    if (pvVar15 == (void *)0x0) goto LAB_1000f9918;
LAB_1000f9730:
    local_b0 = PTR___type_metadata_for_Swift_String_100eac208;
    local_c8.str = pcVar8;
    local_c8.bridgeObject = pvVar15;
    FUN_100011080(&local_c8,&local_a0);
    _swift_bridgeObjectRetain(pvVar15);
    pcVar8 = local_a8;
    pcVar13 = local_a8;
    _swift_isUniquelyReferenced_nonNull_native(local_a8);
    local_c8.str = pcVar8;
    FUN_10016fe74(&local_a0,0x6e6f6973726576,&DAT_e700000000000000,pcVar13);
    local_a8 = local_c8.str;
    pNVar10 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(pvVar15);
    pNVar14 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    NSUserDefaults::setValue_forKey_(IVar6,pNVar10,pNVar14);
    if (pvVar19 != (void *)0x0) goto LAB_1000f991c;
  }
  else {
    SVar22 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    _Var17.unknown = SVar22.bridgeObject;
    pcVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1000f8154();
    local_a8 = pcVar5;
    if (_Var17.unknown == (undefined *)0x0) goto LAB_1000f9708;
    if ((pvVar19 != (void *)0x0) &&
       ((SVar1.bridgeObject = pvVar19, SVar1.str = local_d0, SVar22 == SVar1 ||
        (bVar4 = Swift::_stringCompareWithSmolCheck
                           ((_StringGuts)SVar22.str,_Var17,(_StringComparisonResult)(__int8)local_d0
                           ), bVar4)))) {
      _swift_bridgeObjectRelease(pcVar5);
      _swift_bridgeObjectRelease(_Var17.unknown);
      _swift_bridgeObjectRelease(pvVar19);
      _swift_bridgeObjectRelease(pvVar15);
      _swift_bridgeObjectRelease(pvVar12);
      return pvVar12;
    }
    uVar20 = 0xd000000000000013;
    if (pvVar12 != (void *)0x0) {
      local_b0 = PTR___type_metadata_for_Swift_String_100eac208;
      local_c8 = SVar21;
      FUN_100011080(&local_c8,&local_a0);
      pcVar13 = pcVar5;
      _swift_isUniquelyReferenced_nonNull_native(pcVar5);
      local_c8.str = pcVar5;
      FUN_10016fe74(&local_a0,0xd000000000000010,0x8000000100d90940,pcVar13);
      local_a8 = local_c8.str;
      pcVar5 = local_c8.str;
    }
    FUN_10016c38c(&local_c8,SVar22.str,_Var17.unknown);
    _swift_bridgeObjectRelease(_Var17.unknown);
    if (local_b0 == (undefined *)0x0) {
      FUN_1000faea8(&local_c8);
      FUN_10016fcc4(&local_a0,0x73756f6976657270,0xee00646c6975625f);
      FUN_1000faea8(&local_a0);
    }
    else {
      FUN_100011080(&local_c8,&local_a0);
      pcVar13 = pcVar5;
      _swift_isUniquelyReferenced_nonNull_native(pcVar5);
      local_c8.str = pcVar5;
      FUN_10016fe74(&local_a0,0x73756f6976657270,0xee00646c6975625f,pcVar13);
      local_a8 = local_c8.str;
    }
    pcVar5 = "Application Installed";
    if (pvVar15 != (void *)0x0) goto LAB_1000f9730;
LAB_1000f9918:
    if (pvVar19 == (void *)0x0) goto LAB_1000f9a10;
LAB_1000f991c:
    FUN_10016c38c(&local_c8,local_d0,pvVar19);
    if (local_b0 == (undefined *)0x0) {
      FUN_1000faea8(&local_c8);
      FUN_10016fcc4(&local_a0,0x646c697562,&DAT_e500000000000000);
      FUN_1000faea8(&local_a0);
    }
    else {
      FUN_100011080(&local_c8,&local_a0);
      pcVar8 = local_a8;
      pcVar13 = local_a8;
      _swift_isUniquelyReferenced_nonNull_native(local_a8);
      local_c8.str = pcVar8;
      FUN_10016fe74(&local_a0,0x646c697562,&DAT_e500000000000000,pcVar13);
      local_a8 = local_c8.str;
    }
    pNVar10 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(pvVar19);
    pNVar14 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    NSUserDefaults::setValue_forKey_(IVar6,pNVar10,pNVar14);
  }
  NSUserDefaults::synchronize(IVar6);
LAB_1000f9a10:
  pcVar8 = local_a8;
  FUN_1001432c4(uVar20,(ulong)pcVar5 | 0x8000000000000000,local_a8);
  _swift_bridgeObjectRelease(pcVar8);
  _swift_bridgeObjectRelease((ulong)pcVar5 | 0x8000000000000000);
  return (void *)0x0;
}



/* Address: 0x1000f9a70 | FUN_1000f9a70 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1000f9a70(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ID self;
  long unaff_x20;
  
  lVar2 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  lVar1 = DAT_100fae650;
  if (DAT_100fae648 != -1) {
    _swift_once(&DAT_100fae648,FUN_1000f9024);
    lVar1 = DAT_100fae650;
  }
  DAT_100fae650 = lVar1;
  if ((lVar2 == 0) || (lVar2 == param_1)) {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
    *(undefined8 *)(unaff_x20 + 0x30) = 0;
    _swift_release(uVar3);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
    *(undefined8 *)(unaff_x20 + 0x20) = 0;
    _swift_release(uVar3);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
    *(undefined8 *)(unaff_x20 + 0x28) = 0;
    _swift_release(uVar3);
    _swift_unknownObjectWeakAssign(unaff_x20 + 0x10,0);
    self = *(ID *)(lVar1 + 0x10);
    objc_stub::lock(self);
    *(undefined1 *)(lVar1 + 0x18) = 0;
    objc_stub::unlock(self);
  }
  return 0;
}



/* Address: 0x1000f9b3c | FUN_1000f9b3c */

long FUN_1000f9b3c(undefined8 param_1,undefined8 param_2)

{
  UUID UVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long extraout_x12;
  long unaff_x20;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  ulong uVar10;
  ID self;
  long lVar11;
  long local_80;
  undefined1 auStack_78 [24];
  
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  lVar11 = *(long *)(UVar1.unknown + -8);
  lVar9 = *(long *)(lVar11 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar8 = auStack_78 + (-8 - (lVar9 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar7 = (long)puVar8 - extraout_x12;
  Foundation::UUID::init();
  self = *(ID *)(unaff_x20 + 0x18);
  objc_stub::lock(self);
  puVar2 = &DAT_100eb7620;
  _swift_allocObject(&DAT_100eb7620,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  _swift_beginAccess(unaff_x20 + 0x10,auStack_78,0x21,0);
  _swift_retain(param_2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native(uVar3);
  local_80 = *(long *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = 0x8000000000000000;
  FUN_10016fe60(FUN_1000386a0,puVar2,lVar7,uVar3);
  lVar5 = local_80;
  *(long *)(unaff_x20 + 0x10) = local_80;
  _swift_endAccess(auStack_78);
  uVar3 = *(undefined8 *)(lVar5 + 0x10);
  objc_stub::unlock(self);
  if (*(code **)(unaff_x20 + 0x20) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x20))(uVar3);
  }
  puVar2 = &DAT_100eb7648;
  _swift_allocObject(&DAT_100eb7648,0x18,7);
  _swift_weakInit(puVar2 + 0x10);
  (**(code **)(lVar11 + 0x10))(puVar8,lVar7,UVar1.unknown);
  uVar6 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar10 = uVar6 + 0x18 & (uVar6 ^ 0xffffffffffffffff);
  puVar4 = &DAT_100eb7670;
  _swift_allocObject(&DAT_100eb7670,uVar10 + lVar9,uVar6 | 7);
  *(undefined **)(puVar4 + 0x10) = puVar2;
  (**(code **)(lVar11 + 0x20))(puVar4 + uVar10,puVar8,UVar1.unknown);
  lVar5 = 0;
  FUN_100172a64();
  _swift_allocObject();
  *(code **)(lVar5 + 0x10) = FUN_1000fb0dc;
  *(undefined **)(lVar5 + 0x18) = puVar4;
  (**(code **)(lVar11 + 8))(lVar7,UVar1.unknown);
  return lVar5;
}



/* Address: 0x1000f9d38 | FUN_1000f9d38 */

long FUN_1000f9d38(undefined8 param_1,undefined8 param_2)

{
  UUID UVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long extraout_x12;
  long unaff_x20;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  ulong uVar10;
  ID self;
  long lVar11;
  long local_80;
  undefined1 auStack_78 [24];
  
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  lVar11 = *(long *)(UVar1.unknown + -8);
  lVar9 = *(long *)(lVar11 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar8 = auStack_78 + (-8 - (lVar9 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar7 = (long)puVar8 - extraout_x12;
  Foundation::UUID::init();
  self = *(ID *)(unaff_x20 + 0x18);
  objc_stub::lock(self);
  puVar2 = &DAT_100eb7710;
  _swift_allocObject(&DAT_100eb7710,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  _swift_beginAccess(unaff_x20 + 0x10,auStack_78,0x21,0);
  _swift_retain(param_2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native(uVar3);
  local_80 = *(long *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = 0x8000000000000000;
  FUN_10016ff98(FUN_1000fb138,puVar2,lVar7,uVar3);
  lVar5 = local_80;
  *(long *)(unaff_x20 + 0x10) = local_80;
  _swift_endAccess(auStack_78);
  uVar3 = *(undefined8 *)(lVar5 + 0x10);
  objc_stub::unlock(self);
  if (*(code **)(unaff_x20 + 0x20) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x20))(uVar3);
  }
  puVar2 = &DAT_100eb7738;
  _swift_allocObject(&DAT_100eb7738,0x18,7);
  _swift_weakInit(puVar2 + 0x10);
  (**(code **)(lVar11 + 0x10))(puVar8,lVar7,UVar1.unknown);
  uVar6 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar10 = uVar6 + 0x18 & (uVar6 ^ 0xffffffffffffffff);
  puVar4 = &DAT_100eb7760;
  _swift_allocObject(&DAT_100eb7760,uVar10 + lVar9,uVar6 | 7);
  *(undefined **)(puVar4 + 0x10) = puVar2;
  (**(code **)(lVar11 + 0x20))(puVar4 + uVar10,puVar8,UVar1.unknown);
  lVar5 = 0;
  FUN_100172a64();
  _swift_allocObject();
  *(code **)(lVar5 + 0x10) = FUN_1000fb16c;
  *(undefined **)(lVar5 + 0x18) = puVar4;
  (**(code **)(lVar11 + 8))(lVar7,UVar1.unknown);
  return lVar5;
}



/* Address: 0x1000f9f34 | FUN_1000f9f34 */

long FUN_1000f9f34(undefined8 param_1,undefined8 param_2)

{
  UUID UVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long extraout_x12;
  long unaff_x20;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  ulong uVar10;
  ID self;
  long lVar11;
  long local_80;
  undefined1 auStack_78 [24];
  
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  lVar11 = *(long *)(UVar1.unknown + -8);
  lVar9 = *(long *)(lVar11 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar8 = auStack_78 + (-8 - (lVar9 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar7 = (long)puVar8 - extraout_x12;
  Foundation::UUID::init();
  self = *(ID *)(unaff_x20 + 0x18);
  objc_stub::lock(self);
  puVar2 = &DAT_100eb7800;
  _swift_allocObject(&DAT_100eb7800,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  _swift_beginAccess(unaff_x20 + 0x10,auStack_78,0x21,0);
  _swift_retain(param_2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native(uVar3);
  local_80 = *(long *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = 0x8000000000000000;
  FUN_10016ffc0(thunk_FUN_1000fb138,puVar2,lVar7,uVar3);
  lVar5 = local_80;
  *(long *)(unaff_x20 + 0x10) = local_80;
  _swift_endAccess(auStack_78);
  uVar3 = *(undefined8 *)(lVar5 + 0x10);
  objc_stub::unlock(self);
  if (*(code **)(unaff_x20 + 0x20) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x20))(uVar3);
  }
  puVar2 = &DAT_100eb7828;
  _swift_allocObject(&DAT_100eb7828,0x18,7);
  _swift_weakInit(puVar2 + 0x10);
  (**(code **)(lVar11 + 0x10))(puVar8,lVar7,UVar1.unknown);
  uVar6 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar10 = uVar6 + 0x18 & (uVar6 ^ 0xffffffffffffffff);
  puVar4 = &DAT_100eb7850;
  _swift_allocObject(&DAT_100eb7850,uVar10 + lVar9,uVar6 | 7);
  *(undefined **)(puVar4 + 0x10) = puVar2;
  (**(code **)(lVar11 + 0x20))(puVar4 + uVar10,puVar8,UVar1.unknown);
  lVar5 = 0;
  FUN_100172a64();
  _swift_allocObject();
  *(code **)(lVar5 + 0x10) = FUN_1000fb188;
  *(undefined **)(lVar5 + 0x18) = puVar4;
  (**(code **)(lVar11 + 8))(lVar7,UVar1.unknown);
  return lVar5;
}



/* Address: 0x1000fa130 | FUN_1000fa130 */

long FUN_1000fa130(undefined8 param_1,undefined8 param_2)

{
  UUID UVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long extraout_x12;
  long unaff_x20;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  ulong uVar10;
  ID self;
  long lVar11;
  long local_80;
  undefined1 auStack_78 [24];
  
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  lVar11 = *(long *)(UVar1.unknown + -8);
  lVar9 = *(long *)(lVar11 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar8 = auStack_78 + (-8 - (lVar9 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar7 = (long)puVar8 - extraout_x12;
  Foundation::UUID::init();
  self = *(ID *)(unaff_x20 + 0x18);
  objc_stub::lock(self);
  puVar2 = &DAT_100eb7788;
  _swift_allocObject(&DAT_100eb7788,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  _swift_beginAccess(unaff_x20 + 0x10,auStack_78,0x21,0);
  _swift_retain(param_2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native(uVar3);
  local_80 = *(long *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = 0x8000000000000000;
  FUN_10016ffac(thunk_FUN_1000fb138,puVar2,lVar7,uVar3);
  lVar5 = local_80;
  *(long *)(unaff_x20 + 0x10) = local_80;
  _swift_endAccess(auStack_78);
  uVar3 = *(undefined8 *)(lVar5 + 0x10);
  objc_stub::unlock(self);
  if (*(code **)(unaff_x20 + 0x20) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x20))(uVar3);
  }
  puVar2 = &DAT_100eb77b0;
  _swift_allocObject(&DAT_100eb77b0,0x18,7);
  _swift_weakInit(puVar2 + 0x10);
  (**(code **)(lVar11 + 0x10))(puVar8,lVar7,UVar1.unknown);
  uVar6 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar10 = uVar6 + 0x18 & (uVar6 ^ 0xffffffffffffffff);
  puVar4 = &DAT_100eb77d8;
  _swift_allocObject(&DAT_100eb77d8,uVar10 + lVar9,uVar6 | 7);
  *(undefined **)(puVar4 + 0x10) = puVar2;
  (**(code **)(lVar11 + 0x20))(puVar4 + uVar10,puVar8,UVar1.unknown);
  lVar5 = 0;
  FUN_100172a64();
  _swift_allocObject();
  *(code **)(lVar5 + 0x10) = FUN_1000fb178;
  *(undefined **)(lVar5 + 0x18) = puVar4;
  (**(code **)(lVar11 + 8))(lVar7,UVar1.unknown);
  return lVar5;
}



/* Address: 0x1000fa32c | FUN_1000fa32c */

long FUN_1000fa32c(undefined8 param_1,undefined8 param_2)

{
  UUID UVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long extraout_x12;
  long unaff_x20;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  ulong uVar10;
  ID self;
  long lVar11;
  long local_80;
  undefined1 auStack_78 [24];
  
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  lVar11 = *(long *)(UVar1.unknown + -8);
  lVar9 = *(long *)(lVar11 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar8 = auStack_78 + (-8 - (lVar9 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar7 = (long)puVar8 - extraout_x12;
  Foundation::UUID::init();
  self = *(ID *)(unaff_x20 + 0x18);
  objc_stub::lock(self);
  puVar2 = &DAT_100eb7878;
  _swift_allocObject(&DAT_100eb7878,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  _swift_beginAccess(unaff_x20 + 0x10,auStack_78,0x21,0);
  _swift_retain(param_2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native(uVar3);
  local_80 = *(long *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = 0x8000000000000000;
  FUN_1001700fc(thunk_FUN_1000fb138,puVar2,lVar7,uVar3);
  lVar5 = local_80;
  *(long *)(unaff_x20 + 0x10) = local_80;
  _swift_endAccess(auStack_78);
  uVar3 = *(undefined8 *)(lVar5 + 0x10);
  objc_stub::unlock(self);
  if (*(code **)(unaff_x20 + 0x20) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x20))(uVar3);
  }
  puVar2 = &DAT_100eb78a0;
  _swift_allocObject(&DAT_100eb78a0,0x18,7);
  _swift_weakInit(puVar2 + 0x10);
  (**(code **)(lVar11 + 0x10))(puVar8,lVar7,UVar1.unknown);
  uVar6 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar10 = uVar6 + 0x18 & (uVar6 ^ 0xffffffffffffffff);
  puVar4 = &DAT_100eb78c8;
  _swift_allocObject(&DAT_100eb78c8,uVar10 + lVar9,uVar6 | 7);
  *(undefined **)(puVar4 + 0x10) = puVar2;
  (**(code **)(lVar11 + 0x20))(puVar4 + uVar10,puVar8,UVar1.unknown);
  lVar5 = 0;
  FUN_100172a64();
  _swift_allocObject();
  *(code **)(lVar5 + 0x10) = FUN_1000fb200;
  *(undefined **)(lVar5 + 0x18) = puVar4;
  (**(code **)(lVar11 + 8))(lVar7,UVar1.unknown);
  return lVar5;
}



/* Address: 0x1000fa528 | FUN_1000fa528 */

long FUN_1000fa528(undefined8 param_1,undefined8 param_2)

{
  UUID UVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long extraout_x12;
  long unaff_x20;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  ulong uVar10;
  ID self;
  long lVar11;
  long local_80;
  undefined1 auStack_78 [24];
  
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  lVar11 = *(long *)(UVar1.unknown + -8);
  lVar9 = *(long *)(lVar11 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar8 = auStack_78 + (-8 - (lVar9 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar7 = (long)puVar8 - extraout_x12;
  Foundation::UUID::init();
  self = *(ID *)(unaff_x20 + 0x18);
  objc_stub::lock(self);
  puVar2 = &DAT_100eb7698;
  _swift_allocObject(&DAT_100eb7698,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  _swift_beginAccess(unaff_x20 + 0x10,auStack_78,0x21,0);
  _swift_retain(param_2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native(uVar3);
  local_80 = *(long *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = 0x8000000000000000;
  FUN_100170284(thunk_FUN_1000fb138,puVar2,lVar7,uVar3);
  lVar5 = local_80;
  *(long *)(unaff_x20 + 0x10) = local_80;
  _swift_endAccess(auStack_78);
  uVar3 = *(undefined8 *)(lVar5 + 0x10);
  objc_stub::unlock(self);
  if (*(code **)(unaff_x20 + 0x20) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x20))(uVar3);
  }
  puVar2 = &DAT_100eb76c0;
  _swift_allocObject(&DAT_100eb76c0,0x18,7);
  _swift_weakInit(puVar2 + 0x10);
  (**(code **)(lVar11 + 0x10))(puVar8,lVar7,UVar1.unknown);
  uVar6 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar10 = uVar6 + 0x18 & (uVar6 ^ 0xffffffffffffffff);
  puVar4 = &DAT_100eb76e8;
  _swift_allocObject(&DAT_100eb76e8,uVar10 + lVar9,uVar6 | 7);
  *(undefined **)(puVar4 + 0x10) = puVar2;
  (**(code **)(lVar11 + 0x20))(puVar4 + uVar10,puVar8,UVar1.unknown);
  lVar5 = 0;
  FUN_100172a64();
  _swift_allocObject();
  *(code **)(lVar5 + 0x10) = FUN_1000fb0e8;
  *(undefined **)(lVar5 + 0x18) = puVar4;
  (**(code **)(lVar11 + 8))(lVar7,UVar1.unknown);
  return lVar5;
}



/* Address: 0x1000fa724 | FUN_1000fa724 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1000fa724(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ID IVar5;
  Dictionary<undefined,undefined> DVar6;
  long lVar7;
  char *pcVar8;
  long extraout_x1;
  ulong uVar9;
  long unaff_x20;
  long lVar10;
  String SVar11;
  String SVar12;
  String separator;
  String separator_00;
  undefined *local_c0;
  long lStack_b8;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long local_88;
  undefined *local_80;
  undefined1 auStack_78 [24];
  
  iVar1 = (int)&local_c0;
  lVar10 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar10 == 0) {
    return 0;
  }
  if (*(char *)(unaff_x20 + 0x19) != '\x01') {
    if (DAT_101057340 == '\x01') {
      pcVar8 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
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
      *(undefined **)(pcVar8 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      pcVar8[0x20] = 'G';
      pcVar8[0x21] = '\0';
      pcVar8[0x22] = '\0';
      pcVar8[0x23] = '\0';
      pcVar8[0x24] = '\0';
      pcVar8[0x25] = '\0';
      pcVar8[0x26] = '\0';
      pcVar8[0x27] = -0x30;
      pcVar8[0x28] = 'P';
      pcVar8[0x29] = '\n';
      pcVar8[0x2a] = -0x27;
      pcVar8[0x2b] = '\0';
      pcVar8[0x2c] = '\x01';
      pcVar8[0x2d] = '\0';
      pcVar8[0x2e] = '\0';
      pcVar8[0x2f] = -0x80;
      SVar11.bridgeObject = (void *)0x20;
      SVar11.str = pcVar8;
      separator.bridgeObject = (void *)0xa;
      separator.str = (char *)0xe100000000000000;
      Swift::_print(SVar11,separator);
      _swift_release(pcVar8);
    }
    return 0;
  }
  *(undefined1 *)(unaff_x20 + 0x19) = 0;
  lVar7 = PostHogConfig::captureApplicationLifecycleEvents;
  lVar10 = *(long *)(lVar10 + _TtC7PostHog10PostHogSDK::config);
  _swift_beginAccess(lVar10 + PostHogConfig::captureApplicationLifecycleEvents,auStack_78,0,0);
  if ((*(byte *)(lVar10 + lVar7) & 1) == 0) {
    if (DAT_101057340 != '\x01') {
      return 0;
    }
    pcVar8 = &DAT_100fae660;
    FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
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
    *(undefined **)(pcVar8 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
    pcVar8[0x20] = 'l';
    pcVar8[0x21] = '\0';
    pcVar8[0x22] = '\0';
    pcVar8[0x23] = '\0';
    pcVar8[0x24] = '\0';
    pcVar8[0x25] = '\0';
    pcVar8[0x26] = '\0';
    pcVar8[0x27] = -0x30;
    pcVar8[0x28] = -0x60;
    pcVar8[0x29] = '\n';
    pcVar8[0x2a] = -0x27;
    pcVar8[0x2b] = '\0';
    pcVar8[0x2c] = '\x01';
    pcVar8[0x2d] = '\0';
    pcVar8[0x2e] = '\0';
    pcVar8[0x2f] = -0x80;
    SVar12.bridgeObject = (void *)0x20;
    SVar12.str = pcVar8;
    separator_00.bridgeObject = (void *)0xa;
    separator_00.str = (char *)0xe100000000000000;
    Swift::_print(SVar12,separator_00);
    _swift_release(pcVar8);
    return 0;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1000f8154();
  local_c0 = (undefined *)
             ((CONCAT71(local_c0._1_7_,*(undefined1 *)(unaff_x20 + 0x18)) ^ 0xff) &
             0xffffffffffffff01);
  local_a8 = PTR___type_metadata_for_Swift_Bool_100eac570;
  FUN_100011080(&local_c0,&local_a0);
  puVar3 = puVar2;
  _swift_isUniquelyReferenced_nonNull_native(puVar2);
  local_c0 = puVar2;
  FUN_10016fe74(&local_a0,0x6361625f6d6f7266,0xef646e756f72676b,puVar3);
  puVar2 = local_c0;
  local_80 = local_c0;
  if (*(char *)(unaff_x20 + 0x18) != '\x01') goto LAB_1000fabbc;
  puVar3 = (undefined *)NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
  puVar4 = puVar3;
  lVar10 = extraout_x1;
  FUN_10016c244();
  IVar5 = objc_stub::infoDictionary((ID)puVar3);
  puVar3 = PTR___type_metadata_for_Any_100eae0c0;
  if (IVar5 == 0) {
    uStack_98 = 0;
    local_a0 = 0;
    local_88 = 0;
    uStack_90 = 0;
LAB_1000faa98:
    FUN_1000faea8(&local_a0);
    lVar7 = 0;
    puVar3 = (undefined *)0x0;
  }
  else {
    DVar6 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
    if (*(long *)(DVar6.unknown + 0x10) == 0) {
      uStack_98 = 0;
      local_a0 = 0;
      local_88 = 0;
      uStack_90 = 0;
    }
    else {
      _swift_bridgeObjectRetain(DVar6.unknown);
      lVar7 = 0x656c646e75424643;
      uVar9 = 0;
      FUN_100071370(0x656c646e75424643);
      if ((uVar9 & 1) == 0) {
        _swift_bridgeObjectRelease(DVar6.unknown);
        uStack_98 = 0;
        local_a0 = 0;
        local_88 = 0;
        uStack_90 = 0;
      }
      else {
        FUN_10000cbfc(*(long *)(DVar6.unknown + 0x38) + lVar7 * 0x20,&local_a0);
        _swift_bridgeObjectRelease(DVar6.unknown);
      }
    }
    _swift_bridgeObjectRelease(DVar6.unknown);
    if (local_88 == 0) goto LAB_1000faa98;
    _swift_dynamicCast(&local_c0,&local_a0,puVar3 + 8,PTR___type_metadata_for_Swift_String_100eac208
                       ,6);
    lVar7 = lStack_b8;
    puVar3 = local_c0;
    if (iVar1 == 0) {
      puVar3 = (undefined *)0x0;
      lVar7 = 0;
    }
  }
  if (lVar10 != 0) {
    local_a8 = PTR___type_metadata_for_Swift_String_100eac208;
    local_c0 = puVar4;
    FUN_100011080(&local_c0,&local_a0);
    puVar4 = puVar2;
    _swift_isUniquelyReferenced_nonNull_native(puVar2);
    local_c0 = puVar2;
    FUN_10016fe74(&local_a0,0x6e6f6973726576,&DAT_e700000000000000,puVar4);
    local_80 = local_c0;
    puVar2 = local_c0;
  }
  if (lVar7 != 0) {
    FUN_10016c38c(&local_c0,puVar3,lVar7);
    _swift_bridgeObjectRelease(lVar7);
    if (local_a8 == (undefined *)0x0) {
      FUN_1000faea8(&local_c0);
      FUN_10016fcc4(&local_a0,0x646c697562,&DAT_e500000000000000);
      FUN_1000faea8(&local_a0);
      puVar2 = local_80;
    }
    else {
      FUN_100011080(&local_c0,&local_a0);
      puVar3 = puVar2;
      _swift_isUniquelyReferenced_nonNull_native(puVar2);
      local_c0 = puVar2;
      FUN_10016fe74(&local_a0,0x646c697562,&DAT_e500000000000000,puVar3);
      local_80 = local_c0;
      puVar2 = local_c0;
    }
  }
  *(undefined1 *)(unaff_x20 + 0x18) = 0;
LAB_1000fabbc:
  FUN_1001432c4(0xd000000000000012,0x8000000100d90b10,puVar2);
  _swift_bridgeObjectRelease(puVar2);
  return 0;
}



/* Address: 0x1000fac10 | FUN_1000fac10 */

void FUN_1000fac10(long param_1,code *param_2)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    (*param_2)();
    _swift_release(param_1);
  }
  return;
}



/* Address: 0x1000fac68 | FUN_1000fac68 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1000fac68(void)

{
  long lVar1;
  char *pcVar2;
  long unaff_x20;
  long lVar3;
  String SVar4;
  String SVar5;
  String separator;
  String separator_00;
  undefined1 auStack_48 [24];
  
  lVar3 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar3 != 0) {
    if ((*(byte *)(unaff_x20 + 0x19) & 1) != 0) {
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
        pcVar2[0x20] = 'G';
        pcVar2[0x21] = '\0';
        pcVar2[0x22] = '\0';
        pcVar2[0x23] = '\0';
        pcVar2[0x24] = '\0';
        pcVar2[0x25] = '\0';
        pcVar2[0x26] = '\0';
        pcVar2[0x27] = -0x30;
        pcVar2[0x28] = '\0';
        pcVar2[0x29] = '\n';
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
      }
      return 0;
    }
    *(undefined1 *)(unaff_x20 + 0x19) = 1;
    lVar1 = PostHogConfig::captureApplicationLifecycleEvents;
    lVar3 = *(long *)(lVar3 + _TtC7PostHog10PostHogSDK::config);
    _swift_beginAccess(lVar3 + PostHogConfig::captureApplicationLifecycleEvents,auStack_48,0,0);
    if ((*(byte *)(lVar3 + lVar1) & 1) == 0) {
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
        pcVar2[0x20] = 'r';
        pcVar2[0x21] = '\0';
        pcVar2[0x22] = '\0';
        pcVar2[0x23] = '\0';
        pcVar2[0x24] = '\0';
        pcVar2[0x25] = '\0';
        pcVar2[0x26] = '\0';
        pcVar2[0x27] = -0x30;
        pcVar2[0x28] = '`';
        pcVar2[0x29] = '\t';
        pcVar2[0x2a] = -0x27;
        pcVar2[0x2b] = '\0';
        pcVar2[0x2c] = '\x01';
        pcVar2[0x2d] = '\0';
        pcVar2[0x2e] = '\0';
        pcVar2[0x2f] = -0x80;
        SVar5.bridgeObject = (void *)0x20;
        SVar5.str = pcVar2;
        separator_00.bridgeObject = (void *)0xa;
        separator_00.str = (char *)0xe100000000000000;
        Swift::_print(SVar5,separator_00);
        _swift_release(pcVar2);
      }
    }
    else {
      FUN_100142804(0xd000000000000018,0x8000000100d909e0);
    }
  }
  return 0;
}



/* Address: 0x1000fae44 | FUN_1000fae44 */

void FUN_1000fae44(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1000fae80 | FUN_1000fae80 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1000fae80(void)

{
  return ZEXT816(0x100fae5c0);
}



/* Address: 0x1000faea0 | thunk_FUN_1000f9074 */

void thunk_FUN_1000f9074(void)

{
  FUN_1000f9074();
  return;
}



/* Address: 0x1000faea4 | thunk_FUN_1000f9a70 */

void thunk_FUN_1000f9a70(void)

{
  FUN_1000f9a70();
  return;
}



/* Address: 0x1000faea8 | FUN_1000faea8 */

undefined8 FUN_1000faea8(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fae668;
  FUN_1000f7830(&DAT_100fae668,&DAT_100c2e4a0);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x1000faef0 | FUN_1000faef0 */

void FUN_1000faef0(long param_1,undefined8 param_2,code *param_3)

{
  UUID UVar1;
  long extraout_x8;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ID self;
  long lVar5;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  lVar5 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar5 + 0x40));
  _swift_beginAccess(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    self = *(ID *)(param_1 + 0x18);
    objc_stub::lock(self);
    (**(code **)(lVar5 + 0x10))
              (auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_2,UVar1.unknown);
    _swift_beginAccess(param_1 + 0x10,auStack_80,0x21,0);
    (*param_3)(0,0,auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    _swift_endAccess(auStack_80);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
    objc_stub::unlock(self);
    pcVar2 = *(code **)(param_1 + 0x20);
    if (pcVar2 == (code *)0x0) {
      _swift_release(param_1);
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      _swift_retain(uVar4);
      (*pcVar2)(uVar3);
      _swift_release(param_1);
      FUN_100004550(pcVar2,uVar4);
    }
  }
  return;
}



/* Address: 0x1000fb030 | FUN_1000fb030 */

void FUN_1000fb030(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x1000fb054 | FUN_1000fb054 */

void FUN_1000fb054(void)

{
  FUN_1000fac10();
  return;
}



/* Address: 0x1000fb074 | FUN_1000fb074 */

void FUN_1000fb074(void)

{
  FUN_1000fac10();
  return;
}



/* Address: 0x1000fb094 | FUN_1000fb094 */

void FUN_1000fb094(void)

{
  FUN_1000fac10();
  return;
}



/* Address: 0x1000fb0b4 | FUN_1000fb0b4 */

void FUN_1000fb0b4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1000fb0d8 | thunk_FUN_1000fb194 */

void thunk_FUN_1000fb194(void)

{
  FUN_1000fb194();
  return;
}



/* Address: 0x1000fb0dc | FUN_1000fb0dc */

void FUN_1000fb0dc(void)

{
  FUN_1000fb0f4(FUN_10016e6d8);
  return;
}



/* Address: 0x1000fb0e8 | FUN_1000fb0e8 */

void FUN_1000fb0e8(void)

{
  FUN_1000fb0f4(FUN_10016e978);
  return;
}



/* Address: 0x1000fb0f4 | FUN_1000fb0f4 */

void FUN_1000fb0f4(undefined8 param_1)

{
  UUID UVar1;
  long unaff_x20;
  
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  FUN_1000faef0(*(undefined8 *)(unaff_x20 + 0x10),
                unaff_x20 +
                ((ulong)*(byte *)(*(long *)(UVar1.unknown + -8) + 0x50) + 0x18 &
                ((ulong)*(byte *)(*(long *)(UVar1.unknown + -8) + 0x50) ^ 0xffffffffffffffff)),
                param_1);
  return;
}



/* Address: 0x1000fb138 | FUN_1000fb138 */

void FUN_1000fb138(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 local_28;
  
  local_28 = *param_1;
  (**(code **)(unaff_x20 + 0x10))(&local_28);
  return;
}



/* Address: 0x1000fb16c | FUN_1000fb16c */

void FUN_1000fb16c(void)

{
  FUN_1000fb0f4(FUN_10016e7a0);
  return;
}



/* Address: 0x1000fb178 | FUN_1000fb178 */

void FUN_1000fb178(void)

{
  FUN_1000fb0f4(FUN_10016e93c);
  return;
}



/* Address: 0x1000fb184 | thunk_FUN_1000fb138 */

void thunk_FUN_1000fb138(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uStack_28;
  
  uStack_28 = *param_1;
  (**(code **)(unaff_x20 + 0x10))(&uStack_28);
  return;
}



/* Address: 0x1000fb188 | FUN_1000fb188 */

void FUN_1000fb188(void)

{
  FUN_1000fb0f4(FUN_10016e950);
  return;
}



/* Address: 0x1000fb194 | FUN_1000fb194 */

void FUN_1000fb194(void)

{
  UUID UVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  lVar2 = *(long *)(UVar1.unknown + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff)),UVar1.unknown);
  _swift_deallocObject();
  return;
}



/* Address: 0x1000fb200 | FUN_1000fb200 */

void FUN_1000fb200(void)

{
  FUN_1000fb0f4(FUN_10016e964);
  return;
}



/* Address: 0x1000fb20c | thunk_FUN_1000fb0b4 */

void thunk_FUN_1000fb0b4(void)

{
  FUN_1000fb0b4();
  return;
}



/* Address: 0x1000fb210 | thunk_FUN_1000fb0b4 */

void thunk_FUN_1000fb0b4(void)

{
  FUN_1000fb0b4();
  return;
}



/* Address: 0x1000fb214 | thunk_FUN_1000fb0b4 */

void thunk_FUN_1000fb0b4(void)

{
  FUN_1000fb0b4();
  return;
}



/* Address: 0x1000fb218 | thunk_FUN_1000fb0b4 */

void thunk_FUN_1000fb0b4(void)

{
  FUN_1000fb0b4();
  return;
}



/* Address: 0x1000fb21c | thunk_FUN_1000fb0b4 */

void thunk_FUN_1000fb0b4(void)

{
  FUN_1000fb0b4();
  return;
}



/* Address: 0x1000fb220 | thunk_FUN_1000fb0b4 */

void thunk_FUN_1000fb0b4(void)

{
  FUN_1000fb0b4();
  return;
}



/* Address: 0x1000fb224 | thunk_FUN_1000fb0b4 */

void thunk_FUN_1000fb0b4(void)

{
  FUN_1000fb0b4();
  return;
}



/* Address: 0x1000fb228 | thunk_FUN_1000fb0b4 */

void thunk_FUN_1000fb0b4(void)

{
  FUN_1000fb0b4();
  return;
}



/* Address: 0x1000fb22c | thunk_FUN_1000fb030 */

void thunk_FUN_1000fb030(void)

{
  FUN_1000fb030();
  return;
}



/* Address: 0x1000fb230 | thunk_FUN_1000fb030 */

void thunk_FUN_1000fb030(void)

{
  FUN_1000fb030();
  return;
}



/* Address: 0x1000fb234 | thunk_FUN_1000fb030 */

void thunk_FUN_1000fb030(void)

{
  FUN_1000fb030();
  return;
}



/* Address: 0x1000fb238 | thunk_FUN_1000fb030 */

void thunk_FUN_1000fb030(void)

{
  FUN_1000fb030();
  return;
}



/* Address: 0x1000fb23c | thunk_FUN_1000fb030 */

void thunk_FUN_1000fb030(void)

{
  FUN_1000fb030();
  return;
}



/* Address: 0x1000fb240 | thunk_FUN_1000fb030 */

void thunk_FUN_1000fb030(void)

{
  FUN_1000fb030();
  return;
}



/* Address: 0x1000fb244 | thunk_FUN_1000fb138 */

void thunk_FUN_1000fb138(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uStack_28;
  
  uStack_28 = *param_1;
  (**(code **)(unaff_x20 + 0x10))(&uStack_28);
  return;
}



/* Address: 0x1000fb248 | thunk_FUN_1000fb194 */

void thunk_FUN_1000fb194(void)

{
  thunk_FUN_1000fb194();
  return;
}



/* Address: 0x1000fb24c | thunk_FUN_1000fb194 */

void thunk_FUN_1000fb194(void)

{
  thunk_FUN_1000fb194();
  return;
}



/* Address: 0x1000fb250 | thunk_FUN_1000fb194 */

void thunk_FUN_1000fb194(void)

{
  thunk_FUN_1000fb194();
  return;
}



/* Address: 0x1000fb254 | thunk_FUN_1000fb194 */

void thunk_FUN_1000fb194(void)

{
  thunk_FUN_1000fb194();
  return;
}



/* Address: 0x1000fb258 | thunk_FUN_1000fb194 */

void thunk_FUN_1000fb194(void)

{
  thunk_FUN_1000fb194();
  return;
}



/* Address: 0x1000fb25c | FUN_1000fb25c */

undefined * FUN_1000fb25c(undefined8 param_1,undefined *param_2,long param_3)

{
  undefined *puVar1;
  URL UVar2;
  URL UVar3;
  URL UVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x8_00;
  undefined *puVar8;
  long lVar9;
  String SVar10;
  undefined *local_f0;
  long lStack_e8;
  undefined *local_d8;
  undefined1 auStack_d0 [112];
  
  puVar1 = &DAT_100fae670;
  FUN_1000f7830(&DAT_100fae670,&DAT_100c2e0e8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)&local_f0 - extraout_x8;
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar9 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  puVar8 = (undefined *)(lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  UVar3.unknown = &DAT_100fae678;
  FUN_1000f7830(&DAT_100fae678,&DAT_100c2e190);
  _swift_initStackObject();
  *(undefined8 *)(UVar3.unknown + 0x18) = 2;
  *(undefined8 *)(UVar3.unknown + 0x10) = 1;
  *(undefined8 *)(UVar3.unknown + 0x20) = 0x6c7275;
  *(undefined8 *)(UVar3.unknown + 0x28) = 0xe300000000000000;
  SVar10 = Foundation::URL::get_absoluteString(UVar3);
  puVar1 = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined **)(UVar3.unknown + 0x48) = PTR___type_metadata_for_Swift_String_100eac208;
  *(String *)(UVar3.unknown + 0x30) = SVar10;
  UVar4.unknown = UVar3.unknown;
  FUN_1000f8154();
  _swift_setDeallocating(UVar3.unknown);
  FUN_1000fb4c4(UVar3.unknown + 0x20,&DAT_100fae490,&DAT_100c2de60);
  if (param_3 != 0) {
    local_d8 = puVar1;
    local_f0 = param_2;
    lStack_e8 = param_3;
    FUN_100011080(&local_f0,auStack_d0);
    _swift_bridgeObjectRetain(param_3);
    puVar5 = UVar4.unknown;
    _swift_isUniquelyReferenced_nonNull_native(UVar4.unknown);
    local_f0 = UVar4.unknown;
    FUN_10016fe74(auStack_d0,0x6572726566657224,0xe900000000000072,puVar5);
    UVar4.unknown = local_f0;
    Foundation::URL::_init();
    lVar6 = lVar7;
    (**(code **)(lVar9 + 0x30))(lVar7,1,UVar2.unknown);
    if ((int)lVar6 == 1) {
      FUN_1000fb4c4(lVar7,&DAT_100fae670,&DAT_100c2e0e8);
    }
    else {
      UVar3.unknown = puVar8;
      (**(code **)(lVar9 + 0x20))(puVar8,lVar7,UVar2.unknown);
      Foundation::URL::_get_host(UVar3);
      if (lVar7 != 0) {
        local_d8 = puVar1;
        local_f0 = UVar3.unknown;
        lStack_e8 = lVar7;
        FUN_100011080(&local_f0,auStack_d0);
        puVar1 = UVar4.unknown;
        _swift_isUniquelyReferenced_nonNull_native(UVar4.unknown);
        local_f0 = UVar4.unknown;
        FUN_10016fe74(auStack_d0,0xd000000000000011,0x8000000100d90b30,puVar1);
        UVar4.unknown = local_f0;
      }
      (**(code **)(lVar9 + 8))(puVar8,UVar2.unknown);
    }
  }
  return UVar4.unknown;
}



/* Address: 0x1000fb4c4 | FUN_1000fb4c4 */

undefined8 FUN_1000fb4c4(undefined8 param_1,long param_2,undefined8 param_3)

{
  FUN_1000f7830(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Address: 0x1000fb504 | PostHogRageClickConfig::enabled */

/* Function Stack Size: 0x10 bytes */

bool PostHogRageClickConfig::enabled(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = enabled;
  _swift_beginAccess(param_1 + enabled,auStack_38,0,0);
  return (bool)*(byte *)(param_1 + lVar1);
}


