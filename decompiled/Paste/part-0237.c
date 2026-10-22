/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1002db3b4 | FUN_1002db3b4 */

undefined8 FUN_1002db3b4(undefined1 *param_1,ulong param_2,char *param_3,_StringGuts param_4)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  _StringGuts _Var7;
  undefined8 uVar8;
  _StringGuts _Var9;
  undefined8 uVar10;
  byte bVar11;
  bool bVar12;
  Hasher into;
  ulong uVar13;
  ulong uVar14;
  byte *pbVar15;
  undefined1 *puVar16;
  long *unaff_x20;
  long lVar17;
  String SVar18;
  String SVar19;
  long local_a8 [9];
  
  lVar17 = *unaff_x20;
  Swift::Hasher::init(*(__int64 *)(lVar17 + 0x28));
  uVar1 = (uint)param_2 & 0xff;
  pcVar3 = (char *)0x656369766564;
  if (uVar1 != 4) {
    pcVar3 = (char *)0x6472616f626e6970;
  }
  puVar16 = &DAT_e600000000000000;
  if (uVar1 != 4) {
    puVar16 = &DAT_e800000000000000;
  }
  pcVar2 = (char *)0x65746164;
  if (uVar1 != 3) {
    pcVar2 = pcVar3;
  }
  puVar6 = &DAT_e400000000000000;
  if (uVar1 != 3) {
    puVar6 = puVar16;
  }
  pcVar3 = &DAT_65707974;
  if (uVar1 != 1) {
    pcVar3 = (char *)0x656c746974;
  }
  puVar16 = &DAT_e400000000000000;
  if (uVar1 != 1) {
    puVar16 = &DAT_e500000000000000;
  }
  bVar12 = (param_2 & 0xff) != 0;
  pcVar4 = (char *)0x707061;
  if (bVar12) {
    pcVar4 = pcVar3;
  }
  puVar5 = (undefined1 *)0xe300000000000000;
  if (bVar12) {
    puVar5 = puVar16;
  }
  if (uVar1 < 3) {
    puVar6 = puVar5;
    pcVar2 = pcVar4;
  }
  SVar18.bridgeObject = puVar6;
  SVar18.str = pcVar2;
  Swift::String::hash((Hasher)local_a8,SVar18);
  _swift_bridgeObjectRelease(puVar6);
  into.unknown = (undefined *)local_a8;
  SVar19.bridgeObject = param_4.unknown;
  SVar19.str = param_3;
  Swift::String::hash(into,SVar19);
  uVar13 = Swift::Hasher::_finalize(into);
  uVar14 = -1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar13 = uVar13 & (uVar14 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar17 + 0x38 + (uVar13 >> 6) * 8) >> (uVar13 & 0x3f) & 1) != 0) {
    do {
      pbVar15 = (byte *)(*(long *)(lVar17 + 0x30) + uVar13 * 0x18);
      bVar11 = *pbVar15;
      _Var7.unknown = *(undefined **)(pbVar15 + 8);
      _Var9.unknown = *(undefined **)(pbVar15 + 0x10);
      _swift_bridgeObjectRetain(_Var9.unknown);
      if ((uint)bVar11 == ((uint)param_2 & 0xff)) {
        if (_Var7.unknown == param_3 && _Var9.unknown == param_4.unknown) {
          _swift_bridgeObjectRelease(param_4.unknown);
          param_4.unknown = _Var9.unknown;
LAB_1002db5c0:
          _swift_bridgeObjectRelease(param_4.unknown);
          puVar16 = (undefined1 *)(*(long *)(lVar17 + 0x30) + uVar13 * 0x18);
          uVar8 = *(undefined8 *)(puVar16 + 8);
          uVar10 = *(undefined8 *)(puVar16 + 0x10);
          *param_1 = *puVar16;
          *(undefined8 *)(param_1 + 8) = uVar8;
          *(undefined8 *)(param_1 + 0x10) = uVar10;
          _swift_bridgeObjectRetain();
          return 0;
        }
        bVar12 = Swift::_stringCompareWithSmolCheck
                           (_Var7,_Var9,(_StringComparisonResult)(__int8)param_3);
        _swift_bridgeObjectRelease(_Var9.unknown);
        if (bVar12) goto LAB_1002db5c0;
      }
      else {
        _swift_bridgeObjectRelease(_Var9.unknown);
      }
      uVar13 = uVar13 + 1 & ~uVar14;
    } while ((*(ulong *)(lVar17 + 0x38 + (uVar13 >> 6) * 8) >> (uVar13 & 0x3f) & 1) != 0);
  }
  lVar17 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native(lVar17);
  local_a8[0] = *unaff_x20;
  _swift_bridgeObjectRetain(param_4.unknown);
  FUN_1002db754(param_2,param_3,param_4.unknown,uVar13,lVar17);
  *unaff_x20 = local_a8[0];
  *param_1 = (char)param_2;
  *(char **)(param_1 + 8) = param_3;
  *(undefined **)(param_1 + 0x10) = param_4.unknown;
  return 1;
}



/* Address: 0x1002db610 | FUN_1002db610 */

undefined8 FUN_1002db610(undefined8 *param_1,char *param_2,undefined *param_3)

{
  undefined8 *puVar1;
  _StringGuts _Var2;
  _StringGuts _Var3;
  undefined8 uVar4;
  bool bVar5;
  Hasher into;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  String SVar9;
  long local_98 [9];
  
  lVar8 = *unaff_x20;
  Swift::Hasher::init(*(__int64 *)(lVar8 + 0x28));
  into.unknown = (undefined *)local_98;
  SVar9.bridgeObject = param_3;
  SVar9.str = param_2;
  Swift::String::hash(into,SVar9);
  uVar6 = Swift::Hasher::_finalize(into);
  uVar7 = -1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
  uVar6 = uVar6 & (uVar7 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar8 + 0x38 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) != 0) {
    do {
      puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x30) + uVar6 * 0x10);
      _Var2.unknown = (undefined *)*puVar1;
      _Var3.unknown = (undefined *)puVar1[1];
      if ((_Var2.unknown == param_2 && _Var3.unknown == param_3) ||
         (bVar5 = Swift::_stringCompareWithSmolCheck
                            (_Var2,_Var3,(_StringComparisonResult)(__int8)param_2), bVar5)) {
        _swift_bridgeObjectRelease(param_3);
        puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x30) + uVar6 * 0x10);
        uVar4 = puVar1[1];
        *param_1 = *puVar1;
        param_1[1] = uVar4;
        _swift_bridgeObjectRetain();
        return 0;
      }
      uVar6 = uVar6 + 1 & ~uVar7;
    } while ((*(ulong *)(lVar8 + 0x38 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) != 0);
  }
  lVar8 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native(lVar8);
  local_98[0] = *unaff_x20;
  _swift_bridgeObjectRetain(param_3);
  FUN_1002db9b4(param_2,param_3,uVar6,lVar8);
  *unaff_x20 = local_98[0];
  *param_1 = param_2;
  param_1[1] = param_3;
  return 1;
}



/* Address: 0x1002db754 | FUN_1002db754 */

void FUN_1002db754(byte param_1,char *param_2,undefined *param_3,ulong param_4,ulong param_5)

{
  undefined1 *puVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  _StringGuts _Var7;
  _StringGuts _Var8;
  byte bVar9;
  code *pcVar10;
  bool bVar11;
  Hasher into;
  ulong uVar12;
  long lVar13;
  byte *pbVar14;
  long *unaff_x20;
  long lVar15;
  String SVar16;
  String SVar17;
  undefined1 auStack_a8 [72];
  
  uVar12 = *(ulong *)(*unaff_x20 + 0x10);
  if (uVar12 < *(ulong *)(*unaff_x20 + 0x18)) {
    if ((param_5 & 1) == 0) {
      FUN_1002dc030();
    }
  }
  else {
    if ((param_5 & 1) == 0) {
      FUN_1002dbb18(uVar12 + 1);
    }
    else {
      FUN_1002dc2f4();
    }
    lVar15 = *unaff_x20;
    Swift::Hasher::init(*(__int64 *)(lVar15 + 0x28));
    pcVar3 = (char *)0x656369766564;
    if (param_1 != 4) {
      pcVar3 = (char *)0x6472616f626e6970;
    }
    puVar1 = &DAT_e600000000000000;
    if (param_1 != 4) {
      puVar1 = &DAT_e800000000000000;
    }
    pcVar2 = (char *)0x65746164;
    if (param_1 != 3) {
      pcVar2 = pcVar3;
    }
    puVar6 = &DAT_e400000000000000;
    if (param_1 != 3) {
      puVar6 = puVar1;
    }
    pcVar3 = &DAT_65707974;
    if (param_1 != 1) {
      pcVar3 = (char *)0x656c746974;
    }
    puVar1 = &DAT_e400000000000000;
    if (param_1 != 1) {
      puVar1 = &DAT_e500000000000000;
    }
    pcVar4 = (char *)0x707061;
    if (param_1 != 0) {
      pcVar4 = pcVar3;
    }
    puVar5 = (undefined1 *)0xe300000000000000;
    if (param_1 != 0) {
      puVar5 = puVar1;
    }
    if (param_1 < 3) {
      puVar6 = puVar5;
      pcVar2 = pcVar4;
    }
    SVar16.bridgeObject = puVar6;
    SVar16.str = pcVar2;
    Swift::String::hash((Hasher)auStack_a8,SVar16);
    _swift_bridgeObjectRelease(puVar6);
    into.unknown = auStack_a8;
    SVar17.bridgeObject = param_3;
    SVar17.str = param_2;
    Swift::String::hash(into,SVar17);
    param_4 = Swift::Hasher::_finalize(into);
    uVar12 = -1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
    param_4 = param_4 & (uVar12 ^ 0xffffffffffffffff);
    if ((*(ulong *)(lVar15 + 0x38 + (param_4 >> 6) * 8) >> (param_4 & 0x3f) & 1) != 0) {
      do {
        pbVar14 = (byte *)(*(long *)(lVar15 + 0x30) + param_4 * 0x18);
        bVar9 = *pbVar14;
        _Var7.unknown = *(undefined **)(pbVar14 + 8);
        _Var8.unknown = *(undefined **)(pbVar14 + 0x10);
        _swift_bridgeObjectRetain(_Var8.unknown);
        if (bVar9 == param_1) {
          if (_Var7.unknown == param_2 && _Var8.unknown == param_3) {
            _swift_bridgeObjectRelease(_Var8.unknown);
LAB_1002db9a4:
            Swift::_ELEMENT_TYPE_OF_SET_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x1002db9b4);
            (*pcVar10)();
          }
          bVar11 = Swift::_stringCompareWithSmolCheck
                             (_Var7,_Var8,(_StringComparisonResult)(__int8)param_2);
          _swift_bridgeObjectRelease(_Var8.unknown);
          if (bVar11) goto LAB_1002db9a4;
        }
        else {
          _swift_bridgeObjectRelease(_Var8.unknown);
        }
        param_4 = param_4 + 1 & ~uVar12;
      } while ((*(ulong *)(lVar15 + 0x38 + (param_4 >> 6) * 8) >> (param_4 & 0x3f) & 1) != 0);
    }
  }
  lVar13 = *unaff_x20;
  lVar15 = lVar13 + (param_4 >> 6) * 8;
  *(ulong *)(lVar15 + 0x38) = *(ulong *)(lVar15 + 0x38) | 1L << (param_4 & 0x3f);
  pbVar14 = (byte *)(*(long *)(lVar13 + 0x30) + param_4 * 0x18);
  *pbVar14 = param_1;
  *(char **)(pbVar14 + 8) = param_2;
  *(undefined **)(pbVar14 + 0x10) = param_3;
  if (SCARRY8(*(long *)(lVar13 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x1002db99c);
    (*pcVar10)();
  }
  *(long *)(lVar13 + 0x10) = *(long *)(lVar13 + 0x10) + 1;
  return;
}



