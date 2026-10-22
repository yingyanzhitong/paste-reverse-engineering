/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100120234 | PostHogConfig::setCapturePushNotificationOpened: */

/* Function Stack Size: 0x14 bytes */

void PostHogConfig::setCapturePushNotificationOpened_(ID param_1,SEL param_2,bool param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = capturePushNotificationOpened;
  _swift_beginAccess(param_1 + capturePushNotificationOpened,auStack_48,1,0);
  *(char *)(param_1 + lVar1) = (char)param_3;
  return;
}



/* Address: 0x100120284 | FUN_100120284 */

void FUN_100120284(undefined1 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = PostHogConfig::capturePushNotificationOpened;
  _swift_beginAccess(unaff_x20 + PostHogConfig::capturePushNotificationOpened,auStack_48,1,0);
  *(undefined1 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Address: 0x1001202d0 | FUN_1001202d0 */

undefined1  [16] FUN_1001202d0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = PostHogConfig::capturePushNotificationOpened;
  _swift_beginAccess(unaff_x20 + PostHogConfig::capturePushNotificationOpened,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x100120310 | PostHogConfig::pushIdentityProvider */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID PostHogConfig::pushIdentityProvider(ID param_1,SEL param_2)

{
  long *plVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  undefined *local_78;
  undefined8 local_70;
  code *local_68;
  undefined *puStack_60;
  long local_58;
  long local_50;
  undefined1 auStack_48 [24];
  
  plVar1 = (long *)(param_1 + pushIdentityProvider);
  _swift_beginAccess(plVar1,auStack_48,0,0);
  local_58 = *plVar1;
  if (local_58 == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    lVar4 = plVar1[1];
    local_78 = PTR___NSConcreteStackBlock_100ea82a0;
    local_70 = 0x42000000;
    local_68 = FUN_100120418;
    puStack_60 = &DAT_100eb8218;
    local_50 = lVar4;
    pvVar3 = __Block_copy(&local_78);
    lVar2 = local_50;
    _swift_retain(lVar4);
    _swift_release(lVar2);
  }
  return (ID)pvVar3;
}



/* Address: 0x1001203c0 | FUN_1001203c0 */

undefined1  [16] FUN_1001203c0(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + PostHogConfig::pushIdentityProvider);
  _swift_beginAccess(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  FUN_100011128(*(undefined8 *)*pauVar1,*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Address: 0x100120418 | FUN_100120418 */

void FUN_100120418(long param_1,undefined8 param_2,undefined8 param_3,void *param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined *puVar4;
  String SVar5;
  String SVar6;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  SVar5 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  SVar6 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pvVar3 = __Block_copy(param_4);
  puVar4 = &DAT_100eb8250;
  _swift_allocObject(&DAT_100eb8250,0x18,7);
  *(void **)(puVar4 + 0x10) = pvVar3;
  _swift_retain(uVar2);
  (*pcVar1)(SVar5.str,SVar5.bridgeObject,SVar6.str,SVar6.bridgeObject,FUN_100123e50,puVar4);
  _swift_release(uVar2);
  _swift_bridgeObjectRelease(SVar5.bridgeObject);
  _swift_bridgeObjectRelease(SVar6.bridgeObject);
  _swift_release(puVar4);
  return;
}



/* Address: 0x1001204e4 | FUN_1001204e4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1001204e4(undefined8 param_1,long param_2,long param_3)

{
  NSString *pNVar1;
  
  if (param_2 == 0) {
    pNVar1 = (NSString *)0x0;
  }
  else {
    pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  }
  (**(code **)(param_3 + 0x10))(param_3,pNVar1);
  return 0;
}



/* Address: 0x100120528 | PostHogConfig::setPushIdentityProvider: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void PostHogConfig::setPushIdentityProvider_(ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined1 auStack_58 [24];
  
  pvVar4 = __Block_copy((void *)param_3);
  if (pvVar4 == (void *)0x0) {
    pcVar6 = (code *)0x0;
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = &DAT_100eb81d8;
    _swift_allocObject(&DAT_100eb81d8,0x18,7);
    *(void **)(puVar5 + 0x10) = pvVar4;
    pcVar6 = FUN_100123e48;
  }
  puVar1 = (undefined8 *)(param_1 + pushIdentityProvider);
  _swift_beginAccess(puVar1,auStack_58,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = pcVar6;
  puVar1[1] = puVar5;
  FUN_100004550(uVar2,uVar3);
  return;
}



/* Address: 0x1001205e4 | FUN_1001205e4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001205e4(void)

{
  NSString *pNVar1;
  NSString *pNVar2;
  void *aBlock;
  undefined8 in_x4;
  undefined8 in_x5;
  long in_x6;
  code *pcVar3;
  undefined *local_70;
  undefined8 local_68;
  code *local_60;
  undefined *puStack_58;
  undefined8 local_50;
  undefined8 local_48;
  
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  local_70 = PTR___NSConcreteStackBlock_100ea82a0;
  local_68 = 0x42000000;
  local_60 = FUN_1001206bc;
  puStack_58 = &DAT_100eb81f0;
  local_50 = in_x4;
  local_48 = in_x5;
  aBlock = __Block_copy(&local_70);
  pcVar3 = *(code **)(in_x6 + 0x10);
  _swift_retain(in_x5);
  (*pcVar3)(in_x6,pNVar1,pNVar2,aBlock);
  __Block_release(aBlock);
  _swift_release(local_48);
  return;
}



/* Address: 0x1001206bc | FUN_1001206bc */

void FUN_1001206bc(long param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  String SVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_2 == 0) {
    SVar3 = (String)ZEXT816(0);
  }
  else {
    SVar3 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  _swift_retain(uVar2);
  (*pcVar1)(SVar3.str,SVar3.bridgeObject);
  _swift_release(uVar2);
  _swift_bridgeObjectRelease(SVar3.bridgeObject);
  return;
}



/* Address: 0x100120720 | FUN_100120720 */

void FUN_100120720(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + PostHogConfig::pushIdentityProvider);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  FUN_100004550(uVar2,uVar3);
  return;
}



/* Address: 0x10012077c | FUN_10012077c */

undefined1  [16] FUN_10012077c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = PostHogConfig::pushIdentityProvider;
  _swift_beginAccess(unaff_x20 + PostHogConfig::pushIdentityProvider,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x1001207bc | PostHogConfig::debug */

/* Function Stack Size: 0x10 bytes */

bool PostHogConfig::debug(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = debug;
  _swift_beginAccess(param_1 + debug,auStack_38,0,0);
  return (bool)*(byte *)(param_1 + lVar1);
}



/* Address: 0x100120800 | FUN_100120800 */

undefined1 FUN_100120800(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = PostHogConfig::debug;
  _swift_beginAccess(unaff_x20 + PostHogConfig::debug,auStack_38,0,0);
  return *(undefined1 *)(unaff_x20 + lVar1);
}



/* Address: 0x100120840 | PostHogConfig::setDebug: */

/* Function Stack Size: 0x14 bytes */

void PostHogConfig::setDebug_(ID param_1,SEL param_2,bool param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = debug;
  _swift_beginAccess(param_1 + debug,auStack_48,1,0);
  *(char *)(param_1 + lVar1) = (char)param_3;
  return;
}



/* Address: 0x100120890 | FUN_100120890 */

void FUN_100120890(undefined1 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = PostHogConfig::debug;
  _swift_beginAccess(unaff_x20 + PostHogConfig::debug,auStack_48,1,0);
  *(undefined1 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Address: 0x1001208dc | FUN_1001208dc */

undefined1  [16] FUN_1001208dc(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = PostHogConfig::debug;
  _swift_beginAccess(unaff_x20 + PostHogConfig::debug,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x10012091c | PostHogConfig::optOut */

/* Function Stack Size: 0x10 bytes */

bool PostHogConfig::optOut(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = optOut;
  _swift_beginAccess(param_1 + optOut,auStack_38,0,0);
  return (bool)*(byte *)(param_1 + lVar1);
}



/* Address: 0x100120960 | FUN_100120960 */

undefined1 FUN_100120960(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = PostHogConfig::optOut;
  _swift_beginAccess(unaff_x20 + PostHogConfig::optOut,auStack_38,0,0);
  return *(undefined1 *)(unaff_x20 + lVar1);
}



/* Address: 0x1001209a0 | PostHogConfig::setOptOut: */

/* Function Stack Size: 0x14 bytes */

void PostHogConfig::setOptOut_(ID param_1,SEL param_2,bool param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = optOut;
  _swift_beginAccess(param_1 + optOut,auStack_48,1,0);
  *(char *)(param_1 + lVar1) = (char)param_3;
  return;
}



/* Address: 0x1001209f0 | FUN_1001209f0 */

void FUN_1001209f0(undefined1 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = PostHogConfig::optOut;
  _swift_beginAccess(unaff_x20 + PostHogConfig::optOut,auStack_48,1,0);
  *(undefined1 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Address: 0x100120a3c | FUN_100120a3c */

undefined1  [16] FUN_100120a3c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = PostHogConfig::optOut;
  _swift_beginAccess(unaff_x20 + PostHogConfig::optOut,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x100120a7c | FUN_100120a7c */

undefined1  [16] FUN_100120a7c(void)

{
  return ZEXT816(0x100120a8c);
}



/* Address: 0x100120a8c | FUN_100120a8c */

void FUN_100120a8c(undefined8 param_1,undefined8 param_2)

{
  UUID UVar1;
  
  UVar1 = Foundation::UUID::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x000100120ac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(UVar1.unknown + -8) + 0x10))(param_1,param_2,UVar1.unknown);
  return;
}



/* Address: 0x100120ac8 | PostHogConfig::getAnonymousId */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID PostHogConfig::getAnonymousId(ID param_1,SEL param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined *local_78;
  undefined8 local_70;
  code *local_68;
  undefined *puStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(param_1 + getAnonymousId);
  _swift_beginAccess(puVar1,auStack_48,0,0);
  uVar4 = puVar1[1];
  uStack_50 = puVar1[1];
  local_58 = *puVar1;
  local_78 = PTR___NSConcreteStackBlock_100ea82a0;
  local_70 = 0x42000000;
  local_68 = FUN_100120bc0;
  puStack_60 = &DAT_100eb81a0;
  pvVar3 = __Block_copy(&local_78);
  uVar2 = uStack_50;
  _swift_retain(uVar4);
  _swift_release(uVar2);
  return (ID)pvVar3;
}



/* Address: 0x100120b6c | FUN_100120b6c */

undefined1  [16] FUN_100120b6c(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + PostHogConfig::getAnonymousId);
  _swift_beginAccess(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  _swift_retain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Address: 0x100120bc0 | FUN_100120bc0 */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

NSUUID * FUN_100120bc0(long param_1,UUID param_2)

{
  UUID UVar1;
  UUID UVar2;
  NSUUID *pNVar3;
  long extraout_x8;
  long extraout_x12;
  code *pcVar4;
  undefined1 *puVar5;
  long lVar6;
  
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  lVar6 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar6 + 0x40));
  puVar5 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  pcVar4 = *(code **)(param_1 + 0x20);
  UVar2.unknown = *(undefined **)(param_1 + 0x28);
  Foundation::UUID::__unconditionallyBridgeFromObjectiveC(param_2);
  _swift_retain(UVar2.unknown);
  (*pcVar4)(puVar5,(long)puVar5 - extraout_x12);
  _swift_release();
  pNVar3 = Foundation::UUID::_bridgeToObjectiveC(UVar2);
  pcVar4 = *(code **)(lVar6 + 8);
  (*pcVar4)(puVar5,UVar1.unknown);
  (*pcVar4)((long)puVar5 - extraout_x12,UVar1.unknown);
  return pNVar3;
}



/* Address: 0x100120ca8 | PostHogConfig::setGetAnonymousId: */

/* Function Stack Size: 0x18 bytes */

void PostHogConfig::setGetAnonymousId_(ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [24];
  
  pvVar2 = __Block_copy((void *)param_3);
  puVar3 = &DAT_100eb8188;
  _swift_allocObject(&DAT_100eb8188,0x18,7);
  *(void **)(puVar3 + 0x10) = pvVar2;
  puVar1 = (undefined8 *)(param_1 + getAnonymousId);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  uVar4 = puVar1[1];
  *puVar1 = FUN_100123e24;
  puVar1[1] = puVar3;
  _swift_release(uVar4);
  return;
}



/* Address: 0x100120d30 | FUN_100120d30 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100120d30(UUID param_1,UUID param_2)

{
  NSUUID *pNVar1;
  
  pNVar1 = Foundation::UUID::_bridgeToObjectiveC(param_1);
  (**(code **)(param_2.unknown + 0x10))(param_2.unknown,pNVar1);
  Foundation::UUID::__unconditionallyBridgeFromObjectiveC(param_2);
  return 0;
}



/* Address: 0x100120d98 | FUN_100120d98 */

void FUN_100120d98(undefined8 param_1,undefined8 param_2)

{
  FUN_100121b44(param_1,param_2,&PostHogConfig::getAnonymousId,PTR__swift_release_100eae3e8);
  return;
}



/* Address: 0x100120dac | FUN_100120dac */

undefined1  [16] FUN_100120dac(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = PostHogConfig::getAnonymousId;
  _swift_beginAccess(unaff_x20 + PostHogConfig::getAnonymousId,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x100120dec | PostHogConfig::bootstrap */

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x10 bytes */

ID PostHogConfig::bootstrap(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = bootstrap;
  _swift_beginAccess(param_1 + bootstrap,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}



/* Address: 0x100120e34 | FUN_100120e34 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100120e34(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = PostHogConfig::bootstrap;
  _swift_beginAccess(unaff_x20 + PostHogConfig::bootstrap,auStack_38,0,0);
  return *(undefined8 *)(unaff_x20 + lVar1);
}



/* Address: 0x100120e80 | PostHogConfig::setBootstrap: */

/* Function Stack Size: 0x18 bytes */

void PostHogConfig::setBootstrap_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100121e44();
  return;
}



/* Address: 0x100120e8c | FUN_100120e8c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100120e8c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = PostHogConfig::bootstrap;
  _swift_beginAccess(unaff_x20 + PostHogConfig::bootstrap,auStack_48,1,0);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  return 0;
}



/* Address: 0x100120ee0 | FUN_100120ee0 */

undefined1  [16] FUN_100120ee0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = PostHogConfig::bootstrap;
  _swift_beginAccess(unaff_x20 + PostHogConfig::bootstrap,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x100120f20 | PostHogConfig::reuseAnonymousId */

/* Function Stack Size: 0x10 bytes */

bool PostHogConfig::reuseAnonymousId(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = reuseAnonymousId;
  _swift_beginAccess(param_1 + reuseAnonymousId,auStack_38,0,0);
  return (bool)*(byte *)(param_1 + lVar1);
}



/* Address: 0x100120f64 | FUN_100120f64 */

undefined1 FUN_100120f64(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = PostHogConfig::reuseAnonymousId;
  _swift_beginAccess(unaff_x20 + PostHogConfig::reuseAnonymousId,auStack_38,0,0);
  return *(undefined1 *)(unaff_x20 + lVar1);
}



/* Address: 0x100120fa4 | PostHogConfig::setReuseAnonymousId: */

/* Function Stack Size: 0x14 bytes */

void PostHogConfig::setReuseAnonymousId_(ID param_1,SEL param_2,bool param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = reuseAnonymousId;
  _swift_beginAccess(param_1 + reuseAnonymousId,auStack_48,1,0);
  *(char *)(param_1 + lVar1) = (char)param_3;
  return;
}



/* Address: 0x100120ff4 | FUN_100120ff4 */

void FUN_100120ff4(undefined1 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = PostHogConfig::reuseAnonymousId;
  _swift_beginAccess(unaff_x20 + PostHogConfig::reuseAnonymousId,auStack_48,1,0);
  *(undefined1 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Address: 0x100121040 | FUN_100121040 */

undefined1  [16] FUN_100121040(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = PostHogConfig::reuseAnonymousId;
  _swift_beginAccess(unaff_x20 + PostHogConfig::reuseAnonymousId,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x100121080 | PostHogConfig::propertiesSanitizer */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID PostHogConfig::propertiesSanitizer(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = *(ID *)(param_1 + _propertiesSanitizer);
  _swift_unknownObjectRetain();
  return IVar1;
}



/* Address: 0x1001210a0 | FUN_1001210a0 */

void FUN_1001210a0(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRetain(*(undefined8 *)(unaff_x20 + PostHogConfig::_propertiesSanitizer));
  return;
}



/* Address: 0x1001210b0 | PostHogConfig::setPropertiesSanitizer: */

/* Function Stack Size: 0x18 bytes */

void PostHogConfig::setPropertiesSanitizer_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _propertiesSanitizer);
  *(ID *)(param_1 + _propertiesSanitizer) = param_3;
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRelease(uVar1);
  return;
}



/* Address: 0x1001210e4 | FUN_1001210e4 */

void FUN_1001210e4(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + PostHogConfig::_propertiesSanitizer);
  *(undefined8 *)(unaff_x20 + PostHogConfig::_propertiesSanitizer) = param_1;
  _swift_unknownObjectRelease(uVar1);
  return;
}



/* Address: 0x1001210fc | FUN_1001210fc */

undefined1  [16] FUN_1001210fc(undefined8 *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = PostHogConfig::_propertiesSanitizer;
  param_1[2] = PostHogConfig::_propertiesSanitizer;
  *param_1 = *(undefined8 *)(unaff_x20 + lVar1);
  param_1[1] = unaff_x20;
  _swift_unknownObjectRetain();
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = FUN_100121140;
  return auVar2;
}



/* Address: 0x100121140 | FUN_100121140 */

void FUN_100121140(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_1;
  uVar1 = *(undefined8 *)(param_1[1] + param_1[2]);
  *(undefined8 *)(param_1[1] + param_1[2]) = uVar2;
  if ((param_2 & 1) != 0) {
    _swift_unknownObjectRetain(uVar2);
    _swift_unknownObjectRelease(uVar1);
    uVar1 = uVar2;
  }
  _swift_unknownObjectRelease(uVar1);
  return;
}



/* Address: 0x100121184 | PostHogConfig::personProfiles */

/* Function Stack Size: 0x10 bytes */

long_long PostHogConfig::personProfiles(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = personProfiles;
  _swift_beginAccess(param_1 + personProfiles,auStack_38,0,0);
  return *(long_long *)(param_1 + lVar1);
}



/* Address: 0x1001211c8 | FUN_1001211c8 */

undefined8 FUN_1001211c8(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = PostHogConfig::personProfiles;
  _swift_beginAccess(unaff_x20 + PostHogConfig::personProfiles,auStack_38,0,0);
  return *(undefined8 *)(unaff_x20 + lVar1);
}



/* Address: 0x100121208 | PostHogConfig::setPersonProfiles: */

/* Function Stack Size: 0x18 bytes */

void PostHogConfig::setPersonProfiles_(ID param_1,SEL param_2,long_long param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = personProfiles;
  _swift_beginAccess(param_1 + personProfiles,auStack_48,1,0);
  *(long_long *)(param_1 + lVar1) = param_3;
  return;
}



/* Address: 0x100121258 | FUN_100121258 */

void FUN_100121258(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = PostHogConfig::personProfiles;
  _swift_beginAccess(unaff_x20 + PostHogConfig::personProfiles,auStack_48,1,0);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Address: 0x1001212a4 | FUN_1001212a4 */

undefined1  [16] FUN_1001212a4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = PostHogConfig::personProfiles;
  _swift_beginAccess(unaff_x20 + PostHogConfig::personProfiles,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x1001212e4 | PostHogConfig::setDefaultPersonProperties */

/* Function Stack Size: 0x10 bytes */

bool PostHogConfig::setDefaultPersonProperties(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = setDefaultPersonProperties;
  _swift_beginAccess(param_1 + setDefaultPersonProperties,auStack_38,0,0);
  return (bool)*(byte *)(param_1 + lVar1);
}



/* Address: 0x100121328 | FUN_100121328 */

undefined1 FUN_100121328(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = PostHogConfig::setDefaultPersonProperties;
  _swift_beginAccess(unaff_x20 + PostHogConfig::setDefaultPersonProperties,auStack_38,0,0);
  return *(undefined1 *)(unaff_x20 + lVar1);
}



/* Address: 0x100121368 | PostHogConfig::setSetDefaultPersonProperties: */

/* Function Stack Size: 0x14 bytes */

void PostHogConfig::setSetDefaultPersonProperties_(ID param_1,SEL param_2,bool param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = setDefaultPersonProperties;
  _swift_beginAccess(param_1 + setDefaultPersonProperties,auStack_48,1,0);
  *(char *)(param_1 + lVar1) = (char)param_3;
  return;
}



/* Address: 0x1001213b8 | FUN_1001213b8 */

void FUN_1001213b8(undefined1 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = PostHogConfig::setDefaultPersonProperties;
  _swift_beginAccess(unaff_x20 + PostHogConfig::setDefaultPersonProperties,auStack_48,1,0);
  *(undefined1 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Address: 0x100121404 | FUN_100121404 */

undefined1  [16] FUN_100121404(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = PostHogConfig::setDefaultPersonProperties;
  _swift_beginAccess(unaff_x20 + PostHogConfig::setDefaultPersonProperties,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x100121444 | thunk_FUN_10012151c */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID thunk_FUN_10012151c(ID param_1,SEL param_2)

{
  NSArray *pNVar1;
  long lVar2;
  undefined1 auStack_38 [24];
  
  lVar2 = PostHogConfig::evaluationContexts;
  _swift_beginAccess(param_1 + PostHogConfig::evaluationContexts,auStack_38,0,0);
  lVar2 = *(long *)(param_1 + lVar2);
  if (lVar2 == 0) {
    pNVar1 = (NSArray *)0x0;
  }
  else {
    _swift_bridgeObjectRetain(lVar2);
    pNVar1 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(lVar2);
  }
  return (ID)pNVar1;
}



/* Address: 0x100121448 | FUN_100121448 */

void FUN_100121448(void)

{
  FUN_100104af0(&PostHogConfig::evaluationContexts);
  return;
}



/* Address: 0x100121454 | PostHogConfig::setEvaluationContexts: */

/* Function Stack Size: 0x18 bytes */

void PostHogConfig::setEvaluationContexts_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  }
  lVar1 = evaluationContexts;
  _swift_beginAccess(param_1 + evaluationContexts,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(ID *)(param_1 + lVar1) = param_3;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Address: 0x1001214c8 | FUN_1001214c8 */

void FUN_1001214c8(undefined8 param_1)

{
  FUN_1001220f0(param_1,&PostHogConfig::evaluationContexts,PTR__swift_bridgeObjectRelease_100eae160)
  ;
  return;
}



/* Address: 0x1001214dc | FUN_1001214dc */

undefined1  [16] FUN_1001214dc(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = PostHogConfig::evaluationContexts;
  _swift_beginAccess(unaff_x20 + PostHogConfig::evaluationContexts,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x10012151c | FUN_10012151c */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_10012151c(ID param_1,SEL param_2)

{
  NSArray *pNVar1;
  long lVar2;
  undefined1 auStack_38 [24];
  
  lVar2 = PostHogConfig::evaluationContexts;
  _swift_beginAccess(param_1 + PostHogConfig::evaluationContexts,auStack_38,0,0);
  lVar2 = *(long *)(param_1 + lVar2);
  if (lVar2 == 0) {
    pNVar1 = (NSArray *)0x0;
  }
  else {
    _swift_bridgeObjectRetain(lVar2);
    pNVar1 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(lVar2);
  }
  return (ID)pNVar1;
}



/* Address: 0x100121590 | PostHogConfig::setEvaluationEnvironments: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void PostHogConfig::setEvaluationEnvironments_(ID param_1,SEL param_2,ID param_3)

{
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  }
  FUN_1001215e4(param_3);
  return;
}


