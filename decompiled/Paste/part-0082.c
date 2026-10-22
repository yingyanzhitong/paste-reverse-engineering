/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1000f3560 | FUN_1000f3560 */

void FUN_1000f3560(undefined8 param_1)

{
  FUN_1000f3d9c();
  _swift_initStaticObject();
  DAT_101057180 = param_1;
  return;
}



/* Address: 0x1000f3588 | FUN_1000f3588 */

undefined8 * FUN_1000f3588(void)

{
  if (DAT_100fae120 != -1) {
    _swift_once(&DAT_100fae120,FUN_1000f3560);
  }
  return &DAT_101057180;
}



/* Address: 0x1000f35c8 | FUN_1000f35c8 */

void FUN_1000f35c8(void)

{
  _swift_initStaticObject();
  return;
}



/* Address: 0x1000f35d8 | FUN_1000f35d8 */

undefined8 FUN_1000f35d8(void)

{
  return 2;
}



/* Address: 0x1000f35e0 | FUN_1000f35e0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_1000f35e0(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  char *pcVar3;
  NSString *pNVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined8 local_48;
  undefined1 *puStack_40;
  ulong local_38;
  
  uVar7 = (ulong)*(uint *)PTR__kIOMainPortDefault_100ea9e00;
  pcVar3 = "IOPlatformExpertDevice";
  _IOServiceMatching("IOPlatformExpertDevice");
  _IOServiceGetMatchingService(uVar7,pcVar3);
  if ((int)uVar7 != 0) {
    pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    uVar5 = uVar7;
    _IORegistryEntryCreateCFProperty
              (uVar7,pNVar4,*(undefined8 *)PTR__kCFAllocatorDefault_100ea9b18,0);
    if (uVar5 != 0) {
      puVar6 = &local_48;
      local_38 = uVar5;
      _swift_dynamicCast(puVar6,&local_38,PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8,
                         PTR___type_metadata_for_Swift_String_100eac208,6);
      if ((int)puVar6 == 0) {
        local_48 = 0;
        puStack_40 = (undefined1 *)0x0;
      }
      goto LAB_1000f36b0;
    }
  }
  local_48 = 0;
  puStack_40 = (undefined1 *)0x0;
LAB_1000f36b0:
  _IOObjectRelease(uVar7);
  uVar1 = 0x6e776f6e6b6e55;
  if (puStack_40 != (undefined1 *)0x0) {
    uVar1 = local_48;
  }
  puVar2 = &DAT_e700000000000000;
  if (puStack_40 != (undefined1 *)0x0) {
    puVar2 = puStack_40;
  }
  auVar8._8_8_ = puVar2;
  auVar8._0_8_ = uVar1;
  return auVar8;
}



/* Address: 0x1000f36ec | FUN_1000f36ec */

String FUN_1000f36ec(void)

{
  bool bVar1;
  CharacterSet CVar2;
  CharacterSet CVar3;
  char *pcVar4;
  undefined1 *puVar5;
  _StringComparisonResult expecting;
  long extraout_x8;
  long extraout_x12;
  char *pcVar7;
  long lVar8;
  CharacterSet in;
  undefined1 *puVar9;
  code *pcVar10;
  String SVar11;
  String SVar12;
  undefined *local_60;
  undefined1 *puStack_58;
  undefined1 *puVar6;
  
  pcVar7 = (char *)0x6b6f6f4263614d;
  CVar2 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar8 = *(long *)(CVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar8 + 0x40));
  in.unknown = (undefined *)((long)&local_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  CVar3.unknown = (undefined *)0x6c65646f6d2e7768;
  puVar5 = &DAT_e800000000000000;
  FUN_1000f4774();
  local_60 = CVar3.unknown;
  puStack_58 = puVar5;
  CVar3 = Foundation::CharacterSet::get_letters(CVar3);
  Foundation::CharacterSet::get_inverted(CVar3);
  pcVar10 = *(code **)(lVar8 + 8);
  (*pcVar10)((long)in.unknown - extraout_x12,CVar2.unknown);
  FUN_1000f3c8c();
  SVar11 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
  puVar6 = SVar11.bridgeObject;
  (*pcVar10)(in.unknown,CVar2.unknown);
  _swift_bridgeObjectRelease(puVar5);
  SVar12 = Swift::String::lowercased(SVar11);
  puVar5 = SVar12.bridgeObject;
  pcVar4 = SVar12.str;
  puVar9 = &DAT_e700000000000000;
  if (pcVar4 != (char *)0x6b6f6f6263616d || puVar5 != &DAT_e700000000000000) {
    expecting.value = SVar12.str._0_1_;
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x6b6f6f6263616d,(_StringGuts)0xe700000000000000,expecting);
    if (!bVar1) {
      puVar9 = (undefined1 *)0xeb000000006f7250;
      pcVar7 = (char *)0x206b6f6f4263614d;
      if (((((pcVar4 != (char *)0x706b6f6f6263616d || puVar5 != (undefined1 *)0xea00000000006f72) &&
            (bVar1 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x706b6f6f6263616d,(_StringGuts)0xea00000000006f72,
                                expecting), !bVar1)) &&
           (puVar9 = (undefined1 *)0xeb00000000726941,
           pcVar4 != (char *)0x616b6f6f6263616d || puVar5 != (undefined1 *)0xea00000000007269)) &&
          (bVar1 = Swift::_stringCompareWithSmolCheck
                             ((_StringGuts)0x616b6f6f6263616d,(_StringGuts)0xea00000000007269,
                              expecting), !bVar1)) &&
         ((pcVar7 = (char *)0x63614d69, pcVar4 != (char *)0x63616d69 ||
          (puVar9 = &DAT_e400000000000000, puVar5 != &DAT_e400000000000000)))) {
        puVar9 = &DAT_e400000000000000;
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x63616d69,(_StringGuts)0xe400000000000000,expecting);
        if (!bVar1) {
          pcVar7 = (char *)0x6f72502063614d;
          if ((pcVar4 != (char *)0x6f727063616d) || (puVar5 != &DAT_e600000000000000)) {
            bVar1 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)0x6f727063616d,(_StringGuts)0xe600000000000000,expecting
                              );
            _swift_bridgeObjectRelease(puVar5);
            if (!bVar1) {
              return SVar11;
            }
            puVar9 = &DAT_e700000000000000;
            goto LAB_1000f394c;
          }
          puVar9 = &DAT_e700000000000000;
        }
      }
    }
  }
  _swift_bridgeObjectRelease(puVar6);
  puVar6 = puVar5;
