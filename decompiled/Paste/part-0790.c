/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1008b2694 | FUN_1008b2694 */

void FUN_1008b2694(long param_1)

{
  undefined8 *puVar1;
  String *pSVar2;
  __int64 capacity;
  char *pcVar3;
  void *pvVar4;
  String SVar5;
  bool bVar6;
  code *pcVar7;
  _SetStorage *this;
  __RawSetStorage *p_Var8;
  Hasher into;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  __RawSetStorage *original;
  __RawSetStorage *p_Var15;
  long lVar16;
  ulong uVar17;
  undefined1 auStack_a8 [72];
  
  original = (__RawSetStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_SetStorage *)&DAT_100feaca0;
  FUN_1000f7830(&DAT_100feaca0,&DAT_100c82448);
  p_Var8 = original;
  Swift::_SetStorage::_resize(this,original,capacity,true);
  if (*(long *)(original + 0x10) == 0) {
LAB_1008b28c4:
    _swift_release(original);
    *unaff_x20 = (long)p_Var8;
    return;
  }
  p_Var15 = original + 0x38;
  uVar13 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar17 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar17 = uVar17 & *(ulong *)p_Var15;
  lVar11 = 0;
  do {
    if (uVar17 == 0) {
      do {
        lVar16 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1008b28f4);
          (*pcVar7)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar16) {
          uVar17 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          if (((byte)original[0x20] & 0x3f) < 6) {
            *(long *)p_Var15 = -1L << (uVar17 & 0x3f);
          }
          else {
            _bzero(p_Var15,uVar17 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_1008b28c4;
        }
        uVar17 = *(ulong *)(p_Var15 + lVar16 * 8);
        lVar11 = lVar11 + 1;
      } while (uVar17 == 0);
      uVar10 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
    }
    else {
      uVar10 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
      lVar16 = lVar11;
    }
    pSVar2 = (String *)(*(long *)(original + 0x30) + (LZCOUNT(uVar10) | lVar16 << 6) * 0x10);
    pcVar3 = pSVar2->str;
    pvVar4 = pSVar2->bridgeObject;
    SVar5 = *pSVar2;
    Swift::Hasher::init(*(__int64 *)(p_Var8 + 0x28));
    into.unknown = auStack_a8;
    Swift::String::hash(into,SVar5);
    uVar9 = Swift::Hasher::_finalize(into);
    uVar14 = -1L << ((ulong)(byte)p_Var8[0x20] & 0x3f);
    uVar9 = uVar9 & (uVar14 ^ 0xffffffffffffffff);
    uVar12 = uVar9 >> 6;
    uVar10 = -1L << (uVar9 & 0x3f) & (*(ulong *)(p_Var8 + uVar12 * 8 + 0x38) ^ 0xffffffffffffffff);
    if (uVar10 == 0) {
      bVar6 = false;
      uVar10 = 0x3f - uVar14 >> 6;
      do {
        uVar9 = uVar12 + 1;
        if ((uVar9 == uVar10) && (bVar6)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1008b28f8);
          (*pcVar7)();
        }
        uVar12 = 0;
        if (uVar9 != uVar10) {
          uVar12 = uVar9;
        }
        bVar6 = (bool)(uVar9 == uVar10 | bVar6);
      } while (*(ulong *)(p_Var8 + uVar12 * 8 + 0x38) == 0xffffffffffffffff);
      uVar10 = ~*(ulong *)(p_Var8 + uVar12 * 8 + 0x38);
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
    *(ulong *)(p_Var8 + uVar12 + 0x38) = 1L << (uVar10 & 0x3f) | *(ulong *)(p_Var8 + uVar12 + 0x38);
    puVar1 = (undefined8 *)(*(long *)(p_Var8 + 0x30) + uVar10 * 0x10);
    *puVar1 = pcVar3;
    puVar1[1] = pvVar4;
    *(long *)(p_Var8 + 0x10) = *(long *)(p_Var8 + 0x10) + 1;
    lVar11 = lVar16;
  } while( true );
}



/* Address: 0x1008b28f8 | FUN_1008b28f8 */

undefined8 FUN_1008b28f8(long param_1,code *param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar3 = param_1 + 0x10;
  _swift_beginAccess(lVar3,auStack_68,0,0);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    uVar9 = *(undefined8 *)(param_1 + 0x10);
    _swift_beginAccess(param_4 + 0x10,auStack_80,1,0);
    uVar5 = 0;
    if (*(char *)(param_4 + 0x18) == -1) {
      *(undefined8 *)(param_4 + 0x10) = uVar9;
      *(undefined1 *)(param_4 + 0x18) = 1;
      _swift_beginAccess(param_4 + 0x30,auStack_98,1,0);
      uVar5 = *(undefined8 *)(param_4 + 0x30);
      *(undefined8 *)(param_4 + 0x38) = 0;
      *(undefined8 *)(param_4 + 0x40) = 0;
      *(undefined8 *)(param_4 + 0x30) = 0;
      _swift_errorRetain(uVar9);
    }
  }
  else {
    if (*(char *)(param_1 + 0x18) == -1) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1008b2cac);
      (*pcVar10)();
    }
    (*param_2)();
    uVar7 = *(ulong *)(lVar3 + 0x20);
    lVar1 = *(long *)(lVar3 + 0x28);
    uVar4 = uVar7;
    _swift_getObjectType();
    pcVar10 = *(code **)(lVar1 + 0x10);
    _swift_unknownObjectRetain(uVar7);
    (*pcVar10)(uVar4,lVar1);
    _swift_unknownObjectRelease(uVar7);
    if ((uVar4 & 1) == 0) {
      puVar6 = &DAT_100f0c570;
      _swift_allocObject(&DAT_100f0c570,0x28,7);
      *(code **)(puVar6 + 0x10) = thunk_FUN_100888164;
      *(long *)(puVar6 + 0x18) = param_4;
      *(long *)(puVar6 + 0x20) = lVar3;
      uVar7 = *(ulong *)(lVar3 + 0x20);
      lVar1 = *(long *)(lVar3 + 0x28);
      _swift_getObjectType();
      pcVar10 = *(code **)(lVar1 + 0x10);
      _swift_retain_n(param_4,4);
      _swift_retain_n(lVar3,2);
      uVar4 = uVar7;
      (*pcVar10)(uVar7,lVar1);
      if ((uVar4 & 1) == 0) {
        puVar8 = &DAT_100f0c598;
        _swift_allocObject(&DAT_100f0c598,0x28,7);
        *(long *)(puVar8 + 0x10) = lVar3;
        *(code **)(puVar8 + 0x18) = thunk_FUN_1006225d4;
        *(undefined **)(puVar8 + 0x20) = puVar6;
        pcVar10 = *(code **)(lVar1 + 0x18);
        _swift_retain(lVar3);
        _swift_retain(puVar6);
        (*pcVar10)(thunk_FUN_10088819c,puVar8,uVar7,lVar1);
        _swift_release(puVar8);
        _swift_release_n(lVar3,2);
        _swift_release_n(param_4,2);
        _swift_release(puVar6);
      }
      else {
        _swift_beginAccess(lVar3 + 0x10,auStack_80,0,0);
        cVar2 = *(char *)(lVar3 + 0x18);
        if (cVar2 == -1) {
          _swift_beginAccess(lVar3 + 0x30,auStack_98,0x21,0);
          FUN_10064967c(thunk_FUN_1006225d4,puVar6);
          _swift_endAccess(auStack_98);
        }
        else {
          uVar5 = *(undefined8 *)(lVar3 + 0x10);
          FUN_1005dfeb4(uVar5,cVar2);
          FUN_100892a8c(uVar5,cVar2,param_4);
          FUN_100308538(uVar5,cVar2);
        }
        FUN_1006486f8(0,0,0);
        FUN_100004550(0,0);
        _swift_release_n(lVar3,2);
        _swift_release_n(param_4,2);
        _swift_release(puVar6);
        _swift_bridgeObjectRelease(0);
      }
    }
    else {
      puVar6 = &DAT_100f0c5c0;
      _swift_allocObject(&DAT_100f0c5c0,0x20,7);
      *(long *)(puVar6 + 0x10) = param_4;
      *(long *)(puVar6 + 0x18) = lVar3;
      _swift_beginAccess(lVar3 + 0x10,auStack_80,0,0);
      if (*(char *)(lVar3 + 0x18) != -1) {
        uVar5 = *(undefined8 *)(lVar3 + 0x10);
        FUN_100630334(uVar5,*(char *)(lVar3 + 0x18),FUN_100308524);
        _swift_retain(param_4);
        _swift_release(puVar6);
        return uVar5;
      }
      _swift_beginAccess(lVar3 + 0x30,auStack_98,0x21,0);
      _swift_retain(param_4);
      _swift_retain(lVar3);
      FUN_10064967c(thunk_FUN_100894fc4,puVar6);
      _swift_endAccess(auStack_98);
      _swift_release(puVar6);
      param_4 = lVar3;
    }
    _swift_release(param_4);
    uVar5 = 0;
  }
  return uVar5;
}



