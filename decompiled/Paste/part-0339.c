/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10042c704 | FUN_10042c704 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

NSObject * FUN_10042c704(Index param_1,__CocoaSet param_2,char param_3,ulong param_4)

{
  code *pcVar1;
  bool bVar2;
  __int32 _Var3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *local_60;
  NSObject *local_58;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_3 == '\x01') {
      Swift::__CocoaSet::_element(param_1,param_2);
      uVar4 = 0;
      local_60 = (undefined *)param_1.cmsgPointer.unknown;
      FUN_10042d2a4(0);
      _swift_dynamicCast(&local_58,&local_60,PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8,
                         uVar4,7);
      return local_58;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10042c8f4);
    (*pcVar1)();
  }
  if (param_3 == '\x01') {
    uVar4 = 0;
    FUN_10042d2a4(0);
    _Var3 = Swift::__CocoaSet::Index::get_age(param_1);
    if (_Var3 != *(int *)(param_4 + 0x24)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10042c8e8);
      (*pcVar1)();
    }
    Swift::__CocoaSet::Index::_get_element(param_1);
    local_60 = (undefined *)param_1.cmsgPointer.unknown;
    _swift_dynamicCast(&local_58,&local_60,PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8,
                       uVar4,7);
    uVar5 = (extension_ObjectiveC)::__C::NSObject::_rawHashValue(*(__int64 *)(param_4 + 0x28));
    uVar6 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
    param_1.cmsgPointer.unknown = (UnsafeMutablePointer)(uVar5 & (uVar6 ^ 0xffffffffffffffff));
    if ((*(ulong *)(param_4 + 0x38 + ((ulong)param_1.cmsgPointer.unknown >> 6) * 8) >>
         ((ulong)param_1.cmsgPointer.unknown & 0x3f) & 1) != 0) {
      do {
        bVar2 = (extension_ObjectiveC)::__C::NSObject::___infix
                          (*(NSObject **)
                            (*(long *)(param_4 + 0x30) + (long)param_1.cmsgPointer.unknown * 8),
                           local_58);
        if (bVar2) goto LAB_10042c8c0;
        param_1.cmsgPointer.unknown =
             (UnsafeMutablePointer)((ulong)((long)param_1.cmsgPointer.unknown + 1) & ~uVar6);
      } while ((*(ulong *)(param_4 + 0x38 + ((ulong)param_1.cmsgPointer.unknown >> 6) * 8) >>
                ((ulong)param_1.cmsgPointer.unknown & 0x3f) & 1) != 0);
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10042c888);
    (*pcVar1)();
  }
  if ((ulong)param_1.cmsgPointer.unknown >> ((ulong)*(byte *)(param_4 + 0x20) & 0x3f) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10042c8ec);
    (*pcVar1)();
  }
  if ((*(ulong *)(param_4 + ((ulong)param_1.cmsgPointer.unknown >> 6) * 8 + 0x38) >>
       ((ulong)param_1.cmsgPointer.unknown & 0x3f) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10042c8f0);
    (*pcVar1)();
  }
  if (*(int *)(param_4 + 0x24) != (int)param_2.unknown) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10042c8b8);
    (*pcVar1)();
  }
LAB_10042c8c0:
  return *(NSObject **)(*(long *)(param_4 + 0x30) + (long)param_1.cmsgPointer.unknown * 8);
}



/* Address: 0x10042c8f4 | FUN_10042c8f4 */

undefined * FUN_10042c8f4(long param_1)

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
  undefined8 uVar8;
  undefined8 *puVar9;
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fc6530;
    FUN_1000f7830(&DAT_100fc6530,&DAT_100c49ed0);
    puVar5 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    _swift_retain();
    puVar9 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar9[-2];
      uVar3 = puVar9[-1];
      uVar8 = *puVar9;
      _swift_bridgeObjectRetain(uVar3);
      _swift_unknownObjectRetain(uVar8);
      uVar6 = uVar2;
      uVar7 = uVar3;
      FUN_100071370();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10042c9ec);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar8;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10042c9f0);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      capacity = capacity + -1;
      puVar9 = puVar9 + 3;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar5);
  }
  return puVar5;
}



/* Address: 0x10042c9f0 | FUN_10042c9f0 */

undefined * FUN_10042c9f0(long param_1)

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
    this = (_DictionaryStorage *)&DAT_100fc64f0;
    FUN_1000f7830(&DAT_100fc64f0,&DAT_100c49e98);
    puVar5 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    param_1 = param_1 + 0x20;
    _swift_retain();
    do {
      FUN_1000f8cac(param_1,&local_90,&DAT_100fc5d58,&DAT_100c49548);
      uVar3 = uStack_88;
      uVar2 = local_90;
      uVar6 = local_90;
      uVar7 = uStack_88;
      FUN_100071370();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10042cb18);
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
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10042cb1c);
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



/* Address: 0x10042cb1c | FUN_10042cb1c */

undefined * FUN_10042cb1c(long param_1)

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
    this = (_DictionaryStorage *)&DAT_100fc6528;
    FUN_1000f7830(&DAT_100fc6528,&DAT_100c49ec8);
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
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10042cc28);
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
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10042cc2c);
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



/* Address: 0x10042cc2c | FUN_10042cc2c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

Set<undefined> FUN_10042cc2c(undefined *param_1)

{
  long lVar1;
  _CocoaArrayWrapper _Var2;
  Set<undefined> SVar3;
  code *pcVar4;
  Set<undefined> SVar5;
  ulong uVar6;
  __int64 minimumCapacity;
  long lVar7;
  ulong uVar8;
  undefined1 local_60 [8];
  undefined *local_58;
  
  if ((ulong)param_1 >> 0x3e == 0) {
    minimumCapacity = *(__int64 *)((undefined *)((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var2.unknown = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if (((ulong)param_1 & 0x8000000000000000) != 0) {
      _Var2.unknown = param_1;
    }
    minimumCapacity = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  FUN_10042d2a4(0);
  FUN_10042d2e8();
  SVar5 = Swift::Set::init(minimumCapacity);
  if ((ulong)param_1 >> 0x3e == 0) {
    lVar7 = *(long *)((undefined *)((ulong)param_1 & 0xffffffffffffff8) + 0x10);
    SVar3 = SVar5;
  }
  else {
    _Var2.unknown = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if (((ulong)param_1 & 0x8000000000000000) != 0) {
      _Var2.unknown = param_1;
    }
    local_58 = SVar5.unknown;
    lVar7 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
    SVar3.unknown = local_58;
  }
  local_58 = SVar5.unknown;
  if (lVar7 != 0) {
    uVar8 = 0;
    local_58 = SVar3.unknown;
    do {
      if (((ulong)param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)param_1 & 0xffffffffffffff8) + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10042cd44);
          (*pcVar4)();
        }
        uVar6 = *(ulong *)(param_1 + uVar8 * 8 + 0x20);
      }
      else {
        uVar6 = uVar8;
        FUN_1004205a8(uVar8,param_1);
      }
      lVar1 = uVar8 + 1;
      if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10042cd40);
        (*pcVar4)();
      }
      FUN_10042b4dc(local_60,uVar6);
      uVar8 = uVar8 + 1;
    } while (lVar1 != lVar7);
  }
  return (Set<undefined>)local_58;
}



/* Address: 0x10042cd58 | FUN_10042cd58 */

Set<undefined> FUN_10042cd58(long param_1)

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
      FUN_10042b398(auStack_58,uVar1,uVar2);
      _swift_bridgeObjectRelease(local_50);
      puVar3 = puVar3 + 2;
      minimumCapacity = minimumCapacity + -1;
    } while (minimumCapacity != 0);
  }
  return (Set<undefined>)local_48;
}



/* Address: 0x10042cdec | FUN_10042cdec */

void FUN_10042cdec(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_deallocObject();
  return;
}



/* Address: 0x10042ce20 | FUN_10042ce20 */

void FUN_10042ce20(void)

{
  FUN_100429010();
  return;
}



/* Address: 0x10042ce58 | thunk_FUN_100405f18 */

void thunk_FUN_100405f18(void)

{
  FUN_100405f18();
  return;
}



/* Address: 0x10042ce5c | thunk_FUN_10042d9b0 */

void thunk_FUN_10042d9b0(void)

{
  FUN_10042d9b0();
  return;
}



/* Address: 0x10042ce60 | FUN_10042ce60 */

