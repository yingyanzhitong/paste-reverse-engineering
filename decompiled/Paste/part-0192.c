/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1002338bc | FUN_1002338bc */

double FUN_1002338bc(long param_1)

{
  double *unaff_x20;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar9 = *unaff_x20;
  dVar1 = unaff_x20[1];
  dVar3 = unaff_x20[2];
  dVar8 = unaff_x20[4];
  dVar4 = unaff_x20[5];
  dVar5 = unaff_x20[6];
  dVar6 = unaff_x20[7];
  dVar7 = unaff_x20[8];
  dVar2 = dVar4;
  _CGRectGetHeight(dVar4,dVar5,dVar6,dVar7);
  _CGRectGetHeight(dVar4,dVar5,dVar6,dVar7);
  return dVar1 + (dVar8 + (dVar2 - (dVar9 + dVar3))) * (double)param_1;
}



/* Address: 0x100233960 | thunk_FUN_100233494 */

void thunk_FUN_100233494(void)

{
  FUN_100233494();
  return;
}



/* Address: 0x100233964 | FUN_100233964 */

undefined8 FUN_100233964(undefined1 *param_1,undefined *param_2)

{
  Hasher HVar1;
  ulong uVar2;
  undefined8 uVar3;
  Hasher HVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  
  lVar7 = *unaff_x20;
  HVar4.unknown = param_2;
  Swift::Hasher::init(*(__int64 *)(lVar7 + 0x28));
  HVar1.unknown = param_2 & 0xff;
  Swift::Hasher::_combine((__uint64)HVar1.unknown,HVar4);
  uVar2 = Swift::Hasher::_finalize(HVar1);
  uVar6 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
  uVar2 = uVar2 & (uVar6 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar7 + 0x38 + (uVar2 >> 6) * 8) >> (uVar2 & 0x3f) & 1) != 0) {
    do {
      if ((uint)*(byte *)(*(long *)(lVar7 + 0x30) + uVar2) == ((uint)param_2 & 0xff)) {
        uVar3 = 0;
        goto LAB_100233a34;
      }
      uVar2 = uVar2 + 1 & ~uVar6;
    } while ((*(ulong *)(lVar7 + 0x38 + (uVar2 >> 6) * 8) >> (uVar2 & 0x3f) & 1) != 0);
  }
  lVar7 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native(lVar7);
  lVar5 = *unaff_x20;
  FUN_100233b24(param_2,uVar2,lVar7);
  *unaff_x20 = lVar5;
  uVar3 = 1;
LAB_100233a34:
  *param_1 = (char)param_2;
  return uVar3;
}



/* Address: 0x100233a50 | FUN_100233a50 */

undefined8 FUN_100233a50(__uint64 *param_1,__uint64 param_2,Hasher param_3)

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
        goto LAB_100233b08;
      }
      uVar1 = uVar1 + 1 & ~uVar4;
    } while ((*(ulong *)(lVar5 + 0x38 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  }
  lVar5 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native(lVar5);
  lVar3 = *unaff_x20;
  FUN_100233c54(param_2,uVar1,lVar5);
  *unaff_x20 = lVar3;
  uVar2 = 1;
LAB_100233b08:
  *param_1 = param_2;
  return uVar2;
}



/* Address: 0x100233b24 | FUN_100233b24 */

void FUN_100233b24(byte param_1,Hasher param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  Hasher HVar5;
  long *unaff_x20;
  long lVar6;
  
  HVar5.unknown = (undefined *)(ulong)(uint)param_1;
  uVar2 = *(ulong *)(*unaff_x20 + 0x10);
  if (uVar2 < *(ulong *)(*unaff_x20 + 0x18)) {
    if ((param_3 & 1) == 0) {
      FUN_10023415c();
    }
  }
  else {
    if ((param_3 & 1) == 0) {
      FUN_100233d5c(uVar2 + 1);
    }
    else {
      FUN_1002343dc();
    }
    lVar6 = *unaff_x20;
    Swift::Hasher::init(*(__int64 *)(lVar6 + 0x28));
    Swift::Hasher::_combine((__uint64)HVar5.unknown,param_2);
    uVar2 = Swift::Hasher::_finalize(HVar5);
    uVar4 = -1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
    param_2.unknown = (undefined *)(uVar2 & (uVar4 ^ 0xffffffffffffffff));
    if ((*(ulong *)(lVar6 + 0x38 + ((ulong)param_2.unknown >> 6) * 8) >>
         ((ulong)param_2.unknown & 0x3f) & 1) != 0) {
      do {
        if ((uint)(byte)param_2.unknown[*(long *)(lVar6 + 0x30)] == (uint)param_1) {
          Swift::_ELEMENT_TYPE_OF_SET_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100233c54);
          (*pcVar1)();
        }
        param_2.unknown = param_2.unknown + 1 & ~uVar4;
      } while ((*(ulong *)(lVar6 + 0x38 + ((ulong)param_2.unknown >> 6) * 8) >>
                ((ulong)param_2.unknown & 0x3f) & 1) != 0);
    }
  }
  lVar3 = *unaff_x20;
  lVar6 = lVar3 + ((ulong)param_2.unknown >> 6) * 8;
  *(ulong *)(lVar6 + 0x38) = *(ulong *)(lVar6 + 0x38) | 1L << ((ulong)param_2.unknown & 0x3f);
  param_2.unknown[*(long *)(lVar3 + 0x30)] = param_1;
  if (!SCARRY8(*(long *)(lVar3 + 0x10),1)) {
    *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100233c44);
  (*pcVar1)();
}



/* Address: 0x100233c54 | FUN_100233c54 */

void FUN_100233c54(__uint64 param_1,ulong param_2,ulong param_3)

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
      FUN_10023429c();
    }
  }
  else {
    if ((param_3 & 1) == 0) {
      FUN_100233f6c(uVar6 + 1);
    }
    else {
      FUN_100234630();
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
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100233d5c);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100233d4c);
  (*pcVar2)();
}



/* Address: 0x100233d5c | FUN_100233d5c */

void FUN_100233d5c(undefined *param_1)