LAB_1000f394c:
  SVar11.bridgeObject = puVar9;
  SVar11.str = pcVar7;
  _swift_bridgeObjectRelease(puVar6);
  return SVar11;
}



/* Address: 0x1000f39b4 | FUN_1000f39b4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

String FUN_1000f39b4(void)

{
  ID IVar1;
  String SVar2;
  
  IVar1 = NSHost::currentHost((ID)&_OBJC_CLASS___NSHost);
  IVar1 = NSHost::localizedName(IVar1);
  if (IVar1 == 0) {
    SVar2.bridgeObject = (void *)0xee00656369766564;
    SVar2.str = (char *)0x206e776f6e6b6e55;
  }
  else {
    SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  return SVar2;
}



/* Address: 0x1000f3a50 | FUN_1000f3a50 */

void FUN_1000f3a50(void)

{
  FUN_1000f4774(0x6c65646f6d2e7768,&DAT_e800000000000000);
  return;
}



/* Address: 0x1000f3a68 | FUN_1000f3a68 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000f3a68(void)

{
  long lVar1;
  String SVar2;
  undefined *puVar3;
  code *pcVar4;
  URL UVar5;
  URL UVar6;
  ID IVar7;
  Dictionary<undefined,undefined> DVar8;
  char **ppcVar9;
  Dictionary<undefined,undefined> DVar10;
  long extraout_x8;
  long lVar11;
  String SVar12;
  undefined8 uStack_90;
  undefined4 auStack_88 [2];
  char *local_80;
  void *pvStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long local_58;
  
  UVar5 = Foundation::URL::typeMetadataAccessor();
  lVar11 = *(long *)(UVar5.unknown + -8);
  UVar6 = UVar5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  Foundation::URL::get_applicationSupportDirectory(UVar6);
  IVar7 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
  IVar7 = NSBundle::infoDictionary(IVar7);
  puVar3 = PTR___type_metadata_for_Any_100eae0c0;
  if (IVar7 == 0) {
    uStack_68 = 0;
    local_70 = 0;
    local_58 = 0;
    uStack_60 = 0;
  }
  else {
    DVar8 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
    if (*(long *)PTR__kCFBundleNameKey_100ea9b28 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1000f3c20);
      (*pcVar4)();
    }
    SVar12 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    DVar10.unknown = SVar12.bridgeObject;
    if (*(long *)(DVar8.unknown + 0x10) == 0) {
LAB_1000f3b94:
      uStack_68 = 0;
      local_70 = 0;
      local_58 = 0;
      uStack_60 = 0;
    }
    else {
      _swift_bridgeObjectRetain(DVar8.unknown);
      FUN_100071370(SVar12.str);
      if (((ulong)SVar12.bridgeObject & 1) == 0) {
        _swift_bridgeObjectRelease(DVar8.unknown);
        goto LAB_1000f3b94;
      }
      FUN_10000cbfc(*(long *)(DVar8.unknown + 0x38) + (long)SVar12.str * 0x20,&local_70);
      _swift_bridgeObjectRelease(DVar10.unknown);
      DVar10 = DVar8;
    }
    _swift_bridgeObjectRelease(DVar10.unknown);
    _swift_bridgeObjectRelease(DVar8.unknown);
    if (local_58 != 0) {
      ppcVar9 = &local_80;
      UVar6.unknown = puVar3 + 8;
      _swift_dynamicCast(ppcVar9,&local_70,UVar6.unknown,
                         PTR___type_metadata_for_Swift_String_100eac208,6);
      if (((ulong)ppcVar9 & 1) != 0) {
        SVar2.bridgeObject = pvStack_78;
        SVar2.str = local_80;
        Foundation::URL::appendingPathComponent(SVar2,UVar6);
        _swift_bridgeObjectRelease(pvStack_78);
        (**(code **)(lVar11 + 8))((long)&local_80 + lVar1,UVar5.unknown);
        return;
      }
      goto LAB_1000f3c30;
    }
  }
  FUN_1000f3ccc(&local_70);
LAB_1000f3c30:
  *(undefined4 *)((long)auStack_88 + lVar1) = 0;
  *(undefined8 *)((long)&uStack_90 + lVar1) = 0xa3;
  SVar12.bridgeObject = (void *)0x2;
  SVar12.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar12,(StaticString)0xd000000000000032,0x8000000100d90710,
             0xd90710);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1000f3c84);
  (*pcVar4)();
}



/* Address: 0x1000f3c84 | FUN_1000f3c84 */