/* Address: 0x1002db9b4 | FUN_1002db9b4 */

void FUN_1002db9b4(char *param_1,undefined *param_2,ulong param_3,ulong param_4)

{
  undefined8 *puVar1;
  _StringGuts _Var2;
  _StringGuts _Var3;
  code *pcVar4;
  bool bVar5;
  Hasher into;
  ulong uVar6;
  long lVar7;
  long *unaff_x20;
  long lVar8;
  String SVar9;
  undefined1 auStack_98 [72];
  
  uVar6 = *(ulong *)(*unaff_x20 + 0x10);
  if (uVar6 < *(ulong *)(*unaff_x20 + 0x18)) {
    if ((param_4 & 1) == 0) {
      FUN_1002dc198();
    }
  }
  else {
    if ((param_4 & 1) == 0) {
      FUN_1002dbe08(uVar6 + 1);
    }
    else {
      FUN_1002dc610();
    }
    lVar8 = *unaff_x20;
    Swift::Hasher::init(*(__int64 *)(lVar8 + 0x28));
    into.unknown = auStack_98;
    SVar9.bridgeObject = param_2;
    SVar9.str = param_1;
    Swift::String::hash(into,SVar9);
    param_3 = Swift::Hasher::_finalize(into);
    uVar6 = -1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    param_3 = param_3 & (uVar6 ^ 0xffffffffffffffff);
    if ((*(ulong *)(lVar8 + 0x38 + (param_3 >> 6) * 8) >> (param_3 & 0x3f) & 1) != 0) {
      do {
        puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x30) + param_3 * 0x10);
        _Var2.unknown = (undefined *)*puVar1;
        _Var3.unknown = (undefined *)puVar1[1];
        if ((_Var2.unknown == param_1 && _Var3.unknown == param_2) ||
           (bVar5 = Swift::_stringCompareWithSmolCheck
                              (_Var2,_Var3,(_StringComparisonResult)(__int8)param_1), bVar5)) {
          Swift::_ELEMENT_TYPE_OF_SET_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1002dbb18);
          (*pcVar4)();
        }
        param_3 = param_3 + 1 & ~uVar6;
      } while ((*(ulong *)(lVar8 + 0x38 + (param_3 >> 6) * 8) >> (param_3 & 0x3f) & 1) != 0);
    }
  }
  lVar7 = *unaff_x20;
  lVar8 = lVar7 + (param_3 >> 6) * 8;
  *(ulong *)(lVar8 + 0x38) = *(ulong *)(lVar8 + 0x38) | 1L << (param_3 & 0x3f);
  puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x30) + param_3 * 0x10);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (!SCARRY8(*(long *)(lVar7 + 0x10),1)) {
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1002dbb08);
  (*pcVar4)();
}



/* Address: 0x1002dbb18 | FUN_1002dbb18 */

void FUN_1002dbb18(long param_1)

{
  __int64 capacity;
  undefined1 *puVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  char *pcVar7;
  undefined8 uVar8;
  byte bVar9;
  String SVar10;
  bool bVar11;
  code *pcVar12;
  _SetStorage *this;
  __RawSetStorage *p_Var13;
  Hasher into;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  byte *pbVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long *unaff_x20;
  __RawSetStorage *original;
  long lVar21;
  String SVar22;
  ulong local_b0;
  undefined1 auStack_a8 [72];
  
  original = (__RawSetStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_SetStorage *)&DAT_100fbd078;
  FUN_1000037f0(&DAT_100fbd078,&DAT_100c3e1f0);
  p_Var13 = original;
  Swift::_SetStorage::_resize(this,original,capacity,false);
  if (*(long *)(original + 0x10) != 0) {
    uVar19 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    local_b0 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      local_b0 = ~(-1L << (uVar19 & 0x3f));
    }
    local_b0 = local_b0 & *(ulong *)(original + 0x38);
    lVar16 = 0;
    do {
      if (local_b0 == 0) {
        do {
          lVar21 = lVar16 + 1;
          if (SCARRY8(lVar16,1)) {
                    /* WARNING: Does not return */
            pcVar12 = (code *)SoftwareBreakpoint(1,0x1002dbe04);
            (*pcVar12)();
          }
          if ((long)(uVar19 + 0x3f >> 6) <= lVar21) goto LAB_1002dbdd0;
          local_b0 = *(ulong *)(original + 0x38 + lVar21 * 8);
          lVar16 = lVar16 + 1;
        } while (local_b0 == 0);
        uVar15 = (local_b0 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_b0 & 0x5555555555555555) << 1;
        uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
        uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
        uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
        uVar15 = uVar15 >> 0x20 | uVar15 << 0x20;
        local_b0 = local_b0 - 1 & local_b0;
      }
      else {
        uVar15 = (local_b0 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_b0 & 0x5555555555555555) << 1;
        uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
        uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
        uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
        uVar15 = uVar15 >> 0x20 | uVar15 << 0x20;
        local_b0 = local_b0 - 1 & local_b0;
        lVar21 = lVar16;
      }
      pbVar17 = (byte *)(*(long *)(original + 0x30) + (LZCOUNT(uVar15) | lVar21 << 6) * 0x18);
      bVar9 = *pbVar17;
      pcVar7 = ((String *)(pbVar17 + 8))->str;
      uVar8 = *(undefined8 *)(pbVar17 + 0x10);
      SVar10 = *(String *)(pbVar17 + 8);
      Swift::Hasher::init(*(__int64 *)(p_Var13 + 0x28));
      pcVar3 = (char *)0x656369766564;
      if (bVar9 != 4) {
        pcVar3 = (char *)0x6472616f626e6970;
      }
      puVar1 = &DAT_e600000000000000;
      if (bVar9 != 4) {
        puVar1 = &DAT_e800000000000000;
      }
      pcVar2 = (char *)0x65746164;
      if (bVar9 != 3) {
        pcVar2 = pcVar3;
      }
      puVar6 = &DAT_e400000000000000;
      if (bVar9 != 3) {
        puVar6 = puVar1;
      }
      pcVar3 = &DAT_65707974;
      if (bVar9 != 1) {
        pcVar3 = (char *)0x656c746974;
      }
      puVar1 = &DAT_e400000000000000;
      if (bVar9 != 1) {
        puVar1 = &DAT_e500000000000000;
      }
      pcVar4 = (char *)0x707061;
      if (bVar9 != 0) {
        pcVar4 = pcVar3;
      }
      puVar5 = (undefined1 *)0xe300000000000000;
      if (bVar9 != 0) {
        puVar5 = puVar1;
      }
      if (bVar9 < 3) {
        puVar6 = puVar5;
        pcVar2 = pcVar4;
      }
      _swift_bridgeObjectRetain(uVar8);
      SVar22.bridgeObject = puVar6;
      SVar22.str = pcVar2;
      Swift::String::hash((Hasher)auStack_a8,SVar22);
      _swift_bridgeObjectRelease(puVar6);
      into.unknown = auStack_a8;
      Swift::String::hash(into,SVar10);
      uVar14 = Swift::Hasher::_finalize(into);
      uVar20 = -1L << ((ulong)(byte)p_Var13[0x20] & 0x3f);
      uVar14 = uVar14 & (uVar20 ^ 0xffffffffffffffff);
      uVar18 = uVar14 >> 6;
      uVar15 = -1L << (uVar14 & 0x3f) &
               (*(ulong *)(p_Var13 + uVar18 * 8 + 0x38) ^ 0xffffffffffffffff);
      if (uVar15 == 0) {
        bVar11 = false;
        uVar15 = 0x3f - uVar20 >> 6;
        do {
          uVar14 = uVar18 + 1;
          if ((uVar14 == uVar15) && (bVar11)) {
                    /* WARNING: Does not return */
            pcVar12 = (code *)SoftwareBreakpoint(1,0x1002dbe08);
            (*pcVar12)();
          }
          uVar18 = 0;
          if (uVar14 != uVar15) {
            uVar18 = uVar14;
          }
          bVar11 = (bool)(uVar14 == uVar15 | bVar11);
        } while (*(ulong *)(p_Var13 + uVar18 * 8 + 0x38) == 0xffffffffffffffff);
        uVar15 = ~*(ulong *)(p_Var13 + uVar18 * 8 + 0x38);
        uVar15 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
        uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
        uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
        uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
        uVar15 = LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) | uVar18 << 6;
      }
      else {
        uVar15 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
        uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
        uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
        uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
        uVar15 = LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) | uVar14 & 0x7fffffffffffffc0;
      }
      uVar18 = uVar15 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(p_Var13 + uVar18 + 0x38) =
           1L << (uVar15 & 0x3f) | *(ulong *)(p_Var13 + uVar18 + 0x38);
      pbVar17 = (byte *)(*(long *)(p_Var13 + 0x30) + uVar15 * 0x18);
      *pbVar17 = bVar9;
      *(char **)(pbVar17 + 8) = pcVar7;
      *(undefined8 *)(pbVar17 + 0x10) = uVar8;
      *(long *)(p_Var13 + 0x10) = *(long *)(p_Var13 + 0x10) + 1;
      lVar16 = lVar21;
    } while( true );
  }
