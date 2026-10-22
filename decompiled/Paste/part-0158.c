/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1001eb330 | FUN_1001eb330 */

void FUN_1001eb330(void)

{
  __RawDictionaryStorage *p_Var1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  long lVar11;
  undefined8 uVar12;
  
  this = (_DictionaryStorage *)&DAT_100fb4fa0;
  FUN_1000037f0(&DAT_100fb4fa0,&DAT_100c33250);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var6 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x40;
    uVar8 = (1L << ((ulong)(byte)p_Var6[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var6 != original || p_Var1 + uVar8 * 8 <= p_Var6 + 0x40) {
      _memmove(p_Var6 + 0x40,p_Var1,uVar8 << 3);
    }
    lVar11 = 0;
    *(undefined8 *)(p_Var6 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar9 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(original + 0x40);
    if (uVar8 == 0) goto LAB_1001eb40c;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar11 << 6;
        uVar7 = *(undefined8 *)(*(long *)(original + 0x38) + uVar10 * 8);
        puVar3 = (undefined8 *)(*(long *)(original + 0x30) + uVar10 * 0x10);
        uVar12 = *puVar3;
        puVar4 = (undefined8 *)(*(long *)(p_Var6 + 0x30) + uVar10 * 0x10);
        puVar4[1] = puVar3[1];
        *puVar4 = uVar12;
        *(undefined8 *)(*(long *)(p_Var6 + 0x38) + uVar10 * 8) = uVar7;
        _swift_retain();
        if (uVar8 != 0) break;
LAB_1001eb40c:
        do {
          lVar2 = lVar11 + 1;
          if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1001eb490);
            (*pcVar5)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_1001eb468;
          uVar8 = *(ulong *)(p_Var1 + lVar2 * 8);
          lVar11 = lVar11 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar11 = lVar2;
      }
    } while( true );
  }
LAB_1001eb468:
  _swift_release(original);
  *unaff_x20 = (long)p_Var6;
  return;
}



/* Address: 0x1001eb490 | FUN_1001eb490 */

void FUN_1001eb490(undefined *param_1,bool param_2)

{
  __uint64 *p_Var1;
  __uint64 _Var2;
  undefined *puVar3;
  bool bVar4;
  code *pcVar5;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var6;
  Hasher HVar7;
  ulong uVar8;
  Hasher capacity;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *unaff_x20;
  ulong uVar14;
  __RawDictionaryStorage *p_Var15;
  __RawDictionaryStorage *original;
  undefined8 uVar16;
  long lVar17;
  
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity.unknown = *(undefined **)(original + 0x18);
  if ((long)*(undefined **)(original + 0x18) <= (long)param_1) {
    capacity.unknown = param_1;
  }
  this = (_DictionaryStorage *)&DAT_100fb4fa0;
  FUN_1000037f0(&DAT_100fb4fa0,&DAT_100c33250);
  p_Var6 = original;
  Swift::_DictionaryStorage::_resize(this,original,(__int64)capacity.unknown,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_1001eb6f8:
    _swift_release(original);
    *unaff_x20 = (long)p_Var6;
    return;
  }
  p_Var15 = original + 0x40;
  uVar12 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar14 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar14 = uVar14 & *(ulong *)p_Var15;
  lVar10 = 0;
  do {
    if (uVar14 == 0) {
      do {
        lVar17 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1001eb728);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar17) {
          if ((param_2 & 1U) != 0) {
            uVar14 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
            if (((byte)original[0x20] & 0x3f) < 6) {
              *(long *)p_Var15 = -1L << (uVar14 & 0x3f);
            }
            else {
              _bzero(p_Var15,uVar14 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(original + 0x10) = 0;
          }
          goto LAB_1001eb6f8;
        }
        uVar14 = *(ulong *)(p_Var15 + lVar17 * 8);
        lVar10 = lVar10 + 1;
      } while (uVar14 == 0);
      uVar9 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar14 = uVar14 - 1 & uVar14;
    }
    else {
      uVar9 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar14 = uVar14 - 1 & uVar14;
      lVar17 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar17 << 6;
    p_Var1 = (__uint64 *)(*(long *)(original + 0x30) + uVar9 * 0x10);
    _Var2 = *p_Var1;
    puVar3 = (undefined *)p_Var1[1];
    uVar16 = *(undefined8 *)(*(long *)(original + 0x38) + uVar9 * 8);
    if ((param_2 & 1U) == 0) {
      _swift_retain(uVar16);
    }
    Swift::Hasher::init(*(__int64 *)(p_Var6 + 0x28));
    Swift::Hasher::_combine(_Var2,capacity);
    HVar7.unknown = puVar3;
    Swift::Hasher::_combine((__uint64)puVar3,capacity);
    uVar8 = Swift::Hasher::_finalize(HVar7);
    uVar13 = -1L << ((ulong)(byte)p_Var6[0x20] & 0x3f);
    uVar8 = uVar8 & (uVar13 ^ 0xffffffffffffffff);
    uVar11 = uVar8 >> 6;
    uVar9 = -1L << (uVar8 & 0x3f) & (*(ulong *)(p_Var6 + uVar11 * 8 + 0x40) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar13 >> 6;
      do {
        uVar8 = uVar11 + 1;
        if ((uVar8 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1001eb72c);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar8 != uVar9) {
          uVar11 = uVar8;
        }
        bVar4 = (bool)(uVar8 == uVar9 | bVar4);
      } while (*(ulong *)(p_Var6 + uVar11 * 8 + 0x40) == 0xffffffffffffffff);
      uVar9 = ~*(ulong *)(p_Var6 + uVar11 * 8 + 0x40);
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
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar8 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var6 + uVar11 + 0x40) = 1L << (uVar9 & 0x3f) | *(ulong *)(p_Var6 + uVar11 + 0x40);
    p_Var1 = (__uint64 *)(*(long *)(p_Var6 + 0x30) + uVar9 * 0x10);
    *p_Var1 = _Var2;
    p_Var1[1] = (__uint64)puVar3;
    *(undefined8 *)(*(long *)(p_Var6 + 0x38) + uVar9 * 8) = uVar16;
    *(long *)(p_Var6 + 0x10) = *(long *)(p_Var6 + 0x10) + 1;
    lVar10 = lVar17;
  } while( true );
}



/* Address: 0x1001eb72c | FUN_1001eb72c */

void FUN_1001eb72c(Bucket param_1,long param_2)

{
  _HashTable _Var1;
  __uint64 *p_Var2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  __uint64 _Var5;
  code *pcVar6;
  Bucket BVar7;
  Hasher HVar8;
  ulong uVar9;
  _HashTable _Var10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  
  _Var1.unknown = (undefined *)(param_2 + 0x40);
  uVar11 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar12 = param_1.offset + 1U & (uVar11 ^ 0xffffffffffffffff);
  if ((*(ulong *)(_Var1.unknown + (uVar12 >> 6) * 8) >> (uVar12 & 0x3f) & 1) != 0) {
    uVar11 = ~uVar11;
    _Var10.unknown = _Var1.unknown;
    BVar7 = Swift::_HashTable::previousHole(param_1,_Var1);
    uVar13 = BVar7.offset + 1U & uVar11;
    do {
      p_Var2 = (__uint64 *)(*(long *)(param_2 + 0x30) + uVar12 * 0x10);
      _Var5 = *p_Var2;
      HVar8.unknown = (undefined *)p_Var2[1];
      Swift::Hasher::init(*(__int64 *)(param_2 + 0x28));
      Swift::Hasher::_combine(_Var5,(Hasher)_Var10.unknown);
      Swift::Hasher::_combine((__uint64)HVar8.unknown,(Hasher)_Var10.unknown);
      uVar9 = Swift::Hasher::_finalize(HVar8);
      uVar9 = uVar9 & uVar11;
      if (param_1.offset < (long)uVar13) {
        if (uVar9 < uVar13) {
LAB_1001eb814:
          if (param_1.offset < (long)uVar9) goto LAB_1001eb7a8;
        }
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x30) + param_1.offset * 0x10);
        puVar4 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar12 * 0x10);
        if ((param_1.offset < (long)uVar12) || (puVar4 + 2 <= puVar3 || param_1.offset != uVar12)) {
          uVar14 = *puVar4;
          puVar3[1] = puVar4[1];
          *puVar3 = uVar14;
        }
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x38) + param_1.offset * 8);
        puVar4 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar12 * 8);
        if (((param_1.offset < (long)uVar12) || (puVar4 + 1 <= puVar3)) ||
           (param_1.offset != uVar12)) {
          *puVar3 = *puVar4;
          param_1.offset = uVar12;
        }
      }
      else if (uVar13 <= uVar9) goto LAB_1001eb814;
LAB_1001eb7a8:
      uVar12 = uVar12 + 1 & uVar11;
    } while ((*(ulong *)(_Var1.unknown + (uVar12 >> 6) * 8) >> (uVar12 & 0x3f) & 1) != 0);
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
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1001eb8d0);
  (*pcVar6)();
}



/* Address: 0x1001eb8d0 | FUN_1001eb8d0 */

void FUN_1001eb8d0(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  puVar6 = (undefined8 *)(unaff_x20 + 0x28);
  *puVar6 = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_3;
  *(undefined8 *)(unaff_x20 + 0x18) = param_4;
  lVar2 = DAT_100fb56d0;
  _swift_retain(param_4);
  if (lVar2 != -1) {
    _swift_once(&DAT_100fb56d0,FUN_1001eb0d4);
  }
  lVar2 = DAT_100fb56d8;
  _os_unfair_lock_lock(DAT_100fb56d8 + 0x14);
  uVar1 = *(uint *)(lVar2 + 0x10) + 1;
  if (0xfffffffe < *(uint *)(lVar2 + 0x10)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1001eb9e0);
    (*pcVar3)();
  }
  *(uint *)(lVar2 + 0x10) = uVar1;
  _os_unfair_lock_unlock(lVar2 + 0x14);
  *(uint *)(unaff_x20 + 0x20) = uVar1;
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1001eb9e4);
    (*pcVar3)();
  }
  if (param_1 >> 0x20 == 0) {
    uVar4 = param_1;
    FUN_1001e7d58(param_1,param_2);
    uVar5 = uVar4;
    _GetEventDispatcherTarget();
    _swift_beginAccess(puVar6,auStack_58,0x21,0);
    _RegisterEventHotKey(param_1,uVar4,(ulong)uVar1 << 0x20 | 1,uVar5,0,puVar6);
    _swift_endAccess(auStack_58);
    *(int *)(unaff_x20 + 0x24) = (int)param_1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1001eb9e8);
  (*pcVar3)();
}



/* Address: 0x1001eb9e8 | FUN_1001eb9e8 */

void FUN_1001eb9e8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb5550 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c336b4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c336b4,&DAT_100ebf020);
  DAT_100fb5550 = pTVar1;
  return;
}



/* Address: 0x1001eba28 | FUN_1001eba28 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1001eba28(void)

{
  return ZEXT816(0x100fb55a0);
}



/* Address: 0x1001eba48 | FUN_1001eba48 */

void FUN_1001eba48(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  return;
}



/* Address: 0x1001eba5c | FUN_1001eba5c */

int FUN_1001eba5c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 5) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)(param_1 + 1) ^ 0xff;
  if (*(byte *)(param_1 + 1) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x1001ebaa4 | FUN_1001ebaa4 */

void FUN_1001ebaa4(int *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xff) {
    if (0xfe < param_3) {
      *(undefined1 *)((long)param_1 + 5) = 0;
    }
    if (param_2 != 0) {
      *(char *)(param_1 + 1) = -(char)param_2;
      return;
    }
  }
  else {
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = param_2 - 0xff;
    if (0xfe < param_3) {
      *(undefined1 *)((long)param_1 + 5) = 1;
    }
  }
  return;
}



