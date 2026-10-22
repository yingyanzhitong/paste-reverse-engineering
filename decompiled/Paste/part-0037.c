/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100071c10 | FUN_100071c10 */

undefined * FUN_100071c10(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100071d10);
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
    puVar3 = &DAT_100fa9848;
    FUN_1000037f0(&DAT_100fa9848,&DAT_100c26df8);
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



/* Address: 0x100071d10 | FUN_100071d10 */

undefined * FUN_100071d10(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100071e1c);
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
    puVar3 = &DAT_100fa82e0;
    FUN_1000037f0(&DAT_100fa82e0,&DAT_100c25360);
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
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,PTR___type_metadata_for_Any_100eae0c0 + 8);
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



/* Address: 0x100071e1c | FUN_100071e1c */

undefined * FUN_100071e1c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100071f40);
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
    puVar3 = &DAT_100fa9840;
    FUN_1000037f0(&DAT_100fa9840,&DAT_100c26df0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x38) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&DAT_100eb0270);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x38 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0x38);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x100071f40 | FUN_100071f40 */

undefined * FUN_100071f40(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100072058);
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
    puVar3 = &DAT_100fa9920;
    FUN_1000037f0(&DAT_100fa9920,&DAT_100c26ed0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x30) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&DAT_100eb2d50);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x30 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0x30);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x100072058 | FUN_100072058 */

undefined * FUN_100072058(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100072158);
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
    puVar3 = &DAT_100fa9828;
    FUN_1000037f0(&DAT_100fa9828,&DAT_100c27d80);
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
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x100072158 | FUN_100072158 */

undefined *
FUN_100072158(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10007229c);
        (*pcVar3)();
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
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    FUN_1000037f0(param_5,param_6);
    _swift_allocObject();
    puVar4 = param_5;
    _malloc_size();
    *(ulong *)(param_5 + 0x10) = uVar6;
    *(long *)(param_5 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
    puVar4 = param_5;
  }
  puVar1 = puVar4 + 0x20;
  puVar2 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    FUN_1000037f0(param_7,param_8);
    _swift_arrayInitWithCopy(puVar1,puVar2,uVar6,param_7);
  }
  else {
    if (puVar4 != param_4 || puVar2 + uVar6 * 0x28 <= puVar1) {
      _memmove(puVar1,puVar2,uVar6 * 0x28);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar4;
}



/* Address: 0x10007229c | FUN_10007229c */

undefined * FUN_10007229c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100072418);
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
    puVar4 = &DAT_100fa9968;
    FUN_1000037f0(&DAT_100fa9968,&DAT_100c26f70);
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
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100072410);
      (*pcVar3)();
    }
    lVar5 = (long)puVar6 - uVar11;
    if (lVar5 == -0x8000000000000000 && lVar10 == -1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100072414);
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



/* Address: 0x100072418 | FUN_100072418 */

undefined * FUN_100072418(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10007253c);
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
    puVar3 = &DAT_100fa9950;
    FUN_1000037f0(&DAT_100fa9950,&DAT_100c26f50);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x38) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&DAT_100eb4de8);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x38 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0x38);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x10007253c | FUN_10007253c */

undefined8 FUN_10007253c(undefined8 *param_1,char *param_2,undefined *param_3)

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
  FUN_1000729a8(param_2,param_3,uVar6,lVar8);
  *unaff_x20 = local_98[0];
  *param_1 = param_2;
  param_1[1] = param_3;
  return 1;
}



/* Address: 0x100072680 | FUN_100072680 */

undefined8 FUN_100072680(undefined8 *param_1,String *param_2)

{
  char *pcVar1;
  _StringGuts _Var2;
  _StringGuts _Var3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  _StringGuts _Var9;
  _StringGuts _Var10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  bool bVar17;
  Hasher into;
  ulong uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  long *unaff_x20;
  long lVar21;
  long lVar22;
  char *pcVar23;
  char *pcVar24;
  void *pvVar25;
  long local_a8 [9];
  
  pcVar23 = param_2->str;
  puVar6 = param_2->bridgeObject;
  SVar14 = *param_2;
  pcVar24 = param_2[1].str;
  puVar7 = param_2[1].bridgeObject;
  SVar15 = param_2[1];
  pcVar1 = param_2[2].str;
  puVar8 = param_2[2].bridgeObject;
  SVar16 = param_2[2];
  lVar21 = *unaff_x20;
  Swift::Hasher::init(*(__int64 *)(lVar21 + 0x28));
  Swift::String::hash((Hasher)local_a8,SVar14);
  Swift::String::hash((Hasher)local_a8,SVar15);
  into.unknown = (undefined *)local_a8;
  Swift::String::hash(into,SVar16);
  uVar18 = Swift::Hasher::_finalize(into);
  uVar19 = -1L << ((ulong)*(byte *)(lVar21 + 0x20) & 0x3f);
  uVar18 = uVar18 & (uVar19 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar21 + 0x38 + (uVar18 >> 6) * 8) >> (uVar18 & 0x3f) & 1) != 0) {
    lVar22 = *(long *)(lVar21 + 0x30);
    do {
      puVar20 = (undefined8 *)(lVar22 + uVar18 * 0x30);
      _Var2.unknown = (undefined *)puVar20[2];
      _Var9.unknown = (undefined *)puVar20[3];
      _Var3.unknown = (undefined *)puVar20[4];
      _Var10.unknown = (undefined *)puVar20[5];
      if (((((undefined *)*puVar20 == pcVar23 && (undefined *)puVar20[1] == puVar6) ||
           (bVar17 = Swift::_stringCompareWithSmolCheck
                               ((undefined *)*puVar20,(undefined *)puVar20[1],
                                (_StringComparisonResult)(__int8)pcVar23), bVar17)) &&
          ((_Var2.unknown == pcVar24 && _Var9.unknown == puVar7 ||
           (bVar17 = Swift::_stringCompareWithSmolCheck
                               (_Var2,_Var9,(_StringComparisonResult)(__int8)pcVar24), bVar17)))) &&
         ((_Var3.unknown == pcVar1 && _Var10.unknown == puVar8 ||
          (bVar17 = Swift::_stringCompareWithSmolCheck
                              (_Var3,_Var10,(_StringComparisonResult)(__int8)pcVar1), bVar17)))) {
        _swift_bridgeObjectRelease(puVar7);
        _swift_bridgeObjectRelease(puVar6);
        _swift_bridgeObjectRelease(puVar8);
        puVar20 = (undefined8 *)(*(long *)(lVar21 + 0x30) + uVar18 * 0x30);
        uVar11 = puVar20[1];
        uVar4 = puVar20[2];
        uVar12 = puVar20[3];
        uVar5 = puVar20[4];
        uVar13 = puVar20[5];
        *param_1 = *puVar20;
        param_1[1] = uVar11;
        param_1[2] = uVar4;
        param_1[3] = uVar12;
        param_1[4] = uVar5;
        param_1[5] = uVar13;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar12);
        _swift_bridgeObjectRetain(uVar13);
        return 0;
      }
      uVar18 = uVar18 + 1 & ~uVar19;
    } while ((*(ulong *)(lVar21 + 0x38 + (uVar18 >> 6) * 8) >> (uVar18 & 0x3f) & 1) != 0);
  }
  lVar21 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native(lVar21);
  local_a8[0] = *unaff_x20;
  _swift_bridgeObjectRetain(puVar6);
  _swift_bridgeObjectRetain(puVar7);
  _swift_bridgeObjectRetain(puVar8);
  FUN_100072b0c(param_2,uVar18,lVar21);
  *unaff_x20 = local_a8[0];
  pcVar23 = param_2->str;
  pvVar25 = param_2[1].bridgeObject;
  pcVar24 = param_2[1].str;
  param_1[1] = param_2->bridgeObject;
  *param_1 = pcVar23;
  param_1[3] = pvVar25;
  param_1[2] = pcVar24;
  pcVar23 = param_2[2].str;
  param_1[5] = param_2[2].bridgeObject;
  param_1[4] = pcVar23;
  return 1;
}



/* Address: 0x1000728d4 | FUN_1000728d4 */

undefined8 FUN_1000728d4(__uint64 *param_1,__uint64 param_2,Hasher param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long *unaff_x20;
  long lVar5;
  
  lVar5 = *unaff_x20;
  uVar1 = Swift::Hasher::_hash(*(__int64 *)(lVar5 + 0x28),param_2,param_3);
  uVar4 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar4 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar5 + 0x38 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0) {
    do {
      if (*(__uint64 *)(*(long *)(lVar5 + 0x30) + uVar1 * 8) == param_2) {
        uVar2 = 0;
        goto LAB_10007298c;
      }
      uVar1 = uVar1 + 1 & ~uVar4;
    } while ((*(ulong *)(lVar5 + 0x38 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  }
  lVar5 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native(lVar5);
  lVar3 = *unaff_x20;
  FUN_100072d1c(param_2,uVar1,lVar5);
  *unaff_x20 = lVar3;
  uVar2 = 1;
LAB_10007298c:
  *param_1 = param_2;
  return uVar2;
}



/* Address: 0x1000729a8 | FUN_1000729a8 */

void FUN_1000729a8(char *param_1,undefined *param_2,ulong param_3,ulong param_4)

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
      FUN_1000734dc();
    }
  }
  else {
    if ((param_4 & 1) == 0) {
      FUN_100072e24(uVar6 + 1);
    }
    else {
      FUN_100073900();
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
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100072b0c);
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
  pcVar4 = (code *)SoftwareBreakpoint(1,0x100072afc);
  (*pcVar4)();
}



/* Address: 0x100072b0c | FUN_100072b0c */

void FUN_100072b0c(String *param_1,ulong param_2,ulong param_3)

