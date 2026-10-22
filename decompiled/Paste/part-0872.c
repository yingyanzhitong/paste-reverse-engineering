/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100973d04 | FUN_100973d04 */

undefined1  [16] FUN_100973d04(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long *unaff_x20;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  FUN_100071340();
  if ((param_2 & 1) == 0) {
    uVar4 = 0;
    uVar5 = 0;
  }
  else {
    iVar2 = (int)*unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    lVar3 = *unaff_x20;
    if (iVar2 == 0) {
      FUN_100973ed8();
    }
    puVar1 = (undefined8 *)(*(long *)(lVar3 + 0x38) + param_1 * 0x10);
    uVar4 = *puVar1;
    uVar5 = puVar1[1];
    FUN_1001f60f0(param_1,lVar3);
    *unaff_x20 = lVar3;
  }
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = uVar4;
  return auVar6;
}



/* Address: 0x100973d94 | FUN_100973d94 */

void FUN_100973d94(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_3;
  uVar5 = param_2;
  FUN_100071340();
  lVar6 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar5 & 1;
  lVar7 = lVar6 + uVar8;
  if (SCARRY8(lVar6,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100973e64);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar7) {
    param_4 = param_4 & 1;
    FUN_10097403c(lVar7);
    uVar3 = param_3;
    FUN_100071340();
    if (((uint)uVar5 & 1) != (param_4 & 1)) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100973e2c);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_100973ed8();
    lVar7 = *unaff_x20;
    goto joined_r0x000100973e78;
  }
  lVar7 = *unaff_x20;
joined_r0x000100973e78:
  if ((uVar5 & 1) != 0) {
    puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x38) + uVar3 * 0x10);
    uVar4 = *puVar1;
    *puVar1 = param_1;
    puVar1[1] = param_2;
    _swift_unknownObjectRelease(uVar4);
    return;
  }
  lVar6 = lVar7 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar6 + 0x40) = *(ulong *)(lVar6 + 0x40) | 1L << (uVar3 & 0x3f);
  *(ulong *)(*(long *)(lVar7 + 0x30) + uVar3 * 8) = param_3;
  puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x38) + uVar3 * 0x10);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (SCARRY8(*(long *)(lVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100973ed8);
    (*pcVar2)();
  }
  *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
  return;
}



/* Address: 0x100973ed8 | FUN_100973ed8 */

void FUN_100973ed8(void)

{
  __RawDictionaryStorage *p_Var1;
  long lVar2;
  undefined8 *puVar3;
  code *pcVar4;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  this = (_DictionaryStorage *)&DAT_100fefc58;
  FUN_1000f7830(&DAT_100fefc58,&DAT_100c887a0);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var5 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x40;
    uVar6 = (1L << ((ulong)(byte)p_Var5[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var5 != original || p_Var1 + uVar6 * 8 <= p_Var5 + 0x40) {
      _memmove(p_Var5 + 0x40,p_Var1,uVar6 << 3);
    }
    lVar9 = 0;
    *(undefined8 *)(p_Var5 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar7 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar6 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar6 = ~(-1L << (uVar7 & 0x3f));
    }
    uVar6 = uVar6 & *(ulong *)(original + 0x40);
    if (uVar6 == 0) goto LAB_100973fb4;
    do {
      uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar6 = uVar6 - 1 & uVar6;
      while( true ) {
        uVar8 = LZCOUNT(uVar8) | lVar9 << 6;
        puVar3 = (undefined8 *)(*(long *)(original + 0x38) + uVar8 * 0x10);
        uVar11 = puVar3[1];
        uVar10 = *puVar3;
        *(undefined8 *)(*(long *)(p_Var5 + 0x30) + uVar8 * 8) =
             *(undefined8 *)(*(long *)(original + 0x30) + uVar8 * 8);
        puVar3 = (undefined8 *)(*(long *)(p_Var5 + 0x38) + uVar8 * 0x10);
        puVar3[1] = uVar11;
        *puVar3 = uVar10;
        _swift_unknownObjectRetain(uVar10);
        if (uVar6 != 0) break;
LAB_100973fb4:
        do {
          lVar2 = lVar9 + 1;
          if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10097403c);
            (*pcVar4)();
          }
          if ((long)(uVar7 + 0x3f >> 6) <= lVar2) goto LAB_100974014;
          uVar6 = *(ulong *)(p_Var1 + lVar2 * 8);
          lVar9 = lVar9 + 1;
        } while (uVar6 == 0);
        uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
        uVar6 = uVar6 - 1 & uVar6;
        lVar9 = lVar2;
      }
    } while( true );
  }
