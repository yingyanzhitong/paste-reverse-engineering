/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1008644ec | FUN_1008644ec */

void FUN_1008644ec(long param_1,undefined8 param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  uVar2 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar4 = *unaff_x20;
  if ((uVar2 & 1) == 0) {
    FUN_10085ba44();
    _swift_release(uVar4);
    *unaff_x20 = uVar2;
    uVar4 = uVar2;
  }
  _swift_beginAccess(uVar4 + 0x10,auStack_58,0,0);
  if (param_1 != *(long *)(*(long *)(uVar4 + 0x10) + 0x10)) {
    _swift_beginAccess(uVar4 + 0x18,auStack_70,1,0);
    uVar3 = *(undefined8 *)(uVar4 + 0x18);
    *(undefined8 *)(uVar4 + 0x18) = 0;
    _swift_bridgeObjectRelease(uVar3);
    _swift_beginAccess(uVar4 + 0x10,auStack_88,0x21,0);
    FUN_1008627cc(param_1,param_2);
    _swift_endAccess(auStack_88);
    if (0xfffe < *(ulong *)(*(long *)(uVar4 + 0x10) + 0x10)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008645dc);
      (*pcVar1)();
    }
  }
  return;
}



/* Address: 0x1008645dc | FUN_1008645dc */

ulong FUN_1008645dc(ulong param_1)

