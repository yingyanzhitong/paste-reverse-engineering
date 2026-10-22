/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10064f4a4 | FUN_10064f4a4 */

void FUN_10064f4a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  Result RVar5;
  Optional OVar6;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  __int64 _Var8;
  undefined *puVar9;
  EnumeratedSequence EVar10;
  undefined *puVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  long unaff_x20;
  long lVar17;
  undefined8 uVar18;
  code *pcVar19;
  code *pcVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  code *local_170 [2];
  long local_160;
  long local_158;
  long local_150;
  long local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  Iterator local_128;
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined8 local_a8;
  long *local_a0;
  undefined1 auStack_98 [24];
  undefined8 local_80;
  long lVar7;
  
  uVar22 = *(undefined8 *)(unaff_x20 + 0x50);
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  local_130 = uVar22;
  RVar5 = Swift::Result::typeMetadataAccessor();
  lVar7 = CONCAT71(extraout_var,RVar5.value);
  OVar6 = Swift::Optional::typeMetadataAccessor();
  local_150 = *(long *)(CONCAT71(extraout_var_00,OVar6.value) + -8);
  lVar23 = (long)local_170 - (*(long *)(local_150 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_148 = *(long *)(lVar7 + -8);
  uVar16 = *(long *)(local_148 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_170[1] = (code *)(lVar23 - uVar16);
  local_158 = (long)local_170[1] - uVar16;
  _Var8 = Swift::Array<undefined>::get_count();
  if (_Var8 == 0) {
    FUN_1006499b0(0,0,param_1,thunk_FUN_100630328,&DAT_100ef0d68,thunk_FUN_100652fc4);
  }
  else {
    puVar9 = &DAT_100fd85f0;
    local_160 = CONCAT71(extraout_var_00,OVar6.value);
    FUN_1000f7830(&DAT_100fd85f0,&DAT_100c6aad8);
    _swift_allocObject();
    *(undefined8 *)(puVar9 + 0x10) = param_3;
    *(undefined8 *)(puVar9 + 0x18) = param_4;
    *(__int64 *)(puVar9 + 0x20) = _Var8;
    uVar22 = 0;
    local_138 = param_4;
    local_80 = param_2;
    Swift::Array<undefined>::typeMetadataAccessor();
    local_140 = param_3;
    _swift_unknownObjectRetain(param_3);
    _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530,uVar22);
    (extension_Swift)::Swift::Sequence::enumerated();
    EVar10 = Swift::EnumeratedSequence::typeMetadataAccessor();
    Swift::EnumeratedSequence::_makeIterator(EVar10);
    _swift_beginAccess(puVar9 + 0x20,auStack_98,1,0);
    local_128 = Swift::EnumeratedSequence::Iterator::typeMetadataAccessor();
    Swift::EnumeratedSequence::Iterator::_next(local_128);
    uVar22 = local_a8;
    plVar3 = local_a0;
    while (plVar3 != (long *)0x0) {
      puVar1 = (ulong *)((long)plVar3 + *(long *)(*plVar3 + 0x60));
      uVar16 = *puVar1;
      uVar14 = puVar1[1];
      uVar12 = uVar16;
      local_a8 = uVar22;
      local_a0 = plVar3;
      _swift_getObjectType();
      pcVar20 = *(code **)(uVar14 + 0x10);
      _swift_unknownObjectRetain(uVar16);
      (*pcVar20)(uVar12,uVar14);
      _swift_unknownObjectRelease(uVar16);
      if ((uVar12 & 1) == 0) {
LAB_10064f698:
        puVar11 = &DAT_100ef0668;
        _swift_allocObject(&DAT_100ef0668,0x40,7);
        *(undefined8 *)(puVar11 + 0x10) = local_130;
        *(undefined8 *)(puVar11 + 0x18) = local_140;
        *(undefined8 *)(puVar11 + 0x20) = local_138;
        *(undefined **)(puVar11 + 0x28) = puVar9;
        *(long *)(puVar11 + 0x30) = param_1;
        *(undefined8 *)(puVar11 + 0x38) = uVar22;
        _swift_unknownObjectRetain();
        _swift_retain(param_1);
        _swift_retain(puVar9);
        FUN_100646e1c(FUN_10065325c,puVar11);
        _swift_release(puVar11);
        _swift_release(plVar3);
      }
      else {
        lVar17 = *(long *)(*plVar3 + 0x58);
        _swift_beginAccess((undefined *)((long)plVar3 + lVar17),auStack_c0,0,0);
        lVar4 = local_150;
        lVar2 = local_160;
        (**(code **)(local_150 + 0x10))(lVar23,(undefined *)((long)plVar3 + lVar17),local_160);
        lVar24 = local_148;
        lVar13 = lVar23;
        (**(code **)(local_148 + 0x30))(lVar23,1,lVar7);
        lVar17 = local_158;
        if ((int)lVar13 == 1) {
          (**(code **)(lVar4 + 8))(lVar23,lVar2);
          goto LAB_10064f698;
        }
        (**(code **)(lVar24 + 0x20))(local_158,lVar23,lVar7);
        pcVar20 = local_170[1];
        (**(code **)(lVar24 + 0x10))(local_170[1],lVar17,lVar7);
        pcVar19 = pcVar20;
        _swift_getEnumCaseMultiPayload(pcVar20,lVar7);
        if ((int)pcVar19 == 1) {
          uVar22 = *(undefined8 *)pcVar20;
          _swift_getObjectType(*(undefined8 *)(puVar9 + 0x10));
          FUN_100642338();
          if (SBORROW8(*(long *)(puVar9 + 0x20),1)) {
                    /* WARNING: Does not return */
            pcVar20 = (code *)SoftwareBreakpoint(1,0x10064fb8c);
            (*pcVar20)();
          }
          *(long *)(puVar9 + 0x20) = *(long *)(puVar9 + 0x20) + -1;
          _swift_getObjectType(*(undefined8 *)(puVar9 + 0x10));
          FUN_100642338();
          if (*(long *)(puVar9 + 0x20) == 0) {
            uVar16 = *(ulong *)(param_1 + 0x20);
            lVar2 = *(long *)(param_1 + 0x28);
            _swift_getObjectType();
            uVar14 = uVar16;
            (**(code **)(lVar2 + 0x10))();
            if ((uVar14 & 1) == 0) {
              plVar15 = (long *)&DAT_100ef0690;
              _swift_allocObject(&DAT_100ef0690,0x21,7);
              plVar15[2] = param_1;
              plVar15[3] = 0;
              *(undefined1 *)(plVar15 + 4) = 0;
              local_170[0] = *(code **)(lVar2 + 0x18);
              _swift_retain(param_1);
              (*local_170[0])(thunk_FUN_100652fc4,plVar15,uVar16,lVar2);
              _swift_errorRelease(uVar22);
              _swift_release(plVar3);
            }
            else {
              _swift_beginAccess(param_1 + 0x10,auStack_d8,1,0);
              uVar18 = 0;
              uVar25 = 0;
              uVar21 = 0;
              if (*(char *)(param_1 + 0x18) == -1) {
                *(undefined8 *)(param_1 + 0x10) = 0;
                *(undefined1 *)(param_1 + 0x18) = 0;
                _swift_beginAccess(param_1 + 0x30,auStack_f0,1,0);
                uVar18 = *(undefined8 *)(param_1 + 0x30);
                uVar25 = *(undefined8 *)(param_1 + 0x38);
                uVar21 = *(undefined8 *)(param_1 + 0x40);
                *(undefined8 *)(param_1 + 0x30) = 0;
                *(undefined8 *)(param_1 + 0x38) = 0;
                *(undefined8 *)(param_1 + 0x40) = 0;
              }
              FUN_1006486f8(uVar18,uVar25,uVar21);
              FUN_100004550(uVar18,uVar25);
              _swift_bridgeObjectRelease(uVar21);
              _swift_errorRelease(uVar22);
              plVar15 = plVar3;
            }
            _swift_release(plVar15);
          }
          else {
            _swift_release(plVar3);
            _swift_errorRelease(uVar22);
          }
          (**(code **)(local_148 + 8))(local_158,lVar7);
        }
        else {
          _swift_getObjectType(*(undefined8 *)(puVar9 + 0x10));
          FUN_100642338();
          if (SBORROW8(*(long *)(puVar9 + 0x20),1)) {
                    /* WARNING: Does not return */
            pcVar20 = (code *)SoftwareBreakpoint(1,0x10064fb88);
            (*pcVar20)();
          }
          *(long *)(puVar9 + 0x20) = *(long *)(puVar9 + 0x20) + -1;
          _swift_getObjectType(*(undefined8 *)(puVar9 + 0x10));
          FUN_100642338();
          if (*(long *)(puVar9 + 0x20) == 0) {
            uVar16 = *(ulong *)(param_1 + 0x20);
            lVar2 = *(long *)(param_1 + 0x28);
            _swift_getObjectType();
            uVar14 = uVar16;
            (**(code **)(lVar2 + 0x10))();
            if ((uVar14 & 1) == 0) {
              puVar11 = &DAT_100ef06b8;
              _swift_allocObject(&DAT_100ef06b8,0x21,7);
              *(long *)(puVar11 + 0x10) = param_1;
              *(undefined8 *)(puVar11 + 0x18) = 0;
              puVar11[0x20] = 0;
              pcVar20 = *(code **)(lVar2 + 0x18);
              _swift_retain(param_1);
              (*pcVar20)(thunk_FUN_100652fc4,puVar11,uVar16,lVar2);
              pcVar20 = local_170[1];
              _swift_release(plVar3);
              _swift_release(puVar11);
              lVar24 = local_148;
            }
            else {
              _swift_beginAccess(param_1 + 0x10,auStack_108,1,0);
              uVar22 = 0;
              uVar18 = 0;
              uVar25 = 0;
              if (*(char *)(param_1 + 0x18) == -1) {
                *(undefined8 *)(param_1 + 0x10) = 0;
                *(undefined1 *)(param_1 + 0x18) = 0;
                _swift_beginAccess(param_1 + 0x30,auStack_120,1,0);
                uVar22 = *(undefined8 *)(param_1 + 0x30);
                uVar18 = *(undefined8 *)(param_1 + 0x38);
                uVar25 = *(undefined8 *)(param_1 + 0x40);
                *(undefined8 *)(param_1 + 0x30) = 0;
                *(undefined8 *)(param_1 + 0x38) = 0;
                *(undefined8 *)(param_1 + 0x40) = 0;
              }
              FUN_1006486f8(uVar22,uVar18,uVar25);
              FUN_100004550(uVar22,uVar18);
              _swift_release(plVar3);
              _swift_bridgeObjectRelease(uVar25);
              lVar24 = local_148;
            }
          }
          else {
            _swift_release(plVar3);
          }
          pcVar19 = *(code **)(lVar24 + 8);
          (*pcVar19)(local_158,lVar7);
          (*pcVar19)(pcVar20,lVar7);
        }
      }
      Swift::EnumeratedSequence::Iterator::_next(local_128);
      uVar22 = local_a8;
      plVar3 = local_a0;
    }
    _swift_release(puVar9);
    _swift_bridgeObjectRelease(local_80);
  }
  return;
}



/* Address: 0x10064fb8c | FUN_10064fb8c */

undefined8 FUN_10064fb8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _swift_getObjectType(param_2);
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  Swift::Result::typeMetadataAccessor();
  uVar1 = 0;
  Swift::Array<undefined>::typeMetadataAccessor();
  FUN_1006422fc(param_2,uVar1,param_3);
  FUN_10064fc38(param_1,param_2);
  return param_2;
}



