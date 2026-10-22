/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100468350 | FUN_100468350 */

void FUN_100468350(undefined8 param_1,undefined8 param_2)

{
  FUN_100468c94(param_1,param_2,FUN_100484870,&DAT_100fc7d58,&DAT_100c4c720);
  return;
}



/* Address: 0x10046836c | FUN_10046836c */

void FUN_10046836c(long param_1,bool param_2)

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
  this = (_DictionaryStorage *)&DAT_100fc7cd0;
  FUN_1000037f0(&DAT_100fc7cd0,&DAT_100c4c698);
  p_Var10 = original;
  Swift::_DictionaryStorage::_resize(this,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_1004685ec:
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
          pcVar9 = (code *)SoftwareBreakpoint(1,0x10046861c);
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
          goto LAB_1004685ec;
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
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100468620);
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



/* Address: 0x100468620 | FUN_100468620 */

void FUN_100468620(long param_1,bool param_2)

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
  this = (_DictionaryStorage *)&DAT_100fc7d70;
  FUN_1000037f0(&DAT_100fc7d70,&DAT_100c4c738);
  p_Var8 = original;
  Swift::_DictionaryStorage::_resize(this,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_1004688a8:
    _swift_release(original);
LAB_1004688b0:
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
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1004688d8);
          (*pcVar7)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar17) {
          if ((param_2 & 1U) == 0) {
            _swift_release(original);
            goto LAB_1004688b0;
          }
          uVar15 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          if (((byte)original[0x20] & 0x3f) < 6) {
            *(long *)p_Var16 = -1L << (uVar15 & 0x3f);
          }
          else {
            _bzero(p_Var16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_1004688a8;
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
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1004688dc);
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



/* Address: 0x1004688dc | FUN_1004688dc */

void FUN_1004688dc(long param_1,bool param_2,long param_3,undefined8 param_4,
                  _DictionaryStorage *param_5,undefined8 param_6)

{
  bool bVar1;
  UUID UVar2;
  __RawDictionaryStorage *p_Var3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long extraout_x8;
  undefined1 *puVar7;
  long extraout_x8_00;
  long lVar8;
  ulong uVar9;
  code *pcVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long *unaff_x20;
  __int64 _Var15;
  ulong uVar16;
  __RawDictionaryStorage *original;
  long lVar17;
  long lVar18;
  long lVar19;
  __RawDictionaryStorage *p_Var20;
  undefined1 auStack_b0 [8];
  
  FUN_1000037f0(param_3,param_4);
  lVar6 = *(long *)(param_3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_b0 + -extraout_x8;
  UVar2 = Foundation::UUID::typeMetadataAccessor();
  lVar19 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar19 + 0x40));
  lVar8 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  original = (__RawDictionaryStorage *)*unaff_x20;
  _Var15 = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    _Var15 = param_1;
  }
  FUN_1000037f0(param_5,param_6);
  p_Var3 = original;
  Swift::_DictionaryStorage::_resize(param_5,original,_Var15,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_100468c60:
    _swift_release(original);
LAB_100468c68:
    *unaff_x20 = (long)p_Var3;
    return;
  }
  p_Var20 = original + 0x40;
  uVar12 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar16 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar16 = uVar16 & *(ulong *)p_Var20;
  lVar5 = 0;
  do {
    if (uVar16 == 0) {
      do {
        lVar18 = lVar5 + 1;
        if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x100468c90);
          (*pcVar10)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar18) {
          if ((param_2 & 1U) == 0) {
            _swift_release(original);
            goto LAB_100468c68;
          }
          uVar16 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          if (((byte)original[0x20] & 0x3f) < 6) {
            *(long *)p_Var20 = -1L << (uVar16 & 0x3f);
          }
          else {
            _bzero(p_Var20,uVar16 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_100468c60;
        }
        uVar16 = *(ulong *)(p_Var20 + lVar18 * 8);
        lVar5 = lVar5 + 1;
      } while (uVar16 == 0);
      uVar9 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
    }
    else {
      uVar9 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
      lVar18 = lVar5;
    }
    uVar9 = LZCOUNT(uVar9) | lVar18 << 6;
    lVar13 = *(long *)(lVar19 + 0x48);
    lVar5 = *(long *)(original + 0x30) + lVar13 * uVar9;
    if ((param_2 & 1U) == 0) {
      (**(code **)(lVar19 + 0x10))(lVar8,lVar5,UVar2.unknown);
      lVar17 = *(long *)(lVar6 + 0x48);
      lVar5 = *(long *)(original + 0x38) + lVar17 * uVar9;
      pcVar10 = *(code **)(lVar6 + 0x10);
    }
    else {
      (**(code **)(lVar19 + 0x20))(lVar8,lVar5,UVar2.unknown);
      lVar17 = *(long *)(lVar6 + 0x48);
      lVar5 = *(long *)(original + 0x38) + lVar17 * uVar9;
      pcVar10 = *(code **)(lVar6 + 0x20);
    }
    (*pcVar10)(puVar7,lVar5,param_3);
    _Var15 = *(__int64 *)(p_Var3 + 0x28);
    FUN_100003a00(&DAT_100fc7ed8,PTR_typeMetadataAccessor_100ea7500,
                  PTR_Foundation__Foundation__UUID_>Swift__Hashable_100ea7518);
    uVar4 = Swift::Hashable::_rawHashValue(_Var15);
    uVar14 = -1L << ((ulong)(byte)p_Var3[0x20] & 0x3f);
    uVar4 = uVar4 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar4 >> 6;
    uVar9 = -1L << (uVar4 & 0x3f) & (*(ulong *)(p_Var3 + uVar11 * 8 + 0x40) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar1 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar4 = uVar11 + 1;
        if ((uVar4 == uVar9) && (bVar1)) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x100468c94);
          (*pcVar10)();
        }
        uVar11 = 0;
        if (uVar4 != uVar9) {
          uVar11 = uVar4;
        }
        bVar1 = (bool)(uVar4 == uVar9 | bVar1);
      } while (*(ulong *)(p_Var3 + uVar11 * 8 + 0x40) == 0xffffffffffffffff);
      uVar9 = ~*(ulong *)(p_Var3 + uVar11 * 8 + 0x40);
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
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar4 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var3 + uVar11 + 0x40) = 1L << (uVar9 & 0x3f) | *(ulong *)(p_Var3 + uVar11 + 0x40);
    (**(code **)(lVar19 + 0x20))(*(long *)(p_Var3 + 0x30) + lVar13 * uVar9,lVar8,UVar2.unknown);
    (**(code **)(lVar6 + 0x20))(*(long *)(p_Var3 + 0x38) + lVar17 * uVar9,puVar7,param_3);
    *(long *)(p_Var3 + 0x10) = *(long *)(p_Var3 + 0x10) + 1;
    lVar5 = lVar18;
  } while( true );
}



/* Address: 0x100468c94 | FUN_100468c94 */

void FUN_100468c94(long param_1,bool param_2,code *param_3,_DictionaryStorage *param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  String *pSVar2;
  __int64 capacity;
  char *pcVar3;
  void *pvVar4;
  String SVar5;
  bool bVar6;
  code *pcVar7;
  long lVar8;
  __RawDictionaryStorage *p_Var9;
  long lVar10;
  Hasher into;
  ulong uVar11;
  long extraout_x8;
  undefined1 *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  long lVar18;
  ulong uVar19;
  __RawDictionaryStorage *p_Var20;
  undefined1 auStack_e0 [8];
  undefined1 auStack_a8 [72];
  
  lVar8 = 0;
  (*param_3)();
  lVar8 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar12 = auStack_e0 + -extraout_x8;
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  FUN_1000037f0(param_4,param_5);
  p_Var9 = original;
  Swift::_DictionaryStorage::_resize(param_4,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_100468f68:
    _swift_release(original);
LAB_100468f70:
    *unaff_x20 = (long)p_Var9;
    return;
  }
  p_Var20 = original + 0x40;
  uVar15 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar19 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar19 = ~(-1L << (uVar15 & 0x3f));
  }
  uVar19 = uVar19 & *(ulong *)p_Var20;
  lVar10 = 0;
  do {
    if (uVar19 == 0) {
      do {
        lVar17 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100468f98);
          (*pcVar7)();
        }
        if ((long)(uVar15 + 0x3f >> 6) <= lVar17) {
          if ((param_2 & 1U) == 0) {
            _swift_release(original);
            goto LAB_100468f70;
          }
          uVar19 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          if (((byte)original[0x20] & 0x3f) < 6) {
            *(long *)p_Var20 = -1L << (uVar19 & 0x3f);
          }
          else {
            _bzero(p_Var20,uVar19 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_100468f68;
        }
        uVar19 = *(ulong *)(p_Var20 + lVar17 * 8);
        lVar10 = lVar10 + 1;
      } while (uVar19 == 0);
      uVar13 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
      uVar19 = uVar19 - 1 & uVar19;
    }
    else {
      uVar13 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
      uVar19 = uVar19 - 1 & uVar19;
      lVar17 = lVar10;
    }
    uVar13 = LZCOUNT(uVar13) | lVar17 << 6;
    pSVar2 = (String *)(*(long *)(original + 0x30) + uVar13 * 0x10);
    pcVar3 = pSVar2->str;
    pvVar4 = pSVar2->bridgeObject;
    SVar5 = *pSVar2;
    lVar18 = *(long *)(lVar8 + 0x48);
    lVar10 = *(long *)(original + 0x38) + lVar18 * uVar13;
    if ((param_2 & 1U) == 0) {
      FUN_1000c495c(lVar10,puVar12,param_3);
      _swift_bridgeObjectRetain(pvVar4);
    }
    else {
      FUN_1000523d8(lVar10,puVar12,param_3);
    }
    Swift::Hasher::init(*(__int64 *)(p_Var9 + 0x28));
    into.unknown = auStack_a8;
    Swift::String::hash(into,SVar5);
    uVar11 = Swift::Hasher::_finalize(into);
    uVar16 = -1L << ((ulong)(byte)p_Var9[0x20] & 0x3f);
    uVar11 = uVar11 & (uVar16 ^ 0xffffffffffffffff);
    uVar14 = uVar11 >> 6;
    uVar13 = -1L << (uVar11 & 0x3f) & (*(ulong *)(p_Var9 + uVar14 * 8 + 0x40) ^ 0xffffffffffffffff);
    if (uVar13 == 0) {
      bVar6 = false;
      uVar13 = 0x3f - uVar16 >> 6;
      do {
        uVar11 = uVar14 + 1;
        if ((uVar11 == uVar13) && (bVar6)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100468f9c);
          (*pcVar7)();
        }
        uVar14 = 0;
        if (uVar11 != uVar13) {
          uVar14 = uVar11;
        }
        bVar6 = (bool)(uVar11 == uVar13 | bVar6);
      } while (*(ulong *)(p_Var9 + uVar14 * 8 + 0x40) == 0xffffffffffffffff);
      uVar13 = ~*(ulong *)(p_Var9 + uVar14 * 8 + 0x40);
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
      uVar13 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | uVar11 & 0x7fffffffffffffc0;
    }
    uVar14 = uVar13 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var9 + uVar14 + 0x40) = 1L << (uVar13 & 0x3f) | *(ulong *)(p_Var9 + uVar14 + 0x40);
    puVar1 = (undefined8 *)(*(long *)(p_Var9 + 0x30) + uVar13 * 0x10);
    *puVar1 = pcVar3;
    puVar1[1] = pvVar4;
    FUN_1000523d8(puVar12,*(long *)(p_Var9 + 0x38) + lVar18 * uVar13,param_3);
    *(long *)(p_Var9 + 0x10) = *(long *)(p_Var9 + 0x10) + 1;
    lVar10 = lVar17;
  } while( true );
}