{
  byte bVar1;
  bool bVar2;
  code *pcVar3;
  _SetStorage *this;
  __RawSetStorage *p_Var4;
  ulong uVar5;
  Hasher capacity;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *unaff_x20;
  __RawSetStorage *original;
  Hasher HVar12;
  long lVar13;
  
  original = (__RawSetStorage *)*unaff_x20;
  capacity.unknown = *(undefined **)(original + 0x18);
  if ((long)*(undefined **)(original + 0x18) <= (long)param_1) {
    capacity.unknown = param_1;
  }
  this = (_SetStorage *)&DAT_100fb7830;
  FUN_1000037f0(&DAT_100fb7830,&DAT_100c36e78);
  p_Var4 = original;
  Swift::_SetStorage::_resize(this,original,(__int64)capacity.unknown,false);
  if (*(long *)(original + 0x10) == 0) {
LAB_100233f34:
    _swift_release(original);
    *unaff_x20 = (long)p_Var4;
    return;
  }
  uVar9 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar11 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar11 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar11 = uVar11 & *(ulong *)(original + 0x38);
  lVar7 = 0;
  do {
    if (uVar11 == 0) {
      do {
        lVar13 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100233f68);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar13) goto LAB_100233f34;
        uVar11 = *(ulong *)(original + 0x38 + lVar13 * 8);
        lVar7 = lVar7 + 1;
      } while (uVar11 == 0);
      uVar6 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
    }
    else {
      uVar6 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
      lVar13 = lVar7;
    }
    bVar1 = *(byte *)(*(long *)(original + 0x30) + (LZCOUNT(uVar6) | lVar13 << 6));
    HVar12.unknown = (undefined *)(ulong)bVar1;
    Swift::Hasher::init(*(__int64 *)(p_Var4 + 0x28));
    Swift::Hasher::_combine((__uint64)HVar12.unknown,capacity);
    uVar5 = Swift::Hasher::_finalize(HVar12);
    uVar10 = -1L << ((ulong)(byte)p_Var4[0x20] & 0x3f);
    uVar5 = uVar5 & (uVar10 ^ 0xffffffffffffffff);
    uVar8 = uVar5 >> 6;
    uVar6 = -1L << (uVar5 & 0x3f) & (*(ulong *)(p_Var4 + uVar8 * 8 + 0x38) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar10 >> 6;
      do {
        uVar5 = uVar8 + 1;
        if ((uVar5 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100233f6c);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar5 != uVar6) {
          uVar8 = uVar5;
        }
        bVar2 = (bool)(uVar5 == uVar6 | bVar2);
      } while (*(ulong *)(p_Var4 + uVar8 * 8 + 0x38) == 0xffffffffffffffff);
      uVar6 = ~*(ulong *)(p_Var4 + uVar8 * 8 + 0x38);
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
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var4 + uVar8 + 0x38) = 1L << (uVar6 & 0x3f) | *(ulong *)(p_Var4 + uVar8 + 0x38);
    *(byte *)(*(long *)(p_Var4 + 0x30) + uVar6) = bVar1;
    *(long *)(p_Var4 + 0x10) = *(long *)(p_Var4 + 0x10) + 1;
    lVar7 = lVar13;
  } while( true );
}



/* Address: 0x100233f6c | FUN_100233f6c */

void FUN_100233f6c(long param_1)

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
  this = (_SetStorage *)&DAT_100fb7578;
  FUN_1000037f0(&DAT_100fb7578,&DAT_100c36e70);
  HVar5.unknown = (undefined *)0x0;
  p_Var3 = original;
  Swift::_SetStorage::_resize(this,original,capacity,false);
  if (*(long *)(original + 0x10) == 0) {
LAB_10023412c:
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
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100234158);
          (*pcVar2)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar12) goto LAB_10023412c;
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
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10023415c);
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



/* Address: 0x10023415c | FUN_10023415c */

void FUN_10023415c(void)

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
  
  this = (_SetStorage *)&DAT_100fb7830;
  FUN_1000037f0(&DAT_100fb7830,&DAT_100c36e78);
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
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10023429c);
            (*pcVar2)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar5) goto LAB_10023427c;
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
      *(undefined1 *)(*(long *)(p_Var3 + 0x30) + uVar8) =
           *(undefined1 *)(*(long *)(original + 0x30) + uVar8);
    } while( true );
  }
LAB_10023427c:
  _swift_release(original);
  *unaff_x20 = (long)p_Var3;
  return;
}



/* Address: 0x10023429c | FUN_10023429c */

void FUN_10023429c(void)

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
  
  this = (_SetStorage *)&DAT_100fb7578;
  FUN_1000037f0(&DAT_100fb7578,&DAT_100c36e70);
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
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1002343dc);
            (*pcVar2)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar5) goto LAB_1002343bc;
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
LAB_1002343bc:
  _swift_release(original);
  *unaff_x20 = (long)p_Var3;
  return;
}



/* Address: 0x1002343dc | FUN_1002343dc */

void FUN_1002343dc(undefined *param_1)

{
  byte bVar1;
  bool bVar2;
  code *pcVar3;
  _SetStorage *this;
  __RawSetStorage *p_Var4;
  ulong uVar5;
  Hasher capacity;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *unaff_x20;
  __RawSetStorage *original;
  __RawSetStorage *p_Var12;
  Hasher HVar13;
  long lVar14;
  
  original = (__RawSetStorage *)*unaff_x20;
  capacity.unknown = *(undefined **)(original + 0x18);
  if ((long)*(undefined **)(original + 0x18) <= (long)param_1) {
    capacity.unknown = param_1;
  }
  this = (_SetStorage *)&DAT_100fb7830;
  FUN_1000037f0(&DAT_100fb7830,&DAT_100c36e78);
  p_Var4 = original;
  Swift::_SetStorage::_resize(this,original,(__int64)capacity.unknown,true);
  if (*(long *)(original + 0x10) == 0) {
LAB_1002345fc:
    _swift_release(original);
    *unaff_x20 = (long)p_Var4;
    return;
  }
  p_Var12 = original + 0x38;
  uVar9 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar11 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar11 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar11 = uVar11 & *(ulong *)p_Var12;
  lVar7 = 0;
  do {
    if (uVar11 == 0) {
      do {
        lVar14 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10023462c);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar14) {
          uVar11 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          if (((byte)original[0x20] & 0x3f) < 6) {
            *(long *)p_Var12 = -1L << (uVar11 & 0x3f);
          }
          else {
            _bzero(p_Var12,uVar11 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_1002345fc;
        }
        uVar11 = *(ulong *)(p_Var12 + lVar14 * 8);
        lVar7 = lVar7 + 1;
      } while (uVar11 == 0);
      uVar6 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
    }
    else {
      uVar6 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
      lVar14 = lVar7;
    }
    bVar1 = *(byte *)(*(long *)(original + 0x30) + (LZCOUNT(uVar6) | lVar14 << 6));
    HVar13.unknown = (undefined *)(ulong)bVar1;
    Swift::Hasher::init(*(__int64 *)(p_Var4 + 0x28));
    Swift::Hasher::_combine((__uint64)HVar13.unknown,capacity);
    uVar5 = Swift::Hasher::_finalize(HVar13);
    uVar10 = -1L << ((ulong)(byte)p_Var4[0x20] & 0x3f);
    uVar5 = uVar5 & (uVar10 ^ 0xffffffffffffffff);
    uVar8 = uVar5 >> 6;
    uVar6 = -1L << (uVar5 & 0x3f) & (*(ulong *)(p_Var4 + uVar8 * 8 + 0x38) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar10 >> 6;
      do {
        uVar5 = uVar8 + 1;
        if ((uVar5 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100234630);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar5 != uVar6) {
          uVar8 = uVar5;
        }
        bVar2 = (bool)(uVar5 == uVar6 | bVar2);
      } while (*(ulong *)(p_Var4 + uVar8 * 8 + 0x38) == 0xffffffffffffffff);
      uVar6 = ~*(ulong *)(p_Var4 + uVar8 * 8 + 0x38);
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
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var4 + uVar8 + 0x38) = 1L << (uVar6 & 0x3f) | *(ulong *)(p_Var4 + uVar8 + 0x38);
    *(byte *)(*(long *)(p_Var4 + 0x30) + uVar6) = bVar1;
    *(long *)(p_Var4 + 0x10) = *(long *)(p_Var4 + 0x10) + 1;
    lVar7 = lVar14;
  } while( true );
}