/* Address: 0x10064fc38 | FUN_10064fc38 */

void FUN_10064fc38(undefined8 param_1,long param_2)

{
  Result RVar1;
  undefined7 extraout_var;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  __int64 _Var7;
  undefined8 *puVar8;
  undefined8 **ppuVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  long unaff_x20;
  undefined8 uVar13;
  long lVar14;
  code *pcVar15;
  long lVar16;
  undefined8 *puVar17;
  ulong uVar18;
  ulong local_c0 [4];
  undefined8 local_90;
  char local_88;
  undefined8 *local_78 [3];
  long lVar2;
  
  uVar13 = *(undefined8 *)(unaff_x20 + 0x50);
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  local_c0[2] = uVar13;
  RVar1 = Swift::Result::typeMetadataAccessor();
  lVar2 = CONCAT71(extraout_var,RVar1.value);
  lVar14 = *(long *)(lVar2 + -8);
  puVar17 = (undefined8 *)((long)local_c0 - (*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar16 = *(long *)(param_2 + 0x28);
  local_c0[1] = *(undefined8 *)(param_2 + 0x28);
  uVar18 = *(ulong *)(param_2 + 0x20);
  uVar3 = uVar18;
  local_c0[0] = uVar18;
  _swift_getObjectType();
  uVar4 = uVar3;
  FUN_1006422fc();
  uVar13 = 0xff;
  Swift::Array<undefined>::typeMetadataAccessor();
  uVar5 = 0;
  FUN_100663960(0,uVar13);
  FUN_100653280();
  puVar6 = &DAT_100ef0a60;
  _swift_allocError(&DAT_100ef0a60,uVar5,0,0);
  *puVar17 = puVar6;
  _swift_storeEnumTagMultiPayload(puVar17,lVar2,1);
  local_c0[3] = param_1;
  _Var7 = Swift::Array<undefined>::get_count();
  puVar8 = puVar17;
  FUN_100652fe8(puVar17,_Var7,lVar2);
  (**(code **)(lVar14 + 8))(puVar17,lVar2);
  ppuVar9 = local_78;
  local_78[0] = puVar8;
  FUN_100663568();
  pcVar15 = *(code **)(lVar16 + 0x10);
  _swift_retain();
  uVar10 = uVar3;
  (*pcVar15)(uVar3,lVar16);
  if ((uVar10 & 1) == 0) {
    puVar6 = &DAT_100ef06e0;
    _swift_allocObject(&DAT_100ef06e0,0x48,7);
    uVar10 = local_c0[3];
    *(long *)(puVar6 + 0x10) = unaff_x20;
    *(ulong *)(puVar6 + 0x18) = uVar4;
    *(ulong *)(puVar6 + 0x20) = local_c0[3];
    *(ulong *)(puVar6 + 0x30) = local_c0[1];
    *(ulong *)(puVar6 + 0x28) = local_c0[0];
    *(code **)(puVar6 + 0x38) = FUN_1006532c0;
    *(undefined8 ***)(puVar6 + 0x40) = ppuVar9;
    pcVar15 = *(code **)(lVar16 + 0x18);
    _swift_retain(uVar4);
    _swift_bridgeObjectRetain(uVar10);
    _swift_unknownObjectRetain(uVar18);
    _swift_retain(ppuVar9);
    (*pcVar15)(FUN_100653304,puVar6,uVar3,lVar16);
    _swift_release(puVar6);
  }
  else {
    FUN_100650134(uVar4,local_c0[3],uVar18,lVar16,FUN_1006532c0,ppuVar9,local_c0[2]);
  }
  puVar6 = &DAT_100ef0708;
  _swift_allocObject(&DAT_100ef0708,0x20,7);
  *(undefined8 ***)(puVar6 + 0x10) = ppuVar9;
  *(long *)(puVar6 + 0x18) = param_2;
  puVar11 = &DAT_100ef0730;
  _swift_allocObject(&DAT_100ef0730,0x28,7);
  *(code **)(puVar11 + 0x10) = FUN_100653348;
  *(undefined **)(puVar11 + 0x18) = puVar6;
  *(ulong *)(puVar11 + 0x20) = uVar4;
  uVar3 = *(ulong *)(uVar4 + 0x20);
  lVar2 = *(long *)(uVar4 + 0x28);
  _swift_getObjectType();
  pcVar15 = *(code **)(lVar2 + 0x10);
  _swift_retain_n(uVar4,3);
  _swift_retain_n(ppuVar9,2);
  _swift_retain_n(param_2,2);
  _swift_retain_n(puVar6,2);
  uVar10 = uVar3;
  (*pcVar15)(uVar3,lVar2);
  if ((uVar10 & 1) == 0) {
    _swift_release(param_2);
    _swift_release(ppuVar9);
    puVar12 = &DAT_100ef0758;
    _swift_allocObject(&DAT_100ef0758,0x28,7);
    *(ulong *)(puVar12 + 0x10) = uVar4;
    *(code **)(puVar12 + 0x18) = thunk_FUN_10065310c;
    *(undefined **)(puVar12 + 0x20) = puVar11;
    pcVar15 = *(code **)(lVar2 + 0x18);
    _swift_retain(uVar4);
    _swift_retain(puVar11);
    (*pcVar15)(thunk_FUN_100653138,puVar12,uVar3,lVar2);
    _swift_release(puVar12);
    _swift_release_n(uVar4,2);
    _swift_release_n(puVar6,2);
    _swift_release(puVar11);
  }
  else {
    _swift_beginAccess(uVar4 + 0x10,local_78,0,0);
    if (*(char *)(uVar4 + 0x18) == -1) {
      _swift_release(param_2);
      _swift_release(ppuVar9);
      _swift_beginAccess(uVar4 + 0x30,&local_90,0x21,0);
      FUN_10064967c(thunk_FUN_10065310c,puVar11);
      _swift_endAccess(&local_90);
    }
    else {
      local_90 = *(undefined8 *)(uVar4 + 0x10);
      local_88 = *(char *)(uVar4 + 0x18);
      FUN_100308524();
      FUN_1006504dc(&local_90,ppuVar9,param_2);
      _swift_release(param_2);
      _swift_release(ppuVar9);
      FUN_1002ec258(local_90,local_88);
    }
    FUN_100004550(0,0);
    _swift_release_n(uVar4,2);
    _swift_release_n(puVar6,2);
    _swift_release(puVar11);
    _swift_bridgeObjectRelease(0);
  }
  _swift_release(uVar4);
  _swift_release_n(ppuVar9,2);
  return;
}



/* Address: 0x10065007c | FUN_10065007c */

void FUN_10065007c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = *param_3;
  _swift_beginAccess(param_3 + 2,auStack_58,0x21,0);
  lVar2 = *(long *)(lVar1 + 0x50);
  Swift::Array<undefined>::_makeMutableAndUnique(lVar2);
  lVar1 = param_3[2];
  lVar2 = *(long *)(lVar2 + 0x10);
  thunk_FUN_100662648(param_1,lVar1,lVar2);
  FUN_1006622e0(lVar1,lVar2);
  (**(code **)(*(long *)(lVar2 + -8) + 0x18))
            (lVar1 + *(long *)(*(long *)(lVar2 + -8) + 0x48) * param_1,param_2,lVar2);
  FUN_10066236c(param_3 + 2,lVar2);
  _swift_endAccess(auStack_58);
  return;
}



/* Address: 0x100650134 | FUN_100650134 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010065020c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100650134(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  Result RVar7;
  Optional OVar8;
  undefined7 extraout_var;
  undefined8 uVar9;
  __int64 _Var10;
  undefined *puVar11;
  EnumeratedSequence EVar12;
  undefined8 uVar13;
  undefined *puVar14;
  ulong uVar15;
  long lVar16;
  long unaff_x20;
  long lVar17;
  long lVar18;
  code *pcVar19;
  long lVar20;
  long lVar21;
  long local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  Iterator local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 auStack_a8 [24];
  undefined8 local_90;
  long *local_88;
  undefined8 local_80;
  
  local_c0 = param_5;
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  RVar7 = Swift::Result::typeMetadataAccessor();
  extraout_var = (undefined7)((ulong)param_1 >> 8);
  lVar17 = CONCAT71(extraout_var,RVar7.value);
  OVar8 = Swift::Optional::typeMetadataAccessor();
  local_e8 = CONCAT71(extraout_var,OVar8.value);
  lVar20 = *(long *)(local_e8 + -8);
  lVar18 = (long)&local_100 - (*(long *)(lVar20 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar21 = *(long *)(lVar17 + -8);
  local_100 = lVar18 - (*(long *)(lVar21 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar9 = 0;
  local_e0 = lVar17;
  local_b8 = param_7;
  FUN_1006529e0(0,param_7);
  _Var10 = Swift::Array<undefined>::get_count(uVar9,uVar9);
  if (_Var10 == 0) {
    FUN_1006499b0(0,0,param_1,thunk_FUN_100630328,&DAT_100ef0d68,thunk_FUN_100652fc4);
  }
  else {
    puVar11 = &DAT_100fd85f0;
    local_f8 = lVar21;
    local_f0 = lVar20;
    FUN_1000f7830(&DAT_100fd85f0,&DAT_100c6aad8);
    _swift_allocObject();
    *(undefined8 *)(puVar11 + 0x10) = param_3;
    *(undefined8 *)(puVar11 + 0x18) = param_4;
    *(__int64 *)(puVar11 + 0x20) = _Var10;
    uVar9 = 0;
    local_d0 = param_4;
    local_80 = param_2;
    Swift::Array<undefined>::typeMetadataAccessor();
    local_d8 = param_3;
    _swift_unknownObjectRetain(param_3);
    _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530,uVar9);
    (extension_Swift)::Swift::Sequence::enumerated();
    EVar12 = Swift::EnumeratedSequence::typeMetadataAccessor();
    Swift::EnumeratedSequence::_makeIterator(EVar12);
    local_c8 = Swift::EnumeratedSequence::Iterator::typeMetadataAccessor();
    Swift::EnumeratedSequence::Iterator::_next(local_c8);
    uVar9 = local_90;
    plVar4 = local_88;
    uVar13 = local_80;
    while (local_80 = uVar13, plVar4 != (long *)0x0) {
      puVar1 = (ulong *)((long)plVar4 + *(long *)(*plVar4 + 0x60));
      uVar2 = *puVar1;
      uVar3 = puVar1[1];
      uVar15 = uVar2;
      local_90 = uVar9;
      local_88 = plVar4;
      _swift_getObjectType();
      pcVar19 = *(code **)(uVar3 + 0x10);
      _swift_unknownObjectRetain(uVar2);
      (*pcVar19)(uVar15,uVar3);
      _swift_unknownObjectRelease(uVar2);
      if ((uVar15 & 1) == 0) {
LAB_1006502f0:
        uVar13 = local_d8;
        FUN_100647054(local_d8,local_d0);
        puVar14 = &DAT_100ef0780;
        _swift_allocObject(&DAT_100ef0780,0x48,7);
        *(undefined8 *)(puVar14 + 0x10) = *(undefined8 *)(unaff_x20 + 0x50);
        *(undefined8 *)(puVar14 + 0x18) = local_b8;
        *(undefined8 *)(puVar14 + 0x20) = local_c0;
        *(undefined8 *)(puVar14 + 0x28) = param_6;
        *(undefined **)(puVar14 + 0x30) = puVar11;
        *(undefined8 *)(puVar14 + 0x38) = param_1;
        *(undefined8 *)(puVar14 + 0x40) = uVar9;
        _swift_retain(param_6);
        _swift_retain(puVar11);
        _swift_retain(param_1);
        FUN_100646e1c(FUN_100653384,puVar14);
        _swift_release(uVar13);
        _swift_release(puVar14);
        _swift_release(plVar4);
      }
      else {
        lVar17 = *(long *)(*plVar4 + 0x58);
        _swift_beginAccess((long)plVar4 + lVar17,auStack_a8,0,0);
        lVar5 = local_e8;
        lVar21 = local_f0;
        (**(code **)(local_f0 + 0x10))(lVar18,(long)plVar4 + lVar17,local_e8);
        lVar6 = local_e0;
        lVar20 = local_f8;
        lVar16 = lVar18;
        (**(code **)(local_f8 + 0x30))(lVar18,1,local_e0);
        lVar17 = local_100;
        if ((int)lVar16 == 1) {
          (**(code **)(lVar21 + 8))(lVar18,lVar5);
          goto LAB_1006502f0;
        }
        (**(code **)(lVar20 + 0x20))(local_100,lVar18,lVar6);
        FUN_10065057c(uVar9,lVar17,local_c0,param_6,puVar11,param_1,
                      *(undefined8 *)(unaff_x20 + 0x50),local_b8);
        _swift_release(plVar4);
        (**(code **)(lVar20 + 8))(lVar17,lVar6);
      }
      Swift::EnumeratedSequence::Iterator::_next(local_c8);
      uVar9 = local_90;
      plVar4 = local_88;
      uVar13 = local_80;
    }
    _swift_release(puVar11);
    _swift_bridgeObjectRelease(uVar13);
  }
  return;
}



/* Address: 0x1006504dc | FUN_1006504dc */

void FUN_1006504dc(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long local_50;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_2;
  if (*(char *)(param_1 + 1) == '\x01') {
    FUN_100646f54(*param_1,param_3,*(undefined8 *)(lVar2 + 0x50));
    return;
  }
  _swift_beginAccess(param_2 + 2,auStack_48,0,0);
  lVar1 = param_2[2];
  uVar3 = *(undefined8 *)(lVar2 + 0x50);
  local_50 = lVar1;
  _swift_bridgeObjectRetain(lVar1);
  FUN_100646e88(&local_50,param_3,uVar3);
  _swift_bridgeObjectRelease(lVar1);
  return;
}



/* Address: 0x10065057c | FUN_10065057c */

void FUN_10065057c(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [24];
  
  (*param_3)();
  uVar3 = *(undefined8 *)(param_5 + 0x10);
  uVar1 = *(undefined8 *)(param_5 + 0x18);
  _swift_getObjectType(uVar3);
  FUN_100642338();
  _swift_beginAccess(param_5 + 0x20,auStack_58,1,0);
  if (!SBORROW8(*(long *)(param_5 + 0x20),1)) {
    *(long *)(param_5 + 0x20) = *(long *)(param_5 + 0x20) + -1;
    FUN_100642338(uVar3,uVar1);
    if (*(long *)(param_5 + 0x20) == 0) {
      FUN_1006499b0(0,0,param_6,thunk_FUN_100630328,&DAT_100ef0d68,thunk_FUN_100652fc4);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100650638);
  (*pcVar2)();
}



/* Address: 0x100650638 | FUN_100650638 */

void FUN_100650638(undefined8 param_1,ulong param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  code *pcVar2;
  Result RVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined8 local_70;
  undefined1 local_68;
  
  local_80 = param_7;
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  RVar3 = Swift::Result::typeMetadataAccessor();
  FUN_10062f364(&local_70,FUN_100004520,auStack_90,RVar3.value,
                PTR___type_metadata_for____100eae0c8 + 8);
  _swift_getObjectType();
  uVar4 = param_2;
  (**(code **)(param_3 + 0x10))();
  if ((uVar4 & 1) == 0) {
    puVar6 = &DAT_100ef0cc8;
    _swift_allocObject(&DAT_100ef0cc8,0x31,7);
    *(long *)(puVar6 + 0x10) = param_4;
    *(undefined8 *)(puVar6 + 0x18) = param_5;
    *(undefined8 *)(puVar6 + 0x20) = param_6;
    *(undefined8 *)(puVar6 + 0x28) = local_70;
    puVar6[0x30] = local_68;
    pcVar2 = *(code **)(param_3 + 0x18);
    _swift_retain(param_4);
    _swift_retain(param_5);
    FUN_100308524(local_70,local_68);
    (*pcVar2)(FUN_100653d8c,puVar6,param_2,param_3);
    FUN_1002ec258(local_70,local_68);
    _swift_release(puVar6);
  }
  else {
    uVar5 = *(undefined8 *)(param_4 + 0x10);
    uVar1 = *(undefined8 *)(param_4 + 0x18);
    _swift_getObjectType(uVar5);
    FUN_100642338();
    _swift_beginAccess(param_4 + 0x20,auStack_90,1,0);
    if (SBORROW8(*(long *)(param_4 + 0x20),1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100650814);
      (*pcVar2)();
    }
    *(long *)(param_4 + 0x20) = *(long *)(param_4 + 0x20) + -1;
    FUN_100642338(uVar5,uVar1);
    if (*(long *)(param_4 + 0x20) == 0) {
      FUN_1006499b0(0,0,param_5,thunk_FUN_100630328,&DAT_100ef0d68,thunk_FUN_100652fc4);
    }
    FUN_1002ec258(local_70,local_68);
  }
  return;
}



/* Address: 0x100650814 | FUN_100650814 */

void FUN_100650814(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [24];
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _swift_getObjectType(uVar3);
  FUN_100642338();
  _swift_beginAccess(param_1 + 0x20,auStack_58,1,0);
  if (!SBORROW8(*(long *)(param_1 + 0x20),1)) {
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -1;
    FUN_100642338(uVar3,uVar1);
    if (*(long *)(param_1 + 0x20) == 0) {
      FUN_1006499b0(0,0,param_2,thunk_FUN_100630328,&DAT_100ef0d68,thunk_FUN_100652fc4);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1006508c8);
  (*pcVar2)();
}



/* Address: 0x1006508c8 | FUN_1006508c8 */

void FUN_1006508c8(void)

{
  FUN_10065354c();
  _swift_retain();
  return;
}



/* Address: 0x1006508dc | FUN_1006508dc */

code * FUN_1006508dc(undefined8 param_1)

{
  undefined *puVar1;
  code *pcVar2;
  long *unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *unaff_x20;
  puVar1 = &DAT_100ef07a8;
  _swift_allocObject(&DAT_100ef07a8,0x20,7);
  uVar4 = *(undefined8 *)(*(long *)(lVar3 + 0x50) + 0x10);
  *(undefined8 *)(puVar1 + 0x10) = uVar4;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  _swift_errorRetain(param_1);
  pcVar2 = FUN_1006535ec;
  FUN_10064a9dc(FUN_1006535ec,puVar1,uVar4);
  _swift_release(puVar1);
  return pcVar2;
}



/* Address: 0x100650954 | FUN_100650954 */

void FUN_100650954(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  Optional OVar1;
  undefined7 extraout_var;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar2;
  
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar2 = CONCAT71(extraout_var,OVar1.value);
  lVar6 = *(long *)(lVar2 + -8);
  puVar4 = &stack0xffffffffffffffb0 + -(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar6 + 0x10))(puVar4,param_2,lVar2);
  lVar5 = *(long *)(param_4 + -8);
  puVar3 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,param_4);
  if ((int)puVar3 == 1) {
    (**(code **)(lVar6 + 8))(puVar4,lVar2);
    _swift_willThrow();
    _swift_errorRetain(param_3);
  }
  else {
    (**(code **)(lVar5 + 0x20))(param_1,puVar4,param_4);
  }
  return;
}



/* Address: 0x100650a3c | FUN_100650a3c */

code * FUN_100650a3c(undefined8 param_1)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  lVar4 = *(long *)(*(long *)(*unaff_x20 + 0x50) + 0x10);
  lVar6 = *(long *)(lVar4 + -8);
  lVar5 = *(long *)(lVar6 + 0x40);
  (**(code **)(lVar6 + 0x10))
            (&stack0xffffffffffffffc0 + -(lVar5 + 0xfU & 0xfffffffffffffff0),param_1,lVar4);
  uVar3 = (ulong)*(byte *)(lVar6 + 0x50);
  uVar7 = uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff);
  puVar1 = &DAT_100ef07d0;
  _swift_allocObject(&DAT_100ef07d0,uVar7 + lVar5,uVar3 | 7);
  *(long *)(puVar1 + 0x10) = lVar4;
  (**(code **)(lVar6 + 0x20))
            (puVar1 + uVar7,&stack0xffffffffffffffc0 + -(lVar5 + 0xfU & 0xfffffffffffffff0),lVar4);
  pcVar2 = FUN_100645f88;
  FUN_10064b138(FUN_100645f88,puVar1,lVar4);
  _swift_release(puVar1);
  return pcVar2;
}



