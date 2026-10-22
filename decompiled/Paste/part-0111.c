/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10015dba0 | FUN_10015dba0 */

char * FUN_10015dba0(void)

{
  return s_3_69_0_100fb1598;
}



/* Address: 0x10015dbac | FUN_10015dbac */

void FUN_10015dbac(void)

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
  DAT_100fb1668 = lVar1;
  return;
}



/* Address: 0x10015dbfc | FUN_10015dbfc */

undefined8 FUN_10015dbfc(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  ID self;
  
  if (DAT_100fb1660 != -1) {
    _swift_once(&DAT_100fb1660,FUN_10015dbac);
  }
  lVar1 = DAT_100fb1668;
  self = *(ID *)(DAT_100fb1668 + 0x10);
  objc_stub::lock(self);
  if ((*(byte *)(lVar1 + 0x18) & 1) == 0) {
    *(undefined1 *)(lVar1 + 0x18) = 1;
    objc_stub::unlock(self);
    _swift_unknownObjectWeakAssign(unaff_x20 + 0x10,param_1);
    FUN_10015dc98();
    uVar2 = 3;
  }
  else {
    objc_stub::unlock(self);
    uVar2 = 0;
  }
  return uVar2;
}



/* Address: 0x10015dc98 | FUN_10015dc98 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10015dc98(void)

{
  bool bVar1;
  URL UVar2;
  ID self;
  URL UVar3;
  _StringGuts _Var4;
  long lVar5;
  undefined *puVar6;
  code *pcVar7;
  char *pcVar8;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar10;
  long lVar11;
  String SVar12;
  String separator;
  _StringGuts _Var9;
  
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar11 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  self = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
  UVar3.unknown = (undefined *)NSBundle::bundleURL(self);
  Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar3);
  SVar12 = Foundation::URL::get_pathExtension((URL)0x0);
  _Var9.unknown = SVar12.bridgeObject;
  _Var4.unknown = SVar12.str;
  (**(code **)(lVar11 + 8))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar2.unknown);
  if (((_Var4.unknown == (undefined *)0x707061 && _Var9.unknown == (undefined *)0xe300000000000000)
      || (bVar1 = Swift::_stringCompareWithSmolCheck(_Var4,_Var9,(_StringComparisonResult)0x61),
         bVar1)) ||
     (_Var4.unknown == (undefined *)0x7865707061 && _Var9.unknown == &DAT_e500000000000000)) {
    _swift_bridgeObjectRelease(_Var9.unknown);
  }
  else {
    bVar1 = Swift::_stringCompareWithSmolCheck(_Var4,_Var9,(_StringComparisonResult)0x61);
    _swift_bridgeObjectRelease(_Var9.unknown);
    if (!bVar1) {
      if (DAT_101057340 != '\x01') {
        return;
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
      pcVar8[0x20] = '^';
      pcVar8[0x21] = '\0';
      pcVar8[0x22] = '\0';
      pcVar8[0x23] = '\0';
      pcVar8[0x24] = '\0';
      pcVar8[0x25] = '\0';
      pcVar8[0x26] = '\0';
      pcVar8[0x27] = -0x30;
      pcVar8[0x28] = 'P';
      pcVar8[0x29] = 'A';
      pcVar8[0x2a] = -0x27;
      pcVar8[0x2b] = '\0';
      pcVar8[0x2c] = '\x01';
      pcVar8[0x2d] = '\0';
      pcVar8[0x2e] = '\0';
      pcVar8[0x2f] = -0x80;
      SVar12.bridgeObject = (void *)0x20;
      SVar12.str = pcVar8;
      separator.bridgeObject = (void *)0xa;
      separator.str = (char *)0xe100000000000000;
      Swift::_print(SVar12,separator);
      goto LAB_10015deec;
    }
  }
  if (DAT_100fae858 != -1) {
    _swift_once(&DAT_100fae858,FUN_1000fbcdc);
  }
  lVar11 = DAT_101057190;
  lVar5 = DAT_101057190;
  _swift_retain();
  FUN_1000fbdac();
  _swift_release(lVar11);
  uVar10 = *(undefined8 *)(lVar5 + 0x10);
  _swift_retain(uVar10);
  _swift_unknownObjectRelease(lVar5);
  puVar6 = &DAT_100eb9048;
  _swift_allocObject(&DAT_100eb9048,0x18,7);
  _swift_weakInit(puVar6 + 0x10);
  pcVar7 = FUN_10015e1e8;
  FUN_1000fa528(FUN_10015e1e8,puVar6);
  _swift_release(uVar10);
  _swift_release(puVar6);
  pcVar8 = *(char **)(unaff_x20 + 0x18);
  *(code **)(unaff_x20 + 0x18) = pcVar7;
LAB_10015deec:
  _swift_release(pcVar8);
  return;
}



/* Address: 0x10015df24 | FUN_10015df24 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10015df24(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ID self;
  long unaff_x20;
  
  lVar2 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  lVar1 = DAT_100fb1668;
  if (DAT_100fb1660 != -1) {
    _swift_once(&DAT_100fb1660,FUN_10015dbac);
    lVar1 = DAT_100fb1668;
  }
  DAT_100fb1668 = lVar1;
  if ((lVar2 == 0) || (lVar2 == param_1)) {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
    *(undefined8 *)(unaff_x20 + 0x18) = 0;
    _swift_release(uVar3);
    _swift_unknownObjectWeakAssign(unaff_x20 + 0x10,0);
    self = *(ID *)(lVar1 + 0x10);
    objc_stub::lock(self);
    *(undefined1 *)(lVar1 + 0x18) = 0;
    objc_stub::unlock(self);
  }
  return 0;
}



/* Address: 0x10015dfd8 | FUN_10015dfd8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_10015dfd8(ID *param_1,long param_2)

{
  bool bVar1;
  ID IVar2;
  long lVar3;
  _StringGuts _Var4;
  ID self;
  String SVar5;
  String SVar6;
  undefined1 auStack_58 [24];
  
  self = *param_1;
  IVar2 = objc_stub::notification(self);
  IVar2 = objc_stub::request(IVar2);
  IVar2 = objc_stub::trigger(IVar2);
  if ((IVar2 != 0) &&
     (_swift_dynamicCastObjCClass(IVar2,&_OBJC_CLASS___UNPushNotificationTrigger), IVar2 != 0)) {
    objc_stub::actionIdentifier(self);
    SVar5 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    _Var4.unknown = SVar5.bridgeObject;
    SVar6 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    if (SVar5 == SVar6) {
      _swift_bridgeObjectRelease(_Var4.unknown);
      _swift_bridgeObjectRelease(SVar6.bridgeObject);
      return;
    }
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)SVar5.str,_Var4,(_StringComparisonResult)(__int8)SVar6.str);
    _swift_bridgeObjectRelease(_Var4.unknown);
    _swift_bridgeObjectRelease(SVar6.bridgeObject);
    if (!bVar1) {
      _swift_beginAccess(param_2 + 0x10,auStack_58,0,0);
      param_2 = param_2 + 0x10;
      _swift_weakLoadStrong();
      if (param_2 != 0) {
        lVar3 = param_2 + 0x10;
        _swift_unknownObjectWeakLoadStrong();
        _swift_release(param_2);
        if (lVar3 != 0) {
          FUN_100151fdc(self);
        }
      }
    }
  }
  return;
}



/* Address: 0x10015e170 | FUN_10015e170 */

void FUN_10015e170(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10015e19c | FUN_10015e19c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10015e19c(void)

{
  return ZEXT816(0x100fb15f8);
}



/* Address: 0x10015e1bc | thunk_FUN_10015dbfc */

void thunk_FUN_10015dbfc(void)

{
  FUN_10015dbfc();
  return;
}



/* Address: 0x10015e1c0 | thunk_FUN_10015df24 */

void thunk_FUN_10015df24(void)

{
  FUN_10015df24();
  return;
}



/* Address: 0x10015e1c4 | FUN_10015e1c4 */

void FUN_10015e1c4(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x10015e1e8 | FUN_10015e1e8 */

void FUN_10015e1e8(void)

{
  FUN_10015dfd8();
  return;
}



/* Address: 0x10015e1f0 | FUN_10015e1f0 */

void FUN_10015e1f0(void)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  _StringGuts _Var5;
  bool bVar6;
  undefined **ppuVar7;
  undefined *extraout_x1;
  undefined *puVar8;
  undefined *extraout_x1_00;
  undefined *puVar9;
  _StringGuts _Var10;
  long unaff_x20;
  ID self;
  undefined *local_180;
  undefined *puStack_178;
  undefined *local_170;
  undefined *puStack_168;
  _StringGuts local_160;
  _StringGuts _Stack_158;
  undefined *local_150;
  undefined *local_148;
  undefined *local_140;
  undefined *puStack_138;
  _StringGuts local_130;
  _StringGuts _Stack_128;
  undefined *local_120;
  undefined *puStack_118;
  undefined *local_110;
  undefined *puStack_108;
  undefined *local_100;
  undefined *puStack_f8;
  _StringGuts local_f0;
  _StringGuts _Stack_e8;
  undefined *local_e0;
  undefined *puStack_d8;
  undefined *local_d0;
  undefined *puStack_c8;
  undefined *local_c0;
  undefined *puStack_b8;
  undefined *local_b0;
  undefined *puStack_a8;
  undefined *local_a0;
  undefined *puStack_98;
  undefined *local_90;
  undefined *puStack_88;
  undefined *local_80;
  undefined *puStack_78;
  
  self = *(ID *)(unaff_x20 + _TtC7PostHog30PostHogPushSubscriptionHandler::recordLock);
  objc_stub::lock(self);
  FUN_10015eefc(&local_180);
  _Var10.unknown = _Stack_158.unknown;
  _Var5.unknown = local_160.unknown;
  puVar4 = puStack_168;
  puVar3 = local_170;
  objc_stub::unlock(self);
  objc_stub::lock(self);
  FUN_100161614(&local_150);
  ppuVar7 = (undefined **)objc_stub::unlock(self);
  puVar9 = extraout_x1;
  if (local_148 == (undefined *)0x0) {
LAB_10015e460:
    if (puStack_178 == (undefined *)0x0) {
      return;
    }
  }
  else {
    local_120 = local_150;
    puStack_118 = local_148;
    puStack_108 = puStack_138;
    local_110 = local_140;
    puStack_f8 = _Stack_128.unknown;
    local_100 = local_130.unknown;
    if (puStack_178 == (undefined *)0x0) {
LAB_10015e41c:
      puVar9 = (undefined *)0x0;
      FUN_10015f710(&local_120);
      puStack_c8 = puStack_118;
      local_d0 = local_120;
      FUN_10000caac(&local_d0);
      puStack_b8 = puStack_108;
      local_c0 = local_110;
      FUN_10000caac(&local_c0);
      puStack_a8 = puStack_f8;
      local_b0 = local_100;
      ppuVar7 = &local_b0;
      FUN_10000caac();
      goto LAB_10015e460;
    }
    _Stack_e8.unknown = local_148;
    local_f0.unknown = local_150;
    pcVar2 = *(code **)(unaff_x20 + 0x30);
    puVar8 = extraout_x1;
    _swift_bridgeObjectRetain(_Var10.unknown);
    _swift_bridgeObjectRetain(puStack_178);
    puVar9 = puVar4;
    _swift_bridgeObjectRetain();
    (*pcVar2)();
    if ((local_f0.unknown == puVar9) && (_Stack_e8.unknown == puVar8)) {
      _swift_bridgeObjectRelease(puVar8);
    }
    else {
      bVar6 = Swift::_stringCompareWithSmolCheck
                        (local_f0,_Stack_e8,(_StringComparisonResult)(__int8)puVar9);
      _swift_bridgeObjectRelease(puVar8);
      if (!bVar6) {
        local_a0 = local_180;
        puStack_98 = puStack_178;
        FUN_10000caac(&local_a0);
        puStack_88 = puStack_168;
        local_90 = local_170;
        FUN_10000caac(&local_90);
        puStack_78 = _Stack_158.unknown;
        local_80 = local_160.unknown;
        FUN_1000fb4c4(&local_80,&DAT_100fb1828,&DAT_100c2f3f8);
        goto LAB_10015e41c;
      }
    }
    puStack_d8 = _Stack_128.unknown;
    local_e0 = local_130.unknown;
    puStack_98 = puStack_168;
    local_a0 = local_170;
    if ((local_130.unknown == local_170) && (_Stack_128.unknown == puStack_168)) {
      local_90 = local_180;
      puStack_88 = puStack_178;
      FUN_10000caac(&local_90);
      FUN_10000caac(&local_a0);
      puStack_78 = _Stack_158.unknown;
      local_80 = local_160.unknown;
      FUN_1000fb4c4(&local_80,&DAT_100fb1828,&DAT_100c2f3f8);
    }
    else {
      bVar6 = Swift::_stringCompareWithSmolCheck
                        (local_130,_Stack_128,(_StringComparisonResult)(__int8)local_170);
      local_90 = local_180;
      puStack_88 = puStack_178;
      FUN_10000caac(&local_90);
      FUN_10000caac(&local_a0);
      puStack_78 = _Stack_158.unknown;
      local_80 = local_160.unknown;
      FUN_1000fb4c4(&local_80,&DAT_100fb1828,&DAT_100c2f3f8);
      if (!bVar6) goto LAB_10015e41c;
    }
    objc_stub::lock(self);
    FUN_100161220(&local_120);
    objc_stub::unlock(self);
    puVar9 = extraout_x1_00;
    FUN_10000caac(&local_f0);
    puStack_a8 = puStack_108;
    local_b0 = local_110;
    FUN_10000caac(&local_b0);
    ppuVar7 = &local_e0;
    FUN_10000caac();
  }
  (**(code **)(unaff_x20 + 0x30))();
  uVar1 = (ulong)ppuVar7 & 0xffffffffffff;
  if (((ulong)puVar9 & 0x2000000000000000) != 0) {
    uVar1 = (ulong)puVar9 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    _swift_bridgeObjectRelease(puVar4);
    _swift_bridgeObjectRelease(puStack_178);
    _swift_bridgeObjectRelease(puVar9);
    goto LAB_10015e514;
  }
  if (_Var10.unknown == (undefined *)0x0) {
    _swift_bridgeObjectRelease(puVar9);
LAB_10015e4ec:
    FUN_10015f418(local_180,puStack_178,puVar3,puVar4);
  }
  else {
    if (((undefined **)_Var5.unknown != ppuVar7) || (_Var10.unknown != puVar9)) {
      bVar6 = Swift::_stringCompareWithSmolCheck
                        (_Var5,_Var10,(_StringComparisonResult)(__int8)ppuVar7);
      if (!bVar6) {
        bVar6 = Swift::_stringCompareWithSmolCheck
                          (_Var5,_Var10,(_StringComparisonResult)(__int8)ppuVar7);
        _swift_bridgeObjectRelease(puVar9);
        if (!bVar6) {
          FUN_10015f330();
        }
        goto LAB_10015e4ec;
      }
    }
    _swift_bridgeObjectRelease(puVar9);
  }
  _swift_bridgeObjectRelease(_Var10.unknown);
  _swift_bridgeObjectRelease(puVar4);
  _Var10.unknown = puStack_178;
LAB_10015e514:
  _swift_bridgeObjectRelease(_Var10.unknown);
  return;
}



/* Address: 0x10015e570 | FUN_10015e570 */

undefined8 FUN_10015e570(undefined8 param_1,undefined8 param_2,URL param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  URL UVar4;
  long extraout_x8;
  ID self;
  long unaff_x20;
  long lVar5;
  long lVar6;
  String SVar7;
  undefined8 local_a0;
  long local_98;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  UVar4 = Foundation::URL::typeMetadataAccessor();
  lVar6 = *(long *)(UVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar6 + 0x40));
  lVar5 = (long)&local_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  self = *(ID *)(unaff_x20 + _TtC7PostHog30PostHogPushSubscriptionHandler::recordLock);
  objc_stub::lock(self);
  FUN_10015eefc(&local_a0);
  if (local_98 == 0) {
    local_a0 = 0;
  }
  else {
    uStack_68 = uStack_78;
    local_70 = local_80;
    SVar7.bridgeObject = (void *)0x8000000100d93bc0;
    SVar7.str = (char *)0xd000000000000018;
    Foundation::URL::appendingPathComponent(SVar7,param_3);
    FUN_1001723c8(lVar5);
    (**(code **)(lVar6 + 8))(lVar5,UVar4.unknown);
    puVar1 = (undefined8 *)
             (unaff_x20 + _TtC7PostHog30PostHogPushSubscriptionHandler::cachedDeliveredDistinctId);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    FUN_100161a8c(uVar2,uVar3);
    FUN_1000fb4c4(&local_70,&DAT_100fb1828,&DAT_100c2f3f8);
  }
  objc_stub::unlock(self);
  return local_a0;
}



