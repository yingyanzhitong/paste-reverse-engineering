/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10082db78 | FUN_10082db78 */

void FUN_10082db78(void)

{
  FUN_10080a2e4();
  return;
}



/* Address: 0x10082db8c | FUN_10082db8c */

void FUN_10082db8c(void)

{
  Swift::RawRepresentable::_get_rawValue();
  return;
}



/* Address: 0x10082dbb8 | FUN_10082dbb8 */

undefined1  [16] FUN_10082dbb8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 7;
  auVar1._0_8_ = 0x10;
  return auVar1;
}



/* Address: 0x10082dbc4 | FUN_10082dbc4 */

void FUN_10082dbc4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  param_2[1] = param_1[1];
  *param_2 = uVar1;
  return;
}



/* Address: 0x10082dbd0 | FUN_10082dbd0 */

void FUN_10082dbd0(undefined8 *param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_3 + param_4 + -0x10);
  (**(code **)(*(long *)(param_3 + param_4 + -8) + 0x18))();
  *param_1 = uVar1;
  return;
}



/* Address: 0x10082dc08 | FUN_10082dc08 */

undefined1  [16] FUN_10082dc08(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 7;
  auVar1._0_8_ = 0x10;
  return auVar1;
}



/* Address: 0x10082dc14 | FUN_10082dc14 */

void FUN_10082dc14(void)

{
  Swift::RawRepresentable::_get_rawValue();
  return;
}



/* Address: 0x10082dc40 | FUN_10082dc40 */

undefined1  [16] FUN_10082dc40(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 7;
  auVar1._0_8_ = 0x10;
  return auVar1;
}



/* Address: 0x10082dc4c | FUN_10082dc4c */

void FUN_10082dc4c(String *param_1)

{
  String SVar1;
  
  SVar1 = Swift::CustomStringConvertible::get_description();
  *param_1 = SVar1;
  return;
}



/* Address: 0x10082dc84 | FUN_10082dc84 */

undefined1  [16] FUN_10082dc84(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 7;
  auVar1._0_8_ = 0x10;
  return auVar1;
}



/* Address: 0x10082dc90 | thunk_FUN_10082dc94 */

void thunk_FUN_10082dc94(void)

{
  FUN_10082f764();
  return;
}



/* Address: 0x10082dc94 | FUN_10082dc94 */

void FUN_10082dc94(void)

{
  FUN_10082f764();
  return;
}



/* Address: 0x10082dcb4 | thunk_FUN_10082dc94 */

void thunk_FUN_10082dc94(void)

{
  FUN_10082f764();
  return;
}



/* Address: 0x10082dcb8 | thunk_FUN_10082dbc4 */

void thunk_FUN_10082dbc4(void)

{
  FUN_10082dbc4();
  return;
}



/* Address: 0x10082dcbc | thunk_FUN_10082dbc4 */

void thunk_FUN_10082dbc4(void)

{
  FUN_10082dbc4();
  return;
}



/* Address: 0x10082dcc0 | thunk_FUN_10082dbc4 */

void thunk_FUN_10082dbc4(void)

{
  FUN_10082dbc4();
  return;
}



/* Address: 0x10082dcc4 | FUN_10082dcc4 */

String FUN_10082dcc4(undefined8 param_1,long param_2)

{
  String SVar1;
  
  (**(code **)(param_2 + 0x18))();
  SVar1 = Swift::CustomStringConvertible::get_description();
  return SVar1;
}



/* Address: 0x10082dd08 | FUN_10082dd08 */

tuple2_conflict14 FUN_10082dd08(Duration param_1)

{
  tuple2_conflict14 tVar1;
  
  tVar1 = Swift::Duration::get_components(param_1);
  return tVar1;
}



/* Address: 0x10082dd1c | FUN_10082dd1c */

long FUN_10082dd1c(long param_1)

{
  return param_1 * 1000000000000000000;
}



/* Address: 0x10082dd50 | FUN_10082dd50 */

void FUN_10082dd50(long *param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  *param_1 = param_2 * 1000000000000000000;
  param_1[1] = ((long)param_2 >> 0x3f & 0xf21f494c589c0000U) +
               SUB168(auVar1 * ZEXT816(1000000000000000000),8);
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}



/* Address: 0x10082dd84 | FUN_10082dd84 */

tuple2_conflict14 FUN_10082dd84(void)

{
  undefined8 *unaff_x20;
  tuple2_conflict14 tVar1;
  
  tVar1 = Swift::Duration::get_components((undefined *)*unaff_x20);
  return tVar1;
}



/* Address: 0x10082dd9c | FUN_10082dd9c */

void FUN_10082dd9c(undefined8 param_1,undefined8 param_2)

{
  FUN_10082de10(param_1,param_2,&DAT_100fe7408,&DAT_100c7c240,PTR_typeMetadataAccessor_100ea71a8,
                PTR__init_100ea7188);
  return;
}



/* Address: 0x10082ddc0 | thunk_FUN_10082dd9c */

void thunk_FUN_10082dd9c(undefined8 param_1,undefined8 param_2)

{
  FUN_10082de10(param_1,param_2,&DAT_100fe7408,&DAT_100c7c240,PTR_typeMetadataAccessor_100ea71a8,
                PTR__init_100ea7188);
  return;
}



/* Address: 0x10082ddc4 | thunk_FUN_1005b3cd0 */

void thunk_FUN_1005b3cd0(void)

{
  thunk_FUN_1005b3cd0();
  return;
}



/* Address: 0x10082ddc8 | FUN_10082ddc8 */

void FUN_10082ddc8(undefined8 *param_1,undefined8 param_2)

{
  thunk_FUN_1005b3cd0();
  *param_1 = param_2;
  return;
}



/* Address: 0x10082ddec | FUN_10082ddec */

void FUN_10082ddec(undefined8 param_1,undefined8 param_2)

{
  FUN_10082de10(param_1,param_2,&DAT_100fe7410,&DAT_100c7c248,PTR_typeMetadataAccessor_100ea7500,
                PTR__init_100ea74c0);
  return;
}



/* Address: 0x10082de10 | FUN_10082de10 */

void FUN_10082de10(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,code *param_6,code *param_7)

