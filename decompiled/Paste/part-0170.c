/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100202ec0 | FUN_100202ec0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ulong FUN_100202ec0(ulong param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  
  lVar7 = *unaff_x20;
  uVar2 = param_2;
  uVar3 = param_2;
  thunk_FUN_1001f5454(param_2);
  lVar5 = *(long *)(lVar7 + 0x10);
  uVar6 = (ulong)~(uint)uVar3 & 1;
  lVar4 = lVar5 + uVar6;
  if (SCARRY8(lVar5,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100202f8c);
    (*pcVar1)();
  }
  if (*(long *)(lVar7 + 0x18) < lVar4) {
    param_3 = param_3 & 1;
    FUN_10020355c(lVar4);
    uVar2 = param_2;
    thunk_FUN_1001f5454(param_2);
    if (((uint)uVar3 & 1) != (param_3 & 1)) {
      FUN_1001f3e68(0);
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100202f50);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    FUN_1001f5968();
    lVar4 = *unaff_x20;
    goto joined_r0x000100202fa0;
  }
  lVar4 = *unaff_x20;
joined_r0x000100202fa0:
  if ((uVar3 & 1) != 0) {
    lVar4 = *(long *)(lVar4 + 0x38) + uVar2 * 0x20;
    FUN_100004594(lVar4);
    FUN_100011080(param_1,lVar4);
    return param_1;
  }
  FUN_100202d34();
  return param_2;
}



/* Address: 0x100202fc8 | FUN_100202fc8 */

void FUN_100202fc8(undefined8 param_1)

{
  if (DAT_100fb6560 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetEnumDescriptor_100ca7e98);
  return;
}



/* Address: 0x100203000 | FUN_100203000 */

void FUN_100203000(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  FUN_100071370();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1002030d8);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_100203834(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar8 = param_3;
    FUN_100071370();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1002030a0);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_1001f5aec();
    lVar6 = *unaff_x20;
    goto joined_r0x0001002030ec;
  }
  lVar6 = *unaff_x20;
joined_r0x0001002030ec:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
    _swift_bridgeObjectRelease(uVar7);
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100203150);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
  _swift_bridgeObjectRetain(param_3);
  return;
}



/* Address: 0x100203150 | FUN_100203150 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ulong FUN_100203150(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  uVar3 = param_3;
  uVar4 = param_2;
  FUN_100071340();
  lVar5 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar7;
  if (SCARRY8(lVar5,uVar7)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100203220);
    (*pcVar2)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar6) {
    param_4 = param_4 & 1;
    FUN_100203ad0(lVar6);
    uVar3 = param_3;
    FUN_100071340();
    if (((uint)uVar4 & 1) != (param_4 & 1)) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1002031e8);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_1001f5c5c();
    lVar6 = *unaff_x20;
    goto joined_r0x000100203234;
  }
  lVar6 = *unaff_x20;
joined_r0x000100203234:
  if ((uVar4 & 1) != 0) {
    puVar1 = (undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 0x10);
    *puVar1 = param_1;
    puVar1[1] = param_2;
    return 0;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  *(ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 8) = param_3;
  puVar1 = (undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 0x10);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100203294);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
  return uVar3;
}



/* Address: 0x100203294 | FUN_100203294 */

void FUN_100203294(long param_1,bool param_2)

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
  long lVar9;
  Hasher into;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  ulong uVar15;
  __RawDictionaryStorage *p_Var16;
  long lVar17;
  undefined1 auStack_d0 [72];
  undefined1 auStack_88 [40];
  
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_DictionaryStorage *)&DAT_100fb5ed0;
  FUN_1000037f0(&DAT_100fb5ed0,&DAT_100c34868);
  p_Var8 = original;
  Swift::_DictionaryStorage::_resize(this,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_100203528:
    _swift_release(original);
LAB_100203530:
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
  lVar9 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar17 = lVar9 + 1;
        if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100203558);
          (*pcVar7)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar17) {
          if ((param_2 & 1U) == 0) {
            _swift_release(original);
            goto LAB_100203530;
          }
          uVar15 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          if (((byte)original[0x20] & 0x3f) < 6) {
            *(long *)p_Var16 = -1L << (uVar15 & 0x3f);
          }
          else {
            _bzero(p_Var16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_100203528;
        }
        uVar15 = *(ulong *)(p_Var16 + lVar17 * 8);
        lVar9 = lVar9 + 1;
      } while (uVar15 == 0);
      uVar11 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar11 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar17 = lVar9;
    }
    uVar11 = LZCOUNT(uVar11) | lVar17 << 6;
    pSVar2 = (String *)(*(long *)(original + 0x30) + uVar11 * 0x10);
    pcVar3 = pSVar2->str;
    pvVar4 = pSVar2->bridgeObject;
    SVar5 = *pSVar2;
    lVar9 = *(long *)(original + 0x38) + uVar11 * 0x28;
    if ((param_2 & 1U) == 0) {
      FUN_100076688(lVar9,auStack_88);
      _swift_bridgeObjectRetain(pvVar4);
    }
    else {
      FUN_100076508(lVar9,auStack_88);
    }
    Swift::Hasher::init(*(__int64 *)(p_Var8 + 0x28));
    into.unknown = auStack_d0;
    Swift::String::hash(into,SVar5);
    uVar10 = Swift::Hasher::_finalize(into);
    uVar14 = -1L << ((ulong)(byte)p_Var8[0x20] & 0x3f);
    uVar10 = uVar10 & (uVar14 ^ 0xffffffffffffffff);
    uVar12 = uVar10 >> 6;
    uVar11 = -1L << (uVar10 & 0x3f) & (*(ulong *)(p_Var8 + uVar12 * 8 + 0x40) ^ 0xffffffffffffffff);
    if (uVar11 == 0) {
      bVar6 = false;
      uVar11 = 0x3f - uVar14 >> 6;
      do {
        uVar10 = uVar12 + 1;
        if ((uVar10 == uVar11) && (bVar6)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10020355c);
          (*pcVar7)();
        }
        uVar12 = 0;
        if (uVar10 != uVar11) {
          uVar12 = uVar10;
        }
        bVar6 = (bool)(uVar10 == uVar11 | bVar6);
      } while (*(ulong *)(p_Var8 + uVar12 * 8 + 0x40) == 0xffffffffffffffff);
      uVar11 = ~*(ulong *)(p_Var8 + uVar12 * 8 + 0x40);
      uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | uVar12 << 6;
    }
    else {
      uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | uVar10 & 0x7fffffffffffffc0;
    }
    uVar12 = uVar11 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var8 + uVar12 + 0x40) = 1L << (uVar11 & 0x3f) | *(ulong *)(p_Var8 + uVar12 + 0x40);
    puVar1 = (undefined8 *)(*(long *)(p_Var8 + 0x30) + uVar11 * 0x10);
    *puVar1 = pcVar3;
    puVar1[1] = pvVar4;
    FUN_100076508(auStack_88,*(long *)(p_Var8 + 0x38) + uVar11 * 0x28);
    *(long *)(p_Var8 + 0x10) = *(long *)(p_Var8 + 0x10) + 1;
    lVar9 = lVar17;
  } while( true );
}



/* Address: 0x10020355c | FUN_10020355c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10020355c(long param_1,bool param_2)

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
  this = (_DictionaryStorage *)&DAT_100fb5eb8;
  FUN_1000037f0(&DAT_100fb5eb8,&DAT_100c34848);
  p_Var3 = original;
  Swift::_DictionaryStorage::_resize(this,original,_Var10,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_100203800:
    _swift_release(original);
LAB_100203808:
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
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100203830);
          (*pcVar2)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar14) {
          if ((param_2 & 1U) == 0) {
            _swift_release(original);
            goto LAB_100203808;
          }
          uVar11 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          if (((byte)original[0x20] & 0x3f) < 6) {
            *(long *)p_Var12 = -1L << (uVar11 & 0x3f);
          }
          else {
            _bzero(p_Var12,uVar11 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_100203800;
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
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100203834);
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



/* Address: 0x100203834 | FUN_100203834 */

void FUN_100203834(long param_1,bool param_2)

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
  this = (_DictionaryStorage *)&DAT_100fb5eb0;
  FUN_1000037f0(&DAT_100fb5eb0,&DAT_100c34840);
  p_Var8 = original;
  Swift::_DictionaryStorage::_resize(this,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_100203a9c:
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
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100203acc);
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
          goto LAB_100203a9c;
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
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100203ad0);
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



