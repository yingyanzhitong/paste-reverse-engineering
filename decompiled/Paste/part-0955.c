/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100a49528 | FUN_100a49528 */

void FUN_100a49528(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  TaskLocal *pTVar2;
  long *plVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar1 & 1) != 0) {
    pTVar2 = (TaskLocal *)(ulong)*(uint *)(PTR__withValueImpl_100eaf020 + 4);
    _swift_task_alloc();
    *(TaskLocal **)(unaff_x22 + 0x18) = pTVar2;
    *(long *)pTVar2 = unaff_x22;
    *(code **)(pTVar2 + 8) = FUN_1005cd444;
    Swift::TaskLocal::_withValueImpl
              (pTVar2,unaff_x20,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return;
  }
  plVar3 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1005c804c;
  FUN_1005cd488(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



/* Address: 0x100a49680 | FUN_100a49680 */

void FUN_100a49680(undefined8 *param_1,long param_2,ulong param_3)

{
  int iVar1;
  long *unaff_x20;
  long lVar2;
  
  FUN_100a49f50();
  if ((param_3 & 1) == 0) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    lVar2 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_100a498b8();
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(*(long *)(lVar2 + 0x30) + param_2 * 0x18 + 0x10));
    FUN_100011080(*(long *)(lVar2 + 0x38) + param_2 * 0x20,param_1);
    FUN_100a49d40(param_2,lVar2);
    *unaff_x20 = lVar2;
  }
  return;
}



/* Address: 0x100a49724 | FUN_100a49724 */

void FUN_100a49724(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  
  lVar7 = *unaff_x20;
  uVar2 = param_2;
  uVar3 = param_2;
  FUN_100a49f50(param_2);
  lVar5 = *(long *)(lVar7 + 0x10);
  uVar6 = (ulong)~(uint)uVar3 & 1;
  lVar4 = lVar5 + uVar6;
  if (SCARRY8(lVar5,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a49800);
    (*pcVar1)();
  }
  if (*(long *)(lVar7 + 0x18) < lVar4) {
    param_5 = param_5 & 1;
    FUN_100a49a70(lVar4);
    FUN_100a49f50(param_2);
    uVar2 = param_2;
    if (((uint)uVar3 & 1) != (param_5 & 1)) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a497c0);
      (*pcVar1)();
    }
  }
  else if ((param_5 & 1) == 0) {
    FUN_100a498b8();
    lVar4 = *unaff_x20;
    goto joined_r0x000100a49814;
  }
  lVar4 = *unaff_x20;
joined_r0x000100a49814:
  if ((uVar3 & 1) != 0) {
    lVar4 = *(long *)(lVar4 + 0x38) + uVar2 * 0x20;
    FUN_100004594(lVar4);
    FUN_100011080(param_1,lVar4);
    return;
  }
  FUN_100a49848();
  _swift_bridgeObjectRetain(param_4);
  return;
}



/* Address: 0x100a49848 | FUN_100a49848 */

void FUN_100a49848(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  
  lVar1 = param_6 + (param_1 >> 6) * 8;
  *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (param_1 & 0x3f);
  puVar3 = (undefined8 *)(*(long *)(param_6 + 0x30) + param_1 * 0x18);
  *puVar3 = param_2;
  puVar3[1] = param_3;
  puVar3[2] = param_4;
  FUN_100011080(param_5,*(long *)(param_6 + 0x38) + param_1 * 0x20);
  if (!SCARRY8(*(long *)(param_6 + 0x10),1)) {
    *(long *)(param_6 + 0x10) = *(long *)(param_6 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100a498b8);
  (*pcVar2)();
}



/* Address: 0x100a498b8 | FUN_100a498b8 */

void FUN_100a498b8(void)

{
  __RawDictionaryStorage *p_Var1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *unaff_x20;
  long lVar10;
  __RawDictionaryStorage *original;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_80 [32];
  
  this = (_DictionaryStorage *)&DAT_100ff6680;
  FUN_1000f7830(&DAT_100ff6680,&DAT_100c90620);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var6 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) == 0) {
    _swift_release(original);
LAB_100a49a48:
    *unaff_x20 = (long)p_Var6;
    return;
  }
  p_Var1 = original + 0x40;
  uVar7 = (1L << ((ulong)(byte)p_Var6[0x20] & 0x3f)) + 0x3fU >> 6;
  if (p_Var6 != original || p_Var1 + uVar7 * 8 <= p_Var6 + 0x40) {
    _memmove(p_Var6 + 0x40,p_Var1,uVar7 << 3);
  }
  lVar12 = 0;
  *(undefined8 *)(p_Var6 + 0x10) = *(undefined8 *)(original + 0x10);
  uVar8 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar7 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar7 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar7 = uVar7 & *(ulong *)(original + 0x40);
  if (uVar7 == 0) goto LAB_100a499a4;
  do {
    uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
    uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
    uVar7 = uVar7 - 1 & uVar7;
    while( true ) {
      uVar9 = LZCOUNT(uVar9) | lVar12 << 6;
      lVar13 = uVar9 * 0x18;
      puVar2 = (undefined8 *)(*(long *)(original + 0x30) + lVar13);
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      uVar11 = puVar2[2];
      lVar10 = uVar9 * 0x20;
      FUN_10000cbfc(*(long *)(original + 0x38) + lVar10,auStack_80);
      puVar2 = (undefined8 *)(*(long *)(p_Var6 + 0x30) + lVar13);
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      puVar2[2] = uVar11;
      FUN_100011080(auStack_80,*(long *)(p_Var6 + 0x38) + lVar10);
      _swift_bridgeObjectRetain(uVar11);
      if (uVar7 != 0) break;
LAB_100a499a4:
      do {
        lVar10 = lVar12 + 1;
        if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100a49a70);
          (*pcVar5)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar10) {
          _swift_release(original);
          goto LAB_100a49a48;
        }
        uVar7 = *(ulong *)(p_Var1 + lVar10 * 8);
        lVar12 = lVar12 + 1;
      } while (uVar7 == 0);
      uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar7 = uVar7 - 1 & uVar7;
      lVar12 = lVar10;
    }
  } while( true );
}



