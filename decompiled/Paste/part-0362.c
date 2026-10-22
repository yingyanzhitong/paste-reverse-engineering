/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10046d1f4 | FUN_10046d1f4 */

undefined8 FUN_10046d1f4(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  Date DVar4;
  undefined *puVar5;
  UUID UVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  long extraout_x8;
  long extraout_x8_00;
  long lVar14;
  long extraout_x8_01;
  ulong uVar15;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar16;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar17;
  code *pcVar18;
  ulong local_100;
  ulong *local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  undefined *local_d0;
  undefined *local_c8;
  long local_c0;
  long local_b8;
  undefined *local_b0;
  long local_a8;
  long local_a0;
  ulong local_98;
  long local_90;
  long local_88;
  ulong local_80;
  long local_78;
  long local_70;
  
  DVar4 = Foundation::Date::typeMetadataAccessor();
  local_a0 = *(long *)(DVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_a0 + 0x40));
  lVar14 = (long)&local_100 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100fc8160;
  local_e8 = lVar14;
  FUN_1000037f0(&DAT_100fc8160,&DAT_100c4cdc0);
  local_b0 = puVar5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = lVar14 - extraout_x8_00;
  puVar5 = &DAT_100fc7df8;
  local_b8 = lVar14;
  FUN_1000037f0(&DAT_100fc7df8,&DAT_100c4c890);
  local_88 = *(long *)(puVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_88 + 0x40));
  lVar14 = lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar16 = lVar14 - extraout_x12;
  local_70 = lVar16;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  uVar15 = lVar16 - extraout_x12_00;
  local_98 = uVar15;
  UVar6 = Foundation::UUID::typeMetadataAccessor();
  local_78 = *(long *)(UVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_78 + 0x40));
  lVar16 = uVar15 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100fc84a0;
  local_a8 = lVar16;
  FUN_1000037f0(&DAT_100fc84a0,&DAT_100c4cfd8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  lVar16 = lVar16 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_90 = lVar16 - extraout_x12_01;
  if (param_1 == param_2) {
    uVar12 = 1;
  }
  else {
    if (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10)) {
      local_f8 = (ulong *)(param_1 + 0x40);
      uVar15 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      local_80 = 0xffffffffffffffff;
      if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
        local_80 = ~(-1L << (uVar15 & 0x3f));
      }
      local_80 = local_80 & *local_f8;
      local_100 = uVar15 + 0x3f >> 6;
      local_f0 = lVar14;
      local_d8 = param_1;
      local_c8 = UVar6.unknown;
      _swift_bridgeObjectRetain(param_1);
      local_c0 = param_2;
      _swift_bridgeObjectRetain(param_2);
      lVar14 = 0;
      local_e0 = lVar16;
      local_d0 = DVar4.unknown;
LAB_10046d454:
      do {
        lVar9 = local_90;
        puVar5 = local_c8;
        lVar8 = local_d8;
        lVar16 = local_e0;
        puVar7 = &DAT_100fc84a8;
        if (local_80 == 0) {
          uVar15 = local_100;
          if ((long)local_100 <= lVar14 + 1) {
            uVar15 = lVar14 + 1;
          }
          lVar17 = uVar15 - 1;
          lVar10 = lVar14;
          do {
            lVar14 = lVar10 + 1;
            if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)SoftwareBreakpoint(1,0x10046d8f4);
              (*pcVar18)();
            }
            if ((long)local_100 <= lVar14) {
              puVar11 = puVar7;
              FUN_1000037f0(&DAT_100fc84a8,&DAT_100c4cfe0);
              (**(code **)(*(long *)(puVar11 + -8) + 0x38))(lVar16,1,1,puVar11);
              local_80 = 0;
              goto LAB_10046d54c;
            }
            uVar15 = local_f8[lVar14];
            lVar10 = lVar10 + 1;
          } while (uVar15 == 0);
          uVar13 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
          uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
          uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
          uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
          local_80 = uVar15 - 1 & uVar15;
          uVar15 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | lVar14 * 0x40;
        }
        else {
          uVar15 = (local_80 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_80 & 0x5555555555555555) << 1;
          uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
          uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
          uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
          local_80 = local_80 - 1 & local_80;
          uVar15 = LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) | lVar14 << 6;
        }
        (**(code **)(local_78 + 0x10))
                  (local_e0,*(long *)(local_d8 + 0x30) + *(long *)(local_78 + 0x48) * uVar15,
                   local_c8);
        puVar11 = puVar7;
        FUN_1000037f0(&DAT_100fc84a8,&DAT_100c4cfe0);
        FUN_100011090(*(long *)(lVar8 + 0x38) + *(long *)(local_88 + 0x48) * uVar15,
                      lVar16 + *(int *)(puVar11 + 0x30),&DAT_100fc7df8,&DAT_100c4c890);
        (**(code **)(*(long *)(puVar11 + -8) + 0x38))(lVar16,0,1,puVar11);
        lVar17 = lVar14;
        lVar9 = local_90;
LAB_10046d54c:
        FUN_10019ffdc(lVar16,lVar9,&DAT_100fc84a0,&DAT_100c4cfd8);
        FUN_1000037f0(&DAT_100fc84a8,&DAT_100c4cfe0);
        lVar8 = lVar9;
        (**(code **)(*(long *)(puVar7 + -8) + 0x30))(lVar9,1,puVar7);
        lVar16 = local_78;
        lVar14 = local_a8;
        if ((int)lVar8 == 1) {
          _swift_bridgeObjectRelease(local_d8);
          _swift_bridgeObjectRelease(local_c0);
          return 1;
        }
        iVar1 = *(int *)(puVar7 + 0x30);
        (**(code **)(local_78 + 0x20))(local_a8,lVar9,puVar5);
        uVar15 = local_98;
        uVar13 = local_98;
        FUN_10019ffdc(lVar9 + iVar1,local_98,&DAT_100fc7df8,&DAT_100c4c890);
        lVar8 = local_c0;
        lVar9 = lVar14;
        FUN_1004647d0(lVar14);
        (**(code **)(lVar16 + 8))(lVar14,puVar5);
        lVar14 = local_70;
        if ((uVar13 & 1) == 0) {
          _swift_bridgeObjectRelease(lVar8);
          _swift_bridgeObjectRelease(local_d8);
          FUN_100005808(uVar15,&DAT_100fc7df8,&DAT_100c4c890);
          goto LAB_10046d8cc;
        }
        FUN_100011090(*(long *)(lVar8 + 0x38) + *(long *)(local_88 + 0x48) * lVar9,local_70,
                      &DAT_100fc7df8,&DAT_100c4c890);
        lVar9 = local_b8;
        lVar16 = (long)*(int *)(local_b0 + 0x30);
        FUN_100011090(lVar14,local_b8,&DAT_100fc7df8,&DAT_100c4c890);
        FUN_100011090(uVar15,lVar9 + lVar16,&DAT_100fc7df8,&DAT_100c4c890);
        puVar5 = local_d0;
        pcVar18 = *(code **)(local_a0 + 0x30);
        lVar10 = lVar9;
        (*pcVar18)(lVar9,1,local_d0);
        lVar8 = local_f0;
        lVar14 = lVar17;
        if ((int)lVar10 == 1) {
          FUN_100005808(local_70,&DAT_100fc7df8,&DAT_100c4c890);
          FUN_100005808(uVar15,&DAT_100fc7df8,&DAT_100c4c890);
          lVar16 = lVar9 + lVar16;
          (*pcVar18)(lVar16,1,puVar5);
          if ((int)lVar16 != 1) {
            _swift_bridgeObjectRelease(local_c0);
            _swift_bridgeObjectRelease(local_d8);
LAB_10046d8a0:
            FUN_100005808(lVar9,&DAT_100fc8160,&DAT_100c4cdc0);
            goto LAB_10046d8cc;
          }
          FUN_100005808(lVar9,&DAT_100fc7df8,&DAT_100c4c890);
          goto LAB_10046d454;
        }
        FUN_100011090(lVar9,local_f0,&DAT_100fc7df8,&DAT_100c4c890);
        lVar10 = lVar9 + lVar16;
        (*pcVar18)(lVar10,1,puVar5);
        lVar2 = local_a0;
        lVar17 = local_e8;
        if ((int)lVar10 == 1) {
          _swift_bridgeObjectRelease(local_c0);
          _swift_bridgeObjectRelease(local_d8);
          FUN_100005808(local_70,&DAT_100fc7df8,&DAT_100c4c890);
          FUN_100005808(local_98,&DAT_100fc7df8,&DAT_100c4c890);
          (**(code **)(local_a0 + 8))(lVar8,puVar5);
          goto LAB_10046d8a0;
        }
        lVar10 = local_e8;
        (**(code **)(local_a0 + 0x20))(local_e8,lVar9 + lVar16,puVar5);
        FUN_10046ded8();
        bVar3 = Swift::Equatable::___infix(lVar8,lVar17,puVar5,lVar10);
        pcVar18 = *(code **)(lVar2 + 8);
        (*pcVar18)(lVar17,puVar5);
        FUN_100005808(local_70,&DAT_100fc7df8,&DAT_100c4c890);
        FUN_100005808(local_98,&DAT_100fc7df8,&DAT_100c4c890);
        (*pcVar18)(lVar8,puVar5);
        FUN_100005808(lVar9,&DAT_100fc7df8,&DAT_100c4c890);
      } while (bVar3);
      _swift_bridgeObjectRelease(local_c0);
      _swift_bridgeObjectRelease(local_d8);
    }
LAB_10046d8cc:
    uVar12 = 0;
  }
  return uVar12;
}



/* Address: 0x10046d8f4 | FUN_10046d8f4 */

