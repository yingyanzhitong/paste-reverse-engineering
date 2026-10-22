/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1002fe46c | FUN_1002fe46c */

void FUN_1002fe46c(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x1002fe498 | FUN_1002fe498 */

void FUN_1002fe498(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0xb0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100008284;
  FUN_1003a93e0(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Address: 0x1002fe510 | thunk_FUN_1002fd3c4 */

void thunk_FUN_1002fd3c4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  uVar1 = 0;
  FUN_10035de24(0);
  FUN_1000d80e0(&uStack_28,"PasteCore/DI+PasteCore.swift",0x1c,2,0x59,0x13,FUN_1002fd83c,0,uVar1);
  uVar1 = 0;
  FUN_1003b2628();
  _swift_allocObject();
  FUN_1002fdaec(uStack_28,uVar1);
  *param_1 = uStack_28;
  return;
}



/* Address: 0x1002fe514 | FUN_1002fe514 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002fe514(void)

{
  long lVar1;
  undefined *puVar2;
  URL UVar3;
  NSURL *pNVar4;
  ID IVar5;
  undefined8 uVar6;
  long extraout_x8;
  long unaff_x20;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined1 auStack_70 [16];
  undefined8 local_60 [3];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  puVar2 = &DAT_100fc1a40;
  FUN_1000037f0(&DAT_100fc1a40,&DAT_100c40660);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_70 + -extraout_x8;
  UVar3.unknown = (undefined *)objc_stub::defaultManager(&_OBJC_CLASS___NSFileManager);
  lVar1 = _TtC9PasteCore18DiagnosticsManager::logDirectory;
  pNVar4 = Foundation::URL::_bridgeToObjectiveC(UVar3);
  local_60[0] = 0;
  IVar5 = objc_stub::createDirectoryAtURL_withIntermediateDirectories_attributes_error_
                    ((ID)UVar3.unknown,pNVar4,1,0,local_60);
  if ((int)IVar5 == 0) {
    uVar6 = local_60[0];
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    _swift_errorRelease(uVar6);
  }
  lVar7 = *(long *)(unaff_x20 + _TtC9PasteCore18DiagnosticsManager::fileOutput);
  FUN_1000d682c();
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar9 = *(long *)(UVar3.unknown + -8);
  (**(code **)(lVar9 + 0x10))(puVar8,unaff_x20 + lVar1,UVar3.unknown);
  (**(code **)(lVar9 + 0x38))(puVar8,0,1,UVar3.unknown);
  lVar1 = _TtC12PasteLogging13FileLogOutput::directoryURL;
  _swift_beginAccess(lVar7 + _TtC12PasteLogging13FileLogOutput::directoryURL,local_60,0x21,0);
  FUN_1001a7c4c(puVar8,lVar7 + lVar1,&DAT_100fc1a40,&DAT_100c40660);
  _swift_endAccess(local_60);
  _swift_beginAccess(lVar7 + 0x10,local_60,1,0);
  *(undefined1 *)(lVar7 + 0x10) = 1;
  uVar6 = *(undefined8 *)(unaff_x20 + _TtC9PasteCore18DiagnosticsManager::configuration);
  lVar1 = ((undefined8 *)(unaff_x20 + _TtC9PasteCore18DiagnosticsManager::configuration))[1];
  _swift_getObjectType(uVar6);
  (**(code **)(lVar1 + 0x10))(0,uVar6,lVar1);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x1002fe72c | FUN_1002fe72c */

void FUN_1002fe72c(byte param_1)

{
  byte bVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_48,1,0);
  bVar1 = *(byte *)(unaff_x20 + 0x10);
  *(byte *)(unaff_x20 + 0x10) = param_1;
  if ((param_1 & 1) != bVar1) {
    (**(code **)(unaff_x20 + _TtC9PasteCore18DiagnosticsManager::persist))(param_1 & 1);
    if (*(char *)(unaff_x20 + 0x10) == '\x01') {
      FUN_1002fe514();
    }
    else {
      lVar3 = *(long *)(unaff_x20 + _TtC9PasteCore18DiagnosticsManager::fileOutput);
      _swift_beginAccess(lVar3 + 0x10,auStack_60,1,0);
      *(undefined1 *)(lVar3 + 0x10) = 0;
      FUN_1000d682c();
      uVar2 = *(undefined8 *)(unaff_x20 + _TtC9PasteCore18DiagnosticsManager::configuration);
      lVar3 = ((undefined8 *)(unaff_x20 + _TtC9PasteCore18DiagnosticsManager::configuration))[1];
      _swift_getObjectType(uVar2);
      (**(code **)(lVar3 + 0x10))(1,uVar2,lVar3);
    }
  }
  return;
}



/* Address: 0x1002fe808 | FUN_1002fe808 */

undefined1  [16] FUN_1002fe808(undefined8 *param_1)

{
  void *pvVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  pvVar1 = (void *)0x40;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    pvVar1 = _malloc(0x40);
  }
  else {
    _swift_coroFrameAlloc(0x40,0xd01b);
  }
  *param_1 = pvVar1;
  *(long *)((long)pvVar1 + 0x30) = unaff_x20;
  _swift_beginAccess(unaff_x20 + 0x10,pvVar1,1,0);
  *(undefined1 *)((long)pvVar1 + 0x38) = *(undefined1 *)(unaff_x20 + 0x10);
  auVar2._8_8_ = (undefined1 *)((long)pvVar1 + 0x38);
  auVar2._0_8_ = FUN_1002fe880;
  return auVar2;
}



/* Address: 0x1002fe880 | FUN_1002fe880 */

void FUN_1002fe880(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  char cVar2;
  char cVar3;
  undefined8 uVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  
  pvVar5 = (void *)*param_1;
  cVar2 = *(char *)((long)pvVar5 + 0x38);
  if ((param_2 & 1) == 0) {
    cVar3 = *(char *)(*(long *)((long)pvVar5 + 0x30) + 0x10);
    *(char *)(*(long *)((long)pvVar5 + 0x30) + 0x10) = cVar2;
    if (cVar2 != cVar3) {
      lVar6 = *(long *)((long)pvVar5 + 0x30);
      (**(code **)(lVar6 + _TtC9PasteCore18DiagnosticsManager::persist))();
      lVar7 = *(long *)((long)pvVar5 + 0x30);
      if (*(char *)(lVar6 + 0x10) == '\x01') {
        FUN_1002fe514();
      }
      else {
        lVar6 = *(long *)(lVar7 + _TtC9PasteCore18DiagnosticsManager::fileOutput);
        _swift_beginAccess(lVar6 + 0x10,(long)pvVar5 + 0x18,1,0);
        *(undefined1 *)(lVar6 + 0x10) = 0;
        FUN_1000d682c();
        puVar1 = (undefined8 *)(lVar7 + _TtC9PasteCore18DiagnosticsManager::configuration);
        uVar4 = *puVar1;
        lVar6 = puVar1[1];
        _swift_getObjectType(uVar4);
        (**(code **)(lVar6 + 0x10))(1,uVar4,lVar6);
      }
    }
  }
  else {
    FUN_1002fe72c();
  }
  _free(pvVar5);
  return;
}



/* Address: 0x1002fe954 | FUN_1002fe954 */

long FUN_1002fe954(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  URL UVar5;
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined1 *)(unaff_x20 + 0x10) = 0;
  lVar2 = _TtC9PasteCore18DiagnosticsManager::pasteboardHistoryManager;
  puVar3 = &DAT_100c40630;
  _swift_getKeyPath();
  puVar4 = &DAT_100fbdba0;
  FUN_1000037f0(&DAT_100fbdba0,&DAT_100c44a10);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  lVar2 = _TtC9PasteCore18DiagnosticsManager::logDirectory;
  UVar5 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar5.unknown + -8) + 0x20))(unaff_x20 + lVar2,param_1,UVar5.unknown);
  puVar1 = (undefined8 *)(unaff_x20 + _TtC9PasteCore18DiagnosticsManager::configuration);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(unaff_x20 + _TtC9PasteCore18DiagnosticsManager::fileOutput) = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC9PasteCore18DiagnosticsManager::persist);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  return unaff_x20;
}



/* Address: 0x1002fea60 | FUN_1002fea60 */

void FUN_1002fea60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  URL UVar5;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0x10) = 0;
  lVar2 = _TtC9PasteCore18DiagnosticsManager::pasteboardHistoryManager;
  puVar3 = &DAT_100c40630;
  _swift_getKeyPath();
  puVar4 = &DAT_100fbdba0;
  FUN_1000037f0(&DAT_100fbdba0,&DAT_100c44a10);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  lVar2 = _TtC9PasteCore18DiagnosticsManager::logDirectory;
  UVar5 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar5.unknown + -8) + 0x20))(unaff_x20 + lVar2,param_1,UVar5.unknown);
  puVar1 = (undefined8 *)(unaff_x20 + _TtC9PasteCore18DiagnosticsManager::configuration);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(unaff_x20 + _TtC9PasteCore18DiagnosticsManager::fileOutput) = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC9PasteCore18DiagnosticsManager::persist);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  return;
}



/* Address: 0x1002feb5c | thunk_FUN_1002fac6c */

void thunk_FUN_1002fac6c(void)

{
  FUN_1002fac6c();
  return;
}



/* Address: 0x1002feb60 | FUN_1002feb60 */

void FUN_1002feb60(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _TtC12PasteLogging13FileLogOutput::fileURL;
  lVar2 = *(long *)(unaff_x20 + _TtC9PasteCore18DiagnosticsManager::fileOutput);
  _swift_beginAccess(lVar2 + _TtC12PasteLogging13FileLogOutput::fileURL,auStack_48,0,0);
  FUN_100011090(lVar2 + lVar1,param_1,&DAT_100fc1a40,&DAT_100c40660);
  return;
}



/* Address: 0x1002febd4 | FUN_1002febd4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002febd4(void)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  URL UVar4;
  URL UVar5;
  NSURL *pNVar6;
  undefined *puVar7;
  undefined *puVar8;
  long extraout_x8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  String SVar15;
  String SVar16;
  undefined auStack_a0 [8];
  long local_98;
  undefined *local_90;
  char *local_88;
  ulong local_80;
  undefined *local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  UVar4 = Foundation::URL::typeMetadataAccessor();
  lVar12 = *(long *)(UVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar12 + 0x40));
  puVar10 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  UVar5.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
  pNVar6 = Foundation::URL::_bridgeToObjectiveC(UVar5);
  local_70 = (undefined *)0x0;
  puVar7 = (undefined *)
           NSFileManager::contentsOfDirectoryAtURL_includingPropertiesForKeys_options_error_
                     ((ID)UVar5.unknown,pNVar6,0,0,&local_70);
  if (puVar7 == (undefined *)0x0) {
    puVar7 = local_70;
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    _swift_errorRelease(puVar7);
    puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  }
  local_98 = 0;
  local_80 = *(ulong *)(puVar7 + 0x10);
  puVar11 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (local_80 != 0) {
    uVar14 = 0;
    local_88 = "yyyy-MM-dd-HHmmss";
    local_90 = UVar4.unknown;
    do {
      if (*(ulong *)(puVar7 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1002fef18);
        (*pcVar2)();
      }
      uVar9 = (ulong)*(byte *)(lVar12 + 0x50) + 0x20 &
              ((ulong)*(byte *)(lVar12 + 0x50) ^ 0xffffffffffffffff);
      lVar13 = *(long *)(lVar12 + 0x48);
      UVar5.unknown = puVar10;
      (**(code **)(lVar12 + 0x10))(puVar10,puVar7 + lVar13 * uVar14 + uVar9,UVar4.unknown);
      SVar15 = Foundation::URL::get_pathExtension(UVar5);
      UVar5.unknown = SVar15.bridgeObject;
      if ((SVar15.str == (undefined *)0x676f6c) &&
         (UVar5.unknown == (undefined *)0xe300000000000000)) {
        _swift_bridgeObjectRelease();
LAB_1002fedec:
        SVar15 = Foundation::URL::get_lastPathComponent(UVar5);
        SVar16.bridgeObject = (void *)((ulong)local_88 | 0x8000000000000000);
        SVar16.str = (char *)0xd000000000000012;
        bVar3 = Swift::String::hasPrefix(SVar16,SVar15);
        _swift_bridgeObjectRelease(SVar15.bridgeObject);
        if (!bVar3) goto LAB_1002fed40;
        puVar8 = puVar11;
        _swift_isUniquelyReferenced_nonNull_native();
        local_70 = puVar11;
        if (((ulong)puVar8 & 1) == 0) {
          FUN_1003075d4(0,*(long *)(puVar11 + 0x10) + 1,1);
        }
        uVar1 = *(ulong *)(local_70 + 0x10);
        if (*(ulong *)(local_70 + 0x18) >> 1 <= uVar1) {
          FUN_1003075d4(1 < *(ulong *)(local_70 + 0x18),uVar1 + 1,1);
        }
        puVar11 = local_70;
        UVar4.unknown = local_90;
        *(ulong *)(local_70 + 0x10) = uVar1 + 1;
        (**(code **)(lVar12 + 0x20))(local_70 + uVar1 * lVar13 + uVar9,puVar10,local_90);
      }
      else {
        bVar3 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)SVar15.str,(_StringGuts)UVar5.unknown,
                           (_StringComparisonResult)0x6c);
        _swift_bridgeObjectRelease();
        if (bVar3) goto LAB_1002fedec;
LAB_1002fed40:
        (**(code **)(lVar12 + 8))(puVar10,UVar4.unknown);
      }
      uVar14 = uVar14 + 1;
    } while (local_80 != uVar14);
  }
  _swift_bridgeObjectRelease(puVar7);
  local_70 = puVar11;
  _swift_retain(puVar11);
  lVar12 = local_98;
  FUN_100306170(&local_70);
  if (lVar12 != 0) {
    _swift_release(local_70);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1002fef28);
    (*pcVar2)();
  }
  _swift_release(puVar11);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(local_70);
  }
  return;
}



/* Address: 0x1002fef28 | FUN_1002fef28 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0001002ff07c) */

code * FUN_1002fef28(void)

{
  long lVar1;
  undefined *puVar2;
  URL UVar3;
  undefined1 *puVar4;
  code *pcVar5;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_a0 [16];
  undefined8 local_90 [2];
  long local_80;
  undefined1 auStack_78 [24];
  
  puVar2 = &DAT_100fc1a40;
  FUN_1000037f0(&DAT_100fc1a40,&DAT_100c40660);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_a0 + -extraout_x8;
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar8 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar8 + 0x40));
  lVar1 = _TtC12PasteLogging13FileLogOutput::fileURL;
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar9 = *(long *)(unaff_x20 + _TtC9PasteCore18DiagnosticsManager::fileOutput);
  _swift_beginAccess(lVar9 + _TtC12PasteLogging13FileLogOutput::fileURL,auStack_78,0,0);
  FUN_100011090(lVar9 + lVar1,puVar6,&DAT_100fc1a40,&DAT_100c40660);
  puVar4 = puVar6;
  (**(code **)(lVar8 + 0x30))(puVar6,1,UVar3.unknown);
  if ((int)puVar4 == 1) {
    FUN_100005808(puVar6,&DAT_100fc1a40,&DAT_100c40660);
    pcVar5 = (code *)0x0;
  }
  else {
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,UVar3.unknown);
    pcVar5 = FUN_100307608;
    local_80 = lVar7;
    FUN_1002ff458(FUN_100307608,local_90,FUN_1003214a8,FUN_100308608);
    FUN_1000da768(local_90);
    puVar2 = &DAT_100fbe4e8;
    FUN_1000037f0(&DAT_100fbe4e8,&DAT_100c40a80);
    _swift_allocObject();
    *(undefined8 *)(puVar2 + 0x18) = 3;
    *(undefined8 *)(puVar2 + 0x10) = 1;
    *(code **)(puVar2 + 0x20) = pcVar5;
    FUN_10037a144(puVar2,0);
    _swift_release(local_90[0]);
    _swift_release(puVar2);
    (**(code **)(lVar8 + 8))(lVar7,UVar3.unknown);
  }
  return pcVar5;
}



/* Address: 0x1002ff148 | FUN_1002ff148 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002ff148(undefined8 *param_1)

{
  UTType UVar1;
  ID self;
  URL UVar2;
  UTType UVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  String SVar7;
  String SVar8;
  undefined8 *local_90;
  undefined1 auStack_88 [24];
  undefined8 local_70;
  long lStack_68;
  
  local_90 = param_1;
  UVar1 = UniformTypeIdentifiers::UTType::typeMetadataAccessor();
  lVar6 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar6 + 0x40));
  self = 0;
  FUN_100381740();
  _objc_allocWithZone();
  UVar2.unknown = (undefined *)objc_stub::init(self);
  SVar7 = Foundation::URL::get_absoluteString(UVar2);
  UVar3 = UniformTypeIdentifiers::UTType::get_fileURL((UTType)SVar7.str);
  SVar8 = UniformTypeIdentifiers::UTType::get_identifier(UVar3);
  (**(code **)(lVar6 + 8))
            (auStack_88 + (-8 - (extraout_x8 + 0xfU & 0xfffffffffffffff0)),UVar1.unknown);
  FUN_10037c4a8(SVar7.str,SVar7.bridgeObject,SVar8.str,SVar8.bridgeObject);
  _swift_bridgeObjectRelease(SVar7.bridgeObject);
  _swift_bridgeObjectRelease(SVar8.bridgeObject);
  FUN_100357cf0(auStack_88);
  FUN_100004640(auStack_88,local_70);
  puVar4 = &DAT_100fbe4e8;
  FUN_1000037f0(&DAT_100fbe4e8,&DAT_100c40a80);
  _swift_allocObject();
  *(undefined8 *)(puVar4 + 0x18) = 3;
  *(undefined8 *)(puVar4 + 0x10) = 1;
  *(undefined **)(puVar4 + 0x20) = UVar2.unknown;
  puVar5 = puVar4;
  (**(code **)(*(long *)(lStack_68 + 0x10) + 0x10))(puVar4,local_70,*(long *)(lStack_68 + 0x10));
  _swift_release(puVar4);
  if (unaff_x21 == 0) {
    *local_90 = puVar5;
  }
  FUN_100004594(auStack_88);
  return;
}



/* Address: 0x1002ff2ec | FUN_1002ff2ec */

