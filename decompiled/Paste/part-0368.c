/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100482ae4 | thunk_FUN_1004840c8 */

void thunk_FUN_1004840c8(void)

{
  FUN_1004840c8();
  return;
}



/* Address: 0x100482ae8 | FUN_100482ae8 */

/* WARNING: Removing unreachable block (ram,0x000100482c4c) */

void FUN_100482ae8(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  Date DVar6;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar7;
  undefined1 auStack_60 [12];
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar2 = &DAT_100fc8f58;
  FUN_1000037f0(&DAT_100fc8f58,&DAT_100c4d9a8);
  lVar7 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100484884();
  Swift::Encoder::_container();
  local_51 = 0;
  Swift::KeyedEncodingContainer::_encode(*unaff_x20,unaff_x20[1],&local_51,puVar2);
  if (unaff_x21 == 0) {
    local_52 = 1;
    Swift::KeyedEncodingContainer::_encode(unaff_x20[2],unaff_x20[3],&local_52,puVar2);
    local_53 = 2;
    puVar3 = &DAT_100fc7eb8;
    FUN_1000037f0(&DAT_100fc7eb8,&DAT_100c4c8c0);
    puVar4 = &DAT_100fc7ec0;
    FUN_10045e1bc(&DAT_100fc7ec0,
                  PTR___protocol_witness_table_for_Swift_String___Swift_Encodable_in_Swift_100eac210
                  ,PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100eac510);
    Swift::KeyedEncodingContainer::_encode(unaff_x20 + 4,&local_53,puVar2,puVar3,puVar4);
    lVar5 = 0;
    FUN_100484870();
    iVar1 = *(int *)(lVar5 + 0x1c);
    local_54 = 3;
    DVar6 = Foundation::Date::typeMetadataAccessor();
    puVar3 = &DAT_100fc7e28;
    FUN_100003a00(&DAT_100fc7e28,PTR_typeMetadataAccessor_100ea7480,
                  PTR_Foundation__Foundation__Date_>Swift__Encodable_100ea7490);
    Swift::KeyedEncodingContainer::_encode
              ((long)unaff_x20 + (long)iVar1,&local_54,puVar2,DVar6.unknown,puVar3);
    (**(code **)(lVar7 + 8))(auStack_60 + -extraout_x8,puVar2);
  }
  else {
    (**(code **)(lVar7 + 8))(auStack_60 + -extraout_x8,puVar2);
  }
  return;
}



/* Address: 0x100482cf4 | FUN_100482cf4 */

/* WARNING: Removing unreachable block (ram,0x000100482f50) */
/* WARNING: Removing unreachable block (ram,0x000100482eb8) */
/* WARNING: Removing unreachable block (ram,0x000100482fcc) */
/* WARNING: Removing unreachable block (ram,0x000100482fe8) */
/* WARNING: Removing unreachable block (ram,0x000100482ffc) */
/* WARNING: Removing unreachable block (ram,0x000100483004) */
/* WARNING: Removing unreachable block (ram,0x000100483008) */
/* WARNING: Removing unreachable block (ram,0x000100482e4c) */

void FUN_100482cf4(undefined8 param_1,long param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar7;
  long unaff_x21;
  long lVar8;
  String *pSVar9;
  String SVar10;
  String SStack_c0;
  String local_b0;
  void *local_a0;
  long local_98;
  undefined8 local_90;
  undefined *local_88;
  undefined *local_80;
  long local_78;
  char *local_68;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  local_90 = param_1;
  local_88 = (undefined *)Foundation::Date::typeMetadataAccessor();
  local_98 = *(long *)(local_88 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_98 + 0x40));
  lVar8 = (long)&SStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100fc8f68;
  FUN_1000037f0(&DAT_100fc8f68,&DAT_100c4d9b0);
  lVar7 = *(long *)(puVar3 + -8);
  local_80 = puVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  FUN_100484870();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  pSVar9 = (String *)((lVar8 - extraout_x8_00) - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_100484884();
  local_78 = lVar8 - extraout_x8_00;
  Swift::Decoder::_container();
  puVar2 = local_80;
  puVar3 = local_88;
  if (unaff_x21 == 0) {
    local_51 = 0;
    SVar10 = Swift::KeyedDecodingContainer::_decode(&local_51,local_80);
    *pSVar9 = SVar10;
    local_52 = 1;
    SVar10 = Swift::KeyedDecodingContainer::_decode(&local_52,puVar2);
    pSVar9[1] = SVar10;
    puVar5 = &DAT_100fc7eb8;
    local_a0 = SVar10.bridgeObject;
    FUN_1000037f0(&DAT_100fc7eb8,&DAT_100c4c8c0);
    local_53 = 2;
    puVar6 = &DAT_100fc7ed0;
    local_b0.str = (char *)pSVar9;
    FUN_10045e1bc(&DAT_100fc7ed0,
                  PTR___protocol_witness_table_for_Swift_String___Swift_Decodable_in_Swift_100eac240
                  ,PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100eac538);
    Swift::KeyedDecodingContainer::_decode(&local_68,puVar5,&local_53,puVar2,puVar5,puVar6);
    pcVar1 = local_b0.str;
    SStack_c0.bridgeObject = local_68;
    ((String *)((long)local_b0.str + 0x20))->str = local_68;
    local_54 = 3;
    puVar5 = &DAT_100fc7e58;
    FUN_100003a00(&DAT_100fc7e58,PTR_typeMetadataAccessor_100ea7480,
                  PTR_Foundation__Foundation__Date_>Swift__Decodable_100ea74a8);
    Swift::KeyedDecodingContainer::_decode(lVar8,puVar3,&local_54,puVar2,puVar3,puVar5);
    (**(code **)(lVar7 + 8))(local_78,puVar2);
    (**(code **)(local_98 + 0x20))
              ((long)(char **)pcVar1 + (long)*(int *)(lVar4 + 0x1c),lVar8,puVar3);
    FUN_1004848c4(pcVar1,local_90);
    FUN_100004594(param_2);
    FUN_100484908(pcVar1);
  }
  else {
    FUN_100004594(param_2);
  }
  return;
}



/* Address: 0x100483064 | FUN_100483064 */

void FUN_100483064(void)

{
  FUN_100482cf4();
  return;
}



/* Address: 0x100483078 | FUN_100483078 */

void FUN_100483078(void)

{
  FUN_100482ae8();
  return;
}



/* Address: 0x10048308c | FUN_10048308c */

void FUN_10048308c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  
  _swift_defaultActor_initialize();
  lVar1 = _TtC8PasteMCP11DCRRegistry::logger;
  FUN_1000d4ca4(0);
  _swift_allocObject();
  uVar2 = 0x7369676552524344;
  FUN_1000d4624(0x7369676552524344,0xeb00000000797274);
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  lVar1 = _TtC8PasteMCP11DCRRegistry::telemetry;
  puVar3 = &DAT_100c4d978;
  _swift_getKeyPath();
  puVar4 = &DAT_100fc7c08;
  FUN_1000037f0(&DAT_100fc7c08,&DAT_100c4c580);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  FUN_100011090(param_1,unaff_x20 + _TtC8PasteMCP11DCRRegistry::fileURL,&DAT_100fc7ce0,
                &DAT_100c4d030);
  uVar2 = param_1;
  FUN_100484160();
  FUN_100005808(param_1,&DAT_100fc7ce0,&DAT_100c4d030);
  *(undefined8 *)(unaff_x20 + 0x70) = uVar2;
  return;
}



/* Address: 0x1004831a4 | thunk_FUN_10019b694 */

void thunk_FUN_10019b694(void)

{
  thunk_FUN_10019b694();
  return;
}



/* Address: 0x1004831a8 | FUN_1004831a8 */

void FUN_1004831a8(String *param_1,char *param_2,void *param_3,char *param_4)

{
  undefined *puVar1;
  UUID UVar2;
  UUID UVar3;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 *puVar4;
  long lVar5;
  String SVar6;
  char *local_80;
  undefined1 auStack_78 [24];
  
  puVar1 = &DAT_100fc8318;
  local_80 = param_2;
  FUN_1000037f0(&DAT_100fc8318,&DAT_100c4cea0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_78 + (-8 - extraout_x8);
  UVar2 = Foundation::UUID::typeMetadataAccessor();
  lVar5 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar5 + 0x40));
  UVar3 = Foundation::UUID::init();
  SVar6 = Foundation::UUID::get_uuidString(UVar3);
  (**(code **)(lVar5 + 8))
            ((long)puVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0),UVar2.unknown);
  lVar5 = 0;
  FUN_100484870();
  _swift_bridgeObjectRetain(param_3);
  _swift_bridgeObjectRetain(param_4);
  Foundation::Date::init();
  *param_1 = SVar6;
  param_1[1].str = local_80;
  param_1[1].bridgeObject = param_3;
  param_1[2].str = param_4;
  FUN_1004848c4(param_1,puVar4);
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(puVar4,0,1,lVar5);
  _swift_beginAccess(unaff_x20 + 0x70,auStack_78,0x21,0);
  _swift_bridgeObjectRetain(SVar6.bridgeObject);
  FUN_100460dc0(puVar4,SVar6.str,SVar6.bridgeObject);
  _swift_endAccess(auStack_78);
  FUN_100483334();
  return;
}



/* Address: 0x100483334 | FUN_100483334 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100483830) */
/* WARNING: Removing unreachable block (ram,0x0001004837f4) */
/* WARNING: Removing unreachable block (ram,0x000100483844) */

void FUN_100483334(void)