/* Address: 0x1008b2cac | thunk_FUN_1008b2cb0 */

void thunk_FUN_1008b2cb0(void)

{
  FUN_1008b2cb0();
  return;
}



/* Address: 0x1008b2cb0 | FUN_1008b2cb0 */

void FUN_1008b2cb0(long param_1,undefined *param_2,ulong param_3,long param_4)

{
  _CocoaArrayWrapper _Var1;
  char cVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined *puVar19;
  code *pcVar20;
  long *plVar21;
  undefined8 uVar22;
  undefined1 uVar23;
  undefined8 uVar24;
  undefined *puVar25;
  undefined8 local_1e8;
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  if ((ulong)param_2 >> 0x3e == 0) {
    lVar16 = *(long *)((undefined *)((ulong)param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)param_2 & 0xffffffffffffff8);
    if (((ulong)param_2 & 0x8000000000000000) != 0) {
      _Var1.unknown = param_2;
    }
    lVar16 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (lVar16 == 0) {
    FUN_1008b39e8(0,0,param_1);
    return;
  }
  puVar3 = &DAT_100feaca8;
  FUN_1000f7830(&DAT_100feaca8,&DAT_100c82458);
  _swift_allocObject();
  *(ulong *)(puVar3 + 0x10) = param_3;
  *(long *)(puVar3 + 0x18) = param_4;
  plVar21 = (long *)(puVar3 + 0x20);
  *plVar21 = lVar16;
  puVar14 = (undefined *)((ulong)param_2 & 0xffffffffffffff8);
  if ((ulong)param_2 >> 0x3e == 0) {
    puVar19 = *(undefined **)(puVar14 + 0x10);
    uVar11 = param_3;
    lVar16 = param_4;
  }
  else {
    _Var1.unknown = puVar14;
    if (((ulong)param_2 & 0x8000000000000000) != 0) {
      _Var1.unknown = param_2;
    }
    puVar19 = (undefined *)Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    uVar11 = *(ulong *)(puVar3 + 0x10);
    lVar16 = *(long *)(puVar3 + 0x18);
  }
  uVar4 = param_3;
  _swift_getObjectType();
  _swift_unknownObjectRetain(param_3);
  _swift_beginAccess(plVar21,auStack_80,1,0);
  if (puVar19 != (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
    do {
      while( true ) {
        if (((ulong)param_2 & 0xc000000000000001) == 0) {
          if (*(undefined **)(puVar14 + 0x10) <= puVar8) {
                    /* WARNING: Does not return */
            pcVar20 = (code *)SoftwareBreakpoint(1,0x1008b3874);
            (*pcVar20)();
          }
          puVar25 = *(undefined **)(param_2 + (long)puVar8 * 8 + 0x20);
          _swift_retain(puVar25);
        }
        else {
          puVar25 = puVar8;
          FUN_1008b3ae8(puVar8,param_2);
        }
        if (SCARRY8((long)puVar8,1)) {
                    /* WARNING: Does not return */
          pcVar20 = (code *)SoftwareBreakpoint(1,0x1008b3870);
          (*pcVar20)();
        }
        puVar15 = puVar8 + 1;
        uVar18 = *(ulong *)(puVar25 + 0x20);
        lVar12 = *(long *)(puVar25 + 0x28);
        uVar10 = uVar18;
        _swift_getObjectType();
        pcVar20 = *(code **)(lVar12 + 0x10);
        _swift_unknownObjectRetain(uVar18);
        (*pcVar20)(uVar10,lVar12);
        _swift_unknownObjectRelease(uVar18);
        if ((uVar10 & 1) == 0) break;
        uVar13 = 0;
        _swift_beginAccess(puVar25 + 0x10,auStack_128,0,0);
        if (puVar25[0x18] == -1) break;
        if (puVar25[0x18] == '\x01') {
          uVar24 = *(undefined8 *)(puVar25 + 0x10);
          uVar11 = *(ulong *)(param_1 + 0x20);
          lVar16 = *(long *)(param_1 + 0x28);
          _swift_getObjectType();
          pcVar20 = *(code **)(lVar16 + 0x10);
          FUN_1005dfeb4(uVar24,1);
          FUN_100308524(uVar24,1);
          uVar4 = uVar11;
          lVar12 = lVar16;
          (*pcVar20)(uVar11,lVar16);
          if ((uVar4 & 1) == 0) {
            puVar14 = &DAT_100f0c700;
            _swift_allocObject(&DAT_100f0c700,0x20,7);
            *(long *)(puVar14 + 0x10) = param_1;
            *(undefined8 *)(puVar14 + 0x18) = uVar24;
            pcVar20 = *(code **)(lVar16 + 0x18);
            _swift_retain(param_1);
            FUN_1005dfeb4(uVar24,1);
            (*pcVar20)(thunk_FUN_1008777d0,puVar14,uVar11,lVar16);
            _swift_release(puVar3);
            _swift_release(puVar14);
          }
          else {
            uVar17 = uVar24;
            FUN_1005de8f4(uVar24);
            FUN_1006486f8();
            FUN_100004550(uVar17,lVar12);
            _swift_release(puVar3);
            _swift_bridgeObjectRelease(uVar13);
          }
          FUN_100308538(uVar24,1);
          _swift_release(puVar25);
          FUN_100308538(uVar24,1);
          return;
        }
        uVar18 = uVar11;
        _swift_getObjectType(uVar11);
        FUN_100642338();
        if (SBORROW8(*plVar21,1)) {
                    /* WARNING: Does not return */
          pcVar20 = (code *)SoftwareBreakpoint(1,0x1008b3878);
          (*pcVar20)();
        }
        *plVar21 = *plVar21 + -1;
        FUN_100642338(uVar18,lVar16);
        if (*plVar21 == 0) {
          uVar18 = *(ulong *)(param_1 + 0x20);
          lVar12 = *(long *)(param_1 + 0x28);
          _swift_getObjectType();
          uVar10 = uVar18;
          (**(code **)(lVar12 + 0x10))();
          if ((uVar10 & 1) == 0) {
            puVar5 = &DAT_100f0c728;
            _swift_allocObject(&DAT_100f0c728,0x21,7);
            *(long *)(puVar5 + 0x10) = param_1;
            *(undefined8 *)(puVar5 + 0x18) = 0;
            puVar5[0x20] = 0;
            pcVar20 = *(code **)(lVar12 + 0x18);
            _swift_retain(param_1);
            (*pcVar20)(thunk_FUN_1008b4da8,puVar5,uVar18,lVar12);
            _swift_release(puVar25);
            puVar25 = puVar5;
            goto LAB_1008b2db8;
          }
          _swift_beginAccess(param_1 + 0x10,auStack_140,1,0);
          uVar13 = 0;
          uVar24 = 0;
          uVar17 = 0;
          if (*(char *)(param_1 + 0x18) == -1) {
            *(undefined8 *)(param_1 + 0x10) = 0;
            *(undefined1 *)(param_1 + 0x18) = 0;
            _swift_beginAccess(param_1 + 0x30,auStack_158,1,0);
            uVar13 = *(undefined8 *)(param_1 + 0x30);
            uVar24 = *(undefined8 *)(param_1 + 0x38);
            uVar17 = *(undefined8 *)(param_1 + 0x40);
            *(undefined8 *)(param_1 + 0x30) = 0;
            *(undefined8 *)(param_1 + 0x38) = 0;
            *(undefined8 *)(param_1 + 0x40) = 0;
          }
          FUN_1006486f8(uVar13,uVar24,uVar17);
          FUN_100004550(uVar13,uVar24);
          _swift_release(puVar25);
          _swift_bridgeObjectRelease(uVar17);
        }
        else {
LAB_1008b2db8:
          _swift_release(puVar25);
        }
LAB_1008b2dbc:
        puVar8 = puVar8 + 1;
        if (puVar15 == puVar19) goto LAB_1008b3744;
      }
      puVar5 = &DAT_100f0c610;
      _swift_allocObject(&DAT_100f0c610,0x38,7);
      *(ulong *)(puVar5 + 0x10) = param_3;
      *(long *)(puVar5 + 0x18) = param_4;
      *(undefined **)(puVar5 + 0x20) = puVar3;
      *(long *)(puVar5 + 0x28) = param_1;
      *(undefined **)(puVar5 + 0x30) = puVar8;
      puVar6 = &DAT_100f0c638;
      _swift_allocObject(&DAT_100f0c638,0x28,7);
      *(code **)(puVar6 + 0x10) = FUN_1008b4be0;
      *(undefined **)(puVar6 + 0x18) = puVar5;
      *(undefined **)(puVar6 + 0x20) = puVar25;
      uVar18 = *(ulong *)(puVar25 + 0x20);
      lVar12 = *(long *)(puVar25 + 0x28);
      _swift_getObjectType();
      pcVar20 = *(code **)(lVar12 + 0x10);
      _swift_unknownObjectRetain_n(param_3,2);
      _swift_retain_n(param_1,2);
      _swift_retain_n(puVar3,2);
      _swift_retain_n(puVar5,2);
      _swift_retain_n(puVar25,2);
      (*pcVar20)(uVar18,lVar12);
      if ((uVar18 & 1) == 0) {
        _swift_release(param_1);
        _swift_release(puVar3);
        _swift_unknownObjectRelease(param_3);
        uVar13 = *(undefined8 *)(puVar25 + 0x20);
        lVar12 = *(long *)(puVar25 + 0x28);
        _swift_getObjectType(uVar13);
        puVar7 = &DAT_100f0c660;
        _swift_allocObject(&DAT_100f0c660,0x28,7);
        *(undefined **)(puVar7 + 0x10) = puVar25;
        *(code **)(puVar7 + 0x18) = thunk_FUN_1006225d4;
        *(undefined **)(puVar7 + 0x20) = puVar6;
        pcVar20 = *(code **)(lVar12 + 0x18);
        _swift_retain(puVar25);
        _swift_retain(puVar6);
        (*pcVar20)(thunk_FUN_10088819c,puVar7,uVar13,lVar12);
        _swift_release(puVar7);
        _swift_release_n(puVar25,2);
        _swift_release(puVar6);
        _swift_release_n(puVar5,2);
        goto LAB_1008b2dbc;
      }
      _swift_beginAccess(puVar25 + 0x10,auStack_98,0,0);
      cVar2 = puVar25[0x18];
      if (cVar2 == -1) {
        _swift_release(param_1);
        _swift_release(puVar3);
        _swift_unknownObjectRelease(param_3);
        _swift_beginAccess(puVar25 + 0x30,auStack_b0,0x21,0);
        if (*(long *)(puVar25 + 0x30) == 0) {
          *(code **)(puVar25 + 0x30) = thunk_FUN_1006225d4;
          *(undefined **)(puVar25 + 0x38) = puVar6;
LAB_1008b352c:
          _swift_retain(puVar6);
        }
        else {
          uVar18 = *(ulong *)(puVar25 + 0x40);
          if (uVar18 == 0) {
            puVar8 = &DAT_100feacb0;
            FUN_1000f7830(&DAT_100feacb0,&DAT_100c82460);
            _swift_allocObject();
            *(undefined8 *)(puVar8 + 0x18) = 2;
            *(undefined8 *)(puVar8 + 0x10) = 1;
            *(code **)(puVar8 + 0x20) = thunk_FUN_1006225d4;
            *(undefined **)(puVar8 + 0x28) = puVar6;
            *(undefined **)(puVar25 + 0x40) = puVar8;
            goto LAB_1008b352c;
          }
          _swift_retain(puVar6);
          uVar10 = uVar18;
          _swift_isUniquelyReferenced_nonNull_native();
          *(ulong *)(puVar25 + 0x40) = uVar18;
          uVar9 = uVar18;
          if ((uVar10 & 1) == 0) {
            uVar9 = 0;
            FUN_1008b1bdc(0,*(long *)(uVar18 + 0x10) + 1,1,uVar18);
            *(ulong *)(puVar25 + 0x40) = uVar9;
          }
          uVar18 = *(ulong *)(uVar9 + 0x10);
          uVar10 = uVar9;
          if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar18) {
            uVar10 = (ulong)(1 < *(ulong *)(uVar9 + 0x18));
            FUN_1008b1bdc(uVar10,uVar18 + 1,1,uVar9);
          }
          *(ulong *)(uVar10 + 0x10) = uVar18 + 1;
          lVar12 = uVar10 + uVar18 * 0x10;
          *(code **)(lVar12 + 0x20) = thunk_FUN_1006225d4;
          *(undefined **)(lVar12 + 0x28) = puVar6;
          *(ulong *)(puVar25 + 0x40) = uVar10;
        }
        _swift_endAccess(auStack_b0);
      }
      else {
        uVar13 = *(undefined8 *)(puVar25 + 0x10);
        if (cVar2 == '\x01') {
          uVar23 = 1;
          FUN_1005dfeb4(uVar13,1);
          FUN_100308524(uVar13,1);
          uVar18 = uVar4;
          (**(code **)(param_4 + 0x10))(uVar4,param_4);
          local_1e8 = uVar13;
          if ((uVar18 & 1) == 0) {
LAB_1008b3394:
            puVar7 = &DAT_100f0c688;
            _swift_allocObject(&DAT_100f0c688,0x31,7);
            *(undefined **)(puVar7 + 0x10) = puVar3;
            *(long *)(puVar7 + 0x18) = param_1;
            *(undefined **)(puVar7 + 0x20) = puVar8;
            *(undefined8 *)(puVar7 + 0x28) = local_1e8;
            puVar7[0x30] = uVar23;
            pcVar20 = *(code **)(param_4 + 0x18);
            _swift_retain(param_1);
            _swift_retain(puVar3);
            FUN_100308524(local_1e8,uVar23);
            (*pcVar20)(FUN_1008b4bfc,puVar7,uVar4,param_4);
            FUN_1002ec258(local_1e8,uVar23);
            _swift_release(param_1);
            _swift_release(puVar3);
            _swift_unknownObjectRelease(param_3);
            _swift_release(puVar7);
            FUN_100308538(uVar13,cVar2);
          }
          else {
            uVar18 = *(ulong *)(param_1 + 0x20);
            lVar12 = *(long *)(param_1 + 0x28);
            _swift_getObjectType();
            uVar10 = uVar18;
            (**(code **)(lVar12 + 0x10))();
            if ((uVar10 & 1) == 0) {
              puVar8 = &DAT_100f0c6b0;
              _swift_allocObject(&DAT_100f0c6b0,0x20,7);
              *(long *)(puVar8 + 0x10) = param_1;
              *(undefined8 *)(puVar8 + 0x18) = uVar13;
              pcVar20 = *(code **)(lVar12 + 0x18);
              _swift_retain(param_1);
              FUN_100308524(uVar13,1);
              (*pcVar20)(FUN_1008777d0,puVar8,uVar18,lVar12);
              _swift_release(puVar8);
              FUN_1002ec258(uVar13,1);
              _swift_release(param_1);
              _swift_release(puVar3);
              _swift_unknownObjectRelease(param_3);
              FUN_100308538(uVar13,1);
            }
            else {
              _swift_beginAccess(param_1 + 0x10,auStack_c8,1,0);
              uVar24 = 0;
              uVar17 = 0;
              uVar22 = 0;
              if (*(char *)(param_1 + 0x18) == -1) {
                *(undefined8 *)(param_1 + 0x10) = uVar13;
                *(undefined1 *)(param_1 + 0x18) = 1;
                _swift_beginAccess(param_1 + 0x30,auStack_e0,1,0);
                uVar24 = *(undefined8 *)(param_1 + 0x30);
                uVar17 = *(undefined8 *)(param_1 + 0x38);
                uVar22 = *(undefined8 *)(param_1 + 0x40);
                *(undefined8 *)(param_1 + 0x30) = 0;
                *(undefined8 *)(param_1 + 0x38) = 0;
                *(undefined8 *)(param_1 + 0x40) = 0;
                _swift_errorRetain(uVar13);
              }
              FUN_1006486f8(uVar24,uVar17,uVar22);
              FUN_100004550(uVar24,uVar17);
              _swift_bridgeObjectRelease(uVar22);
              FUN_1002ec258(uVar13,1);
              _swift_release(param_1);
              _swift_release(puVar3);
              _swift_unknownObjectRelease(param_3);
              FUN_100308538(uVar13,1);
            }
          }
        }
        else {
          uVar18 = uVar4;
          (**(code **)(param_4 + 0x10))(uVar4,param_4);
          if ((uVar18 & 1) == 0) {
            uVar23 = 0;
            goto LAB_1008b3394;
          }
          _swift_getObjectType(*(undefined8 *)(puVar3 + 0x10));
          FUN_100642338();
          if (SBORROW8(*(long *)(puVar3 + 0x20),1)) {
                    /* WARNING: Does not return */
            pcVar20 = (code *)SoftwareBreakpoint(1,0x1008b38bc);
            (*pcVar20)();
          }
          *(long *)(puVar3 + 0x20) = *(long *)(puVar3 + 0x20) + -1;
          _swift_getObjectType(*(undefined8 *)(puVar3 + 0x10));
          FUN_100642338();
          if (*(long *)(puVar3 + 0x20) == 0) {
            uVar18 = *(ulong *)(param_1 + 0x20);
            lVar12 = *(long *)(param_1 + 0x28);
            _swift_getObjectType();
            uVar10 = uVar18;
            (**(code **)(lVar12 + 0x10))();
            if ((uVar10 & 1) != 0) {
              _swift_beginAccess(param_1 + 0x10,auStack_f8,1,0);
              uVar24 = 0;
              uVar17 = 0;
              uVar22 = 0;
              if (*(char *)(param_1 + 0x18) == -1) {
                *(undefined8 *)(param_1 + 0x10) = 0;
                *(undefined1 *)(param_1 + 0x18) = 0;
                _swift_beginAccess(param_1 + 0x30,auStack_110,1,0);
                uVar24 = *(undefined8 *)(param_1 + 0x30);
                uVar17 = *(undefined8 *)(param_1 + 0x38);
                uVar22 = *(undefined8 *)(param_1 + 0x40);
                *(undefined8 *)(param_1 + 0x30) = 0;
                *(undefined8 *)(param_1 + 0x38) = 0;
                *(undefined8 *)(param_1 + 0x40) = 0;
              }
              FUN_1006486f8(uVar24,uVar17,uVar22);
              FUN_100004550(uVar24,uVar17);
              _swift_release(param_1);
              _swift_release(puVar3);
              _swift_unknownObjectRelease(param_3);
              _swift_bridgeObjectRelease(uVar22);
              FUN_100308538(uVar13,cVar2);
              goto LAB_1008b3688;
            }
            puVar8 = &DAT_100f0c6d8;
            _swift_allocObject(&DAT_100f0c6d8,0x21,7);
            *(long *)(puVar8 + 0x10) = param_1;
            *(undefined8 *)(puVar8 + 0x18) = 0;
            puVar8[0x20] = 0;
            pcVar20 = *(code **)(lVar12 + 0x18);
            _swift_retain(param_1);
            (*pcVar20)(thunk_FUN_1008b4da8,puVar8,uVar18,lVar12);
            _swift_release(param_1);
            _swift_release(puVar3);
            _swift_unknownObjectRelease(param_3);
            _swift_release(puVar8);
          }
          else {
            _swift_release(param_1);
            _swift_release(puVar3);
            _swift_unknownObjectRelease(param_3);
          }
          FUN_100308538(uVar13,cVar2);
        }
      }
LAB_1008b3688:
      FUN_1006486f8(0,0,0);
      FUN_100004550(0,0);
      _swift_release(puVar6);
      _swift_release_n(puVar5,2);
      _swift_release_n(puVar25,2);
      _swift_bridgeObjectRelease(0);
      puVar8 = puVar15;
    } while (puVar15 != puVar19);
  }
LAB_1008b3744:
  _swift_release(puVar3);
  return;
}



/* Address: 0x1008b38bc | FUN_1008b38bc */

void FUN_1008b38bc(undefined8 param_1,char param_2,ulong param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 unaff_x19;
  code *pcVar4;
  
  bVar1 = param_2 == '\x01';
  if (bVar1) {
    _swift_errorRetain();
    unaff_x19 = param_1;
  }
  _swift_getObjectType();
  uVar2 = param_3;
  (**(code **)(param_4 + 0x10))();
  if ((uVar2 & 1) == 0) {
    puVar3 = &DAT_100f0c7a0;
    _swift_allocObject(&DAT_100f0c7a0,0x31,7);
    *(undefined8 *)(puVar3 + 0x10) = param_5;
    *(undefined8 *)(puVar3 + 0x18) = param_6;
    *(undefined8 *)(puVar3 + 0x20) = param_7;
    *(undefined8 *)(puVar3 + 0x28) = unaff_x19;
    puVar3[0x30] = bVar1;
    pcVar4 = *(code **)(param_4 + 0x18);
    _swift_retain(param_5);
    _swift_retain(param_6);
    FUN_100308524(unaff_x19,bVar1);
    (*pcVar4)(thunk_FUN_1008b4bfc,puVar3,param_3,param_4);
    FUN_1002ec258(unaff_x19,bVar1);
    _swift_release(puVar3);
    return;
  }
  FUN_1008b4c10(unaff_x19,bVar1,param_5,param_6);
  FUN_1002ec258(unaff_x19,bVar1);
  return;
}



/* Address: 0x1008b39e8 | FUN_1008b39e8 */

void FUN_1008b39e8(undefined8 param_1,undefined8 param_2,long param_3)

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
  puVar4 = &DAT_100f0c778;
  _swift_allocObject(&DAT_100f0c778,0x21,7);
  *(long *)(puVar4 + 0x10) = param_3;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  puVar4[0x20] = (char)param_2;
  pcVar5 = *(code **)(lVar1 + 0x18);
  _swift_retain(param_3);
  FUN_100308524(param_1,param_2);
  (*pcVar5)(thunk_FUN_1008b4da8,puVar4,uVar2,lVar1);
  _swift_release(puVar4);
  return;
}