/* Address: 0x100650b04 | thunk_FUN_100650b08 */

code * thunk_FUN_100650b08(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  long *unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *unaff_x20;
  puVar1 = &DAT_100ef07f8;
  _swift_allocObject(&DAT_100ef07f8,0x28,7);
  uVar4 = *(undefined8 *)(*(long *)(lVar3 + 0x50) + 0x10);
  *(undefined8 *)(puVar1 + 0x10) = uVar4;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  _swift_retain(param_2);
  pcVar2 = FUN_100645fa4;
  FUN_10064b138(FUN_100645fa4,puVar1,uVar4);
  _swift_release(puVar1);
  return pcVar2;
}



/* Address: 0x100650b08 | FUN_100650b08 */

code * FUN_100650b08(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  long *unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *unaff_x20;
  puVar1 = &DAT_100ef07f8;
  _swift_allocObject(&DAT_100ef07f8,0x28,7);
  uVar4 = *(undefined8 *)(*(long *)(lVar3 + 0x50) + 0x10);
  *(undefined8 *)(puVar1 + 0x10) = uVar4;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  _swift_retain(param_2);
  pcVar2 = FUN_100645fa4;
  FUN_10064b138(FUN_100645fa4,puVar1,uVar4);
  _swift_release(puVar1);
  return pcVar2;
}



