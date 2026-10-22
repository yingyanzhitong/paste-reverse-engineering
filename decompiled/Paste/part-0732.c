/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1007ffb14 | thunk_FUN_1007ffb18 */

void thunk_FUN_1007ffb18(long param_1,undefined *param_2)

{
  char *pcVar1;
  void *pvVar2;
  Hasher HVar3;
  __uint64 _Var4;
  undefined8 *puVar5;
  String SVar6;
  undefined1 auStack_88 [72];
  
  HVar3.unknown = param_2;
  Swift::Hasher::init(0);
  _Var4 = *(__uint64 *)(param_1 + 0x10);
  Swift::Hasher::_combine(_Var4,HVar3);
  if (_Var4 != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x28);
    do {
      pcVar1 = (char *)puVar5[-1];
      pvVar2 = (void *)*puVar5;
      _swift_bridgeObjectRetain(pvVar2);
      SVar6.bridgeObject = pvVar2;
      SVar6.str = pcVar1;
      Swift::String::hash((Hasher)auStack_88,SVar6);
      _swift_bridgeObjectRelease(pvVar2);
      puVar5 = puVar5 + 2;
      _Var4 = _Var4 - 1;
    } while (_Var4 != 0);
  }
  HVar3.unknown = auStack_88;
  FUN_10080009c(HVar3.unknown,param_2);
  Swift::Hasher::_finalize(HVar3);
  return;
}



/* Address: 0x1007ffb18 | FUN_1007ffb18 */

void FUN_1007ffb18(long param_1,undefined *param_2)

{
  char *pcVar1;
  void *pvVar2;
  Hasher HVar3;
  __uint64 _Var4;
  undefined8 *puVar5;
  String SVar6;
  undefined1 auStack_88 [72];
  
  HVar3.unknown = param_2;
  Swift::Hasher::init(0);
  _Var4 = *(__uint64 *)(param_1 + 0x10);
  Swift::Hasher::_combine(_Var4,HVar3);
  if (_Var4 != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x28);
    do {
      pcVar1 = (char *)puVar5[-1];
      pvVar2 = (void *)*puVar5;
      _swift_bridgeObjectRetain(pvVar2);
      SVar6.bridgeObject = pvVar2;
      SVar6.str = pcVar1;
      Swift::String::hash((Hasher)auStack_88,SVar6);
      _swift_bridgeObjectRelease(pvVar2);
      puVar5 = puVar5 + 2;
      _Var4 = _Var4 - 1;
    } while (_Var4 != 0);
  }
  HVar3.unknown = auStack_88;
  FUN_10080009c(HVar3.unknown,param_2);
  Swift::Hasher::_finalize(HVar3);
  return;
}



/* Address: 0x1007ffbb8 | FUN_1007ffbb8 */

void FUN_1007ffbb8(void)

{
  undefined8 *unaff_x20;
  
  thunk_FUN_1007ffb18(*unaff_x20,unaff_x20[1]);
  return;
}



/* Address: 0x1007ffbc0 | FUN_1007ffbc0 */

void FUN_1007ffbc0(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  thunk_FUN_1007ffa94(param_1,*unaff_x20,unaff_x20[1]);
  return;
}



/* Address: 0x1007ffbc8 | FUN_1007ffbc8 */

void FUN_1007ffbc8(void)

{
  FUN_1007ffbd4();
  return;
}



/* Address: 0x1007ffbd4 | FUN_1007ffbd4 */

void FUN_1007ffbd4(__int64 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  Hasher HVar3;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  Swift::Hasher::init(param_1);
  HVar3.unknown = auStack_78;
  (*param_4)(HVar3.unknown,uVar1,uVar2);
  Swift::Hasher::_finalize(HVar3);
  return;
}



/* Address: 0x1007ffc24 | FUN_1007ffc24 */

uint FUN_1007ffc24(uint param_1)

{
  FUN_10080038c();
  return param_1 & 1;
}



/* Address: 0x1007ffc3c | FUN_1007ffc3c */

uint FUN_1007ffc3c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_10080038c(uVar1,param_1[1],*param_2,param_2[1]);
  return (uint)uVar1 & 1;
}



/* Address: 0x1007ffc64 | FUN_1007ffc64 */

uint FUN_1007ffc64(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_10080038c(uVar1,param_2[1],*param_1,param_1[1]);
  return ((uint)uVar1 ^ 0xffffffff) & 1;
}



/* Address: 0x1007ffc88 | FUN_1007ffc88 */

uint FUN_1007ffc88(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_10080038c(uVar1,param_1[1],*param_2,param_2[1]);
  return ((uint)uVar1 ^ 0xffffffff) & 1;
}



/* Address: 0x1007ffcb4 | FUN_1007ffcb4 */

uint FUN_1007ffcb4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_10080038c(uVar1,param_2[1],*param_1,param_1[1]);
  return (uint)uVar1 & 1;
}



/* Address: 0x1007ffcd4 | FUN_1007ffcd4 */

void FUN_1007ffcd4(void)

{
  undefined8 *unaff_x20;
  
  thunk_FUN_1007ff8e4(*unaff_x20,unaff_x20[1]);
  return;
}



/* Address: 0x1007ffcdc | FUN_1007ffcdc */

