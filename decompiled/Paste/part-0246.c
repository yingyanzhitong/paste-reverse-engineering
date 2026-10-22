/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1002f98e8 | FUN_1002f98e8 */

void FUN_1002f98e8(undefined8 param_1,undefined8 param_2)

{
  FUN_1002f9910(param_1,param_2,&DAT_100fbd198,&DAT_100c3e4d0);
  return;
}



/* Address: 0x1002f98fc | FUN_1002f98fc */

void FUN_1002f98fc(undefined8 param_1,undefined8 param_2)

{
  FUN_1002f9910(param_1,param_2,&DAT_100fbd190,&DAT_100c3e4c8);
  return;
}



/* Address: 0x1002f9910 | FUN_1002f9910 */

void FUN_1002f9910(long param_1,bool param_2,_DictionaryStorage *param_3,undefined8 param_4)

{
  __int64 capacity;
  undefined1 uVar1;
  code *pcVar2;
  __RawDictionaryStorage *p_Var3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *unaff_x20;
  __RawDictionaryStorage *original;
  __RawDictionaryStorage *p_Var7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  FUN_1000037f0(param_3,param_4);
  p_Var3 = original;
  Swift::_DictionaryStorage::_resize(param_3,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_1002f9a6c:
    _swift_release(original);
    *unaff_x20 = p_Var3;
    return;
  }
  p_Var7 = original + 0x40;
  uVar6 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar10 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar10 = ~(-1L << (uVar6 & 0x3f));
  }
  uVar10 = uVar10 & *(ulong *)p_Var7;
  lVar5 = 0;
  do {
    if (uVar10 == 0) {
      do {
        lVar9 = lVar5 + 1;
        if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1002f9a98);
          (*pcVar2)();
        }
        if ((long)(uVar6 + 0x3f >> 6) <= lVar9) {
          if ((param_2 & 1U) != 0) {
            uVar10 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
            if (((byte)original[0x20] & 0x3f) < 6) {
              *(long *)p_Var7 = -1L << (uVar10 & 0x3f);
            }
            else {
              _bzero(p_Var7,uVar10 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(original + 0x10) = 0;
          }
          goto LAB_1002f9a6c;
        }
        uVar10 = *(ulong *)(p_Var7 + lVar9 * 8);
        lVar5 = lVar5 + 1;
      } while (uVar10 == 0);
      uVar4 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      uVar4 = uVar4 >> 0x20 | uVar4 << 0x20;
      uVar10 = uVar10 - 1 & uVar10;
    }
    else {
      uVar4 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      uVar4 = uVar4 >> 0x20 | uVar4 << 0x20;
      uVar10 = uVar10 - 1 & uVar10;
      lVar9 = lVar5;
    }
    uVar4 = LZCOUNT(uVar4) | lVar9 << 6;
    uVar1 = *(undefined1 *)(*(long *)(original + 0x30) + uVar4);
    uVar8 = *(undefined8 *)(*(long *)(original + 0x38) + uVar4 * 8);
    if ((param_2 & 1U) == 0) {
      _swift_bridgeObjectRetain(uVar8);
    }
    FUN_1002fa02c(uVar1,uVar8,p_Var3);
    lVar5 = lVar9;
  } while( true );
}



/* Address: 0x1002f9a98 | FUN_1002f9a98 */

