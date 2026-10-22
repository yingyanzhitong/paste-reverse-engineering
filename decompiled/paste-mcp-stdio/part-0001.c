/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100004518 | FUN_100004518 */

void FUN_100004518(void)

{
  return;
}



/* Address: 0x100004524 | FUN_100004524 */

void FUN_100004524(void)

{
  FUN_10000452c(0);
  return;
}



/* Address: 0x10000452c | FUN_10000452c */

void FUN_10000452c(undefined8 param_1)

{
  if (DAT_10000c4a0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100006568);
  return;
}



/* Address: 0x100004564 | FUN_100004564 */

undefined1  [16] FUN_100004564(URL param_1,ulong param_2)

{
  URL UVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined *local_58;
  long local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  
  local_58 = &DAT_100006108;
  UVar1 = Foundation::URL::typeMetadataAccessor();
  if (param_2 < 0x40) {
    local_50 = *(long *)(UVar1.unknown + -8) + 0x40;
    puStack_48 = &DAT_100006120;
    local_40 = PTR___value_witness_table_for_Builtin_UnknownObject_100008220 + 0x40;
    local_30 = PTR___value_witness_table_for_____>____100008338 + 0x40;
    puStack_28 = &DAT_100006138;
    uVar2 = 0x100;
    puStack_38 = local_40;
    _swift_updateClassMetadata2(param_1.unknown,0x100,7,&local_58,param_1.unknown + 0x50);
    if (param_1.unknown == (undefined *)0x0) {
      param_1.unknown = (undefined *)0x0;
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0x3f;
    param_1 = UVar1;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = param_1.unknown;
  return auVar3;
}



/* Address: 0x10000460c | FUN_10000460c */

void FUN_10000460c(void)

{
  FUN_100004614(0);
  return;
}



/* Address: 0x100004614 | FUN_100004614 */

void FUN_100004614(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_10000c370 != 0) {
    return;
  }
  puVar1 = &DAT_10000c378;
  FUN_1000046ac(&DAT_10000c378,&DAT_100006150);
  local_30 = (undefined *)Foundation::URLRequest::typeMetadataAccessor();
  puStack_28 = PTR___type_metadata_for_Foundation_Data_100008118;
  uVar2 = 0xe5000002;
  FUN_100004700(0xe5000002,0,&local_30,0,puVar1,0,4,0);
  DAT_10000c370 = uVar2;
  return;
}



/* Address: 0x1000046ac | FUN_1000046ac */

ulong FUN_1000046ac(ulong *param_1,long *param_2)

{
  ulong uVar1;
  
  if (*param_1 != 0) {
    return *param_1 & 0xfffffffffffffffe;
  }
  uVar1 = 0xff;
  _swift_getTypeByMangledNameInContextInMetadataState2
            (0xff,(long)param_2 + (long)(int)*param_2,*param_2 >> 0x20,0,0);
  *param_1 = uVar1 | 1;
  return uVar1 & 0xfffffffffffffffe;
}



/* Address: 0x100004700 | FUN_100004700 */

void FUN_100004700(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  if (PTR__swift_getExtendedFunctionTypeMetadata_100008390 != (undefined *)0x0) {
    _swift_getExtendedFunctionTypeMetadata();
    return;
  }
  _swift_getFunctionTypeMetadata(param_1,param_3,param_4,param_5);
  return;
}



/* Address: 0x100004730 | FUN_100004730 */

void FUN_100004730(void)

{
  undefined *puVar1;
  
  if (DAT_10000c380 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Foundation__Foundation__Data_>Foundation__DataProtocol_100008108;
  _swift_getWitnessTable
            (PTR_Foundation__Foundation__Data_>Foundation__DataProtocol_100008108,
             PTR___type_metadata_for_Foundation_Data_100008118);
  DAT_10000c380 = puVar1;
  return;
}



/* Address: 0x100004770 | FUN_100004770 */

void FUN_100004770(void)

{
  undefined *puVar1;
  
  if (DAT_10000c388 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift__Swift__String_>Swift__StringProtocol_1000082a0;
  _swift_getWitnessTable
            (PTR_Swift__Swift__String_>Swift__StringProtocol_1000082a0,
             PTR___type_metadata_for_Swift_String_100008290);
  DAT_10000c388 = puVar1;
  return;
}



/* Address: 0x1000047b0 | FUN_1000047b0 */

void FUN_1000047b0(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  
  lVar1 = param_5 + (param_1 >> 6) * 8;
  *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (param_1 & 0x3f);
  puVar2 = (undefined8 *)(*(long *)(param_5 + 0x30) + param_1 * 0x10);
  *puVar2 = param_2;
  puVar2[1] = param_3;
  FUN_100005838(param_4,*(long *)(param_5 + 0x38) + param_1 * 0x20);
  if (!SCARRY8(*(long *)(param_5 + 0x10),1)) {
    *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100004818);
  (*pcVar3)();
}



/* Address: 0x100004818 | FUN_100004818 */

void FUN_100004818(undefined8 *param_1,long param_2,ulong param_3)

{
  int iVar1;
  long *unaff_x20;
  long lVar2;
  
  lVar2 = *unaff_x20;
  _swift_bridgeObjectRetain(lVar2);
  FUN_100001cd8();
  _swift_bridgeObjectRelease(lVar2);
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
      FUN_100004a0c();
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(*(long *)(lVar2 + 0x30) + param_2 * 0x10 + 8));
    FUN_100005838(*(long *)(lVar2 + 0x38) + param_2 * 0x20,param_1);
    FUN_100004e6c(param_2,lVar2);
    *unaff_x20 = lVar2;
  }
  return;
}



/* Address: 0x1000048e8 | FUN_1000048e8 */

void FUN_1000048e8(undefined8 param_1,long param_2,ulong param_3,uint param_4)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  
  lVar7 = *unaff_x20;
  lVar2 = param_2;
  uVar3 = param_3;
  FUN_100001cd8(param_2);
  lVar5 = *(long *)(lVar7 + 0x10);
  uVar6 = (ulong)~(uint)uVar3 & 1;
  lVar4 = lVar5 + uVar6;
  if (SCARRY8(lVar5,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1000049c8);
    (*pcVar1)();
  }
  if (*(long *)(lVar7 + 0x18) < lVar4) {
    FUN_100004bb0(lVar4,param_4 & 1);
    uVar6 = param_3;
    FUN_100001cd8(param_2);
    lVar2 = param_2;
    if (((uint)uVar3 & 1) != ((uint)uVar6 & 1)) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100004988);
      (*pcVar1)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_100004a0c();
    lVar4 = *unaff_x20;
    goto joined_r0x0001000049dc;
  }
  lVar4 = *unaff_x20;