undefined1  [16] FUN_1007ffcdc(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined8 local_40;
  long local_38;
  
  if (param_3 == 0) {
    _swift_bridgeObjectRetain(param_1);
    _swift_bridgeObjectRetain(param_2);
    local_40 = param_2;
    local_38 = param_1;
  }
  else {
    local_38 = param_3;
    _swift_bridgeObjectRetain(param_3);
    _swift_bridgeObjectRetain(param_4);
    _swift_bridgeObjectRetain(param_1);
    FUN_1007ffd94();
    _swift_bridgeObjectRetain(param_2);
    uVar1 = param_4;
    _swift_isUniquelyReferenced_nonNull_native(param_4);
    local_40 = param_4;
    FUN_100800c1c(param_2,FUN_100800294,0,uVar1,&local_40);
    _swift_bridgeObjectRelease(param_2);
  }
  auVar2._8_8_ = local_40;
  auVar2._0_8_ = local_38;
  return auVar2;
}



/* Address: 0x1007ffd94 | FUN_1007ffd94 */

void FUN_1007ffd94(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  ulong uVar5;
  long lVar6;
  
  uVar5 = *(ulong *)(param_1 + 0x10);
  lVar4 = *unaff_x20;
  lVar6 = *(long *)(lVar4 + 0x10);
  if (SCARRY8(lVar6,uVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1007ffe80);
    (*pcVar1)();
  }
  lVar2 = lVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)lVar2 == 0) ||
     (uVar3 = *(ulong *)(lVar4 + 0x18) >> 1, (long)uVar3 < (long)(lVar6 + uVar5))) {
    FUN_1008367d4();
    uVar3 = *(ulong *)(lVar2 + 0x18) >> 1;
    lVar6 = *(long *)(param_1 + 0x10);
    lVar4 = lVar2;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x10);
  }
  if (lVar6 == 0) {
    _swift_bridgeObjectRelease(param_1);
    if (uVar5 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1007ffe84);
      (*pcVar1)();
    }
  }
  else {
    if (uVar3 - *(long *)(lVar4 + 0x10) < uVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1007ffe88);
      (*pcVar1)();
    }
    _swift_arrayInitWithCopy
              (lVar4 + *(long *)(lVar4 + 0x10) * 0x10 + 0x20,param_1 + 0x20,uVar5,
               PTR___type_metadata_for_Swift_String_100eac208);
    _swift_bridgeObjectRelease(param_1);
    if (uVar5 != 0) {
      if (SCARRY8(*(long *)(lVar4 + 0x10),uVar5)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1007ffe8c);
        (*pcVar1)();
      }
      *(ulong *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + uVar5;
    }
  }
  *unaff_x20 = lVar4;
  return;
}



/* Address: 0x1007ffe8c | FUN_1007ffe8c */

undefined1  [16]
FUN_1007ffe8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined8 local_40;
  undefined8 local_38;
  
  local_38 = param_1;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(param_3);
  FUN_1007ffd94();
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_4);
  uVar1 = param_2;
  _swift_isUniquelyReferenced_nonNull_native(param_2);
  local_40 = param_2;
  FUN_100800c1c(param_4,FUN_100800294,0,uVar1,&local_40);
  _swift_bridgeObjectRelease(param_4);
  auVar2._8_8_ = local_40;
  auVar2._0_8_ = local_38;
  return auVar2;
}



/* Address: 0x1007fff20 | FUN_1007fff20 */

undefined1  [16]
FUN_1007fff20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined8 local_40;
  undefined8 local_38;
  
  local_38 = param_3;
  _swift_bridgeObjectRetain(param_3);
  _swift_bridgeObjectRetain(param_4);
  _swift_bridgeObjectRetain(param_1);
  FUN_1007ffd94();
  _swift_bridgeObjectRetain(param_2);
  uVar1 = param_4;
  _swift_isUniquelyReferenced_nonNull_native(param_4);
  local_40 = param_4;
  FUN_100800c1c(param_2,FUN_100800294,0,uVar1,&local_40);
  _swift_bridgeObjectRelease(param_2);
  auVar2._8_8_ = local_40;
  auVar2._0_8_ = local_38;
  return auVar2;
}



/* Address: 0x1007fffb8 | thunk_FUN_1007fffbc */

undefined1  [16] thunk_FUN_1007fffbc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_100800568(PTR___swiftEmptyArrayStorage_100eae0d8,FUN_100071370);
  uVar2 = param_2;
  FUN_10082e974(param_1,param_2,puVar1);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(puVar1);
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Address: 0x1007fffbc | FUN_1007fffbc */

undefined1  [16] FUN_1007fffbc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_100800568(PTR___swiftEmptyArrayStorage_100eae0d8,FUN_100071370);
  uVar2 = param_2;
  FUN_10082e974(param_1,param_2,puVar1);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(puVar1);
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Address: 0x10080002c | FUN_10080002c */