{
  bool bVar1;
  long lVar2;
  undefined1 *puVar3;
  code *pcVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  
  lVar2 = param_4;
  FUN_1000f7830(param_4,param_5);
  puVar5 = &stack0xffffffffffffffa0 +
           -(*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  (*param_6)();
  lVar7 = *(long *)(lVar2 + -8);
  lVar6 = (long)puVar5 - (*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (*param_7)(puVar5,param_2,param_3);
  _swift_bridgeObjectRelease(param_3);
  puVar3 = puVar5;
  (**(code **)(lVar7 + 0x30))(puVar5,1,lVar2);
  bVar1 = (int)puVar3 == 0;
  if (bVar1) {
    pcVar4 = *(code **)(lVar7 + 0x20);
    (*pcVar4)(lVar6,puVar5,lVar2);
    (*pcVar4)(param_1,lVar6,lVar2);
  }
  else {
    FUN_1000fb4c4(puVar5,param_4,param_5);
  }
  (**(code **)(lVar7 + 0x38))(param_1,!bVar1,1,lVar2);
  return;
}



/* Address: 0x10082df3c | thunk_FUN_10082ddec */

void thunk_FUN_10082ddec(void)

{
  FUN_10082ddec();
  return;
}



/* Address: 0x10082df40 | FUN_10082df40 */

/* WARNING: Removing unreachable block (ram,0x00010082e024) */

void FUN_10082df40(undefined8 param_1,char *param_2,void *param_3,ISO8601FormatStyle param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  Date DVar3;
  ISO8601FormatStyle IVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  code *pcVar10;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  String SVar14;
  undefined1 auStack_80 [8];
  long local_78;
  undefined8 local_70;
  
  puVar2 = &DAT_100fe7418;
  local_70 = param_1;
  FUN_1000f7830(&DAT_100fe7418,&DAT_100c7c250);
  puVar11 = auStack_80 + -(*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  DVar3 = Foundation::Date::typeMetadataAccessor();
  lVar8 = *(long *)(DVar3.unknown + -8);
  uVar5 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar13 = (long)puVar11 - uVar5;
  lVar6 = lVar13 - uVar5;
  local_78 = lVar6;
  IVar4 = Foundation::Date::ISO8601FormatStyle::typeMetadataAccessor();
  lVar12 = *(long *)(IVar4.unknown + -8);
  lVar7 = *(long *)(lVar12 + 0x40);
  (extension_Foundation)::Foundation::ParseableFormatStyle::_get_iso8601();
  SVar14.bridgeObject = param_3;
  SVar14.str = param_2;
  Foundation::Date::ISO8601FormatStyle::_parse(SVar14,param_4);
  (**(code **)(lVar12 + 8))(lVar6 - (lVar7 + 0xfU & 0xfffffffffffffff0),IVar4.unknown);
  _swift_bridgeObjectRelease(param_3);
  pcVar10 = *(code **)(lVar8 + 0x38);
  (*pcVar10)(puVar11,0,1,DVar3.unknown);
  pcVar9 = *(code **)(lVar8 + 0x20);
  (*pcVar9)(lVar13,puVar11,DVar3.unknown);
  lVar6 = local_78;
  (*pcVar9)(local_78,lVar13,DVar3.unknown);
  uVar1 = local_70;
  (*pcVar9)(local_70,lVar6,DVar3.unknown);
  (*pcVar10)(uVar1,0,1,DVar3.unknown);
  return;
}



/* Address: 0x10082e12c | FUN_10082e12c */

void FUN_10082e12c(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fe7420;
  FUN_100003a00(&DAT_100fe7420,PTR_typeMetadataAccessor_100ea71a8,
                PTR_Foundation__Foundation__URL_>Swift__CustomStringConvertible_100ea71d8);
  *(undefined **)(param_1 + 8) = puVar1;
  return;
}



/* Address: 0x10082e168 | FUN_10082e168 */

void FUN_10082e168(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10082e18c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Address: 0x10082e18c | FUN_10082e18c */

void FUN_10082e18c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe7428 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c62ec8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c62ec8,&DAT_100ee4790);
  DAT_100fe7428 = pTVar1;
  return;
}



/* Address: 0x10082e1cc | FUN_10082e1cc */

void FUN_10082e1cc(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fe7430;
  FUN_100003a00(&DAT_100fe7430,PTR_typeMetadataAccessor_100ea7500,
                PTR_Foundation__Foundation__UUID_>Swift__CustomStringConvertible_100ea7530);
  *(undefined **)(param_1 + 8) = puVar1;
  return;
}



/* Address: 0x10082e208 | thunk_FUN_10082df40 */

void thunk_FUN_10082df40(void)

{
  FUN_10082df40();
  return;
}



/* Address: 0x10082e20c | FUN_10082e20c */

void FUN_10082e20c(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fe7438;
  FUN_100003a00(&DAT_100fe7438,PTR_typeMetadataAccessor_100ea7480,
                PTR_Foundation__Foundation__Date_>Swift__CustomStringConvertible_100ea74b8);
  *(undefined **)(param_1 + 8) = puVar1;
  return;
}



/* Address: 0x10082e248 | thunk_FUN_10082e24c */

undefined1  [16]
thunk_FUN_10082e24c(long param_1,undefined8 param_2,undefined8 param_3,char *param_4,void *param_5)

{
  String *pSVar1;
  ulong uVar2;
  String SVar3;
  undefined1 auVar4 [16];
  code *pcVar5;
  bool bVar6;
  __int64 _Var7;
  Index IVar8;
  Scalar SVar9;
  Scalar SVar10;
  _StringObject _Var11;
  Properties PVar12;
  UnsafeBufferPointer<__int8> UVar13;
  char *pcVar14;
  char *pcVar15;
  void *pvVar17;
  uint uVar18;
  uint uVar19;
  undefined *puVar20;
  long lVar21;
  Index after;
  long lVar22;
  undefined1 *puVar23;
  Character CVar24;
  Character CVar25;
  String SVar27;
  String separator;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  long lStack_c0;
  void *pvStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  Index IStack_98;
  long lStack_90;
  long lStack_88;
  undefined *puStack_80;
  char *pcStack_78;
  undefined1 *puStack_70;
  undefined *puStack_68;
  String SVar26;
  void *pvVar16;
  
  puStack_80 = (undefined *)Swift::Unicode::Scalar::Properties::typeMetadataAccessor();
  lStack_88 = *(long *)(puStack_80 + -8);
  lStack_90 = (long)&lStack_c0 - (*(long *)(lStack_88 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar21 = *(long *)(param_1 + 0x10);
  puVar20 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar21 != 0) {
    puStack_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10083547c(0,lVar21,0);
    lVar22 = 0;
    lStack_a0 = param_1 + 0x20;
    lStack_c0 = lVar21;
    do {
      puVar20 = puStack_68;
      pSVar1 = (String *)(lStack_a0 + lVar22 * 0x10);
      pcVar14 = pSVar1->str;
      puVar23 = pSVar1->bridgeObject;
      SVar27 = *pSVar1;
      SVar26 = *pSVar1;
      _swift_bridgeObjectRetain(puVar23);
      _Var7 = Swift::String::get_count(SVar26);
      if (1 < _Var7) {
        lStack_b0 = lVar22;
        puStack_a8 = puVar20;
        pcStack_78 = pcVar14;
        puStack_70 = puVar23;
        _swift_bridgeObjectRetain(puVar23);
        after.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0xf;
        pvStack_b8 = puVar23;
        do {
          pcVar15 = pcVar14;
          if (((ulong)puVar23 & 0x2000000000000000) != 0) {
            pcVar15 = (char *)((ulong)puVar23 >> 0x38 & 0xf);
          }
          uVar19 = (uint)((ulong)pcVar14 >> 0x3b) & 1;
          if (((ulong)puVar23 & 0x1000000000000000) == 0) {
            uVar19 = 1;
          }
          uVar2 = 7;
          if (uVar19 == 0) {
            uVar2 = 0xb;
          }
          IStack_98.cmsgPointer.unknown = (UnsafeMutablePointer)(uVar2 | (long)pcVar15 << 0x10);
          do {
            while( true ) {
              SVar26.bridgeObject = puVar23;
              SVar26.str = pcVar14;
              IVar8 = Swift::String::index(IStack_98,SVar26);
              if ((ulong)IVar8.cmsgPointer.unknown >> 0xe <= (ulong)after.cmsgPointer.unknown >> 0xe
                 ) {
                SVar27.bridgeObject = puVar23;
                SVar27.str = pcVar14;
                SVar26 = Swift::String::lowercased(SVar27);
                _swift_bridgeObjectRelease(puVar23);
                _swift_bridgeObjectRelease(pvStack_b8);
                puVar20 = puStack_a8;
                lVar21 = lStack_c0;
                lVar22 = lStack_b0;
                goto LAB_10082e86c;
              }
              SVar28.bridgeObject = puVar23;
              SVar28.str = pcVar14;
              CVar24 = Swift::String::get_subscript(after,SVar28);
              pvVar16 = CVar24.bridgeObject;
              SVar9.unknown = CVar24.str;
              SVar29.bridgeObject = puVar23;
              SVar29.str = pcVar14;
              after = Swift::String::index(after,SVar29);
              SVar30.bridgeObject = puVar23;
              SVar30.str = pcVar14;
              CVar25 = Swift::String::get_subscript(after,SVar30);
              pvVar17 = CVar25.bridgeObject;
              SVar10.unknown = CVar25.str;
              uVar2 = (ulong)SVar9.unknown & 0xffffffffffff;
              if (((ulong)pvVar16 & 0x2000000000000000) != 0) {
                uVar2 = (ulong)pvVar16 >> 0x38 & 0xf;
              }
              if (uVar2 == 0) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x10082e94c);
                (*pcVar5)();
              }
              uVar19 = (uint)CVar24.str;
              if (((ulong)pvVar16 >> 0x3c & 1) == 0) {
                uVar18 = uVar19;
                if (((ulong)pvVar16 >> 0x3d & 1) == 0) {
                  if (((ulong)SVar9.unknown >> 0x3c & 1) == 0) {
                    UVar13 = Swift::_StringObject::get_sharedUTF8(SVar9.unknown);
                    uVar18 = (uint)(byte)*UVar13.unknown;
                  }
                  else {
                    uVar18 = (uint)*(byte *)(((ulong)pvVar16 & 0xfffffffffffffff) + 0x20);
                  }
                }
                IVar8.cmsgPointer.unknown =
                     (UnsafeMutablePointer)(UnsafeMutablePointer)(undefined *)0x10000;
                if (0x7fffffff < (uint)(int)(char)uVar18) {
                  IVar8.cmsgPointer.unknown =
                       (UnsafeMutablePointer)
                       (undefined *)(LZCOUNT(uVar18 << 0x18 ^ 0xffffffff) << 0x10);
                }
              }
              else {
                IVar8 = Swift::String::UnicodeScalarView::_foreignIndex
                                  ((Index)0xf,(UnicodeScalarView)SVar9.unknown);
              }
              lVar21 = uVar2 * 4;
              if (lVar21 - ((ulong)IVar8.cmsgPointer.unknown >> 0xe) == 0) break;
              _swift_bridgeObjectRetain(pvVar16);
LAB_10082e47c:
              bVar6 = Swift::Character::get__isLowercased(CVar24);
              if (bVar6) {
                if (((ulong)pvVar16 >> 0x3c & 1) == 0) {
                  if (((ulong)pvVar16 >> 0x3d & 1) == 0) {
                    if (((ulong)SVar9.unknown >> 0x3c & 1) == 0) {
                      UVar13 = Swift::_StringObject::get_sharedUTF8(SVar9.unknown);
                      uVar19 = (uint)(byte)*UVar13.unknown;
                    }
                    else {
                      uVar19 = (uint)*(byte *)(((ulong)pvVar16 & 0xfffffffffffffff) + 0x20);
                    }
                  }
                  uVar2 = 0x10000;
                  if (0x7fffffff < (uint)(int)(char)uVar19) {
                    uVar2 = LZCOUNT(uVar19 << 0x18 ^ 0xffffffff) << 0x10;
                  }
                  if (lVar21 - (uVar2 >> 0xe) != 0) goto LAB_10082e4d0;
LAB_10082e530:
                  FUN_1000482c8(SVar9.unknown,pvVar16);
                  _swift_bridgeObjectRelease(pvVar16);
                  lVar21 = lStack_90;
                  if (((ulong)SVar9.unknown & 0xff00000000) == 0x100000000) {
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x10082e95c);
                    (*pcVar5)();
                  }
                  PVar12 = Swift::Unicode::Scalar::get_properties(SVar9);
                  bVar6 = Swift::Unicode::Scalar::Properties::get_isCased(PVar12);
                  (**(code **)(lStack_88 + 8))(lVar21,puStack_80);
                  if (bVar6) goto LAB_10082e588;
                }
                else {
                  IVar8 = Swift::String::UnicodeScalarView::_foreignIndex
                                    ((Index)0xf,(UnicodeScalarView)SVar9.unknown);
                  if (lVar21 - ((ulong)IVar8.cmsgPointer.unknown >> 0xe) == 0) goto LAB_10082e530;
LAB_10082e4d0:
                  _swift_bridgeObjectRelease(pvVar16);
                }
                bVar6 = Swift::Character::get__isUppercased(CVar24);
                if (!bVar6) goto LAB_10082e588;
                bVar6 = Swift::Character::get__isLowercased(CVar24);
                _swift_bridgeObjectRelease(pvVar16);
                if (!bVar6) goto LAB_10082e590;
              }
              else {
                _swift_bridgeObjectRelease(pvVar17);
                pvVar17 = pvVar16;
LAB_10082e67c:
                _swift_bridgeObjectRelease(pvVar17);
              }
              _swift_bridgeObjectRelease(pvVar17);
            }
            _Var11.unknown = SVar9.unknown;
            FUN_1000482c8(SVar9.unknown,pvVar16);
            if (((ulong)_Var11.unknown & 0xff00000000) == 0x100000000) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x10082e954);
              (*pcVar5)();
            }
            _swift_bridgeObjectRetain(pvVar16);
            lVar22 = lStack_90;
            PVar12 = Swift::Unicode::Scalar::get_properties(_Var11.unknown);
            bVar6 = Swift::Unicode::Scalar::Properties::get_isLowercase(PVar12);
            (**(code **)(lStack_88 + 8))(lVar22,puStack_80);
            if (!bVar6) goto LAB_10082e47c;
            _swift_bridgeObjectRelease(pvVar16);
LAB_10082e588:
            _swift_bridgeObjectRelease(pvVar16);
LAB_10082e590:
            uVar2 = (ulong)SVar10.unknown & 0xffffffffffff;
            if (((ulong)pvVar17 & 0x2000000000000000) != 0) {
              uVar2 = (ulong)pvVar17 >> 0x38 & 0xf;
            }
            if (uVar2 == 0) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x10082e950);
              (*pcVar5)();
            }
            uVar19 = (uint)CVar25.str;
            if (((ulong)pvVar17 >> 0x3c & 1) == 0) {
              uVar18 = uVar19;
              if (((ulong)pvVar17 >> 0x3d & 1) == 0) {
                if (((ulong)SVar10.unknown >> 0x3c & 1) == 0) {
                  UVar13 = Swift::_StringObject::get_sharedUTF8(SVar10.unknown);
                  uVar18 = (uint)(byte)*UVar13.unknown;
                }
                else {
                  uVar18 = (uint)*(byte *)(((ulong)pvVar17 & 0xfffffffffffffff) + 0x20);
                }
              }
              IVar8.cmsgPointer.unknown =
                   (UnsafeMutablePointer)(UnsafeMutablePointer)(undefined *)0x10000;
              if (0x7fffffff < (uint)(int)(char)uVar18) {
                IVar8.cmsgPointer.unknown =
                     (UnsafeMutablePointer)
                     (undefined *)(LZCOUNT(uVar18 << 0x18 ^ 0xffffffff) << 0x10);
              }
            }
            else {
              IVar8 = Swift::String::UnicodeScalarView::_foreignIndex
                                ((Index)0xf,(UnicodeScalarView)SVar10.unknown);
            }
            lVar21 = uVar2 * 4;
            if (lVar21 - ((ulong)IVar8.cmsgPointer.unknown >> 0xe) == 0) {
              _Var11.unknown = SVar10.unknown;
              FUN_1000482c8(SVar10.unknown,pvVar17);
              if (((ulong)_Var11.unknown & 0xff00000000) == 0x100000000) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x10082e958);
                (*pcVar5)();
              }
              _swift_bridgeObjectRetain(pvVar17);
              lVar22 = lStack_90;
              PVar12 = Swift::Unicode::Scalar::get_properties(_Var11.unknown);
              bVar6 = Swift::Unicode::Scalar::Properties::get_isUppercase(PVar12);
              (**(code **)(lStack_88 + 8))(lVar22,puStack_80);
              if (!bVar6) goto LAB_10082e64c;
              _swift_bridgeObjectRelease(pvVar17);
LAB_10082e7e4:
              _swift_bridgeObjectRelease(pvVar17);
              break;
            }
            _swift_bridgeObjectRetain(pvVar17);
