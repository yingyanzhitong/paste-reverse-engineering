/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100159718 | FUN_100159718 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100159718(void)

{
  char *pcVar1;
  void *pvVar2;
  URL UVar3;
  NSURL *pNVar4;
  ID IVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined *puVar8;
  char *pcVar9;
  undefined *extraout_x1;
  _StringGuts _Var10;
  char *pcVar11;
  char **ppcVar12;
  undefined *puVar13;
  long lVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String separator;
  char *local_68;
  char *local_60;
  void *local_58;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  UVar3.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
  pNVar4 = Foundation::URL::_bridgeToObjectiveC(UVar3);
  local_60 = (char *)0x0;
  IVar5 = NSFileManager::contentsOfDirectoryAtURL_includingPropertiesForKeys_options_error_
                    ((ID)UVar3.unknown,pNVar4,0,0,&local_60);
  if (IVar5 == 0) {
    pcVar7 = local_60;
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
LAB_100159874:
    _swift_errorRelease(pcVar7);
  }
  else {
    Foundation::URL::typeMetadataAccessor();
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
    lVar14 = *(long *)(IVar5 + 0x10);
    _swift_bridgeObjectRelease(IVar5);
    if (lVar14 == 0) {
      UVar3.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
      pNVar4 = Foundation::URL::_bridgeToObjectiveC(UVar3);
      local_60 = (char *)0x0;
      ppcVar12 = &local_60;
      IVar5 = NSFileManager::removeItemAtURL_error_((ID)UVar3.unknown);
      if ((int)IVar5 != 0) {
        uVar6 = 1;
        goto LAB_10015987c;
      }
      pcVar7 = local_60;
      _Var10.unknown = extraout_x1;
      Foundation::__convertNSErrorToError();
      _swift_willThrow(0);
      local_60 = (char *)0x0;
      local_58 = (void *)0xe000000000000000;
      Swift::_StringGuts::grow(0x2a,_Var10);
      UVar3.unknown = (undefined *)0xd000000000000024;
      SVar15.bridgeObject = (void *)0x8000000100d93ff0;
      SVar15.str = (char *)0xd000000000000024;
      SVar19.bridgeObject = ppcVar12;
      SVar19.str = (char *)pNVar4;
      Swift::String::append(SVar15,SVar19);
      SVar15 = Foundation::URL::get_path(UVar3);
      SVar20.bridgeObject = ppcVar12;
      SVar20.str = (char *)pNVar4;
      Swift::String::append(SVar15,SVar20);
      _swift_bridgeObjectRelease(SVar15.bridgeObject);
      SVar16.bridgeObject = &SUB_e200000000000000;
      SVar16.str = (char *)0x203a;
      SVar21.bridgeObject = ppcVar12;
      SVar21.str = (char *)pNVar4;
      Swift::String::append(SVar16,SVar21);
      puVar8 = &DAT_100faf510;
      local_68 = pcVar7;
      FUN_1000f7830(&DAT_100faf510,&DAT_100c2e820);
      puVar13 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
      Swift::__print_unlocked
                (&local_68,&local_60,puVar8,
                 PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
                 PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
                );
      pvVar2 = local_58;
      pcVar1 = local_60;
      if (DAT_101057340 != '\x01') {
        _swift_bridgeObjectRelease(local_58);
        goto LAB_100159874;
      }
      pcVar9 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      pcVar11 = (char *)0x7;
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
      local_60 = (char *)0x676f4874736f505b;
      local_58 = (void *)0xea0000000000205d;
      SVar17.bridgeObject = pvVar2;
      SVar17.str = pcVar1;
      SVar22.bridgeObject = puVar13;
      SVar22.str = pcVar11;
      Swift::String::append(SVar17,SVar22);
      *(undefined **)(pcVar9 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      *(char **)(pcVar9 + 0x20) = local_60;
      *(void **)(pcVar9 + 0x28) = local_58;
      SVar18.bridgeObject = (void *)0x20;
      SVar18.str = pcVar9;
      separator.bridgeObject = (void *)0xa;
      separator.str = (char *)0xe100000000000000;
      Swift::_print(SVar18,separator);
      _swift_bridgeObjectRelease(pvVar2);
      _swift_errorRelease(pcVar7);
      _swift_release(pcVar9);
    }
  }
  uVar6 = 0;
LAB_10015987c:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar6);
}



/* Address: 0x100159a44 | FUN_100159a44 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100159a44(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  URL UVar1;
  NSString *pNVar2;
  ID IVar3;
  URL UVar4;
  NSURL *pNVar5;
  String SVar6;
  undefined8 local_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  if ((param_3 & 1) == 0) {
    UVar1.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
    SVar6 = Foundation::URL::get_path(UVar1);
    pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar6.bridgeObject);
    IVar3 = NSFileManager::fileExistsAtPath_((ID)UVar1.unknown,pNVar2);
    if ((IVar3 & 1) != 0) goto LAB_100159b4c;
    UVar1.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
    UVar4.unknown = Foundation::URL::_bridgeToObjectiveC(UVar1);
    pNVar5 = Foundation::URL::_bridgeToObjectiveC(UVar4);
    local_60 = 0;
    IVar3 = NSFileManager::copyItemAtURL_toURL_error_
                      ((ID)UVar1.unknown,UVar4.unknown,pNVar5,&local_60);
    if ((int)IVar3 != 0) goto LAB_100159b4c;
  }
  else {
LAB_100159b4c:
    UVar1.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
    pNVar5 = Foundation::URL::_bridgeToObjectiveC(UVar1);
    local_60 = 0;
    IVar3 = NSFileManager::removeItemAtURL_error_((ID)UVar1.unknown,pNVar5,&local_60);
    if ((int)IVar3 != 0) goto LAB_100159bd0;
  }
  Foundation::__convertNSErrorToError();
  _swift_willThrow(0);
LAB_100159bd0:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x100159c0c | FUN_100159c0c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_100159c0c(ulong param_1,undefined8 param_2,byte *param_3)

{
  byte *pbVar1;
  byte *_seed;
  byte *pbVar2;
  undefined8 uVar3;
  undefined *puVar4;
  Hasher HVar5;
  undefined8 uVar6;
  undefined *puVar7;
  char *pcVar8;
  Hasher unaff_x19;
  byte *unaff_x20;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  String SVar30;
  String SVar31;
  String SVar32;
  undefined1 auStack_70 [80];
  
  pbVar1 = &DAT_2e676f6874736f70;
  HVar5.unknown = (byte *)0xed00007367616c66;
  pcVar8 = (char *)(param_1 & 0xff);
  _seed = pbVar1;
  pbVar2 = HVar5.unknown;
  switch(pcVar8) {
  default:
    pcVar8 = "on_opened";
  case (char *)0x7e:
  case (char *)0xb6:
  case (char *)0xf6:
    pcVar8 = pcVar8 + 0xec0;
LAB_100159e58:
    auVar20._8_8_ = (ulong)(pcVar8 + -0x20) | 0x8000000000000000;
    auVar20._0_8_ = 0xd000000000000012;
    return auVar20;
  case (char *)0x1:
    pbVar1 = (byte *)0xd000000000000013;
    pcVar8 = "posthog.anonymousId";
    goto LAB_100159e44;
  case (char *)0x2:
    pcVar8 = "posthog.queueFolder.uuid";
    goto LAB_100159eb8;
  case (char *)0x3:
    pbVar1 = (byte *)0xd000000000000013;
    pcVar8 = "posthog.queueFolder";
    goto LAB_100159e44;
  case (char *)0x4:
  case (char *)0x85:
    pbVar1 = (byte *)0x13;
  case (char *)0xbd:
  case (char *)0xfd:
    pbVar1 = (byte *)((ulong)pbVar1 & 0xffffffffffff | 0xd000000000000000);
  case (char *)0x78:
    pcVar8 = "posthog.queue.plist";
LAB_100159e44:
    auVar19._8_8_ = (ulong)(pcVar8 + -0x20) | 0x8000000000000000;
    auVar19._0_8_ = pbVar1;
    return auVar19;
  case (char *)0x5:
    HVar5.unknown = (byte *)0x8000000100d93e00;
  case (char *)0x2b:
    pbVar1 = (byte *)0xd000000000000019;
  case (char *)0x3f:
    auVar13._8_8_ = HVar5.unknown;
    auVar13._0_8_ = pbVar1;
    return auVar13;
  case (char *)0x6:
  case (char *)0x54:
  case (char *)0xa1:
  case (char *)0xfc:
    pcVar8 = "on_opened";
  case (char *)0xd8:
    pcVar8 = pcVar8 + 0xe00;
    break;
  case (char *)0x7:
    pcVar8 = "posthog.replayBufferFolder";
    goto LAB_100159da4;
  case (char *)0x8:
  case (char *)0x28:
  case (char *)0x2c:
  case (char *)0x30:
  case (char *)0x3a:
    pcVar8 = "posthog.logsFolder";
    goto LAB_100159e58;
  case (char *)0x9:
    HVar5.unknown = (byte *)0x8000000100d93da0;
  case (char *)0xbc:
    auVar11._8_8_ = HVar5.unknown;
    auVar11._0_8_ = 0xd00000000000001b;
    return auVar11;
  case (char *)0xa:
  case (char *)0x2d:
  case (char *)0x33:
  case (char *)0x3d:
    pcVar8 = "posthog.registerProperties";
  case (char *)0x49:
  case (char *)0x69:
  case (char *)0x71:
  case (char *)0xd9:
    auVar17._8_8_ = (ulong)pcVar8 | 0x8000000000000000;
    auVar17._0_8_ = 0xd000000000000022;
    return auVar17;
  case (char *)0xc:
    auVar10._8_8_ = 0xee007370756f7267;
    auVar10._0_8_ = &DAT_2e676f6874736f70;
    return auVar10;
  case (char *)0xd:
    pcVar8 = "posthog.registerProperties";
    goto LAB_100159da4;
  case (char *)0xe:
  case (char *)0x4c:
    HVar5.unknown = (byte *)0x4f74706f;
  case (char *)0x4a:
  case (char *)0x6a:
  case (char *)0x72:
  case (char *)0xa2:
  case (char *)0xda:
    auVar9._8_8_ = (ulong)HVar5.unknown & 0xffffffff | 0xee00747500000000;
    auVar9._0_8_ = &DAT_2e676f6874736f70;
    return auVar9;
  case (char *)0xf:
    pcVar8 = "posthog.sessionReplay";
    goto LAB_100159ed8;
  case (char *)0x10:
    pcVar8 = "on_opened";
  case (char *)0x56:
  case (char *)0x8e:
  case (char *)0xc6:
    pcVar8 = pcVar8 + 0xd30;
    break;
  case (char *)0x11:
    pcVar8 = "posthog.enabledPersonProcessing";
    goto LAB_100159e78;
  case (char *)0x12:
    pcVar8 = "on_opened";
  case (char *)0xc5:
    pcVar8 = pcVar8 + 0xcf0;
    break;
  case (char *)0x13:
    pcVar8 = "posthog.surveySeen";
    goto LAB_100159e58;
  case (char *)0x14:
    pcVar8 = "posthog.lastSeenSurveyDate";
  case (char *)0x86:
  case (char *)0xbe:
  case (char *)0xfe:
    goto LAB_100159da4;
  case (char *)0x15:
    HVar5.unknown = (byte *)0x8000000100d92770;
  case (char *)0x27:
    pcVar8 = (char *)0xd000000000000013;
  case (char *)0x7a:
  case (char *)0xaa:
  case (char *)0xb2:
  case (char *)0xe2:
  case (char *)0xea:
  case (char *)0xf2:
    pbVar1 = (byte *)(pcVar8 + -2);
  case (char *)0x2e:
  case (char *)0x38:
    auVar14._8_8_ = HVar5.unknown;
    auVar14._0_8_ = pbVar1;
    return auVar14;
  case (char *)0x16:
    pbVar1 = (byte *)0xd000000000000013;
    pcVar8 = "posthog.evaluatedAt";
    goto LAB_100159e44;
  case (char *)0x17:
    pcVar8 = "posthog.minimalFlagCalledEvents";
    goto LAB_100159e78;
  case (char *)0x18:
    pcVar8 = "on_opened";
  case (char *)0x8c:
    HVar5.unknown = (undefined *)((ulong)(pcVar8 + 0xc60) | 0x8000000000000000);
    pcVar8 = (char *)0x13;
  case (char *)0x52:
  case (char *)0x66:
  case (char *)0x6e:
  case (char *)0x76:
  case (char *)0x8a:
  case (char *)0x9e:
  case (char *)0xa6:
  case (char *)0xae:
  case (char *)0xc2:
  case (char *)0xd6:
  case (char *)0xde:
  case (char *)0xe6:
  case (char *)0xee:
    auVar12._8_8_ = HVar5.unknown;
    auVar12._0_8_ = ((ulong)pcVar8 | 0xd000000000000000) + 0xd;
    return auVar12;
  case (char *)0x19:
    pcVar8 = "posthog.groupPropertiesForFlags";
LAB_100159e78:
    pcVar8 = pcVar8 + -0x20;
switchD_100159c48_caseD_a8:
    auVar21._8_8_ = (ulong)pcVar8 | 0x8000000000000000;
    auVar21._0_8_ = 0xd00000000000001f;
    return auVar21;
  case (char *)0x1a:
    pcVar8 = "posthog.errorTracking";
LAB_100159ed8:
    auVar24._8_8_ = (ulong)(pcVar8 + -0x20) | 0x8000000000000000;
    auVar24._0_8_ = 0xd000000000000015;
    return auVar24;
  case (char *)0x1b:
  case (char *)0x5e:
  case (char *)0x60:
  case (char *)0x96:
  case (char *)0x98:
  case (char *)0xce:
    pcVar8 = "on_opened";
  case (char *)0xd0:
    pcVar8 = pcVar8 + 0xc20;
LAB_100159da4:
    HVar5.unknown = (undefined *)((ulong)(pcVar8 + -0x20) | 0x8000000000000000);
switchD_100159c48_caseD_e0:
    auVar15._8_8_ = HVar5.unknown;
    auVar15._0_8_ = 0xd00000000000001a;
    return auVar15;
  case (char *)0x1c:
    HVar5.unknown = (byte *)0x8000000100d93be0;
    pcVar8 = (char *)0xd000000000000013;
  case (char *)0xa0:
    auVar22._0_8_ = (byte *)(pcVar8 + -3);
    auVar22._8_8_ = HVar5.unknown;
    return auVar22;
  case (char *)0x1d:
    pcVar8 = "posthog.pushSubscription";
LAB_100159eb8:
    HVar5.unknown = (undefined *)((ulong)(pcVar8 + -0x20) | 0x8000000000000000);
switchD_100159c48_caseD_51:
    auVar23._8_8_ = HVar5.unknown;
    auVar23._0_8_ = 0xd000000000000018;
    return auVar23;
  case (char *)0x1e:
  case (char *)0x31:
  case (char *)0x3b:
    pcVar8 = "on_opened";
  case (char *)0x29:
    pcVar8 = pcVar8 + 0xbc0;
  case (char *)0x2a:
  case (char *)0x2f:
  case (char *)0x39:
    HVar5.unknown = (undefined *)((ulong)(pcVar8 + -0x20) | 0x8000000000000000);
    pbVar1 = (byte *)0xd00000000000001d;
  case (char *)0xb:
  case (char *)0x41:
    auVar18._8_8_ = HVar5.unknown;
    auVar18._0_8_ = pbVar1;
    return auVar18;
  case (char *)0x32:
  case (char *)0x3c:
  case (char *)0x55:
  case (char *)0x8d:
    break;
  case (char *)0x34:
  case (char *)0x3e:
  case (char *)0x40:
    goto switchD_100159c48_caseD_34;
  case (char *)0x51:
  case (char *)0x65:
  case (char *)0x6d:
  case (char *)0x75:
  case (char *)0x89:
  case (char *)0x9d:
  case (char *)0xa5:
  case (char *)0xad:
  case (char *)0xc1:
  case (char *)0xd4:
  case (char *)0xd5:
  case (char *)0xdc:
  case (char *)0xdd:
  case (char *)0xe4:
  case (char *)0xe5:
  case (char *)0xec:
  case (char *)0xed:
    goto switchD_100159c48_caseD_51;
  case (char *)0x7b:
  case (char *)0xab:
  case (char *)0xb3:
  case (char *)0xe3:
  case (char *)0xeb:
  case (char *)0xf3:
    puVar4 = &DAT_100fb0d00;
    FUN_1000f7830(&DAT_100fb0d00,&DAT_100c2efa8);
    puVar7 = &DAT_100fb0ff8;
    _swift_initStaticObject();
    *(undefined **)pcVar8 = puVar4;
    auVar29._8_8_ = puVar7;
    auVar29._0_8_ = puVar4;
    return auVar29;
  case (char *)0x84:
    pbVar1 = (byte *)(ulong)*unaff_x20;
    Swift::Hasher::init(0x2e676f6874736f70);
  case (char *)0x50:
    FUN_100159c0c();
  case (char *)0x48:
    SVar32.bridgeObject = HVar5.unknown;
    SVar32.str = (char *)pbVar1;
    Swift::String::hash((Hasher)&stack0x00000008,SVar32);
    _swift_bridgeObjectRelease();
    auVar27._0_8_ = Swift::Hasher::_finalize(HVar5);
    auVar27._8_8_ = pbVar1;
    return auVar27;
  case (char *)0x88:
    unaff_x19.unknown = pbVar1;
  case (char *)0x68:
    pbVar2 = (byte *)(ulong)*unaff_x20;
    FUN_100159c0c();
    SVar31.bridgeObject = HVar5.unknown;
    SVar31.str = (char *)pbVar2;
    Swift::String::hash(unaff_x19,SVar31);
    unaff_x20 = HVar5.unknown;
  case (char *)0x64:
  case (char *)0x6c:
  case (char *)0x74:
    _swift_bridgeObjectRelease(unaff_x20);
    auVar26._8_8_ = pbVar2;
    auVar26._0_8_ = unaff_x20;
    return auVar26;
  case (char *)0xa8:
    goto switchD_100159c48_caseD_a8;
  case (char *)0xc0:
    register0x00000008 = (BADSPACEBASE *)auStack_70;
  case (char *)0xe1:
  case (char *)0xe9:
  case (char *)0xf1:
    unaff_x19.unknown = (undefined *)(ulong)*unaff_x20;
  case (char *)0xa9:
  case (char *)0xb1:
  case (char *)0x79:
    _seed = (byte *)0x0;
  case (char *)0xb0:
  case (char *)0xe8:
    pbVar1 = unaff_x19.unknown;
    Swift::Hasher::init((__int64)_seed);
    FUN_100159c0c();
  case (char *)0x70:
    param_3 = pbVar1;
    unaff_x19.unknown = HVar5.unknown;
  case (char *)0x9c:
  case (char *)0xa4:
  case (char *)0xac:
    SVar30.bridgeObject = unaff_x19.unknown;
    SVar30.str = (char *)param_3;
    Swift::String::hash((undefined *)((long)register0x00000008 + 8),SVar30);
    _swift_bridgeObjectRelease();
    auVar25._0_8_ = Swift::Hasher::_finalize(unaff_x19);
    auVar25._8_8_ = param_3;
    return auVar25;
  case (char *)0xe0:
    goto switchD_100159c48_caseD_e0;
  case (char *)0xf0:
    unaff_x19.unknown = pcVar8;
  case (char *)0xc4:
    uVar3 = _DAT_2e676f6874736f70;
    uVar6 = _DAT_2e676f6874736f78;
    FUN_10015c290(_DAT_2e676f6874736f70,_DAT_2e676f6874736f78);
    *unaff_x19.unknown = (byte)uVar3;
    auVar28._8_8_ = uVar6;
    auVar28._0_8_ = uVar3;
    return auVar28;
  }
  HVar5.unknown = (undefined *)((ulong)(pcVar8 + -0x20) | 0x8000000000000000);
  pcVar8 = (char *)0xd000000000000013;
switchD_100159c48_caseD_34:
  auVar16._8_8_ = HVar5.unknown;
  auVar16._0_8_ = pcVar8 + 1;
  return auVar16;
}



/* Address: 0x100159ef0 | switchD_100159c48::caseD_c0 */