{
  String SVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  DecodingError DVar6;
  void *pvVar7;
  char **ppcVar8;
  Dictionary DVar9;
  char *pcVar10;
  char *pcVar11;
  undefined8 uVar12;
  undefined *puVar13;
  char *pcVar14;
  char *pcVar15;
  DecodingError DVar30;
  long *plVar16;
  _StringGuts _Var17;
  void *pvVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  long unaff_x21;
  long lVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  undefined1 auStack_2d0 [64];
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined2 uStack_268;
  undefined6 uStack_266;
  undefined2 uStack_260;
  undefined8 uStack_25e;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined2 uStack_228;
  undefined6 uStack_226;
  undefined2 uStack_220;
  undefined8 uStack_21e;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1de;
  char *local_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  char *pcStack_1a8;
  void *pvStack_1a0;
  code *pcStack_198;
  undefined8 local_190;
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  char *local_150;
  undefined *puStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  char *pcStack_128;
  void *pvStack_120;
  code *local_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  char acStack_d8 [24];
  void *local_c0;
  long *plStack_b8;
  char *local_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  char *pcStack_88;
  void *local_80;
  ulong local_58;
  
  local_58 = param_1;
  FUN_10085c548();
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  Swift::Decoder::_unkeyedContainer();
  pvVar7 = local_c0;
  if (unaff_x21 == 0) {
    FUN_100004640(acStack_d8,local_c0);
    Swift::UnkeyedDecodingContainer::_get_count();
    if (((uint)plStack_b8 & 0xff) != 1) {
      uVar21 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      plVar16 = plStack_b8;
      if ((uVar21 & 1) == 0) {
        FUN_10085ba44();
        _swift_release(local_58);
        plVar16 = plStack_b8;
        local_58 = uVar21;
      }
      ppcVar8 = &local_150;
      FUN_100611ea8();
      if (*plVar16 != 0) {
        DVar9.unknown = &DAT_100fe8318;
        FUN_1000f7830(&DAT_100fe8318,&DAT_100c7dd00);
        Swift::Dictionary::reserveCapacity((__int64)pvVar7,DVar9);
      }
      (*(code *)ppcVar8)(&local_150,0);
      _swift_beginAccess(local_58 + 0x10,&local_150,0x21,0);
      lVar20 = *(long *)(local_58 + 0x10);
      lVar22 = lVar20;
      _swift_isUniquelyReferenced_nonNull_native();
      *(long *)(local_58 + 0x10) = lVar20;
      if (((int)lVar22 == 0) || ((long)(*(ulong *)(lVar20 + 0x18) >> 1) < (long)pvVar7)) {
        FUN_1008603b8();
        lVar20 = lVar22;
      }
      *(long *)(local_58 + 0x10) = lVar20;
      _swift_endAccess(&local_150);
    }
    FUN_100004640(acStack_d8,local_c0);
    bVar5 = Swift::UnkeyedDecodingContainer::get_isAtEnd();
    pvVar7 = local_c0;
    while (!bVar5) {
      pcVar10 = acStack_d8;
      local_c0 = pvVar7;
      FUN_10007d048(pcVar10,pvVar7);
      FUN_10086523c();
      Swift::UnkeyedDecodingContainer::_decode();
      pvVar18 = pvStack_120;
      pcVar14 = pcStack_128;
      uVar3 = uStack_138;
      uVar2 = local_140;
      puVar13 = puStack_148;
      pcVar15 = local_150;
      puStack_a8 = puStack_148;
      local_b0 = local_150;
      uStack_98 = uStack_138;
      uStack_a0 = local_140;
      pcStack_88 = pcStack_128;
      local_80 = pvStack_120;
      pcVar11 = local_150;
      _Var17.unknown = puStack_148;
      FUN_100830fd0();
      if ((((uint)pcVar11 & 0xff00) != 0x100) && (((uint)pcVar11 & 0xff) == 0x3a)) {
        local_150 = (char *)0x0;
        puStack_148 = (undefined *)0xe000000000000000;
        Swift::_StringGuts::grow(0x23,_Var17);
        _swift_bridgeObjectRelease(puStack_148);
        local_150 = (char *)0xd000000000000015;
        puStack_148 = (undefined *)0x8000000100db2630;
        local_1d0 = pcVar15;
        puStack_1c8 = puVar13;
        _swift_bridgeObjectRetain(puVar13);
        SVar23.bridgeObject = &SUB_e200000000000000;
        SVar23.str = (char *)0x203a;
        SVar26.bridgeObject = pvVar7;
        SVar26.str = pcVar10;
        Swift::String::append(SVar23,SVar26);
        pvVar18 = local_80;
        pcVar15 = pcStack_88;
        pcVar14 = pcStack_88;
        FUN_100858afc(pcStack_88,local_80);
        if (((ulong)pcVar14 & 1) == 0) {
          _swift_bridgeObjectRetain(pvVar18);
        }
        else {
          FUN_100872ba8();
        }
        SVar24.bridgeObject = pvVar18;
        SVar24.str = pcVar15;
        SVar27.bridgeObject = pvVar7;
        SVar27.str = pcVar10;
        Swift::String::append(SVar24,SVar27);
        _swift_bridgeObjectRelease(pvVar18);
        puVar13 = puStack_1c8;
        SVar1.bridgeObject = puStack_1c8;
        SVar1.str = local_1d0;
        SVar28.bridgeObject = pvVar7;
        SVar28.str = pcVar10;
        Swift::String::append(SVar1,SVar28);
        _swift_bridgeObjectRelease(puVar13);
        FUN_1006ec3e4(&local_b0);
        SVar25.bridgeObject = (void *)0xec0000006465776f;
        SVar25.str = (char *)0x6c6c617369642022;
        SVar29.bridgeObject = pvVar7;
        SVar29.str = pcVar10;
        Swift::String::append(SVar25,SVar29);
        puVar13 = puStack_148;
        pcVar15 = local_150;
        DVar6 = Swift::DecodingError::typeMetadataAccessor();
        _DVar30 = (__int8)
                  PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
        ;
        _swift_allocError(DVar6.value,
                          PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                          ,0,0);
        Swift::DecodingError::_dataCorruptedError((char)puVar13,_DVar30,acStack_d8,pcVar15);
        _swift_bridgeObjectRelease(puVar13);
        _swift_willThrow();
        _swift_release(local_58);
        FUN_100004594(acStack_d8);
        goto LAB_100864648;
      }
      _swift_beginAccess(local_58 + 0x10,auStack_f0,0,0);
      uVar19 = *(ulong *)(*(long *)(local_58 + 0x10) + 0x10);
      uVar21 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar21 & 1) == 0) {
        FUN_10085ba44();
        _swift_release(local_58);
        local_58 = uVar21;
      }
      _swift_beginAccess(local_58 + 0x10,auStack_108,0,0);
      if (uVar19 == *(ulong *)(*(long *)(local_58 + 0x10) + 0x10)) {
        FUN_100830fd0(pcVar15,puVar13);
        if ((((uint)pcVar15 & 0xff00) != 0x100) && (((uint)pcVar15 & 0xff) == 0x3a)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100864ca0);
          (*pcVar4)();
        }
        _swift_bridgeObjectRetain(puVar13);
        _swift_bridgeObjectRetain(uVar3);
        _swift_bridgeObjectRetain(pvVar18);
        FUN_10085bc74(&local_b0);
        FUN_1006ec3e4(&local_b0);
        FUN_1006ec3e4(&local_b0);
      }
      else {
        _swift_beginAccess(local_58 + 0x18,auStack_168,1,0);
        uVar12 = *(undefined8 *)(local_58 + 0x18);
        *(undefined8 *)(local_58 + 0x18) = 0;
        _swift_bridgeObjectRelease(uVar12);
        _swift_beginAccess(local_58 + 0x10,auStack_180,0x21,0);
        local_118 = FUN_10085e3a4;
        uStack_110 = 0;
        lVar22 = *(long *)(local_58 + 0x10);
        uVar21 = *(ulong *)(lVar22 + 0x10);
        if (uVar21 < uVar19) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100864c9c);
          (*pcVar4)();
        }
        local_150 = pcVar15;
        puStack_148 = puVar13;
        local_140 = uVar2;
        uStack_138 = uVar3;
        pcStack_128 = pcVar14;
        pvStack_120 = pvVar18;
        FUN_100864328(&local_b0,&local_1d0);
        lVar20 = lVar22;
        _swift_isUniquelyReferenced_nonNull_native();
        *(long *)(local_58 + 0x10) = lVar22;
        if (((int)lVar20 == 0) || (*(ulong *)(lVar22 + 0x18) >> 1 <= uVar21)) {
          FUN_1008603b8();
          *(long *)(local_58 + 0x10) = lVar20;
          lVar22 = lVar20;
        }
        lVar20 = lVar22 + uVar19 * 0x40;
        puVar13 = &DAT_100fe8320;
        FUN_1000f7830(&DAT_100fe8320,&DAT_100c7dd08);
        _swift_arrayDestroy(lVar20 + 0x20,0,puVar13);
        _memmove((void *)(lVar20 + 0x60),(void *)(lVar20 + 0x20),
                 (*(long *)(lVar22 + 0x10) - uVar19) * 0x40);
        *(long *)(lVar22 + 0x10) = *(long *)(lVar22 + 0x10) + 1;
        pcStack_1a8 = pcStack_128;
        pcStack_198 = local_118;
        pvStack_1a0 = pvStack_120;
        local_190 = uStack_110;
        puStack_1c8 = puStack_148;
        local_1d0 = local_150;
        uStack_1b8 = uStack_138;
        uStack_1c0 = local_140;
        (*local_118)(&local_290,&local_1d0);
        uStack_248 = uStack_288;
        local_250 = local_290;
        uStack_238 = uStack_278;
        local_240 = uStack_280;
        uStack_228 = uStack_268;
        local_230 = local_270;
        uStack_21e = uStack_25e;
        uStack_226 = uStack_266;
        uStack_220 = uStack_260;
        uStack_208 = uStack_288;
        local_210 = local_290;
        uStack_1f8 = uStack_278;
        uStack_200 = uStack_280;
        local_1f0 = local_270;
        uStack_1de = uStack_25e;
        FUN_1000f8cac(&local_250,auStack_2d0,&DAT_100fe8320,&DAT_100c7dd08);
        FUN_1000fb4c4(&local_210,&DAT_100fe8320,&DAT_100c7dd08);
        *(undefined8 *)(lVar20 + 0x52) = uStack_21e;
        *(ulong *)(lVar20 + 0x4a) = CONCAT26(uStack_220,uStack_226);
        *(undefined8 *)(lVar20 + 0x38) = uStack_238;
        *(undefined8 *)(lVar20 + 0x30) = local_240;
        *(ulong *)(lVar20 + 0x48) = CONCAT62(uStack_226,uStack_228);
        *(undefined8 *)(lVar20 + 0x40) = local_230;
        *(undefined8 *)(lVar20 + 0x28) = uStack_248;
        *(undefined8 *)(lVar20 + 0x20) = local_250;
        FUN_1000fb4c4(&local_150,&DAT_100fe8730,&DAT_100c7e270);
        *(long *)(local_58 + 0x10) = lVar22;
        _swift_endAccess(auStack_180);
        uVar21 = *(ulong *)(lVar22 + 0x10);
        FUN_1006ec3e4(&local_b0);
        if (0xfffe < uVar21) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100864b54);
          (*pcVar4)();
        }
      }
      FUN_100004640(acStack_d8,local_c0);
      bVar5 = Swift::UnkeyedDecodingContainer::get_isAtEnd();
      pvVar7 = local_c0;
    }
    FUN_100004594(acStack_d8);
    FUN_100004594(param_1);
  }
  else {
    _swift_release(local_58);
LAB_100864648:
    FUN_100004594(param_1);
  }
  return local_58;
}