void FUN_1002ff2ec(undefined8 param_1,undefined8 param_2)

{
  FUN_1002ff458(param_1,param_2,FUN_10032b0c8,FUN_100308608);
  return;
}



/* Address: 0x1002ff310 | FUN_1002ff310 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002ff310(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_80 [16];
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  
  if (DAT_100fc09c8 != -1) {
    _swift_once(&DAT_100fc09c8,FUN_100357ea0);
  }
  FUN_1000da768(auStack_80);
  FUN_100004640(auStack_80,local_68);
  uVar1 = local_68;
  (**(code **)(local_60 + 0x10))(local_68,local_60);
  FUN_100004594(auStack_80);
  lVar2 = 0;
  FUN_100357efc();
  _swift_allocObject();
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(undefined8 *)(lVar2 + 0x60) = 0;
  *(undefined8 *)(lVar2 + 0x58) = 0;
  *(undefined8 *)(lVar2 + 0x70) = 0;
  *(undefined8 *)(lVar2 + 0x68) = 0;
  *(undefined8 *)(lVar2 + 0x80) = 0;
  *(undefined8 *)(lVar2 + 0x78) = 0;
  *(undefined8 *)(lVar2 + 0x90) = 0;
  *(undefined8 *)(lVar2 + 0x88) = 0;
  *(undefined8 *)(lVar2 + 0xa0) = 0;
  *(undefined8 *)(lVar2 + 0x98) = 0;
  *(undefined8 *)(lVar2 + 0xb0) = 0;
  *(undefined8 *)(lVar2 + 0xa8) = 0;
  *(undefined8 *)(lVar2 + 0x10) = uVar1;
  local_70 = param_1;
  local_68 = param_2;
  local_60 = lVar2;
  (extension_CoreData)::__C::NSManagedObjectContext::_performAndWait();
  _swift_release(lVar2);
  return;
}



/* Address: 0x1002ff458 | FUN_1002ff458 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1002ff458(undefined8 param_1,undefined8 param_2,code *param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  undefined8 local_58;
  
  if (DAT_100fc09c8 != -1) {
    _swift_once(&DAT_100fc09c8,FUN_100357ea0);
  }
  FUN_1000da768(auStack_90);
  FUN_100004640(auStack_90,local_78);
  uVar1 = local_78;
  (**(code **)(local_70 + 0x10))(local_78,local_70);
  FUN_100004594(auStack_90);
  lVar2 = 0;
  FUN_100357efc();
  _swift_allocObject();
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(undefined8 *)(lVar2 + 0x60) = 0;
  *(undefined8 *)(lVar2 + 0x58) = 0;
  *(undefined8 *)(lVar2 + 0x70) = 0;
  *(undefined8 *)(lVar2 + 0x68) = 0;
  *(undefined8 *)(lVar2 + 0x80) = 0;
  *(undefined8 *)(lVar2 + 0x78) = 0;
  *(undefined8 *)(lVar2 + 0x90) = 0;
  *(undefined8 *)(lVar2 + 0x88) = 0;
  *(undefined8 *)(lVar2 + 0xa0) = 0;
  *(undefined8 *)(lVar2 + 0x98) = 0;
  *(undefined8 *)(lVar2 + 0xb0) = 0;
  *(undefined8 *)(lVar2 + 0xa8) = 0;
  *(undefined8 *)(lVar2 + 0x10) = uVar1;
  local_80 = param_1;
  local_78 = param_2;
  local_70 = lVar2;
  (*param_3)(0);
  (extension_CoreData)::__C::NSManagedObjectContext::_performAndWait();
  _swift_release(lVar2);
  return local_58;
}



/* Address: 0x1002ff5a8 | FUN_1002ff5a8 */

void FUN_1002ff5a8(undefined8 param_1,undefined8 param_2)

{
  FUN_1002ff600(param_1,param_2,&DAT_100fbe6c8,&DAT_100c43090,FUN_100308890);
  return;
}



/* Address: 0x1002ff5d4 | FUN_1002ff5d4 */

void FUN_1002ff5d4(undefined8 param_1,undefined8 param_2)

{
  FUN_1002ff600(param_1,param_2,&DAT_100fbe5c8,&DAT_100c406d0,FUN_100308430);
  return;
}



/* Address: 0x1002ff600 | FUN_1002ff600 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1
FUN_1002ff600(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  undefined1 local_51;
  
  if (DAT_100fc09c8 != -1) {
    _swift_once(&DAT_100fc09c8,FUN_100357ea0);
  }
  FUN_1000da768(auStack_90);
  FUN_100004640(auStack_90,local_78);
  uVar1 = local_78;
  (**(code **)(local_70 + 0x10))(local_78,local_70);
  FUN_100004594(auStack_90);
  lVar2 = 0;
  FUN_100357efc();
  _swift_allocObject();
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(undefined8 *)(lVar2 + 0x60) = 0;
  *(undefined8 *)(lVar2 + 0x58) = 0;
  *(undefined8 *)(lVar2 + 0x70) = 0;
  *(undefined8 *)(lVar2 + 0x68) = 0;
  *(undefined8 *)(lVar2 + 0x80) = 0;
  *(undefined8 *)(lVar2 + 0x78) = 0;
  *(undefined8 *)(lVar2 + 0x90) = 0;
  *(undefined8 *)(lVar2 + 0x88) = 0;
  *(undefined8 *)(lVar2 + 0xa0) = 0;
  *(undefined8 *)(lVar2 + 0x98) = 0;
  *(undefined8 *)(lVar2 + 0xb0) = 0;
  *(undefined8 *)(lVar2 + 0xa8) = 0;
  *(undefined8 *)(lVar2 + 0x10) = uVar1;
  local_80 = param_1;
  local_78 = param_2;
  local_70 = lVar2;
  FUN_1000037f0(param_3,param_4);
  (extension_CoreData)::__C::NSManagedObjectContext::_performAndWait();
  _swift_release(lVar2);
  return local_51;
}



/* Address: 0x1002ff75c | FUN_1002ff75c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002ff75c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_80 [16];
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  
  if (DAT_100fc09c8 != -1) {
    _swift_once(&DAT_100fc09c8,FUN_100357ea0);
  }
  FUN_1000da768(auStack_80);
  FUN_100004640(auStack_80,local_68);
  uVar1 = local_68;
  (**(code **)(local_60 + 0x10))(local_68,local_60);
  FUN_100004594(auStack_80);
  lVar2 = 0;
  FUN_100357efc();
  _swift_allocObject();
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(undefined8 *)(lVar2 + 0x60) = 0;
  *(undefined8 *)(lVar2 + 0x58) = 0;
  *(undefined8 *)(lVar2 + 0x70) = 0;
  *(undefined8 *)(lVar2 + 0x68) = 0;
  *(undefined8 *)(lVar2 + 0x80) = 0;
  *(undefined8 *)(lVar2 + 0x78) = 0;
  *(undefined8 *)(lVar2 + 0x90) = 0;
  *(undefined8 *)(lVar2 + 0x88) = 0;
  *(undefined8 *)(lVar2 + 0xa0) = 0;
  *(undefined8 *)(lVar2 + 0x98) = 0;
  *(undefined8 *)(lVar2 + 0xb0) = 0;
  *(undefined8 *)(lVar2 + 0xa8) = 0;
  *(undefined8 *)(lVar2 + 0x10) = uVar1;
  local_70 = param_1;
  local_68 = param_2;
  local_60 = lVar2;
  FUN_1000037f0(&DAT_100fbe600,&DAT_100c40700);
  (extension_CoreData)::__C::NSManagedObjectContext::_performAndWait();
  _swift_release(lVar2);
  return;
}



/* Address: 0x1002ff8b4 | FUN_1002ff8b4 */

void FUN_1002ff8b4(void)

{
  long lVar1;
  URL UVar2;
  long unaff_x20;
  
  lVar1 = _TtC9PasteCore18DiagnosticsManager::logDirectory;
  UVar2 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar2.unknown + -8) + 8))(unaff_x20 + lVar1,UVar2.unknown);
  _swift_unknownObjectRelease
            (*(undefined8 *)(unaff_x20 + _TtC9PasteCore18DiagnosticsManager::configuration));
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC9PasteCore18DiagnosticsManager::fileOutput));
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC9PasteCore18DiagnosticsManager::persist + 8));
  _swift_release(*(undefined8 *)
                  (unaff_x20 + _TtC9PasteCore18DiagnosticsManager::pasteboardHistoryManager));
  return;
}



/* Address: 0x1002ff938 | FUN_1002ff938 */

void FUN_1002ff938(void)

