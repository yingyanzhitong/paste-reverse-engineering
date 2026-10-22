/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1003f57dc | FUN_1003f57dc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_1003f57dc(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  FUN_1003f5724(&local_78);
  param_1[5] = uStack_50;
  param_1[4] = local_58;
  param_1[7] = uStack_40;
  param_1[6] = local_48;
  param_1[1] = uStack_70;
  *param_1 = local_78;
  param_1[3] = uStack_60;
  param_1[2] = local_68;
  param_1[8] = local_38;
  param_1[9] = uVar1;
  return uVar1;
}



/* Address: 0x1003f5838 | FUN_1003f5838 */

undefined8 FUN_1003f5838(__uint64 *param_1,__uint64 param_2,Hasher param_3)

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
        goto LAB_1003f58f0;
      }
      uVar1 = uVar1 + 1 & ~uVar4;
    } while ((*(ulong *)(lVar5 + 0x38 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  }
  lVar5 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native(lVar5);
  lVar3 = *unaff_x20;
  FUN_1003f590c(param_2,uVar1,lVar5);
  *unaff_x20 = lVar3;
  uVar2 = 1;
LAB_1003f58f0:
  *param_1 = param_2;
  return uVar2;
}



/* Address: 0x1003f590c | FUN_1003f590c */

void FUN_1003f590c(__uint64 param_1,ulong param_2,ulong param_3)

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
      FUN_1003f5c04();
    }
  }
  else {
    if ((param_3 & 1) == 0) {
      FUN_1003f5a14(uVar6 + 1);
    }
    else {
      FUN_1003f5d44();
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
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1003f5a14);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1003f5a04);
  (*pcVar2)();
}



/* Address: 0x1003f5a14 | FUN_1003f5a14 */

void FUN_1003f5a14(long param_1)

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
  this = (_SetStorage *)&DAT_100fc4368;
  FUN_1000037f0(&DAT_100fc4368,&DAT_100c46978);
  HVar5.unknown = (undefined *)0x0;
  p_Var3 = original;
  Swift::_SetStorage::_resize(this,original,capacity,false);
  if (*(long *)(original + 0x10) == 0) {
LAB_1003f5bd4:
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
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1003f5c00);
          (*pcVar2)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar12) goto LAB_1003f5bd4;
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
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1003f5c04);
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



/* Address: 0x1003f5c04 | FUN_1003f5c04 */

void FUN_1003f5c04(void)

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
  
  this = (_SetStorage *)&DAT_100fc4368;
  FUN_1000037f0(&DAT_100fc4368,&DAT_100c46978);
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
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1003f5d44);
            (*pcVar2)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar5) goto LAB_1003f5d24;
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
LAB_1003f5d24:
  _swift_release(original);
  *unaff_x20 = (long)p_Var3;
  return;
}



/* Address: 0x1003f5d44 | FUN_1003f5d44 */

void FUN_1003f5d44(long param_1)

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
  this = (_SetStorage *)&DAT_100fc4368;
  FUN_1000037f0(&DAT_100fc4368,&DAT_100c46978);
  HVar5.unknown = &DAT_00000001;
  p_Var3 = original;
  Swift::_SetStorage::_resize(this,original,capacity,true);
  if (*(long *)(original + 0x10) == 0) {
LAB_1003f5f34:
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
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1003f5f64);
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
          goto LAB_1003f5f34;
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
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1003f5f68);
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



/* Address: 0x1003f5f68 | FUN_1003f5f68 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 * FUN_1003f5f68(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_1;
  param_2[1] = param_1[1];
  *param_2 = uVar1;
  uVar2 = param_1[3];
  uVar1 = param_1[2];
  uVar4 = param_1[5];
  uVar3 = param_1[4];
  uVar6 = param_1[7];
  uVar5 = param_1[6];
  param_2[8] = param_1[8];
  param_2[5] = uVar4;
  param_2[4] = uVar3;
  param_2[7] = uVar6;
  param_2[6] = uVar5;
  param_2[3] = uVar2;
  param_2[2] = uVar1;
  param_2[9] = param_1[9];
  return param_2;
}



/* Address: 0x1003f5fb4 | FUN_1003f5fb4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003f5fb4(undefined8 param_1)

{
  return param_1;
}



/* Address: 0x1003f5fdc | FUN_1003f5fdc */

undefined8 * FUN_1003f5fdc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  return param_1;
}



/* Address: 0x1003f6030 | FUN_1003f6030 */

undefined1  [16] FUN_1003f6030(void)

{
  return ZEXT816(0x100ed0f98);
}



/* Address: 0x1003f6040 | FUN_1003f6040 */

void FUN_1003f6040(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  uVar4 = param_2[5];
  uVar3 = param_2[4];
  uVar6 = param_2[7];
  uVar5 = param_2[6];
  param_1[8] = param_2[8];
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  param_1[7] = uVar6;
  param_1[6] = uVar5;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  return;
}



/* Address: 0x1003f6064 | FUN_1003f6064 */