{
  undefined8 uVar1;
  DateEncodingStrategy DVar2;
  undefined7 extraout_var;
  URL UVar3;
  URL UVar4;
  NSURL *pNVar5;
  ID IVar6;
  JSONEncoder *pJVar7;
  OutputFormatting OVar8;
  OutputFormatting OVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined8 ****ppppuVar12;
  undefined8 ****ppppuVar13;
  Data DVar14;
  _StringGuts _Var15;
  undefined1 *puVar16;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar17;
  long extraout_x12;
  undefined8 extraout_x13;
  long lVar18;
  long unaff_x20;
  long lVar19;
  undefined8 ****ppppuVar20;
  long lVar21;
  long lVar22;
  undefined *puVar23;
  code *pcVar24;
  long lVar25;
  long lVar26;
  String SVar27;
  String SVar28;
  code *local_170;
  undefined8 local_168;
  URL local_160;
  long local_158;
  OutputFormatting local_150;
  undefined *local_148;
  undefined8 local_138;
  undefined8 local_130;
  undefined1 auStack_120 [8];
  undefined8 local_118;
  undefined8 local_110;
  undefined1 auStack_100 [104];
  undefined8 ***local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined *local_80;
  long local_78;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_148 = (undefined *)Foundation::JSONEncoder::OutputFormatting::typeMetadataAccessor();
  local_158 = *(long *)(local_148 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_158 + 0x40));
  puVar23 = (undefined *)((long)&local_170 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_150.unknown = puVar23;
  DVar2 = Foundation::JSONEncoder::DateEncodingStrategy::typeMetadataAccessor();
  lVar18 = *(long *)(CONCAT71(extraout_var,DVar2.value) + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar18 + 0x40));
  lVar26 = (long)puVar23 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar23 = &DAT_100fc7ce0;
  FUN_1000037f0(&DAT_100fc7ce0,&DAT_100c4d030);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar23 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar19 = lVar26 - extraout_x8_01;
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar21 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar21 + 0x40));
  lVar25 = lVar19 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar23 = (undefined *)(lVar25 - extraout_x12);
  FUN_100011090(unaff_x20 + _TtC8PasteMCP11DCRRegistry::fileURL,lVar19,&DAT_100fc7ce0,&DAT_100c4d030
               );
  lVar22 = lVar19;
  (**(code **)(lVar21 + 0x30))(lVar19,1,extraout_x13);
  if ((int)lVar22 == 1) {
    FUN_100005808(lVar19,&DAT_100fc7ce0,&DAT_100c4d030);
  }
  else {
    (**(code **)(lVar21 + 0x20))(puVar23,lVar19,extraout_x13);
    UVar3.unknown = (undefined *)objc_stub::defaultManager(&_OBJC_CLASS___NSFileManager);
    local_160.unknown = puVar23;
    UVar4 = Foundation::URL::deletingLastPathComponent(UVar3);
    pNVar5 = Foundation::URL::_bridgeToObjectiveC(UVar4);
    pcVar24 = *(code **)(lVar21 + 8);
    local_168 = extraout_x13;
    (*pcVar24)(lVar25,extraout_x13);
    local_98 = (undefined8 ****)0x0;
    puVar16 = &DAT_00000001;
    IVar6 = objc_stub::createDirectoryAtURL_withIntermediateDirectories_attributes_error_
                      ((ID)UVar3.unknown,pNVar5,1,0,&local_98);
    local_170 = pcVar24;
    if ((int)IVar6 == 0) {
      ppppuVar13 = (undefined8 ****)local_98;
      Foundation::__convertNSErrorToError();
      _swift_willThrow(0);
      UVar3.unknown = local_160.unknown;
      FUN_1000d468c(&local_98);
      lVar22 = local_78;
      puVar23 = local_80;
      _Var15.unknown = local_80;
      FUN_100004640(&local_98);
      local_118 = 0;
      local_110 = 0xe000000000000000;
      Swift::_StringGuts::grow(0x22,_Var15);
      SVar27.bridgeObject = (void *)0x8000000100da83a0;
      SVar27.str = (char *)0xd000000000000020;
      SVar28.bridgeObject = puVar16;
      SVar28.str = (char *)pNVar5;
      Swift::String::append(SVar27,SVar28);
      _swift_getErrorValue(ppppuVar13,auStack_120,&local_138);
      Swift::DefaultStringInterpolation::_appendInterpolation(local_138,local_130);
      uVar1 = local_110;
      FUN_1000d4e0c(local_118,local_110,puVar23,lVar22);
      _swift_bridgeObjectRelease(uVar1);
      FUN_100004594(&local_98);
      FUN_1000da768(&local_98);
      FUN_100004640(&local_98,local_80);
      puVar23 = &DAT_100fc81a0;
      FUN_1000037f0(&DAT_100fc81a0,&DAT_100c4ce08);
      _swift_initStackObject();
      *(undefined8 *)(puVar23 + 0x20) = 0x6573616870;
      *(undefined8 *)(puVar23 + 0x18) = 2;
      *(undefined8 *)(puVar23 + 0x10) = 1;
      *(undefined **)(puVar23 + 0x48) = PTR___type_metadata_for_Swift_String_100eac208;
      *(undefined1 **)(puVar23 + 0x28) = &DAT_e500000000000000;
      *(undefined8 *)(puVar23 + 0x30) = 0xd000000000000014;
      *(undefined8 *)(puVar23 + 0x38) = 0x8000000100da83d0;
      puVar11 = puVar23;
      FUN_10045a404();
      _swift_setDeallocating(puVar23);
      FUN_100005808(puVar23 + 0x20,&DAT_100fc7d78,&DAT_100c4c740);
      (**(code **)(local_78 + 0x28))(ppppuVar13,puVar11,local_80,local_78);
      _swift_bridgeObjectRelease(puVar11);
      _swift_errorRelease(ppppuVar13);
      (*local_170)(UVar3.unknown,local_168);
      FUN_100004594(&local_98);
    }
    else {
      pJVar7 = Foundation::JSONEncoder::typeMetadataAccessor();
      _swift_allocObject(pJVar7,*(undefined4 *)(pJVar7 + 0x30),*(undefined2 *)(pJVar7 + 0x34));
      pJVar7 = Foundation::JSONEncoder::init(pJVar7);
      (**(code **)(lVar18 + 0x68))
                (lVar26,*(undefined4 *)
                         PTR___enum_case_for_Foundation_JSONEncoder_DateEncodingStrategy_iso8601_Foundation_JSONEncoder_DateEncodingStrategy_Type___>_Foundation_JSONEncoder_DateEncodingStrategy_100ea6ab0
                 ,CONCAT71(extraout_var,DVar2.value));
      Foundation::JSONEncoder::set_dateEncodingStrategy(pJVar7,(DateEncodingStrategy)(__int8)lVar26)
      ;
      OVar8.unknown = &DAT_100fc84c8;
      FUN_1000037f0(&DAT_100fc84c8,&DAT_100c4d038);
      _swift_allocObject();
      *(undefined8 *)(OVar8.unknown + 0x18) = 4;
      *(undefined8 *)(OVar8.unknown + 0x10) = 2;
      OVar9 = Foundation::JSONEncoder::OutputFormatting::get_prettyPrinted(OVar8);
      Foundation::JSONEncoder::OutputFormatting::get_sortedKeys(OVar9);
      puVar10 = &DAT_100fc84d0;
      local_98 = (undefined8 ***)OVar8.unknown;
      FUN_100003a00(&DAT_100fc84d0,PTR_typeMetadataAccessor_100ea6a88,
                    PTR_Foundation__Foundation__JSONEncoder__OutputFormatting_>Swift__SetAlgebra_100ea6a98
                   );
      puVar23 = &DAT_100fc84d8;
      FUN_1000037f0(&DAT_100fc84d8,&DAT_100c4d040);
      puVar11 = puVar23;
      FUN_1004701bc();
      OVar8.unknown = local_150.unknown;
      Swift::SetAlgebra::_init(local_150.unknown,&local_98,puVar23,puVar11,local_148,puVar10);
      Foundation::JSONEncoder::set_outputFormatting(pJVar7,OVar8);
      _swift_beginAccess(unaff_x20 + 0x70,auStack_100,0,0);
      lVar22 = *(long *)(unaff_x20 + 0x70);
      ppppuVar20 = *(undefined8 *****)(lVar22 + 0x10);
      ppppuVar13 = (undefined8 ****)PTR___swiftEmptyArrayStorage_100eae0d8;
      if (ppppuVar20 != (undefined8 ****)0x0) {
        _swift_bridgeObjectRetain(lVar22);
        ppppuVar13 = ppppuVar20;
        FUN_1004646f8(ppppuVar20,0);
        lVar18 = 0;
        FUN_100484870();
        uVar17 = (ulong)*(byte *)(*(long *)(lVar18 + -8) + 0x50);
        ppppuVar12 = &local_98;
        FUN_10046b8a0(ppppuVar12,
                      (undefined *)
                      ((long)ppppuVar13 + (uVar17 + 0x20 & (uVar17 ^ 0xffffffffffffffff))),
                      ppppuVar20,lVar22);
        FUN_10000c650(local_98,uStack_90,local_88,local_80,local_78);
        if (ppppuVar12 != ppppuVar20) {
                    /* WARNING: Does not return */
          pcVar24 = (code *)SoftwareBreakpoint(1,0x100483748);
          (*pcVar24)();
        }
      }
      UVar3.unknown = local_160.unknown;
      puVar23 = &DAT_100fc9120;
      local_98 = ppppuVar13;
      FUN_1000037f0(&DAT_100fc9120,&DAT_100c4dbd8);
      FUN_100485184(&DAT_100fc9128,&DAT_100fc9130,&TargetProtocolConformanceDescriptor_100c4da08);
      DVar14 = Foundation::JSONEncoder::_encode(pJVar7);
      _swift_release(ppppuVar13);
      Foundation::Data::_write(UVar3,(NSDataWritingOptions)0x1,DVar14);
      (*local_170)(UVar3.unknown,local_168);
      _swift_release(pJVar7);
      FUN_10003bf2c(DVar14.unknown,puVar23);
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100483a84 | FUN_100483a84 */

void FUN_100483a84(undefined8 param_1,long param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(unaff_x20 + 0x70,auStack_58,0,0);
  lVar4 = *(long *)(unaff_x20 + 0x70);
  if (*(long *)(lVar4 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar4);
    FUN_10046483c(param_2);
    if ((param_3 & 1) != 0) {
      lVar5 = *(long *)(lVar4 + 0x38);
      lVar1 = 0;
      FUN_100484870();
      lVar6 = *(long *)(lVar1 + -8);
      FUN_1004848c4(lVar5 + *(long *)(lVar6 + 0x48) * param_2,param_1);
      _swift_bridgeObjectRelease(lVar4);
      pcVar3 = *(code **)(lVar6 + 0x38);
      uVar2 = 0;
      goto LAB_100483b50;
    }
    _swift_bridgeObjectRelease(lVar4);
  }
  lVar1 = 0;
  FUN_100484870();
  pcVar3 = *(code **)(*(long *)(lVar1 + -8) + 0x38);
  uVar2 = 1;
LAB_100483b50:
  (*pcVar3)(param_1,uVar2,1,lVar1);
  return;
}



/* Address: 0x100483b6c | FUN_100483b6c */

void FUN_100483b6c(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x70));
  FUN_100005808(unaff_x20 + _TtC8PasteMCP11DCRRegistry::fileURL,&DAT_100fc7ce0,&DAT_100c4d030);
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC8PasteMCP11DCRRegistry::logger));
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC8PasteMCP11DCRRegistry::telemetry));
  _swift_defaultActor_destroy();
  return;
}