joined_r0x0001000049dc:
  if ((uVar3 & 1) != 0) {
    lVar4 = *(long *)(lVar4 + 0x38) + lVar2 * 0x20;
    FUN_10000288c(lVar4);
    FUN_100005838(param_1,lVar4);
    return;
  }
  FUN_1000047b0();
  _swift_bridgeObjectRetain(param_3);
  return;
}



/* Address: 0x100004a0c | FUN_100004a0c */

void FUN_100004a0c(void)

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
  long lVar10;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  long lVar11;
  long lVar12;
  undefined1 auStack_80 [32];
  
  this = (_DictionaryStorage *)&DAT_10000c3d0;
  FUN_1000016c0(&DAT_10000c3d0,&DAT_100006188);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var6 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) == 0) {
    _swift_release(original);
LAB_100004b88:
    *unaff_x20 = (long)p_Var6;
    return;
  }
  p_Var1 = original + 0x40;
  uVar7 = (1L << ((ulong)(byte)p_Var6[0x20] & 0x3f)) + 0x3fU >> 6;
  if (p_Var6 != original || p_Var1 + uVar7 * 8 <= p_Var6 + 0x40) {
    _memmove(p_Var6 + 0x40,p_Var1,uVar7 << 3);
  }
  lVar11 = 0;
  *(undefined8 *)(p_Var6 + 0x10) = *(undefined8 *)(original + 0x10);
  uVar8 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar7 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar7 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar7 = uVar7 & *(ulong *)(original + 0x40);
  if (uVar7 == 0) goto LAB_100004af4;
  do {
    uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
    uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
    uVar7 = uVar7 - 1 & uVar7;
    while( true ) {
      uVar9 = LZCOUNT(uVar9) | lVar11 << 6;
      lVar12 = uVar9 * 0x10;
      puVar2 = (undefined8 *)(*(long *)(original + 0x30) + lVar12);
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      lVar10 = uVar9 * 0x20;
      FUN_100005848(*(long *)(original + 0x38) + lVar10,auStack_80);
      puVar2 = (undefined8 *)(*(long *)(p_Var6 + 0x30) + lVar12);
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      FUN_100005838(auStack_80,*(long *)(p_Var6 + 0x38) + lVar10);
      _swift_bridgeObjectRetain(uVar4);
      if (uVar7 != 0) break;
LAB_100004af4:
      do {
        lVar10 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100004bb0);
          (*pcVar5)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar10) {
          _swift_release(original);
          goto LAB_100004b88;
        }
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



/* Address: 0x100004bb0 | FUN_100004bb0 */

void FUN_100004bb0(long param_1,bool param_2)

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
  this = (_DictionaryStorage *)&DAT_10000c3d0;
  FUN_1000016c0(&DAT_10000c3d0,&DAT_100006188);
  p_Var8 = original;
  Swift::_DictionaryStorage::_resize(this,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_100004e38:
    _swift_release(original);
LAB_100004e40:
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
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100004e68);
          (*pcVar7)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar17) {
          if ((param_2 & 1U) == 0) {
            _swift_release(original);
            goto LAB_100004e40;
          }
          uVar15 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          if (((byte)original[0x20] & 0x3f) < 6) {
            *(long *)p_Var16 = -1L << (uVar15 & 0x3f);
          }
          else {
            _bzero(p_Var16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_100004e38;
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
      FUN_100005848(lVar11,auStack_80);
      _swift_bridgeObjectRetain(pvVar4);
    }
    else {
      FUN_100005838(lVar11,auStack_80);
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
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100004e6c);
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
    FUN_100005838(auStack_80,*(long *)(p_Var8 + 0x38) + uVar10 * 0x20);
    *(long *)(p_Var8 + 0x10) = *(long *)(p_Var8 + 0x10) + 1;
    lVar11 = lVar17;
  } while( true );
}



