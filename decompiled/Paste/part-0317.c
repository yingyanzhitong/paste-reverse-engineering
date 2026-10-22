/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1003f7e44 | FUN_1003f7e44 */

void FUN_1003f7e44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,long param_6)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 **ppuVar4;
  long **pplVar5;
  long **pplVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long **pplVar10;
  long lVar11;
  long lVar12;
  ID unaff_x20;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  code *pcVar16;
  undefined8 *extraout_d0;
  undefined8 *puVar17;
  undefined8 extraout_d0_00;
  undefined8 **local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined *puStack_238;
  undefined **local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 **local_1d8 [2];
  undefined8 uStack_1c8;
  undefined1 auStack_1c0 [24];
  undefined1 auStack_1a8 [56];
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  long local_140;
  long lStack_138;
  long local_130;
  long local_128;
  long local_120;
  long lStack_118;
  long local_110;
  long *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined *puStack_f0;
  undefined **local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  
  objc_stub::bounds(unaff_x20);
  puVar17 = extraout_d0;
  _CGRectGetHeight();
  lVar2 = _TtCO11PasteCoreUI7Sidecar14CollectionView::cells;
  lVar3 = unaff_x20 + _TtCO11PasteCoreUI7Sidecar14CollectionView::cells;
  _swift_beginAccess(lVar3,auStack_1c0,1,0);
  lVar12 = *(long *)(*(long *)(unaff_x20 + lVar2) + 0x10);
  lVar11 = *(long *)(param_6 + 0x10) - param_5[2];
  puVar1 = (undefined8 *)(lVar12 + lVar11);
  if (!SCARRY8(lVar12,lVar11)) {
    lStack_138 = 0;
    local_140 = 0x4038000000000000;
    local_128 = 0;
    local_120 = 0;
    local_130 = 0x4038000000000000;
    lStack_118 = (long)puVar17;
    local_110 = (long)puVar1;
    FUN_1003f8398(auStack_1a8);
    FUN_1003f72f8();
    uVar15 = *(undefined8 *)(unaff_x20 + lVar2);
    _swift_bridgeObjectRetain(uVar15);
    objc_stub::bounds(unaff_x20);
    puStack_f0 = &DAT_100ed0ec0;
    local_e8 = &PTR_PTR_100ed0f10;
    ppuVar4 = (undefined8 **)&DAT_100ed1200;
    _swift_allocObject(&DAT_100ed1200,0x48,7);
    ppuVar4[3] = (undefined8 *)lStack_138;
    ppuVar4[2] = (undefined8 *)local_140;
    ppuVar4[5] = (undefined8 *)local_128;
    ppuVar4[4] = (undefined8 *)local_130;
    ppuVar4[7] = (undefined8 *)lStack_118;
    ppuVar4[6] = (undefined8 *)local_120;
    ppuVar4[8] = (undefined8 *)local_110;
    pplVar10 = &local_108;
    uVar14 = uVar15;
    local_108 = (long *)ppuVar4;
    FUN_10022ed64(extraout_d0_00,param_2,param_3,param_4);
    _swift_release(lVar3);
    _swift_bridgeObjectRelease(uVar15);
    FUN_100004594(&local_108);
    pplVar5 = pplVar10;
    FUN_1003f51d0(pplVar10,0);
    pplVar6 = pplVar10;
    uVar15 = param_2;
    FUN_1003f51d0(pplVar10,1);
    puVar7 = &DAT_100ed1228;
    local_250 = pplVar5;
    uStack_240 = param_2;
    local_1d8[0] = pplVar6;
    uStack_1c8 = uVar15;
    _swift_allocObject(&DAT_100ed1228,0x18,7);
    _swift_unknownObjectWeakInit(puVar7 + 0x10);
    puVar8 = &DAT_100ed1250;
    _swift_allocObject(&DAT_100ed1250,0x28,7);
    puVar8[0x10] = (byte)uVar14 & 1;
    *(long ***)(puVar8 + 0x18) = pplVar10;
    *(undefined8 **)(puVar8 + 0x20) = param_5;
    _swift_bridgeObjectRetain(pplVar10);
    puVar9 = param_5;
    _swift_bridgeObjectRetain();
    FUN_1001f86e8();
    uStack_168 = puVar9[1];
    local_170 = *puVar9;
    uStack_158 = puVar9[3];
    uStack_160 = puVar9[2];
    uStack_148 = puVar9[5];
    local_150 = puVar9[4];
    FUN_1001f65f8(&local_108,0x3fd6666666666666,&local_250,local_1d8,&local_170,FUN_1003f9c28,puVar7
                  ,FUN_1003f9c5c,puVar8,&DAT_100ed0f98,&PTR_PTR_100ed0f00);
    plVar13 = *(long **)(unaff_x20 + _TtCO11PasteCoreUI7Sidecar14CollectionView::transitionAnimator)
    ;
    uStack_208 = uStack_c0;
    local_210 = local_c8;
    uStack_1f8 = uStack_b0;
    uStack_200 = local_b8;
    uStack_1e8 = uStack_a0;
    local_1f0 = local_a8;
    uStack_248 = uStack_100;
    local_250 = (undefined8 **)local_108;
    puStack_238 = puStack_f0;
    uStack_240 = local_f8;
    uStack_228 = uStack_e0;
    local_230 = local_e8;
    uStack_218 = uStack_d0;
    uStack_220 = local_d8;
    pcVar16 = *(code **)(*plVar13 + 0xa0);
    puVar7 = &DAT_100fc4468;
    FUN_1000037f0(&DAT_100fc4468,&DAT_100c46a10);
    puVar8 = puVar7;
    FUN_1003f9c64();
    (*pcVar16)(&local_250,0xd000000000000013,0x8000000100da5a50,puVar7,puVar8);
    (**(code **)(*plVar13 + 0xb8))();
    FUN_100005808(&local_108,&DAT_100fc4468,&DAT_100c46a10);
    puVar9 = (undefined8 *)
             (unaff_x20 +
             _TtCO11PasteCoreUI7Sidecar14CollectionView::___lazy_storage___contentLayout);
    puVar9[1] = 0;
    *puVar9 = 0x4038000000000000;
    puVar9[3] = 0;
    puVar9[4] = 0;
    puVar9[2] = 0x4038000000000000;
    puVar9[5] = puVar17;
    puVar9[6] = puVar1;
    *(undefined1 *)(puVar9 + 7) = 0;
    uVar14 = *(undefined8 *)(unaff_x20 + lVar2);
    *(undefined8 **)(unaff_x20 + lVar2) = param_5;
    _swift_bridgeObjectRelease(pplVar10);
    _swift_bridgeObjectRelease(uVar14);
    return;
  }
                    /* WARNING: Does not return */
  pcVar16 = (code *)SoftwareBreakpoint(1,0x1003f81d4);
  (*pcVar16)();
}



/* Address: 0x1003f81d4 | FUN_1003f81d4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003f81d4(double param_1)

{
  undefined8 *puVar1;
  char cVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 uVar6;
  char cVar7;
  ulong uVar8;
  long lVar9;
  long unaff_x20;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined1 auStack_78 [24];
  
  lVar9 = _TtCO11PasteCoreUI7Sidecar14CollectionView::cells;
  _swift_beginAccess(unaff_x20 + _TtCO11PasteCoreUI7Sidecar14CollectionView::cells,auStack_78,0,0);
  lVar9 = *(long *)(unaff_x20 + lVar9);
  uVar6 = *(undefined8 *)(lVar9 + 0x10);
  puVar1 = (undefined8 *)
           (unaff_x20 + _TtCO11PasteCoreUI7Sidecar14CollectionView::___lazy_storage___contentLayout)
  ;
  puVar1[1] = 0;
  *puVar1 = 0x4038000000000000;
  puVar1[2] = 0x4038000000000000;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = param_1;
  puVar1[6] = uVar6;
  *(undefined1 *)(puVar1 + 7) = 0;
  cVar7 = '\x02';
  if (param_1 < 200.0) {
    cVar7 = '\x03';
  }
  if (240.0 <= param_1) {
    cVar7 = '\x01';
  }
  cVar2 = '\0';
  if (param_1 < 280.0) {
    cVar2 = cVar7;
  }
  if (*(char *)(unaff_x20 + _TtCO11PasteCoreUI7Sidecar14CollectionView::sizeClass) != cVar2) {
    *(char *)(unaff_x20 + _TtCO11PasteCoreUI7Sidecar14CollectionView::sizeClass) = cVar2;
    uVar8 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar11 = 0xffffffffffffffff;
    if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
      uVar11 = ~(-1L << (uVar8 & 0x3f));
    }
    uVar11 = uVar11 & *(ulong *)(lVar9 + 0x40);
    _swift_bridgeObjectRetain(lVar9);
    lVar12 = 0;
    while( true ) {
      while (uVar11 != 0) {
        uVar3 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
        uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
        uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
        uVar11 = uVar11 - 1 & uVar11;
        lVar10 = *(long *)(*(long *)(lVar9 + 0x38) + LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) * 8 +
                          lVar12 * 0x200);
        uVar6 = 0;
        FUN_1003f4108(0);
        _swift_dynamicCastClass(lVar10,uVar6);
        if (lVar10 != 0) {
          FUN_1003f3ccc(cVar2);
          FUN_1003f3d9c(cVar2);
        }
      }
      bVar5 = SCARRY8(lVar12,1);
      lVar12 = lVar12 + 1;
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1003f8398);
        (*pcVar4)();
      }
      if ((long)(uVar8 + 0x3f >> 6) <= lVar12) break;
      uVar11 = ((ulong *)(lVar9 + 0x40))[lVar12];
    }
    _swift_release(lVar9);
  }
  return;
}



/* Address: 0x1003f8398 | FUN_1003f8398 */

void FUN_1003f8398(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = (undefined8 *)
           (unaff_x20 + _TtCO11PasteCoreUI7Sidecar14CollectionView::___lazy_storage___contentLayout)
  ;
  if (*(char *)(puVar1 + 7) == '\x01') {
    uVar2 = 0;
    uVar4 = 0;
    uVar3 = 0x4038000000000000;
    puVar1[1] = 0;
    *puVar1 = 0x4038000000000000;
    puVar1[2] = 0x4038000000000000;
    uVar5 = 0;
    uVar6 = 0;
    puVar1[4] = 0;
    puVar1[3] = 0;
    puVar1[6] = 0;
    puVar1[5] = 0;
    *(undefined1 *)(puVar1 + 7) = 0;
    uVar7 = uVar3;
    uVar8 = uVar4;
  }
  else {
    uVar2 = puVar1[6];
    uVar8 = puVar1[3];
    uVar7 = puVar1[2];
    uVar6 = puVar1[5];
    uVar5 = puVar1[4];
    uVar4 = puVar1[1];
    uVar3 = *puVar1;
  }
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_1[3] = uVar8;
  param_1[2] = uVar7;
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  param_1[6] = uVar2;
  return;
}



/* Address: 0x1003f83fc | FUN_1003f83fc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003f83fc(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = param_1[2];
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    pcVar1 = *(code **)(param_2 + _TtCO11PasteCoreUI7Sidecar14CollectionView::sizeUpdateHandler);
    uVar2 = ((undefined8 *)(param_2 + _TtCO11PasteCoreUI7Sidecar14CollectionView::sizeUpdateHandler)
            )[1];
    _swift_retain(uVar2);
    (*pcVar1)(uVar4,uVar5,0);
    _swift_release(uVar2);
  }
  FUN_1003f5558(uVar4,uVar5,uVar3);
  return;
}



/* Address: 0x1003f847c | FUN_1003f847c */

