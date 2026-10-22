/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10011deb8 | thunk_FUN_10011da4c */

void thunk_FUN_10011da4c(void)

{
  FUN_10011da4c();
  return;
}



/* Address: 0x10011debc | thunk_FUN_10011da4c */

void thunk_FUN_10011da4c(void)

{
  FUN_10011da4c();
  return;
}



/* Address: 0x10011dec0 | thunk_FUN_10011da4c */

void thunk_FUN_10011da4c(void)

{
  FUN_10011da4c();
  return;
}



/* Address: 0x10011dec4 | thunk_FUN_10011da4c */

void thunk_FUN_10011da4c(void)

{
  FUN_10011da4c();
  return;
}



/* Address: 0x10011dec8 | thunk_FUN_10011da4c */

void thunk_FUN_10011da4c(void)

{
  FUN_10011da4c();
  return;
}



/* Address: 0x10011decc | thunk_FUN_10011dd10 */

void thunk_FUN_10011dd10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        )

{
  undefined8 *puVar1;
  URLRequest_conflict UVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  
  UVar2 = Foundation::URLRequest::typeMetadataAccessor();
  uVar3 = (ulong)*(byte *)(*(long *)(UVar2.unknown + -8) + 0x50);
  uVar4 = uVar3 + 0x20 & (uVar3 ^ 0xffffffffffffffff);
  uVar3 = *(long *)(*(long *)(UVar2.unknown + -8) + 0x40) + uVar4 + 7 & 0xfffffffffffffff8;
  puVar1 = (undefined8 *)(unaff_x20 + uVar3 + 0x10);
  FUN_10011b178(param_1,param_2,param_3,param_4,*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),unaff_x20 + uVar4,
                *(undefined8 *)(unaff_x20 + uVar3),((undefined8 *)(unaff_x20 + uVar3))[1],*puVar1,
                puVar1[1],*(undefined8 *)(unaff_x20 + uVar3 + 0x20));
  return;
}



/* Address: 0x10011ded0 | thunk_FUN_10011db48 */

void thunk_FUN_10011db48(void)

{
  thunk_FUN_10011db48();
  return;
}



/* Address: 0x10011ded4 | thunk_FUN_10011dbf0 */

void thunk_FUN_10011dbf0(void)

{
  undefined8 *puVar1;
  URLRequest_conflict UVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  
  UVar2 = Foundation::URLRequest::typeMetadataAccessor();
  uVar3 = (ulong)*(byte *)(*(long *)(UVar2.unknown + -8) + 0x50);
  uVar3 = uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff);
  uVar4 = *(long *)(*(long *)(UVar2.unknown + -8) + 0x40) + uVar3 + 7 & 0xfffffffffffffff8;
  puVar1 = (undefined8 *)(unaff_x20 + uVar4 + 0x18);
  FUN_10011af74(*(undefined8 *)(unaff_x20 + 0x10),unaff_x20 + uVar3,
                *(undefined8 *)(unaff_x20 + uVar4),((undefined8 *)(unaff_x20 + uVar4))[1],
                *(undefined8 *)(unaff_x20 + uVar4 + 0x10),*puVar1,puVar1[1]);
  return;
}



/* Address: 0x10011ded8 | thunk_FUN_10011dc68 */

void thunk_FUN_10011dc68(void)

{
  thunk_FUN_10011dc68();
  return;
}



/* Address: 0x10011dedc | PostHogBootstrapConfig::distinctId */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID PostHogBootstrapConfig::distinctId(ID param_1,SEL param_2)

{
  NSString *pNVar1;
  long lVar2;
  undefined1 auStack_38 [24];
  
  lVar2 = param_1 + distinctId;
  _swift_beginAccess(lVar2,auStack_38,0,0);
  lVar2 = *(long *)(lVar2 + 8);
  if (lVar2 == 0) {
    pNVar1 = (NSString *)0x0;
  }
  else {
    _swift_bridgeObjectRetain(lVar2);
    pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(lVar2);
  }
  return (ID)pNVar1;
}



/* Address: 0x10011df54 | FUN_10011df54 */