int FUN_1003f6064(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[0x12] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Address: 0x1003f6084 | FUN_1003f6084 */

void FUN_1003f6084(ulong *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  
  if (param_2 == 0) {
    if (param_3 == 0) {
      return;
    }
    uVar1 = 0;
  }
  else {
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    *param_1 = (ulong)(param_2 - 1);
    if (param_3 == 0) {
      return;
    }
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 9) = uVar1;
  return;
}



/* Address: 0x1003f60c0 | FUN_1003f60c0 */

undefined1  [16] FUN_1003f60c0(void)

{
  return ZEXT816(0x100ed1018);
}



/* Address: 0x1003f60d0 | FUN_1003f60d0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003f60d0(void)

{
  return 0;
}



/* Address: 0x1003f60d8 | FUN_1003f60d8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 * FUN_1003f60d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[4];
  uVar3 = param_2[7];
  uVar2 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  param_1[7] = uVar3;
  param_1[6] = uVar2;
  uVar3 = *param_2;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  uVar1 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  return param_1;
}



/* Address: 0x1003f6114 | FUN_1003f6114 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 * FUN_1003f6114(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  return param_1;
}



/* Address: 0x1003f6194 | FUN_1003f6194 */

void FUN_1003f6194(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  uVar4 = param_2[5];
  uVar3 = param_2[4];
  uVar5 = param_2[6];
  uVar7 = param_2[9];
  uVar6 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar5;
  param_1[9] = uVar7;
  param_1[8] = uVar6;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  return;
}



/* Address: 0x1003f61b0 | FUN_1003f61b0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 * FUN_1003f61b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = param_2[4];
  uVar3 = param_2[7];
  uVar2 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  param_1[7] = uVar3;
  param_1[6] = uVar2;
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  return param_1;
}



/* Address: 0x1003f61f8 | FUN_1003f61f8 */

int FUN_1003f61f8(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x14] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 0x12);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x1003f6240 | FUN_1003f6240 */

void FUN_1003f6240(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 10) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 10) = 0;
    }
    if (param_2 != 0) {
      param_1[9] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x1003f6294 | FUN_1003f6294 */

undefined1  [16] FUN_1003f6294(void)

{
  return ZEXT816(0x100ed10a0);
}



/* Address: 0x1003f62a4 | FUN_1003f62a4 */

void FUN_1003f62a4(undefined8 param_1,undefined8 param_2,double param_3,double param_4)

{
  ID *pIVar1;
  double *pdVar2;
  ID IVar3;
  ID IVar4;
  char cVar5;
  long unaff_x20;
  ID self;
  double extraout_d0;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  _swift_getObjectType();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff90,"invalidateIntrinsicContentSize");
  pIVar1 = (ID *)(unaff_x20 +
                 _TtCCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell6Button::content);
  dVar6 = (double)pIVar1[1];
  dVar7 = (double)pIVar1[2];
  cVar5 = (char)pIVar1[5];
  if (cVar5 == '\x01') {
    IVar3 = pIVar1[3];
    IVar4 = pIVar1[4];
    self = *pIVar1;
    FUN_1003f4ebc(self,dVar6,dVar7,IVar3,IVar4,1);
    dVar9 = 1.7976931348623157e+308;
    objc_stub::FUN_100bfe840(self,3);
    dVar8 = extraout_d0;
    FUN_1001ff668();
    FUN_1003f4e54(self,dVar6,dVar7,IVar3,IVar4,1);
  }
  else {
    dVar8 = 0.0;
    param_3 = 0.0;
    if (cVar5 != -1) {
      param_3 = dVar6;
    }
    param_4 = 0.0;
    if (cVar5 != -1) {
      param_4 = dVar7;
    }
    dVar9 = 0.0;
  }
  pdVar2 = (double *)
           (unaff_x20 +
           _TtCCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell6Button::
           preferredContentRect);
  *pdVar2 = dVar8;
  pdVar2[1] = dVar9;
  pdVar2[2] = param_3;
  pdVar2[3] = param_4;
  pdVar2 = (double *)
           (unaff_x20 +
           _TtCCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell6Button::
           preferredContentInsets);
  dVar8 = dVar8 - pdVar2[1];
  dVar9 = dVar9 - *pdVar2;
  dVar6 = param_3 + pdVar2[1] + pdVar2[3];
  dVar7 = param_4 + *pdVar2 + pdVar2[2];
  FUN_1001ff668();
  pdVar2 = (double *)
           (unaff_x20 +
           _TtCCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell6Button::preferredRect);
  *pdVar2 = dVar8;
  pdVar2[1] = dVar9;
  pdVar2[2] = dVar6;
  pdVar2[3] = dVar7;
  return;
}



/* Address: 0x1003f6400 | FUN_1003f6400 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003f6400(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  ID self;
  undefined8 *unaff_x20;
  
  puVar3 = unaff_x20;
  _swift_getObjectType();
  puVar1 = (undefined8 *)
           ((long)unaff_x20 +
           _TtCCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell6Button::content);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  *(undefined1 *)(puVar1 + 5) = 0xff;
  puVar1 = (undefined8 *)
           ((long)unaff_x20 +
           _TtCCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell6Button::clickHandler);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar2 = _TtCCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell6Button::
          normalBackgroundColor;
  FUN_1001fe1dc();
  puVar3 = (undefined8 *)*puVar3;
  *(undefined8 **)((long)unaff_x20 + lVar2) = puVar3;
  lVar2 = _TtCCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell6Button::
          highlightedBackgroundColor;
  FUN_1001ff0d0();
  *(undefined8 *)((long)unaff_x20 + lVar2) = *puVar3;
  puVar1 = (undefined8 *)
           ((long)unaff_x20 +
           _TtCCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell6Button::
           preferredContentRect);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1 = (undefined8 *)
           ((long)unaff_x20 +
           _TtCCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell6Button::preferredRect);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1 = (undefined8 *)
           ((long)unaff_x20 +
           _TtCCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell6Button::
           preferredContentInsets);
  puVar1[1] = 0x4028000000000000;
  *puVar1 = 0x4018000000000000;
  puVar1[3] = 0x4028000000000000;
  puVar1[2] = 0x4018000000000000;
  puVar1 = (undefined8 *)
           ((long)unaff_x20 +
           _TtCCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell6Button::
           minimumContentInsets);
  puVar1[1] = 0x4020000000000000;
  *puVar1 = 0x4018000000000000;
  puVar1[3] = 0x4020000000000000;
  puVar1[2] = 0x4018000000000000;
  self = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"initWithFrame:",0,0,0,0);
  objc_stub::setTarget_(self,self);
  objc_stub::setAction_(self,"didClick");
  return self;
}



/* Address: 0x1003f6540 | _TtCCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell6Button::init */