ID FUN_1003f847c(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  ID IVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  double *pdVar9;
  undefined *puVar10;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  long lVar11;
  undefined1 *puVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  double dStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined1 auStack_150 [40];
  double local_128 [2];
  double local_118;
  double local_100;
  double local_f0;
  undefined8 uStack_e8;
  double local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  double dStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  
  lVar3 = 0;
  FUN_1003efa8c();
  lVar16 = *(long *)(lVar3 + -8);
  lVar14 = *(long *)(lVar16 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar12 = &stack0xfffffffffffffe50 + -(lVar14 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar11 = (long)puVar12 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar15 = lVar11 - extraout_x12_00;
  FUN_100076688(param_2,auStack_150);
  puVar10 = &DAT_100fc4490;
  FUN_1000037f0(&DAT_100fc4490,&DAT_100c46a30);
  lVar4 = lVar15;
  _swift_dynamicCast(lVar15,auStack_150,puVar10,lVar3,0);
  if ((int)lVar4 == 0) {
    pdVar9 = &local_1a8;
    _swift_dynamicCast(pdVar9,auStack_150,puVar10,&DAT_100ed0bd0,0);
    if ((int)pdVar9 == 0) {
      puVar10 = &_OBJC_CLASS___NSView;
      _objc_allocWithZone();
      IVar5 = objc_stub::init((ID)puVar10);
    }
    else {
      dStack_c8 = dStack_180;
      local_d0 = local_188;
      uStack_b8 = uStack_170;
      uStack_c0 = local_178;
      uStack_a8 = uStack_160;
      local_b0 = local_168;
      local_a0 = local_158;
      uStack_e8 = uStack_1a0;
      local_f0 = local_1a8;
      uStack_d8 = uStack_190;
      local_e0 = local_198;
      FUN_1003f8398(local_128);
      dVar20 = 80.0;
      if (6400.0 <= local_100 * local_100) {
        dVar20 = local_100;
      }
      bVar2 = 6400.0 <= local_100 * 200.0;
      dVar18 = 80.0;
      if (bVar2) {
        dVar18 = 200.0;
      }
      dVar19 = 80.0;
      if (bVar2) {
        dVar19 = local_100;
      }
      dVar21 = dVar20;
      if (200.0 < local_100) {
        dVar20 = dVar18;
        dVar21 = dVar19;
      }
      dVar18 = dVar20 + local_128[0];
      if (dVar20 * dVar21 <= 6400.0) {
        dVar20 = 80.0;
        dVar21 = 80.0;
      }
      IVar5 = 0;
      FUN_1003f4e2c();
      _objc_allocWithZone();
      IVar5 = objc_stub::initWithFrame_(IVar5,local_118 + dVar18 * (double)param_1,0,dVar20,dVar21);
      FUN_1003f4c24(&local_f0,
                    *(undefined1 *)
                     (unaff_x20 + _TtCO11PasteCoreUI7Sidecar14CollectionView::sizeClass));
      FUN_1003fa010(&local_f0);
    }
  }
  else {
    FUN_1000aa308(lVar15,lVar11);
    FUN_1003f8398(&local_f0);
    dVar20 = 80.0;
    if (6400.0 <= dStack_c8 * dStack_c8) {
      dVar20 = dStack_c8;
    }
    bVar2 = 6400.0 <= dStack_c8 * 200.0;
    dVar18 = 80.0;
    if (bVar2) {
      dVar18 = 200.0;
    }
    dVar19 = 80.0;
    if (bVar2) {
      dVar19 = dStack_c8;
    }
    dVar21 = dVar20;
    if (200.0 < dStack_c8) {
      dVar20 = dVar18;
      dVar21 = dVar19;
    }
    dVar18 = local_e0 + (dVar20 + local_f0) * (double)param_1;
    if (dVar20 * dVar21 <= 6400.0) {
      dVar20 = 80.0;
      dVar21 = 80.0;
    }
    IVar5 = 0;
    FUN_1003fbee0();
    _objc_allocWithZone();
    IVar5 = objc_stub::initWithFrame_(IVar5,dVar18,0,dVar20,dVar21);
    puVar10 = &DAT_100ed1228;
    puVar6 = puVar10;
    _swift_allocObject(&DAT_100ed1228,0x18,7);
    _swift_unknownObjectWeakInit(puVar6 + 0x10);
    FUN_10008c240(lVar11,puVar12);
    uVar13 = (ulong)*(byte *)(lVar16 + 0x50);
    uVar17 = uVar13 + 0x18 & (uVar13 ^ 0xffffffffffffffff);
    puVar7 = &DAT_100ed1278;
    _swift_allocObject(&DAT_100ed1278,uVar17 + lVar14,uVar13 | 7);
    *(undefined **)(puVar7 + 0x10) = puVar6;
    FUN_1000aa308(puVar12,puVar7 + uVar17);
    puVar1 = (undefined8 *)
             (IVar5 + _TtCCO11PasteCoreUI7Sidecar14CollectionView16NotificationCell::onActionClick);
    uVar8 = puVar1[1];
    *puVar1 = FUN_1003fa048;
    puVar1[1] = puVar7;
    _swift_release(uVar8);
    _swift_allocObject(&DAT_100ed1228,0x18,7);
    _swift_unknownObjectWeakInit(puVar10 + 0x10,unaff_x20);
    FUN_10008c240(lVar11,puVar12);
    puVar7 = &DAT_100ed12a0;
    _swift_allocObject(&DAT_100ed12a0,uVar17 + lVar14,uVar13 | 7);
    *(undefined **)(puVar7 + 0x10) = puVar10;
    FUN_1000aa308(puVar12,puVar7 + uVar17);
    puVar1 = (undefined8 *)
             (IVar5 + _TtCCO11PasteCoreUI7Sidecar14CollectionView16NotificationCell::onCloseClick);
    uVar8 = puVar1[1];
    *puVar1 = FUN_1003fa1b4;
    puVar1[1] = puVar7;
    _swift_release(uVar8);
    FUN_1003fa1e8(lVar11,*(undefined1 *)
                          (unaff_x20 + _TtCO11PasteCoreUI7Sidecar14CollectionView::sizeClass));
    FUN_10008c284(lVar11);
  }
  FUN_100004594(auStack_150);
  return IVar5;
}



/* Address: 0x1003f88e0 | FUN_1003f88e0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003f88e0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined1 auStack_80 [24];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined1 auStack_58 [24];
  
  puVar3 = auStack_80;
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    puVar1 = (undefined8 *)(param_2 + _TtCO11PasteCoreUI7Sidecar14CollectionView::onActionClick);
    _swift_beginAccess(puVar1,auStack_58,0,0);
    pcVar4 = (code *)*puVar1;
    if (pcVar4 != (code *)0x0) {
      uVar5 = puVar1[1];
      FUN_100011128(pcVar4,uVar5);
      uVar2 = 0;
      FUN_1003efa8c();
      ppuStack_60 = &PTR_PTR_100ed0b20;
      local_68 = uVar2;
      FUN_10000cbb0(auStack_80);
      FUN_10008c240(param_3,puVar3);
      (*pcVar4)(auStack_80,param_1);
      FUN_100004550(pcVar4,uVar5);
      FUN_100004594(auStack_80);
    }
  }
  return;
}



/* Address: 0x1003f89c0 | FUN_1003f89c0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003f89c0(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [24];
  undefined8 local_58;
  undefined **ppuStack_50;
  undefined1 auStack_48 [24];
  
  puVar3 = auStack_70;
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    puVar1 = (undefined8 *)(param_1 + _TtCO11PasteCoreUI7Sidecar14CollectionView::onCloseClick);
    _swift_beginAccess(puVar1,auStack_48,0,0);
    pcVar4 = (code *)*puVar1;
    if (pcVar4 != (code *)0x0) {
      uVar5 = puVar1[1];
      FUN_100011128(pcVar4,uVar5);
      uVar2 = 0;
      FUN_1003efa8c();
      ppuStack_50 = &PTR_PTR_100ed0b20;
      local_58 = uVar2;
      FUN_10000cbb0(auStack_70);
      FUN_10008c240(param_2,puVar3);
      (*pcVar4)(auStack_70);
      FUN_100004550(pcVar4,uVar5);
      FUN_100004594(auStack_70);
    }
  }
  return;
}



/* Address: 0x1003f8a90 | FUN_1003f8a90 */

void FUN_1003f8a90(void)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x20;
  long lVar6;
  ID self;
  long lVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_c0 [24];
  double local_98 [2];
  double local_88;
  double local_70;
  
  _swift_getObjectType();
  uVar3 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff58,"layout");
  (**(code **)(**(long **)(unaff_x20 +
                          _TtCO11PasteCoreUI7Sidecar14CollectionView::transitionAnimator) + 200))();
  lVar6 = _TtCO11PasteCoreUI7Sidecar14CollectionView::cells;
  if ((uVar3 & 1) == 0) {
    _swift_beginAccess(unaff_x20 + _TtCO11PasteCoreUI7Sidecar14CollectionView::cells,auStack_c0,0,0)
    ;
    lVar6 = *(long *)(unaff_x20 + lVar6);
    uVar5 = 1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
    uVar3 = 0xffffffffffffffff;
    if ((*(byte *)(lVar6 + 0x20) & 0x3f) < 6) {
      uVar3 = ~(-1L << (uVar5 & 0x3f));
    }
    uVar3 = uVar3 & *(ulong *)(lVar6 + 0x40);
    _swift_bridgeObjectRetain(lVar6);
    lVar7 = 0;
    while( true ) {
      while (uVar3 != 0) {
        uVar4 = (uVar3 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar3 & 0x5555555555555555) << 1;
        uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
        uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        uVar3 = uVar3 - 1 & uVar3;
        uVar4 = lVar7 << 9 | LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) << 3;
        lVar8 = *(long *)(*(long *)(lVar6 + 0x30) + uVar4);
        self = *(ID *)(*(long *)(lVar6 + 0x38) + uVar4);
        FUN_1003f8398(local_98);
        bVar2 = 6400.0 <= local_70 * 200.0;
        dVar11 = 80.0;
        if (bVar2) {
          dVar11 = 200.0;
        }
        dVar10 = 80.0;
        if (bVar2) {
          dVar10 = local_70;
        }
        dVar9 = 80.0;
        if (6400.0 <= local_70 * local_70) {
          dVar9 = local_70;
        }
        if (local_70 <= 200.0) {
          dVar11 = dVar9;
          dVar10 = dVar9;
        }
        dVar9 = dVar11 + local_98[0];
        if (dVar11 * dVar10 <= 6400.0) {
          dVar11 = 80.0;
          dVar10 = 80.0;
        }
        objc_stub::setFrame_(self,local_88 + dVar9 * (double)lVar8,0,dVar11,dVar10);
      }
      bVar2 = SCARRY8(lVar7,1);
      lVar7 = lVar7 + 1;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1003f8c54);
        (*pcVar1)();
      }
      if ((long)(uVar5 + 0x3f >> 6) <= lVar7) break;
      uVar3 = ((ulong *)(lVar6 + 0x40))[lVar7];
    }
    _swift_release(lVar6);
  }
  return;
}



/* Address: 0x1003f8c54 | _TtCO11PasteCoreUI7Sidecar14CollectionView::layout */

/* Function Stack Size: 0x10 bytes */

void _TtCO11PasteCoreUI7Sidecar14CollectionView::layout(ID param_1,SEL param_2)

{
  FUN_1003f8f40(param_1,param_2,0x9c,FUN_1003f8a90);
  return;
}