void FUN_10042ce60(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x10042ce8c | FUN_10042ce8c */

void FUN_10042ce8c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1004295ec(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x10042ce98 | FUN_10042ce98 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10042ce98(void)

{
  long unaff_x20;
  
  FUN_100004594(unaff_x20 + 0x18);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_deallocObject();
  return;
}



/* Address: 0x10042cecc | FUN_10042cecc */

void FUN_10042cecc(void)

{
  FUN_10041a79c();
  return;
}



/* Address: 0x10042cedc | thunk_FUN_10042cf10 */

void thunk_FUN_10042cf10(void)

{
  FUN_10042cf10();
  return;
}



/* Address: 0x10042cee0 | FUN_10042cee0 */

void FUN_10042cee0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10041a860(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x10042ceec | FUN_10042ceec */

void FUN_10042ceec(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x10042cf10 | FUN_10042cf10 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10042cf10(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x10042cf3c | FUN_10042cf3c */

undefined * FUN_10042cf3c(long param_1)

{
  String *pSVar1;
  undefined8 *puVar2;
  long *plVar3;
  char *pcVar4;
  _StringGuts _Var5;
  undefined *puVar6;
  _StringGuts _Var7;
  String SVar8;
  code *pcVar9;
  bool bVar10;
  _SetStorage *this;
  undefined *puVar11;
  Hasher into;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined *capacity;
  undefined *puVar17;
  undefined1 auStack_a8 [72];
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar11 = PTR___swiftEmptySetSingleton_100eae0e8;
  if (capacity != (undefined *)0x0) {
    this = (_SetStorage *)&DAT_100fc6508;
    FUN_1000f7830(&DAT_100fc6508,&DAT_100c49ea8);
    puVar11 = capacity;
    Swift::_SetStorage::_allocate(this,(__int64)capacity);
    puVar17 = (undefined *)0x0;
    do {
      pSVar1 = (String *)(param_1 + 0x20 + (long)puVar17 * 0x10);
      pcVar4 = pSVar1->str;
      puVar6 = pSVar1->bridgeObject;
      SVar8 = *pSVar1;
      Swift::Hasher::init(*(__int64 *)(puVar11 + 0x28));
      _swift_bridgeObjectRetain(puVar6);
      into.unknown = auStack_a8;
      Swift::String::hash(into,SVar8);
      uVar12 = Swift::Hasher::_finalize(into);
      uVar16 = -1L << ((ulong)(byte)puVar11[0x20] & 0x3f);
      uVar12 = uVar12 & (uVar16 ^ 0xffffffffffffffff);
      uVar13 = uVar12 >> 6;
      uVar14 = *(ulong *)(puVar11 + uVar13 * 8 + 0x38);
      uVar15 = 1L << (uVar12 & 0x3f);
      if ((uVar15 & uVar14) != 0) {
        do {
          puVar2 = (undefined8 *)(*(long *)(puVar11 + 0x30) + uVar12 * 0x10);
          _Var5.unknown = (undefined *)*puVar2;
          _Var7.unknown = (undefined *)puVar2[1];
          if ((_Var5.unknown == pcVar4 && _Var7.unknown == puVar6) ||
             (bVar10 = Swift::_stringCompareWithSmolCheck
                                 (_Var5,_Var7,(_StringComparisonResult)(__int8)pcVar4), bVar10)) {
            _swift_bridgeObjectRelease(puVar6);
            goto LAB_10042cfa8;
          }
          uVar12 = uVar12 + 1 & ~uVar16;
          uVar13 = uVar12 >> 6;
          uVar14 = *(ulong *)(puVar11 + uVar13 * 8 + 0x38);
          uVar15 = 1L << (uVar12 & 0x3f);
        } while ((uVar15 & uVar14) != 0);
      }
      *(ulong *)(puVar11 + uVar13 * 8 + 0x38) = uVar15 | uVar14;
      plVar3 = (long *)(*(long *)(puVar11 + 0x30) + uVar12 * 0x10);
      *plVar3 = (long)pcVar4;
      plVar3[1] = (long)puVar6;
      if (SCARRY8(*(long *)(puVar11 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10042d0b0);
        (*pcVar9)();
      }
      *(long *)(puVar11 + 0x10) = *(long *)(puVar11 + 0x10) + 1;
LAB_10042cfa8:
      puVar17 = puVar17 + 1;
    } while (puVar17 != capacity);
  }
  return puVar11;
}



/* Address: 0x10042d0b0 | FUN_10042d0b0 */

undefined1  [16] FUN_10042d0b0(ulong param_1,int param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  
  if (param_1 >> ((ulong)*(byte *)(param_4 + 0x20) & 0x3f) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10042d0f0);
    (*pcVar1)();
  }
  if ((*(ulong *)(param_4 + (param_1 >> 6) * 8 + 0x38) >> (param_1 & 0x3f) & 1) != 0) {
    if (*(int *)(param_4 + 0x24) == param_2) {
      return *(undefined1 (*) [16])(*(long *)(param_4 + 0x30) + param_1 * 0x10);
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10042d0f8);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10042d0f4);
  (*pcVar1)();
}



/* Address: 0x10042d0f8 | FUN_10042d0f8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10042d0f8(void)

{
  return ZEXT816(0x100fc6430);
}



/* Address: 0x10042d118 | FUN_10042d118 */

undefined8 FUN_10042d118(undefined8 param_1,undefined8 param_2)

{
  FUN_10041b5fc(param_2,param_1);
  return param_2;
}



/* Address: 0x10042d154 | FUN_10042d154 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10042d154(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  NSDictionary *pNVar3;
  ID IVar4;
  undefined8 uVar5;
  String SVar6;
  
  uVar5 = *(undefined8 *)PTR__SKErrorDomain_100ea8078;
  puVar2 = &DAT_100fc5d50;
  FUN_1000f7830(&DAT_100fc5d50,&DAT_100c49540);
  _swift_initStackObject();
  *(undefined8 *)(puVar2 + 0x18) = 2;
  *(undefined8 *)(puVar2 + 0x10) = 1;
  SVar6 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  *(char **)(puVar2 + 0x20) = SVar6.str;
  *(undefined **)(puVar2 + 0x48) = PTR___type_metadata_for_Swift_String_100eac208;
  *(void **)(puVar2 + 0x28) = SVar6.bridgeObject;
  *(undefined8 *)(puVar2 + 0x30) = param_2;
  *(undefined8 *)(puVar2 + 0x38) = param_3;
  _swift_bridgeObjectRetain(param_3);
  puVar1 = puVar2;
  FUN_10042c9f0(puVar2);
  _swift_setDeallocating(puVar2);
  FUN_1000fb4c4(puVar2 + 0x20,&DAT_100fc5d58,&DAT_100c49548);
  puVar2 = &_OBJC_CLASS___NSError;
  _objc_allocWithZone();
  pNVar3 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(puVar1);
  IVar4 = objc_stub::initWithDomain_code_userInfo_((ID)puVar2,uVar5,param_1,pNVar3);
  return IVar4;
}



/* Address: 0x10042d2a4 | FUN_10042d2a4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_10042d2a4(void)

{
  undefined *puVar1;
  
  if (DAT_100fc5a28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___SKProduct;
  _swift_getObjCClassMetadata();
  DAT_100fc5a28 = puVar1;
  return;
}



/* Address: 0x10042d2e8 | FUN_10042d2e8 */

void FUN_10042d2e8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (DAT_100fc64f8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_10042d2a4(0xff);
  puVar2 = PTR_ObjectiveC____C__NSObject_>Swift__Hashable_100eae8d0;
  _swift_getWitnessTable(PTR_ObjectiveC____C__NSObject_>Swift__Hashable_100eae8d0,uVar1);
  DAT_100fc64f8 = puVar2;
  return;
}



/* Address: 0x10042d32c | FUN_10042d32c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_10042d32c(long param_1,undefined8 param_2,char *param_3,undefined *param_4)

{
  ulong uVar1;
  String SVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined *puVar6;
  NSDictionary *pNVar7;
  ID IVar8;
  undefined *puVar9;
  undefined *puVar10;
  _StringGuts _Var11;
  char *pcVar12;
  long lVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  undefined1 auVar19 [16];
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  void *local_3b0;
  char *pcStack_3a8;
  undefined *local_368;
  char *local_2c0;
  void *pvStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined1 uStack_1f0;
  undefined7 uStack_1ef;
  undefined1 uStack_1e8;
  undefined8 uStack_1e7;
  char *local_1d8;
  void *pvStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 local_168;
  byte local_167;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined2 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined2 local_78;
  
  lVar13 = *(long *)(param_1 + 0x10);
  puVar9 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar13 == 0) {
    local_368 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    param_1 = param_1 + 0x20;
    pcVar12 = *(char **)PTR__SKErrorDomain_100ea8078;
    local_368 = PTR___swiftEmptyArrayStorage_100eae0d8;
    do {
      FUN_10042d118(param_1,&local_e8);
      uStack_118 = uStack_a0;
      local_120 = local_a8;
      uStack_108 = uStack_90;
      uStack_110 = uStack_98;
      uStack_f8 = uStack_80;
      local_100 = local_88;
      local_f0 = local_78;
      uStack_158 = uStack_e0;
      local_160 = local_e8;
      uStack_148 = uStack_d0;
      uStack_150 = uStack_d8;
      uStack_138 = uStack_c0;
      local_140 = local_c8;
      uStack_128 = uStack_b0;
      uStack_130 = uStack_b8;
      _Var11.unknown = (undefined *)&local_1d8;
      FUN_10042d118(&local_160);
      pcVar5 = local_1d8;
      if (local_167 < 2) {
        if (local_167 == 0) {
          uStack_278 = uStack_190;
          local_280 = local_198;
          uStack_270 = uStack_188;
          local_250 = local_168;
          pvStack_2b8 = pvStack_1d0;
          local_2c0 = local_1d8;
          uStack_2a8 = uStack_1c0;
          uStack_2b0 = uStack_1c8;
          uStack_298 = uStack_1b0;
          local_2a0 = local_1b8;
          uStack_288 = uStack_1a0;
          uStack_290 = uStack_1a8;
          local_248 = 0;
          uStack_240 = 0xe000000000000000;
          Swift::_StringGuts::grow(0x36,_Var11);
          SVar14.bridgeObject = (void *)0x8000000100da6550;
          SVar14.str = (char *)0xd000000000000018;
          SVar20.bridgeObject = param_4;
          SVar20.str = param_3;
          Swift::String::append(SVar14,SVar20);
          local_3b0 = pvStack_2b8;
          pcStack_3a8 = local_2c0;
          SVar2.bridgeObject = pvStack_2b8;
          SVar2.str = local_2c0;
          _swift_bridgeObjectRetain(pvStack_2b8);
          SVar21.bridgeObject = param_4;
          SVar21.str = param_3;
          Swift::String::append(SVar2,SVar21);
          SVar15.bridgeObject = (void *)0x8000000100da6570;
          SVar15.str = (char *)0xd00000000000001c;
          SVar22.bridgeObject = param_4;
          SVar22.str = param_3;
          Swift::String::append(SVar15,SVar22);
          uVar4 = uStack_240;
          uVar3 = local_248;
          puVar6 = &DAT_100fc5d50;
          FUN_1000f7830(&DAT_100fc5d50,&DAT_100c49540);
          _swift_initStackObject();
          *(undefined8 *)(puVar6 + 0x18) = 2;
          *(undefined8 *)(puVar6 + 0x10) = 1;
          SVar16 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          *(char **)(puVar6 + 0x20) = SVar16.str;
          *(undefined **)(puVar6 + 0x48) = PTR___type_metadata_for_Swift_String_100eac208;
          *(void **)(puVar6 + 0x28) = SVar16.bridgeObject;
          *(undefined8 *)(puVar6 + 0x30) = uVar3;
          *(undefined8 *)(puVar6 + 0x38) = uVar4;
          _swift_bridgeObjectRetain(uVar4);
          puVar10 = puVar6;
          FUN_10042c9f0(puVar6);
          _swift_setDeallocating(puVar6);
          FUN_1000fb4c4(puVar6 + 0x20,&DAT_100fc5d58,&DAT_100c49548);
          puVar6 = &_OBJC_CLASS___NSError;
          _objc_allocWithZone();
          pNVar7 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
          _swift_bridgeObjectRelease(puVar10);
          param_4 = (undefined *)0x0;
          param_3 = pcVar12;
          IVar8 = objc_stub::initWithDomain_code_userInfo_((ID)puVar6,pcVar12,0,pNVar7);
          _swift_bridgeObjectRelease(uVar4);
LAB_10042d77c:
          puVar6 = puVar9;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar10 = puVar9;
          if (((ulong)puVar6 & 1) == 0) {
            puVar10 = (undefined *)0x0;
            param_3 = &DAT_00000001;
            FUN_100420fd4(0,*(long *)(puVar9 + 0x10) + 1);
            param_4 = puVar9;
          }
          uVar1 = *(ulong *)(puVar10 + 0x10);
          puVar9 = puVar10;
          if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar1) {
            puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
            param_3 = &DAT_00000001;
            FUN_100420fd4(puVar9,uVar1 + 1);
            param_4 = puVar10;
          }
          *(ulong *)(puVar9 + 0x10) = uVar1 + 1;
          *(ID *)(puVar9 + uVar1 * 0x18 + 0x20) = IVar8;
          *(char **)(puVar9 + uVar1 * 0x18 + 0x28) = pcStack_3a8;
          *(void **)(puVar9 + uVar1 * 0x18 + 0x30) = local_3b0;
          FUN_10041e470(&local_2c0);
        }
        else {
          uStack_278 = uStack_190;
          local_280 = local_198;
          uStack_270 = uStack_188;
          pvStack_2b8 = pvStack_1d0;
          local_2c0 = local_1d8;
          uStack_2a8 = uStack_1c0;
          uStack_2b0 = uStack_1c8;
          uStack_298 = uStack_1b0;
          local_2a0 = local_1b8;
          uStack_288 = uStack_1a0;
          uStack_290 = uStack_1a8;
          FUN_1002c4bd0(&local_2c0,&local_248);
          puVar6 = local_368;
          _swift_isUniquelyReferenced_nonNull_native();
          if (((ulong)puVar6 & 1) == 0) {
            puVar6 = (undefined *)0x0;
            param_3 = &DAT_00000001;
            FUN_1004206e4(0,*(long *)(local_368 + 0x10) + 1);
            param_4 = local_368;
            local_368 = puVar6;
          }
          uVar1 = *(ulong *)(local_368 + 0x10);
          if (*(ulong *)(local_368 + 0x18) >> 1 <= uVar1) {
            puVar6 = (undefined *)(ulong)(1 < *(ulong *)(local_368 + 0x18));
            param_3 = &DAT_00000001;
            FUN_1004206e4(puVar6,uVar1 + 1);
            param_4 = local_368;
            local_368 = puVar6;
          }
          *(ulong *)(local_368 + 0x10) = uVar1 + 1;
          *(undefined8 *)(local_368 + uVar1 * 0x70 + 0x38) = uStack_230;
          *(undefined8 *)(local_368 + uVar1 * 0x70 + 0x30) = local_238;
          *(undefined8 *)(local_368 + uVar1 * 0x70 + 0x48) = uStack_220;
          *(undefined8 *)(local_368 + uVar1 * 0x70 + 0x40) = local_228;
          *(undefined8 *)(local_368 + uVar1 * 0x70 + 0x28) = uStack_240;
          *(undefined8 *)(local_368 + uVar1 * 0x70 + 0x20) = local_248;
          *(undefined8 *)(local_368 + uVar1 * 0x70 + 0x81) = uStack_1e7;
          *(ulong *)(local_368 + uVar1 * 0x70 + 0x79) = CONCAT17(uStack_1e8,uStack_1ef);
          *(undefined8 *)(local_368 + uVar1 * 0x70 + 0x68) = uStack_200;
          *(undefined8 *)(local_368 + uVar1 * 0x70 + 0x60) = local_208;
          *(ulong *)(local_368 + uVar1 * 0x70 + 0x78) = CONCAT71(uStack_1ef,uStack_1f0);
          *(undefined8 *)(local_368 + uVar1 * 0x70 + 0x70) = local_1f8;
          *(undefined8 *)(local_368 + uVar1 * 0x70 + 0x58) = uStack_210;
          *(undefined8 *)(local_368 + uVar1 * 0x70 + 0x50) = local_218;
          FUN_1002c4c0c(&local_2c0);
        }
      }
      else {
        if (local_167 == 2) {
          uStack_278 = uStack_190;
          local_280 = local_198;
          uStack_270 = uStack_188;
          local_250 = local_168;
          pvStack_2b8 = pvStack_1d0;
          local_2c0 = local_1d8;
          uStack_2a8 = uStack_1c0;
          uStack_2b0 = uStack_1c8;
          uStack_298 = uStack_1b0;
          local_2a0 = local_1b8;
          uStack_288 = uStack_1a0;
          uStack_290 = uStack_1a8;
          local_248 = 0;
          uStack_240 = 0xe000000000000000;
          Swift::_StringGuts::grow(0x36,_Var11);
          SVar17.bridgeObject = (void *)0x8000000100da6550;
          SVar17.str = (char *)0xd000000000000018;
          SVar23.bridgeObject = param_4;
          SVar23.str = param_3;
          Swift::String::append(SVar17,SVar23);
          local_3b0 = pvStack_2b8;
          pcStack_3a8 = local_2c0;
          SVar16.bridgeObject = pvStack_2b8;
          SVar16.str = local_2c0;
          _swift_bridgeObjectRetain(pvStack_2b8);
          SVar24.bridgeObject = param_4;
          SVar24.str = param_3;
          Swift::String::append(SVar16,SVar24);
          SVar18.bridgeObject = (void *)0x8000000100da6570;
          SVar18.str = (char *)0xd00000000000001c;
          SVar25.bridgeObject = param_4;
          SVar25.str = param_3;
          Swift::String::append(SVar18,SVar25);
          uVar4 = uStack_240;
          uVar3 = local_248;
          puVar6 = &DAT_100fc5d50;
          FUN_1000f7830(&DAT_100fc5d50,&DAT_100c49540);
          _swift_initStackObject();
          *(undefined8 *)(puVar6 + 0x18) = 2;
          *(undefined8 *)(puVar6 + 0x10) = 1;
          SVar16 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          *(char **)(puVar6 + 0x20) = SVar16.str;
          *(undefined **)(puVar6 + 0x48) = PTR___type_metadata_for_Swift_String_100eac208;
          *(void **)(puVar6 + 0x28) = SVar16.bridgeObject;
          *(undefined8 *)(puVar6 + 0x30) = uVar3;
          *(undefined8 *)(puVar6 + 0x38) = uVar4;
          _swift_bridgeObjectRetain(uVar4);
          puVar10 = puVar6;
          FUN_10042c9f0(puVar6);
          _swift_setDeallocating(puVar6);
          FUN_1000fb4c4(puVar6 + 0x20,&DAT_100fc5d58,&DAT_100c49548);
          puVar6 = &_OBJC_CLASS___NSError;
          _objc_allocWithZone();
          pNVar7 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
          _swift_bridgeObjectRelease(puVar10);
          param_4 = (undefined *)0x0;
          param_3 = pcVar12;
          IVar8 = objc_stub::initWithDomain_code_userInfo_((ID)puVar6,pcVar12,0,pNVar7);
          _swift_bridgeObjectRelease(uVar4);
          goto LAB_10042d77c;
        }
        puVar6 = puVar9;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar10 = puVar9;
        if (((ulong)puVar6 & 1) == 0) {
          puVar10 = (undefined *)0x0;
          param_3 = &DAT_00000001;
          FUN_100420fd4(0,*(long *)(puVar9 + 0x10) + 1);
          param_4 = puVar9;
        }
        uVar1 = *(ulong *)(puVar10 + 0x10);
        puVar9 = puVar10;
        if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar1) {
          puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
          param_3 = &DAT_00000001;
          FUN_100420fd4(puVar9,uVar1 + 1);
          param_4 = puVar10;
        }
        *(ulong *)(puVar9 + 0x10) = uVar1 + 1;
        *(undefined8 *)(puVar9 + uVar1 * 0x18 + 0x28) = 0;
        *(undefined8 *)(puVar9 + uVar1 * 0x18 + 0x30) = 0;
        *(char **)(puVar9 + uVar1 * 0x18 + 0x20) = pcVar5;
      }
      FUN_10041e43c(&local_160);
      param_1 = param_1 + 0x78;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  auVar19._8_8_ = puVar9;
  auVar19._0_8_ = local_368;
  return auVar19;
}



/* Address: 0x10042d97c | FUN_10042d97c */

undefined8 FUN_10042d97c(undefined8 param_1)

{
  FUN_100425580();
  return param_1;
}



/* Address: 0x10042d9b0 | FUN_10042d9b0 */

void FUN_10042d9b0(void)

{
  code *pcVar1;
  long unaff_x20;
  undefined1 auStack_98 [120];
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  FUN_100429630(auStack_98);
  (*pcVar1)(auStack_98);
  FUN_10042d97c(auStack_98);
  return;
}



/* Address: 0x10042d9ec | thunk_FUN_10042d9b0 */

void thunk_FUN_10042d9b0(void)

{
  FUN_10042d9b0();
  return;
}



/* Address: 0x10042d9f0 | thunk_FUN_10042cee0 */

void thunk_FUN_10042cee0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10041a860(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x10042d9f4 | thunk_FUN_10042cf10 */

void thunk_FUN_10042cf10(void)

{
  thunk_FUN_10042cf10();
  return;
}



/* Address: 0x10042d9f8 | thunk_FUN_100405f18 */

void thunk_FUN_100405f18(void)

{
  thunk_FUN_100405f18();
  return;
}



/* Address: 0x10042d9fc | FUN_10042d9fc */

void FUN_10042d9fc(undefined8 param_1)

{
  FUN_10042da18();
  DAT_101057a90 = param_1;
  return;
}



/* Address: 0x10042da18 | FUN_10042da18 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10042da18(void)

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
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  char *pcVar18;
  long lVar19;
  String SVar20;
  String SVar21;
  undefined8 uStack_d0;
  undefined4 auStack_c8 [2];
  undefined1 auStack_c0 [8];
  undefined *local_b8;
  char *local_b0;
  long local_a8;
  undefined1 *local_a0;
  undefined *local_98;
  long local_90;
  long local_88;
  code *local_80;
  undefined *local_78;
  long local_70;
  undefined *local_68;
  
  UVar3 = Foundation::URL::typeMetadataAccessor();
  local_70 = *(long *)(UVar3.unknown + -8);
  lVar10 = *(long *)(local_70 + 0x40);
  puVar4 = &DAT_100fc65e8;
  local_a0 = auStack_c0 + -(lVar10 + 0xfU & 0xfffffffffffffff0);
  FUN_1000f7830(&DAT_100fc65e8,&DAT_100c49f70);
  lVar13 = *(long *)(puVar4 + -8);
  uVar11 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar15 = (long)(auStack_c0 + -(lVar10 + 0xfU & 0xfffffffffffffff0)) - uVar11;
  lVar16 = lVar15 - uVar11;
  lVar10 = lVar16 - uVar11;
  lVar17 = lVar10 - uVar11;
  local_88 = lVar17 - uVar11;
  lVar12 = local_88 - uVar11;
  puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_10042dee4();
  puVar4 = &DAT_100fc65f0;
  local_b8 = puVar5;
  FUN_1000f7830(&DAT_100fc65f0,&DAT_100c4a910);
  lVar19 = *(long *)(lVar13 + 0x48);
  pcVar18 = (char *)((ulong)*(byte *)(lVar13 + 0x50) + 0x20 &
                    ((ulong)*(byte *)(lVar13 + 0x50) ^ 0xffffffffffffffff));
  _swift_allocObject();
  *(undefined8 *)(puVar4 + 0x18) = 6;
  *(undefined8 *)(puVar4 + 0x10) = 3;
  local_98 = &_OBJC_CLASS___NSBundle;
  local_78 = puVar4;
  IVar6 = objc_stub::mainBundle((ID)&_OBJC_CLASS___NSBundle);
  UVar7.unknown = (undefined *)objc_stub::resourceURL(IVar6);
  if (UVar7.unknown != (undefined *)0x0) {
    Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar7);
  }
  local_80 = *(code **)(local_70 + 0x38);
  (*local_80)(lVar12,UVar7.unknown == (undefined *)0x0,1,UVar3.unknown);
  puVar4 = local_78 + (long)pcVar18;
  FUN_10042e528(lVar12,puVar4);
  uVar8 = 0;
  FUN_10042e4cc(0);
  _swift_getObjCClassFromMetadata();
  IVar6 = objc_stub::bundleForClass_((ID)local_98,uVar8);
  UVar7.unknown = (undefined *)objc_stub::resourceURL(IVar6);
  local_b0 = pcVar18;
  if (UVar7.unknown != (undefined *)0x0) {
    Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar7);
  }
  pcVar14 = local_80;
  (*local_80)(puVar4 + lVar19,UVar7.unknown == (undefined *)0x0,1,UVar3.unknown);
  local_90 = lVar19;
  IVar6 = objc_stub::mainBundle((ID)local_98);
  UVar7.unknown = (undefined *)objc_stub::bundleURL(IVar6);
  Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar7);
  (*pcVar14)(puVar4 + lVar19 * 2,0,1,UVar3.unknown);
  local_68 = local_b8;
  FUN_10042e0dc(local_78);
  local_78 = local_68;
  local_98 = *(undefined **)(local_68 + 0x10);
  if (local_98 != (undefined *)0x0) {
    uVar11 = 0;
    puVar4 = local_68 + (long)local_b0;
    local_b0 = "Invalid product id: ";
    local_a8 = lVar10;
    do {
      lVar13 = local_88;
      if (*(ulong *)(local_78 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x10042de8c);
        (*pcVar14)();
      }
      FUN_10042e578(puVar4,local_88);
      FUN_10042e528(lVar13,lVar17);
      FUN_10042e578(lVar17,lVar16);
      lVar13 = local_70;
      pcVar14 = *(code **)(local_70 + 0x30);
      lVar19 = lVar16;
      UVar7 = UVar3;
      (*pcVar14)(lVar16,1);
      bVar2 = (int)lVar19 != 1;
      if (bVar2) {
        SVar20.bridgeObject = (void *)((ulong)local_b0 | 0x8000000000000000);
        SVar20.str = (char *)0xd000000000000024;
        Foundation::URL::appendingPathComponent(SVar20,UVar7);
        (**(code **)(lVar13 + 8))(lVar16,UVar3.unknown);
      }
      else {
        FUN_10042e5c8(lVar16);
      }
      (*local_80)(lVar10,!bVar2,1,UVar3.unknown);
      FUN_10042e578(lVar10,lVar15);
      lVar19 = lVar15;
      (*pcVar14)(lVar15,1,UVar3.unknown);
      puVar1 = local_a0;
      if ((int)lVar19 == 1) {
        FUN_10042e5c8(lVar10);
        FUN_10042e5c8(lVar17);
      }
      else {
        (**(code **)(lVar13 + 0x20))(local_a0,lVar15,UVar3.unknown);
        UVar7.unknown = &_OBJC_CLASS___NSBundle;
        _objc_allocWithZone();
        pNVar9 = Foundation::URL::_bridgeToObjectiveC(UVar7);
        IVar6 = objc_stub::initWithURL_((ID)UVar7.unknown,pNVar9);
        lVar10 = local_a8;
        (**(code **)(local_70 + 8))(puVar1,UVar3.unknown);
        FUN_10042e5c8(lVar10);
        FUN_10042e5c8(lVar17);
        if (IVar6 != 0) {
          _swift_bridgeObjectRelease(local_78);
          return IVar6;
        }
      }
      uVar11 = uVar11 + 1;
      puVar4 = puVar4 + local_90;
    } while (local_98 != (undefined *)uVar11);
  }
  *(undefined4 *)(lVar12 + -8) = 0;
  *(undefined8 *)(lVar12 + -0x10) = 0x2c;
  SVar21.bridgeObject = (void *)0x2;
  SVar21.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar21,(StaticString)0xd000000000000039,0x8000000100da6610,
             0xda6600);
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x10042dee4);
  (*pcVar14)();
}



/* Address: 0x10042dee4 | FUN_10042dee4 */

undefined * FUN_10042dee4(long param_1)

{
  undefined1 *puVar1;
  URL UVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_90 [8];
  code *local_88;
  long local_80;
  undefined *local_78;
  undefined1 *local_70;
  undefined *local_68;
  
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar7 = *(long *)(UVar2.unknown + -8);
  uVar4 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_70 = auStack_90 + -uVar4;
  lVar6 = (long)local_70 - uVar4;
  puVar3 = &DAT_100fc65e8;
  FUN_1000f7830(&DAT_100fc65e8,&DAT_100c49f70);
  lVar10 = *(long *)(puVar3 + -8);
  lVar8 = lVar6 - (*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = *(long *)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar9 != 0) {
    local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
    local_78 = puVar3;
    FUN_10043093c(0,lVar9,0);
    param_1 = param_1 + ((ulong)*(byte *)(lVar7 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar7 + 0x50) ^ 0xffffffffffffffff));
    local_80 = *(long *)(lVar7 + 0x48);
    local_88 = *(code **)(lVar7 + 0x10);
    puVar5 = local_68;
    do {
      (*local_88)(lVar6,param_1,UVar2.unknown);
      puVar1 = local_70;
      (**(code **)(lVar7 + 0x20))(local_70,lVar6,UVar2.unknown);
      _swift_dynamicCast(lVar8,puVar1,UVar2.unknown,local_78,7);
      uVar4 = *(ulong *)(puVar5 + 0x10);
      local_68 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar4) {
        FUN_10043093c(1 < *(ulong *)(puVar5 + 0x18),uVar4 + 1,1);
      }
      puVar5 = local_68;
      *(ulong *)(local_68 + 0x10) = uVar4 + 1;
      FUN_10042e528(lVar8,local_68 +
                          *(long *)(lVar10 + 0x48) * uVar4 +
                          ((ulong)*(byte *)(lVar10 + 0x50) + 0x20 &
                          ((ulong)*(byte *)(lVar10 + 0x50) ^ 0xffffffffffffffff)));
      param_1 = param_1 + local_80;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return puVar5;
}



/* Address: 0x10042e098 | FUN_10042e098 */

undefined * FUN_10042e098(void)

{
  __int64 _Var1;
  undefined *puVar2;
  
  if ((ulong)PTR___swiftEmptyArrayStorage_100eae0d8 >> 0x3e != 0) {
    _Var1 = Swift::_CocoaArrayWrapper::get_endIndex
                      ((_CocoaArrayWrapper)PTR___swiftEmptyArrayStorage_100eae0d8);
    if (_Var1 != 0) {
      puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_10042e1f8(PTR___swiftEmptyArrayStorage_100eae0d8);
      return puVar2;
    }
  }
  return PTR___swiftEmptySetSingleton_100eae0e8;
}



/* Address: 0x10042e0dc | FUN_10042e0dc */

void FUN_10042e0dc(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long *unaff_x20;
  ulong uVar6;
  long lVar7;
  
  uVar6 = *(ulong *)(param_1 + 0x10);
  lVar5 = *unaff_x20;
  lVar7 = *(long *)(lVar5 + 0x10);
  if (SCARRY8(lVar7,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10042e1ec);
    (*pcVar1)();
  }
  lVar2 = lVar5;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)lVar2 == 0) ||
     (uVar4 = *(ulong *)(lVar5 + 0x18) >> 1, (long)uVar4 < (long)(lVar7 + uVar6))) {
    FUN_100437248();
    uVar4 = *(ulong *)(lVar2 + 0x18) >> 1;
    lVar7 = *(long *)(param_1 + 0x10);
    lVar5 = lVar2;
  }
  else {
    lVar7 = *(long *)(param_1 + 0x10);
  }
  if (lVar7 == 0) {
    _swift_bridgeObjectRelease(param_1);
    if (uVar6 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10042e1f0);
      (*pcVar1)();
    }
  }
  else {
    lVar7 = *(long *)(lVar5 + 0x10);
    if (uVar4 - lVar7 < uVar6) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10042e1f4);
      (*pcVar1)();
    }
    puVar3 = &DAT_100fc65e8;
    FUN_1000f7830(&DAT_100fc65e8,&DAT_100c49f70);
    uVar4 = (ulong)*(byte *)(*(long *)(puVar3 + -8) + 0x50);
    uVar4 = uVar4 + 0x20 & (uVar4 ^ 0xffffffffffffffff);
    _swift_arrayInitWithCopy
              (lVar5 + uVar4 + *(long *)(*(long *)(puVar3 + -8) + 0x48) * lVar7,param_1 + uVar4,
               uVar6,puVar3);
    _swift_bridgeObjectRelease(param_1);
    if (uVar6 != 0) {
      if (SCARRY8(*(long *)(lVar5 + 0x10),uVar6)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10042e1f8);
        (*pcVar1)();
      }
      *(ulong *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + uVar6;
    }
  }
  *unaff_x20 = lVar5;
  return;
}