/* Address: 0x10015e6c4 | FUN_10015e6c4 */

void FUN_10015e6c4(ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,
                  ulong param_6)

{
  ulong uVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 uVar4;
  ID self;
  long unaff_x20;
  String SVar5;
  String separator;
  ulong local_60;
  ulong uStack_58;
  ulong local_50;
  ulong uStack_48;
  ulong local_40;
  ulong uStack_38;
  
  uVar1 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    uVar1 = param_3 & 0xffffffffffff;
    if ((param_4 & 0x2000000000000000) != 0) {
      uVar1 = param_4 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      uVar1 = param_5 & 0xffffffffffff;
      if ((param_6 & 0x2000000000000000) != 0) {
        uVar1 = param_6 >> 0x38 & 0xf;
      }
      if (uVar1 != 0) {
        self = *(ID *)(unaff_x20 + _TtC7PostHog30PostHogPushSubscriptionHandler::recordLock);
        local_60 = param_1;
        uStack_58 = param_2;
        local_50 = param_3;
        uStack_48 = param_4;
        local_40 = param_5;
        uStack_38 = param_6;
        objc_stub::lock(self);
        FUN_100161444();
        uVar1 = objc_stub::unlock(self);
        (**(code **)(unaff_x20 + 0x50))();
        if ((uVar1 & 1) != 0) {
          FUN_10015f710(&local_60,0);
          return;
        }
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
        pcVar3 = "deliveredForDistinctId";
        *(undefined **)(pcVar2 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
        uVar4 = 0xd00000000000005d;
        goto LAB_10015e7d4;
      }
    }
  }
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
  pcVar3 = ". Will retry on flush/opt-in.";
  *(undefined **)(pcVar2 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
  uVar4 = 0xd000000000000049;
LAB_10015e7d4:
  *(undefined8 *)(pcVar2 + 0x20) = uVar4;
  *(ulong *)(pcVar2 + 0x28) = (ulong)pcVar3 | 0x8000000000000000;
  SVar5.bridgeObject = (void *)0x20;
  SVar5.str = pcVar2;
  separator.bridgeObject = (void *)0xa;
  separator.str = (char *)0xe100000000000000;
  Swift::_print(SVar5,separator);
  _swift_release(pcVar2);
  return;
}



/* Address: 0x10015e888 | FUN_10015e888 */

void FUN_10015e888(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  long unaff_x20;
  ID self;
  String SVar2;
  String separator;
  undefined1 auStack_70 [8];
  long local_68;
  
  self = *(ID *)(unaff_x20 + _TtC7PostHog30PostHogPushSubscriptionHandler::recordLock);
  objc_stub::lock(self);
  FUN_10015eefc(auStack_70);
  if (local_68 != 0) {
    FUN_1000fb4c4(auStack_70,&DAT_100fb1820,&DAT_100c2f3e8);
    objc_stub::unlock(self);
    if ((DAT_101057340 & 1) != 0) {
      pcVar1 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      _swift_allocObject();
      pcVar1[0x18] = '\x02';
      pcVar1[0x19] = '\0';
      pcVar1[0x1a] = '\0';
      pcVar1[0x1b] = '\0';
      pcVar1[0x1c] = '\0';
      pcVar1[0x1d] = '\0';
      pcVar1[0x1e] = '\0';
      pcVar1[0x1f] = '\0';
      pcVar1[0x10] = '\x01';
      pcVar1[0x11] = '\0';
      pcVar1[0x12] = '\0';
      pcVar1[0x13] = '\0';
      pcVar1[0x14] = '\0';
      pcVar1[0x15] = '\0';
      pcVar1[0x16] = '\0';
      pcVar1[0x17] = '\0';
      *(undefined **)(pcVar1 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      pcVar1[0x20] = 'V';
      pcVar1[0x21] = '\0';
      pcVar1[0x22] = '\0';
      pcVar1[0x23] = '\0';
      pcVar1[0x24] = '\0';
      pcVar1[0x25] = '\0';
      pcVar1[0x26] = '\0';
      pcVar1[0x27] = -0x30;
      pcVar1[0x28] = -0x50;
      pcVar1[0x29] = 'A';
      pcVar1[0x2a] = -0x27;
      pcVar1[0x2b] = '\0';
      pcVar1[0x2c] = '\x01';
      pcVar1[0x2d] = '\0';
      pcVar1[0x2e] = '\0';
      pcVar1[0x2f] = -0x80;
      SVar2.bridgeObject = (void *)0x20;
      SVar2.str = pcVar1;
      separator.bridgeObject = (void *)0xa;
      separator.str = (char *)0xe100000000000000;
      Swift::_print(SVar2,separator);
      _swift_release(pcVar1);
    }
    return;
  }
  FUN_10015f168(param_1,param_2,param_3,param_4,0,0);
  objc_stub::unlock(self);
  FUN_10015f330();
  FUN_10015f418(param_1,param_2,param_3,param_4);
  return;
}



/* Address: 0x10015e9dc | FUN_10015e9dc */

void FUN_10015e9dc(undefined8 *param_1,long param_2)

{
  _StringGuts _Var1;
  _StringGuts _Var2;
  bool bVar3;
  DispatchWorkItemFlags DVar4;
  DispatchQoS DVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined7 extraout_var;
  undefined *puVar8;
  void *aBlock;
  DispatchQoS DVar9;
  undefined *puVar10;
  ulong uVar11;
  long extraout_x8;
  long extraout_x8_00;
  undefined *puVar12;
  undefined1 *puVar13;
  long lVar14;
  long lVar15;
  ID self;
  undefined1 auStack_e0 [12];
  uint local_d4;
  long local_d0;
  _StringGuts local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  code *local_a8;
  undefined *puStack_a0;
  code *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  DVar4 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar14 = *(long *)(DVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar14 + 0x40));
  puVar13 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar5 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar15 = *(long *)(DVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar15 + 0x40));
  puVar12 = (undefined *)*param_1;
  _swift_beginAccess(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 == 0) {
    return;
  }
  if (*(long *)(puVar12 + 0x10) == 0) goto LAB_10015ebf0;
  _swift_bridgeObjectRetain(puVar12);
  lVar6 = 0x74636e6974736964;
  uVar11 = 0xeb0000000064695f;
  FUN_100071370(0x74636e6974736964);
  if ((uVar11 & 1) == 0) {
LAB_10015eba0:
    _swift_release(param_2);
    _swift_bridgeObjectRelease(puVar12);
    return;
  }
  FUN_10000cbfc(*(long *)(puVar12 + 0x38) + lVar6 * 0x20,&local_b8);
  _swift_bridgeObjectRelease(puVar12);
  ppuVar7 = &local_88;
  _swift_dynamicCast(ppuVar7,&local_b8,PTR___type_metadata_for_Any_100eae0c0 + 8,
                     PTR___type_metadata_for_Swift_String_100eac208,6);
  if (((ulong)ppuVar7 & 1) == 0) goto LAB_10015ebf0;
  uVar11 = (ulong)local_88 & 0xffffffffffff;
  if (((ulong)puStack_80 & 0x2000000000000000) != 0) {
    uVar11 = (ulong)puStack_80 >> 0x38 & 0xf;
  }
  puVar12 = puStack_80;
  if (uVar11 == 0) goto LAB_10015eba0;
  local_c0 = local_88;
  self = *(ID *)(param_2 + _TtC7PostHog30PostHogPushSubscriptionHandler::recordLock);
  objc_stub::lock(self);
  local_c8.unknown =
       *(undefined **)
        (param_2 + _TtC7PostHog30PostHogPushSubscriptionHandler::cachedDeliveredDistinctId);
  _Var1.unknown =
       (undefined *)
       ((undefined8 *)
       (param_2 + _TtC7PostHog30PostHogPushSubscriptionHandler::cachedDeliveredDistinctId))[1];
  FUN_100163ca0(local_c8.unknown,_Var1.unknown);
  objc_stub::unlock(self);
  _Var2.unknown = local_c8.unknown;
  if (_Var1.unknown == &DAT_00000001) {
LAB_10015ec14:
    local_c8.unknown =
         *(undefined **)(param_2 + _TtC7PostHog30PostHogPushSubscriptionHandler::workQueue);
    puVar12 = &DAT_100eb9100;
    local_d0 = param_2;
    _swift_allocObject(&DAT_100eb9100,0x18,7);
    _swift_weakInit(puVar12 + 0x10,param_2);
    puVar8 = &DAT_100eb9448;
    _swift_allocObject(&DAT_100eb9448,0x28,7);
    *(undefined **)(puVar8 + 0x10) = puVar12;
    *(undefined **)(puVar8 + 0x18) = local_c0;
    *(undefined **)(puVar8 + 0x20) = puStack_80;
    local_98 = FUN_100163ce0;
    local_b8 = PTR___NSConcreteStackBlock_100ea82a0;
    local_b0 = 0x42000000;
    local_a8 = FUN_100030410;
    puStack_a0 = &DAT_100eb9460;
    local_90 = puVar8;
    aBlock = __Block_copy(&local_b8);
    DVar9.unknown = puVar12;
    _swift_retain();
    DVar9 = Dispatch::DispatchQoS::get_unspecified(DVar9);
    local_88 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10011dab0();
    puVar8 = &DAT_100fafdf8;
    FUN_1000f7830(&DAT_100fafdf8,&DAT_100c2e830);
    puVar10 = puVar8;
    FUN_10011daf4();
    Swift::SetAlgebra::_init(puVar13,&local_88,puVar8,puVar10,DVar4.unknown,DVar9.unknown);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async
              ((DispatchQoS)0x0,
               (DispatchWorkItemFlags)(puVar13 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0)));
    __Block_release(aBlock);
    (**(code **)(lVar14 + 8))(puVar13,DVar4.unknown);
    (**(code **)(lVar15 + 8))(puVar13 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0),DVar5.unknown)
    ;
    _swift_release(local_d0);
    _swift_release(puVar12);
  }
  else {
    if (_Var1.unknown != (undefined *)0x0) {
      if ((local_c8.unknown == local_c0) && (_Var1.unknown == puStack_80)) {
        FUN_100161a8c(local_c0,puStack_80);
      }
      else {
        bVar3 = Swift::_stringCompareWithSmolCheck
                          (local_c8,_Var1,(_StringComparisonResult)(__int8)local_c0);
        local_d4 = (uint)CONCAT71(extraout_var,bVar3);
        FUN_100161a8c(_Var2.unknown,_Var1.unknown);
        if ((local_d4 & 1) == 0) goto LAB_10015ec14;
      }
    }
    _swift_bridgeObjectRelease(puStack_80);
  }
LAB_10015ebf0:
  _swift_release();
  return;
}



/* Address: 0x10015ed68 | FUN_10015ed68 */

void FUN_10015ed68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    FUN_10015edd8(param_2,param_3);
    _swift_release(param_1);
  }
  return;
}



/* Address: 0x10015edd8 | FUN_10015edd8 */

void FUN_10015edd8(undefined *param_1,undefined *param_2)

{
  bool bVar1;
  ID self;
  long unaff_x20;
  undefined8 local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  _StringGuts local_90;
  _StringGuts _Stack_88;
  undefined *local_80;
  undefined *puStack_78;
  undefined8 local_70;
  long lStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  self = *(ID *)(unaff_x20 + _TtC7PostHog30PostHogPushSubscriptionHandler::recordLock);
  objc_stub::lock(self);
  FUN_10015eefc(&local_b0);
  objc_stub::unlock(self);
  if (local_a8 == 0) {
    return;
  }
  puStack_78 = _Stack_88.unknown;
  local_80 = local_90.unknown;
  if (_Stack_88.unknown != (undefined *)0x0) {
    if (((local_90.unknown == param_1) && (_Stack_88.unknown == param_2)) ||
       (bVar1 = Swift::_stringCompareWithSmolCheck
                          (local_90,_Stack_88,(_StringComparisonResult)(__int8)param_1), bVar1)) {
      local_70 = local_b0;
      lStack_68 = local_a8;
      FUN_10000caac(&local_70);
      local_60 = local_a0;
      uStack_58 = uStack_98;
      FUN_10000caac(&local_60);
    }
    else {
      FUN_10015f330();
      FUN_10015f418(local_b0,local_a8,local_a0,uStack_98);
      _swift_bridgeObjectRelease(uStack_98);
      _swift_bridgeObjectRelease(local_a8);
    }
    FUN_1000fb4c4(&local_80,&DAT_100fb1828,&DAT_100c2f3f8);
    return;
  }
  local_70 = local_b0;
  lStack_68 = local_a8;
  FUN_10000caac(&local_70);
  local_60 = local_a0;
  uStack_58 = uStack_98;
  FUN_10000caac(&local_60);
  return;
}



/* Address: 0x10015eefc | FUN_10015eefc */

void FUN_10015eefc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long local_88;
  undefined1 auStack_80 [24];
  long local_68;
  
  FUN_10015a838(auStack_80,0x1d);
  if (local_68 == 0) {
    FUN_1000fb4c4(auStack_80,&DAT_100fae668,&DAT_100c2e4a0);
  }
  else {
    puVar4 = &DAT_100fb09d8;
    FUN_1000f7830(&DAT_100fb09d8,&DAT_100c2ee28);
    plVar5 = &local_88;
    _swift_dynamicCast(plVar5,auStack_80,PTR___type_metadata_for_Any_100eae0c0 + 8,puVar4,6);
    if (((ulong)plVar5 & 1) != 0) {
      lVar6 = local_88;
      FUN_100138efc();
      _swift_bridgeObjectRelease(local_88);
      if (lVar6 != 0) {
        if (*(long *)(lVar6 + 0x10) == 0) {
          _swift_bridgeObjectRelease(lVar6);
        }
        else {
          _swift_bridgeObjectRetain(lVar6);
          lVar7 = 0x6f54656369766564;
          uVar8 = 0xeb000000006e656b;
          FUN_100071370();
          if ((uVar8 & 1) != 0) {
            puVar1 = (undefined8 *)(*(long *)(lVar6 + 0x38) + lVar7 * 0x10);
            uVar12 = *puVar1;
            uVar9 = puVar1[1];
            _swift_bridgeObjectRetain(uVar9);
            _swift_bridgeObjectRelease(lVar6);
            if (*(long *)(lVar6 + 0x10) == 0) {
              _swift_bridgeObjectRelease(lVar6);
              _swift_bridgeObjectRelease(uVar9);
              goto LAB_10015f084;
            }
            _swift_bridgeObjectRetain(lVar6);
            lVar7 = 0x6449707061;
            uVar8 = 0;
            FUN_100071370();
            if ((uVar8 & 1) != 0) {
              puVar1 = (undefined8 *)(*(long *)(lVar6 + 0x38) + lVar7 * 0x10);
              uVar13 = *puVar1;
              uVar10 = puVar1[1];
              _swift_bridgeObjectRetain(uVar10);
              _swift_bridgeObjectRelease(lVar6);
              if (*(long *)(lVar6 + 0x10) == 0) {
                uVar14 = 0;
                uVar11 = 0;
              }
              else {
                _swift_bridgeObjectRetain(lVar6);
                uVar8 = 0;
                lVar7 = -0x2fffffffffffffea;
                FUN_100071370();
                if ((uVar8 & 1) == 0) {
                  uVar14 = 0;
                  uVar11 = 0;
                }
                else {
                  puVar1 = (undefined8 *)(*(long *)(lVar6 + 0x38) + lVar7 * 0x10);
                  uVar14 = *puVar1;
                  uVar11 = puVar1[1];
                  _swift_bridgeObjectRetain(uVar11);
                }
                _swift_bridgeObjectRelease(lVar6);
              }
              _swift_bridgeObjectRelease(lVar6);
              puVar1 = (undefined8 *)
                       (unaff_x20 +
                       _TtC7PostHog30PostHogPushSubscriptionHandler::cachedDeliveredDistinctId);
              uVar2 = *puVar1;
              uVar3 = puVar1[1];
              *puVar1 = uVar14;
              puVar1[1] = uVar11;
              _swift_bridgeObjectRetain(uVar11);
              FUN_100161a8c(uVar2,uVar3);
              goto LAB_10015f0b4;
            }
            _swift_bridgeObjectRelease(uVar9);
          }
          _swift_bridgeObjectRelease_n(lVar6,2);
        }
      }
    }
  }