undefined1  [16] FUN_10011df54(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + PostHogBootstrapConfig::distinctId);
  _swift_beginAccess(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  _swift_bridgeObjectRetain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Address: 0x10011dfa8 | PostHogBootstrapConfig::setDistinctId: */

/* Function Stack Size: 0x18 bytes */

void PostHogBootstrapConfig::setDistinctId_(ID param_1,SEL param_2,ID param_3)

{
  String *pSVar1;
  String SVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    SVar2 = (String)ZEXT816(0);
  }
  else {
    SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  pSVar1 = (String *)(param_1 + distinctId);
  _swift_beginAccess(pSVar1,auStack_48,1,0);
  *pSVar1 = SVar2;
  _swift_bridgeObjectRelease(pSVar1->bridgeObject);
  return;
}



/* Address: 0x10011e020 | FUN_10011e020 */

void FUN_10011e020(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + PostHogBootstrapConfig::distinctId);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Address: 0x10011e07c | FUN_10011e07c */

undefined1  [16] FUN_10011e07c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = PostHogBootstrapConfig::distinctId;
  _swift_beginAccess(unaff_x20 + PostHogBootstrapConfig::distinctId,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x10011e0bc | PostHogBootstrapConfig::isIdentifiedId */

/* Function Stack Size: 0x10 bytes */

bool PostHogBootstrapConfig::isIdentifiedId(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = isIdentifiedId;
  _swift_beginAccess(param_1 + isIdentifiedId,auStack_38,0,0);
  return (bool)*(byte *)(param_1 + lVar1);
}



/* Address: 0x10011e100 | FUN_10011e100 */

undefined1 FUN_10011e100(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = PostHogBootstrapConfig::isIdentifiedId;
  _swift_beginAccess(unaff_x20 + PostHogBootstrapConfig::isIdentifiedId,auStack_38,0,0);
  return *(undefined1 *)(unaff_x20 + lVar1);
}



/* Address: 0x10011e140 | PostHogBootstrapConfig::setIsIdentifiedId: */

/* Function Stack Size: 0x14 bytes */

void PostHogBootstrapConfig::setIsIdentifiedId_(ID param_1,SEL param_2,bool param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = isIdentifiedId;
  _swift_beginAccess(param_1 + isIdentifiedId,auStack_48,1,0);
  *(char *)(param_1 + lVar1) = (char)param_3;
  return;
}



/* Address: 0x10011e190 | FUN_10011e190 */

void FUN_10011e190(undefined1 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = PostHogBootstrapConfig::isIdentifiedId;
  _swift_beginAccess(unaff_x20 + PostHogBootstrapConfig::isIdentifiedId,auStack_48,1,0);
  *(undefined1 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Address: 0x10011e1dc | FUN_10011e1dc */

undefined1  [16] FUN_10011e1dc(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = PostHogBootstrapConfig::isIdentifiedId;
  _swift_beginAccess(unaff_x20 + PostHogBootstrapConfig::isIdentifiedId,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x10011e21c | PostHogBootstrapConfig::featureFlags */

/* Function Stack Size: 0x10 bytes */

ID PostHogBootstrapConfig::featureFlags(ID param_1,SEL param_2)

{
  FUN_10011e298(param_1,param_2,&featureFlags);
  return param_1;
}



/* Address: 0x10011e228 | FUN_10011e228 */

void FUN_10011e228(void)

{
  FUN_100104af0(&PostHogBootstrapConfig::featureFlags);
  return;
}



/* Address: 0x10011e234 | PostHogBootstrapConfig::setFeatureFlags: */

/* Function Stack Size: 0x18 bytes */

void PostHogBootstrapConfig::setFeatureFlags_(ID param_1,SEL param_2,ID param_3)

{
  FUN_10011e334();
  return;
}



/* Address: 0x10011e240 | FUN_10011e240 */

void FUN_10011e240(undefined8 param_1)

{
  FUN_100104bb0(param_1,&PostHogBootstrapConfig::featureFlags);
  return;
}



/* Address: 0x10011e24c | FUN_10011e24c */

undefined1  [16] FUN_10011e24c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = PostHogBootstrapConfig::featureFlags;
  _swift_beginAccess(unaff_x20 + PostHogBootstrapConfig::featureFlags,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x10011e28c | PostHogBootstrapConfig::featureFlagPayloads */

/* Function Stack Size: 0x10 bytes */

ID PostHogBootstrapConfig::featureFlagPayloads(ID param_1,SEL param_2)

{
  FUN_10011e298(param_1,param_2,&featureFlagPayloads);
  return param_1;
}



/* Address: 0x10011e298 | FUN_10011e298 */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

NSDictionary * FUN_10011e298(long param_1,undefined8 param_2,long *param_3)

{
  NSDictionary *pNVar1;
  long lVar2;
  undefined1 auStack_38 [24];
  
  lVar2 = *param_3;
  _swift_beginAccess(param_1 + lVar2,auStack_38,0,0);
  lVar2 = *(long *)(param_1 + lVar2);
  if (lVar2 == 0) {
    pNVar1 = (NSDictionary *)0x0;
  }
  else {
    _swift_bridgeObjectRetain(lVar2);
    pNVar1 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(lVar2);
  }
  return pNVar1;
}



/* Address: 0x10011e31c | FUN_10011e31c */

void FUN_10011e31c(void)

{
  FUN_100104af0(&PostHogBootstrapConfig::featureFlagPayloads);
  return;
}



/* Address: 0x10011e328 | PostHogBootstrapConfig::setFeatureFlagPayloads: */

/* Function Stack Size: 0x18 bytes */

void PostHogBootstrapConfig::setFeatureFlagPayloads_(ID param_1,SEL param_2,ID param_3)

{
  FUN_10011e334();
  return;
}



/* Address: 0x10011e334 | FUN_10011e334 */

void FUN_10011e334(long param_1,undefined8 param_2,long param_3,long *param_4)

{
  Dictionary<undefined,undefined> DVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    DVar1.unknown = (undefined *)0x0;
  }
  else {
    DVar1 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  }
  lVar3 = *param_4;
  _swift_beginAccess(param_1 + lVar3,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = DVar1.unknown;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Address: 0x10011e3c0 | FUN_10011e3c0 */

void FUN_10011e3c0(undefined8 param_1)

{
  FUN_100104bb0(param_1,&PostHogBootstrapConfig::featureFlagPayloads);
  return;
}



/* Address: 0x10011e3cc | FUN_10011e3cc */

undefined1  [16] FUN_10011e3cc(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = PostHogBootstrapConfig::featureFlagPayloads;
  _swift_beginAccess(unaff_x20 + PostHogBootstrapConfig::featureFlagPayloads,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x10011e40c | FUN_10011e40c */

void FUN_10011e40c(void)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + PostHogBootstrapConfig::distinctId);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(unaff_x20 + PostHogBootstrapConfig::isIdentifiedId) = 0;
  *(undefined8 *)(unaff_x20 + PostHogBootstrapConfig::featureFlags) = 0;
  *(undefined8 *)(unaff_x20 + PostHogBootstrapConfig::featureFlagPayloads) = 0;
  FUN_10011e470();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"init");
  return;
}



/* Address: 0x10011e470 | FUN_10011e470 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10011e470(void)

{
  return ZEXT816(0x100f93818);
}



/* Address: 0x10011e490 | PostHogBootstrapConfig::init */

/* Function Stack Size: 0x10 bytes */

ID PostHogBootstrapConfig::init(ID param_1,SEL param_2)

{
  undefined8 *puVar1;
  class_t *pcVar2;
  ID IVar3;
  objc_super local_30;
  
  puVar1 = (undefined8 *)(param_1 + distinctId);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(param_1 + isIdentifiedId) = 0;
  *(undefined8 *)(param_1 + featureFlags) = 0;
  *(undefined8 *)(param_1 + featureFlagPayloads) = 0;
  pcVar2 = (class_t *)param_1;
  FUN_10011e470();
  local_30.receiver = param_1;
  local_30.super_class = pcVar2;
  IVar3 = _objc_msgSendSuper2(&local_30,"init");
  return IVar3;
}



/* Address: 0x10011e500 | FUN_10011e500 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10011e500(undefined8 param_1,undefined8 param_2)

{
  NSString *pNVar1;
  ID IVar2;
  ID unaff_x20;
  
  _objc_allocWithZone();
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  IVar2 = objc_stub::initWithDistinctId_isIdentifiedId_featureFlags_featureFlagPayloads_
                    (unaff_x20,pNVar1,0,0,0);
  return IVar2;
}



/* Address: 0x10011e574 | FUN_10011e574 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10011e574(undefined8 param_1,undefined8 param_2)

{
  NSString *pNVar1;
  ID IVar2;
  ID unaff_x20;
  
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  IVar2 = objc_stub::initWithDistinctId_isIdentifiedId_featureFlags_featureFlagPayloads_
                    (unaff_x20,pNVar1,0,0,0);
  return IVar2;
}



/* Address: 0x10011e5d0 | PostHogBootstrapConfig::initWithAnonymousId: */

/* Function Stack Size: 0x18 bytes */

ID PostHogBootstrapConfig::initWithAnonymousId_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = initWithDistinctId_isIdentifiedId_featureFlags_featureFlagPayloads_(param_1,param_3,0,0,0)
  ;
  return IVar1;
}



/* Address: 0x10011e5e0 | FUN_10011e5e0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10011e5e0(undefined8 param_1,undefined8 param_2,uint param_3)

{
  NSString *pNVar1;
  ID IVar2;
  ID unaff_x20;
  
  _objc_allocWithZone();
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  IVar2 = objc_stub::initWithDistinctId_isIdentifiedId_featureFlags_featureFlagPayloads_
                    (unaff_x20,pNVar1,(ulong)(param_3 & 1),0,0);
  return IVar2;
}



/* Address: 0x10011e658 | FUN_10011e658 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10011e658(undefined8 param_1,undefined8 param_2,uint param_3)

{
  NSString *pNVar1;
  ID IVar2;
  ID unaff_x20;
  
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  IVar2 = objc_stub::initWithDistinctId_isIdentifiedId_featureFlags_featureFlagPayloads_
                    (unaff_x20,pNVar1,(ulong)(param_3 & 1),0,0);
  return IVar2;
}



/* Address: 0x10011e6b8 | PostHogBootstrapConfig::initWithDistinctId:isIdentifiedId: */

/* Function Stack Size: 0x1c bytes */

ID PostHogBootstrapConfig::initWithDistinctId_isIdentifiedId_
             (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  ID IVar1;
  
  IVar1 = initWithDistinctId_isIdentifiedId_featureFlags_featureFlagPayloads_
                    (param_1,param_3,param_4,0,0);
  return IVar1;
}



/* Address: 0x10011e6c4 | FUN_10011e6c4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10011e6c4(undefined8 param_1,long param_2)

{
  NSDictionary *pNVar1;
  NSDictionary *pNVar2;
  ID IVar3;
  ID unaff_x20;
  
  _objc_allocWithZone();
  pNVar1 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_1);
  if (param_2 == 0) {
    pNVar2 = (NSDictionary *)0x0;
  }
  else {
    pNVar2 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(param_2);
  }
  IVar3 = objc_stub::initWithDistinctId_isIdentifiedId_featureFlags_featureFlagPayloads_
                    (unaff_x20,0,0,pNVar1,pNVar2);
  return IVar3;
}



/* Address: 0x10011e794 | FUN_10011e794 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10011e794(undefined8 param_1,long param_2)

{
  NSDictionary *pNVar1;
  NSDictionary *pNVar2;
  ID IVar3;
  ID unaff_x20;
  
  pNVar1 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_1);
  if (param_2 == 0) {
    pNVar2 = (NSDictionary *)0x0;
  }
  else {
    pNVar2 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(param_2);
  }
  IVar3 = objc_stub::initWithDistinctId_isIdentifiedId_featureFlags_featureFlagPayloads_
                    (unaff_x20,0,0,pNVar1,pNVar2);
  return IVar3;
}



/* Address: 0x10011e854 | PostHogBootstrapConfig::initWithFeatureFlags:featureFlagPayloads: */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

ID PostHogBootstrapConfig::initWithFeatureFlags_featureFlagPayloads_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  Dictionary<undefined,undefined> DVar1;
  Dictionary<undefined,undefined> DVar2;
  NSDictionary *pNVar3;
  NSDictionary *pNVar4;
  ID IVar5;
  
  DVar1 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  if (param_4 == 0) {
    DVar2.unknown = (undefined *)0x0;
  }
  else {
    DVar2 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  }
  pNVar3 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(DVar1.unknown);
  if (DVar2.unknown == (undefined *)0x0) {
    pNVar4 = (NSDictionary *)0x0;
  }
  else {
    pNVar4 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(DVar2.unknown);
  }
  IVar5 = initWithDistinctId_isIdentifiedId_featureFlags_featureFlagPayloads_
                    (param_1,0,0,(ID)pNVar3,(ID)pNVar4);
  return IVar5;
}



/* Address: 0x10011e968 | FUN_10011e968 */

void FUN_10011e968(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + PostHogBootstrapConfig::distinctId);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar2 = PostHogBootstrapConfig::isIdentifiedId;
  *(undefined1 *)(unaff_x20 + PostHogBootstrapConfig::isIdentifiedId) = 0;
  lVar3 = PostHogBootstrapConfig::featureFlags;
  *(undefined8 *)(unaff_x20 + PostHogBootstrapConfig::featureFlags) = 0;
  lVar4 = PostHogBootstrapConfig::featureFlagPayloads;
  *(undefined8 *)(unaff_x20 + PostHogBootstrapConfig::featureFlagPayloads) = 0;
  _swift_beginAccess(puVar1,auStack_78,1,0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _swift_beginAccess(unaff_x20 + lVar2,auStack_90,1,0);
  *(undefined1 *)(unaff_x20 + lVar2) = param_3;
  _swift_beginAccess(unaff_x20 + lVar3,auStack_a8,1,0);
  *(undefined8 *)(unaff_x20 + lVar3) = param_4;
  _swift_beginAccess(unaff_x20 + lVar4,auStack_c0,1,0);
  *(undefined8 *)(unaff_x20 + lVar4) = param_5;
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff30,"init");
  return;
}



/* Address: 0x10011ea74 | FUN_10011ea74 */

void FUN_10011ea74(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + PostHogBootstrapConfig::distinctId);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar2 = PostHogBootstrapConfig::isIdentifiedId;
  *(undefined1 *)(unaff_x20 + PostHogBootstrapConfig::isIdentifiedId) = 0;
  lVar3 = PostHogBootstrapConfig::featureFlags;
  *(undefined8 *)(unaff_x20 + PostHogBootstrapConfig::featureFlags) = 0;
  lVar4 = PostHogBootstrapConfig::featureFlagPayloads;
  *(undefined8 *)(unaff_x20 + PostHogBootstrapConfig::featureFlagPayloads) = 0;
  _swift_beginAccess(puVar1,auStack_78,1,0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _swift_beginAccess(unaff_x20 + lVar2,auStack_90,1,0);
  *(undefined1 *)(unaff_x20 + lVar2) = param_3;
  _swift_beginAccess(unaff_x20 + lVar3,auStack_a8,1,0);
  *(undefined8 *)(unaff_x20 + lVar3) = param_4;
  _swift_beginAccess(unaff_x20 + lVar4,auStack_c0,1,0);
  *(undefined8 *)(unaff_x20 + lVar4) = param_5;
  _swift_bridgeObjectRelease();
  FUN_10011e470();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff30,"init");
  return;
}



/* Address: 0x10011eb7c | PostHogBootstrapConfig::initWithDistinctId:isIdentifiedId:featureFlags:featureFlagPayloads: */

/* Function Stack Size: 0x2c bytes */

ID PostHogBootstrapConfig::initWithDistinctId_isIdentifiedId_featureFlags_featureFlagPayloads_
             (ID param_1,SEL param_2,ID param_3,bool param_4,ID param_5,ID param_6)

{
  Dictionary<undefined,undefined> DVar1;
  Dictionary<undefined,undefined> DVar2;
  char *pcVar3;
  String SVar4;
  
  if (param_3 == 0) {
    SVar4 = (String)ZEXT816(0);
  }
  else {
    SVar4 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  pcVar3 = SVar4.str;
  DVar1.unknown = (undefined *)0x0;
  if (param_5 != 0) {
    DVar1 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  }
  if (param_6 == 0) {
    DVar2.unknown = (undefined *)0x0;
  }
  else {
    DVar2 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  }
  FUN_10011ea74(pcVar3,SVar4.bridgeObject,param_4,DVar1.unknown,DVar2.unknown);
  return (ID)pcVar3;
}



/* Address: 0x10011ec48 | FUN_10011ec48 */

void FUN_10011ec48(void)

{
  FUN_10011e470();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x10011ec78 | PostHogBootstrapConfig::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void PostHogBootstrapConfig::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + distinctId + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + featureFlags));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + featureFlagPayloads));
  return;
}