/* Address: 0x1003f8c64 | FUN_1003f8c64 */

undefined1  [16] FUN_1003f8c64(void)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double local_58 [2];
  double local_48;
  double local_38;
  double local_30;
  long local_28;
  
  FUN_1003f8398(local_58);
  if (local_28 < 1) {
    local_38 = 0.0;
  }
  else {
    bVar1 = 6400.0 <= local_30 * 200.0;
    dVar3 = 80.0;
    if (bVar1) {
      dVar3 = 200.0;
    }
    dVar4 = 80.0;
    if (bVar1) {
      dVar4 = local_30;
    }
    dVar2 = 80.0;
    if (6400.0 <= local_30 * local_30) {
      dVar2 = local_30;
    }
    if (local_30 <= 200.0) {
      dVar3 = dVar2;
      dVar4 = dVar2;
    }
    dVar2 = local_48 + (dVar3 + local_58[0]) * (double)(local_28 - 1);
    if (dVar3 * dVar4 <= 6400.0) {
      dVar3 = 80.0;
      dVar4 = 80.0;
    }
    _CGRectGetMaxX(dVar2,0,dVar3,dVar4);
    local_38 = local_38 + dVar2;
  }
  auVar5._8_8_ = local_30;
  auVar5._0_8_ = local_38;
  return auVar5;
}



/* Address: 0x1003f8d48 | FUN_1003f8d48 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003f8d48(void)

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
  puVar2 = &DAT_100ed1178;
  _swift_allocObject(&DAT_100ed1178,0x18,7);
  *(ID *)(puVar2 + 0x10) = unaff_x20;
  puVar3 = &DAT_100ed11a0;
  _swift_allocObject(&DAT_100ed11a0,0x20,7);
  *(code **)(puVar3 + 0x10) = FUN_1003f9a94;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  local_50 = FUN_1000386a0;
  local_70 = PTR___NSConcreteStackBlock_100ea82a0;
  local_68 = 0x42000000;
  local_60 = FUN_1000d5218;
  puStack_58 = &DAT_100ed11b8;
  local_48 = puVar3;
  aBlock = __Block_copy(&local_70);
  puVar4 = local_48;
  _swift_retain(puVar3);
  _swift_release(puVar4);
  objc_stub::performAsCurrentDrawingAppearance_(self,aBlock);
  __Block_release(aBlock);
  puVar4 = puVar3;
  _swift_isEscapingClosureAtFileLocation(puVar3,"",0x91,0xab,0x43,1);
  _swift_release(puVar2);
  _swift_release(puVar3);
  if (((ulong)puVar4 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003f8e88);
  (*pcVar1)();
}



/* Address: 0x1003f8e88 | FUN_1003f8e88 */

void FUN_1003f8e88(long param_1)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  undefined8 uVar5;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1003d0b5c();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/Sidecar.CollectionView.macOS.swift",0x2e,1,0xab,UVar3.unknown,pMVar1);
  }
  uVar5 = *(undefined8 *)(param_1 + _TtCO11PasteCoreUI7Sidecar14CollectionView::items);
  _swift_bridgeObjectRetain(uVar5);
  FUN_1003f7ae8();
  _swift_release(pMVar2);
  _swift_bridgeObjectRelease(uVar5);
  return;
}



/* Address: 0x1003f8f30 | _TtCO11PasteCoreUI7Sidecar14CollectionView::viewDidChangeEffectiveAppearance */

/* Function Stack Size: 0x10 bytes */

void _TtCO11PasteCoreUI7Sidecar14CollectionView::viewDidChangeEffectiveAppearance
               (ID param_1,SEL param_2)

{
  FUN_1003f8f40(param_1,param_2,0xaa,FUN_1003f8d48);
  return;
}



/* Address: 0x1003f8f40 | FUN_1003f8f40 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003f8f40(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

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
              ("PasteCoreUI/Sidecar.CollectionView.macOS.swift",0x2e,1,param_3,UVar3.unknown,pMVar1)
    ;
  }
  (*param_4)(param_1);
  _swift_release(pMVar2);
  return 0;
}



/* Address: 0x1003f8fec | _TtCO11PasteCoreUI7Sidecar14CollectionView::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtCO11PasteCoreUI7Sidecar14CollectionView::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

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
              ("PasteCoreUI/Sidecar.CollectionView.macOS.swift",0x2e,1,8,UVar3.unknown,pMVar2);
  }
  __swift_stdlib_reportUnimplementedInitializer
            ("PasteCoreUI.CollectionView",0x1a,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003f9074);
  (*pcVar1)();
}



/* Address: 0x1003f9074 | _TtCO11PasteCoreUI7Sidecar14CollectionView::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void _TtCO11PasteCoreUI7Sidecar14CollectionView::_cxx_destruct(ID param_1,SEL param_2)

{
  FUN_100004550(*(undefined8 *)(param_1 + onCloseClick),((undefined8 *)(param_1 + onCloseClick))[1])
  ;
  FUN_100004550(*(undefined8 *)(param_1 + onActionClick),
                ((undefined8 *)(param_1 + onActionClick))[1]);
  _swift_release(*(undefined8 *)(param_1 + sizeUpdateHandler + 8));
  _swift_release(*(undefined8 *)(param_1 + transitionAnimator));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + items));
  _swift_release(*(undefined8 *)(param_1 + ___lazy_storage___transitionManager));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + cells));
  return;
}



/* Address: 0x1003f9108 | FUN_1003f9108 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1003f9108(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  _CocoaArrayWrapper _Var2;
  code *pcVar3;
  _ArrayBuffer _Var4;
  undefined8 uVar5;
  ulong uVar6;
  MainActor *pMVar7;
  MainActor *pMVar8;
  UnownedSerialExecutor UVar9;
  UnownedSerialExecutor UVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  MainActor *pMVar15;
  MainActor *pMVar16;
  ID unaff_x20;
  long lVar17;
  ulong uVar18;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long local_a8;
  undefined8 local_a0;
  ulong local_98 [3];
  undefined8 local_80;
  long lStack_78;
  
  _Var4.unknown = (undefined *)objc_stub::subviews(unaff_x20);
  uVar5 = 0;
  FUN_1003df5cc();
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  if ((ulong)_Var4.unknown >> 0x3e == 0) {
    lVar17 = *(long *)(((ulong)_Var4.unknown & 0xffffffffffffff8) + 0x10);
    puVar14 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    _Var2.unknown = _Var4.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var4.unknown) {
      _Var2.unknown = _Var4.unknown;
    }
    lVar17 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
    puVar14 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  PTR___swiftEmptyArrayStorage_100eae0d8 = puVar14;
  if (lVar17 != 0) {
    uVar18 = 0;
    do {
      if (((ulong)_Var4.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)_Var4.unknown & 0xffffffffffffff8) + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1003f9334);
          (*pcVar3)();
        }
        uVar6 = *(ulong *)(_Var4.unknown + uVar18 * 8 + 0x20);
      }
      else {
        uVar6 = uVar18;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar18,_Var4);
      }
      lVar1 = uVar18 + 1;
      if (SCARRY8(uVar18,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1003f9330);
        (*pcVar3)();
      }
      pMVar7 = Swift::MainActor::typeMetadataAccessor();
      pMVar8 = Swift::MainActor::get_shared(pMVar7,pMVar7);
      pMVar7 = pMVar8;
      FUN_1003d0b5c();
      UVar9 = Swift::Actor::get_unownedExecutor();
      UVar10 = UVar9;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar10.unknown & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("PasteCoreUI/Sidecar.CollectionView.macOS.swift",0x2e,1,0xb4,UVar9.unknown,pMVar7
                  );
      }
      puVar11 = &DAT_100fc4420;
      local_98[0] = uVar6;
      FUN_1000037f0(&DAT_100fc4420,&DAT_100c469c0);
      puVar12 = &local_c0;
      _swift_dynamicCast(puVar12,local_98,uVar5,puVar11,6);
      if (((ulong)puVar12 & 1) == 0) {
        local_a0 = 0;
        uStack_b8 = 0;
        local_c0 = 0;
        local_a8 = 0;
        uStack_b0 = 0;
      }
      _swift_release(pMVar8);
      if (local_a8 == 0) {
        FUN_100005808(&local_c0,&DAT_100fc4428,&DAT_100c469c8);
      }
      else {
        FUN_100076508(&local_c0,local_98);
        puVar11 = puVar14;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar13 = puVar14;
        if (((ulong)puVar11 & 1) == 0) {
          puVar13 = (undefined *)0x0;
          FUN_1003f992c(0,*(long *)(puVar14 + 0x10) + 1,1,puVar14);
        }
        uVar6 = *(ulong *)(puVar13 + 0x10);
        puVar14 = puVar13;
        if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar6) {
          puVar14 = (undefined *)(ulong)(1 < *(ulong *)(puVar13 + 0x18));
          FUN_1003f992c(puVar14,uVar6 + 1,1,puVar13);
        }
        *(ulong *)(puVar14 + 0x10) = uVar6 + 1;
        FUN_100076508(local_98,puVar14 + uVar6 * 0x28 + 0x20);
      }
      uVar18 = uVar18 + 1;
    } while (lVar1 != lVar17);
  }
  _swift_bridgeObjectRelease(_Var4.unknown);
  lVar17 = *(long *)(puVar14 + 0x10);
  if (lVar17 != 0) {
    pMVar8 = Swift::MainActor::typeMetadataAccessor();
    pMVar7 = (MainActor *)(puVar14 + 0x20);
    do {
      pMVar15 = pMVar7;
      FUN_100076688(pMVar7,local_98);
      pMVar16 = Swift::MainActor::get_shared(pMVar8,pMVar15);
      pMVar15 = pMVar16;
      FUN_1003d0b5c();
      UVar9 = Swift::Actor::get_unownedExecutor();
      UVar10 = UVar9;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar10.unknown & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("PasteCoreUI/Sidecar.CollectionView.macOS.swift",0x2e,1,0xb5,UVar9.unknown,
                   pMVar15);
      }
      lVar1 = lStack_78;
      uVar5 = local_80;
      FUN_100004640(local_98,local_80);
      (**(code **)(lVar1 + 8))(param_1,param_2,param_3,uVar5,lVar1);
      _swift_release(pMVar16);
      FUN_100004594(local_98);
      pMVar7 = pMVar7 + 0x28;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  _swift_bridgeObjectRelease(puVar14);
  *(char *)(unaff_x20 + _TtCO11PasteCoreUI7Sidecar14CollectionView::sizeClass) = (char)param_3;
  return;
}



/* Address: 0x1003f9464 | FUN_1003f9464 */

void FUN_1003f9464(void)

{
  FUN_1003f9108();
  return;
}



/* Address: 0x1003f9484 | FUN_1003f9484 */

void FUN_1003f9484(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1003f9710();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1003f94a8 | FUN_1003f94a8 */

void FUN_1003f94a8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1003f94e0();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1003f94c4 | FUN_1003f94c4 */

void FUN_1003f94c4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1003f95fc();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1003f94e0 | FUN_1003f94e0 */

undefined * FUN_1003f94e0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1003f95fc);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fc4480;
    FUN_1000037f0(&DAT_100fc4480,&DAT_100c46a20);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x50) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&DAT_100ed10a0);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x50 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0x50);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x1003f95fc | FUN_1003f95fc */

undefined * FUN_1003f95fc(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1003f9704);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fc4478;
    FUN_1000037f0(&DAT_100fc4478,&DAT_100c46a18);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,&DAT_100ec2de0);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x20 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x1003f9704 | FUN_1003f9704 */

