/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10035e70c | FUN_10035e70c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10035e70c(undefined8 param_1,undefined8 param_2,URL param_3,char **param_4)

{
  void *pvVar1;
  undefined1 *puVar2;
  NSURL *pNVar3;
  char **ppcVar4;
  char *pcVar5;
  char **ppcVar6;
  char *pcVar7;
  void *pvVar8;
  bool bVar9;
  URL UVar10;
  undefined8 uVar11;
  ID IVar12;
  char *pcVar13;
  Code CVar14;
  undefined *puVar15;
  undefined *puVar16;
  _StringGuts _Var17;
  char *pcVar18;
  char *pcVar19;
  void *pvVar20;
  uint uVar21;
  long extraout_x8;
  long lVar22;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar23;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  code *pcVar24;
  uint uVar25;
  long lVar26;
  long lVar27;
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
  undefined1 auStack_240 [8];
  long local_238;
  long local_230;
  long local_228;
  undefined1 *local_220;
  long local_218;
  NSURL *local_210;
  char **local_208;
  undefined8 local_200;
  char *local_1f8;
  long local_1f0;
  long local_1e8;
  long lStack_1e0;
  long local_1d8;
  char **local_1d0;
  uint local_1c4;
  code *local_1c0;
  String local_1b8;
  undefined *local_1a8;
  undefined *local_1a0;
  char *local_198;
  char local_190 [24];
  undefined1 auStack_178 [8];
  char local_170 [24];
  undefined1 auStack_158 [8];
  NSURL *local_150;
  char **local_148;
  char *local_e8;
  undefined *puStack_e0;
  char *local_d0;
  void *pvStack_c8;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_210 = (NSURL *)Foundation::CocoaError::Code::typeMetadataAccessor();
  local_218 = *(long *)(local_210 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_218 + 0x40));
  local_220 = auStack_240 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar22 = (long)(auStack_240 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  local_228 = lVar22;
  local_1d0 = (char **)Foundation::CocoaError::typeMetadataAccessor();
  local_230 = *(long *)((long)local_1d0 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_230 + 0x40));
  lVar22 = lVar22 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_238 = lVar22;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar22 = lVar22 - extraout_x12_00;
  local_1d8 = lVar22;
  local_1a0 = (undefined *)Foundation::URL::typeMetadataAccessor();
  lVar26 = *(long *)(local_1a0 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar26 + 0x40));
  lVar22 = lVar22 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar27 = lVar22 - extraout_x12_01;
  local_1a8 = (undefined *)objc_stub::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  UVar10 = Foundation::URL::deletingLastPathComponent((URL)local_1a8);
  local_1b8 = Foundation::URL::get_lastPathComponent(UVar10);
  FUN_1000d4ca4(0);
  _swift_initStackObject();
  uVar11 = 0xd000000000000017;
  FUN_1000d4624(0xd000000000000017,0x8000000100da3070);
  uVar21 = 0;
  lVar23 = 0;
  local_208 = (char **)0x8000000100da3090;
  local_200 = uVar11;
  local_1f0 = lVar27;
  local_1e8 = lVar22;
  lStack_1e0 = lVar26;
  do {
    pcVar13 = ((String *)(&DAT_100fc0f20 + lVar23 * 2))->str;
    pvVar1 = (void *)(&DAT_100fc0f28)[lVar23 * 2];
    SVar30 = *(String *)(&DAT_100fc0f20 + lVar23 * 2);
    pvVar20 = local_1b8.bridgeObject;
    local_e8 = local_1b8.str;
    puStack_e0 = local_1b8.bridgeObject;
    _swift_bridgeObjectRetain(pvVar1);
    _swift_bridgeObjectRetain(pvVar20);
    SVar33.bridgeObject = param_4;
    SVar33.str = param_3.unknown;
    local_198 = pcVar13;
    Swift::String::append(SVar30,SVar33);
    UVar10.unknown = puStack_e0;
    SVar30.bridgeObject = puStack_e0;
    SVar30.str = local_e8;
    Foundation::URL::appendingPathComponent(SVar30,param_3);
    _swift_bridgeObjectRelease();
    param_3.unknown = Foundation::URL::_bridgeToObjectiveC(UVar10);
    local_1c0 = *(code **)(lVar26 + 8);
    (*local_1c0)(lVar22,local_1a0);
    local_e8 = (char *)0x0;
    param_4 = &local_e8;
    IVar12 = objc_stub::removeItemAtURL_error_((ID)local_1a8);
    if ((int)IVar12 == 0) {
      pcVar13 = local_e8;
      local_1c4 = uVar21;
      Foundation::__convertNSErrorToError();
      _swift_willThrow(0);
      local_e8 = pcVar13;
      _swift_errorRetain(pcVar13);
      param_3.unknown = &DAT_100fc1bb0;
      FUN_1000037f0(&DAT_100fc1bb0,&DAT_100c422e0);
      lVar27 = local_1d8;
      param_4 = local_1d0;
      _swift_dynamicCast(local_1d8,&local_e8,param_3.unknown,local_1d0,0);
      ppcVar4 = local_1d0;
      lVar22 = local_230;
      lVar26 = local_238;
      if ((int)lVar27 != 0) {
        (**(code **)(local_230 + 0x20))(local_238,local_1d8,local_1d0);
        FUN_100003a00(&DAT_100fc0f40,PTR_typeMetadataAccessor_100ea6960,
                      PTR_Foundation__Foundation__CocoaError_>Foundation___BridgedStoredNSError_100ea6958
                     );
        lVar27 = local_228;
        CVar14.unknown = (undefined *)ppcVar4;
        local_1f8 = pcVar13;
        (extension_Foundation)::Foundation::_BridgedStoredNSError::_get_code();
        puVar2 = local_220;
        Foundation::CocoaError::Code::get_fileNoSuchFile(CVar14);
        param_4 = (char **)&DAT_100fc0f48;
        FUN_100003a00(&DAT_100fc0f48,PTR_typeMetadataAccessor_100ea6940,
                      PTR_Foundation__Foundation__CocoaError__Code_>Swift__Equatable_100ea6950);
        pNVar3 = local_210;
        param_3.unknown = local_210;
        bVar9 = Swift::Equatable::___infix(lVar27,puVar2);
        pcVar24 = *(code **)(local_218 + 8);
        (*pcVar24)(puVar2,pNVar3);
        pcVar13 = local_1f8;
        (*pcVar24)(lVar27,pNVar3);
        (**(code **)(lVar22 + 8))(lVar26,ppcVar4);
        if (bVar9) {
          _swift_errorRelease(pcVar13);
          _swift_bridgeObjectRelease(pvVar1);
          _swift_errorRelease(local_e8);
          lVar26 = lStack_1e0;
          lVar22 = local_1e8;
          lVar27 = local_1f0;
          uVar25 = local_1c4;
          goto LAB_10035e8f4;
        }
      }
      _swift_errorRelease(local_e8);
      FUN_1000d468c(&local_e8);
      pvVar20 = pvStack_c8;
      pcVar19 = local_d0;
      _Var17.unknown = local_d0;
      FUN_100004640(&local_e8);
      local_150 = (NSURL *)0x0;
      local_148 = (char **)0xe000000000000000;
      Swift::_StringGuts::grow(0x22,_Var17);
      _swift_bridgeObjectRelease(local_148);
      pcVar5 = local_198;
      ppcVar4 = local_208;
      local_150 = (NSURL *)0xd00000000000001c;
      local_148 = local_208;
      SVar28.bridgeObject = pvVar1;
      SVar28.str = local_198;
      SVar34.bridgeObject = param_4;
      SVar34.str = param_3.unknown;
      Swift::String::append(SVar28,SVar34);
      SVar29.bridgeObject = &SUB_e200000000000000;
      SVar29.str = (char *)0x203a;
      SVar35.bridgeObject = param_4;
      SVar35.str = param_3.unknown;
      Swift::String::append(SVar29,SVar35);
      pcVar18 = local_170;
      _swift_getErrorValue(pcVar13,auStack_158);
      SVar30 = (extension_Foundation)::Swift::Error::get_localizedDescription();
      SVar36.bridgeObject = param_4;
      SVar36.str = pcVar18;
      Swift::String::append(SVar30,SVar36);
      _swift_bridgeObjectRelease(SVar30.bridgeObject);
      ppcVar6 = local_148;
      FUN_1000d4df0(local_150,local_148);
      _swift_bridgeObjectRelease(ppcVar6);
      FUN_100004594(&local_e8);
      puVar15 = &DAT_100c42a90;
      _swift_getKeyPath(&DAT_100c42a90);
      puVar16 = &DAT_100fbdbb0;
      FUN_1000037f0(&DAT_100fbdbb0,&DAT_100c3eff0);
      _swift_initStackObject();
      FUN_1000da6e0(puVar15,puVar16);
      FUN_1000da768(&local_e8);
      _swift_release(puVar15);
      pvVar8 = pvStack_c8;
      pcVar7 = local_d0;
      _Var17.unknown = local_d0;
      FUN_100004640(&local_e8);
      local_150 = (NSURL *)0x0;
      local_148 = (char **)0xe000000000000000;
      Swift::_StringGuts::grow(0x22,_Var17);
      _swift_bridgeObjectRelease(local_148);
      local_150 = (NSURL *)0xd00000000000001c;
      local_148 = ppcVar4;
      SVar31.bridgeObject = pvVar1;
      SVar31.str = pcVar5;
      SVar37.bridgeObject = pvVar20;
      SVar37.str = pcVar19;
      Swift::String::append(SVar31,SVar37);
      _swift_bridgeObjectRelease(pvVar1);
      SVar32.bridgeObject = &SUB_e200000000000000;
      SVar32.str = (char *)0x203a;
      SVar38.bridgeObject = pvVar20;
      SVar38.str = pcVar19;
      Swift::String::append(SVar32,SVar38);
      pcVar18 = local_190;
      _swift_getErrorValue(pcVar13,auStack_178);
      SVar30 = (extension_Foundation)::Swift::Error::get_localizedDescription();
      SVar39.bridgeObject = pvVar20;
      SVar39.str = pcVar18;
      Swift::String::append(SVar30,SVar39);
      _swift_bridgeObjectRelease(SVar30.bridgeObject);
      ppcVar4 = local_148;
      param_3.unknown = local_150;
      param_4 = local_148;
      (**(code **)((long)pvVar8 + 0x30))
                (0x6573616261746164,&DAT_e800000000000000,local_150,local_148,pcVar7,pvVar8);
      _swift_errorRelease(pcVar13);
      _swift_bridgeObjectRelease(ppcVar4);
      FUN_100004594(&local_e8);
      lVar26 = lStack_1e0;
      lVar22 = local_1e8;
      lVar27 = local_1f0;
      uVar25 = local_1c4;
    }
    else {
      _swift_bridgeObjectRelease(pvVar1);
      uVar25 = uVar21;
    }
LAB_10035e8f4:
    uVar21 = 1;
    lVar23 = 1;
    if ((uVar25 & 1) != 0) {
      (*local_1c0)(lVar27,local_1a0);
      _swift_bridgeObjectRelease(local_1b8.bridgeObject);
      _swift_release(local_200);
      _swift_arrayDestroy(&DAT_100fc0f20,2,PTR___type_metadata_for_Swift_String_100eac208);
      if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_70) {
                    /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
      }
      return;
    }
  } while( true );
}



