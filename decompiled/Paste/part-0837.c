/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1009142e8 | FUN_1009142e8 */

undefined8 * FUN_1009142e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  FUN_10090fd60(uVar4,uVar1);
  uVar3 = *param_1;
  *param_1 = uVar4;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  FUN_10090fdd4(uVar3,uVar2);
  return param_1;
}



/* Address: 0x100914338 | FUN_100914338 */

undefined8 * FUN_100914338(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  uVar3 = *param_1;
  *param_1 = *param_2;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  FUN_10090fdd4(uVar3,uVar2);
  return param_1;
}



/* Address: 0x100914374 | FUN_100914374 */

undefined1  [16] FUN_100914374(void)

{
  return ZEXT816(0x100f15a78);
}



/* Address: 0x100914384 | FUN_100914384 */

void FUN_100914384(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  UnownedSerialExecutor UVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_7;
  *(undefined8 *)(unaff_x22 + 0x78) = param_8;
  *(undefined8 *)(unaff_x22 + 0x60) = param_5;
  *(undefined8 *)(unaff_x22 + 0x68) = param_6;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  *(undefined8 *)(unaff_x22 + 0x58) = param_4;
  if (param_2 == 0) {
    UVar1.unknown = (undefined *)0x0;
    param_3 = 0;
  }
  else {
    _swift_getObjectType(param_2);
    UVar1 = Swift::Actor::get_unownedExecutor();
  }
  _swift_task_switch(FUN_1009143f8,UVar1.unknown,param_3);
  return;
}



/* Address: 0x1009143f8 | FUN_1009143f8 */

void FUN_1009143f8(void)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x50);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1005da450;
  _swift_continuation_init(unaff_x22 + 0x10,1);
  FUN_100914478();
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x100914478 | FUN_100914478 */

void FUN_100914478(UnsafeContinuation<undefined,undefined> param_1,code *param_2,undefined8 param_3,
                  char *param_4,void *param_5)

{
  CheckedContinuation CVar1;
  long lVar2;
  long lVar3;
  String function;
  
  FUN_1000f7830(&DAT_100febaf0,&DAT_100c83800);
  CVar1 = Swift::CheckedContinuation::typeMetadataAccessor();
  lVar3 = *(long *)(CVar1.unknown + -8);
  lVar2 = *(long *)(lVar3 + 0x40);
  _swift_bridgeObjectRetain(param_5);
  function.bridgeObject = param_5;
  function.str = param_4;
  Swift::CheckedContinuation::init(param_1,function);
  (*param_2)(&stack0xffffffffffffffa0 + -(lVar2 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar3 + 8))
            (&stack0xffffffffffffffa0 + -(lVar2 + 0xfU & 0xfffffffffffffff0),CVar1.unknown);
  return;
}



/* Address: 0x100914564 | FUN_100914564 */

void FUN_100914564(void)

{
  FUN_100914570(FUN_100902ec0);
  return;
}



/* Address: 0x100914570 | FUN_100914570 */

void FUN_100914570(code *param_1)

{
  _CocoaArrayWrapper _Var1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined *puVar5;
  
  puVar5 = (undefined *)*unaff_x20;
  puVar2 = puVar5;
  _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
  *unaff_x20 = puVar5;
  if ((((int)puVar2 == 0) || ((long)puVar5 < 0)) || (((ulong)puVar5 >> 0x3e & 1) != 0)) {
    if ((ulong)puVar5 >> 0x3e == 0) {
      lVar3 = *(long *)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
    }
    else {
      _Var1.unknown = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar5) {
        _Var1.unknown = puVar5;
      }
      lVar3 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    }
    uVar4 = 0;
    (*param_1)(0,lVar3 + 1,1,puVar5);
    *unaff_x20 = uVar4;
  }
  return;
}



/* Address: 0x1009145ec | FUN_1009145ec */

void FUN_1009145ec(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar3 = *unaff_x20;
  uVar4 = *(undefined8 *)(lVar3 + 0x10);
  puVar1 = &DAT_100fecdc0;
  FUN_1000f7830(&DAT_100fecdc0,&DAT_100c85ae0);
  _swift_allocObject();
  uVar6 = *(undefined8 *)(lVar3 + 0x20);
  uVar5 = *(undefined8 *)(lVar3 + 0x18);
  lVar2 = *(long *)(lVar3 + 0x18);
  *(undefined8 *)(puVar1 + 0x10) = uVar4;
  *(undefined8 *)(puVar1 + 0x20) = uVar6;
  *(undefined8 *)(puVar1 + 0x18) = uVar5;
  if (0 < lVar2) {
    FUN_100943814(puVar1 + 0x10,puVar1 + 0x28,(undefined8 *)(lVar3 + 0x10),lVar3 + 0x28);
  }
  _swift_release(lVar3);
  *unaff_x20 = (long)puVar1;
  return;
}



