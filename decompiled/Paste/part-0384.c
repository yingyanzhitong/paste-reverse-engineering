/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1004bb2f4 | FUN_1004bb2f4 */

void FUN_1004bb2f4(Hasher param_1)

{
  String SVar1;
  
  SVar1.bridgeObject = &DAT_e500000000000000;
  SVar1.str = (char *)0x3635325345;
  Swift::String::hash(param_1,SVar1);
  return;
}



/* Address: 0x1004bb308 | FUN_1004bb308 */

void FUN_1004bb308(__int64 param_1)

{
  Hasher into;
  String SVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(param_1);
  into.unknown = auStack_68;
  SVar1.bridgeObject = &DAT_e500000000000000;
  SVar1.str = (char *)0x3635325345;
  Swift::String::hash(into,SVar1);
  Swift::Hasher::_finalize(into);
  return;
}



/* Address: 0x1004bb350 | FUN_1004bb350 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001004bb390 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1004bb350(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  __int64 _Var3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  FUN_1000f7830(&DAT_100fcb810,&DAT_100c51eb0);
  _swift_initStaticObject();
  _Var3 = Swift::_findStringSwitchCase(param_2,uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  *(bool *)param_1 = _Var3 != 0;
  return;
}



/* Address: 0x1004bb3bc | FUN_1004bb3bc */

void FUN_1004bb3bc(undefined8 *param_1)

{
  *param_1 = 0x3635325345;
  param_1[1] = &DAT_e500000000000000;
  return;
}



/* Address: 0x1004bb3d4 | FUN_1004bb3d4 */

undefined1  [16] FUN_1004bb3d4(double param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  String SVar1;
  undefined1 auVar2 [16];
  String SVar3;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0xd00000000000003c;
  if (((uint)param_2.unknown & 0xff) == 1) {
    uStack_38 = 0x8000000100daa630;
  }
  else {
    local_40 = 0;
    uStack_38 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x4c,param_2);
    SVar1.bridgeObject = (void *)0x8000000100daa670;
    SVar1.str = (char *)0xd00000000000004a;
    SVar3.bridgeObject = param_4;
    SVar3.str = param_3;
    Swift::String::append(SVar1,SVar3);
    double::_write((undefined *)&local_40,param_1);
  }
  auVar2._8_8_ = uStack_38;
  auVar2._0_8_ = local_40;
  return auVar2;
}



/* Address: 0x1004bb484 | FUN_1004bb484 */

void FUN_1004bb484(void)

{
  undefined8 *unaff_x20;
  
  FUN_1004bb3d4(*unaff_x20,*(undefined1 *)(unaff_x20 + 1));
  return;
}