/* Address: 0x1008b3ae8 | FUN_1008b3ae8 */

ulong FUN_1008b3ae8(ulong param_1,undefined *param_2,char *param_3,void *param_4)

{
  char *pcVar1;
  _CocoaArrayWrapper _Var2;
  code *pcVar3;
  _StringGuts _Var4;
  ulong uVar5;
  char *pcVar6;
  undefined1 uVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  
  if ((ulong)param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1008b3bd0);
      (*pcVar3)();
    }
    if (*(ulong *)(((ulong)param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1008b3bd4);
      (*pcVar3)();
    }
    param_1 = *(ulong *)(((ulong)param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    _swift_unknownObjectRetain(param_1);
    _Var4.unknown = &DAT_100fe97c8;
    FUN_1000f7830(&DAT_100fe97c8,&DAT_100c803b0);
    uVar5 = param_1;
    _swift_dynamicCastClass();
    if (uVar5 != 0) {
      return param_1;
    }
    Swift::_StringGuts::grow(0x52,_Var4);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    pcVar6 = (char *)0xd000000000000043;
  }
  else {
    _Var2.unknown = (undefined *)((ulong)param_2 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_2) {
      _Var2.unknown = param_2;
    }
    Swift::_CocoaArrayWrapper::_get_subscript(param_1,_Var2);
    _Var4.unknown = &DAT_100fe97c8;
    FUN_1000f7830(&DAT_100fe97c8,&DAT_100c803b0);
    uVar5 = param_1;
    _swift_dynamicCastClass();
    if (uVar5 != 0) {
      return param_1;
    }
    Swift::_StringGuts::grow(0x55,_Var4);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    pcVar6 = (char *)0xd000000000000046;
  }
  uVar7 = (undefined1)param_1;
  SVar10.bridgeObject = (void *)((ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  SVar10.str = pcVar6;
  SVar12.bridgeObject = param_4;
  SVar12.str = param_3;
  Swift::String::append(SVar10,SVar12);
  SVar8.bridgeObject = (void *)0x8000000100db4430;
  SVar8.str = (char *)0xd000000000000013;
  SVar13.bridgeObject = param_4;
  SVar13.str = param_3;
  Swift::String::append(SVar8,SVar13);
  SVar9.bridgeObject = (void *)0xeb0000000020646e;
  SVar9.str = (char *)0x756f662074756220;
  SVar14.bridgeObject = param_4;
  SVar14.str = param_3;
  Swift::String::append(SVar9,SVar14);
  _swift_getObjectType();
  SVar10 = Swift::__typeName((bool)uVar7);
  SVar15.bridgeObject = param_4;
  SVar15.str = param_3;
  Swift::String::append(SVar10,SVar15);
  _swift_bridgeObjectRelease(SVar10.bridgeObject);
  SVar11.bridgeObject = (void *)0x2;
  SVar11.str = (char *)0xb;
  Swift::_assertionFailure((StaticString)0x100d8deb0,SVar11,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1008b3c9c);
  (*pcVar3)();
}



/* Address: 0x1008b3c9c | FUN_1008b3c9c */

void FUN_1008b3c9c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  code *pcVar3;
  
  uVar1 = *param_2;
  uVar2 = (ulong)*(byte *)(param_2 + 1);
  pcVar3 = FUN_100308524;
  FUN_100630334(uVar1,uVar2,FUN_100308524);
  FUN_1006486f8();
  FUN_100004550(uVar1,uVar2);
  _swift_bridgeObjectRelease(pcVar3);
  return;
}



/* Address: 0x1008b3cf4 | FUN_1008b3cf4 */

void FUN_1008b3cf4(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = *param_2;
  uVar2 = (ulong)*(ushort *)(param_2 + 1);
  FUN_1008b1fb0(uVar1,uVar2);
  FUN_1006486f8();
  FUN_100004550(uVar1,uVar2);
  _swift_bridgeObjectRelease(param_3);
  return;
}



/* Address: 0x1008b3d44 | FUN_1008b3d44 */

Set<undefined> FUN_1008b3d44(long param_1)

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
      FUN_1008b2068(auStack_58,uVar1,uVar2);
      _swift_bridgeObjectRelease(local_50);
      puVar3 = puVar3 + 2;
      minimumCapacity = minimumCapacity + -1;
    } while (minimumCapacity != 0);
  }
  return (Set<undefined>)local_48;
}



