/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1004da084 | FUN_1004da084 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001004da23c) */
/* WARNING: Removing unreachable block (ram,0x0001004da178) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001004da144 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

char * FUN_1004da084(long param_1)

{
  undefined8 uVar1;
  byte bVar2;
  undefined *puVar3;
  char *pcVar4;
  long lVar5;
  undefined *puVar6;
  NSString *pNVar7;
  NSDictionary *pNVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  long extraout_x8;
  ID *pIVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined1 *puVar18;
  long lVar19;
  byte *pbVar20;
  ID IVar21;
  long lVar22;
  long unaff_x21;
  long lVar23;
  long lVar24;
  uint uVar25;
  char *unaff_x28;
  char *pcVar26;
  String SVar27;
  String SVar28;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  void *local_198;
  ID local_190;
  uint local_184;
  long local_180;
  char *local_178;
  void *local_170;
  ID local_168;
  long local_160;
  char *local_158;
  long local_150;
  uint local_144;
  uint local_140;
  uint local_13c;
  long local_138;
  long local_130;
  void *local_128;
  long local_120;
  char *local_118;
  ID local_110;
  long local_108;
  long lStack_100;
  byte *local_f8;
  long lStack_f0;
  uint local_e4;
  ID local_e0;
  void *local_d8;
  char *local_d0;
  void *local_c8;
  undefined1 auStack_84 [27];
  undefined1 local_69 [9];
  undefined1 local_58;
  undefined7 uStack_57;
  void *pvVar11;
  
  puVar3 = &DAT_100fcc468;
  FUN_1000f7830(&DAT_100fcc468,&DAT_100c51ee0);
  lVar24 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar24 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar23 = (long)&local_1b0 - extraout_x8;
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_1004d9e00();
  Swift::Decoder::_container();
  if (unaff_x21 != 0) {
    FUN_100004594(param_1);
    return unaff_x28;
  }
  local_58 = 0;
  pcVar4 = (char *)Swift::KeyedDecodingContainer::_decode(puVar3,puVar3);
  local_58 = 1;
  SVar27 = Swift::KeyedDecodingContainer::_decode(&local_58,puVar3);
  pvVar11 = SVar27.bridgeObject;
  pcVar26 = SVar27.str;
  puVar10 = &DAT_100fcc380;
  FUN_1000f7830(&DAT_100fcc380,&DAT_100c54e90);
  local_69[0] = 2;
  puVar17 = &DAT_100fcc470;
  FUN_1004dbd24(&DAT_100fcc470,FUN_1004dbda0,
                PTR___protocol_witness_table_for_Swift_String___Swift_Decodable_in_Swift_100eac240,
                PTR__Swift__Swift__Dictionary<undefined,undefined>_>Swift__Decodable_100eabe78);
  Swift::KeyedDecodingContainer::_decodeIfPresent(&local_58,puVar10,local_69,puVar3,puVar10,puVar17)
  ;
  lVar19 = CONCAT71(uStack_57,local_58);
  if ((long)pcVar4 < -0x7f58) {
    if ((long)pcVar4 < -0x7f5a) {
      if (pcVar4 == (char *)0xffffffffffff8044) {
        if (lVar19 != 0) {
          if (*(long *)(lVar19 + 0x10) != 0) {
            _swift_bridgeObjectRetain(lVar19);
            lVar5 = 0x6c6961746564;
            uVar12 = 0;
            FUN_100071370();
            if ((uVar12 & 1) != 0) {
              pIVar15 = (ID *)(*(long *)(lVar19 + 0x38) + lVar5 * 0x28);
              pcVar4 = (char *)*pIVar15;
              local_d0 = (char *)pIVar15[1];
              local_e0 = pIVar15[2];
              local_d8 = (void *)pIVar15[3];
              IVar21 = pIVar15[4];
              local_c8 = pvVar11;
              FUN_10045b2bc(pcVar4);
              _swift_bridgeObjectRelease(lVar19);
              if (((uint)((ulong)local_d8 >> 0x3c) & 0xfffffc03 | ((byte)IVar21 & 0x3f) << 2) == 3)
              {
                _swift_bridgeObjectRelease(lVar19);
                _swift_bridgeObjectRelease(local_c8);
                (**(code **)(lVar24 + 8))(lVar23,puVar3);
                pcVar26 = pcVar4;
              }
              else {
                FUN_1004dbde0(pcVar4,local_d0,local_e0,local_d8,(byte)IVar21);
                _swift_bridgeObjectRelease(lVar19);
                (**(code **)(lVar24 + 8))(lVar23,puVar3);
              }
              goto LAB_1004db300;
            }
            _swift_bridgeObjectRelease(lVar19);
          }
          _swift_bridgeObjectRelease(lVar19);
        }
        (**(code **)(lVar24 + 8))(lVar23,puVar3);
        goto LAB_1004db300;
      }
      if (pcVar4 == (char *)0xffffffffffff80a5) {
        _swift_bridgeObjectRelease(pvVar11);
        if (lVar19 != 0) {
          if (*(long *)(lVar19 + 0x10) != 0) {
            _swift_bridgeObjectRetain(lVar19);
            lVar5 = 0x6c6961746564;
            uVar12 = 0;
            FUN_100071370();
            if ((uVar12 & 1) == 0) {
              _swift_bridgeObjectRelease(lVar19);
            }
            else {
              pIVar15 = (ID *)(*(long *)(lVar19 + 0x38) + lVar5 * 0x28);
              pcVar26 = (char *)*pIVar15;
              IVar21 = pIVar15[1];
              local_d0 = (char *)pIVar15[2];
              local_c8 = (void *)pIVar15[3];
              bVar2 = (byte)pIVar15[4];
              FUN_10045b2bc(pcVar26,IVar21,local_d0,local_c8,bVar2);
              _swift_bridgeObjectRelease(lVar19);
              if (((uint)((ulong)local_c8 >> 0x3c) & 0xfffffc03 | (bVar2 & 0x3f) << 2) == 3) {
                _swift_bridgeObjectRelease(lVar19);
                (**(code **)(lVar24 + 8))(lVar23,puVar3);
                goto LAB_1004db300;
              }
              FUN_1004dbde0(pcVar26,IVar21,local_d0,local_c8,bVar2);
            }
          }
          _swift_bridgeObjectRelease(lVar19);
        }
        (**(code **)(lVar24 + 8))(lVar23,puVar3);
        pcVar26 = (char *)0x0;
        goto LAB_1004db300;
      }
    }
    else {
      if (pcVar4 == (char *)0xffffffffffff80a6) {
        if (lVar19 != 0) {
          if (*(long *)(lVar19 + 0x10) != 0) {
            _swift_bridgeObjectRetain(lVar19);
            lVar5 = 0x6c6961746564;
            uVar12 = 0;
            FUN_100071370();
            if ((uVar12 & 1) != 0) {
              pIVar15 = (ID *)(*(long *)(lVar19 + 0x38) + lVar5 * 0x28);
              pcVar4 = (char *)*pIVar15;
              local_d0 = (char *)pIVar15[1];
              local_e0 = pIVar15[2];
              local_d8 = (void *)pIVar15[3];
              IVar21 = pIVar15[4];
              local_c8 = pvVar11;
              FUN_10045b2bc(pcVar4);
              _swift_bridgeObjectRelease(lVar19);
              if (((uint)((ulong)local_d8 >> 0x3c) & 0xfffffc03 | ((byte)IVar21 & 0x3f) << 2) == 3)
              {
                _swift_bridgeObjectRelease(local_c8);
                _swift_bridgeObjectRelease(lVar19);
                (**(code **)(lVar24 + 8))(lVar23,puVar3);
                pcVar26 = pcVar4;
              }
              else {
                FUN_1004dbde0(pcVar4,local_d0,local_e0,local_d8,(byte)IVar21);
                _swift_bridgeObjectRelease(lVar19);
                (**(code **)(lVar24 + 8))(lVar23,puVar3);
              }
              goto LAB_1004db300;
            }
            _swift_bridgeObjectRelease(lVar19);
          }
          _swift_bridgeObjectRelease(lVar19);
        }
        (**(code **)(lVar24 + 8))(lVar23,puVar3);
        goto LAB_1004db300;
      }
      if (pcVar4 == (char *)0xffffffffffff80a7) {
        if (lVar19 != 0) {
          if (*(long *)(lVar19 + 0x10) != 0) {
            _swift_bridgeObjectRetain(lVar19);
            lVar5 = 0x6c6961746564;
            uVar12 = 0;
            FUN_100071370();
            if ((uVar12 & 1) != 0) {
              pIVar15 = (ID *)(*(long *)(lVar19 + 0x38) + lVar5 * 0x28);
              pcVar4 = (char *)*pIVar15;
              local_d0 = (char *)pIVar15[1];
              local_e0 = pIVar15[2];
              local_d8 = (void *)pIVar15[3];
              IVar21 = pIVar15[4];
              local_c8 = pvVar11;
              FUN_10045b2bc(pcVar4);
              _swift_bridgeObjectRelease(lVar19);
              if (((uint)((ulong)local_d8 >> 0x3c) & 0xfffffc03 | ((byte)IVar21 & 0x3f) << 2) == 3)
              {
                _swift_bridgeObjectRelease(local_c8);
                _swift_bridgeObjectRelease(lVar19);
                (**(code **)(lVar24 + 8))(lVar23,puVar3);
                pcVar26 = pcVar4;
              }
              else {
                FUN_1004dbde0(pcVar4,local_d0,local_e0,local_d8,(byte)IVar21);
                _swift_bridgeObjectRelease(lVar19);
                (**(code **)(lVar24 + 8))(lVar23,puVar3);
              }
              goto LAB_1004db300;
            }
            _swift_bridgeObjectRelease(lVar19);
          }
          _swift_bridgeObjectRelease(lVar19);
        }
        (**(code **)(lVar24 + 8))(lVar23,puVar3);
        goto LAB_1004db300;
      }
    }
  }
  else {
    if ((long)pcVar4 < -0x7d01) {
      if (pcVar4 == (char *)0xffffffffffff80a8) {
        if (lVar19 != 0) {
          if (*(long *)(lVar19 + 0x10) != 0) {
            _swift_bridgeObjectRetain(lVar19);
            lVar5 = 0x6c6961746564;
            uVar12 = 0;
            FUN_100071370();
            if ((uVar12 & 1) != 0) {
              pIVar15 = (ID *)(*(long *)(lVar19 + 0x38) + lVar5 * 0x28);
              pcVar4 = (char *)*pIVar15;
              local_d0 = (char *)pIVar15[1];
              local_e0 = pIVar15[2];
              local_d8 = (void *)pIVar15[3];
              IVar21 = pIVar15[4];
              local_c8 = pvVar11;
              FUN_10045b2bc(pcVar4);
              _swift_bridgeObjectRelease(lVar19);
              if (((uint)((ulong)local_d8 >> 0x3c) & 0xfffffc03 | ((byte)IVar21 & 0x3f) << 2) == 3)
              {
                _swift_bridgeObjectRelease(local_c8);
                _swift_bridgeObjectRelease(lVar19);
                (**(code **)(lVar24 + 8))(lVar23,puVar3);
                pcVar26 = pcVar4;
              }
              else {
                FUN_1004dbde0(pcVar4,local_d0,local_e0,local_d8,(byte)IVar21);
                _swift_bridgeObjectRelease(lVar19);
                (**(code **)(lVar24 + 8))(lVar23,puVar3);
              }
              goto LAB_1004db300;
            }
            _swift_bridgeObjectRelease(lVar19);
          }
          _swift_bridgeObjectRelease(lVar19);
        }
        (**(code **)(lVar24 + 8))(lVar23,puVar3);
        goto LAB_1004db300;
      }
      if (pcVar4 != (char *)0xffffffffffff82d6) goto LAB_1004da79c;
      local_c8 = pvVar11;
      if (lVar19 != 0) {
        if (*(long *)(lVar19 + 0x10) != 0) {
          lVar5 = 0x7461746963696c65;
          uVar12 = 0xec000000736e6f69;
          FUN_100071370();
          if ((uVar12 & 1) != 0) {
            plVar16 = (long *)(*(long *)(lVar19 + 0x38) + lVar5 * 0x28);
            local_138 = *plVar16;
            local_108 = plVar16[1];
            lStack_100 = plVar16[2];
            local_130 = plVar16[3];
            bVar2 = *(byte *)(plVar16 + 4);
            FUN_10045b2bc();
            _swift_bridgeObjectRelease(lVar19);
            if ((((uint)((ulong)local_130 >> 0x3c) & 0xfffffc03 | (bVar2 & 0x3f) << 2) == 5) &&
               (lVar19 = *(long *)(local_138 + 0x10), lVar19 != 0)) {
              pbVar20 = (byte *)(local_138 + 0x40);
              lVar5 = local_108;
              lVar13 = lStack_100;
              puVar10 = PTR___swiftEmptyArrayStorage_100eae0d8;
              local_144 = (uint)bVar2;
              do {
                IVar21 = *(ID *)(pbVar20 + -8);
                bVar2 = *pbVar20;
                if ((((uint)(IVar21 >> 0x3c) & 0xfffffc03 | (bVar2 & 0x3f) << 2) == 6) &&
                   (lVar22 = *(long *)(pbVar20 + -0x20), *(long *)(lVar22 + 0x10) != 0)) {
                  local_d0 = *(char **)(pbVar20 + -0x18);
                  local_d8 = *(void **)(pbVar20 + -0x10);
                  local_f8 = pbVar20;
                  lStack_f0 = lVar19;
                  local_e0 = IVar21;
                  FUN_10045b2bc(lVar22,local_d0,local_d8,IVar21,bVar2);
                  local_e4 = (uint)bVar2;
                  FUN_10045b2bc(lVar22,local_d0,local_d8,local_e0,bVar2);
                  _swift_bridgeObjectRetain(lVar22);
                  lVar19 = 0x65646f6d;
                  uVar12 = 0;
                  FUN_100071370();
                  IVar21 = local_e0;
                  if ((uVar12 & 1) == 0) {
                    FUN_1004dbde0(lVar22,local_d0,local_d8,local_e0,local_e4);
                    FUN_1004dbde0(lVar22,local_d0,local_d8,IVar21,local_e4);
                    _swift_bridgeObjectRelease(lVar22);
                    lVar5 = local_108;
                    lVar13 = lStack_100;
                    lVar19 = lStack_f0;
                    pbVar20 = local_f8;
                  }
                  else {
                    plVar16 = (long *)(*(long *)(lVar22 + 0x38) + lVar19 * 0x28);
                    local_120 = *plVar16;
                    local_118 = (char *)plVar16[1];
                    local_128 = (void *)plVar16[2];
                    local_110 = plVar16[3];
                    bVar2 = *(byte *)(plVar16 + 4);
                    FUN_10045b2bc();
                    FUN_1004dbde0(lVar22,local_d0,local_d8,local_e0,local_e4);
                    uVar25 = (uint)bVar2;
                    if (((uint)(local_110 >> 0x3c) & 0xfffffc03 | (uVar25 & 0x3f) << 2) != 3) {
                      FUN_1004dbde0(local_120,local_118,local_128,local_110,bVar2);
                      pvVar11 = local_d8;
                      FUN_1004dbde0(lVar22,local_d0,local_d8,local_e0,local_e4);
                      pcVar4 = local_d0;
                      IVar21 = local_e0;
                      uVar25 = local_e4;
                      goto LAB_1004dadc0;
                    }
                    pcVar4 = local_d0;
                    pvVar11 = local_d8;
                    IVar21 = local_e0;
                    lVar19 = lVar22;
                    local_13c = uVar25;
                    uVar14 = local_e4;
                    uVar25 = local_e4;
                    if (*(long *)(lVar22 + 0x10) == 0) {
LAB_1004dad84:
                      FUN_1004dbde0(lVar22,pcVar4,pvVar11,IVar21,uVar14);
                      puVar18 = &stack0xffffffffffffffc4;
                      lVar5 = local_120;
                      pcVar4 = local_118;
                      pvVar11 = local_128;
                      IVar21 = local_110;
                      lVar22 = lVar19;
LAB_1004dada8:
                      FUN_1004dbde0(lVar5,pcVar4,pvVar11,IVar21,*(undefined4 *)(puVar18 + -0x100));
                      pcVar4 = local_d0;
                      pvVar11 = local_d8;
                      IVar21 = local_e0;
                    }
                    else {
                      _swift_bridgeObjectRetain(lVar22);
                      lVar5 = 0x7461746963696c65;
                      uVar12 = 0xed000064496e6f69;
                      FUN_100071370();
                      pvVar11 = local_d8;
                      if ((uVar12 & 1) == 0) {
                        FUN_1004dbde0(lVar22,local_d0,local_d8,local_e0,local_e4);
                        pcVar4 = local_d0;
                        IVar21 = local_e0;
                        uVar14 = local_e4;
                        uVar25 = local_e4;
                        goto LAB_1004dad84;
                      }
                      plVar16 = (long *)(*(long *)(lVar22 + 0x38) + lVar5 * 0x28);
                      local_160 = *plVar16;
                      local_158 = (char *)plVar16[1];
                      local_170 = (void *)plVar16[2];
                      IVar21 = plVar16[3];
                      local_140 = (uint)*(byte *)(plVar16 + 4);
                      FUN_10045b2bc();
                      FUN_1004dbde0(lVar22,local_d0,local_d8,local_e0,local_e4);
                      uVar25 = local_e4;
                      local_168 = IVar21;
                      if (((uint)(IVar21 >> 0x3c) & 0xfffffc03 | (local_140 & 0x3f) << 2) != 3) {
                        FUN_1004dbde0(local_160,local_158,local_170,IVar21,local_140);
                        pcVar4 = local_d0;
                        pvVar11 = local_d8;
                        IVar21 = local_e0;
                        uVar14 = local_e4;
                        uVar25 = local_e4;
                        goto LAB_1004dad84;
                      }
                      local_150 = lVar22;
                      if (*(long *)(lVar22 + 0x10) == 0) {
                        FUN_1004dbde0(lVar22,local_d0,local_d8,local_e0,local_e4);
                        FUN_1004dbde0(local_120,local_118,local_128,local_110,local_13c);
                        puVar18 = &stack0xffffffffffffffc0;
                        lVar5 = local_160;
                        pcVar4 = local_158;
                        pvVar11 = local_170;
                        IVar21 = local_168;
                        goto LAB_1004dada8;
                      }
                      _swift_bridgeObjectRetain(lVar22);
                      lVar19 = 0x6c7275;
                      uVar12 = 0;
                      FUN_100071370();
                      pvVar11 = local_d8;
                      IVar21 = local_e0;
                      if ((uVar12 & 1) != 0) {
                        plVar16 = (long *)(*(long *)(local_150 + 0x38) + lVar19 * 0x28);
                        local_180 = *plVar16;
                        local_178 = (char *)plVar16[1];
                        local_198 = (void *)plVar16[2];
                        IVar21 = plVar16[3];
                        bVar2 = *(byte *)(plVar16 + 4);
                        FUN_10045b2bc();
                        FUN_1004dbde0(local_150,local_d0,local_d8,local_e0,local_e4);
                        local_184 = (uint)bVar2;
                        local_190 = IVar21;
                        if (((uint)(IVar21 >> 0x3c) & 0xfffffc03 | (local_184 & 0x3f) << 2) != 3) {
                          FUN_1004dbde0(local_180,local_178,local_198,IVar21,local_184);
                          uVar25 = local_e4;
                          lVar19 = local_150;
                          FUN_1004dbde0(local_150,local_d0,local_d8,local_e0,local_e4);
                          lVar22 = local_160;
                          pcVar4 = local_158;
                          pvVar11 = local_170;
                          IVar21 = local_168;
                          uVar14 = local_140;
                          goto LAB_1004dad84;
                        }
                        if (*(long *)(local_150 + 0x10) != 0) {
                          lVar19 = 0x6567617373656d;
                          uVar12 = 0;
                          FUN_100071370();
                          if ((uVar12 & 1) != 0) {
                            puVar17 = (undefined8 *)(*(long *)(local_150 + 0x38) + lVar19 * 0x28);
                            local_1a8 = *puVar17;
                            local_1a0 = puVar17[1];
                            local_1b0 = puVar17[2];
                            uVar1 = puVar17[3];
                            bVar2 = *(byte *)(puVar17 + 4);
                            FUN_10045b2bc();
                            FUN_1004dbde0(local_150,local_d0,local_d8,local_e0,local_e4);
                            if (((uint)((ulong)uVar1 >> 0x3c) & 0xfffffc03 | (bVar2 & 0x3f) << 2) ==
                                3) {
                              puVar6 = puVar10;
                              _swift_isUniquelyReferenced_nonNull_native();
                              puVar9 = puVar10;
                              if (((ulong)puVar6 & 1) == 0) {
                                puVar9 = (undefined *)0x0;
                                FUN_1004a48c4(0,*(long *)(puVar10 + 0x10) + 1,1,puVar10);
                              }
                              uVar12 = *(ulong *)(puVar9 + 0x10);
                              puVar10 = puVar9;
                              if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar12) {
                                puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
                                FUN_1004a48c4(puVar10,uVar12 + 1,1,puVar9);
                              }
                              *(ulong *)(puVar10 + 0x10) = uVar12 + 1;
                              *(long *)(puVar10 + uVar12 * 0x40 + 0x20) = local_120;
                              *(char **)(puVar10 + uVar12 * 0x40 + 0x28) = local_118;
                              *(long *)(puVar10 + uVar12 * 0x40 + 0x30) = local_160;
                              *(char **)(puVar10 + uVar12 * 0x40 + 0x38) = local_158;
                              *(long *)(puVar10 + uVar12 * 0x40 + 0x40) = local_180;
                              *(char **)(puVar10 + uVar12 * 0x40 + 0x48) = local_178;
                              *(undefined8 *)(puVar10 + uVar12 * 0x40 + 0x50) = local_1a8;
                              *(undefined8 *)(puVar10 + uVar12 * 0x40 + 0x58) = local_1a0;
                              lVar22 = local_150;
                              pcVar4 = local_d0;
                              pvVar11 = local_d8;
                              IVar21 = local_e0;
                              uVar25 = local_e4;
                            }
                            else {
                              FUN_1004dbde0(local_1a8,local_1a0,local_1b0,uVar1,bVar2);
                              FUN_1004dbde0(local_150,local_d0,local_d8,local_e0,local_e4);
                              FUN_1004dbde0(local_180,local_178,local_198,local_190,local_184);
                              FUN_1004dbde0(local_160,local_158,local_170,local_168,local_140);
                              lVar22 = local_120;
                              pcVar4 = local_118;
                              pvVar11 = local_128;
                              IVar21 = local_110;
                              uVar25 = local_13c;
                            }
                            goto LAB_1004dadc0;
                          }
                        }
                        uVar25 = local_e4;
                        lVar22 = local_150;
                        FUN_1004dbde0(local_150,local_d0,local_d8,local_e0,local_e4);
                        FUN_1004dbde0(local_120,local_118,local_128,local_110,local_13c);
                        FUN_1004dbde0(local_160,local_158,local_170,local_168,local_140);
                        puVar18 = auStack_84;
                        lVar5 = local_180;
                        pcVar4 = local_178;
                        pvVar11 = local_198;
                        IVar21 = local_190;
                        goto LAB_1004dada8;
                      }
                      FUN_1004dbde0(local_150,local_d0,local_d8,local_e0,local_e4);
                      uVar25 = local_e4;
                      FUN_1004dbde0(local_150,local_d0,pvVar11,IVar21,local_e4);
                      FUN_1004dbde0(local_120,local_118,local_128,local_110,local_13c);
                      FUN_1004dbde0(local_160,local_158,local_170,local_168,local_140);
                      lVar22 = local_150;
                      pcVar4 = local_d0;
                      IVar21 = local_e0;
                    }
LAB_1004dadc0:
                    FUN_1004dbde0(lVar22,pcVar4,pvVar11,IVar21,uVar25);
                    lVar5 = local_108;
                    lVar13 = lStack_100;
                    lVar19 = lStack_f0;
                    pbVar20 = local_f8;
                  }
                }
                pbVar20 = pbVar20 + 0x28;
                lVar19 = lVar19 + -1;
              } while (lVar19 != 0);
              FUN_1004dbde0(local_138,lVar5,lVar13,local_130,local_144);
            }
            else {
              FUN_1004dbde0(local_138,local_108,lStack_100,local_130,bVar2);
            }
            goto LAB_1004db2e4;
          }
        }
        _swift_bridgeObjectRelease(lVar19);
      }
LAB_1004db2e4:
      (**(code **)(lVar24 + 8))(lVar23,puVar3);
      goto LAB_1004db300;
    }
    if (pcVar4 == (char *)0xffffffffffff82ff) {
      if (lVar19 != 0) {
        local_c8 = pvVar11;
        if (*(long *)(lVar19 + 0x10) != 0) {
          lVar5 = 0x726f727265;
          uVar12 = 0;
          FUN_100071370();
          if ((uVar12 & 1) != 0) {
            puVar17 = (undefined8 *)(*(long *)(lVar19 + 0x38) + lVar5 * 0x28);
            local_d0 = (char *)*puVar17;
            local_d8 = (void *)puVar17[1];
            local_e0 = puVar17[2];
            uVar1 = puVar17[3];
            bVar2 = *(byte *)(puVar17 + 4);
            FUN_10045b2bc();
            _swift_bridgeObjectRelease(lVar19);
            if (((uint)((ulong)uVar1 >> 0x3c) & 0xfffffc03 | (bVar2 & 0x3f) << 2) == 3) {
              _swift_bridgeObjectRelease(local_c8);
              SVar27.bridgeObject = local_d8;
              SVar27.str = local_d0;
            }
            else {
              FUN_1004dbde0(local_d0,local_d8,local_e0,uVar1,bVar2);
              SVar27.bridgeObject = local_c8;
              SVar27.str = pcVar26;
            }
            goto LAB_1004da7c4;
          }
        }
        _swift_bridgeObjectRelease(lVar19);
        SVar27.bridgeObject = local_c8;
        SVar27.str = pcVar26;
      }
LAB_1004da7c4:
      local_c8 = SVar27.bridgeObject;
      local_d0 = "or: ";
      puVar10 = &DAT_100fcb730;
      FUN_1000f7830(&DAT_100fcb730,&DAT_100c50520);
      _swift_initStackObject();
      *(undefined8 *)(puVar10 + 0x18) = 2;
      *(undefined8 *)(puVar10 + 0x10) = 1;
      SVar28 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      *(char **)(puVar10 + 0x20) = SVar28.str;
      *(undefined **)(puVar10 + 0x48) = PTR___type_metadata_for_Swift_String_100eac208;
      *(void **)(puVar10 + 0x28) = SVar28.bridgeObject;
      *(char **)(puVar10 + 0x30) = SVar27.str;
      *(void **)(puVar10 + 0x38) = local_c8;
      puVar6 = puVar10;
      FUN_1004a67b4(puVar10);
      _swift_setDeallocating(puVar10);
      FUN_1000fb4c4(puVar10 + 0x20,&DAT_100fcb4b0,&DAT_100c50300);
      puVar10 = &_OBJC_CLASS___NSError;
      _objc_allocWithZone();
      pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      pNVar8 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(puVar6);
      pcVar26 = (char *)objc_stub::initWithDomain_code_userInfo_
                                  ((ID)puVar10,pNVar7,0xffffffffffff82ff,pNVar8);
      (**(code **)(lVar24 + 8))(lVar23,puVar3);
      goto LAB_1004db300;
    }
    if (pcVar4 == (char *)0xffffffffffff8300) {
      (**(code **)(lVar24 + 8))(lVar23,puVar3);
      _swift_bridgeObjectRelease(pvVar11);
      _swift_bridgeObjectRelease(lVar19);
      pcVar26 = (char *)0x0;
      goto LAB_1004db300;
    }
  }
LAB_1004da79c:
  (**(code **)(lVar24 + 8))(lVar23,puVar3);
  _swift_bridgeObjectRelease(lVar19);
  pcVar26 = pcVar4;
LAB_1004db300:
  FUN_100004594(param_1);
  return pcVar26;
}



/* Address: 0x1004db364 | thunk_FUN_1004db368 */