/* Address: 0x1001ebae8 | FUN_1001ebae8 */

undefined1 FUN_1001ebae8(long param_1)

{
  return *(undefined1 *)(param_1 + 4);
}



/* Address: 0x1001ebaf0 | FUN_1001ebaf0 */

void FUN_1001ebaf0(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 4) = param_2;
  return;
}



/* Address: 0x1001ebaf8 | FUN_1001ebaf8 */

undefined1  [16] FUN_1001ebaf8(void)

{
  return ZEXT816(0x100ebf020);
}



/* Address: 0x1001ebb08 | thunk_FUN_1001eb9e8 */

void thunk_FUN_1001eb9e8(void)

{
  FUN_1001eb9e8();
  return;
}



/* Address: 0x1001ebb0c | thunk_FUN_10019b694 */

void thunk_FUN_10019b694(void)

{
  thunk_FUN_10019b694();
  return;
}



/* Address: 0x1001ebb10 | FUN_1001ebb10 */

void FUN_1001ebb10(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1001ebb34 | FUN_1001ebb34 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_1001ebb34(void)

{
  undefined *puVar1;
  
  if (DAT_100fb5740 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___OS_dispatch_queue;
  _swift_getObjCClassMetadata();
  DAT_100fb5740 = puVar1;
  return;
}



/* Address: 0x1001ebb78 | FUN_1001ebb78 */

void FUN_1001ebb78(long param_1,long param_2)

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



/* Address: 0x1001ebb8c | FUN_1001ebb8c */

void FUN_1001ebb8c(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x1001ebb94 | FUN_1001ebb94 */

void FUN_1001ebb94(void)

{
  DispatchWorkItemFlags DVar1;
  undefined *puVar2;
  
  if (DAT_100fb5748 != (undefined *)0x0) {
    return;
  }
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  puVar2 = PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680;
  _swift_getWitnessTable
            (PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680,
             DVar1.unknown);
  DAT_100fb5748 = puVar2;
  return;
}



/* Address: 0x1001ebbd8 | FUN_1001ebbd8 */

void FUN_1001ebbd8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fb5758 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb5750;
  FUN_100005c24(&DAT_100fb5750,&DAT_100c33750);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530,puVar1);
  DAT_100fb5758 = puVar2;
  return;
}



/* Address: 0x1001ebc28 | thunk_FUN_1001ebb10 */

void thunk_FUN_1001ebb10(void)

{
  FUN_1001ebb10();
  return;
}



/* Address: 0x1001ebc2c | FUN_1001ebc2c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1001ebc2c(long param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  uint7 uVar2;
  ulong uVar3;
  byte bVar4;
  
  uVar2 = CONCAT16(~-(lRam0000000100fb57a0 == param_1),
                   (uint6)CONCAT14(~-(_DAT_100fb5798 == param_1),
                                   (uint)CONCAT12(~-(lRam0000000100fb5790 == param_1),
                                                  (ushort)(byte)~-(_DAT_100fb5788 == param_1)))) &
          CONCAT16(~-(lRam0000000100fb5820 == param_1),
                   (uint6)CONCAT14(~-(_DAT_100fb5818 == param_1),
                                   (uint)CONCAT12(~-(lRam0000000100fb5810 == param_1),
                                                  (ushort)(byte)~-(_DAT_100fb5808 == param_1))));
  auVar1[1] = -((char)((char)(uVar2 >> 0x10) << 7) < '\0');
  auVar1[0] = -((char)((char)uVar2 << 7) < '\0');
  auVar1[2] = -((char)((char)(uVar2 >> 0x20) << 7) < '\0');
  auVar1[3] = -((char)((char)(uVar2 >> 0x30) << 7) < '\0');
  auVar1[4] = -((char)(~-(_DAT_100fb57a8 == param_1) << 7) < '\0');
  auVar1[5] = -((char)(~-(lRam0000000100fb57b0 == param_1) << 7) < '\0');
  auVar1[6] = -((char)(~-(_DAT_100fb57b8 == param_1) << 7) < '\0');
  auVar1[7] = -((char)(~-(lRam0000000100fb57c0 == param_1) << 7) < '\0');
  auVar1[8] = -((char)(~-(_DAT_100fb57c8 == param_1) << 7) < '\0');
  auVar1[9] = -((char)(~-(lRam0000000100fb57d0 == param_1) << 7) < '\0');
  auVar1[10] = -((char)(~-(_DAT_100fb57d8 == param_1) << 7) < '\0');
  auVar1[0xb] = -((char)(~-(lRam0000000100fb57e0 == param_1) << 7) < '\0');
  auVar1[0xc] = -((char)(~-(_DAT_100fb57e8 == param_1) << 7) < '\0');
  auVar1[0xd] = -((char)(~-(lRam0000000100fb57f0 == param_1) << 7) < '\0');
  auVar1[0xe] = -((char)(~-(_DAT_100fb57f8 == param_1) << 7) < '\0');
  auVar1[0xf] = -((char)(~-(lRam0000000100fb5800 == param_1) << 7) < '\0');
  bVar4 = NEON_uminv(auVar1,1);
  uVar3 = 1;
  if (((bVar4 & 1) != 0) && ((param_2 & 0x140000) == 0)) {
    uVar3 = param_2 >> 0x13 & 1;
  }
  return uVar3;
}



/* Address: 0x1001ebce4 | FUN_1001ebce4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1001ebce4(undefined *param_1,undefined8 param_2)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  LocalizedStringResource LVar4;
  ID IVar5;
  NSArray *pNVar6;
  undefined *puVar7;
  String *pSVar8;
  long extraout_x8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  String SVar13;
  undefined1 auStack_80 [8];
  long local_78;
  NSArray *local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  LVar4 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar4.unknown + -8) + 0x40));
  local_70 = (NSArray *)0x0;
  iVar3 = (int)&local_70;
  _CopySymbolicHotKeys();
  if (((iVar3 == 0) && (local_70 != (NSArray *)0x0)) &&
     (pNVar6 = local_70, _swift_dynamicCastObjCClass(local_70,&_OBJC_CLASS___NSArray),
     pNVar6 != (NSArray *)0x0)) {
    local_78 = 0;
    FUN_1000037f0(&DAT_100fb5828,&DAT_100c33760);
    (extension_Foundation)::Swift::Array<undefined>::__conditionallyBridgeFromObjectiveC(pNVar6);
    lVar1 = local_78;
    if (local_78 != 0) {
      uVar11 = *(ulong *)(local_78 + 0x10);
      uVar9 = 0;
      do {
        if (uVar11 == uVar9) {
          _swift_bridgeObjectRelease(lVar1);
          goto LAB_1001ebd60;
        }
        if (*(ulong *)(lVar1 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1001ebefc);
          (*pcVar2)();
        }
        uVar10 = *(undefined8 *)(lVar1 + uVar9 * 8 + 0x20);
        _swift_bridgeObjectRetain(uVar10);
        puVar7 = param_1;
        FUN_1001ebf04(param_1,param_2,uVar10);
        _swift_bridgeObjectRelease(uVar10);
        uVar9 = uVar9 + 1;
      } while (((ulong)puVar7 & 1) == 0);
      FUN_1001e46d4(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      SVar13 = (extension_Foundation)::Swift::String::init
                         ((LocalizedStringResource)
                          (auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)));
      pSVar8 = (String *)SVar13.str;
      FUN_1001ec8c4();
      param_1 = &DAT_100ebf170;
      _swift_allocError(&DAT_100ebf170,pSVar8,0,0);
      *pSVar8 = SVar13;
      _swift_bridgeObjectRelease(lVar1);
      param_2 = 1;
      goto LAB_1001ebda0;
    }
  }
LAB_1001ebd60:
  if (*(ID *)PTR__NSApp_100ea8fa0 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1001ebf04);
    (*pcVar2)();
  }
  IVar5 = objc_stub::mainMenu(*(ID *)PTR__NSApp_100ea8fa0);
  FUN_1001ec200(param_1,param_2,IVar5);
LAB_1001ebda0:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  auVar12._8_8_ = param_2;
  auVar12._0_8_ = param_1;
  return auVar12;
}



/* Address: 0x1001ebf04 | FUN_1001ebf04 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Type propagation algorithm not settling */

ID FUN_1001ebf04(ulong param_1,undefined8 param_2,long param_3)

{
  ID self;
  long lVar1;
  undefined8 uVar2;
  ID *pIVar3;
  ID IVar4;
  ulong uVar5;
  ID self_00;
  ID local_78;
  undefined1 auStack_70 [32];
  
  if (*(long *)(param_3 + 0x10) == 0) {
    IVar4 = 0;
LAB_1001ec074:
    self_00 = 0;
  }
  else {
    _swift_bridgeObjectRetain(param_3);
    uVar5 = 0;
    lVar1 = -0x2fffffffffffffeb;
    FUN_1001e9100(0xd000000000000015);
    if ((uVar5 & 1) == 0) {
      _swift_bridgeObjectRelease(param_3);
      IVar4 = 0;
      lVar1 = *(long *)(param_3 + 0x10);
    }
    else {
      FUN_10000cbfc(*(long *)(param_3 + 0x38) + lVar1 * 0x20,auStack_70);
      _swift_bridgeObjectRelease(param_3);
      uVar2 = 0;
      FUN_10000ec2c(0,&DAT_100fb58d0,&PTR__OBJC_CLASS___NSNumber_100f8d750);
      pIVar3 = &local_78;
      _swift_dynamicCast(pIVar3,auStack_70,PTR___type_metadata_for_Any_100eae0c0 + 8,uVar2,6);
      IVar4 = local_78;
      if ((int)pIVar3 == 0) {
        IVar4 = 0;
      }
      lVar1 = *(long *)(param_3 + 0x10);
    }
    if (lVar1 == 0) goto LAB_1001ec074;
    _swift_bridgeObjectRetain(param_3);
    lVar1 = -0x2fffffffffffffe6;
    uVar5 = 0;
    FUN_1001e9100(0xd00000000000001a);
    if ((uVar5 & 1) == 0) {
      _swift_bridgeObjectRelease(param_3);
      self_00 = 0;
      lVar1 = *(long *)(param_3 + 0x10);
    }
    else {
      FUN_10000cbfc(*(long *)(param_3 + 0x38) + lVar1 * 0x20,auStack_70);
      _swift_bridgeObjectRelease(param_3);
      uVar2 = 0;
      FUN_10000ec2c(0,&DAT_100fb58d0,&PTR__OBJC_CLASS___NSNumber_100f8d750);
      pIVar3 = &local_78;
      _swift_dynamicCast(pIVar3,auStack_70,PTR___type_metadata_for_Any_100eae0c0 + 8,uVar2,6);
      self_00 = local_78;
      if ((int)pIVar3 == 0) {
        self_00 = 0;
      }
      lVar1 = *(long *)(param_3 + 0x10);
    }
    if (lVar1 != 0) {
      _swift_bridgeObjectRetain(param_3);
      lVar1 = -0x2fffffffffffffe8;
      uVar5 = 0;
      FUN_1001e9100(0xd000000000000018);
      if ((uVar5 & 1) != 0) {
        FUN_10000cbfc(*(long *)(param_3 + 0x38) + lVar1 * 0x20,auStack_70);
        _swift_bridgeObjectRelease(param_3);
        uVar2 = 0;
        FUN_10000ec2c(0,&DAT_100fb58d0,&PTR__OBJC_CLASS___NSNumber_100f8d750);
        pIVar3 = &local_78;
        _swift_dynamicCast(pIVar3,auStack_70,PTR___type_metadata_for_Any_100eae0c0 + 8,uVar2,6);
        self = local_78;
        if ((int)pIVar3 == 0) {
          self = 0;
        }
        goto joined_r0x0001001ec07c;
      }
      _swift_bridgeObjectRelease(param_3);
    }
  }
  self = 0;
joined_r0x0001001ec07c:
  if (((IVar4 != 0) && (IVar4 = objc_stub::integerValue(IVar4), IVar4 == param_1)) && (self_00 != 0)
     ) {
    IVar4 = objc_stub::unsignedIntegerValue(self_00);
    FUN_1001e7d58(param_1,param_2);
    if (IVar4 == (param_1 & 0xffffffff)) {
      if (self != 0) {
        IVar4 = objc_stub::boolValue(self);
        return IVar4;
      }
      return 0;
    }
  }
  return 0;
}



/* Address: 0x1001ec200 | FUN_1001ec200 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_1001ec200(undefined *param_1,ulong param_2,ID param_3)

{
  _CocoaArrayWrapper _Var1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  LocalizedStringResource LVar5;
  _ArrayBuffer _Var6;
  ulong self;
  ID IVar7;
  undefined *puVar8;
  _StringGuts _Var9;
  undefined *puVar10;
  _StringGuts _Var11;
  __int64 _Var12;
  String *pSVar13;
  _StringGuts _Var15;
  undefined8 uVar16;
  long extraout_x8;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar25;
  String SVar26;
  undefined1 auVar28 [16];
  LocalizedStringResource local_c0;
  ID local_b8;
  long local_b0;
  ulong local_a8;
  ulong local_a0;
  ulong local_98;
  String SVar24;
  String SVar27;
  _StringGuts _Var14;
  
  LVar5 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar5.unknown + -8) + 0x40));
  local_c0.unknown = (undefined *)((long)&local_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  if (param_3 != 0) {
    local_b8 = param_3;
    _Var6.unknown = (undefined *)objc_stub::itemArray(param_3);
    FUN_10000ec2c(0,&DAT_100fb58d8,&PTR__OBJC_CLASS___NSMenuItem_100f8d9f8);
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
    if ((ulong)_Var6.unknown >> 0x3e == 0) {
      lVar18 = *(long *)(((ulong)_Var6.unknown & 0xffffffffffffff8) + 0x10);
    }
    else {
      _Var1.unknown = _Var6.unknown & 0xffffffffffffff8;
      if ((undefined *)0x7fffffffffffffff < _Var6.unknown) {
        _Var1.unknown = _Var6.unknown;
      }
      lVar18 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    }
    if (lVar18 != 0) {
      uVar19 = 0;
      local_98 = (ulong)_Var6.unknown & 0xc000000000000001;
      local_a0 = (ulong)_Var6.unknown & 0xffffffffffffff8;
      local_b0 = lVar18;
      local_a8 = param_2;
      do {
        if (local_98 == 0) {
          if (*(ulong *)(local_a0 + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1001ec870);
            (*pcVar3)();
          }
          self = *(ulong *)(_Var6.unknown + uVar19 * 8 + 0x20);
        }
        else {
          self = uVar19;
          Swift::_ArrayBuffer::__getElementSlowPath(uVar19,_Var6);
        }
        lVar18 = uVar19 + 1;
        if (SCARRY8(uVar19,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1001ec86c);
          (*pcVar3)();
        }
        IVar7 = objc_stub::submenu(self);
        puVar8 = param_1;
        FUN_1001ec200(param_1,param_2,IVar7);
        if (((uint)param_2 & 0xff) == 1) {
          _swift_bridgeObjectRelease(_Var6.unknown);
          uVar16 = 1;
          goto LAB_1001ec8a0;
        }
        IVar7 = objc_stub::keyEquivalentModifierMask(self);
        objc_stub::keyEquivalent(self);
        SVar20 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        SVar21 = Swift::String::lowercased(SVar20);
        _Var14.unknown = SVar21.bridgeObject;
        _Var11.unknown = _Var14.unknown;
        _swift_bridgeObjectRelease(SVar20.bridgeObject);
        _Var9.unknown = param_1;
        FUN_1001e7e50();
        SVar20.bridgeObject = _Var11.unknown;
        SVar20.str = _Var9.unknown;
        puVar8 = &DAT_100fb5038;
        FUN_1000037f0(&DAT_100fb5038,&DAT_100c33830);
        puVar10 = puVar8;
        _swift_allocObject();
        *(undefined8 *)(puVar10 + 0x18) = 2;
        *(undefined8 *)(puVar10 + 0x10) = 1;
        *(undefined **)(puVar10 + 0x38) = PTR___type_metadata_for_Swift_Int_100eac6f8;
        *(undefined **)(puVar10 + 0x40) =
             PTR___protocol_witness_table_for_Swift_Int___Swift_CVarArg_in_Swift_100eac760;
        *(undefined8 *)(puVar10 + 0x20) = 0x21a9;
        SVar22 = (extension_Foundation)::Swift::String::_init();
        if (SVar22 == SVar20) {
          _swift_bridgeObjectRelease(_Var11.unknown);
          _Var11.unknown = SVar22.bridgeObject;
LAB_1001ec4b0:
          _swift_bridgeObjectRelease(_Var11.unknown);
          SVar23.bridgeObject = (void *)0xe100000000000000;
          SVar23.str = (char *)0xd;
        }
        else {
          bVar4 = Swift::_stringCompareWithSmolCheck
                            (_Var9,_Var11,(_StringComparisonResult)(__int8)SVar22.str);
          _swift_bridgeObjectRelease(SVar22.bridgeObject);
          if (bVar4) goto LAB_1001ec4b0;
          SVar22.bridgeObject = _Var11.unknown;
          SVar22.str = _Var9.unknown;
          _Var15.unknown = _Var11.unknown;
          _Var12 = Swift::String::get_count(SVar22);
          if (_Var12 < 2) {
            SVar24.bridgeObject = _Var11.unknown;
            SVar24.str = _Var9.unknown;
            SVar23 = Swift::String::lowercased(SVar24);
            _swift_bridgeObjectRelease(_Var11.unknown);
          }
          else {
            _swift_bridgeObjectRelease(_Var11.unknown);
            if (DAT_100fb5040 != -1) {
              _Var15.unknown = (undefined *)0x0;
              _swift_once(&DAT_100fb5040);
            }
            lVar2 = DAT_100fb5048;
            if ((*(long *)(DAT_100fb5048 + 0x10) == 0) ||
               (puVar10 = param_1, FUN_100071340(), ((ulong)_Var15.unknown & 1) == 0)) {
              SVar23 = (String)(ZEXT816(0xe000000000000000) << 0x40);
            }
            else {
              pSVar13 = (String *)(*(long *)(lVar2 + 0x38) + (long)puVar10 * 0x10);
              SVar23 = *pSVar13;
              _swift_bridgeObjectRetain(pSVar13->bridgeObject);
            }
          }
        }
        if (SVar21 == SVar23) {
          _swift_bridgeObjectRelease(_Var14.unknown);
          _swift_bridgeObjectRelease(SVar23.bridgeObject);
LAB_1001ec520:
          param_2 = local_a8;
          objc_stub::keyEquivalent(self);
          SVar20 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          _Var14.unknown = SVar20.bridgeObject;
          _Var9.unknown = param_1;
          _Var11.unknown = _Var14.unknown;
          FUN_1001e7e50();
          SVar21.bridgeObject = _Var11.unknown;
          SVar21.str = _Var9.unknown;
          _swift_allocObject(puVar8,0x48,7);
          *(undefined8 *)(puVar8 + 0x18) = 2;
          *(undefined8 *)(puVar8 + 0x10) = 1;
          *(undefined **)(puVar8 + 0x38) = PTR___type_metadata_for_Swift_Int_100eac6f8;
          *(undefined **)(puVar8 + 0x40) =
               PTR___protocol_witness_table_for_Swift_Int___Swift_CVarArg_in_Swift_100eac760;
          *(undefined8 *)(puVar8 + 0x20) = 0x21a9;
          SVar22 = (extension_Foundation)::Swift::String::_init();
          if (SVar22 == SVar21) {
            _swift_bridgeObjectRelease(_Var11.unknown);
            _Var11.unknown = SVar22.bridgeObject;
LAB_1001ec5f0:
            _swift_bridgeObjectRelease(_Var11.unknown);
            SVar26.bridgeObject = (void *)0xe100000000000000;
            SVar26.str = (char *)0xd;
          }
          else {
            bVar4 = Swift::_stringCompareWithSmolCheck
                              (_Var9,_Var11,(_StringComparisonResult)(__int8)SVar22.str);
            _swift_bridgeObjectRelease(SVar22.bridgeObject);
            if (bVar4) goto LAB_1001ec5f0;
            SVar25.bridgeObject = _Var11.unknown;
            SVar25.str = _Var9.unknown;
            _Var15.unknown = _Var11.unknown;
            _Var12 = Swift::String::get_count(SVar25);
            if (_Var12 < 2) {
              SVar27.bridgeObject = _Var11.unknown;
              SVar27.str = _Var9.unknown;
              SVar26 = Swift::String::lowercased(SVar27);
              _swift_bridgeObjectRelease(_Var11.unknown);
            }
            else {
              _swift_bridgeObjectRelease(_Var11.unknown);
              if (DAT_100fb5040 != -1) {
                _Var15.unknown = (undefined *)0x0;
                _swift_once(&DAT_100fb5040);
              }
              lVar2 = DAT_100fb5048;
              if ((*(long *)(DAT_100fb5048 + 0x10) == 0) ||
                 (puVar8 = param_1, FUN_100071340(), ((ulong)_Var15.unknown & 1) == 0)) {
                SVar26 = (String)(ZEXT816(0xe000000000000000) << 0x40);
              }
              else {
                pSVar13 = (String *)(*(long *)(lVar2 + 0x38) + (long)puVar8 * 0x10);
                SVar26 = *pSVar13;
                _swift_bridgeObjectRetain(pSVar13->bridgeObject);
              }
            }
          }
          uVar17 = IVar7 & 0x1e0000;
          if (SVar20 == SVar26) {
            _swift_bridgeObjectRelease(_Var14.unknown);
            _swift_bridgeObjectRelease(SVar26.bridgeObject);
          }
          else {
            bVar4 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)SVar20.str,_Var14,
                               (_StringComparisonResult)(__int8)SVar26.str);
            _swift_bridgeObjectRelease(_Var14.unknown);
            _swift_bridgeObjectRelease(SVar26.bridgeObject);
            if (!bVar4) {
              uVar17 = IVar7 & 0x1c0000 | 0x20000;
            }
          }
          if (uVar17 == param_2) {
            objc_stub::title(self);
            SVar20 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
            LVar5.unknown = local_c0.unknown;
            thunk_FUN_1001e7174(local_c0.unknown,SVar20.str,SVar20.bridgeObject);
            _swift_bridgeObjectRelease(SVar20.bridgeObject);
            SVar20 = (extension_Foundation)::Swift::String::init(LVar5);
            pSVar13 = (String *)SVar20.str;
            FUN_1001ec8c4();
            puVar8 = &DAT_100ebf170;
            _swift_allocError(&DAT_100ebf170,pSVar13,0,0);
            *pSVar13 = SVar20;
            _swift_bridgeObjectRelease(_Var6.unknown);
            uVar16 = 1;
            goto LAB_1001ec8a0;
          }
        }
        else {
          bVar4 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)SVar21.str,_Var14,
                             (_StringComparisonResult)(__int8)SVar23.str);
          _swift_bridgeObjectRelease(_Var14.unknown);
          _swift_bridgeObjectRelease(SVar23.bridgeObject);
          param_2 = local_a8;
          if (bVar4) goto LAB_1001ec520;
        }
        uVar19 = uVar19 + 1;
      } while (lVar18 != local_b0);
    }
    _swift_bridgeObjectRelease(_Var6.unknown);
  }
  puVar8 = (undefined *)0x0;
  uVar16 = 0;
LAB_1001ec8a0:
  auVar28._8_8_ = uVar16;
  auVar28._0_8_ = puVar8;
  return auVar28;
}



/* Address: 0x1001ec8c4 | FUN_1001ec8c4 */

void FUN_1001ec8c4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb5830 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c337f0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c337f0,&DAT_100ebf170);
  DAT_100fb5830 = pTVar1;
  return;
}