/* Address: 0x1008b3dd8 | FUN_1008b3dd8 */

undefined8 FUN_1008b3dd8(long param_1,long param_2,code *param_3,undefined8 param_4)

{
  long lVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar3 = param_1 + 0x10;
  _swift_beginAccess(lVar3,auStack_68,0,0);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    uVar9 = *(undefined8 *)(param_1 + 0x10);
    _swift_beginAccess(param_2 + 0x10,auStack_80,1,0);
    uVar5 = 0;
    if (*(char *)(param_2 + 0x18) == -1) {
      *(undefined8 *)(param_2 + 0x10) = uVar9;
      *(undefined1 *)(param_2 + 0x18) = 1;
      _swift_beginAccess(param_2 + 0x30,auStack_98,1,0);
      uVar5 = *(undefined8 *)(param_2 + 0x30);
      *(undefined8 *)(param_2 + 0x38) = 0;
      *(undefined8 *)(param_2 + 0x40) = 0;
      *(undefined8 *)(param_2 + 0x30) = 0;
      _swift_errorRetain(uVar9);
    }
  }
  else {
    if (*(char *)(param_1 + 0x18) == -1) {
      _swift_release(param_4);
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1008b4194);
      (*pcVar10)();
    }
    (*param_3)();
    uVar7 = *(ulong *)(lVar3 + 0x20);
    lVar1 = *(long *)(lVar3 + 0x28);
    uVar4 = uVar7;
    _swift_getObjectType();
    pcVar10 = *(code **)(lVar1 + 0x10);
    _swift_unknownObjectRetain(uVar7);
    (*pcVar10)(uVar4,lVar1);
    _swift_unknownObjectRelease(uVar7);
    if ((uVar4 & 1) == 0) {
      puVar6 = &DAT_100f0c4f8;
      _swift_allocObject(&DAT_100f0c4f8,0x28,7);
      *(code **)(puVar6 + 0x10) = FUN_100888164;
      *(long *)(puVar6 + 0x18) = param_2;
      *(long *)(puVar6 + 0x20) = lVar3;
      uVar7 = *(ulong *)(lVar3 + 0x20);
      lVar1 = *(long *)(lVar3 + 0x28);
      _swift_getObjectType();
      pcVar10 = *(code **)(lVar1 + 0x10);
      _swift_retain_n(param_2,4);
      _swift_retain_n(lVar3,2);
      uVar4 = uVar7;
      (*pcVar10)(uVar7,lVar1);
      if ((uVar4 & 1) == 0) {
        puVar8 = &DAT_100f0c520;
        _swift_allocObject(&DAT_100f0c520,0x28,7);
        *(long *)(puVar8 + 0x10) = lVar3;
        *(code **)(puVar8 + 0x18) = FUN_1006225d4;
        *(undefined **)(puVar8 + 0x20) = puVar6;
        pcVar10 = *(code **)(lVar1 + 0x18);
        _swift_retain(lVar3);
        _swift_retain(puVar6);
        (*pcVar10)(FUN_10088819c,puVar8,uVar7,lVar1);
        _swift_release(puVar8);
        _swift_release_n(lVar3,2);
        _swift_release_n(param_2,2);
        _swift_release(puVar6);
      }
      else {
        _swift_beginAccess(lVar3 + 0x10,auStack_80,0,0);
        cVar2 = *(char *)(lVar3 + 0x18);
        if (cVar2 == -1) {
          _swift_beginAccess(lVar3 + 0x30,auStack_98,0x21,0);
          FUN_10064967c(FUN_1006225d4,puVar6);
          _swift_endAccess(auStack_98);
        }
        else {
          uVar5 = *(undefined8 *)(lVar3 + 0x10);
          FUN_100308524(uVar5,cVar2);
          FUN_100892a8c(uVar5,cVar2,param_2);
          FUN_100308538(uVar5,cVar2);
        }
        FUN_1006486f8(0,0,0);
        FUN_100004550(0,0);
        _swift_release_n(lVar3,2);
        _swift_release_n(param_2,2);
        _swift_release(puVar6);
        _swift_bridgeObjectRelease(0);
      }
    }
    else {
      puVar6 = &DAT_100f0c548;
      _swift_allocObject(&DAT_100f0c548,0x20,7);
      *(long *)(puVar6 + 0x10) = param_2;
      *(long *)(puVar6 + 0x18) = lVar3;
      _swift_beginAccess(lVar3 + 0x10,auStack_80,0,0);
      if (*(char *)(lVar3 + 0x18) != -1) {
        uVar5 = *(undefined8 *)(lVar3 + 0x10);
        FUN_100630334(uVar5,*(char *)(lVar3 + 0x18),FUN_100308524);
        _swift_retain(param_2);
        _swift_release(puVar6);
        return uVar5;
      }
      _swift_beginAccess(lVar3 + 0x30,auStack_98,0x21,0);
      _swift_retain(param_2);
      _swift_retain(lVar3);
      FUN_10064967c(FUN_100894fc4,puVar6);
      _swift_endAccess(auStack_98);
      _swift_release(puVar6);
      param_2 = lVar3;
    }
    _swift_release(param_2);
    uVar5 = 0;
  }
  return uVar5;
}