void FUN_1000f3c84(void)

{
  return;
}



/* Address: 0x1000f3c8c | FUN_1000f3c8c */

void FUN_1000f3c8c(void)

{
  undefined *puVar1;
  
  if (DAT_100fae140 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift__Swift__String_>Swift__StringProtocol_100eac258;
  _swift_getWitnessTable
            (PTR_Swift__Swift__String_>Swift__StringProtocol_100eac258,
             PTR___type_metadata_for_Swift_String_100eac208);
  DAT_100fae140 = puVar1;
  return;
}



/* Address: 0x1000f3ccc | FUN_1000f3ccc */

undefined8 FUN_1000f3ccc(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fae148;
  FUN_1000037f0(&DAT_100fae148,&DAT_100c2d6d0);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x1000f3d14 | thunk_FUN_1000f3d18 */

void thunk_FUN_1000f3d18(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fae150 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2d6d8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2d6d8,&DAT_100eb6d88);
  DAT_100fae150 = pTVar1;
  return;
}



/* Address: 0x1000f3d18 | FUN_1000f3d18 */

void FUN_1000f3d18(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fae150 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2d6d8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2d6d8,&DAT_100eb6d88);
  DAT_100fae150 = pTVar1;
  return;
}



/* Address: 0x1000f3d58 | thunk_FUN_1000f3d5c */

void thunk_FUN_1000f3d5c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fae158 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2d778;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2d778,&DAT_100eb6e18);
  DAT_100fae158 = pTVar1;
  return;
}



/* Address: 0x1000f3d5c | FUN_1000f3d5c */

void FUN_1000f3d5c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fae158 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2d778;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2d778,&DAT_100eb6e18);
  DAT_100fae158 = pTVar1;
  return;
}



/* Address: 0x1000f3d9c | FUN_1000f3d9c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1000f3d9c(void)

{
  return ZEXT816(0x100fae1a0);
}



/* Address: 0x1000f3dbc | FUN_1000f3dbc */

