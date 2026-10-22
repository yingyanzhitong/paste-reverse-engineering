/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100115580 | FUN_100115580 */

void FUN_100115580(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100108d58(unaff_x20 + PostHogFeatureFlagResult::payload,param_1);
  return;
}



/* Address: 0x100115594 | FUN_100115594 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100115594(undefined8 param_1,Data param_2,long param_3,undefined8 param_4)

{
  Optional OVar1;
  undefined7 extraout_var;
  undefined1 *puVar2;
  undefined1 *puVar3;
  ID IVar4;
  Data DVar5;
  JSONDecoder *pJVar6;
  undefined8 uVar7;
  undefined8 extraout_x1;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  code *pcVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  undefined8 local_a8 [3];
  long local_90;
  undefined1 auStack_88 [24];
  undefined8 local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar9 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = auStack_c0 + -extraout_x8;
  lVar12 = *(long *)(param_3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar12 + 0x40));
  lVar10 = (long)puVar3 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_100108d58(unaff_x20 + PostHogFeatureFlagResult::payload,local_a8);
  if (local_90 == 0) {
    FUN_1000faea8(local_a8);
    (**(code **)(lVar12 + 0x38))(param_1,1,1,param_3);
    goto LAB_100115894;
  }
  local_b8 = param_4;
  FUN_100011080(local_a8,auStack_88);
  FUN_10000cbfc(auStack_88,local_a8);
  puVar2 = puVar3;
  _swift_dynamicCast(puVar3,local_a8,PTR___type_metadata_for_Any_100eae0c0 + 8,param_3,6);
  pcVar11 = *(code **)(lVar12 + 0x38);
  if ((int)puVar2 == 0) {
    (*pcVar11)(puVar3,1,1,param_3);
    (**(code **)(lVar9 + 8))(puVar3,CONCAT71(extraout_var,OVar1.value));
    puVar3 = auStack_88;
    FUN_100004640(puVar3,local_70);
    Swift::__bridgeAnythingToObjectiveC();
    IVar4 = NSJSONSerialization::isValidJSONObject_((ID)&_OBJC_CLASS___NSJSONSerialization,puVar3);
    _swift_unknownObjectRelease(puVar3);
    if ((int)IVar4 == 0) {
      FUN_100004594(auStack_88);
    }
    else {
      puVar3 = auStack_88;
      FUN_100004640(puVar3,local_70);
      Swift::__bridgeAnythingToObjectiveC();
      local_a8[0] = 0;
      DVar5.unknown =
           (undefined *)
           NSJSONSerialization::dataWithJSONObject_options_error_
                     (&_OBJC_CLASS___NSJSONSerialization,puVar3,0,local_a8);
      uVar7 = extraout_x1;
      _swift_unknownObjectRelease(puVar3);
      if (DVar5.unknown != (undefined *)0x0) {
        DVar5 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar5);
        pJVar6 = Foundation::JSONDecoder::typeMetadataAccessor();
        _swift_allocObject(pJVar6,*(undefined4 *)(pJVar6 + 0x30),*(undefined2 *)(pJVar6 + 0x34));
        pJVar6 = Foundation::JSONDecoder::init(pJVar6);
        Foundation::JSONDecoder::_decode(pJVar6,param_2);
        FUN_10003bf2c(DVar5.unknown,uVar7);
        _swift_release(pJVar6);
        FUN_100004594(auStack_88);
        goto LAB_1001156d4;
      }
      uVar7 = local_a8[0];
      Foundation::__convertNSErrorToError();
      _swift_willThrow(0);
      FUN_100004594(auStack_88);
      _swift_errorRelease(uVar7);
    }
    uVar7 = 1;
  }
  else {
    (*pcVar11)(puVar3,0,1,param_3);
    FUN_100004594(auStack_88);
    pcVar8 = *(code **)(lVar12 + 0x20);
    (*pcVar8)(lVar10,puVar3,param_3);
    (*pcVar8)(param_1,lVar10,param_3);
LAB_1001156d4:
    uVar7 = 0;
  }
  (*pcVar11)(param_1,uVar7,1,param_3);
LAB_100115894:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x1001158d0 | PostHogFeatureFlagResult::init */

/* Function Stack Size: 0x10 bytes */

ID PostHogFeatureFlagResult::init(ID param_1,SEL param_2)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("PostHog.PostHogFeatureFlagResult",0x20,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1001158fc);
  (*pcVar1)();
}



/* Address: 0x1001158fc | FUN_1001158fc */

void FUN_1001158fc(void)

{
  FUN_10011597c();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x10011592c | PostHogFeatureFlagResult::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void PostHogFeatureFlagResult::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + key + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + variant + 8));
  FUN_1000faea8(param_1 + payload);
  return;
}



/* Address: 0x10011597c | FUN_10011597c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10011597c(void)

{
  return ZEXT816(0x100f93670);
}



/* Address: 0x10011599c | FUN_10011599c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10011599c(char *param_1,undefined *param_2,char *param_3,_StringGuts param_4,ID param_5,
                  char *param_6,code *param_7)

{
  _StringGuts _Var1;
  ID IVar2;
  undefined *puVar3;
  char *pcVar4;
  NSString *pNVar5;
  undefined1 uVar6;
  _StringGuts extraout_x1;
  void *pvVar7;
  char *pcVar8;
  char *pcVar9;
  undefined *puVar10;
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
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String separator;
  String SVar31;
  String SVar32;
  String separator_00;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  String SVar38;
  String SVar39;
  String separator_01;
  char *local_90;
  char *local_88;
  undefined *local_80;
  char *local_78;
  char *pcStack_70;
  undefined1 local_68;
  
  if (param_6 == (char *)0x0) {
    _Var1.unknown = param_2;
    pcVar9 = param_3;
    puVar10 = param_4.unknown;
    if (param_5 != 0) {
      _Var1.unknown = &_OBJC_CLASS___NSHTTPURLResponse;
      _swift_dynamicCastObjCClass();
      if (param_5 != 0) {
        IVar2 = objc_stub::statusCode(param_5);
        if (IVar2 - 200 < 100) {
          local_88 = (char *)0x0;
          local_80 = (undefined *)0xe000000000000000;
          Swift::_StringGuts::grow(0x15,extraout_x1);
          puVar3 = local_80;
          _swift_bridgeObjectRetain(param_2);
          _swift_bridgeObjectRelease(puVar3);
          pcVar4 = (char *)0xd000000000000013;
          pvVar7 = (void *)0x8000000100d92180;
          local_88 = param_1;
          local_80 = param_2;
        }
        else {
          if ((ulong)param_4.unknown >> 0x3c < 0xf) {
            pcVar9 = (char *)0x4;
            FUN_10016e98c();
          }
          else {
            param_3 = (char *)0x0;
            param_4.unknown = extraout_x1.unknown;
          }
          local_88 = (char *)0x0;
          local_80 = (undefined *)0xe000000000000000;
          Swift::_StringGuts::grow(0x2e,param_4);
          _swift_bridgeObjectRelease(local_80);
          local_88 = (char *)0xd000000000000011;
          local_80 = (undefined *)0x8000000100d92160;
          SVar25.bridgeObject = param_2;
          SVar25.str = param_1;
          SVar33.bridgeObject = puVar10;
          SVar33.str = pcVar9;
          Swift::String::append(SVar25,SVar33);
          SVar20.bridgeObject = (void *)0xee00203a73757461;
          SVar20.str = (char *)0x7473203a49504120;
          SVar34.bridgeObject = puVar10;
          SVar34.str = pcVar9;
          Swift::String::append(SVar20,SVar34);
          local_90 = (char *)objc_stub::statusCode(param_5);
          SVar25 = Swift::CustomStringConvertible::get_description();
          SVar35.bridgeObject = puVar10;
          SVar35.str = pcVar9;
          Swift::String::append(SVar25,SVar35);
          _swift_bridgeObjectRelease(SVar25.bridgeObject);
          SVar21.bridgeObject = &DAT_e800000000000000;
          SVar21.str = (char *)0x203a79646f62202c;
          SVar36.bridgeObject = puVar10;
          SVar36.str = pcVar9;
          Swift::String::append(SVar21,SVar36);
          puVar3 = &DAT_100fafde0;
          local_90 = param_3;
          FUN_1000f7830(&DAT_100fafde0,&DAT_100c2fde0);
          SVar25 = Swift::String::_init(&local_90,puVar3);
          SVar37.bridgeObject = puVar10;
          SVar37.str = pcVar9;
          Swift::String::append(SVar25,SVar37);
          _swift_bridgeObjectRelease(SVar25.bridgeObject);
          pcVar4 = (char *)0x2e;
          pvVar7 = (void *)0xe100000000000000;
        }
        SVar22.bridgeObject = pvVar7;
        SVar22.str = pcVar4;
        SVar38.bridgeObject = puVar10;
        SVar38.str = pcVar9;
        Swift::String::append(SVar22,SVar38);
        puVar3 = local_80;
        pcVar9 = local_88;
        if (DAT_101057340 == '\x01') {
          pcVar4 = &DAT_100fae660;
          FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
          pcVar8 = (char *)0x7;
          _swift_allocObject();
          pcVar4[0x18] = '\x02';
          pcVar4[0x19] = '\0';
          pcVar4[0x1a] = '\0';
          pcVar4[0x1b] = '\0';
          pcVar4[0x1c] = '\0';
          pcVar4[0x1d] = '\0';
          pcVar4[0x1e] = '\0';
          pcVar4[0x1f] = '\0';
          pcVar4[0x10] = '\x01';
          pcVar4[0x11] = '\0';
          pcVar4[0x12] = '\0';
          pcVar4[0x13] = '\0';
          pcVar4[0x14] = '\0';
          pcVar4[0x15] = '\0';
          pcVar4[0x16] = '\0';
          pcVar4[0x17] = '\0';
          local_88 = (char *)0x676f4874736f505b;
          local_80 = (undefined *)0xea0000000000205d;
          SVar23.bridgeObject = puVar3;
          SVar23.str = pcVar9;
          SVar39.bridgeObject = puVar10;
          SVar39.str = pcVar8;
          Swift::String::append(SVar23,SVar39);
          *(undefined **)(pcVar4 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
          *(char **)(pcVar4 + 0x20) = local_88;
          *(undefined **)(pcVar4 + 0x28) = local_80;
          SVar24.bridgeObject = (void *)0x20;
          SVar24.str = pcVar4;
          separator_01.bridgeObject = (void *)0xa;
          separator_01.str = (char *)0xe100000000000000;
          Swift::_print(SVar24,separator_01);
          _swift_release(pcVar4);
        }
        _swift_bridgeObjectRelease(puVar3);
        pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        IVar2 = objc_stub::valueForHTTPHeaderField_(param_5,pNVar5);
        if (IVar2 == 0) {
          uVar6 = 1;
          pcVar9 = (char *)0x0;
        }
        else {
          SVar25 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          pvVar7 = SVar25.bridgeObject;
          _swift_bridgeObjectRetain(pvVar7);
          FUN_10016df78();
          pcVar9 = SVar25.str;
          uVar6 = SVar25.bridgeObject._0_1_;
          _swift_bridgeObjectRelease_n(pvVar7,2);
        }
        local_88 = (char *)objc_stub::statusCode(param_5);
        local_80 = (undefined *)((ulong)local_80 & 0xffffffffffffff00);
        local_78 = (char *)0x0;
        pcStack_70 = pcVar9;
        local_68 = uVar6;
        (*param_7)(&local_88);
        return;
      }
    }
    local_88 = (char *)0x0;
    local_80 = (undefined *)0xe000000000000000;
    Swift::_StringGuts::grow(0x20,_Var1);
    puVar3 = local_80;
    _swift_bridgeObjectRetain(param_2);
    _swift_bridgeObjectRelease(puVar3);
    SVar17.bridgeObject = (void *)0x8000000100d92140;
    SVar17.str = (char *)0xd00000000000001e;
    SVar31.bridgeObject = puVar10;
    SVar31.str = pcVar9;
    local_88 = param_1;
    local_80 = param_2;
    Swift::String::append(SVar17,SVar31);
    puVar3 = local_80;
    pcVar9 = local_88;
    if (DAT_101057340 == '\x01') {
      pcVar4 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      pcVar8 = (char *)0x7;
      _swift_allocObject();
      pcVar4[0x18] = '\x02';
      pcVar4[0x19] = '\0';
      pcVar4[0x1a] = '\0';
      pcVar4[0x1b] = '\0';
      pcVar4[0x1c] = '\0';
      pcVar4[0x1d] = '\0';
      pcVar4[0x1e] = '\0';
      pcVar4[0x1f] = '\0';
      pcVar4[0x10] = '\x01';
      pcVar4[0x11] = '\0';
      pcVar4[0x12] = '\0';
      pcVar4[0x13] = '\0';
      pcVar4[0x14] = '\0';
      pcVar4[0x15] = '\0';
      pcVar4[0x16] = '\0';
      pcVar4[0x17] = '\0';
      local_88 = (char *)0x676f4874736f505b;
      local_80 = (undefined *)0xea0000000000205d;
      SVar18.bridgeObject = puVar3;
      SVar18.str = pcVar9;
      SVar32.bridgeObject = puVar10;
      SVar32.str = pcVar8;
      Swift::String::append(SVar18,SVar32);
      *(undefined **)(pcVar4 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      *(char **)(pcVar4 + 0x20) = local_88;
      *(undefined **)(pcVar4 + 0x28) = local_80;
      SVar19.bridgeObject = (void *)0x20;
      SVar19.str = pcVar4;
      separator_00.bridgeObject = (void *)0xa;
      separator_00.str = (char *)0xe100000000000000;
      Swift::_print(SVar19,separator_00);
      _swift_release(pcVar4);
    }
    _swift_bridgeObjectRelease(puVar3);
    local_88 = (char *)0x0;
    local_80 = (undefined *)CONCAT71(local_80._1_7_,1);
    local_78 = (char *)0x0;
    pcStack_70 = (char *)0x0;
    local_68 = 1;
    (*param_7)(&local_88);
  }
  else {
    local_88 = (char *)0x0;
    local_80 = (void *)0xe000000000000000;
    _Var1.unknown = param_2;
    _swift_errorRetain(param_6);
    Swift::_StringGuts::grow(0x1d,_Var1);
    SVar11.bridgeObject = (void *)0x8000000100d921a0;
    SVar11.str = (char *)0xd000000000000012;
    SVar26.bridgeObject = param_4.unknown;
    SVar26.str = param_3;
    Swift::String::append(SVar11,SVar26);
    SVar12.bridgeObject = param_2;
    SVar12.str = param_1;
    SVar27.bridgeObject = param_4.unknown;
    SVar27.str = param_3;
    Swift::String::append(SVar12,SVar27);
    SVar13.bridgeObject = &DAT_e600000000000000;
    SVar13.str = (char *)0x203a49504120;
    SVar28.bridgeObject = param_4.unknown;
    SVar28.str = param_3;
    Swift::String::append(SVar13,SVar28);
    pcVar9 = &DAT_100faf510;
    local_90 = param_6;
    FUN_1000f7830(&DAT_100faf510,&DAT_100c2e820);
    puVar3 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
    Swift::__print_unlocked
              (&local_90,&local_88,pcVar9,
               PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
               PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
              );
    SVar14.bridgeObject = (void *)0xe100000000000000;
    SVar14.str = (char *)0x2e;
    SVar29.bridgeObject = puVar3;
    SVar29.str = pcVar9;
    Swift::String::append(SVar14,SVar29);
    puVar10 = local_80;
    pcVar9 = local_88;
    if (DAT_101057340 == '\x01') {
      pcVar4 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      pcVar8 = (char *)0x7;
      _swift_allocObject();
      pcVar4[0x18] = '\x02';
      pcVar4[0x19] = '\0';
      pcVar4[0x1a] = '\0';
      pcVar4[0x1b] = '\0';
      pcVar4[0x1c] = '\0';
      pcVar4[0x1d] = '\0';
      pcVar4[0x1e] = '\0';
      pcVar4[0x1f] = '\0';
      pcVar4[0x10] = '\x01';
      pcVar4[0x11] = '\0';
      pcVar4[0x12] = '\0';
      pcVar4[0x13] = '\0';
      pcVar4[0x14] = '\0';
      pcVar4[0x15] = '\0';
      pcVar4[0x16] = '\0';
      pcVar4[0x17] = '\0';
      local_88 = (char *)0x676f4874736f505b;
      local_80 = (void *)0xea0000000000205d;
      SVar15.bridgeObject = puVar10;
      SVar15.str = pcVar9;
      SVar30.bridgeObject = puVar3;
      SVar30.str = pcVar8;
      Swift::String::append(SVar15,SVar30);
      *(undefined **)(pcVar4 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      *(char **)(pcVar4 + 0x20) = local_88;
      *(undefined **)(pcVar4 + 0x28) = local_80;
      SVar16.bridgeObject = (void *)0x20;
      SVar16.str = pcVar4;
      separator.bridgeObject = (void *)0xa;
      separator.str = (char *)0xe100000000000000;
      Swift::_print(SVar16,separator);
      _swift_release(pcVar4);
    }
    _swift_bridgeObjectRelease(puVar10);
    local_88 = (char *)0x0;
    local_80 = (undefined *)CONCAT71(local_80._1_7_,1);
    pcStack_70 = (char *)0x0;
    local_68 = 1;
    local_78 = param_6;
    _swift_errorRetain(param_6);
    (*param_7)(&local_88);
    _swift_errorRelease(param_6);
    _swift_errorRelease(param_6);
  }
  return;
}



/* Address: 0x100115fe4 | FUN_100115fe4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001001161b4 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100115fe4(long param_1)

{
  String SVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  Dictionary<undefined,undefined> DVar8;
  undefined *puVar9;
  NSDictionary *pNVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  class_t *pcVar13;
  class_t *pcVar14;
  undefined8 extraout_x1;
  undefined8 uVar15;
  char *pcVar16;
  void *pvVar17;
  void *pvVar18;
  long unaff_x20;
  undefined *puVar19;
  ID IVar20;
  undefined8 *puVar21;
  long lVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  objc_super local_140;
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined *local_100;
  undefined1 *puStack_f8;
  undefined *local_e8;
  undefined *local_e0;
  undefined8 uStack_d8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  *(undefined8 *)(unaff_x20 + 0x20) = 0x4024000000000000;
  *(long *)(unaff_x20 + 0x10) = param_1;
  lVar22 = PostHogConfig::requestHeaders;
  _swift_beginAccess(param_1 + PostHogConfig::requestHeaders,auStack_80,0,0);
  puVar19 = *(undefined **)(param_1 + lVar22);
  puVar7 = puVar19;
  if (puVar19 == (undefined *)0x0) {
    puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1000f8280();
  }
  *(undefined **)(unaff_x20 + 0x18) = puVar7;
  lVar22 = PostHogConfig::urlSessionConfiguration;
  _swift_beginAccess(param_1 + PostHogConfig::urlSessionConfiguration,auStack_98,0,0);
  puVar7 = PTR___type_metadata_for_Any_100eae0c0;
  IVar20 = *(ID *)(param_1 + lVar22);
  if (IVar20 == 0) {
    _swift_bridgeObjectRetain(puVar19);
  }
  else {
    _swift_bridgeObjectRetain(puVar19);
    IVar20 = objc_stub::copy(IVar20);
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(IVar20);
    uVar5 = 0;
    FUN_10000ec2c(0,&DAT_100fafe98,&PTR__OBJC_CLASS___NSURLSessionConfiguration_100f8d8d8);
    ppuVar6 = &local_e0;
    _swift_dynamicCast(ppuVar6,&local_c0,puVar7 + 8,uVar5,6);
    puVar7 = local_e0;
    if (((ulong)ppuVar6 & 1) != 0) goto LAB_100116118;
  }
  puVar7 = (undefined *)
           NSURLSessionConfiguration::defaultSessionConfiguration
                     ((ID)&_OBJC_CLASS___NSURLSessionConfiguration);
LAB_100116118:
  objc_stub::setRequestCachePolicy_((ID)puVar7,5);
  IVar20 = objc_stub::HTTPAdditionalHeaders((ID)puVar7);
  if (IVar20 == 0) {
    DVar8.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1000f87e4();
  }
  else {
    DVar8 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  }
  puVar2 = PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218;
  puVar19 = PTR___type_metadata_for_Swift_String_100eac208;
  local_e0 = (undefined *)0x2d746e65746e6f43;
  uStack_d8 = 0xec00000065707954;
  Swift::AnyHashable::_init
            (&local_c0,DVar8.unknown,PTR___type_metadata_for_Swift_String_100eac208,
             PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218);
  local_100 = (undefined *)0xd00000000000001f;
  puStack_f8 = (undefined1 *)0x8000000100d92380;
  local_e8 = puVar19;
  FUN_100011080(&local_100,&local_e0);
  puVar9 = DVar8.unknown;
  _swift_isUniquelyReferenced_nonNull_native(DVar8.unknown);
  local_100 = DVar8.unknown;
  FUN_10016ffd4(&local_e0,&local_c0,puVar9);
  FUN_100089674(&local_c0);
  puVar3 = local_100;
  local_e0 = (undefined *)0x6567412d72657355;
  uStack_d8 = 0xea0000000000746e;
  Swift::AnyHashable::_init(&local_c0,puVar9,puVar19,puVar2);
  pcVar16 = (char *)0x0;
  pvVar17 = (void *)0x0;
  _swift_beginAccess(s_posthog_ios_100fb15a8,auStack_118);
  local_e0 = (undefined *)s_posthog_ios_100fb15a8._0_8_;
  uStack_d8 = ram0x000100fb15b0;
  _swift_bridgeObjectRetain();
  SVar23.bridgeObject = (void *)0xe100000000000000;
  SVar23.str = (char *)0x2f;
  SVar24.bridgeObject = pvVar17;
  SVar24.str = pcVar16;
  Swift::String::append(SVar23,SVar24);
  pcVar16 = (char *)0x0;
  pvVar18 = (void *)0x0;
  _swift_beginAccess(s_3_69_0_100fb1598,auStack_130);
  pvVar17 = DAT_100fb15a0;
  SVar1.bridgeObject = DAT_100fb15a0;
  SVar1.str = _s_3_69_0_100fb1598;
  _swift_bridgeObjectRetain(DAT_100fb15a0);
  SVar25.bridgeObject = pvVar18;
  SVar25.str = pcVar16;
  Swift::String::append(SVar1,SVar25);
  _swift_bridgeObjectRelease(pvVar17);
  local_100 = local_e0;
  puStack_f8 = (undefined1 *)uStack_d8;
  local_e8 = puVar19;
  FUN_100011080(&local_100,&local_e0);
  puVar9 = puVar3;
  _swift_isUniquelyReferenced_nonNull_native(puVar3);
  local_100 = puVar3;
  FUN_10016ffd4(&local_e0,&local_c0,puVar9);
  FUN_100089674(&local_c0);
  puVar3 = local_100;
  local_e0 = (undefined *)0x452d747065636341;
  uStack_d8 = 0xef676e69646f636e;
  Swift::AnyHashable::_init(&local_c0,puVar9,puVar19,puVar2);
  local_100 = (undefined *)0x70697a67;
  puStack_f8 = &DAT_e400000000000000;
  local_e8 = puVar19;
  FUN_100011080(&local_100,&local_e0);
  puVar19 = puVar3;
  _swift_isUniquelyReferenced_nonNull_native(puVar3);
  local_100 = puVar3;
  FUN_10016ffd4(&local_e0,&local_c0,puVar19);
  FUN_100089674(&local_c0);
  puVar19 = local_100;
  pNVar10 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  objc_stub::setHTTPAdditionalHeaders_((ID)puVar7,pNVar10);
  uVar5 = 0;
  if (*(long *)(*(long *)(unaff_x20 + 0x18) + 0x10) == 0) {
    IVar20 = NSURLSession::sessionWithConfiguration_((ID)&_OBJC_CLASS___NSURLSession,puVar7);
    _swift_bridgeObjectRelease(puVar19);
  }
  else {
    uVar15 = extraout_x1;
    Foundation::URL::_get_host((URL)0x0);
    lVar22 = *(long *)(unaff_x20 + 0x18);
    puVar21 = *(undefined8 **)(lVar22 + 0x10);
    puVar11 = (undefined8 *)PTR___swiftEmptyArrayStorage_100eae0d8;
    if (puVar21 != (undefined8 *)0x0) {
      _swift_bridgeObjectRetain(lVar22);
      puVar11 = puVar21;
      FUN_10010f6fc(puVar21,0);
      puVar12 = &local_c0;
      thunk_FUN_10015371c(puVar12,puVar11 + 4,puVar21,lVar22);
      FUN_10000c650(local_c0,uStack_b8,local_b0,uStack_a8,local_a0);
      if (puVar12 != puVar21) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100116434);
        (*pcVar4)();
      }
    }
    pcVar13 = (class_t *)0x0;
    FUN_10011d4bc();
    pcVar14 = pcVar13;
    _objc_allocWithZone();
    puVar21 = (undefined8 *)
              ((long)&pcVar14->isa +
              _TtC7PostHogP33_8029BAEF3E5842E77DDAAD37085E69E429PostHogRedirectHeaderStripper::
              allowedHost);
    *puVar21 = uVar5;
    puVar21[1] = uVar15;
    *(undefined8 **)
     ((long)&pcVar14->isa +
     _TtC7PostHogP33_8029BAEF3E5842E77DDAAD37085E69E429PostHogRedirectHeaderStripper::headerKeys) =
         puVar11;
    local_140.receiver = (ID)pcVar14;
    local_140.super_class = pcVar13;
    IVar20 = _objc_msgSendSuper2(&local_140,"init");
    IVar20 = NSURLSession::sessionWithConfiguration_delegate_delegateQueue_
                       ((ID)&_OBJC_CLASS___NSURLSession,puVar7,IVar20,0);
    _swift_bridgeObjectRelease(puVar19);
  }
  *(ID *)(unaff_x20 + 0x28) = IVar20;
  return;
}



/* Address: 0x100116520 | FUN_100116520 */

void FUN_100116520(undefined8 param_1)