void FUN_1003f9704(void)

{
  FUN_1003f9710();
  return;
}



/* Address: 0x1003f9710 | FUN_1003f9710 */

undefined *
FUN_1003f9710(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1003f9824);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fc4458;
    FUN_1000037f0(&DAT_100fc4458,&DAT_100c46a00);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,PTR___type_metadata_for_Swift_String_100eac208);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar3;
}



/* Address: 0x1003f9824 | FUN_1003f9824 */

undefined * FUN_1003f9824(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1003f992c);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fc4498;
    FUN_1000037f0(&DAT_100fc4498,&DAT_100c46a38);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,PTR___type_metadata_for_Swift_Substring_100eaca98);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x20 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x1003f992c | FUN_1003f992c */

undefined * FUN_1003f992c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1003f9a70);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar6 != 0) {
    puVar3 = &DAT_100fc4460;
    FUN_1000037f0(&DAT_100fc4460,&DAT_100c46a08);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100fc4420;
    FUN_1000037f0(&DAT_100fc4420,&DAT_100c469c0);
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x28 <= puVar4) {
      _memmove(puVar4,puVar1,uVar7 * 0x28);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x1003f9a70 | FUN_1003f9a70 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003f9a70(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1003f9a94 | FUN_1003f9a94 */

void FUN_1003f9a94(void)

{
  long unaff_x20;
  
  FUN_1003f8e88(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1003f9a9c | FUN_1003f9a9c */

void FUN_1003f9a9c(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1003f9aac | FUN_1003f9aac */

void FUN_1003f9aac(long param_1,long param_2)

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



/* Address: 0x1003f9ac0 | FUN_1003f9ac0 */

void FUN_1003f9ac0(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x1003f9ac8 | FUN_1003f9ac8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1003f9ac8(void)

{
  return ZEXT816(0x100f9bbb0);
}



/* Address: 0x1003f9ae8 | FUN_1003f9ae8 */

void FUN_1003f9ae8(void)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x20;
  String SVar6;
  
  puVar1 = (undefined8 *)(unaff_x20 + _TtCO11PasteCoreUI7Sidecar14CollectionView::onCloseClick);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtCO11PasteCoreUI7Sidecar14CollectionView::onActionClick);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(unaff_x20 + _TtCO11PasteCoreUI7Sidecar14CollectionView::sizeClass) = 1;
  lVar2 = _TtCO11PasteCoreUI7Sidecar14CollectionView::transitionAnimator;
  uVar4 = 0;
  FUN_1001f6328();
  _swift_allocObject();
  FUN_1001f46dc();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar4;
  puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  *(undefined **)(unaff_x20 + _TtCO11PasteCoreUI7Sidecar14CollectionView::items) =
       PTR___swiftEmptyArrayStorage_100eae0d8;
  *(undefined8 *)
   (unaff_x20 + _TtCO11PasteCoreUI7Sidecar14CollectionView::___lazy_storage___transitionManager) = 0
  ;
  lVar2 = _TtCO11PasteCoreUI7Sidecar14CollectionView::cells;
  FUN_1003cdd00();
  *(undefined **)(unaff_x20 + lVar2) = puVar5;
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
  SVar6.bridgeObject = (void *)0x2;
  SVar6.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar6,(StaticString)0xd000000000000025,0x8000000100d8dc00,
             0xda5a40);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1003f9bf4);
  (*pcVar3)();
}



/* Address: 0x1003f9bf4 | FUN_1003f9bf4 */

void FUN_1003f9bf4(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1003f9c04 | FUN_1003f9c04 */

void FUN_1003f9c04(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x1003f9c28 | FUN_1003f9c28 */

void FUN_1003f9c28(void)

{
  FUN_1003f83fc();
  return;
}



/* Address: 0x1003f9c30 | FUN_1003f9c30 */

void FUN_1003f9c30(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x1003f9c5c | FUN_1003f9c5c */

void FUN_1003f9c5c(void)

{
  long unaff_x20;
  
  FUN_1003f9cb4(*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1003f9c64 | FUN_1003f9c64 */

void FUN_1003f9c64(void)

{
  undefined *puVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  
  if (DAT_100fc4470 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  puVar1 = &DAT_100fc4468;
  FUN_100005c24(&DAT_100fc4468,&DAT_100c46a10);
  pTVar2 = &TargetProtocolConformanceDescriptor_100c34d10;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c34d10,puVar1);
  DAT_100fc4470 = pTVar2;
  return;
}



/* Address: 0x1003f9cb4 | FUN_1003f9cb4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003f9cb4(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined *puVar5;
  code *pcVar6;
  MainActor *pMVar7;
  ID self;
  MainActor *pMVar8;
  MainActor *pMVar9;
  UnownedSerialExecutor UVar10;
  UnownedSerialExecutor UVar11;
  undefined *puVar12;
  MainActor *pMVar13;
  MainActor *pMVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  
  uVar18 = *(ulong *)(param_1 + 0x10);
  if (uVar18 == 0) {
    uVar18 = *(ulong *)(PTR___swiftEmptyArrayStorage_100eae0d8 + 0x10);
    puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    pMVar7 = Swift::MainActor::typeMetadataAccessor();
    puVar15 = (undefined8 *)(param_1 + 0x38);
    uVar16 = uVar18;
    do {
      pMVar8 = (MainActor *)*puVar15;
      pMVar9 = Swift::MainActor::get_shared(pMVar7,pMVar8);
      pMVar13 = pMVar9;
      FUN_1003d0b5c();
      pMVar14 = pMVar13;
      UVar10 = Swift::Actor::get_unownedExecutor();
      UVar11 = UVar10;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar11.unknown & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("PasteCoreUI/Sidecar.CollectionView.macOS.swift",0x2e,1,0xc0,UVar10.unknown,
                   pMVar14);
      }
      self = objc_stub::layer((ID)pMVar8);
      if (self == 0) {
        _swift_release(pMVar9);
      }
      else {
        objc_stub::setMask_(self,0);
        _swift_release(pMVar9);
      }
      puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
      uVar16 = uVar16 - 1;
      puVar15 = puVar15 + 4;
    } while (uVar16 != 0);
    uVar16 = 0;
    do {
      lVar17 = 0;
      if (uVar16 <= uVar18) {
        lVar17 = uVar18 - uVar16;
      }
      puVar15 = (undefined8 *)(param_1 + 0x38 + uVar16 * 0x20);
      uVar16 = uVar16 + 1;
      while( true ) {
        if (lVar17 == 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1003f9ffc);
          (*pcVar6)();
        }
        cVar4 = *(char *)(puVar15 + -3);
        uVar1 = puVar15[-2];
        uVar3 = puVar15[-1];
        pMVar8 = (MainActor *)*puVar15;
        pMVar9 = Swift::MainActor::get_shared(pMVar7,pMVar8);
        pMVar14 = pMVar13;
        UVar10 = Swift::Actor::get_unownedExecutor();
        UVar11 = UVar10;
        _swift_task_isCurrentExecutor();
        if (((ulong)UVar11.unknown & 1) == 0) {
          _swift_task_reportUnexpectedExecutor
                    ("PasteCoreUI/Sidecar.CollectionView.macOS.swift",0x2e,1,0xc1,UVar10.unknown,
                     pMVar14);
        }
        _swift_release(pMVar9);
        if (cVar4 == '\x01') break;
        lVar17 = lVar17 + -1;
        puVar15 = puVar15 + 4;
        uVar16 = uVar16 + 1;
        if (uVar16 - uVar18 == 1) goto LAB_1003f9f08;
      }
      puVar12 = puVar5;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((ulong)puVar12 & 1) == 0) {
        FUN_1003f94c4(0,*(long *)(puVar5 + 0x10) + 1,1);
      }
      uVar2 = *(ulong *)(puVar5 + 0x10);
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar2) {
        FUN_1003f94c4(1 < *(ulong *)(puVar5 + 0x18),uVar2 + 1,1);
      }
      *(ulong *)(puVar5 + 0x10) = uVar2 + 1;
      puVar5[uVar2 * 0x20 + 0x20] = 1;
      *(undefined8 *)(puVar5 + uVar2 * 0x20 + 0x28) = uVar1;
      *(undefined8 *)(puVar5 + uVar2 * 0x20 + 0x30) = uVar3;
      *(MainActor **)(puVar5 + uVar2 * 0x20 + 0x38) = pMVar8;
    } while (uVar16 != uVar18);
LAB_1003f9f08:
    uVar18 = *(ulong *)(puVar5 + 0x10);
  }
  if (uVar18 != 0) {
    uVar16 = 0;
    puVar15 = (undefined8 *)(puVar5 + 0x38);
    do {
      if (*(ulong *)(puVar5 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1003fa000);
        (*pcVar6)();
      }
      pMVar14 = (MainActor *)*puVar15;
      pMVar7 = Swift::MainActor::typeMetadataAccessor();
      pMVar13 = Swift::MainActor::get_shared(pMVar7,pMVar14);
      pMVar7 = pMVar13;
      FUN_1003d0b5c();
      UVar10 = Swift::Actor::get_unownedExecutor();
      UVar11 = UVar10;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar11.unknown & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("PasteCoreUI/Sidecar.CollectionView.macOS.swift",0x2e,1,0xc2,UVar10.unknown,
                   pMVar7);
      }
      uVar16 = uVar16 + 1;
      objc_stub::removeFromSuperview((ID)pMVar14);
      _swift_release(pMVar13);
      puVar15 = puVar15 + 4;
    } while (uVar18 != uVar16);
  }
  _swift_release(puVar5);
  return;
}



/* Address: 0x1003fa000 | FUN_1003fa000 */

void FUN_1003fa000(void)

{
  FUN_1003f73f0();
  return;
}



/* Address: 0x1003fa008 | FUN_1003fa008 */

void FUN_1003fa008(void)

{
  FUN_1003f75a8();
  return;
}



/* Address: 0x1003fa010 | FUN_1003fa010 */

undefined8 FUN_1003fa010(undefined8 param_1)

{
  FUN_1003f0b1c();
  return param_1;
}



/* Address: 0x1003fa044 | thunk_FUN_1003fa088 */

void thunk_FUN_1003fa088(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  URL UVar5;
  long lVar6;
  long unaff_x20;
  ulong uVar7;
  code *pcVar8;
  
  lVar3 = 0;
  FUN_1003efa8c();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  lVar1 = unaff_x20 + (uVar7 + 0x18 & (uVar7 ^ 0xffffffffffffffff));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x38));
  lVar6 = lVar1 + *(int *)(lVar3 + 0x20);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + 0x18));
  lVar4 = 0;
  FUN_1003efaa0();
  iVar2 = *(int *)(lVar4 + 0x18);
  UVar5 = Foundation::URL::typeMetadataAccessor();
  pcVar8 = *(code **)(*(long *)(UVar5.unknown + -8) + 8);
  (*pcVar8)(lVar6 + iVar2,UVar5.unknown);
  lVar1 = lVar1 + *(int *)(lVar3 + 0x24);
  lVar6 = lVar1;
  (**(code **)(*(long *)(lVar4 + -8) + 0x30))(lVar1,1,lVar4);
  if ((int)lVar6 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x18));
    (*pcVar8)(lVar1 + *(int *)(lVar4 + 0x18),UVar5.unknown);
  }
  _swift_deallocObject();
  return;
}



/* Address: 0x1003fa048 | FUN_1003fa048 */

void FUN_1003fa048(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_1003efa8c();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  FUN_1003f88e0(param_1,*(undefined8 *)(unaff_x20 + 0x10),
                unaff_x20 + (uVar2 + 0x18 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x1003fa088 | FUN_1003fa088 */

void FUN_1003fa088(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  URL UVar5;
  long lVar6;
  long unaff_x20;
  ulong uVar7;
  code *pcVar8;
  
  lVar3 = 0;
  FUN_1003efa8c();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  lVar1 = unaff_x20 + (uVar7 + 0x18 & (uVar7 ^ 0xffffffffffffffff));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x38));
  lVar6 = lVar1 + *(int *)(lVar3 + 0x20);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + 0x18));
  lVar4 = 0;
  FUN_1003efaa0();
  iVar2 = *(int *)(lVar4 + 0x18);
  UVar5 = Foundation::URL::typeMetadataAccessor();
  pcVar8 = *(code **)(*(long *)(UVar5.unknown + -8) + 8);
  (*pcVar8)(lVar6 + iVar2,UVar5.unknown);
  lVar1 = lVar1 + *(int *)(lVar3 + 0x24);
  lVar6 = lVar1;
  (**(code **)(*(long *)(lVar4 + -8) + 0x30))(lVar1,1,lVar4);
  if ((int)lVar6 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x18));
    (*pcVar8)(lVar1 + *(int *)(lVar4 + 0x18),UVar5.unknown);
  }
  _swift_deallocObject();
  return;
}