/* Address: 0x100483bd0 | FUN_100483bd0 */

void FUN_100483bd0(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x70));
  FUN_100005808(unaff_x20 + _TtC8PasteMCP11DCRRegistry::fileURL,&DAT_100fc7ce0,&DAT_100c4d030);
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC8PasteMCP11DCRRegistry::logger));
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC8PasteMCP11DCRRegistry::telemetry));
  _swift_defaultActor_destroy();
  _swift_defaultActor_deallocate();
  return;
}



/* Address: 0x100483c34 | FUN_100483c34 */

void FUN_100483c34(long param_1,uint param_2,long *param_3)

{
  ulong *puVar1;
  int iVar2;
  StaticString file;
  __uint64 line;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  char *pcVar7;
  ulong uVar8;
  _StringGuts _Var9;
  char *pcVar10;
  long extraout_x8;
  long extraout_x8_00;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long extraout_x12;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  ulong *puVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  ulong auStack_d0 [2];
  ulong auStack_c0 [2];
  ulong local_80;
  ulong uStack_78;
  StaticString local_70;
  __uint64 _Stack_68;
  undefined *local_58;
  
  lVar4 = 0;
  FUN_100484870();
  lVar4 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar4 + 0x40));
  lVar19 = (long)auStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100fc7d50;
  FUN_1000037f0(&DAT_100fc7d50,&DAT_100c4c718);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar20 = (ulong *)(lVar19 - extraout_x12);
  uVar13 = *(ulong *)(param_1 + 0x10);
  if (uVar13 == 0) {
    _swift_bridgeObjectRelease(param_1);
  }
  else {
    iVar2 = *(int *)(puVar5 + 0x30);
    uVar14 = (ulong)*(byte *)(extraout_x8_00 + 0x50) + 0x20 &
             ((ulong)*(byte *)(extraout_x8_00 + 0x50) ^ 0xffffffffffffffff);
    lVar11 = *(long *)(extraout_x8_00 + 0x48);
    FUN_100011090(param_1 + uVar14,puVar20,&DAT_100fc7d50,&DAT_100c4c718);
    uVar22 = *puVar20;
    uVar21 = puVar20[1];
    FUN_100485260((long)puVar20 + (long)iVar2,lVar19);
    lVar16 = *param_3;
    uVar18 = uVar22;
    uVar8 = uVar21;
    FUN_10046483c();
    lVar12 = *(long *)(lVar16 + 0x10);
    uVar15 = (ulong)~(uint)uVar8 & 1;
    lVar23 = lVar12 + uVar15;
    if (SCARRY8(lVar12,uVar15)) {
LAB_100484010:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100484014);
      (*pcVar3)();
    }
    if (*(long *)(lVar16 + 0x18) < lVar23) {
      FUN_100468350(lVar23,param_2 & 1);
      uVar18 = uVar22;
      uVar15 = uVar21;
      FUN_10046483c();
      if (((uint)uVar8 & 1) != ((uint)uVar15 & 1)) {
LAB_100483d9c:
        Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100483dac);
        (*pcVar3)();
      }
    }
    else if ((param_2 & 1) == 0) {
      auStack_c0[1] = uVar14;
      FUN_100466c74();
      uVar14 = auStack_c0[1];
    }
    if ((uVar8 & 1) == 0) {
      lVar12 = *param_3;
      lVar23 = lVar12 + (uVar18 >> 6) * 8;
      *(ulong *)(lVar23 + 0x40) = *(ulong *)(lVar23 + 0x40) | 1L << (uVar18 & 0x3f);
      puVar1 = (ulong *)(*(long *)(lVar12 + 0x30) + uVar18 * 0x10);
      *puVar1 = uVar22;
      puVar1[1] = uVar21;
      lVar4 = *(long *)(lVar4 + 0x48);
      FUN_100485260(lVar19,*(long *)(lVar12 + 0x38) + lVar4 * uVar18);
      if (SCARRY8(*(long *)(lVar12 + 0x10),1)) {
LAB_100484014:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100484018);
        (*pcVar3)();
      }
      *(long *)(lVar12 + 0x10) = *(long *)(lVar12 + 0x10) + 1;
      if (uVar13 != 1) {
        lVar23 = param_1 + lVar11 + uVar14;
        uVar18 = 1;
        do {
          if (*(ulong *)(param_1 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10048401c);
            (*pcVar3)();
          }
          FUN_100011090(lVar23,puVar20,&DAT_100fc7d50,&DAT_100c4c718);
          uVar22 = *puVar20;
          uVar21 = puVar20[1];
          FUN_100485260((long)puVar20 + (long)iVar2,lVar19);
          lVar17 = *param_3;
          uVar14 = uVar22;
          uVar8 = uVar21;
          FUN_10046483c();
          lVar16 = *(long *)(lVar17 + 0x10);
          uVar15 = (ulong)~(uint)uVar8 & 1;
          lVar12 = lVar16 + uVar15;
          if (SCARRY8(lVar16,uVar15)) goto LAB_100484010;
          if (*(long *)(lVar17 + 0x18) < lVar12) {
            FUN_100468350(lVar12,1);
            uVar14 = uVar22;
            uVar15 = uVar21;
            FUN_10046483c();
            if (((uint)uVar8 & 1) != ((uint)uVar15 & 1)) goto LAB_100483d9c;
          }
          if ((uVar8 & 1) != 0) goto LAB_100483dc0;
          lVar16 = *param_3;
          lVar12 = lVar16 + (uVar14 >> 6) * 8;
          *(ulong *)(lVar12 + 0x40) = *(ulong *)(lVar12 + 0x40) | 1L << (uVar14 & 0x3f);
          puVar1 = (ulong *)(*(long *)(lVar16 + 0x30) + uVar14 * 0x10);
          *puVar1 = uVar22;
          puVar1[1] = uVar21;
          FUN_100485260(lVar19,*(long *)(lVar16 + 0x38) + lVar4 * uVar14);
          if (SCARRY8(*(long *)(lVar16 + 0x10),1)) goto LAB_100484014;
          uVar18 = uVar18 + 1;
          *(long *)(lVar16 + 0x10) = *(long *)(lVar16 + 0x10) + 1;
          lVar23 = lVar23 + lVar11;
        } while (uVar13 != uVar18);
      }
      _swift_bridgeObjectRelease();
    }
    else {
LAB_100483dc0:
      puVar5 = PTR___type_metadata_for_Swift__MergeError_100eacdf0;
      puVar6 = PTR___type_metadata_for_Swift__MergeError_100eacdf0;
      _swift_allocError(PTR___type_metadata_for_Swift__MergeError_100eacdf0,
                        PTR___protocol_witness_table_for_Swift__MergeError___Swift_Error_in_Swift_100eacdf8
                        ,0,0);
      _swift_willThrow();
      local_58 = puVar6;
      _swift_errorRetain(puVar6);
      pcVar7 = &DAT_100fc84b0;
      FUN_1000037f0(&DAT_100fc84b0,&DAT_100c4cfe8);
      _Var9.unknown = (undefined *)&local_58;
      pcVar10 = pcVar7;
      _swift_dynamicCast();
      if (((ulong)pcVar7 & 1) != 0) {
        local_70.unknown = (undefined *)0x0;
        _Stack_68 = 0xe000000000000000;
        Swift::_StringGuts::grow(0x1e,_Var9);
        SVar24.bridgeObject = (void *)0x8000000100da6c70;
        SVar24.str = (char *)0xd00000000000001b;
        SVar27.bridgeObject = puVar5;
        SVar27.str = pcVar10;
        Swift::String::append(SVar24,SVar27);
        pcVar7 = PTR___type_metadata_for_Swift_String_100eac208;
        puVar5 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
        local_80 = uVar22;
        uStack_78 = uVar21;
        Swift::__print_unlocked
                  (&local_80,&local_70,PTR___type_metadata_for_Swift_String_100eac208,
                   PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
                   PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
                  );
        SVar25.bridgeObject = (void *)0xe100000000000000;
        SVar25.str = (char *)0x27;
        SVar28.bridgeObject = puVar5;
        SVar28.str = pcVar7;
        Swift::String::append(SVar25,SVar28);
        line = _Stack_68;
        file.unknown = local_70.unknown;
        *(undefined4 *)(puVar20 + -1) = 0;
        puVar20[-2] = 0x3c44;
        SVar26.bridgeObject = (void *)0x2;
        SVar26.str = (char *)0xb;
        Swift::_assertionFailure((StaticString)0x100d8deb0,SVar26,file,line,0xda6c60);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1004840c8);
        (*pcVar3)();
      }
      FUN_100484908(lVar19);
      _swift_bridgeObjectRelease(param_1);
      _swift_bridgeObjectRelease(uVar21);
      _swift_errorRelease(local_58);
    }
  }
  return;
}



/* Address: 0x1004840c8 | FUN_1004840c8 */

bool FUN_1004840c8(undefined8 *param_1,long *param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  Date DVar4;
  
  if (((undefined *)*param_1 == (undefined *)*param_2 &&
       (undefined *)param_1[1] == (undefined *)param_2[1]) ||
     (bVar1 = Swift::_stringCompareWithSmolCheck
                        ((undefined *)*param_1,(undefined *)param_1[1],
                         (_StringComparisonResult)(__int8)(undefined *)*param_2), bVar1)) {
    DVar4.unknown = (undefined *)param_2[2];
    if (((undefined *)param_1[2] == DVar4.unknown &&
         (undefined *)param_1[3] == (undefined *)param_2[3]) ||
       (bVar1 = Swift::_stringCompareWithSmolCheck
                          ((undefined *)param_1[2],(undefined *)param_1[3],
                           (_StringComparisonResult)(__int8)DVar4.unknown), bVar1)) {
      uVar2 = param_1[4];
      FUN_1004827e8(uVar2,param_2[4]);
      if ((uVar2 & 1) != 0) {
        lVar3 = 0;
        FUN_100484870();
        bVar1 = Foundation::Date::___infix
                          ((undefined *)((long)param_1 + (long)*(int *)(lVar3 + 0x1c)),
                           (undefined *)((long)param_2 + (long)*(int *)(lVar3 + 0x1c)),DVar4);
        return bVar1;
      }
    }
  }
  return false;
}



/* Address: 0x100484160 | FUN_100484160 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100484418) */