LAB_1002dbdd0:
  _swift_release(original);
  *unaff_x20 = (long)p_Var13;
  return;
}



/* Address: 0x1002dbe08 | FUN_1002dbe08 */

void FUN_1002dbe08(long param_1)

{
  undefined8 *puVar1;
  String *pSVar2;
  __int64 capacity;
  char *pcVar3;
  void *pvVar4;
  String SVar5;
  bool bVar6;
  code *pcVar7;
  _SetStorage *this;
  __RawSetStorage *p_Var8;
  Hasher into;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  __RawSetStorage *original;
  long lVar15;
  ulong uVar16;
  undefined1 auStack_a8 [72];
  
  original = (__RawSetStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_SetStorage *)&DAT_100fbd040;
  FUN_1000037f0(&DAT_100fbd040,&DAT_100c3e1b8);
  p_Var8 = original;
  Swift::_SetStorage::_resize(this,original,capacity,false);
  if (*(long *)(original + 0x10) == 0) {
LAB_1002dbff8:
    _swift_release(original);
    *unaff_x20 = (long)p_Var8;
    return;
  }
  uVar13 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar16 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar16 = uVar16 & *(ulong *)(original + 0x38);
  lVar11 = 0;
  do {
    if (uVar16 == 0) {
      do {
        lVar15 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1002dc02c);
          (*pcVar7)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar15) goto LAB_1002dbff8;
        uVar16 = *(ulong *)(original + 0x38 + lVar15 * 8);
        lVar11 = lVar11 + 1;
      } while (uVar16 == 0);
      uVar10 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
    }
    else {
      uVar10 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
      lVar15 = lVar11;
    }
    pSVar2 = (String *)(*(long *)(original + 0x30) + (LZCOUNT(uVar10) | lVar15 << 6) * 0x10);
    pcVar3 = pSVar2->str;
    pvVar4 = pSVar2->bridgeObject;
    SVar5 = *pSVar2;
    Swift::Hasher::init(*(__int64 *)(p_Var8 + 0x28));
    _swift_bridgeObjectRetain(pvVar4);
    into.unknown = auStack_a8;
    Swift::String::hash(into,SVar5);
    uVar9 = Swift::Hasher::_finalize(into);
    uVar14 = -1L << ((ulong)(byte)p_Var8[0x20] & 0x3f);
    uVar9 = uVar9 & (uVar14 ^ 0xffffffffffffffff);
    uVar12 = uVar9 >> 6;
    uVar10 = -1L << (uVar9 & 0x3f) & (*(ulong *)(p_Var8 + uVar12 * 8 + 0x38) ^ 0xffffffffffffffff);
    if (uVar10 == 0) {
      bVar6 = false;
      uVar10 = 0x3f - uVar14 >> 6;
      do {
        uVar9 = uVar12 + 1;
        if ((uVar9 == uVar10) && (bVar6)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1002dc030);
          (*pcVar7)();
        }
        uVar12 = 0;
        if (uVar9 != uVar10) {
          uVar12 = uVar9;
        }
        bVar6 = (bool)(uVar9 == uVar10 | bVar6);
      } while (*(ulong *)(p_Var8 + uVar12 * 8 + 0x38) == 0xffffffffffffffff);
      uVar10 = ~*(ulong *)(p_Var8 + uVar12 * 8 + 0x38);
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar12 << 6;
    }
    else {
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar9 & 0x7fffffffffffffc0;
    }
    uVar12 = uVar10 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var8 + uVar12 + 0x38) = 1L << (uVar10 & 0x3f) | *(ulong *)(p_Var8 + uVar12 + 0x38);
    puVar1 = (undefined8 *)(*(long *)(p_Var8 + 0x30) + uVar10 * 0x10);
    *puVar1 = pcVar3;
    puVar1[1] = pvVar4;
    *(long *)(p_Var8 + 0x10) = *(long *)(p_Var8 + 0x10) + 1;
    lVar11 = lVar15;
  } while( true );
}



/* Address: 0x1002dc030 | FUN_1002dc030 */

void FUN_1002dc030(void)

{
  __RawSetStorage *p_Var1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  _SetStorage *this;
  __RawSetStorage *p_Var7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long *unaff_x20;
  __RawSetStorage *original;
  long lVar12;
  
  this = (_SetStorage *)&DAT_100fbd078;
  FUN_1000037f0(&DAT_100fbd078,&DAT_100c3e1f0);
  original = (__RawSetStorage *)*unaff_x20;
  p_Var7 = original;
  Swift::_SetStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x38;
    uVar8 = (1L << ((ulong)(byte)p_Var7[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var7 != original || p_Var1 + uVar8 * 8 <= p_Var7 + 0x38) {
      _memmove(p_Var7 + 0x38,p_Var1,uVar8 << 3);
    }
    lVar12 = 0;
    *(undefined8 *)(p_Var7 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar9 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(original + 0x38);
    if (uVar8 == 0) goto LAB_1002dc10c;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        lVar11 = (LZCOUNT(uVar10) | lVar12 << 6) * 0x18;
        puVar2 = (undefined1 *)(*(long *)(original + 0x30) + lVar11);
        uVar4 = *(undefined8 *)(puVar2 + 8);
        uVar5 = *(undefined8 *)(puVar2 + 0x10);
        puVar3 = (undefined1 *)(*(long *)(p_Var7 + 0x30) + lVar11);
        *puVar3 = *puVar2;
        *(undefined8 *)(puVar3 + 8) = uVar4;
        *(undefined8 *)(puVar3 + 0x10) = uVar5;
        _swift_bridgeObjectRetain();
        if (uVar8 != 0) break;
LAB_1002dc10c:
        do {
          lVar11 = lVar12 + 1;
          if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1002dc198);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar11) goto LAB_1002dc170;
          uVar8 = *(ulong *)(p_Var1 + lVar11 * 8);
          lVar12 = lVar12 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar12 = lVar11;
      }
    } while( true );
  }
LAB_1002dc170:
  _swift_release(original);
  *unaff_x20 = (long)p_Var7;
  return;
}



/* Address: 0x1002dc198 | FUN_1002dc198 */

void FUN_1002dc198(void)

{
  __RawSetStorage *p_Var1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  _SetStorage *this;
  __RawSetStorage *p_Var6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *unaff_x20;
  __RawSetStorage *original;
  long lVar11;
  
  this = (_SetStorage *)&DAT_100fbd040;
  FUN_1000037f0(&DAT_100fbd040,&DAT_100c3e1b8);
  original = (__RawSetStorage *)*unaff_x20;
  p_Var6 = original;
  Swift::_SetStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x38;
    uVar7 = (1L << ((ulong)(byte)p_Var6[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var6 != original || p_Var1 + uVar7 * 8 <= p_Var6 + 0x38) {
      _memmove(p_Var6 + 0x38,p_Var1,uVar7 << 3);
    }
    lVar11 = 0;
    *(undefined8 *)(p_Var6 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar8 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar7 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar7 = ~(-1L << (uVar8 & 0x3f));
    }
    uVar7 = uVar7 & *(ulong *)(original + 0x38);
    if (uVar7 == 0) goto LAB_1002dc274;
    do {
      uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar7 = uVar7 - 1 & uVar7;
      while( true ) {
        lVar10 = (LZCOUNT(uVar9) | lVar11 << 6) * 0x10;
        puVar2 = (undefined8 *)(*(long *)(original + 0x30) + lVar10);
        uVar4 = puVar2[1];
        puVar3 = (undefined8 *)(*(long *)(p_Var6 + 0x30) + lVar10);
        *puVar3 = *puVar2;
        puVar3[1] = uVar4;
        _swift_bridgeObjectRetain();
        if (uVar7 != 0) break;
LAB_1002dc274:
        do {
          lVar10 = lVar11 + 1;
          if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1002dc2f4);
            (*pcVar5)();
          }
          if ((long)(uVar8 + 0x3f >> 6) <= lVar10) goto LAB_1002dc2cc;
          uVar7 = *(ulong *)(p_Var1 + lVar10 * 8);
          lVar11 = lVar11 + 1;
        } while (uVar7 == 0);
        uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
        uVar7 = uVar7 - 1 & uVar7;
        lVar11 = lVar10;
      }
    } while( true );
  }
LAB_1002dc2cc:
  _swift_release(original);
  *unaff_x20 = (long)p_Var6;
  return;
}



/* Address: 0x1002dc2f4 | FUN_1002dc2f4 */

void FUN_1002dc2f4(long param_1)