/* Function Stack Size: 0x10 bytes */

ID _TtCCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell6Button::init
             (ID param_1,SEL param_2)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  char *pcVar4;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1003d0b5c();
  UVar3 = Swift::Actor::get_unownedExecutor();
  pcVar4 = (char *)UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar4 & 1) == 0) {
    pcVar4 = "PasteCoreUI/Sidecar.CollectionView.NotificationCell.Button.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/Sidecar.CollectionView.NotificationCell.Button.swift",0x40,1,9,
               UVar3.unknown,pMVar1);
  }
  FUN_1003f6400();
  _swift_release(pMVar2);
  return (ID)pcVar4;
}



/* Address: 0x1003f65d8 | _TtCCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell6Button::initWithCoder: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtCCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell6Button::initWithCoder_
             (ID param_1,SEL param_2,ID param_3)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1003d0b5c();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/Sidecar.CollectionView.NotificationCell.Button.swift",0x40,1,0x10,
               UVar3.unknown,pMVar1);
  }
  FUN_1003f6ea8();
  _swift_release(pMVar2);
  return param_3;
}



/* Address: 0x1003f6684 | _TtCCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell6Button::didClick */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtCCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell6Button::didClick
               (ID param_1,SEL param_2)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  undefined8 uVar5;
  code *pcVar6;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1003d0b5c();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/Sidecar.CollectionView.NotificationCell.Button.swift",0x40,1,0x14,
               UVar3.unknown,pMVar1);
  }
  pcVar6 = *(code **)(param_1 + clickHandler);
  if (pcVar6 != (code *)0x0) {
    uVar5 = ((undefined8 *)(param_1 + clickHandler))[1];
    thunk_FUN_100011128(pcVar6,uVar5);
    (*pcVar6)();
    FUN_100004550(pcVar6,uVar5);
  }
  _swift_release(pMVar2);
  return;
}



/* Address: 0x1003f6750 | _TtCCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell6Button::isHighlighted */

/* Function Stack Size: 0x10 bytes */

bool _TtCCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell6Button::isHighlighted
               (ID param_1,SEL param_2)

{
  class_t *pcVar1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  ID IVar6;
  objc_super local_50;
  
  pcVar1 = (class_t *)param_1;
  _swift_getObjectType();
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  pMVar2 = pMVar3;
  FUN_1003d0b5c();
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/Sidecar.CollectionView.NotificationCell.Button.swift",0x40,1,0x1f,
               UVar4.unknown,pMVar2);
  }
  local_50.receiver = param_1;
  local_50.super_class = pcVar1;
  IVar6 = _objc_msgSendSuper2(&local_50,"isHighlighted");
  _swift_release(pMVar3);
  return (bool)IVar6;
}



/* Address: 0x1003f6808 | _TtCCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell6Button::setHighlighted: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x14 bytes */

void _TtCCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell6Button::setHighlighted_
               (ID param_1,SEL param_2,bool param_3)

{
  class_t *pcVar1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  objc_super local_50;
  
  pcVar1 = (class_t *)param_1;
  _swift_getObjectType();
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  pMVar2 = pMVar3;
  FUN_1003d0b5c();
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/Sidecar.CollectionView.NotificationCell.Button.swift",0x40,1,0x1f,
               UVar4.unknown,pMVar2);
  }
  local_50.receiver = param_1;
  local_50.super_class = pcVar1;
  _objc_msgSendSuper2(&local_50,"setHighlighted:",(ulong)param_3);
  objc_stub::setNeedsDisplay_(param_1,1);
  _swift_release(pMVar3);
  return;
}



/* Address: 0x1003f68e4 | _TtCCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell6Button::intrinsicContentSize */

/* Function Stack Size: 0x10 bytes */

CGSize _TtCCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell6Button::intrinsicContentSize
                 (ID param_1,SEL param_2)

{
  CGSize CVar1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  pMVar2 = pMVar3;
  FUN_1003d0b5c();
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/Sidecar.CollectionView.NotificationCell.Button.swift",0x40,1,0x21,
               UVar4.unknown,pMVar2);
  }
  CVar1 = *(CGSize *)(param_1 + preferredRect + 0x10);
  _swift_release(pMVar3);
  return CVar1;
}



/* Address: 0x1003f6988 | _TtCCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell6Button::invalidateIntrinsicContentSize */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtCCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell6Button::
     invalidateIntrinsicContentSize(ID param_1,SEL param_2)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1003d0b5c();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/Sidecar.CollectionView.NotificationCell.Button.swift",0x40,1,0x23,
               UVar3.unknown,pMVar1);
  }
  FUN_1003f62a4(param_1);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x1003f6a24 | FUN_1003f6a24 */

undefined8 FUN_1003f6a24(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ID unaff_x20;
  
  objc_stub::bounds(unaff_x20);
  _CGRectGetWidth();
  puVar1 = (undefined8 *)
           (unaff_x20 +
           _TtCCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell6Button::
           preferredContentInsets);
  puVar2 = (undefined8 *)
           (unaff_x20 +
           _TtCCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell6Button::
           preferredContentRect);
  _CGRectGetWidth(*puVar2,puVar2[1],puVar2[2],puVar2[3]);
  return *puVar1;
}



/* Address: 0x1003f6ac8 | _TtCCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell6Button::drawRect: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x30 bytes */