void FUN_100484160(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  code *pcVar4;
  DateDecodingStrategy DVar5;
  undefined *puVar6;
  undefined7 extraout_var;
  URL UVar7;
  NSString *pNVar8;
  ID IVar9;
  JSONDecoder *pJVar10;
  Data DVar11;
  Data DVar12;
  _DictionaryStorage *this;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar13;
  undefined8 extraout_x12;
  long extraout_x13;
  undefined *puVar14;
  NSDataReadingOptions contentsOf;
  long lVar15;
  undefined *puVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  String SVar21;
  long local_200 [2];
  JSONDecoder *local_1f0;
  undefined *local_1e8;
  long local_1e0;
  undefined8 local_1d8;
  undefined *local_1d0;
  long local_1c8;
  undefined *local_1c0;
  undefined *local_138;
  
  puVar6 = &DAT_100fc7d50;
  FUN_1000037f0(&DAT_100fc7d50,&DAT_100c4c718);
  local_1c8 = *(long *)(puVar6 + -8);
  local_1c0 = puVar6;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_1c8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  puVar18 = (undefined8 *)((long)local_200 + -extraout_x8);
  DVar5 = Foundation::JSONDecoder::DateDecodingStrategy::typeMetadataAccessor();
  lVar17 = *(long *)(CONCAT71(extraout_var,DVar5.value) + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar17 + 0x40));
  lVar19 = (long)puVar18 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_100fc7ce0;
  FUN_1000037f0(&DAT_100fc7ce0,&DAT_100c4d030);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = lVar19 - extraout_x8_01;
  UVar7 = Foundation::URL::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(UVar7.unknown + -8) + 0x40));
  contentsOf.unknown = (undefined *)(lVar15 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  FUN_100011090(param_1,lVar15,&DAT_100fc7ce0);
  lVar20 = lVar15;
  (**(code **)(extraout_x13 + 0x30))(lVar15,1,extraout_x12);
  if ((int)lVar20 == 1) {
    FUN_100005808(lVar15,&DAT_100fc7ce0,&DAT_100c4d030);
  }
  else {
    local_1d0 = (undefined *)CONCAT71(extraout_var,DVar5.value);
    (**(code **)(extraout_x13 + 0x20))(contentsOf.unknown,lVar15,extraout_x12);
    UVar7.unknown = (undefined *)objc_stub::defaultManager(&_OBJC_CLASS___NSFileManager);
    SVar21 = Foundation::URL::get_path(UVar7);
    pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar21.bridgeObject);
    IVar9 = objc_stub::fileExistsAtPath_((ID)UVar7.unknown,pNVar8);
    if ((int)IVar9 != 0) {
      local_1e0 = extraout_x13;
      local_1d8 = extraout_x12;
      pJVar10 = Foundation::JSONDecoder::typeMetadataAccessor();
      _swift_allocObject(pJVar10,*(undefined4 *)(pJVar10 + 0x30),*(undefined2 *)(pJVar10 + 0x34));
      pJVar10 = Foundation::JSONDecoder::init(pJVar10);
      (**(code **)(lVar17 + 0x68))
                (lVar19,*(undefined4 *)
                         PTR___enum_case_for_Foundation_JSONDecoder_DateDecodingStrategy_iso8601_Foundation_JSONDecoder_DateDecodingStrategy_Type___>_Foundation_JSONDecoder_DateDecodingStrategy_100ea6a38
                );
      Foundation::JSONDecoder::set_dateDecodingStrategy
                (pJVar10,(DateDecodingStrategy)(__int8)lVar19);
      lVar17 = 0;
      lVar15 = 0;
      DVar11 = Foundation::Data::_init(contentsOf);
      DVar12.unknown = &DAT_100fc9120;
      local_1e8 = contentsOf.unknown;
      FUN_1000037f0(&DAT_100fc9120,&DAT_100c4dbd8);
      FUN_100485184(&DAT_100fc9138,&DAT_100fc9140,&TargetProtocolConformanceDescriptor_100c4d9e0,
                    PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100eac538);
      Foundation::JSONDecoder::_decode(pJVar10,DVar12);
      puVar6 = local_138;
      lVar20 = *(long *)(local_138 + 0x10);
      local_1d0 = DVar11.unknown;
      if (lVar20 == 0) {
        _swift_bridgeObjectRelease();
        puVar16 = PTR___swiftEmptyArrayStorage_100eae0d8;
      }
      else {
        local_200[1] = 0;
        local_138 = PTR___swiftEmptyArrayStorage_100eae0d8;
        local_200[0] = lVar17;
        local_1f0 = pJVar10;
        FUN_10046ad74(0,lVar20,0);
        puVar16 = local_138;
        lVar15 = 0;
        FUN_100484870();
        uVar13 = (ulong)*(byte *)(*(long *)(lVar15 + -8) + 0x50);
        puVar14 = puVar6 + (uVar13 + 0x20 & (uVar13 ^ 0xffffffffffffffff));
        lVar15 = *(long *)(*(long *)(lVar15 + -8) + 0x48);
        do {
          puVar1 = (undefined8 *)((long)puVar18 + (long)*(int *)(local_1c0 + 0x30));
          FUN_1004848c4(puVar14,puVar1);
          uVar2 = puVar1[1];
          *puVar18 = *puVar1;
          *(undefined8 *)((long)local_200 + -extraout_x8 + 8) = uVar2;
          uVar13 = *(ulong *)(puVar16 + 0x10);
          uVar3 = *(ulong *)(puVar16 + 0x18);
          local_138 = puVar16;
          _swift_bridgeObjectRetain();
          if (uVar3 >> 1 <= uVar13) {
            FUN_10046ad74(1 < uVar3,uVar13 + 1,1);
            puVar16 = local_138;
          }
          *(ulong *)(puVar16 + 0x10) = uVar13 + 1;
          FUN_100485210(puVar18,puVar16 + *(long *)(local_1c8 + 0x48) * uVar13 +
                                          ((ulong)*(byte *)(local_1c8 + 0x50) + 0x20 &
                                          ((ulong)*(byte *)(local_1c8 + 0x50) ^ 0xffffffffffffffff))
                       );
          puVar14 = puVar14 + lVar15;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        _swift_bridgeObjectRelease(puVar6);
        lVar15 = local_200[1];
        contentsOf.unknown = local_1e8;
        lVar17 = local_200[0];
        pJVar10 = local_1f0;
      }
      puVar14 = *(undefined **)(puVar16 + 0x10);
      puVar6 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
      if (puVar14 != (undefined *)0x0) {
        this = (_DictionaryStorage *)&DAT_100fc7d58;
        FUN_1000037f0(&DAT_100fc7d58,&DAT_100c4c720);
        Swift::_DictionaryStorage::_allocate(this,(__int64)puVar14);
        puVar6 = puVar14;
      }
      local_138 = puVar6;
      _swift_bridgeObjectRetain(puVar16);
      FUN_100483c34();
      if (lVar15 == 0) {
        (**(code **)(local_1e0 + 8))(contentsOf.unknown,local_1d8);
        _swift_bridgeObjectRelease(puVar16);
        FUN_10003bf2c(local_1d0,lVar17);
        _swift_release(pJVar10);
        return;
      }
      _swift_unexpectedError(lVar15,"Swift/arm64e-apple-macos.swiftinterface",0x27,1,0x1cbd);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100484870);
      (*pcVar4)();
    }
    (**(code **)(extraout_x13 + 8))(contentsOf.unknown,extraout_x12);
  }
  FUN_10045a814(PTR___swiftEmptyArrayStorage_100eae0d8);
  return;
}



/* Address: 0x100484870 | FUN_100484870 */

void FUN_100484870(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100fc8fc8,&TargetStructDescriptor_100cb1598);
  return;
}



/* Address: 0x100484884 | FUN_100484884 */

void FUN_100484884(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc8f60 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4db84;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4db84,&DAT_100ed73e0);
  DAT_100fc8f60 = pTVar1;
  return;
}



/* Address: 0x1004848c4 | FUN_1004848c4 */

undefined8 FUN_1004848c4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100484870();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x100484908 | FUN_100484908 */

undefined8 FUN_100484908(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100484870();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Address: 0x100484944 | FUN_100484944 */

long * FUN_100484944(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  Date DVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    lVar4 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar4;
    param_1[2] = param_2[2];
    lVar6 = param_2[4];
    lVar8 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = lVar8;
    iVar2 = *(int *)(param_3 + 0x1c);
    DVar3 = Foundation::Date::typeMetadataAccessor();
    pcVar7 = *(code **)(*(long *)(DVar3.unknown + -8) + 0x10);
    _swift_bridgeObjectRetain(lVar4);
    _swift_bridgeObjectRetain(lVar8);
    _swift_bridgeObjectRetain(lVar6);
    (*pcVar7)((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,DVar3.unknown);
  }
  else {
    lVar4 = *param_2;
    *param_1 = lVar4;
    uVar5 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar4 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x100484a18 | FUN_100484a18 */

void FUN_100484a18(long param_1,long param_2)

{
  int iVar1;
  Date DVar2;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x20));
  iVar1 = *(int *)(param_2 + 0x1c);
  DVar2 = Foundation::Date::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x000100484a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(DVar2.unknown + -8) + 8))(param_1 + iVar1,DVar2.unknown);
  return;
}



/* Address: 0x100484a6c | FUN_100484a6c */

undefined8 * FUN_100484a6c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  int iVar2;
  Date DVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  uVar4 = param_2[4];
  uVar6 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar6;
  iVar2 = *(int *)(param_3 + 0x1c);
  DVar3 = Foundation::Date::typeMetadataAccessor();
  pcVar5 = *(code **)(*(long *)(DVar3.unknown + -8) + 0x10);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar4);
  (*pcVar5)((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,DVar3.unknown);
  return param_1;
}



/* Address: 0x100484b14 | FUN_100484b14 */

undefined8 * FUN_100484b14(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  Date DVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar3 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  param_1[2] = param_2[2];
  uVar3 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  uVar3 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  iVar1 = *(int *)(param_3 + 0x1c);
  DVar2 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar2.unknown + -8) + 0x18))
            ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,DVar2.unknown);
  return param_1;
}



/* Address: 0x100484bc0 | FUN_100484bc0 */

undefined8 * FUN_100484bc0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  Date DVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = *param_2;
  uVar5 = param_2[3];
  uVar4 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  param_1[4] = param_2[4];
  iVar1 = *(int *)(param_3 + 0x1c);
  DVar2 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar2.unknown + -8) + 0x20))
            ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,DVar2.unknown);
  return param_1;
}