/* Address: 0x1004bb490 | FUN_1004bb490 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0001004bbcec) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001004bbce0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined1  [16]
FUN_1004bb490(double param_1,undefined8 param_2,URL param_3,undefined8 param_4,char *param_5,
             void *param_6,char *param_7,String *param_8)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 *puVar3;
  code *pcVar4;
  PrivateKey PVar5;
  UUID UVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  NSDictionary *pNVar10;
  Data DVar11;
  UUID UVar12;
  undefined *puVar13;
  char *pcVar14;
  ECDSASignature EVar15;
  Data DVar16;
  undefined8 extraout_x1;
  undefined8 uVar17;
  undefined8 extraout_x1_00;
  undefined8 uVar18;
  char *pcVar19;
  void *pvVar20;
  void *pvVar21;
  void *pvVar22;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  String *pSVar23;
  long unaff_x21;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  String SVar31;
  String SVar32;
  String pemRepresentation;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  undefined8 auStack_2a0 [4];
  undefined1 auStack_280 [8];
  long local_278;
  undefined *puStack_270;
  long local_268;
  long local_260;
  undefined *local_258;
  Data local_250;
  String *local_248;
  long local_240;
  undefined *puStack_238;
  undefined1 *local_230;
  undefined8 local_228;
  char *local_220;
  void *local_218;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  String local_1d0;
  String local_1c0 [21];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_228 = param_4;
  local_220 = param_5;
  local_218 = param_6;
  puStack_238 = (undefined *)CryptoKit::P256::Signing::ECDSASignature::typeMetadataAccessor();
  local_240 = *(long *)(puStack_238 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_240 + 0x40));
  local_230 = auStack_280 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  PVar5 = CryptoKit::P256::Signing::PrivateKey::typeMetadataAccessor();
  lVar25 = *(long *)(PVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar25 + 0x40));
  lVar26 = (long)(auStack_280 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  UVar6 = Foundation::UUID::typeMetadataAccessor();
  lVar27 = *(long *)(UVar6.unknown + -8);
  UVar12 = UVar6;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar27 + 0x40));
  lVar24 = lVar26 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  if (param_1 <= 0.0) {
    FUN_1004bcb4c();
    _swift_allocError(&DAT_100ed9b50,UVar12.unknown,0,0);
    *(double *)UVar12.unknown = param_1;
    *(undefined1 *)((long)UVar12.unknown + 8) = 0;
  }
  else {
    puVar7 = &DAT_100fcb888;
    local_278 = lVar25;
    puStack_270 = PVar5.unknown;
    local_260 = lVar26;
    local_248 = param_8;
    FUN_1000f7830(&DAT_100fcb888,&DAT_100c50540);
    _swift_initStaticObject();
    puVar8 = puVar7;
    FUN_1004a66a4();
    puVar9 = &DAT_100fcb890;
    FUN_1000f7830(&DAT_100fcb890,&DAT_100c519e0);
    _swift_arrayDestroy(puVar7 + 0x20,2,puVar9);
    pNVar10 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(puVar8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_1c0[0].bridgeObject;
    local_1c0[0] = (String)(auVar1 << 0x40);
    local_258 = &_OBJC_CLASS___NSJSONSerialization;
    DVar11.unknown =
         (undefined *)
         NSJSONSerialization::dataWithJSONObject_options_error_
                   (&_OBJC_CLASS___NSJSONSerialization,pNVar10,0,local_1c0);
    param_8 = (String *)local_1c0[0].str;
    if (DVar11.unknown != (undefined *)0x0) {
      uVar17 = extraout_x1;
      DVar11 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar11);
      dVar28 = Foundation::Date::get_timeIntervalSince1970((Date)0x0);
      if (0x7fefffffffffffff < (ulong)ABS(dVar28)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1004bbefc);
        (*pcVar4)();
      }
      if (dVar28 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1004bbf00);
        (*pcVar4)();
      }
      if (9.223372036854776e+18 <= dVar28) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1004bbf04);
        (*pcVar4)();
      }
      dVar29 = (double)(long)param_1;
      if (0x7fe < (ulong)dVar29 >> 0x34) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1004bbf08);
        (*pcVar4)();
      }
      if (dVar29 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1004bbf0c);
        (*pcVar4)();
      }
      if (9.223372036854776e+18 <= dVar29) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1004bbf10);
        (*pcVar4)();
      }
      lVar25 = (long)dVar28;
      local_268 = (long)dVar29;
      if (local_268 < 2) {
        local_268 = 1;
      }
      puVar7 = &DAT_100fcb730;
      local_250 = DVar11;
      FUN_1000f7830(&DAT_100fcb730,&DAT_100c50520);
      _swift_initStackObject();
      pSVar23 = local_248;
      *(undefined8 *)(puVar7 + 0x18) = 0xc;
      *(undefined8 *)(puVar7 + 0x10) = 6;
      *(undefined8 *)(puVar7 + 0x20) = 0x737369;
      *(undefined8 *)(puVar7 + 0x28) = 0xe300000000000000;
      *(undefined8 *)(puVar7 + 0x30) = param_2;
      *(undefined **)(puVar7 + 0x38) = param_3.unknown;
      puVar9 = PTR___type_metadata_for_Swift_String_100eac208;
      *(undefined **)(puVar7 + 0x48) = PTR___type_metadata_for_Swift_String_100eac208;
      *(undefined8 *)(puVar7 + 0x50) = 0x627573;
      *(undefined8 *)(puVar7 + 0x58) = 0xe300000000000000;
      *(undefined8 *)(puVar7 + 0x60) = param_2;
      *(undefined **)(puVar7 + 0x68) = param_3.unknown;
      *(undefined **)(puVar7 + 0x78) = puVar9;
      *(undefined8 *)(puVar7 + 0x80) = 0x647561;
      *(undefined8 *)(puVar7 + 0x88) = 0xe300000000000000;
      *(undefined **)(puVar7 + 0xa8) = puVar9;
      if (local_248 == (String *)0x0) {
        _swift_bridgeObjectRetain_n(param_3.unknown,2);
        SVar31 = Foundation::URL::get_absoluteString(param_3);
        pSVar23 = local_248;
      }
      else {
        _swift_bridgeObjectRetain_n(param_3.unknown,2);
        SVar31.bridgeObject = pSVar23;
        SVar31.str = param_7;
      }
      *(String *)(puVar7 + 0x90) = SVar31;
      *(undefined8 *)(puVar7 + 0xb0) = 0x746169;
      *(undefined8 *)(puVar7 + 0xb8) = 0xe300000000000000;
      puVar9 = PTR___type_metadata_for_Swift_Int_100eac6f8;
      *(long *)(puVar7 + 0xc0) = lVar25;
      *(undefined **)(puVar7 + 0xd8) = puVar9;
      *(undefined8 *)(puVar7 + 0xe0) = 0x707865;
      *(undefined8 *)(puVar7 + 0xe8) = 0xe300000000000000;
      if (SCARRY8(lVar25,local_268)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1004bbf14);
        (*pcVar4)();
      }
      *(long *)(puVar7 + 0xf0) = lVar25 + local_268;
      *(undefined **)(puVar7 + 0x108) = puVar9;
      *(undefined8 *)(puVar7 + 0x110) = 0x69746a;
      *(undefined8 *)(puVar7 + 0x118) = 0xe300000000000000;
      _swift_bridgeObjectRetain(pSVar23);
      UVar12 = Foundation::UUID::init();
      SVar31 = Foundation::UUID::get_uuidString(UVar12);
      puVar8 = PTR___type_metadata_for_Swift_String_100eac208;
      *(undefined **)(puVar7 + 0x138) = PTR___type_metadata_for_Swift_String_100eac208;
      *(String *)(puVar7 + 0x120) = SVar31;
      (**(code **)(lVar27 + 8))(lVar24,UVar6.unknown);
      puVar13 = puVar7;
      FUN_1004a67b4(puVar7);
      _swift_setDeallocating(puVar7);
      puVar9 = &DAT_100fcb4b0;
      FUN_1000f7830(&DAT_100fcb4b0,&DAT_100c50300);
      _swift_arrayDestroy(puVar7 + 0x20,6,puVar9);
      UVar6.unknown = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(puVar13);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_1c0[0].bridgeObject;
      local_1c0[0] = (String)(auVar2 << 0x40);
      DVar11.unknown =
           (undefined *)
           objc_stub::dataWithJSONObject_options_error_(local_258,UVar6.unknown,0,local_1c0);
      param_8 = (String *)local_1c0[0].str;
      if (DVar11.unknown == (undefined *)0x0) {
        Foundation::__convertNSErrorToError();
        _swift_willThrow(0);
        FUN_10003bf2c(local_250.unknown,uVar17);
      }
      else {
        uVar18 = extraout_x1_00;
        DVar11 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar11);
        SVar31 = Foundation::Data::base64EncodedString((NSDataBase64EncodingOptions)0x0,local_250);
        pvVar20 = SVar31.bridgeObject;
        local_1d0.str = (char *)0x2b;
        local_1d0.bridgeObject = (void *)0xe100000000000000;
        local_1e0 = 0x2d;
        local_1d8 = 0xe100000000000000;
        local_1c0[0] = SVar31;
        FUN_1004b8f18();
        pcVar14 = SVar31.str;
        *(char **)(lVar24 + -0x10) = pcVar14;
        *(char **)(lVar24 + -8) = pcVar14;
        *(undefined **)(lVar24 + -0x20) = puVar8;
        *(char **)(lVar24 + -0x18) = pcVar14;
        SVar31 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                           (&local_1d0,&local_1e0,0,0,0,1,puVar8,puVar8);
        _swift_bridgeObjectRelease(pvVar20);
        local_1d0.str = (char *)0x2f;
        local_1d0.bridgeObject = (void *)0xe100000000000000;
        local_1e0 = 0x5f;
        local_1d8 = 0xe100000000000000;
        local_1c0[0] = SVar31;
        *(char **)(lVar24 + -0x10) = pcVar14;
        *(char **)(lVar24 + -8) = pcVar14;
        *(undefined **)(lVar24 + -0x20) = puVar8;
        *(char **)(lVar24 + -0x18) = pcVar14;
        SVar32 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                           (&local_1d0,&local_1e0,0,0,0,1,puVar8,puVar8);
        _swift_bridgeObjectRelease(SVar31.bridgeObject);
        local_1d0.bridgeObject = (void *)0xe100000000000000;
        local_1d0.str = (char *)0x3d;
        local_1e0 = 0;
        local_1d8 = 0xe000000000000000;
        local_1c0[0] = SVar32;
        *(char **)(lVar24 + -0x10) = pcVar14;
        *(char **)(lVar24 + -8) = pcVar14;
        *(undefined **)(lVar24 + -0x20) = puVar8;
        *(char **)(lVar24 + -0x18) = pcVar14;
        pcVar19 = (char *)0x0;
        pvVar20 = (void *)0x0;
        SVar31 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                           (&local_1d0,&local_1e0,0,0,0,1,puVar8,puVar8);
        _swift_bridgeObjectRelease(SVar32.bridgeObject);
        SVar32.bridgeObject = (void *)0xe100000000000000;
        SVar32.str = (char *)0x2e;
        SVar34.bridgeObject = pvVar20;
        SVar34.str = pcVar19;
        local_1c0[0] = SVar31;
        Swift::String::append(SVar32,SVar34);
        local_1d0 = Foundation::Data::base64EncodedString((NSDataBase64EncodingOptions)0x0,DVar11);
        pvVar20 = local_1d0.bridgeObject;
        local_1e0 = 0x2b;
        local_1d8 = 0xe100000000000000;
        local_1f0 = 0x2d;
        uStack_1e8 = 0xe100000000000000;
        *(char **)(lVar24 + -0x10) = pcVar14;
        *(char **)(lVar24 + -8) = pcVar14;
        *(undefined **)(lVar24 + -0x20) = puVar8;
        *(char **)(lVar24 + -0x18) = pcVar14;
        SVar31 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                           (&local_1e0,&local_1f0,0,0,0,1,puVar8,puVar8);
        _swift_bridgeObjectRelease(pvVar20);
        local_1e0 = 0x2f;
        local_1d8 = 0xe100000000000000;
        local_1f0 = 0x5f;
        uStack_1e8 = 0xe100000000000000;
        local_1d0 = SVar31;
        *(char **)(lVar24 + -0x10) = pcVar14;
        *(char **)(lVar24 + -8) = pcVar14;
        *(undefined **)(lVar24 + -0x20) = puVar8;
        *(char **)(lVar24 + -0x18) = pcVar14;
        SVar32 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                           (&local_1e0,&local_1f0,0,0,0,1,puVar8,puVar8);
        UVar6.unknown = SVar32.bridgeObject;
        _swift_bridgeObjectRelease(SVar31.bridgeObject);
        local_1e0 = 0x3d;
        local_1d8 = 0xe100000000000000;
        local_1f0 = 0;
        uStack_1e8 = 0xe000000000000000;
        local_1d0 = SVar32;
        *(char **)(lVar24 + -0x10) = pcVar14;
        *(char **)(lVar24 + -8) = pcVar14;
        *(undefined **)(lVar24 + -0x20) = puVar8;
        *(char **)(lVar24 + -0x18) = pcVar14;
        pcVar19 = (char *)0x0;
        pvVar21 = (void *)0x0;
        SVar31 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                           (&local_1e0,&local_1f0,0,0,0,1,puVar8,puVar8);
        _swift_bridgeObjectRelease(UVar6.unknown);
        param_8 = local_1c0;
        SVar35.bridgeObject = pvVar21;
        SVar35.str = pcVar19;
        Swift::String::append(SVar31,SVar35);
        _swift_bridgeObjectRelease(SVar31.bridgeObject);
        SVar31 = local_1c0[0];
        pvVar20 = local_218;
        pcVar19 = local_1c0[0].str;
        pvVar22 = local_1c0[0].bridgeObject;
        _swift_bridgeObjectRetain(local_218);
        lVar25 = local_260;
        pemRepresentation.bridgeObject = pvVar20;
        pemRepresentation.str = local_220;
        CryptoKit::P256::Signing::PrivateKey::_init(pemRepresentation);
        if (unaff_x21 == 0) {
          _swift_bridgeObjectRetain(pvVar22);
          FUN_1004bac0c();
          local_1c0[0].str = pcVar19;
          local_1c0[0].bridgeObject = pvVar22;
          FUN_1004bcb8c();
          puVar3 = local_230;
          CryptoKit::P256::Signing::PrivateKey::_signature
                    (local_230,pcVar19,PTR___type_metadata_for_Foundation_Data_100ea7300);
          EVar15.unknown = local_1c0[0].str;
          pvVar20 = local_1c0[0].bridgeObject;
          FUN_10003bf2c();
          DVar16 = CryptoKit::P256::Signing::ECDSASignature::get_rawRepresentation(EVar15);
          local_218 = pvVar20;
          (**(code **)(local_240 + 8))(puVar3,puStack_238);
          SVar33.bridgeObject = (void *)0xe100000000000000;
          SVar33.str = (char *)0x2e;
          SVar36.bridgeObject = pvVar21;
          SVar36.str = pcVar19;
          local_1c0[0] = SVar31;
          Swift::String::append(SVar33,SVar36);
          pvVar20 = local_218;
          local_1d0 = Foundation::Data::base64EncodedString((NSDataBase64EncodingOptions)0x0,DVar16)
          ;
          puVar7 = PTR___type_metadata_for_Swift_String_100eac208;
          pvVar22 = local_1d0.bridgeObject;
          local_1e0 = 0x2b;
          local_1d8 = 0xe100000000000000;
          local_1f0 = 0x2d;
          uStack_1e8 = 0xe100000000000000;
          *(char **)(lVar24 + -0x10) = pcVar14;
          *(char **)(lVar24 + -8) = pcVar14;
          *(char **)(lVar24 + -0x18) = pcVar14;
          *(undefined **)(lVar24 + -0x20) = PTR___type_metadata_for_Swift_String_100eac208;
          SVar31 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                             (&local_1e0,&local_1f0,0,0,0,1,
                              PTR___type_metadata_for_Swift_String_100eac208,
                              PTR___type_metadata_for_Swift_String_100eac208);
          _swift_bridgeObjectRelease(pvVar22);
          local_1e0 = 0x2f;
          local_1d8 = 0xe100000000000000;
          local_1f0 = 0x5f;
          uStack_1e8 = 0xe100000000000000;
          local_1d0 = SVar31;
          *(char **)(lVar24 + -0x10) = pcVar14;
          *(char **)(lVar24 + -8) = pcVar14;
          *(undefined **)(lVar24 + -0x20) = puVar7;
          *(char **)(lVar24 + -0x18) = pcVar14;
          SVar32 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                             (&local_1e0,&local_1f0,0,0,0,1,puVar7,puVar7);
          _swift_bridgeObjectRelease(SVar31.bridgeObject);
          local_1e0 = 0x3d;
          local_1d8 = 0xe100000000000000;
          local_1f0 = 0;
          uStack_1e8 = 0xe000000000000000;
          local_1d0 = SVar32;
          *(char **)(lVar24 + -0x10) = pcVar14;
          *(char **)(lVar24 + -8) = pcVar14;
          *(undefined **)(lVar24 + -0x20) = puVar7;
          *(char **)(lVar24 + -0x18) = pcVar14;
          pcVar19 = (char *)0x0;
          pvVar22 = (void *)0x0;
          SVar31 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                             (&local_1e0,&local_1f0,0,0,0,1,puVar7,puVar7);
          _swift_bridgeObjectRelease(SVar32.bridgeObject);
          SVar37.bridgeObject = pvVar22;
          SVar37.str = pcVar19;
          Swift::String::append(SVar31,SVar37);
          _swift_bridgeObjectRelease(SVar31.bridgeObject);
          FUN_10003bf2c(DVar16.unknown,pvVar20);
          FUN_10003bf2c(DVar11.unknown,uVar18);
          FUN_10003bf2c(local_250.unknown,uVar17);
          param_8 = (String *)local_1c0[0].str;
          UVar6.unknown = local_1c0[0].bridgeObject;
          (**(code **)(local_278 + 8))(lVar25,puStack_270);
        }
        else {
          FUN_10003bf2c(DVar11.unknown,uVar18);
          FUN_10003bf2c(local_250.unknown,uVar17);
          _swift_bridgeObjectRelease(pvVar22);
        }
      }
      goto LAB_1004bb7fc;
    }
    Foundation::__convertNSErrorToError();
  }
  _swift_willThrow();
LAB_1004bb7fc:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  auVar30._8_8_ = UVar6.unknown;
  auVar30._0_8_ = param_8;
  return auVar30;
}



/* Address: 0x1004bbf18 | FUN_1004bbf18 */