/* Address: 0x1008b4194 | FUN_1008b4194 */

undefined * FUN_1008b4194(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  puVar1 = &DAT_100f0c4a8;
  _swift_allocObject(&DAT_100f0c4a8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  puVar2 = &DAT_100fe97c8;
  FUN_1000f7830(&DAT_100fe97c8,&DAT_100c803b0);
  _swift_allocObject();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(puVar2 + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(puVar2 + 0x20) = uVar5;
  *(undefined8 *)(puVar2 + 0x10) = 0;
  puVar2[0x18] = 0xff;
  *(undefined8 *)(puVar2 + 0x38) = 0;
  *(undefined8 *)(puVar2 + 0x40) = 0;
  *(undefined8 *)(puVar2 + 0x30) = 0;
  puVar3 = &DAT_100f0c4d0;
  _swift_allocObject(&DAT_100f0c4d0,0x30,7);
  *(long *)(puVar3 + 0x10) = param_1;
  *(code **)(puVar3 + 0x18) = FUN_1000386a0;
  *(undefined **)(puVar3 + 0x20) = puVar1;
  *(undefined **)(puVar3 + 0x28) = puVar2;
  _swift_beginAccess(param_1 + 0x10,auStack_58,0,0);
  if (*(char *)(param_1 + 0x18) == -1) {
    _swift_beginAccess(param_1 + 0x30,auStack_70,0x21,0);
    _swift_retain(param_3);
    _swift_unknownObjectRetain(uVar5);
    _swift_retain(puVar2);
    _swift_retain(puVar1);
    _swift_retain(param_1);
    FUN_10064967c(FUN_1008b4a14,puVar3);
    _swift_endAccess(auStack_70);
    param_1 = 0;
    puVar4 = (undefined *)0x0;
    param_2 = 0;
  }
  else {
    _swift_retain(param_3);
    _swift_unknownObjectRetain(uVar5);
    _swift_retain(puVar2);
    _swift_retain(puVar1);
    _swift_retain(param_1);
    puVar4 = puVar2;
    FUN_1008b3dd8();
  }
  FUN_1006486f8(param_1,puVar4,param_2);
  FUN_100004550(param_1,puVar4);
  _swift_release(puVar1);
  _swift_release(puVar3);
  _swift_bridgeObjectRelease(param_2);
  return puVar2;
}



/* Address: 0x1008b4364 | FUN_1008b4364 */

void FUN_1008b4364(void)

{
  code *pcVar1;
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0xa8) != 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008b4374);
  (*pcVar1)();
}