LAB_100974014:
  _swift_release(original);
  *unaff_x20 = (long)p_Var5;
  return;
}



/* Address: 0x10097403c | FUN_10097403c */

void FUN_10097403c(long param_1,undefined *param_2)

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
  this = (_DictionaryStorage *)&DAT_100fefc58;
  FUN_1000f7830(&DAT_100fefc58,&DAT_100c887a0);
  p_Var4 = original;
  HVar6.unknown = param_2;
  Swift::_DictionaryStorage::_resize(this,original,capacity,SUB81(param_2,0));
  if (*(long *)(original + 0x10) == 0) {
LAB_100974274:
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
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1009742a4);
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
          goto LAB_100974274;
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
    if (((ulong)param_2 & 1) == 0) {
      _swift_unknownObjectRetain(uVar16);
    }
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
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1009742a8);
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



/* Address: 0x1009742a8 | FUN_1009742a8 */

void FUN_1009742a8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  code *pcVar5;
  
  uVar2 = *(ulong *)(param_3 + 0x20);
  lVar1 = *(long *)(param_3 + 0x28);
  _swift_getObjectType();
  uVar3 = uVar2;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar3 & 1) != 0) {
    pcVar5 = FUN_100308524;
    FUN_100630334(param_1,param_2,FUN_100308524);
    FUN_1006486f8();
    FUN_100004550(param_1,param_2);
    _swift_bridgeObjectRelease(pcVar5);
    return;
  }
  puVar4 = &DAT_100f1d840;
  _swift_allocObject(&DAT_100f1d840,0x21,7);
  *(long *)(puVar4 + 0x10) = param_3;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  puVar4[0x20] = (char)param_2;
  pcVar5 = *(code **)(lVar1 + 0x18);
  _swift_retain(param_3);
  FUN_100308524(param_1,param_2);
  (*pcVar5)(thunk_FUN_100974e70,puVar4,uVar2,lVar1);
  _swift_release(puVar4);
  return;
}



/* Address: 0x1009743a8 | FUN_1009743a8 */

void FUN_1009743a8(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  code *pcVar6;
  
  uVar2 = *(ulong *)(param_2 + 0x20);
  lVar1 = *(long *)(param_2 + 0x28);
  _swift_getObjectType();
  uVar3 = uVar2;
  lVar5 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar3 & 1) != 0) {
    thunk_FUN_1005de8f4(param_1);
    FUN_1006486f8();
    FUN_100004550(param_1,lVar5);
    _swift_bridgeObjectRelease(param_3);
    return;
  }
  puVar4 = &DAT_100f1da48;
  _swift_allocObject(&DAT_100f1da48,0x20,7);
  *(long *)(puVar4 + 0x10) = param_2;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  pcVar6 = *(code **)(lVar1 + 0x18);
  _swift_retain(param_2);
  _swift_errorRetain(param_1);
  (*pcVar6)(thunk_FUN_1008d678c,puVar4,uVar2,lVar1);
  _swift_release(puVar4);
  return;
}



/* Address: 0x100974490 | FUN_100974490 */