/* Address: 0x100650b90 | FUN_100650b90 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

code * FUN_100650b90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 unaff_x20;
  
  puVar1 = &DAT_100ef0820;
  _swift_allocObject(&DAT_100ef0820,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = unaff_x20;
  *(undefined8 *)(puVar1 + 0x28) = param_2;
  *(undefined8 *)(puVar1 + 0x30) = param_3;
  _swift_retain();
  _swift_retain(param_3);
  pcVar2 = FUN_1006536ac;
  FUN_10064a5bc(FUN_1006536ac,puVar1,param_4);
  _swift_release(puVar1);
  return pcVar2;
}



/* Address: 0x100650c28 | FUN_100650c28 */

undefined8
FUN_100650c28(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  
  lVar7 = *(long *)(*param_3 + 0x50);
  lVar9 = *(long *)(lVar7 + -8);
  lVar8 = *(long *)(lVar9 + 0x40);
  puVar1 = (undefined8 *)((long)param_3 + *(long *)(*param_3 + 0x60));
  uVar4 = *puVar1;
  uVar2 = puVar1[1];
  local_68 = param_2;
  (**(code **)(lVar9 + 0x10))(auStack_70 + -(lVar8 + 0xfU & 0xfffffffffffffff0),param_1,lVar7);
  uVar5 = (ulong)*(byte *)(lVar9 + 0x50);
  uVar6 = uVar5 + 0x30 & (uVar5 ^ 0xffffffffffffffff);
  puVar3 = &DAT_100ef0c78;
  _swift_allocObject(&DAT_100ef0c78,uVar6 + lVar8,uVar5 | 7);
  *(long *)(puVar3 + 0x10) = lVar7;
  *(undefined8 *)(puVar3 + 0x18) = param_6;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  *(undefined8 *)(puVar3 + 0x28) = param_5;
  (**(code **)(lVar9 + 0x20))
            (puVar3 + uVar6,auStack_70 + -(lVar8 + 0xfU & 0xfffffffffffffff0),lVar7);
  _swift_retain(param_5);
  FUN_10063d200(uVar4,uVar2,FUN_100653d4c,puVar3,param_6);
  _swift_release(puVar3);
  return uVar4;
}