/* Address: 0x100004e6c | FUN_100004e6c */

void FUN_100004e6c(Bucket param_1,long param_2)

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
  undefined *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_a8 [72];
  
  _Var1.unknown = (undefined *)(param_2 + 0x40);
  uVar10 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  puVar11 = (undefined *)((ulong)(param_1.unknown + 1) & (uVar10 ^ 0xffffffffffffffff));
  if ((*(ulong *)(_Var1.unknown + ((ulong)puVar11 >> 6) * 8) >> ((ulong)puVar11 & 0x3f) & 1) != 0) {
    uVar10 = ~uVar10;
    BVar8 = Swift::_HashTable::previousHole(param_1,_Var1);
    uVar12 = (ulong)(BVar8.unknown + 1) & uVar10;
    do {
      pSVar2 = (String *)(*(long *)(param_2 + 0x30) + (long)puVar11 * 0x10);
      pvVar5 = pSVar2->bridgeObject;
      SVar6 = *pSVar2;
      Swift::Hasher::init(*(__int64 *)(param_2 + 0x28));
      _swift_bridgeObjectRetain(pvVar5);
      into.unknown = auStack_a8;
      Swift::String::hash(into,SVar6);
      uVar9 = Swift::Hasher::_finalize(into);
      _swift_bridgeObjectRelease(pvVar5);
      uVar9 = uVar9 & uVar10;
      if ((long)param_1.unknown < (long)uVar12) {
        if (uVar9 < uVar12) {
LAB_100004f60:
          if ((long)param_1.unknown < (long)uVar9) goto LAB_100004ee8;
        }
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x30) + (long)param_1.unknown * 0x10);
        puVar4 = (undefined8 *)(*(long *)(param_2 + 0x30) + (long)puVar11 * 0x10);
        if (((long)param_1.unknown < (long)puVar11) ||
           (puVar4 + 2 <= puVar3 || param_1.unknown != puVar11)) {
          uVar13 = *puVar4;
          puVar3[1] = puVar4[1];
          *puVar3 = uVar13;
        }
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x38) + (long)param_1.unknown * 0x20);
        puVar4 = (undefined8 *)(*(long *)(param_2 + 0x38) + (long)puVar11 * 0x20);
        if ((((long)param_1.unknown < (long)puVar11) || (puVar4 + 4 <= puVar3)) ||
           (param_1.unknown != puVar11)) {
          uVar13 = *puVar4;
          uVar15 = puVar4[3];
          uVar14 = puVar4[2];
          puVar3[1] = puVar4[1];
          *puVar3 = uVar13;
          puVar3[3] = uVar15;
          puVar3[2] = uVar14;
          param_1.unknown = puVar11;
        }
      }
      else if (uVar12 <= uVar9) goto LAB_100004f60;
LAB_100004ee8:
      puVar11 = (undefined *)((ulong)(puVar11 + 1) & uVar10);
    } while ((*(ulong *)(_Var1.unknown + ((ulong)puVar11 >> 6) * 8) >> ((ulong)puVar11 & 0x3f) & 1)
             != 0);
  }
  uVar10 = (ulong)param_1.unknown >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(_Var1.unknown + uVar10) =
       *(ulong *)(_Var1.unknown + uVar10) & (-1L << ((ulong)param_1.unknown & 0x3f)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10000501c);
  (*pcVar7)();
}



/* Address: 0x10000501c | FUN_10000501c */