LAB_10082e64c:
            bVar6 = Swift::Character::get__isUppercased(CVar25);
            if (!bVar6) goto LAB_10082e67c;
            if (((ulong)pvVar17 >> 0x3c & 1) == 0) {
              if (((ulong)pvVar17 >> 0x3d & 1) == 0) {
                if (((ulong)SVar10.unknown >> 0x3c & 1) == 0) {
                  UVar13 = Swift::_StringObject::get_sharedUTF8(SVar10.unknown);
                  uVar19 = (uint)(byte)*UVar13.unknown;
                }
                else {
                  uVar19 = (uint)*(byte *)(((ulong)pvVar17 & 0xfffffffffffffff) + 0x20);
                }
              }
              uVar2 = 0x10000;
              if (0x7fffffff < (uint)(int)(char)uVar19) {
                uVar2 = LZCOUNT(uVar19 << 0x18 ^ 0xffffffff) << 0x10;
              }
              if (lVar21 - (uVar2 >> 0xe) != 0) goto LAB_10082e6ac;
LAB_10082e70c:
              FUN_1000482c8(SVar10.unknown,pvVar17);
              _swift_bridgeObjectRelease(pvVar17);
              lVar21 = lStack_90;
              if (((ulong)SVar10.unknown & 0xff00000000) == 0x100000000) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x10082e960);
                (*pcVar5)();
              }
              PVar12 = Swift::Unicode::Scalar::get_properties(SVar10);
              bVar6 = Swift::Unicode::Scalar::Properties::get_isCased(PVar12);
              (**(code **)(lStack_88 + 8))(lVar21,puStack_80);
              if (bVar6) goto LAB_10082e7e4;
            }
            else {
              IVar8 = Swift::String::UnicodeScalarView::_foreignIndex
                                ((Index)0xf,(UnicodeScalarView)SVar10.unknown);
              if (lVar21 - ((ulong)IVar8.cmsgPointer.unknown >> 0xe) == 0) goto LAB_10082e70c;
LAB_10082e6ac:
              _swift_bridgeObjectRelease(pvVar17);
            }
            bVar6 = Swift::Character::get__isUppercased(CVar25);
            if (!bVar6) goto LAB_10082e7e4;
            bVar6 = Swift::Character::get__isLowercased(CVar25);
            _swift_bridgeObjectRelease(pvVar17);
          } while (bVar6);
          CVar24.bridgeObject = (void *)0xe100000000000000;
          CVar24.str = (char *)0x2d;
          SVar32.bridgeObject = param_5;
          SVar32.str = param_4;
          Swift::String::insert(CVar24,after,SVar32);
          puVar23 = puStack_70;
          pcVar14 = pcStack_78;
          SVar3.bridgeObject = puStack_70;
          SVar3.str = pcStack_78;
          after = Swift::String::index(after,SVar3);
        } while( true );
      }
      SVar26 = Swift::String::lowercased(SVar27);
      _swift_bridgeObjectRelease(puVar23);
LAB_10082e86c:
      uVar2 = *(ulong *)(puVar20 + 0x10);
      puStack_68 = puVar20;
      if (*(ulong *)(puVar20 + 0x18) >> 1 <= uVar2) {
        FUN_10083547c(1 < *(ulong *)(puVar20 + 0x18),uVar2 + 1,1);
      }
      lVar22 = lVar22 + 1;
      *(ulong *)(puStack_68 + 0x10) = uVar2 + 1;
      *(String *)(puStack_68 + uVar2 * 0x10 + 0x20) = SVar26;
      puVar20 = puStack_68;
    } while (lVar22 != lVar21);
  }
  pcVar14 = &DAT_100fe6f38;
  pcStack_78 = puVar20;
  FUN_1000f7830(&DAT_100fe6f38,&DAT_100c7b090);
  pcVar15 = pcVar14;
  FUN_1007ff838();
  separator.bridgeObject = (void *)0xe100000000000000;
  separator.str = (char *)0x2d;
  SVar26 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator);
  _swift_bridgeObjectRelease(puVar20);
  pcStack_78 = (char *)0x2d2d;
  puStack_70 = &SUB_e200000000000000;
  SVar31.bridgeObject = pcVar15;
  SVar31.str = pcVar14;
  Swift::String::append(SVar26,SVar31);
  _swift_bridgeObjectRelease(SVar26.bridgeObject);
  auVar4._8_8_ = puStack_70;
  auVar4._0_8_ = pcStack_78;
  return auVar4;
}



/* Address: 0x10082e24c | FUN_10082e24c */

undefined1  [16]
FUN_10082e24c(long param_1,undefined8 param_2,undefined8 param_3,char *param_4,void *param_5)

