/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100462340 | FUN_100462340 */

/* WARNING: Removing unreachable block (ram,0x00010046243c) */

undefined8 **** FUN_100462340(void)

{
  code *pcVar1;
  undefined8 ****ppppuVar2;
  long lVar3;
  undefined8 ****ppppuVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x20;
  undefined8 ****ppppuVar7;
  undefined8 ***local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0x70,auStack_48,0,0);
  lVar6 = *(long *)(unaff_x20 + 0x70);
  ppppuVar7 = *(undefined8 *****)(lVar6 + 0x10);
  _swift_bridgeObjectRetain(lVar6);
  ppppuVar2 = (undefined8 ****)PTR___swiftEmptyArrayStorage_100eae0d8;
  if (ppppuVar7 != (undefined8 ****)0x0) {
    _swift_bridgeObjectRetain(lVar6);
    ppppuVar2 = ppppuVar7;
    FUN_100464714(ppppuVar7,0,&DAT_100fc8390,&DAT_100c4cf20,FUN_10045ba0c);
    lVar3 = 0;
    FUN_10045ba0c();
    uVar5 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
    ppppuVar4 = &local_70;
    FUN_10046b8ac(ppppuVar4,
                  (undefined *)((long)ppppuVar2 + (uVar5 + 0x20 & (uVar5 ^ 0xffffffffffffffff))),
                  ppppuVar7,lVar6,FUN_10045ba0c);
    FUN_10000c650(local_70,uStack_68,local_60,uStack_58,local_50);
    if (ppppuVar4 != ppppuVar7) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100462400);
      (*pcVar1)();
    }
  }
  local_70 = ppppuVar2;
  FUN_100469b18(&local_70);
  _swift_bridgeObjectRelease(lVar6);
  return (undefined8 ****)local_70;
}



/* Address: 0x100462448 | FUN_100462448 */

void FUN_100462448(long param_1)

{
  bool bVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar9;
  long unaff_x20;
  long lVar10;
  long unaff_x21;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  undefined8 local_a0 [5];
  undefined1 auStack_78 [24];
  
  puVar3 = &DAT_100fc8170;
  FUN_1000037f0(&DAT_100fc8170,&DAT_100c4cde8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = (long)local_a0 - extraout_x8;
  puVar3 = &DAT_100fc8178;
  FUN_1000037f0(&DAT_100fc8178,&DAT_100c4cdf0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  lVar12 = lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar15 = lVar12 - extraout_x12;
  lVar4 = 0;
  FUN_10045ba0c();
  lVar9 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  lVar11 = lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_78;
  _swift_beginAccess(unaff_x20 + 0x70,puVar8,0,0);
  lVar10 = *(long *)(unaff_x20 + 0x70);
  if (*(long *)(lVar10 + 0x10) == 0) {
    (**(code **)(lVar9 + 0x38))(lVar15,1,1,lVar4);
  }
  else {
    _swift_bridgeObjectRetain(lVar10);
    lVar5 = param_1;
    FUN_1004647d0(param_1);
    bVar1 = ((ulong)puVar8 & 1) == 0;
    if (!bVar1) {
      FUN_1000c495c(*(long *)(lVar10 + 0x38) + *(long *)(lVar9 + 0x48) * lVar5,lVar15,FUN_10045ba0c)
      ;
    }
    (**(code **)(lVar9 + 0x38))(lVar15,bVar1,1,lVar4);
    _swift_bridgeObjectRelease(lVar10);
    lVar10 = lVar15;
    (**(code **)(lVar9 + 0x30))(lVar15,1,lVar4);
    if ((int)lVar10 != 1) {
      FUN_1000523d8(lVar15,lVar11,FUN_10045ba0c);
      puVar6 = (undefined8 *)(lVar11 + *(int *)(lVar4 + 0x24));
      _swift_beginAccess(unaff_x20 + 0x78,local_a0,0x21,0);
      FUN_10046531c(lVar14,*puVar6,puVar6[1]);
      _swift_endAccess(local_a0);
      FUN_100005808(lVar14,&DAT_100fc8170,&DAT_100c4cde8);
      _swift_beginAccess(unaff_x20 + 0x70,local_a0,0x21,0);
      FUN_100465444(lVar12,param_1);
      _swift_endAccess(local_a0);
      FUN_100005808(lVar12,&DAT_100fc8178,&DAT_100c4cdf0);
      FUN_100004640(unaff_x20 + 0x88,*(undefined8 *)(unaff_x20 + 0xa0));
      lVar4 = *(long *)(unaff_x20 + 0x70);
      puVar13 = *(undefined8 **)(lVar4 + 0x10);
      puVar6 = (undefined8 *)PTR___swiftEmptyArrayStorage_100eae0d8;
      if (puVar13 != (undefined8 *)0x0) {
        _swift_bridgeObjectRetain(lVar4);
        puVar6 = puVar13;
        FUN_100464714(puVar13,0,&DAT_100fc8390,&DAT_100c4cf20,FUN_10045ba0c);
        puVar7 = local_a0;
        FUN_10046b8ac(puVar7,(undefined *)
                             ((long)puVar6 +
                             ((ulong)*(byte *)(lVar9 + 0x50) + 0x20 &
                             ((ulong)*(byte *)(lVar9 + 0x50) ^ 0xffffffffffffffff))),puVar13,lVar4,
                      FUN_10045ba0c);
        FUN_10000c650(local_a0[0],local_a0[1],local_a0[2],local_a0[3],local_a0[4]);
        if (puVar7 != puVar13) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10046274c);
          (*pcVar2)();
        }
      }
      FUN_10046fe64(puVar6);
      _swift_release(puVar6);
      if (unaff_x21 == 0) {
        FUN_100462054();
      }
      FUN_10046bfa8(lVar11);
      return;
    }
  }
  FUN_100005808(lVar15,&DAT_100fc8178,&DAT_100c4cdf0);
  return;
}



/* Address: 0x1004627a8 | FUN_1004627a8 */

void FUN_1004627a8(char param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  undefined *puVar7;
  Date DVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  UUID UVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  long lVar18;
  long extraout_x8;
  long lVar19;
  long extraout_x8_00;
  long lVar20;
  long lVar21;
  long extraout_x8_01;
  long lVar22;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar23;
  long lVar24;
  long extraout_x8_04;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  ulong uVar31;
  long unaff_x20;
  undefined8 uVar32;
  long unaff_x21;
  long lVar33;
  undefined **ppuVar34;
  code *pcVar35;
  ulong *puVar36;
  ulong uVar37;
  long local_170;
  undefined *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 auStack_80 [32];
  
  puVar7 = &DAT_100fc8178;
  FUN_1000037f0(&DAT_100fc8178,&DAT_100c4cdf0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar19 = (long)&local_170 - extraout_x8;
  puVar7 = &DAT_100fc8170;
  FUN_1000037f0(&DAT_100fc8170,&DAT_100c4cde8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar20 = lVar19 - extraout_x8_00;
  DVar8 = Foundation::Date::typeMetadataAccessor();
  lVar21 = *(long *)(DVar8.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar21 + 0x40));
  lVar22 = lVar20 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar7 = &DAT_100fc8160;
  local_170 = lVar22;
  FUN_1000037f0(&DAT_100fc8160,&DAT_100c4cdc0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar22 = lVar22 - extraout_x8_02;
  puVar9 = &DAT_100fc7df8;
  FUN_1000037f0(&DAT_100fc7df8,&DAT_100c4c890);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar9 + -8) + 0x40));
  lVar26 = lVar22 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar23 = lVar26 - extraout_x12;
  lVar10 = 0;
  FUN_10045ba0c();
  lVar24 = *(long *)(lVar10 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar24 + 0x40));
  lVar27 = lVar23 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar28 = lVar27 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar29 = lVar28 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar25 = lVar29 - extraout_x12_02;
  _swift_beginAccess(unaff_x20 + 0x70,auStack_80,0,0);
  lVar11 = *(long *)(unaff_x20 + 0x70);
  puVar36 = (ulong *)(lVar11 + 0x40);
  uVar31 = -1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
  uVar37 = 0xffffffffffffffff;
  if (-uVar31 < 0x40) {
    uVar37 = ~(-1L << (-uVar31 & 0x3f));
  }
  uVar37 = uVar37 & *puVar36;
  _swift_bridgeObjectRetain();
  lVar18 = 0;
  lVar3 = lVar18;
  puVar9 = PTR___swiftEmptyArrayStorage_100eae0d8;
  do {
    while( true ) {
      while (uVar37 == 0) {
        bVar5 = SCARRY8(lVar18,1);
        lVar18 = lVar18 + 1;
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar35 = (code *)SoftwareBreakpoint(1,0x100463244);
          (*pcVar35)();
        }
        if ((long)(0x3f - uVar31 >> 6) <= lVar18) {
          FUN_10000c650(lVar11,puVar36,~uVar31,lVar3,0);
          lVar11 = *(long *)(puVar9 + 0x10);
          if (lVar11 == 0) {
            _swift_release();
          }
          else {
            uVar37 = (ulong)*(byte *)(lVar24 + 0x50) + 0x20 &
                     ((ulong)*(byte *)(lVar24 + 0x50) ^ 0xffffffffffffffff);
            puVar7 = puVar9 + uVar37;
            lVar21 = *(long *)(lVar24 + 0x48);
            do {
              FUN_1000c495c(puVar7,lVar28,FUN_10045ba0c);
              FUN_1000523d8(lVar28,lVar27,FUN_10045ba0c);
              plVar1 = (long *)(lVar27 + *(int *)(lVar10 + 0x24));
              _swift_beginAccess(unaff_x20 + 0x78,&local_a8,0x21,0);
              lVar22 = *plVar1;
              uVar31 = plVar1[1];
              uVar32 = *(undefined8 *)(unaff_x20 + 0x78);
              _swift_bridgeObjectRetain(uVar32);
              FUN_100464848(lVar22,uVar31,FUN_1000715b8);
              _swift_bridgeObjectRelease(uVar32);
              if ((uVar31 & 1) == 0) {
                UVar15 = Foundation::UUID::typeMetadataAccessor();
                (**(code **)(*(long *)(UVar15.unknown + -8) + 0x38))(lVar20,1,1,UVar15.unknown);
              }
              else {
                iVar6 = (int)*(undefined8 *)(unaff_x20 + 0x78);
                _swift_isUniquelyReferenced_nonNull_native();
                lVar23 = *(long *)(unaff_x20 + 0x78);
                *(undefined8 *)(unaff_x20 + 0x78) = 0x8000000000000000;
                if (iVar6 == 0) {
                  FUN_1004663b4();
                }
                _swift_bridgeObjectRelease
                          (*(undefined8 *)(*(long *)(lVar23 + 0x30) + lVar22 * 0x10 + 8));
                lVar26 = *(long *)(lVar23 + 0x38);
                UVar15 = Foundation::UUID::typeMetadataAccessor();
                lVar25 = *(long *)(UVar15.unknown + -8);
                (**(code **)(lVar25 + 0x20))
                          (lVar20,lVar26 + *(long *)(lVar25 + 0x48) * lVar22,UVar15.unknown);
                FUN_10046926c(lVar22,lVar23);
                uVar32 = *(undefined8 *)(unaff_x20 + 0x78);
                *(long *)(unaff_x20 + 0x78) = lVar23;
                _swift_bridgeObjectRelease(uVar32);
                (**(code **)(lVar25 + 0x38))(lVar20,0,1,UVar15.unknown);
              }
              _swift_endAccess(&local_a8);
              FUN_100005808(lVar20,&DAT_100fc8170,&DAT_100c4cde8);
              ppuVar16 = &local_a8;
              _swift_beginAccess(unaff_x20 + 0x70,ppuVar16,0x21,0);
              uVar32 = *(undefined8 *)(unaff_x20 + 0x70);
              _swift_bridgeObjectRetain(uVar32);
              lVar22 = lVar27;
              FUN_1004647d0(lVar27);
              _swift_bridgeObjectRelease(uVar32);
              if (((ulong)ppuVar16 & 1) == 0) {
                uVar32 = 1;
              }
              else {
                iVar6 = (int)*(undefined8 *)(unaff_x20 + 0x70);
                _swift_isUniquelyReferenced_nonNull_native();
                lVar23 = *(long *)(unaff_x20 + 0x70);
                *(undefined8 *)(unaff_x20 + 0x70) = 0x8000000000000000;
                if (iVar6 == 0) {
                  FUN_1004665d4();
                }
                lVar25 = *(long *)(lVar23 + 0x30);
                UVar15 = Foundation::UUID::typeMetadataAccessor();
                (**(code **)(*(long *)(UVar15.unknown + -8) + 8))
                          (lVar25 + *(long *)(*(long *)(UVar15.unknown + -8) + 0x48) * lVar22,
                           UVar15.unknown);
                FUN_1000523d8(*(long *)(lVar23 + 0x38) + lVar22 * lVar21,lVar19,FUN_10045ba0c);
                FUN_10046943c(lVar22,lVar23);
                uVar32 = *(undefined8 *)(unaff_x20 + 0x70);
                *(long *)(unaff_x20 + 0x70) = lVar23;
                _swift_bridgeObjectRelease(uVar32);
                uVar32 = 0;
              }
              (**(code **)(lVar24 + 0x38))(lVar19,uVar32,1,lVar10);
              _swift_endAccess(&local_a8);
              FUN_100005808(lVar19,&DAT_100fc8178,&DAT_100c4cdf0);
              FUN_10046bfa8(lVar27);
              puVar7 = puVar7 + lVar21;
              lVar11 = lVar11 + -1;
            } while (lVar11 != 0);
            _swift_release(puVar9);
            FUN_100004640(unaff_x20 + 0x88,*(undefined8 *)(unaff_x20 + 0xa0));
            lVar10 = *(long *)(unaff_x20 + 0x70);
            ppuVar34 = *(undefined ***)(lVar10 + 0x10);
            ppuVar16 = (undefined **)PTR___swiftEmptyArrayStorage_100eae0d8;
            if (ppuVar34 != (undefined **)0x0) {
              _swift_bridgeObjectRetain(lVar10);
              ppuVar16 = ppuVar34;
              FUN_100464714(ppuVar34,0,&DAT_100fc8390,&DAT_100c4cf20,FUN_10045ba0c);
              ppuVar17 = &local_a8;
              FUN_10046b8ac(ppuVar17,(undefined *)((long)ppuVar16 + uVar37),ppuVar34,lVar10,
                            FUN_10045ba0c);
              FUN_10000c650(local_a8,uStack_a0,local_98,uStack_90,local_88);
              if (ppuVar17 != ppuVar34) {
                    /* WARNING: Does not return */
                pcVar35 = (code *)SoftwareBreakpoint(1,0x1004631d4);
                (*pcVar35)();
              }
            }
            FUN_10046fe64(ppuVar16);
            _swift_release(ppuVar16);
            if (unaff_x21 == 0) {
              FUN_100462054();
            }
          }
          return;
        }
        uVar37 = puVar36[lVar18];
      }
      uVar2 = (uVar37 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar37 & 0x5555555555555555) << 1;
      uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      uVar37 = uVar37 - 1 & uVar37;
      lVar30 = *(long *)(lVar24 + 0x48);
      FUN_1000c495c(*(long *)(lVar11 + 0x38) +
                    lVar30 * (LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) | lVar18 << 6),lVar29,
                    FUN_10045ba0c);
      FUN_1000523d8(lVar29,lVar25,FUN_10045ba0c);
      lVar3 = lVar18;
      if (*(char *)(lVar25 + *(int *)(lVar10 + 0x18)) == param_1) break;
