/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100126914 | FUN_100126914 */

void FUN_100126914(void)

{
  FUN_1001268fc();
  return;
}



/* Address: 0x100126928 | FUN_100126928 */

void FUN_100126928(void)

{
  DAT_1010572e8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  return;
}



/* Address: 0x100126964 | FUN_100126964 */

undefined8 * FUN_100126964(void)

{
  if (DAT_100fb00d8 != -1) {
    _swift_once(&DAT_100fb00d8,FUN_100126928);
  }
  return &DAT_1010572e8;
}



/* Address: 0x1001269a4 | FUN_1001269a4 */

void FUN_1001269a4(void)

{
  FUN_100126a6c(&DAT_100fb00d8,&DAT_1010572e8,FUN_100126928);
  return;
}



/* Address: 0x1001269c0 | _TtC7PostHog10PostHogSDK::didStartNotification */

/* Function Stack Size: 0x10 bytes */

ID _TtC7PostHog10PostHogSDK::didStartNotification(ID param_1,SEL param_2)

{
  FUN_100126ac8(param_1,param_2,&DAT_100fb00d8,&DAT_1010572e8,FUN_100126928);
  return param_1;
}



/* Address: 0x1001269dc | FUN_1001269dc */

void FUN_1001269dc(void)

{
  DAT_1010572f0 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  return;
}



/* Address: 0x100126a10 | FUN_100126a10 */

undefined8 * FUN_100126a10(void)

{
  if (DAT_100fb00e0 != -1) {
    _swift_once(&DAT_100fb00e0,FUN_1001269dc);
  }
  return &DAT_1010572f0;
}



/* Address: 0x100126a50 | FUN_100126a50 */

void FUN_100126a50(void)

{
  FUN_100126a6c(&DAT_100fb00e0,&DAT_1010572f0,FUN_1001269dc);
  return;
}



/* Address: 0x100126a6c | FUN_100126a6c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100126a6c(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  if (*param_1 == -1) {
    return *param_2;
  }
  _swift_once(param_1,param_3);
  return *param_2;
}



/* Address: 0x100126aac | _TtC7PostHog10PostHogSDK::didReceiveFeatureFlags */

/* Function Stack Size: 0x10 bytes */

ID _TtC7PostHog10PostHogSDK::didReceiveFeatureFlags(ID param_1,SEL param_2)

{
  FUN_100126ac8(param_1,param_2,&DAT_100fb00e0,&DAT_1010572f0,FUN_1001269dc);
  return param_1;
}



/* Address: 0x100126ac8 | FUN_100126ac8 */

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */

undefined8
FUN_100126ac8(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 *param_4,
             undefined8 param_5)

{
  if (*param_3 == -1) {
    return *param_4;
  }
  _swift_once(param_3,param_5);
  return *param_4;
}



/* Address: 0x100126b0c | FUN_100126b0c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100126b0c(long param_1)

{
  char *pcVar1;
  void *pvVar2;
  URL UVar3;
  URL UVar4;
  NSString *pNVar5;
  ID IVar6;
  char *pcVar7;
  char *pcVar8;
  undefined *puVar9;
  undefined *extraout_x1;
  _StringGuts _Var10;
  char *pcVar11;
  char **ppcVar12;
  undefined *puVar13;
  long lVar14;
  long extraout_x8;
  long extraout_x12;
  code *pcVar15;
  long unaff_x20;
  long lVar16;
  undefined8 uVar17;
  undefined1 *puVar18;
  long lVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String separator;
  String SVar28;
  String SVar29;
  String separator_00;
  undefined1 auStack_c0 [8];
  char *local_b8;
  long local_b0;
  char *local_90 [2];
  char *local_80;
  void *local_78;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar14 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar14 + 0x40));
  puVar18 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  UVar4.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
  local_b0 = _TtC7PostHog22PostHogFileBackedQueue::queue;
  SVar20 = Foundation::URL::get_path(UVar4);
  pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar20.bridgeObject);
  local_80 = (char *)0x0;
  ppcVar12 = (char **)&DAT_00000001;
  IVar6 = NSFileManager::createDirectoryAtPath_withIntermediateDirectories_attributes_error_
                    ((ID)UVar4.unknown,pNVar5,1,0,&local_80);
  if ((int)IVar6 == 0) {
    pcVar7 = local_80;
    _Var10.unknown = extraout_x1;
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    local_b8 = (char *)0x0;
    local_80 = (char *)0x0;
    local_78 = (void *)0xe000000000000000;
    Swift::_StringGuts::grow(0x28,_Var10);
    SVar20.bridgeObject = (void *)0x8000000100d92600;
    SVar20.str = (char *)0xd000000000000026;
    SVar26.bridgeObject = ppcVar12;
    SVar26.str = (char *)pNVar5;
    Swift::String::append(SVar20,SVar26);
    pNVar5 = (NSString *)&DAT_100faf510;
    local_90[0] = pcVar7;
    FUN_1000f7830(&DAT_100faf510,&DAT_100c2e820);
    ppcVar12 = (char **)PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
    Swift::__print_unlocked
              (local_90,&local_80,pNVar5,
               PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
               PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
              );
    pvVar2 = local_78;
    pcVar1 = local_80;
    if (DAT_101057340 == '\x01') {
      pcVar8 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      pcVar11 = (char *)0x7;
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
      local_80 = (char *)0x676f4874736f505b;
      local_78 = (void *)0xea0000000000205d;
      SVar21.bridgeObject = pvVar2;
      SVar21.str = pcVar1;
      SVar27.bridgeObject = ppcVar12;
      SVar27.str = pcVar11;
      Swift::String::append(SVar21,SVar27);
      *(undefined **)(pcVar8 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      *(char **)(pcVar8 + 0x20) = local_80;
      *(void **)(pcVar8 + 0x28) = local_78;
      SVar22.bridgeObject = (void *)0x20;
      SVar22.str = pcVar8;
      separator.bridgeObject = (void *)0xa;
      separator.str = (char *)0xe100000000000000;
      ppcVar12 = (char **)0xa;
      pNVar5 = (NSString *)0xe100000000000000;
      Swift::_print(SVar22,separator);
      _swift_bridgeObjectRelease(pvVar2);
      _swift_errorRelease(pcVar7);
      _swift_release(pcVar8);
    }
    else {
      _swift_bridgeObjectRelease(local_78);
      _swift_errorRelease(pcVar7);
    }
  }
  else {
    local_b8 = (char *)0x0;
  }
  lVar16 = *(long *)(param_1 + 0x10);
  if (lVar16 != 0) {
    param_1 = param_1 + ((ulong)*(byte *)(lVar14 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar14 + 0x50) ^ 0xffffffffffffffff));
    lVar19 = *(long *)(lVar14 + 0x48);
    pcVar15 = *(code **)(lVar14 + 0x10);
    do {
      (*pcVar15)((long)puVar18 - extraout_x12,param_1,UVar3.unknown);
      (**(code **)(lVar14 + 0x20))(puVar18,(long)puVar18 - extraout_x12,UVar3.unknown);
      local_80 = (char *)((ulong)local_80 & 0xffffffffffffff00);
      UVar4.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
      SVar20 = Foundation::URL::get_path(UVar4);
      pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(SVar20.bridgeObject);
      ppcVar12 = &local_80;
      IVar6 = NSFileManager::fileExistsAtPath_isDirectory_((ID)UVar4.unknown);
      if ((int)IVar6 != 0) {
        if ((char)local_80 == '\x01') {
          FUN_100127098(unaff_x20 + local_b0,puVar18);
        }
        else {
          FUN_10012b300(unaff_x20 + local_b0,puVar18);
        }
      }
      (**(code **)(lVar14 + 8))(puVar18,UVar3.unknown);
      param_1 = param_1 + lVar19;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  pcVar1 = local_b8;
                    /* WARNING: Load size is inaccurate */
  _Var10.unknown = *PTR__NSURLCreationDateKey_100ea9ad8;
  lVar14 = unaff_x20 + local_b0;
  FUN_1001275e0();
  if (pcVar1 == (char *)0x0) {
    IVar6 = *(ID *)(unaff_x20 + _TtC7PostHog22PostHogFileBackedQueue::itemsLock);
    objc_stub::lock(IVar6);
    lVar16 = _TtC7PostHog22PostHogFileBackedQueue::items;
    _swift_beginAccess(unaff_x20 + _TtC7PostHog22PostHogFileBackedQueue::items,&local_80,1,0);
    uVar17 = *(undefined8 *)(unaff_x20 + lVar16);
    *(long *)(unaff_x20 + lVar16) = lVar14;
    _swift_bridgeObjectRetain(lVar14);
    _swift_bridgeObjectRelease(uVar17);
    objc_stub::unlock(IVar6);
    _swift_bridgeObjectRelease(lVar14);
  }
  else {
    local_80 = (char *)0x0;
    local_78 = (void *)0xe000000000000000;
    Swift::_StringGuts::grow(0x21,_Var10);
    SVar23.bridgeObject = (void *)0x8000000100d92630;
    SVar23.str = (char *)0xd00000000000001f;
    SVar28.bridgeObject = ppcVar12;
    SVar28.str = (char *)pNVar5;
    Swift::String::append(SVar23,SVar28);
    local_90[0] = pcVar1;
    puVar9 = &DAT_100faf510;
    FUN_1000f7830(&DAT_100faf510,&DAT_100c2e820);
    puVar13 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
    Swift::__print_unlocked
              (local_90,&local_80,puVar9,
               PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
               PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
              );
    pvVar2 = local_78;
    pcVar7 = local_80;
    if (DAT_101057340 == '\x01') {
      pcVar8 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      pcVar11 = (char *)0x7;
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
      local_80 = (char *)0x676f4874736f505b;
      local_78 = (void *)0xea0000000000205d;
      SVar24.bridgeObject = pvVar2;
      SVar24.str = pcVar7;
      SVar29.bridgeObject = puVar13;
      SVar29.str = pcVar11;
      Swift::String::append(SVar24,SVar29);
      *(undefined **)(pcVar8 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      *(char **)(pcVar8 + 0x20) = local_80;
      *(void **)(pcVar8 + 0x28) = local_78;
      SVar25.bridgeObject = (void *)0x20;
      SVar25.str = pcVar8;
      separator_00.bridgeObject = (void *)0xa;
      separator_00.str = (char *)0xe100000000000000;
      Swift::_print(SVar25,separator_00);
      _swift_bridgeObjectRelease(pvVar2);
      _swift_errorRelease(pcVar1);
      _swift_release(pcVar8);
    }
    else {
      _swift_bridgeObjectRelease(local_78);
      _swift_errorRelease(pcVar1);
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100127098 | FUN_100127098 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100127098(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  URL UVar2;
  URL UVar3;
  ID IVar4;
  NSURL *pNVar5;
  char *pcVar6;
  undefined *puVar7;
  char *pcVar8;
  undefined *extraout_x1;
  undefined *extraout_x1_00;
  _StringGuts _Var9;
  char *pcVar10;
  char **ppcVar11;
  undefined *puVar12;
  long extraout_x8;
  long extraout_x12;
  code *pcVar13;
  undefined8 *puVar14;
  long lVar15;
  void *pvVar16;
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
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String separator;
  String SVar31;
  String SVar32;
  String separator_00;
  undefined1 auStack_e0 [8];
  ID local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  char *local_b8;
  undefined *local_b0;
  long local_a8;
  undefined *puStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  char *local_88;
  char *local_80;
  void *local_78;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_98 = param_1;
  puStack_a0 = (undefined *)Foundation::URL::typeMetadataAccessor();
  local_a8 = *(long *)(puStack_a0 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_a8 + 0x40));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_b0 = &_OBJC_CLASS___NSFileManager;
  UVar2.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
  local_90 = param_2;
  SVar17 = Foundation::URL::get_path(UVar2);
  UVar3.unknown = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar17.bridgeObject);
  local_80 = (char *)0x0;
  ppcVar11 = &local_80;
  IVar4 = NSFileManager::contentsOfDirectoryAtPath_error_((ID)UVar2.unknown);
  if (IVar4 == 0) {
    pcVar6 = local_80;
    _Var9.unknown = extraout_x1;
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    local_80 = (char *)0x0;
    local_78 = (void *)0xe000000000000000;
    Swift::_StringGuts::grow(0x1e,_Var9);
    SVar17.bridgeObject = (void *)0x8000000100d92650;
    SVar17.str = (char *)0xd00000000000001c;
    SVar31.bridgeObject = ppcVar11;
    SVar31.str = UVar3.unknown;
    Swift::String::append(SVar17,SVar31);
    puVar7 = &DAT_100faf510;
    local_88 = pcVar6;
    FUN_1000f7830(&DAT_100faf510,&DAT_100c2e820);
    puVar12 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
    Swift::__print_unlocked
              (&local_88,&local_80,puVar7,
               PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
               PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
              );
    pvVar16 = local_78;
    pcVar1 = local_80;
    if (DAT_101057340 == '\x01') {
      pcVar8 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      pcVar10 = (char *)0x7;
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
      local_80 = (char *)0x676f4874736f505b;
      local_78 = (void *)0xea0000000000205d;
      SVar25.bridgeObject = pvVar16;
      SVar25.str = pcVar1;
      SVar32.bridgeObject = puVar12;
      SVar32.str = pcVar10;
      Swift::String::append(SVar25,SVar32);
      *(undefined **)(pcVar8 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      *(char **)(pcVar8 + 0x20) = local_80;
      *(void **)(pcVar8 + 0x28) = local_78;
      SVar26.bridgeObject = (void *)0x20;
      SVar26.str = pcVar8;
      separator_00.bridgeObject = (void *)0xa;
      separator_00.str = (char *)0xe100000000000000;
      Swift::_print(SVar26,separator_00);
      _swift_bridgeObjectRelease(pvVar16);
      _swift_errorRelease(pcVar6);
      _swift_release(pcVar8);
    }
    else {
      _swift_bridgeObjectRelease(local_78);
      _swift_errorRelease(pcVar6);
    }
  }
  else {
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
    lVar15 = *(long *)(IVar4 + 0x10);
    if (lVar15 != 0) {
      local_b8 = "Failed to read queue folder ";
      puVar14 = (undefined8 *)(IVar4 + 0x28);
      uStack_c8 = 2;
      local_d0 = 1;
      local_d8 = IVar4;
      do {
        pcVar1 = (char *)puVar14[-1];
        pvVar16 = (void *)*puVar14;
        _swift_bridgeObjectRetain(pvVar16);
        SVar18.bridgeObject = pvVar16;
        SVar18.str = pcVar1;
        Foundation::URL::appendingPathComponent(SVar18,UVar3);
        SVar19.bridgeObject = pvVar16;
        SVar19.str = pcVar1;
        Foundation::URL::appendingPathComponent(SVar19,UVar3);
        UVar2.unknown = (undefined *)objc_stub::defaultManager(local_b0);
        UVar3.unknown = Foundation::URL::_bridgeToObjectiveC(UVar2);
        pNVar5 = Foundation::URL::_bridgeToObjectiveC(UVar3);
        local_80 = (char *)0x0;
        IVar4 = objc_stub::moveItemAtURL_toURL_error_
                          ((ID)UVar2.unknown,UVar3.unknown,pNVar5,&local_80);
        if ((int)IVar4 == 0) {
          pcVar6 = local_80;
          _Var9.unknown = extraout_x1_00;
          Foundation::__convertNSErrorToError();
          _swift_willThrow(0);
          local_80 = (char *)0x0;
          local_78 = (void *)0xe000000000000000;
          Swift::_StringGuts::grow(0x1d,_Var9);
          SVar20.bridgeObject = (void *)((ulong)local_b8 | 0x8000000000000000);
          SVar20.str = (char *)0xd000000000000017;
          SVar27.bridgeObject = pNVar5;
          SVar27.str = UVar3.unknown;
          Swift::String::append(SVar20,SVar27);
          SVar21.bridgeObject = pvVar16;
          SVar21.str = pcVar1;
          SVar28.bridgeObject = pNVar5;
          SVar28.str = UVar3.unknown;
          Swift::String::append(SVar21,SVar28);
          _swift_bridgeObjectRelease(pvVar16);
          SVar22.bridgeObject = &SUB_e200000000000000;
          SVar22.str = (char *)0x203a;
          SVar29.bridgeObject = pNVar5;
          SVar29.str = UVar3.unknown;
          Swift::String::append(SVar22,SVar29);
          UVar3.unknown = &DAT_100faf510;
          local_88 = pcVar6;
          FUN_1000f7830(&DAT_100faf510,&DAT_100c2e820);
          puVar7 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
          Swift::__print_unlocked
                    (&local_88,&local_80,UVar3.unknown,
                     PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
                     PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
                    );
          pvVar16 = local_78;
          pcVar1 = local_80;
          if (DAT_101057340 == '\x01') {
            pcVar8 = &DAT_100fae660;
            FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
            pcVar10 = (char *)0x7;
            _swift_allocObject();
            *(undefined8 *)(pcVar8 + 0x18) = uStack_c8;
            *(undefined8 *)(pcVar8 + 0x10) = local_d0;
            local_80 = (char *)0x676f4874736f505b;
            local_78 = (void *)0xea0000000000205d;
            SVar23.bridgeObject = pvVar16;
            SVar23.str = pcVar1;
            SVar30.bridgeObject = puVar7;
            SVar30.str = pcVar10;
            Swift::String::append(SVar23,SVar30);
            *(undefined **)(pcVar8 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
            *(char **)(pcVar8 + 0x20) = local_80;
            *(void **)(pcVar8 + 0x28) = local_78;
            SVar24.bridgeObject = (void *)0x20;
            SVar24.str = pcVar8;
            separator.bridgeObject = (void *)0xa;
            separator.str = (char *)0xe100000000000000;
            UVar3.unknown = (NSString *)0xe100000000000000;
            Swift::_print(SVar24,separator);
            _swift_release(pcVar8);
          }
          _swift_errorRelease(pcVar6);
        }
        puVar14 = puVar14 + 2;
        _swift_bridgeObjectRelease(pvVar16);
        puVar7 = puStack_a0;
        pcVar13 = *(code **)(local_a8 + 8);
        (*pcVar13)(auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),puStack_a0);
        (*pcVar13)((long)(auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12,
                   puVar7);
        lVar15 = lVar15 + -1;
        IVar4 = local_d8;
      } while (lVar15 != 0);
    }
    _swift_bridgeObjectRelease(IVar4);
  }
  FUN_1001723c8(local_90);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x1001275e0 | FUN_1001275e0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_1001275e0(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  URL UVar2;
  URL UVar3;
  NSURL *pNVar4;
  undefined *puVar5;
  NSArray *pNVar6;
  undefined *puVar7;
  long lVar8;
  long extraout_x8;
  undefined *puVar9;
  code *pcVar10;
  long lVar11;
  ID unaff_x20;
  long unaff_x21;
  long lVar12;
  String SVar13;
  undefined *local_a0;
  undefined *local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar8 = *(long *)(UVar2.unknown + -8);
  UVar3 = UVar2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar8 + 0x40));
  puVar9 = (undefined *)((long)&local_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  pNVar4 = Foundation::URL::_bridgeToObjectiveC(UVar3);
  puVar5 = &DAT_100fb0230;
  FUN_1000f7830(&DAT_100fb0230,&DAT_100c2ea70);
  _swift_allocObject();
  *(undefined8 *)(puVar5 + 0x18) = 2;
  *(undefined8 *)(puVar5 + 0x10) = 1;
  *(undefined8 *)(puVar5 + 0x20) = param_2;
  FUN_1000f8cf4(0);
  pNVar6 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_release(puVar5);
  local_70 = (undefined *)0x0;
  puVar7 = (undefined *)
           objc_stub::contentsOfDirectoryAtURL_includingPropertiesForKeys_options_error_
                     (unaff_x20,pNVar4,pNVar6,0,&local_70);
  puVar5 = local_70;
  if (puVar7 == (undefined *)0x0) {
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
  }
  else {
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
    local_70 = puVar7;
    _swift_bridgeObjectRetain(puVar7);
    FUN_10012ac00(&local_70,param_2);
    if (unaff_x21 != 0) {
      _swift_release(local_70);
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1001278f8);
      (*pcVar10)();
    }
    _swift_bridgeObjectRelease(puVar7);
    puVar7 = local_70;
    lVar12 = *(long *)(local_70 + 0x10);
    if (lVar12 == 0) {
      _swift_release(local_70);
      puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
    }
    else {
      local_70 = PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_10010fa9c(0,lVar12,0);
      local_a0 = puVar7;
      puVar7 = puVar7 + ((ulong)*(byte *)(lVar8 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff));
      lVar11 = *(long *)(lVar8 + 0x48);
      pcVar10 = *(code **)(lVar8 + 0x10);
      do {
        puVar5 = local_70;
        UVar3.unknown = puVar9;
        (*pcVar10)(puVar9,puVar7,UVar2.unknown);
        SVar13 = Foundation::URL::get_lastPathComponent(UVar3);
        (**(code **)(lVar8 + 8))(puVar9,UVar2.unknown);
        uVar1 = *(ulong *)(puVar5 + 0x10);
        local_70 = puVar5;
        if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
          FUN_10010fa9c(1 < *(ulong *)(puVar5 + 0x18),uVar1 + 1,1);
        }
        puVar5 = local_70;
        *(ulong *)(local_70 + 0x10) = uVar1 + 1;
        *(String *)(local_70 + uVar1 * 0x10 + 0x20) = SVar13;
        puVar7 = puVar7 + lVar11;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      _swift_release(local_a0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1001278f8 | FUN_1001278f8 */

void FUN_1001278f8(char *param_1)

{
  long lVar1;
  URL UVar2;
  undefined1 *puVar3;
  URL UVar4;
  long extraout_x8;
  long unaff_x20;
  ID self;
  long lVar5;
  String SVar6;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar5 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar5 + 0x40));
  self = *(ID *)(unaff_x20 + _TtC7PostHog22PostHogFileBackedQueue::itemsLock);
  objc_stub::lock(self);
  lVar1 = _TtC7PostHog22PostHogFileBackedQueue::items;
  _swift_beginAccess(unaff_x20 + _TtC7PostHog22PostHogFileBackedQueue::items,auStack_68,0,0);
  if ((long)param_1 < *(long *)(*(long *)(unaff_x20 + lVar1) + 0x10)) {
    puVar3 = auStack_80;
    UVar4.unknown = (undefined *)0x21;
    _swift_beginAccess(unaff_x20 + lVar1,puVar3,0x21,0);
    FUN_100127a34();
    _swift_endAccess(auStack_80);
    objc_stub::unlock(self);
    if (puVar3 != (undefined1 *)0x0) {
      SVar6.bridgeObject = puVar3;
      SVar6.str = param_1;
      Foundation::URL::appendingPathComponent(SVar6,UVar4);
      _swift_bridgeObjectRelease(puVar3);
      FUN_1001723c8(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      (**(code **)(lVar5 + 8))
                (auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar2.unknown);
    }
  }
  else {
    objc_stub::unlock(self);
  }
  return;
}



/* Address: 0x100127a34 | FUN_100127a34 */

undefined1  [16] FUN_100127a34(ulong param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  ulong uVar4;
  undefined1 (*pauVar5) [16];
  ulong uVar6;
  ulong *unaff_x20;
  long lVar7;
  
  uVar6 = *unaff_x20;
  uVar4 = uVar6;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar4 & 1) == 0) {
    FUN_100174960();
  }
  if (param_1 < *(ulong *)(uVar6 + 0x10)) {
    lVar7 = *(ulong *)(uVar6 + 0x10) - 1;
    lVar1 = uVar6 + param_1 * 0x10;
    pauVar5 = (undefined1 (*) [16])(lVar1 + 0x20);
    auVar2 = *pauVar5;
    _memmove(pauVar5,(void *)(lVar1 + 0x30),(lVar7 - param_1) * 0x10);
    *(long *)(uVar6 + 0x10) = lVar7;
    *unaff_x20 = uVar6;
    return auVar2;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100127abc);
  (*pcVar3)();
}



/* Address: 0x100127abc | FUN_100127abc */

/* WARNING: Removing unreachable block (ram,0x000100127be8) */
/* WARNING: Removing unreachable block (ram,0x000100127da0) */
/* WARNING: Removing unreachable block (ram,0x000100127c74) */

void FUN_100127abc(undefined *param_1,undefined8 param_2,URL param_3)

{
  URL UVar1;
  UUID UVar2;
  UUID UVar3;
  ulong uVar4;
  ulong uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  ID self;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  String SVar10;
  String SVar11;
  undefined1 auStack_a0 [8];
  Data local_98;
  undefined8 uStack_90;
  undefined1 local_88 [40];
  
  local_98.unknown = param_1;
  uStack_90 = param_2;
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar8 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar8 + 0x40));
  UVar1.unknown = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  UVar2 = Foundation::UUID::typeMetadataAccessor();
  lVar6 = *(long *)(UVar2.unknown + -8);
  UVar3 = UVar2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar6 + 0x40));
  lVar9 = (long)UVar1.unknown - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if (DAT_100fb3060 != -1) {
    UVar3.unknown = (undefined *)&DAT_100fb3060;
    _swift_once(&DAT_100fb3060,FUN_100173f28);
  }
  FUN_100173f94(lVar9);
  SVar10 = Foundation::UUID::get_uuidString(UVar3);
  SVar11 = Swift::String::lowercased(SVar10);
  _swift_bridgeObjectRelease(SVar10.bridgeObject);
  (**(code **)(lVar6 + 8))(lVar9,UVar2.unknown);
  Foundation::URL::appendingPathComponent(SVar11,param_3);
  Foundation::Data::_write(UVar1,(NSDataWritingOptions)0x0,local_98);
  (**(code **)(lVar8 + 8))(UVar1.unknown);
  self = *(ID *)(unaff_x20 + _TtC7PostHog22PostHogFileBackedQueue::itemsLock);
  objc_stub::lock(self);
  lVar6 = _TtC7PostHog22PostHogFileBackedQueue::items;
  _swift_beginAccess(unaff_x20 + _TtC7PostHog22PostHogFileBackedQueue::items,local_88,0x21,0);
  uVar7 = *(ulong *)(unaff_x20 + lVar6);
  _swift_bridgeObjectRetain(SVar11.bridgeObject);
  uVar4 = uVar7;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(unaff_x20 + lVar6) = uVar7;
  uVar5 = uVar7;
  if ((uVar4 & 1) == 0) {
    uVar5 = 0;
    FUN_10010540c(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
    *(ulong *)(unaff_x20 + lVar6) = uVar5;
  }
  uVar4 = *(ulong *)(uVar5 + 0x10);
  uVar7 = uVar5;
  if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar4) {
    uVar7 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
    FUN_10010540c(uVar7,uVar4 + 1,1,uVar5);
  }
  *(ulong *)(uVar7 + 0x10) = uVar4 + 1;
  *(String *)(uVar7 + uVar4 * 0x10 + 0x20) = SVar11;
  *(ulong *)(unaff_x20 + lVar6) = uVar7;
  _swift_endAccess(local_88);
  objc_stub::unlock(self);
  _swift_bridgeObjectRelease(SVar11.bridgeObject);
  return;
}