void FUN_1000f3dbc(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x1000f3dc8 | FUN_1000f3dc8 */

void FUN_1000f3dc8(void)

{
  return;
}



/* Address: 0x1000f3dcc | FUN_1000f3dcc */

undefined1  [16] FUN_1000f3dcc(void)

{
  return ZEXT816(0x100eb6d88);
}



/* Address: 0x1000f3ddc | FUN_1000f3ddc */

undefined1  [16] FUN_1000f3ddc(void)

{
  return ZEXT816(0x100eb6e18);
}



/* Address: 0x1000f3dec | thunk_FUN_1000d4dac */

void thunk_FUN_1000d4dac(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Address: 0x1000f3df0 | thunk_FUN_1000d4d7c */

void thunk_FUN_1000d4d7c(void)

{
  FUN_1000d4d7c();
  return;
}



/* Address: 0x1000f3df4 | FUN_1000f3df4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1000f3df4(undefined8 param_1,undefined8 param_2)

{
  NSString *pNVar1;
  
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  _NSSizeFromString(pNVar1);
  return 0;
}



/* Address: 0x1000f3e48 | FUN_1000f3e48 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1000f3e48(void)

{
  undefined *puVar1;
  NSDictionary *pNVar2;
  ID IVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)PTR__NSFontTextStyleBody_100ea9050;
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1000f405c(PTR___swiftEmptyArrayStorage_100eae0d8);
  FUN_1000f280c(0);
  FUN_1000f4160();
  pNVar2 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(puVar1);
  IVar3 = NSFont::preferredFontForTextStyle_options_((ID)&_OBJC_CLASS___NSFont,uVar4,pNVar2);
  return IVar3;
}



/* Address: 0x1000f3ef4 | FUN_1000f3ef4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1000f3ef4(void)

{
  code *pcVar1;
  NSString *pNVar2;
  ID IVar3;
  
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar3 = NSFont::fontWithName_size_((ID)&_OBJC_CLASS___NSFont,0x402a000000000000,pNVar2);
  if (IVar3 != 0) {
    return IVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000f3f6c);
  (*pcVar1)();
}



/* Address: 0x1000f3f6c | FUN_1000f3f6c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID FUN_1000f3f6c(undefined8 param_1)

{
  ID IVar1;
  ID unaff_x20;
  undefined8 extraout_d0;
  
  IVar1 = objc_stub::fontDescriptor(unaff_x20);
  IVar1 = objc_stub::fontDescriptorWithSymbolicTraits_(IVar1,0);
  if ((IVar1 == 0) ||
     (IVar1 = objc_stub::fontDescriptorWithSymbolicTraits_(IVar1,param_1), IVar1 == 0)) {
    IVar1 = objc_stub::fontDescriptor(unaff_x20);
  }
  objc_stub::pointSize(unaff_x20);
  IVar1 = NSFont::fontWithDescriptor_size_((ID)&_OBJC_CLASS___NSFont,extraout_d0,IVar1);
  if (IVar1 != 0) {
    return IVar1;
  }
  return unaff_x20;
}



/* Address: 0x1000f405c | FUN_1000f405c */

undefined * FUN_1000f405c(long param_1)

{
  code *pcVar1;
  _DictionaryStorage *this;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *capacity;
  ulong local_78;
  undefined1 auStack_70 [32];
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar2 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fae1f8;
    FUN_1000037f0(&DAT_100fae1f8,&DAT_100c2d878);
    puVar2 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    param_1 = param_1 + 0x20;
    _swift_retain();
    do {
      uVar4 = 0;
      FUN_1000f41a4(param_1);
      uVar3 = local_78;
      FUN_1000712c0();
      if ((uVar4 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1000f415c);
        (*pcVar1)();
      }
      uVar4 = uVar3 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar2 + uVar4 + 0x40) = *(ulong *)(puVar2 + uVar4 + 0x40) | 1L << (uVar3 & 0x3f);
      *(ulong *)(*(long *)(puVar2 + 0x30) + uVar3 * 8) = local_78;
      FUN_100011080(auStack_70,*(long *)(puVar2 + 0x38) + uVar3 * 0x20);
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1000f4160);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
      param_1 = param_1 + 0x28;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar2);
  }
  return puVar2;
}



/* Address: 0x1000f4160 | FUN_1000f4160 */

void FUN_1000f4160(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  
  if (DAT_100fae010 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_1000f280c(0xff);
  pTVar2 = &TargetProtocolConformanceDescriptor_100c2d59c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2d59c,uVar1);
  DAT_100fae010 = pTVar2;
  return;
}



/* Address: 0x1000f41a4 | FUN_1000f41a4 */

undefined8 FUN_1000f41a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fae200;
  FUN_1000037f0(&DAT_100fae200,&DAT_100c2d880);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1000f41f4 | FUN_1000f41f4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1000f41f4(undefined8 param_1,undefined8 param_2,ID param_3)

{
  NSString *pNVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID unaff_x20;
  String SVar5;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = param_1;
  uStack_48 = param_2;
  SVar5 = Swift::String::_init
                    (&local_50,PTR___type_metadata_for_Swift_String_100eac208,
                     PTR___protocol_witness_table_for_Swift_String___Swift_LosslessStringConvertible_in_Swift_100eac270
                     ,
                     PTR___protocol_witness_table_for_Swift_String___Swift_Sequence_in_Swift_100eac238
                    );
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar5.bridgeObject);
  IVar2 = objc_stub::imageForResource_(param_3,pNVar1);
  if ((IVar2 == 0) ||
     (IVar2 = objc_stub::CGImageForProposedRect_context_hints_(IVar2,0,0,0), IVar2 == 0)) {
    IVar2 = 0;
  }
  else {
    _swift_getObjCClassFromMetadata();
    _objc_allocWithZone();
    IVar3 = IVar2;
    _CGImageGetWidth(IVar2);
    IVar4 = IVar2;
    _CGImageGetHeight(IVar2);
    IVar2 = objc_stub::initWithCGImage_size_
                      (unaff_x20,(double)(long)IVar3,(double)(long)IVar4,IVar2);
  }
  return IVar2;
}