void _TtCCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell6Button::drawRect_
               (ID param_1,SEL param_2,CGRect param_3)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1003d0b5c();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/Sidecar.CollectionView.NotificationCell.Button.swift",0x40,1,0x2a,
               UVar3.unknown,pMVar1);
  }
  FUN_1003f6fb8(param_1);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x1003f6b64 | _TtCCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell6Button::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtCCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell6Button::initWithFrame_
             (ID param_1,SEL param_2,CGRect param_3)

{
  code *pcVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  FUN_1003d0b5c();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/Sidecar.CollectionView.NotificationCell.Button.swift",0x40,1,5,
               UVar3.unknown,pMVar2);
  }
  __swift_stdlib_reportUnimplementedInitializer("PasteCoreUI.Button",0x12,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003f6bec);
  (*pcVar1)();
}



/* Address: 0x1003f6bec | _TtCCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell6Button::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtCCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell6Button::_cxx_destruct
               (ID param_1,SEL param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + content);
  FUN_1003f4e54(*puVar1,puVar1[1],puVar1[2],puVar1[3],puVar1[4],*(undefined1 *)(puVar1 + 5));
  FUN_100004550(*(undefined8 *)(param_1 + clickHandler),((undefined8 *)(param_1 + clickHandler))[1])
  ;
  return;
}



/* Address: 0x1003f6c58 | FUN_1003f6c58 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1003f6c58(void)

{
  return ZEXT816(0x100f9bac0);
}



/* Address: 0x1003f6c78 | FUN_1003f6c78 */

void FUN_1003f6c78(undefined8 *param_1)

{
  FUN_1003f4e68(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],*(undefined1 *)(param_1 + 5));
  return;
}



/* Address: 0x1003f6c90 | FUN_1003f6c90 */

undefined8 * FUN_1003f6c90(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  uVar6 = param_2[4];
  uVar5 = *(undefined1 *)(param_2 + 5);
  FUN_1003f4ed0(uVar1,uVar3,uVar2,uVar4,uVar6,uVar5);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  param_1[4] = uVar6;
  *(undefined1 *)(param_1 + 5) = uVar5;
  return param_1;
}



/* Address: 0x1003f6d04 | FUN_1003f6d04 */

undefined8 * FUN_1003f6d04(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar1 = *param_2;
  uVar5 = param_2[1];
  uVar2 = param_2[2];
  uVar6 = param_2[3];
  uVar12 = param_2[4];
  uVar9 = *(undefined1 *)(param_2 + 5);
  FUN_1003f4ed0(uVar1,uVar5,uVar2,uVar6,uVar12,uVar9);
  uVar3 = *param_1;
  uVar7 = param_1[1];
  uVar4 = param_1[2];
  uVar8 = param_1[3];
  uVar11 = param_1[4];
  *param_1 = uVar1;
  param_1[1] = uVar5;
  param_1[2] = uVar2;
  param_1[3] = uVar6;
  param_1[4] = uVar12;
  uVar10 = *(undefined1 *)(param_1 + 5);
  *(undefined1 *)(param_1 + 5) = uVar9;
  FUN_1003f4e68(uVar3,uVar7,uVar4,uVar8,uVar11,uVar10);
  return param_1;
}



/* Address: 0x1003f6d8c | FUN_1003f6d8c */

void FUN_1003f6d8c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar5 = *(undefined8 *)((long)param_2 + 0x19);
  *(undefined8 *)((long)param_1 + 0x21) = *(undefined8 *)((long)param_2 + 0x21);
  *(undefined8 *)((long)param_1 + 0x19) = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  return;
}



/* Address: 0x1003f6da0 | FUN_1003f6da0 */

undefined8 * FUN_1003f6da0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar8 = param_2[4];
  uVar5 = *(undefined1 *)(param_2 + 5);
  uVar7 = *param_1;
  uVar1 = param_1[1];
  uVar3 = param_1[2];
  uVar2 = param_1[3];
  uVar4 = param_1[4];
  uVar9 = *param_2;
  uVar11 = param_2[3];
  uVar10 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar9;
  param_1[3] = uVar11;
  param_1[2] = uVar10;
  param_1[4] = uVar8;
  uVar6 = *(undefined1 *)(param_1 + 5);
  *(undefined1 *)(param_1 + 5) = uVar5;
  FUN_1003f4e68(uVar7,uVar1,uVar3,uVar2,uVar4,uVar6);
  return param_1;
}



/* Address: 0x1003f6df0 | FUN_1003f6df0 */

int FUN_1003f6df0(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0x29) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)(param_1 + 10) ^ 0xff;
  if (*(byte *)(param_1 + 10) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x1003f6e38 | FUN_1003f6e38 */

void FUN_1003f6e38(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xff) {
    if (0xfe < param_3) {
      *(undefined1 *)((long)param_1 + 0x29) = 0;
    }
    if (param_2 != 0) {
      *(char *)(param_1 + 5) = -(char)param_2;
      return;
    }
  }
  else {
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 5) = 0;
    *param_1 = (ulong)(param_2 - 0xff);
    if (0xfe < param_3) {
      *(undefined1 *)((long)param_1 + 0x29) = 1;
    }
  }
  return;
}



/* Address: 0x1003f6e88 | FUN_1003f6e88 */

undefined1 FUN_1003f6e88(long param_1)

{
  return *(undefined1 *)(param_1 + 0x28);
}



/* Address: 0x1003f6e90 | FUN_1003f6e90 */

void FUN_1003f6e90(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x28) = param_2;
  return;
}



/* Address: 0x1003f6e98 | FUN_1003f6e98 */

undefined1  [16] FUN_1003f6e98(void)

{
  return ZEXT816(0x100ed1150);
}