/* Address: 0x100a49a70 | FUN_100a49a70 */

void FUN_100a49a70(long param_1,bool param_2)

{
  __int64 capacity;
  undefined *puVar1;
  __uint64 _Var2;
  bool bVar3;
  code *pcVar4;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var5;
  Hasher HVar6;
  ulong uVar7;
  Hasher HVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  __uint64 *p_Var13;
  ulong uVar14;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  ulong uVar15;
  __RawDictionaryStorage *p_Var16;
  __uint64 _Var17;
  long lVar18;
  undefined1 auStack_80 [32];
  
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_DictionaryStorage *)&DAT_100ff6680;
  FUN_1000f7830(&DAT_100ff6680,&DAT_100c90620);
  p_Var5 = original;
  Swift::_DictionaryStorage::_resize(this,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_100a49d0c:
    _swift_release(original);
LAB_100a49d14:
    *unaff_x20 = (long)p_Var5;
    return;
  }
  p_Var16 = original + 0x40;
  uVar12 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)p_Var16;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar18 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100a49d3c);
          (*pcVar4)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar18) {
          if ((param_2 & 1U) == 0) {
            _swift_release(original);
            goto LAB_100a49d14;
          }
          uVar15 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          if (((byte)original[0x20] & 0x3f) < 6) {
            *(long *)p_Var16 = -1L << (uVar15 & 0x3f);
          }
          else {
            _bzero(p_Var16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_100a49d0c;
        }
        uVar15 = *(ulong *)(p_Var16 + lVar18 * 8);
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar18 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar18 << 6;
    p_Var13 = (__uint64 *)(*(long *)(original + 0x30) + uVar9 * 0x18);
    puVar1 = (undefined *)*p_Var13;
    _Var2 = p_Var13[1];
    _Var17 = p_Var13[2];
    if ((param_2 & 1U) == 0) {
      HVar8.unknown = auStack_80;
      FUN_10000cbfc(*(long *)(original + 0x38) + uVar9 * 0x20);
      _swift_bridgeObjectRetain(_Var17);
    }
    else {
      HVar8.unknown = auStack_80;
      FUN_100011080();
    }
    Swift::Hasher::init(*(__int64 *)(p_Var5 + 0x28));
    HVar6.unknown = puVar1;
    Swift::Hasher::_combine((__uint64)puVar1,HVar8);
    uVar7 = Swift::Hasher::_finalize(HVar6);
    uVar14 = -1L << ((ulong)(byte)p_Var5[0x20] & 0x3f);
    uVar7 = uVar7 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar7 >> 6;
    uVar9 = -1L << (uVar7 & 0x3f) & (*(ulong *)(p_Var5 + uVar11 * 8 + 0x40) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar3 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar7 = uVar11 + 1;
        if ((uVar7 == uVar9) && (bVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100a49d40);
          (*pcVar4)();
        }
        uVar11 = 0;
        if (uVar7 != uVar9) {
          uVar11 = uVar7;
        }
        bVar3 = (bool)(uVar7 == uVar9 | bVar3);
      } while (*(ulong *)(p_Var5 + uVar11 * 8 + 0x40) == 0xffffffffffffffff);
      uVar9 = ~*(ulong *)(p_Var5 + uVar11 * 8 + 0x40);
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar7 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var5 + uVar11 + 0x40) = 1L << (uVar9 & 0x3f) | *(ulong *)(p_Var5 + uVar11 + 0x40);
    p_Var13 = (__uint64 *)(*(long *)(p_Var5 + 0x30) + uVar9 * 0x18);
    *p_Var13 = (__uint64)puVar1;
    p_Var13[1] = _Var2;
    p_Var13[2] = _Var17;
    FUN_100011080(auStack_80,*(long *)(p_Var5 + 0x38) + uVar9 * 0x20);
    *(long *)(p_Var5 + 0x10) = *(long *)(p_Var5 + 0x10) + 1;
    lVar10 = lVar18;
  } while( true );
}