/* Address: 0x100203ad0 | FUN_100203ad0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100203ad0(long param_1,undefined *param_2)

{
  __int64 capacity;
  undefined8 *puVar1;
  bool bVar2;
  code *pcVar3;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var4;
  ulong uVar5;
  Hasher HVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  __RawDictionaryStorage *p_Var13;
  __uint64 _Var14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_DictionaryStorage *)&DAT_100fb5ea0;
  FUN_1000037f0(&DAT_100fb5ea0,&DAT_100c34830);
  p_Var4 = original;
  HVar6.unknown = param_2;
  Swift::_DictionaryStorage::_resize(this,original,capacity,SUB81(param_2,0));
  if (*(long *)(original + 0x10) == 0) {
LAB_100203d08:
    _swift_release(original);
    *unaff_x20 = (long)p_Var4;
    return;
  }
  p_Var13 = original + 0x40;
  uVar10 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar12 = uVar12 & *(ulong *)p_Var13;
  lVar8 = 0;
  do {
    if (uVar12 == 0) {
      do {
        lVar15 = lVar8 + 1;
        if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100203d38);
          (*pcVar3)();
        }
        if ((long)(uVar10 + 0x3f >> 6) <= lVar15) {
          if (((ulong)param_2 & 1) != 0) {
            uVar12 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
            if (((byte)original[0x20] & 0x3f) < 6) {
              *(long *)p_Var13 = -1L << (uVar12 & 0x3f);
            }
            else {
              _bzero(p_Var13,uVar12 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(original + 0x10) = 0;
          }
          goto LAB_100203d08;
        }
        uVar12 = *(ulong *)(p_Var13 + lVar15 * 8);
        lVar8 = lVar8 + 1;
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
      lVar15 = lVar8;
    }
    uVar7 = LZCOUNT(uVar7) | lVar15 << 6;
    _Var14 = *(__uint64 *)(*(long *)(original + 0x30) + uVar7 * 8);
    puVar1 = (undefined8 *)(*(long *)(original + 0x38) + uVar7 * 0x10);
    uVar17 = puVar1[1];
    uVar16 = *puVar1;
    uVar5 = Swift::Hasher::_hash(*(__int64 *)(p_Var4 + 0x28),_Var14,HVar6);
    uVar11 = -1L << ((ulong)(byte)p_Var4[0x20] & 0x3f);
    uVar5 = uVar5 & (uVar11 ^ 0xffffffffffffffff);
    uVar9 = uVar5 >> 6;
    uVar7 = -1L << (uVar5 & 0x3f) & (*(ulong *)(p_Var4 + uVar9 * 8 + 0x40) ^ 0xffffffffffffffff);
    if (uVar7 == 0) {
      bVar2 = false;
      uVar7 = 0x3f - uVar11 >> 6;
      do {
        uVar5 = uVar9 + 1;
        if ((uVar5 == uVar7) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100203d3c);
          (*pcVar3)();
        }
        uVar9 = 0;
        if (uVar5 != uVar7) {
          uVar9 = uVar5;
        }
        bVar2 = (bool)(uVar5 == uVar7 | bVar2);
      } while (*(ulong *)(p_Var4 + uVar9 * 8 + 0x40) == 0xffffffffffffffff);
      uVar7 = ~*(ulong *)(p_Var4 + uVar9 * 8 + 0x40);
      uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar9 << 6;
    }
    else {
      uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar5 & 0x7fffffffffffffc0;
    }
    uVar9 = uVar7 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var4 + uVar9 + 0x40) = 1L << (uVar7 & 0x3f) | *(ulong *)(p_Var4 + uVar9 + 0x40);
    *(__uint64 *)(*(long *)(p_Var4 + 0x30) + uVar7 * 8) = _Var14;
    puVar1 = (undefined8 *)(*(long *)(p_Var4 + 0x38) + uVar7 * 0x10);
    puVar1[1] = uVar17;
    *puVar1 = uVar16;
    *(long *)(p_Var4 + 0x10) = *(long *)(p_Var4 + 0x10) + 1;
    lVar8 = lVar15;
  } while( true );
}



/* Address: 0x100203d3c | FUN_100203d3c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100203d3c(long param_1,undefined *param_2)

{
  __int64 capacity;
  bool bVar1;
  code *pcVar2;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var3;
  ulong uVar4;
  Hasher HVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  __RawDictionaryStorage *p_Var11;
  undefined8 uVar12;
  __uint64 _Var13;
  long lVar14;
  ulong uVar15;
  
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_DictionaryStorage *)&DAT_100fb5ea8;
  FUN_1000037f0(&DAT_100fb5ea8,&DAT_100c34838);
  p_Var3 = original;
  HVar5.unknown = param_2;
  Swift::_DictionaryStorage::_resize(this,original,capacity,SUB81(param_2,0));
  if (*(long *)(original + 0x10) == 0) {
LAB_100203f6c:
    _swift_release(original);
    *unaff_x20 = (long)p_Var3;
    return;
  }
  p_Var11 = original + 0x40;
  uVar9 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)p_Var11;
  lVar7 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar14 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100203f9c);
          (*pcVar2)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar14) {
          if (((ulong)param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
            if (((byte)original[0x20] & 0x3f) < 6) {
              *(long *)p_Var11 = -1L << (uVar15 & 0x3f);
            }
            else {
              _bzero(p_Var11,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(original + 0x10) = 0;
          }
          goto LAB_100203f6c;
        }
        uVar15 = *(ulong *)(p_Var11 + lVar14 * 8);
        lVar7 = lVar7 + 1;
      } while (uVar15 == 0);
      uVar6 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar6 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar14 = lVar7;
    }
    uVar6 = LZCOUNT(uVar6) | lVar14 << 6;
    _Var13 = *(__uint64 *)(*(long *)(original + 0x30) + uVar6 * 8);
    uVar12 = *(undefined8 *)(*(long *)(original + 0x38) + uVar6 * 8);
    uVar4 = Swift::Hasher::_hash(*(__int64 *)(p_Var3 + 0x28),_Var13,HVar5);
    uVar10 = -1L << ((ulong)(byte)p_Var3[0x20] & 0x3f);
    uVar4 = uVar4 & (uVar10 ^ 0xffffffffffffffff);
    uVar8 = uVar4 >> 6;
    uVar6 = -1L << (uVar4 & 0x3f) & (*(ulong *)(p_Var3 + uVar8 * 8 + 0x40) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar1 = false;
      uVar6 = 0x3f - uVar10 >> 6;
      do {
        uVar4 = uVar8 + 1;
        if ((uVar4 == uVar6) && (bVar1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100203fa0);
          (*pcVar2)();
        }
        uVar8 = 0;
        if (uVar4 != uVar6) {
          uVar8 = uVar4;
        }
        bVar1 = (bool)(uVar4 == uVar6 | bVar1);
      } while (*(ulong *)(p_Var3 + uVar8 * 8 + 0x40) == 0xffffffffffffffff);
      uVar6 = ~*(ulong *)(p_Var3 + uVar8 * 8 + 0x40);
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
    *(ulong *)(p_Var3 + uVar8 + 0x40) = 1L << (uVar6 & 0x3f) | *(ulong *)(p_Var3 + uVar8 + 0x40);
    *(__uint64 *)(*(long *)(p_Var3 + 0x30) + uVar6 * 8) = _Var13;
    *(undefined8 *)(*(long *)(p_Var3 + 0x38) + uVar6 * 8) = uVar12;
    *(long *)(p_Var3 + 0x10) = *(long *)(p_Var3 + 0x10) + 1;
    lVar7 = lVar14;
  } while( true );
}



/* Address: 0x100203fa0 | FUN_100203fa0 */

undefined8 FUN_100203fa0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100202fc8();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x100203fe4 | FUN_100203fe4 */

undefined8 FUN_100203fe4(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100202fc8();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Address: 0x100204020 | FUN_100204020 */

void FUN_100204020(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  
  if (DAT_100fb5e78 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_1001f3e68(0xff);
  pTVar2 = &TargetProtocolConformanceDescriptor_100c3479c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3479c,uVar1);
  DAT_100fb5e78 = pTVar2;
  return;
}



/* Address: 0x100204064 | FUN_100204064 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

long * FUN_100204064(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  URL UVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_3 + -8);
  uVar1 = *(uint *)(lVar7 + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    plVar4 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    iVar2 = (int)plVar4;
    if (iVar2 < 4) {
      if (iVar2 == 0) {
        *param_1 = *param_2;
        uVar5 = 0;
      }
      else {
        if (iVar2 != 1) {
LAB_100204128:
          plVar4 = _memcpy(param_1,param_2,*(size_t *)(lVar7 + 0x40));
          return plVar4;
        }
        *param_1 = *param_2;
        uVar5 = 1;
      }
    }
    else if (iVar2 == 4) {
      *param_1 = *param_2;
      uVar5 = 4;
    }
    else {
      if (iVar2 != 5) goto LAB_100204128;
      UVar3 = Foundation::URL::typeMetadataAccessor();
      (**(code **)(*(long *)(UVar3.unknown + -8) + 0x10))(param_1,param_2,UVar3.unknown);
      uVar5 = 5;
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,uVar5);
  }
  else {
    lVar7 = *param_2;
    *param_1 = lVar7;
    uVar6 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar7 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x100204190 | FUN_100204190 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100204190(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  URL UVar3;
  
  uVar2 = param_1;
  _swift_getEnumCaseMultiPayload();
  iVar1 = (int)uVar2;
  if (iVar1 < 4) {
    if ((iVar1 == 0) || (iVar1 == 1)) {
      return 0;
    }
  }
  else {
    if (iVar1 == 4) {
      return 0;
    }
    if (iVar1 == 5) {
      UVar3 = Foundation::URL::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001002041ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(UVar3.unknown + -8) + 8))(param_1,UVar3.unknown);
      return param_1;
    }
  }
  return uVar2;
}



/* Address: 0x10020420c | FUN_10020420c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 * FUN_10020420c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  URL UVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar3 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  iVar1 = (int)puVar3;
  if (iVar1 < 4) {
    if (iVar1 == 0) {
      *param_1 = *param_2;
      uVar4 = 0;
    }
    else {
      if (iVar1 != 1) {
LAB_1002042a4:
        puVar3 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
        return puVar3;
      }
      *param_1 = *param_2;
      uVar4 = 1;
    }
  }
  else if (iVar1 == 4) {
    *param_1 = *param_2;
    uVar4 = 4;
  }
  else {
    if (iVar1 != 5) goto LAB_1002042a4;
    UVar2 = Foundation::URL::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar2.unknown + -8) + 0x10))(param_1,param_2,UVar2.unknown);
    uVar4 = 5;
  }
  _swift_storeEnumTagMultiPayload(param_1,param_3,uVar4);
  return param_1;
}



/* Address: 0x100204310 | FUN_100204310 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 * FUN_100204310(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  URL UVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if (param_1 != param_2) {
    FUN_100203fe4(param_1);
    puVar3 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    iVar1 = (int)puVar3;
    if (iVar1 < 4) {
      if (iVar1 == 0) {
        *param_1 = *param_2;
        uVar4 = 0;
      }
      else {
        if (iVar1 != 1) {
LAB_1002043b8:
          puVar3 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
          return puVar3;
        }
        *param_1 = *param_2;
        uVar4 = 1;
      }
    }
    else if (iVar1 == 4) {
      *param_1 = *param_2;
      uVar4 = 4;
    }
    else {
      if (iVar1 != 5) goto LAB_1002043b8;
      UVar2 = Foundation::URL::typeMetadataAccessor();
      (**(code **)(*(long *)(UVar2.unknown + -8) + 0x10))(param_1,param_2,UVar2.unknown);
      uVar4 = 5;
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,uVar4);
  }
  return param_1;
}



/* Address: 0x100204424 | FUN_100204424 */

void * FUN_100204424(void *param_1,void *param_2,long param_3)

{
  URL UVar1;
  void *pvVar2;
  
  pvVar2 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  if ((int)pvVar2 == 5) {
    UVar1 = Foundation::URL::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar1.unknown + -8) + 0x20))(param_1,param_2,UVar1.unknown);
    _swift_storeEnumTagMultiPayload(param_1,param_3,5);
    return param_1;
  }
  pvVar2 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
  return pvVar2;
}



/* Address: 0x1002044b8 | FUN_1002044b8 */

void * FUN_1002044b8(void *param_1,void *param_2,long param_3)

{
  URL UVar1;
  void *pvVar2;
  
  if (param_1 != param_2) {
    FUN_100203fe4(param_1);
    pvVar2 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    if ((int)pvVar2 != 5) {
      pvVar2 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
      return pvVar2;
    }
    UVar1 = Foundation::URL::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar1.unknown + -8) + 0x20))(param_1,param_2,UVar1.unknown);
    _swift_storeEnumTagMultiPayload(param_1,param_3,5);
  }
  return param_1;
}



/* Address: 0x10020455c | _swift_getEnumCaseMultiPayload */

void _swift_getEnumCaseMultiPayload(void)

{
  _swift_getEnumCaseMultiPayload();
  return;
}



/* Address: 0x100204560 | FUN_100204560 */

undefined1  [16] FUN_100204560(undefined8 param_1,ulong param_2)