void FUN_10046d8f4(long param_1,uint param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  StaticString file;
  __uint64 line;
  undefined *puVar4;
  UUID UVar5;
  undefined *puVar6;
  char *pcVar7;
  uint uVar8;
  undefined1 *puVar9;
  _StringGuts _Var10;
  char *pcVar11;
  long lVar12;
  long extraout_x8;
  undefined1 *puVar13;
  long extraout_x8_00;
  long lVar14;
  long extraout_x8_01;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  code *pcVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  undefined8 uStack_d0;
  undefined4 auStack_c8 [2];
  undefined1 auStack_c0 [8];
  StaticString local_70;
  __uint64 _Stack_68;
  undefined *local_58;
  
  puVar4 = &DAT_100fc7df8;
  FUN_1000037f0(&DAT_100fc7df8,&DAT_100c4c890);
  lVar12 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar13 = auStack_c0 + -extraout_x8;
  UVar5 = Foundation::UUID::typeMetadataAccessor();
  lVar22 = *(long *)(UVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar22 + 0x40));
  uVar21 = (long)puVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100fc8370;
  FUN_1000037f0(&DAT_100fc8370,&DAT_100c4cee0);
  lVar14 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar23 = uVar21 - extraout_x8_01;
  uVar15 = *(ulong *)(param_1 + 0x10);
  if (uVar15 == 0) {
    _swift_bridgeObjectRelease(param_1);
  }
  else {
    if (*(long *)(param_1 + 0x10) == 0) {
LAB_10046ddac:
                    /* WARNING: Does not return */
      pcVar19 = (code *)SoftwareBreakpoint(1,0x10046ddb0);
      (*pcVar19)();
    }
    iVar3 = *(int *)(puVar4 + 0x30);
    lVar1 = param_1 + ((ulong)*(byte *)(lVar14 + 0x50) + 0x20 &
                      ((ulong)*(byte *)(lVar14 + 0x50) ^ 0xffffffffffffffff));
    FUN_100011090(lVar1,lVar23,&DAT_100fc8370,&DAT_100c4cee0);
    pcVar19 = *(code **)(lVar22 + 0x20);
    (*pcVar19)(uVar21,lVar23,UVar5.unknown);
    puVar9 = puVar13;
    FUN_10019ffdc(lVar23 + iVar3,puVar13,&DAT_100fc7df8,&DAT_100c4c890);
    lVar20 = *param_3;
    uVar24 = uVar21;
    FUN_1004647d0();
    lVar16 = *(long *)(lVar20 + 0x10);
    uVar17 = (ulong)~(uint)puVar9 & 1;
    lVar2 = lVar16 + uVar17;
    if (SCARRY8(lVar16,uVar17)) {
LAB_10046ddb0:
                    /* WARNING: Does not return */
      pcVar19 = (code *)SoftwareBreakpoint(1,0x10046ddb4);
      (*pcVar19)();
    }
    if (*(long *)(lVar20 + 0x18) < lVar2) {
      param_2 = param_2 & 1;
      FUN_100467ca8(lVar2);
      uVar24 = uVar21;
      FUN_1004647d0();
      if (((uint)puVar9 & 1) != (param_2 & 1)) {
LAB_10046dac0:
        Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
        pcVar19 = (code *)SoftwareBreakpoint(1,0x10046dacc);
        (*pcVar19)();
      }
    }
    else if ((param_2 & 1) == 0) {
      FUN_100466844();
    }
    if (((ulong)puVar9 & 1) == 0) {
      lVar16 = *param_3;
      lVar2 = lVar16 + (uVar24 >> 6) * 8;
      *(ulong *)(lVar2 + 0x40) = *(ulong *)(lVar2 + 0x40) | 1L << (uVar24 & 0x3f);
      (*pcVar19)(*(long *)(lVar16 + 0x30) + *(long *)(lVar22 + 0x48) * uVar24,uVar21,UVar5.unknown);
      FUN_10019ffdc(puVar13,*(long *)(lVar16 + 0x38) + *(long *)(lVar12 + 0x48) * uVar24,
                    &DAT_100fc7df8,&DAT_100c4c890);
      if (SCARRY8(*(long *)(lVar16 + 0x10),1)) {
LAB_10046ddb4:
                    /* WARNING: Does not return */
        pcVar19 = (code *)SoftwareBreakpoint(1,0x10046ddb8);
        (*pcVar19)();
      }
      *(long *)(lVar16 + 0x10) = *(long *)(lVar16 + 0x10) + 1;
      if (uVar15 != 1) {
        uVar24 = 1;
        do {
          if (*(ulong *)(param_1 + 0x10) <= uVar24) goto LAB_10046ddac;
          FUN_100011090(lVar1 + *(long *)(lVar14 + 0x48) * uVar24,lVar23,&DAT_100fc8370,
                        &DAT_100c4cee0);
          pcVar19 = *(code **)(lVar22 + 0x20);
          (*pcVar19)(uVar21,lVar23,UVar5.unknown);
          puVar9 = puVar13;
          FUN_10019ffdc(lVar23 + iVar3,puVar13,&DAT_100fc7df8,&DAT_100c4c890);
          lVar20 = *param_3;
          uVar17 = uVar21;
          FUN_1004647d0();
          lVar16 = *(long *)(lVar20 + 0x10);
          uVar18 = (ulong)~(uint)puVar9 & 1;
          lVar2 = lVar16 + uVar18;
          if (SCARRY8(lVar16,uVar18)) goto LAB_10046ddb0;
          if (*(long *)(lVar20 + 0x18) < lVar2) {
            uVar8 = 1;
            FUN_100467ca8(lVar2);
            uVar17 = uVar21;
            FUN_1004647d0();
            if (((uint)puVar9 & 1) != (uVar8 & 1)) goto LAB_10046dac0;
          }
          if (((ulong)puVar9 & 1) != 0) goto LAB_10046dae0;
          lVar16 = *param_3;
          lVar2 = lVar16 + (uVar17 >> 6) * 8;
          *(ulong *)(lVar2 + 0x40) = *(ulong *)(lVar2 + 0x40) | 1L << (uVar17 & 0x3f);
          (*pcVar19)(*(long *)(lVar16 + 0x30) + *(long *)(lVar22 + 0x48) * uVar17,uVar21,
                     UVar5.unknown);
          FUN_10019ffdc(puVar13,*(long *)(lVar16 + 0x38) + *(long *)(lVar12 + 0x48) * uVar17,
                        &DAT_100fc7df8,&DAT_100c4c890);
          if (SCARRY8(*(long *)(lVar16 + 0x10),1)) goto LAB_10046ddb4;
          uVar24 = uVar24 + 1;
          *(long *)(lVar16 + 0x10) = *(long *)(lVar16 + 0x10) + 1;
        } while (uVar15 != uVar24);
      }
      _swift_bridgeObjectRelease(param_1);
    }
    else {
LAB_10046dae0:
      puVar4 = PTR___type_metadata_for_Swift__MergeError_100eacdf0;
      puVar6 = PTR___type_metadata_for_Swift__MergeError_100eacdf0;
      _swift_allocError(PTR___type_metadata_for_Swift__MergeError_100eacdf0,
                        PTR___protocol_witness_table_for_Swift__MergeError___Swift_Error_in_Swift_100eacdf8
                        ,0,0);
      _swift_willThrow();
      _swift_bridgeObjectRelease(param_1);
      local_58 = puVar6;
      _swift_errorRetain(puVar6);
      pcVar7 = &DAT_100fc84b0;
      FUN_1000037f0(&DAT_100fc84b0,&DAT_100c4cfe8);
      _Var10.unknown = (undefined *)&local_58;
      pcVar11 = pcVar7;
      _swift_dynamicCast();
      if (((ulong)pcVar7 & 1) != 0) {
        local_70.unknown = (undefined *)0x0;
        _Stack_68 = 0xe000000000000000;
        Swift::_StringGuts::grow(0x1e,_Var10);
        SVar25.bridgeObject = (void *)0x8000000100da6c70;
        SVar25.str = (char *)0xd00000000000001b;
        SVar28.bridgeObject = puVar4;
        SVar28.str = pcVar11;
        Swift::String::append(SVar25,SVar28);
        puVar4 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
        Swift::__print_unlocked
                  (uVar21,&local_70,UVar5.unknown,
                   PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
                   PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
                  );
        SVar26.bridgeObject = (void *)0xe100000000000000;
        SVar26.str = (char *)0x27;
        SVar29.bridgeObject = puVar4;
        SVar29.str = UVar5.unknown;
        Swift::String::append(SVar26,SVar29);
        line = _Stack_68;
        file.unknown = local_70.unknown;
        *(undefined4 *)(lVar23 + -8) = 0;
        *(undefined8 *)(lVar23 + -0x10) = 0x3c44;
        SVar27.bridgeObject = (void *)0x2;
        SVar27.str = (char *)0xb;
        Swift::_assertionFailure((StaticString)0x100d8deb0,SVar27,file,line,0xda6c60);
                    /* WARNING: Does not return */
        pcVar19 = (code *)SoftwareBreakpoint(1,0x10046de5c);
        (*pcVar19)();
      }
      FUN_100005808(puVar13,&DAT_100fc7df8,&DAT_100c4c890);
      (**(code **)(lVar22 + 8))(uVar21,UVar5.unknown);
      _swift_errorRelease(local_58);
    }
  }
  return;
}



/* Address: 0x10046de5c | FUN_10046de5c */

void FUN_10046de5c(undefined8 param_1)

{
  if (DAT_100fc8460 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetEnumDescriptor_100cb1220);
  return;
}



/* Address: 0x10046de94 | FUN_10046de94 */

undefined8 FUN_10046de94(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10045ba0c();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x10046ded8 | FUN_10046ded8 */

void FUN_10046ded8(void)

{
  Date DVar1;
  undefined *puVar2;
  
  if (DAT_100fc8168 != (undefined *)0x0) {
    return;
  }
  DVar1 = Foundation::Date::typeMetadataAccessor();
  puVar2 = PTR_Foundation__Foundation__Date_>Swift__Equatable_100ea74a0;
  _swift_getWitnessTable(PTR_Foundation__Foundation__Date_>Swift__Equatable_100ea74a0,DVar1.unknown)
  ;
  DAT_100fc8168 = puVar2;
  return;
}



/* Address: 0x10046df1c | FUN_10046df1c */

uint FUN_10046df1c(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  UUID UVar2;
  bool bVar3;
  UUID UVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  char *pcVar8;
  undefined8 uVar9;
  UUID UVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  code *pcVar14;
  UUID UVar15;
  uint uVar16;
  long lVar17;
  char *pcVar18;
  UUID local_70;
  long local_68;
  
  UVar4 = Foundation::UUID::typeMetadataAccessor();
  local_68 = *(long *)(UVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_68 + 0x40));
  puVar6 = (undefined *)((long)&local_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_70.unknown = puVar6;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  UVar15.unknown = puVar6 + -extraout_x12;
  lVar5 = 0;
  FUN_10046de5c();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  pcVar18 = UVar15.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar17 = (long)pcVar18 - extraout_x12_00;
  puVar6 = &DAT_100fc8498;
  FUN_1000037f0(&DAT_100fc8498,&DAT_100c4cfd0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = lVar17 - extraout_x8_01;
  pcVar1 = (char *)(lVar11 + *(int *)(puVar6 + 0x30));
  FUN_1000c495c(param_1,lVar11,FUN_10046de5c);
  FUN_1000c495c(param_2,pcVar1,FUN_10046de5c);
  lVar7 = lVar11;
  _swift_getEnumCaseMultiPayload(lVar11,lVar5);
  if ((int)lVar7 == 1) {
    FUN_1000c495c(lVar11,pcVar18,FUN_10046de5c);
    uVar12 = *(undefined8 *)(pcVar18 + 8);
    pcVar8 = pcVar1;
    _swift_getEnumCaseMultiPayload(pcVar1,lVar5);
    if ((int)pcVar8 != 1) {
      _swift_bridgeObjectRelease(uVar12);
      goto LAB_10046e118;
    }
    uVar13 = *(undefined8 *)(pcVar1 + 8);
    if (*pcVar18 == *pcVar1) {
      uVar9 = uVar12;
      FUN_10046d1f4(uVar12,uVar13);
      uVar16 = (uint)uVar9;
      _swift_bridgeObjectRelease(uVar12);
      _swift_bridgeObjectRelease(uVar13);
      goto LAB_10046e190;
    }
    _swift_bridgeObjectRelease(uVar12);
    _swift_bridgeObjectRelease(uVar13);
    FUN_10005241c(lVar11,FUN_10046de5c);
  }
  else {
    FUN_1000c495c(lVar11,lVar17,FUN_10046de5c);
    pcVar18 = pcVar1;
    _swift_getEnumCaseMultiPayload(pcVar1,lVar5);
    lVar7 = local_68;
    if ((int)pcVar18 != 1) {
      pcVar14 = *(code **)(local_68 + 0x20);
      (*pcVar14)(UVar15.unknown,lVar17,UVar4.unknown);
      UVar2.unknown = local_70.unknown;
      UVar10 = UVar4;
      (*pcVar14)(local_70.unknown,pcVar1);
      bVar3 = Foundation::UUID::___infix(UVar15,UVar2,UVar10);
      uVar16 = (uint)bVar3;
      pcVar14 = *(code **)(lVar7 + 8);
      (*pcVar14)(UVar2.unknown,UVar4.unknown);
      (*pcVar14)(UVar15.unknown,UVar4.unknown);
LAB_10046e190:
      FUN_10005241c(lVar11,FUN_10046de5c);
      goto LAB_10046e1a0;
    }
    (**(code **)(local_68 + 8))(lVar17,UVar4.unknown);
LAB_10046e118:
    FUN_100005808(lVar11,&DAT_100fc8498,&DAT_100c4cfd0);
  }
  uVar16 = 0;
LAB_10046e1a0:
  return uVar16 & 1;
}



/* Address: 0x10046e1e8 | FUN_10046e1e8 */

long * FUN_10046e1e8(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  UUID UVar5;
  ulong uVar6;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    plVar3 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    bVar2 = (int)plVar3 != 1;
    if (bVar2) {
      UVar5 = Foundation::UUID::typeMetadataAccessor();
      (**(code **)(*(long *)(UVar5.unknown + -8) + 0x10))(param_1,param_2,UVar5.unknown);
    }
    else {
      *(char *)param_1 = (char)*param_2;
      param_1[1] = param_2[1];
      _swift_bridgeObjectRetain();
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,!bVar2);
  }
  else {
    lVar4 = *param_2;
    *param_1 = lVar4;
    uVar6 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar4 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x10046e2ac | FUN_10046e2ac */

void FUN_10046e2ac(long param_1)

{
  long lVar1;
  UUID UVar2;
  
  lVar1 = param_1;
  _swift_getEnumCaseMultiPayload();
  if ((int)lVar1 == 1) {
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
    return;
  }
  UVar2 = Foundation::UUID::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x00010046e2f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(UVar2.unknown + -8) + 8))(param_1,UVar2.unknown);
  return;
}



/* Address: 0x10046e2fc | FUN_10046e2fc */

undefined1 * FUN_10046e2fc(undefined1 *param_1,undefined1 *param_2,undefined8 param_3)

{
  bool bVar1;
  undefined1 *puVar2;
  UUID UVar3;
  
  puVar2 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  bVar1 = (int)puVar2 != 1;
  if (bVar1) {
    UVar3 = Foundation::UUID::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar3.unknown + -8) + 0x10))(param_1,param_2,UVar3.unknown);
  }
  else {
    *param_1 = *param_2;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    _swift_bridgeObjectRetain();
  }
  _swift_storeEnumTagMultiPayload(param_1,param_3,!bVar1);
  return param_1;
}