/* Address: 0x1008b4374 | FUN_1008b4374 */

void FUN_1008b4374(void)

{
  code *pcVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long *unaff_x20;
  undefined8 auStack_48 [3];
  
  lVar5 = *unaff_x20;
  _swift_beginAccess(unaff_x20 + 7,auStack_48,0x21,0);
  uVar6 = *(undefined8 *)(lVar5 + 0x50);
  uVar2 = 0;
  FUN_1008b5294(0,uVar6);
  FUN_1008b5888();
  puVar3 = auStack_48;
  _swift_endAccess();
  if ((uVar2 & 0xff) != 1) {
    lVar5 = unaff_x20[0x15];
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008b4444);
      (*pcVar1)();
    }
    FUN_1008ac4dc();
    puVar4 = &DAT_100eeb710;
    _swift_allocError(&DAT_100eeb710,puVar3,0,0);
    *puVar3 = 0xc;
    *(undefined1 *)(puVar3 + 1) = 3;
    _swift_retain(lVar5);
    FUN_100646f54(puVar4,lVar5,uVar6);
    _swift_release(lVar5);
    _swift_errorRelease(puVar4);
  }
  return;
}



/* Address: 0x1008b4444 | thunk_FUN_1008b4470 */

void thunk_FUN_1008b4470(void)