/* Address: 0x100127e2c | FUN_100127e2c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100128060) */
/* WARNING: Removing unreachable block (ram,0x000100128800) */
/* WARNING: Removing unreachable block (ram,0x0001001289a0) */
/* WARNING: Removing unreachable block (ram,0x0001001288cc) */
/* WARNING: Removing unreachable block (ram,0x000100128074) */
/* WARNING: Removing unreachable block (ram,0x000100128144) */
/* WARNING: Removing unreachable block (ram,0x0001001281e0) */

undefined * FUN_100127e2c(long param_1)

{
  String *pSVar1;
  char *pcVar2;
  _StringGuts _Var3;
  _StringGuts _Var4;
  undefined8 uVar5;
  void *pvVar6;
  char *pcVar7;
  undefined1 *puVar8;
  code *pcVar9;
  bool bVar10;
  URL UVar11;
  NSString *pNVar12;
  Data DVar13;
  char *pcVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  Hasher HVar18;
  ulong uVar19;
  undefined8 uVar20;
  _StringGuts extraout_x1;
  undefined8 uVar21;
  URL UVar22;
  NSString *pNVar23;
  char *pcVar24;
  undefined *puVar25;
  long lVar26;
  long extraout_x8;
  ulong uVar27;
  ulong uVar28;
  ID IVar29;
  long lVar30;
  long unaff_x20;
  ulong uVar31;
  long lVar32;
  ulong *puVar33;
  undefined8 *puVar34;
  ulong uVar35;
  NSDataReadingOptions contentsOf;
  String SVar36;
  String SVar37;
  String SVar38;
  String SVar39;
  String SVar40;
  String SVar41;
  String SVar42;
  String separator;
  undefined1 auStack_170 [8];
  ID local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  long local_148;
  long local_140;
  char *local_e8;
  undefined1 *local_e0;
  undefined1 local_a0 [24];
  undefined1 auStack_88 [24];
  undefined *local_70;
  
  local_140 = param_1;
  UVar11 = Foundation::URL::typeMetadataAccessor();
  lVar26 = *(long *)(UVar11.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar26 + 0x40));
  contentsOf.unknown = auStack_170 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_70 = PTR___swiftEmptySetSingleton_100eae0e8;
  IVar29 = *(ID *)(unaff_x20 + _TtC7PostHog22PostHogFileBackedQueue::itemsLock);
  objc_stub::lock(IVar29);
  lVar30 = _TtC7PostHog22PostHogFileBackedQueue::items;
  UVar22.unknown = (NSString *)0x0;
  puVar25 = (undefined *)0x0;
  _swift_beginAccess(unaff_x20 + _TtC7PostHog22PostHogFileBackedQueue::items,auStack_88);
  lVar32 = *(long *)(unaff_x20 + lVar30);
  _swift_bridgeObjectRetain(lVar32);
  local_168 = IVar29;
  objc_stub::unlock(IVar29);
  uVar27 = *(ulong *)(lVar32 + 0x10);
  local_148 = lVar30;
  if (uVar27 == 0) {
    _swift_bridgeObjectRelease(lVar32);
    puVar17 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    uVar31 = 0;
    puVar34 = (undefined8 *)(lVar32 + 0x28);
    uStack_158 = 2;
    local_160 = 1;
    puVar17 = PTR___swiftEmptyArrayStorage_100eae0d8;
    do {
      if (*(ulong *)(lVar32 + 0x10) <= uVar31) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1001289e8);
        (*pcVar9)();
      }
      pcVar2 = (char *)puVar34[-1];
      pNVar23 = (NSString *)*puVar34;
      _swift_bridgeObjectRetain(pNVar23);
      SVar36.bridgeObject = pNVar23;
      SVar36.str = pcVar2;
      Foundation::URL::appendingPathComponent(SVar36,UVar22);
      UVar22.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
      SVar36 = Foundation::URL::get_path(UVar22);
      pNVar12 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(SVar36.bridgeObject);
      IVar29 = NSFileManager::fileExistsAtPath_((ID)UVar22.unknown);
      if ((IVar29 & 1) == 0) {
        local_e8 = (char *)0x0;
        local_e0 = (undefined1 *)0xe000000000000000;
        Swift::_StringGuts::grow(0x16,extraout_x1);
        _swift_bridgeObjectRelease(local_e0);
        local_e8 = (char *)0x20656c6946;
        local_e0 = &DAT_e500000000000000;
        FUN_100129b64();
        SVar36 = Swift::CustomStringConvertible::get_description();
        SVar40.bridgeObject = puVar25;
        SVar40.str = (char *)pNVar12;
        Swift::String::append(SVar36,SVar40);
        _swift_bridgeObjectRelease(SVar36.bridgeObject);
        SVar37.bridgeObject = (void *)0xef74736978652074;
        SVar37.str = (char *)0x6f6e2073656f6420;
        SVar41.bridgeObject = puVar25;
        SVar41.str = (char *)pNVar12;
        Swift::String::append(SVar37,SVar41);
        puVar8 = local_e0;
        pcVar7 = local_e8;
        if (DAT_101057340 == '\x01') {
          pcVar14 = &DAT_100fae660;
          FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
          pcVar24 = (char *)0x7;
          _swift_allocObject();
          *(undefined8 *)(pcVar14 + 0x18) = uStack_158;
          *(undefined8 *)(pcVar14 + 0x10) = local_160;
          local_e8 = (char *)0x676f4874736f505b;
          local_e0 = (undefined1 *)0xea0000000000205d;
          SVar38.bridgeObject = puVar8;
          SVar38.str = pcVar7;
          SVar42.bridgeObject = puVar25;
          SVar42.str = pcVar24;
          Swift::String::append(SVar38,SVar42);
          *(undefined **)(pcVar14 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
          *(char **)(pcVar14 + 0x20) = local_e8;
          *(undefined1 **)(pcVar14 + 0x28) = local_e0;
          SVar39.bridgeObject = (void *)0x20;
          SVar39.str = pcVar14;
          separator.bridgeObject = (void *)0xa;
          separator.str = (char *)0xe100000000000000;
          puVar25 = (undefined *)0xa;
          Swift::_print(SVar39,separator);
          _swift_release(pcVar14);
        }
        _swift_bridgeObjectRelease(puVar8);
        FUN_10016549c(&local_e8,pcVar2);
        _swift_bridgeObjectRelease(local_e0);
        (**(code **)(lVar26 + 8))(contentsOf.unknown,UVar11.unknown);
      }
      else {
        uVar21 = 0;
        DVar13 = Foundation::Data::_init(contentsOf);
        _swift_bridgeObjectRelease(pNVar23);
        FUN_1001037b4(DVar13.unknown,uVar21);
        puVar15 = puVar17;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar16 = puVar17;
        if (((ulong)puVar15 & 1) == 0) {
          puVar16 = (undefined *)0x0;
          pNVar12 = (NSString *)&DAT_00000001;
          FUN_100105e98(0,*(long *)(puVar17 + 0x10) + 1);
          puVar25 = puVar17;
        }
        uVar35 = *(ulong *)(puVar16 + 0x10);
        puVar17 = puVar16;
        if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar35) {
          puVar17 = (undefined *)(ulong)(1 < *(ulong *)(puVar16 + 0x18));
          pNVar12 = (NSString *)&DAT_00000001;
          FUN_100105e98(puVar17,uVar35 + 1);
          puVar25 = puVar16;
        }
        *(ulong *)(puVar17 + 0x10) = uVar35 + 1;
        *(undefined **)(puVar17 + uVar35 * 0x10 + 0x20) = DVar13.unknown;
        *(undefined8 *)(puVar17 + uVar35 * 0x10 + 0x28) = uVar21;
        FUN_10003bf2c(DVar13.unknown,uVar21);
        lVar30 = *(long *)(puVar17 + 0x10);
        (**(code **)(lVar26 + 8))(contentsOf.unknown,UVar11.unknown);
        pNVar23 = pNVar12;
        if (lVar30 == local_140) break;
      }
      uVar31 = uVar31 + 1;
      puVar34 = puVar34 + 2;
      UVar22.unknown = pNVar23;
    } while (uVar27 != uVar31);
    _swift_bridgeObjectRelease(lVar32);
    lVar30 = local_148;
  }
  puVar25 = local_70;
  if (*(long *)(local_70 + 0x10) == 0) goto LAB_1001285ec;
  objc_stub::lock(local_168);
  _swift_beginAccess(unaff_x20 + lVar30,local_a0,0x21,0);
  uVar27 = *(ulong *)(unaff_x20 + lVar30);
  puVar33 = (ulong *)(uVar27 + 0x10);
  uVar31 = *puVar33;
  if (uVar31 == 0) {
    uVar35 = 0;
    uVar31 = 0;
  }
  else {
    uVar35 = 0;
    do {
      if (*(long *)(puVar25 + 0x10) != 0) {
        pSVar1 = (String *)(uVar27 + 0x20 + uVar35 * 0x10);
        pcVar2 = pSVar1->str;
        puVar15 = pSVar1->bridgeObject;
        SVar36 = *pSVar1;
        Swift::Hasher::init(*(__int64 *)(puVar25 + 0x28));
        _swift_bridgeObjectRetain(puVar15);
        _swift_bridgeObjectRetain(puVar25);
        HVar18.unknown = (undefined *)&local_e8;
        Swift::String::hash(HVar18,SVar36);
        uVar19 = Swift::Hasher::_finalize(HVar18);
        uVar28 = -1L << ((ulong)(byte)puVar25[0x20] & 0x3f);
        uVar19 = uVar19 & (uVar28 ^ 0xffffffffffffffff);
        if ((*(ulong *)(puVar25 + (uVar19 >> 6) * 8 + 0x38) >> (uVar19 & 0x3f) & 1) != 0) {
          do {
            puVar34 = (undefined8 *)(*(long *)(puVar25 + 0x30) + uVar19 * 0x10);
            _Var3.unknown = (undefined *)*puVar34;
            _Var4.unknown = (undefined *)puVar34[1];
            if ((_Var3.unknown == pcVar2 && _Var4.unknown == puVar15) ||
               (bVar10 = Swift::_stringCompareWithSmolCheck
                                   (_Var3,_Var4,(_StringComparisonResult)(__int8)pcVar2), bVar10)) {
              _swift_bridgeObjectRelease(puVar15);
              _swift_bridgeObjectRelease(puVar25);
              uVar31 = uVar35 + 1;
              uVar19 = *puVar33;
              if (uVar31 != uVar19) goto LAB_100128654;
              goto LAB_100128594;
            }
            uVar19 = uVar19 + 1 & ~uVar28;
          } while ((*(ulong *)(puVar25 + (uVar19 >> 6) * 8 + 0x38) >> (uVar19 & 0x3f) & 1) != 0);
        }
        _swift_bridgeObjectRelease(puVar15);
        _swift_bridgeObjectRelease(puVar25);
      }
      uVar35 = uVar35 + 1;
    } while (uVar35 != uVar31);
    uVar35 = *puVar33;
    uVar31 = uVar35;
  }