void FUN_1002f9a98(long param_1,bool param_2)

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
  this = (_DictionaryStorage *)&DAT_100fbd180;
  FUN_1000037f0(&DAT_100fbd180,&DAT_100c3e4b8);
  p_Var8 = original;
  Swift::_DictionaryStorage::_resize(this,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_1002f9d20:
    _swift_release(original);
LAB_1002f9d28:
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
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1002f9d50);
          (*pcVar7)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar17) {
          if ((param_2 & 1U) == 0) {
            _swift_release(original);
            goto LAB_1002f9d28;
          }
          uVar15 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          if (((byte)original[0x20] & 0x3f) < 6) {
            *(long *)p_Var16 = -1L << (uVar15 & 0x3f);
          }
          else {
            _bzero(p_Var16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_1002f9d20;
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
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1002f9d54);
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



/* Address: 0x1002f9d54 | FUN_1002f9d54 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002f9d54(long param_1,bool param_2)

{
  bool bVar1;
  code *pcVar2;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var3;
  Hasher into;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *unaff_x20;
  __int64 _Var10;
  ulong uVar11;
  __RawDictionaryStorage *p_Var12;
  __RawDictionaryStorage *original;
  undefined8 uVar13;
  long lVar14;
  String SVar15;
  undefined1 auStack_c8 [72];
  undefined1 auStack_80 [32];
  
  original = (__RawDictionaryStorage *)*unaff_x20;
  _Var10 = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    _Var10 = param_1;
  }
  this = (_DictionaryStorage *)&DAT_100fbdb98;
  FUN_1000037f0(&DAT_100fbdb98,&DAT_100c3ee98);
  p_Var3 = original;
  Swift::_DictionaryStorage::_resize(this,original,_Var10,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_1002f9ff8:
    _swift_release(original);
LAB_1002fa000:
    *unaff_x20 = (long)p_Var3;
    return;
  }
  p_Var12 = original + 0x40;
  uVar8 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar11 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar11 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar11 = uVar11 & *(ulong *)p_Var12;
  lVar6 = 0;
  do {
    if (uVar11 == 0) {
      do {
        lVar14 = lVar6 + 1;
        if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1002fa028);
          (*pcVar2)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar14) {
          if ((param_2 & 1U) == 0) {
            _swift_release(original);
            goto LAB_1002fa000;
          }
          uVar11 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          if (((byte)original[0x20] & 0x3f) < 6) {
            *(long *)p_Var12 = -1L << (uVar11 & 0x3f);
          }
          else {
            _bzero(p_Var12,uVar11 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_1002f9ff8;
        }
        uVar11 = *(ulong *)(p_Var12 + lVar14 * 8);
        lVar6 = lVar6 + 1;
      } while (uVar11 == 0);
      uVar5 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
    }
    else {
      uVar5 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
      lVar14 = lVar6;
    }
    uVar5 = LZCOUNT(uVar5) | lVar14 << 6;
    uVar13 = *(undefined8 *)(*(long *)(original + 0x30) + uVar5 * 8);
    lVar6 = *(long *)(original + 0x38) + uVar5 * 0x20;
    if ((param_2 & 1U) == 0) {
      FUN_10000cbfc(lVar6,auStack_80);
    }
    else {
      FUN_100011080(lVar6,auStack_80);
    }
    _Var10 = *(__int64 *)(p_Var3 + 0x28);
    SVar15 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    Swift::Hasher::init(_Var10);
    into.unknown = auStack_c8;
    Swift::String::hash(into,SVar15);
    uVar4 = Swift::Hasher::_finalize(into);
    _swift_bridgeObjectRelease(SVar15.bridgeObject);
    uVar9 = -1L << ((ulong)(byte)p_Var3[0x20] & 0x3f);
    uVar4 = uVar4 & (uVar9 ^ 0xffffffffffffffff);
    uVar7 = uVar4 >> 6;
    uVar5 = -1L << (uVar4 & 0x3f) & (*(ulong *)(p_Var3 + uVar7 * 8 + 0x40) ^ 0xffffffffffffffff);
    if (uVar5 == 0) {
      bVar1 = false;
      uVar5 = 0x3f - uVar9 >> 6;
      do {
        uVar4 = uVar7 + 1;
        if ((uVar4 == uVar5) && (bVar1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1002fa02c);
          (*pcVar2)();
        }
        uVar7 = 0;
        if (uVar4 != uVar5) {
          uVar7 = uVar4;
        }
        bVar1 = (bool)(uVar4 == uVar5 | bVar1);
      } while (*(ulong *)(p_Var3 + uVar7 * 8 + 0x40) == 0xffffffffffffffff);
      uVar5 = ~*(ulong *)(p_Var3 + uVar7 * 8 + 0x40);
      uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | uVar7 << 6;
    }
    else {
      uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | uVar4 & 0x7fffffffffffffc0;
    }
    uVar7 = uVar5 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var3 + uVar7 + 0x40) = 1L << (uVar5 & 0x3f) | *(ulong *)(p_Var3 + uVar7 + 0x40);
    *(undefined8 *)(*(long *)(p_Var3 + 0x30) + uVar5 * 8) = uVar13;
    FUN_100011080(auStack_80,*(long *)(p_Var3 + 0x38) + uVar5 * 0x20);
    *(long *)(p_Var3 + 0x10) = *(long *)(p_Var3 + 0x10) + 1;
    lVar6 = lVar14;
  } while( true );
}



/* Address: 0x1002fa02c | FUN_1002fa02c */

void FUN_1002fa02c(byte param_1,undefined8 param_2,long param_3)

{
  _HashTable _Var1;
  undefined1 *puVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 *puVar6;
  Hasher HVar7;
  ulong uVar8;
  Bucket BVar9;
  String SVar10;
  undefined1 auStack_78 [72];
  
  Swift::Hasher::init(*(__int64 *)(param_3 + 0x28));
  pcVar4 = (char *)0x656369766564;
  if (param_1 != 4) {
    pcVar4 = (char *)0x6472616f626e6970;
  }
  puVar2 = &DAT_e600000000000000;
  if (param_1 != 4) {
    puVar2 = &DAT_e800000000000000;
  }
  pcVar3 = (char *)0x65746164;
  if (param_1 != 3) {
    pcVar3 = pcVar4;
  }
  HVar7.unknown = &DAT_e400000000000000;
  if (param_1 != 3) {
    HVar7.unknown = puVar2;
  }
  pcVar4 = &DAT_65707974;
  if (param_1 != 1) {
    pcVar4 = (char *)0x656c746974;
  }
  puVar2 = &DAT_e400000000000000;
  if (param_1 != 1) {
    puVar2 = &DAT_e500000000000000;
  }
  pcVar5 = (char *)0x707061;
  if (param_1 != 0) {
    pcVar5 = pcVar4;
  }
  puVar6 = (undefined1 *)0xe300000000000000;
  if (param_1 != 0) {
    puVar6 = puVar2;
  }
  if (param_1 < 3) {
    HVar7.unknown = puVar6;
    pcVar3 = pcVar5;
  }
  SVar10.bridgeObject = HVar7.unknown;
  SVar10.str = pcVar3;
  Swift::String::hash((Hasher)auStack_78,SVar10);
  _swift_bridgeObjectRelease();
  uVar8 = Swift::Hasher::_finalize(HVar7);
  _Var1.unknown = (undefined *)(param_3 + 0x40);
  BVar9 = Swift::_HashTable::nextHole
                    ((Bucket)(uVar8 & (-1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f) ^
                                      0xffffffffffffffffU)),_Var1);
  uVar8 = (ulong)BVar9.offset >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(_Var1.unknown + uVar8) =
       1L << (BVar9.offset & 0x3fU) | *(ulong *)(_Var1.unknown + uVar8);
  *(byte *)(*(long *)(param_3 + 0x30) + BVar9.offset) = param_1;
  *(undefined8 *)(*(long *)(param_3 + 0x38) + BVar9.offset * 8) = param_2;
  *(long *)(param_3 + 0x10) = *(long *)(param_3 + 0x10) + 1;
  return;
}



/* Address: 0x1002fa178 | FUN_1002fa178 */

void FUN_1002fa178(Bucket param_1,long param_2)

{
  _HashTable _Var1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  byte bVar6;
  code *pcVar7;
  Bucket BVar8;
  ulong uVar9;
  char *pcVar10;
  ulong uVar11;
  Hasher HVar12;
  ulong uVar13;
  ulong uVar14;
  String SVar15;
  undefined1 auStack_a8 [72];
  
  _Var1.unknown = (undefined *)(param_2 + 0x40);
  uVar11 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar13 = param_1.offset + 1U & (uVar11 ^ 0xffffffffffffffff);
  if ((*(ulong *)(_Var1.unknown + (uVar13 >> 6) * 8) >> (uVar13 & 0x3f) & 1) != 0) {
    uVar11 = ~uVar11;
    BVar8 = Swift::_HashTable::previousHole(param_1,_Var1);
    uVar14 = BVar8.offset + 1U & uVar11;
    do {
      bVar6 = *(byte *)(*(long *)(param_2 + 0x30) + uVar13);
      Swift::Hasher::init(*(__int64 *)(param_2 + 0x28));
      if (bVar6 < 3) {
        if (bVar6 == 0) {
          HVar12.unknown = (undefined1 *)0xe300000000000000;
          pcVar10 = (char *)0x707061;
        }
        else if (bVar6 == 1) {
          HVar12.unknown = &DAT_e400000000000000;
          pcVar10 = &DAT_65707974;
        }
        else {
          HVar12.unknown = &DAT_e500000000000000;
          pcVar10 = (char *)0x656c746974;
        }
      }
      else if (bVar6 == 3) {
        HVar12.unknown = &DAT_e400000000000000;
        pcVar10 = (char *)0x65746164;
      }
      else if (bVar6 == 4) {
        HVar12.unknown = &DAT_e600000000000000;
        pcVar10 = (char *)0x656369766564;
      }
      else {
        HVar12.unknown = &DAT_e800000000000000;
        pcVar10 = (char *)0x6472616f626e6970;
      }
      SVar15.bridgeObject = HVar12.unknown;
      SVar15.str = pcVar10;
      Swift::String::hash((Hasher)auStack_a8,SVar15);
      _swift_bridgeObjectRelease();
      uVar9 = Swift::Hasher::_finalize(HVar12);
      uVar9 = uVar9 & uVar11;
      if (param_1.offset < (long)uVar14) {
        if (uVar9 < uVar14) {
LAB_1002fa2f4:
          if (param_1.offset < (long)uVar9) goto LAB_1002fa21c;
        }
        puVar2 = (undefined1 *)(*(long *)(param_2 + 0x30) + param_1.offset);
        puVar3 = (undefined1 *)(*(long *)(param_2 + 0x30) + uVar13);
        if (((param_1.offset < (long)uVar13) || (puVar3 + 1 <= puVar2)) ||
           (param_1.offset != uVar13)) {
          *puVar2 = *puVar3;
        }
        puVar4 = (undefined8 *)(*(long *)(param_2 + 0x38) + param_1.offset * 8);
        puVar5 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar13 * 8);
        if (((param_1.offset < (long)uVar13) || (puVar5 + 1 <= puVar4)) ||
           (param_1.offset != uVar13)) {
          *puVar4 = *puVar5;
          param_1.offset = uVar13;
        }
      }
      else if (uVar14 <= uVar9) goto LAB_1002fa2f4;
LAB_1002fa21c:
      uVar13 = uVar13 + 1 & uVar11;
    } while ((*(ulong *)(_Var1.unknown + (uVar13 >> 6) * 8) >> (uVar13 & 0x3f) & 1) != 0);
  }
  uVar11 = (ulong)param_1.offset >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(_Var1.unknown + uVar11) =
       *(ulong *)(_Var1.unknown + uVar11) & (-1L << (param_1.offset & 0x3fU)) - 1U;
  if (SBORROW8(*(long *)(param_2 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x1002fa3b8);
    (*pcVar7)();
  }
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
  *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
  return;
}



/* Address: 0x1002fa3b8 | FUN_1002fa3b8 */

void FUN_1002fa3b8(undefined8 param_1)

{
  FUN_1002fa3d4();
  DAT_101057960 = param_1;
  return;
}



/* Address: 0x1002fa3d4 | FUN_1002fa3d4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1002fa3d4(void)

{
  undefined1 *puVar1;
  bool bVar2;
  URL UVar3;
  undefined *puVar4;
  undefined *puVar5;
  ID IVar6;
  URL UVar7;
  undefined8 uVar8;
  NSURL *pNVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long lVar10;
  long lVar11;
  char *pcVar12;
  code *pcVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  String SVar20;
  String SVar21;
  undefined8 uStack_d0;
  undefined4 auStack_c8 [2];
  undefined1 auStack_c0 [8];
  undefined *local_b8;
  char *local_b0;
  long local_a8;
  undefined *local_a0;
  undefined1 *local_98;
  undefined *local_90;
  long local_88;
  long local_80;
  code *local_78;
  undefined *local_70;
  undefined *local_68;
  
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar18 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar18 + 0x40));
  puVar4 = &DAT_100fc1a40;
  local_98 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_1000037f0(&DAT_100fc1a40,&DAT_100c40660);
  lVar11 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  lVar14 = (long)(auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar15 = lVar14 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar16 = lVar15 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar17 = lVar16 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_88 = lVar17 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar10 = (lVar17 - extraout_x12_02) - extraout_x12_03;
  puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1002fa91c();
  puVar4 = &DAT_100fc1b20;
  local_b8 = puVar5;
  FUN_1000037f0(&DAT_100fc1b20,&DAT_100c3fbb0);
  local_80 = *(long *)(lVar11 + 0x48);
  pcVar12 = (char *)((ulong)*(byte *)(lVar11 + 0x50) + 0x20 &
                    ((ulong)*(byte *)(lVar11 + 0x50) ^ 0xffffffffffffffff));
  _swift_allocObject();
  *(undefined8 *)(puVar4 + 0x18) = 6;
  *(undefined8 *)(puVar4 + 0x10) = 3;
  local_90 = &_OBJC_CLASS___NSBundle;
  local_70 = puVar4;
  IVar6 = objc_stub::mainBundle((ID)&_OBJC_CLASS___NSBundle);
  UVar7.unknown = (undefined *)objc_stub::resourceURL(IVar6);
  if (UVar7.unknown != (undefined *)0x0) {
    Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar7);
  }
  local_78 = *(code **)(lVar18 + 0x38);
  (*local_78)(lVar10,UVar7.unknown == (undefined *)0x0,1,UVar3.unknown);
  puVar4 = local_70 + (long)pcVar12;
  FUN_1002fc004(lVar10,puVar4);
  uVar8 = 0;
  FUN_1002fbb00(0);
  _swift_getObjCClassFromMetadata();
  IVar6 = objc_stub::bundleForClass_((ID)local_90,uVar8);
  UVar7.unknown = (undefined *)objc_stub::resourceURL(IVar6);
  lVar11 = local_80;
  local_b0 = pcVar12;
  if (UVar7.unknown != (undefined *)0x0) {
    Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar7);
  }
  pcVar13 = local_78;
  (*local_78)(puVar4 + lVar11,UVar7.unknown == (undefined *)0x0,1,UVar3.unknown);
  IVar6 = objc_stub::mainBundle((ID)local_90);
  UVar7.unknown = (undefined *)objc_stub::bundleURL(IVar6);
  Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar7);
  (*pcVar13)(puVar4 + lVar11 * 2,0,1,UVar3.unknown);
  local_68 = local_b8;
  FUN_100381840(local_70);
  local_70 = local_68;
  local_90 = *(undefined **)(local_68 + 0x10);
  if (local_90 != (undefined *)0x0) {
    uVar19 = 0;
    puVar4 = local_68 + (long)local_b0;
    local_b0 = "SyncConflictResolver";
    local_a8 = lVar17;
    local_a0 = UVar3.unknown;
    do {
      lVar11 = local_88;
      if (*(ulong *)(local_70 + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x1002fa8c4);
        (*pcVar13)();
      }
      FUN_1002fc054(puVar4,local_88);
      FUN_1002fc004(lVar11,lVar17);
      FUN_1002fc054(lVar17,lVar15);
      pcVar13 = *(code **)(lVar18 + 0x30);
      lVar11 = lVar15;
      UVar7.unknown = UVar3.unknown;
      (*pcVar13)(lVar15,1);
      bVar2 = (int)lVar11 != 1;
      if (bVar2) {
        SVar20.bridgeObject = (void *)((ulong)local_b0 | 0x8000000000000000);
        SVar20.str = (char *)0xd00000000000001e;
        Foundation::URL::appendingPathComponent(SVar20,UVar7);
        (**(code **)(lVar18 + 8))(lVar15,UVar3.unknown);
      }
      else {
        FUN_1002fc0a4(lVar15);
      }
      (*local_78)(lVar16,!bVar2,1,UVar3.unknown);
      FUN_1002fc054(lVar16,lVar14);
      lVar11 = lVar14;
      (*pcVar13)(lVar14,1,UVar3.unknown);
      puVar1 = local_98;
      if ((int)lVar11 == 1) {
        FUN_1002fc0a4(lVar16);
        FUN_1002fc0a4(lVar17);
      }
      else {
        (**(code **)(lVar18 + 0x20))(local_98,lVar14,UVar3.unknown);
        UVar3.unknown = &_OBJC_CLASS___NSBundle;
        _objc_allocWithZone();
        pNVar9 = Foundation::URL::_bridgeToObjectiveC(UVar3);
        IVar6 = objc_stub::initWithURL_((ID)UVar3.unknown,pNVar9);
        UVar3.unknown = local_a0;
        lVar17 = local_a8;
        (**(code **)(lVar18 + 8))(puVar1,local_a0);
        FUN_1002fc0a4(lVar16);
        FUN_1002fc0a4(lVar17);
        if (IVar6 != 0) {
          _swift_bridgeObjectRelease(local_70);
          return IVar6;
        }
      }
      uVar19 = uVar19 + 1;
      puVar4 = puVar4 + local_80;
    } while (local_90 != (undefined *)uVar19);
  }
  *(undefined4 *)(lVar10 + -8) = 0;
  *(undefined8 *)(lVar10 + -0x10) = 0x2c;
  SVar21.bridgeObject = (void *)0x2;
  SVar21.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar21,(StaticString)0xd000000000000033,0x8000000100da18d0,
             0xda18c0);
                    /* WARNING: Does not return */
  pcVar13 = (code *)SoftwareBreakpoint(1,0x1002fa91c);
  (*pcVar13)();
}



