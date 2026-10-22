/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100bcc674 | _TtC6Sentry18SentryInstallation::idWithCacheDirectoryPath: */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry18SentryInstallation::idWithCacheDirectoryPath_(ID param_1,SEL param_2,ID param_3)

{
  NSString *pNVar1;
  void *pvVar2;
  void *pvVar3;
  String SVar4;
  
  SVar4 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pvVar2 = SVar4.bridgeObject;
  _swift_getObjCClassMetadata(param_1);
  pvVar3 = pvVar2;
  FUN_100bcc130(SVar4.str,pvVar2,param_1);
  _swift_bridgeObjectRelease(pvVar2);
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(pvVar3);
  return (ID)pNVar1;
}



/* Address: 0x100bcc6f0 | _TtC6Sentry18SentryInstallation::idWithCacheDirectoryPathNonCached: */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry18SentryInstallation::idWithCacheDirectoryPathNonCached_
             (ID param_1,SEL param_2,ID param_3)

{
  NSString *pNVar1;
  void *pvVar2;
  void *pvVar3;
  String SVar4;
  
  SVar4 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pvVar2 = SVar4.bridgeObject;
  _swift_getObjCClassMetadata(param_1);
  pvVar3 = pvVar2;
  FUN_100bcc4bc(SVar4.str,pvVar2,param_1);
  _swift_bridgeObjectRelease(pvVar2);
  if (pvVar3 == (void *)0x0) {
    pNVar1 = (NSString *)0x0;
  }
  else {
    pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(pvVar3);
  }
  return (ID)pNVar1;
}



/* Address: 0x100bcc778 | FUN_100bcc778 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100bcc778(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar1 = 0;
  FUN_100b78b14();
  FUN_100b75404();
  _swift_beginAccess(lVar1 + _TtC6Sentry25SentryDependencyContainer::dispatchQueueWrapper,auStack_58
                     ,0,0);
  puVar2 = &DAT_100f3b7c0;
  _swift_allocObject(&DAT_100f3b7c0,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  *(undefined8 *)(puVar2 + 0x20) = unaff_x20;
  _swift_bridgeObjectRetain(param_2);
  FUN_100bb0798(FUN_100bcc890,puVar2);
  _swift_release(puVar2);
  return;
}



/* Address: 0x100bcc848 | FUN_100bcc848 */

void FUN_100bcc848(undefined8 param_1,undefined8 param_2)

{
  FUN_100bcc130();
  _swift_bridgeObjectRelease(param_2);
  return;
}



/* Address: 0x100bcc86c | FUN_100bcc86c */

void FUN_100bcc86c(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x100bcc890 | FUN_100bcc890 */

void FUN_100bcc890(void)

{
  long unaff_x20;
  
  FUN_100bcc848(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100bcc89c | _TtC6Sentry18SentryInstallation::cacheIDAsyncWithCacheDirectoryPath: */

/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry18SentryInstallation::cacheIDAsyncWithCacheDirectoryPath_
               (ID param_1,SEL param_2,ID param_3)

{
  String SVar1;
  
  SVar1 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  _swift_getObjCClassMetadata(param_1);
  FUN_100bcc778(SVar1.str,SVar1.bridgeObject,param_1);
  _swift_bridgeObjectRelease(SVar1.bridgeObject);
  return;
}



/* Address: 0x100bcc8f0 | FUN_100bcc8f0 */

void FUN_100bcc8f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_101042e80 != -1) {
    _swift_once(&DAT_101042e80,FUN_100bcc0c8);
  }
  uVar1 = DAT_101047b60;
  _swift_bridgeObjectRetain(param_2);
  _swift_retain(uVar1);
  FUN_100be65b4();
  FUN_100bccbb4();
  FUN_100b69e90(param_2,param_1);
  return;
}



/* Address: 0x100bcc970 | _TtC6Sentry18SentryInstallation::cachedIdWithCacheDirectoryPath: */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry18SentryInstallation::cachedIdWithCacheDirectoryPath_
             (ID param_1,SEL param_2,ID param_3)

{
  NSString *pNVar1;
  void *pvVar2;
  String SVar3;
  
  SVar3 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pvVar2 = SVar3.bridgeObject;
  FUN_100bcc8f0(SVar3.str);
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



/* Address: 0x100bcc9d8 | FUN_100bcc9d8 */

void FUN_100bcc9d8(void)

{
  long lVar1;
  _Variant _Var2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  if (DAT_101042e80 != -1) {
    _swift_once(&DAT_101042e80,FUN_100bcc0c8);
  }
  lVar1 = DAT_101047b60;
  uVar3 = *(undefined8 *)(DAT_101047b60 + 0x10);
  _swift_retain(DAT_101047b60);
  _os_unfair_lock_lock(uVar3);
  _swift_beginAccess(lVar1 + 0x18,auStack_48,0x21,0);
  _Var2.unknown = &DAT_101047b68;
  FUN_100b6730c();
  Swift::Dictionary::_Variant::removeAll(false,_Var2);
  _swift_endAccess(auStack_48);
  _os_unfair_lock_unlock(uVar3);
  _swift_release(lVar1);
  return;
}



/* Address: 0x100bcca8c | FUN_100bcca8c */

void FUN_100bcca8c(void)

{
  FUN_100bccb10();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"init");
  return;
}



/* Address: 0x100bccabc | _TtC6Sentry18SentryInstallation::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry18SentryInstallation::init(ID param_1,SEL param_2)

{
  FUN_100bcca8c();
  return param_1;
}



/* Address: 0x100bccadc | FUN_100bccadc */

void FUN_100bccadc(void)

{
  FUN_100bccb10();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x100bccb0c | _TtC6Sentry18SentryInstallation::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry18SentryInstallation::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}



/* Address: 0x100bccb10 | FUN_100bccb10 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100bccb10(void)

{
  return ZEXT816(0x100fa4608);
}



/* Address: 0x100bccb30 | FUN_100bccb30 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100bccb30(undefined8 param_1,Data param_2,undefined8 param_3,undefined8 param_4,ID param_5)

{
  NSData *pNVar1;
  ID IVar2;
  
  pNVar1 = Foundation::Data::_bridgeToObjectiveC(param_2);
  IVar2 = _objc_msgSend(param_5,"createFileAtPath:contents:attributes:",param_1,pNVar1,param_4);
  return IVar2;
}



/* Address: 0x100bccb98 | FUN_100bccb98 */

void FUN_100bccb98(void)

{
  return;
}



/* Address: 0x100bccbb4 | FUN_100bccbb4 */

void FUN_100bccbb4(void)

{
  _swift_release();
  return;
}



/* Address: 0x100bccbc4 | FUN_100bccbc4 */

void FUN_100bccbc4(void)

{
  _swift_bridgeObjectRetain();
  return;
}



/* Address: 0x100bccbcc | FUN_100bccbcc */

void FUN_100bccbcc(void)

{
  long unaff_x29;
  
  FUN_10003bf18(*(undefined8 *)(unaff_x29 + -0x88));
  return;
}



/* Address: 0x100bccbd8 | FUN_100bccbd8 */

undefined ** FUN_100bccbd8(void)

{
  return &PTR_PTR_100f37680;
}



/* Address: 0x100bccbe4 | FUN_100bccbe4 */

void FUN_100bccbe4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined1 local_18;
  
  local_18 = 0;
  uStack_28 = 0x18;
  local_30 = 0;
  local_20 = param_3;
  FUN_100bccc24(param_1,param_2,&local_20,&local_30,param_4,param_5);
  return;
}



