/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b9c050 | FUN_100b9c050 */

void FUN_100b9c050(void)

{
  return;
}



/* Address: 0x100b9c068 | FUN_100b9c068 */

void FUN_100b9c068(char *param_1,void *param_2,URLRequest_conflict param_3)

{
  String SVar1;
  
  SVar1.bridgeObject = param_2;
  SVar1.str = param_1;
  Foundation::URLRequest::_setValue(SVar1,param_3);
  return;
}



/* Address: 0x100b9c070 | FUN_100b9c070 */

undefined1  [16] FUN_100b9c070(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 2) {
    uVar1 = param_1;
  }
  auVar2[8] = 1 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Address: 0x100b9c080 | FUN_100b9c080 */

void FUN_100b9c080(undefined8 *param_1,undefined8 *param_2,byte param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_100b9c070();
  *param_1 = uVar1;
  *(byte *)(param_1 + 1) = param_3 & 1;
  return;
}



/* Address: 0x100b9c0b0 | _TtC6Sentry20SentryProfileOptions::lifecycle */

/* Function Stack Size: 0x10 bytes */

long_long _TtC6Sentry20SentryProfileOptions::lifecycle(ID param_1,SEL param_2)

{
  FUN_100b9c0d0();
  return param_1;
}



/* Address: 0x100b9c0d0 | FUN_100b9c0d0 */

undefined8 FUN_100b9c0d0(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _TtC6Sentry20SentryProfileOptions::lifecycle;
  FUN_100b80d44(unaff_x20 + _TtC6Sentry20SentryProfileOptions::lifecycle,auStack_38,0);
  return *(undefined8 *)(unaff_x20 + lVar1);
}



/* Address: 0x100b9c10c | _TtC6Sentry20SentryProfileOptions::setLifecycle: */

/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry20SentryProfileOptions::setLifecycle_(ID param_1,SEL param_2,long_long param_3)

{
  FUN_100b9c130(param_3);
  return;
}



/* Address: 0x100b9c130 | FUN_100b9c130 */

void FUN_100b9c130(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _TtC6Sentry20SentryProfileOptions::lifecycle;
  FUN_100b80d44(unaff_x20 + _TtC6Sentry20SentryProfileOptions::lifecycle,auStack_48,1);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  FUN_100b78c90();
  return;
}



/* Address: 0x100b9c16c | FUN_100b9c16c */

void FUN_100b9c16c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = _TtC6Sentry20SentryProfileOptions::lifecycle;
  FUN_100b78c80(param_1,param_1);
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b9c19c | _TtC6Sentry20SentryProfileOptions::sessionSampleRate */

/* Function Stack Size: 0x10 bytes */

float _TtC6Sentry20SentryProfileOptions::sessionSampleRate(ID param_1,SEL param_2)

{
  float in_s0;
  
  FUN_100b9c1bc();
  return in_s0;
}



/* Address: 0x100b9c1bc | FUN_100b9c1bc */

undefined4 FUN_100b9c1bc(void)

{
  undefined4 *puVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined4 *)(unaff_x20 + _TtC6Sentry20SentryProfileOptions::sessionSampleRate);
  FUN_100b80d44(puVar1,auStack_38,0);
  return *puVar1;
}



/* Address: 0x100b9c1fc | _TtC6Sentry20SentryProfileOptions::setSessionSampleRate: */

/* Function Stack Size: 0x14 bytes */

void _TtC6Sentry20SentryProfileOptions::setSessionSampleRate_(ID param_1,SEL param_2,float param_3)

{
  FUN_100b9c21c();
  return;
}



/* Address: 0x100b9c21c | FUN_100b9c21c */

void FUN_100b9c21c(undefined4 param_1)

{
  undefined4 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined4 *)(unaff_x20 + _TtC6Sentry20SentryProfileOptions::sessionSampleRate);
  FUN_100b80d44(puVar1,auStack_48,1);
  *puVar1 = param_1;
  return;
}



/* Address: 0x100b9c268 | FUN_100b9c268 */

