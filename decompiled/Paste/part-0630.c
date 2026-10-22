/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1006b71d8 | FUN_1006b71d8 */

undefined * FUN_1006b71d8(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  Index after;
  Substring SVar7;
  Index after_00;
  Substring SVar8;
  undefined *puVar9;
  undefined *puVar10;
  Index IVar11;
  Substring SVar12;
  undefined *puVar13;
  undefined *puVar14;
  Index IVar15;
  undefined1 *puVar16;
  undefined *puVar18;
  Substring SVar19;
  undefined *puVar20;
  Substring SVar21;
  Substring SVar22;
  ulong uVar23;
  ulong uVar24;
  long unaff_x21;
  Range<Index> RVar25;
  ulong uVar26;
  Character CVar27;
  Character CVar28;
  String SVar29;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined *local_f0;
  undefined *puStack_e8;
  undefined *local_e0;
  undefined *puStack_d8;
  char *local_d0;
  undefined *puStack_c8;
  undefined *local_c0;
  undefined1 *local_b8;
  char *local_b0;
  undefined *puStack_a8;
  ulong local_a0;
  UnsafeMutablePointer UStack_98;
  char *local_90;
  void *pvStack_88;
  char *local_80;
  void *pvStack_78;
  _StringGuts _Var17;
  String SVar30;
  
  puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1006c25a4();
  puVar6 = puVar5;
  FUN_1006b5aec();
  _swift_allocObject();
  *(undefined **)(puVar6 + 0x10) = puVar5;
  _swift_bridgeObjectRetain(param_2);
  thunk_FUN_1006f78f0(&local_b0,param_1,param_2,0x26,0xe100000000000000);
  _swift_bridgeObjectRelease(param_2);
  pvStack_78 = pvStack_88;
  local_80 = local_90;
  uVar23 = local_a0 >> 0xe;
  uVar26 = (ulong)UStack_98.unknown >> 0xe;
  after.cmsgPointer.unknown = (UnsafeMutablePointer)(UnsafeMutablePointer)UStack_98.unknown;
  RVar25.unknown = UStack_98.unknown;
  if (uVar26 < uVar23) {
joined_r0x0001006b72a8:
    do {
      if ((ulong)after.cmsgPointer.unknown >> 0xe < uVar23) {
        SVar30.bridgeObject = puStack_a8;
        SVar30.str = local_b0;
        CVar27 = Swift::String::get_subscript(after,SVar30);
        CVar28.bridgeObject = pvStack_78;
        CVar28.str = local_80;
        _Var17.unknown = CVar27.bridgeObject;
        if (CVar27 == CVar28) {
          _swift_bridgeObjectRelease(_Var17.unknown);
        }
        else {
          bVar3 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)CVar27.str,_Var17,
                             (_StringComparisonResult)(__int8)local_80);
          _swift_bridgeObjectRelease(_Var17.unknown);
          if (!bVar3) {
            SVar32.bridgeObject = puStack_a8;
            SVar32.str = local_b0;
            after = Swift::String::index(after,SVar32);
            goto joined_r0x0001006b72a8;
          }
        }
      }
      if ((ulong)after.cmsgPointer.unknown >> 0xe < uVar26) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1006b7904);
        (*pcVar2)();
      }
      SVar33.bridgeObject = local_b0;
      SVar33.str = (char *)after.cmsgPointer.unknown;
      IVar15.cmsgPointer.unknown = after.cmsgPointer.unknown;
      puVar5 = puStack_a8;
      SVar7 = Swift::String::get_subscript(RVar25,SVar33);
      uVar26 = (ulong)after.cmsgPointer.unknown >> 0xe;
      if (uVar26 < uVar23) {
        do {
          SVar35.bridgeObject = puStack_a8;
          SVar35.str = local_b0;
          CVar28 = Swift::String::get_subscript(after,SVar35);
          CVar27.bridgeObject = pvStack_78;
          CVar27.str = local_80;
          _Var17.unknown = CVar28.bridgeObject;
          if (CVar28 == CVar27) {
            _swift_bridgeObjectRelease(_Var17.unknown);
          }
          else {
            bVar3 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)CVar28.str,_Var17,
                               (_StringComparisonResult)(__int8)local_80);
            _swift_bridgeObjectRelease(_Var17.unknown);
            if (!bVar3) {
              bVar3 = true;
              goto LAB_1006b73ec;
            }
          }
          SVar34.bridgeObject = puStack_a8;
          SVar34.str = local_b0;
          after = Swift::String::index(after,SVar34);
          uVar26 = (ulong)after.cmsgPointer.unknown >> 0xe;
        } while (uVar26 < uVar23);
        bVar3 = false;
      }
      else {
        bVar3 = false;
      }