{
  long lVar1;
  URL UVar2;
  long unaff_x20;
  
  lVar1 = _TtC9PasteCore18DiagnosticsManager::logDirectory;
  UVar2 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar2.unknown + -8) + 8))(unaff_x20 + lVar1,UVar2.unknown);
  _swift_unknownObjectRelease
            (*(undefined8 *)(unaff_x20 + _TtC9PasteCore18DiagnosticsManager::configuration));
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC9PasteCore18DiagnosticsManager::fileOutput));
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC9PasteCore18DiagnosticsManager::persist + 8));
  _swift_release(*(undefined8 *)
                  (unaff_x20 + _TtC9PasteCore18DiagnosticsManager::pasteboardHistoryManager));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1002ff9c8 | FUN_1002ff9c8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002ff9c8(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  void *aBlock;
  ID IVar5;
  undefined *puVar6;
  String *pSVar7;
  String SVar8;
  String SVar9;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  undefined *local_60;
  char local_58;
  
  local_60 = (undefined *)0x0;
  local_58 = -1;
  puVar3 = &DAT_100ec98f8;
  _swift_allocObject(&DAT_100ec98f8,0x28,7);
  *(undefined ***)(puVar3 + 0x10) = &local_60;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  puVar4 = &DAT_100ec9920;
  _swift_allocObject(&DAT_100ec9920,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_1003084fc;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  local_70 = FUN_1000386a0;
  local_90 = PTR___NSConcreteStackBlock_100ea82a0;
  local_88 = 0x42000000;
  local_80 = FUN_1000d5218;
  puStack_78 = &DAT_100ec9938;
  local_68 = puVar4;
  aBlock = __Block_copy(&local_90);
  puVar6 = local_68;
  _swift_retain(puVar4);
  _swift_release(puVar6);
  IVar5 = objc_stub::catchExceptionIn_((ID)&objc::class_t::ObjCExceptionCatcher,aBlock);
  __Block_release(aBlock);
  puVar6 = puVar4;
  _swift_isEscapingClosureAtFileLocation(puVar4,"",0x83,0xe,0x3d,1);
  _swift_release(puVar4);
  puVar4 = local_60;
  if (((ulong)puVar6 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1002ffc64);
    (*pcVar1)();
  }
  if (IVar5 == 0) {
    if (local_58 == '\x01') {
      local_90 = local_60;
      bVar2 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
      FUN_100308524(puVar4,1);
      if ((bVar2 & 1) != 0) {
        puVar4 = &DAT_100fc1bb0;
        FUN_1000037f0(&DAT_100fc1bb0,&DAT_100c422e0);
        _swift_willThrowTypedImpl
                  (&local_90,puVar4,
                   PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      }
    }
    else if (local_58 == -1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1002ffc68);
      (*pcVar1)();
    }
  }
  else {
    objc_stub::name(IVar5);
    SVar8 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    IVar5 = objc_stub::reason(IVar5);
    if (IVar5 == 0) {
      SVar9 = (String)ZEXT816(0);
    }
    else {
      SVar9 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    }
    pSVar7 = (String *)0x0;
    FUN_10030854c();
    _swift_allocError(&DAT_100eca1c0,pSVar7,0,0);
    *pSVar7 = SVar8;
    pSVar7[1] = SVar9;
    _swift_willThrow();
  }
  FUN_100308538(local_60,local_58);
  _swift_release(puVar3);
  return;
}



/* Address: 0x1002ffc68 | FUN_1002ffc68 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002ffc68(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  void *aBlock;
  ID IVar5;
  undefined *puVar6;
  String *pSVar7;
  undefined8 uVar8;
  char cVar9;
  String SVar10;
  String SVar11;
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *puStack_80;
  code *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined8 uStack_60;
  char local_58;
  
  local_68 = (undefined *)0x0;
  uStack_60 = 0;
  local_58 = -1;
  puVar3 = &DAT_100ec9970;
  _swift_allocObject(&DAT_100ec9970,0x28,7);
  *(undefined ***)(puVar3 + 0x10) = &local_68;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  *(undefined8 *)(puVar3 + 0x20) = param_3;
  puVar4 = &DAT_100ec9998;
  _swift_allocObject(&DAT_100ec9998,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_10030858c;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  local_78 = thunk_FUN_1000386a0;
  local_98 = PTR___NSConcreteStackBlock_100ea82a0;
  local_90 = 0x42000000;
  local_88 = FUN_1000d5218;
  puStack_80 = &DAT_100ec99b0;
  local_70 = puVar4;
  aBlock = __Block_copy(&local_98);
  puVar6 = local_70;
  _swift_retain(puVar4);
  _swift_release(puVar6);
  IVar5 = objc_stub::catchExceptionIn_((ID)&objc::class_t::ObjCExceptionCatcher,aBlock);
  __Block_release(aBlock);
  puVar6 = puVar4;
  _swift_isEscapingClosureAtFileLocation(puVar4,"",0x83,0xe,0x3d,1);
  _swift_release(puVar4);
  cVar9 = local_58;
  uVar8 = uStack_60;
  puVar4 = local_68;
  if (((ulong)puVar6 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1002fff28);
    (*pcVar1)();
  }
  if (IVar5 == 0) {
    if (local_58 == '\x01') {
      local_98 = local_68;
      bVar2 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
      FUN_100308598(puVar4,uVar8,1);
      puVar4 = local_68;
      uVar8 = uStack_60;
      cVar9 = local_58;
      if ((bVar2 & 1) != 0) {
        puVar4 = &DAT_100fc1bb0;
        FUN_1000037f0(&DAT_100fc1bb0,&DAT_100c422e0);
        _swift_willThrowTypedImpl
                  (&local_98,puVar4,
                   PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
        puVar4 = local_68;
        uVar8 = uStack_60;
        cVar9 = local_58;
      }
    }
    else {
      if (local_58 == -1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1002fff2c);
        (*pcVar1)();
      }
      *param_1 = local_68;
      param_1[1] = uStack_60;
      FUN_100308598(local_68,uStack_60,local_58);
    }
  }
  else {
    objc_stub::name(IVar5);
    SVar10 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    IVar5 = objc_stub::reason(IVar5);
    if (IVar5 == 0) {
      SVar11 = (String)ZEXT816(0);
    }
    else {
      SVar11 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    }
    pSVar7 = (String *)0x0;
    FUN_10030854c();
    _swift_allocError(&DAT_100eca1c0,pSVar7,0,0);
    *pSVar7 = SVar10;
    pSVar7[1] = SVar11;
    _swift_willThrow();
    puVar4 = local_68;
    uVar8 = uStack_60;
    cVar9 = local_58;
  }
  FUN_1003085ac(puVar4,uVar8,cVar9);
  _swift_release(puVar3);
  return;
}



/* Address: 0x1002fff2c | FUN_1002fff2c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002fff2c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  void *aBlock;
  ID IVar5;
  undefined *puVar6;
  String *pSVar7;
  String SVar8;
  String SVar9;
  undefined *local_c8;
  undefined8 local_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  code *local_a8;
  undefined *local_a0;
  char local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined *local_48;
  
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  local_60 = 0xff;
  puVar3 = &DAT_100ec9ad8;
  _swift_allocObject(&DAT_100ec9ad8,0x28,7);
  *(undefined8 **)(puVar3 + 0x10) = &local_90;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  *(undefined8 *)(puVar3 + 0x20) = param_3;
  puVar4 = &DAT_100ec9b00;
  _swift_allocObject(&DAT_100ec9b00,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_10030867c;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  local_a8 = thunk_FUN_1000386a0;
  local_c8 = PTR___NSConcreteStackBlock_100ea82a0;
  local_c0 = 0x42000000;
  pcStack_b8 = FUN_1000d5218;
  puStack_b0 = &DAT_100ec9b18;
  local_a0 = puVar4;
  aBlock = __Block_copy(&local_c8);
  puVar6 = local_a0;
  _swift_retain(puVar4);
  _swift_release(puVar6);
  IVar5 = objc_stub::catchExceptionIn_((ID)&objc::class_t::ObjCExceptionCatcher,aBlock);
  __Block_release(aBlock);
  puVar6 = puVar4;
  _swift_isEscapingClosureAtFileLocation(puVar4,"",0x83,0xe,0x3d,1);
  _swift_release(puVar4);
  if (((ulong)puVar6 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100300220);
    (*pcVar1)();
  }
  if (IVar5 == 0) {
    FUN_100011090(&local_90,&local_c8,&DAT_100fbe638,&DAT_100c40748);
    if (local_98 == -1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100300224);
      (*pcVar1)();
    }
    if (local_98 != '\x01') {
      *param_1 = local_c8;
      param_1[2] = pcStack_b8;
      param_1[1] = local_c0;
      param_1[4] = local_a8;
      param_1[3] = puStack_b0;
      param_1[5] = local_a0;
      FUN_100005808(&local_90,&DAT_100fbe638,&DAT_100c40748);
      _swift_release(puVar3);
      return;
    }
    local_48 = local_c8;
    bVar2 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar2 & 1) != 0) {
      puVar4 = &DAT_100fc1bb0;
      FUN_1000037f0(&DAT_100fc1bb0,&DAT_100c422e0);
      _swift_willThrowTypedImpl
                (&local_48,puVar4,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
  }
  else {
    objc_stub::name(IVar5);
    SVar8 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    IVar5 = objc_stub::reason(IVar5);
    if (IVar5 == 0) {
      SVar9 = (String)ZEXT816(0);
    }
    else {
      SVar9 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    }
    pSVar7 = (String *)0x0;
    FUN_10030854c();
    _swift_allocError(&DAT_100eca1c0,pSVar7,0,0);
    *pSVar7 = SVar8;
    pSVar7[1] = SVar9;
    _swift_willThrow();
  }
  FUN_100005808(&local_90,&DAT_100fbe638,&DAT_100c40748);
  _swift_release(puVar3);
  return;
}



/* Address: 0x100300224 | FUN_100300224 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100300224(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  code *pcVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  void *aBlock;
  ID IVar5;
  undefined *puVar6;
  String *pSVar7;
  String SVar8;
  String SVar9;
  undefined *local_b0;
  undefined8 local_a8;
  code *pcStack_a0;
  undefined *local_98;
  code *pcStack_90;
  undefined *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined2 local_58;
  undefined *local_48;
  
  local_60 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  local_58 = 0xff00;
  puVar3 = &DAT_100ec9bc8;
  _swift_allocObject(&DAT_100ec9bc8,0x28,7);
  *(undefined8 **)(puVar3 + 0x10) = &local_80;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  *(undefined8 *)(puVar3 + 0x20) = param_3;
  puVar4 = &DAT_100ec9bf0;
  _swift_allocObject(&DAT_100ec9bf0,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_1003086e4;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  pcStack_90 = thunk_FUN_1000386a0;
  local_b0 = PTR___NSConcreteStackBlock_100ea82a0;
  local_a8 = 0x42000000;
  pcStack_a0 = FUN_1000d5218;
  local_98 = &DAT_100ec9c08;
  local_88 = puVar4;
  aBlock = __Block_copy(&local_b0);
  puVar6 = local_88;
  _swift_retain(puVar4);
  _swift_release(puVar6);
  IVar5 = ObjCExceptionCatcher::catchExceptionIn_
                    ((ID)&objc::class_t::ObjCExceptionCatcher,(ID)aBlock,param_5);
  __Block_release(aBlock);
  puVar6 = puVar4;
  _swift_isEscapingClosureAtFileLocation(puVar4,"",0x83,0xe,0x3d,1);
  _swift_release(puVar4);
  if (((ulong)puVar6 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100300524);
    (*pcVar1)();
  }
  if (IVar5 == 0) {
    FUN_100011090(&local_80,&local_b0,&DAT_100fbe658,&DAT_100c40768);
    if (0xfe < (byte)((ulong)local_88 >> 8)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100300528);
      (*pcVar1)();
    }
    if (((ushort)local_88 & 0xff00) != 0x100) {
      *param_1 = local_b0;
      param_1[2] = pcStack_a0;
      param_1[1] = local_a8;
      param_1[4] = pcStack_90;
      param_1[3] = local_98;
      *(undefined1 *)(param_1 + 5) = local_88._0_1_;
      FUN_100005808(&local_80,&DAT_100fbe658,&DAT_100c40768);
      _swift_release(puVar3);
      return;
    }
    local_48 = local_b0;
    bVar2 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar2 & 1) != 0) {
      puVar4 = &DAT_100fc1bb0;
      FUN_1000037f0(&DAT_100fc1bb0,&DAT_100c422e0);
      _swift_willThrowTypedImpl
                (&local_48,puVar4,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
  }
  else {
    objc_stub::name(IVar5);
    SVar8 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    IVar5 = objc_stub::reason(IVar5);
    if (IVar5 == 0) {
      SVar9 = (String)ZEXT816(0);
    }
    else {
      SVar9 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    }
    pSVar7 = (String *)0x0;
    FUN_10030854c();
    _swift_allocError(&DAT_100eca1c0,pSVar7,0,0);
    *pSVar7 = SVar8;
    pSVar7[1] = SVar9;
    _swift_willThrow();
  }
  FUN_100005808(&local_80,&DAT_100fbe658,&DAT_100c40768);
  _swift_release(puVar3);
  return;
}



/* Address: 0x100300528 | FUN_100300528 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100300528(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  void *aBlock;
  ID IVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  String *pSVar9;
  long extraout_x8;
  long extraout_x8_00;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  String SVar15;
  String SVar16;
  code *apcStack_a0 [5];
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  puVar3 = &DAT_100fbe640;
  apcStack_a0[1] = (code *)param_1;
  FUN_1000037f0(&DAT_100fbe640,&DAT_100c40750);
  lVar12 = *(long *)(*(long *)(puVar3 + -8) + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(lVar12 + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)apcStack_a0 - extraout_x8;
  puVar3 = &DAT_100fbe648;
  FUN_1000037f0(&DAT_100fbe648,&DAT_100c40758);
  lVar11 = *(long *)(puVar3 + -8);
  (**(code **)(lVar11 + 0x38))(lVar10,1,1,puVar3);
  puVar4 = &DAT_100ec9b50;
  _swift_allocObject(&DAT_100ec9b50,0x28,7);
  *(long *)(puVar4 + 0x10) = lVar10;
  *(undefined8 *)(puVar4 + 0x18) = param_2;
  *(undefined8 *)(puVar4 + 0x20) = param_3;
  puVar5 = &DAT_100ec9b78;
  _swift_allocObject(&DAT_100ec9b78,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_1003086a8;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  local_70 = thunk_FUN_1000386a0;
  apcStack_a0[2] = (code *)PTR___NSConcreteStackBlock_100ea82a0;
  apcStack_a0[3] = (code *)0x42000000;
  apcStack_a0[4] = FUN_1000d5218;
  puStack_78 = &DAT_100ec9b90;
  local_68 = puVar5;
  aBlock = __Block_copy(apcStack_a0 + 2);
  puVar7 = local_68;
  _swift_retain(puVar5);
  _swift_release(puVar7);
  IVar6 = objc_stub::catchExceptionIn_((ID)&objc::class_t::ObjCExceptionCatcher,aBlock);
  __Block_release(aBlock);
  puVar7 = puVar5;
  _swift_isEscapingClosureAtFileLocation(puVar5,"",0x83,0xe,0x3d,1);
  _swift_release(puVar5);
  if (((ulong)puVar7 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100300920);
    (*pcVar1)();
  }
  if (IVar6 == 0) {
    (*(code *)PTR____chkstk_darwin_100ea82c0)();
    lVar13 = lVar10 - (lVar12 + 0xfU & 0xfffffffffffffff0);
    FUN_100011090(lVar10,lVar13,&DAT_100fbe640,&DAT_100c40750);
    lVar12 = lVar13;
    (**(code **)(lVar11 + 0x30))(lVar13,1,puVar3);
    if ((int)lVar12 == 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100300924);
      (*pcVar1)();
    }
    (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
    puVar14 = (undefined8 *)(lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
    FUN_10019ffdc(lVar13,puVar14,&DAT_100fbe648,&DAT_100c40758);
    puVar8 = puVar14;
    _swift_getEnumCaseMultiPayload(puVar14,puVar3);
    if ((int)puVar8 != 1) {
      FUN_10019ffdc(puVar14,apcStack_a0[1],&DAT_100fbe650,&DAT_100c40760);
      FUN_100005808(lVar10,&DAT_100fbe640,&DAT_100c40750);
      _swift_release(puVar4);
      return;
    }
    apcStack_a0[2] = (code *)*puVar14;
    bVar2 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar2 & 1) != 0) {
      puVar3 = &DAT_100fc1bb0;
      FUN_1000037f0(&DAT_100fc1bb0,&DAT_100c422e0);
      _swift_willThrowTypedImpl
                (apcStack_a0 + 2,puVar3,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
  }
  else {
    objc_stub::name(IVar6);
    SVar15 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    IVar6 = objc_stub::reason(IVar6);
    if (IVar6 == 0) {
      SVar16 = (String)ZEXT816(0);
    }
    else {
      SVar16 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    }
    pSVar9 = (String *)0x0;
    FUN_10030854c();
    _swift_allocError(&DAT_100eca1c0,pSVar9,0,0);
    *pSVar9 = SVar15;
    pSVar9[1] = SVar16;
    _swift_willThrow();
  }
  FUN_100005808(lVar10,&DAT_100fbe640,&DAT_100c40750);
  _swift_release(puVar4);
  return;
}



/* Address: 0x100300924 | FUN_100300924 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100300924(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  void *aBlock;
  ID IVar5;
  undefined *puVar6;
  String *pSVar7;
  String SVar8;
  String SVar9;
  undefined *local_c8;
  undefined8 local_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  code *local_a8;
  undefined *local_a0;
  char local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined *local_48;
  
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  local_60 = 0xff;
  puVar3 = &DAT_100ec9c40;
  _swift_allocObject(&DAT_100ec9c40,0x28,7);
  *(undefined8 **)(puVar3 + 0x10) = &local_90;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  *(undefined8 *)(puVar3 + 0x20) = param_3;
  puVar4 = &DAT_100ec9c68;
  _swift_allocObject(&DAT_100ec9c68,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_100308710;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  local_a8 = thunk_FUN_1000386a0;
  local_c8 = PTR___NSConcreteStackBlock_100ea82a0;
  local_c0 = 0x42000000;
  pcStack_b8 = FUN_1000d5218;
  puStack_b0 = &DAT_100ec9c80;
  local_a0 = puVar4;
  aBlock = __Block_copy(&local_c8);
  puVar6 = local_a0;
  _swift_retain(puVar4);
  _swift_release(puVar6);
  IVar5 = objc_stub::catchExceptionIn_((ID)&objc::class_t::ObjCExceptionCatcher,aBlock);
  __Block_release(aBlock);
  puVar6 = puVar4;
  _swift_isEscapingClosureAtFileLocation(puVar4,"",0x83,0xe,0x3d,1);
  _swift_release(puVar4);
  if (((ulong)puVar6 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100300c18);
    (*pcVar1)();
  }
  if (IVar5 == 0) {
    FUN_100011090(&local_90,&local_c8,&DAT_100fbe660,&DAT_100c40770);
    if (local_98 == -1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100300c1c);
      (*pcVar1)();
    }
    if (local_98 != '\x01') {
      *param_1 = local_c8;
      param_1[2] = pcStack_b8;
      param_1[1] = local_c0;
      param_1[4] = local_a8;
      param_1[3] = puStack_b0;
      param_1[5] = local_a0;
      FUN_100005808(&local_90,&DAT_100fbe660,&DAT_100c40770);
      _swift_release(puVar3);
      return;
    }
    local_48 = local_c8;
    bVar2 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar2 & 1) != 0) {
      puVar4 = &DAT_100fc1bb0;
      FUN_1000037f0(&DAT_100fc1bb0,&DAT_100c422e0);
      _swift_willThrowTypedImpl
                (&local_48,puVar4,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
  }
  else {
    objc_stub::name(IVar5);
    SVar8 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    IVar5 = objc_stub::reason(IVar5);
    if (IVar5 == 0) {
      SVar9 = (String)ZEXT816(0);
    }
    else {
      SVar9 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    }
    pSVar7 = (String *)0x0;
    FUN_10030854c();
    _swift_allocError(&DAT_100eca1c0,pSVar7,0,0);
    *pSVar7 = SVar8;
    pSVar7[1] = SVar9;
    _swift_willThrow();
  }
  FUN_100005808(&local_90,&DAT_100fbe660,&DAT_100c40770);
  _swift_release(puVar3);
  return;
}



/* Address: 0x100300c1c | FUN_100300c1c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100300c1c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  void *aBlock;
  ID IVar5;
  undefined *puVar6;
  String *pSVar7;
  String SVar8;
  String SVar9;
  undefined *local_c8;
  undefined8 local_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  code *local_a8;
  undefined *local_a0;
  char local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined *local_48;
  
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  local_60 = 0xff;
  puVar3 = &DAT_100ec9f88;
  _swift_allocObject(&DAT_100ec9f88,0x28,7);
  *(undefined8 **)(puVar3 + 0x10) = &local_90;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  *(undefined8 *)(puVar3 + 0x20) = param_3;
  puVar4 = &DAT_100ec9fb0;
  _swift_allocObject(&DAT_100ec9fb0,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_100308864;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  local_a8 = thunk_FUN_1000386a0;
  local_c8 = PTR___NSConcreteStackBlock_100ea82a0;
  local_c0 = 0x42000000;
  pcStack_b8 = FUN_1000d5218;
  puStack_b0 = &DAT_100ec9fc8;
  local_a0 = puVar4;
  aBlock = __Block_copy(&local_c8);
  puVar6 = local_a0;
  _swift_retain(puVar4);
  _swift_release(puVar6);
  IVar5 = objc_stub::catchExceptionIn_((ID)&objc::class_t::ObjCExceptionCatcher,aBlock);
  __Block_release(aBlock);
  puVar6 = puVar4;
  _swift_isEscapingClosureAtFileLocation(puVar4,"",0x83,0xe,0x3d,1);
  _swift_release(puVar4);
  if (((ulong)puVar6 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100300f10);
    (*pcVar1)();
  }
  if (IVar5 == 0) {
    FUN_100011090(&local_90,&local_c8,&DAT_100fbe6a8,&DAT_100c407b8);
    if (local_98 == -1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100300f14);
      (*pcVar1)();
    }
    if (local_98 != '\x01') {
      *param_1 = local_c8;
      param_1[2] = pcStack_b8;
      param_1[1] = local_c0;
      param_1[4] = local_a8;
      param_1[3] = puStack_b0;
      param_1[5] = local_a0;
      FUN_100005808(&local_90,&DAT_100fbe6a8,&DAT_100c407b8);
      _swift_release(puVar3);
      return;
    }
    local_48 = local_c8;
    bVar2 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar2 & 1) != 0) {
      puVar4 = &DAT_100fc1bb0;
      FUN_1000037f0(&DAT_100fc1bb0,&DAT_100c422e0);
      _swift_willThrowTypedImpl
                (&local_48,puVar4,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
  }
  else {
    objc_stub::name(IVar5);
    SVar8 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    IVar5 = objc_stub::reason(IVar5);
    if (IVar5 == 0) {
      SVar9 = (String)ZEXT816(0);
    }
    else {
      SVar9 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    }
    pSVar7 = (String *)0x0;
    FUN_10030854c();
    _swift_allocError(&DAT_100eca1c0,pSVar7,0,0);
    *pSVar7 = SVar8;
    pSVar7[1] = SVar9;
    _swift_willThrow();
  }
  FUN_100005808(&local_90,&DAT_100fbe6a8,&DAT_100c407b8);
  _swift_release(puVar3);
  return;
}



/* Address: 0x100300f14 | FUN_100300f14 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100300f14(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  void *aBlock;
  ID IVar5;
  undefined *puVar6;
  String *pSVar7;
  String SVar8;
  String SVar9;
  undefined *local_c8;
  undefined8 local_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  code *local_a8;
  undefined *local_a0;
  char local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined *local_48;
  
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  local_60 = 0xff;
  puVar3 = &DAT_100ec9f10;
  _swift_allocObject(&DAT_100ec9f10,0x28,7);
  *(undefined8 **)(puVar3 + 0x10) = &local_90;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  *(undefined8 *)(puVar3 + 0x20) = param_3;
  puVar4 = &DAT_100ec9f38;
  _swift_allocObject(&DAT_100ec9f38,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_100308838;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  local_a8 = thunk_FUN_1000386a0;
  local_c8 = PTR___NSConcreteStackBlock_100ea82a0;
  local_c0 = 0x42000000;
  pcStack_b8 = FUN_1000d5218;
  puStack_b0 = &DAT_100ec9f50;
  local_a0 = puVar4;
  aBlock = __Block_copy(&local_c8);
  puVar6 = local_a0;
  _swift_retain(puVar4);
  _swift_release(puVar6);
  IVar5 = objc_stub::catchExceptionIn_((ID)&objc::class_t::ObjCExceptionCatcher,aBlock);
  __Block_release(aBlock);
  puVar6 = puVar4;
  _swift_isEscapingClosureAtFileLocation(puVar4,"",0x83,0xe,0x3d,1);
  _swift_release(puVar4);
  if (((ulong)puVar6 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100301208);
    (*pcVar1)();
  }
  if (IVar5 == 0) {
    FUN_100011090(&local_90,&local_c8,&DAT_100fbe6a0,&DAT_100c407b0);
    if (local_98 == -1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10030120c);
      (*pcVar1)();
    }
    if (local_98 != '\x01') {
      *param_1 = local_c8;
      param_1[2] = pcStack_b8;
      param_1[1] = local_c0;
      param_1[4] = local_a8;
      param_1[3] = puStack_b0;
      param_1[5] = local_a0;
      FUN_100005808(&local_90,&DAT_100fbe6a0,&DAT_100c407b0);
      _swift_release(puVar3);
      return;
    }
    local_48 = local_c8;
    bVar2 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar2 & 1) != 0) {
      puVar4 = &DAT_100fc1bb0;
      FUN_1000037f0(&DAT_100fc1bb0,&DAT_100c422e0);
      _swift_willThrowTypedImpl
                (&local_48,puVar4,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
  }
  else {
    objc_stub::name(IVar5);
    SVar8 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    IVar5 = objc_stub::reason(IVar5);
    if (IVar5 == 0) {
      SVar9 = (String)ZEXT816(0);
    }
    else {
      SVar9 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    }
    pSVar7 = (String *)0x0;
    FUN_10030854c();
    _swift_allocError(&DAT_100eca1c0,pSVar7,0,0);
    *pSVar7 = SVar8;
    pSVar7[1] = SVar9;
    _swift_willThrow();
  }
  FUN_100005808(&local_90,&DAT_100fbe6a0,&DAT_100c407b0);
  _swift_release(puVar3);
  return;
}



/* Address: 0x10030120c | FUN_10030120c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10030120c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  code *pcVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  void *aBlock;
  ID IVar5;
  undefined *puVar6;
  String *pSVar7;
  String SVar8;
  String SVar9;
  undefined *local_b0;
  undefined8 local_a8;
  code *pcStack_a0;
  undefined *local_98;
  code *pcStack_90;
  undefined *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined *local_48;
  
  local_60 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  local_58 = 0xff;
  puVar3 = &DAT_100ec99e8;
  _swift_allocObject(&DAT_100ec99e8,0x28,7);
  *(undefined8 **)(puVar3 + 0x10) = &local_80;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  *(undefined8 *)(puVar3 + 0x20) = param_3;
  puVar4 = &DAT_100ec9a10;
  _swift_allocObject(&DAT_100ec9a10,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_100308624;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  pcStack_90 = thunk_FUN_1000386a0;
  local_b0 = PTR___NSConcreteStackBlock_100ea82a0;
  local_a8 = 0x42000000;
  pcStack_a0 = FUN_1000d5218;
  local_98 = &DAT_100ec9a28;
  local_88 = puVar4;
  aBlock = __Block_copy(&local_b0);
  puVar6 = local_88;
  _swift_retain(puVar4);
  _swift_release(puVar6);
  IVar5 = ObjCExceptionCatcher::catchExceptionIn_
                    ((ID)&objc::class_t::ObjCExceptionCatcher,(ID)aBlock,param_5);
  __Block_release(aBlock);
  puVar6 = puVar4;
  _swift_isEscapingClosureAtFileLocation(puVar4,"",0x83,0xe,0x3d,1);
  _swift_release(puVar4);
  if (((ulong)puVar6 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1003014fc);
    (*pcVar1)();
  }
  if (IVar5 == 0) {
    FUN_100011090(&local_80,&local_b0,&DAT_100fbe628,&DAT_100c40738);
    if ((char)local_88 == -1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100301500);
      (*pcVar1)();
    }
    if ((char)local_88 != '\x01') {
      *param_1 = local_b0;
      param_1[2] = pcStack_a0;
      param_1[1] = local_a8;
      param_1[4] = pcStack_90;
      param_1[3] = local_98;
      FUN_100005808(&local_80,&DAT_100fbe628,&DAT_100c40738);
      _swift_release(puVar3);
      return;
    }
    local_48 = local_b0;
    bVar2 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar2 & 1) != 0) {
      puVar4 = &DAT_100fc1bb0;
      FUN_1000037f0(&DAT_100fc1bb0,&DAT_100c422e0);
      _swift_willThrowTypedImpl
                (&local_48,puVar4,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
  }
  else {
    objc_stub::name(IVar5);
    SVar8 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    IVar5 = objc_stub::reason(IVar5);
    if (IVar5 == 0) {
      SVar9 = (String)ZEXT816(0);
    }
    else {
      SVar9 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    }
    pSVar7 = (String *)0x0;
    FUN_10030854c();
    _swift_allocError(&DAT_100eca1c0,pSVar7,0,0);
    *pSVar7 = SVar8;
    pSVar7[1] = SVar9;
    _swift_willThrow();
  }
  FUN_100005808(&local_80,&DAT_100fbe628,&DAT_100c40738);
  _swift_release(puVar3);
  return;
}



/* Address: 0x100301500 | FUN_100301500 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100301500(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  code *pcVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  void *aBlock;
  ID IVar5;
  undefined *puVar6;
  String *pSVar7;
  String SVar8;
  String SVar9;
  undefined *local_b0;
  undefined8 local_a8;
  code *pcStack_a0;
  undefined *local_98;
  code *pcStack_90;
  undefined *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined2 local_58;
  undefined *local_48;
  
  local_60 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  local_58 = 0xff00;
  puVar3 = &DAT_100ec9a60;
  _swift_allocObject(&DAT_100ec9a60,0x28,7);
  *(undefined8 **)(puVar3 + 0x10) = &local_80;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  *(undefined8 *)(puVar3 + 0x20) = param_3;
  puVar4 = &DAT_100ec9a88;
  _swift_allocObject(&DAT_100ec9a88,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_100308650;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  pcStack_90 = thunk_FUN_1000386a0;
  local_b0 = PTR___NSConcreteStackBlock_100ea82a0;
  local_a8 = 0x42000000;
  pcStack_a0 = FUN_1000d5218;
  local_98 = &DAT_100ec9aa0;
  local_88 = puVar4;
  aBlock = __Block_copy(&local_b0);
  puVar6 = local_88;
  _swift_retain(puVar4);
  _swift_release(puVar6);
  IVar5 = ObjCExceptionCatcher::catchExceptionIn_
                    ((ID)&objc::class_t::ObjCExceptionCatcher,(ID)aBlock,param_5);
  __Block_release(aBlock);
  puVar6 = puVar4;
  _swift_isEscapingClosureAtFileLocation(puVar4,"",0x83,0xe,0x3d,1);
  _swift_release(puVar4);
  if (((ulong)puVar6 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100301800);
    (*pcVar1)();
  }
  if (IVar5 == 0) {
    FUN_100011090(&local_80,&local_b0,&DAT_100fbe630,&DAT_100c40740);
    if (0xfe < (byte)((ulong)local_88 >> 8)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100301804);
      (*pcVar1)();
    }
    if (((ushort)local_88 & 0xff00) != 0x100) {
      *param_1 = local_b0;
      param_1[2] = pcStack_a0;
      param_1[1] = local_a8;
      param_1[4] = pcStack_90;
      param_1[3] = local_98;
      *(undefined1 *)(param_1 + 5) = local_88._0_1_;
      FUN_100005808(&local_80,&DAT_100fbe630,&DAT_100c40740);
      _swift_release(puVar3);
      return;
    }
    local_48 = local_b0;
    bVar2 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar2 & 1) != 0) {
      puVar4 = &DAT_100fc1bb0;
      FUN_1000037f0(&DAT_100fc1bb0,&DAT_100c422e0);
      _swift_willThrowTypedImpl
                (&local_48,puVar4,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
  }
  else {
    objc_stub::name(IVar5);
    SVar8 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    IVar5 = objc_stub::reason(IVar5);
    if (IVar5 == 0) {
      SVar9 = (String)ZEXT816(0);
    }
    else {
      SVar9 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    }
    pSVar7 = (String *)0x0;
    FUN_10030854c();
    _swift_allocError(&DAT_100eca1c0,pSVar7,0,0);
    *pSVar7 = SVar8;
    pSVar7[1] = SVar9;
    _swift_willThrow();
  }
  FUN_100005808(&local_80,&DAT_100fbe630,&DAT_100c40740);
  _swift_release(puVar3);
  return;
}



/* Address: 0x100301804 | FUN_100301804 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100301804(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  code *pcVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  void *aBlock;
  ID IVar5;
  undefined *puVar6;
  String *pSVar7;
  String SVar8;
  String SVar9;
  undefined *local_b0;
  undefined8 local_a8;
  code *pcStack_a0;
  undefined *local_98;
  code *pcStack_90;
  undefined *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined *local_48;
  
  local_60 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  local_58 = 0xff;
  puVar3 = &DAT_100ec9cb8;
  _swift_allocObject(&DAT_100ec9cb8,0x28,7);
  *(undefined8 **)(puVar3 + 0x10) = &local_80;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  *(undefined8 *)(puVar3 + 0x20) = param_3;
  puVar4 = &DAT_100ec9ce0;
  _swift_allocObject(&DAT_100ec9ce0,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_10030873c;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  pcStack_90 = thunk_FUN_1000386a0;
  local_b0 = PTR___NSConcreteStackBlock_100ea82a0;
  local_a8 = 0x42000000;
  pcStack_a0 = FUN_1000d5218;
  local_98 = &DAT_100ec9cf8;
  local_88 = puVar4;
  aBlock = __Block_copy(&local_b0);
  puVar6 = local_88;
  _swift_retain(puVar4);
  _swift_release(puVar6);
  IVar5 = ObjCExceptionCatcher::catchExceptionIn_
                    ((ID)&objc::class_t::ObjCExceptionCatcher,(ID)aBlock,param_5);
  __Block_release(aBlock);
  puVar6 = puVar4;
  _swift_isEscapingClosureAtFileLocation(puVar4,"",0x83,0xe,0x3d,1);
  _swift_release(puVar4);
  if (((ulong)puVar6 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100301af4);
    (*pcVar1)();
  }
  if (IVar5 == 0) {
    FUN_100011090(&local_80,&local_b0,&DAT_100fbe668,&DAT_100c40778);
    if ((char)local_88 == -1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100301af8);
      (*pcVar1)();
    }
    if ((char)local_88 != '\x01') {
      *param_1 = local_b0;
      param_1[2] = pcStack_a0;
      param_1[1] = local_a8;
      param_1[4] = pcStack_90;
      param_1[3] = local_98;
      FUN_100005808(&local_80,&DAT_100fbe668,&DAT_100c40778);
      _swift_release(puVar3);
      return;
    }
    local_48 = local_b0;
    bVar2 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar2 & 1) != 0) {
      puVar4 = &DAT_100fc1bb0;
      FUN_1000037f0(&DAT_100fc1bb0,&DAT_100c422e0);
      _swift_willThrowTypedImpl
                (&local_48,puVar4,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
  }
  else {
    objc_stub::name(IVar5);
    SVar8 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    IVar5 = objc_stub::reason(IVar5);
    if (IVar5 == 0) {
      SVar9 = (String)ZEXT816(0);
    }
    else {
      SVar9 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    }
    pSVar7 = (String *)0x0;
    FUN_10030854c();
    _swift_allocError(&DAT_100eca1c0,pSVar7,0,0);
    *pSVar7 = SVar8;
    pSVar7[1] = SVar9;
    _swift_willThrow();
  }
  FUN_100005808(&local_80,&DAT_100fbe668,&DAT_100c40778);
  _swift_release(puVar3);
  return;
}



/* Address: 0x100301af8 | FUN_100301af8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100301af8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  void *aBlock;
  ID IVar5;
  undefined *puVar6;
  String *pSVar7;
  String SVar8;
  String SVar9;
  undefined *local_b0;
  undefined8 local_a8;
  code *pcStack_a0;
  undefined *local_98;
  code *pcStack_90;
  undefined *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined *local_48;
  
  local_60 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  local_58 = 0xff;
  puVar3 = &DAT_100ec9d30;
  _swift_allocObject(&DAT_100ec9d30,0x28,7);
  *(undefined8 **)(puVar3 + 0x10) = &local_80;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  *(undefined8 *)(puVar3 + 0x20) = param_3;
  puVar4 = &DAT_100ec9d58;
  _swift_allocObject(&DAT_100ec9d58,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_100308768;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  pcStack_90 = thunk_FUN_1000386a0;
  local_b0 = PTR___NSConcreteStackBlock_100ea82a0;
  local_a8 = 0x42000000;
  pcStack_a0 = FUN_1000d5218;
  local_98 = &DAT_100ec9d70;
  local_88 = puVar4;
  aBlock = __Block_copy(&local_b0);
  puVar6 = local_88;
  _swift_retain(puVar4);
  _swift_release(puVar6);
  IVar5 = objc_stub::catchExceptionIn_((ID)&objc::class_t::ObjCExceptionCatcher,aBlock);
  __Block_release(aBlock);
  puVar6 = puVar4;
  _swift_isEscapingClosureAtFileLocation(puVar4,"",0x83,0xe,0x3d,1);
  _swift_release(puVar4);
  if (((ulong)puVar6 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100301de8);
    (*pcVar1)();
  }
  if (IVar5 == 0) {
    FUN_100011090(&local_80,&local_b0,&DAT_100fbe670,&DAT_100c40780);
    if ((char)local_88 == -1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100301dec);
      (*pcVar1)();
    }
    if ((char)local_88 != '\x01') {
      *param_1 = local_b0;
      param_1[2] = pcStack_a0;
      param_1[1] = local_a8;
      param_1[4] = pcStack_90;
      param_1[3] = local_98;
      FUN_100005808(&local_80,&DAT_100fbe670,&DAT_100c40780);
      _swift_release(puVar3);
      return;
    }
    local_48 = local_b0;
    bVar2 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar2 & 1) != 0) {
      puVar4 = &DAT_100fc1bb0;
      FUN_1000037f0(&DAT_100fc1bb0,&DAT_100c422e0);
      _swift_willThrowTypedImpl
                (&local_48,puVar4,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
  }
  else {
    objc_stub::name(IVar5);
    SVar8 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    IVar5 = objc_stub::reason(IVar5);
    if (IVar5 == 0) {
      SVar9 = (String)ZEXT816(0);
    }
    else {
      SVar9 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    }
    pSVar7 = (String *)0x0;
    FUN_10030854c();
    _swift_allocError(&DAT_100eca1c0,pSVar7,0,0);
    *pSVar7 = SVar8;
    pSVar7[1] = SVar9;
    _swift_willThrow();
  }
  FUN_100005808(&local_80,&DAT_100fbe670,&DAT_100c40780);
  _swift_release(puVar3);
  return;
}



/* Address: 0x100301dec | FUN_100301dec */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100301dec(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  void *aBlock;
  ID IVar5;
  undefined *puVar6;
  String *pSVar7;
  String SVar8;
  String SVar9;
  undefined *local_b0;
  undefined8 local_a8;
  code *pcStack_a0;
  undefined *local_98;
  code *pcStack_90;
  undefined *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined *local_48;
  
  local_60 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  local_58 = 0xff;
  puVar3 = &DAT_100ec9da8;
  _swift_allocObject(&DAT_100ec9da8,0x28,7);
  *(undefined8 **)(puVar3 + 0x10) = &local_80;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  *(undefined8 *)(puVar3 + 0x20) = param_3;
  puVar4 = &DAT_100ec9dd0;
  _swift_allocObject(&DAT_100ec9dd0,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_100308794;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  pcStack_90 = thunk_FUN_1000386a0;
  local_b0 = PTR___NSConcreteStackBlock_100ea82a0;
  local_a8 = 0x42000000;
  pcStack_a0 = FUN_1000d5218;
  local_98 = &DAT_100ec9de8;
  local_88 = puVar4;
  aBlock = __Block_copy(&local_b0);
  puVar6 = local_88;
  _swift_retain(puVar4);
  _swift_release(puVar6);
  IVar5 = objc_stub::catchExceptionIn_((ID)&objc::class_t::ObjCExceptionCatcher,aBlock);
  __Block_release(aBlock);
  puVar6 = puVar4;
  _swift_isEscapingClosureAtFileLocation(puVar4,"",0x83,0xe,0x3d,1);
  _swift_release(puVar4);
  if (((ulong)puVar6 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1003020dc);
    (*pcVar1)();
  }
  if (IVar5 == 0) {
    FUN_100011090(&local_80,&local_b0,&DAT_100fbe678,&DAT_100c40788);
    if ((char)local_88 == -1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1003020e0);
      (*pcVar1)();
    }
    if ((char)local_88 != '\x01') {
      *param_1 = local_b0;
      param_1[2] = pcStack_a0;
      param_1[1] = local_a8;
      param_1[4] = pcStack_90;
      param_1[3] = local_98;
      FUN_100005808(&local_80,&DAT_100fbe678,&DAT_100c40788);
      _swift_release(puVar3);
      return;
    }
    local_48 = local_b0;
    bVar2 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar2 & 1) != 0) {
      puVar4 = &DAT_100fc1bb0;
      FUN_1000037f0(&DAT_100fc1bb0,&DAT_100c422e0);
      _swift_willThrowTypedImpl
                (&local_48,puVar4,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
  }
  else {
    objc_stub::name(IVar5);
    SVar8 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    IVar5 = objc_stub::reason(IVar5);
    if (IVar5 == 0) {
      SVar9 = (String)ZEXT816(0);
    }
    else {
      SVar9 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    }
    pSVar7 = (String *)0x0;
    FUN_10030854c();
    _swift_allocError(&DAT_100eca1c0,pSVar7,0,0);
    *pSVar7 = SVar8;
    pSVar7[1] = SVar9;
    _swift_willThrow();
  }
  FUN_100005808(&local_80,&DAT_100fbe678,&DAT_100c40788);
  _swift_release(puVar3);
  return;
}



/* Address: 0x1003020e0 | FUN_1003020e0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003020e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  code *pcVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  void *aBlock;
  ID IVar5;
  undefined *puVar6;
  String *pSVar7;
  String SVar8;
  String SVar9;
  undefined *local_b0;
  undefined8 local_a8;
  code *pcStack_a0;
  undefined *local_98;
  code *pcStack_90;
  undefined *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined2 local_58;
  undefined *local_48;
  
  local_60 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  local_58 = 0xff00;
  puVar3 = &DAT_100ec9e20;
  _swift_allocObject(&DAT_100ec9e20,0x28,7);
  *(undefined8 **)(puVar3 + 0x10) = &local_80;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  *(undefined8 *)(puVar3 + 0x20) = param_3;
  puVar4 = &DAT_100ec9e48;
  _swift_allocObject(&DAT_100ec9e48,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_1003087d0;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  pcStack_90 = thunk_FUN_1000386a0;
  local_b0 = PTR___NSConcreteStackBlock_100ea82a0;
  local_a8 = 0x42000000;
  pcStack_a0 = FUN_1000d5218;
  local_98 = &DAT_100ec9e60;
  local_88 = puVar4;
  aBlock = __Block_copy(&local_b0);
  puVar6 = local_88;
  _swift_retain(puVar4);
  _swift_release(puVar6);
  IVar5 = ObjCExceptionCatcher::catchExceptionIn_
                    ((ID)&objc::class_t::ObjCExceptionCatcher,(ID)aBlock,param_5);
  __Block_release(aBlock);
  puVar6 = puVar4;
  _swift_isEscapingClosureAtFileLocation(puVar4,"",0x83,0xe,0x3d,1);
  _swift_release(puVar4);
  if (((ulong)puVar6 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1003023e0);
    (*pcVar1)();
  }
  if (IVar5 == 0) {
    FUN_100011090(&local_80,&local_b0,&DAT_100fbe680,&DAT_100c40790);
    if (0xfe < (byte)((ulong)local_88 >> 8)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1003023e4);
      (*pcVar1)();
    }
    if (((ushort)local_88 & 0xff00) != 0x100) {
      *param_1 = local_b0;
      param_1[2] = pcStack_a0;
      param_1[1] = local_a8;
      param_1[4] = pcStack_90;
      param_1[3] = local_98;
      *(undefined1 *)(param_1 + 5) = local_88._0_1_;
      FUN_100005808(&local_80,&DAT_100fbe680,&DAT_100c40790);
      _swift_release(puVar3);
      return;
    }
    local_48 = local_b0;
    bVar2 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar2 & 1) != 0) {
      puVar4 = &DAT_100fc1bb0;
      FUN_1000037f0(&DAT_100fc1bb0,&DAT_100c422e0);
      _swift_willThrowTypedImpl
                (&local_48,puVar4,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
  }
  else {
    objc_stub::name(IVar5);
    SVar8 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    IVar5 = objc_stub::reason(IVar5);
    if (IVar5 == 0) {
      SVar9 = (String)ZEXT816(0);
    }
    else {
      SVar9 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    }
    pSVar7 = (String *)0x0;
    FUN_10030854c();
    _swift_allocError(&DAT_100eca1c0,pSVar7,0,0);
    *pSVar7 = SVar8;
    pSVar7[1] = SVar9;
    _swift_willThrow();
  }
  FUN_100005808(&local_80,&DAT_100fbe680,&DAT_100c40790);
  _swift_release(puVar3);
  return;
}



/* Address: 0x1003023e4 | FUN_1003023e4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003023e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  void *aBlock;
  ID IVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  String *pSVar9;
  long extraout_x8;
  long extraout_x8_00;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  String SVar15;
  String SVar16;
  code *apcStack_a0 [5];
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  puVar3 = &DAT_100fbe688;
  apcStack_a0[1] = (code *)param_1;
  FUN_1000037f0(&DAT_100fbe688,&DAT_100c40798);
  lVar12 = *(long *)(*(long *)(puVar3 + -8) + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(lVar12 + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)apcStack_a0 - extraout_x8;
  puVar3 = &DAT_100fbe690;
  FUN_1000037f0(&DAT_100fbe690,&DAT_100c407a0);
  lVar11 = *(long *)(puVar3 + -8);
  (**(code **)(lVar11 + 0x38))(lVar10,1,1,puVar3);
  puVar4 = &DAT_100ec9e98;
  _swift_allocObject(&DAT_100ec9e98,0x28,7);
  *(long *)(puVar4 + 0x10) = lVar10;
  *(undefined8 *)(puVar4 + 0x18) = param_2;
  *(undefined8 *)(puVar4 + 0x20) = param_3;
  puVar5 = &DAT_100ec9ec0;
  _swift_allocObject(&DAT_100ec9ec0,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_1003087fc;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  local_70 = thunk_FUN_1000386a0;
  apcStack_a0[2] = (code *)PTR___NSConcreteStackBlock_100ea82a0;
  apcStack_a0[3] = (code *)0x42000000;
  apcStack_a0[4] = FUN_1000d5218;
  puStack_78 = &DAT_100ec9ed8;
  local_68 = puVar5;
  aBlock = __Block_copy(apcStack_a0 + 2);
  puVar7 = local_68;
  _swift_retain(puVar5);
  _swift_release(puVar7);
  IVar6 = objc_stub::catchExceptionIn_((ID)&objc::class_t::ObjCExceptionCatcher,aBlock);
  __Block_release(aBlock);
  puVar7 = puVar5;
  _swift_isEscapingClosureAtFileLocation(puVar5,"",0x83,0xe,0x3d,1);
  _swift_release(puVar5);
  if (((ulong)puVar7 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1003027dc);
    (*pcVar1)();
  }
  if (IVar6 == 0) {
    (*(code *)PTR____chkstk_darwin_100ea82c0)();
    lVar13 = lVar10 - (lVar12 + 0xfU & 0xfffffffffffffff0);
    FUN_100011090(lVar10,lVar13,&DAT_100fbe688,&DAT_100c40798);
    lVar12 = lVar13;
    (**(code **)(lVar11 + 0x30))(lVar13,1,puVar3);
    if ((int)lVar12 == 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1003027e0);
      (*pcVar1)();
    }
    (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
    puVar14 = (undefined8 *)(lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
    FUN_10019ffdc(lVar13,puVar14,&DAT_100fbe690,&DAT_100c407a0);
    puVar8 = puVar14;
    _swift_getEnumCaseMultiPayload(puVar14,puVar3);
    if ((int)puVar8 != 1) {
      FUN_10019ffdc(puVar14,apcStack_a0[1],&DAT_100fbe698,&DAT_100c407a8);
      FUN_100005808(lVar10,&DAT_100fbe688,&DAT_100c40798);
      _swift_release(puVar4);
      return;
    }
    apcStack_a0[2] = (code *)*puVar14;
    bVar2 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar2 & 1) != 0) {
      puVar3 = &DAT_100fc1bb0;
      FUN_1000037f0(&DAT_100fc1bb0,&DAT_100c422e0);
      _swift_willThrowTypedImpl
                (apcStack_a0 + 2,puVar3,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
  }
  else {
    objc_stub::name(IVar6);
    SVar15 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    IVar6 = objc_stub::reason(IVar6);
    if (IVar6 == 0) {
      SVar16 = (String)ZEXT816(0);
    }
    else {
      SVar16 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    }
    pSVar9 = (String *)0x0;
    FUN_10030854c();
    _swift_allocError(&DAT_100eca1c0,pSVar9,0,0);
    *pSVar9 = SVar15;
    pSVar9[1] = SVar16;
    _swift_willThrow();
  }
  FUN_100005808(lVar10,&DAT_100fbe688,&DAT_100c40798);
  _swift_release(puVar4);
  return;
}



/* Address: 0x1003027e0 | FUN_1003027e0 */

void FUN_1003027e0(undefined8 *param_1,code *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 local_40 [2];
  
  (*param_2)(local_40);
  uVar2 = *param_1;
  *param_1 = local_40[0];
  uVar1 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = 0;
  FUN_100308538(uVar2,uVar1);
  return;
}



/* Address: 0x10030283c | FUN_10030283c */

void FUN_10030283c(undefined8 *param_1,code *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 local_48;
  undefined8 uStack_40;
  
  (*param_2)(&local_48);
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = local_48;
  param_1[1] = uStack_40;
  uVar3 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = 0;
  FUN_1003085ac(uVar1,uVar2,uVar3);
  return;
}



/* Address: 0x10030289c | FUN_10030289c */

/* WARNING: Removing unreachable block (ram,0x0001003028d4) */

void FUN_10030289c(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  
  (*param_2)(&local_b8);
  uStack_78 = uStack_b0;
  local_80 = local_b8;
  uStack_68 = uStack_a0;
  uStack_70 = local_a8;
  uStack_58 = uStack_90;
  local_60 = local_98;
  local_50 = 0;
  FUN_1001a7c4c(&local_80,param_1,param_4,param_5);
  return;
}



/* Address: 0x100302928 | FUN_100302928 */

/* WARNING: Removing unreachable block (ram,0x000100302960) */

void FUN_100302928(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  uint7 uStack_7e;
  undefined1 uStack_77;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_4e;
  
  (*param_2)(&local_a0);
  uStack_77 = 0;
  uStack_68 = uStack_98;
  local_70 = local_a0;
  uStack_60 = uStack_90;
  uStack_4e = (ulong)uStack_7e;
  FUN_1001a7c4c(&local_70,param_1,param_4,param_5);
  return;
}



/* Address: 0x1003029b0 | FUN_1003029b0 */

/* WARNING: Removing unreachable block (ram,0x0001003029e8) */

void FUN_1003029b0(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  uint7 uStack_7f;
  undefined1 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_4f;
  
  (*param_2)(&local_a0);
  uStack_78 = 0;
  uStack_68 = uStack_98;
  local_70 = local_a0;
  uStack_60 = uStack_90;
  uStack_4f = (ulong)uStack_7f;
  FUN_1001a7c4c(&local_70,param_1,param_4,param_5);
  return;
}



/* Address: 0x100302a38 | FUN_100302a38 */

/* WARNING: Removing unreachable block (ram,0x000100302af4) */

void FUN_100302a38(undefined8 param_1,code *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  
  lVar1 = param_4;
  local_78 = param_1;
  FUN_1000037f0(param_4,param_5);
  lVar2 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_80 + -extraout_x8;
  lVar3 = param_6;
  local_70 = param_7;
  FUN_1000037f0(param_6,param_7);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = (long)puVar4 - extraout_x8_00;
  (*param_2)(puVar4);
  _swift_storeEnumTagMultiPayload(puVar4,lVar1,0);
  FUN_10019ffdc(puVar4,lVar3,param_4,param_5);
  (**(code **)(lVar2 + 0x38))(lVar3,0,1,lVar1);
  FUN_1001a7c4c(lVar3,local_78,param_6,local_70);
  return;
}



/* Address: 0x100302b78 | FUN_100302b78 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100302bec) */
/* WARNING: Removing unreachable block (ram,0x000100303618) */
/* WARNING: Removing unreachable block (ram,0x000100302ca4) */
/* WARNING: Removing unreachable block (ram,0x000100302d30) */
/* WARNING: Removing unreachable block (ram,0x000100302d18) */
/* WARNING: Removing unreachable block (ram,0x000100302d24) */
/* WARNING: Removing unreachable block (ram,0x000100302d38) */
/* WARNING: Removing unreachable block (ram,0x000100302da8) */
/* WARNING: Removing unreachable block (ram,0x000100302d94) */
/* WARNING: Removing unreachable block (ram,0x000100302d9c) */
/* WARNING: Removing unreachable block (ram,0x000100302dac) */
/* WARNING: Removing unreachable block (ram,0x000100302e18) */
/* WARNING: Removing unreachable block (ram,0x000100302e00) */
/* WARNING: Removing unreachable block (ram,0x000100302e08) */
/* WARNING: Removing unreachable block (ram,0x000100302e1c) */
/* WARNING: Removing unreachable block (ram,0x000100302f54) */
/* WARNING: Removing unreachable block (ram,0x000100302f7c) */
/* WARNING: Removing unreachable block (ram,0x000100302f24) */
/* WARNING: Removing unreachable block (ram,0x000100302f2c) */
/* WARNING: Removing unreachable block (ram,0x000100302f84) */
/* WARNING: Removing unreachable block (ram,0x000100302fa8) */
/* WARNING: Removing unreachable block (ram,0x000100302fc8) */
/* WARNING: Removing unreachable block (ram,0x000100302fd4) */
/* WARNING: Removing unreachable block (ram,0x00010030305c) */
/* WARNING: Removing unreachable block (ram,0x000100303060) */
/* WARNING: Removing unreachable block (ram,0x000100302fac) */
/* WARNING: Removing unreachable block (ram,0x000100303078) */
/* WARNING: Removing unreachable block (ram,0x000100303148) */
/* WARNING: Removing unreachable block (ram,0x00010030312c) */
/* WARNING: Removing unreachable block (ram,0x000100303150) */
/* WARNING: Removing unreachable block (ram,0x00010030324c) */
/* WARNING: Removing unreachable block (ram,0x000100303008) */
/* WARNING: Removing unreachable block (ram,0x000100303018) */
/* WARNING: Removing unreachable block (ram,0x000100303610) */
/* WARNING: Removing unreachable block (ram,0x000100303020) */
/* WARNING: Removing unreachable block (ram,0x000100303250) */
/* WARNING: Removing unreachable block (ram,0x000100303028) */
/* WARNING: Removing unreachable block (ram,0x000100303034) */
/* WARNING: Removing unreachable block (ram,0x000100303254) */
/* WARNING: Removing unreachable block (ram,0x0001003032a8) */
/* WARNING: Removing unreachable block (ram,0x0001003032d4) */
/* WARNING: Removing unreachable block (ram,0x000100303274) */
/* WARNING: Removing unreachable block (ram,0x000100303280) */
/* WARNING: Removing unreachable block (ram,0x0001003032dc) */
/* WARNING: Removing unreachable block (ram,0x0001003032fc) */
/* WARNING: Removing unreachable block (ram,0x00010030331c) */
/* WARNING: Removing unreachable block (ram,0x000100303328) */
/* WARNING: Removing unreachable block (ram,0x0001003033b0) */
/* WARNING: Removing unreachable block (ram,0x0001003033b4) */
/* WARNING: Removing unreachable block (ram,0x000100303300) */
/* WARNING: Removing unreachable block (ram,0x0001003033cc) */
/* WARNING: Removing unreachable block (ram,0x00010030349c) */
/* WARNING: Removing unreachable block (ram,0x000100303480) */
/* WARNING: Removing unreachable block (ram,0x0001003034a4) */
/* WARNING: Removing unreachable block (ram,0x0001003035a0) */
/* WARNING: Removing unreachable block (ram,0x00010030335c) */
/* WARNING: Removing unreachable block (ram,0x00010030336c) */
/* WARNING: Removing unreachable block (ram,0x000100303614) */
/* WARNING: Removing unreachable block (ram,0x000100303374) */
/* WARNING: Removing unreachable block (ram,0x0001003035a4) */
/* WARNING: Removing unreachable block (ram,0x00010030337c) */
/* WARNING: Removing unreachable block (ram,0x000100303388) */
/* WARNING: Removing unreachable block (ram,0x0001003035a8) */

void FUN_100302b78(code *param_1,undefined8 param_2,undefined8 param_3,ID param_4)

{
  ID IVar1;
  long unaff_x21;
  undefined1 local_f0 [16];
  ID local_e0;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  (*param_1)(param_3);
  if ((unaff_x21 == 0) && (IVar1 = objc_stub::hasChanges(param_4), (int)IVar1 != 0)) {
    local_e0 = param_4;
    FUN_1002ff9c8(FUN_100308968,local_f0);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x100303634 | FUN_100303634 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0001003036b0) */
/* WARNING: Removing unreachable block (ram,0x0001003040ec) */
/* WARNING: Removing unreachable block (ram,0x000100303768) */
/* WARNING: Removing unreachable block (ram,0x000100303830) */
/* WARNING: Removing unreachable block (ram,0x0001003037dc) */
/* WARNING: Removing unreachable block (ram,0x0001003037e8) */
/* WARNING: Removing unreachable block (ram,0x000100303838) */
/* WARNING: Removing unreachable block (ram,0x0001003038a8) */
/* WARNING: Removing unreachable block (ram,0x000100303894) */
/* WARNING: Removing unreachable block (ram,0x00010030389c) */
/* WARNING: Removing unreachable block (ram,0x0001003038ac) */
/* WARNING: Removing unreachable block (ram,0x000100303918) */
/* WARNING: Removing unreachable block (ram,0x000100303900) */
/* WARNING: Removing unreachable block (ram,0x000100303908) */
/* WARNING: Removing unreachable block (ram,0x00010030391c) */
/* WARNING: Removing unreachable block (ram,0x000100303a54) */
/* WARNING: Removing unreachable block (ram,0x000100303a7c) */
/* WARNING: Removing unreachable block (ram,0x000100303a24) */
/* WARNING: Removing unreachable block (ram,0x000100303a2c) */
/* WARNING: Removing unreachable block (ram,0x000100303a84) */
/* WARNING: Removing unreachable block (ram,0x000100303aa8) */
/* WARNING: Removing unreachable block (ram,0x000100303ac8) */
/* WARNING: Removing unreachable block (ram,0x000100303ad4) */
/* WARNING: Removing unreachable block (ram,0x000100303b5c) */
/* WARNING: Removing unreachable block (ram,0x000100303b60) */
/* WARNING: Removing unreachable block (ram,0x000100303aac) */
/* WARNING: Removing unreachable block (ram,0x000100303b78) */
/* WARNING: Removing unreachable block (ram,0x000100303c48) */
/* WARNING: Removing unreachable block (ram,0x000100303c2c) */
/* WARNING: Removing unreachable block (ram,0x000100303c50) */
/* WARNING: Removing unreachable block (ram,0x000100303d4c) */
/* WARNING: Removing unreachable block (ram,0x000100303b08) */
/* WARNING: Removing unreachable block (ram,0x000100303b18) */
/* WARNING: Removing unreachable block (ram,0x0001003040e4) */
/* WARNING: Removing unreachable block (ram,0x000100303b20) */
/* WARNING: Removing unreachable block (ram,0x000100303d50) */
/* WARNING: Removing unreachable block (ram,0x000100303b28) */
/* WARNING: Removing unreachable block (ram,0x000100303b34) */
/* WARNING: Removing unreachable block (ram,0x000100303d54) */
/* WARNING: Removing unreachable block (ram,0x000100303da8) */
/* WARNING: Removing unreachable block (ram,0x000100303dd4) */
/* WARNING: Removing unreachable block (ram,0x000100303d74) */
/* WARNING: Removing unreachable block (ram,0x000100303d80) */
/* WARNING: Removing unreachable block (ram,0x000100303ddc) */
/* WARNING: Removing unreachable block (ram,0x000100303dfc) */
/* WARNING: Removing unreachable block (ram,0x000100303e1c) */
/* WARNING: Removing unreachable block (ram,0x000100303e28) */
/* WARNING: Removing unreachable block (ram,0x000100303eb0) */
/* WARNING: Removing unreachable block (ram,0x000100303eb4) */
/* WARNING: Removing unreachable block (ram,0x000100303e00) */
/* WARNING: Removing unreachable block (ram,0x000100303ecc) */
/* WARNING: Removing unreachable block (ram,0x000100303f9c) */
/* WARNING: Removing unreachable block (ram,0x000100303f80) */
/* WARNING: Removing unreachable block (ram,0x000100303fa4) */
/* WARNING: Removing unreachable block (ram,0x0001003040a0) */
/* WARNING: Removing unreachable block (ram,0x000100303e5c) */
/* WARNING: Removing unreachable block (ram,0x000100303e6c) */
/* WARNING: Removing unreachable block (ram,0x0001003040e8) */
/* WARNING: Removing unreachable block (ram,0x000100303e74) */
/* WARNING: Removing unreachable block (ram,0x0001003040a4) */
/* WARNING: Removing unreachable block (ram,0x000100303e7c) */
/* WARNING: Removing unreachable block (ram,0x000100303e88) */
/* WARNING: Removing unreachable block (ram,0x0001003040a8) */

void FUN_100303634(code *param_1,undefined8 param_2,undefined8 param_3,ID param_4,undefined8 param_5
                  )

{
  ID IVar1;
  long unaff_x21;
  undefined1 local_f8 [8];
  undefined1 local_f0 [16];
  ID local_e0;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  (*param_1)(local_f8,param_3);
  if ((unaff_x21 == 0) && (IVar1 = objc_stub::hasChanges(param_4), (int)IVar1 != 0)) {
    local_e0 = param_4;
    FUN_1002ff9c8(param_5,local_f0);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100304108 | FUN_100304108 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100304184) */
/* WARNING: Removing unreachable block (ram,0x000100304bb8) */
/* WARNING: Removing unreachable block (ram,0x00010030423c) */
/* WARNING: Removing unreachable block (ram,0x000100304304) */
/* WARNING: Removing unreachable block (ram,0x0001003042b0) */
/* WARNING: Removing unreachable block (ram,0x0001003042bc) */
/* WARNING: Removing unreachable block (ram,0x00010030430c) */
/* WARNING: Removing unreachable block (ram,0x00010030437c) */
/* WARNING: Removing unreachable block (ram,0x000100304368) */
/* WARNING: Removing unreachable block (ram,0x000100304370) */
/* WARNING: Removing unreachable block (ram,0x000100304380) */
/* WARNING: Removing unreachable block (ram,0x0001003043ec) */
/* WARNING: Removing unreachable block (ram,0x0001003043d4) */
/* WARNING: Removing unreachable block (ram,0x0001003043dc) */
/* WARNING: Removing unreachable block (ram,0x0001003043f0) */
/* WARNING: Removing unreachable block (ram,0x000100304528) */
/* WARNING: Removing unreachable block (ram,0x000100304550) */
/* WARNING: Removing unreachable block (ram,0x0001003044f8) */
/* WARNING: Removing unreachable block (ram,0x000100304500) */
/* WARNING: Removing unreachable block (ram,0x000100304558) */
/* WARNING: Removing unreachable block (ram,0x00010030457c) */
/* WARNING: Removing unreachable block (ram,0x00010030459c) */
/* WARNING: Removing unreachable block (ram,0x0001003045a8) */
/* WARNING: Removing unreachable block (ram,0x000100304630) */
/* WARNING: Removing unreachable block (ram,0x000100304634) */
/* WARNING: Removing unreachable block (ram,0x000100304580) */
/* WARNING: Removing unreachable block (ram,0x00010030464c) */
/* WARNING: Removing unreachable block (ram,0x00010030471c) */
/* WARNING: Removing unreachable block (ram,0x000100304700) */
/* WARNING: Removing unreachable block (ram,0x000100304724) */
/* WARNING: Removing unreachable block (ram,0x000100304820) */
/* WARNING: Removing unreachable block (ram,0x0001003045dc) */
/* WARNING: Removing unreachable block (ram,0x0001003045ec) */
/* WARNING: Removing unreachable block (ram,0x000100304bb0) */
/* WARNING: Removing unreachable block (ram,0x0001003045f4) */
/* WARNING: Removing unreachable block (ram,0x000100304824) */
/* WARNING: Removing unreachable block (ram,0x0001003045fc) */
/* WARNING: Removing unreachable block (ram,0x000100304608) */
/* WARNING: Removing unreachable block (ram,0x000100304828) */
/* WARNING: Removing unreachable block (ram,0x00010030487c) */
/* WARNING: Removing unreachable block (ram,0x0001003048a8) */
/* WARNING: Removing unreachable block (ram,0x000100304848) */
/* WARNING: Removing unreachable block (ram,0x000100304854) */
/* WARNING: Removing unreachable block (ram,0x0001003048b0) */
/* WARNING: Removing unreachable block (ram,0x0001003048d0) */
/* WARNING: Removing unreachable block (ram,0x0001003048f0) */
/* WARNING: Removing unreachable block (ram,0x0001003048fc) */
/* WARNING: Removing unreachable block (ram,0x000100304984) */
/* WARNING: Removing unreachable block (ram,0x000100304988) */
/* WARNING: Removing unreachable block (ram,0x0001003048d4) */
/* WARNING: Removing unreachable block (ram,0x0001003049a0) */
/* WARNING: Removing unreachable block (ram,0x000100304a70) */
/* WARNING: Removing unreachable block (ram,0x000100304a54) */
/* WARNING: Removing unreachable block (ram,0x000100304a78) */
/* WARNING: Removing unreachable block (ram,0x000100304b74) */
/* WARNING: Removing unreachable block (ram,0x000100304930) */
/* WARNING: Removing unreachable block (ram,0x000100304940) */
/* WARNING: Removing unreachable block (ram,0x000100304bb4) */
/* WARNING: Removing unreachable block (ram,0x000100304948) */
/* WARNING: Removing unreachable block (ram,0x000100304b78) */
/* WARNING: Removing unreachable block (ram,0x000100304950) */
/* WARNING: Removing unreachable block (ram,0x00010030495c) */
/* WARNING: Removing unreachable block (ram,0x000100304b7c) */

void FUN_100304108(code *param_1,undefined8 param_2,undefined8 param_3,ID param_4)

{
  ID IVar1;
  long unaff_x21;
  undefined1 local_f1;
  undefined1 local_f0 [16];
  ID local_e0;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  (*param_1)(&local_f1,param_3);
  if ((unaff_x21 == 0) && (IVar1 = objc_stub::hasChanges(param_4), (int)IVar1 != 0)) {
    local_e0 = param_4;
    FUN_1002ff9c8(FUN_100308968,local_f0);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100304bd4 | FUN_100304bd4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100304c50) */
/* WARNING: Removing unreachable block (ram,0x000100305684) */
/* WARNING: Removing unreachable block (ram,0x000100304d08) */
/* WARNING: Removing unreachable block (ram,0x000100304dd0) */
/* WARNING: Removing unreachable block (ram,0x000100304d7c) */
/* WARNING: Removing unreachable block (ram,0x000100304d88) */
/* WARNING: Removing unreachable block (ram,0x000100304dd8) */
/* WARNING: Removing unreachable block (ram,0x000100304e48) */
/* WARNING: Removing unreachable block (ram,0x000100304e34) */
/* WARNING: Removing unreachable block (ram,0x000100304e3c) */
/* WARNING: Removing unreachable block (ram,0x000100304e4c) */
/* WARNING: Removing unreachable block (ram,0x000100304eb8) */
/* WARNING: Removing unreachable block (ram,0x000100304ea0) */
/* WARNING: Removing unreachable block (ram,0x000100304ea8) */
/* WARNING: Removing unreachable block (ram,0x000100304ebc) */
/* WARNING: Removing unreachable block (ram,0x000100304ff4) */
/* WARNING: Removing unreachable block (ram,0x00010030501c) */
/* WARNING: Removing unreachable block (ram,0x000100304fc4) */
/* WARNING: Removing unreachable block (ram,0x000100304fcc) */
/* WARNING: Removing unreachable block (ram,0x000100305024) */
/* WARNING: Removing unreachable block (ram,0x000100305048) */
/* WARNING: Removing unreachable block (ram,0x000100305068) */
/* WARNING: Removing unreachable block (ram,0x000100305074) */
/* WARNING: Removing unreachable block (ram,0x0001003050fc) */
/* WARNING: Removing unreachable block (ram,0x000100305100) */
/* WARNING: Removing unreachable block (ram,0x00010030504c) */
/* WARNING: Removing unreachable block (ram,0x000100305118) */
/* WARNING: Removing unreachable block (ram,0x0001003051e8) */
/* WARNING: Removing unreachable block (ram,0x0001003051cc) */
/* WARNING: Removing unreachable block (ram,0x0001003051f0) */
/* WARNING: Removing unreachable block (ram,0x0001003052ec) */
/* WARNING: Removing unreachable block (ram,0x0001003050a8) */
/* WARNING: Removing unreachable block (ram,0x0001003050b8) */
/* WARNING: Removing unreachable block (ram,0x00010030567c) */
/* WARNING: Removing unreachable block (ram,0x0001003050c0) */
/* WARNING: Removing unreachable block (ram,0x0001003052f0) */
/* WARNING: Removing unreachable block (ram,0x0001003050c8) */
/* WARNING: Removing unreachable block (ram,0x0001003050d4) */
/* WARNING: Removing unreachable block (ram,0x0001003052f4) */
/* WARNING: Removing unreachable block (ram,0x000100305348) */
/* WARNING: Removing unreachable block (ram,0x000100305374) */
/* WARNING: Removing unreachable block (ram,0x000100305314) */
/* WARNING: Removing unreachable block (ram,0x000100305320) */
/* WARNING: Removing unreachable block (ram,0x00010030537c) */
/* WARNING: Removing unreachable block (ram,0x00010030539c) */
/* WARNING: Removing unreachable block (ram,0x0001003053bc) */
/* WARNING: Removing unreachable block (ram,0x0001003053c8) */
/* WARNING: Removing unreachable block (ram,0x000100305450) */
/* WARNING: Removing unreachable block (ram,0x000100305454) */
/* WARNING: Removing unreachable block (ram,0x0001003053a0) */
/* WARNING: Removing unreachable block (ram,0x00010030546c) */
/* WARNING: Removing unreachable block (ram,0x00010030553c) */
/* WARNING: Removing unreachable block (ram,0x000100305520) */
/* WARNING: Removing unreachable block (ram,0x000100305544) */
/* WARNING: Removing unreachable block (ram,0x000100305640) */
/* WARNING: Removing unreachable block (ram,0x0001003053fc) */
/* WARNING: Removing unreachable block (ram,0x00010030540c) */
/* WARNING: Removing unreachable block (ram,0x000100305680) */
/* WARNING: Removing unreachable block (ram,0x000100305414) */
/* WARNING: Removing unreachable block (ram,0x000100305644) */
/* WARNING: Removing unreachable block (ram,0x00010030541c) */
/* WARNING: Removing unreachable block (ram,0x000100305428) */
/* WARNING: Removing unreachable block (ram,0x000100305648) */

void FUN_100304bd4(code *param_1,undefined8 param_2,undefined8 param_3,ID param_4)

{
  ID IVar1;
  long unaff_x21;
  undefined1 local_f1;
  undefined1 local_f0 [16];
  ID local_e0;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  (*param_1)(&local_f1,param_3);
  if ((unaff_x21 == 0) && (IVar1 = objc_stub::hasChanges(param_4), (int)IVar1 != 0)) {
    local_e0 = param_4;
    FUN_1002ff9c8(FUN_10030844c,local_f0);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1003056a0 | FUN_1003056a0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x00010030571c) */
/* WARNING: Removing unreachable block (ram,0x000100306154) */
/* WARNING: Removing unreachable block (ram,0x0001003057d4) */
/* WARNING: Removing unreachable block (ram,0x0001003058a0) */
/* WARNING: Removing unreachable block (ram,0x000100305848) */
/* WARNING: Removing unreachable block (ram,0x000100305854) */
/* WARNING: Removing unreachable block (ram,0x0001003058a8) */
/* WARNING: Removing unreachable block (ram,0x000100305918) */
/* WARNING: Removing unreachable block (ram,0x000100305904) */
/* WARNING: Removing unreachable block (ram,0x00010030590c) */
/* WARNING: Removing unreachable block (ram,0x00010030591c) */
/* WARNING: Removing unreachable block (ram,0x000100305988) */
/* WARNING: Removing unreachable block (ram,0x000100305970) */
/* WARNING: Removing unreachable block (ram,0x000100305978) */
/* WARNING: Removing unreachable block (ram,0x00010030598c) */
/* WARNING: Removing unreachable block (ram,0x000100305ac4) */
/* WARNING: Removing unreachable block (ram,0x000100305aec) */
/* WARNING: Removing unreachable block (ram,0x000100305a94) */
/* WARNING: Removing unreachable block (ram,0x000100305a9c) */
/* WARNING: Removing unreachable block (ram,0x000100305af4) */
/* WARNING: Removing unreachable block (ram,0x000100305b18) */
/* WARNING: Removing unreachable block (ram,0x000100305b38) */
/* WARNING: Removing unreachable block (ram,0x000100305b44) */
/* WARNING: Removing unreachable block (ram,0x000100305bcc) */
/* WARNING: Removing unreachable block (ram,0x000100305bd0) */
/* WARNING: Removing unreachable block (ram,0x000100305b1c) */
/* WARNING: Removing unreachable block (ram,0x000100305be8) */
/* WARNING: Removing unreachable block (ram,0x000100305cb8) */
/* WARNING: Removing unreachable block (ram,0x000100305c9c) */
/* WARNING: Removing unreachable block (ram,0x000100305cc0) */
/* WARNING: Removing unreachable block (ram,0x000100305dbc) */
/* WARNING: Removing unreachable block (ram,0x000100305b78) */
/* WARNING: Removing unreachable block (ram,0x000100305b88) */
/* WARNING: Removing unreachable block (ram,0x00010030614c) */
/* WARNING: Removing unreachable block (ram,0x000100305b90) */
/* WARNING: Removing unreachable block (ram,0x000100305dc0) */
/* WARNING: Removing unreachable block (ram,0x000100305b98) */
/* WARNING: Removing unreachable block (ram,0x000100305ba4) */
/* WARNING: Removing unreachable block (ram,0x000100305dc4) */
/* WARNING: Removing unreachable block (ram,0x000100305e18) */
/* WARNING: Removing unreachable block (ram,0x000100305e44) */
/* WARNING: Removing unreachable block (ram,0x000100305de4) */
/* WARNING: Removing unreachable block (ram,0x000100305df0) */
/* WARNING: Removing unreachable block (ram,0x000100305e4c) */
/* WARNING: Removing unreachable block (ram,0x000100305e6c) */
/* WARNING: Removing unreachable block (ram,0x000100305e8c) */
/* WARNING: Removing unreachable block (ram,0x000100305e98) */
/* WARNING: Removing unreachable block (ram,0x000100305f20) */
/* WARNING: Removing unreachable block (ram,0x000100305f24) */
/* WARNING: Removing unreachable block (ram,0x000100305e70) */
/* WARNING: Removing unreachable block (ram,0x000100305f3c) */
/* WARNING: Removing unreachable block (ram,0x00010030600c) */
/* WARNING: Removing unreachable block (ram,0x000100305ff0) */
/* WARNING: Removing unreachable block (ram,0x000100306014) */
/* WARNING: Removing unreachable block (ram,0x000100306110) */
/* WARNING: Removing unreachable block (ram,0x000100305ecc) */
/* WARNING: Removing unreachable block (ram,0x000100305edc) */
/* WARNING: Removing unreachable block (ram,0x000100306150) */
/* WARNING: Removing unreachable block (ram,0x000100305ee4) */
/* WARNING: Removing unreachable block (ram,0x000100306114) */
/* WARNING: Removing unreachable block (ram,0x000100305eec) */
/* WARNING: Removing unreachable block (ram,0x000100305ef8) */
/* WARNING: Removing unreachable block (ram,0x000100306118) */

void FUN_1003056a0(code *param_1,undefined8 param_2,undefined8 param_3,ID param_4)

{
  ID IVar1;
  long unaff_x21;
  undefined1 local_100 [16];
  ID local_f0;
  undefined1 local_d0 [96];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  (*param_1)(local_d0,param_3);
  if ((unaff_x21 == 0) && (IVar1 = objc_stub::hasChanges(param_4), (int)IVar1 != 0)) {
    local_f0 = param_4;
    FUN_1002ff9c8(FUN_100308968,local_100);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100306170 | FUN_100306170 */

void FUN_100306170(ulong *param_1)

{
  URL UVar1;
  __int64 _Var2;
  _ContiguousArrayBuffer<undefined> _Var3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong minimumCapacity;
  ulong uVar7;
  undefined *local_78;
  ulong uStack_70;
  undefined1 auStack_68 [8];
  long local_60;
  ulong uStack_58;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar5 = *(long *)(UVar1.unknown + -8);
  uVar4 = *param_1;
  uVar6 = uVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar6 & 1) == 0) {
    FUN_100392b9c();
  }
  uVar6 = *(ulong *)(uVar4 + 0x10);
  uVar7 = (ulong)*(byte *)(lVar5 + 0x50) + 0x20 &
          ((ulong)*(byte *)(lVar5 + 0x50) ^ 0xffffffffffffffff);
  local_60 = uVar4 + uVar7;
  uStack_58 = uVar6;
  _Var2 = Swift::_minimumMergeRunLength(uVar6);
  if (_Var2 < (long)uVar6) {
    minimumCapacity = uVar6 >> 1;
    _Var3.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (1 < uVar6) {
      _Var3 = Swift::ContiguousArray::_allocateBufferUninitialized(minimumCapacity,UVar1.unknown);
      *(ulong *)(_Var3.unknown + 0x10) = minimumCapacity;
    }
    local_78 = _Var3.unknown + uVar7;
    uStack_70 = minimumCapacity;
    FUN_10030628c(&local_78,auStack_68,&local_60,_Var2);
    *(undefined8 *)(_Var3.unknown + 0x10) = 0;
    _swift_release(_Var3.unknown);
  }
  else if (uVar6 != 0) {
    FUN_100306b14(0,uVar6,1,&local_60);
  }
  *param_1 = uVar4;
  return;
}



/* Address: 0x10030628c | FUN_10030628c */

void FUN_10030628c(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  code *pcVar1;
  ulong uVar2;
  bool bVar3;
  URL UVar4;
  URL UVar5;
  undefined7 extraout_var;
  undefined *puVar6;
  undefined *puVar7;
  _StringGuts _Var8;
  long extraout_x8;
  code *pcVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  code *pcVar14;
  code *pcVar15;
  long unaff_x21;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  code *pcVar23;
  code *pcVar24;
  long lVar25;
  String SVar26;
  String SVar27;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  long local_108;
  undefined *local_100;
  long *local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  code *local_d8;
  code *local_d0;
  code *local_c8;
  long local_c0;
  ulong local_b8;
  long local_b0;
  undefined *local_a8;
  code *local_a0;
  undefined1 *local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined1 *local_78;
  long local_70;
  undefined *local_58;
  
  local_f8 = param_1;
  UVar4 = Foundation::URL::typeMetadataAccessor();
  local_70 = *(long *)(UVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_70 + 0x40));
  puVar10 = auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_98 = puVar10;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_78 = puVar10 + -extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar11 = (long)(puVar10 + -extraout_x12) - extraout_x12_00;
  local_80 = lVar11;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar11 = lVar11 - extraout_x12_01;
  local_e8 = lVar11;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar12 = (undefined *)(lVar11 - extraout_x12_02);
  local_a8 = puVar12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar11 = (long)puVar12 - extraout_x12_03;
  local_b0 = lVar11;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar12 = (undefined *)(lVar11 - extraout_x12_04);
  local_100 = puVar12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_108 = (long)puVar12 - extraout_x12_05;
  local_58 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar11 = param_3[1];
  if (0 < lVar11) {
    pcVar14 = (code *)0x0;
    local_118 = param_4;
    local_110 = param_3;
    do {
      pcVar15 = pcVar14 + 1;
      pcVar24 = pcVar14;
      local_f0 = unaff_x21;
      local_d8 = pcVar14;
      if ((long)pcVar15 < lVar11) {
        lVar18 = *param_3;
        lVar16 = *(long *)(local_70 + 0x48);
        pcVar24 = *(code **)(local_70 + 0x10);
        local_a0 = pcVar15;
        (*pcVar24)(local_108,lVar18 + lVar16 * (long)pcVar15,UVar4.unknown);
        UVar5.unknown = local_100;
        local_c8 = pcVar24;
        local_90 = lVar16;
        (*pcVar24)(local_100,lVar18 + lVar16 * (long)pcVar14,UVar4.unknown);
        SVar26 = Foundation::URL::get_lastPathComponent(UVar5);
        SVar27 = Foundation::URL::get_lastPathComponent((URL)SVar26.str);
        if (SVar26 == SVar27) {
          local_b8 = local_b8 & 0xffffffff00000000;
        }
        else {
          bVar3 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)SVar26.str,(_StringGuts)SVar26.bridgeObject,
                             (_StringComparisonResult)(__int8)SVar27.str);
          local_b8 = CONCAT44(local_b8._4_4_,(int)CONCAT71(extraout_var,bVar3));
        }
        _swift_bridgeObjectRelease(SVar26.bridgeObject);
        _swift_bridgeObjectRelease(SVar27.bridgeObject);
        pcVar14 = *(code **)(local_70 + 8);
        (*pcVar14)(local_100,UVar4.unknown);
        local_d0 = pcVar14;
        (*pcVar14)(local_108,UVar4.unknown);
        pcVar14 = local_d8 + 2;
        lVar13 = local_90 * (long)pcVar14;
        lVar16 = lVar18 + lVar13;
        lVar18 = lVar18 + local_90 * (long)local_a0;
        lVar17 = 0;
        lVar21 = local_90 * (long)local_a0;
        local_c0 = lVar11;
        do {
          lVar25 = lVar21;
          lVar22 = lVar17;
          pcVar15 = local_c8;
          lVar11 = lVar13;
          local_a0 = pcVar14;
          if (local_c0 <= (long)pcVar14) break;
          local_88 = lVar13;
          (*local_c8)(local_b0,lVar16,UVar4.unknown);
          UVar5.unknown = local_a8;
          (*pcVar15)(local_a8,lVar18,UVar4.unknown);
          SVar26 = Foundation::URL::get_lastPathComponent(UVar5);
          SVar27 = Foundation::URL::get_lastPathComponent((URL)SVar26.str);
          if (SVar26 == SVar27) {
            uVar20 = 0;
          }
          else {
            bVar3 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)SVar26.str,(_StringGuts)SVar26.bridgeObject,
                               (_StringComparisonResult)(__int8)SVar27.str);
            uVar20 = (uint)bVar3;
          }
          _swift_bridgeObjectRelease(SVar26.bridgeObject);
          _swift_bridgeObjectRelease(SVar27.bridgeObject);
          pcVar14 = local_d0;
          (*local_d0)(local_a8,UVar4.unknown);
          (*pcVar14)(local_b0,UVar4.unknown);
          pcVar14 = local_a0 + 1;
          lVar16 = lVar16 + local_90;
          lVar18 = lVar18 + local_90;
          lVar13 = local_88 + local_90;
          lVar17 = lVar22 + 1;
          lVar21 = lVar25 + local_90;
          lVar11 = local_88;
        } while ((((uint)local_b8 ^ uVar20) & 1) == 0);
        pcVar24 = local_d8;
        pcVar15 = local_a0;
        param_4 = local_118;
        param_3 = local_110;
        if ((local_b8 & 1) != 0) {
          if ((long)local_a0 < (long)local_d8) {
                    /* WARNING: Does not return */
            pcVar14 = (code *)SoftwareBreakpoint(1,0x100306ae8);
            (*pcVar14)();
          }
          if ((long)local_d8 < (long)local_a0) {
            lVar18 = 0;
            lVar13 = *local_110;
            lVar16 = (long)local_d8 * local_90;
            do {
              if (pcVar24 + lVar18 != pcVar24 + lVar22 + 1) {
                if (lVar13 == 0) {
                    /* WARNING: Does not return */
                  pcVar14 = (code *)SoftwareBreakpoint(1,0x100306b08);
                  (*pcVar14)();
                }
                uVar19 = lVar13 + lVar16;
                pcVar14 = *(code **)(local_70 + 0x20);
                (*pcVar14)(local_e8,uVar19,UVar4.unknown);
                if ((lVar16 < lVar25) || ((ulong)(lVar13 + lVar11) <= uVar19)) {
                  _swift_arrayInitWithTakeFrontToBack(uVar19,lVar13 + lVar25,1,UVar4.unknown);
                }
                else if (local_90 != 0) {
                  _swift_arrayInitWithTakeBackToFront(uVar19,lVar13 + lVar25,1,UVar4.unknown);
                }
                (*pcVar14)(lVar13 + lVar25,local_e8,UVar4.unknown);
                pcVar24 = local_d8;
              }
              lVar18 = lVar18 + 1;
              lVar17 = lVar22 + 1;
              lVar25 = lVar25 - local_90;
              lVar11 = lVar11 - local_90;
              lVar16 = lVar16 + local_90;
              pcVar15 = local_a0;
              param_4 = local_118;
              lVar22 = lVar22 + -1;
              param_3 = local_110;
            } while ((long)(pcVar24 + lVar18) < (long)(pcVar24 + lVar17));
          }
        }
      }
      pcVar9 = (code *)param_3[1];
      pcVar14 = pcVar15;
      unaff_x21 = local_f0;
      if ((long)pcVar15 < (long)pcVar9) {
        if (SBORROW8((long)pcVar15,(long)pcVar24)) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x100306ae4);
          (*pcVar14)();
        }
        if ((long)pcVar15 - (long)pcVar24 < param_4) {
          if (SCARRY8((long)pcVar24,param_4)) {
                    /* WARNING: Does not return */
            pcVar14 = (code *)SoftwareBreakpoint(1,0x100306aec);
            (*pcVar14)();
          }
          pcVar1 = pcVar24 + param_4;
          if ((long)pcVar9 <= (long)(pcVar24 + param_4)) {
            pcVar1 = pcVar9;
          }
          if ((long)pcVar1 < (long)pcVar24) {
                    /* WARNING: Does not return */
            pcVar14 = (code *)SoftwareBreakpoint(1,0x100306af0);
            (*pcVar14)();
          }
          if (pcVar15 != pcVar1) {
            local_88 = *param_3;
            local_e0 = *(long *)(local_70 + 0x48);
            pcVar23 = *(code **)(local_70 + 0x10);
            uVar19 = local_88 + local_e0 * (long)(pcVar15 + -1);
            local_90 = -local_e0;
            lVar11 = (long)pcVar24 - (long)pcVar15;
            pcVar9 = (code *)(local_88 + (long)pcVar15 * local_e0);
            local_d0 = pcVar1;
            pcVar1 = pcVar9;
            lVar18 = lVar11;
            uVar2 = uVar19;
LAB_100306808:
            do {
              local_a0 = pcVar15;
              local_b8 = uVar2;
              local_c0 = lVar18;
              local_c8 = pcVar1;
              (*pcVar23)(local_80,pcVar9,UVar4.unknown);
              UVar5.unknown = local_78;
              (*pcVar23)(local_78,uVar19,UVar4.unknown);
              SVar26 = Foundation::URL::get_lastPathComponent(UVar5);
              _Var8.unknown = SVar26.bridgeObject;
              SVar27 = Foundation::URL::get_lastPathComponent((URL)SVar26.str);
              if (SVar26 == SVar27) {
                _swift_bridgeObjectRelease(_Var8.unknown);
                _swift_bridgeObjectRelease(SVar27.bridgeObject);
                pcVar14 = *(code **)(local_70 + 8);
                (*pcVar14)(local_78,UVar4.unknown);
                (*pcVar14)(local_80,UVar4.unknown);
              }
              else {
                bVar3 = Swift::_stringCompareWithSmolCheck
                                  ((_StringGuts)SVar26.str,_Var8,
                                   (_StringComparisonResult)(__int8)SVar27.str);
                _swift_bridgeObjectRelease(_Var8.unknown);
                _swift_bridgeObjectRelease(SVar27.bridgeObject);
                pcVar14 = *(code **)(local_70 + 8);
                (*pcVar14)(local_78,UVar4.unknown);
                (*pcVar14)(local_80,UVar4.unknown);
                puVar10 = local_98;
                if (bVar3) {
                  if (local_88 == 0) {
                    /* WARNING: Does not return */
                    pcVar14 = (code *)SoftwareBreakpoint(1,0x100306af4);
                    (*pcVar14)();
                  }
                  pcVar14 = *(code **)(local_70 + 0x20);
                  (*pcVar14)(local_98,pcVar9,UVar4.unknown);
                  _swift_arrayInitWithTakeFrontToBack(pcVar9,uVar19,1,UVar4.unknown);
                  (*pcVar14)(uVar19,puVar10,UVar4.unknown);
                  uVar19 = uVar19 + local_90;
                  pcVar9 = pcVar9 + local_90;
                  bVar3 = lVar11 != -1;
                  lVar11 = lVar11 + 1;
                  pcVar1 = local_c8;
                  lVar18 = local_c0;
                  uVar2 = local_b8;
                  pcVar15 = local_a0;
                  if (bVar3) goto LAB_100306808;
                }
              }
              uVar19 = local_b8 + local_e0;
              lVar11 = local_c0 + -1;
              pcVar9 = local_c8 + local_e0;
              pcVar24 = local_d8;
              pcVar14 = local_d0;
              param_4 = local_118;
              unaff_x21 = local_f0;
              param_3 = local_110;
              pcVar1 = pcVar9;
              lVar18 = lVar11;
              uVar2 = uVar19;
              pcVar15 = local_a0 + 1;
            } while (local_a0 + 1 != local_d0);
          }
        }
      }
      puVar12 = local_58;
      if ((long)pcVar14 < (long)pcVar24) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x100306ad8);
        (*pcVar14)();
      }
      puVar6 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar7 = puVar12;
      if (((ulong)puVar6 & 1) == 0) {
        puVar7 = (undefined *)0x0;
        FUN_100392630(0,*(long *)(puVar12 + 0x10) + 1,1,puVar12);
      }
      uVar19 = *(ulong *)(puVar7 + 0x10);
      puVar12 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar19) {
        puVar12 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
        FUN_100392630(puVar12,uVar19 + 1,1,puVar7);
      }
      *(ulong *)(puVar12 + 0x10) = uVar19 + 1;
      *(code **)(puVar12 + uVar19 * 0x10 + 0x20) = local_d8;
      *(code **)(puVar12 + uVar19 * 0x10 + 0x28) = pcVar14;
      local_58 = puVar12;
      if (*local_f8 == 0) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x100306b0c);
        (*pcVar14)();
      }
      FUN_100306d88(&local_58,*local_f8,param_3);
      puVar12 = local_58;
      if (unaff_x21 != 0) goto LAB_100306aa8;
      lVar11 = param_3[1];
    } while ((long)pcVar14 < lVar11);
    unaff_x21 = 0;
  }
  puVar12 = local_58;
  lVar11 = *local_f8;
  if (lVar11 == 0) {
                    /* WARNING: Does not return */
    pcVar14 = (code *)SoftwareBreakpoint(1,0x100306b14);
    (*pcVar14)();
  }
  puVar6 = local_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar6 & 1) == 0) {
    FUN_100392b74();
  }
  uVar19 = *(ulong *)(puVar12 + 0x10);
  while (local_58 = puVar12, 1 < uVar19) {
    lVar18 = *param_3;
    if (lVar18 == 0) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x100306b10);
      (*pcVar14)();
    }
    lVar17 = uVar19 - 1;
    lVar21 = *(long *)(puVar12 + uVar19 * 0x10);
    lVar16 = *(long *)(puVar12 + lVar17 * 0x10 + 0x28);
    lVar13 = *(long *)(local_70 + 0x48);
    FUN_100307008(lVar18 + lVar13 * lVar21,
                  lVar18 + lVar13 * *(long *)(puVar12 + lVar17 * 0x10 + 0x20),
                  lVar18 + lVar13 * lVar16,lVar11);
    if (unaff_x21 != 0) break;
    if (lVar16 < lVar21) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x100306adc);
      (*pcVar14)();
    }
    puVar6 = puVar12;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)puVar6 & 1) == 0) {
      FUN_100392b74();
    }
    if (*(ulong *)(puVar12 + 0x10) <= uVar19 - 2) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x100306ae0);
      (*pcVar14)();
    }
    *(long *)(puVar12 + uVar19 * 0x10) = lVar21;
    *(long *)((long)(puVar12 + uVar19 * 0x10) + 8) = lVar16;
    local_58 = puVar12;
    FUN_100392aec(lVar17);
    puVar12 = local_58;
    uVar19 = *(ulong *)(local_58 + 0x10);
  }