/* Address: 0x1001ec904 | FUN_1001ec904 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1001ec904(void)

{
  return ZEXT816(0x100fb5878);
}



/* Address: 0x1001ec924 | FUN_1001ec924 */

int FUN_1001ec924(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[4] != '\0')) {
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



/* Address: 0x1001ec980 | FUN_1001ec980 */

void FUN_1001ec980(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x7fffffff) {
    if (0x7ffffffe < param_3) {
      *(undefined1 *)(param_1 + 2) = 0;
    }
    if (param_2 != 0) {
      param_1[1] = (ulong)param_2;
      return;
    }
  }
  else {
    *param_1 = (ulong)(param_2 + 0x80000001);
    param_1[1] = 0;
    if (0x7ffffffe < param_3) {
      *(undefined1 *)(param_1 + 2) = 1;
    }
  }
  return;
}



/* Address: 0x1001ec9d0 | FUN_1001ec9d0 */

undefined1  [16] FUN_1001ec9d0(void)

{
  return ZEXT816(0x100ebf170);
}



/* Address: 0x1001ec9e0 | thunk_FUN_1001ec8c4 */

void thunk_FUN_1001ec8c4(void)

{
  FUN_1001ec8c4();
  return;
}



/* Address: 0x1001ec9e4 | FUN_1001ec9e4 */

