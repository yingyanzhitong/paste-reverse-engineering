/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1001046e4 | FUN_1001046e4 */

undefined1  [16] FUN_1001046e4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _TtC7PostHog26PostHogErrorTrackingConfig::inAppIncludes;
  _swift_beginAccess(unaff_x20 + _TtC7PostHog26PostHogErrorTrackingConfig::inAppIncludes,param_1,
                     0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x100104724 | _TtC7PostHog26PostHogErrorTrackingConfig::inAppExcludes */

/* Function Stack Size: 0x10 bytes */

ID _TtC7PostHog26PostHogErrorTrackingConfig::inAppExcludes(ID param_1,SEL param_2)

{
  FUN_100104a80(param_1,param_2,&inAppExcludes);
  return param_1;
}



/* Address: 0x100104730 | FUN_100104730 */

void FUN_100104730(void)

{
  FUN_100104af0(&_TtC7PostHog26PostHogErrorTrackingConfig::inAppExcludes);
  return;
}



/* Address: 0x10010473c | _TtC7PostHog26PostHogErrorTrackingConfig::setInAppExcludes: */

/* Function Stack Size: 0x18 bytes */

void _TtC7PostHog26PostHogErrorTrackingConfig::setInAppExcludes_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100104b3c();
  return;
}



/* Address: 0x100104748 | FUN_100104748 */

void FUN_100104748(undefined8 param_1)

{
  FUN_100104bb0(param_1,&_TtC7PostHog26PostHogErrorTrackingConfig::inAppExcludes);
  return;
}



/* Address: 0x100104754 | FUN_100104754 */