void FUN_1004bbf18(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                  void *param_5)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  URL UVar5;
  undefined1 *puVar6;
  _StringGuts _Var7;
  long extraout_x8;
  undefined1 *puVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  undefined1 auStack_50 [8];
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  puVar3 = &DAT_100fcb378;
  _Var7.unknown = &DAT_100c50170;
  FUN_1000f7830();
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_50 + -extraout_x8;
  lVar4 = 0x4000;
  FUN_100324c28();
  local_40 = 0;
  local_38 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x15,_Var7);
  _swift_bridgeObjectRelease(local_38);
  local_40 = 0xd000000000000011;
  local_38 = 0x8000000100daa6c0;
  local_48 = lVar4 + 0xc000;
  SVar9 = Swift::CustomStringConvertible::get_description();
  SVar10.bridgeObject = param_5;
  SVar10.str = param_4;
  Swift::String::append(SVar9,SVar10);
  _swift_bridgeObjectRelease(SVar9.bridgeObject);
  SVar9.bridgeObject = (void *)0xe90000000000006b;
  SVar9.str = (char *)0x6361626c6c61632f;
  SVar11.bridgeObject = param_5;
  SVar11.str = param_4;
  Swift::String::append(SVar9,SVar11);
  uVar1 = local_38;
  Foundation::URL::_init();
  _swift_bridgeObjectRelease(uVar1);
  UVar5 = Foundation::URL::typeMetadataAccessor();
  lVar4 = *(long *)(UVar5.unknown + -8);
  puVar6 = puVar8;
  (**(code **)(lVar4 + 0x30))(puVar8,1,UVar5.unknown);
  if ((int)puVar6 != 1) {
    (**(code **)(lVar4 + 0x20))(param_1,puVar8,UVar5.unknown);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1004bc06c);
  (*pcVar2)();
}



/* Address: 0x1004bc06c | FUN_1004bc06c */

undefined1  [16] FUN_1004bc06c(long param_1,long param_2)

{
  undefined1 auVar1 [16];
  
  if (param_1 < 2) {
    param_1 = 1;
  }
  if (param_2 < 2) {
    param_2 = 1;
  }
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Address: 0x1004bc080 | FUN_1004bc080 */

undefined * FUN_1004bc080(void)

{
  return &DAT_100c50530;
}



/* Address: 0x1004bc08c | FUN_1004bc08c */

undefined1  [16] FUN_1004bc08c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 2;
  auVar1._0_8_ = 3;
  return auVar1;
}



/* Address: 0x1004bc098 | FUN_1004bc098 */

void FUN_1004bc098(void)

{
  FUN_1000f8cac();
  return;
}



/* Address: 0x1004bc0c4 | FUN_1004bc0c4 */

void FUN_1004bc0c4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_1004bcbcc();
  FUN_1000f8cac(unaff_x20 + *(int *)(lVar1 + 0x14),param_1,&DAT_100fcb378,&DAT_100c50170);
  return;
}



/* Address: 0x1004bc108 | FUN_1004bc108 */

void FUN_1004bc108(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_1004bcbcc();
  FUN_1000f8cac(unaff_x20 + *(int *)(lVar1 + 0x18),param_1,&DAT_100fcb378,&DAT_100c50170);
  return;
}



/* Address: 0x1004bc14c | FUN_1004bc14c */

void FUN_1004bc14c(void)

{
  FUN_1004bc3ec(FUN_1004bcbcc);
  return;
}



/* Address: 0x1004bc158 | FUN_1004bc158 */

void FUN_1004bc158(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  FUN_1004ba778(param_2,param_1);
  lVar1 = 0;
  FUN_1004bcbcc();
  FUN_1004ba778(param_3,param_1 + *(int *)(lVar1 + 0x14));
  FUN_1004ba778(param_4,param_1 + *(int *)(lVar1 + 0x18));
  FUN_1004ba778(param_5,param_1 + *(int *)(lVar1 + 0x1c));
  return;
}



/* Address: 0x1004bc1d0 | FUN_1004bc1d0 */

void FUN_1004bc1d0(void)

{
  long lVar1;
  long lVar2;
  URL UVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  lVar1 = 0;
  FUN_1004bcbcc();
  FUN_1000ce204();
  lVar2 = lVar1;
  FUN_1000cd990(lVar1,&DAT_101057ae0);
  UVar3 = Foundation::URL::typeMetadataAccessor();
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(UVar3.unknown + -8) + 0x38);
  (*UNRECOVERED_JUMPTABLE)(lVar2,1,1,UVar3.unknown);
  (*UNRECOVERED_JUMPTABLE)(lVar2 + *(int *)(lVar1 + 0x14),1,1,UVar3.unknown);
  (*UNRECOVERED_JUMPTABLE)(lVar2 + *(int *)(lVar1 + 0x18),1,1,UVar3.unknown);
                    /* WARNING: Could not recover jumptable at 0x0001004bc2a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(lVar2 + *(int *)(lVar1 + 0x1c),1,1,UVar3.unknown);
  return;
}



/* Address: 0x1004bc2a4 | FUN_1004bc2a4 */

void FUN_1004bc2a4(void)

{
  if (DAT_100fcb8a0 != -1) {
    _swift_once(&DAT_100fcb8a0,FUN_1004bc1d0);
  }
  FUN_1004bcbcc(0);
  FUN_1000cd990();
  return;
}



/* Address: 0x1004bc2ec | FUN_1004bc2ec */

void FUN_1004bc2ec(void)

{
  if (DAT_100fcb8a0 != -1) {
    _swift_once(&DAT_100fcb8a0,FUN_1004bc1d0);
  }
  FUN_1004bcbcc(0);
  FUN_1000cd990();
  FUN_1004bcbe0();
  return;
}



/* Address: 0x1004bc348 | FUN_1004bc348 */

void FUN_1004bc348(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  URL UVar3;
  long unaff_x20;
  
  lVar2 = 0;
  FUN_1004ba764();
  iVar1 = *(int *)(lVar2 + 0x14);
  UVar3 = Foundation::URL::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001004bc390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(UVar3.unknown + -8) + 0x10))(param_1,unaff_x20 + iVar1,UVar3.unknown);
  return;
}



/* Address: 0x1004bc394 | FUN_1004bc394 */

void FUN_1004bc394(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  URL UVar3;
  long unaff_x20;
  
  lVar2 = 0;
  FUN_1004ba764();
  iVar1 = *(int *)(lVar2 + 0x18);
  UVar3 = Foundation::URL::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001004bc3dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(UVar3.unknown + -8) + 0x10))(param_1,unaff_x20 + iVar1,UVar3.unknown);
  return;
}



/* Address: 0x1004bc3e0 | FUN_1004bc3e0 */

void FUN_1004bc3e0(void)

{
  FUN_1004bc3ec(FUN_1004ba764);
  return;
}



/* Address: 0x1004bc3ec | FUN_1004bc3ec */

void FUN_1004bc3ec(undefined8 param_1,code *param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  (*param_2)();
  FUN_1000f8cac(unaff_x20 + *(int *)(lVar1 + 0x1c),param_1,&DAT_100fcb378,&DAT_100c50170);
  return;
}



/* Address: 0x1004bc434 | FUN_1004bc434 */

void FUN_1004bc434(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_1004ba764();
  FUN_1000f8cac(unaff_x20 + *(int *)(lVar1 + 0x20),param_1,&DAT_100fcb378,&DAT_100c50170);
  return;
}



/* Address: 0x1004bc478 | FUN_1004bc478 */

void FUN_1004bc478(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_1004ba764();
  FUN_1000f8cac(unaff_x20 + *(int *)(lVar1 + 0x24),param_1,&DAT_100fcb378,&DAT_100c50170);
  return;
}



/* Address: 0x1004bc4bc | FUN_1004bc4bc */

void FUN_1004bc4bc(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_1004ba764();
  FUN_1000f8cac(unaff_x20 + *(int *)(lVar1 + 0x28),param_1,&DAT_100fcb378,&DAT_100c50170);
  return;
}



/* Address: 0x1004bc500 | FUN_1004bc500 */