/* Address: 0x1003f6ea8 | FUN_1003f6ea8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1003f6ea8(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x20;
  String SVar4;
  
  puVar1 = (undefined8 *)
           (unaff_x20 +
           _TtCCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell6Button::content);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  *(undefined1 *)(puVar1 + 5) = 0xff;
  puVar1 = (undefined8 *)
           (unaff_x20 +
           _TtCCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell6Button::clickHandler);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar2 = _TtCCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell6Button::
          normalBackgroundColor;
  FUN_1001fe1dc();
  param_1 = (undefined8 *)*param_1;
  *(undefined8 **)(unaff_x20 + lVar2) = param_1;
  lVar2 = _TtCCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell6Button::
          highlightedBackgroundColor;
  FUN_1001ff0d0();
  *(undefined8 *)(unaff_x20 + lVar2) = *param_1;
  puVar1 = (undefined8 *)
           (unaff_x20 +
           _TtCCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell6Button::
           preferredContentRect);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1 = (undefined8 *)
           (unaff_x20 +
           _TtCCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell6Button::preferredRect);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1 = (undefined8 *)
           (unaff_x20 +
           _TtCCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell6Button::
           preferredContentInsets);
  *puVar1 = 0x4018000000000000;
  puVar1[1] = 0x4028000000000000;
  puVar1[2] = 0x4018000000000000;
  puVar1[3] = 0x4028000000000000;
  puVar1 = (undefined8 *)
           (unaff_x20 +
           _TtCCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell6Button::
           minimumContentInsets);
  *puVar1 = 0x4018000000000000;
  puVar1[1] = 0x4020000000000000;
  puVar1[2] = 0x4018000000000000;
  puVar1[3] = 0x4020000000000000;
  SVar4.bridgeObject = (void *)0x2;
  SVar4.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar4,(StaticString)0xd000000000000025,0x8000000100d8dc00,
             0xda59b0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1003f6fb8);
  (*pcVar3)();
}



/* Address: 0x1003f6fb8 | FUN_1003f6fb8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003f6fb8(undefined8 param_1,undefined8 param_2,double param_3,double param_4)

{
  ID *pIVar1;
  long *plVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  ID self;
  char cVar8;
  ID unaff_x20;
  ID IVar9;
  double extraout_d0;
  double dVar10;
  undefined8 extraout_d0_00;
  double extraout_d0_01;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  _swift_getObjectType();
  objc_stub::bounds(unaff_x20);
  dVar10 = extraout_d0;
  _CGRectGetHeight();
  dVar11 = 0.5;
  IVar5 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff60,"isHighlighted");
  plVar2 = &_TtCCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell6Button::
            highlightedBackgroundColor;
  if ((int)IVar5 == 0) {
    plVar2 = &_TtCCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell6Button::
              normalBackgroundColor;
  }
  IVar5 = *(ID *)(unaff_x20 + *plVar2);
  objc_stub::bounds(unaff_x20);
  IVar6 = objc_stub::bezierPathWithRoundedRect_xRadius_yRadius_
                    ((ID)&_OBJC_CLASS___NSBezierPath,extraout_d0_00,dVar11,param_3,param_4,
                     dVar10 * 0.5,dVar10 * 0.5);
  objc_stub::setFill(IVar5);
  objc_stub::fill(IVar6);
  objc_stub::bounds(unaff_x20);
  dVar10 = extraout_d0_01;
  dVar12 = dVar11;
  dVar14 = param_3;
  dVar13 = param_4;
  FUN_1003f6a24();
  pIVar1 = (ID *)(unaff_x20 +
                 _TtCCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell6Button::content);
  cVar8 = (char)pIVar1[5];
  if (cVar8 != -1) {
    dVar13 = (param_3 - dVar12) - dVar13;
    dVar14 = (param_4 - dVar10) - dVar14;
    IVar5 = *pIVar1;
    IVar3 = pIVar1[1];
    IVar6 = pIVar1[2];
    IVar4 = pIVar1[3];
    IVar9 = pIVar1[4];
    FUN_1003f4ed0(IVar5,IVar3,IVar6,IVar4,IVar9,cVar8);
    IVar7 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff50,"isHighlighted");
    if (cVar8 == '\x01') {
      objc_stub::FUN_100c01740(IVar5,extraout_d0_01 + dVar12,dVar11 + dVar10,dVar13,dVar14,3);
      cVar8 = '\x01';
    }
    else {
      self = IVar9;
      if (((uint)IVar7 & (uint)(IVar9 != 0)) == 0) {
        self = IVar4;
      }
      FUN_1000f453c();
      objc_stub::drawInRect_(self,extraout_d0_01 + dVar12,dVar11 + dVar10,dVar13,dVar14);
    }
    FUN_1003f4e54(IVar5,IVar3,IVar6,IVar4,IVar9,cVar8);
  }
  return;
}



/* Address: 0x1003f7228 | FUN_1003f7228 */

void FUN_1003f7228(void)

{
  FUN_1001ade50(&_TtCO11PasteCoreUI7Sidecar14CollectionView::onCloseClick,thunk_FUN_100011128);
  return;
}



/* Address: 0x1003f723c | FUN_1003f723c */

void FUN_1003f723c(undefined8 param_1,undefined8 param_2)

{
  FUN_1001adec4(param_1,param_2,&_TtCO11PasteCoreUI7Sidecar14CollectionView::onCloseClick,
                thunk_FUN_100004550);
  return;
}



/* Address: 0x1003f7250 | FUN_1003f7250 */

