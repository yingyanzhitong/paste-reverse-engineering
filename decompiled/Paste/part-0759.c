/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10085ab94 | FUN_10085ab94 */

undefined8 FUN_10085ab94(void)

{
  return 0x66412d7972746552;
}



/* Address: 0x10085abc8 | FUN_10085abc8 */

undefined8 FUN_10085abc8(void)

{
  return 0x707275502d636553;
}



/* Address: 0x10085abfc | FUN_10085abfc */

undefined8 FUN_10085abfc(void)

{
  return 0xd000000000000014;
}



/* Address: 0x10085ac30 | FUN_10085ac30 */

undefined8 FUN_10085ac30(void)

{
  return 0xd000000000000018;
}



/* Address: 0x10085ac64 | FUN_10085ac64 */

undefined8 FUN_10085ac64(void)

{
  return 0xd000000000000011;
}



/* Address: 0x10085ac98 | FUN_10085ac98 */

undefined8 FUN_10085ac98(void)

{
  return 0xd000000000000016;
}



/* Address: 0x10085accc | FUN_10085accc */

undefined8 FUN_10085accc(void)

{
  return 0xd000000000000015;
}



/* Address: 0x10085ad00 | FUN_10085ad00 */

undefined8 FUN_10085ad00(void)

{
  return 0x726576726553;
}



/* Address: 0x10085ad24 | FUN_10085ad24 */

undefined8 FUN_10085ad24(void)

{
  return 0x6b6f6f432d746553;
}



/* Address: 0x10085ad58 | FUN_10085ad58 */

undefined8 FUN_10085ad58(void)

{
  return 0xd000000000000019;
}



/* Address: 0x10085ad8c | FUN_10085ad8c */

undefined8 FUN_10085ad8c(void)

{
  return 0x4554;
}



/* Address: 0x10085ada0 | FUN_10085ada0 */

undefined8 FUN_10085ada0(void)

{
  return 0x7261706563617254;
}



/* Address: 0x10085add4 | FUN_10085add4 */

undefined8 FUN_10085add4(void)

{
  return 0x6174736563617254;
}



/* Address: 0x10085ae08 | FUN_10085ae08 */

undefined8 FUN_10085ae08(void)

{
  return 0x72656c69617254;
}



/* Address: 0x10085ae34 | FUN_10085ae34 */

undefined8 FUN_10085ae34(void)

{
  return 0xd000000000000011;
}



/* Address: 0x10085ae68 | FUN_10085ae68 */

undefined8 FUN_10085ae68(void)

{
  return 0x65646172677055;
}



/* Address: 0x10085ae94 | FUN_10085ae94 */

undefined8 FUN_10085ae94(void)

{
  return 0xd000000000000011;
}



/* Address: 0x10085aec8 | FUN_10085aec8 */

undefined8 FUN_10085aec8(void)

{
  return 0x6567412d72657355;
}



/* Address: 0x10085aefc | FUN_10085aefc */

undefined8 FUN_10085aefc(void)

{
  return 0x79726156;
}



/* Address: 0x10085af18 | FUN_10085af18 */

undefined8 FUN_10085af18(void)

{
  return 0x616956;
}



/* Address: 0x10085af34 | FUN_10085af34 */

undefined8 FUN_10085af34(void)

{
  return 0xd000000000000010;
}



/* Address: 0x10085af68 | FUN_10085af68 */

undefined8 FUN_10085af68(void)

{
  return 0xd000000000000016;
}



/* Address: 0x10085af9c | FUN_10085af9c */

char * FUN_10085af9c(char *param_1,void *param_2)

{
  ulong uVar1;
  char *pcVar2;
  String SVar3;
  
  uVar1 = (ulong)param_1 & 0xffffffffffff;
  if (((ulong)param_2 & 0x2000000000000000) != 0) {
    uVar1 = (ulong)param_2 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) || (pcVar2 = param_1, FUN_10086b970(param_1,param_2), ((ulong)pcVar2 & 1) != 0))
  {
    _swift_bridgeObjectRelease(param_2);
    param_1 = (char *)0x0;
  }
  else {
    SVar3.bridgeObject = param_2;
    SVar3.str = param_1;
    Swift::String::lowercased(SVar3);
  }
  return param_1;
}



/* Address: 0x10085b028 | FUN_10085b028 */