undefined1  [16] FUN_10080002c(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_100800568(PTR___swiftEmptyArrayStorage_100eae0d8,FUN_100071370);
  auVar2._8_8_ = puVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Address: 0x100800064 | FUN_100800064 */

void FUN_100800064(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_100800568(PTR___swiftEmptyArrayStorage_100eae0d8,FUN_100071370);
  *param_1 = param_2;
  param_1[1] = puVar1;
  return;
}



/* Address: 0x10080009c | FUN_10080009c */

void FUN_10080009c(undefined8 *param_1,undefined *param_2)

{
  uint uVar1;
  void *pvVar2;
  byte bVar3;
  String SVar4;
  String SVar5;
  code *pcVar6;
  bool bVar7;
  char *pcVar8;
  Hasher HVar9;
  Hasher HVar10;
  undefined *puVar11;
  ulong uVar12;
  String *pSVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  __uint64 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  uVar14 = 1L << ((ulong)(byte)param_2[0x20] & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((param_2[0x20] & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar14 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)(param_2 + 0x40);
  HVar9.unknown = param_2;
  _swift_bridgeObjectRetain(param_2);
  local_b8 = 0;
  lVar16 = 0;
  while( true ) {
    while (uVar15 == 0) {
      bVar7 = SCARRY8(lVar16,1);
      lVar16 = lVar16 + 1;
      if (bVar7) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100800294);
        (*pcVar6)();
      }
      if ((long)(uVar14 + 0x3f >> 6) <= lVar16) goto LAB_10080025c;
      uVar15 = *(ulong *)((long)(param_2 + 0x40) + lVar16 * 8);
    }
    uVar12 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
    uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
    uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
    uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
    uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | lVar16 << 6;
    pSVar13 = (String *)(*(long *)(param_2 + 0x30) + uVar12 * 0x10);
    HVar10.unknown = pSVar13->str;
    pvVar2 = pSVar13->bridgeObject;
    SVar4 = *pSVar13;
    pSVar13 = (String *)(*(long *)(param_2 + 0x38) + uVar12 * 0x18);
    pcVar8 = pSVar13->str;
    puVar11 = pSVar13->bridgeObject;
    SVar5 = *pSVar13;
    bVar3 = *(byte *)&pSVar13[1].str;
    _swift_bridgeObjectRetain(pvVar2);
    HVar9.unknown = puVar11;
    FUN_1004a7398(pcVar8,puVar11,bVar3);
    if (pvVar2 == (void *)0x0) break;
    uStack_88 = param_1[5];
    local_90 = param_1[4];
    uStack_78 = param_1[7];
    uStack_80 = param_1[6];
    local_70 = param_1[8];
    uStack_a8 = param_1[1];
    local_b0 = *param_1;
    uStack_98 = param_1[3];
    uStack_a0 = param_1[2];
    Swift::String::hash((Hasher)&local_b0,SVar4);
    _swift_bridgeObjectRelease(pvVar2);
    if (bVar3 < 2) {
      if (bVar3 == 0) {
        Swift::Hasher::_combine(0,HVar10);
        Swift::String::hash((Hasher)&local_b0,SVar5);
        FUN_1004dc818(pcVar8,puVar11,0);
        HVar9.unknown = pcVar8;
        HVar10.unknown = puVar11;
      }
      else {
        Swift::Hasher::_combine(1,HVar10);
        Swift::Hasher::_combine((__uint64)pcVar8,HVar10);
        HVar9.unknown = pcVar8;
      }
    }
    else if (bVar3 == 2) {
      Swift::Hasher::_combine(2,HVar10);
      HVar9.unknown = (char *)0x0;
      if (((ulong)pcVar8 & 0x7fffffffffffffff) != 0) {
        HVar9.unknown = pcVar8;
      }
      Swift::Hasher::_combine((__uint64)HVar9.unknown,HVar10);
    }
    else {
      Swift::Hasher::_combine(3,HVar10);
      uVar1 = (uint)pcVar8 & 1;
      HVar9.unknown = (undefined *)(ulong)uVar1;
      Swift::Hasher::_combine((__uint8)uVar1,HVar10);
    }
    uVar15 = uVar15 - 1 & uVar15;
    uVar12 = Swift::Hasher::_finalize(HVar9);
    local_b8 = uVar12 ^ local_b8;
    HVar9.unknown = HVar10.unknown;
  }
LAB_10080025c:
  _swift_release(param_2);
  Swift::Hasher::_combine(local_b8,HVar9);
  return;
}



/* Address: 0x100800294 | FUN_100800294 */

void FUN_100800294(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  
  uVar2 = param_2[1];
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  uVar4 = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)(param_1 + 4) = uVar4;
  _swift_bridgeObjectRetain(uVar2);
  FUN_1004a7398(uVar1,uVar3,uVar4);
  return;
}



/* Address: 0x1008002e0 | FUN_1008002e0 */

undefined8 FUN_1008002e0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != *(long *)(param_3 + 0x10)) {
    return 0;
  }
  if (lVar2 != 0 && param_1 != param_3) {
    puVar3 = (undefined8 *)(param_3 + 0x28);
    puVar4 = (undefined8 *)(param_1 + 0x28);
    do {
      if (((undefined *)puVar4[-1] != (undefined *)puVar3[-1] ||
           (undefined *)*puVar4 != (undefined *)*puVar3) &&
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((undefined *)puVar4[-1],(undefined *)*puVar4,
                             (_StringComparisonResult)(__int8)(undefined *)puVar3[-1]), !bVar1)) {
        return 0;
      }
      puVar3 = puVar3 + 2;
      puVar4 = puVar4 + 2;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  FUN_100832498(param_2,param_4);
  return param_2;
}



/* Address: 0x100800388 | thunk_FUN_10080038c */

bool thunk_FUN_10080038c(long param_1,_StringGuts param_2,long param_3,undefined *param_4)