/* Address: 0x100a49d40 | FUN_100a49d40 */

void FUN_100a49d40(Bucket param_1,long param_2)

{
  _HashTable _Var1;
  code *pcVar2;
  Bucket BVar3;
  ulong uVar4;
  _HashTable _Var5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  Hasher HVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  _Var1.unknown = (undefined *)(param_2 + 0x40);
  uVar6 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar10 = param_1.offset + 1U & (uVar6 ^ 0xffffffffffffffff);
  if ((*(ulong *)(_Var1.unknown + (uVar10 >> 6) * 8) >> (uVar10 & 0x3f) & 1) != 0) {
    uVar6 = ~uVar6;
    _Var5.unknown = _Var1.unknown;
    BVar3 = Swift::_HashTable::previousHole(param_1,_Var1);
    uVar11 = BVar3.offset + 1U & uVar6;
    do {
      HVar9.unknown = *(undefined **)(*(long *)(param_2 + 0x30) + uVar10 * 0x18);
      Swift::Hasher::init(*(__int64 *)(param_2 + 0x28));
      Swift::Hasher::_combine((__uint64)HVar9.unknown,(Hasher)_Var5.unknown);
      uVar4 = Swift::Hasher::_finalize(HVar9);
      uVar4 = uVar4 & uVar6;
      if (param_1.offset < (long)uVar11) {
        if (uVar4 < uVar11) {
LAB_100a49e20:
          if (param_1.offset < (long)uVar4) goto LAB_100a49dc0;
        }
        puVar7 = (undefined8 *)(*(long *)(param_2 + 0x30) + param_1.offset * 0x18);
        puVar8 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar10 * 0x18);
        if ((param_1.offset < (long)uVar10) || (puVar8 + 3 <= puVar7 || param_1.offset != uVar10)) {
          uVar13 = puVar8[1];
          uVar12 = *puVar8;
          puVar7[2] = puVar8[2];
          puVar7[1] = uVar13;
          *puVar7 = uVar12;
        }
        puVar7 = (undefined8 *)(*(long *)(param_2 + 0x38) + param_1.offset * 0x20);
        puVar8 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar10 * 0x20);
        if (((param_1.offset < (long)uVar10) || (puVar8 + 4 <= puVar7)) ||
           (param_1.offset != uVar10)) {
          uVar12 = *puVar8;
          uVar14 = puVar8[3];
          uVar13 = puVar8[2];
          puVar7[1] = puVar8[1];
          *puVar7 = uVar12;
          puVar7[3] = uVar14;
          puVar7[2] = uVar13;
          param_1.offset = uVar10;
        }
      }
      else if (uVar11 <= uVar4) goto LAB_100a49e20;
LAB_100a49dc0:
      uVar10 = uVar10 + 1 & uVar6;
    } while ((*(ulong *)(_Var1.unknown + (uVar10 >> 6) * 8) >> (uVar10 & 0x3f) & 1) != 0);
  }
  uVar6 = (ulong)param_1.offset >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(_Var1.unknown + uVar6) =
       *(ulong *)(_Var1.unknown + uVar6) & (-1L << (param_1.offset & 0x3fU)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100a49ee4);
  (*pcVar2)();
}



/* Address: 0x100a49ee4 | FUN_100a49ee4 */

void FUN_100a49ee4(long param_1,ulong param_2)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar1 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if (*(long *)(*(long *)(unaff_x20 + 0x30) + param_2 * 0x18) == param_1) {
      return;
    }
    param_2 = param_2 + 1 & ~uVar1;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  return;
}



/* Address: 0x100a49f50 | FUN_100a49f50 */

void FUN_100a49f50(undefined *param_1,Hasher param_2)

{
  Hasher HVar1;
  __int64 _Var2;
  long unaff_x20;
  
  Swift::Hasher::init(*(__int64 *)(unaff_x20 + 0x28));
  HVar1.unknown = param_1;
  Swift::Hasher::_combine((__uint64)param_1,param_2);
  _Var2 = Swift::Hasher::_finalize(HVar1);
  FUN_100a49ee4(param_1,_Var2);
  return;
}



/* Address: 0x100a49fa8 | FUN_100a49fa8 */