/* Address: 0x1002fa91c | FUN_1002fa91c */

undefined * FUN_1002fa91c(long param_1)

{
  ulong uVar1;
  undefined1 *puVar2;
  URL UVar3;
  undefined *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_90 [8];
  code *local_88;
  long local_80;
  undefined *local_78;
  undefined1 *local_70;
  undefined *local_68;
  
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar6 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar6 + 0x40));
  local_70 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar5 = (long)(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  puVar4 = &DAT_100fc1a40;
  FUN_1000037f0(&DAT_100fc1a40,&DAT_100c40660);
  lVar8 = *(long *)(puVar4 + -8);
  local_78 = puVar4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = *(long *)(param_1 + 0x10);
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar7 != 0) {
    local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10030759c(0,lVar7,0);
    param_1 = param_1 + ((ulong)*(byte *)(lVar6 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar6 + 0x50) ^ 0xffffffffffffffff));
    local_80 = *(long *)(lVar6 + 0x48);
    local_88 = *(code **)(lVar6 + 0x10);
    puVar4 = local_68;
    do {
      (*local_88)(lVar5,param_1,UVar3.unknown);
      puVar2 = local_70;
      (**(code **)(lVar6 + 0x20))(local_70,lVar5,UVar3.unknown);
      _swift_dynamicCast(lVar5 - extraout_x8_00,puVar2,UVar3.unknown,local_78,7);
      uVar1 = *(ulong *)(puVar4 + 0x10);
      local_68 = puVar4;
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
        FUN_10030759c(1 < *(ulong *)(puVar4 + 0x18),uVar1 + 1,1);
      }
      puVar4 = local_68;
      *(ulong *)(local_68 + 0x10) = uVar1 + 1;
      FUN_1002fc004(lVar5 - extraout_x8_00,
                    local_68 +
                    *(long *)(lVar8 + 0x48) * uVar1 +
                    ((ulong)*(byte *)(lVar8 + 0x50) + 0x20 &
                    ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff)));
      param_1 = param_1 + local_80;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return puVar4;
}