{
  bool bVar1;
  _StringGuts _Var2;
  undefined *puVar3;
  _StringGuts _Var4;
  _StringGuts _Var5;
  _StringGuts _Var6;
  _StringComparisonResult expecting;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  
  uVar8 = *(ulong *)(param_1 + 0x10);
  uVar9 = *(ulong *)(param_3 + 0x10);
  uVar10 = uVar9;
  if (uVar8 <= uVar9) {
    uVar10 = uVar8;
  }
  _Var4.unknown = param_2.unknown;
  if (uVar10 != 0) {
    puVar11 = (undefined8 *)(param_1 + 0x28);
    puVar7 = (undefined8 *)(param_3 + 0x28);
    do {
      _Var2.unknown = (undefined *)puVar11[-1];
      _Var5.unknown = (undefined *)*puVar11;
      if (_Var2.unknown != (undefined *)puVar7[-1] || _Var5.unknown != (undefined *)*puVar7) {
        expecting.value = (__int8)(undefined *)puVar7[-1];
        _Var4.unknown = _Var5.unknown;
        bVar1 = Swift::_stringCompareWithSmolCheck(_Var2,_Var5,expecting);
        if (!bVar1) {
          bVar1 = Swift::_stringCompareWithSmolCheck(_Var2,_Var5,expecting);
          return bVar1;
        }
      }
      puVar11 = puVar11 + 2;
      puVar7 = puVar7 + 2;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  _Var2.unknown = param_2.unknown;
  FUN_1007fe864();
  puVar3 = param_4;
  _Var5.unknown = _Var4.unknown;
  FUN_1007fe864();
  if ((_Var2.unknown == puVar3) && (_Var4.unknown == _Var5.unknown)) {
    _swift_bridgeObjectRelease(_Var4.unknown);
    _swift_bridgeObjectRelease(_Var5.unknown);
  }
  else {
    _Var6.unknown = _Var4.unknown;
    bVar1 = Swift::_stringCompareWithSmolCheck(_Var2,_Var4,(_StringComparisonResult)(__int8)puVar3);
    _swift_bridgeObjectRelease(_Var4.unknown);
    _swift_bridgeObjectRelease(_Var5.unknown);
    if (!bVar1) {
      FUN_1007fe864();
      _Var4.unknown = _Var6.unknown;
      FUN_1007fe864();
      if ((param_2.unknown == param_4) && (_Var6.unknown == _Var4.unknown)) {
        _swift_bridgeObjectRelease(_Var6.unknown);
        _swift_bridgeObjectRelease(_Var4.unknown);
        return false;
      }
      bVar1 = Swift::_stringCompareWithSmolCheck
                        (param_2,_Var6,(_StringComparisonResult)(__int8)param_4);
      _swift_bridgeObjectRelease(_Var6.unknown);
      _swift_bridgeObjectRelease(_Var4.unknown);
      return bVar1;
    }
  }
  return uVar8 < uVar9;
}



/* Address: 0x10080038c | FUN_10080038c */

bool FUN_10080038c(long param_1,_StringGuts param_2,long param_3,undefined *param_4)

{
  bool bVar1;
  _StringGuts _Var2;
  undefined *puVar3;
  _StringGuts _Var4;
  _StringGuts _Var5;
  _StringGuts _Var6;
  _StringComparisonResult expecting;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  
  uVar8 = *(ulong *)(param_1 + 0x10);
  uVar9 = *(ulong *)(param_3 + 0x10);
  uVar10 = uVar9;
  if (uVar8 <= uVar9) {
    uVar10 = uVar8;
  }
  _Var4.unknown = param_2.unknown;
  if (uVar10 != 0) {
    puVar11 = (undefined8 *)(param_1 + 0x28);
    puVar7 = (undefined8 *)(param_3 + 0x28);
    do {
      _Var2.unknown = (undefined *)puVar11[-1];
      _Var5.unknown = (undefined *)*puVar11;
      if (_Var2.unknown != (undefined *)puVar7[-1] || _Var5.unknown != (undefined *)*puVar7) {
        expecting.value = (__int8)(undefined *)puVar7[-1];
        _Var4.unknown = _Var5.unknown;
        bVar1 = Swift::_stringCompareWithSmolCheck(_Var2,_Var5,expecting);
        if (!bVar1) {
          bVar1 = Swift::_stringCompareWithSmolCheck(_Var2,_Var5,expecting);
          return bVar1;
        }
      }
      puVar11 = puVar11 + 2;
      puVar7 = puVar7 + 2;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  _Var2.unknown = param_2.unknown;
  FUN_1007fe864();
  puVar3 = param_4;
  _Var5.unknown = _Var4.unknown;
  FUN_1007fe864();
  if ((_Var2.unknown == puVar3) && (_Var4.unknown == _Var5.unknown)) {
    _swift_bridgeObjectRelease(_Var4.unknown);
    _swift_bridgeObjectRelease(_Var5.unknown);
  }
  else {
    _Var6.unknown = _Var4.unknown;
    bVar1 = Swift::_stringCompareWithSmolCheck(_Var2,_Var4,(_StringComparisonResult)(__int8)puVar3);
    _swift_bridgeObjectRelease(_Var4.unknown);
    _swift_bridgeObjectRelease(_Var5.unknown);
    if (!bVar1) {
      FUN_1007fe864();
      _Var4.unknown = _Var6.unknown;
      FUN_1007fe864();
      if ((param_2.unknown == param_4) && (_Var6.unknown == _Var4.unknown)) {
        _swift_bridgeObjectRelease(_Var6.unknown);
        _swift_bridgeObjectRelease(_Var4.unknown);
        return false;
      }
      bVar1 = Swift::_stringCompareWithSmolCheck
                        (param_2,_Var6,(_StringComparisonResult)(__int8)param_4);
      _swift_bridgeObjectRelease(_Var6.unknown);
      _swift_bridgeObjectRelease(_Var4.unknown);
      return bVar1;
    }
  }
  return uVar8 < uVar9;
}



/* Address: 0x10080055c | FUN_10080055c */

void FUN_10080055c(undefined8 param_1)

{
  FUN_100800568(param_1,FUN_100071370);
  return;
}



/* Address: 0x100800568 | FUN_100800568 */

undefined * FUN_100800568(long param_1,code *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  code *pcVar7;
  _DictionaryStorage *this;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined *capacity;
  undefined1 *puVar12;
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar8 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fe6fe8;
    FUN_1000f7830(&DAT_100fe6fe8,&DAT_100c7ce30);
    puVar8 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    _swift_retain();
    puVar12 = (undefined1 *)(param_1 + 0x40);
    do {
      uVar2 = *(ulong *)(puVar12 + -0x20);
      uVar4 = *(ulong *)(puVar12 + -0x18);
      uVar3 = *(undefined8 *)(puVar12 + -0x10);
      uVar5 = *(undefined8 *)(puVar12 + -8);
      uVar6 = *puVar12;
      _swift_bridgeObjectRetain(uVar4);
      FUN_1004a7398(uVar3,uVar5,uVar6);
      uVar9 = uVar2;
      uVar10 = uVar4;
      (*param_2)();
      if ((uVar10 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100800684);
        (*pcVar7)();
      }
      uVar10 = uVar9 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar8 + uVar10 + 0x40) = *(ulong *)(puVar8 + uVar10 + 0x40) | 1L << (uVar9 & 0x3f)
      ;
      puVar1 = (ulong *)(*(long *)(puVar8 + 0x30) + uVar9 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar4;
      puVar11 = (undefined8 *)(*(long *)(puVar8 + 0x38) + uVar9 * 0x18);
      *puVar11 = uVar3;
      puVar11[1] = uVar5;
      *(undefined1 *)(puVar11 + 2) = uVar6;
      if (SCARRY8(*(long *)(puVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100800688);
        (*pcVar7)();
      }
      *(long *)(puVar8 + 0x10) = *(long *)(puVar8 + 0x10) + 1;
      capacity = capacity + -1;
      puVar12 = puVar12 + 0x28;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar8);
  }
  return puVar8;
}



/* Address: 0x100800688 | FUN_100800688 */

undefined * FUN_100800688(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  code *pcVar7;
  _DictionaryStorage *this;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined *capacity;
  undefined1 *puVar12;
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar8 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fe6fe0;
    FUN_1000f7830(&DAT_100fe6fe0,&DAT_100c7b490);
    puVar8 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    _swift_retain();
    puVar12 = (undefined1 *)(param_1 + 0x40);
    do {
      uVar2 = *(ulong *)(puVar12 + -0x20);
      uVar4 = *(ulong *)(puVar12 + -0x18);
      uVar3 = *(undefined8 *)(puVar12 + -0x10);
      uVar5 = *(undefined8 *)(puVar12 + -8);
      uVar6 = *puVar12;
      _swift_bridgeObjectRetain(uVar4);
      FUN_1001037b4(uVar3,uVar5);
      uVar9 = uVar2;
      uVar10 = uVar4;
      FUN_100071370();
      if ((uVar10 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10080079c);
        (*pcVar7)();
      }
      uVar10 = uVar9 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar8 + uVar10 + 0x40) = *(ulong *)(puVar8 + uVar10 + 0x40) | 1L << (uVar9 & 0x3f)
      ;
      puVar1 = (ulong *)(*(long *)(puVar8 + 0x30) + uVar9 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar4;
      puVar11 = (undefined8 *)(*(long *)(puVar8 + 0x38) + uVar9 * 0x18);
      *puVar11 = uVar3;
      puVar11[1] = uVar5;
      *(undefined1 *)(puVar11 + 2) = uVar6;
      if (SCARRY8(*(long *)(puVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1008007a0);
        (*pcVar7)();
      }
      *(long *)(puVar8 + 0x10) = *(long *)(puVar8 + 0x10) + 1;
      capacity = capacity + -1;
      puVar12 = puVar12 + 0x28;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar8);
  }
  return puVar8;
}



/* Address: 0x1008007a0 | FUN_1008007a0 */

undefined * FUN_1008007a0(long param_1)

{
  undefined8 uVar1;
  ulong *puVar2;
  code *pcVar3;
  _DictionaryStorage *this;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *capacity;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar4 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fe6fd8;
    FUN_1000f7830(&DAT_100fe6fd8,&DAT_100c7ce00);
    puVar4 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    _swift_retain();
    puVar7 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar9 = puVar7[-1];
      uVar8 = puVar7[-2];
      uVar6 = puVar7[-1];
      uVar1 = *puVar7;
      _swift_bridgeObjectRetain(uVar8);
      _swift_bridgeObjectRetain(uVar6);
      _swift_bridgeObjectRetain(uVar1);
      uVar5 = uVar8;
      FUN_1008350fc();
      if ((uVar6 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1008008b4);
        (*pcVar3)();
      }
      uVar6 = uVar5 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar4 + uVar6 + 0x40) = *(ulong *)(puVar4 + uVar6 + 0x40) | 1L << (uVar5 & 0x3f);
      puVar2 = (ulong *)(*(long *)(puVar4 + 0x30) + uVar5 * 0x10);
      puVar2[1] = uVar9;
      *puVar2 = uVar8;
      *(undefined8 *)(*(long *)(puVar4 + 0x38) + uVar5 * 8) = uVar1;
      if (SCARRY8(*(long *)(puVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1008008b8);
        (*pcVar3)();
      }
      puVar7 = puVar7 + 3;
      *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + 1;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar4);
  }
  return puVar4;
}



/* Address: 0x1008008b8 | FUN_1008008b8 */

undefined * FUN_1008008b8(long param_1)

{
  int iVar1;
  code *pcVar2;
  _DictionaryStorage *this;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  UUID UVar6;
  undefined1 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined *capacity;
  undefined1 *puVar10;
  long lVar11;
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fe6fc0;
    FUN_1000f7830(&DAT_100fe6fc0,&DAT_100c7b470);
    puVar3 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
  }
  puVar4 = &DAT_100fe6fc8;
  FUN_1000f7830(&DAT_100fe6fc8,&DAT_100c7b478);
  lVar8 = *(long *)(puVar4 + -8);
  puVar10 = &stack0xffffffffffffffa0 + -(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (capacity != (undefined *)0x0) {
    iVar1 = *(int *)(puVar4 + 0x30);
    param_1 = param_1 + ((ulong)*(byte *)(lVar8 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff));
    lVar8 = *(long *)(lVar8 + 0x48);
    _swift_retain(puVar3);
    do {
      puVar7 = puVar10;
      FUN_1000f8cac(param_1,puVar10,&DAT_100fe6fc8,&DAT_100c7b478);
      puVar5 = puVar10;
      FUN_1008351b4();
      if (((ulong)puVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100800a5c);
        (*pcVar2)();
      }
      uVar9 = (ulong)puVar5 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar9 + 0x40) =
           *(ulong *)(puVar3 + uVar9 + 0x40) | 1L << ((ulong)puVar5 & 0x3f);
      lVar11 = *(long *)(puVar3 + 0x30);
      UVar6 = Foundation::UUID::typeMetadataAccessor();
      (**(code **)(*(long *)(UVar6.unknown + -8) + 0x20))
                (lVar11 + *(long *)(*(long *)(UVar6.unknown + -8) + 0x48) * (long)puVar5,puVar10,
                 UVar6.unknown);
      lVar11 = *(long *)(puVar3 + 0x38);
      puVar4 = &DAT_100fe6fd0;
      FUN_1000f7830(&DAT_100fe6fd0,&DAT_100c7b480);
      (**(code **)(*(long *)(puVar4 + -8) + 0x20))
                (lVar11 + *(long *)(*(long *)(puVar4 + -8) + 0x48) * (long)puVar5,puVar10 + iVar1,
                 puVar4);
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100800a60);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      param_1 = param_1 + lVar8;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar3);
  }
  return puVar3;
}