void thunk_FUN_1004db368(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc398 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c51aa0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c51aa0,&DAT_100eda928);
  DAT_100fcc398 = pTVar1;
  return;
}



/* Address: 0x1004db368 | FUN_1004db368 */

void FUN_1004db368(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc398 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c51aa0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c51aa0,&DAT_100eda928);
  DAT_100fcc398 = pTVar1;
  return;
}



/* Address: 0x1004db3a8 | thunk_FUN_1004db3ac */

void thunk_FUN_1004db3ac(void)

{
  FUN_1004db3ac();
  return;
}



/* Address: 0x1004db3ac | FUN_1004db3ac */

void FUN_1004db3ac(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc3a0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c51ac8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c51ac8,&DAT_100eda9c8);
  DAT_100fcc3a0 = pTVar1;
  return;
}



/* Address: 0x1004db3ec | thunk_FUN_1004db3f0 */

void thunk_FUN_1004db3f0(void)

{
  FUN_1004db3f0();
  return;
}



/* Address: 0x1004db3f0 | FUN_1004db3f0 */

void FUN_1004db3f0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc3a8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c51bc8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c51bc8,&DAT_100eda9c8);
  DAT_100fcc3a8 = pTVar1;
  return;
}



/* Address: 0x1004db430 | FUN_1004db430 */