void switchD_100159c48::caseD_c0(undefined8 param_1,Hasher param_2)

{
  char *pcVar1;
  byte *unaff_x20;
  String SVar2;
  undefined1 auStack_68 [72];
  
  pcVar1 = (char *)(ulong)*unaff_x20;
  Swift::Hasher::init(0);
  FUN_100159c0c();
  SVar2.bridgeObject = param_2.unknown;
  SVar2.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar2);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(param_2);
  return;
}



/* Address: 0x100159f50 | switchD_100159c48::caseD_88 */

void switchD_100159c48::caseD_88(Hasher param_1,void *param_2)

{
  char *pcVar1;
  byte *unaff_x20;
  String SVar2;
  
  pcVar1 = (char *)(ulong)*unaff_x20;
  FUN_100159c0c();
  SVar2.bridgeObject = param_2;
  SVar2.str = pcVar1;
  Swift::String::hash(param_1,SVar2);
  _swift_bridgeObjectRelease(param_2);
  return;
}



/* Address: 0x100159f90 | FUN_100159f90 */

void FUN_100159f90(__int64 param_1,Hasher param_2)

{
  char *pcVar1;
  byte *unaff_x20;
  String SVar2;
  undefined1 auStack_68 [72];
  
  pcVar1 = (char *)(ulong)*unaff_x20;
  Swift::Hasher::init(param_1);
  FUN_100159c0c();
  SVar2.bridgeObject = param_2.unknown;
  SVar2.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar2);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(param_2);
  return;
}



/* Address: 0x100159fec | switchD_100159c48::caseD_f0 */

void switchD_100159c48::caseD_f0(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_10015c290(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x10015a018 | FUN_10015a018 */

void FUN_10015a018(ulong *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  byte *unaff_x20;
  
  uVar1 = (ulong)*unaff_x20;
  FUN_100159c0c();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



/* Address: 0x10015a040 | FUN_10015a040 */

void FUN_10015a040(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fb0d00;
  FUN_1000f7830(&DAT_100fb0d00,&DAT_100c2efa8);
  _swift_initStaticObject();
  *param_1 = puVar1;
  return;
}



/* Address: 0x10015a080 | FUN_10015a080 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10015a080(undefined8 param_1)

{
  URL UVar1;
  long extraout_x8;
  long unaff_x20;
  long lVar2;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar2 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar2 + 0x40));
  FUN_10015a134(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1);
  (**(code **)(lVar2 + 0x20))
            (unaff_x20 + _TtC7PostHog14PostHogStorage::appFolderUrl,
             &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar1.unknown);
  FUN_10015b8dc(param_1,unaff_x20 + _TtC7PostHog14PostHogStorage::appFolderUrl);
  return;
}



/* Address: 0x10015a134 | FUN_10015a134 */

void FUN_10015a134(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  URL UVar2;
  undefined1 *puVar3;
  URL UVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  
  puVar1 = &DAT_100fae670;
  FUN_1000f7830(&DAT_100fae670,&DAT_100c2e0e8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar1 + -8) + 0x40));
  puVar5 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar7 = (long)puVar5 - extraout_x12;
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar9 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  lVar6 = lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_100157f44(lVar7,param_2);
  FUN_100123b94(lVar7,puVar5);
  pcVar8 = *(code **)(lVar9 + 0x30);
  puVar3 = puVar5;
  (*pcVar8)(puVar5,1,UVar2.unknown);
  UVar4 = UVar2;
  if ((int)puVar3 == 1) {
    FUN_100157dac(lVar6);
    puVar3 = puVar5;
    (*pcVar8)(puVar5,1);
    if ((int)puVar3 != 1) {
      UVar4.unknown = &DAT_100c2e0e8;
      FUN_1000fb4c4(puVar5,&DAT_100fae670);
    }
  }
  else {
    (**(code **)(lVar9 + 0x20))(lVar6,puVar5);
  }
  Foundation::URL::appendingPathComponent(*(String *)(param_2 + PostHogConfig::projectToken),UVar4);
  (**(code **)(lVar9 + 8))(lVar6,UVar2.unknown);
  FUN_1001726a0(param_1);
  return;
}



/* Address: 0x10015a2c0 | FUN_10015a2c0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x00010015a3b0) */
/* WARNING: Removing unreachable block (ram,0x00010015a468) */
/* WARNING: Removing unreachable block (ram,0x00010015a4f8) */

undefined1  [16] FUN_10015a2c0(char *param_1,void *param_2,URL param_3)

{
  URL UVar1;
  URL self;
  ID IVar2;
  Data DVar3;
  undefined8 uVar4;
  long extraout_x8;
  long lVar5;
  String SVar6;
  undefined1 auVar7 [16];
  undefined1 local_70 [32];
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar5 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar5 + 0x40));
  FUN_100159c0c();
  SVar6.bridgeObject = param_2;
  SVar6.str = param_1;
  Foundation::URL::appendingPathComponent(SVar6,param_3);
  _swift_bridgeObjectRelease(param_2);
  self.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
  SVar6 = Foundation::URL::get_path(self);
  (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar6.bridgeObject);
  IVar2 = NSFileManager::fileExistsAtPath_((ID)self.unknown);
  if ((int)IVar2 == 0) {
    DVar3.unknown = (undefined *)0x0;
    uVar4 = 0xf000000000000000;
  }
  else {
    uVar4 = 0;
    DVar3 = Foundation::Data::_init
                      ((NSDataReadingOptions)(local_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0))
                      );
  }
  (**(code **)(lVar5 + 8))(local_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar1.unknown);
  auVar7._8_8_ = uVar4;
  auVar7._0_8_ = DVar3.unknown;
  return auVar7;
}



