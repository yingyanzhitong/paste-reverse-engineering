/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1002b17bc | FUN_1002b17bc */

undefined8 FUN_1002b17bc(undefined8 *param_1,char *param_2,undefined *param_3)

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
  FUN_1002b1b18(param_2,param_3,uVar6,lVar8);
  *unaff_x20 = local_98[0];
  *param_1 = param_2;
  param_1[1] = param_3;
  return 1;
}



/* Address: 0x1002b1900 | FUN_1002b1900 */

undefined8 FUN_1002b1900(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  PurchaseOption PVar2;
  ulong uVar3;
  undefined *puVar4;
  long extraout_x8;
  ulong uVar5;
  long lVar6;
  long *unaff_x20;
  __int64 seed;
  code *pcVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  code *pcVar11;
  long lVar12;
  
  PVar2 = StoreKit::Product::PurchaseOption::typeMetadataAccessor();
  lVar12 = *(long *)(PVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(undefined8 *)(lVar12 + 0x40),PVar2.unknown,PTR_typeMetadataAccessor_100ea7ea8);
  puVar10 = &stack0xffffffffffffff70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar9 = *unaff_x20;
  seed = *(__int64 *)(lVar9 + 0x28);
  FUN_100003a00(&DAT_100fbbad0);
  uVar3 = Swift::Hashable::_rawHashValue(seed);
  uVar5 = -1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
  uVar3 = uVar3 & (uVar5 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar9 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) == 0) {
    pcVar7 = *(code **)(lVar12 + 0x10);
  }
  else {
    lVar8 = *(long *)(lVar12 + 0x48);
    pcVar7 = *(code **)(lVar12 + 0x10);
    do {
      lVar6 = lVar8 * uVar3;
      (*pcVar7)(puVar10,*(long *)(lVar9 + 0x30) + lVar6,PVar2.unknown);
      puVar4 = &DAT_100fbbad8;
      FUN_100003a00(&DAT_100fbbad8,PTR_typeMetadataAccessor_100ea7ea8,
                    PTR_StoreKit__StoreKit__Product__PurchaseOption_>Swift__Equatable_100ea7ec0);
      bVar1 = Swift::Equatable::___infix(puVar10,param_2,PVar2.unknown,puVar4);
      pcVar11 = *(code **)(lVar12 + 8);
      (*pcVar11)(puVar10,PVar2.unknown);
      if (bVar1) {
        (*pcVar11)(param_2,PVar2.unknown);
        (*pcVar7)(param_1,*(long *)(lVar9 + 0x30) + lVar6,PVar2.unknown);
        return 0;
      }
      uVar3 = uVar3 + 1 & ~uVar5;
    } while ((*(ulong *)(lVar9 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) != 0);
  }
  lVar9 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native(lVar9);
  (*pcVar7)(puVar10,param_2,PVar2.unknown);
  lVar8 = *unaff_x20;
  FUN_1002b1c7c(puVar10,uVar3,lVar9);
  *unaff_x20 = lVar8;
  (**(code **)(lVar12 + 0x20))(param_1,param_2,PVar2.unknown);
  return 1;
}



/* Address: 0x1002b1b18 | FUN_1002b1b18 */

void FUN_1002b1b18(char *param_1,undefined *param_2,ulong param_3,ulong param_4)

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
      FUN_1002b2338();
    }
  }
  else {
    if ((param_4 & 1) == 0) {
      FUN_1002b1e70(uVar6 + 1);
    }
    else {
      FUN_1002b2668();
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
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1002b1c7c);
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
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1002b1c6c);
  (*pcVar4)();
}



/* Address: 0x1002b1c7c | FUN_1002b1c7c */

void FUN_1002b1c7c(undefined8 param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  bool bVar2;
  PurchaseOption PVar3;
  undefined *puVar4;
  long extraout_x8;
  ulong uVar5;
  long lVar6;
  long *unaff_x20;
  __int64 seed;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  
  PVar3 = StoreKit::Product::PurchaseOption::typeMetadataAccessor();
  lVar9 = *(long *)(PVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  puVar8 = &stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar5 = *(ulong *)(*unaff_x20 + 0x10);
  if (uVar5 < *(ulong *)(*unaff_x20 + 0x18)) {
    if ((param_3 & 1) == 0) {
      FUN_1002b2494();
    }
  }
  else {
    if ((param_3 & 1) == 0) {
      FUN_1002b2098(uVar5 + 1);
    }
    else {
      FUN_1002b28cc();
    }
    lVar7 = *unaff_x20;
    seed = *(__int64 *)(lVar7 + 0x28);
    FUN_100003a00(&DAT_100fbbad0,PTR_typeMetadataAccessor_100ea7ea8,
                  PTR_StoreKit__StoreKit__Product__PurchaseOption_>Swift__Hashable_100ea7eb8);
    param_2 = Swift::Hashable::_rawHashValue(seed);
    uVar5 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    param_2 = param_2 & (uVar5 ^ 0xffffffffffffffff);
    if ((*(ulong *)(lVar7 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0) {
      lVar6 = *(long *)(lVar9 + 0x48);
      pcVar1 = *(code **)(lVar9 + 0x10);
      do {
        (*pcVar1)(puVar8,*(long *)(lVar7 + 0x30) + lVar6 * param_2,PVar3.unknown);
        puVar4 = &DAT_100fbbad8;
        FUN_100003a00(&DAT_100fbbad8,PTR_typeMetadataAccessor_100ea7ea8,
                      PTR_StoreKit__StoreKit__Product__PurchaseOption_>Swift__Equatable_100ea7ec0);
        bVar2 = Swift::Equatable::___infix(puVar8,param_1,PVar3.unknown,puVar4);
        (**(code **)(lVar9 + 8))(puVar8,PVar3.unknown);
        if (bVar2) {
          Swift::_ELEMENT_TYPE_OF_SET_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1002b1e70);
          (*pcVar1)();
        }
        param_2 = param_2 + 1 & ~uVar5;
      } while ((*(ulong *)(lVar7 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
    }
  }
  lVar6 = *unaff_x20;
  lVar7 = lVar6 + (param_2 >> 6) * 8;
  *(ulong *)(lVar7 + 0x38) = *(ulong *)(lVar7 + 0x38) | 1L << (param_2 & 0x3f);
  (**(code **)(lVar9 + 0x20))
            (*(long *)(lVar6 + 0x30) + *(long *)(lVar9 + 0x48) * param_2,param_1,PVar3.unknown);
  if (!SCARRY8(*(long *)(lVar6 + 0x10),1)) {
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1002b1e64);
  (*pcVar1)();
}



/* Address: 0x1002b1e70 | FUN_1002b1e70 */

void FUN_1002b1e70(long param_1)

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
  this = (_SetStorage *)&DAT_100fbbbc0;
  FUN_1000037f0(&DAT_100fbbbc0,&DAT_100c3c698);
  p_Var8 = original;
  Swift::_SetStorage::_resize(this,original,capacity,false);
  if (*(long *)(original + 0x10) == 0) {
LAB_1002b2060:
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
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1002b2094);
          (*pcVar7)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar15) goto LAB_1002b2060;
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
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1002b2098);
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



/* Address: 0x1002b2098 | FUN_1002b2098 */

void FUN_1002b2098(long param_1)

{
  bool bVar1;
  code *pcVar2;
  PurchaseOption PVar3;
  _SetStorage *this;
  __RawSetStorage *p_Var4;
  ulong uVar5;
  long lVar6;
  long extraout_x8;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  __int64 _Var11;
  ulong uVar12;
  long lVar13;
  __RawSetStorage *original;
  long lVar14;
  
  PVar3 = StoreKit::Product::PurchaseOption::typeMetadataAccessor();
  lVar6 = *(long *)(PVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar6 + 0x40));
  original = (__RawSetStorage *)*unaff_x20;
  _Var11 = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    _Var11 = param_1;
  }
  this = (_SetStorage *)&DAT_100fbbae0;
  FUN_1000037f0(&DAT_100fbbae0,&DAT_100c3c658);
  p_Var4 = original;
  Swift::_SetStorage::_resize(this,original,_Var11,false);
  if (*(long *)(original + 0x10) == 0) {
    _swift_release(original);
LAB_1002b230c:
    *unaff_x20 = (long)p_Var4;
    return;
  }
  uVar9 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar12 = uVar12 & *(ulong *)(original + 0x38);
  lVar14 = 0;
  do {
    if (uVar12 == 0) {
      do {
        lVar13 = lVar14 + 1;
        if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1002b2334);
          (*pcVar2)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar13) {
          _swift_release(original);
          goto LAB_1002b230c;
        }
        uVar12 = *(ulong *)(original + 0x38 + lVar13 * 8);
        lVar14 = lVar14 + 1;
      } while (uVar12 == 0);
      uVar7 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
    }
    else {
      uVar7 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
      lVar13 = lVar14;
    }
    lVar14 = *(long *)(lVar6 + 0x48);
    (**(code **)(lVar6 + 0x10))
              (&stack0xffffffffffffff80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
               *(long *)(original + 0x30) + lVar14 * (LZCOUNT(uVar7) | lVar13 << 6),PVar3.unknown);
    _Var11 = *(__int64 *)(p_Var4 + 0x28);
    FUN_100003a00(&DAT_100fbbad0,PTR_typeMetadataAccessor_100ea7ea8,
                  PTR_StoreKit__StoreKit__Product__PurchaseOption_>Swift__Hashable_100ea7eb8);
    uVar5 = Swift::Hashable::_rawHashValue(_Var11);
    uVar10 = -1L << ((ulong)(byte)p_Var4[0x20] & 0x3f);
    uVar5 = uVar5 & (uVar10 ^ 0xffffffffffffffff);
    uVar8 = uVar5 >> 6;
    uVar7 = -1L << (uVar5 & 0x3f) & (*(ulong *)(p_Var4 + uVar8 * 8 + 0x38) ^ 0xffffffffffffffff);
    if (uVar7 == 0) {
      bVar1 = false;
      uVar7 = 0x3f - uVar10 >> 6;
      do {
        uVar5 = uVar8 + 1;
        if ((uVar5 == uVar7) && (bVar1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1002b2338);
          (*pcVar2)();
        }
        uVar8 = 0;
        if (uVar5 != uVar7) {
          uVar8 = uVar5;
        }
        bVar1 = (bool)(uVar5 == uVar7 | bVar1);
      } while (*(ulong *)(p_Var4 + uVar8 * 8 + 0x38) == 0xffffffffffffffff);
      uVar7 = ~*(ulong *)(p_Var4 + uVar8 * 8 + 0x38);
      uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar8 << 6;
    }
    else {
      uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar5 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar7 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var4 + uVar8 + 0x38) = 1L << (uVar7 & 0x3f) | *(ulong *)(p_Var4 + uVar8 + 0x38);
    (**(code **)(lVar6 + 0x20))
              (*(long *)(p_Var4 + 0x30) + uVar7 * lVar14,
               &stack0xffffffffffffff80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),PVar3.unknown);
    *(long *)(p_Var4 + 0x10) = *(long *)(p_Var4 + 0x10) + 1;
    lVar14 = lVar13;
  } while( true );
}



/* Address: 0x1002b2338 | FUN_1002b2338 */

void FUN_1002b2338(void)

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
  
  this = (_SetStorage *)&DAT_100fbbbc0;
  FUN_1000037f0(&DAT_100fbbbc0,&DAT_100c3c698);
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
    if (uVar7 == 0) goto LAB_1002b2414;
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
LAB_1002b2414:
        do {
          lVar10 = lVar11 + 1;
          if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1002b2494);
            (*pcVar5)();
          }
          if ((long)(uVar8 + 0x3f >> 6) <= lVar10) goto LAB_1002b246c;
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
LAB_1002b246c:
  _swift_release(original);
  *unaff_x20 = (long)p_Var6;
  return;
}



/* Address: 0x1002b2494 | FUN_1002b2494 */

void FUN_1002b2494(void)