/* Address: 0x100864ca0 | thunk_FUN_100864ca4 */

void thunk_FUN_100864ca4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe8340 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7dd58;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7dd58,&DAT_100f072e0);
  DAT_100fe8340 = pTVar1;
  return;
}



/* Address: 0x100864ca4 | FUN_100864ca4 */

void FUN_100864ca4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe8340 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7dd58;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7dd58,&DAT_100f072e0);
  DAT_100fe8340 = pTVar1;
  return;
}



/* Address: 0x100864ce4 | FUN_100864ce4 */

void FUN_100864ce4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe8348 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7df40;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7df40,&DAT_100f072e0);
  DAT_100fe8348 = pTVar1;
  return;
}



/* Address: 0x100864d24 | FUN_100864d24 */

void FUN_100864d24(void)

{
  FUN_100865034(&DAT_100fe8350,FUN_100864d50,
                PTR__Swift__Swift__Slice<undefined>_>Swift__RangeReplaceableCollection_100eadcc0);
  return;
}



/* Address: 0x100864d50 | FUN_100864d50 */

void FUN_100864d50(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe8360 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7ddc0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7ddc0,&DAT_100f072e0);
  DAT_100fe8360 = pTVar1;
  return;
}



/* Address: 0x100864d60 | FUN_100864d60 */