/* Address: 0x1002faafc | FUN_1002faafc */

undefined * FUN_1002faafc(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  undefined *puVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_90 [24];
  long local_78;
  undefined **ppuStack_70;
  undefined *local_68;
  
  lVar2 = 0;
  FUN_100371e9c();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar7 + 0x40));
  puVar5 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar6 = *(long *)(param_1 + 0x10);
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar6 != 0) {
    local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10030778c(0,lVar6,0);
    param_1 = param_1 + ((ulong)*(byte *)(lVar7 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar7 + 0x50) ^ 0xffffffffffffffff));
    lVar7 = *(long *)(lVar7 + 0x48);
    puVar4 = local_68;
    do {
      FUN_1002fc0ec(param_1,puVar5);
      uVar1 = *(ulong *)(puVar4 + 0x10);
      local_68 = puVar4;
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
        FUN_10030778c(1 < *(ulong *)(puVar4 + 0x18),uVar1 + 1,1);
      }
      puVar4 = local_68;
      ppuStack_70 = &PTR_PTR_100ecd440;
      puVar3 = auStack_90;
      local_78 = lVar2;
      FUN_10000cbb0(puVar3);
      FUN_1002fc0ec(puVar5,puVar3);
      *(ulong *)(puVar4 + 0x10) = uVar1 + 1;
      FUN_100076508(auStack_90,puVar4 + uVar1 * 0x28 + 0x20);
      FUN_1002fc130(puVar5);
      param_1 = param_1 + lVar7;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return puVar4;
}