LAB_100462b2c:
      FUN_10046bfa8(lVar25);
    }
    iVar6 = *(int *)(lVar10 + 0x20);
    (**(code **)(lVar21 + 0x38))(lVar23,1,1,DVar8.unknown);
    lVar33 = (long)*(int *)(puVar7 + 0x30);
    FUN_100011090(lVar25 + iVar6,lVar22,&DAT_100fc7df8,&DAT_100c4c890);
    FUN_100011090(lVar23,lVar22 + lVar33,&DAT_100fc7df8,&DAT_100c4c890);
    pcVar35 = *(code **)(lVar21 + 0x30);
    lVar12 = lVar22;
    (*pcVar35)(lVar22,1,DVar8.unknown);
    if ((int)lVar12 != 1) {
      FUN_100011090(lVar22,lVar26,&DAT_100fc7df8,&DAT_100c4c890);
      lVar12 = lVar22 + lVar33;
      (*pcVar35)(lVar12,1,DVar8.unknown);
      lVar4 = local_170;
      if ((int)lVar12 == 1) {
        FUN_100005808(lVar23,&DAT_100fc7df8,&DAT_100c4c890);
        (**(code **)(lVar21 + 8))(lVar26,DVar8.unknown);
        goto LAB_100462b10;
      }
      (**(code **)(lVar21 + 0x20))(local_170,lVar22 + lVar33,DVar8.unknown);
      puVar13 = &DAT_100fc8168;
      FUN_100003a00(&DAT_100fc8168,PTR_typeMetadataAccessor_100ea7480,
                    PTR_Foundation__Foundation__Date_>Swift__Equatable_100ea74a0);
      bVar5 = Swift::Equatable::___infix(lVar26,lVar4,DVar8.unknown,puVar13);
      pcVar35 = *(code **)(lVar21 + 8);
      (*pcVar35)(lVar4,DVar8.unknown);
      FUN_100005808(lVar23,&DAT_100fc7df8,&DAT_100c4c890);
      (*pcVar35)(lVar26,DVar8.unknown);
      FUN_100005808(lVar22,&DAT_100fc7df8,&DAT_100c4c890);
      if (bVar5) goto LAB_100462d98;
      goto LAB_100462b2c;
    }
    FUN_100005808(lVar23,&DAT_100fc7df8,&DAT_100c4c890);
    lVar33 = lVar22 + lVar33;
    (*pcVar35)(lVar33,1,DVar8.unknown);
    if ((int)lVar33 != 1) {
LAB_100462b10:
      FUN_100005808(lVar22,&DAT_100fc8160,&DAT_100c4cdc0);
      goto LAB_100462b2c;
    }
    FUN_100005808(lVar22,&DAT_100fc7df8,&DAT_100c4c890);
LAB_100462d98:
    puVar14 = puVar9;
    _swift_isUniquelyReferenced_nonNull_native();
    local_a8 = puVar9;
    if (((ulong)puVar14 & 1) == 0) {
      FUN_10046ad1c(0,*(long *)(puVar9 + 0x10) + 1,1);
    }
    uVar2 = *(ulong *)(local_a8 + 0x10);
    if (*(ulong *)(local_a8 + 0x18) >> 1 <= uVar2) {
      FUN_10046ad1c(1 < *(ulong *)(local_a8 + 0x18),uVar2 + 1,1);
    }
    puVar9 = local_a8;
    *(ulong *)(local_a8 + 0x10) = uVar2 + 1;
    FUN_1000523d8(lVar25,local_a8 +
                         uVar2 * lVar30 +
                         ((ulong)*(byte *)(lVar24 + 0x50) + 0x20 &
                         ((ulong)*(byte *)(lVar24 + 0x50) ^ 0xffffffffffffffff)),FUN_10045ba0c);
  } while( true );
}



/* Address: 0x100463244 | FUN_100463244 */

void FUN_100463244(void)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long unaff_x20;
  long unaff_x21;
  undefined8 *puVar8;
  long lVar9;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(unaff_x20 + 0x70,auStack_68,1,0);
  puVar1 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (*(long *)(*(long *)(unaff_x20 + 0x70) + 0x10) != 0) {
    *(undefined **)(unaff_x20 + 0x70) = PTR___swiftEmptyDictionarySingleton_100eae0e0;
    _swift_bridgeObjectRelease();
    _swift_beginAccess(unaff_x20 + 0x78,auStack_80,1,0);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x78);
    *(undefined **)(unaff_x20 + 0x78) = puVar1;
    _swift_bridgeObjectRelease(uVar3);
    FUN_100004640(unaff_x20 + 0x88,*(undefined8 *)(unaff_x20 + 0xa0));
    lVar9 = *(long *)(unaff_x20 + 0x70);
    puVar8 = *(undefined8 **)(lVar9 + 0x10);
    puVar4 = (undefined8 *)PTR___swiftEmptyArrayStorage_100eae0d8;
    if (puVar8 != (undefined8 *)0x0) {
      _swift_bridgeObjectRetain(lVar9);
      puVar4 = puVar8;
      FUN_100464714(puVar8,0,&DAT_100fc8390,&DAT_100c4cf20,FUN_10045ba0c);
      lVar5 = 0;
      FUN_10045ba0c();
      uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
      puVar6 = &local_a8;
      FUN_10046b8ac(puVar6,(undefined *)
                           ((long)puVar4 + (uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff))),puVar8,
                    lVar9,FUN_10045ba0c);
      FUN_10000c650(local_a8,uStack_a0,local_98,uStack_90,local_88);
      if (puVar6 != puVar8) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1004633b0);
        (*pcVar2)();
      }
    }
    FUN_10046fe64(puVar4);
    _swift_release(puVar4);
    if (unaff_x21 == 0) {
      FUN_100462054();
    }
  }
  return;
}



/* Address: 0x1004633b0 | FUN_1004633b0 */

/* WARNING: Removing unreachable block (ram,0x000100463ac4) */

bool FUN_1004633b0(long param_1)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  Date DVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  long extraout_x8;
  long lVar11;
  long extraout_x8_00;
  long lVar12;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar13;
  long lVar14;
  long lVar15;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long unaff_x20;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  code *pcVar19;
  undefined1 auStack_1b0 [8];
  code *local_1a8;
  long local_1a0;
  long local_198;
  code *local_190;
  undefined1 *local_188;
  long local_180;
  long local_178;
  long local_170;
  long local_168;
  long local_160;
  long local_158;
  undefined *local_150;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 auStack_80 [32];
  
  local_150 = (undefined *)Foundation::UUID::typeMetadataAccessor();
  local_158 = *(long *)(local_150 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_158 + 0x40));
  DVar4 = Foundation::Date::typeMetadataAccessor();
  lVar11 = *(long *)(DVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  lVar12 = (long)(auStack_1b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100fc8160;
  local_178 = lVar12;
  FUN_1000037f0(&DAT_100fc8160,&DAT_100c4cdc0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = lVar12 - extraout_x8_01;
  puVar6 = &DAT_100fc7df8;
  FUN_1000037f0(&DAT_100fc7df8,&DAT_100c4c890);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  lVar14 = lVar12 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_168 = lVar14;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar14 = lVar14 - extraout_x12;
  local_170 = lVar14;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar14 = lVar14 - extraout_x12_00;
  puVar6 = &DAT_100fc8178;
  FUN_1000037f0(&DAT_100fc8178,&DAT_100c4cdf0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  lVar15 = lVar14 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  local_160 = lVar15;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar15 = lVar15 - extraout_x12_01;
  lVar7 = 0;
  FUN_10045ba0c();
  lVar18 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar18 + 0x40));
  lVar13 = lVar15 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  puVar10 = auStack_80;
  _swift_beginAccess(unaff_x20 + 0x70,puVar10,0,0);
  lVar16 = *(long *)(unaff_x20 + 0x70);
  if (*(long *)(lVar16 + 0x10) == 0) {
    (**(code **)(lVar18 + 0x38))(lVar15,1,1,lVar7);
LAB_10046368c:
    FUN_100005808(lVar15,&DAT_100fc8178,&DAT_100c4cdf0);
    return false;
  }
  _swift_bridgeObjectRetain(lVar16);
  local_180 = param_1;
  FUN_1004647d0(param_1);
  bVar3 = ((ulong)puVar10 & 1) == 0;
  if (!bVar3) {
    FUN_1000c495c(*(long *)(lVar16 + 0x38) + *(long *)(lVar18 + 0x48) * param_1,lVar15,FUN_10045ba0c
                 );
  }
  pcVar19 = *(code **)(lVar18 + 0x38);
  (*pcVar19)(lVar15,bVar3,1,lVar7);
  _swift_bridgeObjectRelease(lVar16);
  lVar16 = lVar15;
  (**(code **)(lVar18 + 0x30))(lVar15,1,lVar7);
  if ((int)lVar16 == 1) goto LAB_10046368c;
  local_1a0 = lVar18;
  local_190 = pcVar19;
  local_188 = auStack_1b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_1000523d8(lVar15,lVar13,FUN_10045ba0c);
  iVar1 = *(int *)(lVar7 + 0x20);
  local_1a8 = *(code **)(lVar11 + 0x38);
  (*local_1a8)(lVar14,1,1,DVar4.unknown);
  lVar15 = (long)*(int *)(puVar5 + 0x30);
  local_198 = (long)iVar1;
  FUN_100011090(lVar13 + iVar1,lVar12,&DAT_100fc7df8,&DAT_100c4c890);
  FUN_100011090(lVar14,lVar12 + lVar15,&DAT_100fc7df8,&DAT_100c4c890);
  pcVar19 = *(code **)(lVar11 + 0x30);
  lVar18 = lVar12;
  (*pcVar19)(lVar12,1,DVar4.unknown);
  lVar16 = local_170;
  if ((int)lVar18 == 1) {
    FUN_100005808(lVar14,&DAT_100fc7df8,&DAT_100c4c890);
    lVar15 = lVar12 + lVar15;
    (*pcVar19)(lVar15,1,DVar4.unknown);
    lVar14 = local_180;
    puVar10 = local_188;
    lVar11 = local_1a0;
    if ((int)lVar15 == 1) {
      FUN_100005808(lVar12,&DAT_100fc7df8,&DAT_100c4c890);
      bVar3 = true;
      goto LAB_10046393c;
    }
  }
  else {
    FUN_100011090(lVar12,local_170,&DAT_100fc7df8,&DAT_100c4c890);
    lVar18 = lVar12 + lVar15;
    (*pcVar19)(lVar18,1,DVar4.unknown);
    lVar2 = local_178;
    puVar10 = local_188;
    if ((int)lVar18 != 1) {
      (**(code **)(lVar11 + 0x20))(local_178,lVar12 + lVar15,DVar4.unknown);
      puVar8 = &DAT_100fc8168;
      FUN_100003a00(&DAT_100fc8168,PTR_typeMetadataAccessor_100ea7480,
                    PTR_Foundation__Foundation__Date_>Swift__Equatable_100ea74a0);
      bVar3 = Swift::Equatable::___infix(lVar16,lVar2,DVar4.unknown,puVar8);
      pcVar19 = *(code **)(lVar11 + 8);
      (*pcVar19)(lVar2,DVar4.unknown);
      FUN_100005808(lVar14,&DAT_100fc7df8,&DAT_100c4c890);
      (*pcVar19)(local_170,DVar4.unknown);
      FUN_100005808(lVar12,&DAT_100fc7df8,&DAT_100c4c890);
      lVar14 = local_180;
      lVar11 = local_1a0;
      goto LAB_10046393c;
    }
    FUN_100005808(lVar14,&DAT_100fc7df8,&DAT_100c4c890);
    (**(code **)(lVar11 + 8))(lVar16,DVar4.unknown);
  }
  lVar14 = local_180;
  lVar11 = local_1a0;
  FUN_100005808(lVar12,&DAT_100fc8160,&DAT_100c4cdc0);
  bVar3 = false;
LAB_10046393c:
  lVar12 = local_168;
  Foundation::Date::init();
  (*local_1a8)(lVar12,0,1,DVar4.unknown);
  FUN_10046bf08(lVar12,lVar13 + local_198);
  (**(code **)(local_158 + 0x10))(puVar10,lVar14,local_150);
  lVar12 = local_160;
  FUN_1000c495c(lVar13,local_160,FUN_10045ba0c);
  (*local_190)(lVar12,0,1,lVar7);
  _swift_beginAccess(unaff_x20 + 0x70,&local_a8);
  FUN_100460244(lVar12,puVar10);
  _swift_endAccess(&local_a8);
  FUN_100004640(unaff_x20 + 0x88,*(undefined8 *)(unaff_x20 + 0xa0));
  lVar7 = *(long *)(unaff_x20 + 0x70);
  puVar17 = *(undefined8 **)(lVar7 + 0x10);
  puVar8 = (undefined8 *)PTR___swiftEmptyArrayStorage_100eae0d8;
  if (puVar17 != (undefined8 *)0x0) {
    _swift_bridgeObjectRetain(lVar7);
    puVar8 = puVar17;
    FUN_100464714(puVar17,0,&DAT_100fc8390,&DAT_100c4cf20,FUN_10045ba0c);
    puVar9 = &local_a8;
    FUN_10046b8ac(puVar9,(undefined *)
                         ((long)puVar8 +
                         ((ulong)*(byte *)(lVar11 + 0x50) + 0x20 &
                         ((ulong)*(byte *)(lVar11 + 0x50) ^ 0xffffffffffffffff))),puVar17,lVar7,
                  FUN_10045ba0c);
    FUN_10000c650(local_a8,uStack_a0,local_98,local_90,local_88);
    if (puVar9 != puVar17) {
                    /* WARNING: Does not return */
      pcVar19 = (code *)SoftwareBreakpoint(1,0x100463aa4);
      (*pcVar19)();
    }
  }
  FUN_10046fe64(puVar8);
  _swift_release(puVar8);
  FUN_100462054();
  FUN_10046bfa8(lVar13);
  return bVar3;
}



/* Address: 0x100463c78 | FUN_100463c78 */

void FUN_100463c78(void)

{
  BufferingPolicy BVar1;
  undefined *puVar2;
  long extraout_x8;
  long lVar3;
  
  puVar2 = &DAT_100fc81a8;
  FUN_1000037f0(&DAT_100fc81a8,&DAT_100c4ce10);
  lVar3 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  BVar1.value = -0x50;
  FUN_1000037f0(&DAT_100fc81b0,&DAT_100c4ce18);
  (**(code **)(lVar3 + 0x68))
            (&stack0xffffffffffffffc0 + -extraout_x8,
             *(undefined4 *)
              PTR___enum_case_for_Swift_AsyncStream_Continuation_BufferingPolicy_unbounded<A>_Swift_AsyncStream<A>_Continuation_BufferingPolicy_Type___>_Swift_AsyncStream<A>_Continuation_BufferingPolicy_100eaec78
             ,puVar2);
  Swift::AsyncStream::_init(BVar1);
  return;
}



/* Address: 0x100463d3c | FUN_100463d3c */

void FUN_100463d3c(Continuation *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  UUID UVar4;
  TaskPriority TVar5;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar6;
  long extraout_x12;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined *local_b0;
  long local_a8;
  ulong local_a0;
  long local_98;
  long local_90;
  long local_88;
  code *local_80;
  long local_78;
  Continuation *local_70;
  undefined8 local_68;
  
  puVar2 = &DAT_100fc7d90;
  local_70 = param_1;
  local_68 = param_2;
  FUN_1000037f0(&DAT_100fc7d90,&DAT_100c4c758);
  local_78 = *(long *)(puVar2 + -8);
  lVar16 = *(long *)(local_78 + 0x40);
  local_b0 = puVar2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(lVar16 + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)&local_b0 - extraout_x8;
  puVar3 = &DAT_100fc8378;
  FUN_1000037f0(&DAT_100fc8378,&DAT_100c4cee8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = lVar10 - extraout_x8_00;
  local_90 = lVar15;
  UVar4 = Foundation::UUID::typeMetadataAccessor();
  lVar7 = *(long *)(UVar4.unknown + -8);
  lVar13 = *(long *)(lVar7 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar12 = lVar15 - (lVar13 + 0xfU & 0xfffffffffffffff0);
  local_a8 = lVar12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_88 = lVar12 - extraout_x12;
  Foundation::UUID::init();
  TVar5 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar5.unknown + -8) + 0x38))(lVar15,1,1,TVar5.unknown);
  local_80 = *(code **)(lVar7 + 0x10);
  (*local_80)(lVar12,lVar12 - extraout_x12,UVar4.unknown);
  lVar15 = local_78;
  (**(code **)(local_78 + 0x10))(lVar10,param_1,puVar2);
  uVar14 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar8 = uVar14 + 0x28 & (uVar14 ^ 0xffffffffffffffff);
  local_a0 = uVar14 | 7;
  uVar6 = (ulong)*(byte *)(lVar15 + 0x50);
  uVar9 = lVar13 + uVar6 + uVar8 & (uVar6 ^ 0xffffffffffffffff);
  puVar2 = &DAT_100ed6cb0;
  local_98 = lVar7;
  _swift_allocObject(&DAT_100ed6cb0,uVar9 + lVar16,local_a0 | uVar6);
  uVar1 = local_68;
  lVar12 = local_a8;
  *(undefined8 *)(puVar2 + 0x10) = 0;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  *(undefined8 *)(puVar2 + 0x20) = local_68;
  pcVar11 = *(code **)(lVar7 + 0x20);
  (*pcVar11)(puVar2 + uVar8,local_a8,UVar4.unknown);
  (**(code **)(lVar15 + 0x20))(puVar2 + uVar9,lVar10,local_b0);
  _swift_retain(uVar1);
  FUN_100477f48(0,0,local_90,&DAT_100c4cef8,puVar2);
  _swift_release();
  lVar15 = local_88;
  (*local_80)(lVar12,local_88,UVar4.unknown);
  uVar6 = uVar14 + 0x18 & (uVar14 ^ 0xffffffffffffffff);
  puVar2 = &DAT_100ed6cd8;
  _swift_allocObject(&DAT_100ed6cd8,uVar6 + lVar13,local_a0);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  (*pcVar11)(puVar2 + uVar6,lVar12,UVar4.unknown);
  _swift_retain(uVar1);
  Swift::AsyncStream::Continuation::_set_onTermination(local_70);
  (**(code **)(local_98 + 8))(lVar15,UVar4.unknown);
  return;
}