void FUN_100864d60(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7ddc0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7ddc0,&DAT_100f072e0);
  DAT_100fe8360 = pTVar1;
  return;
}



/* Address: 0x100864d90 | thunk_FUN_100864d94 */

void thunk_FUN_100864d94(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe8368 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7e020;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7e020,&DAT_100f072e0);
  DAT_100fe8368 = pTVar1;
  return;
}



/* Address: 0x100864d94 | FUN_100864d94 */

void FUN_100864d94(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe8368 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7e020;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7e020,&DAT_100f072e0);
  DAT_100fe8368 = pTVar1;
  return;
}



/* Address: 0x100864dd4 | FUN_100864dd4 */

void FUN_100864dd4(void)

{
  FUN_100864f94(&DAT_100fe8370,
                PTR__Swift__Swift__Range<undefined>_>Swift__RandomAccessCollection_100eac960);
  return;
}



/* Address: 0x100864df8 | FUN_100864df8 */

void FUN_100864df8(void)

{
  undefined *puVar1;
  
  if (DAT_100fe8380 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift____int64_>Swift__SignedInteger_100eac720;
  _swift_getWitnessTable
            (PTR_Swift____int64_>Swift__SignedInteger_100eac720,
             PTR___type_metadata_for_Swift_Int_100eac6f8);
  DAT_100fe8380 = puVar1;
  return;
}



/* Address: 0x100864e38 | FUN_100864e38 */

void FUN_100864e38(void)

{
  FUN_100865034(&DAT_100fe8388,FUN_100864e64,
                PTR__Swift__Swift__Slice<undefined>_>Swift__RandomAccessCollection_100eadcb0);
  return;
}



/* Address: 0x100864e64 | FUN_100864e64 */

void FUN_100864e64(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe8390 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7de80;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7de80,&DAT_100f072e0);
  DAT_100fe8390 = pTVar1;
  return;
}