LAB_1006b73ec:
      uVar24 = (ulong)SVar7.unknown >> 0xe;
      after_00.cmsgPointer.unknown = (UnsafeMutablePointer)(UnsafeMutablePointer)SVar7;
      while (uVar24 != (ulong)IVar15.cmsgPointer.unknown >> 0xe) {
        CVar28 = Swift::Substring::get_subscript(after_00,SVar7);
        _Var17.unknown = CVar28.bridgeObject;
        if ((CVar28.str == (undefined *)0x3d) && (_Var17.unknown == (undefined *)0xe100000000000000)
           ) {
          _swift_bridgeObjectRelease(0xe100000000000000);
LAB_1006b74b4:
          if (uVar24 < (ulong)SVar7.unknown >> 0xe) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1006b7908);
            (*pcVar2)();
          }
          IVar11.cmsgPointer.unknown = after_00.cmsgPointer.unknown;
          SVar19 = SVar7;
          SVar21.unknown = (undefined *)IVar15.cmsgPointer.unknown;
          SVar8 = Swift::Substring::get_subscript
                            (SVar7.unknown,(Substring)after_00.cmsgPointer.unknown);
          local_d0 = (char *)SVar8;
          puStack_c8 = (undefined *)IVar11.cmsgPointer.unknown;
          local_c0 = SVar19.unknown;
          local_b8 = SVar21.unknown;
          FUN_1006b7940();
          puVar18 = PTR___type_metadata_for_Swift_Substring_100eaca98;
          puVar9 = PTR___type_metadata_for_Swift_Substring_100eaca98;
          FUN_10024279c(PTR___type_metadata_for_Swift_Substring_100eaca98,SVar8.unknown);
          puVar10 = puVar9;
          FUN_100a3516c();
          _swift_bridgeObjectRelease(SVar21.unknown);
          _swift_bridgeObjectRelease(puVar9);
          IVar11 = Swift::Substring::index(after_00,SVar7);
          if ((ulong)IVar15.cmsgPointer.unknown >> 0xe < (ulong)IVar11.cmsgPointer.unknown >> 0xe) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1006b790c);
            (*pcVar2)();
          }
          SVar19.unknown = (undefined *)IVar15.cmsgPointer.unknown;
          SVar21 = SVar7;
          SVar22.unknown = (undefined *)IVar15.cmsgPointer.unknown;
          SVar12 = Swift::Substring::get_subscript
                             ((Range<Index>)IVar11.cmsgPointer.unknown,
                              (Substring)IVar15.cmsgPointer.unknown);
          local_100 = 0x2b;
          local_f8 = 0xe100000000000000;
          local_110 = 0x20;
          uStack_108 = 0xe100000000000000;
          local_f0 = SVar12.unknown;
          puStack_e8 = SVar19.unknown;
          local_e0 = SVar21.unknown;
          puStack_d8 = SVar22.unknown;
          FUN_1006b7980();
          puVar13 = SVar12.unknown;
          FUN_1006b79c0();
          puVar9 = PTR___type_metadata_for_Swift_Substring_100eaca98;
          (extension__StringProcessing)::Swift::RangeReplaceableCollection::_replacing
                    (&local_d0,&local_100,&local_110,0x7fffffffffffffff,
                     PTR___type_metadata_for_Swift_Substring_100eaca98,
                     PTR___type_metadata_for_Swift_String_100eac208,
                     PTR___type_metadata_for_Swift_String_100eac208,SVar12.unknown,puVar13,puVar13,
                     PTR___protocol_witness_table_for_Swift_Character___Swift_Equatable_in_Swift_100eabf28
                    );
          _swift_bridgeObjectRelease(SVar22.unknown);
          puVar16 = local_b8;
          puVar14 = local_c0;
          puVar13 = puStack_c8;
          pcVar1 = local_d0;
          if (puVar18 == (undefined *)0x0) {
            _swift_bridgeObjectRelease(local_b8);
            SVar29.str = Swift::Substring::get_subscript
                                   (SVar7.unknown,(Substring)after_00.cmsgPointer.unknown);
            _swift_bridgeObjectRelease(puVar5);
            SVar29.bridgeObject = (void *)after_00.cmsgPointer.unknown;
            SVar30 = Swift::String::__fromSubstring(SVar29);
            _swift_bridgeObjectRelease();
            FUN_1006b7a00();
            _swift_allocError(&DAT_100ef7420,IVar15.cmsgPointer.unknown,0,0);
            *(undefined1 *)IVar15.cmsgPointer.unknown = 2;
            *(String *)((long)IVar15.cmsgPointer.unknown + 8) = SVar30;
            _swift_willThrow();
          }
          else {
            _swift_bridgeObjectRelease(puVar5);
            puVar5 = puVar10;
            FUN_1006b6334(puVar10,puVar18);
            if (puVar5 == (undefined *)0x0) {
              _swift_bridgeObjectRelease();
              FUN_1006b7a00();
              _swift_allocError(&DAT_100ef7420,puVar16,0,0);
              *puVar16 = 3;
              *(undefined **)(puVar16 + 8) = puVar10;
              *(undefined **)(puVar16 + 0x10) = puVar18;
              _swift_willThrow();
              _swift_bridgeObjectRelease(puStack_a8);
              _swift_release(puVar6);
              FUN_1006b790c(&local_80);
              return puVar6;
            }
            local_d0 = pcVar1;
            puStack_c8 = puVar13;
            local_c0 = puVar14;
            local_b8 = puVar16;
            _swift_bridgeObjectRetain(puVar16);
            FUN_10024279c(puVar9,SVar8.unknown);
            puVar14 = puVar9;
            puVar20 = PTR___type_metadata_for_Swift_Substring_100eaca98;
            FUN_100a3516c();
            _swift_bridgeObjectRelease(puVar16);
            _swift_bridgeObjectRelease(puVar9);
            if (puVar20 != (undefined *)0x0) {
              _swift_bridgeObjectRelease(puVar16);
              FUN_1006b68c4(puVar5 + 0x20,0,*(long *)(puVar5 + 0x10) << 1 | 1,puVar14,puVar20,
                            puVar10,puVar18,puVar6,0,1);
              if (unaff_x21 != 0) {
                _swift_bridgeObjectRelease(puStack_a8);
                FUN_1006b790c(&local_80);
                _swift_bridgeObjectRelease(puVar18);
                _swift_bridgeObjectRelease(puVar20);
                _swift_bridgeObjectRelease(puVar5);
                _swift_release(puVar6);
                return puVar6;
              }
              _swift_bridgeObjectRelease(puVar18);
              _swift_bridgeObjectRelease(puVar20);
              break;
            }
            _swift_bridgeObjectRelease(puVar18);
            _swift_bridgeObjectRelease(puVar5);
            SVar31.bridgeObject = puVar13;
            SVar31.str = pcVar1;
            SVar30 = Swift::String::__fromSubstring(SVar31);
            _swift_bridgeObjectRelease();
            FUN_1006b7a00();
            _swift_allocError(&DAT_100ef7420,puVar16,0,0);
            *puVar16 = 2;
            *(String *)(puVar16 + 8) = SVar30;
            _swift_willThrow();
          }
          _swift_bridgeObjectRelease(puStack_a8);
          _swift_release(puVar6);
          FUN_1006b790c(&local_80);
          return puVar6;
        }
        bVar4 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)CVar28.str,_Var17,(_StringComparisonResult)0x3d);
        _swift_bridgeObjectRelease(_Var17.unknown);
        if (bVar4) goto LAB_1006b74b4;
        after_00 = Swift::Substring::index(after_00,SVar7);
        uVar24 = (ulong)after_00.cmsgPointer.unknown >> 0xe;
      }
      _swift_bridgeObjectRelease(puVar5);
      RVar25.unknown = (undefined *)after.cmsgPointer.unknown;
    } while (bVar3);
  }
  _swift_bridgeObjectRelease(puStack_a8);
  FUN_1006b790c(&local_80);
  return puVar6;
}