char * FUN_10085b028(long param_1,undefined8 param_2,char *param_3,char *param_4)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  bool bVar4;
  DecodingError DVar5;
  byte bVar6;
  char *pcVar7;
  Index after;
  Index position;
  UnsafeBufferPointer<__int8> UVar8;
  DecodingError DVar26;
  _StringGuts _Var11;
  UTF8View UVar12;
  char *pcVar13;
  UTF8View UVar14;
  void *pvVar15;
  char *pcVar16;
  uint uVar17;
  ulong uVar18;
  long unaff_x21;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  undefined *local_98;
  ulong local_90;
  undefined1 auStack_88 [24];
  undefined8 local_70;
  void *pvVar9;
  _StringGuts _Var10;
  
  pcVar7 = *(char **)(param_1 + 0x20);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  Swift::Decoder::_singleValueContainer();
  if (unaff_x21 != 0) goto LAB_10085b29c;
  FUN_100004640(auStack_88,local_70);
  SVar22 = Swift::SingleValueDecodingContainer::_decode();
  pvVar9 = SVar22.bridgeObject;
  pcVar7 = SVar22.str;
  SVar23 = SVar22;
  FUN_100830fd0();
  _Var10.unknown = SVar23.bridgeObject;
  if ((((uint)SVar23.str & 0xff00) == 0x100) || (((uint)SVar23.str & 0xff) != 0x3a)) {
    uVar18 = (ulong)pcVar7 & 0xffffffffffff;
    if (((ulong)pvVar9 & 0x2000000000000000) != 0) {
      uVar18 = (ulong)pvVar9 >> 0x38 & 0xf;
    }
    if (uVar18 != 0) {
      SVar23 = SVar22;
      FUN_10086b970();
      _Var10.unknown = SVar23.bridgeObject;
      if (((ulong)SVar23.str & 1) == 0) {
        Swift::String::lowercased(SVar22);
        goto LAB_10085b4b8;
      }
    }
    local_98 = (undefined *)0x0;
    local_90 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x30,_Var10);
    _swift_bridgeObjectRelease(local_90);
    SVar23.bridgeObject = param_4;
    SVar23.str = param_3;
    local_98 = (undefined *)0xd000000000000011;
    local_90 = 0x8000000100db25d0;
  }
  else {
    SVar24 = Swift::String::lowercased(SVar22);
    _Var10.unknown = SVar24.bridgeObject;
    if (SVar22 == SVar24) {
      _swift_bridgeObjectRelease(_Var10.unknown);
LAB_10085b17c:
      _swift_bridgeObjectRetain(pvVar9);
      after.cmsgPointer.unknown = (UnsafeMutablePointer)&DAT_00000001;
      SVar23 = SVar22;
      FUN_100108f9c();
      UVar14.unknown = SVar23.bridgeObject;
      pcVar16 = param_4;
      SVar24 = SVar23;
      _swift_bridgeObjectRelease(pvVar9);
      uVar18 = (ulong)after.cmsgPointer.unknown >> 0xe;
      uVar21 = (ulong)SVar23.str >> 0xe;
      if (uVar18 != uVar21) {
        uVar17 = SVar23.bridgeObject._4_4_ >> 0x1b & 1;
        if (((ulong)param_4 & 0x1000000000000000) == 0) {
          uVar17 = 1;
        }
        uVar20 = 4L << uVar17;
        uVar1 = (ulong)UVar14.unknown & 0xffffffffffff;
        if (((ulong)param_4 & 0x2000000000000000) != 0) {
          uVar1 = (ulong)param_4 >> 0x38 & 0xf;
        }
        do {
          uVar19 = (ulong)after.cmsgPointer.unknown & 0xc;
          position.cmsgPointer.unknown = after.cmsgPointer.unknown;
          if (uVar19 == uVar20) {
            UVar12.unknown = UVar14.unknown;
            pcVar13 = param_4;
            FUN_1000740a8();
            SVar24.bridgeObject = pcVar13;
            SVar24.str = UVar12.unknown;
          }
          pvVar15 = SVar24.bridgeObject;
          if (((ulong)position.cmsgPointer.unknown >> 0xe < uVar18) ||
             (uVar21 <= (ulong)position.cmsgPointer.unknown >> 0xe)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10085b4d0);
            (*pcVar3)();
          }
          if (((ulong)param_4 >> 0x3c & 1) == 0) {
            if (((ulong)param_4 >> 0x3d & 1) != 0) {
              local_98 = UVar14.unknown;
              local_90 = (ulong)param_4 & 0xffffffffffffff;
              bVar6 = *(byte *)((long)&local_98 + ((ulong)position.cmsgPointer.unknown >> 0x10));
              goto joined_r0x00010085b3b4;
            }
            UVar8.unknown = (undefined *)(((ulong)param_4 & 0xfffffffffffffff) + 0x20);
            if (((ulong)UVar14.unknown >> 0x3c & 1) == 0) {
              pcVar13 = param_4;
              UVar8 = Swift::_StringObject::get_sharedUTF8(UVar14.unknown);
              SVar24.bridgeObject = pvVar15;
              SVar24.str = pcVar13;
            }
            uVar17 = (uint)(byte)UVar8.unknown[(ulong)position.cmsgPointer.unknown >> 0x10];
            if (uVar19 == uVar20) goto LAB_10085b3f8;
LAB_10085b3b8:
            if (((ulong)param_4 >> 0x3c & 1) == 0) goto LAB_10085b314;
LAB_10085b3bc:
            if (uVar1 <= (ulong)after.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10085b4d4);
              (*pcVar3)();
            }
            UVar12.unknown = UVar14.unknown;
            pcVar13 = param_4;
            after = Swift::String::UTF8View::_foreignIndex(after,UVar14);
            SVar24.bridgeObject = pcVar13;
            SVar24.str = UVar12.unknown;
          }
          else {
            UVar12.unknown = UVar14.unknown;
            pcVar13 = param_4;
            bVar6 = Swift::String::UTF8View::_foreignSubscript(position,UVar14);
            SVar24.bridgeObject = pcVar13;
            SVar24.str = UVar12.unknown;
joined_r0x00010085b3b4:
            uVar17 = (uint)bVar6;
            if (uVar19 != uVar20) goto LAB_10085b3b8;
LAB_10085b3f8:
            UVar12.unknown = UVar14.unknown;
            pcVar13 = param_4;
            FUN_1000740a8();
            SVar24.bridgeObject = pcVar13;
            SVar24.str = UVar12.unknown;
            if (((ulong)param_4 >> 0x3c & 1) != 0) goto LAB_10085b3bc;
LAB_10085b314:
            after.cmsgPointer.unknown =
                 (UnsafeMutablePointer)
                 (((ulong)after.cmsgPointer.unknown & 0xffffffffffff0000) + 0x10004);
          }
          if ((((0x3f < uVar17 - 0x21) ||
               ((1L << ((ulong)(uVar17 - 0x21) & 0x3f) & 0xe00000000000367dU) == 0)) &&
              (uVar17 != 0x7c)) &&
             (((uVar17 != 0x7e && (9 < (uVar17 - 0x30 & 0xff))) &&
              ((0x19 < (uVar17 - 0x41 & 0xff) && (0x19 < (uVar17 - 0x61 & 0xff)))))))
          goto LAB_10085b1c8;
        } while (uVar21 != (ulong)after.cmsgPointer.unknown >> 0xe);
        _swift_bridgeObjectRelease(param_4);
        _swift_bridgeObjectRetain(pvVar9);
LAB_10085b4b8:
        FUN_100004594(auStack_88);
        FUN_100004594(param_1);
        return pcVar7;
      }
LAB_10085b1c8:
      _swift_bridgeObjectRelease(param_4);
      _Var11.unknown = SVar24.str;
      SVar23.bridgeObject = pcVar16;
      SVar23.str = SVar24.bridgeObject;
    }
    else {
      _Var11.unknown = _Var10.unknown;
      SVar23 = SVar22;
      bVar4 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)SVar24.str,_Var10,(_StringComparisonResult)(__int8)SVar22.str)
      ;
      _swift_bridgeObjectRelease(_Var10.unknown);
      param_4 = SVar23.bridgeObject;
      if (bVar4) goto LAB_10085b17c;
    }
    local_98 = (undefined *)0x0;
    local_90 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x37,_Var11);
    SVar25.bridgeObject = (void *)0x8000000100db25f0;
    SVar25.str = (char *)0xd000000000000018;
    Swift::String::append(SVar25,SVar23);
  }
  Swift::String::append(SVar22,SVar23);
  _swift_bridgeObjectRelease(pvVar9);
  SVar22.bridgeObject = (void *)0x8000000100db20d0;
  SVar22.str = (char *)0xd00000000000001d;
  Swift::String::append(SVar22,SVar23);
  uVar18 = local_90;
  puVar2 = local_98;
  DVar5 = Swift::DecodingError::typeMetadataAccessor();
  _DVar26 = (__int8)
            PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80;
  _swift_allocError(DVar5.value,
                    PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                    ,0,0);
  Swift::DecodingError::_dataCorruptedError((char)uVar18,_DVar26,auStack_88,puVar2);
  _swift_bridgeObjectRelease(uVar18);
  _swift_willThrow();
  FUN_100004594(auStack_88);