/* Address: 0x100bccc24 | FUN_100bccc24 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100bccc24(char *param_1,void *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined8 uVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  void *pvVar8;
  Optional OVar9;
  long lVar10;
  char *pcVar11;
  undefined7 extraout_var;
  char *pcVar13;
  ID self;
  ID IVar14;
  Date DVar15;
  undefined8 uVar16;
  char *pcVar17;
  undefined *puVar18;
  _StringGuts _Var19;
  void *pvVar20;
  long lVar21;
  code *pcVar22;
  long lVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  undefined1 auStack_f0 [8];
  undefined8 local_e8;
  undefined8 local_e0;
  char *local_d8;
  code *local_d0;
  char *local_c8;
  uint local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  long local_a0;
  undefined1 *local_98;
  long local_90;
  long local_88;
  void *local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  _StringGuts _Var12;
  
  lVar10 = 0;
  local_a8 = param_5;
  local_80 = param_2;
  FUN_100bea018();
  lVar21 = *(long *)(*(long *)(lVar10 + -8) + 0x40);
  pcVar2 = *(char **)(param_6 + 0x10);
  puVar18 = *(undefined **)(param_6 + 0x18);
  pvVar20 = &TargetGenericRequirementsDescriptor_100ccff70.Param;
  pcVar11 = (char *)0xff;
  pcVar17 = pcVar2;
  local_a0 = lVar10;
  local_98 = auStack_f0 + -(lVar21 + 0xfU & 0xfffffffffffffff0);
  _swift_getAssociatedTypeWitness
            (0xff,puVar18,pcVar2,0x100ccff74,&TargetProtocolRequirement_100ccff84);
  OVar9 = Swift::Optional::typeMetadataAccessor();
  _Var12.unknown = (undefined *)CONCAT71(extraout_var,OVar9.value);
  lVar23 = *(long *)(_Var12.unknown + -8);
  lVar10 = (long)(auStack_f0 + -(lVar21 + 0xfU & 0xfffffffffffffff0)) -
           (*(long *)(lVar23 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_88 = *(long *)(pcVar11 + -8);
  local_90 = lVar10 - (*(long *)(local_88 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_b0 = *param_3;
  bVar4 = *(byte *)(param_3 + 1);
  local_b8 = *param_4;
  uVar3 = param_4[1];
  pcVar13 = pcVar2;
  _Var19.unknown = puVar18;
  (**(code **)(puVar18 + 0x18))();
  pvVar8 = local_80;
  if (((ulong)pcVar13 & 1) != 0) {
    local_bc = (uint)bVar4;
    (**(code **)(puVar18 + 0x30))(lVar10,pcVar2,puVar18);
    lVar21 = lVar10;
    pcVar13 = pcVar11;
    FUN_1000c9ff0(lVar10,1);
    if ((int)lVar21 == 1) {
      (**(code **)(lVar23 + 8))(lVar10);
      FUN_100b84dac(0);
      local_70 = 0;
      uStack_68 = 0xe000000000000000;
      Swift::_StringGuts::grow(0x8a,_Var12);
      SVar24.bridgeObject = &DAT_e800000000000000;
      SVar24.str = (char *)0x272063697274654d;
      SVar30.bridgeObject = pvVar20;
      SVar30.str = pcVar13;
      Swift::String::append(SVar24,SVar30);
      SVar25.bridgeObject = pvVar8;
      SVar25.str = param_1;
      SVar31.bridgeObject = pvVar20;
      SVar31.str = pcVar13;
      Swift::String::append(SVar25,SVar31);
      SVar26.bridgeObject = (void *)0x8000000100dd0810;
      SVar26.str = (char *)0xd000000000000080;
      SVar32.bridgeObject = pvVar20;
      SVar32.str = pcVar13;
      Swift::String::append(SVar26,SVar32);
      uVar3 = uStack_68;
      FUN_100b84df8(3,local_70,uStack_68,0xd000000000000066,0x8000000100dd07a0,0x2f);
      _swift_bridgeObjectRelease(uVar3);
    }
    else {
      local_c8 = pcVar11;
      (**(code **)(local_88 + 0x20))(local_90,lVar10);
      pcVar22 = *(code **)(puVar18 + 0x20);
      pcVar13 = pcVar2;
      (*pcVar22)(pcVar2,puVar18);
      self = _objc_msgSend((ID)pcVar13,"span");
      local_d8 = param_1;
      local_d0 = pcVar22;
      if (self == 0) {
        pcVar13 = pcVar2;
        (*pcVar22)(pcVar2,puVar18);
        IVar14 = _objc_msgSend((ID)pcVar13,"propagationContextTraceId");
      }
      else {
        IVar14 = _objc_msgSend(self,"traceId");
        _swift_unknownObjectRelease(self);
      }
      pcVar13 = pcVar2;
      (**(code **)(puVar18 + 0x28))(pcVar2,puVar18);
      DVar15.unknown = (undefined *)_objc_msgSend((ID)pcVar13,"date");
      _swift_unknownObjectRelease(pcVar13);
      puVar7 = local_98;
      Foundation::Date::__unconditionallyBridgeFromObjectiveC(DVar15);
      uVar6 = local_b8;
      local_e0 = uVar3;
      FUN_100bcd830(local_b8,uVar3);
      uVar3 = local_a8;
      uVar16 = local_a8;
      _swift_bridgeObjectRetain();
      FUN_100bcd5f0();
      local_e8 = uVar16;
      _swift_bridgeObjectRelease(uVar3);
      lVar10 = local_a0;
      *(undefined8 *)(puVar7 + *(int *)(local_a0 + 0x1c)) = 0;
      puVar1 = (undefined8 *)(puVar7 + *(int *)(local_a0 + 0x24));
      puVar1[1] = 0x18;
      *puVar1 = 0;
      *(ID *)(puVar7 + *(int *)(local_a0 + 0x18)) = IVar14;
      iVar5 = *(int *)(local_a0 + 0x14);
      *(char **)(puVar7 + iVar5) = local_d8;
      *(void **)((long)(puVar7 + iVar5) + 8) = local_80;
      uVar3 = *puVar1;
      uVar16 = puVar1[1];
      _swift_bridgeObjectRetain();
      FUN_100bcd840(uVar3,uVar16);
      *puVar1 = uVar6;
      puVar1[1] = local_e0;
      *(undefined8 *)(puVar7 + *(int *)(lVar10 + 0x28)) = local_e8;
      iVar5 = *(int *)(lVar10 + 0x20);
      *(undefined8 *)(puVar7 + iVar5) = local_b0;
      *(char *)((long)(puVar7 + iVar5) + 8) = (char)local_bc;
      pcVar17 = pcVar2;
      (*local_d0)(pcVar2,puVar18);
      pcVar13 = local_c8;
      _swift_getAssociatedConformanceWitness
                (puVar18,pcVar2,local_c8,0x100ccff74,&TargetProtocolRequirement_100ccff7c);
      lVar10 = local_90;
      (**(code **)(puVar18 + 8))(puVar7,pcVar17,pcVar13,puVar18);
      FUN_100b7eea0(puVar7);
      (**(code **)(local_88 + 8))(lVar10,pcVar13);
    }
    return;
  }
  FUN_100b84dac(0);
  local_70 = 0;
  uStack_68 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x6f,_Var19);
  SVar27.bridgeObject = &DAT_e800000000000000;
  SVar27.str = (char *)0x272063697274654d;
  SVar33.bridgeObject = pvVar20;
  SVar33.str = pcVar17;
  Swift::String::append(SVar27,SVar33);
  SVar28.bridgeObject = local_80;
  SVar28.str = param_1;
  SVar34.bridgeObject = pvVar20;
  SVar34.str = pcVar17;
  Swift::String::append(SVar28,SVar34);
  SVar29.bridgeObject = (void *)0x8000000100dd0730;
  SVar29.str = (char *)0xd000000000000065;
  SVar35.bridgeObject = pvVar20;
  SVar35.str = pcVar17;
  Swift::String::append(SVar29,SVar35);
  uVar3 = uStack_68;
  FUN_100b84df8(3,local_70,uStack_68,0xd000000000000066,0x8000000100dd07a0,0x2b);
  _swift_bridgeObjectRelease(uVar3);
  return;
}



/* Address: 0x100bcd124 | FUN_100bcd124 */