/* Address: 0x10091468c | FUN_10091468c */

void FUN_10091468c(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar3 = *unaff_x20;
  uVar4 = *(undefined8 *)(lVar3 + 0x10);
  puVar1 = &DAT_100fecdb0;
  FUN_1000f7830(&DAT_100fecdb0,&DAT_100c84b38);
  _swift_allocObject();
  uVar6 = *(undefined8 *)(lVar3 + 0x20);
  uVar5 = *(undefined8 *)(lVar3 + 0x18);
  lVar2 = *(long *)(lVar3 + 0x18);
  *(undefined8 *)(puVar1 + 0x10) = uVar4;
  *(undefined8 *)(puVar1 + 0x20) = uVar6;
  *(undefined8 *)(puVar1 + 0x18) = uVar5;
  if (0 < lVar2) {
    FUN_1009438f0(puVar1 + 0x10,puVar1 + 0x28,(undefined8 *)(lVar3 + 0x10),lVar3 + 0x28);
  }
  _swift_release(lVar3);
  *unaff_x20 = (long)puVar1;
  return;
}



/* Address: 0x100914728 | thunk_FUN_1007b8868 */

undefined8 thunk_FUN_1007b8868(void)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *unaff_x20;
  
  lVar4 = *unaff_x20;
  lVar5 = *(long *)(lVar4 + 0x18);
  lVar3 = *(long *)(lVar4 + 0x20) + lVar5;
  if (SCARRY8(*(long *)(lVar4 + 0x20),lVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1007b88cc);
    (*pcVar1)();
  }
  if (lVar5 < 0) {
    if ((lVar3 < 0) &&
       (bVar2 = SCARRY8(lVar3,*(long *)(lVar4 + 0x10)), lVar3 = lVar3 + *(long *)(lVar4 + 0x10),
       bVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1007b88d0);
      (*pcVar1)();
    }
  }
  else {
    lVar5 = *(long *)(lVar4 + 0x10);
    bVar2 = SBORROW8(lVar3,lVar5);
    if ((lVar5 <= lVar3) && (lVar3 = lVar3 - lVar5, bVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1007b8894);
      (*pcVar1)();
    }
  }
  if ((lVar3 != 0) && (lVar3 != unaff_x20[1])) {
    unaff_x20[1] = 0;
    unaff_x20[2] = lVar3;
    return 1;
  }
  return 0;
}



/* Address: 0x10091472c | FUN_10091472c */

undefined1  [16] FUN_10091472c(__uint64 param_1,undefined8 param_2,Hasher param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong *unaff_x20;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  uVar5 = *unaff_x20;
  uVar1 = Swift::Hasher::_hash(*(__int64 *)(uVar5 + 0x28),param_1,param_3);
  uVar4 = -1L << ((ulong)*(byte *)(uVar5 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar4 ^ 0xffffffffffffffff);
  if ((*(ulong *)(uVar5 + 0x38 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0) {
    do {
      if (*(__uint64 *)(*(long *)(uVar5 + 0x30) + uVar1 * 8) == param_1) {
        uVar4 = *unaff_x20;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar5 = *unaff_x20;
        if ((uVar4 & 1) == 0) {
          FUN_100914a04();
        }
        uVar2 = *(undefined8 *)(*(long *)(uVar5 + 0x30) + uVar1 * 8);
        FUN_100222c3c(uVar1);
        uVar3 = 0;
        *unaff_x20 = uVar5;
        goto LAB_1009147ec;
      }
      uVar1 = uVar1 + 1 & ~uVar4;
    } while ((*(ulong *)(uVar5 + 0x38 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  }
  uVar2 = 0;
  uVar3 = 1;
LAB_1009147ec:
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = uVar2;
  return auVar6;
}



/* Address: 0x100914814 | FUN_100914814 */

void FUN_100914814(long param_1)

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
  this = (_SetStorage *)&DAT_100fecda0;
  FUN_1000f7830(&DAT_100fecda0,&DAT_100c84b20);
  HVar5.unknown = (undefined *)0x0;
  p_Var3 = original;
  Swift::_SetStorage::_resize(this,original,capacity,false);
  if (*(long *)(original + 0x10) == 0) {
LAB_1009149d4:
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
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100914a00);
          (*pcVar2)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar12) goto LAB_1009149d4;
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
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100914a04);
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



/* Address: 0x100914a04 | FUN_100914a04 */

void FUN_100914a04(void)

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
  
  this = (_SetStorage *)&DAT_100fecda0;
  FUN_1000f7830(&DAT_100fecda0,&DAT_100c84b20);
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
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100914b44);
            (*pcVar2)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar5) goto LAB_100914b24;
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
LAB_100914b24:
  _swift_release(original);
  *unaff_x20 = (long)p_Var3;
  return;
}



/* Address: 0x100914b44 | FUN_100914b44 */

void FUN_100914b44(long param_1)

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
  this = (_SetStorage *)&DAT_100fecda0;
  FUN_1000f7830(&DAT_100fecda0,&DAT_100c84b20);
  HVar5.unknown = &DAT_00000001;
  p_Var3 = original;
  Swift::_SetStorage::_resize(this,original,capacity,true);
  if (*(long *)(original + 0x10) == 0) {
LAB_100914d34:
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
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100914d64);
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
          goto LAB_100914d34;
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
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100914d68);
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