{
  String *pSVar1;
  undefined8 *puVar2;
  char *pcVar3;
  void *pvVar4;
  String SVar5;
  bool bVar6;
  URL UVar7;
  URLRequest_conflict UVar8;
  undefined *puVar9;
  URL UVar10;
  Hasher into;
  void *pvVar11;
  void *pvVar12;
  URL UVar14;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long extraout_x12;
  long lVar18;
  ulong uVar19;
  long unaff_x20;
  code *pcVar20;
  ulong *puVar21;
  undefined *puVar22;
  URL UVar23;
  _StringGuts _Var24;
  long lVar25;
  String SVar26;
  undefined auStack_e0 [8];
  char *local_d8;
  void *local_d0;
  URLRequest_conflict local_c8;
  ulong local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined1 auStack_a8 [72];
  char *pcVar13;
  
  UVar7 = Foundation::URL::typeMetadataAccessor();
  lVar18 = *(long *)(UVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar18 + 0x40));
  puVar22 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar25 = (long)puVar22 - extraout_x12;
  UVar8.unknown = &DAT_100fae670;
  FUN_1000f7830(&DAT_100fae670,&DAT_100c2e0e8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(UVar8.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  UVar23.unknown = (undefined *)(lVar25 - extraout_x8_00);
  local_b0 = *(long *)(unaff_x20 + 0x18);
  if (*(long *)(local_b0 + 0x10) != 0) {
    local_b8 = param_1;
    Foundation::URLRequest::_get_url(UVar8);
    puVar9 = UVar23.unknown;
    (**(code **)(lVar18 + 0x30))(UVar23.unknown,1,UVar7.unknown);
    if ((int)puVar9 == 0) {
      pcVar20 = *(code **)(lVar18 + 0x10);
      (*pcVar20)(lVar25,UVar23.unknown,UVar7.unknown);
      _Var24.unknown = &DAT_100fae670;
      FUN_1000fb4c4(UVar23.unknown,&DAT_100fae670,&DAT_100c2e0e8);
      Foundation::URL::_get_host(UVar23);
      (**(code **)(lVar18 + 8))(lVar25,UVar7.unknown);
    }
    else {
      FUN_1000fb4c4(UVar23.unknown,&DAT_100fae670,&DAT_100c2e0e8);
      UVar23.unknown = (undefined *)0x0;
      _Var24.unknown = (undefined *)0x0;
      pcVar20 = *(code **)(lVar18 + 0x10);
    }
    puVar9 = (undefined *)(*(long *)(unaff_x20 + 0x10) + PostHogConfig::host);
    UVar10.unknown = puVar22;
    UVar14 = UVar7;
    (*pcVar20)();
    Foundation::URL::_get_host(UVar10);
    (**(code **)(lVar18 + 8))(puVar22,UVar7.unknown);
    if (_Var24.unknown == (undefined *)0x0) {
      if (puVar9 != (undefined *)0x0) {
        _swift_bridgeObjectRelease(puVar9);
        return;
      }
    }
    else {
      if (puVar9 == (undefined *)0x0) {
        _swift_bridgeObjectRelease(_Var24.unknown);
        return;
      }
      if (UVar23.unknown == UVar10.unknown && _Var24.unknown == puVar9) {
        _swift_bridgeObjectRelease(_Var24.unknown);
        _swift_bridgeObjectRelease(puVar9);
      }
      else {
        bVar6 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)UVar23.unknown,_Var24,
                           (_StringComparisonResult)(__int8)UVar10.unknown);
        _swift_bridgeObjectRelease(_Var24.unknown);
        _swift_bridgeObjectRelease(puVar9);
        UVar14.unknown = UVar10.unknown;
        if (!bVar6) {
          return;
        }
      }
    }
    lVar18 = local_b0;
    puVar21 = (ulong *)(local_b0 + 0x40);
    uVar17 = 1L << ((ulong)*(byte *)(local_b0 + 0x20) & 0x3f);
    uVar19 = 0xffffffffffffffff;
    if ((*(byte *)(local_b0 + 0x20) & 0x3f) < 6) {
      uVar19 = ~(-1L << (uVar17 & 0x3f));
    }
    uVar19 = uVar19 & *puVar21;
    _swift_bridgeObjectRetain(local_b0);
    lVar25 = 0;
joined_r0x00010011677c:
    for (; uVar19 != 0; uVar19 = uVar19 - 1 & uVar19) {
      uVar15 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
      uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
      uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
      uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
      uVar15 = lVar25 << 10 | LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) << 4;
      pSVar1 = (String *)(*(long *)(lVar18 + 0x30) + uVar15);
      pcVar13 = pSVar1->str;
      pvVar11 = pSVar1->bridgeObject;
      SVar26 = *pSVar1;
      puVar2 = (undefined8 *)(*(long *)(lVar18 + 0x38) + uVar15);
      pcVar3 = (char *)*puVar2;
      pvVar4 = (void *)puVar2[1];
      _swift_bridgeObjectRetain(pvVar11);
      _swift_bridgeObjectRetain(pvVar4);
      pvVar12 = pvVar11;
      Foundation::URLRequest::_value(SVar26,(URLRequest_conflict)UVar14.unknown);
      if (pvVar12 == (void *)0x0) {
        local_d8 = pcVar3;
        local_d0 = pvVar4;
        local_c8.unknown = pcVar13;
        if (DAT_100fafe18 != -1) {
          _swift_once(&DAT_100fafe18,FUN_100116974);
        }
        lVar18 = DAT_100fafe20;
        SVar26.bridgeObject = pvVar11;
        SVar26.str = local_c8.unknown;
        SVar26 = Swift::String::lowercased(SVar26);
        pcVar13 = SVar26.bridgeObject;
        if (*(long *)(lVar18 + 0x10) != 0) {
          Swift::Hasher::init(*(__int64 *)(lVar18 + 0x28));
          into.unknown = auStack_a8;
          UVar14.unknown = pcVar13;
          Swift::String::hash(into,SVar26);
          uVar15 = Swift::Hasher::_finalize(into);
          uVar16 = -1L << ((ulong)*(byte *)(lVar18 + 0x20) & 0x3f);
          uVar15 = uVar15 & (uVar16 ^ 0xffffffffffffffff);
          if ((*(ulong *)(lVar18 + 0x38 + (uVar15 >> 6) * 8) >> (uVar15 & 0x3f) & 1) != 0) {
            local_c0 = ~uVar16;
            do {
              pSVar1 = (String *)(*(long *)(lVar18 + 0x30) + uVar15 * 0x10);
              if ((SVar26 == *pSVar1) ||
                 (UVar14.unknown = SVar26.str,
                 bVar6 = Swift::_stringCompareWithSmolCheck
                                   ((_StringGuts)pSVar1->str,(_StringGuts)pSVar1->bridgeObject,
                                    (_StringComparisonResult)(__int8)SVar26.str), bVar6)) {
                _swift_bridgeObjectRelease(local_d0);
                _swift_bridgeObjectRelease(pcVar13);
                goto LAB_1001168f8;
              }
              uVar15 = uVar15 + 1 & local_c0;
            } while ((*(ulong *)(lVar18 + 0x38 + (uVar15 >> 6) * 8) >> (uVar15 & 0x3f) & 1) != 0);
          }
        }
        _swift_bridgeObjectRelease(pcVar13);
        pvVar12 = local_d0;
        SVar5.bridgeObject = local_d0;
        SVar5.str = local_d8;
        UVar14.unknown = local_c8.unknown;
        Foundation::URLRequest::_setValue(SVar5,local_c8);
      }
      else {
        _swift_bridgeObjectRelease(pvVar11);
        pvVar11 = pvVar4;
      }
      _swift_bridgeObjectRelease(pvVar11);
      pvVar11 = pvVar12;
LAB_1001168f8:
      lVar18 = local_b0;
      _swift_bridgeObjectRelease(pvVar11);
    }
    bVar6 = SCARRY8(lVar25,1);
    lVar25 = lVar25 + 1;
    if (bVar6) {
                    /* WARNING: Does not return */
      pcVar20 = (code *)SoftwareBreakpoint(1,0x100116974);
      (*pcVar20)();
    }
    if (lVar25 < (long)(uVar17 + 0x3f >> 6)) {
      uVar19 = puVar21[lVar25];
      goto joined_r0x00010011677c;
    }
    _swift_release(lVar18);
  }
  return;
}



/* Address: 0x100116974 | FUN_100116974 */

void FUN_100116974(void)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  char *pcVar4;
  _StringGuts _Var5;
  undefined *puVar6;
  _StringGuts _Var7;
  String SVar8;
  code *pcVar9;
  bool bVar10;
  _SetStorage *this;
  long lVar11;
  Hasher into;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  undefined1 auStack_a8 [72];
  
  this = (_SetStorage *)&DAT_100fafe90;
  FUN_1000f7830(&DAT_100fafe90,&DAT_100c2e870);
  lVar11 = 4;
  Swift::_SetStorage::_allocate(this,4);
  lVar17 = 0;
  lVar1 = lVar11 + 0x38;
  do {
    pcVar4 = ((String *)(s_content_type_100fafe50 + lVar17 * 0x10))->str;
    puVar6 = *(undefined **)(s_content_type_100fafe50 + lVar17 * 0x10 + 8);
    SVar8 = *(String *)(s_content_type_100fafe50 + lVar17 * 0x10);
    Swift::Hasher::init(*(__int64 *)(lVar11 + 0x28));
    _swift_bridgeObjectRetain(puVar6);
    into.unknown = auStack_a8;
    Swift::String::hash(into,SVar8);
    uVar12 = Swift::Hasher::_finalize(into);
    uVar16 = -1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar12 = uVar12 & (uVar16 ^ 0xffffffffffffffff);
    uVar13 = uVar12 >> 6;
    uVar14 = *(ulong *)(lVar1 + uVar13 * 8);
    uVar15 = 1L << (uVar12 & 0x3f);
    if ((uVar15 & uVar14) != 0) {
      do {
        puVar2 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar12 * 0x10);
        _Var5.unknown = (undefined *)*puVar2;
        _Var7.unknown = (undefined *)puVar2[1];
        if ((_Var5.unknown == pcVar4 && _Var7.unknown == puVar6) ||
           (bVar10 = Swift::_stringCompareWithSmolCheck
                               (_Var5,_Var7,(_StringComparisonResult)(__int8)pcVar4), bVar10)) {
          _swift_bridgeObjectRelease(puVar6);
          goto LAB_1001169dc;
        }
        uVar12 = uVar12 + 1 & ~uVar16;
        uVar13 = uVar12 >> 6;
        uVar14 = *(ulong *)(lVar1 + uVar13 * 8);
        uVar15 = 1L << (uVar12 & 0x3f);
      } while ((uVar15 & uVar14) != 0);
    }
    *(ulong *)(lVar1 + uVar13 * 8) = uVar15 | uVar14;
    plVar3 = (long *)(*(long *)(lVar11 + 0x30) + uVar12 * 0x10);
    *plVar3 = (long)pcVar4;
    plVar3[1] = (long)puVar6;
    if (SCARRY8(*(long *)(lVar11 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x100116af4);
      (*pcVar9)();
    }
    *(long *)(lVar11 + 0x10) = *(long *)(lVar11 + 0x10) + 1;
LAB_1001169dc:
    lVar17 = lVar17 + 1;
    if (lVar17 == 4) {
      _swift_arrayDestroy(s_content_type_100fafe50,4,PTR___type_metadata_for_Swift_String_100eac208)
      ;
      DAT_100fafe20 = lVar11;
      return;
    }
  } while( true );
}



/* Address: 0x100116af4 | FUN_100116af4 */

void FUN_100116af4(URLRequest *param_1)

{
  void *pvVar1;
  long lVar2;
  bool bVar3;
  URL UVar4;
  URL UVar5;
  URLRequest_conflict UVar6;
  _StringGuts _Var8;
  URL in_x3;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar9;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar10;
  long unaff_x20;
  URLRequest *this;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  undefined auStack_a0 [8];
  code *local_98;
  URL local_90;
  undefined *puVar7;
  
  puVar7 = &DAT_100fae670;
  FUN_1000f7830(&DAT_100fae670,&DAT_100c2e0e8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  _Var8.unknown = auStack_a0 + -extraout_x8;
  UVar4 = Foundation::URL::typeMetadataAccessor();
  lVar10 = *(long *)(UVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar10 + 0x40));
  local_90.unknown = _Var8.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar11 = (long)(_Var8.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar13 = (undefined *)(lVar11 - extraout_x12_00);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar2 = PostHogConfig::host;
  lVar12 = *(long *)(unaff_x20 + 0x10);
  pcVar9 = *(code **)(lVar10 + 0x10);
  UVar5.unknown = puVar13;
  (*pcVar9)(puVar13,lVar12 + PostHogConfig::host,UVar4.unknown);
  SVar14 = Foundation::URL::get_absoluteString(UVar5);
  puVar7 = SVar14.bridgeObject;
  local_98 = *(code **)(lVar10 + 8);
  (*local_98)(puVar13,UVar4.unknown);
  if (SVar14.str == (char *)0xd000000000000018 && puVar7 == (undefined *)0x8000000100d922e0) {
LAB_100116c7c:
    _swift_bridgeObjectRelease(puVar7);
  }
  else {
    in_x3.unknown = puVar7;
    bVar3 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0xd000000000000018,(_StringGuts)0x8000000100d922e0,
                       (_StringComparisonResult)(__int8)SVar14.str);
    if (bVar3) goto LAB_100116c7c;
    if (SVar14.str == (char *)0xd000000000000018 && puVar7 == (undefined *)0x8000000100d92300) {
      _swift_bridgeObjectRelease(puVar7);
    }
    else {
      in_x3.unknown = puVar7;
      bVar3 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)0xd000000000000018,(_StringGuts)0x8000000100d92300,
                         (_StringComparisonResult)(__int8)SVar14.str);
      _swift_bridgeObjectRelease(puVar7);
      if (!bVar3) {
        (*pcVar9)(_Var8.unknown,lVar12 + lVar2,UVar4.unknown);
        in_x3 = UVar4;
        (**(code **)(lVar10 + 0x38))(_Var8.unknown,0,1);
        goto LAB_100116ca0;
      }
    }
  }
  Foundation::URL::_init();
LAB_100116ca0:
  puVar7 = _Var8.unknown;
  (**(code **)(lVar10 + 0x30))(_Var8.unknown,1,UVar4.unknown);
  bVar3 = (int)puVar7 != 1;
  if (bVar3) {
    UVar5 = UVar4;
    (**(code **)(lVar10 + 0x20))((long)puVar13 - extraout_x12_01);
    Swift::_StringGuts::grow(0x10,_Var8);
    _swift_bridgeObjectRelease(0xe000000000000000);
    pvVar1 = ((String *)(lVar12 + PostHogConfig::projectToken))->bridgeObject;
    SVar14 = *(String *)(lVar12 + PostHogConfig::projectToken);
    _swift_bridgeObjectRetain(pvVar1);
    SVar16.bridgeObject = in_x3.unknown;
    SVar16.str = UVar5.unknown;
    Swift::String::append(SVar14,SVar16);
    _swift_bridgeObjectRelease(pvVar1);
    SVar15.bridgeObject = &DAT_e700000000000000;
    SVar15.str = (char *)0x6769666e6f632f;
    SVar17.bridgeObject = in_x3.unknown;
    SVar17.str = UVar5.unknown;
    Swift::String::append(SVar15,SVar17);
    SVar14.bridgeObject = &DAT_e700000000000000;
    SVar14.str = (char *)0x2f79617272612f;
    Foundation::URL::appendingPathComponent(SVar14,UVar5);
    _swift_bridgeObjectRelease(&DAT_e700000000000000);
    UVar5.unknown = local_90.unknown;
    (*pcVar9)(local_90.unknown,lVar11,UVar4.unknown);
    Foundation::URLRequest::init(UVar5,(NSURLRequestCachePolicy)0x0,60.0);
    this = param_1;
    Foundation::URLRequest::_set_httpMethod(param_1);
    Foundation::URLRequest::set_timeoutInterval(this,10.0);
    FUN_100116520(param_1);
    pcVar9 = local_98;
    (*local_98)(lVar11,UVar4.unknown);
    (*pcVar9)((long)puVar13 - extraout_x12_01,UVar4.unknown);
  }
  else {
    FUN_1000fb4c4(_Var8.unknown,&DAT_100fae670,&DAT_100c2e0e8);
  }
  UVar6 = Foundation::URLRequest::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar6.unknown + -8) + 0x38))(param_1,!bVar3,1,UVar6.unknown);
  return;
}



/* Address: 0x100116ed4 | FUN_100116ed4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100117740) */
/* WARNING: Removing unreachable block (ram,0x000100117814) */
/* WARNING: Removing unreachable block (ram,0x0001001178b0) */

void FUN_100116ed4(undefined *param_1,code *param_2,undefined8 param_3,void *param_4)

{
  _CocoaArrayWrapper _Var1;
  ulong uVar2;
  undefined1 auVar3 [16];
  URLComponents UVar4;
  URL UVar5;
  long lVar6;
  URLComponents UVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined *puVar10;
  Date DVar11;
  NSDate *pNVar12;
  NSDictionary *pNVar13;
  Data DVar14;
  URLRequest_conflict UVar15;
  char *pcVar16;
  NSURLRequest *pNVar17;
  NSData *pNVar18;
  void *pvVar19;
  undefined8 extraout_x1;
  undefined8 uVar20;
  URLComponents UVar21;
  long extraout_x8;
  URLRequest *pUVar22;
  long extraout_x8_00;
  long lVar23;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar24;
  long extraout_x8_04;
  long lVar25;
  undefined *puVar26;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  URLComponents *this;
  URLRequest *this_00;
  long lVar27;
  ulong uVar28;
  ID IVar29;
  URLComponents *this_01;
  code *pcVar30;
  ulong uVar31;
  long lVar32;
  undefined *puVar33;
  undefined8 *puVar34;
  long lVar35;
  String SVar36;
  String SVar37;
  String SVar38;
  String SVar39;
  String SVar40;
  String SVar41;
  String SVar42;
  String separator;
  String separator_00;
  undefined8 auStack_220 [4];
  URLComponents UStack_200;
  undefined *local_1f8;
  URLRequest *local_1f0;
  long local_1e8;
  long local_1e0;
  undefined *puStack_1d8;
  undefined8 *local_1d0;
  code *local_1c8;
  URL local_1c0;
  long local_1b8;
  undefined *puStack_1b0;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined1 *puStack_160;
  String local_150;
  code *local_140;
  undefined *puStack_138;
  code *local_130;
  undefined *local_128;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  puStack_1b0 = (undefined *)Foundation::URLRequest::typeMetadataAccessor();
  local_1b8 = *(long *)(puStack_1b0 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_1b8 + 0x40));
  pUVar22 = (URLRequest *)((long)&UStack_200 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_1f0 = pUVar22;
  puStack_1d8 = (undefined *)Foundation::Date::typeMetadataAccessor();
  local_1e0 = *(long *)(puStack_1d8 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_1e0 + 0x40));
  lVar23 = (long)pUVar22 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar26 = &DAT_100fafe08;
  local_1e8 = lVar23;
  FUN_1000f7830(&DAT_100fafe08,&DAT_100c2e838);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar26 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar23 = lVar23 - extraout_x8_01;
  UVar4 = Foundation::URLComponents::typeMetadataAccessor();
  lVar35 = *(long *)(UVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar35 + 0x40));
  this_01 = (URLComponents *)(lVar23 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  puVar26 = &DAT_100fae670;
  FUN_1000f7830(&DAT_100fae670,&DAT_100c2e0e8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar26 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar24 = (long)this_01 - extraout_x8_03;
  UVar5 = Foundation::URL::typeMetadataAccessor();
  lVar32 = *(long *)(UVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar32 + 0x40));
  puVar26 = (undefined *)(lVar24 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0));
  local_1c0.unknown = puVar26;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar27 = (long)puVar26 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar25 = lVar27 - extraout_x12_00;
  local_1d0 = *(undefined8 **)(unaff_x20 + 0x10);
  local_1c8 = *(code **)(lVar32 + 0x10);
  (*local_1c8)(lVar27,(undefined *)((long)local_1d0 + PostHogConfig::host),UVar5.unknown);
  Foundation::URLComponents::_init(SUB81(lVar27,0));
  lVar6 = lVar23;
  (**(code **)(lVar35 + 0x30))(lVar23,1,UVar4.unknown);
  if ((int)lVar6 == 1) {
    pcVar30 = *(code **)(lVar32 + 8);
    (*pcVar30)(lVar27,UVar5.unknown);
    FUN_1000fb4c4(lVar23,&DAT_100fafe08,&DAT_100c2e838);
    (**(code **)(lVar32 + 0x38))(lVar24,1,1,UVar5.unknown);
  }
  else {
    UVar7.unknown = (undefined *)this_01;
    UVar21 = UVar4;
    (**(code **)(lVar35 + 0x20))(this_01,lVar23);
    local_150 = Foundation::URLComponents::get_path(UVar7);
    SVar38.bridgeObject = (void *)0xe100000000000000;
    SVar38.str = (char *)0x2f;
    SVar41.bridgeObject = param_4;
    SVar41.str = UVar21.unknown;
    Swift::String::append(SVar38,SVar41);
    uVar8 = 0x68637461622f;
    SVar36.bridgeObject = &DAT_e600000000000000;
    SVar36.str = (char *)0x68637461622f;
    SVar42.bridgeObject = param_4;
    SVar42.str = UVar21.unknown;
    Swift::String::append(SVar36,SVar42);
    pvVar19 = local_150.bridgeObject;
    local_168 = 0x2b2f;
    puStack_160 = &SUB_e200000000000000;
    local_178 = 0x2f;
    uStack_170 = 0xe100000000000000;
    FUN_1001013b8();
    *(undefined8 *)(lVar25 + -0x10) = uVar8;
    *(undefined8 *)(lVar25 + -8) = uVar8;
    *(undefined **)(lVar25 + -0x20) = PTR___type_metadata_for_Swift_String_100eac208;
    *(undefined8 *)(lVar25 + -0x18) = uVar8;
    SVar38 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                       (&local_168,&local_178,0x400,0,0,1,
                        PTR___type_metadata_for_Swift_String_100eac208,
                        PTR___type_metadata_for_Swift_String_100eac208);
    _swift_bridgeObjectRelease(pvVar19);
    this = this_01;
    Foundation::URLComponents::set_path(this_01,SVar38);
    UVar7.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    Foundation::URLComponents::_set_queryItems(this);
    Foundation::URLComponents::_get_url(UVar7);
    (**(code **)(lVar35 + 8))(this_01,UVar4.unknown);
    pcVar30 = *(code **)(lVar32 + 8);
    (*pcVar30)(lVar27,UVar5.unknown);
  }
  lVar6 = lVar24;
  (**(code **)(lVar32 + 0x30))(lVar24,1,UVar5.unknown);
  if ((int)lVar6 == 1) {
    FUN_1000fb4c4(lVar24,&DAT_100fae670,&DAT_100c2e0e8);
    if (DAT_101057340 == '\x01') {
      pcVar16 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      _swift_allocObject();
      pcVar16[0x18] = '\x02';
      pcVar16[0x19] = '\0';
      pcVar16[0x1a] = '\0';
      pcVar16[0x1b] = '\0';
      pcVar16[0x1c] = '\0';
      pcVar16[0x1d] = '\0';
      pcVar16[0x1e] = '\0';
      pcVar16[0x1f] = '\0';
      pcVar16[0x10] = '\x01';
      pcVar16[0x11] = '\0';
      pcVar16[0x12] = '\0';
      pcVar16[0x13] = '\0';
      pcVar16[0x14] = '\0';
      pcVar16[0x15] = '\0';
      pcVar16[0x16] = '\0';
      pcVar16[0x17] = '\0';
      *(undefined **)(pcVar16 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      pcVar16[0x20] = '$';
      pcVar16[0x21] = '\0';
      pcVar16[0x22] = '\0';
      pcVar16[0x23] = '\0';
      pcVar16[0x24] = '\0';
      pcVar16[0x25] = '\0';
      pcVar16[0x26] = '\0';
      pcVar16[0x27] = -0x30;
      pcVar16[0x28] = -0x80;
      pcVar16[0x29] = '\"';
      pcVar16[0x2a] = -0x27;
      pcVar16[0x2b] = '\0';
      pcVar16[0x2c] = '\x01';
      pcVar16[0x2d] = '\0';
      pcVar16[0x2e] = '\0';
      pcVar16[0x2f] = -0x80;
      SVar37.bridgeObject = (void *)0x20;
      SVar37.str = pcVar16;
      separator.bridgeObject = (void *)0xa;
      separator.str = (char *)0xe100000000000000;
      Swift::_print(SVar37,separator);
      _swift_release(pcVar16);
    }
    local_150._0_9_ = (unkuint9)1 << 0x40;
    local_140 = (code *)0x0;
    puStack_138 = (undefined *)0x0;
    local_130 = (code *)CONCAT71(local_130._1_7_,1);
    (*param_2)(&local_150);
    goto LAB_100117b24;
  }
  local_1f8 = UVar5.unknown;
  (**(code **)(lVar32 + 0x20))(lVar25,lVar24,UVar5.unknown);
  puVar26 = &DAT_100fae678;
  FUN_1000f7830(&DAT_100fae678,&DAT_100c2e190);
  _swift_initStackObject();
  puVar34 = (undefined8 *)(puVar26 + 0x20);
  *puVar34 = 0x79656b5f697061;
  *(undefined8 *)(puVar26 + 0x18) = 6;
  *(undefined8 *)(puVar26 + 0x10) = 3;
  *(undefined1 **)(puVar26 + 0x28) = &DAT_e700000000000000;
  puVar33 = PTR___type_metadata_for_Swift_String_100eac208;
  uVar8 = ((undefined8 *)((long)local_1d0 + PostHogConfig::projectToken))[1];
  *(undefined8 *)(puVar26 + 0x30) = *(undefined8 *)((long)local_1d0 + PostHogConfig::projectToken);
  *(undefined8 *)(puVar26 + 0x38) = uVar8;
  *(undefined **)(puVar26 + 0x48) = puVar33;
  *(undefined8 *)(puVar26 + 0x50) = 0x6863746162;
  *(undefined1 **)(puVar26 + 0x58) = &DAT_e500000000000000;
  if ((ulong)param_1 >> 0x3e == 0) {
    uVar28 = *(ulong *)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
    if (uVar28 != 0) goto LAB_100117400;
LAB_1001174fc:
    _swift_bridgeObjectRetain(uVar8);
    pcVar16 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    _Var1.unknown = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      _Var1.unknown = param_1;
    }
    uVar28 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    if (uVar28 == 0) goto LAB_1001174fc;
LAB_100117400:
    local_150.str = PTR___swiftEmptyArrayStorage_100eae0d8;
    _swift_bridgeObjectRetain(uVar8);
    FUN_10010f9b0(0,uVar28 & ((long)uVar28 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar28 < 0) {
                    /* WARNING: Does not return */
      pcVar30 = (code *)SoftwareBreakpoint(1,0x100117b78);
      (*pcVar30)();
    }
    uVar31 = 0;
    pcVar16 = local_150.str;
    local_1d0 = puVar34;
    do {
      if (((ulong)param_1 & 0xc000000000000001) == 0) {
        uVar9 = *(ulong *)(param_1 + uVar31 * 8 + 0x20);
      }
      else {
        uVar9 = uVar31;
        FUN_10010f2a0();
      }
      FUN_100114178();
      local_150.str = pcVar16;
      uVar2 = *(ulong *)(pcVar16 + 0x10);
      if (*(ulong *)(pcVar16 + 0x18) >> 1 <= uVar2) {
        FUN_10010f9b0(1 < *(ulong *)(pcVar16 + 0x18),uVar2 + 1,1);
        pcVar16 = local_150.str;
      }
      uVar31 = uVar31 + 1;
      *(ulong *)(pcVar16 + 0x10) = uVar2 + 1;
      *(ulong *)(pcVar16 + uVar2 * 8 + 0x20) = uVar9;
      puVar33 = PTR___type_metadata_for_Swift_String_100eac208;
      puVar34 = local_1d0;
    } while (uVar28 != uVar31);
  }
  puVar10 = &DAT_100fae868;
  FUN_1000f7830(&DAT_100fae868,&DAT_100c2e2f0);
  lVar6 = local_1e8;
  *(char **)(puVar26 + 0x60) = pcVar16;
  *(undefined **)(puVar26 + 0x78) = puVar10;
  *(undefined8 *)(puVar26 + 0x80) = 0x74615f746e6573;
  *(undefined1 **)(puVar26 + 0x88) = &DAT_e700000000000000;
  DVar11 = Foundation::Date::init();
  if (DAT_100fb2a00 != -1) {
    DVar11.unknown = (undefined *)&DAT_100fb2a00;
    _swift_once(&DAT_100fb2a00,FUN_10016e594);
  }
  IVar29 = *(ID *)(DAT_101057338 + 0x10);
  pNVar12 = Foundation::Date::_bridgeToObjectiveC(DVar11);
  objc_stub::stringFromDate_(IVar29,pNVar12);
  SVar38 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  (**(code **)(local_1e0 + 8))(lVar6,puStack_1d8);
  *(undefined **)(puVar26 + 0xa8) = puVar33;
  *(String *)(puVar26 + 0x90) = SVar38;
  puVar10 = puVar26;
  FUN_1000f8154(puVar26);
  _swift_setDeallocating(puVar26);
  puVar26 = &DAT_100fae490;
  FUN_1000f7830(&DAT_100fae490,&DAT_100c2de60);
  _swift_arrayDestroy(puVar34,3,puVar26);
  pNVar13 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(puVar10);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_150.bridgeObject;
  local_150 = (String)(auVar3 << 0x40);
  DVar14.unknown =
       (undefined *)
       NSJSONSerialization::dataWithJSONObject_options_error_
                 (&_OBJC_CLASS___NSJSONSerialization,pNVar13,0,&local_150);
  if (DVar14.unknown == (undefined *)0x0) {
    pcVar16 = local_150.str;
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    _swift_errorRelease(pcVar16);
    puVar26 = local_1f8;
    if (DAT_101057340 == '\x01') {
      pcVar16 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      _swift_allocObject();
      pcVar16[0x18] = '\x02';
      pcVar16[0x19] = '\0';
      pcVar16[0x1a] = '\0';
      pcVar16[0x1b] = '\0';
      pcVar16[0x1c] = '\0';
      pcVar16[0x1d] = '\0';
      pcVar16[0x1e] = '\0';
      pcVar16[0x1f] = '\0';
      pcVar16[0x10] = '\x01';
      pcVar16[0x11] = '\0';
      pcVar16[0x12] = '\0';
      pcVar16[0x13] = '\0';
      pcVar16[0x14] = '\0';
      pcVar16[0x15] = '\0';
      pcVar16[0x16] = '\0';
      pcVar16[0x17] = '\0';
      *(undefined **)(pcVar16 + 0x38) = puVar33;
      pcVar16[0x20] = '&';
      pcVar16[0x21] = '\0';
      pcVar16[0x22] = '\0';
      pcVar16[0x23] = '\0';
      pcVar16[0x24] = '\0';
      pcVar16[0x25] = '\0';
      pcVar16[0x26] = '\0';
      pcVar16[0x27] = -0x30;
      pcVar16[0x28] = -0x50;
      pcVar16[0x29] = '\"';
      pcVar16[0x2a] = -0x27;
      pcVar16[0x2b] = '\0';
      pcVar16[0x2c] = '\x01';
      pcVar16[0x2d] = '\0';
      pcVar16[0x2e] = '\0';
      pcVar16[0x2f] = -0x80;
      SVar40.bridgeObject = (void *)0x20;
      SVar40.str = pcVar16;
      separator_00.bridgeObject = (void *)0xa;
      separator_00.str = (char *)0xe100000000000000;
      Swift::_print(SVar40,separator_00);
      _swift_release(pcVar16);
    }
    local_150._0_9_ = (unkuint9)1 << 0x40;
    local_140 = (code *)0x0;
    puStack_138 = (undefined *)0x0;
    local_130 = (code *)CONCAT71(local_130._1_7_,1);
    (*param_2)(&local_150);
  }
  else {
    uVar8 = extraout_x1;
    DVar14 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar14);
    UVar5.unknown = local_1c0.unknown;
    (*local_1c8)(local_1c0.unknown,lVar25,local_1f8);
    pUVar22 = local_1f0;
    Foundation::URLRequest::init(UVar5,(NSURLRequestCachePolicy)0x0,60.0);
    this_00 = pUVar22;
    Foundation::URLRequest::_set_httpMethod(pUVar22);
    Foundation::URLRequest::set_timeoutInterval(this_00,10.0);
    FUN_100116520(pUVar22);
    SVar39.bridgeObject = &DAT_e400000000000000;
    SVar39.str = (char *)0x70697a67;
    Foundation::URLRequest::_setValue(SVar39,(URLRequest_conflict)0xd000000000000010);
    UVar15.unknown = (undefined *)0xffffffff;
    uVar20 = 0x1f;
    FUN_10016cd60(0xffffffff,0x1f);
    IVar29 = *(ID *)(unaff_x20 + 0x28);
    local_1d0 = (undefined8 *)DVar14;
    pNVar17 = Foundation::URLRequest::_bridgeToObjectiveC(UVar15);
    pNVar18 = Foundation::Data::_bridgeToObjectiveC((Data)UVar15.unknown);
    puVar26 = &DAT_100eb8040;
    _swift_allocObject(&DAT_100eb8040,0x20,7);
    *(code **)(puVar26 + 0x10) = param_2;
    *(undefined8 *)(puVar26 + 0x18) = param_3;
    local_130 = FUN_10011de58;
    local_150.bridgeObject = (void *)0x42000000;
    local_150.str = PTR___NSConcreteStackBlock_100ea82a0;
    local_140 = FUN_100117b7c;
    puStack_138 = &DAT_100eb8058;
    local_128 = puVar26;
    pvVar19 = __Block_copy(&local_150);
    puVar26 = local_128;
    _swift_retain(param_3);
    _swift_release(puVar26);
    IVar29 = objc_stub::uploadTaskWithRequest_fromData_completionHandler_
                       (IVar29,pNVar17,pNVar18,pvVar19);
    __Block_release(pvVar19);
    objc_stub::resume(IVar29);
    FUN_10003bf2c(UVar15.unknown,uVar20);
    FUN_10003bf2c(local_1d0,uVar8);
    (**(code **)(local_1b8 + 8))(pUVar22,puStack_1b0);
    puVar26 = local_1f8;
  }
  (*pcVar30)(lVar25,puVar26);