/* Address: 0x100650d34 | FUN_100650d34 */

void FUN_100650d34(void)

{
  FUN_1006511a4();
  return;
}



/* Address: 0x100650d50 | FUN_100650d50 */

void FUN_100650d50(undefined8 param_1,undefined8 param_2,undefined8 param_3,DispatchQoS param_4,
                  long param_5)

{
  DispatchWorkItemFlags DVar1;
  undefined *puVar2;
  void *aBlock;
  DispatchQoS DVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  DispatchWorkItemFlags qos;
  ulong uVar9;
  long lVar10;
  undefined8 local_c0;
  long local_b8;
  undefined *puStack_b0;
  long local_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  local_c0 = param_3;
  local_a0 = param_2;
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_a8 = *(long *)(DVar1.unknown + -8);
  lVar7 = (long)&local_c0 - (*(long *)(local_a8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puStack_b0 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_b8 = *(long *)(puStack_b0 + -8);
  qos.unknown = (undefined *)(lVar7 - (*(long *)(local_b8 + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar8 = *(long *)(param_5 + -8);
  lVar6 = *(long *)(lVar8 + 0x40);
  lVar10 = (long)qos.unknown - (lVar6 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar8 + 0x10))(lVar10,param_1,param_5);
  uVar5 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar9 = uVar5 + 0x28 & (uVar5 ^ 0xffffffffffffffff);
  puVar2 = &DAT_100ef0c28;
  _swift_allocObject(&DAT_100ef0c28,uVar9 + lVar6,uVar5 | 7);
  *(long *)(puVar2 + 0x10) = param_5;
  *(undefined8 *)(puVar2 + 0x18) = local_c0;
  *(undefined **)(puVar2 + 0x20) = param_4.unknown;
  (**(code **)(lVar8 + 0x20))(puVar2 + uVar9,lVar10,param_5);
  local_70 = FUN_100653cac;
  local_90 = PTR___NSConcreteStackBlock_100ea82a0;
  local_88 = 0x42000000;
  local_80 = FUN_100030410;
  puStack_78 = &DAT_100ef0c40;
  local_68 = puVar2;
  aBlock = __Block_copy(&local_90);
  _swift_retain();
  DVar3 = Dispatch::DispatchQoS::get_unspecified(param_4);
  local_98 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_10063d4d8();
  puVar2 = &DAT_100fd8270;
  FUN_1000f7830(&DAT_100fd8270,&DAT_100c6acd0);
  puVar4 = puVar2;
  FUN_10063d51c();
  Swift::SetAlgebra::_init(lVar7,&local_98,puVar2,puVar4,DVar1.unknown,DVar3.unknown);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(aBlock);
  (**(code **)(local_a8 + 8))(lVar7,DVar1.unknown);
  (**(code **)(local_b8 + 8))(qos.unknown,puStack_b0);
  _swift_release(local_68);
  return;
}



/* Address: 0x100650f5c | thunk_FUN_100650f60 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void thunk_FUN_100650f60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ef0870;
  _swift_allocObject(&DAT_100ef0870,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  _swift_retain(param_3);
  FUN_1006483a0(FUN_1006536f8,puVar1);
  _swift_release(puVar1);
  return;
}



/* Address: 0x100650f60 | FUN_100650f60 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100650f60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ef0870;
  _swift_allocObject(&DAT_100ef0870,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  _swift_retain(param_3);
  FUN_1006483a0(FUN_1006536f8,puVar1);
  _swift_release(puVar1);
  return;
}



/* Address: 0x100650fd8 | FUN_100650fd8 */

void FUN_100650fd8(DispatchQoS param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  DispatchWorkItemFlags DVar1;
  DispatchQoS DVar2;
  undefined *puVar3;
  void *aBlock;
  DispatchQoS DVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_a0 [8];
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar8 = *(long *)(DVar1.unknown + -8);
  puVar7 = auStack_a0 + -(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  DVar2 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar9 = *(long *)(DVar2.unknown + -8);
  lVar6 = *(long *)(lVar9 + 0x40);
  puVar3 = &DAT_100ef0bd8;
  _swift_allocObject(&DAT_100ef0bd8,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  *(undefined **)(puVar3 + 0x20) = param_1.unknown;
  local_70 = FUN_100653c20;
  local_90 = PTR___NSConcreteStackBlock_100ea82a0;
  local_88 = 0x42000000;
  local_80 = FUN_100030410;
  puStack_78 = &DAT_100ef0bf0;
  local_68 = puVar3;
  aBlock = __Block_copy(&local_90);
  _swift_retain(param_4);
  _swift_errorRetain();
  DVar4 = Dispatch::DispatchQoS::get_unspecified(param_1);
  local_98 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_10063d4d8();
  puVar3 = &DAT_100fd8270;
  FUN_1000f7830(&DAT_100fd8270,&DAT_100c6acd0);
  puVar5 = puVar3;
  FUN_10063d51c();
  Swift::SetAlgebra::_init(puVar7,&local_98,puVar3,puVar5,DVar1.unknown,DVar4.unknown);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async
            ((DispatchQoS)0x0,(DispatchWorkItemFlags)(puVar7 + -(lVar6 + 0xfU & 0xfffffffffffffff0))
            );
  __Block_release(aBlock);
  (**(code **)(lVar8 + 8))(puVar7,DVar1.unknown);
  (**(code **)(lVar9 + 8))(puVar7 + -(lVar6 + 0xfU & 0xfffffffffffffff0),DVar2.unknown);
  _swift_release(local_68);
  return;
}



/* Address: 0x100651188 | FUN_100651188 */

void FUN_100651188(void)

{
  FUN_1006511a4();
  return;
}



/* Address: 0x1006511a4 | FUN_1006511a4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1006511a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,code *param_6)

{
  long *unaff_x20;
  long lVar1;
  
  lVar1 = *unaff_x20;
  _swift_allocObject(param_4,0x30,7);
  *(undefined8 *)(param_4 + 0x10) = *(undefined8 *)(lVar1 + 0x50);
  *(undefined8 *)(param_4 + 0x18) = param_1;
  *(undefined8 *)(param_4 + 0x20) = param_2;
  *(undefined8 *)(param_4 + 0x28) = param_3;
  _swift_retain(param_3);
  (*param_6)(param_5,param_4);
  _swift_release(param_4);
  return;
}



/* Address: 0x10065122c | FUN_10065122c */

void FUN_10065122c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5)

{
  Result RVar1;
  DispatchWorkItemFlags DVar2;
  undefined7 extraout_var;
  undefined *puVar4;
  void *aBlock;
  DispatchQoS DVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  DispatchWorkItemFlags qos;
  long lVar12;
  undefined1 auStack_d0 [8];
  undefined8 local_c8;
  undefined *local_c0;
  long local_b8;
  undefined *puStack_b0;
  long local_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  long lVar3;
  
  local_c8 = param_3;
  local_c0 = param_4;
  local_a0 = param_2;
  DVar2 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_a8 = *(long *)(DVar2.unknown + -8);
  puVar10 = auStack_d0 + -(*(long *)(local_a8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puStack_b0 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_b8 = *(long *)(puStack_b0 + -8);
  qos.unknown = puVar10 + -(*(long *)(local_b8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  RVar1 = Swift::Result::typeMetadataAccessor();
  lVar3 = CONCAT71(extraout_var,RVar1.value);
  lVar11 = *(long *)(lVar3 + -8);
  lVar12 = *(long *)(lVar11 + 0x40);
  lVar9 = (long)qos.unknown - (lVar12 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar11 + 0x10))(lVar9,param_1,lVar3);
  uVar7 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar8 = uVar7 + 0x28 & (uVar7 ^ 0xffffffffffffffff);
  puVar4 = &DAT_100ef0b88;
  _swift_allocObject(&DAT_100ef0b88,uVar8 + lVar12,uVar7 | 7);
  DVar5.unknown = local_c0;
  *(undefined8 *)(puVar4 + 0x10) = param_5;
  *(undefined8 *)(puVar4 + 0x18) = local_c8;
  *(undefined **)(puVar4 + 0x20) = local_c0;
  (**(code **)(lVar11 + 0x20))(puVar4 + uVar8,lVar9,lVar3);
  local_70 = FUN_100653b90;
  local_90 = PTR___NSConcreteStackBlock_100ea82a0;
  local_88 = 0x42000000;
  local_80 = FUN_100030410;
  puStack_78 = &DAT_100ef0ba0;
  local_68 = puVar4;
  aBlock = __Block_copy(&local_90);
  _swift_retain();
  DVar5 = Dispatch::DispatchQoS::get_unspecified(DVar5);
  local_98 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_10063d4d8();
  puVar4 = &DAT_100fd8270;
  FUN_1000f7830(&DAT_100fd8270,&DAT_100c6acd0);
  puVar6 = puVar4;
  FUN_10063d51c();
  Swift::SetAlgebra::_init(puVar10,&local_98,puVar4,puVar6,DVar2.unknown,DVar5.unknown);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(aBlock);
  (**(code **)(local_a8 + 8))(puVar10,DVar2.unknown);
  (**(code **)(local_b8 + 8))(qos.unknown,puStack_b0);
  _swift_release(local_68);
  return;
}



/* Address: 0x100651468 | FUN_100651468 */

void FUN_100651468(void)

{
  FUN_1006514b8();
  return;
}



/* Address: 0x10065147c | FUN_10065147c */

void FUN_10065147c(void)

{
  FUN_1006514b8();
  return;
}



/* Address: 0x100651490 | FUN_100651490 */

void FUN_100651490(void)

{
  FUN_1006514b8();
  return;
}



/* Address: 0x1006514a4 | FUN_1006514a4 */

void FUN_1006514a4(void)

{
  FUN_1006514b8();
  return;
}



/* Address: 0x1006514b8 | FUN_1006514b8 */

undefined8
FUN_1006514b8(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             long param_5,undefined8 param_6)

{
  long *unaff_x20;
  long lVar1;
  
  lVar1 = *unaff_x20;
  _swift_allocObject(param_5,0x38,7);
  *(undefined8 *)(param_5 + 0x10) = *(undefined8 *)(lVar1 + 0x50);
  *(undefined8 *)(param_5 + 0x18) = param_1;
  *(undefined8 *)(param_5 + 0x20) = param_2;
  *(undefined1 *)(param_5 + 0x28) = param_3;
  *(undefined8 *)(param_5 + 0x30) = param_4;
  FUN_10065354c(param_6,param_5);
  _swift_retain();
  _swift_release(param_5);
  return param_6;
}



/* Address: 0x100651548 | FUN_100651548 */

void FUN_100651548(undefined8 param_1)

{
  FUN_1006499b0(0,0,param_1,thunk_FUN_100630328,&DAT_100ef0d68,thunk_FUN_100652fc4);
  return;
}



/* Address: 0x100651580 | FUN_100651580 */

void FUN_100651580(long param_1)

{
  long lVar1;
  long *unaff_x20;
  
  if (param_1 == 0) {
    return;
  }
  lVar1 = *unaff_x20;
  if (lVar1 != 0) {
    _swift_retain();
    _swift_retain(lVar1);
    FUN_100648698(param_1);
    _swift_release(lVar1);
    _swift_release(param_1);
    return;
  }
  *unaff_x20 = param_1;
  _swift_retain();
  return;
}



/* Address: 0x1006515f8 | FUN_1006515f8 */

undefined * FUN_1006515f8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  size_t sVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1006516e8);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  sVar6 = *(size_t *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)sVar6) {
    uVar5 = sVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fd6f20;
    FUN_1000f7830(&DAT_100fd6f20,&DAT_100c67910);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(size_t *)(puVar3 + 0x10) = sVar6;
    *(long *)(puVar3 + 0x18) = (long)puVar4 * 2 + -0x40;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar4,puVar1,sVar6);
  }
  else {
    if (puVar3 != param_4 || puVar1 + sVar6 <= puVar4) {
      _memmove(puVar4,puVar1,sVar6);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x1006516e8 | FUN_1006516e8 */

undefined * FUN_1006516e8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100651830);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar6 != 0) {
    puVar3 = &DAT_100fd8708;
    FUN_1000f7830(&DAT_100fd8708,&DAT_100c6acc0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x48) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100fd4db0;
    FUN_1000f7830(&DAT_100fd4db0,&DAT_100c659e0);
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x48 <= puVar4) {
      _memmove(puVar4,puVar1,uVar7 * 0x48);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x100651830 | FUN_100651830 */

undefined * FUN_100651830(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100651930);
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
    puVar3 = &DAT_100fd7868;
    FUN_1000f7830(&DAT_100fd7868,&DAT_100c69440);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar1,puVar4,uVar6 << 3);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 8 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x100651930 | FUN_100651930 */

undefined * FUN_100651930(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100651a70);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar6 != 0) {
    puVar3 = &DAT_100fd8738;
    FUN_1000f7830(&DAT_100fd8738,&DAT_100c6ad08);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100fd4ee8;
    FUN_1000f7830(&DAT_100fd4ee8,&DAT_100c6ad00);
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x18 <= puVar4) {
      _memmove(puVar4,puVar1,uVar7 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x100651a70 | FUN_100651a70 */

undefined * FUN_100651a70(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100651bb0);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x0;
    FUN_100653edc();
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x58) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100fd7538;
    FUN_1000f7830(&DAT_100fd7538,&DAT_100c68bf0);
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x58 <= puVar4) {
      _memmove(puVar4,puVar1,uVar7 * 0x58);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x100651bb0 | FUN_100651bb0 */

undefined * FUN_100651bb0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100651cb0);
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
    puVar3 = &DAT_100fd8740;
    FUN_1000f7830(&DAT_100fd8740,&DAT_100c6ad10);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar1,puVar4,uVar6 << 3);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 8 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x100651cb0 | FUN_100651cb0 */

undefined * FUN_100651cb0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100651db8);
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
    puVar3 = &DAT_100fd7848;
    FUN_1000f7830(&DAT_100fd7848,&DAT_100c69428);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,&DAT_100eede50);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x20 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x100651db8 | thunk_FUN_100651dbc */

undefined * thunk_FUN_100651dbc(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100651eec);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar6 != 0) {
    puVar3 = &DAT_100fd8718;
    FUN_1000f7830(&DAT_100fd8718,&DAT_100c6ace0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100fd8710;
    FUN_1000f7830(&DAT_100fd8710,&DAT_100c6acd8);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x100651dbc | FUN_100651dbc */

undefined * FUN_100651dbc(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100651eec);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar6 != 0) {
    puVar3 = &DAT_100fd8718;
    FUN_1000f7830(&DAT_100fd8718,&DAT_100c6ace0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100fd8710;
    FUN_1000f7830(&DAT_100fd8710,&DAT_100c6acd8);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x100651eec | FUN_100651eec */

void FUN_100651eec(long param_1)

{
  FUN_1006516e8(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x100651f00 | FUN_100651f00 */

void FUN_100651f00(long param_1)

{
  FUN_100651930(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x100651f14 | FUN_100651f14 */

void FUN_100651f14(long param_1)

{
  FUN_100651dbc(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x100651f38 | FUN_100651f38 */

void FUN_100651f38(ulong *param_1,ulong *param_2,ulong param_3,ulong param_4,ulong param_5,
                  ulong param_6,undefined8 param_7)

{
  undefined1 uVar1;
  undefined2 uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = (undefined1)((ulong)param_7 >> 0x30);
  uVar2 = (undefined2)((ulong)param_7 >> 0x20);
  if (param_2 == (ulong *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = param_3;
    if (param_3 != 0) {
      if ((long)param_3 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100652044);
        (*pcVar3)();
      }
      uVar4 = param_4;
      if (param_4 != 0) {
        uVar5 = 0;
        do {
          if ((param_4 & ((long)param_4 >> 0x3f ^ 0xffffffffffffffffU)) == uVar5) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100652040);
            (*pcVar3)();
          }
          *param_2 = param_5;
          param_2[1] = param_6;
          *(int *)(param_2 + 2) = (int)param_7;
          *(undefined1 *)((long)param_2 + 0x16) = uVar1;
          *(undefined2 *)((long)param_2 + 0x14) = uVar2;
          if (param_3 - 1 == uVar5) {
            _swift_retain(param_5);
            uVar4 = param_3;
            break;
          }
          param_2 = param_2 + 3;
          _swift_retain(param_5);
          uVar5 = uVar5 + 1;
        } while (param_4 != uVar5);
      }
    }
  }
  *param_1 = param_4;
  param_1[1] = param_5;
  param_1[2] = param_6;
  *(int *)(param_1 + 3) = (int)param_7;
  *(undefined1 *)((long)param_1 + 0x1e) = uVar1;
  *(undefined2 *)((long)param_1 + 0x1c) = uVar2;
  param_1[4] = uVar4;
  return;
}



/* Address: 0x100652044 | FUN_100652044 */

void FUN_100652044(undefined8 param_1,undefined8 *param_2,code *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = *param_2;
  uVar2 = (ulong)*(byte *)(param_2 + 1);
  (*param_3)(uVar1,uVar2);
  FUN_1006486f8();
  FUN_100004550(uVar1,uVar2);
  _swift_bridgeObjectRelease(param_3);
  return;
}



/* Address: 0x100652094 | FUN_100652094 */

void FUN_100652094(undefined8 param_1)

{
  Result RVar1;
  undefined7 extraout_var;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar2;
  
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  RVar1 = Swift::Result::typeMetadataAccessor();
  lVar2 = CONCAT71(extraout_var,RVar1.value);
  lVar5 = *(long *)(lVar2 + -8);
  puVar4 = (undefined8 *)
           (&stack0xffffffffffffffd0 + -(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar5 + 0x10))(puVar4,param_1,lVar2);
  puVar3 = puVar4;
  _swift_getEnumCaseMultiPayload(puVar4,lVar2);
  if ((int)puVar3 == 1) {
    _swift_errorRelease(*puVar4);
  }
  else {
    (**(code **)(lVar5 + 8))(puVar4,lVar2);
  }
  return;
}



/* Address: 0x100652150 | FUN_100652150 */

void FUN_100652150(undefined8 param_1)

{
  code *pcVar1;
  Result RVar2;
  undefined7 extraout_var;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar3;
  
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  RVar2 = Swift::Result::typeMetadataAccessor();
  lVar3 = CONCAT71(extraout_var,RVar2.value);
  lVar6 = *(long *)(lVar3 + -8);
  puVar5 = &stack0xffffffffffffffd0 + -(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar6 + 0x10))(puVar5,param_1,lVar3);
  puVar4 = puVar5;
  _swift_getEnumCaseMultiPayload(puVar5,lVar3);
  if ((int)puVar4 != 1) {
    (**(code **)(lVar6 + 8))(puVar5,lVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100652204);
  (*pcVar1)();
}



/* Address: 0x100652204 | FUN_100652204 */

void FUN_100652204(undefined8 param_1)

{
  code *pcVar1;
  Result RVar2;
  undefined7 extraout_var;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar3;
  
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  RVar2 = Swift::Result::typeMetadataAccessor();
  lVar3 = CONCAT71(extraout_var,RVar2.value);
  lVar6 = *(long *)(lVar3 + -8);
  puVar5 = &stack0xffffffffffffffd0 + -(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar6 + 0x10))(puVar5,param_1,lVar3);
  puVar4 = puVar5;
  _swift_getEnumCaseMultiPayload(puVar5,lVar3);
  (**(code **)(lVar6 + 8))(puVar5,lVar3);
  if ((int)puVar4 == 1) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006522bc);
  (*pcVar1)();
}



/* Address: 0x1006522bc | FUN_1006522bc */

void FUN_1006522bc(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *unaff_x20;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  
  lVar7 = *unaff_x20;
  lVar8 = *(long *)(lVar7 + 0x10);
  if (SCARRY8(lVar8,param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006524dc);
    (*pcVar1)();
  }
  lVar3 = lVar7;
  _swift_isUniquelyReferenced_nonNull_native();
  *unaff_x20 = lVar7;
  if (((int)lVar3 == 0) ||
     (uVar4 = *(ulong *)(lVar7 + 0x18) >> 1, (long)uVar4 < (long)(lVar8 + param_1))) {
    FUN_100624f24();
    lVar7 = *unaff_x20;
    uVar4 = *(ulong *)(lVar7 + 0x18) >> 1;
  }
  uVar9 = *(ulong *)(lVar7 + 0x10);
  uVar5 = uVar4 - uVar9;
  if (uVar5 == 0) {
    if (0 < (long)param_1) {
LAB_1006524dc:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006524e0);
      (*pcVar1)();
    }
LAB_1006523a8:
    uVar4 = 0;
    if (uVar5 != 0) goto LAB_1006524ac;
  }
  else {
    if (param_1 == 0) goto LAB_1006523a8;
    uVar11 = param_1 & ((long)param_1 >> 0x3f ^ 0xffffffffffffffffU);
    lVar8 = ~uVar9 + uVar4;
    uVar6 = param_1;
    puVar12 = (undefined8 *)(lVar7 + uVar9 * 0x10 + 0x20);
    do {
      if (uVar11 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1006524d8);
        (*pcVar1)();
      }
      *puVar12 = param_2;
      puVar12[1] = param_3;
      if (lVar8 == 0) {
        FUN_100011128(param_2,param_3);
        uVar4 = uVar5;
        if ((long)uVar5 < (long)param_1) goto LAB_1006524dc;
        break;
      }
      FUN_100011128(param_2,param_3);
      uVar11 = uVar11 - 1;
      lVar8 = lVar8 + -1;
      uVar6 = uVar6 - 1;
      uVar4 = param_1;
      puVar12 = puVar12 + 2;
    } while (uVar6 != 0);
    bVar2 = SCARRY8(uVar9,uVar4);
    uVar9 = uVar9 + uVar4;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006524e8);
      (*pcVar1)();
    }
    *(ulong *)(lVar7 + 0x10) = uVar9;
    if (uVar4 != uVar5) goto LAB_1006524ac;
  }
  if (uVar4 != param_1) {
    if ((long)param_1 <= (long)uVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006524e4);
      (*pcVar1)();
    }
    FUN_100011128(param_2,param_3);
    uVar4 = uVar5 + 1;
    do {
      if ((long)(*(ulong *)(lVar7 + 0x18) >> 1) < (long)(uVar9 + 1)) {
        FUN_100624f24(1 < *(ulong *)(lVar7 + 0x18),uVar9 + 1,1);
      }
      lVar7 = *unaff_x20;
      uVar6 = *(ulong *)(lVar7 + 0x18) >> 1;
      lVar8 = uVar6 - uVar9;
      uVar5 = uVar4;
      if (uVar9 <= uVar6 && lVar8 != 0) {
        uVar5 = (uVar4 + uVar6) - uVar9;
        puVar12 = (undefined8 *)(lVar7 + uVar9 * 0x10 + 0x28);
        uVar10 = ~uVar9;
        uVar11 = uVar4;
        do {
          puVar12[-1] = param_2;
          *puVar12 = param_3;
          if (param_1 == uVar11) {
            *(ulong *)(lVar7 + 0x10) = -uVar10;
            goto LAB_1006524ac;
          }
          if (((long)uVar4 < 0) || ((long)param_1 <= (long)uVar11)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1006524d4);
            (*pcVar1)();
          }
          uVar11 = uVar11 + 1;
          FUN_100011128(param_2,param_3);
          puVar12 = puVar12 + 2;
          uVar10 = uVar10 - 1;
          lVar8 = lVar8 + -1;
          uVar9 = uVar6;
        } while (lVar8 != 0);
      }
      *(ulong *)(lVar7 + 0x10) = uVar9;
      uVar4 = uVar5;
    } while( true );
  }
