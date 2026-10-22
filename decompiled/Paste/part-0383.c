/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1004b5c40 | FUN_1004b5c40 */

void FUN_1004b5c40(long param_1,bool param_2)

{
  String *pSVar1;
  undefined8 *puVar2;
  __int64 capacity;
  char *pcVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined8 uVar6;
  String SVar7;
  bool bVar8;
  code *pcVar9;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var10;
  Hasher into;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long *unaff_x20;
  ulong uVar17;
  __RawDictionaryStorage *p_Var18;
  __RawDictionaryStorage *original;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_DictionaryStorage *)&DAT_100fcb4b8;
  FUN_1000f7830(&DAT_100fcb4b8,&DAT_100c50480);
  p_Var10 = original;
  Swift::_DictionaryStorage::_resize(this,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_1004b5ec0:
    _swift_release(original);
    *unaff_x20 = (long)p_Var10;
    return;
  }
  p_Var18 = original + 0x40;
  uVar15 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar17 = ~(-1L << (uVar15 & 0x3f));
  }
  uVar17 = uVar17 & *(ulong *)p_Var18;
  lVar13 = 0;
  do {
    if (uVar17 == 0) {
      do {
        lVar19 = lVar13 + 1;
        if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1004b5ef0);
          (*pcVar9)();
        }
        if ((long)(uVar15 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1U) != 0) {
            uVar17 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
            if (((byte)original[0x20] & 0x3f) < 6) {
              *(long *)p_Var18 = -1L << (uVar17 & 0x3f);
            }
            else {
              _bzero(p_Var18,uVar17 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(original + 0x10) = 0;
          }
          goto LAB_1004b5ec0;
        }
        uVar17 = *(ulong *)(p_Var18 + lVar19 * 8);
        lVar13 = lVar13 + 1;
      } while (uVar17 == 0);
      uVar12 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
    }
    else {
      uVar12 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
      lVar19 = lVar13;
    }
    lVar13 = (LZCOUNT(uVar12) | lVar19 << 6) * 0x10;
    pSVar1 = (String *)(*(long *)(original + 0x30) + lVar13);
    pcVar3 = pSVar1->str;
    pvVar5 = pSVar1->bridgeObject;
    SVar7 = *pSVar1;
    puVar2 = (undefined8 *)(*(long *)(original + 0x38) + lVar13);
    uVar4 = *puVar2;
    uVar6 = puVar2[1];
    if ((param_2 & 1U) == 0) {
      _swift_bridgeObjectRetain(pvVar5);
      _swift_bridgeObjectRetain(uVar6);
    }
    Swift::Hasher::init(*(__int64 *)(p_Var10 + 0x28));
    into.unknown = auStack_a8;
    Swift::String::hash(into,SVar7);
    uVar11 = Swift::Hasher::_finalize(into);
    uVar16 = -1L << ((ulong)(byte)p_Var10[0x20] & 0x3f);
    uVar11 = uVar11 & (uVar16 ^ 0xffffffffffffffff);
    uVar14 = uVar11 >> 6;
    uVar12 = -1L << (uVar11 & 0x3f) & (*(ulong *)(p_Var10 + uVar14 * 8 + 0x40) ^ 0xffffffffffffffff)
    ;
    if (uVar12 == 0) {
      bVar8 = false;
      uVar12 = 0x3f - uVar16 >> 6;
      do {
        uVar11 = uVar14 + 1;
        if ((uVar11 == uVar12) && (bVar8)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1004b5ef4);
          (*pcVar9)();
        }
        uVar14 = 0;
        if (uVar11 != uVar12) {
          uVar14 = uVar11;
        }
        bVar8 = (bool)(uVar11 == uVar12 | bVar8);
      } while (*(ulong *)(p_Var10 + uVar14 * 8 + 0x40) == 0xffffffffffffffff);
      uVar12 = ~*(ulong *)(p_Var10 + uVar14 * 8 + 0x40);
      uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | uVar14 << 6;
    }
    else {
      uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | uVar11 & 0x7fffffffffffffc0;
    }
    uVar14 = uVar12 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var10 + uVar14 + 0x40) =
         1L << (uVar12 & 0x3f) | *(ulong *)(p_Var10 + uVar14 + 0x40);
    puVar2 = (undefined8 *)(*(long *)(p_Var10 + 0x30) + uVar12 * 0x10);
    *puVar2 = pcVar3;
    puVar2[1] = pvVar5;
    puVar2 = (undefined8 *)(*(long *)(p_Var10 + 0x38) + uVar12 * 0x10);
    *puVar2 = uVar4;
    puVar2[1] = uVar6;
    *(long *)(p_Var10 + 0x10) = *(long *)(p_Var10 + 0x10) + 1;
    lVar13 = lVar19;
  } while( true );
}



/* Address: 0x1004b5ef4 | FUN_1004b5ef4 */

void FUN_1004b5ef4(long param_1,bool param_2)

{
  undefined8 *puVar1;
  String *pSVar2;
  __int64 capacity;
  char *pcVar3;
  void *pvVar4;
  String SVar5;
  bool bVar6;
  code *pcVar7;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var8;
  Hasher into;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  ulong uVar15;
  __RawDictionaryStorage *p_Var16;
  long lVar17;
  undefined1 auStack_c8 [72];
  undefined1 auStack_80 [32];
  
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_DictionaryStorage *)&DAT_100fcb4a8;
  FUN_1000f7830(&DAT_100fcb4a8,&DAT_100c502f8);
  p_Var8 = original;
  Swift::_DictionaryStorage::_resize(this,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_1004b617c:
    _swift_release(original);
LAB_1004b6184:
    *unaff_x20 = (long)p_Var8;
    return;
  }
  p_Var16 = original + 0x40;
  uVar13 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)p_Var16;
  lVar11 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar17 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1004b61ac);
          (*pcVar7)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar17) {
          if ((param_2 & 1U) == 0) {
            _swift_release(original);
            goto LAB_1004b6184;
          }
          uVar15 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          if (((byte)original[0x20] & 0x3f) < 6) {
            *(long *)p_Var16 = -1L << (uVar15 & 0x3f);
          }
          else {
            _bzero(p_Var16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_1004b617c;
        }
        uVar15 = *(ulong *)(p_Var16 + lVar17 * 8);
        lVar11 = lVar11 + 1;
      } while (uVar15 == 0);
      uVar10 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar10 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar17 = lVar11;
    }
    uVar10 = LZCOUNT(uVar10) | lVar17 << 6;
    pSVar2 = (String *)(*(long *)(original + 0x30) + uVar10 * 0x10);
    pcVar3 = pSVar2->str;
    pvVar4 = pSVar2->bridgeObject;
    SVar5 = *pSVar2;
    lVar11 = *(long *)(original + 0x38) + uVar10 * 0x20;
    if ((param_2 & 1U) == 0) {
      FUN_10000cbfc(lVar11,auStack_80);
      _swift_bridgeObjectRetain(pvVar4);
    }
    else {
      FUN_100011080(lVar11,auStack_80);
    }
    Swift::Hasher::init(*(__int64 *)(p_Var8 + 0x28));
    into.unknown = auStack_c8;
    Swift::String::hash(into,SVar5);
    uVar9 = Swift::Hasher::_finalize(into);
    uVar14 = -1L << ((ulong)(byte)p_Var8[0x20] & 0x3f);
    uVar9 = uVar9 & (uVar14 ^ 0xffffffffffffffff);
    uVar12 = uVar9 >> 6;
    uVar10 = -1L << (uVar9 & 0x3f) & (*(ulong *)(p_Var8 + uVar12 * 8 + 0x40) ^ 0xffffffffffffffff);
    if (uVar10 == 0) {
      bVar6 = false;
      uVar10 = 0x3f - uVar14 >> 6;
      do {
        uVar9 = uVar12 + 1;
        if ((uVar9 == uVar10) && (bVar6)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1004b61b0);
          (*pcVar7)();
        }
        uVar12 = 0;
        if (uVar9 != uVar10) {
          uVar12 = uVar9;
        }
        bVar6 = (bool)(uVar9 == uVar10 | bVar6);
      } while (*(ulong *)(p_Var8 + uVar12 * 8 + 0x40) == 0xffffffffffffffff);
      uVar10 = ~*(ulong *)(p_Var8 + uVar12 * 8 + 0x40);
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
    *(ulong *)(p_Var8 + uVar12 + 0x40) = 1L << (uVar10 & 0x3f) | *(ulong *)(p_Var8 + uVar12 + 0x40);
    puVar1 = (undefined8 *)(*(long *)(p_Var8 + 0x30) + uVar10 * 0x10);
    *puVar1 = pcVar3;
    puVar1[1] = pvVar4;
    FUN_100011080(auStack_80,*(long *)(p_Var8 + 0x38) + uVar10 * 0x20);
    *(long *)(p_Var8 + 0x10) = *(long *)(p_Var8 + 0x10) + 1;
    lVar11 = lVar17;
  } while( true );
}



/* Address: 0x1004b61b0 | FUN_1004b61b0 */

void FUN_1004b61b0(long param_1,bool param_2)

{
  undefined8 *puVar1;
  String *pSVar2;
  __int64 capacity;
  char *pcVar3;
  void *pvVar4;
  String SVar5;
  bool bVar6;
  code *pcVar7;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var8;
  Hasher into;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  undefined8 uVar15;
  ulong uVar16;
  __RawDictionaryStorage *p_Var17;
  long lVar18;
  undefined1 auStack_a8 [72];
  
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_DictionaryStorage *)&DAT_100fcb4c0;
  FUN_1000f7830(&DAT_100fcb4c0,&DAT_100c50310);
  p_Var8 = original;
  Swift::_DictionaryStorage::_resize(this,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_1004b6410:
    _swift_release(original);
    *unaff_x20 = (long)p_Var8;
    return;
  }
  p_Var17 = original + 0x40;
  uVar13 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar16 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar16 = uVar16 & *(ulong *)p_Var17;
  lVar11 = 0;
  do {
    if (uVar16 == 0) {
      do {
        lVar18 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1004b6440);
          (*pcVar7)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar18) {
          if ((param_2 & 1U) != 0) {
            uVar16 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
            if (((byte)original[0x20] & 0x3f) < 6) {
              *(long *)p_Var17 = -1L << (uVar16 & 0x3f);
            }
            else {
              _bzero(p_Var17,uVar16 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(original + 0x10) = 0;
          }
          goto LAB_1004b6410;
        }
        uVar16 = *(ulong *)(p_Var17 + lVar18 * 8);
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
      lVar18 = lVar11;
    }
    uVar10 = LZCOUNT(uVar10) | lVar18 << 6;
    pSVar2 = (String *)(*(long *)(original + 0x30) + uVar10 * 0x10);
    pcVar3 = pSVar2->str;
    pvVar4 = pSVar2->bridgeObject;
    SVar5 = *pSVar2;
    uVar15 = *(undefined8 *)(*(long *)(original + 0x38) + uVar10 * 8);
    if ((param_2 & 1U) == 0) {
      _swift_bridgeObjectRetain(pvVar4);
    }
    Swift::Hasher::init(*(__int64 *)(p_Var8 + 0x28));
    into.unknown = auStack_a8;
    Swift::String::hash(into,SVar5);
    uVar9 = Swift::Hasher::_finalize(into);
    uVar14 = -1L << ((ulong)(byte)p_Var8[0x20] & 0x3f);
    uVar9 = uVar9 & (uVar14 ^ 0xffffffffffffffff);
    uVar12 = uVar9 >> 6;
    uVar10 = -1L << (uVar9 & 0x3f) & (*(ulong *)(p_Var8 + uVar12 * 8 + 0x40) ^ 0xffffffffffffffff);
    if (uVar10 == 0) {
      bVar6 = false;
      uVar10 = 0x3f - uVar14 >> 6;
      do {
        uVar9 = uVar12 + 1;
        if ((uVar9 == uVar10) && (bVar6)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1004b6444);
          (*pcVar7)();
        }
        uVar12 = 0;
        if (uVar9 != uVar10) {
          uVar12 = uVar9;
        }
        bVar6 = (bool)(uVar9 == uVar10 | bVar6);
      } while (*(ulong *)(p_Var8 + uVar12 * 8 + 0x40) == 0xffffffffffffffff);
      uVar10 = ~*(ulong *)(p_Var8 + uVar12 * 8 + 0x40);
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
    *(ulong *)(p_Var8 + uVar12 + 0x40) = 1L << (uVar10 & 0x3f) | *(ulong *)(p_Var8 + uVar12 + 0x40);
    puVar1 = (undefined8 *)(*(long *)(p_Var8 + 0x30) + uVar10 * 0x10);
    *puVar1 = pcVar3;
    puVar1[1] = pvVar4;
    *(undefined8 *)(*(long *)(p_Var8 + 0x38) + uVar10 * 8) = uVar15;
    *(long *)(p_Var8 + 0x10) = *(long *)(p_Var8 + 0x10) + 1;
    lVar11 = lVar18;
  } while( true );
}



/* Address: 0x1004b6444 | FUN_1004b6444 */

void FUN_1004b6444(long param_1,bool param_2)

{
  String *pSVar1;
  __int64 capacity;
  char *pcVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 uVar5;
  String SVar6;
  bool bVar7;
  code *pcVar8;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var9;
  Hasher into;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong uVar19;
  long *unaff_x20;
  long lVar20;
  __RawDictionaryStorage *p_Var21;
  __RawDictionaryStorage *original;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  ulong local_d8;
  undefined1 auStack_b0 [80];
  
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_DictionaryStorage *)&DAT_100fcb468;
  FUN_1000f7830(&DAT_100fcb468,&DAT_100c502b8);
  p_Var9 = original;
  Swift::_DictionaryStorage::_resize(this,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_1004b6730:
    _swift_release(original);
    *unaff_x20 = (long)p_Var9;
    return;
  }
  p_Var21 = original + 0x40;
  uVar15 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  local_d8 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    local_d8 = ~(-1L << (uVar15 & 0x3f));
  }
  local_d8 = local_d8 & *(ulong *)p_Var21;
  lVar12 = 0;
  do {
    if (local_d8 == 0) {
      do {
        lVar20 = lVar12 + 1;
        if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x1004b6760);
          (*pcVar8)();
        }
        if ((long)(uVar15 + 0x3f >> 6) <= lVar20) {
          if ((param_2 & 1U) != 0) {
            uVar15 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
            if (((byte)original[0x20] & 0x3f) < 6) {
              *(long *)p_Var21 = -1L << (uVar15 & 0x3f);
            }
            else {
              _bzero(p_Var21,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(original + 0x10) = 0;
          }
          goto LAB_1004b6730;
        }
        local_d8 = *(ulong *)(p_Var21 + lVar20 * 8);
        lVar12 = lVar12 + 1;
      } while (local_d8 == 0);
      uVar11 = (local_d8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_d8 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
      local_d8 = local_d8 - 1 & local_d8;
    }
    else {
      uVar11 = (local_d8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_d8 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
      local_d8 = local_d8 - 1 & local_d8;
      lVar20 = lVar12;
    }
    uVar11 = LZCOUNT(uVar11) | lVar20 << 6;
    pSVar1 = (String *)(*(long *)(original + 0x30) + uVar11 * 0x10);
    pcVar2 = pSVar1->str;
    pvVar4 = pSVar1->bridgeObject;
    SVar6 = *pSVar1;
    puVar13 = (undefined8 *)(*(long *)(original + 0x38) + uVar11 * 0x38);
    uVar16 = *puVar13;
    uVar24 = puVar13[2];
    uVar22 = puVar13[1];
    uVar27 = puVar13[6];
    uVar26 = puVar13[5];
    uVar25 = puVar13[4];
    uVar23 = puVar13[3];
    if ((param_2 & 1U) == 0) {
      uVar18 = puVar13[4];
      uVar17 = puVar13[6];
      uVar3 = puVar13[2];
      uVar5 = puVar13[3];
      _swift_bridgeObjectRetain(pvVar4);
      _swift_bridgeObjectRetain(uVar22);
      _swift_bridgeObjectRetain(uVar3);
      FUN_10011da54(uVar5,uVar18);
      _swift_bridgeObjectRetain(uVar17);
    }
    Swift::Hasher::init(*(__int64 *)(p_Var9 + 0x28));
    into.unknown = auStack_b0;
    Swift::String::hash(into,SVar6);
    uVar10 = Swift::Hasher::_finalize(into);
    uVar19 = -1L << ((ulong)(byte)p_Var9[0x20] & 0x3f);
    uVar10 = uVar10 & (uVar19 ^ 0xffffffffffffffff);
    uVar14 = uVar10 >> 6;
    uVar11 = -1L << (uVar10 & 0x3f) & (*(ulong *)(p_Var9 + uVar14 * 8 + 0x40) ^ 0xffffffffffffffff);
    if (uVar11 == 0) {
      bVar7 = false;
      uVar11 = 0x3f - uVar19 >> 6;
      do {
        uVar10 = uVar14 + 1;
        if ((uVar10 == uVar11) && (bVar7)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x1004b6764);
          (*pcVar8)();
        }
        uVar14 = 0;
        if (uVar10 != uVar11) {
          uVar14 = uVar10;
        }
        bVar7 = (bool)(uVar10 == uVar11 | bVar7);
      } while (*(ulong *)(p_Var9 + uVar14 * 8 + 0x40) == 0xffffffffffffffff);
      uVar11 = ~*(ulong *)(p_Var9 + uVar14 * 8 + 0x40);
      uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | uVar14 << 6;
    }
    else {
      uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | uVar10 & 0x7fffffffffffffc0;
    }
    uVar14 = uVar11 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var9 + uVar14 + 0x40) = 1L << (uVar11 & 0x3f) | *(ulong *)(p_Var9 + uVar14 + 0x40);
    puVar13 = (undefined8 *)(*(long *)(p_Var9 + 0x30) + uVar11 * 0x10);
    *puVar13 = pcVar2;
    puVar13[1] = pvVar4;
    puVar13 = (undefined8 *)(*(long *)(p_Var9 + 0x38) + uVar11 * 0x38);
    *puVar13 = uVar16;
    puVar13[2] = uVar24;
    puVar13[1] = uVar22;
    puVar13[6] = uVar27;
    puVar13[5] = uVar26;
    puVar13[4] = uVar25;
    puVar13[3] = uVar23;
    *(long *)(p_Var9 + 0x10) = *(long *)(p_Var9 + 0x10) + 1;
    lVar12 = lVar20;
  } while( true );
}