/* Address: 0x100800a60 | FUN_100800a60 */

undefined * FUN_100800a60(long param_1)

{
  int iVar1;
  code *pcVar2;
  _DictionaryStorage *this;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  UUID UVar6;
  undefined1 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined *capacity;
  undefined1 *puVar10;
  long lVar11;
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fe6fa8;
    FUN_1000f7830(&DAT_100fe6fa8,&DAT_100c7b458);
    puVar3 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
  }
  puVar4 = &DAT_100fe6fb0;
  FUN_1000f7830(&DAT_100fe6fb0,&DAT_100c7b460);
  lVar8 = *(long *)(puVar4 + -8);
  puVar10 = &stack0xffffffffffffffa0 + -(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (capacity != (undefined *)0x0) {
    iVar1 = *(int *)(puVar4 + 0x30);
    param_1 = param_1 + ((ulong)*(byte *)(lVar8 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff));
    lVar8 = *(long *)(lVar8 + 0x48);
    _swift_retain(puVar3);
    do {
      puVar7 = puVar10;
      FUN_1000f8cac(param_1,puVar10,&DAT_100fe6fb0,&DAT_100c7b460);
      puVar5 = puVar10;
      FUN_1008351b4();
      if (((ulong)puVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100800c04);
        (*pcVar2)();
      }
      uVar9 = (ulong)puVar5 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar9 + 0x40) =
           *(ulong *)(puVar3 + uVar9 + 0x40) | 1L << ((ulong)puVar5 & 0x3f);
      lVar11 = *(long *)(puVar3 + 0x30);
      UVar6 = Foundation::UUID::typeMetadataAccessor();
      (**(code **)(*(long *)(UVar6.unknown + -8) + 0x20))
                (lVar11 + *(long *)(*(long *)(UVar6.unknown + -8) + 0x48) * (long)puVar5,puVar10,
                 UVar6.unknown);
      lVar11 = *(long *)(puVar3 + 0x38);
      puVar4 = &DAT_100fe6fb8;
      FUN_1000f7830(&DAT_100fe6fb8,&DAT_100c7cc90);
      (**(code **)(*(long *)(puVar4 + -8) + 0x20))
                (lVar11 + *(long *)(*(long *)(puVar4 + -8) + 0x48) * (long)puVar5,puVar10 + iVar1,
                 puVar4);
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100800c08);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      param_1 = param_1 + lVar8;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar3);
  }
  return puVar3;
}



