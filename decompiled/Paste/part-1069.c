/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b70af0 | FUN_100b70af0 */

void FUN_100b70af0(undefined8 param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (-1 < param_2) {
    if (param_2 != 0) {
      uVar2 = param_2 + 1U & 0xfffffffffffffffe;
      uVar5 = 1;
      uVar4 = 0;
      puVar3 = (undefined8 *)(param_3 + 8);
      do {
        if (uVar4 <= param_2 - 1U) {
          puVar3[-1] = param_1;
        }
        if (uVar5 <= param_2 - 1U) {
          *puVar3 = param_1;
        }
        uVar4 = uVar4 + 2;
        uVar5 = uVar5 + 2;
        puVar3 = puVar3 + 2;
        uVar2 = uVar2 - 2;
      } while (uVar2 != 0);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100b70b54);
  (*pcVar1)();
}



/* Address: 0x100b70b54 | FUN_100b70b54 */

void FUN_100b70b54(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long *unaff_x20;
  long lVar3;
  ulong uVar4;
  uint unaff_w25;
  ulong uVar5;
  long in_stack_00000008;
  
  FUN_100b72228();
  lVar3 = *unaff_x20;
  Swift::Hasher::init(*(__int64 *)(lVar3 + 0x28));
  _swift_bridgeObjectRetain(lVar3);
  puVar1 = &stack0x00000008;
  FUN_100b71cec(puVar1,param_2);
  FUN_100b6fbb4();
  uVar5 = -1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f);
  uVar4 = (ulong)puVar1 & (uVar5 ^ 0xffffffffffffffff);
  FUN_100b72214();
  if ((extraout_x8 & 1) == 0) {
LAB_100b70c18:
    _swift_bridgeObjectRelease(lVar3);
    FUN_100b721f0();
    FUN_100b72158();
    FUN_100b70d7c();
    *unaff_x20 = in_stack_00000008;
    *param_1 = param_2;
    uVar2 = 1;
  }
  else {
    FUN_100b721ac();
    FUN_100b71ebc();
    FUN_100b721e4();
    if ((unaff_w25 & 1) == 0) {
      do {
        uVar4 = uVar4 + 1 & ~uVar5;
        FUN_100b72214();
        if ((extraout_x8_00 & 1) == 0) goto LAB_100b70c18;
        FUN_100b721ac();
        FUN_100b71ebc();
        FUN_100b721e4();
      } while ((unaff_w25 & 1) == 0);
    }
    FUN_100b6f980();
    _swift_bridgeObjectRelease(lVar3);
    *param_1 = *(undefined8 *)(*(long *)(lVar3 + 0x30) + uVar4 * 8);
    _swift_bridgeObjectRetain();
    uVar2 = 0;
  }
  FUN_100b7213c(uVar2);
  return;
}



/* Address: 0x100b70c54 | FUN_100b70c54 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100b70c54(void)

{
  return ZEXT816(0x100f9f780);
}



/* Address: 0x100b70c74 | FUN_100b70c74 */

void FUN_100b70c74(undefined8 param_1,Hasher param_2)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong extraout_x8;
  undefined8 *unaff_x19;
  ulong unaff_x21;
  ulong unaff_x23;
  long unaff_x24;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  FUN_100b72228();
  FUN_100b72178();
  if (unaff_x21 == 0) {
    uVar6 = 0;
    Swift::Hasher::_combine(0,param_2);
    FUN_100b721f8();
  }
  else {
    Swift::Hasher::_combine(1,param_2);
    FUN_100b721f8();
    uVar6 = unaff_x21;
    _swift_bridgeObjectRetain();
    FUN_100b721bc();
    FUN_100b6f980();
  }
  FUN_100b6fbb4();
  uVar5 = -1L << ((ulong)*(byte *)(unaff_x24 + 0x20) & 0x3f);
  uVar6 = uVar6 & (uVar5 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x24 + 0x38 + (uVar6 >> 3 & 0xffffffffffffff8)) >> (uVar6 & 0x3f) & 1) != 0)
  {
    lVar7 = *(long *)(unaff_x24 + 0x30);
    do {
      puVar1 = (ulong *)(lVar7 + uVar6 * 0x10);
      uVar4 = puVar1[1];
      if (uVar4 == 0) {
        if (unaff_x21 == 0) goto LAB_100b70d58;
      }
      else if ((unaff_x21 != 0) &&
              ((uVar3 = *puVar1, uVar3 == unaff_x23 && uVar4 == unaff_x21 ||
               (FUN_100b72168(), (uVar3 & 1) != 0)))) {
        FUN_100b6f980();
LAB_100b70d58:
        FUN_100b6fbc4();
        puVar2 = (undefined8 *)(*(long *)(unaff_x24 + 0x30) + uVar6 * 0x10);
        uVar9 = puVar2[1];
        uVar8 = *puVar2;
        unaff_x19[1] = uVar9;
        *unaff_x19 = uVar8;
        _swift_bridgeObjectRetain(uVar9);
        goto LAB_100b70d74;
      }
      uVar6 = uVar6 + 1 & ~uVar5;
      FUN_100b72198();
    } while ((extraout_x8 & 1) != 0);
  }
  FUN_100b6fbc4();
  FUN_100b721f0();
  FUN_100b72158();
  FUN_100b721cc();
  FUN_100b70ee4();
  FUN_100b72200();
LAB_100b70d74:
  FUN_100b7213c();
  return;
}



/* Address: 0x100b70d7c | FUN_100b70d7c */

void FUN_100b70d7c(undefined8 param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  Hasher HVar2;
  ulong uVar3;
  long *unaff_x20;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auStack_98 [72];
  
  uVar6 = *(ulong *)(*unaff_x20 + 0x10);
  uVar3 = *(ulong *)(*unaff_x20 + 0x18);
  if ((uVar3 <= uVar6) || ((param_3 & 1) == 0)) {
    if ((param_3 & 1) == 0) {
      if (uVar6 < uVar3) {
        FUN_100b71074();
        goto LAB_100b70ebc;
      }
      FUN_100b713c0(uVar6 + 1);
    }
    else {
      FUN_100b71780(uVar6 + 1);
    }
    lVar5 = *unaff_x20;
    Swift::Hasher::init(*(__int64 *)(lVar5 + 0x28));
    HVar2.unknown = auStack_98;
    FUN_100b71cec(HVar2.unknown,param_1);
    param_2 = Swift::Hasher::_finalize(HVar2);
    uVar6 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
    param_2 = param_2 & (uVar6 ^ 0xffffffffffffffff);
    if ((*(ulong *)(lVar5 + 0x38 + (param_2 >> 3 & 0xffffffffffffff8)) >> (param_2 & 0x3f) & 1) != 0
       ) {
      uVar4 = *(ulong *)(*(long *)(lVar5 + 0x30) + param_2 * 8);
      uVar3 = uVar4;
      _swift_bridgeObjectRetain();
      FUN_100b71ebc();
      _swift_bridgeObjectRelease(uVar4);
      if ((uVar3 & 1) == 0) {
        do {
          param_2 = param_2 + 1 & ~uVar6;
          if ((*(ulong *)(lVar5 + 0x38 + (param_2 >> 3 & 0xffffffffffffff8)) >> (param_2 & 0x3f) & 1
              ) == 0) goto LAB_100b70ebc;
          uVar4 = *(ulong *)(*(long *)(lVar5 + 0x30) + param_2 * 8);
          uVar3 = uVar4;
          _swift_bridgeObjectRetain();
          FUN_100b71ebc();
          _swift_bridgeObjectRelease(uVar4);
        } while ((uVar3 & 1) == 0);
      }
      FUN_100b6730c(&DAT_101044b60);
      Swift::_ELEMENT_TYPE_OF_SET_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100b70ebc);
      (*pcVar1)();
    }
  }
LAB_100b70ebc:
  FUN_100b71c70(param_1,param_2,*unaff_x20);
  return;
}



/* Address: 0x100b70ee4 | FUN_100b70ee4 */

void FUN_100b70ee4(char *param_1,undefined *param_2,ulong param_3,ulong param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  Hasher HVar5;
  _StringGuts _Var6;
  Hasher HVar7;
  _StringGuts _Var8;
  ulong uVar9;
  long *unaff_x20;
  long lVar10;
  long lVar11;
  String SVar12;
  undefined1 auStack_98 [72];
  
  uVar9 = *(ulong *)(*unaff_x20 + 0x10);
  uVar2 = *(ulong *)(*unaff_x20 + 0x18);
  if ((uVar2 <= uVar9) || ((param_4 & 1) == 0)) {
    HVar7.unknown = param_2;
    if ((param_4 & 1) == 0) {
      if (uVar9 < uVar2) {
        FUN_100b71218();
        goto LAB_100b71034;
      }
      FUN_100b715d8(uVar9 + 1);
    }
    else {
      FUN_100b719cc(uVar9 + 1);
    }
    lVar10 = *unaff_x20;
    Swift::Hasher::init(*(__int64 *)(lVar10 + 0x28));
    if (param_2 == (undefined *)0x0) {
      HVar5.unknown = (undefined *)0x0;
      Swift::Hasher::_combine(0,HVar7);
    }
    else {
      Swift::Hasher::_combine(1,HVar7);
      _swift_bridgeObjectRetain(param_2);
      SVar12.bridgeObject = param_2;
      SVar12.str = param_1;
      Swift::String::hash((Hasher)auStack_98,SVar12);
      HVar5.unknown = param_2;
      _swift_bridgeObjectRelease();
    }
    param_3 = Swift::Hasher::_finalize(HVar5);
    uVar9 = -1L << ((ulong)*(byte *)(lVar10 + 0x20) & 0x3f);
    param_3 = param_3 & (uVar9 ^ 0xffffffffffffffff);
    if ((*(ulong *)(lVar10 + 0x38 + (param_3 >> 3 & 0xffffffffffffff8)) >> (param_3 & 0x3f) & 1) !=
        0) {
      lVar11 = *(long *)(lVar10 + 0x30);
      do {
        puVar1 = (undefined8 *)(lVar11 + param_3 * 0x10);
        _Var8.unknown = (undefined *)puVar1[1];
        if (_Var8.unknown == (undefined *)0x0) {
          if (param_2 == (undefined *)0x0) goto LAB_100b71060;
        }
        else if ((param_2 != (undefined *)0x0) &&
                ((_Var6.unknown = (undefined *)*puVar1,
                 _Var6.unknown == param_1 && _Var8.unknown == param_2 ||
                 (bVar4 = Swift::_stringCompareWithSmolCheck
                                    (_Var6,_Var8,(_StringComparisonResult)(__int8)param_1), bVar4)))
                ) {
LAB_100b71060:
          FUN_100b6730c(&DAT_101044b48);
          Swift::_ELEMENT_TYPE_OF_SET_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100b71074);
          (*pcVar3)();
        }
        param_3 = param_3 + 1 & ~uVar9;
      } while ((*(ulong *)(lVar10 + 0x38 + (param_3 >> 3 & 0xffffffffffffff8)) >> (param_3 & 0x3f) &
               1) != 0);
    }
  }