LAB_1001285a8:
  FUN_10012ae44(unaff_x20,uVar35,uVar31,FUN_10010540c,FUN_10012ad88);
  _swift_endAccess(local_a0);
  objc_stub::unlock(local_168);
LAB_1001285ec:
  _swift_bridgeObjectRelease(puVar25);
  return puVar17;
LAB_100128654:
  do {
    if (uVar19 <= uVar31) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1001289ec);
      (*pcVar9)();
    }
    pSVar1 = (String *)(uVar27 + 0x20 + uVar31 * 0x10);
    if (*(long *)(puVar25 + 0x10) != 0) {
      pcVar2 = pSVar1->str;
      puVar15 = pSVar1->bridgeObject;
      SVar36 = *pSVar1;
      Swift::Hasher::init(*(__int64 *)(puVar25 + 0x28));
      _swift_bridgeObjectRetain(puVar25);
      _swift_bridgeObjectRetain(puVar15);
      HVar18.unknown = (undefined *)&local_e8;
      Swift::String::hash(HVar18,SVar36);
      uVar19 = Swift::Hasher::_finalize(HVar18);
      uVar28 = -1L << ((ulong)(byte)puVar25[0x20] & 0x3f);
      uVar19 = uVar19 & (uVar28 ^ 0xffffffffffffffff);
      if ((*(ulong *)(puVar25 + (uVar19 >> 6) * 8 + 0x38) >> (uVar19 & 0x3f) & 1) != 0) {
        do {
          puVar34 = (undefined8 *)(*(long *)(puVar25 + 0x30) + uVar19 * 0x10);
          _Var3.unknown = (undefined *)*puVar34;
          _Var4.unknown = (undefined *)puVar34[1];
          if ((_Var3.unknown == pcVar2 && _Var4.unknown == puVar15) ||
             (bVar10 = Swift::_stringCompareWithSmolCheck
                                 (_Var3,_Var4,(_StringComparisonResult)(__int8)pcVar2), bVar10)) {
            _swift_bridgeObjectRelease(puVar15);
            _swift_bridgeObjectRelease(puVar25);
            goto LAB_100128640;
          }
          uVar19 = uVar19 + 1 & ~uVar28;
        } while ((*(ulong *)(puVar25 + (uVar19 >> 6) * 8 + 0x38) >> (uVar19 & 0x3f) & 1) != 0);
      }
      _swift_bridgeObjectRelease(puVar15);
      _swift_bridgeObjectRelease(puVar25);
    }
    if (uVar35 != uVar31) {
      if ((long)uVar35 < 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1001289f4);
        (*pcVar9)();
      }
      if (*puVar33 <= uVar35) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1001289f8);
        (*pcVar9)();
      }
      if ((long)*puVar33 <= (long)uVar31) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1001289fc);
        (*pcVar9)();
      }
      puVar34 = (undefined8 *)(uVar27 + 0x20 + uVar35 * 0x10);
      uVar21 = *puVar34;
      uVar5 = puVar34[1];
      pcVar2 = pSVar1->str;
      pvVar6 = pSVar1->bridgeObject;
      _swift_bridgeObjectRetain(uVar5);
      _swift_bridgeObjectRetain(pvVar6);
      uVar19 = uVar27;
      _swift_isUniquelyReferenced_nonNull_native();
      *(ulong *)(unaff_x20 + local_148) = uVar27;
      if ((uVar19 & 1) == 0) {
        FUN_100174960();
        *(ulong *)(unaff_x20 + local_148) = uVar27;
      }
      puVar34 = (undefined8 *)(uVar27 + 0x20 + uVar35 * 0x10);
      uVar20 = puVar34[1];
      *puVar34 = pcVar2;
      puVar34[1] = pvVar6;
      _swift_bridgeObjectRelease(uVar20);
      lVar30 = local_148;
      *(ulong *)(unaff_x20 + local_148) = uVar27;
      if (*(long *)(uVar27 + 0x10) <= (long)uVar31) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x100128a00);
        (*pcVar9)();
      }
      puVar34 = (undefined8 *)(uVar27 + 0x20 + uVar31 * 0x10);
      uVar20 = puVar34[1];
      *puVar34 = uVar21;
      puVar34[1] = uVar5;
      _swift_bridgeObjectRelease(uVar20);
      *(ulong *)(unaff_x20 + lVar30) = uVar27;
    }
    bVar10 = SCARRY8(uVar35,1);
    uVar35 = uVar35 + 1;
    if (bVar10) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1001289f0);
      (*pcVar9)();
    }
LAB_100128640:
    uVar31 = uVar31 + 1;
    puVar33 = (ulong *)(uVar27 + 0x10);
    uVar19 = *puVar33;
  } while (uVar31 != uVar19);
LAB_100128594:
  if ((long)uVar31 < (long)uVar35) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x1001285a0);
    (*pcVar9)();
  }
  goto LAB_1001285a8;
}



/* Address: 0x100128a00 | FUN_100128a00 */

void FUN_100128a00(long param_1)

{
  String SVar1;
  long lVar2;
  code *pcVar3;
  URL UVar4;
  ulong uVar5;
  URL UVar6;
  long extraout_x8;
  long lVar7;
  long unaff_x20;
  ulong uVar8;
  long lVar9;
  ID self;
  long lVar10;
  undefined8 local_a0;
  long local_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  UVar4 = Foundation::URL::typeMetadataAccessor();
  local_98 = *(long *)(UVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_98 + 0x40));
  lVar2 = _TtC7PostHog22PostHogFileBackedQueue::items;
  lVar9 = (long)&local_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100128ba8);
    (*pcVar3)();
  }
  if (param_1 != 0) {
    local_a0 = _TtC7PostHog22PostHogFileBackedQueue::queue;
    self = *(ID *)(unaff_x20 + _TtC7PostHog22PostHogFileBackedQueue::itemsLock);
    _swift_beginAccess(unaff_x20 + _TtC7PostHog22PostHogFileBackedQueue::items,auStack_78,0,0);
    do {
      objc_stub::lock(self);
      uVar8 = *(ulong *)(unaff_x20 + lVar2);
      if (*(long *)(uVar8 + 0x10) == 0) {
        objc_stub::unlock(self);
        return;
      }
      _swift_beginAccess(unaff_x20 + lVar2,auStack_90,0x21,0);
      uVar5 = uVar8;
      _swift_isUniquelyReferenced_nonNull_native();
      *(ulong *)(unaff_x20 + lVar2) = uVar8;
      if ((uVar5 & 1) == 0) {
        FUN_100174960();
        *(ulong *)(unaff_x20 + lVar2) = uVar8;
        lVar7 = *(long *)(uVar8 + 0x10);
      }
      else {
        lVar7 = *(long *)(uVar8 + 0x10);
      }
      if (lVar7 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100128b7c);
        (*pcVar3)();
      }
      lVar10 = *(long *)(uVar8 + 0x28);
      SVar1 = *(String *)(uVar8 + 0x20);
      UVar6.unknown = (undefined *)((lVar7 + -1) * 0x10);
      _memmove((String *)(uVar8 + 0x20),(void *)(uVar8 + 0x30),(size_t)UVar6.unknown);
      *(long *)(uVar8 + 0x10) = lVar7 + -1;
      *(ulong *)(unaff_x20 + lVar2) = uVar8;
      _swift_endAccess(auStack_90);
      objc_stub::unlock(self);
      if (lVar10 == 0) {
        return;
      }
      Foundation::URL::appendingPathComponent(SVar1,UVar6);
      _swift_bridgeObjectRelease(lVar10);
      FUN_1001723c8(lVar9);
      (**(code **)(local_98 + 8))(lVar9,UVar4.unknown);
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}