{
  __int64 capacity;
  char *pcVar1;
  undefined8 uVar2;
  byte bVar3;
  String SVar4;
  bool bVar5;
  code *pcVar6;
  _SetStorage *this;
  __RawSetStorage *p_Var7;
  Hasher into;
  ulong uVar8;
  char *pcVar9;
  ulong uVar10;
  long lVar11;
  byte *pbVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long *unaff_x20;
  undefined1 *puVar16;
  __RawSetStorage *original;
  __RawSetStorage *p_Var17;
  long lVar18;
  ulong uVar19;
  String SVar20;
  undefined1 auStack_a8 [72];
  
  original = (__RawSetStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_SetStorage *)&DAT_100fbd078;
  FUN_1000037f0(&DAT_100fbd078,&DAT_100c3e1f0);
  p_Var7 = original;
  Swift::_SetStorage::_resize(this,original,capacity,true);
  if (*(long *)(original + 0x10) == 0) {
LAB_1002dc5dc:
    _swift_release(original);
    *unaff_x20 = (long)p_Var7;
    return;
  }
  p_Var17 = original + 0x38;
  uVar14 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar19 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar19 = ~(-1L << (uVar14 & 0x3f));
  }
  uVar19 = uVar19 & *(ulong *)p_Var17;
  lVar11 = 0;
  do {
    if (uVar19 == 0) {
      do {
        lVar18 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1002dc60c);
          (*pcVar6)();
        }
        if ((long)(uVar14 + 0x3f >> 6) <= lVar18) {
          uVar19 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          if (((byte)original[0x20] & 0x3f) < 6) {
            *(long *)p_Var17 = -1L << (uVar19 & 0x3f);
          }
          else {
            _bzero(p_Var17,uVar19 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_1002dc5dc;
        }
        uVar19 = *(ulong *)(p_Var17 + lVar18 * 8);
        lVar11 = lVar11 + 1;
      } while (uVar19 == 0);
      uVar10 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar19 = uVar19 - 1 & uVar19;
    }
    else {
      uVar10 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar19 = uVar19 - 1 & uVar19;
      lVar18 = lVar11;
    }
    pbVar12 = (byte *)(*(long *)(original + 0x30) + (LZCOUNT(uVar10) | lVar18 << 6) * 0x18);
    bVar3 = *pbVar12;
    pcVar1 = ((String *)(pbVar12 + 8))->str;
    uVar2 = *(undefined8 *)(pbVar12 + 0x10);
    SVar4 = *(String *)(pbVar12 + 8);
    Swift::Hasher::init(*(__int64 *)(p_Var7 + 0x28));
    if (bVar3 < 3) {
      if (bVar3 == 0) {
        puVar16 = (undefined1 *)0xe300000000000000;
        pcVar9 = (char *)0x707061;
      }
      else {
        pcVar9 = &DAT_65707974;
        if (bVar3 != 1) {
          pcVar9 = (char *)0x656c746974;
        }
        puVar16 = &DAT_e400000000000000;
        if (bVar3 != 1) {
          puVar16 = &DAT_e500000000000000;
        }
      }
    }
    else if (bVar3 == 3) {
      puVar16 = &DAT_e400000000000000;
      pcVar9 = (char *)0x65746164;
    }
    else {
      pcVar9 = (char *)0x656369766564;
      if (bVar3 != 4) {
        pcVar9 = (char *)0x6472616f626e6970;
      }
      puVar16 = &DAT_e600000000000000;
      if (bVar3 != 4) {
        puVar16 = &DAT_e800000000000000;
      }
    }
    SVar20.bridgeObject = puVar16;
    SVar20.str = pcVar9;
    Swift::String::hash((Hasher)auStack_a8,SVar20);
    _swift_bridgeObjectRelease(puVar16);
    into.unknown = auStack_a8;
    Swift::String::hash(into,SVar4);
    uVar8 = Swift::Hasher::_finalize(into);
    uVar15 = -1L << ((ulong)(byte)p_Var7[0x20] & 0x3f);
    uVar8 = uVar8 & (uVar15 ^ 0xffffffffffffffff);
    uVar13 = uVar8 >> 6;
    uVar10 = -1L << (uVar8 & 0x3f) & (*(ulong *)(p_Var7 + uVar13 * 8 + 0x38) ^ 0xffffffffffffffff);
    if (uVar10 == 0) {
      bVar5 = false;
      uVar10 = 0x3f - uVar15 >> 6;
      do {
        uVar8 = uVar13 + 1;
        if ((uVar8 == uVar10) && (bVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1002dc610);
          (*pcVar6)();
        }
        uVar13 = 0;
        if (uVar8 != uVar10) {
          uVar13 = uVar8;
        }
        bVar5 = (bool)(uVar8 == uVar10 | bVar5);
      } while (*(ulong *)(p_Var7 + uVar13 * 8 + 0x38) == 0xffffffffffffffff);
      uVar10 = ~*(ulong *)(p_Var7 + uVar13 * 8 + 0x38);
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar13 << 6;
    }
    else {
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar8 & 0x7fffffffffffffc0;
    }
    uVar13 = uVar10 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var7 + uVar13 + 0x38) = 1L << (uVar10 & 0x3f) | *(ulong *)(p_Var7 + uVar13 + 0x38);
    pbVar12 = (byte *)(*(long *)(p_Var7 + 0x30) + uVar10 * 0x18);
    *pbVar12 = bVar3;
    *(char **)(pbVar12 + 8) = pcVar1;
    *(undefined8 *)(pbVar12 + 0x10) = uVar2;
    *(long *)(p_Var7 + 0x10) = *(long *)(p_Var7 + 0x10) + 1;
    lVar11 = lVar18;
  } while( true );
}



/* Address: 0x1002dc610 | FUN_1002dc610 */

void FUN_1002dc610(long param_1)

{
  undefined8 *puVar1;
  String *pSVar2;
  __int64 capacity;
  char *pcVar3;
  void *pvVar4;
  String SVar5;
  bool bVar6;
  code *pcVar7;
  _SetStorage *this;
  __RawSetStorage *p_Var8;
  Hasher into;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  __RawSetStorage *original;
  __RawSetStorage *p_Var15;
  long lVar16;
  ulong uVar17;
  undefined1 auStack_a8 [72];
  
  original = (__RawSetStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_SetStorage *)&DAT_100fbd040;
  FUN_1000037f0(&DAT_100fbd040,&DAT_100c3e1b8);
  p_Var8 = original;
  Swift::_SetStorage::_resize(this,original,capacity,true);
  if (*(long *)(original + 0x10) == 0) {
LAB_1002dc840:
    _swift_release(original);
    *unaff_x20 = (long)p_Var8;
    return;
  }
  p_Var15 = original + 0x38;
  uVar13 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar17 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar17 = uVar17 & *(ulong *)p_Var15;
  lVar11 = 0;
  do {
    if (uVar17 == 0) {
      do {
        lVar16 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1002dc870);
          (*pcVar7)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar16) {
          uVar17 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          if (((byte)original[0x20] & 0x3f) < 6) {
            *(long *)p_Var15 = -1L << (uVar17 & 0x3f);
          }
          else {
            _bzero(p_Var15,uVar17 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_1002dc840;
        }
        uVar17 = *(ulong *)(p_Var15 + lVar16 * 8);
        lVar11 = lVar11 + 1;
      } while (uVar17 == 0);
      uVar10 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
    }
    else {
      uVar10 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
      lVar16 = lVar11;
    }
    pSVar2 = (String *)(*(long *)(original + 0x30) + (LZCOUNT(uVar10) | lVar16 << 6) * 0x10);
    pcVar3 = pSVar2->str;
    pvVar4 = pSVar2->bridgeObject;
    SVar5 = *pSVar2;
    Swift::Hasher::init(*(__int64 *)(p_Var8 + 0x28));
    into.unknown = auStack_a8;
    Swift::String::hash(into,SVar5);
    uVar9 = Swift::Hasher::_finalize(into);
    uVar14 = -1L << ((ulong)(byte)p_Var8[0x20] & 0x3f);
    uVar9 = uVar9 & (uVar14 ^ 0xffffffffffffffff);
    uVar12 = uVar9 >> 6;
    uVar10 = -1L << (uVar9 & 0x3f) & (*(ulong *)(p_Var8 + uVar12 * 8 + 0x38) ^ 0xffffffffffffffff);
    if (uVar10 == 0) {
      bVar6 = false;
      uVar10 = 0x3f - uVar14 >> 6;
      do {
        uVar9 = uVar12 + 1;
        if ((uVar9 == uVar10) && (bVar6)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1002dc874);
          (*pcVar7)();
        }
        uVar12 = 0;
        if (uVar9 != uVar10) {
          uVar12 = uVar9;
        }
        bVar6 = (bool)(uVar9 == uVar10 | bVar6);
      } while (*(ulong *)(p_Var8 + uVar12 * 8 + 0x38) == 0xffffffffffffffff);
      uVar10 = ~*(ulong *)(p_Var8 + uVar12 * 8 + 0x38);
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar12 << 6;
    }
    else {
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar9 & 0x7fffffffffffffc0;
    }
    uVar12 = uVar10 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var8 + uVar12 + 0x38) = 1L << (uVar10 & 0x3f) | *(ulong *)(p_Var8 + uVar12 + 0x38);
    puVar1 = (undefined8 *)(*(long *)(p_Var8 + 0x30) + uVar10 * 0x10);
    *puVar1 = pcVar3;
    puVar1[1] = pvVar4;
    *(long *)(p_Var8 + 0x10) = *(long *)(p_Var8 + 0x10) + 1;
    lVar11 = lVar16;
  } while( true );
}



/* Address: 0x1002dc874 | FUN_1002dc874 */

void FUN_1002dc874(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long *unaff_x20;
  long lVar5;
  long lVar6;
  
  param_4 = param_4 >> 1;
  lVar1 = param_4 - param_3;
  if (SBORROW8(param_4,param_3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1002dc984);
    (*pcVar2)();
  }
  lVar5 = *unaff_x20;
  lVar6 = *(long *)(lVar5 + 0x10);
  if (!SCARRY8(lVar6,lVar1)) {
    lVar3 = lVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((int)lVar3 == 0) || (uVar4 = *(ulong *)(lVar5 + 0x18) >> 1, (long)uVar4 < lVar6 + lVar1)) {
      FUN_1000889c8();
      uVar4 = *(ulong *)(lVar3 + 0x18) >> 1;
      lVar5 = lVar3;
    }
    if (param_3 == param_4) {
      if (0 < lVar1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1002dc8e0);
        (*pcVar2)();
      }
    }
    else {
      if ((long)(uVar4 - *(long *)(lVar5 + 0x10)) < lVar1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1002dc98c);
        (*pcVar2)();
      }
      _swift_arrayInitWithCopy
                (lVar5 + *(long *)(lVar5 + 0x10) * 0x20 + 0x20,param_2 + param_3 * 0x20,lVar1,
                 &DAT_100ec8428);
      if (0 < lVar1) {
        if (SCARRY8(*(long *)(lVar5 + 0x10),lVar1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1002dc990);
          (*pcVar2)();
        }
        *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + lVar1;
      }
    }
    *unaff_x20 = lVar5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1002dc988);
  (*pcVar2)();
}



/* Address: 0x1002dc990 | thunk_FUN_1002dd728 */