/* Address: 0x10042e1f8 | FUN_10042e1f8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_10042e1f8(undefined *param_1)

{
  _CocoaArrayWrapper _Var1;
  undefined *puVar2;
  code *pcVar3;
  bool bVar4;
  _SetStorage *this;
  ulong uVar5;
  NSObject *pNVar6;
  ulong uVar7;
  NSObject *pNVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *capacity;
  NSObject *pNVar12;
  NSObject *pNVar13;
  
  if ((ulong)param_1 >> 0x3e == 0) {
    capacity = *(undefined **)((undefined *)((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if (((ulong)param_1 & 0x8000000000000000) != 0) {
      _Var1.unknown = param_1;
    }
    capacity = (undefined *)Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  puVar2 = PTR___swiftEmptySetSingleton_100eae0e8;
  if (capacity != (undefined *)0x0) {
    this = (_SetStorage *)&DAT_100fc65f8;
    FUN_1000f7830(&DAT_100fc65f8,&DAT_100c49f80);
    Swift::_SetStorage::_allocate(this,(__int64)capacity);
    puVar2 = capacity;
  }
  if ((ulong)param_1 >> 0x3e == 0) {
    pNVar12 = *(NSObject **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if (((ulong)param_1 & 0x8000000000000000) != 0) {
      _Var1.unknown = param_1;
    }
    pNVar12 = (NSObject *)Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (pNVar12 != (NSObject *)0x0) {
    if (((ulong)param_1 & 0xc000000000000001) == 0) {
      pNVar13 = (NSObject *)0x0;
      pNVar8 = *(NSObject **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
      do {
        if (pNVar13 == pNVar8) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10042e4c8);
          (*pcVar3)();
        }
        pNVar6 = *(NSObject **)(param_1 + (long)pNVar13 * 8 + 0x20);
        uVar5 = (extension_ObjectiveC)::__C::NSObject::_rawHashValue(*(__int64 *)(puVar2 + 0x28));
        uVar11 = -1L << ((ulong)(byte)puVar2[0x20] & 0x3f);
        uVar5 = uVar5 & (uVar11 ^ 0xffffffffffffffff);
        uVar7 = uVar5 >> 6;
        uVar9 = *(ulong *)(puVar2 + uVar7 * 8 + 0x38);
        uVar10 = 1L << (uVar5 & 0x3f);
        if ((uVar10 & uVar9) != 0) {
          FUN_10042e610(0);
          do {
            bVar4 = (extension_ObjectiveC)::__C::NSObject::___infix
                              (*(NSObject **)(*(long *)(puVar2 + 0x30) + uVar5 * 8),pNVar6);
            if (bVar4) goto LAB_10042e3e4;
            uVar5 = uVar5 + 1 & ~uVar11;
            uVar7 = uVar5 >> 6;
            uVar9 = *(ulong *)(puVar2 + uVar7 * 8 + 0x38);
            uVar10 = 1L << (uVar5 & 0x3f);
          } while ((uVar10 & uVar9) != 0);
        }
        *(ulong *)(puVar2 + uVar7 * 8 + 0x38) = uVar10 | uVar9;
        *(NSObject **)(*(long *)(puVar2 + 0x30) + uVar5 * 8) = pNVar6;
        if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10042e4cc);
          (*pcVar3)();
        }
        *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
LAB_10042e3e4:
        pNVar13 = pNVar13 + 1;
      } while (pNVar13 != pNVar12);
    }
    else {
      pNVar13 = (NSObject *)0x0;
      do {
        pNVar8 = pNVar13;
        FUN_100430974(pNVar13,param_1);
        bVar4 = SCARRY8((long)pNVar13,1);
        pNVar13 = pNVar13 + 1;
        if (bVar4) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10042e4c0);
          (*pcVar3)();
        }
        uVar5 = (extension_ObjectiveC)::__C::NSObject::_rawHashValue(*(__int64 *)(puVar2 + 0x28));
        uVar11 = -1L << ((ulong)(byte)puVar2[0x20] & 0x3f);
        uVar5 = uVar5 & (uVar11 ^ 0xffffffffffffffff);
        uVar7 = uVar5 >> 6;
        uVar9 = *(ulong *)(puVar2 + uVar7 * 8 + 0x38);
        uVar10 = 1L << (uVar5 & 0x3f);
        if ((uVar10 & uVar9) != 0) {
          FUN_10042e610(0);
          do {
            bVar4 = (extension_ObjectiveC)::__C::NSObject::___infix
                              (*(NSObject **)(*(long *)(puVar2 + 0x30) + uVar5 * 8),pNVar8);
            if (bVar4) {
              _swift_unknownObjectRelease(pNVar8);
              goto joined_r0x00010042e2d0;
            }
            uVar5 = uVar5 + 1 & ~uVar11;
            uVar7 = uVar5 >> 6;
            uVar9 = *(ulong *)(puVar2 + uVar7 * 8 + 0x38);
            uVar10 = 1L << (uVar5 & 0x3f);
          } while ((uVar10 & uVar9) != 0);
        }
        *(ulong *)(puVar2 + uVar7 * 8 + 0x38) = uVar10 | uVar9;
        *(NSObject **)(*(long *)(puVar2 + 0x30) + uVar5 * 8) = pNVar8;
        if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10042e4c4);
          (*pcVar3)();
        }
        *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
joined_r0x00010042e2d0:
      } while (pNVar13 != pNVar12);
    }
  }
  return puVar2;
}



/* Address: 0x10042e4cc | FUN_10042e4cc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10042e4cc(void)

{
  return ZEXT816(0x100fc6578);
}



/* Address: 0x10042e4ec | FUN_10042e4ec */