LAB_100b71034:
  FUN_100b71cac(param_1,param_2,param_3,*unaff_x20);
  return;
}



/* Address: 0x100b71074 | FUN_100b71074 */

void FUN_100b71074(void)

{
  __RawSetStorage *p_Var1;
  code *pcVar2;
  _SetStorage *this;
  __RawSetStorage *p_Var3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *unaff_x20;
  __RawSetStorage *original;
  long lVar7;
  long lVar8;
  
  this = (_SetStorage *)&DAT_101044b68;
  FUN_100b6730c();
  original = (__RawSetStorage *)*unaff_x20;
  p_Var3 = original;
  Swift::_SetStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x38;
    uVar4 = (1L << ((ulong)(byte)p_Var3[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var3 != original || p_Var1 + uVar4 * 8 <= p_Var3 + 0x38) {
      _memmove(p_Var3 + 0x38,p_Var1,uVar4 << 3);
    }
    lVar7 = 0;
    *(undefined8 *)(p_Var3 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar5 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar4 = 0xffffffffffffffff;
    if ((long)uVar5 < 0x40) {
      uVar4 = ~(-1L << (uVar5 & 0x3f));
    }
    uVar4 = uVar4 & *(ulong *)(original + 0x38);
    uVar5 = uVar5 + 0x3f >> 6;
    lVar8 = lVar7;
    if (uVar4 == 0) goto LAB_100b71148;
    do {
      uVar6 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar4 = uVar4 - 1 & uVar4;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | lVar7 << 6;
      while( true ) {
        *(undefined8 *)(*(long *)(p_Var3 + 0x30) + uVar6 * 8) =
             *(undefined8 *)(*(long *)(original + 0x30) + uVar6 * 8);
        _swift_bridgeObjectRetain();
        lVar8 = lVar7;
        if (uVar4 != 0) break;
LAB_100b71148:
        lVar7 = lVar8 + 1;
        if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100b71218);
          (*pcVar2)();
        }
        if ((long)uVar5 <= lVar7) goto LAB_100b711f0;
        uVar4 = *(ulong *)(p_Var1 + lVar7 * 8);
        if (uVar4 == 0) {
          lVar7 = lVar8 + 2;
          if ((long)uVar5 <= lVar7) goto LAB_100b711f0;
          uVar4 = *(ulong *)(p_Var1 + lVar7 * 8);
          if (uVar4 == 0) {
            lVar7 = lVar8 + 3;
            if ((long)uVar5 <= lVar7) goto LAB_100b711f0;
            uVar4 = *(ulong *)(p_Var1 + lVar7 * 8);
            if (uVar4 == 0) {
              lVar7 = lVar8 + 4;
              if ((long)uVar5 <= lVar7) goto LAB_100b711f0;
              uVar4 = *(ulong *)(p_Var1 + lVar7 * 8);
              if (uVar4 == 0) {
                do {
                  lVar7 = lVar8;
                  if ((long)uVar5 <= lVar7 + 5) goto LAB_100b711f0;
                  uVar4 = *(ulong *)(original + lVar7 * 8 + 0x60);
                  lVar8 = lVar7 + 1;
                } while (uVar4 == 0);
                lVar7 = lVar7 + 5;
              }
            }
          }
        }
        uVar6 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | lVar7 << 6;
      }
    } while( true );
  }
LAB_100b711f0:
  _swift_release(original);
  *unaff_x20 = (long)p_Var3;
  return;
}



/* Address: 0x100b71218 | FUN_100b71218 */

void FUN_100b71218(void)

{
  __RawSetStorage *p_Var1;
  undefined8 *puVar2;
  code *pcVar3;
  _SetStorage *this;
  __RawSetStorage *p_Var4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x20;
  __RawSetStorage *original;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  this = (_SetStorage *)&DAT_101044b50;
  FUN_100b6730c();
  original = (__RawSetStorage *)*unaff_x20;
  p_Var4 = original;
  Swift::_SetStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x38;
    uVar5 = (1L << ((ulong)(byte)p_Var4[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var4 != original || p_Var1 + uVar5 * 8 <= p_Var4 + 0x38) {
      _memmove(p_Var4 + 0x38,p_Var1,uVar5 << 3);
    }
    lVar8 = 0;
    *(undefined8 *)(p_Var4 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar6 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar5 = 0xffffffffffffffff;
    if ((long)uVar6 < 0x40) {
      uVar5 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar5 = uVar5 & *(ulong *)(original + 0x38);
    uVar6 = uVar6 + 0x3f >> 6;
    lVar9 = lVar8;
    if (uVar5 == 0) goto LAB_100b712ec;
    do {
      uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 - 1 & uVar5;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | lVar8 << 6;
      while( true ) {
        puVar2 = (undefined8 *)(*(long *)(original + 0x30) + uVar7 * 0x10);
        uVar11 = puVar2[1];
        uVar10 = *puVar2;
        puVar2 = (undefined8 *)(*(long *)(p_Var4 + 0x30) + uVar7 * 0x10);
        puVar2[1] = uVar11;
        *puVar2 = uVar10;
        _swift_bridgeObjectRetain(uVar11);
        lVar9 = lVar8;
        if (uVar5 != 0) break;
LAB_100b712ec:
        lVar8 = lVar9 + 1;
        if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100b713c0);
          (*pcVar3)();
        }
        if ((long)uVar6 <= lVar8) goto LAB_100b71398;
        uVar5 = *(ulong *)(p_Var1 + lVar8 * 8);
        if (uVar5 == 0) {
          lVar8 = lVar9 + 2;
          if ((long)uVar6 <= lVar8) goto LAB_100b71398;
          uVar5 = *(ulong *)(p_Var1 + lVar8 * 8);
          if (uVar5 == 0) {
            lVar8 = lVar9 + 3;
            if ((long)uVar6 <= lVar8) goto LAB_100b71398;
            uVar5 = *(ulong *)(p_Var1 + lVar8 * 8);
            if (uVar5 == 0) {
              lVar8 = lVar9 + 4;
              if ((long)uVar6 <= lVar8) goto LAB_100b71398;
              uVar5 = *(ulong *)(p_Var1 + lVar8 * 8);
              if (uVar5 == 0) {
                do {
                  lVar8 = lVar9;
                  if ((long)uVar6 <= lVar8 + 5) goto LAB_100b71398;
                  uVar5 = *(ulong *)(original + lVar8 * 8 + 0x60);
                  lVar9 = lVar8 + 1;
                } while (uVar5 == 0);
                lVar8 = lVar8 + 5;
              }
            }
          }
        }
        uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar5 = uVar5 - 1 & uVar5;
        uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | lVar8 << 6;
      }
    } while( true );
  }
LAB_100b71398:
  _swift_release(original);
  *unaff_x20 = (long)p_Var4;
  return;
}



/* Address: 0x100b713c0 | FUN_100b713c0 */

void FUN_100b713c0(long param_1)

{
  _HashTable _Var1;
  __int64 capacity;
  code *pcVar2;
  _SetStorage *this;
  __RawSetStorage *p_Var3;
  Hasher HVar4;
  Bucket BVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *unaff_x20;
  __RawSetStorage *original;
  undefined8 uVar10;
  ulong uVar11;
  __RawSetStorage *p_Var12;
  undefined1 auStack_a8 [72];
  
  original = (__RawSetStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_SetStorage *)&DAT_101044b68;
  FUN_100b6730c();
  p_Var3 = original;
  Swift::_SetStorage::_resize(this,original,capacity,false);
  if (*(long *)(original + 0x10) == 0) {
LAB_100b715a8:
    _swift_release(original);
    *unaff_x20 = (long)p_Var3;
    return;
  }
  uVar6 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  p_Var12 = original + 0x38;
  uVar11 = 0xffffffffffffffff;
  if ((long)uVar6 < 0x40) {
    uVar11 = ~(-1L << (uVar6 & 0x3f));
  }
  uVar11 = uVar11 & *(ulong *)p_Var12;
  uVar6 = uVar6 + 0x3f >> 6;
  _Var1.unknown = p_Var3 + 0x38;
  _swift_retain(original);
  lVar8 = 0;
  lVar9 = lVar8;
  if (uVar11 == 0) goto LAB_100b7148c;
  do {
    uVar7 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
    uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
    uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
    uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
    uVar11 = uVar11 - 1 & uVar11;
    uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | lVar8 << 6;
    while( true ) {
      uVar10 = *(undefined8 *)(*(long *)(original + 0x30) + uVar7 * 8);
      Swift::Hasher::init(*(__int64 *)(p_Var3 + 0x28));
      _swift_bridgeObjectRetain(uVar10);
      HVar4.unknown = auStack_a8;
      FUN_100b71cec(HVar4.unknown,uVar10);
      uVar7 = Swift::Hasher::_finalize(HVar4);
      BVar5 = Swift::_HashTable::nextHole
                        ((Bucket)(uVar7 & (-1L << ((ulong)(byte)p_Var3[0x20] & 0x3f) ^
                                          0xffffffffffffffffU)),_Var1);
      uVar7 = (ulong)BVar5.offset >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(_Var1.unknown + uVar7) =
           1L << (BVar5.offset & 0x3fU) | *(ulong *)(_Var1.unknown + uVar7);
      *(undefined8 *)(*(long *)(p_Var3 + 0x30) + BVar5.offset * 8) = uVar10;
      *(long *)(p_Var3 + 0x10) = *(long *)(p_Var3 + 0x10) + 1;
      lVar9 = lVar8;
      if (uVar11 != 0) break;
LAB_100b7148c:
      lVar8 = lVar9 + 1;
      if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100b715d8);
        (*pcVar2)();
      }
      if ((long)uVar6 <= lVar8) {
LAB_100b7159c:
        _swift_release(original);
        goto LAB_100b715a8;
      }
      uVar11 = *(ulong *)(p_Var12 + lVar8 * 8);
      if (uVar11 == 0) {
        lVar8 = lVar9 + 2;
        if ((long)uVar6 <= lVar8) goto LAB_100b7159c;
        uVar11 = *(ulong *)(p_Var12 + lVar8 * 8);
        if (uVar11 == 0) {
          lVar8 = lVar9 + 3;
          if ((long)uVar6 <= lVar8) goto LAB_100b7159c;
          uVar11 = *(ulong *)(p_Var12 + lVar8 * 8);
          if (uVar11 == 0) {
            lVar8 = lVar9 + 4;
            if ((long)uVar6 <= lVar8) goto LAB_100b7159c;
            uVar11 = *(ulong *)(p_Var12 + lVar8 * 8);
            if (uVar11 == 0) {
              do {
                lVar8 = lVar9;
                if ((long)uVar6 <= lVar8 + 5) goto LAB_100b7159c;
                uVar11 = *(ulong *)(original + lVar8 * 8 + 0x60);
                lVar9 = lVar8 + 1;
              } while (uVar11 == 0);
              lVar8 = lVar8 + 5;
            }
          }
        }
      }
      uVar7 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 - 1 & uVar11;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | lVar8 << 6;
    }
  } while( true );
}