undefined1  [16] FUN_100104754(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _TtC7PostHog26PostHogErrorTrackingConfig::inAppExcludes;
  _swift_beginAccess(unaff_x20 + _TtC7PostHog26PostHogErrorTrackingConfig::inAppExcludes,param_1,
                     0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x100104794 | _TtC7PostHog26PostHogErrorTrackingConfig::inAppByDefault */

/* Function Stack Size: 0x10 bytes */

bool _TtC7PostHog26PostHogErrorTrackingConfig::inAppByDefault(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = inAppByDefault;
  _swift_beginAccess(param_1 + inAppByDefault,auStack_38,0,0);
  return (bool)*(byte *)(param_1 + lVar1);
}



/* Address: 0x1001047d8 | FUN_1001047d8 */

undefined1 FUN_1001047d8(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _TtC7PostHog26PostHogErrorTrackingConfig::inAppByDefault;
  _swift_beginAccess(unaff_x20 + _TtC7PostHog26PostHogErrorTrackingConfig::inAppByDefault,auStack_38
                     ,0,0);
  return *(undefined1 *)(unaff_x20 + lVar1);
}



/* Address: 0x100104818 | _TtC7PostHog26PostHogErrorTrackingConfig::setInAppByDefault: */

/* Function Stack Size: 0x14 bytes */

void _TtC7PostHog26PostHogErrorTrackingConfig::setInAppByDefault_
               (ID param_1,SEL param_2,bool param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = inAppByDefault;
  _swift_beginAccess(param_1 + inAppByDefault,auStack_48,1,0);
  *(char *)(param_1 + lVar1) = (char)param_3;
  return;
}



/* Address: 0x100104868 | FUN_100104868 */

void FUN_100104868(undefined1 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _TtC7PostHog26PostHogErrorTrackingConfig::inAppByDefault;
  _swift_beginAccess(unaff_x20 + _TtC7PostHog26PostHogErrorTrackingConfig::inAppByDefault,auStack_48
                     ,1,0);
  *(undefined1 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Address: 0x1001048b4 | FUN_1001048b4 */

undefined1  [16] FUN_1001048b4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _TtC7PostHog26PostHogErrorTrackingConfig::inAppByDefault;
  _swift_beginAccess(unaff_x20 + _TtC7PostHog26PostHogErrorTrackingConfig::inAppByDefault,param_1,
                     0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x1001048f4 | _TtC7PostHog26PostHogErrorTrackingConfig::exceptionSteps */

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x10 bytes */

ID _TtC7PostHog26PostHogErrorTrackingConfig::exceptionSteps(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = exceptionSteps;
  _swift_beginAccess(param_1 + exceptionSteps,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}



/* Address: 0x10010493c | FUN_10010493c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_10010493c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _TtC7PostHog26PostHogErrorTrackingConfig::exceptionSteps;
  _swift_beginAccess(unaff_x20 + _TtC7PostHog26PostHogErrorTrackingConfig::exceptionSteps,auStack_38
                     ,0,0);
  return *(undefined8 *)(unaff_x20 + lVar1);
}



/* Address: 0x10010497c | _TtC7PostHog26PostHogErrorTrackingConfig::setExceptionSteps: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC7PostHog26PostHogErrorTrackingConfig::setExceptionSteps_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = exceptionSteps;
  _swift_beginAccess(param_1 + exceptionSteps,auStack_48,1,0);
  *(ID *)(param_1 + lVar1) = param_3;
  return;
}



/* Address: 0x1001049e0 | FUN_1001049e0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1001049e0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _TtC7PostHog26PostHogErrorTrackingConfig::exceptionSteps;
  _swift_beginAccess(unaff_x20 + _TtC7PostHog26PostHogErrorTrackingConfig::exceptionSteps,auStack_48
                     ,1,0);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  return 0;
}



/* Address: 0x100104a34 | FUN_100104a34 */

undefined1  [16] FUN_100104a34(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _TtC7PostHog26PostHogErrorTrackingConfig::exceptionSteps;
  _swift_beginAccess(unaff_x20 + _TtC7PostHog26PostHogErrorTrackingConfig::exceptionSteps,param_1,
                     0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x100104a74 | _TtC7PostHog26PostHogErrorTrackingConfig::ignoredExceptionTypes */

/* Function Stack Size: 0x10 bytes */

ID _TtC7PostHog26PostHogErrorTrackingConfig::ignoredExceptionTypes(ID param_1,SEL param_2)

{
  FUN_100104a80(param_1,param_2,&ignoredExceptionTypes);
  return param_1;
}



/* Address: 0x100104a80 | FUN_100104a80 */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

NSArray * FUN_100104a80(long param_1,undefined8 param_2,long *param_3)

{
  NSArray *pNVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_38 [24];
  
  lVar3 = *param_3;
  _swift_beginAccess(param_1 + lVar3,auStack_38,0,0);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  _swift_bridgeObjectRetain(uVar2);
  pNVar1 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(uVar2);
  return pNVar1;
}



/* Address: 0x100104ae4 | FUN_100104ae4 */

void FUN_100104ae4(void)

{
  FUN_100104af0(&_TtC7PostHog26PostHogErrorTrackingConfig::ignoredExceptionTypes);
  return;
}



/* Address: 0x100104af0 | FUN_100104af0 */

void FUN_100104af0(long *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_1;
  _swift_beginAccess(unaff_x20 + lVar1,auStack_38,0,0);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100104b30 | _TtC7PostHog26PostHogErrorTrackingConfig::setIgnoredExceptionTypes: */

/* Function Stack Size: 0x18 bytes */

void _TtC7PostHog26PostHogErrorTrackingConfig::setIgnoredExceptionTypes_
               (ID param_1,SEL param_2,ID param_3)

{
  FUN_100104b3c();
  return;
}



/* Address: 0x100104b3c | FUN_100104b3c */

void FUN_100104b3c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  lVar2 = *param_4;
  _swift_beginAccess(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _swift_bridgeObjectRelease(uVar1);
  return;
}



/* Address: 0x100104ba4 | FUN_100104ba4 */

void FUN_100104ba4(undefined8 param_1)

{
  FUN_100104bb0(param_1,&_TtC7PostHog26PostHogErrorTrackingConfig::ignoredExceptionTypes);
  return;
}



/* Address: 0x100104bb0 | FUN_100104bb0 */

void FUN_100104bb0(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_2;
  _swift_beginAccess(unaff_x20 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + lVar2);
  *(undefined8 *)(unaff_x20 + lVar2) = param_1;
  _swift_bridgeObjectRelease(uVar1);
  return;
}



/* Address: 0x100104c00 | FUN_100104c00 */

undefined1  [16] FUN_100104c00(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _TtC7PostHog26PostHogErrorTrackingConfig::ignoredExceptionTypes;
  _swift_beginAccess(unaff_x20 + _TtC7PostHog26PostHogErrorTrackingConfig::ignoredExceptionTypes,
                     param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x100104c40 | FUN_100104c40 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100104c40(ID param_1)

{
  long lVar1;
  long lVar2;
  ID IVar3;
  undefined *puVar4;
  ID IVar5;
  NSString *pNVar6;
  ulong uVar7;
  ulong uVar8;
  long unaff_x20;
  ulong uVar9;
  ulong uVar10;
  String SVar11;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long local_68;
  
  uVar7 = 0;
  *(undefined1 *)(unaff_x20 + _TtC7PostHog26PostHogErrorTrackingConfig::_autoCapture) = 0;
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  *(undefined **)(unaff_x20 + _TtC7PostHog26PostHogErrorTrackingConfig::inAppIncludes) =
       PTR___swiftEmptyArrayStorage_100eae0d8;
  *(undefined **)(unaff_x20 + _TtC7PostHog26PostHogErrorTrackingConfig::inAppExcludes) = puVar4;
  *(undefined1 *)(unaff_x20 + _TtC7PostHog26PostHogErrorTrackingConfig::inAppByDefault) = 1;
  lVar2 = _TtC7PostHog26PostHogErrorTrackingConfig::exceptionSteps;
  FUN_100104fa0();
  _objc_allocWithZone();
  IVar3 = objc_stub::init(param_1);
  *(ID *)(unaff_x20 + lVar2) = IVar3;
  lVar2 = _TtC7PostHog26PostHogErrorTrackingConfig::ignoredExceptionTypes;
  puVar4 = &DAT_100fae2b8;
  FUN_1000f7830(&DAT_100fae2b8,&DAT_100c2db60);
  _swift_initStaticObject();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  FUN_100104fc0();
  IVar3 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffa0,"init");
  IVar5 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
  IVar5 = NSBundle::bundleIdentifier(IVar5);
  if (IVar5 == 0) {
    SVar11.bridgeObject = (void *)0x8000000100d90820;
    SVar11.str = (char *)0xd000000000000013;
  }
  else {
    SVar11 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  lVar2 = _TtC7PostHog26PostHogErrorTrackingConfig::inAppIncludes;
  _swift_beginAccess(IVar3 + _TtC7PostHog26PostHogErrorTrackingConfig::inAppIncludes,&local_80,0x21,
                     0);
  uVar10 = *(ulong *)(IVar3 + lVar2);
  uVar8 = uVar10;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(IVar3 + lVar2) = uVar10;
  uVar9 = uVar10;
  if ((uVar8 & 1) == 0) {
    uVar9 = 0;
    FUN_10010540c(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
    *(ulong *)(IVar3 + lVar2) = uVar9;
  }
  uVar8 = *(ulong *)(uVar9 + 0x10);
  uVar10 = uVar9;
  if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar8) {
    uVar10 = (ulong)(1 < *(ulong *)(uVar9 + 0x18));
    FUN_10010540c(uVar10,uVar8 + 1,1,uVar9);
  }
  *(ulong *)(uVar10 + 0x10) = uVar8 + 1;
  *(String *)(uVar10 + uVar8 * 0x10 + 0x20) = SVar11;
  *(ulong *)(IVar3 + lVar2) = uVar10;
  _swift_endAccess(&local_80);
  IVar5 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
  pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar5 = NSBundle::objectForInfoDictionaryKey_(IVar5,pNVar6);
  if (IVar5 == 0) {
    uStack_98 = 0;
    local_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(IVar5);
  }
  uStack_78 = uStack_98;
  local_80 = local_a0;
  local_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    FUN_1000faea8(&local_80);
  }
  else {
    _swift_dynamicCast(&local_b0,&local_80,PTR___type_metadata_for_Any_100eae0c0 + 8,
                       PTR___type_metadata_for_Swift_String_100eac208,6);
    if ((uVar7 & 1) != 0) {
      _swift_beginAccess(IVar3 + lVar2,&local_80,0x21,0);
      uVar9 = *(ulong *)(IVar3 + lVar2);
      uVar7 = uVar9;
      _swift_isUniquelyReferenced_nonNull_native();
      *(ulong *)(IVar3 + lVar2) = uVar9;
      uVar8 = uVar9;
      if ((uVar7 & 1) == 0) {
        uVar8 = 0;
        FUN_10010540c(0,*(long *)(uVar9 + 0x10) + 1,1,uVar9);
        *(ulong *)(IVar3 + lVar2) = uVar8;
      }
      uVar7 = *(ulong *)(uVar8 + 0x10);
      uVar9 = uVar8;
      if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar7) {
        uVar9 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
        FUN_10010540c(uVar9,uVar7 + 1,1,uVar8);
      }
      *(ulong *)(uVar9 + 0x10) = uVar7 + 1;
      lVar1 = uVar9 + uVar7 * 0x10;
      *(undefined8 *)(lVar1 + 0x20) = local_b0;
      *(undefined8 *)(lVar1 + 0x28) = uStack_a8;
      *(ulong *)(IVar3 + lVar2) = uVar9;
      _swift_endAccess(&local_80);
    }
  }
  return IVar3;
}



/* Address: 0x100104fa0 | FUN_100104fa0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100104fa0(void)

{
  return ZEXT816(0x100f93110);
}



/* Address: 0x100104fc0 | FUN_100104fc0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100104fc0(void)

{
  return ZEXT816(0x100f92f88);
}



/* Address: 0x100104fe0 | _TtC7PostHog26PostHogErrorTrackingConfig::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC7PostHog26PostHogErrorTrackingConfig::init(ID param_1,SEL param_2)

{
  FUN_100104c40();
  return param_1;
}



/* Address: 0x100105000 | FUN_100105000 */

void FUN_100105000(void)

{
  FUN_1001053dc(FUN_100104fc0);
  return;
}



/* Address: 0x10010500c | _TtC7PostHog26PostHogErrorTrackingConfig::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC7PostHog26PostHogErrorTrackingConfig::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + inAppIncludes));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + inAppExcludes));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + ignoredExceptionTypes));
  return;
}



/* Address: 0x100105064 | _TtC7PostHog27PostHogExceptionStepsConfig::enabled */

/* Function Stack Size: 0x10 bytes */

bool _TtC7PostHog27PostHogExceptionStepsConfig::enabled(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = enabled;
  _swift_beginAccess(param_1 + enabled,auStack_38,0,0);
  return (bool)*(byte *)(param_1 + lVar1);
}



/* Address: 0x1001050a8 | FUN_1001050a8 */

undefined1 FUN_1001050a8(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _TtC7PostHog27PostHogExceptionStepsConfig::enabled;
  _swift_beginAccess(unaff_x20 + _TtC7PostHog27PostHogExceptionStepsConfig::enabled,auStack_38,0,0);
  return *(undefined1 *)(unaff_x20 + lVar1);
}



/* Address: 0x1001050e8 | _TtC7PostHog27PostHogExceptionStepsConfig::setEnabled: */

/* Function Stack Size: 0x14 bytes */

void _TtC7PostHog27PostHogExceptionStepsConfig::setEnabled_(ID param_1,SEL param_2,bool param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = enabled;
  _swift_beginAccess(param_1 + enabled,auStack_48,1,0);
  *(char *)(param_1 + lVar1) = (char)param_3;
  return;
}



/* Address: 0x100105138 | FUN_100105138 */

void FUN_100105138(undefined1 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _TtC7PostHog27PostHogExceptionStepsConfig::enabled;
  _swift_beginAccess(unaff_x20 + _TtC7PostHog27PostHogExceptionStepsConfig::enabled,auStack_48,1,0);
  *(undefined1 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Address: 0x100105184 | FUN_100105184 */

undefined1  [16] FUN_100105184(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _TtC7PostHog27PostHogExceptionStepsConfig::enabled;
  _swift_beginAccess(unaff_x20 + _TtC7PostHog27PostHogExceptionStepsConfig::enabled,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x1001051c4 | _TtC7PostHog27PostHogExceptionStepsConfig::maxBytes */

/* Function Stack Size: 0x10 bytes */

long_long _TtC7PostHog27PostHogExceptionStepsConfig::maxBytes(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = maxBytes;
  _swift_beginAccess(param_1 + maxBytes,auStack_38,0,0);
  return *(long_long *)(param_1 + lVar1);
}



/* Address: 0x100105208 | FUN_100105208 */

undefined8 FUN_100105208(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _TtC7PostHog27PostHogExceptionStepsConfig::maxBytes;
  _swift_beginAccess(unaff_x20 + _TtC7PostHog27PostHogExceptionStepsConfig::maxBytes,auStack_38,0,0)
  ;
  return *(undefined8 *)(unaff_x20 + lVar1);
}



/* Address: 0x100105248 | _TtC7PostHog27PostHogExceptionStepsConfig::setMaxBytes: */

/* Function Stack Size: 0x18 bytes */

void _TtC7PostHog27PostHogExceptionStepsConfig::setMaxBytes_
               (ID param_1,SEL param_2,long_long param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = maxBytes;
  _swift_beginAccess(param_1 + maxBytes,auStack_48,1,0);
  *(long_long *)(param_1 + lVar1) = param_3;
  return;
}



/* Address: 0x100105298 | FUN_100105298 */

void FUN_100105298(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _TtC7PostHog27PostHogExceptionStepsConfig::maxBytes;
  _swift_beginAccess(unaff_x20 + _TtC7PostHog27PostHogExceptionStepsConfig::maxBytes,auStack_48,1,0)
  ;
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Address: 0x1001052e4 | FUN_1001052e4 */

undefined1  [16] FUN_1001052e4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _TtC7PostHog27PostHogExceptionStepsConfig::maxBytes;
  _swift_beginAccess(unaff_x20 + _TtC7PostHog27PostHogExceptionStepsConfig::maxBytes,param_1,0x21,0)
  ;
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x100105324 | FUN_100105324 */

void FUN_100105324(void)

{
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + _TtC7PostHog27PostHogExceptionStepsConfig::enabled) = 1;
  *(undefined8 *)(unaff_x20 + _TtC7PostHog27PostHogExceptionStepsConfig::maxBytes) = 0x8000;
  FUN_100104fa0();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"init");
  return;
}



/* Address: 0x100105374 | _TtC7PostHog27PostHogExceptionStepsConfig::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC7PostHog27PostHogExceptionStepsConfig::init(ID param_1,SEL param_2)

{
  class_t *pcVar1;
  ID IVar2;
  objc_super local_30;
  
  *(undefined1 *)(param_1 + enabled) = 1;
  *(undefined8 *)(param_1 + maxBytes) = 0x8000;
  pcVar1 = (class_t *)param_1;
  FUN_100104fa0();
  local_30.receiver = param_1;
  local_30.super_class = pcVar1;
  IVar2 = _objc_msgSendSuper2(&local_30,"init");
  return IVar2;
}



/* Address: 0x1001053d0 | FUN_1001053d0 */

void FUN_1001053d0(void)

{
  FUN_1001053dc(FUN_100104fa0);
  return;
}



/* Address: 0x1001053dc | FUN_1001053dc */

void FUN_1001053dc(code *param_1)

{
  (*param_1)();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x10010540c | FUN_10010540c */

undefined * FUN_10010540c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100105514);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fae2b8;
    FUN_1000f7830(&DAT_100fae2b8,&DAT_100c2db60);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,PTR___type_metadata_for_Swift_String_100eac208);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x100105514 | FUN_100105514 */

void FUN_100105514(void)

{
  FUN_100105d5c();
  return;
}



/* Address: 0x100105528 | FUN_100105528 */

undefined * FUN_100105528(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100105648);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100faf638;
    FUN_1000f7830(&DAT_100faf638,&DAT_100c2e3d0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x58) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&DAT_100eb7a68);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x58 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0x58);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x100105648 | FUN_100105648 */

undefined * FUN_100105648(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100105764);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100faf628;
    FUN_1000f7830(&DAT_100faf628,&DAT_100c2e3c0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x50) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&DAT_100eb79d8);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x50 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0x50);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x100105764 | FUN_100105764 */

undefined * FUN_100105764(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100105864);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100faf630;
    FUN_1000f7830(&DAT_100faf630,&DAT_100c2e3c8);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar1,puVar4,uVar6 << 3);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 8 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x100105864 | FUN_100105864 */

undefined * FUN_100105864(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100105994);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar6 != 0) {
    puVar3 = &DAT_100faf620;
    FUN_1000f7830(&DAT_100faf620,&DAT_100c2e3b0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100fae898;
    FUN_1000f7830(&DAT_100fae898,&DAT_100c2e4e0);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x100105994 | FUN_100105994 */

undefined * FUN_100105994(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100105ac4);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar6 != 0) {
    puVar3 = &DAT_100faf610;
    FUN_1000f7830(&DAT_100faf610,&DAT_100c2e3a0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100faf618;
    FUN_1000f7830(&DAT_100faf618,&DAT_100c2ea90);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x100105ac4 | FUN_100105ac4 */

void FUN_100105ac4(void)

{
  FUN_100105ae0();
  return;
}



/* Address: 0x100105ae0 | FUN_100105ae0 */

ulong FUN_100105ae0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5,
                   undefined8 param_6,undefined8 param_7)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if ((ulong)param_4 >> 0x3e == 0) {
    uVar3 = *(ulong *)((undefined *)((ulong)param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    _Var1.unknown = (undefined *)((ulong)param_4 & 0xffffffffffffff8);
    if (((ulong)param_4 & 0x8000000000000000) != 0) {
      _Var1.unknown = param_4;
    }
    uVar3 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  uVar5 = param_2;
  if (((param_3 & 1) != 0) && (uVar5 = uVar3, (long)uVar3 < (long)param_2)) {
    if ((long)(uVar3 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100105c24);
      (*pcVar2)();
    }
    uVar5 = uVar3 * 2;
    if (uVar5 - param_2 == 0 || (long)uVar5 < (long)param_2) {
      uVar5 = param_2;
    }
  }
  if ((ulong)param_4 >> 0x3e == 0) {
    uVar3 = *(ulong *)((undefined *)((ulong)param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)param_4 & 0xffffffffffffff8);
    if (((ulong)param_4 & 0x8000000000000000) != 0) {
      _Var1.unknown = param_4;
    }
    uVar3 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  uVar4 = uVar3;
  (*param_5)(uVar3,uVar5);
  if ((param_1 & 1) == 0) {
    if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100105c20);
      (*pcVar2)();
    }
    FUN_1001061cc(0,uVar3,uVar4 + 0x20,param_4,param_6,param_7);
  }
  else {
    uVar5 = (ulong)param_4 & 0xffffffffffffff8;
    if ((uVar4 != uVar5) || ((void *)((long)(uVar5 + 0x20) + uVar3 * 8) <= (void *)(uVar4 + 0x20)))
    {
      _memmove((void *)(uVar4 + 0x20),(void *)(uVar5 + 0x20),uVar3 << 3);
    }
    *(undefined8 *)(uVar5 + 0x10) = 0;
    _swift_bridgeObjectRelease(param_4);
  }
  return uVar4;
}



/* Address: 0x100105c24 | FUN_100105c24 */

void FUN_100105c24(void)

{
  FUN_100105ae0();
  return;
}



/* Address: 0x100105c40 | FUN_100105c40 */

undefined * FUN_100105c40(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100105d48);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100faf640;
    FUN_1000f7830(&DAT_100faf640,&DAT_100c2e3d8);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,&DAT_100eb7c28);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x100105d48 | FUN_100105d48 */

void FUN_100105d48(void)

{
  FUN_100105d5c();
  return;
}



/* Address: 0x100105d5c | FUN_100105d5c */

ulong FUN_100105d5c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5,
                   undefined8 param_6)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if ((ulong)param_4 >> 0x3e == 0) {
    uVar3 = *(ulong *)((undefined *)((ulong)param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    _Var1.unknown = (undefined *)((ulong)param_4 & 0xffffffffffffff8);
    if (((ulong)param_4 & 0x8000000000000000) != 0) {
      _Var1.unknown = param_4;
    }
    uVar3 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  uVar5 = param_2;
  if (((param_3 & 1) != 0) && (uVar5 = uVar3, (long)uVar3 < (long)param_2)) {
    if ((long)(uVar3 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100105e98);
      (*pcVar2)();
    }
    uVar5 = uVar3 * 2;
    if (uVar5 - param_2 == 0 || (long)uVar5 < (long)param_2) {
      uVar5 = param_2;
    }
  }
  if ((ulong)param_4 >> 0x3e == 0) {
    uVar3 = *(ulong *)((undefined *)((ulong)param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)param_4 & 0xffffffffffffff8);
    if (((ulong)param_4 & 0x8000000000000000) != 0) {
      _Var1.unknown = param_4;
    }
    uVar3 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  uVar4 = uVar3;
  (*param_5)(uVar3,uVar5);
  if ((param_1 & 1) == 0) {
    if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100105e94);
      (*pcVar2)();
    }
    FUN_1001062e8(0,uVar3,uVar4 + 0x20,param_4,param_6);
  }
  else {
    uVar5 = (ulong)param_4 & 0xffffffffffffff8;
    if ((uVar4 != uVar5) || ((void *)((long)(uVar5 + 0x20) + uVar3 * 8) <= (void *)(uVar4 + 0x20)))
    {
      _memmove((void *)(uVar4 + 0x20),(void *)(uVar5 + 0x20),uVar3 << 3);
    }
    *(undefined8 *)(uVar5 + 0x10) = 0;
    _swift_bridgeObjectRelease(param_4);
  }
  return uVar4;
}



/* Address: 0x100105e98 | FUN_100105e98 */

undefined * FUN_100105e98(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100105fa0);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100faf608;
    FUN_1000f7830(&DAT_100faf608,&DAT_100c2e390);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,PTR___type_metadata_for_Foundation_Data_100ea7300);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x100105fa0 | FUN_100105fa0 */

undefined * FUN_100105fa0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1001060d0);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar6 != 0) {
    puVar3 = &DAT_100faf600;
    FUN_1000f7830(&DAT_100faf600,&DAT_100c2e388);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100fae668;
    FUN_1000f7830(&DAT_100fae668,&DAT_100c2e4a0);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x20 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x1001060d0 | FUN_1001060d0 */

void FUN_1001060d0(void)

{
  FUN_1001060e4();
  return;
}



/* Address: 0x1001060e4 | FUN_1001060e4 */

undefined *
FUN_1001060e4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  size_t sVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1001061cc);
        (*pcVar3)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  sVar6 = *(size_t *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)sVar6) {
    uVar5 = sVar6;
  }
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    FUN_1000f7830(param_5,param_6);
    _swift_allocObject();
    puVar4 = param_5;
    _malloc_size();
    *(size_t *)(param_5 + 0x10) = sVar6;
    *(long *)(param_5 + 0x18) = (long)puVar4 * 2 + -0x40;
    puVar4 = param_5;
  }
  puVar1 = puVar4 + 0x20;
  puVar2 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar1,puVar2,sVar6);
  }
  else {
    if (puVar4 != param_4 || puVar2 + sVar6 <= puVar1) {
      _memmove(puVar1,puVar2,sVar6);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar4;
}



/* Address: 0x1001061cc | FUN_1001061cc */

UnsafeMutablePointer<Swift__CocoaArrayWrapper__copyContents(subRange:_Swift_Range<Swift_Int>,initializing:_Swift_UnsafeMutablePointer<Swift_AnyObject>)__>_Swift_UnsafeMutablePointer<Swift_AnyObject>>
 FUN_1001061cc(Range<__int64> param_1,
              UnsafeMutablePointer<Swift__CocoaArrayWrapper__copyContents(subRange:_Swift_Range<Swift_Int>,initializing:_Swift_UnsafeMutablePointer<Swift_AnyObject>)__>_Swift_UnsafeMutablePointer<Swift_AnyObject>>
              param_2,_CocoaArrayWrapper param_3,_ArrayBuffer param_4,undefined8 param_5,
              undefined8 param_6)

{
  undefined *puVar1;
  code *pcVar2;
  Range<__int64> RVar3;
  undefined8 uVar4;
  UnsafeMutablePointer<Swift__CocoaArrayWrapper__copyContents(subRange:_Swift_Range<Swift_Int>,initializing:_Swift_UnsafeMutablePointer<Swift_AnyObject>)__>_Swift_UnsafeMutablePointer<Swift_AnyObject>>
  UVar5;
  
  if (((ulong)param_4.unknown & 0xc000000000000001) != 0) {
    if ((long)param_2.unknown < (long)param_1.unknown) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1001062e4);
      (*pcVar2)();
    }
    if (param_1.unknown != param_2.unknown) {
      if ((long)param_2.unknown <= (long)param_1.unknown) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1001062e8);
        (*pcVar2)();
      }
      FUN_10000ec2c(0,param_5,param_6);
      RVar3.unknown = param_1.unknown;
      do {
        puVar1 = RVar3.unknown + 1;
        Swift::_ArrayBuffer::_typeCheckSlowPath((__int64)RVar3.unknown,param_4);
        RVar3.unknown = puVar1;
      } while (param_2.unknown != puVar1);
    }
  }
  if ((ulong)param_4.unknown >> 0x3e == 0) {
    if (!SBORROW8((long)param_2.unknown,(long)param_1.unknown)) {
      uVar4 = 0;
      FUN_10000ec2c(0,param_5,param_6);
      _swift_arrayInitWithCopy
                (param_3.unknown,
                 ((ulong)param_4.unknown & 0xffffffffffffff8) + (long)param_1.unknown * 8 + 0x20,
                 (long)param_2.unknown - (long)param_1.unknown,uVar4);
      _swift_bridgeObjectRelease(param_4.unknown);
      return (UnsafeMutablePointer<Swift__CocoaArrayWrapper__copyContents(subRange:_Swift_Range<Swift_Int>,initializing:_Swift_UnsafeMutablePointer<Swift_AnyObject>)__>_Swift_UnsafeMutablePointer<Swift_AnyObject>>
              )(param_3.unknown + ((long)param_2.unknown - (long)param_1.unknown) * 8);
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1001062e0);
    (*pcVar2)();
  }
  UVar5 = Swift::_CocoaArrayWrapper::__copyContents(param_1,param_2,param_3);
  return (UnsafeMutablePointer<Swift__CocoaArrayWrapper__copyContents(subRange:_Swift_Range<Swift_Int>,initializing:_Swift_UnsafeMutablePointer<Swift_AnyObject>)__>_Swift_UnsafeMutablePointer<Swift_AnyObject>>
          )UVar5.unknown;
}