void FUN_10042e4ec(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fc65d0,&DAT_100ed45c0);
  return;
}



/* Address: 0x10042e500 | FUN_10042e500 */

void FUN_10042e500(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fc65d8,&DAT_100ed45f0);
  return;
}



/* Address: 0x10042e514 | FUN_10042e514 */

void FUN_10042e514(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fc65e0,&DAT_100ed4620);
  return;
}



/* Address: 0x10042e528 | FUN_10042e528 */

undefined8 FUN_10042e528(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fc65e8;
  FUN_1000f7830(&DAT_100fc65e8,&DAT_100c49f70);
  (**(code **)(*(long *)(puVar1 + -8) + 0x20))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x10042e578 | FUN_10042e578 */

undefined8 FUN_10042e578(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fc65e8;
  FUN_1000f7830(&DAT_100fc65e8,&DAT_100c49f70);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x10042e5c8 | FUN_10042e5c8 */

undefined8 FUN_10042e5c8(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fc65e8;
  FUN_1000f7830(&DAT_100fc65e8,&DAT_100c49f70);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x10042e610 | FUN_10042e610 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_10042e610(void)

{
  undefined *puVar1;
  
  if (DAT_100fc6600 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___SKProduct;
  _swift_getObjCClassMetadata();
  DAT_100fc6600 = puVar1;
  return;
}



/* Address: 0x10042e654 | FUN_10042e654 */

void FUN_10042e654(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fc6610,&DAT_100ed4650);
  return;
}



/* Address: 0x10042e668 | FUN_10042e668 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_10042e668(void)

{
  undefined *puVar1;
  ID IVar2;
  Dictionary<undefined,undefined> DVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ID unaff_x20;
  undefined1 auVar7 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long local_38;
  
  uVar5 = 0;
  IVar2 = objc_stub::infoDictionary(unaff_x20);
  puVar1 = PTR___type_metadata_for_Any_100eae0c0;
  if (IVar2 == 0) {
    uStack_48 = 0;
    local_50 = 0;
    local_38 = 0;
    uStack_40 = 0;
LAB_10042e760:
    FUN_10042e784(&local_50);
  }
  else {
    DVar3 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
    if (*(long *)(DVar3.unknown + 0x10) == 0) {
LAB_10042e750:
      uStack_48 = 0;
      local_50 = 0;
      local_38 = 0;
      uStack_40 = 0;
      _swift_bridgeObjectRelease(DVar3.unknown);
      goto LAB_10042e760;
    }
    _swift_bridgeObjectRetain(DVar3.unknown);
    uVar6 = 0;
    lVar4 = -0x2fffffffffffffe6;
    FUN_100071370(0xd00000000000001a);
    if ((uVar6 & 1) == 0) {
      _swift_bridgeObjectRelease(DVar3.unknown);
      goto LAB_10042e750;
    }
    FUN_10000cbfc(*(long *)(DVar3.unknown + 0x38) + lVar4 * 0x20,&local_50);
    _swift_bridgeObjectRelease_n(DVar3.unknown,2);
    if (local_38 == 0) goto LAB_10042e760;
    _swift_dynamicCast(&local_60,&local_50,puVar1 + 8,PTR___type_metadata_for_Swift_String_100eac208
                       ,6);
    if ((uVar5 & 1) != 0) goto LAB_10042e770;
  }
  local_60 = 0;
  uStack_58 = 0;
LAB_10042e770:
  auVar7._8_8_ = uStack_58;
  auVar7._0_8_ = local_60;
  return auVar7;
}



/* Address: 0x10042e784 | FUN_10042e784 */

undefined8 FUN_10042e784(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fc6618;
  FUN_1000f7830(&DAT_100fc6618,&DAT_100c49fb0);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x10042e7cc | FUN_10042e7cc */

undefined * FUN_10042e7cc(long param_1,ulong param_2)

{
  uint uVar1;
  code *pcVar2;
  Iterator IVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  tuple2 tVar10;
  
  IVar3 = Foundation::Data::Iterator::typeMetadataAccessor();
  lVar9 = *(long *)(IVar3.unknown + -8);
  lVar7 = *(long *)(lVar9 + 0x40);
  uVar1 = (uint)(param_2 >> 0x20);
  uVar5 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar5 == 0) {
      puVar8 = (undefined *)(param_2 >> 0x30 & 0xff);
    }
    else {
      iVar6 = (int)((ulong)param_1 >> 0x20);
      if (SBORROW4(iVar6,(int)param_1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10042e8d4);
        (*pcVar2)();
      }
      puVar8 = (undefined *)(long)(iVar6 - (int)param_1);
    }
  }
  else {
    if (uVar5 != 2) {
      return PTR___swiftEmptyArrayStorage_100eae0d8;
    }
    puVar8 = (undefined *)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10));
    if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10042e8d0);
      (*pcVar2)();
    }
  }
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (puVar8 != (undefined *)0x0) {
    puVar4 = puVar8;
    FUN_10042e8d4(puVar8,0);
    tVar10 = Foundation::Data::_copyContents
                       ((UnsafeMutableBufferPointer<__int8>)
                        (&stack0xffffffffffffffb0 + -(lVar7 + 0xfU & 0xfffffffffffffff0)),
                        (Data)(puVar4 + 0x20));
    (**(code **)(lVar9 + 8))
              (&stack0xffffffffffffffb0 + -(lVar7 + 0xfU & 0xfffffffffffffff0),IVar3.unknown);
    if (tVar10._.unknown.unknown != puVar8) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10042e894);
      (*pcVar2)();
    }
  }
  return puVar4;
}