LAB_10085b29c:
  FUN_100004594(param_1);
  return pcVar7;
}



/* Address: 0x10085b4d4 | thunk_FUN_10085b4d8 */

void thunk_FUN_10085b4d8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe8300 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7dbf4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7dbf4,&DAT_100f07180);
  DAT_100fe8300 = pTVar1;
  return;
}



/* Address: 0x10085b4d8 | FUN_10085b4d8 */

void FUN_10085b4d8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe8300 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7dbf4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7dbf4,&DAT_100f07180);
  DAT_100fe8300 = pTVar1;
  return;
}



/* Address: 0x10085b518 | thunk_FUN_10085b51c */

void thunk_FUN_10085b51c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe8308 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7dc4c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7dc4c,&DAT_100f07180);
  DAT_100fe8308 = pTVar1;
  return;
}



/* Address: 0x10085b51c | FUN_10085b51c */

void FUN_10085b51c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe8308 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7dc4c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7dc4c,&DAT_100f07180);
  DAT_100fe8308 = pTVar1;
  return;
}



/* Address: 0x10085b55c | FUN_10085b55c */

void FUN_10085b55c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  return;
}



/* Address: 0x10085b568 | FUN_10085b568 */

undefined1  [16] FUN_10085b568(void)

{
  return ZEXT816(0x100f07180);
}



/* Address: 0x10085b578 | FUN_10085b578 */

long FUN_10085b578(void)

{
  undefined *puVar1;
  long unaff_x20;
  
  _swift_allocObject();
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  *(undefined **)(unaff_x20 + 0x10) = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1008623ec();
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  return unaff_x20;
}



/* Address: 0x10085b5bc | FUN_10085b5bc */

void FUN_10085b5bc(void)

{
  code *pcVar1;
  String SVar2;
  
  SVar2.bridgeObject = (void *)0x2;
  SVar2.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar2,(StaticString)0x0,0xe000000000000000,0xdb2630);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10085b604);
  (*pcVar1)();
}



/* Address: 0x10085b604 | FUN_10085b604 */

void FUN_10085b604(long *param_1,long param_2)

{
  ulong *puVar1;
  undefined2 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined2 uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  code *pcVar10;
  code *pcVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  undefined *puVar15;
  ulong uVar16;
  ulong uVar17;
  undefined *puVar18;
  undefined *puVar19;
  ulong uVar20;
  code *local_e8;
  code *local_e0;
  undefined *local_a8 [3];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(param_2 + 0x18,auStack_78,1,0);
  if (*(long *)(param_2 + 0x18) == 0) {
    _swift_beginAccess(param_2 + 0x10,auStack_90,0,0);
    uVar8 = *(ulong *)(*(long *)(param_2 + 0x10) + 0x10);
    puVar12 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
    if (uVar8 == 0) {
      local_e8 = (code *)0x0;
      local_e0 = (code *)0x0;
      puVar19 = (undefined *)0x0;
      puVar18 = (undefined *)0x0;
    }
    else {
      lVar9 = 0;
      pcVar11 = (code *)0x0;
      pcVar10 = (code *)0x0;
      uVar20 = 0;
      local_e0 = FUN_1008652d4;
      local_e8 = thunk_FUN_1008652f0;
      puVar7 = (undefined *)0x0;
      puVar15 = (undefined *)0x0;
      do {
        uVar16 = *(ulong *)(param_2 + 0x10);
        if (*(ulong *)(uVar16 + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x10085ba1c);
          (*pcVar11)();
        }
        uVar3 = *(ulong *)(uVar16 + lVar9 + 0x30);
        uVar4 = *(ulong *)(uVar16 + lVar9 + 0x38);
        _swift_beginAccess(param_2 + 0x10,local_a8,0x21,0);
        _swift_bridgeObjectRetain(uVar4);
        uVar6 = uVar16;
        _swift_isUniquelyReferenced_nonNull_native();
        *(ulong *)(param_2 + 0x10) = uVar16;
        if ((uVar6 & 1) == 0) {
          FUN_1008603a4();
        }
        if (*(ulong *)(uVar16 + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x10085ba20);
          (*pcVar11)();
        }
        *(undefined2 *)(uVar16 + lVar9 + 0x58) = 0xffff;
        *(ulong *)(param_2 + 0x10) = uVar16;
        _swift_endAccess(local_a8);
        uVar5 = (undefined2)uVar20;
        if (*(long *)(puVar12 + 0x10) != 0) {
          _swift_bridgeObjectRetain(puVar12);
          uVar16 = uVar3;
          uVar6 = uVar4;
          FUN_100071370();
          if ((uVar6 & 1) == 0) {
            _swift_bridgeObjectRelease(puVar12);
          }
          else {
            uVar16 = (ulong)*(ushort *)(*(long *)(puVar12 + 0x38) + uVar16 * 4 + 2);
            _swift_bridgeObjectRelease(puVar12);
            if (uVar20 >> 0x10 != 0) {
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x10085ba30);
              (*pcVar11)();
            }
            _swift_beginAccess(param_2 + 0x10,local_a8,0x21,0);
            uVar17 = *(ulong *)(param_2 + 0x10);
            uVar6 = uVar17;
            _swift_isUniquelyReferenced_nonNull_native();
            *(ulong *)(param_2 + 0x10) = uVar17;
            if ((uVar6 & 1) == 0) {
              FUN_1008603a4();
            }
            if (*(ulong *)(uVar17 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x10085ba34);
              (*pcVar11)();
            }
            *(undefined2 *)(uVar17 + uVar16 * 0x40 + 0x58) = uVar5;
            *(ulong *)(param_2 + 0x10) = uVar17;
            _swift_endAccess(local_a8);
          }
        }
        puVar19 = &DAT_100f07358;
        _swift_allocObject(&DAT_100f07358,0x18,7);
        *(ulong *)(puVar19 + 0x10) = uVar20;
        FUN_100004550(pcVar11,puVar15);
        if (uVar20 == 0x10000) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x10085ba24);
          (*pcVar11)();
        }
        puVar18 = &DAT_100f07380;
        _swift_allocObject(&DAT_100f07380,0x20,7);
        *(code **)(puVar18 + 0x10) = FUN_1008652d4;
        *(undefined **)(puVar18 + 0x18) = puVar19;
        FUN_100004550(pcVar10,puVar7);
        puVar7 = puVar12;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar16 = uVar3;
        uVar6 = uVar4;
        local_a8[0] = puVar12;
        FUN_100071370();
        uVar17 = (ulong)~(uint)uVar6 & 1;
        lVar14 = *(long *)(puVar12 + 0x10) + uVar17;
        if (SCARRY8(*(long *)(puVar12 + 0x10),uVar17)) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x10085ba28);
          (*pcVar11)();
        }
        if (*(long *)(puVar12 + 0x18) < lVar14) {
          FUN_1008600fc(lVar14,puVar7);
          puVar12 = local_a8[0];
          uVar16 = uVar3;
          uVar17 = uVar4;
          FUN_100071370();
          if (((uint)uVar6 & 1) != ((uint)uVar17 & 1)) {
            Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
            pcVar11 = (code *)SoftwareBreakpoint(1,0x10085ba44);
            (*pcVar11)();
          }
        }
        else if (((ulong)puVar7 & 1) == 0) {
          FUN_10085ff94();
          puVar12 = local_a8[0];
        }
        _swift_retain(puVar12);
        if ((uVar6 & 1) == 0) {
          *(ulong *)(puVar12 + (uVar16 >> 6) * 8 + 0x40) =
               *(ulong *)(puVar12 + (uVar16 >> 6) * 8 + 0x40) | 1L << (uVar16 & 0x3f);
          puVar1 = (ulong *)(*(long *)(puVar12 + 0x30) + uVar16 * 0x10);
          *puVar1 = uVar3;
          puVar1[1] = uVar4;
          puVar2 = (undefined2 *)(*(long *)(puVar12 + 0x38) + uVar16 * 4);
          *puVar2 = uVar5;
          puVar2[1] = 0;
          if (SCARRY8(*(long *)(puVar12 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar11 = (code *)SoftwareBreakpoint(1,0x10085ba2c);
            (*pcVar11)();
          }
          *(long *)(puVar12 + 0x10) = *(long *)(puVar12 + 0x10) + 1;
          _swift_bridgeObjectRetain(uVar4);
        }
        uVar20 = uVar20 + 1;
        lVar14 = *(long *)(puVar12 + 0x38);
        _swift_release(puVar12);
        *(undefined2 *)(lVar14 + uVar16 * 4 + 2) = uVar5;
        _swift_bridgeObjectRelease(uVar4);
        lVar9 = lVar9 + 0x40;
        pcVar11 = FUN_1008652d4;
        pcVar10 = thunk_FUN_1008652f0;
        puVar7 = puVar18;
        puVar15 = puVar19;
      } while (uVar8 != uVar20);
    }
    uVar13 = *(undefined8 *)(param_2 + 0x18);
    *(undefined **)(param_2 + 0x18) = puVar12;
    _swift_bridgeObjectRetain(puVar12);
    _swift_bridgeObjectRelease(uVar13);
    FUN_100004550(local_e0,puVar19);
    FUN_100004550(local_e8,puVar18);
    *param_1 = (long)puVar12;
  }
  else {
    *param_1 = *(long *)(param_2 + 0x18);
    _swift_bridgeObjectRetain();
  }
  return;
}