void thunk_FUN_1002dd728(void)

{
  FUN_1002dd728();
  return;
}



/* Address: 0x1002dc994 | FUN_1002dc994 */

void FUN_1002dc994(undefined8 *param_1,undefined8 *param_2)

{
  FUN_1002dd728(*param_1,param_1[1],param_1[2],*(undefined1 *)(param_1 + 3),*param_2,param_2[1],
                param_2[2],*(undefined1 *)(param_2 + 3));
  return;
}



/* Address: 0x1002dc9b8 | FUN_1002dc9b8 */

String FUN_1002dc9b8(char *param_1,void *param_2,undefined8 param_3,void *param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  byte bVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined *puVar10;
  bool bVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  undefined *puVar16;
  long lVar17;
  byte *pbVar18;
  char *pcVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  undefined1 auStack_90 [24];
  undefined *local_78;
  char *pcStack_70;
  undefined *local_68;
  String separator;
  
  if (((uint)param_4 & 0xff) == 1) {
    FUN_1002ddc10();
    SVar23.bridgeObject = param_2;
    SVar23.str = param_1;
    return SVar23;
  }
  lVar17 = *(long *)(param_1 + 0x10);
  puVar16 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar17 != 0) {
    local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
    pcVar14 = (char *)0x0;
    FUN_1002dd1f8(0,lVar17);
    pbVar18 = (byte *)(param_1 + 0x38);
    do {
      puVar10 = local_68;
      puVar16 = *(undefined **)(pbVar18 + -0x18);
      pcVar19 = *(char **)(pbVar18 + -0x10);
      bVar7 = *pbVar18;
      if (bVar7 == 1) {
        _swift_bridgeObjectRetain(pcVar19);
        pcVar15 = pcVar14;
      }
      else {
        pcVar15 = *(char **)(pbVar18 + -8);
        local_78 = (undefined *)0x0;
        pcStack_70 = (char *)0xe000000000000000;
        uVar1 = (uint)puVar16 & 0xff;
        pcVar12 = (char *)0x656369766564;
        if (uVar1 != 4) {
          pcVar12 = (char *)0x6472616f626e6970;
        }
        puVar2 = &DAT_e600000000000000;
        if (uVar1 != 4) {
          puVar2 = &DAT_e800000000000000;
        }
        pcVar13 = (char *)0x65746164;
        if (uVar1 != 3) {
          pcVar13 = pcVar12;
        }
        puVar5 = &DAT_e400000000000000;
        if (uVar1 != 3) {
          puVar5 = puVar2;
        }
        pcVar12 = &DAT_65707974;
        if (uVar1 != 1) {
          pcVar12 = (char *)0x656c746974;
        }
        puVar2 = &DAT_e400000000000000;
        if (uVar1 != 1) {
          puVar2 = &DAT_e500000000000000;
        }
        bVar11 = ((ulong)puVar16 & 0xff) != 0;
        pcVar3 = (char *)0x707061;
        if (bVar11) {
          pcVar3 = pcVar12;
        }
        puVar4 = (undefined1 *)0xe300000000000000;
        if (bVar11) {
          puVar4 = puVar2;
        }
        if (uVar1 < 3) {
          puVar5 = puVar4;
          pcVar13 = pcVar3;
        }
        _swift_bridgeObjectRetain(pcVar15);
        SVar20.bridgeObject = puVar5;
        SVar20.str = pcVar13;
        SVar24.bridgeObject = param_4;
        SVar24.str = pcVar14;
        Swift::String::append(SVar20,SVar24);
        _swift_bridgeObjectRelease(puVar5);
        SVar21.bridgeObject = (void *)0xe100000000000000;
        SVar21.str = &DAT_0000003a;
        SVar25.bridgeObject = param_4;
        SVar25.str = pcVar14;
        Swift::String::append(SVar21,SVar25);
        pcVar12 = pcVar19;
        pcVar13 = pcVar15;
        if (uVar1 == 5) {
          pcVar14 = (char *)0x0;
          param_4 = (void *)0x0;
          _swift_beginAccess(&DAT_101057920,auStack_90);
          uVar9 = DAT_101057928;
          pcVar8 = DAT_101057920;
          if (DAT_101057920 != (code *)0x0) {
            _swift_retain(DAT_101057928);
            (*pcVar8)();
            FUN_100004550(pcVar8,uVar9);
            if (pcVar13 != (char *)0x0) goto LAB_1002dcba8;
          }
LAB_1002dcb98:
          _swift_bridgeObjectRetain(pcVar15);
          pcVar12 = pcVar19;
          pcVar13 = pcVar15;
        }
        else if ((uVar1 != 3) || (FUN_1002d8e9c(), pcVar13 == (char *)0x0)) goto LAB_1002dcb98;
LAB_1002dcba8:
        SVar22.bridgeObject = pcVar13;
        SVar22.str = pcVar12;
        SVar26.bridgeObject = param_4;
        SVar26.str = pcVar14;
        Swift::String::append(SVar22,SVar26);
        _swift_bridgeObjectRelease(pcVar13);
        param_4 = (void *)(ulong)(uint)bVar7;
        FUN_100008320(puVar16,pcVar19);
        puVar16 = local_78;
        pcVar19 = pcStack_70;
      }
      uVar6 = *(ulong *)(puVar10 + 0x10);
      local_68 = puVar10;
      if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar6) {
        pcVar15 = &DAT_00000001;
        FUN_1002dd1f8(1 < *(ulong *)(puVar10 + 0x18),uVar6 + 1);
      }
      pbVar18 = pbVar18 + 0x20;
      *(ulong *)(local_68 + 0x10) = uVar6 + 1;
      *(undefined **)(local_68 + uVar6 * 0x10 + 0x20) = puVar16;
      *(char **)(local_68 + uVar6 * 0x10 + 0x28) = pcVar19;
      lVar17 = lVar17 + -1;
      pcVar14 = pcVar15;
      puVar16 = local_68;
    } while (lVar17 != 0);
  }
  local_78 = puVar16;
  FUN_1000037f0(&DAT_100fbd080,&DAT_100c3ecf0);
  FUN_1002dd7b0();
  separator.bridgeObject = (void *)0xe100000000000000;
  separator.str = (char *)0x20;
  SVar23 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator);
  _swift_bridgeObjectRelease(puVar16);
  return SVar23;
}



/* Address: 0x1002dcc94 | FUN_1002dcc94 */

void FUN_1002dcc94(void)

{
  undefined8 *unaff_x20;
  
  FUN_1002dc9b8(*unaff_x20,unaff_x20[1],unaff_x20[2],*(undefined1 *)(unaff_x20 + 3));
  return;
}



/* Address: 0x1002dcca4 | FUN_1002dcca4 */

ulong FUN_1002dcca4(ulong param_1,undefined *param_2,undefined *param_3,char param_4,ulong param_5,
                   char param_6,ulong param_7)

{
  undefined8 uVar1;
  _StringGuts _Var2;
  undefined8 uVar3;
  char cVar4;
  undefined1 uVar5;
  code *pcVar6;
  bool bVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  char *pcVar14;
  _StringGuts _Var15;
  
  if (param_4 == '\x01') {
    lVar12 = *(long *)(param_7 + 0x10);
    _swift_bridgeObjectRetain_n(param_7,2);
    FUN_100041d74(param_1,param_2,param_3,1);
    if (lVar12 != 0) {
      pcVar14 = (char *)(param_7 + 0x38);
      lVar11 = lVar12;
      do {
        cVar4 = *pcVar14;
        if (cVar4 != '\x01') {
          uVar1 = *(undefined8 *)(pcVar14 + -0x18);
          _Var2.unknown = *(undefined **)(pcVar14 + -0x10);
          _Var15.unknown = *(undefined **)(pcVar14 + -8);
          _swift_bridgeObjectRetain(_Var15.unknown);
          if ((((uint)uVar1 ^ (uint)param_1) & 0xff) == 0) {
            if (_Var2.unknown == param_2 && _Var15.unknown == param_3) {
              FUN_100008320(uVar1,param_2,param_3,cVar4);
            }
            else {
              bVar7 = Swift::_stringCompareWithSmolCheck
                                (_Var2,_Var15,(_StringComparisonResult)(__int8)param_2);
              FUN_100008320(uVar1,_Var2.unknown,_Var15.unknown,cVar4);
              if (!bVar7) goto LAB_1002dcd38;
            }
            FUN_100041dd0(param_1,param_2,param_3,1);
            _swift_bridgeObjectRelease_n(param_7,2);
            goto LAB_1002dcee0;
          }
          FUN_100008320(uVar1,_Var2.unknown,_Var15.unknown,cVar4);
        }
LAB_1002dcd38:
        pcVar14 = pcVar14 + 0x20;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    uVar13 = param_1 & 0xff;
    _swift_bridgeObjectRelease(param_7);
    if (param_6 == '\x01') {
      param_1 = 1;
      FUN_1002dcf24(1,param_7);
      puVar8 = &DAT_100fbd070;
      FUN_1000037f0(&DAT_100fbd070,&DAT_100c3e1e8);
      _swift_initStackObject();
      *(undefined8 *)(puVar8 + 0x18) = 2;
      *(undefined8 *)(puVar8 + 0x10) = 1;
      *(ulong *)(puVar8 + 0x20) = uVar13;
      *(undefined **)(puVar8 + 0x28) = param_2;
      *(undefined **)(puVar8 + 0x30) = param_3;
      puVar8[0x38] = 0;
      FUN_1002da9a8();
    }
    else if ((long)param_5 < lVar12) {
      uVar9 = param_7;
      _swift_isUniquelyReferenced_nonNull_native();
      param_1 = param_7;
      if ((uVar9 & 1) == 0) {
        FUN_1002dd6ec();
        param_1 = param_7;
      }
      if ((long)param_5 < 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1002dcf20);
        (*pcVar6)();
      }
      if (*(ulong *)(param_1 + 0x10) <= param_5) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1002dcf24);
        (*pcVar6)();
      }
      lVar12 = param_1 + param_5 * 0x20;
      uVar1 = *(undefined8 *)(lVar12 + 0x20);
      uVar3 = *(undefined8 *)(lVar12 + 0x28);
      uVar10 = *(undefined8 *)(lVar12 + 0x30);
      *(ulong *)(lVar12 + 0x20) = uVar13;
      *(undefined **)(lVar12 + 0x28) = param_2;
      *(undefined **)(lVar12 + 0x30) = param_3;
      uVar5 = *(undefined1 *)(lVar12 + 0x38);
      *(undefined1 *)(lVar12 + 0x38) = 0;
      FUN_100008320(uVar1,uVar3,uVar10,uVar5);
    }
    else {
      FUN_100041dd0(param_1,param_2,param_3,1);
      _swift_bridgeObjectRelease(param_7);
LAB_1002dcee0:
      _swift_bridgeObjectRetain(param_7);
      param_1 = param_7;
    }
  }
  else {
    _swift_bridgeObjectRetain(param_1);
  }
  return param_1;
}