/* Address: 0x10046e38c | FUN_10046e38c */

undefined1 * FUN_10046e38c(undefined1 *param_1,undefined1 *param_2,undefined8 param_3)

{
  bool bVar1;
  undefined1 *puVar2;
  UUID UVar3;
  
  if (param_1 != param_2) {
    FUN_10005241c(param_1,FUN_10046de5c);
    puVar2 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    bVar1 = (int)puVar2 != 1;
    if (bVar1) {
      UVar3 = Foundation::UUID::typeMetadataAccessor();
      (**(code **)(*(long *)(UVar3.unknown + -8) + 0x10))(param_1,param_2,UVar3.unknown);
    }
    else {
      *param_1 = *param_2;
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      _swift_bridgeObjectRetain();
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,!bVar1);
  }
  return param_1;
}



/* Address: 0x10046e434 | FUN_10046e434 */

void * FUN_10046e434(void *param_1,void *param_2,long param_3)

{
  void *pvVar1;
  UUID UVar2;
  
  pvVar1 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  if ((int)pvVar1 != 0) {
    pvVar1 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
    return pvVar1;
  }
  UVar2 = Foundation::UUID::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar2.unknown + -8) + 0x20))(param_1,param_2,UVar2.unknown);
  _swift_storeEnumTagMultiPayload(param_1,param_3,0);
  return param_1;
}



/* Address: 0x10046e4c4 | FUN_10046e4c4 */

void * FUN_10046e4c4(void *param_1,void *param_2,long param_3)

{
  void *pvVar1;
  UUID UVar2;
  
  if (param_1 != param_2) {
    FUN_10005241c(param_1,FUN_10046de5c);
    pvVar1 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    if ((int)pvVar1 != 0) {
      pvVar1 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
      return pvVar1;
    }
    UVar2 = Foundation::UUID::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar2.unknown + -8) + 0x20))(param_1,param_2,UVar2.unknown);
    _swift_storeEnumTagMultiPayload(param_1,param_3,0);
  }
  return param_1;
}



/* Address: 0x10046e56c | FUN_10046e56c */

undefined1  [16] FUN_10046e56c(undefined8 param_1,ulong param_2)

{
  UUID UVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  long local_30;
  undefined *puStack_28;
  
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  if (param_2 < 0x40) {
    local_30 = *(long *)(UVar1.unknown + -8) + 0x40;
    puStack_28 = &DAT_100c4cfb8;
    _swift_initEnumMetadataMultiPayload(param_1,0x100,2,&local_30);
    UVar1.unknown = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    uVar2 = 0x3f;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = UVar1.unknown;
  return auVar3;
}



/* Address: 0x10046e5d8 | FUN_10046e5d8 */

void FUN_10046e5d8(void)

{
  FUN_10046e9ec(FUN_10047e0dc,5,FUN_10046e5f0);
  return;
}



/* Address: 0x10046e5f0 | FUN_10046e5f0 */

void FUN_10046e5f0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_10047df6c();
  FUN_10047e0dc();
  _swift_allocObject();
  uVar1 = 0;
  FUN_10047e0f0(0,1,param_2);
  _swift_bridgeObjectRelease(param_2);
  *param_1 = uVar1;
  return;
}



/* Address: 0x10046e654 | FUN_10046e654 */

void FUN_10046e654(void)

{
  FUN_10046e9ec(FUN_10046bfec,0xb,FUN_10046e66c);
  return;
}



/* Address: 0x10046e66c | FUN_10046e66c */

void FUN_10046e66c(long *param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined1 *puVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  long local_50;
  undefined **ppuStack_48;
  
  lVar1 = 0;
  FUN_1004704a8();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar4 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_10046fb04(puVar4);
  ppuStack_48 = &PTR_PTR_100ed6d40;
  puVar2 = auStack_68;
  local_50 = lVar1;
  FUN_10000cbb0(puVar2);
  FUN_1000c495c(puVar4,puVar2,FUN_1004704a8);
  uVar3 = 0;
  FUN_10046bfec(0);
  _swift_allocObject();
  lVar1 = local_50;
  FUN_10007d048(auStack_68,local_50);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar1 = (long)puVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(extraout_x12 + 0x10))(lVar1);
  FUN_10046eab4(lVar1,uVar3);
  FUN_10005241c(puVar4,FUN_1004704a8);
  FUN_100004594(auStack_68);
  *param_1 = lVar1;
  return;
}



/* Address: 0x10046e79c | FUN_10046e79c */

void FUN_10046e79c(void)

{
  FUN_10046e9ec(FUN_100484e38,0x11,FUN_10046e7b4);
  return;
}



/* Address: 0x10046e7b4 | FUN_10046e7b4 */

void FUN_10046e7b4(long *param_1,undefined8 param_2,undefined8 param_3,URL param_4)