/* Address: 0x10035ed80 | FUN_10035ed80 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

NSURL * FUN_10035ed80(void)

{
  undefined *puVar1;
  URL UVar2;
  NSString *pNVar3;
  NSString *pNVar4;
  URL UVar5;
  NSURL *pNVar6;
  ID IVar7;
  ID self;
  NSNumber *pNVar8;
  undefined *puVar9;
  NSArray *pNVar10;
  void *aBlock;
  long *plVar11;
  NSURL *pNVar12;
  long extraout_x8;
  long extraout_x12;
  long lVar13;
  NSURL *pNVar14;
  long *plVar15;
  long lVar16;
  NSURL aNStack_a0 [8];
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar13 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar13 + 0x40));
  pNVar6 = aNStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  pNVar14 = pNVar6 + -extraout_x12;
  if (DAT_100fbe6d8 != -1) {
    _swift_once(&DAT_100fbe6d8,FUN_100308a24);
  }
  IVar7 = DAT_101057970;
  pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  UVar5.unknown = (undefined *)objc_stub::URLForResource_withExtension_(IVar7,pNVar3,pNVar4);
  pNVar12 = (NSURL *)0x0;
  if (UVar5.unknown != (undefined *)0x0) {
    Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar5);
    (**(code **)(lVar13 + 0x20))(pNVar14,pNVar6,UVar2.unknown);
    UVar5.unknown = &_OBJC_CLASS___NSManagedObjectModel;
    _objc_allocWithZone();
    pNVar6 = Foundation::URL::_bridgeToObjectiveC(UVar5);
    IVar7 = objc_stub::FUN_100c03de0((ID)UVar5.unknown,pNVar6);
    if (IVar7 != 0) {
      puVar9 = &DAT_100ecc720;
      _swift_allocObject(&DAT_100ecc720,0x18,7);
      plVar15 = (long *)(puVar9 + 0x10);
      *plVar15 = 0;
      UVar5.unknown = &_OBJC_CLASS___NSPersistentStoreDescription;
      local_98 = puVar9;
      _objc_allocWithZone();
      pNVar6 = Foundation::URL::_bridgeToObjectiveC(UVar5);
      self = objc_stub::initWithURL_((ID)UVar5.unknown,pNVar6);
      pNVar8 = (extension_Foundation)::bool::_bridgeToObjectiveC();
      objc_stub::FUN_100c0cee0
                (self,pNVar8,
                 *(undefined8 *)
                  PTR__NSPersistentStoreRemoteChangeNotificationPostOptionKey_100ea9a28);
      pNVar8 = (extension_Foundation)::bool::_bridgeToObjectiveC();
      objc_stub::FUN_100c0cee0
                (self,pNVar8,*(undefined8 *)PTR__NSPersistentHistoryTrackingKey_100ea9a18);
      puVar9 = &_OBJC_CLASS___NSPersistentContainer;
      _objc_allocWithZone();
      pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      pNVar6 = (NSURL *)objc_stub::FUN_100c045c0((ID)puVar9,pNVar3,IVar7);
      puVar9 = &DAT_100fbe4e8;
      FUN_1000037f0(&DAT_100fbe4e8,&DAT_100c40a80);
      _swift_allocObject();
      *(undefined8 *)(puVar9 + 0x18) = 3;
      *(undefined8 *)(puVar9 + 0x10) = 1;
      *(ID *)(puVar9 + 0x20) = self;
      FUN_10000ec2c(0,&DAT_100fc0ed0,&PTR__OBJC_CLASS___NSPersistentStoreDescription_100f8dbe0);
      pNVar10 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
      puVar1 = local_98;
      _swift_release(puVar9);
      objc_stub::FUN_100c0d0c0((ID)pNVar6,pNVar10);
      local_70 = thunk_FUN_10035f2cc;
      local_68 = puVar1;
      local_90 = PTR___NSConcreteStackBlock_100ea82a0;
      local_88 = 0x42000000;
      local_80 = FUN_10035dd60;
      puStack_78 = &DAT_100ecc738;
      aBlock = __Block_copy(&local_90);
      puVar9 = local_68;
      _swift_retain(puVar1);
      _swift_release(puVar9);
      objc_stub::FUN_100c06340((ID)pNVar6,aBlock);
      __Block_release(aBlock);
      plVar11 = plVar15;
      _swift_beginAccess(plVar15,&local_90,0,0);
      lVar16 = *plVar15;
      if (lVar16 != 0) {
        FUN_10035f260();
        _swift_allocError(&DAT_100ecc880,plVar11,0,0);
        *plVar11 = lVar16;
        _swift_willThrow();
        _swift_errorRetain(lVar16);
        (**(code **)(lVar13 + 8))(pNVar14,UVar2.unknown);
        _swift_release(puVar1);
        return pNVar6;
      }
      (**(code **)(lVar13 + 8))(pNVar14,UVar2.unknown);
      _swift_release(puVar1);
      return pNVar6;
    }
    (**(code **)(lVar13 + 8))(pNVar14,UVar2.unknown);
    pNVar12 = pNVar14;
  }
  FUN_10035f260();
  _swift_allocError(&DAT_100ecc880,pNVar12,0,0);
  *(undefined8 *)pNVar12 = 0;
  _swift_willThrow();
  return pNVar6;
}



/* Address: 0x10035f204 | FUN_10035f204 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10035f204(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x10035f228 | FUN_10035f228 */