void FUN_100b9c268(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = _TtC6Sentry20SentryProfileOptions::sessionSampleRate;
  FUN_100b78c80(param_1,param_1);
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b9c298 | _TtC6Sentry20SentryProfileOptions::profileAppStarts */

/* Function Stack Size: 0x10 bytes */

bool _TtC6Sentry20SentryProfileOptions::profileAppStarts(ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100b9c2bc();
  return uVar1 & 1;
}



/* Address: 0x100b9c2bc | FUN_100b9c2bc */

undefined1 FUN_100b9c2bc(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _TtC6Sentry20SentryProfileOptions::profileAppStarts;
  FUN_100b80d44(unaff_x20 + _TtC6Sentry20SentryProfileOptions::profileAppStarts,auStack_38,0);
  return *(undefined1 *)(unaff_x20 + lVar1);
}



/* Address: 0x100b9c2f8 | _TtC6Sentry20SentryProfileOptions::setProfileAppStarts: */

/* Function Stack Size: 0x14 bytes */

void _TtC6Sentry20SentryProfileOptions::setProfileAppStarts_(ID param_1,SEL param_2,bool param_3)

{
  FUN_100b9c31c(param_3);
  return;
}



/* Address: 0x100b9c31c | FUN_100b9c31c */

void FUN_100b9c31c(undefined1 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _TtC6Sentry20SentryProfileOptions::profileAppStarts;
  FUN_100b80d44(unaff_x20 + _TtC6Sentry20SentryProfileOptions::profileAppStarts,auStack_48,1);
  *(undefined1 *)(unaff_x20 + lVar1) = param_1;
  FUN_100b78c90();
  return;
}



/* Address: 0x100b9c358 | FUN_100b9c358 */

void FUN_100b9c358(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = _TtC6Sentry20SentryProfileOptions::profileAppStarts;
  FUN_100b78c80(param_1,param_1);
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b9c388 | FUN_100b9c388 */

void FUN_100b9c388(void)

{
  long unaff_x20;
  
  _swift_getObjectType();
  *(undefined8 *)(unaff_x20 + _TtC6Sentry20SentryProfileOptions::lifecycle) = 0;
  *(undefined4 *)(unaff_x20 + _TtC6Sentry20SentryProfileOptions::sessionSampleRate) = 0;
  *(undefined1 *)(unaff_x20 + _TtC6Sentry20SentryProfileOptions::profileAppStarts) = 0;
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"init");
  return;
}



/* Address: 0x100b9c3e0 | _TtC6Sentry20SentryProfileOptions::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry20SentryProfileOptions::init(ID param_1,SEL param_2)

{
  FUN_100b9c388();
  return param_1;
}



/* Address: 0x100b9c400 | thunk_FUN_100b9c404 */

void thunk_FUN_100b9c404(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_1010461e8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9b6d0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9b6d0,&DAT_100f390e0);
  DAT_1010461e8 = pTVar1;
  return;
}



/* Address: 0x100b9c404 | FUN_100b9c404 */

void FUN_100b9c404(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_1010461e8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9b6d0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9b6d0,&DAT_100f390e0);
  DAT_1010461e8 = pTVar1;
  return;
}



/* Address: 0x100b9c444 | FUN_100b9c444 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100b9c444(void)

{
  return ZEXT816(0x100fa1ad8);
}



/* Address: 0x100b9c464 | FUN_100b9c464 */

undefined1  [16] FUN_100b9c464(void)

{
  return ZEXT816(0x100f390e0);
}



/* Address: 0x100b9c474 | FUN_100b9c474 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100b9c540) */
/* WARNING: Removing unreachable block (ram,0x000100b9c50c) */
/* WARNING: Removing unreachable block (ram,0x000100b9c690) */
/* WARNING: Removing unreachable block (ram,0x000100b9c654) */

void FUN_100b9c474(long param_1)

{
  long unaff_x21;
  double timeIntervalSince1970;
  undefined1 auStack_88 [24];
  undefined8 local_70;
  
  Foundation::Date::typeMetadataAccessor();
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100b9c768(auStack_88);
  Swift::Decoder::_singleValueContainer();
  if (unaff_x21 == 0) {
    FUN_100004640(auStack_88,local_70);
    FUN_100b9c768();
    timeIntervalSince1970 = Swift::SingleValueDecodingContainer::_decode();
    Foundation::Date::init(timeIntervalSince1970);
    FUN_100004594(auStack_88);
  }
  return;
}