LAB_100117b24:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100117b7c | FUN_100117b7c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100117b7c(long param_1,Data param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  Data DVar3;
  Data DVar4;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_2.unknown == (undefined *)0x0) {
    _swift_retain(uVar2);
    DVar4.unknown = (undefined *)0xf000000000000000;
    DVar3.unknown = (undefined *)0x0;
  }
  else {
    DVar4.unknown = param_2.unknown;
    _swift_retain(uVar2);
    DVar3 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(param_2);
  }
  (*pcVar1)(DVar3.unknown,DVar4.unknown,param_3,param_4);
  FUN_10003bf18(DVar3.unknown,DVar4.unknown);
  _swift_release(uVar2);
  return;
}



/* Address: 0x100117c44 | FUN_100117c44 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100118418) */
/* WARNING: Removing unreachable block (ram,0x0001001184e8) */
/* WARNING: Removing unreachable block (ram,0x000100118578) */

void FUN_100117c44(undefined *param_1,code *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  _CocoaArrayWrapper _Var3;
  ulong uVar4;
  undefined1 auVar5 [16];
  URL url;
  URLComponents UVar6;
  URLComponents UVar7;
  URLComponents UVar8;
  char *pcVar9;
  ulong uVar10;
  NSArray *pNVar11;
  Data DVar12;
  URLRequest_conflict UVar13;
  NSURLRequest *pNVar14;
  NSData *pNVar15;
  void *pvVar16;
  URLComponents *extraout_x1;
  undefined8 uVar17;
  void *pvVar18;
  long extraout_x8;
  URLRequest *pUVar19;
  long extraout_x8_00;
  long extraout_x8_01;
  URLComponents *pUVar20;
  long extraout_x8_02;
  long lVar21;
  long extraout_x8_03;
  long lVar22;
  undefined *puVar23;
  long extraout_x12;
  long extraout_x12_00;
  ulong uVar24;
  long unaff_x20;
  long lVar25;
  code *pcVar26;
  URLComponents *this;
  URLRequest *this_00;
  long lVar27;
  long lVar28;
  undefined8 uVar29;
  ulong uVar30;
  long lVar31;
  long *plVar32;
  ID IVar33;
  long lVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  String SVar38;
  String SVar39;
  String SVar40;
  String SVar41;
  String separator;
  String separator_00;
  undefined8 auStack_180 [4];
  URLComponents local_160;
  undefined *local_158;
  long local_150;
  URLRequest *local_148;
  long local_140;
  char *local_138;
  URLComponents *local_130;
  code *local_128;
  URL local_120;
  long local_118;
  undefined *local_110;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined1 *puStack_c8;
  String local_b8;
  code *local_a8;
  undefined *puStack_a0;
  code *local_98;
  undefined *local_90;
  undefined1 auStack_88 [24];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_110 = (undefined *)Foundation::URLRequest::typeMetadataAccessor();
  local_118 = *(long *)(local_110 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_118 + 0x40));
  pUVar19 = (URLRequest *)((long)&local_160 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar23 = &DAT_100fafe08;
  local_148 = pUVar19;
  FUN_1000f7830(&DAT_100fafe08,&DAT_100c2e838);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar23 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar31 = (long)pUVar19 - extraout_x8_00;
  UVar6 = Foundation::URLComponents::typeMetadataAccessor();
  lVar28 = *(long *)(UVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar28 + 0x40));
  pUVar20 = (URLComponents *)(lVar31 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  puVar23 = &DAT_100fae670;
  local_130 = pUVar20;
  FUN_1000f7830(&DAT_100fae670,&DAT_100c2e0e8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar23 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar21 = (long)pUVar20 - extraout_x8_02;
  UVar7.unknown = (undefined *)Foundation::URL::typeMetadataAccessor();
  lVar27 = *(long *)(UVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar27 + 0x40));
  puVar23 = (undefined *)(lVar21 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0));
  local_120.unknown = puVar23;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar34 = (long)puVar23 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar22 = lVar34 - extraout_x12_00;
  lVar25 = *(long *)(unaff_x20 + 0x10);
  puVar1 = (undefined8 *)(lVar25 + PostHogConfig::snapshotEndpoint);
  pvVar18 = (void *)0x0;
  _swift_beginAccess(puVar1,auStack_88,0);
  local_138 = (char *)*puVar1;
  pvVar16 = (void *)puVar1[1];
  local_128 = *(code **)(lVar27 + 0x10);
  local_140 = lVar25;
  (*local_128)(lVar34,lVar25 + PostHogConfig::host,UVar7.unknown);
  _swift_bridgeObjectRetain(pvVar16);
  Foundation::URLComponents::_init(SUB81(lVar34,0));
  lVar25 = lVar31;
  (**(code **)(lVar28 + 0x30))(lVar31,1,UVar6.unknown);
  pUVar20 = local_130;
  if ((int)lVar25 == 1) {
    _swift_bridgeObjectRelease(pvVar16);
    pcVar26 = *(code **)(lVar27 + 8);
    (*pcVar26)(lVar34,UVar7.unknown);
    FUN_1000fb4c4(lVar31,&DAT_100fafe08,&DAT_100c2e838);
    (**(code **)(lVar27 + 0x38))(lVar21,1,1,UVar7.unknown);
  }
  else {
    UVar8.unknown = (undefined *)local_130;
    local_158 = UVar6.unknown;
    local_150 = lVar28;
    (**(code **)(lVar28 + 0x20))(local_130,lVar31);
    local_b8 = Foundation::URLComponents::get_path(UVar8);
    SVar36.bridgeObject = (void *)0xe100000000000000;
    SVar36.str = (char *)0x2f;
    SVar40.bridgeObject = pvVar18;
    SVar40.str = UVar6.unknown;
    Swift::String::append(SVar36,SVar40);
    SVar35.bridgeObject = pvVar16;
    SVar35.str = local_138;
    SVar41.bridgeObject = pvVar18;
    SVar41.str = UVar6.unknown;
    pcVar9 = local_138;
    Swift::String::append(SVar35,SVar41);
    pvVar18 = local_b8.bridgeObject;
    local_d0 = 0x2b2f;
    puStack_c8 = &SUB_e200000000000000;
    local_e0 = 0x2f;
    uStack_d8 = 0xe100000000000000;
    FUN_1001013b8();
    *(char **)(lVar22 + -0x10) = pcVar9;
    *(char **)(lVar22 + -8) = pcVar9;
    *(undefined **)(lVar22 + -0x20) = PTR___type_metadata_for_Swift_String_100eac208;
    *(char **)(lVar22 + -0x18) = pcVar9;
    SVar36 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                       (&local_d0,&local_e0,0x400,0,0,1,
                        PTR___type_metadata_for_Swift_String_100eac208,
                        PTR___type_metadata_for_Swift_String_100eac208);
    _swift_bridgeObjectRelease(pvVar18);
    this = pUVar20;
    Foundation::URLComponents::set_path(pUVar20,SVar36);
    UVar6.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    Foundation::URLComponents::_set_queryItems(this);
    Foundation::URLComponents::_get_url(UVar6);
    _swift_bridgeObjectRelease(pvVar16);
    (**(code **)(local_150 + 8))(pUVar20,local_158);
    pcVar26 = *(code **)(lVar27 + 8);
    (*pcVar26)(lVar34,UVar7.unknown);
  }
  lVar25 = lVar21;
  (**(code **)(lVar27 + 0x30))(lVar21,1,UVar7.unknown);
  if ((int)lVar25 == 1) {
    FUN_1000fb4c4(lVar21,&DAT_100fae670,&DAT_100c2e0e8);
    if (DAT_101057340 == '\x01') {
      pcVar9 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
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
      *(undefined **)(pcVar9 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      pcVar9[0x20] = '\'';
      pcVar9[0x21] = '\0';
      pcVar9[0x22] = '\0';
      pcVar9[0x23] = '\0';
      pcVar9[0x24] = '\0';
      pcVar9[0x25] = '\0';
      pcVar9[0x26] = '\0';
      pcVar9[0x27] = -0x30;
      pcVar9[0x28] = ' ';
      pcVar9[0x29] = '\"';
      pcVar9[0x2a] = -0x27;
      pcVar9[0x2b] = '\0';
      pcVar9[0x2c] = '\x01';
      pcVar9[0x2d] = '\0';
      pcVar9[0x2e] = '\0';
      pcVar9[0x2f] = -0x80;
      SVar37.bridgeObject = (void *)0x20;
      SVar37.str = pcVar9;
      separator.bridgeObject = (void *)0xa;
      separator.str = (char *)0xe100000000000000;
      Swift::_print(SVar37,separator);
      _swift_release(pcVar9);
    }
    local_b8._0_9_ = (unkuint9)1 << 0x40;
    local_a8 = (code *)0x0;
    puStack_a0 = (undefined *)0x0;
    local_98 = (code *)CONCAT71(local_98._1_7_,1);
    (*param_2)(&local_b8);
  }
  else {
    (**(code **)(lVar27 + 0x20))(lVar22,lVar21,UVar7.unknown);
    if ((ulong)param_1 >> 0x3e == 0) {
      lVar25 = *(long *)((undefined *)((ulong)param_1 & 0xffffffffffffff8) + 0x10);
    }
    else {
      _Var3.unknown = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
      if (((ulong)param_1 & 0x8000000000000000) != 0) {
        _Var3.unknown = param_1;
      }
      lVar25 = Swift::_CocoaArrayWrapper::get_endIndex(_Var3);
    }
    if (lVar25 != 0) {
      if (lVar25 < 1) {
                    /* WARNING: Does not return */
        pcVar26 = (code *)SoftwareBreakpoint(1,0x100118860);
        (*pcVar26)();
      }
      puVar1 = (undefined8 *)(local_140 + PostHogConfig::projectToken);
      if (((ulong)param_1 & 0xc000000000000001) == 0) {
        plVar32 = (long *)(param_1 + 0x20);
        do {
          uVar17 = puVar1[1];
          puVar2 = (undefined8 *)(*plVar32 + PostHogEvent::apiKey);
          uVar29 = puVar2[1];
          *puVar2 = *puVar1;
          puVar2[1] = uVar17;
          _swift_bridgeObjectRetain(uVar17);
          _swift_bridgeObjectRelease(uVar29);
          lVar25 = lVar25 + -1;
          plVar32 = plVar32 + 1;
        } while (lVar25 != 0);
      }
      else {
        lVar21 = 0;
        do {
          lVar27 = lVar21;
          FUN_10010f2a0(lVar21,param_1);
          lVar21 = lVar21 + 1;
          uVar17 = puVar1[1];
          puVar2 = (undefined8 *)(lVar27 + PostHogEvent::apiKey);
          uVar29 = puVar2[1];
          *puVar2 = *puVar1;
          puVar2[1] = uVar17;
          _swift_bridgeObjectRetain();
          _swift_unknownObjectRelease(lVar27);
          _swift_bridgeObjectRelease(uVar29);
        } while (lVar25 != lVar21);
      }
    }
    if ((ulong)param_1 >> 0x3e == 0) {
      uVar24 = *(ulong *)((undefined *)((ulong)param_1 & 0xffffffffffffff8) + 0x10);
    }
    else {
      _Var3.unknown = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
      if (((ulong)param_1 & 0x8000000000000000) != 0) {
        _Var3.unknown = param_1;
      }
      uVar24 = Swift::_CocoaArrayWrapper::get_endIndex(_Var3);
    }
    pcVar9 = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (uVar24 != 0) {
      local_b8.str = PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_10010f9b0(0,uVar24 & ((long)uVar24 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar24 < 0) {
                    /* WARNING: Does not return */
        pcVar26 = (code *)SoftwareBreakpoint(1,0x100118864);
        (*pcVar26)();
      }
      uVar30 = 0;
      pcVar9 = local_b8.str;
      do {
        if (((ulong)param_1 & 0xc000000000000001) == 0) {
          uVar10 = *(ulong *)(param_1 + uVar30 * 8 + 0x20);
        }
        else {
          uVar10 = uVar30;
          FUN_10010f2a0(uVar30,param_1);
        }
        FUN_100114178();
        local_b8.str = pcVar9;
        uVar4 = *(ulong *)(pcVar9 + 0x10);
        if (*(ulong *)(pcVar9 + 0x18) >> 1 <= uVar4) {
          FUN_10010f9b0(1 < *(ulong *)(pcVar9 + 0x18),uVar4 + 1,1);
          pcVar9 = local_b8.str;
        }
        uVar30 = uVar30 + 1;
        *(ulong *)(pcVar9 + 0x10) = uVar4 + 1;
        *(ulong *)(pcVar9 + uVar4 * 8 + 0x20) = uVar10;
      } while (uVar24 != uVar30);
    }
    FUN_1000f7830(&DAT_100fae898,&DAT_100c2e4e0);
    pNVar11 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(pcVar9);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = local_b8.bridgeObject;
    local_b8 = (String)(auVar5 << 0x40);
    DVar12.unknown =
         (undefined *)
         NSJSONSerialization::dataWithJSONObject_options_error_
                   (&_OBJC_CLASS___NSJSONSerialization,pNVar11,0,&local_b8);
    if (DVar12.unknown == (undefined *)0x0) {
      pcVar9 = local_b8.str;
      Foundation::__convertNSErrorToError();
      _swift_willThrow(0);
      _swift_errorRelease(pcVar9);
      if (DAT_101057340 == '\x01') {
        pcVar9 = &DAT_100fae660;
        FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
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
        *(undefined **)(pcVar9 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
        pcVar9[0x20] = ')';
        pcVar9[0x21] = '\0';
        pcVar9[0x22] = '\0';
        pcVar9[0x23] = '\0';
        pcVar9[0x24] = '\0';
        pcVar9[0x25] = '\0';
        pcVar9[0x26] = '\0';
        pcVar9[0x27] = -0x30;
        pcVar9[0x28] = 'P';
        pcVar9[0x29] = '\"';
        pcVar9[0x2a] = -0x27;
        pcVar9[0x2b] = '\0';
        pcVar9[0x2c] = '\x01';
        pcVar9[0x2d] = '\0';
        pcVar9[0x2e] = '\0';
        pcVar9[0x2f] = -0x80;
        SVar39.bridgeObject = (void *)0x20;
        SVar39.str = pcVar9;
        separator_00.bridgeObject = (void *)0xa;
        separator_00.str = (char *)0xe100000000000000;
        Swift::_print(SVar39,separator_00);
        _swift_release(pcVar9);
      }
      local_b8._0_9_ = (unkuint9)1 << 0x40;
      local_a8 = (code *)0x0;
      puStack_a0 = (undefined *)0x0;
      local_98 = (code *)CONCAT71(local_98._1_7_,1);
      (*param_2)(&local_b8);
    }
    else {
      pUVar20 = extraout_x1;
      DVar12 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar12);
      url.unknown = local_120.unknown;
      (*local_128)(local_120.unknown,lVar22,UVar7.unknown);
      pUVar19 = local_148;
      Foundation::URLRequest::init(url,(NSURLRequestCachePolicy)0x0,60.0);
      this_00 = pUVar19;
      Foundation::URLRequest::_set_httpMethod(pUVar19);
      Foundation::URLRequest::set_timeoutInterval(this_00,10.0);
      FUN_100116520(pUVar19);
      SVar38.bridgeObject = &DAT_e400000000000000;
      SVar38.str = (char *)0x70697a67;
      Foundation::URLRequest::_setValue(SVar38,(URLRequest_conflict)0xd000000000000010);
      UVar13.unknown = (undefined *)0xffffffff;
      uVar17 = 0x1f;
      FUN_10016cd60(0xffffffff,0x1f);
      IVar33 = *(ID *)(unaff_x20 + 0x28);
      local_160.unknown = UVar7.unknown;
      local_130 = pUVar20;
      pNVar14 = Foundation::URLRequest::_bridgeToObjectiveC(UVar13);
      pNVar15 = Foundation::Data::_bridgeToObjectiveC((Data)UVar13.unknown);
      puVar23 = &DAT_100eb7ff0;
      _swift_allocObject(&DAT_100eb7ff0,0x20,7);
      *(code **)(puVar23 + 0x10) = param_2;
      *(undefined8 *)(puVar23 + 0x18) = param_3;
      local_98 = FUN_10011de2c;
      local_b8.bridgeObject = (void *)0x42000000;
      local_b8.str = PTR___NSConcreteStackBlock_100ea82a0;
      local_a8 = FUN_100117b7c;
      puStack_a0 = &DAT_100eb8008;
      local_90 = puVar23;
      pvVar16 = __Block_copy(&local_b8);
      puVar23 = local_90;
      _swift_retain(param_3);
      _swift_release(puVar23);
      IVar33 = objc_stub::uploadTaskWithRequest_fromData_completionHandler_
                         (IVar33,pNVar14,pNVar15,pvVar16);
      __Block_release(pvVar16);
      objc_stub::resume(IVar33);
      FUN_10003bf2c(UVar13.unknown,uVar17);
      FUN_10003bf2c(DVar12.unknown,local_130);
      (**(code **)(local_118 + 8))(pUVar19,local_110);
      UVar7.unknown = local_160.unknown;
    }
    (*pcVar26)(lVar22,UVar7.unknown);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x100118868 | FUN_100118868 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100118f3c) */
/* WARNING: Removing unreachable block (ram,0x000100118ffc) */
/* WARNING: Removing unreachable block (ram,0x00010011908c) */

void FUN_100118868(code *param_1,code *param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  URL url;
  URLComponents UVar2;
  URL UVar3;
  URLQueryItem UVar4;
  URLComponents UVar5;
  NSDictionary *pNVar6;
  Data DVar7;
  URLRequest_conflict UVar8;
  char *pcVar9;
  NSURLRequest *pNVar10;
  NSData *pNVar11;
  void *pvVar12;
  URLComponents *extraout_x1;
  undefined8 uVar13;
  URLComponents UVar14;
  void *pvVar15;
  long extraout_x8;
  URLRequest *pUVar16;
  long extraout_x8_00;
  long extraout_x8_01;
  URLComponents *pUVar17;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar18;
  ulong uVar19;
  undefined *puVar20;
  long lVar21;
  long lVar22;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar23;
  long unaff_x20;
  long lVar24;
  URLComponents *this;
  URLRequest *this_00;
  long lVar25;
  ID IVar26;
  long lVar27;
  code *pcVar28;
  URLComponents UVar29;
  long lVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  String separator;
  String separator_00;
  undefined8 auStack_170 [4];
  URLComponents local_150;
  URLRequest *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  URLComponents *local_128;
  code *local_120;
  URL local_118;
  long local_110;
  undefined *puStack_108;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined1 *puStack_b0;
  String local_a0;
  code *local_90;
  undefined *puStack_88;
  code *local_80;
  undefined *local_78;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_120 = param_1;
  puStack_108 = (undefined *)Foundation::URLRequest::typeMetadataAccessor();
  local_110 = *(long *)(puStack_108 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_110 + 0x40));
  pUVar16 = (URLRequest *)((long)&local_150 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar20 = &DAT_100fafe08;
  local_148 = pUVar16;
  FUN_1000f7830(&DAT_100fafe08,&DAT_100c2e838);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar20 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar30 = (long)pUVar16 - extraout_x8_00;
  UVar2 = Foundation::URLComponents::typeMetadataAccessor();
  lVar25 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar25 + 0x40));
  pUVar17 = (URLComponents *)(lVar30 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  local_128 = pUVar17;
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar23 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar23 + 0x40));
  puVar20 = (undefined *)((long)pUVar17 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  local_118.unknown = puVar20;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar21 = (long)puVar20 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar24 = lVar21 - extraout_x12_00;
  puVar20 = &DAT_100fae670;
  FUN_1000f7830(&DAT_100fae670,&DAT_100c2e0e8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar20 + -8) + 0x40));
  lVar22 = lVar24 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar18 = lVar22 - extraout_x12_01;
  puVar20 = &DAT_100fafe10;
  FUN_1000f7830(&DAT_100fafe10,&DAT_100c2e840);
  UVar4 = Foundation::URLQueryItem::typeMetadataAccessor();
  uVar19 = (ulong)*(byte *)(*(long *)(UVar4.unknown + -8) + 0x50);
  _swift_allocObject(puVar20,(uVar19 + 0x20 & (uVar19 ^ 0xffffffffffffffff)) +
                             *(long *)(*(long *)(UVar4.unknown + -8) + 0x48),uVar19 | 7);
  uStack_138 = 2;
  local_140 = 1;
  *(undefined8 *)(puVar20 + 0x18) = 2;
  *(undefined8 *)(puVar20 + 0x10) = 1;
  lVar27 = *(long *)(unaff_x20 + 0x10);
  pvVar12 = *(void **)(lVar27 + PostHogConfig::projectToken + 8);
  _swift_bridgeObjectRetain(pvVar12);
  pvVar15 = pvVar12;
  Foundation::URLQueryItem::_init();
  _swift_bridgeObjectRelease(pvVar12);
  UVar29.unknown = *(undefined **)(lVar23 + 0x10);
  (*(code *)UVar29.unknown)(lVar24,lVar27 + PostHogConfig::host,UVar3.unknown);
  Foundation::URLComponents::_init(SUB81(lVar24,0));
  lVar27 = lVar30;
  (**(code **)(lVar25 + 0x30))(lVar30,1,UVar2.unknown);
  pUVar17 = local_128;
  if ((int)lVar27 == 1) {
    _swift_release(puVar20);
    pcVar28 = *(code **)(lVar23 + 8);
    (*pcVar28)(lVar24,UVar3.unknown);
    FUN_1000fb4c4(lVar30,&DAT_100fafe08,&DAT_100c2e838);
    (**(code **)(lVar23 + 0x38))(lVar18,1,1,UVar3.unknown);
  }
  else {
    UVar5.unknown = (undefined *)local_128;
    UVar14 = UVar2;
    local_150.unknown = UVar29.unknown;
    (**(code **)(lVar25 + 0x20))(local_128,lVar30);
    local_a0 = Foundation::URLComponents::get_path(UVar5);
    SVar32.bridgeObject = (void *)0xe100000000000000;
    SVar32.str = (char *)0x2f;
    SVar36.bridgeObject = pvVar15;
    SVar36.str = UVar14.unknown;
    Swift::String::append(SVar32,SVar36);
    uVar13 = 0x6f6c2f31762f692f;
    SVar31.bridgeObject = (void *)0xea00000000007367;
    SVar31.str = (char *)0x6f6c2f31762f692f;
    SVar37.bridgeObject = pvVar15;
    SVar37.str = UVar14.unknown;
    Swift::String::append(SVar31,SVar37);
    pvVar12 = local_a0.bridgeObject;
    local_b8 = 0x2b2f;
    puStack_b0 = &SUB_e200000000000000;
    local_c8 = 0x2f;
    uStack_c0 = 0xe100000000000000;
    FUN_1001013b8();
    *(undefined8 *)(lVar18 + -0x10) = uVar13;
    *(undefined8 *)(lVar18 + -8) = uVar13;
    *(undefined **)(lVar18 + -0x20) = PTR___type_metadata_for_Swift_String_100eac208;
    *(undefined8 *)(lVar18 + -0x18) = uVar13;
    SVar32 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                       (&local_b8,&local_c8,0x400,0,0,1,
                        PTR___type_metadata_for_Swift_String_100eac208,
                        PTR___type_metadata_for_Swift_String_100eac208);
    _swift_bridgeObjectRelease(pvVar12);
    this = pUVar17;
    Foundation::URLComponents::set_path(pUVar17,SVar32);
    UVar29.unknown = puVar20;
    _swift_bridgeObjectRetain();
    Foundation::URLComponents::_set_queryItems(this);
    Foundation::URLComponents::_get_url(UVar29);
    _swift_release(puVar20);
    UVar29.unknown = local_150.unknown;
    (**(code **)(lVar25 + 8))(pUVar17,UVar2.unknown);
    pcVar28 = *(code **)(lVar23 + 8);
    (*pcVar28)(lVar24,UVar3.unknown);
  }
  FUN_1000f8cac(lVar18,lVar22,&DAT_100fae670,&DAT_100c2e0e8);
  lVar27 = lVar22;
  (**(code **)(lVar23 + 0x30))(lVar22,1,UVar3.unknown);
  if ((int)lVar27 == 1) {
    FUN_1000fb4c4(lVar22,&DAT_100fae670,&DAT_100c2e0e8);
    if (DAT_101057340 == '\x01') {
      pcVar9 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      _swift_allocObject();
      *(undefined8 *)(pcVar9 + 0x18) = uStack_138;
      *(undefined8 *)(pcVar9 + 0x10) = local_140;
      *(undefined **)(pcVar9 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      pcVar9[0x20] = '#';
      pcVar9[0x21] = '\0';
      pcVar9[0x22] = '\0';
      pcVar9[0x23] = '\0';
      pcVar9[0x24] = '\0';
      pcVar9[0x25] = '\0';
      pcVar9[0x26] = '\0';
      pcVar9[0x27] = -0x30;
      pcVar9[0x28] = -0x40;
      pcVar9[0x29] = '!';
      pcVar9[0x2a] = -0x27;
      pcVar9[0x2b] = '\0';
      pcVar9[0x2c] = '\x01';
      pcVar9[0x2d] = '\0';
      pcVar9[0x2e] = '\0';
      pcVar9[0x2f] = -0x80;
      SVar33.bridgeObject = (void *)0x20;
      SVar33.str = pcVar9;
      separator.bridgeObject = (void *)0xa;
      separator.str = (char *)0xe100000000000000;
      Swift::_print(SVar33,separator);
      _swift_release(pcVar9);
    }
    local_a0._0_9_ = (unkuint9)1 << 0x40;
    local_90 = (code *)0x0;
    puStack_88 = (undefined *)0x0;
    local_80 = (code *)CONCAT71(local_80._1_7_,1);
    (*param_2)(&local_a0);
  }
  else {
    (**(code **)(lVar23 + 0x20))(lVar21,lVar22,UVar3.unknown);
    puVar20 = PTR___type_metadata_for_Swift_String_100eac208;
    pNVar6 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_a0.bridgeObject;
    local_a0 = (String)(auVar1 << 0x40);
    DVar7.unknown =
         (undefined *)
         NSJSONSerialization::dataWithJSONObject_options_error_
                   (&_OBJC_CLASS___NSJSONSerialization,pNVar6,0,&local_a0);
    if (DVar7.unknown == (undefined *)0x0) {
      pcVar9 = local_a0.str;
      Foundation::__convertNSErrorToError();
      _swift_willThrow(0);
      _swift_errorRelease(pcVar9);
      if (DAT_101057340 == '\x01') {
        pcVar9 = &DAT_100fae660;
        FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
        _swift_allocObject();
        *(undefined8 *)(pcVar9 + 0x18) = uStack_138;
        *(undefined8 *)(pcVar9 + 0x10) = local_140;
        *(undefined **)(pcVar9 + 0x38) = puVar20;
        pcVar9[0x20] = '%';
        pcVar9[0x21] = '\0';
        pcVar9[0x22] = '\0';
        pcVar9[0x23] = '\0';
        pcVar9[0x24] = '\0';
        pcVar9[0x25] = '\0';
        pcVar9[0x26] = '\0';
        pcVar9[0x27] = -0x30;
        pcVar9[0x28] = -0x10;
        pcVar9[0x29] = '!';
        pcVar9[0x2a] = -0x27;
        pcVar9[0x2b] = '\0';
        pcVar9[0x2c] = '\x01';
        pcVar9[0x2d] = '\0';
        pcVar9[0x2e] = '\0';
        pcVar9[0x2f] = -0x80;
        SVar35.bridgeObject = (void *)0x20;
        SVar35.str = pcVar9;
        separator_00.bridgeObject = (void *)0xa;
        separator_00.str = (char *)0xe100000000000000;
        Swift::_print(SVar35,separator_00);
        _swift_release(pcVar9);
      }
      local_a0._0_9_ = (unkuint9)1 << 0x40;
      local_90 = (code *)0x0;
      puStack_88 = (undefined *)0x0;
      local_80 = (code *)CONCAT71(local_80._1_7_,1);
      (*param_2)(&local_a0);
      (*pcVar28)(lVar21,UVar3.unknown);
    }
    else {
      pUVar17 = extraout_x1;
      local_120 = pcVar28;
      DVar7 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar7);
      url.unknown = local_118.unknown;
      (*(code *)UVar29.unknown)(local_118.unknown,lVar21,UVar3.unknown);
      pUVar16 = local_148;
      Foundation::URLRequest::init(url,(NSURLRequestCachePolicy)0x0,60.0);
      this_00 = pUVar16;
      Foundation::URLRequest::_set_httpMethod(pUVar16);
      Foundation::URLRequest::set_timeoutInterval(this_00,10.0);
      FUN_100116520(pUVar16);
      SVar34.bridgeObject = &DAT_e400000000000000;
      SVar34.str = (char *)0x70697a67;
      Foundation::URLRequest::_setValue(SVar34,(URLRequest_conflict)0xd000000000000010);
      UVar8.unknown = (undefined *)0xffffffff;
      uVar13 = 0x1f;
      local_128 = pUVar17;
      FUN_10016cd60(0xffffffff,0x1f);
      pUVar17 = local_128;
      IVar26 = *(ID *)(unaff_x20 + 0x28);
      pNVar10 = Foundation::URLRequest::_bridgeToObjectiveC(UVar8);
      pNVar11 = Foundation::Data::_bridgeToObjectiveC((Data)UVar8.unknown);
      puVar20 = &DAT_100eb7fa0;
      _swift_allocObject(&DAT_100eb7fa0,0x20,7);
      *(code **)(puVar20 + 0x10) = param_2;
      *(undefined8 *)(puVar20 + 0x18) = param_3;
      local_80 = FUN_10011de08;
      local_a0.bridgeObject = (void *)0x42000000;
      local_a0.str = PTR___NSConcreteStackBlock_100ea82a0;
      local_90 = FUN_100117b7c;
      puStack_88 = &DAT_100eb7fb8;
      local_78 = puVar20;
      pvVar12 = __Block_copy(&local_a0);
      puVar20 = local_78;
      _swift_retain(param_3);
      _swift_release(puVar20);
      IVar26 = objc_stub::uploadTaskWithRequest_fromData_completionHandler_
                         (IVar26,pNVar10,pNVar11,pvVar12);
      __Block_release(pvVar12);
      objc_stub::resume(IVar26);
      FUN_10003bf2c(UVar8.unknown,uVar13);
      FUN_10003bf2c(DVar7.unknown,pUVar17);
      (**(code **)(local_110 + 8))(pUVar16,puStack_108);
      (*local_120)(lVar21,UVar3.unknown);
    }
  }
  FUN_1000fb4c4(lVar18,&DAT_100fae670,&DAT_100c2e0e8);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x10011936c | FUN_10011936c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100119b08) */
