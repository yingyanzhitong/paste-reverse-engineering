/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1000077d4 | FUN_1000077d4 */

void FUN_1000077d4(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &DAT_100c23018;
  _swift_getKeyPath(&DAT_100c23018);
  puVar2 = &DAT_100c23040;
  _swift_getKeyPath(&DAT_100c23040);
  Combine::Published::_get_subscript(param_1,uVar3,puVar1,puVar2);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return;
}



/* Address: 0x10000783c | FUN_10000783c */

void FUN_10000783c(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  Published *pPVar4;
  undefined8 local_38;
  
  uVar3 = *param_1;
  pPVar4 = (Published *)*param_2;
  puVar1 = &DAT_100c23018;
  _swift_getKeyPath(&DAT_100c23018);
  puVar2 = &DAT_100c23040;
  _swift_getKeyPath(&DAT_100c23040);
  local_38 = uVar3;
  _swift_bridgeObjectRetain(uVar3);
  _swift_retain(pPVar4);
  Combine::Published::_set_subscript(pPVar4,&local_38,pPVar4,puVar1,puVar2);
  return;
}



/* Address: 0x1000078b4 | FUN_1000078b4 */

void FUN_1000078b4(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  _swift_getKeyPath(param_5);
  _swift_getKeyPath(param_6);
  Combine::Published::_get_subscript(param_1,uVar1,param_5,param_6);
  _swift_release(param_5);
  _swift_release(param_6);
  return;
}



/* Address: 0x100007918 | FUN_100007918 */

void FUN_100007918(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  Published *pPVar1;
  undefined8 uVar2;
  Published *local_38;
  
  pPVar1 = (Published *)*param_1;
  uVar2 = *param_2;
  _swift_getKeyPath(param_5);
  _swift_getKeyPath(param_6);
  local_38 = pPVar1;
  _swift_bridgeObjectRetain(pPVar1);
  _swift_retain(uVar2);
  Combine::Published::_set_subscript(pPVar1,&local_38,uVar2,param_5,param_6);
  return;
}



/* Address: 0x10000798c | FUN_10000798c */

undefined1  [16] FUN_10000798c(char *param_1,undefined *param_2)

{
  undefined8 *puVar1;
  _StringGuts _Var2;
  _StringGuts _Var3;
  bool bVar4;
  Hasher into;
  ulong uVar5;
  ulong uVar6;
  ulong *unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  String SVar11;
  ulong local_98 [9];
  
  uVar9 = *unaff_x20;
  Swift::Hasher::init(*(__int64 *)(uVar9 + 0x28));
  into.unknown = (undefined *)local_98;
  SVar11.bridgeObject = param_2;
  SVar11.str = param_1;
  Swift::String::hash(into,SVar11);
  uVar5 = Swift::Hasher::_finalize(into);
  uVar6 = -1L << ((ulong)*(byte *)(uVar9 + 0x20) & 0x3f);
  uVar5 = uVar5 & (uVar6 ^ 0xffffffffffffffff);
  if ((*(ulong *)(uVar9 + 0x38 + (uVar5 >> 6) * 8) >> (uVar5 & 0x3f) & 1) != 0) {
    do {
      puVar1 = (undefined8 *)(*(long *)(uVar9 + 0x30) + uVar5 * 0x10);
      _Var2.unknown = (undefined *)*puVar1;
      _Var3.unknown = (undefined *)puVar1[1];
      if ((_Var2.unknown == param_1 && _Var3.unknown == param_2) ||
         (bVar4 = Swift::_stringCompareWithSmolCheck
                            (_Var2,_Var3,(_StringComparisonResult)(__int8)param_1), bVar4)) {
        uVar6 = *unaff_x20;
        _swift_isUniquelyReferenced_nonNull_native();
        local_98[0] = *unaff_x20;
        if ((uVar6 & 1) == 0) {
          FUN_1000734dc();
        }
        uVar6 = local_98[0];
        puVar1 = (undefined8 *)(*(long *)(local_98[0] + 0x30) + uVar5 * 0x10);
        uVar7 = *puVar1;
        uVar8 = puVar1[1];
        FUN_100007cc4(uVar5);
        *unaff_x20 = uVar6;
        goto LAB_100007a84;
      }
      uVar5 = uVar5 + 1 & ~uVar6;
    } while ((*(ulong *)(uVar9 + 0x38 + (uVar5 >> 6) * 8) >> (uVar5 & 0x3f) & 1) != 0);
  }
  uVar7 = 0;
  uVar8 = 0;
LAB_100007a84:
  auVar10._8_8_ = uVar8;
  auVar10._0_8_ = uVar7;
  return auVar10;
}