/* Address: 0x1001062e8 | FUN_1001062e8 */

UnsafeMutablePointer<Swift__CocoaArrayWrapper__copyContents(subRange:_Swift_Range<Swift_Int>,initializing:_Swift_UnsafeMutablePointer<Swift_AnyObject>)__>_Swift_UnsafeMutablePointer<Swift_AnyObject>>
 FUN_1001062e8(Range<__int64> param_1,
              UnsafeMutablePointer<Swift__CocoaArrayWrapper__copyContents(subRange:_Swift_Range<Swift_Int>,initializing:_Swift_UnsafeMutablePointer<Swift_AnyObject>)__>_Swift_UnsafeMutablePointer<Swift_AnyObject>>
              param_2,_CocoaArrayWrapper param_3,_ArrayBuffer param_4,code *param_5)

{
  undefined *puVar1;
  code *pcVar2;
  Range<__int64> RVar3;
  undefined8 uVar4;
  UnsafeMutablePointer<Swift__CocoaArrayWrapper__copyContents(subRange:_Swift_Range<Swift_Int>,initializing:_Swift_UnsafeMutablePointer<Swift_AnyObject>)__>_Swift_UnsafeMutablePointer<Swift_AnyObject>>
  UVar5;
  
  if (((ulong)param_4.unknown & 0xc000000000000001) != 0) {
    if ((long)param_2.unknown < (long)param_1.unknown) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1001063ec);
      (*pcVar2)();
    }
    if (param_1.unknown != param_2.unknown) {
      if ((long)param_2.unknown <= (long)param_1.unknown) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1001063f0);
        (*pcVar2)();
      }
      (*param_5)(0);
      RVar3.unknown = param_1.unknown;
      do {
        puVar1 = RVar3.unknown + 1;
        Swift::_ArrayBuffer::_typeCheckSlowPath((__int64)RVar3.unknown,param_4);
        RVar3.unknown = puVar1;
      } while (param_2.unknown != puVar1);
    }
  }
  if ((ulong)param_4.unknown >> 0x3e == 0) {
    if (!SBORROW8((long)param_2.unknown,(long)param_1.unknown)) {
      uVar4 = 0;
      (*param_5)(0);
      _swift_arrayInitWithCopy
                (param_3.unknown,
                 ((ulong)param_4.unknown & 0xffffffffffffff8) + (long)param_1.unknown * 8 + 0x20,
                 (long)param_2.unknown - (long)param_1.unknown,uVar4);
      _swift_bridgeObjectRelease(param_4.unknown);
      return (UnsafeMutablePointer<Swift__CocoaArrayWrapper__copyContents(subRange:_Swift_Range<Swift_Int>,initializing:_Swift_UnsafeMutablePointer<Swift_AnyObject>)__>_Swift_UnsafeMutablePointer<Swift_AnyObject>>
              )(param_3.unknown + ((long)param_2.unknown - (long)param_1.unknown) * 8);
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1001063e8);
    (*pcVar2)();
  }
  UVar5 = Swift::_CocoaArrayWrapper::__copyContents(param_1,param_2,param_3);
  return (UnsafeMutablePointer<Swift__CocoaArrayWrapper__copyContents(subRange:_Swift_Range<Swift_Int>,initializing:_Swift_UnsafeMutablePointer<Swift_AnyObject>)__>_Swift_UnsafeMutablePointer<Swift_AnyObject>>
          )UVar5.unknown;
}