void FUN_10035f228(void)

{
  long unaff_x20;
  
  FUN_10035e4d8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x10035f234 | FUN_10035f234 */

void FUN_10035f234(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x10035f244 | FUN_10035f244 */

void FUN_10035f244(long param_1,long param_2)

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



/* Address: 0x10035f258 | FUN_10035f258 */

void FUN_10035f258(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x10035f260 | FUN_10035f260 */

void FUN_10035f260(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc0ec8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c42b28;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c42b28,&DAT_100ecc880);
  DAT_100fc0ec8 = pTVar1;
  return;
}



/* Address: 0x10035f2a0 | FUN_10035f2a0 */

void FUN_10035f2a0(void)

{
  long unaff_x20;
  
  _swift_errorRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x10035f2c4 | thunk_FUN_1002fad30 */

void thunk_FUN_1002fad30(void)

{
  FUN_1002fad30();
  return;
}



/* Address: 0x10035f2c8 | thunk_FUN_10019b694 */

void thunk_FUN_10019b694(void)

{
  thunk_FUN_10019b694();
  return;
}



/* Address: 0x10035f2cc | FUN_10035f2cc */

void FUN_10035f2cc(void)

{
  FUN_10035e6b0();
  return;
}



/* Address: 0x10035f2e4 | FUN_10035f2e4 */

void FUN_10035f2e4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1002d612c();
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



/* Address: 0x10035f308 | FUN_10035f308 */

void FUN_10035f308(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x10035f32c | FUN_10035f32c */

void FUN_10035f32c(void)

{
  FUN_10035dd04();
  return;
}



/* Address: 0x10035f334 | FUN_10035f334 */

void FUN_10035f334(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fc0ef0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fc0ed8;
  FUN_100005c24(&DAT_100fc0ed8,&DAT_100c42a58);
  puVar2 = 
  PTR_Combine__Combine__Publishers__Merge<undefined,undefined>_>Combine__Publisher_100ea96e0;
  _swift_getWitnessTable
            (PTR_Combine__Combine__Publishers__Merge<undefined,undefined>_>Combine__Publisher_100ea96e0
             ,puVar1);
  DAT_100fc0ef0 = puVar2;
  return;
}



/* Address: 0x10035f384 | FUN_10035f384 */

void FUN_10035f384(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x10035f390 | FUN_10035f390 */

int FUN_10035f390(ulong *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[1] != '\0')) {
    return (int)*param_1 + 0x7fffffff;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (1 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2;
  }
  return iVar1;
}



/* Address: 0x10035f3e0 | FUN_10035f3e0 */

void FUN_10035f3e0(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x7fffffff) {
    if (0x7ffffffe < param_3) {
      *(undefined1 *)(param_1 + 1) = 0;
    }
    if (param_2 != 0) {
      *param_1 = (ulong)param_2;
      return;
    }
  }
  else {
    *param_1 = 0;
    *(uint *)param_1 = param_2 + 0x80000001;
    if (0x7ffffffe < param_3) {
      *(undefined1 *)(param_1 + 1) = 1;
    }
  }
  return;
}



/* Address: 0x10035f434 | FUN_10035f434 */

int FUN_10035f434(ulong *param_1)

{
  ulong uVar1;
  
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x10035f44c | FUN_10035f44c */

void FUN_10035f44c(ulong *param_1,uint param_2)

{
  if ((int)param_2 < 0) {
    param_2 = param_2 & 0x7fffffff;
  }
  else {
    if (param_2 == 0) {
      return;
    }
    param_2 = param_2 - 1;
  }
  *param_1 = (ulong)param_2;
  return;
}



/* Address: 0x10035f46c | FUN_10035f46c */

undefined1  [16] FUN_10035f46c(void)

{
  return ZEXT816(0x100ecc880);
}



/* Address: 0x10035f47c | thunk_FUN_10035f244 */

void thunk_FUN_10035f244(void)

{
  FUN_10035f244();
  return;
}



/* Address: 0x10035f480 | thunk_FUN_10035f244 */

void thunk_FUN_10035f244(void)

{
  FUN_10035f244();
  return;
}



/* Address: 0x10035f484 | thunk_FUN_10035f244 */

void thunk_FUN_10035f244(void)

{
  FUN_10035f244();
  return;
}



/* Address: 0x10035f488 | thunk_FUN_10035f244 */

void thunk_FUN_10035f244(void)

{
  FUN_10035f244();
  return;
}



/* Address: 0x10035f48c | thunk_FUN_10035f258 */

void thunk_FUN_10035f258(void)

{
  FUN_10035f258();
  return;
}



/* Address: 0x10035f490 | thunk_FUN_10035f258 */

void thunk_FUN_10035f258(void)

{
  FUN_10035f258();
  return;
}



/* Address: 0x10035f494 | thunk_FUN_10035f258 */

void thunk_FUN_10035f258(void)

{
  FUN_10035f258();
  return;
}



/* Address: 0x10035f498 | thunk_FUN_10035f258 */

void thunk_FUN_10035f258(void)

{
  FUN_10035f258();
  return;
}



/* Address: 0x10035f49c | thunk_FUN_10035f2cc */

void thunk_FUN_10035f2cc(void)

{
  FUN_10035e6b0();
  return;
}



/* Address: 0x10035f4a0 | thunk_FUN_1000aa754 */

void thunk_FUN_1000aa754(void)

{
  thunk_FUN_1000aa754();
  return;
}



/* Address: 0x10035f4a4 | FUN_10035f4a4 */

void FUN_10035f4a4(undefined8 param_1,undefined8 param_2)

{
  FUN_10035f508(param_1,param_2,FUN_100329850,FUN_10032a9a0);
  return;
}



/* Address: 0x10035f4b8 | FUN_10035f4b8 */

void FUN_10035f4b8(undefined8 param_1,undefined8 param_2)

{
  FUN_10035f508(param_1,param_2,FUN_100329764,FUN_10032a5b0);
  return;
}



/* Address: 0x10035f4cc | FUN_10035f4cc */

void FUN_10035f4cc(undefined8 param_1,undefined8 param_2)

{
  FUN_10035f508(param_1,param_2,FUN_100329860,FUN_10032a460);
  return;
}



/* Address: 0x10035f4e0 | FUN_10035f4e0 */

void FUN_10035f4e0(undefined8 param_1,undefined8 param_2)

{
  FUN_10035f508(param_1,param_2,FUN_100329890,FUN_10032a850);
  return;
}



/* Address: 0x10035f4f4 | FUN_10035f4f4 */

void FUN_10035f4f4(undefined8 param_1,undefined8 param_2)

{
  FUN_10035f508(param_1,param_2,FUN_100329870,FUN_10032ad90);
  return;
}



/* Address: 0x10035f508 | FUN_10035f508 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10035f508(ID param_1,undefined8 param_2,code *param_3,code *param_4)

{
  ID self;
  undefined1 *puVar1;
  NSArray *pNVar2;
  undefined1 auStack_a0 [24];
  long local_88;
  undefined1 auStack_80 [32];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  self = param_1;
  (*param_3)();
  FUN_10032af50(&local_60,auStack_a0);
  if (local_88 == 0) {
    FUN_10030e660(auStack_a0);
  }
  else {
    FUN_100011080(auStack_a0,auStack_80);
    puVar1 = auStack_80;
    FUN_10032ba78(puVar1,0);
    objc_stub::setPredicate_(self,puVar1);
    FUN_100004594(auStack_80);
  }
  FUN_10032af50(param_1,auStack_a0);
  if (local_88 == 0) {
    FUN_10030e660(auStack_a0);
  }
  else {
    FUN_100011080(auStack_a0,auStack_80);
    puVar1 = auStack_80;
    FUN_10032c450(puVar1);
    FUN_10032b6c8(0);
    pNVar2 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(puVar1);
    objc_stub::FUN_100c0dbc0(self,pNVar2);
    FUN_100004594(auStack_80);
  }
  objc_stub::FUN_100c0bba0(self,0);
  (*param_4)(self,param_2);
  FUN_10030e660(&local_60);
  return self;
}



/* Address: 0x10035f650 | FUN_10035f650 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10035f650(ID param_1,undefined8 param_2)

{
  ID self;
  undefined1 *puVar1;
  NSArray *pNVar2;
  undefined1 auStack_90 [24];
  long local_78;
  undefined1 auStack_70 [32];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  self = param_1;
  thunk_FUN_100329774();
  FUN_10032af50(&local_50,auStack_90);
  if (local_78 == 0) {
    FUN_10030e660(auStack_90);
  }
  else {
    FUN_100011080(auStack_90,auStack_70);
    puVar1 = auStack_70;
    FUN_10032ba78(puVar1,0);
    objc_stub::setPredicate_(self,puVar1);
    FUN_100004594(auStack_70);
  }
  FUN_10032af50(param_1,auStack_90);
  if (local_78 == 0) {
    FUN_10030e660(auStack_90);
  }
  else {
    FUN_100011080(auStack_90,auStack_70);
    puVar1 = auStack_70;
    FUN_10032c450(puVar1);
    FUN_10032b6c8(0);
    pNVar2 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(puVar1);
    objc_stub::FUN_100c0dbc0(self,pNVar2);
    FUN_100004594(auStack_70);
  }
  objc_stub::FUN_100c0bba0(self,0);
  FUN_10032aaf0(self,param_2);
  FUN_10030e660(&local_50);
  return self;
}



/* Address: 0x10035f78c | FUN_10035f78c */

void FUN_10035f78c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = 0;
  FUN_100311d0c(0);
  FUN_100310fb8(param_1,param_2,param_3,param_4,param_5,*(undefined8 *)(unaff_x20 + 0x10),uVar1);
  return;
}



/* Address: 0x10035f7f4 | FUN_10035f7f4 */

undefined1 * FUN_10035f7f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined *local_48;
  
  puVar1 = PTR___type_metadata_for_Swift_String_100eac208;
  puVar3 = &local_60;
  local_48 = PTR___type_metadata_for_Swift_String_100eac208;
  local_60 = 0x5b3d3d20656d616e;
  uStack_58 = 0xed00004025205d63;
  puVar2 = &DAT_100fbec98;
  FUN_1000037f0(&DAT_100fbec98,&DAT_100c40a70);
  _swift_allocObject();
  *(undefined8 *)(puVar2 + 0x18) = 2;
  *(undefined8 *)(puVar2 + 0x10) = 1;
  *(undefined **)(puVar2 + 0x38) = puVar1;
  *(undefined8 *)(puVar2 + 0x20) = param_1;
  *(undefined8 *)(puVar2 + 0x28) = param_2;
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  _swift_bridgeObjectRetain(param_2);
  FUN_100328e18(&local_60,puVar2,uVar4);
  _swift_release(puVar2);
  FUN_100004594(&local_60);
  return (undefined1 *)puVar3;
}



/* Address: 0x10035f8c8 | FUN_10035f8c8 */

undefined1 * FUN_10035f8c8(void)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 local_40;
  undefined1 *puStack_38;
  undefined *local_28;
  
  puVar1 = &local_40;
  local_28 = PTR___type_metadata_for_Swift_String_100eac208;
  local_40 = 0x656d616e;
  puStack_38 = &DAT_e400000000000000;
  FUN_10035f508(&local_40,*(undefined8 *)(unaff_x20 + 0x10),FUN_100329850,FUN_10032a9a0);
  FUN_10030e660(&local_40);
  return (undefined1 *)puVar1;
}



/* Address: 0x10035f930 | FUN_10035f930 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10035f930(void)

{
  ID IVar1;
  ID IVar2;
  long unaff_x20;
  
  IVar1 = NSWorkspace::sharedWorkspace((ID)&_OBJC_CLASS___NSWorkspace);
  IVar2 = NSWorkspace::frontmostApplication(IVar1);
  IVar1 = 0;
  if (IVar2 != 0) {
    FUN_100311d0c(0);
    FUN_100311e3c(IVar2,*(undefined8 *)(unaff_x20 + 0x10),IVar1);
    IVar1 = IVar2;
  }
  return IVar1;
}



/* Address: 0x10035f9b4 | FUN_10035f9b4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10035f9b4(void)

{
  ID IVar1;
  long unaff_x20;
  
  FUN_100311d0c(0);
  IVar1 = NSRunningApplication::currentApplication((ID)&_OBJC_CLASS___NSRunningApplication);
  FUN_100311e3c(IVar1,*(undefined8 *)(unaff_x20 + 0x10));
  return IVar1;
}



/* Address: 0x10035fa18 | FUN_10035fa18 */

undefined1 * FUN_10035fa18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *unaff_x20;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined *local_48;
  
  puVar1 = PTR___type_metadata_for_Swift_String_100eac208;
  puVar3 = &local_60;
  lVar5 = *unaff_x20;
  local_48 = PTR___type_metadata_for_Swift_String_100eac208;
  local_60 = 0x5b3d3d20656d616e;
  uStack_58 = 0xed00004025205d63;
  puVar2 = &DAT_100fbec98;
  FUN_1000037f0(&DAT_100fbec98,&DAT_100c40a70);
  _swift_allocObject();
  *(undefined8 *)(puVar2 + 0x18) = 2;
  *(undefined8 *)(puVar2 + 0x10) = 1;
  *(undefined **)(puVar2 + 0x38) = puVar1;
  *(undefined8 *)(puVar2 + 0x20) = param_1;
  *(undefined8 *)(puVar2 + 0x28) = param_2;
  uVar4 = *(undefined8 *)(lVar5 + 0x10);
  _swift_bridgeObjectRetain(param_2);
  FUN_100328e18(&local_60,puVar2,uVar4);
  _swift_release(puVar2);
  FUN_100004594(&local_60);
  return (undefined1 *)puVar3;
}