/* Address: 0x100484c20 | FUN_100484c20 */

undefined8 * FUN_100484c20(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  Date DVar4;
  
  uVar3 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  _swift_bridgeObjectRelease(uVar2);
  uVar3 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  _swift_bridgeObjectRelease(uVar2);
  uVar3 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRelease(uVar3);
  iVar1 = *(int *)(param_3 + 0x1c);
  DVar4 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar4.unknown + -8) + 0x28))
            ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,DVar4.unknown);
  return param_1;
}



/* Address: 0x100484ca4 | FUN_100484ca4 */

void FUN_100484ca4(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x100484cb0 | FUN_100484cb0 */

ulong FUN_100484cb0(long param_1,undefined8 param_2,long param_3)

{
  Date DVar1;
  ulong uVar2;
  
  if ((int)param_2 == 0x7fffffff) {
    uVar2 = *(ulong *)(param_1 + 8);
    if (0xfffffffe < uVar2) {
      uVar2 = 0xffffffff;
    }
    return (ulong)((int)uVar2 + 1);
  }
  DVar1 = Foundation::Date::typeMetadataAccessor();
  uVar2 = param_1 + *(int *)(param_3 + 0x1c);
                    /* WARNING: Could not recover jumptable at 0x000100484d28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(DVar1.unknown + -8) + 0x30))(uVar2,param_2,DVar1.unknown);
  return uVar2;
}



/* Address: 0x100484d2c | FUN_100484d2c */

void FUN_100484d2c(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x100484d38 | FUN_100484d38 */

void FUN_100484d38(long param_1,undefined8 param_2,int param_3,long param_4)

{
  Date DVar1;
  
  if (param_3 == 0x7fffffff) {
    *(ulong *)(param_1 + 8) = (ulong)((int)param_2 - 1);
    return;
  }
  DVar1 = Foundation::Date::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x000100484da8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(DVar1.unknown + -8) + 0x38))
            (param_1 + *(int *)(param_4 + 0x1c),param_2,param_2,DVar1.unknown);
  return;
}



/* Address: 0x100484dac | FUN_100484dac */

undefined1  [16] FUN_100484dac(long param_1,ulong param_2)

{
  Date DVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined *local_40;
  undefined *puStack_38;
  undefined *local_30;
  long local_28;
  
  local_40 = &DAT_100c4da78;
  puStack_38 = &DAT_100c4da78;
  local_30 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40;
  DVar1 = Foundation::Date::typeMetadataAccessor();
  if (param_2 < 0x40) {
    local_28 = *(long *)(DVar1.unknown + -8) + 0x40;
    _swift_initStructMetadata(param_1,0x100,4,&local_40,param_1 + 0x10);
    DVar1.unknown = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    uVar2 = 0x3f;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = DVar1.unknown;
  return auVar3;
}



/* Address: 0x100484e30 | FUN_100484e30 */

void FUN_100484e30(void)

{
  FUN_100484e38(0);
  return;
}



/* Address: 0x100484e38 | FUN_100484e38 */

void FUN_100484e38(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100fc9030,&TargetClassDescriptor_100cb15c0);
  return;
}



/* Address: 0x100484e4c | FUN_100484e4c */

void FUN_100484e4c(long param_1,ulong param_2)

{
  long lVar1;
  undefined *local_48;
  undefined *puStack_40;
  long local_38;
  undefined *puStack_30;
  undefined *local_28;
  
  puStack_40 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40;
  local_48 = &DAT_100c4daa8;
  lVar1 = 0x13f;
  FUN_100484ee0();
  if (param_2 < 0x40) {
    local_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
    local_28 = puStack_30;
    _swift_updateClassMetadata2(param_1,0x100,5,&local_48,param_1 + 0x50);
  }
  return;
}



/* Address: 0x100484ee0 | FUN_100484ee0 */

void FUN_100484ee0(void)

{
  Optional OVar1;
  URL UVar2;
  undefined7 extraout_var;
  
  if (DAT_100fc9040 == 0) {
    UVar2 = Foundation::URL::typeMetadataAccessor();
    OVar1 = Swift::Optional::typeMetadataAccessor();
    if (UVar2.unknown == (undefined *)0x0) {
      DAT_100fc9040 = CONCAT71(extraout_var,OVar1.value);
    }
  }
  return;
}



/* Address: 0x100484f34 | FUN_100484f34 */

undefined1  [16] FUN_100484f34(void)

{
  return ZEXT816(0x100ed73e0);
}



/* Address: 0x100484f44 | thunk_FUN_100484f48 */

void thunk_FUN_100484f48(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc9108 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4db5c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4db5c,&DAT_100ed73e0);
  DAT_100fc9108 = pTVar1;
  return;
}



/* Address: 0x100484f48 | FUN_100484f48 */

void FUN_100484f48(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc9108 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4db5c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4db5c,&DAT_100ed73e0);
  DAT_100fc9108 = pTVar1;
  return;
}



/* Address: 0x100484f88 | thunk_FUN_100484f8c */

void thunk_FUN_100484f8c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc9110 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4daf4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4daf4,&DAT_100ed73e0);
  DAT_100fc9110 = pTVar1;
  return;
}



/* Address: 0x100484f8c | FUN_100484f8c */

void FUN_100484f8c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc9110 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4daf4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4daf4,&DAT_100ed73e0);
  DAT_100fc9110 = pTVar1;
  return;
}



/* Address: 0x100484fcc | thunk_FUN_100484fd0 */

void thunk_FUN_100484fd0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc9118 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4dacc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4dacc,&DAT_100ed73e0);
  DAT_100fc9118 = pTVar1;
  return;
}



/* Address: 0x100484fd0 | FUN_100484fd0 */

void FUN_100484fd0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc9118 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4dacc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4dacc,&DAT_100ed73e0);
  DAT_100fc9118 = pTVar1;
  return;
}



/* Address: 0x100485010 | FUN_100485010 */

undefined4 FUN_100485010(long param_1,undefined1 *param_2)

{
  bool bVar1;
  _StringComparisonResult expecting;
  
  if (param_1 != 0x4449746e65696c63 || param_2 != &DAT_e800000000000000) {
    expecting.value = (__int8)param_1;
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x4449746e65696c63,(_StringGuts)0xe800000000000000,expecting);
    if (!bVar1) {
      if (((param_1 == 0x614e746e65696c63) && (param_2 == (undefined1 *)0xea0000000000656d)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x614e746e65696c63,(_StringGuts)0xea0000000000656d,
                             expecting), bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 1;
      }
      if (((param_1 != 0x7463657269646572) || (param_2 != (undefined1 *)0xec00000073495255)) &&
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x7463657269646572,(_StringGuts)0xec00000073495255,
                             expecting), !bVar1)) {
        if ((param_1 == 0x4164657461657263) && (param_2 == (undefined1 *)0xe900000000000074)) {
          _swift_bridgeObjectRelease(0xe900000000000074);
          return 3;
        }
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x4164657461657263,(_StringGuts)0xe900000000000074,expecting
                          );
        _swift_bridgeObjectRelease(param_2);
        if (bVar1) {
          return 3;
        }
        return 4;
      }
      _swift_bridgeObjectRelease(param_2);
      return 2;
    }
  }
  _swift_bridgeObjectRelease(param_2);
  return 0;
}



/* Address: 0x100485184 | FUN_100485184 */

void FUN_100485184(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 local_48;
  
  if (*param_1 == 0) {
    puVar1 = &DAT_100fc9120;
    FUN_100005c24(&DAT_100fc9120,&DAT_100c4dbd8);
    FUN_100003a00(param_2,FUN_100484870,param_3);
    local_48 = param_2;
    _swift_getWitnessTable(param_4,puVar1,&local_48);
    *param_1 = param_4;
  }
  return;
}



/* Address: 0x100485210 | FUN_100485210 */