/* Address: 0x100007ab8 | FUN_100007ab8 */

void FUN_100007ab8(undefined8 *param_1,String *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  _StringGuts _Var4;
  _StringGuts _Var5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  _StringGuts _Var9;
  _StringGuts _Var10;
  String SVar11;
  String SVar12;
  String SVar13;
  bool bVar14;
  Hasher into;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  ulong *unaff_x20;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lVar24;
  undefined8 uVar25;
  ulong local_a8 [9];
  
  pcVar1 = param_2->str;
  puVar6 = param_2->bridgeObject;
  SVar11 = *param_2;
  pcVar2 = param_2[1].str;
  puVar7 = param_2[1].bridgeObject;
  SVar12 = param_2[1];
  pcVar3 = param_2[2].str;
  puVar8 = param_2[2].bridgeObject;
  SVar13 = param_2[2];
  uVar18 = *unaff_x20;
  Swift::Hasher::init(*(__int64 *)(uVar18 + 0x28));
  Swift::String::hash((Hasher)local_a8,SVar11);
  Swift::String::hash((Hasher)local_a8,SVar12);
  into.unknown = (undefined *)local_a8;
  Swift::String::hash(into,SVar13);
  uVar15 = Swift::Hasher::_finalize(into);
  uVar16 = -1L << ((ulong)*(byte *)(uVar18 + 0x20) & 0x3f);
  uVar15 = uVar15 & (uVar16 ^ 0xffffffffffffffff);
  if ((*(ulong *)(uVar18 + 0x38 + (uVar15 >> 6) * 8) >> (uVar15 & 0x3f) & 1) == 0) {
    uVar19 = 0;
    uVar20 = 0;
    uVar21 = 0;
    uVar22 = 0;
    uVar23 = 0;
    uVar25 = 0;
  }
  else {
    lVar24 = *(long *)(uVar18 + 0x30);
    do {
      puVar17 = (undefined8 *)(lVar24 + uVar15 * 0x30);
      _Var4.unknown = (undefined *)puVar17[2];
      _Var9.unknown = (undefined *)puVar17[3];
      _Var5.unknown = (undefined *)puVar17[4];
      _Var10.unknown = (undefined *)puVar17[5];
      if (((((undefined *)*puVar17 == pcVar1 && (undefined *)puVar17[1] == puVar6) ||
           (bVar14 = Swift::_stringCompareWithSmolCheck
                               ((undefined *)*puVar17,(undefined *)puVar17[1],
                                (_StringComparisonResult)(__int8)pcVar1), bVar14)) &&
          ((_Var4.unknown == pcVar2 && _Var9.unknown == puVar7 ||
           (bVar14 = Swift::_stringCompareWithSmolCheck
                               (_Var4,_Var9,(_StringComparisonResult)(__int8)pcVar2), bVar14)))) &&
         ((_Var5.unknown == pcVar3 && _Var10.unknown == puVar8 ||
          (bVar14 = Swift::_stringCompareWithSmolCheck
                              (_Var5,_Var10,(_StringComparisonResult)(__int8)pcVar3), bVar14)))) {
        uVar16 = *unaff_x20;
        _swift_isUniquelyReferenced_nonNull_native();
        local_a8[0] = *unaff_x20;
        if ((uVar16 & 1) == 0) {
          FUN_100073638();
        }
        uVar16 = local_a8[0];
        puVar17 = (undefined8 *)(*(long *)(local_a8[0] + 0x30) + uVar15 * 0x30);
        uVar19 = *puVar17;
        uVar20 = puVar17[1];
        uVar21 = puVar17[2];
        uVar22 = puVar17[3];
        uVar23 = puVar17[4];
        uVar25 = puVar17[5];
        FUN_100007e70(uVar15);
        *unaff_x20 = uVar16;
        goto LAB_100007c88;
      }
      uVar15 = uVar15 + 1 & ~uVar16;
    } while ((*(ulong *)(uVar18 + 0x38 + (uVar15 >> 6) * 8) >> (uVar15 & 0x3f) & 1) != 0);
    uVar19 = 0;
    uVar20 = 0;
    uVar21 = 0;
    uVar22 = 0;
    uVar23 = 0;
    uVar25 = 0;
  }
LAB_100007c88:
  *param_1 = uVar19;
  param_1[1] = uVar20;
  param_1[2] = uVar21;
  param_1[3] = uVar22;
  param_1[4] = uVar23;
  param_1[5] = uVar25;
  return;
}