/* Address: 0x100234630 | FUN_100234630 */

void FUN_100234630(long param_1)

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
  this = (_SetStorage *)&DAT_100fb7578;
  FUN_1000037f0(&DAT_100fb7578,&DAT_100c36e70);
  HVar5.unknown = &DAT_00000001;
  p_Var3 = original;
  Swift::_SetStorage::_resize(this,original,capacity,true);
  if (*(long *)(original + 0x10) == 0) {
LAB_100234820:
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
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100234850);
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
          goto LAB_100234820;
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
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100234854);
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



/* Address: 0x100234854 | thunk_FUN_100234858 */

void thunk_FUN_100234858(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb7838 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c36e80;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c36e80,&DAT_100ec2fc8);
  DAT_100fb7838 = pTVar1;
  return;
}



/* Address: 0x100234858 | FUN_100234858 */

void FUN_100234858(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb7838 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c36e80;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c36e80,&DAT_100ec2fc8);
  DAT_100fb7838 = pTVar1;
  return;
}



/* Address: 0x100234898 | FUN_100234898 */

undefined1  [16] FUN_100234898(void)

{
  return ZEXT816(0x100ec2fc8);
}



/* Address: 0x1002348a8 | FUN_1002348a8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1002348a8(ID param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  bool bVar5;
  _StringGuts _Var6;
  ID IVar7;
  SpecialKey SVar8;
  _StringGuts _Var9;
  undefined1 *puVar10;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  undefined7 extraout_var_02;
  undefined7 extraout_var_03;
  long lVar11;
  long lVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar13;
  undefined *puVar14;
  code *pcVar15;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long extraout_x12_07;
  long extraout_x12_08;
  long extraout_x12_09;
  long lVar16;
  code *pcVar17;
  long lVar18;
  _StringGuts _Var19;
  code *pcVar20;
  code *pcVar21;
  long lVar22;
  SpecialKey SVar23;
  String SVar24;
  undefined1 auStack_100 [4];
  uint local_fc;
  ID local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  undefined *local_d8;
  long local_d0;
  long local_c8;
  _StringGuts local_c0;
  undefined1 *local_b8;
  undefined *local_b0;
  ulong local_a8;
  uint local_9c;
  code *local_98;
  code *local_90;
  uint local_84;
  _StringGuts local_80;
  undefined *local_78;
  long local_70;
  
  _Var6.unknown = (undefined *)SpecialKey::_typeMetadataAccessor();
  lVar22 = *(long *)(_Var6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar22 + 0x40));
  puVar14 = &DAT_100fb7840;
  local_b8 = auStack_100 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_1000037f0(&DAT_100fb7840,&DAT_100c36ef8);
  local_78 = puVar14;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar14 + -8) + 0x40));
  lVar13 = (long)(auStack_100 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_d0 = lVar13;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar14 = (undefined *)(lVar13 - extraout_x12);
  local_d8 = puVar14;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar14 = puVar14 + -extraout_x12_00;
  local_b0 = puVar14;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  SVar23.unknown = puVar14 + -extraout_x12_01;
  puVar14 = &DAT_100fb7848;
  FUN_1000037f0(&DAT_100fb7848,&DAT_100c36f00);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar14 + -8) + 0x40));
  lVar13 = (long)SVar23.unknown - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_e8 = lVar13;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar13 = lVar13 - extraout_x12_02;
  local_f0 = lVar13;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  pcVar15 = (code *)(lVar13 - extraout_x12_03);
  local_98 = pcVar15;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar13 = (long)pcVar15 - extraout_x12_04;
  local_c8 = lVar13;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar13 = lVar13 - extraout_x12_05;
  local_e0 = lVar13;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  pcVar15 = (code *)(lVar13 - extraout_x12_06);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_a8 = (long)pcVar15 - extraout_x12_07;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar13 = ((long)pcVar15 - extraout_x12_07) - extraout_x12_08;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_70 = lVar13 - extraout_x12_09;
  local_f8 = objc_stub::modifierFlags(param_1);
  IVar7 = objc_stub::modifierFlags(param_1);
  SVar8.unknown = (undefined *)objc_stub::charactersIgnoringModifiers(param_1);
  if (SVar8.unknown == (undefined *)0x0) {
    local_9c = (uint)((IVar7 & 0x40000) == 0);
    (extension_AppKit)::__C::NSEvent::_get_specialKey((NSEvent *)0x0);
    _Var19.unknown = (undefined *)0x0;
    local_c0.unknown = (undefined *)0x0;
    local_84 = 1;
  }
  else {
    local_90 = pcVar15;
    local_80.unknown = _Var6.unknown;
    SVar24 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    SVar8.unknown = SVar24.bridgeObject;
    SVar24 = Swift::String::lowercased(SVar24);
    _Var19.unknown = SVar24.bridgeObject;
    _Var9.unknown = SVar24.str;
    _swift_bridgeObjectRelease();
    local_9c = (uint)((IVar7 & 0x40000) == 0);
    (extension_AppKit)::__C::NSEvent::_get_specialKey((NSEvent *)SVar8.unknown);
    _Var6 = local_80;
    pcVar15 = local_90;
    if (_Var19.unknown == (undefined *)0x0) {
      local_84 = 1;
      local_c0.unknown = _Var9.unknown;
    }
    else if ((_Var9.unknown == (undefined *)0x66) &&
            (_Var19.unknown == (undefined *)0xe100000000000000)) {
      if (((uint)IVar7 >> 0x12 & 1) != 0) {
LAB_100234eb0:
        _swift_bridgeObjectRelease(_Var19.unknown);
        goto LAB_100234ec0;
      }
      local_84 = 0;
      _Var19.unknown = (undefined *)0xe100000000000000;
      local_9c = 1;
      local_c0.unknown = (undefined *)0x66;
    }
    else {
      local_c0.unknown = _Var9.unknown;
      bVar5 = Swift::_stringCompareWithSmolCheck(_Var9,_Var19,(_StringComparisonResult)0x66);
      SVar8.unknown = (undefined *)CONCAT71(extraout_var_00,bVar5);
      local_84 = 0;
      _Var6.unknown = local_80.unknown;
      pcVar15 = local_90;
      if ((bVar5) && (((uint)IVar7 >> 0x12 & 1) != 0)) goto LAB_100234eb0;
    }
  }
  local_80.unknown = _Var19.unknown;
  SpecialKey::_get_rightArrow(SVar8);
  pcVar20 = *(code **)(lVar22 + 0x38);
  (*pcVar20)(lVar13,0,1,_Var6.unknown);
  iVar1 = *(int *)(local_78 + 0x30);
  FUN_100235560(local_70,SVar23.unknown);
  FUN_100235560(lVar13,SVar23.unknown + iVar1);
  pcVar21 = *(code **)(lVar22 + 0x30);
  puVar14 = SVar23.unknown;
  (*pcVar21)(SVar23.unknown,1,_Var6.unknown);
  uVar4 = local_a8;
  if ((int)puVar14 == 1) {
    FUN_100005808(lVar13,&DAT_100fb7848,&DAT_100c36f00);
    puVar14 = SVar23.unknown + iVar1;
    (*pcVar21)(puVar14,1,_Var6.unknown);
    if ((int)puVar14 == 1) {
      FUN_100005808(SVar23.unknown,&DAT_100fb7848,&DAT_100c36f00);
LAB_100234e6c:
      _swift_bridgeObjectRelease(local_80.unknown);
LAB_100234ec0:
      FUN_100005808(local_70,&DAT_100fb7848,&DAT_100c36f00);
      return 0;
    }
LAB_100234ce4:
    FUN_100005808(SVar23.unknown,&DAT_100fb7840,&DAT_100c36ef8);
  }
  else {
    FUN_100235560(SVar23.unknown,local_a8);
    puVar14 = SVar23.unknown + iVar1;
    (*pcVar21)(puVar14,1,_Var6.unknown);
    puVar3 = local_b8;
    if ((int)puVar14 == 1) {
      FUN_100005808(lVar13,&DAT_100fb7848,&DAT_100c36f00);
      (**(code **)(lVar22 + 8))(uVar4,_Var6.unknown);
      goto LAB_100234ce4;
    }
    puVar10 = local_b8;
    local_90 = pcVar21;
    (**(code **)(lVar22 + 0x20))(local_b8,SVar23.unknown + iVar1,_Var6.unknown);
    FUN_1002355b0();
    bVar5 = Swift::Equatable::___infix(uVar4,puVar3,_Var6.unknown,puVar10);
    local_fc = (uint)CONCAT71(extraout_var,bVar5);
    pcVar21 = *(code **)(lVar22 + 8);
    (*pcVar21)(puVar3,_Var6.unknown);
    FUN_100005808(lVar13,&DAT_100fb7848,&DAT_100c36f00);
    (*pcVar21)(uVar4,_Var6.unknown);
    pcVar21 = local_90;
    FUN_100005808(SVar23.unknown,&DAT_100fb7848,&DAT_100c36f00);
    if ((local_fc & 1) != 0) goto LAB_100234e6c;
  }
  pcVar17 = local_98;
  if ((local_84 & 1) == 0) {
    if ((local_c0.unknown == &DAT_00000062) && (local_80.unknown == (undefined *)0xe100000000000000)
       ) {
      SVar23.unknown = &DAT_00000062;
      uVar2 = local_9c;
    }
    else {
      bVar5 = Swift::_stringCompareWithSmolCheck(local_c0,local_80,(_StringComparisonResult)0x62);
      SVar23.unknown = (undefined *)CONCAT71(extraout_var_01,bVar5);
      uVar2 = local_9c | (uint)SVar23.unknown ^ 0xffffffff;
    }
    if ((uVar2 & 1) == 0) {
      _swift_bridgeObjectRelease(local_80.unknown);
      goto LAB_10023510c;
    }
  }
  SpecialKey::_get_leftArrow(SVar23);
  (*pcVar20)(pcVar15,0,1,_Var6.unknown);
  SVar23.unknown = local_b0;
  iVar1 = *(int *)(local_78 + 0x30);
  FUN_100235560(local_70,local_b0);
  FUN_100235560(pcVar15,SVar23.unknown + iVar1);
  puVar14 = SVar23.unknown;
  (*pcVar21)(SVar23.unknown,1,_Var6.unknown);
  lVar13 = local_e0;
  if ((int)puVar14 == 1) {
    FUN_100005808(pcVar15,&DAT_100fb7848,&DAT_100c36f00);
    puVar14 = SVar23.unknown + iVar1;
    (*pcVar21)(puVar14,1,_Var6.unknown);
    if ((int)puVar14 == 1) {
      FUN_100005808(SVar23.unknown,&DAT_100fb7848,&DAT_100c36f00);
LAB_1002350fc:
      _swift_bridgeObjectRelease(local_80.unknown);
LAB_10023510c:
      FUN_100005808(local_70,&DAT_100fb7848,&DAT_100c36f00);
      return 1;
    }
LAB_100234f34:
    FUN_100005808(SVar23.unknown,&DAT_100fb7840,&DAT_100c36ef8);
  }
  else {
    local_90 = pcVar15;
    FUN_100235560(SVar23.unknown,local_e0);
    puVar14 = SVar23.unknown + iVar1;
    (*pcVar21)(puVar14,1,_Var6.unknown);
    puVar3 = local_b8;
    if ((int)puVar14 == 1) {
      FUN_100005808(local_90,&DAT_100fb7848,&DAT_100c36f00);
      (**(code **)(lVar22 + 8))(lVar13,_Var6.unknown);
      goto LAB_100234f34;
    }
    puVar10 = local_b8;
    (**(code **)(lVar22 + 0x20))(local_b8,SVar23.unknown + iVar1,_Var6.unknown);
    FUN_1002355b0();
    bVar5 = Swift::Equatable::___infix(lVar13,puVar3,_Var6.unknown,puVar10);
    local_a8 = CONCAT44(local_a8._4_4_,(int)CONCAT71(extraout_var_02,bVar5));
    pcVar15 = *(code **)(lVar22 + 8);
    (*pcVar15)(puVar3,_Var6.unknown);
    FUN_100005808(local_90,&DAT_100fb7848,&DAT_100c36f00);
    (*pcVar15)(lVar13,_Var6.unknown);
    pcVar17 = local_98;
    FUN_100005808(SVar23.unknown,&DAT_100fb7848,&DAT_100c36f00);
    if ((local_a8 & 1) != 0) goto LAB_1002350fc;
  }
  lVar16 = local_c8;
  lVar13 = local_d0;
  _Var9.unknown = local_d8;
  if ((local_84 & 1) == 0) {
    if ((local_c0.unknown == (undefined *)0x65) &&
       (local_80.unknown == (undefined *)0xe100000000000000)) {
      SVar23.unknown = (undefined *)0x65;
      uVar2 = local_9c;
    }
    else {
      bVar5 = Swift::_stringCompareWithSmolCheck(local_c0,local_80,(_StringComparisonResult)0x65);
      SVar23.unknown = (undefined *)CONCAT71(extraout_var_03,bVar5);
      uVar2 = local_9c | (uint)SVar23.unknown ^ 0xffffffff;
    }
    if ((uVar2 & 1) == 0) {
      _swift_bridgeObjectRelease(local_80.unknown);
      goto LAB_100235288;
    }
  }
  SpecialKey::_get_downArrow(SVar23);
  local_98 = pcVar20;
  (*pcVar20)(lVar16,0,1,_Var6.unknown);
  iVar1 = *(int *)(local_78 + 0x30);
  FUN_100235560(local_70,_Var9.unknown);
  FUN_100235560(lVar16,_Var9.unknown + iVar1);
  puVar14 = _Var9.unknown;
  (*pcVar21)(_Var9.unknown,1,_Var6.unknown);
  if ((int)puVar14 == 1) {
    FUN_100005808(lVar16,&DAT_100fb7848,&DAT_100c36f00);
    puVar14 = _Var9.unknown + iVar1;
    (*pcVar21)(puVar14,1,_Var6.unknown);
    pcVar15 = local_98;
    if ((int)puVar14 == 1) {
      FUN_100005808(_Var9.unknown,&DAT_100fb7848,&DAT_100c36f00);
LAB_100235270:
      if (((uint)local_f8 >> 0x14 & 1) != 0) {
        _swift_bridgeObjectRelease(local_80.unknown);
LAB_100235288:
        FUN_100005808(local_70,&DAT_100fb7848,&DAT_100c36f00);
        return 3;
      }
    }
    else {
LAB_10023517c:
      pcVar15 = local_98;
      FUN_100005808(_Var9.unknown,&DAT_100fb7840,&DAT_100c36ef8);
    }
  }
  else {
    FUN_100235560(_Var9.unknown,pcVar17);
    puVar14 = _Var9.unknown + iVar1;
    (*pcVar21)(puVar14,1,_Var6.unknown);
    puVar3 = local_b8;
    if ((int)puVar14 == 1) {
      FUN_100005808(local_c8,&DAT_100fb7848,&DAT_100c36f00);
      (**(code **)(lVar22 + 8))(pcVar17,_Var6.unknown);
      goto LAB_10023517c;
    }
    puVar10 = local_b8;
    (**(code **)(lVar22 + 0x20))(local_b8,_Var9.unknown + iVar1,_Var6.unknown);
    FUN_1002355b0();
    bVar5 = Swift::Equatable::___infix(pcVar17,puVar3,_Var6.unknown,puVar10);
    pcVar15 = *(code **)(lVar22 + 8);
    local_90 = pcVar21;
    (*pcVar15)(puVar3,_Var6.unknown);
    FUN_100005808(local_c8,&DAT_100fb7848,&DAT_100c36f00);
    (*pcVar15)(pcVar17,_Var6.unknown);
    pcVar21 = local_90;
    FUN_100005808(_Var9.unknown,&DAT_100fb7848,&DAT_100c36f00);
    pcVar15 = local_98;
    if (bVar5) goto LAB_100235270;
  }
  _Var19.unknown = local_80.unknown;
  lVar16 = local_e8;
  if ((local_84 & 1) == 0) {
    if ((local_c0.unknown == (undefined *)0x61) &&
       (local_80.unknown == (undefined *)0xe100000000000000)) {
      _Var9.unknown = local_80.unknown;
      _swift_bridgeObjectRelease();
      uVar2 = local_9c;
    }
    else {
      bVar5 = Swift::_stringCompareWithSmolCheck(local_c0,local_80,(_StringComparisonResult)0x61);
      _swift_bridgeObjectRelease();
      _Var9.unknown = _Var19.unknown;
      lVar16 = local_e8;
      uVar2 = local_9c | bVar5 ^ 0xffffffff;
    }
    if ((uVar2 & 1) == 0) {
      FUN_100005808(local_70,&DAT_100fb7848,&DAT_100c36f00);
      return 2;
    }
  }
  lVar12 = local_f0;
  SpecialKey::_get_upArrow((SpecialKey)_Var9.unknown);
  (*pcVar15)(lVar12,0,1,_Var6.unknown);
  lVar18 = (long)*(int *)(local_78 + 0x30);
  FUN_100235560(local_70,lVar13);
  FUN_100235560(lVar12,lVar13 + lVar18);
  lVar11 = lVar13;
  (*pcVar21)(lVar13,1,_Var6.unknown);
  if ((int)lVar11 == 1) {
    FUN_100005808(lVar12,&DAT_100fb7848,&DAT_100c36f00);
    FUN_100005808(local_70,&DAT_100fb7848,&DAT_100c36f00);
    lVar18 = lVar13 + lVar18;
    (*pcVar21)(lVar18,1,_Var6.unknown);
    if ((int)lVar18 == 1) {
      FUN_100005808(lVar13,&DAT_100fb7848,&DAT_100c36f00);
LAB_10023552c:
      if (((uint)local_f8 >> 0x14 & 1) == 0) {
        return 4;
      }
      return 2;
    }
  }
  else {
    FUN_100235560(lVar13,lVar16);
    lVar12 = lVar13 + lVar18;
    (*pcVar21)(lVar12,1,_Var6.unknown);
    puVar3 = local_b8;
    if ((int)lVar12 != 1) {
      puVar10 = local_b8;
      (**(code **)(lVar22 + 0x20))(local_b8,lVar13 + lVar18,_Var6.unknown);
      FUN_1002355b0();
      bVar5 = Swift::Equatable::___infix(lVar16,puVar3,_Var6.unknown,puVar10);
      pcVar15 = *(code **)(lVar22 + 8);
      (*pcVar15)(puVar3,_Var6.unknown);
      FUN_100005808(local_f0,&DAT_100fb7848,&DAT_100c36f00);
      FUN_100005808(local_70,&DAT_100fb7848,&DAT_100c36f00);
      (*pcVar15)(lVar16,_Var6.unknown);
      FUN_100005808(lVar13,&DAT_100fb7848,&DAT_100c36f00);
      if (!bVar5) {
        return 4;
      }
      goto LAB_10023552c;
    }
    FUN_100005808(local_f0,&DAT_100fb7848,&DAT_100c36f00);
    FUN_100005808(local_70,&DAT_100fb7848,&DAT_100c36f00);
    (**(code **)(lVar22 + 8))(lVar16,_Var6.unknown);
  }
  FUN_100005808(lVar13,&DAT_100fb7840,&DAT_100c36ef8);
  return 4;
}



/* Address: 0x100235560 | FUN_100235560 */