/* Address: 0x1000f4310 | FUN_1000f4310 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_1000f4310(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5)

{
  undefined *puVar1;
  void *aBlock;
  ID IVar2;
  undefined *local_80;
  undefined8 local_78;
  code *local_70;
  undefined *puStack_68;
  code *local_60;
  undefined *local_58;
  
  puVar1 = &DAT_100eb6ea0;
  _swift_allocObject(&DAT_100eb6ea0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  local_60 = FUN_1000f4514;
  local_80 = PTR___NSConcreteStackBlock_100ea82a0;
  local_78 = 0x42000000;
  local_70 = FUN_1000c37e4;
  puStack_68 = &DAT_100eb6eb8;
  local_58 = puVar1;
  aBlock = __Block_copy(&local_80);
  IVar2 = NSImage::imageWithSize_flipped_drawingHandler_
                    ((ID)&_OBJC_CLASS___NSImage,param_1,param_2,0,aBlock);
  __Block_release(aBlock);
  _swift_release(local_58);
  return IVar2;
}



/* Address: 0x1000f4414 | FUN_1000f4414 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
FUN_1000f4414(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             double param_5,ID param_6,ID param_7)

{
  ID self;
  
  objc_stub::setFill(param_6);
  objc_stub::setStroke(param_7);
  _CGRectInset(param_1,param_2,param_3,param_4,param_5 * 0.5,param_5 * 0.5);
  self = NSBezierPath::bezierPathWithOvalInRect_
                   ((ID)&_OBJC_CLASS___NSBezierPath,param_1,param_2,param_3,param_4);
  NSBezierPath::setLineWidth_(self,param_5);
  NSBezierPath::fill(self);
  NSBezierPath::stroke(self);
  return 1;
}



/* Address: 0x1000f44e8 | FUN_1000f44e8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000f44e8(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1000f4514 | FUN_1000f4514 */

void FUN_1000f4514(void)