{
  String *pSVar1;
  ulong uVar2;
  String SVar3;
  undefined1 auVar4 [16];
  code *pcVar5;
  bool bVar6;
  __int64 _Var7;
  Index IVar8;
  Scalar SVar9;
  Scalar SVar10;
  _StringObject _Var11;
  Properties PVar12;
  UnsafeBufferPointer<__int8> UVar13;
  char *pcVar14;
  char *pcVar15;
  void *pvVar17;
  uint uVar18;
  uint uVar19;
  undefined *puVar20;
  long lVar21;
  Index after;
  long lVar22;
  undefined1 *puVar23;
  Character CVar24;
  Character CVar25;
  String SVar27;
  String separator;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  long local_c0;
  void *local_b8;
  long local_b0;
  undefined *puStack_a8;
  long local_a0;
  Index local_98;
  long local_90;
  long local_88;
  undefined *puStack_80;
  char *local_78;
  undefined1 *puStack_70;
  undefined *local_68;
  String SVar26;
  void *pvVar16;
  
  puStack_80 = (undefined *)Swift::Unicode::Scalar::Properties::typeMetadataAccessor();
  local_88 = *(long *)(puStack_80 + -8);
  local_90 = (long)&local_c0 - (*(long *)(local_88 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar21 = *(long *)(param_1 + 0x10);
  puVar20 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar21 != 0) {
    local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10083547c(0,lVar21,0);
    lVar22 = 0;
    local_a0 = param_1 + 0x20;
    local_c0 = lVar21;
    do {
      puVar20 = local_68;
      pSVar1 = (String *)(local_a0 + lVar22 * 0x10);
      pcVar14 = pSVar1->str;
      puVar23 = pSVar1->bridgeObject;
      SVar27 = *pSVar1;
      SVar26 = *pSVar1;
      _swift_bridgeObjectRetain(puVar23);
      _Var7 = Swift::String::get_count(SVar26);
      if (1 < _Var7) {
        local_b0 = lVar22;
        puStack_a8 = puVar20;
        local_78 = pcVar14;
        puStack_70 = puVar23;
        _swift_bridgeObjectRetain(puVar23);
        after.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0xf;
        local_b8 = puVar23;
        do {
          pcVar15 = pcVar14;
          if (((ulong)puVar23 & 0x2000000000000000) != 0) {
            pcVar15 = (char *)((ulong)puVar23 >> 0x38 & 0xf);
          }
          uVar19 = (uint)((ulong)pcVar14 >> 0x3b) & 1;
          if (((ulong)puVar23 & 0x1000000000000000) == 0) {
            uVar19 = 1;
          }
          uVar2 = 7;
          if (uVar19 == 0) {
            uVar2 = 0xb;
          }
          local_98.cmsgPointer.unknown = (UnsafeMutablePointer)(uVar2 | (long)pcVar15 << 0x10);
          do {
            while( true ) {
              SVar26.bridgeObject = puVar23;
              SVar26.str = pcVar14;
              IVar8 = Swift::String::index(local_98,SVar26);
              if ((ulong)IVar8.cmsgPointer.unknown >> 0xe <= (ulong)after.cmsgPointer.unknown >> 0xe
                 ) {
                SVar27.bridgeObject = puVar23;
                SVar27.str = pcVar14;
                SVar26 = Swift::String::lowercased(SVar27);
                _swift_bridgeObjectRelease(puVar23);
                _swift_bridgeObjectRelease(local_b8);
                puVar20 = puStack_a8;
                lVar21 = local_c0;
                lVar22 = local_b0;
                goto LAB_10082e86c;
              }
              SVar28.bridgeObject = puVar23;
              SVar28.str = pcVar14;
              CVar24 = Swift::String::get_subscript(after,SVar28);
              pvVar16 = CVar24.bridgeObject;
              SVar9.unknown = CVar24.str;
              SVar29.bridgeObject = puVar23;
              SVar29.str = pcVar14;
              after = Swift::String::index(after,SVar29);
              SVar30.bridgeObject = puVar23;
              SVar30.str = pcVar14;
              CVar25 = Swift::String::get_subscript(after,SVar30);
              pvVar17 = CVar25.bridgeObject;
              SVar10.unknown = CVar25.str;
              uVar2 = (ulong)SVar9.unknown & 0xffffffffffff;
              if (((ulong)pvVar16 & 0x2000000000000000) != 0) {
                uVar2 = (ulong)pvVar16 >> 0x38 & 0xf;
              }
              if (uVar2 == 0) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x10082e94c);
                (*pcVar5)();
              }
              uVar19 = (uint)CVar24.str;
              if (((ulong)pvVar16 >> 0x3c & 1) == 0) {
                uVar18 = uVar19;
                if (((ulong)pvVar16 >> 0x3d & 1) == 0) {
                  if (((ulong)SVar9.unknown >> 0x3c & 1) == 0) {
                    UVar13 = Swift::_StringObject::get_sharedUTF8(SVar9.unknown);
                    uVar18 = (uint)(byte)*UVar13.unknown;
                  }
                  else {
                    uVar18 = (uint)*(byte *)(((ulong)pvVar16 & 0xfffffffffffffff) + 0x20);
                  }
                }
                IVar8.cmsgPointer.unknown =
                     (UnsafeMutablePointer)(UnsafeMutablePointer)(undefined *)0x10000;
                if (0x7fffffff < (uint)(int)(char)uVar18) {
                  IVar8.cmsgPointer.unknown =
                       (UnsafeMutablePointer)
                       (undefined *)(LZCOUNT(uVar18 << 0x18 ^ 0xffffffff) << 0x10);
                }
              }
              else {
                IVar8 = Swift::String::UnicodeScalarView::_foreignIndex
                                  ((Index)0xf,(UnicodeScalarView)SVar9.unknown);
              }
              lVar21 = uVar2 * 4;
              if (lVar21 - ((ulong)IVar8.cmsgPointer.unknown >> 0xe) == 0) break;
              _swift_bridgeObjectRetain(pvVar16);
LAB_10082e47c:
              bVar6 = Swift::Character::get__isLowercased(CVar24);
              if (bVar6) {
                if (((ulong)pvVar16 >> 0x3c & 1) == 0) {
                  if (((ulong)pvVar16 >> 0x3d & 1) == 0) {
                    if (((ulong)SVar9.unknown >> 0x3c & 1) == 0) {
                      UVar13 = Swift::_StringObject::get_sharedUTF8(SVar9.unknown);
                      uVar19 = (uint)(byte)*UVar13.unknown;
                    }
                    else {
                      uVar19 = (uint)*(byte *)(((ulong)pvVar16 & 0xfffffffffffffff) + 0x20);
                    }
                  }
                  uVar2 = 0x10000;
                  if (0x7fffffff < (uint)(int)(char)uVar19) {
                    uVar2 = LZCOUNT(uVar19 << 0x18 ^ 0xffffffff) << 0x10;
                  }
                  if (lVar21 - (uVar2 >> 0xe) != 0) goto LAB_10082e4d0;
LAB_10082e530:
                  FUN_1000482c8(SVar9.unknown,pvVar16);
                  _swift_bridgeObjectRelease(pvVar16);
                  lVar21 = local_90;
                  if (((ulong)SVar9.unknown & 0xff00000000) == 0x100000000) {
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x10082e95c);
                    (*pcVar5)();
                  }
                  PVar12 = Swift::Unicode::Scalar::get_properties(SVar9);
                  bVar6 = Swift::Unicode::Scalar::Properties::get_isCased(PVar12);
                  (**(code **)(local_88 + 8))(lVar21,puStack_80);
                  if (bVar6) goto LAB_10082e588;
                }
                else {
                  IVar8 = Swift::String::UnicodeScalarView::_foreignIndex
                                    ((Index)0xf,(UnicodeScalarView)SVar9.unknown);
                  if (lVar21 - ((ulong)IVar8.cmsgPointer.unknown >> 0xe) == 0) goto LAB_10082e530;
LAB_10082e4d0:
                  _swift_bridgeObjectRelease(pvVar16);
                }
                bVar6 = Swift::Character::get__isUppercased(CVar24);
                if (!bVar6) goto LAB_10082e588;
                bVar6 = Swift::Character::get__isLowercased(CVar24);
                _swift_bridgeObjectRelease(pvVar16);
                if (!bVar6) goto LAB_10082e590;
              }
              else {
                _swift_bridgeObjectRelease(pvVar17);
                pvVar17 = pvVar16;
LAB_10082e67c:
                _swift_bridgeObjectRelease(pvVar17);
              }
              _swift_bridgeObjectRelease(pvVar17);
            }
            _Var11.unknown = SVar9.unknown;
            FUN_1000482c8(SVar9.unknown,pvVar16);
            if (((ulong)_Var11.unknown & 0xff00000000) == 0x100000000) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x10082e954);
              (*pcVar5)();
            }
            _swift_bridgeObjectRetain(pvVar16);
            lVar22 = local_90;
            PVar12 = Swift::Unicode::Scalar::get_properties(_Var11.unknown);
            bVar6 = Swift::Unicode::Scalar::Properties::get_isLowercase(PVar12);
            (**(code **)(local_88 + 8))(lVar22,puStack_80);
            if (!bVar6) goto LAB_10082e47c;
            _swift_bridgeObjectRelease(pvVar16);
LAB_10082e588:
            _swift_bridgeObjectRelease(pvVar16);
LAB_10082e590:
            uVar2 = (ulong)SVar10.unknown & 0xffffffffffff;
            if (((ulong)pvVar17 & 0x2000000000000000) != 0) {
              uVar2 = (ulong)pvVar17 >> 0x38 & 0xf;
            }
            if (uVar2 == 0) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x10082e950);
              (*pcVar5)();
            }
            uVar19 = (uint)CVar25.str;
            if (((ulong)pvVar17 >> 0x3c & 1) == 0) {
              uVar18 = uVar19;
              if (((ulong)pvVar17 >> 0x3d & 1) == 0) {
                if (((ulong)SVar10.unknown >> 0x3c & 1) == 0) {
                  UVar13 = Swift::_StringObject::get_sharedUTF8(SVar10.unknown);
                  uVar18 = (uint)(byte)*UVar13.unknown;
                }
                else {
                  uVar18 = (uint)*(byte *)(((ulong)pvVar17 & 0xfffffffffffffff) + 0x20);
                }
              }
              IVar8.cmsgPointer.unknown =
                   (UnsafeMutablePointer)(UnsafeMutablePointer)(undefined *)0x10000;
              if (0x7fffffff < (uint)(int)(char)uVar18) {
                IVar8.cmsgPointer.unknown =
                     (UnsafeMutablePointer)
                     (undefined *)(LZCOUNT(uVar18 << 0x18 ^ 0xffffffff) << 0x10);
              }
            }
            else {
              IVar8 = Swift::String::UnicodeScalarView::_foreignIndex
                                ((Index)0xf,(UnicodeScalarView)SVar10.unknown);
            }
            lVar21 = uVar2 * 4;
            if (lVar21 - ((ulong)IVar8.cmsgPointer.unknown >> 0xe) == 0) {
              _Var11.unknown = SVar10.unknown;
              FUN_1000482c8(SVar10.unknown,pvVar17);
              if (((ulong)_Var11.unknown & 0xff00000000) == 0x100000000) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x10082e958);
                (*pcVar5)();
              }
              _swift_bridgeObjectRetain(pvVar17);
              lVar22 = local_90;
              PVar12 = Swift::Unicode::Scalar::get_properties(_Var11.unknown);
              bVar6 = Swift::Unicode::Scalar::Properties::get_isUppercase(PVar12);
              (**(code **)(local_88 + 8))(lVar22,puStack_80);
              if (!bVar6) goto LAB_10082e64c;
              _swift_bridgeObjectRelease(pvVar17);