void FUN_10000501c(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    _swift_getWitnessTable(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Address: 0x10000505c | FUN_10000505c */

undefined * FUN_10000505c(long param_1)

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
  puVar5 = PTR___swiftEmptyDictionarySingleton_100008340;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_10000c3d0;
    FUN_1000016c0(&DAT_10000c3d0,&DAT_100006188);
    puVar5 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    param_1 = param_1 + 0x20;
    _swift_retain();
    do {
      FUN_100005884(param_1,&local_90,&DAT_10000c3b0,&DAT_100006170);
      uVar3 = uStack_88;
      uVar2 = local_90;
      uVar6 = local_90;
      uVar7 = uStack_88;
      FUN_100001cd8();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100005184);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      FUN_100005838(auStack_80,*(long *)(puVar5 + 0x38) + uVar6 * 0x20);
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100005188);
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



/* Address: 0x100005188 | FUN_100005188 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100005188(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  Encoding EVar1;
  Encoding EVar2;
  Encoding EVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  Data DVar9;
  ulong uVar10;
  ulong uVar11;
  _StringGuts _Var12;
  char *pcVar13;
  long extraout_x8;
  undefined *puVar14;
  Encoding using;
  long lVar15;
  String SVar16;
  undefined1 auVar17 [16];
  String SVar18;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined *local_228;
  char local_218 [24];
  undefined1 auStack_200 [8];
  undefined *local_1f8;
  undefined *local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long local_1d8;
  undefined1 auStack_1d0 [24];
  long local_1b8;
  undefined *local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long local_198;
  undefined1 auStack_190 [256];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1000081f8;
  EVar1 = Encoding::_typeMetadataAccessor();
  lVar15 = *(long *)(EVar1.unknown + -8);
  EVar2 = EVar1;
  (*(code *)PTR____chkstk_darwin_1000081e8)(*(undefined8 *)(lVar15 + 0x40));
  using.unknown = (undefined *)((long)&local_240 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_90 = param_1;
  uStack_88 = param_2;
  EVar2 = Encoding::_get_utf8(EVar2);
  FUN_100004770();
  uVar10 = 0;
  EVar3.unknown = using.unknown;
  (extension_Foundation)::Swift::StringProtocol::_data(using,false);
  local_228 = using.unknown;
  (**(code **)(lVar15 + 8))(using.unknown,EVar1.unknown);
  puVar7 = PTR___type_metadata_for_Any_100008328;
  if (uVar10 >> 0x3c < 0xf) {
    puVar4 = &_OBJC_CLASS___NSJSONSerialization;
    Foundation::Data::_bridgeToObjectiveC((Data)EVar3.unknown);
    local_90 = 0;
    EVar2.unknown = (undefined *)0x0;
    FUN_100005e80();
    if (puVar4 == (undefined *)0x0) {
      uVar6 = local_90;
      Foundation::__convertNSErrorToError();
      _swift_willThrow(0);
      FUN_10000283c(EVar3.unknown,uVar10);
      _swift_errorRelease(uVar6);
    }
    else {
      Swift::__bridgeAnyObjectToAny();
      _swift_unknownObjectRelease(puVar4);
      EVar2.unknown = &DAT_10000c3b8;
      FUN_1000016c0(&DAT_10000c3b8,&DAT_100006178);
      ppuVar5 = &local_1b0;
      _swift_dynamicCast(ppuVar5,&local_90,puVar7 + 8,EVar2.unknown,6);
      if (((ulong)ppuVar5 & 1) != 0) {
        if (*(long *)(local_1b0 + 0x10) == 0) {
LAB_1000057d0:
          uStack_88 = 0;
          local_90 = 0;
          uStack_78 = 0;
          uStack_80 = 0;
        }
        else {
          _swift_bridgeObjectRetain(local_1b0);
          lVar15 = 0x6469;
          uVar11 = 0;
          FUN_100001cd8(0x6469);
          if ((uVar11 & 1) == 0) {
            _swift_bridgeObjectRelease(local_1b0);
            goto LAB_1000057d0;
          }
          FUN_100005848(*(long *)(local_1b0 + 0x38) + lVar15 * 0x20,&local_90);
          _swift_bridgeObjectRelease(local_1b0);
        }
        FUN_10000283c(EVar3.unknown,uVar10);
        _swift_bridgeObjectRelease(local_1b0);
        goto LAB_10000538c;
      }
      FUN_10000283c(EVar3.unknown,uVar10);
    }
  }
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
LAB_10000538c:
  puVar7 = &DAT_10000c3a8;
  FUN_1000016c0(&DAT_10000c3a8,&DAT_100006168);
  puVar8 = puVar7;
  _swift_initStackObject();
  uStack_238 = 4;
  local_240 = 2;
  *(undefined8 *)(puVar8 + 0x20) = 0x6370726e6f736a;
  *(undefined8 *)(puVar8 + 0x18) = 4;
  *(undefined8 *)(puVar8 + 0x10) = 2;
  *(undefined8 *)(puVar8 + 0x28) = 0xe700000000000000;
  *(undefined8 *)(puVar8 + 0x30) = 0x302e32;
  *(undefined8 *)(puVar8 + 0x38) = 0xe300000000000000;
  puVar4 = PTR___type_metadata_for_Swift_String_100008290;
  *(undefined **)(puVar8 + 0x48) = PTR___type_metadata_for_Swift_String_100008290;
  *(undefined8 *)(puVar8 + 0x50) = 0x726f727265;
  *(undefined8 *)(puVar8 + 0x58) = 0xe500000000000000;
  _Var12.unknown = auStack_190;
  _swift_initStackObject();
  *(undefined8 *)(puVar7 + 0x20) = 0x65646f63;
  puVar14 = PTR___type_metadata_for_Swift_Int_1000082b0;
  *(undefined8 *)(puVar7 + 0x18) = uStack_238;
  *(undefined8 *)(puVar7 + 0x10) = local_240;
  *(undefined8 *)(puVar7 + 0x28) = 0xe400000000000000;
  *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffff80a5;
  *(undefined **)(puVar7 + 0x48) = puVar14;
  *(undefined8 *)(puVar7 + 0x50) = 0x6567617373656d;
  *(undefined8 *)(puVar7 + 0x58) = 0xe700000000000000;
  local_1b0 = (undefined *)0x0;
  uStack_1a8 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x13,_Var12);
  _swift_bridgeObjectRelease(uStack_1a8);
  local_1b0 = (undefined *)0xd000000000000011;
  uStack_1a8 = 0x8000000100006380;
  pcVar13 = local_218;
  _swift_getErrorValue(param_3,auStack_200);
  SVar16 = (extension_Foundation)::Swift::Error::get_localizedDescription();
  SVar18.bridgeObject = EVar2.unknown;
  SVar18.str = pcVar13;
  Swift::String::append(SVar16,SVar18);
  _swift_bridgeObjectRelease(SVar16.bridgeObject);
  *(undefined **)(puVar7 + 0x78) = puVar4;
  *(undefined **)(puVar7 + 0x60) = local_1b0;
  *(undefined8 *)(puVar7 + 0x68) = uStack_1a8;
  puVar14 = puVar7;
  FUN_10000505c();
  _swift_setDeallocating(puVar7);
  puVar4 = &DAT_10000c3b0;
  FUN_1000016c0(&DAT_10000c3b0,&DAT_100006170);
  _swift_arrayDestroy(puVar7 + 0x20,2,puVar4);
  puVar7 = &DAT_10000c3b8;
  FUN_1000016c0(&DAT_10000c3b8,&DAT_100006178);
  *(undefined **)(puVar8 + 0x78) = puVar7;
  *(undefined **)(puVar8 + 0x60) = puVar14;
  puVar7 = puVar8;
  FUN_10000505c();
  _swift_setDeallocating(puVar8);
  _swift_arrayDestroy(puVar8 + 0x20,2,puVar4);
  local_1f8 = puVar7;
  FUN_100005884(&local_90,auStack_1d0,&DAT_10000c3c0,&DAT_100006180);
  if (local_1b8 == 0) {
    puVar4 = &_OBJC_CLASS___NSNull;
    _objc_allocWithZone();
    FUN_100005f60();
    lVar15 = 0;
    FUN_1000057f4();
    local_1b0 = puVar4;
    local_198 = lVar15;
    if (local_1b8 != 0) {
      FUN_100001f78(auStack_1d0,&DAT_10000c3c0,&DAT_100006180);
    }
  }
  else {
    FUN_100005838(auStack_1d0,&local_1b0);
  }
  uStack_1e8 = uStack_1a8;
  local_1f0 = local_1b0;
  local_1d8 = local_198;
  uStack_1e0 = uStack_1a0;
  if (local_198 == 0) {
    FUN_100001f78(&local_1f0,&DAT_10000c3c0,&DAT_100006180);
    FUN_100004818(auStack_1d0,0x6469,0xe200000000000000);
    FUN_100001f78(auStack_1d0,&DAT_10000c3c0,&DAT_100006180);
    puVar7 = local_1f8;
  }
  else {
    FUN_100005838(&local_1f0,auStack_1d0);
    puVar4 = puVar7;
    _swift_isUniquelyReferenced_nonNull_native(puVar7);
    local_1f0 = puVar7;
    FUN_1000048e8(auStack_1d0,0x6469,0xe200000000000000,puVar4);
    puVar7 = local_1f0;
  }
  DVar9.unknown = &_OBJC_CLASS___NSJSONSerialization;
  puVar4 = PTR___type_metadata_for_Swift_String_100008290;
  (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  local_1b0 = (undefined *)0x0;
  FUN_100005ec0();
  if (DVar9.unknown == (undefined *)0x0) {
    puVar4 = local_1b0;
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    _swift_errorRelease(puVar4);
    EVar2.unknown = (undefined *)0x7d7b;
    puVar4 = (undefined *)0xe200000000000000;
    FUN_1000037b0();
    DVar9.unknown = EVar2.unknown;
  }
  else {
    DVar9 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar9);
    EVar2.unknown = (undefined *)0x0;
  }
  Encoding::_get_utf8(EVar2);
  EVar2.unknown = DVar9.unknown;
  puVar14 = puVar4;
  (extension_Foundation)::Swift::String::_init((Encoding)DVar9.unknown);
  if (puVar14 == (undefined *)0x0) {
    FUN_100001dc0(DVar9.unknown,puVar4);
    puVar14 = (undefined *)0xe200000000000000;
    EVar2.unknown = (undefined *)0x7d7b;
  }
  else {
    FUN_100001dc0(DVar9.unknown,puVar4);
  }
  FUN_100001f78(&local_90,&DAT_10000c3c0,&DAT_100006180);
  _swift_bridgeObjectRelease(puVar7);
  if (*(long *)PTR____stack_chk_guard_1000081f8 == local_70) {
    auVar17._8_8_ = puVar14;
    auVar17._0_8_ = EVar2.unknown;
    return auVar17;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1000057f4 | FUN_1000057f4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_1000057f4(void)

{
  undefined *puVar1;
  
  if (DAT_10000c3c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___NSNull;
  _swift_getObjCClassMetadata();
  DAT_10000c3c8 = puVar1;
  return;
}



/* Address: 0x100005838 | FUN_100005838 */

undefined8 * FUN_100005838(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar3 = param_1[3];
  uVar2 = param_1[2];
  param_2[1] = param_1[1];
  *param_2 = uVar1;
  param_2[3] = uVar3;
  param_2[2] = uVar2;
  return param_2;
}



/* Address: 0x100005848 | FUN_100005848 */

long FUN_100005848(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Address: 0x100005884 | FUN_100005884 */

undefined8 FUN_100005884(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  FUN_1000016c0(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Address: 0x1000058cc | FUN_1000058cc */

void FUN_1000058cc(long param_1)

{
  if (param_1 != 0) {
    _swift_getObjectType();
    Swift::Actor::get_unownedExecutor();
    return;
  }
  return;
}



/* Address: 0x100005904 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::URLRequest::$set_httpMethod */

/* Foundation.URLRequest.httpMethod.setter : Swift.String? */

void __thiscall Foundation::URLRequest::_set_httpMethod(URLRequest *this)

{
                    /* WARNING: Could not recover jumptable at 0x00010000590c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__set_httpMethod_100008000)();
  return;
}



/* Address: 0x100005910 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::URLRequest::set_timeoutInterval */

/* Foundation.URLRequest.timeoutInterval.setter : Swift.Double */

void __thiscall Foundation::URLRequest::set_timeoutInterval(URLRequest *this,double param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100005918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_set_timeoutInterval_100008008)();
  return;
}



/* Address: 0x10000591c | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::URLRequest::init */

/* Foundation.URLRequest.init(url: Foundation.URL, cachePolicy: __C.NSURLRequestCachePolicy,
   timeoutInterval: Swift.Double) -> Foundation.URLRequest */

URLRequest_conflict
Foundation::URLRequest::init(URL url,NSURLRequestCachePolicy cachePolicy,double timeoutInterval)

{
                    /* WARNING: Could not recover jumptable at 0x000100005924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100008010)();
  return (URLRequest_conflict)url.unknown;
}



/* Address: 0x100005928 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::URLRequest::$setValue */

/* Foundation.URLRequest.setValue(_: Swift.String?, forHTTPHeaderField: Swift.String) -> () */

void Foundation::URLRequest::_setValue(String param_1,URLRequest_conflict forHTTPHeaderField)

{
                    /* WARNING: Could not recover jumptable at 0x000100005930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__setValue_100008018)(param_1.str,param_1.bridgeObject);
  return;
}



/* Address: 0x100005934 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::URLRequest::typeMetadataAccessor */

/* type metadata accessor for Foundation.URLRequest */

URLRequest_conflict Foundation::URLRequest::typeMetadataAccessor(void)

{
  URLRequest_conflict in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x00010000593c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100008020)();
  return (URLRequest_conflict)in_x0.unknown;
}



/* Address: 0x100005940 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::CharacterSet::get_whitespaces */

/* static Foundation.CharacterSet.whitespaces.getter : Foundation.CharacterSet */

CharacterSet Foundation::CharacterSet::get_whitespaces(CharacterSet param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100005948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_whitespaces_100008028)();
  return (CharacterSet)param_1.unknown;
}



/* Address: 0x10000594c | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::CharacterSet::typeMetadataAccessor */

/* type metadata accessor for Foundation.CharacterSet */

CharacterSet Foundation::CharacterSet::typeMetadataAccessor(void)

{
  CharacterSet in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100005954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100008030)();
  return (CharacterSet)in_x0.unknown;
}



/* Address: 0x100005958 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::__DataStorage::$init */

/* Foundation.__DataStorage.init(bytes: Swift.UnsafeMutableRawPointer?, length: Swift.Int, copy:
   Swift.Bool, deallocator: ((Swift.UnsafeMutableRawPointer, Swift.Int) -> ())?, offset: Swift.Int)
   -> Foundation.__DataStorage */

__DataStorage * __thiscall
Foundation::__DataStorage::_init(__DataStorage *this,__int64 bytes,bool length,__int64 copy)

{
                    /* WARNING: Could not recover jumptable at 0x000100005960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100008038)(bytes,length);
  return (__DataStorage *)bytes;
}



/* Address: 0x100005964 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::__DataStorage::$init */

/* Foundation.__DataStorage.init(bytes: Swift.UnsafeRawPointer?, length: Swift.Int) ->
   Foundation.__DataStorage */

__DataStorage * __thiscall Foundation::__DataStorage::_init(__DataStorage *this,__int64 bytes)

{
                    /* WARNING: Could not recover jumptable at 0x00010000596c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100008040)();
  return (__DataStorage *)bytes;
}



/* Address: 0x100005970 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::__DataStorage::$get__bytes */

/* Foundation.__DataStorage._bytes.getter : Swift.UnsafeMutableRawPointer? */

void __thiscall Foundation::__DataStorage::_get__bytes(__DataStorage *this,__DataStorage *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100005978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get__bytes_100008048)();
  return;
}



/* Address: 0x10000597c | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::__DataStorage::init */

/* Foundation.__DataStorage.init(length: Swift.Int) -> Foundation.__DataStorage */

__DataStorage * __thiscall Foundation::__DataStorage::init(__DataStorage *this,__int64 length)

{
                    /* WARNING: Could not recover jumptable at 0x000100005984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100008050)();
  return (__DataStorage *)length;
}



/* Address: 0x100005988 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::__DataStorage::get__length */

/* Foundation.__DataStorage._length.getter : Swift.Int */

__int64 __thiscall
Foundation::__DataStorage::get__length(__DataStorage *this,__DataStorage *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100005990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get__length_100008058)();
  return (__int64)param_1;
}



/* Address: 0x100005994 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::__DataStorage::get__offset */

/* Foundation.__DataStorage._offset.getter : Swift.Int */

__int64 __thiscall
Foundation::__DataStorage::get__offset(__DataStorage *this,__DataStorage *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010000599c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get__offset_100008060)();
  return (__int64)param_1;
}



/* Address: 0x1000059a0 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::__DataStorage::typeMetadataAccessor */

/* type metadata accessor for Foundation.__DataStorage */

__DataStorage * Foundation::__DataStorage::typeMetadataAccessor(void)

{
  __DataStorage *in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x0001000059a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100008068)();
  return in_x0;
}



/* Address: 0x1000059ac | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::ContiguousBytes::$withUnsafeBytes */

/* dispatch thunk of Foundation.ContiguousBytes.withUnsafeBytes<A>((Swift.UnsafeRawBufferPointer)
   throws -> A1) throws -> A1 */

void Foundation::ContiguousBytes::_withUnsafeBytes(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000059b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__withUnsafeBytes_100008078)();
  return;
}



/* Address: 0x1000059b8 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::AsyncLineSequence::$makeAsyncIterator */

/* Foundation.AsyncLineSequence.makeAsyncIterator() -> Foundation.AsyncLineSequence<A>.AsyncIterator
    */

AsyncIterator Foundation::AsyncLineSequence::_makeAsyncIterator(AsyncLineSequence param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001000059c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__makeAsyncIterator_100008080)();
  return (AsyncIterator)param_1.unknown;
}