/* Address: 0x100468f9c | FUN_100468f9c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100468f9c(long param_1,bool param_2)

{
  __int64 capacity;
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
  __RawDictionaryStorage *original;
  __RawDictionaryStorage *p_Var10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined1 auStack_c8 [72];
  undefined1 auStack_80 [32];
  
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_DictionaryStorage *)&DAT_100fc7dc0;
  FUN_1000037f0(&DAT_100fc7dc0,&DAT_100c4c780);
  p_Var3 = original;
  Swift::_DictionaryStorage::_resize(this,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_100469238:
    _swift_release(original);
LAB_100469240:
    *unaff_x20 = (long)p_Var3;
    return;
  }
  p_Var10 = original + 0x40;
  uVar8 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar12 = uVar12 & *(ulong *)p_Var10;
  lVar6 = 0;
  do {
    if (uVar12 == 0) {
      do {
        lVar11 = lVar6 + 1;
        if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100469268);
          (*pcVar2)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar11) {
          if ((param_2 & 1U) == 0) {
            _swift_release(original);
            goto LAB_100469240;
          }
          uVar12 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          if (((byte)original[0x20] & 0x3f) < 6) {
            *(long *)p_Var10 = -1L << (uVar12 & 0x3f);
          }
          else {
            _bzero(p_Var10,uVar12 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_100469238;
        }
        uVar12 = *(ulong *)(p_Var10 + lVar11 * 8);
        lVar6 = lVar6 + 1;
      } while (uVar12 == 0);
      uVar5 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
    }
    else {
      uVar5 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
      lVar11 = lVar6;
    }
    uVar5 = LZCOUNT(uVar5) | lVar11 << 6;
    uVar13 = *(undefined8 *)(*(long *)(original + 0x30) + uVar5 * 8);
    if ((param_2 & 1U) == 0) {
      FUN_10000cbfc(*(long *)(original + 0x38) + uVar5 * 0x20,auStack_80);
    }
    else {
      FUN_100011080();
    }
    Swift::Hasher::init(*(__int64 *)(p_Var3 + 0x28));
    FUN_10045b454(0);
    FUN_100003a00(&DAT_100fc83e0,FUN_10045b454,&TargetProtocolConformanceDescriptor_100c4c7f8);
    into.unknown = auStack_c8;
    (extension_CoreFoundation)::CoreFoundation::_CFObject::hash(into);
    uVar4 = Swift::Hasher::_finalize(into);
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
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10046926c);
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
    lVar6 = lVar11;
  } while( true );
}



/* Address: 0x10046926c | FUN_10046926c */

void FUN_10046926c(Bucket param_1,long param_2)

{
  _HashTable _Var1;
  String *pSVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *pvVar5;
  String SVar6;
  code *pcVar7;
  Bucket BVar8;
  Hasher into;
  ulong uVar9;
  UUID UVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined1 auStack_a8 [72];
  
  _Var1.unknown = (undefined *)(param_2 + 0x40);
  uVar11 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar16 = param_1.offset + 1U & (uVar11 ^ 0xffffffffffffffff);
  if ((*(ulong *)(_Var1.unknown + (uVar16 >> 6) * 8) >> (uVar16 & 0x3f) & 1) != 0) {
    uVar11 = ~uVar11;
    BVar8 = Swift::_HashTable::previousHole(param_1,_Var1);
    uVar17 = BVar8.offset + 1U & uVar11;
    do {
      pSVar2 = (String *)(*(long *)(param_2 + 0x30) + uVar16 * 0x10);
      pvVar5 = pSVar2->bridgeObject;
      SVar6 = *pSVar2;
      Swift::Hasher::init(*(__int64 *)(param_2 + 0x28));
      _swift_bridgeObjectRetain(pvVar5);
      into.unknown = auStack_a8;
      Swift::String::hash(into,SVar6);
      uVar9 = Swift::Hasher::_finalize(into);
      _swift_bridgeObjectRelease(pvVar5);
      uVar9 = uVar9 & uVar11;
      if (param_1.offset < (long)uVar17) {
        if (uVar9 < uVar17) {
LAB_100469360:
          if (param_1.offset < (long)uVar9) goto LAB_1004692e8;
        }
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x30) + param_1.offset * 0x10);
        puVar4 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar16 * 0x10);
        if ((param_1.offset != uVar16) || (puVar4 + 2 <= puVar3)) {
          uVar18 = *puVar4;
          puVar3[1] = puVar4[1];
          *puVar3 = uVar18;
        }
        lVar15 = *(long *)(param_2 + 0x38);
        UVar10 = Foundation::UUID::typeMetadataAccessor();
        lVar14 = *(long *)(*(long *)(UVar10.unknown + -8) + 0x48);
        lVar12 = lVar14 * param_1.offset;
        uVar9 = lVar15 + lVar12;
        lVar13 = lVar14 * uVar16;
        lVar15 = lVar15 + lVar13;
        param_1.offset = uVar16;
        if (lVar12 < lVar13 || (ulong)(lVar15 + lVar14) <= uVar9) {
          _swift_arrayInitWithTakeFrontToBack(uVar9,lVar15,1,UVar10.unknown);
        }
        else if (lVar12 - lVar13 != 0) {
          _swift_arrayInitWithTakeBackToFront(uVar9,lVar15,1);
        }
      }
      else if (uVar17 <= uVar9) goto LAB_100469360;
LAB_1004692e8:
      uVar16 = uVar16 + 1 & uVar11;
    } while ((*(ulong *)(_Var1.unknown + (uVar16 >> 6) * 8) >> (uVar16 & 0x3f) & 1) != 0);
  }
  uVar11 = (ulong)param_1.offset >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(_Var1.unknown + uVar11) =
       *(ulong *)(_Var1.unknown + uVar11) & (-1L << (param_1.offset & 0x3fU)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10046943c);
  (*pcVar7)();
}



/* Address: 0x10046943c | FUN_10046943c */

void FUN_10046943c(Bucket param_1,long param_2)

{
  _HashTable _Var1;
  code *pcVar2;
  UUID UVar3;
  Bucket BVar4;
  ulong uVar5;
  long lVar6;
  long extraout_x8;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  __int64 seed;
  undefined1 auStack_80 [8];
  code *local_78;
  ulong local_70;
  long local_68;
  
  UVar3 = Foundation::UUID::typeMetadataAccessor();
  lVar12 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar12 + 0x40));
  _Var1.unknown = (undefined *)(param_2 + 0x40);
  uVar7 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar13 = param_1.offset + 1U & (uVar7 ^ 0xffffffffffffffff);
  if ((*(ulong *)(_Var1.unknown + (uVar13 >> 6) * 8) >> (uVar13 & 0x3f) & 1) != 0) {
    uVar7 = ~uVar7;
    BVar4 = Swift::_HashTable::previousHole(param_1,_Var1);
    local_70 = BVar4.offset + 1U & uVar7;
    lVar9 = *(long *)(lVar12 + 0x48);
    local_78 = *(code **)(lVar12 + 0x10);
    local_68 = lVar12;
    do {
      lVar12 = lVar9 * uVar13;
      (*local_78)(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                  *(long *)(param_2 + 0x30) + lVar12,UVar3.unknown);
      seed = *(__int64 *)(param_2 + 0x28);
      FUN_100003a00(&DAT_100fc7ed8,PTR_typeMetadataAccessor_100ea7500,
                    PTR_Foundation__Foundation__UUID_>Swift__Hashable_100ea7518);
      uVar5 = Swift::Hashable::_rawHashValue(seed);
      (**(code **)(local_68 + 8))
                (auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar3.unknown);
      uVar5 = uVar5 & uVar7;
      if (param_1.offset < (long)local_70) {
        if (local_70 <= uVar5 || (long)uVar5 <= param_1.offset) {
LAB_1004695c0:
          lVar8 = lVar9 * param_1.offset;
          uVar5 = *(long *)(param_2 + 0x30) + lVar8;
          lVar6 = *(long *)(param_2 + 0x30) + lVar12;
          if ((lVar8 < lVar12) || ((ulong)(lVar6 + lVar9) <= uVar5)) {
            _swift_arrayInitWithTakeFrontToBack(uVar5,lVar6,1,UVar3.unknown);
          }
          else if (lVar8 - lVar12 != 0) {
            _swift_arrayInitWithTakeBackToFront(uVar5,lVar6,1,UVar3.unknown);
          }
          lVar12 = *(long *)(param_2 + 0x38);
          lVar6 = 0;
          FUN_10045ba0c();
          lVar11 = *(long *)(*(long *)(lVar6 + -8) + 0x48);
          lVar8 = lVar11 * param_1.offset;
          uVar5 = lVar12 + lVar8;
          lVar10 = lVar11 * uVar13;
          lVar12 = lVar12 + lVar10;
          param_1.offset = uVar13;
          if (lVar8 < lVar10 || (ulong)(lVar12 + lVar11) <= uVar5) {
            _swift_arrayInitWithTakeFrontToBack(uVar5,lVar12,1,lVar6);
          }
          else if (lVar8 - lVar10 != 0) {
            _swift_arrayInitWithTakeBackToFront(uVar5,lVar12,1);
          }
        }
      }
      else if (local_70 <= uVar5 && (long)uVar5 <= param_1.offset) goto LAB_1004695c0;
      uVar13 = uVar13 + 1 & uVar7;
    } while ((*(ulong *)(_Var1.unknown + (uVar13 >> 6) * 8) >> (uVar13 & 0x3f) & 1) != 0);
  }
  uVar7 = (ulong)param_1.offset >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(_Var1.unknown + uVar7) =
       *(ulong *)(_Var1.unknown + uVar7) & (-1L << (param_1.offset & 0x3fU)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1004696c4);
  (*pcVar2)();
}



/* Address: 0x1004696c4 | FUN_1004696c4 */

void FUN_1004696c4(Bucket param_1,long param_2,long param_3,undefined8 param_4)

{
  _HashTable _Var1;
  code *pcVar2;
  UUID UVar3;
  Bucket BVar4;
  ulong uVar5;
  long lVar6;
  long extraout_x8;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  __int64 seed;
  ulong uVar14;
  ulong local_90;
  long local_88;
  undefined8 uStack_80;
  code *local_78;
  ulong local_70;
  long local_68;
  
  local_88 = param_3;
  uStack_80 = param_4;
  UVar3 = Foundation::UUID::typeMetadataAccessor();
  lVar13 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar13 + 0x40));
  lVar12 = (long)&local_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  _Var1.unknown = (undefined *)(param_2 + 0x40);
  uVar7 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar14 = param_1.offset + 1U & (uVar7 ^ 0xffffffffffffffff);
  if ((*(ulong *)(_Var1.unknown + (uVar14 >> 6) * 8) >> (uVar14 & 0x3f) & 1) != 0) {
    uVar7 = ~uVar7;
    BVar4 = Swift::_HashTable::previousHole(param_1,_Var1);
    local_70 = BVar4.offset + 1U & uVar7;
    lVar9 = *(long *)(lVar13 + 0x48);
    local_78 = *(code **)(lVar13 + 0x10);
    local_90 = uVar7;
    local_68 = lVar13;
    do {
      lVar13 = lVar9 * uVar14;
      (*local_78)(lVar12,*(long *)(param_2 + 0x30) + lVar13,UVar3.unknown);
      seed = *(__int64 *)(param_2 + 0x28);
      FUN_100003a00(&DAT_100fc7ed8,PTR_typeMetadataAccessor_100ea7500,
                    PTR_Foundation__Foundation__UUID_>Swift__Hashable_100ea7518);
      uVar5 = Swift::Hashable::_rawHashValue(seed);
      (**(code **)(local_68 + 8))(lVar12,UVar3.unknown);
      uVar5 = uVar5 & uVar7;
      if (param_1.offset < (long)local_70) {
        if (local_70 <= uVar5 || (long)uVar5 <= param_1.offset) {
LAB_100469844:
          lVar8 = lVar9 * param_1.offset;
          uVar7 = *(long *)(param_2 + 0x30) + lVar8;
          lVar6 = *(long *)(param_2 + 0x30) + lVar13;
          if ((lVar8 < lVar13) || ((ulong)(lVar6 + lVar9) <= uVar7)) {
            _swift_arrayInitWithTakeFrontToBack(uVar7,lVar6,1,UVar3.unknown);
          }
          else if (lVar8 - lVar13 != 0) {
            _swift_arrayInitWithTakeBackToFront(uVar7,lVar6,1,UVar3.unknown);
          }
          lVar13 = *(long *)(param_2 + 0x38);
          lVar6 = local_88;
          FUN_1000037f0(local_88,uStack_80);
          uVar7 = local_90;
          lVar11 = *(long *)(*(long *)(lVar6 + -8) + 0x48);
          lVar8 = lVar11 * param_1.offset;
          uVar5 = lVar13 + lVar8;
          lVar10 = lVar11 * uVar14;
          lVar13 = lVar13 + lVar10;
          param_1.offset = uVar14;
          if (lVar8 < lVar10 || (ulong)(lVar13 + lVar11) <= uVar5) {
            _swift_arrayInitWithTakeFrontToBack(uVar5,lVar13,1,lVar6);
            uVar7 = local_90;
          }
          else if (lVar8 - lVar10 != 0) {
            _swift_arrayInitWithTakeBackToFront(uVar5,lVar13,1);
          }
        }
      }
      else if (local_70 <= uVar5 && (long)uVar5 <= param_1.offset) goto LAB_100469844;
      uVar14 = uVar14 + 1 & uVar7;
    } while ((*(ulong *)(_Var1.unknown + (uVar14 >> 6) * 8) >> (uVar14 & 0x3f) & 1) != 0);
  }
  uVar7 = (ulong)param_1.offset >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(_Var1.unknown + uVar7) =
       *(ulong *)(_Var1.unknown + uVar7) & (-1L << (param_1.offset & 0x3fU)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100469944);
  (*pcVar2)();
}