/* Address: 0x10015a550 | FUN_10015a550 */

/* WARNING: Removing unreachable block (ram,0x00010015a6a0) */
/* WARNING: Removing unreachable block (ram,0x00010015a768) */
/* WARNING: Removing unreachable block (ram,0x00010015a7f8) */

void FUN_10015a550(char *param_1,Data param_2,undefined *param_3)

{
  URLResourceValues UVar1;
  Data DVar2;
  URL UVar3;
  long extraout_x8;
  long extraout_x8_00;
  long lVar4;
  URL to;
  String SVar5;
  long local_90;
  undefined *puStack_88;
  
  DVar2.unknown = param_2.unknown;
  UVar3.unknown = param_3;
  UVar1 = Foundation::URLResourceValues::typeMetadataAccessor();
  lVar4 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar4 + 0x40));
  UVar1.unknown = (undefined *)((long)&local_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puStack_88 = (undefined *)Foundation::URL::typeMetadataAccessor();
  local_90 = *(long *)(puStack_88 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_90 + 0x40));
  to.unknown = UVar1.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_100159c0c();
  SVar5.bridgeObject = DVar2.unknown;
  SVar5.str = param_1;
  Foundation::URL::appendingPathComponent(SVar5,UVar3);
  _swift_bridgeObjectRelease(DVar2.unknown);
  FUN_10011da54(param_2.unknown,param_3);
  FUN_10003bf18(param_2.unknown,param_3);
  if ((ulong)param_3 >> 0x3c < 0xf) {
    FUN_10003bf18(0,0xf000000000000000);
    UVar3.unknown = (undefined *)0x0;
    Foundation::Data::_write(to,(NSDataWritingOptions)0x0,param_2);
    Foundation::URLResourceValues::init();
    Foundation::URLResourceValues::_set_isExcludedFromBackup((URLResourceValues *)UVar1.unknown);
    Foundation::URL::_setResourceValues(UVar1,UVar3);
    (**(code **)(lVar4 + 8))(UVar1.unknown);
  }
  else {
    FUN_1001723c8(to.unknown);
  }
  (**(code **)(local_90 + 8))(to.unknown,puStack_88);
  return;
}



/* Address: 0x10015a838 | FUN_10015a838 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10015a838(undefined8 *param_1,undefined *param_2,ulong param_3)

{
  undefined *puVar1;
  Data DVar2;
  NSData *pNVar3;
  ID IVar4;
  char *pcVar5;
  undefined *puVar6;
  char *pcVar7;
  undefined *extraout_x1;
  _StringGuts _Var8;
  char *pcVar9;
  char *pcVar10;
  void *pvVar11;
  undefined *puVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String separator;
  char *local_78;
  char *local_70;
  void *local_68;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  DVar2.unknown = param_2;
  FUN_10015a2c0();
  if (param_3 >> 0x3c < 0xf) {
    pNVar3 = Foundation::Data::_bridgeToObjectiveC(DVar2);
    local_70 = (char *)0x0;
    pvVar11 = (void *)0x0;
    IVar4 = NSJSONSerialization::JSONObjectWithData_options_error_
                      ((ID)&_OBJC_CLASS___NSJSONSerialization,pNVar3,0,&local_70);
    if (IVar4 != 0) {
      Swift::__bridgeAnyObjectToAny();
      FUN_10003bf18(DVar2.unknown,param_3);
      _swift_unknownObjectRelease(IVar4);
      goto LAB_10015a908;
    }
    pcVar5 = local_70;
    _Var8.unknown = extraout_x1;
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    local_70 = (char *)0x0;
    local_68 = (void *)0xe000000000000000;
    Swift::_StringGuts::grow(0x26,_Var8);
    SVar13.bridgeObject = (void *)0x8000000100d93b40;
    SVar13.str = (char *)0xd000000000000019;
    SVar17.bridgeObject = pvVar11;
    SVar17.str = (char *)pNVar3;
    Swift::String::append(SVar13,SVar17);
    puVar1 = 
    PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
    ;
    puVar12 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
    local_78 = (char *)CONCAT71(local_78._1_7_,(char)param_2);
    pcVar9 = "\x01\x02";
    puVar6 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
    Swift::__print_unlocked
              (&local_78,&local_70,&DAT_100eb8ed0,
               PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
               PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
              );
    SVar14.bridgeObject = (void *)0xe900000000000020;
    SVar14.str = (char *)0x3a726f7272652027;
    SVar18.bridgeObject = puVar6;
    SVar18.str = pcVar9;
    Swift::String::append(SVar14,SVar18);
    puVar6 = &DAT_100faf510;
    local_78 = pcVar5;
    FUN_1000f7830(&DAT_100faf510,&DAT_100c2e820);
    Swift::__print_unlocked(&local_78,&local_70,puVar6,puVar12,puVar1);
    pvVar11 = local_68;
    pcVar9 = local_70;
    if (DAT_101057340 == '\x01') {
      pcVar7 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      pcVar10 = (char *)0x7;
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
      local_70 = (char *)0x676f4874736f505b;
      local_68 = (void *)0xea0000000000205d;
      SVar15.bridgeObject = pvVar11;
      SVar15.str = pcVar9;
      SVar19.bridgeObject = puVar12;
      SVar19.str = pcVar10;
      Swift::String::append(SVar15,SVar19);
      *(undefined **)(pcVar7 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      *(char **)(pcVar7 + 0x20) = local_70;
      *(void **)(pcVar7 + 0x28) = local_68;
      SVar16.bridgeObject = (void *)0x20;
      SVar16.str = pcVar7;
      separator.bridgeObject = (void *)0xa;
      separator.str = (char *)0xe100000000000000;
      Swift::_print(SVar16,separator);
      FUN_10003bf18(DVar2.unknown,param_3);
      _swift_bridgeObjectRelease(pvVar11);
      _swift_errorRelease(pcVar5);
      _swift_release(pcVar7);
    }
    else {
      FUN_10003bf18(DVar2.unknown,param_3);
      _swift_bridgeObjectRelease(pvVar11);
      _swift_errorRelease(pcVar5);
    }
  }
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
LAB_10015a908:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x10015ab00 | FUN_10015ab00 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10015ab00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  char **ppcVar4;
  char *pcVar5;
  undefined8 uVar6;
  char *pcVar7;
  Data DVar8;
  char *pcVar9;
  undefined1 *puVar10;
  undefined *extraout_x1;
  char *pcVar11;
  void *pvVar12;
  undefined *puVar13;
  long extraout_x8;
  _StringGuts _Var14;
  long lVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String separator;
  char acStack_110 [8];
  char *local_108;
  undefined1 auStack_100 [80];
  char *local_b0;
  void *local_a8;
  long local_98;
  char *local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *local_78;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uStack_88 = 0;
  local_90 = (char *)0x0;
  local_78 = (undefined *)0x0;
  uStack_80 = 0;
  FUN_10000cbfc(param_2,&local_b0);
  puVar3 = &DAT_100fb09d8;
  FUN_1000f7830(&DAT_100fb09d8,&DAT_100c2ee28);
  puVar13 = PTR___type_metadata_for_Any_100eae0c0;
  ppcVar4 = &local_108;
  _swift_dynamicCast(ppcVar4,&local_b0,PTR___type_metadata_for_Any_100eae0c0 + 8,puVar3,6);
  pcVar7 = local_108;
  if ((int)ppcVar4 == 0) {
    FUN_10000cbfc(param_2,&local_b0);
    puVar3 = &DAT_100fafaa8;
    FUN_1000f7830(&DAT_100fafaa8,&DAT_100c2e6f8);
    ppcVar4 = &local_108;
    _swift_dynamicCast(ppcVar4,&local_b0,puVar13 + 8,puVar3,6);
    pcVar7 = local_108;
    if ((int)ppcVar4 == 0) {
      pcVar5 = &DAT_100fae678;
      FUN_1000f7830(&DAT_100fae678,&DAT_100c2e190);
      puVar10 = auStack_100;
      _swift_initStackObject();
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
      uVar6 = param_1;
      FUN_100159c0c();
      *(undefined8 *)(pcVar5 + 0x20) = uVar6;
      *(undefined1 **)(pcVar5 + 0x28) = puVar10;
      FUN_10000cbfc(param_2,pcVar5 + 0x30);
      pcVar7 = pcVar5;
      FUN_1000f8154();
      _swift_setDeallocating(pcVar5);
      FUN_1000fb4c4(pcVar5 + 0x20,&DAT_100fae490,&DAT_100c2de60);
      puVar3 = &DAT_100fae898;
      FUN_1000f7830(&DAT_100fae898,&DAT_100c2e4e0);
    }
  }
  FUN_1000fb4c4(&local_90,&DAT_100fae668,&DAT_100c2e4a0);
  local_90 = pcVar7;
  local_78 = puVar3;
  FUN_1000f8cac(&local_90,&local_b0,&DAT_100fae668,&DAT_100c2e4a0);
  if (local_98 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10015afa0);
    (*pcVar2)();
  }
  FUN_100004640(&local_b0,local_98);
  lVar15 = *(long *)(local_98 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar15 + 0x40));
  pcVar5 = acStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar15 + 0x10))(pcVar5);
  pcVar7 = pcVar5;
  Swift::__bridgeAnythingToObjectiveC(pcVar5,local_98);
  (**(code **)(lVar15 + 8))(pcVar5,local_98);
  FUN_100004594(&local_b0);
  local_b0 = (char *)0x0;
  pvVar12 = (void *)0x0;
  pcVar5 = pcVar7;
  DVar8.unknown =
       (undefined *)
       NSJSONSerialization::dataWithJSONObject_options_error_
                 (&_OBJC_CLASS___NSJSONSerialization,pcVar7,0,&local_b0);
  _Var14.unknown = extraout_x1;
  _swift_unknownObjectRelease(pcVar7);
  if (DVar8.unknown == (undefined *)0x0) {
    pcVar9 = local_b0;
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    local_b0 = (char *)0x0;
    local_a8 = (void *)0xe000000000000000;
    Swift::_StringGuts::grow(0x26,_Var14);
    SVar16.bridgeObject = (void *)0x8000000100d93b40;
    SVar16.str = (char *)0xd000000000000019;
    SVar20.bridgeObject = pvVar12;
    SVar20.str = pcVar5;
    Swift::String::append(SVar16,SVar20);
    puVar1 = 
    PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
    ;
    puVar13 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
    local_108 = (char *)CONCAT71(local_108._1_7_,(char)param_1);
    pcVar7 = "\x01\x02";
    puVar3 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
    Swift::__print_unlocked
              (&local_108,&local_b0,&DAT_100eb8ed0,
               PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
               PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
              );
    SVar17.bridgeObject = (void *)0xe900000000000020;
    SVar17.str = (char *)0x3a726f7272652027;
    SVar21.bridgeObject = puVar3;
    SVar21.str = pcVar7;
    Swift::String::append(SVar17,SVar21);
    puVar3 = &DAT_100faf510;
    local_108 = pcVar9;
    FUN_1000f7830(&DAT_100faf510,&DAT_100c2e820);
    Swift::__print_unlocked(&local_108,&local_b0,puVar3,puVar13,puVar1);
    pvVar12 = local_a8;
    pcVar7 = local_b0;
    if (DAT_101057340 == '\x01') {
      pcVar5 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      pcVar11 = (char *)0x7;
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
      local_b0 = (char *)0x676f4874736f505b;
      local_a8 = (void *)0xea0000000000205d;
      SVar18.bridgeObject = pvVar12;
      SVar18.str = pcVar7;
      SVar22.bridgeObject = puVar13;
      SVar22.str = pcVar11;
      Swift::String::append(SVar18,SVar22);
      *(undefined **)(pcVar5 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      *(char **)(pcVar5 + 0x20) = local_b0;
      *(void **)(pcVar5 + 0x28) = local_a8;
      SVar19.bridgeObject = (void *)0x20;
      SVar19.str = pcVar5;
      separator.bridgeObject = (void *)0xa;
      separator.str = (char *)0xe100000000000000;
      Swift::_print(SVar19,separator);
      _swift_bridgeObjectRelease(pvVar12);
      _swift_errorRelease(pcVar9);
      _swift_release(pcVar5);
    }
    else {
      _swift_bridgeObjectRelease(local_a8);
      _swift_errorRelease(pcVar9);
    }
    DVar8.unknown = (undefined *)0x0;
    _Var14.unknown = (undefined *)0xf000000000000000;
  }
  else {
    DVar8 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar8);
  }
  FUN_10015a550(param_1,DVar8.unknown,_Var14.unknown);
  FUN_10003bf18(DVar8.unknown,_Var14.unknown);
  FUN_1000fb4c4(&local_90,&DAT_100fae668,&DAT_100c2e4a0);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x10015afa4 | FUN_10015afa4 */