void FUN_100a49fa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  Optional OVar1;
  long lVar2;
  undefined7 extraout_var;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long local_68;
  long lVar3;
  
  lVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_4,param_3,0x100cca50c,&TargetProtocolRequirement_100cca514);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar3 = CONCAT71(extraout_var,OVar1.value);
  lVar7 = *(long *)(lVar3 + -8);
  lVar5 = (long)&local_80 - (*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100a4a128(param_2,param_3,param_4);
  (**(code **)(lVar7 + 0x10))(lVar5,param_1,lVar3);
  lVar6 = *(long *)(lVar2 + -8);
  lVar4 = lVar5;
  (**(code **)(lVar6 + 0x30))(lVar5,1,lVar2);
  if ((int)lVar4 == 1) {
    (**(code **)(lVar7 + 8))(lVar5,lVar3);
    uStack_78 = 0;
    local_80 = 0;
    local_68 = 0;
    uStack_70 = 0;
  }
  else {
    local_68 = lVar2;
    FUN_10000cbb0(&local_80);
    (**(code **)(lVar6 + 0x20))();
  }
  FUN_100a488f4(&local_80,param_2,param_3,param_4);
  return;
}



/* Address: 0x100a4a0e0 | FUN_100a4a0e0 */

undefined1  [16] FUN_100a4a0e0(void)

{
  return ZEXT816(0x100f2abd0);
}



/* Address: 0x100a4a0f0 | FUN_100a4a0f0 */

void FUN_100a4a0f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x100a4a104 | FUN_100a4a104 */

undefined1  [16] FUN_100a4a104(void)

{
  return ZEXT816(0x100f2ac50);
}



/* Address: 0x100a4a114 | FUN_100a4a114 */

undefined1  [16] FUN_100a4a114(void)

{
  return ZEXT816(0x100f2ac78);
}



/* Address: 0x100a4a124 | thunk_FUN_1002c9be4 */

void thunk_FUN_1002c9be4(void)

{
  thunk_FUN_1002c9be4();
  return;
}



/* Address: 0x100a4a128 | FUN_100a4a128 */

undefined8 FUN_100a4a128(undefined8 param_1,undefined8 param_2,long param_3)

{
  (**(code **)(param_3 + 0x10))(param_2,param_3);
  return param_1;
}



/* Address: 0x100a4a168 | FUN_100a4a168 */

void FUN_100a4a168(undefined8 param_1,long param_2)

{
  undefined8 unaff_x20;
  
  (**(code **)(param_2 + 0x10))();
  if (param_2 == 0) {
    _swift_getMetatypeMetadata();
    Swift::String::_init(&stack0xffffffffffffffe8,unaff_x20);
  }
  return;
}



/* Address: 0x100a4a1a4 | FUN_100a4a1a4 */

String FUN_100a4a1a4(undefined8 param_1,char *param_2,void *param_3)

{
  String SVar1;
  undefined8 local_38;
  
  if (param_3 == (void *)0x0) {
    local_38 = param_1;
    _swift_getMetatypeMetadata();
    SVar1 = Swift::String::_init(&local_38,param_1);
  }
  else {
    SVar1.bridgeObject = param_3;
    SVar1.str = param_2;
  }
  _swift_bridgeObjectRetain(param_3);
  return SVar1;
}



/* Address: 0x100a4a20c | thunk_FUN_100a4a210 */

void thunk_FUN_100a4a210(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff6690 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c90670;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c90670,&DAT_100f2acf8);
  DAT_100ff6690 = pTVar1;
  return;
}



/* Address: 0x100a4a210 | FUN_100a4a210 */

void FUN_100a4a210(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff6690 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c90670;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c90670,&DAT_100f2acf8);
  DAT_100ff6690 = pTVar1;
  return;
}



/* Address: 0x100a4a250 | thunk_FUN_100a4a254 */