/* Address: 0x1006b790c | FUN_1006b790c */

undefined8 FUN_1006b790c(undefined8 param_1)

{
  (**(code **)(*(long *)(PTR___type_metadata_for_Swift_Character_100eabf18 + -8) + 8))();
  return param_1;
}



/* Address: 0x1006b7940 | FUN_1006b7940 */

void FUN_1006b7940(void)

{
  undefined *puVar1;
  
  if (DAT_100fdc388 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift__Swift__Substring_>Swift__StringProtocol_100eacac0;
  _swift_getWitnessTable
            (PTR_Swift__Swift__Substring_>Swift__StringProtocol_100eacac0,
             PTR___type_metadata_for_Swift_Substring_100eaca98);
  DAT_100fdc388 = puVar1;
  return;
}



/* Address: 0x1006b7980 | FUN_1006b7980 */

void FUN_1006b7980(void)

{
  undefined *puVar1;
  
  if (DAT_100fdc390 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift__Swift__Substring_>Swift__RangeReplaceableCollection_100eacab8;
  _swift_getWitnessTable
            (PTR_Swift__Swift__Substring_>Swift__RangeReplaceableCollection_100eacab8,
             PTR___type_metadata_for_Swift_Substring_100eaca98);
  DAT_100fdc390 = puVar1;
  return;
}



/* Address: 0x1006b79c0 | FUN_1006b79c0 */

void FUN_1006b79c0(void)

{
  undefined *puVar1;
  
  if (DAT_100fdc398 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift__Swift__String_>Swift__Collection_100eac248;
  _swift_getWitnessTable
            (PTR_Swift__Swift__String_>Swift__Collection_100eac248,
             PTR___type_metadata_for_Swift_String_100eac208);
  DAT_100fdc398 = puVar1;
  return;
}



/* Address: 0x1006b7a00 | FUN_1006b7a00 */

void FUN_1006b7a00(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdc3a0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c701f8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c701f8,&DAT_100ef7420);
  DAT_100fdc3a0 = pTVar1;
  return;
}



/* Address: 0x1006b7a40 | FUN_1006b7a40 */

void FUN_1006b7a40(void)

{
  undefined8 in_x3;
  char in_w4;
  
  if (in_w4 != '\0') {
    return;
  }
  _swift_bridgeObjectRelease(in_x3);
  return;
}



/* Address: 0x1006b7a54 | FUN_1006b7a54 */

void FUN_1006b7a54(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fdc3b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fdc3a8;
  FUN_1000f8b08(&DAT_100fdc3a8,&DAT_100c71a80);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100eac518;
  _swift_getWitnessTable
            (PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100eac518,puVar1);
  DAT_100fdc3b0 = puVar2;
  return;
}



/* Address: 0x1006b7aa4 | FUN_1006b7aa4 */

void FUN_1006b7aa4(void)

{
  undefined *puVar1;
  
  if (DAT_100fdc3b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift__Swift__String_>Swift__StringProtocol_100eac258;
  _swift_getWitnessTable
            (PTR_Swift__Swift__String_>Swift__StringProtocol_100eac258,
             PTR___type_metadata_for_Swift_String_100eac208);
  DAT_100fdc3b8 = puVar1;
  return;
}



/* Address: 0x1006b7ae4 | FUN_1006b7ae4 */

undefined1  [16] FUN_1006b7ae4(void)

{
  return ZEXT816(0x100ef75e8);
}



/* Address: 0x1006b7af4 | FUN_1006b7af4 */

void FUN_1006b7af4(void)

{
  undefined8 in_x3;
  char in_w4;
  
  if (in_w4 != '\0') {
    return;
  }
  _swift_bridgeObjectRetain(in_x3);
  return;
}



/* Address: 0x1006b7b08 | FUN_1006b7b08 */

void FUN_1006b7b08(undefined8 *param_1)

{
  FUN_1006b7a40(*param_1,param_1[1],param_1[2],param_1[3],*(undefined1 *)(param_1 + 4));
  return;
}



/* Address: 0x1006b7b1c | FUN_1006b7b1c */

undefined8 * FUN_1006b7b1c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = *(undefined1 *)(param_2 + 4);
  FUN_1006b7af4(uVar1,uVar3,uVar2,uVar4,uVar5);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  *(undefined1 *)(param_1 + 4) = uVar5;
  return param_1;
}



/* Address: 0x1006b7b7c | FUN_1006b7b7c */

undefined8 * FUN_1006b7b7c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  
  uVar1 = *param_2;
  uVar5 = param_2[1];
  uVar2 = param_2[2];
  uVar6 = param_2[3];
  uVar9 = *(undefined1 *)(param_2 + 4);
  FUN_1006b7af4(uVar1,uVar5,uVar2,uVar6,uVar9);
  uVar3 = *param_1;
  uVar7 = param_1[1];
  uVar4 = param_1[2];
  uVar8 = param_1[3];
  *param_1 = uVar1;
  param_1[1] = uVar5;
  param_1[2] = uVar2;
  param_1[3] = uVar6;
  uVar10 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = uVar9;
  FUN_1006b7a40(uVar3,uVar7,uVar4,uVar8,uVar10);
  return param_1;
}



/* Address: 0x1006b7bec | FUN_1006b7bec */

void FUN_1006b7bec(undefined8 *param_1,undefined8 *param_2)

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



/* Address: 0x1006b7c00 | FUN_1006b7c00 */

undefined8 * FUN_1006b7c00(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar3 = *(undefined1 *)(param_2 + 4);
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar6 = param_1[3];
  uVar7 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[3] = uVar9;
  param_1[2] = uVar8;
  uVar4 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = uVar3;
  FUN_1006b7a40(uVar5,uVar1,uVar2,uVar6,uVar4);
  return param_1;
}



/* Address: 0x1006b7c48 | FUN_1006b7c48 */

uint FUN_1006b7c48(int *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1 + 2;
  if (*(byte *)(param_1 + 8) < 2) {
    uVar1 = (uint)*(byte *)(param_1 + 8);
  }
  return uVar1;
}



/* Address: 0x1006b7c60 | FUN_1006b7c60 */

void FUN_1006b7c60(ulong *param_1,uint param_2)

{
  if (1 < param_2) {
    *param_1 = (ulong)(param_2 - 2);
    param_1[1] = 0;
    param_2 = 2;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  *(char *)(param_1 + 4) = (char)param_2;
  return;
}



/* Address: 0x1006b7c7c | FUN_1006b7c7c */

undefined1  [16] FUN_1006b7c7c(void)

{
  return ZEXT816(0x100ef7678);
}



/* Address: 0x1006b7c8c | FUN_1006b7c8c */

undefined1  [16] FUN_1006b7c8c(void)

{
  return ZEXT816(0x100ef76f0);
}



/* Address: 0x1006b7c9c | FUN_1006b7c9c */

String FUN_1006b7c9c(void)

{
  String SVar1;
  
  SVar1 = Swift::CustomStringConvertible::get_description();
  return SVar1;
}



/* Address: 0x1006b7cc8 | thunk_FUN_1000d7030 */

void thunk_FUN_1000d7030(void)

{
  FUN_1000d7030();
  return;
}



/* Address: 0x1006b7ccc | thunk_FUN_1000df608 */

void thunk_FUN_1000df608(void)

{
  thunk_FUN_1000df608();
  return;
}



/* Address: 0x1006b7cd0 | thunk_FUN_1006b5b5c */

void thunk_FUN_1006b5b5c(void)

{
  thunk_FUN_1006b5b5c();
  return;
}



/* Address: 0x1006b7cd4 | FUN_1006b7cd4 */

void FUN_1006b7cd4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = 0;
  FUN_1006b7d9c();
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar3 + 0x14));
  puVar2 = (undefined8 *)(param_1 + *(int *)(lVar3 + 0x20));
  lVar4 = 0;
  FUN_100a0e718();
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  puVar2[4] = 0;
  (**(code **)(*(long *)(lVar4 + -8) + 0x20))(param_1,param_2,lVar4);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(param_1 + *(int *)(lVar3 + 0x18)) = param_5;
  *(undefined1 *)(param_1 + *(int *)(lVar3 + 0x1c)) = param_6;
  FUN_10069ec50(param_7,puVar2);
  FUN_100002c1c();
  *(undefined8 *)(param_1 + *(int *)(lVar3 + 0x24)) = param_7;
  return;
}