undefined8 FUN_100485210(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fc7d50;
  FUN_1000037f0(&DAT_100fc7d50,&DAT_100c4c718);
  (**(code **)(*(long *)(puVar1 + -8) + 0x20))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100485260 | FUN_100485260 */

undefined8 FUN_100485260(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100484870();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x1004852a4 | FUN_1004852a4 */

void FUN_1004852a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long extraout_x8;
  long unaff_x21;
  long lVar4;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar1 = &DAT_100fc9270;
  local_70 = param_4;
  FUN_1000037f0(&DAT_100fc9270,&DAT_100c4dcf0);
  lVar4 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100486bec();
  Swift::Encoder::_container();
  local_51 = 0;
  Swift::KeyedEncodingContainer::_encode(param_2,param_3,&local_51,puVar1);
  if (unaff_x21 == 0) {
    local_68 = local_70;
    local_52 = 1;
    puVar2 = &DAT_100fc7eb8;
    FUN_1000037f0(&DAT_100fc7eb8,&DAT_100c4c8c0);
    puVar3 = &DAT_100fc7ec0;
    FUN_10045e1bc(&DAT_100fc7ec0,
                  PTR___protocol_witness_table_for_Swift_String___Swift_Encodable_in_Swift_100eac210
                  ,PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100eac510);
    Swift::KeyedEncodingContainer::_encode(&local_68,&local_52,puVar1,puVar2,puVar3);
  }
  (**(code **)(lVar4 + 8))((long)&local_70 - extraout_x8,puVar1);
  return;
}



/* Address: 0x100485414 | FUN_100485414 */

undefined1  [16]
FUN_100485414(ulong param_1,undefined8 param_2,undefined **param_3,Union_Impl_FuncImpl *param_4,
             Union_Impl_FuncImpl *param_5)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  Union_Impl_FuncImpl *pUVar4;
  Union_Impl_FuncImpl *pUVar5;
  Union_Impl_FuncImpl *pUVar6;
  Union_Impl_FuncImpl *pUVar7;
  char *pcVar8;
  long extraout_x8;
  Hasher HVar9;
  Union_Impl_FuncImpl *unaff_x19;
  Union_Impl_FuncImpl *unaff_x20;
  Union_Impl_FuncImpl *pUVar10;
  Union_Impl_FuncImpl *unaff_x21;
  Union_Impl_FuncImpl *unaff_x22;
  Union_Impl_FuncImpl *unaff_x23;
  Union_Impl_FuncImpl *unaff_x24;
  Union_Impl_FuncImpl *unaff_x25;
  long unaff_x26;
  long unaff_x27;
  undefined8 *unaff_x29;
  undefined8 *puVar11;
  undefined8 unaff_x30;
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
  String SVar22;
  undefined8 *in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined1 auStack_10 [16];
  
  pUVar6 = (Union_Impl_FuncImpl *)&DAT_e600000000000000;
  pUVar4 = (Union_Impl_FuncImpl *)0x726575737369;
  pcVar8 = (char *)(param_1 & 0xff);
  pUVar5 = pUVar4;
  pUVar7 = pUVar6;
  pUVar10 = unaff_x20;
  puVar11 = unaff_x29;
  switch(pcVar8) {
  default:
    pcVar8 = 
    "<li>View and manage your clipboard items</li>\n                <li>View and manage your pinboards</li>\n            </ul>\n        </div>\n        <p class=\"note\">You can revoke this connection later in Paste Settings.</p>\n        <form method=\"POST\" action=\"/authorize\">\n            <input type=\"hidden\" name=\"csrf_token\" value=\""
    ;
  case (char *)0x6c:
  case (char *)0x7a:
  case (char *)0x94:
  case (char *)0xa2:
  case (char *)0xbc:
  case (char *)0xca:
  case (char *)0xe4:
  case (char *)0xf2:
    pcVar8 = pcVar8 + 0x450;
switchD_100485440_caseD_6a:
    pUVar6 = (Union_Impl_FuncImpl *)((ulong)pcVar8 | 0x8000000000000000);
    pcVar8 = (char *)0xd000000000000015;
switchD_100485440_caseD_62:
    pUVar4 = (Union_Impl_FuncImpl *)(pcVar8 + 1);
switchD_100485440_caseD_f9:
    auVar12._8_8_ = pUVar6;
    auVar12._0_8_ = pUVar4;
    return auVar12;
  case (char *)0x2:
    pUVar6 = (Union_Impl_FuncImpl *)0xee00746e696f7064;
    pUVar4 = (Union_Impl_FuncImpl *)0x6e655f6e656b6f74;
  case (char *)0xec:
    auVar15._8_8_ = pUVar6;
    auVar15._0_8_ = pUVar4;
    return auVar15;
  case (char *)0x3:
    pUVar4 = (Union_Impl_FuncImpl *)0xd000000000000015;
    pcVar8 = "registration_endpoint";
  case (char *)0x61:
switchD_100485440_caseD_61:
    auVar18._8_8_ = (ulong)(pcVar8 + -0x20) | 0x8000000000000000;
    auVar18._0_8_ = pUVar4;
    return auVar18;
  case (char *)0x4:
  case (char *)0xf8:
    pcVar8 = 
    "<li>View and manage your clipboard items</li>\n                <li>View and manage your pinboards</li>\n            </ul>\n        </div>\n        <p class=\"note\">You can revoke this connection later in Paste Settings.</p>\n        <form method=\"POST\" action=\"/authorize\">\n            <input type=\"hidden\" name=\"csrf_token\" value=\""
    ;
  case (char *)0x14:
    pcVar8 = pcVar8 + 0x4c0;
switchD_100485440_caseD_12:
    auVar13._8_8_ = (ulong)(pcVar8 + -0x20) | 0x8000000000000000;
    auVar13._0_8_ = 0xd000000000000013;
    return auVar13;
  case (char *)0x5:
    pcVar8 = "response_types_supported";
  case (char *)0x60:
    pUVar6 = (Union_Impl_FuncImpl *)((ulong)(pcVar8 + -0x20) | 0x8000000000000000);
    pcVar8 = (char *)0xd000000000000015;
switchD_100485440_caseD_74:
    auVar17._8_8_ = pUVar6;
    auVar17._0_8_ = pcVar8 + 3;
    return auVar17;
  case (char *)0x6:
    pUVar4 = (Union_Impl_FuncImpl *)0xd000000000000015;
    pcVar8 = 
    "<li>View and manage your clipboard items</li>\n                <li>View and manage your pinboards</li>\n            </ul>\n        </div>\n        <p class=\"note\">You can revoke this connection later in Paste Settings.</p>\n        <form method=\"POST\" action=\"/authorize\">\n            <input type=\"hidden\" name=\"csrf_token\" value=\""
    ;
  case (char *)0x89:
  case (char *)0xb1:
  case (char *)0xd9:
    pcVar8 = pcVar8 + 0x500;
    goto switchD_100485440_caseD_61;
  case (char *)0x7:
    pcVar8 = "code_challenge_methods_supported";
  case (char *)0x5e:
  case (char *)0x72:
  case (char *)0x86:
  case (char *)0x9a:
  case (char *)0xae:
  case (char *)0xc2:
  case (char *)0xd6:
  case (char *)0xea:
    auVar16._8_8_ = (ulong)(pcVar8 + -0x20) | 0x8000000000000000;
    auVar16._0_8_ = 0xd000000000000020;
    return auVar16;
  case (char *)0x8:
    pUVar6 = (Union_Impl_FuncImpl *)0x8000000100da8530;
  case (char *)0x40:
    pcVar8 = (char *)0xd000000000000015;
switchD_100485440_caseD_82:
    auVar19._8_8_ = pUVar6;
    auVar19._0_8_ = pcVar8 + 0x10;
    return auVar19;
  case (char *)0x9:
    pUVar6 = (Union_Impl_FuncImpl *)0x8000000100da8560;
    pUVar4 = (Union_Impl_FuncImpl *)0xd00000000000002a;
  case (char *)0x0:
    auVar14._8_8_ = pUVar6;
    auVar14._0_8_ = pUVar4;
    return auVar14;
  case (char *)0x10:
    goto switchD_100485440_caseD_10;
  case (char *)0x11:
    goto switchD_100485440_caseD_11;
  case (char *)0x12:
    goto switchD_100485440_caseD_12;
  case (char *)0x20:
    goto switchD_100485440_caseD_20;
  case (char *)0x21:
  case (char *)0x2e:
  case (char *)0x45:
  case (char *)0x4f:
  case (char *)0x52:
    goto switchD_100485440_caseD_21;
  case (char *)0x22:
  case (char *)0x2c:
  case (char *)0x44:
  case (char *)0x4b:
    goto switchD_100485440_caseD_22;
  case (char *)0x23:
  case (char *)0x26:
  case (char *)0x33:
  case (char *)0x37:
  case (char *)0x42:
  case (char *)0x49:
  case (char *)0x55:
  case (char *)0x59:
    goto switchD_100485440_caseD_23;
  case (char *)0x24:
  case (char *)0x27:
  case (char *)0x2a:
  case (char *)0x30:
  case (char *)0x32:
  case (char *)0x4e:
  case (char *)0x51:
  case (char *)0x54:
    goto switchD_100485440_caseD_24;
  case (char *)0x25:
  case (char *)0x2f:
    goto switchD_100485440_caseD_25;
  case (char *)0x28:
  case (char *)0x35:
  case (char *)0x57:
    goto switchD_100485440_caseD_28;
  case (char *)0x29:
    goto switchD_100485440_caseD_29;
  case (char *)0x2b:
    goto switchD_100485440_caseD_2b;
  case (char *)0x2d:
  case (char *)0x41:
    goto switchD_100485440_caseD_2d;
  case (char *)0x31:
  case (char *)0x53:
    goto switchD_100485440_caseD_31;
  case (char *)0x34:
  case (char *)0x36:
  case (char *)0x38:
  case (char *)0x48:
  case (char *)0x56:
  case (char *)0x58:
  case (char *)0x5a:
    goto switchD_100485440_caseD_34;
  case (char *)0x43:
    goto switchD_100485440_caseD_43;
  case (char *)0x46:
  case (char *)0x4a:
    goto switchD_100485440_caseD_46;
  case (char *)0x47:
    goto switchD_100485440_caseD_47;
  case (char *)0x4c:
    goto switchD_100485440_caseD_4c;
  case (char *)0x4d:
    goto switchD_100485440_caseD_4d;
  case (char *)0x50:
    goto switchD_100485440_caseD_50;
  case (char *)0x5c:
    goto switchD_100485440_caseD_5c;
  case (char *)0x5d:
  case (char *)0x71:
  case (char *)0x85:
  case (char *)0x99:
  case (char *)0xad:
  case (char *)0xc1:
  case (char *)0xd5:
  case (char *)0xe9:
    goto switchD_100485440_caseD_5d;
  case (char *)0x62:
  case (char *)0x81:
  case (char *)0x8a:
  case (char *)0xa9:
  case (char *)0xb2:
  case (char *)0xd1:
  case (char *)0xda:
    goto switchD_100485440_caseD_62;
  case (char *)0x6a:
  case (char *)0x92:
  case (char *)0xba:
  case (char *)0xe2:
    goto switchD_100485440_caseD_6a;
  case (char *)0x70:
    goto switchD_100485440_caseD_70;
  case (char *)0x74:
    goto switchD_100485440_caseD_74;
  case (char *)0x75:
  case (char *)0xed:
    goto switchD_100485440_caseD_75;
  case (char *)0x76:
  case (char *)0x9e:
  case (char *)0xc6:
  case (char *)0xee:
    goto switchD_100485440_caseD_76;
  case (char *)0x77:
  case (char *)0x9f:
  case (char *)0xc7:
  case (char *)0xef:
    Swift::Hasher::init(0);
    HVar9.unknown = (undefined1 *)0x8000000100da8590;
    pcVar8 = (char *)0xd000000000000015;
    if ((int)unaff_x19 != 1) {
      HVar9.unknown = &DAT_e800000000000000;
      pcVar8 = (char *)0x656372756f736572;
    }
    SVar22.bridgeObject = HVar9.unknown;
    SVar22.str = pcVar8;
    Swift::String::hash((Hasher)&stack0x00000008,SVar22);
    _swift_bridgeObjectRelease();
    auVar21._0_8_ = Swift::Hasher::_finalize(HVar9);
    auVar21._8_8_ = pcVar8;
    return auVar21;
  case (char *)0x82:
  case (char *)0xaa:
  case (char *)0xd2:
  case (char *)0xfa:
    goto switchD_100485440_caseD_82;
  case (char *)0x84:
    goto switchD_100485440_caseD_84;
  case (char *)0x88:
    goto switchD_100485440_caseD_88;
  case (char *)0x98:
    goto switchD_100485440_caseD_98;
  case (char *)0x9c:
    goto switchD_100485440_caseD_9c;
  case (char *)0x9d:
  case (char *)0xc5:
    goto switchD_100485440_caseD_9d;
  case (char *)0xa8:
    goto switchD_100485440_caseD_a8;
  case (char *)0xac:
    goto switchD_100485440_caseD_ac;
  case (char *)0xb0:
    goto switchD_100485440_caseD_b0;
  case (char *)0xc0:
    goto switchD_100485440_caseD_c0;
  case (char *)0xc4:
    goto switchD_100485440_caseD_c4;
  case (char *)0xd0:
    goto switchD_100485440_caseD_d0;
  case (char *)0xd4:
    goto switchD_100485440_caseD_d4;
  case (char *)0xd8:
    goto switchD_100485440_caseD_d8;
  case (char *)0xe8:
    break;
  case (char *)0xf9:
    goto switchD_100485440_caseD_f9;
  }
  puVar11 = &stack0x00000040;
  register0x00000008 = (BADSPACEBASE *)auStack_10;
  unaff_x24 = unaff_x21;
  in_stack_00000040 = unaff_x29;
  in_stack_00000048 = unaff_x30;
switchD_100485440_caseD_31:
  pUVar5 = (Union_Impl_FuncImpl *)0x100fc9000;
  pUVar10 = pUVar4;
  unaff_x23 = unaff_x20;
switchD_100485440_caseD_20:
  pUVar4 = pUVar5 + 0x98;
  pUVar6 = (Union_Impl_FuncImpl *)&UNK_100c4d000;
switchD_100485440_caseD_29:
  pUVar6 = pUVar6 + 0x338;
switchD_100485440_caseD_4d:
  FUN_1000037f0(pUVar4,pUVar6);
  unaff_x19 = pUVar4;
switchD_100485440_caseD_d4:
  unaff_x27 = *(long *)(pUVar4 + -2);
  pcVar8 = (char *)(*(long *)(unaff_x27 + 0x40) + 0xf);
  unaff_x20 = pUVar10;
switchD_100485440_caseD_a8:
  pUVar4 = unaff_x20;
  (*(code *)PTR____chkstk_darwin_100ea82c0)((ulong)pcVar8 & 0xfffffffffffffff0);
  unaff_x22 = (Union_Impl_FuncImpl *)((long)register0x00000008 + -extraout_x8);
  unaff_x25 = *(Union_Impl_FuncImpl **)(pUVar4 + 6);
switchD_100485440_caseD_34:
  FUN_100004640(pUVar4,unaff_x25);
switchD_100485440_caseD_25:
switchD_100485440_caseD_28:
  FUN_100486bac();
switchD_100485440_caseD_24:
switchD_100485440_caseD_43:
switchD_100485440_caseD_46:
  Swift::Encoder::_container();
  pUVar4 = *(Union_Impl_FuncImpl **)unaff_x23;
  pUVar6 = *(Union_Impl_FuncImpl **)(unaff_x23 + 2);
switchD_100485440_caseD_4c:
  *(undefined1 *)(puVar11 + -9) = 0;
switchD_100485440_caseD_22:
  param_4 = unaff_x19;
  param_3 = (undefined **)(puVar11 + -9);
  unaff_x19 = param_4;
switchD_100485440_caseD_c0:
switchD_100485440_caseD_21:
  unaff_x21 = unaff_x24;
switchD_100485440_caseD_2b:
  Swift::KeyedEncodingContainer::_encode(pUVar4,pUVar6,param_3,param_4);
switchD_100485440_caseD_23:
  bVar1 = unaff_x21 == (Union_Impl_FuncImpl *)0x0;
  unaff_x21 = (Union_Impl_FuncImpl *)0x0;
  pUVar7 = unaff_x19;
  pUVar5 = unaff_x22;
  if (bVar1) {
switchD_100485440_caseD_2d:
    pUVar4 = *(Union_Impl_FuncImpl **)(unaff_x23 + 4);
    pUVar6 = *(Union_Impl_FuncImpl **)(unaff_x23 + 6);
switchD_100485440_caseD_50:
    param_4 = unaff_x19;
    *(undefined1 *)(puVar11 + -9) = 1;
    param_3 = (undefined **)(puVar11 + -9);
    unaff_x19 = param_4;
switchD_100485440_caseD_47:
    pUVar5 = unaff_x22;
    pUVar7 = unaff_x19;
    Swift::KeyedEncodingContainer::_encode(pUVar4,pUVar6,param_3,param_4);
    bVar1 = unaff_x21 == (Union_Impl_FuncImpl *)0x0;
    unaff_x21 = (Union_Impl_FuncImpl *)0x0;
    unaff_x19 = pUVar7;
    unaff_x22 = pUVar5;
    if (bVar1) {
switchD_100485440_caseD_ac:
      pUVar4 = *(Union_Impl_FuncImpl **)(unaff_x23 + 8);
      pUVar6 = *(Union_Impl_FuncImpl **)(unaff_x23 + 10);
switchD_100485440_caseD_9d:
      *(undefined1 *)(puVar11 + -9) = 2;
      param_3 = (undefined **)(puVar11 + -9);
switchD_100485440_caseD_75:
      param_4 = unaff_x19;
      unaff_x19 = param_4;
switchD_100485440_caseD_76:
      Swift::KeyedEncodingContainer::_encode(pUVar4,pUVar6,param_3,param_4);
      pUVar7 = unaff_x19;
      pUVar5 = unaff_x22;
      if (unaff_x21 == (Union_Impl_FuncImpl *)0x0) {
        pUVar4 = *(Union_Impl_FuncImpl **)(unaff_x23 + 0xc);
        pUVar6 = *(Union_Impl_FuncImpl **)(unaff_x23 + 0xe);
        *(undefined1 *)(puVar11 + -9) = 3;
        param_3 = (undefined **)(puVar11 + -9);
        unaff_x21 = (Union_Impl_FuncImpl *)0x0;
switchD_100485440_caseD_98:
        Swift::KeyedEncodingContainer::_encode(pUVar4,pUVar6,param_3,unaff_x19);
        bVar1 = unaff_x21 == (Union_Impl_FuncImpl *)0x0;
        unaff_x21 = (Union_Impl_FuncImpl *)0x0;
        pUVar7 = unaff_x19;
        pUVar5 = unaff_x22;
        if (bVar1) {
switchD_100485440_caseD_5d:
          pUVar5 = unaff_x22;
          pUVar7 = unaff_x19;
          uVar2 = *(undefined8 *)(unaff_x23 + 0x10);
          uVar3 = *(undefined8 *)(unaff_x23 + 0x12);
          *(undefined1 *)(puVar11 + -9) = 4;
          Swift::KeyedEncodingContainer::_encode(uVar2,uVar3,puVar11 + -9,pUVar7);
          if (unaff_x21 != (Union_Impl_FuncImpl *)0x0) {
            (**(code **)(unaff_x27 + 8))(pUVar5,pUVar7);
            goto switchD_100485440_caseD_84;
          }
          puVar11[-9] = *(undefined8 *)(unaff_x23 + 0x14);
          *(undefined1 *)((long)puVar11 + -0x49) = 5;
          pUVar4 = (Union_Impl_FuncImpl *)&DAT_100fc7eb8;
          pUVar6 = &TargetResilientWitness_100c4bffc.Implementation;
          unaff_x26 = 0;
          unaff_x19 = pUVar7;
          unaff_x22 = pUVar5;
switchD_100485440_caseD_d0:
          pUVar6 = pUVar6 + 0x230;
switchD_100485440_caseD_70:
          FUN_1000037f0(pUVar4,pUVar6);
          pUVar5 = (Union_Impl_FuncImpl *)&DAT_100fc7ec0;
          param_3 = &PTR_Swift__UnsafePointer_100eac000;
          pUVar6 = (Union_Impl_FuncImpl *)
                   PTR___protocol_witness_table_for_Swift_String___Swift_Encodable_in_Swift_100eac210
          ;
          unaff_x24 = pUVar4;
switchD_100485440_caseD_d8:
          FUN_10045e1bc(pUVar5,pUVar6,*(undefined8 *)((long)param_3 + 0x510));
          pUVar4 = (Union_Impl_FuncImpl *)(puVar11 + -9);
          pUVar6 = (Union_Impl_FuncImpl *)((long)puVar11 + -0x49);
          unaff_x25 = pUVar5;
switchD_100485440_caseD_5c:
          Swift::KeyedEncodingContainer::_encode(pUVar4,pUVar6,unaff_x19,unaff_x24,unaff_x25);
          unaff_x21 = (Union_Impl_FuncImpl *)0x0;
          pUVar7 = unaff_x19;
          pUVar5 = unaff_x22;
          if (unaff_x26 == 0) {
switchD_100485440_caseD_b0:
            puVar11[-9] = *(undefined8 *)(unaff_x23 + 0x16);
            *(undefined1 *)((long)puVar11 + -0x49) = 6;
            pUVar4 = (Union_Impl_FuncImpl *)(puVar11 + -9);
            pUVar6 = (Union_Impl_FuncImpl *)((long)puVar11 + -0x49);
switchD_100485440_caseD_10:
            Swift::KeyedEncodingContainer::_encode(pUVar4,pUVar6,unaff_x19,unaff_x24,unaff_x25);
            pUVar7 = unaff_x19;
            pUVar5 = unaff_x22;
            if (unaff_x21 == (Union_Impl_FuncImpl *)0x0) {
              puVar11[-9] = *(undefined8 *)(unaff_x23 + 0x18);
              *(undefined1 *)((long)puVar11 + -0x49) = 7;
              Swift::KeyedEncodingContainer::_encode
                        (puVar11 + -9,(long)puVar11 + -0x49,unaff_x19,unaff_x24,unaff_x25);
              unaff_x21 = (Union_Impl_FuncImpl *)0x0;
switchD_100485440_caseD_9c:
              puVar11[-9] = *(undefined8 *)(unaff_x23 + 0x1a);
              *(undefined1 *)((long)puVar11 + -0x49) = 8;
switchD_100485440_caseD_c4:
              Swift::KeyedEncodingContainer::_encode
                        (puVar11 + -9,(long)puVar11 + -0x49,unaff_x19,unaff_x24,unaff_x25);
              pUVar7 = unaff_x19;
              pUVar5 = unaff_x22;
              if (unaff_x21 == (Union_Impl_FuncImpl *)0x0) {
                puVar11[-9] = *(undefined8 *)(unaff_x23 + 0x1c);
                *(undefined1 *)((long)puVar11 + -0x49) = 9;
switchD_100485440_caseD_88:
                param_5 = unaff_x25;
                param_4 = unaff_x24;
                param_3 = (undefined **)unaff_x19;
                pUVar4 = (Union_Impl_FuncImpl *)(puVar11 + -9);
                pUVar6 = (Union_Impl_FuncImpl *)((long)puVar11 + -0x49);
                unaff_x19 = (Union_Impl_FuncImpl *)param_3;
switchD_100485440_caseD_11:
                pUVar5 = unaff_x22;
                pUVar7 = unaff_x19;
                Swift::KeyedEncodingContainer::_encode(pUVar4,pUVar6,param_3,param_4,param_5);
                (**(code **)(unaff_x27 + 8))(pUVar5,pUVar7);
                goto switchD_100485440_caseD_84;
              }
            }
          }
        }
      }
    }
  }
  (**(code **)(unaff_x27 + 8))(pUVar5,pUVar7);
switchD_100485440_caseD_84:
  auVar20._8_8_ = pUVar7;
  auVar20._0_8_ = pUVar5;
  return auVar20;
}