/* Address: 0x10085ba44 | FUN_10085ba44 */

long FUN_10085ba44(long param_1)

{
  long *unaff_x20;
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_80 [16];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  (**(code **)(*unaff_x20 + 0x90))();
  _swift_beginAccess(unaff_x20 + 2,auStack_48,0,0);
  lVar1 = unaff_x20[2];
  _swift_beginAccess(param_1 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar1;
  _swift_bridgeObjectRetain(lVar1);
  _swift_bridgeObjectRelease(uVar2);
  (**(code **)(*unaff_x20 + 0x98))
            (FUN_1008652a8,auStack_80,PTR___type_metadata_for____100eae0c8 + 8,
             PTR___type_metadata_for_Swift_Never_100eadc38,
             PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  return param_1;
}



/* Address: 0x10085bb08 | FUN_10085bb08 */

void FUN_10085bb08(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_1 + 0x18,auStack_48,0,0);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _swift_beginAccess(param_2 + 0x18,auStack_60,1,0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRelease(uVar1);
  return;
}



/* Address: 0x10085bb84 | FUN_10085bb84 */

void FUN_10085bb84(Hasher param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  void *pvVar3;
  __uint8 _Var4;
  Hasher HVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  String SVar10;
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_78,0,0);
  lVar6 = *(long *)(unaff_x20 + 0x10);
  lVar8 = *(long *)(lVar6 + 0x10);
  if (lVar8 != 0) {
    _swift_bridgeObjectRetain(lVar6);
    puVar9 = (undefined8 *)(lVar6 + 0x50);
    do {
      uVar1 = puVar9[-5];
      HVar5.unknown = ((String *)(puVar9 + -4))->str;
      uVar7 = puVar9[-3];
      SVar10 = *(String *)(puVar9 + -4);
      pcVar2 = (char *)puVar9[-1];
      pvVar3 = (void *)*puVar9;
      _Var4 = *(__uint8 *)(puVar9 + -2);
      _swift_bridgeObjectRetain(uVar1);
      _swift_bridgeObjectRetain(uVar7);
      _swift_bridgeObjectRetain(pvVar3);
      Swift::String::hash(param_1,SVar10);
      Swift::Hasher::_combine(_Var4,HVar5);
      SVar10.bridgeObject = pvVar3;
      SVar10.str = pcVar2;
      Swift::String::hash(param_1,SVar10);
      _swift_bridgeObjectRelease(pvVar3);
      _swift_bridgeObjectRelease(uVar7);
      _swift_bridgeObjectRelease(uVar1);
      puVar9 = puVar9 + 8;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    _swift_bridgeObjectRelease(lVar6);
  }
  return;
}



/* Address: 0x10085bc74 | FUN_10085bc74 */

void FUN_10085bc74(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong *puVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  undefined2 uVar9;
  code *pcVar10;
  undefined8 uVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong uVar15;
  long unaff_x20;
  long lVar16;
  ulong uVar17;
  code *pcVar18;
  ulong uVar19;
  code *pcVar20;
  undefined *puVar21;
  undefined *puVar22;
  ulong uVar23;
  undefined1 local_e8 [56];
  ulong local_b0 [3];
  ulong auStack_98 [3];
  undefined1 auStack_80 [32];
  
  uVar2 = *param_1;
  uVar5 = param_1[1];
  uVar3 = param_1[2];
  puVar6 = (ulong *)param_1[3];
  uVar8 = *(undefined1 *)(param_1 + 4);
  uVar4 = param_1[5];
  uVar7 = param_1[6];
  uVar11 = uVar2;
  FUN_100830fd0(uVar2,uVar5);
  if ((((uint)uVar11 & 0xff00) != 0x100) && (((uint)uVar11 & 0xff) == 0x3a)) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x10085c054);
    (*pcVar10)();
  }
  _swift_beginAccess(unaff_x20 + 0x10,auStack_80,0,0);
  uVar23 = *(ulong *)(*(long *)(unaff_x20 + 0x10) + 0x10);
  if (uVar23 >> 0x10 != 0) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x10085c004);
    (*pcVar10)();
  }
  puVar12 = auStack_98;
  _swift_beginAccess(unaff_x20 + 0x18,puVar12,0,0);
  lVar16 = *(long *)(unaff_x20 + 0x18);
  uVar9 = (undefined2)uVar23;
  if ((lVar16 != 0) && (*(long *)(lVar16 + 0x10) != 0)) {
    _swift_bridgeObjectRetain(lVar16);
    uVar23 = uVar3;
    puVar12 = puVar6;
    FUN_100071370();
    if (((ulong)puVar12 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar16);
    }
    else {
      uVar19 = (ulong)*(ushort *)(*(long *)(lVar16 + 0x38) + uVar23 * 4 + 2);
      _swift_bridgeObjectRelease(lVar16);
      puVar12 = (ulong *)local_e8;
      _swift_beginAccess(unaff_x20 + 0x10,puVar12,0x21,0);
      uVar17 = *(ulong *)(unaff_x20 + 0x10);
      uVar23 = uVar17;
      _swift_isUniquelyReferenced_nonNull_native();
      *(ulong *)(unaff_x20 + 0x10) = uVar17;
      if ((uVar23 & 1) == 0) {
        FUN_1008603a4();
      }
      if (*(ulong *)(uVar17 + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x10085c07c);
        (*pcVar10)();
      }
      *(undefined2 *)(uVar17 + uVar19 * 0x40 + 0x58) = uVar9;
      *(ulong *)(unaff_x20 + 0x10) = uVar17;
      _swift_endAccess(local_e8);
    }
  }
  pcVar10 = (code *)local_e8;
  FUN_100611ea8();
  uVar23 = *puVar12;
  if (uVar23 == 0) {
    pcVar20 = (code *)0x0;
    puVar21 = (undefined *)0x0;
    puVar22 = (undefined *)0x0;
    pcVar18 = (code *)0x0;
  }
  else {
    puVar21 = &DAT_100f07308;
    _swift_allocObject(&DAT_100f07308,0x12,7);
    *(undefined2 *)(puVar21 + 0x10) = uVar9;
    puVar22 = &DAT_100f07330;
    _swift_allocObject(&DAT_100f07330,0x20,7);
    *(code **)(puVar22 + 0x10) = FUN_10086528c;
    *(undefined **)(puVar22 + 0x18) = puVar21;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar17 = *puVar12;
    local_b0[0] = uVar17;
    *puVar12 = 0x8000000000000000;
    uVar19 = uVar3;
    puVar13 = puVar6;
    FUN_100071370();
    uVar15 = (ulong)~(uint)puVar13 & 1;
    lVar16 = *(long *)(uVar17 + 0x10) + uVar15;
    if (SCARRY8(*(long *)(uVar17 + 0x10),uVar15)) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x10085c050);
      (*pcVar10)();
    }
    if (*(long *)(uVar17 + 0x18) < lVar16) {
      FUN_1008600fc(lVar16,uVar23);
      uVar17 = local_b0[0];
      uVar19 = uVar3;
      puVar14 = puVar6;
      FUN_100071370();
      if (((uint)puVar13 & 1) != ((uint)puVar14 & 1)) {
        Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x10085c08c);
        (*pcVar10)();
      }
    }
    else if ((uVar23 & 1) == 0) {
      FUN_10085ff94();
      uVar17 = local_b0[0];
    }
    uVar23 = *puVar12;
    *puVar12 = uVar17;
    _swift_retain(uVar17);
    _swift_bridgeObjectRelease(uVar23);
    if (((ulong)puVar13 & 1) == 0) {
      lVar16 = uVar17 + (uVar19 >> 6) * 8;
      *(ulong *)(lVar16 + 0x40) = *(ulong *)(lVar16 + 0x40) | 1L << (uVar19 & 0x3f);
      puVar12 = (ulong *)(*(long *)(uVar17 + 0x30) + uVar19 * 0x10);
      *puVar12 = uVar3;
      puVar12[1] = (ulong)puVar6;
      puVar1 = (undefined2 *)(*(long *)(uVar17 + 0x38) + uVar19 * 4);
      *puVar1 = uVar9;
      puVar1[1] = 0;
      if (SCARRY8(*(long *)(uVar17 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x10085c068);
        (*pcVar10)();
      }
      *(long *)(uVar17 + 0x10) = *(long *)(uVar17 + 0x10) + 1;
      _swift_bridgeObjectRetain();
    }
    lVar16 = *(long *)(uVar17 + 0x38);
    _swift_release(uVar17);
    *(undefined2 *)(lVar16 + uVar19 * 4 + 2) = uVar9;
    pcVar18 = thunk_FUN_1008652f0;
    pcVar20 = FUN_10086528c;
  }
  (*pcVar10)(local_e8,0);
  _swift_beginAccess(unaff_x20 + 0x10,local_b0,0x21,0);
  uVar19 = *(ulong *)(unaff_x20 + 0x10);
  FUN_100864328(param_1,local_e8);
  uVar23 = uVar19;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(unaff_x20 + 0x10) = uVar19;
  uVar17 = uVar19;
  if ((uVar23 & 1) == 0) {
    uVar17 = 0;
    FUN_1008603b8(0,*(long *)(uVar19 + 0x10) + 1,1,uVar19);
    *(ulong *)(unaff_x20 + 0x10) = uVar17;
  }
  uVar23 = *(ulong *)(uVar17 + 0x10);
  uVar19 = uVar17;
  if (*(ulong *)(uVar17 + 0x18) >> 1 <= uVar23) {
    uVar19 = (ulong)(1 < *(ulong *)(uVar17 + 0x18));
    FUN_1008603b8(uVar19,uVar23 + 1,1,uVar17);
  }
  *(ulong *)(uVar19 + 0x10) = uVar23 + 1;
  lVar16 = uVar19 + uVar23 * 0x40;
  *(undefined8 *)(lVar16 + 0x20) = uVar2;
  *(undefined8 *)(lVar16 + 0x28) = uVar5;
  *(ulong *)(lVar16 + 0x30) = uVar3;
  *(ulong **)(lVar16 + 0x38) = puVar6;
  *(undefined1 *)(lVar16 + 0x40) = uVar8;
  *(undefined8 *)(lVar16 + 0x48) = uVar4;
  *(undefined8 *)(lVar16 + 0x50) = uVar7;
  *(undefined2 *)(lVar16 + 0x58) = 0xffff;
  *(ulong *)(unaff_x20 + 0x10) = uVar19;
  _swift_endAccess(local_b0);
  FUN_100004550(pcVar20,puVar21);
  FUN_100004550(pcVar18,puVar22);
  if (0xfffd < uVar23) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x10085c04c);
    (*pcVar10)();
  }
  return;
}