LAB_10015f084:
  puVar1 = (undefined8 *)
           (unaff_x20 + _TtC7PostHog30PostHogPushSubscriptionHandler::cachedDeliveredDistinctId);
  uVar12 = *puVar1;
  uVar9 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  FUN_100161a8c(uVar12,uVar9);
  uVar12 = 0;
  uVar9 = 0;
  uVar13 = 0;
  uVar10 = 0;
  uVar14 = 0;
  uVar11 = 0;
LAB_10015f0b4:
  *param_1 = uVar12;
  param_1[1] = uVar9;
  param_1[2] = uVar13;
  param_1[3] = uVar10;
  param_1[4] = uVar14;
  param_1[5] = uVar11;
  return;
}



/* Address: 0x10015f168 | FUN_10015f168 */

void FUN_10015f168(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined *local_e0 [3];
  undefined *local_c8;
  
  puVar4 = &DAT_100fafa88;
  FUN_1000f7830(&DAT_100fafa88,&DAT_100c2f410);
  _swift_initStackObject();
  *(undefined8 *)(puVar4 + 0x18) = 4;
  *(undefined8 *)(puVar4 + 0x10) = 2;
  *(undefined8 *)(puVar4 + 0x20) = 0x6f54656369766564;
  *(undefined8 *)(puVar4 + 0x28) = 0xeb000000006e656b;
  *(undefined8 *)(puVar4 + 0x30) = param_1;
  *(undefined8 *)(puVar4 + 0x38) = param_2;
  *(undefined8 *)(puVar4 + 0x40) = 0x6449707061;
  *(undefined1 **)(puVar4 + 0x48) = &DAT_e500000000000000;
  *(undefined8 *)(puVar4 + 0x50) = param_3;
  *(undefined8 *)(puVar4 + 0x58) = param_4;
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_4);
  puVar5 = puVar4;
  FUN_1000f8280();
  _swift_setDeallocating(puVar4);
  puVar6 = &DAT_100fafa90;
  FUN_1000f7830(&DAT_100fafa90,&DAT_100c2e6f0);
  _swift_arrayDestroy(puVar4 + 0x20,2,puVar6);
  if (param_6 != 0) {
    puVar4 = puVar5;
    _swift_isUniquelyReferenced_nonNull_native(puVar5);
    local_e0[0] = puVar5;
    _swift_bridgeObjectRetain(param_6);
    FUN_100170420(param_5,param_6,0xd000000000000016,0x8000000100d94700,puVar4);
    puVar5 = local_e0[0];
  }
  puVar6 = puVar5;
  FUN_10013860c();
  puVar4 = &DAT_100fb09d8;
  FUN_1000f7830(&DAT_100fb09d8,&DAT_100c2ee28);
  local_e0[0] = puVar6;
  local_c8 = puVar4;
  FUN_10015ab00(0x1d,local_e0);
  FUN_100004594(local_e0);
  _swift_bridgeObjectRelease(puVar5);
  puVar1 = (undefined8 *)
           (unaff_x20 + _TtC7PostHog30PostHogPushSubscriptionHandler::cachedDeliveredDistinctId);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_5;
  puVar1[1] = param_6;
  FUN_100161a8c(uVar2,uVar3);
  _swift_bridgeObjectRetain(param_6);
  return;
}



/* Address: 0x10015f330 | FUN_10015f330 */

void FUN_10015f330(void)

{
  long lVar1;
  undefined *puVar2;
  Date DVar3;
  long extraout_x8;
  long unaff_x20;
  ID self;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  puVar2 = &DAT_100faf508;
  FUN_1000f7830(&DAT_100faf508,&DAT_100c2e2e0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  self = *(ID *)(unaff_x20 + 0x60);
  objc_stub::lock(self);
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  DVar3 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar3.unknown + -8) + 0x38))(auStack_50 + -extraout_x8,1,1,DVar3.unknown);
  lVar1 = _TtC7PostHog30PostHogPushSubscriptionHandler::pausedUntil;
  _swift_beginAccess(unaff_x20 + _TtC7PostHog30PostHogPushSubscriptionHandler::pausedUntil,
                     auStack_48,0x21,0);
  FUN_100155a94(auStack_50 + -extraout_x8,unaff_x20 + lVar1);
  _swift_endAccess(auStack_48);
  *(undefined1 *)(unaff_x20 + _TtC7PostHog30PostHogPushSubscriptionHandler::halted) = 0;
  *(undefined1 *)(unaff_x20 + _TtC7PostHog30PostHogPushSubscriptionHandler::didAuthRetry) = 0;
  objc_stub::unlock(self);
  return;
}



/* Address: 0x10015f418 | FUN_10015f418 */

void FUN_10015f418(ulong param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  char *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  ID self;
  String SVar7;
  String separator;
  char local_61;
  
  uVar4 = param_2;
  (**(code **)(unaff_x20 + 0x50))();
  if ((param_1 & 1) == 0) {
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
    uVar5 = 0x8000000100d94210;
    *(undefined **)(pcVar3 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
    uVar6 = 0xd000000000000043;
  }
  else {
    (**(code **)(unaff_x20 + 0x30))();
    uVar1 = param_1 & 0xffffffffffff;
    if ((uVar4 & 0x2000000000000000) != 0) {
      uVar1 = uVar4 >> 0x38 & 0xf;
    }
    if (uVar1 == 0) {
      _swift_bridgeObjectRelease(uVar4);
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
      uVar5 = 0x8000000100d942a0;
      *(undefined **)(pcVar3 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      uVar6 = 0xd000000000000039;
    }
    else {
      uVar1 = param_1;
      (**(code **)(unaff_x20 + 0x40))();
      if ((uVar1 & 1) != 0) {
        self = *(ID *)(unaff_x20 + 0x60);
        objc_stub::lock(self);
        FUN_100160090(&local_61);
        objc_stub::unlock(self);
        if (local_61 == '\x01') {
          puVar2 = &DAT_100eb9100;
          _swift_allocObject(&DAT_100eb9100,0x18,7);
          _swift_weakInit(puVar2 + 0x10);
          _swift_bridgeObjectRetain(uVar4);
          _swift_bridgeObjectRetain(param_2);
          _swift_bridgeObjectRetain(param_4);
          FUN_100162418(param_1,uVar4,param_3,param_4);
          _swift_release(puVar2);
          _swift_bridgeObjectRelease_n(uVar4,2);
          _swift_bridgeObjectRelease(param_2);
          uVar4 = param_4;
        }
        _swift_bridgeObjectRelease(uVar4);
        return;
      }
      _swift_bridgeObjectRelease(uVar4);
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
      uVar5 = 0x8000000100d94260;
      *(undefined **)(pcVar3 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      uVar6 = 0xd00000000000003c;
    }
  }
  *(undefined8 *)(pcVar3 + 0x20) = uVar6;
  *(undefined8 *)(pcVar3 + 0x28) = uVar5;
  SVar7.bridgeObject = (void *)0x20;
  SVar7.str = pcVar3;
  separator.bridgeObject = (void *)0xa;
  separator.str = (char *)0xe100000000000000;
  Swift::_print(SVar7,separator);
  _swift_release(pcVar3);
  return;
}



/* Address: 0x10015f710 | FUN_10015f710 */

void FUN_10015f710(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  char *pcVar7;
  long unaff_x20;
  String SVar8;
  String separator;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  
  puVar5 = param_1;
  (**(code **)(unaff_x20 + 0x50))();
  if (((ulong)puVar5 & 1) != 0) {
    (**(code **)(unaff_x20 + 0x40))();
    if (((ulong)puVar5 & 1) == 0) {
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
        pcVar7[0x20] = '[';
        pcVar7[0x21] = '\0';
        pcVar7[0x22] = '\0';
        pcVar7[0x23] = '\0';
        pcVar7[0x24] = '\0';
        pcVar7[0x25] = '\0';
        pcVar7[0x26] = '\0';
        pcVar7[0x27] = -0x30;
        pcVar7[0x28] = -0x30;
        pcVar7[0x29] = 'G';
        pcVar7[0x2a] = -0x27;
        pcVar7[0x2b] = '\0';
        pcVar7[0x2c] = '\x01';
        pcVar7[0x2d] = '\0';
        pcVar7[0x2e] = '\0';
        pcVar7[0x2f] = -0x80;
        SVar8.bridgeObject = (void *)0x20;
        SVar8.str = pcVar7;
        separator.bridgeObject = (void *)0xa;
        separator.str = (char *)0xe100000000000000;
        Swift::_print(SVar8,separator);
        _swift_release(pcVar7);
        return;
      }
    }
    else {
      uVar1 = *param_1;
      uVar3 = param_1[1];
      uVar2 = param_1[4];
      uVar4 = param_1[5];
      puVar6 = &DAT_100eb9100;
      _swift_allocObject(&DAT_100eb9100,0x18,7);
      _swift_weakInit(puVar6 + 0x10);
      uStack_58 = param_1[3];
      local_60 = param_1[2];
      _swift_bridgeObjectRetain(uVar3);
      FUN_10000ca28(&local_60,auStack_70);
      _swift_bridgeObjectRetain(uVar4);
      FUN_100161ac4(uVar1,uVar3,uVar2,uVar4);
      _swift_bridgeObjectRelease(uVar3);
      FUN_10000caac(&local_60);
      _swift_release(puVar6);
      _swift_bridgeObjectRelease(uVar4);
    }
  }
  return;
}



/* Address: 0x10015f8a0 | FUN_10015f8a0 */

void FUN_10015f8a0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4,
                  byte param_5)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  _StringGuts _Var4;
  _StringGuts _Var5;
  bool bVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *extraout_x1;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ID IVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  _StringGuts _Var19;
  _StringGuts _Var20;
  undefined1 auStack_158 [16];
  undefined1 auStack_148 [24];
  _StringGuts local_130;
  _StringGuts _Stack_128;
  _StringGuts local_120;
  _StringGuts _Stack_118;
  _StringGuts local_110;
  _StringGuts _Stack_108;
  undefined *local_100;
  undefined *local_f8;
  undefined *local_f0;
  undefined *puStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined *local_d0;
  undefined *puStack_c8;
  undefined *local_c0;
  undefined *puStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  _StringGuts local_a0;
  _StringGuts _Stack_98;
  undefined *local_90;
  undefined *puStack_88;
  undefined *local_80;
  undefined *puStack_78;
  
  uVar15 = param_4[2];
  uVar17 = *param_4;
  uVar18 = param_4[1];
  uVar14 = param_4[3];
  uVar12 = param_4[4];
  uVar13 = param_4[5];
  _swift_beginAccess(param_3 + 0x10,auStack_148,0,0);
  puVar7 = (undefined *)(param_3 + 0x10);
  _swift_weakLoadStrong();
  if (puVar7 == (undefined *)0x0) {
    return;
  }
  pcVar1 = *(code **)(puVar7 + 0x50);
  uVar2 = *(ulong *)(puVar7 + 0x58);
  uVar8 = uVar2;
  _swift_retain();
  (*pcVar1)();
  _swift_release(uVar2);
  lVar3 = _TtC7PostHog30PostHogPushSubscriptionHandler::recordLock;
  if ((uVar8 & 1) == 0) goto LAB_10015fc18;
  IVar16 = *(ID *)(puVar7 + _TtC7PostHog30PostHogPushSubscriptionHandler::recordLock);
  objc_stub::lock(IVar16);
  FUN_100161614(&local_130);
  objc_stub::unlock(IVar16);
  _Var20.unknown = (undefined *)param_4[1];
  _Var19.unknown = (undefined *)*param_4;
  puStack_88 = (undefined *)param_4[3];
  local_90 = (undefined *)param_4[2];
  _Stack_98.unknown = (undefined *)param_4[5];
  local_a0.unknown = (undefined *)param_4[4];
  local_80 = _Var19.unknown;
  puStack_78 = _Var20.unknown;
  if (_Stack_128.unknown == (undefined *)0x0) {
    FUN_10000ca28(&local_80,&local_100);
    FUN_10000ca28(&local_90,&local_100);
    FUN_10000ca28(&local_a0,&local_100);
    _swift_release(puVar7);
    FUN_1001553c4(local_130.unknown,0,local_120.unknown,_Stack_118.unknown,local_110.unknown,
                  _Stack_108.unknown);
    FUN_1001553c4(uVar17,uVar18,uVar15,uVar14,uVar12,uVar13);
    return;
  }
  if (((((local_130.unknown != _Var19.unknown) || (_Stack_128.unknown != _Var20.unknown)) &&
       (bVar6 = Swift::_stringCompareWithSmolCheck
                          (local_130,_Stack_128,(_StringComparisonResult)(__int8)_Var19.unknown),
       !bVar6)) ||
      (((local_120.unknown != local_90 || (_Stack_118.unknown != puStack_88)) &&
       (bVar6 = Swift::_stringCompareWithSmolCheck
                          (local_120,_Stack_118,(_StringComparisonResult)(__int8)local_90), !bVar6))
      )) || (((_Var5.unknown = _Stack_98.unknown, _Var4.unknown = local_a0.unknown,
              local_110.unknown != local_a0.unknown || (_Stack_108.unknown != _Stack_98.unknown)) &&
             (bVar6 = Swift::_stringCompareWithSmolCheck
                                (local_110,_Stack_108,
                                 (_StringComparisonResult)(__int8)local_a0.unknown), !bVar6)))) {
    _swift_release(puVar7);
    FUN_1000fb4c4(&local_130,&DAT_100fb1838,&DAT_100c2f408);
    return;
  }
  FUN_1000fb4c4(&local_130,&DAT_100fb1838,&DAT_100c2f408);
  IVar16 = *(ID *)(puVar7 + lVar3);
  objc_stub::lock(IVar16);
  FUN_10015eefc(&local_100);
  puVar9 = (undefined *)objc_stub::unlock(IVar16);
  if (local_f8 == (undefined *)0x0) {
LAB_10015fc80:
    puVar9 = &DAT_100eb93f8;
    _swift_allocObject(&DAT_100eb93f8,0x58,7);
    *(undefined **)(puVar9 + 0x10) = puVar7;
    uVar17 = *param_4;
    uVar12 = param_4[3];
    uVar18 = param_4[2];
    *(undefined8 *)(puVar9 + 0x20) = param_4[1];
    *(undefined8 *)(puVar9 + 0x18) = uVar17;
    *(undefined8 *)(puVar9 + 0x30) = uVar12;
    *(undefined8 *)(puVar9 + 0x28) = uVar18;
    uVar17 = param_4[4];
    *(undefined8 *)(puVar9 + 0x40) = param_4[5];
    *(undefined8 *)(puVar9 + 0x38) = uVar17;
    *(undefined8 *)(puVar9 + 0x48) = param_1;
    *(undefined8 *)(puVar9 + 0x50) = param_2;
    puVar10 = &DAT_100eb9100;
    _swift_allocObject(&DAT_100eb9100,0x18,7);
    _swift_weakInit(puVar10 + 0x10,puVar7);
    puVar11 = &DAT_100eb9420;
    _swift_allocObject(&DAT_100eb9420,0x49,7);
    *(undefined **)(puVar11 + 0x10) = puVar10;
    uVar17 = *param_4;
    uVar12 = param_4[3];
    uVar18 = param_4[2];
    *(undefined8 *)(puVar11 + 0x20) = param_4[1];
    *(undefined8 *)(puVar11 + 0x18) = uVar17;
    *(undefined8 *)(puVar11 + 0x30) = uVar12;
    *(undefined8 *)(puVar11 + 0x28) = uVar18;
    uVar17 = param_4[4];
    *(undefined8 *)(puVar11 + 0x40) = param_4[5];
    *(undefined8 *)(puVar11 + 0x38) = uVar17;
    puVar11[0x48] = param_5 & 1;
    FUN_10000ca28(&local_80,auStack_158);
    FUN_10000ca28(&local_90,auStack_158);
    FUN_10000ca28(&local_a0,auStack_158);
    FUN_10000ca28(&local_80,auStack_158);
    FUN_10000ca28(&local_90,auStack_158);
    FUN_10000ca28(&local_a0,auStack_158);
    _swift_bridgeObjectRetain(param_2);
    _swift_retain(puVar10);
    _swift_retain(puVar7);
    FUN_10015fea8(FUN_100163c38,puVar9,FUN_100163c90,puVar11);
    _swift_release(puVar7);
    _swift_release(puVar10);
    _swift_release(puVar9);
    puVar7 = puVar11;
  }
  else {
    puVar10 = extraout_x1;
    (**(code **)(puVar7 + 0x30))();
    if ((_Var19.unknown == puVar9) && (_Var20.unknown == puVar10)) {
      _swift_bridgeObjectRelease(puVar10);
    }
    else {
      bVar6 = Swift::_stringCompareWithSmolCheck
                        (_Var19,_Var20,(_StringComparisonResult)(__int8)puVar9);
      _swift_bridgeObjectRelease(puVar10);
      if (!bVar6) {
        local_d0 = local_100;
        puStack_c8 = local_f8;
        FUN_10000caac(&local_d0);
        puStack_b8 = puStack_e8;
        local_c0 = local_f0;
        FUN_10000caac(&local_c0);
        uStack_a8 = uStack_d8;
        local_b0 = local_e0;
        FUN_1000fb4c4(&local_b0,&DAT_100fb1828,&DAT_100c2f3f8);
        goto LAB_10015fc80;
      }
    }
    puStack_c8 = puStack_e8;
    local_d0 = local_f0;
    if ((_Var4.unknown == local_f0) && (_Var5.unknown == puStack_e8)) {
      local_c0 = local_100;
      puStack_b8 = local_f8;
      FUN_10000caac(&local_c0);
      FUN_10000caac(&local_d0);
      uStack_a8 = uStack_d8;
      local_b0 = local_e0;
      FUN_1000fb4c4(&local_b0,&DAT_100fb1828,&DAT_100c2f3f8);
    }
    else {
      bVar6 = Swift::_stringCompareWithSmolCheck
                        (_Var4,_Var5,(_StringComparisonResult)(__int8)local_f0);
      local_c0 = local_100;
      puStack_b8 = local_f8;
      FUN_10000caac(&local_c0);
      FUN_10000caac(&local_d0);
      uStack_a8 = uStack_d8;
      local_b0 = local_e0;
      FUN_1000fb4c4(&local_b0,&DAT_100fb1828,&DAT_100c2f3f8);
      if (!bVar6) goto LAB_10015fc80;
    }
    IVar16 = *(ID *)(puVar7 + lVar3);
    objc_stub::lock(IVar16);
    FUN_100161220(param_4);
    objc_stub::unlock(IVar16);
  }
LAB_10015fc18:
  _swift_release(puVar7);
  return;
}