undefined * FUN_100974490(code *param_1,undefined8 param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 local_90 [3];
  undefined1 auStack_78 [24];
  
  puVar2 = &DAT_100fefc68;
  FUN_1000f7830(&DAT_100fefc68,&DAT_100c887a8);
  _swift_allocObject();
  lVar7 = *(long *)(unaff_x20 + 0x28);
  uVar12 = *(ulong *)(unaff_x20 + 0x20);
  *(undefined8 *)(puVar2 + 0x28) = *(undefined8 *)(unaff_x20 + 0x28);
  *(ulong *)(puVar2 + 0x20) = uVar12;
  *(undefined8 *)(puVar2 + 0x10) = 0;
  puVar2[0x18] = 0xff;
  *(undefined8 *)(puVar2 + 0x38) = 0;
  *(undefined8 *)(puVar2 + 0x40) = 0;
  *(undefined8 *)(puVar2 + 0x30) = 0;
  puVar3 = &DAT_100f1d8e0;
  _swift_allocObject(&DAT_100f1d8e0,0x30,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(long *)(puVar3 + 0x18) = unaff_x20;
  *(code **)(puVar3 + 0x20) = param_1;
  *(undefined8 *)(puVar3 + 0x28) = param_2;
  uVar4 = uVar12;
  _swift_getObjectType();
  pcVar10 = *(code **)(lVar7 + 0x10);
  _swift_retain_n(puVar2,2);
  _swift_retain_n();
  _swift_retain_n(param_2,2);
  _swift_unknownObjectRetain(uVar12);
  uVar12 = uVar4;
  (*pcVar10)(uVar4,lVar7);
  if ((uVar12 & 1) == 0) {
    puVar5 = &DAT_100f1d908;
    _swift_allocObject(&DAT_100f1d908,0x28,7);
    *(long *)(puVar5 + 0x10) = unaff_x20;
    *(code **)(puVar5 + 0x18) = FUN_100974ec8;
    *(undefined **)(puVar5 + 0x20) = puVar3;
    pcVar10 = *(code **)(lVar7 + 0x18);
    _swift_retain();
    _swift_retain(puVar3);
    (*pcVar10)(FUN_100653138,puVar5,uVar4,lVar7);
    _swift_release(puVar5);
    _swift_release(param_2);
    _swift_release();
    _swift_release(puVar2);
    _swift_release(puVar3);
    return puVar2;
  }
  _swift_beginAccess(unaff_x20 + 0x10,auStack_78,0,0);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
  cVar1 = *(char *)(unaff_x20 + 0x18);
  if (cVar1 == '\x01') {
    uVar6 = 1;
    FUN_1005dff00(uVar8,1);
  }
  else {
    if (cVar1 == -1) {
      _swift_beginAccess(unaff_x20 + 0x30,local_90,0x21,0);
      FUN_10064967c(FUN_100974ec8,puVar3);
      _swift_endAccess(local_90);
      uVar9 = 0;
      uVar11 = 0;
      pcVar10 = (code *)0x0;
      goto LAB_1009746d8;
    }
    local_90[0] = uVar8;
    FUN_100974ed4(uVar8,cVar1);
    (*param_1)(local_90);
    FUN_100642b94(uVar8,cVar1);
    uVar8 = 0;
    uVar6 = 0;
  }
  pcVar10 = FUN_100308524;
  uVar9 = uVar8;
  uVar11 = uVar6;
  FUN_100630334(uVar8,uVar6,FUN_100308524);
  FUN_1002ec258(uVar8,uVar6);
LAB_1009746d8:
  FUN_1006486f8(uVar9,uVar11,pcVar10);
  FUN_100004550(uVar9,uVar11);
  _swift_release(param_2);
  _swift_release();
  _swift_release(puVar2);
  _swift_release(puVar3);
  _swift_bridgeObjectRelease(pcVar10);
  return puVar2;
}



/* Address: 0x100974740 | FUN_100974740 */

undefined8 FUN_100974740(long param_1,long param_2,code *param_3)

{
  char cVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [24];
  undefined8 local_70 [3];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_58,0,0);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  cVar1 = *(char *)(param_2 + 0x18);
  if (cVar1 == '\x01') {
    uVar3 = 1;
    FUN_1005dff00(uVar4,1);
  }
  else {
    if (cVar1 == -1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100974858);
      (*pcVar2)();
    }
    local_70[0] = uVar4;
    FUN_100974ed4(uVar4,cVar1);
    (*param_3)(local_70);
    FUN_100642b94(uVar4,cVar1);
    uVar4 = 0;
    uVar3 = 0;
  }
  _swift_beginAccess(param_1 + 0x10,local_70,1,0);
  if (*(char *)(param_1 + 0x18) == -1) {
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    *(undefined1 *)(param_1 + 0x18) = uVar3;
    _swift_beginAccess(param_1 + 0x30,auStack_88,1,0);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  else {
    FUN_1002ec258(uVar4,uVar3);
    uVar4 = 0;
  }
  return uVar4;
}



/* Address: 0x100974858 | FUN_100974858 */

void FUN_100974858(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = *param_2;
  uVar2 = (ulong)*(byte *)(param_2 + 1);
  FUN_100630334(uVar1,uVar2);
  FUN_1006486f8();
  FUN_100004550(uVar1,uVar2);
  _swift_bridgeObjectRelease(param_3);
  return;
}