void FUN_1001ec9e4(void)

{
  return;
}



/* Address: 0x1001ec9ec | FUN_1001ec9ec */

void FUN_1001ec9ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_60 [8];
  undefined8 local_58;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = *(undefined1 *)(param_2 + 4);
  puVar6 = &DAT_100ebf1f0;
  local_58 = uVar1;
  _swift_allocObject(&DAT_100ebf1f0,0x31,7);
  uVar7 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  *(undefined8 *)(puVar6 + 0x18) = param_2[1];
  *(undefined8 *)(puVar6 + 0x10) = uVar7;
  *(undefined8 *)(puVar6 + 0x28) = uVar9;
  *(undefined8 *)(puVar6 + 0x20) = uVar8;
  puVar6[0x30] = *(undefined1 *)(param_2 + 4);
  FUN_1001ecb88(&local_58,auStack_60);
  _swift_retain(uVar3);
  *param_1 = FUN_1001ecb80;
  param_1[1] = puVar6;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = uVar1;
  param_1[4] = uVar3;
  param_1[5] = uVar2;
  param_1[6] = uVar4;
  *(undefined1 *)(param_1 + 7) = uVar5;
  return;
}



/* Address: 0x1001eca94 | FUN_1001eca94 */

void FUN_1001eca94(undefined8 *param_1)

{
  undefined8 uVar1;
  Binding BVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 local_50;
  undefined8 local_48;
  
  uStack_68 = param_1[1];
  local_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  local_50 = *(undefined1 *)(param_1 + 4);
  BVar2.unknown = &DAT_100fb5900;
  FUN_1000037f0(&DAT_100fb5900,&DAT_100c338a0);
  SwiftUI::Binding::get_wrappedValue(BVar2);
  local_48 = *param_1;
  uVar1 = param_1[1];
  puVar3 = &DAT_100ebf300;
  _swift_allocObject(&DAT_100ebf300,0x31,7);
  uVar4 = *param_1;
  uVar6 = param_1[3];
  uVar5 = param_1[2];
  *(undefined8 *)(puVar3 + 0x18) = param_1[1];
  *(undefined8 *)(puVar3 + 0x10) = uVar4;
  *(undefined8 *)(puVar3 + 0x28) = uVar6;
  *(undefined8 *)(puVar3 + 0x20) = uVar5;
  puVar3[0x30] = *(undefined1 *)(param_1 + 4);
  FUN_1001f0df0();
  _swift_allocObject();
  FUN_1001ecb88(&local_48,auStack_90);
  _swift_retain(uVar1);
  FUN_1001f06f8(local_88,uStack_80,local_78,FUN_1001efac4,puVar3);
  return;
}



/* Address: 0x1001ecb7c | thunk_FUN_1001efa98 */

void thunk_FUN_1001efa98(void)

{
  FUN_1001efa98();
  return;
}



/* Address: 0x1001ecb80 | FUN_1001ecb80 */

void FUN_1001ecb80(void)

{
  long unaff_x20;
  
  FUN_1001eca94(unaff_x20 + 0x10);
  return;
}



/* Address: 0x1001ecb88 | FUN_1001ecb88 */

undefined8 FUN_1001ecb88(undefined8 param_1,undefined8 param_2)

{
  (**(code **)(*(long *)(PTR___type_metadata_for_SwiftUI_Transaction_100eaa660 + -8) + 0x10))
            (param_2,param_1);
  return param_2;
}



/* Address: 0x1001ecbc4 | FUN_1001ecbc4 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001001ecfd4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1001ecbc4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  char *pcVar4;
  Alignment AVar5;
  undefined *puVar6;
  undefined *puVar7;
  StateObject SVar8;
  Binding BVar9;
  undefined *puVar10;
  undefined *puVar11;
  StateObject SVar12;
  Text TVar13;
  String *pSVar14;
  Binding<bool> isPresented;
  long extraout_x8;
  long extraout_x8_00;
  long lVar15;
  long extraout_x8_01;
  undefined8 *puVar16;
  undefined8 *unaff_x20;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  String SVar21;
  undefined8 auStack_180 [6];
  undefined *local_150 [5];
  StateObject local_128;
  undefined8 local_120;
  long local_118;
  undefined *local_110;
  undefined *local_108;
  char *local_100;
  long local_f8;
  char *local_f0;
  void *pvStack_e8;
  undefined1 in_stack_ffffffffffffff20;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c0 [8];
  long lStack_b8;
  undefined1 auStack_a8 [8];
  String local_a0;
  undefined *local_90;
  undefined *puStack_88;
  undefined1 local_80;
  char *local_70 [2];
  
  pcVar4 = &DAT_100fb58e0;
  local_120 = param_1;
  FUN_1000037f0(&DAT_100fb58e0,&DAT_100c33840);
  local_100 = pcVar4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(pcVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar16 = (undefined8 *)((long)local_150 + -extraout_x8);
  AVar5.unknown = &DAT_100fb58e8;
  puVar6 = &DAT_100c33848;
  FUN_1000037f0();
  local_118 = *(long *)(AVar5.unknown + -8);
  local_110 = AVar5.unknown;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_118 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar15 = (long)puVar16 - extraout_x8_00;
  local_f8 = lVar15;
  AVar5 = SwiftUI::Alignment::get_topTrailing(AVar5);
  *puVar16 = AVar5.unknown;
  *(undefined **)((long)local_150 + -extraout_x8 + 8) = puVar6;
  puVar6 = &DAT_100fb58f0;
  FUN_1000037f0(&DAT_100fb58f0,&DAT_100c33850);
  FUN_1001ed1c4((long)puVar16 + (long)*(int *)(puVar6 + 0x2c));
  SVar12.unknown = (undefined *)*unaff_x20;
  uVar1 = unaff_x20[1];
  uVar3 = *(undefined1 *)(unaff_x20 + 2);
  puVar7 = (undefined *)0x0;
  FUN_1001f0df0();
  puVar6 = &DAT_100fb58f8;
  local_108 = puVar7;
  FUN_100003a00(&DAT_100fb58f8,FUN_1001f0df0,&TargetProtocolConformanceDescriptor_100c33cc8);
  SVar8.unknown = SVar12.unknown;
  local_150[1] = puVar6;
  SwiftUI::StateObject::get_wrappedValue(SVar12);
  puVar6 = &DAT_100c33858;
  _swift_getKeyPath(&DAT_100c33858);
  puVar7 = &DAT_100c33880;
  _swift_getKeyPath(&DAT_100c33880);
  Combine::Published::_get_subscript
            ((long)puVar16 + (long)*(int *)(pcVar4 + 0x34),SVar8.unknown,puVar6,puVar7);
  _swift_release(puVar6);
  _swift_release(puVar7);
  _swift_release(SVar8.unknown);
  pcVar4 = ((String *)(unaff_x20 + 3))->str;
  uVar2 = unaff_x20[4];
  local_a0 = *(String *)(unaff_x20 + 3);
  puStack_88 = (undefined *)unaff_x20[6];
  local_90 = (undefined *)unaff_x20[5];
  local_80 = *(undefined1 *)(unaff_x20 + 7);
  BVar9.unknown = &DAT_100fb5900;
  FUN_1000037f0(&DAT_100fb5900,&DAT_100c338a0);
  SwiftUI::Binding::get_wrappedValue(BVar9);
  local_a0.bridgeObject = pvStack_e8;
  local_a0.str = local_f0;
  local_90 = (undefined *)CONCAT71(local_90._1_7_,in_stack_ffffffffffffff20);
  puVar6 = &DAT_100ebf218;
  local_70[0] = pcVar4;
  _swift_allocObject(&DAT_100ebf218,0x49,7);
  uVar18 = *unaff_x20;
  uVar20 = unaff_x20[3];
  uVar19 = unaff_x20[2];
  *(undefined8 *)(puVar6 + 0x18) = unaff_x20[1];
  *(undefined8 *)(puVar6 + 0x10) = uVar18;
  *(undefined8 *)(puVar6 + 0x28) = uVar20;
  *(undefined8 *)(puVar6 + 0x20) = uVar19;
  uVar18 = unaff_x20[4];
  *(undefined8 *)(puVar6 + 0x38) = unaff_x20[5];
  *(undefined8 *)(puVar6 + 0x30) = uVar18;
  uVar18 = *(undefined8 *)((long)unaff_x20 + 0x29);
  *(undefined8 *)(puVar6 + 0x41) = *(undefined8 *)((long)unaff_x20 + 0x31);
  *(undefined8 *)(puVar6 + 0x39) = uVar18;
  _swift_retain(uVar2);
  FUN_1001eebf0(SVar12.unknown,uVar1,uVar3);
  FUN_1001ecb88(local_70,&local_f0);
  puVar7 = &DAT_100fb5908;
  FUN_1000037f0(&DAT_100fb5908,&DAT_100c338a8);
  puVar10 = &DAT_100fb5910;
  FUN_100016eac(&DAT_100fb5910,&DAT_100fb58e0,&DAT_100c33840,
                PTR_SwiftUI__SwiftUI__IDView<undefined,undefined>_>SwiftUI__View_100eab8c8);
  puVar11 = puVar10;
  FUN_1001eebf8();
  local_150[2] = puVar11;
  local_150[3] = puVar10;
  local_150[4] = puVar7;
  (extension_SwiftUI)::SwiftUI::View::_onChange
            (local_f8,&local_a0,0,FUN_1001eebe8,puVar6,local_100,puVar7,puVar10);
  _swift_release(puVar6);
  FUN_100005808(puVar16,&DAT_100fb58e0,&DAT_100c33840);
  puVar10 = local_108;
  local_128.unknown = SVar12.unknown;
  SwiftUI::StateObject::get_wrappedValue(SVar12);
  puVar6 = &DAT_100c338b0;
  _swift_getKeyPath(&DAT_100c338b0);
  puVar7 = &DAT_100c338d8;
  _swift_getKeyPath(&DAT_100c338d8);
  Combine::Published::_get_subscript(&local_a0,SVar12.unknown,puVar6,puVar7);
  _swift_release(SVar12.unknown);
  _swift_release(puVar6);
  _swift_release(puVar7);
  if (local_a0.str == (char *)0x0) {
    SVar21 = (String)(ZEXT816(0xe000000000000000) << 0x40);
  }
  else {
    _swift_getErrorValue(local_a0.str,auStack_a8,local_c0);
    lVar17 = *(long *)(lStack_b8 + -8);
    (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar17 + 0x40));
    puVar7 = (undefined *)(lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
    (**(code **)(lVar17 + 0x10))(puVar7);
    _swift_errorRelease(local_a0.str);
    SVar21 = (extension_Foundation)::Swift::Error::get_localizedDescription();
    (**(code **)(lVar17 + 8))(puVar7,lStack_b8);
  }
  local_a0 = SVar21;
  FUN_1001eed50();
  isPresented.unknown = PTR___type_metadata_for_Swift_String_100eac208;
  TVar13 = SwiftUI::Text::_init(puVar7,PTR___type_metadata_for_Swift_String_100eac208,puVar7);
  SVar12.unknown = local_128.unknown;
  local_150[0] = puVar10;
  SwiftUI::StateObject::get_wrappedValue(local_128);
  puVar6 = &DAT_100c338b0;
  _swift_getKeyPath(&DAT_100c338b0);
  puVar10 = &DAT_100c338d8;
  _swift_getKeyPath(&DAT_100c338d8);
  Combine::Published::_get_subscript(&local_a0,SVar12.unknown,puVar6,puVar10);
  _swift_release(puVar6);
  _swift_release(puVar10);
  _swift_release(SVar12.unknown);
  pcVar4 = local_a0.str;
  if (local_a0.str != (char *)0x0) {
    _swift_errorRelease(local_a0.str);
  }
  local_a0.str._0_1_ = pcVar4 != (char *)0x0;
  SwiftUI::Binding::constant(&local_d8,puVar10,PTR___type_metadata_for_Swift_Bool_100eac570);
  puVar6 = &DAT_100fb5928;
  FUN_1000037f0(&DAT_100fb5928,&DAT_100c338f8);
  local_a0.bridgeObject = local_150[4];
  local_a0.str = local_100;
  local_90 = local_150[3];
  puStack_88 = local_150[2];
  pSVar14 = &local_a0;
  _swift_getOpaqueTypeConformance2
            (pSVar14,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_onChange<A_where_A1:_Swift_Equatable>(of:_A1,initial:_Swift_Bool,_:_(A1,A1)__>_())__>_some>>_100eab5f8
             ,1);
  puVar10 = &DAT_100fb5930;
  FUN_100016eac(&DAT_100fb5930,&DAT_100fb5928,&DAT_100c338f8,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_100eab888);
  *(String **)(lVar15 + -0x18) = pSVar14;
  *(undefined **)(lVar15 + -0x10) = puVar10;
  *(undefined **)(lVar15 + -0x20) = puVar6;
  puVar10 = local_110;
  *(char ***)(lVar15 + -0x30) = &local_f0;
  *(undefined **)(lVar15 + -0x28) = puVar10;
  lVar15 = local_f8;
  puVar6 = local_150[0];
  (extension_SwiftUI)::SwiftUI::View::_alert(TVar13,isPresented);
  _swift_release(uStack_d0);
  _swift_release(local_d8);
  FUN_100016d74(TVar13.unknown,isPresented.unknown,puVar7);
  _swift_bridgeObjectRelease(puVar6);
  (**(code **)(local_118 + 8))(lVar15,puVar10);
  return;
}



/* Address: 0x1001ed1c4 | FUN_1001ed1c4 */