{
  char *pcVar1;
  _StringGuts _Var2;
  _StringGuts _Var3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  _StringGuts _Var7;
  _StringGuts _Var8;
  String SVar9;
  String SVar10;
  String SVar11;
  code *pcVar12;
  bool bVar13;
  Hasher into;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  long *unaff_x20;
  char *pcVar18;
  char *pcVar19;
  void *pvVar20;
  undefined1 auStack_a8 [72];
  
  uVar14 = *(ulong *)(*unaff_x20 + 0x10);
  if (uVar14 < *(ulong *)(*unaff_x20 + 0x18)) {
    if ((param_3 & 1) == 0) {
      FUN_100073638();
    }
  }
  else {
    if ((param_3 & 1) == 0) {
      FUN_10007304c(uVar14 + 1);
    }
    else {
      FUN_100073b64();
    }
    pcVar18 = param_1->str;
    puVar4 = param_1->bridgeObject;
    SVar9 = *param_1;
    pcVar19 = param_1[1].str;
    puVar5 = param_1[1].bridgeObject;
    SVar10 = param_1[1];
    pcVar1 = param_1[2].str;
    puVar6 = param_1[2].bridgeObject;
    SVar11 = param_1[2];
    lVar17 = *unaff_x20;
    Swift::Hasher::init(*(__int64 *)(lVar17 + 0x28));
    Swift::String::hash((Hasher)auStack_a8,SVar9);
    Swift::String::hash((Hasher)auStack_a8,SVar10);
    into.unknown = auStack_a8;
    Swift::String::hash(into,SVar11);
    param_2 = Swift::Hasher::_finalize(into);
    uVar14 = -1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
    param_2 = param_2 & (uVar14 ^ 0xffffffffffffffff);
    if ((*(ulong *)(lVar17 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0) {
      lVar15 = *(long *)(lVar17 + 0x30);
      do {
        puVar16 = (undefined8 *)(lVar15 + param_2 * 0x30);
        _Var2.unknown = (undefined *)puVar16[2];
        _Var7.unknown = (undefined *)puVar16[3];
        _Var3.unknown = (undefined *)puVar16[4];
        _Var8.unknown = (undefined *)puVar16[5];
        if (((((undefined *)*puVar16 == pcVar18 && (undefined *)puVar16[1] == puVar4) ||
             (bVar13 = Swift::_stringCompareWithSmolCheck
                                 ((undefined *)*puVar16,(undefined *)puVar16[1],
                                  (_StringComparisonResult)(__int8)pcVar18), bVar13)) &&
            ((_Var2.unknown == pcVar19 && _Var7.unknown == puVar5 ||
             (bVar13 = Swift::_stringCompareWithSmolCheck
                                 (_Var2,_Var7,(_StringComparisonResult)(__int8)pcVar19), bVar13))))
           && ((_Var3.unknown == pcVar1 && _Var8.unknown == puVar6 ||
               (bVar13 = Swift::_stringCompareWithSmolCheck
                                   (_Var3,_Var8,(_StringComparisonResult)(__int8)pcVar1), bVar13))))
        {
          Swift::_ELEMENT_TYPE_OF_SET_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x100072ca4);
          (*pcVar12)();
        }
        param_2 = param_2 + 1 & ~uVar14;
      } while ((*(ulong *)(lVar17 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
    }
  }
  lVar15 = *unaff_x20;
  lVar17 = lVar15 + (param_2 >> 6) * 8;
  *(ulong *)(lVar17 + 0x38) = *(ulong *)(lVar17 + 0x38) | 1L << (param_2 & 0x3f);
  puVar16 = (undefined8 *)(*(long *)(lVar15 + 0x30) + param_2 * 0x30);
  pcVar18 = param_1->str;
  pvVar20 = param_1[1].bridgeObject;
  pcVar19 = param_1[1].str;
  puVar16[1] = param_1->bridgeObject;
  *puVar16 = pcVar18;
  puVar16[3] = pvVar20;
  puVar16[2] = pcVar19;
  pcVar18 = param_1[2].str;
  puVar16[5] = param_1[2].bridgeObject;
  puVar16[4] = pcVar18;
  if (!SCARRY8(*(long *)(lVar15 + 0x10),1)) {
    *(long *)(lVar15 + 0x10) = *(long *)(lVar15 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x100072d1c);
  (*pcVar12)();
}



/* Address: 0x100072d1c | FUN_100072d1c */

void FUN_100072d1c(__uint64 param_1,ulong param_2,ulong param_3)

{
  Hasher HVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  
  uVar4 = (undefined4)(param_3 >> 0x20);
  uVar3 = (undefined4)param_3;
  uVar6 = *(ulong *)(*unaff_x20 + 0x10);
  if (uVar6 < *(ulong *)(*unaff_x20 + 0x18)) {
    if ((param_3 & 1) == 0) {
      FUN_1000737c0();
    }
  }
  else {
    if ((param_3 & 1) == 0) {
      FUN_1000732ec(uVar6 + 1);
    }
    else {
      FUN_100073e14();
    }
    lVar7 = *unaff_x20;
    HVar1.unknown._4_4_ = uVar4;
    HVar1.unknown._0_4_ = uVar3;
    param_2 = Swift::Hasher::_hash(*(__int64 *)(lVar7 + 0x28),param_1,HVar1);
    uVar6 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    param_2 = param_2 & (uVar6 ^ 0xffffffffffffffff);
    if ((*(ulong *)(lVar7 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0) {
      do {
        if (*(__uint64 *)(*(long *)(lVar7 + 0x30) + param_2 * 8) == param_1) {
          Swift::_ELEMENT_TYPE_OF_SET_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100072e24);
          (*pcVar2)();
        }
        param_2 = param_2 + 1 & ~uVar6;
      } while ((*(ulong *)(lVar7 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
    }
  }
  lVar5 = *unaff_x20;
  lVar7 = lVar5 + (param_2 >> 6) * 8;
  *(ulong *)(lVar7 + 0x38) = *(ulong *)(lVar7 + 0x38) | 1L << (param_2 & 0x3f);
  *(__uint64 *)(*(long *)(lVar5 + 0x30) + param_2 * 8) = param_1;
  if (!SCARRY8(*(long *)(lVar5 + 0x10),1)) {
    *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100072e14);
  (*pcVar2)();
}



/* Address: 0x100072e24 | FUN_100072e24 */

void FUN_100072e24(long param_1)

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
  this = (_SetStorage *)&DAT_100fa98f8;
  FUN_1000037f0(&DAT_100fa98f8,&DAT_100c26ea8);
  p_Var8 = original;
  Swift::_SetStorage::_resize(this,original,capacity,false);
  if (*(long *)(original + 0x10) == 0) {
LAB_100073014:
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
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100073048);
          (*pcVar7)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar15) goto LAB_100073014;
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
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10007304c);
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



/* Address: 0x10007304c | FUN_10007304c */

void FUN_10007304c(long param_1)

{
  __int64 capacity;
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  bool bVar10;
  code *pcVar11;
  _SetStorage *this;
  __RawSetStorage *p_Var12;
  Hasher into;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  String *pSVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  long *unaff_x20;
  __RawSetStorage *original;
  ulong local_c0;
  undefined1 auStack_a8 [72];
  
  original = (__RawSetStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_SetStorage *)&DAT_100fa9930;
  FUN_1000037f0(&DAT_100fa9930,&DAT_100c26ed8);
  p_Var12 = original;
  Swift::_SetStorage::_resize(this,original,capacity,false);
  if (*(long *)(original + 0x10) == 0) {
LAB_1000732b0:
    _swift_release(original);
    *unaff_x20 = (long)p_Var12;
    return;
  }
  uVar19 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  local_c0 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    local_c0 = ~(-1L << (uVar19 & 0x3f));
  }
  local_c0 = local_c0 & *(ulong *)(original + 0x38);
  lVar16 = 0;
  do {
    if (local_c0 == 0) {
      do {
        lVar21 = lVar16 + 1;
        if (SCARRY8(lVar16,1)) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x1000732e8);
          (*pcVar11)();
        }
        if ((long)(uVar19 + 0x3f >> 6) <= lVar21) goto LAB_1000732b0;
        local_c0 = *(ulong *)(original + 0x38 + lVar21 * 8);
        lVar16 = lVar16 + 1;
      } while (local_c0 == 0);
      uVar15 = (local_c0 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_c0 & 0x5555555555555555) << 1;
      uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
      uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
      uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
      uVar15 = uVar15 >> 0x20 | uVar15 << 0x20;
      local_c0 = local_c0 - 1 & local_c0;
    }
    else {
      uVar15 = (local_c0 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_c0 & 0x5555555555555555) << 1;
      uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
      uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
      uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
      uVar15 = uVar15 >> 0x20 | uVar15 << 0x20;
      local_c0 = local_c0 - 1 & local_c0;
      lVar21 = lVar16;
    }
    pSVar17 = (String *)(*(long *)(original + 0x30) + (LZCOUNT(uVar15) | lVar21 << 6) * 0x30);
    pcVar1 = pSVar17->str;
    pvVar4 = pSVar17->bridgeObject;
    SVar7 = *pSVar17;
    pcVar2 = pSVar17[1].str;
    pvVar5 = pSVar17[1].bridgeObject;
    SVar8 = pSVar17[1];
    pcVar3 = pSVar17[2].str;
    pvVar6 = pSVar17[2].bridgeObject;
    SVar9 = pSVar17[2];
    Swift::Hasher::init(*(__int64 *)(p_Var12 + 0x28));
    _swift_bridgeObjectRetain(pvVar4);
    _swift_bridgeObjectRetain(pvVar5);
    _swift_bridgeObjectRetain(pvVar6);
    Swift::String::hash((Hasher)auStack_a8,SVar7);
    Swift::String::hash((Hasher)auStack_a8,SVar8);
    into.unknown = auStack_a8;
    Swift::String::hash(into,SVar9);
    uVar13 = Swift::Hasher::_finalize(into);
    uVar20 = -1L << ((ulong)(byte)p_Var12[0x20] & 0x3f);
    uVar13 = uVar13 & (uVar20 ^ 0xffffffffffffffff);
    uVar18 = uVar13 >> 6;
    uVar15 = -1L << (uVar13 & 0x3f) & (*(ulong *)(p_Var12 + uVar18 * 8 + 0x38) ^ 0xffffffffffffffff)
    ;
    if (uVar15 == 0) {
      bVar10 = false;
      uVar15 = 0x3f - uVar20 >> 6;
      do {
        uVar13 = uVar18 + 1;
        if ((uVar13 == uVar15) && (bVar10)) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x1000732ec);
          (*pcVar11)();
        }
        uVar18 = 0;
        if (uVar13 != uVar15) {
          uVar18 = uVar13;
        }
        bVar10 = (bool)(uVar13 == uVar15 | bVar10);
      } while (*(ulong *)(p_Var12 + uVar18 * 8 + 0x38) == 0xffffffffffffffff);
      uVar15 = ~*(ulong *)(p_Var12 + uVar18 * 8 + 0x38);
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
      uVar15 = LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar18 = uVar15 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var12 + uVar18 + 0x38) =
         1L << (uVar15 & 0x3f) | *(ulong *)(p_Var12 + uVar18 + 0x38);
    puVar14 = (undefined8 *)(*(long *)(p_Var12 + 0x30) + uVar15 * 0x30);
    *puVar14 = pcVar1;
    puVar14[1] = pvVar4;
    puVar14[2] = pcVar2;
    puVar14[3] = pvVar5;
    puVar14[4] = pcVar3;
    puVar14[5] = pvVar6;
    *(long *)(p_Var12 + 0x10) = *(long *)(p_Var12 + 0x10) + 1;
    lVar16 = lVar21;
  } while( true );
}



/* Address: 0x1000732ec | FUN_1000732ec */

void FUN_1000732ec(long param_1)

{
  __int64 capacity;
  bool bVar1;
  code *pcVar2;
  _SetStorage *this;
  __RawSetStorage *p_Var3;
  ulong uVar4;
  Hasher HVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  __RawSetStorage *original;
  __uint64 _Var11;
  long lVar12;
  ulong uVar13;
  
  original = (__RawSetStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_SetStorage *)&DAT_100fa9888;
  FUN_1000037f0(&DAT_100fa9888,&DAT_100c26e68);
  HVar5.unknown = (undefined *)0x0;
  p_Var3 = original;
  Swift::_SetStorage::_resize(this,original,capacity,false);
  if (*(long *)(original + 0x10) == 0) {
LAB_1000734ac:
    _swift_release(original);
    *unaff_x20 = (long)p_Var3;
    return;
  }
  uVar9 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar13 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar13 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar13 = uVar13 & *(ulong *)(original + 0x38);
  lVar7 = 0;
  do {
    if (uVar13 == 0) {
      do {
        lVar12 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1000734d8);
          (*pcVar2)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar12) goto LAB_1000734ac;
        uVar13 = *(ulong *)(original + 0x38 + lVar12 * 8);
        lVar7 = lVar7 + 1;
      } while (uVar13 == 0);
      uVar6 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar13 = uVar13 - 1 & uVar13;
    }
    else {
      uVar6 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar13 = uVar13 - 1 & uVar13;
      lVar12 = lVar7;
    }
    _Var11 = *(__uint64 *)(*(long *)(original + 0x30) + (LZCOUNT(uVar6) | lVar12 << 6) * 8);
    uVar4 = Swift::Hasher::_hash(*(__int64 *)(p_Var3 + 0x28),_Var11,HVar5);
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
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1000734dc);
          (*pcVar2)();
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
    *(__uint64 *)(*(long *)(p_Var3 + 0x30) + uVar6 * 8) = _Var11;
    *(long *)(p_Var3 + 0x10) = *(long *)(p_Var3 + 0x10) + 1;
    lVar7 = lVar12;
  } while( true );
}