/* Address: 0x100485558 | FUN_100485558 */

/* WARNING: Removing unreachable block (ram,0x0001004856d0) */

void FUN_100485558(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar4;
  undefined1 auStack_60 [7];
  undefined1 local_59;
  ulong local_58;
  
  puVar1 = &DAT_100fc9260;
  FUN_1000037f0(&DAT_100fc9260,&DAT_100c4dce0);
  lVar4 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100486bac();
  Swift::Encoder::_container();
  local_58 = local_58 & 0xffffffffffffff00;
  Swift::KeyedEncodingContainer::_encode(*unaff_x20,unaff_x20[1],&local_58,puVar1);
  if (unaff_x21 == 0) {
    local_58._0_1_ = 1;
    Swift::KeyedEncodingContainer::_encode(unaff_x20[2],unaff_x20[3],&local_58,puVar1);
    local_58._0_1_ = 2;
    Swift::KeyedEncodingContainer::_encode(unaff_x20[4],unaff_x20[5],&local_58,puVar1);
    local_58._0_1_ = 3;
    Swift::KeyedEncodingContainer::_encode(unaff_x20[6],unaff_x20[7],&local_58,puVar1);
    local_58 = CONCAT71(local_58._1_7_,4);
    Swift::KeyedEncodingContainer::_encode(unaff_x20[8],unaff_x20[9],&local_58,puVar1);
    local_58 = unaff_x20[10];
    local_59 = 5;
    puVar2 = &DAT_100fc7eb8;
    FUN_1000037f0(&DAT_100fc7eb8,&DAT_100c4c8c0);
    puVar3 = &DAT_100fc7ec0;
    FUN_10045e1bc(&DAT_100fc7ec0,
                  PTR___protocol_witness_table_for_Swift_String___Swift_Encodable_in_Swift_100eac210
                  ,PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100eac510);
    Swift::KeyedEncodingContainer::_encode(&local_58,&local_59,puVar1,puVar2,puVar3);
    local_58 = unaff_x20[0xb];
    local_59 = 6;
    Swift::KeyedEncodingContainer::_encode(&local_58,&local_59,puVar1,puVar2,puVar3);
    local_58 = unaff_x20[0xc];
    local_59 = 7;
    Swift::KeyedEncodingContainer::_encode(&local_58,&local_59,puVar1,puVar2,puVar3);
    local_58 = unaff_x20[0xd];
    local_59 = 8;
    Swift::KeyedEncodingContainer::_encode(&local_58,&local_59,puVar1,puVar2,puVar3);
    local_58 = unaff_x20[0xe];
    local_59 = 9;
    Swift::KeyedEncodingContainer::_encode(&local_58,&local_59,puVar1,puVar2,puVar3);
    (**(code **)(lVar4 + 8))(auStack_60 + -extraout_x8,puVar1);
  }
  else {
    (**(code **)(lVar4 + 8))(auStack_60 + -extraout_x8,puVar1);
  }
  return;
}