void FUN_10015afa4(ulong param_1,undefined8 param_2,URL param_3)

{
  URL UVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  code *pcVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
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
  String SVar24;
  String SVar25;
  String SVar26;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar3 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  SVar5.bridgeObject = (void *)0x8000000100d93ea0;
  SVar5.str = (char *)0xd000000000000012;
  Foundation::URL::appendingPathComponent(SVar5,param_3);
  FUN_1001723c8(puVar2);
  pcVar4 = *(code **)(lVar3 + 8);
  (*pcVar4)(puVar2,UVar1.unknown);
  if ((param_1 & 1) == 0) {
    SVar6.bridgeObject = (void *)0x8000000100d93e80;
    SVar6.str = (char *)0xd000000000000013;
    Foundation::URL::appendingPathComponent(SVar6,param_3);
    FUN_1001723c8(puVar2);
    (*pcVar4)(puVar2,UVar1.unknown);
  }
  SVar7.bridgeObject = (void *)0x8000000100d93e40;
  SVar7.str = (char *)0xd000000000000013;
  Foundation::URL::appendingPathComponent(SVar7,param_3);
  FUN_1001723c8(puVar2);
  (*pcVar4)(puVar2,UVar1.unknown);
  SVar8.bridgeObject = (void *)0x8000000100d93e20;
  SVar8.str = (char *)0xd000000000000013;
  Foundation::URL::appendingPathComponent(SVar8,param_3);
  FUN_1001723c8(puVar2);
  (*pcVar4)(puVar2,UVar1.unknown);
  SVar9.bridgeObject = (void *)0x8000000100d93de0;
  SVar9.str = (char *)0xd000000000000014;
  Foundation::URL::appendingPathComponent(SVar9,param_3);
  FUN_1001723c8(puVar2);
  (*pcVar4)(puVar2,UVar1.unknown);
  SVar10.bridgeObject = (void *)0xed00007367616c66;
  SVar10.str = &DAT_2e676f6874736f70;
  Foundation::URL::appendingPathComponent(SVar10,param_3);
  FUN_1001723c8(puVar2);
  (*pcVar4)(puVar2,UVar1.unknown);
  SVar11.bridgeObject = (void *)0x8000000100d93da0;
  SVar11.str = (char *)0xd00000000000001b;
  Foundation::URL::appendingPathComponent(SVar11,param_3);
  FUN_1001723c8(puVar2);
  (*pcVar4)(puVar2,UVar1.unknown);
  SVar12.bridgeObject = (void *)0x8000000100d93d70;
  SVar12.str = (char *)0xd000000000000022;
  Foundation::URL::appendingPathComponent(SVar12,param_3);
  FUN_1001723c8(puVar2);
  (*pcVar4)(puVar2,UVar1.unknown);
  SVar13.bridgeObject = (void *)0xee007370756f7267;
  SVar13.str = &DAT_2e676f6874736f70;
  Foundation::URL::appendingPathComponent(SVar13,param_3);
  FUN_1001723c8(puVar2);
  (*pcVar4)(puVar2,UVar1.unknown);
  SVar14.bridgeObject = (void *)0x8000000100d93d50;
  SVar14.str = (char *)0xd00000000000001a;
  Foundation::URL::appendingPathComponent(SVar14,param_3);
  FUN_1001723c8(puVar2);
  (*pcVar4)(puVar2,UVar1.unknown);
  SVar15.bridgeObject = (void *)0xee0074754f74706f;
  SVar15.str = &DAT_2e676f6874736f70;
  Foundation::URL::appendingPathComponent(SVar15,param_3);
  FUN_1001723c8(puVar2);
  (*pcVar4)(puVar2,UVar1.unknown);
  SVar16.bridgeObject = (void *)0x8000000100d93d10;
  SVar16.str = (char *)0xd000000000000014;
  Foundation::URL::appendingPathComponent(SVar16,param_3);
  FUN_1001723c8(puVar2);
  (*pcVar4)(puVar2,UVar1.unknown);
  SVar17.bridgeObject = (void *)0x8000000100d93cf0;
  SVar17.str = (char *)0xd00000000000001f;
  Foundation::URL::appendingPathComponent(SVar17,param_3);
  FUN_1001723c8(puVar2);
  (*pcVar4)(puVar2,UVar1.unknown);
  SVar18.bridgeObject = (void *)0x8000000100d93cb0;
  SVar18.str = (char *)0xd000000000000012;
  Foundation::URL::appendingPathComponent(SVar18,param_3);
  FUN_1001723c8(puVar2);
  (*pcVar4)(puVar2,UVar1.unknown);
  SVar19.bridgeObject = (void *)0x8000000100d93c90;
  SVar19.str = (char *)0xd00000000000001a;
  Foundation::URL::appendingPathComponent(SVar19,param_3);
  FUN_1001723c8(puVar2);
  (*pcVar4)(puVar2,UVar1.unknown);
  SVar20.bridgeObject = (void *)0x8000000100d92770;
  SVar20.str = (char *)0xd000000000000011;
  Foundation::URL::appendingPathComponent(SVar20,param_3);
  FUN_1001723c8(puVar2);
  (*pcVar4)(puVar2,UVar1.unknown);
  SVar21.bridgeObject = (void *)0x8000000100d927b0;
  SVar21.str = (char *)0xd00000000000001f;
  Foundation::URL::appendingPathComponent(SVar21,param_3);
  FUN_1001723c8(puVar2);
  (*pcVar4)(puVar2,UVar1.unknown);
  SVar22.bridgeObject = (void *)0x8000000100d93c60;
  SVar22.str = (char *)0xd000000000000020;
  Foundation::URL::appendingPathComponent(SVar22,param_3);
  FUN_1001723c8(puVar2);
  (*pcVar4)(puVar2,UVar1.unknown);
  SVar23.bridgeObject = (void *)0x8000000100d93c40;
  SVar23.str = (char *)0xd00000000000001f;
  Foundation::URL::appendingPathComponent(SVar23,param_3);
  FUN_1001723c8(puVar2);
  (*pcVar4)(puVar2,UVar1.unknown);
  SVar24.bridgeObject = (void *)0x8000000100d93d30;
  SVar24.str = (char *)0xd000000000000015;
  Foundation::URL::appendingPathComponent(SVar24,param_3);
  FUN_1001723c8(puVar2);
  (*pcVar4)(puVar2,UVar1.unknown);
  SVar25.bridgeObject = (void *)0x8000000100d93c20;
  SVar25.str = (char *)0xd000000000000015;
  Foundation::URL::appendingPathComponent(SVar25,param_3);
  FUN_1001723c8(puVar2);
  (*pcVar4)(puVar2,UVar1.unknown);
  SVar26.bridgeObject = (void *)0x8000000100d93c00;
  SVar26.str = (char *)0xd00000000000001a;
  Foundation::URL::appendingPathComponent(SVar26,param_3);
  FUN_1001723c8(puVar2);
  (*pcVar4)(puVar2,UVar1.unknown);
  return;
}



/* Address: 0x10015b4d0 | FUN_10015b4d0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_10015b4d0(long param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 **ppuVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 *local_98;
  undefined1 *local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long local_78;
  undefined1 auStack_70 [24];
  long local_58;
  undefined1 *apuStack_50 [4];
  
  FUN_10015a838(apuStack_50);
  FUN_1000f8cac(apuStack_50,auStack_70,&DAT_100fae668,&DAT_100c2e4a0);
  puVar1 = PTR___type_metadata_for_Any_100eae0c0;
  if (local_58 != 0) {
    ppuVar3 = &local_90;
    _swift_dynamicCast(ppuVar3,auStack_70,PTR___type_metadata_for_Any_100eae0c0 + 8,
                       PTR___type_metadata_for_Swift_Int_100eac6f8,6);
    puVar4 = local_90;
    if ((int)ppuVar3 == 0) goto LAB_10015b55c;
LAB_10015b7a4:
    FUN_1000fb4c4(apuStack_50,&DAT_100fae668,&DAT_100c2e4a0);
    uVar7 = 0;
    goto LAB_10015b7c0;
  }
  FUN_1000fb4c4(auStack_70,&DAT_100fae668,&DAT_100c2e4a0);
LAB_10015b55c:
  FUN_1000f8cac(apuStack_50,auStack_70,&DAT_100fae668,&DAT_100c2e4a0);
  if (local_58 == 0) {
    FUN_1000fb4c4(auStack_70,&DAT_100fae668,&DAT_100c2e4a0);
  }
  else {
    uVar7 = 0;
    FUN_100108da8(0);
    ppuVar3 = &local_90;
    _swift_dynamicCast(ppuVar3,auStack_70,puVar1 + 8,uVar7,6);
    if (((ulong)ppuVar3 & 1) != 0) {
      puVar4 = (undefined1 *)objc_stub::integerValue((ID)local_90);
      goto LAB_10015b7a4;
    }
  }
  FUN_1000f8cac(apuStack_50,auStack_70,&DAT_100fae668,&DAT_100c2e4a0);
  if (local_58 == 0) {
    FUN_1000fb4c4(auStack_70,&DAT_100fae668,&DAT_100c2e4a0);
LAB_10015b698:
    ppuVar3 = apuStack_50;
  }
  else {
    puVar5 = &DAT_100fae898;
    FUN_1000f7830(&DAT_100fae898,&DAT_100c2e4e0);
    ppuVar3 = &local_90;
    puVar4 = auStack_70;
    _swift_dynamicCast(ppuVar3,puVar4,puVar1 + 8,puVar5,6);
    puVar2 = local_90;
    if (((ulong)ppuVar3 & 1) == 0) goto LAB_10015b698;
    FUN_100159c0c(param_1);
    if (*(long *)(puVar2 + 0x10) == 0) {
LAB_10015b6c4:
      uStack_88 = 0;
      local_90 = (undefined1 *)0x0;
      local_78 = 0;
      uStack_80 = 0;
    }
    else {
      _swift_bridgeObjectRetain(puVar2);
      puVar6 = puVar4;
      FUN_100071370(param_1);
      if (((ulong)puVar6 & 1) == 0) {
        _swift_bridgeObjectRelease(puVar2);
        goto LAB_10015b6c4;
      }
      FUN_10000cbfc(*(long *)(puVar2 + 0x38) + param_1 * 0x20,&local_90);
      _swift_bridgeObjectRelease(puVar4);
      puVar4 = puVar2;
    }
    _swift_bridgeObjectRelease(puVar4);
    _swift_bridgeObjectRelease(puVar2);
    if (local_78 != 0) {
      FUN_100011080(&local_90,auStack_70);
      FUN_10000cbfc(auStack_70,&local_90);
      ppuVar3 = &local_98;
      _swift_dynamicCast(ppuVar3,&local_90,puVar1 + 8,PTR___type_metadata_for_Swift_Int_100eac6f8,6)
      ;
      if ((int)ppuVar3 == 0) {
        FUN_10000cbfc(auStack_70,&local_90);
        uVar7 = 0;
        FUN_100108da8(0);
        ppuVar3 = &local_98;
        _swift_dynamicCast(ppuVar3,&local_90,puVar1 + 8,uVar7,6);
        if ((int)ppuVar3 == 0) {
          FUN_100004594(auStack_70);
          goto LAB_10015b698;
        }
        local_98 = (undefined1 *)objc_stub::integerValue((ID)local_98);
      }
      FUN_100004594(auStack_70);
      puVar4 = local_98;
      goto LAB_10015b7a4;
    }
    FUN_1000fb4c4(apuStack_50,&DAT_100fae668,&DAT_100c2e4a0);
    ppuVar3 = &local_90;
  }
  FUN_1000fb4c4(ppuVar3,&DAT_100fae668,&DAT_100c2e4a0);
  puVar4 = (undefined1 *)0x0;
  uVar7 = 1;
LAB_10015b7c0:
  auVar8._8_8_ = uVar7;
  auVar8._0_8_ = puVar4;
  return auVar8;
}



/* Address: 0x10015b7e4 | FUN_10015b7e4 */

void FUN_10015b7e4(void)

{
  long lVar1;
  URL UVar2;
  long unaff_x20;
  
  lVar1 = _TtC7PostHog14PostHogStorage::appFolderUrl;
  UVar2 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar2.unknown + -8) + 8))(unaff_x20 + lVar1,UVar2.unknown);
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10015b830 | FUN_10015b830 */

void FUN_10015b830(void)

{
  FUN_10015b838(0);
  return;
}



/* Address: 0x10015b838 | FUN_10015b838 */

void FUN_10015b838(undefined8 param_1)

{
  if (DAT_100fb0ee8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100ca51a0);
  return;
}



/* Address: 0x10015b870 | FUN_10015b870 */

undefined1  [16] FUN_10015b870(URL param_1,ulong param_2)