undefined8 * thunk_FUN_100a4a254(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Address: 0x100a4a254 | FUN_100a4a254 */

undefined8 * FUN_100a4a254(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Address: 0x100a4a288 | FUN_100a4a288 */

undefined1  [16] FUN_100a4a288(void)

{
  return ZEXT816(0x100f2acf8);
}



/* Address: 0x100a4a298 | thunk_FUN_100a4a254 */

void thunk_FUN_100a4a254(void)

{
  thunk_FUN_100a4a254();
  return;
}



/* Address: 0x100a4a29c | FUN_100a4a29c */

void FUN_100a4a29c(void)

{
  _swift_slowAlloc(200,0xffffffffffffffff);
  return;
}



/* Address: 0x100a4a2a8 | FUN_100a4a2a8 */

long FUN_100a4a2a8(void)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  pthread_rwlock_t *ppVar4;
  
  lVar3 = 0;
  FUN_100a4ab9c();
  _swift_allocObject();
  ppVar4 = (pthread_rwlock_t *)0xc8;
  _swift_slowAlloc(200,0xffffffffffffffff);
  *(pthread_rwlock_t **)(lVar3 + 0x10) = ppVar4;
  iVar2 = _pthread_rwlock_init(ppVar4,(pthread_rwlockattr_t *)0x0);
  if (iVar2 == 0) {
    return lVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100a4a2fc);
  (*pcVar1)();
}



/* Address: 0x100a4a2fc | FUN_100a4a2fc */

void FUN_100a4a2fc(void)

{
  return;
}



/* Address: 0x100a4a300 | FUN_100a4a300 */

void FUN_100a4a300(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  uVar4 = param_2[5];
  uVar3 = param_2[4];
  uVar5 = param_2[6];
  uVar7 = param_2[9];
  uVar6 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar5;
  param_1[9] = uVar7;
  param_1[8] = uVar6;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  uVar2 = param_2[0xb];
  uVar1 = param_2[10];
  uVar4 = param_2[0xd];
  uVar3 = param_2[0xc];
  uVar5 = param_2[0xe];
  uVar7 = param_2[0x11];
  uVar6 = param_2[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar5;
  param_1[0x11] = uVar7;
  param_1[0x10] = uVar6;
  param_1[0xb] = uVar2;
  param_1[10] = uVar1;
  param_1[0xd] = uVar4;
  param_1[0xc] = uVar3;
  uVar2 = param_2[0x13];
  uVar1 = param_2[0x12];
  uVar4 = param_2[0x15];
  uVar3 = param_2[0x14];
  uVar6 = param_2[0x17];
  uVar5 = param_2[0x16];
  param_1[0x18] = param_2[0x18];
  param_1[0x15] = uVar4;
  param_1[0x14] = uVar3;
  param_1[0x17] = uVar6;
  param_1[0x16] = uVar5;
  param_1[0x13] = uVar2;
  param_1[0x12] = uVar1;
  return;
}



/* Address: 0x100a4a344 | FUN_100a4a344 */

void FUN_100a4a344(undefined8 param_1)

{
  undefined *puVar1;
  
  if (DAT_100ff6698 != 0) {
    return;
  }
  puVar1 = &DAT_100f2adc8;
  _swift_getForeignTypeMetadata();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  DAT_100ff6698 = param_1;
  return;
}



/* Address: 0x100a4a394 | FUN_100a4a394 */

void FUN_100a4a394(undefined8 param_1)

{
  code *pcVar1;
  int iVar2;
  pthread_rwlock_t *ppVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  ppVar3 = *(pthread_rwlock_t **)(*(long *)(unaff_x20 + 0x10) + 0x10);
  iVar2 = _pthread_rwlock_wrlock(ppVar3);
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a4a41c);
    (*pcVar1)();
  }
  if ((*(byte *)(unaff_x20 + 0x40) & 1) == 0) {
    _swift_beginAccess(unaff_x20 + 0x18,auStack_48,0x21,0);
    FUN_10008820c(unaff_x20 + 0x18,param_1);
    _swift_endAccess(auStack_48);
    *(undefined1 *)(unaff_x20 + 0x40) = 1;
    iVar2 = _pthread_rwlock_unlock(ppVar3);
    if (iVar2 == 0) {
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a4a424);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100a4a420);
  (*pcVar1)();
}



/* Address: 0x100a4a424 | FUN_100a4a424 */

void FUN_100a4a424(undefined8 *param_1,long param_2,code *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined1 auStack_80 [40];
  undefined1 auStack_58 [24];
  undefined8 local_38;
  
  uVar3 = 0;
  _swift_beginAccess(param_2 + 0x18,auStack_58,0,0);
  FUN_100076688(param_2 + 0x18,auStack_80);
  puVar1 = &DAT_100ff6760;
  FUN_1000f7830(&DAT_100ff6760,&DAT_100c90788);
  puVar2 = &local_38;
  _swift_dynamicCast(puVar2,auStack_80,puVar1,&DAT_100f2af08,6);
  if (((ulong)puVar2 & 1) == 0) {
    FUN_100076688(param_2 + 0x18,auStack_80);
    (*param_3)();
    FUN_100004594(auStack_80);
    if ((uVar3 & 1) == 0) {
      param_1[4] = 0;
      param_1[1] = 0;
      *param_1 = 0;
      param_1[3] = 0;
      param_1[2] = 0;
    }
    else {
      FUN_100076688(param_2 + 0x18,param_1);
    }
  }
  else {
    FUN_100a4a798(param_1,param_3,param_4,local_38);
    _swift_bridgeObjectRelease(local_38);
  }
  return;
}



/* Address: 0x100a4a52c | FUN_100a4a52c */

void FUN_100a4a52c(void)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  pthread_rwlock_t *ppVar5;
  
  lVar3 = 0;
  FUN_100a4a778();
  _swift_allocObject();
  lVar4 = 0;
  FUN_100a4ab9c();
  _swift_allocObject();
  ppVar5 = (pthread_rwlock_t *)0xc8;
  _swift_slowAlloc(200,0xffffffffffffffff);
  *(pthread_rwlock_t **)(lVar4 + 0x10) = ppVar5;
  iVar2 = _pthread_rwlock_init(ppVar5,(pthread_rwlockattr_t *)0x0);
  if (iVar2 == 0) {
    *(long *)(lVar3 + 0x10) = lVar4;
    *(undefined **)(lVar3 + 0x30) = &DAT_100f2af50;
    *(undefined ***)(lVar3 + 0x38) = &PTR_PTR_100f2af28;
    *(undefined1 *)(lVar3 + 0x40) = 0;
    DAT_100ff66a8 = lVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100a4a5b8);
  (*pcVar1)();
}