/* Address: 0x100914d68 | FUN_100914d68 */

undefined8 FUN_100914d68(__uint64 *param_1,__uint64 param_2,Hasher param_3)

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
        goto LAB_100914e20;
      }
      uVar1 = uVar1 + 1 & ~uVar4;
    } while ((*(ulong *)(lVar5 + 0x38 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  }
  lVar5 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native(lVar5);
  lVar3 = *unaff_x20;
  FUN_100914e3c(param_2,uVar1,lVar5);
  *unaff_x20 = lVar3;
  uVar2 = 1;
LAB_100914e20:
  *param_1 = param_2;
  return uVar2;
}



/* Address: 0x100914e3c | FUN_100914e3c */

void FUN_100914e3c(__uint64 param_1,ulong param_2,ulong param_3)

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
      FUN_100914a04();
    }
  }
  else {
    if ((param_3 & 1) == 0) {
      FUN_100914814(uVar6 + 1);
    }
    else {
      FUN_100914b44();
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
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100914f44);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100914f34);
  (*pcVar2)();
}



/* Address: 0x100914f44 | FUN_100914f44 */

void FUN_100914f44(void)

{
  FUN_100915104();
  return;
}



/* Address: 0x100914f7c | FUN_100914f7c */

void FUN_100914f7c(void)

{
  FUN_100915104();
  return;
}



/* Address: 0x100914fb4 | FUN_100914fb4 */

void FUN_100914fb4(void)

{
  FUN_100915104();
  return;
}



/* Address: 0x100914fec | FUN_100914fec */

void FUN_100914fec(void)

{
  FUN_100915104();
  return;
}



/* Address: 0x100915024 | FUN_100915024 */

void FUN_100915024(void)

{
  FUN_100915104();
  return;
}



/* Address: 0x10091505c | FUN_10091505c */

void FUN_10091505c(void)

{
  FUN_100915104();
  return;
}



/* Address: 0x100915094 | FUN_100915094 */

void FUN_100915094(void)

{
  FUN_100915104();
  return;
}



/* Address: 0x1009150cc | FUN_1009150cc */

void FUN_1009150cc(void)

{
  FUN_100915104();
  return;
}



/* Address: 0x100915104 | FUN_100915104 */

/* WARNING: Removing unreachable block (ram,0x00010091534c) */

void FUN_100915104(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  code *param_9)