LAB_100306aa8:
  _swift_bridgeObjectRelease(puVar12);
  return;
}



/* Address: 0x100306b14 | FUN_100306b14 */

void FUN_100306b14(long param_1,long param_2,long param_3,long *param_4)

{
  bool bVar1;
  URL UVar2;
  URL UVar3;
  _StringGuts _Var4;
  long lVar5;
  long extraout_x8;
  code *pcVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar12;
  long lVar13;
  undefined1 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  String SVar18;
  String SVar19;
  undefined1 auStack_c0 [8];
  
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar5 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar5 + 0x40));
  puVar7 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar14 = puVar7 + -extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar15 = (long)puVar14 - extraout_x12_00;
  if (param_3 != param_2) {
    lVar8 = *param_4;
    lVar9 = *(long *)(lVar5 + 0x48);
    pcVar6 = *(code **)(lVar5 + 0x10);
    lVar10 = lVar8 + lVar9 * (param_3 + -1);
    param_1 = param_1 - param_3;
    lVar16 = lVar8 + lVar9 * param_3;
    lVar17 = lVar16;
    lVar13 = param_1;
    lVar11 = lVar10;
LAB_100306c84:
    do {
      (*pcVar6)(lVar15,lVar16,UVar2.unknown);
      UVar3.unknown = puVar14;
      (*pcVar6)(puVar14,lVar10,UVar2.unknown);
      SVar18 = Foundation::URL::get_lastPathComponent(UVar3);
      _Var4.unknown = SVar18.bridgeObject;
      SVar19 = Foundation::URL::get_lastPathComponent((URL)SVar18.str);
      if (SVar18 == SVar19) {
        _swift_bridgeObjectRelease(_Var4.unknown);
        _swift_bridgeObjectRelease(SVar19.bridgeObject);
        pcVar12 = *(code **)(lVar5 + 8);
        (*pcVar12)(puVar14,UVar2.unknown);
        (*pcVar12)(lVar15,UVar2.unknown);
      }
      else {
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)SVar18.str,_Var4,(_StringComparisonResult)(__int8)SVar19.str
                          );
        _swift_bridgeObjectRelease(_Var4.unknown);
        _swift_bridgeObjectRelease(SVar19.bridgeObject);
        pcVar12 = *(code **)(lVar5 + 8);
        (*pcVar12)(puVar14,UVar2.unknown);
        (*pcVar12)(lVar15,UVar2.unknown);
        if (bVar1) {
          if (lVar8 == 0) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100306d88);
            (*pcVar6)();
          }
          pcVar12 = *(code **)(lVar5 + 0x20);
          (*pcVar12)(puVar7,lVar16,UVar2.unknown);
          _swift_arrayInitWithTakeFrontToBack(lVar16,lVar10,1,UVar2.unknown);
          (*pcVar12)(lVar10,puVar7,UVar2.unknown);
          lVar10 = lVar10 + -lVar9;
          lVar16 = lVar16 + -lVar9;
          bVar1 = param_1 != -1;
          param_1 = param_1 + 1;
          if (bVar1) goto LAB_100306c84;
        }
      }
      param_3 = param_3 + 1;
      lVar10 = lVar11 + lVar9;
      param_1 = lVar13 + -1;
      lVar16 = lVar17 + lVar9;
      lVar17 = lVar16;
      lVar13 = param_1;
      lVar11 = lVar10;
    } while (param_3 != param_2);
  }
  return;
}