LAB_10082e7e4:
              _swift_bridgeObjectRelease(pvVar17);
              break;
            }
            _swift_bridgeObjectRetain(pvVar17);
LAB_10082e64c:
            bVar6 = Swift::Character::get__isUppercased(CVar25);
            if (!bVar6) goto LAB_10082e67c;
            if (((ulong)pvVar17 >> 0x3c & 1) == 0) {
              if (((ulong)pvVar17 >> 0x3d & 1) == 0) {
                if (((ulong)SVar10.unknown >> 0x3c & 1) == 0) {
                  UVar13 = Swift::_StringObject::get_sharedUTF8(SVar10.unknown);
                  uVar19 = (uint)(byte)*UVar13.unknown;
                }
                else {
                  uVar19 = (uint)*(byte *)(((ulong)pvVar17 & 0xfffffffffffffff) + 0x20);
                }
              }
              uVar2 = 0x10000;
              if (0x7fffffff < (uint)(int)(char)uVar19) {
                uVar2 = LZCOUNT(uVar19 << 0x18 ^ 0xffffffff) << 0x10;
              }
              if (lVar21 - (uVar2 >> 0xe) != 0) goto LAB_10082e6ac;
LAB_10082e70c:
              FUN_1000482c8(SVar10.unknown,pvVar17);
              _swift_bridgeObjectRelease(pvVar17);
              lVar21 = local_90;
              if (((ulong)SVar10.unknown & 0xff00000000) == 0x100000000) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x10082e960);
                (*pcVar5)();
              }
              PVar12 = Swift::Unicode::Scalar::get_properties(SVar10);
              bVar6 = Swift::Unicode::Scalar::Properties::get_isCased(PVar12);
              (**(code **)(local_88 + 8))(lVar21,puStack_80);
              if (bVar6) goto LAB_10082e7e4;
            }
            else {
              IVar8 = Swift::String::UnicodeScalarView::_foreignIndex
                                ((Index)0xf,(UnicodeScalarView)SVar10.unknown);
              if (lVar21 - ((ulong)IVar8.cmsgPointer.unknown >> 0xe) == 0) goto LAB_10082e70c;
LAB_10082e6ac:
              _swift_bridgeObjectRelease(pvVar17);
            }
            bVar6 = Swift::Character::get__isUppercased(CVar25);
            if (!bVar6) goto LAB_10082e7e4;
            bVar6 = Swift::Character::get__isLowercased(CVar25);
            _swift_bridgeObjectRelease(pvVar17);
          } while (bVar6);
          CVar24.bridgeObject = (void *)0xe100000000000000;
          CVar24.str = (char *)0x2d;
          SVar32.bridgeObject = param_5;
          SVar32.str = param_4;
          Swift::String::insert(CVar24,after,SVar32);
          puVar23 = puStack_70;
          pcVar14 = local_78;
          SVar3.bridgeObject = puStack_70;
          SVar3.str = local_78;
          after = Swift::String::index(after,SVar3);
        } while( true );
      }
      SVar26 = Swift::String::lowercased(SVar27);
      _swift_bridgeObjectRelease(puVar23);
LAB_10082e86c:
      uVar2 = *(ulong *)(puVar20 + 0x10);
      local_68 = puVar20;
      if (*(ulong *)(puVar20 + 0x18) >> 1 <= uVar2) {
        FUN_10083547c(1 < *(ulong *)(puVar20 + 0x18),uVar2 + 1,1);
      }
      lVar22 = lVar22 + 1;
      *(ulong *)(local_68 + 0x10) = uVar2 + 1;
      *(String *)(local_68 + uVar2 * 0x10 + 0x20) = SVar26;
      puVar20 = local_68;
    } while (lVar22 != lVar21);
  }
  pcVar14 = &DAT_100fe6f38;
  local_78 = puVar20;
  FUN_1000f7830(&DAT_100fe6f38,&DAT_100c7b090);
  pcVar15 = pcVar14;
  FUN_1007ff838();
  separator.bridgeObject = (void *)0xe100000000000000;
  separator.str = (char *)0x2d;
  SVar26 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator);
  _swift_bridgeObjectRelease(puVar20);
  local_78 = (char *)0x2d2d;
  puStack_70 = &SUB_e200000000000000;
  SVar31.bridgeObject = pcVar15;
  SVar31.str = pcVar14;
  Swift::String::append(SVar26,SVar31);
  _swift_bridgeObjectRelease(SVar26.bridgeObject);
  auVar4._8_8_ = puStack_70;
  auVar4._0_8_ = local_78;
  return auVar4;
}



/* Address: 0x10082e960 | FUN_10082e960 */

undefined1  [16] FUN_10082e960(void)

{
  return ZEXT816(0x100f05518);
}



/* Address: 0x10082e970 | thunk_FUN_10082e974 */

void thunk_FUN_10082e974(void)

{
  FUN_10082e974();
  return;
}



/* Address: 0x10082e974 | FUN_10082e974 */

undefined1  [16] FUN_10082e974(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  String SVar9;
  undefined1 auVar10 [16];
  undefined *local_90 [2];
  undefined8 *local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_70 = 0x2e;
  uStack_68 = 0xe100000000000000;
  local_80 = &local_70;
  _swift_bridgeObjectRetain(param_2);
  lVar4 = 0x7fffffffffffffff;
  FUN_1008362e0(0x7fffffffffffffff,1,FUN_1002dee10,local_90,param_1,param_2);
  uVar6 = *(ulong *)(lVar4 + 0x10);
  if (uVar6 == 0) {
    _swift_bridgeObjectRelease(lVar4);
    puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    local_90[0] = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10083547c(0,uVar6,0);
    uVar7 = 0;
    puVar8 = (undefined8 *)(lVar4 + 0x38);
    do {
      puVar5 = local_90[0];
      if (*(ulong *)(lVar4 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10082eafc);
        (*pcVar3)();
      }
      SVar9 = *(String *)(puVar8 + -3);
      uVar2 = *puVar8;
      _swift_bridgeObjectRetain(uVar2);
      SVar9 = Swift::String::__fromSubstring(SVar9);
      _swift_bridgeObjectRelease(uVar2);
      uVar1 = *(ulong *)(puVar5 + 0x10);
      local_90[0] = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
        FUN_10083547c(1 < *(ulong *)(puVar5 + 0x18),uVar1 + 1,1);
      }
      puVar5 = local_90[0];
      uVar7 = uVar7 + 1;
      *(ulong *)(local_90[0] + 0x10) = uVar1 + 1;
      *(String *)(local_90[0] + uVar1 * 0x10 + 0x20) = SVar9;
      puVar8 = puVar8 + 4;
    } while (uVar6 != uVar7);
    _swift_bridgeObjectRelease(lVar4);
  }
  _swift_bridgeObjectRetain(param_3);
  auVar10._8_8_ = param_3;
  auVar10._0_8_ = puVar5;
  return auVar10;
}



/* Address: 0x10082eafc | FUN_10082eafc */

undefined1  [16] FUN_10082eafc(void)

{
  return ZEXT816(0x100f05540);
}



/* Address: 0x10082eb0c | FUN_10082eb0c */

String FUN_10082eb0c(undefined8 param_1)

{
  String *unaff_x20;
  String SVar1;
  
  SVar1 = *unaff_x20;
  _swift_bridgeObjectRetain();
  FUN_1000f7830(&DAT_100fe6f38,&DAT_100c7b090);
  FUN_1007ff838();
  SVar1 = (extension_Swift)::Swift::BidirectionalCollection::_joined(SVar1);
  _swift_bridgeObjectRelease(param_1);
  return SVar1;
}



/* Address: 0x10082eb98 | FUN_10082eb98 */

undefined1  [16] FUN_10082eb98(void)

{
  return ZEXT816(0x100f055c8);
}



/* Address: 0x10082eba8 | FUN_10082eba8 */

undefined1  [16] FUN_10082eba8(void)

{
  return ZEXT816(0x100f055f8);
}



/* Address: 0x10082ebb8 | FUN_10082ebb8 */

undefined1  [16] FUN_10082ebb8(void)

{
  return ZEXT816(0x100f05620);
}



/* Address: 0x10082ebc8 | FUN_10082ebc8 */

/* WARNING: Removing unreachable block (ram,0x00010082ed84) */
/* WARNING: Removing unreachable block (ram,0x00010082ee08) */
/* WARNING: Removing unreachable block (ram,0x00010082eda0) */