/* Address: 0x1002fac4c | FUN_1002fac4c */

void FUN_1002fac4c(void)

{
  FUN_1000dbd5c(&DAT_100c3ef60,&DAT_100fbdba0,&DAT_100c44a10,0x30);
  return;
}



/* Address: 0x1002fac6c | FUN_1002fac6c */

void FUN_1002fac6c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_10037b748(0);
  FUN_1000d80e0(param_1,"PasteCore/DI+PasteCore.swift",0x1c,2,0x26,0x13,FUN_1002fd480,0,uVar1);
  return;
}



/* Address: 0x1002facbc | FUN_1002facbc */

undefined8 FUN_1002facbc(void)

{
  return 0x1e;
}



/* Address: 0x1002facc4 | thunk_FUN_10037631c */

void thunk_FUN_10037631c(void)

{
  FUN_10037631c();
  return;
}



/* Address: 0x1002facc8 | FUN_1002facc8 */

undefined1  [16] FUN_1002facc8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x8000000100da17c0;
  auVar1._0_8_ = 0xd000000000000014;
  return auVar1;
}



/* Address: 0x1002face4 | FUN_1002face4 */

void FUN_1002face4(void)

{
  FUN_1000d4ca4(0);
  _swift_allocObject();
  FUN_1000d4624(0xd000000000000019,0x8000000100da17e0);
  return;
}



/* Address: 0x1002fad30 | FUN_1002fad30 */

void FUN_1002fad30(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1002fc16c(0);
  FUN_1000d80e0(param_1,"PasteCore/DI+PasteCore.swift",0x1c,2,0x36,0x13,FUN_1002fd5e4,0,uVar1);
  return;
}



/* Address: 0x1002fad80 | FUN_1002fad80 */

void FUN_1002fad80(void)

{
  FUN_1000dbd5c(&DAT_100c3ef90,&DAT_100fbdba8,&DAT_100c435d0,0x50);
  return;
}



/* Address: 0x1002fada0 | FUN_1002fada0 */

void FUN_1002fada0(void)

{
  FUN_1000dbd5c(&DAT_100c3eff8,&DAT_100fbdbb8,&DAT_100c3f020,0x30);
  return;
}