/* Address: 0x100306d88 | FUN_100306d88 */

undefined8 FUN_100306d88(ulong *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  code *pcVar2;
  bool bVar3;
  URL UVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long unaff_x21;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  
  uVar9 = *param_1;
  if (1 < *(ulong *)(uVar9 + 0x10)) {
    uVar5 = uVar9;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar5 & 1) == 0) {
      FUN_100392b74();
    }
    *param_1 = uVar9;
    uVar5 = *(ulong *)(uVar9 + 0x10);
    do {
      lVar10 = uVar5 - 1;
      if (uVar5 < 4) {
        if (uVar5 == 3) {
          bVar3 = SBORROW8(*(long *)(uVar9 + 0x28),*(long *)(uVar9 + 0x20));
          lVar7 = *(long *)(uVar9 + 0x28) - *(long *)(uVar9 + 0x20);
          goto LAB_100306e5c;
        }
        if (uVar5 < 2) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100306ff0);
          (*pcVar2)();
        }
        plVar1 = (long *)(uVar9 + uVar5 * 0x10);
        lVar7 = *plVar1;
        lVar8 = plVar1[1];
        bVar3 = SBORROW8(lVar8,lVar7);
        lVar8 = lVar8 - lVar7;
LAB_100306ec0:
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100306fe0);
          (*pcVar2)();
        }
        lVar7 = uVar9 + lVar10 * 0x10;
        lVar6 = *(long *)(lVar7 + 0x20);
        lVar7 = *(long *)(lVar7 + 0x28);
        if (SBORROW8(lVar7,lVar6)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100306fe8);
          (*pcVar2)();
        }
        lVar11 = lVar10;
        if (lVar7 - lVar6 < lVar8) {
          return 1;
        }
      }
      else {
        lVar8 = uVar9 + 0x20 + uVar5 * 0x10;
        if (SBORROW8(*(long *)(lVar8 + -0x38),*(long *)(lVar8 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100306fc8);
          (*pcVar2)();
        }
        lVar7 = *(long *)(lVar8 + -0x28) - *(long *)(lVar8 + -0x30);
        if (SBORROW8(*(long *)(lVar8 + -0x28),*(long *)(lVar8 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100306fcc);
          (*pcVar2)();
        }
        plVar1 = (long *)(uVar9 + uVar5 * 0x10);
        lVar6 = *plVar1;
        lVar11 = plVar1[1];
        lVar13 = lVar11 - lVar6;
        if (SBORROW8(lVar11,lVar6)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100306fd4);
          (*pcVar2)();
        }
        if (SCARRY8(lVar7,lVar13)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100306fdc);
          (*pcVar2)();
        }
        bVar3 = false;
        if (lVar7 + lVar13 < *(long *)(lVar8 + -0x38) - *(long *)(lVar8 + -0x40)) {
LAB_100306e5c:
          if (bVar3) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100306fd0);
            (*pcVar2)();
          }
          plVar1 = (long *)(uVar9 + uVar5 * 0x10);
          lVar6 = *plVar1;
          lVar11 = plVar1[1];
          lVar8 = lVar11 - lVar6;
          if (SBORROW8(lVar11,lVar6)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100306fd8);
            (*pcVar2)();
          }
          plVar1 = (long *)(uVar9 + 0x20 + lVar10 * 0x10);
          lVar6 = *plVar1;
          lVar11 = plVar1[1];
          lVar13 = lVar11 - lVar6;
          if (SBORROW8(lVar11,lVar6)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100306fe4);
            (*pcVar2)();
          }
          if (SCARRY8(lVar8,lVar13)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100306fec);
            (*pcVar2)();
          }
          bVar3 = false;
          if (lVar8 + lVar13 < lVar7) goto LAB_100306ec0;
          lVar11 = uVar5 - 2;
          if (lVar13 <= lVar7) {
            lVar11 = lVar10;
          }
        }
        else {
          plVar1 = (long *)(uVar9 + 0x20 + lVar10 * 0x10);
          lVar8 = *plVar1;
          lVar6 = plVar1[1];
          if (SBORROW8(lVar6,lVar8)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100306ff4);
            (*pcVar2)();
          }
          lVar11 = uVar5 - 2;
          if (lVar6 - lVar8 <= lVar7) {
            lVar11 = lVar10;
          }
        }
      }
      uVar12 = lVar11 - 1;
      if (uVar5 <= uVar12) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100306fbc);
        (*pcVar2)();
      }
      lVar10 = *param_3;
      if (lVar10 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100307008);
        (*pcVar2)();
      }
      lVar13 = *(long *)(uVar9 + 0x20 + uVar12 * 0x10);
      plVar1 = (long *)(uVar9 + 0x20 + lVar11 * 0x10);
      lVar7 = *plVar1;
      lVar8 = plVar1[1];
      UVar4 = Foundation::URL::typeMetadataAccessor();
      lVar6 = *(long *)(*(long *)(UVar4.unknown + -8) + 0x48);
      FUN_100307008(lVar10 + lVar6 * lVar13,lVar10 + lVar6 * lVar7,lVar10 + lVar6 * lVar8,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar8 < lVar13) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100306fc0);
        (*pcVar2)();
      }
      uVar5 = uVar9;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar5 & 1) == 0) {
        FUN_100392b74();
      }
      if (*(ulong *)(uVar9 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100306fc4);
        (*pcVar2)();
      }
      lVar10 = uVar9 + uVar12 * 0x10;
      *(long *)(lVar10 + 0x20) = lVar13;
      *(long *)(lVar10 + 0x28) = lVar8;
      *param_1 = uVar9;
      FUN_100392aec(lVar11);
      uVar9 = *param_1;
      uVar5 = *(ulong *)(uVar9 + 0x10);
    } while (1 < uVar5);
  }
  return 1;
}