{
  URL UVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined *local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  undefined *local_30;
  long local_28;
  
  local_50 = PTR___value_witness_table_for_Builtin_UnknownObject_100eabd30 + 0x40;
  local_40 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
  puStack_48 = local_50;
  puStack_38 = local_40;
  local_30 = local_50;
  UVar1 = Foundation::URL::typeMetadataAccessor();
  if (param_2 < 0x40) {
    local_28 = *(long *)(UVar1.unknown + -8) + 0x40;
    _swift_initEnumMetadataMultiPayload(param_1,0x100,6,&local_50);
    UVar1.unknown = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    uVar2 = 0x3f;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = UVar1.unknown;
  return auVar3;
}



/* Address: 0x1002045e8 | FUN_1002045e8 */

undefined * FUN_1002045e8(long param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  code *pcVar4;
  LocalizedStringKey LVar5;
  Text TVar6;
  Text TVar7;
  undefined *puVar8;
  Text TVar9;
  uint uVar10;
  Text TVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 uVar16;
  Text TVar17;
  Text TVar18;
  Text TVar19;
  undefined8 *puVar20;
  
  FUN_1002047b4();
  _swift_bridgeObjectRelease(param_2);
  puVar8 = (undefined *)0xe000000000000000;
  LVar5 = SwiftUI::LocalizedStringKey::init((String)(ZEXT816(0xe000000000000000) << 0x40));
  param_3 = param_3 & 1;
  TVar6 = SwiftUI::Text::_init(LVar5);
  uVar13 = *(ulong *)(param_1 + 0x10);
  FUN_100016d5c();
  _swift_bridgeObjectRetain(param_4);
  TVar7 = TVar6;
  if (uVar13 != 0) {
    uVar15 = 0;
    puVar20 = (undefined8 *)(param_1 + 0x38);
    uVar16 = param_4;
    TVar17 = TVar6;
    TVar18.unknown = puVar8;
    uVar10 = param_3;
    do {
      TVar19.unknown._4_4_ = 0;
      TVar19.unknown._0_4_ = uVar10;
      if (*(ulong *)(param_1 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1002047b4);
        (*pcVar4)();
      }
      uVar15 = uVar15 + 1;
      uVar14 = *puVar20;
      uVar1 = puVar20[-3];
      uVar2 = puVar20[-2];
      uVar3 = *(undefined1 *)(puVar20 + -1);
      FUN_100016d5c(uVar1,uVar2,uVar3);
      _swift_bridgeObjectRetain(uVar14);
      TVar9.unknown = TVar18.unknown;
      TVar11.unknown = TVar19.unknown;
      uVar12 = uVar16;
      TVar7 = SwiftUI::Text::__infix(TVar17,TVar18,TVar19);
      uVar10 = (uint)TVar11.unknown;
      FUN_100016d74(TVar17.unknown,TVar18.unknown,TVar19.unknown);
      _swift_bridgeObjectRelease(uVar16);
      FUN_100016d74(uVar1,uVar2,uVar3);
      _swift_bridgeObjectRelease(uVar14);
      puVar20 = puVar20 + 4;
      uVar16 = uVar12;
      TVar17 = TVar7;
      TVar18.unknown = TVar9.unknown;
    } while (uVar13 != uVar15);
  }
  _swift_bridgeObjectRelease(param_1);
  FUN_100016d74(TVar6.unknown,puVar8,param_3);
  _swift_bridgeObjectRelease(param_4);
  return TVar7.unknown;
}



/* Address: 0x1002047b4 | FUN_1002047b4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

char * FUN_1002047b4(StringInterpolation *param_1,char *param_2,void *param_3)

{
  _CocoaArrayWrapper _Var1;
  ulong uVar2;
  undefined8 uVar3;
  char cVar4;
  char *pcVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  NSString *pNVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ID IVar13;
  Text TVar14;
  Image IVar15;
  LocalizedStringKey LVar16;
  char *pcVar17;
  char *pcVar18;
  void *pvVar19;
  undefined8 extraout_x1;
  _StringGuts _Var20;
  char *extraout_x1_00;
  void *pvVar21;
  long extraout_x1_01;
  long extraout_x1_02;
  char *pcVar22;
  __int64 _Var23;
  __int64 _Var24;
  undefined8 in_x6;
  undefined8 in_x7;
  long extraout_x8;
  long lVar25;
  ID IVar26;
  ulong uVar27;
  undefined8 uVar28;
  long lVar29;
  ulong uVar30;
  _NSRange _Var31;
  String SVar32;
  String systemName;
  StringInterpolation SVar33;
  StringInterpolation SVar34;
  StringInterpolation stringInterpolation;
  StringInterpolation SVar35;
  undefined8 uStack_e0;
  undefined2 auStack_d8 [4];
  StringInterpolation SStack_d0;
  _ArrayBuffer local_a0;
  ulong local_98;
  NSString *local_90;
  long local_88;
  char *local_80;
  String local_78;
  char *local_68;
  
  lVar8 = 0;
  SwiftUI::LocalizedStringKey::StringInterpolation::typeMetadataAccessor(param_1);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  lVar8 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  SStack_d0.template.str = (char *)((long)&SStack_d0 + lVar8);
  uVar27 = (ulong)param_2 & 0xffffffffffff;
  if (((ulong)param_3 & 0x2000000000000000) != 0) {
    uVar27 = (ulong)param_3 >> 0x38 & 0xf;
  }
  local_80 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar27 != 0) {
    if (DAT_100fb65c8 != -1) {
      _swift_once(&DAT_100fb65c8,FUN_1002050c0);
    }
    pvVar19 = DAT_100fb65d0;
    if (DAT_100fb65d0 == (void *)0x0) {
      FUN_100205134(param_2,param_3);
      return param_2;
    }
    pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    local_68 = (char *)0xf;
    local_78.bridgeObject = param_3;
    local_78.str = param_2;
    _swift_bridgeObjectRetain(param_3);
    puVar12 = &DAT_100fb65d8;
    FUN_1000037f0(&DAT_100fb65d8,&DAT_100c35628);
    puVar10 = &DAT_100fb65e0;
    FUN_100016eac(&DAT_100fb65e0,&DAT_100fb65d8,&DAT_100c35628,
                  PTR_Swift__Swift__PartialRangeFrom<undefined>_>Swift__RangeExpression_100ead200);
    puVar11 = puVar10;
    FUN_1002054c0();
    SStack_d0.template.bridgeObject = puVar11;
    _Var31 = (extension_Foundation)::__C::_NSRange::_init
                       (&local_68,&local_78,puVar12,PTR___type_metadata_for_Swift_String_100eac208,
                        puVar10);
    pcVar22 = (char *)0x0;
    puVar12 = (undefined *)objc_stub::matchesInString_options_range_((ID)pvVar19,pNVar9);
    FUN_100205500(0);
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
    if ((ulong)puVar12 >> 0x3e == 0) {
      SStack_d0.interpolationCount = *(long *)(((ulong)puVar12 & 0xffffffffffffff8) + 0x10);
    }
    else {
      _Var1.unknown = (undefined *)((ulong)puVar12 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar12) {
        _Var1.unknown = puVar12;
      }
      SStack_d0.interpolationCount = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    }
    if (SStack_d0.interpolationCount != 0) {
      SStack_d0.message.bridgeObject = pvVar19;
      local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
      local_90 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      IVar26 = 0;
      lVar29 = 0;
      local_98 = (ulong)puVar12 & 0xc000000000000001;
      SStack_d0._16_8_ = (ulong)puVar12 & 0xffffffffffffff8;
      bVar7 = true;
      lVar25 = 4;
      local_a0.unknown = puVar12;
      do {
        uVar27 = lVar25 - 4;
        if (local_98 == 0) {
          if (*(ulong *)(SStack_d0._16_8_ + 0x10) <= uVar27) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100204fcc);
            (*pcVar6)();
          }
          uVar30 = *(ulong *)(local_a0.unknown + lVar25 * 8);
        }
        else {
          uVar30 = uVar27;
          Swift::_ArrayBuffer::__getElementSlowPath(uVar27,local_a0);
        }
        if (SCARRY8(uVar27,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100204fb8);
          (*pcVar6)();
        }
        local_88 = lVar25 + -3;
        IVar13 = objc_stub::range(uVar30);
        if (bVar7) {
          objc_stub::substringToIndex_((ID)pNVar9);
          SVar32 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          pvVar19 = SVar32.bridgeObject;
          uVar27 = (ulong)SVar32.str & 0xffffffffffff;
          if (((ulong)pvVar19 & 0x2000000000000000) != 0) {
            uVar27 = (ulong)pvVar19 >> 0x38 & 0xf;
          }
          if (uVar27 == 0) goto LAB_100204b58;
          local_78 = SVar32;
          _swift_bridgeObjectRetain(pvVar19);
          puVar12 = PTR___type_metadata_for_Swift_String_100eac208;
          puVar10 = SStack_d0.template.bridgeObject;
          TVar14 = SwiftUI::Text::_init();
          pcVar18 = local_80;
          pcVar17 = pcVar22;
          _swift_isUniquelyReferenced_nonNull_native();
          if (((ulong)pcVar18 & 1) == 0) {
            pcVar18 = (char *)0x0;
            FUN_100200814(0,*(long *)(local_80 + 0x10) + 1,1);
            pcVar17 = local_80;
            local_80 = pcVar18;
          }
          uVar27 = *(ulong *)(local_80 + 0x10);
          if (*(ulong *)(local_80 + 0x18) >> 1 <= uVar27) {
            pcVar18 = (char *)(ulong)(1 < *(ulong *)(local_80 + 0x18));
            FUN_100200814(pcVar18,uVar27 + 1,1);
            pcVar17 = local_80;
            local_80 = pcVar18;
          }
          *(ulong *)(local_80 + 0x10) = uVar27 + 1;
          pcVar18 = local_80 + uVar27 * 0x20;
          *(undefined **)(pcVar18 + 0x20) = TVar14.unknown;
LAB_100204b40:
          pcVar5 = local_80;
          *(undefined **)(pcVar18 + 0x28) = puVar12;
          *(ulong *)(pcVar18 + 0x30) = (ulong)puVar10 & 0xff;
          *(char **)(pcVar18 + 0x38) = pcVar22;
          _swift_bridgeObjectRelease(pvVar19);
          local_68 = pcVar5;
          pcVar22 = pcVar17;
        }
        else {
          if (SBORROW8(IVar13,IVar26)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100204fc4);
            (*pcVar6)();
          }
          if (SBORROW8(IVar13 - IVar26,lVar29)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100204fc8);
            (*pcVar6)();
          }
          objc_stub::substringToIndex_((ID)pNVar9,(IVar13 - IVar26) - lVar29);
          SVar32 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          pvVar19 = SVar32.bridgeObject;
          uVar27 = (ulong)SVar32.str & 0xffffffffffff;
          if (((ulong)pvVar19 & 0x2000000000000000) != 0) {
            uVar27 = (ulong)pvVar19 >> 0x38 & 0xf;
          }
          if (uVar27 != 0) {
            local_78 = SVar32;
            _swift_bridgeObjectRetain(pvVar19);
            puVar12 = PTR___type_metadata_for_Swift_String_100eac208;
            puVar10 = SStack_d0.template.bridgeObject;
            TVar14 = SwiftUI::Text::_init();
            pcVar18 = local_80;
            pcVar17 = pcVar22;
            _swift_isUniquelyReferenced_nonNull_native();
            if (((ulong)pcVar18 & 1) == 0) {
              pcVar18 = (char *)0x0;
              FUN_100200814(0,*(long *)(local_80 + 0x10) + 1,1);
              pcVar17 = local_80;
              local_80 = pcVar18;
            }
            uVar27 = *(ulong *)(local_80 + 0x10);
            if (*(ulong *)(local_80 + 0x18) >> 1 <= uVar27) {
              pcVar18 = (char *)(ulong)(1 < *(ulong *)(local_80 + 0x18));
              FUN_100200814(pcVar18,uVar27 + 1,1);
              pcVar17 = local_80;
              local_80 = pcVar18;
            }
            *(ulong *)(local_80 + 0x10) = uVar27 + 1;
            pcVar18 = local_80 + uVar27 * 0x20;
            *(undefined **)(pcVar18 + 0x20) = TVar14.unknown;
            goto LAB_100204b40;
          }
LAB_100204b58:
          _swift_bridgeObjectRelease(pvVar19);
        }
        IVar26 = objc_stub::numberOfRanges(uVar30);
        if (IVar26 == 3) {
          IVar26 = objc_stub::rangeAtIndex_(uVar30,1);
          pNVar9 = local_90;
          objc_stub::substringWithRange_((ID)local_90,IVar26,extraout_x1);
          SVar32 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          _Var20.unknown = SVar32.bridgeObject;
          IVar26 = objc_stub::rangeAtIndex_(uVar30,2);
          pcVar18 = extraout_x1_00;
          objc_stub::substringWithRange_((ID)pNVar9);
          systemName = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC
                                 ();
          _Var24 = _Var31.length;
          pvVar19 = systemName.bridgeObject;
          if ((SVar32.str == (undefined *)0x6e6f6369) && (_Var20.unknown == &DAT_e400000000000000))
          {
LAB_100204c28:
            _swift_bridgeObjectRetain(pvVar19);
            pcVar22 = SStack_d0.template.str;
            SwiftUI::LocalizedStringKey::StringInterpolation::init
                      ((StringInterpolation *)SStack_d0.template.str,0,1);
            SVar33.template.str = _Var31.length;
            SVar33._16_8_ = _Var31.location;
            SVar33.message.bridgeObject = pcVar18;
            SVar33.message.str = (char *)IVar26;
            SVar33.template.bridgeObject = (void *)in_x6;
            SVar33.interpolationCount = in_x7;
            SwiftUI::LocalizedStringKey::StringInterpolation::appendLiteral
                      ((String)(ZEXT816(0xe000000000000000) << 0x40),SVar33);
            pvVar21 = pvVar19;
            IVar15 = SwiftUI::Image::init(systemName);
            SVar35.message.bridgeObject = (void *)IVar26;
            SVar35.message.str = pvVar21;
            SVar35._16_8_ = pcVar18;
            SVar35.interpolationCount = in_x6;
            SVar35.template.str = (char *)_Var31.location;
            SVar35.template.bridgeObject = (void *)_Var31.length;
            SwiftUI::LocalizedStringKey::StringInterpolation::appendInterpolation(IVar15,SVar35);
            _swift_release(IVar15.unknown);
            SVar34.template.str = _Var31.length;
            SVar34._16_8_ = _Var31.location;
            uVar28 = 0xe000000000000000;
            SVar34.message.bridgeObject = pcVar18;
            SVar34.message.str = (char *)IVar26;
            SVar34.template.bridgeObject = (void *)in_x6;
            SVar34.interpolationCount = in_x7;
            SwiftUI::LocalizedStringKey::StringInterpolation::appendLiteral
                      ((String)(ZEXT816(0xe000000000000000) << 0x40),SVar34);
            stringInterpolation.interpolationCount = _Var31.length;
            stringInterpolation.template.bridgeObject = _Var31.location;
            stringInterpolation.message.bridgeObject = (void *)uVar28;
            stringInterpolation.message.str = pcVar22;
            stringInterpolation.template.str = pcVar18;
            stringInterpolation._16_8_ = IVar26;
            LVar16 = SwiftUI::LocalizedStringKey::init(stringInterpolation);
            *(undefined2 *)((long)auStack_d8 + lVar8) = 0x100;
            *(undefined8 *)((long)&uStack_e0 + lVar8) = 0;
            uVar27 = (ulong)((uint)IVar26 & 1);
            _Var23 = 0;
            _Var24 = 0;
            in_x6 = 0;
            in_x7 = 0;
            TVar14 = SwiftUI::Text::_init(LVar16);
            pcVar22 = pcVar18;
            _swift_bridgeObjectRelease(pvVar19);
            _swift_bridgeObjectRelease(_Var20.unknown);
            uVar27 = uVar27 & 0xff;
          }
          else {
            IVar26 = 0x6e6f6369;
            pcVar22 = &DAT_e400000000000000;
            _Var23 = 0;
            bVar7 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)SVar32.str,_Var20,(_StringComparisonResult)0x69);
            _Var31.length = _Var24;
            _Var31.location = _Var23;
            pcVar18 = pcVar22;
            if (bVar7) goto LAB_100204c28;
            _swift_bridgeObjectRelease(pvVar19);
            _swift_bridgeObjectRelease(_Var20.unknown);
            TVar14.unknown = (undefined *)0x0;
            uVar28 = 0;
            uVar27 = 0;
            pcVar18 = (char *)0x0;
          }
          pcVar17 = local_80;
          _swift_isUniquelyReferenced_nonNull_native();
          if (((ulong)pcVar17 & 1) == 0) {
            pcVar17 = (char *)0x0;
            FUN_100200814(0,*(long *)(local_80 + 0x10) + 1,1);
            pcVar22 = local_80;
            local_80 = pcVar17;
          }
          uVar2 = *(ulong *)(local_80 + 0x10);
          if (*(ulong *)(local_80 + 0x18) >> 1 <= uVar2) {
            pcVar17 = (char *)(ulong)(1 < *(ulong *)(local_80 + 0x18));
            FUN_100200814(pcVar17,uVar2 + 1,1);
            pcVar22 = local_80;
            local_80 = pcVar17;
          }
          _Var31.length = _Var24;
          _Var31.location = _Var23;
          *(ulong *)(local_80 + 0x10) = uVar2 + 1;
          *(undefined **)(local_80 + uVar2 * 0x20 + 0x20) = TVar14.unknown;
          *(undefined8 *)(local_80 + uVar2 * 0x20 + 0x28) = uVar28;
          *(ulong *)(local_80 + uVar2 * 0x20 + 0x30) = uVar27;
          *(char **)(local_80 + uVar2 * 0x20 + 0x38) = pcVar18;
          local_68 = local_80;
        }
        IVar26 = objc_stub::range(uVar30);
        objc_stub::range(uVar30);
        if (SCARRY8(IVar26,extraout_x1_01)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100204fbc);
          (*pcVar6)();
        }
        pNVar9 = (NSString *)objc_stub::substringFromIndex_((ID)local_90,IVar26 + extraout_x1_01);
        if (pNVar9 == (NSString *)0x0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100205044);
          (*pcVar6)();
        }
        IVar26 = objc_stub::range(uVar30);
        bVar7 = false;
        lVar25 = lVar25 + 1;
        lVar29 = extraout_x1_02;
        if (local_88 == SStack_d0.interpolationCount) {
          _swift_bridgeObjectRelease(local_a0.unknown);
          SVar32 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          FUN_10020525c(SVar32.str,SVar32.bridgeObject,&local_68);
          _swift_bridgeObjectRelease(SVar32.bridgeObject);
          pcVar22 = local_68;
          uVar27 = 0;
          uVar30 = *(ulong *)(local_68 + 0x10);
          local_80 = PTR___swiftEmptyArrayStorage_100eae0d8;
          do {
            lVar8 = uVar27 * 0x20 + 0x38;
            do {
              lVar25 = lVar8;
              if (uVar30 == uVar27) {
                _swift_bridgeObjectRelease(pcVar22);
                return local_80;
              }
              if (*(ulong *)(pcVar22 + 0x10) <= uVar27) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100204fc0);
                (*pcVar6)();
              }
              uVar27 = uVar27 + 1;
              lVar29 = *(long *)(pcVar22 + lVar25);
              lVar8 = lVar25 + 0x20;
            } while (lVar29 == 0);
            uVar28 = *(undefined8 *)(pcVar22 + lVar25 + -0x18);
            uVar3 = *(undefined8 *)(pcVar22 + lVar25 + -0x10);
            cVar4 = pcVar22[lVar25 + -8];
            FUN_100016d5c(uVar28,uVar3,cVar4);
            _swift_bridgeObjectRetain(lVar29);
            pcVar18 = local_80;
            _swift_isUniquelyReferenced_nonNull_native();
            if (((ulong)pcVar18 & 1) == 0) {
              pcVar18 = (char *)0x0;
              FUN_100200944(0,*(long *)(local_80 + 0x10) + 1,1);
              local_80 = pcVar18;
            }
            uVar2 = *(ulong *)(local_80 + 0x10);
            if (*(ulong *)(local_80 + 0x18) >> 1 <= uVar2) {
              pcVar18 = (char *)(ulong)(1 < *(ulong *)(local_80 + 0x18));
              FUN_100200944(pcVar18,uVar2 + 1,1,local_80);
              local_80 = pcVar18;
            }
            *(ulong *)(local_80 + 0x10) = uVar2 + 1;
            *(undefined8 *)(local_80 + uVar2 * 0x20 + 0x20) = uVar28;
            *(undefined8 *)(local_80 + uVar2 * 0x20 + 0x28) = uVar3;
            local_80[uVar2 * 0x20 + 0x30] = cVar4;
            *(long *)(local_80 + uVar2 * 0x20 + 0x38) = lVar29;
          } while( true );
        }
      } while( true );
    }
    _swift_bridgeObjectRelease(puVar12);
    FUN_100205134(param_2,param_3);
    local_80 = param_2;
  }
  return local_80;
}



/* Address: 0x100205044 | FUN_100205044 */

void FUN_100205044(undefined8 *param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100c355d8;
  _swift_getKeyPath();
  *param_1 = param_3;
  param_1[1] = param_4;
  *(char *)(param_1 + 2) = (char)param_5;
  param_1[3] = param_6;
  *(undefined2 *)(param_1 + 4) = 0x100;
  param_1[5] = puVar1;
  *(undefined1 *)(param_1 + 6) = param_2;
  FUN_100016d5c(param_3,param_4,param_5);
  _swift_bridgeObjectRetain(param_6);
  return;
}



/* Address: 0x1002050c0 | FUN_1002050c0 */

/* WARNING: Removing unreachable block (ram,0x00010020510c) */

void FUN_1002050c0(void)

{
  undefined8 uVar1;
  
  _objc_allocWithZone(&_OBJC_CLASS___NSRegularExpression);
  uVar1 = 0xd000000000000016;
  FUN_1000fe1dc(0xd000000000000016,0x8000000100d9df50,0);
  DAT_100fb65d0 = uVar1;
  return;
}



/* Address: 0x100205134 | FUN_100205134 */

undefined * FUN_100205134(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  Text TVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *local_70;
  undefined *puStack_68;
  ulong local_60;
  long lStack_58;
  
  FUN_1002054c0();
  _swift_bridgeObjectRetain(param_2);
  puVar6 = PTR___type_metadata_for_Swift_String_100eac208;
  TVar2 = SwiftUI::Text::_init();
  local_60 = param_1 & 0xff;
  puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  local_70 = TVar2.unknown;
  puStack_68 = puVar6;
  lStack_58 = param_4;
  if (param_4 != 0) {
    FUN_100016d5c();
    _swift_bridgeObjectRetain(param_4);
    puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
    puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar4 = puVar5;
    if (((ulong)puVar3 & 1) == 0) {
      puVar4 = (undefined *)0x0;
      FUN_100200944(0,*(long *)(puVar5 + 0x10) + 1,1,puVar5);
    }
    uVar1 = *(ulong *)(puVar4 + 0x10);
    puVar5 = puVar4;
    if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
      puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
      FUN_100200944(puVar5,uVar1 + 1,1,puVar4);
    }
    *(ulong *)(puVar5 + 0x10) = uVar1 + 1;
    *(undefined **)(puVar5 + uVar1 * 0x20 + 0x20) = TVar2.unknown;
    *(undefined **)(puVar5 + uVar1 * 0x20 + 0x28) = puVar6;
    puVar5[uVar1 * 0x20 + 0x30] = (char)param_1;
    *(long *)(puVar5 + uVar1 * 0x20 + 0x38) = param_4;
  }
  FUN_100205544(&local_70);
  return puVar5;
}