/* Address: 0x1004b6764 | FUN_1004b6764 */

void FUN_1004b6764(long param_1,bool param_2,long param_3,undefined8 param_4,
                  _DictionaryStorage *param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  String *pSVar2;
  __int64 capacity;
  char *pcVar3;
  void *pvVar4;
  String SVar5;
  bool bVar6;
  code *pcVar7;
  __RawDictionaryStorage *p_Var8;
  Hasher into;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long extraout_x8;
  undefined1 *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  long lVar18;
  long lVar19;
  __RawDictionaryStorage *p_Var20;
  undefined1 auStack_e0 [8];
  undefined1 auStack_a8 [72];
  
  FUN_1000f7830(param_3,param_4);
  lVar11 = *(long *)(param_3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar12 = auStack_e0 + -extraout_x8;
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  FUN_1000f7830(param_5,param_6);
  p_Var8 = original;
  Swift::_DictionaryStorage::_resize(param_5,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_1004b6a50:
    _swift_release(original);
LAB_1004b6a58:
    *unaff_x20 = (long)p_Var8;
    return;
  }
  p_Var20 = original + 0x40;
  uVar15 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar17 = ~(-1L << (uVar15 & 0x3f));
  }
  uVar17 = uVar17 & *(ulong *)p_Var20;
  lVar10 = 0;
  do {
    if (uVar17 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1004b6a80);
          (*pcVar7)();
        }
        if ((long)(uVar15 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1U) == 0) {
            _swift_release(original);
            goto LAB_1004b6a58;
          }
          uVar17 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          if (((byte)original[0x20] & 0x3f) < 6) {
            *(long *)p_Var20 = -1L << (uVar17 & 0x3f);
          }
          else {
            _bzero(p_Var20,uVar17 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_1004b6a50;
        }
        uVar17 = *(ulong *)(p_Var20 + lVar19 * 8);
        lVar10 = lVar10 + 1;
      } while (uVar17 == 0);
      uVar13 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
    }
    else {
      uVar13 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
      lVar19 = lVar10;
    }
    uVar13 = LZCOUNT(uVar13) | lVar19 << 6;
    pSVar2 = (String *)(*(long *)(original + 0x30) + uVar13 * 0x10);
    pcVar3 = pSVar2->str;
    pvVar4 = pSVar2->bridgeObject;
    SVar5 = *pSVar2;
    lVar18 = *(long *)(lVar11 + 0x48);
    lVar10 = *(long *)(original + 0x38) + lVar18 * uVar13;
    if ((param_2 & 1U) == 0) {
      (**(code **)(lVar11 + 0x10))(puVar12,lVar10,param_3);
      _swift_bridgeObjectRetain(pvVar4);
    }
    else {
      (**(code **)(lVar11 + 0x20))(puVar12,lVar10,param_3);
    }
    Swift::Hasher::init(*(__int64 *)(p_Var8 + 0x28));
    into.unknown = auStack_a8;
    Swift::String::hash(into,SVar5);
    uVar9 = Swift::Hasher::_finalize(into);
    uVar16 = -1L << ((ulong)(byte)p_Var8[0x20] & 0x3f);
    uVar9 = uVar9 & (uVar16 ^ 0xffffffffffffffff);
    uVar14 = uVar9 >> 6;
    uVar13 = -1L << (uVar9 & 0x3f) & (*(ulong *)(p_Var8 + uVar14 * 8 + 0x40) ^ 0xffffffffffffffff);
    if (uVar13 == 0) {
      bVar6 = false;
      uVar13 = 0x3f - uVar16 >> 6;
      do {
        uVar9 = uVar14 + 1;
        if ((uVar9 == uVar13) && (bVar6)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1004b6a84);
          (*pcVar7)();
        }
        uVar14 = 0;
        if (uVar9 != uVar13) {
          uVar14 = uVar9;
        }
        bVar6 = (bool)(uVar9 == uVar13 | bVar6);
      } while (*(ulong *)(p_Var8 + uVar14 * 8 + 0x40) == 0xffffffffffffffff);
      uVar13 = ~*(ulong *)(p_Var8 + uVar14 * 8 + 0x40);
      uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | uVar14 << 6;
    }
    else {
      uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | uVar9 & 0x7fffffffffffffc0;
    }
    uVar14 = uVar13 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var8 + uVar14 + 0x40) = 1L << (uVar13 & 0x3f) | *(ulong *)(p_Var8 + uVar14 + 0x40);
    puVar1 = (undefined8 *)(*(long *)(p_Var8 + 0x30) + uVar13 * 0x10);
    *puVar1 = pcVar3;
    puVar1[1] = pvVar4;
    (**(code **)(lVar11 + 0x20))(*(long *)(p_Var8 + 0x38) + lVar18 * uVar13,puVar12,param_3);
    *(long *)(p_Var8 + 0x10) = *(long *)(p_Var8 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Address: 0x1004b6a84 | FUN_1004b6a84 */

void FUN_1004b6a84(long param_1,bool param_2)

{
  String *pSVar1;
  __int64 capacity;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  String SVar9;
  bool bVar10;
  code *pcVar11;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var12;
  Hasher into;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  __RawDictionaryStorage *p_Var21;
  ulong local_d0;
  undefined1 auStack_a8 [72];
  
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_DictionaryStorage *)&DAT_100fcb498;
  FUN_1000f7830(&DAT_100fcb498,&DAT_100c519f0);
  p_Var12 = original;
  Swift::_DictionaryStorage::_resize(this,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_1004b6d68:
    _swift_release(original);
    *unaff_x20 = (long)p_Var12;
    return;
  }
  p_Var21 = original + 0x40;
  uVar18 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  local_d0 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    local_d0 = ~(-1L << (uVar18 & 0x3f));
  }
  local_d0 = local_d0 & *(ulong *)p_Var21;
  lVar15 = 0;
  do {
    if (local_d0 == 0) {
      do {
        lVar20 = lVar15 + 1;
        if (SCARRY8(lVar15,1)) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x1004b6d98);
          (*pcVar11)();
        }
        if ((long)(uVar18 + 0x3f >> 6) <= lVar20) {
          if ((param_2 & 1U) != 0) {
            uVar18 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
            if (((byte)original[0x20] & 0x3f) < 6) {
              *(long *)p_Var21 = -1L << (uVar18 & 0x3f);
            }
            else {
              _bzero(p_Var21,uVar18 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(original + 0x10) = 0;
          }
          goto LAB_1004b6d68;
        }
        local_d0 = *(ulong *)(p_Var21 + lVar20 * 8);
        lVar15 = lVar15 + 1;
      } while (local_d0 == 0);
      uVar14 = (local_d0 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_d0 & 0x5555555555555555) << 1;
      uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
      local_d0 = local_d0 - 1 & local_d0;
    }
    else {
      uVar14 = (local_d0 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_d0 & 0x5555555555555555) << 1;
      uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
      local_d0 = local_d0 - 1 & local_d0;
      lVar20 = lVar15;
    }
    uVar14 = LZCOUNT(uVar14) | lVar20 << 6;
    pSVar1 = (String *)(*(long *)(original + 0x30) + uVar14 * 0x10);
    pcVar2 = pSVar1->str;
    pvVar5 = pSVar1->bridgeObject;
    SVar9 = *pSVar1;
    puVar16 = (undefined8 *)(*(long *)(original + 0x38) + uVar14 * 0x28);
    uVar3 = *puVar16;
    uVar6 = puVar16[1];
    uVar4 = puVar16[2];
    uVar7 = puVar16[3];
    uVar8 = *(undefined1 *)(puVar16 + 4);
    if ((param_2 & 1U) == 0) {
      _swift_bridgeObjectRetain(pvVar5);
      FUN_10045b2bc(uVar3,uVar6,uVar4,uVar7,uVar8);
    }
    Swift::Hasher::init(*(__int64 *)(p_Var12 + 0x28));
    into.unknown = auStack_a8;
    Swift::String::hash(into,SVar9);
    uVar13 = Swift::Hasher::_finalize(into);
    uVar19 = -1L << ((ulong)(byte)p_Var12[0x20] & 0x3f);
    uVar13 = uVar13 & (uVar19 ^ 0xffffffffffffffff);
    uVar17 = uVar13 >> 6;
    uVar14 = -1L << (uVar13 & 0x3f) & (*(ulong *)(p_Var12 + uVar17 * 8 + 0x40) ^ 0xffffffffffffffff)
    ;
    if (uVar14 == 0) {
      bVar10 = false;
      uVar14 = 0x3f - uVar19 >> 6;
      do {
        uVar13 = uVar17 + 1;
        if ((uVar13 == uVar14) && (bVar10)) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x1004b6d9c);
          (*pcVar11)();
        }
        uVar17 = 0;
        if (uVar13 != uVar14) {
          uVar17 = uVar13;
        }
        bVar10 = (bool)(uVar13 == uVar14 | bVar10);
      } while (*(ulong *)(p_Var12 + uVar17 * 8 + 0x40) == 0xffffffffffffffff);
      uVar14 = ~*(ulong *)(p_Var12 + uVar17 * 8 + 0x40);
      uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar14 = LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) | uVar17 << 6;
    }
    else {
      uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar14 = LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar17 = uVar14 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var12 + uVar17 + 0x40) =
         1L << (uVar14 & 0x3f) | *(ulong *)(p_Var12 + uVar17 + 0x40);
    puVar16 = (undefined8 *)(*(long *)(p_Var12 + 0x30) + uVar14 * 0x10);
    *puVar16 = pcVar2;
    puVar16[1] = pvVar5;
    puVar16 = (undefined8 *)(*(long *)(p_Var12 + 0x38) + uVar14 * 0x28);
    *puVar16 = uVar3;
    puVar16[1] = uVar6;
    puVar16[2] = uVar4;
    puVar16[3] = uVar7;
    *(undefined1 *)(puVar16 + 4) = uVar8;
    *(long *)(p_Var12 + 0x10) = *(long *)(p_Var12 + 0x10) + 1;
    lVar15 = lVar20;
  } while( true );
}



/* Address: 0x1004b6d9c | FUN_1004b6d9c */

void FUN_1004b6d9c(long param_1,bool param_2)

{
  undefined8 *puVar1;
  String *pSVar2;
  __int64 capacity;
  char *pcVar3;
  void *pvVar4;
  String SVar5;
  bool bVar6;
  code *pcVar7;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var8;
  Hasher into;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  __RawDictionaryStorage *p_Var16;
  __RawDictionaryStorage *original;
  undefined8 uVar17;
  long lVar18;
  undefined1 auStack_a8 [72];
  
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_DictionaryStorage *)&DAT_100fcb430;
  FUN_1000f7830(&DAT_100fcb430,&DAT_100c50280);
  p_Var8 = original;
  Swift::_DictionaryStorage::_resize(this,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_1004b7004:
    _swift_release(original);
    *unaff_x20 = (long)p_Var8;
    return;
  }
  p_Var16 = original + 0x40;
  uVar13 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)p_Var16;
  lVar11 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar18 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1004b7034);
          (*pcVar7)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar18) {
          if ((param_2 & 1U) != 0) {
            uVar15 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
            if (((byte)original[0x20] & 0x3f) < 6) {
              *(long *)p_Var16 = -1L << (uVar15 & 0x3f);
            }
            else {
              _bzero(p_Var16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(original + 0x10) = 0;
          }
          goto LAB_1004b7004;
        }
        uVar15 = *(ulong *)(p_Var16 + lVar18 * 8);
        lVar11 = lVar11 + 1;
      } while (uVar15 == 0);
      uVar10 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar10 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar18 = lVar11;
    }
    uVar10 = LZCOUNT(uVar10) | lVar18 << 6;
    pSVar2 = (String *)(*(long *)(original + 0x30) + uVar10 * 0x10);
    pcVar3 = pSVar2->str;
    pvVar4 = pSVar2->bridgeObject;
    SVar5 = *pSVar2;
    uVar17 = *(undefined8 *)(*(long *)(original + 0x38) + uVar10 * 8);
    if ((param_2 & 1U) == 0) {
      _swift_bridgeObjectRetain(pvVar4);
      _swift_bridgeObjectRetain(uVar17);
    }
    Swift::Hasher::init(*(__int64 *)(p_Var8 + 0x28));
    into.unknown = auStack_a8;
    Swift::String::hash(into,SVar5);
    uVar9 = Swift::Hasher::_finalize(into);
    uVar14 = -1L << ((ulong)(byte)p_Var8[0x20] & 0x3f);
    uVar9 = uVar9 & (uVar14 ^ 0xffffffffffffffff);
    uVar12 = uVar9 >> 6;
    uVar10 = -1L << (uVar9 & 0x3f) & (*(ulong *)(p_Var8 + uVar12 * 8 + 0x40) ^ 0xffffffffffffffff);
    if (uVar10 == 0) {
      bVar6 = false;
      uVar10 = 0x3f - uVar14 >> 6;
      do {
        uVar9 = uVar12 + 1;
        if ((uVar9 == uVar10) && (bVar6)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1004b7038);
          (*pcVar7)();
        }
        uVar12 = 0;
        if (uVar9 != uVar10) {
          uVar12 = uVar9;
        }
        bVar6 = (bool)(uVar9 == uVar10 | bVar6);
      } while (*(ulong *)(p_Var8 + uVar12 * 8 + 0x40) == 0xffffffffffffffff);
      uVar10 = ~*(ulong *)(p_Var8 + uVar12 * 8 + 0x40);
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
    *(ulong *)(p_Var8 + uVar12 + 0x40) = 1L << (uVar10 & 0x3f) | *(ulong *)(p_Var8 + uVar12 + 0x40);
    puVar1 = (undefined8 *)(*(long *)(p_Var8 + 0x30) + uVar10 * 0x10);
    *puVar1 = pcVar3;
    puVar1[1] = pvVar4;
    *(undefined8 *)(*(long *)(p_Var8 + 0x38) + uVar10 * 8) = uVar17;
    *(long *)(p_Var8 + 0x10) = *(long *)(p_Var8 + 0x10) + 1;
    lVar11 = lVar18;
  } while( true );
}



/* Address: 0x1004b7038 | FUN_1004b7038 */

void FUN_1004b7038(char *param_1,bool param_2)

{
  undefined8 *puVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  String SVar5;
  bool bVar6;
  code *pcVar7;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var8;
  Hasher into;
  ulong uVar9;
  Hasher capacity;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  __uint64 *p_Var14;
  String *pSVar15;
  ulong uVar16;
  long *unaff_x20;
  undefined8 uVar17;
  ulong uVar18;
  __RawDictionaryStorage *p_Var19;
  __RawDictionaryStorage *original;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 auStack_a8 [72];
  
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity.unknown = *(char **)(original + 0x18);
  if ((long)*(char **)(original + 0x18) <= (long)param_1) {
    capacity.unknown = param_1;
  }
  this = (_DictionaryStorage *)&DAT_100fcb420;
  FUN_1000f7830(&DAT_100fcb420,&DAT_100c50270);
  p_Var8 = original;
  Swift::_DictionaryStorage::_resize(this,original,(__int64)capacity.unknown,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_1004b72f4:
    _swift_release(original);
    *unaff_x20 = (long)p_Var8;
    return;
  }
  p_Var19 = original + 0x40;
  uVar13 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar18 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar18 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar18 = uVar18 & *(ulong *)p_Var19;
  lVar11 = 0;
  do {
    if (uVar18 == 0) {
      do {
        lVar20 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1004b7324);
          (*pcVar7)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar20) {
          if ((param_2 & 1U) != 0) {
            uVar18 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
            if (((byte)original[0x20] & 0x3f) < 6) {
              *(long *)p_Var19 = -1L << (uVar18 & 0x3f);
            }
            else {
              _bzero(p_Var19,uVar18 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(original + 0x10) = 0;
          }
          goto LAB_1004b72f4;
        }
        uVar18 = *(ulong *)(p_Var19 + lVar20 * 8);
        lVar11 = lVar11 + 1;
      } while (uVar18 == 0);
      uVar10 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar18 = uVar18 - 1 & uVar18;
    }
    else {
      uVar10 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar18 = uVar18 - 1 & uVar18;
      lVar20 = lVar11;
    }
    uVar10 = LZCOUNT(uVar10) | lVar20 << 6;
    pSVar15 = (String *)(*(long *)(original + 0x30) + uVar10 * 0x18);
    pcVar2 = pSVar15->str;
    pcVar3 = pSVar15->bridgeObject;
    SVar5 = *pSVar15;
    cVar4 = *(char *)&pSVar15[1].str;
    puVar1 = (undefined8 *)(*(long *)(original + 0x38) + uVar10 * 0x10);
    uVar22 = puVar1[1];
    uVar21 = *puVar1;
    if ((param_2 & 1U) == 0) {
      uVar17 = puVar1[1];
      capacity.unknown = pcVar3;
      FUN_1004a7398(pcVar2,pcVar3,cVar4);
      _swift_retain(uVar17);
    }
    Swift::Hasher::init(*(__int64 *)(p_Var8 + 0x28));
    if (cVar4 == '\x01') {
      Swift::Hasher::_combine(1,capacity);
      into.unknown = pcVar2;
      Swift::Hasher::_combine((__uint64)pcVar2,capacity);
    }
    else {
      Swift::Hasher::_combine(0,capacity);
      into.unknown = auStack_a8;
      capacity.unknown = pcVar2;
      Swift::String::hash(into,SVar5);
    }
    uVar9 = Swift::Hasher::_finalize(into);
    uVar16 = -1L << ((ulong)(byte)p_Var8[0x20] & 0x3f);
    uVar9 = uVar9 & (uVar16 ^ 0xffffffffffffffff);
    uVar12 = uVar9 >> 6;
    uVar10 = -1L << (uVar9 & 0x3f) & (*(ulong *)(p_Var8 + uVar12 * 8 + 0x40) ^ 0xffffffffffffffff);
    if (uVar10 == 0) {
      bVar6 = false;
      uVar10 = 0x3f - uVar16 >> 6;
      do {
        uVar9 = uVar12 + 1;
        if ((uVar9 == uVar10) && (bVar6)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1004b7328);
          (*pcVar7)();
        }
        uVar12 = 0;
        if (uVar9 != uVar10) {
          uVar12 = uVar9;
        }
        bVar6 = (bool)(uVar9 == uVar10 | bVar6);
      } while (*(ulong *)(p_Var8 + uVar12 * 8 + 0x40) == 0xffffffffffffffff);
      uVar10 = ~*(ulong *)(p_Var8 + uVar12 * 8 + 0x40);
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
    *(ulong *)(p_Var8 + uVar12 + 0x40) = 1L << (uVar10 & 0x3f) | *(ulong *)(p_Var8 + uVar12 + 0x40);
    p_Var14 = (__uint64 *)(*(long *)(p_Var8 + 0x30) + uVar10 * 0x18);
    *p_Var14 = (__uint64)pcVar2;
    p_Var14[1] = (__uint64)pcVar3;
    *(char *)(p_Var14 + 2) = cVar4;
    puVar1 = (undefined8 *)(*(long *)(p_Var8 + 0x38) + uVar10 * 0x10);
    puVar1[1] = uVar22;
    *puVar1 = uVar21;
    *(long *)(p_Var8 + 0x10) = *(long *)(p_Var8 + 0x10) + 1;
    lVar11 = lVar20;
  } while( true );
}