undefined1  [16] FUN_1003f7250(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _TtCO11PasteCoreUI7Sidecar14CollectionView::onCloseClick;
  _swift_beginAccess(unaff_x20 + _TtCO11PasteCoreUI7Sidecar14CollectionView::onCloseClick,param_1,
                     0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x1003f7290 | FUN_1003f7290 */

void FUN_1003f7290(void)

{
  FUN_1001ade50(&_TtCO11PasteCoreUI7Sidecar14CollectionView::onActionClick,thunk_FUN_100011128);
  return;
}



/* Address: 0x1003f72a4 | FUN_1003f72a4 */

void FUN_1003f72a4(undefined8 param_1,undefined8 param_2)

{
  FUN_1001adec4(param_1,param_2,&_TtCO11PasteCoreUI7Sidecar14CollectionView::onActionClick,
                thunk_FUN_100004550);
  return;
}



/* Address: 0x1003f72b8 | FUN_1003f72b8 */

undefined1  [16] FUN_1003f72b8(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _TtCO11PasteCoreUI7Sidecar14CollectionView::onActionClick;
  _swift_beginAccess(unaff_x20 + _TtCO11PasteCoreUI7Sidecar14CollectionView::onActionClick,param_1,
                     0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x1003f72f8 | FUN_1003f72f8 */

code * FUN_1003f72f8(void)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  code *pcVar6;
  long unaff_x20;
  undefined8 uVar7;
  
  lVar1 = _TtCO11PasteCoreUI7Sidecar14CollectionView::___lazy_storage___transitionManager;
  pcVar2 = *(code **)(unaff_x20 +
                     _TtCO11PasteCoreUI7Sidecar14CollectionView::___lazy_storage___transitionManager
                     );
  pcVar6 = pcVar2;
  if (pcVar2 == (code *)0x0) {
    puVar4 = &DAT_100ed1228;
    puVar3 = puVar4;
    _swift_allocObject(&DAT_100ed1228,0x18,7);
    _swift_unknownObjectWeakInit(puVar3 + 0x10);
    _swift_allocObject(&DAT_100ed1228,0x18,7);
    _swift_unknownObjectWeakInit(puVar4 + 0x10);
    puVar5 = &DAT_100fc4488;
    FUN_1000037f0(&DAT_100fc4488,&DAT_100c46a28);
    _swift_allocObject();
    pcVar6 = FUN_1003fa000;
    FUN_10022f450(FUN_1003fa000,puVar3,objc_stub::removeFromSuperview,0,FUN_1003fa008,puVar4,puVar5)
    ;
    uVar7 = *(undefined8 *)(unaff_x20 + lVar1);
    *(code **)(unaff_x20 + lVar1) = pcVar6;
    _swift_retain();
    _swift_release(uVar7);
    pcVar2 = (code *)0x0;
  }
  _swift_retain(pcVar2);
  return pcVar6;
}



/* Address: 0x1003f73f0 | FUN_1003f73f0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003f73f0(ID param_1,long param_2)

{
  undefined *self;
  ID IVar1;
  
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    FUN_1003f7454(param_1,0,1);
    return param_1;
  }
  self = &_OBJC_CLASS___NSView;
  _objc_allocWithZone();
  IVar1 = objc_stub::init((ID)self);
  return IVar1;
}



/* Address: 0x1003f7454 | FUN_1003f7454 */

ID FUN_1003f7454(ulong param_1,ulong param_2,char param_3)

{
  code *pcVar1;
  bool bVar2;
  ulong self;
  ID unaff_x20;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_a0 [40];
  double local_78 [2];
  double local_68;
  double local_50;
  
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1003f75a0);
    (*pcVar1)();
  }
  if (*(ulong *)(*(long *)(unaff_x20 + _TtCO11PasteCoreUI7Sidecar14CollectionView::items) + 0x10) <=
      param_1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1003f75a4);
    (*pcVar1)();
  }
  FUN_100076688(*(long *)(unaff_x20 + _TtCO11PasteCoreUI7Sidecar14CollectionView::items) +
                param_1 * 0x28 + 0x20,auStack_a0);
  self = param_1;
  FUN_1003f847c(param_1,auStack_a0);
  FUN_1003f8398(local_78);
  dVar3 = 80.0;
  if (6400.0 <= local_50 * local_50) {
    dVar3 = local_50;
  }
  bVar2 = 6400.0 <= local_50 * 200.0;
  dVar4 = 80.0;
  if (bVar2) {
    dVar4 = 200.0;
  }
  dVar6 = 80.0;
  if (bVar2) {
    dVar6 = local_50;
  }
  dVar5 = dVar3;
  if (200.0 < local_50) {
    dVar3 = dVar4;
    dVar5 = dVar6;
  }
  if (param_3 != '\x01') {
    param_1 = param_2;
  }
  local_78[0] = dVar3 + local_78[0];
  if (dVar3 * dVar5 <= 6400.0) {
    dVar3 = 80.0;
    dVar5 = 80.0;
  }
  objc_stub::setFrame_(self,local_68 + local_78[0] * (double)(long)param_1,0,dVar3,dVar5);
  objc_stub::addSubview_(unaff_x20,self);
  FUN_100004594(auStack_a0);
  return self;
}



/* Address: 0x1003f75a4 | objc_stub::removeFromSuperview */

ID __objc_msgSend_stub objc_stub::removeFromSuperview(ID self,...)

{
  ID IVar1;
  
  IVar1 = removeFromSuperview(self);
  return IVar1;
}



/* Address: 0x1003f75a8 | FUN_1003f75a8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003f75a8(ID param_1,undefined8 param_2,long param_3)

{
  objc_stub::removeFromSuperview(param_1);
  param_3 = param_3 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_3 != 0) {
    FUN_1003f7454(param_2,0,1);
    return 0;
  }
  return 0;
}



/* Address: 0x1003f7600 | FUN_1003f7600 */

void FUN_1003f7600(undefined8 param_1,undefined8 param_2)

{
  _objc_allocWithZone();
  FUN_1003f7640(param_1,param_2);
  return;
}



/* Address: 0x1003f7640 | FUN_1003f7640 */