/* Address: 0x10020525c | FUN_10020525c */

void FUN_10020525c(ulong param_1,ulong param_2,ulong *param_3,undefined8 param_4)

{
  long lVar1;
  Text TVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  
  uVar3 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar3 = param_2 >> 0x38 & 0xf;
  }
  if (uVar3 != 0) {
    FUN_1002054c0();
    _swift_bridgeObjectRetain(param_2);
    puVar5 = PTR___type_metadata_for_Swift_String_100eac208;
    TVar2 = SwiftUI::Text::_init();
    uVar6 = *param_3;
    uVar3 = uVar6;
    _swift_isUniquelyReferenced_nonNull_native();
    *param_3 = uVar6;
    uVar4 = uVar6;
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
      FUN_100200814(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
      *param_3 = uVar4;
    }
    uVar3 = *(ulong *)(uVar4 + 0x10);
    uVar6 = uVar4;
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar3) {
      uVar6 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      FUN_100200814(uVar6,uVar3 + 1,1,uVar4);
      *param_3 = uVar6;
    }
    *(ulong *)(uVar6 + 0x10) = uVar3 + 1;
    lVar1 = uVar6 + uVar3 * 0x20;
    *(undefined **)(lVar1 + 0x20) = TVar2.unknown;
    *(undefined **)(lVar1 + 0x28) = puVar5;
    *(ulong *)(lVar1 + 0x30) = param_1 & 0xff;
    *(undefined8 *)(lVar1 + 0x38) = param_4;
  }
  return;
}