/* Address: 0x100b715d8 | FUN_100b715d8 */

void FUN_100b715d8(long param_1)

{
  undefined8 *puVar1;
  __int64 capacity;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  _SetStorage *this;
  __RawSetStorage *p_Var5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *unaff_x20;
  __RawSetStorage *original;
  __RawSetStorage *p_Var8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  
  original = (__RawSetStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_SetStorage *)&DAT_101044b50;
  FUN_100b6730c();
  p_Var5 = original;
  Swift::_SetStorage::_resize(this,original,capacity,false);
  if (*(long *)(original + 0x10) == 0) {
LAB_100b71754:
    _swift_release(original);
    *unaff_x20 = p_Var5;
    return;
  }
  uVar6 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  p_Var8 = original + 0x38;
  uVar11 = 0xffffffffffffffff;
  if ((long)uVar6 < 0x40) {
    uVar11 = ~(-1L << (uVar6 & 0x3f));
  }
  uVar11 = uVar11 & *(ulong *)p_Var8;
  uVar6 = uVar6 + 0x3f >> 6;
  _swift_retain(original);
  lVar9 = 0;
  lVar10 = lVar9;
  if (uVar11 == 0) goto LAB_100b71694;
  do {
    uVar7 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
    uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
    uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
    uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
    uVar11 = uVar11 - 1 & uVar11;
    uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | lVar9 << 6;
    while( true ) {
      puVar1 = (undefined8 *)(*(long *)(original + 0x30) + uVar7 * 0x10);
      uVar2 = *puVar1;
      uVar3 = puVar1[1];
      _swift_bridgeObjectRetain(uVar3);
      FUN_100b71b98(uVar2,uVar3,p_Var5);
      lVar10 = lVar9;
      if (uVar11 != 0) break;
LAB_100b71694:
      lVar9 = lVar10 + 1;
      if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100b71780);
        (*pcVar4)();
      }
      if ((long)uVar6 <= lVar9) {
LAB_100b7174c:
        _swift_release(original);
        goto LAB_100b71754;
      }
      uVar11 = *(ulong *)(p_Var8 + lVar9 * 8);
      if (uVar11 == 0) {
        lVar9 = lVar10 + 2;
        if ((long)uVar6 <= lVar9) goto LAB_100b7174c;
        uVar11 = *(ulong *)(p_Var8 + lVar9 * 8);
        if (uVar11 == 0) {
          lVar9 = lVar10 + 3;
          if ((long)uVar6 <= lVar9) goto LAB_100b7174c;
          uVar11 = *(ulong *)(p_Var8 + lVar9 * 8);
          if (uVar11 == 0) {
            lVar9 = lVar10 + 4;
            if ((long)uVar6 <= lVar9) goto LAB_100b7174c;
            uVar11 = *(ulong *)(p_Var8 + lVar9 * 8);
            if (uVar11 == 0) {
              do {
                lVar9 = lVar10;
                if ((long)uVar6 <= lVar9 + 5) goto LAB_100b7174c;
                uVar11 = *(ulong *)(original + lVar9 * 8 + 0x60);
                lVar10 = lVar9 + 1;
              } while (uVar11 == 0);
              lVar9 = lVar9 + 5;
            }
          }
        }
      }
      uVar7 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 - 1 & uVar11;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | lVar9 << 6;
    }
  } while( true );
}



/* Address: 0x100b71780 | FUN_100b71780 */

void FUN_100b71780(long param_1)

{
  _HashTable _Var1;
  __int64 capacity;
  code *pcVar2;
  _SetStorage *this;
  __RawSetStorage *p_Var3;
  Hasher HVar4;
  Bucket BVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *unaff_x20;
  __RawSetStorage *original;
  __RawSetStorage *p_Var10;
  undefined8 uVar11;
  ulong uVar12;
  undefined1 auStack_a8 [72];
  
  original = (__RawSetStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_SetStorage *)&DAT_101044b68;
  FUN_100b6730c();
  p_Var3 = original;
  Swift::_SetStorage::_resize(this,original,capacity,true);
  if (*(long *)(original + 0x10) == 0) {
LAB_100b7199c:
    _swift_release(original);
    *unaff_x20 = (long)p_Var3;
    return;
  }
  uVar6 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  p_Var10 = original + 0x38;
  uVar12 = 0xffffffffffffffff;
  if ((long)uVar6 < 0x40) {
    uVar12 = ~(-1L << (uVar6 & 0x3f));
  }
  uVar12 = uVar12 & *(ulong *)p_Var10;
  uVar6 = uVar6 + 0x3f >> 6;
  _Var1.unknown = p_Var3 + 0x38;
  _swift_retain(original);
  lVar8 = 0;
  lVar9 = lVar8;
  if (uVar12 == 0) goto LAB_100b7184c;
  do {
    uVar7 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
    uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
    uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
    uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
    uVar12 = uVar12 - 1 & uVar12;
    uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | lVar8 << 6;
    while( true ) {
      uVar11 = *(undefined8 *)(*(long *)(original + 0x30) + uVar7 * 8);
      Swift::Hasher::init(*(__int64 *)(p_Var3 + 0x28));
      HVar4.unknown = auStack_a8;
      FUN_100b71cec(HVar4.unknown,uVar11);
      uVar7 = Swift::Hasher::_finalize(HVar4);
      BVar5 = Swift::_HashTable::nextHole
                        ((Bucket)(uVar7 & (-1L << ((ulong)(byte)p_Var3[0x20] & 0x3f) ^
                                          0xffffffffffffffffU)),_Var1);
      uVar7 = (ulong)BVar5.offset >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(_Var1.unknown + uVar7) =
           1L << (BVar5.offset & 0x3fU) | *(ulong *)(_Var1.unknown + uVar7);
      *(undefined8 *)(*(long *)(p_Var3 + 0x30) + BVar5.offset * 8) = uVar11;
      *(long *)(p_Var3 + 0x10) = *(long *)(p_Var3 + 0x10) + 1;
      lVar9 = lVar8;
      if (uVar12 != 0) break;
LAB_100b7184c:
      lVar8 = lVar9 + 1;
      if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100b719cc);
        (*pcVar2)();
      }
      if ((long)uVar6 <= lVar8) {
LAB_100b71954:
        _swift_release(original);
        uVar12 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
        if ((long)uVar12 < 0x40) {
          *(long *)p_Var10 = -1L << (uVar12 & 0x3f);
        }
        else {
          FUN_100b70af0(0,uVar12 + 0x3f >> 6,p_Var10);
        }
        *(undefined8 *)(original + 0x10) = 0;
        goto LAB_100b7199c;
      }
      uVar12 = *(ulong *)(p_Var10 + lVar8 * 8);
      if (uVar12 == 0) {
        lVar8 = lVar9 + 2;
        if ((long)uVar6 <= lVar8) goto LAB_100b71954;
        uVar12 = *(ulong *)(p_Var10 + lVar8 * 8);
        if (uVar12 == 0) {
          lVar8 = lVar9 + 3;
          if ((long)uVar6 <= lVar8) goto LAB_100b71954;
          uVar12 = *(ulong *)(p_Var10 + lVar8 * 8);
          if (uVar12 == 0) {
            lVar8 = lVar9 + 4;
            if ((long)uVar6 <= lVar8) goto LAB_100b71954;
            uVar12 = *(ulong *)(p_Var10 + lVar8 * 8);
            if (uVar12 == 0) {
              do {
                lVar8 = lVar9;
                if ((long)uVar6 <= lVar8 + 5) goto LAB_100b71954;
                uVar12 = *(ulong *)(original + lVar8 * 8 + 0x60);
                lVar9 = lVar8 + 1;
              } while (uVar12 == 0);
              lVar8 = lVar8 + 5;
            }
          }
        }
      }
      uVar7 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 - 1 & uVar12;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | lVar8 << 6;
    }
  } while( true );
}