/* Address: 0x1004b7328 | FUN_1004b7328 */

void FUN_1004b7328(long param_1,bool param_2)

{
  String *pSVar1;
  __int64 capacity;
  char *pcVar2;
  void *pvVar3;
  String SVar4;
  bool bVar5;
  code *pcVar6;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var7;
  undefined8 *puVar8;
  Hasher into;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  ulong uVar15;
  __RawDictionaryStorage *p_Var16;
  long lVar17;
  undefined1 auStack_d8 [72];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined7 local_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_DictionaryStorage *)&DAT_100fcb440;
  FUN_1000f7830(&DAT_100fcb440,&DAT_100c50290);
  p_Var7 = original;
  Swift::_DictionaryStorage::_resize(this,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_1004b75c8:
    _swift_release(original);
LAB_1004b75d0:
    *unaff_x20 = (long)p_Var7;
    return;
  }
  p_Var16 = original + 0x40;
  uVar13 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)p_Var16;
  lVar11 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar17 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1004b75f8);
          (*pcVar6)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar17) {
          if ((param_2 & 1U) == 0) {
            _swift_release(original);
            goto LAB_1004b75d0;
          }
          uVar15 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          if (((byte)original[0x20] & 0x3f) < 6) {
            *(long *)p_Var16 = -1L << (uVar15 & 0x3f);
          }
          else {
            _bzero(p_Var16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_1004b75c8;
        }
        uVar15 = *(ulong *)(p_Var16 + lVar17 * 8);
        lVar11 = lVar11 + 1;
      } while (uVar15 == 0);
      uVar10 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar10 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar17 = lVar11;
    }
    uVar10 = LZCOUNT(uVar10) | lVar17 << 6;
    pSVar1 = (String *)(*(long *)(original + 0x30) + uVar10 * 0x10);
    pcVar2 = pSVar1->str;
    pvVar3 = pSVar1->bridgeObject;
    SVar4 = *pSVar1;
    puVar8 = (undefined8 *)(*(long *)(original + 0x38) + uVar10 * 0x30);
    if ((param_2 & 1U) == 0) {
      FUN_1004b8da8(puVar8,&local_90);
      _swift_bridgeObjectRetain(pvVar3);
    }
    else {
      uStack_88 = puVar8[1];
      local_90 = *puVar8;
      uStack_80 = puVar8[2];
      uStack_6f = *(undefined8 *)((long)puVar8 + 0x21);
      uStack_70 = (undefined1)((ulong)*(undefined8 *)((long)puVar8 + 0x19) >> 0x38);
      uStack_78 = (undefined1)puVar8[3];
      local_77 = (undefined7)((ulong)puVar8[3] >> 8);
    }
    Swift::Hasher::init(*(__int64 *)(p_Var7 + 0x28));
    into.unknown = auStack_d8;
    Swift::String::hash(into,SVar4);
    uVar9 = Swift::Hasher::_finalize(into);
    uVar14 = -1L << ((ulong)(byte)p_Var7[0x20] & 0x3f);
    uVar9 = uVar9 & (uVar14 ^ 0xffffffffffffffff);
    uVar12 = uVar9 >> 6;
    uVar10 = -1L << (uVar9 & 0x3f) & (*(ulong *)(p_Var7 + uVar12 * 8 + 0x40) ^ 0xffffffffffffffff);
    if (uVar10 == 0) {
      bVar5 = false;
      uVar10 = 0x3f - uVar14 >> 6;
      do {
        uVar9 = uVar12 + 1;
        if ((uVar9 == uVar10) && (bVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1004b75fc);
          (*pcVar6)();
        }
        uVar12 = 0;
        if (uVar9 != uVar10) {
          uVar12 = uVar9;
        }
        bVar5 = (bool)(uVar9 == uVar10 | bVar5);
      } while (*(ulong *)(p_Var7 + uVar12 * 8 + 0x40) == 0xffffffffffffffff);
      uVar10 = ~*(ulong *)(p_Var7 + uVar12 * 8 + 0x40);
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
    *(ulong *)(p_Var7 + uVar12 + 0x40) = 1L << (uVar10 & 0x3f) | *(ulong *)(p_Var7 + uVar12 + 0x40);
    puVar8 = (undefined8 *)(*(long *)(p_Var7 + 0x30) + uVar10 * 0x10);
    *puVar8 = pcVar2;
    puVar8[1] = pvVar3;
    puVar8 = (undefined8 *)(*(long *)(p_Var7 + 0x38) + uVar10 * 0x30);
    *(undefined8 *)((long)puVar8 + 0x21) = uStack_6f;
    *(ulong *)((long)puVar8 + 0x19) = CONCAT17(uStack_70,local_77);
    puVar8[1] = uStack_88;
    *puVar8 = local_90;
    puVar8[3] = CONCAT71(local_77,uStack_78);
    puVar8[2] = uStack_80;
    *(long *)(p_Var7 + 0x10) = *(long *)(p_Var7 + 0x10) + 1;
    lVar11 = lVar17;
  } while( true );
}



/* Address: 0x1004b75fc | FUN_1004b75fc */

void FUN_1004b75fc(long param_1,bool param_2)

{
  undefined8 *puVar1;
  String *pSVar2;
  __int64 capacity;
  char *pcVar3;
  void *pvVar4;
  String SVar5;
  bool bVar6;
  code *pcVar7;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var8;
  Hasher into;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  __RawDictionaryStorage *p_Var16;
  __RawDictionaryStorage *original;
  undefined8 uVar17;
  long lVar18;
  undefined1 auStack_a8 [72];
  
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_DictionaryStorage *)&DAT_100fcb428;
  FUN_1000f7830(&DAT_100fcb428,&DAT_100c53fe0);
  p_Var8 = original;
  Swift::_DictionaryStorage::_resize(this,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_1004b7864:
    _swift_release(original);
    *unaff_x20 = (long)p_Var8;
    return;
  }
  p_Var16 = original + 0x40;
  uVar13 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)p_Var16;
  lVar11 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar18 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1004b7894);
          (*pcVar7)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar18) {
          if ((param_2 & 1U) != 0) {
            uVar15 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
            if (((byte)original[0x20] & 0x3f) < 6) {
              *(long *)p_Var16 = -1L << (uVar15 & 0x3f);
            }
            else {
              _bzero(p_Var16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(original + 0x10) = 0;
          }
          goto LAB_1004b7864;
        }
        uVar15 = *(ulong *)(p_Var16 + lVar18 * 8);
        lVar11 = lVar11 + 1;
      } while (uVar15 == 0);
      uVar10 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar10 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar18 = lVar11;
    }
    uVar10 = LZCOUNT(uVar10) | lVar18 << 6;
    pSVar2 = (String *)(*(long *)(original + 0x30) + uVar10 * 0x10);
    pcVar3 = pSVar2->str;
    pvVar4 = pSVar2->bridgeObject;
    SVar5 = *pSVar2;
    uVar17 = *(undefined8 *)(*(long *)(original + 0x38) + uVar10 * 8);
    if ((param_2 & 1U) == 0) {
      _swift_bridgeObjectRetain(pvVar4);
      _swift_retain(uVar17);
    }
    Swift::Hasher::init(*(__int64 *)(p_Var8 + 0x28));
    into.unknown = auStack_a8;
    Swift::String::hash(into,SVar5);
    uVar9 = Swift::Hasher::_finalize(into);
    uVar14 = -1L << ((ulong)(byte)p_Var8[0x20] & 0x3f);
    uVar9 = uVar9 & (uVar14 ^ 0xffffffffffffffff);
    uVar12 = uVar9 >> 6;
    uVar10 = -1L << (uVar9 & 0x3f) & (*(ulong *)(p_Var8 + uVar12 * 8 + 0x40) ^ 0xffffffffffffffff);
    if (uVar10 == 0) {
      bVar6 = false;
      uVar10 = 0x3f - uVar14 >> 6;
      do {
        uVar9 = uVar12 + 1;
        if ((uVar9 == uVar10) && (bVar6)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1004b7898);
          (*pcVar7)();
        }
        uVar12 = 0;
        if (uVar9 != uVar10) {
          uVar12 = uVar9;
        }
        bVar6 = (bool)(uVar9 == uVar10 | bVar6);
      } while (*(ulong *)(p_Var8 + uVar12 * 8 + 0x40) == 0xffffffffffffffff);
      uVar10 = ~*(ulong *)(p_Var8 + uVar12 * 8 + 0x40);
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
    *(ulong *)(p_Var8 + uVar12 + 0x40) = 1L << (uVar10 & 0x3f) | *(ulong *)(p_Var8 + uVar12 + 0x40);
    puVar1 = (undefined8 *)(*(long *)(p_Var8 + 0x30) + uVar10 * 0x10);
    *puVar1 = pcVar3;
    puVar1[1] = pvVar4;
    *(undefined8 *)(*(long *)(p_Var8 + 0x38) + uVar10 * 8) = uVar17;
    *(long *)(p_Var8 + 0x10) = *(long *)(p_Var8 + 0x10) + 1;
    lVar11 = lVar18;
  } while( true );
}



/* Address: 0x1004b7898 | FUN_1004b7898 */

void FUN_1004b7898(char *param_1,bool param_2)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  String SVar4;
  bool bVar5;
  code *pcVar6;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var7;
  Hasher into;
  ulong uVar8;
  Hasher capacity;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  __uint64 *p_Var13;
  String *pSVar14;
  ulong uVar15;
  long lVar16;
  long *unaff_x20;
  __RawDictionaryStorage *p_Var17;
  ulong uVar18;
  __RawDictionaryStorage *original;
  undefined8 uVar19;
  undefined1 auStack_a8 [72];
  
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity.unknown = *(char **)(original + 0x18);
  if ((long)*(char **)(original + 0x18) <= (long)param_1) {
    capacity.unknown = param_1;
  }
  this = (_DictionaryStorage *)&DAT_100fcb408;
  FUN_1000f7830(&DAT_100fcb408,&DAT_100c50258);
  p_Var7 = original;
  Swift::_DictionaryStorage::_resize(this,original,(__int64)capacity.unknown,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_1004b7b4c:
    _swift_release(original);
    *unaff_x20 = (long)p_Var7;
    return;
  }
  p_Var17 = original + 0x40;
  uVar12 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar18 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar18 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar18 = uVar18 & *(ulong *)p_Var17;
  lVar10 = 0;
  do {
    if (uVar18 == 0) {
      do {
        lVar16 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1004b7b7c);
          (*pcVar6)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar16) {
          if ((param_2 & 1U) != 0) {
            uVar18 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
            if (((byte)original[0x20] & 0x3f) < 6) {
              *(long *)p_Var17 = -1L << (uVar18 & 0x3f);
            }
            else {
              _bzero(p_Var17,uVar18 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(original + 0x10) = 0;
          }
          goto LAB_1004b7b4c;
        }
        uVar18 = *(ulong *)(p_Var17 + lVar16 * 8);
        lVar10 = lVar10 + 1;
      } while (uVar18 == 0);
      uVar9 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar18 = uVar18 - 1 & uVar18;
    }
    else {
      uVar9 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar18 = uVar18 - 1 & uVar18;
      lVar16 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar16 << 6;
    pSVar14 = (String *)(*(long *)(original + 0x30) + uVar9 * 0x18);
    pcVar1 = pSVar14->str;
    pcVar2 = pSVar14->bridgeObject;
    SVar4 = *pSVar14;
    cVar3 = *(char *)&pSVar14[1].str;
    uVar19 = *(undefined8 *)(*(long *)(original + 0x38) + uVar9 * 8);
    if ((param_2 & 1U) == 0) {
      capacity.unknown = pcVar2;
      FUN_1004a7398(pcVar1,pcVar2,cVar3);
      _swift_retain(uVar19);
    }
    Swift::Hasher::init(*(__int64 *)(p_Var7 + 0x28));
    if (cVar3 == '\x01') {
      Swift::Hasher::_combine(1,capacity);
      into.unknown = pcVar1;
      Swift::Hasher::_combine((__uint64)pcVar1,capacity);
    }
    else {
      Swift::Hasher::_combine(0,capacity);
      into.unknown = auStack_a8;
      capacity.unknown = pcVar1;
      Swift::String::hash(into,SVar4);
    }
    uVar8 = Swift::Hasher::_finalize(into);
    uVar15 = -1L << ((ulong)(byte)p_Var7[0x20] & 0x3f);
    uVar8 = uVar8 & (uVar15 ^ 0xffffffffffffffff);
    uVar11 = uVar8 >> 6;
    uVar9 = -1L << (uVar8 & 0x3f) & (*(ulong *)(p_Var7 + uVar11 * 8 + 0x40) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar5 = false;
      uVar9 = 0x3f - uVar15 >> 6;
      do {
        uVar8 = uVar11 + 1;
        if ((uVar8 == uVar9) && (bVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1004b7b80);
          (*pcVar6)();
        }
        uVar11 = 0;
        if (uVar8 != uVar9) {
          uVar11 = uVar8;
        }
        bVar5 = (bool)(uVar8 == uVar9 | bVar5);
      } while (*(ulong *)(p_Var7 + uVar11 * 8 + 0x40) == 0xffffffffffffffff);
      uVar9 = ~*(ulong *)(p_Var7 + uVar11 * 8 + 0x40);
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
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar8 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var7 + uVar11 + 0x40) = 1L << (uVar9 & 0x3f) | *(ulong *)(p_Var7 + uVar11 + 0x40);
    p_Var13 = (__uint64 *)(*(long *)(p_Var7 + 0x30) + uVar9 * 0x18);
    *p_Var13 = (__uint64)pcVar1;
    p_Var13[1] = (__uint64)pcVar2;
    *(char *)(p_Var13 + 2) = cVar3;
    *(undefined8 *)(*(long *)(p_Var7 + 0x38) + uVar9 * 8) = uVar19;
    *(long *)(p_Var7 + 0x10) = *(long *)(p_Var7 + 0x10) + 1;
    lVar10 = lVar16;
  } while( true );
}



/* Address: 0x1004b7b80 | FUN_1004b7b80 */

void FUN_1004b7b80(ulong *param_1)

{
  __int64 _Var1;
  _ContiguousArrayBuffer<undefined> _Var2;
  ulong uVar3;
  ulong uVar4;
  ulong minimumCapacity;
  undefined *local_68;
  ulong uStack_60;
  undefined1 auStack_58 [8];
  long local_50;
  ulong uStack_48;
  
  uVar3 = *param_1;
  uVar4 = uVar3;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar4 & 1) == 0) {
    FUN_1004cff38();
  }
  uVar4 = *(ulong *)(uVar3 + 0x10);
  local_50 = uVar3 + 0x20;
  uStack_48 = uVar4;
  _Var1 = Swift::_minimumMergeRunLength(uVar4);
  if (_Var1 < (long)uVar4) {
    minimumCapacity = uVar4 >> 1;
    _Var2.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (1 < uVar4) {
      _Var2 = Swift::ContiguousArray::_allocateBufferUninitialized
                        (minimumCapacity,PTR___type_metadata_for_Swift_String_100eac208);
      *(ulong *)(_Var2.unknown + 0x10) = minimumCapacity;
    }
    local_68 = _Var2.unknown + 0x20;
    uStack_60 = minimumCapacity;
    FUN_1004b7c7c(&local_68,auStack_58,&local_50,_Var1);
    *(undefined8 *)(_Var2.unknown + 0x10) = 0;
    _swift_release(_Var2.unknown);
  }
  else if (uVar4 != 0) {
    FUN_1001129c0(0,uVar4,1,&local_50);
  }
  *param_1 = uVar3;
  return;
}