/* Address: 0x100463ffc | FUN_100463ffc */

void FUN_100463ffc(void)

{
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = in_x4;
  *(undefined8 *)(unaff_x22 + 0x20) = in_x5;
  *(undefined8 *)(unaff_x22 + 0x10) = in_x3;
  _swift_task_switch(FUN_100464018,in_x3,0);
  return;
}



/* Address: 0x100464018 | FUN_100464018 */

void FUN_100464018(void)

{
  long unaff_x22;
  
  FUN_10046404c(*(undefined8 *)(unaff_x22 + 0x18),*(undefined8 *)(unaff_x22 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x000100464048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10046404c | FUN_10046404c */

/* WARNING: Removing unreachable block (ram,0x0001004642cc) */

void FUN_10046404c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  UUID UVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar7;
  long extraout_x12;
  long unaff_x20;
  long lVar8;
  undefined8 ****ppppuVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_b0 [16];
  undefined8 ***local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  
  puVar2 = &DAT_100fc8388;
  FUN_1000037f0(&DAT_100fc8388,&DAT_100c4cf18);
  lVar13 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = auStack_b0 + -extraout_x8;
  puVar3 = &DAT_100fc8380;
  FUN_1000037f0(&DAT_100fc8380,&DAT_100c4cf10);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = (long)puVar10 - extraout_x8_00;
  UVar4 = Foundation::UUID::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(UVar4.unknown + -8) + 0x40));
  lVar12 = lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(extraout_x12 + 0x10))(lVar12,param_1);
  puVar3 = &DAT_100fc7d90;
  FUN_1000037f0(&DAT_100fc7d90,&DAT_100c4c758);
  lVar8 = *(long *)(puVar3 + -8);
  (**(code **)(lVar8 + 0x10))(lVar11,param_2,puVar3);
  (**(code **)(lVar8 + 0x38))(lVar11,0,1,puVar3);
  _swift_beginAccess(unaff_x20 + 0x80,&local_a0,0x21,0);
  FUN_1004605c8(lVar11,lVar12);
  _swift_endAccess(&local_a0);
  _swift_beginAccess(unaff_x20 + 0x70,auStack_78,0,0);
  lVar8 = *(long *)(unaff_x20 + 0x70);
  ppppuVar9 = *(undefined8 *****)(lVar8 + 0x10);
  _swift_bridgeObjectRetain(lVar8);
  ppppuVar5 = (undefined8 ****)PTR___swiftEmptyArrayStorage_100eae0d8;
  if (ppppuVar9 != (undefined8 ****)0x0) {
    _swift_bridgeObjectRetain(lVar8);
    ppppuVar5 = ppppuVar9;
    FUN_100464714(ppppuVar9,0,&DAT_100fc8390,&DAT_100c4cf20,FUN_10045ba0c);
    lVar11 = 0;
    FUN_10045ba0c();
    uVar7 = (ulong)*(byte *)(*(long *)(lVar11 + -8) + 0x50);
    ppppuVar6 = &local_a0;
    FUN_10046b8ac(ppppuVar6,
                  (undefined *)((long)ppppuVar5 + (uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff))),
                  ppppuVar9,lVar8,FUN_10045ba0c);
    FUN_10000c650(local_a0,uStack_98,local_90,uStack_88,local_80);
    if (ppppuVar6 != ppppuVar9) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10046425c);
      (*pcVar1)();
    }
  }
  local_a0 = ppppuVar5;
  FUN_100469b18(&local_a0);
  _swift_bridgeObjectRelease(lVar8);
  Swift::AsyncStream::Continuation::_yield(puVar10,&local_a0,puVar3);
  (**(code **)(lVar13 + 8))(puVar10,puVar2);
  return;
}



/* Address: 0x1004642d8 | FUN_1004642d8 */

void FUN_1004642d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  UUID UVar1;
  undefined *puVar2;
  TaskPriority TVar3;
  long extraout_x8;
  ulong uVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  lVar7 = *(long *)(UVar1.unknown + -8);
  lVar6 = *(long *)(lVar7 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar5 = &stack0xffffffffffffffb0 + -(lVar6 + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100fc8378;
  FUN_1000037f0(&DAT_100fc8378,&DAT_100c4cee8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar3.unknown + -8) + 0x38))((long)puVar5 - extraout_x8,1,1,TVar3.unknown);
  (**(code **)(lVar7 + 0x10))(puVar5,param_3,UVar1.unknown);
  uVar4 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar8 = uVar4 + 0x28 & (uVar4 ^ 0xffffffffffffffff);
  puVar2 = &DAT_100ed6d00;
  _swift_allocObject(&DAT_100ed6d00,uVar8 + lVar6,uVar4 | 7);
  *(undefined8 *)(puVar2 + 0x10) = 0;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  (**(code **)(lVar7 + 0x20))(puVar2 + uVar8,puVar5,UVar1.unknown);
  _swift_retain(param_2);
  FUN_100477f48(0,0,(long)puVar5 - extraout_x8,&DAT_100c4cf08,puVar2);
  _swift_release();
  return;
}



/* Address: 0x100464428 | FUN_100464428 */

void FUN_100464428(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 in_x3;
  undefined8 in_x4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = in_x3;
  *(undefined8 *)(unaff_x22 + 0x30) = in_x4;
  puVar1 = &DAT_100fc8380;
  FUN_1000037f0(&DAT_100fc8380,&DAT_100c4cf10);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x38) = uVar2;
  _swift_task_switch(FUN_100464490,in_x3,0);
  return;
}



/* Address: 0x100464490 | FUN_100464490 */

void FUN_100464490(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x38);
  _swift_beginAccess(*(long *)(unaff_x22 + 0x28) + 0x80,unaff_x22 + 0x10,0x21,0);
  FUN_100465748(uVar2,uVar1,&DAT_100fc7d90,&DAT_100c4c758,&DAT_100fc7d88,&DAT_100c4c750);
  _swift_endAccess(unaff_x22 + 0x10);
  FUN_100005808(uVar2,&DAT_100fc8380,&DAT_100c4cf10);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100464530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100464534 | FUN_100464534 */

void FUN_100464534(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x70));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x78));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x80));
  FUN_100004594(unaff_x20 + 0x88);
  _swift_release(*(undefined8 *)(unaff_x20 + 0xb0));
  _swift_release(*(undefined8 *)(unaff_x20 + 0xb8));
  _swift_defaultActor_destroy();
  return;
}



/* Address: 0x100464580 | FUN_100464580 */

void FUN_100464580(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x70));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x78));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x80));
  FUN_100004594(unaff_x20 + 0x88);
  _swift_release(*(undefined8 *)(unaff_x20 + 0xb0));
  _swift_release(*(undefined8 *)(unaff_x20 + 0xb8));
  _swift_defaultActor_destroy();
  _swift_defaultActor_deallocate();
  return;
}



/* Address: 0x1004645cc | FUN_1004645cc */

void FUN_1004645cc(void)

{
  FUN_10046ae4c();
  return;
}



/* Address: 0x1004645d8 | FUN_1004645d8 */

void FUN_1004645d8(void)

{
  FUN_10046b540();
  return;
}



/* Address: 0x1004645e4 | FUN_1004645e4 */

undefined * FUN_1004645e4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1004646ec);
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
    puVar3 = &DAT_100fc83d8;
    FUN_1000037f0(&DAT_100fc83d8,&DAT_100c4cf58);
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
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,&DAT_100ec8508);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x20 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 * 0x20);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x1004646ec | FUN_1004646ec */

void FUN_1004646ec(void)

{
  FUN_10046b770();
  return;
}



/* Address: 0x1004646f8 | FUN_1004646f8 */

void FUN_1004646f8(undefined8 param_1,undefined8 param_2)

{
  FUN_100464714(param_1,param_2,&DAT_100fc8310,&DAT_100c4ce98,FUN_100484870);
  return;
}



/* Address: 0x100464714 | FUN_100464714 */

undefined *
FUN_100464714(long param_1,long param_2,undefined *param_3,undefined8 param_4,code *param_5)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 != 0) {
    FUN_1000037f0(param_3,param_4);
    lVar3 = 0;
    (*param_5)();
    lVar6 = *(long *)(*(long *)(lVar3 + -8) + 0x48);
    uVar5 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
    uVar7 = uVar5 + 0x20 & (uVar5 ^ 0xffffffffffffffff);
    _swift_allocObject(param_3,uVar7 + lVar6 * param_2,uVar5 | 7);
    puVar4 = param_3;
    _malloc_size();
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1004647cc);
      (*pcVar2)();
    }
    lVar3 = (long)puVar4 - uVar7;
    if (lVar3 == -0x8000000000000000 && lVar6 == -1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1004647d0);
      (*pcVar2)();
    }
    lVar1 = 0;
    if (lVar6 != 0) {
      lVar1 = lVar3 / lVar6;
    }
    *(long *)(param_3 + 0x10) = param_1;
    *(long *)(param_3 + 0x18) = lVar1 << 1;
    puVar4 = param_3;
  }
  return puVar4;
}



/* Address: 0x1004647d0 | FUN_1004647d0 */

void FUN_1004647d0(undefined8 param_1)

{
  long unaff_x20;
  __int64 _Var1;
  
  _Var1 = *(__int64 *)(unaff_x20 + 0x28);
  Foundation::UUID::typeMetadataAccessor();
  FUN_100003a00(&DAT_100fc7ed8,PTR_typeMetadataAccessor_100ea7500,
                PTR_Foundation__Foundation__UUID_>Swift__Hashable_100ea7518);
  _Var1 = Swift::Hashable::_rawHashValue(_Var1);
  FUN_100464be8(param_1,_Var1);
  return;
}



/* Address: 0x10046483c | FUN_10046483c */

void FUN_10046483c(undefined8 param_1,undefined8 param_2)

{
  FUN_100464848(param_1,param_2,FUN_1000715b8);
  return;
}



/* Address: 0x100464848 | FUN_100464848 */

void FUN_100464848(char *param_1,void *param_2,code *UNRECOVERED_JUMPTABLE)

{
  Hasher into;
  __int64 _Var1;
  long unaff_x20;
  String SVar2;
  undefined1 auStack_78 [72];
  
  Swift::Hasher::init(*(__int64 *)(unaff_x20 + 0x28));
  into.unknown = auStack_78;
  SVar2.bridgeObject = param_2;
  SVar2.str = param_1;
  Swift::String::hash(into,SVar2);
  _Var1 = Swift::Hasher::_finalize(into);
                    /* WARNING: Could not recover jumptable at 0x0001004648b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,_Var1);
  return;
}



/* Address: 0x1004648b4 | FUN_1004648b4 */

void FUN_1004648b4(undefined8 param_1)

{
  Hasher into;
  __int64 _Var1;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  Swift::Hasher::init(*(__int64 *)(unaff_x20 + 0x28));
  FUN_10045b454(0);
  FUN_100003a00(&DAT_100fc83e0,FUN_10045b454,&TargetProtocolConformanceDescriptor_100c4c7f8);
  into.unknown = auStack_78;
  (extension_CoreFoundation)::CoreFoundation::_CFObject::hash(into);
  _Var1 = Swift::Hasher::_finalize(into);
  FUN_100464d20(param_1,_Var1);
  return;
}



/* Address: 0x10046493c | FUN_10046493c */

void FUN_10046493c(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  UUID UVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = param_4 + (param_1 >> 6) * 8;
  *(ulong *)(lVar4 + 0x40) = *(ulong *)(lVar4 + 0x40) | 1L << (param_1 & 0x3f);
  lVar4 = *(long *)(param_4 + 0x30);
  UVar2 = Foundation::UUID::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar2.unknown + -8) + 0x20))
            (lVar4 + *(long *)(*(long *)(UVar2.unknown + -8) + 0x48) * param_1,param_2,UVar2.unknown
            );
  lVar3 = *(long *)(param_4 + 0x38);
  lVar4 = 0;
  FUN_10045ba0c();
  FUN_1000523d8(param_3,lVar3 + *(long *)(*(long *)(lVar4 + -8) + 0x48) * param_1,FUN_10045ba0c);
  if (!SCARRY8(*(long *)(param_4 + 0x10),1)) {
    *(long *)(param_4 + 0x10) = *(long *)(param_4 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1004649f4);
  (*pcVar1)();
}