{
  __RawSetStorage *p_Var1;
  code *pcVar2;
  PurchaseOption PVar3;
  _SetStorage *this;
  __RawSetStorage *p_Var4;
  long extraout_x8;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *unaff_x20;
  __RawSetStorage *original;
  long lVar9;
  long lVar10;
  undefined1 auStack_70 [8];
  
  PVar3 = StoreKit::Product::PurchaseOption::typeMetadataAccessor();
  lVar9 = *(long *)(PVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  this = (_SetStorage *)&DAT_100fbbae0;
  FUN_1000037f0(&DAT_100fbbae0,&DAT_100c3c658);
  original = (__RawSetStorage *)*unaff_x20;
  p_Var4 = original;
  Swift::_SetStorage::_copy(this,original);
  if (*(long *)(original + 0x10) == 0) {
    _swift_release(original);
LAB_1002b2640:
    *unaff_x20 = (long)p_Var4;
    return;
  }
  p_Var1 = original + 0x38;
  uVar5 = (1L << ((ulong)(byte)p_Var4[0x20] & 0x3f)) + 0x3fU >> 6;
  if ((p_Var4 != original) || (p_Var1 + uVar5 * 8 <= p_Var4 + 0x38)) {
    _memmove(p_Var4 + 0x38,p_Var1,uVar5 << 3);
  }
  lVar10 = 0;
  *(undefined8 *)(p_Var4 + 0x10) = *(undefined8 *)(original + 0x10);
  uVar6 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar5 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar5 = ~(-1L << (uVar6 & 0x3f));
  }
  uVar5 = uVar5 & *(ulong *)(original + 0x38);
  if (uVar5 == 0) goto LAB_1002b25b8;
  do {
    uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
    uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
    uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
    uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
    uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
    uVar5 = uVar5 - 1 & uVar5;
    while( true ) {
      lVar8 = *(long *)(lVar9 + 0x48) * (LZCOUNT(uVar7) | lVar10 << 6);
      (**(code **)(lVar9 + 0x10))
                (auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                 *(long *)(original + 0x30) + lVar8,PVar3.unknown);
      (**(code **)(lVar9 + 0x20))
                (*(long *)(p_Var4 + 0x30) + lVar8,
                 auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),PVar3.unknown);
      if (uVar5 != 0) break;
LAB_1002b25b8:
      do {
        lVar8 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1002b2668);
          (*pcVar2)();
        }
        if ((long)(uVar6 + 0x3f >> 6) <= lVar8) {
          _swift_release(original);
          goto LAB_1002b2640;
        }
        uVar5 = *(ulong *)(p_Var1 + lVar8 * 8);
        lVar10 = lVar10 + 1;
      } while (uVar5 == 0);
      uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar5 = uVar5 - 1 & uVar5;
      lVar10 = lVar8;
    }
  } while( true );
}



/* Address: 0x1002b2668 | FUN_1002b2668 */

void FUN_1002b2668(long param_1)

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
  this = (_SetStorage *)&DAT_100fbbbc0;
  FUN_1000037f0(&DAT_100fbbbc0,&DAT_100c3c698);
  p_Var8 = original;
  Swift::_SetStorage::_resize(this,original,capacity,true);
  if (*(long *)(original + 0x10) == 0) {
LAB_1002b2898:
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
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1002b28c8);
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
          goto LAB_1002b2898;
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
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1002b28cc);
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



/* Address: 0x1002b28cc | FUN_1002b28cc */

void FUN_1002b28cc(long param_1)

{
  bool bVar1;
  PurchaseOption PVar2;
  _SetStorage *this;
  __RawSetStorage *p_Var3;
  ulong uVar4;
  long lVar5;
  long extraout_x8;
  ulong uVar6;
  code *pcVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  __RawSetStorage *original;
  __int64 _Var11;
  long lVar12;
  __RawSetStorage *p_Var13;
  ulong uVar14;
  long lVar15;
  
  PVar2 = StoreKit::Product::PurchaseOption::typeMetadataAccessor();
  lVar5 = *(long *)(PVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar5 + 0x40));
  original = (__RawSetStorage *)*unaff_x20;
  _Var11 = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    _Var11 = param_1;
  }
  this = (_SetStorage *)&DAT_100fbbae0;
  FUN_1000037f0(&DAT_100fbbae0,&DAT_100c3c658);
  p_Var3 = original;
  Swift::_SetStorage::_resize(this,original,_Var11,true);
  if (*(long *)(original + 0x10) == 0) {
LAB_1002b2b74:
    _swift_release(original);
    *unaff_x20 = (long)p_Var3;
    return;
  }
  p_Var13 = original + 0x38;
  uVar9 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar14 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar14 = uVar14 & *(ulong *)p_Var13;
  lVar12 = 0;
  do {
    if (uVar14 == 0) {
      do {
        lVar15 = lVar12 + 1;
        if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1002b2ba4);
          (*pcVar7)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar15) {
          uVar14 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          if (((byte)original[0x20] & 0x3f) < 6) {
            *(long *)p_Var13 = -1L << (uVar14 & 0x3f);
          }
          else {
            _bzero(p_Var13,uVar14 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_1002b2b74;
        }
        uVar14 = *(ulong *)(p_Var13 + lVar15 * 8);
        lVar12 = lVar12 + 1;
      } while (uVar14 == 0);
      uVar6 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar14 = uVar14 - 1 & uVar14;
    }
    else {
      uVar6 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar14 = uVar14 - 1 & uVar14;
      lVar15 = lVar12;
    }
    lVar12 = *(long *)(lVar5 + 0x48);
    pcVar7 = *(code **)(lVar5 + 0x20);
    (*pcVar7)(&stack0xffffffffffffff70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
              *(long *)(original + 0x30) + lVar12 * (LZCOUNT(uVar6) | lVar15 << 6),PVar2.unknown);
    _Var11 = *(__int64 *)(p_Var3 + 0x28);
    FUN_100003a00(&DAT_100fbbad0,PTR_typeMetadataAccessor_100ea7ea8,
                  PTR_StoreKit__StoreKit__Product__PurchaseOption_>Swift__Hashable_100ea7eb8);
    uVar4 = Swift::Hashable::_rawHashValue(_Var11);
    uVar10 = -1L << ((ulong)(byte)p_Var3[0x20] & 0x3f);
    uVar4 = uVar4 & (uVar10 ^ 0xffffffffffffffff);
    uVar8 = uVar4 >> 6;
    uVar6 = -1L << (uVar4 & 0x3f) & (*(ulong *)(p_Var3 + uVar8 * 8 + 0x38) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar1 = false;
      uVar6 = 0x3f - uVar10 >> 6;
      do {
        uVar4 = uVar8 + 1;
        if ((uVar4 == uVar6) && (bVar1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1002b2ba8);
          (*pcVar7)();
        }
        uVar8 = 0;
        if (uVar4 != uVar6) {
          uVar8 = uVar4;
        }
        bVar1 = (bool)(uVar4 == uVar6 | bVar1);
      } while (*(ulong *)(p_Var3 + uVar8 * 8 + 0x38) == 0xffffffffffffffff);
      uVar6 = ~*(ulong *)(p_Var3 + uVar8 * 8 + 0x38);
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar4 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var3 + uVar8 + 0x38) = 1L << (uVar6 & 0x3f) | *(ulong *)(p_Var3 + uVar8 + 0x38);
    (*pcVar7)(*(long *)(p_Var3 + 0x30) + uVar6 * lVar12,
              &stack0xffffffffffffff70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),PVar2.unknown);
    *(long *)(p_Var3 + 0x10) = *(long *)(p_Var3 + 0x10) + 1;
    lVar12 = lVar15;
  } while( true );
}



/* Address: 0x1002b2ba8 | FUN_1002b2ba8 */

void FUN_1002b2ba8(long param_1)

{
  FUN_1002b1474(0,*(undefined8 *)(param_1 + 0x10),0,param_1,&DAT_100fbbbb0,&DAT_100c3c688,
                FUN_1002abb94,PTR__swift_release_100eae3e8);
  return;
}



/* Address: 0x1002b2bec | FUN_1002b2bec */

undefined * FUN_1002b2bec(long param_1)

{
  undefined1 uVar1;
  byte bVar2;
  code *pcVar3;
  _DictionaryStorage *this;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *capacity;
  ulong uVar7;
  undefined1 *puVar8;
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar4 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fb8ec8;
    uVar5 = 0;
    FUN_1000037f0();
    puVar4 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    _swift_retain();
    puVar8 = (undefined1 *)(param_1 + 0x21);
    do {
      bVar2 = puVar8[-1];
      uVar7 = (ulong)bVar2;
      uVar1 = *puVar8;
      FUN_1002b0ec0();
      if ((uVar5 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1002b2ccc);
        (*pcVar3)();
      }
      uVar6 = uVar7 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar4 + uVar6 + 0x40) = *(ulong *)(puVar4 + uVar6 + 0x40) | 1L << (uVar7 & 0x3f);
      *(byte *)(*(long *)(puVar4 + 0x30) + uVar7) = bVar2;
      *(undefined1 *)(*(long *)(puVar4 + 0x38) + uVar7) = uVar1;
      if (SCARRY8(*(long *)(puVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1002b2cd0);
        (*pcVar3)();
      }
      *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + 1;
      capacity = capacity + -1;
      puVar8 = puVar8 + 2;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar4);
  }
  return puVar4;
}



/* Address: 0x1002b2cd0 | FUN_1002b2cd0 */

void FUN_1002b2cd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xaf8) = param_3;
  *(undefined8 *)(unaff_x22 + 0xac8) = param_2;
  *(undefined8 *)(unaff_x22 + 0xa98) = param_1;
  puVar1 = &DAT_100fb7fa8;
  FUN_1000037f0(&DAT_100fb7fa8,&DAT_100c37b00);
  *(undefined **)(unaff_x22 + 0xb28) = puVar1;
  lVar6 = *(long *)(puVar1 + -8);
  *(long *)(unaff_x22 + 0xb58) = lVar6;
  uVar2 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb88) = uVar2;
  puVar1 = &DAT_100fbbab8;
  FUN_1000037f0(&DAT_100fbbab8,&DAT_100c3c5f0);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb90) = uVar3;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb98) = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xba0) = uVar2;
  puVar4 = &DAT_100fbbac0;
  FUN_1000037f0(&DAT_100fbbac0,&DAT_100c3c5f8);
  uVar3 = *(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xf;
  uVar5 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xba8) = uVar5;
  uVar5 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xbb0) = uVar5;
  uVar5 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 3000) = uVar5;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xbc0) = uVar3;
  _swift_asyncLet_begin(unaff_x22 + 0x10,0,puVar4,&DAT_100c3c600,0,uVar3);
  _swift_asyncLet_begin(unaff_x22 + 0x290,0,puVar1,&DAT_100c3c608,0,uVar2);
  puVar1 = PTR___type_metadata_for_Swift_Int_100eac6f8;
  _swift_asyncLet_begin
            (unaff_x22 + 0x510,0,PTR___type_metadata_for_Swift_Int_100eac6f8,&DAT_100c3c610,0,
             unaff_x22 + 0xa38);
  _swift_asyncLet_begin(unaff_x22 + 0x790,0,puVar1,&DAT_100c3c618,0,unaff_x22 + 0xa68);
  _swift_asyncLet_get(unaff_x22 + 0x10,uVar3,FUN_1002b2e7c,unaff_x22 + 0xa10);
  return;
}



/* Address: 0x1002b2e7c | FUN_1002b2e7c */

void FUN_1002b2e7c(void)

{
  long unaff_x22;
  
  FUN_100011090(*(undefined8 *)(unaff_x22 + 0xbc0),*(undefined8 *)(unaff_x22 + 3000),&DAT_100fbbac0,
                &DAT_100c3c5f8);
  _swift_asyncLet_get(unaff_x22 + 0x290,*(undefined8 *)(unaff_x22 + 0xba0),FUN_1002b2ed0,
                      unaff_x22 + 0xa40);
  return;
}



/* Address: 0x1002b2ed0 | FUN_1002b2ed0 */

void FUN_1002b2ed0(void)

{
  long unaff_x22;
  
  FUN_100011090(*(undefined8 *)(unaff_x22 + 0xba0),*(undefined8 *)(unaff_x22 + 0xb98),&DAT_100fbbab8
                ,&DAT_100c3c5f0);
  _swift_asyncLet_get(unaff_x22 + 0x510,unaff_x22 + 0xa38,FUN_1002b2f24,unaff_x22 + 0xa70);
  return;
}



/* Address: 0x1002b2f24 | FUN_1002b2f24 */

void FUN_1002b2f24(void)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xbc8) = *(undefined8 *)(unaff_x22 + 0xa38);
  _swift_asyncLet_get(unaff_x22 + 0x790,unaff_x22 + 0xa68,FUN_1002b2f44,unaff_x22 + 0xaa0);
  return;
}



/* Address: 0x1002b2f44 | FUN_1002b2f44 */