/* Address: 0x1002fadc0 | thunk_FUN_1002fda40 */

void thunk_FUN_1002fda40(void)

{
  FUN_1002fda40();
  return;
}



/* Address: 0x1002fadc4 | FUN_1002fadc4 */

void FUN_1002fadc4(void)

{
  FUN_1002fb148(&DAT_100c3f028);
  return;
}



/* Address: 0x1002fadd0 | thunk_FUN_100376734 */

void thunk_FUN_100376734(void)

{
  FUN_100376734();
  return;
}



/* Address: 0x1002fadd4 | FUN_1002fadd4 */

void FUN_1002fadd4(void)

{
  FUN_1000d4ca4(0);
  _swift_allocObject();
  FUN_1000d4624(0xd000000000000018,0x8000000100da1800);
  return;
}



/* Address: 0x1002fae20 | FUN_1002fae20 */

void FUN_1002fae20(void)

{
  FUN_1002faf5c(&DAT_100c3f050);
  return;
}



/* Address: 0x1002fae2c | FUN_1002fae2c */

void FUN_1002fae2c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar1 = &DAT_100fc1bf0;
  FUN_1000037f0(&DAT_100fc1bf0,&DAT_100c40ad0);
  _swift_initStaticObject();
  puVar2 = puVar1;
  FUN_1002fc6c0();
  _swift_arrayDestroy(puVar1 + 0x20,0xe,PTR___type_metadata_for_Swift_String_100eac208);
  puVar1 = &DAT_100fbdbc8;
  local_50 = puVar2;
  FUN_1000037f0(&DAT_100fbdbc8,&DAT_100c3f078);
  FUN_1002ccc34(&local_48,0xd000000000000018,0x8000000100da0b30,&local_50,puVar1);
  *param_1 = local_48;
  param_1[2] = uStack_38;
  param_1[1] = local_40;
  return;
}



/* Address: 0x1002faee8 | FUN_1002faee8 */

void FUN_1002faee8(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 local_38;
  
  if (*param_1 == 0) {
    puVar1 = &DAT_100fbdbc8;
    FUN_100005c24(&DAT_100fbdbc8,&DAT_100c3f078);
    local_38 = param_2;
    _swift_getWitnessTable(param_3,puVar1,&local_38);
    *param_1 = param_3;
  }
  return;
}



/* Address: 0x1002faf50 | FUN_1002faf50 */

void FUN_1002faf50(void)

{
  FUN_1002faf5c(&DAT_100c3f080);
  return;
}



/* Address: 0x1002faf5c | FUN_1002faf5c */

void FUN_1002faf5c(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  _swift_getKeyPath();
  puVar1 = &DAT_100fbdbc0;
  FUN_1002faee8(&DAT_100fbdbc0,
                PTR___protocol_witness_table_for_Swift_String___Swift_Decodable_in_Swift_100eac240,
                PTR__Swift__Swift__Set<undefined>_>Swift__Decodable_100eac6d8);
  puVar2 = &DAT_100fbdbd0;
  FUN_1002faee8(&DAT_100fbdbd0,
                PTR___protocol_witness_table_for_Swift_String___Swift_Encodable_in_Swift_100eac210,
                PTR__Swift__Swift__Set<undefined>_>Swift__Encodable_100eac6c8);
  FUN_1002cb88c(&local_68,param_2,puVar1,puVar2);
  param_1[1] = uStack_60;
  *param_1 = local_68;
  param_1[3] = uStack_50;
  param_1[2] = local_58;
  param_1[5] = uStack_40;
  param_1[4] = local_48;
  param_1[6] = local_38;
  return;
}



/* Address: 0x1002faffc | FUN_1002faffc */

void FUN_1002faffc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar1 = &DAT_100fc1bf0;
  FUN_1000037f0(&DAT_100fc1bf0,&DAT_100c40ad0);
  _swift_initStaticObject();
  puVar2 = puVar1;
  FUN_1002fc6c0();
  _swift_arrayDestroy(puVar1 + 0x20,6,PTR___type_metadata_for_Swift_String_100eac208);
  puVar1 = &DAT_100fbdbc8;
  local_50 = puVar2;
  FUN_1000037f0(&DAT_100fbdbc8,&DAT_100c3f078);
  FUN_1002ccc34(&local_48,0xd000000000000016,0x8000000100da0af0,&local_50,puVar1);
  *param_1 = local_48;
  param_1[2] = uStack_38;
  param_1[1] = local_40;
  return;
}



/* Address: 0x1002fb0b8 | FUN_1002fb0b8 */

void FUN_1002fb0b8(void)

{
  FUN_1003c9c10(PTR___swiftEmptyArrayStorage_100eae0d8);
  return;
}



/* Address: 0x1002fb0c4 | FUN_1002fb0c4 */

void FUN_1002fb0c4(void)

{
  FUN_1000037f0(&DAT_100fc1bf0,&DAT_100c40ad0);
  _swift_initStaticObject();
  return;
}



/* Address: 0x1002fb0f0 | FUN_1002fb0f0 */

void FUN_1002fb0f0(void)

{
  FUN_1000d4ca4(0);
  _swift_allocObject();
  FUN_1000d4624(0xd000000000000017,0x8000000100da1840);
  return;
}



/* Address: 0x1002fb13c | FUN_1002fb13c */

void FUN_1002fb13c(void)

{
  FUN_1002fb148(&DAT_100c3f0e0);
  return;
}



/* Address: 0x1002fb148 | FUN_1002fb148 */

void FUN_1002fb148(undefined8 *param_1,undefined8 param_2)