undefined8 FUN_100235560(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fb7848;
  FUN_1000037f0(&DAT_100fb7848,&DAT_100c36f00);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1002355b0 | FUN_1002355b0 */

void FUN_1002355b0(void)

{
  SpecialKey SVar1;
  undefined *puVar2;
  
  if (DAT_100fb7850 != (undefined *)0x0) {
    return;
  }
  SVar1 = SpecialKey::_typeMetadataAccessor();
  puVar2 = PTR__AppKit__SpecialKey_>Swift__Equatable_100ea8f88;
  _swift_getWitnessTable(PTR__AppKit__SpecialKey_>Swift__Equatable_100ea8f88,SVar1.unknown);
  DAT_100fb7850 = puVar2;
  return;
}



/* Address: 0x1002355f4 | FUN_1002355f4 */

uint FUN_1002355f4(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 >> 0x14 & 1;
  if ((param_1 & 0x20000) != 0) {
    uVar1 = 2;
  }
  return uVar1;
}



/* Address: 0x100235608 | thunk_FUN_10023560c */

void thunk_FUN_10023560c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb7858 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c36f08;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c36f08,&DAT_100ec3098);
  DAT_100fb7858 = pTVar1;
  return;
}



/* Address: 0x10023560c | FUN_10023560c */

void FUN_10023560c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb7858 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c36f08;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c36f08,&DAT_100ec3098);
  DAT_100fb7858 = pTVar1;
  return;
}