/* Address: 0x10085c08c | FUN_10085c08c */

void FUN_10085c08c(void)

{
  FUN_10085c35c(0x20);
  return;
}



/* Address: 0x10085c094 | FUN_10085c094 */

void FUN_10085c094(void)

{
  undefined8 uVar1;
  char *pcVar2;
  void *pvVar3;
  __uint8 _Var4;
  Hasher HVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  String SVar10;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [72];
  
  Swift::Hasher::init(0);
  HVar5.unknown = (undefined *)(unaff_x20 + 0x10);
  _swift_beginAccess(HVar5.unknown,auStack_c0,0,0);
  puVar6 = *(undefined **)(unaff_x20 + 0x10);
  lVar8 = *(long *)(puVar6 + 0x10);
  if (lVar8 != 0) {
    _swift_bridgeObjectRetain(puVar6);
    puVar9 = (undefined8 *)(puVar6 + 0x50);
    do {
      uVar1 = puVar9[-5];
      HVar5.unknown = ((String *)(puVar9 + -4))->str;
      uVar7 = puVar9[-3];
      SVar10 = *(String *)(puVar9 + -4);
      pcVar2 = (char *)puVar9[-1];
      pvVar3 = (void *)*puVar9;
      _Var4 = *(__uint8 *)(puVar9 + -2);
      _swift_bridgeObjectRetain(uVar1);
      _swift_bridgeObjectRetain(uVar7);
      _swift_bridgeObjectRetain(pvVar3);
      Swift::String::hash((Hasher)auStack_a8,SVar10);
      Swift::Hasher::_combine(_Var4,HVar5);
      SVar10.bridgeObject = pvVar3;
      SVar10.str = pcVar2;
      Swift::String::hash((Hasher)auStack_a8,SVar10);
      _swift_bridgeObjectRelease(pvVar3);
      _swift_bridgeObjectRelease(uVar7);
      _swift_bridgeObjectRelease(uVar1);
      puVar9 = puVar9 + 8;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    _swift_bridgeObjectRelease();
    HVar5.unknown = puVar6;
  }
  Swift::Hasher::_finalize(HVar5);
  return;
}



/* Address: 0x10085c194 | FUN_10085c194 */

void FUN_10085c194(void)

{
  FUN_10085c094();
  return;
}



/* Address: 0x10085c1b4 | FUN_10085c1b4 */

void FUN_10085c1b4(void)

{
  FUN_10085bb84();
  return;
}



/* Address: 0x10085c1d4 | FUN_10085c1d4 */

void FUN_10085c1d4(__int64 param_1)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(param_1);
  HVar1.unknown = auStack_68;
  FUN_10085bb84();
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x10085c210 | FUN_10085c210 */

void FUN_10085c210(undefined8 *param_1,undefined8 *param_2)

{
  FUN_100861ee4(*param_1,*param_2);
  return;
}



/* Address: 0x10085c21c | FUN_10085c21c */

void FUN_10085c21c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  code *pcVar2;
  long unaff_x20;
  long unaff_x21;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  undefined8 local_60;
  
  lVar5 = *(long *)(param_5 + -8);
  uVar1 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar4 = auStack_70 + -uVar1;
  lVar3 = (long)puVar4 - uVar1;
  local_68 = param_7;
  local_60 = param_6;
  _os_unfair_lock_lock(unaff_x20 + 0x20);
  FUN_10085c428(param_1,unaff_x20 + 0x20,param_2,param_3,param_4,param_5,local_60,puVar4);
  if (unaff_x21 == 0) {
    _os_unfair_lock_unlock(unaff_x20 + 0x20);
  }
  else {
    pcVar2 = *(code **)(lVar5 + 0x20);
    (*pcVar2)(lVar3,puVar4,param_5);
    _os_unfair_lock_unlock(unaff_x20 + 0x20);
    (*pcVar2)(local_68,lVar3,param_5);
  }
  return;
}