/* Address: 0x1000734dc | FUN_1000734dc */

void FUN_1000734dc(void)

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
  
  this = (_SetStorage *)&DAT_100fa98f8;
  FUN_1000037f0(&DAT_100fa98f8,&DAT_100c26ea8);
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
    if (uVar7 == 0) goto LAB_1000735b8;
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
LAB_1000735b8:
        do {
          lVar10 = lVar11 + 1;
          if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100073638);
            (*pcVar5)();
          }
          if ((long)(uVar8 + 0x3f >> 6) <= lVar10) goto LAB_100073610;
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
LAB_100073610:
  _swift_release(original);
  *unaff_x20 = (long)p_Var6;
  return;
}



/* Address: 0x100073638 | FUN_100073638 */

void FUN_100073638(void)

{
  __RawSetStorage *p_Var1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  _SetStorage *this;
  __RawSetStorage *p_Var10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long *unaff_x20;
  __RawSetStorage *original;
  long lVar15;
  
  this = (_SetStorage *)&DAT_100fa9930;
  FUN_1000037f0(&DAT_100fa9930,&DAT_100c26ed8);
  original = (__RawSetStorage *)*unaff_x20;
  p_Var10 = original;
  Swift::_SetStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x38;
    uVar11 = (1L << ((ulong)(byte)p_Var10[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var10 != original || p_Var1 + uVar11 * 8 <= p_Var10 + 0x38) {
      _memmove(p_Var10 + 0x38,p_Var1,uVar11 << 3);
    }
    lVar15 = 0;
    *(undefined8 *)(p_Var10 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar12 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar11 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar11 = ~(-1L << (uVar12 & 0x3f));
    }
    uVar11 = uVar11 & *(ulong *)(original + 0x38);
    if (uVar11 == 0) goto LAB_100073718;
    do {
      uVar13 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
      while( true ) {
        lVar14 = (LZCOUNT(uVar13) | lVar15 << 6) * 0x30;
        puVar2 = (undefined8 *)(*(long *)(original + 0x30) + lVar14);
        uVar6 = puVar2[1];
        uVar4 = puVar2[2];
        uVar7 = puVar2[3];
        uVar5 = puVar2[4];
        uVar8 = puVar2[5];
        puVar3 = (undefined8 *)(*(long *)(p_Var10 + 0x30) + lVar14);
        *puVar3 = *puVar2;
        puVar3[1] = uVar6;
        puVar3[2] = uVar4;
        puVar3[3] = uVar7;
        puVar3[4] = uVar5;
        puVar3[5] = uVar8;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar7);
        _swift_bridgeObjectRetain(uVar8);
        if (uVar11 != 0) break;
LAB_100073718:
        do {
          lVar14 = lVar15 + 1;
          if (SCARRY8(lVar15,1)) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x1000737c0);
            (*pcVar9)();
          }
          if ((long)(uVar12 + 0x3f >> 6) <= lVar14) goto LAB_100073794;
          uVar11 = *(ulong *)(p_Var1 + lVar14 * 8);
          lVar15 = lVar15 + 1;
        } while (uVar11 == 0);
        uVar13 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
        uVar11 = uVar11 - 1 & uVar11;
        lVar15 = lVar14;
      }
    } while( true );
  }
LAB_100073794:
  _swift_release(original);
  *unaff_x20 = (long)p_Var10;
  return;
}



/* Address: 0x1000737c0 | FUN_1000737c0 */

void FUN_1000737c0(void)

{
  __RawSetStorage *p_Var1;
  code *pcVar2;
  _SetStorage *this;
  __RawSetStorage *p_Var3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  __RawSetStorage *original;
  
  this = (_SetStorage *)&DAT_100fa9888;
  FUN_1000037f0(&DAT_100fa9888,&DAT_100c26e68);
  original = (__RawSetStorage *)*unaff_x20;
  p_Var3 = original;
  Swift::_SetStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x38;
    uVar4 = (1L << ((ulong)(byte)p_Var3[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var3 != original || p_Var1 + uVar4 * 8 <= p_Var3 + 0x38) {
      _memmove(p_Var3 + 0x38,p_Var1,uVar4 << 3);
    }
    lVar5 = 0;
    *(undefined8 *)(p_Var3 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar6 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar4 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar4 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar4 = uVar4 & *(ulong *)(original + 0x38);
    do {
      lVar7 = lVar5;
      if (uVar4 == 0) {
        do {
          lVar5 = lVar7 + 1;
          if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100073900);
            (*pcVar2)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar5) goto LAB_1000738e0;
          uVar4 = *(ulong *)(p_Var1 + lVar5 * 8);
          lVar7 = lVar7 + 1;
        } while (uVar4 == 0);
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 * 0x40;
      }
      else {
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 << 6;
      }
      *(undefined8 *)(*(long *)(p_Var3 + 0x30) + uVar8 * 8) =
           *(undefined8 *)(*(long *)(original + 0x30) + uVar8 * 8);
    } while( true );
  }
LAB_1000738e0:
  _swift_release(original);
  *unaff_x20 = (long)p_Var3;
  return;
}



/* Address: 0x100073900 | FUN_100073900 */

void FUN_100073900(long param_1)

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
  this = (_SetStorage *)&DAT_100fa98f8;
  FUN_1000037f0(&DAT_100fa98f8,&DAT_100c26ea8);
  p_Var8 = original;
  Swift::_SetStorage::_resize(this,original,capacity,true);
  if (*(long *)(original + 0x10) == 0) {
LAB_100073b30:
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
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100073b60);
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
          goto LAB_100073b30;
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
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100073b64);
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



/* Address: 0x100073b64 | FUN_100073b64 */

void FUN_100073b64(long param_1)

{
  __int64 capacity;
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  bool bVar10;
  code *pcVar11;
  _SetStorage *this;
  __RawSetStorage *p_Var12;
  Hasher into;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  String *pSVar17;
  ulong uVar18;
  __RawSetStorage *p_Var19;
  ulong uVar20;
  ulong uVar21;
  long *unaff_x20;
  long lVar22;
  __RawSetStorage *original;
  ulong local_c0;
  undefined1 auStack_a8 [72];
  
  original = (__RawSetStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_SetStorage *)&DAT_100fa9930;
  FUN_1000037f0(&DAT_100fa9930,&DAT_100c26ed8);
  p_Var12 = original;
  Swift::_SetStorage::_resize(this,original,capacity,true);
  if (*(long *)(original + 0x10) == 0) {
LAB_100073de0:
    _swift_release(original);
    *unaff_x20 = (long)p_Var12;
    return;
  }
  p_Var19 = original + 0x38;
  uVar20 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  local_c0 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    local_c0 = ~(-1L << (uVar20 & 0x3f));
  }
  local_c0 = local_c0 & *(ulong *)p_Var19;
  lVar16 = 0;
  do {
    if (local_c0 == 0) {
      do {
        lVar22 = lVar16 + 1;
        if (SCARRY8(lVar16,1)) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x100073e10);
          (*pcVar11)();
        }
        if ((long)(uVar20 + 0x3f >> 6) <= lVar22) {
          uVar20 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          if (((byte)original[0x20] & 0x3f) < 6) {
            *(long *)p_Var19 = -1L << (uVar20 & 0x3f);
          }
          else {
            _bzero(p_Var19,uVar20 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_100073de0;
        }
        local_c0 = *(ulong *)(p_Var19 + lVar22 * 8);
        lVar16 = lVar16 + 1;
      } while (local_c0 == 0);
      uVar15 = (local_c0 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_c0 & 0x5555555555555555) << 1;
      uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
      uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
      uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
      uVar15 = uVar15 >> 0x20 | uVar15 << 0x20;
      local_c0 = local_c0 - 1 & local_c0;
    }
    else {
      uVar15 = (local_c0 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_c0 & 0x5555555555555555) << 1;
      uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
      uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
      uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
      uVar15 = uVar15 >> 0x20 | uVar15 << 0x20;
      local_c0 = local_c0 - 1 & local_c0;
      lVar22 = lVar16;
    }
    pSVar17 = (String *)(*(long *)(original + 0x30) + (LZCOUNT(uVar15) | lVar22 << 6) * 0x30);
    pcVar1 = pSVar17->str;
    pvVar4 = pSVar17->bridgeObject;
    SVar7 = *pSVar17;
    pcVar2 = pSVar17[1].str;
    pvVar5 = pSVar17[1].bridgeObject;
    SVar8 = pSVar17[1];
    pcVar3 = pSVar17[2].str;
    pvVar6 = pSVar17[2].bridgeObject;
    SVar9 = pSVar17[2];
    Swift::Hasher::init(*(__int64 *)(p_Var12 + 0x28));
    Swift::String::hash((Hasher)auStack_a8,SVar7);
    Swift::String::hash((Hasher)auStack_a8,SVar8);
    into.unknown = auStack_a8;
    Swift::String::hash(into,SVar9);
    uVar13 = Swift::Hasher::_finalize(into);
    uVar21 = -1L << ((ulong)(byte)p_Var12[0x20] & 0x3f);
    uVar13 = uVar13 & (uVar21 ^ 0xffffffffffffffff);
    uVar18 = uVar13 >> 6;
    uVar15 = -1L << (uVar13 & 0x3f) & (*(ulong *)(p_Var12 + uVar18 * 8 + 0x38) ^ 0xffffffffffffffff)
    ;
    if (uVar15 == 0) {
      bVar10 = false;
      uVar15 = 0x3f - uVar21 >> 6;
      do {
        uVar13 = uVar18 + 1;
        if ((uVar13 == uVar15) && (bVar10)) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x100073e14);
          (*pcVar11)();
        }
        uVar18 = 0;
        if (uVar13 != uVar15) {
          uVar18 = uVar13;
        }
        bVar10 = (bool)(uVar13 == uVar15 | bVar10);
      } while (*(ulong *)(p_Var12 + uVar18 * 8 + 0x38) == 0xffffffffffffffff);
      uVar15 = ~*(ulong *)(p_Var12 + uVar18 * 8 + 0x38);
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
      uVar15 = LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar18 = uVar15 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var12 + uVar18 + 0x38) =
         1L << (uVar15 & 0x3f) | *(ulong *)(p_Var12 + uVar18 + 0x38);
    puVar14 = (undefined8 *)(*(long *)(p_Var12 + 0x30) + uVar15 * 0x30);
    *puVar14 = pcVar1;
    puVar14[1] = pvVar4;
    puVar14[2] = pcVar2;
    puVar14[3] = pvVar5;
    puVar14[4] = pcVar3;
    puVar14[5] = pvVar6;
    *(long *)(p_Var12 + 0x10) = *(long *)(p_Var12 + 0x10) + 1;
    lVar16 = lVar22;
  } while( true );
}