/* WARNING: Removing unreachable block (ram,0x000100119bd8) */
/* WARNING: Removing unreachable block (ram,0x000100119c70) */

void FUN_10011936c(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4,
                  undefined8 param_5,undefined *param_6,undefined8 param_7,undefined *param_8,
                  undefined8 param_9,undefined8 param_10,undefined *param_11,undefined1 *param_12,
                  code *param_13,undefined *param_14)

{
  String SVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  URL url;
  void *pvVar4;
  URLComponents UVar5;
  URL UVar6;
  long lVar7;
  URLComponents UVar8;
  undefined *puVar9;
  undefined *puVar10;
  NSDictionary *pNVar11;
  Data DVar12;
  URLRequest_conflict UVar13;
  char *pcVar14;
  char *pcVar15;
  NSURLRequest *pNVar16;
  NSData *pNVar17;
  URLRequest *extraout_x1;
  URLRequest *pUVar18;
  undefined8 uVar19;
  _StringGuts _Var20;
  char *pcVar21;
  void *pvVar22;
  long extraout_x8;
  URLRequest *pUVar23;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar24;
  ID IVar25;
  undefined *puVar26;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  long lVar27;
  URLComponents *this;
  URLRequest *this_00;
  long lVar28;
  long lVar29;
  long lVar30;
  URLComponents *this_01;
  code *pcVar31;
  long lVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  String SVar38;
  String SVar39;
  String SVar40;
  String SVar41;
  String separator;
  String SVar42;
  String SVar43;
  String SVar44;
  String separator_00;
  undefined8 auStack_2b0 [4];
  URLComponents UStack_290;
  code *local_288;
  code *local_280;
  undefined *local_278;
  long local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined *local_258;
  URLRequest *local_250;
  undefined *local_248;
  code *local_240;
  URL local_238;
  undefined8 local_230;
  undefined8 local_228;
  long local_220;
  undefined *puStack_218;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined *local_1d0;
  undefined1 *puStack_1c8;
  undefined *local_1b8;
  String local_1b0;
  code *local_1a0;
  undefined *puStack_198;
  code *local_190;
  undefined *local_188;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  pvVar22 = param_4;
  local_268 = param_5;
  local_260 = param_7;
  local_258 = param_6;
  local_248 = param_8;
  local_230 = param_1;
  local_228 = param_2;
  puStack_218 = (undefined *)Foundation::URLRequest::typeMetadataAccessor();
  local_220 = *(long *)(puStack_218 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_220 + 0x40));
  pUVar23 = (URLRequest *)((long)&UStack_290 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar26 = &DAT_100fafe08;
  local_250 = pUVar23;
  FUN_1000f7830(&DAT_100fafe08,&DAT_100c2e838);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar26 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar27 = (long)pUVar23 - extraout_x8_00;
  UVar5 = Foundation::URLComponents::typeMetadataAccessor();
  lVar29 = *(long *)(UVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar29 + 0x40));
  this_01 = (URLComponents *)(lVar27 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  puVar26 = &DAT_100fae670;
  FUN_1000f7830(&DAT_100fae670,&DAT_100c2e0e8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar26 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar32 = (long)this_01 - extraout_x8_02;
  UVar6 = Foundation::URL::typeMetadataAccessor();
  lVar30 = *(long *)(UVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar30 + 0x40));
  puVar26 = (undefined *)(lVar32 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0));
  local_238.unknown = puVar26;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar28 = (long)puVar26 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar24 = lVar28 - extraout_x12_00;
  local_270 = *(long *)(unaff_x20 + 0x10);
  local_240 = *(code **)(lVar30 + 0x10);
  (*local_240)(lVar28,local_270 + PostHogConfig::host,UVar6.unknown);
  Foundation::URLComponents::_init(SUB81(lVar28,0));
  lVar7 = lVar27;
  (**(code **)(lVar29 + 0x30))(lVar27,1,UVar5.unknown);
  puVar26 = PTR___type_metadata_for_Swift_String_100eac208;
  if ((int)lVar7 == 1) {
    pcVar31 = *(code **)(lVar30 + 8);
    (*pcVar31)(lVar28,UVar6.unknown);
    FUN_1000fb4c4(lVar27,&DAT_100fafe08,&DAT_100c2e838);
    (**(code **)(lVar30 + 0x38))(lVar32,1,1,UVar6.unknown);
  }
  else {
    UVar8.unknown = (undefined *)this_01;
    local_278 = UVar5.unknown;
    (**(code **)(lVar29 + 0x20))(this_01,lVar27);
    local_1b0 = Foundation::URLComponents::get_path(UVar8);
    SVar34.bridgeObject = (void *)0xe100000000000000;
    SVar34.str = (char *)0x2f;
    SVar40.bridgeObject = pvVar22;
    SVar40.str = UVar5.unknown;
    Swift::String::append(SVar34,SVar40);
    uVar19 = 0xd000000000000018;
    SVar33.bridgeObject = (void *)0x8000000100d92050;
    SVar33.str = (char *)0xd000000000000018;
    SVar41.bridgeObject = pvVar22;
    SVar41.str = UVar5.unknown;
    Swift::String::append(SVar33,SVar41);
    pvVar22 = local_1b0.bridgeObject;
    local_1d0 = (undefined *)0x2b2f;
    puStack_1c8 = &SUB_e200000000000000;
    local_1e8 = 0x2f;
    uStack_1e0 = 0xe100000000000000;
    FUN_1001013b8();
    *(undefined8 *)(lVar24 + -0x10) = uVar19;
    *(undefined8 *)(lVar24 + -8) = uVar19;
    *(undefined **)(lVar24 + -0x20) = puVar26;
    *(undefined8 *)(lVar24 + -0x18) = uVar19;
    SVar34 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                       (&local_1d0,&local_1e8,0x400,0,0,1,puVar26,puVar26);
    _swift_bridgeObjectRelease(pvVar22);
    this = this_01;
    Foundation::URLComponents::set_path(this_01,SVar34);
    UVar5.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    Foundation::URLComponents::_set_queryItems(this);
    Foundation::URLComponents::_get_url(UVar5);
    (**(code **)(lVar29 + 8))(this_01,local_278);
    pcVar31 = *(code **)(lVar30 + 8);
    (*pcVar31)(lVar28,UVar6.unknown);
  }
  lVar7 = lVar32;
  (**(code **)(lVar30 + 0x30))(lVar32,1,UVar6.unknown);
  if ((int)lVar7 == 1) {
    FUN_1000fb4c4(lVar32,&DAT_100fae670,&DAT_100c2e0e8);
    if (DAT_101057340 == '\x01') {
      pcVar14 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      _swift_allocObject();
      pcVar14[0x18] = '\x02';
      pcVar14[0x19] = '\0';
      pcVar14[0x1a] = '\0';
      pcVar14[0x1b] = '\0';
      pcVar14[0x1c] = '\0';
      pcVar14[0x1d] = '\0';
      pcVar14[0x1e] = '\0';
      pcVar14[0x1f] = '\0';
      pcVar14[0x10] = '\x01';
      pcVar14[0x11] = '\0';
      pcVar14[0x12] = '\0';
      pcVar14[0x13] = '\0';
      pcVar14[0x14] = '\0';
      pcVar14[0x15] = '\0';
      pcVar14[0x16] = '\0';
      pcVar14[0x17] = '\0';
      *(undefined **)(pcVar14 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      pcVar14[0x20] = '1';
      pcVar14[0x21] = '\0';
      pcVar14[0x22] = '\0';
      pcVar14[0x23] = '\0';
      pcVar14[0x24] = '\0';
      pcVar14[0x25] = '\0';
      pcVar14[0x26] = '\0';
      pcVar14[0x27] = -0x30;
      pcVar14[0x28] = 'p';
      pcVar14[0x29] = ' ';
      pcVar14[0x2a] = -0x27;
      pcVar14[0x2b] = '\0';
      pcVar14[0x2c] = '\x01';
      pcVar14[0x2d] = '\0';
      pcVar14[0x2e] = '\0';
      pcVar14[0x2f] = -0x80;
      SVar35.bridgeObject = (void *)0x20;
      SVar35.str = pcVar14;
      separator.bridgeObject = (void *)0xa;
      separator.str = (char *)0xe100000000000000;
      Swift::_print(SVar35,separator);
      _swift_release(pcVar14);
    }
    local_1b0._0_9_ = (unkuint9)1 << 0x40;
    local_1a0 = (code *)0x0;
    puStack_198 = (undefined *)0x0;
    local_190 = (code *)CONCAT71(local_190._1_7_,1);
    (*param_13)(&local_1b0);
  }
  else {
    local_280 = param_13;
    local_278 = param_14;
    (**(code **)(lVar30 + 0x20))(lVar24,lVar32,UVar6.unknown);
    puVar26 = &DAT_100fae678;
    FUN_1000f7830(&DAT_100fae678,&DAT_100c2e190);
    _swift_initStackObject();
    puVar9 = local_248;
    puVar10 = local_258;
    *(undefined8 *)(puVar26 + 0x20) = 0x79656b5f697061;
    *(undefined8 *)(puVar26 + 0x18) = 10;
    *(undefined8 *)(puVar26 + 0x10) = 5;
    *(undefined1 **)(puVar26 + 0x28) = &DAT_e700000000000000;
    uVar19 = ((undefined8 *)(local_270 + PostHogConfig::projectToken))[1];
    *(undefined8 *)(puVar26 + 0x30) = *(undefined8 *)(local_270 + PostHogConfig::projectToken);
    *(undefined8 *)(puVar26 + 0x38) = uVar19;
    puVar3 = PTR___type_metadata_for_Swift_String_100eac208;
    *(undefined **)(puVar26 + 0x48) = PTR___type_metadata_for_Swift_String_100eac208;
    *(undefined8 *)(puVar26 + 0x50) = 0x74636e6974736964;
    *(undefined8 *)(puVar26 + 0x58) = 0xeb0000000064695f;
    *(undefined8 *)(puVar26 + 0x60) = local_268;
    *(undefined **)(puVar26 + 0x68) = local_258;
    *(undefined **)(puVar26 + 0x78) = puVar3;
    *(undefined8 *)(puVar26 + 0x80) = 0x745f656369766564;
    *(undefined8 *)(puVar26 + 0x88) = 0xec0000006e656b6f;
    *(undefined8 *)(puVar26 + 0x90) = local_260;
    *(undefined **)(puVar26 + 0x98) = local_248;
    *(undefined **)(puVar26 + 0xa8) = puVar3;
    *(undefined8 *)(puVar26 + 0xb0) = 0x6d726f6674616c70;
    *(undefined1 **)(puVar26 + 0xb8) = &DAT_e800000000000000;
    *(undefined8 *)(puVar26 + 0xc0) = 0x736f69;
    *(undefined8 *)(puVar26 + 200) = 0xe300000000000000;
    *(undefined **)(puVar26 + 0xd8) = puVar3;
    *(undefined8 *)(puVar26 + 0xe0) = 0x64695f707061;
    *(undefined **)(puVar26 + 0x108) = puVar3;
    *(undefined1 **)(puVar26 + 0xe8) = &DAT_e600000000000000;
    *(undefined8 *)(puVar26 + 0xf0) = param_9;
    *(undefined8 *)(puVar26 + 0xf8) = param_10;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(puVar10);
    _swift_bridgeObjectRetain(puVar9);
    _swift_bridgeObjectRetain(param_10);
    puVar9 = puVar26;
    FUN_1000f8154();
    _swift_setDeallocating(puVar26);
    puVar10 = &DAT_100fae490;
    FUN_1000f7830(&DAT_100fae490,&DAT_100c2de60);
    _swift_arrayDestroy(puVar26 + 0x20,5,puVar10);
    if (param_12 != (undefined1 *)0x0) {
      local_1d0 = param_11;
      puStack_1c8 = param_12;
      local_1b8 = puVar3;
      FUN_100011080(&local_1d0,&local_1b0);
      _swift_bridgeObjectRetain(param_12);
      puVar26 = puVar9;
      _swift_isUniquelyReferenced_nonNull_native(puVar9);
      local_1d0 = puVar9;
      FUN_10016fe74(&local_1b0,0x797469746e656469,0xee006e656b6f745f,puVar26);
      puVar9 = local_1d0;
    }
    pUVar23 = local_250;
    pNVar11 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_1b0.bridgeObject;
    local_1b0 = (String)(auVar2 << 0x40);
    pvVar22 = (void *)0x0;
    DVar12.unknown =
         (undefined *)
         NSJSONSerialization::dataWithJSONObject_options_error_
                   (&_OBJC_CLASS___NSJSONSerialization,pNVar11,0,&local_1b0);
    if (DVar12.unknown == (undefined *)0x0) {
      pcVar14 = local_1b0.str;
      _Var20.unknown = extraout_x1;
      Foundation::__convertNSErrorToError();
      _swift_willThrow(0);
      _swift_errorRelease(pcVar14);
      local_1b0.str = (char *)0x0;
      local_1b0.bridgeObject = (void *)0xe000000000000000;
      Swift::_StringGuts::grow(0x19,_Var20);
      _swift_bridgeObjectRelease(local_1b0.bridgeObject);
      local_1b0.str = (char *)0xd000000000000012;
      local_1b0.bridgeObject = (void *)0x8000000100d920b0;
      SVar1.bridgeObject = param_4;
      SVar1.str = param_3;
      SVar42.bridgeObject = pvVar22;
      SVar42.str = (char *)pNVar11;
      Swift::String::append(SVar1,SVar42);
      SVar37.bridgeObject = &DAT_e500000000000000;
      SVar37.str = (char *)0x79646f6220;
      SVar43.bridgeObject = pvVar22;
      SVar43.str = (char *)pNVar11;
      Swift::String::append(SVar37,SVar43);
      pvVar4 = local_1b0.bridgeObject;
      pcVar14 = local_1b0.str;
      if (DAT_101057340 == '\x01') {
        pcVar15 = &DAT_100fae660;
        FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
        pcVar21 = (char *)0x7;
        _swift_allocObject();
        pcVar15[0x18] = '\x02';
        pcVar15[0x19] = '\0';
        pcVar15[0x1a] = '\0';
        pcVar15[0x1b] = '\0';
        pcVar15[0x1c] = '\0';
        pcVar15[0x1d] = '\0';
        pcVar15[0x1e] = '\0';
        pcVar15[0x1f] = '\0';
        pcVar15[0x10] = '\x01';
        pcVar15[0x11] = '\0';
        pcVar15[0x12] = '\0';
        pcVar15[0x13] = '\0';
        pcVar15[0x14] = '\0';
        pcVar15[0x15] = '\0';
        pcVar15[0x16] = '\0';
        pcVar15[0x17] = '\0';
        local_1b0.str = (char *)0x676f4874736f505b;
        local_1b0.bridgeObject = (void *)0xea0000000000205d;
        SVar38.bridgeObject = pvVar4;
        SVar38.str = pcVar14;
        SVar44.bridgeObject = pvVar22;
        SVar44.str = pcVar21;
        Swift::String::append(SVar38,SVar44);
        *(undefined **)(pcVar15 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
        *(char **)(pcVar15 + 0x20) = local_1b0.str;
        *(void **)(pcVar15 + 0x28) = local_1b0.bridgeObject;
        SVar39.bridgeObject = (void *)0x20;
        SVar39.str = pcVar15;
        separator_00.bridgeObject = (void *)0xa;
        separator_00.str = (char *)0xe100000000000000;
        Swift::_print(SVar39,separator_00);
        _swift_release(pcVar15);
      }
      _swift_bridgeObjectRelease(pvVar4);
      local_1b0._0_9_ = (unkuint9)1 << 0x40;
      local_1a0 = (code *)0x0;
      puStack_198 = (undefined *)0x0;
      local_190 = (code *)CONCAT71(local_190._1_7_,1);
      (*local_280)(&local_1b0);
      (*pcVar31)(lVar24,UVar6.unknown);
    }
    else {
      pUVar18 = extraout_x1;
      local_258 = puVar9;
      DVar12 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar12);
      url.unknown = local_238.unknown;
      (*local_240)(local_238.unknown,lVar24,UVar6.unknown);
      Foundation::URLRequest::init(url,(NSURLRequestCachePolicy)0x0,60.0);
      _swift_bridgeObjectRetain(local_228);
      this_00 = pUVar23;
      Foundation::URLRequest::_set_httpMethod(pUVar23);
      Foundation::URLRequest::set_timeoutInterval(this_00,10.0);
      FUN_100116520(pUVar23);
      SVar36.bridgeObject = &DAT_e400000000000000;
      SVar36.str = (char *)0x70697a67;
      Foundation::URLRequest::_setValue(SVar36,(URLRequest_conflict)0xd000000000000010);
      UVar13.unknown = (undefined *)0xffffffff;
      uVar19 = 0x1f;
      local_250 = pUVar18;
      FUN_10016cd60(0xffffffff,0x1f);
      IVar25 = *(ID *)(unaff_x20 + 0x28);
      local_288 = pcVar31;
      local_248 = DVar12.unknown;
      pNVar16 = Foundation::URLRequest::_bridgeToObjectiveC(UVar13);
      pNVar17 = Foundation::Data::_bridgeToObjectiveC((Data)UVar13.unknown);
      puVar26 = &DAT_100eb7f50;
      _swift_allocObject(&DAT_100eb7f50,0x30,7);
      puVar10 = local_278;
      *(char **)(puVar26 + 0x10) = param_3;
      *(void **)(puVar26 + 0x18) = param_4;
      *(code **)(puVar26 + 0x20) = local_280;
      *(undefined **)(puVar26 + 0x28) = local_278;
      local_190 = FUN_10011ddec;
      local_1b0.bridgeObject = (void *)0x42000000;
      local_1b0.str = PTR___NSConcreteStackBlock_100ea82a0;
      local_1a0 = FUN_100117b7c;
      puStack_198 = &DAT_100eb7f68;
      local_188 = puVar26;
      pvVar22 = __Block_copy(&local_1b0);
      puVar26 = local_188;
      _swift_bridgeObjectRetain(param_4);
      _swift_retain(puVar10);
      _swift_release(puVar26);
      IVar25 = objc_stub::uploadTaskWithRequest_fromData_completionHandler_
                         (IVar25,pNVar16,pNVar17,pvVar22);
      __Block_release(pvVar22);
      objc_stub::resume(IVar25);
      FUN_10003bf2c(UVar13.unknown,uVar19);
      FUN_10003bf2c(local_248,local_250);
      (**(code **)(local_220 + 8))(pUVar23,puStack_218);
      (*local_288)(lVar24,UVar6.unknown);
      puVar9 = local_258;
    }
    _swift_bridgeObjectRelease(puVar9);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x100119fc0 | FUN_100119fc0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100119fc0(undefined8 param_1,undefined8 param_2,code *param_3,NSURLRequest *param_4,
                  code *param_5,NSURLRequest *param_6,undefined *param_7,code *param_8,code *param_9
                  ,code *param_10,undefined8 param_11)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  URL url;
  undefined8 uVar3;
  undefined *puVar4;
  NSURLRequest *pNVar5;
  undefined *puVar6;
  URLComponents UVar7;
  URL UVar8;
  URLQueryItem UVar9;
  URLComponents UVar10;
  undefined8 uVar11;
  TimeZone TVar12;
  code *pcVar13;
  NSDictionary *pNVar14;
  Data DVar15;
  ID self;
  char *pcVar16;
  undefined *extraout_x1;
  URLComponents UVar17;
  void *pvVar18;
  long extraout_x8;
  long lVar19;
  URLRequest *this;
  long extraout_x8_00;
  long extraout_x8_01;
  URLComponents *pUVar20;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar21;
  ulong uVar22;
  undefined *puVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x13;
  long lVar27;
  code *pcVar28;
  undefined8 *unaff_x20;
  long lVar29;
  URLComponents *this_00;
  URLRequest *this_01;
  long lVar30;
  ulong uVar31;
  code *pcVar32;
  long lVar33;
  ulong uVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  String SVar38;
  String SVar39;
  String SVar40;
  String separator;
  String separator_00;
  undefined8 auStack_1f0 [4];
  URLComponents UStack_1d0;
  code *local_1c8;
  code *local_1c0;
  long local_1b8;
  long local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  code *local_190;
  URLComponents *local_188;
  URL local_180;
  undefined8 local_178;
  undefined8 local_170;
  long local_168;
  undefined *local_160;
  undefined *local_158;
  NSData *local_150;
  NSURLRequest *local_148;
  NSURLRequest *local_140;
  code *local_138;
  long local_130;
  undefined *local_128;
  code *local_e0;
  String local_d8;
  code *local_c8;
  undefined *puStack_c0;
  code *local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  code *local_90;
  NSURLRequest *pNStack_88;
  undefined *local_78;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_1a8 = *unaff_x20;
  local_1c8 = param_3;
  local_1c0 = param_5;
  local_178 = param_1;
  local_170 = param_2;
  local_160 = param_7;
  local_148 = param_4;
  local_140 = param_6;
  local_138 = param_8;
  local_150 = (NSData *)Foundation::TimeZone::typeMetadataAccessor();
  local_158 = *(undefined **)(local_150 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_158 + 0x40));
  lVar19 = (long)&UStack_1d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_168 = lVar19;
  local_128 = (undefined *)Foundation::URLRequest::typeMetadataAccessor();
  local_130 = *(long *)(local_128 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar19 = lVar19 - (extraout_x13 + 0xfU & 0xfffffffffffffff0);
  local_1b8 = extraout_x13;
  local_1b0 = lVar19;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  this = (URLRequest *)(lVar19 - extraout_x12);
  puVar23 = &DAT_100fafe08;
  FUN_1000f7830(&DAT_100fafe08,&DAT_100c2e838);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar23 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar29 = (long)this - extraout_x8_00;
  UVar7 = Foundation::URLComponents::typeMetadataAccessor();
  lVar27 = *(long *)(UVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar27 + 0x40));
  pUVar20 = (URLComponents *)(lVar29 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  local_188 = pUVar20;
  UVar8 = Foundation::URL::typeMetadataAccessor();
  lVar33 = *(long *)(UVar8.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar33 + 0x40));
  puVar23 = (undefined *)((long)pUVar20 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  local_180.unknown = puVar23;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar24 = (long)puVar23 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar30 = lVar24 - extraout_x12_01;
  puVar23 = &DAT_100fae670;
  FUN_1000f7830(&DAT_100fae670,&DAT_100c2e0e8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar23 + -8) + 0x40));
  lVar25 = lVar30 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar21 = lVar25 - extraout_x12_02;
  puVar23 = &DAT_100fafe10;
  FUN_1000f7830(&DAT_100fafe10,&DAT_100c2e840);
  UVar9 = Foundation::URLQueryItem::typeMetadataAccessor();
  uVar22 = (ulong)*(byte *)(*(long *)(UVar9.unknown + -8) + 0x50);
  _swift_allocObject(puVar23,(uVar22 + 0x20 & (uVar22 ^ 0xffffffffffffffff)) +
                             *(long *)(*(long *)(UVar9.unknown + -8) + 0x48),uVar22 | 7);
  uStack_198 = 2;
  local_1a0 = 1;
  *(undefined8 *)(puVar23 + 0x18) = 2;
  *(undefined8 *)(puVar23 + 0x10) = 1;
  pvVar18 = (void *)0xe100000000000000;
  Foundation::URLQueryItem::_init();
  lVar26 = unaff_x20[2];
  local_190 = *(code **)(lVar33 + 0x10);
  (*local_190)(lVar30,lVar26 + PostHogConfig::host,UVar8.unknown);
  Foundation::URLComponents::_init(SUB81(lVar30,0));
  lVar19 = lVar29;
  (**(code **)(lVar27 + 0x30))(lVar29,1,UVar7.unknown);
  pUVar20 = local_188;
  puVar2 = PTR___type_metadata_for_Swift_String_100eac208;
  if ((int)lVar19 == 1) {
    _swift_release(puVar23);
    pcVar32 = *(code **)(lVar33 + 8);
    (*pcVar32)(lVar30,UVar8.unknown);
    FUN_1000fb4c4(lVar29,&DAT_100fafe08,&DAT_100c2e838);
    (**(code **)(lVar33 + 0x38))(lVar21,1,1,UVar8.unknown);
  }
  else {
    UVar10.unknown = (undefined *)local_188;
    UVar17 = UVar7;
    (**(code **)(lVar27 + 0x20))(local_188,lVar29);
    local_d8 = Foundation::URLComponents::get_path(UVar10);
    SVar37.bridgeObject = (void *)0xe100000000000000;
    SVar37.str = (char *)0x2f;
    SVar39.bridgeObject = pvVar18;
    SVar39.str = UVar17.unknown;
    Swift::String::append(SVar37,SVar39);
    uVar11 = 0x7367616c662f;
    SVar35.bridgeObject = &DAT_e600000000000000;
    SVar35.str = (char *)0x7367616c662f;
    SVar40.bridgeObject = pvVar18;
    SVar40.str = UVar17.unknown;
    Swift::String::append(SVar35,SVar40);
    pvVar18 = local_d8.bridgeObject;
    local_90 = (code *)0x2b2f;
    pNStack_88 = (NSURLRequest *)&SUB_e200000000000000;
    local_a8 = 0x2f;
    uStack_a0 = 0xe100000000000000;
    FUN_1001013b8();
    *(undefined8 *)(lVar21 + -0x10) = uVar11;
    *(undefined8 *)(lVar21 + -8) = uVar11;
    *(undefined **)(lVar21 + -0x20) = puVar2;
    *(undefined8 *)(lVar21 + -0x18) = uVar11;
    SVar37 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                       (&local_90,&local_a8,0x400,0,0,1,puVar2,puVar2);
    _swift_bridgeObjectRelease(pvVar18);
    this_00 = pUVar20;
    Foundation::URLComponents::set_path(pUVar20,SVar37);
    UVar10.unknown = puVar23;
    _swift_bridgeObjectRetain();
    Foundation::URLComponents::_set_queryItems(this_00);
    Foundation::URLComponents::_get_url(UVar10);
    _swift_release(puVar23);
    (**(code **)(lVar27 + 8))(pUVar20,UVar7.unknown);
    pcVar32 = *(code **)(lVar33 + 8);
    (*pcVar32)(lVar30,UVar8.unknown);
  }
  FUN_1000f8cac(lVar21,lVar25,&DAT_100fae670,&DAT_100c2e0e8);
  lVar19 = lVar25;
  (**(code **)(lVar33 + 0x30))(lVar25,1,UVar8.unknown);
  if ((int)lVar19 == 1) {
    FUN_1000fb4c4(lVar25,&DAT_100fae670,&DAT_100c2e0e8);
    if (DAT_101057340 == '\x01') {
      pcVar16 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      _swift_allocObject();
      *(undefined8 *)(pcVar16 + 0x18) = uStack_198;
      *(undefined8 *)(pcVar16 + 0x10) = local_1a0;
      *(undefined **)(pcVar16 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      pcVar16[0x20] = '$';
      pcVar16[0x21] = '\0';
      pcVar16[0x22] = '\0';
      pcVar16[0x23] = '\0';
      pcVar16[0x24] = '\0';
      pcVar16[0x25] = '\0';
      pcVar16[0x26] = '\0';
      pcVar16[0x27] = -0x30;
      pcVar16[0x28] = 'p';
      pcVar16[0x29] = '\x1f';
      pcVar16[0x2a] = -0x27;
      pcVar16[0x2b] = '\0';
      pcVar16[0x2c] = '\x01';
      pcVar16[0x2d] = '\0';
      pcVar16[0x2e] = '\0';
      pcVar16[0x2f] = -0x80;
      SVar36.bridgeObject = (void *)0x20;
      SVar36.str = pcVar16;
      separator.bridgeObject = (void *)0xa;
      separator.str = (char *)0xe100000000000000;
      Swift::_print(SVar36,separator);
      _swift_release(pcVar16);
    }
    (*param_10)(0,0);
    FUN_1000fb4c4(lVar21,&DAT_100fae670,&DAT_100c2e0e8);
  }
  else {
    (**(code **)(lVar33 + 0x20))(lVar24,lVar25,UVar8.unknown);
    url.unknown = local_180.unknown;
    (*local_190)(local_180.unknown,lVar24,UVar8.unknown);
    Foundation::URLRequest::init(url,(NSURLRequestCachePolicy)0x0,60.0);
    this_01 = this;
    Foundation::URLRequest::_set_httpMethod(this);
    Foundation::URLRequest::set_timeoutInterval(this_01,10.0);
    FUN_100116520(this_01);
    pcVar28 = (code *)&DAT_100fae678;
    FUN_1000f7830(&DAT_100fae678,&DAT_100c2e190);
    _swift_allocObject();
    uVar3 = local_170;
    *(undefined8 *)(pcVar28 + 0x18) = 8;
    *(undefined8 *)(pcVar28 + 0x10) = 4;
    *(undefined8 *)(pcVar28 + 0x20) = 0x79656b5f697061;
    *(undefined1 **)(pcVar28 + 0x28) = &DAT_e700000000000000;
    uVar11 = ((undefined8 *)(lVar26 + PostHogConfig::projectToken))[1];
    *(undefined8 *)(pcVar28 + 0x30) = *(undefined8 *)(lVar26 + PostHogConfig::projectToken);
    *(undefined8 *)(pcVar28 + 0x38) = uVar11;
    *(undefined **)(pcVar28 + 0x48) = puVar2;
    *(undefined8 *)(pcVar28 + 0x50) = 0x74636e6974736964;
    *(undefined8 *)(pcVar28 + 0x58) = 0xeb0000000064695f;
    *(undefined8 *)(pcVar28 + 0x60) = local_178;
    *(undefined8 *)(pcVar28 + 0x68) = local_170;
    *(undefined **)(pcVar28 + 0x78) = puVar2;
    *(undefined8 *)(pcVar28 + 0x80) = 0x7370756f7267;
    *(undefined1 **)(pcVar28 + 0x88) = &DAT_e600000000000000;
    puVar23 = &DAT_100fafa98;
    FUN_1000f7830(&DAT_100fafa98,&DAT_100c2e850);
    TVar12.unknown = local_160;
    *(undefined **)(pcVar28 + 0x90) = local_160;
    *(undefined **)(pcVar28 + 0xa8) = puVar23;
    *(undefined8 *)(pcVar28 + 0xb0) = 0x656e6f7a656d6974;
    *(undefined1 **)(pcVar28 + 0xb8) = &DAT_e800000000000000;
    _swift_bridgeObjectRetain(uVar11);
    _swift_bridgeObjectRetain(uVar3);
    _swift_bridgeObjectRetain();
    lVar19 = local_168;
    TVar12 = Foundation::TimeZone::get_current(TVar12);
    SVar37 = Foundation::TimeZone::get_identifier(TVar12);
    *(undefined **)(pcVar28 + 0xd8) = puVar2;
    *(String *)(pcVar28 + 0xc0) = SVar37;
    (**(code **)(local_158 + 8))(lVar19,local_150);
    local_e0 = pcVar28;
    FUN_1000f8154();
    _swift_setDeallocating(pcVar28);
    puVar23 = &DAT_100fae490;
    FUN_1000f7830(&DAT_100fae490,&DAT_100c2de60);
    _swift_arrayDestroy(pcVar28 + 0x20,4,puVar23);
    _swift_deallocClassInstance(pcVar28,0x20,7);
    pNVar5 = local_148;
    if (local_148 != (NSURLRequest *)0x0) {
      local_90 = local_1c8;
      pNStack_88 = local_148;
      local_78 = puVar2;
      FUN_100011080(&local_90,&local_d8);
      _swift_bridgeObjectRetain(pNVar5);
      pcVar28 = local_e0;
      _swift_isUniquelyReferenced_nonNull_native(local_e0);
      local_90 = local_e0;
      FUN_10016fe74(&local_d8,0xd000000000000011,0x8000000100d92030,pcVar28);
      local_e0 = local_90;
    }
    pcVar28 = local_138;
    pNVar5 = local_140;
    if (local_140 != (NSURLRequest *)0x0) {
      local_90 = local_1c0;
      pNStack_88 = local_140;
      local_78 = PTR___type_metadata_for_Swift_String_100eac208;
      FUN_100011080(&local_90,&local_d8);
      _swift_bridgeObjectRetain(pNVar5);
      pcVar13 = local_e0;
      _swift_isUniquelyReferenced_nonNull_native(local_e0);
      local_90 = local_e0;
      FUN_10016fe74(&local_d8,0x5f65636976656424,0xea00000000006469,pcVar13);
      local_e0 = local_90;
    }
    if (*(long *)(pcVar28 + 0x10) != 0) {
      puVar23 = &DAT_100fae898;
      FUN_1000f7830(&DAT_100fae898,&DAT_100c2e4e0);
      local_90 = pcVar28;
      local_78 = puVar23;
      if (puVar23 == (undefined *)0x0) {
        _swift_bridgeObjectRetain(pcVar28);
        FUN_1000fb4c4(&local_90,&DAT_100fae668,&DAT_100c2e4a0);
        FUN_10016fcc4(&local_d8,0xd000000000000011,0x8000000100d91fa0);
        FUN_1000fb4c4(&local_d8,&DAT_100fae668,&DAT_100c2e4a0);
      }
      else {
        FUN_100011080(&local_90,&local_d8);
        _swift_bridgeObjectRetain(pcVar28);
        pcVar28 = local_e0;
        _swift_isUniquelyReferenced_nonNull_native(local_e0);
        local_90 = local_e0;
        FUN_10016fe74(&local_d8,0xd000000000000011,0x8000000100d91fa0,pcVar28);
        local_e0 = local_90;
      }
    }
    if ((param_9 != (code *)0x0) && (*(long *)(param_9 + 0x10) != 0)) {
      puVar23 = &DAT_100fae890;
      FUN_1000f7830(&DAT_100fae890,&DAT_100c2e860);
      local_90 = param_9;
      local_78 = puVar23;
      if (puVar23 == (undefined *)0x0) {
        _swift_bridgeObjectRetain(param_9);
        FUN_1000fb4c4(&local_90,&DAT_100fae668,&DAT_100c2e4a0);
        FUN_10016fcc4(&local_d8,0xd000000000000010,0x8000000100d92010);
        FUN_1000fb4c4(&local_d8,&DAT_100fae668,&DAT_100c2e4a0);
      }
      else {
        FUN_100011080(&local_90,&local_d8);
        _swift_bridgeObjectRetain(param_9);
        pcVar28 = local_e0;
        _swift_isUniquelyReferenced_nonNull_native(local_e0);
        local_90 = local_e0;
        FUN_10016fe74(&local_d8,0xd000000000000010,0x8000000100d92010,pcVar28);
        local_e0 = local_90;
      }
    }
    lVar19 = PostHogConfig::evaluationContexts;
    _swift_beginAccess(lVar26 + PostHogConfig::evaluationContexts,&local_a8,0,0);
    pcVar28 = *(code **)(lVar26 + lVar19);
    if ((pcVar28 != (code *)0x0) && (*(long *)(pcVar28 + 0x10) != 0)) {
      puVar23 = &DAT_100faf898;
      FUN_1000f7830(&DAT_100faf898,&DAT_100c2eeb0);
      local_90 = pcVar28;
      local_78 = puVar23;
      if (puVar23 == (undefined *)0x0) {
        _swift_bridgeObjectRetain(pcVar28);
        FUN_1000fb4c4(&local_90,&DAT_100fae668,&DAT_100c2e4a0);
        FUN_10016fcc4(&local_d8,0xd000000000000013,0x8000000100d91ff0);
        FUN_1000fb4c4(&local_d8,&DAT_100fae668,&DAT_100c2e4a0);
      }
      else {
        FUN_100011080(&local_90,&local_d8);
        _swift_bridgeObjectRetain(pcVar28);
        pcVar28 = local_e0;
        _swift_isUniquelyReferenced_nonNull_native(local_e0);
        local_90 = local_e0;
        FUN_10016fe74(&local_d8,0xd000000000000013,0x8000000100d91ff0,pcVar28);
        local_e0 = local_90;
      }
    }
    puVar23 = PTR___type_metadata_for_Swift_String_100eac208;
    pNVar14 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_d8.bridgeObject;
    local_d8 = (String)(auVar1 << 0x40);
    DVar15.unknown =
         (undefined *)
         NSJSONSerialization::dataWithJSONObject_options_error_
                   (&_OBJC_CLASS___NSJSONSerialization,pNVar14,0,&local_d8);
    if (DVar15.unknown == (undefined *)0x0) {
      pcVar16 = local_d8.str;
      Foundation::__convertNSErrorToError();
      _swift_willThrow(0);
      _swift_errorRelease(pcVar16);
      if (DAT_101057340 == '\x01') {
        pcVar16 = &DAT_100fae660;
        FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
        _swift_allocObject();
        *(undefined8 *)(pcVar16 + 0x18) = uStack_198;
        *(undefined8 *)(pcVar16 + 0x10) = local_1a0;
        *(undefined **)(pcVar16 + 0x38) = puVar23;
        pcVar16[0x20] = '&';
        pcVar16[0x21] = '\0';
        pcVar16[0x22] = '\0';
        pcVar16[0x23] = '\0';
        pcVar16[0x24] = '\0';
        pcVar16[0x25] = '\0';
        pcVar16[0x26] = '\0';
        pcVar16[0x27] = -0x30;
        pcVar16[0x28] = -0x40;
        pcVar16[0x29] = '\x1f';
        pcVar16[0x2a] = -0x27;
        pcVar16[0x2b] = '\0';
        pcVar16[0x2c] = '\x01';
        pcVar16[0x2d] = '\0';
        pcVar16[0x2e] = '\0';
        pcVar16[0x2f] = -0x80;
        SVar38.bridgeObject = (void *)0x20;
        SVar38.str = pcVar16;
        separator_00.bridgeObject = (void *)0xa;
        separator_00.str = (char *)0xe100000000000000;
        Swift::_print(SVar38,separator_00);
        _swift_release(pcVar16);
      }
      (*param_10)(0,0);
      (**(code **)(local_130 + 8))(this,local_128);
      (*pcVar32)(lVar24,UVar8.unknown);
      FUN_1000fb4c4(lVar21,&DAT_100fae670,&DAT_100c2e0e8);
    }
    else {
      puVar23 = extraout_x1;
      DVar15 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar15);
      local_140 = (NSURLRequest *)unaff_x20[5];
      local_160 = puVar23;
      local_158 = DVar15.unknown;
      local_148 = Foundation::URLRequest::_bridgeToObjectiveC((URLRequest_conflict)0x0);
      local_150 = Foundation::Data::_bridgeToObjectiveC(DVar15);
      puVar6 = local_128;
      lVar25 = local_130;
      lVar19 = local_1b0;
      (**(code **)(local_130 + 0x10))(local_1b0,this,local_128);
      uVar22 = (ulong)*(byte *)(lVar25 + 0x50);
      uVar34 = uVar22 + 0x20 & (uVar22 ^ 0xffffffffffffffff);
      uVar31 = local_1b8 + uVar34 + 7 & 0xfffffffffffffff8;
      puVar23 = &DAT_100eb7f00;
      local_138 = pcVar32;
      _swift_allocObject(&DAT_100eb7f00,uVar31 + 0x28,uVar22 | 7);
      *(undefined8 *)(puVar23 + 0x10) = 0;
      *(undefined8 **)(puVar23 + 0x18) = unaff_x20;
      (**(code **)(lVar25 + 0x20))(puVar23 + uVar34,lVar19,puVar6);
      puVar4 = local_158;
      puVar2 = local_160;
      *(undefined **)(puVar23 + uVar31) = local_158;
      *(undefined **)((long)(puVar23 + uVar31) + 8) = local_160;
      *(code **)(puVar23 + uVar31 + 0x10) = param_10;
      *(undefined8 *)((long)(puVar23 + uVar31 + 0x10) + 8) = param_11;
      *(undefined8 *)(puVar23 + uVar31 + 0x20) = local_1a8;
      local_b8 = thunk_FUN_10011dd10;
      local_d8.bridgeObject = (void *)0x42000000;
      local_d8.str = PTR___NSConcreteStackBlock_100ea82a0;
      local_c8 = FUN_100117b7c;
      puStack_c0 = &DAT_100eb7f18;
      local_b0 = puVar23;
      pvVar18 = __Block_copy(&local_d8);
      puVar23 = local_b0;
      _swift_retain(unaff_x20);
      FUN_1001037b4(puVar4,puVar2);
      _swift_retain(param_11);
      _swift_release(puVar23);
      self = objc_stub::uploadTaskWithRequest_fromData_completionHandler_
                       ((ID)local_140,local_148,local_150,pvVar18);
      __Block_release(pvVar18);
      objc_stub::resume(self);
      FUN_10003bf2c(puVar4,puVar2);
      (**(code **)(lVar25 + 8))(this,puVar6);
      (*local_138)(lVar24,UVar8.unknown);
      FUN_1000fb4c4(lVar21,&DAT_100fae670,&DAT_100c2e0e8);
    }
    _swift_bridgeObjectRelease(local_e0);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x10011af74 | FUN_10011af74 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
FUN_10011af74(undefined8 param_1,Data param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  URLRequest_conflict UVar3;
  URLRequest_conflict UVar4;
  undefined *puVar5;
  void *aBlock;
  ID self;
  ulong uVar6;
  long lVar7;
  undefined8 *unaff_x20;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  NSData *local_a8;
  NSURLRequest *local_a0;
  ID local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  local_c0 = *unaff_x20;
  local_d0 = param_3;
  local_c8 = param_4;
  local_b8 = param_5;
  uStack_b0 = param_6;
  UVar3 = Foundation::URLRequest::typeMetadataAccessor();
  lVar10 = *(long *)(UVar3.unknown + -8);
  lVar9 = *(long *)(lVar10 + 0x40);
  UVar4 = UVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar7 = (long)&local_d0 - (lVar9 + 0xfU & 0xfffffffffffffff0);
  local_98 = unaff_x20[5];
  local_a0 = Foundation::URLRequest::_bridgeToObjectiveC(UVar4);
  local_a8 = Foundation::Data::_bridgeToObjectiveC(param_2);
  (**(code **)(lVar10 + 0x10))(lVar7,param_1,UVar3.unknown);
  uVar6 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar11 = uVar6 + 0x20 & (uVar6 ^ 0xffffffffffffffff);
  uVar8 = lVar9 + uVar11 + 7 & 0xfffffffffffffff8;
  puVar5 = &DAT_100eb7e10;
  _swift_allocObject(&DAT_100eb7e10,uVar8 + 0x28,uVar6 | 7);
  *(undefined8 *)(puVar5 + 0x10) = local_c8;
  *(undefined8 **)(puVar5 + 0x18) = unaff_x20;
  (**(code **)(lVar10 + 0x20))(puVar5 + uVar11,lVar7,UVar3.unknown);
  uVar2 = uStack_b0;
  uVar1 = local_d0;
  *(undefined **)(puVar5 + uVar8) = param_2.unknown;
  *(undefined8 *)((long)(puVar5 + uVar8) + 8) = local_d0;
  *(undefined8 *)(puVar5 + uVar8 + 0x10) = local_b8;
  *(undefined8 *)((long)(puVar5 + uVar8 + 0x10) + 8) = uStack_b0;
  *(undefined8 *)(puVar5 + uVar8 + 0x20) = local_c0;
  local_70 = thunk_FUN_10011dd10;
  local_90 = PTR___NSConcreteStackBlock_100ea82a0;
  local_88 = 0x42000000;
  local_80 = FUN_100117b7c;
  puStack_78 = &DAT_100eb7e28;
  local_68 = puVar5;
  aBlock = __Block_copy(&local_90);
  puVar5 = local_68;
  _swift_retain();
  FUN_1001037b4(param_2.unknown,uVar1);
  _swift_retain(uVar2);
  _swift_release(puVar5);
  self = objc_stub::uploadTaskWithRequest_fromData_completionHandler_
                   (local_98,local_a0,local_a8,aBlock);
  __Block_release(aBlock);
  objc_stub::resume(self);
  return 0;
}



/* Address: 0x10011b178 | FUN_10011b178 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_10011b178(Data param_1,_StringGuts param_2,char *param_3,char *param_4,long param_5,
                  long param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  code *param_10,undefined *param_11)

{
  String SVar1;
  String SVar2;
  String SVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  DispatchQoS DVar6;
  DispatchWorkItemFlags DVar7;
  OS_dispatch_queue *pOVar8;
  OS_dispatch_queue *pOVar9;
  QoSClass QVar10;
  undefined7 extraout_var;
  void *pvVar11;
  DispatchQoS DVar12;
  ID IVar13;
  NSData *pNVar14;
  char **ppcVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 *puVar18;
  _StringGuts _Var19;
  undefined *extraout_x1;
  char *pcVar20;
  char *pcVar21;
  char *pcVar22;
  char *pcVar23;
  undefined *puVar24;
  long extraout_x8;
  long extraout_x8_00;
  long lVar25;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar26;
  long extraout_x12;
  long extraout_x12_00;
  ulong uVar27;
  DispatchTime DVar28;
  ulong uVar29;
  long lVar30;
  long lVar31;
  DispatchTime DVar32;
  double dVar33;
  double dVar34;
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
  String SVar45;
  String SVar46;
  String SVar47;
  String SVar48;
  String SVar49;
  String SVar50;
  String SVar51;
  String SVar52;
  String SVar53;
  String SVar54;
  String SVar55;
  String SVar56;
  String SVar57;
  String SVar58;
  String SVar59;
  String SVar60;
  String SVar61;
  String SVar62;
  String SVar63;
  String SVar64;
  String SVar65;
  String SVar66;
  String SVar67;
  String SVar68;
  String SVar69;
  String SVar70;
  String SVar71;
  String SVar72;
  String separator;
  String SVar73;
  String SVar74;
  String separator_00;
  String separator_01;
  String separator_02;
  String separator_03;
  String SVar75;
  String SVar76;
  String SVar77;
  String SVar78;
  String SVar79;
  String SVar80;
  String SVar81;
  String SVar82;
  String SVar83;
  String SVar84;
  String SVar85;
  String SVar86;
  String SVar87;
  String SVar88;
  String separator_04;
  String SVar89;
  String separator_05;
  String SVar90;
  String SVar91;
  String SVar92;
  String SVar93;
  String SVar94;
  String SVar95;
  String SVar96;
  String separator_06;
  undefined auStack_1b0 [8];
  OS_dispatch_queue *local_1a8;
  char *local_1a0;
  OS_dispatch_queue *local_198;
  DispatchTime local_190;
  char *local_188;
  char *local_180;
  undefined *local_178;
  long local_170;
  long local_168;
  code *local_160;
  long local_158;
  long local_150;
  undefined8 local_148;
  undefined *local_140;
  undefined8 local_138;
  undefined8 local_130;
  DispatchQoS local_128;
  long local_120;
  DispatchWorkItemFlags local_118;
  undefined *local_110;
  long local_108;
  undefined *local_100;
  code *local_f8;
  DispatchTime local_f0;
  undefined *local_e8;
  long local_e0;
  char *local_d0;
  char *local_c8;
  OS_dispatch_queue *local_c0;
  code *local_b8;
  undefined *puStack_b0;
  code *local_a8;
  undefined *local_a0;
  char *local_98 [3];
  long local_80;
  
  local_138 = param_9;
  local_80 = *(long *)PTR____stack_chk_guard_100ea82f0;
  _Var19.unknown = param_2.unknown;
  pcVar20 = param_3;
  pcVar23 = param_4;
  local_148 = param_7;
  local_130 = param_8;
  local_e0 = param_6;
  local_100 = (undefined *)Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_108 = *(long *)(local_100 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_108 + 0x40));
  puVar16 = auStack_1b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_118.unknown = puVar16;
  local_110 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_120 = *(long *)(local_110 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_120 + 0x40));
  local_128.unknown = puVar16 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_140 = (undefined *)Foundation::URLRequest::typeMetadataAccessor();
  local_150 = *(long *)(local_140 + -8);
  lVar31 = *(long *)(local_150 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar25 = (long)(puVar16 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0)) -
           (lVar31 + 0xfU & 0xfffffffffffffff0);
  local_158 = lVar25;
  local_e8 = (undefined *)Dispatch::DispatchTime::typeMetadataAccessor();
  local_160 = *(code **)(local_e8 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_160 + 0x40));
  DVar32.unknown = (undefined *)(lVar25 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_f0.unknown = DVar32.unknown + -extraout_x12;
  QVar10 = Dispatch::DispatchQoS::QoSClass::typeMetadataAccessor();
  lVar25 = CONCAT71(extraout_var,QVar10.value);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar25 + -8) + 0x40));
  DVar28.unknown = DVar32.unknown + -extraout_x12 + -(extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_170 = extraout_x12_00;
  if (param_4 == (char *)0x0) {
    if ((ulong)param_2.unknown >> 0x3c < 0xf) {
      local_168 = lVar25;
      if ((param_3 == (char *)0x0) ||
         (pcVar20 = param_3, _swift_dynamicCastObjCClass(param_3,&_OBJC_CLASS___NSHTTPURLResponse),
         pcVar20 == (char *)0x0)) {
        if (DAT_101057340 == '\x01') {
          pcVar20 = &DAT_100fae660;
          FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
          _swift_allocObject();
          pcVar20[0x18] = '\x02';
          pcVar20[0x19] = '\0';
          pcVar20[0x1a] = '\0';
          pcVar20[0x1b] = '\0';
          pcVar20[0x1c] = '\0';
          pcVar20[0x1d] = '\0';
          pcVar20[0x1e] = '\0';
          pcVar20[0x1f] = '\0';
          pcVar20[0x10] = '\x01';
          pcVar20[0x11] = '\0';
          pcVar20[0x12] = '\0';
          pcVar20[0x13] = '\0';
          pcVar20[0x14] = '\0';
          pcVar20[0x15] = '\0';
          pcVar20[0x16] = '\0';
          pcVar20[0x17] = '\0';
          *(undefined **)(pcVar20 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
          pcVar20[0x20] = 'D';
          pcVar20[0x21] = '\0';
          pcVar20[0x22] = '\0';
          pcVar20[0x23] = '\0';
          pcVar20[0x24] = '\0';
          pcVar20[0x25] = '\0';
          pcVar20[0x26] = '\0';
          pcVar20[0x27] = -0x30;
          pcVar20[0x28] = '`';
          pcVar20[0x29] = '\x1e';
          pcVar20[0x2a] = -0x27;
          pcVar20[0x2b] = '\0';
          pcVar20[0x2c] = '\x01';
          pcVar20[0x2d] = '\0';
          pcVar20[0x2e] = '\0';
          pcVar20[0x2f] = -0x80;
          FUN_10011da54(param_1.unknown,param_2.unknown);
          SVar35.bridgeObject = (void *)0x20;
          SVar35.str = pcVar20;
          separator_03.bridgeObject = (void *)0xa;
          separator_03.str = (char *)0xe100000000000000;
          Swift::_print(SVar35,separator_03);
          _swift_release(pcVar20);
        }
        else {
          FUN_10011da54(param_1.unknown,param_2.unknown);
        }
        (*param_10)(0,0);
        if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_80) {
          FUN_10003bf18(param_1.unknown,param_2.unknown);
          return;
        }
        goto LAB_10011c748;
      }
      FUN_10011da54(param_1.unknown,param_2.unknown);
      local_180 = param_3;
      IVar13 = objc_stub::statusCode((ID)pcVar20);
      if (IVar13 - 200 < 100) {
        if (DAT_101057340 == '\x01') {
          pcVar20 = &DAT_100fae660;
          FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
          _swift_allocObject();
          pcVar20[0x18] = '\x02';
          pcVar20[0x19] = '\0';
          pcVar20[0x1a] = '\0';
          pcVar20[0x1b] = '\0';
          pcVar20[0x1c] = '\0';
          pcVar20[0x1d] = '\0';
          pcVar20[0x1e] = '\0';
          pcVar20[0x1f] = '\0';
          pcVar20[0x10] = '\x01';
          pcVar20[0x11] = '\0';
          pcVar20[0x12] = '\0';
          pcVar20[0x13] = '\0';
          pcVar20[0x14] = '\0';
          pcVar20[0x15] = '\0';
          pcVar20[0x16] = '\0';
          pcVar20[0x17] = '\0';
          *(undefined **)(pcVar20 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
          pcVar20[0x20] = '$';
          pcVar20[0x21] = '\0';
          pcVar20[0x22] = '\0';
          pcVar20[0x23] = '\0';
          pcVar20[0x24] = '\0';
          pcVar20[0x25] = '\0';
          pcVar20[0x26] = '\0';
          pcVar20[0x27] = -0x30;
          pcVar20[0x28] = '@';
          pcVar20[0x29] = '\x1f';
          pcVar20[0x2a] = -0x27;
          pcVar20[0x2b] = '\0';
          pcVar20[0x2c] = '\x01';
          pcVar20[0x2d] = '\0';
          pcVar20[0x2e] = '\0';
          pcVar20[0x2f] = -0x80;
          SVar47.bridgeObject = (void *)0x20;
          SVar47.str = pcVar20;
          separator_02.bridgeObject = (void *)0xa;
          separator_02.str = (char *)0xe100000000000000;
          Swift::_print(SVar47,separator_02);
          _swift_release(pcVar20);
        }
        pNVar14 = Foundation::Data::_bridgeToObjectiveC(param_1);
        local_c8 = (char *)0x0;
        pvVar11 = (void *)0x4;
        IVar13 = NSJSONSerialization::JSONObjectWithData_options_error_
                           ((ID)&_OBJC_CLASS___NSJSONSerialization,pNVar14,4,&local_c8);
        if (IVar13 == 0) {
          pcVar23 = local_c8;
          _Var19.unknown = extraout_x1;
          Foundation::__convertNSErrorToError();
          _swift_willThrow(0);
          local_c8 = (char *)0x0;
          local_c0 = (void *)0xe000000000000000;
          Swift::_StringGuts::grow(0x24,_Var19);
          SVar61.bridgeObject = (void *)0x8000000100d91f10;
          SVar61.str = (char *)0xd000000000000022;
          SVar95.bridgeObject = pvVar11;
          SVar95.str = (char *)pNVar14;
          Swift::String::append(SVar61,SVar95);
          puVar16 = &DAT_100faf510;
          local_98[0] = pcVar23;
          FUN_1000f7830(&DAT_100faf510,&DAT_100c2e820);
          puVar24 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
          Swift::__print_unlocked
                    (local_98,&local_c8,puVar16,
                     PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
                     PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
                    );
          pOVar8 = local_c0;
          pcVar20 = local_c8;
          if (DAT_101057340 == '\x01') {
            pcVar22 = &DAT_100fae660;
            FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
            pcVar21 = (char *)0x7;
            _swift_allocObject();
            pcVar22[0x18] = '\x02';
            pcVar22[0x19] = '\0';
            pcVar22[0x1a] = '\0';
            pcVar22[0x1b] = '\0';
            pcVar22[0x1c] = '\0';
            pcVar22[0x1d] = '\0';
            pcVar22[0x1e] = '\0';
            pcVar22[0x1f] = '\0';
            pcVar22[0x10] = '\x01';
            pcVar22[0x11] = '\0';
            pcVar22[0x12] = '\0';
            pcVar22[0x13] = '\0';
            pcVar22[0x14] = '\0';
            pcVar22[0x15] = '\0';
            pcVar22[0x16] = '\0';
            pcVar22[0x17] = '\0';
            local_c8 = (char *)0x676f4874736f505b;
            local_c0 = (void *)0xea0000000000205d;
            SVar62.bridgeObject = pOVar8;
            SVar62.str = pcVar20;
            SVar96.bridgeObject = puVar24;
            SVar96.str = pcVar21;
            Swift::String::append(SVar62,SVar96);
            *(undefined **)(pcVar22 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
            *(char **)(pcVar22 + 0x20) = local_c8;
            *(OS_dispatch_queue **)(pcVar22 + 0x28) = local_c0;
            SVar63.bridgeObject = (void *)0x20;
            SVar63.str = pcVar22;
            separator_06.bridgeObject = (void *)0xa;
            separator_06.str = (char *)0xe100000000000000;
            Swift::_print(SVar63,separator_06);
            _swift_release(pcVar22);
          }
          _swift_bridgeObjectRelease(pOVar8);
          _swift_errorRetain(pcVar23);
          (*param_10)(0,pcVar23);
          FUN_10003bf18(param_1.unknown,param_2.unknown);
          _swift_errorRelease(pcVar23);
          _swift_errorRelease(pcVar23);
        }
        else {
          Swift::__bridgeAnyObjectToAny();
          _swift_unknownObjectRelease(IVar13);
          puVar16 = &DAT_100fae898;
          FUN_1000f7830(&DAT_100fae898,&DAT_100c2e4e0);
          ppcVar15 = local_98;
          _swift_dynamicCast(ppcVar15,&local_c8,PTR___type_metadata_for_Any_100eae0c0 + 8,puVar16,6)
          ;
          pcVar20 = local_98[0];
          if ((int)ppcVar15 == 0) {
            pcVar20 = (char *)0x0;
          }
          (*param_10)(pcVar20,0);
          FUN_10003bf18(param_1.unknown,param_2.unknown);
          _swift_bridgeObjectRelease(pcVar20);
        }
      }
      else {
        local_f8 = param_10;
        local_178 = param_11;
        pcVar21 = (char *)0x4;
        local_190.unknown = param_1.unknown;
        local_188 = param_2.unknown;
        FUN_10016e98c();
        local_c8 = (char *)0x0;
        local_c0 = (OS_dispatch_queue *)0xe000000000000000;
        Swift::_StringGuts::grow(0x14,param_2);
        _swift_bridgeObjectRelease(local_c0);
        local_c8 = (char *)0x203a737574617473;
        local_c0 = (OS_dispatch_queue *)&DAT_e800000000000000;
        local_98[0] = (char *)objc_stub::statusCode((ID)pcVar20);
        SVar35 = Swift::CustomStringConvertible::get_description();
        SVar75.bridgeObject = pcVar23;
        SVar75.str = pcVar21;
        Swift::String::append(SVar35,SVar75);
        _swift_bridgeObjectRelease(SVar35.bridgeObject);
        SVar48.bridgeObject = &DAT_e800000000000000;
        SVar48.str = (char *)0x203a79646f62202c;
        SVar76.bridgeObject = pcVar23;
        SVar76.str = pcVar21;
        Swift::String::append(SVar48,SVar76);
        puVar16 = &DAT_100fafde0;
        local_98[0] = param_1.unknown;
        FUN_1000f7830(&DAT_100fafde0,&DAT_100c2fde0);
        SVar35 = Swift::String::_init(local_98,puVar16);
        SVar77.bridgeObject = pcVar23;
        SVar77.str = pcVar21;
        _Var19.unknown = SVar35.bridgeObject;
        Swift::String::append(SVar35,SVar77);
        _swift_bridgeObjectRelease(SVar35.bridgeObject);
        pOVar8 = local_c0;
        SVar2.bridgeObject = local_c0;
        SVar2.str = local_c8;
        SVar1.bridgeObject = local_c0;
        SVar1.str = local_c8;
        local_c8 = (char *)0x0;
        local_c0 = (OS_dispatch_queue *)0xe000000000000000;
        Swift::_StringGuts::grow(0x1c,_Var19);
        _swift_bridgeObjectRelease(local_c0);
        local_c8 = (char *)0xd000000000000019;
        local_c0 = (void *)0x8000000100d91eb0;
        SVar78.bridgeObject = pcVar23;
        SVar78.str = pcVar21;
        Swift::String::append(SVar1,SVar78);
        SVar49.bridgeObject = (void *)0xe100000000000000;
        SVar49.str = (char *)0x2e;
        SVar79.bridgeObject = pcVar23;
        SVar79.str = pcVar21;
        Swift::String::append(SVar49,SVar79);
        pOVar9 = local_c0;
        pcVar22 = local_c8;
        SVar3.bridgeObject = local_c0;
        SVar3.str = local_c8;
        IVar13 = objc_stub::statusCode((ID)pcVar20);
        lVar25 = PostHogConfig::featureFlagRequestMaxRetries;
        if ((IVar13 == 0x1f8) || (IVar13 == 0x1f6)) {
          lVar30 = *(long *)(local_e0 + 0x10);
          _Var19.unknown = (undefined *)local_98;
          pcVar21 = (char *)0x0;
          pcVar23 = (char *)0x0;
          _swift_beginAccess(lVar30 + PostHogConfig::featureFlagRequestMaxRetries);
          if (param_5 < *(long *)(lVar30 + lVar25)) {
            _swift_bridgeObjectRelease(pOVar9);
            dVar33 = (double)param_5;
            _exp2();
            dVar34 = 30.0;
            if (dVar33 * 0.3 <= 30.0) {
              dVar34 = dVar33 * 0.3;
            }
            local_c8 = (char *)0x0;
            local_c0 = (void *)0xe000000000000000;
            Swift::_StringGuts::grow(0x48,_Var19);
            SVar50.bridgeObject = (void *)0x8000000100d91ed0;
            SVar50.str = (char *)0xd00000000000001d;
            SVar80.bridgeObject = pcVar23;
            SVar80.str = pcVar21;
            Swift::String::append(SVar50,SVar80);
            local_198 = pOVar8;
            SVar81.bridgeObject = pcVar23;
            SVar81.str = pcVar21;
            Swift::String::append(SVar2,SVar81);
            SVar51.bridgeObject = (void *)0xee00206e6920676e;
            SVar51.str = (char *)0x697972746552202e;
            SVar82.bridgeObject = pcVar23;
            SVar82.str = pcVar21;
            Swift::String::append(SVar51,SVar82);
            pcVar20 = 
            PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
            ;
            double::_write((undefined *)&local_c8,dVar34);
            SVar52.bridgeObject = (void *)0x8000000100d91ef0;
            SVar52.str = (char *)0xd000000000000012;
            SVar83.bridgeObject = pcVar23;
            SVar83.str = pcVar20;
            Swift::String::append(SVar52,SVar83);
            local_1a0 = (char *)(param_5 + 1);
            local_d0 = (char *)(param_5 + 1);
            SVar35 = Swift::CustomStringConvertible::get_description();
            SVar84.bridgeObject = pcVar23;
            SVar84.str = pcVar20;
            Swift::String::append(SVar35,SVar84);
            _swift_bridgeObjectRelease(SVar35.bridgeObject);
            SVar53.bridgeObject = (void *)0xe100000000000000;
            SVar53.str = (char *)0x2f;
            SVar85.bridgeObject = pcVar23;
            SVar85.str = pcVar20;
            Swift::String::append(SVar53,SVar85);
            local_d0 = *(char **)(lVar30 + lVar25);
            SVar35 = Swift::CustomStringConvertible::get_description();
            SVar86.bridgeObject = pcVar23;
            SVar86.str = pcVar20;
            Swift::String::append(SVar35,SVar86);
            _swift_bridgeObjectRelease(SVar35.bridgeObject);
            SVar54.bridgeObject = &SUB_e200000000000000;
            SVar54.str = (char *)0x2e29;
            SVar87.bridgeObject = pcVar23;
            SVar87.str = pcVar20;
            Swift::String::append(SVar54,SVar87);
            pOVar8 = local_c0;
            pcVar20 = local_c8;
            if (DAT_101057340 == '\x01') {
              pcVar22 = &DAT_100fae660;
              FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
              pcVar21 = (char *)0x7;
              _swift_allocObject();
              pcVar22[0x18] = '\x02';
              pcVar22[0x19] = '\0';
              pcVar22[0x1a] = '\0';
              pcVar22[0x1b] = '\0';
              pcVar22[0x1c] = '\0';
              pcVar22[0x1d] = '\0';
              pcVar22[0x1e] = '\0';
              pcVar22[0x1f] = '\0';
              pcVar22[0x10] = '\x01';
              pcVar22[0x11] = '\0';
              pcVar22[0x12] = '\0';
              pcVar22[0x13] = '\0';
              pcVar22[0x14] = '\0';
              pcVar22[0x15] = '\0';
              pcVar22[0x16] = '\0';
              pcVar22[0x17] = '\0';
              local_c8 = (char *)0x676f4874736f505b;
              local_c0 = (void *)0xea0000000000205d;
              SVar55.bridgeObject = pOVar8;
              SVar55.str = pcVar20;
              SVar88.bridgeObject = pcVar23;
              SVar88.str = pcVar21;
              Swift::String::append(SVar55,SVar88);
              *(undefined **)(pcVar22 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
              *(char **)(pcVar22 + 0x20) = local_c8;
              *(OS_dispatch_queue **)(pcVar22 + 0x28) = local_c0;
              SVar56.bridgeObject = (void *)0x20;
              SVar56.str = pcVar22;
              separator_04.bridgeObject = (void *)0xa;
              separator_04.str = (char *)0xe100000000000000;
              Swift::_print(SVar56,separator_04);
              _swift_release(pcVar22);
            }
            _swift_bridgeObjectRelease(pOVar8);
            FUN_10000ec2c(0,&DAT_100fae2e8,&PTR__OBJC_CLASS___OS_dispatch_queue_100f8d6e8);
            lVar25 = local_168;
            (**(code **)(local_170 + 0x68))
                      (DVar28.unknown,
                       *(undefined4 *)
                        PTR___enum_case_for_Dispatch_DispatchQoS_QoSClass_utility_Dispatch_DispatchQoS_QoSClass_Type___>_Dispatch_DispatchQoS_QoSClass_100eae698
                       ,local_168);
            local_1a8 = (extension_Dispatch)::__C::OS_dispatch_queue::global
                                  ((QoSClass)(__int8)DVar28.unknown);
            (**(code **)(local_170 + 8))(DVar28.unknown,lVar25);
            Dispatch::DispatchTime::now(DVar28);
            DVar28.unknown = local_f0.unknown;
            Dispatch::__infix(DVar32,dVar34);
            local_160 = *(code **)(local_160 + 8);
            (*local_160)(DVar32.unknown,local_e8);
            puVar24 = local_140;
            lVar30 = local_150;
            lVar25 = local_158;
            (**(code **)(local_150 + 0x10))(local_158,local_148,local_140);
            uVar26 = (ulong)*(byte *)(lVar30 + 0x50);
            uVar27 = uVar26 + 0x18 & (uVar26 ^ 0xffffffffffffffff);
            uVar29 = lVar31 + uVar27 + 7 & 0xfffffffffffffff8;
            puVar16 = &DAT_100eb7e60;
            _swift_allocObject(&DAT_100eb7e60,uVar29 + 0x28,uVar26 | 7);
            lVar31 = local_e0;
            *(long *)(puVar16 + 0x10) = local_e0;
            (**(code **)(lVar30 + 0x20))(puVar16 + uVar27,lVar25,puVar24);
            uVar5 = local_130;
            uVar4 = local_138;
            DVar12.unknown = local_178;
            *(undefined8 *)(puVar16 + uVar29) = local_130;
            *(undefined8 *)((long)(puVar16 + uVar29) + 8) = local_138;
            *(char **)(puVar16 + uVar29 + 0x10) = local_1a0;
            *(code **)(puVar16 + uVar29 + 0x18) = local_f8;
            *(undefined **)((long)(puVar16 + uVar29 + 0x18) + 8) = local_178;
            local_a8 = thunk_FUN_10011dbf0;
            local_c8 = PTR___NSConcreteStackBlock_100ea82a0;
            local_c0 = (void *)0x42000000;
            local_b8 = FUN_100030410;
            puStack_b0 = &DAT_100eb7e78;
            local_a0 = puVar16;
            pvVar11 = __Block_copy(&local_c8);
            _swift_retain(lVar31);
            FUN_1001037b4(uVar5,uVar4);
            _swift_retain();
            DVar6.unknown = local_128.unknown;
            DVar12 = Dispatch::DispatchQoS::get_unspecified(DVar12);
            local_d0 = PTR___swiftEmptyArrayStorage_100eae0d8;
            FUN_10011dab0();
            puVar16 = &DAT_100fafdf8;
            FUN_1000f7830(&DAT_100fafdf8,&DAT_100c2e830);
            puVar17 = puVar16;
            FUN_10011daf4();
            puVar24 = local_100;
            DVar7.unknown = local_118.unknown;
            Swift::SetAlgebra::_init
                      (local_118.unknown,&local_d0,puVar16,puVar17,local_100,DVar12.unknown);
            (extension_Dispatch)::__C::OS_dispatch_queue::_asyncAfter(DVar28,DVar6,DVar7);
            FUN_10003bf18(local_190.unknown,local_188);
            __Block_release(pvVar11);
            _swift_bridgeObjectRelease(local_198);
            (**(code **)(local_108 + 8))(DVar7.unknown,puVar24);
            (**(code **)(local_120 + 8))(DVar6.unknown,local_110);
            goto LAB_10011b8a0;
          }
        }
        _swift_bridgeObjectRelease(pOVar8);
        if (DAT_101057340 == '\x01') {
          pcVar20 = &DAT_100fae660;
          FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
          pcVar21 = (char *)0x7;
          _swift_allocObject();
          pcVar20[0x18] = '\x02';
          pcVar20[0x19] = '\0';
          pcVar20[0x1a] = '\0';
          pcVar20[0x1b] = '\0';
          pcVar20[0x1c] = '\0';
          pcVar20[0x1d] = '\0';
          pcVar20[0x1e] = '\0';
          pcVar20[0x1f] = '\0';
          pcVar20[0x10] = '\x01';
          pcVar20[0x11] = '\0';
          pcVar20[0x12] = '\0';
          pcVar20[0x13] = '\0';
          pcVar20[0x14] = '\0';
          pcVar20[0x15] = '\0';
          pcVar20[0x16] = '\0';
          pcVar20[0x17] = '\0';
          local_c8 = (char *)0x676f4874736f505b;
          local_c0 = (OS_dispatch_queue *)0xea0000000000205d;
          SVar89.bridgeObject = pcVar23;
          SVar89.str = pcVar21;
          Swift::String::append(SVar3,SVar89);
          *(undefined **)(pcVar20 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
          *(char **)(pcVar20 + 0x20) = local_c8;
          *(OS_dispatch_queue **)(pcVar20 + 0x28) = local_c0;
          SVar57.bridgeObject = (void *)0x20;
          SVar57.str = pcVar20;
          separator_05.bridgeObject = (void *)0xa;
          separator_05.str = (char *)0xe100000000000000;
          pcVar23 = (char *)0xa;
          pcVar21 = (char *)0xe100000000000000;
          Swift::_print(SVar57,separator_05);
          _swift_release(pcVar20);
        }
        SVar58.bridgeObject = &SUB_e200000000000000;
        SVar58.str = (char *)0x2820;
        SVar90.bridgeObject = pcVar23;
        SVar90.str = pcVar21;
        local_c8 = pcVar22;
        local_c0 = pOVar9;
        Swift::String::append(SVar58,SVar90);
        pcVar20 = (char *)0x2;
        SVar35 = Swift::StaticString::get_description((StaticString)0x100d91d90);
        SVar91.bridgeObject = pcVar23;
        SVar91.str = pcVar20;
        Swift::String::append(SVar35,SVar91);
        _swift_bridgeObjectRelease(SVar35.bridgeObject);
        SVar59.bridgeObject = (void *)0xe100000000000000;
        SVar59.str = &DAT_0000003a;
        SVar92.bridgeObject = pcVar23;
        SVar92.str = pcVar20;
        Swift::String::append(SVar59,SVar92);
        local_d0 = (char *)0x1a8;
        SVar35 = Swift::CustomStringConvertible::get_description();
        SVar93.bridgeObject = pcVar23;
        SVar93.str = pcVar20;
        Swift::String::append(SVar35,SVar93);
        _swift_bridgeObjectRelease(SVar35.bridgeObject);
        SVar60.bridgeObject = (void *)0xe100000000000000;
        SVar60.str = (char *)0x29;
        puVar18 = (undefined8 *)0x29;
        SVar94.bridgeObject = pcVar23;
        SVar94.str = pcVar20;
        Swift::String::append(SVar60,SVar94);
        pOVar8 = local_c0;
        pcVar20 = local_c8;
        FUN_10011da68();
        puVar16 = &DAT_100eb9e08;
        _swift_allocError(&DAT_100eb9e08,puVar18,0,0);
        *puVar18 = pcVar20;
        puVar18[1] = pOVar8;
        (*local_f8)(0,puVar16);
        _swift_errorRelease(puVar16);
        FUN_10003bf18(local_190.unknown,local_188);
      }
    }
    else {
      if (DAT_101057340 == '\x01') {
        pcVar20 = &DAT_100fae660;
        FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
        _swift_allocObject();
        pcVar20[0x18] = '\x02';
        pcVar20[0x19] = '\0';
        pcVar20[0x1a] = '\0';
        pcVar20[0x1b] = '\0';
        pcVar20[0x1c] = '\0';
        pcVar20[0x1d] = '\0';
        pcVar20[0x1e] = '\0';
        pcVar20[0x1f] = '\0';
        pcVar20[0x10] = '\x01';
        pcVar20[0x11] = '\0';
        pcVar20[0x12] = '\0';
        pcVar20[0x13] = '\0';
        pcVar20[0x14] = '\0';
        pcVar20[0x15] = '\0';
        pcVar20[0x16] = '\0';
        pcVar20[0x17] = '\0';
        *(undefined **)(pcVar20 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
        pcVar20[0x20] = '3';
        pcVar20[0x21] = '\0';
        pcVar20[0x22] = '\0';
        pcVar20[0x23] = '\0';
        pcVar20[0x24] = '\0';
        pcVar20[0x25] = '\0';
        pcVar20[0x26] = '\0';
        pcVar20[0x27] = -0x30;
        pcVar20[0x28] = ' ';
        pcVar20[0x29] = '\x1e';
        pcVar20[0x2a] = -0x27;
        pcVar20[0x2b] = '\0';
        pcVar20[0x2c] = '\x01';
        pcVar20[0x2d] = '\0';
        pcVar20[0x2e] = '\0';
        pcVar20[0x2f] = -0x80;
        SVar46.bridgeObject = (void *)0x20;
        SVar46.str = pcVar20;
        separator_01.bridgeObject = (void *)0xa;
        separator_01.str = (char *)0xe100000000000000;
        Swift::_print(SVar46,separator_01);
        _swift_release(pcVar20);
      }
      (*param_10)(0,0);
    }
  }
  else {
    local_f8 = param_10;
    local_168 = lVar25;
    _swift_errorRetain(param_4);
    pcVar22 = param_4;
    FUN_10011d4dc();
    lVar25 = PostHogConfig::featureFlagRequestMaxRetries;
    if (((ulong)pcVar22 & 1) != 0) {
      lVar30 = *(long *)(local_e0 + 0x10);
      _Var19.unknown = (undefined *)local_98;
      pcVar20 = (char *)0x0;
      pcVar23 = (char *)0x0;
      _swift_beginAccess(lVar30 + PostHogConfig::featureFlagRequestMaxRetries);
      if (param_5 < *(long *)(lVar30 + lVar25)) {
        local_178 = param_11;
        local_190.unknown = DVar32.unknown;
        local_c8 = param_4;
        _swift_errorRetain(param_4);
        puVar16 = &DAT_100faf510;
        FUN_1000f7830(&DAT_100faf510,&DAT_100c2e820);
        SVar35 = Swift::String::_init(&local_c8,puVar16);
        dVar33 = (double)param_5;
        _Var19.unknown = SVar35.bridgeObject;
        _exp2();
        dVar34 = 30.0;
        if (dVar33 * 0.3 <= 30.0) {
          dVar34 = dVar33 * 0.3;
        }
        local_c8 = (char *)0x0;
        local_c0 = (void *)0xe000000000000000;
        Swift::_StringGuts::grow(0x48,_Var19);
        SVar36.bridgeObject = (void *)0x8000000100d91ed0;
        SVar36.str = (char *)0xd00000000000001d;
        SVar64.bridgeObject = pcVar23;
        SVar64.str = pcVar20;
        Swift::String::append(SVar36,SVar64);
        SVar65.bridgeObject = pcVar23;
        SVar65.str = pcVar20;
        local_180 = SVar35.bridgeObject;
        Swift::String::append(SVar35,SVar65);
        SVar37.bridgeObject = (void *)0xee00206e6920676e;
        SVar37.str = (char *)0x697972746552202e;
        SVar66.bridgeObject = pcVar23;
        SVar66.str = pcVar20;
        Swift::String::append(SVar37,SVar66);
        pcVar20 = 
        PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
        ;
        double::_write((undefined *)&local_c8,dVar34);
        SVar38.bridgeObject = (void *)0x8000000100d91ef0;
        SVar38.str = (char *)0xd000000000000012;
        SVar67.bridgeObject = pcVar23;
        SVar67.str = pcVar20;
        Swift::String::append(SVar38,SVar67);
        local_188 = (char *)(param_5 + 1U);
        local_d0 = (char *)(param_5 + 1U);
        SVar35 = Swift::CustomStringConvertible::get_description();
        SVar68.bridgeObject = pcVar23;
        SVar68.str = pcVar20;
        Swift::String::append(SVar35,SVar68);
        _swift_bridgeObjectRelease(SVar35.bridgeObject);
        SVar39.bridgeObject = (void *)0xe100000000000000;
        SVar39.str = (char *)0x2f;
        SVar69.bridgeObject = pcVar23;
        SVar69.str = pcVar20;
        Swift::String::append(SVar39,SVar69);
        local_d0 = *(char **)(lVar30 + lVar25);
        SVar35 = Swift::CustomStringConvertible::get_description();
        SVar70.bridgeObject = pcVar23;
        SVar70.str = pcVar20;
        Swift::String::append(SVar35,SVar70);
        _swift_bridgeObjectRelease(SVar35.bridgeObject);
        SVar40.bridgeObject = &SUB_e200000000000000;
        SVar40.str = (char *)0x2e29;
        SVar71.bridgeObject = pcVar23;
        SVar71.str = pcVar20;
        Swift::String::append(SVar40,SVar71);
        pOVar8 = local_c0;
        pcVar20 = local_c8;
        if (DAT_101057340 == '\x01') {
          pcVar22 = &DAT_100fae660;
          FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
          pcVar21 = (char *)0x7;
          _swift_allocObject();
          pcVar22[0x18] = '\x02';
          pcVar22[0x19] = '\0';
          pcVar22[0x1a] = '\0';
          pcVar22[0x1b] = '\0';
          pcVar22[0x1c] = '\0';
          pcVar22[0x1d] = '\0';
          pcVar22[0x1e] = '\0';
          pcVar22[0x1f] = '\0';
          pcVar22[0x10] = '\x01';
          pcVar22[0x11] = '\0';
          pcVar22[0x12] = '\0';
          pcVar22[0x13] = '\0';
          pcVar22[0x14] = '\0';
          pcVar22[0x15] = '\0';
          pcVar22[0x16] = '\0';
          pcVar22[0x17] = '\0';
          local_c8 = (char *)0x676f4874736f505b;
          local_c0 = (void *)0xea0000000000205d;
          SVar41.bridgeObject = pOVar8;
          SVar41.str = pcVar20;
          SVar72.bridgeObject = pcVar23;
          SVar72.str = pcVar21;
          Swift::String::append(SVar41,SVar72);
          *(undefined **)(pcVar22 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
          *(char **)(pcVar22 + 0x20) = local_c8;
          *(OS_dispatch_queue **)(pcVar22 + 0x28) = local_c0;
          SVar42.bridgeObject = (void *)0x20;
          SVar42.str = pcVar22;
          separator.bridgeObject = (void *)0xa;
          separator.str = (char *)0xe100000000000000;
          Swift::_print(SVar42,separator);
          _swift_release(pcVar22);
        }
        _swift_bridgeObjectRelease(pOVar8);
        FUN_10000ec2c(0,&DAT_100fae2e8,&PTR__OBJC_CLASS___OS_dispatch_queue_100f8d6e8);
        lVar25 = local_168;
        (**(code **)(local_170 + 0x68))
                  (DVar28.unknown,
                   *(undefined4 *)
                    PTR___enum_case_for_Dispatch_DispatchQoS_QoSClass_utility_Dispatch_DispatchQoS_QoSClass_Type___>_Dispatch_DispatchQoS_QoSClass_100eae698
                   ,local_168);
        local_198 = (extension_Dispatch)::__C::OS_dispatch_queue::global
                              ((QoSClass)(__int8)DVar28.unknown);
        (**(code **)(local_170 + 8))(DVar28.unknown,lVar25);
        DVar32.unknown = local_190.unknown;
        Dispatch::DispatchTime::now(DVar28);
        Dispatch::__infix(DVar32,dVar34);
        local_160 = *(code **)(local_160 + 8);
        (*local_160)(DVar32.unknown,local_e8);
        puVar24 = local_140;
        lVar30 = local_150;
        lVar25 = local_158;
        (**(code **)(local_150 + 0x10))(local_158,local_148,local_140);
        uVar26 = (ulong)*(byte *)(lVar30 + 0x50);
        uVar27 = uVar26 + 0x18 & (uVar26 ^ 0xffffffffffffffff);
        uVar29 = lVar31 + uVar27 + 7 & 0xfffffffffffffff8;
        puVar16 = &DAT_100eb7eb0;
        _swift_allocObject(&DAT_100eb7eb0,uVar29 + 0x28,uVar26 | 7);
        lVar31 = local_e0;
        *(long *)(puVar16 + 0x10) = local_e0;
        (**(code **)(lVar30 + 0x20))(puVar16 + uVar27,lVar25,puVar24);
        uVar5 = local_130;
        uVar4 = local_138;
        DVar12.unknown = local_178;
        *(undefined8 *)(puVar16 + uVar29) = local_130;
        *(undefined8 *)((long)(puVar16 + uVar29) + 8) = local_138;
        *(char **)(puVar16 + uVar29 + 0x10) = local_188;
        *(code **)(puVar16 + uVar29 + 0x18) = local_f8;
        *(undefined **)((long)(puVar16 + uVar29 + 0x18) + 8) = local_178;
        local_a8 = thunk_FUN_10011dbf0;
        local_c8 = PTR___NSConcreteStackBlock_100ea82a0;
        local_c0 = (void *)0x42000000;
        local_b8 = FUN_100030410;
        puStack_b0 = &DAT_100eb7ec8;
        local_a0 = puVar16;
        pvVar11 = __Block_copy(&local_c8);
        _swift_retain(lVar31);
        FUN_1001037b4(uVar5,uVar4);
        _swift_retain();
        DVar6.unknown = local_128.unknown;
        DVar12 = Dispatch::DispatchQoS::get_unspecified(DVar12);
        local_d0 = PTR___swiftEmptyArrayStorage_100eae0d8;
        FUN_10011dab0();
        puVar16 = &DAT_100fafdf8;
        FUN_1000f7830(&DAT_100fafdf8,&DAT_100c2e830);
        puVar17 = puVar16;
        FUN_10011daf4();
        puVar24 = local_100;
        DVar7.unknown = local_118.unknown;
        Swift::SetAlgebra::_init
                  (local_118.unknown,&local_d0,puVar16,puVar17,local_100,DVar12.unknown);
        DVar28.unknown = local_f0.unknown;
        (extension_Dispatch)::__C::OS_dispatch_queue::_asyncAfter(local_f0,DVar6,DVar7);
        __Block_release(pvVar11);
        _swift_bridgeObjectRelease(local_180);
        _swift_errorRelease(param_4);
        (**(code **)(local_108 + 8))(DVar7.unknown,puVar24);
        (**(code **)(local_120 + 8))(DVar6.unknown,local_110);
LAB_10011b8a0:
        (*local_160)(DVar28.unknown,local_e8);
        _swift_release(local_a0);
        goto LAB_10011baac;
      }
    }
    local_c8 = (char *)0x0;
    local_c0 = (void *)0xe000000000000000;
    Swift::_StringGuts::grow(0x1f,_Var19);
    SVar43.bridgeObject = (void *)0x8000000100d91ed0;
    SVar43.str = (char *)0xd00000000000001d;
    SVar73.bridgeObject = pcVar23;
    SVar73.str = pcVar20;
    Swift::String::append(SVar43,SVar73);
    puVar16 = &DAT_100faf510;
    local_d0 = param_4;
    FUN_1000f7830(&DAT_100faf510,&DAT_100c2e820);
    puVar24 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
    Swift::__print_unlocked
              (&local_d0,&local_c8,puVar16,
               PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
               PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
              );
    pOVar8 = local_c0;
    pcVar20 = local_c8;
    if (DAT_101057340 == '\x01') {
      pcVar23 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      pcVar22 = (char *)0x7;
      _swift_allocObject();
      pcVar23[0x18] = '\x02';
      pcVar23[0x19] = '\0';
      pcVar23[0x1a] = '\0';
      pcVar23[0x1b] = '\0';
      pcVar23[0x1c] = '\0';
      pcVar23[0x1d] = '\0';
      pcVar23[0x1e] = '\0';
      pcVar23[0x1f] = '\0';
      pcVar23[0x10] = '\x01';
      pcVar23[0x11] = '\0';
      pcVar23[0x12] = '\0';
      pcVar23[0x13] = '\0';
      pcVar23[0x14] = '\0';
      pcVar23[0x15] = '\0';
      pcVar23[0x16] = '\0';
      pcVar23[0x17] = '\0';
      local_c8 = (char *)0x676f4874736f505b;
      local_c0 = (void *)0xea0000000000205d;
      SVar44.bridgeObject = pOVar8;
      SVar44.str = pcVar20;
      SVar74.bridgeObject = puVar24;
      SVar74.str = pcVar22;
      Swift::String::append(SVar44,SVar74);
      *(undefined **)(pcVar23 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      *(char **)(pcVar23 + 0x20) = local_c8;
      *(OS_dispatch_queue **)(pcVar23 + 0x28) = local_c0;
      SVar45.bridgeObject = (void *)0x20;
      SVar45.str = pcVar23;
      separator_00.bridgeObject = (void *)0xa;
      separator_00.str = (char *)0xe100000000000000;
      Swift::_print(SVar45,separator_00);
      _swift_release(pcVar23);
    }
    _swift_bridgeObjectRelease(pOVar8);
    _swift_errorRetain(param_4);
    (*local_f8)(0,param_4);
    _swift_errorRelease(param_4);
    _swift_errorRelease(param_4);
  }
LAB_10011baac:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_80) {
    return;
  }
LAB_10011c748:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x10011c74c | FUN_10011c74c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10011c74c(undefined8 param_1,undefined8 param_2)

{
  URLRequest_conflict UVar1;
  long lVar2;
  char *pcVar3;
  URLRequest_conflict UVar4;
  NSURLRequest *pNVar5;
  undefined *puVar6;
  void *aBlock;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined *puVar7;
  long lVar8;
  ID IVar9;
  long lVar10;
  String SVar11;
  String separator;
  undefined *local_80;
  undefined8 local_78;
  code *local_70;
  undefined *puStack_68;
  code *local_60;
  undefined *local_58;
  
  puVar7 = &DAT_100fafdd8;
  FUN_1000f7830(&DAT_100fafdd8,&DAT_100c2e810);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)&local_80 - extraout_x8;
  UVar1 = Foundation::URLRequest::typeMetadataAccessor();
  lVar10 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar10 + 0x40));
  puVar7 = (undefined *)(lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  FUN_100116af4(lVar8);
  lVar2 = lVar8;
  (**(code **)(lVar10 + 0x30))(lVar8,1,UVar1.unknown);
  if ((int)lVar2 == 1) {
    FUN_1000fb4c4(lVar8,&DAT_100fafdd8,&DAT_100c2e810);
    if (DAT_101057340 == '\x01') {
      pcVar3 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      _swift_allocObject();
      pcVar3[0x18] = '\x02';
      pcVar3[0x19] = '\0';
      pcVar3[0x1a] = '\0';
      pcVar3[0x1b] = '\0';
      pcVar3[0x1c] = '\0';
      pcVar3[0x1d] = '\0';
      pcVar3[0x1e] = '\0';
      pcVar3[0x1f] = '\0';
      pcVar3[0x10] = '\x01';
      pcVar3[0x11] = '\0';
      pcVar3[0x12] = '\0';
      pcVar3[0x13] = '\0';
      pcVar3[0x14] = '\0';
      pcVar3[0x15] = '\0';
      pcVar3[0x16] = '\0';
      pcVar3[0x17] = '\0';
      *(undefined **)(pcVar3 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      pcVar3[0x20] = 'G';
      pcVar3[0x21] = '\0';
      pcVar3[0x22] = '\0';
      pcVar3[0x23] = '\0';
      pcVar3[0x24] = '\0';
      pcVar3[0x25] = '\0';
      pcVar3[0x26] = '\0';
      pcVar3[0x27] = -0x30;
      pcVar3[0x28] = '`';
      pcVar3[0x29] = '\x1c';
      pcVar3[0x2a] = -0x27;
      pcVar3[0x2b] = '\0';
      pcVar3[0x2c] = '\x01';
      pcVar3[0x2d] = '\0';
      pcVar3[0x2e] = '\0';
      pcVar3[0x2f] = -0x80;
      SVar11.bridgeObject = (void *)0x20;
      SVar11.str = pcVar3;
      separator.bridgeObject = (void *)0xa;
      separator.str = (char *)0xe100000000000000;
      Swift::_print(SVar11,separator);
      _swift_release(pcVar3);
    }
  }
  else {
    UVar4.unknown = puVar7;
    (**(code **)(lVar10 + 0x20))(puVar7,lVar8,UVar1.unknown);
    IVar9 = *(ID *)(unaff_x20 + 0x28);
    pNVar5 = Foundation::URLRequest::_bridgeToObjectiveC(UVar4);
    puVar6 = &DAT_100eb7dc0;
    _swift_allocObject(&DAT_100eb7dc0,0x20,7);
    *(undefined8 *)(puVar6 + 0x10) = param_1;
    *(undefined8 *)(puVar6 + 0x18) = param_2;
    local_60 = FUN_10011da30;
    local_80 = PTR___NSConcreteStackBlock_100ea82a0;
    local_78 = 0x42000000;
    local_70 = FUN_100117b7c;
    puStack_68 = &DAT_100eb7dd8;
    local_58 = puVar6;
    aBlock = __Block_copy(&local_80);
    puVar6 = local_58;
    _swift_retain(param_2);
    _swift_release(puVar6);
    IVar9 = objc_stub::dataTaskWithRequest_completionHandler_(IVar9,pNVar5,aBlock);
    __Block_release(aBlock);
    objc_stub::resume(IVar9);
    (**(code **)(lVar10 + 8))(puVar7,UVar1.unknown);
  }
  return;
}



/* Address: 0x10011c9a4 | FUN_10011c9a4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10011c9a4(Data param_1,_StringGuts param_2,ID param_3,void *param_4,code *param_5)

{
  String SVar1;
  ID IVar2;
  NSData *pNVar3;
  char **ppcVar4;
  Data DVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined *extraout_x1;
  _StringGuts _Var8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  void *pvVar13;
  void *pvVar14;
  undefined *puVar15;
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
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String separator;
  String separator_00;
  String separator_01;
  String separator_02;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  String SVar38;
  String separator_03;
  String SVar39;
  String SVar40;
  String SVar41;
  String SVar42;
  String SVar43;
  String SVar44;
  String SVar45;
  String separator_04;
  char local_b8 [24];
  undefined1 auStack_a0 [16];
  char *local_90;
  void *local_88;
  char *local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  if (param_4 == (void *)0x0) {
    if ((ulong)param_2.unknown >> 0x3c < 0xf) {
      if ((param_3 == 0) ||
         (_swift_dynamicCastObjCClass(param_3,&_OBJC_CLASS___NSHTTPURLResponse), param_3 == 0)) {
        if (DAT_101057340 == 1) {
          pcVar11 = &DAT_100fae660;
          FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
          _swift_allocObject();
          pcVar11[0x18] = '\x02';
          pcVar11[0x19] = '\0';
          pcVar11[0x1a] = '\0';
          pcVar11[0x1b] = '\0';
          pcVar11[0x1c] = '\0';
          pcVar11[0x1d] = '\0';
          pcVar11[0x1e] = '\0';
          pcVar11[0x1f] = '\0';
          pcVar11[0x10] = '\x01';
          pcVar11[0x11] = '\0';
          pcVar11[0x12] = '\0';
          pcVar11[0x13] = '\0';
          pcVar11[0x14] = '\0';
          pcVar11[0x15] = '\0';
          pcVar11[0x16] = '\0';
          pcVar11[0x17] = '\0';
          *(undefined **)(pcVar11 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
          pcVar11[0x20] = 'L';
          pcVar11[0x21] = '\0';
          pcVar11[0x22] = '\0';
          pcVar11[0x23] = '\0';
          pcVar11[0x24] = '\0';
          pcVar11[0x25] = '\0';
          pcVar11[0x26] = '\0';
          pcVar11[0x27] = -0x30;
          pcVar11[0x28] = -0x10;
          pcVar11[0x29] = '\x1c';
          pcVar11[0x2a] = -0x27;
          pcVar11[0x2b] = '\0';
          pcVar11[0x2c] = '\x01';
          pcVar11[0x2d] = '\0';
          pcVar11[0x2e] = '\0';
          pcVar11[0x2f] = -0x80;
          FUN_10011da54(param_1.unknown,param_2.unknown);
          SVar16.bridgeObject = (void *)0x20;
          SVar16.str = pcVar11;
          separator_02.bridgeObject = (void *)0xa;
          separator_02.str = (char *)0xe100000000000000;
          Swift::_print(SVar16,separator_02);
          _swift_release(pcVar11);
        }
        else {
          FUN_10011da54(param_1.unknown,param_2.unknown);
        }
        (*param_5)(0,0);
        if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
          FUN_10003bf18(param_1.unknown,param_2.unknown);
          return;
        }
        goto LAB_10011d2d0;
      }
      FUN_10011da54(param_1.unknown,param_2.unknown);
      IVar2 = objc_stub::statusCode(param_3);
      if (IVar2 - 200 < 100) {
        if (DAT_101057340 == 1) {
          pcVar11 = &DAT_100fae660;
          FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
          _swift_allocObject();
          pcVar11[0x18] = '\x02';
          pcVar11[0x19] = '\0';
          pcVar11[0x1a] = '\0';
          pcVar11[0x1b] = '\0';
          pcVar11[0x1c] = '\0';
          pcVar11[0x1d] = '\0';
          pcVar11[0x1e] = '\0';
          pcVar11[0x1f] = '\0';
          pcVar11[0x10] = '\x01';
          pcVar11[0x11] = '\0';
          pcVar11[0x12] = '\0';
          pcVar11[0x13] = '\0';
          pcVar11[0x14] = '\0';
          pcVar11[0x15] = '\0';
          pcVar11[0x16] = '\0';
          pcVar11[0x17] = '\0';
          *(undefined **)(pcVar11 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
          pcVar11[0x20] = ',';
          pcVar11[0x21] = '\0';
          pcVar11[0x22] = '\0';
          pcVar11[0x23] = '\0';
          pcVar11[0x24] = '\0';
          pcVar11[0x25] = '\0';
          pcVar11[0x26] = '\0';
          pcVar11[0x27] = -0x30;
          pcVar11[0x28] = -0x40;
          pcVar11[0x29] = '\x1d';
          pcVar11[0x2a] = -0x27;
          pcVar11[0x2b] = '\0';
          pcVar11[0x2c] = '\x01';
          pcVar11[0x2d] = '\0';
          pcVar11[0x2e] = '\0';
          pcVar11[0x2f] = -0x80;
          SVar20.bridgeObject = (void *)0x20;
          SVar20.str = pcVar11;
          separator_01.bridgeObject = (void *)0xa;
          separator_01.str = (char *)0xe100000000000000;
          Swift::_print(SVar20,separator_01);
          _swift_release(pcVar11);
        }
        pNVar3 = Foundation::Data::_bridgeToObjectiveC(param_1);
        local_90 = (char *)0x0;
        pvVar14 = (void *)0x4;
        IVar2 = NSJSONSerialization::JSONObjectWithData_options_error_
                          ((ID)&_OBJC_CLASS___NSJSONSerialization,pNVar3,4,&local_90);
        if (IVar2 == 0) {
          pcVar10 = local_90;
          _Var8.unknown = extraout_x1;
          Foundation::__convertNSErrorToError();
          _swift_willThrow(0);
          local_90 = (char *)0x0;
          local_88 = (void *)0xe000000000000000;
          Swift::_StringGuts::grow(0x2c,_Var8);
          SVar28.bridgeObject = (void *)0x8000000100d91d90;
          SVar28.str = (char *)0xd00000000000002a;
          SVar44.bridgeObject = pvVar14;
          SVar44.str = (char *)pNVar3;
          Swift::String::append(SVar28,SVar44);
          puVar6 = &DAT_100faf510;
          local_70 = pcVar10;
          FUN_1000f7830(&DAT_100faf510,&DAT_100c2e820);
          puVar15 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
          Swift::__print_unlocked
                    (&local_70,&local_90,puVar6,
                     PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
                     PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
                    );
          pvVar14 = local_88;
          pcVar11 = local_90;
          if (DAT_101057340 == 1) {
            pcVar9 = &DAT_100fae660;
            FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
            pcVar12 = (char *)0x7;
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
            local_90 = (char *)0x676f4874736f505b;
            local_88 = (void *)0xea0000000000205d;
            SVar29.bridgeObject = pvVar14;
            SVar29.str = pcVar11;
            SVar45.bridgeObject = puVar15;
            SVar45.str = pcVar12;
            Swift::String::append(SVar29,SVar45);
            *(undefined **)(pcVar9 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
            *(char **)(pcVar9 + 0x20) = local_90;
            *(void **)(pcVar9 + 0x28) = local_88;
            SVar30.bridgeObject = (void *)0x20;
            SVar30.str = pcVar9;
            separator_04.bridgeObject = (void *)0xa;
            separator_04.str = (char *)0xe100000000000000;
            Swift::_print(SVar30,separator_04);
            _swift_release(pcVar9);
          }
          _swift_bridgeObjectRelease(pvVar14);
          _swift_errorRetain(pcVar10);
          (*param_5)(0,pcVar10);
          FUN_10003bf18(param_1.unknown,param_2.unknown);
          _swift_errorRelease(pcVar10);
          _swift_errorRelease(pcVar10);
        }
        else {
          Swift::__bridgeAnyObjectToAny();
          _swift_unknownObjectRelease(IVar2);
          puVar6 = &DAT_100fae898;
          FUN_1000f7830(&DAT_100fae898,&DAT_100c2e4e0);
          ppcVar4 = &local_70;
          _swift_dynamicCast(ppcVar4,&local_90,PTR___type_metadata_for_Any_100eae0c0 + 8,puVar6,6);
          pcVar11 = local_70;
          if ((int)ppcVar4 == 0) {
            pcVar11 = (char *)0x0;
          }
          (*param_5)(pcVar11,0);
          FUN_10003bf18(param_1.unknown,param_2.unknown);
          _swift_bridgeObjectRelease(pcVar11);
        }
      }
      else {
        pcVar10 = (char *)0x4;
        DVar5.unknown = param_1.unknown;
        _Var8.unknown = param_2.unknown;
        FUN_10016e98c();
        local_90 = (char *)0x0;
        local_88 = (void *)0xe000000000000000;
        Swift::_StringGuts::grow(0x3a,_Var8);
        SVar21.bridgeObject = (void *)0x8000000100d91d40;
        SVar21.str = (char *)0xd00000000000002d;
        SVar33.bridgeObject = param_4;
        SVar33.str = pcVar10;
        Swift::String::append(SVar21,SVar33);
        local_70 = (char *)objc_stub::statusCode(param_3);
        SVar16 = Swift::CustomStringConvertible::get_description();
        SVar34.bridgeObject = param_4;
        SVar34.str = pcVar10;
        Swift::String::append(SVar16,SVar34);
        _swift_bridgeObjectRelease(SVar16.bridgeObject);
        SVar22.bridgeObject = &DAT_e800000000000000;
        SVar22.str = (char *)0x203a79646f62202c;
        SVar35.bridgeObject = param_4;
        SVar35.str = pcVar10;
        Swift::String::append(SVar22,SVar35);
        puVar6 = &DAT_100fafde0;
        local_70 = DVar5.unknown;
        FUN_1000f7830(&DAT_100fafde0,&DAT_100c2fde0);
        SVar16 = Swift::String::_init(&local_70,puVar6);
        SVar36.bridgeObject = param_4;
        SVar36.str = pcVar10;
        Swift::String::append(SVar16,SVar36);
        _swift_bridgeObjectRelease(SVar16.bridgeObject);
        SVar23.bridgeObject = (void *)0xe100000000000000;
        SVar23.str = (char *)0x2e;
        SVar37.bridgeObject = param_4;
        SVar37.str = pcVar10;
        Swift::String::append(SVar23,SVar37);
        pvVar14 = local_88;
        pcVar11 = local_90;
        SVar1.bridgeObject = local_88;
        SVar1.str = local_90;
        if (DAT_101057340 == 1) {
          pcVar9 = &DAT_100fae660;
          FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
          pcVar10 = (char *)0x7;
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
          local_90 = (char *)0x676f4874736f505b;
          local_88 = (void *)0xea0000000000205d;
          SVar38.bridgeObject = param_4;
          SVar38.str = pcVar10;
          Swift::String::append(SVar1,SVar38);
          *(undefined **)(pcVar9 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
          *(char **)(pcVar9 + 0x20) = local_90;
          *(void **)(pcVar9 + 0x28) = local_88;
          SVar24.bridgeObject = (void *)0x20;
          SVar24.str = pcVar9;
          separator_03.bridgeObject = (void *)0xa;
          separator_03.str = (char *)0xe100000000000000;
          param_4 = (void *)0xa;
          pcVar10 = (char *)0xe100000000000000;
          Swift::_print(SVar24,separator_03);
          _swift_release(pcVar9);
        }
        SVar25.bridgeObject = &SUB_e200000000000000;
        SVar25.str = (char *)0x2820;
        SVar39.bridgeObject = param_4;
        SVar39.str = pcVar10;
        local_90 = pcVar11;
        local_88 = pvVar14;
        Swift::String::append(SVar25,SVar39);
        pcVar11 = (char *)0x2;
        SVar16 = Swift::StaticString::get_description((StaticString)0x100d91d90);
        SVar40.bridgeObject = param_4;
        SVar40.str = pcVar11;
        Swift::String::append(SVar16,SVar40);
        _swift_bridgeObjectRelease(SVar16.bridgeObject);
        SVar26.bridgeObject = (void *)0xe100000000000000;
        SVar26.str = &DAT_0000003a;
        SVar41.bridgeObject = param_4;
        SVar41.str = pcVar11;
        Swift::String::append(SVar26,SVar41);
        local_70 = (char *)0x1f6;
        SVar16 = Swift::CustomStringConvertible::get_description();
        SVar42.bridgeObject = param_4;
        SVar42.str = pcVar11;
        Swift::String::append(SVar16,SVar42);
        _swift_bridgeObjectRelease(SVar16.bridgeObject);
        SVar27.bridgeObject = (void *)0xe100000000000000;
        SVar27.str = (char *)0x29;
        puVar7 = (undefined8 *)0x29;
        SVar43.bridgeObject = param_4;
        SVar43.str = pcVar11;
        Swift::String::append(SVar27,SVar43);
        pvVar14 = local_88;
        pcVar11 = local_90;
        FUN_10011da68();
        puVar6 = &DAT_100eb9e08;
        _swift_allocError(&DAT_100eb9e08,puVar7,0,0);
        *puVar7 = pcVar11;
        puVar7[1] = pvVar14;
        (*param_5)(0,puVar6);
        _swift_errorRelease(puVar6);
        FUN_10003bf18(param_1.unknown,param_2.unknown);
      }
    }
    else {
      if (DAT_101057340 == 1) {
        pcVar11 = &DAT_100fae660;
        FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
        _swift_allocObject();
        pcVar11[0x18] = '\x02';
        pcVar11[0x19] = '\0';
        pcVar11[0x1a] = '\0';
        pcVar11[0x1b] = '\0';
        pcVar11[0x1c] = '\0';
        pcVar11[0x1d] = '\0';
        pcVar11[0x1e] = '\0';
        pcVar11[0x1f] = '\0';
        pcVar11[0x10] = '\x01';
        pcVar11[0x11] = '\0';
        pcVar11[0x12] = '\0';
        pcVar11[0x13] = '\0';
        pcVar11[0x14] = '\0';
        pcVar11[0x15] = '\0';
        pcVar11[0x16] = '\0';
        pcVar11[0x17] = '\0';
        *(undefined **)(pcVar11 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
        pcVar11[0x20] = ';';
        pcVar11[0x21] = '\0';
        pcVar11[0x22] = '\0';
        pcVar11[0x23] = '\0';
        pcVar11[0x24] = '\0';
        pcVar11[0x25] = '\0';
        pcVar11[0x26] = '\0';
        pcVar11[0x27] = -0x30;
        pcVar11[0x28] = -0x50;
        pcVar11[0x29] = '\x1c';
        pcVar11[0x2a] = -0x27;
        pcVar11[0x2b] = '\0';
        pcVar11[0x2c] = '\x01';
        pcVar11[0x2d] = '\0';
        pcVar11[0x2e] = '\0';
        pcVar11[0x2f] = -0x80;
        SVar19.bridgeObject = (void *)0x20;
        SVar19.str = pcVar11;
        separator_00.bridgeObject = (void *)0xa;
        separator_00.str = (char *)0xe100000000000000;
        Swift::_print(SVar19,separator_00);
        _swift_release(pcVar11);
      }
      (*param_5)(0,0);
    }
  }
  else {
    local_90 = (char *)0x0;
    local_88 = (void *)0xe000000000000000;
    pvVar13 = param_4;
    _swift_errorRetain(param_4);
    Swift::_StringGuts::grow(0x27,param_2);
    _swift_bridgeObjectRelease(local_88);
    local_90 = (char *)0xd000000000000025;
    local_88 = (void *)0x8000000100d91df0;
    pcVar11 = local_b8;
    _swift_getErrorValue(param_4,auStack_a0);
    SVar16 = (extension_Foundation)::Swift::Error::get_localizedDescription();
    SVar31.bridgeObject = pvVar13;
    SVar31.str = pcVar11;
    Swift::String::append(SVar16,SVar31);
    _swift_bridgeObjectRelease(SVar16.bridgeObject);
    pvVar14 = local_88;
    pcVar11 = local_90;
    if ((DAT_101057340 & 1) != 0) {
      pcVar10 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      pcVar9 = (char *)0x7;
      _swift_allocObject();
      pcVar10[0x18] = '\x02';
      pcVar10[0x19] = '\0';
      pcVar10[0x1a] = '\0';
      pcVar10[0x1b] = '\0';
      pcVar10[0x1c] = '\0';
      pcVar10[0x1d] = '\0';
      pcVar10[0x1e] = '\0';
      pcVar10[0x1f] = '\0';
      pcVar10[0x10] = '\x01';
      pcVar10[0x11] = '\0';
      pcVar10[0x12] = '\0';
      pcVar10[0x13] = '\0';
      pcVar10[0x14] = '\0';
      pcVar10[0x15] = '\0';
      pcVar10[0x16] = '\0';
      pcVar10[0x17] = '\0';
      local_90 = (char *)0x676f4874736f505b;
      local_88 = (void *)0xea0000000000205d;
      SVar17.bridgeObject = pvVar14;
      SVar17.str = pcVar11;
      SVar32.bridgeObject = pvVar13;
      SVar32.str = pcVar9;
      Swift::String::append(SVar17,SVar32);
      *(undefined **)(pcVar10 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      *(char **)(pcVar10 + 0x20) = local_90;
      *(void **)(pcVar10 + 0x28) = local_88;
      SVar18.bridgeObject = (void *)0x20;
      SVar18.str = pcVar10;
      separator.bridgeObject = (void *)0xa;
      separator.str = (char *)0xe100000000000000;
      Swift::_print(SVar18,separator);
      _swift_release(pcVar10);
    }
    _swift_bridgeObjectRelease(pvVar14);
    _swift_errorRetain(param_4);
    (*param_5)(0,param_4);
    _swift_errorRelease(param_4);
    _swift_errorRelease(param_4);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return;
  }
LAB_10011d2d0:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x10011d2d4 | FUN_10011d2d4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10011d2d4(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10011d308 | FUN_10011d308 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10011d308(void)

{
  return ZEXT816(0x100fafcb0);
}



/* Address: 0x10011d328 | _TtC7PostHogP33_8029BAEF3E5842E77DDAAD37085E69E429PostHogRedirectHeaderStripper::URLSession:task:willPerformHTTPRedirection:newRequest:completionHandler: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x38 bytes */

void _TtC7PostHogP33_8029BAEF3E5842E77DDAAD37085E69E429PostHogRedirectHeaderStripper::
     URLSession_task_willPerformHTTPRedirection_newRequest_completionHandler_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,ID param_7,
               undefined4 param_8)