/* Address: 0x100128ba8 | FUN_100128ba8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100128ba8(void)

{
  long lVar1;
  URL UVar2;
  long unaff_x20;
  
  lVar1 = _TtC7PostHog22PostHogFileBackedQueue::queue;
  UVar2 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar2.unknown + -8) + 8))(unaff_x20 + lVar1,UVar2.unknown);
  _swift_bridgeObjectRelease
            (*(undefined8 *)(unaff_x20 + _TtC7PostHog22PostHogFileBackedQueue::items));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100128c14 | FUN_100128c14 */

void FUN_100128c14(void)

{
  FUN_100128c1c(0);
  return;
}



/* Address: 0x100128c1c | FUN_100128c1c */

void FUN_100128c1c(undefined8 param_1)

{
  if (DAT_100fb0120 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100ca4260);
  return;
}



/* Address: 0x100128c54 | FUN_100128c54 */

undefined1  [16] FUN_100128c54(URL param_1,ulong param_2)

{
  URL UVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  long local_38;
  undefined *puStack_30;
  undefined *local_28;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  if (param_2 < 0x40) {
    local_38 = *(long *)(UVar1.unknown + -8) + 0x40;
    puStack_30 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40;
    local_28 = PTR___value_witness_table_for_Builtin_UnknownObject_100eabd30 + 0x40;
    uVar2 = 0x100;
    _swift_updateClassMetadata2(param_1.unknown,0x100,3,&local_38,param_1.unknown + 0x50);
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



/* Address: 0x100128cdc | FUN_100128cdc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100129138) */

bool FUN_100128cdc(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  undefined *puVar2;
  Date DVar3;
  undefined *puVar4;
  URLResourceValues UVar5;
  Date DVar6;
  Dictionary<NSURLResourceKey,Foundation_URLResourceValues_allValues_getter_:_[__C_NSURLResourceKey_:_Any]>
  DVar7;
  Date DVar8;
  uint uVar9;
  URL UVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  Date DVar11;
  code *pcVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  Date DVar17;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long unaff_x21;
  long lVar18;
  long lVar19;
  code *pcVar20;
  long lVar21;
  long local_150;
  long local_148;
  undefined *local_140;
  undefined1 auStack_e0 [40];
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long local_78;
  
  local_140 = (undefined *)Foundation::URLResourceValues::typeMetadataAccessor();
  local_148 = *(long *)(local_140 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_148 + 0x40));
  lVar13 = (long)&local_150 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar18 = lVar13 - extraout_x12;
  puVar2 = &DAT_100faf508;
  FUN_1000f7830(&DAT_100faf508,&DAT_100c2e2e0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar2 + -8) + 0x40));
  puVar14 = (undefined *)(lVar18 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar15 = (long)puVar14 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar16 = (undefined *)(lVar15 - extraout_x12_01);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar21 = (long)puVar16 - extraout_x12_02;
  DVar3 = Foundation::Date::typeMetadataAccessor();
  lVar19 = *(long *)(DVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar19 + 0x40));
  DVar17.unknown = (undefined *)(lVar21 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  DVar11.unknown = DVar17.unknown + -extraout_x12_03;
  puVar2 = &DAT_100fb0230;
  FUN_1000f7830(&DAT_100fb0230,&DAT_100c2ea70);
  UVar10.unknown = auStack_b8;
  puVar4 = puVar2;
  _swift_initStackObject();
  *(undefined8 *)(puVar4 + 0x18) = 2;
  *(undefined8 *)(puVar4 + 0x10) = 1;
  *(long *)(puVar4 + 0x20) = param_3;
  UVar5.unknown = puVar4;
  FUN_100129cb0();
  _swift_setDeallocating(puVar4);
  FUN_10012b230(puVar4 + 0x20);
  Foundation::URL::_resourceValues((Set<NSURLResourceKey>)UVar5.unknown,UVar10);
  if (unaff_x21 != 0) {
    _swift_errorRelease(unaff_x21);
    _swift_bridgeObjectRelease(UVar5.unknown);
    pcVar12 = *(code **)(lVar19 + 0x38);
    (*pcVar12)(lVar21,1,1,DVar3.unknown);
    goto LAB_100129048;
  }
  local_150 = lVar21;
  _swift_bridgeObjectRelease();
  DVar7 = Foundation::URLResourceValues::_get_allValues(UVar5);
  puVar4 = local_140;
  (**(code **)(local_148 + 8))(lVar18);
  if (*(long *)(DVar7.unknown + 0x10) == 0) {
LAB_100128fb0:
    uStack_88 = 0;
    local_90 = 0;
    local_78 = 0;
    uStack_80 = 0;
  }
  else {
    _swift_bridgeObjectRetain(DVar7.unknown);
    lVar21 = param_3;
    FUN_1000712c0(param_3);
    if (((ulong)puVar4 & 1) == 0) {
      _swift_bridgeObjectRelease(DVar7.unknown);
      goto LAB_100128fb0;
    }
    FUN_10000cbfc(*(long *)(DVar7.unknown + 0x38) + lVar21 * 0x20,&local_90);
    _swift_bridgeObjectRelease(DVar7.unknown);
  }
  _swift_bridgeObjectRelease(DVar7.unknown);
  lVar21 = local_150;
  if (local_78 == 0) {
    FUN_1000fb4c4(&local_90,&DAT_100fae668,&DAT_100c2e4a0);
    pcVar12 = *(code **)(lVar19 + 0x38);
    uVar9 = 1;
    lVar21 = local_150;
  }
  else {
    lVar18 = local_150;
    _swift_dynamicCast(local_150,&local_90,PTR___type_metadata_for_Any_100eae0c0 + 8,DVar3.unknown,6
                      );
    pcVar12 = *(code **)(lVar19 + 0x38);
    uVar9 = (uint)lVar18 ^ 1;
  }
  (*pcVar12)(lVar21,uVar9,1,DVar3.unknown);
LAB_100129048:
  FUN_10012b26c(lVar21,puVar16);
  pcVar20 = *(code **)(lVar19 + 0x30);
  DVar6.unknown = puVar16;
  (*pcVar20)(puVar16,1,DVar3.unknown);
  if ((int)DVar6.unknown == 1) {
    Foundation::Date::get_distantPast(DVar6);
    puVar4 = puVar16;
    (*pcVar20)(puVar16,1,DVar3.unknown);
    if ((int)puVar4 != 1) {
      FUN_1000fb4c4(puVar16,&DAT_100faf508,&DAT_100c2e2e0);
    }
  }
  else {
    (**(code **)(lVar19 + 0x20))(DVar11.unknown,puVar16,DVar3.unknown);
  }
  UVar10.unknown = auStack_e0;
  _swift_initStackObject();
  *(undefined8 *)(puVar2 + 0x18) = 2;
  *(undefined8 *)(puVar2 + 0x10) = 1;
  *(long *)(puVar2 + 0x20) = param_3;
  UVar5.unknown = puVar2;
  FUN_100129cb0();
  _swift_setDeallocating(puVar2);
  FUN_10012b230(puVar2 + 0x20);
  Foundation::URL::_resourceValues((Set<NSURLResourceKey>)UVar5.unknown,UVar10);
  _swift_bridgeObjectRelease();
  DVar7 = Foundation::URLResourceValues::_get_allValues(UVar5);
  puVar2 = local_140;
  (**(code **)(local_148 + 8))(lVar13);
  if (*(long *)(DVar7.unknown + 0x10) == 0) {
    uStack_88 = 0;
    local_90 = 0;
    local_78 = 0;
    uStack_80 = 0;
  }
  else {
    _swift_bridgeObjectRetain(DVar7.unknown);
    FUN_1000712c0(param_3);
    if (((ulong)puVar2 & 1) == 0) {
      _swift_bridgeObjectRelease(DVar7.unknown);
      uStack_88 = 0;
      local_90 = 0;
      local_78 = 0;
      uStack_80 = 0;
    }
    else {
      FUN_10000cbfc(*(long *)(DVar7.unknown + 0x38) + param_3 * 0x20,&local_90);
      _swift_bridgeObjectRelease(DVar7.unknown);
    }
  }
  _swift_bridgeObjectRelease(DVar7.unknown);
  if (local_78 == 0) {
    FUN_1000fb4c4(&local_90,&DAT_100fae668,&DAT_100c2e4a0);
    uVar9 = 1;
  }
  else {
    lVar21 = lVar15;
    _swift_dynamicCast(lVar15,&local_90,PTR___type_metadata_for_Any_100eae0c0 + 8,DVar3.unknown,6);
    uVar9 = (uint)lVar21 ^ 1;
  }
  (*pcVar12)(lVar15,uVar9,1,DVar3.unknown);
  FUN_10012b26c(lVar15,puVar14);
  DVar8.unknown = puVar14;
  (*pcVar20)(puVar14,1,DVar3.unknown);
  DVar6 = DVar3;
  if ((int)DVar8.unknown == 1) {
    Foundation::Date::get_distantPast(DVar8);
    puVar2 = puVar14;
    (*pcVar20)(puVar14,1);
    if ((int)puVar2 != 1) {
      DVar6.unknown = &DAT_100c2e2e0;
      FUN_1000fb4c4(puVar14,&DAT_100faf508);
    }
  }
  else {
    (**(code **)(lVar19 + 0x20))(DVar17.unknown,puVar14);
  }
  bVar1 = Foundation::Date::<_infix(DVar11,DVar17,DVar6);
  pcVar12 = *(code **)(lVar19 + 8);
  (*pcVar12)(DVar17.unknown,DVar3.unknown);
  (*pcVar12)(DVar11.unknown,DVar3.unknown);
  return bVar1;
}



/* Address: 0x10012934c | FUN_10012934c */

undefined * FUN_10012934c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10012944c);
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
    puVar3 = &DAT_100fb0240;
    FUN_1000f7830(&DAT_100fb0240,&DAT_100c2ea88);
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
    _memcpy(puVar1,puVar4,uVar6 << 4);
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



/* Address: 0x10012944c | FUN_10012944c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10012944c(ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  URL UVar4;
  ulong uVar5;
  long extraout_x8;
  long lVar6;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x13;
  ulong extraout_x14;
  ulong uVar7;
  long unaff_x21;
  ulong uVar8;
  code *pcVar9;
  long lVar10;
  code *pcVar11;
  ulong uVar12;
  undefined1 auStack_d0 [8];
  ulong local_c8;
  ulong local_c0;
  ulong local_b8;
  code *local_b0;
  code *local_a8;
  ulong local_a0;
  ulong local_98;
  long local_90;
  ulong local_88;
  long local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  ulong local_58;
  
  local_78 = param_3;
  UVar4 = Foundation::URL::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(UVar4.unknown + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar6 = (long)(auStack_d0 + (-extraout_x12 - (extraout_x8 + 0xfU & 0xfffffffffffffff0))) -
          extraout_x12_00;
  local_90 = lVar6;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  uVar12 = lVar6 - extraout_x12_01;
  local_88 = *(ulong *)(extraout_x13 + 0x48);
  if (local_88 == 0) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x100129a10);
    (*pcVar11)();
  }
  if ((param_2 - param_1 == -0x8000000000000000) && (local_88 == 0xffffffffffffffff)) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x100129a14);
    (*pcVar11)();
  }
  if ((local_78 - param_2 == -0x8000000000000000) && (local_88 == 0xffffffffffffffff)) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x100129a18);
    (*pcVar11)();
  }
  lVar6 = 0;
  if (local_88 != 0) {
    lVar6 = (long)(param_2 - param_1) / (long)local_88;
  }
  lVar10 = 0;
  if (local_88 != 0) {
    lVar10 = (long)(local_78 - param_2) / (long)local_88;
  }
  local_80 = extraout_x13;
  local_68 = param_4;
  local_58 = param_1;
  if (lVar6 < lVar10) {
    lVar10 = lVar6 * local_88;
    local_98 = param_5;
    if ((param_4 < param_1) || (param_1 + lVar10 <= param_4)) {
      _swift_arrayInitWithTakeFrontToBack(param_4,param_1,lVar6,UVar4.unknown);
    }
    else if (param_4 != param_1) {
      _swift_arrayInitWithTakeBackToFront(param_4,param_1,lVar6,UVar4.unknown);
    }
    local_a0 = param_4 + lVar10;
    local_70 = local_a0;
    if (0 < lVar10 && param_2 < local_78) {
      local_a8 = *(code **)(local_80 + 0x10);
      uVar8 = local_98;
      while( true ) {
        pcVar11 = local_a8;
        (*local_a8)(uVar12,param_2,UVar4.unknown);
        lVar6 = local_90;
        (*pcVar11)(local_90,param_4,UVar4.unknown);
        uVar5 = uVar12;
        FUN_100128cdc(uVar12,lVar6,uVar8);
        if (unaff_x21 != 0) break;
        pcVar11 = *(code **)(local_80 + 8);
        (*pcVar11)(lVar6,UVar4.unknown);
        (*pcVar11)(uVar12,UVar4.unknown);
        uVar2 = local_88;
        uVar8 = local_98;
        if ((uVar5 & 1) == 0) {
          uVar7 = param_4 + local_88;
          uVar5 = param_2;
          uVar3 = uVar7;
          if ((param_1 < param_4) || (uVar7 <= param_1)) {
            _swift_arrayInitWithTakeFrontToBack(param_1,param_4,1,UVar4.unknown);
            uVar8 = local_98;
          }
          else if (param_1 != param_4) {
            _swift_arrayInitWithTakeBackToFront(param_1,param_4,1,UVar4.unknown);
            uVar8 = local_98;
          }
        }
        else {
          uVar5 = param_2 + local_88;
          uVar7 = param_4;
          if ((param_1 < param_2) || (uVar5 <= param_1)) {
            _swift_arrayInitWithTakeFrontToBack(param_1,param_2,1,UVar4.unknown);
            uVar8 = local_98;
            uVar3 = local_68;
          }
          else {
            uVar3 = local_68;
            if (param_1 != param_2) {
              _swift_arrayInitWithTakeBackToFront(param_1,param_2,1,UVar4.unknown);
              uVar3 = local_68;
            }
          }
        }
        local_68 = uVar3;
        param_1 = param_1 + uVar2;
        local_58 = param_1;
        if ((local_a0 <= uVar7) || (param_2 = uVar5, param_4 = uVar7, local_78 <= uVar5))
        goto LAB_1001299cc;
      }
      pcVar11 = *(code **)(local_80 + 8);
      (*pcVar11)(lVar6,UVar4.unknown);
      (*pcVar11)(uVar12,UVar4.unknown);
    }
  }
  else {
    lVar6 = lVar10 * local_88;
    local_a0 = extraout_x14;
    if ((param_4 < param_2) || (param_2 + lVar6 <= param_4)) {
      _swift_arrayInitWithTakeFrontToBack(param_4,param_2,lVar10,UVar4.unknown);
    }
    else if (param_4 != param_2) {
      _swift_arrayInitWithTakeBackToFront(param_4,param_2,lVar10,UVar4.unknown);
    }
    local_70 = param_4 + lVar6;
    local_58 = param_2;
    if (0 < lVar6 && param_1 < param_2) {
      lVar6 = -local_88;
      local_b0 = *(code **)(local_80 + 0x10);
      local_88 = local_70;
      local_c8 = param_1;
      local_b8 = param_4;
      local_a8 = (code *)(auStack_d0 + (-extraout_x12 - (extraout_x8 + 0xfU & 0xfffffffffffffff0)));
      do {
        local_98 = param_2 + lVar6;
        uVar12 = local_88;
        local_c0 = param_2;
        while( true ) {
          uVar5 = local_78;
          pcVar1 = local_a8;
          pcVar11 = local_b0;
          uVar8 = uVar12 + lVar6;
          local_88 = uVar12;
          (*local_b0)(local_a8,uVar8,UVar4.unknown);
          uVar12 = local_a0;
          (*pcVar11)(local_a0,local_98,UVar4.unknown);
          pcVar11 = pcVar1;
          FUN_100128cdc(pcVar1,uVar12,param_5);
          if (unaff_x21 != 0) {
            pcVar11 = *(code **)(local_80 + 8);
            (*pcVar11)(uVar12,UVar4.unknown);
            (*pcVar11)(pcVar1,UVar4.unknown);
            goto LAB_1001299cc;
          }
          local_78 = uVar5 + lVar6;
          pcVar9 = *(code **)(local_80 + 8);
          local_90 = unaff_x21;
          (*pcVar9)(uVar12,UVar4.unknown);
          (*pcVar9)(pcVar1,UVar4.unknown);
          uVar12 = local_98;
          if (((ulong)pcVar11 & 1) != 0) break;
          local_70 = uVar8;
          if ((uVar5 < local_88) || (local_88 <= local_78)) {
            _swift_arrayInitWithTakeFrontToBack(local_78,uVar8,1,UVar4.unknown);
          }
          else if (uVar5 != local_88) {
            _swift_arrayInitWithTakeBackToFront(local_78,uVar8,1,UVar4.unknown);
          }
          unaff_x21 = local_90;
          uVar12 = uVar8;
          if (uVar8 <= local_b8) goto LAB_1001299cc;
        }
        if ((uVar5 < local_c0) || (local_c0 <= local_78)) {
          _swift_arrayInitWithTakeFrontToBack(local_78,local_98,1,UVar4.unknown);
        }
        else if (uVar5 != local_c0) {
          _swift_arrayInitWithTakeBackToFront(local_78,local_98,1,UVar4.unknown);
        }
        local_58 = uVar12;
      } while ((local_b8 < local_88) &&
              (param_2 = local_98, unaff_x21 = local_90, local_c8 < local_98));
    }
  }
LAB_1001299cc:
  FUN_100129aa0(&local_58,&local_68,&local_70);
  return 1;
}



/* Address: 0x100129a18 | FUN_100129a18 */