/* Address: 0x1003fa1b4 | FUN_1003fa1b4 */

void FUN_1003fa1b4(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_1003efa8c();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  FUN_1003f89c0(*(undefined8 *)(unaff_x20 + 0x10),
                unaff_x20 + (uVar2 + 0x18 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x1003fa1e4 | thunk_FUN_1003fa088 */

void thunk_FUN_1003fa088(void)

{
  thunk_FUN_1003fa088();
  return;
}



/* Address: 0x1003fa1e8 | FUN_1003fa1e8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1003fa1e8(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5,
                  undefined4 param_6)

{
  double *pdVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  char cVar5;
  undefined8 uVar6;
  ID IVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  code *pcVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  NSString *pNVar14;
  ID *pIVar15;
  ID IVar16;
  ID IVar17;
  class_t *pcVar18;
  undefined8 uVar19;
  long lVar20;
  undefined1 *puVar21;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  undefined *puVar22;
  long unaff_x20;
  undefined1 uVar23;
  ID IVar24;
  ID IVar25;
  long lVar26;
  double dVar27;
  double self;
  ulong uVar28;
  ID IVar29;
  ID IVar30;
  long lVar31;
  ID IVar32;
  undefined8 uVar33;
  undefined1 auVar34 [16];
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  undefined1 auStack_1a0 [8];
  ulong local_198;
  ulong local_190;
  ID local_188;
  code *local_180;
  ID *local_178;
  ID local_170;
  undefined1 *local_168;
  undefined4 local_15c;
  ID local_158;
  long local_150;
  long local_148;
  long local_140;
  class_t *local_138;
  long local_130;
  ID local_120;
  objc_super local_118;
  objc_super local_108;
  objc_super local_f8;
  double local_e8;
  double dStack_e0;
  double dStack_d8;
  undefined1 uStack_d0;
  undefined7 local_cf;
  undefined1 uStack_c8;
  undefined8 uStack_c7;
  ID local_b8;
  ID IStack_b0;
  ID local_a8;
  ID IStack_a0;
  ID local_98;
  undefined1 local_90;
  
  puVar11 = &DAT_100fc4090;
  FUN_1000037f0(&DAT_100fc4090,&DAT_100c464e0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar11 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar31 = (long)(auStack_1a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar26 = lVar31 - extraout_x12_00;
  lVar12 = 0;
  FUN_1003efa8c();
  local_150 = *(long *)(lVar12 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_140 = lVar26 - (extraout_x12_01 + 0xfU & 0xfffffffffffffff0);
  IVar24 = *(ID *)(unaff_x20 +
                  _TtCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell::iconView);
  local_148 = extraout_x12_01;
  FUN_10000ec2c(0,&DAT_100fc3558,&PTR__OBJC_CLASS___NSImage_100f8d6b8);
  lVar13 = *(long *)(param_5 + 0x10);
  uVar33 = *(undefined8 *)(param_5 + 0x18);
  _swift_bridgeObjectRetain_n(uVar33,2);
  lVar20 = lVar13;
  FUN_1000f653c(lVar13,uVar33);
  if (lVar20 == 0) {
    _swift_bridgeObjectRelease(uVar33);
    lVar13 = -0x2fffffffffffffed;
    FUN_1000f653c(0xd000000000000013,0x8000000100d8de20);
    if (lVar13 == 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1003faeb0);
      (*pcVar10)();
    }
  }
  else {
    FUN_1000f653c(lVar13,uVar33);
    if (lVar13 == 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1003fa34c);
      (*pcVar10)();
    }
  }
  local_158 = lVar26;
  objc_stub::setImage_(IVar24,lVar13);
  IVar24 = *(ID *)(unaff_x20 +
                  _TtCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell::titleLabel);
  pNVar14 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  objc_stub::setText_(IVar24,pNVar14);
  IVar24 = *(ID *)(unaff_x20 +
                  _TtCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell::subtitleLabel);
  if (*(long *)(param_5 + 0x38) == 0) {
    objc_stub::setText_(IVar24,0);
    pNVar14 = (NSString *)0x0;
  }
  else {
    pNVar14 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    objc_stub::setText_(IVar24,pNVar14);
    pNVar14 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  }
  objc_stub::setToolTip_(IVar24,pNVar14);
  pIVar15 = (ID *)0x0;
  IVar25 = *(ID *)(unaff_x20 +
                  _TtCCO11PasteCoreUI7Sidecar14CollectionView16NotificationCell::closeButton);
  FUN_10020dab4();
  IVar24 = *pIVar15;
  IVar16 = pIVar15[1];
  _swift_bridgeObjectRetain_n(IVar16,2);
  IVar29 = IVar24;
  FUN_1000f653c(IVar24,IVar16);
  if (IVar29 == 0) {
    _swift_bridgeObjectRelease(IVar16);
    IVar24 = 0xd000000000000013;
    FUN_1000f653c(0xd000000000000013,0x8000000100d8de20);
    if (IVar24 == 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1003faeb4);
      (*pcVar10)();
    }
  }
  else {
    FUN_1000f653c(IVar24,IVar16);
    if (IVar24 == 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1003fa480);
      (*pcVar10)();
    }
  }
  local_170 = lVar31;
  local_168 = auStack_1a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_15c = param_6;
  local_130 = param_5;
  IVar16 = objc_stub::configurationWithPointSize_weight_
                     ((ID)&_OBJC_CLASS___NSImageSymbolConfiguration,ZEXT816(0x4038000000000000),
                      *(undefined8 *)PTR__NSFontWeightBold_100ea90a8);
  local_180 = (code *)objc_stub::imageWithSymbolConfiguration_(IVar24,IVar16);
  local_178 = (ID *)0x0;
  if (local_180 == (code *)0x0) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x1003faeac);
    (*pcVar10)();
  }
  FUN_1001fef10();
  local_178 = (ID *)*local_178;
  pIVar15 = local_178;
  FUN_1001fe19c();
  IVar17 = *pIVar15;
  pIVar15 = (ID *)(IVar25 + _TtCCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell6Button::
                            content);
  local_138 = (class_t *)*pIVar15;
  IVar16 = pIVar15[1];
  IVar24 = pIVar15[2];
  IVar29 = pIVar15[3];
  IVar32 = pIVar15[4];
  *pIVar15 = (ID)local_180;
  auVar34 = NEON_fmov(0x4028000000000000,8);
  pIVar15[2] = auVar34._8_8_;
  pIVar15[1] = auVar34._0_8_;
  pIVar15[3] = (ID)local_178;
  pIVar15[4] = IVar17;
  IVar17 = pIVar15[5];
  *(undefined1 *)(pIVar15 + 5) = 0;
  FUN_1003f4e54(local_138,IVar16,IVar24,IVar29,IVar32,(char)IVar17);
  pcVar18 = (class_t *)0x0;
  FUN_1003f6c58();
  local_138 = pcVar18;
  local_f8.receiver = IVar25;
  local_f8.super_class = pcVar18;
  _objc_msgSendSuper2(&local_f8,"invalidateIntrinsicContentSize");
  dVar35 = (double)pIVar15[1];
  dVar37 = (double)pIVar15[2];
  cVar5 = (char)pIVar15[5];
  if (cVar5 == '\x01') {
    IVar24 = pIVar15[3];
    IVar16 = pIVar15[4];
    IVar29 = *pIVar15;
    FUN_1003f4ebc(IVar29,dVar35,dVar37,IVar24,IVar16,1);
    dVar40 = 1.7976931348623157e+308;
    objc_stub::FUN_100bfe840(IVar29,3);
    dVar38 = (double)FUN_1001ff668();
    FUN_1003f4e54(IVar29,dVar35,dVar37,IVar24,IVar16,1);
  }
  else {
    dVar38 = 0.0;
    param_3 = 0.0;
    if (cVar5 != -1) {
      param_3 = dVar35;
    }
    param_4 = 0.0;
    if (cVar5 != -1) {
      param_4 = dVar37;
    }
    dVar40 = 0.0;
  }
  lVar13 = local_130;
  pdVar1 = (double *)
           (IVar25 + _TtCCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell6Button::
                     preferredContentRect);
  *pdVar1 = dVar38;
  pdVar1[1] = dVar40;
  pdVar1[2] = param_3;
  pdVar1[3] = param_4;
  pdVar1 = (double *)
           (IVar25 + _TtCCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell6Button::
                     preferredContentInsets);
  dVar40 = dVar40 - *pdVar1;
  dVar35 = param_3 + pdVar1[1] + pdVar1[3];
  dVar36 = param_4 + *pdVar1 + pdVar1[2];
  uVar33 = FUN_1001ff668(dVar38 - pdVar1[1]);
  puVar2 = (undefined8 *)
           (IVar25 + _TtCCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell6Button::
                     preferredRect);
  *puVar2 = uVar33;
  puVar2[1] = dVar40;
  puVar2[2] = dVar35;
  puVar2[3] = dVar36;
  puVar2 = (undefined8 *)
           (unaff_x20 + _TtCCO11PasteCoreUI7Sidecar14CollectionView16NotificationCell::onCloseClick)
  ;
  puVar3 = (undefined8 *)
           (IVar25 + _TtCCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell6Button::
                     clickHandler);
  uVar33 = *puVar3;
  uVar4 = puVar3[1];
  uVar19 = puVar2[1];
  uVar6 = *puVar2;
  puVar3[1] = puVar2[1];
  *puVar3 = uVar6;
  _swift_retain(uVar19);
  FUN_100004550(uVar33,uVar4);
  IVar24 = *(ID *)(unaff_x20 +
                  _TtCCO11PasteCoreUI7Sidecar14CollectionView16NotificationCell::primaryButton);
  FUN_1003fb990(&local_e8);
  pdVar1 = (double *)
           (IVar24 + _TtCCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell6Button::content);
  dVar35 = *pdVar1;
  dVar40 = pdVar1[1];
  dVar37 = pdVar1[2];
  dVar38 = pdVar1[3];
  dVar27 = pdVar1[4];
  pdVar1[1] = dStack_e0;
  *pdVar1 = local_e8;
  pdVar1[3] = (double)CONCAT71(local_cf,uStack_d0);
  pdVar1[2] = dStack_d8;
  uVar23 = *(undefined1 *)(pdVar1 + 5);
  *(undefined8 *)((long)pdVar1 + 0x21) = uStack_c7;
  *(ulong *)((long)pdVar1 + 0x19) = CONCAT17(uStack_c8,local_cf);
  FUN_100011090(&local_e8,&local_b8,&DAT_100fc44f8,&DAT_100c46a60);
  FUN_1003f4e54(dVar35,dVar40,dVar37,dVar38,dVar27,uVar23);
  local_108.super_class = local_138;
  local_108.receiver = IVar24;
  _objc_msgSendSuper2(&local_108,"invalidateIntrinsicContentSize");
  dVar35 = pdVar1[1];
  dVar37 = pdVar1[2];
  cVar5 = *(char *)(pdVar1 + 5);
  if (cVar5 == '\x01') {
    dVar40 = pdVar1[3];
    dVar38 = pdVar1[4];
    self = *pdVar1;
    FUN_1003f4ebc(self,dVar35,dVar37,dVar40,dVar38,1);
    dVar41 = 1.7976931348623157e+308;
    objc_stub::FUN_100bfe840((ID)self,3);
    dVar27 = local_e8;
    dVar39 = (double)FUN_1001ff668();
    FUN_1003f4e54(self,dVar35,dVar37,dVar40,dVar38,1);
  }
  else {
    dVar39 = 0.0;
    dVar27 = 0.0;
    if (cVar5 != -1) {
      dVar27 = dVar35;
    }
    dVar36 = 0.0;
    if (cVar5 != -1) {
      dVar36 = dVar37;
    }
    dVar41 = 0.0;
  }
  lVar20 = local_150;
  pdVar1 = (double *)
           (IVar24 + _TtCCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell6Button::
                     preferredContentRect);
  *pdVar1 = dVar39;
  pdVar1[1] = dVar41;
  pdVar1[2] = dVar27;
  pdVar1[3] = dVar36;
  pdVar1 = (double *)
           (IVar24 + _TtCCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell6Button::
                     preferredContentInsets);
  dVar41 = dVar41 - *pdVar1;
  dVar40 = dVar27 + pdVar1[1] + pdVar1[3];
  dVar38 = dVar36 + *pdVar1 + pdVar1[2];
  uVar33 = FUN_1001ff668(dVar39 - pdVar1[1]);
  dVar35 = dVar40;
  dVar37 = dVar38;
  FUN_100005808(&local_e8,&DAT_100fc44f8,&DAT_100c46a60);
  puVar2 = (undefined8 *)
           (IVar24 + _TtCCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell6Button::
                     preferredRect);
  *puVar2 = uVar33;
  puVar2[1] = dVar41;
  puVar2[2] = dVar40;
  puVar2[3] = dVar38;
  puVar11 = &DAT_100ed12e0;
  _swift_allocObject(&DAT_100ed12e0,0x18,7);
  _swift_unknownObjectWeakInit(puVar11 + 0x10,unaff_x20);
  lVar26 = local_140;
  FUN_10008c240(lVar13,local_140);
  local_198 = (ulong)*(byte *)(lVar20 + 0x50);
  uVar28 = local_198 + 0x18 & (local_198 ^ 0xffffffffffffffff);
  puVar22 = &DAT_100ed1308;
  _swift_allocObject(&DAT_100ed1308,uVar28 + local_148,local_198 | 7);
  *(undefined **)(puVar22 + 0x10) = puVar11;
  FUN_1000aa308(lVar26,puVar22 + uVar28);
  puVar2 = (undefined8 *)
           (IVar24 + _TtCCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell6Button::
                     clickHandler);
  uVar33 = *puVar2;
  uVar4 = puVar2[1];
  *puVar2 = FUN_1003fbf30;
  puVar2[1] = puVar22;
  _swift_retain(puVar11);
  FUN_100004550(uVar33,uVar4);
  _swift_release(puVar11);
  IVar24 = local_158;
  IVar29 = *(ID *)(unaff_x20 +
                  _TtCCO11PasteCoreUI7Sidecar14CollectionView16NotificationCell::secondaryButton);
  lVar12 = (long)*(int *)(lVar12 + 0x24);
  FUN_100011090(lVar13 + lVar12,local_158,&DAT_100fc4090,&DAT_100c464e0);
  lVar20 = 0;
  FUN_1003efaa0();
  pcVar10 = *(code **)(*(long *)(lVar20 + -8) + 0x30);
  IVar16 = IVar24;
  (*pcVar10)(IVar24,1,lVar20);
  FUN_100005808(IVar24,&DAT_100fc4090,&DAT_100c464e0);
  objc_stub::setHidden_(IVar29,(ulong)((int)IVar16 == 1));
  IVar24 = local_170;
  FUN_100011090(lVar13 + lVar12,local_170,&DAT_100fc4090,&DAT_100c464e0);
  IVar16 = IVar24;
  (*pcVar10)(IVar24,1,lVar20);
  local_190 = uVar28;
  local_180 = pcVar10;
  local_178 = (ID *)lVar20;
  local_150 = lVar12;
  if ((int)IVar16 == 1) {
    FUN_100005808(IVar24,&DAT_100fc4090,&DAT_100c464e0);
    local_120 = 0;
    IStack_b0 = 0;
    local_a8 = 0;
    IStack_a0 = 0;
    IVar24 = 0;
    uVar23 = 0xff;
  }
  else {
    FUN_1003fb990(&local_b8);
    local_120 = local_b8;
    FUN_1003fbf88(IVar24);
    IVar24 = local_98;
    uVar23 = local_90;
  }
  pIVar15 = (ID *)(IVar29 + _TtCCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell6Button::
                            content);
  IVar16 = *pIVar15;
  IVar17 = pIVar15[1];
  IVar25 = pIVar15[2];
  IVar32 = pIVar15[3];
  IVar30 = pIVar15[4];
  *pIVar15 = local_120;
  pIVar15[1] = IStack_b0;
  pIVar15[2] = local_a8;
  pIVar15[3] = IStack_a0;
  pIVar15[4] = IVar24;
  IVar7 = pIVar15[5];
  *(undefined1 *)(pIVar15 + 5) = uVar23;
  local_188 = IStack_a0;
  local_170 = local_a8;
  local_158 = IStack_b0;
  FUN_1003f4ebc();
  FUN_1003f4e54(IVar16,IVar17,IVar25,IVar32,IVar30,(char)IVar7);
  local_118.super_class = local_138;
  local_118.receiver = IVar29;
  _objc_msgSendSuper2(&local_118,"invalidateIntrinsicContentSize");
  dVar40 = (double)pIVar15[1];
  dVar38 = (double)pIVar15[2];
  if ((char)pIVar15[5] == '\x01') {
    IVar16 = pIVar15[3];
    IVar25 = pIVar15[4];
    IVar17 = *pIVar15;
    FUN_1003f4ebc(IVar17,dVar40,dVar38,IVar16,IVar25,1);
    dVar36 = 1.7976931348623157e+308;
    objc_stub::FUN_100bfe840(IVar17,3);
    dVar27 = (double)FUN_1001ff668();
    FUN_1003f4e54(IVar17,dVar40,dVar38,IVar16,IVar25,1);
  }
  else {
    dVar27 = 0.0;
    if ((char)pIVar15[5] == -1) {
      dVar40 = 0.0;
      dVar38 = 0.0;
    }
    dVar36 = 0.0;
    dVar35 = dVar40;
    dVar37 = dVar38;
  }
  lVar13 = local_130;
  uVar9 = local_15c;
  puVar8 = local_168;
  pdVar1 = (double *)
           (IVar29 + _TtCCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell6Button::
                     preferredContentRect);
  *pdVar1 = dVar27;
  pdVar1[1] = dVar36;
  pdVar1[2] = dVar35;
  pdVar1[3] = dVar37;
  pdVar1 = (double *)
           (IVar29 + _TtCCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell6Button::
                     preferredContentInsets);
  dVar36 = dVar36 - *pdVar1;
  dVar35 = dVar35 + pdVar1[1] + pdVar1[3];
  dVar37 = dVar37 + *pdVar1 + pdVar1[2];
  uVar33 = FUN_1001ff668(dVar27 - pdVar1[1]);
  FUN_1003f4e54(local_120,local_158,local_170,local_188,IVar24,uVar23);
  puVar2 = (undefined8 *)
           (IVar29 + _TtCCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell6Button::
                     preferredRect);
  *puVar2 = uVar33;
  puVar2[1] = dVar36;
  puVar2[2] = dVar35;
  puVar2[3] = dVar37;
  FUN_100011090(lVar13 + local_150,puVar8,&DAT_100fc4090,&DAT_100c464e0);
  puVar21 = puVar8;
  (*local_180)(puVar8,1,local_178);
  FUN_100005808(puVar8,&DAT_100fc4090,&DAT_100c464e0);
  if ((int)puVar21 == 1) {
    pcVar10 = (code *)0x0;
    puVar22 = (undefined *)0x0;
  }
  else {
    puVar11 = &DAT_100ed12e0;
    _swift_allocObject(&DAT_100ed12e0,0x18,7);
    _swift_unknownObjectWeakInit(puVar11 + 0x10,unaff_x20);
    lVar20 = local_140;
    FUN_10008c240(lVar13,local_140);
    uVar28 = local_190;
    puVar22 = &DAT_100ed1330;
    _swift_allocObject(&DAT_100ed1330,local_190 + local_148,local_198 | 7);
    *(undefined **)(puVar22 + 0x10) = puVar11;
    FUN_1000aa308(lVar20,puVar22 + uVar28);
    pcVar10 = FUN_1003fbf3c;
  }
  puVar2 = (undefined8 *)
           (IVar29 + _TtCCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell6Button::
                     clickHandler);
  uVar33 = *puVar2;
  uVar4 = puVar2[1];
  *puVar2 = pcVar10;
  puVar2[1] = puVar22;
  FUN_100004550(uVar33,uVar4);
  FUN_1003f3ccc(uVar9);
  FUN_1003f3d9c(uVar9);
  return;
}



/* Address: 0x1003faeb4 | FUN_1003faeb4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003faeb4(ID param_1)

{
  undefined8 *puVar1;
  ID IVar2;
  undefined1 auVar3 [16];
  
  puVar1 = (undefined8 *)
           (param_1 +
           _TtCCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell6Button::
           preferredContentInsets);
  auVar3 = NEON_fmov(0x4028000000000000,8);
  puVar1[1] = auVar3._8_8_;
  *puVar1 = auVar3._0_8_;
  puVar1[3] = auVar3._8_8_;
  puVar1[2] = auVar3._0_8_;
  puVar1 = (undefined8 *)
           (param_1 +
           _TtCCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell6Button::
           minimumContentInsets);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  IVar2 = objc_stub::clearColor((ID)&_OBJC_CLASS___NSColor);
  *(ID *)(param_1 +
         _TtCCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell6Button::
         highlightedBackgroundColor) = IVar2;
  objc_stub::setNeedsDisplay_(param_1,1);
  IVar2 = objc_stub::clearColor((ID)&_OBJC_CLASS___NSColor);
  *(ID *)(param_1 +
         _TtCCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell6Button::normalBackgroundColor
         ) = IVar2;
  objc_stub::setNeedsDisplay_(param_1,1);
  return 0;
}



/* Address: 0x1003fafa0 | FUN_1003fafa0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003fafa0(void)

{
  long lVar1;
  ID self;
  undefined *puVar2;
  long unaff_x20;
  
  lVar1 = _TtCCO11PasteCoreUI7Sidecar14CollectionView16NotificationCell::
          ___lazy_storage___buttonsStackView;
  self = *(ID *)(unaff_x20 +
                _TtCCO11PasteCoreUI7Sidecar14CollectionView16NotificationCell::
                ___lazy_storage___buttonsStackView);
  if (self == 0) {
    puVar2 = &_OBJC_CLASS___NSStackView;
    _objc_allocWithZone();
    self = objc_stub::init((ID)puVar2);
    puVar2 = &DAT_100fc3e80;
    FUN_1000037f0(&DAT_100fc3e80,&DAT_100c45d50);
    _swift_initStackObject();
    *(undefined8 *)(puVar2 + 0x18) = 5;
    *(undefined8 *)(puVar2 + 0x10) = 2;
    *(undefined8 *)(puVar2 + 0x20) =
         *(undefined8 *)
          (unaff_x20 + _TtCCO11PasteCoreUI7Sidecar14CollectionView16NotificationCell::primaryButton)
    ;
    *(undefined8 *)(puVar2 + 0x28) =
         *(undefined8 *)
          (unaff_x20 +
          _TtCCO11PasteCoreUI7Sidecar14CollectionView16NotificationCell::secondaryButton);
    FUN_100201b9c(puVar2);
    _swift_setDeallocating(puVar2);
    _swift_arrayDestroy(puVar2 + 0x20,*(undefined8 *)(puVar2 + 0x10),
                        PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8);
    objc_stub::setOrientation_(self,0);
    objc_stub::setSpacing_(self,0x4020000000000000);
    *(ID *)(unaff_x20 + lVar1) = self;
  }
  return self;
}



/* Address: 0x1003fb0c8 | FUN_1003fb0c8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003fb0c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  ID self;
  ID IVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_100 [16];
  ID local_f0;
  
  _swift_getObjectType();
  lVar2 = _TtCCO11PasteCoreUI7Sidecar14CollectionView16NotificationCell::primaryButton;
  self = 0;
  FUN_1003f6c58();
  IVar3 = self;
  _objc_allocWithZone();
  IVar3 = objc_stub::init(IVar3);
  *(ID *)(unaff_x20 + lVar2) = IVar3;
  lVar2 = _TtCCO11PasteCoreUI7Sidecar14CollectionView16NotificationCell::secondaryButton;
  IVar3 = self;
  _objc_allocWithZone();
  IVar3 = objc_stub::init(IVar3);
  *(ID *)(unaff_x20 + lVar2) = IVar3;
  lVar2 = _TtCCO11PasteCoreUI7Sidecar14CollectionView16NotificationCell::closeButton;
  _objc_allocWithZone();
  IVar3 = objc_stub::init(self);
  FUN_1003faeb4();
  *(ID *)(unaff_x20 + lVar2) = IVar3;
  puVar1 = (undefined8 *)
           (unaff_x20 + _TtCCO11PasteCoreUI7Sidecar14CollectionView16NotificationCell::onActionClick
           );
  *puVar1 = FUN_100004520;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)
           (unaff_x20 + _TtCCO11PasteCoreUI7Sidecar14CollectionView16NotificationCell::onCloseClick)
  ;
  *puVar1 = FUN_100004520;
  puVar1[1] = 0;
  *(undefined8 *)
   (unaff_x20 +
   _TtCCO11PasteCoreUI7Sidecar14CollectionView16NotificationCell::___lazy_storage___buttonsStackView
   ) = 0;
  IVar3 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff68,"initWithFrame:",param_1,
                              param_2,param_3,param_4);
  puVar4 = &DAT_100fc3e80;
  FUN_1000037f0(&DAT_100fc3e80,&DAT_100c45d50);
  _swift_initStackObject();
  *(undefined8 *)(puVar4 + 0x18) = 0xd;
  *(undefined8 *)(puVar4 + 0x10) = 6;
  *(undefined8 *)(puVar4 + 0x20) =
       *(undefined8 *)
        (IVar3 + _TtCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell::backgroundView);
  *(undefined8 *)(puVar4 + 0x28) =
       *(undefined8 *)
        (IVar3 + _TtCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell::iconView);
  *(undefined8 *)(puVar4 + 0x30) =
       *(undefined8 *)
        (IVar3 + _TtCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell::titleLabel);
  lVar2 = _TtCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell::subtitleLabel;
  *(undefined8 *)(puVar4 + 0x38) =
       *(undefined8 *)
        (IVar3 + _TtCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell::subtitleLabel);
  uVar5 = *(undefined8 *)
           (IVar3 + _TtCCO11PasteCoreUI7Sidecar14CollectionView16NotificationCell::closeButton);
  *(undefined8 *)(puVar4 + 0x40) = uVar5;
  FUN_1003fafa0();
  *(undefined8 *)(puVar4 + 0x48) = uVar5;
  local_f0 = IVar3;
  FUN_1001fa150(puVar4,FUN_1003fbf00,auStack_100);
  _swift_bridgeObjectRelease();
  _swift_setDeallocating(puVar4);
  _swift_arrayDestroy(puVar4 + 0x20,*(undefined8 *)(puVar4 + 0x10),
                      PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8);
  objc_stub::setContentCompressionResistancePriority_forOrientation_
            (*(ID *)(IVar3 + lVar2),0x437a0000,1);
  objc_stub::setContentCompressionResistancePriority_forOrientation_
            (*(ID *)(IVar3 + _TtCCO11PasteCoreUI7Sidecar14CollectionView16NotificationCell::
                             primaryButton),0x447a0000,0);
  return IVar3;
}



/* Address: 0x1003fb350 | FUN_1003fb350 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_1003fb350(ID param_1)

{
  long lVar1;
  long lVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  undefined8 uVar8;
  ID *pIVar9;
  ID *pIVar10;
  ID *pIVar11;
  ID IVar12;
  ID IVar13;
  ID IVar14;
  ID *pIVar15;
  ID IVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  ID IVar20;
  ID IVar21;
  ID local_90 [3];
  ID local_78;
  undefined **ppuStack_70;
  
  IVar16 = param_1;
  _swift_getObjectType();
  IVar3 = IVar16;
  FUN_1003f34c4();
  IVar4 = IVar3;
  FUN_1003f35bc();
  IVar5 = IVar4;
  FUN_1003f3680();
  IVar6 = IVar5;
  FUN_1003f3744();
  IVar7 = IVar6;
  FUN_1003f37e8();
  lVar1 = _TtCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell::titleLabel;
  ppuStack_70 = &PTR_PTR_100ec00e8;
  uVar8 = 0;
  local_90[0] = param_1;
  local_78 = IVar16;
  FUN_10000ec2c(0,&DAT_100fc31b0,&PTR__OBJC_CLASS___NSTextField_100f8d670);
  pIVar9 = local_90;
  FUN_1001f9b74(0x4028000000000000,pIVar9,uVar8,&PTR_PTR_100ec00e8);
  pIVar10 = local_90;
  FUN_100004594();
  FUN_1003f388c();
  lVar2 = _TtCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell::subtitleLabel;
  ppuStack_70 = &PTR_PTR_100ec00e8;
  pIVar11 = local_90;
  local_90[0] = param_1;
  local_78 = IVar16;
  FUN_1001f9b74(0x4028000000000000,pIVar11,uVar8,&PTR_PTR_100ec00e8);
  FUN_100004594(local_90);
  IVar20 = *(ID *)(param_1 + lVar2);
  IVar12 = objc_stub::topAnchor(IVar20);
  IVar13 = objc_stub::bottomAnchor(*(ID *)(param_1 + lVar1));
  IVar13 = objc_stub::constraintEqualToAnchor_constant_(IVar12,0x4010000000000000,IVar13);
  IVar20 = objc_stub::bottomAnchor(IVar20);
  IVar12 = IVar20;
  FUN_1003fafa0();
  IVar12 = objc_stub::topAnchor(IVar12);
  IVar12 = objc_stub::constraintLessThanOrEqualToAnchor_constant_(IVar20,0xc020000000000000,IVar12);
  IVar21 = *(ID *)(param_1 +
                  _TtCCO11PasteCoreUI7Sidecar14CollectionView16NotificationCell::closeButton);
  IVar20 = objc_stub::topAnchor(IVar21);
  IVar14 = objc_stub::topAnchor(param_1);
  IVar20 = objc_stub::constraintEqualToAnchor_(IVar20,IVar14);
  IVar14 = objc_stub::trailingAnchor(IVar21);
  IVar21 = objc_stub::trailingAnchor(param_1);
  IVar14 = objc_stub::constraintEqualToAnchor_(IVar14,IVar21);
  lVar1 = _TtCCO11PasteCoreUI7Sidecar14CollectionView16NotificationCell::
          ___lazy_storage___buttonsStackView;
  ppuStack_70 = &PTR_PTR_100ec00e8;
  uVar8 = 0;
  local_90[0] = param_1;
  local_78 = IVar16;
  FUN_10000ec2c(0,&DAT_100fc3500,&PTR__OBJC_CLASS___NSStackView_100f8d698);
  pIVar15 = local_90;
  FUN_1001f9b74(0x4028000000000000,pIVar15,uVar8,&PTR_PTR_100ec00e8);
  FUN_100004594(local_90);
  IVar16 = objc_stub::bottomAnchor(*(ID *)(param_1 + lVar1));
  IVar21 = objc_stub::bottomAnchor(param_1);
  IVar16 = objc_stub::constraintEqualToAnchor_constant_(IVar16,0xc028000000000000,IVar21);
  puVar17 = &DAT_100fc3b00;
  FUN_1000037f0(&DAT_100fc3b00,&DAT_100c45590);
  _swift_initStackObject();
  *(undefined8 *)(puVar17 + 0x18) = 0x1c;
  *(undefined8 *)(puVar17 + 0x10) = 0xe;
  puVar18 = &DAT_100fc3e70;
  FUN_1000037f0(&DAT_100fc3e70,&DAT_100c45d60);
  *(undefined **)(puVar17 + 0x38) = puVar18;
  *(undefined ***)(puVar17 + 0x40) = &PTR_PTR_100ec00b8;
  *(ID *)(puVar17 + 0x20) = IVar3;
  uVar8 = 0;
  FUN_10000ec2c(0,&DAT_100fc32d0,&PTR__OBJC_CLASS___NSLayoutConstraint_100f8d660);
  *(undefined8 *)(puVar17 + 0x60) = uVar8;
  *(undefined ***)(puVar17 + 0x68) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar17 + 0x48) = IVar4;
  *(undefined8 *)(puVar17 + 0x88) = uVar8;
  *(undefined ***)(puVar17 + 0x90) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar17 + 0x70) = IVar5;
  *(undefined8 *)(puVar17 + 0xb0) = uVar8;
  *(undefined ***)(puVar17 + 0xb8) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar17 + 0x98) = IVar6;
  *(undefined8 *)(puVar17 + 0xd8) = uVar8;
  *(undefined ***)(puVar17 + 0xe0) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar17 + 0xc0) = IVar7;
  *(undefined **)(puVar17 + 0x100) = puVar18;
  *(undefined ***)(puVar17 + 0x108) = &PTR_PTR_100ec00b8;
  *(ID **)(puVar17 + 0xe8) = pIVar9;
  *(undefined8 *)(puVar17 + 0x128) = uVar8;
  *(undefined ***)(puVar17 + 0x130) = &PTR_PTR_100ec00a8;
  *(ID **)(puVar17 + 0x110) = pIVar10;
  *(undefined **)(puVar17 + 0x150) = puVar18;
  *(undefined ***)(puVar17 + 0x158) = &PTR_PTR_100ec00b8;
  *(ID **)(puVar17 + 0x138) = pIVar11;
  *(undefined8 *)(puVar17 + 0x178) = uVar8;
  *(undefined ***)(puVar17 + 0x180) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar17 + 0x160) = IVar13;
  *(undefined8 *)(puVar17 + 0x1a0) = uVar8;
  *(undefined ***)(puVar17 + 0x1a8) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar17 + 0x188) = IVar12;
  *(undefined8 *)(puVar17 + 0x1c8) = uVar8;
  *(undefined ***)(puVar17 + 0x1d0) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar17 + 0x1b0) = IVar20;
  *(undefined8 *)(puVar17 + 0x1f0) = uVar8;
  *(undefined ***)(puVar17 + 0x1f8) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar17 + 0x1d8) = IVar14;
  *(undefined **)(puVar17 + 0x218) = puVar18;
  *(undefined ***)(puVar17 + 0x220) = &PTR_PTR_100ec00b8;
  *(ID **)(puVar17 + 0x200) = pIVar15;
  *(undefined8 *)(puVar17 + 0x240) = uVar8;
  *(undefined ***)(puVar17 + 0x248) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar17 + 0x228) = IVar16;
  _swift_bridgeObjectRetain(IVar3);
  _swift_bridgeObjectRetain(pIVar9);
  _swift_bridgeObjectRetain(pIVar11);
  puVar19 = puVar17;
  FUN_1001f8d60(puVar17);
  _swift_bridgeObjectRelease(IVar3);
  _swift_bridgeObjectRelease(pIVar9);
  _swift_bridgeObjectRelease(pIVar11);
  _swift_setDeallocating(puVar17);
  uVar8 = *(undefined8 *)(puVar17 + 0x10);
  puVar18 = &DAT_100fc3b10;
  FUN_1000037f0(&DAT_100fc3b10,&DAT_100c455a0);
  _swift_arrayDestroy(puVar17 + 0x20,uVar8,puVar18);
  return puVar19;
}



/* Address: 0x1003fb8c8 | _TtCCO11PasteCoreUI7Sidecar14CollectionView16NotificationCell::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID __thiscall
_TtCCO11PasteCoreUI7Sidecar14CollectionView16NotificationCell::initWithFrame_
          (_TtCCO11PasteCoreUI7Sidecar14CollectionView16NotificationCell *this,ID param_1,
          SEL param_2,CGRect param_3)

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
    pcVar4 = "PasteCoreUI/Sidecar.NotificationCell.macOS.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/Sidecar.NotificationCell.macOS.swift",0x30,1,0x19,UVar3.unknown,pMVar1);
  }
  FUN_1003fb0c8();
  _swift_release(pMVar2);
  return (ID)pcVar4;
}



/* Address: 0x1003fb990 | FUN_1003fb990 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1003fb990(undefined8 *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  ID *unaff_x20;
  undefined8 uVar9;
  ID IVar10;
  ID IVar11;
  ID self;
  ulong uVar12;
  long lVar13;
  undefined1 uVar14;
  
  IVar11 = unaff_x20[1];
  if (IVar11 != 0) {
    self = *unaff_x20;
    FUN_10000ec2c(0,&DAT_100fc3558,&PTR__OBJC_CLASS___NSImage_100f8d6b8);
    _swift_bridgeObjectRetain_n(IVar11,2);
    IVar10 = self;
    FUN_1000f653c(self,IVar11);
    if (IVar10 == 0) {
      _swift_bridgeObjectRelease(IVar11);
      self = 0xd000000000000013;
      FUN_1000f653c(0xd000000000000013,0x8000000100d8de20);
      if (self == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1003fbc60);
        (*pcVar1)();
      }
    }
    else {
      FUN_1000f653c(self,IVar11);
      if (self == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1003fba14);
        (*pcVar1)();
      }
    }
    IVar11 = objc_stub::configurationWithPointSize_weight_
                       ((ID)&_OBJC_CLASS___NSImageSymbolConfiguration,0x4038000000000000,
                        *(undefined8 *)PTR__NSFontWeightSemibold_100ea90c0);
    puVar2 = (undefined *)objc_stub::imageWithSymbolConfiguration_(self,IVar11);
    puVar3 = (undefined8 *)0x0;
    if (puVar2 != (undefined *)0x0) {
      FUN_1001fe15c();
      uVar9 = *puVar3;
      uVar14 = 0;
      uVar7 = 0x4030000000000000;
      goto LAB_1003fbc2c;
    }
  }
  IVar11 = unaff_x20[3];
  if (IVar11 == 0) {
    puVar2 = (undefined *)0x0;
    uVar7 = 0;
    uVar9 = 0;
    uVar14 = 0xff;
  }
  else {
    IVar10 = unaff_x20[2];
    puVar4 = &DAT_100fc32e8;
    FUN_1000037f0(&DAT_100fc32e8,&DAT_100c45b08);
    lVar5 = 0;
    FUN_100202fc8();
    lVar13 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
    uVar12 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    _swift_allocObject(puVar4,uVar12 + lVar13 * 3,uVar8 | 7);
    *(undefined8 *)(puVar4 + 0x18) = 6;
    *(undefined8 *)(puVar4 + 0x10) = 3;
    puVar3 = (undefined8 *)(puVar4 + uVar12);
    FUN_10000ec2c(0,&DAT_100fc4360,&PTR__OBJC_CLASS___NSParagraphStyle_100f8da08);
    uVar7 = 4;
    FUN_1002024b8();
    *puVar3 = uVar7;
    puVar6 = puVar3;
    _swift_storeEnumTagMultiPayload(puVar3,lVar5,4);
    FUN_1001fe15c();
    uVar7 = *puVar6;
    *(undefined8 *)((long)puVar3 + lVar13) = uVar7;
    uVar14 = 1;
    _swift_storeEnumTagMultiPayload((undefined *)((long)puVar3 + lVar13),lVar5,1);
    FUN_10000ec2c(0,&DAT_100fc3e90,&PTR__OBJC_CLASS___NSFont_100f8d678);
    FUN_1001ff928();
    FUN_1001ffa18();
    *(undefined8 *)((long)puVar3 + lVar13 * 2) = uVar7;
    _swift_storeEnumTagMultiPayload((undefined *)((long)puVar3 + lVar13 * 2),lVar5,0);
    puVar2 = puVar4;
    FUN_100201eb0(puVar4,IVar10,IVar11);
    _swift_setDeallocating(puVar4);
    _swift_arrayDestroy(puVar3,*(undefined8 *)(puVar4 + 0x10),lVar5);
    _swift_deallocClassInstance(puVar4,0x20,7);
    uVar7 = 0;
    uVar9 = 0;
  }
LAB_1003fbc2c:
  *param_1 = puVar2;
  param_1[1] = uVar7;
  param_1[2] = uVar7;
  param_1[3] = uVar9;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = uVar14;
  return;
}



/* Address: 0x1003fbc60 | FUN_1003fbc60 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003fbc60(long param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    pcVar1 = *(code **)(param_1 +
                       _TtCCO11PasteCoreUI7Sidecar14CollectionView16NotificationCell::onActionClick)
    ;
    uVar2 = ((undefined8 *)
            (param_1 + _TtCCO11PasteCoreUI7Sidecar14CollectionView16NotificationCell::onActionClick)
            )[1];
    _swift_retain(uVar2);
    lVar3 = 0;
    FUN_1003efa8c();
    (*pcVar1)(param_2 + *(int *)(lVar3 + 0x20));
    _swift_release(uVar2);
    return;
  }
  return;
}



/* Address: 0x1003fbcdc | FUN_1003fbcdc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003fbcdc(long param_1,long param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  long extraout_x8;
  undefined1 *puVar6;
  
  puVar3 = &DAT_100fc4090;
  FUN_1000037f0(&DAT_100fc4090,&DAT_100c464e0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &stack0xffffffffffffffc0 + -extraout_x8;
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    pcVar2 = *(code **)(param_1 +
                       _TtCCO11PasteCoreUI7Sidecar14CollectionView16NotificationCell::onActionClick)
    ;
    uVar1 = ((undefined8 *)
            (param_1 + _TtCCO11PasteCoreUI7Sidecar14CollectionView16NotificationCell::onActionClick)
            )[1];
    _swift_retain(uVar1);
    lVar4 = 0;
    FUN_1003efa8c();
    FUN_100011090(param_2 + *(int *)(lVar4 + 0x24),puVar6,&DAT_100fc4090,&DAT_100c464e0);
    lVar4 = 0;
    FUN_1003efaa0();
    puVar5 = puVar6;
    (**(code **)(*(long *)(lVar4 + -8) + 0x30))(puVar6,1,lVar4);
    if ((int)puVar5 == 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1003fbdec);
      (*pcVar2)();
    }
    (*pcVar2)(puVar6);
    _swift_release(uVar1);
    FUN_1003fbf88(puVar6);
  }
  return;
}



/* Address: 0x1003fbdec | FUN_1003fbdec */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003fbdec(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)
                  (unaff_x20 +
                   _TtCCO11PasteCoreUI7Sidecar14CollectionView16NotificationCell::onActionClick + 8)
                );
  _swift_release(*(undefined8 *)
                  (unaff_x20 +
                   _TtCCO11PasteCoreUI7Sidecar14CollectionView16NotificationCell::onCloseClick + 8))
  ;
  return 0;
}



/* Address: 0x1003fbe60 | _TtCCO11PasteCoreUI7Sidecar14CollectionView16NotificationCell::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtCCO11PasteCoreUI7Sidecar14CollectionView16NotificationCell::_cxx_destruct
               (ID param_1,SEL param_2)

{
  _swift_release(*(undefined8 *)(param_1 + onActionClick + 8));
  _swift_release(*(undefined8 *)(param_1 + onCloseClick + 8));
  return;
}



/* Address: 0x1003fbee0 | FUN_1003fbee0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1003fbee0(void)

{
  return ZEXT816(0x100f9bcb0);
}



/* Address: 0x1003fbf00 | FUN_1003fbf00 */

void FUN_1003fbf00(void)

{
  long unaff_x20;
  
  FUN_1003fb350(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1003fbf08 | FUN_1003fbf08 */

void FUN_1003fbf08(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x1003fbf2c | thunk_FUN_1003fa088 */

void thunk_FUN_1003fa088(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  URL UVar5;
  long lVar6;
  long unaff_x20;
  ulong uVar7;
  code *pcVar8;
  
  lVar3 = 0;
  FUN_1003efa8c();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  lVar1 = unaff_x20 + (uVar7 + 0x18 & (uVar7 ^ 0xffffffffffffffff));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x38));
  lVar6 = lVar1 + *(int *)(lVar3 + 0x20);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + 0x18));
  lVar4 = 0;
  FUN_1003efaa0();
  iVar2 = *(int *)(lVar4 + 0x18);
  UVar5 = Foundation::URL::typeMetadataAccessor();
  pcVar8 = *(code **)(*(long *)(UVar5.unknown + -8) + 8);
  (*pcVar8)(lVar6 + iVar2,UVar5.unknown);
  lVar1 = lVar1 + *(int *)(lVar3 + 0x24);
  lVar6 = lVar1;
  (**(code **)(*(long *)(lVar4 + -8) + 0x30))(lVar1,1,lVar4);
  if ((int)lVar6 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x18));
    (*pcVar8)(lVar1 + *(int *)(lVar4 + 0x18),UVar5.unknown);
  }
  _swift_deallocObject();
  return;
}