/* Address: 0x100073e14 | FUN_100073e14 */

void FUN_100073e14(long param_1)

{
  __int64 capacity;
  bool bVar1;
  code *pcVar2;
  _SetStorage *this;
  __RawSetStorage *p_Var3;
  ulong uVar4;
  Hasher HVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  ulong uVar11;
  ulong uVar12;
  long *unaff_x20;
  __RawSetStorage *original;
  __RawSetStorage *p_Var13;
  __uint64 _Var14;
  long lVar15;
  ulong uVar16;
  
  original = (__RawSetStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_SetStorage *)&DAT_100fa9888;
  FUN_1000037f0(&DAT_100fa9888,&DAT_100c26e68);
  HVar5.unknown = &DAT_00000001;
  p_Var3 = original;
  Swift::_SetStorage::_resize(this,original,capacity,true);
  if (*(long *)(original + 0x10) == 0) {
LAB_100074004:
    _swift_release(original);
    *unaff_x20 = (long)p_Var3;
    return;
  }
  p_Var13 = original + 0x38;
  bVar10 = (byte)original[0x20] & 0x3f;
  uVar9 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar12 = -1L << (uVar9 & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if (bVar10 < 6) {
    uVar16 = ~uVar12;
  }
  uVar16 = uVar16 & *(ulong *)p_Var13;
  uVar9 = uVar9 + 0x3f >> 6;
  lVar7 = 0;
  do {
    if (uVar16 == 0) {
      do {
        lVar15 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100074034);
          (*pcVar2)();
        }
        if ((long)uVar9 <= lVar15) {
          if (bVar10 < 6) {
            *(ulong *)p_Var13 = uVar12;
          }
          else {
            _bzero(p_Var13,uVar9 << 3);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_100074004;
        }
        uVar16 = *(ulong *)(p_Var13 + lVar15 * 8);
        lVar7 = lVar7 + 1;
      } while (uVar16 == 0);
      uVar6 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
    }
    else {
      uVar6 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
      lVar15 = lVar7;
    }
    _Var14 = *(__uint64 *)(*(long *)(original + 0x30) + (LZCOUNT(uVar6) | lVar15 << 6) * 8);
    uVar4 = Swift::Hasher::_hash(*(__int64 *)(p_Var3 + 0x28),_Var14,HVar5);
    uVar11 = -1L << ((ulong)(byte)p_Var3[0x20] & 0x3f);
    uVar4 = uVar4 & (uVar11 ^ 0xffffffffffffffff);
    uVar8 = uVar4 >> 6;
    uVar6 = -1L << (uVar4 & 0x3f) & (*(ulong *)(p_Var3 + uVar8 * 8 + 0x38) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar1 = false;
      uVar6 = 0x3f - uVar11 >> 6;
      do {
        uVar4 = uVar8 + 1;
        if ((uVar4 == uVar6) && (bVar1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100074038);
          (*pcVar2)();
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
    *(__uint64 *)(*(long *)(p_Var3 + 0x30) + uVar6 * 8) = _Var14;
    *(long *)(p_Var3 + 0x10) = *(long *)(p_Var3 + 0x10) + 1;
    lVar7 = lVar15;
  } while( true );
}



/* Address: 0x100074038 | FUN_100074038 */

undefined * FUN_100074038(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 != 0) {
    puVar1 = &DAT_100fa79c0;
    FUN_1000037f0(&DAT_100fa79c0,&DAT_100c26d00);
    _swift_allocObject();
    puVar2 = puVar1;
    _malloc_size();
    *(long *)(puVar1 + 0x10) = param_1;
    *(long *)(puVar1 + 0x18) = (long)puVar2 * 2 + -0x40;
  }
  return puVar1;
}



/* Address: 0x1000740a8 | FUN_1000740a8 */

ulong FUN_1000740a8(ulong param_1,UTF8View param_2,ulong param_3)

{
  Index IVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = param_1 >> 0xe & 3;
  if (((param_3 >> 0x3c & 1) == 0) || (((ulong)param_2.unknown >> 0x3b & 1) != 0)) {
    IVar1 = Swift::String::UTF16View::index((Index)0xf,param_1 >> 0x10,(UTF16View)param_2.unknown);
    uVar2 = (long)IVar1.cmsgPointer.unknown + uVar3 * 0x10000 & 0xffffffffffff0000;
    if (uVar3 == 0) {
      uVar2 = (ulong)IVar1.cmsgPointer.unknown & 0xfffffffffffffffc | param_1 & 3;
    }
    uVar2 = uVar2 | 4;
  }
  else {
    IVar1 = Swift::String::UTF8View::_foreignIndex((Index)0xf,param_1 >> 0x10,param_2);
    uVar2 = (long)IVar1.cmsgPointer.unknown + uVar3 * 0x10000 & 0xffffffffffff0000;
    if (uVar3 == 0) {
      uVar2 = (ulong)IVar1.cmsgPointer.unknown & 0xfffffffffffffffc | param_1 & 3;
    }
    uVar2 = uVar2 | 8;
  }
  return uVar2;
}



/* Address: 0x100074120 | FUN_100074120 */

undefined1  [16]
FUN_100074120(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0xf;
  FUN_1000102ac(0xf,param_1,param_2);
  FUN_100074170();
  _swift_bridgeObjectRelease(param_4);
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = uVar1;
  return auVar2;
}



/* Address: 0x100074170 | FUN_100074170 */

String FUN_100074170(Index param_1,Index param_2,_StringObject param_3,ulong param_4)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  UnsafeBufferPointer<__int8> UVar5;
  Index IVar6;
  ulong uVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  undefined *local_68;
  ulong uStack_60;
  undefined8 local_50;
  
  if ((param_4 >> 0x3c & 1) != 0) {
    IVar6.cmsgPointer.unknown = param_1.cmsgPointer.unknown;
    ppuVar2 = (undefined **)
              Swift::Substring::UTF8View::distance
                        (param_1,param_2,(UTF8View)param_1.cmsgPointer.unknown);
    ppuVar3 = (undefined **)PTR___swiftEmptyArrayStorage_100eae0d8;
    if (ppuVar2 != (undefined **)0x0) {
      ppuVar3 = ppuVar2;
      FUN_100074038(ppuVar2,0);
      ppuVar4 = &local_68;
      IVar6.cmsgPointer.unknown = (UnsafeMutablePointer)(UnsafeMutablePointer)ppuVar2;
      FUN_1000742b4(ppuVar4,ppuVar3 + 4,ppuVar2,param_1.cmsgPointer.unknown,
                    param_2.cmsgPointer.unknown,param_3.unknown,param_4);
      _swift_bridgeObjectRetain(param_4);
      _swift_bridgeObjectRelease(local_50);
      if (ppuVar4 != ppuVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100074270);
        (*pcVar1)();
      }
    }
    SVar8.str = ppuVar3[2];
    SVar8.bridgeObject = (void *)IVar6.cmsgPointer.unknown;
    SVar8 = Swift::String::_uncheckedFromUTF8((UnsafeBufferPointer<__int8>)(ppuVar3 + 4),SVar8);
    _swift_release(ppuVar3);
    return SVar8;
  }
  uVar7 = (ulong)param_1.cmsgPointer.unknown >> 0x10;
  if ((param_4 >> 0x3d & 1) != 0) {
    uStack_60 = param_4 & 0xffffffffffffff;
    SVar10.str = (char *)(((ulong)param_2.cmsgPointer.unknown >> 0x10) - uVar7);
    SVar10.bridgeObject = param_3.unknown;
    local_68 = param_3.unknown;
    SVar8 = Swift::String::_uncheckedFromUTF8((undefined *)((long)&local_68 + uVar7),SVar10);
    return SVar8;
  }
  if (((ulong)param_3.unknown >> 0x3c & 1) == 0) {
    UVar5 = Swift::_StringObject::get_sharedUTF8(param_3);
    if (UVar5.unknown == (undefined *)0x0) {
      UVar5.unknown = (undefined *)0x0;
      goto LAB_1000741a8;
    }
  }
  else {
    UVar5.unknown = (undefined *)((param_4 & 0xfffffffffffffff) + 0x20);
  }
  UVar5.unknown = UVar5.unknown + uVar7;
LAB_1000741a8:
  SVar9.str = (char *)(((ulong)param_2.cmsgPointer.unknown >> 0x10) - uVar7);
  SVar9.bridgeObject = param_3.unknown;
  SVar8 = Swift::String::_uncheckedFromUTF8(UVar5,SVar9);
  return SVar8;
}



/* Address: 0x1000742b4 | FUN_1000742b4 */

long FUN_1000742b4(undefined8 *param_1,__uint8 *param_2,long param_3,undefined *param_4,
                  ulong param_5,UTF8View param_6,ulong param_7)