/* Address: 0x10023564c | FUN_10023564c */

undefined1  [16] FUN_10023564c(void)

{
  return ZEXT816(0x100ec3098);
}



/* Address: 0x10023565c | FUN_10023565c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_10023565c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _TtC7PasteUI15LayerBackedView::backgroundColor;
  _swift_beginAccess(unaff_x20 + _TtC7PasteUI15LayerBackedView::backgroundColor,auStack_38,0,0);
  return *(undefined8 *)(unaff_x20 + lVar1);
}



/* Address: 0x1002356a8 | FUN_1002356a8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1002356a8(undefined8 param_1)

{
  long lVar1;
  code *pcVar2;
  ID self;
  undefined *puVar3;
  undefined *puVar4;
  void *aBlock;
  undefined *puVar5;
  ID unaff_x20;
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *puStack_80;
  code *local_78;
  undefined *local_70;
  undefined1 auStack_68 [24];
  
  lVar1 = _TtC7PasteUI15LayerBackedView::backgroundColor;
  _swift_beginAccess(unaff_x20 + _TtC7PasteUI15LayerBackedView::backgroundColor,auStack_68,1,0);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  self = objc_stub::effectiveAppearance(unaff_x20);
  puVar3 = &DAT_100ec30f8;
  _swift_allocObject(&DAT_100ec30f8,0x18,7);
  *(ID *)(puVar3 + 0x10) = unaff_x20;
  puVar4 = &DAT_100ec3120;
  _swift_allocObject(&DAT_100ec3120,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_1001fe108;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  local_78 = FUN_100209b34;
  local_98 = PTR___NSConcreteStackBlock_100ea82a0;
  local_90 = 0x42000000;
  local_88 = FUN_1000d5218;
  puStack_80 = &DAT_100ec3138;
  local_70 = puVar4;
  aBlock = __Block_copy(&local_98);
  puVar5 = local_70;
  _swift_retain(puVar4);
  _swift_release(puVar5);
  objc_stub::performAsCurrentDrawingAppearance_(self,aBlock);
  __Block_release(aBlock);
  puVar5 = puVar4;
  _swift_isEscapingClosureAtFileLocation(puVar4,"",0x7e,0x21,0x3f,1);
  _swift_release(puVar3);
  _swift_release(puVar4);
  if (((ulong)puVar5 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100235830);
  (*pcVar2)();
}



/* Address: 0x100235830 | FUN_100235830 */