/* Address: 0x100800c08 | FUN_100800c08 */

void FUN_100800c08(void)

{
  FUN_100800c1c();
  return;
}



/* Address: 0x100800c1c | FUN_100800c1c */

void FUN_100800c1c(long param_1,code *param_2,undefined8 param_3,uint param_4,long *param_5)

{
  ulong *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  ulong uVar8;
  code *pcVar9;
  bool bVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  ulong local_b0;
  ulong uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  
  uVar16 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar20 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar20 = ~(-1L << (uVar16 & 0x3f));
  }
  uVar20 = uVar20 & *(ulong *)(param_1 + 0x40);
  _swift_bridgeObjectRetain();
  _swift_retain(param_3);
  lVar21 = 0;
  while( true ) {
    while (uVar20 != 0) {
      uVar13 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | lVar21 << 6;
      puVar14 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar13 * 0x10);
      local_88 = *puVar14;
      uVar4 = puVar14[1];
      puVar14 = (undefined8 *)(*(long *)(param_1 + 0x38) + uVar13 * 0x18);
      uVar2 = *puVar14;
      uVar5 = puVar14[1];
      uVar7 = *(undefined1 *)(puVar14 + 2);
      uStack_80 = uVar4;
      local_78 = uVar2;
      uStack_70 = uVar5;
      local_68 = uVar7;
      _swift_bridgeObjectRetain(uVar4);
      FUN_1004a7398(uVar2,uVar5,uVar7);
      (*param_2)(&local_b0,&local_88);
      _swift_bridgeObjectRelease(uVar4);
      FUN_1004dc818(uVar2,uVar5,uVar7);
      uVar7 = local_90;
      uVar4 = uStack_98;
      uVar2 = local_a0;
      uVar8 = uStack_a8;
      uVar13 = local_b0;
      lVar18 = *param_5;
      uVar11 = local_b0;
      uVar12 = uStack_a8;
      FUN_100071370();
      lVar15 = *(long *)(lVar18 + 0x10);
      uVar17 = (ulong)~(uint)uVar12 & 1;
      lVar19 = lVar15 + uVar17;
      if (SCARRY8(lVar15,uVar17)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x100800eb4);
        (*pcVar9)();
      }
      if (*(long *)(lVar18 + 0x18) < lVar19) {
        FUN_100845078(lVar19,param_4 & 1);
        uVar11 = uVar13;
        uVar17 = uVar8;
        FUN_100071370();
        if (((uint)uVar12 & 1) != ((uint)uVar17 & 1)) {
          Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100800ec8);
          (*pcVar9)();
        }
      }
      else if ((param_4 & 1) == 0) {
        FUN_1008444ac();
      }
      uVar20 = uVar20 - 1 & uVar20;
      lVar19 = *param_5;
      if ((uVar12 & 1) == 0) {
        lVar15 = lVar19 + (uVar11 >> 6) * 8;
        *(ulong *)(lVar15 + 0x40) = *(ulong *)(lVar15 + 0x40) | 1L << (uVar11 & 0x3f);
        puVar1 = (ulong *)(*(long *)(lVar19 + 0x30) + uVar11 * 0x10);
        *puVar1 = uVar13;
        puVar1[1] = uVar8;
        puVar14 = (undefined8 *)(*(long *)(lVar19 + 0x38) + uVar11 * 0x18);
        *puVar14 = uVar2;
        puVar14[1] = uVar4;
        *(undefined1 *)(puVar14 + 2) = uVar7;
        if (SCARRY8(*(long *)(lVar19 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100800eb8);
          (*pcVar9)();
        }
        *(long *)(lVar19 + 0x10) = *(long *)(lVar19 + 0x10) + 1;
      }
      else {
        _swift_bridgeObjectRelease(uVar8);
        puVar14 = (undefined8 *)(*(long *)(lVar19 + 0x38) + uVar11 * 0x18);
        uVar5 = *puVar14;
        uVar3 = puVar14[1];
        *puVar14 = uVar2;
        puVar14[1] = uVar4;
        uVar6 = *(undefined1 *)(puVar14 + 2);
        *(undefined1 *)(puVar14 + 2) = uVar7;
        FUN_1004dc818(uVar5,uVar3,uVar6);
      }
      param_4 = 1;
    }
    bVar10 = SCARRY8(lVar21,1);
    lVar21 = lVar21 + 1;
    if (bVar10) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x100800eb0);
      (*pcVar9)();
    }
    if ((long)(uVar16 + 0x3f >> 6) <= lVar21) break;
    uVar20 = ((ulong *)(param_1 + 0x40))[lVar21];
  }
  _swift_release(param_3);
  _swift_release(param_1);
  return;
}