/* Address: 0x1004649f4 | FUN_1004649f4 */

void FUN_1004649f4(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  code *pcVar2;
  UUID UVar3;
  long lVar4;
  
  lVar4 = param_5 + (param_1 >> 6) * 8;
  *(ulong *)(lVar4 + 0x40) = *(ulong *)(lVar4 + 0x40) | 1L << (param_1 & 0x3f);
  puVar1 = (undefined8 *)(*(long *)(param_5 + 0x30) + param_1 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  lVar4 = *(long *)(param_5 + 0x38);
  UVar3 = Foundation::UUID::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar3.unknown + -8) + 0x20))
            (lVar4 + *(long *)(*(long *)(UVar3.unknown + -8) + 0x48) * param_1,param_4,UVar3.unknown
            );
  if (!SCARRY8(*(long *)(param_5 + 0x10),1)) {
    *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100464a84);
  (*pcVar2)();
}



/* Address: 0x100464a84 | FUN_100464a84 */

void FUN_100464a84(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  code *pcVar1;
  UUID UVar2;
  long lVar3;
  
  lVar3 = param_4 + (param_1 >> 6) * 8;
  *(ulong *)(lVar3 + 0x40) = *(ulong *)(lVar3 + 0x40) | 1L << (param_1 & 0x3f);
  lVar3 = *(long *)(param_4 + 0x30);
  UVar2 = Foundation::UUID::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar2.unknown + -8) + 0x20))
            (lVar3 + *(long *)(*(long *)(UVar2.unknown + -8) + 0x48) * param_1,param_2,UVar2.unknown
            );
  lVar3 = *(long *)(param_4 + 0x38);
  FUN_1000037f0(param_5,param_6);
  (**(code **)(*(long *)(param_5 + -8) + 0x20))
            (lVar3 + *(long *)(*(long *)(param_5 + -8) + 0x48) * param_1,param_3,param_5);
  if (!SCARRY8(*(long *)(param_4 + 0x10),1)) {
    *(long *)(param_4 + 0x10) = *(long *)(param_4 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100464b50);
  (*pcVar1)();
}



/* Address: 0x100464b50 | FUN_100464b50 */

void FUN_100464b50(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,code *param_6)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = param_5 + (param_1 >> 6) * 8;
  *(ulong *)(lVar3 + 0x40) = *(ulong *)(lVar3 + 0x40) | 1L << (param_1 & 0x3f);
  puVar1 = (undefined8 *)(*(long *)(param_5 + 0x30) + param_1 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  lVar4 = *(long *)(param_5 + 0x38);
  lVar3 = 0;
  (*param_6)();
  FUN_1000523d8(param_4,lVar4 + *(long *)(*(long *)(lVar3 + -8) + 0x48) * param_1,param_6);
  if (!SCARRY8(*(long *)(param_5 + 0x10),1)) {
    *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100464be8);
  (*pcVar2)();
}



/* Address: 0x100464be8 | FUN_100464be8 */

undefined1  [16] FUN_100464be8(undefined8 param_1,ulong param_2)

{
  bool bVar1;
  UUID UVar2;
  undefined *puVar3;
  long extraout_x8;
  ulong uVar4;
  long unaff_x20;
  code *pcVar5;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_70 [8];
  undefined8 local_68;
  
  local_68 = param_1;
  UVar2 = Foundation::UUID::typeMetadataAccessor();
  lVar9 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  puVar6 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar4 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar4 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    uVar8 = 0;
  }
  else {
    lVar7 = *(long *)(lVar9 + 0x48);
    pcVar5 = *(code **)(lVar9 + 0x10);
    do {
      (*pcVar5)(puVar6,*(long *)(unaff_x20 + 0x30) + lVar7 * param_2,UVar2.unknown);
      puVar3 = &DAT_100fc8198;
      FUN_100003a00(&DAT_100fc8198,PTR_typeMetadataAccessor_100ea7500,
                    PTR_Foundation__Foundation__UUID_>Swift__Equatable_100ea7520);
      bVar1 = Swift::Equatable::___infix(puVar6,local_68,UVar2.unknown,puVar3);
      uVar8 = (ulong)bVar1;
      (**(code **)(lVar9 + 8))(puVar6,UVar2.unknown);
      if (bVar1) break;
      param_2 = param_2 + 1 & ~uVar4;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  }
  auVar10._8_8_ = uVar8;
  auVar10._0_8_ = param_2;
  return auVar10;
}



/* Address: 0x100464d20 | FUN_100464d20 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_100464d20(undefined8 param_1,ulong param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  long unaff_x20;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  uVar4 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar4 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    uVar5 = 0;
  }
  else {
    uVar2 = 0;
    FUN_10045b454(0);
    puVar3 = &DAT_100fc83e0;
    FUN_100003a00(&DAT_100fc83e0,FUN_10045b454,&TargetProtocolConformanceDescriptor_100c4c7f8);
    do {
      bVar1 = (extension_CoreFoundation)::CoreFoundation::_CFObject::___infix
                        (*(undefined8 *)(*(long *)(unaff_x20 + 0x30) + param_2 * 8),param_1,uVar2,
                         puVar3);
      uVar5 = (ulong)bVar1;
      if (bVar1) break;
      param_2 = param_2 + 1 & ~uVar4;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  }
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = param_2;
  return auVar6;
}



/* Address: 0x100464e0c | FUN_100464e0c */

void FUN_100464e0c(long *param_1,RangeReference *param_2,ulong param_3)

{
  __DataStorage *p_Var1;
  RangeReference *pRVar2;
  ulong uVar3;
  
  if (param_2 != (RangeReference *)0x0) {
    if (param_3 != 0) {
      if (param_3 < 0xf) {
        pRVar2 = param_2 + param_3;
        FUN_10017499c();
        uVar3 = (ulong)pRVar2 & 0xffffffffffffff;
      }
      else {
        p_Var1 = Foundation::__DataStorage::typeMetadataAccessor();
        _swift_allocObject(p_Var1,*(undefined4 *)(p_Var1 + 0x30),*(undefined2 *)(p_Var1 + 0x34));
        p_Var1 = Foundation::__DataStorage::_init(p_Var1,(__int64)param_2);
        if (param_3 < 0x7fffffff) {
          param_2 = (RangeReference *)(param_3 << 0x20);
          uVar3 = (ulong)p_Var1 | 0x4000000000000000;
        }
        else {
          param_2 = Foundation::Data::RangeReference::typeMetadataAccessor();
          _swift_allocObject(param_2,0x20,7);
          *(undefined8 *)(param_2 + 0x10) = 0;
          *(ulong *)(param_2 + 0x18) = param_3;
          uVar3 = (ulong)p_Var1 | 0x8000000000000000;
        }
      }
      goto LAB_100464e54;
    }
    param_2 = (RangeReference *)0x0;
  }
  uVar3 = 0xc000000000000000;
LAB_100464e54:
  *param_1 = (long)param_2;
  param_1[1] = uVar3;
  return;
}



/* Address: 0x100464ed8 | FUN_100464ed8 */

void FUN_100464ed8(code *param_1,undefined8 param_2)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  code *pcVar4;
  LargeSlice LVar5;
  __int64 _Var6;
  __DataStorage *p_Var7;
  uint uVar8;
  ulong uVar9;
  long *unaff_x20;
  __DataStorage *p_Var10;
  long unaff_x21;
  __DataStorage *this;
  long lVar11;
  long lVar12;
  long local_98;
  ulong uStack_90;
  char local_78 [16];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar1 = *unaff_x20;
  uVar9 = unaff_x20[1];
  uVar3 = (uint)(uVar9 >> 0x20);
  uVar8 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    cVar2 = (char)((ulong)lVar1 >> 0x20);
    if (uVar8 == 0) {
      FUN_10003bf2c(lVar1,uVar9);
      local_78[1] = (char)((ulong)lVar1 >> 8);
      local_78[2] = (char)((ulong)lVar1 >> 0x10);
      local_78[3] = (char)((ulong)lVar1 >> 0x18);
      local_78[5] = (char)((ulong)lVar1 >> 0x28);
      local_78[6] = (char)((ulong)lVar1 >> 0x30);
      local_78[7] = (char)((ulong)lVar1 >> 0x38);
      local_78[8] = (char)uVar9;
      local_78[9] = (char)(uVar9 >> 8);
      local_78[10] = (char)(uVar9 >> 0x10);
      local_78[0xb] = (char)(uVar9 >> 0x18);
      local_78[0xc] = (char)(uVar9 >> 0x20);
      local_78[0xd] = (char)(uVar9 >> 0x28);
      local_78[0xe] = (char)(uVar9 >> 0x30);
      local_78[0] = (char)lVar1;
      local_78[4] = cVar2;
      (*param_1)(&local_98,local_78,local_78 + (byte)local_78[0xe]);
      if (unaff_x21 == 0) {
        *unaff_x20 = CONCAT17(local_78[7],
                              CONCAT16(local_78[6],
                                       CONCAT15(local_78[5],
                                                CONCAT14(local_78[4],
                                                         CONCAT13(local_78[3],
                                                                  CONCAT12(local_78[2],
                                                                           CONCAT11(local_78[1],
                                                                                    local_78[0])))))
                                      ));
        unaff_x20[1] = (ulong)CONCAT16(local_78[0xe],
                                       CONCAT15(local_78[0xd],
                                                CONCAT14(local_78[0xc],
                                                         CONCAT13(local_78[0xb],
                                                                  CONCAT12(local_78[10],
                                                                           CONCAT11(local_78[9],
                                                                                    local_78[8])))))
                                      );
      }
      else {
        *unaff_x20 = CONCAT17(local_78[7],
                              CONCAT16(local_78[6],
                                       CONCAT15(local_78[5],
                                                CONCAT14(local_78[4],
                                                         CONCAT13(local_78[3],
                                                                  CONCAT12(local_78[2],
                                                                           CONCAT11(local_78[1],
                                                                                    local_78[0])))))
                                      ));
        unaff_x20[1] = (ulong)CONCAT16(local_78[0xe],
                                       CONCAT15(local_78[0xd],
                                                CONCAT14(local_78[0xc],
                                                         CONCAT13(local_78[0xb],
                                                                  CONCAT12(local_78[10],
                                                                           CONCAT11(local_78[9],
                                                                                    local_78[8])))))
                                      );
      }
      goto LAB_100465210;
    }
    this = (__DataStorage *)(uVar9 & 0x3fffffffffffffff);
    _swift_retain(this);
    FUN_10003bf2c(lVar1,uVar9);
    unaff_x20[1] = -0x4000000000000000;
    *unaff_x20 = 0;
    FUN_10003bf2c(0,0xc000000000000000);
    p_Var10 = this;
    _swift_isUniquelyReferenced_nonNull_native();
    lVar11 = (long)(int)lVar1;
    lVar12 = lVar1 >> 0x20;
    p_Var7 = this;
    if (((ulong)p_Var10 & 1) == 0) {
      if (lVar12 < lVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100465268);
        (*pcVar4)();
      }
      p_Var10 = this;
      _swift_retain();
      Foundation::__DataStorage::_get__bytes(this,p_Var10);
      if (p_Var10 == (__DataStorage *)0x0) {
        p_Var10 = (__DataStorage *)0x0;
      }
      else {
        _Var6 = Foundation::__DataStorage::get__offset(this,p_Var10);
        if (SBORROW8(lVar11,_Var6)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10046526c);
          (*pcVar4)();
        }
        p_Var10 = p_Var10 + (lVar11 - _Var6);
      }
      p_Var7 = Foundation::__DataStorage::typeMetadataAccessor();
      _swift_allocObject(p_Var7,*(undefined4 *)(p_Var7 + 0x30),*(undefined2 *)(p_Var7 + 0x34));
      p_Var7 = Foundation::__DataStorage::_init
                         (p_Var7,(__int64)p_Var10,(bool)(cVar2 - (char)lVar1),1);
      _swift_release_n(this,2);
    }
    if (lVar12 < lVar11) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100465264);
      (*pcVar4)();
    }
    _swift_retain(p_Var7);
    FUN_100465270(lVar11,lVar12,param_1,param_2);
    _swift_release(p_Var7);
    uVar9 = (ulong)p_Var7 | 0x4000000000000000;
    if (unaff_x21 == 0) {
      *unaff_x20 = lVar1;
      unaff_x20[1] = uVar9;
      goto LAB_100465210;
    }
    *unaff_x20 = lVar1;
  }
  else {
    if (uVar8 != 2) {
      local_78[8] = 0;
      local_78[9] = 0;
      local_78[10] = 0;
      local_78[0xb] = 0;
      local_78[0xc] = 0;
      local_78[0xd] = 0;
      local_78[0] = '\0';
      local_78[1] = 0;
      local_78[2] = 0;
      local_78[3] = 0;
      local_78[4] = '\0';
      local_78[5] = 0;
      local_78[6] = 0;
      local_78[7] = 0;
      (*param_1)(&local_98,local_78,local_78);
      goto LAB_100465210;
    }
    _swift_retain(lVar1);
    _swift_retain(uVar9 & 0x3fffffffffffffff);
    FUN_10003bf2c(lVar1,uVar9);
    unaff_x20[1] = -0x4000000000000000;
    *unaff_x20 = 0;
    LVar5.unknown = (undefined *)0x0;
    local_98 = lVar1;
    uStack_90 = uVar9 & 0x3fffffffffffffff;
    FUN_10003bf2c(0,0xc000000000000000);
    Foundation::Data::LargeSlice::ensureUniqueReference(LVar5);
    uVar9 = uStack_90;
    lVar1 = local_98;
    FUN_100465270(*(undefined8 *)(local_98 + 0x10),*(undefined8 *)(local_98 + 0x18),param_1,param_2)
    ;
    uVar9 = uVar9 | 0x8000000000000000;
    if (unaff_x21 == 0) {
      *unaff_x20 = lVar1;
      unaff_x20[1] = uVar9;
      goto LAB_100465210;
    }
    *unaff_x20 = lVar1;
  }
  unaff_x20[1] = uVar9;
LAB_100465210:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x100465270 | FUN_100465270 */