/* Address: 0x1000059c4 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::AsyncLineSequence::AsyncIterator::$next */

/* Foundation.AsyncLineSequence.AsyncIterator.next() async throws -> Swift.String? */

void Foundation::AsyncLineSequence::AsyncIterator::_next(AsyncIterator param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001000059cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__next_100008088)();
  return;
}



/* Address: 0x1000059d0 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::$_convertNSErrorToError */

/* Foundation._convertNSErrorToError(__C.NSError?) -> Swift.Error */

void Foundation::__convertNSErrorToError(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000059d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___convertNSErrorToError_1000080a8)();
  return;
}



/* Address: 0x1000059dc | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::URL::$get_scheme */

/* Foundation.URL.scheme.getter : Swift.String? */

void Foundation::URL::_get_scheme(URL param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001000059e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_scheme_1000080b0)();
  return;
}



/* Address: 0x1000059e8 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::URL::$init */

/* Foundation.URL.init(string: __shared Swift.String) -> Foundation.URL? */

void Foundation::URL::_init(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000059f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_1000080b8)();
  return;
}



/* Address: 0x1000059f4 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::URL::typeMetadataAccessor */

/* type metadata accessor for Foundation.URL */

URL Foundation::URL::typeMetadataAccessor(void)

{
  URL in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x0001000059fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_1000080c0)();
  return (URL)in_x0.unknown;
}