/* Address: 0x100007cc4 | FUN_100007cc4 */

void FUN_100007cc4(Bucket param_1)

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
  ulong uVar10;
  long *unaff_x20;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined1 auStack_98 [72];
  
  lVar12 = *unaff_x20;
  _Var1.unknown = (undefined *)(lVar12 + 0x38);
  uVar10 = -1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
  uVar13 = param_1.offset + 1U & (uVar10 ^ 0xffffffffffffffff);
  uVar11 = 1L << (uVar13 & 0x3f);
  if ((uVar11 & *(ulong *)(_Var1.unknown + (uVar13 >> 6) * 8)) == 0) {
    uVar10 = (ulong)param_1.offset >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(_Var1.unknown + uVar10) =
         *(ulong *)(_Var1.unknown + uVar10) & (-1L << (param_1.offset & 0x3fU)) - 1U;
  }
  else {
    uVar10 = ~uVar10;
    BVar8 = Swift::_HashTable::previousHole(param_1,_Var1);
    if ((*(ulong *)(_Var1.unknown + (uVar13 >> 6) * 8) & uVar11) != 0) {
      uVar11 = BVar8.offset + 1U & uVar10;
      do {
        pSVar2 = (String *)(*(long *)(lVar12 + 0x30) + uVar13 * 0x10);
        pvVar5 = pSVar2->bridgeObject;
        SVar6 = *pSVar2;
        Swift::Hasher::init(*(__int64 *)(lVar12 + 0x28));
        _swift_bridgeObjectRetain(pvVar5);
        into.unknown = auStack_98;
        Swift::String::hash(into,SVar6);
        uVar9 = Swift::Hasher::_finalize(into);
        _swift_bridgeObjectRelease(pvVar5);
        uVar9 = uVar9 & uVar10;
        if (param_1.offset < (long)uVar11) {
          if (uVar9 < uVar11) {
LAB_100007dc8:
            if (param_1.offset < (long)uVar9) goto LAB_100007d50;
          }
          puVar3 = (undefined8 *)(*(long *)(lVar12 + 0x30) + param_1.offset * 0x10);
          puVar4 = (undefined8 *)(*(long *)(lVar12 + 0x30) + uVar13 * 0x10);
          if ((param_1.offset != uVar13) || (puVar4 + 2 <= puVar3)) {
            uVar14 = *puVar4;
            puVar3[1] = puVar4[1];
            *puVar3 = uVar14;
            param_1.offset = uVar13;
          }
        }
        else if (uVar11 <= uVar9) goto LAB_100007dc8;
LAB_100007d50:
        uVar13 = uVar13 + 1 & uVar10;
      } while ((*(ulong *)(_Var1.unknown + (uVar13 >> 6) * 8) >> (uVar13 & 0x3f) & 1) != 0);
    }
    uVar10 = (ulong)param_1.offset >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(_Var1.unknown + uVar10) =
         (-1L << (param_1.offset & 0x3fU)) - 1U & *(ulong *)(_Var1.unknown + uVar10);
  }
  if (SBORROW8(*(long *)(lVar12 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x100007e70);
    (*pcVar7)();
  }
  *(long *)(lVar12 + 0x10) = *(long *)(lVar12 + 0x10) + -1;
  *(int *)(lVar12 + 0x24) = *(int *)(lVar12 + 0x24) + 1;
  return;
}



/* Address: 0x100007e70 | FUN_100007e70 */

void FUN_100007e70(Bucket param_1)