void FUN_100bcd124(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined1 local_18;
  
  uStack_28 = param_4[1];
  local_30 = *param_4;
  local_20 = param_1;
  local_18 = param_7;
  FUN_100bccc24(param_2,param_3,&local_20,&local_30,param_5,param_6);
  return;
}



/* Address: 0x100bcd164 | thunk_FUN_100bccbe4 */

void thunk_FUN_100bccbe4(void)

{
  FUN_100bccbe4();
  return;
}



/* Address: 0x100bcd168 | FUN_100bcd168 */

void FUN_100bcd168(void)

{
  FUN_100bcd124();
  return;
}



/* Address: 0x100bcd180 | FUN_100bcd180 */

void FUN_100bcd180(void)

{
  FUN_100bcd124();
  return;
}



/* Address: 0x100bcd198 | FUN_100bcd198 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100bcd198(void)

{
  ID IVar1;
  
  IVar1 = _objc_msgSend((ID)&objc::class_t::SentrySDKInternal,"currentHub");
  IVar1 = _objc_msgSend(IVar1,"scope");
  return IVar1;
}



/* Address: 0x100bcd1f8 | FUN_100bcd1f8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100bcd1f8(void)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long local_38;
  
  IVar1 = _objc_msgSend((ID)&objc::class_t::SentrySDKInternal,"currentHub");
  puVar2 = &DAT_1010447a8;
  FUN_100b6730c(&DAT_1010447a8);
  puVar3 = puVar2;
  _swift_getObjCClassFromMetadata();
  IVar1 = _objc_msgSend(IVar1,"getInstalledIntegration:",puVar3);
  if (IVar1 == 0) {
    uStack_68 = 0;
    local_70 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(IVar1);
  }
  uStack_48 = uStack_68;
  local_50 = local_70;
  local_38 = lStack_58;
  uStack_40 = uStack_60;
  if (lStack_58 == 0) {
    FUN_100013954(&local_50);
    local_78 = 0;
  }
  else {
    puVar4 = &local_78;
    _swift_dynamicCast(puVar4,&local_50,PTR___type_metadata_for_Any_100eae0c0 + 8,puVar2,6);
    if ((int)puVar4 == 0) {
      local_78 = 0;
    }
  }
  return local_78;
}



/* Address: 0x100bcd2f0 | FUN_100bcd2f0 */