{
  byte bVar1;
  undefined1 uVar2;
  code *pcVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  String SVar11;
  ulong local_90 [3];
  undefined1 auStack_78 [24];
  
  _swift_allocObject(param_7,0x28,7);
  *(undefined8 *)(param_7 + 0x10) = param_4;
  *(undefined8 *)(param_7 + 0x18) = param_5;
  *(undefined8 *)(param_7 + 0x20) = param_6;
  lVar9 = *(long *)(param_3 + 0x10);
  lVar8 = *(long *)(lVar9 + 0x10);
  _swift_retain(param_4);
  _swift_retain(param_6);
  iVar4 = _pthread_mutex_lock((pthread_mutex_t *)(lVar8 + 0x10));
  if (iVar4 != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1009152d8);
    (*pcVar3)();
  }
  bVar7 = true;
  _swift_beginAccess(param_3 + 0x20,auStack_78,1,0);
  bVar1 = *(byte *)(param_3 + 0x28);
  uVar10 = (ulong)bVar1;
  if (bVar1 != 0) {
    uVar10 = *(ulong *)(param_3 + 0x20);
    if (bVar1 == 1) {
      *(undefined8 *)(param_3 + 0x20) = 1;
      *(undefined1 *)(param_3 + 0x28) = 2;
      lVar8 = *(long *)(uVar10 + 0x18);
      local_90[0] = uVar10;
      if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1009152e8);
        (*pcVar3)();
      }
      uVar5 = uVar10;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((*(long *)(uVar10 + 0x10) < lVar8 + 1) || ((uVar5 & 1) == 0)) {
        FUN_1009434a8();
        uVar10 = local_90[0];
      }
      FUN_100943cc4(uVar10 + 0x10,uVar10 + 0x28,param_8,param_7,param_1,param_2);
      uVar6 = *(undefined8 *)(param_3 + 0x20);
      *(ulong *)(param_3 + 0x20) = uVar10;
      uVar2 = *(undefined1 *)(param_3 + 0x28);
      uVar10 = 1;
      *(undefined1 *)(param_3 + 0x28) = 1;
      FUN_10090fdd4(uVar6,uVar2);
      bVar7 = false;
    }
    else {
      if (uVar10 != 0) {
        _swift_release(param_6);
        _swift_release(param_4);
        _swift_release(param_7);
        SVar11.bridgeObject = (void *)0x2;
        SVar11.str = (char *)0xb;
        Swift::_assertionFailure
                  ((StaticString)0x100d8deb0,SVar11,(StaticString)0xd000000000000017,
                   0x8000000100db4ab0,0xdb4ab0);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10091534c);
        (*pcVar3)();
      }
      uVar10 = 0;
      bVar7 = true;
    }
  }
  _swift_beginAccess(lVar9 + 0x18,local_90,1,0);
  if (!SCARRY8(*(long *)(lVar9 + 0x18),uVar10)) {
    *(ulong *)(lVar9 + 0x18) = *(long *)(lVar9 + 0x18) + uVar10;
    iVar4 = _pthread_mutex_unlock((pthread_mutex_t *)(*(long *)(lVar9 + 0x10) + 0x10));
    if (iVar4 != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1009152e0);
      (*pcVar3)();
    }
    if (bVar7) {
      (*param_9)(1,param_4,param_5,param_6);
    }
    else {
      iVar4 = _pthread_cond_signal(*(pthread_cond_t **)(lVar9 + 0x20));
      if (iVar4 != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1009152e4);
        (*pcVar3)();
      }
    }
    _swift_release(param_7);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1009152dc);
  (*pcVar3)();
}



/* Address: 0x100915360 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  FUN_100049040();
  return;
}



/* Address: 0x100915364 | FUN_100915364 */