/* Address: 0x100b9c75c | FUN_100b9c75c */

void FUN_100b9c75c(undefined8 param_1,undefined8 param_2)

{
  _swift_allocError(param_1,param_2,0,0);
  return;
}



/* Address: 0x100b9c768 | FUN_100b9c768 */

void FUN_100b9c768(void)

{
  return;
}



/* Address: 0x100b9c77c | FUN_100b9c77c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100b9c77c(undefined8 param_1,undefined8 param_2)

{
  NSString *pNVar1;
  class_t *pcVar2;
  NSString *pNVar3;
  long unaff_x21;
  
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  pcVar2 = &objc::class_t::SentryFileManagerHelper;
  _objc_allocWithZone(&objc::class_t::SentryFileManagerHelper);
  FUN_100b9f694(pNVar1,pcVar2);
  if (unaff_x21 == 0) {
    pNVar3 = pNVar1;
    FUN_100b9f83c();
    _objc_allocWithZone();
    FUN_100b9cf18(pNVar1,param_1,param_2,pNVar3);
  }
  else {
    _swift_unknownObjectRelease(param_1);
  }
  return;
}



/* Address: 0x100b9c81c | FUN_100b9c81c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_100b9c81c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  _CocoaArrayWrapper _Var1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  
  lVar11 = *(long *)(param_1 + 0x10);
  puVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar11 != 0) {
    lVar5 = param_1;
    _swift_bridgeObjectRetain();
    puVar10 = (undefined8 *)(lVar5 + 0x28);
    puVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
    do {
      uVar2 = puVar10[-1];
      uVar4 = *puVar10;
      _swift_bridgeObjectRetain(uVar4);
      lVar5 = param_3;
      FUN_100b9ec7c(param_3,param_4,uVar2,uVar4);
      _swift_bridgeObjectRelease(uVar4);
      if (lVar5 != 0) {
        puVar7 = puVar8;
        _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
        if ((((int)puVar7 == 0) || ((long)puVar8 < 0)) ||
           (puVar7 = puVar8, ((ulong)puVar8 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar8 >> 0x3e == 0) {
            lVar6 = *(long *)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
          }
          else {
            _Var1.unknown = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
            if ((long)puVar8 < 0) {
              _Var1.unknown = puVar8;
            }
            lVar6 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
          }
          puVar7 = (undefined *)0x0;
          FUN_100b6e95c(0,lVar6 + 1,1,puVar8);
        }
        uVar9 = (ulong)puVar7 & 0xffffffffffffff8;
        uVar3 = *(ulong *)(uVar9 + 0x10);
        puVar8 = puVar7;
        if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar3) {
          puVar8 = (undefined *)(ulong)(1 < *(ulong *)(uVar9 + 0x18));
          FUN_100b6e95c(puVar8,uVar3 + 1,1,puVar7);
          uVar9 = (ulong)puVar8 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar9 + 0x10) = uVar3 + 1;
        *(long *)(uVar9 + uVar3 * 8 + 0x20) = lVar5;
      }
      puVar10 = puVar10 + 2;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    _swift_bridgeObjectRelease(param_1);
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar8;
}



/* Address: 0x100b9c998 | _TtC6Sentry17SentryFileManager::envelopeDeletedCallback */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry17SentryFileManager::envelopeDeletedCallback(ID param_1,SEL param_2)

{
  void *pvVar1;
  undefined *local_50;
  undefined8 local_48;
  code *local_40;
  undefined *puStack_38;
  ID local_30;
  SEL local_28;
  
  FUN_100b9ca14();
  if (param_1 == 0) {
    pvVar1 = (void *)0x0;
  }
  else {
    local_50 = PTR___NSConcreteStackBlock_100ea82a0;
    local_48 = 0x42000000;
    local_40 = FUN_1000854ec;
    puStack_38 = &DAT_100f391d0;
    local_30 = param_1;
    local_28 = param_2;
    pvVar1 = __Block_copy(&local_50);
    _swift_release(local_28);
  }
  return (ID)pvVar1;
}



/* Address: 0x100b9ca14 | FUN_100b9ca14 */