/* Address: 0x1004b7c7c | FUN_1004b7c7c */

void FUN_1004b7c7c(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  ulong *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  _StringGuts _Var12;
  _StringGuts _Var13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  long unaff_x21;
  long lVar21;
  ulong *puVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  undefined8 uVar26;
  undefined *local_58;
  
  local_58 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar25 = param_3[1];
  if (0 < lVar25) {
    lVar15 = 0;
    do {
      lVar24 = lVar15 + 1;
      if (lVar24 < lVar25) {
        lVar21 = *param_3;
        puVar1 = (undefined8 *)(lVar21 + lVar24 * 0x10);
        _Var12.unknown = (undefined *)*puVar1;
        _Var13.unknown = (undefined *)puVar1[1];
        puVar1 = (undefined8 *)(lVar21 + lVar15 * 0x10);
        if (_Var12.unknown == (undefined *)*puVar1 && _Var13.unknown == (undefined *)puVar1[1]) {
          bVar7 = false;
        }
        else {
          bVar7 = Swift::_stringCompareWithSmolCheck
                            (_Var12,_Var13,(_StringComparisonResult)(__int8)(undefined *)*puVar1);
        }
        lVar18 = lVar15 + 2;
        lVar24 = lVar18;
        if (lVar18 < lVar25) {
          plVar19 = puVar1 + 3;
          do {
            _Var12.unknown = (undefined *)plVar19[2];
            if ((undefined *)plVar19[1] == (undefined *)plVar19[-1] &&
                _Var12.unknown == (undefined *)*plVar19) {
              if (bVar7 != false) goto LAB_1004b7d74;
            }
            else {
              bVar8 = Swift::_stringCompareWithSmolCheck
                                ((undefined *)plVar19[1],_Var12,
                                 (_StringComparisonResult)(__int8)(undefined *)plVar19[-1]);
              lVar24 = lVar18;
              if (bVar7 != bVar8) break;
            }
            lVar18 = lVar18 + 1;
            plVar19 = plVar19 + 2;
            lVar24 = lVar25;
          } while (lVar25 != lVar18);
        }
        lVar18 = lVar24;
        if (bVar7 != false) {
LAB_1004b7d74:
          if (lVar18 < lVar15) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1004b8064);
            (*pcVar6)();
          }
          lVar24 = lVar18;
          if (lVar15 < lVar18) {
            lVar14 = lVar18 << 4;
            lVar16 = lVar15 << 4;
            lVar25 = lVar15;
            do {
              lVar18 = lVar18 + -1;
              if (lVar25 != lVar18) {
                if (lVar21 == 0) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x1004b8084);
                  (*pcVar6)();
                }
                puVar1 = (undefined8 *)(lVar21 + lVar16);
                lVar2 = lVar21 + lVar14;
                uVar4 = *puVar1;
                uVar5 = puVar1[1];
                uVar26 = *(undefined8 *)(lVar2 + -0x10);
                puVar1[1] = *(undefined8 *)(lVar2 + -8);
                *puVar1 = uVar26;
                *(undefined8 *)(lVar2 + -0x10) = uVar4;
                *(undefined8 *)(lVar2 + -8) = uVar5;
              }
              lVar25 = lVar25 + 1;
              lVar14 = lVar14 + -0x10;
              lVar16 = lVar16 + 0x10;
            } while (lVar25 < lVar18);
          }
        }
      }
      lVar25 = param_3[1];
      lVar21 = lVar24;
      if (lVar24 < lVar25) {
        if (SBORROW8(lVar24,lVar15)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1004b8060);
          (*pcVar6)();
        }
        if (lVar24 - lVar15 < param_4) {
          if (SCARRY8(lVar15,param_4)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1004b8068);
            (*pcVar6)();
          }
          lVar18 = lVar15 + param_4;
          if (lVar25 <= lVar15 + param_4) {
            lVar18 = lVar25;
          }
          if (lVar18 < lVar15) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1004b806c);
            (*pcVar6)();
          }
          if (lVar24 != lVar18) {
            lVar16 = *param_3;
            plVar19 = (long *)(lVar16 + lVar24 * 0x10);
            lVar25 = lVar15 - lVar24;
            do {
              puVar1 = (undefined8 *)(lVar16 + lVar24 * 0x10);
              _Var12.unknown = (undefined *)*puVar1;
              _Var13.unknown = (undefined *)puVar1[1];
              plVar20 = plVar19;
              lVar21 = lVar25;
              do {
                puVar11 = (undefined *)plVar20[-2];
                if ((_Var12.unknown == puVar11 && _Var13.unknown == (undefined *)plVar20[-1]) ||
                   (bVar7 = Swift::_stringCompareWithSmolCheck
                                      (_Var12,_Var13,(_StringComparisonResult)(__int8)puVar11),
                   !bVar7)) break;
                if (lVar16 == 0) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x1004b8070);
                  (*pcVar6)();
                }
                _Var12.unknown = (undefined *)*plVar20;
                _Var13.unknown = (undefined *)plVar20[1];
                plVar20[1] = plVar20[-1];
                *plVar20 = plVar20[-2];
                plVar20[-1] = (long)_Var13.unknown;
                plVar20 = plVar20 + -2;
                *plVar20 = (long)_Var12.unknown;
                bVar7 = lVar21 != -1;
                lVar21 = lVar21 + 1;
              } while (bVar7);
              lVar24 = lVar24 + 1;
              plVar19 = plVar19 + 2;
              lVar25 = lVar25 + -1;
              lVar21 = lVar18;
            } while (lVar24 != lVar18);
          }
        }
      }
      puVar11 = local_58;
      if (lVar21 < lVar15) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1004b8050);
        (*pcVar6)();
      }
      puVar9 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar10 = puVar11;
      if (((ulong)puVar9 & 1) == 0) {
        puVar10 = (undefined *)0x0;
        FUN_1004cfb60(0,*(long *)(puVar11 + 0x10) + 1,1,puVar11);
      }
      uVar23 = *(ulong *)(puVar10 + 0x10);
      puVar11 = puVar10;
      if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar23) {
        puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
        FUN_1004cfb60(puVar11,uVar23 + 1,1,puVar10);
      }
      *(ulong *)(puVar11 + 0x10) = uVar23 + 1;
      *(long *)(puVar11 + uVar23 * 0x10 + 0x20) = lVar15;
      *(long *)(puVar11 + uVar23 * 0x10 + 0x28) = lVar21;
      local_58 = puVar11;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1004b8088);
        (*pcVar6)();
      }
      FUN_1004b8090(&local_58,*param_1,param_3);
      puVar11 = local_58;
      if (unaff_x21 != 0) goto LAB_1004b8020;
      lVar25 = param_3[1];
      lVar15 = lVar21;
    } while (lVar21 < lVar25);
  }
  puVar11 = local_58;
  lVar25 = *param_1;
  if (lVar25 == 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1004b8090);
    (*pcVar6)();
  }
  puVar9 = local_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar9 & 1) == 0) {
    FUN_1004cff24();
  }
  puVar22 = (ulong *)(puVar11 + 0x10);
  uVar23 = *puVar22;
  while( true ) {
    if (uVar23 < 2) {
      _swift_bridgeObjectRelease(puVar11);
      return;
    }
    lVar15 = *param_3;
    if (lVar15 == 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1004b808c);
      (*pcVar6)();
    }
    plVar19 = (long *)(puVar11 + uVar23 * 0x10);
    lVar24 = *plVar19;
    puVar3 = puVar22 + uVar23 * 2;
    uVar17 = puVar3[1];
    FUN_100112cf4(lVar15 + lVar24 * 0x10,lVar15 + *puVar3 * 0x10,lVar15 + uVar17 * 0x10,lVar25);
    if (unaff_x21 != 0) break;
    if ((long)uVar17 < lVar24) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1004b8054);
      (*pcVar6)();
    }
    if (*puVar22 <= uVar23 - 2) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1004b8058);
      (*pcVar6)();
    }
    *plVar19 = lVar24;
    plVar19[1] = uVar17;
    uVar17 = *puVar22;
    lVar15 = uVar17 - uVar23;
    if (uVar17 < uVar23) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1004b805c);
      (*pcVar6)();
    }
    uVar23 = uVar17 - 1;
    _memmove(puVar3,puVar3 + 2,lVar15 * 0x10);
    *puVar22 = uVar23;
  }
LAB_1004b8020:
  _swift_bridgeObjectRelease(puVar11);
  return;
}



/* Address: 0x1004b8090 | FUN_1004b8090 */

undefined8 FUN_1004b8090(ulong *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  uVar8 = *param_1;
  if (1 < *(ulong *)(uVar8 + 0x10)) {
    uVar6 = uVar8;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar6 & 1) == 0) {
      FUN_1004cff24();
    }
    *param_1 = uVar8;
    uVar6 = *(ulong *)(uVar8 + 0x10);
    do {
      lVar9 = uVar6 - 1;
      if (uVar6 < 4) {
        if (uVar6 == 3) {
          bVar5 = SBORROW8(*(long *)(uVar8 + 0x28),*(long *)(uVar8 + 0x20));
          lVar7 = *(long *)(uVar8 + 0x28) - *(long *)(uVar8 + 0x20);
          goto LAB_1004b8164;
        }
        if (uVar6 < 2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1004b82e0);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar7 = *plVar1;
        lVar12 = plVar1[1];
        bVar5 = SBORROW8(lVar12,lVar7);
        lVar12 = lVar12 - lVar7;
LAB_1004b81c8:
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1004b82d0);
          (*pcVar4)();
        }
        lVar7 = uVar8 + lVar9 * 0x10;
        lVar2 = *(long *)(lVar7 + 0x20);
        lVar7 = *(long *)(lVar7 + 0x28);
        if (SBORROW8(lVar7,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1004b82d8);
          (*pcVar4)();
        }
        lVar10 = lVar9;
        if (lVar7 - lVar2 < lVar12) {
          return 1;
        }
      }
      else {
        lVar12 = uVar8 + 0x20 + uVar6 * 0x10;
        if (SBORROW8(*(long *)(lVar12 + -0x38),*(long *)(lVar12 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1004b82b8);
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar12 + -0x28) - *(long *)(lVar12 + -0x30);
        if (SBORROW8(*(long *)(lVar12 + -0x28),*(long *)(lVar12 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1004b82bc);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar2 = *plVar1;
        lVar10 = plVar1[1];
        lVar3 = lVar10 - lVar2;
        if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1004b82c4);
          (*pcVar4)();
        }
        if (SCARRY8(lVar7,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1004b82cc);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar7 + lVar3 < *(long *)(lVar12 + -0x38) - *(long *)(lVar12 + -0x40)) {
LAB_1004b8164:
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1004b82c0);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1004b82c8);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar3 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1004b82d4);
            (*pcVar4)();
          }
          if (SCARRY8(lVar12,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1004b82dc);
            (*pcVar4)();
          }
          bVar5 = false;
          if (lVar12 + lVar3 < lVar7) goto LAB_1004b81c8;
          lVar10 = uVar6 - 2;
          if (lVar3 <= lVar7) {
            lVar10 = lVar9;
          }
        }
        else {
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar12 = *plVar1;
          lVar2 = plVar1[1];
          if (SBORROW8(lVar2,lVar12)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1004b82e4);
            (*pcVar4)();
          }
          lVar10 = uVar6 - 2;
          if (lVar2 - lVar12 <= lVar7) {
            lVar10 = lVar9;
          }
        }
      }
      uVar11 = lVar10 - 1;
      if (uVar6 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1004b82ac);
        (*pcVar4)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1004b82f8);
        (*pcVar4)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar7 = plVar1[1];
      FUN_100112cf4(lVar9 + lVar12 * 0x10,lVar9 + *plVar1 * 0x10,lVar9 + lVar7 * 0x10,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1004b82b0);
        (*pcVar4)();
      }
      uVar6 = uVar8;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar6 & 1) == 0) {
        FUN_1004cff24();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1004b82b4);
        (*pcVar4)();
      }
      lVar9 = uVar8 + uVar11 * 0x10;
      *(long *)(lVar9 + 0x20) = lVar12;
      *(long *)(lVar9 + 0x28) = lVar7;
      *param_1 = uVar8;
      FUN_1004cfe9c(lVar10);
      uVar8 = *param_1;
      uVar6 = *(ulong *)(uVar8 + 0x10);
    } while (1 < uVar6);
  }
  return 1;
}



/* Address: 0x1004b82f8 | FUN_1004b82f8 */

long FUN_1004b82f8(long *param_1,undefined8 *param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  
  puVar11 = (ulong *)(param_4 + 0x40);
  uVar10 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar13 = 0xffffffffffffffff;
  if (-uVar10 < 0x40) {
    uVar13 = ~(-1L << (-uVar10 & 0x3f));
  }
  uVar13 = uVar13 & *puVar11;
  if (param_2 == (undefined8 *)0x0) {
    lVar15 = 0;
    param_3 = 0;
  }
  else if (param_3 == 0) {
    lVar15 = 0;
  }
  else {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1004b8480);
      (*pcVar6)();
    }
    lVar8 = 0;
    lVar14 = 0;
    uVar12 = 0x3f - uVar10 >> 6;
    lVar15 = lVar8;
    while( true ) {
      while (uVar13 == 0) {
        bVar7 = SCARRY8(lVar15,1);
        lVar15 = lVar15 + 1;
        if (bVar7) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1004b847c);
          (*pcVar6)();
        }
        if ((long)uVar12 <= lVar15) {
          uVar13 = 0;
          if ((long)uVar12 <= lVar8 + 1) {
            uVar12 = lVar8 + 1;
          }
          lVar15 = uVar12 - 1;
          param_3 = lVar14;
          goto LAB_1004b8430;
        }
        uVar13 = puVar11[lVar15];
      }
      lVar14 = lVar14 + 1;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 - 1 & uVar13;
      uVar9 = lVar15 << 10 | LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) << 4;
      puVar1 = (undefined8 *)(*(long *)(param_4 + 0x30) + uVar9);
      uVar4 = puVar1[1];
      puVar2 = (undefined8 *)(*(long *)(param_4 + 0x38) + uVar9);
      uVar3 = *puVar2;
      uVar5 = puVar2[1];
      *param_2 = *puVar1;
      param_2[1] = uVar4;
      param_2[2] = uVar3;
      param_2[3] = uVar5;
      if (lVar14 == param_3) break;
      param_2 = param_2 + 4;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar5);
      lVar8 = lVar15;
    }
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar5);
  }
LAB_1004b8430:
  *param_1 = param_4;
  param_1[1] = (long)puVar11;
  param_1[2] = ~uVar10;
  param_1[3] = lVar15;
  param_1[4] = uVar13;
  return param_3;
}



/* Address: 0x1004b8480 | FUN_1004b8480 */

undefined8 FUN_1004b8480(undefined8 param_1)

{
  thunk_FUN_100004594();
  return param_1;
}



/* Address: 0x1004b84b4 | FUN_1004b84b4 */

/* WARNING: Removing unreachable block (ram,0x0001004b8814) */