uint FUN_100bcd2f0(uint param_1)

{
  FUN_100bab8b8();
  return param_1 & 1;
}



/* Address: 0x100bcd308 | FUN_100bcd308 */

void FUN_100bcd308(void)

{
  FUN_100bcd198();
  return;
}



/* Address: 0x100bcd31c | FUN_100bcd31c */

void FUN_100bcd31c(undefined8 *param_1,undefined8 param_2)

{
  FUN_100bcd1f8();
  *param_1 = param_2;
  return;
}



/* Address: 0x100bcd340 | FUN_100bcd340 */

uint * FUN_100bcd340(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  lVar6 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar2 = *(uint *)(lVar6 + 0x54);
  if (param_2 < uVar2 || param_2 - uVar2 == 0) goto LAB_100bcd404;
  uVar5 = *(ulong *)(lVar6 + 0x40);
  uVar4 = (uint)uVar5;
  uVar3 = uVar4 << 3;
  if (uVar4 < 4) {
    uVar7 = ((param_2 - uVar2) + ~(-1 << (ulong)(uVar3 & 0x1f)) >> (ulong)(uVar3 & 0x1f)) + 1;
    if (uVar7 >> 0x10 == 0) {
      if (uVar7 < 0x100) {
        if (1 < uVar7) goto LAB_100bcd36c;
        goto LAB_100bcd400;
      }
      uVar7 = (uint)*(ushort *)((long)param_1 + uVar5);
    }
    else {
      uVar7 = *(uint *)((long)param_1 + uVar5);
    }
    if (uVar7 != 0) {
LAB_100bcd3b4:
      uVar1 = 0;
      if (uVar4 < 4) {
        uVar1 = uVar7 - 1 << (ulong)(uVar3 & 0x1f);
      }
      if (uVar4 != 0) {
        switch(uVar4) {
        case 1:
          uVar5 = (ulong)(byte)*param_1;
          break;
        case 2:
          uVar5 = (ulong)(ushort)*param_1;
          break;
        case 3:
          uVar5 = (ulong)(uint3)*param_1;
          break;
        default:
          uVar5 = (ulong)*param_1;
        }
      }
      return (uint *)(ulong)(uVar2 + ((uint)uVar5 | uVar1) + 1);
    }
  }
  else {
LAB_100bcd36c:
    uVar7 = (uint)*(byte *)((long)param_1 + uVar5);
    if (*(byte *)((long)param_1 + uVar5) != 0) goto LAB_100bcd3b4;
  }
LAB_100bcd400:
  if (uVar2 == 0) {
    return (uint *)0x0;
  }
LAB_100bcd404:
  FUN_1000c9ff0();
  return param_1;
}



/* Address: 0x100bcd43c | FUN_100bcd43c */