/* Address: 0x100b719cc | FUN_100b719cc */

void FUN_100b719cc(long param_1)

{
  undefined8 *puVar1;
  __int64 capacity;
  long lVar2;
  code *pcVar3;
  _SetStorage *this;
  __RawSetStorage *p_Var4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *unaff_x20;
  __RawSetStorage *original;
  __RawSetStorage *p_Var8;
  ulong uVar9;
  
  original = (__RawSetStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_SetStorage *)&DAT_101044b50;
  FUN_100b6730c();
  p_Var4 = original;
  Swift::_SetStorage::_resize(this,original,capacity,true);
  if (*(long *)(original + 0x10) != 0) {
    uVar5 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    p_Var8 = original + 0x38;
    uVar9 = 0xffffffffffffffff;
    if ((long)uVar5 < 0x40) {
      uVar9 = ~(-1L << (uVar5 & 0x3f));
    }
    uVar9 = uVar9 & *(ulong *)p_Var8;
    uVar5 = uVar5 + 0x3f >> 6;
    _swift_retain(original);
    lVar2 = 0;
    do {
      if (uVar9 == 0) {
        lVar6 = lVar2 + 1;
        if (SCARRY8(lVar2,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100b71b98);
          (*pcVar3)();
        }
        if ((long)uVar5 <= lVar6) goto LAB_100b71b2c;
        uVar9 = *(ulong *)(p_Var8 + lVar6 * 8);
        if (uVar9 == 0) {
          lVar6 = lVar2 + 2;
          if ((long)uVar5 <= lVar6) goto LAB_100b71b2c;
          uVar9 = *(ulong *)(p_Var8 + lVar6 * 8);
          if (uVar9 == 0) {
            lVar6 = lVar2 + 3;
            if ((long)uVar5 <= lVar6) goto LAB_100b71b2c;
            uVar9 = *(ulong *)(p_Var8 + lVar6 * 8);
            if (uVar9 == 0) {
              lVar6 = lVar2 + 4;
              if ((long)uVar5 <= lVar6) goto LAB_100b71b2c;
              uVar9 = *(ulong *)(p_Var8 + lVar6 * 8);
              if (uVar9 == 0) {
                do {
                  lVar6 = lVar2;
                  if ((long)uVar5 <= lVar6 + 5) goto LAB_100b71b2c;
                  uVar9 = *(ulong *)(original + lVar6 * 8 + 0x60);
                  lVar2 = lVar6 + 1;
                } while (uVar9 == 0);
                lVar6 = lVar6 + 5;
              }
            }
          }
        }
        uVar7 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar9 = uVar9 - 1 & uVar9;
        uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | lVar6 << 6;
      }
      else {
        uVar7 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar9 = uVar9 - 1 & uVar9;
        uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | lVar2 << 6;
        lVar6 = lVar2;
      }
      puVar1 = (undefined8 *)(*(long *)(original + 0x30) + uVar7 * 0x10);
      FUN_100b71b98(*puVar1,puVar1[1],p_Var4);
      lVar2 = lVar6;
    } while( true );
  }
LAB_100b71b70:
  _swift_release(original);
  *unaff_x20 = p_Var4;
  return;
LAB_100b71b2c:
  _swift_release(original);
  uVar9 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  if ((long)uVar9 < 0x40) {
    *(long *)p_Var8 = -1L << (uVar9 & 0x3f);
  }
  else {
    FUN_100b70af0(0,uVar9 + 0x3f >> 6,p_Var8);
  }
  *(undefined8 *)(original + 0x10) = 0;
  goto LAB_100b71b70;
}



/* Address: 0x100b71b98 | FUN_100b71b98 */

void FUN_100b71b98(char *param_1,undefined *param_2,long param_3)

{
  _HashTable _Var1;
  undefined8 *puVar2;
  Hasher HVar3;
  ulong uVar4;
  Bucket BVar5;
  Hasher HVar6;
  String SVar7;
  undefined1 auStack_78 [72];
  
  HVar6.unknown = param_2;
  Swift::Hasher::init(*(__int64 *)(param_3 + 0x28));
  if (param_2 == (undefined *)0x0) {
    HVar3.unknown = (undefined *)0x0;
    Swift::Hasher::_combine(0,HVar6);
  }
  else {
    Swift::Hasher::_combine(1,HVar6);
    _swift_bridgeObjectRetain(param_2);
    SVar7.bridgeObject = param_2;
    SVar7.str = param_1;
    Swift::String::hash((Hasher)auStack_78,SVar7);
    HVar3.unknown = param_2;
    _swift_bridgeObjectRelease();
  }
  uVar4 = Swift::Hasher::_finalize(HVar3);
  _Var1.unknown = (undefined *)(param_3 + 0x38);
  BVar5 = Swift::_HashTable::nextHole
                    ((Bucket)(uVar4 & (-1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f) ^
                                      0xffffffffffffffffU)),_Var1);
  uVar4 = (ulong)BVar5.offset >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(_Var1.unknown + uVar4) =
       1L << (BVar5.offset & 0x3fU) | *(ulong *)(_Var1.unknown + uVar4);
  puVar2 = (undefined8 *)(*(long *)(param_3 + 0x30) + BVar5.offset * 0x10);
  *puVar2 = param_1;
  puVar2[1] = param_2;
  *(long *)(param_3 + 0x10) = *(long *)(param_3 + 0x10) + 1;
  return;
}



/* Address: 0x100b71c70 | FUN_100b71c70 */

void FUN_100b71c70(undefined8 param_1,ulong param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  
  lVar1 = param_3 + (param_2 >> 6) * 8;
  *(ulong *)(lVar1 + 0x38) = *(ulong *)(lVar1 + 0x38) | 1L << (param_2 & 0x3f);
  *(undefined8 *)(*(long *)(param_3 + 0x30) + param_2 * 8) = param_1;
  if (!SCARRY8(*(long *)(param_3 + 0x10),1)) {
    *(long *)(param_3 + 0x10) = *(long *)(param_3 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100b71cac);
  (*pcVar2)();
}



/* Address: 0x100b71cac | FUN_100b71cac */

void FUN_100b71cac(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  
  lVar1 = param_4 + (param_3 >> 6) * 8;
  *(ulong *)(lVar1 + 0x38) = *(ulong *)(lVar1 + 0x38) | 1L << (param_3 & 0x3f);
  puVar2 = (undefined8 *)(*(long *)(param_4 + 0x30) + param_3 * 0x10);
  *puVar2 = param_1;
  puVar2[1] = param_2;
  if (!SCARRY8(*(long *)(param_4 + 0x10),1)) {
    *(long *)(param_4 + 0x10) = *(long *)(param_4 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100b71cec);
  (*pcVar3)();
}



/* Address: 0x100b71cec | FUN_100b71cec */

void FUN_100b71cec(void *param_1,char *param_2)

{
  String *pSVar1;
  void *pvVar2;
  String SVar3;
  String SVar4;
  long lVar5;
  code *pcVar6;
  Hasher HVar7;
  Hasher HVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auStack_d0 [72];
  long local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  ulong local_68;
  
  HVar8.unknown = param_2;
  thunk_FUN_100ba9ecc(&local_88,param_2);
  uVar12 = local_78 + 0x40U >> 6;
  _swift_bridgeObjectRetain(param_2);
  uVar11 = 0;
  lVar9 = lStack_70;
  if (local_68 == 0) goto LAB_100b71d50;
  while( true ) {
    do {
      do {
        do {
          do {
            do {
              lStack_70 = lVar9;
              uVar10 = (local_68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_68 & 0x5555555555555555) << 1;
              uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
              uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
              uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
              local_68 = local_68 - 1 & local_68;
              uVar10 = lStack_70 << 10 | LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) << 4;
              pSVar1 = (String *)(*(long *)(local_88 + 0x30) + uVar10);
              pvVar2 = pSVar1->bridgeObject;
              SVar3 = *pSVar1;
              pSVar1 = (String *)(*(long *)(local_88 + 0x38) + uVar10);
              HVar8.unknown = pSVar1->str;
              HVar7.unknown = pSVar1->bridgeObject;
              SVar4 = *pSVar1;
              _memcpy(auStack_d0,param_1,0x48);
              _swift_bridgeObjectRetain(pvVar2);
              _swift_bridgeObjectRetain(HVar7.unknown);
              Swift::String::hash((Hasher)auStack_d0,SVar3);
              _swift_bridgeObjectRelease(pvVar2);
              Swift::String::hash((Hasher)auStack_d0,SVar4);
              _swift_bridgeObjectRelease();
              uVar10 = Swift::Hasher::_finalize(HVar7);
              uVar11 = uVar10 ^ uVar11;
              lVar9 = lStack_70;
            } while (local_68 != 0);
LAB_100b71d50:
            lVar9 = lStack_70 + 1;
            if (SCARRY8(lStack_70,1)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100b71ebc);
              (*pcVar6)();
            }
            if ((long)uVar12 <= lVar9) goto LAB_100b71e84;
            local_68 = *(ulong *)(lStack_80 + lVar9 * 8);
          } while (local_68 != 0);
          lVar9 = lStack_70 + 2;
          if ((long)uVar12 <= lVar9) goto LAB_100b71e84;
          local_68 = *(ulong *)(lStack_80 + lVar9 * 8);
        } while (local_68 != 0);
        lVar9 = lStack_70 + 3;
        if ((long)uVar12 <= lVar9) goto LAB_100b71e84;
        local_68 = *(ulong *)(lStack_80 + lVar9 * 8);
      } while (local_68 != 0);
      lVar9 = lStack_70 + 4;
      if ((long)uVar12 <= lVar9) goto LAB_100b71e84;
      local_68 = *(ulong *)(lStack_80 + lVar9 * 8);
    } while (local_68 != 0);
    lVar9 = lStack_70 + 5;
    if ((long)uVar12 <= lVar9) break;
    local_68 = *(ulong *)(lStack_80 + lVar9 * 8);
    if (local_68 == 0) {
      lVar5 = lStack_70 + 6;
      do {
        lVar9 = lVar5;
        if ((long)uVar12 <= lVar9) goto LAB_100b71e84;
        local_68 = *(ulong *)(lStack_80 + lVar9 * 8);
        lVar5 = lVar9 + 1;
      } while (local_68 == 0);
    }
  }
LAB_100b71e84:
  _swift_release(local_88);
  Swift::Hasher::_combine(uVar11,HVar8);
  return;
}