undefined1  [16] FUN_1004bc500(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long lVar3;
  long unaff_x20;
  
  lVar3 = 0;
  FUN_1004ba764();
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + *(int *)(lVar3 + 0x2c));
  auVar2 = *pauVar1;
  _swift_bridgeObjectRetain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Address: 0x1004bc53c | FUN_1004bc53c */

void FUN_1004bc53c(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_1004ba764();
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + *(int *)(lVar1 + 0x30)));
  return;
}



/* Address: 0x1004bc55c | FUN_1004bc55c */

void FUN_1004bc55c(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_1004ba764();
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + *(int *)(lVar1 + 0x34)));
  return;
}



/* Address: 0x1004bc57c | FUN_1004bc57c */

void FUN_1004bc57c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1004b8ab4(unaff_x20 + 8,param_1);
  return;
}



/* Address: 0x1004bc588 | FUN_1004bc588 */

void FUN_1004bc588(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1004bcc24(param_1,unaff_x20 + 8);
  return;
}



/* Address: 0x1004bc590 | FUN_1004bc590 */

undefined1  [16] FUN_1004bc590(void)

{
  long unaff_x20;
  
  return *(undefined1 (*) [16])(unaff_x20 + 0x30);
}



/* Address: 0x1004bc598 | FUN_1004bc598 */

void FUN_1004bc598(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_1004bcc58();
  FUN_1004bcbe0(unaff_x20 + *(int *)(lVar1 + 0x1c),param_1);
  return;
}



/* Address: 0x1004bc5c8 | FUN_1004bc5c8 */

undefined1 FUN_1004bc5c8(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_1004bcc58();
  return *(undefined1 *)(unaff_x20 + *(int *)(lVar1 + 0x20));
}



/* Address: 0x1004bc5e8 | FUN_1004bc5e8 */

void FUN_1004bc5e8(undefined1 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_1004bcc58();
  *(undefined1 *)(unaff_x20 + *(int *)(lVar1 + 0x20)) = param_1;
  return;
}



/* Address: 0x1004bc614 | FUN_1004bc614 */

undefined1  [16] FUN_1004bc614(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = 0;
  FUN_1004bcc58();
  auVar2._8_8_ = unaff_x20 + *(int *)(lVar1 + 0x20);
  auVar2._0_8_ = FUN_100004520;
  return auVar2;
}



/* Address: 0x1004bc63c | FUN_1004bc63c */

void FUN_1004bc63c(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  URL UVar3;
  long unaff_x20;
  
  lVar2 = 0;
  FUN_1004bcc58();
  iVar1 = *(int *)(lVar2 + 0x24);
  UVar3 = Foundation::URL::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001004bc684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(UVar3.unknown + -8) + 0x10))(param_1,unaff_x20 + iVar1,UVar3.unknown);
  return;
}



/* Address: 0x1004bc688 | FUN_1004bc688 */

void FUN_1004bc688(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_1004bcc58();
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + *(int *)(lVar1 + 0x28)));
  return;
}



/* Address: 0x1004bc6a8 | FUN_1004bc6a8 */

undefined1  [16] FUN_1004bc6a8(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long lVar3;
  long unaff_x20;
  
  lVar3 = 0;
  FUN_1004bcc58();
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + *(int *)(lVar3 + 0x2c));
  auVar2 = *pauVar1;
  _swift_bridgeObjectRetain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Address: 0x1004bc6e4 | FUN_1004bc6e4 */

undefined1  [16] FUN_1004bc6e4(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long lVar3;
  long unaff_x20;
  
  lVar3 = 0;
  FUN_1004bcc58();
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + *(int *)(lVar3 + 0x30));
  auVar2 = *pauVar1;
  FUN_100011128(*(undefined8 *)*pauVar1,*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Address: 0x1004bc724 | FUN_1004bc724 */

void FUN_1004bc724(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_1004bcc58();
  FUN_1000f8cac(unaff_x20 + *(int *)(lVar1 + 0x34),param_1,&DAT_100fcb4c8,&DAT_100c504b0);
  return;
}



/* Address: 0x1004bc768 | FUN_1004bc768 */

undefined8 FUN_1004bc768(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_1004bcc58();
  return *(undefined8 *)(unaff_x20 + *(int *)(lVar1 + 0x38));
}



/* Address: 0x1004bc788 | FUN_1004bc788 */

void FUN_1004bc788(undefined1 *param_1,undefined8 param_2,undefined1 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 *param_14)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  URL UVar5;
  undefined1 *puVar6;
  long extraout_x8;
  undefined1 *puVar7;
  code *pcVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  local_90 = param_12;
  local_88 = param_13;
  local_98 = param_11;
  puVar3 = &DAT_100fcb378;
  local_80 = param_9;
  uStack_78 = param_10;
  FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_a0 + -extraout_x8;
  *param_1 = param_3;
  uVar10 = *param_4;
  uVar12 = param_4[3];
  uVar11 = param_4[2];
  *(undefined8 *)(param_1 + 0x10) = param_4[1];
  *(undefined8 *)(param_1 + 8) = uVar10;
  *(undefined8 *)(param_1 + 0x20) = uVar12;
  *(undefined8 *)(param_1 + 0x18) = uVar11;
  param_1[0x28] = *(undefined1 *)(param_4 + 4);
  *(undefined8 *)(param_1 + 0x30) = param_5;
  *(undefined8 *)(param_1 + 0x38) = param_6;
  lVar4 = 0;
  FUN_1004bcc58();
  FUN_1004bcbe0(param_7,param_1 + *(int *)(lVar4 + 0x1c));
  param_1[*(int *)(lVar4 + 0x20)] = 0;
  FUN_1000f8cac(param_8,puVar7,&DAT_100fcb378,&DAT_100c50170);
  iVar2 = *(int *)(lVar4 + 0x24);
  UVar5 = Foundation::URL::typeMetadataAccessor();
  lVar9 = *(long *)(UVar5.unknown + -8);
  pcVar8 = *(code **)(lVar9 + 0x30);
  puVar6 = puVar7;
  (*pcVar8)(puVar7,1,UVar5.unknown);
  if ((int)puVar6 == 1) {
    FUN_1004bbf18(param_1 + iVar2);
    FUN_1000fb4c4(param_8,&DAT_100fcb378,&DAT_100c50170);
    FUN_1004bcc6c(param_7);
    puVar6 = puVar7;
    (*pcVar8)(puVar7,1,UVar5.unknown);
    if ((int)puVar6 != 1) {
      FUN_1000fb4c4(puVar7,&DAT_100fcb378,&DAT_100c50170);
    }
  }
  else {
    FUN_1000fb4c4(param_8,&DAT_100fcb378,&DAT_100c50170);
    FUN_1004bcc6c(param_7);
    (**(code **)(lVar9 + 0x20))(param_1 + iVar2,puVar7,UVar5.unknown);
  }
  iVar2 = *(int *)(lVar4 + 0x2c);
  *(undefined8 *)(param_1 + iVar2) = local_80;
  *(undefined8 *)((long)(param_1 + iVar2) + 8) = uStack_78;
  *(undefined8 *)(param_1 + *(int *)(lVar4 + 0x28)) = local_98;
  iVar2 = *(int *)(lVar4 + 0x30);
  *(undefined8 *)(param_1 + iVar2) = local_90;
  *(undefined8 *)((long)(param_1 + iVar2) + 8) = local_88;
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar4 + 0x34));
  uVar10 = *param_14;
  uVar12 = param_14[3];
  uVar11 = param_14[2];
  puVar1[1] = param_14[1];
  *puVar1 = uVar10;
  puVar1[3] = uVar12;
  puVar1[2] = uVar11;
  puVar1[4] = param_14[4];
  *(undefined8 *)(param_1 + *(int *)(lVar4 + 0x38)) = param_2;
  return;
}



/* Address: 0x1004bc9a8 | FUN_1004bc9a8 */

undefined1  [16] FUN_1004bc9a8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long local_68 [3];
  undefined *local_50;
  undefined *local_48;
  undefined1 local_40 [16];
  
  puVar2 = &DAT_100fcbaf8;
  FUN_1000f7830(&DAT_100fcbaf8,&DAT_100c508c0);
  puVar3 = &DAT_100fcbb00;
  local_50 = puVar2;
  FUN_100134584(&DAT_100fcbb00,&DAT_100fcbaf8,&DAT_100c508c0,
                PTR__Foundation__Swift__Array<undefined>_>Foundation__ContiguousBytes_100ea78a8);
  plVar4 = local_68;
  local_68[0] = param_1;
  local_48 = puVar3;
  FUN_100004640(plVar4,puVar2);
  lVar1 = *plVar4 + 0x20;
  lVar5 = *(long *)(*plVar4 + 0x10);
  _swift_bridgeObjectRetain(param_1);
  FUN_100441844(local_40,lVar1,lVar1 + lVar5);
  FUN_100004594(local_68);
  return local_40;
}



/* Address: 0x1004bca5c | FUN_1004bca5c */

bool FUN_1004bca5c(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  bool bVar4;
  _StringGuts _Var5;
  _StringGuts _Var6;
  _StringGuts _Var7;
  _StringGuts _Var8;
  undefined *puVar9;
  
  _Var5.unknown = (undefined *)*param_1;
  _Var7.unknown = (undefined *)param_1[1];
  bVar3 = *(byte *)(param_1 + 4);
  puVar1 = (undefined *)*param_2;
  if (bVar3 < 2) {
    _Var6.unknown = (undefined *)param_1[2];
    _Var8.unknown = (undefined *)param_1[3];
    if (bVar3 == 0) {
      if ((char)param_2[4] != '\0') {
        return false;
      }
    }
    else if ((char)param_2[4] != '\x01') {
      return false;
    }
    puVar9 = (undefined *)param_2[2];
    puVar2 = (undefined *)param_2[3];
    if ((_Var5.unknown != puVar1 || _Var7.unknown != (undefined *)param_2[1]) &&
       (bVar4 = Swift::_stringCompareWithSmolCheck
                          (_Var5,_Var7,(_StringComparisonResult)(__int8)puVar1), !bVar4)) {
      return false;
    }
    if ((_Var6.unknown != puVar9) || (_Var8.unknown != puVar2)) {
LAB_1004bcb1c:
      bVar4 = Swift::_stringCompareWithSmolCheck
                        (_Var6,_Var8,(_StringComparisonResult)(__int8)puVar9);
      return bVar4;
    }
  }
  else {
    if (bVar3 == 2) {
      if ((char)param_2[4] != '\x02') {
        return false;
      }
    }
    else if ((char)param_2[4] != '\x03') {
      return false;
    }
    _Var6.unknown = _Var5.unknown;
    _Var8.unknown = _Var7.unknown;
    puVar9 = puVar1;
    if (_Var5.unknown != puVar1 || _Var7.unknown != (undefined *)param_2[1]) goto LAB_1004bcb1c;
  }
  return true;
}