void FUN_1004db430(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x38));
  return;
}



/* Address: 0x1004db468 | FUN_1004db468 */

undefined8 * FUN_1004db468(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar3 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar3;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  return param_1;
}



/* Address: 0x1004db4cc | FUN_1004db4cc */

undefined8 * FUN_1004db4cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[4] = param_2[4];
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[6] = param_2[6];
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x1004db578 | FUN_1004db578 */

void FUN_1004db578(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar5 = param_2[4];
  uVar7 = param_2[7];
  uVar6 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar5;
  param_1[7] = uVar7;
  param_1[6] = uVar6;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  return;
}



/* Address: 0x1004db58c | FUN_1004db58c */

undefined8 * FUN_1004db58c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[7];
  uVar2 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Address: 0x1004db5f0 | FUN_1004db5f0 */

undefined1  [16] FUN_1004db5f0(void)

{
  return ZEXT816(0x100eda928);
}



/* Address: 0x1004db600 | FUN_1004db600 */

void FUN_1004db600(undefined8 *param_1)

{
  FUN_1004d9f84(*param_1,param_1[1],param_1[2],*(undefined1 *)(param_1 + 3));
  return;
}



/* Address: 0x1004db614 | FUN_1004db614 */

undefined8 * FUN_1004db614(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar4 = param_2[2];
  uVar3 = *(undefined1 *)(param_2 + 3);
  FUN_1004d9ee8(uVar1,uVar2,uVar4,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar4;
  *(undefined1 *)(param_1 + 3) = uVar3;
  return param_1;
}



/* Address: 0x1004db670 | FUN_1004db670 */

undefined8 * FUN_1004db670(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar8 = param_2[2];
  uVar5 = *(undefined1 *)(param_2 + 3);
  FUN_1004d9ee8(uVar1,uVar3,uVar8,uVar5);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  uVar7 = param_1[2];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar8;
  uVar6 = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = uVar5;
  FUN_1004d9f84(uVar2,uVar4,uVar7,uVar6);
  return param_1;
}



/* Address: 0x1004db6dc | FUN_1004db6dc */

void FUN_1004db6dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = *(undefined8 *)((long)param_2 + 9);
  *(undefined8 *)((long)param_1 + 0x11) = *(undefined8 *)((long)param_2 + 0x11);
  *(undefined8 *)((long)param_1 + 9) = uVar3;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x1004db6f0 | FUN_1004db6f0 */

undefined8 * FUN_1004db6f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar6 = param_2[2];
  uVar3 = *(undefined1 *)(param_2 + 3);
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar7 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[2] = uVar6;
  uVar4 = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = uVar3;
  FUN_1004d9f84(uVar5,uVar1,uVar2,uVar4);
  return param_1;
}