{
  URL UVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  long local_28;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  if (param_2 < 0x40) {
    local_28 = *(long *)(UVar1.unknown + -8) + 0x40;
    uVar2 = 0x100;
    _swift_updateClassMetadata2(param_1.unknown,0x100,1,&local_28,param_1.unknown + 0x50);
    if (param_1.unknown == (undefined *)0x0) {
      param_1.unknown = (undefined *)0x0;
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0x3f;
    param_1 = UVar1;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = param_1.unknown;
  return auVar3;
}



/* Address: 0x10015b8dc | FUN_10015b8dc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10015b8dc(undefined8 param_1,undefined8 param_2)

{
  void *pvVar1;
  undefined *puVar2;
  URL UVar3;
  URL UVar4;
  ID IVar5;
  char *pcVar6;
  NSString *pNVar7;
  ID IVar8;
  NSURL *pNVar9;
  URL UVar10;
  char *pcVar11;
  undefined *extraout_x1;
  undefined *puVar12;
  undefined *extraout_x1_00;
  _StringGuts _Var13;
  undefined *extraout_x1_01;
  char *pcVar14;
  char *pcVar15;
  undefined *puVar16;
  char **ppcVar17;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar18;
  code *pcVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
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
  String SVar36;
  String SVar37;
  String SVar38;
  String SVar39;
  String SVar40;
  String SVar41;
  String SVar42;
  String SVar43;
  String SVar44;
  String separator;
  String SVar45;
  String SVar46;
  String SVar47;
  String SVar48;
  String SVar49;
  String SVar50;
  String separator_00;
  char *local_d0;
  char *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  char *local_a8;
  undefined *local_a0;
  long local_98;
  long local_90;
  char *local_88;
  char *local_80;
  void *local_78;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  puVar2 = &DAT_100fae670;
  FUN_1000f7830(&DAT_100fae670,&DAT_100c2e0e8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar2 + -8) + 0x40));
  lVar18 = (long)&local_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar20 = lVar18 - extraout_x12;
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar24 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar24 + 0x40));
  lVar21 = lVar20 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar22 = lVar21 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar23 = lVar22 - extraout_x12_01;
  FUN_100157f44(lVar20,param_1);
  FUN_100123b94(lVar20,lVar18);
  pcVar19 = *(code **)(lVar24 + 0x30);
  lVar20 = lVar18;
  (*pcVar19)(lVar18,1,UVar3.unknown);
  local_a0 = UVar3.unknown;
  if ((int)lVar20 == 1) {
    FUN_100157dac(lVar23);
    lVar20 = lVar18;
    (*pcVar19)(lVar18,1,UVar3.unknown);
    if ((int)lVar20 != 1) {
      FUN_1000fb4c4(lVar18,&DAT_100fae670,&DAT_100c2e0e8);
    }
  }
  else {
    (**(code **)(lVar24 + 0x20))(lVar23,lVar18,UVar3.unknown);
  }
  local_80 = (char *)((ulong)local_80 & 0xffffffffffffff00);
  UVar4.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
  SVar25 = Foundation::URL::get_path(UVar4);
  UVar3.unknown = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar25.bridgeObject);
  IVar5 = NSFileManager::fileExistsAtPath_isDirectory_((ID)UVar4.unknown,UVar3.unknown,&local_80);
  puVar2 = local_a0;
  if (((IVar5 & 1) != 0) && (((ulong)local_80 & 1) != 0)) {
    local_90 = lVar23;
    IVar5 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
    lVar20 = 0;
    local_c8 = "Could not delete file ";
    local_a8 = "posthog.distinctId";
    uStack_b8 = 2;
    local_c0 = 1;
    puVar12 = extraout_x1;
    local_b0 = param_2;
    local_98 = lVar24;
    do {
      pcVar6 = (char *)(ulong)(byte)(&DAT_100fb1018)[lVar20];
      FUN_100159c0c();
      SVar25.bridgeObject = puVar12;
      SVar25.str = pcVar6;
      Foundation::URL::appendingPathComponent(SVar25,UVar3);
      _swift_bridgeObjectRelease(puVar12);
      SVar26.bridgeObject = puVar12;
      SVar26.str = pcVar6;
      Foundation::URL::appendingPathComponent(SVar26,UVar3);
      UVar3.unknown = puVar12;
      _swift_bridgeObjectRelease();
      SVar25 = Foundation::URL::get_path(UVar3);
      pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(SVar25.bridgeObject);
      IVar8 = NSFileManager::fileExistsAtPath_(IVar5,pNVar7);
      UVar3.unknown = (undefined *)0x0;
      if ((int)IVar8 != 0) {
        SVar25 = Foundation::URL::get_path((URL)0x0);
        pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        _swift_bridgeObjectRelease(SVar25.bridgeObject);
        IVar8 = NSFileManager::fileExistsAtPath_(IVar5,pNVar7);
        UVar3.unknown = (undefined *)0x0;
        if ((IVar8 & 1) == 0) {
          UVar4.unknown = Foundation::URL::_bridgeToObjectiveC((URL)0x0);
          pNVar9 = Foundation::URL::_bridgeToObjectiveC(UVar4);
          local_80 = (char *)0x0;
          IVar8 = NSFileManager::copyItemAtURL_toURL_error_(IVar5,UVar4.unknown,pNVar9,&local_80);
          UVar3.unknown = local_80;
          puVar2 = local_a0;
          if ((int)IVar8 == 0) {
            _Var13.unknown = extraout_x1_00;
            Foundation::__convertNSErrorToError();
            _swift_willThrow(0);
            local_80 = (char *)0x0;
            local_78 = (void *)0xe000000000000000;
            Swift::_StringGuts::grow(0x39,_Var13);
            SVar27.bridgeObject = (void *)((ulong)local_c8 | 0x8000000000000000);
            SVar27.str = (char *)0xd000000000000028;
            SVar39.bridgeObject = pNVar9;
            SVar39.str = UVar4.unknown;
            Swift::String::append(SVar27,SVar39);
            SVar28.bridgeObject = puVar12;
            SVar28.str = pcVar6;
            SVar40.bridgeObject = pNVar9;
            SVar40.str = UVar4.unknown;
            Swift::String::append(SVar28,SVar40);
            _swift_bridgeObjectRelease(puVar12);
            UVar10.unknown = (undefined *)0x6874617020746120;
            SVar29.bridgeObject = (void *)0xe900000000000020;
            SVar29.str = (char *)0x6874617020746120;
            SVar41.bridgeObject = pNVar9;
            SVar41.str = UVar4.unknown;
            Swift::String::append(SVar29,SVar41);
            SVar25 = Foundation::URL::get_path(UVar10);
            SVar42.bridgeObject = pNVar9;
            SVar42.str = UVar4.unknown;
            Swift::String::append(SVar25,SVar42);
            _swift_bridgeObjectRelease(SVar25.bridgeObject);
            SVar30.bridgeObject = &SUB_e200000000000000;
            SVar30.str = (char *)0x203a;
            SVar43.bridgeObject = pNVar9;
            SVar43.str = UVar4.unknown;
            Swift::String::append(SVar30,SVar43);
            puVar2 = &DAT_100faf510;
            local_88 = UVar3.unknown;
            FUN_1000f7830(&DAT_100faf510,&DAT_100c2e820);
            puVar16 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
            Swift::__print_unlocked
                      (&local_88,&local_80,puVar2,
                       PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
                       PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
                      );
            pvVar1 = local_78;
            if ((DAT_101057340 & 1) == 0) {
              _swift_bridgeObjectRelease(local_78);
              _swift_errorRelease();
              puVar2 = local_a0;
            }
            else {
              local_d0 = local_80;
              pcVar11 = &DAT_100fae660;
              FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
              pcVar14 = (char *)0x7;
              _swift_allocObject();
              *(undefined8 *)(pcVar11 + 0x18) = uStack_b8;
              *(undefined8 *)(pcVar11 + 0x10) = local_c0;
              local_80 = (char *)0x676f4874736f505b;
              local_78 = (void *)0xea0000000000205d;
              SVar31.bridgeObject = pvVar1;
              SVar31.str = local_d0;
              SVar44.bridgeObject = puVar16;
              SVar44.str = pcVar14;
              Swift::String::append(SVar31,SVar44);
              *(undefined **)(pcVar11 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
              *(char **)(pcVar11 + 0x20) = local_80;
              *(void **)(pcVar11 + 0x28) = local_78;
              SVar32.bridgeObject = (void *)0x20;
              SVar32.str = pcVar11;
              separator.bridgeObject = (void *)0xa;
              separator.str = (char *)0xe100000000000000;
              Swift::_print(SVar32,separator);
              _swift_bridgeObjectRelease(pvVar1);
              _swift_errorRelease(UVar3.unknown);
              _swift_release();
              UVar3.unknown = pcVar11;
              puVar2 = local_a0;
            }
          }
        }
      }
      SVar25 = Foundation::URL::get_path(UVar3);
      UVar3.unknown = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(SVar25.bridgeObject);
      IVar8 = NSFileManager::fileExistsAtPath_(IVar5);
      if ((int)IVar8 != 0) {
        UVar3.unknown = Foundation::URL::_bridgeToObjectiveC((URL)0x0);
        local_80 = (char *)0x0;
        ppcVar17 = &local_80;
        IVar8 = NSFileManager::removeItemAtURL_error_(IVar5);
        if ((int)IVar8 == 0) {
          pcVar11 = local_80;
          _Var13.unknown = extraout_x1_01;
          Foundation::__convertNSErrorToError();
          _swift_willThrow(0);
          local_80 = (char *)0x0;
          local_78 = (void *)0xe000000000000000;
          Swift::_StringGuts::grow(0x27,_Var13);
          SVar33.bridgeObject = (void *)((ulong)local_a8 | 0x8000000000000000);
          SVar33.str = (char *)0xd000000000000016;
          SVar45.bridgeObject = ppcVar17;
          SVar45.str = UVar3.unknown;
          Swift::String::append(SVar33,SVar45);
          SVar34.bridgeObject = puVar12;
          SVar34.str = pcVar6;
          SVar46.bridgeObject = ppcVar17;
          SVar46.str = UVar3.unknown;
          Swift::String::append(SVar34,SVar46);
          _swift_bridgeObjectRelease(puVar12);
          UVar4.unknown = (undefined *)0x6874617020746120;
          SVar35.bridgeObject = (void *)0xe900000000000020;
          SVar35.str = (char *)0x6874617020746120;
          SVar47.bridgeObject = ppcVar17;
          SVar47.str = UVar3.unknown;
          Swift::String::append(SVar35,SVar47);
          SVar25 = Foundation::URL::get_path(UVar4);
          SVar48.bridgeObject = ppcVar17;
          SVar48.str = UVar3.unknown;
          Swift::String::append(SVar25,SVar48);
          _swift_bridgeObjectRelease(SVar25.bridgeObject);
          SVar36.bridgeObject = &SUB_e200000000000000;
          SVar36.str = (char *)0x203a;
          SVar49.bridgeObject = ppcVar17;
          SVar49.str = UVar3.unknown;
          Swift::String::append(SVar36,SVar49);
          UVar3.unknown = &DAT_100faf510;
          local_88 = pcVar11;
          FUN_1000f7830(&DAT_100faf510,&DAT_100c2e820);
          puVar2 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
          Swift::__print_unlocked
                    (&local_88,&local_80,UVar3.unknown,
                     PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
                     PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
                    );
          pvVar1 = local_78;
          pcVar6 = local_80;
          if (DAT_101057340 == 1) {
            pcVar14 = &DAT_100fae660;
            FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
            pcVar15 = (char *)0x7;
            _swift_allocObject();
            *(undefined8 *)(pcVar14 + 0x18) = uStack_b8;
            *(undefined8 *)(pcVar14 + 0x10) = local_c0;
            local_80 = (char *)0x676f4874736f505b;
            local_78 = (void *)0xea0000000000205d;
            SVar37.bridgeObject = pvVar1;
            SVar37.str = pcVar6;
            SVar50.bridgeObject = puVar2;
            SVar50.str = pcVar15;
            Swift::String::append(SVar37,SVar50);
            *(undefined **)(pcVar14 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
            *(char **)(pcVar14 + 0x20) = local_80;
            *(void **)(pcVar14 + 0x28) = local_78;
            SVar38.bridgeObject = (void *)0x20;
            SVar38.str = pcVar14;
            separator_00.bridgeObject = (void *)0xa;
            separator_00.str = (char *)0xe100000000000000;
            UVar3.unknown = (NSString *)0xe100000000000000;
            Swift::_print(SVar38,separator_00);
            _swift_release(pcVar14);
          }
          _swift_errorRelease(pcVar11);
          _swift_bridgeObjectRelease(pvVar1);
          puVar2 = local_a0;
        }
      }
      lVar24 = local_98;
      lVar20 = lVar20 + 1;
      pcVar19 = *(code **)(local_98 + 8);
      (*pcVar19)(lVar21,puVar2);
      puVar12 = puVar2;
      (*pcVar19)(lVar22);
      lVar23 = local_90;
    } while (lVar20 != 0x1f);
  }
  (**(code **)(lVar24 + 8))(lVar23,puVar2);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x10015c0a8 | FUN_10015c0a8 */

int FUN_10015c0a8(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xe1 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0x1e) {
      iVar2 = 4;
    }
    if (param_2 + 0x1e >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10015c124;
        goto LAB_10015c108;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10015c108:
      return ((uint)*param_1 | uVar1 << 8) - 0x1e;
    }
  }
LAB_10015c124:
  iVar2 = *param_1 - 0x1f;
  if (*param_1 < 0x1f) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Address: 0x10015c138 | FUN_10015c138 */

void FUN_10015c138(char *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 2;
  if (0xfffeff < param_3 + 0x1e) {
    uVar3 = 4;
  }
  if (param_3 + 0x1e >> 8 < 0xff) {
    uVar3 = 1;
  }
  uVar2 = 0;
  if (0xe1 < param_3) {
    uVar2 = uVar3;
  }
  if (param_2 < 0xe2) {
    if (uVar2 < 2) {
      if (uVar2 != 0) {
        param_1[1] = '\0';
        if (param_2 == 0) {
          return;
        }
        goto LAB_10015c1b8;
      }
    }
    else if (uVar2 == 2) {
      param_1[1] = '\0';
      param_1[2] = '\0';
    }
    else {
      param_1[1] = '\0';
      param_1[2] = '\0';
      param_1[3] = '\0';
      param_1[4] = '\0';
    }
    if (param_2 != 0) {
LAB_10015c1b8:
      *param_1 = (char)param_2 + '\x1e';
      return;
    }
  }
  else {
    iVar1 = (param_2 - 0xe2 >> 8) + 1;
    *param_1 = (char)(param_2 - 0xe2);
    if (1 < uVar2) {
      if (uVar2 != 2) {
        *(int *)(param_1 + 1) = iVar1;
        return;
      }
      *(short *)(param_1 + 1) = (short)iVar1;
      return;
    }
    if (uVar2 != 0) {
      param_1[1] = (char)iVar1;
      return;
    }
  }
  return;
}



/* Address: 0x10015c1e8 | FUN_10015c1e8 */

undefined1  [16] FUN_10015c1e8(void)

{
  return ZEXT816(0x100eb8ed0);
}



/* Address: 0x10015c1f8 | thunk_FUN_10015c1fc */

void thunk_FUN_10015c1fc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fb1068 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb1070;
  FUN_1000f8b08(&DAT_100fb1070,&BYTE_100c2f100);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,puVar1);
  DAT_100fb1068 = puVar2;
  return;
}