{
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  _swift_getKeyPath();
  FUN_1002cb7e0(&local_58,param_2,&PTR_PTR_100ec7018);
  param_1[1] = uStack_50;
  *param_1 = local_58;
  param_1[3] = uStack_40;
  param_1[2] = local_48;
  param_1[5] = uStack_30;
  param_1[4] = local_38;
  param_1[6] = local_28;
  return;
}



/* Address: 0x1002fb19c | FUN_1002fb19c */

void FUN_1002fb19c(void)

{
  undefined1 local_11;
  
  local_11 = 0;
  FUN_1002ccc34(0x6e45636e79537369,0xed000064656c6261,&local_11,
                PTR___type_metadata_for_Swift_Bool_100eac570);
  return;
}



/* Address: 0x1002fb1e8 | FUN_1002fb1e8 */

void FUN_1002fb1e8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1003b2fc0(0);
  _swift_storeEnumTagMultiPayload(param_1,uVar1,5);
  return;
}



/* Address: 0x1002fb218 | FUN_1002fb218 */

void FUN_1002fb218(void)

{
  FUN_1000d4ca4(0);
  _swift_allocObject();
  FUN_1000d4624(0x69676e45636e7953,0xea0000000000656e);
  return;
}



/* Address: 0x1002fb264 | FUN_1002fb264 */

void FUN_1002fb264(void)

{
  FUN_1000dbd5c(&DAT_100c3efc0,&DAT_100fbdbb0,&DAT_100c3eff0,0x50);
  return;
}



/* Address: 0x1002fb284 | FUN_1002fb284 */

void FUN_1002fb284(void)

{
  FUN_1000dbd5c(&DAT_100c3f108,&DAT_100fbdc18,&DAT_100c44a80,0x50);
  return;
}



/* Address: 0x1002fb2a4 | FUN_1002fb2a4 */

void FUN_1002fb2a4(void)

{
  FUN_1000dbd5c(&DAT_100c3f0a8,&DAT_100fbdbd8,&DAT_100c3f0d0,0x30);
  return;
}



/* Address: 0x1002fb2c4 | FUN_1002fb2c4 */

long FUN_1002fb2c4(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = 0;
  FUN_100395b50();
  _swift_allocObject();
  FUN_1000d4ca4(0);
  _swift_allocObject();
  uVar2 = 0xd000000000000014;
  FUN_1000d4624(0xd000000000000014,0x8000000100da1860);
  *(undefined8 *)(lVar1 + 0x10) = uVar2;
  return lVar1;
}



/* Address: 0x1002fb338 | FUN_1002fb338 */

undefined * FUN_1002fb338(void)

{
  __int64 _Var1;
  undefined *puVar2;
  
  if ((ulong)PTR___swiftEmptyArrayStorage_100eae0d8 >> 0x3e != 0) {
    _Var1 = Swift::_CocoaArrayWrapper::get_endIndex
                      ((_CocoaArrayWrapper)PTR___swiftEmptyArrayStorage_100eae0d8);
    if (_Var1 != 0) {
      puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_1002fc834(PTR___swiftEmptyArrayStorage_100eae0d8);
      return puVar2;
    }
  }
  return PTR___swiftEmptySetSingleton_100eae0e8;
}



/* Address: 0x1002fb37c | FUN_1002fb37c */

undefined8 FUN_1002fb37c(void)

{
  return 0;
}



/* Address: 0x1002fb390 | FUN_1002fb390 */

void FUN_1002fb390(void)

{
  FUN_1000dbd5c(&DAT_100c3f140,&DAT_100fbdc20,&DAT_100c3f170,0x50);
  return;
}



/* Address: 0x1002fb3b0 | FUN_1002fb3b0 */

void FUN_1002fb3b0(void)

{
  FUN_1000dbd5c(&DAT_100c3f178,&DAT_100fbdc28,&DAT_100c44bc0,0x50);
  return;
}



/* Address: 0x1002fb3d0 | FUN_1002fb3d0 */

undefined1  [16] FUN_1002fb3d0(void)

{
  return ZEXT816(0);
}



/* Address: 0x1002fb3dc | FUN_1002fb3dc */

void FUN_1002fb3dc(void)

{
  undefined *self;
  
  self = &_OBJC_CLASS___NSAttributedString;
  _objc_allocWithZone();
  objc_stub::init((ID)self);
  return;
}



/* Address: 0x1002fb3f8 | FUN_1002fb3f8 */

String FUN_1002fb3f8(void)

{
  String SVar1;
  
  FUN_100003a00(&DAT_100fbdd78,FUN_1002fbb58,&TargetProtocolConformanceDescriptor_100c3f988);
  SVar1 = (extension_Foundation)::Swift::Error::_get__domain();
  return SVar1;
}



/* Address: 0x1002fb438 | FUN_1002fb438 */

void FUN_1002fb438(void)

{
  FUN_100003a00(&DAT_100fbdd78,FUN_1002fbb58,&TargetProtocolConformanceDescriptor_100c3f988);
  (extension_Foundation)::Swift::Error::_get__code();
  return;
}



/* Address: 0x1002fb478 | FUN_1002fb478 */

void FUN_1002fb478(void)

{
  FUN_100003a00(&DAT_100fbddb0,FUN_1002fbb58,&TargetProtocolConformanceDescriptor_100c3fa10);
  (extension_Foundation)::Foundation::_BridgedStoredNSError::__getEmbeddedNSError();
  return;
}



/* Address: 0x1002fb4b8 | FUN_1002fb4b8 */

String FUN_1002fb4b8(void)

{
  String SVar1;
  
  SVar1 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  return SVar1;
}