/* Address: 0x100005a00 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Data::LargeSlice::ensureUniqueReference */

/* Foundation.Data.LargeSlice.ensureUniqueReference() -> () */

void Foundation::Data::LargeSlice::ensureUniqueReference(LargeSlice param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100005a08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_ensureUniqueReference_1000080d0)();
  return;
}



/* Address: 0x100005a0c | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Data::RangeReference::typeMetadataAccessor */

/* type metadata accessor for Foundation.Data.RangeReference */

RangeReference * Foundation::Data::RangeReference::typeMetadataAccessor(void)

{
  RangeReference *in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100005a14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_1000080d8)();
  return in_x0;
}



/* Address: 0x100005a18 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Data::_Representation::$replaceSubrange */

/* Foundation.Data._Representation.replaceSubrange(_: Swift.Range<Swift.Int>, with:
   Swift.UnsafeRawPointer?, count: Swift.Int) -> () */

void Foundation::Data::_Representation::_replaceSubrange
               (Range<__int64> param_1,__int64 with,_Representation count,...)

{
                    /* WARNING: Could not recover jumptable at 0x000100005a20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__replaceSubrange_1000080e0)(param_1.unknown,with,count.value);
  return;
}



/* Address: 0x100005a24 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Data::_Representation::append */

/* Foundation.Data._Representation.append(contentsOf: Swift.UnsafeRawBufferPointer) -> () */

void Foundation::Data::_Representation::append
               (UnsafeRawBufferPointer contentsOf,_Representation param_2,...)

{
                    /* WARNING: Could not recover jumptable at 0x000100005a2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_append_1000080e8)(contentsOf.unknown,param_2.value);
  return;
}



/* Address: 0x100005a30 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Data::_bridgeToObjectiveC */

/* Foundation.Data._bridgeToObjectiveC() -> __C.NSData */

NSData * Foundation::Data::_bridgeToObjectiveC(Data param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100005a38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__bridgeToObjectiveC_1000080f8)();
  return (NSData *)param_1.unknown;
}



/* Address: 0x100005a3c | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Data::$_unconditionallyBridgeFromObjectiveC */

/* static Foundation.Data._unconditionallyBridgeFromObjectiveC(__C.NSData?) -> Foundation.Data */

Data Foundation::Data::__unconditionallyBridgeFromObjectiveC(Data param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100005a44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___unconditionallyBridgeFromObjectiveC_100008100)();
  return (Data)param_1.unknown;
}