{
  FUN_1008b4470();
  return;
}



/* Address: 0x1008b4448 | FUN_1008b4448 */

void FUN_1008b4448(undefined8 *param_1)

{
  _swift_bridgeObjectRelease(*param_1);
  _swift_release(param_1[2]);
  return;
}



/* Address: 0x1008b4470 | FUN_1008b4470 */

undefined8 * FUN_1008b4470(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[2];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_1[2] = uVar1;
  _swift_bridgeObjectRetain(uVar2);
  _swift_retain(uVar1);
  return param_1;
}



/* Address: 0x1008b44b0 | FUN_1008b44b0 */

undefined8 * FUN_1008b44b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_1[2];
  uVar1 = param_2[2];
  uVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar3;
  _swift_retain(uVar1);
  _swift_release(uVar2);
  return param_1;
}



/* Address: 0x1008b4510 | FUN_1008b4510 */

undefined8 * FUN_1008b4510(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_bridgeObjectRelease(*param_1);
  uVar2 = param_2[2];
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = param_1[2];
  param_1[2] = uVar2;
  _swift_release(uVar1);
  return param_1;
}



/* Address: 0x1008b4554 | FUN_1008b4554 */

void FUN_1008b4554(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1008b4560 | FUN_1008b4560 */

void FUN_1008b4560(long param_1)

{
  undefined *local_40;
  undefined *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  undefined *local_20;
  undefined *puStack_18;
  
  local_40 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40;
  puStack_38 = PTR___value_witness_table_for_____>____100eae0d0 + 0x40;
  local_30 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
  local_20 = &DAT_100c82408;
  puStack_18 = &DAT_100c82420;
  puStack_28 = local_40;
  _swift_initClassMetadata2(param_1,0,6,&local_40,param_1 + 0x58);
  return;
}



/* Address: 0x1008b45d4 | FUN_1008b45d4 */

void FUN_1008b45d4(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1008b45e0 | FUN_1008b45e0 */

void FUN_1008b45e0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x1008b461c | FUN_1008b461c */

void FUN_1008b461c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1008b115c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined1 *)(unaff_x20 + 0x30),param_1);
  return;
}



/* Address: 0x1008b464c | FUN_1008b464c */

void FUN_1008b464c(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x1008b4680 | FUN_1008b4680 */

undefined8 FUN_1008b4680(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100feac98;
  FUN_1000f7830(&DAT_100feac98,&DAT_100c82438);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1008b46d0 | FUN_1008b46d0 */

void FUN_1008b46d0(void)

{
  FUN_10061e580(PTR__swift_release_100eae3e8);
  return;
}



/* Address: 0x1008b46dc | FUN_1008b46dc */

void FUN_1008b46dc(undefined8 param_1)

{
  long unaff_x20;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  local_30 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  FUN_1008b0740(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),param_1,
                &local_50);
  return;
}



/* Address: 0x1008b471c | FUN_1008b471c */

void FUN_1008b471c(void)

{
  long unaff_x20;
  
  FUN_100004594(unaff_x20 + 0x18);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_deallocObject();
  return;
}



/* Address: 0x1008b4748 | FUN_1008b4748 */

void FUN_1008b4748(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1008b181c(param_1,unaff_x20 + 0x18,*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1008b4758 | FUN_1008b4758 */

void FUN_1008b4758(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_deallocObject();
  return;
}



/* Address: 0x1008b47ac | FUN_1008b47ac */

void FUN_1008b47ac(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1008b187c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined1 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Address: 0x1008b47e0 | FUN_1008b47e0 */

void FUN_1008b47e0(undefined8 *param_1)

{
  FUN_100892b8c(*param_1,*(undefined2 *)(param_1 + 1));
  return;
}



/* Address: 0x1008b47f4 | FUN_1008b47f4 */

void FUN_1008b47f4(void)

{
  long unaff_x20;
  
  FUN_100892cc4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1008b4800 | FUN_1008b4800 */

void FUN_1008b4800(void)

{
  long unaff_x20;
  
  FUN_100892d54(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1008b480c | FUN_1008b480c */

void FUN_1008b480c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_10081c820(*(undefined8 *)(unaff_x20 + 0x18),*(undefined1 *)(unaff_x20 + 0x20),
                *(undefined1 *)(unaff_x20 + 0x21));
  _swift_deallocObject();
  return;
}



/* Address: 0x1008b4840 | FUN_1008b4840 */

void FUN_1008b4840(void)

{
  long unaff_x20;
  
  FUN_1008b3cf4(*(undefined8 *)(unaff_x20 + 0x10),unaff_x20 + 0x18);
  return;
}



/* Address: 0x1008b484c | FUN_1008b484c */

void FUN_1008b484c(void)

{
  FUN_1008b4b30(PTR__swift_release_100eae3e8,PTR__swift_bridgeObjectRelease_100eae160,0x29);
  return;
}



/* Address: 0x1008b4864 | FUN_1008b4864 */

void FUN_1008b4864(void)

{
  long unaff_x20;
  
  FUN_1008b4a20(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined1 *)(unaff_x20 + 0x28),
                *(undefined8 *)(**(long **)(unaff_x20 + 0x10) + 0x50));
  return;
}



/* Address: 0x1008b487c | FUN_1008b487c */

void FUN_1008b487c(void)

{
  long unaff_x20;
  
  FUN_100004594(unaff_x20 + 0x18);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x58));
  _swift_deallocObject();
  return;
}



/* Address: 0x1008b48b8 | FUN_1008b48b8 */

void FUN_1008b48b8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 uVar7;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  lVar6 = *(long *)(unaff_x20 + 0x38);
  uVar7 = *(undefined1 *)(unaff_x20 + 0x60);
  FUN_100004640(unaff_x20 + 0x18,uVar3);
  (**(code **)(lVar6 + 0x28))(uVar1,uVar4,uVar2,uVar5,uVar7,uVar3,lVar6);
  return;
}



/* Address: 0x1008b492c | FUN_1008b492c */

void FUN_1008b492c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x1008b4950 | FUN_1008b4950 */

void FUN_1008b4950(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_deallocObject();
  return;
}



/* Address: 0x1008b4994 | FUN_1008b4994 */

void FUN_1008b4994(undefined8 param_1)

{
  long unaff_x20;
  undefined8 local_50;
  undefined8 uStack_48;
  ulong local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  local_40 = (ulong)*(byte *)(unaff_x20 + 0x30);
  uStack_38 = *(undefined8 *)(unaff_x20 + 0x38);
  local_30 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x28);
  local_50 = *(undefined8 *)(unaff_x20 + 0x20);
  FUN_1008b0740(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),param_1,
                &local_50);
  return;
}