/* Address: 0x1002fb4c8 | FUN_1002fb4c8 */

void FUN_1002fb4c8(void)

{
  FUN_100003a00(&DAT_100fbddb0,FUN_1002fbb58,&TargetProtocolConformanceDescriptor_100c3fa10);
  (extension_Foundation)::Foundation::_BridgedStoredNSError::get_errorCode();
  return;
}



/* Address: 0x1002fb508 | FUN_1002fb508 */

void FUN_1002fb508(void)

{
  FUN_100003a00(&DAT_100fbddb0,FUN_1002fbb58,&TargetProtocolConformanceDescriptor_100c3fa10);
  (extension_Foundation)::Foundation::_BridgedStoredNSError::_get_errorUserInfo();
  return;
}



/* Address: 0x1002fb548 | FUN_1002fb548 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002fb548(NSError *param_1)

{
  FUN_100003a00(&DAT_100fbddb0,FUN_1002fbb58,&TargetProtocolConformanceDescriptor_100c3fa10);
  (extension_Foundation)::Foundation::_BridgedStoredNSError::_init(param_1);
  return;
}



/* Address: 0x1002fb5b0 | FUN_1002fb5b0 */

void FUN_1002fb5b0(Hasher param_1)

{
  FUN_100003a00(&DAT_100fbddb0,FUN_1002fbb58,&TargetProtocolConformanceDescriptor_100c3fa10);
  (extension_Foundation)::Foundation::_BridgedStoredNSError::hash(param_1);
  return;
}



/* Address: 0x1002fb600 | FUN_1002fb600 */

void FUN_1002fb600(void)

{
  FUN_100003a00(&DAT_100fbde58,FUN_1002fbbd0,&TargetProtocolConformanceDescriptor_100c3f9cc);
  FUN_100003a00(&DAT_100fbde60,FUN_1002fbbd0,&TargetProtocolConformanceDescriptor_100c3f3b4);
  (extension_Swift)::Swift::_SwiftNewtypeWrapper::__toCustomAnyHashable();
  return;
}



/* Address: 0x1002fb684 | FUN_1002fb684 */

void FUN_1002fb684(void)

{
  FUN_100003a00(&DAT_100fbe278,FUN_1002fc228,&TargetProtocolConformanceDescriptor_100c3fddc);
  FUN_100003a00(&DAT_100fbe280,FUN_1002fc228,&TargetProtocolConformanceDescriptor_100c3fd7c);
  (extension_Swift)::Swift::_SwiftNewtypeWrapper::__toCustomAnyHashable();
  return;
}



/* Address: 0x1002fb708 | FUN_1002fb708 */

void FUN_1002fb708(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = &DAT_100fbddb0;
  FUN_100003a00(&DAT_100fbddb0,FUN_1002fbb58,&TargetProtocolConformanceDescriptor_100c3fa10);
  (extension_Foundation)::Foundation::_BridgedStoredNSError::___infix
            (param_1,param_2,param_3,puVar1);
  return;
}



/* Address: 0x1002fb760 | FUN_1002fb760 */

void FUN_1002fb760(void)

{
  FUN_100003a00(&DAT_100fbe250,FUN_1002fc1c4,&TargetProtocolConformanceDescriptor_100c403ac);
  FUN_100003a00(&DAT_100fbe258,FUN_1002fc1c4,&TargetProtocolConformanceDescriptor_100c401a8);
  (extension_Swift)::Swift::_SwiftNewtypeWrapper::__toCustomAnyHashable();
  return;
}



/* Address: 0x1002fb7e4 | FUN_1002fb7e4 */

void FUN_1002fb7e4(void)

{
  FUN_100003a00(&DAT_100fbe240,FUN_1002fc1b0,&TargetProtocolConformanceDescriptor_100c4031c);
  FUN_100003a00(&DAT_100fbe248,FUN_1002fc1b0,&TargetProtocolConformanceDescriptor_100c402bc);
  (extension_Swift)::Swift::_SwiftNewtypeWrapper::__toCustomAnyHashable();
  return;
}



/* Address: 0x1002fb868 | FUN_1002fb868 */

void FUN_1002fb868(void)

{
  FUN_100003a00(&DAT_100fbe268,FUN_1002fc214,&TargetProtocolConformanceDescriptor_100c3ff34);
  FUN_100003a00(&DAT_100fbe270,FUN_1002fc214,&TargetProtocolConformanceDescriptor_100c3fed4);
  (extension_Swift)::Swift::_SwiftNewtypeWrapper::__toCustomAnyHashable();
  return;
}



/* Address: 0x1002fb8ec | FUN_1002fb8ec */

void FUN_1002fb8ec(void)

{
  FUN_100003a00(&DAT_100fc1bd0,FUN_1002fc1d8,&TargetProtocolConformanceDescriptor_100c403f0);
  FUN_100003a00(&DAT_100fbe260,FUN_1002fc1d8,&TargetProtocolConformanceDescriptor_100c40094);
  (extension_Swift)::Swift::_SwiftNewtypeWrapper::__toCustomAnyHashable();
  return;
}



/* Address: 0x1002fb970 | FUN_1002fb970 */

void FUN_1002fb970(void)

{
  FUN_100003a00(&DAT_100fbde38,FUN_1002fbb94,&TargetProtocolConformanceDescriptor_100c3fb20);
  FUN_100003a00(&DAT_100fbde40,FUN_1002fbb94,&TargetProtocolConformanceDescriptor_100c3f5e4);
  (extension_Swift)::Swift::_SwiftNewtypeWrapper::__toCustomAnyHashable();
  return;
}