undefined1  [16] FUN_100129a18(ulong param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  ulong uVar4;
  undefined1 (*pauVar5) [16];
  ulong uVar6;
  ulong *unaff_x20;
  long lVar7;
  
  uVar6 = *unaff_x20;
  uVar4 = uVar6;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar4 & 1) == 0) {
    FUN_100129b50();
  }
  if (param_1 < *(ulong *)(uVar6 + 0x10)) {
    lVar7 = *(ulong *)(uVar6 + 0x10) - 1;
    lVar1 = uVar6 + param_1 * 0x10;
    pauVar5 = (undefined1 (*) [16])(lVar1 + 0x20);
    auVar2 = *pauVar5;
    _memmove(pauVar5,(void *)(lVar1 + 0x30),(lVar7 - param_1) * 0x10);
    *(long *)(uVar6 + 0x10) = lVar7;
    *unaff_x20 = uVar6;
    return auVar2;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100129aa0);
  (*pcVar3)();
}



/* Address: 0x100129aa0 | FUN_100129aa0 */

void FUN_100129aa0(ulong *param_1,ulong *param_2,long *param_3)

{
  long lVar1;
  code *pcVar2;
  URL UVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  uVar6 = *param_1;
  uVar5 = *param_2;
  lVar7 = *param_3;
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar4 = *(long *)(*(long *)(UVar3.unknown + -8) + 0x48);
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100129b4c);
    (*pcVar2)();
  }
  if (lVar7 - uVar5 != -0x8000000000000000 || lVar4 != -1) {
    lVar1 = 0;
    if (lVar4 != 0) {
      lVar1 = (long)(lVar7 - uVar5) / lVar4;
    }
    if ((uVar5 <= uVar6) && (uVar6 < uVar5 + lVar1 * lVar4)) {
      if (uVar6 != uVar5) {
        _swift_arrayInitWithTakeBackToFront(uVar6,uVar5);
        return;
      }
      return;
    }
    _swift_arrayInitWithTakeFrontToBack(uVar6,uVar5,lVar1,UVar3.unknown);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100129b50);
  (*pcVar2)();
}



/* Address: 0x100129b50 | FUN_100129b50 */

void FUN_100129b50(long param_1)

{
  FUN_10012934c(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x100129b64 | FUN_100129b64 */

void FUN_100129b64(void)

{
  URL UVar1;
  undefined *puVar2;
  
  if (DAT_100fb0228 != (undefined *)0x0) {
    return;
  }
  UVar1 = Foundation::URL::typeMetadataAccessor();
  puVar2 = PTR_Foundation__Foundation__URL_>Swift__CustomStringConvertible_100ea71d8;
  _swift_getWitnessTable
            (PTR_Foundation__Foundation__URL_>Swift__CustomStringConvertible_100ea71d8,UVar1.unknown
            );
  DAT_100fb0228 = puVar2;
  return;
}



/* Address: 0x100129ba8 | FUN_100129ba8 */

void FUN_100129ba8(long param_1)

{
  FUN_10010fd88(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x100129bbc | FUN_100129bbc */

void FUN_100129bbc(long param_1)

{
  FUN_10010ffb8(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x100129bd0 | FUN_100129bd0 */

void FUN_100129bd0(long param_1,long param_2,long param_3)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined *puVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar4 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100129c8c);
    (*pcVar6)();
  }
  lVar8 = *unaff_x20;
  lVar1 = lVar8 + 0x20 + param_1 * 0x10;
  puVar7 = &DAT_100faf618;
  FUN_1000f7830(&DAT_100faf618,&DAT_100c2ea90);
  _swift_arrayDestroy(lVar1,lVar4,puVar7);
  lVar5 = param_3 - lVar4;
  if (SBORROW8(param_3,lVar4)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100129c90);
    (*pcVar6)();
  }
  if (lVar5 != 0) {
    lVar4 = *(long *)(lVar8 + 0x10) - param_2;
    if (SBORROW8(*(long *)(lVar8 + 0x10),param_2)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100129c94);
      (*pcVar6)();
    }
    pvVar2 = (void *)(lVar1 + param_3 * 0x10);
    pvVar3 = (void *)(lVar8 + 0x20 + param_2 * 0x10);
    if (pvVar2 != pvVar3 || (void *)((long)pvVar3 + lVar4 * 0x10) <= pvVar2) {
      _memmove(pvVar2,pvVar3,lVar4 * 0x10);
    }
    if (SCARRY8(*(long *)(lVar8 + 0x10),lVar5)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100129c98);
      (*pcVar6)();
    }
    *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + lVar5;
  }
  if (param_3 < 1) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x100129c9c);
  (*pcVar6)();
}



/* Address: 0x100129c9c | FUN_100129c9c */

void FUN_100129c9c(undefined8 param_1,undefined8 param_2)

{
  FUN_10012ae44(param_1,param_2,FUN_100105994,FUN_100129bd0);
  return;
}



/* Address: 0x100129cb0 | FUN_100129cb0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_100129cb0(long param_1)

{
  code *pcVar1;
  bool bVar2;
  _SetStorage *this;
  undefined *puVar3;
  Hasher into;
  ulong uVar4;
  _StringGuts _Var5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  __int64 _seed;
  undefined *capacity;
  undefined8 uVar10;
  undefined *puVar11;
  String SVar12;
  String SVar13;
  undefined1 auStack_a8 [72];
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptySetSingleton_100eae0e8;
  if (capacity != (undefined *)0x0) {
    this = (_SetStorage *)&DAT_100fb0238;
    FUN_1000f7830(&DAT_100fb0238,&DAT_100c2ea80);
    puVar3 = capacity;
    Swift::_SetStorage::_allocate(this,(__int64)capacity);
    puVar11 = (undefined *)0x0;
    do {
      uVar10 = *(undefined8 *)(param_1 + 0x20 + (long)puVar11 * 8);
      _seed = *(__int64 *)(puVar3 + 0x28);
      SVar12 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      Swift::Hasher::init(_seed);
      into.unknown = auStack_a8;
      Swift::String::hash(into,SVar12);
      uVar4 = Swift::Hasher::_finalize(into);
      _swift_bridgeObjectRelease(SVar12.bridgeObject);
      uVar9 = -1L << ((ulong)(byte)puVar3[0x20] & 0x3f);
      uVar4 = uVar4 & (uVar9 ^ 0xffffffffffffffff);
      uVar6 = uVar4 >> 6;
      uVar7 = *(ulong *)(puVar3 + uVar6 * 8 + 0x38);
      uVar8 = 1L << (uVar4 & 0x3f);
      if ((uVar8 & uVar7) != 0) {
        do {
          SVar12 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          _Var5.unknown = SVar12.bridgeObject;
          SVar13 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          if (SVar12 == SVar13) {
            _swift_bridgeObjectRelease(_Var5.unknown);
            _swift_bridgeObjectRelease(SVar13.bridgeObject);
            goto LAB_100129d38;
          }
          bVar2 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)SVar12.str,_Var5,
                             (_StringComparisonResult)(__int8)SVar13.str);
          _swift_bridgeObjectRelease(_Var5.unknown);
          _swift_bridgeObjectRelease(SVar13.bridgeObject);
          if (bVar2) goto LAB_100129d38;
          uVar4 = uVar4 + 1 & ~uVar9;
          uVar6 = uVar4 >> 6;
          uVar7 = *(ulong *)(puVar3 + uVar6 * 8 + 0x38);
          uVar8 = 1L << (uVar4 & 0x3f);
        } while ((uVar8 & uVar7) != 0);
      }
      *(ulong *)(puVar3 + uVar6 * 8 + 0x38) = uVar8 | uVar7;
      *(undefined8 *)(*(long *)(puVar3 + 0x30) + uVar4 * 8) = uVar10;
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100129ea4);
        (*pcVar1)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
LAB_100129d38:
      puVar11 = puVar11 + 1;
    } while (puVar11 != capacity);
  }
  return puVar3;
}



/* Address: 0x100129ea4 | FUN_100129ea4 */

void FUN_100129ea4(long param_1,long param_2,long param_3,long *param_4,undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  URL UVar4;
  ulong uVar5;
  long extraout_x8;
  long lVar6;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x21;
  long lVar7;
  code *pcVar8;
  long lVar9;
  long local_d0;
  long local_c8;
  long local_c0;
  long lStack_b8;
  long local_b0;
  long lStack_a8;
  long local_a0;
  long local_98;
  long local_90;
  code *local_88;
  ulong local_80;
  long local_78;
  undefined8 local_70;
  long local_68;
  
  local_70 = param_5;
  UVar4 = Foundation::URL::typeMetadataAccessor();
  lVar7 = *(long *)(UVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar7 + 0x40));
  lVar6 = (long)&local_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_90 = lVar6;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar6 = lVar6 - extraout_x12;
  local_78 = lVar6;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_80 = lVar6 - extraout_x12_00;
  if (param_3 != param_2) {
    local_98 = *param_4;
    local_d0 = *(long *)(lVar7 + 0x48);
    local_88 = *(code **)(lVar7 + 0x10);
    lVar6 = local_98 + local_d0 * (param_3 + -1);
    local_a0 = -local_d0;
    local_68 = param_1 - param_3;
    lVar9 = local_98 + local_d0 * param_3;
    local_c8 = param_2;
    local_c0 = lVar9;
    lStack_b8 = local_68;
    local_b0 = lVar6;
    lStack_a8 = param_3;
LAB_100129fc4:
    do {
      uVar2 = local_80;
      pcVar8 = local_88;
      (*local_88)(local_80,lVar9,UVar4.unknown);
      lVar1 = local_78;
      (*pcVar8)(local_78,lVar6,UVar4.unknown);
      uVar5 = uVar2;
      FUN_100128cdc(uVar2,lVar1,local_70);
      pcVar8 = *(code **)(lVar7 + 8);
      (*pcVar8)(lVar1,UVar4.unknown);
      (*pcVar8)(uVar2,UVar4.unknown);
      lVar3 = local_68;
      lVar1 = local_90;
      if (unaff_x21 != 0) {
        return;
      }
      if ((uVar5 & 1) != 0) {
        if (local_98 == 0) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10012a0cc);
          (*pcVar8)();
        }
        pcVar8 = *(code **)(lVar7 + 0x20);
        (*pcVar8)(local_90,lVar9,UVar4.unknown);
        _swift_arrayInitWithTakeFrontToBack(lVar9,lVar6,1,UVar4.unknown);
        (*pcVar8)(lVar6,lVar1,UVar4.unknown);
        lVar6 = lVar6 + local_a0;
        lVar9 = lVar9 + local_a0;
        local_68 = lVar3 + 1;
        if (lVar3 != -1) goto LAB_100129fc4;
      }
      lStack_a8 = lStack_a8 + 1;
      lVar6 = local_b0 + local_d0;
      local_68 = lStack_b8 + -1;
      lVar9 = local_c0 + local_d0;
      local_c0 = lVar9;
      lStack_b8 = local_68;
      local_b0 = lVar6;
    } while (lStack_a8 != local_c8);
  }
  return;
}