{
  ulong uVar1;
  code *pcVar2;
  __uint8 _Var3;
  Index IVar4;
  Index position;
  UnsafeBufferPointer<__int8> UVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined *local_70;
  ulong uStack_68;
  
  IVar4.cmsgPointer.unknown = (UnsafeMutablePointer)(UnsafeMutablePointer)param_4;
  if (param_2 != (__uint8 *)0x0) {
    lVar7 = param_3;
    if (param_3 == 0) goto LAB_100074308;
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1000744ac);
      (*pcVar2)();
    }
    uVar11 = param_5 >> 0xe;
    if ((ulong)param_4 >> 0xe != uVar11) {
      uVar6 = (uint)((ulong)param_6.unknown >> 0x3b) & 1;
      if ((param_7 & 0x1000000000000000) == 0) {
        uVar6 = 1;
      }
      uVar9 = 4L << uVar6;
      uVar1 = (ulong)param_6.unknown & 0xffffffffffff;
      if ((param_7 & 0x2000000000000000) != 0) {
        uVar1 = param_7 >> 0x38 & 0xf;
      }
      lVar10 = 1;
      do {
        uVar8 = (ulong)IVar4.cmsgPointer.unknown & 0xc;
        position.cmsgPointer.unknown = IVar4.cmsgPointer.unknown;
        if (uVar8 == uVar9) {
          FUN_1000740a8(IVar4.cmsgPointer.unknown,param_6.unknown,param_7);
        }
        if (((ulong)position.cmsgPointer.unknown >> 0xe < (ulong)param_4 >> 0xe) ||
           (uVar11 <= (ulong)position.cmsgPointer.unknown >> 0xe)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1000744a4);
          (*pcVar2)();
        }
        if ((param_7 >> 0x3c & 1) == 0) {
          if ((param_7 >> 0x3d & 1) != 0) {
            local_70 = param_6.unknown;
            uStack_68 = param_7 & 0xffffffffffffff;
            _Var3 = *(__uint8 *)((long)&local_70 + ((ulong)position.cmsgPointer.unknown >> 0x10));
            goto joined_r0x0001000743e4;
          }
          UVar5.unknown = (undefined *)((param_7 & 0xfffffffffffffff) + 0x20);
          if (((ulong)param_6.unknown >> 0x3c & 1) == 0) {
            UVar5 = Swift::_StringObject::get_sharedUTF8(param_6.unknown);
          }
          _Var3 = UVar5.unknown[(ulong)position.cmsgPointer.unknown >> 0x10];
          if (uVar8 == uVar9) goto LAB_100074418;
LAB_1000743e8:
          if ((param_7 >> 0x3c & 1) == 0) goto LAB_1000743ec;
LAB_100074430:
          if (uVar1 <= (ulong)IVar4.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1000744a8);
            (*pcVar2)();
          }
          IVar4 = Swift::String::UTF8View::_foreignIndex(IVar4,param_6);
        }
        else {
          _Var3 = Swift::String::UTF8View::_foreignSubscript(position,param_6);
joined_r0x0001000743e4:
          if (uVar8 != uVar9) goto LAB_1000743e8;
LAB_100074418:
          FUN_1000740a8(IVar4.cmsgPointer.unknown,param_6.unknown,param_7);
          if ((param_7 >> 0x3c & 1) != 0) goto LAB_100074430;
LAB_1000743ec:
          IVar4.cmsgPointer.unknown =
               (UnsafeMutablePointer)
               (((ulong)IVar4.cmsgPointer.unknown & 0xffffffffffff0000) + 0x10004);
        }
        *param_2 = _Var3;
        lVar7 = param_3;
        if ((param_3 == lVar10) ||
           (lVar7 = lVar10, uVar11 == (ulong)IVar4.cmsgPointer.unknown >> 0xe)) goto LAB_100074308;
        lVar10 = lVar10 + 1;
        param_2 = param_2 + 1;
      } while( true );
    }
  }
  lVar7 = 0;
LAB_100074308:
  *param_1 = param_4;
  param_1[1] = param_5;
  param_1[2] = param_6.unknown;
  param_1[3] = param_7;
  param_1[4] = IVar4.cmsgPointer.unknown;
  return lVar7;
}



/* Address: 0x1000744ac | FUN_1000744ac */

void FUN_1000744ac(void)

{
  FUN_1000744d4();
  return;
}



/* Address: 0x1000744c0 | FUN_1000744c0 */

void FUN_1000744c0(void)

{
  FUN_1000744d4();
  return;
}



/* Address: 0x1000744d4 | FUN_1000744d4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined *
FUN_1000744d4(undefined8 *param_1,long param_2,_ArrayBuffer param_3,undefined8 param_4,
             undefined8 param_5)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  undefined8 uVar3;
  __int64 _Var4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  
  if ((ulong)param_3.unknown >> 0x3e == 0) {
    lVar6 = *(long *)((param_3.unknown & 0xffffffffffffff8U) + 0x10);
  }
  else {
    _Var1.unknown = param_3.unknown & 0xffffffffffffff8U;
    if (((ulong)param_3.unknown & 0x8000000000000000) != 0) {
      _Var1.unknown = param_3.unknown;
    }
    lVar6 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (lVar6 != 0) {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100074714);
      (*pcVar2)();
    }
    if ((ulong)param_3.unknown >> 0x3e == 0) {
      lVar6 = *(long *)(((ulong)param_3.unknown & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100074708);
        (*pcVar2)();
      }
      uVar3 = 0;
      FUN_10000ec2c(0,param_4,param_5);
      _swift_arrayInitWithCopy
                (param_1,((ulong)param_3.unknown & 0xffffffffffffff8) + 0x20,lVar6,uVar3);
    }
    else {
      _Var1.unknown = param_3.unknown & 0xffffffffffffff8;
      if (((ulong)param_3.unknown & 0x8000000000000000) != 0) {
        _Var1.unknown = param_3.unknown;
      }
      _Var4 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
      if (param_2 < _Var4) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10007470c);
        (*pcVar2)();
      }
      if (lVar6 < 1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100074710);
        (*pcVar2)();
      }
      if (((ulong)param_3.unknown & 0xc000000000000001) == 0) {
        *param_1 = *(undefined8 *)(param_3.unknown + 0x20);
        uVar10 = lVar6 - 1;
        if (uVar10 != 0) {
          uVar8 = uVar10 & 7;
          if (lVar6 - 2U < 7) {
            lVar6 = 1;
          }
          else {
            uVar10 = uVar10 & 0xfffffffffffffff8;
            puVar9 = (undefined8 *)(param_3.unknown + 0x30);
            lVar6 = 1;
            do {
              param_1[1] = puVar9[-1];
              param_1[2] = *puVar9;
              param_1[3] = puVar9[1];
              param_1[4] = puVar9[2];
              param_1[5] = puVar9[3];
              param_1[6] = puVar9[4];
              param_1[7] = puVar9[5];
              param_1 = param_1 + 8;
              *param_1 = puVar9[6];
              lVar6 = lVar6 + 8;
              puVar9 = puVar9 + 8;
              uVar10 = uVar10 - 8;
            } while (uVar10 != 0);
          }
          if (uVar8 != 0) {
            puVar9 = (undefined8 *)(param_3.unknown + lVar6 * 8 + 0x20);
            do {
              param_1 = param_1 + 1;
              *param_1 = *puVar9;
              uVar8 = uVar8 - 1;
              puVar9 = puVar9 + 1;
            } while (uVar8 != 0);
          }
        }
      }
      else {
        lVar7 = 0;
        do {
          lVar5 = lVar7;
          Swift::_ArrayBuffer::__getElementSlowPath(lVar7,param_3);
          param_1[lVar7] = lVar5;
          lVar7 = lVar7 + 1;
        } while (lVar6 != lVar7);
      }
    }
  }
  return param_3.unknown;
}



/* Address: 0x100074714 | FUN_100074714 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_100074714(undefined8 *param_1,long param_2,_ArrayBuffer param_3)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  undefined8 uVar3;
  __int64 _Var4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  
  if ((ulong)param_3.unknown >> 0x3e == 0) {
    lVar6 = *(long *)((param_3.unknown & 0xffffffffffffff8U) + 0x10);
  }
  else {
    _Var1.unknown = param_3.unknown & 0xffffffffffffff8U;
    if (((ulong)param_3.unknown & 0x8000000000000000) != 0) {
      _Var1.unknown = param_3.unknown;
    }
    lVar6 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (lVar6 != 0) {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10007493c);
      (*pcVar2)();
    }
    if ((ulong)param_3.unknown >> 0x3e == 0) {
      lVar6 = *(long *)(((ulong)param_3.unknown & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100074930);
        (*pcVar2)();
      }
      uVar3 = 0;
      FUN_1003214a8(0);
      _swift_arrayInitWithCopy
                (param_1,((ulong)param_3.unknown & 0xffffffffffffff8) + 0x20,lVar6,uVar3);
    }
    else {
      _Var1.unknown = param_3.unknown & 0xffffffffffffff8;
      if (((ulong)param_3.unknown & 0x8000000000000000) != 0) {
        _Var1.unknown = param_3.unknown;
      }
      _Var4 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
      if (param_2 < _Var4) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100074934);
        (*pcVar2)();
      }
      if (lVar6 < 1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100074938);
        (*pcVar2)();
      }
      if (((ulong)param_3.unknown & 0xc000000000000001) == 0) {
        *param_1 = *(undefined8 *)(param_3.unknown + 0x20);
        uVar10 = lVar6 - 1;
        if (uVar10 != 0) {
          uVar8 = uVar10 & 7;
          if (lVar6 - 2U < 7) {
            lVar6 = 1;
          }
          else {
            uVar10 = uVar10 & 0xfffffffffffffff8;
            puVar9 = (undefined8 *)(param_3.unknown + 0x30);
            lVar6 = 1;
            do {
              param_1[1] = puVar9[-1];
              param_1[2] = *puVar9;
              param_1[3] = puVar9[1];
              param_1[4] = puVar9[2];
              param_1[5] = puVar9[3];
              param_1[6] = puVar9[4];
              param_1[7] = puVar9[5];
              param_1 = param_1 + 8;
              *param_1 = puVar9[6];
              lVar6 = lVar6 + 8;
              puVar9 = puVar9 + 8;
              uVar10 = uVar10 - 8;
            } while (uVar10 != 0);
          }
          if (uVar8 != 0) {
            puVar9 = (undefined8 *)(param_3.unknown + lVar6 * 8 + 0x20);
            do {
              param_1 = param_1 + 1;
              *param_1 = *puVar9;
              uVar8 = uVar8 - 1;
              puVar9 = puVar9 + 1;
            } while (uVar8 != 0);
          }
        }
      }
      else {
        lVar7 = 0;
        do {
          lVar5 = lVar7;
          Swift::_ArrayBuffer::__getElementSlowPath(lVar7,param_3);
          param_1[lVar7] = lVar5;
          lVar7 = lVar7 + 1;
        } while (lVar6 != lVar7);
      }
    }
  }
  return param_3.unknown;
}



/* Address: 0x10007493c | FUN_10007493c */