LAB_1006524ac:
  *unaff_x20 = lVar7;
  return;
}



/* Address: 0x1006524e8 | FUN_1006524e8 */

void FUN_1006524e8(ulong param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong local_68;
  ulong local_58;
  
  local_68 = param_1;
  FUN_1006472a4();
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 != 0) {
    puVar7 = (undefined8 *)(param_1 + 0x28);
    local_58 = param_3;
    do {
      uVar2 = puVar7[-1];
      uVar3 = *puVar7;
      _swift_retain_n(uVar3,2);
      uVar5 = local_68;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar5 & 1) == 0) {
        FUN_100651f14();
      }
      if ((long)local_58 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1006525e4);
        (*pcVar4)();
      }
      if (*(ulong *)(local_68 + 0x10) <= local_58) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1006525e8);
        (*pcVar4)();
      }
      lVar1 = local_68 + local_58 * 0x10;
      FUN_100004550(*(undefined8 *)(lVar1 + 0x20),*(undefined8 *)(lVar1 + 0x28));
      *(undefined8 *)(lVar1 + 0x20) = uVar2;
      *(undefined8 *)(lVar1 + 0x28) = uVar3;
      local_58 = *(long *)(local_68 + 0x10) + 0x7fffffffffffffffU & local_58 + 1;
      if (param_2 == local_58) {
        FUN_1006476b8();
      }
      puVar7 = puVar7 + 2;
      _swift_release(uVar3);
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