/* Address: 0x10015fdbc | FUN_10015fdbc */

void FUN_10015fdbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_10011936c(0x4554454c4544,&DAT_e600000000000000,0xd000000000000013,0x8000000100d94940,*param_4,
                param_4[1],param_4[2],param_4[3],param_4[4],param_4[5],param_5,param_6,param_1,
                param_2);
  return;
}



/* Address: 0x10015fe2c | FUN_10015fe2c */

void FUN_10015fe2c(undefined8 *param_1,long param_2,undefined8 param_3,uint param_4)

{
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    FUN_100162f40(*param_1,*(undefined1 *)(param_1 + 1),param_3,param_4 & 1);
    _swift_release(param_2);
  }
  return;
}



/* Address: 0x10015fea8 | FUN_10015fea8 */

void FUN_10015fea8(undefined8 param_1,undefined8 param_2,undefined8 param_3,DispatchQoS param_4)

{
  DispatchWorkItemFlags DVar1;
  DispatchQoS DVar2;
  undefined *puVar3;
  void *aBlock;
  DispatchQoS DVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  long local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_a0 = *(long *)(DVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_a0 + 0x40));
  puVar6 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar2 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar7 = *(long *)(DVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar7 + 0x40));
  local_a8 = *(undefined8 *)(unaff_x20 + _TtC7PostHog30PostHogPushSubscriptionHandler::httpQueue);
  puVar3 = &DAT_100eb9290;
  _swift_allocObject(&DAT_100eb9290,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  *(undefined8 *)(puVar3 + 0x20) = param_3;
  *(undefined **)(puVar3 + 0x28) = param_4.unknown;
  local_70 = FUN_100162e9c;
  local_90 = PTR___NSConcreteStackBlock_100ea82a0;
  local_88 = 0x42000000;
  local_80 = FUN_100030410;
  puStack_78 = &DAT_100eb92a8;
  local_68 = puVar3;
  aBlock = __Block_copy(&local_90);
  _swift_retain(param_2);
  _swift_retain();
  DVar4 = Dispatch::DispatchQoS::get_unspecified(param_4);
  local_98 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_10011dab0();
  puVar3 = &DAT_100fafdf8;
  FUN_1000f7830(&DAT_100fafdf8,&DAT_100c2e830);
  puVar5 = puVar3;
  FUN_10011daf4();
  Swift::SetAlgebra::_init(puVar6,&local_98,puVar3,puVar5,DVar1.unknown,DVar4.unknown);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async
            ((DispatchQoS)0x0,
             (DispatchWorkItemFlags)(puVar6 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0)));
  __Block_release(aBlock);
  (**(code **)(local_a0 + 8))(puVar6,DVar1.unknown);
  (**(code **)(lVar7 + 8))(puVar6 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0),DVar2.unknown);
  _swift_release(local_68);
  return;
}



/* Address: 0x100160090 | FUN_100160090 */

void FUN_100160090(undefined1 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  undefined *puVar4;
  Date DVar5;
  undefined1 *puVar6;
  Date DVar7;
  undefined1 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  code *pcVar9;
  undefined1 *puVar10;
  Date DVar11;
  Date DVar12;
  long lVar13;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  
  puVar4 = &DAT_100faf508;
  FUN_1000f7830(&DAT_100faf508,&DAT_100c2e2e0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = auStack_80 + -extraout_x8;
  DVar5 = Foundation::Date::typeMetadataAccessor();
  lVar13 = *(long *)(DVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar13 + 0x40));
  DVar11.unknown = puVar10 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar2 = _TtC7PostHog30PostHogPushSubscriptionHandler::isSending;
  lVar1 = _TtC7PostHog30PostHogPushSubscriptionHandler::pausedUntil;
  DVar12.unknown = DVar11.unknown + -extraout_x12;
  if ((*(byte *)(param_2 + _TtC7PostHog30PostHogPushSubscriptionHandler::halted) & 1) == 0) {
    if (*(char *)(param_2 + _TtC7PostHog30PostHogPushSubscriptionHandler::isSending) == '\x01') {
      uVar8 = 0;
      *(undefined1 *)(param_2 + _TtC7PostHog30PostHogPushSubscriptionHandler::pendingResend) = 1;
      goto LAB_100160260;
    }
    _swift_beginAccess(param_2 + _TtC7PostHog30PostHogPushSubscriptionHandler::pausedUntil,
                       auStack_78,0,0);
    FUN_1000f8cac(param_2 + lVar1,puVar10,&DAT_100faf508,&DAT_100c2e2e0);
    puVar6 = puVar10;
    (**(code **)(lVar13 + 0x30))(puVar10,1,DVar5.unknown);
    if ((int)puVar6 == 1) {
      FUN_1000fb4c4(puVar10,&DAT_100faf508,&DAT_100c2e2e0);
    }
    else {
      DVar7 = DVar5;
      (**(code **)(lVar13 + 0x20))(DVar12.unknown,puVar10);
      Foundation::Date::init();
      bVar3 = Foundation::Date::>_infix(DVar12,DVar11,DVar7);
      pcVar9 = *(code **)(lVar13 + 8);
      (*pcVar9)(DVar11.unknown,DVar5.unknown);
      (*pcVar9)(DVar12.unknown,DVar5.unknown);
      if (bVar3) goto LAB_10016015c;
    }
    uVar8 = 1;
    *(undefined1 *)(param_2 + lVar2) = 1;
  }
  else {
LAB_10016015c:
    uVar8 = 0;
  }
LAB_100160260:
  *param_1 = uVar8;
  return;
}



/* Address: 0x100160288 | FUN_100160288 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100160288(undefined8 param_1,undefined8 param_2,long param_3,undefined *param_4,
                  undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  code *pcVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  _StringGuts _Var8;
  char *pcVar9;
  undefined *puVar10;
  undefined *puVar11;
  _StringGuts _Var12;
  ID IVar13;
  String SVar14;
  String separator;
  undefined1 auStack_b8 [24];
  undefined8 local_a0;
  long local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  _Var12.unknown = auStack_b8;
  _swift_beginAccess(param_3 + 0x10,_Var12.unknown,0,0);
  puVar6 = (undefined *)(param_3 + 0x10);
  _swift_weakLoadStrong();
  if (puVar6 == (undefined *)0x0) {
    return;
  }
                    /* WARNING: Load size is inaccurate */
  pcVar1 = *(code **)(puVar6 + 0x50);
  _Var8.unknown = puVar6[0x58];
  puVar7 = _Var8.unknown;
  _swift_retain();
  (*pcVar1)();
  _swift_release();
  if (((ulong)puVar7 & 1) == 0) {
    IVar13 = *(ID *)(puVar6 + 0x60);
    objc_stub::lock(IVar13);
    puVar6[_TtC7PostHog30PostHogPushSubscriptionHandler::isSending] = 0;
    puVar6[_TtC7PostHog30PostHogPushSubscriptionHandler::pendingResend] = 0;
    objc_stub::unlock(IVar13);
    _swift_release(puVar6);
    return;
  }
  (**(code **)(puVar6 + 0x30))();
  if (_Var8.unknown == param_4 && _Var12.unknown == param_5) {
    _swift_bridgeObjectRelease(_Var12.unknown);
  }
  else {
    bVar5 = Swift::_stringCompareWithSmolCheck
                      (_Var8,_Var12,(_StringComparisonResult)(__int8)param_4);
    _swift_bridgeObjectRelease(_Var12.unknown);
    if (!bVar5) {
      if (DAT_101057340 == '\x01') {
        pcVar9 = &DAT_100fae660;
        FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
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
        *(undefined **)(pcVar9 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
        pcVar9[0x20] = 'Z';
        pcVar9[0x21] = '\0';
        pcVar9[0x22] = '\0';
        pcVar9[0x23] = '\0';
        pcVar9[0x24] = '\0';
        pcVar9[0x25] = '\0';
        pcVar9[0x26] = '\0';
        pcVar9[0x27] = -0x30;
        pcVar9[0x28] = '`';
        pcVar9[0x29] = 'D';
        pcVar9[0x2a] = -0x27;
        pcVar9[0x2b] = '\0';
        pcVar9[0x2c] = '\x01';
        pcVar9[0x2d] = '\0';
        pcVar9[0x2e] = '\0';
        pcVar9[0x2f] = -0x80;
        SVar14.bridgeObject = (void *)0x20;
        SVar14.str = pcVar9;
        separator.bridgeObject = (void *)0xa;
        separator.str = (char *)0xe100000000000000;
        Swift::_print(SVar14,separator);
        _swift_release(pcVar9);
      }
      IVar13 = *(ID *)(puVar6 + 0x60);
      objc_stub::lock(IVar13);
      lVar3 = _TtC7PostHog30PostHogPushSubscriptionHandler::isSending;
      puVar6[_TtC7PostHog30PostHogPushSubscriptionHandler::isSending] = 0;
      lVar4 = _TtC7PostHog30PostHogPushSubscriptionHandler::pendingResend;
      cVar2 = puVar6[_TtC7PostHog30PostHogPushSubscriptionHandler::pendingResend];
      puVar6[_TtC7PostHog30PostHogPushSubscriptionHandler::pendingResend] = 0;
      objc_stub::unlock(IVar13);
      if (cVar2 == '\x01') {
        IVar13 = *(ID *)(puVar6 + 0x60);
        objc_stub::lock(IVar13);
        if (puVar6[lVar3] == '\x01') {
          puVar6[lVar4] = 1;
          objc_stub::unlock(IVar13);
        }
        else {
          objc_stub::unlock(IVar13);
          IVar13 = *(ID *)(puVar6 + _TtC7PostHog30PostHogPushSubscriptionHandler::recordLock);
          objc_stub::lock(IVar13);
          FUN_10015eefc(&local_a0);
          objc_stub::unlock(IVar13);
          if (local_98 != 0) {
            uStack_68 = uStack_78;
            local_70 = local_80;
            FUN_10015f330();
            FUN_10015f418(local_a0,local_98,local_90,uStack_88);
            _swift_bridgeObjectRelease(uStack_88);
            _swift_bridgeObjectRelease(local_98);
            _swift_release(puVar6);
            FUN_1000fb4c4(&local_70,&DAT_100fb1828,&DAT_100c2f3f8);
            return;
          }
        }
      }
      goto LAB_10016061c;
    }
  }
  puVar7 = &DAT_100eb9240;
  _swift_allocObject(&DAT_100eb9240,0x58,7);
  *(undefined **)(puVar7 + 0x10) = puVar6;
  *(undefined **)(puVar7 + 0x18) = param_4;
  *(undefined **)(puVar7 + 0x20) = param_5;
  *(undefined8 *)(puVar7 + 0x28) = param_6;
  *(undefined8 *)(puVar7 + 0x30) = param_7;
  *(undefined8 *)(puVar7 + 0x38) = param_8;
  *(undefined8 *)(puVar7 + 0x40) = param_9;
  *(undefined8 *)(puVar7 + 0x48) = param_1;
  *(undefined8 *)(puVar7 + 0x50) = param_2;
  puVar10 = &DAT_100eb9100;
  _swift_allocObject(&DAT_100eb9100,0x18,7);
  _swift_weakInit(puVar10 + 0x10,puVar6);
  puVar11 = &DAT_100eb9268;
  _swift_allocObject(&DAT_100eb9268,0x48,7);
  *(undefined **)(puVar11 + 0x10) = puVar10;
  *(undefined8 *)(puVar11 + 0x18) = param_6;
  *(undefined8 *)(puVar11 + 0x20) = param_7;
  *(undefined8 *)(puVar11 + 0x28) = param_8;
  *(undefined8 *)(puVar11 + 0x30) = param_9;
  *(undefined **)(puVar11 + 0x38) = param_4;
  *(undefined **)(puVar11 + 0x40) = param_5;
  _swift_bridgeObjectRetain(param_2);
  _swift_retain(puVar10);
  _swift_bridgeObjectRetain_n(param_5,2);
  _swift_bridgeObjectRetain_n(param_7,2);
  _swift_bridgeObjectRetain_n(param_9,2);
  _swift_retain(puVar6);
  FUN_10015fea8(FUN_100162df0,puVar7,FUN_100162e5c,puVar11);
  _swift_release(puVar6);
  _swift_release(puVar10);
  _swift_release(puVar7);
  puVar6 = puVar11;
LAB_10016061c:
  _swift_release(puVar6);
  return;
}



/* Address: 0x100160640 | FUN_100160640 */