{
  long unaff_x20;
  
  FUN_1000f4414(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1000f4520 | FUN_1000f4520 */

void FUN_1000f4520(long param_1,long param_2)

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



/* Address: 0x1000f4534 | FUN_1000f4534 */

void FUN_1000f4534(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x1000f453c | FUN_1000f453c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID FUN_1000f453c(ID param_1)

{
  ID IVar1;
  undefined8 uVar2;
  ID *pIVar3;
  ID unaff_x20;
  ID local_58;
  undefined1 auStack_50 [32];
  
  IVar1 = objc_stub::isTemplate(unaff_x20);
  if ((int)IVar1 != 0) {
    IVar1 = objc_stub::copy(unaff_x20);
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(IVar1);
    uVar2 = 0;
    FUN_1000f4620(0);
    pIVar3 = &local_58;
    _swift_dynamicCast(pIVar3,auStack_50,PTR___type_metadata_for_Any_100eae0c0 + 8,uVar2,6);
    if (((ulong)pIVar3 & 1) != 0) {
      objc_stub::lockFocus(local_58);
      objc_stub::set(param_1);
      objc_stub::size(local_58);
      (extension_AppKit)::__C::CGRect::fill((NSCompositingOperation)0x3);
      objc_stub::unlockFocus(local_58);
      objc_stub::setTemplate_(local_58,0);
      return local_58;
    }
  }
  return unaff_x20;
}



/* Address: 0x1000f4620 | FUN_1000f4620 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_1000f4620(void)

{
  undefined *puVar1;
  
  if (DAT_100fae208 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___NSImage;
  _swift_getObjCClassMetadata();
  DAT_100fae208 = puVar1;
  return;
}



/* Address: 0x1000f4664 | thunk_FUN_1000f4774 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000f4828 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void thunk_FUN_1000f4774(char *param_1,void *param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined1 uVar3;
  size_t sVar4;
  code *pcVar5;
  Encoding EVar6;
  ContiguousArray<__int8> CVar7;
  _ArrayBuffer<undefined> _Var8;
  undefined1 *puVar9;
  long extraout_x8;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  String SVar13;
  String SVar14;
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  size_t sStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  EVar6 = Encoding::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(EVar6.unknown + -8) + 0x40));
  puVar9 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  sStack_60 = 0;
  SVar13.bridgeObject = param_2;
  SVar13.str = param_1;
  CVar7 = Swift::String::get_utf8CString(SVar13);
  _sysctlbyname(CVar7.unknown + 0x20,(void *)0x0,&sStack_60,(void *)0x0,0);
  _swift_release(CVar7.unknown);
  sVar4 = sStack_60;
  if ((long)sStack_60 < 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1000f49e0);
    (*pcVar5)();
  }
  _Var8.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (sStack_60 != 0) {
    _Var8 = Swift::Array<undefined>::_allocateBufferUninitialized
                      (CVar7.unknown,PTR___type_metadata_for_Swift_Int8_100eadb28);
    *(size_t *)(_Var8.unknown + 0x10) = sVar4;
    _bzero(_Var8.unknown + 0x20,sVar4);
  }
  SVar14.bridgeObject = param_2;
  SVar14.str = param_1;
  EVar6.unknown = (undefined *)Swift::String::get_utf8CString(SVar14);
  _sysctlbyname(EVar6.unknown + 0x20,_Var8.unknown + 0x20,&sStack_60,(void *)0x0,0);
  _swift_release();
  lVar10 = *(long *)(_Var8.unknown + 0x10);
  puVar11 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar10 != 0) {
    lVar12 = 0;
    do {
      if (_Var8.unknown[lVar12 + 0x20] == '\0') {
        lVar10 = lVar12;
        if (lVar12 == 0) goto LAB_1000f4938;
        break;
      }
      lVar12 = lVar12 + 1;
    } while (lVar10 != lVar12);
    puStack_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
    _swift_bridgeObjectRetain(_Var8.unknown);
    FUN_1000f4668(0,lVar10,0);
    lVar12 = 0x20;
    do {
      uVar3 = _Var8.unknown[lVar12];
      uVar2 = *(ulong *)(puStack_68 + 0x10);
      if (*(ulong *)(puStack_68 + 0x18) >> 1 <= uVar2) {
        FUN_1000f4668(1 < *(ulong *)(puStack_68 + 0x18),uVar2 + 1,1);
      }
      puVar11 = puStack_68;
      *(ulong *)(puStack_68 + 0x10) = uVar2 + 1;
      puStack_68[uVar2 + 0x20] = uVar3;
      lVar12 = lVar12 + 1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    EVar6.unknown = _Var8.unknown;
    _swift_bridgeObjectRelease();
  }
LAB_1000f4938:
  puStack_68 = puVar11;
  Encoding::_get_utf8(EVar6);
  FUN_1000037f0(&DAT_100fae210,&DAT_100c2d8a0);
  FUN_1000f49f4();
  EVar6.unknown = (undefined *)&puStack_68;
  (extension_Foundation)::Swift::String::_init(EVar6);
  _swift_bridgeObjectRelease(puVar11);
  _swift_bridgeObjectRelease(_Var8.unknown);
  puVar11 = (undefined *)0x0;
  if (puVar9 != (undefined1 *)0x0) {
    puVar11 = EVar6.unknown;
  }
  puVar1 = (undefined1 *)0xe000000000000000;
  if (puVar9 != (undefined1 *)0x0) {
    puVar1 = puVar9;
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != lStack_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(puVar11,puVar1);
  }
  return;
}



/* Address: 0x1000f4668 | FUN_1000f4668 */

void FUN_1000f4668(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1000f4684();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1000f4684 | FUN_1000f4684 */

undefined * FUN_1000f4684(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  size_t sVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000f4774);
        (*pcVar2)();
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
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fae220;
    FUN_1000037f0(&DAT_100fae220,&DAT_100c2d8a8);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(size_t *)(puVar3 + 0x10) = sVar6;
    *(long *)(puVar3 + 0x18) = (long)puVar4 * 2 + -0x40;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar4,puVar1,sVar6);
  }
  else {
    if (puVar3 != param_4 || puVar1 + sVar6 <= puVar4) {
      _memmove(puVar4,puVar1,sVar6);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x1000f4774 | FUN_1000f4774 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000f4828 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000f4774(char *param_1,void *param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined1 uVar3;
  size_t sVar4;
  code *pcVar5;
  Encoding EVar6;
  ContiguousArray<__int8> CVar7;
  _ArrayBuffer<undefined> _Var8;
  undefined1 *puVar9;
  long extraout_x8;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  String SVar13;
  String SVar14;
  undefined1 auStack_70 [8];
  undefined *local_68;
  size_t local_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  EVar6 = Encoding::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(EVar6.unknown + -8) + 0x40));
  puVar9 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_60 = 0;
  SVar13.bridgeObject = param_2;
  SVar13.str = param_1;
  CVar7 = Swift::String::get_utf8CString(SVar13);
  _sysctlbyname(CVar7.unknown + 0x20,(void *)0x0,&local_60,(void *)0x0,0);
  _swift_release(CVar7.unknown);
  sVar4 = local_60;
  if ((long)local_60 < 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1000f49e0);
    (*pcVar5)();
  }
  _Var8.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (local_60 != 0) {
    _Var8 = Swift::Array<undefined>::_allocateBufferUninitialized
                      (CVar7.unknown,PTR___type_metadata_for_Swift_Int8_100eadb28);
    *(size_t *)(_Var8.unknown + 0x10) = sVar4;
    _bzero(_Var8.unknown + 0x20,sVar4);
  }
  SVar14.bridgeObject = param_2;
  SVar14.str = param_1;
  EVar6.unknown = (undefined *)Swift::String::get_utf8CString(SVar14);
  _sysctlbyname(EVar6.unknown + 0x20,_Var8.unknown + 0x20,&local_60,(void *)0x0,0);
  _swift_release();
  lVar10 = *(long *)(_Var8.unknown + 0x10);
  puVar11 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar10 != 0) {
    lVar12 = 0;
    do {
      if (_Var8.unknown[lVar12 + 0x20] == '\0') {
        lVar10 = lVar12;
        if (lVar12 == 0) goto LAB_1000f4938;
        break;
      }
      lVar12 = lVar12 + 1;
    } while (lVar10 != lVar12);
    local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
    _swift_bridgeObjectRetain(_Var8.unknown);
    FUN_1000f4668(0,lVar10,0);
    lVar12 = 0x20;
    do {
      uVar3 = _Var8.unknown[lVar12];
      uVar2 = *(ulong *)(local_68 + 0x10);
      if (*(ulong *)(local_68 + 0x18) >> 1 <= uVar2) {
        FUN_1000f4668(1 < *(ulong *)(local_68 + 0x18),uVar2 + 1,1);
      }
      puVar11 = local_68;
      *(ulong *)(local_68 + 0x10) = uVar2 + 1;
      local_68[uVar2 + 0x20] = uVar3;
      lVar12 = lVar12 + 1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    EVar6.unknown = _Var8.unknown;
    _swift_bridgeObjectRelease();
  }
LAB_1000f4938:
  local_68 = puVar11;
  Encoding::_get_utf8(EVar6);
  FUN_1000037f0(&DAT_100fae210,&DAT_100c2d8a0);
  FUN_1000f49f4();
  EVar6.unknown = (undefined *)&local_68;
  (extension_Foundation)::Swift::String::_init(EVar6);
  _swift_bridgeObjectRelease(puVar11);
  _swift_bridgeObjectRelease(_Var8.unknown);
  puVar11 = (undefined *)0x0;
  if (puVar9 != (undefined1 *)0x0) {
    puVar11 = EVar6.unknown;
  }
  puVar1 = (undefined1 *)0xe000000000000000;
  if (puVar9 != (undefined1 *)0x0) {
    puVar1 = puVar9;
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(puVar11,puVar1);
  }
  return;
}



/* Address: 0x1000f49e4 | FUN_1000f49e4 */

undefined1  [16] FUN_1000f49e4(void)

{
  return ZEXT816(0x100eb6ef0);
}



/* Address: 0x1000f49f4 | FUN_1000f49f4 */

void FUN_1000f49f4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fae218 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fae210;
  FUN_100005c24(&DAT_100fae210,&DAT_100c2d8a0);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530,puVar1);
  DAT_100fae218 = puVar2;
  return;
}