/* Address: 0x100b71ebc | FUN_100b71ebc */

undefined8 FUN_100b71ebc(long param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  _StringGuts _Var4;
  ulong uVar5;
  undefined *puVar6;
  _StringGuts _Var7;
  code *pcVar8;
  bool bVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  ulong local_68;
  
  if (param_1 == param_2) {
LAB_100b720cc:
    uVar11 = 1;
  }
  else {
    if (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10)) {
      thunk_FUN_100ba9ecc(&local_88);
      uVar15 = local_78 + 0x40U >> 6;
      _swift_bridgeObjectRetain_n(param_1,2);
      _swift_bridgeObjectRetain(param_2);
      uVar14 = local_68;
LAB_100b71f30:
      do {
        if (uVar14 == 0) {
          lVar12 = lStack_70 + 1;
          if (SCARRY8(lStack_70,1)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x100b72114);
            (*pcVar8)();
          }
          if ((long)uVar15 <= lVar12) {
LAB_100b720b4:
            _swift_bridgeObjectRelease(param_2);
            _swift_bridgeObjectRelease(param_1);
            FUN_100b72114(&local_88);
            goto LAB_100b720cc;
          }
          uVar14 = *(ulong *)(lStack_80 + lVar12 * 8);
          if (uVar14 == 0) {
            lVar12 = lStack_70 + 2;
            if ((long)uVar15 <= lVar12) goto LAB_100b720b4;
            uVar14 = *(ulong *)(lStack_80 + lVar12 * 8);
            if (uVar14 == 0) {
              lVar12 = lStack_70 + 3;
              if ((long)uVar15 <= lVar12) goto LAB_100b720b4;
              uVar14 = *(ulong *)(lStack_80 + lVar12 * 8);
              if (uVar14 == 0) {
                lVar12 = lStack_70 + 4;
                if ((long)uVar15 <= lVar12) goto LAB_100b720b4;
                uVar14 = *(ulong *)(lStack_80 + lVar12 * 8);
                if (uVar14 == 0) {
                  lVar12 = lStack_70 + 5;
                  if ((long)uVar15 <= lVar12) goto LAB_100b720b4;
                  uVar14 = *(ulong *)(lStack_80 + lVar12 * 8);
                  if (uVar14 == 0) {
                    lVar10 = lStack_70 + 6;
                    do {
                      lVar12 = lVar10;
                      if ((long)uVar15 <= lVar12) goto LAB_100b720b4;
                      uVar14 = *(ulong *)(lStack_80 + lVar12 * 8);
                      lVar10 = lVar12 + 1;
                    } while (uVar14 == 0);
                  }
                }
              }
            }
          }
          uVar13 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
          uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
          uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
          uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
          uVar14 = uVar14 - 1 & uVar14;
          uVar13 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | lVar12 << 6;
        }
        else {
          uVar13 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
          uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
          uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
          uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
          uVar14 = uVar14 - 1 & uVar14;
          uVar13 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | lStack_70 << 6;
          lVar12 = lStack_70;
        }
        plVar1 = (long *)(*(long *)(local_88 + 0x30) + uVar13 * 0x10);
        lVar10 = *plVar1;
        uVar5 = plVar1[1];
        plVar1 = (long *)(*(long *)(local_88 + 0x38) + uVar13 * 0x10);
        puVar3 = (undefined *)*plVar1;
        puVar6 = (undefined *)plVar1[1];
        _swift_bridgeObjectRetain(uVar5);
        _swift_bridgeObjectRetain(puVar6);
        uVar13 = uVar5;
        FUN_100071370();
        _swift_bridgeObjectRelease(uVar5);
        if ((uVar13 & 1) == 0) {
          FUN_100b72114(&local_88);
          _swift_bridgeObjectRelease(puVar6);
          _swift_bridgeObjectRelease(param_2);
          _swift_bridgeObjectRelease(param_1);
          goto LAB_100b720ec;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x38) + lVar10 * 0x10);
        _Var4.unknown = (undefined *)*puVar2;
        _Var7.unknown = (undefined *)puVar2[1];
        lStack_70 = lVar12;
        if (_Var4.unknown == puVar3 && _Var7.unknown == puVar6) {
          _swift_bridgeObjectRelease(puVar6);
          goto LAB_100b71f30;
        }
        bVar9 = Swift::_stringCompareWithSmolCheck
                          (_Var4,_Var7,(_StringComparisonResult)(__int8)puVar3);
        _swift_bridgeObjectRelease(puVar6);
      } while (bVar9);
      _swift_bridgeObjectRelease(param_2);
      _swift_bridgeObjectRelease(param_1);
      FUN_100b72114(&local_88);
    }
LAB_100b720ec:
    uVar11 = 0;
  }
  return uVar11;
}



/* Address: 0x100b72114 | FUN_100b72114 */

undefined8 * FUN_100b72114(undefined8 *param_1)

{
  _swift_release(*param_1);
  return param_1;
}



/* Address: 0x100b7213c | FUN_100b7213c */

void FUN_100b7213c(void)

{
  return;
}



/* Address: 0x100b72158 | FUN_100b72158 */

void FUN_100b72158(void)

{
  undefined8 *unaff_x22;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000008 = *unaff_x22;
  _swift_bridgeObjectRetain();
  return;
}



/* Address: 0x100b72168 | FUN_100b72168 */

void FUN_100b72168(_StringGuts param_1,_StringGuts param_2)

{
  _StringComparisonResult unaff_w23;
  
  Swift::_stringCompareWithSmolCheck(param_1,param_2,unaff_w23);
  return;
}



/* Address: 0x100b72178 | FUN_100b72178 */

void FUN_100b72178(void)

{
  long *unaff_x20;
  
  Swift::Hasher::init(*(__int64 *)(*unaff_x20 + 0x28));
  return;
}



/* Address: 0x100b72198 | FUN_100b72198 */

void FUN_100b72198(void)

{
  return;
}



/* Address: 0x100b721ac | FUN_100b721ac */

void FUN_100b721ac(void)

{
  long unaff_x23;
  long unaff_x24;
  
  _swift_bridgeObjectRetain(*(undefined8 *)(*(long *)(unaff_x23 + 0x30) + unaff_x24 * 8));
  return;
}



/* Address: 0x100b721bc | FUN_100b721bc */

void FUN_100b721bc(void)

{
  void *unaff_x21;
  char *unaff_x23;
  String SVar1;
  
  SVar1.bridgeObject = unaff_x21;
  SVar1.str = unaff_x23;
  Swift::String::hash((Hasher)&stack0x00000008,SVar1);
  return;
}



/* Address: 0x100b721cc | FUN_100b721cc */

void FUN_100b721cc(void)

{
  return;
}



/* Address: 0x100b721e4 | FUN_100b721e4 */

void FUN_100b721e4(void)

{
  _swift_bridgeObjectRelease();
  return;
}



/* Address: 0x100b721f0 | FUN_100b721f0 */

void FUN_100b721f0(void)

{
  undefined8 *unaff_x22;
  
  _swift_isUniquelyReferenced_nonNull_native(*unaff_x22);
  return;
}



/* Address: 0x100b721f8 | FUN_100b721f8 */

void FUN_100b721f8(void)

{
  _swift_bridgeObjectRetain();
  return;
}



/* Address: 0x100b72200 | FUN_100b72200 */

undefined8 FUN_100b72200(void)