void FUN_100b9ca14(void)

{
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  FUN_100b80d44(unaff_x20 + _TtC6Sentry17SentryFileManager::envelopeDeletedCallback,auStack_38,0);
  FUN_100b6fbdc();
  FUN_100011128();
  FUN_100b6fbdc();
  return;
}



/* Address: 0x100b9ca60 | _TtC6Sentry17SentryFileManager::setEnvelopeDeletedCallback: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry17SentryFileManager::setEnvelopeDeletedCallback_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  void *pvVar1;
  undefined *puVar2;
  code *pcVar3;
  
  pvVar1 = __Block_copy((void *)param_3);
  if (pvVar1 == (void *)0x0) {
    puVar2 = (undefined *)0x0;
    pcVar3 = (code *)0x0;
  }
  else {
    puVar2 = &DAT_100f391b8;
    _swift_allocObject(&DAT_100f391b8,0x18,7);
    *(void **)(puVar2 + 0x10) = pvVar1;
    pcVar3 = FUN_100b93d18;
  }
  FUN_100b9cae0(pcVar3,puVar2);
  return;
}



/* Address: 0x100b9cae0 | FUN_100b9cae0 */

void FUN_100b9cae0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _TtC6Sentry17SentryFileManager::envelopeDeletedCallback);
  FUN_100b80d44(puVar1,auStack_48,1);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  FUN_100004550(uVar2,uVar3);
  FUN_100b78c90();
  return;
}



/* Address: 0x100b9cb2c | FUN_100b9cb2c */

void FUN_100b9cb2c(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  code *pcVar2;
  
  FUN_100b9ca14();
  if (param_2 == 0) {
    pcVar2 = (code *)0x0;
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = &DAT_100f39230;
    _swift_allocObject(&DAT_100f39230,0x20,7);
    *(long *)(puVar1 + 0x10) = param_2;
    *(undefined8 *)(puVar1 + 0x18) = param_3;
    pcVar2 = FUN_100b9fd44;
  }
  *param_1 = pcVar2;
  param_1[1] = puVar1;
  return;
}



/* Address: 0x100b9cb90 | FUN_100b9cb90 */

void FUN_100b9cb90(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  if (lVar1 == 0) {
    pcVar4 = (code *)0x0;
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = &DAT_100f39208;
    _swift_allocObject(&DAT_100f39208,0x20,7);
    *(long *)(puVar3 + 0x10) = lVar1;
    *(long *)(puVar3 + 0x18) = lVar2;
    pcVar4 = FUN_100b9fcec;
  }
  FUN_100011128(lVar1,lVar2);
  FUN_100b9cae0(pcVar4,puVar3);
  return;
}



/* Address: 0x100b9cc10 | FUN_100b9cc10 */