/* Address: 0x1000f4a44 | FUN_1000f4a44 */

undefined8 FUN_1000f4a44(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}



/* Address: 0x1000f4a4c | FUN_1000f4a4c */

undefined8 FUN_1000f4a4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



/* Address: 0x1000f4a54 | thunk_FUN_1000f5cf4 */

void thunk_FUN_1000f5cf4(void)

{
  FUN_1000f5cf4();
  return;
}



/* Address: 0x1000f4a58 | FUN_1000f4a58 */

undefined8 FUN_1000f4a58(undefined8 param_1)

{
  undefined8 extraout_x8;
  long unaff_x21;
  
  FUN_1000f6020();
  if (unaff_x21 != 0) {
    param_1 = extraout_x8;
  }
  return param_1;
}



/* Address: 0x1000f4a7c | FUN_1000f4a7c */

String FUN_1000f4a7c(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  String SVar1;
  String SVar2;
  String SVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  
  SVar1 = Swift::CustomStringConvertible::get_description();
  SVar2.bridgeObject = (void *)0xe100000000000000;
  SVar2.str = (char *)0x2e;
  SVar4.bridgeObject = param_4;
  SVar4.str = param_3;
  Swift::String::append(SVar2,SVar4);
  SVar2 = Swift::CustomStringConvertible::get_description();
  SVar5.bridgeObject = param_4;
  SVar5.str = param_3;
  Swift::String::append(SVar2,SVar5);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  SVar3.bridgeObject = (void *)0xe100000000000000;
  SVar3.str = (char *)0x2e;
  SVar6.bridgeObject = param_4;
  SVar6.str = param_3;
  Swift::String::append(SVar3,SVar6);
  SVar2 = Swift::CustomStringConvertible::get_description();
  SVar7.bridgeObject = param_4;
  SVar7.str = param_3;
  Swift::String::append(SVar2,SVar7);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  return SVar1;
}



/* Address: 0x1000f4b50 | FUN_1000f4b50 */

bool FUN_1000f4b50(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = param_3 < param_6;
  if (param_2 != param_5) {
    bVar1 = param_2 < param_5;
  }
  bVar2 = param_1 < param_4;
  if (param_1 == param_4) {
    bVar2 = bVar1;
  }
  return bVar2;
}



/* Address: 0x1000f4b78 | FUN_1000f4b78 */

undefined1  [16] FUN_1000f4b78(void)

{
  byte *unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(undefined8 *)("major" + (ulong)*unaff_x20 * 8);
  auVar1._8_8_ = &DAT_e500000000000000;
  return auVar1;
}



/* Address: 0x1000f4b90 | FUN_1000f4b90 */

void FUN_1000f4b90(undefined1 *param_1,undefined1 param_2)

{
  FUN_1000f639c();
  *param_1 = param_2;
  return;
}



/* Address: 0x1000f4bb4 | FUN_1000f4bb4 */

void FUN_1000f4bb4(undefined1 *param_1)

{
  *param_1 = 3;
  return;
}