{
  undefined8 *unaff_x19;
  undefined8 unaff_x21;
  undefined8 *unaff_x22;
  undefined8 unaff_x23;
  undefined8 in_stack_00000008;
  
  *unaff_x22 = in_stack_00000008;
  *unaff_x19 = unaff_x23;
  unaff_x19[1] = unaff_x21;
  return 1;
}



/* Address: 0x100b72214 | FUN_100b72214 */

void FUN_100b72214(void)

{
  return;
}



/* Address: 0x100b72228 | FUN_100b72228 */

void FUN_100b72228(void)

{
  return;
}



/* Address: 0x100b72244 | _TtC6Sentry26SentryDefaultCrashReporter::processInfoWrapper */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry26SentryDefaultCrashReporter::processInfoWrapper(ID param_1,SEL param_2)

{
  FUN_100b72264();
  return param_1;
}



/* Address: 0x100b72264 | FUN_100b72264 */

void FUN_100b72264(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRetain
            (*(undefined8 *)
              (unaff_x20 + _TtC6Sentry26SentryDefaultCrashReporter::processInfoWrapper));
  return;
}



/* Address: 0x100b72274 | _TtC6Sentry26SentryDefaultCrashReporter::systemInfo */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry26SentryDefaultCrashReporter::systemInfo(ID param_1,SEL param_2)

{
  NSDictionary *pNVar1;
  
  FUN_100b722c8();
  pNVar1 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_1);
  return (ID)pNVar1;
}



/* Address: 0x100b722c8 | FUN_100b722c8 */

void FUN_100b722c8(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRetain
            (*(undefined8 *)(unaff_x20 + _TtC6Sentry26SentryDefaultCrashReporter::systemInfo));
  return;
}



/* Address: 0x100b722d8 | FUN_100b722d8 */

void FUN_100b722d8(undefined8 param_1,undefined8 param_2)

{
  _objc_allocWithZone();
  FUN_100b72318(param_1,param_2);
  return;
}



/* Address: 0x100b72318 | FUN_100b72318 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100b723e8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ID FUN_100b72318(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined1 *puVar2;
  Dictionary<undefined,undefined> DVar3;
  ID IVar4;
  long unaff_x20;
  
  _swift_getObjectType();
  *(undefined8 *)(unaff_x20 + _TtC6Sentry26SentryDefaultCrashReporter::processInfoWrapper) = param_1
  ;
  *(undefined8 **)(unaff_x20 + _TtC6Sentry26SentryDefaultCrashReporter::bridge) = param_2;
  _swift_unknownObjectRetain(param_1);
  FUN_100b4d934();
  puVar2 = (undefined1 *)0x0;
  if (param_2 != (undefined8 *)0x0) {
    if ((code *)*param_2 == (code *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100b7244c);
      (*pcVar1)();
    }
    puVar2 = &DAT_00000001;
    (*(code *)*param_2)();
  }
  FUN_100bc61bc();
  if (puVar2 != (undefined1 *)0x0) {
    DVar3.unknown = puVar2;
    FUN_100b7244c();
    _swift_bridgeObjectRelease(puVar2);
    if (DVar3.unknown != (undefined1 *)0x0) goto LAB_100b723f0;
  }
  DVar3 = Swift::Dictionary::_init
                    (0,PTR___type_metadata_for_Swift_String_100eac208,
                     PTR___type_metadata_for_Any_100eae0c0 + 8,
                     PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218
                    );
LAB_100b723f0:
  *(undefined **)(unaff_x20 + _TtC6Sentry26SentryDefaultCrashReporter::systemInfo) = DVar3.unknown;
  IVar4 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffb0,"init");
  _swift_unknownObjectRelease(param_1);
  return IVar4;
}



/* Address: 0x100b7244c | FUN_100b7244c */

undefined * FUN_100b7244c(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  char cVar3;
  char cVar4;
  undefined *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong local_1d8;
  ulong uStack_1d0;
  undefined1 auStack_1c8 [40];
  ulong local_1a0;
  ulong uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  ulong local_170;
  ulong uStack_168;
  undefined1 auStack_160 [32];
  undefined1 auStack_140 [32];
  undefined1 auStack_120 [40];
  undefined1 auStack_f8 [32];
  undefined1 auStack_d8 [40];
  undefined1 auStack_b0 [32];
  long local_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  ulong local_70;
  long lVar9;
  
  puVar5 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (*(long *)(param_1 + 0x10) != 0) {
    puVar5 = &DAT_101044bd0;
    FUN_100b6730c();
    FUN_100b747bc();
  }
  thunk_FUN_100ba9ecc(&local_90,param_1);
  uVar8 = local_80 + 0x40U >> 6;
  _swift_bridgeObjectRetain(param_1);
  uVar11 = local_70;
  lVar9 = lStack_78;
  do {
    lVar12 = lVar9;
    if (uVar11 == 0) {
      cVar3 = SCARRY8(lVar9,1);
      cVar4 = lVar9 + 1 < 0;
      if ((bool)cVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100b727ac);
        (*pcVar2)();
      }
      FUN_100b74844(lVar9 + 1);
      if (cVar4 == cVar3) goto LAB_100b72770;
      uVar11 = *(ulong *)(lStack_88 + extraout_x8 * 8);
      lVar12 = extraout_x8;
      if (uVar11 == 0) {
        FUN_100b74808();
        if (cVar4 == cVar3) {
LAB_100b72770:
          FUN_100b747c8();
          FUN_100b74820();
          return puVar5;
        }
        FUN_100b747fc();
        FUN_100b74808();
        if (cVar4 == cVar3) goto LAB_100b72770;
        FUN_100b747fc();
        FUN_100b74808();
        if (cVar4 == cVar3) goto LAB_100b72770;
        FUN_100b747fc();
        FUN_100b74808();
        if (cVar4 == cVar3) goto LAB_100b72770;
        FUN_100b747fc();
        FUN_100b74808();
        if (cVar4 == cVar3) goto LAB_100b72770;
        FUN_100b747fc();
        FUN_100b74808();
        if (cVar4 == cVar3) goto LAB_100b72770;
        FUN_100b747fc();
        lVar12 = extraout_x8_00 + 7;
        cVar3 = SBORROW8(lVar12,uVar8);
        cVar4 = (long)(lVar12 - uVar8) < 0;
        if ((long)uVar8 <= lVar12) goto LAB_100b72770;
        uVar11 = *(ulong *)(lStack_88 + lVar12 * 8);
        if (uVar11 == 0) {
          lVar9 = lVar9 + 9;
          do {
            FUN_100b74844(lVar9);
            if (cVar4 == cVar3) goto LAB_100b72770;
            uVar11 = *(ulong *)(lStack_88 + extraout_x8_01 * 8);
            lVar9 = extraout_x8_01 + 1;
            lVar12 = extraout_x8_01;
          } while (uVar11 == 0);
        }
      }
    }
    uVar13 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
    uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
    uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
    uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
    uVar13 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | lVar12 << 6;
    FUN_1000f1c9c(*(long *)(local_90 + 0x30) + uVar13 * 0x28,auStack_d8);
    FUN_10000cbfc(*(long *)(local_90 + 0x38) + uVar13 * 0x20,auStack_b0);
    FUN_100b74834(auStack_120,auStack_d8);
    FUN_1000f1c9c(auStack_120,auStack_1c8);
    puVar6 = &local_1d8;
    FUN_100b6f878(puVar6,auStack_1c8,PTR___type_metadata_for_Swift_AnyHashable_100eacdb0,
                  PTR___type_metadata_for_Swift_String_100eac208);
    if ((int)puVar6 == 0) {
      uStack_198 = 0;
      local_1a0 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      uStack_178 = 0;
      local_180 = 0;
    }
    else {
      local_1a0 = local_1d8;
      uStack_198 = uStack_1d0;
      FUN_10000cbfc(auStack_f8,&uStack_190);
    }
    FUN_100b74780(auStack_120,&DAT_101044bc0);
    if (uStack_198 == 0) {
      FUN_100b7483c();
      FUN_100b747c8();
      FUN_10000c650();
      FUN_100b74780(&local_1a0,&DAT_101044bd8);
      return (undefined *)0x0;
    }
    uVar11 = uVar11 - 1 & uVar11;
    local_170 = local_1a0;
    uStack_168 = uStack_198;
    FUN_100011080(&uStack_190,auStack_160);
    uVar1 = uStack_168;
    uVar13 = local_170;
    FUN_100011080(auStack_160,auStack_140);
    FUN_100011080(auStack_140,&local_170);
    uVar7 = uVar13;
    uVar10 = uVar1;
    FUN_100071370();
    lVar9 = lVar12;
    if ((uVar10 & 1) == 0) {
      if (*(ulong *)(puVar5 + 0x18) <= *(ulong *)(puVar5 + 0x10)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100b727a4);
        (*pcVar2)();
      }
      uVar10 = uVar7 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar10 + 0x40) = *(ulong *)(puVar5 + uVar10 + 0x40) | 1L << (uVar7 & 0x3f)
      ;
      puVar6 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar7 * 0x10);
      *puVar6 = uVar13;
      puVar6[1] = uVar1;
      FUN_100011080(&local_170,*(long *)(puVar5 + 0x38) + uVar7 * 0x20);
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100b727a8);
        (*pcVar2)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
    }
    else {
      puVar6 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar7 * 0x10);
      _swift_bridgeObjectRelease(puVar6[1]);
      *puVar6 = uVar13;
      puVar6[1] = uVar1;
      lVar12 = *(long *)(puVar5 + 0x38) + uVar7 * 0x20;
      FUN_100004594(lVar12);
      FUN_100011080(&local_170,lVar12);
    }
  } while( true );
}