/* Address: 0x1006525e8 | FUN_1006525e8 */

void FUN_1006525e8(undefined8 param_1,long param_2,ulong param_3,ulong param_4,code *param_5)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  long *unaff_x20;
  long lVar6;
  long lVar7;
  
  param_4 = param_4 >> 1;
  lVar1 = param_4 - param_3;
  if (SBORROW8(param_4,param_3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100652700);
    (*pcVar2)();
  }
  lVar6 = *unaff_x20;
  lVar7 = *(long *)(lVar6 + 0x10);
  if (!SCARRY8(lVar7,lVar1)) {
    lVar3 = lVar6;
    _swift_isUniquelyReferenced_nonNull_native();
    *unaff_x20 = lVar6;
    if (((int)lVar3 == 0) || (uVar5 = *(ulong *)(lVar6 + 0x18) >> 1, (long)uVar5 < lVar7 + lVar1)) {
      (*param_5)();
      lVar6 = *unaff_x20;
      uVar5 = *(ulong *)(lVar6 + 0x18) >> 1;
    }
    if (param_3 == param_4) {
      if (0 < lVar1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100652660);
        (*pcVar2)();
      }
    }
    else {
      lVar7 = *(long *)(lVar6 + 0x10);
      if ((long)(uVar5 - lVar7) < lVar1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100652714);
        (*pcVar2)();
      }
      puVar4 = &DAT_100fd8710;
      FUN_1000f7830(&DAT_100fd8710,&DAT_100c6acd8);
      _swift_arrayInitWithCopy(lVar6 + lVar7 * 0x10 + 0x20,param_2 + param_3 * 0x10,lVar1,puVar4);
      if (0 < lVar1) {
        if (SCARRY8(*(long *)(lVar6 + 0x10),lVar1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100652718);
          (*pcVar2)();
        }
        *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + lVar1;
      }
    }
    *unaff_x20 = lVar6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100652704);
  (*pcVar2)();
}