{
  URL UVar1;
  URL UVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  String SVar11;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar9 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  puVar7 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  UVar2.unknown = &DAT_100fc7ce0;
  FUN_1000037f0(&DAT_100fc7ce0,&DAT_100c4d030);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(UVar2.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = ((long)puVar7 - extraout_x12) - extraout_x8_00;
  FUN_10046fb04(puVar7);
  Foundation::URL::deletingLastPathComponent(UVar2);
  pcVar10 = *(code **)(lVar9 + 8);
  (*pcVar10)(puVar7,UVar1.unknown);
  SVar11.bridgeObject = &DAT_e800000000000000;
  SVar11.str = (char *)0x6e6f736a2e726364;
  Foundation::URL::appendingPathComponent(SVar11,param_4);
  (*pcVar10)((long)puVar7 - extraout_x12,UVar1.unknown);
  (**(code **)(lVar9 + 0x38))(lVar8,0,1,UVar1.unknown);
  lVar3 = 0;
  FUN_100484e38();
  _swift_allocObject();
  _swift_defaultActor_initialize();
  lVar9 = _TtC8PasteMCP11DCRRegistry::logger;
  FUN_1000d4ca4(0);
  _swift_allocObject();
  uVar4 = 0x7369676552524344;
  FUN_1000d4624(0x7369676552524344,0xeb00000000797274);
  *(undefined8 *)(lVar3 + lVar9) = uVar4;
  lVar9 = _TtC8PasteMCP11DCRRegistry::telemetry;
  puVar5 = &DAT_100c4cff8;
  _swift_getKeyPath();
  puVar6 = &DAT_100fc7c08;
  FUN_1000037f0(&DAT_100fc7c08,&DAT_100c4c580);
  _swift_allocObject();
  FUN_1000da6e0(puVar5,puVar6);
  *(undefined **)(lVar3 + lVar9) = puVar5;
  FUN_10046f9bc(lVar8,lVar3 + _TtC8PasteMCP11DCRRegistry::fileURL);
  lVar9 = lVar8;
  FUN_100484160();
  FUN_100005808(lVar8,&DAT_100fc7ce0,&DAT_100c4d030);
  *(long *)(lVar3 + 0x70) = lVar9;
  *param_1 = lVar3;
  return;
}



/* Address: 0x10046e9d4 | FUN_10046e9d4 */

void FUN_10046e9d4(void)

{
  FUN_10046e9ec(FUN_100481734,0x17,FUN_10046ea50);
  return;
}



/* Address: 0x10046e9ec | FUN_10046e9ec */

undefined8 FUN_10046e9ec(code *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_28;
  
  uVar1 = 0;
  (*param_1)(0);
  FUN_1000d80e0(&local_28,"PasteMCP/DI+PasteMCP.swift",0x1a,2,param_2,0x13,param_3,0,uVar1);
  return local_28;
}



/* Address: 0x10046ea50 | FUN_10046ea50 */

void FUN_10046ea50(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  lVar1 = 0;
  FUN_100481734();
  _swift_allocObject();
  _swift_defaultActor_initialize();
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_10045a9a0();
  *(undefined **)(lVar1 + 0x70) = puVar2;
  FUN_10045ab2c();
  *(undefined **)(lVar1 + 0x78) = puVar3;
  *param_1 = lVar1;
  return;
}



/* Address: 0x10046eab4 | FUN_10046eab4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x00010046ef0c) */
/* WARNING: Removing unreachable block (ram,0x00010046ef78) */

long FUN_10046eab4(undefined8 param_1,long param_2)

{
  ulong *puVar1;
  long lVar2;
  DateDecodingStrategy DVar3;
  int iVar4;
  undefined *puVar5;
  UUID UVar6;
  undefined7 extraout_var;
  undefined8 uVar7;
  undefined1 *puVar8;
  NSDataReadingOptions contentsOf;
  URL self;
  NSString *pNVar9;
  ID IVar10;
  JSONDecoder *pJVar11;
  Data DVar12;
  Data DVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  code *pcVar24;
  ulong *puVar25;
  undefined *puVar26;
  long lVar27;
  code *pcVar28;
  ulong uVar29;
  String SVar30;
  long local_200;
  long local_1f8;
  long local_1f0;
  undefined *local_1e8;
  undefined *local_1e0;
  undefined *local_1d8;
  ulong local_1d0;
  long local_1c8;
  long local_1c0;
  long local_1b8;
  ulong local_1b0;
  long local_1a8;
  long local_1a0;
  long local_198;
  long local_190;
  ulong local_188;
  long local_180;
  ulong *local_178;
  ulong *local_170;
  long local_168;
  long local_160;
  ulong local_158;
  long local_150;
  code *local_148;
  ulong local_d0;
  undefined *local_c0 [6];
  undefined1 auStack_90 [24];
  undefined8 local_78;
  undefined **ppuStack_70;
  
  puVar5 = &DAT_100fc8170;
  FUN_1000037f0(&DAT_100fc8170,&DAT_100c4cde8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  lVar17 = (long)&local_200 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_1f8 = lVar17;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar17 = lVar17 - extraout_x12;
  local_1b8 = lVar17;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar17 = lVar17 - extraout_x12_00;
  puVar5 = &DAT_100fc8178;
  local_1c0 = lVar17;
  FUN_1000037f0(&DAT_100fc8178,&DAT_100c4cdf0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  lVar17 = lVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_1f0 = lVar17;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar17 = lVar17 - extraout_x12_01;
  local_198 = lVar17;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar17 = lVar17 - extraout_x12_02;
  local_1a0 = lVar17;
  UVar6 = Foundation::UUID::typeMetadataAccessor();
  local_168 = *(long *)(UVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_168 + 0x40));
  lVar17 = lVar17 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_1c8 = lVar17;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  uVar29 = lVar17 - extraout_x12_03;
  lVar17 = 0;
  FUN_10045ba0c();
  local_190 = *(long *)(lVar17 + -8);
  local_150 = lVar17;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_190 + 0x40));
  uVar18 = uVar29 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_1b0 = uVar18;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar17 = uVar18 - extraout_x12_04;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_1a8 = lVar17 - extraout_x12_05;
  DVar3 = Foundation::JSONDecoder::DateDecodingStrategy::typeMetadataAccessor();
  local_148 = (code *)CONCAT71(extraout_var,DVar3.value);
  local_158 = *(ulong *)(local_148 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_158 + 0x40));
  lVar23 = (lVar17 - extraout_x12_05) - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  uVar7 = 0;
  FUN_1004704a8();
  ppuStack_70 = &PTR_PTR_100ed6d40;
  puVar8 = auStack_90;
  local_78 = uVar7;
  FUN_10000cbb0(puVar8);
  FUN_1000523d8(param_1,puVar8,FUN_1004704a8);
  _swift_defaultActor_initialize(param_2);
  puVar26 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_100459f24();
  local_170 = (ulong *)(param_2 + 0x70);
  *local_170 = (ulong)puVar5;
  puVar5 = puVar26;
  FUN_10045a0c8();
  *(ulong *)(param_2 + 0x78) = (ulong)puVar5;
  puVar5 = puVar26;
  local_200 = param_2;
  FUN_10045a254();
  *(undefined **)(param_2 + 0x80) = puVar5;
  FUN_1000d4ca4(0);
  _swift_allocObject();
  uVar7 = 0x7453746e65696c43;
  FUN_1000d4624(0x7453746e65696c43,0xeb0000000065726f);
  *(undefined8 *)(param_2 + 0xb0) = uVar7;
  puVar5 = &DAT_100c4cff8;
  _swift_getKeyPath();
  FUN_1000037f0(&DAT_100fc7c08,&DAT_100c4c580);
  _swift_allocObject();
  FUN_1000da6e0();
  *(undefined **)(param_2 + 0xb8) = puVar5;
  local_178 = (ulong *)(param_2 + 0x78);
  FUN_100076688(auStack_90,param_2 + 0x88);
  contentsOf.unknown = auStack_90;
  FUN_100004640(contentsOf.unknown,local_78);
  self.unknown = (undefined *)objc_stub::defaultManager(&_OBJC_CLASS___NSFileManager);
  SVar30 = Foundation::URL::get_path(self);
  pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar30.bridgeObject);
  IVar10 = objc_stub::fileExistsAtPath_((ID)self.unknown,pNVar9);
  if ((int)IVar10 != 0) {
    pJVar11 = Foundation::JSONDecoder::typeMetadataAccessor();
    _swift_allocObject(pJVar11,*(undefined4 *)(pJVar11 + 0x30),*(undefined2 *)(pJVar11 + 0x34));
    pJVar11 = Foundation::JSONDecoder::init(pJVar11);
    (**(code **)(local_158 + 0x68))
              (lVar23,*(undefined4 *)
                       PTR___enum_case_for_Foundation_JSONDecoder_DateDecodingStrategy_iso8601_Foundation_JSONDecoder_DateDecodingStrategy_Type___>_Foundation_JSONDecoder_DateDecodingStrategy_100ea6a38
              );
    Foundation::JSONDecoder::set_dateDecodingStrategy(pJVar11,(DateDecodingStrategy)(__int8)lVar23);
    uVar7 = 0;
    DVar12 = Foundation::Data::_init(contentsOf);
    DVar13.unknown = &DAT_100fc81b0;
    FUN_1000037f0(&DAT_100fc81b0,&DAT_100c4ce18);
    FUN_10046fa50();
    Foundation::JSONDecoder::_decode(pJVar11,DVar13);
    _swift_release(pJVar11);
    FUN_10003bf2c(DVar12.unknown,uVar7);
    puVar26 = local_c0[0];
  }
  local_1d0 = *(ulong *)(puVar26 + 0x10);
  if (local_1d0 != 0) {
    uVar18 = 0;
    local_1d8 = puVar26 + ((ulong)*(byte *)(local_190 + 0x50) + 0x20 &
                          ((ulong)*(byte *)(local_190 + 0x50) ^ 0xffffffffffffffff));
    lVar23 = local_198;
    lVar27 = local_168;
    local_1e8 = puVar26;
    local_1e0 = UVar6.unknown;
    local_188 = uVar29;
    local_180 = lVar17;
    do {
      lVar2 = local_190;
      lVar14 = local_1a8;
      if (*(ulong *)(local_1e8 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
        pcVar28 = (code *)SoftwareBreakpoint(1,0x10046f98c);
        (*pcVar28)();
      }
      local_160 = *(long *)(local_190 + 0x48);
      local_158 = uVar18;
      FUN_1000c495c(local_1d8 + local_160 * uVar18,local_1a8,FUN_10045ba0c);
      FUN_1000523d8(lVar14,lVar17,FUN_10045ba0c);
      local_148 = *(code **)(lVar27 + 0x10);
      (*local_148)(uVar29,lVar17,UVar6.unknown);
      lVar14 = local_1a0;
      FUN_1000c495c(lVar17,local_1a0,FUN_10045ba0c);
      lVar17 = local_150;
      pcVar28 = *(code **)(lVar2 + 0x38);
      (*pcVar28)(lVar14,0,1,local_150);
      puVar25 = local_170;
      _swift_beginAccess(local_170,local_c0,0x21,0);
      uVar18 = 0;
      FUN_10019ffdc(lVar14,lVar23,&DAT_100fc8178,&DAT_100c4cdf0);
      lVar14 = lVar23;
      (**(code **)(lVar2 + 0x30))(lVar23,1,lVar17);
      if ((int)lVar14 == 1) {
        FUN_100005808(lVar23,&DAT_100fc8178,&DAT_100c4cdf0);
        uVar20 = *puVar25;
        _swift_bridgeObjectRetain(uVar20);
        uVar21 = uVar29;
        FUN_1004647d0(uVar29);
        _swift_bridgeObjectRelease(uVar20);
        UVar6.unknown = local_1e0;
        if ((uVar18 & 1) == 0) {
          (**(code **)(lVar27 + 8))(uVar29,local_1e0);
          uVar7 = 1;
          lVar17 = local_1f0;
        }
        else {
          uVar29 = *puVar25;
          _swift_isUniquelyReferenced_nonNull_native();
          UVar6.unknown = local_1e0;
          local_d0 = *puVar25;
          *puVar25 = 0x8000000000000000;
          if ((uVar29 & 1) == 0) {
            FUN_1004665d4();
          }
          uVar29 = local_d0;
          pcVar24 = *(code **)(lVar27 + 8);
          (*pcVar24)(*(long *)(local_d0 + 0x30) + *(long *)(lVar27 + 0x48) * uVar21,UVar6.unknown);
          lVar17 = local_1f0;
          FUN_1000523d8(*(long *)(uVar29 + 0x38) + uVar21 * local_160,local_1f0,FUN_10045ba0c);
          FUN_10046943c(uVar21,uVar29);
          (*pcVar24)(local_188,UVar6.unknown);
          uVar18 = *puVar25;
          *puVar25 = uVar29;
          _swift_bridgeObjectRelease(uVar18);
          uVar7 = 0;
        }
        lVar23 = local_150;
        (*pcVar28)(lVar17,uVar7,1,local_150);
        FUN_100005808(lVar17,&DAT_100fc8178,&DAT_100c4cdf0);
        puVar25 = local_178;
        lVar27 = local_168;
        lVar17 = local_180;
      }
      else {
        uVar21 = local_1b0;
        FUN_1000523d8(lVar23,local_1b0,FUN_10045ba0c);
        uVar20 = *puVar25;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar16 = (uint)uVar20;
        uVar19 = *puVar25;
        *puVar25 = 0x8000000000000000;
        uVar18 = uVar29;
        local_d0 = uVar19;
        FUN_1004647d0();
        lVar17 = local_180;
        UVar6.unknown = local_1e0;
        uVar15 = (ulong)~(uint)uVar21 & 1;
        lVar23 = *(long *)(uVar19 + 0x10) + uVar15;
        if (SCARRY8(*(long *)(uVar19 + 0x10),uVar15)) {
                    /* WARNING: Does not return */
          pcVar28 = (code *)SoftwareBreakpoint(1,0x10046f990);
          (*pcVar28)();
        }
        if (*(long *)(uVar19 + 0x18) < lVar23) {
          FUN_1004678e4(lVar23);
          uVar18 = uVar29;
          FUN_1004647d0();
          lVar17 = local_180;
          UVar6.unknown = local_1e0;
          if (((uint)uVar21 & 1) != (uVar16 & 1)) {
            Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
            pcVar28 = (code *)SoftwareBreakpoint(1,0x10046f9a8);
            (*pcVar28)();
          }
        }
        else if ((uVar20 & 1) == 0) {
          FUN_1004665d4();
        }
        uVar20 = local_d0;
        puVar25 = local_178;
        if ((uVar21 & 1) == 0) {
          lVar23 = local_d0 + (uVar18 >> 6) * 8;
          *(ulong *)(lVar23 + 0x40) = *(ulong *)(lVar23 + 0x40) | 1L << (uVar18 & 0x3f);
          (*local_148)(*(long *)(local_d0 + 0x30) + *(long *)(lVar27 + 0x48) * uVar18,uVar29,
                       UVar6.unknown);
          FUN_1000523d8(local_1b0,*(long *)(uVar20 + 0x38) + uVar18 * local_160,FUN_10045ba0c);
          (**(code **)(lVar27 + 8))(uVar29,UVar6.unknown);
          if (SCARRY8(*(long *)(uVar20 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar28 = (code *)SoftwareBreakpoint(1,0x10046f998);
            (*pcVar28)();
          }
          *(long *)(uVar20 + 0x10) = *(long *)(uVar20 + 0x10) + 1;
        }
        else {
          FUN_10046fa0c(local_1b0,*(long *)(local_d0 + 0x38) + uVar18 * local_160);
          (**(code **)(lVar27 + 8))(uVar29,UVar6.unknown);
        }
        uVar29 = *local_170;
        *local_170 = uVar20;
        _swift_bridgeObjectRelease(uVar29);
        lVar23 = local_150;
      }
      lVar2 = local_1b8;
      _swift_endAccess(local_c0);
      lVar14 = local_1c0;
      puVar1 = (ulong *)(lVar17 + *(int *)(lVar23 + 0x24));
      uVar18 = *puVar1;
      uVar29 = puVar1[1];
      (*local_148)(local_1c0,lVar17,UVar6.unknown);
      pcVar28 = *(code **)(lVar27 + 0x38);
      (*pcVar28)(lVar14,0,1,UVar6.unknown);
      _swift_beginAccess(puVar25,local_c0,0x21,0);
      FUN_10019ffdc(lVar14,lVar2,&DAT_100fc8170,&DAT_100c4cde8);
      lVar23 = lVar2;
      (**(code **)(lVar27 + 0x30))(lVar2,1,UVar6.unknown);
      if ((int)lVar23 == 1) {
        FUN_100005808(lVar2,&DAT_100fc8170,&DAT_100c4cde8);
        uVar21 = *puVar25;
        _swift_bridgeObjectRetain(uVar21);
        FUN_10046483c();
        _swift_bridgeObjectRelease(uVar21);
        if ((uVar29 & 1) == 0) {
          uVar7 = 1;
          lVar23 = local_1f8;
          uVar29 = local_188;
        }
        else {
          iVar4 = (int)*puVar25;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar29 = local_188;
          lVar23 = local_1f8;
          local_d0 = *puVar25;
          *puVar25 = 0x8000000000000000;
          if (iVar4 == 0) {
            FUN_1004663b4();
          }
          uVar21 = local_d0;
          _swift_bridgeObjectRelease
                    (*(undefined8 *)(*(long *)(local_d0 + 0x30) + uVar18 * 0x10 + 8));
          (**(code **)(lVar27 + 0x20))
                    (lVar23,*(long *)(uVar21 + 0x38) + *(long *)(lVar27 + 0x48) * uVar18,
                     UVar6.unknown);
          FUN_10046926c(uVar18,uVar21);
          uVar18 = *puVar25;
          *puVar25 = uVar21;
          _swift_bridgeObjectRelease(uVar18);
          uVar7 = 0;
        }
        (*pcVar28)(lVar23,uVar7,1,UVar6.unknown);
        FUN_100005808(lVar23,&DAT_100fc8170,&DAT_100c4cde8);
      }
      else {
        pcVar28 = *(code **)(lVar27 + 0x20);
        (*pcVar28)(local_1c8,lVar2,UVar6.unknown);
        uVar15 = *puVar25;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar22 = *puVar25;
        *puVar25 = 0x8000000000000000;
        uVar21 = uVar18;
        uVar20 = uVar29;
        local_d0 = uVar22;
        FUN_10046483c();
        uVar19 = (ulong)~(uint)uVar20 & 1;
        lVar17 = *(long *)(uVar22 + 0x10) + uVar19;
        if (SCARRY8(*(long *)(uVar22 + 0x10),uVar19)) {
                    /* WARNING: Does not return */
          pcVar28 = (code *)SoftwareBreakpoint(1,0x10046f994);
          (*pcVar28)();
        }
        if (*(long *)(uVar22 + 0x18) < lVar17) {
          FUN_1004675c4(lVar17,uVar15);
          uVar21 = uVar18;
          uVar15 = uVar29;
          FUN_10046483c();
          if (((uint)uVar20 & 1) != ((uint)uVar15 & 1)) {
            Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
            pcVar28 = (code *)SoftwareBreakpoint(1,0x10046f9b8);
            (*pcVar28)();
          }
        }
        else if ((uVar15 & 1) == 0) {
          FUN_1004663b4();
        }
        uVar15 = local_d0;
        puVar25 = local_178;
        if ((uVar20 & 1) == 0) {
          lVar17 = local_d0 + (uVar21 >> 6) * 8;
          *(ulong *)(lVar17 + 0x40) = *(ulong *)(lVar17 + 0x40) | 1L << (uVar21 & 0x3f);
          puVar1 = (ulong *)(*(long *)(local_d0 + 0x30) + uVar21 * 0x10);
          *puVar1 = uVar18;
          puVar1[1] = uVar29;
          (*pcVar28)(*(long *)(local_d0 + 0x38) + *(long *)(local_168 + 0x48) * uVar21,local_1c8,
                     UVar6.unknown);
          if (SCARRY8(*(long *)(uVar15 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar28 = (code *)SoftwareBreakpoint(1,0x10046f99c);
            (*pcVar28)();
          }
          *(long *)(uVar15 + 0x10) = *(long *)(uVar15 + 0x10) + 1;
          _swift_bridgeObjectRetain(uVar29);
        }
        else {
          (**(code **)(local_168 + 0x28))
                    (*(long *)(local_d0 + 0x38) + *(long *)(local_168 + 0x48) * uVar21,local_1c8,
                     UVar6.unknown);
        }
        uVar29 = *puVar25;
        *puVar25 = uVar15;
        _swift_bridgeObjectRelease(uVar29);
        lVar27 = local_168;
        lVar17 = local_180;
        uVar29 = local_188;
      }
      lVar23 = local_198;
      uVar18 = local_158 + 1;
      _swift_endAccess(local_c0);
      FUN_10005241c(lVar17,FUN_10045ba0c);
      puVar26 = local_1e8;
    } while (local_1d0 != uVar18);
  }
  _swift_bridgeObjectRelease(puVar26);
  lVar17 = local_200;
  FUN_100004594(auStack_90);
  return lVar17;
}



/* Address: 0x10046f9b8 | thunk_FUN_10019b694 */

void thunk_FUN_10019b694(void)

{
  thunk_FUN_10019b694();
  return;
}



/* Address: 0x10046f9bc | FUN_10046f9bc */

undefined8 FUN_10046f9bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fc7ce0;
  FUN_1000037f0(&DAT_100fc7ce0,&DAT_100c4d030);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x10046fa0c | FUN_10046fa0c */

undefined8 FUN_10046fa0c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10045ba0c();
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x10046fa50 | FUN_10046fa50 */

void FUN_10046fa50(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_28;
  
  if (DAT_100fc84b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fc81b0;
  FUN_100005c24(&DAT_100fc81b0,&DAT_100c4ce18);
  puVar2 = puVar1;
  FUN_10046fac0();
  puVar3 = PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100eac538;
  local_28 = puVar2;
  _swift_getWitnessTable
            (PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100eac538,puVar1,&local_28);
  DAT_100fc84b8 = puVar3;
  return;
}



/* Address: 0x10046fac0 | FUN_10046fac0 */

void FUN_10046fac0(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  
  if (DAT_100fc84c0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_10045ba0c(0xff);
  pTVar2 = &TargetProtocolConformanceDescriptor_100c4c8d0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4c8d0,uVar1);
  DAT_100fc84c0 = pTVar2;
  return;
}



/* Address: 0x10046fb04 | FUN_10046fb04 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10046fb04(undefined8 param_1)

{
  undefined *puVar1;
  URL UVar2;
  ID self;
  URL UVar3;
  undefined8 uVar4;
  URL UVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  undefined8 local_80 [2];
  undefined8 local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  puVar1 = &DAT_100fc7ce0;
  local_80[0] = param_1;
  FUN_1000037f0(&DAT_100fc7ce0,&DAT_100c4d030);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar1 + -8) + 0x40));
  lVar10 = (long)local_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar7 = lVar10 - extraout_x12;
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar11 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  lVar9 = lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar8 = lVar9 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  self = objc_stub::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  local_70 = 0;
  UVar3.unknown =
       (undefined *)
       objc_stub::URLForDirectory_inDomain_appropriateForURL_create_error_(self,0xe,1,0,1,&local_70)
  ;
  if (UVar3.unknown == (undefined *)0x0) {
    uVar4 = local_70;
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    _swift_errorRelease(uVar4);
  }
  else {
    Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar3);
  }
  UVar5 = UVar2;
  (**(code **)(lVar11 + 0x38))(lVar7,UVar3.unknown == (undefined *)0x0,1);
  FUN_10045b224(lVar7,lVar10);
  pcVar6 = *(code **)(lVar11 + 0x30);
  lVar7 = lVar10;
  (*pcVar6)(lVar10,1,UVar2.unknown);
  if ((int)lVar7 == 1) {
    _NSHomeDirectory();
    SVar12 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    Foundation::URL::_init(SVar12.str._0_1_);
    _swift_bridgeObjectRelease(SVar12.bridgeObject);
    SVar12.bridgeObject = (void *)0x8000000100da6cf0;
    SVar12.str = (char *)0xd00000000000001b;
    Foundation::URL::appendingPathComponent(SVar12,true,UVar5);
    (**(code **)(lVar11 + 8))(lVar8,UVar2.unknown);
    lVar7 = lVar10;
    (*pcVar6)(lVar10,1,UVar2.unknown);
    if ((int)lVar7 != 1) {
      FUN_10045b274(lVar10);
    }
  }
  else {
    (**(code **)(lVar11 + 0x20))(lVar8 - extraout_x12_01,lVar10,UVar2.unknown);
  }
  SVar13.bridgeObject = &DAT_e500000000000000;
  SVar13.str = (char *)0x6574736150;
  Foundation::URL::appendingPathComponent(SVar13,true,UVar5);
  UVar3.unknown = &DAT_00000001;
  SVar14.bridgeObject = (void *)0xe300000000000000;
  SVar14.str = (char *)0x70636d;
  Foundation::URL::appendingPathComponent(SVar14,true,UVar5);
  pcVar6 = *(code **)(lVar11 + 8);
  (*pcVar6)(lVar9,UVar2.unknown);
  SVar15.bridgeObject = (void *)0xec0000006e6f736a;
  SVar15.str = (char *)0x2e73746e65696c63;
  Foundation::URL::appendingPathComponent(SVar15,UVar3);
  (*pcVar6)(lVar8,UVar2.unknown);
  (*pcVar6)(lVar8 - extraout_x12_01,UVar2.unknown);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x10046fe64 | FUN_10046fe64 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010047010c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10046fe64(undefined *param_1)

{
  DateEncodingStrategy DVar1;
  OutputFormatting OVar2;
  URL UVar4;
  URL self;
  URL UVar5;
  NSURL *pNVar6;
  ID IVar7;
  JSONEncoder *pJVar8;
  OutputFormatting OVar9;
  OutputFormatting OVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  Data DVar14;
  long extraout_x8;
  OutputFormatting OVar15;
  long extraout_x8_00;
  long extraout_x8_01;
  URL unaff_x20;
  long unaff_x21;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined1 auStack_a0 [8];
  undefined *local_70;
  long local_68;
  long lVar3;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  OVar2 = Foundation::JSONEncoder::OutputFormatting::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(OVar2.unknown + -8) + 0x40));
  OVar15.unknown = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar1 = Foundation::JSONEncoder::DateEncodingStrategy::typeMetadataAccessor();
  lVar3 = CONCAT71((int7)((ulong)OVar2.unknown >> 8),DVar1.value);
  lVar16 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar16 + 0x40));
  lVar18 = (long)OVar15.unknown - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  UVar4 = Foundation::URL::typeMetadataAccessor();
  lVar17 = *(long *)(UVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar17 + 0x40));
  self.unknown = (undefined *)objc_stub::defaultManager(&_OBJC_CLASS___NSFileManager);
  UVar5 = Foundation::URL::deletingLastPathComponent(self);
  pNVar6 = Foundation::URL::_bridgeToObjectiveC(UVar5);
  (**(code **)(lVar17 + 8))(lVar18 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0),UVar4.unknown);
  local_70 = (undefined *)0x0;
  IVar7 = objc_stub::createDirectoryAtURL_withIntermediateDirectories_attributes_error_
                    ((ID)self.unknown,pNVar6,1,0,&local_70);
  if ((int)IVar7 == 0) {
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
  }
  else {
    pJVar8 = Foundation::JSONEncoder::typeMetadataAccessor();
    _swift_allocObject(pJVar8,*(undefined4 *)(pJVar8 + 0x30),*(undefined2 *)(pJVar8 + 0x34));
    pJVar8 = Foundation::JSONEncoder::init(pJVar8);
    (**(code **)(lVar16 + 0x68))
              (lVar18,*(undefined4 *)
                       PTR___enum_case_for_Foundation_JSONEncoder_DateEncodingStrategy_iso8601_Foundation_JSONEncoder_DateEncodingStrategy_Type___>_Foundation_JSONEncoder_DateEncodingStrategy_100ea6ab0
               ,lVar3);
    Foundation::JSONEncoder::set_dateEncodingStrategy(pJVar8,(DateEncodingStrategy)(__int8)lVar18);
    OVar9.unknown = &DAT_100fc84c8;
    FUN_1000037f0(&DAT_100fc84c8,&DAT_100c4d038);
    _swift_allocObject();
    *(undefined8 *)(OVar9.unknown + 0x18) = 4;
    *(undefined8 *)(OVar9.unknown + 0x10) = 2;
    OVar10 = Foundation::JSONEncoder::OutputFormatting::get_prettyPrinted(OVar9);
    Foundation::JSONEncoder::OutputFormatting::get_sortedKeys(OVar10);
    puVar11 = &DAT_100fc84d0;
    local_70 = OVar9.unknown;
    FUN_100003a00(&DAT_100fc84d0,PTR_typeMetadataAccessor_100ea6a88,
                  PTR_Foundation__Foundation__JSONEncoder__OutputFormatting_>Swift__SetAlgebra_100ea6a98
                 );
    puVar12 = &DAT_100fc84d8;
    FUN_1000037f0(&DAT_100fc84d8,&DAT_100c4d040);
    puVar13 = puVar12;
    FUN_1004701bc();
    Swift::SetAlgebra::_init(OVar15.unknown,&local_70,puVar12,puVar13,OVar2.unknown,puVar11);
    Foundation::JSONEncoder::set_outputFormatting(pJVar8,OVar15);
    puVar12 = &DAT_100fc81b0;
    local_70 = param_1;
    FUN_1000037f0(&DAT_100fc81b0,&DAT_100c4ce18);
    puVar13 = puVar12;
    FUN_10047020c();
    DVar14 = Foundation::JSONEncoder::_encode(pJVar8,puVar13,puVar12,puVar13);
    if (unaff_x21 == 0) {
      Foundation::Data::_write(unaff_x20,(NSDataWritingOptions)0x1,DVar14);
      FUN_10003bf2c(DVar14.unknown,puVar12);
    }
    _swift_release(pJVar8);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1004701bc | FUN_1004701bc */

void FUN_1004701bc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fc84e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fc84d8;
  FUN_100005c24(&DAT_100fc84d8,&DAT_100c4d040);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530,puVar1);
  DAT_100fc84e0 = puVar2;
  return;
}



/* Address: 0x10047020c | FUN_10047020c */

void FUN_10047020c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_28;
  
  if (DAT_100fc84e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fc81b0;
  FUN_100005c24(&DAT_100fc81b0,&DAT_100c4ce18);
  puVar2 = &DAT_100fc84f0;
  FUN_100003a00(&DAT_100fc84f0,FUN_10045ba0c,&TargetProtocolConformanceDescriptor_100c4c8f8);
  puVar3 = PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100eac510;
  local_28 = puVar2;
  _swift_getWitnessTable
            (PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100eac510,puVar1,&local_28);
  DAT_100fc84e8 = puVar3;
  return;
}



/* Address: 0x100470294 | FUN_100470294 */

void FUN_100470294(undefined8 param_1,undefined8 param_2)

{
  URL UVar1;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001004702cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(UVar1.unknown + -8))(param_1,param_2,UVar1.unknown);
  return;
}



/* Address: 0x1004702d0 | FUN_1004702d0 */

void FUN_1004702d0(undefined8 param_1)

{
  URL UVar1;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x000100470300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(UVar1.unknown + -8) + 8))(param_1,UVar1.unknown);
  return;
}