{
  URLRequest_conflict UVar1;
  void *aBlock;
  long extraout_x8;
  long lVar2;
  
  UVar1 = Foundation::URLRequest::typeMetadataAccessor();
  lVar2 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar2 + 0x40));
  aBlock = __Block_copy((void *)param_7);
  Foundation::URLRequest::__unconditionallyBridgeFromObjectiveC((URLRequest_conflict)param_6);
  __Block_copy(aBlock);
  FUN_10011d5d4(&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1,aBlock
               );
  __Block_release(aBlock);
  __Block_release(aBlock);
  (**(code **)(lVar2 + 8))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar1.unknown);
  return;
}



/* Address: 0x10011d454 | _TtC7PostHogP33_8029BAEF3E5842E77DDAAD37085E69E429PostHogRedirectHeaderStripper::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC7PostHogP33_8029BAEF3E5842E77DDAAD37085E69E429PostHogRedirectHeaderStripper::init
             (ID param_1,SEL param_2)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("PostHog.PostHogRedirectHeaderStripper",0x25,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10011d480);
  (*pcVar1)();
}



/* Address: 0x10011d480 | _TtC7PostHogP33_8029BAEF3E5842E77DDAAD37085E69E429PostHogRedirectHeaderStripper::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void _TtC7PostHogP33_8029BAEF3E5842E77DDAAD37085E69E429PostHogRedirectHeaderStripper::_cxx_destruct
               (ID param_1,SEL param_2)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + allowedHost + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + headerKeys));
  return;
}



/* Address: 0x10011d4bc | FUN_10011d4bc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10011d4bc(void)

{
  return ZEXT816(0x100f93750);
}



/* Address: 0x10011d4dc | FUN_10011d4dc */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