/* Address: 0x1006b7d9c | FUN_1006b7d9c */

void FUN_1006b7d9c(undefined8 param_1)

{
  if (DAT_100fdc420 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetStructDescriptor_100cbb5dc);
  return;
}



/* Address: 0x1006b7dd4 | FUN_1006b7dd4 */

void FUN_1006b7dd4(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100a0e718();
                    /* WARNING: Could not recover jumptable at 0x0001006b7e08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1);
  return;
}



/* Address: 0x1006b7e0c | FUN_1006b7e0c */

void FUN_1006b7e0c(void)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100a0e718();
                    /* WARNING: Could not recover jumptable at 0x0001006b7e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))();
  return;
}



/* Address: 0x1006b7e44 | FUN_1006b7e44 */

undefined1  [16] FUN_1006b7e44(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long lVar3;
  long unaff_x20;
  
  lVar3 = 0;
  FUN_1006b7d9c();
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + *(int *)(lVar3 + 0x14));
  auVar2 = *pauVar1;
  _swift_bridgeObjectRetain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Address: 0x1006b7e80 | FUN_1006b7e80 */

void FUN_1006b7e80(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = 0;
  FUN_1006b7d9c();
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(lVar2 + 0x14));
  _swift_bridgeObjectRelease(puVar1[1]);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  return;
}



/* Address: 0x1006b7ec4 | FUN_1006b7ec4 */