/* Address: 0x100a4a5b8 | FUN_100a4a5b8 */

void FUN_100a4a5b8(undefined8 param_1)

{
  if (DAT_100ff66a0 != -1) {
    _swift_once(&DAT_100ff66a0,FUN_100a4a52c);
  }
  FUN_100a4a394(param_1);
  return;
}



/* Address: 0x100a4a610 | FUN_100a4a610 */

void FUN_100a4a610(undefined8 param_1)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  pthread_rwlock_t *ppVar4;
  undefined1 auStack_48 [24];
  
  if (DAT_100ff66a0 != -1) {
    _swift_once(&DAT_100ff66a0,FUN_100a4a52c);
  }
  lVar1 = DAT_100ff66a8;
  ppVar4 = *(pthread_rwlock_t **)(*(long *)(DAT_100ff66a8 + 0x10) + 0x10);
  iVar3 = _pthread_rwlock_rdlock(ppVar4);
  if (iVar3 == 0) {
    _swift_beginAccess(lVar1 + 0x18,auStack_48,0,0);
    FUN_100076688(lVar1 + 0x18,param_1);
    iVar3 = _pthread_rwlock_unlock(ppVar4);
    if (iVar3 == 0) {
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100a4a6b4);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100a4a6b0);
  (*pcVar2)();
}



/* Address: 0x100a4a6b4 | FUN_100a4a6b4 */

/* WARNING: Removing unreachable block (ram,0x000100a4a764) */

void FUN_100a4a6b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  pthread_rwlock_t *ppVar4;
  
  if (DAT_100ff66a0 != -1) {
    _swift_once(&DAT_100ff66a0,FUN_100a4a52c);
  }
  lVar1 = DAT_100ff66a8;
  ppVar4 = *(pthread_rwlock_t **)(*(long *)(DAT_100ff66a8 + 0x10) + 0x10);
  iVar3 = _pthread_rwlock_rdlock(ppVar4);
  if (iVar3 == 0) {
    FUN_100a4a424(param_1,lVar1,param_2,param_3);
    iVar3 = _pthread_rwlock_unlock(ppVar4);
    if (iVar3 != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100a4a764);
      (*pcVar2)();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100a4a760);
  (*pcVar2)();
}



/* Address: 0x100a4a768 | FUN_100a4a768 */

undefined1  [16] FUN_100a4a768(void)

{
  return ZEXT816(0x100f2adf0);
}



/* Address: 0x100a4a778 | FUN_100a4a778 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100a4a778(void)

{
  return ZEXT816(0x100ff66f0);
}



/* Address: 0x100a4a798 | FUN_100a4a798 */

void FUN_100a4a798(undefined8 *param_1,code *param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  long unaff_x21;
  long lVar2;
  undefined1 auStack_90 [40];
  undefined1 auStack_68 [40];
  
  lVar2 = *(long *)(param_4 + 0x10);
  if (lVar2 != 0) {
    param_4 = param_4 + 0x20;
    do {
      FUN_100076688(param_4,auStack_68);
      FUN_100076508(auStack_68,auStack_90);
      uVar1 = 0;
      (*param_2)();
      if (unaff_x21 != 0) {
        FUN_100004594(auStack_90);
        return;
      }
      if ((uVar1 & 1) != 0) {
        FUN_100076508(auStack_90,param_1);
        return;
      }
      FUN_100004594(auStack_90);
      param_4 = param_4 + 0x28;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Address: 0x100a4a854 | FUN_100a4a854 */

long FUN_100a4a854(void)

{
  code *pcVar1;
  int iVar2;
  pthread_rwlock_t *ppVar3;
  long unaff_x20;
  
  _swift_allocObject();
  ppVar3 = (pthread_rwlock_t *)0xc8;
  _swift_slowAlloc(200,0xffffffffffffffff);
  *(pthread_rwlock_t **)(unaff_x20 + 0x10) = ppVar3;
  iVar2 = _pthread_rwlock_init(ppVar3,(pthread_rwlockattr_t *)0x0);
  if (iVar2 == 0) {
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100a4a8a4);
  (*pcVar1)();
}



/* Address: 0x100a4a8a4 | FUN_100a4a8a4 */

void FUN_100a4a8a4(void)

{
  FUN_100a4a8dc();
  return;
}



/* Address: 0x100a4a8c0 | FUN_100a4a8c0 */

void FUN_100a4a8c0(void)

{
  FUN_100a4a8dc();
  return;
}



/* Address: 0x100a4a8dc | FUN_100a4a8dc */

void FUN_100a4a8dc(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  code *pcVar1;
  int iVar2;
  pthread_rwlock_t *ppVar3;
  long unaff_x20;
  long unaff_x21;
  pthread_rwlock_t *ppVar4;
  
  ppVar4 = *(pthread_rwlock_t **)(unaff_x20 + 0x10);
  ppVar3 = ppVar4;
  (*param_5)();
  if ((int)ppVar3 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a4a95c);
    (*pcVar1)();
  }
  (*param_2)(param_1);
  if (unaff_x21 == 0) {
    iVar2 = _pthread_rwlock_unlock(ppVar4);
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a4a960);
      (*pcVar1)();
    }
  }
  else {
    iVar2 = _pthread_rwlock_unlock(ppVar4);
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a4a938);
      (*pcVar1)();
    }
  }
  return;
}