ulong FUN_10082ebc8(undefined8 param_1,undefined8 param_2,undefined4 param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ushort uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong local_118;
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined8 local_e0;
  long lStack_d8;
  undefined1 auStack_d0 [40];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ushort local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  lVar10 = *(long *)(param_4 + 0x10);
  local_118 = 0;
  FUN_1008368f4(0,lVar10,0,PTR___swiftEmptyArrayStorage_100eae0d8);
  if (lVar10 != 0) {
    param_4 = param_4 + 0x20;
    do {
      FUN_100076688(param_4,auStack_d0);
      FUN_100076508(auStack_d0,auStack_f8);
      lVar8 = lStack_d8;
      uVar7 = local_e0;
      FUN_100004640(auStack_f8,local_e0);
      (**(code **)(lVar8 + 8))();
      lVar9 = lStack_d8;
      uVar2 = local_e0;
      FUN_100004640(auStack_f8,local_e0);
      (**(code **)(lVar9 + 0x10))(&local_a8,param_1,param_2,param_3,uVar2,lVar9);
      uVar6 = local_88;
      uVar5 = uStack_90;
      uVar4 = local_98;
      uVar3 = uStack_a0;
      uVar2 = local_a8;
      uStack_78 = uStack_a0;
      local_80 = local_a8;
      FUN_1007fb28c(local_98,uStack_90,local_88);
      FUN_1007fb28c(uVar4,uVar5,uVar6);
      FUN_10000ca28(&local_80,auStack_110);
      uVar1 = *(ulong *)(local_118 + 0x10);
      if (*(ulong *)(local_118 + 0x18) >> 1 <= uVar1) {
        local_118 = (ulong)(1 < *(ulong *)(local_118 + 0x18));
        FUN_1008368f4(local_118,uVar1 + 1,1);
      }
      *(ulong *)(local_118 + 0x10) = uVar1 + 1;
      lVar9 = local_118 + uVar1 * 0x38;
      *(undefined8 *)(lVar9 + 0x20) = uVar7;
      *(long *)(lVar9 + 0x28) = lVar8;
      *(undefined8 *)(lVar9 + 0x30) = uVar2;
      *(undefined8 *)(lVar9 + 0x38) = uVar3;
      *(undefined8 *)(lVar9 + 0x40) = uVar4;
      *(undefined8 *)(lVar9 + 0x48) = uVar5;
      *(ushort *)(lVar9 + 0x50) = uVar6;
      *(undefined1 *)(lVar9 + 0x52) = 0;
      FUN_10000caac(&local_80);
      FUN_1007fb2d8(uVar4,uVar5,uVar6);
      FUN_100004594(auStack_f8);
      if ((uVar6 & 0xff00) != 0x200) {
        return local_118;
      }
      param_4 = param_4 + 0x28;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return local_118;
}



/* Address: 0x10082ee24 | FUN_10082ee24 */

void FUN_10082ee24(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,long param_6)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  int *piVar5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xc0) = param_4;
  *(long *)(unaff_x22 + 200) = param_6;
  *(undefined1 *)(unaff_x22 + 0x82) = param_5;
  *(ulong *)(unaff_x22 + 0xb0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_3;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_1;
  lVar4 = *(long *)(param_6 + 0x10);
  *(long *)(unaff_x22 + 0xd0) = lVar4;
  if (lVar4 != 0) {
    *(undefined **)(unaff_x22 + 0xd8) = PTR___swiftEmptyArrayStorage_100eae0d8;
    *(undefined8 *)(unaff_x22 + 0xe0) = 0;
    FUN_100076688(param_6 + 0x20,unaff_x22 + 0x10);
    FUN_100076508(unaff_x22 + 0x10,unaff_x22 + 0x38);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
    lVar4 = *(long *)(unaff_x22 + 0x58);
    FUN_100004640(unaff_x22 + 0x38,uVar2);
    (**(code **)(lVar4 + 8))();
    *(undefined8 *)(unaff_x22 + 0xe8) = uVar2;
    *(long *)(unaff_x22 + 0xf0) = lVar4;
    uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
    lVar4 = *(long *)(unaff_x22 + 0x58);
    FUN_100004640(unaff_x22 + 0x38,uVar2);
    piVar5 = *(int **)(lVar4 + 0x18);
    iVar1 = *piVar5;
    plVar3 = (long *)(ulong)(uint)piVar5[1];
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xf8) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_10082ef5c;
                    /* WARNING: Could not recover jumptable at 0x00010082ef28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar5))
              (unaff_x22 + 0x60,*(undefined8 *)(unaff_x22 + 0xa8),param_2 & 0xcfffffffffffffff,
               *(undefined8 *)(unaff_x22 + 0xb8),*(undefined8 *)(unaff_x22 + 0xc0),
               *(undefined1 *)(unaff_x22 + 0x82),uVar2,lVar4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010082ef58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(PTR___swiftEmptyArrayStorage_100eae0d8,0,0,0x200);
  return;
}



/* Address: 0x10082ef5c | FUN_10082ef5c */

void FUN_10082ef5c(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ushort uVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long unaff_x20;
  long lVar13;
  undefined8 uVar14;
  long *unaff_x22;
  long lVar15;
  ulong uVar16;
  long lVar17;
  
  lVar17 = *unaff_x22;
  lVar15 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar17 + 0xf8));
  if (unaff_x20 == 0) {
    uVar11 = *(ulong *)(lVar17 + 0xd8);
    uVar6 = *(undefined8 *)(lVar17 + 0x60);
    uVar3 = *(undefined8 *)(lVar17 + 0x68);
    unaff_x20 = *(long *)(lVar17 + 0x70);
    uVar14 = *(undefined8 *)(lVar17 + 0x78);
    uVar5 = *(ushort *)(lVar17 + 0x80);
    uVar16 = (ulong)uVar5;
    *(undefined8 *)(lVar17 + 0x90) = *(undefined8 *)(lVar17 + 0x68);
    *(undefined8 *)(lVar17 + 0x88) = *(undefined8 *)(lVar17 + 0x60);
    FUN_1007fb28c(unaff_x20,uVar14,uVar16);
    FUN_1007fb28c(unaff_x20,uVar14,uVar16);
    FUN_10000ca28(lVar17 + 0x88,lVar17 + 0x98);
    _swift_isUniquelyReferenced_nonNull_native();
    uVar12 = *(ulong *)(lVar17 + 0xd8);
    uVar8 = uVar12;
    if ((uVar11 & 1) == 0) {
      uVar8 = 0;
      FUN_1008368f4(0,*(long *)(uVar12 + 0x10) + 1,1,uVar12);
    }
    uVar11 = *(ulong *)(uVar8 + 0x10);
    uVar12 = uVar8;
    if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar11) {
      uVar12 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
      FUN_1008368f4(uVar12,uVar11 + 1,1,uVar8);
    }
    uVar2 = *(undefined8 *)(lVar17 + 0xe8);
    uVar4 = *(undefined8 *)(lVar17 + 0xf0);
    *(ulong *)(uVar12 + 0x10) = uVar11 + 1;
    lVar10 = uVar12 + uVar11 * 0x38;
    *(undefined8 *)(lVar10 + 0x20) = uVar2;
    *(undefined8 *)(lVar10 + 0x28) = uVar4;
    *(undefined8 *)(lVar10 + 0x30) = uVar6;
    *(undefined8 *)(lVar10 + 0x38) = uVar3;
    *(long *)(lVar10 + 0x40) = unaff_x20;
    *(undefined8 *)(lVar10 + 0x48) = uVar14;
    *(ushort *)(lVar10 + 0x50) = uVar5;
    *(undefined1 *)(lVar10 + 0x52) = 0;
    FUN_10000caac(lVar17 + 0x88);
    FUN_1007fb2d8(unaff_x20,uVar14,uVar16);
    if ((uVar5 & 0xff00) == 0x200) {
      lVar10 = *(long *)(lVar17 + 0xe0);
      lVar13 = *(long *)(lVar17 + 0xd0);
      FUN_100004594(lVar17 + 0x38);
      if (lVar10 + 1 != lVar13) {
        lVar10 = *(long *)(lVar17 + 0xe0);
        *(ulong *)(lVar17 + 0xd8) = uVar12;
        *(long *)(lVar17 + 0xe0) = lVar10 + 1;
        uVar8 = *(ulong *)(lVar17 + 0xb0);
        FUN_100076688(*(long *)(lVar17 + 200) + lVar10 * 0x28 + 0x48,lVar17 + 0x10);
        FUN_100076508(lVar17 + 0x10,lVar17 + 0x38);
        uVar6 = *(undefined8 *)(lVar17 + 0x50);
        lVar10 = *(long *)(lVar17 + 0x58);
        FUN_100004640(lVar17 + 0x38,uVar6);
        (**(code **)(lVar10 + 8))();
        *(undefined8 *)(lVar17 + 0xe8) = uVar6;
        *(long *)(lVar17 + 0xf0) = lVar10;
        uVar6 = *(undefined8 *)(lVar17 + 0x50);
        lVar10 = *(long *)(lVar17 + 0x58);
        FUN_100004640(lVar17 + 0x38,uVar6);
        piVar9 = *(int **)(lVar10 + 0x18);
        iVar1 = *piVar9;
        plVar7 = (long *)(ulong)(uint)piVar9[1];
        _swift_task_alloc();
        *(long **)(lVar17 + 0xf8) = plVar7;
        *plVar7 = lVar15;
        plVar7[1] = (long)FUN_10082ef5c;
                    /* WARNING: Could not recover jumptable at 0x00010082f1f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((long)iVar1 + (long)piVar9))
                  (lVar17 + 0x60,*(undefined8 *)(lVar17 + 0xa8),uVar8 & 0xcfffffffffffffff,
                   *(undefined8 *)(lVar17 + 0xb8),*(undefined8 *)(lVar17 + 0xc0),
                   *(undefined1 *)(lVar17 + 0x82),uVar6,lVar10);
        return;
      }
      unaff_x20 = 0;
      uVar14 = 0;
      uVar16 = 0x200;
    }
    else {
      FUN_100004594(lVar17 + 0x38);
    }
  }
  else {
    uVar11 = *(ulong *)(lVar17 + 0xd8);
    _swift_errorRetain();
    _swift_isUniquelyReferenced_nonNull_native();
    uVar12 = *(ulong *)(lVar17 + 0xd8);
    uVar8 = uVar12;
    if ((uVar11 & 1) == 0) {
      uVar8 = 0;
      FUN_1008368f4(0,*(long *)(uVar12 + 0x10) + 1,1,uVar12);
    }
    uVar11 = *(ulong *)(uVar8 + 0x10);
    uVar12 = uVar8;
    if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar11) {
      uVar12 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
      FUN_1008368f4(uVar12,uVar11 + 1,1,uVar8);
    }
    uVar6 = *(undefined8 *)(lVar17 + 0xe8);
    uVar3 = *(undefined8 *)(lVar17 + 0xf0);
    *(ulong *)(uVar12 + 0x10) = uVar11 + 1;
    lVar10 = uVar12 + uVar11 * 0x38;
    *(undefined8 *)(lVar10 + 0x20) = uVar6;
    *(undefined8 *)(lVar10 + 0x28) = uVar3;
    *(long *)(lVar10 + 0x30) = unaff_x20;
    *(undefined8 *)(lVar10 + 0x38) = 0;
    *(undefined8 *)(lVar10 + 0x40) = 0;
    *(undefined8 *)(lVar10 + 0x48) = 0;
    *(undefined2 *)(lVar10 + 0x50) = 0;
    *(undefined1 *)(lVar10 + 0x52) = 1;
    FUN_100004594(lVar17 + 0x38);
    uVar14 = 0;
    uVar16 = 0x10000;
  }
                    /* WARNING: Could not recover jumptable at 0x00010082f118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar15 + 8))(uVar12,unaff_x20,uVar14,uVar16);
  return;
}



/* Address: 0x10082f27c | FUN_10082f27c */

void FUN_10082f27c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long unaff_x22;
  long lVar6;
  long lVar7;
  long lVar8;
  
  *(long *)(unaff_x22 + 0x70) = param_9;
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar8 = *(long *)(param_9 + 0x10);
  if (lVar8 != 0) {
    FUN_10083547c(0,lVar8,0);
    lVar7 = param_9 + 0x20;
    lVar6 = lVar8;
    do {
      FUN_100076688(lVar7,unaff_x22 + 0x40);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
      lVar4 = *(long *)(unaff_x22 + 0x60);
      FUN_100004640(unaff_x22 + 0x40,uVar3);
      (**(code **)(lVar4 + 8))();
      FUN_100004594(unaff_x22 + 0x40);
      uVar1 = *(ulong *)(puVar2 + 0x10);
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
        FUN_10083547c(1 < *(ulong *)(puVar2 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(puVar2 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puVar2 + uVar1 * 0x10 + 0x20) = uVar3;
      *(long *)(puVar2 + uVar1 * 0x10 + 0x28) = lVar4;
      lVar7 = lVar7 + 0x28;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  *(undefined **)(unaff_x22 + 0x78) = puVar2;
  uVar3 = 0;
  FUN_100836a2c(0,lVar8,0,PTR___swiftEmptyArrayStorage_100eae0d8);
  *(undefined8 *)(unaff_x22 + 0x68) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x20) = param_10;
  *(undefined8 *)(unaff_x22 + 0x28) = param_7;
  *(undefined8 *)(unaff_x22 + 0x30) = param_8;
  *(undefined **)(unaff_x22 + 0x38) = puVar2;
  plVar5 = (long *)0xb0;
  _swift_bridgeObjectRetain(param_9);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x80) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10082f480;
  FUN_100830474(plVar5,param_1,param_2,param_3 & 0xcfffffffffffffff,param_9,param_9 + 0x20,0,
                lVar8 << 1 | 1,(undefined8 *)(unaff_x22 + 0x68),param_4,param_5,(char)param_6,
                param_6,&DAT_100c7c448);
  return;
}



/* Address: 0x10082f480 | FUN_10082f480 */

void FUN_10082f480(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  long *unaff_x22;
  long lVar4;
  
  lVar3 = *unaff_x22;
  lVar4 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x80));
  uVar1 = *(undefined8 *)(lVar3 + 0x70);
  uVar2 = *(undefined8 *)(lVar3 + 0x78);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x68));
  if (unaff_x20 == 0) {
    _swift_bridgeObjectRelease(uVar1);
  }
  else {
    _swift_bridgeObjectRelease(uVar2);
    uVar2 = uVar1;
  }
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010082f4f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))();
  return;
}