/* Address: 0x10042e8d4 | FUN_10042e8d4 */

undefined * FUN_10042e8d4(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 != 0) {
    puVar1 = &DAT_100fc6620;
    FUN_1000f7830(&DAT_100fc6620,&DAT_100c4a440);
    _swift_allocObject();
    puVar2 = puVar1;
    _malloc_size();
    *(long *)(puVar1 + 0x10) = param_1;
    *(long *)(puVar1 + 0x18) = (long)puVar2 * 2 + -0x40;
  }
  return puVar1;
}



/* Address: 0x10042e944 | FUN_10042e944 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10042e944(undefined8 param_1)

{
  ID self;
  NSString *pNVar1;
  Date DVar2;
  Date DVar3;
  
  if (DAT_100fc6628 != -1) {
    _swift_once(&DAT_100fc6628,FUN_10042ea24);
  }
  self = DAT_100fc6630;
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  DVar2.unknown = (undefined *)objc_stub::dateFromString_(self,pNVar1);
  if (DVar2.unknown != (undefined *)0x0) {
    Foundation::Date::__unconditionallyBridgeFromObjectiveC(DVar2);
  }
  DVar3 = Foundation::Date::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x00010042ea08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(DVar3.unknown + -8) + 0x38))
            (param_1,DVar2.unknown == (undefined *)0x0,1,DVar3.unknown);
  return;
}



/* Address: 0x10042ea24 | FUN_10042ea24 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10042ea24(void)

{
  undefined *puVar1;
  ID self;
  TimeZone TVar2;
  TimeZone TVar3;
  undefined1 *puVar4;
  NSTimeZone *pNVar5;
  long lVar6;
  
  puVar1 = &DAT_100fc6638;
  FUN_1000f7830(&DAT_100fc6638,&DAT_100c49fc0);
  puVar4 = &stack0xffffffffffffffc0 +
           -(*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar1 = &_OBJC_CLASS___NSISO8601DateFormatter;
  _objc_allocWithZone();
  self = objc_stub::init((ID)puVar1);
  objc_stub::setFormatOptions_(self,0x773);
  Foundation::TimeZone::_init();
  TVar2 = Foundation::TimeZone::typeMetadataAccessor();
  lVar6 = *(long *)(TVar2.unknown + -8);
  TVar3.unknown = puVar4;
  (**(code **)(lVar6 + 0x30))(puVar4,1,TVar2.unknown);
  pNVar5 = (NSTimeZone *)0x0;
  if ((int)TVar3.unknown != 1) {
    pNVar5 = Foundation::TimeZone::_bridgeToObjectiveC(TVar3);
    (**(code **)(lVar6 + 8))(puVar4,TVar2.unknown);
  }
  objc_stub::setTimeZone_(self,pNVar5);
  DAT_100fc6630 = self;
  return 0;
}



/* Address: 0x10042eb14 | FUN_10042eb14 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

bool FUN_10042eb14(char *param_1,void *param_2)

{
  long lVar1;
  __CocoaSet _Var2;
  String SVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  undefined *puVar7;
  Iterator *_cocoa;
  Iterator IVar8;
  undefined8 uVar9;
  ulong uVar10;
  long unaff_x20;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  String SVar16;
  ulong *local_c8;
  ulong local_c0;
  undefined *local_b0;
  ID local_a8;
  undefined1 auStack_a0 [24];
  undefined *local_88;
  ulong *puStack_80;
  ulong local_78;
  long lStack_70;
  ulong local_68;
  
  SVar3.bridgeObject = param_2;
  SVar3.str = param_1;
  _swift_beginAccess(unaff_x20 + 0x20,auStack_a0,0,0);
  puVar7 = *(undefined **)(unaff_x20 + 0x20);
  if (((ulong)puVar7 & 0xc000000000000001) == 0) {
    uVar10 = -1L << ((ulong)(byte)puVar7[0x20] & 0x3f);
    local_c8 = (ulong *)(puVar7 + 0x38);
    uVar11 = ~uVar10;
    uVar10 = -uVar10;
    uVar12 = 0xffffffffffffffff;
    if (uVar10 < 0x40) {
      uVar12 = ~(-1L << (uVar10 & 0x3f));
    }
    uVar12 = uVar12 & *local_c8;
    IVar8.unknown = puVar7;
    _swift_bridgeObjectRetain_n(puVar7,2);
    lStack_70 = 0;
    puVar13 = puVar7;
  }
  else {
    _Var2.unknown = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar7) {
      _Var2.unknown = puVar7;
    }
    _swift_bridgeObjectRetain_n(puVar7,2);
    _cocoa = Swift::__CocoaSet::makeIterator(_Var2);
    FUN_10000ec2c(0,&DAT_100fc6600,&PTR__OBJC_CLASS___SKProduct_100f8dcc0);
    FUN_100431e18();
    IVar8 = Swift::Set::Iterator::_init(_cocoa);
    local_c8 = puStack_80;
    uVar11 = local_78;
    uVar12 = local_68;
    puVar13 = local_88;
  }
  do {
    lVar14 = lStack_70;
    local_c0 = uVar12;
    uVar12 = local_c0;
    lVar15 = lVar14;
    if ((long)puVar13 < 0) {
      Swift::__CocoaSet::Iterator::_next((Iterator *)((ulong)puVar13 & 0x7fffffffffffffff));
      if (IVar8.unknown == (undefined *)0x0) {
LAB_10042ed6c:
        bVar5 = false;
        local_a8 = 0;
        break;
      }
      uVar9 = 0;
      local_b0 = IVar8.unknown;
      FUN_10000ec2c(0,&DAT_100fc6600,&PTR__OBJC_CLASS___SKProduct_100f8dcc0);
      _swift_dynamicCast(&local_a8,&local_b0,PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8,
                         uVar9,7);
    }
    else {
      while (uVar12 == 0) {
        lVar1 = lVar15 + 1;
        if (SCARRY8(lVar15,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10042eddc);
          (*pcVar4)();
        }
        if ((long)(uVar11 + 0x40 >> 6) <= lVar1) {
          local_c0 = 0;
          goto LAB_10042ed6c;
        }
        lVar15 = lVar1;
        uVar12 = local_c8[lVar1];
      }
      uVar10 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      local_a8 = *(ID *)(*(long *)(puVar13 + 0x30) + LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) * 8 +
                        lVar15 * 0x200);
      uVar12 = uVar12 - 1 & uVar12;
    }
    bVar5 = local_a8 != 0;
    if (local_a8 == 0) break;
    objc_stub::productIdentifier(local_a8);
    SVar16 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    IVar8.unknown = SVar16.bridgeObject;
    if (SVar16 == SVar3) {
      _swift_bridgeObjectRelease(IVar8.unknown);
      bVar5 = true;
      break;
    }
    bVar6 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)SVar16.str,(_StringGuts)IVar8.unknown,
                       (_StringComparisonResult)(__int8)param_1);
    _swift_bridgeObjectRelease();
    lStack_70 = lVar15;
  } while (!bVar6);
  FUN_10000c650(puVar13,local_c8,uVar11,lVar14,local_c0);
  _swift_bridgeObjectRelease(puVar7);
  return bVar5;
}



/* Address: 0x10042eddc | FUN_10042eddc */