void FUN_1002b2f44(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xaf8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xac8);
  FUN_1000da368();
  *(undefined8 *)(unaff_x22 + 0xbd0) = uVar1;
  *(undefined8 *)(unaff_x22 + 0xbd8) = uVar2;
  _swift_task_switch(FUN_1002b2f90,uVar1,uVar2);
  return;
}



/* Address: 0x1002b2f90 | FUN_1002b2f90 */

void FUN_1002b2f90(void)

{
  bool bVar1;
  Storefront SVar2;
  undefined8 uVar3;
  Storefront SVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  code *pcVar7;
  undefined8 uVar8;
  long lVar9;
  String SVar10;
  
  SVar4.unknown = *(undefined **)(unaff_x22 + 0xbb0);
  *(undefined8 *)(unaff_x22 + 0xbe0) = *(undefined8 *)(unaff_x22 + 0xa68);
  FUN_100011090(*(undefined8 *)(unaff_x22 + 3000),SVar4.unknown,&DAT_100fbbac0,&DAT_100c3c5f8);
  SVar2 = StoreKit::Storefront::typeMetadataAccessor();
  lVar9 = *(long *)(SVar2.unknown + -8);
  pcVar7 = *(code **)(lVar9 + 0x30);
  (*pcVar7)(SVar4.unknown,1,SVar2.unknown);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xbb0);
  if ((int)SVar4.unknown == 1) {
    FUN_100005808(uVar5,&DAT_100fbbac0,&DAT_100c3c5f8);
    SVar10 = (String)ZEXT816(0);
  }
  else {
    SVar10 = StoreKit::Storefront::get_id(SVar4);
    (**(code **)(lVar9 + 8))(uVar5,SVar2.unknown);
  }
  *(String *)(unaff_x22 + 0xbe8) = SVar10;
  SVar4.unknown = *(undefined **)(unaff_x22 + 0xba8);
  FUN_100011090(*(undefined8 *)(unaff_x22 + 3000),SVar4.unknown,&DAT_100fbbac0,&DAT_100c3c5f8);
  (*pcVar7)(SVar4.unknown,1,SVar2.unknown);
  uVar8 = *(undefined8 *)(unaff_x22 + 3000);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xba8);
  if ((int)SVar4.unknown == 1) {
    FUN_100005808(uVar8,&DAT_100fbbac0,&DAT_100c3c5f8);
    FUN_100005808(uVar5,&DAT_100fbbac0,&DAT_100c3c5f8);
    SVar10 = (String)ZEXT816(0);
  }
  else {
    SVar10 = StoreKit::Storefront::get_countryCode(SVar4);
    FUN_100005808(uVar8,&DAT_100fbbac0,&DAT_100c3c5f8);
    (**(code **)(lVar9 + 8))(uVar5,SVar2.unknown);
  }
  *(String *)(unaff_x22 + 0xbf8) = SVar10;
  uVar5 = *(undefined8 *)(unaff_x22 + 0xb90);
  lVar9 = *(long *)(unaff_x22 + 0xb58);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xb28);
  FUN_10019ffdc(*(undefined8 *)(unaff_x22 + 0xb98),uVar5,&DAT_100fbbab8,&DAT_100c3c5f0);
  (**(code **)(lVar9 + 0x30))(uVar5,1,uVar8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xb90);
  if ((int)uVar5 == 1) {
    FUN_100005808(uVar8,&DAT_100fbbab8,&DAT_100c3c5f0);
    bVar1 = false;
  }
  else {
    uVar6 = *(undefined8 *)(unaff_x22 + 0xb88);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xb28);
    FUN_100011090(uVar8,uVar6,&DAT_100fb7fa8,&DAT_100c37b00);
    uVar5 = uVar6;
    _swift_getEnumCaseMultiPayload(uVar6,uVar3);
    bVar1 = (int)uVar5 == 1;
    FUN_100005808(uVar6,&DAT_100fb7fa8,&DAT_100c37b00);
    FUN_100005808(uVar8,&DAT_100fb7fa8,&DAT_100c37b00);
  }
  *(bool *)(unaff_x22 + 0xc08) = bVar1;
  _swift_asyncLet_finish(unaff_x22 + 0x790,unaff_x22 + 0xa68,FUN_1002b31fc,unaff_x22 + 0xad0);
  return;
}



/* Address: 0x1002b31fc | FUN_1002b31fc */

void FUN_1002b31fc(void)

{
  long unaff_x22;
  
  _swift_task_switch(FUN_1002b3210,*(undefined8 *)(unaff_x22 + 0xbd0),
                     *(undefined8 *)(unaff_x22 + 0xbd8));
  return;
}



/* Address: 0x1002b3210 | FUN_1002b3210 */

void FUN_1002b3210(void)

{
  long unaff_x22;
  
  _swift_asyncLet_finish(unaff_x22 + 0x510,unaff_x22 + 0xa38,FUN_1002b3228,unaff_x22 + 0xb00);
  return;
}



/* Address: 0x1002b3228 | FUN_1002b3228 */

void FUN_1002b3228(void)

{
  long unaff_x22;
  
  _swift_task_switch(FUN_1002b323c,*(undefined8 *)(unaff_x22 + 0xbd0),
                     *(undefined8 *)(unaff_x22 + 0xbd8));
  return;
}



/* Address: 0x1002b323c | FUN_1002b323c */

void FUN_1002b323c(void)

{
  long unaff_x22;
  
  _swift_asyncLet_finish
            (unaff_x22 + 0x290,*(undefined8 *)(unaff_x22 + 0xba0),FUN_1002b3254,unaff_x22 + 0xb30);
  return;
}



/* Address: 0x1002b3254 | FUN_1002b3254 */

void FUN_1002b3254(void)

{
  long unaff_x22;
  
  _swift_task_switch(FUN_1002b3268,*(undefined8 *)(unaff_x22 + 0xbd0),
                     *(undefined8 *)(unaff_x22 + 0xbd8));
  return;
}



/* Address: 0x1002b3268 | FUN_1002b3268 */

void FUN_1002b3268(void)

{
  long unaff_x22;
  
  _swift_asyncLet_finish
            (unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0xbc0),FUN_1002b3280,unaff_x22 + 0xb60);
  return;
}



/* Address: 0x1002b3280 | FUN_1002b3280 */

void FUN_1002b3280(void)

{
  long unaff_x22;
  
  _swift_task_switch(FUN_1002b3294,*(undefined8 *)(unaff_x22 + 0xbd0),
                     *(undefined8 *)(unaff_x22 + 0xbd8));
  return;
}



/* Address: 0x1002b3294 | FUN_1002b3294 */

void FUN_1002b3294(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar1 = *(undefined1 *)(unaff_x22 + 0xc08);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xbe0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xbc8);
  uVar4 = *(undefined8 *)(unaff_x22 + 3000);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xbb0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xba8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xba0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xb98);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xb90);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xb88);
  puVar10 = *(undefined8 **)(unaff_x22 + 0xa98);
  uVar15 = *(undefined8 *)(unaff_x22 + 0xbf0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xbe8);
  uVar13 = *(undefined8 *)(unaff_x22 + 0xc00);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xbf8);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xbc0));
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar9);
  puVar10[1] = uVar15;
  *puVar10 = uVar14;
  puVar10[3] = uVar13;
  puVar10[2] = uVar12;
  *(undefined1 *)(puVar10 + 4) = uVar1;
  puVar10[5] = uVar11;
  puVar10[6] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x0001002b3370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1002b3374 | FUN_1002b3374 */

void FUN_1002b3374(long param_1)

{
  StoreKitError SVar1;
  undefined *puVar2;
  undefined7 extraout_var;
  undefined1 *puVar4;
  long extraout_x8;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auStack_40 [8];
  long local_38;
  long lVar3;
  
  puVar2 = &DAT_100fbba98;
  FUN_1000037f0(&DAT_100fbba98,&DAT_100c3c5c0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_40 + -extraout_x8;
  if (param_1 != 0) {
    local_38 = param_1;
    _swift_errorRetain();
    puVar2 = &DAT_100fb8200;
    FUN_1000037f0(&DAT_100fb8200,&DAT_100c38350);
    SVar1 = StoreKit::StoreKitError::typeMetadataAccessor();
    lVar3 = CONCAT71(extraout_var,SVar1.value);
    puVar4 = puVar5;
    _swift_dynamicCast(puVar5,&local_38,puVar2,lVar3,6);
    lVar6 = *(long *)(lVar3 + -8);
    if ((int)puVar4 == 0) {
      (**(code **)(lVar6 + 0x38))(puVar5,1,1,lVar3);
      FUN_100005808(puVar5,&DAT_100fbba98,&DAT_100c3c5c0);
    }
    else {
      (**(code **)(lVar6 + 0x38))(puVar5,0,1,lVar3);
      (**(code **)(lVar6 + 0x58))(puVar5,lVar3);
      (**(code **)(lVar6 + 8))(puVar5,lVar3);
    }
  }
  return;
}



/* Address: 0x1002b34b8 | FUN_1002b34b8 */

undefined * FUN_1002b34b8(long param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  code *pcVar7;
  _DictionaryStorage *this;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *capacity;
  undefined8 *puVar11;
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar8 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fb8f08;
    FUN_1000037f0(&DAT_100fb8f08,&DAT_100c389b0);
    puVar8 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    _swift_retain();
    puVar11 = (undefined8 *)(param_1 + 0x38);
    do {
      uVar3 = puVar11[-3];
      uVar5 = puVar11[-2];
      uVar4 = puVar11[-1];
      uVar6 = *puVar11;
      _swift_bridgeObjectRetain(uVar5);
      _swift_bridgeObjectRetain(uVar6);
      uVar9 = uVar3;
      uVar10 = uVar5;
      FUN_100071370();
      if ((uVar10 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1002b35c4);
        (*pcVar7)();
      }
      uVar10 = uVar9 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar8 + uVar10 + 0x40) = *(ulong *)(puVar8 + uVar10 + 0x40) | 1L << (uVar9 & 0x3f)
      ;
      puVar1 = (ulong *)(*(long *)(puVar8 + 0x30) + uVar9 * 0x10);
      *puVar1 = uVar3;
      puVar1[1] = uVar5;
      puVar2 = (undefined8 *)(*(long *)(puVar8 + 0x38) + uVar9 * 0x10);
      *puVar2 = uVar4;
      puVar2[1] = uVar6;
      if (SCARRY8(*(long *)(puVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1002b35c8);
        (*pcVar7)();
      }
      puVar11 = puVar11 + 4;
      *(long *)(puVar8 + 0x10) = *(long *)(puVar8 + 0x10) + 1;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar8);
  }
  return puVar8;
}



/* Address: 0x1002b35c8 | FUN_1002b35c8 */

undefined * FUN_1002b35c8(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  _DictionaryStorage *this;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *capacity;
  ulong local_90;
  ulong uStack_88;
  undefined1 auStack_80 [32];
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fb8f00;
    FUN_1000037f0(&DAT_100fb8f00,&DAT_100c389a8);
    puVar5 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    param_1 = param_1 + 0x20;
    _swift_retain();
    do {
      FUN_100011090(param_1,&local_90,&DAT_100fbb7b0,&DAT_100c3c090);
      uVar3 = uStack_88;
      uVar2 = local_90;
      uVar6 = local_90;
      uVar7 = uStack_88;
      FUN_100071370();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1002b36f0);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      FUN_100011080(auStack_80,*(long *)(puVar5 + 0x38) + uVar6 * 0x20);
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1002b36f4);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      param_1 = param_1 + 0x30;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar5);
  }
  return puVar5;
}



/* Address: 0x1002b36f4 | FUN_1002b36f4 */

Set<undefined> FUN_1002b36f4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long minimumCapacity;
  undefined8 *puVar3;
  undefined1 auStack_58 [8];
  undefined8 local_50;
  undefined *local_48;
  
  minimumCapacity = *(long *)(param_1 + 0x10);
  local_48 = (undefined *)Swift::Set::init(minimumCapacity);
  if (minimumCapacity != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar1 = puVar3[-1];
      uVar2 = *puVar3;
      _swift_bridgeObjectRetain(uVar2);
      FUN_1002b17bc(auStack_58,uVar1,uVar2);
      _swift_bridgeObjectRelease(local_50);
      puVar3 = puVar3 + 2;
      minimumCapacity = minimumCapacity + -1;
    } while (minimumCapacity != 0);
  }
  return (Set<undefined>)local_48;
}



/* Address: 0x1002b3788 | FUN_1002b3788 */

void FUN_1002b3788(long param_1,long param_2,long param_3,long *param_4,long param_5)