undefined1  [16] FUN_100b9cc10(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _TtC6Sentry17SentryFileManager::envelopeDeletedCallback;
  FUN_100b80d44(unaff_x20 + _TtC6Sentry17SentryFileManager::envelopeDeletedCallback,param_1,0x21);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x100b9cc4c | _TtC6Sentry17SentryFileManager::basePath */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry17SentryFileManager::basePath(ID param_1,SEL param_2)

{
  FUN_100b9cc70(param_1,param_2,FUN_100b9cc58);
  return param_1;
}



/* Address: 0x100b9cc58 | FUN_100b9cc58 */

void FUN_100b9cc58(void)

{
  FUN_100b9ec38(&PTR_s_basePath_100f86500);
  return;
}



/* Address: 0x100b9cc64 | _TtC6Sentry17SentryFileManager::sentryPath */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry17SentryFileManager::sentryPath(ID param_1,SEL param_2)

{
  FUN_100b9cc70(param_1,param_2,FUN_100b9ccc4);
  return param_1;
}



/* Address: 0x100b9cc70 | FUN_100b9cc70 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

NSString * FUN_100b9cc70(undefined8 param_1,undefined8 param_2,code *param_3)

{
  NSString *pNVar1;
  
  (*param_3)(param_1);
  FUN_100b6f868();
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  FUN_100b6f980();
  return pNVar1;
}



/* Address: 0x100b9ccc4 | FUN_100b9ccc4 */

void FUN_100b9ccc4(void)

{
  FUN_100b9ec38(&PTR_s_sentryPath_100f89418);
  return;
}



/* Address: 0x100b9ccd0 | _TtC6Sentry17SentryFileManager::breadcrumbsFilePathOne */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry17SentryFileManager::breadcrumbsFilePathOne(ID param_1,SEL param_2)

{
  FUN_100b9cc70(param_1,param_2,FUN_100b9ccdc);
  return param_1;
}



/* Address: 0x100b9ccdc | FUN_100b9ccdc */

void FUN_100b9ccdc(void)

{
  FUN_100b9ec38(&PTR_s_breadcrumbsFilePathOne_100f86638);
  return;
}



/* Address: 0x100b9cce8 | _TtC6Sentry17SentryFileManager::breadcrumbsFilePathTwo */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry17SentryFileManager::breadcrumbsFilePathTwo(ID param_1,SEL param_2)

{
  FUN_100b9cc70(param_1,param_2,FUN_100b9ccf4);
  return param_1;
}



/* Address: 0x100b9ccf4 | FUN_100b9ccf4 */

void FUN_100b9ccf4(void)

{
  FUN_100b9ec38(&PTR_s_breadcrumbsFilePathTwo_100f86640);
  return;
}



/* Address: 0x100b9cd00 | _TtC6Sentry17SentryFileManager::previousBreadcrumbsFilePathOne */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry17SentryFileManager::previousBreadcrumbsFilePathOne(ID param_1,SEL param_2)

{
  FUN_100b9cc70(param_1,param_2,FUN_100b9cd0c);
  return param_1;
}



/* Address: 0x100b9cd0c | FUN_100b9cd0c */

void FUN_100b9cd0c(void)

{
  FUN_100b9ec38(&PTR_s_previousBreadcrumbsFilePathOne_100f88c38);
  return;
}



/* Address: 0x100b9cd18 | _TtC6Sentry17SentryFileManager::previousBreadcrumbsFilePathTwo */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry17SentryFileManager::previousBreadcrumbsFilePathTwo(ID param_1,SEL param_2)

{
  FUN_100b9cc70(param_1,param_2,FUN_100b9cd24);
  return param_1;
}



/* Address: 0x100b9cd24 | FUN_100b9cd24 */

void FUN_100b9cd24(void)

{
  FUN_100b9ec38(&PTR_s_previousBreadcrumbsFilePathTwo_100f88c40);
  return;
}



/* Address: 0x100b9cd30 | FUN_100b9cd30 */

void FUN_100b9cd30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_allocWithZone();
  FUN_100b9cd88(param_1,param_2,param_3);
  return;
}



/* Address: 0x100b9cd88 | FUN_100b9cd88 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

class_t * FUN_100b9cd88(class_t *param_1,undefined8 param_2,undefined8 param_3)

{
  class_t *pcVar1;
  long unaff_x21;
  
  pcVar1 = &objc::class_t::SentryFileManagerHelper;
  _objc_allocWithZone(&objc::class_t::SentryFileManagerHelper);
  FUN_10021b704();
  FUN_100b9f768(param_1);
  if (unaff_x21 == 0) {
    pcVar1 = param_1;
    FUN_100b9f83c();
    _objc_allocWithZone();
    FUN_100b9cf18(param_1,param_2,param_3,pcVar1);
  }
  else {
    _swift_unknownObjectRelease(param_2);
    param_1 = pcVar1;
  }
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return param_1;
}



/* Address: 0x100b9ce68 | _TtC6Sentry17SentryFileManager::initWithOptions:dateProvider:dispatchQueueWrapper:error: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autorelease replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100b9cec8) */
/* WARNING: Removing unreachable block (ram,0x000100b9cef4) */
/* WARNING: Removing unreachable block (ram,0x000100b9cecc) */
/* Function Stack Size: 0x30 bytes */

ID _TtC6Sentry17SentryFileManager::initWithOptions_dateProvider_dispatchQueueWrapper_error_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID *param_6)

{
  _swift_unknownObjectRetain(param_4);
  FUN_100b9cd88(param_3,param_4,param_5);
  return param_3;
}