/* Address: 0x1002dcf24 | FUN_1002dcf24 */

undefined * FUN_1002dcf24(long param_1,undefined *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined1 *puVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  
  puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x1002dd1f0);
    (*pcVar8)();
  }
  if (param_1 != 0) {
    uVar11 = *(ulong *)(param_2 + 0x10);
    puVar10 = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (uVar11 != 0) {
      uVar17 = 0;
      uVar14 = 0;
      do {
        puVar16 = param_2 + uVar17 * 0x20 + 0x38;
        uVar18 = uVar17;
        while( true ) {
          if (*(ulong *)(param_2 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x1002dd1ec);
            (*pcVar8)();
          }
          uVar1 = *(undefined8 *)(puVar16 + -0x18);
          uVar3 = *(undefined8 *)(puVar16 + -0x10);
          uVar19 = *(undefined8 *)(puVar16 + -8);
          uVar5 = *puVar16;
          uVar17 = uVar18 + 1;
          uVar15 = *(ulong *)(puVar10 + 0x10);
          if (param_1 <= (long)uVar15) break;
          FUN_100008310(uVar1,uVar3,uVar19,uVar5);
          puVar9 = puVar10;
          _swift_isUniquelyReferenced_nonNull_native();
          if (((ulong)puVar9 & 1) == 0) {
            FUN_1002dd214(0,uVar15 + 1,1);
          }
          uVar18 = *(ulong *)(puVar10 + 0x10);
          if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar18) {
            FUN_1002dd214(1 < *(ulong *)(puVar10 + 0x18),uVar18 + 1,1);
          }
          *(ulong *)(puVar10 + 0x10) = uVar18 + 1;
          *(undefined8 *)(puVar10 + uVar18 * 0x20 + 0x20) = uVar1;
          *(undefined8 *)(puVar10 + uVar18 * 0x20 + 0x28) = uVar3;
          *(undefined8 *)(puVar10 + uVar18 * 0x20 + 0x30) = uVar19;
          puVar10[uVar18 * 0x20 + 0x38] = uVar5;
          puVar16 = puVar16 + 0x20;
          uVar18 = uVar17;
          if (uVar11 == uVar17) goto LAB_1002dd1b0;
        }
        if (uVar15 <= uVar14) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x1002dd1f4);
          (*pcVar8)();
        }
        lVar12 = uVar14 * 0x20;
        uVar2 = *(undefined8 *)(puVar10 + lVar12 + 0x20);
        uVar4 = *(undefined8 *)(puVar10 + lVar12 + 0x28);
        uVar13 = *(undefined8 *)(puVar10 + lVar12 + 0x30);
        uVar6 = puVar10[lVar12 + 0x38];
        FUN_100008310(uVar1,uVar3,uVar19,uVar5);
        FUN_100008310(uVar2,uVar4,uVar13,uVar6);
        puVar9 = puVar7;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar9 & 1) == 0) {
          FUN_1002dd214(0,*(long *)(puVar7 + 0x10) + 1,1);
        }
        uVar15 = *(ulong *)(puVar7 + 0x10);
        if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar15) {
          FUN_1002dd214(1 < *(ulong *)(puVar7 + 0x18),uVar15 + 1,1);
        }
        *(ulong *)(puVar7 + 0x10) = uVar15 + 1;
        *(undefined8 *)(puVar7 + uVar15 * 0x20 + 0x20) = uVar2;
        *(undefined8 *)(puVar7 + uVar15 * 0x20 + 0x28) = uVar4;
        *(undefined8 *)(puVar7 + uVar15 * 0x20 + 0x30) = uVar13;
        puVar7[uVar15 * 0x20 + 0x38] = uVar6;
        puVar9 = puVar10;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar9 & 1) == 0) {
          FUN_1002dd6d8();
        }
        if (*(ulong *)(puVar10 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x1002dd1f8);
          (*pcVar8)();
        }
        uVar2 = *(undefined8 *)(puVar10 + lVar12 + 0x20);
        uVar4 = *(undefined8 *)(puVar10 + lVar12 + 0x28);
        uVar13 = *(undefined8 *)(puVar10 + lVar12 + 0x30);
        *(undefined8 *)(puVar10 + lVar12 + 0x20) = uVar1;
        *(undefined8 *)(puVar10 + lVar12 + 0x28) = uVar3;
        *(undefined8 *)(puVar10 + lVar12 + 0x30) = uVar19;
        uVar6 = puVar10[lVar12 + 0x38];
        puVar10[lVar12 + 0x38] = uVar5;
        FUN_100008320(uVar2,uVar4,uVar13,uVar6);
        uVar15 = 0;
        if ((long)(uVar14 + 1) < param_1) {
          uVar15 = uVar14 + 1;
        }
        uVar14 = uVar15;
      } while (uVar11 - 1 != uVar18);
    }
LAB_1002dd1b0:
    _swift_release(puVar10);
    _swift_bridgeObjectRelease(param_2);
    param_2 = puVar7;
  }
  return param_2;
}



/* Address: 0x1002dd1f8 | FUN_1002dd1f8 */

void FUN_1002dd1f8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1002dd268();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1002dd214 | FUN_1002dd214 */

void FUN_1002dd214(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1002dd370();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1002dd230 | FUN_1002dd230 */

void FUN_1002dd230(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1002dd478();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1002dd24c | FUN_1002dd24c */

void FUN_1002dd24c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1002dd594();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1002dd268 | FUN_1002dd268 */

undefined * FUN_1002dd268(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1002dd370);
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
    puVar3 = &DAT_100fbd038;
    FUN_1000037f0(&DAT_100fbd038,&DAT_100c3e1b0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,PTR___type_metadata_for_Swift_String_100eac208);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x1002dd370 | FUN_1002dd370 */

undefined * FUN_1002dd370(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1002dd478);
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
    puVar3 = &DAT_100fbd070;
    FUN_1000037f0(&DAT_100fbd070,&DAT_100c3e1e8);
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
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,&DAT_100ec8508);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x20 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 * 0x20);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x1002dd478 | FUN_1002dd478 */

undefined * FUN_1002dd478(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1002dd594);
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
    puVar3 = &DAT_100fbd068;
    FUN_1000037f0(&DAT_100fbd068,&DAT_100c3e1e0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&DAT_100ec8580);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x18 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x1002dd594 | FUN_1002dd594 */