{
  code *pcVar1;
  long lVar2;
  long extraout_x8;
  char *pcVar3;
  long lVar4;
  long extraout_x12;
  long extraout_x13;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  char *pcVar9;
  ulong uVar10;
  long lVar11;
  char *pcVar12;
  ulong uVar13;
  char acStack_a0 [8];
  
  lVar2 = 0;
  FUN_1002abb94();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  pcVar3 = acStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  pcVar12 = pcVar3 + -extraout_x13;
  if (param_3 == param_2) {
    return;
  }
  lVar6 = *param_4;
  uVar10 = *(ulong *)(param_5 + 0x10);
  lVar4 = *(long *)(extraout_x12 + 0x48);
  lVar7 = param_3;
LAB_1002b3840:
  lVar11 = param_3 + -1;
  lVar5 = lVar6 + lVar11 * lVar4;
  FUN_100252c50(lVar5,pcVar12);
  if (uVar10 != 0) {
    uVar8 = 0;
    pcVar9 = (char *)(lVar6 + lVar4 * param_3);
    do {
      if (*(char *)(param_5 + 0x20 + uVar8) == *pcVar9) {
        if (*(ulong *)(param_5 + 0x10) == 0) goto LAB_1002b38b8;
        uVar13 = 0;
        goto LAB_1002b38a0;
      }
      uVar8 = uVar8 + 1;
    } while (uVar10 != uVar8);
  }
  FUN_10005241c(pcVar12,FUN_1002abb94);
  goto LAB_1002b3944;
  while (uVar13 = uVar13 + 1, *(ulong *)(param_5 + 0x10) != uVar13) {
LAB_1002b38a0:
    if (*(char *)(param_5 + 0x20 + uVar13) == *pcVar12) {
      FUN_10005241c(pcVar12,FUN_1002abb94);
      if (uVar8 < uVar13) goto LAB_1002b38ec;
      goto LAB_1002b3944;
    }
  }
LAB_1002b38b8:
  FUN_10005241c(pcVar12,FUN_1002abb94);
LAB_1002b38ec:
  if (lVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1002b397c);
    (*pcVar1)();
  }
  FUN_10026d1d8(pcVar9,pcVar3);
  _swift_arrayInitWithTakeFrontToBack(pcVar9,lVar5,1,lVar2);
  FUN_10026d1d8(pcVar3,lVar5);
  param_3 = lVar11;
  if (lVar11 == param_1) {
LAB_1002b3944:
    param_3 = lVar7 + 1;
    lVar7 = param_3;
    if (param_3 == param_2) {
      return;
    }
  }
  goto LAB_1002b3840;
}



/* Address: 0x1002b397c | FUN_1002b397c */

undefined8 FUN_1002b397c(char *param_1,char *param_2,char *param_3,char *param_4,long param_5)

{
  char *pcVar1;
  code *pcVar2;
  long lVar3;
  long extraout_x8;
  ulong uVar4;
  char *pcVar5;
  long extraout_x12;
  long extraout_x13;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  char *pcVar10;
  char *pcVar11;
  long lVar12;
  char *pcVar13;
  char *pcVar14;
  char acStack_b0 [8];
  char *local_70;
  char *local_68;
  char *local_58;
  
  lVar3 = 0;
  FUN_1002abb94();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  pcVar5 = acStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  pcVar14 = pcVar5 + -extraout_x13;
  lVar12 = *(long *)(extraout_x12 + 0x48);
  if (lVar12 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1002b3e70);
    (*pcVar2)();
  }
  if (((long)param_2 - (long)param_1 == -0x8000000000000000) && (lVar12 == -1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1002b3e74);
    (*pcVar2)();
  }
  if (((long)param_3 - (long)param_2 == -0x8000000000000000) && (lVar12 == -1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1002b3e78);
    (*pcVar2)();
  }
  lVar7 = 0;
  if (lVar12 != 0) {
    lVar7 = ((long)param_2 - (long)param_1) / lVar12;
  }
  lVar6 = 0;
  if (lVar12 != 0) {
    lVar6 = ((long)param_3 - (long)param_2) / lVar12;
  }
  local_68 = param_4;
  local_58 = param_1;
  if (lVar7 < lVar6) {
    lVar6 = lVar7 * lVar12;
    if ((param_4 < param_1) || (param_1 + lVar6 <= param_4)) {
      _swift_arrayInitWithTakeFrontToBack(param_4,param_1,lVar7,lVar3);
    }
    else if (param_4 != param_1) {
      _swift_arrayInitWithTakeBackToFront(param_4,param_1,lVar7,lVar3);
    }
    pcVar5 = param_4 + lVar6;
    local_70 = pcVar5;
    if (0 < lVar6 && param_2 < param_3) {
LAB_1002b3af8:
      FUN_100252c50(param_4,pcVar14);
      uVar4 = *(ulong *)(param_5 + 0x10);
      if (uVar4 != 0) {
        uVar9 = 0;
        do {
          if (*(char *)(param_5 + 0x20 + uVar9) == *param_2) {
            uVar8 = 0;
            goto LAB_1002b3b9c;
          }
          uVar9 = uVar9 + 1;
        } while (uVar4 != uVar9);
      }
      FUN_10005241c(pcVar14,FUN_1002abb94);
LAB_1002b3b40:
      pcVar11 = param_4 + lVar12;
      pcVar13 = param_2;
      pcVar10 = pcVar11;
      if ((param_1 < param_4) || (pcVar11 <= param_1)) {
        _swift_arrayInitWithTakeFrontToBack(param_1,param_4,1,lVar3);
      }
      else if (param_1 != param_4) {
        _swift_arrayInitWithTakeBackToFront(param_1,param_4,1,lVar3);
      }
      goto LAB_1002b3c2c;
    }
  }
  else {
    lVar7 = lVar6 * lVar12;
    if ((param_4 < param_2) || (param_2 + lVar7 <= param_4)) {
      _swift_arrayInitWithTakeFrontToBack(param_4,param_2,lVar6,lVar3);
    }
    else if (param_4 != param_2) {
      _swift_arrayInitWithTakeBackToFront(param_4,param_2,lVar6,lVar3);
    }
    pcVar14 = param_4 + lVar7;
    local_70 = pcVar14;
    local_58 = param_2;
    if (0 < lVar7 && param_1 < param_2) {
      lVar12 = -lVar12;
      local_58 = param_2;
LAB_1002b3cc8:
      pcVar13 = local_58;
      pcVar11 = local_58 + lVar12;
      pcVar10 = param_3;
LAB_1002b3d00:
      param_3 = pcVar10 + lVar12;
      pcVar1 = pcVar14 + lVar12;
      FUN_100252c50(pcVar11,pcVar5);
      uVar4 = *(ulong *)(param_5 + 0x10);
      if (uVar4 != 0) {
        uVar9 = 0;
        do {
          if (*(char *)(param_5 + 0x20 + uVar9) == *pcVar1) {
            uVar8 = 0;
            goto LAB_1002b3da4;
          }
          uVar9 = uVar9 + 1;
        } while (uVar4 != uVar9);
      }
      FUN_10005241c(pcVar5,FUN_1002abb94);
      goto LAB_1002b3d54;
    }
  }
LAB_1002b3c7c:
  FUN_1002b16f8(&local_58,&local_68,&local_70);
  return 1;
LAB_1002b3da4:
  if (*(char *)(param_5 + 0x20 + uVar8) == *pcVar5) goto LAB_1002b3dc0;
  uVar8 = uVar8 + 1;
  if (uVar4 == uVar8) {
    FUN_10005241c(pcVar5,FUN_1002abb94);
    goto LAB_1002b3df4;
  }
  goto LAB_1002b3da4;
LAB_1002b3dc0:
  FUN_10005241c(pcVar5,FUN_1002abb94);
  if (uVar9 < uVar8) goto LAB_1002b3df4;
LAB_1002b3d54:
  local_70 = pcVar1;
  if ((pcVar10 < pcVar14) || (pcVar14 <= param_3)) {
    _swift_arrayInitWithTakeFrontToBack(param_3,pcVar1,1,lVar3);
  }
  else if (pcVar10 != pcVar14) {
    _swift_arrayInitWithTakeBackToFront(param_3,pcVar1,1,lVar3);
  }
  pcVar10 = param_3;
  pcVar14 = pcVar1;
  if (pcVar1 <= param_4) goto LAB_1002b3c7c;
  goto LAB_1002b3d00;
LAB_1002b3df4:
  if ((pcVar10 < pcVar13) || (pcVar13 <= param_3)) {
    _swift_arrayInitWithTakeFrontToBack(param_3,pcVar11,1,lVar3);
  }
  else if (pcVar10 != pcVar13) {
    _swift_arrayInitWithTakeBackToFront(param_3,pcVar11,1,lVar3);
  }
  local_58 = pcVar11;
  if ((pcVar14 <= param_4) || (pcVar11 <= param_1)) goto LAB_1002b3c7c;
  goto LAB_1002b3cc8;
  while (uVar8 = uVar8 + 1, uVar4 != uVar8) {
LAB_1002b3b9c:
    if (*(char *)(param_5 + 0x20 + uVar8) == *pcVar14) {
      FUN_10005241c(pcVar14,FUN_1002abb94);
      if (uVar9 < uVar8) goto LAB_1002b3be0;
      goto LAB_1002b3b40;
    }
  }
  FUN_10005241c(pcVar14,FUN_1002abb94);
LAB_1002b3be0:
  pcVar13 = param_2 + lVar12;
  pcVar11 = param_4;
  if ((param_1 < param_2) || (pcVar13 <= param_1)) {
    _swift_arrayInitWithTakeFrontToBack(param_1,param_2,1,lVar3);
    pcVar10 = local_68;
  }
  else {
    pcVar10 = local_68;
    if (param_1 != param_2) {
      _swift_arrayInitWithTakeBackToFront(param_1,param_2,1,lVar3);
      pcVar10 = local_68;
    }
  }
LAB_1002b3c2c:
  local_68 = pcVar10;
  param_1 = param_1 + lVar12;
  local_58 = param_1;
  if ((pcVar5 <= pcVar11) ||
     (param_4 = pcVar11, param_2 = pcVar13, local_58 = param_1, param_3 <= pcVar13))
  goto LAB_1002b3c7c;
  goto LAB_1002b3af8;
}



/* Address: 0x1002b3e78 | FUN_1002b3e78 */

undefined8 FUN_1002b3e78(ulong *param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x21;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  
  uVar11 = *param_1;
  if (1 < *(ulong *)(uVar11 + 0x10)) {
    _swift_bridgeObjectRetain(param_4);
    uVar13 = uVar11;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar13 & 1) == 0) {
      FUN_1002b17a8();
    }
    *param_1 = uVar11;
    lVar1 = uVar11 + 0x20;
    uVar13 = *(ulong *)(uVar11 + 0x10);
    do {
      uVar9 = uVar13 - 1;
      if (uVar13 < 4) {
        if (uVar13 == 3) {
          bVar6 = SBORROW8(*(long *)(uVar11 + 0x28),*(long *)(uVar11 + 0x20));
          lVar14 = *(long *)(uVar11 + 0x28) - *(long *)(uVar11 + 0x20);
          goto LAB_1002b3f68;
        }
        if (uVar13 < 2) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1002b4148);
          (*pcVar5)();
        }
        plVar2 = (long *)(uVar11 + uVar13 * 0x10);
        lVar14 = *plVar2;
        lVar8 = plVar2[1];
        bVar6 = SBORROW8(lVar8,lVar14);
        lVar8 = lVar8 - lVar14;