/* Address: 0x10035faf0 | FUN_10035faf0 */

undefined1 * FUN_10035faf0(void)

{
  undefined8 *puVar1;
  long *unaff_x20;
  undefined8 local_40;
  undefined1 *puStack_38;
  undefined *local_28;
  
  puVar1 = &local_40;
  local_28 = PTR___type_metadata_for_Swift_String_100eac208;
  local_40 = 0x656d616e;
  puStack_38 = &DAT_e400000000000000;
  FUN_10035f508(&local_40,*(undefined8 *)(*unaff_x20 + 0x10),FUN_100329850,FUN_10032a9a0);
  FUN_10030e660(&local_40);
  return (undefined1 *)puVar1;
}



/* Address: 0x10035fb5c | FUN_10035fb5c */

void FUN_10035fb5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *unaff_x20;
  long lVar1;
  
  lVar1 = *unaff_x20;
  FUN_100311d0c(0);
  FUN_100310fb8(param_1,param_2,param_3,param_4,param_5,*(undefined8 *)(lVar1 + 0x10));
  return;
}



/* Address: 0x10035fbcc | FUN_10035fbcc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10035fbcc(void)

{
  ID IVar1;
  ID IVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar3 = *unaff_x20;
  IVar1 = NSWorkspace::sharedWorkspace((ID)&_OBJC_CLASS___NSWorkspace);
  IVar2 = NSWorkspace::frontmostApplication(IVar1);
  IVar1 = 0;
  if (IVar2 != 0) {
    FUN_100311d0c(0);
    FUN_100311e3c(IVar2,*(undefined8 *)(lVar3 + 0x10));
    IVar1 = IVar2;
  }
  return IVar1;
}



/* Address: 0x10035fc50 | FUN_10035fc50 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10035fc50(void)

{
  ID IVar1;
  long *unaff_x20;
  long lVar2;
  
  lVar2 = *unaff_x20;
  FUN_100311d0c(0);
  IVar1 = NSRunningApplication::currentApplication((ID)&_OBJC_CLASS___NSRunningApplication);
  FUN_100311e3c(IVar1,*(undefined8 *)(lVar2 + 0x10));
  return IVar1;
}



/* Address: 0x10035fcb4 | FUN_10035fcb4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10035fcb4(void)

{
  return ZEXT816(0x100fc0f90);
}



/* Address: 0x10035fcd4 | FUN_10035fcd4 */