/* Address: 0x100b727ac | FUN_100b727ac */

undefined * FUN_100b727ac(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  char cVar4;
  char cVar5;
  undefined *puVar6;
  ulong *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong local_158;
  ulong uStack_150;
  undefined1 auStack_148 [40];
  undefined1 auStack_120 [40];
  undefined1 auStack_f8 [32];
  undefined1 auStack_d8 [40];
  undefined1 auStack_b0 [32];
  long local_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  ulong local_70;
  long lVar11;
  
  puVar6 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (*(long *)(param_1 + 0x10) != 0) {
    puVar6 = &DAT_101044bc8;
    FUN_100b6730c();
    FUN_100b747bc();
  }
  FUN_100b74828();
  uVar10 = local_80 + 0x40U >> 6;
  _swift_bridgeObjectRetain(param_1);
  uVar15 = local_70;
  lVar11 = lStack_78;
  do {
    lVar14 = lVar11;
    if (uVar15 == 0) {
      cVar4 = SCARRY8(lVar11,1);
      cVar5 = lVar11 + 1 < 0;
      if ((bool)cVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100b72ad4);
        (*pcVar3)();
      }
      FUN_100b74844(lVar11 + 1);
      if (cVar5 == cVar4) goto LAB_100b72a98;
      uVar15 = *(ulong *)(lStack_88 + extraout_x8 * 8);
      lVar14 = extraout_x8;
      if (uVar15 == 0) {
        FUN_100b74814();
        if (cVar5 == cVar4) {
LAB_100b72a98:
          FUN_100b747c8();
          FUN_100b74820();
          return puVar6;
        }
        FUN_100b747f0();
        FUN_100b74814();
        if (cVar5 == cVar4) goto LAB_100b72a98;
        FUN_100b747f0();
        FUN_100b74814();
        if (cVar5 == cVar4) goto LAB_100b72a98;
        FUN_100b747f0();
        FUN_100b74814();
        if (cVar5 == cVar4) goto LAB_100b72a98;
        FUN_100b747f0();
        FUN_100b74814();
        if (cVar5 == cVar4) goto LAB_100b72a98;
        FUN_100b747f0();
        FUN_100b74814();
        if (cVar5 == cVar4) goto LAB_100b72a98;
        FUN_100b747f0();
        lVar14 = extraout_x8_00 + 7;
        cVar4 = SBORROW8(lVar14,uVar10);
        cVar5 = (long)(lVar14 - uVar10) < 0;
        if ((long)uVar10 <= lVar14) goto LAB_100b72a98;
        uVar15 = *(ulong *)(lStack_88 + lVar14 * 8);
        if (uVar15 == 0) {
          lVar11 = lVar11 + 9;
          do {
            FUN_100b74844(lVar11);
            if (cVar5 == cVar4) goto LAB_100b72a98;
            uVar15 = *(ulong *)(lStack_88 + extraout_x8_01 * 8);
            lVar11 = extraout_x8_01 + 1;
            lVar14 = extraout_x8_01;
          } while (uVar15 == 0);
        }
      }
    }
    uVar13 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
    uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
    uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
    uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
    uVar13 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | lVar14 << 6;
    FUN_1000f1c9c(*(long *)(local_90 + 0x30) + uVar13 * 0x28,auStack_d8);
    FUN_10000cbfc(*(long *)(local_90 + 0x38) + uVar13 * 0x20,auStack_b0);
    FUN_100b74834(auStack_120,auStack_d8);
    FUN_1000f1c9c(auStack_120,auStack_148);
    puVar7 = &local_158;
    FUN_100b6f878(puVar7,auStack_148,PTR___type_metadata_for_Swift_AnyHashable_100eacdb0,
                  PTR___type_metadata_for_Swift_String_100eac208);
    uVar2 = uStack_150;
    uVar13 = local_158;
    if ((int)puVar7 == 0) {
LAB_100b72a6c:
      FUN_100b74780(auStack_120,&DAT_101044bc0);
      FUN_100b7483c();
      FUN_100b747c8();
      FUN_10000c650();
      return (undefined *)0x0;
    }
    FUN_10000cbfc(auStack_f8,auStack_148);
    puVar8 = &DAT_101044968;
    FUN_100b6730c(&DAT_101044968);
    puVar7 = &local_158;
    FUN_100b6f878(puVar7,auStack_148,PTR___type_metadata_for_Any_100eae0c0 + 8,puVar8);
    uVar1 = local_158;
    if (((ulong)puVar7 & 1) == 0) {
      _swift_bridgeObjectRelease(uVar2);
      goto LAB_100b72a6c;
    }
    uVar15 = uVar15 - 1 & uVar15;
    FUN_100b74780(auStack_120,&DAT_101044bc0);
    uVar9 = uVar13;
    uVar12 = uVar2;
    FUN_100071370();
    lVar11 = lVar14;
    if ((uVar12 & 1) == 0) {
      if (*(ulong *)(puVar6 + 0x18) <= *(ulong *)(puVar6 + 0x10)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100b72acc);
        (*pcVar3)();
      }
      uVar12 = uVar9 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar6 + uVar12 + 0x40) = *(ulong *)(puVar6 + uVar12 + 0x40) | 1L << (uVar9 & 0x3f)
      ;
      puVar7 = (ulong *)(*(long *)(puVar6 + 0x30) + uVar9 * 0x10);
      *puVar7 = uVar13;
      puVar7[1] = uVar2;
      *(ulong *)(*(long *)(puVar6 + 0x38) + uVar9 * 8) = uVar1;
      if (SCARRY8(*(long *)(puVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100b72ad0);
        (*pcVar3)();
      }
      *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
    }
    else {
      puVar7 = (ulong *)(*(long *)(puVar6 + 0x30) + uVar9 * 0x10);
      _swift_bridgeObjectRelease(puVar7[1]);
      *puVar7 = uVar13;
      puVar7[1] = uVar2;
      lVar14 = *(long *)(puVar6 + 0x38);
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar14 + uVar9 * 8));
      *(ulong *)(lVar14 + uVar9 * 8) = uVar1;
    }
  } while( true );
}



/* Address: 0x100b72ad4 | FUN_100b72ad4 */

undefined * FUN_100b72ad4(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  code *pcVar6;
  char cVar7;
  char cVar8;
  undefined *puVar9;
  ulong *puVar10;
  long extraout_x8;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong local_158;
  ulong uStack_150;
  undefined1 auStack_148 [40];
  undefined1 auStack_120 [40];
  undefined1 auStack_f8 [32];
  undefined1 auStack_d8 [40];
  undefined1 auStack_b0 [32];
  long local_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  ulong local_70;
  
  puVar9 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (*(long *)(param_1 + 0x10) != 0) {
    puVar9 = &DAT_101044bb8;
    FUN_100b6730c();
    FUN_100b747bc();
  }
  FUN_100b74828();
  uVar12 = local_80 + 0x40U >> 6;
  _swift_bridgeObjectRetain(param_1);
  puVar1 = PTR___type_metadata_for_Swift_String_100eac208;
  uVar16 = local_70;
  lVar17 = lStack_78;
  do {
    lVar13 = lVar17;
    uVar15 = uVar16;
    if (uVar16 == 0) {
      lVar13 = lVar17 + 1;
      if (SCARRY8(lVar17,1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100b72e1c);
        (*pcVar6)();
      }
      cVar7 = SBORROW8(lVar13,uVar12);
      cVar8 = (long)(lVar13 - uVar12) < 0;
      if ((long)uVar12 <= lVar13) goto LAB_100b72ddc;
      uVar15 = *(ulong *)(lStack_88 + lVar13 * 8);
      if (uVar15 == 0) {
        FUN_100b747e4();
        if (cVar8 == cVar7) {
LAB_100b72ddc:
          FUN_100b74820(local_90,lStack_88,local_80,lVar17);
          return puVar9;
        }
        FUN_100b747d8();
        FUN_100b747e4();
        if (cVar8 == cVar7) goto LAB_100b72ddc;
        FUN_100b747d8();
        FUN_100b747e4();
        if (cVar8 == cVar7) goto LAB_100b72ddc;
        FUN_100b747d8();
        FUN_100b747e4();
        if (cVar8 == cVar7) goto LAB_100b72ddc;
        FUN_100b747d8();
        FUN_100b747e4();
        if (cVar8 == cVar7) goto LAB_100b72ddc;
        FUN_100b747d8();
        FUN_100b747e4();
        if (cVar8 == cVar7) goto LAB_100b72ddc;
        FUN_100b747d8();
        lVar13 = extraout_x8 + 7;
        if ((long)uVar12 <= lVar13) goto LAB_100b72ddc;
        uVar15 = *(ulong *)(lStack_88 + lVar13 * 8);
        if (uVar15 == 0) {
          lVar5 = lVar17 + 9;
          do {
            lVar13 = lVar5;
            if ((long)uVar12 <= lVar13) goto LAB_100b72ddc;
            uVar15 = *(ulong *)(lStack_88 + lVar13 * 8);
            lVar5 = lVar13 + 1;
          } while (uVar15 == 0);
        }
      }
    }
    uVar14 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
    uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
    uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
    uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
    uVar14 = LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) | lVar13 << 6;
    FUN_1000f1c9c(*(long *)(local_90 + 0x30) + uVar14 * 0x28,auStack_d8);
    FUN_10000cbfc(*(long *)(local_90 + 0x38) + uVar14 * 0x20,auStack_b0);
    FUN_100b74834(auStack_120,auStack_d8);
    FUN_1000f1c9c(auStack_120,auStack_148);
    puVar10 = &local_158;
    FUN_100b6f878(puVar10,auStack_148,PTR___type_metadata_for_Swift_AnyHashable_100eacdb0,puVar1);
    uVar3 = uStack_150;
    uVar14 = local_158;
    if ((int)puVar10 == 0) {
LAB_100b72dac:
      FUN_100b74780(auStack_120,&DAT_101044bc0);
      FUN_100b7483c();
      FUN_10000c650(local_90,lStack_88,local_80,lVar17,uVar16);
      return (undefined *)0x0;
    }
    FUN_10000cbfc(auStack_f8,auStack_148);
    puVar10 = &local_158;
    FUN_100b6f878(puVar10,auStack_148,PTR___type_metadata_for_Any_100eae0c0 + 8,puVar1);
    uVar4 = uStack_150;
    uVar2 = local_158;
    if (((ulong)puVar10 & 1) == 0) {
      _swift_bridgeObjectRelease(uVar3);
      goto LAB_100b72dac;
    }
    uVar16 = uVar15 - 1 & uVar15;
    FUN_100b74780(auStack_120,&DAT_101044bc0);
    uVar15 = uVar14;
    uVar11 = uVar3;
    FUN_100071370();
    lVar17 = lVar13;
    if ((uVar11 & 1) == 0) {
      if (*(ulong *)(puVar9 + 0x18) <= *(ulong *)(puVar9 + 0x10)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100b72e14);
        (*pcVar6)();
      }
      uVar11 = uVar15 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar9 + uVar11 + 0x40) =
           *(ulong *)(puVar9 + uVar11 + 0x40) | 1L << (uVar15 & 0x3f);
      puVar10 = (ulong *)(*(long *)(puVar9 + 0x30) + uVar15 * 0x10);
      *puVar10 = uVar14;
      puVar10[1] = uVar3;
      puVar10 = (ulong *)(*(long *)(puVar9 + 0x38) + uVar15 * 0x10);
      *puVar10 = uVar2;
      puVar10[1] = uVar4;
      if (SCARRY8(*(long *)(puVar9 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100b72e18);
        (*pcVar6)();
      }
      *(long *)(puVar9 + 0x10) = *(long *)(puVar9 + 0x10) + 1;
    }
    else {
      puVar10 = (ulong *)(*(long *)(puVar9 + 0x30) + uVar15 * 0x10);
      _swift_bridgeObjectRelease(puVar10[1]);
      *puVar10 = uVar14;
      puVar10[1] = uVar3;
      puVar10 = (ulong *)(*(long *)(puVar9 + 0x38) + uVar15 * 0x10);
      _swift_bridgeObjectRelease(puVar10[1]);
      *puVar10 = uVar2;
      puVar10[1] = uVar4;
    }
  } while( true );
}