/* Address: 0x10082f4fc | FUN_10082f4fc */

undefined * FUN_10082f4fc(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 auStack_a8 [24];
  undefined8 local_90;
  long lStack_88;
  undefined1 auStack_80 [40];
  undefined *local_58;
  
  lVar4 = *(long *)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar4 != 0) {
    local_58 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1008354c4(0,lVar4,0);
    param_1 = param_1 + 0x20;
    puVar5 = local_58;
    do {
      FUN_100076688(param_1,auStack_a8);
      lVar3 = lStack_88;
      uVar2 = local_90;
      FUN_100004640(auStack_a8,local_90);
      (**(code **)(lVar3 + 0x28))(auStack_80,uVar2,lVar3);
      FUN_100004594(auStack_a8);
      uVar1 = *(ulong *)(puVar5 + 0x10);
      local_58 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
        FUN_1008354c4(1 < *(ulong *)(puVar5 + 0x18),uVar1 + 1,1);
      }
      puVar5 = local_58;
      *(ulong *)(local_58 + 0x10) = uVar1 + 1;
      FUN_100076508(auStack_80,local_58 + uVar1 * 0x28 + 0x20);
      param_1 = param_1 + 0x28;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return puVar5;
}



/* Address: 0x10082f604 | FUN_10082f604 */

void FUN_10082f604(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined8 uVar1;
  long *plVar2;
  long unaff_x22;
  long lVar3;
  
  *(long *)(unaff_x22 + 0x40) = param_6;
  lVar3 = *(long *)(param_6 + 0x10);
  uVar1 = 0;
  FUN_100836a50(0,lVar3,0,PTR___swiftEmptyArrayStorage_100eae0d8);
  *(undefined8 *)(unaff_x22 + 0x38) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x20) = param_7;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = param_5;
  plVar2 = (long *)0xa0;
  _swift_bridgeObjectRetain(param_6);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x48) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_10082f708;
  FUN_10082fe00(plVar2,param_1,param_2,param_3 & 0xcfffffffffffffff,param_6,param_6 + 0x20,0,
                lVar3 << 1 | 1,(undefined8 *)(unaff_x22 + 0x38),&DAT_100c7c400,unaff_x22 + 0x10,
                param_7);
  return;
}



/* Address: 0x10082f708 | FUN_10082f708 */

void FUN_10082f708(void)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x40);
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x48));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x38));
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010082f760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Address: 0x10082f764 | FUN_10082f764 */

/* WARNING: Removing unreachable block (ram,0x00010082f948) */
/* WARNING: Removing unreachable block (ram,0x00010082f9d8) */
/* WARNING: Removing unreachable block (ram,0x00010082f95c) */
/* WARNING: Removing unreachable block (ram,0x00010082f9f8) */
/* WARNING: Removing unreachable block (ram,0x00010082f970) */

undefined * FUN_10082f764(undefined8 param_1,undefined8 param_2,undefined4 param_3,long param_4)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ushort uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined *local_118;
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined8 local_e0;
  long lStack_d8;
  undefined1 auStack_d0 [40];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ushort local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  lVar12 = *(long *)(param_4 + 0x10);
  if (lVar12 == 0) {
    local_118 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    param_4 = param_4 + 0x20;
    local_118 = PTR___swiftEmptyArrayStorage_100eae0d8;
    do {
      FUN_100076688(param_4,auStack_d0);
      FUN_100076508(auStack_d0,auStack_f8);
      lVar11 = lStack_d8;
      uVar9 = local_e0;
      FUN_100004640(auStack_f8,local_e0);
      (**(code **)(lVar11 + 8))();
      lVar4 = lStack_d8;
      uVar3 = local_e0;
      FUN_100004640(auStack_f8,local_e0);
      (**(code **)(lVar4 + 0x10))(&local_a8,param_1,param_2,param_3,uVar3,lVar4);
      uVar8 = local_88;
      uVar7 = uStack_90;
      uVar6 = local_98;
      uVar5 = uStack_a0;
      uVar3 = local_a8;
      uStack_78 = uStack_a0;
      local_80 = local_a8;
      FUN_1007fb28c(local_98,uStack_90,local_88);
      FUN_1007fb28c(uVar6,uVar7,uVar8);
      FUN_10000ca28(&local_80,auStack_110);
      puVar10 = local_118;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((ulong)puVar10 & 1) == 0) {
        plVar1 = (long *)(local_118 + 0x10);
        local_118 = (undefined *)0x0;
        FUN_1008368f4(0,*plVar1 + 1,1);
      }
      uVar2 = *(ulong *)(local_118 + 0x10);
      if (*(ulong *)(local_118 + 0x18) >> 1 <= uVar2) {
        puVar10 = (undefined *)(ulong)(1 < *(ulong *)(local_118 + 0x18));
        FUN_1008368f4(puVar10,uVar2 + 1,1,local_118);
        local_118 = puVar10;
      }
      *(ulong *)(local_118 + 0x10) = uVar2 + 1;
      *(undefined8 *)(local_118 + uVar2 * 0x38 + 0x20) = uVar9;
      *(long *)(local_118 + uVar2 * 0x38 + 0x28) = lVar11;
      *(undefined8 *)(local_118 + uVar2 * 0x38 + 0x30) = uVar3;
      *(undefined8 *)(local_118 + uVar2 * 0x38 + 0x38) = uVar5;
      *(undefined8 *)(local_118 + uVar2 * 0x38 + 0x40) = uVar6;
      *(undefined8 *)(local_118 + uVar2 * 0x38 + 0x48) = uVar7;
      *(ushort *)(local_118 + uVar2 * 0x38 + 0x50) = uVar8;
      local_118[uVar2 * 0x38 + 0x52] = 0;
      FUN_10000caac(&local_80);
      FUN_1007fb2d8(uVar6,uVar7,uVar8);
      FUN_100004594(auStack_f8);
      if ((uVar8 & 0xff00) != 0x200) {
        return local_118;
      }
      param_4 = param_4 + 0x28;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  return local_118;
}