void FUN_100465270(__DataStorage *param_1,long param_2,code *param_3)

{
  code *pcVar1;
  __DataStorage *p_Var2;
  __DataStorage *p_Var3;
  long lVar4;
  __DataStorage *unaff_x20;
  undefined1 local_70 [32];
  
  p_Var2 = param_1;
  Foundation::__DataStorage::_get__bytes(unaff_x20,param_1);
  if (p_Var2 == (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10046531c);
    (*pcVar1)();
  }
  p_Var3 = (__DataStorage *)Foundation::__DataStorage::get__offset(unaff_x20,p_Var2);
  if (!SBORROW8((long)param_1,(long)p_Var3)) {
    if (!SBORROW8(param_2,(long)param_1)) {
      lVar4 = Foundation::__DataStorage::get__length(unaff_x20,p_Var3);
      if (param_2 - (long)param_1 <= lVar4) {
        lVar4 = param_2 - (long)param_1;
      }
      (*param_3)(local_70,p_Var2 + ((long)param_1 - (long)p_Var3),
                 p_Var2 + ((long)param_1 - (long)p_Var3) + lVar4);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100465318);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100465314);
  (*pcVar1)();
}



/* Address: 0x10046531c | FUN_10046531c */

void FUN_10046531c(undefined8 param_1,long param_2,ulong param_3)

{
  int iVar1;
  UUID UVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *unaff_x20;
  _swift_bridgeObjectRetain(lVar4);
  FUN_100464848(param_2,param_3,FUN_1000715b8);
  _swift_bridgeObjectRelease(lVar4);
  if ((param_3 & 1) == 0) {
    UVar2 = Foundation::UUID::typeMetadataAccessor();
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(UVar2.unknown + -8) + 0x38);
    uVar3 = 1;
  }
  else {
    iVar1 = (int)*unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    lVar4 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_1004663b4();
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(*(long *)(lVar4 + 0x30) + param_2 * 0x10 + 8));
    lVar5 = *(long *)(lVar4 + 0x38);
    UVar2 = Foundation::UUID::typeMetadataAccessor();
    lVar6 = *(long *)(UVar2.unknown + -8);
    (**(code **)(lVar6 + 0x20))(param_1,lVar5 + *(long *)(lVar6 + 0x48) * param_2,UVar2.unknown);
    FUN_10046926c(param_2,lVar4);
    *unaff_x20 = lVar4;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar6 + 0x38);
    uVar3 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000100465430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar3,1,UVar2.unknown);
  return;
}



/* Address: 0x100465444 | FUN_100465444 */

void FUN_100465444(undefined8 param_1,long param_2,ulong param_3)

{
  int iVar1;
  UUID UVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = *unaff_x20;
  _swift_bridgeObjectRetain(lVar5);
  FUN_1004647d0(param_2);
  _swift_bridgeObjectRelease(lVar5);
  if ((param_3 & 1) == 0) {
    lVar5 = 0;
    FUN_10045ba0c();
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar5 + -8) + 0x38);
    uVar3 = 1;
  }
  else {
    iVar1 = (int)*unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    lVar4 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_1004665d4();
    }
    lVar5 = *(long *)(lVar4 + 0x30);
    UVar2 = Foundation::UUID::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar2.unknown + -8) + 8))
              (lVar5 + *(long *)(*(long *)(UVar2.unknown + -8) + 0x48) * param_2,UVar2.unknown);
    lVar6 = *(long *)(lVar4 + 0x38);
    lVar5 = 0;
    FUN_10045ba0c();
    lVar7 = *(long *)(lVar5 + -8);
    FUN_1000523d8(lVar6 + *(long *)(lVar7 + 0x48) * param_2,param_1,FUN_10045ba0c);
    FUN_10046943c(param_2,lVar4);
    *unaff_x20 = lVar4;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar7 + 0x38);
    uVar3 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010046555c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar3,1,lVar5);
  return;
}



/* Address: 0x100465570 | FUN_100465570 */

undefined1  [16] FUN_100465570(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long *unaff_x20;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  lVar3 = *unaff_x20;
  _swift_bridgeObjectRetain(lVar3);
  FUN_100464848(param_1,param_2,FUN_1000715b8);
  _swift_bridgeObjectRelease(lVar3);
  if ((param_2 & 1) == 0) {
    uVar4 = 0;
    uVar5 = 0;
  }
  else {
    iVar2 = (int)*unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    lVar3 = *unaff_x20;
    if (iVar2 == 0) {
      FUN_100466c90();
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(*(long *)(lVar3 + 0x30) + param_1 * 0x10 + 8));
    puVar1 = (undefined8 *)(*(long *)(lVar3 + 0x38) + param_1 * 0x10);
    uVar4 = *puVar1;
    uVar5 = puVar1[1];
    FUN_10031e9f4(param_1,lVar3);
    *unaff_x20 = lVar3;
  }
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = uVar4;
  return auVar6;
}



/* Address: 0x10046564c | FUN_10046564c */

void FUN_10046564c(undefined8 *param_1,long param_2,ulong param_3)

{
  int iVar1;
  long *unaff_x20;
  long lVar2;
  
  lVar2 = *unaff_x20;
  _swift_bridgeObjectRetain(lVar2);
  FUN_100464848(param_2,param_3,FUN_1000715b8);
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
      FUN_100466e08();
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(*(long *)(lVar2 + 0x30) + param_2 * 0x10 + 8));
    FUN_100011080(*(long *)(lVar2 + 0x38) + param_2 * 0x20,param_1);
    FUN_1000d9d9c(param_2,lVar2);
    *unaff_x20 = lVar2;
  }
  return;
}



/* Address: 0x100465724 | FUN_100465724 */

void FUN_100465724(undefined8 param_1)

{
  FUN_100465748(param_1,&DAT_100fc7d28,&DAT_100c4c6f0,&DAT_100fc7d20,&DAT_100c4c6e8);
  return;
}



/* Address: 0x100465748 | FUN_100465748 */

void FUN_100465748(undefined8 param_1,long param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  UUID UVar2;
  ulong uVar3;
  undefined8 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  long *unaff_x20;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *unaff_x20;
  uVar3 = param_3;
  _swift_bridgeObjectRetain(lVar6);
  FUN_1004647d0(param_2);
  _swift_bridgeObjectRelease(lVar6);
  if ((uVar3 & 1) == 0) {
    FUN_1000037f0(param_3,param_4);
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_3 - 8) + 0x38);
    uVar4 = 1;
  }
  else {
    iVar1 = (int)*unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_100466fac(param_3,param_4,param_5,param_6);
    }
    lVar5 = *(long *)(lVar6 + 0x30);
    UVar2 = Foundation::UUID::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar2.unknown + -8) + 8))
              (lVar5 + *(long *)(*(long *)(UVar2.unknown + -8) + 0x48) * param_2,UVar2.unknown);
    lVar5 = *(long *)(lVar6 + 0x38);
    uVar3 = param_3;
    FUN_1000037f0(param_3,param_4);
    lVar7 = *(long *)(uVar3 - 8);
    (**(code **)(lVar7 + 0x20))(param_1,lVar5 + *(long *)(lVar7 + 0x48) * param_2,uVar3);
    FUN_1004696c4(param_2,lVar6,param_3,param_4);
    *unaff_x20 = lVar6;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar7 + 0x38);
    uVar4 = 0;
    param_3 = uVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x000100465888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar4,1,param_3);
  return;
}



/* Address: 0x1004658ac | FUN_1004658ac */

void FUN_1004658ac(undefined8 param_1,undefined8 param_2)

{
  FUN_1004658e4(param_1,param_2,FUN_100481150,&DAT_100fc7d48,&DAT_100c4c710);
  return;
}



/* Address: 0x1004658c8 | FUN_1004658c8 */

void FUN_1004658c8(undefined8 param_1,undefined8 param_2)

{
  FUN_1004658e4(param_1,param_2,FUN_10048113c,&DAT_100fc7d38,&DAT_100c4c700);
  return;
}



/* Address: 0x1004658e4 | FUN_1004658e4 */

void FUN_1004658e4(undefined8 param_1,long param_2,ulong param_3,code *param_4,undefined8 param_5,
                  undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *unaff_x20;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *unaff_x20;
  _swift_bridgeObjectRetain(lVar5);
  FUN_100464848(param_2,param_3,FUN_1000715b8);
  _swift_bridgeObjectRelease(lVar5);
  if ((param_3 & 1) == 0) {
    lVar5 = 0;
    (*param_4)();
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar5 + -8) + 0x38);
    uVar2 = 1;
  }
  else {
    iVar1 = (int)*unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    lVar3 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_100467228(param_4,param_5,param_6);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(*(long *)(lVar3 + 0x30) + param_2 * 0x10 + 8));
    lVar4 = *(long *)(lVar3 + 0x38);
    lVar5 = 0;
    (*param_4)();
    lVar6 = *(long *)(lVar5 + -8);
    FUN_1000523d8(lVar4 + *(long *)(lVar6 + 0x48) * param_2,param_1,param_4);
    FUN_100469944(param_2,lVar3,param_4);
    *unaff_x20 = lVar3;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar6 + 0x38);
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000100465a04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar2,1,lVar5);
  return;
}



/* Address: 0x100465a24 | FUN_100465a24 */

void FUN_100465a24(undefined8 param_1,long param_2,ulong param_3,uint param_4)

{
  code *pcVar1;
  long lVar2;
  UUID UVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  lVar2 = param_2;
  uVar4 = param_3;
  FUN_100464848(param_2,param_3,FUN_1000715b8);
  lVar6 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar4 & 1;
  lVar5 = lVar6 + uVar7;
  if (SCARRY8(lVar6,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100465b24);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar5) {
    FUN_1004675c4(lVar5,param_4 & 1);
    uVar7 = param_3;
    FUN_100464848(param_2,param_3,FUN_1000715b8);
    lVar2 = param_2;
    if (((uint)uVar4 & 1) != ((uint)uVar7 & 1)) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100465ad4);
      (*pcVar1)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_1004663b4();
    lVar5 = *unaff_x20;
    goto joined_r0x000100465b38;
  }
  lVar5 = *unaff_x20;
joined_r0x000100465b38:
  if ((uVar4 & 1) != 0) {
    lVar5 = *(long *)(lVar5 + 0x38);
    UVar3 = Foundation::UUID::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x000100465b1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(UVar3.unknown + -8) + 0x28))
              (lVar5 + *(long *)(*(long *)(UVar3.unknown + -8) + 0x48) * lVar2,param_1,UVar3.unknown
              );
    return;
  }
  FUN_1004649f4();
  _swift_bridgeObjectRetain(param_3);
  return;
}



/* Address: 0x100465b68 | FUN_100465b68 */

void FUN_100465b68(undefined8 param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  UUID UVar2;
  ulong uVar3;
  ulong uVar4;
  long extraout_x8;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  long lVar8;
  
  uVar4 = param_2;
  UVar2 = Foundation::UUID::typeMetadataAccessor();
  lVar8 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = *unaff_x20;
  uVar3 = param_2;
  FUN_1004647d0(param_2);
  lVar5 = *(long *)(lVar7 + 0x10);
  uVar6 = (ulong)~(uint)uVar4 & 1;
  if (SCARRY8(lVar5,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100465c74);
    (*pcVar1)();
  }
  if (*(long *)(lVar7 + 0x18) < (long)(lVar5 + uVar6)) {
    param_3 = param_3 & 1;
    FUN_1004678e4();
    uVar3 = param_2;
    FUN_1004647d0(param_2);
    if (((uint)uVar4 & 1) != (param_3 & 1)) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100465cd8);
      (*pcVar1)();
    }
    lVar5 = *unaff_x20;
  }
  else if ((param_3 & 1) == 0) {
    FUN_1004665d4();
    lVar5 = *unaff_x20;
  }
  else {
    lVar5 = *unaff_x20;
  }
  if ((uVar4 & 1) == 0) {
    (**(code **)(lVar8 + 0x10))
              (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_2,
               UVar2.unknown);
    FUN_10046493c(uVar3,&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                  param_1,lVar5);
  }
  else {
    lVar7 = *(long *)(lVar5 + 0x38);
    lVar5 = 0;
    FUN_10045ba0c();
    FUN_10046c00c(param_1,lVar7 + *(long *)(*(long *)(lVar5 + -8) + 0x48) * uVar3,FUN_10045ba0c);
  }
  return;
}



/* Address: 0x100465cd8 | FUN_100465cd8 */

void FUN_100465cd8(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,uint param_5)

{
  undefined8 *puVar1;
  ulong *puVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *unaff_x20;
  long lVar10;
  
  lVar10 = *unaff_x20;
  uVar4 = param_3;
  uVar6 = param_4;
  FUN_100464848(param_3,param_4,FUN_1000715b8);
  lVar7 = *(long *)(lVar10 + 0x10);
  uVar9 = (ulong)~(uint)uVar6 & 1;
  lVar8 = lVar7 + uVar9;
  if (SCARRY8(lVar7,uVar9)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100465dc4);
    (*pcVar3)();
  }
  if (*(long *)(lVar10 + 0x18) < lVar8) {
    FUN_10046836c(lVar8,param_5 & 1);
    uVar4 = param_3;
    uVar9 = param_4;
    FUN_100464848(param_3,param_4,FUN_1000715b8);
    if (((uint)uVar6 & 1) != ((uint)uVar9 & 1)) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100465d8c);
      (*pcVar3)();
    }
  }
  else if ((param_5 & 1) == 0) {
    FUN_100466c90();
    lVar8 = *unaff_x20;
    goto joined_r0x000100465dd8;
  }
  lVar8 = *unaff_x20;
joined_r0x000100465dd8:
  if ((uVar6 & 1) != 0) {
    puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x38) + uVar4 * 0x10);
    uVar5 = puVar1[1];
    *puVar1 = param_1;
    puVar1[1] = param_2;
    _swift_bridgeObjectRelease(uVar5);
    return;
  }
  lVar7 = lVar8 + (uVar4 >> 6) * 8;
  *(ulong *)(lVar7 + 0x40) = *(ulong *)(lVar7 + 0x40) | 1L << (uVar4 & 0x3f);
  puVar2 = (ulong *)(*(long *)(lVar8 + 0x30) + uVar4 * 0x10);
  *puVar2 = param_3;
  puVar2[1] = param_4;
  puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x38) + uVar4 * 0x10);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (SCARRY8(*(long *)(lVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100465e44);
    (*pcVar3)();
  }
  *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + 1;
  _swift_bridgeObjectRetain(param_4);
  return;
}



/* Address: 0x100465e44 | FUN_100465e44 */

void FUN_100465e44(undefined8 param_1,long param_2,ulong param_3,uint param_4)

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
  FUN_100464848(param_2,param_3,FUN_1000715b8);
  lVar5 = *(long *)(lVar7 + 0x10);
  uVar6 = (ulong)~(uint)uVar3 & 1;
  lVar4 = lVar5 + uVar6;
  if (SCARRY8(lVar5,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100465f34);
    (*pcVar1)();
  }
  if (*(long *)(lVar7 + 0x18) < lVar4) {
    FUN_100468620(lVar4,param_4 & 1);
    uVar6 = param_3;
    FUN_100464848(param_2,param_3,FUN_1000715b8);
    lVar2 = param_2;
    if (((uint)uVar3 & 1) != ((uint)uVar6 & 1)) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100465ef4);
      (*pcVar1)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_100466e08();
    lVar4 = *unaff_x20;
    goto joined_r0x000100465f48;
  }
  lVar4 = *unaff_x20;