undefined1  [16] FUN_1006b7ec4(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = 0;
  FUN_1006b7d9c();
  auVar2._8_8_ = unaff_x20 + *(int *)(lVar1 + 0x14);
  auVar2._0_8_ = FUN_100004520;
  return auVar2;
}



/* Address: 0x1006b7eec | FUN_1006b7eec */

undefined8 FUN_1006b7eec(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_1006b7d9c();
  return *(undefined8 *)(unaff_x20 + *(int *)(lVar1 + 0x18));
}



/* Address: 0x1006b7f0c | FUN_1006b7f0c */

void FUN_1006b7f0c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_1006b7d9c();
  *(undefined8 *)(unaff_x20 + *(int *)(lVar1 + 0x18)) = param_1;
  return;
}



/* Address: 0x1006b7f38 | FUN_1006b7f38 */

undefined1  [16] FUN_1006b7f38(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = 0;
  FUN_1006b7d9c();
  auVar2._8_8_ = unaff_x20 + *(int *)(lVar1 + 0x18);
  auVar2._0_8_ = FUN_100004520;
  return auVar2;
}



/* Address: 0x1006b7f60 | FUN_1006b7f60 */

undefined1 FUN_1006b7f60(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_1006b7d9c();
  return *(undefined1 *)(unaff_x20 + *(int *)(lVar1 + 0x1c));
}



/* Address: 0x1006b7f80 | FUN_1006b7f80 */

void FUN_1006b7f80(undefined1 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_1006b7d9c();
  *(undefined1 *)(unaff_x20 + *(int *)(lVar1 + 0x1c)) = param_1;
  return;
}



/* Address: 0x1006b7fac | FUN_1006b7fac */

undefined1  [16] FUN_1006b7fac(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = 0;
  FUN_1006b7d9c();
  auVar2._8_8_ = unaff_x20 + *(int *)(lVar1 + 0x1c);
  auVar2._0_8_ = FUN_100004520;
  return auVar2;
}



/* Address: 0x1006b7fd4 | FUN_1006b7fd4 */

void FUN_1006b7fd4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_1006b7d9c();
  FUN_1000f8cac(unaff_x20 + *(int *)(lVar1 + 0x20),param_1,&DAT_100fdbb50,&DAT_100c6f310);
  return;
}



/* Address: 0x1006b8018 | FUN_1006b8018 */

void FUN_1006b8018(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_1006b7d9c();
  FUN_10069ec50(param_1,unaff_x20 + *(int *)(lVar1 + 0x20));
  return;
}



/* Address: 0x1006b8048 | FUN_1006b8048 */

undefined1  [16] FUN_1006b8048(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = 0;
  FUN_1006b7d9c();
  auVar2._8_8_ = unaff_x20 + *(int *)(lVar1 + 0x20);
  auVar2._0_8_ = FUN_100004520;
  return auVar2;
}



/* Address: 0x1006b8070 | FUN_1006b8070 */

void FUN_1006b8070(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_1006b7d9c();
  _swift_retain(*(undefined8 *)(unaff_x20 + *(int *)(lVar1 + 0x24)));
  return;
}



/* Address: 0x1006b8090 | FUN_1006b8090 */

void FUN_1006b8090(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = 0;
  FUN_1006b7d9c();
  iVar1 = *(int *)(lVar2 + 0x24);
  _swift_release(*(undefined8 *)(unaff_x20 + iVar1));
  *(undefined8 *)(unaff_x20 + iVar1) = param_1;
  return;
}



/* Address: 0x1006b80cc | FUN_1006b80cc */

undefined1  [16] FUN_1006b80cc(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = 0;
  FUN_1006b7d9c();
  auVar2._8_8_ = unaff_x20 + *(int *)(lVar1 + 0x24);
  auVar2._0_8_ = FUN_100004520;
  return auVar2;
}



/* Address: 0x1006b80f4 | FUN_1006b80f4 */

void FUN_1006b80f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = 0;
  FUN_1006b7d9c();
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar3 + 0x14));
  puVar2 = (undefined8 *)(param_1 + *(int *)(lVar3 + 0x20));
  lVar4 = 0;
  FUN_100a0e718();
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  puVar2[4] = 0;
  (**(code **)(*(long *)(lVar4 + -8) + 0x20))(param_1,param_2,lVar4);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(param_1 + *(int *)(lVar3 + 0x18)) = 0x100;
  *(undefined1 *)(param_1 + *(int *)(lVar3 + 0x1c)) = param_5;
  FUN_10069ec50(param_6,puVar2);
  *(undefined8 *)(param_1 + *(int *)(lVar3 + 0x24)) = param_7;
  return;
}



/* Address: 0x1006b81bc | FUN_1006b81bc */