void FUN_10042eddc(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x10042ee00 | FUN_10042ee00 */

void FUN_10042ee00(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10042ee2c | FUN_10042ee2c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

long FUN_10042ee2c(void)

{
  long lVar1;
  char *pcVar2;
  _CocoaArrayWrapper _Var3;
  _StringGuts _Var4;
  _StringGuts _Var5;
  code *pcVar6;
  bool bVar7;
  undefined *puVar8;
  ulong self;
  ID IVar9;
  long lVar10;
  __int64 _Var11;
  undefined *puVar12;
  undefined *puVar13;
  StaticString file;
  ulong uVar14;
  ID unaff_x20;
  long lVar15;
  undefined *puVar16;
  ulong uVar17;
  long lVar18;
  String SVar19;
  String SVar20;
  undefined1 auStack_98 [24];
  undefined1 local_80 [8];
  undefined1 auStack_78 [24];
  
  puVar8 = (undefined *)objc_stub::products(unaff_x20);
  FUN_10000ec2c(0,&DAT_100fc6600,&PTR__OBJC_CLASS___SKProduct_100f8dcc0);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  if ((ulong)puVar8 >> 0x3e == 0) {
    lVar15 = *(long *)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var3.unknown = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar8) {
      _Var3.unknown = puVar8;
    }
    lVar15 = Swift::_CocoaArrayWrapper::get_endIndex(_Var3);
  }
  if (lVar15 == 0) {
    _swift_bridgeObjectRelease(puVar8);
  }
  else {
    uVar17 = 0;
    lVar18 = 0;
    uVar14 = (ulong)PTR___swiftEmptyArrayStorage_100eae0d8 >> 0x3e;
    do {
      if (((ulong)puVar8 & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10042f128);
          (*pcVar6)();
        }
        self = *(ulong *)(puVar8 + uVar17 * 8 + 0x20);
      }
      else {
        self = uVar17;
        FUN_10010eb84(uVar17,puVar8,&PTR__OBJC_CLASS___SKProduct_100f8dcc0,&DAT_100fc6600);
      }
      lVar1 = uVar17 + 1;
      if (SCARRY8(uVar17,1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10042f124);
        (*pcVar6)();
      }
      IVar9 = objc_stub::subscriptionGroupIdentifier(self);
      if (IVar9 != 0) {
        SVar19 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        puVar13 = SVar19.bridgeObject;
        lVar10 = 0;
        if (lVar18 == 0) {
          FUN_100430988();
          _swift_allocObject();
          puVar13 = PTR___swiftEmptySetSingleton_100eae0e8;
          puVar12 = PTR___swiftEmptyArrayStorage_100eae0d8;
          if (uVar14 == 0) {
            *(undefined **)(lVar10 + 0x20) = PTR___swiftEmptySetSingleton_100eae0e8;
            *(String *)(lVar10 + 0x10) = SVar19;
            puVar16 = puVar13;
          }
          else {
            _Var11 = Swift::_CocoaArrayWrapper::get_endIndex
                               ((_CocoaArrayWrapper)PTR___swiftEmptyArrayStorage_100eae0d8);
            puVar13 = PTR___swiftEmptySetSingleton_100eae0e8;
            if (_Var11 != 0) {
              puVar13 = puVar12;
              FUN_10042e1f8();
            }
            *(undefined **)(lVar10 + 0x20) = puVar13;
            *(String *)(lVar10 + 0x10) = SVar19;
            _Var11 = Swift::_CocoaArrayWrapper::get_endIndex((_CocoaArrayWrapper)puVar12);
            puVar16 = PTR___swiftEmptySetSingleton_100eae0e8;
            if (_Var11 != 0) {
              FUN_10042e1f8();
              puVar16 = puVar12;
            }
          }
          _swift_beginAccess(lVar10 + 0x20,auStack_78,1,0);
          *(undefined **)(lVar10 + 0x20) = puVar16;
          lVar18 = lVar10;
        }
        _swift_bridgeObjectRelease(puVar13);
        _Var4.unknown = ((String *)(lVar18 + 0x10))->str;
        _Var5.unknown = *(undefined **)(lVar18 + 0x18);
        SVar19 = *(String *)(lVar18 + 0x10);
        _swift_bridgeObjectRetain(_Var5.unknown);
        IVar9 = objc_stub::subscriptionGroupIdentifier(self);
        if (IVar9 == 0) {
          _swift_bridgeObjectRelease(_Var5.unknown);
LAB_10042f190:
          pcVar2 = "`Product.subscriptionGroupIdentifier` must be equal to current identifier";
          file.unknown = (undefined *)0xd000000000000049;
          goto LAB_10042f1d0;
        }
        SVar20 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        if (SVar20 == SVar19) {
          _swift_bridgeObjectRelease(_Var5.unknown);
          _swift_bridgeObjectRelease(SVar20.bridgeObject);
        }
        else {
          bVar7 = Swift::_stringCompareWithSmolCheck
                            (_Var4,_Var5,(_StringComparisonResult)(__int8)SVar20.str);
          _swift_bridgeObjectRelease(_Var5.unknown);
          _swift_bridgeObjectRelease(SVar20.bridgeObject);
          if (!bVar7) goto LAB_10042f190;
        }
        _swift_beginAccess(lVar18 + 0x20,auStack_98,0x21,0);
        FUN_1004309bc(local_80,self);
        _swift_endAccess(auStack_98);
      }
      uVar17 = uVar17 + 1;
    } while (lVar1 != lVar15);
    _swift_bridgeObjectRelease(puVar8);
    if (lVar18 != 0) {
      return lVar18;
    }
  }
  pcVar2 = "`group` can\'t be nil.";
  file.unknown = (undefined *)0xd000000000000015;
LAB_10042f1d0:
  SVar19.bridgeObject = (void *)0x2;
  SVar19.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar19,file,(ulong)(pcVar2 + -0x20) | 0x8000000000000000,
             0xda6670);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10042f1e0);
  (*pcVar6)();
}