undefined1 * FUN_10035fcd4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined *local_48;
  
  puVar1 = PTR___type_metadata_for_Swift_String_100eac208;
  puVar3 = &local_60;
  local_48 = PTR___type_metadata_for_Swift_String_100eac208;
  local_60 = 0x5b3d3d20656d616e;
  uStack_58 = 0xed00004025205d63;
  puVar2 = &DAT_100fbec98;
  FUN_1000037f0(&DAT_100fbec98,&DAT_100c40a70);
  _swift_allocObject();
  *(undefined8 *)(puVar2 + 0x18) = 2;
  *(undefined8 *)(puVar2 + 0x10) = 1;
  *(undefined **)(puVar2 + 0x38) = puVar1;
  *(undefined8 *)(puVar2 + 0x20) = param_1;
  *(undefined8 *)(puVar2 + 0x28) = param_2;
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  _swift_bridgeObjectRetain(param_2);
  FUN_100328e30(&local_60,puVar2,uVar4);
  _swift_release(puVar2);
  FUN_100004594(&local_60);
  return (undefined1 *)puVar3;
}



/* Address: 0x10035fda8 | FUN_10035fda8 */

void FUN_10035fda8(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = 0;
  FUN_100312518(0);
  FUN_100312150(*(undefined8 *)(unaff_x20 + 0x10),uVar1);
  return;
}



/* Address: 0x10035fdd8 | FUN_10035fdd8 */