/* Address: 0x10048582c | FUN_10048582c */

void FUN_10048582c(void)

{
  char cVar1;
  char *pcVar2;
  Hasher HVar3;
  char *unaff_x20;
  String SVar4;
  undefined1 auStack_68 [72];
  
  cVar1 = *unaff_x20;
  Swift::Hasher::init(0);
  HVar3.unknown = (undefined1 *)0x8000000100da8590;
  pcVar2 = (char *)0xd000000000000015;
  if (cVar1 != '\x01') {
    HVar3.unknown = &DAT_e800000000000000;
    pcVar2 = (char *)0x656372756f736572;
  }
  SVar4.bridgeObject = HVar3.unknown;
  SVar4.str = pcVar2;
  Swift::String::hash((Hasher)auStack_68,SVar4);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar3);
  return;
}



/* Address: 0x1004858b0 | FUN_1004858b0 */

void FUN_1004858b0(Hasher param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  char *unaff_x20;
  String SVar3;
  
  puVar2 = (undefined1 *)0x8000000100da8590;
  pcVar1 = (char *)0xd000000000000015;
  if (*unaff_x20 != '\x01') {
    puVar2 = &DAT_e800000000000000;
    pcVar1 = (char *)0x656372756f736572;
  }
  SVar3.bridgeObject = puVar2;
  SVar3.str = pcVar1;
  Swift::String::hash(param_1,SVar3);
  _swift_bridgeObjectRelease(puVar2);
  return;
}



/* Address: 0x100485910 | FUN_100485910 */

void FUN_100485910(__int64 param_1)

{
  char cVar1;
  char *pcVar2;
  Hasher HVar3;
  char *unaff_x20;
  String SVar4;
  undefined1 auStack_68 [72];
  
  cVar1 = *unaff_x20;
  Swift::Hasher::init(param_1);
  HVar3.unknown = (undefined1 *)0x8000000100da8590;
  pcVar2 = (char *)0xd000000000000015;
  if (cVar1 != '\x01') {
    HVar3.unknown = &DAT_e800000000000000;
    pcVar2 = (char *)0x656372756f736572;
  }
  SVar4.bridgeObject = HVar3.unknown;
  SVar4.str = pcVar2;
  Swift::String::hash((Hasher)auStack_68,SVar4);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar3);
  return;
}



/* Address: 0x100485990 | FUN_100485990 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001004859d0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100485990(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  __int64 _Var4;
  undefined1 uVar5;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  FUN_1000037f0(&DAT_100fc8150,&DAT_100c4cdb0);
  _swift_initStaticObject();
  _Var4 = Swift::_findStringSwitchCase(param_2,uVar2,uVar3);
  _swift_bridgeObjectRelease(uVar3);
  uVar5 = 1;
  if (_Var4 != 1) {
    uVar5 = 2;
  }
  uVar1 = 0;
  if (_Var4 != 0) {
    uVar1 = uVar5;
  }
  *param_1 = uVar1;
  return;
}



/* Address: 0x100485a08 | FUN_100485a08 */

void FUN_100485a08(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  char *unaff_x20;
  
  puVar2 = (undefined1 *)0x8000000100da8590;
  uVar1 = 0xd000000000000015;
  if (*unaff_x20 != '\x01') {
    puVar2 = &DAT_e800000000000000;
    uVar1 = 0x656372756f736572;
  }
  *param_1 = uVar1;
  param_1[1] = puVar2;
  return;
}



/* Address: 0x100485a4c | FUN_100485a4c */

undefined1  [16] FUN_100485a4c(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  char *unaff_x20;
  undefined1 auVar3 [16];
  
  puVar2 = (undefined1 *)0x8000000100da8590;
  uVar1 = 0xd000000000000015;
  if (*unaff_x20 != '\x01') {
    puVar2 = &DAT_e800000000000000;
    uVar1 = 0x656372756f736572;
  }
  auVar3._8_8_ = puVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Address: 0x100485a8c | FUN_100485a8c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100485ad0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100485a8c(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  __int64 _Var2;
  undefined1 uVar3;
  
  FUN_1000037f0(&DAT_100fc8150,&DAT_100c4cdb0);
  _swift_initStaticObject();
  _Var2 = Swift::_findStringSwitchCase(param_2,param_2,param_3);
  _swift_bridgeObjectRelease(param_3);
  uVar3 = 1;
  if (_Var2 != 1) {
    uVar3 = 2;
  }
  uVar1 = 0;
  if (_Var2 != 0) {
    uVar1 = uVar3;
  }
  *param_1 = uVar1;
  return;
}



/* Address: 0x100485b08 | FUN_100485b08 */

String FUN_100485b08(void)

{
  String SVar1;
  
  FUN_100486bec();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100485b30 | FUN_100485b30 */

String FUN_100485b30(void)

{
  String SVar1;
  
  FUN_100486bec();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100485b58 | FUN_100485b58 */

void FUN_100485b58(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x21;
  
  FUN_100485e00();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = param_4;
  }
  return;
}



/* Address: 0x100485b84 | FUN_100485b84 */

void FUN_100485b84(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1004852a4(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2]);
  return;
}



/* Address: 0x100485ba0 | FUN_100485ba0 */

void FUN_100485ba0(undefined8 param_1,Hasher param_2)

{
  char *pcVar1;
  byte *unaff_x20;
  String SVar2;
  undefined1 auStack_68 [72];
  
  pcVar1 = (char *)(ulong)*unaff_x20;
  Swift::Hasher::init(0);
  FUN_100485414();
  SVar2.bridgeObject = param_2.unknown;
  SVar2.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar2);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(param_2);
  return;
}



/* Address: 0x100485c00 | FUN_100485c00 */

void FUN_100485c00(Hasher param_1,void *param_2)

{
  char *pcVar1;
  byte *unaff_x20;
  String SVar2;
  
  pcVar1 = (char *)(ulong)*unaff_x20;
  FUN_100485414();
  SVar2.bridgeObject = param_2;
  SVar2.str = pcVar1;
  Swift::String::hash(param_1,SVar2);
  _swift_bridgeObjectRelease(param_2);
  return;
}



/* Address: 0x100485c40 | FUN_100485c40 */

void FUN_100485c40(__int64 param_1,Hasher param_2)

{
  char *pcVar1;
  byte *unaff_x20;
  String SVar2;
  undefined1 auStack_68 [72];
  
  pcVar1 = (char *)(ulong)*unaff_x20;
  Swift::Hasher::init(param_1);
  FUN_100485414();
  SVar2.bridgeObject = param_2.unknown;
  SVar2.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar2);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(param_2);
  return;
}



/* Address: 0x100485c9c | FUN_100485c9c */

void FUN_100485c9c(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_100485fb0(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x100485cc8 | FUN_100485cc8 */

void FUN_100485cc8(ulong *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  byte *unaff_x20;
  
  uVar1 = (ulong)*unaff_x20;
  FUN_100485414();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}