/* Address: 0x100470304 | FUN_100470304 */

undefined8 FUN_100470304(undefined8 param_1,undefined8 param_2)

{
  URL UVar1;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar1.unknown + -8) + 0x10))(param_1,param_2,UVar1.unknown);
  return param_1;
}



/* Address: 0x100470348 | FUN_100470348 */

undefined8 FUN_100470348(undefined8 param_1,undefined8 param_2)

{
  URL UVar1;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar1.unknown + -8) + 0x18))(param_1,param_2,UVar1.unknown);
  return param_1;
}



/* Address: 0x10047038c | FUN_10047038c */

undefined8 FUN_10047038c(undefined8 param_1,undefined8 param_2)

{
  URL UVar1;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar1.unknown + -8) + 0x20))(param_1,param_2,UVar1.unknown);
  return param_1;
}



/* Address: 0x1004703d0 | FUN_1004703d0 */

undefined8 FUN_1004703d0(undefined8 param_1,undefined8 param_2)

{
  URL UVar1;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar1.unknown + -8) + 0x28))(param_1,param_2,UVar1.unknown);
  return param_1;
}



/* Address: 0x100470414 | FUN_100470414 */

void FUN_100470414(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x100470420 | FUN_100470420 */

void FUN_100470420(undefined8 param_1,undefined8 param_2)

{
  URL UVar1;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x000100470458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(UVar1.unknown + -8) + 0x30))(param_1,param_2,UVar1.unknown);
  return;
}