/* Address: 0x10011ecc4 | FUN_10011ecc4 */

undefined1  [16] FUN_10011ecc4(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 3) {
    uVar1 = param_1;
  }
  auVar2[8] = 2 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Address: 0x10011ecd4 | FUN_10011ecd4 */

void FUN_10011ecd4(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Address: 0x10011ecf0 | PostHogConfig::host */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID PostHogConfig::host(ID param_1,SEL param_2)

{
  URL UVar1;
  URL UVar2;
  NSURL *pNVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar5 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar5 + 0x40));
  puVar4 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  UVar2.unknown = puVar4;
  (**(code **)(lVar5 + 0x10))(puVar4,param_1 + host,UVar1.unknown);
  pNVar3 = Foundation::URL::_bridgeToObjectiveC(UVar2);
  (**(code **)(lVar5 + 8))(puVar4,UVar1.unknown);
  return (ID)pNVar3;
}



/* Address: 0x10011ed88 | FUN_10011ed88 */

void FUN_10011ed88(undefined8 param_1)

{
  long lVar1;
  URL UVar2;
  long unaff_x20;
  
  lVar1 = PostHogConfig::host;
  UVar2 = Foundation::URL::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x00010011edcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(UVar2.unknown + -8) + 0x10))(param_1,unaff_x20 + lVar1,UVar2.unknown);
  return;
}