void FUN_1006b81bc(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,char param_6,byte param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  long extraout_x8;
  long unaff_x20;
  code *pcVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar2 = &DAT_100fdc3c0;
  local_98 = param_5;
  FUN_1000f7830(&DAT_100fdc3c0,&DAT_100c70478);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_a0 + -extraout_x8;
  FUN_1000f8cac(param_2,puVar8,&DAT_100fdc3c0,&DAT_100c70478);
  lVar3 = 0;
  FUN_100a0e718();
  lVar9 = *(long *)(lVar3 + -8);
  pcVar6 = *(code **)(lVar9 + 0x30);
  puVar4 = puVar8;
  (*pcVar6)(puVar8,1,lVar3);
  if ((int)puVar4 == 1) {
    (**(code **)(lVar9 + 0x10))(param_1);
    puVar4 = puVar8;
    (*pcVar6)(puVar8,1,lVar3);
    if ((int)puVar4 != 1) {
      FUN_1006b83b8(puVar8);
    }
  }
  else {
    (**(code **)(lVar9 + 0x20))(param_1,puVar8,lVar3);
  }
  lVar3 = param_4;
  if (param_4 == 0) {
    lVar3 = 0;
    FUN_1006b7d9c();
    puVar5 = (undefined8 *)(unaff_x20 + *(int *)(lVar3 + 0x14));
    param_3 = *puVar5;
    lVar3 = puVar5[1];
    _swift_bridgeObjectRetain(lVar3);
  }
  uVar7 = local_98;
  if (param_6 == '\x01') {
    lVar9 = 0;
    FUN_1006b7d9c();
    uVar7 = *(undefined8 *)(unaff_x20 + *(int *)(lVar9 + 0x18));
  }
  if (param_7 == 2) {
    lVar9 = 0;
    FUN_1006b7d9c();
    param_7 = *(byte *)(unaff_x20 + *(int *)(lVar9 + 0x1c));
  }
  lVar9 = 0;
  FUN_1006b7d9c();
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  puVar5 = (undefined8 *)(param_1 + *(int *)(lVar9 + 0x14));
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar9 + 0x20));
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  *puVar5 = param_3;
  puVar5[1] = lVar3;
  *(undefined8 *)(param_1 + *(int *)(lVar9 + 0x18)) = uVar7;
  *(byte *)(param_1 + *(int *)(lVar9 + 0x1c)) = param_7 & 1;
  _swift_bridgeObjectRetain(param_4);
  puVar5 = &local_90;
  FUN_10069ec50(puVar5,puVar1);
  FUN_100002c1c();
  *(undefined8 **)(param_1 + *(int *)(lVar9 + 0x24)) = puVar5;
  return;
}



/* Address: 0x1006b83b8 | FUN_1006b83b8 */

undefined8 FUN_1006b83b8(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fdc3c0;
  FUN_1000f7830(&DAT_100fdc3c0,&DAT_100c70478);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x1006b8400 | FUN_1006b8400 */

long * FUN_1006b8400(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar4 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar4 >> 0x11 & 1) == 0) {
    lVar5 = 0;
    FUN_100a0e718();
    (**(code **)(*(long *)(lVar5 + -8) + 0x10))(param_1,param_2,lVar5);
    iVar3 = *(int *)(param_3 + 0x18);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    uVar6 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar6;
    *(undefined8 *)((long)param_1 + (long)iVar3) = *(undefined8 *)((long)param_2 + (long)iVar3);
    iVar3 = *(int *)(param_3 + 0x20);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar3);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar3);
    lVar5 = puVar2[3];
    _swift_bridgeObjectRetain();
    if (lVar5 == 0) {
      uVar6 = *puVar2;
      uVar9 = puVar2[3];
      uVar8 = puVar2[2];
      puVar1[1] = puVar2[1];
      *puVar1 = uVar6;
      puVar1[3] = uVar9;
      puVar1[2] = uVar8;
      puVar1[4] = puVar2[4];
    }
    else {
      uVar6 = puVar2[4];
      puVar1[3] = lVar5;
      puVar1[4] = uVar6;
      (*(code *)**(undefined8 **)(lVar5 + -8))(puVar1,puVar2,lVar5);
    }
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  }
  else {
    lVar5 = *param_2;
    *param_1 = lVar5;
    uVar7 = (ulong)uVar4 & 0xff;
    param_1 = (long *)(lVar5 + (uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff)));
  }
  _swift_retain();
  return param_1;
}



/* Address: 0x1006b8500 | FUN_1006b8500 */

void FUN_1006b8500(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100a0e718();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x14) + 8));
  if (*(long *)(param_1 + *(int *)(param_2 + 0x20) + 0x18) != 0) {
    FUN_100004594();
  }
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x24)));
  return;
}



/* Address: 0x1006b8568 | FUN_1006b8568 */

long FUN_1006b8568(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar4 = 0;
  FUN_100a0e718();
  (**(code **)(*(long *)(lVar4 + -8) + 0x10))(param_1,param_2,lVar4);
  iVar3 = *(int *)(param_3 + 0x18);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  uVar5 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar5;
  *(undefined8 *)(param_1 + iVar3) = *(undefined8 *)(param_2 + iVar3);
  iVar3 = *(int *)(param_3 + 0x20);
  *(undefined1 *)(param_1 + *(int *)(param_3 + 0x1c)) =
       *(undefined1 *)(param_2 + *(int *)(param_3 + 0x1c));
  puVar1 = (undefined8 *)(param_1 + iVar3);
  puVar2 = (undefined8 *)(param_2 + iVar3);
  lVar4 = puVar2[3];
  _swift_bridgeObjectRetain();
  if (lVar4 == 0) {
    uVar5 = *puVar2;
    uVar7 = puVar2[3];
    uVar6 = puVar2[2];
    puVar1[1] = puVar2[1];
    *puVar1 = uVar5;
    puVar1[3] = uVar7;
    puVar1[2] = uVar6;
    puVar1[4] = puVar2[4];
  }
  else {
    uVar5 = puVar2[4];
    puVar1[3] = lVar4;
    puVar1[4] = uVar5;
    (*(code *)**(undefined8 **)(lVar4 + -8))(puVar1,puVar2,lVar4);
  }
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x24)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x24));
  _swift_retain();
  return param_1;
}



/* Address: 0x1006b8640 | FUN_1006b8640 */