bool FUN_10011d4dc(void)

{
  bool bVar1;
  NSError *self;
  ID IVar2;
  _StringGuts _Var3;
  String SVar4;
  String SVar5;
  
  self = Foundation::__convertErrorToNSError();
  objc_stub::domain((ID)self);
  SVar4 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  _Var3.unknown = SVar4.bridgeObject;
  SVar5 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  if (SVar4 == SVar5) {
    _swift_bridgeObjectRelease(_Var3.unknown);
    _swift_bridgeObjectRelease(SVar5.bridgeObject);
  }
  else {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)SVar4.str,_Var3,(_StringComparisonResult)(__int8)SVar5.str);
    _swift_bridgeObjectRelease(_Var3.unknown);
    _swift_bridgeObjectRelease(SVar5.bridgeObject);
    if (!bVar1) {
      return false;
    }
  }
  IVar2 = objc_stub::code((ID)self);
  if (IVar2 == 0xfffffffffffffc17) {
    bVar1 = true;
  }
  else {
    IVar2 = objc_stub::code((ID)self);
    bVar1 = IVar2 == 0xfffffffffffffc13;
  }
  return bVar1;
}



/* Address: 0x10011d5d4 | FUN_10011d5d4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10011d5d4(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  bool bVar3;
  URLRequest_conflict UVar4;
  URLRequest_conflict UVar5;
  URL UVar6;
  URL UVar7;
  _StringGuts _Var8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar10;
  undefined *puVar11;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  NSURLRequest *pNVar12;
  undefined1 *puVar13;
  long lVar14;
  code *pcVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined1 auStack_90 [8];
  _StringGuts local_88;
  undefined *local_80;
  long local_78;
  undefined1 *local_70;
  long local_68;
  
  local_68 = param_3;
  UVar4 = Foundation::URLRequest::typeMetadataAccessor();
  lVar14 = *(long *)(UVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar14 + 0x40));
  puVar13 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar11 = &DAT_100fafdd8;
  FUN_1000f7830(&DAT_100fafdd8,&DAT_100c2e810);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar11 + -8) + 0x40));
  local_70 = puVar13 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar10 = (long)(puVar13 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  local_78 = lVar10;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar11 = (undefined *)(lVar10 - extraout_x12_00);
  local_80 = puVar11;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar16 = (long)puVar11 - extraout_x12_01;
  UVar5.unknown = &DAT_100fae670;
  FUN_1000f7830(&DAT_100fae670,&DAT_100c2e0e8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(UVar5.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = (undefined *)(lVar16 - extraout_x8_01);
  Foundation::URLRequest::_get_url(UVar5);
  UVar6 = Foundation::URL::typeMetadataAccessor();
  lVar10 = *(long *)(UVar6.unknown + -8);
  _Var8.unknown = &DAT_00000001;
  UVar7.unknown = puVar11;
  (**(code **)(lVar10 + 0x30))(puVar11,1,UVar6.unknown);
  if ((int)UVar7.unknown == 1) {
    FUN_1000fb4c4(puVar11,&DAT_100fae670,&DAT_100c2e0e8);
    puVar11 = *(undefined **)
               (param_2 + _TtC7PostHogP33_8029BAEF3E5842E77DDAAD37085E69E429PostHogRedirectHeaderStripper
                          ::allowedHost + 8);
  }
  else {
    Foundation::URL::_get_host(UVar7);
    local_88.unknown = UVar7.unknown;
    (**(code **)(lVar10 + 8))(puVar11,UVar6.unknown);
    puVar11 = (undefined *)
              ((long *)(param_2 +
                       _TtC7PostHogP33_8029BAEF3E5842E77DDAAD37085E69E429PostHogRedirectHeaderStripper
                       ::allowedHost))[1];
    if (_Var8.unknown != (undefined *)0x0) {
      if (puVar11 == (undefined *)0x0) {
        _swift_bridgeObjectRelease(_Var8.unknown);
        goto LAB_10011d800;
      }
      puVar9 = *(undefined **)
                (param_2 +
                _TtC7PostHogP33_8029BAEF3E5842E77DDAAD37085E69E429PostHogRedirectHeaderStripper::
                allowedHost);
      if (local_88.unknown == puVar9 && _Var8.unknown == puVar11) {
        _swift_bridgeObjectRelease(_Var8.unknown);
      }
      else {
        bVar3 = Swift::_stringCompareWithSmolCheck
                          (local_88,_Var8,(_StringComparisonResult)(__int8)puVar9);
        _swift_bridgeObjectRelease(_Var8.unknown);
        if (!bVar3) goto LAB_10011d800;
      }
      goto LAB_10011d938;
    }
  }
  if (puVar11 != (undefined *)0x0) {
LAB_10011d800:
    pcVar15 = *(code **)(lVar14 + 0x10);
    (*pcVar15)(puVar13,param_1,UVar4.unknown);
    lVar10 = *(long *)(*(long *)(param_2 +
                                _TtC7PostHogP33_8029BAEF3E5842E77DDAAD37085E69E429PostHogRedirectHeaderStripper
                                ::headerKeys) + 0x10);
    if (lVar10 != 0) {
      puVar17 = (undefined8 *)
                (*(long *)(param_2 +
                          _TtC7PostHogP33_8029BAEF3E5842E77DDAAD37085E69E429PostHogRedirectHeaderStripper
                          ::headerKeys) + 0x28);
      do {
        UVar5.unknown = (undefined *)puVar17[-1];
        uVar1 = *puVar17;
        _swift_bridgeObjectRetain(uVar1);
        Foundation::URLRequest::_setValue((String)ZEXT816(0),UVar5);
        _swift_bridgeObjectRelease(uVar1);
        puVar17 = puVar17 + 2;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
    lVar10 = local_78;
    (*pcVar15)(local_78,puVar13,UVar4.unknown);
    (**(code **)(lVar14 + 0x38))(lVar10,0,1,UVar4.unknown);
    puVar2 = local_70;
    FUN_1000f8cac(lVar10,local_70,&DAT_100fafdd8,&DAT_100c2e810);
    UVar5.unknown = puVar2;
    (**(code **)(lVar14 + 0x30))(puVar2,1,UVar4.unknown);
    if ((int)UVar5.unknown == 1) {
      pNVar12 = (NSURLRequest *)0x0;
    }
    else {
      pNVar12 = Foundation::URLRequest::_bridgeToObjectiveC(UVar5);
      (**(code **)(lVar14 + 8))(puVar2,UVar4.unknown);
    }
    (**(code **)(local_68 + 0x10))(local_68,pNVar12);
    FUN_1000fb4c4(lVar10,&DAT_100fafdd8,&DAT_100c2e810);
    (**(code **)(lVar14 + 8))(puVar13,UVar4.unknown);
    return;
  }
LAB_10011d938:
  (**(code **)(lVar14 + 0x10))(lVar16,param_1,UVar4.unknown);
  (**(code **)(lVar14 + 0x38))(lVar16,0,1,UVar4.unknown);
  puVar11 = local_80;
  FUN_1000f8cac(lVar16,local_80,&DAT_100fafdd8,&DAT_100c2e810);
  UVar5.unknown = puVar11;
  (**(code **)(lVar14 + 0x30))(puVar11,1,UVar4.unknown);
  if ((int)UVar5.unknown == 1) {
    pNVar12 = (NSURLRequest *)0x0;
  }
  else {
    pNVar12 = Foundation::URLRequest::_bridgeToObjectiveC(UVar5);
    (**(code **)(lVar14 + 8))(puVar11,UVar4.unknown);
  }
  (**(code **)(local_68 + 0x10))(local_68,pNVar12);
  FUN_1000fb4c4(lVar16,&DAT_100fafdd8,&DAT_100c2e810);
  return;
}



/* Address: 0x10011da0c | FUN_10011da0c */