{
  _HashTable _Var1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  code *pcVar8;
  Bucket BVar9;
  Hasher into;
  ulong uVar10;
  String *pSVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 auStack_a8 [72];
  
  lVar17 = *unaff_x20;
  _Var1.unknown = (undefined *)(lVar17 + 0x38);
  uVar13 = -1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = param_1.offset + 1U & (uVar13 ^ 0xffffffffffffffff);
  uVar16 = 1L << (uVar15 & 0x3f);
  if ((uVar16 & *(ulong *)(_Var1.unknown + (uVar15 >> 6) * 8)) == 0) {
    uVar13 = (ulong)param_1.offset >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(_Var1.unknown + uVar13) =
         *(ulong *)(_Var1.unknown + uVar13) & (-1L << (param_1.offset & 0x3fU)) - 1U;
  }
  else {
    uVar13 = ~uVar13;
    BVar9 = Swift::_HashTable::previousHole(param_1,_Var1);
    if ((*(ulong *)(_Var1.unknown + (uVar15 >> 6) * 8) & uVar16) != 0) {
      uVar16 = BVar9.offset + 1U & uVar13;
      do {
        pSVar11 = (String *)(*(long *)(lVar17 + 0x30) + uVar15 * 0x30);
        pvVar2 = pSVar11->bridgeObject;
        SVar5 = *pSVar11;
        pvVar3 = pSVar11[1].bridgeObject;
        SVar6 = pSVar11[1];
        pvVar4 = pSVar11[2].bridgeObject;
        SVar7 = pSVar11[2];
        Swift::Hasher::init(*(__int64 *)(lVar17 + 0x28));
        _swift_bridgeObjectRetain(pvVar2);
        _swift_bridgeObjectRetain(pvVar3);
        _swift_bridgeObjectRetain(pvVar4);
        Swift::String::hash((Hasher)auStack_a8,SVar5);
        Swift::String::hash((Hasher)auStack_a8,SVar6);
        into.unknown = auStack_a8;
        Swift::String::hash(into,SVar7);
        uVar10 = Swift::Hasher::_finalize(into);
        _swift_bridgeObjectRelease(pvVar4);
        _swift_bridgeObjectRelease(pvVar3);
        _swift_bridgeObjectRelease(pvVar2);
        uVar10 = uVar10 & uVar13;
        if (param_1.offset < (long)uVar16) {
          if (uVar10 < uVar16) {
joined_r0x000100007fec:
            if (param_1.offset < (long)uVar10) goto LAB_100007f0c;
          }
          puVar12 = (undefined8 *)(*(long *)(lVar17 + 0x30) + param_1.offset * 0x30);
          puVar14 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar15 * 0x30);
          if ((param_1.offset != uVar15) || (puVar14 + 6 <= puVar12)) {
            uVar19 = puVar14[1];
            uVar18 = *puVar14;
            uVar20 = puVar14[2];
            uVar22 = puVar14[5];
            uVar21 = puVar14[4];
            puVar12[3] = puVar14[3];
            puVar12[2] = uVar20;
            puVar12[5] = uVar22;
            puVar12[4] = uVar21;
            puVar12[1] = uVar19;
            *puVar12 = uVar18;
            param_1.offset = uVar15;
          }
        }
        else if (uVar16 <= uVar10) goto joined_r0x000100007fec;
LAB_100007f0c:
        uVar15 = uVar15 + 1 & uVar13;
      } while ((*(ulong *)(_Var1.unknown + (uVar15 >> 6) * 8) >> (uVar15 & 0x3f) & 1) != 0);
    }
    uVar13 = (ulong)param_1.offset >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(_Var1.unknown + uVar13) =
         (-1L << (param_1.offset & 0x3fU)) - 1U & *(ulong *)(_Var1.unknown + uVar13);
  }
  if (SBORROW8(*(long *)(lVar17 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x1000080a0);
    (*pcVar8)();
  }
  *(long *)(lVar17 + 0x10) = *(long *)(lVar17 + 0x10) + -1;
  *(int *)(lVar17 + 0x24) = *(int *)(lVar17 + 0x24) + 1;
  return;
}



/* Address: 0x1000080a0 | FUN_1000080a0 */

undefined * FUN_1000080a0(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  param_4 = param_4 >> 1;
  lVar1 = param_4 - param_3;
  if (SBORROW8(param_4,param_3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100008184);
    (*pcVar2)();
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar1 != 0) {
    if (0 < lVar1) {
      puVar3 = &DAT_100fa6830;
      FUN_1000037f0(&DAT_100fa6830,&DAT_100c26f60);
      _swift_allocObject();
      puVar4 = puVar3;
      _malloc_size();
      *(long *)(puVar3 + 0x10) = lVar1;
      *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
    }
    if (param_3 == param_4) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100008180);
      (*pcVar2)();
    }
    _swift_arrayInitWithCopy(puVar3 + 0x20,param_2 + param_3 * 0x18,lVar1,&DAT_100ec8580);
  }
  return puVar3;
}



/* Address: 0x100008184 | FUN_100008184 */

void FUN_100008184(undefined8 *param_1,undefined8 param_2)

{
  FUN_1002d5f54();
  *param_1 = param_2;
  return;
}



/* Address: 0x1000081a8 | FUN_1000081a8 */

void FUN_1000081a8(void)

{
  MainActor *pMVar1;
  undefined *puVar2;
  
  if (DAT_100fa6bb0 != (undefined *)0x0) {
    return;
  }
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  puVar2 = PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18;
  _swift_getWitnessTable(PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18,pMVar1);
  DAT_100fa6bb0 = puVar2;
  return;
}