/* Address: 0x10011edd0 | PostHogConfig::projectToken */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID PostHogConfig::projectToken(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  NSString *pNVar2;
  
  uVar1 = *(undefined8 *)(param_1 + projectToken + 8);
  _swift_bridgeObjectRetain(uVar1);
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(uVar1);
  return (ID)pNVar2;
}



/* Address: 0x10011ee1c | FUN_10011ee1c */

undefined1  [16] FUN_10011ee1c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + PostHogConfig::projectToken);
  _swift_bridgeObjectRetain
            (*(undefined8 *)(*(undefined1 (*) [16])(unaff_x20 + PostHogConfig::projectToken) + 8));
  return auVar1;
}



/* Address: 0x10011ee54 | PostHogConfig::apiKey */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID PostHogConfig::apiKey(ID param_1,SEL param_2)

{
  NSString *pNVar1;
  
  FUN_100123a10(param_1);
  _swift_bridgeObjectRetain(param_2);
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  return (ID)pNVar1;
}



/* Address: 0x10011eeb4 | FUN_10011eeb4 */

undefined1  [16] FUN_10011eeb4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  
  FUN_100123a10();
  _swift_bridgeObjectRetain(param_2);
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Address: 0x10011eee8 | PostHogConfig::flushAt */

/* Function Stack Size: 0x10 bytes */