void FUN_1003f7640(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  
  _swift_getObjectType();
  puVar1 = (undefined8 *)(unaff_x20 + _TtCO11PasteCoreUI7Sidecar14CollectionView::onCloseClick);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtCO11PasteCoreUI7Sidecar14CollectionView::onActionClick);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(unaff_x20 + _TtCO11PasteCoreUI7Sidecar14CollectionView::sizeClass) = 1;
  lVar2 = _TtCO11PasteCoreUI7Sidecar14CollectionView::transitionAnimator;
  uVar3 = 0;
  FUN_1001f6328();
  _swift_allocObject();
  FUN_1001f46dc();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  *(undefined **)(unaff_x20 + _TtCO11PasteCoreUI7Sidecar14CollectionView::items) =
       PTR___swiftEmptyArrayStorage_100eae0d8;
  *(undefined8 *)
   (unaff_x20 + _TtCO11PasteCoreUI7Sidecar14CollectionView::___lazy_storage___transitionManager) = 0
  ;
  lVar2 = _TtCO11PasteCoreUI7Sidecar14CollectionView::cells;
  FUN_1003cdd00();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  puVar1 = (undefined8 *)
           (unaff_x20 + _TtCO11PasteCoreUI7Sidecar14CollectionView::___lazy_storage___contentLayout)
  ;
  puVar1[6] = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 7) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _TtCO11PasteCoreUI7Sidecar14CollectionView::sizeUpdateHandler)
  ;
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffa0,"initWithFrame:",0,0,0,0);
  return;
}



/* Address: 0x1003f776c | _TtCO11PasteCoreUI7Sidecar14CollectionView::initWithCoder: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtCO11PasteCoreUI7Sidecar14CollectionView::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1003d0b5c();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/Sidecar.CollectionView.macOS.swift",0x2e,1,0x24,UVar3.unknown,pMVar1);
  }
  FUN_1003f9ae8();
  _swift_release(pMVar2);
  return param_3;
}



/* Address: 0x1003f7818 | FUN_1003f7818 */