/* Address: 0x100800ec8 | thunk_FUN_100800ecc */

void thunk_FUN_100800ecc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe6f78 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7b098;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7b098,&DAT_100f04440);
  DAT_100fe6f78 = pTVar1;
  return;
}



/* Address: 0x100800ecc | FUN_100800ecc */

void FUN_100800ecc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe6f78 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7b098;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7b098,&DAT_100f04440);
  DAT_100fe6f78 = pTVar1;
  return;
}



/* Address: 0x100800f0c | thunk_FUN_100800f10 */

void thunk_FUN_100800f10(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe6f80 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7b1b0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7b1b0,&DAT_100f04440);
  DAT_100fe6f80 = pTVar1;
  return;
}



/* Address: 0x100800f10 | FUN_100800f10 */

void FUN_100800f10(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe6f80 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7b1b0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7b1b0,&DAT_100f04440);
  DAT_100fe6f80 = pTVar1;
  return;
}



/* Address: 0x100800f50 | thunk_FUN_100800f54 */

void thunk_FUN_100800f54(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe6f88 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7b1f0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7b1f0,&DAT_100f04440);
  DAT_100fe6f88 = pTVar1;
  return;
}



/* Address: 0x100800f54 | FUN_100800f54 */

void FUN_100800f54(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe6f88 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7b1f0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7b1f0,&DAT_100f04440);
  DAT_100fe6f88 = pTVar1;
  return;
}