/* Address: 0x10047045c | FUN_10047045c */

void FUN_10047045c(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x100470468 | FUN_100470468 */

void FUN_100470468(undefined8 param_1,undefined8 param_2)

{
  URL UVar1;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001004704a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(UVar1.unknown + -8) + 0x38))(param_1,param_2,param_2,UVar1.unknown);
  return;
}



/* Address: 0x1004704a8 | FUN_1004704a8 */

void FUN_1004704a8(undefined8 param_1)

{
  if (DAT_100fc8550 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetStructDescriptor_100cb1248);
  return;
}



/* Address: 0x1004704e0 | FUN_1004704e0 */

undefined1  [16] FUN_1004704e0(long param_1,ulong param_2)

{
  URL UVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  long local_28;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  if (param_2 < 0x40) {
    local_28 = *(long *)(UVar1.unknown + -8) + 0x40;
    _swift_initStructMetadata(param_1,0x100,1,&local_28,param_1 + 0x10);
    UVar1.unknown = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    uVar2 = 0x3f;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = UVar1.unknown;
  return auVar3;
}



/* Address: 0x100470548 | FUN_100470548 */

void FUN_100470548(void)

{
  undefined8 uVar1;
  
  FUN_1000d4ca4(0);
  _swift_allocObject();
  uVar1 = 0xd000000000000014;
  FUN_1000d4624(0xd000000000000014,0x8000000100da6ed0);
  DAT_100fc85a0 = uVar1;
  return;
}



/* Address: 0x10047059c | FUN_10047059c */

void FUN_10047059c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_1;
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  puVar1 = &DAT_100fc8588;
  FUN_1000037f0(&DAT_100fc8588,&DAT_100c4d090);
  *(undefined **)(unaff_x22 + 0x30) = puVar1;
  lVar3 = *(long *)(puVar1 + -8);
  *(long *)(unaff_x22 + 0x38) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x40) = uVar2;
  _swift_task_switch(FUN_100470608,0,0);
  return;
}



/* Address: 0x100470608 | FUN_100470608 */

void FUN_100470608(void)

{
  AsyncThrowingStream AVar1;
  long *plVar2;
  long unaff_x22;
  
  AVar1.unknown = &DAT_100fc8590;
  FUN_1000037f0(&DAT_100fc8590,&DAT_100c4d098);
  Swift::AsyncThrowingStream::_makeAsyncIterator(AVar1);
  plVar2 = (long *)(ulong)*(uint *)(PTR__next_100eaee88 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x48) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100470684;
  Swift::AsyncThrowingStream::Iterator::_next((undefined *)(unaff_x22 + 0x10));
  return;
}



/* Address: 0x100470684 | FUN_100470684 */

void FUN_100470684(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x48));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1004706e0;
  }
  else {
    *(long *)(lVar2 + 0x98) = unaff_x20;
    pcVar1 = FUN_100470a30;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1004706e0 | FUN_1004706e0 */

void FUN_1004706e0(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar4 = *(ulong *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x50) = uVar2;
  *(ulong *)(unaff_x22 + 0x58) = uVar4;
  if (0xe < uVar4 >> 0x3c) {
    lVar9 = *(long *)(unaff_x22 + 0x20);
    (**(code **)(*(long *)(unaff_x22 + 0x38) + 8))
              (*(undefined8 *)(unaff_x22 + 0x40),*(undefined8 *)(unaff_x22 + 0x30));
    lVar3 = *(long *)(lVar9 + 0x18);
    lVar10 = *(long *)(lVar9 + 0x20);
    FUN_100004640(lVar9,lVar3);
    lVar9 = *(long *)(lVar3 + -8);
    uVar4 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    *(ulong *)(unaff_x22 + 0x60) = uVar4;
    (**(code **)(lVar9 + 0x10))();
    piVar8 = *(int **)(lVar10 + 0x18);
    iVar1 = *piVar8;
    plVar6 = (long *)(ulong)(uint)piVar8[1];
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x68) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_100470894;
                    /* WARNING: Could not recover jumptable at 0x0001004707c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar8))(0,lVar3,lVar10);
    return;
  }
  lVar10 = *(long *)(unaff_x22 + 0x20);
  FUN_100611728();
  FUN_1001037b4(uVar2,uVar4);
  uVar5 = uVar2;
  uVar7 = uVar4;
  FUN_100487db4(uVar2,uVar4,param_1,param_2,param_3,param_4);
  *(undefined8 *)(unaff_x22 + 0x78) = uVar5;
  FUN_10003bf18(uVar2,uVar4);
  uVar2 = *(undefined8 *)(lVar10 + 0x18);
  lVar3 = *(long *)(lVar10 + 0x20);
  FUN_10007d048(lVar10,uVar2);
  piVar8 = *(int **)(lVar3 + 8);
  iVar1 = *piVar8;
  plVar6 = (long *)(ulong)(uint)piVar8[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x80) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_100470910;
                    /* WARNING: Could not recover jumptable at 0x000100470890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar8))(uVar5,uVar7,param_1 & 0xffffffffffffff,uVar2,lVar3);
  return;
}



/* Address: 0x100470894 | FUN_100470894 */

void FUN_100470894(void)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  long *unaff_x22;
  long lVar3;
  
  lVar1 = *unaff_x22;
  lVar3 = *unaff_x22;
  *(long *)(lVar1 + 0x70) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x68));
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_100470ae8,0,0);
    return;
  }
  uVar2 = *(undefined8 *)(lVar1 + 0x40);
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x60));
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010047090c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Address: 0x100470910 | FUN_100470910 */

void FUN_100470910(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x88) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x80));
  if (unaff_x20 == 0) {
    _swift_release(*(undefined8 *)(lVar2 + 0x78));
    pcVar1 = FUN_100470974;
  }
  else {
    pcVar1 = FUN_100470a74;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100470974 | FUN_100470974 */

void FUN_100470974(void)

{
  long *plVar1;
  long unaff_x22;
  
  FUN_10003bf18(*(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x58));
  plVar1 = (long *)(ulong)*(uint *)(PTR__next_100eaee88 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x90) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1004709d4;
  Swift::AsyncThrowingStream::Iterator::_next((undefined *)(unaff_x22 + 0x10));
  return;
}



/* Address: 0x1004709d4 | FUN_1004709d4 */

void FUN_1004709d4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x90));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1004706e0;
  }
  else {
    *(long *)(lVar2 + 0x98) = unaff_x20;
    pcVar1 = FUN_100470a30;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100470a30 | FUN_100470a30 */

void FUN_100470a30(void)

{
  long unaff_x22;
  
  (**(code **)(*(long *)(unaff_x22 + 0x38) + 8))
            (*(undefined8 *)(unaff_x22 + 0x40),*(undefined8 *)(unaff_x22 + 0x30));
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x000100470a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100470a74 | FUN_100470a74 */

void FUN_100470a74(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar2 = *(long *)(unaff_x22 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x30);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x78));
  FUN_10003bf18(uVar1,uVar3);
  (**(code **)(lVar2 + 8))(uVar4,uVar5);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x000100470ae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100470ae8 | FUN_100470ae8 */

void FUN_100470ae8(void)

{
  long unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x60));
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x000100470b20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100470b24 | FUN_100470b24 */

String FUN_100470b24(char *param_1,undefined *param_2)