void FUN_10011da0c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x10011da30 | FUN_10011da30 */

void FUN_10011da30(void)

{
  FUN_10011c9a4();
  return;
}



/* Address: 0x10011da38 | FUN_10011da38 */

void FUN_10011da38(long param_1,long param_2)

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



/* Address: 0x10011da4c | FUN_10011da4c */

void FUN_10011da4c(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x10011da54 | FUN_10011da54 */

void FUN_10011da54(undefined8 param_1,ulong param_2)

{
  if (0xe < param_2 >> 0x3c) {
    return;
  }
  FUN_1001037b4();
  return;
}



/* Address: 0x10011da68 | FUN_10011da68 */

void FUN_10011da68(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fafde8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c30020;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c30020,&DAT_100eb9e08);
  DAT_100fafde8 = pTVar1;
  return;
}



/* Address: 0x10011daa8 | thunk_FUN_10011dd10 */

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



/* Address: 0x10011daac | thunk_FUN_10011dbf0 */

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



/* Address: 0x10011dab0 | FUN_10011dab0 */

void FUN_10011dab0(void)

{
  DispatchWorkItemFlags DVar1;
  undefined *puVar2;
  
  if (DAT_100fafdf0 != (undefined *)0x0) {
    return;
  }
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  puVar2 = PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680;
  _swift_getWitnessTable
            (PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680,
             DVar1.unknown);
  DAT_100fafdf0 = puVar2;
  return;
}