/* Address: 0x1008b49e0 | FUN_1008b49e0 */

void FUN_1008b49e0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1008b4a04 | FUN_1008b4a04 */

void FUN_1008b4a04(void)

{
  FUN_1008b4b9c(PTR__swift_release_100eae3e8,0x30);
  return;
}



/* Address: 0x1008b4a14 | FUN_1008b4a14 */

void FUN_1008b4a14(void)

{
  long unaff_x20;
  
  FUN_1008b28f8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x1008b4a20 | FUN_1008b4a20 */

undefined8 FUN_1008b4a20(long param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long local_a8;
  undefined8 uStack_a0;
  uint local_98;
  undefined4 uStack_94;
  undefined1 auStack_88 [72];
  
  lVar1 = 0;
  FUN_1008a3ae8();
  _swift_allocObject();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x20) = 1;
  *(undefined4 *)(lVar1 + 0x28) = 0x10001;
  local_98 = param_3 & 0xff;
  uStack_94 = 0;
  uVar2 = 0;
  local_a8 = lVar1;
  uStack_a0 = param_2;
  FUN_1008b45d4(0,param_4);
  FUN_10066a16c(auStack_88,&local_a8,uVar2,&PTR_PTR_100feab80);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  _swift_getObjectType(uVar2);
  FUN_100893ef4();
  _swift_retain();
  FUN_10062dee8(auStack_88,uVar2);
  _swift_release(lVar1);
  _swift_release(uVar2);
  FUN_1005e70f4(auStack_88);
  return uVar2;
}



/* Address: 0x1008b4b18 | FUN_1008b4b18 */

void FUN_1008b4b18(void)

{
  FUN_1008b4b30(PTR__swift_bridgeObjectRelease_100eae160,PTR__swift_unknownObjectRelease_100eae458,
                0x30);
  return;
}



/* Address: 0x1008b4b30 | FUN_1008b4b30 */

void FUN_1008b4b30(code *param_1,code *param_2)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x18));
  (*param_2)(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x1008b4b80 | FUN_1008b4b80 */

void FUN_1008b4b80(void)

{
  long unaff_x20;
  
  FUN_1008b2cb0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x1008b4b8c | FUN_1008b4b8c */

void FUN_1008b4b8c(void)

{
  FUN_1008b4b9c(PTR__swift_unknownObjectRelease_100eae458,0x38);
  return;
}



/* Address: 0x1008b4b9c | FUN_1008b4b9c */

void FUN_1008b4b9c(code *param_1)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x1008b4be0 | FUN_1008b4be0 */

void FUN_1008b4be0(undefined8 *param_1)

{
  long unaff_x20;
  
  FUN_1008b38bc(*param_1,*(undefined1 *)(param_1 + 1),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Address: 0x1008b4bfc | FUN_1008b4bfc */

void FUN_1008b4bfc(void)

{
  long unaff_x20;
  
  FUN_1008b4c10(*(undefined8 *)(unaff_x20 + 0x28),*(undefined1 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1008b4c0c | thunk_FUN_100653eac */

void thunk_FUN_100653eac(void)

{
  FUN_100653eac();
  return;
}



/* Address: 0x1008b4c10 | FUN_1008b4c10 */

void FUN_1008b4c10(undefined8 param_1,char param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  code *pcVar8;
  undefined1 auStack_68 [24];
  
  if (param_2 != '\x01') {
    uVar5 = *(undefined8 *)(param_3 + 0x10);
    uVar2 = *(undefined8 *)(param_3 + 0x18);
    _swift_getObjectType(uVar5);
    FUN_100642338();
    _swift_beginAccess(param_3 + 0x20,auStack_68,1,0);
    if (!SBORROW8(*(long *)(param_3 + 0x20),1)) {
      *(long *)(param_3 + 0x20) = *(long *)(param_3 + 0x20) + -1;
      FUN_100642338(uVar5,uVar2);
      if (*(long *)(param_3 + 0x20) == 0) {
        FUN_1008b39e8(0,0,param_4);
      }
      return;
    }
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x1008b4d98);
    (*pcVar8)();
  }
  uVar3 = *(ulong *)(param_4 + 0x20);
  lVar1 = *(long *)(param_4 + 0x28);
  _swift_getObjectType();
  uVar4 = uVar3;
  lVar7 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar4 & 1) != 0) {
    FUN_1005de8f4(param_1);
    FUN_1006486f8();
    FUN_100004550(param_1,lVar7);
    _swift_bridgeObjectRelease(param_3);
    return;
  }
  puVar6 = &DAT_100f0c750;
  _swift_allocObject(&DAT_100f0c750,0x20,7);
  *(long *)(puVar6 + 0x10) = param_4;
  *(undefined8 *)(puVar6 + 0x18) = param_1;
  pcVar8 = *(code **)(lVar1 + 0x18);
  _swift_retain(param_4);
  FUN_100308524(param_1,1);
  (*pcVar8)(thunk_FUN_1008777d0,puVar6,uVar3,lVar1);
  _swift_release(puVar6);
  return;
}



/* Address: 0x1008b4d98 | FUN_1008b4d98 */

void FUN_1008b4d98(void)

{
  FUN_10061e580(PTR__swift_errorRelease_100eae218);
  return;
}



/* Address: 0x1008b4da4 | thunk_FUN_100653dc4 */

void thunk_FUN_100653dc4(void)

{
  FUN_100653dc4();
  return;
}



/* Address: 0x1008b4da8 | FUN_1008b4da8 */

void FUN_1008b4da8(void)

{
  long unaff_x20;
  
  FUN_1008b3c9c(*(undefined8 *)(unaff_x20 + 0x10),unaff_x20 + 0x18);
  return;
}



/* Address: 0x1008b4dc4 | thunk_FUN_100405f18 */

void thunk_FUN_100405f18(void)

{
  FUN_100405f18();
  return;
}



/* Address: 0x1008b4dc8 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  FUN_100049040();
  return;
}



/* Address: 0x1008b4dcc | thunk_FUN_1008b46dc */

void thunk_FUN_1008b46dc(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  FUN_1008b0740(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),param_1,
                &uStack_50);
  return;
}



/* Address: 0x1008b4dd0 | thunk_FUN_1008b4bfc */

void thunk_FUN_1008b4bfc(void)

{
  long unaff_x20;
  
  FUN_1008b4c10(*(undefined8 *)(unaff_x20 + 0x28),*(undefined1 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}