/* Address: 0x10012a0cc | FUN_10012a0cc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10012a0cc(ulong *param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  long *plVar1;
  code *pcVar2;
  bool bVar3;
  URL UVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long unaff_x21;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  
  uVar13 = *param_1;
  if (1 < *(ulong *)(uVar13 + 0x10)) {
    uVar5 = uVar13;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar5 & 1) == 0) {
      FUN_100129b50();
    }
    *param_1 = uVar13;
    uVar5 = *(ulong *)(uVar13 + 0x10);
    do {
      lVar9 = uVar5 - 1;
      if (uVar5 < 4) {
        if (uVar5 == 3) {
          bVar3 = SBORROW8(*(long *)(uVar13 + 0x28),*(long *)(uVar13 + 0x20));
          lVar7 = *(long *)(uVar13 + 0x28) - *(long *)(uVar13 + 0x20);
          goto LAB_10012a1b0;
        }
        if (uVar5 < 2) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10012a368);
          (*pcVar2)();
        }
        plVar1 = (long *)(uVar13 + uVar5 * 0x10);
        lVar7 = *plVar1;
        lVar8 = plVar1[1];
        bVar3 = SBORROW8(lVar8,lVar7);
        lVar8 = lVar8 - lVar7;
LAB_10012a214:
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10012a358);
          (*pcVar2)();
        }
        lVar7 = uVar13 + lVar9 * 0x10;
        lVar6 = *(long *)(lVar7 + 0x20);
        lVar7 = *(long *)(lVar7 + 0x28);
        if (SBORROW8(lVar7,lVar6)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10012a360);
          (*pcVar2)();
        }
        lVar10 = lVar9;
        if (lVar7 - lVar6 < lVar8) {
          return 1;
        }
      }
      else {
        lVar8 = uVar13 + 0x20 + uVar5 * 0x10;
        if (SBORROW8(*(long *)(lVar8 + -0x38),*(long *)(lVar8 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10012a340);
          (*pcVar2)();
        }
        lVar7 = *(long *)(lVar8 + -0x28) - *(long *)(lVar8 + -0x30);
        if (SBORROW8(*(long *)(lVar8 + -0x28),*(long *)(lVar8 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10012a344);
          (*pcVar2)();
        }
        plVar1 = (long *)(uVar13 + uVar5 * 0x10);
        lVar6 = *plVar1;
        lVar10 = plVar1[1];
        lVar12 = lVar10 - lVar6;
        if (SBORROW8(lVar10,lVar6)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10012a34c);
          (*pcVar2)();
        }
        if (SCARRY8(lVar7,lVar12)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10012a354);
          (*pcVar2)();
        }
        bVar3 = false;
        if (lVar7 + lVar12 < *(long *)(lVar8 + -0x38) - *(long *)(lVar8 + -0x40)) {
LAB_10012a1b0:
          if (bVar3) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10012a348);
            (*pcVar2)();
          }
          plVar1 = (long *)(uVar13 + uVar5 * 0x10);
          lVar6 = *plVar1;
          lVar10 = plVar1[1];
          lVar8 = lVar10 - lVar6;
          if (SBORROW8(lVar10,lVar6)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10012a350);
            (*pcVar2)();
          }
          plVar1 = (long *)(uVar13 + 0x20 + lVar9 * 0x10);
          lVar6 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar6;
          if (SBORROW8(lVar10,lVar6)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10012a35c);
            (*pcVar2)();
          }
          if (SCARRY8(lVar8,lVar12)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10012a364);
            (*pcVar2)();
          }
          bVar3 = false;
          if (lVar8 + lVar12 < lVar7) goto LAB_10012a214;
          lVar10 = uVar5 - 2;
          if (lVar12 <= lVar7) {
            lVar10 = lVar9;
          }
        }
        else {
          plVar1 = (long *)(uVar13 + 0x20 + lVar9 * 0x10);
          lVar8 = *plVar1;
          lVar6 = plVar1[1];
          if (SBORROW8(lVar6,lVar8)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10012a36c);
            (*pcVar2)();
          }
          lVar10 = uVar5 - 2;
          if (lVar6 - lVar8 <= lVar7) {
            lVar10 = lVar9;
          }
        }
      }
      uVar11 = lVar10 - 1;
      if (uVar5 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10012a334);
        (*pcVar2)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10012a388);
        (*pcVar2)();
      }
      lVar12 = *(long *)(uVar13 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar13 + 0x20 + lVar10 * 0x10);
      lVar7 = *plVar1;
      lVar8 = plVar1[1];
      UVar4 = Foundation::URL::typeMetadataAccessor();
      lVar6 = *(long *)(*(long *)(UVar4.unknown + -8) + 0x48);
      FUN_10012944c(lVar9 + lVar6 * lVar12,lVar9 + lVar6 * lVar7,lVar9 + lVar6 * lVar8,param_2,
                    param_4);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar8 < lVar12) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10012a338);
        (*pcVar2)();
      }
      uVar5 = uVar13;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar5 & 1) == 0) {
        FUN_100129b50();
      }
      if (*(ulong *)(uVar13 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10012a33c);
        (*pcVar2)();
      }
      lVar9 = uVar13 + uVar11 * 0x10;
      *(long *)(lVar9 + 0x20) = lVar12;
      *(long *)(lVar9 + 0x28) = lVar8;
      *param_1 = uVar13;
      FUN_100129a18(lVar10);
      uVar13 = *param_1;
      uVar5 = *(ulong *)(uVar13 + 0x10);
    } while (1 < uVar5);
  }
  return 1;
}



/* Address: 0x10012a388 | FUN_10012a388 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Type propagation algorithm not settling */

void FUN_10012a388(long *param_1,undefined8 param_2,ulong *param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  URL UVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  code *pcVar11;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  code *pcVar12;
  code *pcVar13;
  long unaff_x21;
  code *pcVar14;
  code *pcVar15;
  code *pcVar16;
  code *pcVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long local_130;
  code *local_128;
  long local_120;
  long local_118;
  long local_110;
  long *local_108;
  code *local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  ulong *local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  ulong local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  ulong local_98;
  code *local_90;
  code *local_88;
  long local_80;
  long local_78;
  undefined *local_58;
  
  UVar4 = Foundation::URL::typeMetadataAccessor();
  local_78 = *(long *)(UVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_78 + 0x40));
  lVar9 = (long)&local_130 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_c0 = lVar9;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar9 = lVar9 - extraout_x12;
  local_b0 = lVar9;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  uVar10 = lVar9 - extraout_x12_00;
  local_b8 = uVar10;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar9 = uVar10 - extraout_x12_01;
  local_c8 = lVar9;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar9 = lVar9 - extraout_x12_02;
  local_a0 = lVar9;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar9 = lVar9 - extraout_x12_03;
  local_a8 = lVar9;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar9 = lVar9 - extraout_x12_04;
  local_f0 = lVar9;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_f8 = lVar9 - extraout_x12_05;
  local_58 = PTR___swiftEmptyArrayStorage_100eae0d8;
  pcVar14 = (code *)param_3[1];
  local_e0 = param_3;
  local_d8 = param_5;
  if (0 < (long)pcVar14) {
    pcVar16 = (code *)0x0;
    local_108 = param_1;
    local_e8 = param_4;
    local_80 = param_5;
    do {
      lVar18 = local_78;
      lVar9 = local_f8;
      pcVar11 = pcVar16 + 1;
      pcVar15 = pcVar16;
      if ((long)pcVar11 < (long)pcVar14) {
        uVar10 = *param_3;
        pcVar13 = *(code **)(local_78 + 0x48);
        pcVar15 = (code *)(uVar10 + (long)pcVar13 * (long)pcVar11);
        pcVar12 = *(code **)(local_78 + 0x10);
        local_90 = pcVar14;
        (*pcVar12)(local_f8,pcVar15,UVar4.unknown);
        lVar19 = local_f0;
        local_88 = pcVar13;
        (*pcVar12)(local_f0,uVar10 + (long)pcVar13 * (long)pcVar16,UVar4.unknown);
        lVar20 = lVar9;
        FUN_100128cdc(lVar9,lVar19,local_80);
        local_98 = CONCAT44(local_98._4_4_,(int)lVar20);
        pcVar14 = *(code **)(lVar18 + 8);
        (*pcVar14)(lVar19,UVar4.unknown);
        (*pcVar14)(lVar9,UVar4.unknown);
        if (unaff_x21 != 0) goto LAB_10012ab34;
        pcVar13 = (code *)(uVar10 + (long)local_88 * (long)(pcVar16 + 2));
        pcVar17 = pcVar16 + 2;
        local_100 = pcVar16;
        do {
          lVar9 = local_a8;
          pcVar11 = local_90;
          if (local_90 == pcVar17) break;
          (*pcVar12)(local_a8,pcVar13,UVar4.unknown);
          lVar18 = local_a0;
          (*pcVar12)(local_a0,pcVar15,UVar4.unknown);
          lVar19 = lVar9;
          FUN_100128cdc(lVar9,lVar18,local_80);
          (*pcVar14)(lVar18,UVar4.unknown);
          (*pcVar14)(lVar9,UVar4.unknown);
          pcVar13 = pcVar13 + (long)local_88;
          pcVar15 = pcVar15 + (long)local_88;
          pcVar11 = pcVar17;
          pcVar17 = pcVar17 + 1;
        } while (((uint)local_98 & 1) == ((uint)lVar19 & 1));
        param_3 = local_e0;
        pcVar15 = local_100;
        param_1 = local_108;
        if ((local_98 & 1) != 0) {
          if ((long)pcVar11 < (long)local_100) {
                    /* WARNING: Does not return */
            pcVar14 = (code *)SoftwareBreakpoint(1,0x10012ab88);
            (*pcVar14)();
          }
          if ((long)local_100 < (long)pcVar11) {
            lVar9 = 0;
            uVar10 = *local_e0;
            lVar18 = (long)local_88 * (long)(pcVar11 + -1);
            lVar19 = (long)pcVar11 * (long)local_88;
            pcVar16 = (code *)((long)local_100 * (long)local_88);
            pcVar12 = local_88;
            pcVar14 = local_100;
            do {
              if (pcVar14 != pcVar11 + lVar9 + -1) {
                if (uVar10 == 0) {
                    /* WARNING: Does not return */
                  pcVar14 = (code *)SoftwareBreakpoint(1,0x10012abd0);
                  (*pcVar14)();
                }
                pcVar15 = pcVar16 + uVar10;
                local_90 = *(code **)(local_78 + 0x20);
                (*local_90)(local_c8,pcVar15,UVar4.unknown);
                if (((long)pcVar16 < lVar18) || ((code *)(uVar10 + lVar19) <= pcVar15)) {
                  _swift_arrayInitWithTakeFrontToBack(pcVar15,uVar10 + lVar18,1,UVar4.unknown);
                }
                else if (local_88 != (code *)0x0) {
                  _swift_arrayInitWithTakeBackToFront(pcVar15,uVar10 + lVar18,1,UVar4.unknown);
                }
                (*local_90)(uVar10 + lVar18,local_c8,UVar4.unknown);
                pcVar12 = local_88;
              }
              pcVar14 = pcVar14 + 1;
              lVar9 = lVar9 + -1;
              lVar18 = lVar18 - (long)pcVar12;
              lVar19 = lVar19 - (long)pcVar12;
              pcVar16 = pcVar16 + (long)pcVar12;
              param_3 = local_e0;
              pcVar15 = local_100;
              param_1 = local_108;
            } while ((long)pcVar14 < (long)(pcVar11 + lVar9));
          }
        }
      }
      pcVar14 = (code *)param_3[1];
      if ((long)pcVar11 < (long)pcVar14) {
        if (SBORROW8((long)pcVar11,(long)pcVar15)) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x10012ab6c);
          (*pcVar14)();
        }
        if (local_e8 <= (long)pcVar11 - (long)pcVar15) goto LAB_10012a7a0;
        if (SCARRY8((long)pcVar15,local_e8)) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x10012ab80);
          (*pcVar14)();
        }
        pcVar16 = pcVar15 + local_e8;
        if ((long)pcVar14 <= (long)(pcVar15 + local_e8)) {
          pcVar16 = pcVar14;
        }
        if ((long)pcVar16 < (long)pcVar15) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x10012ab84);
          (*pcVar14)();
        }
        if (pcVar11 == pcVar16) goto LAB_10012a7a0;
        local_98 = *param_3;
        local_130 = *(long *)(local_78 + 0x48);
        local_88 = *(code **)(local_78 + 0x10);
        lVar18 = local_98 + local_130 * (long)(pcVar11 + -1);
        local_d0 = -local_130;
        lVar9 = (long)pcVar15 - (long)pcVar11;
        lVar19 = local_98 + (long)pcVar11 * local_130;
        local_128 = pcVar16;
        lVar20 = lVar19;
        lVar1 = lVar9;
        lVar2 = lVar18;
        local_100 = pcVar15;
LAB_10012a8a0:
        do {
          local_90 = pcVar11;
          local_110 = lVar2;
          local_118 = lVar1;
          local_120 = lVar20;
          pcVar14 = local_88;
          uVar10 = local_b8;
          (*local_88)(local_b8,lVar19,UVar4.unknown);
          lVar20 = local_b0;
          (*pcVar14)(local_b0,lVar18,UVar4.unknown);
          uVar8 = uVar10;
          FUN_100128cdc(uVar10,lVar20,local_80);
          pcVar14 = *(code **)(local_78 + 8);
          (*pcVar14)(lVar20,UVar4.unknown);
          (*pcVar14)(uVar10,UVar4.unknown);
          lVar20 = local_c0;
          if (unaff_x21 != 0) goto LAB_10012ab34;
          if ((uVar8 & 1) != 0) {
            if (local_98 == 0) {
                    /* WARNING: Does not return */
              pcVar14 = (code *)SoftwareBreakpoint(1,0x10012aba0);
              (*pcVar14)();
            }
            pcVar14 = *(code **)(local_78 + 0x20);
            (*pcVar14)(local_c0,lVar19,UVar4.unknown);
            _swift_arrayInitWithTakeFrontToBack(lVar19,lVar18,1,UVar4.unknown);
            (*pcVar14)(lVar18,lVar20,UVar4.unknown);
            lVar18 = lVar18 + local_d0;
            lVar19 = lVar19 + local_d0;
            bVar3 = lVar9 != -1;
            lVar9 = lVar9 + 1;
            lVar20 = local_120;
            lVar1 = local_118;
            lVar2 = local_110;
            pcVar11 = local_90;
            if (bVar3) goto LAB_10012a8a0;
          }
          lVar18 = local_110 + local_130;
          lVar9 = local_118 + -1;
          lVar19 = local_120 + local_130;
          lVar20 = lVar19;
          lVar1 = lVar9;
          lVar2 = lVar18;
          pcVar11 = local_90 + 1;
        } while (local_90 + 1 != local_128);
        pcVar16 = local_128;
        param_3 = local_e0;
        pcVar15 = local_100;
        param_1 = local_108;
        if ((long)local_128 < (long)local_100) goto LAB_10012ab64;
      }
      else {
LAB_10012a7a0:
        pcVar16 = pcVar11;
        if ((long)pcVar11 < (long)pcVar15) {
LAB_10012ab64:
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x10012ab68);
          (*pcVar14)();
        }
      }
      puVar7 = local_58;
      puVar5 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar6 = puVar7;
      if (((ulong)puVar5 & 1) == 0) {
        puVar6 = (undefined *)0x0;
        FUN_10012934c(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
      }
      uVar10 = *(ulong *)(puVar6 + 0x10);
      puVar7 = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar10) {
        puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
        FUN_10012934c(puVar7,uVar10 + 1,1,puVar6);
      }
      *(ulong *)(puVar7 + 0x10) = uVar10 + 1;
      *(code **)(puVar7 + uVar10 * 0x10 + 0x20) = pcVar15;
      *(code **)(puVar7 + uVar10 * 0x10 + 0x28) = pcVar16;
      local_58 = puVar7;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x10012abe8);
        (*pcVar14)();
      }
      FUN_10012a0cc(&local_58,*param_1,param_3,local_80);
      if (unaff_x21 != 0) goto LAB_10012ab34;
      pcVar14 = (code *)param_3[1];
    } while ((long)pcVar16 < (long)pcVar14);
  }
  puVar7 = local_58;
  local_80 = *param_1;
  if (local_80 == 0) {
                    /* WARNING: Does not return */
    pcVar14 = (code *)SoftwareBreakpoint(1,0x10012ac00);
    (*pcVar14)();
  }
  puVar5 = local_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar5 & 1) == 0) {
    FUN_100129b50();
  }
  uVar10 = *(ulong *)(puVar7 + 0x10);
  while (local_58 = puVar7, 1 < uVar10) {
    uVar8 = *param_3;
    if (uVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x10012abb8);
      (*pcVar14)();
    }
    lVar19 = uVar10 - 1;
    lVar20 = *(long *)(puVar7 + uVar10 * 0x10);
    lVar9 = *(long *)(puVar7 + lVar19 * 0x10 + 0x28);
    lVar18 = *(long *)(local_78 + 0x48);
    FUN_10012944c(uVar8 + lVar18 * lVar20,uVar8 + lVar18 * *(long *)(puVar7 + lVar19 * 0x10 + 0x20),
                  uVar8 + lVar18 * lVar9,local_80,local_d8);
    if (unaff_x21 != 0) break;
    if (lVar9 < lVar20) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x10012ab60);
      (*pcVar14)();
    }
    puVar5 = puVar7;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)puVar5 & 1) == 0) {
      FUN_100129b50();
    }
    param_3 = local_e0;
    if (*(ulong *)(puVar7 + 0x10) <= uVar10 - 2) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x10012ab64);
      (*pcVar14)();
    }
    *(long *)(puVar7 + uVar10 * 0x10) = lVar20;
    *(long *)((long)(puVar7 + uVar10 * 0x10) + 8) = lVar9;
    local_58 = puVar7;
    FUN_100129a18(lVar19);
    puVar7 = local_58;
    uVar10 = *(ulong *)(local_58 + 0x10);
  }