long FUN_1006b8640(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar3 = 0;
  FUN_100a0e718();
  (**(code **)(*(long *)(lVar3 + -8) + 0x18))(param_1,param_2,lVar3);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  *puVar1 = *puVar2;
  uVar4 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x18)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x18));
  *(undefined1 *)(param_1 + *(int *)(param_3 + 0x1c)) =
       *(undefined1 *)(param_2 + *(int *)(param_3 + 0x1c));
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x20));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x20));
  lVar3 = puVar2[3];
  if (puVar1[3] == 0) {
    if (lVar3 == 0) {
      uVar5 = puVar2[1];
      uVar4 = *puVar2;
      uVar7 = puVar2[3];
      uVar6 = puVar2[2];
      puVar1[4] = puVar2[4];
      puVar1[1] = uVar5;
      *puVar1 = uVar4;
      puVar1[3] = uVar7;
      puVar1[2] = uVar6;
    }
    else {
      puVar1[3] = lVar3;
      puVar1[4] = puVar2[4];
      (*(code *)**(undefined8 **)(lVar3 + -8))(puVar1,puVar2);
    }
  }
  else if (lVar3 == 0) {
    FUN_100004594();
    uVar5 = puVar2[1];
    uVar4 = *puVar2;
    uVar7 = puVar2[3];
    uVar6 = puVar2[2];
    puVar1[4] = puVar2[4];
    puVar1[1] = uVar5;
    *puVar1 = uVar4;
    puVar1[3] = uVar7;
    puVar1[2] = uVar6;
  }
  else {
    FUN_10008820c(puVar1,puVar2);
  }
  lVar3 = (long)*(int *)(param_3 + 0x24);
  uVar4 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = *(undefined8 *)(param_2 + lVar3);
  _swift_retain();
  _swift_release(uVar4);
  return param_1;
}



/* Address: 0x1006b8770 | FUN_1006b8770 */

long FUN_1006b8770(long param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar4 = 0;
  FUN_100a0e718();
  (**(code **)(*(long *)(lVar4 + -8) + 0x20))(param_1,param_2,lVar4);
  iVar1 = *(int *)(param_3 + 0x18);
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  uVar5 = *puVar2;
  puVar3 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar5;
  *(undefined8 *)(param_1 + iVar1) = *(undefined8 *)(param_2 + iVar1);
  iVar1 = *(int *)(param_3 + 0x20);
  *(undefined1 *)(param_1 + *(int *)(param_3 + 0x1c)) =
       *(undefined1 *)(param_2 + *(int *)(param_3 + 0x1c));
  puVar2 = (undefined8 *)(param_1 + iVar1);
  puVar3 = (undefined8 *)(param_2 + iVar1);
  uVar5 = *puVar3;
  uVar7 = puVar3[3];
  uVar6 = puVar3[2];
  puVar2[1] = puVar3[1];
  *puVar2 = uVar5;
  puVar2[3] = uVar7;
  puVar2[2] = uVar6;
  puVar2[4] = puVar3[4];
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x24)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x24));
  return param_1;
}



/* Address: 0x1006b8804 | FUN_1006b8804 */

long FUN_1006b8804(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar4 = 0;
  FUN_100a0e718();
  (**(code **)(*(long *)(lVar4 + -8) + 0x28))(param_1,param_2,lVar4);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  uVar6 = puVar2[1];
  uVar5 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar6;
  _swift_bridgeObjectRelease(uVar5);
  iVar3 = *(int *)(param_3 + 0x1c);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x18)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x18));
  *(undefined1 *)(param_1 + iVar3) = *(undefined1 *)(param_2 + iVar3);
  iVar3 = *(int *)(param_3 + 0x20);
  puVar1 = (undefined8 *)(param_1 + iVar3);
  if (puVar1[3] != 0) {
    FUN_100004594(puVar1);
  }
  puVar2 = (undefined8 *)(param_2 + iVar3);
  uVar6 = *puVar2;
  uVar7 = puVar2[3];
  uVar5 = puVar2[2];
  puVar1[1] = puVar2[1];
  *puVar1 = uVar6;
  puVar1[3] = uVar7;
  puVar1[2] = uVar5;
  puVar1[4] = puVar2[4];
  lVar4 = (long)*(int *)(param_3 + 0x24);
  uVar6 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = *(undefined8 *)(param_2 + lVar4);
  _swift_release(uVar6);
  return param_1;
}



/* Address: 0x1006b88cc | FUN_1006b88cc */