/* Address: 0x10015c1fc | FUN_10015c1fc */

void FUN_10015c1fc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fb1068 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb1070;
  FUN_1000f8b08(&DAT_100fb1070,&BYTE_100c2f100);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,puVar1);
  DAT_100fb1068 = puVar2;
  return;
}



/* Address: 0x10015c24c | thunk_FUN_10015c250 */

void thunk_FUN_10015c250(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb1078 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2f1b8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2f1b8,&DAT_100eb8ed0);
  DAT_100fb1078 = pTVar1;
  return;
}



/* Address: 0x10015c250 | FUN_10015c250 */

void FUN_10015c250(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb1078 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2f1b8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2f1b8,&DAT_100eb8ed0);
  DAT_100fb1078 = pTVar1;
  return;
}



/* Address: 0x10015c290 | FUN_10015c290 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010015c2d4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_10015c290(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_1000f7830(&DAT_100fafc18,&DAT_100c2e750);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCaseWithCache(param_1,param_1,param_2,&DAT_100fb1390);
  _swift_bridgeObjectRelease(param_2);
  if (0x1e < uVar1) {
    uVar1 = 0x1f;
  }
  return uVar1;
}



/* Address: 0x10015c2fc | FUN_10015c2fc */

undefined1  [16] FUN_10015c2fc(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 *local_80;
  long local_78;
  undefined1 auStack_70 [24];
  long local_58;
  undefined1 auStack_50 [32];
  
  iVar2 = (int)&local_80;
  uVar4 = 0;
  FUN_10015a838(auStack_50);
  FUN_100108d58(auStack_50,auStack_70);
  puVar3 = &DAT_100fae668;
  FUN_1000f7830(&DAT_100fae668,&DAT_100c2e4a0);
  _swift_dynamicCast(&local_80,auStack_70,puVar3,PTR___type_metadata_for_Swift_String_100eac208,6);
  if (iVar2 == 0 || local_78 == 0) {
    FUN_100108d58(auStack_50,auStack_70);
    if (local_58 == 0) {
      FUN_1000faea8(auStack_70);
    }
    else {
      puVar3 = &DAT_100fafa98;
      FUN_1000f7830(&DAT_100fafa98,&DAT_100c2e850);
      puVar5 = auStack_70;
      _swift_dynamicCast(&local_80,puVar5,PTR___type_metadata_for_Any_100eae0c0 + 8,puVar3,6);
      if ((uVar4 & 1) != 0) {
        FUN_100159c0c();
        if (*(long *)(local_80 + 0x10) == 0) {
          puVar6 = (undefined1 *)0x0;
          lVar7 = 0;
        }
        else {
          _swift_bridgeObjectRetain(local_80);
          puVar6 = puVar5;
          FUN_100071370();
          if (((ulong)puVar6 & 1) == 0) {
            puVar6 = (undefined1 *)0x0;
            lVar7 = 0;
          }
          else {
            puVar1 = (undefined8 *)(*(long *)(local_80 + 0x38) + param_1 * 0x10);
            puVar6 = (undefined1 *)*puVar1;
            lVar7 = puVar1[1];
            _swift_bridgeObjectRetain();
          }
          _swift_bridgeObjectRelease(puVar5);
          puVar5 = local_80;
        }
        _swift_bridgeObjectRelease(puVar5);
        _swift_bridgeObjectRelease(local_80);
        FUN_1000faea8(auStack_50);
        local_80 = puVar6;
        local_78 = lVar7;
        goto LAB_10015c468;
      }
    }
    FUN_1000faea8(auStack_50);
    local_80 = (undefined1 *)0x0;
    local_78 = 0;
  }
  else {
    FUN_1000faea8(auStack_50);
  }
LAB_10015c468:
  auVar8._8_8_ = local_78;
  auVar8._0_8_ = local_80;
  return auVar8;
}



/* Address: 0x10015c47c | FUN_10015c47c */

undefined1 FUN_10015c47c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  undefined1 local_78;
  undefined7 uStack_77;
  undefined1 auStack_70 [24];
  long local_58;
  undefined1 auStack_50 [32];
  
  FUN_10015a838(auStack_50);
  FUN_100108d58(auStack_50,auStack_70);
  puVar2 = &DAT_100fae668;
  FUN_1000f7830(&DAT_100fae668,&DAT_100c2e4a0);
  puVar3 = &local_78;
  _swift_dynamicCast(puVar3,auStack_70,puVar2,PTR___type_metadata_for_Swift_Bool_100eac570,6);
  if ((int)puVar3 == 0) {
    FUN_100108d58(auStack_50,auStack_70);
    if (local_58 == 0) {
      FUN_1000faea8(auStack_50);
      puVar3 = auStack_70;
    }
    else {
      puVar2 = &DAT_100fb1590;
      FUN_1000f7830(&DAT_100fb1590,&DAT_100c2f270);
      puVar3 = &local_78;
      puVar4 = auStack_70;
      _swift_dynamicCast(puVar3,puVar4,PTR___type_metadata_for_Any_100eae0c0 + 8,puVar2,6);
      if (((ulong)puVar3 & 1) != 0) {
        lVar1 = CONCAT71(uStack_77,local_78);
        FUN_100159c0c();
        if (*(long *)(lVar1 + 0x10) == 0) {
          _swift_bridgeObjectRelease(lVar1);
          _swift_bridgeObjectRelease(puVar4);
          uVar5 = 2;
        }
        else {
          _swift_bridgeObjectRetain(lVar1);
          puVar3 = puVar4;
          FUN_100071370();
          if (((ulong)puVar3 & 1) == 0) {
            _swift_bridgeObjectRelease(puVar4);
            uVar5 = 2;
          }
          else {
            uVar5 = *(undefined1 *)(*(long *)(lVar1 + 0x38) + param_1);
            _swift_bridgeObjectRelease(puVar4);
          }
          _swift_bridgeObjectRelease_n(lVar1,2);
        }
        FUN_1000faea8(auStack_50);
        return uVar5;
      }
      puVar3 = auStack_50;
    }
    FUN_1000faea8(puVar3);
    local_78 = 2;
  }
  else {
    FUN_1000faea8(auStack_50);
  }
  return local_78;
}



/* Address: 0x10015c5f0 | FUN_10015c5f0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10015c5f0(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  CharacterSet CVar3;
  CharacterSet CVar4;
  char *pcVar5;
  ulong uVar6;
  long extraout_x8;
  long unaff_x20;
  undefined *puVar8;
  ID self;
  undefined8 uVar9;
  CharacterSet in;
  long lVar10;
  String SVar11;
  String separator;
  undefined8 local_b0;
  undefined *puStack_a8;
  undefined *local_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  void *pvVar7;
  
  CVar3 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar10 = *(long *)(CVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar10 + 0x40));
  in.unknown = (undefined *)((long)&local_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  if (param_1 != 0) {
    puVar1 = (undefined8 *)(param_1 + PostHogBootstrapConfig::distinctId);
    _swift_beginAccess(puVar1,auStack_78,0,0);
    puVar8 = (undefined *)puVar1[1];
    if (puVar8 != (undefined *)0x0) {
      uVar9 = *puVar1;
      CVar4.unknown = puVar8;
      local_b0 = uVar9;
      puStack_a8 = puVar8;
      _swift_bridgeObjectRetain();
      Foundation::CharacterSet::get_whitespacesAndNewlines(CVar4);
      FUN_1001013b8();
      SVar11 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
      pvVar7 = SVar11.bridgeObject;
      (**(code **)(lVar10 + 8))(in.unknown);
      _swift_bridgeObjectRelease(pvVar7);
      uVar6 = (ulong)SVar11.str & 0xffffffffffff;
      if (((ulong)pvVar7 & 0x2000000000000000) != 0) {
        uVar6 = (ulong)pvVar7 >> 0x38 & 0xf;
      }
      if (uVar6 != 0) {
        if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10015c8e8);
          (*pcVar2)();
        }
        FUN_10015c2fc(1);
        if (CVar3.unknown != (undefined *)0x0) {
          _swift_bridgeObjectRelease(puVar8);
          _swift_bridgeObjectRelease(CVar3.unknown);
          return;
        }
        uVar6 = 0;
        FUN_10015c47c();
        lVar10 = PostHogBootstrapConfig::isIdentifiedId;
        if ((uVar6 & 1) != 0) {
          _swift_bridgeObjectRelease(puVar8);
          return;
        }
        _swift_beginAccess(param_1 + PostHogBootstrapConfig::isIdentifiedId,auStack_90,0,0);
        if (*(char *)(param_1 + lVar10) == '\x01') {
          FUN_10015ce90();
          _swift_bridgeObjectRelease(puVar8);
          self = *(ID *)(unaff_x20 + 0x30);
          objc_stub::lock(self);
          *(undefined1 *)(unaff_x20 + 0x88) = 1;
          local_98 = PTR___type_metadata_for_Swift_Bool_100eac570;
          local_b0 = CONCAT71(local_b0._1_7_,1);
          FUN_10015ab00(0x10,&local_b0);
          FUN_100004594(&local_b0);
          objc_stub::unlock(self);
          return;
        }
        FUN_10015cb10(uVar9,puVar8);
        _swift_bridgeObjectRelease(puVar8);
        return;
      }
      _swift_bridgeObjectRelease(puVar8);
    }
    lVar10 = PostHogBootstrapConfig::isIdentifiedId;
    _swift_beginAccess(param_1 + PostHogBootstrapConfig::isIdentifiedId,&local_b0,0,0);
    if ((*(char *)(param_1 + lVar10) == '\x01') && (DAT_101057340 == '\x01')) {
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
      pcVar5[0x20] = '}';
      pcVar5[0x21] = '\0';
      pcVar5[0x22] = '\0';
      pcVar5[0x23] = '\0';
      pcVar5[0x24] = '\0';
      pcVar5[0x25] = '\0';
      pcVar5[0x26] = '\0';
      pcVar5[0x27] = -0x30;
      pcVar5[0x28] = -0x60;
      pcVar5[0x29] = '@';
      pcVar5[0x2a] = -0x27;
      pcVar5[0x2b] = '\0';
      pcVar5[0x2c] = '\x01';
      pcVar5[0x2d] = '\0';
      pcVar5[0x2e] = '\0';
      pcVar5[0x2f] = -0x80;
      SVar11.bridgeObject = (void *)0x20;
      SVar11.str = pcVar5;
      separator.bridgeObject = (void *)0xa;
      separator.str = (char *)0xe100000000000000;
      Swift::_print(SVar11,separator);
      _swift_release(pcVar5);
    }
  }
  return;
}



/* Address: 0x10015c8e8 | FUN_10015c8e8 */