/* Address: 0x1000081ec | FUN_1000081ec */

void FUN_1000081ec(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x100008218 | FUN_100008218 */

void FUN_100008218(undefined8 param_1)

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
  plVar3 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100008284;
  FUN_100006104(plVar3,param_1,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x100008284 | FUN_100008284 */

void FUN_100008284(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001000082bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Address: 0x1000082c0 | FUN_1000082c0 */

void FUN_1000082c0(void)

{
  FUN_1000078b4();
  return;
}



/* Address: 0x1000082e4 | FUN_1000082e4 */

void FUN_1000082e4(void)

{
  FUN_100007918();
  return;
}



/* Address: 0x100008308 | thunk_FUN_1000077d4 */

void thunk_FUN_1000077d4(void)

{
  FUN_1000077d4();
  return;
}



/* Address: 0x10000830c | thunk_FUN_10000783c */

void thunk_FUN_10000783c(void)

{
  FUN_10000783c();
  return;
}



/* Address: 0x100008310 | FUN_100008310 */

void FUN_100008310(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 != '\x01') {
    param_2 = param_3;
  }
  _swift_bridgeObjectRetain(param_2);
  return;
}



/* Address: 0x100008320 | FUN_100008320 */

void FUN_100008320(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 != '\x01') {
    param_2 = param_3;
  }
  _swift_bridgeObjectRelease(param_2);
  return;
}



/* Address: 0x100008330 | FUN_100008330 */

void FUN_100008330(void)

{
  FUN_1000078b4();
  return;
}



/* Address: 0x100008354 | FUN_100008354 */

void FUN_100008354(void)

{
  FUN_100007918();
  return;
}



/* Address: 0x100008378 | FUN_100008378 */

void FUN_100008378(void)

{
  undefined *puVar1;
  
  if (DAT_100fa8340 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift__Swift__String_>Swift__StringProtocol_100eac258;
  _swift_getWitnessTable
            (PTR_Swift__Swift__String_>Swift__StringProtocol_100eac258,
             PTR___type_metadata_for_Swift_String_100eac208);
  DAT_100fa8340 = puVar1;
  return;
}



/* Address: 0x1000083b8 | FUN_1000083b8 */

void FUN_1000083b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (-1 < param_4) {
    param_2 = param_3;
  }
  _swift_bridgeObjectRetain(param_2);
  return;
}



/* Address: 0x1000083c8 | FUN_1000083c8 */

void FUN_1000083c8(undefined8 *param_1)

{
  FUN_1000083dc(*param_1,param_1[1],param_1[2],*(undefined1 *)(param_1 + 3));
  return;
}



/* Address: 0x1000083dc | FUN_1000083dc */

void FUN_1000083dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (-1 < param_4) {
    param_2 = param_3;
  }
  _swift_bridgeObjectRelease(param_2);
  return;
}



/* Address: 0x1000083ec | FUN_1000083ec */

undefined8 * FUN_1000083ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar4 = param_2[2];
  uVar3 = *(undefined1 *)(param_2 + 3);
  FUN_1000083b8(uVar1,uVar2,uVar4,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar4;
  *(undefined1 *)(param_1 + 3) = uVar3;
  return param_1;
}



/* Address: 0x100008448 | FUN_100008448 */

undefined8 * FUN_100008448(undefined8 *param_1,undefined8 *param_2)

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
  FUN_1000083b8(uVar1,uVar3,uVar8,uVar5);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  uVar7 = param_1[2];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar8;
  uVar6 = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = uVar5;
  FUN_1000083dc(uVar2,uVar4,uVar7,uVar6);
  return param_1;
}



/* Address: 0x1000084b4 | FUN_1000084b4 */

void FUN_1000084b4(undefined8 *param_1,undefined8 *param_2)

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



/* Address: 0x1000084c8 | FUN_1000084c8 */

undefined8 * FUN_1000084c8(undefined8 *param_1,undefined8 *param_2)

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
  FUN_1000083dc(uVar5,uVar1,uVar2,uVar4);
  return param_1;
}



/* Address: 0x100008514 | FUN_100008514 */