LAB_1002b3fc8:
        if (bVar6) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1002b4138);
          (*pcVar5)();
        }
        plVar2 = (long *)(lVar1 + uVar9 * 0x10);
        lVar14 = *plVar2;
        lVar4 = plVar2[1];
        if (SBORROW8(lVar4,lVar14)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1002b4140);
          (*pcVar5)();
        }
        uVar10 = uVar9;
        if (lVar4 - lVar14 < lVar8) break;
      }
      else {
        lVar8 = lVar1 + uVar13 * 0x10;
        if (SBORROW8(*(long *)(lVar8 + -0x38),*(long *)(lVar8 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1002b4120);
          (*pcVar5)();
        }
        lVar14 = *(long *)(lVar8 + -0x28) - *(long *)(lVar8 + -0x30);
        if (SBORROW8(*(long *)(lVar8 + -0x28),*(long *)(lVar8 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1002b4124);
          (*pcVar5)();
        }
        plVar2 = (long *)(uVar11 + uVar13 * 0x10);
        lVar4 = *plVar2;
        lVar7 = plVar2[1];
        lVar12 = lVar7 - lVar4;
        if (SBORROW8(lVar7,lVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1002b412c);
          (*pcVar5)();
        }
        if (SCARRY8(lVar14,lVar12)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1002b4134);
          (*pcVar5)();
        }
        bVar6 = false;
        if (lVar14 + lVar12 < *(long *)(lVar8 + -0x38) - *(long *)(lVar8 + -0x40)) {
LAB_1002b3f68:
          if (bVar6) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1002b4128);
            (*pcVar5)();
          }
          plVar2 = (long *)(uVar11 + uVar13 * 0x10);
          lVar4 = *plVar2;
          lVar7 = plVar2[1];
          lVar8 = lVar7 - lVar4;
          if (SBORROW8(lVar7,lVar4)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1002b4130);
            (*pcVar5)();
          }
          plVar2 = (long *)(lVar1 + uVar9 * 0x10);
          lVar4 = *plVar2;
          lVar7 = plVar2[1];
          lVar12 = lVar7 - lVar4;
          if (SBORROW8(lVar7,lVar4)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1002b413c);
            (*pcVar5)();
          }
          if (SCARRY8(lVar8,lVar12)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1002b4144);
            (*pcVar5)();
          }
          bVar6 = false;
          if (lVar8 + lVar12 < lVar14) goto LAB_1002b3fc8;
          uVar10 = uVar13 - 2;
          if (lVar12 <= lVar14) {
            uVar10 = uVar9;
          }
        }
        else {
          plVar2 = (long *)(lVar1 + uVar9 * 0x10);
          lVar8 = *plVar2;
          lVar4 = plVar2[1];
          if (SBORROW8(lVar4,lVar8)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1002b414c);
            (*pcVar5)();
          }
          uVar10 = uVar13 - 2;
          if (lVar4 - lVar8 <= lVar14) {
            uVar10 = uVar9;
          }
        }
      }
      uVar9 = uVar10 - 1;
      if (uVar13 <= uVar9) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1002b4110);
        (*pcVar5)();
      }
      lVar14 = *param_3;
      if (lVar14 == 0) {
        _swift_bridgeObjectRelease(param_4);
        *param_1 = uVar11;
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1002b4174);
        (*pcVar5)();
      }
      plVar2 = (long *)(lVar1 + uVar9 * 0x10);
      lVar12 = *plVar2;
      plVar3 = (long *)(lVar1 + uVar10 * 0x10);
      lVar8 = *plVar3;
      lVar4 = plVar3[1];
      lVar7 = 0;
      FUN_1002abb94();
      lVar7 = *(long *)(*(long *)(lVar7 + -8) + 0x48);
      _swift_bridgeObjectRetain(param_4);
      FUN_1002b397c(lVar14 + lVar7 * lVar12,lVar14 + lVar7 * lVar8,lVar14 + lVar7 * lVar4,param_2,
                    param_4);
      _swift_bridgeObjectRelease(param_4);
      if (unaff_x21 != 0) {
        *param_1 = uVar11;
        _swift_bridgeObjectRelease(param_4);
        return 1;
      }
      if (lVar4 < lVar12) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1002b4114);
        (*pcVar5)();
      }
      uVar15 = *(ulong *)(uVar11 + 0x10);
      if (uVar15 <= uVar9) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1002b4118);
        (*pcVar5)();
      }
      *plVar2 = lVar12;
      plVar2[1] = lVar4;
      if (uVar15 <= uVar10) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1002b411c);
        (*pcVar5)();
      }
      uVar13 = uVar15 - 1;
      _memmove(plVar3,plVar3 + 2,(uVar13 - uVar10) * 0x10);
      *(ulong *)(uVar11 + 0x10) = uVar13;
    } while (2 < uVar15);
    _swift_bridgeObjectRelease(param_4);
    *param_1 = uVar11;
  }
  return 1;
}



/* Address: 0x1002b4174 | FUN_1002b4174 */

void FUN_1002b4174(long *param_1,undefined8 param_2,long *param_3,long param_4,long param_5)

{
  long *plVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  ulong uVar8;
  ulong *puVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long unaff_x21;
  undefined *puVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  char *pcVar18;
  long lVar19;
  ulong auStack_e0 [3];
  char *pcStack_c8;
  long *local_c0;
  char *local_b8;
  long local_b0;
  long *local_a8;
  long local_a0;
  long local_98;
  undefined *local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  long local_70;
  ulong *local_68;
  undefined *local_58;
  
  lVar4 = 0;
  local_c0 = param_1;
  FUN_1002abb94();
  local_b0 = *(long *)(lVar4 + -8);
  local_80 = lVar4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_b0 + 0x40));
  lVar4 = (long)auStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_98 = lVar4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar9 = (ulong *)(lVar4 - extraout_x12);
  local_68 = puVar9;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar4 = (long)puVar9 - extraout_x12_00;
  local_88 = lVar4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  pcVar18 = (char *)(lVar4 - extraout_x12_01);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_b8 = pcVar18 + -extraout_x12_02;
  local_58 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar13 = (undefined *)param_3[1];
  local_a8 = param_3;
  if (0 < (long)puVar13) {
    uVar15 = param_5 + 0x20;
    auStack_e0[1] = param_4;
    _swift_bridgeObjectRetain_n(param_5,2);
    puVar10 = (undefined *)0x0;
    auStack_e0[2] = uVar15;
    pcStack_c8 = pcVar18;
LAB_1002b429c:
    puVar7 = puVar10 + 1;
    puVar5 = puVar7;
    local_a0 = unaff_x21;
    local_78 = puVar10;
    if ((long)puVar7 < (long)puVar13) {
      lVar16 = *param_3;
      lVar4 = *(long *)(local_b0 + 0x48);
      FUN_100252c50(lVar16 + lVar4 * (long)puVar10,local_b8);
      uVar8 = *(ulong *)(param_5 + 0x10);
      if (uVar8 != 0) {
        uVar11 = 0;
        do {
          if (*(char *)(uVar15 + uVar11) == *(char *)(lVar16 + lVar4 * (long)puVar7)) {
            uVar12 = 0;
            goto LAB_1002b43f4;
          }
          uVar11 = uVar11 + 1;
        } while (uVar8 != uVar11);
      }
      bVar3 = false;
      goto LAB_1002b42f4;
    }
    goto LAB_1002b4508;
  }
  _swift_bridgeObjectRetain_n(param_5,2);
LAB_1002b476c:
  puVar10 = local_58;
  local_70 = *local_c0;
  if (local_70 == 0) {
    _swift_bridgeObjectRelease_n(param_5,2);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1002b4938);
    (*pcVar2)();
  }
  puVar13 = local_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar13 & 1) == 0) {
    FUN_1002b17a8();
  }
  local_68 = (ulong *)(puVar10 + 0x10);
  uVar15 = *local_68;
  puVar13 = local_78;
  do {
    local_78 = puVar10;
    puVar10 = local_78;
    if (uVar15 < 2) {
LAB_1002b4880:
      local_78 = puVar13;
      _swift_bridgeObjectRelease_n(param_5,2);
      _swift_bridgeObjectRelease(puVar10);
      return;
    }
    lVar4 = *param_3;
    if (lVar4 == 0) {
      _swift_bridgeObjectRelease_n(param_5,2);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1002b4928);
      (*pcVar2)();
    }
    plVar1 = (long *)(local_78 + uVar15 * 0x10);
    lVar14 = *plVar1;
    puVar9 = local_68 + uVar15 * 2;
    uVar8 = *puVar9;
    uVar11 = puVar9[1];
    lVar16 = *(long *)(local_b0 + 0x48);
    _swift_bridgeObjectRetain(param_5);
    FUN_1002b397c(lVar4 + lVar16 * lVar14,lVar4 + lVar16 * uVar8,lVar4 + lVar16 * uVar11,local_70,
                  param_5);
    puVar10 = local_78;
    if (unaff_x21 != 0) {
      local_58 = local_78;
      _swift_bridgeObjectRelease(param_5);
      puVar13 = local_78;
      goto LAB_1002b4880;
    }
    _swift_bridgeObjectRelease(param_5);
    if ((long)uVar11 < lVar14) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1002b48c0);
      (*pcVar2)();
    }
    uVar8 = *local_68;
    if (uVar8 <= uVar15 - 2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1002b48c4);
      (*pcVar2)();
    }
    *plVar1 = lVar14;
    plVar1[1] = uVar11;
    lVar4 = uVar8 - uVar15;
    if (uVar8 < uVar15) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1002b48c8);
      (*pcVar2)();
    }
    uVar15 = uVar8 - 1;
    _memmove(puVar9,puVar9 + 2,lVar4 * 0x10);
    *local_68 = uVar15;
    puVar10 = local_78;
    param_3 = local_a8;
    puVar13 = local_78;
  } while( true );
  while (uVar12 = uVar12 + 1, uVar8 != uVar12) {
LAB_1002b43f4:
    if (*(char *)(uVar15 + uVar12) == *local_b8) {
      bVar3 = uVar11 < uVar12;
      goto LAB_1002b42f4;
    }
  }
  bVar3 = true;
LAB_1002b42f4:
  FUN_10005241c(local_b8,FUN_1002abb94);
  puVar5 = local_78 + 2;
  puVar10 = puVar5;
  local_70 = lVar4;
  if ((long)puVar5 < (long)puVar13) {
LAB_1002b433c:
    puVar6 = puVar10;
    FUN_100252c50(lVar16 + (long)puVar7 * lVar4,pcVar18);
    uVar8 = *(ulong *)(param_5 + 0x10);
    if (uVar8 != 0) {
      uVar11 = 0;
      do {
        if (*(char *)(uVar15 + uVar11) == *(char *)(lVar16 + (long)puVar6 * lVar4)) {
          uVar12 = 0;
          goto LAB_1002b4384;
        }
        uVar11 = uVar11 + 1;
      } while (uVar8 != uVar11);
    }
    FUN_10005241c(pcVar18,FUN_1002abb94);
    if (!bVar3) goto LAB_1002b4330;
    goto LAB_1002b4430;
  }
LAB_1002b441c:
  puVar6 = puVar5;
  param_3 = local_a8;
  if (bVar3) {
LAB_1002b4430:
    if ((long)puVar6 < (long)local_78) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1002b48d0);
      (*pcVar2)();
    }
    puVar5 = puVar6;
    param_3 = local_a8;
    if ((long)local_78 < (long)puVar6) {
      lVar16 = 0;
      lVar14 = *local_a8;
      lVar17 = lVar4 * (long)(puVar6 + -1);
      lVar19 = (long)puVar6 * lVar4;
      lVar4 = (long)local_78 * lVar4;
      puVar13 = local_78;
      do {
        if (puVar13 != puVar6 + lVar16 + -1) {
          if (lVar14 == 0) {
            _swift_bridgeObjectRelease_n(param_5,2);
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1002b4908);
            (*pcVar2)();
          }
          uVar15 = lVar14 + lVar4;
          FUN_10026d1d8(uVar15,local_88);
          if ((lVar4 < lVar17) || ((ulong)(lVar14 + lVar19) <= uVar15)) {
            _swift_arrayInitWithTakeFrontToBack(uVar15,lVar14 + lVar17,1,local_80);
          }
          else if (local_70 != 0) {
            _swift_arrayInitWithTakeBackToFront(uVar15,lVar14 + lVar17,1,local_80);
          }
          FUN_10026d1d8(local_88,lVar14 + lVar17);
        }
        puVar13 = puVar13 + 1;
        lVar16 = lVar16 + -1;
        lVar17 = lVar17 - local_70;
        lVar19 = lVar19 - local_70;
        lVar4 = lVar4 + local_70;
        param_3 = local_a8;
      } while ((long)puVar13 < (long)(puVar6 + lVar16));
    }
  }