LAB_10012ab34:
  _swift_bridgeObjectRelease(local_58);
  return;
}



/* Address: 0x10012ac00 | FUN_10012ac00 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10012ac00(ulong *param_1,undefined8 param_2)

{
  URL UVar1;
  __int64 _Var2;
  _ContiguousArrayBuffer<undefined> _Var3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong minimumCapacity;
  ulong uVar7;
  undefined *local_80;
  ulong uStack_78;
  long local_70;
  ulong uStack_68;
  undefined1 auStack_58 [8];
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar5 = *(long *)(UVar1.unknown + -8);
  uVar4 = *param_1;
  uVar6 = uVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar6 & 1) == 0) {
    FUN_100129bbc();
  }
  uVar6 = *(ulong *)(uVar4 + 0x10);
  uVar7 = (ulong)*(byte *)(lVar5 + 0x50) + 0x20 &
          ((ulong)*(byte *)(lVar5 + 0x50) ^ 0xffffffffffffffff);
  local_70 = uVar4 + uVar7;
  uStack_68 = uVar6;
  _Var2 = Swift::_minimumMergeRunLength(uVar6);
  if (_Var2 < (long)uVar6) {
    minimumCapacity = uVar6 >> 1;
    _Var3.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (1 < uVar6) {
      _Var3 = Swift::ContiguousArray::_allocateBufferUninitialized(minimumCapacity,UVar1.unknown);
      *(ulong *)(_Var3.unknown + 0x10) = minimumCapacity;
    }
    local_80 = _Var3.unknown + uVar7;
    uStack_78 = minimumCapacity;
    FUN_10012a388(&local_80,auStack_58,&local_70,_Var2,param_2);
    *(undefined8 *)(_Var3.unknown + 0x10) = 0;
    _swift_release(_Var3.unknown);
  }
  else if (uVar6 != 0) {
    FUN_100129ea4(0,uVar6,1,&local_70,param_2);
  }
  *param_1 = uVar4;
  return 0;
}



/* Address: 0x10012ad88 | FUN_10012ad88 */

void FUN_10012ad88(long param_1,long param_2,long param_3)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  long *unaff_x20;
  long lVar7;
  
  lVar4 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10012ae34);
    (*pcVar6)();
  }
  lVar7 = *unaff_x20;
  lVar1 = lVar7 + 0x20 + param_1 * 0x10;
  _swift_arrayDestroy(lVar1,lVar4,PTR___type_metadata_for_Swift_String_100eac208);
  lVar5 = param_3 - lVar4;
  if (SBORROW8(param_3,lVar4)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10012ae38);
    (*pcVar6)();
  }
  if (lVar5 != 0) {
    lVar4 = *(long *)(lVar7 + 0x10) - param_2;
    if (SBORROW8(*(long *)(lVar7 + 0x10),param_2)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10012ae3c);
      (*pcVar6)();
    }
    pvVar2 = (void *)(lVar1 + param_3 * 0x10);
    pvVar3 = (void *)(lVar7 + 0x20 + param_2 * 0x10);
    if (pvVar2 != pvVar3 || (void *)((long)pvVar3 + lVar4 * 0x10) <= pvVar2) {
      _memmove(pvVar2,pvVar3,lVar4 * 0x10);
    }
    if (SCARRY8(*(long *)(lVar7 + 0x10),lVar5)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10012ae40);
      (*pcVar6)();
    }
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + lVar5;
  }
  if (param_3 < 1) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10012ae44);
  (*pcVar6)();
}



/* Address: 0x10012ae44 | FUN_10012ae44 */

void FUN_10012ae44(long param_1,long param_2,code *param_3,code *param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10012af00);
    (*pcVar2)();
  }
  lVar4 = *unaff_x20;
  lVar5 = *(long *)(lVar4 + 0x10);
  if (lVar5 < param_2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10012af04);
    (*pcVar2)();
  }
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10012af08);
    (*pcVar2)();
  }
  lVar1 = -(param_2 - param_1);
  if (!SBORROW8(0,param_2 - param_1)) {
    if (!SCARRY8(lVar5,lVar1)) {
      lVar3 = lVar4;
      _swift_isUniquelyReferenced_nonNull_native();
      *unaff_x20 = lVar4;
      if (((int)lVar3 == 0) || ((long)(*(ulong *)(lVar4 + 0x18) >> 1) < lVar5 + lVar1)) {
        (*param_3)();
        *unaff_x20 = lVar3;
        lVar4 = lVar3;
      }
      (*param_4)(param_1,param_2,0);
      *unaff_x20 = lVar4;
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10012af10);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10012af0c);
  (*pcVar2)();
}



/* Address: 0x10012af10 | FUN_10012af10 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_10012af10(void)

{
  undefined *puVar1;
  bool bVar2;
  NSError *self;
  Dictionary<undefined,undefined> DVar3;
  undefined8 uVar4;
  ID *pIVar5;
  ID IVar6;
  _StringGuts _Var7;
  void *pvVar8;
  String SVar9;
  String SVar10;
  ID local_68 [5];
  
  self = Foundation::__convertErrorToNSError();
  objc_stub::domain((ID)self);
  SVar9 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  _Var7.unknown = SVar9.bridgeObject;
  SVar10 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  if (SVar9 == SVar10) {
    _swift_bridgeObjectRelease(_Var7.unknown);
    _swift_bridgeObjectRelease(SVar10.bridgeObject);
LAB_10012afb8:
    IVar6 = objc_stub::code((ID)self);
    if (IVar6 == 0x101) {
      return 1;
    }
  }
  else {
    bVar2 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)SVar9.str,_Var7,(_StringComparisonResult)(__int8)SVar10.str);
    _swift_bridgeObjectRelease(_Var7.unknown);
    _swift_bridgeObjectRelease(SVar10.bridgeObject);
    if (bVar2) goto LAB_10012afb8;
  }
  objc_stub::userInfo((ID)self);
  puVar1 = PTR___type_metadata_for_Any_100eae0c0;
  DVar3 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  SVar9 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pvVar8 = SVar9.bridgeObject;
  if (*(long *)(DVar3.unknown + 0x10) != 0) {
    _swift_bridgeObjectRetain(DVar3.unknown);
    FUN_100071370(SVar9.str);
    if (((ulong)SVar9.bridgeObject & 1) != 0) {
      FUN_10000cbfc(*(long *)(DVar3.unknown + 0x38) + (long)SVar9.str * 0x20,local_68 + 1);
      _swift_bridgeObjectRelease(pvVar8);
      _swift_bridgeObjectRelease_n(DVar3.unknown,2);
      if (local_68[4] != 0) {
        uVar4 = 0;
        FUN_10012b1ec(0);
        pIVar5 = local_68;
        _swift_dynamicCast(pIVar5,local_68 + 1,puVar1 + 8,uVar4,6);
        if (((ulong)pIVar5 & 1) == 0) {
          return 0;
        }
        objc_stub::domain(local_68[0]);
        SVar9 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        _Var7.unknown = SVar9.bridgeObject;
        SVar10 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        if (SVar9 == SVar10) {
          _swift_bridgeObjectRelease(_Var7.unknown);
          _swift_bridgeObjectRelease(SVar10.bridgeObject);
        }
        else {
          bVar2 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)SVar9.str,_Var7,
                             (_StringComparisonResult)(__int8)SVar10.str);
          _swift_bridgeObjectRelease(_Var7.unknown);
          _swift_bridgeObjectRelease(SVar10.bridgeObject);
          if (!bVar2) {
            return 0;
          }
        }
        IVar6 = objc_stub::code(local_68[0]);
        if (IVar6 != 0xd) {
          IVar6 = objc_stub::code(local_68[0]);
          if (IVar6 != 1) {
            return 0;
          }
          return 1;
        }
        return 1;
      }
      goto LAB_10012b128;
    }
    _swift_bridgeObjectRelease(DVar3.unknown);
  }
  local_68[2] = 0;
  local_68[1] = 0;
  local_68[4] = 0;
  local_68[3] = 0;
  _swift_bridgeObjectRelease(pvVar8);
  _swift_bridgeObjectRelease(DVar3.unknown);
LAB_10012b128:
  FUN_1000fb4c4(local_68 + 1,&DAT_100fae668,&DAT_100c2e4a0);
  return 0;
}



/* Address: 0x10012b1ec | FUN_10012b1ec */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_10012b1ec(void)