/* Address: 0x100469944 | FUN_100469944 */

void FUN_100469944(Bucket param_1,long param_2,code *param_3)

{
  _HashTable _Var1;
  String *pSVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *pvVar5;
  String SVar6;
  code *pcVar7;
  Bucket BVar8;
  Hasher into;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined1 auStack_a8 [72];
  
  _Var1.unknown = (undefined *)(param_2 + 0x40);
  uVar11 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar16 = param_1.offset + 1U & (uVar11 ^ 0xffffffffffffffff);
  if ((*(ulong *)(_Var1.unknown + (uVar16 >> 6) * 8) >> (uVar16 & 0x3f) & 1) != 0) {
    uVar11 = ~uVar11;
    BVar8 = Swift::_HashTable::previousHole(param_1,_Var1);
    uVar17 = BVar8.offset + 1U & uVar11;
    do {
      pSVar2 = (String *)(*(long *)(param_2 + 0x30) + uVar16 * 0x10);
      pvVar5 = pSVar2->bridgeObject;
      SVar6 = *pSVar2;
      Swift::Hasher::init(*(__int64 *)(param_2 + 0x28));
      _swift_bridgeObjectRetain(pvVar5);
      into.unknown = auStack_a8;
      Swift::String::hash(into,SVar6);
      uVar9 = Swift::Hasher::_finalize(into);
      _swift_bridgeObjectRelease(pvVar5);
      uVar9 = uVar9 & uVar11;
      if (param_1.offset < (long)uVar17) {
        if (uVar9 < uVar17) {
LAB_100469a3c:
          if (param_1.offset < (long)uVar9) goto LAB_1004699c4;
        }
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x30) + param_1.offset * 0x10);
        puVar4 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar16 * 0x10);
        if ((param_1.offset != uVar16) || (puVar4 + 2 <= puVar3)) {
          uVar18 = *puVar4;
          puVar3[1] = puVar4[1];
          *puVar3 = uVar18;
        }
        lVar15 = *(long *)(param_2 + 0x38);
        lVar10 = 0;
        (*param_3)();
        lVar14 = *(long *)(*(long *)(lVar10 + -8) + 0x48);
        lVar12 = lVar14 * param_1.offset;
        uVar9 = lVar15 + lVar12;
        lVar13 = lVar14 * uVar16;
        lVar15 = lVar15 + lVar13;
        param_1.offset = uVar16;
        if (lVar12 < lVar13 || (ulong)(lVar15 + lVar14) <= uVar9) {
          _swift_arrayInitWithTakeFrontToBack(uVar9,lVar15,1,lVar10);
        }
        else if (lVar12 - lVar13 != 0) {
          _swift_arrayInitWithTakeBackToFront(uVar9,lVar15,1);
        }
      }
      else if (uVar17 <= uVar9) goto LAB_100469a3c;
LAB_1004699c4:
      uVar16 = uVar16 + 1 & uVar11;
    } while ((*(ulong *)(_Var1.unknown + (uVar16 >> 6) * 8) >> (uVar16 & 0x3f) & 1) != 0);
  }
  uVar11 = (ulong)param_1.offset >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(_Var1.unknown + uVar11) =
       *(ulong *)(_Var1.unknown + uVar11) & (-1L << (param_1.offset & 0x3fU)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x100469b18);
  (*pcVar7)();
}



/* Address: 0x100469b18 | FUN_100469b18 */

void FUN_100469b18(ulong *param_1)

{
  ContiguousArray CVar1;
  __int64 _Var2;
  _ContiguousArrayBuffer<undefined> _Var3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong minimumCapacity;
  ulong uVar7;
  undefined *local_78;
  ulong uStack_70;
  undefined1 auStack_68 [8];
  long local_60;
  ulong uStack_58;
  
  CVar1.unknown = (undefined *)0x0;
  FUN_10045ba0c();
  lVar5 = *(long *)(CVar1.unknown + -8);
  uVar4 = *param_1;
  uVar6 = uVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar6 & 1) == 0) {
    FUN_10046bd64();
  }
  uVar6 = *(ulong *)(uVar4 + 0x10);
  uVar7 = (ulong)*(byte *)(lVar5 + 0x50) + 0x20 &
          ((ulong)*(byte *)(lVar5 + 0x50) ^ 0xffffffffffffffff);
  local_60 = uVar4 + uVar7;
  uStack_58 = uVar6;
  _Var2 = Swift::_minimumMergeRunLength(uVar6);
  if (_Var2 < (long)uVar6) {
    minimumCapacity = uVar6 >> 1;
    _Var3.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (1 < uVar6) {
      _Var3 = Swift::ContiguousArray::_allocateBufferUninitialized(minimumCapacity,CVar1);
      *(ulong *)(_Var3.unknown + 0x10) = minimumCapacity;
    }
    local_78 = _Var3.unknown + uVar7;
    uStack_70 = minimumCapacity;
    FUN_100469c34(&local_78,auStack_68,&local_60,_Var2);
    *(undefined8 *)(_Var3.unknown + 0x10) = 0;
    _swift_release(_Var3.unknown);
  }
  else if (uVar6 != 0) {
    FUN_10046a29c(0,uVar6,1,&local_60);
  }
  *param_1 = uVar4;
  return;
}



/* Address: 0x100469c34 | FUN_100469c34 */

void FUN_100469c34(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long unaff_x21;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined1 auStack_e0 [8];
  long local_d8;
  long *local_d0;
  long *local_c8;
  long local_c0;
  undefined *local_58;
  
  lVar4 = 0;
  local_c8 = param_1;
  FUN_10045ba0c();
  local_c0 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_c0 + 0x40));
  puVar8 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar9 = (long)puVar8 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar23 = lVar9 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar24 = lVar23 - extraout_x12_01;
  local_58 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar10 = param_3[1];
  local_d0 = param_3;
  if (0 < lVar10) {
    lVar19 = 0;
    local_d8 = param_4;
    do {
      pcVar1 = FUN_10045ba0c;
      lVar11 = lVar19 + 1;
      if (lVar11 < lVar10) {
        lVar18 = *param_3;
        lVar21 = *(long *)(local_c0 + 0x48);
        lVar16 = lVar18 + lVar21 * lVar11;
        FUN_1000c495c(lVar16,lVar24,FUN_10045ba0c);
        FUN_1000c495c(lVar18 + lVar21 * lVar19,lVar23);
        bVar2 = Foundation::Date::<_infix
                          ((undefined *)(lVar24 + *(int *)(lVar4 + 0x1c)),
                           (undefined *)(lVar23 + *(int *)(lVar4 + 0x1c)),(Date)pcVar1);
        FUN_10046bfa8(lVar23);
        FUN_10046bfa8(lVar24);
        lVar18 = lVar18 + lVar21 * (lVar19 + 2);
        lVar13 = lVar19 + 2;
        do {
          lVar11 = lVar10;
          if (lVar10 == lVar13) break;
          pcVar1 = FUN_10045ba0c;
          FUN_1000c495c(lVar18,lVar24,FUN_10045ba0c);
          FUN_1000c495c(lVar16,lVar23);
          bVar3 = Foundation::Date::<_infix
                            ((undefined *)(lVar24 + *(int *)(lVar4 + 0x1c)),
                             (undefined *)(lVar23 + *(int *)(lVar4 + 0x1c)),(Date)pcVar1);
          FUN_10046bfa8(lVar23);
          FUN_10046bfa8(lVar24);
          lVar18 = lVar18 + lVar21;
          lVar16 = lVar16 + lVar21;
          lVar11 = lVar13;
          lVar13 = lVar13 + 1;
        } while (bVar2 == bVar3);
        param_4 = local_d8;
        if (bVar2) {
          if (lVar11 < lVar19) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10046a270);
            (*pcVar1)();
          }
          if (lVar19 < lVar11) {
            lVar13 = 0;
            lVar16 = *param_3;
            lVar22 = lVar21 * (lVar11 + -1);
            lVar20 = lVar11 * lVar21;
            lVar18 = lVar19 * lVar21;
            lVar10 = lVar19;
            do {
              if (lVar10 != lVar11 + lVar13 + -1) {
                if (lVar16 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x10046a290);
                  (*pcVar1)();
                }
                uVar15 = lVar16 + lVar18;
                FUN_1000523d8(uVar15,lVar9,FUN_10045ba0c);
                if ((lVar18 < lVar22) || ((ulong)(lVar16 + lVar20) <= uVar15)) {
                  _swift_arrayInitWithTakeFrontToBack(uVar15,lVar16 + lVar22,1,lVar4);
                }
                else if (lVar21 != 0) {
                  _swift_arrayInitWithTakeBackToFront(uVar15,lVar16 + lVar22,1,lVar4);
                }
                FUN_1000523d8(lVar9,lVar16 + lVar22,FUN_10045ba0c);
              }
              lVar10 = lVar10 + 1;
              lVar13 = lVar13 + -1;
              lVar22 = lVar22 - lVar21;
              lVar20 = lVar20 - lVar21;
              lVar18 = lVar18 + lVar21;
              param_3 = local_d0;
              param_4 = local_d8;
            } while (lVar10 < lVar11 + lVar13);
          }
        }
      }
      lVar10 = param_3[1];
      lVar18 = lVar11;
      if (lVar11 < lVar10) {
        if (SBORROW8(lVar11,lVar19)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10046a26c);
          (*pcVar1)();
        }
        if (lVar11 - lVar19 < param_4) {
          if (SCARRY8(lVar19,param_4)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10046a274);
            (*pcVar1)();
          }
          lVar16 = lVar19 + param_4;
          if (lVar10 <= lVar19 + param_4) {
            lVar16 = lVar10;
          }
          if (lVar16 < lVar19) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10046a278);
            (*pcVar1)();
          }
          if (lVar11 != lVar16) {
            lVar14 = *param_3;
            lVar12 = *(long *)(local_c0 + 0x48);
            lVar13 = lVar14 + lVar12 * (lVar11 + -1);
            lVar10 = lVar19 - lVar11;
            lVar21 = lVar14 + lVar11 * lVar12;
            lVar20 = lVar10;
            lVar22 = lVar13;
            lVar17 = lVar21;
LAB_100469fd8:
            do {
              pcVar1 = FUN_10045ba0c;
              FUN_1000c495c(lVar21,lVar24,FUN_10045ba0c);
              FUN_1000c495c(lVar13,lVar23);
              bVar2 = Foundation::Date::<_infix
                                ((undefined *)(lVar24 + *(int *)(lVar4 + 0x1c)),
                                 (undefined *)(lVar23 + *(int *)(lVar4 + 0x1c)),(Date)pcVar1);
              FUN_10046bfa8(lVar23);
              FUN_10046bfa8(lVar24);
              if (bVar2) {
                if (lVar14 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x10046a27c);
                  (*pcVar1)();
                }
                FUN_1000523d8(lVar21,puVar8,FUN_10045ba0c);
                _swift_arrayInitWithTakeFrontToBack(lVar21,lVar13,1,lVar4);
                FUN_1000523d8(puVar8,lVar13,FUN_10045ba0c);
                lVar13 = lVar13 + -lVar12;
                lVar21 = lVar21 + -lVar12;
                bVar2 = lVar10 != -1;
                lVar10 = lVar10 + 1;
                if (bVar2) goto LAB_100469fd8;
              }
              lVar11 = lVar11 + 1;
              lVar13 = lVar22 + lVar12;
              lVar10 = lVar20 + -1;
              lVar21 = lVar17 + lVar12;
              lVar18 = lVar16;
              param_3 = local_d0;
              param_4 = local_d8;
              lVar20 = lVar10;
              lVar22 = lVar13;
              lVar17 = lVar21;
            } while (lVar11 != lVar16);
          }
        }
      }
      puVar7 = local_58;
      if (lVar18 < lVar19) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10046a260);
        (*pcVar1)();
      }
      puVar5 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar6 = puVar7;
      if (((ulong)puVar5 & 1) == 0) {
        puVar6 = (undefined *)0x0;
        FUN_10046a6f4(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
      }
      uVar15 = *(ulong *)(puVar6 + 0x10);
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar15) {
        puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
        FUN_10046a6f4(puVar7,uVar15 + 1,1,puVar6);
        puVar6 = puVar7;
      }
      *(ulong *)(puVar6 + 0x10) = uVar15 + 1;
      *(long *)(puVar6 + uVar15 * 0x10 + 0x20) = lVar19;
      *(long *)(puVar6 + uVar15 * 0x10 + 0x28) = lVar18;
      local_58 = puVar6;
      if (*local_c8 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10046a294);
        (*pcVar1)();
      }
      FUN_10046a474(&local_58,*local_c8,param_3);
      puVar7 = local_58;
      if (unaff_x21 != 0) goto LAB_10046a230;
      lVar10 = param_3[1];
      lVar19 = lVar18;
    } while (lVar18 < lVar10);
  }
  puVar7 = local_58;
  lVar4 = *local_c8;
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10046a29c);
    (*pcVar1)();
  }
  puVar5 = local_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar5 & 1) == 0) {
    FUN_10046ace4();
  }
  uVar15 = *(ulong *)(puVar7 + 0x10);
  while (local_58 = puVar7, 1 < uVar15) {
    lVar9 = *param_3;
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10046a298);
      (*pcVar1)();
    }
    lVar24 = uVar15 - 1;
    lVar19 = *(long *)(puVar7 + uVar15 * 0x10);
    lVar10 = *(long *)(puVar7 + lVar24 * 0x10 + 0x28);
    lVar23 = *(long *)(local_c0 + 0x48);
    FUN_10046a7f4(lVar9 + lVar23 * lVar19,lVar9 + lVar23 * *(long *)(puVar7 + lVar24 * 0x10 + 0x20),
                  lVar9 + lVar23 * lVar10,lVar4);
    if (unaff_x21 != 0) break;
    if (lVar10 < lVar19) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10046a264);
      (*pcVar1)();
    }
    puVar5 = puVar7;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)puVar5 & 1) == 0) {
      FUN_10046ace4();
    }
    if (*(ulong *)(puVar7 + 0x10) <= uVar15 - 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10046a268);
      (*pcVar1)();
    }
    *(long *)(puVar7 + uVar15 * 0x10) = lVar19;
    *(long *)((long)(puVar7 + uVar15 * 0x10) + 8) = lVar10;
    local_58 = puVar7;
    FUN_10046ac5c(lVar24);
    puVar7 = local_58;
    param_3 = local_d0;
    uVar15 = *(ulong *)(local_58 + 0x10);
  }