/* Address: 0x100652718 | FUN_100652718 */

void FUN_100652718(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong *unaff_x20;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar8 = *(long *)(param_1 + 0x10);
  if (lVar8 != 0) {
    puVar9 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar6 = *puVar9;
      uVar12 = *puVar9;
      uVar11 = puVar9[-1];
      uVar10 = unaff_x20[2];
      uVar7 = *unaff_x20;
      _swift_retain_n(uVar6,2);
      uVar5 = uVar7;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar5 & 1) == 0) {
        FUN_100651f14();
      }
      if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100652804);
        (*pcVar4)();
      }
      if (*(ulong *)(uVar7 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100652808);
        (*pcVar4)();
      }
      lVar1 = uVar7 + uVar10 * 0x10;
      uVar2 = *(undefined8 *)(lVar1 + 0x20);
      uVar3 = *(undefined8 *)(lVar1 + 0x28);
      *(undefined8 *)(lVar1 + 0x28) = uVar12;
      *(undefined8 *)(lVar1 + 0x20) = uVar11;
      FUN_100004550(uVar2,uVar3);
      *unaff_x20 = uVar7;
      uVar5 = *(long *)(uVar7 + 0x10) + 0x7fffffffffffffffU & uVar10 + 1;
      unaff_x20[2] = uVar5;
      if (unaff_x20[1] == uVar5) {
        FUN_100647310();
      }
      puVar9 = puVar9 + 2;
      _swift_release(uVar6);
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}



/* Address: 0x100652808 | FUN_100652808 */

void FUN_100652808(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  Result RVar2;
  undefined7 extraout_var;
  long *unaff_x20;
  long lVar3;
  
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x60));
  *puVar1 = param_1;
  puVar1[1] = param_2;
  lVar3 = *(long *)(*unaff_x20 + 0x58);
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  RVar2 = Swift::Result::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,RVar2.value) + -8) + 0x38))
            ((long)unaff_x20 + lVar3,1,1,CONCAT71(extraout_var,RVar2.value));
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x68));
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  return;
}



/* Address: 0x1006528a4 | FUN_1006528a4 */

void FUN_1006528a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1006529e0(0,param_3);
  _swift_allocObject();
  FUN_100652808(param_1,param_2,uVar1);
  return;
}



/* Address: 0x1006528f0 | thunk_FUN_1006528a4 */

void thunk_FUN_1006528a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1006529e0(0,param_3);
  _swift_allocObject();
  FUN_100652808(param_1,param_2,uVar1);
  return;
}



/* Address: 0x1006528f4 | FUN_1006528f4 */

void FUN_1006528f4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100646f54(param_1,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1006528fc | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  FUN_100049040();
  return;
}



/* Address: 0x100652900 | FUN_100652900 */

undefined8 FUN_100652900(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1006528a4();
  _swift_unknownObjectRetain(param_1);
  return uVar1;
}



/* Address: 0x100652930 | FUN_100652930 */

void FUN_100652930(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x100652954 | FUN_100652954 */

void FUN_100652954(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10064cb5c(param_1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x10065295c | thunk_FUN_100645ecc */

void thunk_FUN_100645ecc(void)

{
  FUN_100645ecc();
  return;
}



/* Address: 0x100652960 | FUN_100652960 */

void FUN_100652960(void)

{
  long unaff_x20;
  
  FUN_10064b458(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x10065296c | FUN_10065296c */

void FUN_10065296c(void)

{
  long unaff_x20;
  
  FUN_10064bbbc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}