/* Address: 0x1009748a8 | FUN_1009748a8 */

undefined * FUN_1009748a8(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  _DictionaryStorage *this;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined *capacity;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  capacity = *(undefined **)(param_1 + 0x10);
  if (capacity == (undefined *)0x0) {
    return PTR___swiftEmptyDictionarySingleton_100eae0e0;
  }
  this = (_DictionaryStorage *)&DAT_100fefc58;
  uVar5 = 0;
  FUN_1000f7830();
  puVar3 = capacity;
  Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
  uVar8 = *(ulong *)(param_1 + 0x20);
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = uVar8;
  FUN_100071340();
  if ((uVar5 & 1) == 0) {
    puVar6 = (undefined8 *)(param_1 + 0x40);
    do {
      uVar7 = uVar4 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar7 + 0x40) = *(ulong *)(puVar3 + uVar7 + 0x40) | 1L << (uVar4 & 0x3f);
      *(ulong *)(*(long *)(puVar3 + 0x30) + uVar4 * 8) = uVar8;
      puVar1 = (undefined8 *)(*(long *)(puVar3 + 0x38) + uVar4 * 0x10);
      puVar1[1] = uVar10;
      *puVar1 = uVar9;
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1009749bc);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      capacity = capacity + -1;
      if (capacity == (undefined *)0x0) {
        _swift_unknownObjectRetain(uVar9);
        return puVar3;
      }
      uVar8 = puVar6[-1];
      uVar10 = puVar6[1];
      uVar11 = *puVar6;
      _swift_unknownObjectRetain(uVar9);
      uVar4 = uVar8;
      FUN_100071340();
      puVar6 = puVar6 + 3;
      uVar9 = uVar11;
    } while ((uVar5 & 1) == 0);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100974988);
  (*pcVar2)();
}



/* Address: 0x1009749bc | FUN_1009749bc */

void FUN_1009749bc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  Result RVar2;
  undefined7 extraout_var;
  long *unaff_x20;
  long lVar3;
  
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x60));
  *puVar1 = param_1;
  puVar1[1] = param_2;
  lVar3 = *(long *)(*unaff_x20 + 0x58);
  FUN_1000f8b08(&DAT_100fefc50,&DAT_100c88e00);
  RVar2 = Swift::Result::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,RVar2.value) + -8) + 0x38))
            ((long)unaff_x20 + lVar3,1,1,CONCAT71(extraout_var,RVar2.value));
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x68));
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  return;
}



/* Address: 0x100974a58 | FUN_100974a58 */

void FUN_100974a58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1006529e0(0,param_3);
  _swift_allocObject();
  FUN_1009749bc(param_1,param_2,uVar1);
  return;
}



/* Address: 0x100974aa4 | FUN_100974aa4 */

undefined8 FUN_100974aa4(void)

{
  undefined8 unaff_x20;
  
  FUN_100974a58();
  _swift_unknownObjectRetain();
  return unaff_x20;
}



/* Address: 0x100974ae0 | FUN_100974ae0 */

void FUN_100974ae0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fefa10 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c88650;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c88650,&DAT_100f1d690);
  DAT_100fefa10 = pTVar1;
  return;
}



/* Address: 0x100974b20 | FUN_100974b20 */

void FUN_100974b20(void)

{
  FUN_100622760(PTR__swift_errorRelease_100eae218,0x20);
  return;
}



/* Address: 0x100974b30 | FUN_100974b30 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100974b30(void)

{
  return ZEXT816(0x100fefb00);
}



/* Address: 0x100974b50 | FUN_100974b50 */