void FUN_1001ed1c4(long param_1,undefined8 *param_2)

{
  StateObject SVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  LocalizedStringResource LVar5;
  undefined *puVar6;
  undefined *puVar7;
  MainActor *pMVar8;
  undefined8 *puVar9;
  UnownedSerialExecutor UVar10;
  UnownedSerialExecutor UVar11;
  StateObject SVar12;
  undefined8 *puVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  void *pvVar16;
  long extraout_x8;
  long extraout_x8_00;
  long lVar17;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar18;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar19;
  long lVar20;
  undefined auStack_130 [8];
  long local_128;
  long local_120;
  undefined *local_118;
  LocalizedStringResource local_110;
  long local_108;
  long local_100;
  undefined *local_f8;
  MainActor *local_f0;
  long local_e8;
  long local_e0;
  undefined *local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  String local_b0;
  undefined *local_a0;
  undefined *puStack_98;
  undefined8 *local_90;
  undefined8 *puStack_88;
  byte local_78;
  
  local_c0 = param_1;
  LVar5 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar5.unknown + -8) + 0x40));
  puVar6 = &DAT_100fb59a8;
  local_110.unknown = auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_1000037f0(&DAT_100fb59a8,&DAT_100c33af0);
  local_120 = *(long *)(puVar6 + -8);
  local_118 = puVar6;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_120 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar17 = (long)(auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  puVar6 = &DAT_100fb59b0;
  local_128 = lVar17;
  FUN_1000037f0(&DAT_100fb59b0,&DAT_100c33af8);
  local_100 = *(long *)(puVar6 + -8);
  local_f8 = puVar6;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_100 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar17 = lVar17 - extraout_x8_01;
  puVar6 = &DAT_100fb59b8;
  local_108 = lVar17;
  FUN_1000037f0(&DAT_100fb59b8,&DAT_100c33b00);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  lVar17 = lVar17 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_c8 = lVar17;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar17 = lVar17 - extraout_x12;
  puVar6 = &DAT_100fb59c0;
  local_d0 = lVar17;
  FUN_1000037f0(&DAT_100fb59c0,&DAT_100c33b08);
  lVar20 = *(long *)(puVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar20 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = lVar17 - extraout_x8_03;
  puVar7 = &DAT_100fb59c8;
  FUN_1000037f0(&DAT_100fb59c8,&DAT_100c33b10);
  local_e8 = *(long *)(puVar7 + -8);
  local_d8 = puVar7;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_e8 + 0x40));
  lVar18 = lVar17 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  local_e0 = lVar18;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_b8 = lVar18 - extraout_x12_00;
  pMVar8 = Swift::MainActor::typeMetadataAccessor();
  puVar7 = PTR_typeMetadataAccessor_100eaec10;
  pMVar8 = Swift::MainActor::get_shared(pMVar8,pMVar8);
  puVar9 = &DAT_100fb59a0;
  FUN_100003a00(&DAT_100fb59a0,puVar7,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_f0 = pMVar8;
  UVar10 = Swift::Actor::get_unownedExecutor();
  UVar11 = UVar10;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar11.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteShortcut/ShortcutRecorderButton.swift",0x2a,1,0xf,UVar10.unknown,puVar9);
  }
  SVar1.unknown = (undefined *)*param_2;
  FUN_1001f0df0(0);
  FUN_100003a00(&DAT_100fb58f8,FUN_1001f0df0,&TargetProtocolConformanceDescriptor_100c33cc8);
  SwiftUI::StateObject::get_wrappedValue(SVar1);
  local_90 = param_2;
  FUN_1000037f0(&DAT_100fb59d0,&DAT_100c33b18);
  FUN_1001ef2c8();
  SwiftUI::Button::_init();
  FUN_100016eac(&DAT_100fb59f0,&DAT_100fb59c0,&DAT_100c33b08,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_100eab888);
  FUN_1001ef3a4();
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle(local_b8);
  (**(code **)(lVar20 + 8))(lVar17,puVar6);
  SVar12.unknown = SVar1.unknown;
  SwiftUI::StateObject::get_wrappedValue(SVar1);
  puVar6 = &DAT_100c33858;
  _swift_getKeyPath(&DAT_100c33858);
  puVar7 = &DAT_100c33880;
  _swift_getKeyPath(&DAT_100c33880);
  Combine::Published::_get_subscript(&local_a0,SVar12.unknown,puVar6,puVar7);
  _swift_release(puVar6);
  _swift_release(puVar7);
  _swift_release(SVar12.unknown);
  lVar17 = local_d0;
  if (0x3f >= local_78) {
    SwiftUI::StateObject::get_wrappedValue(SVar1);
    FUN_1000037f0(&DAT_100fb5a10,&DAT_100c33b38);
    FUN_1001ef49c();
    lVar17 = local_128;
    SwiftUI::Button::_init();
    puVar9 = (undefined8 *)&DAT_100fb5a30;
    FUN_100016eac(&DAT_100fb5a30,&DAT_100fb59a8,&DAT_100c33af0,
                  PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_100eab888);
    puVar13 = puVar9;
    FUN_1001ef534();
    lVar18 = local_108;
    puVar6 = local_118;
    (extension_SwiftUI)::SwiftUI::View::_buttonStyle(local_108);
    (**(code **)(local_120 + 8))(lVar17,puVar6);
    LVar5.unknown = local_110.unknown;
    FUN_1001e43d4(local_110.unknown);
    local_b0 = (extension_Foundation)::Swift::String::init(LVar5);
    pvVar16 = local_b0.bridgeObject;
    local_a0 = puVar6;
    puStack_98 = &DAT_100ebf2c0;
    ppuVar14 = &local_a0;
    local_90 = puVar9;
    puStack_88 = puVar13;
    _swift_getOpaqueTypeConformance2
              (ppuVar14,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_ButtonStyle>(A1)__>_some>>_100eab3d0
               ,1);
    ppuVar15 = ppuVar14;
    FUN_1001eed50();
    lVar17 = local_d0;
    puVar6 = local_f8;
    (extension_SwiftUI)::SwiftUI::View::_help
              (local_d0,&local_b0,local_f8,PTR___type_metadata_for_Swift_String_100eac208,ppuVar14,
               ppuVar15);
    _swift_bridgeObjectRelease(pvVar16);
    (**(code **)(local_100 + 8))(lVar18,puVar6);
  }
  puVar6 = &DAT_100fb5a00;
  FUN_1000037f0(&DAT_100fb5a00,&DAT_100c33b28);
  (**(code **)(*(long *)(puVar6 + -8) + 0x38))(lVar17,0x3f < local_78,1,puVar6);
  lVar4 = local_b8;
  puVar7 = local_d8;
  lVar20 = local_e0;
  lVar18 = local_e8;
  pcVar19 = *(code **)(local_e8 + 0x10);
  (*pcVar19)(local_e0,local_b8,local_d8);
  lVar2 = local_c8;
  FUN_1001ef3e4(lVar17,local_c8);
  lVar3 = local_c0;
  (*pcVar19)(local_c0,lVar20,puVar7);
  puVar6 = &DAT_100fb5a08;
  FUN_1000037f0(&DAT_100fb5a08,&DAT_100c33b30);
  FUN_1001ef3e4(lVar2,lVar3 + *(int *)(puVar6 + 0x30));
  FUN_100005808(lVar17,&DAT_100fb59b8,&DAT_100c33b00);
  pcVar19 = *(code **)(lVar18 + 8);
  (*pcVar19)(lVar4,puVar7);
  FUN_100005808(lVar2,&DAT_100fb59b8,&DAT_100c33b00);
  (*pcVar19)(lVar20,puVar7);
  _swift_release(local_f0);
  return;
}