LAB_10046a230:
  _swift_bridgeObjectRelease(puVar7);
  return;
}



/* Address: 0x10046a29c | FUN_10046a29c */

void FUN_10046a29c(long param_1,long param_2,long param_3,long *param_4)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  Date DVar4;
  long extraout_x8;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long extraout_x12;
  long extraout_x13;
  long extraout_x13_00;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  lVar3 = 0;
  FUN_10045ba0c();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar10 = &stack0xffffffffffffff60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar11 = (long)puVar10 - extraout_x13;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar12 = lVar11 - extraout_x13_00;
  if (param_3 != param_2) {
    lVar5 = *param_4;
    lVar6 = *(long *)(extraout_x12 + 0x48);
    lVar7 = lVar5 + lVar6 * (param_3 + -1);
    param_1 = param_1 - param_3;
    lVar13 = lVar5 + lVar6 * param_3;
    lVar14 = lVar13;
    lVar9 = param_1;
    lVar8 = lVar7;
LAB_10046a3d4:
    do {
      FUN_1000c495c(lVar13,lVar12,FUN_10045ba0c);
      DVar4.unknown = FUN_10045ba0c;
      FUN_1000c495c(lVar7,lVar11);
      bVar2 = Foundation::Date::<_infix
                        ((undefined *)(lVar12 + *(int *)(lVar3 + 0x1c)),
                         (undefined *)(lVar11 + *(int *)(lVar3 + 0x1c)),DVar4);
      FUN_10046bfa8(lVar11);
      FUN_10046bfa8(lVar12);
      if (bVar2) {
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10046a474);
          (*pcVar1)();
        }
        FUN_1000523d8(lVar13,puVar10,FUN_10045ba0c);
        _swift_arrayInitWithTakeFrontToBack(lVar13,lVar7,1,lVar3);
        FUN_1000523d8(puVar10,lVar7,FUN_10045ba0c);
        lVar7 = lVar7 + -lVar6;
        lVar13 = lVar13 + -lVar6;
        bVar2 = param_1 != -1;
        param_1 = param_1 + 1;
        if (bVar2) goto LAB_10046a3d4;
      }
      param_3 = param_3 + 1;
      lVar7 = lVar8 + lVar6;
      param_1 = lVar9 + -1;
      lVar13 = lVar14 + lVar6;
      lVar14 = lVar13;
      lVar9 = param_1;
      lVar8 = lVar7;
    } while (param_3 != param_2);
  }
  return;
}



/* Address: 0x10046a474 | FUN_10046a474 */

undefined8 FUN_10046a474(ulong *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  uVar8 = *param_1;
  if (1 < *(ulong *)(uVar8 + 0x10)) {
    uVar5 = uVar8;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar5 & 1) == 0) {
      FUN_10046ace4();
    }
    *param_1 = uVar8;
    uVar5 = *(ulong *)(uVar8 + 0x10);
    do {
      lVar9 = uVar5 - 1;
      if (uVar5 < 4) {
        if (uVar5 == 3) {
          bVar3 = SBORROW8(*(long *)(uVar8 + 0x28),*(long *)(uVar8 + 0x20));
          lVar6 = *(long *)(uVar8 + 0x28) - *(long *)(uVar8 + 0x20);
          goto LAB_10046a548;
        }
        if (uVar5 < 2) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10046a6dc);
          (*pcVar2)();
        }
        plVar1 = (long *)(uVar8 + uVar5 * 0x10);
        lVar6 = *plVar1;
        lVar7 = plVar1[1];
        bVar3 = SBORROW8(lVar7,lVar6);
        lVar7 = lVar7 - lVar6;
LAB_10046a5ac:
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10046a6cc);
          (*pcVar2)();
        }
        lVar6 = uVar8 + lVar9 * 0x10;
        lVar4 = *(long *)(lVar6 + 0x20);
        lVar6 = *(long *)(lVar6 + 0x28);
        if (SBORROW8(lVar6,lVar4)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10046a6d4);
          (*pcVar2)();
        }
        lVar10 = lVar9;
        if (lVar6 - lVar4 < lVar7) {
          return 1;
        }
      }
      else {
        lVar7 = uVar8 + 0x20 + uVar5 * 0x10;
        if (SBORROW8(*(long *)(lVar7 + -0x38),*(long *)(lVar7 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10046a6b4);
          (*pcVar2)();
        }
        lVar6 = *(long *)(lVar7 + -0x28) - *(long *)(lVar7 + -0x30);
        if (SBORROW8(*(long *)(lVar7 + -0x28),*(long *)(lVar7 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10046a6b8);
          (*pcVar2)();
        }
        plVar1 = (long *)(uVar8 + uVar5 * 0x10);
        lVar4 = *plVar1;
        lVar10 = plVar1[1];
        lVar12 = lVar10 - lVar4;
        if (SBORROW8(lVar10,lVar4)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10046a6c0);
          (*pcVar2)();
        }
        if (SCARRY8(lVar6,lVar12)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10046a6c8);
          (*pcVar2)();
        }
        bVar3 = false;
        if (lVar6 + lVar12 < *(long *)(lVar7 + -0x38) - *(long *)(lVar7 + -0x40)) {
LAB_10046a548:
          if (bVar3) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10046a6bc);
            (*pcVar2)();
          }
          plVar1 = (long *)(uVar8 + uVar5 * 0x10);
          lVar4 = *plVar1;
          lVar10 = plVar1[1];
          lVar7 = lVar10 - lVar4;
          if (SBORROW8(lVar10,lVar4)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10046a6c4);
            (*pcVar2)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar4 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar4;
          if (SBORROW8(lVar10,lVar4)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10046a6d0);
            (*pcVar2)();
          }
          if (SCARRY8(lVar7,lVar12)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10046a6d8);
            (*pcVar2)();
          }
          bVar3 = false;
          if (lVar7 + lVar12 < lVar6) goto LAB_10046a5ac;
          lVar10 = uVar5 - 2;
          if (lVar12 <= lVar6) {
            lVar10 = lVar9;
          }
        }
        else {
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar7 = *plVar1;
          lVar4 = plVar1[1];
          if (SBORROW8(lVar4,lVar7)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10046a6e0);
            (*pcVar2)();
          }
          lVar10 = uVar5 - 2;
          if (lVar4 - lVar7 <= lVar6) {
            lVar10 = lVar9;
          }
        }
      }
      uVar11 = lVar10 - 1;
      if (uVar5 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10046a6a8);
        (*pcVar2)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10046a6f4);
        (*pcVar2)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar6 = *plVar1;
      lVar7 = plVar1[1];
      lVar4 = 0;
      FUN_10045ba0c();
      lVar4 = *(long *)(*(long *)(lVar4 + -8) + 0x48);
      FUN_10046a7f4(lVar9 + lVar4 * lVar12,lVar9 + lVar4 * lVar6,lVar9 + lVar4 * lVar7,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar12) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10046a6ac);
        (*pcVar2)();
      }
      uVar5 = uVar8;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar5 & 1) == 0) {
        FUN_10046ace4();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10046a6b0);
        (*pcVar2)();
      }
      lVar9 = uVar8 + uVar11 * 0x10;
      *(long *)(lVar9 + 0x20) = lVar12;
      *(long *)(lVar9 + 0x28) = lVar7;
      *param_1 = uVar8;
      FUN_10046ac5c(lVar10);
      uVar8 = *param_1;
      uVar5 = *(ulong *)(uVar8 + 0x10);
    } while (1 < uVar5);
  }
  return 1;
}



/* Address: 0x10046a6f4 | FUN_10046a6f4 */

undefined * FUN_10046a6f4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10046a7f4);
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
    puVar3 = &DAT_100fc8398;
    FUN_1000037f0(&DAT_100fc8398,&DAT_100c4cf28);
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
    _memcpy(puVar1,puVar4,uVar6 << 4);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x10046a7f4 | FUN_10046a7f4 */