/* Address: 0x100205368 | FUN_100205368 */

void FUN_100205368(__int8 *param_1,EnvironmentValues param_2)

{
  TextAlignment TVar1;
  
  TVar1 = SwiftUI::EnvironmentValues::get_multilineTextAlignment(param_2);
  *param_1 = TVar1.value;
  return;
}



/* Address: 0x100205390 | FUN_100205390 */

void FUN_100205390(__int8 *param_1,EnvironmentValues *param_2)

{
  SwiftUI::EnvironmentValues::set_multilineTextAlignment(param_2,(TextAlignment)*param_1);
  return;
}



/* Address: 0x1002053b4 | thunk_FUN_1002053b8 */

void thunk_FUN_1002053b8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_30;
  undefined *puStack_28;
  
  if (DAT_100fb6598 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb65a0;
  FUN_100005c24(&DAT_100fb65a0,&DAT_100c35610);
  puVar2 = puVar1;
  FUN_100205450();
  puVar3 = &DAT_100fb65b8;
  FUN_100016eac(&DAT_100fb65b8,&DAT_100fb65c0,&DAT_100c35620,
                PTR_SwiftUI__SwiftUI___EnvironmentKeyWritingModifier<undefined>_>SwiftUI__ViewModifier_100eab0e0
               );
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  puStack_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&puStack_30);
  DAT_100fb6598 = puVar4;
  return;
}



/* Address: 0x1002053b8 | FUN_1002053b8 */

void FUN_1002053b8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fb6598 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb65a0;
  FUN_100005c24(&DAT_100fb65a0,&DAT_100c35610);
  puVar2 = puVar1;
  FUN_100205450();
  puVar3 = &DAT_100fb65b8;
  FUN_100016eac(&DAT_100fb65b8,&DAT_100fb65c0,&DAT_100c35620,
                PTR_SwiftUI__SwiftUI___EnvironmentKeyWritingModifier<undefined>_>SwiftUI__ViewModifier_100eab0e0
               );
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fb6598 = puVar4;
  return;
}



/* Address: 0x100205450 | FUN_100205450 */

void FUN_100205450(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_20;
  undefined *puStack_18;
  
  if (DAT_100fb65a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb65b0;
  FUN_100005c24(&DAT_100fb65b0,&DAT_100c35618);
  local_20 = PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100eab348;
  puStack_18 = 
  PTR___protocol_witness_table_for_SwiftUI__FixedSizeLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaaa48
  ;
  puVar2 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_20);
  DAT_100fb65a8 = puVar2;
  return;
}



/* Address: 0x1002054c0 | FUN_1002054c0 */

void FUN_1002054c0(void)