/* Address: 0x100b9cf18 | FUN_100b9cf18 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID FUN_100b9cf18(ID param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ID IVar2;
  undefined *puVar3;
  void *aBlock;
  long unaff_x20;
  undefined *local_80;
  undefined8 local_78;
  code *local_70;
  undefined *puStack_68;
  code *local_60;
  undefined *local_58;
  
  puVar1 = (undefined8 *)(unaff_x20 + _TtC6Sentry17SentryFileManager::envelopeDeletedCallback);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry17SentryFileManager::dispatchQueue) = param_3;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry17SentryFileManager::dateProvider) = param_2;
  *(ID *)(unaff_x20 + _TtC6Sentry17SentryFileManager::helper) = param_1;
  FUN_100b9f83c();
  _swift_unknownObjectRetain(param_2);
  IVar2 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffb0,"init");
  puVar3 = &DAT_100f39158;
  FUN_100b6f90c(&DAT_100f39158,0x18);
  _swift_unknownObjectWeakInit(puVar3 + 0x10,IVar2);
  local_60 = FUN_100b9fd6c;
  local_80 = PTR___NSConcreteStackBlock_100ea82a0;
  local_78 = 0x42000000;
  local_70 = FUN_100030410;
  puStack_68 = &DAT_100f39248;
  local_58 = puVar3;
  aBlock = __Block_copy(&local_80);
  _swift_release(local_58);
  _objc_msgSend(param_1,"setHandleEnvelopesLimit:",aBlock);
  FUN_100b6fce4();
  __Block_release(aBlock);
  FUN_100b6f934();
  _swift_unknownObjectRelease(param_2);
  FUN_100b6f868();
  return IVar2;
}



/* Address: 0x100b9d078 | FUN_100b9d078 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100b9d078(long param_1)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    FUN_100b9eda8();
  }
  return;
}



/* Address: 0x100b9d0cc | FUN_100b9d0cc */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

String FUN_100b9d0cc(Data param_1,ulong param_2)

{
  Date DVar1;
  NSData *pNVar2;
  Date DVar3;
  long lVar4;
  long unaff_x20;
  ID IVar5;
  long lVar6;
  double dVar7;
  String SVar8;
  
  DVar1 = Foundation::Date::typeMetadataAccessor();
  lVar6 = *(long *)(DVar1.unknown + -8);
  lVar4 = *(long *)(lVar6 + 0x40);
  FUN_100b9fd9c();
  FUN_100b6a5f8();
  if (param_2 >> 0x3c < 0xf) {
    IVar5 = *(ID *)(unaff_x20 + _TtC6Sentry17SentryFileManager::helper);
    FUN_100b6d4e0();
    pNVar2 = Foundation::Data::_bridgeToObjectiveC(param_1);
    DVar3.unknown =
         (undefined *)
         _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry17SentryFileManager::dateProvider),"date");
    DVar3 = Foundation::Date::__unconditionallyBridgeFromObjectiveC(DVar3);
    FUN_100b6f868();
    dVar7 = Foundation::Date::get_timeIntervalSince1970(DVar3);
    (**(code **)(lVar6 + 8))
              (&stack0xffffffffffffff90 + -(lVar4 + 0xfU & 0xfffffffffffffff0),DVar1.unknown);
    IVar5 = _objc_msgSend(IVar5,"storeEnvelopeData:currentTime:",dVar7,pNVar2);
    if (IVar5 != 0) {
      SVar8 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      FUN_100b9fd90();
      FUN_100b9fd90();
      FUN_100b6fce4();
      return SVar8;
    }
    FUN_100b9fd90(0);
    FUN_100b9fd90();
  }
  else {
    FUN_100b6f870();
    FUN_100b84df8(4,0xd000000000000037,0x8000000100dcd380,0xd000000000000059,0x8000000100dcd3c0,0x34
                 );
  }
  return (String)ZEXT816(0);
}