void FUN_10007493c(undefined8 param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  iVar1 = *param_2;
  plVar2 = (long *)(ulong)(uint)param_2[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1000749a0;
                    /* WARNING: Could not recover jumptable at 0x00010007499c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_2))(plVar2,param_1);
  return;
}



/* Address: 0x1000749a0 | FUN_1000749a0 */

void FUN_1000749a0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001000749dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Address: 0x1000749e0 | FUN_1000749e0 */

Set<undefined> FUN_1000749e0(long param_1)

{
  long minimumCapacity;
  undefined8 *puVar1;
  undefined1 auStack_c8 [8];
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  minimumCapacity = *(long *)(param_1 + 0x10);
  FUN_1000767d8();
  local_98 = (undefined *)Swift::Set::init(minimumCapacity);
  if (minimumCapacity != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x20);
    do {
      uStack_88 = puVar1[1];
      local_90 = *puVar1;
      uStack_78 = puVar1[3];
      uStack_80 = puVar1[2];
      uStack_68 = puVar1[5];
      local_70 = puVar1[4];
      local_60 = local_90;
      uStack_58 = uStack_88;
      uStack_50 = uStack_80;
      uStack_48 = uStack_78;
      local_40 = local_70;
      uStack_38 = uStack_68;
      FUN_10000ca28(&local_60,auStack_c8);
      FUN_10000ca28(&uStack_50,auStack_c8);
      FUN_10000ca28(&local_40,auStack_c8);
      FUN_100072680(auStack_c8,&local_90);
      _swift_bridgeObjectRelease(local_c0);
      _swift_bridgeObjectRelease(local_b0);
      _swift_bridgeObjectRelease(local_a0);
      puVar1 = puVar1 + 6;
      minimumCapacity = minimumCapacity + -1;
    } while (minimumCapacity != 0);
  }
  return (Set<undefined>)local_98;
}



/* Address: 0x100074aa8 | FUN_100074aa8 */

Set<undefined> FUN_100074aa8(long param_1)

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
      FUN_10007253c(auStack_58,uVar1,uVar2);
      _swift_bridgeObjectRelease(local_50);
      puVar3 = puVar3 + 2;
      minimumCapacity = minimumCapacity + -1;
    } while (minimumCapacity != 0);
  }
  return (Set<undefined>)local_48;
}



/* Address: 0x100074b3c | FUN_100074b3c */

Set<undefined> FUN_100074b3c(long param_1)

{
  long minimumCapacity;
  undefined8 *puVar1;
  undefined1 auStack_40 [8];
  undefined *local_38;
  
  minimumCapacity = *(long *)(param_1 + 0x10);
  local_38 = (undefined *)Swift::Set::init(minimumCapacity);
  if (minimumCapacity != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x20);
    do {
      FUN_1000728d4(auStack_40,*puVar1);
      minimumCapacity = minimumCapacity + -1;
      puVar1 = puVar1 + 1;
    } while (minimumCapacity != 0);
  }
  return (Set<undefined>)local_38;
}



/* Address: 0x100074bac | FUN_100074bac */

undefined * FUN_100074bac(void)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  void *pvVar8;
  long lVar9;
  String SVar10;
  long local_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  
  local_a0 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_100071854(0,9,0);
  lVar9 = 1;
  do {
    puVar3 = local_a0;
    local_a8 = lVar9;
    SVar10 = Swift::CustomStringConvertible::get_description();
    pvVar8 = SVar10.bridgeObject;
    pcVar5 = SVar10.str;
    if (((ulong)pvVar8 >> 0x3d & 1) == 0) {
      if (((ulong)pcVar5 & 0xffffffffffff) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100074d70);
        (*pcVar4)();
      }
      if (((ulong)pcVar5 >> 0x3c & 1) == 0) {
        FUN_100074120(pcVar5,pvVar8);
        _swift_bridgeObjectRelease(pvVar8);
      }
    }
    else if (((ulong)pvVar8 & 0xf00000000000000) == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100074d74);
      (*pcVar4)();
    }
    pcVar5 = SVar10.str;
    FUN_1001e94d4(pcVar5,SVar10.bridgeObject);
    _swift_bridgeObjectRelease(SVar10.bridgeObject);
    puVar6 = &DAT_100c26cd8;
    _swift_getKeyPath(&DAT_100c26cd8);
    puVar7 = &DAT_100fa64a0;
    FUN_100003a00(&DAT_100fa64a0,FUN_1000038c0,&TargetProtocolConformanceDescriptor_100c227f0);
    FUN_1002cbe78(&local_98,puVar6,puVar7);
    FUN_1000037f0(&DAT_100fa9780,&DAT_100c26cd0);
    FUN_1002ca7e0(&local_a8);
    _swift_release(local_98);
    _swift_release(local_90);
    _swift_release(local_88);
    _swift_release(local_78);
    _swift_release(local_68);
    lVar2 = local_a8;
    uVar1 = *(ulong *)(puVar3 + 0x10);
    local_a0 = puVar3;
    if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar1) {
      FUN_100071854(1 < *(ulong *)(puVar3 + 0x18),uVar1 + 1,1);
    }
    *(ulong *)(local_a0 + 0x10) = uVar1 + 1;
    *(char **)(local_a0 + uVar1 * 0x10 + 0x20) = pcVar5;
    *(long *)(local_a0 + uVar1 * 0x10 + 0x28) = lVar2;
    lVar9 = lVar9 + 1;
  } while (lVar9 != 10);
  return local_a0;
}



/* Address: 0x100074d74 | FUN_100074d74 */

void FUN_100074d74(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x100074d98 | FUN_100074d98 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100074d98(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x100074dc4 | FUN_100074dc4 */

void FUN_100074dc4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10006e0dc(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18))
  ;
  return;
}



/* Address: 0x100074dcc | FUN_100074dcc */

undefined * FUN_100074dcc(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong local_120;
  undefined *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 local_70;
  
  FUN_100074bac();
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 == 0) {
    _swift_bridgeObjectRelease(param_1);
    puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    local_118 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_100071854(0,lVar6,0);
    puVar7 = (ulong *)(param_1 + 0x28);
    do {
      puVar3 = local_118;
      uVar1 = puVar7[-1];
      uVar8 = *puVar7;
      puVar4 = &DAT_100c26ca8;
      _swift_getKeyPath(&DAT_100c26ca8);
      puVar5 = &DAT_100fa64a0;
      FUN_100003a00(&DAT_100fa64a0,FUN_1000038c0,&TargetProtocolConformanceDescriptor_100c227f0);
      FUN_1002cbe78(&local_110,puVar4,puVar5);
      puVar4 = &DAT_100fa9780;
      FUN_1000037f0(&DAT_100fa9780,&DAT_100c26cd0);
      FUN_1002ca7e0(&local_120);
      _swift_release(local_110);
      _swift_release(local_108);
      _swift_release(local_100);
      _swift_release(local_f0);
      _swift_release(local_e0);
      uVar2 = local_120;
      _swift_getKeyPath(&DAT_100c26cd8);
      FUN_1002cbe78(&local_d8);
      FUN_1002ca7e0(&local_120,puVar4);
      _swift_release(local_d8);
      _swift_release(local_d0);
      _swift_release(local_c8);
      _swift_release(local_b8);
      _swift_release(local_a8);
      if (uVar2 != local_120) {
        _swift_getKeyPath(&DAT_100c26ca8);
        FUN_1002cbe78(&local_a0);
        FUN_1002ca7e0(&local_120,puVar4);
        _swift_release(local_a0);
        _swift_release(local_98);
        _swift_release(local_90);
        _swift_release(local_80);
        _swift_release(local_70);
        uVar8 = local_120 ^ uVar8;
      }
      uVar2 = *(ulong *)(puVar3 + 0x10);
      local_118 = puVar3;
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar2) {
        FUN_100071854(1 < *(ulong *)(puVar3 + 0x18),uVar2 + 1,1);
      }
      puVar4 = local_118;
      puVar7 = puVar7 + 2;
      *(ulong *)(local_118 + 0x10) = uVar2 + 1;
      *(ulong *)(local_118 + uVar2 * 0x10 + 0x20) = uVar1;
      *(ulong *)(local_118 + uVar2 * 0x10 + 0x28) = uVar8;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    _swift_bridgeObjectRelease(param_1);
  }
  return puVar4;
}



/* Address: 0x100075000 | FUN_100075000 */

undefined1 FUN_100075000(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined1 local_f0 [8];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 local_80;
  undefined1 local_78;
  undefined7 uStack_77;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  
  _swift_getKeyPath(&DAT_100c26c78);
  FUN_1002cb7e0(&local_e8);
  FUN_1000037f0(&DAT_100faa2f0,&DAT_100c25940);
  FUN_1002ca7e0(&local_78);
  _swift_release(local_e8);
  _swift_release(local_e0);
  _swift_release(local_d8);
  _swift_release(local_c8);
  _swift_release(local_b8);
  uVar1 = local_78;
  puVar2 = &DAT_100c26ca8;
  _swift_getKeyPath(&DAT_100c26ca8);
  puVar3 = &DAT_100fa64a0;
  FUN_100003a00(&DAT_100fa64a0,FUN_1000038c0,&TargetProtocolConformanceDescriptor_100c227f0);
  FUN_1002cbe78(&local_b0,puVar2,puVar3);
  puVar2 = &DAT_100fa9780;
  FUN_1000037f0(&DAT_100fa9780,&DAT_100c26cd0);
  FUN_1002ca7e0(&local_78);
  _swift_release(local_b0);
  _swift_release(local_a8);
  _swift_release(local_a0);
  _swift_release(local_90);
  _swift_release(local_80);
  _swift_getKeyPath(&DAT_100c26cd8);
  FUN_1002cbe78(&local_78);
  FUN_1002ca7e0(local_f0,puVar2);
  _swift_release(CONCAT71(uStack_77,local_78));
  _swift_release(local_70);
  _swift_release(local_68);
  _swift_release(local_58);
  _swift_release(local_48);
  return uVar1;
}



/* Address: 0x100075184 | FUN_100075184 */

void FUN_100075184(void)

{
  undefined1 local_11;
  
  local_11 = 1;
  FUN_1002ccc34(0xd000000000000015,0x8000000100d8ecb0,&local_11,
                PTR___type_metadata_for_Swift_Bool_100eac570);
  return;
}



/* Address: 0x1000751cc | FUN_1000751cc */