undefined1  [16] FUN_10015c8e8(void)

{
  long lVar1;
  ID self;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  self = *(ID *)(unaff_x20 + 0x18);
  objc_stub::lock(self);
  FUN_10015c958();
  objc_stub::unlock(self);
  lVar1 = *(long *)(unaff_x20 + 0x70);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar1 = -0x2000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x68);
  }
  _swift_bridgeObjectRetain();
  auVar3._8_8_ = lVar1;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Address: 0x10015c958 | FUN_10015c958 */

void FUN_10015c958(long param_1,long param_2)

{
  UUID UVar1;
  undefined8 uVar2;
  UUID UVar3;
  void *pvVar4;
  long extraout_x8;
  undefined8 uVar5;
  long extraout_x12;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  String SVar10;
  String SVar11;
  String local_80;
  undefined *local_68;
  
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  lVar8 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)&local_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar6 = (undefined *)(lVar7 - extraout_x12);
  if (*(long *)(param_1 + 0x70) == 0) {
    if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x10015cb10);
      (*pcVar9)();
    }
    uVar2 = 1;
    FUN_10015c2fc();
    if (param_2 == 0) {
      if (DAT_100fb3060 != -1) {
        _swift_once(&DAT_100fb3060,FUN_100173f28);
      }
      FUN_100173f94(puVar6);
      UVar3.unknown = puVar6;
      (**(code **)(param_1 + 0x40))(lVar7);
      SVar10 = Foundation::UUID::get_uuidString(UVar3);
      SVar11 = Swift::String::lowercased(SVar10);
      pvVar4 = SVar11.bridgeObject;
      _swift_bridgeObjectRelease(SVar10.bridgeObject);
      pcVar9 = *(code **)(lVar8 + 8);
      (*pcVar9)(lVar7,UVar1.unknown);
      uVar2 = *(undefined8 *)(param_1 + 0x70);
      *(String *)(param_1 + 0x68) = SVar11;
      _swift_bridgeObjectRetain_n(pvVar4,2);
      _swift_bridgeObjectRelease(uVar2);
      local_68 = PTR___type_metadata_for_Swift_String_100eac208;
      local_80 = SVar11;
      _swift_bridgeObjectRetain(pvVar4);
      FUN_10015ab00(1,&local_80);
      _swift_bridgeObjectRelease_n(pvVar4,2);
      (*pcVar9)(puVar6,UVar1.unknown);
      FUN_100004594(&local_80);
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + 0x70);
      *(undefined8 *)(param_1 + 0x68) = uVar2;
      *(long *)(param_1 + 0x70) = param_2;
      _swift_bridgeObjectRelease(uVar5);
    }
  }
  return;
}



/* Address: 0x10015cb10 | FUN_10015cb10 */

void FUN_10015cb10(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  ID self;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined *local_48;
  
  self = *(ID *)(unaff_x20 + 0x18);
  objc_stub::lock(self);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x70);
  *(undefined8 *)(unaff_x20 + 0x68) = param_1;
  *(undefined8 *)(unaff_x20 + 0x70) = param_2;
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRelease(uVar2);
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    local_48 = PTR___type_metadata_for_Swift_String_100eac208;
    local_60 = param_1;
    uStack_58 = param_2;
    _swift_bridgeObjectRetain(param_2);
    FUN_10015ab00(1,&local_60);
    FUN_100004594(&local_60);
    objc_stub::unlock(self);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10015cbac);
  (*pcVar1)();
}



/* Address: 0x10015cbac | FUN_10015cbac */

undefined1  [16] FUN_10015cbac(void)

{
  long lVar1;
  ID self;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  self = *(ID *)(unaff_x20 + 0x28);
  objc_stub::lock(self);
  FUN_10015cc1c();
  objc_stub::unlock(self);
  lVar1 = *(long *)(unaff_x20 + 0x80);
  if (lVar1 == 0) {
    uVar2 = 0;
    lVar1 = -0x2000000000000000;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x78);
  }
  _swift_bridgeObjectRetain();
  auVar3._8_8_ = lVar1;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Address: 0x10015cc1c | FUN_10015cc1c */

void FUN_10015cc1c(long param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x21;
  undefined8 uVar3;
  ID self;
  undefined8 local_60;
  long lStack_58;
  undefined *local_48;
  
  if (*(long *)(param_1 + 0x80) == 0) {
    if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10015cd28);
      (*pcVar1)();
    }
    uVar2 = 0x1c;
    FUN_10015c2fc();
    uVar3 = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x78) = uVar2;
    *(long *)(param_1 + 0x80) = param_2;
    _swift_bridgeObjectRetain(param_2);
    _swift_bridgeObjectRelease(uVar3);
    if (param_2 == 0) {
      self = *(ID *)(param_1 + 0x18);
      objc_stub::lock(self);
      FUN_10015c958(param_1);
      if (unaff_x21 != 0) {
        objc_stub::unlock(self);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10015cd34);
        (*pcVar1)();
      }
      objc_stub::unlock(self);
      lStack_58 = *(long *)(param_1 + 0x70);
      if (lStack_58 == 0) {
        uVar2 = 0;
        lStack_58 = -0x2000000000000000;
      }
      else {
        uVar2 = *(undefined8 *)(param_1 + 0x68);
      }
      uVar3 = *(undefined8 *)(param_1 + 0x80);
      *(undefined8 *)(param_1 + 0x78) = uVar2;
      *(long *)(param_1 + 0x80) = lStack_58;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(lStack_58);
      _swift_bridgeObjectRelease(uVar3);
      local_48 = PTR___type_metadata_for_Swift_String_100eac208;
      local_60 = uVar2;
      FUN_10015ab00(0x1c,&local_60);
      FUN_100004594(&local_60);
    }
    else {
      _swift_bridgeObjectRelease(param_2);
    }
  }
  return;
}



/* Address: 0x10015cd34 | FUN_10015cd34 */

/* WARNING: Removing unreachable block (ram,0x00010015cd78) */
/* WARNING: Removing unreachable block (ram,0x00010015cd80) */

undefined1  [16] FUN_10015cd34(void)

{
  ID self;
  long unaff_x20;
  
  self = *(ID *)(unaff_x20 + 0x20);
  objc_stub::lock(self);
  FUN_10015cd98();
  objc_stub::unlock(self);
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Address: 0x10015cd98 | FUN_10015cd98 */

void FUN_10015cd98(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ID self;
  long unaff_x21;
  undefined8 uVar5;
  
  lVar2 = *(long *)(param_1 + 0x58);
  if (lVar2 == 0) {
    if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10015ce84);
        (*pcVar1)();
      }
      uVar3 = 0;
      puVar4 = param_2;
      FUN_10015c2fc();
      uVar5 = param_2[1];
      *param_2 = uVar3;
      param_2[1] = puVar4;
      _swift_bridgeObjectRelease(uVar5);
      *(undefined1 *)(param_1 + 0x60) = 1;
    }
    lVar2 = param_2[1];
    if (lVar2 == 0) {
      self = *(ID *)(param_1 + 0x18);
      objc_stub::lock(self);
      FUN_10015c958(param_1);
      if (unaff_x21 != 0) {
        objc_stub::unlock(self);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10015ce90);
        (*pcVar1)();
      }
      objc_stub::unlock(self);
      lVar2 = *(long *)(param_1 + 0x70);
      if (lVar2 == 0) {
        uVar3 = 0;
        lVar2 = -0x2000000000000000;
      }
      else {
        uVar3 = *(undefined8 *)(param_1 + 0x68);
      }
      uVar5 = param_2[1];
      *param_2 = uVar3;
      param_2[1] = lVar2;
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + 0x58);
      *(undefined8 *)(param_1 + 0x50) = *param_2;
      *(long *)(param_1 + 0x58) = lVar2;
    }
  }
  else {
    uVar5 = param_2[1];
    *param_2 = *(undefined8 *)(param_1 + 0x50);
    param_2[1] = lVar2;
  }
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar5);
  return;
}



/* Address: 0x10015ce90 | FUN_10015ce90 */

void FUN_10015ce90(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  ID self;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined *local_48;
  
  self = *(ID *)(unaff_x20 + 0x20);
  objc_stub::lock(self);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x58);
  *(undefined8 *)(unaff_x20 + 0x50) = param_1;
  *(undefined8 *)(unaff_x20 + 0x58) = param_2;
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRelease(uVar2);
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    local_48 = PTR___type_metadata_for_Swift_String_100eac208;
    local_60 = param_1;
    uStack_58 = param_2;
    _swift_bridgeObjectRetain(param_2);
    FUN_10015ab00(0,&local_60);
    FUN_100004594(&local_60);
    objc_stub::unlock(self);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10015cf2c);
  (*pcVar1)();
}



/* Address: 0x10015cf2c | FUN_10015cf2c */

byte FUN_10015cf2c(void)

{
  ID self;
  long unaff_x20;
  
  self = *(ID *)(unaff_x20 + 0x30);
  objc_stub::lock(self);
  FUN_10015cf7c();
  objc_stub::unlock(self);
  return *(byte *)(unaff_x20 + 0x88) & 1;
}



/* Address: 0x10015cf7c | FUN_10015cf7c */

void FUN_10015cf7c(long param_1,_StringGuts param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  _StringGuts _Var4;
  undefined *puVar5;
  long unaff_x21;
  ID self;
  undefined *puVar6;
  undefined *puVar7;
  
  if (*(char *)(param_1 + 0x88) != '\x02') {
    return;
  }
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10015d090);
    (*pcVar1)();
  }
  _Var4.unknown = (undefined *)0x10;
  FUN_10015c47c();
  bVar2 = (byte)_Var4.unknown;
  if (((uint)_Var4.unknown & 0xff) != 2) goto LAB_10015d06c;
  FUN_10015cd34();
  self = *(ID *)(param_1 + 0x18);
  objc_stub::lock(self);
  FUN_10015c958(param_1);
  if (unaff_x21 != 0) {
    objc_stub::unlock(self);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10015d09c);
    (*pcVar1)();
  }
  objc_stub::unlock(self);
  puVar6 = *(undefined **)(param_1 + 0x70);
  if (puVar6 == (undefined *)0x0) {
    puVar5 = (undefined *)0x0;
    puVar7 = (undefined *)0xe000000000000000;
    if (_Var4.unknown == (undefined *)0x0) goto LAB_10015d02c;
LAB_10015d03c:
    bVar3 = Swift::_stringCompareWithSmolCheck
                      (_Var4,param_2,(_StringComparisonResult)(__int8)puVar5);
    bVar2 = !bVar3;
  }
  else {
    puVar5 = *(undefined **)(param_1 + 0x68);
    puVar7 = puVar6;
    if (_Var4.unknown != puVar5) goto LAB_10015d03c;
LAB_10015d02c:
    if (param_2.unknown != puVar7) goto LAB_10015d03c;
    bVar2 = false;
  }
  _swift_bridgeObjectRetain(puVar6);
  _swift_bridgeObjectRelease(param_2.unknown);
  _swift_bridgeObjectRelease(puVar7);
LAB_10015d06c:
  *(byte *)(param_1 + 0x88) = bVar2 & 1;
  return;
}



/* Address: 0x10015d09c | FUN_10015d09c */

void FUN_10015d09c(byte param_1)

{
  code *pcVar1;
  ID self;
  long unaff_x20;
  byte local_50 [24];
  undefined *local_38;
  
  self = *(ID *)(unaff_x20 + 0x30);
  objc_stub::lock(self);
  *(byte *)(unaff_x20 + 0x88) = param_1;
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    local_50[0] = param_1 & 1;
    local_38 = PTR___type_metadata_for_Swift_Bool_100eac570;
    FUN_10015ab00(0x10,local_50);
    FUN_100004594(local_50);
    objc_stub::unlock(self);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10015d114);
  (*pcVar1)();
}



/* Address: 0x10015d114 | FUN_10015d114 */

byte FUN_10015d114(void)

{
  code *pcVar1;
  byte bVar2;
  long unaff_x20;
  ID self;
  
  self = *(ID *)(unaff_x20 + 0x38);
  objc_stub::lock(self);
  if (*(char *)(unaff_x20 + 0x89) == '\x02') {
    if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10015d17c);
      (*pcVar1)();
    }
    bVar2 = 0x11;
    FUN_10015c47c();
    *(byte *)(unaff_x20 + 0x89) = bVar2 & 1;
  }
  objc_stub::unlock(self);
  return *(byte *)(unaff_x20 + 0x89) & 1;
}



/* Address: 0x10015d17c | FUN_10015d17c */

void FUN_10015d17c(byte param_1)