void FUN_100160640(long *param_1,long param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5,undefined *param_6,undefined *param_7,undefined *param_8)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  char *pcVar6;
  ID IVar7;
  ID self;
  long lVar8;
  String SVar9;
  String separator;
  undefined1 auStack_158 [24];
  _StringGuts local_140;
  _StringGuts local_138;
  _StringGuts local_130;
  _StringGuts _Stack_128;
  undefined *local_120;
  undefined *puStack_118;
  undefined8 local_110;
  long local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined *local_e0;
  undefined *puStack_d8;
  undefined *local_d0;
  undefined *puStack_c8;
  undefined *local_c0;
  undefined *puStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined *local_a0;
  undefined *puStack_98;
  undefined *local_90;
  undefined *puStack_88;
  undefined *local_80;
  undefined *puStack_78;
  
  _swift_beginAccess(param_2 + 0x10,auStack_158,0,0);
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 == 0) {
    return;
  }
  lVar8 = *param_1;
  lVar2 = param_1[1];
  IVar7 = *(ID *)(param_2 + 0x60);
  objc_stub::lock(IVar7);
  lVar3 = _TtC7PostHog30PostHogPushSubscriptionHandler::isSending;
  *(undefined1 *)(param_2 + _TtC7PostHog30PostHogPushSubscriptionHandler::isSending) = 0;
  lVar4 = _TtC7PostHog30PostHogPushSubscriptionHandler::pendingResend;
  cVar1 = *(char *)(param_2 + _TtC7PostHog30PostHogPushSubscriptionHandler::pendingResend);
  *(undefined1 *)(param_2 + _TtC7PostHog30PostHogPushSubscriptionHandler::pendingResend) = 0;
  objc_stub::unlock(IVar7);
  if (((char)lVar2 == '\x01') || (99 < lVar8 - 200U)) {
    FUN_100163400(lVar8,(char)lVar2,param_1[3],(char)param_1[4],param_3,param_4,param_5,param_6);
    goto LAB_100160920;
  }
  self = *(ID *)(param_2 + _TtC7PostHog30PostHogPushSubscriptionHandler::recordLock);
  objc_stub::lock(self);
  FUN_10015eefc(&local_140);
  if (local_138.unknown != (undefined *)0x0) {
    local_e0 = local_140.unknown;
    puStack_d8 = local_138.unknown;
    if (((local_140.unknown == param_3) && (local_138.unknown == param_4)) ||
       (bVar5 = Swift::_stringCompareWithSmolCheck
                          (local_140,local_138,(_StringComparisonResult)(__int8)param_3), bVar5)) {
      puStack_c8 = _Stack_128.unknown;
      local_d0 = local_130.unknown;
      if ((local_130.unknown == param_5) && (_Stack_128.unknown == param_6)) {
        FUN_10000caac(&local_e0);
        FUN_10000caac(&local_d0);
        puStack_b8 = puStack_118;
        local_c0 = local_120;
        FUN_1000fb4c4(&local_c0,&DAT_100fb1828,&DAT_100c2f3f8);
      }
      else {
        bVar5 = Swift::_stringCompareWithSmolCheck
                          (local_130,_Stack_128,(_StringComparisonResult)(__int8)param_5);
        FUN_10000caac(&local_e0);
        FUN_10000caac(&local_d0);
        puStack_b8 = puStack_118;
        local_c0 = local_120;
        FUN_1000fb4c4(&local_c0,&DAT_100fb1828,&DAT_100c2f3f8);
        if (!bVar5) goto LAB_100160890;
      }
      FUN_10015f168(param_3,param_4,param_5,param_6,param_7,param_8);
      local_a0 = param_7;
      puStack_98 = param_8;
      local_90 = param_3;
      puStack_88 = param_4;
      local_80 = param_5;
      puStack_78 = param_6;
      FUN_100161220(&local_a0);
    }
    else {
      FUN_10000caac(&local_e0);
      puStack_b8 = _Stack_128.unknown;
      local_c0 = local_130.unknown;
      FUN_10000caac(&local_c0);
      puStack_98 = puStack_118;
      local_a0 = local_120;
      FUN_1000fb4c4(&local_a0,&DAT_100fb1828,&DAT_100c2f3f8);
    }
  }
LAB_100160890:
  objc_stub::unlock(self);
  FUN_10015f330();
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
    pcVar6[0x20] = '.';
    pcVar6[0x21] = '\0';
    pcVar6[0x22] = '\0';
    pcVar6[0x23] = '\0';
    pcVar6[0x24] = '\0';
    pcVar6[0x25] = '\0';
    pcVar6[0x26] = '\0';
    pcVar6[0x27] = -0x30;
    pcVar6[0x28] = -0x40;
    pcVar6[0x29] = 'D';
    pcVar6[0x2a] = -0x27;
    pcVar6[0x2b] = '\0';
    pcVar6[0x2c] = '\x01';
    pcVar6[0x2d] = '\0';
    pcVar6[0x2e] = '\0';
    pcVar6[0x2f] = -0x80;
    SVar9.bridgeObject = (void *)0x20;
    SVar9.str = pcVar6;
    separator.bridgeObject = (void *)0xa;
    separator.str = (char *)0xe100000000000000;
    Swift::_print(SVar9,separator);
    _swift_release(pcVar6);
  }
LAB_100160920:
  if (cVar1 != '\0') {
    objc_stub::lock(IVar7);
    if (*(char *)(param_2 + lVar3) == '\x01') {
      *(undefined1 *)(param_2 + lVar4) = 1;
      objc_stub::unlock(IVar7);
    }
    else {
      objc_stub::unlock(IVar7);
      IVar7 = *(ID *)(param_2 + _TtC7PostHog30PostHogPushSubscriptionHandler::recordLock);
      objc_stub::lock(IVar7);
      FUN_10015eefc(&local_110);
      objc_stub::unlock(IVar7);
      if (local_108 != 0) {
        uStack_a8 = uStack_e8;
        local_b0 = local_f0;
        FUN_10015f330();
        FUN_10015f418(local_110,local_108,local_100,uStack_f8);
        _swift_bridgeObjectRelease(uStack_f8);
        _swift_bridgeObjectRelease(local_108);
        FUN_1000fb4c4(&local_b0,&DAT_100fb1828,&DAT_100c2f3f8);
      }
    }
  }
  _swift_release(param_2);
  return;
}



/* Address: 0x100160a00 | FUN_100160a00 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100160a00(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  DispatchTime DVar1;
  dispatch_semaphore_t pdVar2;
  undefined *puVar3;
  ID self;
  DispatchTime DVar4;
  long extraout_x8;
  long extraout_x12;
  code *pcVar5;
  DispatchTime DVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined1 auStack_d0 [8];
  code *local_c8;
  undefined8 local_c0;
  code *pcStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [24];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined8 local_68;
  
  local_c8 = param_1;
  local_c0 = param_4;
  pcStack_b8 = param_3;
  DVar1 = Dispatch::DispatchTime::typeMetadataAccessor();
  lVar7 = *(long *)(DVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar7 + 0x40));
  DVar6.unknown = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  pdVar2 = _dispatch_semaphore_create(0);
  puVar3 = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  self = objc_stub::init((ID)puVar3);
  puVar3 = &DAT_100eb92e0;
  _swift_allocObject(&DAT_100eb92e0,0x31,7);
  puVar8 = (undefined8 *)(puVar3 + 0x10);
  *puVar8 = 0;
  puVar3[0x18] = 1;
  *(undefined8 *)(puVar3 + 0x20) = 0;
  *(undefined8 *)(puVar3 + 0x28) = 0;
  puVar3[0x30] = 1;
  DVar4.unknown = &DAT_100eb9308;
  _swift_allocObject(&DAT_100eb9308,0x28,7);
  *(ID *)(DVar4.unknown + 0x10) = self;
  *(undefined **)(DVar4.unknown + 0x18) = puVar3;
  *(dispatch_semaphore_t *)(DVar4.unknown + 0x20) = pdVar2;
  _swift_retain(puVar3);
  (*local_c8)(FUN_100162f00,DVar4.unknown);
  _swift_release();
  Dispatch::DispatchTime::now(DVar4);
  Dispatch::__infix(DVar6,30.0);
  pcVar5 = *(code **)(lVar7 + 8);
  (*pcVar5)(DVar6.unknown,DVar1.unknown);
  (extension_Dispatch)::__C::OS_dispatch_semaphore::wait
            ((DispatchTime)(DVar6.unknown + -extraout_x12));
  (*pcVar5)(DVar6.unknown + -extraout_x12,DVar1.unknown);
  objc_stub::lock(self);
  _swift_beginAccess(puVar8,auStack_a8,0,0);
  uStack_78 = *(undefined8 *)(puVar3 + 0x28);
  local_80 = *(undefined8 *)(puVar3 + 0x20);
  uStack_88 = *(undefined8 *)(puVar3 + 0x18);
  local_90 = *puVar8;
  local_70 = puVar3[0x30];
  local_68 = local_80;
  FUN_1000f8cac(&local_68,auStack_b0,&DAT_100fb1830,&DAT_100c2f400);
  objc_stub::unlock(self);
  (*pcStack_b8)(&local_90);
  FUN_100162f0c(&local_90);
  _swift_release(puVar3);
  return;
}



/* Address: 0x100160c14 | FUN_100160c14 */

void FUN_100160c14(undefined8 *param_1,ID param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [24];
  undefined8 local_48;
  
  objc_stub::lock(param_2);
  _swift_beginAccess(param_3 + 0x10,auStack_60,1,0);
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  uVar2 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  *(undefined8 *)(param_3 + 0x18) = param_1[1];
  *(undefined8 *)(param_3 + 0x10) = uVar2;
  *(undefined8 *)(param_3 + 0x28) = uVar4;
  *(undefined8 *)(param_3 + 0x20) = uVar3;
  *(undefined1 *)(param_3 + 0x30) = *(undefined1 *)(param_1 + 4);
  local_48 = param_1[2];
  FUN_1000f8cac(&local_48,auStack_68,&DAT_100fb1830,&DAT_100c2f400);
  _swift_errorRelease(uVar1);
  objc_stub::unlock(param_2);
  (extension_Dispatch)::__C::OS_dispatch_semaphore::signal();
  return;
}



/* Address: 0x100160cbc | FUN_100160cbc */

void FUN_100160cbc(double param_1,long param_2,long param_3,code *param_4)

{
  void *pvVar1;
  char *pcVar2;
  _StringGuts extraout_x1;
  char *pcVar3;
  char *pcVar4;
  void *pvVar5;
  ID self;
  String SVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String separator;
  char *local_b8;
  void *local_b0;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    self = *(ID *)(param_2 + 0x60);
    objc_stub::lock(self);
    _swift_beginAccess(param_3 + 0x10,auStack_90,0,0);
    if ((*(byte *)(param_3 + 0x10) & 1) == 0) {
      pcVar3 = &DAT_00000001;
      pvVar5 = (void *)0x0;
      _swift_beginAccess(param_3 + 0x10,auStack_a8);
      *(undefined1 *)(param_3 + 0x10) = 1;
      objc_stub::unlock(self);
      local_b8 = (char *)0x0;
      local_b0 = (void *)0xe000000000000000;
      Swift::_StringGuts::grow(0x51,extraout_x1);
      SVar6.bridgeObject = (void *)0x8000000100d94400;
      SVar6.str = (char *)0xd00000000000002d;
      SVar10.bridgeObject = pvVar5;
      SVar10.str = pcVar3;
      Swift::String::append(SVar6,SVar10);
      pcVar3 = 
      PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
      ;
      double::_write((undefined *)&local_b8,param_1);
      SVar7.bridgeObject = (void *)0x8000000100d94430;
      SVar7.str = (char *)0xd000000000000022;
      SVar11.bridgeObject = pvVar5;
      SVar11.str = pcVar3;
      Swift::String::append(SVar7,SVar11);
      pvVar1 = local_b0;
      pcVar3 = local_b8;
      if ((DAT_101057340 & 1) != 0) {
        pcVar2 = &DAT_100fae660;
        FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
        pcVar4 = (char *)0x7;
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
        local_b8 = (char *)0x676f4874736f505b;
        local_b0 = (void *)0xea0000000000205d;
        SVar8.bridgeObject = pvVar1;
        SVar8.str = pcVar3;
        SVar12.bridgeObject = pvVar5;
        SVar12.str = pcVar4;
        Swift::String::append(SVar8,SVar12);
        *(undefined **)(pcVar2 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
        *(char **)(pcVar2 + 0x20) = local_b8;
        *(void **)(pcVar2 + 0x28) = local_b0;
        SVar9.bridgeObject = (void *)0x20;
        SVar9.str = pcVar2;
        separator.bridgeObject = (void *)0xa;
        separator.str = (char *)0xe100000000000000;
        Swift::_print(SVar9,separator);
        _swift_release(pcVar2);
      }
      _swift_bridgeObjectRelease(pvVar1);
      (*param_4)(0,0);
    }
    else {
      objc_stub::unlock(self);
    }
    _swift_release(param_2);
  }
  return;
}



/* Address: 0x100160ecc | FUN_100160ecc */