/* Address: 0x100b72e1c | _TtC6Sentry26SentryDefaultCrashReporter::initWithProcessInfoWrapper:bridge: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID _TtC6Sentry26SentryDefaultCrashReporter::initWithProcessInfoWrapper_bridge_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  _swift_unknownObjectRetain(param_3);
  FUN_100b72318(param_3,param_4);
  return param_3;
}



/* Address: 0x100b72e68 | FUN_100b72e68 */

void FUN_100b72e68(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("Sentry.SentryDefaultCrashReporter",0x21,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100b72e94);
  (*pcVar1)();
}



/* Address: 0x100b72e94 | _TtC6Sentry26SentryDefaultCrashReporter::init */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry26SentryDefaultCrashReporter::init(ID param_1,SEL param_2)

{
  ID IVar1;
  
  FUN_100b72e68();
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + processInfoWrapper));
  IVar1 = *(ID *)(param_1 + systemInfo);
  _swift_bridgeObjectRelease();
  return IVar1;
}



/* Address: 0x100b72ea0 | _TtC6Sentry26SentryDefaultCrashReporter::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry26SentryDefaultCrashReporter::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + processInfoWrapper));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + systemInfo));
  return;
}



/* Address: 0x100b72ee8 | thunk_FUN_100b548d8 */

void thunk_FUN_100b548d8(void)

{
  byte bVar1;
  dispatch_queue_t pdVar2;
  
  bVar1 = DAT_101042a20;
  LOAcquire();
  DAT_101042a20 = 1;
  LORelease();
  if ((bVar1 & 1) != 0) {
    return;
  }
  pdVar2 = _dispatch_get_global_queue(0x15,0);
  _dispatch_async(pdVar2,&PTR___NSConcreteGlobalBlock_100f35838);
  return;
}



/* Address: 0x100b72eec | _TtC6Sentry26SentryDefaultCrashReporter::startBinaryImageCache */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry26SentryDefaultCrashReporter::startBinaryImageCache(ID param_1,SEL param_2)

{
  thunk_FUN_100b548d8(param_1);
  return;
}



/* Address: 0x100b72f14 | thunk_FUN_100b54a20 */

void thunk_FUN_100b54a20(void)

{
  return;
}



/* Address: 0x100b72f18 | _TtC6Sentry26SentryDefaultCrashReporter::stopBinaryImageCache */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry26SentryDefaultCrashReporter::stopBinaryImageCache(ID param_1,SEL param_2)

{
  thunk_FUN_100b54a20(param_1);
  return;
}



/* Address: 0x100b72f40 | _TtC6Sentry26SentryDefaultCrashReporter::crashedLastLaunch */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

bool _TtC6Sentry26SentryDefaultCrashReporter::crashedLastLaunch(ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100b72f74();
  return uVar1 & 1;
}



/* Address: 0x100b72f74 | FUN_100b72f74 */

void FUN_100b72f74(void)

{
  FUN_100b73278(&PTR_s_crashedLastLaunch_100f86cf0);
  return;
}



/* Address: 0x100b72f80 | _TtC6Sentry26SentryDefaultCrashReporter::durationFromCrashStateInitToLastCrash */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

double _TtC6Sentry26SentryDefaultCrashReporter::durationFromCrashStateInitToLastCrash
                 (ID param_1,SEL param_2)

{
  double in_d0;
  
  FUN_100b72fbc(param_1);
  return in_d0;
}



/* Address: 0x100b72fbc | FUN_100b72fbc */

undefined8 FUN_100b72fbc(long param_1)

{
  undefined8 uVar1;
  
  FUN_100b41794();
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
  }
  return uVar1;
}



/* Address: 0x100b72fe0 | _TtC6Sentry26SentryDefaultCrashReporter::activeDurationSinceLastCrash */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

double _TtC6Sentry26SentryDefaultCrashReporter::activeDurationSinceLastCrash(ID param_1,SEL param_2)

{
  double in_d0;
  
  FUN_100b7301c(param_1);
  return in_d0;
}



/* Address: 0x100b7301c | FUN_100b7301c */

void FUN_100b7301c(void)

{
  long unaff_x20;
  
  _objc_msgSend(*(ID *)(*(long *)(*(long *)(unaff_x20 +
                                           _TtC6Sentry26SentryDefaultCrashReporter::bridge) +
                                 _TtC6Sentry17SentryCrashBridge::crashReporter) +
                       _TtC6Sentry16SentryCrashSwift::sentryCrash),"activeDurationSinceLastCrash");
  return;
}



/* Address: 0x100b73050 | _TtC6Sentry26SentryDefaultCrashReporter::isBeingTraced */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

bool _TtC6Sentry26SentryDefaultCrashReporter::isBeingTraced(ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100b73084();
  return uVar1 & 1;
}



/* Address: 0x100b73084 | FUN_100b73084 */

void FUN_100b73084(void)

{
  FUN_100b2b9b4();
  return;
}



/* Address: 0x100b73098 | _TtC6Sentry26SentryDefaultCrashReporter::isSimulatorBuild */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

bool _TtC6Sentry26SentryDefaultCrashReporter::isSimulatorBuild(ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100b730cc();
  return uVar1 & 1;
}



/* Address: 0x100b730cc | FUN_100b730cc */

void FUN_100b730cc(void)

{
  FUN_100b4d92c();
  return;
}



/* Address: 0x100b730e0 | _TtC6Sentry26SentryDefaultCrashReporter::isApplicationInForeground */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

bool _TtC6Sentry26SentryDefaultCrashReporter::isApplicationInForeground(ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100b73114();
  return uVar1 & 1;
}



/* Address: 0x100b73114 | FUN_100b73114 */

void FUN_100b73114(void)

{
  FUN_100b41794();
  return;
}



/* Address: 0x100b73130 | _TtC6Sentry26SentryDefaultCrashReporter::freeMemorySize */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

unsigned_long_long _TtC6Sentry26SentryDefaultCrashReporter::freeMemorySize(ID param_1,SEL param_2)

{
  thunk_FUN_100b4d8f4();
  return param_1;
}



/* Address: 0x100b73164 | thunk_FUN_100b4d8f4 */

long thunk_FUN_100b4d8f4(void)

{
  uint *puVar1;
  long lStack_58;
  uint auStack_4c [15];
  
  puVar1 = auStack_4c;
  FUN_100b4e19c(puVar1,&lStack_58);
  lStack_58 = lStack_58 * (ulong)auStack_4c[0];
  if ((int)puVar1 == 0) {
    lStack_58 = 0;
  }
  return lStack_58;
}



/* Address: 0x100b73168 | _TtC6Sentry26SentryDefaultCrashReporter::appMemorySize */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

unsigned_long_long _TtC6Sentry26SentryDefaultCrashReporter::appMemorySize(ID param_1,SEL param_2)

{
  FUN_100b7319c();
  return param_1;
}