void FUN_100974b50(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x100974b74 | FUN_100974b74 */

void FUN_100974b74(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1009739ac(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100974b7c | FUN_100974b7c */

void FUN_100974b7c(void)

{
  FUN_1009743a8();
  return;
}



/* Address: 0x100974b84 | FUN_100974b84 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100974b84(void)

{
  return ZEXT816(0x100fefba0);
}



/* Address: 0x100974ba4 | FUN_100974ba4 */

undefined1  [16] FUN_100974ba4(void)

{
  return ZEXT816(0x100f1d690);
}



/* Address: 0x100974bb4 | thunk_FUN_100974f74 */

void thunk_FUN_100974f74(void)

{
  FUN_100974f74();
  return;
}



/* Address: 0x100974bb8 | FUN_100974bb8 */

void FUN_100974bb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  
  uVar1 = (uint)((ulong)param_3 >> 0x3e);
  if (uVar1 == 1) {
    _swift_bridgeObjectRetain();
    _swift_retain(param_2);
    return;
  }
  if (uVar1 == 0) {
    _swift_bridgeObjectRetain();
    _swift_unknownObjectRetain(param_2);
    return;
  }
  return;
}



/* Address: 0x100974c0c | FUN_100974c0c */

void FUN_100974c0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  
  uVar1 = (uint)((ulong)param_3 >> 0x3e);
  if (uVar1 == 1) {
    _swift_bridgeObjectRelease();
    _swift_release(param_2);
    return;
  }
  if (uVar1 == 0) {
    _swift_bridgeObjectRelease();
    _swift_unknownObjectRelease(param_2);
    return;
  }
  return;
}



/* Address: 0x100974c60 | FUN_100974c60 */

undefined1  [16] FUN_100974c60(void)

{
  return ZEXT816(0x100f1d708);
}



/* Address: 0x100974c70 | FUN_100974c70 */

undefined1  [16] FUN_100974c70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_88;
  undefined *puStack_80;
  undefined4 local_78;
  undefined2 local_74;
  undefined1 local_72;
  undefined *local_40;
  undefined *puStack_38;
  
  puVar2 = &DAT_100fef400;
  puVar3 = &DAT_100c87d20;
  FUN_1000f7830();
  if (puVar2 == &DAT_100eeaaa8) {
    FUN_10065b5f8();
    local_78 = (undefined4)param_3;
    local_72 = (undefined1)((ulong)param_3 >> 0x30);
    local_74 = (undefined2)((ulong)param_3 >> 0x20);
    puVar4 = &DAT_100eeaaa8;
    puVar5 = puVar4;
    local_88 = puVar2;
    puStack_80 = puVar3;
  }
  else if (puVar2 == &DAT_100ef1120) {
    FUN_10065bcfc();
    local_78 = (undefined4)param_3;
    local_72 = (undefined1)((ulong)param_3 >> 0x30);
    local_74 = (undefined2)((ulong)param_3 >> 0x20);
    puVar4 = &DAT_100ef1120;
    puVar5 = puVar4;
    local_88 = puVar2;
    puStack_80 = puVar3;
  }
  else if (puVar2 == &DAT_100ef13d8) {
    FUN_10065b97c();
    local_78 = (undefined4)param_3;
    local_72 = (undefined1)((ulong)param_3 >> 0x30);
    local_74 = (undefined2)((ulong)param_3 >> 0x20);
    puVar4 = &DAT_100ef13d8;
    puVar5 = puVar4;
    local_88 = puVar2;
    puStack_80 = puVar3;
  }
  else {
    puVar4 = &DAT_100fef0f0;
    puVar3 = &DAT_100c88790;
    FUN_1000f7830();
    if (puVar2 != puVar4) {
      FUN_10096c5c8();
      local_40 = puVar4;
      puStack_38 = puVar3;
      goto LAB_100974d80;
    }
    FUN_10065c09c(&local_88);
    puVar5 = puVar2;
  }
  _swift_dynamicCast(&local_40,&local_88,puVar4,puVar5,7);
LAB_100974d80:
  auVar1._8_8_ = puStack_38;
  auVar1._0_8_ = local_40;
  return auVar1;
}



/* Address: 0x100974db8 | FUN_100974db8 */

void FUN_100974db8(void)

{
  FUN_100622760(PTR__swift_unknownObjectRelease_100eae458,0x28);
  return;
}



/* Address: 0x100974dc8 | FUN_100974dc8 */