void FUN_1006b88cc(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1006b88d8 | FUN_1006b88d8 */

ulong FUN_1006b88d8(ulong param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = 0;
  FUN_100a0e718();
  if ((int)param_2 == *(int *)(*(long *)(lVar2 + -8) + 0x54)) {
                    /* WARNING: Could not recover jumptable at 0x0001006b8928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar2 + -8) + 0x30))(param_1,param_2,lVar2);
    return param_1;
  }
  uVar3 = *(ulong *)(param_1 + (long)*(int *)(param_3 + 0x14) + 8);
  if (0xfffffffe < uVar3) {
    uVar3 = 0xffffffff;
  }
  uVar1 = (int)uVar3 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (ulong)(uVar1 + 1);
}



/* Address: 0x1006b8964 | FUN_1006b8964 */

void FUN_1006b8964(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1006b8970 | FUN_1006b8970 */

void FUN_1006b8970(long param_1,ulong param_2,int param_3,long param_4)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100a0e718();
  if (param_3 == *(int *)(*(long *)(lVar1 + -8) + 0x54)) {
                    /* WARNING: Could not recover jumptable at 0x0001006b89c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,param_2,param_2,lVar1);
    return;
  }
  *(ulong *)(param_1 + *(int *)(param_4 + 0x14) + 8) = param_2 & 0xffffffff;
  return;
}



/* Address: 0x1006b89ec | FUN_1006b89ec */

void FUN_1006b89ec(long param_1,ulong param_2)

{
  long lVar1;
  long local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  FUN_100a0e718();
  if (param_2 < 0x40) {
    local_50 = *(long *)(lVar1 + -8) + 0x40;
    puStack_48 = &DAT_100c704b0;
    local_40 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
    puStack_38 = &DAT_100c704c8;
    local_30 = &DAT_100c704e0;
    puStack_28 = &DAT_100c704f8;
    _swift_initStructMetadata(param_1,0x100,6,&local_50,param_1 + 0x10);
  }
  return;
}



/* Address: 0x1006b8a88 | thunk_FUN_1006bbd50 */

void thunk_FUN_1006bbd50(void)

{
  FUN_1006bbd50();
  return;
}



/* Address: 0x1006b8a8c | FUN_1006b8a8c */

undefined1  [16] FUN_1006b8a8c(char *param_1,void *param_2,void *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar3;
  undefined8 uVar4;
  String SVar5;
  undefined1 auVar6 [16];
  void *pvVar2;
  
  SVar5.bridgeObject = param_2;
  SVar5.str = param_1;
  SVar5 = Swift::String::lowercased(SVar5);
  pvVar2 = SVar5.bridgeObject;
  if (*(long *)((long)param_3 + 0x10) == 0) {
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    _swift_bridgeObjectRetain(param_3);
    FUN_10046483c();
    if (((ulong)SVar5.bridgeObject & 1) == 0) {
      uVar3 = 0;
      uVar4 = 0;
    }
    else {
      puVar1 = (undefined8 *)(*(long *)((long)param_3 + 0x38) + (long)SVar5.str * 0x10);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      _swift_bridgeObjectRetain(uVar4);
    }
    _swift_bridgeObjectRelease(pvVar2);
    pvVar2 = param_3;
  }
  _swift_bridgeObjectRelease(pvVar2);
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = uVar3;
  return auVar6;
}



/* Address: 0x1006b8b24 | FUN_1006b8b24 */

bool FUN_1006b8b24(char param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  return param_1 == param_4;
}



/* Address: 0x1006b8b34 | FUN_1006b8b34 */

undefined8 FUN_1006b8b34(void)

{
  return 1;
}



/* Address: 0x1006b8b44 | FUN_1006b8b44 */

undefined8 FUN_1006b8b44(void)

{
  return 2;
}



/* Address: 0x1006b8b54 | FUN_1006b8b54 */

undefined8 FUN_1006b8b54(void)

{
  return 0;
}



/* Address: 0x1006b8b64 | FUN_1006b8b64 */

ulong FUN_1006b8b64(ulong param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  ulong uVar7;
  char *pcVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  
  uVar7 = param_1;
  FUN_1006bbd50();
  lVar14 = 0;
  uVar10 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar12 = uVar12 & *(ulong *)(param_1 + 0x40);
  while( true ) {
    while (uVar12 != 0) {
      uVar9 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = lVar14 << 10 | LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) << 4;
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x38) + uVar9);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      SVar15 = Swift::String::lowercased(*(String *)(*(long *)(param_1 + 0x30) + uVar9));
      _swift_bridgeObjectRetain(uVar4);
      uVar9 = uVar7;
      _swift_isUniquelyReferenced_nonNull_native();
      SVar16 = SVar15;
      FUN_10046483c();
      pcVar8 = SVar16.str;
      uVar11 = (ulong)~(uint)SVar16.bridgeObject & 1;
      lVar2 = *(long *)(uVar7 + 0x10) + uVar11;
      if (SCARRY8(*(long *)(uVar7 + 0x10),uVar11)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1006b8d84);
        (*pcVar5)();
      }
      if (*(long *)(uVar7 + 0x18) < lVar2) {
        FUN_1006babdc(lVar2,uVar9);
        SVar17 = SVar15;
        FUN_10046483c();
        pcVar8 = SVar17.str;
        if (((uint)SVar16.bridgeObject & 1) != ((uint)SVar17.bridgeObject & 1)) {
          Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1006b8d98);
          (*pcVar5)();
        }
      }
      else if ((uVar9 & 1) == 0) {
        FUN_1006ba224();
      }
      uVar12 = uVar12 - 1 & uVar12;
      if (((ulong)SVar16.bridgeObject & 1) == 0) {
        lVar2 = uVar7 + ((ulong)pcVar8 >> 6) * 8;
        *(ulong *)(lVar2 + 0x40) = *(ulong *)(lVar2 + 0x40) | 1L << ((ulong)pcVar8 & 0x3f);
        *(String *)(*(long *)(uVar7 + 0x30) + (long)pcVar8 * 0x10) = SVar15;
        puVar1 = (undefined8 *)(*(long *)(uVar7 + 0x38) + (long)pcVar8 * 0x10);
        *puVar1 = uVar3;
        puVar1[1] = uVar4;
        if (SCARRY8(*(long *)(uVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1006b8d88);
          (*pcVar5)();
        }
        *(long *)(uVar7 + 0x10) = *(long *)(uVar7 + 0x10) + 1;
      }
      else {
        puVar1 = (undefined8 *)(*(long *)(uVar7 + 0x38) + (long)pcVar8 * 0x10);
        uVar13 = puVar1[1];
        *puVar1 = uVar3;
        puVar1[1] = uVar4;
        _swift_bridgeObjectRelease(SVar15.bridgeObject);
        _swift_bridgeObjectRelease(uVar13);
      }
    }
    bVar6 = SCARRY8(lVar14,1);
    lVar14 = lVar14 + 1;
    if (bVar6) break;
    if ((long)(uVar10 + 0x3f >> 6) <= lVar14) {
      _swift_release(param_1);
      return uVar7;
    }
    uVar12 = ((ulong *)(param_1 + 0x40))[lVar14];
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1006b8d80);
  (*pcVar5)();
}