int FUN_100008514(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7e < param_2) && (*(char *)((long)param_1 + 0x19) != '\0')) {
    return *param_1 + 0x7f;
  }
  uVar1 = (*(byte *)(param_1 + 6) & 0x7e | (uint)(*(byte *)(param_1 + 6) >> 7)) ^ 0x7f;
  if (0x7d < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x100008564 | FUN_100008564 */

void FUN_100008564(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x7f) {
    if (0x7e < param_3) {
      *(undefined1 *)((long)param_1 + 0x19) = 0;
    }
    if (param_2 != 0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      *(byte *)(param_1 + 3) = (((byte)(-param_2 >> 1) & 0x3f) + (char)param_2 * -0x40) * '\x02';
      return;
    }
  }
  else {
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    *param_1 = (ulong)(param_2 - 0x7f);
    if (0x7e < param_3) {
      *(undefined1 *)((long)param_1 + 0x19) = 1;
    }
  }
  return;
}



/* Address: 0x1000085c0 | FUN_1000085c0 */

byte FUN_1000085c0(long param_1)

{
  return *(byte *)(param_1 + 0x18) >> 7;
}



/* Address: 0x1000085cc | FUN_1000085cc */

void FUN_1000085cc(long param_1)

{
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0x7f;
  return;
}



/* Address: 0x1000085dc | FUN_1000085dc */

void FUN_1000085dc(long param_1,char param_2)

{
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 1 | param_2 << 7;
  return;
}



/* Address: 0x1000085f0 | FUN_1000085f0 */

undefined1  [16] FUN_1000085f0(void)

{
  return ZEXT816(0x100eaff90);
}



/* Address: 0x100008600 | thunk_FUN_10000862c */