void FUN_1004b84b4(undefined8 param_1,undefined *param_2,undefined8 param_3,void *param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  URL UVar5;
  CharacterSet CVar6;
  CharacterSet CVar7;
  undefined1 *puVar8;
  ulong uVar9;
  URL UVar10;
  undefined8 *puVar12;
  _StringGuts _Var13;
  char *pcVar14;
  long extraout_x8;
  long lVar15;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar16;
  long lVar17;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar18;
  long unaff_x20;
  long unaff_x21;
  long lVar19;
  CharacterSet in;
  undefined1 *puVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  undefined1 auStack_c0 [8];
  long local_b8;
  undefined8 local_88;
  undefined *puStack_80;
  undefined8 local_70;
  long lStack_68;
  String *pSVar11;
  
  puVar4 = &DAT_100fcb378;
  FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar20 = auStack_c0 + -extraout_x8;
  UVar5 = Foundation::URL::typeMetadataAccessor();
  lVar15 = *(long *)(UVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar15 + 0x40));
  uVar16 = (long)puVar20 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar17 = uVar16 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  CVar6 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar19 = *(long *)(CVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar19 + 0x40));
  in.unknown = (undefined *)
               ((lVar17 - extraout_x12_00) - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  if (param_2 != (undefined *)0x0) {
    CVar7.unknown = param_2;
    local_b8 = lVar17 - extraout_x12_00;
    local_88 = param_1;
    puStack_80 = param_2;
    _swift_bridgeObjectRetain();
    Foundation::CharacterSet::get_whitespacesAndNewlines(CVar7);
    FUN_1004b8f18();
    SVar21 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
    puVar12 = SVar21.bridgeObject;
    (**(code **)(lVar19 + 8))(in.unknown,CVar6.unknown);
    _swift_bridgeObjectRelease(param_2);
    uVar9 = (ulong)SVar21.str & 0xffffffffffff;
    if (((ulong)puVar12 & 0x2000000000000000) != 0) {
      uVar9 = (ulong)puVar12 >> 0x38 & 0xf;
    }
    if (uVar9 == 0) {
      _swift_bridgeObjectRelease(puVar12);
    }
    else {
      Foundation::URL::_init();
      puVar8 = puVar20;
      (**(code **)(lVar15 + 0x30))(puVar20,1,UVar5.unknown);
      if ((int)puVar8 == 1) {
        _Var13.unknown = &DAT_100fcb378;
        pcVar14 = &DAT_100c50170;
        FUN_1000fb4c4(puVar20);
        local_88 = 0;
        puStack_80 = (undefined *)0xe000000000000000;
        Swift::_StringGuts::grow(0x40,_Var13);
        SVar22.bridgeObject = (void *)0x8000000100daa5c0;
        SVar22.str = (char *)0xd00000000000003e;
        SVar23.bridgeObject = param_4;
        SVar23.str = pcVar14;
        Swift::String::append(SVar22,SVar23);
        SVar24.bridgeObject = param_4;
        SVar24.str = pcVar14;
        Swift::String::append(SVar21,SVar24);
        _swift_bridgeObjectRelease();
        puVar4 = puStack_80;
        uVar2 = local_88;
        FUN_1004a3fb4();
        _swift_allocError(&DAT_100ed9e90,puVar12,0,0);
        *puVar12 = uVar2;
        puVar12[1] = puVar4;
        puVar12[2] = 0;
        puVar12[3] = 0;
        *(undefined1 *)(puVar12 + 4) = 1;
        _swift_willThrow();
      }
      else {
        _swift_bridgeObjectRelease(puVar12);
        lVar1 = local_b8;
        (**(code **)(lVar15 + 0x20))(local_b8,puVar20,UVar5.unknown);
        lVar19 = unaff_x20 + _TtC3MCP15OAuthAuthorizer::discoveryClient;
        FUN_100004640(lVar19,*(undefined8 *)(lVar19 + 0x18));
        FUN_100076688();
        lVar3 = lStack_68;
        uVar2 = local_70;
        FUN_100004640(&local_88,local_70);
        (**(code **)(lVar3 + 0x18))(lVar17,param_3,uVar2,lVar3);
        if (unaff_x21 == 0) {
          FUN_100004594(&local_88);
          FUN_100004640(lVar19,*(undefined8 *)(lVar19 + 0x18));
          FUN_100076688();
          lVar3 = lStack_68;
          uVar2 = local_70;
          FUN_100004640(&local_88,local_70);
          (**(code **)(lVar3 + 0x18))(uVar16,lVar1,uVar2,lVar3);
          FUN_100004594(&local_88);
          FUN_100004640(lVar19,*(undefined8 *)(lVar19 + 0x18));
          FUN_100076688();
          FUN_100004640(&local_88,local_70);
          uVar9 = uVar16;
          (**(code **)(lStack_68 + 0x28))(uVar16,lVar17,local_70,lStack_68);
          UVar10.unknown = (undefined *)&local_88;
          FUN_100004594();
          if ((uVar9 & 1) == 0) {
            SVar21 = Foundation::URL::get_absoluteString(UVar10);
            SVar22 = Foundation::URL::get_absoluteString((URL)SVar21.str);
            pSVar11 = (String *)SVar22.str;
            FUN_1004a3fb4();
            _swift_allocError(&DAT_100ed9e90,pSVar11,0,0);
            *pSVar11 = SVar21;
            pSVar11[1] = SVar22;
            *(undefined1 *)&pSVar11[2].str = 3;
            _swift_willThrow();
            pcVar18 = *(code **)(lVar15 + 8);
            (*pcVar18)(uVar16,UVar5.unknown);
            (*pcVar18)(lVar17,UVar5.unknown);
          }
          else {
            pcVar18 = *(code **)(lVar15 + 8);
            (*pcVar18)(uVar16,UVar5.unknown);
            (*pcVar18)(lVar17,UVar5.unknown);
          }
          (*pcVar18)(lVar1,UVar5.unknown);
        }
        else {
          (**(code **)(lVar15 + 8))(lVar1,UVar5.unknown);
          FUN_100004594(&local_88);
        }
      }
    }
  }
  return;
}



/* Address: 0x1004b896c | FUN_1004b896c */

String FUN_1004b896c(undefined8 param_1,long param_2)

{
  ulong uVar1;
  CharacterSet CVar2;
  CharacterSet CVar3;
  long extraout_x8;
  CharacterSet in;
  long lVar5;
  String SVar6;
  undefined8 local_50;
  long lStack_48;
  void *pvVar4;
  
  CVar2 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar5 = *(long *)(CVar2.unknown + -8);
  CVar3 = CVar2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar5 + 0x40));
  in.unknown = (undefined *)((long)&local_50 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  if (param_2 != 0) {
    local_50 = param_1;
    lStack_48 = param_2;
    Foundation::CharacterSet::get_whitespacesAndNewlines(CVar3);
    FUN_1004b8f18();
    SVar6 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
    pvVar4 = SVar6.bridgeObject;
    (**(code **)(lVar5 + 8))(in.unknown,CVar2.unknown);
    uVar1 = (ulong)SVar6.str & 0xffffffffffff;
    if (((ulong)pvVar4 & 0x2000000000000000) != 0) {
      uVar1 = (ulong)pvVar4 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      return SVar6;
    }
    _swift_bridgeObjectRelease(pvVar4);
  }
  SVar6.bridgeObject = (void *)0xe90000000000003e;
  SVar6.str = (char *)0x6e776f6e6b6e753c;
  return SVar6;
}



/* Address: 0x1004b8a64 | FUN_1004b8a64 */

void FUN_1004b8a64(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fcb570 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fcb568;
  FUN_1000f8b08(&DAT_100fcb568,&DAT_100c50360);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100eac518;
  _swift_getWitnessTable
            (PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100eac518,puVar1);
  DAT_100fcb570 = puVar2;
  return;
}



/* Address: 0x1004b8ab4 | FUN_1004b8ab4 */

undefined8 FUN_1004b8ab4(undefined8 param_1,undefined8 param_2)

{
  FUN_1004be3c0(param_2,param_1);
  return param_2;
}



/* Address: 0x1004b8af0 | FUN_1004b8af0 */

undefined8 FUN_1004b8af0(undefined8 param_1)

{
  FUN_1004be3ac();
  return param_1;
}



/* Address: 0x1004b8b24 | FUN_1004b8b24 */

void FUN_1004b8b24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  switch(param_5) {
  case 0:
    break;
  case 1:
  case 2:
  case 4:
  case 8:
    param_3 = param_2;
    break;
  case 3:
  case 5:
  case 6:
  case 7:
  case 10:
  case 0xb:
  case 0xd:
    _swift_bridgeObjectRelease(param_2);
    param_3 = param_4;
    break;
  default:
    return;
  case 0xc:
    param_3 = param_1;
  }
  _swift_bridgeObjectRelease(param_3);
  return;
}



/* Address: 0x1004b8b94 | FUN_1004b8b94 */

undefined8 FUN_1004b8b94(undefined8 param_1)

{
  FUN_1004cd698();
  return param_1;
}



/* Address: 0x1004b8bc8 | FUN_1004b8bc8 */

void FUN_1004b8bc8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  if (param_3 != 0) {
    _swift_bridgeObjectRelease(param_3);
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(param_4);
    return;
  }
  return;
}



/* Address: 0x1004b8c04 | FUN_1004b8c04 */

void FUN_1004b8c04(void)

{
  FUN_1004b8c0c(0);
  return;
}



/* Address: 0x1004b8c0c | FUN_1004b8c0c */

void FUN_1004b8c0c(undefined8 param_1)

{
  if (DAT_100fcb5c0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100cb1e48);
  return;
}



/* Address: 0x1004b8c44 | FUN_1004b8c44 */

void FUN_1004b8c44(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long local_a0;
  undefined *puStack_98;
  long local_90;
  undefined *puStack_88;
  long local_80;
  long lStack_78;
  undefined *local_70;
  undefined *puStack_68;
  long local_60;
  undefined *puStack_58;
  undefined *local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  FUN_1004bcc58();
  if (param_2 < 0x40) {
    local_a0 = *(long *)(lVar1 + -8) + 0x40;
    puStack_98 = &DAT_100c50408;
    puVar3 = &DAT_100fcb5d0;
    lVar1 = 0x13f;
    FUN_1001a1320(0x13f,&DAT_100fcb5d0,PTR_typeMetadataAccessor_100ea71a8);
    if (puVar3 < (undefined8 *)0x40) {
      lVar1 = *(long *)(lVar1 + -8) + 0x40;
      puStack_88 = &DAT_100c50420;
      puVar4 = &DAT_100fcb5d8;
      lVar2 = 0x13f;
      local_90 = lVar1;
      FUN_1001a1320(0x13f,&DAT_100fcb5d8,FUN_1004ce850);
      if (puVar4 < (undefined *)0x40) {
        local_80 = *(long *)(lVar2 + -8) + 0x40;
        local_70 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40;
        puStack_68 = &DAT_100c50438;
        puVar3 = &DAT_100fcb5e0;
        lVar2 = 0x13f;
        lStack_78 = lVar1;
        FUN_1001a1320(0x13f,&DAT_100fcb5e0,PTR_typeMetadataAccessor_100ea7480);
        if (puVar3 < (undefined8 *)0x40) {
          local_60 = *(long *)(lVar2 + -8) + 0x40;
          puStack_58 = &DAT_100c50450;
          local_50 = &DAT_100c50450;
          puStack_48 = &DAT_100c50450;
          local_40 = &DAT_100c50450;
          puStack_38 = &DAT_100c50450;
          local_30 = &DAT_100c50450;
          puStack_28 = &DAT_100c50450;
          _swift_updateClassMetadata2(param_1,0x100,0x10,&local_a0,param_1 + 0x50);
        }
      }
    }
  }
  return;
}



/* Address: 0x1004b8d6c | FUN_1004b8d6c */

undefined8 FUN_1004b8d6c(undefined8 param_1,undefined8 param_2)

{
  FUN_1004fff34(param_2,param_1);
  return param_2;
}



/* Address: 0x1004b8da8 | FUN_1004b8da8 */

undefined8 FUN_1004b8da8(undefined8 param_1,undefined8 param_2)

{
  FUN_1005ce4b8(param_2,param_1);
  return param_2;
}



/* Address: 0x1004b8de4 | FUN_1004b8de4 */

undefined8 FUN_1004b8de4(undefined8 param_1,undefined8 param_2)

{
  FUN_100528268(param_2,param_1);
  return param_2;
}



/* Address: 0x1004b8e20 | FUN_1004b8e20 */

void FUN_1004b8e20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  byte param_5)

{
  if (param_5 < 2) {
    if ((param_5 != 0) && (param_5 != 1)) {
      return;
    }
    _swift_bridgeObjectRetain(param_2);
    param_2 = param_4;
  }
  else if (param_5 != 2) {
    if (param_5 != 3) {
      return;
    }
    _swift_bridgeObjectRetain(param_2);
    _swift_retain(param_4);
    return;
  }
  _swift_bridgeObjectRetain(param_2);
  return;
}



/* Address: 0x1004b8e9c | FUN_1004b8e9c */

void FUN_1004b8e9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  byte param_5)

{
  if (param_5 < 2) {
    if ((param_5 != 0) && (param_5 != 1)) {
      return;
    }
    _swift_bridgeObjectRelease(param_2);
    param_2 = param_4;
  }
  else if (param_5 != 2) {
    if (param_5 != 3) {
      return;
    }
    _swift_bridgeObjectRelease(param_2);
    _swift_release(param_4);
    return;
  }
  _swift_bridgeObjectRelease(param_2);
  return;
}



/* Address: 0x1004b8f18 | FUN_1004b8f18 */

void FUN_1004b8f18(void)