void FUN_1000751cc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_28;
  
  local_28 = 0x20000;
  uVar1 = 0;
  FUN_1000038c0(0);
  FUN_1002ccc34(param_1,0xd000000000000016,0x8000000100d8ec90,&local_28,uVar1);
  return;
}



/* Address: 0x100075228 | FUN_100075228 */

void FUN_100075228(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_28;
  
  local_28 = 0x100000;
  uVar1 = 0;
  FUN_1000038c0(0);
  FUN_1002ccc34(param_1,0xd000000000000017,0x8000000100d8ec70,&local_28,uVar1);
  return;
}



/* Address: 0x100075284 | FUN_100075284 */

code * FUN_100075284(undefined *param_1,undefined8 param_2)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *local_58;
  
  local_58 = param_1;
  _swift_bridgeObjectRetain();
  _swift_retain(param_2);
  puVar3 = &DAT_100fa8310;
  FUN_1000037f0(&DAT_100fa8310,&DAT_100c26d10);
  puVar5 = &DAT_100fa9830;
  FUN_100016eac(&DAT_100fa9830,&DAT_100fa8310,&DAT_100c26d10,
                PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548);
  ppuVar4 = &local_58;
  FUN_1003ba2bc(ppuVar4,puVar3,puVar5);
  FUN_10009efd8(0);
  _objc_allocWithZone();
  if ((ulong)param_1 >> 0x3e == 0) {
    _swift_retain_n(param_2,2);
    _swift_bridgeObjectRetain(param_1);
    puVar3 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      _Var1.unknown = param_1;
    }
    puVar5 = (undefined *)Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    _swift_retain_n(param_2,2);
    puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (puVar5 != (undefined *)0x0) {
      _swift_bridgeObjectRetain(param_1);
      _swift_retain(param_2);
      puVar3 = puVar5;
      FUN_100071138(puVar5,0);
      puVar6 = param_1;
      FUN_100074714(puVar3 + 0x20,puVar5);
      _swift_bridgeObjectRelease();
      if (puVar6 != puVar5) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100075454);
        (*pcVar2)();
      }
      goto LAB_100075344;
    }
  }
  _swift_retain(param_2);
LAB_100075344:
  puVar5 = &DAT_100eb2aa0;
  _swift_allocObject(&DAT_100eb2aa0,0x60,7);
  *(code **)(puVar5 + 0x10) = FUN_100076318;
  *(undefined8 *)(puVar5 + 0x18) = param_2;
  *(undefined **)(puVar5 + 0x20) = puVar3;
  *(code **)(puVar5 + 0x28) = FUN_100076320;
  *(undefined8 *)(puVar5 + 0x30) = param_2;
  *(code **)(puVar5 + 0x38) = FUN_100076328;
  *(undefined8 *)(puVar5 + 0x40) = param_2;
  puVar5[0x48] = (byte)ppuVar4 & 1;
  *(code **)(puVar5 + 0x50) = FUN_100076330;
  *(undefined8 *)(puVar5 + 0x58) = param_2;
  _swift_retain_n(param_2,4);
  pcVar2 = FUN_10007637c;
  FUN_1002364ac(FUN_10007637c,puVar5);
  _swift_release_n(param_2,4);
  _swift_bridgeObjectRelease(param_1);
  return pcVar2;
}



/* Address: 0x100075460 | FUN_100075460 */

void FUN_100075460(undefined8 param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long unaff_x20;
  undefined8 uVar11;
  long lVar12;
  long local_70;
  long local_68;
  
  lVar1 = _TtC5Paste18ItemCollectionView::viewModel;
  lVar12 = *(long *)(unaff_x20 + _TtC5Paste18ItemCollectionView::applier);
  if (lVar12 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100075718);
    (*pcVar2)();
  }
  uVar11 = *(undefined8 *)(unaff_x20 + _TtC5Paste18ItemCollectionView::viewModel);
  _swift_retain(uVar11);
  lVar3 = lVar12;
  _swift_retain();
  FUN_1003b8bfc();
  _swift_release(uVar11);
  puVar4 = &DAT_100faa390;
  local_70 = lVar3;
  FUN_1000037f0(&DAT_100faa390,&DAT_100c26c70);
  puVar5 = &DAT_100fa9820;
  FUN_100016eac(&DAT_100fa9820,&DAT_100faa390,&DAT_100c26c70,
                &TargetProtocolConformanceDescriptor_100c32ac0);
  FUN_1001b9698(&local_68,param_1,&local_70,puVar4,puVar5);
  _swift_release(lVar3);
  _swift_release(lVar12);
  if (local_68 != 0) {
    uVar11 = *(undefined8 *)(unaff_x20 + lVar1);
    puVar4 = &DAT_100eb2730;
    puVar6 = puVar4;
    _swift_allocObject(&DAT_100eb2730,0x18,7);
    _swift_unknownObjectWeakInit(puVar6 + 0x10);
    puVar7 = puVar4;
    _swift_allocObject(&DAT_100eb2730,0x18,7);
    _swift_unknownObjectWeakInit(puVar7 + 0x10);
    puVar5 = &DAT_100eb2820;
    _swift_allocObject(&DAT_100eb2820,0x20,7);
    *(undefined **)(puVar5 + 0x10) = puVar7;
    *(undefined8 *)(puVar5 + 0x18) = param_1;
    puVar8 = puVar4;
    _swift_allocObject(&DAT_100eb2730,0x18,7);
    _swift_unknownObjectWeakInit(puVar8 + 0x10);
    puVar7 = &DAT_100eb2848;
    _swift_allocObject(&DAT_100eb2848,0x20,7);
    *(undefined **)(puVar7 + 0x10) = puVar8;
    *(undefined8 *)(puVar7 + 0x18) = param_1;
    puVar9 = puVar4;
    _swift_allocObject(&DAT_100eb2730,0x18,7);
    _swift_unknownObjectWeakInit(puVar9 + 0x10);
    puVar8 = &DAT_100eb2870;
    _swift_allocObject(&DAT_100eb2870,0x20,7);
    *(undefined **)(puVar8 + 0x10) = puVar9;
    *(undefined8 *)(puVar8 + 0x18) = param_1;
    puVar10 = puVar4;
    _swift_allocObject(&DAT_100eb2730,0x18,7);
    _swift_unknownObjectWeakInit(puVar10 + 0x10);
    puVar9 = &DAT_100eb2898;
    _swift_allocObject(&DAT_100eb2898,0x20,7);
    *(undefined **)(puVar9 + 0x10) = puVar10;
    *(undefined8 *)(puVar9 + 0x18) = param_1;
    _swift_allocObject(&DAT_100eb2730,0x18,7);
    _swift_unknownObjectWeakInit(puVar4 + 0x10);
    FUN_10009e888(0);
    _objc_allocWithZone();
    _swift_retain(uVar11);
    FUN_10006f41c(local_68,uVar11,FUN_100076128,puVar6,FUN_100076130,puVar5,FUN_100076138,puVar7,
                  FUN_100076140,puVar8,FUN_100076148,puVar9,FUN_100076150,puVar4);
  }
  return;
}



/* Address: 0x100075718 | FUN_100075718 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

long * FUN_100075718(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  ID IVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  MainActor *this;
  MainActor *pMVar9;
  undefined8 *puVar10;
  UnownedSerialExecutor UVar11;
  UnownedSerialExecutor UVar12;
  MainActor *pMVar13;
  undefined *puVar14;
  long *plVar15;
  ulong uVar16;
  long unaff_x20;
  undefined8 uVar17;
  MainActor *pMVar18;
  long lVar19;
  undefined8 uVar20;
  long *local_d8;
  MainActor *local_b0;
  long local_a8;
  long *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  ulong *local_68;
  
  IVar6 = NSEvent::modifierFlags((ID)&_OBJC_CLASS___NSEvent);
  puVar7 = &DAT_100c26ca8;
  _swift_getKeyPath(&DAT_100c26ca8);
  puVar8 = &DAT_100fa64a0;
  FUN_100003a00(&DAT_100fa64a0,FUN_1000038c0,&TargetProtocolConformanceDescriptor_100c227f0);
  FUN_1002cbe78(&local_98,puVar7,puVar8);
  FUN_1000037f0(&DAT_100fa9780,&DAT_100c26cd0);
  FUN_1002ca7e0(&local_a0);
  _swift_release(local_98);
  _swift_release(local_90);
  _swift_release(local_88);
  _swift_release(local_78);
  _swift_release();
  uVar16 = 0;
  if (((ulong)local_a0 & (IVar6 ^ 0xffffffffffffffff)) == 0) {
    FUN_10037a9f8();
    uVar16 = *local_68;
    FUN_10037aa04();
    uVar16 = *local_68 | uVar16;
  }
  lVar3 = _TtC5Paste18ItemCollectionView::applier;
  lVar2 = _TtC5Paste18ItemCollectionView::viewModel;
  local_a0 = (long *)PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar19 = *(long *)(param_1 + 0x10);
  if (lVar19 == 0) {
    local_d8 = (long *)PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    this = Swift::MainActor::typeMetadataAccessor();
    local_d8 = (long *)PTR___swiftEmptyArrayStorage_100eae0d8;
    pMVar18 = this;
    puVar8 = (undefined8 *)(param_1 + 0x20);
    do {
      uVar20 = *puVar8;
      pMVar9 = Swift::MainActor::get_shared(this,pMVar18);
      puVar10 = &DAT_100fa6bb0;
      FUN_100003a00(&DAT_100fa6bb0,PTR_typeMetadataAccessor_100eaec10,
                    PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
      UVar11 = Swift::Actor::get_unownedExecutor();
      UVar12 = UVar11;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar12.unknown & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("Paste/ItemCollectionView.swift",0x1e,1,0x18d,UVar11.unknown,puVar10);
      }
      pMVar18 = *(MainActor **)(unaff_x20 + lVar3);
      if (pMVar18 == (MainActor *)0x0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100075a6c);
        (*pcVar5)();
      }
      uVar17 = *(undefined8 *)(unaff_x20 + lVar2);
      _swift_retain(uVar17);
      pMVar13 = pMVar18;
      _swift_retain();
      FUN_1003b8bfc();
      _swift_release(uVar17);
      puVar14 = &DAT_100faa390;
      local_b0 = pMVar13;
      FUN_1000037f0(&DAT_100faa390,&DAT_100c26c70);
      puVar7 = &DAT_100fa9820;
      FUN_100016eac(&DAT_100fa9820,&DAT_100faa390,&DAT_100c26c70,
                    &TargetProtocolConformanceDescriptor_100c32ac0);
      FUN_1001b9698(&local_a8,uVar20,&local_b0,puVar14,puVar7);
      _swift_release(pMVar9);
      _swift_release(pMVar13);
      _swift_release();
      lVar4 = local_a8;
      if (local_a8 != 0) {
        Swift::Array<undefined>::__makeUniqueAndReserveCapacityIfNotUnique();
        pMVar18 = *(MainActor **)(((ulong)local_a0 & 0xffffffffffffff8) + 0x10);
        uVar1 = *(ulong *)(((ulong)local_a0 & 0xffffffffffffff8) + 0x18);
        if ((MainActor *)(uVar1 >> 1) <= pMVar18) {
          Swift::Array<undefined>::__createNewBuffer(1 < uVar1,pMVar18 + 1,1);
        }
        Swift::Array<undefined>::__appendElementAssumeUniqueAndCapacity(pMVar18,lVar4);
        local_d8 = local_a0;
      }
      lVar19 = lVar19 + -1;
      puVar8 = puVar8 + 1;
    } while (lVar19 != 0);
  }
  FUN_100383d70(0);
  _swift_allocObject();
  plVar15 = local_d8;
  _swift_bridgeObjectRetain();
  FUN_1003821e8();
  (**(code **)(*plVar15 + 0x68))(uVar16);
  _swift_release(plVar15);
  plVar15 = local_d8;
  FUN_10006e998(local_d8,uVar16);
  _swift_bridgeObjectRelease(uVar16);
  _swift_bridgeObjectRelease(local_d8);
  return plVar15;
}



/* Address: 0x100075a6c | FUN_100075a6c */