/* Address: 0x10011daf4 | FUN_10011daf4 */

void FUN_10011daf4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fafe00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fafdf8;
  FUN_1000f8b08(&DAT_100fafdf8,&DAT_100c2e830);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530,puVar1);
  DAT_100fafe00 = puVar2;
  return;
}



/* Address: 0x10011db44 | thunk_FUN_10011db48 */

void thunk_FUN_10011db48(void)

{
  undefined8 *puVar1;
  URLRequest_conflict UVar2;
  long unaff_x20;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  UVar2 = Foundation::URLRequest::typeMetadataAccessor();
  lVar3 = *(long *)(UVar2.unknown + -8);
  uVar4 = (ulong)*(byte *)(lVar3 + 0x50) + 0x18 &
          ((ulong)*(byte *)(lVar3 + 0x50) ^ 0xffffffffffffffff);
  uVar5 = *(long *)(lVar3 + 0x40) + uVar4 + 7 & 0xfffffffffffffff8;
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar3 + 8))(unaff_x20 + uVar4,UVar2.unknown);
  puVar1 = (undefined8 *)(unaff_x20 + uVar5);
  FUN_10003bf2c(*puVar1,puVar1[1]);
  _swift_release(*(undefined8 *)(unaff_x20 + uVar5 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x10011db48 | FUN_10011db48 */

void FUN_10011db48(void)

{
  undefined8 *puVar1;
  URLRequest_conflict UVar2;
  long unaff_x20;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  UVar2 = Foundation::URLRequest::typeMetadataAccessor();
  lVar3 = *(long *)(UVar2.unknown + -8);
  uVar4 = (ulong)*(byte *)(lVar3 + 0x50) + 0x18 &
          ((ulong)*(byte *)(lVar3 + 0x50) ^ 0xffffffffffffffff);
  uVar5 = *(long *)(lVar3 + 0x40) + uVar4 + 7 & 0xfffffffffffffff8;
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar3 + 8))(unaff_x20 + uVar4,UVar2.unknown);
  puVar1 = (undefined8 *)(unaff_x20 + uVar5);
  FUN_10003bf2c(*puVar1,puVar1[1]);
  _swift_release(*(undefined8 *)(unaff_x20 + uVar5 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x10011dbf0 | FUN_10011dbf0 */

void FUN_10011dbf0(void)

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



/* Address: 0x10011dc64 | thunk_FUN_10011dc68 */

void thunk_FUN_10011dc68(void)

{
  undefined8 *puVar1;
  URLRequest_conflict UVar2;
  long unaff_x20;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  UVar2 = Foundation::URLRequest::typeMetadataAccessor();
  lVar3 = *(long *)(UVar2.unknown + -8);
  uVar4 = (ulong)*(byte *)(lVar3 + 0x50) + 0x20 &
          ((ulong)*(byte *)(lVar3 + 0x50) ^ 0xffffffffffffffff);
  uVar5 = *(long *)(lVar3 + 0x40) + uVar4 + 7 & 0xfffffffffffffff8;
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  (**(code **)(lVar3 + 8))(unaff_x20 + uVar4,UVar2.unknown);
  puVar1 = (undefined8 *)(unaff_x20 + uVar5);
  FUN_10003bf2c(*puVar1,puVar1[1]);
  _swift_release(*(undefined8 *)(unaff_x20 + uVar5 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x10011dc68 | FUN_10011dc68 */

void FUN_10011dc68(void)

{
  undefined8 *puVar1;
  URLRequest_conflict UVar2;
  long unaff_x20;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  UVar2 = Foundation::URLRequest::typeMetadataAccessor();
  lVar3 = *(long *)(UVar2.unknown + -8);
  uVar4 = (ulong)*(byte *)(lVar3 + 0x50) + 0x20 &
          ((ulong)*(byte *)(lVar3 + 0x50) ^ 0xffffffffffffffff);
  uVar5 = *(long *)(lVar3 + 0x40) + uVar4 + 7 & 0xfffffffffffffff8;
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  (**(code **)(lVar3 + 8))(unaff_x20 + uVar4,UVar2.unknown);
  puVar1 = (undefined8 *)(unaff_x20 + uVar5);
  FUN_10003bf2c(*puVar1,puVar1[1]);
  _swift_release(*(undefined8 *)(unaff_x20 + uVar5 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x10011dd10 | FUN_10011dd10 */

void FUN_10011dd10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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



/* Address: 0x10011ddc0 | FUN_10011ddc0 */

void FUN_10011ddc0(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x10011ddec | FUN_10011ddec */

void FUN_10011ddec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  FUN_10011599c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),param_1,param_2,
                param_3,param_4,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28))
  ;
  return;
}



/* Address: 0x10011de08 | FUN_10011de08 */

void FUN_10011de08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  FUN_10011599c(0x73676f6c,&DAT_e400000000000000,param_1,param_2,param_3,param_4,
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10011de2c | FUN_10011de2c */

void FUN_10011de2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  FUN_10011599c(0x746f687370616e73,&DAT_e800000000000000,param_1,param_2,param_3,param_4,
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10011de58 | FUN_10011de58 */

void FUN_10011de58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  FUN_10011599c(0x6863746162,&DAT_e500000000000000,param_1,param_2,param_3,param_4,
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10011de80 | thunk_FUN_10011da0c */

void thunk_FUN_10011da0c(void)

{
  FUN_10011da0c();
  return;
}



/* Address: 0x10011de84 | thunk_FUN_10011da0c */

void thunk_FUN_10011da0c(void)

{
  FUN_10011da0c();
  return;
}



/* Address: 0x10011de88 | thunk_FUN_10011da0c */

void thunk_FUN_10011da0c(void)

{
  FUN_10011da0c();
  return;
}



/* Address: 0x10011de8c | thunk_FUN_10011da38 */

void thunk_FUN_10011da38(void)

{
  FUN_10011da38();
  return;
}



/* Address: 0x10011de90 | thunk_FUN_10011da38 */

void thunk_FUN_10011da38(void)

{
  FUN_10011da38();
  return;
}



/* Address: 0x10011de94 | thunk_FUN_10011da38 */

void thunk_FUN_10011da38(void)

{
  FUN_10011da38();
  return;
}



/* Address: 0x10011de98 | thunk_FUN_10011da38 */

void thunk_FUN_10011da38(void)

{
  FUN_10011da38();
  return;
}



/* Address: 0x10011de9c | thunk_FUN_10011da38 */

void thunk_FUN_10011da38(void)

{
  FUN_10011da38();
  return;
}



/* Address: 0x10011dea0 | thunk_FUN_10011da38 */

void thunk_FUN_10011da38(void)

{
  FUN_10011da38();
  return;
}



/* Address: 0x10011dea4 | thunk_FUN_10011da38 */

void thunk_FUN_10011da38(void)

{
  FUN_10011da38();
  return;
}



/* Address: 0x10011dea8 | thunk_FUN_10011da38 */

void thunk_FUN_10011da38(void)

{
  FUN_10011da38();
  return;
}



/* Address: 0x10011deac | thunk_FUN_10011da4c */

void thunk_FUN_10011da4c(void)

{
  FUN_10011da4c();
  return;
}



/* Address: 0x10011deb0 | thunk_FUN_10011da4c */

void thunk_FUN_10011da4c(void)

{
  FUN_10011da4c();
  return;
}



/* Address: 0x10011deb4 | thunk_FUN_10011da4c */

void thunk_FUN_10011da4c(void)

{
  FUN_10011da4c();
  return;
}