{
  undefined *puVar1;
  
  if (DAT_100fb65e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift__Swift__String_>Swift__StringProtocol_100eac258;
  _swift_getWitnessTable
            (PTR_Swift__Swift__String_>Swift__StringProtocol_100eac258,
             PTR___type_metadata_for_Swift_String_100eac208);
  DAT_100fb65e8 = puVar1;
  return;
}



/* Address: 0x100205500 | FUN_100205500 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100205500(void)

{
  undefined *puVar1;
  
  if (DAT_100fb65f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___NSTextCheckingResult;
  _swift_getObjCClassMetadata();
  DAT_100fb65f0 = puVar1;
  return;
}



/* Address: 0x100205544 | FUN_100205544 */

undefined8 FUN_100205544(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fb64b0;
  FUN_1000037f0(&DAT_100fb64b0,&DAT_100c355a8);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x10020558c | FUN_10020558c */

void FUN_10020558c(undefined8 param_1,byte param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  ModifiedContent MVar2;
  ModifiedContent MVar3;
  ModifiedContent MVar4;
  _ConditionalContent _Var5;
  _ConditionalContent _Var6;
  Alignment AVar7;
  Set SVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  code *pcVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined **ppuVar18;
  long extraout_x8;
  long lVar19;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x12;
  long extraout_x12_00;
  Set SVar20;
  long lVar21;
  code *pcVar22;
  long lVar23;
  undefined8 uStack_2e0;
  undefined1 auStack_2d8 [8];
  undefined8 uStack_2d0;
  undefined1 auStack_2c8 [8];
  undefined8 auStack_2c0 [4];
  undefined1 auStack_2a0 [8];
  undefined8 local_298;
  long local_290;
  undefined1 *local_288;
  long local_280;
  long local_278;
  undefined *local_270;
  long local_268;
  long local_260;
  code *local_258;
  long local_250;
  undefined *local_248;
  undefined *local_240;
  undefined *local_238;
  undefined *local_230;
  undefined8 local_228;
  undefined *local_220;
  code *local_218;
  undefined *local_210;
  undefined *local_208;
  undefined *puStack_200;
  undefined *local_1f8;
  undefined *puStack_1f0;
  undefined *local_1e8;
  undefined *puStack_1e0;
  undefined *local_1d8;
  undefined *local_1d0;
  undefined8 local_1c8;
  undefined *puStack_1c0;
  undefined *local_1b8;
  undefined *puStack_1b0;
  undefined *local_1a8;
  undefined *puStack_1a0;
  undefined *local_198;
  undefined *puStack_190;
  undefined *local_188;
  undefined *local_180;
  undefined8 local_178;
  undefined *puStack_170;
  undefined *local_168;
  undefined *puStack_160;
  undefined *local_158;
  undefined *puStack_150;
  undefined *local_148;
  undefined *puStack_140;
  undefined *local_138;
  undefined *puStack_130;
  undefined8 local_128;
  undefined *puStack_120;
  undefined *local_118;
  undefined *puStack_110;
  undefined *local_108;
  undefined *puStack_100;
  undefined *local_f8;
  undefined *puStack_f0;
  undefined *local_e8;
  undefined *puStack_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined *puStack_b0;
  undefined *local_a8;
  undefined *puStack_a0;
  undefined *local_98;
  undefined *puStack_90;
  undefined *local_88;
  undefined *puStack_80;
  undefined8 local_78;
  undefined *puStack_70;
  
  local_228 = param_1;
  MVar2 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  MVar3 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  MVar4 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  local_290 = *(long *)(MVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_290 + 0x40));
  local_288 = auStack_2a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar19 = (long)(auStack_2a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  local_280 = lVar19;
  local_230 = MVar4.unknown;
  _Var5 = SwiftUI::_ConditionalContent::typeMetadataAccessor();
  local_260 = *(long *)(_Var5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_260 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar19 = lVar19 - extraout_x8_00;
  local_268 = lVar19;
  _Var6 = SwiftUI::_ConditionalContent::typeMetadataAccessor();
  local_270 = *(undefined **)(_Var6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_270 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar19 = lVar19 - extraout_x8_01;
  local_258 = *(code **)(MVar2.unknown + -8);
  local_278 = lVar19;
  local_210 = MVar2.unknown;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_258 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  SVar20.unknown = (undefined *)(lVar19 - extraout_x8_02);
  lVar21 = *(long *)(MVar3.unknown + -8);
  local_220 = MVar3.unknown;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar21 + 0x40));
  lVar23 = (long)SVar20.unknown - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_240 = _Var6.unknown;
  local_238 = _Var5.unknown;
  local_218 = (code *)(lVar23 - extraout_x12_00);
  AVar7.unknown = (undefined *)SwiftUI::_ConditionalContent::typeMetadataAccessor();
  local_250 = *(long *)(AVar7.unknown + -8);
  local_248 = AVar7.unknown;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_250 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  puVar9 = 
  PTR___protocol_witness_table_for_SwiftUI__FlexFrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaaa68
  ;
  puVar17 = 
  PTR___protocol_witness_table_for_SwiftUI__PaddingLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa8c8
  ;
  lVar19 = (lVar23 - extraout_x12_00) - extraout_x8_04;
  if (param_2 < 2) {
    local_260 = lVar19;
    if (param_2 == 0) {
      AVar7 = SwiftUI::Alignment::get_leading(AVar7);
      *(undefined8 *)(lVar19 + -0x10) = param_3;
      *(undefined8 *)(lVar19 + -8) = param_4;
      *(undefined **)(lVar19 + -0x20) = AVar7.unknown;
      *(undefined **)(lVar19 + -0x18) = _Var6.unknown;
      *(undefined1 *)(lVar19 + -0x28) = 1;
      *(undefined8 *)(lVar19 + -0x30) = 0;
      *(undefined1 *)(lVar19 + -0x38) = 1;
      *(undefined8 *)(lVar19 + -0x40) = 0;
      SVar8.unknown = (undefined *)0x0;
      (extension_SwiftUI)::SwiftUI::View::_frame((Alignment)0x0);
      SVar8 = SwiftUI::Edge::Set::get_horizontal(SVar8);
      puVar17 = local_210;
      puVar11 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938
      ;
      puStack_170 = puVar9;
      puVar9 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
      local_178 = param_4;
      _swift_getWitnessTable
                (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938
                 ,local_210,&local_178);
      (extension_SwiftUI)::SwiftUI::View::_padding(SVar8);
      (**(code **)(local_258 + 8))(SVar20.unknown,puVar17);
      puVar15 = local_220;
      puVar17 = 
      PTR___protocol_witness_table_for_SwiftUI__PaddingLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa8c8
      ;
      local_180 = 
      PTR___protocol_witness_table_for_SwiftUI__PaddingLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa8c8
      ;
      local_188 = puVar9;
      _swift_getWitnessTable(puVar11,local_220,&local_188);
      pcVar12 = local_218;
      thunk_FUN_10003cc94(local_218,lVar23,puVar15,puVar11);
      pcVar22 = *(code **)(lVar21 + 8);
      (*pcVar22)(lVar23,puVar15);
      thunk_FUN_10003cc94(lVar23,pcVar12,puVar15,puVar11);
      lVar21 = local_278;
      FUN_1001fb178(local_278,lVar23,puVar15,puVar15,puVar11,puVar11);
      puVar9 = local_240;
      puVar14 = 
      PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8;
      pcVar12 = (code *)
                PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8
      ;
      local_198 = puVar11;
      puStack_190 = puVar11;
      _swift_getWitnessTable
                (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8
                 ,local_240,&local_198);
      puVar13 = local_230;
      puStack_1a0 = puVar17;
      puVar17 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938
      ;
      local_258 = pcVar12;
      local_1a8 = puVar11;
      _swift_getWitnessTable
                (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938
                 ,local_230,&local_1a8);
      ppuVar18 = &local_1b8;
      local_1b8 = puVar11;
      puStack_1b0 = puVar17;
    }
    else {
      AVar7 = SwiftUI::Alignment::get_center(AVar7);
      *(undefined8 *)(lVar19 + -0x10) = param_3;
      *(undefined8 *)(lVar19 + -8) = param_4;
      *(undefined **)(lVar19 + -0x20) = AVar7.unknown;
      *(undefined **)(lVar19 + -0x18) = _Var6.unknown;
      *(undefined1 *)(lVar19 + -0x28) = 1;
      *(undefined8 *)(lVar19 + -0x30) = 0;
      *(undefined1 *)(lVar19 + -0x38) = 1;
      *(undefined8 *)(lVar19 + -0x40) = 0;
      SVar8.unknown = (undefined *)0x0;
      (extension_SwiftUI)::SwiftUI::View::_frame((Alignment)0x0);
      SVar8 = SwiftUI::Edge::Set::get_horizontal(SVar8);
      puVar17 = local_210;
      puVar11 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938
      ;
      puStack_1c0 = puVar9;
      puVar9 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
      local_1c8 = param_4;
      _swift_getWitnessTable
                (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938
                 ,local_210,&local_1c8);
      (extension_SwiftUI)::SwiftUI::View::_padding(SVar8);
      (**(code **)(local_258 + 8))(SVar20.unknown,puVar17);
      puVar15 = local_220;
      puVar17 = 
      PTR___protocol_witness_table_for_SwiftUI__PaddingLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa8c8
      ;
      local_1d0 = 
      PTR___protocol_witness_table_for_SwiftUI__PaddingLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa8c8
      ;
      local_1d8 = puVar9;
      _swift_getWitnessTable(puVar11,local_220,&local_1d8);
      pcVar12 = local_218;
      thunk_FUN_10003cc94(local_218,lVar23,puVar15,puVar11);
      pcVar22 = *(code **)(lVar21 + 8);
      (*pcVar22)(lVar23,puVar15);
      thunk_FUN_10003cc94(lVar23,pcVar12,puVar15,puVar11);
      lVar21 = local_278;
      FUN_1001fb0b4(local_278,lVar23,puVar15,puVar15,puVar11,puVar11);
      puVar9 = local_240;
      puVar14 = 
      PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8;
      pcVar12 = (code *)
                PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8
      ;
      local_1e8 = puVar11;
      puStack_1e0 = puVar11;
      _swift_getWitnessTable
                (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8
                 ,local_240,&local_1e8);
      puVar13 = local_230;
      puStack_1f0 = puVar17;
      puVar17 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938
      ;
      local_258 = pcVar12;
      local_1f8 = puVar11;
      _swift_getWitnessTable
                (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938
                 ,local_230,&local_1f8);
      ppuVar18 = &local_208;
      local_208 = puVar11;
      puStack_200 = puVar17;
    }
    puVar11 = local_238;
    _swift_getWitnessTable(puVar14,local_238,ppuVar18);
    lVar19 = local_260;
    FUN_1001fb0b4(local_260,lVar21,puVar9,puVar11,local_258,puVar14);
    (**(code **)(local_270 + 8))(lVar21,puVar9);
    (*pcVar22)(lVar23,puVar15);
    (*pcVar22)(local_218,puVar15);
  }
  else {
    local_298 = param_4;
    if (param_2 == 2) {
      AVar7 = SwiftUI::Alignment::get_center(AVar7);
      *(undefined8 *)(lVar19 + -0x10) = param_3;
      *(undefined8 *)(lVar19 + -8) = param_4;
      *(undefined **)(lVar19 + -0x20) = AVar7.unknown;
      *(undefined **)(lVar19 + -0x18) = _Var6.unknown;
      *(undefined1 *)(lVar19 + -0x28) = 1;
      *(undefined8 *)(lVar19 + -0x30) = 0;
      *(undefined1 *)(lVar19 + -0x38) = 1;
      *(undefined8 *)(lVar19 + -0x40) = 0;
      SVar8.unknown = (undefined *)0x0;
      (extension_SwiftUI)::SwiftUI::View::_frame((Alignment)0x0);
      SVar8 = SwiftUI::Edge::Set::get_horizontal(SVar8);
      puVar15 = local_210;
      puVar14 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938
      ;
      puStack_120 = puVar9;
      puVar9 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
      local_128 = param_4;
      _swift_getWitnessTable
                (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938
                 ,local_210,&local_128);
      (extension_SwiftUI)::SwiftUI::View::_padding(SVar8);
      (**(code **)(local_258 + 8))(SVar20.unknown,puVar15);
      puVar15 = local_220;
      puStack_130 = puVar17;
      puVar16 = puVar14;
      local_138 = puVar9;
      _swift_getWitnessTable(puVar14,local_220,&local_138);
      pcVar12 = local_218;
      thunk_FUN_10003cc94(local_218,lVar23,puVar15,puVar16);
      local_258 = *(code **)(lVar21 + 8);
      (*local_258)(lVar23,puVar15);
      thunk_FUN_10003cc94(lVar23,pcVar12,puVar15,puVar16);
      puVar13 = local_230;
      puStack_140 = puVar17;
      local_148 = puVar16;
      _swift_getWitnessTable(puVar14,local_230,&local_148);
      lVar21 = local_268;
      FUN_1001fb0b4(local_268,lVar23,puVar15,puVar13,puVar16,puVar14);
      puVar9 = local_240;
      puVar17 = 
      PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8;
      puVar10 = 
      PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8;
      local_158 = puVar16;
      puStack_150 = puVar16;
      _swift_getWitnessTable
                (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8
                 ,local_240,&local_158);
      puVar11 = local_238;
      local_270 = puVar10;
      local_168 = puVar16;
      puStack_160 = puVar14;
      _swift_getWitnessTable(puVar17,local_238,&local_168);
      param_4 = local_298;
      FUN_1001fb178(lVar19,lVar21,puVar9,puVar11,local_270,puVar17);
      (**(code **)(local_260 + 8))(lVar21,puVar11);
      pcVar12 = local_258;
      (*local_258)(lVar23,puVar15);
      (*pcVar12)(local_218,puVar15);
    }
    else {
      AVar7 = SwiftUI::Alignment::get_center(AVar7);
      *(undefined8 *)(lVar19 + -0x10) = param_3;
      *(undefined8 *)(lVar19 + -8) = param_4;
      *(undefined **)(lVar19 + -0x20) = AVar7.unknown;
      *(undefined **)(lVar19 + -0x18) = _Var6.unknown;
      *(undefined1 *)(lVar19 + -0x28) = 1;
      *(undefined8 *)(lVar19 + -0x30) = 0;
      *(undefined1 *)(lVar19 + -0x38) = 1;
      *(undefined8 *)(lVar19 + -0x40) = 0;
      SVar8.unknown = (undefined *)0x0;
      (extension_SwiftUI)::SwiftUI::View::_frame((Alignment)0x0);
      SVar8 = SwiftUI::Edge::Set::get_horizontal(SVar8);
      puVar11 = local_210;
      puVar15 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938
      ;
      puStack_70 = puVar9;
      puVar13 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938
      ;
      local_78 = param_4;
      _swift_getWitnessTable
                (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938
                 ,local_210,&local_78);
      pcVar12 = local_218;
      (extension_SwiftUI)::SwiftUI::View::_padding(SVar8);
      (**(code **)(local_258 + 8))(SVar20.unknown,puVar11);
      SVar20 = SwiftUI::Edge::Set::get_bottom(SVar20);
      puVar9 = local_220;
      puStack_80 = puVar17;
      puVar14 = puVar15;
      local_88 = puVar13;
      _swift_getWitnessTable(puVar15,local_220,&local_88);
      puVar1 = local_288;
      (extension_SwiftUI)::SwiftUI::View::_padding(SVar20);
      (**(code **)(lVar21 + 8))(pcVar12,puVar9);
      puVar13 = local_230;
      puStack_90 = puVar17;
      local_98 = puVar14;
      _swift_getWitnessTable(puVar15,local_230,&local_98);
      lVar21 = local_280;
      thunk_FUN_10003cc94(local_280,puVar1,puVar13,puVar15);
      local_218 = *(code **)(local_290 + 8);
      (*local_218)(puVar1,puVar13);
      thunk_FUN_10003cc94(puVar1,lVar21,puVar13,puVar15);
      lVar21 = local_268;
      FUN_1001fb178(local_268,puVar1,puVar9,puVar13,puVar14,puVar15);
      puVar9 = local_240;
      puVar17 = 
      PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8;
      puVar16 = 
      PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8;
      local_a8 = puVar14;
      puStack_a0 = puVar14;
      _swift_getWitnessTable
                (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8
                 ,local_240,&local_a8);
      puVar11 = local_238;
      local_b8 = puVar14;
      puStack_b0 = puVar15;
      _swift_getWitnessTable(puVar17,local_238,&local_b8);
      param_4 = local_298;
      FUN_1001fb178(lVar19,lVar21,puVar9,puVar11,puVar16,puVar17);
      (**(code **)(local_260 + 8))(lVar21,puVar11);
      pcVar12 = local_218;
      (*local_218)(puVar1,puVar13);
      (*pcVar12)(local_280,puVar13);
      puVar15 = local_220;
    }
  }
  puVar14 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_c0 = 
  PTR___protocol_witness_table_for_SwiftUI__FlexFrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaaa68
  ;
  puVar16 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_c8 = param_4;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             local_210,&local_c8);
  puVar17 = 
  PTR___protocol_witness_table_for_SwiftUI__PaddingLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa8c8
  ;
  local_d0 = 
  PTR___protocol_witness_table_for_SwiftUI__PaddingLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa8c8
  ;
  puVar10 = puVar14;
  local_d8 = puVar16;
  _swift_getWitnessTable(puVar14,puVar15,&local_d8);
  puVar15 = PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8
  ;
  puVar16 = PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8
  ;
  local_e8 = puVar10;
  puStack_e0 = puVar10;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8
             ,puVar9,&local_e8);
  puStack_f0 = puVar17;
  local_f8 = puVar10;
  _swift_getWitnessTable(puVar14,puVar13,&local_f8);
  puVar9 = puVar15;
  local_108 = puVar10;
  puStack_100 = puVar14;
  _swift_getWitnessTable(puVar15,puVar11,&local_108);
  puVar17 = local_248;
  local_118 = puVar16;
  puStack_110 = puVar9;
  _swift_getWitnessTable(puVar15,local_248,&local_118);
  thunk_FUN_10003cc94(local_228,lVar19,puVar17,puVar15);
  (**(code **)(local_250 + 8))(lVar19,puVar17);
  return;
}