/* Address: 0x1004bcb4c | FUN_1004bcb4c */

void FUN_1004bcb4c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcb818 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c506c0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c506c0,&DAT_100ed9b50);
  DAT_100fcb818 = pTVar1;
  return;
}



/* Address: 0x1004bcb8c | FUN_1004bcb8c */

void FUN_1004bcb8c(void)

{
  undefined *puVar1;
  
  if (DAT_100fcb898 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Foundation__Foundation__Data_>Foundation__DataProtocol_100ea72e8;
  _swift_getWitnessTable
            (PTR_Foundation__Foundation__Data_>Foundation__DataProtocol_100ea72e8,
             PTR___type_metadata_for_Foundation_Data_100ea7300);
  DAT_100fcb898 = puVar1;
  return;
}



/* Address: 0x1004bcbcc | FUN_1004bcbcc */

void FUN_1004bcbcc(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100fcb9c8,&TargetStructDescriptor_100cb1f80);
  return;
}



/* Address: 0x1004bcbe0 | FUN_1004bcbe0 */

undefined8 FUN_1004bcbe0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1004bcbcc();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x1004bcc24 | FUN_1004bcc24 */

undefined8 FUN_1004bcc24(undefined8 param_1,undefined8 param_2)

{
  FUN_1004be4a4(param_2,param_1,&DAT_100ed9a30);
  return param_2;
}



/* Address: 0x1004bcc58 | FUN_1004bcc58 */

void FUN_1004bcc58(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100fcb910,&TargetStructDescriptor_100cb1ecc);
  return;
}



/* Address: 0x1004bcc6c | FUN_1004bcc6c */

undefined8 FUN_1004bcc6c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1004bcbcc();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Address: 0x1004bcca8 | thunk_FUN_1004bccac */

void thunk_FUN_1004bccac(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcb8a8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c50548;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c50548,&DAT_100ed99a0);
  DAT_100fcb8a8 = pTVar1;
  return;
}



/* Address: 0x1004bccac | FUN_1004bccac */

void FUN_1004bccac(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcb8a8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c50548;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c50548,&DAT_100ed99a0);
  DAT_100fcb8a8 = pTVar1;
  return;
}



/* Address: 0x1004bccec | thunk_FUN_1004bccf0 */

void thunk_FUN_1004bccf0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcb8b0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c505d8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c505d8,&DAT_100ed9ac0);
  DAT_100fcb8b0 = pTVar1;
  return;
}



/* Address: 0x1004bccf0 | FUN_1004bccf0 */

void FUN_1004bccf0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcb8b0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c505d8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c505d8,&DAT_100ed9ac0);
  DAT_100fcb8b0 = pTVar1;
  return;
}



/* Address: 0x1004bcd30 | thunk_FUN_1004bcb4c */

void thunk_FUN_1004bcb4c(void)

{
  FUN_1004bcb4c();
  return;
}



/* Address: 0x1004bcd34 | FUN_1004bcd34 */

long * FUN_1004bcd34(long *param_1,long *param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  URL UVar12;
  undefined1 *puVar13;
  undefined *puVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  long lVar18;
  code *pcVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  uVar9 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar9 >> 0x11 & 1) == 0) {
    *(char *)param_1 = (char)*param_2;
    lVar18 = param_2[1];
    lVar7 = param_2[2];
    lVar15 = param_2[3];
    lVar8 = param_2[4];
    lVar11 = param_2[5];
    FUN_1004b8e20(lVar18,lVar7,lVar15,lVar8,(char)lVar11);
    param_1[1] = lVar18;
    param_1[2] = lVar7;
    param_1[3] = lVar15;
    param_1[4] = lVar8;
    *(char *)(param_1 + 5) = (char)lVar11;
    lVar18 = param_2[6];
    param_1[7] = param_2[7];
    param_1[6] = lVar18;
    puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
    puVar2 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    UVar12 = Foundation::URL::typeMetadataAccessor();
    lVar18 = *(long *)(UVar12.unknown + -8);
    pcVar19 = *(code **)(lVar18 + 0x30);
    puVar13 = puVar2;
    (*pcVar19)(puVar2,1,UVar12.unknown);
    if ((int)puVar13 == 0) {
      (**(code **)(lVar18 + 0x10))(puVar1,puVar2,UVar12.unknown);
      (**(code **)(lVar18 + 0x38))(puVar1,0,1,UVar12.unknown);
    }
    else {
      puVar14 = &DAT_100fcb378;
      FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
      _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar14 + -8) + 0x40));
    }
    lVar15 = 0;
    FUN_1004bcbcc();
    iVar10 = *(int *)(lVar15 + 0x14);
    puVar13 = puVar2 + iVar10;
    (*pcVar19)(puVar13,1,UVar12.unknown);
    if ((int)puVar13 == 0) {
      (**(code **)(lVar18 + 0x10))(puVar1 + iVar10,puVar2 + iVar10,UVar12.unknown);
      (**(code **)(lVar18 + 0x38))(puVar1 + iVar10,0,1,UVar12.unknown);
    }
    else {
      puVar14 = &DAT_100fcb378;
      FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
      _memcpy(puVar1 + iVar10,puVar2 + iVar10,*(size_t *)(*(long *)(puVar14 + -8) + 0x40));
    }
    iVar10 = *(int *)(lVar15 + 0x18);
    puVar13 = puVar2 + iVar10;
    (*pcVar19)(puVar13,1,UVar12.unknown);
    if ((int)puVar13 == 0) {
      (**(code **)(lVar18 + 0x10))(puVar1 + iVar10,puVar2 + iVar10,UVar12.unknown);
      (**(code **)(lVar18 + 0x38))(puVar1 + iVar10,0,1,UVar12.unknown);
    }
    else {
      puVar14 = &DAT_100fcb378;
      FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
      _memcpy(puVar1 + iVar10,puVar2 + iVar10,*(size_t *)(*(long *)(puVar14 + -8) + 0x40));
    }
    iVar10 = *(int *)(lVar15 + 0x1c);
    puVar13 = puVar2 + iVar10;
    (*pcVar19)(puVar13,1,UVar12.unknown);
    if ((int)puVar13 == 0) {
      pcVar19 = *(code **)(lVar18 + 0x10);
      (*pcVar19)(puVar1 + iVar10,puVar2 + iVar10,UVar12.unknown);
      (**(code **)(lVar18 + 0x38))(puVar1 + iVar10,0,1,UVar12.unknown);
    }
    else {
      puVar14 = &DAT_100fcb378;
      FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
      _memcpy(puVar1 + iVar10,puVar2 + iVar10,*(size_t *)(*(long *)(puVar14 + -8) + 0x40));
      pcVar19 = *(code **)(lVar18 + 0x10);
    }
    iVar10 = *(int *)(param_3 + 0x24);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x20)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
    (*pcVar19)((undefined1 *)((long)param_1 + (long)iVar10),
               (undefined1 *)((long)param_2 + (long)iVar10),UVar12.unknown);
    iVar10 = *(int *)(param_3 + 0x2c);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
    puVar3 = (undefined8 *)((long)param_1 + (long)iVar10);
    puVar4 = (undefined8 *)((long)param_2 + (long)iVar10);
    uVar17 = puVar4[1];
    *puVar3 = *puVar4;
    puVar3[1] = uVar17;
    plVar5 = (long *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
    plVar6 = (long *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
    lVar18 = *plVar6;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar17);
    if (lVar18 == 0) {
      lVar18 = *plVar6;
      plVar5[1] = plVar6[1];
      *plVar5 = lVar18;
    }
    else {
      lVar15 = plVar6[1];
      *plVar5 = lVar18;
      plVar5[1] = lVar15;
      _swift_retain();
    }
    puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x34));
    puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
    lVar18 = puVar4[3];
    if (lVar18 == 0) {
      uVar17 = *puVar4;
      uVar21 = puVar4[3];
      uVar20 = puVar4[2];
      puVar3[1] = puVar4[1];
      *puVar3 = uVar17;
      puVar3[3] = uVar21;
      puVar3[2] = uVar20;
      puVar3[4] = puVar4[4];
    }
    else {
      uVar17 = puVar4[4];
      puVar3[3] = lVar18;
      puVar3[4] = uVar17;
      (*(code *)**(undefined8 **)(lVar18 + -8))();
    }
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  }
  else {
    lVar18 = *param_2;
    *param_1 = lVar18;
    uVar16 = (ulong)uVar9 & 0xff;
    param_1 = (long *)(lVar18 + (uVar16 + 0x10 & (uVar16 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1004bd08c | FUN_1004bd08c */

void FUN_1004bd08c(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  URL UVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  
  FUN_1004b8e9c(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                *(undefined1 *)(param_1 + 0x28));
  lVar1 = param_1 + *(int *)(param_2 + 0x1c);
  UVar4 = Foundation::URL::typeMetadataAccessor();
  lVar7 = *(long *)(UVar4.unknown + -8);
  pcVar8 = *(code **)(lVar7 + 0x30);
  lVar5 = lVar1;
  (*pcVar8)(lVar1,1,UVar4.unknown);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar7 + 8))(lVar1,UVar4.unknown);
  }
  lVar6 = 0;
  FUN_1004bcbcc();
  iVar3 = *(int *)(lVar6 + 0x14);
  lVar5 = lVar1 + iVar3;
  (*pcVar8)(lVar5,1,UVar4.unknown);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar7 + 8))(lVar1 + iVar3,UVar4.unknown);
  }
  iVar3 = *(int *)(lVar6 + 0x18);
  lVar5 = lVar1 + iVar3;
  (*pcVar8)(lVar5,1,UVar4.unknown);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar7 + 8))(lVar1 + iVar3,UVar4.unknown);
  }
  iVar3 = *(int *)(lVar6 + 0x1c);
  lVar5 = lVar1 + iVar3;
  (*pcVar8)(lVar5,1,UVar4.unknown);
  pcVar8 = *(code **)(lVar7 + 8);
  if ((int)lVar5 == 0) {
    (*pcVar8)(lVar1 + iVar3,UVar4.unknown);
  }
  (*pcVar8)(param_1 + *(int *)(param_2 + 0x24),UVar4.unknown);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x28)));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x2c) + 8));
  plVar2 = (long *)(param_1 + *(int *)(param_2 + 0x30));
  if (*plVar2 != 0) {
    _swift_release(plVar2[1]);
  }
  if (*(long *)(param_1 + *(int *)(param_2 + 0x34) + 0x18) != 0) {
    FUN_100004594();
    return;
  }
  return;
}