/* Address: 0x100800f94 | thunk_FUN_100800f98 */

void thunk_FUN_100800f98(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe6f90 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7b258;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7b258,&DAT_100f044c0);
  DAT_100fe6f90 = pTVar1;
  return;
}



/* Address: 0x100800f98 | FUN_100800f98 */

void FUN_100800f98(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe6f90 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7b258;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7b258,&DAT_100f044c0);
  DAT_100fe6f90 = pTVar1;
  return;
}



/* Address: 0x100800fd8 | thunk_FUN_100800fdc */

void thunk_FUN_100800fdc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe6f98 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7b370;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7b370,&DAT_100f044c0);
  DAT_100fe6f98 = pTVar1;
  return;
}



/* Address: 0x100800fdc | FUN_100800fdc */

void FUN_100800fdc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe6f98 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7b370;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7b370,&DAT_100f044c0);
  DAT_100fe6f98 = pTVar1;
  return;
}



/* Address: 0x10080101c | thunk_FUN_100801020 */

void thunk_FUN_100801020(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe6fa0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7b3b0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7b3b0,&DAT_100f044c0);
  DAT_100fe6fa0 = pTVar1;
  return;
}



/* Address: 0x100801020 | FUN_100801020 */

void FUN_100801020(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe6fa0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7b3b0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7b3b0,&DAT_100f044c0);
  DAT_100fe6fa0 = pTVar1;
  return;
}



/* Address: 0x100801060 | FUN_100801060 */

void FUN_100801060(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  return;
}



/* Address: 0x10080106c | FUN_10080106c */

undefined1  [16] FUN_10080106c(void)

{
  return ZEXT816(0x100f04440);
}



/* Address: 0x10080107c | thunk_FUN_1001b68a4 */

undefined8 * thunk_FUN_1001b68a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x100801080 | thunk_FUN_1001b6900 */

undefined8 * thunk_FUN_1001b6900(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_bridgeObjectRelease(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x100801084 | FUN_100801084 */

undefined1  [16] FUN_100801084(void)

{
  return ZEXT816(0x100f044c0);
}



/* Address: 0x100801094 | thunk_FUN_1007ffc64 */

void thunk_FUN_1007ffc64(void)

{
  FUN_1007ffc64();
  return;
}



/* Address: 0x100801098 | thunk_FUN_1007ffc88 */

void thunk_FUN_1007ffc88(void)

{
  FUN_1007ffc88();
  return;
}



/* Address: 0x10080109c | thunk_FUN_1001b6840 */

void thunk_FUN_1001b6840(undefined8 *param_1)

{
  _swift_bridgeObjectRelease(*param_1);
  _swift_bridgeObjectRelease(param_1[1]);
  return;
}



/* Address: 0x1008010a0 | thunk_FUN_1007ffa50 */

void thunk_FUN_1007ffa50(void)

{
  FUN_1007ffa50();
  return;
}



/* Address: 0x1008010a4 | thunk_FUN_1007ffc24 */

void thunk_FUN_1007ffc24(void)

{
  FUN_1007ffc24();
  return;
}



/* Address: 0x1008010a8 | thunk_FUN_1000d0d74 */

void thunk_FUN_1000d0d74(void)

{
  thunk_FUN_1000d0d74();
  return;
}



/* Address: 0x1008010ac | thunk_FUN_1001aed78 */

void thunk_FUN_1001aed78(void)

{
  FUN_1001aed78();
  return;
}



/* Address: 0x1008010b0 | thunk_FUN_1007ff9dc */

void thunk_FUN_1007ff9dc(void)

{
  thunk_FUN_1007ff9dc();
  return;
}



/* Address: 0x1008010b4 | thunk_FUN_1007ff8e4 */

void thunk_FUN_1007ff8e4(void)

{
  thunk_FUN_1007ff8e4();
  return;
}



/* Address: 0x1008010b8 | thunk_FUN_10009468c */

void thunk_FUN_10009468c(void)

{
  FUN_10009468c();
  return;
}



/* Address: 0x1008010bc | thunk_FUN_1007ffb18 */

void thunk_FUN_1007ffb18(void)

{
  thunk_FUN_1007ffb18();
  return;
}



/* Address: 0x1008010c0 | thunk_FUN_1007fffbc */

undefined1  [16] thunk_FUN_1007fffbc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_100800568(PTR___swiftEmptyArrayStorage_100eae0d8,FUN_100071370);
  uVar2 = param_2;
  FUN_10082e974(param_1,param_2,puVar1);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(puVar1);
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Address: 0x1008010c4 | thunk_FUN_100800064 */

void thunk_FUN_100800064(void)

{
  FUN_100800064();
  return;
}



/* Address: 0x1008010c8 | thunk_FUN_1007ffa94 */

void thunk_FUN_1007ffa94(void)

{
  thunk_FUN_1007ffa94();
  return;
}