undefined * FUN_1002dd594(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1002dd6d8);
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
    puVar3 = &DAT_100fbd090;
    FUN_1000037f0(&DAT_100fbd090,&DAT_100c3e258);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100fbd098;
    FUN_1000037f0(&DAT_100fbd098,&DAT_100c3e260);
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x28 <= puVar4) {
      _memmove(puVar4,puVar1,uVar7 * 0x28);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x1002dd6d8 | FUN_1002dd6d8 */

void FUN_1002dd6d8(long param_1)

{
  FUN_1002dd370(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x1002dd6ec | FUN_1002dd6ec */

void FUN_1002dd6ec(long param_1)

{
  FUN_1002dacb8(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x1002dd700 | FUN_1002dd700 */

void FUN_1002dd700(long param_1)

{
  FUN_1002daf0c(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x1002dd714 | FUN_1002dd714 */

void FUN_1002dd714(long param_1)

{
  FUN_1002db298(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x1002dd728 | FUN_1002dd728 */

undefined8
FUN_1002dd728(undefined8 param_1,_StringGuts param_2,_StringGuts param_3,char param_4,
             undefined8 param_5,undefined *param_6,undefined *param_7,char param_8)

{
  bool bVar1;
  
  if (param_4 == '\x01') {
    if ((param_8 == '\x01') && ((((uint)param_5 ^ (uint)param_1) & 0xff) == 0)) {
      if ((param_2.unknown == param_6) && (param_3.unknown == param_7)) {
        return 1;
      }
      bVar1 = Swift::_stringCompareWithSmolCheck
                        (param_2,param_3,(_StringComparisonResult)(__int8)param_6);
      if (bVar1) {
        return 1;
      }
    }
  }
  else if (param_8 != '\x01') {
    FUN_1002de150(param_1,param_5);
    return param_1;
  }
  return 0;
}



/* Address: 0x1002dd7b0 | FUN_1002dd7b0 */

void FUN_1002dd7b0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fbd088 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fbd080;
  FUN_100005c24(&DAT_100fbd080,&DAT_100c3ecf0);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100eac518;
  _swift_getWitnessTable
            (PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100eac518,puVar1);
  DAT_100fbd088 = puVar2;
  return;
}



/* Address: 0x1002dd800 | FUN_1002dd800 */

void FUN_1002dd800(undefined8 *param_1)

{
  FUN_100041dd0(*param_1,param_1[1],param_1[2],*(undefined1 *)(param_1 + 3));
  return;
}



/* Address: 0x1002dd814 | FUN_1002dd814 */

undefined8 * FUN_1002dd814(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar4 = param_2[2];
  uVar3 = *(undefined1 *)(param_2 + 3);
  FUN_100041d74(uVar1,uVar2,uVar4,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar4;
  *(undefined1 *)(param_1 + 3) = uVar3;
  return param_1;
}



/* Address: 0x1002dd870 | FUN_1002dd870 */

undefined8 * FUN_1002dd870(undefined8 *param_1,undefined8 *param_2)

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
  FUN_100041d74(uVar1,uVar3,uVar8,uVar5);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  uVar7 = param_1[2];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar8;
  uVar6 = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = uVar5;
  FUN_100041dd0(uVar2,uVar4,uVar7,uVar6);
  return param_1;
}



/* Address: 0x1002dd8dc | FUN_1002dd8dc */

void FUN_1002dd8dc(undefined8 *param_1,undefined8 *param_2)

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



/* Address: 0x1002dd8f0 | FUN_1002dd8f0 */

undefined8 * FUN_1002dd8f0(undefined8 *param_1,undefined8 *param_2)

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
  FUN_100041dd0(uVar5,uVar1,uVar2,uVar4);
  return param_1;
}



/* Address: 0x1002dd93c | FUN_1002dd93c */

int FUN_1002dd93c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0x19) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)(param_1 + 6) ^ 0xff;
  if (*(byte *)(param_1 + 6) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x1002dd984 | FUN_1002dd984 */

void FUN_1002dd984(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xff) {
    if (0xfe < param_3) {
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
    *param_1 = (ulong)(param_2 - 0xff);
    if (0xfe < param_3) {
      *(undefined1 *)((long)param_1 + 0x19) = 1;
    }
  }
  return;
}



/* Address: 0x1002dd9cc | FUN_1002dd9cc */

undefined1 FUN_1002dd9cc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}



/* Address: 0x1002dd9d4 | FUN_1002dd9d4 */

void FUN_1002dd9d4(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x18) = param_2;
  return;
}



/* Address: 0x1002dd9dc | FUN_1002dd9dc */

undefined1  [16] FUN_1002dd9dc(void)

{
  return ZEXT816(0x100ec8428);
}



/* Address: 0x1002dd9ec | FUN_1002dd9ec */

undefined8 FUN_1002dd9ec(undefined8 param_1,undefined8 param_2)

{
  _swift_bridgeObjectRetain(param_2);
  return 3;
}



/* Address: 0x1002dda20 | FUN_1002dda20 */

bool FUN_1002dda20(undefined *param_1,undefined *param_2,undefined *param_3,undefined8 param_4)

{
  ulong uVar1;
  CharacterSet CVar2;
  CharacterSet CVar3;
  long extraout_x8;
  CharacterSet in;
  void *pvVar4;
  long lVar5;
  String SVar6;
  undefined *local_70;
  undefined *puStack_68;
  
  CVar2 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar5 = *(long *)(CVar2.unknown + -8);
  CVar3 = CVar2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar5 + 0x40));
  in.unknown = (undefined *)((long)&local_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  if (((uint)param_4 & 0xff) == 1) {
    local_70 = param_1;
    puStack_68 = param_2;
    Foundation::CharacterSet::get_whitespaces(CVar3);
    FUN_1002da77c();
    SVar6 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
    (**(code **)(lVar5 + 8))(in.unknown,CVar2.unknown);
  }
  else {
    CVar3.unknown = param_3;
    local_70 = param_2;
    puStack_68 = param_3;
    _swift_bridgeObjectRetain();
    Foundation::CharacterSet::get_whitespaces(CVar3);
    FUN_1002da77c();
    SVar6 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
    (**(code **)(lVar5 + 8))(in.unknown,CVar2.unknown);
    FUN_100008320(param_1,param_2,param_3,param_4);
  }
  pvVar4 = SVar6.bridgeObject;
  _swift_bridgeObjectRelease(pvVar4);
  uVar1 = (ulong)SVar6.str & 0xffffffffffff;
  if (((ulong)pvVar4 & 0x2000000000000000) != 0) {
    uVar1 = (ulong)pvVar4 >> 0x38 & 0xf;
  }
  return uVar1 == 0;
}



/* Address: 0x1002ddb74 | FUN_1002ddb74 */

undefined1  [16] FUN_1002ddb74(byte param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auVar6 [16];
  
  puVar5 = (undefined1 *)0x656369766564;
  if (param_1 != 4) {
    puVar5 = (undefined1 *)0x6472616f626e6970;
  }
  puVar1 = &DAT_e600000000000000;
  if (param_1 != 4) {
    puVar1 = &DAT_e800000000000000;
  }
  puVar2 = (undefined1 *)0x65746164;
  if (param_1 != 3) {
    puVar2 = puVar5;
  }
  puVar5 = &DAT_e400000000000000;
  if (param_1 != 3) {
    puVar5 = puVar1;
  }
  puVar1 = &DAT_65707974;
  if (param_1 != 1) {
    puVar1 = (undefined1 *)0x656c746974;
  }
  puVar3 = &DAT_e400000000000000;
  if (param_1 != 1) {
    puVar3 = &DAT_e500000000000000;
  }
  puVar4 = (undefined1 *)0x707061;
  if (param_1 != 0) {
    puVar4 = puVar1;
  }
  puVar1 = (undefined1 *)0xe300000000000000;
  if (param_1 != 0) {
    puVar1 = puVar3;
  }
  if (param_1 < 3) {
    puVar5 = puVar1;
    puVar2 = puVar4;
  }
  auVar6._8_8_ = puVar5;
  auVar6._0_8_ = puVar2;
  return auVar6;
}



/* Address: 0x1002ddc10 | FUN_1002ddc10 */

undefined1  [16] FUN_1002ddc10(char param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_58 [24];
  
  uVar3 = param_2;
  lVar4 = param_3;
  if (param_1 == '\x05') {
    _swift_beginAccess(&DAT_101057920,auStack_58,0,0);
    uVar2 = DAT_101057928;
    pcVar1 = DAT_101057920;
    if (DAT_101057920 != (code *)0x0) {
      _swift_retain(DAT_101057928);
      (*pcVar1)(param_2);
      FUN_100004550(pcVar1,uVar2);
      goto joined_r0x0001002ddcb8;
    }
  }
  else if (param_1 == '\x03') {
    FUN_1002d8e9c(param_2);
joined_r0x0001002ddcb8:
    if (lVar4 != 0) goto LAB_1002ddcd0;
  }
  _swift_bridgeObjectRetain(param_3);
  uVar3 = param_2;
  lVar4 = param_3;
LAB_1002ddcd0:
  auVar5._8_8_ = lVar4;
  auVar5._0_8_ = uVar3;
  return auVar5;
}



/* Address: 0x1002ddcf0 | FUN_1002ddcf0 */

bool FUN_1002ddcf0(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  bool bVar5;
  CharacterSet CVar6;
  void *pvVar7;
  long extraout_x8;
  long lVar8;
  CharacterSet in;
  char *pcVar9;
  undefined *puVar10;
  String SVar11;
  long local_80;
  undefined *puStack_78;
  undefined *local_70;
  undefined *puStack_68;
  
  puStack_78 = (undefined *)Foundation::CharacterSet::typeMetadataAccessor();
  local_80 = *(long *)(puStack_78 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_80 + 0x40));
  in.unknown = (undefined *)((long)&local_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  if (*(long *)(param_1 + 0x10) == 0) {
    bVar5 = true;
  }
  else {
    pcVar9 = (char *)(param_1 + 0x38);
    lVar8 = *(long *)(param_1 + 0x10) + 1;
    do {
      lVar8 = lVar8 + -1;
      bVar5 = lVar8 == 0;
      if (lVar8 == 0) {
        return true;
      }
      puVar2 = *(undefined **)(pcVar9 + -0x18);
      puVar3 = *(undefined **)(pcVar9 + -0x10);
      puVar10 = *(undefined **)(pcVar9 + -8);
      cVar4 = *pcVar9;
      CVar6.unknown = puVar3;
      local_70 = puVar2;
      if (cVar4 != '\x01') {
        CVar6.unknown = puVar10;
        local_70 = puVar3;
      }
      puStack_68 = CVar6.unknown;
      _swift_bridgeObjectRetain();
      Foundation::CharacterSet::get_whitespaces(CVar6);
      FUN_1002da77c();
      SVar11 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
      pvVar7 = SVar11.bridgeObject;
      (**(code **)(local_80 + 8))(in.unknown,puStack_78);
      pcVar9 = pcVar9 + 0x20;
      _swift_bridgeObjectRelease(pvVar7);
      FUN_100008320(puVar2,puVar3,puVar10,cVar4);
      uVar1 = (ulong)SVar11.str & 0xffffffffffff;
      if (((ulong)pvVar7 & 0x2000000000000000) != 0) {
        uVar1 = (ulong)pvVar7 >> 0x38 & 0xf;
      }
    } while (uVar1 == 0);
  }
  return bVar5;
}



/* Address: 0x1002dde30 | FUN_1002dde30 */

undefined * FUN_1002dde30(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  ulong uVar11;
  ulong uVar12;
  
  uVar11 = 0;
  uVar12 = *(ulong *)(param_1 + 0x10);
  puVar9 = PTR___swiftEmptyArrayStorage_100eae0d8;
  do {
    uVar2 = uVar11;
    if (uVar11 <= uVar12) {
      uVar2 = uVar12;
    }
    puVar5 = (undefined1 *)(param_1 + uVar11 * 0x20);
    do {
      puVar10 = puVar5;
      if (uVar12 == uVar11) {
        return puVar9;
      }
      uVar11 = uVar11 + 1;
      if (uVar2 + 1 == uVar11) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1002ddf40);
        (*pcVar6)();
      }
      puVar5 = puVar10 + 0x20;
    } while (puVar10[0x38] == '\x01');
    uVar1 = *(undefined8 *)(puVar10 + 0x28);
    uVar3 = *(undefined8 *)(puVar10 + 0x30);
    uVar4 = puVar10[0x20];
    _swift_bridgeObjectRetain(uVar3);
    puVar7 = puVar9;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar8 = puVar9;
    if (((ulong)puVar7 & 1) == 0) {
      puVar8 = (undefined *)0x0;
      FUN_1002dacd4(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
    }
    uVar2 = *(ulong *)(puVar8 + 0x10);
    puVar9 = puVar8;
    if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar2) {
      puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
      FUN_1002dacd4(puVar9,uVar2 + 1,1,puVar8);
    }
    *(ulong *)(puVar9 + 0x10) = uVar2 + 1;
    puVar9[uVar2 * 0x18 + 0x20] = uVar4;
    *(undefined8 *)(puVar9 + uVar2 * 0x18 + 0x28) = uVar1;
    *(undefined8 *)(puVar9 + uVar2 * 0x18 + 0x30) = uVar3;
  } while( true );
}



/* Address: 0x1002ddf40 | FUN_1002ddf40 */

String FUN_1002ddf40(undefined8 param_1)

{
  String SVar1;
  
  SVar1 = Swift::Array<undefined>::get_description(param_1,&DAT_100ec8508);
  return SVar1;
}



/* Address: 0x1002ddf4c | FUN_1002ddf4c */

void FUN_1002ddf4c(void)

{
  DAT_101057918 = PTR___swiftEmptyArrayStorage_100eae0d8;
  return;
}



/* Address: 0x1002ddf60 | FUN_1002ddf60 */

undefined8 * FUN_1002ddf60(void)

{
  if (DAT_100fbd0a0 != -1) {
    _swift_once(&DAT_100fbd0a0,FUN_1002ddf4c);
  }
  return &DAT_101057918;
}



/* Address: 0x1002ddfa0 | FUN_1002ddfa0 */

void FUN_1002ddfa0(void)

{
  if (DAT_100fbd0a0 != -1) {
    _swift_once(&DAT_100fbd0a0,FUN_1002ddf4c);
  }
  _swift_bridgeObjectRetain(DAT_101057918);
  return;
}



/* Address: 0x1002ddfe0 | FUN_1002ddfe0 */

undefined * FUN_1002ddfe0(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  String SVar7;
  undefined *local_90 [2];
  undefined8 *local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_70 = 0x20;
  uStack_68 = 0xe100000000000000;
  local_80 = &local_70;
  _swift_bridgeObjectRetain(param_2);
  lVar3 = 0x7fffffffffffffff;
  FUN_1002d95dc(0x7fffffffffffffff,1,FUN_1002dee10,local_90,param_1,param_2);
  lVar5 = *(long *)(lVar3 + 0x10);
  if (lVar5 == 0) {
    _swift_bridgeObjectRelease(lVar3);
    puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    local_90[0] = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1002dd214(0,lVar5,0);
    puVar6 = (undefined8 *)(lVar3 + 0x38);
    do {
      puVar4 = local_90[0];
      SVar7 = *(String *)(puVar6 + -3);
      uVar2 = *puVar6;
      _swift_bridgeObjectRetain(uVar2);
      SVar7 = Swift::String::__fromSubstring(SVar7);
      _swift_bridgeObjectRelease(uVar2);
      uVar1 = *(ulong *)(puVar4 + 0x10);
      local_90[0] = puVar4;
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
        FUN_1002dd214(1 < *(ulong *)(puVar4 + 0x18),uVar1 + 1,1);
      }
      puVar4 = local_90[0];
      puVar6 = puVar6 + 4;
      *(ulong *)(local_90[0] + 0x10) = uVar1 + 1;
      *(String *)(local_90[0] + uVar1 * 0x20 + 0x20) = SVar7;
      *(undefined8 *)(local_90[0] + uVar1 * 0x20 + 0x30) = 0;
      local_90[0][uVar1 * 0x20 + 0x38] = 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    _swift_bridgeObjectRelease(lVar3);
  }
  return puVar4;
}



/* Address: 0x1002de14c | thunk_FUN_1002de150 */

void thunk_FUN_1002de150(void)

{
  FUN_1002de150();
  return;
}



/* Address: 0x1002de150 | FUN_1002de150 */

undefined8 FUN_1002de150(long param_1,long param_2)

{
  _StringGuts _Var1;
  undefined *puVar2;
  _StringGuts _Var3;
  undefined *puVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  undefined8 uVar8;
  char *pcVar9;
  _StringGuts _Var10;
  undefined *puVar11;
  char *pcVar12;
  long lVar13;
  
  lVar13 = *(long *)(param_1 + 0x10);
  if (lVar13 == *(long *)(param_2 + 0x10)) {
    if ((lVar13 != 0) && (param_1 != param_2)) {
      pcVar12 = (char *)(param_1 + 0x38);
      pcVar9 = (char *)(param_2 + 0x38);
      do {
        _Var1.unknown = *(undefined **)(pcVar12 + -0x18);
        _Var3.unknown = *(undefined **)(pcVar12 + -0x10);
        cVar5 = *pcVar12;
        puVar2 = *(undefined **)(pcVar9 + -0x18);
        puVar4 = *(undefined **)(pcVar9 + -0x10);
        cVar6 = *pcVar9;
        if (cVar5 == '\x01') {
          if (cVar6 != '\x01') goto LAB_1002de2fc;
          if (_Var1.unknown != puVar2 || _Var3.unknown != puVar4) {
            bVar7 = Swift::_stringCompareWithSmolCheck
                              (_Var1,_Var3,(_StringComparisonResult)(__int8)puVar2);
joined_r0x0001002de1dc:
            if (!bVar7) goto LAB_1002de2fc;
          }
        }
        else {
          if (cVar6 == '\x01') goto LAB_1002de2fc;
          _Var10.unknown = *(undefined **)(pcVar12 + -8);
          puVar11 = *(undefined **)(pcVar9 + -8);
          FUN_100008310(puVar2,puVar4,puVar11,cVar6);
          FUN_100008310(_Var1.unknown,_Var3.unknown,_Var10.unknown,cVar5);
          if ((((uint)puVar2 ^ (uint)_Var1.unknown) & 0xff) != 0) {
            FUN_100008320(puVar2,puVar4,puVar11,cVar6);
            FUN_100008320(_Var1.unknown,_Var3.unknown,_Var10.unknown,cVar5);
            goto LAB_1002de2fc;
          }
          if ((_Var3.unknown != puVar4) || (_Var10.unknown != puVar11)) {
            bVar7 = Swift::_stringCompareWithSmolCheck
                              (_Var3,_Var10,(_StringComparisonResult)(__int8)puVar4);
            FUN_100008320(puVar2,puVar4,puVar11,cVar6);
            FUN_100008320(_Var1.unknown,_Var3.unknown,_Var10.unknown,cVar5);
            goto joined_r0x0001002de1dc;
          }
          FUN_100008320(puVar2,_Var3.unknown,_Var10.unknown,cVar6);
          FUN_100008320(_Var1.unknown,_Var3.unknown,_Var10.unknown,cVar5);
        }
        pcVar12 = pcVar12 + 0x20;
        pcVar9 = pcVar9 + 0x20;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    uVar8 = 1;
  }
  else {
LAB_1002de2fc:
    uVar8 = 0;
  }
  return uVar8;
}



/* Address: 0x1002de320 | FUN_1002de320 */

void FUN_1002de320(undefined8 *param_1,undefined8 *param_2)

{
  FUN_1002de150(*param_1,*param_2);
  return;
}



/* Address: 0x1002de32c | FUN_1002de32c */

String FUN_1002de32c(void)

{
  undefined8 *unaff_x20;
  String SVar1;
  
  SVar1 = Swift::Array<undefined>::get_description(*unaff_x20,&DAT_100ec8508);
  return SVar1;
}



/* Address: 0x1002de33c | thunk_FUN_1002dee70 */

void thunk_FUN_1002dee70(void)

{
  FUN_1002dee70();
  return;
}



/* Address: 0x1002de340 | FUN_1002de340 */

void FUN_1002de340(undefined8 *param_1,undefined8 *param_2)

{
  FUN_1002dee70(*param_1,param_1[1],param_1[2],*(undefined1 *)(param_1 + 3),*param_2,param_2[1],
                param_2[2],*(undefined1 *)(param_2 + 3));
  return;
}



/* Address: 0x1002de364 | FUN_1002de364 */

undefined8 FUN_1002de364(undefined8 param_1,undefined8 param_2)

{
  _swift_bridgeObjectRetain(param_2);
  return 0;
}



/* Address: 0x1002de398 | FUN_1002de398 */

undefined8 FUN_1002de398(undefined8 param_1,undefined8 param_2)

{
  _swift_bridgeObjectRetain(param_2);
  return 1;
}



/* Address: 0x1002de3cc | FUN_1002de3cc */

undefined8 FUN_1002de3cc(undefined8 param_1,undefined8 param_2)

{
  _swift_bridgeObjectRetain(param_2);
  return 4;
}



/* Address: 0x1002de400 | FUN_1002de400 */

undefined8 FUN_1002de400(undefined8 param_1,undefined8 param_2)

{
  _swift_bridgeObjectRetain(param_2);
  return 5;
}



/* Address: 0x1002de434 | thunk_FUN_1002dee2c */

void thunk_FUN_1002dee2c(void)

{
  FUN_1002dee2c();
  return;
}



/* Address: 0x1002de438 | FUN_1002de438 */

void FUN_1002de438(Hasher param_1,byte param_2,char *param_3,void *param_4)

{
  undefined1 *puVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  String SVar7;
  String SVar8;
  
  pcVar3 = (char *)0x656369766564;
  if (param_2 != 4) {
    pcVar3 = (char *)0x6472616f626e6970;
  }
  puVar1 = &DAT_e600000000000000;
  if (param_2 != 4) {
    puVar1 = &DAT_e800000000000000;
  }
  pcVar2 = (char *)0x65746164;
  if (param_2 != 3) {
    pcVar2 = pcVar3;
  }
  puVar6 = &DAT_e400000000000000;
  if (param_2 != 3) {
    puVar6 = puVar1;
  }
  pcVar3 = &DAT_65707974;
  if (param_2 != 1) {
    pcVar3 = (char *)0x656c746974;
  }
  puVar1 = &DAT_e400000000000000;
  if (param_2 != 1) {
    puVar1 = &DAT_e500000000000000;
  }
  pcVar4 = (char *)0x707061;
  if (param_2 != 0) {
    pcVar4 = pcVar3;
  }
  puVar5 = (undefined1 *)0xe300000000000000;
  if (param_2 != 0) {
    puVar5 = puVar1;
  }
  if (param_2 < 3) {
    puVar6 = puVar5;
    pcVar2 = pcVar4;
  }
  SVar7.bridgeObject = puVar6;
  SVar7.str = pcVar2;
  Swift::String::hash(param_1,SVar7);
  _swift_bridgeObjectRelease(puVar6);
  SVar8.bridgeObject = param_4;
  SVar8.str = param_3;
  Swift::String::hash(param_1,SVar8);
  return;
}