/* Address: 0x1004bd208 | FUN_1004bd208 */

undefined1 * FUN_1004bd208(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  int iVar9;
  URL UVar10;
  undefined1 *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  code *pcVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  *param_1 = *param_2;
  uVar14 = *(undefined8 *)(param_2 + 8);
  uVar18 = *(undefined8 *)(param_2 + 0x10);
  uVar17 = *(undefined8 *)(param_2 + 0x18);
  uVar7 = *(undefined8 *)(param_2 + 0x20);
  uVar8 = param_2[0x28];
  FUN_1004b8e20(uVar14,uVar18,uVar17,uVar7,uVar8);
  *(undefined8 *)(param_1 + 8) = uVar14;
  *(undefined8 *)(param_1 + 0x10) = uVar18;
  *(undefined8 *)(param_1 + 0x18) = uVar17;
  *(undefined8 *)(param_1 + 0x20) = uVar7;
  param_1[0x28] = uVar8;
  uVar14 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = uVar14;
  puVar1 = param_1 + *(int *)(param_3 + 0x1c);
  puVar2 = param_2 + *(int *)(param_3 + 0x1c);
  UVar10 = Foundation::URL::typeMetadataAccessor();
  lVar15 = *(long *)(UVar10.unknown + -8);
  pcVar16 = *(code **)(lVar15 + 0x30);
  puVar11 = puVar2;
  (*pcVar16)(puVar2,1,UVar10.unknown);
  if ((int)puVar11 == 0) {
    (**(code **)(lVar15 + 0x10))(puVar1,puVar2,UVar10.unknown);
    (**(code **)(lVar15 + 0x38))(puVar1,0,1,UVar10.unknown);
  }
  else {
    puVar12 = &DAT_100fcb378;
    FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
    _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar12 + -8) + 0x40));
  }
  lVar13 = 0;
  FUN_1004bcbcc();
  iVar9 = *(int *)(lVar13 + 0x14);
  puVar11 = puVar2 + iVar9;
  (*pcVar16)(puVar11,1,UVar10.unknown);
  if ((int)puVar11 == 0) {
    (**(code **)(lVar15 + 0x10))(puVar1 + iVar9,puVar2 + iVar9,UVar10.unknown);
    (**(code **)(lVar15 + 0x38))(puVar1 + iVar9,0,1,UVar10.unknown);
  }
  else {
    puVar12 = &DAT_100fcb378;
    FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
    _memcpy(puVar1 + iVar9,puVar2 + iVar9,*(size_t *)(*(long *)(puVar12 + -8) + 0x40));
  }
  iVar9 = *(int *)(lVar13 + 0x18);
  puVar11 = puVar2 + iVar9;
  (*pcVar16)(puVar11,1,UVar10.unknown);
  if ((int)puVar11 == 0) {
    (**(code **)(lVar15 + 0x10))(puVar1 + iVar9,puVar2 + iVar9,UVar10.unknown);
    (**(code **)(lVar15 + 0x38))(puVar1 + iVar9,0,1,UVar10.unknown);
  }
  else {
    puVar12 = &DAT_100fcb378;
    FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
    _memcpy(puVar1 + iVar9,puVar2 + iVar9,*(size_t *)(*(long *)(puVar12 + -8) + 0x40));
  }
  iVar9 = *(int *)(lVar13 + 0x1c);
  puVar11 = puVar2 + iVar9;
  (*pcVar16)(puVar11,1,UVar10.unknown);
  if ((int)puVar11 == 0) {
    pcVar16 = *(code **)(lVar15 + 0x10);
    (*pcVar16)(puVar1 + iVar9,puVar2 + iVar9,UVar10.unknown);
    (**(code **)(lVar15 + 0x38))(puVar1 + iVar9,0,1,UVar10.unknown);
  }
  else {
    puVar12 = &DAT_100fcb378;
    FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
    _memcpy(puVar1 + iVar9,puVar2 + iVar9,*(size_t *)(*(long *)(puVar12 + -8) + 0x40));
    pcVar16 = *(code **)(lVar15 + 0x10);
  }
  iVar9 = *(int *)(param_3 + 0x24);
  param_1[*(int *)(param_3 + 0x20)] = param_2[*(int *)(param_3 + 0x20)];
  (*pcVar16)(param_1 + iVar9,param_2 + iVar9,UVar10.unknown);
  iVar9 = *(int *)(param_3 + 0x2c);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x28)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x28));
  uVar14 = *(undefined8 *)((long)(param_2 + iVar9) + 8);
  *(undefined8 *)(param_1 + iVar9) = *(undefined8 *)(param_2 + iVar9);
  *(undefined8 *)((long)(param_1 + iVar9) + 8) = uVar14;
  plVar3 = (long *)(param_1 + *(int *)(param_3 + 0x30));
  plVar4 = (long *)(param_2 + *(int *)(param_3 + 0x30));
  lVar15 = *plVar4;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar14);
  if (lVar15 == 0) {
    lVar15 = *plVar4;
    plVar3[1] = plVar4[1];
    *plVar3 = lVar15;
  }
  else {
    lVar13 = plVar4[1];
    *plVar3 = lVar15;
    plVar3[1] = lVar13;
    _swift_retain();
  }
  puVar5 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x34));
  puVar6 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x34));
  lVar15 = puVar6[3];
  if (lVar15 == 0) {
    uVar14 = *puVar6;
    uVar18 = puVar6[3];
    uVar17 = puVar6[2];
    puVar5[1] = puVar6[1];
    *puVar5 = uVar14;
    puVar5[3] = uVar18;
    puVar5[2] = uVar17;
    puVar5[4] = puVar6[4];
  }
  else {
    uVar14 = puVar6[4];
    puVar5[3] = lVar15;
    puVar5[4] = uVar14;
    (*(code *)**(undefined8 **)(lVar15 + -8))();
  }
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x38)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x38));
  return param_1;
}



/* Address: 0x1004bd534 | FUN_1004bd534 */