void FUN_100160ecc(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = &DAT_100eb9100;
  _swift_allocObject(&DAT_100eb9100,0x18,7);
  _swift_weakInit(puVar1 + 0x10,param_7);
  puVar2 = &DAT_100eb9218;
  _swift_allocObject(&DAT_100eb9218,0x50,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  *(undefined8 *)(puVar2 + 0x30) = param_6;
  *(undefined8 *)(puVar2 + 0x38) = param_8;
  *(undefined8 *)(puVar2 + 0x40) = param_9;
  *(undefined8 *)(puVar2 + 0x48) = param_10;
  _swift_retain(puVar1);
  _swift_bridgeObjectRetain(param_4);
  _swift_bridgeObjectRetain(param_6);
  _swift_retain(param_8);
  _swift_retain(param_10);
  (*param_1)(param_3,param_4,param_5,param_6,FUN_100162dbc,puVar2);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return;
}



/* Address: 0x100160fd4 | FUN_100160fd4 */

void FUN_100160fd4(undefined8 param_1,ulong param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  code *param_9)

{
  char *pcVar1;
  undefined8 *puVar2;
  char *pcVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  char *pcVar12;
  char *pcVar13;
  void *pvVar14;
  ID self;
  String SVar15;
  String SVar16;
  String SVar17;
  String separator;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(param_3 + 0x10,auStack_78,0,0);
  param_3 = param_3 + 0x10;
  _swift_weakLoadStrong();
  if (param_3 != 0) {
    self = *(ID *)(param_3 + 0x60);
    objc_stub::lock(self);
    if (param_2 != 0) {
      pcVar4 = *(code **)(param_3 + 0x50);
      uVar11 = param_2;
      _swift_bridgeObjectRetain();
      (*pcVar4)();
      if ((uVar11 & 1) == 0) {
        _swift_bridgeObjectRelease(param_2);
      }
      else {
        puVar2 = (undefined8 *)
                 (param_3 + _TtC7PostHog30PostHogPushSubscriptionHandler::cachedIdentityToken);
        uVar5 = *puVar2;
        uVar8 = puVar2[1];
        uVar6 = puVar2[2];
        uVar9 = puVar2[3];
        uVar7 = puVar2[4];
        uVar10 = puVar2[5];
        *puVar2 = param_1;
        puVar2[1] = param_2;
        puVar2[2] = param_4;
        puVar2[3] = param_5;
        puVar2[4] = param_6;
        puVar2[5] = param_7;
        _swift_bridgeObjectRetain(param_5);
        _swift_bridgeObjectRetain(param_7);
        FUN_1001553c4(uVar5,uVar8,uVar6,uVar9,uVar7,uVar10);
      }
    }
    _swift_beginAccess(param_8 + 0x10,auStack_90,0,0);
    if ((*(byte *)(param_8 + 0x10) & 1) == 0) {
      pvVar14 = (void *)0x0;
      _swift_beginAccess(param_8 + 0x10,auStack_a8,1);
      *(undefined1 *)(param_8 + 0x10) = 1;
      objc_stub::unlock(self);
      pcVar3 = "ity token to push request.";
      if (param_2 != 0) {
        pcVar3 = "ider completed nil).";
      }
      if ((DAT_101057340 & 1) != 0) {
        pcVar1 = (char *)0xd000000000000044;
        if (param_2 != 0) {
          pcVar1 = (char *)0xd000000000000038;
        }
        pcVar12 = &DAT_100fae660;
        FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
        pcVar13 = (char *)0x7;
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
        SVar15.bridgeObject = (void *)((ulong)pcVar3 | 0x8000000000000000);
        SVar15.str = pcVar1;
        SVar17.bridgeObject = pvVar14;
        SVar17.str = pcVar13;
        Swift::String::append(SVar15,SVar17);
        *(undefined **)(pcVar12 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
        pcVar12[0x20] = '[';
        pcVar12[0x21] = 'P';
        pcVar12[0x22] = 'o';
        pcVar12[0x23] = 's';
        pcVar12[0x24] = 't';
        pcVar12[0x25] = 'H';
        pcVar12[0x26] = 'o';
        pcVar12[0x27] = 'g';
        pcVar12[0x28] = ']';
        pcVar12[0x29] = ' ';
        pcVar12[0x2a] = '\0';
        pcVar12[0x2b] = '\0';
        pcVar12[0x2c] = '\0';
        pcVar12[0x2d] = '\0';
        pcVar12[0x2e] = '\0';
        pcVar12[0x2f] = -0x16;
        SVar16.bridgeObject = (void *)0x20;
        SVar16.str = pcVar12;
        separator.bridgeObject = (void *)0xa;
        separator.str = (char *)0xe100000000000000;
        Swift::_print(SVar16,separator);
        _swift_release(pcVar12);
      }
      _swift_bridgeObjectRelease((ulong)pcVar3 | 0x8000000000000000);
      (*param_9)(param_1,param_2);
    }
    else {
      objc_stub::unlock(self);
    }
    _swift_release(param_3);
  }
  return;
}



/* Address: 0x100161220 | FUN_100161220 */

void FUN_100161220(long *param_1)

{
  bool bVar1;
  URL UVar2;
  URL UVar3;
  long extraout_x8;
  long lVar4;
  long lVar5;
  String SVar6;
  long local_110;
  long lStack_108;
  long local_100;
  long lStack_f8;
  long local_f0;
  long lStack_e8;
  undefined1 auStack_e0 [16];
  _StringGuts local_d0;
  _StringGuts _Stack_c8;
  _StringGuts local_c0;
  _StringGuts _Stack_b8;
  _StringGuts local_b0;
  _StringGuts _Stack_a8;
  undefined *local_a0;
  undefined *puStack_98;
  undefined *local_90;
  undefined *puStack_88;
  undefined *local_80;
  undefined *puStack_78;
  
  lStack_e8 = *param_1;
  local_f0 = param_1[1];
  lStack_f8 = param_1[2];
  local_100 = param_1[3];
  lStack_108 = param_1[4];
  local_110 = param_1[5];
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar5 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar5 + 0x40));
  lVar4 = (long)&local_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_100161614(&local_d0);
  puStack_78 = (undefined *)param_1[1];
  local_80 = (undefined *)*param_1;
  puStack_88 = (undefined *)param_1[3];
  local_90 = (undefined *)param_1[2];
  puStack_98 = (undefined *)param_1[5];
  local_a0 = (undefined *)param_1[4];
  if (_Stack_c8.unknown == (undefined *)0x0) {
    FUN_10000ca28(&local_80,auStack_e0);
    FUN_10000ca28(&local_90,auStack_e0);
    FUN_10000ca28(&local_a0,auStack_e0);
    FUN_1001553c4(local_d0.unknown,0,local_c0.unknown,_Stack_b8.unknown,local_b0.unknown,
                  _Stack_a8.unknown);
    FUN_1001553c4(lStack_e8,local_f0,lStack_f8,local_100,lStack_108,local_110);
  }
  else {
    if ((((local_d0.unknown == local_80) && (_Stack_c8.unknown == puStack_78)) ||
        (bVar1 = Swift::_stringCompareWithSmolCheck
                           (local_d0,_Stack_c8,(_StringComparisonResult)(__int8)local_80), bVar1))
       && (((local_c0.unknown == local_90 && (_Stack_b8.unknown == puStack_88)) ||
           (bVar1 = Swift::_stringCompareWithSmolCheck
                              (local_c0,_Stack_b8,(_StringComparisonResult)(__int8)local_90), bVar1)
           ))) {
      if ((local_b0.unknown == local_a0) && (_Stack_a8.unknown == puStack_98)) {
        UVar3.unknown = &DAT_100c2f408;
        FUN_1000fb4c4(&local_d0,&DAT_100fb1838);
      }
      else {
        bVar1 = Swift::_stringCompareWithSmolCheck
                          (local_b0,_Stack_a8,(_StringComparisonResult)(__int8)local_a0);
        UVar3.unknown = &DAT_100c2f408;
        FUN_1000fb4c4(&local_d0,&DAT_100fb1838);
        if (!bVar1) {
          return;
        }
      }
      SVar6.bridgeObject = (void *)0x8000000100d93ba0;
      SVar6.str = (char *)0xd00000000000001d;
      Foundation::URL::appendingPathComponent(SVar6,UVar3);
      FUN_1001723c8(lVar4);
      (**(code **)(lVar5 + 8))(lVar4,UVar2.unknown);
      return;
    }
    FUN_1000fb4c4(&local_d0,&DAT_100fb1838,&DAT_100c2f408);
  }
  return;
}



/* Address: 0x100161444 | FUN_100161444 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001001614d8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100161444(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_198;
  undefined1 *puStack_190;
  undefined *local_180;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  puVar1 = &DAT_100fb1840;
  FUN_1000f7830(&DAT_100fb1840,&DAT_100c2f420);
  _swift_initStackObject();
  *(undefined8 *)(puVar1 + 0x18) = 6;
  *(undefined8 *)(puVar1 + 0x10) = 3;
  puVar2 = PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218;
  puVar3 = PTR___type_metadata_for_Swift_String_100eac208;
  local_198 = (undefined *)0x74636e6974736964;
  puStack_190 = (undefined1 *)0xea00000000006449;
  Swift::AnyHashable::_init
            (puVar1 + 0x20,puVar1,PTR___type_metadata_for_Swift_String_100eac208,
             PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218);
  uStack_58 = param_2[1];
  local_60 = *param_2;
  *(undefined **)(puVar1 + 0x60) = puVar3;
  *(undefined8 *)(puVar1 + 0x50) = uStack_58;
  *(undefined8 *)(puVar1 + 0x48) = local_60;
  local_198 = (undefined *)0x6f54656369766564;
  puStack_190 = (undefined1 *)0xeb000000006e656b;
  FUN_10000ca28(&local_60,&local_70);
  Swift::AnyHashable::_init(puVar1 + 0x68,&local_60,puVar3,puVar2);
  uStack_68 = param_2[3];
  local_70 = param_2[2];
  *(undefined **)(puVar1 + 0xa8) = puVar3;
  *(undefined8 *)(puVar1 + 0x98) = uStack_68;
  *(undefined8 *)(puVar1 + 0x90) = local_70;
  local_198 = (undefined *)0x6449707061;
  puStack_190 = &DAT_e500000000000000;
  FUN_10000ca28(&local_70,&local_80);
  Swift::AnyHashable::_init(puVar1 + 0xb0,&local_70,puVar3,puVar2);
  uStack_78 = param_2[5];
  local_80 = param_2[4];
  *(undefined **)(puVar1 + 0xf0) = puVar3;
  *(undefined8 *)(puVar1 + 0xe0) = uStack_78;
  *(undefined8 *)(puVar1 + 0xd8) = local_80;
  FUN_10000ca28(&local_80,&local_198);
  puVar2 = puVar1;
  FUN_1000f87e4();
  _swift_setDeallocating(puVar1);
  puVar3 = &DAT_100fae448;
  FUN_1000f7830(&DAT_100fae448,&DAT_100c2de18);
  _swift_arrayDestroy(puVar1 + 0x20,3,puVar3);
  puVar1 = &DAT_100fb09d8;
  FUN_1000f7830(&DAT_100fb09d8,&DAT_100c2ee28);
  local_198 = puVar2;
  local_180 = puVar1;
  FUN_10015ab00(0x1e,&local_198);
  FUN_100004594(&local_198);
  return;
}



/* Address: 0x100161614 | FUN_100161614 */

void FUN_100161614(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long local_78;
  undefined1 auStack_70 [24];
  long local_58;
  
  FUN_10015a838(auStack_70,0x1e);
  if (local_58 == 0) {
    FUN_1000fb4c4(auStack_70,&DAT_100fae668,&DAT_100c2e4a0);
  }
  else {
    puVar2 = &DAT_100fb09d8;
    FUN_1000f7830(&DAT_100fb09d8,&DAT_100c2ee28);
    plVar3 = &local_78;
    _swift_dynamicCast(plVar3,auStack_70,PTR___type_metadata_for_Any_100eae0c0 + 8,puVar2,6);
    if (((ulong)plVar3 & 1) != 0) {
      lVar4 = local_78;
      FUN_100138efc();
      _swift_bridgeObjectRelease(local_78);
      if (lVar4 != 0) {
        if (*(long *)(lVar4 + 0x10) == 0) {
LAB_10016180c:
          _swift_bridgeObjectRelease(lVar4);
        }
        else {
          _swift_bridgeObjectRetain(lVar4);
          lVar5 = 0x74636e6974736964;
          uVar6 = 0xea00000000006449;
          FUN_100071370();
          if ((uVar6 & 1) != 0) {
            puVar1 = (undefined8 *)(*(long *)(lVar4 + 0x38) + lVar5 * 0x10);
            uVar10 = *puVar1;
            uVar7 = puVar1[1];
            _swift_bridgeObjectRetain(uVar7);
            _swift_bridgeObjectRelease(lVar4);
            if (*(long *)(lVar4 + 0x10) == 0) {
              _swift_bridgeObjectRelease(lVar4);
              _swift_bridgeObjectRelease(uVar7);
              goto LAB_1001617a0;
            }
            _swift_bridgeObjectRetain(lVar4);
            lVar5 = 0x6f54656369766564;
            uVar6 = 0xeb000000006e656b;
            FUN_100071370();
            if ((uVar6 & 1) != 0) {
              puVar1 = (undefined8 *)(*(long *)(lVar4 + 0x38) + lVar5 * 0x10);
              uVar11 = *puVar1;
              uVar8 = puVar1[1];
              _swift_bridgeObjectRetain(uVar8);
              _swift_bridgeObjectRelease(lVar4);
              if (*(long *)(lVar4 + 0x10) == 0) {
                _swift_bridgeObjectRelease(uVar7);
                _swift_bridgeObjectRelease(uVar8);
                goto LAB_10016180c;
              }
              _swift_bridgeObjectRetain(lVar4);
              lVar5 = 0x6449707061;
              uVar6 = 0;
              FUN_100071370();
              if ((uVar6 & 1) != 0) {
                puVar1 = (undefined8 *)(*(long *)(lVar4 + 0x38) + lVar5 * 0x10);
                uVar12 = *puVar1;
                uVar9 = puVar1[1];
                _swift_bridgeObjectRetain(uVar9);
                _swift_bridgeObjectRelease_n(lVar4,2);
                goto LAB_1001617b8;
              }
              _swift_bridgeObjectRelease(uVar7);
              uVar7 = uVar8;
            }
            _swift_bridgeObjectRelease(uVar7);
          }
          _swift_bridgeObjectRelease_n(lVar4,2);
        }
      }
    }
  }
LAB_1001617a0:
  uVar10 = 0;
  uVar7 = 0;
  uVar11 = 0;
  uVar8 = 0;
  uVar12 = 0;
  uVar9 = 0;
LAB_1001617b8:
  *param_1 = uVar10;
  param_1[1] = uVar7;
  param_1[2] = uVar11;
  param_1[3] = uVar8;
  param_1[4] = uVar12;
  param_1[5] = uVar9;
  return;
}



/* Address: 0x100161838 | FUN_100161838 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100161838(void)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x58));
  FUN_1000fb4c4(unaff_x20 + _TtC7PostHog30PostHogPushSubscriptionHandler::pausedUntil,&DAT_100faf508
                ,&DAT_100c2e2e0);
  puVar1 = (undefined8 *)
           (unaff_x20 + _TtC7PostHog30PostHogPushSubscriptionHandler::cachedIdentityToken);
  FUN_1001553c4(*puVar1,puVar1[1],puVar1[2],puVar1[3],puVar1[4],puVar1[5]);
  FUN_100161a8c(*(undefined8 *)
                 (unaff_x20 +
                 _TtC7PostHog30PostHogPushSubscriptionHandler::cachedDeliveredDistinctId),
                ((undefined8 *)
                (unaff_x20 + _TtC7PostHog30PostHogPushSubscriptionHandler::cachedDeliveredDistinctId
                ))[1]);
  _swift_release(*(undefined8 *)
                  (unaff_x20 + _TtC7PostHog30PostHogPushSubscriptionHandler::contextChangedToken));
  return;
}



/* Address: 0x100161924 | FUN_100161924 */

void FUN_100161924(void)