/* Address: 0x10085c30c | FUN_10085c30c */

long FUN_10085c30c(void)

{
  undefined *puVar1;
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined4 *)(unaff_x20 + 0x20) = 0;
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  *(undefined **)(unaff_x20 + 0x10) = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1008623ec();
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  return unaff_x20;
}



/* Address: 0x10085c354 | FUN_10085c354 */

void FUN_10085c354(void)

{
  FUN_10085c35c(0x24);
  return;
}



/* Address: 0x10085c35c | FUN_10085c35c */

void FUN_10085c35c(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10085c394 | FUN_10085c394 */

void FUN_10085c394(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long unaff_x21;
  long lVar2;
  undefined1 auStack_80 [16];
  undefined8 local_70;
  long lStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  lVar2 = *(long *)(param_4 + -8);
  lVar1 = *(long *)(lVar2 + 0x40);
  local_70 = param_3;
  lStack_68 = param_4;
  local_60 = param_5;
  uStack_58 = param_1;
  local_50 = param_2;
  FUN_1008751d4(FUN_100865218,auStack_80);
  if (unaff_x21 != 0) {
    (**(code **)(lVar2 + 0x20))(param_6,auStack_80 + -(lVar1 + 0xfU & 0xfffffffffffffff0),param_4);
  }
  return;
}



/* Address: 0x10085c428 | FUN_10085c428 */

void FUN_10085c428(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long unaff_x21;
  long lVar2;
  
  lVar2 = *(long *)(param_5 + -8);
  lVar1 = *(long *)(lVar2 + 0x40);
  (*param_2)(&stack0xffffffffffffffc0 + -(lVar1 + 0xfU & 0xfffffffffffffff0));
  if (unaff_x21 != 0) {
    (**(code **)(lVar2 + 0x20))
              (param_7,&stack0xffffffffffffffc0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),param_5);
  }
  return;
}