void FUN_100bcd43c(uint *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined2 uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  size_t sVar9;
  ulong uVar10;
  
  lVar6 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  uVar3 = *(uint *)(lVar6 + 0x54);
  sVar9 = *(size_t *)(lVar6 + 0x40);
  uVar8 = (uint)sVar9;
  uVar4 = uVar8 << 3;
  if (param_3 < uVar3 || param_3 - uVar3 == 0) {
    uVar10 = 0;
  }
  else if (uVar8 < 4) {
    uVar1 = ((param_3 - uVar3) + ~(-1 << (ulong)(uVar4 & 0x1f)) >> (ulong)(uVar4 & 0x1f)) + 1;
    if (uVar1 >> 0x10 == 0) {
      uVar7 = 1;
      if (0xff < uVar1) {
        uVar7 = 2;
      }
      uVar2 = 0;
      if (1 < uVar1) {
        uVar2 = uVar7;
      }
      uVar10 = (ulong)uVar2;
    }
    else {
      uVar10 = 4;
    }
  }
  else {
    uVar10 = 1;
  }
  if (uVar3 < param_2) {
    param_2 = ~uVar3 + param_2;
    if (uVar8 < 4) {
      if (uVar8 != 0) {
        uVar3 = param_2 & (-1 << (ulong)(uVar4 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar9);
        uVar5 = (undefined2)uVar3;
        if (uVar8 == 3) {
          *(undefined2 *)param_1 = uVar5;
          *(char *)((long)param_1 + 2) = (char)(uVar3 >> 0x10);
        }
        else if (uVar8 == 2) {
          *(undefined2 *)param_1 = uVar5;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,sVar9);
      *param_1 = param_2;
    }
                    /* WARNING: Could not recover jumptable at 0x000100bcd5b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_100bcd5b8 + (ulong)(byte)(&UNK_100c9ddd9)[uVar10] * 4))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100bcd4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_100bcd4d4 + (ulong)(byte)(&UNK_100c9ddd4)[uVar10] * 4))();
  return;
}



/* Address: 0x100bcd5e4 | FUN_100bcd5e4 */

void FUN_100bcd5e4(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100bcd5f0 | FUN_100bcd5f0 */

__RawDictionaryStorage * FUN_100bcd5f0(__RawDictionaryStorage *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  __RawDictionaryStorage *p_Var11;
  ulong uVar12;
  ulong uVar13;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  undefined1 auStack_88 [24];
  undefined8 local_70;
  long lStack_68;
  
  this = (_DictionaryStorage *)&DAT_101046320;
  FUN_100b6730c();
  p_Var4 = param_1;
  Swift::_DictionaryStorage::_copy(this,param_1);
  lVar8 = 0;
  p_Var11 = param_1 + 0x40;
  uVar6 = 1L << ((ulong)(byte)param_1[0x20] & 0x3f);
  uVar13 = 0xffffffffffffffff;
  if ((long)uVar6 < 0x40) {
    uVar13 = ~(-1L << (uVar6 & 0x3f));
  }
  uVar13 = uVar13 & *(ulong *)p_Var11;
  uVar6 = uVar6 + 0x3f >> 6;
  lVar9 = lVar8;
  if (uVar13 == 0) goto LAB_100bcd694;
  do {
    uVar12 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
    uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
    uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
    uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
    uVar13 = uVar13 - 1 & uVar13;
    uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | lVar8 << 6;
    while( true ) {
      puVar7 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar12 * 0x10);
      uVar1 = *puVar7;
      uVar2 = puVar7[1];
      FUN_100076688(*(long *)(param_1 + 0x38) + uVar12 * 0x28,auStack_88);
      lVar9 = lStack_68;
      uVar3 = local_70;
      FUN_100004640(auStack_88,local_70);
      pcVar10 = *(code **)(lVar9 + 8);
      _swift_bridgeObjectRetain(uVar2);
      (*pcVar10)(&local_a0,uVar3,lVar9);
      FUN_100004594(auStack_88);
      uVar5 = uVar12 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(p_Var4 + uVar5 + 0x40) = *(ulong *)(p_Var4 + uVar5 + 0x40) | 1L << (uVar12 & 0x3f);
      puVar7 = (undefined8 *)(*(long *)(p_Var4 + 0x30) + uVar12 * 0x10);
      *puVar7 = uVar1;
      puVar7[1] = uVar2;
      puVar7 = (undefined8 *)(*(long *)(p_Var4 + 0x38) + uVar12 * 0x18);
      puVar7[1] = uStack_98;
      *puVar7 = local_a0;
      *(undefined1 *)(puVar7 + 2) = local_90;
      if (SCARRY8(*(long *)(p_Var4 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x100bcd82c);
        (*pcVar10)();
      }
      *(long *)(p_Var4 + 0x10) = *(long *)(p_Var4 + 0x10) + 1;
      lVar9 = lVar8;
      if (uVar13 != 0) break;
LAB_100bcd694:
      lVar8 = lVar9 + 1;
      if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x100bcd830);
        (*pcVar10)();
      }
      if ((long)uVar6 <= lVar8) {
        return p_Var4;
      }
      uVar13 = *(ulong *)(p_Var11 + lVar8 * 8);
      if (uVar13 == 0) {
        lVar8 = lVar9 + 2;
        if ((long)uVar6 <= lVar8) {
          return p_Var4;
        }
        uVar13 = *(ulong *)(p_Var11 + lVar8 * 8);
        if (uVar13 == 0) {
          lVar8 = lVar9 + 3;
          if ((long)uVar6 <= lVar8) {
            return p_Var4;
          }
          uVar13 = *(ulong *)(p_Var11 + lVar8 * 8);
          if (uVar13 == 0) {
            lVar8 = lVar9 + 4;
            if ((long)uVar6 <= lVar8) {
              return p_Var4;
            }
            uVar13 = *(ulong *)(p_Var11 + lVar8 * 8);
            if (uVar13 == 0) {
              do {
                lVar8 = lVar9;
                if ((long)uVar6 <= lVar8 + 5) {
                  return p_Var4;
                }
                uVar13 = *(ulong *)(param_1 + lVar8 * 8 + 0x68);
                lVar9 = lVar8 + 1;
              } while (uVar13 == 0);
              lVar8 = lVar8 + 5;
            }
          }
        }
      }
      uVar12 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 - 1 & uVar13;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | lVar8 << 6;
    }
  } while( true );
}



/* Address: 0x100bcd830 | FUN_100bcd830 */

void FUN_100bcd830(undefined8 param_1,long param_2)

{
  if (param_2 == 0x18) {
    return;
  }
  FUN_100bc9e6c();
  return;
}



/* Address: 0x100bcd840 | FUN_100bcd840 */

void FUN_100bcd840(undefined8 param_1,long param_2)

{
  if (param_2 == 0x18) {
    return;
  }
  FUN_100bc9f7c();
  return;
}



/* Address: 0x100bcd850 | FUN_100bcd850 */

void FUN_100bcd850(char *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 2;
  if (0xfffeff < param_3 + 1) {
    uVar2 = 4;
  }
  if (param_3 + 1 >> 8 < 0xff) {
    uVar2 = 1;
  }
  uVar1 = 0;
  if (0xfe < param_3) {
    uVar1 = uVar2;
  }
  if (param_2 < 0xff) {
                    /* WARNING: Could not recover jumptable at 0x000100bcd898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_100bcd89c + (ulong)(byte)(&DAT_100c9de65)[uVar1] * 4))();
    return;
  }
  *param_1 = (char)param_2 + '\x01';
                    /* WARNING: Could not recover jumptable at 0x000100bcd8cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_100bcd8d0 + (ulong)(byte)(&DAT_100c9de60)[uVar1] * 4))();
  return;
}



/* Address: 0x100bcd90c | FUN_100bcd90c */

undefined1  [16] FUN_100bcd90c(void)

{
  return ZEXT816(0x100f3b8e0);
}



/* Address: 0x100bcd91c | thunk_FUN_100bcd920 */

void thunk_FUN_100bcd920(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101047c58 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9ded8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9ded8,&DAT_100f3b8e0);
  DAT_101047c58 = pTVar1;
  return;
}



/* Address: 0x100bcd920 | FUN_100bcd920 */

void FUN_100bcd920(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101047c58 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9ded8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9ded8,&DAT_100f3b8e0);
  DAT_101047c58 = pTVar1;
  return;
}



/* Address: 0x100bcd960 | FUN_100bcd960 */

void FUN_100bcd960(ulong param_1,Hasher param_2)

{
  Hasher HVar1;
  
  Swift::Hasher::init(0);
  HVar1.unknown = (undefined *)(param_1 & 1);
  Swift::Hasher::_combine((__uint64)HVar1.unknown,param_2);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x100bcd9a4 | FUN_100bcd9a4 */

void FUN_100bcd9a4(void)

{
  undefined1 *unaff_x20;
  
  FUN_100bcd960(*unaff_x20);
  return;
}



/* Address: 0x100bcd9ac | FUN_100bcd9ac */

void FUN_100bcd9ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_allocWithZone();
  FUN_100bcd9f4(param_1,param_2,param_3);
  return;
}



/* Address: 0x100bcd9f4 | FUN_100bcd9f4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100bcd9f4(undefined8 param_1,long param_2,undefined8 param_3)

{
  Date DVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  DVar1 = Foundation::Date::typeMetadataAccessor();
  puVar3 = &stack0xffffffffffffff90 +
           -(*(long *)(*(long *)(DVar1.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar4 = *(undefined8 *)(param_2 + _TtC6Sentry15SentryVideoInfo::fileSize);
  puVar2 = puVar3;
  (**(code **)(*(long *)(DVar1.unknown + -8) + 0x10))
            (puVar3,param_2 + _TtC6Sentry15SentryVideoInfo::start,DVar1.unknown);
  uVar9 = *(undefined8 *)(param_2 + _TtC6Sentry15SentryVideoInfo::duration);
  uVar5 = *(undefined8 *)(param_2 + _TtC6Sentry15SentryVideoInfo::frameCount);
  uVar6 = *(undefined8 *)(param_2 + _TtC6Sentry15SentryVideoInfo::frameRate);
  uVar7 = *(undefined8 *)(param_2 + _TtC6Sentry15SentryVideoInfo::height);
  uVar8 = *(undefined8 *)(param_2 + _TtC6Sentry15SentryVideoInfo::width);
  FUN_100bcdb38();
  _objc_allocWithZone();
  FUN_100bcdbc0(puVar2,uVar9,param_1,uVar4,puVar3,uVar5,uVar6,uVar7,uVar8,param_3);
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  FUN_100bce234(param_1);
  return;
}



/* Address: 0x100bcdb38 | FUN_100bcdb38 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100bcdb38(void)

{
  return ZEXT816(0x100fa46b8);
}



/* Address: 0x100bcdb58 | _TtC6Sentry21SentryReplayRecording::initWithSegmentId:video:extraEvents: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x28 bytes */

ID _TtC6Sentry21SentryReplayRecording::initWithSegmentId_video_extraEvents_
             (ID param_1,SEL param_2,long_long param_3,ID param_4,ID param_5)

{
  FUN_100b6730c(&DAT_101044a18);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  FUN_100bcd9f4(param_3,param_4,param_5);
  return param_3;
}



/* Address: 0x100bcdbc0 | FUN_100bcdbc0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100bcdbc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined *param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  Date DVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ID IVar7;
  long unaff_x20;
  undefined8 auStack_f0 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  long local_98;
  undefined *local_90;
  
  local_b0 = param_6;
  local_a8 = param_5;
  local_a0 = param_3;
  local_90 = param_9;
  DVar3 = Foundation::Date::typeMetadataAccessor();
  local_98 = *(long *)(DVar3.unknown + -8);
  lVar6 = -(*(long *)(local_98 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = (long)&local_b0 + lVar6;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry21SentryReplayRecording::segmentId) = param_2;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry21SentryReplayRecording::width) = param_8;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry21SentryReplayRecording::height) = param_7;
  FUN_100bce250();
  FUN_100b8aa88(0);
  _objc_allocWithZone();
  lVar4 = lVar5;
  FUN_100b8a7f8(lVar5,param_7,param_8);
  FUN_100bce250();
  FUN_100b67e40(0);
  _objc_allocWithZone();
  *(undefined8 *)((long)auStack_f0 + lVar6 + 0x28) = 0;
  *(undefined8 *)((long)auStack_f0 + lVar6 + 0x30) = 0;
  uVar2 = local_b0;
  *(undefined1 **)((long)auStack_f0 + lVar6 + 0x18) = &DAT_e800000000000000;
  *(undefined8 *)((long)auStack_f0 + lVar6 + 0x20) = uVar2;
  *(undefined8 *)((long)auStack_f0 + lVar6 + 0x10) = 0x746e6174736e6f63;
  uVar2 = local_a8;
  *(undefined8 *)((long)auStack_f0 + lVar6) = param_8;
  *(undefined8 *)((long)auStack_f0 + lVar6 + 8) = uVar2;
  FUN_100b67914(param_1,lVar5,param_2,local_a0,0x34363268,&DAT_e400000000000000,0x34706d,
                0xe300000000000000,param_7);
  lVar6 = lVar5;
  FUN_100b93974();
  _swift_allocObject();
  *(undefined8 *)(lVar6 + 0x18) = 5;
  *(undefined8 *)(lVar6 + 0x10) = 2;
  *(long *)(lVar6 + 0x20) = lVar4;
  *(long *)(lVar6 + 0x28) = lVar5;
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (local_90 != (undefined *)0x0) {
    puVar1 = local_90;
  }
  FUN_100bb1f98(puVar1);
  *(long *)(unaff_x20 + _TtC6Sentry21SentryReplayRecording::events) = lVar6;
  FUN_100bcdb38();
  IVar7 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff78,"init");
  (**(code **)(local_98 + 8))(param_4,DVar3.unknown);
  FUN_100bce234(IVar7);
  return;
}



/* Address: 0x100bcddbc | FUN_100bcddbc */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100bcde3c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100bcddbc(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  puVar1 = &DAT_1010448c8;
  FUN_100b6730c();
  _swift_initStackObject();
  *(undefined8 *)(puVar1 + 0x18) = 2;
  *(undefined8 *)(puVar1 + 0x10) = 1;
  *(undefined8 *)(puVar1 + 0x20) = 0x5f746e656d676573;
  *(undefined8 *)(puVar1 + 0x28) = 0xea00000000006469;
  uVar2 = *(undefined8 *)(unaff_x20 + _TtC6Sentry21SentryReplayRecording::segmentId);
  *(undefined **)(puVar1 + 0x48) = PTR___type_metadata_for_Swift_Int_100eac6f8;
  *(undefined8 *)(puVar1 + 0x30) = uVar2;
  Swift::Dictionary::_init
            (puVar1,PTR___type_metadata_for_Swift_String_100eac208,
             PTR___type_metadata_for_Any_100eae0c0 + 8,
             PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218);
  return;
}



/* Address: 0x100bcde4c | FUN_100bcde4c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_100bcde4c(void)

{
  _CocoaArrayWrapper _Var1;
  undefined *puVar2;
  code *pcVar3;
  Dictionary<undefined,undefined> DVar4;
  undefined *puVar5;
  long unaff_x20;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  puVar5 = *(undefined **)(unaff_x20 + _TtC6Sentry21SentryReplayRecording::events);
  if ((ulong)puVar5 >> 0x3e == 0) {
    uVar6 = *(ulong *)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
    if ((long)puVar5 < 0) {
      _Var1.unknown = puVar5;
    }
    uVar6 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar6 != 0) {
    _swift_bridgeObjectRetain(puVar5);
    FUN_100b69614(0,uVar6 & ((long)uVar6 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100bcdfe0);
      (*pcVar3)();
    }
    uVar7 = 0;
    do {
      if (((ulong)puVar5 & 0xc000000000000001) == 0) {
        uVar8 = *(ulong *)(puVar5 + uVar7 * 8 + 0x20);
        _swift_unknownObjectRetain(uVar8);
      }
      else {
        uVar8 = uVar7;
        FUN_100b6daec(uVar7,puVar5);
      }
      _objc_msgSend(uVar8,"serialize");
      DVar4 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
      _swift_unknownObjectRelease(uVar8);
      uVar8 = *(ulong *)(puVar2 + 0x10);
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar8) {
        FUN_100b69614(1 < *(ulong *)(puVar2 + 0x18),uVar8 + 1,1);
      }
      uVar7 = uVar7 + 1;
      *(ulong *)(puVar2 + 0x10) = uVar8 + 1;
      *(undefined **)(puVar2 + uVar8 * 8 + 0x20) = DVar4.unknown;
    } while (uVar6 != uVar7);
    _swift_bridgeObjectRelease(puVar5);
  }
  return puVar2;
}



/* Address: 0x100bcdfe0 | FUN_100bcdfe0 */

undefined1  [16] FUN_100bcdfe0(undefined8 param_1,Data param_2)

{
  undefined *puVar1;
  Data DVar2;
  Data DVar3;
  undefined1 auVar4 [16];
  undefined *local_80 [3];
  undefined *local_68;
  undefined *local_60;
  undefined *puStack_58;
  undefined7 extraout_var;
  
  puStack_58 = (undefined *)0xc000000000000000;
  local_60 = (undefined *)0x0;
  puVar1 = (undefined *)0x0;
  FUN_100b6f5fc();
  FUN_100bcddbc();
  DVar2.unknown = &DAT_101044968;
  FUN_100b6730c();
  local_80[0] = puVar1;
  local_68 = DVar2.unknown;
  FUN_100bce284();
  FUN_100004594(local_80);
  if ((ulong)param_2.unknown >> 0x3c < 0xf) {
    Foundation::Data::append(DVar2,param_2);
    param_2.unknown = "";
    DVar3.unknown._0_1_ =
         Foundation::Data::_Representation::init((UnsafeRawBufferPointer)0x100dd09d2);
    DVar3.unknown._1_7_ = extraout_var;
    Foundation::Data::append(DVar3,param_2);
    FUN_100bcde4c();
    DVar2.unknown = &DAT_101045338;
    FUN_100b6730c();
    local_80[0] = DVar3.unknown;
    local_68 = DVar2.unknown;
    FUN_100bce284();
    FUN_100004594(local_80);
    if ((ulong)param_2.unknown >> 0x3c < 0xf) {
      Foundation::Data::append(DVar2,param_2);
      FUN_10003bf18(DVar2.unknown,param_2.unknown);
      FUN_100bce278();
      FUN_100b9fd90();
      param_2.unknown = puStack_58;
    }
    else {
      FUN_100b84dac(0);
      FUN_100bce260("ayRecording.swift");
      FUN_100b84df8();
      FUN_100bce278();
      FUN_100b9fd90();
      FUN_10003bf2c(local_60,puStack_58);
      local_60 = DVar2.unknown;
    }
  }
  else {
    FUN_100b84dac(0);
    FUN_100bce260("");
    FUN_100b84df8();
    FUN_10003bf2c(local_60,puStack_58);
    local_60 = DVar2.unknown;
  }
  auVar4._8_8_ = param_2.unknown;
  auVar4._0_8_ = local_60;
  return auVar4;
}



/* Address: 0x100bce1b0 | FUN_100bce1b0 */

void FUN_100bce1b0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("Sentry.SentryReplayRecording",0x1c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100bce1dc);
  (*pcVar1)();
}



/* Address: 0x100bce1dc | _TtC6Sentry21SentryReplayRecording::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry21SentryReplayRecording::init(ID param_1,SEL param_2)

{
  ID IVar1;
  
  FUN_100bce1b0();
  FUN_100bcdb38();
  IVar1 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffd0,"dealloc");
  return IVar1;
}



/* Address: 0x100bce1e8 | FUN_100bce1e8 */

void FUN_100bce1e8(void)

{
  FUN_100bcdb38();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x100bce218 | _TtC6Sentry21SentryReplayRecording::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry21SentryReplayRecording::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + events));
  return;
}