/* Address: 0x100864e74 | FUN_100864e74 */

void FUN_100864e74(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7de80;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7de80,&DAT_100f072e0);
  DAT_100fe8390 = pTVar1;
  return;
}



/* Address: 0x100864ea4 | thunk_FUN_100864ce4 */

void thunk_FUN_100864ce4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe8348 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7df40;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7df40,&DAT_100f072e0);
  DAT_100fe8348 = pTVar1;
  return;
}



/* Address: 0x100864ea8 | FUN_100864ea8 */

void FUN_100864ea8(void)

{
  FUN_100865034(&DAT_100fe8398,FUN_100864ed4,
                PTR__Swift__Swift__Slice<undefined>_>Swift__MutableCollection_100eadca0);
  return;
}



/* Address: 0x100864ed4 | FUN_100864ed4 */

void FUN_100864ed4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe83a0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7ded0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7ded0,&DAT_100f072e0);
  DAT_100fe83a0 = pTVar1;
  return;
}



/* Address: 0x100864ee4 | FUN_100864ee4 */

void FUN_100864ee4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7ded0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7ded0,&DAT_100f072e0);
  DAT_100fe83a0 = pTVar1;
  return;
}



/* Address: 0x100864f14 | thunk_FUN_1008643a0 */

void thunk_FUN_1008643a0(void)

{
  FUN_1008643a0();
  return;
}



/* Address: 0x100864f18 | FUN_100864f18 */

void FUN_100864f18(void)

{
  FUN_100864f94(&DAT_100fe83a8,PTR__Swift__Swift__Range<undefined>_>Swift__Collection_100eac968);
  return;
}



/* Address: 0x100864f3c | FUN_100864f3c */

void FUN_100864f3c(void)

{
  FUN_100134584(&DAT_100fe83b0,&DAT_100fe8358,&DAT_100c7ddb8,
                PTR_Swift__Swift__Slice<undefined>_>Swift__Collection_100eadcb8);
  return;
}



/* Address: 0x100864f70 | FUN_100864f70 */

void FUN_100864f70(void)

{
  FUN_100864f94(&DAT_100fe83b8,
                PTR__Swift__Swift__Range<undefined>_>Swift__BidirectionalCollection_100eac948);
  return;
}



/* Address: 0x100864f94 | FUN_100864f94 */