/* Address: 0x100307008 | FUN_100307008 */

undefined8 FUN_100307008(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  URL UVar5;
  URL UVar6;
  _StringGuts _Var7;
  long extraout_x8;
  code *pcVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x13;
  code *pcVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  String SVar19;
  String SVar20;
  undefined auStack_c0 [8];
  ulong local_70;
  ulong local_68;
  ulong local_58;
  
  UVar5 = Foundation::URL::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(UVar5.unknown + -8) + 0x40));
  puVar9 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar10 = (long)puVar9 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar11 = (undefined *)(lVar10 - extraout_x12_00);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar17 = (long)puVar11 - extraout_x12_01;
  lVar15 = *(long *)(extraout_x13 + 0x48);
  if (lVar15 == 0) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x100307594);
    (*pcVar8)();
  }
  if ((param_2 - param_1 == -0x8000000000000000) && (lVar15 == -1)) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x100307598);
    (*pcVar8)();
  }
  if ((param_3 - param_2 == -0x8000000000000000) && (lVar15 == -1)) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x10030759c);
    (*pcVar8)();
  }
  lVar2 = 0;
  if (lVar15 != 0) {
    lVar2 = (long)(param_2 - param_1) / lVar15;
  }
  lVar3 = 0;
  if (lVar15 != 0) {
    lVar3 = (long)(param_3 - param_2) / lVar15;
  }
  local_68 = param_4;
  local_58 = param_1;
  if (lVar2 < lVar3) {
    lVar10 = lVar2 * lVar15;
    if ((param_4 < param_1) || (param_1 + lVar10 <= param_4)) {
      _swift_arrayInitWithTakeFrontToBack(param_4,param_1,lVar2,UVar5.unknown);
    }
    else if (param_4 != param_1) {
      _swift_arrayInitWithTakeBackToFront(param_4,param_1,lVar2,UVar5.unknown);
    }
    uVar18 = param_4 + lVar10;
    local_70 = uVar18;
    if (0 < lVar10 && param_2 < param_3) {
      pcVar8 = *(code **)(extraout_x13 + 0x10);
      do {
        (*pcVar8)(lVar17,param_2,UVar5.unknown);
        UVar6.unknown = puVar11;
        (*pcVar8)(puVar11,param_4,UVar5.unknown);
        SVar19 = Foundation::URL::get_lastPathComponent(UVar6);
        _Var7.unknown = SVar19.bridgeObject;
        SVar20 = Foundation::URL::get_lastPathComponent((URL)SVar19.str);
        if (SVar19 == SVar20) {
          _swift_bridgeObjectRelease(_Var7.unknown);
          _swift_bridgeObjectRelease(SVar20.bridgeObject);
          pcVar12 = *(code **)(extraout_x13 + 8);
          (*pcVar12)(puVar11,UVar5.unknown);
          (*pcVar12)(lVar17,UVar5.unknown);
LAB_1003072e8:
          uVar14 = param_4 + lVar15;
          uVar13 = param_2;
          uVar16 = uVar14;
          if ((param_1 < param_4) || (uVar14 <= param_1)) {
            _swift_arrayInitWithTakeFrontToBack(param_1,param_4,1,UVar5.unknown);
          }
          else if (param_1 != param_4) {
            _swift_arrayInitWithTakeBackToFront(param_1,param_4,1,UVar5.unknown);
          }
        }
        else {
          bVar4 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)SVar19.str,_Var7,
                             (_StringComparisonResult)(__int8)SVar20.str);
          _swift_bridgeObjectRelease(_Var7.unknown);
          _swift_bridgeObjectRelease(SVar20.bridgeObject);
          pcVar12 = *(code **)(extraout_x13 + 8);
          (*pcVar12)(puVar11,UVar5.unknown);
          (*pcVar12)(lVar17,UVar5.unknown);
          if (!bVar4) goto LAB_1003072e8;
          uVar13 = param_2 + lVar15;
          uVar14 = param_4;
          if ((param_1 < param_2) || (uVar13 <= param_1)) {
            _swift_arrayInitWithTakeFrontToBack(param_1,param_2,1,UVar5.unknown);
            uVar16 = local_68;
          }
          else {
            uVar16 = local_68;
            if (param_1 != param_2) {
              _swift_arrayInitWithTakeBackToFront(param_1,param_2,1,UVar5.unknown);
              uVar16 = local_68;
            }
          }
        }
        local_68 = uVar16;
        param_1 = param_1 + lVar15;
        local_58 = param_1;
      } while ((uVar14 < uVar18) &&
              (param_2 = uVar13, param_4 = uVar14, local_58 = param_1, uVar13 < param_3));
    }
  }
  else {
    lVar17 = lVar3 * lVar15;
    if ((param_4 < param_2) || (param_2 + lVar17 <= param_4)) {
      _swift_arrayInitWithTakeFrontToBack(param_4,param_2,lVar3,UVar5.unknown);
    }
    else if (param_4 != param_2) {
      _swift_arrayInitWithTakeBackToFront(param_4,param_2,lVar3,UVar5.unknown);
    }
    uVar18 = param_4 + lVar17;
    local_70 = uVar18;
    local_58 = param_2;
    if (0 < lVar17 && param_1 < param_2) {
      lVar15 = -lVar15;
      pcVar8 = *(code **)(extraout_x13 + 0x10);
      local_58 = param_2;
      do {
        uVar14 = local_58;
        uVar13 = local_58 + lVar15;
        uVar16 = param_3;
        while( true ) {
          uVar1 = uVar18 + lVar15;
          (*pcVar8)(lVar10,uVar1,UVar5.unknown);
          UVar6.unknown = puVar9;
          (*pcVar8)(puVar9,uVar13);
          SVar19 = Foundation::URL::get_lastPathComponent(UVar6);
          SVar20 = Foundation::URL::get_lastPathComponent((URL)SVar19.str);
          if (SVar19 == SVar20) {
            bVar4 = false;
          }
          else {
            bVar4 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)SVar19.str,(_StringGuts)SVar19.bridgeObject,
                               (_StringComparisonResult)(__int8)SVar20.str);
          }
          _swift_bridgeObjectRelease(SVar19.bridgeObject);
          _swift_bridgeObjectRelease(SVar20.bridgeObject);
          param_3 = uVar16 + lVar15;
          pcVar12 = *(code **)(extraout_x13 + 8);
          (*pcVar12)(puVar9,UVar5.unknown);
          (*pcVar12)(lVar10,UVar5.unknown);
          if (bVar4 != false) break;
          local_70 = uVar1;
          if ((uVar16 < uVar18) || (uVar18 <= param_3)) {
            _swift_arrayInitWithTakeFrontToBack(param_3,uVar1,1,UVar5.unknown);
          }
          else if (uVar16 != uVar18) {
            _swift_arrayInitWithTakeBackToFront(param_3,uVar1,1,UVar5.unknown);
          }
          uVar16 = param_3;
          uVar18 = uVar1;
          if (uVar1 <= param_4) goto LAB_1003073a0;
        }
        if ((uVar16 < uVar14) || (uVar14 <= param_3)) {
          _swift_arrayInitWithTakeFrontToBack(param_3,uVar13,1,UVar5.unknown);
        }
        else if (uVar16 != uVar14) {
          _swift_arrayInitWithTakeBackToFront(param_3,uVar13,1,UVar5.unknown);
        }
        local_58 = uVar13;
      } while ((param_4 < uVar18) && (param_1 < uVar13));
    }
  }