/* Address: 0x1004db73c | FUN_1004db73c */

int FUN_1004db73c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xf7 < param_2) && (*(char *)((long)param_1 + 0x19) != '\0')) {
    return *param_1 + 0xf8;
  }
  uVar1 = *(byte *)(param_1 + 6) ^ 0xff;
  if (*(byte *)(param_1 + 6) < 9) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x1004db784 | FUN_1004db784 */

void FUN_1004db784(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xf8) {
    if (0xf7 < param_3) {
      *(undefined1 *)((long)param_1 + 0x19) = 0;
    }
    if (param_2 != 0) {
      *(char *)(param_1 + 3) = -(char)param_2;
      return;
    }
  }
  else {
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    *param_1 = (ulong)(param_2 - 0xf8);
    if (0xf7 < param_3) {
      *(undefined1 *)((long)param_1 + 0x19) = 1;
    }
  }
  return;
}



/* Address: 0x1004db7cc | FUN_1004db7cc */

uint FUN_1004db7cc(int *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1 + 8;
  if (*(byte *)(param_1 + 6) < 8) {
    uVar1 = (uint)*(byte *)(param_1 + 6);
  }
  return uVar1;
}



/* Address: 0x1004db7e4 | FUN_1004db7e4 */

void FUN_1004db7e4(ulong *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 - 8;
  if (7 < param_2) {
    param_1[1] = 0;
    param_1[2] = 0;
    param_2 = 8;
    *param_1 = (ulong)uVar1;
  }
  *(char *)(param_1 + 3) = (char)param_2;
  return;
}