undefined1  [16] FUN_100235830(undefined8 *param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  puVar2 = &DAT_00000038;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    puVar2 = _malloc(0x38);
  }
  else {
    _swift_coroFrameAlloc(0x38,0xc90d);
  }
  *param_1 = puVar2;
  *(long *)(puVar2 + 0x30) = unaff_x20;
  lVar1 = _TtC7PasteUI15LayerBackedView::backgroundColor;
  _swift_beginAccess(unaff_x20 + _TtC7PasteUI15LayerBackedView::backgroundColor,puVar2,0x21,0);
  auVar3._8_8_ = unaff_x20 + lVar1;
  auVar3._0_8_ = FUN_10023589c;
  return auVar3;
}



/* Address: 0x10023589c | FUN_10023589c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10023589c(undefined8 *param_1,ulong param_2)

{
  code *pcVar1;
  ID self;
  undefined *puVar2;
  undefined *puVar3;
  void *aBlock;
  undefined *puVar4;
  ID self_00;
  undefined8 uVar5;
  
  param_1 = (undefined8 *)*param_1;
  _swift_endAccess(param_1);
  if ((param_2 & 1) == 0) {
    self_00 = param_1[6];
    self = objc_stub::effectiveAppearance(self_00);
    puVar2 = &DAT_100ec3170;
    _swift_allocObject(&DAT_100ec3170,0x18,7);
    *(ID *)(puVar2 + 0x10) = self_00;
    puVar3 = &DAT_100ec3198;
    _swift_allocObject(&DAT_100ec3198,0x20,7);
    *(code **)(puVar3 + 0x10) = thunk_FUN_1001fe108;
    *(undefined **)(puVar3 + 0x18) = puVar2;
    param_1[4] = thunk_FUN_100209b34;
    param_1[5] = puVar3;
    *param_1 = PTR___NSConcreteStackBlock_100ea82a0;
    param_1[1] = 0x42000000;
    param_1[2] = FUN_1000d5218;
    param_1[3] = &DAT_100ec31b0;
    aBlock = __Block_copy(param_1);
    uVar5 = param_1[5];
    _swift_retain(puVar3);
    _swift_release(uVar5);
    objc_stub::performAsCurrentDrawingAppearance_(self,aBlock);
    __Block_release(aBlock);
    puVar4 = puVar3;
    _swift_isEscapingClosureAtFileLocation(puVar3,"",0x7e,0x21,0x3f,1);
    _swift_release(puVar3);
    _swift_release(puVar2);
    if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1002359f4);
      (*pcVar1)();
    }
  }
  _free(param_1);
  return;
}



/* Address: 0x1002359f4 | FUN_1002359f4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002359f4(void)

{
  code *pcVar1;
  ID self;
  undefined *puVar2;
  undefined *puVar3;
  void *aBlock;
  undefined *puVar4;
  ID unaff_x20;
  undefined *local_70;
  undefined8 local_68;
  code *local_60;
  undefined *puStack_58;
  code *local_50;
  undefined *local_48;
  
  self = objc_stub::effectiveAppearance(unaff_x20);
  puVar2 = &DAT_100ec3260;
  _swift_allocObject(&DAT_100ec3260,0x18,7);
  *(ID *)(puVar2 + 0x10) = unaff_x20;
  puVar3 = &DAT_100ec3288;
  _swift_allocObject(&DAT_100ec3288,0x20,7);
  *(code **)(puVar3 + 0x10) = thunk_FUN_1001fe108;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  local_50 = thunk_FUN_100209b34;
  local_70 = PTR___NSConcreteStackBlock_100ea82a0;
  local_68 = 0x42000000;
  local_60 = FUN_1000d5218;
  puStack_58 = &DAT_100ec32a0;
  local_48 = puVar3;
  aBlock = __Block_copy(&local_70);
  puVar4 = local_48;
  _swift_retain(puVar3);
  _swift_release(puVar4);
  objc_stub::performAsCurrentDrawingAppearance_(self,aBlock);
  __Block_release(aBlock);
  puVar4 = puVar3;
  _swift_isEscapingClosureAtFileLocation(puVar3,"",0x7e,0x21,0x3f,1);
  _swift_release(puVar2);
  _swift_release(puVar3);
  if (((ulong)puVar4 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100235b34);
  (*pcVar1)();
}



/* Address: 0x100235b34 | FUN_100235b34 */