void FUN_100915364(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100912ab8(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100915370 | FUN_100915370 */

void FUN_100915370(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fecd90 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c84938;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c84938,&DAT_100f158b8);
  DAT_100fecd90 = pTVar1;
  return;
}



/* Address: 0x1009153b0 | FUN_1009153b0 */

void FUN_1009153b0(void)

{
  FUN_100622760(PTR__swift_errorRelease_100eae218,0x20);
  return;
}



/* Address: 0x1009153c0 | FUN_1009153c0 */

void FUN_1009153c0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100912870(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1009153cc | FUN_1009153cc */

void FUN_1009153cc(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1009125e8(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1009153d8 | FUN_1009153d8 */

void FUN_1009153d8(void)

{
  long unaff_x20;
  
  FUN_10092ae4c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1009153e0 | FUN_1009153e0 */

void FUN_1009153e0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1009123a8(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1009153ec | FUN_1009153ec */

void FUN_1009153ec(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100912130(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1009153f8 | FUN_1009153f8 */

void FUN_1009153f8(void)

{
  long unaff_x20;
  
  FUN_10092ad8c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100915400 | FUN_100915400 */

void FUN_100915400(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100911f08(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x10091540c | FUN_10091540c */

void FUN_10091540c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100911ce4(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100915418 | FUN_100915418 */

void FUN_100915418(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100911a8c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100915424 | FUN_100915424 */

void FUN_100915424(void)

{
  long unaff_x20;
  
  FUN_10092acc8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10091542c | FUN_10091542c */

void FUN_10091542c(void)

{
  FUN_100622760(PTR__swift_release_100eae3e8,0x20);
  return;
}



/* Address: 0x10091543c | FUN_10091543c */

void FUN_10091543c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100913e1c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100915444 | thunk_FUN_10090efb8 */

void thunk_FUN_10090efb8(void)

{
  FUN_10090efb8();
  return;
}



/* Address: 0x100915448 | FUN_100915448 */

void FUN_100915448(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100912ff4(param_1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100915458 | FUN_100915458 */

void FUN_100915458(void)

{
  CheckedContinuation CVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  FUN_1000f8b08(&DAT_100febaf0,&DAT_100c83800);
  CVar1 = Swift::CheckedContinuation::typeMetadataAccessor();
  lVar2 = *(long *)(CVar1.unknown + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x28 & (uVar3 ^ 0xffffffffffffffff)),CVar1.unknown);
  _swift_deallocObject();
  return;
}



/* Address: 0x1009154ec | FUN_1009154ec */

void FUN_1009154ec(undefined8 param_1)

{
  CheckedContinuation CVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1000f8b08(&DAT_100febaf0,&DAT_100c83800);
  CVar1 = Swift::CheckedContinuation::typeMetadataAccessor();
  FUN_1009132d0(param_1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                unaff_x20 +
                ((ulong)*(byte *)(*(long *)(CVar1.unknown + -8) + 0x50) + 0x28 &
                ((ulong)*(byte *)(*(long *)(CVar1.unknown + -8) + 0x50) ^ 0xffffffffffffffff)),uVar2
               );
  return;
}



/* Address: 0x100915560 | FUN_100915560 */

void FUN_100915560(void)

{
  CancellationError CVar1;
  undefined *puVar2;
  
  if (DAT_100fecda8 != (undefined *)0x0) {
    return;
  }
  CVar1 = Swift::CancellationError::typeMetadataAccessor();
  puVar2 = PTR_Swift__Swift__CancellationError_>Swift__Error_100eaeb40;
  _swift_getWitnessTable(PTR_Swift__Swift__CancellationError_>Swift__Error_100eaeb40,CVar1.unknown);
  DAT_100fecda8 = puVar2;
  return;
}



/* Address: 0x1009155a4 | FUN_1009155a4 */

void FUN_1009155a4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x1009155d0 | FUN_1009155d0 */

void FUN_1009155d0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100912cf8(param_1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1009155dc | FUN_1009155dc */

void FUN_1009155dc(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x100915600 | FUN_100915600 */

void FUN_100915600(void)

{
  long unaff_x20;
  
  FUN_100910354(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100915608 | FUN_100915608 */

void FUN_100915608(long param_1,long param_2)

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



/* Address: 0x10091561c | FUN_10091561c */

void FUN_10091561c(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100915624 | FUN_100915624 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100915624(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x100915658 | FUN_100915658 */

void FUN_100915658(void)

{
  long unaff_x20;
  
  FUN_100910764(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x100915664 | FUN_100915664 */

void FUN_100915664(void)

{
  FUN_1009106bc();
  return;
}



/* Address: 0x10091566c | FUN_10091566c */

void FUN_10091566c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fecdb8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c84978;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c84978,&DAT_100f158d8);
  DAT_100fecdb8 = pTVar1;
  return;
}



/* Address: 0x1009156ac | thunk_FUN_1009155dc */

void thunk_FUN_1009155dc(void)

{
  FUN_1009155dc();
  return;
}



/* Address: 0x1009156b0 | thunk_FUN_1009155dc */

void thunk_FUN_1009155dc(void)

{
  FUN_1009155dc();
  return;
}



/* Address: 0x1009156b4 | thunk_FUN_1009155dc */

void thunk_FUN_1009155dc(void)

{
  FUN_1009155dc();
  return;
}



/* Address: 0x1009156b8 | thunk_FUN_1009155dc */

void thunk_FUN_1009155dc(void)

{
  FUN_1009155dc();
  return;
}



/* Address: 0x1009156bc | thunk_FUN_100915608 */

void thunk_FUN_100915608(long param_1,long param_2)

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



/* Address: 0x1009156c0 | thunk_FUN_100915608 */

void thunk_FUN_100915608(long param_1,long param_2)

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



/* Address: 0x1009156c4 | thunk_FUN_100915608 */

void thunk_FUN_100915608(long param_1,long param_2)

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