/* Address: 0x10085c4a0 | FUN_10085c4a0 */

long FUN_10085c4a0(void)

{
  undefined *puVar1;
  long unaff_x20;
  
  _swift_allocObject();
  puVar1 = &DAT_100fe8710;
  FUN_1000f7830(&DAT_100fe8710,&DAT_100c7e250);
  _swift_allocObject();
  *(undefined4 *)(puVar1 + 0x10) = 0;
  *(undefined **)(unaff_x20 + 0x20) = puVar1;
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  *(undefined **)(unaff_x20 + 0x10) = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1008623ec();
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  return unaff_x20;
}



/* Address: 0x10085c50c | FUN_10085c50c */

void FUN_10085c50c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x10085c514 | FUN_10085c514 */

void FUN_10085c514(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10085c548 | FUN_10085c548 */

long FUN_10085c548(void)

{
  byte bVar1;
  long lVar2;
  undefined *puVar3;
  
  bVar1 = Swift::_stdlib_isOSVersionAtLeast(0xf,0,0);
  if ((bVar1 & 1) == 0) {
    lVar2 = 0;
    FUN_1008651b0();
    _swift_allocObject();
    puVar3 = &DAT_100fe8710;
    FUN_1000f7830(&DAT_100fe8710,&DAT_100c7e250);
    _swift_allocObject();
    *(undefined4 *)(puVar3 + 0x10) = 0;
    *(undefined **)(lVar2 + 0x20) = puVar3;
  }
  else {
    lVar2 = 0;
    FUN_100865108();
    _swift_allocObject();
    *(undefined4 *)(lVar2 + 0x20) = 0;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  *(undefined **)(lVar2 + 0x10) = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1008623ec();
  *(undefined **)(lVar2 + 0x18) = puVar3;
  return lVar2;
}



/* Address: 0x10085c5ec | FUN_10085c5ec */

void FUN_10085c5ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_1008624f8(param_3,param_4,param_5);
  return;
}



/* Address: 0x10085c5fc | FUN_10085c5fc */

void FUN_10085c5fc(ulong *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(param_2 + 0x28);
  uVar3 = *(ulong *)(param_2 + 0x30);
  uVar1 = uVar2;
  FUN_100858afc(uVar2,uVar3);
  if ((uVar1 & 1) == 0) {
    _swift_bridgeObjectRetain(uVar3);
  }
  else {
    FUN_100872ba8();
  }
  *param_1 = uVar2;
  param_1[1] = uVar3;
  return;
}



/* Address: 0x10085c664 | FUN_10085c664 */

void FUN_10085c664(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  _StringGuts param_5,_StringGuts param_6)

{
  byte bVar1;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 local_c0;
  undefined1 *puStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long lStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulong uVar2;
  
  puVar3 = &local_c0;
  if (param_2 == 0) {
    FUN_100863028(param_5.unknown,param_6.unknown);
    _swift_bridgeObjectRelease(param_6.unknown);
    _swift_bridgeObjectRelease(param_4);
    return;
  }
  bVar1 = Swift::_stdlib_isOSVersionAtLeast(0xd,0,0);
  if ((bVar1 & 1) == 0) {
LAB_10085c7b0:
    _swift_bridgeObjectRetain(param_4);
    _swift_bridgeObjectRetain(param_6.unknown);
    FUN_100859230(&local_c0,param_3,param_4,param_5.unknown,param_6.unknown,param_1,param_2);
    lStack_80 = (long)puStack_b8;
    local_88 = local_c0;
    local_78 = local_b0;
    uStack_70 = uStack_a8;
    local_68 = local_a0;
    local_60 = local_98;
    uStack_58 = uStack_90;
    FUN_100862ca0(&local_88,param_5.unknown,param_6.unknown);
    _swift_bridgeObjectRelease(param_6.unknown);
    _swift_bridgeObjectRelease(param_4);
    FUN_1006ec3e4(&local_c0);
  }
  else {
    if ((param_5.unknown != (undefined *)0x65696b6f6f63) ||
       (param_6.unknown != &DAT_e600000000000000)) {
      bVar1 = Swift::_stringCompareWithSmolCheck(param_5,param_6,(_StringComparisonResult)0x63);
      if (!(bool)bVar1) goto LAB_10085c7b0;
    }
    uVar2 = (ulong)bVar1;
    local_c0 = 0x203b;
    puStack_b8 = &SUB_e200000000000000;
    local_88 = param_1;
    lStack_80 = param_2;
    FUN_10086324c();
    (extension__StringProcessing)::Swift::Collection::_split
              (&local_c0,0x7fffffffffffffff,0,PTR___type_metadata_for_Swift_String_100eac208,
               PTR___type_metadata_for_Swift_String_100eac208,uVar2,uVar2,
               PTR___protocol_witness_table_for_Swift_Character___Swift_Equatable_in_Swift_100eabf28
              );
    _swift_bridgeObjectRelease(param_2);
    puVar4 = &DAT_100f07240;
    _swift_allocObject(&DAT_100f07240,0x30,7);
    *(undefined8 *)(puVar4 + 0x10) = param_3;
    *(undefined8 *)(puVar4 + 0x18) = param_4;
    *(undefined **)(puVar4 + 0x20) = param_5.unknown;
    *(undefined **)(puVar4 + 0x28) = param_6.unknown;
    _swift_bridgeObjectRetain(param_4);
    _swift_bridgeObjectRetain(param_6.unknown);
    FUN_100862888(puVar3,FUN_100863290,puVar4,param_5.unknown,param_6.unknown);
    _swift_release(puVar4);
    _swift_bridgeObjectRelease(puVar3);
    _swift_bridgeObjectRelease(param_6.unknown);
    _swift_bridgeObjectRelease(param_4);
  }
  return;
}



/* Address: 0x10085c878 | FUN_10085c878 */

void FUN_10085c878(undefined8 *param_1,String *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  String SVar1;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  SVar1 = *param_2;
  _swift_bridgeObjectRetain(param_4);
  _swift_bridgeObjectRetain(param_6);
  SVar1 = Swift::String::__fromSubstring(SVar1);
  FUN_100859230(&local_98,param_3,param_4,param_5,param_6,SVar1.str,SVar1.bridgeObject);
  param_1[1] = uStack_90;
  *param_1 = local_98;
  param_1[3] = uStack_80;
  param_1[2] = local_88;
  param_1[5] = uStack_70;
  param_1[4] = local_78;
  param_1[6] = local_68;
  return;
}



/* Address: 0x10085c934 | FUN_10085c934 */

undefined1  [16]
FUN_10085c934(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *unaff_x20;
  undefined1 auVar2 [16];
  
  puVar1 = (undefined8 *)&DAT_00000038;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    puVar1 = _malloc(0x38);
  }
  else {
    _swift_coroFrameAlloc(0x38,0xe606);
  }
  *param_1 = puVar1;
  puVar1[5] = param_5;
  puVar1[6] = unaff_x20;
  puVar1[3] = param_3;
  puVar1[4] = param_4;
  puVar1[2] = param_2;
  FUN_1008624f8(param_4,param_5,*unaff_x20);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  auVar2._8_8_ = puVar1;
  auVar2._0_8_ = FUN_10085c9cc;
  return auVar2;
}