{
  undefined *puVar1;
  
  if (DAT_100fcb6f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift__Swift__String_>Swift__StringProtocol_100eac258;
  _swift_getWitnessTable
            (PTR_Swift__Swift__String_>Swift__StringProtocol_100eac258,
             PTR___type_metadata_for_Swift_String_100eac208);
  DAT_100fcb6f0 = puVar1;
  return;
}



/* Address: 0x1004b8f58 | FUN_1004b8f58 */

void FUN_1004b8f58(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  if (param_3 != 0) {
    _swift_bridgeObjectRetain(param_4);
    _swift_bridgeObjectRetain(param_2);
    _swift_bridgeObjectRetain(param_3);
    return;
  }
  return;
}



/* Address: 0x1004b8f94 | thunk_FUN_1004ab220 */

void thunk_FUN_1004ab220(void)

{
  FUN_1004ab220();
  return;
}



/* Address: 0x1004b8f98 | thunk_FUN_1004ad888 */

void thunk_FUN_1004ad888(void)

{
  FUN_1004ad888();
  return;
}



/* Address: 0x1004b8f9c | FUN_1004b8f9c */

void FUN_1004b8f9c(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x1004b8fa8 | FUN_1004b8fa8 */

void FUN_1004b8fa8(void)

{
  return;
}



/* Address: 0x1004b8fac | FUN_1004b8fac */

undefined1  [16] FUN_1004b8fac(void)

{
  return ZEXT816(0x100ed98f0);
}



/* Address: 0x1004b8fbc | FUN_1004b8fbc */

void FUN_1004b8fbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  URLRequest_conflict UVar1;
  ulong uVar2;
  undefined *puVar3;
  URL UVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long unaff_x22;
  
  lVar6 = *(long *)PTR____stack_chk_guard_100ea82f0;
  *(undefined1 *)(unaff_x22 + 0x49) = param_5;
  *(undefined8 *)(unaff_x22 + 0x1e0) = param_3;
  *(undefined8 *)(unaff_x22 + 0x1e8) = param_4;
  *(undefined8 *)(unaff_x22 + 0x1d0) = param_1;
  *(undefined8 *)(unaff_x22 + 0x1d8) = param_2;
  UVar1 = Foundation::URLRequest::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x1f0) = UVar1.unknown;
  lVar7 = *(long *)(UVar1.unknown + -8);
  *(long *)(unaff_x22 + 0x1f8) = lVar7;
  uVar2 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x200) = uVar2;
  puVar3 = &DAT_100fcb378;
  FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
  uVar2 = *(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x208) = uVar2;
  UVar4 = Foundation::URL::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x210) = UVar4.unknown;
  lVar7 = *(long *)(UVar4.unknown + -8);
  *(long *)(unaff_x22 + 0x218) = lVar7;
  uVar2 = *(long *)(lVar7 + 0x40) + 0xf;
  uVar5 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x220) = uVar5;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x228) = uVar2;
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar6) {
    _swift_task_switch(FUN_1004b90b0,0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1004b90b0 | FUN_1004b90b0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0001004b92f0) */

tuple2_conflict7 FUN_1004b90b0(undefined8 param_1,NSURLResponse *param_2)

{
  NSURLResponse *pNVar1;
  NSURLResponse *pNVar2;
  char cVar3;
  undefined1 uVar4;
  byte bVar5;
  NSURLResponse *pNVar6;
  NSURLResponse *pNVar7;
  Data UNRECOVERED_JUMPTABLE;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  NSDictionary *pNVar12;
  long *plVar13;
  undefined8 extraout_x1;
  NSURLResponse NVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  URL UVar19;
  undefined *puVar20;
  undefined8 uVar21;
  URLRequest *pUVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  char *pcVar25;
  long unaff_x22;
  long lVar26;
  String SVar27;
  String SVar28;
  tuple2_conflict7 tVar29;
  
  lVar15 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar16 = *(long *)(unaff_x22 + 0x1d8);
  uVar21 = *(undefined8 *)(lVar16 + 0x20);
  uVar18 = *(undefined8 *)(lVar16 + 0x18);
  cVar3 = *(char *)(lVar16 + 0x28);
  uVar23 = *(undefined8 *)(lVar16 + 0x10);
  uVar24 = *(undefined8 *)(lVar16 + 8);
  *(char *)(unaff_x22 + 0xb0) = cVar3;
  *(undefined8 *)(unaff_x22 + 0x98) = uVar23;
  *(undefined8 *)(unaff_x22 + 0x90) = uVar24;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar21;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar18;
  if (cVar3 == '\x02') {
    pNVar1 = *(NSURLResponse **)(unaff_x22 + 0x90);
    pNVar2 = *(NSURLResponse **)(unaff_x22 + 0x98);
    lVar26 = *(long *)(unaff_x22 + 0x1e0);
    _swift_bridgeObjectRetain(*(undefined8 *)(lVar16 + 0x10));
    pNVar6 = pNVar1;
    FUN_1004ba06c(pNVar1,pNVar2);
    lVar16 = 0;
    FUN_1004ce850();
    bVar5 = *(byte *)(lVar26 + *(int *)(lVar16 + 0x28));
    if ((bVar5 & 1) != 0) {
      pNVar7 = pNVar1;
      param_2 = pNVar2;
      FUN_1004ba43c(pNVar1,pNVar2);
      if (((ulong)pNVar7 & 1) == 0) {
        if (((ulong)pNVar6 & 1) == 0) goto LAB_1004b9184;
      }
      else if (((ulong)pNVar6 & 1) == 0) {
        FUN_1004a3fb4();
        _swift_allocError(&DAT_100ed9e90,pNVar7,0,0);
        *(NSURLResponse **)pNVar7 = pNVar1;
        *(NSURLResponse **)(pNVar7 + 8) = pNVar2;
        *(undefined8 *)(pNVar7 + 0x10) = 0;
        *(undefined8 *)(pNVar7 + 0x18) = 0;
        NVar14 = (NSURLResponse)0x2;
LAB_1004b920c:
        pNVar7[0x20] = NVar14;
        _swift_willThrow();
        goto LAB_1004b9308;
      }
LAB_1004b921c:
      FUN_1004b8af0(unaff_x22 + 0x90);
      goto LAB_1004b9224;
    }
LAB_1004b9184:
    lVar26 = *(long *)(unaff_x22 + 0x218);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x210);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x208);
    FUN_1004ba36c(*(long *)(unaff_x22 + 0x1e0) + (long)*(int *)(lVar16 + 0x1c),uVar18);
    (**(code **)(lVar26 + 0x30))(uVar18,1,uVar21);
    if ((int)uVar18 == 1) {
      pNVar7 = *(NSURLResponse **)(unaff_x22 + 0x208);
      param_2 = (NSURLResponse *)&DAT_100fcb378;
      FUN_1000fb4c4(pNVar7,&DAT_100fcb378,&DAT_100c50170);
      if ((((ulong)pNVar6 & 1) != 0) && ((bVar5 & 1) == 0)) {
        FUN_1004a3fb4();
        _swift_allocError(&DAT_100ed9e90,pNVar7,0,0);
        *(NSURLResponse **)pNVar7 = pNVar1;
        *(NSURLResponse **)(pNVar7 + 8) = pNVar2;
        *(undefined8 *)(pNVar7 + 0x10) = 0;
        *(undefined8 *)(pNVar7 + 0x18) = 0;
        NVar14 = (NSURLResponse)0x4;
        goto LAB_1004b920c;
      }
      goto LAB_1004b921c;
    }
    uVar21 = *(undefined8 *)(unaff_x22 + 0x228);
    lVar16 = *(long *)(unaff_x22 + 0x218);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x210);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x208);
    uVar4 = *(undefined1 *)(unaff_x22 + 0x49);
    FUN_1004b8af0(unaff_x22 + 0x90);
    (**(code **)(lVar16 + 0x20))(uVar21,uVar24,uVar18);
    FUN_1004d0d18(uVar21,0xd00000000000001c,0x8000000100daa600,uVar4);
    UVar19.unknown = *(undefined **)(unaff_x22 + 0x220);
    pUVar22 = *(URLRequest **)(unaff_x22 + 0x200);
    pcVar25 = *(char **)(unaff_x22 + 0x1d8);
    (**(code **)(*(long *)(unaff_x22 + 0x218) + 0x10))
              (UVar19.unknown,*(undefined8 *)(unaff_x22 + 0x228),*(undefined8 *)(unaff_x22 + 0x210))
    ;
    Foundation::URLRequest::init(UVar19,(NSURLRequestCachePolicy)0x0,60.0);
    Foundation::URLRequest::_set_httpMethod(pUVar22);
    SVar28.bridgeObject = (void *)0x8000000100d8fc90;
    SVar28.str = (char *)0xd000000000000010;
    Foundation::URLRequest::_setValue(SVar28,(URLRequest_conflict)0x2d746e65746e6f43);
    SVar27.bridgeObject = (void *)0x8000000100d8fc90;
    SVar27.str = (char *)0xd000000000000010;
    Foundation::URLRequest::_setValue(SVar27,(URLRequest_conflict)0x747065636341);
    cVar3 = *pcVar25;
    puVar8 = &DAT_100fcb488;
    FUN_1000f7830(&DAT_100fcb488,&DAT_100c504c0);
    if (cVar3 == '\x01') {
      _swift_initStaticObject();
      puVar20 = PTR___swiftEmptyArrayStorage_100eae0d8;
      puVar9 = puVar8;
    }
    else {
      puVar9 = puVar8;
      _swift_initStaticObject();
      _swift_initStaticObject(puVar8,&DAT_100fcb7a0);
      puVar20 = puVar8;
    }
    *(undefined **)(unaff_x22 + 0x230) = puVar20;
    lVar26 = *(long *)(unaff_x22 + 0x1d8);
    puVar8 = &DAT_100fcb730;
    FUN_1000f7830(&DAT_100fcb730,&DAT_100c50520);
    _swift_allocObject();
    *(undefined8 *)(puVar8 + 0x18) = 6;
    *(undefined8 *)(puVar8 + 0x10) = 3;
    *(undefined8 *)(puVar8 + 0x20) = 0x6e5f746e65696c63;
    *(undefined8 *)(puVar8 + 0x28) = 0xeb00000000656d61;
    lVar16 = 0;
    FUN_1004bcc58();
    puVar11 = PTR___type_metadata_for_Swift_String_100eac208;
    puVar17 = (undefined8 *)(lVar26 + *(int *)(lVar16 + 0x2c));
    uVar18 = puVar17[1];
    *(undefined8 *)(puVar8 + 0x30) = *puVar17;
    *(undefined8 *)(puVar8 + 0x38) = uVar18;
    *(undefined **)(puVar8 + 0x48) = puVar11;
    *(undefined8 *)(puVar8 + 0x50) = 0x79745f746e617267;
    *(undefined8 *)(puVar8 + 0x58) = 0xeb00000000736570;
    puVar10 = &DAT_100fcb568;
    FUN_1000f7830(&DAT_100fcb568,&DAT_100c50360);
    *(undefined **)(puVar8 + 0x60) = puVar9;
    *(undefined **)(puVar8 + 0x78) = puVar10;
    *(undefined8 *)(puVar8 + 0x80) = 0xd00000000000001a;
    *(undefined **)(puVar8 + 0xa8) = puVar11;
    *(undefined8 *)(puVar8 + 0x88) = 0x8000000100da8a50;
    *(undefined8 *)(puVar8 + 0x90) = 0x656e6f6e;
    *(undefined1 **)(puVar8 + 0x98) = &DAT_e400000000000000;
    _swift_bridgeObjectRetain(uVar18);
    puVar11 = puVar8;
    FUN_1004a67b4();
    _swift_setDeallocating(puVar8);
    puVar9 = &DAT_100fcb4b0;
    FUN_1000f7830(&DAT_100fcb4b0,&DAT_100c50300);
    _swift_arrayDestroy(puVar8 + 0x20,3,puVar9);
    _swift_deallocClassInstance(puVar8,0x20,7);
    *(undefined **)(unaff_x22 + 0x1c0) = puVar11;
    lVar16 = *(long *)(puVar20 + 0x10);
    _swift_bridgeObjectRelease(puVar20);
    if (lVar16 != 0) {
      *(undefined **)(unaff_x22 + 0x100) = puVar20;
      *(undefined **)(unaff_x22 + 0x118) = puVar10;
      if (puVar10 == (undefined *)0x0) {
        _swift_bridgeObjectRetain(puVar20);
        FUN_1000fb4c4(unaff_x22 + 0x100,&DAT_100fcb738,&DAT_100c53fd0);
        FUN_100506088(unaff_x22 + 0x120,0x65736e6f70736572,0xee0073657079745f);
        FUN_1000fb4c4(unaff_x22 + 0x120,&DAT_100fcb738,&DAT_100c53fd0);
      }
      else {
        FUN_100011080(unaff_x22 + 0x100,unaff_x22 + 0xe0);
        _swift_bridgeObjectRetain(puVar20);
        puVar8 = puVar11;
        _swift_isUniquelyReferenced_nonNull_native(puVar11);
        FUN_1004b5054(unaff_x22 + 0xe0,0x65736e6f70736572,0xee0073657079745f,puVar8);
        *(undefined **)(unaff_x22 + 0x1c0) = puVar11;
      }
    }
    if (cVar3 == '\0') {
      UVar19.unknown = &DAT_100fcb488;
      FUN_1000f7830(&DAT_100fcb488,&DAT_100c504c0);
      _swift_allocObject();
      *(undefined8 *)(UVar19.unknown + 0x18) = 2;
      *(undefined8 *)(UVar19.unknown + 0x10) = 1;
      SVar28 = Foundation::URL::get_absoluteString(UVar19);
      *(String *)(UVar19.unknown + 0x20) = SVar28;
      *(undefined **)(unaff_x22 + 0x160) = UVar19.unknown;
      *(undefined **)(unaff_x22 + 0x178) = puVar10;
      if (puVar10 == (undefined *)0x0) {
        FUN_1000fb4c4(unaff_x22 + 0x160,&DAT_100fcb738,&DAT_100c53fd0);
        FUN_100506088(unaff_x22 + 0x180,0x7463657269646572,0xed0000736972755f);
        FUN_1000fb4c4(unaff_x22 + 0x180,&DAT_100fcb738,&DAT_100c53fd0);
      }
      else {
        FUN_100011080(unaff_x22 + 0x160,unaff_x22 + 0x140);
        uVar21 = *(undefined8 *)(unaff_x22 + 0x1c0);
        uVar18 = uVar21;
        _swift_isUniquelyReferenced_nonNull_native(uVar21);
        FUN_1004b5054(unaff_x22 + 0x140,0x7463657269646572,0xed0000736972755f,uVar18);
        *(undefined8 *)(unaff_x22 + 0x1c0) = uVar21;
      }
    }
    uVar18 = *(undefined8 *)(unaff_x22 + 0x1c0);
    *(undefined8 *)(unaff_x22 + 0x238) = uVar18;
    pNVar12 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
    *(undefined8 *)(unaff_x22 + 0x1c8) = 0;
    UNRECOVERED_JUMPTABLE.unknown =
         (undefined *)
         NSJSONSerialization::dataWithJSONObject_options_error_
                   (&_OBJC_CLASS___NSJSONSerialization,pNVar12,0,unaff_x22 + 0x1c8);
    if (UNRECOVERED_JUMPTABLE.unknown != (undefined *)0x0) {
      pUVar22 = *(URLRequest **)(unaff_x22 + 0x200);
      uVar18 = extraout_x1;
      UNRECOVERED_JUMPTABLE =
           Foundation::Data::__unconditionallyBridgeFromObjectiveC(UNRECOVERED_JUMPTABLE);
      *(undefined **)(unaff_x22 + 0x240) = UNRECOVERED_JUMPTABLE.unknown;
      *(undefined8 *)(unaff_x22 + 0x248) = uVar18;
      FUN_1001037b4(UNRECOVERED_JUMPTABLE.unknown,uVar18);
      Foundation::URLRequest::_set_httpBody(pUVar22);
      plVar13 = (long *)(ulong)*(uint *)(PTR__data_100ea7940 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x250) = plVar13;
      *plVar13 = unaff_x22;
      plVar13[1] = (long)FUN_1004b9918;
      if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar15) {
        tVar29 = (extension_Foundation)::__C::NSURLSession::_data
                           ((URLRequest_conflict)*(undefined **)(unaff_x22 + 0x200));
        return tVar29;
      }
      goto LAB_1004b9914;
    }
    uVar24 = *(undefined8 *)(unaff_x22 + 0x228);
    lVar26 = *(long *)(unaff_x22 + 0x218);
    pNVar7 = *(NSURLResponse **)(unaff_x22 + 0x210);
    lVar16 = *(long *)(unaff_x22 + 0x1f8);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x200);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x1f0);
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    _swift_bridgeObjectRelease(puVar20);
    (**(code **)(lVar16 + 8))(uVar21,uVar23);
    (**(code **)(lVar26 + 8))(uVar24,pNVar7);
    _swift_bridgeObjectRelease(uVar18);