/* Address: 0x100a4a960 | FUN_100a4a960 */

void FUN_100a4a960(void)

{
  code *pcVar1;
  int iVar2;
  pthread_rwlock_t *ppVar3;
  long unaff_x20;
  
  ppVar3 = (pthread_rwlock_t *)0xc8;
  _swift_slowAlloc(200,0xffffffffffffffff);
  *(pthread_rwlock_t **)(unaff_x20 + 0x10) = ppVar3;
  iVar2 = _pthread_rwlock_init(ppVar3,(pthread_rwlockattr_t *)0x0);
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100a4a994);
  (*pcVar1)();
}



/* Address: 0x100a4a994 | FUN_100a4a994 */

void FUN_100a4a994(void)

{
  code *pcVar1;
  int iVar2;
  long unaff_x20;
  
  iVar2 = _pthread_rwlock_destroy(*(pthread_rwlock_t **)(unaff_x20 + 0x10));
  if (iVar2 == 0) {
    _swift_slowDealloc(*(undefined8 *)(unaff_x20 + 0x10),0xffffffffffffffff,0xffffffffffffffff);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100a4a9c8);
  (*pcVar1)();
}



/* Address: 0x100a4a9c8 | FUN_100a4a9c8 */

void FUN_100a4a9c8(void)

{
  code *pcVar1;
  int iVar2;
  long unaff_x20;
  
  iVar2 = _pthread_rwlock_destroy(*(pthread_rwlock_t **)(unaff_x20 + 0x10));
  if (iVar2 == 0) {
    _swift_slowDealloc(*(undefined8 *)(unaff_x20 + 0x10),0xffffffffffffffff,0xffffffffffffffff);
    _swift_deallocClassInstance();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100a4aa04);
  (*pcVar1)();
}



/* Address: 0x100a4aa04 | FUN_100a4aa04 */

void FUN_100a4aa04(void)

{
  FUN_1005c3228(PTR__pthread_rwlock_rdlock_100ea8958);
  return;
}



/* Address: 0x100a4aa10 | FUN_100a4aa10 */

void FUN_100a4aa10(void)

{
  FUN_1005c3228(PTR__pthread_rwlock_wrlock_100ea8968);
  return;
}



/* Address: 0x100a4aa1c | FUN_100a4aa1c */

void FUN_100a4aa1c(void)

{
  FUN_1005c3228(PTR__pthread_rwlock_unlock_100ea8960);
  return;
}



/* Address: 0x100a4aa28 | FUN_100a4aa28 */

void FUN_100a4aa28(undefined8 param_1,undefined8 param_2)

{
  FUN_100a4aa60(param_1,param_2,PTR__pthread_rwlock_rdlock_100ea8958);
  return;
}



/* Address: 0x100a4aa44 | FUN_100a4aa44 */

void FUN_100a4aa44(undefined8 param_1,undefined8 param_2)

{
  FUN_100a4aa60(param_1,param_2,PTR__pthread_rwlock_wrlock_100ea8968);
  return;
}



/* Address: 0x100a4aa60 | FUN_100a4aa60 */

void FUN_100a4aa60(code *param_1,undefined8 param_2,code *param_3)

{
  code *pcVar1;
  int iVar2;
  pthread_rwlock_t *ppVar3;
  long unaff_x20;
  long unaff_x21;
  pthread_rwlock_t *ppVar4;
  
  ppVar4 = *(pthread_rwlock_t **)(unaff_x20 + 0x10);
  ppVar3 = ppVar4;
  (*param_3)();
  if ((int)ppVar3 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a4aad8);
    (*pcVar1)();
  }
  (*param_1)();
  if (unaff_x21 == 0) {
    iVar2 = _pthread_rwlock_unlock(ppVar4);
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a4aadc);
      (*pcVar1)();
    }
  }
  else {
    iVar2 = _pthread_rwlock_unlock(ppVar4);
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a4aab4);
      (*pcVar1)();
    }
  }
  return;
}