{
  undefined *puVar1;
  
  if (DAT_100faf650 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___NSError;
  _swift_getObjCClassMetadata();
  DAT_100faf650 = puVar1;
  return;
}



/* Address: 0x10012b230 | FUN_10012b230 */

undefined8 FUN_10012b230(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1000f8cf4();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Address: 0x10012b26c | FUN_10012b26c */

undefined8 FUN_10012b26c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100faf508;
  FUN_1000f7830(&DAT_100faf508,&DAT_100c2e2e0);
  (**(code **)(*(long *)(puVar1 + -8) + 0x20))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x10012b2bc | FUN_10012b2bc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10012b2bc(void)

{
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10012b2e0 | FUN_10012b2e0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10012b2e0(void)

{
  return ZEXT816(0x100fb0288);
}



/* Address: 0x10012b300 | FUN_10012b300 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x00010012bc44) */

void FUN_10012b300(undefined8 param_1,NSDataReadingOptions param_2)

{
  String SVar1;
  void *pvVar2;
  URL UVar3;
  Date DVar4;
  URL UVar5;
  ID IVar6;
  Data DVar7;
  char *pcVar8;
  char **ppcVar9;
  undefined1 *puVar10;
  NSDate *pNVar11;
  undefined *puVar12;
  char *pcVar13;
  _StringGuts _Var14;
  ulong uVar15;
  undefined8 extraout_x1;
  undefined8 uVar16;
  char *pcVar17;
  void *pvVar18;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined *puVar19;
  long extraout_x12;
  long extraout_x12_00;
  char *pcVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  code *pcVar25;
  undefined *puVar26;
  double dVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  String separator;
  String separator_00;
  undefined *local_160;
  undefined *local_158;
  undefined *local_150;
  long local_148;
  undefined *local_140;
  URL local_138;
  char *local_130;
  undefined *local_128;
  ulong local_120;
  long local_118;
  undefined *local_110;
  undefined8 local_108;
  long local_100;
  undefined *local_f8;
  long local_f0;
  char *local_e8;
  void *pvStack_e0;
  char *local_d0;
  void *pvStack_c8;
  char *local_b0 [4];
  char *local_90;
  void *local_88;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_108 = param_1;
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar24 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar24 + 0x40));
  puVar12 = (undefined *)((long)&local_160 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar19 = &DAT_100faf508;
  FUN_1000f7830(&DAT_100faf508,&DAT_100c2e2e0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar19 + -8) + 0x40));
  puVar26 = puVar12 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  DVar4 = Foundation::Date::typeMetadataAccessor();
  local_f0 = *(long *)(DVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_f0 + 0x40));
  puVar19 = (undefined *)
            (((long)puVar26 - extraout_x12) - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  local_f8 = puVar19;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_100 = (long)puVar19 - extraout_x12_00;
  UVar5.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
  SVar28 = Foundation::URL::get_path(UVar5);
  (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar28.bridgeObject);
  IVar6 = NSFileManager::fileExistsAtPath_((ID)UVar5.unknown);
  if ((int)IVar6 != 0) {
    _Var14.unknown = (undefined *)0x0;
    local_118 = (long)puVar26 - extraout_x12;
    DVar7 = Foundation::Data::_init(param_2);
    local_110 = DVar4.unknown;
    UVar5.unknown = Foundation::Data::_bridgeToObjectiveC(DVar7);
    local_90 = (char *)0x0;
    local_128 = &_OBJC_CLASS___NSJSONSerialization;
    pvVar18 = (void *)0x0;
    IVar6 = NSJSONSerialization::JSONObjectWithData_options_error_
                      ((ID)&_OBJC_CLASS___NSJSONSerialization,UVar5.unknown,0,&local_90);
    if (IVar6 == 0) {
      pcVar13 = local_90;
      Foundation::__convertNSErrorToError();
      _swift_willThrow(0);
      FUN_10003bf2c(DVar7.unknown);
LAB_10012b4a4:
      local_90 = (char *)0x0;
      local_88 = (void *)0xe000000000000000;
      Swift::_StringGuts::grow(0x1a,_Var14);
      SVar29.bridgeObject = (void *)0x8000000100d92710;
      SVar29.str = (char *)0xd000000000000018;
      SVar33.bridgeObject = pvVar18;
      SVar33.str = UVar5.unknown;
      Swift::String::append(SVar29,SVar33);
      puVar19 = &DAT_100faf510;
      local_b0[0] = pcVar13;
      FUN_1000f7830(&DAT_100faf510,&DAT_100c2e820);
      puVar26 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
      Swift::__print_unlocked
                (local_b0,&local_90,puVar19,
                 PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
                 PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
                );
      pvVar18 = local_88;
      pcVar20 = local_90;
      if (DAT_101057340 == '\x01') {
        pcVar8 = &DAT_100fae660;
        FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
        pcVar17 = (char *)0x7;
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
        local_90 = (char *)0x676f4874736f505b;
        local_88 = (void *)0xea0000000000205d;
        SVar30.bridgeObject = pvVar18;
        SVar30.str = pcVar20;
        SVar34.bridgeObject = puVar26;
        SVar34.str = pcVar17;
        Swift::String::append(SVar30,SVar34);
        *(undefined **)(pcVar8 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
        *(char **)(pcVar8 + 0x20) = local_90;
        *(void **)(pcVar8 + 0x28) = local_88;
        SVar31.bridgeObject = (void *)0x20;
        SVar31.str = pcVar8;
        separator.bridgeObject = (void *)0xa;
        separator.str = (char *)0xe100000000000000;
        Swift::_print(SVar31,separator);
        _swift_bridgeObjectRelease(pvVar18);
        _swift_errorRelease(pcVar13);
        _swift_release(pcVar8);
      }
      else {
        _swift_bridgeObjectRelease(local_88);
        _swift_errorRelease(pcVar13);
      }
    }
    else {
      local_158 = DVar7.unknown;
      local_150 = _Var14.unknown;
      Swift::__bridgeAnyObjectToAny();
      _swift_unknownObjectRelease(IVar6);
      puVar19 = &DAT_100fafaa8;
      FUN_1000f7830(&DAT_100fafaa8,&DAT_100c2e6f8);
      ppcVar9 = local_b0;
      _swift_dynamicCast(ppcVar9,&local_90,PTR___type_metadata_for_Any_100eae0c0 + 8,puVar19,6);
      puVar19 = local_158;
      if ((int)ppcVar9 == 0) {
        if (DAT_101057340 == '\x01') {
          pcVar13 = &DAT_100fae660;
          FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
          _swift_allocObject();
          pcVar13[0x18] = '\x02';
          pcVar13[0x19] = '\0';
          pcVar13[0x1a] = '\0';
          pcVar13[0x1b] = '\0';
          pcVar13[0x1c] = '\0';
          pcVar13[0x1d] = '\0';
          pcVar13[0x1e] = '\0';
          pcVar13[0x1f] = '\0';
          pcVar13[0x10] = '\x01';
          pcVar13[0x11] = '\0';
          pcVar13[0x12] = '\0';
          pcVar13[0x13] = '\0';
          pcVar13[0x14] = '\0';
          pcVar13[0x15] = '\0';
          pcVar13[0x16] = '\0';
          pcVar13[0x17] = '\0';
          *(undefined **)(pcVar13 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
          pcVar13[0x20] = '6';
          pcVar13[0x21] = '\0';
          pcVar13[0x22] = '\0';
          pcVar13[0x23] = '\0';
          pcVar13[0x24] = '\0';
          pcVar13[0x25] = '\0';
          pcVar13[0x26] = '\0';
          pcVar13[0x27] = -0x30;
          pcVar13[0x28] = '0';
          pcVar13[0x29] = '\'';
          pcVar13[0x2a] = -0x27;
          pcVar13[0x2b] = '\0';
          pcVar13[0x2c] = '\x01';
          pcVar13[0x2d] = '\0';
          pcVar13[0x2e] = '\0';
          pcVar13[0x2f] = -0x80;
          SVar28.bridgeObject = (void *)0x20;
          SVar28.str = pcVar13;
          separator_00.bridgeObject = (void *)0xa;
          separator_00.str = (char *)0xe100000000000000;
          Swift::_print(SVar28,separator_00);
          FUN_10003bf2c(puVar19,local_150);
          _swift_release(pcVar13);
        }
        else {
          FUN_10003bf2c(local_158,local_150);
        }
      }
      else {
        local_120 = *(ulong *)(local_b0[0] + 0x10);
        pcVar13 = local_b0[0];
        local_160 = param_2.unknown;
        if (local_120 != 0) {
          uVar23 = 0;
          local_130 = local_b0[0];
          lVar21 = local_100;
          lVar22 = local_f0;
          pcVar20 = local_b0[0];
          local_148 = lVar24;
          local_140 = UVar3.unknown;
          local_138.unknown = puVar12;
          do {
            pcVar20 = pcVar20 + 0x20;
            if (*(ulong *)(pcVar13 + 0x10) <= uVar23) {
                    /* WARNING: Does not return */
              pcVar25 = (code *)SoftwareBreakpoint(1,0x10012bcb4);
              (*pcVar25)();
            }
            FUN_10000cbfc(pcVar20,&local_90);
            FUN_100011080(&local_90,local_b0);
            FUN_10000cbfc(local_b0,&local_d0);
            puVar19 = &DAT_100fae898;
            FUN_1000f7830(&DAT_100fae898,&DAT_100c2e4e0);
            ppcVar9 = &local_e8;
            _swift_dynamicCast(ppcVar9,&local_d0,PTR___type_metadata_for_Any_100eae0c0 + 8,puVar19,6
                              );
            pcVar8 = local_e8;
            if ((int)ppcVar9 == 0) {
              FUN_100004594(local_b0);
            }
            else {
              if (*(long *)(local_e8 + 0x10) == 0) {
LAB_10012b848:
                DVar4 = Foundation::Date::init();
                if (DAT_100fb2a00 != -1) {
                  DVar4.unknown = (undefined *)&DAT_100fb2a00;
                  _swift_once(&DAT_100fb2a00,FUN_10016e594);
                }
                IVar6 = *(ID *)(DAT_101057338 + 0x10);
                pNVar11 = Foundation::Date::_bridgeToObjectiveC(DVar4);
                objc_stub::stringFromDate_(IVar6,pNVar11);
                SVar32 = (extension_Foundation)::Swift::String::
                         __unconditionallyBridgeFromObjectiveC();
                lVar22 = local_f0;
                (**(code **)(local_f0 + 8))(lVar21,local_110);
              }
              else {
                _swift_bridgeObjectRetain(local_e8);
                puVar10 = &DAT_6d617473656d6974;
                uVar15 = 0;
                FUN_100071370(&DAT_6d617473656d6974);
                if ((uVar15 & 1) == 0) {
                  _swift_bridgeObjectRelease(pcVar8);
                  goto LAB_10012b848;
                }
                FUN_10000cbfc(*(long *)(pcVar8 + 0x38) + (long)puVar10 * 0x20,&local_d0);
                _swift_bridgeObjectRelease(pcVar8);
                ppcVar9 = &local_e8;
                _swift_dynamicCast(ppcVar9,&local_d0,PTR___type_metadata_for_Any_100eae0c0 + 8,
                                   PTR___type_metadata_for_Swift_String_100eac208,6);
                if (((ulong)ppcVar9 & 1) == 0) goto LAB_10012b848;
                SVar32.bridgeObject = pvStack_e0;
                SVar32.str = local_e8;
              }
              if (DAT_100fb2a00 != -1) {
                _swift_once(&DAT_100fb2a00,FUN_10016e594);
              }
              lVar24 = local_118;
              FUN_10016e1a8(local_118,SVar32.str,SVar32.bridgeObject);
              _swift_bridgeObjectRelease(SVar32.bridgeObject);
              FUN_10012b26c(lVar24,puVar26);
              puVar19 = local_110;
              pcVar25 = *(code **)(lVar22 + 0x30);
              puVar12 = puVar26;
              (*pcVar25)(puVar26,1,local_110);
              if ((int)puVar12 == 1) {
                Foundation::Date::init();
                DVar4.unknown = puVar26;
                (*pcVar25)(puVar26,1,puVar19);
                if ((int)DVar4.unknown != 1) {
                  DVar4.unknown = puVar26;
                  FUN_10012bcb8();
                }
              }
              else {
                DVar4.unknown = local_f8;
                (**(code **)(lVar22 + 0x20))(local_f8,puVar26,puVar19);
              }
              local_d0 = (char *)0x0;
              pvStack_c8 = (void *)0xe000000000000000;
              dVar27 = Foundation::Date::get_timeIntervalSince1970(DVar4);
              double::_write((undefined *)&local_d0,dVar27);
              pvVar2 = pvStack_c8;
              SVar1.bridgeObject = pvStack_c8;
              SVar1.str = local_d0;
              UVar5.unknown = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
              _swift_bridgeObjectRelease(pcVar8);
              local_d0 = (char *)0x0;
              pvVar18 = (void *)0x0;
              DVar7.unknown =
                   (undefined *)
                   objc_stub::dataWithJSONObject_options_error_(local_128,UVar5.unknown,0,&local_d0)
              ;
              pcVar13 = local_d0;
              lVar21 = local_100;
              if (DVar7.unknown == (undefined *)0x0) {
                _swift_bridgeObjectRelease(pvVar2);
                Foundation::__convertNSErrorToError();
                _swift_willThrow(0);
                _swift_bridgeObjectRelease(local_130);
                FUN_10003bf2c(local_158,local_150);
                _Var14.unknown = local_110;
                (**(code **)(local_f0 + 8))(local_f8);
                FUN_100004594(local_b0);
                param_2.unknown = local_160;
                goto LAB_10012b4a4;
              }
              uVar16 = extraout_x1;
              DVar7 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar7);
              UVar3.unknown = local_138.unknown;
              Foundation::URL::appendingPathComponent(SVar1,UVar5);
              _swift_bridgeObjectRelease(pvVar2);
              Foundation::Data::_write(UVar3,(NSDataWritingOptions)0x0,DVar7);
              FUN_10003bf2c(DVar7.unknown,uVar16);
              (**(code **)(local_148 + 8))(UVar3.unknown,local_140);
              lVar22 = local_f0;
              (**(code **)(local_f0 + 8))(local_f8,local_110);
              FUN_100004594(local_b0);
              pcVar13 = local_130;
            }
            uVar23 = uVar23 + 1;
          } while (local_120 != uVar23);
        }
        _swift_bridgeObjectRelease(pcVar13);
        FUN_10003bf2c(local_158,local_150);
        param_2.unknown = local_160;
      }
    }
    FUN_1001723c8(param_2.unknown);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x10012bcb8 | FUN_10012bcb8 */

undefined8 FUN_10012bcb8(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100faf508;
  FUN_1000f7830(&DAT_100faf508,&DAT_100c2e2e0);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x10012bd00 | thunk_FUN_10012bd04 */

void thunk_FUN_10012bd04(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb02f0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2eaf0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2eaf0,&DAT_100eb8320);
  DAT_100fb02f0 = pTVar1;
  return;
}



/* Address: 0x10012bd04 | FUN_10012bd04 */

void FUN_10012bd04(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb02f0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2eaf0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2eaf0,&DAT_100eb8320);
  DAT_100fb02f0 = pTVar1;
  return;
}



/* Address: 0x10012bd44 | FUN_10012bd44 */

undefined1  [16] FUN_10012bd44(void)

{
  return ZEXT816(0x100eb8320);
}



/* Address: 0x10012bd54 | FUN_10012bd54 */

void FUN_10012bd54(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *local_110;
  undefined *puStack_108;
  undefined *local_100;
  undefined *puStack_f8;
  undefined *local_f0;
  undefined *puStack_e8;
  long local_e0;
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
  undefined *local_70;
  undefined *puStack_68;
  long local_60;
  undefined *puStack_58;
  undefined *local_50;
  undefined *puStack_48;
  
  puVar1 = PTR___value_witness_table_for_Builtin_UnknownObject_100eabd30 + 0x40;
  puStack_108 = &DAT_100c2ec00;
  puVar2 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
  puStack_e8 = &DAT_100c2ec18;
  lVar3 = 0x13f;
  local_110 = puVar1;
  local_100 = puVar2;
  puStack_f8 = puVar2;
  local_f0 = puVar1;
  FUN_10012bf84();
  if (param_2 < 0x40) {
    local_e0 = *(long *)(lVar3 + -8) + 0x40;
    local_d0 = &DAT_100c2ec30;
    puStack_c8 = &DAT_100c2ec30;
    local_c0 = &DAT_100c2ec30;
    puStack_b8 = &DAT_100c2ec18;
    local_a0 = &DAT_100c2ec30;
    puStack_98 = &DAT_100c2ec18;
    puStack_88 = &DAT_100c2ec48;
    puStack_48 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
    local_50 = &DAT_100c2ec18;
    puStack_d8 = puVar2;
    local_b0 = puVar1;
    puStack_a8 = puVar1;
    local_90 = puVar1;
    local_80 = puVar1;
    puStack_78 = puVar2;
    local_70 = puVar2;
    puStack_68 = puVar1;
    local_60 = local_e0;
    puStack_58 = puVar2;
    _swift_initClassMetadata2(param_1,0,0x1a,&local_110,param_1 + 0x58);
  }
  return;
}



/* Address: 0x10012be40 | objc_stub::invalidate */

ID __objc_msgSend_stub objc_stub::invalidate(ID self,...)

{
  ID IVar1;
  
  IVar1 = invalidate(self);
  return IVar1;
}



/* Address: 0x10012be44 | FUN_10012be44 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10012be44(void)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = 0;
  FUN_100167648(0,*(undefined8 *)(*unaff_x20 + 0x50));
  (**(code **)(*(long *)(lVar1 + -8) + 8))(unaff_x20 + 3,lVar1);
  FUN_10012bcb8((long)unaff_x20 + DAT_100fb02f8);
  _swift_release(*(undefined8 *)((long)unaff_x20 + DAT_100fb0308));
  _swift_release(*(undefined8 *)((long)unaff_x20 + DAT_100fb0310));
  _swift_release(*(undefined8 *)((long)unaff_x20 + DAT_100fb0318));
  FUN_10012bcb8((long)unaff_x20 + DAT_100fb0378);
  _swift_release(*(undefined8 *)((long)unaff_x20 + DAT_101057300));
  return;
}



/* Address: 0x10012bf54 | FUN_10012bf54 */

void FUN_10012bf54(void)

{
  FUN_10012be44();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10012bf78 | FUN_10012bf78 */

void FUN_10012bf78(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10012bf84 | FUN_10012bf84 */

void FUN_10012bf84(void)

{
  Optional OVar1;
  Date DVar2;
  undefined7 extraout_var;
  
  if (DAT_100fb0410 == 0) {
    DVar2 = Foundation::Date::typeMetadataAccessor();
    OVar1 = Swift::Optional::typeMetadataAccessor();
    if (DVar2.unknown == (undefined *)0x0) {
      DAT_100fb0410 = CONCAT71(extraout_var,OVar1.value);
    }
  }
  return;
}



/* Address: 0x10012bfd8 | FUN_10012bfd8 */

undefined1  [16] FUN_10012bfd8(void)

{
  return ZEXT816(0x100eb84a8);
}



/* Address: 0x10012bfe8 | FUN_10012bfe8 */

void FUN_10012bfe8(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0xf8));
  return;
}



/* Address: 0x10012bff0 | FUN_10012bff0 */

void FUN_10012bff0(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x100));
  return;
}



/* Address: 0x10012bff8 | FUN_10012bff8 */

void FUN_10012bff8(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x120));
  return;
}



/* Address: 0x10012c000 | FUN_10012c000 */

void FUN_10012c000(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x130));
  return;
}



/* Address: 0x10012c008 | FUN_10012c008 */

uint FUN_10012c008(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  undefined1 auStack_80 [32];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [32];
  
  iVar4 = (int)auStack_a0;
  uVar5 = (uint)auStack_a0;
  local_60 = *param_1;
  uVar1 = param_1[1];
  uStack_58 = uVar1;
  FUN_10000cbfc(param_2,auStack_50);
  FUN_1000f8cac(&local_60,auStack_90,&DAT_100fae908,&DAT_100c2eec0);
  uVar3 = local_88;
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRelease(uVar3);
  puVar2 = PTR___type_metadata_for_Any_100eae0c0;
  _swift_dynamicCast(auStack_a0,auStack_80,PTR___type_metadata_for_Any_100eae0c0 + 8,
                     PTR___type_metadata_for_Swift_Bool_100eac570,6);
  if (iVar4 == 0) {
    FUN_1000f8cac(&local_60,auStack_90,&DAT_100fae908,&DAT_100c2eec0);
    _swift_bridgeObjectRelease(local_88);
    _swift_dynamicCast(auStack_a0,auStack_80,puVar2 + 8,
                       PTR___type_metadata_for_Swift_String_100eac208,6);
    if (uVar5 != 0) {
      _swift_bridgeObjectRelease(local_98);
    }
    uVar5 = uVar5 ^ 1;
    FUN_1000fb4c4(&local_60,&DAT_100fae908,&DAT_100c2eec0);
  }
  else {
    FUN_1000fb4c4(&local_60,&DAT_100fae908,&DAT_100c2eec0);
    uVar5 = 0;
  }
  return uVar5;
}