{
  FUN_100161838();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100161948 | FUN_100161948 */

void FUN_100161948(void)

{
  FUN_100161950(0);
  return;
}



/* Address: 0x100161950 | FUN_100161950 */

void FUN_100161950(undefined8 param_1)

{
  if (DAT_100fb16f8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100ca5408);
  return;
}



/* Address: 0x100161988 | FUN_100161988 */

void FUN_100161988(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *local_c8;
  undefined *puStack_c0;
  undefined *local_b8;
  undefined *puStack_b0;
  undefined *local_a8;
  undefined *puStack_a0;
  undefined *local_98;
  undefined *puStack_90;
  undefined *local_88;
  long local_80;
  undefined *puStack_78;
  undefined *local_70;
  undefined *puStack_68;
  undefined *local_60;
  undefined *puStack_58;
  undefined *local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  
  local_c8 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
  puStack_c0 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
  puVar1 = PTR___value_witness_table_for_Builtin_UnknownObject_100eabd30 + 0x40;
  local_a8 = PTR___value_witness_table_for_____>____100eae0d0 + 0x40;
  lVar2 = 0x13f;
  local_b8 = puStack_c0;
  puStack_b0 = puVar1;
  puStack_a0 = local_a8;
  local_98 = local_a8;
  puStack_90 = puVar1;
  local_88 = local_c8;
  FUN_10012bf84();
  if (param_2 < 0x40) {
    local_80 = *(long *)(lVar2 + -8) + 0x40;
    puStack_78 = &DAT_100c2f370;
    local_70 = &DAT_100c2f370;
    puStack_68 = &DAT_100c2f370;
    local_60 = &DAT_100c2f388;
    puStack_58 = &DAT_100c2f370;
    local_30 = &DAT_100c2f3a0;
    puStack_28 = &DAT_100c2f3b8;
    local_50 = puVar1;
    puStack_48 = puVar1;
    local_40 = puVar1;
    puStack_38 = puVar1;
    _swift_updateClassMetadata2(param_1,0x100,0x15,&local_c8,param_1 + 0x50);
  }
  return;
}



/* Address: 0x100161a68 | FUN_100161a68 */

void FUN_100161a68(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = param_2[2];
  uVar5 = param_2[5];
  uVar4 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  param_1[5] = uVar5;
  param_1[4] = uVar4;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x100161a7c | FUN_100161a7c */

undefined1  [16] FUN_100161a7c(void)

{
  return ZEXT816(0x100eb90d0);
}



/* Address: 0x100161a8c | FUN_100161a8c */

void FUN_100161a8c(undefined8 param_1,long param_2)

{
  if (param_2 == 1) {
    return;
  }
  _swift_bridgeObjectRelease(param_2);
  return;
}



/* Address: 0x100161aa0 | FUN_100161aa0 */

void FUN_100161aa0(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x100161ac4 | FUN_100161ac4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100161ac4(undefined *param_1,undefined *param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5,OS_dispatch_queue *param_6,undefined8 *param_7,
                  undefined4 param_8)

{
  long *plVar1;
  undefined8 *puVar2;
  _StringGuts _Var3;
  _StringGuts _Var4;
  undefined *puVar5;
  DispatchWorkItemFlags qos;
  undefined *puVar6;
  QoSClass QVar7;
  bool bVar8;
  DispatchWorkItemFlags DVar9;
  DispatchQoS DVar10;
  undefined7 extraout_var;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  void *pvVar15;
  undefined *puVar16;
  char *pcVar17;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar18;
  long extraout_x12;
  DispatchTime DVar19;
  long lVar20;
  undefined8 uVar21;
  DispatchTime DVar22;
  ID self;
  undefined8 uVar23;
  undefined8 uVar24;
  double dVar25;
  String SVar26;
  String SVar27;
  String separator;
  String separator_00;
  undefined auStack_1b0 [8];
  undefined *local_1a8;
  OS_dispatch_queue *local_1a0;
  DispatchWorkItemFlags local_198;
  undefined *local_190;
  long local_188;
  long local_180;
  undefined *local_178;
  undefined *local_170;
  undefined *local_168;
  DispatchTime local_160;
  undefined *local_158;
  code *local_150;
  code *local_148;
  DispatchWorkItemFlags local_140;
  undefined *local_138;
  code *local_130;
  undefined *local_128;
  undefined *local_120;
  undefined *local_118;
  undefined *local_110;
  undefined *local_108;
  undefined *local_100;
  undefined *local_f8;
  undefined8 local_f0;
  code *local_e8;
  undefined *puStack_e0;
  code *local_d8;
  undefined *local_d0;
  undefined1 auStack_c8 [24];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  local_128 = param_4;
  local_118 = param_3;
  local_110 = param_2;
  local_108 = param_1;
  DVar9 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_148 = *(code **)(DVar9.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_148 + 0x40));
  puVar12 = auStack_1b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar10 = Dispatch::DispatchQoS::typeMetadataAccessor();
  local_150 = *(code **)(DVar10.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_150 + 0x40));
  local_140.unknown = puVar12 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_158 = (undefined *)Dispatch::DispatchTime::typeMetadataAccessor();
  local_168 = *(undefined **)(local_158 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_168 + 0x40));
  DVar22.unknown =
       puVar12 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0) +
       -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_160.unknown = DVar22.unknown + -extraout_x12;
  QVar7 = Dispatch::DispatchQoS::QoSClass::typeMetadataAccessor();
  local_170 = (undefined *)CONCAT71(extraout_var,QVar7.value);
  local_178 = *(undefined **)(local_170 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_178 + 0x40));
  DVar19.unknown = DVar22.unknown + -extraout_x12 + -(extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  uStack_88 = param_7[1];
  uStack_90 = *param_7;
  uStack_98 = param_7[3];
  local_a0 = param_7[2];
  uStack_a8 = param_7[5];
  local_b0 = param_7[4];
  puVar11 = &DAT_100eb9330;
  _swift_allocObject(&DAT_100eb9330,0x49,7);
  *(OS_dispatch_queue **)(puVar11 + 0x10) = param_6;
  uVar21 = *param_7;
  uVar24 = param_7[3];
  uVar23 = param_7[2];
  *(undefined8 *)(puVar11 + 0x20) = param_7[1];
  *(undefined8 *)(puVar11 + 0x18) = uVar21;
  *(undefined8 *)(puVar11 + 0x30) = uVar24;
  *(undefined8 *)(puVar11 + 0x28) = uVar23;
  uVar21 = param_7[4];
  *(undefined8 *)(puVar11 + 0x40) = param_7[5];
  *(undefined8 *)(puVar11 + 0x38) = uVar21;
  local_130 = (code *)CONCAT44(local_130._4_4_,param_8);
  puVar11[0x48] = (char)param_8;
  plVar1 = (long *)(*(long *)(param_5 + 0x28) + PostHogConfig::pushIdentityProvider);
  _swift_beginAccess(plVar1,auStack_c8,0,0);
  lVar18 = *plVar1;
  if (lVar18 == 0) {
    if ((DAT_101057340 & 1) == 0) {
      _swift_retain(param_6);
      FUN_10000ca28(&uStack_90,&local_f8);
      FUN_10000ca28(&local_a0,&local_f8);
      FUN_10000ca28(&local_b0,&local_f8);
    }
    else {
      pcVar17 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      _swift_allocObject();
      pcVar17[0x18] = '\x02';
      pcVar17[0x19] = '\0';
      pcVar17[0x1a] = '\0';
      pcVar17[0x1b] = '\0';
      pcVar17[0x1c] = '\0';
      pcVar17[0x1d] = '\0';
      pcVar17[0x1e] = '\0';
      pcVar17[0x1f] = '\0';
      pcVar17[0x10] = '\x01';
      pcVar17[0x11] = '\0';
      pcVar17[0x12] = '\0';
      pcVar17[0x13] = '\0';
      pcVar17[0x14] = '\0';
      pcVar17[0x15] = '\0';
      pcVar17[0x16] = '\0';
      pcVar17[0x17] = '\0';
      *(undefined **)(pcVar17 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      pcVar17[0x20] = 'O';
      pcVar17[0x21] = '\0';
      pcVar17[0x22] = '\0';
      pcVar17[0x23] = '\0';
      pcVar17[0x24] = '\0';
      pcVar17[0x25] = '\0';
      pcVar17[0x26] = '\0';
      pcVar17[0x27] = -0x30;
      pcVar17[0x28] = -0x20;
      pcVar17[0x29] = 'B';
      pcVar17[0x2a] = -0x27;
      pcVar17[0x2b] = '\0';
      pcVar17[0x2c] = '\x01';
      pcVar17[0x2d] = '\0';
      pcVar17[0x2e] = '\0';
      pcVar17[0x2f] = -0x80;
      _swift_retain(param_6);
      FUN_10000ca28(&uStack_90,&local_f8);
      FUN_10000ca28(&local_a0,&local_f8);
      FUN_10000ca28(&local_b0,&local_f8);
      SVar27.bridgeObject = (void *)0x20;
      SVar27.str = pcVar17;
      separator_00.bridgeObject = (void *)0xa;
      separator_00.str = (char *)0xe100000000000000;
      Swift::_print(SVar27,separator_00);
      _swift_release(pcVar17);
    }
    FUN_10015f8a0(0,0,param_6,param_7,(uint)local_130 & 1);
  }
  else {
    lVar20 = plVar1[1];
    self = *(ID *)(param_5 + 0x60);
    local_1a0 = param_6;
    local_198.unknown = puVar12;
    local_190 = DVar9.unknown;
    local_138 = DVar10.unknown;
    _swift_retain(param_6);
    FUN_10000ca28(&uStack_90,&local_f8);
    FUN_10000ca28(&local_a0,&local_f8);
    FUN_10000ca28(&local_b0,&local_f8);
    local_188 = lVar20;
    local_180 = lVar18;
    FUN_100011128(lVar18,lVar20);
    objc_stub::lock(self);
    puVar2 = (undefined8 *)
             (param_5 + _TtC7PostHog30PostHogPushSubscriptionHandler::cachedIdentityToken);
    lVar18 = puVar2[1];
    local_120 = param_5;
    if (lVar18 != 0) {
      uVar21 = *puVar2;
      _Var3.unknown = (undefined *)puVar2[4];
      _Var4.unknown = (undefined *)puVar2[5];
      if (((((undefined *)puVar2[2] == local_108) && ((undefined *)puVar2[3] == local_110)) ||
          (bVar8 = Swift::_stringCompareWithSmolCheck
                             ((undefined *)puVar2[2],(undefined *)puVar2[3],
                              (_StringComparisonResult)(__int8)local_108), bVar8)) &&
         (((_Var3.unknown == local_118 && (_Var4.unknown == local_128)) ||
          (bVar8 = Swift::_stringCompareWithSmolCheck
                             (_Var3,_Var4,(_StringComparisonResult)(__int8)local_118), bVar8)))) {
        _swift_bridgeObjectRetain(lVar18);
        objc_stub::unlock(self);
        if ((DAT_101057340 & 1) != 0) {
          pcVar17 = &DAT_100fae660;
          FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
          _swift_allocObject();
          pcVar17[0x18] = '\x02';
          pcVar17[0x19] = '\0';
          pcVar17[0x1a] = '\0';
          pcVar17[0x1b] = '\0';
          pcVar17[0x1c] = '\0';
          pcVar17[0x1d] = '\0';
          pcVar17[0x1e] = '\0';
          pcVar17[0x1f] = '\0';
          pcVar17[0x10] = '\x01';
          pcVar17[0x11] = '\0';
          pcVar17[0x12] = '\0';
          pcVar17[0x13] = '\0';
          pcVar17[0x14] = '\0';
          pcVar17[0x15] = '\0';
          pcVar17[0x16] = '\0';
          pcVar17[0x17] = '\0';
          *(undefined **)(pcVar17 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
          pcVar17[0x20] = ':';
          pcVar17[0x21] = '\0';
          pcVar17[0x22] = '\0';
          pcVar17[0x23] = '\0';
          pcVar17[0x24] = '\0';
          pcVar17[0x25] = '\0';
          pcVar17[0x26] = '\0';
          pcVar17[0x27] = -0x30;
          pcVar17[0x28] = '0';
          pcVar17[0x29] = 'C';
          pcVar17[0x2a] = -0x27;
          pcVar17[0x2b] = '\0';
          pcVar17[0x2c] = '\x01';
          pcVar17[0x2d] = '\0';
          pcVar17[0x2e] = '\0';
          pcVar17[0x2f] = -0x80;
          SVar26.bridgeObject = (void *)0x20;
          SVar26.str = pcVar17;
          separator.bridgeObject = (void *)0xa;
          separator.str = (char *)0xe100000000000000;
          Swift::_print(SVar26,separator);
          _swift_release(pcVar17);
        }
        FUN_10015f8a0(uVar21,lVar18,local_1a0,param_7,(uint)local_130 & 1);
        _swift_bridgeObjectRelease(lVar18);
        FUN_100004550(local_180,local_188);
        goto LAB_1001623f0;
      }
    }
    objc_stub::unlock(self);
    puVar12 = &DAT_100eb9150;
    _swift_allocObject(&DAT_100eb9150,0x11,7);
    puVar16 = local_120;
    puVar12[0x10] = 0;
    dVar25 = *(double *)(local_120 + 0x10);
    FUN_1000f8a74(0);
    puVar14 = local_170;
    puVar13 = local_178;
    (**(code **)(local_178 + 0x68))
              (DVar19.unknown,
               *(undefined4 *)
                PTR___enum_case_for_Dispatch_DispatchQoS_QoSClass_default_Dispatch_DispatchQoS_QoSClass_Type___>_Dispatch_DispatchQoS_QoSClass_100eae690
               ,local_170);
    local_1a0 = (extension_Dispatch)::__C::OS_dispatch_queue::global
                          ((QoSClass)(__int8)DVar19.unknown);
    (**(code **)(puVar13 + 8))(DVar19.unknown,puVar14);
    Dispatch::DispatchTime::now(DVar19);
    DVar19.unknown = local_160.unknown;
    Dispatch::__infix(DVar22,dVar25);
    puVar5 = local_158;
    local_130 = *(code **)(local_168 + 8);
    (*local_130)(DVar22.unknown,local_158);
    puVar13 = &DAT_100eb9100;
    _swift_allocObject(&DAT_100eb9100,0x18,7);
    _swift_weakInit(puVar13 + 0x10,puVar16);
    puVar14 = &DAT_100eb9358;
    _swift_allocObject(&DAT_100eb9358,0x38,7);
    *(undefined **)(puVar14 + 0x10) = puVar13;
    *(undefined **)(puVar14 + 0x18) = puVar12;
    *(double *)(puVar14 + 0x20) = dVar25;
    *(code **)(puVar14 + 0x28) = FUN_100163b1c;
    *(undefined **)(puVar14 + 0x30) = puVar11;
    local_d8 = thunk_FUN_100163b64;
    local_f8 = PTR___NSConcreteStackBlock_100ea82a0;
    local_f0 = 0x42000000;
    local_e8 = FUN_100030410;
    puStack_e0 = &DAT_100eb9370;
    local_1a8 = puVar12;
    local_d0 = puVar14;
    pvVar15 = __Block_copy(&local_f8);
    _swift_retain(puVar13);
    _swift_retain(puVar12);
    DVar10.unknown = puVar11;
    _swift_retain();
    qos.unknown = local_140.unknown;
    DVar10 = Dispatch::DispatchQoS::get_unspecified(DVar10);
    local_100 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10011dab0();
    puVar12 = &DAT_100fafdf8;
    local_170 = DVar10.unknown;
    FUN_1000f7830(&DAT_100fafdf8,&DAT_100c2e830);
    puVar16 = puVar12;
    local_178 = puVar12;
    FUN_10011daf4();
    puVar14 = local_190;
    DVar9.unknown = local_198.unknown;
    local_168 = puVar16;
    Swift::SetAlgebra::_init(local_198.unknown,&local_100,puVar12,puVar16,local_190,DVar10.unknown);
    (extension_Dispatch)::__C::OS_dispatch_queue::_asyncAfter(DVar19,(DispatchQoS)qos.unknown,DVar9)
    ;
    __Block_release(pvVar15);
    local_148 = *(code **)(local_148 + 8);
    (*local_148)(DVar9.unknown,puVar14);
    local_150 = *(code **)(local_150 + 8);
    (*local_150)(qos.unknown,local_138);
    (*local_130)(DVar19.unknown,puVar5);
    puVar12 = local_d0;
    _swift_release(puVar13);
    _swift_release(puVar12);
    puVar16 = local_120;
    local_130 = *(code **)(local_120 + _TtC7PostHog30PostHogPushSubscriptionHandler::mintQueue);
    puVar12 = &DAT_100eb93a8;
    _swift_allocObject(&DAT_100eb93a8,0x60,7);
    puVar6 = local_110;
    puVar5 = local_128;
    lVar20 = local_180;
    lVar18 = local_188;
    puVar13 = local_1a8;
    *(long *)(puVar12 + 0x10) = local_180;
    *(long *)(puVar12 + 0x18) = local_188;
    *(undefined **)(puVar12 + 0x20) = local_108;
    *(undefined **)(puVar12 + 0x28) = local_110;
    *(undefined **)(puVar12 + 0x30) = local_118;
    *(undefined **)(puVar12 + 0x38) = local_128;
    *(undefined **)(puVar12 + 0x40) = puVar16;
    *(undefined **)(puVar12 + 0x48) = local_1a8;
    *(code **)(puVar12 + 0x50) = FUN_100163b1c;
    *(undefined **)(puVar12 + 0x58) = puVar11;
    local_d8 = thunk_FUN_100163bc0;
    local_f8 = PTR___NSConcreteStackBlock_100ea82a0;
    local_f0 = 0x42000000;
    local_e8 = FUN_100030410;
    puStack_e0 = &DAT_100eb93c0;
    local_d0 = puVar12;
    pvVar15 = __Block_copy(&local_f8);
    FUN_100011128(lVar20,lVar18);
    _swift_retain(puVar13);
    _swift_retain(puVar11);
    _swift_bridgeObjectRetain(puVar6);
    _swift_bridgeObjectRetain(puVar5);
    DVar10.unknown = local_120;
    _swift_retain();
    Dispatch::DispatchQoS::get_unspecified(DVar10);
    local_100 = PTR___swiftEmptyArrayStorage_100eae0d8;
    Swift::SetAlgebra::_init(DVar9.unknown,&local_100,local_178,local_168,puVar14,local_170);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
    __Block_release(pvVar15);
    FUN_100004550(lVar20,lVar18);
    (*local_148)(DVar9.unknown,puVar14);
    (*local_150)(qos.unknown,local_138);
    puVar12 = local_d0;
    _swift_release(puVar11);
    _swift_release(puVar13);
    puVar11 = puVar12;
  }
LAB_1001623f0:
  _swift_release(puVar11);
  return;
}



/* Address: 0x100162418 | FUN_100162418 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100162418(undefined *param_1,undefined *param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5,undefined8 param_6,code *param_7,undefined8 param_8,
                  undefined *param_9,undefined8 param_10,undefined *param_11,undefined *param_12)

{
  long *plVar1;
  undefined8 *puVar2;
  _StringGuts _Var3;
  _StringGuts _Var4;
  code *pcVar5;
  DispatchTime DVar6;
  undefined *puVar7;
  DispatchWorkItemFlags qos;
  undefined *puVar8;
  QoSClass QVar9;
  bool bVar10;
  DispatchWorkItemFlags DVar11;
  DispatchQoS DVar12;
  undefined7 extraout_var;
  DispatchTime DVar13;
  undefined *puVar14;
  void *pvVar15;
  DispatchQoS DVar16;
  undefined *puVar17;
  char *pcVar18;
  long extraout_x8;
  long extraout_x8_00;
  undefined *puVar19;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined *puVar20;
  long lVar21;
  long extraout_x12;
  ID self;
  undefined8 uVar22;
  long lVar23;
  double dVar24;
  String SVar25;
  String SVar26;
  String separator;
  String separator_00;
  undefined8 auStack_1b0 [2];
  undefined auStack_1a0 [8];
  undefined *local_198;
  undefined *local_190;
  undefined8 local_188;
  DispatchWorkItemFlags local_180;
  undefined *local_178;
  long local_170;
  long local_168;
  undefined *local_160;
  long local_158;
  code *local_150;
  DispatchTime local_148;
  undefined *local_140;
  DispatchTime local_138;
  undefined *local_130;
  long local_128;
  code *local_120;
  DispatchWorkItemFlags local_118;
  undefined *local_110;
  undefined *local_108;
  undefined *local_100;
  OS_dispatch_queue *local_f8;
  undefined *local_f0;
  undefined *local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  code *local_b0;
  undefined *puStack_a8;
  code *local_a0;
  undefined *local_98;
  undefined1 auStack_90 [32];
  
  local_d0 = param_12;
  local_f0 = param_4;
  local_e8 = param_3;
  local_e0 = param_2;
  local_d8 = param_1;
  DVar11 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_120 = *(code **)(DVar11.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_120 + 0x40));
  puVar14 = auStack_1a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar12 = Dispatch::DispatchQoS::typeMetadataAccessor();
  local_128 = *(long *)(DVar12.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_128 + 0x40));
  puVar19 = puVar14 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_118.unknown = puVar19;
  local_130 = (undefined *)Dispatch::DispatchTime::typeMetadataAccessor();
  local_140 = *(undefined **)(local_130 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_140 + 0x40));
  puVar19 = puVar19 + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_148.unknown = puVar19;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_138.unknown = puVar19 + -extraout_x12;
  QVar9 = Dispatch::DispatchQoS::QoSClass::typeMetadataAccessor();
  local_150 = (code *)CONCAT71(extraout_var,QVar9.value);
  local_158 = *(long *)(local_150 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_158 + 0x40));
  puVar20 = puVar19 + -extraout_x12 + -(extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  DVar16.unknown = &DAT_100eb9128;
  local_160 = puVar20;
  _swift_allocObject(&DAT_100eb9128,0x48,7);
  puVar19 = local_d0;
  *(undefined8 *)(DVar16.unknown + 0x10) = param_6;
  *(code **)(DVar16.unknown + 0x18) = param_7;
  local_100 = param_11;
  *(undefined8 *)(DVar16.unknown + 0x20) = param_8;
  *(undefined **)(DVar16.unknown + 0x28) = param_9;
  local_108 = param_9;
  *(undefined8 *)(DVar16.unknown + 0x30) = param_10;
  *(undefined **)(DVar16.unknown + 0x38) = param_11;
  *(undefined **)(DVar16.unknown + 0x40) = local_d0;
  plVar1 = (long *)(*(long *)(param_5 + 0x28) + PostHogConfig::pushIdentityProvider);
  local_f8 = (OS_dispatch_queue *)param_7;
  _swift_beginAccess(plVar1,auStack_90,0,0);
  lVar21 = *plVar1;
  if (lVar21 == 0) {
    if ((DAT_101057340 & 1) == 0) {
      _swift_retain(param_6);
      _swift_bridgeObjectRetain(param_8);
      _swift_bridgeObjectRetain(param_10);
      _swift_bridgeObjectRetain(puVar19);
    }
    else {
      pcVar18 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
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
      *(undefined **)(pcVar18 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      pcVar18[0x20] = 'O';
      pcVar18[0x21] = '\0';
      pcVar18[0x22] = '\0';
      pcVar18[0x23] = '\0';
      pcVar18[0x24] = '\0';
      pcVar18[0x25] = '\0';
      pcVar18[0x26] = '\0';
      pcVar18[0x27] = -0x30;
      pcVar18[0x28] = -0x20;
      pcVar18[0x29] = 'B';
      pcVar18[0x2a] = -0x27;
      pcVar18[0x2b] = '\0';
      pcVar18[0x2c] = '\x01';
      pcVar18[0x2d] = '\0';
      pcVar18[0x2e] = '\0';
      pcVar18[0x2f] = -0x80;
      _swift_retain(param_6);
      _swift_bridgeObjectRetain(param_8);
      _swift_bridgeObjectRetain(param_10);
      _swift_bridgeObjectRetain(puVar19);
      SVar26.bridgeObject = (void *)0x20;
      SVar26.str = pcVar18;
      separator_00.bridgeObject = (void *)0xa;
      separator_00.str = (char *)0xe100000000000000;
      Swift::_print(SVar26,separator_00);
      _swift_release(pcVar18);
    }
    *(undefined **)(puVar20 + -0x10) = puVar19;
    FUN_100160288(0,0,param_6,local_f8,param_8,local_108,param_10,local_100);
  }
  else {
    lVar23 = plVar1[1];
    self = *(ID *)(param_5 + 0x60);
    local_180.unknown = puVar14;
    local_178 = DVar11.unknown;
    local_110 = DVar12.unknown;
    _swift_retain(param_6);
    local_188 = param_8;
    _swift_bridgeObjectRetain(param_8);
    _swift_bridgeObjectRetain(param_10);
    _swift_bridgeObjectRetain(puVar19);
    local_170 = lVar23;
    local_168 = lVar21;
    FUN_100011128(lVar21,lVar23);
    objc_stub::lock(self);
    puVar2 = (undefined8 *)
             (param_5 + _TtC7PostHog30PostHogPushSubscriptionHandler::cachedIdentityToken);
    lVar21 = puVar2[1];
    if (lVar21 != 0) {
      uVar22 = *puVar2;
      _Var3.unknown = (undefined *)puVar2[4];
      _Var4.unknown = (undefined *)puVar2[5];
      if (((((undefined *)puVar2[2] == local_d8) && ((undefined *)puVar2[3] == local_e0)) ||
          (bVar10 = Swift::_stringCompareWithSmolCheck
                              ((undefined *)puVar2[2],(undefined *)puVar2[3],
                               (_StringComparisonResult)(__int8)local_d8), bVar10)) &&
         (((_Var3.unknown == local_e8 && (_Var4.unknown == local_f0)) ||
          (bVar10 = Swift::_stringCompareWithSmolCheck
                              (_Var3,_Var4,(_StringComparisonResult)(__int8)local_e8), bVar10)))) {
        _swift_bridgeObjectRetain(lVar21);
        objc_stub::unlock(self);
        if ((DAT_101057340 & 1) != 0) {
          pcVar18 = &DAT_100fae660;
          FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
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
          *(undefined **)(pcVar18 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
          pcVar18[0x20] = ':';
          pcVar18[0x21] = '\0';
          pcVar18[0x22] = '\0';
          pcVar18[0x23] = '\0';
          pcVar18[0x24] = '\0';
          pcVar18[0x25] = '\0';
          pcVar18[0x26] = '\0';
          pcVar18[0x27] = -0x30;
          pcVar18[0x28] = '0';
          pcVar18[0x29] = 'C';
          pcVar18[0x2a] = -0x27;
          pcVar18[0x2b] = '\0';
          pcVar18[0x2c] = '\x01';
          pcVar18[0x2d] = '\0';
          pcVar18[0x2e] = '\0';
          pcVar18[0x2f] = -0x80;
          SVar25.bridgeObject = (void *)0x20;
          SVar25.str = pcVar18;
          separator.bridgeObject = (void *)0xa;
          separator.str = (char *)0xe100000000000000;
          Swift::_print(SVar25,separator);
          _swift_release(pcVar18);
        }
        *(undefined **)(puVar20 + -0x10) = puVar19;
        FUN_100160288(uVar22,lVar21,param_6,local_f8,local_188,local_108,param_10,local_100);
        _swift_bridgeObjectRelease(lVar21);
        FUN_100004550(local_168,local_170);
        goto LAB_100162ce0;
      }
    }
    objc_stub::unlock(self);
    puVar19 = &DAT_100eb9150;
    _swift_allocObject(&DAT_100eb9150,0x11,7);
    puVar19[0x10] = 0;
    dVar24 = *(double *)(param_5 + 0x10);
    FUN_1000f8a74(0);
    pcVar5 = local_150;
    lVar21 = local_158;
    DVar13.unknown = local_160;
    (**(code **)(local_158 + 0x68))
              (local_160,
               *(undefined4 *)
                PTR___enum_case_for_Dispatch_DispatchQoS_QoSClass_default_Dispatch_DispatchQoS_QoSClass_Type___>_Dispatch_DispatchQoS_QoSClass_100eae690
               ,local_150);
    local_f8 = (extension_Dispatch)::__C::OS_dispatch_queue::global
                         ((QoSClass)(__int8)DVar13.unknown);
    (**(code **)(lVar21 + 8))(DVar13.unknown,pcVar5);
    DVar6.unknown = local_148.unknown;
    Dispatch::DispatchTime::now(DVar13);
    DVar13.unknown = local_138.unknown;
    Dispatch::__infix(DVar6,dVar24);
    puVar7 = local_130;
    local_150 = *(code **)(local_140 + 8);
    (*local_150)(DVar6.unknown,local_130);
    puVar20 = &DAT_100eb9100;
    _swift_allocObject(&DAT_100eb9100,0x18,7);
    _swift_weakInit(puVar20 + 0x10,param_5);
    puVar14 = &DAT_100eb9178;
    _swift_allocObject(&DAT_100eb9178,0x38,7);
    *(undefined **)(puVar14 + 0x10) = puVar20;
    *(undefined **)(puVar14 + 0x18) = puVar19;
    *(double *)(puVar14 + 0x20) = dVar24;
    *(code **)(puVar14 + 0x28) = FUN_100162d10;
    *(undefined **)(puVar14 + 0x30) = DVar16.unknown;
    local_a0 = thunk_FUN_100163b64;
    local_c0 = PTR___NSConcreteStackBlock_100ea82a0;
    local_b8 = 0x42000000;
    local_b0 = FUN_100030410;
    puStack_a8 = &DAT_100eb9190;
    local_190 = DVar16.unknown;
    local_d0 = puVar19;
    local_98 = puVar14;
    pvVar15 = __Block_copy(&local_c0);
    _swift_retain(puVar20);
    _swift_retain(puVar19);
    _swift_retain();
    qos.unknown = local_118.unknown;
    DVar16 = Dispatch::DispatchQoS::get_unspecified(DVar16);
    local_c8 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10011dab0();
    puVar19 = &DAT_100fafdf8;
    local_100 = DVar16.unknown;
    FUN_1000f7830(&DAT_100fafdf8,&DAT_100c2e830);
    puVar17 = puVar19;
    local_108 = puVar19;
    FUN_10011daf4();
    puVar14 = local_178;
    DVar11.unknown = local_180.unknown;
    local_140 = puVar17;
    Swift::SetAlgebra::_init(local_180.unknown,&local_c8,puVar19,puVar17,local_178,DVar16.unknown);
    (extension_Dispatch)::__C::OS_dispatch_queue::_asyncAfter
              (DVar13,(DispatchQoS)qos.unknown,DVar11);
    __Block_release(pvVar15);
    local_f8 = *(OS_dispatch_queue **)(local_120 + 8);
    (*(code *)local_f8)(DVar11.unknown,puVar14);
    local_120 = *(code **)(local_128 + 8);
    (*local_120)(qos.unknown,local_110);
    (*local_150)(DVar13.unknown,puVar7);
    puVar19 = local_98;
    _swift_release(puVar20);
    _swift_release(puVar19);
    local_128 = *(long *)(param_5 + _TtC7PostHog30PostHogPushSubscriptionHandler::mintQueue);
    puVar19 = &DAT_100eb91c8;
    local_198 = param_5;
    _swift_allocObject(&DAT_100eb91c8,0x60,7);
    puVar8 = local_d0;
    puVar17 = local_e0;
    puVar7 = local_f0;
    lVar23 = local_168;
    lVar21 = local_170;
    puVar20 = local_190;
    *(long *)(puVar19 + 0x10) = local_168;
    *(long *)(puVar19 + 0x18) = local_170;
    *(undefined **)(puVar19 + 0x20) = local_d8;
    *(undefined **)(puVar19 + 0x28) = local_e0;
    *(undefined **)(puVar19 + 0x30) = local_e8;
    *(undefined **)(puVar19 + 0x38) = local_f0;
    *(undefined **)(puVar19 + 0x40) = param_5;
    *(undefined **)(puVar19 + 0x48) = local_d0;
    *(code **)(puVar19 + 0x50) = FUN_100162d10;
    *(undefined **)(puVar19 + 0x58) = local_190;
    local_a0 = thunk_FUN_100163bc0;
    local_c0 = PTR___NSConcreteStackBlock_100ea82a0;
    local_b8 = 0x42000000;
    local_b0 = FUN_100030410;
    puStack_a8 = &DAT_100eb91e0;
    local_98 = puVar19;
    pvVar15 = __Block_copy(&local_c0);
    FUN_100011128(lVar23,lVar21);
    _swift_retain(puVar8);
    _swift_retain(puVar20);
    _swift_bridgeObjectRetain(puVar17);
    _swift_bridgeObjectRetain(puVar7);
    DVar16.unknown = local_198;
    _swift_retain();
    Dispatch::DispatchQoS::get_unspecified(DVar16);
    local_c8 = PTR___swiftEmptyArrayStorage_100eae0d8;
    Swift::SetAlgebra::_init(DVar11.unknown,&local_c8,local_108,local_140,puVar14,local_100);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
    __Block_release(pvVar15);
    FUN_100004550(lVar23,lVar21);
    (*(code *)local_f8)(DVar11.unknown,puVar14);
    (*local_120)(qos.unknown,local_110);
    DVar16.unknown = local_98;
    _swift_release(puVar20);
    _swift_release(local_d0);
  }
LAB_100162ce0:
  _swift_release(DVar16.unknown);
  return;
}



/* Address: 0x100162d08 | FUN_100162d08 */

void FUN_100162d08(void)

{
  FUN_100163c48(0x48);
  return;
}



/* Address: 0x100162d10 | FUN_100162d10 */

void FUN_100162d10(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_100160288(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Address: 0x100162d40 | FUN_100162d40 */

void FUN_100162d40(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100162d50 | thunk_FUN_100163b64 */

void thunk_FUN_100163b64(void)

{
  long unaff_x20;
  
  FUN_100160cbc(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Address: 0x100162d54 | FUN_100162d54 */

void FUN_100162d54(long param_1,long param_2)

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



/* Address: 0x100162d68 | FUN_100162d68 */

void FUN_100162d68(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100162d70 | thunk_FUN_100163b74 */

void thunk_FUN_100163b74(void)

{
  FUN_100163b74();
  return;
}



/* Address: 0x100162d74 | thunk_FUN_100163bc0 */

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



/* Address: 0x100162d78 | FUN_100162d78 */

void FUN_100162d78(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_deallocObject();
  return;
}



/* Address: 0x100162dbc | FUN_100162dbc */

void FUN_100162dbc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_100160fd4(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Address: 0x100162dec | thunk_FUN_100163bf4 */

void thunk_FUN_100163bf4(void)

{
  FUN_100163bf4();
  return;
}



/* Address: 0x100162df0 | FUN_100162df0 */

void FUN_100162df0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10011936c(0x54534f50,&DAT_e400000000000000,0xd000000000000011,0x8000000100d946e0,
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50),param_1,param_2)
  ;
  return;
}



/* Address: 0x100162e5c | FUN_100162e5c */

void FUN_100162e5c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100160640(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Address: 0x100162e70 | FUN_100162e70 */

void FUN_100162e70(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}