/* Address: 0x100a4aadc | FUN_100a4aadc */

undefined8 FUN_100a4aadc(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  FUN_100a4ab18(param_1);
  return unaff_x20;
}



/* Address: 0x100a4ab18 | FUN_100a4ab18 */

void FUN_100a4ab18(long param_1)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  pthread_rwlock_t *ppVar4;
  long *unaff_x20;
  long lVar5;
  
  lVar5 = *unaff_x20;
  lVar3 = param_1;
  FUN_100a4ab9c();
  _swift_allocObject();
  ppVar4 = (pthread_rwlock_t *)0xc8;
  _swift_slowAlloc(200,0xffffffffffffffff);
  *(pthread_rwlock_t **)(lVar3 + 0x10) = ppVar4;
  iVar2 = _pthread_rwlock_init(ppVar4,(pthread_rwlockattr_t *)0x0);
  if (iVar2 == 0) {
    unaff_x20[2] = lVar3;
    (**(code **)(*(long *)(*(long *)(lVar5 + 0x50) + -8) + 0x20))
              ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x60),param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100a4ab9c);
  (*pcVar1)();
}



/* Address: 0x100a4ab9c | FUN_100a4ab9c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100a4ab9c(void)

{
  return ZEXT816(0x100ff67a8);
}



/* Address: 0x100a4abbc | FUN_100a4abbc */

void FUN_100a4abbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_50 [16];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  local_40 = param_3;
  uStack_38 = param_1;
  local_30 = param_2;
  FUN_100a4a8a4(FUN_100a4abfc,auStack_50);
  return;
}



/* Address: 0x100a4abfc | FUN_100a4abfc */

void FUN_100a4abfc(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long *plVar2;
  long lVar3;
  undefined1 auStack_58 [24];
  
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  plVar2 = *(long **)(unaff_x20 + 0x28);
  lVar3 = *(long *)(*plVar2 + 0x60);
  _swift_beginAccess((long)plVar2 + lVar3,auStack_58,0x21,0);
  (*pcVar1)(param_1,(long)plVar2 + lVar3);
  _swift_endAccess(auStack_58);
  return;
}



/* Address: 0x100a4ac7c | FUN_100a4ac7c */

void FUN_100a4ac7c(void)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = *unaff_x20;
  _swift_release(unaff_x20[2]);
  (**(code **)(*(long *)(*(long *)(lVar1 + 0x50) + -8) + 8))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x60));
  return;
}



/* Address: 0x100a4acc0 | FUN_100a4acc0 */

void FUN_100a4acc0(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100a4accc | FUN_100a4accc */

void FUN_100a4accc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_b0 [24];
  undefined8 local_98;
  long lStack_90;
  undefined1 auStack_88 [40];
  
  lVar3 = *(long *)(param_4 + 0x10);
  if (lVar3 != 0) {
    param_4 = param_4 + 0x20;
    do {
      FUN_100076688(param_4,auStack_88);
      FUN_100076508(auStack_88,auStack_b0);
      lVar2 = lStack_90;
      uVar1 = local_98;
      FUN_100004640(auStack_b0,local_98);
      (**(code **)(lVar2 + 0x10))(param_1,param_2,param_3,param_5,param_6,param_7,uVar1,lVar2);
      FUN_100004594(auStack_b0);
      param_4 = param_4 + 0x28;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



/* Address: 0x100a4ad98 | FUN_100a4ad98 */

void FUN_100a4ad98(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_b0 [24];
  undefined8 local_98;
  long lStack_90;
  undefined1 auStack_88 [40];
  
  lVar3 = *(long *)(param_4 + 0x10);
  if (lVar3 != 0) {
    param_4 = param_4 + 0x20;
    do {
      FUN_100076688(param_4,auStack_88);
      FUN_100076508(auStack_88,auStack_b0);
      lVar2 = lStack_90;
      uVar1 = local_98;
      FUN_100004640(auStack_b0,local_98);
      (**(code **)(lVar2 + 8))(param_1,param_2,param_3,param_5,param_6,param_7,uVar1,lVar2);
      FUN_100004594(auStack_b0);
      param_4 = param_4 + 0x28;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



/* Address: 0x100a4ae64 | FUN_100a4ae64 */

void FUN_100a4ae64(void)

{
  FUN_100a4ad98();
  return;
}



/* Address: 0x100a4ae78 | FUN_100a4ae78 */

void FUN_100a4ae78(void)

{
  FUN_100a4accc();
  return;
}



/* Address: 0x100a4ae8c | FUN_100a4ae8c */

undefined1  [16] FUN_100a4ae8c(void)

{
  return ZEXT816(0x100f2af08);
}



/* Address: 0x100a4ae9c | FUN_100a4ae9c */

undefined1  [16] FUN_100a4ae9c(void)

{
  return ZEXT816(0x100f2af50);
}