{
  code *pcVar1;
  ID self;
  long unaff_x20;
  byte local_50 [24];
  undefined *local_38;
  
  self = *(ID *)(unaff_x20 + 0x38);
  objc_stub::lock(self);
  if ((*(byte *)(unaff_x20 + 0x89) == 2) || (((param_1 ^ *(byte *)(unaff_x20 + 0x89)) & 1) != 0)) {
    local_50[0] = param_1 & 1;
    *(byte *)(unaff_x20 + 0x89) = local_50[0];
    if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10015d208);
      (*pcVar1)();
    }
    local_38 = PTR___type_metadata_for_Swift_Bool_100eac570;
    FUN_10015ab00(0x11,local_50);
    FUN_100004594(local_50);
  }
  objc_stub::unlock(self);
  return;
}



/* Address: 0x10015d208 | FUN_10015d208 */

void FUN_10015d208(ulong param_1,ulong param_2,URL param_3)

{
  code *pcVar1;
  URL UVar2;
  undefined8 uVar3;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar4;
  ID IVar5;
  long lVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar6 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar6 + 0x40));
  puVar4 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  IVar5 = *(ID *)(unaff_x20 + 0x20);
  objc_stub::lock(IVar5);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x58);
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  _swift_bridgeObjectRelease(uVar3);
  *(undefined1 *)(unaff_x20 + 0x60) = 0;
  if ((param_2 & 1) != 0) {
    if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10015d454);
      (*pcVar1)();
    }
    SVar7.bridgeObject = (void *)0x8000000100d93ea0;
    SVar7.str = (char *)0xd000000000000012;
    Foundation::URL::appendingPathComponent(SVar7,param_3);
    FUN_1001723c8(puVar4);
    (**(code **)(lVar6 + 8))(puVar4,UVar2.unknown);
  }
  objc_stub::unlock(IVar5);
  if ((param_1 & 1) == 0) {
    IVar5 = *(ID *)(unaff_x20 + 0x18);
    objc_stub::lock(IVar5);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x70);
    *(undefined8 *)(unaff_x20 + 0x68) = 0;
    *(undefined8 *)(unaff_x20 + 0x70) = 0;
    _swift_bridgeObjectRelease(uVar3);
    if ((param_2 & 1) != 0) {
      if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10015d460);
        (*pcVar1)();
      }
      SVar8.bridgeObject = (void *)0x8000000100d93e80;
      SVar8.str = (char *)0xd000000000000013;
      Foundation::URL::appendingPathComponent(SVar8,param_3);
      FUN_1001723c8(puVar4);
      (**(code **)(lVar6 + 8))(puVar4,UVar2.unknown);
    }
    objc_stub::unlock(IVar5);
  }
  IVar5 = *(ID *)(unaff_x20 + 0x30);
  objc_stub::lock(IVar5);
  *(undefined1 *)(unaff_x20 + 0x88) = 2;
  if ((param_2 & 1) != 0) {
    if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10015d458);
      (*pcVar1)();
    }
    SVar9.bridgeObject = (void *)0x8000000100d93d10;
    SVar9.str = (char *)0xd000000000000014;
    Foundation::URL::appendingPathComponent(SVar9,param_3);
    FUN_1001723c8(puVar4);
    (**(code **)(lVar6 + 8))(puVar4,UVar2.unknown);
  }
  objc_stub::unlock(IVar5);
  IVar5 = *(ID *)(unaff_x20 + 0x38);
  objc_stub::lock(IVar5);
  *(undefined1 *)(unaff_x20 + 0x89) = 2;
  if ((param_2 & 1) != 0) {
    if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10015d45c);
      (*pcVar1)();
    }
    SVar10.bridgeObject = (void *)0x8000000100d93cf0;
    SVar10.str = (char *)0xd00000000000001f;
    Foundation::URL::appendingPathComponent(SVar10,param_3);
    FUN_1001723c8(puVar4);
    (**(code **)(lVar6 + 8))(puVar4,UVar2.unknown);
  }
  objc_stub::unlock(IVar5);
  return;
}



/* Address: 0x10015d460 | FUN_10015d460 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10015d460(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x58));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x70));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x80));
  return;
}



/* Address: 0x10015d4c4 | FUN_10015d4c4 */

void FUN_10015d4c4(void)

{
  FUN_10015d460();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10015d4e4 | FUN_10015d4e4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10015d4e4(void)

{
  return ZEXT816(0x100fb13e0);
}



/* Address: 0x10015d504 | FUN_10015d504 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10015d504(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  ID IVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  puVar2 = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar3 = objc_stub::init((ID)puVar2);
  *(ID *)(unaff_x20 + 0x18) = IVar3;
  puVar2 = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar3 = objc_stub::init((ID)puVar2);
  *(ID *)(unaff_x20 + 0x20) = IVar3;
  puVar2 = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar3 = objc_stub::init((ID)puVar2);
  *(ID *)(unaff_x20 + 0x28) = IVar3;
  puVar2 = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar3 = objc_stub::init((ID)puVar2);
  *(ID *)(unaff_x20 + 0x30) = IVar3;
  puVar2 = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar3 = objc_stub::init((ID)puVar2);
  *(ID *)(unaff_x20 + 0x38) = IVar3;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined1 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined2 *)(unaff_x20 + 0x88) = 0x202;
  FUN_10015b838();
  _swift_allocObject();
  lVar4 = param_1;
  FUN_10015a080();
  *(long *)(unaff_x20 + 0x10) = lVar4;
  puVar1 = (undefined8 *)(param_1 + PostHogConfig::getAnonymousId);
  _swift_beginAccess(puVar1,auStack_48,0,0);
  uVar6 = puVar1[1];
  uVar5 = *puVar1;
  *(undefined8 *)(unaff_x20 + 0x48) = puVar1[1];
  *(undefined8 *)(unaff_x20 + 0x40) = uVar5;
  lVar4 = PostHogConfig::bootstrap;
  _swift_beginAccess(param_1 + PostHogConfig::bootstrap,auStack_60,0,0);
  uVar5 = *(undefined8 *)(param_1 + lVar4);
  _swift_retain(uVar6);
  FUN_10015c5f0(uVar5);
  return;
}



/* Address: 0x10015d654 | FUN_10015d654 */

void FUN_10015d654(long param_1,undefined8 param_2,UnsafeMutablePointer param_3,void *param_4,
                  long param_5)

{
  char *pcVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  void *pvVar8;
  void *pvVar9;
  UnsafeMutablePointer UVar10;
  UnsafeMutablePointer UVar11;
  char *pcVar12;
  Selector SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String separator;
  char *local_80;
  void *local_78;
  code *local_70;
  undefined *puStack_68;
  code *local_60;
  undefined8 uStack_58;
  String SVar13;
  
  UVar11.unknown = param_3.unknown;
  pvVar8 = param_4;
  _swift_getObjCClassFromMetadata();
  pvVar2 = param_4;
  UVar10.unknown = param_3.unknown;
  _class_getInstanceMethod();
  if (pvVar2 == (void *)0x0) {
    local_80 = (char *)0x0;
    local_78 = (void *)0xe000000000000000;
    Swift::_StringGuts::grow(0x27,(_StringGuts)UVar10.unknown);
    _swift_bridgeObjectRelease(local_78);
    local_80 = (char *)0xd000000000000025;
    local_78 = (void *)0x8000000100d94120;
    SVar14.eventsCapacity = (__int64)UVar10.unknown;
    SVar14.events.unknown = param_3.unknown;
    SVar13 = ObjectiveC::Selector::get_description(SVar14);
    SVar16.bridgeObject = pvVar8;
    SVar16.str = UVar11.unknown;
    Swift::String::append(SVar13,SVar16);
    _swift_bridgeObjectRelease(SVar13.bridgeObject);
    pvVar2 = local_78;
    pcVar1 = local_80;
    if (DAT_101057340 == '\x01') {
      pcVar7 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      pcVar12 = (char *)0x7;
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
      local_80 = (char *)0x676f4874736f505b;
      local_78 = (void *)0xea0000000000205d;
      SVar13.bridgeObject = pvVar2;
      SVar13.str = pcVar1;
      SVar17.bridgeObject = pvVar8;
      SVar17.str = pcVar12;
      Swift::String::append(SVar13,SVar17);
      *(undefined **)(pcVar7 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      *(char **)(pcVar7 + 0x20) = local_80;
      *(void **)(pcVar7 + 0x28) = local_78;
      SVar15.bridgeObject = (void *)0x20;
      SVar15.str = pcVar7;
      separator.bridgeObject = (void *)0xa;
      separator.str = (char *)0xe100000000000000;
      Swift::_print(SVar15,separator);
      _swift_release(pcVar7);
    }
    _swift_bridgeObjectRelease(pvVar2);
    return;
  }
  _swift_getObjCClassFromMetadata();
  lVar3 = param_1;
  _class_getInstanceMethod();
  if (lVar3 == 0) {
    pvVar8 = pvVar2;
    _method_getImplementation(pvVar2);
    pvVar9 = pvVar2;
    _method_getTypeEncoding(pvVar2);
    _class_addMethod(param_1,param_2,pvVar8,pvVar9);
    if ((param_5 != 0) && (_class_getInstanceMethod(param_4,param_5), param_4 != (void *)0x0)) {
      pvVar2 = param_4;
      _method_getImplementation();
      _method_getTypeEncoding(param_4);
      _class_addMethod(param_1,param_3.unknown,pvVar2,param_4);
      return;
    }
    local_60 = FUN_100004520;
    uStack_58 = 0;
    local_80 = PTR___NSConcreteStackBlock_100ea82a0;
    local_78 = (void *)0x42000000;
    local_70 = FUN_100030410;
    puStack_68 = &DAT_100eb8f58;
    pvVar9 = __Block_copy(&local_80);
    pvVar8 = pvVar9;
    _imp_implementationWithBlock();
    _method_getTypeEncoding(pvVar2);
    _class_addMethod(param_1,param_3.unknown,pvVar8,pvVar2);
    __Block_release(pvVar9);
  }
  else {
    lVar4 = lVar3;
    _method_getImplementation();
    lVar5 = lVar3;
    _method_getTypeEncoding(lVar3);
    lVar6 = param_1;
    _class_addMethod(param_1,param_3.unknown,lVar4,lVar5);
    if ((int)lVar6 != 0) {
      pvVar8 = pvVar2;
      _method_getImplementation(pvVar2);
      _method_getTypeEncoding(pvVar2);
      _class_replaceMethod(param_1,param_2,pvVar8,pvVar2);
      return;
    }
    _class_getInstanceMethod(param_1,param_3.unknown);
    if (param_1 != 0) {
      _method_exchangeImplementations(lVar3,param_1);
      return;
    }
  }
  return;
}



/* Address: 0x10015d978 | FUN_10015d978 */

void FUN_10015d978(long param_1,long param_2)

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



/* Address: 0x10015d98c | FUN_10015d98c */

void FUN_10015d98c(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x10015d994 | FUN_10015d994 */

void FUN_10015d994(long param_1)

{
  _swift_errorRelease(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Address: 0x10015d99c | FUN_10015d99c */

undefined8 * FUN_10015d99c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar2 = param_2[2];
  _swift_errorRetain(uVar2);
  uVar1 = param_2[3];
  param_1[2] = uVar2;
  param_1[3] = uVar1;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  return param_1;
}



/* Address: 0x10015d9f4 | FUN_10015d9f4 */

undefined8 * FUN_10015d9f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  uVar1 = param_1[2];
  uVar2 = param_2[2];
  _swift_errorRetain(uVar2);
  param_1[2] = uVar2;
  _swift_errorRelease(uVar1);
  uVar1 = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[3] = uVar1;
  return param_1;
}



/* Address: 0x10015da5c | FUN_10015da5c */

void FUN_10015da5c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  return;
}



/* Address: 0x10015da70 | FUN_10015da70 */

undefined8 * FUN_10015da70(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_errorRelease(uVar1);
  param_1[3] = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  return param_1;
}



/* Address: 0x10015dac4 | FUN_10015dac4 */

int FUN_10015dac4(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0x21) != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x10015db20 | FUN_10015db20 */

void FUN_10015db20(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x7fffffff) {
    if (0x7ffffffe < param_3) {
      *(undefined1 *)((long)param_1 + 0x21) = 0;
    }
    if (param_2 != 0) {
      param_1[2] = (ulong)param_2;
      return;
    }
  }
  else {
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined1 *)(param_1 + 4) = 0;
    *param_1 = (ulong)(param_2 + 0x80000001);
    param_1[1] = 0;
    if (0x7ffffffe < param_3) {
      *(undefined1 *)((long)param_1 + 0x21) = 1;
    }
  }
  return;
}



/* Address: 0x10015db78 | FUN_10015db78 */

undefined1  [16] FUN_10015db78(void)

{
  return ZEXT816(0x100eb8fe8);
}



/* Address: 0x10015db88 | FUN_10015db88 */

char * FUN_10015db88(void)

{
  return "posthog-ios";
}



/* Address: 0x10015db94 | FUN_10015db94 */

char * FUN_10015db94(void)

{
  return s_posthog_ios_100fb15a8;
}