/* Address: 0x1004db800 | FUN_1004db800 */

undefined1  [16] FUN_1004db800(void)

{
  return ZEXT816(0x100eda9c8);
}



/* Address: 0x1004db810 | FUN_1004db810 */

undefined1  [16] FUN_1004db810(void)

{
  return ZEXT816(0x100edaa58);
}



/* Address: 0x1004db820 | FUN_1004db820 */

undefined1  [16] FUN_1004db820(void)

{
  return ZEXT816(0x100edaae8);
}



/* Address: 0x1004db830 | thunk_FUN_1004db834 */

void thunk_FUN_1004db834(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc3b0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c51cf8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c51cf8,&DAT_100edaae8);
  DAT_100fcc3b0 = pTVar1;
  return;
}



/* Address: 0x1004db834 | FUN_1004db834 */

void FUN_1004db834(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc3b0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c51cf8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c51cf8,&DAT_100edaae8);
  DAT_100fcc3b0 = pTVar1;
  return;
}



/* Address: 0x1004db874 | thunk_FUN_1004db878 */

void thunk_FUN_1004db878(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc3b8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c51de8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c51de8,&DAT_100edaa58);
  DAT_100fcc3b8 = pTVar1;
  return;
}



/* Address: 0x1004db878 | FUN_1004db878 */