/* Address: 0x100206040 | thunk_FUN_100206044 */

void thunk_FUN_100206044(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb65f8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c35630;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c35630,&DAT_100ec0b88);
  DAT_100fb65f8 = pTVar1;
  return;
}



/* Address: 0x100206044 | FUN_100206044 */

void FUN_100206044(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb65f8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c35630;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c35630,&DAT_100ec0b88);
  DAT_100fb65f8 = pTVar1;
  return;
}



/* Address: 0x100206084 | FUN_100206084 */

undefined1  [16] FUN_100206084(void)

{
  return ZEXT816(0x100ec0b88);
}



/* Address: 0x100206094 | FUN_100206094 */

void FUN_100206094(long param_1)

{
  undefined8 uVar1;
  ModifiedContent MVar2;
  ModifiedContent MVar3;
  _ConditionalContent _Var4;
  ModifiedContent MVar5;
  _ConditionalContent _Var6;
  _ConditionalContent _Var7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *local_b0;
  undefined *puStack_a8;
  undefined *local_a0;
  undefined *puStack_98;
  undefined *local_90;
  undefined *puStack_88;
  undefined *local_80;
  undefined *puStack_78;
  undefined *local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined *puStack_58;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  MVar2 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  MVar3 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  _Var4 = SwiftUI::_ConditionalContent::typeMetadataAccessor();
  MVar5 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  _Var6 = SwiftUI::_ConditionalContent::typeMetadataAccessor();
  _Var7 = SwiftUI::_ConditionalContent::typeMetadataAccessor();
  puVar11 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  puStack_58 = 
  PTR___protocol_witness_table_for_SwiftUI__FlexFrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaaa68
  ;
  puVar8 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_60 = uVar1;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             MVar2.unknown,&local_60);
  puVar12 = 
  PTR___protocol_witness_table_for_SwiftUI__PaddingLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa8c8
  ;
  puStack_68 = 
  PTR___protocol_witness_table_for_SwiftUI__PaddingLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa8c8
  ;
  puVar9 = puVar11;
  local_70 = puVar8;
  _swift_getWitnessTable(puVar11,MVar3.unknown,&local_70);
  puVar8 = PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8;
  puVar10 = PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8
  ;
  local_80 = puVar9;
  puStack_78 = puVar9;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8
             ,_Var4.unknown,&local_80);
  puStack_88 = puVar12;
  local_90 = puVar9;
  _swift_getWitnessTable(puVar11,MVar5.unknown,&local_90);
  puVar12 = puVar8;
  local_a0 = puVar9;
  puStack_98 = puVar11;
  _swift_getWitnessTable(puVar8,_Var6.unknown,&local_a0);
  local_b0 = puVar10;
  puStack_a8 = puVar12;
  _swift_getWitnessTable(puVar8,_Var7.unknown,&local_b0);
  return;
}



/* Address: 0x1002061f0 | FUN_1002061f0 */

void FUN_1002061f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ModifiedContent MVar1;
  ModifiedContent MVar2;
  Alignment AVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long extraout_x8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined *puStack_78;
  code *local_70;
  undefined8 uStack_68;
  
  local_a0 = param_2;
  uStack_98 = param_3;
  local_88 = param_1;
  FUN_100005c24(&DAT_100fb6600,&DAT_100c356c0);
  uVar6 = param_4;
  MVar1 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  local_90 = *(long *)(MVar1.unknown + -8);
  MVar2 = MVar1;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_90 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_70 = FUN_1002063e8;
  uStack_68 = 0;
  AVar3 = SwiftUI::Alignment::get_center(MVar2.unknown);
  puVar4 = &DAT_100fb6608;
  FUN_1000037f0(&DAT_100fb6608,&DAT_100c356c8);
  puVar5 = &DAT_100fb6610;
  FUN_100016eac(&DAT_100fb6610,&DAT_100fb6608,&DAT_100c356c8,
                PTR_SwiftUI__SwiftUI__GeometryReader<undefined>_>SwiftUI__View_100eaa840);
  (extension_SwiftUI)::SwiftUI::View::_background
            ((long)&local_a0 - extraout_x8,&local_70,AVar3.unknown,uVar6,param_4,puVar4,param_5,
             puVar5);
  puVar4 = &DAT_100ec0be8;
  _swift_allocObject(&DAT_100ec0be8,0x20,7);
  uVar6 = uStack_98;
  *(undefined8 *)(puVar4 + 0x10) = local_a0;
  *(undefined8 *)(puVar4 + 0x18) = uStack_98;
  puVar5 = &DAT_100fb6618;
  FUN_100016eac(&DAT_100fb6618,&DAT_100fb6600,&DAT_100c356c0,
                PTR_SwiftUI__SwiftUI___BackgroundModifier<undefined>_>SwiftUI__ViewModifier_100eaada8
               );
  local_80 = param_5;
  puStack_78 = puVar5;
  _swift_retain(uVar6);
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             MVar1.unknown,&local_80);
  FUN_100206508();
  FUN_100003a00(&DAT_100fb6468,FUN_1001f3e54,
                PTR_CoreGraphics____C__CGSize_>Swift__Equatable_100eaf290);
  (extension_SwiftUI)::SwiftUI::View::_onPreferenceChange();
  _swift_release(puVar4);
  (**(code **)(local_90 + 8))((long)&local_a0 - extraout_x8,MVar1.unknown);
  return;
}



/* Address: 0x1002063e8 | FUN_1002063e8 */

void FUN_1002063e8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  char *pcVar5;
  Color CVar6;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fb6f30;
  FUN_100003a00(&DAT_100fb6f30,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  pcVar5 = (char *)UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar5 & 1) == 0) {
    pcVar5 = "PasteUI/View+SizeChange.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/View+SizeChange.swift",0x1d,1,6,UVar4.unknown,puVar3);
  }
  CVar6 = SwiftUI::Color::get_clear((Color)pcVar5);
  SwiftUI::GeometryProxy::get_size((GeometryProxy)CVar6.unknown);
  _swift_release(pMVar2);
  *param_1 = CVar6.unknown;
  param_1[1] = param_2;
  param_1[2] = param_3;
  return;
}



/* Address: 0x1002064c0 | FUN_1002064c0 */

void FUN_1002064c0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1002064e4 | FUN_1002064e4 */

void FUN_1002064e4(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,param_1[1]);
  return;
}



/* Address: 0x100206508 | FUN_100206508 */

void FUN_100206508(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb6620 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c356f4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c356f4,&DAT_100ec0c10);
  DAT_100fb6620 = pTVar1;
  return;
}



/* Address: 0x100206548 | FUN_100206548 */

void FUN_100206548(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  ModifiedContent MVar3;
  ModifiedContent MVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined *puStack_58;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  FUN_100005c24(&DAT_100fb6600,&DAT_100c356c0);
  MVar3 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  FUN_100005c24(&DAT_100fb6628,&DAT_100c356d8);
  MVar4 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  puVar5 = &DAT_100fb6618;
  FUN_100016eac(&DAT_100fb6618,&DAT_100fb6600,&DAT_100c356c0,
                PTR_SwiftUI__SwiftUI___BackgroundModifier<undefined>_>SwiftUI__ViewModifier_100eaada8
               );
  puVar2 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  puVar6 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_60 = uVar1;
  puStack_58 = puVar5;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             MVar3.unknown,&local_60);
  puVar5 = &DAT_100fb6630;
  FUN_100016eac(&DAT_100fb6630,&DAT_100fb6628,&DAT_100c356d8,
                PTR_SwiftUI__SwiftUI___PreferenceActionModifier<undefined>_>SwiftUI__ViewModifier_100eab078
               );
  local_70 = puVar6;
  puStack_68 = puVar5;
  _swift_getWitnessTable(puVar2,MVar4.unknown,&local_70);
  return;
}



/* Address: 0x100206650 | FUN_100206650 */

undefined1  [16] FUN_100206650(void)

{
  return ZEXT816(0x100ec0c10);
}



/* Address: 0x100206660 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::(extension_SwiftUI)::SwiftUI::PreferenceKey::get__includesRemovedValues */

bool (extension_SwiftUI)::SwiftUI::PreferenceKey::get__includesRemovedValues(void)

{
  bool bVar1;
  
  bVar1 = get__includesRemovedValues();
  return bVar1;
}



/* Address: 0x100206664 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::(extension_SwiftUI)::SwiftUI::PreferenceKey::get__isReadableByHost */

bool (extension_SwiftUI)::SwiftUI::PreferenceKey::get__isReadableByHost(void)

{
  bool bVar1;
  
  bVar1 = get__isReadableByHost();
  return bVar1;
}



/* Address: 0x100206668 | FUN_100206668 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_100206668(undefined8 param_1,ulong param_2)

{
  ID IVar1;
  ID unaff_x20;
  
  _swift_getObjCClassFromMetadata();
  IVar1 = objc_stub::colorWithRed_green_blue_alpha_
                    (unaff_x20,(double)(param_2 >> 0x10 & 0xff) / 255.0,
                     (double)(param_2 >> 8 & 0xff) / 255.0,(double)(param_2 & 0xff) / 255.0,param_1)
  ;
  return IVar1;
}



/* Address: 0x1002066dc | FUN_1002066dc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_1002066dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  void *aBlock;
  ID IVar2;
  undefined *local_60;
  undefined8 local_58;
  code *local_50;
  undefined *puStack_48;
  code *local_40;
  undefined *local_38;
  
  puVar1 = &DAT_100ec0c68;
  _swift_allocObject(&DAT_100ec0c68,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  local_40 = FUN_100206e94;
  local_60 = PTR___NSConcreteStackBlock_100ea82a0;
  local_58 = 0x42000000;
  local_50 = FUN_100059c14;
  puStack_48 = &DAT_100ec0c80;
  local_38 = puVar1;
  aBlock = __Block_copy(&local_60);
  IVar2 = NSColor::colorWithName_dynamicProvider_((ID)&_OBJC_CLASS___NSColor,0,aBlock);
  __Block_release(aBlock);
  _swift_release(local_38);
  return IVar2;
}



/* Address: 0x1002067b8 | FUN_1002067b8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_1002067b8(void)

{
  ID IVar1;
  ID unaff_x20;
  
  IVar1 = objc_stub::colorWithAlphaComponent_(unaff_x20);
  return IVar1;
}



/* Address: 0x1002067d4 | FUN_1002067d4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

bool FUN_1002067d4(void)

{
  ID IVar1;
  ID unaff_x20;
  double extraout_d0;
  double extraout_d0_00;
  double extraout_d0_01;
  double dVar2;
  
  IVar1 = NSColorSpace::deviceRGBColorSpace((ID)&_OBJC_CLASS___NSColorSpace);
  IVar1 = objc_stub::colorUsingColorSpace_(unaff_x20,IVar1);
  if (IVar1 == 0) {
    dVar2 = 0.0;
  }
  else {
    objc_stub::redComponent(IVar1);
    objc_stub::greenComponent(IVar1);
    objc_stub::blueComponent(IVar1);
    objc_stub::alphaComponent(IVar1);
    dVar2 = extraout_d0 * 299.0 + extraout_d0_00 * 587.0 + extraout_d0_01 * 114.0;
  }
  return 0.55 < dVar2 / 1000.0;
}



/* Address: 0x1002068e0 | FUN_1002068e0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1002068e0(void)

{
  ID IVar1;
  ID unaff_x20;
  
  IVar1 = NSColorSpace::deviceRGBColorSpace((ID)&_OBJC_CLASS___NSColorSpace);
  IVar1 = objc_stub::colorUsingColorSpace_(unaff_x20,IVar1);
  if (IVar1 != 0) {
    objc_stub::redComponent(IVar1);
    objc_stub::greenComponent(IVar1);
    objc_stub::blueComponent(IVar1);
    objc_stub::alphaComponent(IVar1);
  }
  return 0;
}



/* Address: 0x1002069ac | FUN_1002069ac */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1002069ac(void)