undefined8 FUN_10046a7f4(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  long extraout_x8;
  undefined1 *puVar5;
  long extraout_x12;
  long extraout_x13;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong local_70;
  ulong local_68;
  ulong local_58;
  
  lVar4 = 0;
  FUN_10045ba0c();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar5 = &stack0xffffffffffffff60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar11 = (long)puVar5 - extraout_x13;
  lVar13 = *(long *)(extraout_x12 + 0x48);
  if (lVar13 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10046ac54);
    (*pcVar2)();
  }
  if ((param_2 - param_1 == -0x8000000000000000) && (lVar13 == -1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10046ac58);
    (*pcVar2)();
  }
  if ((param_3 - param_2 == -0x8000000000000000) && (lVar13 == -1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10046ac5c);
    (*pcVar2)();
  }
  lVar7 = 0;
  if (lVar13 != 0) {
    lVar7 = (long)(param_2 - param_1) / lVar13;
  }
  lVar6 = 0;
  if (lVar13 != 0) {
    lVar6 = (long)(param_3 - param_2) / lVar13;
  }
  local_68 = param_4;
  local_58 = param_1;
  if (lVar7 < lVar6) {
    lVar6 = lVar7 * lVar13;
    if ((param_4 < param_1) || (param_1 + lVar6 <= param_4)) {
      _swift_arrayInitWithTakeFrontToBack(param_4,param_1,lVar7,lVar4);
    }
    else if (param_4 != param_1) {
      _swift_arrayInitWithTakeBackToFront(param_4,param_1,lVar7,lVar4);
    }
    uVar12 = param_4 + lVar6;
    local_70 = uVar12;
    if (0 < lVar6 && param_2 < param_3) {
      do {
        pcVar2 = FUN_10045ba0c;
        FUN_1000c495c(param_2,lVar11,FUN_10045ba0c);
        FUN_1000c495c(param_4,puVar5);
        bVar3 = Foundation::Date::<_infix
                          ((undefined *)(lVar11 + *(int *)(lVar4 + 0x1c)),
                           (Date)(puVar5 + *(int *)(lVar4 + 0x1c)),(Date)pcVar2);
        FUN_10046bfa8(puVar5);
        FUN_10046bfa8(lVar11);
        if (bVar3) {
          uVar8 = param_2 + lVar13;
          uVar10 = param_4;
          if ((param_1 < param_2) || (uVar8 <= param_1)) {
            _swift_arrayInitWithTakeFrontToBack(param_1,param_2,1,lVar4);
            uVar9 = local_68;
          }
          else {
            uVar9 = local_68;
            if (param_1 != param_2) {
              _swift_arrayInitWithTakeBackToFront(param_1,param_2,1,lVar4);
              uVar9 = local_68;
            }
          }
        }
        else {
          uVar10 = param_4 + lVar13;
          uVar8 = param_2;
          uVar9 = uVar10;
          if ((param_1 < param_4) || (uVar10 <= param_1)) {
            _swift_arrayInitWithTakeFrontToBack(param_1,param_4,1,lVar4);
          }
          else if (param_1 != param_4) {
            _swift_arrayInitWithTakeBackToFront(param_1,param_4,1,lVar4);
          }
        }
        local_68 = uVar9;
        param_1 = param_1 + lVar13;
        local_58 = param_1;
      } while ((uVar10 < uVar12) &&
              (param_2 = uVar8, param_4 = uVar10, local_58 = param_1, uVar8 < param_3));
    }
  }
  else {
    lVar7 = lVar6 * lVar13;
    if ((param_4 < param_2) || (param_2 + lVar7 <= param_4)) {
      _swift_arrayInitWithTakeFrontToBack(param_4,param_2,lVar6,lVar4);
    }
    else if (param_4 != param_2) {
      _swift_arrayInitWithTakeBackToFront(param_4,param_2,lVar6,lVar4);
    }
    uVar12 = param_4 + lVar7;
    local_70 = uVar12;
    local_58 = param_2;
    if (0 < lVar7 && param_1 < param_2) {
      lVar13 = -lVar13;
      local_58 = param_2;
      do {
        uVar10 = local_58;
        uVar8 = local_58 + lVar13;
        uVar9 = param_3;
        while( true ) {
          param_3 = uVar9 + lVar13;
          uVar1 = uVar12 + lVar13;
          pcVar2 = FUN_10045ba0c;
          FUN_1000c495c(uVar1,lVar11,FUN_10045ba0c);
          FUN_1000c495c(uVar8,puVar5);
          bVar3 = Foundation::Date::<_infix
                            ((undefined *)(lVar11 + *(int *)(lVar4 + 0x1c)),
                             (Date)(puVar5 + *(int *)(lVar4 + 0x1c)),(Date)pcVar2);
          FUN_10046bfa8(puVar5);
          FUN_10046bfa8(lVar11);
          if (bVar3) break;
          local_70 = uVar1;
          if ((uVar9 < uVar12) || (uVar12 <= param_3)) {
            _swift_arrayInitWithTakeFrontToBack(param_3,uVar1,1,lVar4);
          }
          else if (uVar9 != uVar12) {
            _swift_arrayInitWithTakeBackToFront(param_3,uVar1,1,lVar4);
          }
          uVar9 = param_3;
          uVar12 = uVar1;
          if (uVar1 <= param_4) goto LAB_10046aaa0;
        }
        if ((uVar9 < uVar10) || (uVar10 <= param_3)) {
          _swift_arrayInitWithTakeFrontToBack(param_3,uVar8,1,lVar4);
        }
        else if (uVar9 != uVar10) {
          _swift_arrayInitWithTakeBackToFront(param_3,uVar8,1,lVar4);
        }
        local_58 = uVar8;
      } while ((param_4 < uVar12) && (param_1 < uVar8));
    }
  }
LAB_10046aaa0:
  FUN_1000cd0bc(&local_58,&local_68,&local_70);
  return 1;
}



/* Address: 0x10046ac5c | FUN_10046ac5c */

undefined1  [16] FUN_10046ac5c(ulong param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  ulong uVar4;
  undefined1 (*pauVar5) [16];
  ulong uVar6;
  ulong *unaff_x20;
  long lVar7;
  
  uVar6 = *unaff_x20;
  uVar4 = uVar6;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar4 & 1) == 0) {
    FUN_10046ace4();
  }
  if (param_1 < *(ulong *)(uVar6 + 0x10)) {
    lVar7 = *(ulong *)(uVar6 + 0x10) - 1;
    lVar1 = uVar6 + param_1 * 0x10;
    pauVar5 = (undefined1 (*) [16])(lVar1 + 0x20);
    auVar2 = *pauVar5;
    _memmove(pauVar5,(void *)(lVar1 + 0x30),(lVar7 - param_1) * 0x10);
    *(long *)(uVar6 + 0x10) = lVar7;
    *unaff_x20 = uVar6;
    return auVar2;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10046ace4);
  (*pcVar3)();
}



/* Address: 0x10046ace4 | FUN_10046ace4 */

void FUN_10046ace4(long param_1)

{
  FUN_10046a6f4(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x10046acf8 | FUN_10046acf8 */

void FUN_10046acf8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10046ae4c();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x10046ad1c | FUN_10046ad1c */

void FUN_10046ad1c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10046afe4();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x10046ad38 | FUN_10046ad38 */

void FUN_10046ad38(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10046b160();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x10046ad74 | FUN_10046ad74 */

void FUN_10046ad74(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10046b160();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x10046adb0 | FUN_10046adb0 */

void FUN_10046adb0(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10046b2ec();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x10046adcc | FUN_10046adcc */

void FUN_10046adcc(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10046b41c();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x10046ade8 | FUN_10046ade8 */

void FUN_10046ade8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10046b540();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x10046ae0c | FUN_10046ae0c */

void FUN_10046ae0c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10046b654();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x10046ae28 | FUN_10046ae28 */

void FUN_10046ae28(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10046b770();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x10046ae4c | FUN_10046ae4c */

undefined *
FUN_10046ae4c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  
  uVar7 = param_2;
  if ((param_3 & 1) != 0) {
    uVar7 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar7 < (long)param_2) {
      if ((long)(uVar7 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10046afe4);
        (*pcVar4)();
      }
      uVar7 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar7 <= (long)param_2) {
        uVar7 = param_2;
      }
    }
  }
  uVar10 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar7 <= (long)uVar10) {
    uVar7 = uVar10;
  }
  puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar7 != 0) {
    puVar5 = &DAT_100fc7ce8;
    FUN_1000037f0(&DAT_100fc7ce8,&DAT_100c4c6b0);
    puVar6 = &DAT_100fc7ce0;
    FUN_1000037f0(&DAT_100fc7ce0,&DAT_100c4d030);
    lVar11 = *(long *)(*(long *)(puVar6 + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(puVar6 + -8) + 0x50);
    uVar12 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    _swift_allocObject(puVar5,uVar12 + lVar11 * uVar7,uVar8 | 7);
    puVar6 = puVar5;
    _malloc_size();
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10046afdc);
      (*pcVar4)();
    }
    lVar9 = (long)puVar6 - uVar12;
    if (lVar9 == -0x8000000000000000 && lVar11 == -1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10046afe0);
      (*pcVar4)();
    }
    lVar3 = 0;
    if (lVar11 != 0) {
      lVar3 = lVar9 / lVar11;
    }
    *(ulong *)(puVar5 + 0x10) = uVar10;
    *(long *)(puVar5 + 0x18) = lVar3 << 1;
  }
  puVar6 = &DAT_100fc7ce0;
  FUN_1000037f0(&DAT_100fc7ce0,&DAT_100c4d030);
  uVar7 = (ulong)*(byte *)(*(long *)(puVar6 + -8) + 0x50);
  uVar7 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  puVar1 = puVar5 + uVar7;
  puVar2 = param_4 + uVar7;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar2,uVar10,puVar6);
  }
  else {
    if ((puVar5 < param_4) || (puVar2 + *(long *)(*(long *)(puVar6 + -8) + 0x48) * uVar10 <= puVar1)
       ) {
      _swift_arrayInitWithTakeFrontToBack(puVar1,puVar2,uVar10);
    }
    else if (puVar5 != param_4) {
      _swift_arrayInitWithTakeBackToFront(puVar1,puVar2,uVar10);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar5;
}



/* Address: 0x10046afe4 | FUN_10046afe4 */

undefined * FUN_10046afe4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  uVar7 = param_2;
  if ((param_3 & 1) != 0) {
    uVar7 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar7 < (long)param_2) {
      if ((long)(uVar7 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10046b160);
        (*pcVar3)();
      }
      uVar7 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar7 <= (long)param_2) {
        uVar7 = param_2;
      }
    }
  }
  uVar9 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar7 <= (long)uVar9) {
    uVar7 = uVar9;
  }
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar7 != 0) {
    puVar4 = &DAT_100fc8390;
    FUN_1000037f0(&DAT_100fc8390,&DAT_100c4cf20);
    lVar5 = 0;
    FUN_10045ba0c();
    lVar10 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
    uVar11 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    _swift_allocObject(puVar4,uVar11 + lVar10 * uVar7,uVar8 | 7);
    puVar6 = puVar4;
    _malloc_size();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10046b158);
      (*pcVar3)();
    }
    lVar5 = (long)puVar6 - uVar11;
    if (lVar5 == -0x8000000000000000 && lVar10 == -1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10046b15c);
      (*pcVar3)();
    }
    lVar2 = 0;
    if (lVar10 != 0) {
      lVar2 = lVar5 / lVar10;
    }
    *(ulong *)(puVar4 + 0x10) = uVar9;
    *(long *)(puVar4 + 0x18) = lVar2 << 1;
  }
  lVar5 = 0;
  FUN_10045ba0c();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar7 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  puVar6 = puVar4 + uVar7;
  puVar1 = param_4 + uVar7;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar6,puVar1,uVar9,lVar5);
  }
  else {
    if ((puVar4 < param_4) || (puVar1 + *(long *)(*(long *)(lVar5 + -8) + 0x48) * uVar9 <= puVar6))
    {
      _swift_arrayInitWithTakeFrontToBack(puVar6,puVar1,uVar9);
    }
    else if (puVar4 != param_4) {
      _swift_arrayInitWithTakeBackToFront(puVar6,puVar1,uVar9);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar4;
}



/* Address: 0x10046b160 | FUN_10046b160 */

undefined *
FUN_10046b160(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6,long param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10046b2ec);
        (*pcVar4)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar9 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar9) {
    uVar6 = uVar9;
  }
  puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar6 != 0) {
    FUN_1000037f0(param_5,param_6);
    lVar8 = param_7;
    FUN_1000037f0(param_7,param_8);
    lVar10 = *(long *)(*(long *)(lVar8 + -8) + 0x48);
    uVar7 = (ulong)*(byte *)(*(long *)(lVar8 + -8) + 0x50);
    uVar11 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
    _swift_allocObject(param_5,uVar11 + lVar10 * uVar6,uVar7 | 7);
    puVar5 = param_5;
    _malloc_size();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10046b2e4);
      (*pcVar4)();
    }
    lVar8 = (long)puVar5 - uVar11;
    if (lVar8 == -0x8000000000000000 && lVar10 == -1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10046b2e8);
      (*pcVar4)();
    }
    lVar3 = 0;
    if (lVar10 != 0) {
      lVar3 = lVar8 / lVar10;
    }
    *(ulong *)(param_5 + 0x10) = uVar9;
    *(long *)(param_5 + 0x18) = lVar3 << 1;
    puVar5 = param_5;
  }
  FUN_1000037f0(param_7,param_8);
  uVar6 = (ulong)*(byte *)(*(long *)(param_7 + -8) + 0x50);
  uVar6 = uVar6 + 0x20 & (uVar6 ^ 0xffffffffffffffff);
  puVar1 = puVar5 + uVar6;
  puVar2 = param_4 + uVar6;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar2,uVar9,param_7);
  }
  else {
    if ((puVar5 < param_4) || (puVar2 + *(long *)(*(long *)(param_7 + -8) + 0x48) * uVar9 <= puVar1)
       ) {
      _swift_arrayInitWithTakeFrontToBack(puVar1,puVar2,uVar9);
    }
    else if (puVar5 != param_4) {
      _swift_arrayInitWithTakeBackToFront(puVar1,puVar2,uVar9);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar5;
}



/* Address: 0x10046b2ec | FUN_10046b2ec */

undefined * FUN_10046b2ec(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10046b41c);
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
    puVar3 = &DAT_100fc8338;
    FUN_1000037f0(&DAT_100fc8338,&DAT_100c4ceb0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100fc8340;
    FUN_1000037f0(&DAT_100fc8340,&DAT_100c4d120);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x10046b41c | FUN_10046b41c */

undefined * FUN_10046b41c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10046b540);
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
    puVar3 = &DAT_100fc8348;
    FUN_1000037f0(&DAT_100fc8348,&DAT_100c4ceb8);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0xa8) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&DAT_100ee39e0);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0xa8 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0xa8);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x10046b540 | FUN_10046b540 */