void FUN_1003f7818(long param_1,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_90 [24];
  undefined8 local_78;
  long lStack_70;
  undefined *local_68;
  
  lVar2 = _TtCO11PasteCoreUI7Sidecar14CollectionView::items;
  lVar10 = *(long *)(unaff_x20 + _TtCO11PasteCoreUI7Sidecar14CollectionView::items);
  lVar11 = *(long *)(lVar10 + 0x10);
  puVar9 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar11 != 0) {
    local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
    _swift_bridgeObjectRetain(lVar10);
    FUN_1003f9484(0,lVar11,0);
    lVar5 = lVar10 + 0x20;
    do {
      puVar9 = local_68;
      FUN_100076688(lVar5,auStack_90);
      lVar4 = lStack_70;
      uVar8 = local_78;
      FUN_100004640(auStack_90,local_78);
      (**(code **)(lVar4 + 8))();
      FUN_100004594(auStack_90);
      uVar1 = *(ulong *)(puVar9 + 0x10);
      local_68 = puVar9;
      if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar1) {
        FUN_1003f9484(1 < *(ulong *)(puVar9 + 0x18),uVar1 + 1,1);
      }
      puVar9 = local_68;
      *(ulong *)(local_68 + 0x10) = uVar1 + 1;
      *(undefined8 *)(local_68 + uVar1 * 0x10 + 0x20) = uVar8;
      *(long *)(local_68 + uVar1 * 0x10 + 0x28) = lVar4;
      lVar5 = lVar5 + 0x28;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    _swift_bridgeObjectRelease(lVar10);
  }
  lVar11 = *(long *)(param_1 + 0x10);
  puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar11 != 0) {
    local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1003f9484(0,lVar11,0);
    lVar10 = param_1 + 0x20;
    do {
      puVar6 = local_68;
      FUN_100076688(lVar10,auStack_90);
      lVar5 = lStack_70;
      uVar8 = local_78;
      FUN_100004640(auStack_90,local_78);
      (**(code **)(lVar5 + 8))();
      FUN_100004594(auStack_90);
      uVar1 = *(ulong *)(puVar6 + 0x10);
      local_68 = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar1) {
        FUN_1003f9484(1 < *(ulong *)(puVar6 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(local_68 + 0x10) = uVar1 + 1;
      *(undefined8 *)(local_68 + uVar1 * 0x10 + 0x20) = uVar8;
      *(long *)(local_68 + uVar1 * 0x10 + 0x28) = lVar5;
      lVar10 = lVar10 + 0x28;
      lVar11 = lVar11 + -1;
      puVar6 = local_68;
    } while (lVar11 != 0);
  }
  _swift_bridgeObjectRetain(param_2);
  puVar7 = PTR___type_metadata_for_Swift_String_100eac208;
  FUN_1001b5a8c(puVar9,puVar6,param_2,PTR___type_metadata_for_Swift_String_100eac208,
                PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218);
  uVar8 = *(undefined8 *)(unaff_x20 + lVar2);
  *(long *)(unaff_x20 + lVar2) = param_1;
  _swift_bridgeObjectRetain(param_1);
  _swift_bridgeObjectRelease(uVar8);
  if ((param_3 & 1) == 0) {
    _swift_bridgeObjectRelease(puVar7);
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(puVar6);
    _swift_bridgeObjectRelease(puVar9);
    puVar9 = *(undefined **)(unaff_x20 + lVar2);
    _swift_bridgeObjectRetain(puVar9);
    FUN_1003f7ae8();
  }
  else {
    puVar3 = puVar9;
    FUN_1001aefb8(puVar9,puVar6,param_2,puVar7);
    if (((ulong)puVar3 & 1) == 0) {
      FUN_1003f7e44(puVar9,puVar6,param_2,puVar7);
    }
    _swift_bridgeObjectRelease(puVar7);
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(puVar6);
  }
  _swift_bridgeObjectRelease(puVar9);
  return;
}



/* Address: 0x1003f7ae8 | FUN_1003f7ae8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003f7ae8(long param_1)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  MainActor *pMVar5;
  MainActor *pMVar6;
  UnownedSerialExecutor UVar7;
  UnownedSerialExecutor UVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  undefined1 *puVar14;
  ulong uVar15;
  ulong uVar16;
  ID unaff_x20;
  MainActor *self;
  ulong uVar17;
  ulong *puVar18;
  long lVar19;
  long lVar20;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [40];
  undefined1 auStack_78 [24];
  
  lVar1 = _TtCO11PasteCoreUI7Sidecar14CollectionView::cells;
  _swift_beginAccess(unaff_x20 + _TtCO11PasteCoreUI7Sidecar14CollectionView::cells,auStack_78,1,0);
  lVar4 = *(long *)(unaff_x20 + lVar1);
  puVar18 = (ulong *)(lVar4 + 0x40);
  uVar16 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if (-uVar16 < 0x40) {
    uVar17 = ~(-1L << (-uVar16 & 0x3f));
  }
  uVar17 = uVar17 & *puVar18;
  _swift_bridgeObjectRetain_n(lVar4,2);
  lVar19 = 0;
  lVar20 = lVar19;
  while( true ) {
    for (; uVar17 != 0; uVar17 = uVar17 - 1 & uVar17) {
      uVar10 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      self = *(MainActor **)
              (*(long *)(lVar4 + 0x38) + LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) * 8 +
              lVar19 * 0x200);
      pMVar5 = Swift::MainActor::typeMetadataAccessor();
      pMVar6 = Swift::MainActor::get_shared(pMVar5,self);
      pMVar5 = pMVar6;
      FUN_1003d0b5c();
      UVar7 = Swift::Actor::get_unownedExecutor();
      UVar8 = UVar7;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar8.unknown & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("PasteCoreUI/Sidecar.CollectionView.macOS.swift",0x2e,1,0x7d,UVar7.unknown,pMVar5
                  );
      }
      objc_stub::removeFromSuperview((ID)self);
      _swift_release(pMVar6);
      lVar20 = lVar19;
    }
    bVar3 = SCARRY8(lVar19,1);
    lVar19 = lVar19 + 1;
    if (bVar3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1003f7e2c);
      (*pcVar2)();
    }
    if ((long)(0x3f - uVar16 >> 6) <= lVar19) break;
    uVar17 = puVar18[lVar19];
  }
  _swift_bridgeObjectRelease(lVar4);
  FUN_10000c650(lVar4,puVar18,~uVar16,lVar20,0);
  uVar9 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined **)(unaff_x20 + lVar1) = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  _swift_bridgeObjectRelease(uVar9);
  uVar17 = *(ulong *)(param_1 + 0x10);
  if (uVar17 != 0) {
    uVar16 = 0;
    param_1 = param_1 + 0x20;
    do {
      FUN_100076688(param_1,auStack_a0);
      uVar10 = uVar16;
      FUN_1003f847c(uVar16,auStack_a0);
      puVar14 = auStack_b8;
      _swift_beginAccess(unaff_x20 + lVar1,puVar14,0x21,0);
      uVar11 = *(ulong *)(unaff_x20 + lVar1);
      _swift_isUniquelyReferenced_nonNull_native();
      uVar13 = (uint)uVar11;
      lVar19 = *(long *)(unaff_x20 + lVar1);
      *(undefined8 *)(unaff_x20 + lVar1) = 0x8000000000000000;
      uVar12 = uVar16;
      thunk_FUN_10016f9fc();
      uVar15 = (ulong)~(uint)puVar14 & 1;
      lVar4 = *(long *)(lVar19 + 0x10) + uVar15;
      if (SCARRY8(*(long *)(lVar19 + 0x10),uVar15)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1003f7e30);
        (*pcVar2)();
      }
      if (*(long *)(lVar19 + 0x18) < lVar4) {
        FUN_1003e735c(lVar4);
        uVar12 = uVar16;
        thunk_FUN_10016f9fc();
        if (((uint)puVar14 & 1) != (uVar13 & 1)) {
          Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1003f7e44);
          (*pcVar2)();
        }
LAB_1003f7da4:
        if (((ulong)puVar14 & 1) != 0) goto LAB_1003f7ca0;
LAB_1003f7dac:
        lVar4 = lVar19 + (uVar12 >> 6) * 8;
        *(ulong *)(lVar4 + 0x40) = *(ulong *)(lVar4 + 0x40) | 1L << (uVar12 & 0x3f);
        *(ulong *)(*(long *)(lVar19 + 0x30) + uVar12 * 8) = uVar16;
        *(ulong *)(*(long *)(lVar19 + 0x38) + uVar12 * 8) = uVar10;
        lVar4 = *(long *)(lVar19 + 0x10) + 1;
        if (SCARRY8(*(long *)(lVar19 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1003f7e34);
          (*pcVar2)();
        }
        *(long *)(lVar19 + 0x10) = lVar4;
      }
      else {
        if ((uVar11 & 1) != 0) goto LAB_1003f7da4;
        FUN_1003e6f9c();
        if (((ulong)puVar14 & 1) == 0) goto LAB_1003f7dac;
LAB_1003f7ca0:
        lVar4 = *(long *)(*(long *)(lVar19 + 0x38) + uVar12 * 8);
        *(ulong *)(*(long *)(lVar19 + 0x38) + uVar12 * 8) = uVar10;
      }
      uVar16 = uVar16 + 1;
      *(long *)(unaff_x20 + lVar1) = lVar19;
      _swift_endAccess(lVar4,auStack_b8);
      objc_stub::addSubview_(unaff_x20,uVar10);
      FUN_100004594(auStack_a0);
      param_1 = param_1 + 0x28;
    } while (uVar17 != uVar16);
  }
  return;
}