/* Address: 0x10085c9cc | FUN_10085c9cc */

void FUN_10085c9cc(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  param_1 = (undefined8 *)*param_1;
  uVar1 = *param_1;
  uVar4 = param_1[1];
  uVar2 = param_1[5];
  uVar3 = param_1[3];
  uVar5 = param_1[4];
  uVar6 = param_1[2];
  if ((param_2 & 1) == 0) {
    _swift_bridgeObjectRetain(uVar3);
    _swift_bridgeObjectRetain(uVar2);
    FUN_10085c664(uVar1,uVar4,uVar6,uVar3,uVar5,uVar2);
  }
  else {
    _swift_bridgeObjectRetain(uVar4);
    _swift_bridgeObjectRetain(uVar3);
    _swift_bridgeObjectRetain(uVar2);
    FUN_10085c664(uVar1,uVar4,uVar6,uVar3,uVar5,uVar2);
    _swift_bridgeObjectRelease(param_1[1]);
  }
  _free(param_1);
  return;
}



/* Address: 0x10085ca84 | FUN_10085ca84 */

void FUN_10085ca84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_100863a84(param_3,param_4,param_5);
  return;
}



/* Address: 0x10085ca94 | FUN_10085ca94 */

void FUN_10085ca94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100f07268;
  _swift_allocObject(&DAT_100f07268,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  _swift_bridgeObjectRetain(param_3);
  _swift_bridgeObjectRetain(param_5);
  FUN_10086329c(param_1,FUN_100863df8,puVar1,param_4,param_5);
  _swift_release(puVar1);
  _swift_bridgeObjectRelease(param_1);
  _swift_bridgeObjectRelease(param_5);
  _swift_bridgeObjectRelease(param_3);
  return;
}



/* Address: 0x10085cb40 | FUN_10085cb40 */

void FUN_10085cb40(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  _swift_bridgeObjectRetain(param_4);
  _swift_bridgeObjectRetain(param_6);
  _swift_bridgeObjectRetain(uVar2);
  FUN_100859230(&local_88,param_3,param_4,param_5,param_6,uVar1,uVar2);
  param_1[1] = uStack_80;
  *param_1 = local_88;
  param_1[3] = uStack_70;
  param_1[2] = local_78;
  param_1[5] = uStack_60;
  param_1[4] = local_68;
  param_1[6] = local_58;
  return;
}



/* Address: 0x10085cbe4 | FUN_10085cbe4 */

undefined1  [16]
FUN_10085cbe4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *unaff_x20;
  undefined1 auVar2 [16];
  
  puVar1 = (undefined8 *)&DAT_00000030;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    puVar1 = _malloc(0x30);
  }
  else {
    _swift_coroFrameAlloc(0x30,0x3366);
  }
  *param_1 = puVar1;
  puVar1[4] = param_5;
  puVar1[5] = unaff_x20;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  puVar1[1] = param_2;
  FUN_100863a84(param_4,param_5,*unaff_x20);
  *puVar1 = param_4;
  auVar2._8_8_ = puVar1;
  auVar2._0_8_ = FUN_10085cc7c;
  return auVar2;
}



/* Address: 0x10085cc7c | FUN_10085cc7c */

void FUN_10085cc7c(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  param_1 = (undefined8 *)*param_1;
  uVar1 = param_1[4];
  uVar5 = param_1[3];
  puVar7 = param_1 + 2;
  uVar6 = *puVar7;
  uVar2 = *param_1;
  uVar3 = param_1[1];
  if ((param_2 & 1) == 0) {
    puVar4 = &DAT_100f072b8;
    _swift_allocObject(&DAT_100f072b8,0x30,7);
    *(undefined8 *)(puVar4 + 0x10) = uVar3;
    *(undefined8 *)(puVar4 + 0x18) = uVar6;
    *(undefined8 *)(puVar4 + 0x20) = uVar5;
    *(undefined8 *)(puVar4 + 0x28) = uVar1;
    _swift_bridgeObjectRetain_n(uVar6,2);
    _swift_bridgeObjectRetain_n(uVar1,2);
    FUN_10086329c(uVar2,thunk_FUN_100863df8,puVar4,uVar5,uVar1);
  }
  else {
    puVar4 = &DAT_100f07290;
    _swift_allocObject(&DAT_100f07290,0x30,7);
    *(undefined8 *)(puVar4 + 0x10) = uVar3;
    *(undefined8 *)(puVar4 + 0x18) = uVar6;
    *(undefined8 *)(puVar4 + 0x20) = uVar5;
    *(undefined8 *)(puVar4 + 0x28) = uVar1;
    _swift_bridgeObjectRetain_n(uVar1,2);
    _swift_bridgeObjectRetain_n(uVar6,2);
    _swift_bridgeObjectRetain(uVar2);
    FUN_10086329c();
    _swift_bridgeObjectRelease(uVar6);
    puVar7 = param_1;
  }
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(uVar2);
  _swift_release(puVar4);
  _swift_bridgeObjectRelease(*puVar7);
  _free(param_1);
  return;
}