joined_r0x000100465f48:
  if ((uVar3 & 1) != 0) {
    lVar4 = *(long *)(lVar4 + 0x38) + lVar2 * 0x20;
    FUN_100004594(lVar4);
    FUN_100011080(param_1,lVar4);
    return;
  }
  FUN_1000d93f0();
  _swift_bridgeObjectRetain(param_3);
  return;
}



/* Address: 0x100465f78 | FUN_100465f78 */

void FUN_100465f78(undefined8 param_1,ulong param_2,uint param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long extraout_x8;
  long lVar4;
  ulong uVar5;
  long *unaff_x20;
  long lVar6;
  long lVar7;
  long lVar8;
  long local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar3 = param_2;
  local_70 = param_6;
  uStack_68 = param_7;
  local_78 = (undefined *)Foundation::UUID::typeMetadataAccessor();
  local_80 = *(long *)(local_78 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_80 + 0x40));
  lVar8 = (long)&local_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar6 = *unaff_x20;
  uVar2 = param_2;
  FUN_1004647d0(param_2);
  lVar4 = *(long *)(lVar6 + 0x10);
  uVar5 = (ulong)~(uint)uVar3 & 1;
  lVar7 = lVar4 + uVar5;
  if (SCARRY8(lVar4,uVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1004660bc);
    (*pcVar1)();
  }
  if (*(long *)(lVar6 + 0x18) < lVar7) {
    param_3 = param_3 & 1;
    FUN_1004688dc(lVar7,param_3,param_4,param_5,local_70,uStack_68);
    uVar2 = param_2;
    FUN_1004647d0(param_2);
    if (((uint)uVar3 & 1) != (param_3 & 1)) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100466134);
      (*pcVar1)();
    }
    lVar7 = *unaff_x20;
  }
  else if ((param_3 & 1) == 0) {
    FUN_100466fac(param_4,param_5,local_70,uStack_68);
    lVar7 = *unaff_x20;
  }
  else {
    lVar7 = *unaff_x20;
  }
  if ((uVar3 & 1) != 0) {
    lVar7 = *(long *)(lVar7 + 0x38);
    FUN_1000037f0(param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x0001004660b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_4 + -8) + 0x28))
              (lVar7 + *(long *)(*(long *)(param_4 + -8) + 0x48) * uVar2,param_1,param_4);
    return;
  }
  (**(code **)(local_80 + 0x10))(lVar8,param_2,local_78);
  FUN_100464a84(uVar2,lVar8,param_1,lVar7,param_4,param_5);
  return;
}



/* Address: 0x100466134 | FUN_100466134 */

void FUN_100466134(undefined8 param_1,long param_2,ulong param_3,uint param_4,code *param_5,
                  undefined8 param_6,undefined8 param_7)

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
  FUN_100464848(param_2,param_3,FUN_1000715b8);
  lVar5 = *(long *)(lVar7 + 0x10);
  uVar6 = (ulong)~(uint)uVar3 & 1;
  lVar4 = lVar5 + uVar6;
  if (SCARRY8(lVar5,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100466254);
    (*pcVar1)();
  }
  if (*(long *)(lVar7 + 0x18) < lVar4) {
    FUN_100468c94(lVar4,param_4 & 1,param_5,param_6,param_7);
    uVar6 = param_3;
    FUN_100464848(param_2,param_3,FUN_1000715b8);
    lVar2 = param_2;
    if (((uint)uVar3 & 1) != ((uint)uVar6 & 1)) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100466200);
      (*pcVar1)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_100467228(param_5,param_6,param_7);
    lVar4 = *unaff_x20;
    goto joined_r0x000100466274;
  }
  lVar4 = *unaff_x20;
joined_r0x000100466274:
  if ((uVar3 & 1) != 0) {
    lVar5 = *(long *)(lVar4 + 0x38);
    lVar4 = 0;
    (*param_5)();
    FUN_10046c00c(param_1,lVar5 + *(long *)(*(long *)(lVar4 + -8) + 0x48) * lVar2,param_5);
    return;
  }
  FUN_100464b50();
  _swift_bridgeObjectRetain(param_3);
  return;
}



/* Address: 0x1004662ac | FUN_1004662ac */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ulong FUN_1004662ac(ulong param_1,ulong param_2,uint param_3)

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
  FUN_1004648b4(param_2);
  lVar5 = *(long *)(lVar7 + 0x10);
  uVar6 = (ulong)~(uint)uVar3 & 1;
  lVar4 = lVar5 + uVar6;
  if (SCARRY8(lVar5,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100466378);
    (*pcVar1)();
  }
  if (*(long *)(lVar7 + 0x18) < lVar4) {
    param_3 = param_3 & 1;
    FUN_100468f9c(lVar4);
    uVar2 = param_2;
    FUN_1004648b4(param_2);
    if (((uint)uVar3 & 1) != (param_3 & 1)) {
      FUN_10045b454(0);
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10046633c);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    FUN_100467440();
    lVar4 = *unaff_x20;
    goto joined_r0x00010046638c;
  }
  lVar4 = *unaff_x20;
joined_r0x00010046638c:
  if ((uVar3 & 1) != 0) {
    lVar4 = *(long *)(lVar4 + 0x38) + uVar2 * 0x20;
    FUN_100004594(lVar4);
    FUN_100011080(param_1,lVar4);
    return param_1;
  }
  FUN_100202d34();
  return param_2;
}



/* Address: 0x1004663b4 | FUN_1004663b4 */

void FUN_1004663b4(void)

{
  __RawDictionaryStorage *p_Var1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  UUID UVar6;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var7;
  long lVar8;
  long extraout_x8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  __RawDictionaryStorage *original;
  long lVar12;
  long lVar13;
  undefined1 auStack_a0 [8];
  ulong local_68;
  
  UVar6 = Foundation::UUID::typeMetadataAccessor();
  lVar8 = *(long *)(UVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar8 + 0x40));
  this = (_DictionaryStorage *)&DAT_100fc7da0;
  FUN_1000037f0(&DAT_100fc7da0,&DAT_100c4c768);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var7 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) == 0) {
    _swift_release(original);
LAB_1004665ac:
    *unaff_x20 = (long)p_Var7;
    return;
  }
  p_Var1 = original + 0x40;
  uVar9 = (1L << ((ulong)(byte)p_Var7[0x20] & 0x3f)) + 0x3fU >> 6;
  if ((p_Var7 != original) || (p_Var1 + uVar9 * 8 <= p_Var7 + 0x40)) {
    _memmove(p_Var7 + 0x40,p_Var1,uVar9 << 3);
  }
  lVar13 = 0;
  *(undefined8 *)(p_Var7 + 0x10) = *(undefined8 *)(original + 0x10);
  uVar9 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  local_68 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    local_68 = ~(-1L << (uVar9 & 0x3f));
  }
  local_68 = local_68 & *(ulong *)(original + 0x40);
  if (local_68 == 0) goto LAB_1004664e4;
  do {
    uVar10 = (local_68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_68 & 0x5555555555555555) << 1;
    uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
    uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
    uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
    uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
    local_68 = local_68 - 1 & local_68;
    while( true ) {
      uVar10 = LZCOUNT(uVar10) | lVar13 << 6;
      lVar11 = uVar10 * 0x10;
      puVar2 = (undefined8 *)(*(long *)(original + 0x30) + lVar11);
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      lVar12 = *(long *)(lVar8 + 0x48) * uVar10;
      (**(code **)(lVar8 + 0x10))
                (auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                 *(long *)(original + 0x38) + lVar12,UVar6.unknown);
      puVar2 = (undefined8 *)(*(long *)(p_Var7 + 0x30) + lVar11);
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      (**(code **)(lVar8 + 0x20))
                (*(long *)(p_Var7 + 0x38) + lVar12,
                 auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar6.unknown);
      _swift_bridgeObjectRetain(uVar4);
      if (local_68 != 0) break;
LAB_1004664e4:
      do {
        lVar11 = lVar13 + 1;
        if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1004665d4);
          (*pcVar5)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar11) {
          _swift_release(original);
          goto LAB_1004665ac;
        }
        local_68 = *(ulong *)(p_Var1 + lVar11 * 8);
        lVar13 = lVar13 + 1;
      } while (local_68 == 0);
      uVar10 = (local_68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_68 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      local_68 = local_68 - 1 & local_68;
      lVar13 = lVar11;
    }
  } while( true );
}



/* Address: 0x1004665d4 | FUN_1004665d4 */

void FUN_1004665d4(void)

{
  __RawDictionaryStorage *p_Var1;
  code *pcVar2;
  long lVar3;
  UUID UVar4;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var5;
  long extraout_x8;
  undefined1 *puVar6;
  long lVar7;
  long extraout_x8_00;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long *unaff_x20;
  long lVar12;
  long lVar13;
  __RawDictionaryStorage *original;
  undefined1 auStack_b0 [8];
  ulong local_68;
  
  lVar3 = 0;
  FUN_10045ba0c();
  lVar3 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar3 + 0x40));
  puVar6 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  UVar4 = Foundation::UUID::typeMetadataAccessor();
  lVar7 = *(long *)(UVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar7 + 0x40));
  lVar8 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  this = (_DictionaryStorage *)&DAT_100fc7db0;
  FUN_1000037f0(&DAT_100fc7db0,&DAT_100c4c778);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var5 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) == 0) {
    _swift_release(original);
LAB_10046681c:
    *unaff_x20 = (long)p_Var5;
    return;
  }
  p_Var1 = original + 0x40;
  uVar9 = (1L << ((ulong)(byte)p_Var5[0x20] & 0x3f)) + 0x3fU >> 6;
  if ((p_Var5 != original) || (p_Var1 + uVar9 * 8 <= p_Var5 + 0x40)) {
    _memmove(p_Var5 + 0x40,p_Var1,uVar9 << 3);
  }
  lVar11 = 0;
  *(undefined8 *)(p_Var5 + 0x10) = *(undefined8 *)(original + 0x10);
  uVar9 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  local_68 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    local_68 = ~(-1L << (uVar9 & 0x3f));
  }
  local_68 = local_68 & *(ulong *)(original + 0x40);
  if (local_68 == 0) goto LAB_100466744;
  do {
    uVar10 = (local_68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_68 & 0x5555555555555555) << 1;
    uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
    uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
    uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
    uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
    local_68 = local_68 - 1 & local_68;
    while( true ) {
      uVar10 = LZCOUNT(uVar10) | lVar11 << 6;
      lVar13 = *(long *)(lVar7 + 0x48) * uVar10;
      (**(code **)(lVar7 + 0x10))(lVar8,*(long *)(original + 0x30) + lVar13,UVar4.unknown);
      lVar12 = *(long *)(lVar3 + 0x48) * uVar10;
      FUN_1000c495c(*(long *)(original + 0x38) + lVar12,puVar6,FUN_10045ba0c);
      (**(code **)(lVar7 + 0x20))(*(long *)(p_Var5 + 0x30) + lVar13,lVar8,UVar4.unknown);
      FUN_1000523d8(puVar6,*(long *)(p_Var5 + 0x38) + lVar12,FUN_10045ba0c);
      if (local_68 != 0) break;
LAB_100466744:
      do {
        lVar12 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100466844);
          (*pcVar2)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar12) {
          _swift_release(original);
          goto LAB_10046681c;
        }
        local_68 = *(ulong *)(p_Var1 + lVar12 * 8);
        lVar11 = lVar11 + 1;
      } while (local_68 == 0);
      uVar10 = (local_68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_68 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      local_68 = local_68 - 1 & local_68;
      lVar11 = lVar12;
    }
  } while( true );
}



/* Address: 0x100466844 | FUN_100466844 */

void FUN_100466844(void)

{
  __RawDictionaryStorage *p_Var1;
  code *pcVar2;
  undefined *puVar3;
  UUID UVar4;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var5;
  long lVar6;
  long extraout_x8;
  undefined1 *puVar7;
  long lVar8;
  long extraout_x8_00;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *unaff_x20;
  long lVar12;
  long lVar13;
  __RawDictionaryStorage *original;
  long lVar14;
  undefined1 auStack_b0 [8];
  ulong local_68;
  
  puVar3 = &DAT_100fc7df8;
  FUN_1000037f0(&DAT_100fc7df8,&DAT_100c4c890);
  lVar6 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_b0 + -extraout_x8;
  UVar4 = Foundation::UUID::typeMetadataAccessor();
  lVar8 = *(long *)(UVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar8 + 0x40));
  lVar9 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  this = (_DictionaryStorage *)&DAT_100fc8360;
  FUN_1000037f0(&DAT_100fc8360,&DAT_100c4ced0);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var5 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) == 0) {
    _swift_release(original);
LAB_100466aa4:
    *unaff_x20 = (long)p_Var5;
    return;
  }
  p_Var1 = original + 0x40;
  uVar10 = (1L << ((ulong)(byte)p_Var5[0x20] & 0x3f)) + 0x3fU >> 6;
  if ((p_Var5 != original) || (p_Var1 + uVar10 * 8 <= p_Var5 + 0x40)) {
    _memmove(p_Var5 + 0x40,p_Var1,uVar10 << 3);
  }
  lVar14 = 0;
  *(undefined8 *)(p_Var5 + 0x10) = *(undefined8 *)(original + 0x10);
  uVar10 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  local_68 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    local_68 = ~(-1L << (uVar10 & 0x3f));
  }
  local_68 = local_68 & *(ulong *)(original + 0x40);
  if (local_68 == 0) goto LAB_1004669b8;
  do {
    uVar11 = (local_68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_68 & 0x5555555555555555) << 1;
    uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
    uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
    uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
    uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
    local_68 = local_68 - 1 & local_68;
    while( true ) {
      uVar11 = LZCOUNT(uVar11) | lVar14 << 6;
      lVar13 = *(long *)(lVar8 + 0x48) * uVar11;
      (**(code **)(lVar8 + 0x10))(lVar9,*(long *)(original + 0x30) + lVar13,UVar4.unknown);
      lVar12 = *(long *)(lVar6 + 0x48) * uVar11;
      FUN_100011090(*(long *)(original + 0x38) + lVar12,puVar7,&DAT_100fc7df8,&DAT_100c4c890);
      (**(code **)(lVar8 + 0x20))(*(long *)(p_Var5 + 0x30) + lVar13,lVar9,UVar4.unknown);
      FUN_10019ffdc(puVar7,*(long *)(p_Var5 + 0x38) + lVar12,&DAT_100fc7df8,&DAT_100c4c890);
      if (local_68 != 0) break;
LAB_1004669b8:
      do {
        lVar12 = lVar14 + 1;
        if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100466acc);
          (*pcVar2)();
        }
        if ((long)(uVar10 + 0x3f >> 6) <= lVar12) {
          _swift_release(original);
          goto LAB_100466aa4;
        }
        local_68 = *(ulong *)(p_Var1 + lVar12 * 8);
        lVar14 = lVar14 + 1;
      } while (local_68 == 0);
      uVar11 = (local_68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_68 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
      local_68 = local_68 - 1 & local_68;
      lVar14 = lVar12;
    }
  } while( true );
}