/* Address: 0x100b9d284 | _TtC6Sentry17SentryFileManager::storeEnvelope: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry17SentryFileManager::storeEnvelope_(ID param_1,SEL param_2,ID param_3)

{
  NSString *pNVar1;
  
  FUN_100b9d0cc(param_3);
  if (param_2 == (SEL)0x0) {
    pNVar1 = (NSString *)0x0;
  }
  else {
    pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(param_2);
  }
  return (ID)pNVar1;
}



/* Address: 0x100b9d30c | FUN_100b9d30c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100b9d30c(undefined8 param_1)

{
  ID IVar1;
  char *pcVar2;
  ID unaff_x19;
  ID IVar3;
  
  FUN_100b9fdb4(_TtC6Sentry17SentryFileManager::helper);
  pcVar2 = "getEnvelopesPath:";
  IVar1 = _objc_msgSend(unaff_x19,"getEnvelopesPath:",param_1);
  IVar3 = IVar1;
  FUN_100b6f934();
  if (IVar1 == 0) {
    IVar3 = 0;
    pcVar2 = (char *)0x0;
  }
  else {
    FUN_100b9fdd8();
    FUN_100b6f868();
  }
  FUN_100b56e60(IVar3,pcVar2);
  return;
}



/* Address: 0x100b9d380 | _TtC6Sentry17SentryFileManager::getEnvelopesPath: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry17SentryFileManager::getEnvelopesPath_(ID param_1,SEL param_2,ID param_3)

{
  NSString *pNVar1;
  void *pvVar2;
  String SVar3;
  
  SVar3 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pvVar2 = SVar3.bridgeObject;
  FUN_100b9d30c(SVar3.str);
  _swift_bridgeObjectRelease(SVar3.bridgeObject);
  if (pvVar2 == (void *)0x0) {
    pNVar1 = (NSString *)0x0;
  }
  else {
    pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(pvVar2);
  }
  return (ID)pNVar1;
}



/* Address: 0x100b9d410 | FUN_100b9d410 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100b9d410(undefined8 param_1,undefined8 param_2)

{
  FUN_100b9ec2c();
  FUN_100b9e79c();
  _swift_bridgeObjectRetain(param_2);
  FUN_100b9c81c(param_1);
  FUN_100b678c0();
  FUN_100b6f8ec();
  return param_1;
}



/* Address: 0x100b9d490 | _TtC6Sentry17SentryFileManager::getAllEnvelopes */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry17SentryFileManager::getAllEnvelopes(ID param_1,SEL param_2)

{
  NSArray *pNVar1;
  
  FUN_100b9d410(param_1);
  FUN_100b85d38(0);
  pNVar1 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_1);
  return (ID)pNVar1;
}



/* Address: 0x100b9d4e4 | FUN_100b9d4e4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100b9d4e4(void)

{
  ID IVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  IVar1 = _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry17SentryFileManager::helper),
                        "pathsOfAllEnvelopes");
  if (IVar1 != 0) {
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
    FUN_100b6f934();
    if (*(long *)(IVar1 + 0x10) != 0) {
      uVar2 = *(undefined8 *)(IVar1 + 0x28);
      _swift_bridgeObjectRetain(uVar2);
      FUN_100b6f838();
      FUN_100b9ec2c();
      FUN_100b9ec7c();
      FUN_100b678c0();
      FUN_100b6f838();
      goto LAB_100b9d578;
    }
    FUN_100b6f838();
  }
  uVar2 = 0;
LAB_100b9d578:
  FUN_100b56e60(uVar2);
  return;
}



/* Address: 0x100b9d580 | _TtC6Sentry17SentryFileManager::getOldestEnvelope */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry17SentryFileManager::getOldestEnvelope(ID param_1,SEL param_2)

{
  FUN_100b9d4e4();
  return param_1;
}



/* Address: 0x100b9d5b4 | FUN_100b9d5b4 */

void FUN_100b9d5b4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + _TtC6Sentry17SentryFileManager::dateProvider);
  puVar1 = &DAT_100f39158;
  FUN_100b6f90c(&DAT_100f39158,0x18);
  _swift_unknownObjectWeakInit(puVar1 + 0x10);
  puVar2 = &DAT_100f39180;
  FUN_100b6f90c(&DAT_100f39180,0x20);
  *(undefined8 *)(puVar2 + 0x10) = uVar3;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  _swift_unknownObjectRetain(uVar3);
  _swift_retain(puVar1);
  FUN_100bb0798(FUN_100b9f8ac,puVar2);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return;
}