undefined *
FUN_10046b540(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10046b654);
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
    puVar3 = &DAT_100fc8330;
    FUN_1000037f0(&DAT_100fc8330,&BYTE_100c4dbf0);
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
  (*param_5)(param_4);
  return puVar3;
}



/* Address: 0x10046b654 | FUN_10046b654 */

undefined * FUN_10046b654(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10046b770);
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
    puVar3 = &DAT_100fc83e8;
    FUN_1000037f0(&DAT_100fc83e8,&DAT_100c4cf60);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&DAT_100ed8960);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x28 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0x28);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x10046b770 | FUN_10046b770 */

undefined *
FUN_10046b770(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10046b8a0);
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
    puVar3 = &DAT_100fc83d0;
    FUN_1000037f0(&DAT_100fc83d0,&DAT_100c4cf50);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x58) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&DAT_100ed8770);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x58 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0x58);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar3;
}



/* Address: 0x10046b8a0 | FUN_10046b8a0 */

void FUN_10046b8a0(void)

{
  FUN_10046b8ac();
  return;
}



/* Address: 0x10046b8ac | FUN_10046b8ac */

long FUN_10046b8ac(long *param_1,long param_2,long param_3,long param_4,code *param_5)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  long extraout_x8;
  long lVar6;
  long extraout_x12;
  undefined1 *puVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_90 [8];
  ulong local_88;
  long *local_80;
  long local_78;
  long local_70;
  long local_68;
  
  lVar5 = 0;
  (*param_5)();
  local_70 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_70 + 0x40));
  puVar7 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar8 = (ulong *)(param_4 + 0x40);
  local_88 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar9 = 0xffffffffffffffff;
  if (-local_88 < 0x40) {
    uVar9 = ~(-1L << (-local_88 & 0x3f));
  }
  uVar9 = uVar9 & *puVar8;
  local_68 = param_4;
  if (param_2 == 0) {
    lVar5 = 0;
    param_3 = 0;
  }
  else if (param_3 == 0) {
    lVar5 = 0;
  }
  else {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10046ba9c);
      (*pcVar3)();
    }
    lVar6 = 0;
    uVar10 = 0x3f - local_88 >> 6;
    lVar1 = 0;
    local_78 = param_3;
    lVar5 = lVar6;
    while( true ) {
      while (param_3 = lVar1, local_80 = param_1, uVar9 != 0) {
        lVar1 = param_3 + 1;
        uVar2 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
        uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
        uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
        uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
        uVar9 = uVar9 - 1 & uVar9;
        lVar6 = *(long *)(local_70 + 0x48);
        FUN_1000c495c(*(long *)(local_68 + 0x38) +
                      lVar6 * (LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) | lVar5 << 6),puVar7,param_5);
        FUN_1000523d8(puVar7,(long)puVar7 - extraout_x12,param_5);
        FUN_1000523d8((long)puVar7 - extraout_x12,param_2,param_5);
        param_1 = local_80;
        param_3 = local_78;
        if (lVar1 == local_78) goto LAB_10046ba50;
        param_2 = param_2 + lVar6;
        lVar6 = lVar5;
      }
      bVar4 = SCARRY8(lVar5,1);
      lVar5 = lVar5 + 1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10046ba98);
        (*pcVar3)();
      }
      if ((long)uVar10 <= lVar5) break;
      uVar9 = puVar8[lVar5];
      lVar1 = param_3;
    }
    uVar9 = 0;
    if ((long)uVar10 <= lVar6 + 1) {
      uVar10 = lVar6 + 1;
    }
    lVar5 = uVar10 - 1;
  }
LAB_10046ba50:
  *param_1 = local_68;
  param_1[1] = (long)puVar8;
  param_1[2] = ~local_88;
  param_1[3] = lVar5;
  param_1[4] = uVar9;
  return param_3;
}



/* Address: 0x10046ba9c | FUN_10046ba9c */

void FUN_10046ba9c(long param_1,ulong param_2,undefined8 param_3)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  long lVar4;
  undefined1 local_48;
  undefined1 uStack_47;
  undefined1 uStack_46;
  undefined1 uStack_45;
  undefined1 uStack_44;
  undefined1 uStack_43;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined1 local_3c;
  undefined1 local_3b;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar1 = (uint)(param_2 >> 0x20);
  uVar3 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar3 == 0) {
      local_48 = (undefined1)param_1;
      uStack_47 = (undefined1)((ulong)param_1 >> 8);
      uStack_46 = (undefined1)((ulong)param_1 >> 0x10);
      uStack_45 = (undefined1)((ulong)param_1 >> 0x18);
      uStack_44 = (undefined1)((ulong)param_1 >> 0x20);
      uStack_43 = (undefined1)((ulong)param_1 >> 0x28);
      uStack_42 = (undefined1)((ulong)param_1 >> 0x30);
      uStack_41 = (undefined1)((ulong)param_1 >> 0x38);
      local_40 = (undefined1)param_2;
      local_3f = (undefined1)(param_2 >> 8);
      local_3e = (undefined1)(param_2 >> 0x10);
      local_3d = (undefined1)(param_2 >> 0x18);
      local_3c = (undefined1)(param_2 >> 0x20);
      local_3b = (undefined1)(param_2 >> 0x28);
      CryptoKit::SHA256::typeMetadataAccessor();
      FUN_100003a00(&DAT_100fc8190,PTR_typeMetadataAccessor_100ea9d50,
                    PTR_CryptoKit__CryptoKit__SHA256_>CryptoKit__HashFunction_100ea9d48);
      CryptoKit::HashFunction::update((UnsafeRawBufferPointer)&local_48);
      goto LAB_10046bc14;
    }
    lVar4 = (long)(int)param_1;
    param_1 = param_1 >> 0x20;
    if (param_1 < lVar4) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10046bc44);
      (*pcVar2)();
    }
  }
  else {
    if (uVar3 != 2) {
      CryptoKit::SHA256::typeMetadataAccessor();
      FUN_100003a00(&DAT_100fc8190,PTR_typeMetadataAccessor_100ea9d50,
                    PTR_CryptoKit__CryptoKit__SHA256_>CryptoKit__HashFunction_100ea9d48);
      local_48 = 0;
      uStack_47 = 0;
      uStack_46 = 0;
      uStack_45 = 0;
      uStack_44 = 0;
      uStack_43 = 0;
      uStack_42 = 0;
      uStack_41 = 0;
      local_40 = 0;
      local_3f = 0;
      local_3e = 0;
      local_3d = 0;
      local_3c = 0;
      local_3b = 0;
      CryptoKit::HashFunction::update((UnsafeRawBufferPointer)&local_48);
      goto LAB_10046bc14;
    }
    lVar4 = *(long *)(param_1 + 0x10);
    param_1 = *(long *)(param_1 + 0x18);
  }
  FUN_10046bc48(lVar4,param_1,param_2 & 0x3fffffffffffffff,param_3);
LAB_10046bc14:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x10046bc48 | FUN_10046bc48 */

void FUN_10046bc48(__DataStorage *param_1,long param_2,__DataStorage *param_3)

{
  code *pcVar1;
  UnsafeRawBufferPointer bufferPointer;
  __DataStorage *p_Var2;
  
  bufferPointer.unknown = param_1;
  Foundation::__DataStorage::_get__bytes(param_3,param_1);
  p_Var2 = (__DataStorage *)0x0;
  if ((__DataStorage *)bufferPointer.unknown != (__DataStorage *)0x0) {
    p_Var2 = (__DataStorage *)
             Foundation::__DataStorage::get__offset(param_3,(__DataStorage *)bufferPointer.unknown);
    if (SBORROW8((long)param_1,(long)p_Var2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10046bd0c);
      (*pcVar1)();
    }
    bufferPointer.unknown = bufferPointer.unknown + ((long)param_1 - (long)p_Var2);
  }
  if (!SBORROW8(param_2,(long)param_1)) {
    Foundation::__DataStorage::get__length(param_3,p_Var2);
    CryptoKit::SHA256::typeMetadataAccessor();
    FUN_100003a00(&DAT_100fc8190,PTR_typeMetadataAccessor_100ea9d50,
                  PTR_CryptoKit__CryptoKit__SHA256_>CryptoKit__HashFunction_100ea9d48);
    CryptoKit::HashFunction::update(bufferPointer);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10046bd08);
  (*pcVar1)();
}



/* Address: 0x10046bd0c | FUN_10046bd0c */

void FUN_10046bd0c(undefined8 *param_1,UnsafeMutableBufferPointer<__int8> param_2,long param_3)

{
  code *pcVar1;
  _StringGuts _Var2;
  
  if (param_2.unknown == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10046bd60);
    (*pcVar1)();
  }
  _Var2.unknown = param_3 - param_2.unknown;
  Swift::_StringGuts::_copyUTF8(param_2,_Var2);
  if (((uint)_Var2.unknown & 0xff) != 1) {
    *param_1 = 0;
    param_1[1] = 0xe000000000000000;
    param_1[2] = 0xf;
    param_1[3] = param_2.unknown;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10046bd64);
  (*pcVar1)();
}



/* Address: 0x10046bd64 | FUN_10046bd64 */

void FUN_10046bd64(long param_1)