{
  code *pcVar1;
  bool bVar2;
  _StringGuts _Var3;
  Substring SVar4;
  Substring SVar5;
  Substring SVar6;
  _StringGuts _Var7;
  uint uVar8;
  Index IVar9;
  ulong uVar10;
  ulong uVar11;
  Character CVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  
  SVar13.bridgeObject = param_2;
  SVar13.str = param_1;
  if (param_2 == (undefined *)0x0) {
    return SVar13;
  }
  uVar11 = (ulong)param_1 & 0xffffffffffff;
  if (((ulong)param_2 & 0x2000000000000000) != 0) {
    uVar11 = (ulong)param_2 >> 0x38 & 0xf;
  }
  _swift_bridgeObjectRetain(param_2);
  if (uVar11 == 0) {
    IVar9.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0xf;
  }
  else {
    uVar10 = 0;
    IVar9.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0xf;
    do {
      SVar16.bridgeObject = param_2;
      SVar16.str = param_1;
      CVar12 = Swift::String::get_subscript(IVar9,SVar16);
      _Var7.unknown = CVar12.bridgeObject;
      _Var3.unknown = CVar12.str;
      if ((_Var3.unknown == (undefined *)0x20) && (_Var7.unknown == (undefined *)0xe100000000000000)
         ) {
LAB_100470b7c:
        _swift_bridgeObjectRelease(_Var7.unknown);
      }
      else {
        bVar2 = Swift::_stringCompareWithSmolCheck(_Var3,_Var7,(_StringComparisonResult)0x20);
        if ((bVar2) ||
           (_Var3.unknown == &DAT_00000009 && _Var7.unknown == (undefined *)0xe100000000000000))
        goto LAB_100470b7c;
        bVar2 = Swift::_stringCompareWithSmolCheck(_Var3,_Var7,(_StringComparisonResult)0x9);
        _swift_bridgeObjectRelease(_Var7.unknown);
        if (!bVar2) {
          if (uVar11 * 4 < uVar10) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100470c2c);
            (*pcVar1)();
          }
          break;
        }
      }
      SVar15.bridgeObject = param_2;
      SVar15.str = param_1;
      IVar9 = Swift::String::index(IVar9,SVar15);
      uVar10 = (ulong)IVar9.cmsgPointer.unknown >> 0xe;
    } while (uVar10 != uVar11 * 4);
  }
  uVar8 = (uint)((ulong)param_1 >> 0x3b) & 1;
  if (((ulong)param_2 & 0x1000000000000000) == 0) {
    uVar8 = 1;
  }
  uVar10 = 7;
  if (uVar8 == 0) {
    uVar10 = 0xb;
  }
  SVar17.str = (undefined *)(uVar10 | uVar11 << 0x10);
  SVar17.bridgeObject = param_1;
  SVar6.unknown = param_2;
  SVar4 = Swift::String::get_subscript((Range<Index>)IVar9.cmsgPointer.unknown,SVar17);
  _swift_bridgeObjectRelease(param_2);
  uVar11 = (ulong)SVar4.unknown >> 0xe;
  IVar9.cmsgPointer.unknown = (UnsafeMutablePointer)(UnsafeMutablePointer)SVar4;
  while (uVar11 != (ulong)SVar17.str >> 0xe) {
    CVar12 = Swift::Substring::get_subscript(IVar9,SVar4);
    _Var3.unknown = CVar12.bridgeObject;
    if ((CVar12.str == (undefined *)0x20) && (_Var3.unknown == (undefined *)0xe100000000000000)) {
      _swift_bridgeObjectRelease(0xe100000000000000);
LAB_100470d18:
      if (uVar11 < (ulong)SVar4.unknown >> 0xe) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100470f68);
        (*pcVar1)();
      }
      SVar5.unknown = SVar17.str;
      SVar4 = Swift::Substring::get_subscript(SVar4.unknown,(Substring)IVar9.cmsgPointer.unknown);
      SVar13 = Swift::Substring::lowercased(SVar4);
      _Var3.unknown = SVar13.bridgeObject;
      _swift_bridgeObjectRelease(SVar5.unknown);
      if ((SVar13.str == (undefined *)0x726572616562) && (_Var3.unknown == &DAT_e600000000000000)) {
        _swift_bridgeObjectRelease(&DAT_e600000000000000);
      }
      else {
        bVar2 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)SVar13.str,_Var3,(_StringComparisonResult)0x62);
        _swift_bridgeObjectRelease(_Var3.unknown);
        if (!bVar2) break;
      }
      if ((ulong)SVar17.str >> 0xe < uVar11) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100470f6c);
        (*pcVar1)();
      }
      SVar4.unknown = SVar17.str;
      SVar5 = Swift::Substring::get_subscript((Range<Index>)IVar9.cmsgPointer.unknown,SVar17.str);
      _swift_bridgeObjectRelease(SVar6.unknown);
      IVar9.cmsgPointer.unknown = (UnsafeMutablePointer)(UnsafeMutablePointer)SVar5;
      goto joined_r0x000100470df0;
    }
    bVar2 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)CVar12.str,_Var3,(_StringComparisonResult)0x20);
    _swift_bridgeObjectRelease(_Var3.unknown);
    if (bVar2) goto LAB_100470d18;
    IVar9 = Swift::Substring::index(IVar9,SVar4);
    uVar11 = (ulong)IVar9.cmsgPointer.unknown >> 0xe;
  }
LAB_100470e40:
  _swift_bridgeObjectRelease(SVar6.unknown);
  return (String)ZEXT816(0);
joined_r0x000100470df0:
  if ((ulong)IVar9.cmsgPointer.unknown >> 0xe == (ulong)SVar17.str >> 0xe) goto LAB_100470df4;
  CVar12 = Swift::Substring::get_subscript(IVar9,SVar5);
  _Var7.unknown = CVar12.bridgeObject;
  _Var3.unknown = CVar12.str;
  if ((_Var3.unknown == (undefined *)0x20) && (_Var7.unknown == (undefined *)0xe100000000000000)) {
LAB_100470e78:
    _swift_bridgeObjectRelease(_Var7.unknown);
  }
  else {
    bVar2 = Swift::_stringCompareWithSmolCheck(_Var3,_Var7,(_StringComparisonResult)0x20);
    if ((bVar2) ||
       (_Var3.unknown == &DAT_00000009 && _Var7.unknown == (undefined *)0xe100000000000000))
    goto LAB_100470e78;
    bVar2 = Swift::_stringCompareWithSmolCheck(_Var3,_Var7,(_StringComparisonResult)0x9);
    _swift_bridgeObjectRelease(_Var7.unknown);
    if (!bVar2) {
      if ((ulong)SVar17.str >> 0xe < (ulong)IVar9.cmsgPointer.unknown >> 0xe) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100470f38);
        (*pcVar1)();
      }
      goto LAB_100470df4;
    }
  }
  IVar9 = Swift::Substring::index(IVar9,SVar5);
  goto joined_r0x000100470df0;
LAB_100470df4:
  SVar6.unknown = SVar17.str;
  SVar14.str = Swift::Substring::get_subscript((Range<Index>)IVar9.cmsgPointer.unknown,SVar17.str);
  _swift_bridgeObjectRelease(SVar4.unknown);
  if (0x3fff < ((ulong)SVar14.str ^ (ulong)SVar17.str)) {
    SVar14.bridgeObject = SVar17.str;
    SVar13 = Swift::String::__fromSubstring(SVar14);
    _swift_bridgeObjectRelease(SVar6.unknown);
    return SVar13;
  }
  goto LAB_100470e40;
}



/* Address: 0x100470f6c | FUN_100470f6c */

void FUN_100470f6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xc0) = param_3;
  *(undefined8 *)(unaff_x22 + 200) = param_4;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_1;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_2;
  FUN_1009e1f14();
  plVar1 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xd0) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100470fe8;
  FUN_100486e1c(0xa00000);
  return;
}



/* Address: 0x100470fe8 | FUN_100470fe8 */

void FUN_100470fe8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  *(undefined8 *)(lVar4 + 0xd8) = param_1;
  *(undefined8 *)(lVar4 + 0xe0) = param_2;
  *(undefined8 *)(lVar4 + 0xe8) = param_3;
  *(long *)(lVar4 + 0xf0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0xd0));
  if (unaff_x20 == 0) {
    uVar1 = *(undefined8 *)(lVar4 + 0xb8);
    uVar3 = *(undefined8 *)(lVar4 + 0xc0);
    FUN_1000da368(uVar1,uVar3);
    pcVar2 = FUN_10047106c;
  }
  else {
    uVar1 = *(undefined8 *)(lVar4 + 0xb8);
    uVar3 = *(undefined8 *)(lVar4 + 0xc0);
    FUN_1000da368(uVar1,uVar3);
    pcVar2 = FUN_100471424;
  }
  _swift_task_switch(pcVar2,uVar1,uVar3);
  return;
}



/* Address: 0x10047106c | FUN_10047106c */

void FUN_10047106c(void)