/* Address: 0x1001ed830 | FUN_1001ed830 */

void FUN_1001ed830(undefined8 param_1,undefined8 *param_2)

{
  byte bVar1;
  LocalizedStringResource LVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  char *pcVar6;
  StateObject SVar7;
  undefined *puVar8;
  undefined *puVar9;
  long extraout_x8;
  String SVar10;
  undefined *local_110;
  undefined8 uStack_108;
  undefined1 local_100;
  undefined7 uStack_ff;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_bf;
  undefined *local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_5f;
  
  LVar2 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar2.unknown + -8) + 0x40));
  LVar2.unknown = (undefined *)((long)&local_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar8 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar4 = &DAT_100fb59a0;
  FUN_100003a00(&DAT_100fb59a0,puVar8,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar5 = Swift::Actor::get_unownedExecutor();
  pcVar6 = (char *)UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar6 & 1) == 0) {
    pcVar6 = "PasteShortcut/ShortcutRecorderButton.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteShortcut/ShortcutRecorderButton.swift",0x2a,1,0x10,UVar5.unknown,puVar4);
  }
  local_110 = (undefined *)SwiftUI::VerticalAlignment::get_center((VerticalAlignment)pcVar6);
  uStack_108 = 0x3ff0000000000000;
  local_100 = 0;
  FUN_1001eda4c(&uStack_f8,param_2);
  SVar7.unknown = (undefined *)*param_2;
  FUN_1001f0df0(0);
  FUN_100003a00(&DAT_100fb58f8,FUN_1001f0df0,&TargetProtocolConformanceDescriptor_100c33cc8);
  SwiftUI::StateObject::get_wrappedValue(SVar7);
  puVar8 = &DAT_100c33858;
  _swift_getKeyPath(&DAT_100c33858);
  puVar9 = &DAT_100c33880;
  _swift_getKeyPath(&DAT_100c33880);
  Combine::Published::_get_subscript(&local_b0,SVar7.unknown,puVar8,puVar9);
  _swift_release(puVar8);
  _swift_release(puVar9);
  _swift_release(SVar7.unknown);
  bVar1 = (byte)uStack_88 & 0xc0;
  FUN_1001c0788(LVar2.unknown);
  SVar10 = (extension_Foundation)::Swift::String::init(LVar2);
  uStack_88 = uStack_e8;
  local_90 = local_f0;
  uStack_78 = uStack_d8;
  uStack_80 = uStack_e0;
  local_70 = local_d0;
  uStack_5f = uStack_bf;
  uStack_a0 = CONCAT71(uStack_ff,local_100);
  uStack_a8 = uStack_108;
  local_b0 = local_110;
  uStack_98 = uStack_f8;
  FUN_1001edee4(param_1,bVar1 == 0x40,SVar10.str,SVar10.bridgeObject);
  _swift_bridgeObjectRelease(SVar10.bridgeObject);
  FUN_1001ef574(&local_110);
  _swift_release(pMVar3);
  return;
}



/* Address: 0x1001eda4c | FUN_1001eda4c */

void FUN_1001eda4c(undefined8 *param_1,undefined8 *param_2)

{
  MainActor *pMVar1;
  undefined8 *puVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  undefined8 uVar5;
  StateObject SVar6;
  undefined *puVar7;
  Font FVar8;
  Text TVar9;
  Text TVar10;
  Text TVar11;
  undefined *puVar12;
  undefined *puVar13;
  Text TVar14;
  undefined *puVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  ulong uVar19;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8;
  undefined *local_e0;
  undefined *puStack_d8;
  undefined1 local_d0;
  undefined7 uStack_cf;
  ulong local_c8;
  undefined *local_c0;
  undefined *puStack_b8;
  undefined1 local_b0;
  undefined7 uStack_af;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined *local_90;
  undefined *puStack_88;
  undefined *local_80;
  undefined8 uStack_78;
  char local_70;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  puVar7 = PTR_typeMetadataAccessor_100eaec10;
  pMVar1 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  puVar2 = &DAT_100fb59a0;
  FUN_100003a00(&DAT_100fb59a0,puVar7,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteShortcut/ShortcutRecorderButton.swift",0x2a,1,0x11,UVar3.unknown,puVar2);
  }
  SVar6.unknown = (undefined *)*param_2;
  uVar19 = (ulong)*(byte *)(param_2 + 2);
  uVar5 = 0;
  FUN_1001f0df0();
  FUN_100003a00(&DAT_100fb58f8,FUN_1001f0df0,&TargetProtocolConformanceDescriptor_100c33cc8);
  SwiftUI::StateObject::get_wrappedValue(SVar6);
  FUN_1001f02d8(&local_90);
  _swift_release(SVar6.unknown);
  if (local_70 == '\x01') {
    puVar7 = local_90;
    puVar12 = puStack_88;
    FUN_1001ef60c();
    _swift_bridgeObjectRelease();
    FVar8 = SwiftUI::Font::get_footnote(puStack_88);
    puVar13 = puVar7;
    puVar15 = puVar12;
    uVar16 = uVar19;
    TVar9 = SwiftUI::Text::_font(FVar8.unknown);
    uVar17 = uVar16;
    _swift_release(FVar8.unknown);
    FUN_100016d74(puVar7,puVar12,uVar19);
    _swift_bridgeObjectRelease();
    local_e0 = local_80;
    puStack_d8 = (undefined *)uStack_78;
    FUN_1001eed50();
    puVar7 = PTR___type_metadata_for_Swift_String_100eac208;
    TVar10 = SwiftUI::Text::_init();
    FVar8 = SwiftUI::Font::get_body(TVar10.unknown);
    TVar14 = TVar10;
    puVar12 = puVar7;
    uVar18 = uVar5;
    TVar11 = SwiftUI::Text::_font(FVar8.unknown);
    _swift_release(FVar8.unknown);
    FUN_100016d74(TVar10.unknown,puVar7,uVar5);
    _swift_bridgeObjectRelease(uVar17);
    uVar19 = (ulong)puVar15 & 0xffffffff;
    FUN_100016d5c(TVar9.unknown,puVar13,uVar19);
    _swift_bridgeObjectRetain(uVar16);
    FUN_100016d5c(TVar11.unknown,TVar14.unknown,puVar12);
    _swift_bridgeObjectRetain(uVar18);
    FUN_100016d5c(TVar9.unknown,puVar13,uVar19);
    _swift_bridgeObjectRetain(uVar16);
    FUN_100016d5c(TVar11.unknown,TVar14.unknown,puVar12);
    _swift_bridgeObjectRetain(uVar18);
    FUN_100016d74(TVar11.unknown,TVar14.unknown,puVar12);
    _swift_bridgeObjectRelease(uVar18);
    FUN_100016d74(TVar9.unknown,puVar13,uVar19);
    _swift_bridgeObjectRelease(uVar16);
    _local_d0 = CONCAT71(uStack_cf,(char)puVar15);
    _local_b0 = CONCAT71(uStack_af,(char)puVar12);
    local_a0 = 1;
    local_e0 = TVar9.unknown;
    local_c8 = uVar16;
    local_c0 = TVar11.unknown;
    puStack_b8 = TVar14.unknown;
    local_a8 = uVar18;
    FUN_1000037f0(&DAT_100fb5a50,&DAT_100c33b58);
    FUN_100016eac(&DAT_100fb5a58,&DAT_100fb5a50,&DAT_100c33b58,
                  PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_100eabb30);
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)&local_e0);
    FUN_100016d74(TVar11.unknown,TVar14.unknown,puVar12);
    _swift_bridgeObjectRelease(uVar18);
    FUN_100016d74(TVar9.unknown,puVar13,(ulong)puVar15 & 0xffffffff);
    _swift_release(pMVar1);
    _swift_bridgeObjectRelease(uVar16);
  }
  else {
    local_e0 = local_90;
    puStack_d8 = puStack_88;
    FUN_1001eed50();
    puVar7 = PTR___type_metadata_for_Swift_String_100eac208;
    puVar12 = local_90;
    TVar9 = SwiftUI::Text::_init();
    FVar8 = SwiftUI::Font::get_body(TVar9.unknown);
    TVar14 = TVar9;
    puVar13 = puVar7;
    TVar10 = SwiftUI::Text::_font(FVar8.unknown);
    _swift_release(FVar8.unknown);
    FUN_100016d74(TVar9.unknown,puVar7,puVar12);
    _swift_bridgeObjectRelease(uVar5);
    _local_d0 = CONCAT71(uStack_cf,(char)puVar13);
    local_a0 = 0;
    local_e0 = TVar10.unknown;
    puStack_d8 = TVar14.unknown;
    FUN_1000037f0(&DAT_100fb5a50,&DAT_100c33b58);
    FUN_100016eac(&DAT_100fb5a58,&DAT_100fb5a50,&DAT_100c33b58,
                  PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_100eabb30);
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)&local_e0);
    _swift_release(pMVar1);
  }
  param_1[5] = uStack_100;
  param_1[4] = local_108;
  param_1[7] = uStack_f0;
  param_1[6] = local_f8;
  *(undefined1 *)(param_1 + 8) = local_e8;
  param_1[1] = uStack_120;
  *param_1 = local_128;
  param_1[3] = uStack_110;
  param_1[2] = local_118;
  return;
}



/* Address: 0x1001edee4 | FUN_1001edee4 */