undefined1 * FUN_1004bd534(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  int iVar13;
  URL UVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined *puVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  code *pcVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  
  *param_1 = *param_2;
  uVar19 = *(undefined8 *)(param_2 + 8);
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  uVar23 = *(undefined8 *)(param_2 + 0x18);
  uVar8 = *(undefined8 *)(param_2 + 0x20);
  uVar11 = param_2[0x28];
  FUN_1004b8e20(uVar19,uVar7,uVar23,uVar8,uVar11);
  uVar24 = *(undefined8 *)(param_1 + 8);
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  uVar25 = *(undefined8 *)(param_1 + 0x18);
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 8) = uVar19;
  *(undefined8 *)(param_1 + 0x10) = uVar7;
  *(undefined8 *)(param_1 + 0x18) = uVar23;
  *(undefined8 *)(param_1 + 0x20) = uVar8;
  uVar12 = param_1[0x28];
  param_1[0x28] = uVar11;
  FUN_1004b8e9c(uVar24,uVar9,uVar25,uVar10,uVar12);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  puVar1 = param_1 + *(int *)(param_3 + 0x1c);
  puVar2 = param_2 + *(int *)(param_3 + 0x1c);
  UVar14 = Foundation::URL::typeMetadataAccessor();
  lVar21 = *(long *)(UVar14.unknown + -8);
  pcVar22 = *(code **)(lVar21 + 0x30);
  puVar15 = puVar1;
  (*pcVar22)(puVar1,1,UVar14.unknown);
  puVar16 = puVar2;
  (*pcVar22)(puVar2,1,UVar14.unknown);
  if ((int)puVar15 == 0) {
    if ((int)puVar16 != 0) {
      (**(code **)(lVar21 + 8))(puVar1,UVar14.unknown);
      goto LAB_1004bd64c;
    }
    (**(code **)(lVar21 + 0x18))(puVar1,puVar2,UVar14.unknown);
  }
  else if ((int)puVar16 == 0) {
    (**(code **)(lVar21 + 0x10))(puVar1,puVar2,UVar14.unknown);
    (**(code **)(lVar21 + 0x38))(puVar1,0,1,UVar14.unknown);
  }
  else {
LAB_1004bd64c:
    puVar17 = &DAT_100fcb378;
    FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
    _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar17 + -8) + 0x40));
  }
  lVar18 = 0;
  FUN_1004bcbcc();
  iVar13 = *(int *)(lVar18 + 0x14);
  puVar15 = puVar1 + iVar13;
  (*pcVar22)(puVar15,1,UVar14.unknown);
  puVar16 = puVar2 + iVar13;
  (*pcVar22)(puVar16,1,UVar14.unknown);
  if ((int)puVar15 == 0) {
    if ((int)puVar16 != 0) {
      (**(code **)(lVar21 + 8))(puVar1 + iVar13,UVar14.unknown);
      goto LAB_1004bd6f4;
    }
    (**(code **)(lVar21 + 0x18))(puVar1 + iVar13,puVar2 + iVar13,UVar14.unknown);
  }
  else if ((int)puVar16 == 0) {
    (**(code **)(lVar21 + 0x10))(puVar1 + iVar13,puVar2 + iVar13,UVar14.unknown);
    (**(code **)(lVar21 + 0x38))(puVar1 + iVar13,0,1,UVar14.unknown);
  }
  else {
LAB_1004bd6f4:
    puVar17 = &DAT_100fcb378;
    FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
    _memcpy(puVar1 + iVar13,puVar2 + iVar13,*(size_t *)(*(long *)(puVar17 + -8) + 0x40));
  }
  iVar13 = *(int *)(lVar18 + 0x18);
  puVar15 = puVar1 + iVar13;
  (*pcVar22)(puVar15,1,UVar14.unknown);
  puVar16 = puVar2 + iVar13;
  (*pcVar22)(puVar16,1,UVar14.unknown);
  if ((int)puVar15 == 0) {
    if ((int)puVar16 != 0) {
      (**(code **)(lVar21 + 8))(puVar1 + iVar13,UVar14.unknown);
      goto LAB_1004bd790;
    }
    (**(code **)(lVar21 + 0x18))(puVar1 + iVar13,puVar2 + iVar13,UVar14.unknown);
  }
  else if ((int)puVar16 == 0) {
    (**(code **)(lVar21 + 0x10))(puVar1 + iVar13,puVar2 + iVar13,UVar14.unknown);
    (**(code **)(lVar21 + 0x38))(puVar1 + iVar13,0,1,UVar14.unknown);
  }
  else {
LAB_1004bd790:
    puVar17 = &DAT_100fcb378;
    FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
    _memcpy(puVar1 + iVar13,puVar2 + iVar13,*(size_t *)(*(long *)(puVar17 + -8) + 0x40));
  }
  iVar13 = *(int *)(lVar18 + 0x1c);
  puVar15 = puVar1 + iVar13;
  (*pcVar22)(puVar15,1,UVar14.unknown);
  puVar16 = puVar2 + iVar13;
  (*pcVar22)(puVar16,1,UVar14.unknown);
  if ((int)puVar15 == 0) {
    if ((int)puVar16 != 0) {
      (**(code **)(lVar21 + 8))(puVar1 + iVar13,UVar14.unknown);
      goto LAB_1004bd82c;
    }
    (**(code **)(lVar21 + 0x18))(puVar1 + iVar13,puVar2 + iVar13,UVar14.unknown);
  }
  else if ((int)puVar16 == 0) {
    (**(code **)(lVar21 + 0x10))(puVar1 + iVar13,puVar2 + iVar13,UVar14.unknown);
    (**(code **)(lVar21 + 0x38))(puVar1 + iVar13,0,1,UVar14.unknown);
  }
  else {
LAB_1004bd82c:
    puVar17 = &DAT_100fcb378;
    FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
    _memcpy(puVar1 + iVar13,puVar2 + iVar13,*(size_t *)(*(long *)(puVar17 + -8) + 0x40));
  }
  param_1[*(int *)(param_3 + 0x20)] = param_2[*(int *)(param_3 + 0x20)];
  (**(code **)(lVar21 + 0x18))
            (param_1 + *(int *)(param_3 + 0x24),param_2 + *(int *)(param_3 + 0x24),UVar14.unknown);
  iVar13 = *(int *)(param_3 + 0x28);
  uVar19 = *(undefined8 *)(param_1 + iVar13);
  *(undefined8 *)(param_1 + iVar13) = *(undefined8 *)(param_2 + iVar13);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar19);
  iVar13 = *(int *)(param_3 + 0x2c);
  puVar3 = (undefined8 *)(param_1 + iVar13);
  *puVar3 = *(undefined8 *)(param_2 + iVar13);
  uVar19 = puVar3[1];
  puVar3[1] = *(undefined8 *)((long)(param_2 + iVar13) + 8);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar19);
  plVar4 = (long *)(param_1 + *(int *)(param_3 + 0x30));
  plVar5 = (long *)(param_2 + *(int *)(param_3 + 0x30));
  lVar21 = *plVar5;
  if (*plVar4 == 0) {
    if (lVar21 != 0) {
      lVar18 = plVar5[1];
      *plVar4 = lVar21;
      plVar4[1] = lVar18;
      _swift_retain();
      goto LAB_1004bd920;
    }
  }
  else {
    if (lVar21 != 0) {
      lVar18 = plVar5[1];
      lVar20 = plVar4[1];
      *plVar4 = lVar21;
      plVar4[1] = lVar18;
      _swift_retain();
      _swift_release(lVar20);
      goto LAB_1004bd920;
    }
    _swift_release(plVar4[1]);
  }
  lVar21 = *plVar5;
  plVar4[1] = plVar5[1];
  *plVar4 = lVar21;
LAB_1004bd920:
  puVar3 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x34));
  puVar6 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x34));
  lVar21 = puVar6[3];
  if (puVar3[3] == 0) {
    if (lVar21 == 0) {
      uVar23 = puVar6[1];
      uVar19 = *puVar6;
      uVar25 = puVar6[3];
      uVar24 = puVar6[2];
      puVar3[4] = puVar6[4];
      puVar3[1] = uVar23;
      *puVar3 = uVar19;
      puVar3[3] = uVar25;
      puVar3[2] = uVar24;
    }
    else {
      puVar3[3] = lVar21;
      puVar3[4] = puVar6[4];
      (*(code *)**(undefined8 **)(lVar21 + -8))(puVar3,puVar6);
    }
  }
  else if (lVar21 == 0) {
    FUN_100004594();
    uVar23 = puVar6[1];
    uVar19 = *puVar6;
    uVar25 = puVar6[3];
    uVar24 = puVar6[2];
    puVar3[4] = puVar6[4];
    puVar3[1] = uVar23;
    *puVar3 = uVar19;
    puVar3[3] = uVar25;
    puVar3[2] = uVar24;
  }
  else {
    FUN_10008820c(puVar3,puVar6);
  }
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x38)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x38));
  return param_1;
}



/* Address: 0x1004bda28 | FUN_1004bda28 */

undefined1 * FUN_1004bda28(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  URL UVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  *param_1 = *param_2;
  uVar13 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar13;
  uVar13 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar13;
  param_1[0x28] = param_2[0x28];
  uVar13 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = uVar13;
  puVar1 = param_1 + *(int *)(param_3 + 0x1c);
  puVar2 = param_2 + *(int *)(param_3 + 0x1c);
  UVar7 = Foundation::URL::typeMetadataAccessor();
  lVar11 = *(long *)(UVar7.unknown + -8);
  pcVar12 = *(code **)(lVar11 + 0x30);
  puVar8 = puVar2;
  (*pcVar12)(puVar2,1,UVar7.unknown);
  if ((int)puVar8 == 0) {
    (**(code **)(lVar11 + 0x20))(puVar1,puVar2,UVar7.unknown);
    (**(code **)(lVar11 + 0x38))(puVar1,0,1,UVar7.unknown);
  }
  else {
    puVar9 = &DAT_100fcb378;
    FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
    _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar9 + -8) + 0x40));
  }
  lVar10 = 0;
  FUN_1004bcbcc();
  iVar6 = *(int *)(lVar10 + 0x14);
  puVar8 = puVar2 + iVar6;
  (*pcVar12)(puVar8,1,UVar7.unknown);
  if ((int)puVar8 == 0) {
    (**(code **)(lVar11 + 0x20))(puVar1 + iVar6,puVar2 + iVar6,UVar7.unknown);
    (**(code **)(lVar11 + 0x38))(puVar1 + iVar6,0,1,UVar7.unknown);
  }
  else {
    puVar9 = &DAT_100fcb378;
    FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
    _memcpy(puVar1 + iVar6,puVar2 + iVar6,*(size_t *)(*(long *)(puVar9 + -8) + 0x40));
  }
  iVar6 = *(int *)(lVar10 + 0x18);
  puVar8 = puVar2 + iVar6;
  (*pcVar12)(puVar8,1,UVar7.unknown);
  if ((int)puVar8 == 0) {
    (**(code **)(lVar11 + 0x20))(puVar1 + iVar6,puVar2 + iVar6,UVar7.unknown);
    (**(code **)(lVar11 + 0x38))(puVar1 + iVar6,0,1,UVar7.unknown);
  }
  else {
    puVar9 = &DAT_100fcb378;
    FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
    _memcpy(puVar1 + iVar6,puVar2 + iVar6,*(size_t *)(*(long *)(puVar9 + -8) + 0x40));
  }
  iVar6 = *(int *)(lVar10 + 0x1c);
  puVar8 = puVar2 + iVar6;
  (*pcVar12)(puVar8,1,UVar7.unknown);
  if ((int)puVar8 == 0) {
    pcVar12 = *(code **)(lVar11 + 0x20);
    (*pcVar12)(puVar1 + iVar6,puVar2 + iVar6,UVar7.unknown);
    (**(code **)(lVar11 + 0x38))(puVar1 + iVar6,0,1,UVar7.unknown);
  }
  else {
    puVar9 = &DAT_100fcb378;
    FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
    _memcpy(puVar1 + iVar6,puVar2 + iVar6,*(size_t *)(*(long *)(puVar9 + -8) + 0x40));
    pcVar12 = *(code **)(lVar11 + 0x20);
  }
  iVar6 = *(int *)(param_3 + 0x24);
  param_1[*(int *)(param_3 + 0x20)] = param_2[*(int *)(param_3 + 0x20)];
  (*pcVar12)(param_1 + iVar6,param_2 + iVar6,UVar7.unknown);
  iVar6 = *(int *)(param_3 + 0x2c);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x28)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x28));
  uVar13 = *(undefined8 *)(param_2 + iVar6);
  *(undefined8 *)((long)(param_1 + iVar6) + 8) = *(undefined8 *)((long)(param_2 + iVar6) + 8);
  *(undefined8 *)(param_1 + iVar6) = uVar13;
  iVar6 = *(int *)(param_3 + 0x30);
  iVar5 = *(int *)(param_3 + 0x34);
  uVar13 = *(undefined8 *)(param_2 + iVar6);
  *(undefined8 *)((long)(param_1 + iVar6) + 8) = *(undefined8 *)((long)(param_2 + iVar6) + 8);
  *(undefined8 *)(param_1 + iVar6) = uVar13;
  puVar3 = (undefined8 *)(param_1 + iVar5);
  puVar4 = (undefined8 *)(param_2 + iVar5);
  uVar13 = *puVar4;
  uVar15 = puVar4[3];
  uVar14 = puVar4[2];
  puVar3[1] = puVar4[1];
  *puVar3 = uVar13;
  puVar3[3] = uVar15;
  puVar3[2] = uVar14;
  puVar3[4] = puVar4[4];
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x38)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x38));
  return param_1;
}