{
  FUN_10046afe4(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x10046bd78 | FUN_10046bd78 */

undefined1  [16] FUN_10046bd78(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long local_68 [3];
  undefined *local_50;
  undefined *local_48;
  undefined1 local_40 [16];
  
  puVar2 = &DAT_100fc83a8;
  FUN_1000037f0(&DAT_100fc83a8,&DAT_100c4cf38);
  puVar3 = puVar2;
  local_50 = puVar2;
  FUN_10046c390();
  plVar4 = local_68;
  local_68[0] = param_1;
  local_48 = puVar3;
  FUN_100004640(plVar4,puVar2);
  lVar1 = *plVar4 + 0x20;
  lVar5 = *(long *)(*plVar4 + 0x10);
  _swift_bridgeObjectRetain(param_1);
  FUN_100441844(local_40,lVar1,lVar1 + lVar5);
  FUN_100004594(local_68);
  return local_40;
}



/* Address: 0x10046be0c | FUN_10046be0c */

undefined1  [16] FUN_10046be0c(ulong param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if ((param_1 == 0) || (param_2 == param_1)) {
    return ZEXT816(0xc000000000000000) << 0x40;
  }
  if (param_2 - param_1 < 0xf) {
    FUN_10017499c();
    auVar1._8_8_ = param_2 & 0xffffffffffffff;
    auVar1._0_8_ = param_1;
    return auVar1;
  }
  if (0x7ffffffe < param_2 - param_1) {
    FUN_1004419dc();
    auVar3._8_8_ = param_2 | 0x8000000000000000;
    auVar3._0_8_ = param_1;
    return auVar3;
  }
  FUN_100441978();
  auVar2._8_8_ = param_2 | 0x4000000000000000;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Address: 0x10046be70 | FUN_10046be70 */

void FUN_10046be70(ulong param_1)

{
  __DataStorage *this;
  RangeReference *pRVar1;
  
  if (param_1 == 0) {
    return;
  }
  if ((long)param_1 < 0xf) {
    FUN_100488120(param_1);
  }
  else {
    this = Foundation::__DataStorage::typeMetadataAccessor();
    _swift_allocObject(this,*(undefined4 *)(this + 0x30),*(undefined2 *)(this + 0x34));
    Foundation::__DataStorage::init(this,param_1);
    if (0x7ffffffe < param_1) {
      pRVar1 = Foundation::Data::RangeReference::typeMetadataAccessor();
      _swift_allocObject(pRVar1,0x20,7);
      *(undefined8 *)(pRVar1 + 0x10) = 0;
      *(ulong *)(pRVar1 + 0x18) = param_1;
    }
  }
  return;
}



/* Address: 0x10046bf08 | FUN_10046bf08 */

undefined8 FUN_10046bf08(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fc7df8;
  FUN_1000037f0(&DAT_100fc7df8,&DAT_100c4c890);
  (**(code **)(*(long *)(puVar1 + -8) + 0x28))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x10046bf58 | FUN_10046bf58 */

undefined8 FUN_10046bf58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fc7e00;
  FUN_1000037f0(&DAT_100fc7e00,&DAT_100c4c898);
  (**(code **)(*(long *)(puVar1 + -8) + 0x18))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x10046bfa8 | FUN_10046bfa8 */

undefined8 FUN_10046bfa8(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10045ba0c();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Address: 0x10046bfe4 | FUN_10046bfe4 */

void FUN_10046bfe4(void)

{
  FUN_100463d3c();
  return;
}



/* Address: 0x10046bfec | FUN_10046bfec */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10046bfec(void)

{
  return ZEXT816(0x100fc81f8);
}



/* Address: 0x10046c00c | FUN_10046c00c */

undefined8 FUN_10046c00c(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_3)();
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x10046c050 | FUN_10046c050 */

void FUN_10046c050(void)

{
  UUID UVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  lVar5 = *(long *)(UVar1.unknown + -8);
  uVar6 = (ulong)*(byte *)(lVar5 + 0x50) + 0x28 &
          ((ulong)*(byte *)(lVar5 + 0x50) ^ 0xffffffffffffffff);
  lVar3 = *(long *)(lVar5 + 0x40);
  puVar2 = &DAT_100fc7d90;
  FUN_1000037f0(&DAT_100fc7d90,&DAT_100c4c758);
  lVar7 = *(long *)(puVar2 + -8);
  uVar4 = (ulong)*(byte *)(lVar7 + 0x50);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  (**(code **)(lVar5 + 8))(unaff_x20 + uVar6,UVar1.unknown);
  (**(code **)(lVar7 + 8))
            (unaff_x20 + (uVar6 + lVar3 + uVar4 & (uVar4 ^ 0xffffffffffffffff)),puVar2);
  _swift_deallocObject();
  return;
}



/* Address: 0x10046c118 | FUN_10046c118 */

void FUN_10046c118(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  UUID UVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar9;
  
  UVar4 = Foundation::UUID::typeMetadataAccessor();
  uVar8 = (ulong)*(byte *)(*(long *)(UVar4.unknown + -8) + 0x50);
  uVar8 = uVar8 + 0x28 & (uVar8 ^ 0xffffffffffffffff);
  lVar7 = *(long *)(*(long *)(UVar4.unknown + -8) + 0x40);
  puVar5 = &DAT_100fc7d90;
  FUN_1000037f0(&DAT_100fc7d90,&DAT_100c4c758);
  bVar3 = *(byte *)(*(long *)(puVar5 + -8) + 0x50);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar6 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)thunk_FUN_100008284;
  FUN_100463ffc(plVar6,param_1,uVar1,uVar2,uVar9,unaff_x20 + uVar8,
                unaff_x20 + (uVar8 + lVar7 + (ulong)bVar3 & ((ulong)bVar3 ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x10046c1e0 | FUN_10046c1e0 */

void FUN_10046c1e0(void)

{
  UUID UVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  lVar2 = *(long *)(UVar1.unknown + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff)),UVar1.unknown);
  _swift_deallocObject();
  return;
}



/* Address: 0x10046c24c | FUN_10046c24c */

void FUN_10046c24c(undefined8 param_1)

{
  UUID UVar1;
  long unaff_x20;
  
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  FUN_1004642d8(param_1,*(undefined8 *)(unaff_x20 + 0x10),
                unaff_x20 +
                ((ulong)*(byte *)(*(long *)(UVar1.unknown + -8) + 0x50) + 0x18 &
                ((ulong)*(byte *)(*(long *)(UVar1.unknown + -8) + 0x50) ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x10046c28c | FUN_10046c28c */

void FUN_10046c28c(void)

{
  UUID UVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  lVar2 = *(long *)(UVar1.unknown + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x28 & (uVar3 ^ 0xffffffffffffffff)),UVar1.unknown);
  _swift_deallocObject();
  return;
}



/* Address: 0x10046c300 | FUN_10046c300 */

void FUN_10046c300(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  UUID UVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar6;
  
  UVar4 = Foundation::UUID::typeMetadataAccessor();
  bVar3 = *(byte *)(*(long *)(UVar4.unknown + -8) + 0x50);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar5 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100008284;
  FUN_100464428(plVar5,param_1,uVar1,uVar2,uVar6,
                unaff_x20 + ((ulong)bVar3 + 0x28 & ((ulong)bVar3 ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x10046c390 | FUN_10046c390 */

void FUN_10046c390(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fc83b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fc83a8;
  FUN_100005c24(&DAT_100fc83a8,&DAT_100c4cf38);
  puVar2 = PTR__Foundation__Swift__Array<undefined>_>Foundation__ContiguousBytes_100ea78a8;
  _swift_getWitnessTable
            (PTR__Foundation__Swift__Array<undefined>_>Foundation__ContiguousBytes_100ea78a8,puVar1)
  ;
  DAT_100fc83b0 = puVar2;
  return;
}



/* Address: 0x10046c3e0 | FUN_10046c3e0 */

void FUN_10046c3e0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10046bd0c(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x10046c3f8 | FUN_10046c3f8 */

undefined8 FUN_10046c3f8(void)

{
  undefined1 local_29;
  undefined8 local_28 [3];
  
  local_29 = 0;
  FUN_1002ccc34(local_28,0x616e4550434d7369,0xec00000064656c62,&local_29,
                PTR___type_metadata_for_Swift_Bool_100eac570);
  return local_28[0];
}



/* Address: 0x10046c44c | FUN_10046c44c */

undefined8 FUN_10046c44c(void)

{
  undefined8 local_30;
  undefined8 local_28 [3];
  
  local_30 = 0x9b2d;
  FUN_1002ccc34(local_28,0x74726f5070636d,&DAT_e700000000000000,&local_30,
                PTR___type_metadata_for_Swift_Int_100eac6f8);
  return local_28[0];
}



/* Address: 0x10046c49c | FUN_10046c49c */

/* WARNING: Removing unreachable block (ram,0x00010046c694) */

undefined * FUN_10046c49c(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  UUID UVar4;
  _DictionaryStorage *this;
  undefined *puVar5;
  long extraout_x8;
  ulong uVar6;
  undefined *capacity;
  undefined1 *puVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  undefined1 auStack_90 [8];
  long local_88;
  long local_80;
  undefined *local_78;
  undefined *local_68;
  
  puVar2 = &DAT_100fc8370;
  FUN_1000037f0(&DAT_100fc8370,&DAT_100c4cee0);
  lVar10 = *(long *)(puVar2 + -8);
  local_78 = puVar2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_1 + 0x10);
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar8 != 0) {
    local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10046ad38(0,lVar8,0);
    puVar2 = local_68;
    lVar3 = 0;
    FUN_10045ba0c();
    uVar6 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
    param_1 = param_1 + (uVar6 + 0x20 & (uVar6 ^ 0xffffffffffffffff));
    local_88 = *(long *)(*(long *)(lVar3 + -8) + 0x48);
    local_80 = lVar3;
    UVar4 = Foundation::UUID::typeMetadataAccessor();
    pcVar9 = *(code **)(*(long *)(UVar4.unknown + -8) + 0x10);
    do {
      iVar1 = *(int *)(local_78 + 0x30);
      (*pcVar9)(puVar7,param_1,UVar4.unknown);
      FUN_100011090(param_1 + *(int *)(local_80 + 0x20),puVar7 + iVar1,&DAT_100fc7df8,&DAT_100c4c890
                   );
      uVar6 = *(ulong *)(puVar2 + 0x10);
      local_68 = puVar2;
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar6) {
        FUN_10046ad38(1 < *(ulong *)(puVar2 + 0x18),uVar6 + 1,1);
      }
      puVar2 = local_68;
      *(ulong *)(local_68 + 0x10) = uVar6 + 1;
      FUN_10019ffdc(puVar7,local_68 +
                           *(long *)(lVar10 + 0x48) * uVar6 +
                           ((ulong)*(byte *)(lVar10 + 0x50) + 0x20 &
                           ((ulong)*(byte *)(lVar10 + 0x50) ^ 0xffffffffffffffff)),&DAT_100fc8370,
                    &DAT_100c4cee0);
      param_1 = param_1 + local_88;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  capacity = *(undefined **)(puVar2 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fc8360;
    FUN_1000037f0(&DAT_100fc8360,&DAT_100c4ced0);
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    puVar5 = capacity;
  }
  local_68 = puVar5;
  FUN_10046d8f4(puVar2,1,&local_68);
  return local_68;
}



/* Address: 0x10046c6b4 | FUN_10046c6b4 */

/* WARNING: Removing unreachable block (ram,0x00010046ccd8) */

bool FUN_10046c6b4(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  undefined *puVar6;
  long lVar7;
  UUID UVar8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  long extraout_x8;
  long extraout_x8_00;
  long lVar12;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  undefined8 uVar13;
  code *pcVar14;
  undefined8 unaff_x20;
  UUID UVar15;
  long lVar16;
  UUID UVar17;
  undefined1 *puVar18;
  long lVar19;
  ulong uVar20;
  undefined1 auStack_d0 [8];
  undefined1 *local_c8 [2];
  long local_b8;
  long local_b0;
  undefined *local_a8;
  long local_a0;
  long local_98;
  long local_90;
  undefined *local_88;
  long local_80;
  long local_78;
  
  local_88 = (undefined *)Foundation::Date::typeMetadataAccessor();
  local_98 = *(long *)(local_88 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_98 + 0x40));
  puVar6 = &DAT_100fc8160;
  local_c8[1] = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_1000037f0(&DAT_100fc8160,&DAT_100c4cdc0);
  local_a8 = puVar6;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = (long)(auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  lVar7 = 0;
  local_90 = lVar12;
  FUN_10045ba0c();
  lVar19 = *(long *)(lVar7 + -8);
  local_b0 = lVar7;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar19 + 0x40));
  uVar20 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  UVar17.unknown = (undefined *)(uVar20 - extraout_x12);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar16 = (long)UVar17.unknown - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar6 = &DAT_100fc7df8;
  local_b8 = lVar16 - extraout_x12_01;
  FUN_1000037f0(&DAT_100fc7df8,&DAT_100c4c890);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  lVar7 = (lVar16 - extraout_x12_01) - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_a0 = lVar7;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar7 = lVar7 - extraout_x12_02;
  local_80 = lVar7;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar7 = lVar7 - extraout_x12_03;
  local_78 = lVar7;
  UVar8 = Foundation::UUID::typeMetadataAccessor();
  lVar12 = *(long *)(UVar8.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar12 + 0x40));
  UVar15.unknown = (undefined *)(lVar7 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0));
  lVar7 = 0;
  FUN_10046de5c();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  puVar18 = UVar15.unknown + -(extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  FUN_1000c495c(unaff_x20,puVar18);
  puVar9 = puVar18;
  _swift_getEnumCaseMultiPayload(puVar18,lVar7);
  if ((int)puVar9 == 1) {
    lVar7 = 0;
    uVar1 = *puVar18;
    uVar13 = *(undefined8 *)(puVar18 + 8);
    lVar12 = *(long *)(param_1 + 0x10);
    do {
      if (lVar12 == lVar7) {
        _swift_bridgeObjectRelease(uVar13);
        return false;
      }
      FUN_1000c495c(param_1 + ((ulong)*(byte *)(lVar19 + 0x50) + 0x20 &
                              ((ulong)*(byte *)(lVar19 + 0x50) ^ 0xffffffffffffffff)) +
                    *(long *)(lVar19 + 0x48) * lVar7,uVar20,FUN_10045ba0c);
      uVar10 = uVar20;
      FUN_10046ccec(uVar20,uVar1,uVar13);
      lVar7 = lVar7 + 1;
      FUN_10005241c(uVar20,FUN_10045ba0c);
    } while ((uVar10 & 1) == 0);
    _swift_bridgeObjectRelease(uVar13);
    return true;
  }
  (**(code **)(lVar12 + 0x20))(UVar15.unknown,puVar18,UVar8.unknown);
  lVar4 = local_80;
  lVar7 = *(long *)(param_1 + 0x10);
  local_c8[0] = (undefined1 *)UVar8;
  if (lVar7 != 0) {
    param_1 = param_1 + ((ulong)*(byte *)(lVar19 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar19 + 0x50) ^ 0xffffffffffffffff));
    lVar19 = *(long *)(lVar19 + 0x48);
    do {
      UVar8.unknown = FUN_10045ba0c;
      FUN_1000c495c(param_1,lVar16);
      FUN_10046de94(lVar16,UVar17.unknown);
      bVar5 = Foundation::UUID::___infix(UVar17,UVar15,UVar8);
      lVar2 = local_b8;
      if (bVar5) {
        FUN_10046de94(UVar17.unknown,local_b8);
        lVar16 = local_78;
        FUN_100011090(lVar2 + *(int *)(local_b0 + 0x20),local_78,&DAT_100fc7df8,&DAT_100c4c890);
        FUN_10005241c(lVar2,FUN_10045ba0c);
        pcVar14 = *(code **)(local_98 + 0x38);
        puVar6 = local_88;
        lVar7 = local_98;
        goto LAB_10046caa4;
      }
      FUN_10005241c(UVar17.unknown,FUN_10045ba0c);
      param_1 = param_1 + lVar19;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  lVar16 = local_78;
  puVar6 = local_88;
  lVar7 = local_98;
  pcVar14 = *(code **)(local_98 + 0x38);
  (*pcVar14)(local_78,1,1,local_88);
LAB_10046caa4:
  (*pcVar14)(lVar4,1,1,puVar6);
  lVar3 = local_90;
  lVar19 = (long)*(int *)(local_a8 + 0x30);
  FUN_100011090(lVar16,local_90,&DAT_100fc7df8,&DAT_100c4c890);
  FUN_100011090(lVar4,lVar3 + lVar19,&DAT_100fc7df8,&DAT_100c4c890);
  pcVar14 = *(code **)(lVar7 + 0x30);
  lVar11 = lVar3;
  (*pcVar14)(lVar3,1,puVar6);
  lVar2 = local_a0;
  if ((int)lVar11 == 1) {
    FUN_100005808(lVar4,&DAT_100fc7df8,&DAT_100c4c890);
    FUN_100005808(lVar16,&DAT_100fc7df8,&DAT_100c4c890);
    lVar19 = lVar3 + lVar19;
    (*pcVar14)(lVar19,1,puVar6);
    if ((int)lVar19 == 1) {
      FUN_100005808(lVar3,&DAT_100fc7df8,&DAT_100c4c890);
      bVar5 = false;
      goto LAB_10046cca0;
    }
  }
  else {
    FUN_100011090(lVar3,local_a0,&DAT_100fc7df8,&DAT_100c4c890);
    lVar16 = lVar3 + lVar19;
    (*pcVar14)(lVar16,1,puVar6);
    puVar9 = local_c8[1];
    if ((int)lVar16 != 1) {
      puVar18 = local_c8[1];
      (**(code **)(lVar7 + 0x20))(local_c8[1],lVar3 + lVar19,puVar6);
      FUN_10046ded8();
      bVar5 = Swift::Equatable::___infix(lVar2,puVar9,puVar6,puVar18);
      pcVar14 = *(code **)(lVar7 + 8);
      (*pcVar14)(puVar9,puVar6);
      FUN_100005808(local_80,&DAT_100fc7df8,&DAT_100c4c890);
      FUN_100005808(local_78,&DAT_100fc7df8,&DAT_100c4c890);
      (*pcVar14)(lVar2,puVar6);
      FUN_100005808(lVar3,&DAT_100fc7df8,&DAT_100c4c890);
      bVar5 = !bVar5;
      goto LAB_10046cca0;
    }
    FUN_100005808(local_80,&DAT_100fc7df8,&DAT_100c4c890);
    FUN_100005808(local_78,&DAT_100fc7df8,&DAT_100c4c890);
    (**(code **)(lVar7 + 8))(lVar2,puVar6);
  }
  FUN_100005808(lVar3,&DAT_100fc8160,&DAT_100c4cdc0);
  bVar5 = true;
LAB_10046cca0:
  (**(code **)(lVar12 + 8))(UVar15.unknown,local_c8[0]);
  return bVar5;
}



/* Address: 0x10046ccec | FUN_10046ccec */

bool FUN_10046ccec(long param_1,char param_2,long param_3)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  Date DVar6;
  ulong uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar8;
  long lVar9;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long lVar10;
  code *pcVar11;
  long lVar12;
  ulong uVar13;
  long local_a0;
  code *local_98;
  long local_90;
  long local_88;
  ulong local_80;
  long local_78;
  long local_70;
  long local_68;
  
  puVar4 = &DAT_100fc8160;
  FUN_1000037f0(&DAT_100fc8160,&DAT_100c4cdc0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100fc7df8;
  local_80 = (long)&local_a0 - extraout_x8;
  FUN_1000037f0(&DAT_100fc7df8,&DAT_100c4c890);
  lVar10 = *(long *)(puVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar10 + 0x40));
  lVar8 = ((long)&local_a0 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_88 = lVar8;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar8 = lVar8 - extraout_x12;
  local_78 = lVar8;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar8 = lVar8 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_70 = lVar8 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  uVar13 = (lVar8 - extraout_x12_01) - extraout_x12_02;
  DVar6 = Foundation::Date::typeMetadataAccessor();
  lVar12 = *(long *)(DVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar12 + 0x40));
  lVar9 = uVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_90 = lVar9;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_68 = lVar9 - extraout_x12_03;
  lVar9 = 0;
  FUN_10045ba0c();
  if (*(char *)(param_1 + *(int *)(lVar9 + 0x18)) == param_2) {
    FUN_100011090(param_1 + *(int *)(lVar9 + 0x20),uVar13,&DAT_100fc7df8,&DAT_100c4c890);
    pcVar11 = *(code **)(lVar12 + 0x30);
    uVar7 = uVar13;
    (*pcVar11)(uVar13,1,DVar6.unknown);
    if ((int)uVar7 != 1) {
      local_98 = *(code **)(lVar12 + 0x20);
      (*local_98)(local_68,uVar13,DVar6.unknown);
      if (*(long *)(param_3 + 0x10) == 0) {
LAB_10046d094:
        (**(code **)(lVar12 + 8))(local_68,DVar6.unknown);
        return true;
      }
      _swift_bridgeObjectRetain(param_3);
      FUN_1004647d0(param_1);
      if ((uVar13 & 1) == 0) {
        _swift_bridgeObjectRelease(param_3);
        goto LAB_10046d094;
      }
      FUN_100011090(*(long *)(param_3 + 0x38) + *(long *)(lVar10 + 0x48) * param_1,lVar8,
                    &DAT_100fc7df8,&DAT_100c4c890);
      _swift_bridgeObjectRelease(param_3);
      lVar10 = local_70;
      FUN_10019ffdc(lVar8,local_70,&DAT_100fc7df8,&DAT_100c4c890);
      lVar8 = local_78;
      (**(code **)(lVar12 + 0x10))(local_78,local_68,DVar6.unknown);
      (**(code **)(lVar12 + 0x38))(lVar8,0,1,DVar6.unknown);
      uVar13 = local_80;
      iVar1 = *(int *)(puVar4 + 0x30);
      FUN_100011090(lVar10,local_80,&DAT_100fc7df8,&DAT_100c4c890);
      local_a0 = (long)iVar1;
      FUN_100011090(lVar8,uVar13 + (long)iVar1,&DAT_100fc7df8,&DAT_100c4c890);
      uVar7 = uVar13;
      (*pcVar11)(uVar13,1,DVar6.unknown);
      lVar9 = local_88;
      if ((int)uVar7 != 1) {
        FUN_100011090(uVar13,local_88,&DAT_100fc7df8,&DAT_100c4c890);
        lVar10 = local_a0;
        lVar8 = uVar13 + local_a0;
        (*pcVar11)(lVar8,1,DVar6.unknown);
        lVar2 = local_90;
        if ((int)lVar8 != 1) {
          lVar8 = local_90;
          (*local_98)(local_90,uVar13 + lVar10,DVar6.unknown);
          FUN_10046ded8();
          bVar3 = Swift::Equatable::___infix(lVar9,lVar2,DVar6.unknown,lVar8);
          pcVar11 = *(code **)(lVar12 + 8);
          (*pcVar11)(lVar2,DVar6.unknown);
          FUN_100005808(local_78,&DAT_100fc7df8,&DAT_100c4c890);
          FUN_100005808(local_70,&DAT_100fc7df8,&DAT_100c4c890);
          (*pcVar11)(local_68,DVar6.unknown);
          (*pcVar11)(lVar9,DVar6.unknown);
          FUN_100005808(uVar13,&DAT_100fc7df8,&DAT_100c4c890);
          return !bVar3;
        }
        FUN_100005808(local_78,&DAT_100fc7df8,&DAT_100c4c890);
        FUN_100005808(local_70,&DAT_100fc7df8,&DAT_100c4c890);
        pcVar11 = *(code **)(lVar12 + 8);
        (*pcVar11)(local_68,DVar6.unknown);
        (*pcVar11)(lVar9,DVar6.unknown);
LAB_10046d12c:
        FUN_100005808(uVar13,&DAT_100fc8160,&DAT_100c4cdc0);
        return true;
      }
      FUN_100005808(lVar8,&DAT_100fc7df8,&DAT_100c4c890);
      FUN_100005808(lVar10,&DAT_100fc7df8,&DAT_100c4c890);
      (**(code **)(lVar12 + 8))(local_68,DVar6.unknown);
      lVar9 = uVar13 + local_a0;
      (*pcVar11)(lVar9,1,DVar6.unknown);
      if ((int)lVar9 != 1) goto LAB_10046d12c;
    }
    FUN_100005808(uVar13,&DAT_100fc7df8,&DAT_100c4c890);
  }
  return false;
}



/* Address: 0x10046d1f0 | thunk_FUN_10046df1c */

void thunk_FUN_10046df1c(void)

{
  FUN_10046df1c();
  return;
}