void FUN_100974dc8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100973198(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100974dd4 | thunk_FUN_100405f18 */

void thunk_FUN_100405f18(void)

{
  FUN_100405f18();
  return;
}



/* Address: 0x100974dd8 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  FUN_100049040();
  return;
}



/* Address: 0x100974ddc | FUN_100974ddc */

void FUN_100974ddc(void)

{
  long unaff_x20;
  
  FUN_100972404(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100974de8 | FUN_100974de8 */

void FUN_100974de8(void)

{
  FUN_10090eee4(FUN_1002ec258);
  return;
}



/* Address: 0x100974df4 | FUN_100974df4 */

void FUN_100974df4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fefc60 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c88838;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c88838,&DAT_100f1db08);
  DAT_100fefc60 = pTVar1;
  return;
}



/* Address: 0x100974e34 | FUN_100974e34 */

void FUN_100974e34(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x100974e58 | FUN_100974e58 */

void FUN_100974e58(void)

{
  long unaff_x20;
  
  FUN_100972c70(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100974e70 | FUN_100974e70 */

void FUN_100974e70(void)

{
  long unaff_x20;
  
  FUN_100974858(*(undefined8 *)(unaff_x20 + 0x10),unaff_x20 + 0x18,FUN_100308524);
  return;
}



/* Address: 0x100974e94 | FUN_100974e94 */

void FUN_100974e94(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x100974ec8 | FUN_100974ec8 */

void FUN_100974ec8(void)

{
  long unaff_x20;
  
  FUN_100974740(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x100974ed4 | FUN_100974ed4 */

void FUN_100974ed4(undefined8 param_1,char param_2)

{
  if (param_2 != -1) {
    FUN_1005dff00();
    return;
  }
  return;
}



/* Address: 0x100974ee8 | FUN_100974ee8 */

void FUN_100974ee8(void)

{
  FUN_100622760(PTR__swift_release_100eae3e8,0x20);
  return;
}



/* Address: 0x100974ef8 | FUN_100974ef8 */

void FUN_100974ef8(void)

{
  long unaff_x20;
  
  FUN_100972484(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100974f1c | FUN_100974f1c */

void FUN_100974f1c(void)

{
  FUN_10097d074();
  return;
}



/* Address: 0x100974f24 | FUN_100974f24 */

void FUN_100974f24(void)

{
  FUN_10090eee4(FUN_1005dff14);
  return;
}



/* Address: 0x100974f30 | FUN_100974f30 */

void FUN_100974f30(void)

{
  long unaff_x20;
  
  FUN_100974858(*(undefined8 *)(unaff_x20 + 0x10),unaff_x20 + 0x18,FUN_1005dff00);
  return;
}



/* Address: 0x100974f54 | FUN_100974f54 */

undefined1  [16] FUN_100974f54(void)

{
  return ZEXT816(0x100f1db08);
}



/* Address: 0x100974f64 | FUN_100974f64 */

void FUN_100974f64(undefined8 *param_1)

{
  FUN_100974c0c(*param_1,param_1[1],param_1[2]);
  return;
}



/* Address: 0x100974f74 | FUN_100974f74 */

undefined8 * FUN_100974f74(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  FUN_100974bb8(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  return param_1;
}



/* Address: 0x100974fbc | thunk_FUN_100974fc0 */

undefined8 * thunk_FUN_100974fc0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar6 = param_2[2];
  FUN_100974bb8(uVar1,uVar3,uVar6);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  uVar5 = param_1[2];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar6;
  FUN_100974c0c(uVar2,uVar4,uVar5);
  return param_1;
}



/* Address: 0x100974fc0 | FUN_100974fc0 */

undefined8 * FUN_100974fc0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar6 = param_2[2];
  FUN_100974bb8(uVar1,uVar3,uVar6);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  uVar5 = param_1[2];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar6;
  FUN_100974c0c(uVar2,uVar4,uVar5);
  return param_1;
}



/* Address: 0x100975014 | thunk_FUN_100975018 */

undefined8 * thunk_FUN_100975018(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = param_2[2];
  uVar3 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  param_1[2] = uVar4;
  FUN_100974c0c(uVar3,uVar1,uVar2);
  return param_1;
}



/* Address: 0x100975018 | FUN_100975018 */

undefined8 * FUN_100975018(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = param_2[2];
  uVar3 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  param_1[2] = uVar4;
  FUN_100974c0c(uVar3,uVar1,uVar2);
  return param_1;
}



/* Address: 0x100975058 | thunk_FUN_10097505c */

int thunk_FUN_10097505c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7d < param_2) && ((char)param_1[6] != '\0')) {
    return *param_1 + 0x7e;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x19 & 0x18 | (uint)*(undefined8 *)(param_1 + 4) & 7) << 2) ^
          0x7f;
  if (0x7c < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x10097505c | FUN_10097505c */

int FUN_10097505c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7d < param_2) && ((char)param_1[6] != '\0')) {
    return *param_1 + 0x7e;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x19 & 0x18 | (uint)*(undefined8 *)(param_1 + 4) & 7) << 2) ^
          0x7f;
  if (0x7c < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x1009750b8 | thunk_FUN_1009750bc */

void thunk_FUN_1009750bc(ulong *param_1,uint param_2,uint param_3)

{
  ulong uVar1;
  
  if (param_2 < 0x7e) {
    if (0x7d < param_3) {
      *(undefined1 *)(param_1 + 3) = 0;
    }
    if (param_2 != 0) {
      uVar1 = (ulong)(-param_2 >> 2 & 0x1f | (-param_2 & 0x7f) << 5);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = (uVar1 | uVar1 << 0x39) & 0xf000000000000007;
      return;
    }
  }
  else {
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = (ulong)(param_2 - 0x7e);
    if (0x7d < param_3) {
      *(undefined1 *)(param_1 + 3) = 1;
    }
  }
  return;
}



/* Address: 0x1009750bc | FUN_1009750bc */

void FUN_1009750bc(ulong *param_1,uint param_2,uint param_3)

{
  ulong uVar1;
  
  if (param_2 < 0x7e) {
    if (0x7d < param_3) {
      *(undefined1 *)(param_1 + 3) = 0;
    }
    if (param_2 != 0) {
      uVar1 = (ulong)(-param_2 >> 2 & 0x1f | (-param_2 & 0x7f) << 5);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = (uVar1 | uVar1 << 0x39) & 0xf000000000000007;
      return;
    }
  }
  else {
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = (ulong)(param_2 - 0x7e);
    if (0x7d < param_3) {
      *(undefined1 *)(param_1 + 3) = 1;
    }
  }
  return;
}



/* Address: 0x100975114 | FUN_100975114 */

uint FUN_100975114(int *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1 + 2;
  if (-1 < *(long *)(param_1 + 4)) {
    uVar1 = (uint)((ulong)*(long *)(param_1 + 4) >> 0x3e);
  }
  return uVar1;
}



/* Address: 0x100975130 | FUN_100975130 */

void FUN_100975130(ulong *param_1,uint param_2)

{
  if (1 < param_2) {
    *param_1 = (ulong)(param_2 - 2);
    param_1[2] = 0x8000000000000000;
    param_1[1] = 0;
    return;
  }
  param_1[2] = param_1[2] & 0xffffffffffffff8 | (ulong)param_2 << 0x3e;
  return;
}



/* Address: 0x100975160 | FUN_100975160 */

undefined1  [16] FUN_100975160(void)

{
  return ZEXT816(0x100f1db98);
}



/* Address: 0x100975170 | thunk_FUN_100975174 */

void thunk_FUN_100975174(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fefc70 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c88810;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c88810,&DAT_100f1db08);
  DAT_100fefc70 = pTVar1;
  return;
}



/* Address: 0x100975174 | FUN_100975174 */

void FUN_100975174(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fefc70 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c88810;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c88810,&DAT_100f1db08);
  DAT_100fefc70 = pTVar1;
  return;
}



/* Address: 0x1009751b4 | thunk_FUN_100974e34 */

void thunk_FUN_100974e34(void)

{
  FUN_100974e34();
  return;
}



/* Address: 0x1009751b8 | thunk_FUN_1009750bc */

void thunk_FUN_1009750bc(ulong *param_1,uint param_2,uint param_3)

{
  ulong uVar1;
  
  if (param_2 < 0x7e) {
    if (0x7d < param_3) {
      *(undefined1 *)(param_1 + 3) = 0;
    }
    if (param_2 != 0) {
      uVar1 = (ulong)(-param_2 >> 2 & 0x1f | (-param_2 & 0x7f) << 5);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = (uVar1 | uVar1 << 0x39) & 0xf000000000000007;
      return;
    }
  }
  else {
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = (ulong)(param_2 - 0x7e);
    if (0x7d < param_3) {
      *(undefined1 *)(param_1 + 3) = 1;
    }
  }
  return;
}



/* Address: 0x1009751bc | thunk_FUN_100974f64 */

void thunk_FUN_100974f64(undefined8 *param_1)

{
  FUN_100974c0c(*param_1,param_1[1],param_1[2]);
  return;
}



/* Address: 0x1009751c0 | thunk_FUN_100974e70 */

void thunk_FUN_100974e70(void)

{
  long unaff_x20;
  
  FUN_100974858(*(undefined8 *)(unaff_x20 + 0x10),unaff_x20 + 0x18,FUN_100308524);
  return;
}