ID FUN_100235b34(void)

{
  ID self;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _TtC7PasteUI15LayerBackedView::backgroundColor) = 0;
  FUN_100236364();
  self = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffd0,"initWithFrame:",0,0,0,0);
  objc_stub::setWantsLayer_(self,1);
  return self;
}



/* Address: 0x100235b98 | _TtC7PasteUI15LayerBackedView::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC7PasteUI15LayerBackedView::init(ID param_1,SEL param_2)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  char *pcVar4;
  ID self;
  objc_super local_40;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1001f7290();
  UVar3 = Swift::Actor::get_unownedExecutor();
  pcVar4 = (char *)UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar4 & 1) == 0) {
    pcVar4 = "PasteUI/LayerBackedView.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/LayerBackedView.swift",0x1d,1,8,UVar3.unknown,pMVar1);
  }
  *(undefined8 *)(param_1 + backgroundColor) = 0;
  FUN_100236364();
  local_40.receiver = param_1;
  local_40.super_class = (class_t *)pcVar4;
  self = _objc_msgSendSuper2(&local_40,"initWithFrame:",0,0,0,0);
  objc_stub::setWantsLayer_(self,1);
  _swift_release(pMVar2);
  return self;
}



/* Address: 0x100235c68 | FUN_100235c68 */

ID FUN_100235c68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ID self;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _TtC7PasteUI15LayerBackedView::backgroundColor) = 0;
  FUN_100236364();
  self = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffb0,"initWithFrame:",param_1,param_2
                             ,param_3,param_4);
  objc_stub::setWantsLayer_(self,1);
  return self;
}



/* Address: 0x100235cec | _TtC7PasteUI15LayerBackedView::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtC7PasteUI15LayerBackedView::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  char *pcVar4;
  ID self;
  objc_super local_60;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1001f7290();
  UVar3 = Swift::Actor::get_unownedExecutor();
  pcVar4 = (char *)UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar4 & 1) == 0) {
    pcVar4 = "PasteUI/LayerBackedView.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/LayerBackedView.swift",0x1d,1,0xd,UVar3.unknown,pMVar1);
  }
  *(undefined8 *)(param_1 + backgroundColor) = 0;
  FUN_100236364();
  local_60.receiver = param_1;
  local_60.super_class = (class_t *)pcVar4;
  self = _objc_msgSendSuper2(&local_60,"initWithFrame:");
  objc_stub::setWantsLayer_(self,1);
  _swift_release(pMVar2);
  return self;
}



/* Address: 0x100235ddc | FUN_100235ddc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100235ddc(undefined8 param_1)

{
  ID self;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _TtC7PasteUI15LayerBackedView::backgroundColor) = 0;
  FUN_100236364();
  self = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"initWithCoder:",param_1);
  if (self != 0) {
    objc_stub::setWantsLayer_(self,1);
  }
  return self;
}



/* Address: 0x100235e60 | _TtC7PasteUI15LayerBackedView::initWithCoder: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC7PasteUI15LayerBackedView::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  char *pcVar4;
  ID self;
  objc_super local_50;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1001f7290();
  UVar3 = Swift::Actor::get_unownedExecutor();
  pcVar4 = (char *)UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar4 & 1) == 0) {
    pcVar4 = "PasteUI/LayerBackedView.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/LayerBackedView.swift",0x1d,1,0x13,UVar3.unknown,pMVar1);
  }
  *(undefined8 *)(param_1 + backgroundColor) = 0;
  FUN_100236364();
  local_50.receiver = param_1;
  local_50.super_class = (class_t *)pcVar4;
  self = _objc_msgSendSuper2(&local_50,"initWithCoder:",param_3);
  if (self == 0) {
    _swift_release(pMVar2);
  }
  else {
    objc_stub::setWantsLayer_(self,1);
    _swift_release(pMVar2);
  }
  return self;
}



/* Address: 0x100235f6c | FUN_100235f6c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100235f6c(void)

{
  code *pcVar1;
  ID self;
  undefined *puVar2;
  undefined *puVar3;
  void *aBlock;
  undefined *puVar4;
  ID unaff_x20;
  undefined *local_80;
  undefined8 local_78;
  code *local_70;
  undefined *puStack_68;
  code *local_60;
  undefined *local_58;
  
  FUN_100236364();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffb0,"viewDidChangeEffectiveAppearance");
  self = objc_stub::effectiveAppearance(unaff_x20);
  puVar2 = &DAT_100ec31e8;
  _swift_allocObject(&DAT_100ec31e8,0x18,7);
  *(ID *)(puVar2 + 0x10) = unaff_x20;
  puVar3 = &DAT_100ec3210;
  _swift_allocObject(&DAT_100ec3210,0x20,7);
  *(code **)(puVar3 + 0x10) = thunk_FUN_1001fe108;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  local_60 = thunk_FUN_100209b34;
  local_80 = PTR___NSConcreteStackBlock_100ea82a0;
  local_78 = 0x42000000;
  local_70 = FUN_1000d5218;
  puStack_68 = &DAT_100ec3228;
  local_58 = puVar3;
  aBlock = __Block_copy(&local_80);
  puVar4 = local_58;
  _swift_retain(puVar3);
  _swift_release(puVar4);
  objc_stub::performAsCurrentDrawingAppearance_(self,aBlock);
  __Block_release(aBlock);
  puVar4 = puVar3;
  _swift_isEscapingClosureAtFileLocation(puVar3,"",0x7e,0x21,0x3f,1);
  _swift_release(puVar2);
  _swift_release(puVar3);
  if (((ulong)puVar4 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1002360c0);
  (*pcVar1)();
}



/* Address: 0x1002360c0 | _TtC7PasteUI15LayerBackedView::viewDidChangeEffectiveAppearance */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC7PasteUI15LayerBackedView::viewDidChangeEffectiveAppearance(ID param_1,SEL param_2)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  char *pcVar4;
  objc_super local_40;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1001f7290();
  UVar3 = Swift::Actor::get_unownedExecutor();
  pcVar4 = (char *)UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar4 & 1) == 0) {
    pcVar4 = "PasteUI/LayerBackedView.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/LayerBackedView.swift",0x1d,1,0x1a,UVar3.unknown,pMVar1);
  }
  FUN_100236364();
  local_40.receiver = param_1;
  local_40.super_class = (class_t *)pcVar4;
  _objc_msgSendSuper2(&local_40,"viewDidChangeEffectiveAppearance");
  FUN_1002359f4();
  _swift_release(pMVar2);
  return;
}