void FUN_1001edee4(undefined8 param_1,ulong param_2,undefined *param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *unaff_x20;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *apuStack_1a0 [9];
  undefined8 auStack_157 [4];
  undefined *local_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined8 uStack_df;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  
  puVar2 = &DAT_100fb5a40;
  apuStack_1a0[1] = (undefined *)param_1;
  FUN_1000037f0(&DAT_100fb5a40,&DAT_100c33b48);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = -extraout_x8;
  puVar7 = (undefined8 *)((long)apuStack_1a0 + lVar1);
  puVar16 = &DAT_100fb5a48;
  FUN_1000037f0(&DAT_100fb5a48,&DAT_100c33b50);
  lVar6 = *(long *)(puVar16 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)puVar7 - extraout_x8_00;
  uStack_a8 = unaff_x20[5];
  local_b0 = unaff_x20[4];
  uStack_98 = unaff_x20[7];
  uStack_a0 = unaff_x20[6];
  local_90 = unaff_x20[8];
  uStack_88 = (undefined1)unaff_x20[9];
  uStack_7f = *(undefined8 *)((long)unaff_x20 + 0x51);
  uStack_87 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x49);
  uStack_80 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x49) >> 0x38);
  uStack_c8 = unaff_x20[1];
  local_d0 = *unaff_x20;
  uStack_b8 = unaff_x20[3];
  uStack_c0 = unaff_x20[2];
  if ((param_2 & 1) == 0) {
    uVar10 = unaff_x20[5];
    uVar9 = unaff_x20[4];
    uVar12 = unaff_x20[7];
    uVar11 = unaff_x20[6];
    uVar14 = unaff_x20[9];
    uVar13 = unaff_x20[8];
    uStack_e8 = (undefined1)uVar14;
    uStack_df = *(undefined8 *)((long)unaff_x20 + 0x51);
    uVar15 = *(undefined8 *)((long)unaff_x20 + 0x49);
    uStack_e7 = (undefined7)uVar15;
    uStack_e0 = (undefined1)((ulong)uVar15 >> 0x38);
    uVar17 = unaff_x20[1];
    puVar16 = (undefined *)*unaff_x20;
    uVar19 = unaff_x20[3];
    uVar18 = unaff_x20[2];
    local_130 = puVar16;
    puStack_128 = (undefined *)uVar17;
    puStack_120 = (undefined *)uVar18;
    local_118 = (undefined *)uVar19;
    local_110 = uVar9;
    uStack_108 = uVar10;
    uStack_100 = uVar11;
    uStack_f8 = uVar12;
    local_f0 = uVar13;
    *(undefined8 *)((long)auStack_157 + lVar1 + 8) = uStack_df;
    *(undefined8 *)((long)auStack_157 + lVar1) = uVar15;
    *(undefined8 *)((long)apuStack_1a0 + lVar1 + 0x28) = uVar10;
    *(undefined8 *)((long)apuStack_1a0 + lVar1 + 0x20) = uVar9;
    *(undefined8 *)((long)apuStack_1a0 + lVar1 + 0x38) = uVar12;
    *(undefined8 *)((long)apuStack_1a0 + lVar1 + 0x30) = uVar11;
    *(undefined8 *)(&stack0xfffffffffffffea8 + lVar1) = uVar14;
    *(undefined8 *)((long)apuStack_1a0 + lVar1 + 0x40) = uVar13;
    *(undefined8 *)((long)apuStack_1a0 + lVar1 + 8) = uVar17;
    *puVar7 = puVar16;
    *(undefined8 *)((long)apuStack_1a0 + lVar1 + 0x18) = uVar19;
    *(undefined8 *)((long)apuStack_1a0 + lVar1 + 0x10) = uVar18;
    _swift_storeEnumTagMultiPayload(puVar7,puVar2,1);
    FUN_1001ef5bc(&local_130,apuStack_1a0 + 2);
    puVar2 = &DAT_100fb59e0;
    FUN_1000037f0(&DAT_100fb59e0,&DAT_100c33b20);
    puVar16 = &DAT_100fb59e8;
    FUN_100016eac(&DAT_100fb59e8,&DAT_100fb59e0,&DAT_100c33b20,
                  PTR_SwiftUI__SwiftUI__HStack<undefined>_>SwiftUI__View_100eab8b0);
    puVar5 = puVar16;
    FUN_1001eed50();
    apuStack_1a0[3] = PTR___type_metadata_for_Swift_String_100eac208;
    apuStack_1a0[2] = puVar2;
    apuStack_1a0[4] = puVar16;
    apuStack_1a0[5] = puVar5;
    _swift_getOpaqueTypeConformance2
              (apuStack_1a0 + 2,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_help<A_where_A1:_Swift_StringProtocol>(A1)__>_some>>_100eab540
               ,1);
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar7);
  }
  else {
    puVar5 = &DAT_100fb59e0;
    local_130 = param_3;
    puStack_128 = (undefined *)param_4;
    FUN_1000037f0(&DAT_100fb59e0,&DAT_100c33b20);
    puVar3 = &DAT_100fb59e8;
    FUN_100016eac(&DAT_100fb59e8,&DAT_100fb59e0,&DAT_100c33b20,
                  PTR_SwiftUI__SwiftUI__HStack<undefined>_>SwiftUI__View_100eab8b0);
    puVar4 = puVar3;
    FUN_1001eed50();
    (extension_SwiftUI)::SwiftUI::View::_help
              (lVar8,&local_130,puVar5,PTR___type_metadata_for_Swift_String_100eac208,puVar3,puVar4)
    ;
    (**(code **)(lVar6 + 0x10))(puVar7,lVar8,puVar16);
    _swift_storeEnumTagMultiPayload(puVar7,puVar2,0);
    puStack_128 = PTR___type_metadata_for_Swift_String_100eac208;
    local_130 = puVar5;
    puStack_120 = puVar3;
    local_118 = puVar4;
    _swift_getOpaqueTypeConformance2
              (&local_130,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_help<A_where_A1:_Swift_StringProtocol>(A1)__>_some>>_100eab540
               ,1);
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar7);
    (**(code **)(lVar6 + 8))(lVar8,puVar16);
  }
  return;
}



/* Address: 0x1001ee19c | FUN_1001ee19c */

void FUN_1001ee19c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  MainActor *pMVar4;
  undefined8 *puVar5;
  UnownedSerialExecutor UVar6;
  UnownedSerialExecutor UVar7;
  StateObject SVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  cVar3 = *(char *)(param_2 + 2);
  pMVar4 = Swift::MainActor::typeMetadataAccessor();
  puVar9 = PTR_typeMetadataAccessor_100eaec10;
  pMVar4 = Swift::MainActor::get_shared(pMVar4,pMVar4);
  puVar5 = &DAT_100fb59a0;
  FUN_100003a00(&DAT_100fb59a0,puVar9,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar6 = Swift::Actor::get_unownedExecutor();
  UVar7 = UVar6;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar7.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteShortcut/ShortcutRecorderButton.swift",0x2a,1,0x27,UVar6.unknown,puVar5);
  }
  SVar8.unknown = (undefined *)*param_3;
  FUN_1001f0df0(0);
  FUN_100003a00(&DAT_100fb58f8,FUN_1001f0df0,&TargetProtocolConformanceDescriptor_100c33cc8);
  SwiftUI::StateObject::get_wrappedValue(SVar8);
  puVar9 = &DAT_100c33858;
  _swift_getKeyPath(&DAT_100c33858);
  puVar10 = &DAT_100c33880;
  _swift_getKeyPath(&DAT_100c33880);
  if (cVar3 == '\x01') {
    uStack_78 = 0;
    local_80 = 0;
    local_58 = 0x80;
  }
  else {
    local_58 = 0;
    local_80 = uVar1;
    uStack_78 = uVar2;
  }
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  Combine::Published::_set_subscript((Published *)pMVar4,&local_80,SVar8.unknown,puVar9,puVar10);
  _swift_release(pMVar4);
  return;
}



/* Address: 0x1001ee308 | FUN_1001ee308 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001001ee454 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1001ee308(undefined8 param_1,undefined8 *param_2)

{
  LocalizedStringResource LVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  StateObject SVar6;
  undefined *puVar7;
  long extraout_x8;
  String local_50;
  
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  LVar1.unknown = (undefined *)((long)&local_50 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar7 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fb59a0;
  FUN_100003a00(&DAT_100fb59a0,puVar7,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteShortcut/ShortcutRecorderButton.swift",0x2a,1,0x31,UVar4.unknown,puVar3);
  }
  FUN_1001c2288(LVar1.unknown);
  local_50 = (extension_Foundation)::Swift::String::init(LVar1);
  SVar6.unknown = (undefined *)*param_2;
  FUN_1001f0df0(0);
  FUN_100003a00(&DAT_100fb58f8,FUN_1001f0df0,&TargetProtocolConformanceDescriptor_100c33cc8);
  SwiftUI::StateObject::get_wrappedValue(SVar6);
  puVar7 = SVar6.unknown;
  FUN_1001eed50();
  (extension_SwiftUI)::SwiftUI::Button::_init
            (param_1,puVar7,FUN_1001ef2b4,SVar6.unknown,
             PTR___type_metadata_for_Swift_String_100eac208,puVar7);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x1001ee478 | FUN_1001ee478 */

void FUN_1001ee478(undefined8 param_1)

{
  Published *pPVar1;
  undefined *puVar2;
  undefined8 local_38;
  
  pPVar1 = (Published *)&DAT_100c338b0;
  _swift_getKeyPath(&DAT_100c338b0);
  puVar2 = &DAT_100c338d8;
  _swift_getKeyPath(&DAT_100c338d8);
  local_38 = 0;
  _swift_retain(param_1);
  Combine::Published::_set_subscript(pPVar1,&local_38,param_1,pPVar1,puVar2);
  return;
}



/* Address: 0x1001ee4e4 | FUN_1001ee4e4 */

void FUN_1001ee4e4(void)

{
  FUN_1001ecbc4();
  return;
}



/* Address: 0x1001ee524 | FUN_1001ee524 */

void FUN_1001ee524(undefined8 *param_1)

{
  MainActor *pMVar1;
  undefined8 *puVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  Image IVar5;
  Font FVar6;
  undefined *puVar7;
  String systemName;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  puVar7 = PTR_typeMetadataAccessor_100eaec10;
  pMVar1 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  puVar2 = &DAT_100fb59a0;
  FUN_100003a00(&DAT_100fb59a0,puVar7,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteShortcut/ShortcutRecorderButton.swift",0x2a,1,0x41,UVar3.unknown,puVar2);
  }
  systemName.bridgeObject = &DAT_e500000000000000;
  systemName.str = (char *)0x6b72616d78;
  IVar5 = SwiftUI::Image::init(systemName);
  FVar6 = SwiftUI::Font::get_caption2(IVar5.unknown);
  puVar7 = &DAT_100c33a28;
  _swift_getKeyPath();
  _swift_release(pMVar1);
  *param_1 = IVar5.unknown;
  param_1[1] = puVar7;
  param_1[2] = FVar6.unknown;
  return;
}



/* Address: 0x1001ee604 | FUN_1001ee604 */

void FUN_1001ee604(long param_1,ButtonStyleConfiguration param_2)

{
  undefined8 *puVar1;
  int iVar2;
  bool bVar3;
  Label LVar4;
  Font FVar5;
  undefined *puVar6;
  Color CVar7;
  Color CVar8;
  Alignment AVar9;
  double dVar10;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  LVar4 = SwiftUI::ButtonStyleConfiguration::get_label(param_2);
  FVar5 = SwiftUI::Font::get_body(LVar4.unknown);
  puVar6 = &DAT_100c33a28;
  _swift_getKeyPath();
  CVar7.unknown = &DAT_100fb5938;
  FUN_1000037f0(&DAT_100fb5938,&DAT_100c33a58);
  iVar2 = *(int *)(CVar7.unknown + 0x24);
  *(undefined8 *)(param_1 + iVar2) = puVar6;
  ((undefined8 *)(param_1 + iVar2))[1] = FVar5.unknown;
  CVar7 = SwiftUI::Color::get_primary(CVar7);
  bVar3 = SwiftUI::ButtonStyleConfiguration::get_isPressed((ButtonStyleConfiguration)CVar7.unknown);
  dVar10 = 0.5;
  if (!bVar3) {
    dVar10 = 0.85;
  }
  CVar8 = SwiftUI::Color::opacity(dVar10,CVar7);
  _swift_release(CVar7.unknown);
  puVar6 = &DAT_100c33a60;
  _swift_getKeyPath();
  AVar9.unknown = &DAT_100fb5940;
  FUN_1000037f0(&DAT_100fb5940,&DAT_100c33a90);
  iVar2 = *(int *)(AVar9.unknown + 0x24);
  *(undefined8 *)(param_1 + iVar2) = puVar6;
  ((undefined8 *)(param_1 + iVar2))[1] = CVar8.unknown;
  SwiftUI::Alignment::get_center(AVar9);
  SwiftUI::_FrameLayout::_init((Alignment)0x4038000000000000);
  puVar6 = &DAT_100fb5948;
  FUN_1000037f0(&DAT_100fb5948,&DAT_100c33a98);
  puVar1 = (undefined8 *)(param_1 + *(int *)(puVar6 + 0x24));
  puVar1[1] = uStack_58;
  *puVar1 = local_60;
  puVar1[3] = uStack_48;
  puVar1[2] = uStack_50;
  puVar1[5] = uStack_38;
  puVar1[4] = local_40;
  puVar6 = &DAT_100fb5950;
  FUN_1000037f0(&DAT_100fb5950,&DAT_100c33aa0);
  *(undefined1 *)(param_1 + *(int *)(puVar6 + 0x24)) = 0;
  return;
}