/* Address: 0x100466acc | FUN_100466acc */

void FUN_100466acc(void)

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
  undefined1 auStack_88 [40];
  
  this = (_DictionaryStorage *)&DAT_100fc7d60;
  FUN_1000037f0(&DAT_100fc7d60,&DAT_100c4c728);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var6 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) == 0) {
    _swift_release(original);
LAB_100466c4c:
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
  if (uVar7 == 0) goto LAB_100466bb4;
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
      lVar10 = uVar9 * 0x28;
      FUN_100076688(*(long *)(original + 0x38) + lVar10,auStack_88);
      puVar2 = (undefined8 *)(*(long *)(p_Var6 + 0x30) + lVar12);
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      FUN_100076508(auStack_88,*(long *)(p_Var6 + 0x38) + lVar10);
      _swift_bridgeObjectRetain(uVar4);
      if (uVar7 != 0) break;
LAB_100466bb4:
      do {
        lVar10 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100466c74);
          (*pcVar5)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar10) {
          _swift_release(original);
          goto LAB_100466c4c;
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



/* Address: 0x100466c74 | FUN_100466c74 */

void FUN_100466c74(void)

{
  FUN_100467228(FUN_100484870,&DAT_100fc7d58,&DAT_100c4c720);
  return;
}



/* Address: 0x100466c90 | FUN_100466c90 */

void FUN_100466c90(void)

{
  __RawDictionaryStorage *p_Var1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  long lVar12;
  
  this = (_DictionaryStorage *)&DAT_100fc7cd0;
  FUN_1000037f0(&DAT_100fc7cd0,&DAT_100c4c698);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var6 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x40;
    uVar7 = (1L << ((ulong)(byte)p_Var6[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var6 != original || p_Var1 + uVar7 * 8 <= p_Var6 + 0x40) {
      _memmove(p_Var6 + 0x40,p_Var1,uVar7 << 3);
    }
    lVar12 = 0;
    *(undefined8 *)(p_Var6 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar8 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar7 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar7 = ~(-1L << (uVar8 & 0x3f));
    }
    uVar7 = uVar7 & *(ulong *)(original + 0x40);
    if (uVar7 == 0) goto LAB_100466d6c;
    do {
      uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar7 = uVar7 - 1 & uVar7;
      while( true ) {
        lVar10 = (LZCOUNT(uVar9) | lVar12 << 6) * 0x10;
        uVar3 = ((undefined8 *)(*(long *)(original + 0x30) + lVar10))[1];
        uVar2 = *(undefined8 *)(*(long *)(original + 0x38) + lVar10);
        uVar4 = ((undefined8 *)(*(long *)(original + 0x38) + lVar10))[1];
        lVar11 = *(long *)(p_Var6 + 0x30);
        *(undefined8 *)(lVar11 + lVar10) = *(undefined8 *)(*(long *)(original + 0x30) + lVar10);
        ((undefined8 *)(lVar11 + lVar10))[1] = uVar3;
        lVar11 = *(long *)(p_Var6 + 0x38);
        *(undefined8 *)(lVar11 + lVar10) = uVar2;
        ((undefined8 *)(lVar11 + lVar10))[1] = uVar4;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar4);
        if (uVar7 != 0) break;
LAB_100466d6c:
        do {
          lVar10 = lVar12 + 1;
          if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100466e08);
            (*pcVar5)();
          }
          if ((long)(uVar8 + 0x3f >> 6) <= lVar10) goto LAB_100466de0;
          uVar7 = *(ulong *)(p_Var1 + lVar10 * 8);
          lVar12 = lVar12 + 1;
        } while (uVar7 == 0);
        uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
        uVar7 = uVar7 - 1 & uVar7;
        lVar12 = lVar10;
      }
    } while( true );
  }
LAB_100466de0:
  _swift_release(original);
  *unaff_x20 = (long)p_Var6;
  return;
}



/* Address: 0x100466e08 | FUN_100466e08 */

void FUN_100466e08(void)

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
  
  this = (_DictionaryStorage *)&DAT_100fc7d70;
  FUN_1000037f0(&DAT_100fc7d70,&DAT_100c4c738);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var6 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) == 0) {
    _swift_release(original);
LAB_100466f84:
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
  if (uVar7 == 0) goto LAB_100466ef0;
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
      FUN_10000cbfc(*(long *)(original + 0x38) + lVar10,auStack_80);
      puVar2 = (undefined8 *)(*(long *)(p_Var6 + 0x30) + lVar12);
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      FUN_100011080(auStack_80,*(long *)(p_Var6 + 0x38) + lVar10);
      _swift_bridgeObjectRetain(uVar4);
      if (uVar7 != 0) break;
LAB_100466ef0:
      do {
        lVar10 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100466fac);
          (*pcVar5)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar10) {
          _swift_release(original);
          goto LAB_100466f84;
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



/* Address: 0x100466fac | FUN_100466fac */

void FUN_100466fac(long param_1,undefined8 param_2,_DictionaryStorage *param_3,undefined8 param_4)

{
  __RawDictionaryStorage *p_Var1;
  code *pcVar2;
  UUID UVar3;
  __RawDictionaryStorage *p_Var4;
  long lVar5;
  long extraout_x8;
  undefined1 *puVar6;
  long lVar7;
  long extraout_x8_00;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *unaff_x20;
  long lVar13;
  __RawDictionaryStorage *original;
  ulong local_68;
  
  FUN_1000037f0();
  lVar5 = *(long *)(param_1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &stack0xffffffffffffff40 + -extraout_x8;
  UVar3 = Foundation::UUID::typeMetadataAccessor();
  lVar7 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar7 + 0x40));
  lVar8 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_1000037f0(param_3,param_4);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var4 = original;
  Swift::_DictionaryStorage::_copy(param_3,original);
  if (*(long *)(original + 0x10) == 0) {
    _swift_release(original);
LAB_100467200:
    *unaff_x20 = (long)p_Var4;
    return;
  }
  p_Var1 = original + 0x40;
  uVar9 = (1L << ((ulong)(byte)p_Var4[0x20] & 0x3f)) + 0x3fU >> 6;
  if ((p_Var4 != original) || (p_Var1 + uVar9 * 8 <= p_Var4 + 0x40)) {
    _memmove(p_Var4 + 0x40,p_Var1,uVar9 << 3);
  }
  lVar12 = 0;
  *(undefined8 *)(p_Var4 + 0x10) = *(undefined8 *)(original + 0x10);
  uVar9 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  local_68 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    local_68 = ~(-1L << (uVar9 & 0x3f));
  }
  local_68 = local_68 & *(ulong *)(original + 0x40);
  if (local_68 == 0) goto LAB_10046711c;
  do {
    uVar10 = (local_68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_68 & 0x5555555555555555) << 1;
    uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
    uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
    uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
    uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
    local_68 = local_68 - 1 & local_68;
    while( true ) {
      uVar10 = LZCOUNT(uVar10) | lVar12 << 6;
      lVar11 = *(long *)(lVar7 + 0x48) * uVar10;
      (**(code **)(lVar7 + 0x10))(lVar8,*(long *)(original + 0x30) + lVar11,UVar3.unknown);
      lVar13 = *(long *)(lVar5 + 0x48) * uVar10;
      (**(code **)(lVar5 + 0x10))(puVar6,*(long *)(original + 0x38) + lVar13,param_1);
      (**(code **)(lVar7 + 0x20))(*(long *)(p_Var4 + 0x30) + lVar11,lVar8,UVar3.unknown);
      (**(code **)(lVar5 + 0x20))(*(long *)(p_Var4 + 0x38) + lVar13,puVar6,param_1);
      if (local_68 != 0) break;
LAB_10046711c:
      do {
        lVar11 = lVar12 + 1;
        if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100467228);
          (*pcVar2)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar11) {
          _swift_release(original);
          goto LAB_100467200;
        }
        local_68 = *(ulong *)(p_Var1 + lVar11 * 8);
        lVar12 = lVar12 + 1;
      } while (local_68 == 0);
      uVar10 = (local_68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_68 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      local_68 = local_68 - 1 & local_68;
      lVar12 = lVar11;
    }
  } while( true );
}



/* Address: 0x100467228 | FUN_100467228 */

void FUN_100467228(code *param_1,_DictionaryStorage *param_2,undefined8 param_3)

{
  __RawDictionaryStorage *p_Var1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  __RawDictionaryStorage *p_Var7;
  long extraout_x8;
  ulong uVar8;
  ulong uVar9;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong local_68;
  
  lVar6 = 0;
  (*param_1)();
  lVar6 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_1000037f0(param_2,param_3);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var7 = original;
  Swift::_DictionaryStorage::_copy(param_2,original);
  if (*(long *)(original + 0x10) == 0) {
    _swift_release(original);
LAB_100467418:
    *unaff_x20 = (long)p_Var7;
    return;
  }
  p_Var1 = original + 0x40;
  uVar8 = (1L << ((ulong)(byte)p_Var7[0x20] & 0x3f)) + 0x3fU >> 6;
  if (p_Var7 != original || p_Var1 + uVar8 * 8 <= p_Var7 + 0x40) {
    _memmove(p_Var7 + 0x40,p_Var1,uVar8 << 3);
  }
  lVar12 = 0;
  *(undefined8 *)(p_Var7 + 0x10) = *(undefined8 *)(original + 0x10);
  uVar8 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  local_68 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    local_68 = ~(-1L << (uVar8 & 0x3f));
  }
  local_68 = local_68 & *(ulong *)(original + 0x40);
  if (local_68 == 0) goto LAB_100467358;
  do {
    uVar9 = (local_68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_68 & 0x5555555555555555) << 1;
    uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
    local_68 = local_68 - 1 & local_68;
    while( true ) {
      uVar9 = LZCOUNT(uVar9) | lVar12 << 6;
      lVar11 = uVar9 * 0x10;
      puVar2 = (undefined8 *)(*(long *)(original + 0x30) + lVar11);
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      lVar10 = *(long *)(lVar6 + 0x48) * uVar9;
      FUN_1000c495c(*(long *)(original + 0x38) + lVar10,&stack0xffffffffffffff70 + -extraout_x8,
                    param_1);
      puVar2 = (undefined8 *)(*(long *)(p_Var7 + 0x30) + lVar11);
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      FUN_1000523d8(&stack0xffffffffffffff70 + -extraout_x8,*(long *)(p_Var7 + 0x38) + lVar10,
                    param_1);
      _swift_bridgeObjectRetain(uVar4);
      if (local_68 != 0) break;
LAB_100467358:
      do {
        lVar10 = lVar12 + 1;
        if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100467440);
          (*pcVar5)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar10) {
          _swift_release(original);
          goto LAB_100467418;
        }
        local_68 = *(ulong *)(p_Var1 + lVar10 * 8);
        lVar12 = lVar12 + 1;
      } while (local_68 == 0);
      uVar9 = (local_68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_68 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      local_68 = local_68 - 1 & local_68;
      lVar12 = lVar10;
    }
  } while( true );
}



/* Address: 0x100467440 | FUN_100467440 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100467440(void)

{
  __RawDictionaryStorage *p_Var1;
  long lVar2;
  code *pcVar3;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_80 [32];
  
  this = (_DictionaryStorage *)&DAT_100fc7dc0;
  FUN_1000037f0(&DAT_100fc7dc0,&DAT_100c4c780);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var4 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x40;
    uVar5 = (1L << ((ulong)(byte)p_Var4[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var4 != original || p_Var1 + uVar5 * 8 <= p_Var4 + 0x40) {
      _memmove(p_Var4 + 0x40,p_Var1,uVar5 << 3);
    }
    lVar9 = 0;
    *(undefined8 *)(p_Var4 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar6 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar5 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar5 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar5 = uVar5 & *(ulong *)(original + 0x40);
    if (uVar5 == 0) goto LAB_100467524;
    do {
      uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar5 = uVar5 - 1 & uVar5;
      while( true ) {
        uVar7 = LZCOUNT(uVar7) | lVar9 << 6;
        uVar8 = *(undefined8 *)(*(long *)(original + 0x30) + uVar7 * 8);
        FUN_10000cbfc(*(long *)(original + 0x38) + uVar7 * 0x20,auStack_80);
        *(undefined8 *)(*(long *)(p_Var4 + 0x30) + uVar7 * 8) = uVar8;
        FUN_100011080(auStack_80,*(long *)(p_Var4 + 0x38) + uVar7 * 0x20);
        if (uVar5 != 0) break;
LAB_100467524:
        do {
          lVar2 = lVar9 + 1;
          if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1004675c4);
            (*pcVar3)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar2) goto LAB_100467594;
          uVar5 = *(ulong *)(p_Var1 + lVar2 * 8);
          lVar9 = lVar9 + 1;
        } while (uVar5 == 0);
        uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
        uVar5 = uVar5 - 1 & uVar5;
        lVar9 = lVar2;
      }
    } while( true );
  }
LAB_100467594:
  _swift_release(original);
  *unaff_x20 = (long)p_Var4;
  return;
}



/* Address: 0x1004675c4 | FUN_1004675c4 */

void FUN_1004675c4(long param_1,bool param_2)