{
  ID IVar1;
  ID unaff_x20;
  
  IVar1 = NSColorSpace::deviceRGBColorSpace((ID)&_OBJC_CLASS___NSColorSpace);
  IVar1 = objc_stub::colorUsingColorSpace_(unaff_x20,IVar1);
  if (IVar1 != 0) {
    objc_stub::saturationComponent(IVar1);
    objc_stub::brightnessComponent(IVar1);
    objc_stub::hueComponent(IVar1);
    objc_stub::saturationComponent(IVar1);
    objc_stub::brightnessComponent(IVar1);
  }
  return 0;
}



/* Address: 0x100206a90 | FUN_100206a90 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100206a90(void)

{
  ID IVar1;
  ID unaff_x20;
  
  IVar1 = NSColorSpace::deviceRGBColorSpace((ID)&_OBJC_CLASS___NSColorSpace);
  IVar1 = objc_stub::colorUsingColorSpace_(unaff_x20,IVar1);
  if (IVar1 != 0) {
    objc_stub::hueComponent(IVar1);
    objc_stub::saturationComponent(IVar1);
    objc_stub::brightnessComponent(IVar1);
    objc_stub::alphaComponent(IVar1);
  }
  return 0;
}



/* Address: 0x100206b5c | FUN_100206b5c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_100206b5c(void)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  ID IVar5;
  char *pcVar6;
  char *pcVar7;
  void *in_x3;
  ID unaff_x20;
  double extraout_d0;
  double extraout_d0_00;
  double extraout_d0_01;
  double dVar8;
  double dVar9;
  double dVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  
  IVar5 = NSColorSpace::deviceRGBColorSpace((ID)&_OBJC_CLASS___NSColorSpace);
  IVar5 = objc_stub::colorUsingColorSpace_(unaff_x20,IVar5);
  if (IVar5 == 0) {
    dVar10 = 0.0;
    dVar9 = 0.0;
    dVar8 = 0.0;
  }
  else {
    objc_stub::redComponent(IVar5);
    objc_stub::greenComponent(IVar5);
    objc_stub::blueComponent(IVar5);
    objc_stub::alphaComponent(IVar5);
    dVar10 = extraout_d0 * 255.0;
    dVar9 = extraout_d0_00 * 255.0;
    dVar8 = extraout_d0_01 * 255.0;
  }
  pcVar6 = &DAT_100fb6638;
  FUN_1000037f0(&DAT_100fb6638,&DAT_100c35740);
  pcVar7 = pcVar6;
  _swift_allocObject();
  pcVar7[0x18] = '\x02';
  pcVar7[0x19] = '\0';
  pcVar7[0x1a] = '\0';
  pcVar7[0x1b] = '\0';
  pcVar7[0x1c] = '\0';
  pcVar7[0x1d] = '\0';
  pcVar7[0x1e] = '\0';
  pcVar7[0x1f] = '\0';
  pcVar7[0x10] = '\x01';
  puVar3 = PTR___protocol_witness_table_for_Swift_Int___Swift_CVarArg_in_Swift_100eac760;
  puVar2 = PTR___type_metadata_for_Swift_Int_100eac6f8;
  pcVar7[0x11] = '\0';
  pcVar7[0x12] = '\0';
  pcVar7[0x13] = '\0';
  pcVar7[0x14] = '\0';
  pcVar7[0x15] = '\0';
  pcVar7[0x16] = '\0';
  pcVar7[0x17] = '\0';
  if (0x7fefffffffffffff < (ulong)ABS(dVar10)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100206e30);
    (*pcVar4)();
  }
  if (dVar10 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100206e34);
    (*pcVar4)();
  }
  if (9.223372036854776e+18 <= dVar10) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100206e38);
    (*pcVar4)();
  }
  *(undefined **)(pcVar7 + 0x38) = PTR___type_metadata_for_Swift_Int_100eac6f8;
  *(undefined **)(pcVar7 + 0x40) = puVar3;
  *(long *)(pcVar7 + 0x20) = (long)dVar10;
  SVar11 = (extension_Foundation)::Swift::String::_init();
  pcVar7 = pcVar6;
  _swift_allocObject(pcVar6,0x48,7);
  pcVar7[0x18] = '\x02';
  pcVar7[0x19] = '\0';
  pcVar7[0x1a] = '\0';
  pcVar7[0x1b] = '\0';
  pcVar7[0x1c] = '\0';
  pcVar7[0x1d] = '\0';
  pcVar7[0x1e] = '\0';
  pcVar7[0x1f] = '\0';
  pcVar7[0x10] = '\x01';
  pcVar7[0x11] = '\0';
  pcVar7[0x12] = '\0';
  pcVar7[0x13] = '\0';
  pcVar7[0x14] = '\0';
  pcVar7[0x15] = '\0';
  pcVar7[0x16] = '\0';
  pcVar7[0x17] = '\0';
  if (0x7fefffffffffffff < (ulong)ABS(dVar9)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100206e3c);
    (*pcVar4)();
  }
  if (dVar9 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100206e40);
    (*pcVar4)();
  }
  if (9.223372036854776e+18 <= dVar9) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100206e44);
    (*pcVar4)();
  }
  *(undefined **)(pcVar7 + 0x38) = puVar2;
  *(undefined **)(pcVar7 + 0x40) = puVar3;
  *(long *)(pcVar7 + 0x20) = (long)dVar9;
  SVar12 = (extension_Foundation)::Swift::String::_init();
  _swift_allocObject(pcVar6,0x48,7);
  pcVar6[0x18] = '\x02';
  pcVar6[0x19] = '\0';
  pcVar6[0x1a] = '\0';
  pcVar6[0x1b] = '\0';
  pcVar6[0x1c] = '\0';
  pcVar6[0x1d] = '\0';
  pcVar6[0x1e] = '\0';
  pcVar6[0x1f] = '\0';
  pcVar6[0x10] = '\x01';
  pcVar6[0x11] = '\0';
  pcVar6[0x12] = '\0';
  pcVar6[0x13] = '\0';
  pcVar6[0x14] = '\0';
  pcVar6[0x15] = '\0';
  pcVar6[0x16] = '\0';
  pcVar6[0x17] = '\0';
  if ((ulong)ABS(dVar8) < 0x7ff0000000000000) {
    if (dVar8 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100206e4c);
      (*pcVar4)();
    }
    if (dVar8 < 9.223372036854776e+18) {
      *(undefined **)(pcVar6 + 0x38) = puVar2;
      *(undefined **)(pcVar6 + 0x40) = puVar3;
      *(long *)(pcVar6 + 0x20) = (long)dVar8;
      SVar13 = (extension_Foundation)::Swift::String::_init();
      SVar14.bridgeObject = in_x3;
      SVar14.str = pcVar6;
      Swift::String::append(SVar11,SVar14);
      _swift_bridgeObjectRelease(SVar11.bridgeObject);
      SVar11.bridgeObject = in_x3;
      SVar11.str = pcVar6;
      Swift::String::append(SVar12,SVar11);
      _swift_bridgeObjectRelease(SVar12.bridgeObject);
      SVar12.bridgeObject = in_x3;
      SVar12.str = pcVar6;
      Swift::String::append(SVar13,SVar12);
      _swift_bridgeObjectRelease(SVar13.bridgeObject);
      auVar1._8_8_ = 0xe100000000000000;
      auVar1._0_8_ = 0x23;
      return auVar1;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100206e50);
    (*pcVar4)();
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x100206e48);
  (*pcVar4)();
}



/* Address: 0x100206e50 | FUN_100206e50 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100206e50(void)

{
  FUN_100206f30();
  return;
}



/* Address: 0x100206e68 | FUN_100206e68 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100206e68(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100206e94 | FUN_100206e94 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100206e94(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100206f30(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100206eb0 | FUN_100206eb0 */

void FUN_100206eb0(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  _swift_retain(uVar1);
  return;
}



/* Address: 0x100206ec4 | FUN_100206ec4 */

void FUN_100206ec4(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100206ecc | FUN_100206ecc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_100206ecc(ulong param_1)

{
  ID IVar1;
  
  FUN_1002067d4();
  if ((param_1 & 1) == 0) {
    IVar1 = NSColor::whiteColor((ID)&_OBJC_CLASS___NSColor);
  }
  else {
    IVar1 = NSColor::blackColor((ID)&_OBJC_CLASS___NSColor);
  }
  return IVar1;
}



/* Address: 0x100206f0c | FUN_100206f0c */

bool FUN_100206f0c(void)

{
  ID unaff_x20;
  double extraout_d0;
  
  objc_stub::alphaComponent(unaff_x20);
  return extraout_d0 < 1.0;
}



/* Address: 0x100206f30 | FUN_100206f30 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100206f30(ID param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  NSArray *pNVar2;
  ID IVar3;
  undefined8 uVar4;
  
  puVar1 = &DAT_100fb6640;
  FUN_1000037f0(&DAT_100fb6640,&DAT_100c35750);
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x18) = 8;
  *(undefined8 *)(puVar1 + 0x10) = 4;
  uVar4 = *(undefined8 *)PTR__NSAppearanceNameVibrantDark_100ea8fc8;
  *(undefined8 *)(puVar1 + 0x20) = *(undefined8 *)PTR__NSAppearanceNameDarkAqua_100ea8fc0;
  *(undefined8 *)(puVar1 + 0x28) = uVar4;
  uVar4 = *(undefined8 *)PTR__NSAppearanceNameAccessibilityHighContrastVibrantDark_100ea8fb0;
  *(undefined8 *)(puVar1 + 0x30) =
       *(undefined8 *)PTR__NSAppearanceNameAccessibilityHighContrastDarkAqua_100ea8fa8;
  *(undefined8 *)(puVar1 + 0x38) = uVar4;
  FUN_1001f40b4(0);
  pNVar2 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_release(puVar1);
  IVar3 = objc_stub::bestMatchFromAppearancesWithNames_(param_1,pNVar2);
  if (IVar3 != 0) {
    param_3 = param_2;
  }
  return param_3;
}