void FUN_10035fdd8(void)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = *unaff_x20;
  FUN_100312518(0);
  FUN_100312150(*(undefined8 *)(lVar1 + 0x10));
  return;
}



/* Address: 0x10035fe08 | FUN_10035fe08 */

undefined1 * FUN_10035fe08(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *unaff_x20;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined *local_48;
  
  puVar1 = PTR___type_metadata_for_Swift_String_100eac208;
  puVar3 = &local_60;
  lVar5 = *unaff_x20;
  local_48 = PTR___type_metadata_for_Swift_String_100eac208;
  local_60 = 0x5b3d3d20656d616e;
  uStack_58 = 0xed00004025205d63;
  puVar2 = &DAT_100fbec98;
  FUN_1000037f0(&DAT_100fbec98,&DAT_100c40a70);
  _swift_allocObject();
  *(undefined8 *)(puVar2 + 0x18) = 2;
  *(undefined8 *)(puVar2 + 0x10) = 1;
  *(undefined **)(puVar2 + 0x38) = puVar1;
  *(undefined8 *)(puVar2 + 0x20) = param_1;
  *(undefined8 *)(puVar2 + 0x28) = param_2;
  uVar4 = *(undefined8 *)(lVar5 + 0x10);
  _swift_bridgeObjectRetain(param_2);
  FUN_100328e30(&local_60,puVar2,uVar4);
  _swift_release(puVar2);
  FUN_100004594(&local_60);
  return (undefined1 *)puVar3;
}



/* Address: 0x10035fee0 | FUN_10035fee0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10035fee0(void)

{
  return ZEXT816(0x100fc1030);
}



/* Address: 0x10035ff00 | FUN_10035ff00 */

void FUN_10035ff00(void)

{
  undefined *puVar1;
  undefined *puVar2;
  AnyCancellable *pAVar3;
  long extraout_x8;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_a0 [24];
  AnyCancellable *local_88 [3];
  AnyCancellable *local_70;
  undefined *puStack_68;
  
  puVar1 = &DAT_100fc1178;
  FUN_1000037f0(&DAT_100fc1178,&DAT_100c42ea8);
  lVar4 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_1000037f0(&DAT_100fc1180,&DAT_100c42eb0);
  FUN_100016eac(&DAT_100fc1188,&DAT_100fc1180,&DAT_100c42eb0,
                PTR_Combine__Combine__AnyPublisher<undefined,undefined>_>Combine__Publisher_100ea9758
               );
  FUN_1003648fc();
  (extension_Combine)::Combine::Publisher::_removeDuplicates();
  puVar2 = &DAT_100eccaf8;
  _swift_allocObject(&DAT_100eccaf8,0x18,7);
  _swift_weakInit(puVar2 + 0x10);
  FUN_100016eac(&DAT_100fc1198,&DAT_100fc1178,&DAT_100c42ea8,
                PTR_Combine__Combine__Publishers__RemoveDuplicates<undefined>_>Combine__Publisher_100ea9680
               );
  pAVar3 = (extension_Combine)::Combine::Publisher::_sink();
  _swift_release(puVar2);
  (**(code **)(lVar4 + 8))(auStack_a0 + -extraout_x8,puVar1);
  local_70 = Combine::AnyCancellable::typeMetadataAccessor();
  puStack_68 = 
  PTR___protocol_witness_table_for_Combine_AnyCancellable___Combine_Cancellable_in_Combine_100ea9778
  ;
  local_88[0] = pAVar3;
  _swift_beginAccess(unaff_x20 + 0x20,auStack_a0,0x21,0);
  FUN_100364968(local_88,unaff_x20 + 0x20);
  _swift_endAccess(auStack_a0);
  return;
}



/* Address: 0x1003600a0 | FUN_1003600a0 */

void FUN_1003600a0(undefined8 param_1)

{
  Task TVar1;
  TaskPriority TVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long extraout_x8;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puVar6;
  
  puVar6 = &DAT_100fbe478;
  FUN_1000037f0(&DAT_100fbe478,&DAT_100c40940);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = *(undefined **)(unaff_x20 + 0x48);
  if (puVar6 != (undefined *)0x0) {
    TVar1.unknown = puVar6;
    _swift_retain();
    Swift::Task::cancel(TVar1);
    _swift_release(puVar6);
  }
  TVar2 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar2.unknown + -8) + 0x38))
            (&stack0xffffffffffffffc0 + -extraout_x8,1,1,TVar2.unknown);
  puVar6 = &DAT_100eccaf8;
  _swift_allocObject(&DAT_100eccaf8,0x18,7);
  _swift_weakInit(puVar6 + 0x10);
  puVar3 = &DAT_100eccb20;
  _swift_allocObject(&DAT_100eccb20,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = puVar6;
  *(undefined8 *)(puVar3 + 0x28) = param_1;
  _swift_bridgeObjectRetain(param_1);
  uVar4 = 0;
  FUN_100364f4c(0,0,&stack0xffffffffffffffc0 + -extraout_x8,&DAT_100c42ec0,puVar3);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x48);
  *(undefined8 *)(unaff_x20 + 0x48) = uVar4;
  _swift_release(uVar5);
  return;
}



/* Address: 0x1003601e0 | FUN_1003601e0 */

void FUN_1003601e0(void)

{
  CancellationError CVar1;
  ulong uVar2;
  undefined8 in_x3;
  undefined8 in_x4;
  long lVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x98) = in_x3;
  *(undefined8 *)(unaff_x22 + 0xa0) = in_x4;
  CVar1 = Swift::CancellationError::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0xa8) = CVar1.unknown;
  lVar3 = *(long *)(CVar1.unknown + -8);
  *(long *)(unaff_x22 + 0xb0) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb8) = uVar2;
  _swift_task_switch(FUN_100360240,0,0);
  return;
}



/* Address: 0x100360240 | FUN_100360240 */

void FUN_100360240(void)

{
  bool bVar1;
  Task TVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  TVar2.unknown = (undefined *)(*(long *)(unaff_x22 + 0x98) + 0x10);
  _swift_weakLoadStrong();
  *(undefined **)(unaff_x22 + 0xc0) = TVar2.unknown;
  if (TVar2.unknown != (undefined *)0x0) {
    bVar1 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar2);
    if (!bVar1) {
      uVar4 = *(undefined8 *)(TVar2.unknown + 0x50);
      _swift_retain(uVar4);
      FUN_1000da768(unaff_x22 + 0x78);
      _swift_release(uVar4);
      *(undefined8 *)(unaff_x22 + 200) = *(undefined8 *)(unaff_x22 + 0x78);
      plVar3 = (long *)0x40;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0xd0) = plVar3;
      *plVar3 = unaff_x22;
      plVar3[1] = (long)FUN_1003602fc;
      FUN_1002e0f7c(0,0,*(undefined8 *)(unaff_x22 + 0xa0));
      return;
    }
    _swift_release(TVar2.unknown);
  }
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xb8));
                    /* WARNING: Could not recover jumptable at 0x000100360294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1003602fc | FUN_1003602fc */