undefined8 * thunk_FUN_10000862c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = param_2[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Address: 0x100008604 | FUN_100008604 */

void FUN_100008604(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Address: 0x10000862c | FUN_10000862c */

undefined8 * FUN_10000862c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = param_2[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Address: 0x100008670 | FUN_100008670 */

undefined8 * FUN_100008670(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x1000086d4 | FUN_1000086d4 */

void FUN_1000086d4(undefined8 *param_1,undefined8 *param_2)

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



/* Address: 0x1000086e8 | FUN_1000086e8 */

undefined8 * FUN_1000086e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(param_1[1]);
  uVar1 = param_1[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x10000872c | FUN_10000872c */

int FUN_10000872c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x100008774 | FUN_100008774 */

void FUN_100008774(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 3) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 3) = 0;
    }
    if (param_2 != 0) {
      param_1[1] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x1000087b4 | FUN_1000087b4 */

undefined1  [16] FUN_1000087b4(void)

{
  return ZEXT816(0x100eb0008);
}



/* Address: 0x1000087c4 | FUN_1000087c4 */

undefined * FUN_1000087c4(void)

{
  return PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218;
}



/* Address: 0x1000087d0 | thunk_FUN_10000862c */

void thunk_FUN_10000862c(void)

{
  thunk_FUN_10000862c();
  return;
}



/* Address: 0x1000087d4 | FUN_1000087d4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1000087d4(void)

{
  undefined8 *puVar1;
  ID self;
  ID self_00;
  long unaff_x20;
  
  _swift_getObjectType();
  puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste20FilterBrowserPopover::onWillClose);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(unaff_x20 + _TtC5Paste20FilterBrowserPopover::isDisplayed) = 0;
  self = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"init");
  objc_stub::setBehavior_(self,1);
  objc_stub::setAnimates_(self,1);
  objc_stub::setDelegate_(self,self);
  self_00 = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  if (DAT_100fa7050 != -1) {
    _swift_once(&DAT_100fa7050,FUN_10001a1dc);
  }
  NSNotificationCenter::addObserver_selector_name_object_(self_00,self,"close",DAT_101056fd8,0);
  return self;
}



/* Address: 0x1000088e4 | _TtC5Paste20FilterBrowserPopover::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC5Paste20FilterBrowserPopover::init(ID param_1,SEL param_2)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  char *pcVar4;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1000081a8();
  UVar3 = Swift::Actor::get_unownedExecutor();
  pcVar4 = (char *)UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar4 & 1) == 0) {
    pcVar4 = "Paste/FilterBrowserPopover.swift";
    _swift_task_reportUnexpectedExecutor
              ("Paste/FilterBrowserPopover.swift",0x20,1,10,UVar3.unknown,pMVar1);
  }
  FUN_1000087d4();
  _swift_release(pMVar2);
  return (ID)pcVar4;
}



/* Address: 0x10000897c | FUN_10000897c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10000897c(void)

{
  ID self;
  
  _swift_getObjectType();
  self = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  NSNotificationCenter::removeObserver_(self);
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"dealloc");
  return;
}



/* Address: 0x1000089f0 | _TtC5Paste20FilterBrowserPopover::dealloc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC5Paste20FilterBrowserPopover::dealloc(ID param_1,SEL param_2)

{
  class_t *pcVar1;
  ID self;
  objc_super local_40;
  
  pcVar1 = (class_t *)param_1;
  _swift_getObjectType();
  self = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  NSNotificationCenter::removeObserver_(self,param_1);
  local_40.receiver = param_1;
  local_40.super_class = pcVar1;
  _objc_msgSendSuper2(&local_40,"dealloc");
  return;
}



/* Address: 0x100008a78 | _TtC5Paste20FilterBrowserPopover::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void _TtC5Paste20FilterBrowserPopover::_cxx_destruct(ID param_1,SEL param_2)

{
  FUN_100004550(*(undefined8 *)(param_1 + onWillClose),((undefined8 *)(param_1 + onWillClose))[1]);
  return;
}



/* Address: 0x100008a8c | _TtC5Paste20FilterBrowserPopover::initWithCoder: */

/* Function Stack Size: 0x18 bytes */

ID _TtC5Paste20FilterBrowserPopover::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  String SVar6;
  
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  FUN_1000081a8();
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/FilterBrowserPopover.swift",0x20,1,0x19,UVar4.unknown,pMVar3);
  }
  puVar1 = (undefined8 *)(param_1 + onWillClose);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(param_1 + isDisplayed) = 0;
  SVar6.bridgeObject = (void *)0x2;
  SVar6.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar6,(StaticString)0xd000000000000025,0x8000000100d8dc00,
             0xd8dbf0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100008b64);
  (*pcVar2)();
}



/* Address: 0x100008b64 | FUN_100008b64 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100008b64(void)

{
  return ZEXT816(0x100f8ee60);
}



/* Address: 0x100008b84 | FUN_100008b84 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100008b84(long param_1)

{
  ID self;
  
  self = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (self != 0) {
    objc_stub::close(self);
    return 0;
  }
  return 0;
}



/* Address: 0x100008bc0 | FUN_100008bc0 */

void FUN_100008bc0(void)

{
  code *pcVar1;
  ID unaff_x20;
  undefined8 uVar2;
  
  objc_stub::setAnimates_(unaff_x20,1);
  *(undefined1 *)(unaff_x20 + _TtC5Paste20FilterBrowserPopover::isDisplayed) = 0;
  objc_stub::setContentViewController_(unaff_x20,0);
  pcVar1 = *(code **)(unaff_x20 + _TtC5Paste20FilterBrowserPopover::onWillClose);
  if (pcVar1 != (code *)0x0) {
    uVar2 = ((undefined8 *)(unaff_x20 + _TtC5Paste20FilterBrowserPopover::onWillClose))[1];
    _swift_retain(uVar2);
    (*pcVar1)();
    FUN_100004550(pcVar1,uVar2);
    return;
  }
  return;
}



/* Address: 0x100008c34 | _TtC5Paste20FilterBrowserPopover::popoverWillClose: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC5Paste20FilterBrowserPopover::popoverWillClose_(ID param_1,SEL param_2,ID param_3)

{
  char *pcVar1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  char *pcVar5;
  undefined1 *puVar6;
  long extraout_x8;
  long lVar7;
  Notification NVar8;
  
  NVar8 = Foundation::Notification::typeMetadataAccessor();
  puVar6 = NVar8.syncInProgress.bridgeObject;
  pcVar5 = NVar8.syncInProgress.str;
  pcVar1 = NVar8.pastePaused.str;
  lVar7 = *(long *)(pcVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(undefined8 *)(lVar7 + 0x40),pcVar1,NVar8.pastePaused.bridgeObject);
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  pMVar2 = pMVar3;
  FUN_1000081a8();
  UVar4 = Swift::Actor::get_unownedExecutor();
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    pMVar2 = (MainActor *)0x20;
    pcVar5 = &DAT_00000001;
    puVar6 = &DAT_0000003a;
    _swift_task_reportUnexpectedExecutor("Paste/FilterBrowserPopover.swift");
  }
  NVar8.pastePaused.bridgeObject = pMVar2;
  NVar8.pastePaused.str = (char *)param_3;
  NVar8.syncInProgress.bridgeObject = puVar6;
  NVar8.syncInProgress.str = pcVar5;
  NVar8 = Foundation::Notification::__unconditionallyBridgeFromObjectiveC(NVar8);
  FUN_100008bc0(param_1,NVar8.pastePaused.bridgeObject,NVar8.syncInProgress.str,
                NVar8.syncInProgress.bridgeObject);
  (**(code **)(lVar7 + 8))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),pcVar1);
  _swift_release(pMVar3);
  return;
}



/* Address: 0x100008d40 | _TtC5Paste20FilterBrowserPopover::popoverWillShow: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC5Paste20FilterBrowserPopover::popoverWillShow_(ID param_1,SEL param_2,ID param_3)

{
  char *pcVar1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  char *pcVar5;
  void *pvVar6;
  long extraout_x8;
  long lVar7;
  Notification NVar8;
  
  NVar8 = Foundation::Notification::typeMetadataAccessor();
  pvVar6 = NVar8.syncInProgress.bridgeObject;
  pcVar5 = NVar8.syncInProgress.str;
  pcVar1 = NVar8.pastePaused.str;
  lVar7 = *(long *)(pcVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(undefined8 *)(lVar7 + 0x40),pcVar1,NVar8.pastePaused.bridgeObject);
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  pMVar2 = pMVar3;
  FUN_1000081a8();
  UVar4 = Swift::Actor::get_unownedExecutor();
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    pMVar2 = (MainActor *)0x20;
    pcVar5 = &DAT_00000001;
    pvVar6 = (void *)0x41;
    _swift_task_reportUnexpectedExecutor("Paste/FilterBrowserPopover.swift");
  }
  NVar8.pastePaused.bridgeObject = pMVar2;
  NVar8.pastePaused.str = (char *)param_3;
  NVar8.syncInProgress.bridgeObject = pvVar6;
  NVar8.syncInProgress.str = pcVar5;
  NVar8 = Foundation::Notification::__unconditionallyBridgeFromObjectiveC(NVar8);
  (**(code **)(lVar7 + 8))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),pcVar1,
             NVar8.syncInProgress.str,NVar8.syncInProgress.bridgeObject);
  *(undefined1 *)(param_1 + isDisplayed) = 1;
  _swift_release(pMVar3);
  return;
}



/* Address: 0x100008e54 | FUN_100008e54 */

void FUN_100008e54(void)

{
  FUN_100009690(FUN_10008782c,0x30,FUN_1000091d8);
  return;
}



/* Address: 0x100008e6c | FUN_100008e6c */

void FUN_100008e6c(void)

{
  FUN_100009690(FUN_10020b428,0x1e,FUN_100009078);
  return;
}



/* Address: 0x100008e84 | FUN_100008e84 */

long FUN_100008e84(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long local_58 [3];
  long local_40;
  undefined **ppuStack_38;
  
  lVar1 = 0;
  FUN_1001ad0b8();
  lVar2 = lVar1;
  _swift_allocObject();
  *(undefined1 *)(lVar2 + 0x10) = 0;
  ppuStack_38 = &PTR_PTR_100ebe088;
  uVar3 = 0;
  local_58[0] = lVar2;
  local_40 = lVar1;
  FUN_1001adc9c(0);
  _swift_allocObject();
  plVar4 = local_58;
  FUN_1001ad514();
  uVar5 = 0;
  FUN_100009974(0);
  FUN_1000d80e0(local_58,"Paste/DI+App.swift",0x12,2,0x59,0x13,FUN_10000975c,0,uVar5);
  (**(code **)(*plVar4 + 0x68))(local_58[0]);
  FUN_1000d80e0(local_58,"Paste/DI+App.swift",0x12,2,0x12,0x1a,FUN_1000099b8,plVar4,uVar3);
  _swift_release(plVar4);
  return local_58[0];
}



/* Address: 0x100008f84 | FUN_100008f84 */

void FUN_100008f84(void)

{
  FUN_100009690(FUN_10004e57c,0x18,FUN_100009d2c);
  return;
}



/* Address: 0x100008f9c | FUN_100008f9c */

void FUN_100008f9c(void)

{
  FUN_100009774(FUN_1000099c8,0x19,FUN_1000580c4);
  return;
}



/* Address: 0x100008fb4 | FUN_100008fb4 */

void FUN_100008fb4(undefined8 *param_1)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  char *pcVar4;
  undefined8 uVar5;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1000081a8();
  UVar3 = Swift::Actor::get_unownedExecutor();
  pcVar4 = (char *)UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar4 & 1) == 0) {
    pcVar4 = "Paste/DI+App.swift";
    _swift_task_reportUnexpectedExecutor("Paste/DI+App.swift",0x12,1,0x19,UVar3.unknown,pMVar1);
  }
  FUN_100008e84();
  uVar5 = 0;
  FUN_10004e57c(0);
  _swift_allocObject();
  FUN_1000099dc(pcVar4,uVar5);
  _swift_release(pMVar2);
  *param_1 = pcVar4;
  return;
}