{
  ulong *puVar1;
  byte bVar2;
  ushort uVar3;
  code *pcVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  long unaff_x22;
  undefined8 *puVar20;
  ulong uVar21;
  undefined *local_88;
  undefined *local_70;
  undefined8 uStack_68;
  
  uVar13 = *(ulong *)(unaff_x22 + 0xe0);
  uVar12 = uVar13 >> 0x20;
  uVar21 = uVar13 & 0xffffffff;
  if (uVar12 < uVar21) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10047141c);
    (*pcVar4)();
  }
  uVar15 = *(undefined8 *)(unaff_x22 + 0xe8);
  if ((int)uVar15 -
      ((ushort)((ulong)uVar15 >> 0x30) & 0xff | (uint)((ulong)uVar15 >> 0x18) & 0xffff00) < uVar12)
  {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100471420);
    (*pcVar4)();
  }
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0xd8);
  *(int *)(unaff_x22 + 0x50) = (int)uVar13;
  *(int *)(unaff_x22 + 0x54) = (int)(uVar13 >> 0x20);
  *(int *)(unaff_x22 + 0x58) = (int)uVar15;
  *(short *)(unaff_x22 + 0x5c) = (short)((ulong)uVar15 >> 0x20);
  *(char *)(unaff_x22 + 0x5e) = (char)((ulong)uVar15 >> 0x30);
  *(ulong *)(unaff_x22 + 0x60) = uVar21;
  *(ulong *)(unaff_x22 + 0x68) = uVar12;
  _swift_retain();
  lVar18 = unaff_x22 + 0x48;
  FUN_100476738();
  if (*(long *)(unaff_x22 + 0x60) == *(long *)(unaff_x22 + 0x68)) {
    local_88 = (undefined *)0x0;
    uVar15 = 0xf000000000000000;
  }
  else {
    uVar12 = *(ulong *)(unaff_x22 + 0xe0);
    uVar15 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xd8);
    *(undefined **)(unaff_x22 + 0x88) = &DAT_100eeb2d0;
    FUN_10047676c();
    *(long *)(unaff_x22 + 0x90) = lVar18;
    puVar5 = &DAT_100ed6d98;
    _swift_allocObject(&DAT_100ed6d98,0x38,7);
    *(undefined **)(unaff_x22 + 0x70) = puVar5;
    *(undefined8 *)(puVar5 + 0x10) = uVar9;
    *(int *)(puVar5 + 0x18) = (int)uVar12;
    *(int *)(puVar5 + 0x1c) = (int)(uVar12 >> 0x20);
    *(int *)(puVar5 + 0x20) = (int)uVar15;
    *(short *)(puVar5 + 0x24) = (short)((ulong)uVar15 >> 0x20);
    puVar5[0x26] = (char)((ulong)uVar15 >> 0x30);
    *(ulong *)(puVar5 + 0x28) = uVar21;
    *(ulong *)(puVar5 + 0x30) = uVar12 >> 0x20;
    plVar6 = (long *)(unaff_x22 + 0x70);
    FUN_100004640(plVar6,&DAT_100eeb2d0);
    lVar16 = *plVar6;
    uVar3 = *(ushort *)((long)plVar6 + 0x14);
    bVar2 = *(byte *)((long)plVar6 + 0x16);
    lVar18 = plVar6[3];
    lVar17 = plVar6[4];
    _swift_beginAccess(lVar16 + 0x18,unaff_x22 + 0x98,0,0);
    if (SBORROW8(lVar17,lVar18)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100471424);
      (*pcVar4)();
    }
    lVar16 = *(long *)(lVar16 + 0x18) + (ulong)uVar3 * 0x100 + (ulong)bVar2 + lVar18;
    _swift_retain(*(undefined8 *)(unaff_x22 + 0xd8));
    FUN_100441844(&local_70,lVar16,lVar16 + (lVar17 - lVar18));
    FUN_100004594(unaff_x22 + 0x70);
    local_88 = local_70;
    uVar15 = uStack_68;
  }
  lVar18 = *(long *)(unaff_x22 + 200);
  puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_10045acd8();
  lVar17 = *(long *)(lVar18 + 0xb8);
  lVar18 = lVar17;
  FUN_10085d8f8();
  if (lVar18 != 0) {
    lVar18 = 0;
    do {
      lVar10 = lVar17;
      FUN_10085d980(unaff_x22 + 0x10,lVar18);
      lVar16 = lVar17;
      FUN_10085d8f8();
      if (lVar16 <= lVar18) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100471410);
        (*pcVar4)();
      }
      uVar12 = *(ulong *)(unaff_x22 + 0x20);
      uVar13 = *(ulong *)(unaff_x22 + 0x28);
      FUN_100857828();
      puVar8 = puVar5;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar21 = uVar12;
      uVar11 = uVar13;
      local_70 = puVar5;
      FUN_10046483c();
      uVar14 = (ulong)~(uint)uVar11 & 1;
      lVar7 = *(long *)(puVar5 + 0x10) + uVar14;
      if (SCARRY8(*(long *)(puVar5 + 0x10),uVar14)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100471414);
        (*pcVar4)();
      }
      if (*(long *)(puVar5 + 0x18) < lVar7) {
        FUN_10046836c(lVar7,puVar8);
        puVar5 = local_70;
        uVar21 = uVar12;
        uVar14 = uVar13;
        FUN_10046483c();
        if (((uint)uVar11 & 1) != ((uint)uVar14 & 1)) {
          Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
          return;
        }
joined_r0x000100471370:
        if ((uVar11 & 1) != 0) goto LAB_10047120c;
LAB_100471304:
        *(ulong *)(puVar5 + (uVar21 >> 6) * 8 + 0x40) =
             *(ulong *)(puVar5 + (uVar21 >> 6) * 8 + 0x40) | 1L << (uVar21 & 0x3f);
        puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar21 * 0x10);
        *puVar1 = uVar12;
        puVar1[1] = uVar13;
        plVar6 = (long *)(*(long *)(puVar5 + 0x38) + uVar21 * 0x10);
        *plVar6 = lVar16;
        plVar6[1] = lVar10;
        _swift_bridgeObjectRetain(uVar13);
        FUN_1004767d0(unaff_x22 + 0x10);
        if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100471418);
          (*pcVar4)();
        }
        *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      }
      else {
        if (((ulong)puVar8 & 1) == 0) {
          FUN_100466c90();
          puVar5 = local_70;
          goto joined_r0x000100471370;
        }
        if ((uVar11 & 1) == 0) goto LAB_100471304;
LAB_10047120c:
        plVar6 = (long *)(*(long *)(puVar5 + 0x38) + uVar21 * 0x10);
        lVar7 = plVar6[1];
        *plVar6 = lVar16;
        plVar6[1] = lVar10;
        _swift_bridgeObjectRelease(lVar7);
        FUN_1004767d0(unaff_x22 + 0x10);
      }
      lVar18 = lVar18 + 1;
      lVar16 = lVar17;
      FUN_10085d8f8();
    } while (lVar18 != lVar16);
  }
  uVar19 = *(undefined8 *)(unaff_x22 + 0xd8);
  puVar20 = *(undefined8 **)(unaff_x22 + 0xb0);
  uVar9 = *(undefined8 *)(*(long *)(unaff_x22 + 200) + 0xb0);
  FUN_100867ea8();
  _swift_release(uVar19);
  *puVar20 = uVar9;
  puVar20[1] = lVar17;
  puVar20[2] = puVar5;
  puVar20[3] = local_88;
  puVar20[4] = uVar15;
  puVar20[6] = &DAT_e400000000000000;
  puVar20[5] = 0x70636d2f;
                    /* WARNING: Could not recover jumptable at 0x0001004713e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100471424 | FUN_100471424 */

void FUN_100471424(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010047142c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100471430 | FUN_100471430 */

void FUN_100471430(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = param_4;
  *(undefined8 *)(unaff_x22 + 0x98) = param_5;
  *(undefined8 *)(unaff_x22 + 0x80) = param_2;
  *(undefined8 *)(unaff_x22 + 0x88) = param_3;
  *(undefined8 *)(unaff_x22 + 0x78) = param_1;
  lVar1 = 0;
  FUN_10045bd80();
  *(long *)(unaff_x22 + 0xa0) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0xa8) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb0) = uVar2;
  puVar3 = &DAT_100fc8158;
  FUN_1000037f0(&DAT_100fc8158,&DAT_100c4cdb8);
  *(undefined **)(unaff_x22 + 0xb8) = puVar3;
  uVar2 = *(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xc0) = uVar2;
  puVar3 = &DAT_100fc7e00;
  FUN_1000037f0(&DAT_100fc7e00,&DAT_100c4c898);
  uVar2 = *(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xf;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 200) = uVar4;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd0) = uVar2;
  _swift_task_switch(FUN_100471504,param_3,0);
  return;
}



/* Address: 0x100471504 | FUN_100471504 */

void FUN_100471504(void)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  bVar1 = (byte)*(undefined8 *)(unaff_x22 + 0x90);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x80);
  FUN_1004633b0();
  *(byte *)(unaff_x22 + 0xf8) = bVar1 & 1;
  FUN_1000da368();
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar2;
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar3;
  _swift_task_switch(FUN_100471568,uVar2,uVar3);
  return;
}



/* Address: 0x100471568 | FUN_100471568 */

void FUN_100471568(void)

{
  undefined8 uVar1;
  _StringGuts _Var2;
  long lVar3;
  undefined8 uVar4;
  _StringGuts _Var5;
  int iVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  Date DVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long unaff_x22;
  code *pcVar16;
  undefined8 uVar17;
  long lVar18;
  
  uVar13 = *(undefined8 *)(unaff_x22 + 0xd0);
  if (*(char *)(unaff_x22 + 0xf8) != '\x01') {
    uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar4 = *(undefined8 *)(unaff_x22 + 200);
    uVar17 = *(undefined8 *)(unaff_x22 + 0xb0);
    _swift_task_dealloc(uVar13);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar17);
                    /* WARNING: Could not recover jumptable at 0x0001004716d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar9 = *(long *)(unaff_x22 + 0xb8);
  lVar12 = *(long *)(unaff_x22 + 0xc0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  lVar3 = *(long *)(unaff_x22 + 0xa8);
  lVar18 = *(long *)(unaff_x22 + 0x90);
  lVar8 = 0;
  FUN_10045ba0c();
  puVar14 = (undefined8 *)(lVar18 + *(int *)(lVar8 + 0x14));
  *(undefined8 *)(unaff_x22 + 0xe8) = *puVar14;
  *(undefined8 *)(unaff_x22 + 0xf0) = puVar14[1];
  iVar6 = *(int *)(lVar8 + 0x28);
  (**(code **)(lVar3 + 0x38))(uVar13,1,1,uVar1);
  lVar8 = (long)*(int *)(lVar9 + 0x30);
  FUN_100011090(lVar18 + iVar6,lVar12,&DAT_100fc7e00,&DAT_100c4c898);
  FUN_100011090(uVar13,lVar12 + lVar8,&DAT_100fc7e00,&DAT_100c4c898);
  pcVar16 = *(code **)(lVar3 + 0x30);
  lVar9 = lVar12;
  (*pcVar16)(lVar12,1,uVar1);
  if ((int)lVar9 == 1) {
    uVar13 = *(undefined8 *)(unaff_x22 + 0xa0);
    FUN_100005808(*(undefined8 *)(unaff_x22 + 0xd0),&DAT_100fc7e00,&DAT_100c4c898);
    lVar12 = lVar12 + lVar8;
    (*pcVar16)(lVar12,1,uVar13);
    if ((int)lVar12 == 1) {
      FUN_100005808(*(undefined8 *)(unaff_x22 + 0xc0),&DAT_100fc7e00,&DAT_100c4c898);
      bVar7 = false;
      goto LAB_100471864;
    }
  }
  else {
    uVar13 = *(undefined8 *)(unaff_x22 + 0xa0);
    FUN_100011090(*(undefined8 *)(unaff_x22 + 0xc0),*(undefined8 *)(unaff_x22 + 200),&DAT_100fc7e00,
                  &DAT_100c4c898);
    lVar9 = lVar12 + lVar8;
    (*pcVar16)(lVar9,1,uVar13);
    if ((int)lVar9 != 1) {
      puVar15 = *(undefined8 **)(unaff_x22 + 200);
      puVar14 = *(undefined8 **)(unaff_x22 + 0xb0);
      FUN_1000523d8(lVar12 + lVar8,puVar14,FUN_10045bd80);
      _Var2.unknown = (undefined *)*puVar15;
      _Var5.unknown = (undefined *)puVar15[1];
      DVar11.unknown = (undefined *)*puVar14;
      if (((_Var2.unknown == DVar11.unknown) && (_Var5.unknown == (undefined *)puVar14[1])) ||
         (bVar7 = Swift::_stringCompareWithSmolCheck
                            (_Var2,_Var5,(_StringComparisonResult)(__int8)DVar11.unknown), bVar7)) {
        uVar10 = *(ulong *)(*(long *)(unaff_x22 + 200) + 0x10);
        FUN_1004827e8(uVar10,*(undefined8 *)(*(long *)(unaff_x22 + 0xb0) + 0x10));
        uVar13 = *(undefined8 *)(unaff_x22 + 0xd0);
        if ((uVar10 & 1) == 0) goto LAB_100471820;
        lVar12 = (long)*(int *)(*(long *)(unaff_x22 + 0xa0) + 0x18);
        bVar7 = Foundation::Date::___infix
                          ((undefined *)(*(long *)(unaff_x22 + 200) + lVar12),
                           (undefined *)(*(long *)(unaff_x22 + 0xb0) + lVar12),DVar11);
        FUN_100005808(uVar13,&DAT_100fc7e00,&DAT_100c4c898);
        bVar7 = !bVar7;
      }
      else {
        uVar13 = *(undefined8 *)(unaff_x22 + 0xd0);
LAB_100471820:
        FUN_100005808(uVar13,&DAT_100fc7e00,&DAT_100c4c898);
        bVar7 = true;
      }
      uVar13 = *(undefined8 *)(unaff_x22 + 0xc0);
      uVar1 = *(undefined8 *)(unaff_x22 + 200);
      FUN_10005241c(*(undefined8 *)(unaff_x22 + 0xb0),FUN_10045bd80);
      FUN_10005241c(uVar1,FUN_10045bd80);
      FUN_100005808(uVar13,&DAT_100fc7e00,&DAT_100c4c898);
      goto LAB_100471864;
    }
    uVar13 = *(undefined8 *)(unaff_x22 + 200);
    FUN_100005808(*(undefined8 *)(unaff_x22 + 0xd0),&DAT_100fc7e00,&DAT_100c4c898);
    FUN_10005241c(uVar13,FUN_10045bd80);
  }
  FUN_100005808(*(undefined8 *)(unaff_x22 + 0xc0),&DAT_100fc8158,&DAT_100c4cdb8);
  bVar7 = true;
LAB_100471864:
  *(bool *)(unaff_x22 + 0xf9) = bVar7;
  _swift_task_switch(FUN_10047189c,*(undefined8 *)(unaff_x22 + 0x98),0);
  return;
}