/* Address: 0x1004bdce4 | FUN_1004bdce4 */

undefined1 * FUN_1004bdce4(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  int iVar9;
  undefined8 uVar10;
  URL UVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  code *pcVar21;
  undefined8 uVar22;
  
  *param_1 = *param_2;
  uVar7 = param_2[0x28];
  uVar10 = *(undefined8 *)(param_1 + 8);
  uVar16 = *(undefined8 *)(param_1 + 0x10);
  uVar17 = *(undefined8 *)(param_1 + 0x18);
  uVar18 = *(undefined8 *)(param_1 + 0x20);
  uVar22 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar22;
  uVar22 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar22;
  uVar8 = param_1[0x28];
  param_1[0x28] = uVar7;
  FUN_1004b8e9c(uVar10,uVar16,uVar17,uVar18,uVar8);
  uVar16 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = uVar16;
  puVar1 = param_1 + *(int *)(param_3 + 0x1c);
  puVar2 = param_2 + *(int *)(param_3 + 0x1c);
  UVar11 = Foundation::URL::typeMetadataAccessor();
  lVar20 = *(long *)(UVar11.unknown + -8);
  pcVar21 = *(code **)(lVar20 + 0x30);
  puVar12 = puVar1;
  (*pcVar21)(puVar1,1,UVar11.unknown);
  puVar13 = puVar2;
  (*pcVar21)(puVar2,1,UVar11.unknown);
  if ((int)puVar12 == 0) {
    if ((int)puVar13 != 0) {
      (**(code **)(lVar20 + 8))(puVar1,UVar11.unknown);
      goto LAB_1004bdde0;
    }
    (**(code **)(lVar20 + 0x28))(puVar1,puVar2,UVar11.unknown);
  }
  else if ((int)puVar13 == 0) {
    (**(code **)(lVar20 + 0x20))(puVar1,puVar2,UVar11.unknown);
    (**(code **)(lVar20 + 0x38))(puVar1,0,1,UVar11.unknown);
  }
  else {
LAB_1004bdde0:
    puVar14 = &DAT_100fcb378;
    FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
    _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar14 + -8) + 0x40));
  }
  lVar15 = 0;
  FUN_1004bcbcc();
  iVar9 = *(int *)(lVar15 + 0x14);
  puVar12 = puVar1 + iVar9;
  (*pcVar21)(puVar12,1,UVar11.unknown);
  puVar13 = puVar2 + iVar9;
  (*pcVar21)(puVar13,1,UVar11.unknown);
  if ((int)puVar12 == 0) {
    if ((int)puVar13 != 0) {
      (**(code **)(lVar20 + 8))(puVar1 + iVar9,UVar11.unknown);
      goto LAB_1004bde90;
    }
    (**(code **)(lVar20 + 0x28))(puVar1 + iVar9,puVar2 + iVar9,UVar11.unknown);
  }
  else if ((int)puVar13 == 0) {
    (**(code **)(lVar20 + 0x20))(puVar1 + iVar9,puVar2 + iVar9,UVar11.unknown);
    (**(code **)(lVar20 + 0x38))(puVar1 + iVar9,0,1,UVar11.unknown);
  }
  else {
LAB_1004bde90:
    puVar14 = &DAT_100fcb378;
    FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
    _memcpy(puVar1 + iVar9,puVar2 + iVar9,*(size_t *)(*(long *)(puVar14 + -8) + 0x40));
  }
  iVar9 = *(int *)(lVar15 + 0x18);
  puVar12 = puVar1 + iVar9;
  (*pcVar21)(puVar12,1,UVar11.unknown);
  puVar13 = puVar2 + iVar9;
  (*pcVar21)(puVar13,1,UVar11.unknown);
  if ((int)puVar12 == 0) {
    if ((int)puVar13 != 0) {
      (**(code **)(lVar20 + 8))(puVar1 + iVar9,UVar11.unknown);
      goto LAB_1004bdf34;
    }
    (**(code **)(lVar20 + 0x28))(puVar1 + iVar9,puVar2 + iVar9,UVar11.unknown);
  }
  else if ((int)puVar13 == 0) {
    (**(code **)(lVar20 + 0x20))(puVar1 + iVar9,puVar2 + iVar9,UVar11.unknown);
    (**(code **)(lVar20 + 0x38))(puVar1 + iVar9,0,1,UVar11.unknown);
  }
  else {
LAB_1004bdf34:
    puVar14 = &DAT_100fcb378;
    FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
    _memcpy(puVar1 + iVar9,puVar2 + iVar9,*(size_t *)(*(long *)(puVar14 + -8) + 0x40));
  }
  iVar9 = *(int *)(lVar15 + 0x1c);
  puVar12 = puVar1 + iVar9;
  (*pcVar21)(puVar12,1,UVar11.unknown);
  puVar13 = puVar2 + iVar9;
  (*pcVar21)(puVar13,1,UVar11.unknown);
  if ((int)puVar12 == 0) {
    if ((int)puVar13 != 0) {
      (**(code **)(lVar20 + 8))(puVar1 + iVar9,UVar11.unknown);
      goto LAB_1004bdfd8;
    }
    (**(code **)(lVar20 + 0x28))(puVar1 + iVar9,puVar2 + iVar9,UVar11.unknown);
  }
  else if ((int)puVar13 == 0) {
    (**(code **)(lVar20 + 0x20))(puVar1 + iVar9,puVar2 + iVar9,UVar11.unknown);
    (**(code **)(lVar20 + 0x38))(puVar1 + iVar9,0,1,UVar11.unknown);
  }
  else {
LAB_1004bdfd8:
    puVar14 = &DAT_100fcb378;
    FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
    _memcpy(puVar1 + iVar9,puVar2 + iVar9,*(size_t *)(*(long *)(puVar14 + -8) + 0x40));
  }
  iVar9 = *(int *)(param_3 + 0x24);
  param_1[*(int *)(param_3 + 0x20)] = param_2[*(int *)(param_3 + 0x20)];
  (**(code **)(lVar20 + 0x28))(param_1 + iVar9,param_2 + iVar9,UVar11.unknown);
  iVar9 = *(int *)(param_3 + 0x28);
  uVar16 = *(undefined8 *)(param_1 + iVar9);
  *(undefined8 *)(param_1 + iVar9) = *(undefined8 *)(param_2 + iVar9);
  _swift_bridgeObjectRelease(uVar16);
  puVar3 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x2c));
  uVar16 = *(undefined8 *)((long)(param_2 + *(int *)(param_3 + 0x2c)) + 8);
  uVar17 = puVar3[1];
  *puVar3 = *(undefined8 *)(param_2 + *(int *)(param_3 + 0x2c));
  puVar3[1] = uVar16;
  _swift_bridgeObjectRelease(uVar17);
  plVar4 = (long *)(param_1 + *(int *)(param_3 + 0x30));
  plVar5 = (long *)(param_2 + *(int *)(param_3 + 0x30));
  lVar20 = *plVar5;
  if (*plVar4 == 0) {
    if (lVar20 != 0) {
      lVar15 = plVar5[1];
      *plVar4 = lVar20;
      plVar4[1] = lVar15;
      goto LAB_1004be0a0;
    }
  }
  else {
    if (lVar20 != 0) {
      lVar19 = plVar5[1];
      lVar15 = plVar4[1];
      *plVar4 = lVar20;
      plVar4[1] = lVar19;
      _swift_release(lVar15);
      goto LAB_1004be0a0;
    }
    _swift_release(plVar4[1]);
  }
  lVar20 = *plVar5;
  plVar4[1] = plVar5[1];
  *plVar4 = lVar20;
LAB_1004be0a0:
  iVar9 = *(int *)(param_3 + 0x34);
  puVar3 = (undefined8 *)(param_1 + iVar9);
  if (puVar3[3] != 0) {
    FUN_100004594(puVar3);
  }
  puVar6 = (undefined8 *)(param_2 + iVar9);
  uVar16 = *puVar6;
  uVar10 = puVar6[3];
  uVar17 = puVar6[2];
  puVar3[1] = puVar6[1];
  *puVar3 = uVar16;
  puVar3[3] = uVar10;
  puVar3[2] = uVar17;
  puVar3[4] = puVar6[4];
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x38)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x38));
  return param_1;
}



/* Address: 0x1004be164 | FUN_1004be164 */

void FUN_1004be164(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}