{
  undefined8 *puVar1;
  String *pSVar2;
  __int64 capacity;
  char *pcVar3;
  void *pvVar4;
  String SVar5;
  bool bVar6;
  code *pcVar7;
  UUID UVar8;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var9;
  Hasher into;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long extraout_x8;
  undefined1 *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  long lVar19;
  long lVar20;
  __RawDictionaryStorage *p_Var21;
  undefined1 auStack_e0 [8];
  undefined1 auStack_a8 [72];
  
  UVar8 = Foundation::UUID::typeMetadataAccessor();
  lVar12 = *(long *)(UVar8.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar12 + 0x40));
  puVar13 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_DictionaryStorage *)&DAT_100fc7da0;
  FUN_1000037f0(&DAT_100fc7da0,&DAT_100c4c768);
  p_Var9 = original;
  Swift::_DictionaryStorage::_resize(this,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_1004678b0:
    _swift_release(original);
LAB_1004678b8:
    *unaff_x20 = (long)p_Var9;
    return;
  }
  p_Var21 = original + 0x40;
  uVar16 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar18 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar18 = ~(-1L << (uVar16 & 0x3f));
  }
  uVar18 = uVar18 & *(ulong *)p_Var21;
  lVar11 = 0;
  do {
    if (uVar18 == 0) {
      do {
        lVar20 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1004678e0);
          (*pcVar7)();
        }
        if ((long)(uVar16 + 0x3f >> 6) <= lVar20) {
          if ((param_2 & 1U) == 0) {
            _swift_release(original);
            goto LAB_1004678b8;
          }
          uVar18 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          if (((byte)original[0x20] & 0x3f) < 6) {
            *(long *)p_Var21 = -1L << (uVar18 & 0x3f);
          }
          else {
            _bzero(p_Var21,uVar18 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_1004678b0;
        }
        uVar18 = *(ulong *)(p_Var21 + lVar20 * 8);
        lVar11 = lVar11 + 1;
      } while (uVar18 == 0);
      uVar14 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
      uVar18 = uVar18 - 1 & uVar18;
    }
    else {
      uVar14 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
      uVar18 = uVar18 - 1 & uVar18;
      lVar20 = lVar11;
    }
    uVar14 = LZCOUNT(uVar14) | lVar20 << 6;
    pSVar2 = (String *)(*(long *)(original + 0x30) + uVar14 * 0x10);
    pcVar3 = pSVar2->str;
    pvVar4 = pSVar2->bridgeObject;
    SVar5 = *pSVar2;
    lVar19 = *(long *)(lVar12 + 0x48);
    lVar11 = *(long *)(original + 0x38) + lVar19 * uVar14;
    if ((param_2 & 1U) == 0) {
      (**(code **)(lVar12 + 0x10))(puVar13,lVar11,UVar8.unknown);
      _swift_bridgeObjectRetain(pvVar4);
    }
    else {
      (**(code **)(lVar12 + 0x20))(puVar13,lVar11,UVar8.unknown);
    }
    Swift::Hasher::init(*(__int64 *)(p_Var9 + 0x28));
    into.unknown = auStack_a8;
    Swift::String::hash(into,SVar5);
    uVar10 = Swift::Hasher::_finalize(into);
    uVar17 = -1L << ((ulong)(byte)p_Var9[0x20] & 0x3f);
    uVar10 = uVar10 & (uVar17 ^ 0xffffffffffffffff);
    uVar15 = uVar10 >> 6;
    uVar14 = -1L << (uVar10 & 0x3f) & (*(ulong *)(p_Var9 + uVar15 * 8 + 0x40) ^ 0xffffffffffffffff);
    if (uVar14 == 0) {
      bVar6 = false;
      uVar14 = 0x3f - uVar17 >> 6;
      do {
        uVar10 = uVar15 + 1;
        if ((uVar10 == uVar14) && (bVar6)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1004678e4);
          (*pcVar7)();
        }
        uVar15 = 0;
        if (uVar10 != uVar14) {
          uVar15 = uVar10;
        }
        bVar6 = (bool)(uVar10 == uVar14 | bVar6);
      } while (*(ulong *)(p_Var9 + uVar15 * 8 + 0x40) == 0xffffffffffffffff);
      uVar14 = ~*(ulong *)(p_Var9 + uVar15 * 8 + 0x40);
      uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar14 = LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) | uVar15 << 6;
    }
    else {
      uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar14 = LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) | uVar10 & 0x7fffffffffffffc0;
    }
    uVar15 = uVar14 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var9 + uVar15 + 0x40) = 1L << (uVar14 & 0x3f) | *(ulong *)(p_Var9 + uVar15 + 0x40);
    puVar1 = (undefined8 *)(*(long *)(p_Var9 + 0x30) + uVar14 * 0x10);
    *puVar1 = pcVar3;
    puVar1[1] = pvVar4;
    (**(code **)(lVar12 + 0x20))(*(long *)(p_Var9 + 0x38) + lVar19 * uVar14,puVar13,UVar8.unknown);
    *(long *)(p_Var9 + 0x10) = *(long *)(p_Var9 + 0x10) + 1;
    lVar11 = lVar20;
  } while( true );
}



/* Address: 0x1004678e4 | FUN_1004678e4 */

void FUN_1004678e4(long param_1,bool param_2)

{
  bool bVar1;
  code *pcVar2;
  long lVar3;
  UUID UVar4;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var5;
  ulong uVar6;
  long lVar7;
  long extraout_x8;
  undefined1 *puVar8;
  long extraout_x8_00;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long *unaff_x20;
  __int64 _Var16;
  __RawDictionaryStorage *original;
  long lVar17;
  __RawDictionaryStorage *p_Var18;
  ulong uVar19;
  
  lVar3 = 0;
  FUN_10045ba0c();
  lVar3 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar3 + 0x40));
  puVar8 = &stack0xffffffffffffff60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  UVar4 = Foundation::UUID::typeMetadataAccessor();
  lVar17 = *(long *)(UVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar17 + 0x40));
  lVar9 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  original = (__RawDictionaryStorage *)*unaff_x20;
  _Var16 = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    _Var16 = param_1;
  }
  this = (_DictionaryStorage *)&DAT_100fc7db0;
  FUN_1000037f0(&DAT_100fc7db0,&DAT_100c4c778);
  p_Var5 = original;
  Swift::_DictionaryStorage::_resize(this,original,_Var16,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_100467c74:
    _swift_release(original);
LAB_100467c7c:
    *unaff_x20 = (long)p_Var5;
    return;
  }
  p_Var18 = original + 0x40;
  uVar12 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar19 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar19 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar19 = uVar19 & *(ulong *)p_Var18;
  lVar7 = 0;
  do {
    if (uVar19 == 0) {
      do {
        lVar15 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100467ca4);
          (*pcVar2)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar15) {
          if ((param_2 & 1U) == 0) {
            _swift_release(original);
            goto LAB_100467c7c;
          }
          uVar19 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          if (((byte)original[0x20] & 0x3f) < 6) {
            *(long *)p_Var18 = -1L << (uVar19 & 0x3f);
          }
          else {
            _bzero(p_Var18,uVar19 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_100467c74;
        }
        uVar19 = *(ulong *)(p_Var18 + lVar15 * 8);
        lVar7 = lVar7 + 1;
      } while (uVar19 == 0);
      uVar10 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar19 = uVar19 - 1 & uVar19;
    }
    else {
      uVar10 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar19 = uVar19 - 1 & uVar19;
      lVar15 = lVar7;
    }
    uVar10 = LZCOUNT(uVar10) | lVar15 << 6;
    lVar13 = *(long *)(lVar17 + 0x48);
    lVar7 = *(long *)(original + 0x30) + lVar13 * uVar10;
    if ((param_2 & 1U) == 0) {
      (**(code **)(lVar17 + 0x10))(lVar9,lVar7,UVar4.unknown);
      lVar7 = *(long *)(lVar3 + 0x48);
      FUN_1000c495c(*(long *)(original + 0x38) + lVar7 * uVar10,puVar8,FUN_10045ba0c);
    }
    else {
      (**(code **)(lVar17 + 0x20))(lVar9,lVar7,UVar4.unknown);
      lVar7 = *(long *)(lVar3 + 0x48);
      FUN_1000523d8(*(long *)(original + 0x38) + lVar7 * uVar10,puVar8,FUN_10045ba0c);
    }
    _Var16 = *(__int64 *)(p_Var5 + 0x28);
    FUN_100003a00(&DAT_100fc7ed8,PTR_typeMetadataAccessor_100ea7500,
                  PTR_Foundation__Foundation__UUID_>Swift__Hashable_100ea7518);
    uVar6 = Swift::Hashable::_rawHashValue(_Var16);
    uVar14 = -1L << ((ulong)(byte)p_Var5[0x20] & 0x3f);
    uVar6 = uVar6 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar6 >> 6;
    uVar10 = -1L << (uVar6 & 0x3f) & (*(ulong *)(p_Var5 + uVar11 * 8 + 0x40) ^ 0xffffffffffffffff);
    if (uVar10 == 0) {
      bVar1 = false;
      uVar10 = 0x3f - uVar14 >> 6;
      do {
        uVar6 = uVar11 + 1;
        if ((uVar6 == uVar10) && (bVar1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100467ca8);
          (*pcVar2)();
        }
        uVar11 = 0;
        if (uVar6 != uVar10) {
          uVar11 = uVar6;
        }
        bVar1 = (bool)(uVar6 == uVar10 | bVar1);
      } while (*(ulong *)(p_Var5 + uVar11 * 8 + 0x40) == 0xffffffffffffffff);
      uVar10 = ~*(ulong *)(p_Var5 + uVar11 * 8 + 0x40);
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar11 << 6;
    }
    else {
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar6 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar10 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var5 + uVar11 + 0x40) = 1L << (uVar10 & 0x3f) | *(ulong *)(p_Var5 + uVar11 + 0x40);
    (**(code **)(lVar17 + 0x20))(*(long *)(p_Var5 + 0x30) + lVar13 * uVar10,lVar9,UVar4.unknown);
    FUN_1000523d8(puVar8,*(long *)(p_Var5 + 0x38) + lVar7 * uVar10,FUN_10045ba0c);
    *(long *)(p_Var5 + 0x10) = *(long *)(p_Var5 + 0x10) + 1;
    lVar7 = lVar15;
  } while( true );
}



/* Address: 0x100467ca8 | FUN_100467ca8 */

void FUN_100467ca8(long param_1,bool param_2)

{
  bool bVar1;
  code *pcVar2;
  undefined *puVar3;
  UUID UVar4;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long extraout_x8;
  undefined1 *puVar9;
  long extraout_x8_00;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long *unaff_x20;
  __int64 _Var17;
  __RawDictionaryStorage *original;
  long lVar18;
  __RawDictionaryStorage *p_Var19;
  ulong uVar20;
  
  puVar3 = &DAT_100fc7df8;
  FUN_1000037f0(&DAT_100fc7df8,&DAT_100c4c890);
  lVar8 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = &stack0xffffffffffffff60 + -extraout_x8;
  UVar4 = Foundation::UUID::typeMetadataAccessor();
  lVar18 = *(long *)(UVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar18 + 0x40));
  lVar10 = (long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  original = (__RawDictionaryStorage *)*unaff_x20;
  _Var17 = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    _Var17 = param_1;
  }
  this = (_DictionaryStorage *)&DAT_100fc8360;
  FUN_1000037f0(&DAT_100fc8360,&DAT_100c4ced0);
  p_Var5 = original;
  Swift::_DictionaryStorage::_resize(this,original,_Var17,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_100468054:
    _swift_release(original);
LAB_10046805c:
    *unaff_x20 = (long)p_Var5;
    return;
  }
  p_Var19 = original + 0x40;
  uVar13 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar20 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar20 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar20 = uVar20 & *(ulong *)p_Var19;
  lVar7 = 0;
  do {
    if (uVar20 == 0) {
      do {
        lVar16 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100468084);
          (*pcVar2)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar16) {
          if ((param_2 & 1U) == 0) {
            _swift_release(original);
            goto LAB_10046805c;
          }
          uVar20 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          if (((byte)original[0x20] & 0x3f) < 6) {
            *(long *)p_Var19 = -1L << (uVar20 & 0x3f);
          }
          else {
            _bzero(p_Var19,uVar20 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_100468054;
        }
        uVar20 = *(ulong *)(p_Var19 + lVar16 * 8);
        lVar7 = lVar7 + 1;
      } while (uVar20 == 0);
      uVar11 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
      uVar20 = uVar20 - 1 & uVar20;
    }
    else {
      uVar11 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
      uVar20 = uVar20 - 1 & uVar20;
      lVar16 = lVar7;
    }
    uVar11 = LZCOUNT(uVar11) | lVar16 << 6;
    lVar14 = *(long *)(lVar18 + 0x48);
    lVar7 = *(long *)(original + 0x30) + lVar14 * uVar11;
    if ((param_2 & 1U) == 0) {
      (**(code **)(lVar18 + 0x10))(lVar10,lVar7,UVar4.unknown);
      lVar7 = *(long *)(lVar8 + 0x48);
      FUN_100011090(*(long *)(original + 0x38) + lVar7 * uVar11,puVar9,&DAT_100fc7df8,&DAT_100c4c890
                   );
    }
    else {
      (**(code **)(lVar18 + 0x20))(lVar10,lVar7,UVar4.unknown);
      lVar7 = *(long *)(lVar8 + 0x48);
      FUN_10019ffdc(*(long *)(original + 0x38) + lVar7 * uVar11,puVar9,&DAT_100fc7df8,&DAT_100c4c890
                   );
    }
    _Var17 = *(__int64 *)(p_Var5 + 0x28);
    FUN_100003a00(&DAT_100fc7ed8,PTR_typeMetadataAccessor_100ea7500,
                  PTR_Foundation__Foundation__UUID_>Swift__Hashable_100ea7518);
    uVar6 = Swift::Hashable::_rawHashValue(_Var17);
    uVar15 = -1L << ((ulong)(byte)p_Var5[0x20] & 0x3f);
    uVar6 = uVar6 & (uVar15 ^ 0xffffffffffffffff);
    uVar12 = uVar6 >> 6;
    uVar11 = -1L << (uVar6 & 0x3f) & (*(ulong *)(p_Var5 + uVar12 * 8 + 0x40) ^ 0xffffffffffffffff);
    if (uVar11 == 0) {
      bVar1 = false;
      uVar11 = 0x3f - uVar15 >> 6;
      do {
        uVar6 = uVar12 + 1;
        if ((uVar6 == uVar11) && (bVar1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100468088);
          (*pcVar2)();
        }
        uVar12 = 0;
        if (uVar6 != uVar11) {
          uVar12 = uVar6;
        }
        bVar1 = (bool)(uVar6 == uVar11 | bVar1);
      } while (*(ulong *)(p_Var5 + uVar12 * 8 + 0x40) == 0xffffffffffffffff);
      uVar11 = ~*(ulong *)(p_Var5 + uVar12 * 8 + 0x40);
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
      uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | uVar6 & 0x7fffffffffffffc0;
    }
    uVar12 = uVar11 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var5 + uVar12 + 0x40) = 1L << (uVar11 & 0x3f) | *(ulong *)(p_Var5 + uVar12 + 0x40);
    (**(code **)(lVar18 + 0x20))(*(long *)(p_Var5 + 0x30) + lVar14 * uVar11,lVar10,UVar4.unknown);
    FUN_10019ffdc(puVar9,*(long *)(p_Var5 + 0x38) + lVar7 * uVar11,&DAT_100fc7df8,&DAT_100c4c890);
    *(long *)(p_Var5 + 0x10) = *(long *)(p_Var5 + 0x10) + 1;
    lVar7 = lVar16;
  } while( true );
}



/* Address: 0x100468088 | FUN_100468088 */

void FUN_100468088(long param_1,bool param_2)

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
  this = (_DictionaryStorage *)&DAT_100fc7d60;
  FUN_1000037f0(&DAT_100fc7d60,&DAT_100c4c728);
  p_Var8 = original;
  Swift::_DictionaryStorage::_resize(this,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_10046831c:
    _swift_release(original);
LAB_100468324:
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
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10046834c);
          (*pcVar7)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar17) {
          if ((param_2 & 1U) == 0) {
            _swift_release(original);
            goto LAB_100468324;
          }
          uVar15 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          if (((byte)original[0x20] & 0x3f) < 6) {
            *(long *)p_Var16 = -1L << (uVar15 & 0x3f);
          }
          else {
            _bzero(p_Var16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_10046831c;
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
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100468350);
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