/* Address: 0x1001ee744 | thunk_FUN_1001ee604 */

void thunk_FUN_1001ee604(void)

{
  FUN_1001ee604();
  return;
}



/* Address: 0x1001ee748 | FUN_1001ee748 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001001ee980 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1001ee748(long param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  RoundedCornerStyle RVar4;
  RoundedRectangle RVar5;
  RoundedRectangle RVar6;
  Label LVar7;
  Font FVar8;
  undefined *puVar9;
  NSColor *pNVar10;
  Color CVar11;
  Set SVar12;
  Alignment AVar14;
  Alignment AVar15;
  undefined *puVar16;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar17;
  long lVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined1 auVar21 [16];
  undefined *local_d0 [5];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long lVar13;
  
  local_d0[2] = (undefined *)SwiftUI::SeparatorShapeStyle::typeMetadataAccessor();
  lVar20 = *(long *)(local_d0[2] + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar20 + 0x40));
  lVar18 = (long)local_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  RVar5 = SwiftUI::RoundedRectangle::typeMetadataAccessor();
  RVar6 = RVar5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(RVar5.unknown + -8) + 0x40));
  puVar19 = (undefined8 *)(lVar18 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  LVar7 = SwiftUI::ButtonStyleConfiguration::get_label(RVar6.unknown);
  FVar8 = SwiftUI::Font::get_body(LVar7.unknown);
  puVar9 = &DAT_100c33a28;
  _swift_getKeyPath();
  AVar15.unknown = &DAT_100fb5938;
  FUN_1000037f0(&DAT_100fb5938,&DAT_100c33a58);
  iVar3 = *(int *)(AVar15.unknown + 0x24);
  *(undefined8 *)(param_1 + iVar3) = puVar9;
  ((undefined8 *)(param_1 + iVar3))[1] = FVar8.unknown;
  SwiftUI::Alignment::get_center(AVar15);
  SwiftUI::_FrameLayout::_init((Alignment)0x405e000000000000);
  puVar9 = &DAT_100fb5958;
  FUN_1000037f0(&DAT_100fb5958,&DAT_100c33aa8);
  puVar1 = (undefined8 *)(param_1 + *(int *)(puVar9 + 0x24));
  puVar1[1] = local_d0[4];
  *puVar1 = local_d0[3];
  puVar1[3] = uStack_a0;
  puVar1[2] = local_a8;
  puVar1[5] = uStack_90;
  puVar1[4] = local_98;
  pNVar10 = (NSColor *)NSColor::controlColor((ID)&_OBJC_CLASS___NSColor);
  CVar11 = SwiftUI::Color::init(pNVar10);
  SVar12 = SwiftUI::Edge::Set::get_all(CVar11.unknown);
  puVar9 = &DAT_100fb5960;
  FUN_1000037f0(&DAT_100fb5960,&DAT_100c33ab0);
  iVar3 = *(int *)(puVar9 + 0x24);
  *(undefined8 *)(param_1 + iVar3) = CVar11.unknown;
  *(char *)((undefined8 *)(param_1 + iVar3) + 1) = (char)SVar12.unknown;
  puVar9 = &DAT_100fb5968;
  FUN_1000037f0(&DAT_100fb5968,&DAT_100c33ab8);
  puVar1 = (undefined8 *)(param_1 + *(int *)(puVar9 + 0x24));
  iVar3 = *(int *)(RVar5.unknown + 0x14);
  uVar2 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100eaac50
  ;
  RVar4 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
  lVar13 = CONCAT71((int7)((ulong)puVar9 >> 8),RVar4.value);
  pcVar17 = *(code **)(*(long *)(lVar13 + -8) + 0x68);
  (*pcVar17)((long)puVar1 + (long)iVar3,uVar2,lVar13);
  auVar21 = NEON_fmov(0x4018000000000000,8);
  local_d0[1] = auVar21._8_8_;
  local_d0[0] = auVar21._0_8_;
  puVar1[1] = local_d0[1];
  *puVar1 = local_d0[0];
  puVar9 = &DAT_100fb5970;
  FUN_1000037f0(&DAT_100fb5970,&DAT_100c33ac0);
  *(undefined2 *)((long)puVar1 + (long)*(int *)(puVar9 + 0x24)) = 0x100;
  (*pcVar17)((long)puVar19 + (long)*(int *)(RVar5.unknown + 0x14),uVar2,lVar13);
  puVar19[1] = local_d0[1];
  *puVar19 = local_d0[0];
  SwiftUI::SeparatorShapeStyle::init();
  SwiftUI::StrokeStyle::init
            (&local_88,0x3ff0000000000000,0x4024000000000000,0,puVar9,0,
             PTR___swiftEmptyArrayStorage_100eae0d8);
  puVar9 = &DAT_100fb5978;
  FUN_1000037f0(&DAT_100fb5978,&DAT_100c33ac8);
  param_1 = param_1 + *(int *)(puVar9 + 0x24);
  FUN_1001ef234(puVar19,param_1);
  puVar9 = &DAT_100fb5980;
  FUN_1000037f0(&DAT_100fb5980,&DAT_100c33ad0);
  puVar1 = (undefined8 *)(param_1 + *(int *)(puVar9 + 0x24));
  puVar1[1] = uStack_80;
  *puVar1 = local_88;
  puVar1[3] = uStack_70;
  puVar1[2] = local_78;
  puVar1[4] = local_68;
  puVar9 = &DAT_100fb5988;
  FUN_1000037f0(&DAT_100fb5988,&DAT_100c33ad8);
  puVar16 = local_d0[2];
  AVar15.unknown = (undefined *)(param_1 + *(int *)(puVar9 + 0x34));
  lVar13 = lVar18;
  (**(code **)(lVar20 + 0x10))(AVar15.unknown,lVar18,local_d0[2]);
  *(undefined2 *)(param_1 + *(int *)(puVar9 + 0x38)) = 0x100;
  AVar14 = SwiftUI::Alignment::get_center(AVar15);
  (**(code **)(lVar20 + 8))(lVar18,puVar16);
  FUN_1001ef278(puVar19);
  AVar15.unknown = &DAT_100fb5990;
  puVar9 = &DAT_100c33ae0;
  FUN_1000037f0();
  iVar3 = *(int *)(AVar15.unknown + 0x24);
  *(undefined8 *)(param_1 + iVar3) = AVar14.unknown;
  ((undefined8 *)(param_1 + iVar3))[1] = lVar13;
  AVar15 = SwiftUI::Alignment::get_center(AVar15);
  puVar16 = &DAT_100fb5998;
  FUN_1000037f0(&DAT_100fb5998,&DAT_100c33ae8);
  iVar3 = *(int *)(puVar16 + 0x24);
  *(undefined8 *)(param_1 + iVar3) = AVar15.unknown;
  ((undefined8 *)(param_1 + iVar3))[1] = puVar9;
  return;
}



/* Address: 0x1001eeaa8 | thunk_FUN_1001ee748 */

void thunk_FUN_1001ee748(void)

{
  FUN_1001ee748();
  return;
}



/* Address: 0x1001eeaac | FUN_1001eeaac */

void FUN_1001eeaac(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &DAT_100c33858;
  _swift_getKeyPath(&DAT_100c33858);
  puVar2 = &DAT_100c33880;
  _swift_getKeyPath(&DAT_100c33880);
  Combine::Published::_get_subscript(param_1,uVar3,puVar1,puVar2);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return;
}



/* Address: 0x1001eeb14 | thunk_FUN_1001eeaac */

void thunk_FUN_1001eeaac(void)

{
  FUN_1001eeaac();
  return;
}



/* Address: 0x1001eeb18 | FUN_1001eeb18 */

void FUN_1001eeb18(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  Published *pPVar4;
  undefined8 uVar5;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 local_48;
  
  uVar5 = param_1[4];
  uVar1 = *(undefined1 *)(param_1 + 5);
  pPVar4 = (Published *)*param_2;
  puVar2 = &DAT_100c33858;
  _swift_getKeyPath(&DAT_100c33858);
  puVar3 = &DAT_100c33880;
  _swift_getKeyPath(&DAT_100c33880);
  uStack_68 = param_1[1];
  local_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  local_50 = uVar5;
  local_48 = uVar1;
  _swift_retain(pPVar4);
  Combine::Published::_set_subscript(pPVar4,&local_70,pPVar4,puVar2,puVar3);
  return;
}



/* Address: 0x1001eeba4 | thunk_FUN_1001eeb18 */

void thunk_FUN_1001eeb18(void)

{
  FUN_1001eeb18();
  return;
}



/* Address: 0x1001eeba8 | FUN_1001eeba8 */

void FUN_1001eeba8(void)

{
  long unaff_x20;
  
  FUN_1001eebe0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined1 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_deallocObject();
  return;
}



/* Address: 0x1001eebe0 | FUN_1001eebe0 */

void FUN_1001eebe0(undefined8 param_1,undefined8 param_2)

{
  _swift_release(param_2);
  return;
}



/* Address: 0x1001eebe8 | FUN_1001eebe8 */

void FUN_1001eebe8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1001ee19c(param_1,param_2,unaff_x20 + 0x10);
  return;
}



/* Address: 0x1001eebf0 | FUN_1001eebf0 */

void FUN_1001eebf0(undefined8 param_1,undefined8 param_2)

{
  _swift_retain(param_2);
  return;
}



/* Address: 0x1001eebf8 | FUN_1001eebf8 */

void FUN_1001eebf8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_28;
  
  if (DAT_100fb5918 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb5908;
  FUN_100005c24(&DAT_100fb5908,&DAT_100c338a8);
  puVar2 = puVar1;
  FUN_1001e9ec0();
  puVar3 = 
  PTR__Swift__protocol_conformance_descriptor_for_<A_where_A:_Swift_Equatable>_A____Swift_Equatable_in_Swift_>Swift__Equatable_100eae0a8
  ;
  local_28 = puVar2;
  _swift_getWitnessTable
            (PTR__Swift__protocol_conformance_descriptor_for_<A_where_A:_Swift_Equatable>_A____Swift_Equatable_in_Swift_>Swift__Equatable_100eae0a8
             ,puVar1,&local_28);
  DAT_100fb5918 = puVar3;
  return;
}



/* Address: 0x1001eec68 | FUN_1001eec68 */

void FUN_1001eec68(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &DAT_100c338b0;
  _swift_getKeyPath(&DAT_100c338b0);
  puVar2 = &DAT_100c338d8;
  _swift_getKeyPath(&DAT_100c338d8);
  Combine::Published::_get_subscript(param_1,uVar3,puVar1,puVar2);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return;
}



/* Address: 0x1001eecd0 | thunk_FUN_1001eec68 */

void thunk_FUN_1001eec68(void)

{
  FUN_1001eec68();
  return;
}



/* Address: 0x1001eecd4 | FUN_1001eecd4 */

void FUN_1001eecd4(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  Published *pPVar4;
  undefined8 local_38;
  
  uVar3 = *param_1;
  pPVar4 = (Published *)*param_2;
  puVar1 = &DAT_100c338b0;
  _swift_getKeyPath(&DAT_100c338b0);
  puVar2 = &DAT_100c338d8;
  _swift_getKeyPath(&DAT_100c338d8);
  local_38 = uVar3;
  _swift_retain(pPVar4);
  _swift_errorRetain(uVar3);
  Combine::Published::_set_subscript(pPVar4,&local_38,pPVar4,puVar1,puVar2);
  return;
}



/* Address: 0x1001eed4c | thunk_FUN_1001eecd4 */

void thunk_FUN_1001eecd4(void)

{
  FUN_1001eecd4();
  return;
}