/* Address: 0x1000f4bc0 | FUN_1000f4bc0 */

String FUN_1000f4bc0(void)

{
  String SVar1;
  
  FUN_1000f61cc();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x1000f4be8 | FUN_1000f4be8 */

String FUN_1000f4be8(void)

{
  String SVar1;
  
  FUN_1000f61cc();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x1000f4c10 | FUN_1000f4c10 */

bool FUN_1000f4c10(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6)

{
  return (param_1 == param_4 && param_2 == param_5) && param_3 == param_6;
}



/* Address: 0x1000f4c24 | FUN_1000f4c24 */

void FUN_1000f4c24(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long unaff_x21;
  long lVar2;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar1 = &DAT_100fae228;
  local_68 = param_3;
  FUN_1000037f0(&DAT_100fae228,&DAT_100c2d8b0);
  lVar2 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_1000f61cc();
  Swift::Encoder::_container();
  local_51 = 0;
  Swift::KeyedEncodingContainer::_encode(param_2,&local_51,puVar1);
  if (unaff_x21 == 0) {
    local_52 = 1;
    Swift::KeyedEncodingContainer::_encode(local_68,&local_52,puVar1);
    local_53 = 2;
    Swift::KeyedEncodingContainer::_encode(param_4,&local_53,puVar1);
    (**(code **)(lVar2 + 8))(auStack_70 + -extraout_x8,puVar1);
  }
  else {
    (**(code **)(lVar2 + 8))(auStack_70 + -extraout_x8,puVar1);
  }
  return;
}



/* Address: 0x1000f4d80 | FUN_1000f4d80 */

void FUN_1000f4d80(undefined8 param_1,Hasher param_2,__uint64 param_3,__uint64 param_4)

{
  Swift::Hasher::_combine((__uint64)param_2.unknown,param_2);
  Swift::Hasher::_combine(param_3,param_2);
  Swift::Hasher::_combine(param_4,param_2);
  return;
}



/* Address: 0x1000f4dc4 | FUN_1000f4dc4 */

void FUN_1000f4dc4(__uint64 param_1,undefined *param_2,Hasher param_3)

{
  Hasher HVar1;
  
  HVar1.unknown = param_2;
  Swift::Hasher::init(0);
  Swift::Hasher::_combine(param_1,HVar1);
  Swift::Hasher::_combine((__uint64)param_2,HVar1);
  Swift::Hasher::_combine((__uint64)param_3.unknown,HVar1);
  Swift::Hasher::_finalize(param_3);
  return;
}



/* Address: 0x1000f4e30 | FUN_1000f4e30 */

void FUN_1000f4e30(undefined8 param_1,Hasher param_2)

{
  __uint64 _Var1;
  __uint64 _Var2;
  __uint64 *unaff_x20;
  Hasher HVar3;
  
  _Var1 = *unaff_x20;
  _Var2 = unaff_x20[1];
  HVar3.unknown = (undefined *)unaff_x20[2];
  Swift::Hasher::init(0);
  Swift::Hasher::_combine(_Var1,param_2);
  Swift::Hasher::_combine(_Var2,param_2);
  Swift::Hasher::_combine((__uint64)HVar3.unknown,param_2);
  Swift::Hasher::_finalize(HVar3);
  return;
}



/* Address: 0x1000f4e98 | FUN_1000f4e98 */

void FUN_1000f4e98(undefined8 param_1,Hasher param_2)

{
  __uint64 _Var1;
  __uint64 *unaff_x20;
  __uint64 _Var2;
  
  _Var1 = unaff_x20[1];
  _Var2 = unaff_x20[2];
  Swift::Hasher::_combine(*unaff_x20,param_2);
  Swift::Hasher::_combine(_Var1,param_2);
  Swift::Hasher::_combine(_Var2,param_2);
  return;
}



/* Address: 0x1000f4edc | FUN_1000f4edc */

void FUN_1000f4edc(__int64 param_1,Hasher param_2)

{
  __uint64 _Var1;
  __uint64 _Var2;
  __uint64 *unaff_x20;
  Hasher HVar3;
  
  _Var1 = *unaff_x20;
  _Var2 = unaff_x20[1];
  HVar3.unknown = (undefined *)unaff_x20[2];
  Swift::Hasher::init(param_1);
  Swift::Hasher::_combine(_Var1,param_2);
  Swift::Hasher::_combine(_Var2,param_2);
  Swift::Hasher::_combine((__uint64)HVar3.unknown,param_2);
  Swift::Hasher::_finalize(HVar3);
  return;
}



/* Address: 0x1000f4f40 | FUN_1000f4f40 */

bool FUN_1000f4f40(long *param_1,long *param_2)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = param_1[2] < param_2[2];
  if (param_1[1] != param_2[1]) {
    bVar1 = param_1[1] < param_2[1];
  }
  bVar2 = *param_1 < *param_2;
  if (*param_1 == *param_2) {
    bVar2 = bVar1;
  }
  return bVar2;
}