/* Address: 0x100005a48 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC */

/* (extension in Foundation):Swift.Dictionary._bridgeToObjectiveC() -> __C.NSDictionary */

NSDictionary * (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC(void)

{
  NSDictionary *in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100005a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__bridgeToObjectiveC_100008120)();
  return in_x0;
}



/* Address: 0x100005a54 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::Swift::Dictionary::$_unconditionallyBridgeFromObjectiveC */

/* static (extension in
   Foundation):Swift.Dictionary._unconditionallyBridgeFromObjectiveC(__C.NSDictionary?) -> [A : B]
    */

Dictionary<undefined,undefined>
(extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC(void)

{
  Dictionary<undefined,undefined> in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100005a5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___unconditionallyBridgeFromObjectiveC_100008128)();
  return (Dictionary<undefined,undefined>)in_x0.unknown;
}



/* Address: 0x100005a60 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::Swift::String::_bridgeToObjectiveC */

/* (extension in Foundation):Swift.String._bridgeToObjectiveC() -> __C.NSString */

NSString * (extension_Foundation)::Swift::String::_bridgeToObjectiveC(void)

{
  NSString *in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100005a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__bridgeToObjectiveC_100008130)();
  return in_x0;
}



/* Address: 0x100005a6c | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::Swift::String::$_unconditionallyBridgeFromObjectiveC */