/* Address: 0x100236188 | FUN_100236188 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

MainActor * FUN_100236188(ulong *param_1)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  ID IVar5;
  ID IVar6;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1001f7290();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/LayerBackedView.swift",0x1d,1,0x21,UVar3.unknown,pMVar1);
  }
  IVar5 = objc_stub::layer((ID)param_1);
  if (IVar5 != 0) {
    IVar6 = IVar5;
    (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *param_1) + 0x58))();
    if (IVar6 == 0) {
      IVar6 = 0;
    }
    else {
      IVar6 = objc_stub::CGColor(IVar6);
    }
    objc_stub::setBackgroundColor_(IVar5,IVar6);
  }
  IVar5 = objc_stub::layer((ID)param_1);
  if (IVar5 != 0) {
    IVar6 = objc_stub::borderColor((ID)param_1);
    if (IVar6 == 0) {
      IVar6 = 0;
    }
    else {
      IVar6 = objc_stub::CGColor(IVar6);
    }
    objc_stub::setBorderColor_(IVar5,IVar6);
    _swift_release(pMVar2);
    return (MainActor *)0x0;
  }
  _swift_release(pMVar2);
  return pMVar2;
}



/* Address: 0x100236314 | FUN_100236314 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100236314(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100236338 | FUN_100236338 */

void FUN_100236338(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100236348 | FUN_100236348 */

void FUN_100236348(long param_1,long param_2)

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



/* Address: 0x10023635c | FUN_10023635c */

void FUN_10023635c(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100236364 | FUN_100236364 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100236364(void)

{
  return ZEXT816(0x100f96e28);
}



/* Address: 0x100236384 | FUN_100236384 */

void FUN_100236384(void)

{
  FUN_100236364();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x1002363b4 | _TtC7PasteUI15LayerBackedView::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC7PasteUI15LayerBackedView::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}



/* Address: 0x1002363c4 | thunk_FUN_100236314 */

void thunk_FUN_100236314(void)

{
  FUN_100236314();
  return;
}



/* Address: 0x1002363c8 | thunk_FUN_100236314 */

void thunk_FUN_100236314(void)

{
  FUN_100236314();
  return;
}



/* Address: 0x1002363cc | thunk_FUN_100236314 */

void thunk_FUN_100236314(void)

{
  FUN_100236314();
  return;
}



/* Address: 0x1002363d0 | thunk_FUN_100236348 */

void thunk_FUN_100236348(long param_1,long param_2)

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



/* Address: 0x1002363d4 | thunk_FUN_100236348 */

void thunk_FUN_100236348(long param_1,long param_2)

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



/* Address: 0x1002363d8 | thunk_FUN_100236348 */

void thunk_FUN_100236348(long param_1,long param_2)

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



/* Address: 0x1002363dc | thunk_FUN_1001fe108 */

void thunk_FUN_1001fe108(void)

{
  long unaff_x20;
  
  FUN_100236188(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1002363e0 | thunk_FUN_10023635c */

void thunk_FUN_10023635c(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x1002363e4 | thunk_FUN_10023635c */

void thunk_FUN_10023635c(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x1002363e8 | thunk_FUN_10023635c */

void thunk_FUN_10023635c(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x1002363ec | thunk_FUN_100209b34 */

void thunk_FUN_100209b34(void)

{
  long unaff_x20;
  
  FUN_10009df20(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1002363f0 | thunk_FUN_100236338 */

void thunk_FUN_100236338(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1002363f4 | thunk_FUN_100236338 */

void thunk_FUN_100236338(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1002363f8 | thunk_FUN_100236338 */

void thunk_FUN_100236338(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1002363fc | FUN_1002363fc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID FUN_1002363fc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  NSString *pNVar2;
  ID self;
  long unaff_x20;
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _TtC7PasteUI8LazyMenu::populate);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _swift_retain(param_2);
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  self = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"initWithTitle:",pNVar2);
  objc_stub::setDelegate_(self,self);
  _swift_release(param_2);
  return self;
}



/* Address: 0x1002364ac | FUN_1002364ac */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID FUN_1002364ac(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  NSString *pNVar2;
  ID self;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + _TtC7PasteUI8LazyMenu::populate);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _swift_retain(param_2);
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  FUN_100236550();
  self = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"initWithTitle:",pNVar2);
  objc_stub::setDelegate_(self,self);
  _swift_release(param_2);
  return self;
}



/* Address: 0x100236550 | FUN_100236550 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100236550(void)

{
  return ZEXT816(0x100f96f00);
}



/* Address: 0x100236570 | FUN_100236570 */

void FUN_100236570(void)

{
  code *pcVar1;
  String SVar2;
  
  SVar2.bridgeObject = (void *)0x2;
  SVar2.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar2,(StaticString)0xd000000000000025,0x8000000100d8dc00,
             0xd9eb00);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1002365c8);
  (*pcVar1)();
}



/* Address: 0x1002365c8 | _TtC7PasteUI8LazyMenu::initWithCoder: */

/* Function Stack Size: 0x18 bytes */

ID _TtC7PasteUI8LazyMenu::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  code *pcVar1;
  String SVar2;
  
  SVar2.bridgeObject = (void *)0x2;
  SVar2.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar2,(StaticString)0xd000000000000025,0x8000000100d8dc00,
             0xd9eb00);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100236620);
  (*pcVar1)();
}



/* Address: 0x100236620 | FUN_100236620 */

void FUN_100236620(ID param_1)

{
  long unaff_x20;
  
  objc_stub::removeAllItems(param_1);
  (**(code **)(unaff_x20 + _TtC7PasteUI8LazyMenu::populate))(param_1);
  return;
}



/* Address: 0x100236658 | _TtC7PasteUI8LazyMenu::menuNeedsUpdate: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC7PasteUI8LazyMenu::menuNeedsUpdate_(ID param_1,SEL param_2,ID param_3)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1001f7290();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("PasteUI/LazyMenu.swift",0x16,1,0x16,UVar3.unknown,pMVar1);
  }
  objc_stub::removeAllItems(param_3);
  (**(code **)(param_1 + populate))(param_3);
  _swift_release(pMVar2);
  return;
}