void FUN_100075a6c(undefined8 param_1,ID param_2)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  ID IVar4;
  MainActor *this;
  MainActor *pMVar5;
  undefined8 *puVar6;
  UnownedSerialExecutor UVar7;
  UnownedSerialExecutor UVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  MainActor *pMVar12;
  long unaff_x20;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  long local_a8;
  ulong local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  ulong *local_68;
  
  IVar4 = objc_stub::clickCount(param_2);
  lVar15 = _TtC5Paste18ItemCollectionView::applier;
  lVar9 = _TtC5Paste18ItemCollectionView::viewModel;
  if (1 < (long)IVar4) {
    pMVar12 = *(MainActor **)(unaff_x20 + _TtC5Paste18ItemCollectionView::viewModel);
    local_98 = PTR___swiftEmptyArrayStorage_100eae0d8;
    this = Swift::MainActor::typeMetadataAccessor();
    puVar10 = PTR_typeMetadataAccessor_100eaec10;
    pMVar5 = pMVar12;
    _swift_retain();
    pMVar5 = Swift::MainActor::get_shared(this,pMVar5);
    puVar6 = &DAT_100fa6bb0;
    FUN_100003a00(&DAT_100fa6bb0,puVar10,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
    UVar7 = Swift::Actor::get_unownedExecutor();
    UVar8 = UVar7;
    _swift_task_isCurrentExecutor();
    if (((ulong)UVar8.unknown & 1) == 0) {
      _swift_task_reportUnexpectedExecutor
                ("Paste/ItemCollectionView.swift",0x1e,1,0x18d,UVar7.unknown,puVar6);
    }
    lVar15 = *(long *)(unaff_x20 + lVar15);
    if (lVar15 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100075d4c);
      (*pcVar3)();
    }
    uVar13 = *(undefined8 *)(unaff_x20 + lVar9);
    _swift_retain(uVar13);
    lVar9 = lVar15;
    _swift_retain();
    FUN_1003b8bfc();
    _swift_release(uVar13);
    puVar10 = &DAT_100faa390;
    local_a8 = lVar9;
    FUN_1000037f0(&DAT_100faa390,&DAT_100c26c70);
    puVar11 = &DAT_100fa9820;
    FUN_100016eac(&DAT_100fa9820,&DAT_100faa390,&DAT_100c26c70,
                  &TargetProtocolConformanceDescriptor_100c32ac0);
    FUN_1001b9698(&local_a0,param_1,&local_a8,puVar10,puVar11);
    _swift_release(pMVar5);
    _swift_release(lVar9);
    _swift_release(lVar15);
    uVar14 = local_a0;
    puVar10 = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (local_a0 != 0) {
      Swift::Array<undefined>::__makeUniqueAndReserveCapacityIfNotUnique();
      uVar1 = *(ulong *)(((ulong)local_98 & 0xffffffffffffff8) + 0x10);
      uVar2 = *(ulong *)(((ulong)local_98 & 0xffffffffffffff8) + 0x18);
      if (uVar2 >> 1 <= uVar1) {
        Swift::Array<undefined>::__createNewBuffer(1 < uVar2,uVar1 + 1,1);
      }
      Swift::Array<undefined>::__appendElementAssumeUniqueAndCapacity(uVar1,uVar14);
      puVar10 = local_98;
    }
    IVar4 = objc_stub::modifierFlags(param_2);
    puVar11 = &DAT_100c26ca8;
    _swift_getKeyPath(&DAT_100c26ca8);
    puVar6 = &DAT_100fa64a0;
    FUN_100003a00(&DAT_100fa64a0,FUN_1000038c0,&TargetProtocolConformanceDescriptor_100c227f0);
    FUN_1002cbe78(&local_98,puVar11,puVar6);
    FUN_1000037f0(&DAT_100fa9780,&DAT_100c26cd0);
    FUN_1002ca7e0(&local_a0);
    _swift_release(local_98);
    _swift_release(local_90);
    _swift_release(local_88);
    _swift_release(local_78);
    _swift_release();
    if ((local_a0 & (IVar4 ^ 0xffffffffffffffff)) == 0) {
      FUN_10037a9f8();
      uVar14 = *local_68;
      FUN_10037aa04();
      uVar14 = *local_68 | uVar14;
    }
    else {
      uVar14 = 0;
    }
    FUN_100066068(puVar10,uVar14,0);
    _swift_bridgeObjectRelease(puVar10);
    _swift_release(pMVar12);
  }
  return;
}



/* Address: 0x100075d4c | FUN_100075d4c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100075d4c(void)

{
  long lVar1;
  code *pcVar2;
  ID IVar3;
  ulong uVar4;
  ID unaff_x20;
  undefined1 auStack_58 [24];
  
  IVar3 = objc_stub::window(unaff_x20);
  if (IVar3 != 0) {
    uVar4 = objc_stub::frame(IVar3);
    _CGRectContainsPoint();
    lVar1 = _TtC7PasteUI14CollectionView::draggingSession;
    if ((uVar4 & 1) != 0) {
      return 0;
    }
    _swift_beginAccess(unaff_x20 + _TtC7PasteUI14CollectionView::draggingSession,auStack_58,0,0);
    IVar3 = unaff_x20 + lVar1;
    _swift_unknownObjectWeakLoadStrong();
    if (IVar3 != 0) {
      objc_stub::setAnimatesToStartingPositionsOnCancelOrFail_(IVar3,0);
    }
    if (*(ID *)PTR__NSApp_100ea8fa0 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100075e3c);
      (*pcVar2)();
    }
    objc_stub::deactivate(*(ID *)PTR__NSApp_100ea8fa0);
  }
  return 0;
}



/* Address: 0x100075e3c | FUN_100075e3c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100075e3c(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lVar7;
  long local_70 [3];
  long local_58;
  
  uVar5 = 0;
  lVar7 = *(long *)(unaff_x20 + _TtC5Paste18ItemCollectionView::applier);
  if (lVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100075ffc);
    (*pcVar1)();
  }
  uVar6 = *(undefined8 *)(unaff_x20 + _TtC5Paste18ItemCollectionView::viewModel);
  _swift_retain(uVar6);
  lVar2 = lVar7;
  _swift_retain();
  FUN_1003b8bfc();
  _swift_release(uVar6);
  puVar3 = &DAT_100faa390;
  local_58 = lVar2;
  FUN_1000037f0(&DAT_100faa390,&DAT_100c26c70);
  puVar4 = &DAT_100fa9820;
  FUN_100016eac(&DAT_100fa9820,&DAT_100faa390,&DAT_100c26c70,
                &TargetProtocolConformanceDescriptor_100c32ac0);
  FUN_1001b9698(local_70,param_1,&local_58,puVar3,puVar4);
  _swift_release(lVar2);
  _swift_release(lVar7);
  lVar7 = _TtC7PasteUI14CollectionView::visibleCells;
  if (local_70[0] != 0) {
    _swift_beginAccess(unaff_x20 + _TtC7PasteUI14CollectionView::visibleCells,local_70,0,0);
    lVar7 = *(long *)(unaff_x20 + lVar7);
    if ((*(long *)(lVar7 + 0x10) != 0) && (FUN_100071340(), (uVar5 & 1) != 0)) {
      if (*(long *)(unaff_x20 + _TtC5Paste18ItemCollectionView::previewPopover) != 0) {
        FUN_10002964c(local_70[0],*(undefined8 *)(*(long *)(lVar7 + 0x38) + param_1 * 0x10));
      }
      goto LAB_100075fd4;
    }
  }
  FUN_10000ec2c(0,&DAT_100faa2e0,&PTR__OBJC_CLASS___NSSound_100f8d7b0);
  (extension_AppKit)::__C::NSSound::beep();
LAB_100075fd4:
  FUN_1000679ac();
  return;
}



/* Address: 0x100075ffc | thunk_FUN_100070efc */

void thunk_FUN_100070efc(void)

{
  FUN_100070efc();
  return;
}



/* Address: 0x100076000 | thunk_FUN_100070fe4 */

void thunk_FUN_100070fe4(void)

{
  FUN_100070fe4();
  return;
}



/* Address: 0x100076004 | FUN_100076004 */

void FUN_100076004(void)

{
  FUN_100076568(PTR__swift_unknownObjectRelease_100eae458,PTR__swift_release_100eae3e8);
  return;
}



/* Address: 0x100076018 | FUN_100076018 */

void FUN_100076018(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar3 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100008284;
  FUN_100053988(plVar3,param_1,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x100076084 | FUN_100076084 */

void FUN_100076084(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  }
  _swift_deallocObject();
  return;
}



/* Address: 0x1000760b0 | FUN_1000760b0 */

void FUN_1000760b0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_100008284;
  FUN_100071054(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Address: 0x100076120 | FUN_100076120 */

void FUN_100076120(void)

{
  FUN_100053a64();
  return;
}



/* Address: 0x100076128 | FUN_100076128 */

void FUN_100076128(void)

{
  FUN_10006e1f8();
  return;
}



/* Address: 0x100076130 | FUN_100076130 */

void FUN_100076130(void)

{
  long unaff_x20;
  
  FUN_10006e4a8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100076138 | FUN_100076138 */

void FUN_100076138(void)

{
  long unaff_x20;
  
  FUN_10006e59c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100076140 | FUN_100076140 */

void FUN_100076140(void)

{
  long unaff_x20;
  
  FUN_10006e5e0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100076148 | FUN_100076148 */

void FUN_100076148(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10006e900(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}