/* Address: 0x10042f1e0 | FUN_10042f1e0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_10042f1e0(void)

{
  long lVar1;
  _CocoaArrayWrapper _Var2;
  undefined *puVar3;
  code *pcVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  ID IVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  char *pcVar12;
  __int64 _Var13;
  undefined *puVar14;
  undefined *puVar15;
  void *pvVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  ID unaff_x20;
  undefined8 *puVar20;
  _StringGuts _Var21;
  ulong uVar22;
  _StringGuts _Var23;
  String SVar24;
  String SVar25;
  String SVar26;
  undefined *local_98 [3];
  undefined1 local_80 [8];
  undefined1 auStack_78 [24];
  
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1004318e4();
  puVar7 = (undefined *)objc_stub::products(unaff_x20);
  FUN_10000ec2c(0,&DAT_100fc6600,&PTR__OBJC_CLASS___SKProduct_100f8dcc0);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  if ((ulong)puVar7 >> 0x3e == 0) {
    lVar18 = *(long *)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
    puVar11 = PTR___swiftEmptySetSingleton_100eae0e8;
  }
  else {
    _Var2.unknown = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar7) {
      _Var2.unknown = puVar7;
    }
    lVar18 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
    puVar11 = PTR___swiftEmptySetSingleton_100eae0e8;
  }
  PTR___swiftEmptySetSingleton_100eae0e8 = puVar11;
  if (lVar18 != 0) {
    uVar22 = 0;
    do {
      if (((ulong)puVar7 & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10) <= uVar22) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10042f730);
          (*pcVar4)();
        }
        uVar17 = *(ulong *)(puVar7 + uVar22 * 8 + 0x20);
      }
      else {
        uVar17 = uVar22;
        FUN_10010eb84(uVar22,puVar7,&PTR__OBJC_CLASS___SKProduct_100f8dcc0,&DAT_100fc6600);
      }
      lVar1 = uVar22 + 1;
      if (SCARRY8(uVar22,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10042f728);
        (*pcVar4)();
      }
      IVar8 = objc_stub::subscriptionGroupIdentifier(uVar17);
      if (IVar8 != 0) {
        SVar24 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        pvVar16 = SVar24.bridgeObject;
        puVar9 = (undefined *)0x0;
        if (*(long *)(puVar6 + 0x10) == 0) {
LAB_10042f3f8:
          FUN_100430988();
          _swift_allocObject();
          puVar15 = PTR___swiftEmptyArrayStorage_100eae0d8;
          if ((ulong)puVar3 >> 0x3e == 0) {
            *(undefined **)(puVar9 + 0x20) = puVar11;
            *(String *)(puVar9 + 0x10) = SVar24;
LAB_10042f430:
            _swift_bridgeObjectRetain(pvVar16);
            puVar15 = puVar11;
          }
          else {
            _Var13 = Swift::_CocoaArrayWrapper::get_endIndex
                               ((_CocoaArrayWrapper)PTR___swiftEmptyArrayStorage_100eae0d8);
            puVar14 = puVar11;
            if (_Var13 != 0) {
              puVar14 = puVar15;
              FUN_10042e1f8();
            }
            *(undefined **)(puVar9 + 0x20) = puVar14;
            *(String *)(puVar9 + 0x10) = SVar24;
            _Var13 = Swift::_CocoaArrayWrapper::get_endIndex((_CocoaArrayWrapper)puVar15);
            if (_Var13 == 0) goto LAB_10042f430;
            _swift_bridgeObjectRetain(pvVar16);
            FUN_10042e1f8();
          }
          puVar20 = (undefined8 *)(puVar9 + 0x20);
          _swift_beginAccess(puVar20,auStack_78,1,0);
          uVar10 = *puVar20;
          *puVar20 = puVar15;
          _swift_bridgeObjectRelease(uVar10);
          _Var23.unknown = ((String *)(puVar9 + 0x10))->str;
                    /* WARNING: Load size is inaccurate */
          _Var21.unknown = puVar9[0x18];
          SVar25 = *(String *)(puVar9 + 0x10);
          _swift_bridgeObjectRetain(_Var21.unknown);
          IVar8 = objc_stub::subscriptionGroupIdentifier(uVar17);
          if (IVar8 != 0) {
            SVar26 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
            if (SVar26 == SVar25) {
              _swift_bridgeObjectRelease(_Var21.unknown);
              _swift_bridgeObjectRelease(SVar26.bridgeObject);
            }
            else {
              bVar5 = Swift::_stringCompareWithSmolCheck
                                (_Var23,_Var21,(_StringComparisonResult)(__int8)SVar26.str);
              _swift_bridgeObjectRelease(_Var21.unknown);
              _swift_bridgeObjectRelease(SVar26.bridgeObject);
              if (!bVar5) goto LAB_10042f788;
            }
            _swift_beginAccess(puVar20,local_98,0x21,0);
            FUN_1004309bc(local_80,uVar17);
            _swift_endAccess(local_98);
            _swift_retain(puVar9);
            puVar11 = puVar6;
            _swift_isUniquelyReferenced_nonNull_native();
            local_98[0] = puVar6;
            SVar25 = SVar24;
            FUN_100071370();
            pcVar12 = SVar25.str;
            uVar17 = (ulong)~(uint)SVar25.bridgeObject & 1;
            lVar19 = *(long *)(puVar6 + 0x10) + uVar17;
            if (SCARRY8(*(long *)(puVar6 + 0x10),uVar17)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10042f72c);
              (*pcVar4)();
            }
            if (*(long *)(puVar6 + 0x18) < lVar19) {
              FUN_100431648(lVar19,puVar11);
              SVar26 = SVar24;
              FUN_100071370();
              pcVar12 = SVar26.str;
              puVar6 = local_98[0];
              if (((uint)SVar25.bridgeObject & 1) != ((uint)SVar26.bridgeObject & 1)) {
                Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10042f7e4);
                (*pcVar4)();
              }
            }
            else {
              puVar6 = local_98[0];
              if (((ulong)puVar11 & 1) == 0) {
                FUN_1004314d8();
                puVar6 = local_98[0];
              }
            }
            local_98[0] = puVar6;
            if (((ulong)SVar25.bridgeObject & 1) == 0) {
              *(ulong *)(puVar6 + ((ulong)pcVar12 >> 6) * 8 + 0x40) =
                   *(ulong *)(puVar6 + ((ulong)pcVar12 >> 6) * 8 + 0x40) |
                   1L << ((ulong)pcVar12 & 0x3f);
              *(String *)(*(long *)(puVar6 + 0x30) + (long)pcVar12 * 0x10) = SVar24;
              *(undefined **)(*(long *)(puVar6 + 0x38) + (long)pcVar12 * 8) = puVar9;
              _swift_release(puVar9);
              if (SCARRY8(*(long *)(puVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10042f734);
                (*pcVar4)();
              }
              *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
              puVar11 = PTR___swiftEmptySetSingleton_100eae0e8;
            }
            else {
              uVar10 = *(undefined8 *)(*(long *)(puVar6 + 0x38) + (long)pcVar12 * 8);
              *(undefined **)(*(long *)(puVar6 + 0x38) + (long)pcVar12 * 8) = puVar9;
              _swift_release(puVar9);
              _swift_bridgeObjectRelease(pvVar16);
              _swift_release(uVar10);
              puVar11 = PTR___swiftEmptySetSingleton_100eae0e8;
            }
            goto LAB_10042f2a0;
          }
        }
        else {
          _swift_bridgeObjectRetain(puVar6);
          SVar25 = SVar24;
          FUN_100071370();
          if (((ulong)SVar25.bridgeObject & 1) == 0) {
            puVar9 = puVar6;
            _swift_bridgeObjectRelease();
            goto LAB_10042f3f8;
          }
          lVar19 = *(long *)(*(long *)(puVar6 + 0x38) + (long)SVar25.str * 8);
          _swift_retain(lVar19);
          _swift_bridgeObjectRelease(puVar6);
          _swift_bridgeObjectRelease(pvVar16);
          _Var23.unknown = ((String *)(lVar19 + 0x10))->str;
          _Var21.unknown = *(undefined **)(lVar19 + 0x18);
          SVar24 = *(String *)(lVar19 + 0x10);
          _swift_bridgeObjectRetain(_Var21.unknown);
          IVar8 = objc_stub::subscriptionGroupIdentifier(uVar17);
          if (IVar8 != 0) {
            SVar25 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
            if (SVar25 == SVar24) {
              _swift_bridgeObjectRelease(_Var21.unknown);
              _swift_bridgeObjectRelease(SVar25.bridgeObject);
            }
            else {
              bVar5 = Swift::_stringCompareWithSmolCheck
                                (_Var23,_Var21,(_StringComparisonResult)(__int8)SVar25.str);
              _swift_bridgeObjectRelease(_Var21.unknown);
              _swift_bridgeObjectRelease(SVar25.bridgeObject);
              if (!bVar5) goto LAB_10042f788;
            }
            puVar11 = PTR___swiftEmptySetSingleton_100eae0e8;
            _swift_beginAccess(lVar19 + 0x20,local_98,0x21,0);
            FUN_1004309bc(local_80,uVar17);
            _swift_endAccess(local_98);
            _swift_release(lVar19);
            goto LAB_10042f2a0;
          }
        }
        _swift_bridgeObjectRelease(_Var21.unknown);