void FUN_1003602fc(undefined *param_1,undefined8 param_2,char *param_3,void *param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  bool bVar5;
  Task TVar6;
  MainActor *pMVar7;
  undefined8 *puVar8;
  UnownedSerialExecutor UVar9;
  _StringGuts _Var10;
  void *pvVar11;
  undefined *unaff_x20;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  long *unaff_x22;
  long lVar15;
  undefined8 uVar16;
  char *pcVar17;
  long lVar18;
  char *pcVar19;
  ulong *puVar20;
  long lVar21;
  ulong uVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  
  lVar21 = *unaff_x22;
  TVar6.unknown = *(undefined **)(lVar21 + 200);
  lVar15 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar21 + 0xd0));
  _swift_release();
  if (unaff_x20 != (undefined *)0x0) {
    uVar12 = *(ulong *)(lVar21 + 0xb8);
    pvVar11 = *(void **)(lVar21 + 0xa8);
    *(undefined **)(lVar21 + 0x80) = unaff_x20;
    _swift_errorRetain();
    pcVar19 = &DAT_100fc1bb0;
    FUN_1000037f0(&DAT_100fc1bb0,&DAT_100c422e0);
    _swift_dynamicCast(uVar12,lVar21 + 0x80,pcVar19,pvVar11,0);
    lVar13 = *(long *)(lVar21 + 0xc0);
    if ((uVar12 & 1) != 0) {
      lVar18 = *(long *)(lVar21 + 0xb0);
      uVar14 = *(undefined8 *)(lVar21 + 0xb8);
      uVar16 = *(undefined8 *)(lVar21 + 0xa8);
      _swift_release(lVar13);
      _swift_errorRelease();
      (**(code **)(lVar18 + 8))(uVar14,uVar16);
      _swift_errorRelease(*(undefined8 *)(lVar21 + 0x80));
      goto LAB_1003606c8;
    }
    pcVar17 = *(char **)(lVar21 + 0xa0);
    _swift_errorRelease(*(undefined8 *)(lVar21 + 0x80));
    uVar14 = *(undefined8 *)(lVar13 + 0x58);
    _swift_retain(uVar14);
    FUN_1000d468c(lVar21 + 0x10);
    _swift_release(uVar14);
    param_3 = *(char **)(lVar21 + 0x28);
    param_4 = *(void **)(lVar21 + 0x30);
    _Var10.unknown = param_3;
    FUN_100004640(lVar21 + 0x10);
    Swift::_StringGuts::grow(0x20,_Var10);
    _swift_bridgeObjectRelease(0xe000000000000000);
    FUN_1002ddf40();
    SVar24.bridgeObject = _Var10.unknown;
    SVar24.str = pcVar17;
    SVar27.bridgeObject = pvVar11;
    SVar27.str = pcVar19;
    Swift::String::append(SVar24,SVar27);
    _swift_bridgeObjectRelease(_Var10.unknown);
    SVar23.bridgeObject = (void *)0xe300000000000000;
    SVar23.str = (char *)0x203a27;
    SVar28.bridgeObject = pvVar11;
    SVar28.str = pcVar19;
    Swift::String::append(SVar23,SVar28);
    pcVar19 = (char *)(lVar21 + 0x60);
    _swift_getErrorValue();
    SVar24 = (extension_Foundation)::Swift::Error::get_localizedDescription();
    SVar29.bridgeObject = pvVar11;
    SVar29.str = pcVar19;
    Swift::String::append(SVar24,SVar29);
    _swift_bridgeObjectRelease(SVar24.bridgeObject);
    FUN_1000d4e0c(0xd000000000000019,0x8000000100da30f0);
    _swift_bridgeObjectRelease(0x8000000100da30f0);
    FUN_100004594(lVar21 + 0x10);
    _swift_errorRelease();
    TVar6.unknown = unaff_x20;
    param_1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  *(undefined **)(lVar21 + 0xd8) = param_1;
  bVar5 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar6);
  lVar13 = *(long *)(lVar21 + 0xc0);
  if (bVar5) {
    _swift_bridgeObjectRelease(param_1);
    _swift_release(lVar13);
  }
  else {
    pcVar19 = *(char **)(lVar21 + 0xa0);
    uVar14 = *(undefined8 *)(lVar13 + 0x58);
    _swift_retain(uVar14);
    FUN_1000d468c(lVar21 + 0x38);
    _swift_release(uVar14);
    puVar2 = *(undefined **)(lVar21 + 0x50);
    uVar14 = *(undefined8 *)(lVar21 + 0x58);
    _Var10.unknown = puVar2;
    FUN_100004640(lVar21 + 0x38);
    Swift::_StringGuts::grow(0x27,_Var10);
    _swift_bridgeObjectRelease(0xe000000000000000);
    lVar13 = *(long *)(param_1 + 0x10);
    *(long *)(lVar21 + 0x90) = lVar13;
    SVar24 = Swift::CustomStringConvertible::get_description();
    SVar30.bridgeObject = param_4;
    SVar30.str = param_3;
    Swift::String::append(SVar24,SVar30);
    _swift_bridgeObjectRelease(SVar24.bridgeObject);
    pvVar11 = (void *)0x8000000100da3110;
    SVar25.bridgeObject = (void *)0x8000000100da3110;
    SVar25.str = (char *)0xd000000000000018;
    SVar31.bridgeObject = param_4;
    SVar31.str = param_3;
    Swift::String::append(SVar25,SVar31);
    FUN_1002ddf40();
    SVar26.bridgeObject = pvVar11;
    SVar26.str = pcVar19;
    SVar32.bridgeObject = param_4;
    SVar32.str = param_3;
    Swift::String::append(SVar26,SVar32);
    _swift_bridgeObjectRelease(pvVar11);
    FUN_1000d4db8(0x69737365636f7250,0xeb0000000020676e,puVar2,uVar14);
    _swift_bridgeObjectRelease(0xeb0000000020676e);
    TVar6.unknown = (undefined *)(lVar21 + 0x38);
    FUN_100004594();
    puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (lVar13 != 0) {
      FUN_1003075b8(0,lVar13,0);
      lVar18 = *(ulong *)(puVar2 + 0x10) << 4;
      puVar20 = (ulong *)(param_1 + 0x28);
      uVar12 = *(ulong *)(puVar2 + 0x10);
      do {
        uVar3 = puVar20[-1];
        puVar4 = (undefined *)*puVar20;
        uVar1 = uVar12 + 1;
        uVar22 = *(ulong *)(puVar2 + 0x18);
        TVar6.unknown = puVar4;
        _swift_bridgeObjectRetain();
        if (uVar22 >> 1 <= uVar12) {
          TVar6.unknown = (undefined *)(ulong)(1 < uVar22);
          FUN_1003075b8(TVar6.unknown,uVar1,1);
        }
        puVar20 = puVar20 + 2;
        *(ulong *)(puVar2 + 0x10) = uVar1;
        *(ulong *)(puVar2 + lVar18 + 0x20) = uVar3;
        *(undefined **)(puVar2 + lVar18 + 0x28) = puVar4;
        lVar18 = lVar18 + 0x10;
        lVar13 = lVar13 + -1;
        uVar12 = uVar1;
      } while (lVar13 != 0);
    }
    *(undefined **)(lVar21 + 0xe0) = puVar2;
    bVar5 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar6);
    if (!bVar5) {
      pMVar7 = Swift::MainActor::typeMetadataAccessor();
      puVar2 = PTR_typeMetadataAccessor_100eaec10;
      pMVar7 = Swift::MainActor::get_shared(pMVar7,pMVar7);
      *(MainActor **)(lVar21 + 0xe8) = pMVar7;
      puVar8 = &DAT_100fbe4b0;
      FUN_100003a00(&DAT_100fbe4b0,puVar2,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
      UVar9 = Swift::Actor::get_unownedExecutor();
      _swift_task_switch(FUN_100360774,UVar9.unknown,puVar8);
      return;
    }
    uVar14 = *(undefined8 *)(lVar21 + 0xc0);
    _swift_bridgeObjectRelease(param_1);
    _swift_release(uVar14);
    _swift_bridgeObjectRelease(puVar2);
  }