LAB_1002b4508:
  puVar13 = (undefined *)param_3[1];
  puVar10 = puVar5;
  if ((long)puVar5 < (long)puVar13) {
    if (SBORROW8((long)puVar5,(long)local_78)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1002b48cc);
      (*pcVar2)();
    }
    if ((long)puVar5 - (long)local_78 < (long)auStack_e0[1]) {
      if (SCARRY8((long)local_78,auStack_e0[1])) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1002b48d4);
        (*pcVar2)();
      }
      puVar7 = local_78 + auStack_e0[1];
      if ((long)puVar13 <= (long)(local_78 + auStack_e0[1])) {
        puVar7 = puVar13;
      }
      if ((long)puVar7 < (long)local_78) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1002b48d8);
        (*pcVar2)();
      }
      if (puVar5 != puVar7) {
        lVar4 = *param_3;
        uVar15 = *(ulong *)(param_5 + 0x10);
        local_70 = *(long *)(local_b0 + 0x48);
        local_90 = puVar7;
        puVar13 = puVar5;
LAB_1002b456c:
        lVar16 = local_70;
        puVar10 = puVar5 + -1;
        lVar14 = lVar4 + (long)puVar10 * local_70;
        FUN_100252c50(lVar14,local_68);
        if (uVar15 != 0) {
          uVar8 = 0;
          pcVar18 = (char *)(lVar4 + lVar16 * (long)puVar5);
          do {
            if (*(char *)(param_5 + uVar8 + 0x20) == *pcVar18) {
              uVar11 = 0;
              goto LAB_1002b45bc;
            }
            uVar8 = uVar8 + 1;
          } while (uVar15 != uVar8);
        }
        FUN_10005241c(local_68,FUN_1002abb94);
        goto LAB_1002b465c;
      }
    }
  }
LAB_1002b4684:
  puVar7 = local_58;
  puVar13 = local_78;
  if ((long)puVar10 < (long)local_78) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1002b48bc);
    (*pcVar2)();
  }
  puVar5 = local_58;
  _swift_isUniquelyReferenced_nonNull_native();
  puVar6 = puVar7;
  if (((ulong)puVar5 & 1) == 0) {
    puVar6 = (undefined *)0x0;
    FUN_1002b15f8(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
  }
  uVar15 = *(ulong *)(puVar6 + 0x10);
  puVar7 = puVar6;
  if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar15) {
    puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
    FUN_1002b15f8(puVar7,uVar15 + 1,1,puVar6);
  }
  *(ulong *)(puVar7 + 0x10) = uVar15 + 1;
  *(undefined **)(puVar7 + uVar15 * 0x10 + 0x20) = puVar13;
  *(undefined **)(puVar7 + uVar15 * 0x10 + 0x28) = puVar10;
  lVar4 = *local_c0;
  local_58 = puVar7;
  if (lVar4 == 0) {
    _swift_bridgeObjectRelease_n(param_5,2);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1002b4918);
    (*pcVar2)();
  }
  _swift_bridgeObjectRetain(param_5);
  FUN_1002b3e78(&local_58,lVar4,param_3,param_5);
  pcVar18 = pcStack_c8;
  uVar15 = auStack_e0[2];
  if (local_a0 != 0) {
    _swift_bridgeObjectRelease(param_5);
    puVar10 = local_58;
    puVar13 = local_78;
    goto LAB_1002b4880;
  }
  _swift_bridgeObjectRelease(param_5);
  puVar13 = (undefined *)param_3[1];
  unaff_x21 = local_a0;
  if ((long)puVar13 <= (long)puVar10) goto code_r0x0001002b470c;
  goto LAB_1002b429c;
  while (uVar12 = uVar12 + 1, uVar8 != uVar12) {
LAB_1002b4384:
    puVar5 = puVar6;
    if (*(char *)(uVar15 + uVar12) == *pcVar18) {
      FUN_10005241c(pcVar18,FUN_1002abb94);
      lVar4 = local_70;
      if (bVar3 == uVar11 < uVar12) goto LAB_1002b4330;
      goto LAB_1002b441c;
    }
  }
  FUN_10005241c(pcVar18,FUN_1002abb94);
  param_3 = local_a8;
  if (bVar3 == false) goto LAB_1002b4508;
LAB_1002b4330:
  puVar5 = puVar13;
  puVar10 = puVar6 + 1;
  puVar7 = puVar6;
  if (puVar6 + 1 == puVar13) goto LAB_1002b441c;
  goto LAB_1002b433c;
  while (uVar11 = uVar11 + 1, uVar15 != uVar11) {
LAB_1002b45bc:
    if (*(char *)(param_5 + uVar11 + 0x20) == (char)*local_68) {
      FUN_10005241c(local_68,FUN_1002abb94);
      if (uVar8 < uVar11) goto LAB_1002b4604;
      goto LAB_1002b465c;
    }
  }
  FUN_10005241c(local_68,FUN_1002abb94);
LAB_1002b4604:
  lVar16 = local_98;
  if (lVar4 == 0) {
    _swift_bridgeObjectRelease_n(param_5,2);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1002b48f8);
    (*pcVar2)();
  }
  FUN_10026d1d8(pcVar18,local_98);
  _swift_arrayInitWithTakeFrontToBack(pcVar18,lVar14,1,local_80);
  FUN_10026d1d8(lVar16,lVar14);
  puVar5 = puVar10;
  if (puVar10 != local_78) goto LAB_1002b456c;
LAB_1002b465c:
  puVar5 = puVar13 + 1;
  puVar10 = local_90;
  param_3 = local_a8;
  puVar13 = puVar5;
  if (puVar5 == local_90) goto LAB_1002b4684;
  goto LAB_1002b456c;
code_r0x0001002b470c:
  unaff_x21 = 0;
  goto LAB_1002b476c;
}



/* Address: 0x1002b4938 | FUN_1002b4938 */

void FUN_1002b4938(ulong *param_1,undefined8 param_2)

{
  ContiguousArray CVar1;
  __int64 _Var2;
  _ContiguousArrayBuffer<undefined> _Var3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong minimumCapacity;
  ulong uVar7;
  undefined *local_80;
  ulong uStack_78;
  long local_70;
  ulong uStack_68;
  undefined1 auStack_58 [8];
  
  CVar1.unknown = (undefined *)0x0;
  FUN_1002abb94();
  lVar5 = *(long *)(CVar1.unknown + -8);
  uVar4 = *param_1;
  _swift_bridgeObjectRetain_n(param_2,3);
  uVar6 = uVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar6 & 1) == 0) {
    FUN_1002b2ba8();
  }
  uVar6 = *(ulong *)(uVar4 + 0x10);
  uVar7 = (ulong)*(byte *)(lVar5 + 0x50) + 0x20 &
          ((ulong)*(byte *)(lVar5 + 0x50) ^ 0xffffffffffffffff);
  local_70 = uVar4 + uVar7;
  uStack_68 = uVar6;
  _Var2 = Swift::_minimumMergeRunLength(uVar6);
  if (_Var2 < (long)uVar6) {
    minimumCapacity = uVar6 >> 1;
    _Var3.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (1 < uVar6) {
      _Var3 = Swift::ContiguousArray::_allocateBufferUninitialized(minimumCapacity,CVar1);
      *(ulong *)(_Var3.unknown + 0x10) = minimumCapacity;
    }
    local_80 = _Var3.unknown + uVar7;
    uStack_78 = minimumCapacity;
    _swift_bridgeObjectRetain(param_2);
    FUN_1002b4174(&local_80,auStack_58,&local_70,_Var2,param_2);
    _swift_bridgeObjectRelease(param_2);
    *(undefined8 *)(_Var3.unknown + 0x10) = 0;
    _swift_release(_Var3.unknown);
  }
  else if (uVar6 != 0) {
    _swift_bridgeObjectRetain(param_2);
    FUN_1002b3788(0,uVar6,1,&local_70,param_2);
    _swift_bridgeObjectRelease(param_2);
  }
  *param_1 = uVar4;
  _swift_bridgeObjectRelease_n(param_2,3);
  return;
}



/* Address: 0x1002b4aa4 | FUN_1002b4aa4 */

undefined * FUN_1002b4aa4(long param_1)

{
  long lVar1;
  Component CVar2;
  bool bVar3;
  undefined7 extraout_var;
  _SetStorage *this;
  undefined *puVar5;
  ulong uVar6;
  long extraout_x8;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long extraout_x12;
  long extraout_x12_00;
  __int64 seed;
  undefined1 *puVar11;
  long lVar12;
  code *pcVar13;
  undefined *puVar14;
  undefined *puVar15;
  code *pcVar16;
  long lVar17;
  undefined1 auStack_a0 [8];
  undefined *local_98;
  long local_90;
  long local_88;
  undefined *local_80;
  code *local_78;
  undefined *local_70;
  long local_68;
  long lVar4;
  
  CVar2 = Foundation::Calendar::Component::typeMetadataAccessor();
  lVar4 = CONCAT71(extraout_var,CVar2.value);
  lVar12 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar12 + 0x40));
  puVar11 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_68 = (long)puVar11 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_88 = ((long)puVar11 - extraout_x12) - extraout_x12_00;
  puVar14 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptySetSingleton_100eae0e8;
  if (puVar14 != (undefined *)0x0) {
    this = (_SetStorage *)&DAT_100fbbbd0;
    FUN_1000037f0(&DAT_100fbbbd0,&DAT_100c3c6b0);
    puVar5 = puVar14;
    Swift::_SetStorage::_allocate(this,(__int64)puVar14);
    puVar15 = (undefined *)0x0;
    local_70 = puVar5 + 0x38;
    local_90 = param_1 + ((ulong)*(byte *)(lVar12 + 0x50) + 0x20 &
                         ((ulong)*(byte *)(lVar12 + 0x50) ^ 0xffffffffffffffff));
    lVar17 = *(long *)(lVar12 + 0x48);
    pcVar16 = *(code **)(lVar12 + 0x10);
    local_98 = puVar14;
    do {
      lVar1 = local_88;
      (*pcVar16)(local_88,local_90 + lVar17 * (long)puVar15,lVar4);
      local_78 = *(code **)(lVar12 + 0x20);
      (*local_78)(local_68,lVar1,lVar4);
      seed = *(__int64 *)(puVar5 + 0x28);
      FUN_100003a00(&DAT_100fbbbd8,PTR_typeMetadataAccessor_100ea7668,
                    PTR_Foundation__Foundation__Calendar__Component_>Swift__Hashable_100ea7678);
      uVar6 = Swift::Hashable::_rawHashValue(seed);
      uVar10 = -1L << ((ulong)(byte)puVar5[0x20] & 0x3f);
      uVar6 = uVar6 & (uVar10 ^ 0xffffffffffffffff);
      uVar7 = uVar6 >> 6;
      uVar8 = *(ulong *)(local_70 + uVar7 * 8);
      uVar9 = 1L << (uVar6 & 0x3f);
      if ((uVar9 & uVar8) != 0) {
        local_80 = puVar15;
        do {
          (*pcVar16)(puVar11,*(long *)(puVar5 + 0x30) + uVar6 * lVar17,lVar4);
          puVar14 = &DAT_100fbbbe0;
          FUN_100003a00(&DAT_100fbbbe0,PTR_typeMetadataAccessor_100ea7668,
                        PTR_Foundation__Foundation__Calendar__Component_>Swift__Equatable_100ea7680)
          ;
          bVar3 = Swift::Equatable::___infix(puVar11,local_68,lVar4,puVar14);
          pcVar13 = *(code **)(lVar12 + 8);
          (*pcVar13)(puVar11,lVar4);
          if (bVar3) {
            (*pcVar13)(local_68,lVar4);
            puVar14 = local_98;
            puVar15 = local_80;
            goto LAB_1002b4bb0;
          }
          uVar6 = uVar6 + 1 & ~uVar10;
          uVar7 = uVar6 >> 6;
          uVar8 = *(ulong *)(local_70 + uVar7 * 8);
          uVar9 = 1L << (uVar6 & 0x3f);
          puVar14 = local_98;
          puVar15 = local_80;
        } while ((uVar9 & uVar8) != 0);
      }
      *(ulong *)(local_70 + uVar7 * 8) = uVar9 | uVar8;
      (*local_78)(*(long *)(puVar5 + 0x30) + uVar6 * lVar17,local_68,lVar4);
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar16 = (code *)SoftwareBreakpoint(1,0x1002b4d4c);
        (*pcVar16)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
LAB_1002b4bb0:
      puVar15 = puVar15 + 1;
    } while (puVar15 != puVar14);
  }
  return puVar5;
}



/* Address: 0x1002b4d4c | FUN_1002b4d4c */

undefined * FUN_1002b4d4c(long param_1)