void FUN_1004db878(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc3b8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c51de8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c51de8,&DAT_100edaa58);
  DAT_100fcc3b8 = pTVar1;
  return;
}



/* Address: 0x1004db8b8 | thunk_FUN_1004db8bc */

void thunk_FUN_1004db8bc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc3c0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c51d48;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c51d48,&DAT_100edaa58);
  DAT_100fcc3c0 = pTVar1;
  return;
}



/* Address: 0x1004db8bc | FUN_1004db8bc */

void FUN_1004db8bc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc3c0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c51d48;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c51d48,&DAT_100edaa58);
  DAT_100fcc3c0 = pTVar1;
  return;
}



/* Address: 0x1004db8fc | thunk_FUN_1004db900 */

void thunk_FUN_1004db900(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc3c8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c51d20;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c51d20,&DAT_100edaa58);
  DAT_100fcc3c8 = pTVar1;
  return;
}



/* Address: 0x1004db900 | FUN_1004db900 */

void FUN_1004db900(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc3c8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c51d20;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c51d20,&DAT_100edaa58);
  DAT_100fcc3c8 = pTVar1;
  return;
}



/* Address: 0x1004db940 | thunk_FUN_1004db944 */

void thunk_FUN_1004db944(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc3d0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c51c90;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c51c90,&DAT_100edaae8);
  DAT_100fcc3d0 = pTVar1;
  return;
}



/* Address: 0x1004db944 | FUN_1004db944 */

void FUN_1004db944(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc3d0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c51c90;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c51c90,&DAT_100edaae8);
  DAT_100fcc3d0 = pTVar1;
  return;
}



/* Address: 0x1004db984 | thunk_FUN_1004db988 */

void thunk_FUN_1004db988(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc3d8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c51c68;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c51c68,&DAT_100edaae8);
  DAT_100fcc3d8 = pTVar1;
  return;
}