LAB_1004b9308:
    uVar21 = *(undefined8 *)(unaff_x22 + 0x220);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x208);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x200);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x228));
    _swift_task_dealloc(uVar21);
    _swift_task_dealloc(uVar18);
    _swift_task_dealloc(uVar24);
    UNRECOVERED_JUMPTABLE.unknown = *(undefined **)(unaff_x22 + 8);
    lVar16 = *(long *)PTR____stack_chk_guard_100ea82f0;
    param_2 = pNVar7;
  }
  else {
LAB_1004b9224:
    uVar18 = *(undefined8 *)(unaff_x22 + 0x228);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x220);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x208);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x200);
    puVar17 = *(undefined8 **)(unaff_x22 + 0x1d0);
    *(undefined1 *)(puVar17 + 0xc) = 0;
    puVar17[9] = 0;
    puVar17[8] = 0;
    puVar17[0xb] = 0;
    puVar17[10] = 0;
    puVar17[5] = 0;
    puVar17[4] = 0;
    puVar17[7] = 0;
    puVar17[6] = 0;
    puVar17[1] = 0;
    *puVar17 = 0;
    puVar17[3] = 0;
    puVar17[2] = 0;
    _swift_task_dealloc(uVar18);
    _swift_task_dealloc(uVar24);
    _swift_task_dealloc(uVar21);
    _swift_task_dealloc(uVar23);
    UNRECOVERED_JUMPTABLE.unknown = *(undefined **)(unaff_x22 + 8);
    lVar16 = *(long *)PTR____stack_chk_guard_100ea82f0;
  }
  if (lVar16 == lVar15) {
                    /* WARNING: Could not recover jumptable at 0x0001004b9370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)UNRECOVERED_JUMPTABLE.unknown)();
    tVar29._ = param_2;
    tVar29._.unknown = UNRECOVERED_JUMPTABLE.unknown;
    return tVar29;
  }
LAB_1004b9914:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1004b9918 | FUN_1004b9918 */

void FUN_1004b9918(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar3 = *unaff_x22;
  *(undefined8 *)(lVar3 + 600) = param_1;
  *(undefined8 *)(lVar3 + 0x260) = param_2;
  *(undefined8 *)(lVar3 + 0x268) = param_3;
  *(long *)(lVar3 + 0x270) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x250));
  if (unaff_x20 == 0) {
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar2) goto LAB_1004b99c4;
    pcVar1 = FUN_1004b99c8;
  }
  else {
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar2) {
LAB_1004b99c4:
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    pcVar1 = FUN_1004b9f70;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1004b99c8 | FUN_1004b99c8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1004b99c8(void)

{
  byte bVar1;
  undefined1 uVar2;
  ID IVar3;
  JSONDecoder *pJVar4;
  ID *pIVar5;
  ID *pIVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar10;
  undefined8 uVar11;
  ID IVar12;
  long lVar13;
  long lVar14;
  long unaff_x22;
  ID IVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 local_a0;
  undefined8 local_90;
  long local_88;
  undefined8 local_80;
  undefined8 local_78;
  ID local_70;
  
  lVar7 = *(long *)PTR____stack_chk_guard_100ea82f0;
  IVar12 = *(ID *)(unaff_x22 + 0x268);
  _swift_dynamicCastObjCClass(IVar12,&_OBJC_CLASS___NSHTTPURLResponse);
  if (IVar12 == 0) {
    local_70 = 0;
LAB_1004b9ba8:
    lVar13 = *(long *)(unaff_x22 + 0x270);
    pJVar4 = Foundation::JSONDecoder::typeMetadataAccessor();
    _swift_allocObject(pJVar4,*(undefined4 *)(pJVar4 + 0x30),*(undefined2 *)(pJVar4 + 0x34));
    pJVar4 = Foundation::JSONDecoder::init(pJVar4);
    FUN_1004ba3bc();
    Foundation::JSONDecoder::_decode(pJVar4,(Data)0x100eda350);
    if (lVar13 == 0) {
      _swift_release();
      IVar12 = *(ID *)(unaff_x22 + 0x1a0);
      IVar3 = *(ID *)(unaff_x22 + 0x1a8);
    }
    else {
      _swift_errorRelease(lVar13);
      _swift_release();
      IVar12 = 0;
      IVar3 = 0;
    }
    uVar11 = *(undefined8 *)(unaff_x22 + 0x260);
    uVar17 = *(undefined8 *)(unaff_x22 + 600);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x248);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x240);
    IVar15 = *(undefined8 *)(unaff_x22 + 0x238);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x230);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x228);
    lVar14 = *(long *)(unaff_x22 + 0x218);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x210);
    lVar13 = *(long *)(unaff_x22 + 0x1f8);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x200);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x1f0);
    FUN_1004a3fb4();
    _swift_allocError(&DAT_100ed9e90,pJVar4,0,0);
    *(ID *)pJVar4 = local_70;
    *(ID *)(pJVar4 + 8) = IVar12;
    *(ID *)(pJVar4 + 0x10) = IVar3;
    *(ID *)(pJVar4 + 0x18) = 0;
    pJVar4[0x20] = (JSONDecoder)0x0;
    _swift_willThrow();
    FUN_10003bf2c(uVar17,uVar11);
    FUN_10003bf2c(uVar20,uVar18);
    _swift_bridgeObjectRelease(uVar9);
    (**(code **)(lVar13 + 8))(uVar8,uVar21);
    (**(code **)(lVar14 + 8))(uVar16,uVar19);
  }
  else {
    IVar3 = objc_stub::statusCode(IVar12);
    if (IVar3 - 400 < 100) {
      lVar13 = *(long *)(unaff_x22 + 0x270);
      pJVar4 = Foundation::JSONDecoder::typeMetadataAccessor();
      _swift_allocObject(pJVar4,*(undefined4 *)(pJVar4 + 0x30),*(undefined2 *)(pJVar4 + 0x34));
      pJVar4 = Foundation::JSONDecoder::init(pJVar4);
      FUN_1004ba3bc();
      Foundation::JSONDecoder::_decode(pJVar4,(Data)0x100eda350);
      if (lVar13 == 0) {
        _swift_release(pJVar4);
        IVar3 = *(ID *)(unaff_x22 + 0x1b0);
        IVar15 = *(ID *)(unaff_x22 + 0x1b8);
      }
      else {
        _swift_errorRelease(lVar13);
        _swift_release(pJVar4);
        IVar3 = 0;
        IVar15 = 0;
      }
      uVar19 = *(undefined8 *)(unaff_x22 + 0x260);
      uVar21 = *(undefined8 *)(unaff_x22 + 600);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x248);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x240);
      local_70 = *(undefined8 *)(unaff_x22 + 0x238);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x230);
      local_78 = *(undefined8 *)(unaff_x22 + 0x228);
      local_88 = *(long *)(unaff_x22 + 0x218);
      local_80 = *(undefined8 *)(unaff_x22 + 0x210);
      lVar13 = *(long *)(unaff_x22 + 0x1f8);
      local_90 = *(undefined8 *)(unaff_x22 + 0x200);
      local_a0 = *(undefined8 *)(unaff_x22 + 0x1f0);
      pIVar5 = (ID *)objc_stub::statusCode(IVar12);
      pIVar6 = pIVar5;
      FUN_1004a3fb4();
      _swift_allocError(&DAT_100ed9e90,pIVar6,0,0);
      *pIVar6 = (ID)pIVar5;
      pIVar6[1] = IVar3;
      pIVar6[2] = IVar15;
      pIVar6[3] = 0;
      *(undefined1 *)(pIVar6 + 4) = 0;
      _swift_willThrow();
      FUN_10003bf2c(uVar21,uVar19);
      FUN_10003bf2c(uVar16,uVar8);
      _swift_bridgeObjectRelease(uVar9);
      UNRECOVERED_JUMPTABLE = *(code **)(lVar13 + 8);
    }
    else {
      IVar3 = objc_stub::statusCode(IVar12);
      if (99 < IVar3 - 200) {
        local_70 = objc_stub::statusCode(IVar12);
        goto LAB_1004b9ba8;
      }
      lVar14 = *(long *)(unaff_x22 + 0x270);
      pJVar4 = Foundation::JSONDecoder::typeMetadataAccessor();
      _swift_allocObject(pJVar4,*(undefined4 *)(pJVar4 + 0x30),*(undefined2 *)(pJVar4 + 0x34));
      pJVar4 = Foundation::JSONDecoder::init(pJVar4);
      FUN_1004ba3fc();
      Foundation::JSONDecoder::_decode(pJVar4,(Data)0x100eda2c8);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x260);
      uVar9 = *(undefined8 *)(unaff_x22 + 600);
      uVar19 = *(undefined8 *)(unaff_x22 + 0x248);
      uVar21 = *(undefined8 *)(unaff_x22 + 0x240);
      local_70 = *(undefined8 *)(unaff_x22 + 0x238);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x230);
      local_78 = *(undefined8 *)(unaff_x22 + 0x228);
      local_88 = *(long *)(unaff_x22 + 0x218);
      local_80 = *(undefined8 *)(unaff_x22 + 0x210);
      lVar13 = *(long *)(unaff_x22 + 0x1f8);
      local_90 = *(undefined8 *)(unaff_x22 + 0x200);
      local_a0 = *(undefined8 *)(unaff_x22 + 0x1f0);
      if (lVar14 == 0) {
        _swift_release(pJVar4);
        uVar28 = *(undefined8 *)(unaff_x22 + 0x58);
        uVar27 = *(undefined8 *)(unaff_x22 + 0x50);
        *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(unaff_x22 + 0x58);
        *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x50);
        *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x68);
        *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x60);
        uVar25 = *(undefined8 *)(unaff_x22 + 0x68);
        uVar23 = *(undefined8 *)(unaff_x22 + 0x60);
        *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x78);
        *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x70);
        *(undefined8 *)(unaff_x22 + 0x41) = *(undefined8 *)(unaff_x22 + 0x81);
        *(undefined8 *)(unaff_x22 + 0x39) = *(undefined8 *)(unaff_x22 + 0x79);
        uVar11 = *(undefined8 *)(unaff_x22 + 0x80);
        bVar1 = *(byte *)(unaff_x22 + 0x88);
        uVar20 = *(undefined8 *)(unaff_x22 + 0x78);
        uVar17 = *(undefined8 *)(unaff_x22 + 0x70);
        FUN_1004ba588(unaff_x22 + 0xb8,unaff_x22 + 0x10,unaff_x22 + 0x90);
        uVar2 = *(undefined1 *)(unaff_x22 + 0xd8);
        uVar26 = *(undefined8 *)(unaff_x22 + 0xc0);
        uVar24 = *(undefined8 *)(unaff_x22 + 0xb8);
        uVar22 = *(undefined8 *)(unaff_x22 + 0xd0);
        uVar18 = *(undefined8 *)(unaff_x22 + 200);
        FUN_10003bf2c(uVar9,uVar16);
        FUN_10003bf2c(uVar21,uVar19);
        _swift_bridgeObjectRelease(uVar8);
        (**(code **)(lVar13 + 8))(local_90,local_a0);
        (**(code **)(local_88 + 8))(local_78,local_80);
        _swift_bridgeObjectRelease(local_70);
        uVar8 = *(undefined8 *)(unaff_x22 + 0x228);
        uVar16 = *(undefined8 *)(unaff_x22 + 0x220);
        uVar9 = *(undefined8 *)(unaff_x22 + 0x208);
        uVar19 = *(undefined8 *)(unaff_x22 + 0x200);
        puVar10 = *(undefined8 **)(unaff_x22 + 0x1d0);
        puVar10[3] = uVar25;
        puVar10[2] = uVar23;
        puVar10[5] = uVar20;
        puVar10[4] = uVar17;
        puVar10[1] = uVar28;
        *puVar10 = uVar27;
        puVar10[6] = uVar11;
        puVar10[7] = (ulong)bVar1;
        puVar10[9] = uVar26;
        puVar10[8] = uVar24;
        puVar10[0xb] = uVar22;
        puVar10[10] = uVar18;
        *(undefined1 *)(puVar10 + 0xc) = uVar2;
        _swift_task_dealloc(uVar8);
        _swift_task_dealloc(uVar16);
        _swift_task_dealloc(uVar9);
        _swift_task_dealloc(uVar19);
        UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
        lVar13 = *(long *)PTR____stack_chk_guard_100ea82f0;
        goto joined_r0x0001004b9f60;
      }
      FUN_10003bf2c(uVar9,uVar16);
      _swift_release(pJVar4);
      FUN_10003bf2c(uVar21,uVar19);
      _swift_bridgeObjectRelease(uVar8);
      UNRECOVERED_JUMPTABLE = *(code **)(lVar13 + 8);
    }
    (*UNRECOVERED_JUMPTABLE)(local_90,local_a0);
    (**(code **)(local_88 + 8))(local_78,local_80);
    IVar15 = local_70;
  }
  _swift_bridgeObjectRelease(IVar15);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x220);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x208);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x200);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x228));
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar9);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  lVar13 = *(long *)PTR____stack_chk_guard_100ea82f0;
joined_r0x0001004b9f60:
  if (lVar13 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x0001004b9e44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1004b9f70 | FUN_1004b9f70 */

void FUN_1004b9f70(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar5 = *(undefined8 *)(unaff_x22 + 0x238);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x230);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x228);
  lVar9 = *(long *)(unaff_x22 + 0x218);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x210);
  lVar1 = *(long *)(unaff_x22 + 0x1f8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x200);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x1f0);
  FUN_10003bf2c(*(undefined8 *)(unaff_x22 + 0x240),*(undefined8 *)(unaff_x22 + 0x248));
  _swift_bridgeObjectRelease(uVar3);
  (**(code **)(lVar1 + 8))(uVar4,uVar8);
  (**(code **)(lVar9 + 8))(uVar6,uVar7);
  _swift_bridgeObjectRelease(uVar5);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x220);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x208);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x200);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x228));
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar5);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar2) {
                    /* WARNING: Could not recover jumptable at 0x0001004ba064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1004ba06c | FUN_1004ba06c */

bool FUN_1004ba06c(void)

{
  ulong uVar1;
  bool bVar2;
  URLComponents UVar3;
  URL UVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined *puVar8;
  _StringGuts _Var9;
  undefined *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined1 *puVar11;
  long lVar12;
  undefined1 *puVar13;
  long lVar14;
  long lVar15;
  String SVar16;
  URLComponents UVar7;
  
  puVar8 = &DAT_100fcb380;
  FUN_1000f7830(&DAT_100fcb380,&DAT_100c504a0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &stack0xffffffffffffffa0 + -extraout_x8;
  UVar3 = Foundation::URLComponents::typeMetadataAccessor();
  lVar14 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar14 + 0x40));
  puVar11 = puVar6 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar8 = &DAT_100fcb378;
  FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar13 = puVar11 + -extraout_x8_01;
  UVar4 = Foundation::URL::typeMetadataAccessor();
  lVar15 = *(long *)(UVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar15 + 0x40));
  lVar12 = (long)puVar13 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  Foundation::URL::_init();
  puVar5 = puVar13;
  (**(code **)(lVar15 + 0x30))(puVar13,1,UVar4.unknown);
  if ((int)puVar5 == 1) {
    puVar8 = &DAT_100fcb378;
    puVar10 = &DAT_100c50170;
    puVar6 = puVar13;
LAB_1004ba220:
    FUN_1000fb4c4(puVar6,puVar8,puVar10);
    return false;
  }
  (**(code **)(lVar15 + 0x20))(lVar12,puVar13,UVar4.unknown);
  Foundation::URLComponents::_init(SUB81(lVar12,0));
  puVar5 = puVar6;
  (**(code **)(lVar14 + 0x30))(puVar6,1,UVar3.unknown);
  if ((int)puVar5 == 1) {
    (**(code **)(lVar15 + 8))(lVar12,UVar4.unknown);
    puVar8 = &DAT_100fcb380;
    puVar10 = &DAT_100c504a0;
    goto LAB_1004ba220;
  }
  UVar7.unknown = puVar11;
  (**(code **)(lVar14 + 0x20))(puVar11,puVar6,UVar3.unknown);
  Foundation::URLComponents::_get_scheme(UVar7);
  if (puVar6 != (undefined1 *)0x0) {
    SVar16.bridgeObject = puVar6;
    SVar16.str = UVar7.unknown;
    SVar16 = Swift::String::lowercased(SVar16);
    UVar7.unknown = SVar16.bridgeObject;
    _swift_bridgeObjectRelease(puVar6);
    if ((SVar16.str == (undefined *)0x7370747468) && (UVar7.unknown == &DAT_e500000000000000)) {
      _swift_bridgeObjectRelease();
    }
    else {
      bVar2 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)SVar16.str,(_StringGuts)UVar7.unknown,
                         (_StringComparisonResult)0x68);
      _swift_bridgeObjectRelease();
      if (!bVar2) goto LAB_1004ba2fc;
    }
    SVar16 = Foundation::URLComponents::get_path(UVar7);
    puVar8 = SVar16.bridgeObject;
    UVar7.unknown = puVar8;
    _swift_bridgeObjectRelease();
    uVar1 = (ulong)SVar16.str & 0xffffffffffff;
    if (((ulong)puVar8 & 0x2000000000000000) != 0) {
      uVar1 = (ulong)puVar8 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      SVar16 = Foundation::URLComponents::get_path(UVar7);
      _Var9.unknown = SVar16.bridgeObject;
      if ((SVar16.str != (undefined *)0x2f) || (_Var9.unknown != (undefined *)0xe100000000000000)) {
        bVar2 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)SVar16.str,_Var9,(_StringComparisonResult)0x2f);
        _swift_bridgeObjectRelease(_Var9.unknown);
        bVar2 = !bVar2;
        goto LAB_1004ba300;
      }
      _swift_bridgeObjectRelease(0xe100000000000000);
    }
  }
LAB_1004ba2fc:
  bVar2 = false;
LAB_1004ba300:
  (**(code **)(lVar14 + 8))(puVar11,UVar3.unknown);
  (**(code **)(lVar15 + 8))(lVar12,UVar4.unknown);
  return bVar2;
}



/* Address: 0x1004ba36c | FUN_1004ba36c */

undefined8 FUN_1004ba36c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fcb378;
  FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1004ba3bc | FUN_1004ba3bc */

void FUN_1004ba3bc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcb740 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c514b0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c514b0,&DAT_100eda350);
  DAT_100fcb740 = pTVar1;
  return;
}



/* Address: 0x1004ba3fc | FUN_1004ba3fc */

void FUN_1004ba3fc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcb748 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c51488;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c51488,&DAT_100eda2c8);
  DAT_100fcb748 = pTVar1;
  return;
}



/* Address: 0x1004ba43c | FUN_1004ba43c */

undefined8 FUN_1004ba43c(void)

{
  ulong uVar1;
  undefined *puVar2;
  URL UVar3;
  undefined1 *puVar4;
  URL UVar5;
  undefined1 *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar7;
  long lVar8;
  
  puVar2 = &DAT_100fcb378;
  FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &stack0xffffffffffffffc0 + -extraout_x8;
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar8 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar8 + 0x40));
  puVar7 = puVar6 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  Foundation::URL::_init();
  puVar4 = puVar6;
  (**(code **)(lVar8 + 0x30))(puVar6,1,UVar3.unknown);
  if ((int)puVar4 == 1) {
    FUN_1000fb4c4(puVar6,&DAT_100fcb378,&DAT_100c50170);
  }
  else {
    UVar5.unknown = puVar7;
    (**(code **)(lVar8 + 0x20))(puVar7,puVar6,UVar3.unknown);
    Foundation::URL::_get_scheme(UVar5);
    (**(code **)(lVar8 + 8))(puVar7,UVar3.unknown);
    if (puVar6 != (undefined1 *)0x0) {
      _swift_bridgeObjectRelease(puVar6);
      uVar1 = (ulong)UVar5.unknown & 0xffffffffffff;
      if (((ulong)puVar6 & 0x2000000000000000) != 0) {
        uVar1 = (ulong)puVar6 >> 0x38 & 0xf;
      }
      if (uVar1 != 0) {
        return 1;
      }
    }
  }
  return 0;
}



/* Address: 0x1004ba588 | FUN_1004ba588 */

void FUN_1004ba588(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar5 = *(undefined8 *)(param_3 + 0x10);
  lVar2 = *(long *)(param_3 + 0x18);
  bVar1 = *(byte *)(param_3 + 0x20);
  if (bVar1 < 2) {
    lVar4 = param_2[3];
    if (lVar4 == 0) {
      _swift_bridgeObjectRetain(lVar2);
    }
    else {
      uVar5 = param_2[2];
      lVar2 = lVar4;
    }
    uVar6 = *param_2;
    uVar3 = param_2[1];
    _swift_bridgeObjectRetain(lVar4);
  }
  else if (bVar1 == 2) {
    uVar5 = 0;
    lVar2 = 0;
    uVar6 = *param_2;
    uVar3 = param_2[1];
  }
  else {
    uVar6 = *param_2;
    uVar3 = param_2[1];
    _swift_retain(lVar2);
  }
  _swift_bridgeObjectRetain(uVar3);
  *param_1 = uVar6;
  param_1[1] = uVar3;
  param_1[2] = uVar5;
  param_1[3] = lVar2;
  *(byte *)(param_1 + 4) = bVar1;
  return;
}



/* Address: 0x1004ba638 | FUN_1004ba638 */

void FUN_1004ba638(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  URL UVar4;
  code *pcVar5;
  
  *param_1 = param_2;
  lVar3 = 0;
  FUN_1004ba764();
  iVar2 = *(int *)(lVar3 + 0x14);
  UVar4 = Foundation::URL::typeMetadataAccessor();
  pcVar5 = *(code **)(*(long *)(UVar4.unknown + -8) + 0x20);
  (*pcVar5)((long)param_1 + (long)iVar2,param_3,UVar4.unknown);
  (*pcVar5)((long)param_1 + (long)*(int *)(lVar3 + 0x18),param_4,UVar4.unknown);
  FUN_1004ba778(param_5,(long)param_1 + (long)*(int *)(lVar3 + 0x1c));
  FUN_1004ba778(param_6,(long)param_1 + (long)*(int *)(lVar3 + 0x20));
  FUN_1004ba778(param_7,(long)param_1 + (long)*(int *)(lVar3 + 0x24));
  FUN_1004ba778(param_8,(long)param_1 + (long)*(int *)(lVar3 + 0x28));
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x2c));
  *puVar1 = param_9;
  puVar1[1] = param_10;
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x30)) = param_11;
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x34)) = param_12;
  return;
}



/* Address: 0x1004ba764 | FUN_1004ba764 */

void FUN_1004ba764(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100fcba60,&TargetStructDescriptor_100cb1fa8);
  return;
}



/* Address: 0x1004ba778 | FUN_1004ba778 */

undefined8 FUN_1004ba778(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fcb378;
  FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
  (**(code **)(*(long *)(puVar1 + -8) + 0x20))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1004ba7c8 | FUN_1004ba7c8 */

void FUN_1004ba7c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
  *(undefined8 *)(unaff_x22 + 0x50) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  _swift_task_switch(FUN_1004ba7e4,0,0);
  return;
}



/* Address: 0x1004ba7e4 | FUN_1004ba7e4 */