void FUN_100864f94(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_40;
  undefined *puStack_38;
  
  if (*param_1 == 0) {
    puVar1 = &DAT_100fe8378;
    FUN_1000f8b08(&DAT_100fe8378,&DAT_100c7de78);
    puVar2 = puVar1;
    FUN_100864df8();
    local_40 = PTR___protocol_witness_table_for_Swift_Int___Swift_Strideable_in_Swift_100eac730;
    puStack_38 = puVar2;
    _swift_getWitnessTable(param_2,puVar1,&local_40);
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x100865008 | FUN_100865008 */

void FUN_100865008(void)

{
  FUN_100865034(&DAT_100fe83c0,FUN_100864d94,
                PTR__Swift__Swift__Slice<undefined>_>Swift__BidirectionalCollection_100eadc98);
  return;
}



/* Address: 0x100865034 | FUN_100865034 */

void FUN_100865034(long *param_1,code *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_38;
  
  if (*param_1 == 0) {
    puVar1 = &DAT_100fe8358;
    FUN_1000f8b08(&DAT_100fe8358,&DAT_100c7ddb8);
    puVar2 = puVar1;
    (*param_2)();
    local_38 = puVar2;
    _swift_getWitnessTable(param_3,puVar1,&local_38);
    *param_1 = param_3;
  }
  return;
}



/* Address: 0x1008650a4 | FUN_1008650a4 */

void FUN_1008650a4(void)

{
  FUN_100134584(&DAT_100fe83c8,&DAT_100fe83d0,&DAT_100c7e080,
                PTR_Swift__Swift__IndexingIterator<undefined>_>Swift__IteratorProtocol_100ead1e0);
  return;
}



/* Address: 0x1008650d8 | FUN_1008650d8 */

undefined1  [16] FUN_1008650d8(void)

{
  return ZEXT816(0x100f072e0);
}



/* Address: 0x1008650e8 | FUN_1008650e8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1008650e8(void)

{
  return ZEXT816(0x100fe8418);
}



/* Address: 0x100865108 | FUN_100865108 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100865108(void)

{
  return ZEXT816(0x100fe8520);
}



/* Address: 0x100865128 | FUN_100865128 */

undefined * FUN_100865128(void)

{
  undefined *puVar1;
  
  if (PTR__swift_runtimeSupportsNoncopyableTypes_100eae408 != (undefined *)0x0) {
    puVar1 = (undefined *)0x0;
    FUN_10086515c(0);
    return puVar1;
  }
  return PTR___type_metadata_for____100eae0c8 + 8;
}



/* Address: 0x100865134 | FUN_100865134 */

void FUN_100865134(void)

{
  FUN_10086515c(0);
  return;
}



/* Address: 0x10086515c | FUN_10086515c */

void FUN_10086515c(void)

{
  Mutex MVar1;
  undefined *puVar2;
  
  if (DAT_100fe85f0 != (undefined *)0x0) {
    return;
  }
  puVar2 = PTR___type_metadata_for____100eae0c8 + 8;
  MVar1 = Synchronization::Mutex::typeMetadataAccessor();
  if (puVar2 != (undefined *)0x0) {
    return;
  }
  DAT_100fe85f0 = MVar1.unknown;
  return;
}



/* Address: 0x1008651b0 | FUN_1008651b0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1008651b0(void)

{
  return ZEXT816(0x100fe8638);
}



/* Address: 0x1008651d0 | thunk_FUN_1008651d4 */

void thunk_FUN_1008651d4(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  
  if (DAT_100fe8708 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_1008650e8(0xff);
  pTVar2 = &TargetProtocolConformanceDescriptor_100c7e1e4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7e1e4,uVar1);
  DAT_100fe8708 = pTVar2;
  return;
}



/* Address: 0x1008651d4 | FUN_1008651d4 */

void FUN_1008651d4(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  
  if (DAT_100fe8708 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_1008650e8(0xff);
  pTVar2 = &TargetProtocolConformanceDescriptor_100c7e1e4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7e1e4,uVar1);
  DAT_100fe8708 = pTVar2;
  return;
}



/* Address: 0x100865218 | FUN_100865218 */

void FUN_100865218(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10085c428(param_1,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),param_2);
  return;
}



/* Address: 0x10086523c | FUN_10086523c */

void FUN_10086523c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe8740 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7d980;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7d980,&DAT_100f06ee0);
  DAT_100fe8740 = pTVar1;
  return;
}



/* Address: 0x10086527c | FUN_10086527c */

void FUN_10086527c(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x10086528c | FUN_10086528c */

undefined2 FUN_10086528c(void)

{
  long unaff_x20;
  
  return *(undefined2 *)(unaff_x20 + 0x10);
}



/* Address: 0x100865294 | FUN_100865294 */

void FUN_100865294(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1008652a4 | thunk_FUN_1008652f0 */

void thunk_FUN_1008652f0(undefined4 *param_1,undefined4 param_2)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  *param_1 = param_2;
  return;
}



/* Address: 0x1008652a8 | FUN_1008652a8 */

void FUN_1008652a8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10085bb08(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),param_1);
  return;
}