LAB_10042f788:
        SVar24.bridgeObject = (void *)0x2;
        SVar24.str = (char *)0xb;
        Swift::_assertionFailure
                  ((StaticString)0x100d8deb0,SVar24,(StaticString)0xd000000000000049,
                   0x8000000100da6690,0xda6670);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10042f7d4);
        (*pcVar4)();
      }
LAB_10042f2a0:
      uVar22 = uVar22 + 1;
    } while (lVar1 != lVar18);
  }
  _swift_bridgeObjectRelease(puVar7);
  return puVar6;
}



/* Address: 0x10042f7e4 | FUN_10042f7e4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10042f7e4(code *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  ID IVar5;
  undefined *puVar6;
  
  if (DAT_100fc6640 != 0) {
    pcVar4 = param_1;
    FUN_100431a50();
    puVar6 = &DAT_100ed4790;
    _swift_allocError(&DAT_100ed4790,pcVar4,0,0);
    *(undefined2 *)pcVar4 = 0x201;
    (*param_1)();
    _swift_errorRelease(puVar6);
    return;
  }
  IVar5 = 0;
  FUN_1004319e0();
  _objc_allocWithZone();
  IVar5 = objc_stub::init(IVar5);
  DAT_100fc6640 = IVar5;
  if (IVar5 != 0) {
    puVar6 = &DAT_100ed4680;
    _swift_allocObject(&DAT_100ed4680,0x20,7);
    *(code **)(puVar6 + 0x10) = param_1;
    *(undefined8 *)(puVar6 + 0x18) = param_2;
    puVar1 = (undefined8 *)
             (IVar5 + _TtC14TPInAppReceiptP33_49B299FEA3BD56F27DB286798366A4A114RefreshSession::
                      completion);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    *puVar1 = FUN_100431a24;
    puVar1[1] = puVar6;
    _swift_retain(param_2);
    _swift_retain(puVar6);
    FUN_100004550(uVar2,uVar3);
    objc_stub::start(*(ID *)(IVar5 + _TtC14TPInAppReceiptP33_49B299FEA3BD56F27DB286798366A4A114RefreshSession
                                     ::receiptRefreshRequest));
    _swift_release(puVar6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10042f904);
  (*pcVar4)();
}



/* Address: 0x10042f904 | FUN_10042f904 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10042f904(void)

{
  if (DAT_100fc6640 != 0) {
    objc_stub::cancel(*(ID *)(DAT_100fc6640 +
                             _TtC14TPInAppReceiptP33_49B299FEA3BD56F27DB286798366A4A114RefreshSession
                             ::receiptRefreshRequest));
  }
  DAT_100fc6640 = 0;
  return 0;
}



/* Address: 0x10042f948 | FUN_10042f948 */

bool FUN_10042f948(void)

{
  return DAT_100fc6640 != 0;
}



/* Address: 0x10042f95c | FUN_10042f95c */

bool FUN_10042f95c(undefined8 param_1)

{
  code *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long unaff_x20;
  long lVar10;
  ulong *puVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong local_a0 [4];
  undefined *local_80;
  undefined1 auStack_78 [24];
  
  uVar2 = 0;
  local_a0[1] = param_1;
  FUN_100432e30();
  local_a0[3] = *(long *)(uVar2 - 8);
  uVar7 = *(long *)(local_a0[3] + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar9 = -uVar7;
  puVar11 = (ulong *)((long)local_a0 + lVar9);
  lVar14 = (long)puVar11 - uVar7;
  puVar3 = &DAT_100fc6660;
  local_a0[0] = uVar2;
  FUN_1000f7830(&DAT_100fc6660,&DAT_100c49fd0);
  lVar15 = lVar14 - (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  FUN_10043ee24();
  lVar16 = _TtC14TPInAppReceipt13_InAppReceipt::payload;
  lVar8 = *(long *)(lVar4 + -8);
  plVar12 = (long *)(lVar15 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar10 = *(long *)(unaff_x20 + 0x10);
  _swift_beginAccess(lVar10 + _TtC14TPInAppReceipt13_InAppReceipt::payload,auStack_78,0,0);
  FUN_1000f8cac(lVar10 + lVar16,lVar15,&DAT_100fc6660,&DAT_100c49fd0);
  lVar16 = lVar15;
  (**(code **)(lVar8 + 0x30))(lVar15,1,lVar4);
  if ((int)lVar16 == 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10042fd04);
    (*pcVar1)();
  }
  FUN_1000523d8(lVar15,plVar12,FUN_10043ee24);
  lVar16 = *plVar12;
  _swift_bridgeObjectRetain(lVar16);
  FUN_10005241c(plVar12,FUN_10043ee24);
  local_a0[2] = *(ulong *)(lVar16 + 0x10);
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (local_a0[2] != 0) {
    uVar2 = 0;
    uVar7 = local_a0[0];
    do {
      if (*(ulong *)(lVar16 + 0x10) <= uVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10042fcfc);
        (*pcVar1)();
      }
      uVar13 = (ulong)*(byte *)(local_a0[3] + 0x50) + 0x20 &
               ((ulong)*(byte *)(local_a0[3] + 0x50) ^ 0xffffffffffffffff);
      lVar4 = *(long *)(local_a0[3] + 0x48);
      FUN_100431a90(lVar16 + uVar13 + lVar4 * uVar2,lVar14);
      if (((*(byte *)(lVar14 + *(int *)(uVar7 + 0x30)) & 1) == 0) &&
         (*(char *)(lVar14 + *(int *)(uVar7 + 0x34)) != '\x01')) {
        FUN_10005241c(lVar14,FUN_100432e30);
      }
      else {
        puVar5 = puVar3;
        _swift_isUniquelyReferenced_nonNull_native();
        local_80 = puVar3;
        if (((ulong)puVar5 & 1) == 0) {
          FUN_100430958(0,*(long *)(puVar3 + 0x10) + 1,1);
          uVar7 = local_a0[0];
        }
        uVar17 = *(ulong *)(local_80 + 0x10);
        if (*(ulong *)(local_80 + 0x18) >> 1 <= uVar17) {
          FUN_100430958(1 < *(ulong *)(local_80 + 0x18),uVar17 + 1,1);
          uVar7 = local_a0[0];
        }
        puVar3 = local_80;
        *(ulong *)(local_80 + 0x10) = uVar17 + 1;
        FUN_1000523d8(lVar14,local_80 + uVar17 * lVar4 + uVar13,FUN_100432e30);
      }
      uVar2 = uVar2 + 1;
    } while (local_a0[2] != uVar2);
  }
  _swift_bridgeObjectRelease(lVar16);
  uVar2 = *(ulong *)(puVar3 + 0x10);
  puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar2 != 0) {
    uVar7 = 0;
    do {
      if (*(ulong *)(puVar3 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10042fd00);
        (*pcVar1)();
      }
      uVar17 = (ulong)*(byte *)(local_a0[3] + 0x50) + 0x20 &
               ((ulong)*(byte *)(local_a0[3] + 0x50) ^ 0xffffffffffffffff);
      lVar16 = *(long *)(local_a0[3] + 0x48);
      FUN_100431a90(puVar3 + lVar16 * uVar7 + uVar17,puVar11);
      uVar13 = *puVar11;
      FUN_10042eb14(uVar13,*(undefined8 *)((long)local_a0 + lVar9 + 8));
      if ((uVar13 & 1) == 0) {
        FUN_10005241c(puVar11,FUN_100432e30);
      }
      else {
        puVar6 = puVar5;
        _swift_isUniquelyReferenced_nonNull_native();
        local_80 = puVar5;
        if (((ulong)puVar6 & 1) == 0) {
          FUN_100430958(0,*(long *)(puVar5 + 0x10) + 1,1);
        }
        uVar13 = *(ulong *)(local_80 + 0x10);
        if (*(ulong *)(local_80 + 0x18) >> 1 <= uVar13) {
          FUN_100430958(1 < *(ulong *)(local_80 + 0x18),uVar13 + 1,1);
        }
        puVar5 = local_80;
        *(ulong *)(local_80 + 0x10) = uVar13 + 1;
        FUN_1000523d8(puVar11,local_80 + uVar13 * lVar16 + uVar17,FUN_100432e30);
      }
      uVar7 = uVar7 + 1;
    } while (uVar2 != uVar7);
  }
  _swift_release(puVar3);
  lVar9 = *(long *)(puVar5 + 0x10);
  _swift_release(puVar5);
  return lVar9 == 0;
}



/* Address: 0x10042fd04 | _TtC14TPInAppReceiptP33_49B299FEA3BD56F27DB286798366A4A114RefreshSession::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC14TPInAppReceiptP33_49B299FEA3BD56F27DB286798366A4A114RefreshSession::init
             (ID param_1,SEL param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *self;
  ID IVar3;
  class_t *pcVar4;
  objc_super local_40;
  
  lVar2 = receiptRefreshRequest;
  self = &_OBJC_CLASS___SKReceiptRefreshRequest;
  _objc_allocWithZone();
  IVar3 = objc_stub::init((ID)self);
  *(ID *)(param_1 + lVar2) = IVar3;
  puVar1 = (undefined8 *)(param_1 + completion);
  pcVar4 = (class_t *)0x0;
  FUN_1004319e0();
  *puVar1 = 0;
  puVar1[1] = 0;
  local_40.receiver = param_1;
  local_40.super_class = pcVar4;
  IVar3 = _objc_msgSendSuper2(&local_40,"init");
  objc_stub::setDelegate_(*(ID *)(IVar3 + receiptRefreshRequest),IVar3);
  return IVar3;
}



/* Address: 0x10042fd90 | _TtC14TPInAppReceiptP33_49B299FEA3BD56F27DB286798366A4A114RefreshSession::requestDidFinish: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC14TPInAppReceiptP33_49B299FEA3BD56F27DB286798366A4A114RefreshSession::requestDidFinish_
               (ID param_1,SEL param_2,ID param_3)

{
  FUN_10042fe34(0);
  objc_stub::cancel(*(ID *)(param_1 + receiptRefreshRequest));
  return;
}