LAB_1003073a0:
  FUN_100129aa0(&local_58,&local_68,&local_70);
  return 1;
}



/* Address: 0x10030759c | FUN_10030759c */

void FUN_10030759c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10030782c();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1003075b8 | FUN_1003075b8 */

void FUN_1003075b8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1003079c0();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1003075d4 | FUN_1003075d4 */

void FUN_1003075d4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1003082b8();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x100307608 | FUN_100307608 */

void FUN_100307608(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1002ff148(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100307620 | FUN_100307620 */

void FUN_100307620(void)

{
  FUN_100307628(0);
  return;
}



/* Address: 0x100307628 | FUN_100307628 */

void FUN_100307628(undefined8 param_1)

{
  if (DAT_100fbe518 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100cabd64);
  return;
}



/* Address: 0x100307660 | FUN_100307660 */

undefined1  [16] FUN_100307660(URL param_1,ulong param_2)

{
  URL UVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined *local_50;
  long local_48;
  undefined *puStack_40;
  undefined *local_38;
  undefined *puStack_30;
  undefined *local_28;
  
  local_50 = &DAT_100c40698;
  UVar1 = Foundation::URL::typeMetadataAccessor();
  if (param_2 < 0x40) {
    local_48 = *(long *)(UVar1.unknown + -8) + 0x40;
    puStack_40 = &DAT_100c406b0;
    local_38 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
    puStack_30 = PTR___value_witness_table_for_____>____100eae0d0 + 0x40;
    uVar2 = 0x100;
    local_28 = local_38;
    _swift_updateClassMetadata2(param_1.unknown,0x100,6,&local_50,param_1.unknown + 0x50);
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



/* Address: 0x100307700 | FUN_100307700 */

void FUN_100307700(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100307ae4();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x10030771c | FUN_10030771c */

void FUN_10030771c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100307be4();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x100307738 | FUN_100307738 */

void FUN_100307738(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100307cfc();
  *unaff_x20 = param_1;
  return;
}