void FUN_1004ba7e4(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  int iVar1;
  int *piVar2;
  byte bVar3;
  undefined8 *puVar4;
  Data DVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  char *pcVar9;
  char *pcVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long unaff_x22;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  
  puVar4 = *(undefined8 **)(unaff_x22 + 0x50);
  DVar5.unknown = (undefined *)*puVar4;
  pcVar9 = (char *)puVar4[1];
  piVar2 = (int *)((String *)(puVar4 + 2))->str;
  uVar6 = puVar4[3];
  SVar14 = *(String *)(puVar4 + 2);
  bVar3 = *(byte *)(puVar4 + 4);
  if (bVar3 < 2) {
    if (bVar3 == 0) {
      _swift_bridgeObjectRetain(pcVar9);
      SVar13.bridgeObject = (void *)0xe100000000000000;
      SVar13.str = &DAT_0000003a;
      SVar15.bridgeObject = param_4;
      SVar15.str = param_3;
      Swift::String::append(SVar13,SVar15);
      SVar16.bridgeObject = param_4;
      SVar16.str = param_3;
      Swift::String::append(SVar14,SVar16);
      FUN_1004bac0c();
      pcVar10 = pcVar9;
      SVar14 = Foundation::Data::base64EncodedString((NSDataBase64EncodingOptions)0x0,DVar5);
      FUN_10003bf2c(DVar5.unknown,pcVar9);
      SVar17.bridgeObject = param_4;
      SVar17.str = pcVar10;
      Swift::String::append(SVar14,SVar17);
      _swift_bridgeObjectRelease(SVar14.bridgeObject);
      SVar14.bridgeObject = &DAT_e600000000000000;
      SVar14.str = (char *)0x206369736142;
      Foundation::URLRequest::_setValue(SVar14,(URLRequest_conflict)0x7a69726f68747541);
      _swift_bridgeObjectRelease(&DAT_e600000000000000);
    }
    else {
      puVar4 = *(undefined8 **)(unaff_x22 + 0x40);
      _swift_bridgeObjectRetain(pcVar9);
      _swift_bridgeObjectRetain(uVar6);
      uVar7 = *puVar4;
      _swift_isUniquelyReferenced_nonNull_native(uVar7);
      uVar11 = *puVar4;
      FUN_1004b4f30(DVar5.unknown,pcVar9,0x695f746e65696c63,0xe900000000000064,uVar7);
      *puVar4 = uVar11;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar7 = *puVar4;
      FUN_1004b4f30(piVar2,uVar6,0x735f746e65696c63,0xed00007465726365,uVar11);
      *puVar4 = uVar7;
    }
  }
  else {
    if (bVar3 != 2) {
      puVar4 = *(undefined8 **)(unaff_x22 + 0x40);
      _swift_bridgeObjectRetain(pcVar9);
      uVar6 = *puVar4;
      _swift_isUniquelyReferenced_nonNull_native(uVar6);
      uVar7 = *puVar4;
      FUN_1004b4f30(DVar5.unknown,pcVar9,0x695f746e65696c63,0xe900000000000064,uVar6);
      *puVar4 = uVar7;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar6 = *puVar4;
      FUN_1004b4f30(0xd000000000000036,0x8000000100daa700,0xd000000000000015,0x8000000100daa6e0,
                    uVar7);
      *puVar4 = uVar6;
      iVar1 = *piVar2;
      plVar8 = (long *)(ulong)(uint)piVar2[1];
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x58) = plVar8;
      *plVar8 = unaff_x22;
      plVar8[1] = (long)FUN_1004bab0c;
                    /* WARNING: Could not recover jumptable at 0x0001004bab08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)piVar2 + (long)iVar1))
                (*(undefined8 *)(unaff_x22 + 0x48),DVar5.unknown,pcVar9);
      return;
    }
    puVar12 = *(undefined8 **)(unaff_x22 + 0x40);
    FUN_1004b8ab4(puVar4,unaff_x22 + 0x10);
    uVar6 = *puVar12;
    _swift_isUniquelyReferenced_nonNull_native(uVar6);
    uVar7 = *puVar12;
    FUN_1004b4f30(DVar5.unknown,pcVar9,0x695f746e65696c63,0xe900000000000064,uVar6);
    *puVar12 = uVar7;
  }
                    /* WARNING: Could not recover jumptable at 0x0001004baa08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1004bab0c | FUN_1004bab0c */

void FUN_1004bab0c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  long *unaff_x22;
  long lVar1;
  long lVar2;
  
  lVar2 = *unaff_x22;
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x58));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001004bab58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
  *(undefined8 *)(lVar2 + 0x60) = param_2;
  *(undefined8 *)(lVar2 + 0x68) = param_1;
  _swift_task_switch(FUN_1004bab84,0,0);
  return;
}



/* Address: 0x1004bab84 | FUN_1004bab84 */

void FUN_1004bab84(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 *puVar5;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  puVar5 = *(undefined8 **)(unaff_x22 + 0x40);
  uVar3 = *puVar5;
  _swift_isUniquelyReferenced_nonNull_native(uVar3);
  uVar4 = *puVar5;
  FUN_1004b4f30(uVar2,uVar1,0xd000000000000010,0x8000000100daa740,uVar3);
  *puVar5 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x0001004bac08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1004bac0c | FUN_1004bac0c */

/* WARNING: Removing unreachable block (ram,0x0001004bb0ec) */
/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_1004bac0c(UTF8View param_1,undefined *param_2)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  __uint8 _Var3;
  Range<__int64> RVar4;
  undefined **ppuVar5;
  Index position;
  Index after;
  UnsafeBufferPointer<__int8> UVar6;
  undefined *puVar7;
  UnsafeBufferPointer<__int8> UVar8;
  undefined *puVar9;
  undefined6 *puVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined6 local_f0;
  undefined2 uStack_ea;
  undefined6 uStack_e8;
  undefined2 uStack_e2;
  undefined *local_e0;
  undefined *puStack_d8;
  undefined *local_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined6 local_a0;
  undefined2 uStack_9a;
  undefined6 uStack_98;
  undefined2 uStack_92;
  undefined **local_90;
  undefined8 local_88;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_f0 = SUB86(param_1.unknown,0);
  uStack_ea = (undefined2)((ulong)param_1.unknown >> 0x30);
  uStack_e8 = SUB86(param_2,0);
  uStack_e2 = (undefined2)((ulong)param_2 >> 0x30);
  local_e0 = param_1.unknown;
  puStack_d8 = param_2;
  _swift_bridgeObjectRetain(param_2);
  RVar4.unknown = &DAT_100fcbb18;
  FUN_1000f7830(&DAT_100fcbb18,&DAT_100c508d0);
  ppuVar5 = &local_d0;
  _swift_dynamicCast(ppuVar5,&local_f0,PTR___type_metadata_for_Swift_String_UTF8View_100eac1a0,
                     RVar4.unknown,6);
  if ((int)ppuVar5 != 0) {
    FUN_100076508(&local_d0,&local_a0);
    FUN_100004640(&local_a0,local_88);
    Foundation::ContiguousBytes::_withUnsafeBytes();
    FUN_100004594(&local_a0);
    UVar8.unknown = local_d0;
    puVar9 = puStack_c8;
    goto LAB_1004bb048;
  }
  local_b0 = 0;
  puStack_c8 = (undefined *)0x0;
  local_d0 = (undefined *)0x0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  after.cmsgPointer.unknown = (UnsafeMutablePointer)&DAT_100c508d8;
  FUN_1000fb4c4(&local_d0,&DAT_100fcbb20);
  if (((ulong)param_2 >> 0x3c & 1) == 0) {
    if (((ulong)param_2 >> 0x3d & 1) == 0) {
      if (((ulong)param_1.unknown >> 0x3c & 1) == 0) {
        puVar9 = param_2;
        UVar8 = Swift::_StringObject::get_sharedUTF8(param_1.unknown);
      }
      else {
        UVar8.unknown = (undefined *)(((ulong)param_2 & 0xfffffffffffffff) + 0x20);
        puVar9 = param_1.unknown & 0xffffffffffff;
      }
      puVar15 = (undefined *)0x0;
      if (UVar8.unknown != (undefined *)0x0) {
        puVar15 = puVar9 + UVar8.unknown;
      }
      FUN_10046be0c();
      puVar9 = puVar15;
    }
    else {
      puVar15 = (undefined *)((ulong)param_2 >> 0x38 & 0xf);
      puStack_c8 = (undefined *)((ulong)param_2 & 0xffffffffffffff);
      local_d0 = param_1.unknown;
      FUN_100464e0c(&local_a0,&local_d0);
      UVar8.unknown = (undefined *)CONCAT26(uStack_9a,local_a0);
      puVar9 = (undefined *)CONCAT26(uStack_92,uStack_98);
    }
    if ((ulong)puVar9 >> 0x3c < 0xf) goto LAB_1004bb048;
    puVar7 = param_1.unknown & 0xffffffffffff;
    if (((ulong)param_2 & 0x2000000000000000) != 0) {
      puVar7 = (undefined *)((ulong)param_2 >> 0x38 & 0xf);
    }
  }
  else {
    puVar15 = param_2;
    puVar7 = (undefined *)Swift::String::UTF8View::_foreignCount(param_1);
    UVar8.unknown = (undefined *)0x0;
    puVar9 = (undefined *)0xf000000000000000;
  }
  FUN_10046be70();
  local_90 = &local_e0;
  pcVar2 = FUN_10046c3e0;
  puVar10 = &local_a0;
  local_d0 = puVar7;
  puStack_c8 = puVar15;
  FUN_100464ed8();
  uVar12 = (uint)((ulong)puStack_c8 >> 0x20);
  uVar13 = uVar12 >> 0x1e;
  if (uVar12 >> 0x1e < 2) {
    if (uVar13 == 0) {
      puVar15 = (undefined *)((ulong)puStack_c8 >> 0x30 & 0xff);
    }
    else {
      iVar14 = (int)((ulong)local_d0 >> 0x20);
      if (SBORROW4(iVar14,(int)local_d0)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1004bb0e8);
        (*pcVar2)();
      }
      puVar15 = (undefined *)(long)(iVar14 - (int)local_d0);
    }
    if (RVar4.unknown == puVar15) goto LAB_1004bae30;
LAB_1004bae0c:
    if (uVar13 == 2) {
      uVar11 = *(ulong *)(local_d0 + 0x18);
    }
    else if (uVar13 == 1) {
      uVar11 = (long)local_d0 >> 0x20;
    }
    else {
      uVar11 = (ulong)puStack_c8 >> 0x30 & 0xff;
    }
LAB_1004bb024:
    if ((long)uVar11 < (long)RVar4.unknown) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1004bb0e0);
      (*pcVar2)();
    }
    Foundation::Data::_Representation::_replaceSubrange(RVar4,uVar11,(_Representation)0x0,0);
LAB_1004bb040:
    _swift_bridgeObjectRelease(puVar10);
    UVar8.unknown = local_d0;
    puVar9 = puStack_c8;
  }
  else {
    if (uVar13 == 2) {
      if (SBORROW8(*(long *)(local_d0 + 0x18),*(long *)(local_d0 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1004bb0e4);
        (*pcVar2)();
      }
      if (RVar4.unknown != (undefined *)(*(long *)(local_d0 + 0x18) - *(long *)(local_d0 + 0x10)))
      goto LAB_1004bae0c;
    }
    else if (RVar4.unknown != (undefined *)0x0) {
      uVar11 = 0;
      goto LAB_1004bb024;
    }
LAB_1004bae30:
    uVar11 = (ulong)pcVar2 & 0xffffffffffff;
    if (((ulong)puVar10 & 0x2000000000000000) != 0) {
      uVar11 = (ulong)puVar10 >> 0x38 & 0xf;
    }
    uStack_e8 = 0;
    local_f0 = 0;
    uStack_ea = 0;
    if (uVar11 * 4 - ((ulong)after.cmsgPointer.unknown >> 0xe) != 0) {
      uVar19 = 0;
      uVar12 = (uint)((ulong)pcVar2 >> 0x3b) & 1;
      if (((ulong)puVar10 & 0x1000000000000000) == 0) {
        uVar12 = 1;
      }
      uVar17 = 4L << uVar12;
      do {
        uVar18 = (ulong)after.cmsgPointer.unknown & 0xc;
        position.cmsgPointer.unknown = after.cmsgPointer.unknown;
        if (uVar18 == uVar17) {
          FUN_1000740a8(after.cmsgPointer.unknown,pcVar2,puVar10);
        }
        uVar16 = (ulong)position.cmsgPointer.unknown >> 0x10;
        if (uVar11 <= uVar16) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1004bb0ac);
          (*pcVar2)();
        }
        if (((ulong)puVar10 >> 0x3c & 1) == 0) {
          if (((ulong)puVar10 >> 0x3d & 1) != 0) {
            local_a0 = SUB86(pcVar2,0);
            uStack_9a = (undefined2)((ulong)pcVar2 >> 0x30);
            uStack_98 = (undefined6)((ulong)puVar10 & 0xffffffffffffff);
            uStack_92 = (undefined2)(((ulong)puVar10 & 0xffffffffffffff) >> 0x30);
            _Var3 = *(__uint8 *)((long)&local_a0 + uVar16);
            goto joined_r0x0001004baf24;
          }
          UVar6.unknown = (undefined *)(((ulong)puVar10 & 0xfffffffffffffff) + 0x20);
          if (((ulong)pcVar2 >> 0x3c & 1) == 0) {
            UVar6 = Swift::_StringObject::get_sharedUTF8((_StringObject)pcVar2);
          }
          _Var3 = UVar6.unknown[uVar16];
          if (uVar18 != uVar17) goto LAB_1004baee4;
LAB_1004baf28:
          FUN_1000740a8(after.cmsgPointer.unknown,pcVar2,puVar10);
          if (((ulong)puVar10 >> 0x3c & 1) != 0) goto LAB_1004baf40;
LAB_1004baee8:
          after.cmsgPointer.unknown =
               (UnsafeMutablePointer)
               (((ulong)after.cmsgPointer.unknown & 0xffffffffffff0000) + 0x10004);
        }
        else {
          _Var3 = Swift::String::UTF8View::_foreignSubscript(position,(UTF8View)pcVar2);
joined_r0x0001004baf24:
          if (uVar18 == uVar17) goto LAB_1004baf28;
LAB_1004baee4:
          if (((ulong)puVar10 >> 0x3c & 1) == 0) goto LAB_1004baee8;
LAB_1004baf40:
          if (uVar11 <= (ulong)after.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1004bb0b4);
            (*pcVar2)();
          }
          after = Swift::String::UTF8View::_foreignIndex(after,(UTF8View)pcVar2);
        }
        *(__uint8 *)((long)&local_f0 + (uVar19 & 0xff)) = _Var3;
        uVar12 = ((uint)uVar19 & 0xff) + 1;
        uVar19 = (ulong)uVar12;
        if ((uVar12 & 0xffffff00) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1004bb0b0);
          (*pcVar2)();
        }
        if ((uVar12 & 0xff) == 0xe) {
          local_a0 = local_f0;
          uStack_9a = uStack_ea;
          uStack_98 = uStack_e8;
          Foundation::Data::_Representation::append
                    ((UnsafeRawBufferPointer)&local_a0,(_Representation)((char)&local_a0 + 0xe));
          uVar19 = 0;
        }
      } while (uVar11 * 4 - ((ulong)after.cmsgPointer.unknown >> 0xe) != 0);
      if ((uVar19 & 0xff) != 0) {
        local_a0 = local_f0;
        uStack_9a = uStack_ea;
        uStack_98 = uStack_e8;
        Foundation::Data::_Representation::append
                  ((UnsafeRawBufferPointer)&local_a0,
                   (_Representation)((char)&local_a0 + (char)uVar19));
        FUN_10003bf18(UVar8.unknown,puVar9);
        goto LAB_1004bb040;
      }
    }
    _swift_bridgeObjectRelease(puVar10);
    FUN_10003bf18(UVar8.unknown,puVar9);
    UVar8.unknown = local_d0;
    puVar9 = puStack_c8;
  }
LAB_1004bb048:
  puStack_c8 = puVar9;
  local_d0 = UVar8.unknown;
  auVar1._8_8_ = puStack_c8;
  auVar1._0_8_ = local_d0;
  FUN_1001037b4(local_d0,puStack_c8);
  _swift_bridgeObjectRelease(param_2);
  FUN_10003bf2c(local_d0,puStack_c8);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
    return auVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1004bb0f8 | FUN_1004bb0f8 */

undefined1  [16]
FUN_1004bb0f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *local_88 [3];
  undefined *local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  
  puVar2 = &DAT_100fcbb08;
  FUN_1000f7830(&DAT_100fcbb08,&DAT_100c508c8);
  puVar3 = &DAT_100fcbb10;
  local_70 = puVar2;
  FUN_100134584(&DAT_100fcbb10,&DAT_100fcbb08,&DAT_100c508c8,
                PTR__Foundation__Swift__ArraySlice<undefined>_>Foundation__ContiguousBytes_100ea7b48
               );
  puVar4 = &DAT_100ed9bf0;
  local_68 = puVar3;
  _swift_allocObject(&DAT_100ed9bf0,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = param_1;
  *(undefined8 *)(puVar4 + 0x18) = param_2;
  *(undefined8 *)(puVar4 + 0x20) = param_3;
  *(undefined8 *)(puVar4 + 0x28) = param_4;
  ppuVar5 = local_88;
  local_88[0] = puVar4;
  FUN_100004640(ppuVar5,puVar2);
  puVar2 = ppuVar5[2];
  if (!SBORROW8((ulong)ppuVar5[3] >> 1,(long)puVar2)) {
    FUN_100441844(local_60,ppuVar5[1] + (long)puVar2,
                  ppuVar5[1] + (long)puVar2 + (((ulong)ppuVar5[3] >> 1) - (long)puVar2));
    FUN_100004594(local_88);
    return local_60;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1004bb1e8);
  (*pcVar1)();
}



/* Address: 0x1004bb1e8 | FUN_1004bb1e8 */

uint FUN_1004bb1e8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 local_50;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 local_20;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  local_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  local_50 = *(undefined1 *)(param_1 + 4);
  uStack_38 = param_2[1];
  local_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  local_20 = *(undefined1 *)(param_2 + 4);
  FUN_1004bca5c(&local_70,&local_40);
  return uVar1 & 1;
}



/* Address: 0x1004bb230 | thunk_FUN_1004bca5c */

void thunk_FUN_1004bca5c(void)

{
  FUN_1004bca5c();
  return;
}



/* Address: 0x1004bb234 | FUN_1004bb234 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001004bb270 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

bool FUN_1004bb234(undefined8 param_1,undefined8 param_2)

{
  __int64 _Var1;
  
  FUN_1000f7830(&DAT_100fcb810,&DAT_100c51eb0);
  _swift_initStaticObject();
  _Var1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  return _Var1 != 0;
}



/* Address: 0x1004bb294 | FUN_1004bb294 */

undefined1  [16] FUN_1004bb294(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &DAT_e500000000000000;
  auVar1._0_8_ = 0x3635325345;
  return auVar1;
}



/* Address: 0x1004bb2a8 | FUN_1004bb2a8 */

void FUN_1004bb2a8(void)

{
  Hasher into;
  String SVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(0);
  into.unknown = auStack_68;
  SVar1.bridgeObject = &DAT_e500000000000000;
  SVar1.str = (char *)0x3635325345;
  Swift::String::hash(into,SVar1);
  Swift::Hasher::_finalize(into);
  return;
}