{
  long lVar1;
  bool bVar2;
  PurchaseOption PVar3;
  _SetStorage *this;
  undefined *puVar4;
  ulong uVar5;
  long extraout_x8;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long extraout_x12;
  long extraout_x12_00;
  __int64 seed;
  undefined1 *puVar10;
  long lVar11;
  code *pcVar12;
  undefined *puVar13;
  undefined *puVar14;
  code *pcVar15;
  long lVar16;
  undefined1 auStack_a0 [8];
  undefined *local_98;
  long local_90;
  long local_88;
  undefined *local_80;
  code *local_78;
  undefined *local_70;
  long local_68;
  
  PVar3 = StoreKit::Product::PurchaseOption::typeMetadataAccessor();
  lVar11 = *(long *)(PVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  puVar10 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_68 = (long)puVar10 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_88 = ((long)puVar10 - extraout_x12) - extraout_x12_00;
  puVar13 = *(undefined **)(param_1 + 0x10);
  puVar4 = PTR___swiftEmptySetSingleton_100eae0e8;
  if (puVar13 != (undefined *)0x0) {
    this = (_SetStorage *)&DAT_100fbbae0;
    FUN_1000037f0(&DAT_100fbbae0,&DAT_100c3c658);
    puVar4 = puVar13;
    Swift::_SetStorage::_allocate(this,(__int64)puVar13);
    puVar14 = (undefined *)0x0;
    local_70 = puVar4 + 0x38;
    local_90 = param_1 + ((ulong)*(byte *)(lVar11 + 0x50) + 0x20 &
                         ((ulong)*(byte *)(lVar11 + 0x50) ^ 0xffffffffffffffff));
    lVar16 = *(long *)(lVar11 + 0x48);
    pcVar15 = *(code **)(lVar11 + 0x10);
    local_98 = puVar13;
    do {
      lVar1 = local_88;
      (*pcVar15)(local_88,local_90 + lVar16 * (long)puVar14,PVar3.unknown);
      local_78 = *(code **)(lVar11 + 0x20);
      (*local_78)(local_68,lVar1,PVar3.unknown);
      seed = *(__int64 *)(puVar4 + 0x28);
      FUN_100003a00(&DAT_100fbbad0,PTR_typeMetadataAccessor_100ea7ea8,
                    PTR_StoreKit__StoreKit__Product__PurchaseOption_>Swift__Hashable_100ea7eb8);
      uVar5 = Swift::Hashable::_rawHashValue(seed);
      uVar9 = -1L << ((ulong)(byte)puVar4[0x20] & 0x3f);
      uVar5 = uVar5 & (uVar9 ^ 0xffffffffffffffff);
      uVar6 = uVar5 >> 6;
      uVar7 = *(ulong *)(local_70 + uVar6 * 8);
      uVar8 = 1L << (uVar5 & 0x3f);
      if ((uVar8 & uVar7) != 0) {
        local_80 = puVar14;
        do {
          (*pcVar15)(puVar10,*(long *)(puVar4 + 0x30) + uVar5 * lVar16,PVar3.unknown);
          puVar13 = &DAT_100fbbad8;
          FUN_100003a00(&DAT_100fbbad8,PTR_typeMetadataAccessor_100ea7ea8,
                        PTR_StoreKit__StoreKit__Product__PurchaseOption_>Swift__Equatable_100ea7ec0)
          ;
          bVar2 = Swift::Equatable::___infix(puVar10,local_68,PVar3.unknown,puVar13);
          pcVar12 = *(code **)(lVar11 + 8);
          (*pcVar12)(puVar10,PVar3.unknown);
          if (bVar2) {
            (*pcVar12)(local_68,PVar3.unknown);
            puVar13 = local_98;
            puVar14 = local_80;
            goto LAB_1002b4e58;
          }
          uVar5 = uVar5 + 1 & ~uVar9;
          uVar6 = uVar5 >> 6;
          uVar7 = *(ulong *)(local_70 + uVar6 * 8);
          uVar8 = 1L << (uVar5 & 0x3f);
          puVar13 = local_98;
          puVar14 = local_80;
        } while ((uVar8 & uVar7) != 0);
      }
      *(ulong *)(local_70 + uVar6 * 8) = uVar8 | uVar7;
      (*local_78)(*(long *)(puVar4 + 0x30) + uVar5 * lVar16,local_68,PVar3.unknown);
      if (SCARRY8(*(long *)(puVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x1002b4ff4);
        (*pcVar15)();
      }
      *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + 1;
LAB_1002b4e58:
      puVar14 = puVar14 + 1;
    } while (puVar14 != puVar13);
  }
  return puVar4;
}



/* Address: 0x1002b4ff4 | FUN_1002b4ff4 */

long FUN_1002b4ff4(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  return param_1;
}



/* Address: 0x1002b5024 | FUN_1002b5024 */

void FUN_1002b5024(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fbbaf0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fbbae8;
  FUN_100005c24(&DAT_100fbbae8,&DAT_100c3c678);
  puVar2 = PTR_Swift__Swift__Set<undefined>_>Swift__Collection_100eac6e0;
  _swift_getWitnessTable(PTR_Swift__Swift__Set<undefined>_>Swift__Collection_100eac6e0,puVar1);
  DAT_100fbbaf0 = puVar2;
  return;
}



/* Address: 0x1002b5074 | FUN_1002b5074 */

undefined8 * FUN_1002b5074(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar2 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Address: 0x1002b50c0 | FUN_1002b50c0 */

undefined8 * FUN_1002b50c0(undefined8 *param_1,undefined8 *param_2)

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
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  return param_1;
}



/* Address: 0x1002b5144 | FUN_1002b5144 */

undefined8 * FUN_1002b5144(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar2 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar2;
  return param_1;
}



/* Address: 0x1002b5198 | FUN_1002b5198 */

int FUN_1002b5198(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0xe] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x1002b51f4 | FUN_1002b51f4 */

void FUN_1002b51f4(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x7fffffff) {
    if (0x7ffffffe < param_3) {
      *(undefined1 *)(param_1 + 7) = 0;
    }
    if (param_2 != 0) {
      param_1[1] = (ulong)param_2;
      return;
    }
  }
  else {
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (ulong)(param_2 + 0x80000001);
    if (0x7ffffffe < param_3) {
      *(undefined1 *)(param_1 + 7) = 1;
    }
  }
  return;
}



/* Address: 0x1002b5254 | FUN_1002b5254 */

undefined1  [16] FUN_1002b5254(void)

{
  return ZEXT816(0x100ec6900);
}



/* Address: 0x1002b5264 | thunk_FUN_1002b08a0 */

void thunk_FUN_1002b08a0(void)

{
  FUN_1002b08a0();
  return;
}



/* Address: 0x1002b5268 | FUN_1002b5268 */

long * FUN_1002b5268(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  Date DVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  uVar5 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar5 >> 0x11 & 1) == 0) {
    *(short *)param_1 = (short)*param_2;
    lVar10 = (long)*(int *)(param_3 + 0x18);
    DVar6 = Foundation::Date::typeMetadataAccessor();
    lVar11 = *(long *)(DVar6.unknown + -8);
    lVar8 = (long)param_2 + lVar10;
    (**(code **)(lVar11 + 0x30))(lVar8,1,DVar6.unknown);
    if ((int)lVar8 == 0) {
      (**(code **)(lVar11 + 0x10))((long)param_1 + lVar10,(long)param_2 + lVar10,DVar6.unknown);
      (**(code **)(lVar11 + 0x38))((long)param_1 + lVar10,0,1,DVar6.unknown);
    }
    else {
      puVar7 = &DAT_100fb7f78;
      FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
      _memcpy((void *)((long)param_1 + lVar10),(void *)((long)param_2 + lVar10),
              *(size_t *)(*(long *)(puVar7 + -8) + 0x40));
    }
    iVar4 = *(int *)(param_3 + 0x20);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar4);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar4);
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    iVar4 = *(int *)(param_3 + 0x28);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x24)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar4);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar4);
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar3);
  }
  else {
    lVar8 = *param_2;
    *param_1 = lVar8;
    uVar9 = (ulong)uVar5 & 0xff;
    param_1 = (long *)(lVar8 + (uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1002b539c | FUN_1002b539c */

void FUN_1002b539c(long param_1,long param_2)

{
  int iVar1;
  Date DVar2;
  long lVar3;
  long lVar4;
  
  iVar1 = *(int *)(param_2 + 0x18);
  DVar2 = Foundation::Date::typeMetadataAccessor();
  lVar4 = *(long *)(DVar2.unknown + -8);
  lVar3 = param_1 + iVar1;
  (**(code **)(lVar4 + 0x30))(lVar3,1,DVar2.unknown);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar4 + 8))(param_1 + iVar1,DVar2.unknown);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x20) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x28) + 8));
  return;
}



/* Address: 0x1002b5424 | FUN_1002b5424 */

undefined2 * FUN_1002b5424(undefined2 *param_1,undefined2 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  Date DVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  
  *param_1 = *param_2;
  lVar8 = (long)*(int *)(param_3 + 0x18);
  DVar5 = Foundation::Date::typeMetadataAccessor();
  lVar9 = *(long *)(DVar5.unknown + -8);
  lVar6 = (long)param_2 + lVar8;
  (**(code **)(lVar9 + 0x30))(lVar6,1,DVar5.unknown);
  if ((int)lVar6 == 0) {
    (**(code **)(lVar9 + 0x10))((long)param_1 + lVar8,(long)param_2 + lVar8,DVar5.unknown);
    (**(code **)(lVar9 + 0x38))((long)param_1 + lVar8,0,1,DVar5.unknown);
  }
  else {
    puVar7 = &DAT_100fb7f78;
    FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
    _memcpy((void *)((long)param_1 + lVar8),(void *)((long)param_2 + lVar8),
            *(size_t *)(*(long *)(puVar7 + -8) + 0x40));
  }
  iVar4 = *(int *)(param_3 + 0x20);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar4);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar4);
  uVar3 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  iVar4 = *(int *)(param_3 + 0x28);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x24)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar4);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar4);
  uVar3 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar3);
  return param_1;
}



/* Address: 0x1002b552c | FUN_1002b552c */

undefined1 * FUN_1002b552c(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined8 *puVar1;
  int iVar2;
  Date DVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  iVar2 = *(int *)(param_3 + 0x18);
  DVar3 = Foundation::Date::typeMetadataAccessor();
  lVar8 = *(long *)(DVar3.unknown + -8);
  pcVar9 = *(code **)(lVar8 + 0x30);
  puVar4 = param_1 + iVar2;
  (*pcVar9)(puVar4,1,DVar3.unknown);
  puVar5 = param_2 + iVar2;
  (*pcVar9)(puVar5,1,DVar3.unknown);
  if ((int)puVar4 == 0) {
    if ((int)puVar5 == 0) {
      (**(code **)(lVar8 + 0x18))(param_1 + iVar2,param_2 + iVar2,DVar3.unknown);
      goto LAB_1002b5610;
    }
    (**(code **)(lVar8 + 8))(param_1 + iVar2,DVar3.unknown);
  }
  else if ((int)puVar5 == 0) {
    (**(code **)(lVar8 + 0x10))(param_1 + iVar2,param_2 + iVar2,DVar3.unknown);
    (**(code **)(lVar8 + 0x38))(param_1 + iVar2,0,1,DVar3.unknown);
    goto LAB_1002b5610;
  }
  puVar6 = &DAT_100fb7f78;
  FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
  _memcpy(param_1 + iVar2,param_2 + iVar2,*(size_t *)(*(long *)(puVar6 + -8) + 0x40));
LAB_1002b5610:
  param_1[*(int *)(param_3 + 0x1c)] = param_2[*(int *)(param_3 + 0x1c)];
  iVar2 = *(int *)(param_3 + 0x20);
  puVar1 = (undefined8 *)(param_1 + iVar2);
  *puVar1 = *(undefined8 *)(param_2 + iVar2);
  uVar7 = puVar1[1];
  puVar1[1] = *(undefined8 *)((long)(param_2 + iVar2) + 8);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar7);
  param_1[*(int *)(param_3 + 0x24)] = param_2[*(int *)(param_3 + 0x24)];
  iVar2 = *(int *)(param_3 + 0x28);
  puVar1 = (undefined8 *)(param_1 + iVar2);
  *puVar1 = *(undefined8 *)(param_2 + iVar2);
  uVar7 = puVar1[1];
  puVar1[1] = *(undefined8 *)((long)(param_2 + iVar2) + 8);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar7);
  return param_1;
}



/* Address: 0x1002b56b4 | FUN_1002b56b4 */