long_long PostHogConfig::flushAt(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = flushAt;
  _swift_beginAccess(param_1 + flushAt,auStack_38,0,0);
  return *(long_long *)(param_1 + lVar1);
}



/* Address: 0x10011ef2c | FUN_10011ef2c */

undefined8 FUN_10011ef2c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = PostHogConfig::flushAt;
  _swift_beginAccess(unaff_x20 + PostHogConfig::flushAt,auStack_38,0,0);
  return *(undefined8 *)(unaff_x20 + lVar1);
}



/* Address: 0x10011ef6c | PostHogConfig::setFlushAt: */

/* Function Stack Size: 0x18 bytes */

void PostHogConfig::setFlushAt_(ID param_1,SEL param_2,long_long param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = flushAt;
  _swift_beginAccess(param_1 + flushAt,auStack_48,1,0);
  *(long_long *)(param_1 + lVar1) = param_3;
  return;
}



/* Address: 0x10011efbc | FUN_10011efbc */

void FUN_10011efbc(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = PostHogConfig::flushAt;
  _swift_beginAccess(unaff_x20 + PostHogConfig::flushAt,auStack_48,1,0);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Address: 0x10011f008 | FUN_10011f008 */

undefined1  [16] FUN_10011f008(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = PostHogConfig::flushAt;
  _swift_beginAccess(unaff_x20 + PostHogConfig::flushAt,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x10011f048 | PostHogConfig::maxQueueSize */

/* Function Stack Size: 0x10 bytes */

long_long PostHogConfig::maxQueueSize(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = maxQueueSize;
  _swift_beginAccess(param_1 + maxQueueSize,auStack_38,0,0);
  return *(long_long *)(param_1 + lVar1);
}



/* Address: 0x10011f08c | FUN_10011f08c */

undefined8 FUN_10011f08c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = PostHogConfig::maxQueueSize;
  _swift_beginAccess(unaff_x20 + PostHogConfig::maxQueueSize,auStack_38,0,0);
  return *(undefined8 *)(unaff_x20 + lVar1);
}



/* Address: 0x10011f0cc | PostHogConfig::setMaxQueueSize: */

/* Function Stack Size: 0x18 bytes */

void PostHogConfig::setMaxQueueSize_(ID param_1,SEL param_2,long_long param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = maxQueueSize;
  _swift_beginAccess(param_1 + maxQueueSize,auStack_48,1,0);
  *(long_long *)(param_1 + lVar1) = param_3;
  return;
}