/* Address: 0x1008652c4 | FUN_1008652c4 */

void FUN_1008652c4(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1008652d4 | FUN_1008652d4 */

void FUN_1008652d4(void)

{
  code *pcVar1;
  long unaff_x20;
  
  if ((long)*(ulong *)(unaff_x20 + 0x10) < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008652ec);
    (*pcVar1)();
  }
  if (*(ulong *)(unaff_x20 + 0x10) >> 0x10 == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008652f0);
  (*pcVar1)();
}



/* Address: 0x1008652f0 | FUN_1008652f0 */

void FUN_1008652f0(undefined4 *param_1,undefined4 param_2)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  *param_1 = param_2;
  return;
}



/* Address: 0x100865318 | FUN_100865318 */

void FUN_100865318(void)

{
  undefined *puVar1;
  
  if (DAT_100fe8770 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift__Swift__String_>Swift__StringProtocol_100eac258;
  _swift_getWitnessTable
            (PTR_Swift__Swift__String_>Swift__StringProtocol_100eac258,
             PTR___type_metadata_for_Swift_String_100eac208);
  DAT_100fe8770 = puVar1;
  return;
}



/* Address: 0x100865358 | FUN_100865358 */

undefined8 * FUN_100865358(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Address: 0x10086538c | FUN_10086538c */

void FUN_10086538c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  *param_1 = uVar1;
  return;
}



/* Address: 0x1008653a0 | FUN_1008653a0 */

undefined1  [16] FUN_1008653a0(void)

{
  return ZEXT816(0x100f07400);
}



/* Address: 0x1008653b0 | thunk_FUN_1008653b4 */

void thunk_FUN_1008653b4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe8780 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7e32c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7e32c,&DAT_100f07480);
  DAT_100fe8780 = pTVar1;
  return;
}



/* Address: 0x1008653b4 | FUN_1008653b4 */

void FUN_1008653b4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe8780 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7e32c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7e32c,&DAT_100f07480);
  DAT_100fe8780 = pTVar1;
  return;
}



/* Address: 0x1008653f4 | thunk_FUN_1008653f8 */

undefined8 * thunk_FUN_1008653f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  return param_1;
}



/* Address: 0x1008653f8 | FUN_1008653f8 */

undefined8 * FUN_1008653f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  return param_1;
}



/* Address: 0x100865444 | FUN_100865444 */

undefined8 * FUN_100865444(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar1);
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  return param_1;
}



/* Address: 0x100865480 | thunk_FUN_100865484 */

int thunk_FUN_100865484(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 10) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x100865484 | FUN_100865484 */

int FUN_100865484(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 10) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x1008654cc | thunk_FUN_1008654d0 */

void thunk_FUN_1008654d0(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    *(undefined2 *)(param_1 + 1) = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 10) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 10) = 0;
    }
    if (param_2 != 0) {
      *param_1 = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x1008654d0 | FUN_1008654d0 */

void FUN_1008654d0(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    *(undefined2 *)(param_1 + 1) = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 10) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 10) = 0;
    }
    if (param_2 != 0) {
      *param_1 = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x100865510 | FUN_100865510 */

undefined1  [16] FUN_100865510(void)

{
  return ZEXT816(0x100f07480);
}



/* Address: 0x100865520 | thunk_FUN_100863df8 */

void thunk_FUN_100863df8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10085cb40(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x100865524 | thunk_FUN_10085fab4 */

void thunk_FUN_10085fab4(void)

{
  FUN_10085fab4();
  return;
}



/* Address: 0x100865528 | thunk_FUN_10085f9e4 */

void thunk_FUN_10085f9e4(void)

{
  thunk_FUN_10085f9e4();
  return;
}



/* Address: 0x10086552c | thunk_FUN_10085c210 */

void thunk_FUN_10085c210(void)

{
  FUN_10085c210();
  return;
}