undefined2 * FUN_1002b56b4(undefined2 *param_1,undefined2 *param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  Date DVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  *param_1 = *param_2;
  lVar7 = (long)*(int *)(param_3 + 0x18);
  DVar4 = Foundation::Date::typeMetadataAccessor();
  lVar8 = *(long *)(DVar4.unknown + -8);
  lVar5 = (long)param_2 + lVar7;
  (**(code **)(lVar8 + 0x30))(lVar5,1,DVar4.unknown);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar8 + 0x20))((long)param_1 + lVar7,(long)param_2 + lVar7,DVar4.unknown);
    (**(code **)(lVar8 + 0x38))((long)param_1 + lVar7,0,1,DVar4.unknown);
  }
  else {
    puVar6 = &DAT_100fb7f78;
    FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
    _memcpy((void *)((long)param_1 + lVar7),(void *)((long)param_2 + lVar7),
            *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
  iVar1 = *(int *)(param_3 + 0x20);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar1);
  uVar9 = *puVar2;
  puVar3 = (undefined8 *)((long)param_1 + (long)iVar1);
  puVar3[1] = puVar2[1];
  *puVar3 = uVar9;
  iVar1 = *(int *)(param_3 + 0x28);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x24)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar1);
  uVar9 = *puVar2;
  puVar3 = (undefined8 *)((long)param_1 + (long)iVar1);
  puVar3[1] = puVar2[1];
  *puVar3 = uVar9;
  return param_1;
}



/* Address: 0x1002b57a0 | FUN_1002b57a0 */

undefined1 * FUN_1002b57a0(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  Date DVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  code *pcVar10;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  iVar3 = *(int *)(param_3 + 0x18);
  DVar4 = Foundation::Date::typeMetadataAccessor();
  lVar9 = *(long *)(DVar4.unknown + -8);
  pcVar10 = *(code **)(lVar9 + 0x30);
  puVar5 = param_1 + iVar3;
  (*pcVar10)(puVar5,1,DVar4.unknown);
  puVar6 = param_2 + iVar3;
  (*pcVar10)(puVar6,1,DVar4.unknown);
  if ((int)puVar5 == 0) {
    if ((int)puVar6 == 0) {
      (**(code **)(lVar9 + 0x28))(param_1 + iVar3,param_2 + iVar3,DVar4.unknown);
      goto LAB_1002b5884;
    }
    (**(code **)(lVar9 + 8))(param_1 + iVar3,DVar4.unknown);
  }
  else if ((int)puVar6 == 0) {
    (**(code **)(lVar9 + 0x20))(param_1 + iVar3,param_2 + iVar3,DVar4.unknown);
    (**(code **)(lVar9 + 0x38))(param_1 + iVar3,0,1,DVar4.unknown);
    goto LAB_1002b5884;
  }
  puVar7 = &DAT_100fb7f78;
  FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
  _memcpy(param_1 + iVar3,param_2 + iVar3,*(size_t *)(*(long *)(puVar7 + -8) + 0x40));
LAB_1002b5884:
  iVar3 = *(int *)(param_3 + 0x20);
  param_1[*(int *)(param_3 + 0x1c)] = param_2[*(int *)(param_3 + 0x1c)];
  puVar1 = (undefined8 *)(param_1 + iVar3);
  uVar2 = *(undefined8 *)((long)(param_2 + iVar3) + 8);
  uVar8 = puVar1[1];
  *puVar1 = *(undefined8 *)(param_2 + iVar3);
  puVar1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar8);
  iVar3 = *(int *)(param_3 + 0x28);
  param_1[*(int *)(param_3 + 0x24)] = param_2[*(int *)(param_3 + 0x24)];
  puVar1 = (undefined8 *)(param_1 + iVar3);
  uVar2 = *(undefined8 *)((long)(param_2 + iVar3) + 8);
  uVar8 = puVar1[1];
  *puVar1 = *(undefined8 *)(param_2 + iVar3);
  puVar1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar8);
  return param_1;
}



/* Address: 0x1002b5900 | FUN_1002b5900 */

void FUN_1002b5900(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1002b590c | FUN_1002b590c */

ulong FUN_1002b590c(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  puVar2 = &DAT_100fb7f78;
  FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
  if ((int)param_2 == *(int *)(*(long *)(puVar2 + -8) + 0x54)) {
    uVar3 = param_1 + *(int *)(param_3 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001002b596c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(puVar2 + -8) + 0x30))(uVar3,param_2,puVar2);
    return uVar3;
  }
  uVar3 = *(ulong *)(param_1 + *(int *)(param_3 + 0x20) + 8);
  if (0xfffffffe < uVar3) {
    uVar3 = 0xffffffff;
  }
  uVar1 = (int)uVar3 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (ulong)(uVar1 + 1);
}



/* Address: 0x1002b59a8 | FUN_1002b59a8 */

void FUN_1002b59a8(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1002b59b4 | FUN_1002b59b4 */

void FUN_1002b59b4(long param_1,ulong param_2,int param_3,long param_4)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fb7f78;
  FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
  if (param_3 == *(int *)(*(long *)(puVar1 + -8) + 0x54)) {
                    /* WARNING: Could not recover jumptable at 0x0001002b5a1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(puVar1 + -8) + 0x38))
              (param_1 + *(int *)(param_4 + 0x18),param_2,param_2,puVar1);
    return;
  }
  *(ulong *)(param_1 + *(int *)(param_4 + 0x20) + 8) = param_2 & 0xffffffff;
  return;
}



/* Address: 0x1002b5a40 | FUN_1002b5a40 */

void FUN_1002b5a40(undefined8 param_1)

{
  if (DAT_100fbbc60 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetStructDescriptor_100caac4c);
  return;
}



/* Address: 0x1002b5a78 | FUN_1002b5a78 */

void FUN_1002b5a78(long param_1,ulong param_2)

{
  long lVar1;
  undefined *local_58;
  undefined *puStack_50;
  long local_48;
  undefined *puStack_40;
  undefined *local_38;
  undefined *puStack_30;
  undefined *local_28;
  
  local_58 = &DAT_100c3c710;
  puStack_50 = &DAT_100c3c728;
  lVar1 = 0x13f;
  FUN_10024688c();
  if (param_2 < 0x40) {
    local_48 = *(long *)(lVar1 + -8) + 0x40;
    puStack_40 = &DAT_100c3c728;
    local_38 = &DAT_100c3c740;
    puStack_30 = &DAT_100c3c728;
    local_28 = &DAT_100c3c740;
    _swift_initStructMetadata(param_1,0x100,7,&local_58,param_1 + 0x10);
  }
  return;
}



/* Address: 0x1002b5b04 | thunk_FUN_1002b5b08 */

void thunk_FUN_1002b5b08(void)

{
  FUN_1002b5b08();
  return;
}



/* Address: 0x1002b5b08 | FUN_1002b5b08 */

undefined8 FUN_1002b5b08(char *param_1,char *param_2)

{
  int iVar1;
  bool bVar2;
  Date DVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  _StringGuts _Var7;
  _StringGuts _Var8;
  undefined *puVar9;
  undefined *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  
  DVar3 = Foundation::Date::typeMetadataAccessor();
  lVar15 = *(long *)(DVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar15 + 0x40));
  puVar12 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar10 = &DAT_100fb7f78;
  FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = (long)puVar12 - extraout_x8_00;
  puVar10 = &DAT_100fb8398;
  FUN_1000037f0(&DAT_100fb8398,&DAT_100c3c780);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = lVar13 - extraout_x8_01;
  if (*param_1 != *param_2) {
    return 0;
  }
  if (param_1[1] != param_2[1]) {
    return 0;
  }
  lVar4 = 0;
  FUN_1002b5a40();
  iVar1 = *(int *)(lVar4 + 0x18);
  lVar14 = (long)*(int *)(puVar10 + 0x30);
  FUN_100247fac(param_1 + iVar1,lVar11);
  FUN_100247fac(param_2 + iVar1,lVar11 + lVar14);
  pcVar16 = *(code **)(lVar15 + 0x30);
  lVar5 = lVar11;
  (*pcVar16)(lVar11,1,DVar3.unknown);
  if ((int)lVar5 == 1) {
    lVar14 = lVar11 + lVar14;
    (*pcVar16)(lVar14,1,DVar3.unknown);
    if ((int)lVar14 != 1) {
LAB_1002b5cb0:
      FUN_100005808(lVar11,&DAT_100fb8398,&DAT_100c3c780);
      return 0;
    }
    FUN_100005808(lVar11,&DAT_100fb7f78,&DAT_100c37ab0);
  }
  else {
    FUN_100247fac(lVar11,lVar13);
    lVar5 = lVar11 + lVar14;
    (*pcVar16)(lVar5,1,DVar3.unknown);
    if ((int)lVar5 == 1) {
      (**(code **)(lVar15 + 8))(lVar13,DVar3.unknown);
      goto LAB_1002b5cb0;
    }
    puVar6 = puVar12;
    (**(code **)(lVar15 + 0x20))(puVar12,lVar11 + lVar14,DVar3.unknown);
    FUN_1002b5e18();
    bVar2 = Swift::Equatable::___infix(lVar13,puVar12,DVar3.unknown,puVar6);
    pcVar16 = *(code **)(lVar15 + 8);
    (*pcVar16)(puVar12,DVar3.unknown);
    (*pcVar16)(lVar13,DVar3.unknown);
    FUN_100005808(lVar11,&DAT_100fb7f78,&DAT_100c37ab0);
    if (!bVar2) {
      return 0;
    }
  }
  if (param_1[*(int *)(lVar4 + 0x1c)] != param_2[*(int *)(lVar4 + 0x1c)]) {
    return 0;
  }
  _Var8.unknown = *(undefined **)(param_1 + *(int *)(lVar4 + 0x20) + 8);
  puVar10 = *(undefined **)(param_2 + *(int *)(lVar4 + 0x20) + 8);
  if (_Var8.unknown == (undefined *)0x0) {
    if (puVar10 != (undefined *)0x0) {
      return 0;
    }
  }
  else {
    if (puVar10 == (undefined *)0x0) {
      return 0;
    }
    _Var7.unknown = *(undefined **)(param_1 + *(int *)(lVar4 + 0x20));
    puVar9 = *(undefined **)(param_2 + *(int *)(lVar4 + 0x20));
    if (((_Var7.unknown != puVar9) || (_Var8.unknown != puVar10)) &&
       (bVar2 = Swift::_stringCompareWithSmolCheck
                          (_Var7,_Var8,(_StringComparisonResult)(__int8)puVar9), !bVar2)) {
      return 0;
    }
  }
  if (param_1[*(int *)(lVar4 + 0x24)] == param_2[*(int *)(lVar4 + 0x24)]) {
    _Var8.unknown = *(undefined **)(param_1 + *(int *)(lVar4 + 0x28) + 8);
    puVar10 = *(undefined **)(param_2 + *(int *)(lVar4 + 0x28) + 8);
    if (_Var8.unknown == (undefined *)0x0) {
      if (puVar10 == (undefined *)0x0) {
        return 1;
      }
    }
    else if (puVar10 != (undefined *)0x0) {
      _Var7.unknown = *(undefined **)(param_1 + *(int *)(lVar4 + 0x28));
      puVar9 = *(undefined **)(param_2 + *(int *)(lVar4 + 0x28));
      if ((_Var7.unknown == puVar9) && (_Var8.unknown == puVar10)) {
        return 1;
      }
      bVar2 = Swift::_stringCompareWithSmolCheck
                        (_Var7,_Var8,(_StringComparisonResult)(__int8)puVar9);
      if (bVar2) {
        return 1;
      }
    }
  }
  return 0;
}



/* Address: 0x1002b5e18 | FUN_1002b5e18 */

void FUN_1002b5e18(void)

{
  Date DVar1;
  undefined *puVar2;
  
  if (DAT_100fb83b0 != (undefined *)0x0) {
    return;
  }
  DVar1 = Foundation::Date::typeMetadataAccessor();
  puVar2 = PTR_Foundation__Foundation__Date_>Swift__Equatable_100ea74a0;
  _swift_getWitnessTable(PTR_Foundation__Foundation__Date_>Swift__Equatable_100ea74a0,DVar1.unknown)
  ;
  DAT_100fb83b0 = puVar2;
  return;
}



/* Address: 0x1002b5e5c | FUN_1002b5e5c */

undefined1  [16] FUN_1002b5e5c(void)

{
  return ZEXT816(0x100ec69a8);
}



/* Address: 0x1002b5e6c | thunk_FUN_1002b5e70 */

void thunk_FUN_1002b5e70(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbbcb0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c3c790;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3c790,&DAT_100ec69a8);
  DAT_100fbbcb0 = pTVar1;
  return;
}



/* Address: 0x1002b5e70 | FUN_1002b5e70 */

void FUN_1002b5e70(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbbcb0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c3c790;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3c790,&DAT_100ec69a8);
  DAT_100fbbcb0 = pTVar1;
  return;
}