/* static (extension in Foundation):Swift.String._unconditionallyBridgeFromObjectiveC(__C.NSString?)
   -> Swift.String */

String (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC(void)

{
  char *in_x0;
  void *in_x1;
  String SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100005a74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___unconditionallyBridgeFromObjectiveC_100008138)();
  SVar1.bridgeObject = in_x1;
  SVar1.str = in_x0;
  return SVar1;
}



/* Address: 0x100005a78 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::Swift::String::$init */

/* (extension in Foundation):Swift.String.init(data: __shared Foundation.Data, encoding: (extension
   in Foundation):Swift.String.Encoding) -> Swift.String? */

void (extension_Foundation)::Swift::String::_init(Encoding data)

{
                    /* WARNING: Could not recover jumptable at 0x000100005a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100008140)();
  return;
}



/* Address: 0x100005a84 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Encoding::$get_utf8 */

/* static (extension in Foundation):Swift.String.Encoding.utf8.getter : (extension in
   Foundation):Swift.String.Encoding */

Encoding Encoding::_get_utf8(Encoding param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100005a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_utf8_100008148)();
  return (Encoding)param_1.unknown;
}



/* Address: 0x100005a90 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Encoding::$typeMetadataAccessor */

/* type metadata accessor for (extension in Foundation):Swift.String.Encoding */

Encoding Encoding::_typeMetadataAccessor(void)

{
  Encoding in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100005a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__typeMetadataAccessor_100008150)();
  return (Encoding)in_x0.unknown;
}



/* Address: 0x100005a9c | /usr/lib/swift/libswiftCore.dylib::Swift::String::lowercased */

/* Swift.String.lowercased() -> Swift.String */

String Swift::String::lowercased(String param_1)

{
  char *pcVar1;
  void *pvVar2;
  String SVar3;
  
  pvVar2 = param_1.bridgeObject;
  pcVar1 = param_1.str;
                    /* WARNING: Could not recover jumptable at 0x000100005aa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_lowercased_100008228)();
  SVar3.bridgeObject = pvVar2;
  SVar3.str = pcVar1;
  return SVar3;
}



/* Address: 0x100005aa8 | /usr/lib/swift/libswiftCore.dylib::Swift::String::$_fromSubstring */

/* static Swift.String._fromSubstring(__shared Swift.Substring) -> Swift.String */

String Swift::String::__fromSubstring(String param_1)

{
  char *pcVar1;
  void *pvVar2;
  String SVar3;
  
  pvVar2 = param_1.bridgeObject;
  pcVar1 = param_1.str;
                    /* WARNING: Could not recover jumptable at 0x000100005ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___fromSubstring_100008230)();
  SVar3.bridgeObject = pvVar2;
  SVar3.str = pcVar1;
  return SVar3;
}



/* Address: 0x100005ab4 | /usr/lib/swift/libswiftCore.dylib::Swift::String::hash */

/* Swift.String.hash(into: inout Swift.Hasher) -> () */

void Swift::String::hash(Hasher into,String param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100005abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_hash_100008238)(into.unknown,param_2.str,param_2.bridgeObject);
  return;
}



/* Address: 0x100005ac0 | /usr/lib/swift/libswiftCore.dylib::Swift::String::get_count */

/* Swift.String.count.getter : Swift.Int */

__int64 Swift::String::get_count(String param_1)

{
  char *pcVar1;
  
  pcVar1 = param_1.str;
                    /* WARNING: Could not recover jumptable at 0x000100005ac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_count_100008240)(pcVar1,param_1.bridgeObject);
  return (__int64)pcVar1;
}



/* Address: 0x100005acc | /usr/lib/swift/libswiftCore.dylib::Swift::String::$index */

/* Swift.String.index(_: Swift.String.Index, offsetBy: Swift.Int, limitedBy: Swift.String.Index) ->
   Swift.String.Index? */

void Swift::String::_index(Index param_1,__int64 offsetBy,Index limitedBy,String param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000100005ad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__index_100008248)();
  return;
}



/* Address: 0x100005ad8 | /usr/lib/swift/libswiftCore.dylib::Swift::String::append */

/* Swift.String.append(Swift.String) -> () */

void Swift::String::append(String param_1,String param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100005ae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_append_100008250)(param_1.str,param_1.bridgeObject,param_2.str,param_2.bridgeObject)
  ;
  return;
}