/* Address: 0x1004db988 | FUN_1004db988 */

void FUN_1004db988(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc3d8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c51c68;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c51c68,&DAT_100edaae8);
  DAT_100fcc3d8 = pTVar1;
  return;
}



/* Address: 0x1004db9c8 | FUN_1004db9c8 */

undefined8 FUN_1004db9c8(undefined8 param_1,undefined8 param_2)

{
  FUN_1005834e4(param_2,param_1);
  return param_2;
}



/* Address: 0x1004dba04 | FUN_1004dba04 */

undefined8 FUN_1004dba04(undefined8 param_1)

{
  FUN_10058347c();
  return param_1;
}



/* Address: 0x1004dba38 | FUN_1004dba38 */

undefined8 FUN_1004dba38(undefined8 param_1,undefined8 param_2)

{
  FUN_100582d94(param_2,param_1);
  return param_2;
}



/* Address: 0x1004dba74 | FUN_1004dba74 */

undefined8 FUN_1004dba74(undefined8 param_1)

{
  FUN_100582d2c();
  return param_1;
}



/* Address: 0x1004dbaa8 | FUN_1004dbaa8 */

undefined8 FUN_1004dbaa8(undefined8 param_1,undefined8 param_2)

{
  FUN_100579040(param_2,param_1);
  return param_2;
}



/* Address: 0x1004dbae4 | FUN_1004dbae4 */

undefined1 FUN_1004dbae4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x78);
}



/* Address: 0x1004dbaec | FUN_1004dbaec */

undefined8 FUN_1004dbaec(undefined8 param_1)

{
  FUN_100578fec();
  return param_1;
}



/* Address: 0x1004dbb20 | FUN_1004dbb20 */

void FUN_1004dbb20(void)

{
  uint in_w6;
  
  if ((in_w6 >> 7 & 1) == 0) {
    FUN_1004dbb2c();
    return;
  }
  _swift_bridgeObjectRetain();
  return;
}



/* Address: 0x1004dbb2c | FUN_1004dbb2c */

void FUN_1004dbb2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,uint param_7)

{
  undefined8 uVar1;
  
  param_7 = param_7 & 0xff;
  if (param_7 < 3) {
    uVar1 = param_2;
    param_5 = param_4;
    if (1 < param_7 - 1) {
      if (param_7 != 0) {
        return;
      }
      goto LAB_1004dbba8;
    }
  }
  else {
    uVar1 = param_4;
    if ((param_7 != 3) && (param_5 = param_4, uVar1 = param_3, param_7 != 4)) {
      return;
    }
    _swift_bridgeObjectRetain(param_6);
    _swift_bridgeObjectRetain(param_2);
  }
  param_2 = param_5;
  _swift_bridgeObjectRetain(uVar1);
LAB_1004dbba8:
  _swift_bridgeObjectRetain(param_2);
  return;
}



/* Address: 0x1004dbbc8 | FUN_1004dbbc8 */

void FUN_1004dbbc8(void)

{
  uint in_w6;
  
  if ((in_w6 >> 7 & 1) == 0) {
    FUN_1004dbbd4();
    return;
  }
  _swift_bridgeObjectRelease();
  return;
}



/* Address: 0x1004dbbd4 | FUN_1004dbbd4 */

void FUN_1004dbbd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,uint param_7)

{
  param_7 = param_7 & 0xff;
  if (param_7 < 3) {
    if (1 < param_7 - 1) {
      if (param_7 != 0) {
        return;
      }
      goto LAB_1004dbc5c;
    }
  }
  else {
    if ((param_7 != 3) && (param_5 = param_4, param_4 = param_3, param_7 != 4)) {
      return;
    }
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(param_4);
    param_2 = param_5;
    param_4 = param_6;
  }
  _swift_bridgeObjectRelease(param_2);
  param_2 = param_4;
LAB_1004dbc5c:
  _swift_bridgeObjectRelease(param_2);
  return;
}



/* Address: 0x1004dbc6c | FUN_1004dbc6c */

void FUN_1004dbc6c(long param_1)

{
  undefined8 in_x4;
  
  if (param_1 == 1) {
    return;
  }
  _swift_bridgeObjectRetain(in_x4);
  _swift_bridgeObjectRetain(param_1);
  return;
}



/* Address: 0x1004dbca0 | FUN_1004dbca0 */

undefined8 FUN_1004dbca0(undefined8 param_1)

{
  FUN_100565ed8();
  return param_1;
}



/* Address: 0x1004dbcd4 | FUN_1004dbcd4 */

undefined8 FUN_1004dbcd4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fcc460;
  FUN_1000f7830(&DAT_100fcc460,&DAT_100c51ed0);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1004dbd24 | FUN_1004dbd24 */

void FUN_1004dbd24(long *param_1,code *param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 local_50;
  undefined *puStack_48;
  
  if (*param_1 == 0) {
    puVar1 = &DAT_100fcc380;
    FUN_1000f8b08(&DAT_100fcc380,&DAT_100c54e90);
    puVar2 = puVar1;
    (*param_2)();
    local_50 = param_3;
    puStack_48 = puVar2;
    _swift_getWitnessTable(param_4,puVar1,&local_50);
    *param_1 = param_4;
  }
  return;
}



/* Address: 0x1004dbda0 | FUN_1004dbda0 */

void FUN_1004dbda0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc478 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c55458;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c55458,&DAT_100edd000);
  DAT_100fcc478 = pTVar1;
  return;
}



/* Address: 0x1004dbde0 | FUN_1004dbde0 */

void FUN_1004dbde0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5)

{
  uint uVar1;
  
  uVar1 = (uint)((ulong)param_4 >> 0x3c) & 3 | (param_5 & 0x3f) << 2;
  if (uVar1 < 5) {
    if (uVar1 == 3) {
      _swift_bridgeObjectRelease(param_2);
      return;
    }
    if (uVar1 == 4) {
      _swift_bridgeObjectRelease(param_2);
      FUN_10003bf2c(param_3,param_4);
      return;
    }
  }
  else if ((uVar1 == 5) || (uVar1 == 6)) {
    _swift_bridgeObjectRelease();
    return;
  }
  return;
}



/* Address: 0x1004dbe54 | FUN_1004dbe54 */