/* Address: 0x10082fa18 | FUN_10082fa18 */

undefined1  [16] FUN_10082fa18(long param_1,_StringGuts param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  char *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  undefined *local_90;
  undefined8 local_88;
  undefined8 local_78;
  long lStack_70;
  undefined *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_90 = (undefined *)0x0;
  local_88 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x15,param_2);
  _swift_bridgeObjectRelease(local_88);
  local_60 = 0xd000000000000012;
  uStack_58 = 0x8000000100db1e30;
  lVar8 = *(long *)(param_1 + 0x10);
  puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar8 != 0) {
    local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10083547c(0,lVar8,0);
    param_1 = param_1 + 0x20;
    do {
      puVar7 = local_68;
      FUN_100076688(param_1,&local_90);
      lVar6 = lStack_70;
      uVar3 = local_78;
      FUN_100004640(&local_90,local_78);
      (**(code **)(lVar6 + 8))();
      FUN_100004594(&local_90);
      uVar1 = *(ulong *)(puVar7 + 0x10);
      local_68 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
        FUN_10083547c(1 < *(ulong *)(puVar7 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(local_68 + 0x10) = uVar1 + 1;
      *(undefined8 *)(local_68 + uVar1 * 0x10 + 0x20) = uVar3;
      *(long *)(local_68 + uVar1 * 0x10 + 0x28) = lVar6;
      param_1 = param_1 + 0x28;
      lVar8 = lVar8 + -1;
      puVar7 = local_68;
    } while (lVar8 != 0);
  }
  pcVar4 = &DAT_100fe6f38;
  local_90 = puVar7;
  FUN_1000f7830(&DAT_100fe6f38,&DAT_100c7b090);
  puVar5 = &DAT_100fe6f40;
  FUN_100134584(&DAT_100fe6f40,&DAT_100fe6f38,&DAT_100c7b090,
                PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100eac518);
  SVar9.bridgeObject = &SUB_e200000000000000;
  SVar9.str = (char *)0x202c;
  SVar9 = (extension_Swift)::Swift::BidirectionalCollection::_joined(SVar9);
  _swift_bridgeObjectRelease(puVar7);
  SVar11.bridgeObject = puVar5;
  SVar11.str = pcVar4;
  Swift::String::append(SVar9,SVar11);
  _swift_bridgeObjectRelease(SVar9.bridgeObject);
  SVar10.bridgeObject = (void *)0xe100000000000000;
  SVar10.str = (char *)0x5d;
  SVar12.bridgeObject = puVar5;
  SVar12.str = pcVar4;
  Swift::String::append(SVar10,SVar12);
  auVar2._8_8_ = uStack_58;
  auVar2._0_8_ = local_60;
  return auVar2;
}



/* Address: 0x10082fbe0 | FUN_10082fbe0 */

void FUN_10082fbe0(void)

{
  undefined8 *unaff_x20;
  
  FUN_10082fa18(*unaff_x20);
  return;
}



/* Address: 0x10082fbe8 | FUN_10082fbe8 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010082fce0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10082fbe8(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  int *param_5)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_4;
  puVar2 = &DAT_100fe7448;
  FUN_1000f7830(&DAT_100fe7448,&DAT_100c7c428);
  *(undefined **)(unaff_x22 + 0x28) = puVar2;
  puVar2 = &DAT_100fe7450;
  FUN_100830f74(&DAT_100fe7450,&DAT_100fe7448,&DAT_100c7c428);
  *(undefined **)(unaff_x22 + 0x30) = puVar2;
  lVar3 = unaff_x22 + 0x10;
  FUN_10000cbb0(lVar3);
  _swift_bridgeObjectRetain(param_4);
  puVar2 = &DAT_100fe7458;
  FUN_1000f7830(&DAT_100fe7458,&DAT_100c7c430);
  puVar4 = &DAT_100fe7460;
  FUN_100134584(&DAT_100fe7460,&DAT_100fe7458,&DAT_100c7c430,
                &TargetProtocolConformanceDescriptor_100c7d0f8);
  Swift::AsyncMapSequence::_init(lVar3,puVar4,&DAT_100c7c420,0,puVar2,&DAT_100f055f8,puVar4);
  iVar1 = *param_5;
  plVar5 = (long *)(ulong)(uint)param_5[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x40) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10082fd44;
                    /* WARNING: Could not recover jumptable at 0x00010082fd40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_5))
            (plVar5,param_1,param_2,param_3 & 0xcfffffffffffffff,unaff_x22 + 0x10);
  return;
}



/* Address: 0x10082fd44 | FUN_10082fd44 */

void FUN_10082fd44(void)

{
  long lVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x40));
  FUN_1000fb4c4(lVar1 + 0x10,&DAT_100fe73e0,&DAT_100c7c110);
                    /* WARNING: Could not recover jumptable at 0x00010082fd9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x10082fda0 | FUN_10082fda0 */

void FUN_10082fda0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *param_2;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = uVar1;
  _swift_task_switch(FUN_10082fdbc,0,0);
  return;
}



/* Address: 0x10082fdbc | FUN_10082fdbc */

void FUN_10082fdbc(void)

{
  code *UNRECOVERED_JUMPTABLE;
  long unaff_x22;
  
  **(undefined8 **)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x18);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  _swift_bridgeObjectRetain();
                    /* WARNING: Could not recover jumptable at 0x00010082fdfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x10082fe00 | FUN_10082fe00 */

void FUN_10082fe00(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  long param_5,ulong param_6,ulong param_7,undefined8 *param_8,int *param_9,
                  undefined8 param_10,undefined8 param_11)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  if (param_6 == param_7 >> 1) {
    uVar6 = *param_8;
    iVar1 = *param_9;
    plVar4 = (long *)(ulong)(uint)param_9[1];
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x90) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_1006e2490;
                    /* WARNING: Could not recover jumptable at 0x00010082feac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)param_9))
              (plVar4,param_1,param_2,param_3 & 0xcfffffffffffffff,uVar6);
    return;
  }
  if ((long)param_6 < (long)(param_7 >> 1)) {
    FUN_100076688(param_5 + param_6 * 0x28,unaff_x22 + 0x60);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x78);
    lVar2 = *(long *)(unaff_x22 + 0x80);
    FUN_100004640();
    *(undefined8 *)(unaff_x22 + 0x20) = param_11;
    *(undefined8 **)(unaff_x22 + 0x28) = param_8;
    *(undefined8 *)(unaff_x22 + 0x30) = param_4;
    *(long *)(unaff_x22 + 0x38) = param_5;
    *(ulong *)(unaff_x22 + 0x40) = param_6;
    *(ulong *)(unaff_x22 + 0x48) = param_7;
    *(int **)(unaff_x22 + 0x50) = param_9;
    *(undefined8 *)(unaff_x22 + 0x58) = param_10;
    piVar5 = *(int **)(lVar2 + 0x30);
    iVar1 = *piVar5;
    plVar4 = (long *)(ulong)(uint)piVar5[1];
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x88) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_10082ff80;
                    /* WARNING: Could not recover jumptable at 0x00010082ff78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar5))
              (param_1,param_2,param_3 & 0xcfffffffffffffff,&UNK_100c7c418,unaff_x22 + 0x10,param_11
               ,uVar6,lVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10082ff80);
  (*pcVar3)();
}



/* Address: 0x10082ff80 | FUN_10082ff80 */

void FUN_10082ff80(void)

{
  long lVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x88));
  FUN_100004594(lVar1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010082ffc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x10082ffcc | FUN_10082ffcc */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001008300fc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10082ffcc(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  int *param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  long unaff_x22;
  
  puVar2 = &DAT_100f05698;
  _swift_allocObject(&DAT_100f05698,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_7;
  *(undefined8 *)(unaff_x22 + 0x38) = param_4;
  puVar3 = &DAT_100fe7470;
  FUN_1000f7830(&DAT_100fe7470,&DAT_100c7c478);
  *(undefined **)(unaff_x22 + 0x28) = puVar3;
  puVar3 = &DAT_100fe7478;
  FUN_100830f74(&DAT_100fe7478,&DAT_100fe7470,&DAT_100c7c478);
  *(undefined **)(unaff_x22 + 0x30) = puVar3;
  lVar4 = unaff_x22 + 0x10;
  FUN_10000cbb0(lVar4);
  _swift_bridgeObjectRetain(param_4);
  _swift_bridgeObjectRetain(param_7);
  puVar3 = &DAT_100fe7480;
  FUN_1000f7830(&DAT_100fe7480,&DAT_100c7c480);
  puVar5 = &DAT_100fe7228;
  FUN_1000f7830(&DAT_100fe7228,&DAT_100c7bbd8);
  puVar6 = &DAT_100fe7488;
  FUN_100134584(&DAT_100fe7488,&DAT_100fe7480,&DAT_100c7c480,
                &TargetProtocolConformanceDescriptor_100c7d0f8);
  Swift::AsyncMapSequence::_init(lVar4,puVar6,&DAT_100c7c470,puVar2,puVar3,puVar5,puVar6);
  iVar1 = *param_5;
  plVar7 = (long *)(ulong)(uint)param_5[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x40) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_100830164;
                    /* WARNING: Could not recover jumptable at 0x000100830160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_5))
            (plVar7,param_1,param_2,param_3 & 0xcfffffffffffffff,unaff_x22 + 0x10);
  return;
}



/* Address: 0x100830164 | FUN_100830164 */

void FUN_100830164(void)

{
  long lVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x40));
  FUN_1000fb4c4(lVar1 + 0x10,&DAT_100fe7210,&DAT_100c7bbd0);
                    /* WARNING: Could not recover jumptable at 0x0001008301bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}