/* Address: 0x100bce228 | FUN_100bce228 */

void FUN_100bce228(undefined8 param_1,undefined8 param_2)

{
  _swift_lookUpClassMethod(param_1,param_2,&TargetClassDescriptor_100cd0004);
  return;
}



/* Address: 0x100bce234 | FUN_100bce234 */

void FUN_100bce234(void)

{
  return;
}



/* Address: 0x100bce250 | FUN_100bce250 */

void FUN_100bce250(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x000100bce25c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x100bce260 | FUN_100bce260 */

undefined8 FUN_100bce260(void)

{
  return 4;
}



/* Address: 0x100bce278 | FUN_100bce278 */

void FUN_100bce278(void)

{
  FUN_10003bf2c();
  return;
}



/* Address: 0x100bce284 | FUN_100bce284 */

void FUN_100bce284(void)

{
  FUN_100b6a3a4();
  return;
}



/* Address: 0x100bce290 | FUN_100bce290 */

int FUN_100bce290(int *param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    iVar1 = -1;
  }
  else if ((param_2 < 0) && ((char)param_1[0xe] != '\0')) {
    iVar1 = *param_1 + 0x7fffffff;
  }
  else {
    uVar2 = *(ulong *)(param_1 + 2);
    if (0xfffffffe < uVar2) {
      uVar2 = 0xffffffff;
    }
    iVar1 = (int)uVar2;
  }
  return iVar1 + 1;
}



/* Address: 0x100bce2d0 | FUN_100bce2d0 */

undefined1  [16] FUN_100bce2d0(void)

{
  return ZEXT816(0x100f3b990);
}