undefined8 FUN_1004dbe54(undefined8 param_1,undefined8 param_2)

{
  FUN_1004db468(param_2,param_1,&DAT_100eda928);
  return param_2;
}



/* Address: 0x1004dbe88 | FUN_1004dbe88 */

undefined8 FUN_1004dbe88(undefined8 param_1)

{
  FUN_1004db430(param_1,&DAT_100eda928);
  return param_1;
}



/* Address: 0x1004dbeb4 | FUN_1004dbeb4 */

char * FUN_1004dbeb4(void)

{
  UUID UVar1;
  UUID UVar2;
  long extraout_x8;
  long lVar3;
  String SVar4;
  
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  lVar3 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar3 + 0x40));
  UVar2 = Foundation::UUID::init();
  SVar4 = Foundation::UUID::get_uuidString(UVar2);
  (**(code **)(lVar3 + 8))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar1.unknown);
  return SVar4.str;
}



/* Address: 0x1004dbf48 | FUN_1004dbf48 */

bool FUN_1004dbf48(_StringGuts param_1,_StringGuts param_2,char param_3,undefined *param_4,
                  undefined *param_5,char param_6)

{
  bool bVar1;
  
  if (param_3 == '\x01') {
    return param_6 == '\x01' && param_1.unknown == param_4;
  }
  if (param_6 == '\x01') {
    return false;
  }
  if ((param_1.unknown == param_4) && (param_2.unknown == param_5)) {
    return true;
  }
  bVar1 = Swift::_stringCompareWithSmolCheck
                    (param_1,param_2,(_StringComparisonResult)(__int8)param_4);
  return bVar1;
}



/* Address: 0x1004dbfa4 | FUN_1004dbfa4 */

void FUN_1004dbfa4(Hasher param_1,Hasher param_2,void *param_3,char param_4)

{
  Hasher HVar1;
  String SVar2;
  
  if (param_4 == '\x01') {
    HVar1.unknown = param_2.unknown;
    Swift::Hasher::_combine(1,param_2);
    Swift::Hasher::_combine((__uint64)param_2.unknown,HVar1);
    return;
  }
  Swift::Hasher::_combine(0,param_2);
  SVar2.bridgeObject = param_3;
  SVar2.str = param_2.unknown;
  Swift::String::hash(param_1,SVar2);
  return;
}



/* Address: 0x1004dc010 | FUN_1004dc010 */

void FUN_1004dc010(char *param_1,undefined *param_2,char param_3)

{
  Hasher HVar1;
  String SVar2;
  undefined1 auStack_78 [72];
  
  HVar1.unknown = param_2;
  Swift::Hasher::init(0);
  if (param_3 == '\x01') {
    Swift::Hasher::_combine(1,HVar1);
    Swift::Hasher::_combine((__uint64)param_1,HVar1);
    HVar1.unknown = param_1;
  }
  else {
    Swift::Hasher::_combine(0,HVar1);
    HVar1.unknown = auStack_78;
    SVar2.bridgeObject = param_2;
    SVar2.str = param_1;
    Swift::String::hash(HVar1,SVar2);
  }
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1004dc098 | FUN_1004dc098 */

void FUN_1004dc098(undefined8 param_1,Hasher param_2)

{
  char cVar1;
  String SVar2;
  Hasher into;
  String *unaff_x20;
  undefined1 auStack_78 [72];
  
  into.unknown = unaff_x20->str;
  SVar2 = *unaff_x20;
  cVar1 = *(char *)&unaff_x20[1].str;
  Swift::Hasher::init(0);
  if (cVar1 == '\x01') {
    Swift::Hasher::_combine(1,param_2);
    Swift::Hasher::_combine((__uint64)into.unknown,param_2);
  }
  else {
    Swift::Hasher::_combine(0,param_2);
    into.unknown = auStack_78;
    Swift::String::hash(into,SVar2);
  }
  Swift::Hasher::_finalize(into);
  return;
}



/* Address: 0x1004dc11c | FUN_1004dc11c */

void FUN_1004dc11c(Hasher param_1,Hasher param_2)

{
  char *pcVar1;
  __uint64 *unaff_x20;
  void *pvVar2;
  String SVar3;
  
  pcVar1 = (char *)*unaff_x20;
  if ((char)unaff_x20[2] == '\x01') {
    Swift::Hasher::_combine(1,param_2);
    Swift::Hasher::_combine((__uint64)pcVar1,param_2);
    return;
  }
  pvVar2 = (void *)unaff_x20[1];
  Swift::Hasher::_combine(0,param_2);
  SVar3.bridgeObject = pvVar2;
  SVar3.str = pcVar1;
  Swift::String::hash(param_1,SVar3);
  return;
}



/* Address: 0x1004dc190 | FUN_1004dc190 */

void FUN_1004dc190(__int64 param_1,Hasher param_2)

{
  char cVar1;
  String SVar2;
  Hasher into;
  String *unaff_x20;
  undefined1 auStack_78 [72];
  
  into.unknown = unaff_x20->str;
  SVar2 = *unaff_x20;
  cVar1 = *(char *)&unaff_x20[1].str;
  Swift::Hasher::init(param_1);
  if (cVar1 == '\x01') {
    Swift::Hasher::_combine(1,param_2);
    Swift::Hasher::_combine((__uint64)into.unknown,param_2);
  }
  else {
    Swift::Hasher::_combine(0,param_2);
    into.unknown = auStack_78;
    Swift::String::hash(into,SVar2);
  }
  Swift::Hasher::_finalize(into);
  return;
}



/* Address: 0x1004dc210 | FUN_1004dc210 */

bool FUN_1004dc210(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  _StringGuts _Var2;
  undefined *puVar3;
  
  _Var2.unknown = (undefined *)*param_1;
  puVar3 = (undefined *)*param_2;
  if (*(char *)(param_1 + 2) == '\x01') {
    return *(char *)(param_2 + 2) == '\x01' && _Var2.unknown == puVar3;
  }
  if (*(char *)(param_2 + 2) == '\x01') {
    return false;
  }
  if (_Var2.unknown != puVar3 || (undefined *)param_1[1] != (undefined *)param_2[1]) {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      (_Var2,(undefined *)param_1[1],(_StringComparisonResult)(__int8)puVar3);
    return bVar1;
  }
  return true;
}