LAB_1003606c8:
  _swift_task_dealloc(*(undefined8 *)(lVar21 + 0xb8));
                    /* WARNING: Could not recover jumptable at 0x0001003606f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar15 + 8))();
  return;
}



/* Address: 0x100360774 | FUN_100360774 */

void FUN_100360774(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe0);
  _swift_release(*(undefined8 *)(unaff_x22 + 0xe8));
  FUN_100360808(uVar1);
  _swift_bridgeObjectRelease(uVar1);
  _swift_task_switch(FUN_1003607c4,0,0);
  return;
}



/* Address: 0x1003607c4 | FUN_1003607c4 */

void FUN_1003607c4(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0xd8));
  _swift_release(uVar1);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xb8));
                    /* WARNING: Could not recover jumptable at 0x000100360804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100360808 | FUN_100360808 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100360808(ID param_1)

{
  _CocoaArrayWrapper _Var1;
  ID self;
  NSPredicate *pNVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  _StringGuts _Var5;
  char *pcVar6;
  void *pvVar7;
  undefined *puVar8;
  long unaff_x20;
  CurrentValueSubject *pCVar9;
  long lVar10;
  long lVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  ID local_a0 [3];
  undefined *local_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar11 = *(long *)(param_1 + 0x10);
  if (lVar11 == 0) {
    local_a0[0] = 0;
    Combine::CurrentValueSubject::send(*(CurrentValueSubject **)(unaff_x20 + 0x18),local_a0);
  }
  else {
    self = param_1;
    FUN_100329754();
    pNVar2 = (NSPredicate *)0x0;
    FUN_10000ec2c(0,&DAT_100fbeb38,&PTR__OBJC_CLASS___NSPredicate_100f8db30);
    puVar8 = &DAT_100fbeb40;
    FUN_1000037f0("identifier IN %@",&DAT_100fbeb40,&DAT_100c42e40);
    _swift_allocObject();
    *(undefined8 *)(puVar8 + 0x18) = 2;
    *(undefined8 *)(puVar8 + 0x10) = 1;
    puVar3 = &DAT_100fbedd8;
    FUN_1000037f0(&DAT_100fbedd8,&DAT_100c42ed0);
    *(undefined **)(puVar8 + 0x38) = puVar3;
    puVar4 = &DAT_100fc11a0;
    FUN_100016eac(&DAT_100fc11a0,&DAT_100fbedd8,&DAT_100c42ed0,
                  PTR_Foundation__Swift__Array<undefined>_>Swift__CVarArg_100ea78b0);
    *(undefined8 **)(puVar8 + 0x40) = puVar4;
    *(ID *)(puVar8 + 0x20) = param_1;
    _swift_bridgeObjectRetain(param_1);
    pNVar2 = (extension_Foundation)::__C::NSPredicate::___allocating_init(pNVar2);
    objc_stub::setPredicate_(self,pNVar2);
    objc_stub::FUN_100c0bb60(self,0x14);
    FUN_1000037f0(&DAT_100fc1148,&DAT_100c42e50);
    _swift_allocObject();
    FUN_100365db4();
    pcVar6 = (char *)0x0;
    pvVar7 = (void *)0x0;
    _swift_beginAccess(self + 0x10,auStack_78);
    puVar8 = *(undefined **)(self + 0x10);
    if ((ulong)puVar8 >> 0x3e == 0) {
      lVar10 = *(long *)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
    }
    else {
      _Var1.unknown = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar8) {
        _Var1.unknown = puVar8;
      }
      lVar10 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    }
    if (lVar10 != lVar11) {
      FUN_1000d468c(local_a0);
      _Var5.unknown = local_88;
      FUN_100004640();
      Swift::_StringGuts::grow(0x35,_Var5);
      SVar12.bridgeObject = (void *)0xed000020646e756f;
      SVar12.str = (char *)0x6620686372616553;
      SVar15.bridgeObject = pvVar7;
      SVar15.str = pcVar6;
      Swift::String::append(SVar12,SVar15);
      SVar12 = Swift::CustomStringConvertible::get_description();
      SVar16.bridgeObject = pvVar7;
      SVar16.str = pcVar6;
      Swift::String::append(SVar12,SVar16);
      _swift_bridgeObjectRelease(SVar12.bridgeObject);
      SVar13.bridgeObject = (void *)0x8000000100da3150;
      SVar13.str = (char *)0xd00000000000001c;
      SVar17.bridgeObject = pvVar7;
      SVar17.str = pcVar6;
      Swift::String::append(SVar13,SVar17);
      SVar12 = Swift::CustomStringConvertible::get_description();
      SVar18.bridgeObject = pvVar7;
      SVar18.str = pcVar6;
      Swift::String::append(SVar12,SVar18);
      _swift_bridgeObjectRelease(SVar12.bridgeObject);
      SVar14.bridgeObject = &DAT_e800000000000000;
      SVar14.str = (char *)0x737463656a626f20;
      SVar19.bridgeObject = pvVar7;
      SVar19.str = pcVar6;
      Swift::String::append(SVar14,SVar19);
      FUN_1000d4df0(0,0xe000000000000000,local_88,uStack_80);
      _swift_bridgeObjectRelease(0xe000000000000000);
      FUN_100004594(local_a0);
    }
    pCVar9 = *(CurrentValueSubject **)(unaff_x20 + 0x18);
    local_a0[0] = self;
    _swift_retain(self);
    Combine::CurrentValueSubject::send(pCVar9,local_a0);
    _swift_release_n(self,2);
  }
  return;
}



/* Address: 0x100360b34 | FUN_100360b34 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100360b34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}


