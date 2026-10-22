/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1002bc244 | FUN_1002bc244 */

void FUN_1002bc244(long *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined7 extraout_var;
  undefined8 *puVar10;
  Date DVar11;
  long extraout_x8;
  long extraout_x8_00;
  long lVar12;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar13;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long lVar14;
  undefined *puVar15;
  long *plVar16;
  long lVar17;
  undefined *puVar18;
  byte *pbVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  code *pcVar24;
  byte abStack_110 [8];
  long local_108;
  long local_100;
  long *local_f8;
  byte *local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  undefined *local_c8;
  long local_c0;
  ulong local_b8;
  long local_b0;
  long local_a8;
  ulong local_a0;
  undefined *local_98;
  long local_90;
  undefined *local_88;
  undefined8 local_80;
  long local_78;
  undefined *local_70;
  
  local_f8 = param_1;
  local_88 = (undefined *)Foundation::Date::typeMetadataAccessor();
  local_a8 = *(long *)(local_88 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_a8 + 0x40));
  puVar6 = &DAT_100fb8398;
  local_f0 = abStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_1000037f0(&DAT_100fb8398,&DAT_100c3c780);
  local_c8 = puVar6;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = (long)(abStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  puVar6 = &DAT_100fb7f78;
  local_d0 = lVar12;
  FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  lVar12 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_e8 = lVar12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar12 = lVar12 - extraout_x12;
  lVar7 = 0;
  local_b0 = lVar12;
  FUN_1002bd9c0();
  puVar15 = *(undefined **)(lVar7 + -8);
  local_78 = lVar7;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(puVar15 + 0x40));
  lVar12 = lVar12 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_90 = lVar12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar12 = lVar12 - extraout_x12_00;
  local_d8 = lVar12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  uVar13 = lVar12 - extraout_x12_01;
  local_b8 = uVar13;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar7 = uVar13 - extraout_x12_02;
  local_e0 = lVar7;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar7 = lVar7 - extraout_x12_03;
  local_100 = lVar7;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  pbVar19 = (byte *)(lVar7 - extraout_x12_04);
  local_c0 = param_3;
  FUN_1002bbe08();
  uVar13 = *(ulong *)(param_3 + 0x10);
  puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
  local_98 = puVar15;
  if (uVar13 != 0) {
    uVar21 = 0;
    uVar23 = param_2 & 0xff;
    local_80 = CONCAT44(local_80._4_4_,param_2) & 0xffffffff000000ff;
    local_a0 = uVar13;
    do {
      if (*(ulong *)(param_3 + 0x10) <= uVar21) {
                    /* WARNING: Does not return */
        pcVar24 = (code *)SoftwareBreakpoint(1,0x1002bcc28);
        (*pcVar24)();
      }
      uVar20 = (ulong)(byte)puVar15[0x50] + 0x20 & ((ulong)(byte)puVar15[0x50] ^ 0xffffffffffffffff)
      ;
      lVar7 = *(long *)(puVar15 + 0x48);
      FUN_1000c495c(param_3 + uVar20 + lVar7 * uVar21,pbVar19,FUN_1002bd9c0);
      if (*pbVar19 == uVar23) {
        puVar15 = puVar6;
        _swift_isUniquelyReferenced_nonNull_native();
        local_70 = puVar6;
        if (((ulong)puVar15 & 1) == 0) {
          FUN_1002b10a8(0,*(long *)(puVar6 + 0x10) + 1,1);
          uVar13 = local_a0;
        }
        uVar1 = *(ulong *)(local_70 + 0x10);
        if (*(ulong *)(local_70 + 0x18) >> 1 <= uVar1) {
          FUN_1002b10a8(1 < *(ulong *)(local_70 + 0x18),uVar1 + 1,1);
          uVar13 = local_a0;
        }
        puVar6 = local_70;
        *(ulong *)(local_70 + 0x10) = uVar1 + 1;
        FUN_1002bda8c(pbVar19,local_70 + uVar1 * lVar7 + uVar20);
        puVar15 = local_98;
        uVar23 = (uint)local_80;
      }
      else {
        FUN_10005241c(pbVar19,FUN_1002bd9c0);
      }
      uVar21 = uVar21 + 1;
    } while (uVar13 != uVar21);
  }
  _swift_bridgeObjectRelease(param_3);
  uVar13 = *(ulong *)(puVar6 + 0x10);
  lVar12 = 0;
  FUN_1002bdad0();
  plVar16 = local_f8;
  lVar7 = local_100;
  if (uVar13 == 0) {
    (**(code **)(puVar15 + 0x38))((long)local_f8 + (long)*(int *)(lVar12 + 0x20),1,1,local_78);
    puVar15 = PTR___swiftEmptyArrayStorage_100eae0d8;
    lVar7 = *(long *)(puVar6 + 0x10);
    lVar12 = *(long *)(PTR___swiftEmptyArrayStorage_100eae0d8 + 0x10);
    _swift_release(PTR___swiftEmptyArrayStorage_100eae0d8);
    lVar17 = *(long *)(puVar15 + 0x10);
    _swift_release(puVar15);
  }
  else {
    local_a0 = (ulong)(byte)puVar15[0x50] + 0x20 & ((ulong)(byte)puVar15[0x50] ^ 0xffffffffffffffff)
    ;
    puVar18 = puVar6 + local_a0;
    local_108 = (long)*(int *)(lVar12 + 0x20);
    FUN_1000c495c(puVar18,local_100,FUN_1002bd9c0);
    puVar15 = local_88;
    local_80 = uVar13;
    if (uVar13 != 1) {
      uVar21 = 1;
      do {
        lVar12 = local_e0;
        if (*(ulong *)(puVar6 + 0x10) <= uVar21) {
                    /* WARNING: Does not return */
          pcVar24 = (code *)SoftwareBreakpoint(1,0x1002bcc38);
          (*pcVar24)();
        }
        FUN_1000c495c(puVar18 + *(long *)(local_98 + 0x48) * uVar21,local_e0,FUN_1002bd9c0);
        lVar14 = local_78;
        lVar17 = (long)*(int *)(local_78 + 0x1c);
        puVar10 = &DAT_100fb83b0;
        FUN_1000e8c70(&DAT_100fb83b0,PTR_Foundation__Foundation__Date_>Swift__Equatable_100ea74a0);
        DVar11.unknown = puVar15;
        bVar5 = Swift::Equatable::___infix(lVar7 + lVar17,lVar12 + lVar17,puVar15,puVar10);
        if (bVar5) {
          lVar17 = (long)*(int *)(lVar14 + 0x14);
        }
        bVar5 = Foundation::Date::<_infix
                          ((undefined *)(lVar7 + lVar17),(undefined *)(lVar12 + lVar17),DVar11);
        uVar13 = local_80;
        if (bVar5) {
          FUN_10005241c(lVar7,FUN_1002bd9c0);
          FUN_1002bda8c(lVar12,lVar7);
        }
        else {
          FUN_10005241c(lVar12,FUN_1002bd9c0);
        }
        uVar21 = uVar21 + 1;
      } while (uVar13 != uVar21);
    }
    uVar20 = local_b8;
    plVar16 = local_f8;
    lVar12 = local_108;
    FUN_1002bda8c(lVar7,(long)local_f8 + local_108);
    lVar14 = local_78;
    puVar15 = local_98;
    (**(code **)(local_98 + 0x38))((long)plVar16 + lVar12,0,1,local_78);
    uVar21 = 0;
    local_e0 = *(long *)(puVar6 + 0x10);
    puVar9 = PTR___swiftEmptyArrayStorage_100eae0d8;
    do {
      if (*(ulong *)(puVar6 + 0x10) <= uVar21) {
                    /* WARNING: Does not return */
        pcVar24 = (code *)SoftwareBreakpoint(1,0x1002bcc2c);
        (*pcVar24)();
      }
      lVar22 = *(long *)(puVar15 + 0x48);
      FUN_1000c495c(puVar18 + lVar22 * uVar21,uVar20,FUN_1002bd9c0);
      if (*(char *)(uVar20 + (long)*(int *)(lVar14 + 0x2c)) == '\x01') {
        puVar8 = puVar9;
        _swift_isUniquelyReferenced_nonNull_native();
        local_70 = puVar9;
        if (((ulong)puVar8 & 1) == 0) {
          FUN_1002b10a8(0,*(long *)(puVar9 + 0x10) + 1,1);
        }
        uVar1 = *(ulong *)(local_70 + 0x10);
        if (*(ulong *)(local_70 + 0x18) >> 1 <= uVar1) {
          FUN_1002b10a8(1 < *(ulong *)(local_70 + 0x18),uVar1 + 1,1);
        }
        puVar9 = local_70;
        uVar20 = local_b8;
        *(ulong *)(local_70 + 0x10) = uVar1 + 1;
        FUN_1002bda8c(local_b8,local_70 + uVar1 * lVar22 + local_a0);
        lVar14 = local_78;
      }
      else {
        FUN_10005241c(uVar20,FUN_1002bd9c0);
      }
      uVar21 = uVar21 + 1;
    } while (uVar13 != uVar21);
    local_100 = *(long *)(puVar9 + 0x10);
    _swift_release(puVar9);
    uVar13 = 0;
    lVar7 = local_d8;
    puVar15 = puVar18;
    puVar9 = PTR___swiftEmptyArrayStorage_100eae0d8;
    do {
      if (*(ulong *)(puVar6 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
        pcVar24 = (code *)SoftwareBreakpoint(1,0x1002bcc30);
        (*pcVar24)();
      }
      FUN_1000c495c(puVar15,lVar7,FUN_1002bd9c0);
      iVar2 = *(int *)(lVar14 + 0x1c);
      puVar8 = &DAT_100fb8390;
      FUN_1000e8c70(&DAT_100fb8390,PTR_Foundation__Foundation__Date_>Swift__Comparable_100ea7498);
      bVar5 = Swift::Comparable::<__infix(lVar7 + iVar2,local_c0,local_88,puVar8);
      if (bVar5) {
        puVar8 = puVar9;
        _swift_isUniquelyReferenced_nonNull_native();
        local_70 = puVar9;
        if (((ulong)puVar8 & 1) == 0) {
          FUN_1002b10a8(0,*(long *)(puVar9 + 0x10) + 1,1);
        }
        uVar21 = *(ulong *)(local_70 + 0x10);
        if (*(ulong *)(local_70 + 0x18) >> 1 <= uVar21) {
          FUN_1002b10a8(1 < *(ulong *)(local_70 + 0x18),uVar21 + 1,1);
        }
        puVar9 = local_70;
        lVar7 = local_d8;
        *(ulong *)(local_70 + 0x10) = uVar21 + 1;
        FUN_1002bda8c(local_d8,local_70 + uVar21 * lVar22 + local_a0);
        lVar14 = local_78;
      }
      else {
        FUN_10005241c(lVar7,FUN_1002bd9c0);
      }
      uVar13 = uVar13 + 1;
      puVar15 = puVar15 + lVar22;
    } while (local_80 != uVar13);
    local_c0 = *(long *)(puVar9 + 0x10);
    _swift_release(puVar9);
    uVar13 = 0;
    puVar15 = PTR___swiftEmptyArrayStorage_100eae0d8;
    do {
      lVar7 = local_90;
      if (*(ulong *)(puVar6 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
        pcVar24 = (code *)SoftwareBreakpoint(1,0x1002bcc34);
        (*pcVar24)();
      }
      local_98 = puVar15;
      FUN_1000c495c(puVar18,local_90,FUN_1002bd9c0);
      puVar15 = local_88;
      lVar4 = local_a8;
      lVar3 = local_b0;
      iVar2 = *(int *)(lVar14 + 0x20);
      (**(code **)(local_a8 + 0x38))(local_b0,1,1,local_88);
      lVar17 = local_d0;
      lVar12 = (long)*(int *)(local_c8 + 0x30);
      FUN_100247fac(lVar7 + iVar2,local_d0);
      FUN_100247fac(lVar3,lVar17 + lVar12);
      pcVar24 = *(code **)(lVar4 + 0x30);
      lVar14 = lVar17;
      (*pcVar24)(lVar17,1,puVar15);
      lVar7 = local_e8;
      if ((int)lVar14 == 1) {
        FUN_100005808(lVar3,&DAT_100fb7f78,&DAT_100c37ab0);
        lVar12 = lVar17 + lVar12;
        (*pcVar24)(lVar12,1,puVar15);
        if ((int)lVar12 != 1) {
LAB_1002bc988:
          FUN_100005808(lVar17,&DAT_100fb8398,&DAT_100c3c780);
          goto LAB_1002bc9a4;
        }
        FUN_100005808(lVar17,&DAT_100fb7f78,&DAT_100c37ab0);
LAB_1002bc840:
        FUN_10005241c(local_90,FUN_1002bd9c0);
        puVar15 = local_98;
        lVar14 = local_78;
      }
      else {
        FUN_100247fac(lVar17,local_e8);
        lVar14 = lVar17 + lVar12;
        (*pcVar24)(lVar14,1,puVar15);
        lVar3 = local_a8;
        pbVar19 = local_f0;
        if ((int)lVar14 == 1) {
          FUN_100005808(local_b0,&DAT_100fb7f78,&DAT_100c37ab0);
          (**(code **)(local_a8 + 8))(lVar7,puVar15);
          goto LAB_1002bc988;
        }
        (**(code **)(local_a8 + 0x20))(local_f0,lVar17 + lVar12,puVar15);
        puVar10 = &DAT_100fb83b0;
        FUN_1000e8c70(&DAT_100fb83b0,PTR_Foundation__Foundation__Date_>Swift__Equatable_100ea74a0);
        bVar5 = Swift::Equatable::___infix(lVar7,pbVar19,puVar15,puVar10);
        local_b8 = CONCAT44(local_b8._4_4_,(int)CONCAT71(extraout_var,bVar5));
        pcVar24 = *(code **)(lVar3 + 8);
        (*pcVar24)(pbVar19,puVar15);
        FUN_100005808(local_b0,&DAT_100fb7f78,&DAT_100c37ab0);
        (*pcVar24)(lVar7,puVar15);
        FUN_100005808(lVar17,&DAT_100fb7f78,&DAT_100c37ab0);
        if ((local_b8 & 1) != 0) goto LAB_1002bc840;
LAB_1002bc9a4:
        puVar15 = local_98;
        puVar9 = local_98;
        _swift_isUniquelyReferenced_nonNull_native();
        lVar14 = local_78;
        local_70 = puVar15;
        if (((ulong)puVar9 & 1) == 0) {
          FUN_1002b10a8(0,*(long *)(puVar15 + 0x10) + 1,1);
        }
        uVar21 = *(ulong *)(local_70 + 0x10);
        if (*(ulong *)(local_70 + 0x18) >> 1 <= uVar21) {
          FUN_1002b10a8(1 < *(ulong *)(local_70 + 0x18),uVar21 + 1,1);
        }
        puVar15 = local_70;
        *(ulong *)(local_70 + 0x10) = uVar21 + 1;
        FUN_1002bda8c(local_90,local_70 + uVar21 * lVar22 + local_a0);
      }
      uVar13 = uVar13 + 1;
      puVar18 = puVar18 + lVar22;
      lVar7 = local_e0;
      plVar16 = local_f8;
      lVar12 = local_100;
      lVar17 = local_c0;
    } while (local_80 != uVar13);
  }
  _swift_release(puVar6);
  lVar14 = *(long *)(puVar15 + 0x10);
  _swift_release(puVar15);
  *plVar16 = lVar7;
  plVar16[1] = lVar12;
  plVar16[2] = lVar17;
  plVar16[3] = lVar14;
  return;
}



/* Address: 0x1002bcc38 | FUN_1002bcc38 */

void FUN_1002bcc38(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long extraout_x8;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  puVar1 = &DAT_100fbc108;
  FUN_1000037f0(&DAT_100fbc108,&DAT_100c3c9c8);
  lVar5 = *(long *)(puVar1 + -8);
  lVar4 = *(long *)(lVar5 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(lVar4 + 0xfU & 0xfffffffffffffff0);
  FUN_100438d28(0);
  (**(code **)(lVar5 + 0x10))(&stack0xffffffffffffffb0 + -extraout_x8,param_1,puVar1);
  uVar3 = (ulong)*(byte *)(lVar5 + 0x50);
  uVar6 = uVar3 + 0x10 & (uVar3 ^ 0xffffffffffffffff);
  puVar2 = &DAT_100ec6b10;
  _swift_allocObject(&DAT_100ec6b10,uVar6 + lVar4,uVar3 | 7);
  (**(code **)(lVar5 + 0x20))(puVar2 + uVar6,&stack0xffffffffffffffb0 + -extraout_x8,puVar1);
  FUN_10042f7e4(thunk_FUN_1002bdefc,puVar2);
  _swift_release(puVar2);
  return;
}



/* Address: 0x1002bcd28 | FUN_1002bcd28 */

/* WARNING: Removing unreachable block (ram,0x0001002bcd64) */

void FUN_1002bcd28(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long local_40 [2];
  
  if (param_1 == 0) {
    FUN_100438d28();
    FUN_10043f154();
    lVar1 = param_1;
    FUN_1002bcde4();
    _swift_allocObject();
    *(long *)(lVar1 + 0x10) = param_1;
    puVar2 = &DAT_100fbc108;
    local_40[0] = lVar1;
    FUN_1000037f0(&DAT_100fbc108,&DAT_100c3c9c8);
    Swift::CheckedContinuation::resume(local_40,puVar2);
  }
  else {
    local_40[0] = param_1;
    _swift_errorRetain();
    puVar2 = &DAT_100fbc108;
    FUN_1000037f0(&DAT_100fbc108,&DAT_100c3c9c8);
    Swift::CheckedContinuation::resume(local_40,puVar2);
  }
  return;
}



/* Address: 0x1002bcde4 | FUN_1002bcde4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1002bcde4(void)

{
  return ZEXT816(0x100fbbf48);
}



/* Address: 0x1002bce04 | FUN_1002bce04 */

long * FUN_1002bce04(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  Date DVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  code *pcVar11;
  code *pcVar12;
  long lVar13;
  
  uVar4 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar4 >> 0x11 & 1) == 0) {
    *(char *)param_1 = (char)*param_2;
    iVar5 = *(int *)(param_3 + 0x14);
    DVar6 = Foundation::Date::typeMetadataAccessor();
    lVar10 = *(long *)(DVar6.unknown + -8);
    pcVar11 = *(code **)(lVar10 + 0x10);
    (*pcVar11)((undefined1 *)((long)param_1 + (long)iVar5),
               (undefined1 *)((long)param_2 + (long)iVar5),DVar6.unknown);
    lVar13 = (long)*(int *)(param_3 + 0x18);
    pcVar12 = *(code **)(lVar10 + 0x30);
    puVar7 = (undefined1 *)((long)param_2 + lVar13);
    (*pcVar12)(puVar7,1,DVar6.unknown);
    if ((int)puVar7 == 0) {
      (*pcVar11)((undefined1 *)((long)param_1 + lVar13),(undefined1 *)((long)param_2 + lVar13),
                 DVar6.unknown);
      (**(code **)(lVar10 + 0x38))((undefined1 *)((long)param_1 + lVar13),0,1,DVar6.unknown);
    }
    else {
      puVar8 = &DAT_100fb7f78;
      FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
      _memcpy((undefined1 *)((long)param_1 + lVar13),(undefined1 *)((long)param_2 + lVar13),
              *(size_t *)(*(long *)(puVar8 + -8) + 0x40));
    }
    (*pcVar11)((undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)),
               (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c)),DVar6.unknown);
    lVar13 = (long)*(int *)(param_3 + 0x20);
    puVar7 = (undefined1 *)((long)param_2 + lVar13);
    (*pcVar12)(puVar7,1,DVar6.unknown);
    if ((int)puVar7 == 0) {
      (*pcVar11)((undefined1 *)((long)param_1 + lVar13),(undefined1 *)((long)param_2 + lVar13),
                 DVar6.unknown);
      (**(code **)(lVar10 + 0x38))((undefined1 *)((long)param_1 + lVar13),0,1,DVar6.unknown);
    }
    else {
      puVar8 = &DAT_100fb7f78;
      FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
      _memcpy((undefined1 *)((long)param_1 + lVar13),(undefined1 *)((long)param_2 + lVar13),
              *(size_t *)(*(long *)(puVar8 + -8) + 0x40));
    }
    iVar5 = *(int *)(param_3 + 0x28);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar5);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar5);
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar3);
  }
  else {
    lVar10 = *param_2;
    *param_1 = lVar10;
    uVar9 = (ulong)uVar4 & 0xff;
    param_1 = (long *)(lVar10 + (uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1002bcfcc | FUN_1002bcfcc */

void FUN_1002bcfcc(long param_1,long param_2)

{
  int iVar1;
  Date DVar2;
  code *pcVar3;
  code *pcVar4;
  long lVar5;
  
  iVar1 = *(int *)(param_2 + 0x14);
  DVar2 = Foundation::Date::typeMetadataAccessor();
  lVar5 = *(long *)(DVar2.unknown + -8);
  pcVar3 = *(code **)(lVar5 + 8);
  (*pcVar3)(param_1 + iVar1,DVar2.unknown);
  iVar1 = *(int *)(param_2 + 0x18);
  pcVar4 = *(code **)(lVar5 + 0x30);
  lVar5 = param_1 + iVar1;
  (*pcVar4)(lVar5,1,DVar2.unknown);
  if ((int)lVar5 == 0) {
    (*pcVar3)(param_1 + iVar1,DVar2.unknown);
  }
  (*pcVar3)(param_1 + *(int *)(param_2 + 0x1c),DVar2.unknown);
  iVar1 = *(int *)(param_2 + 0x20);
  lVar5 = param_1 + iVar1;
  (*pcVar4)(lVar5,1,DVar2.unknown);
  if ((int)lVar5 == 0) {
    (*pcVar3)(param_1 + iVar1,DVar2.unknown);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x24) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x28) + 8));
  return;
}



/* Address: 0x1002bd0a0 | FUN_1002bd0a0 */

undefined1 * FUN_1002bd0a0(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  Date DVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  long lVar7;
  code *pcVar8;
  code *pcVar9;
  
  *param_1 = *param_2;
  iVar3 = *(int *)(param_3 + 0x14);
  DVar4 = Foundation::Date::typeMetadataAccessor();
  lVar7 = *(long *)(DVar4.unknown + -8);
  pcVar8 = *(code **)(lVar7 + 0x10);
  (*pcVar8)(param_1 + iVar3,param_2 + iVar3,DVar4.unknown);
  iVar3 = *(int *)(param_3 + 0x18);
  pcVar9 = *(code **)(lVar7 + 0x30);
  puVar5 = param_2 + iVar3;
  (*pcVar9)(puVar5,1,DVar4.unknown);
  if ((int)puVar5 == 0) {
    (*pcVar8)(param_1 + iVar3,param_2 + iVar3,DVar4.unknown);
    (**(code **)(lVar7 + 0x38))(param_1 + iVar3,0,1,DVar4.unknown);
  }
  else {
    puVar6 = &DAT_100fb7f78;
    FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
    _memcpy(param_1 + iVar3,param_2 + iVar3,*(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
  (*pcVar8)(param_1 + *(int *)(param_3 + 0x1c),param_2 + *(int *)(param_3 + 0x1c),DVar4.unknown);
  iVar3 = *(int *)(param_3 + 0x20);
  puVar5 = param_2 + iVar3;
  (*pcVar9)(puVar5,1,DVar4.unknown);
  if ((int)puVar5 == 0) {
    (*pcVar8)(param_1 + iVar3,param_2 + iVar3,DVar4.unknown);
    (**(code **)(lVar7 + 0x38))(param_1 + iVar3,0,1,DVar4.unknown);
  }
  else {
    puVar6 = &DAT_100fb7f78;
    FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
    _memcpy(param_1 + iVar3,param_2 + iVar3,*(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
  iVar3 = *(int *)(param_3 + 0x24);
  iVar2 = *(int *)(param_3 + 0x28);
  uVar1 = *(undefined8 *)((long)(param_2 + iVar3) + 8);
  *(undefined8 *)(param_1 + iVar3) = *(undefined8 *)(param_2 + iVar3);
  *(undefined8 *)((long)(param_1 + iVar3) + 8) = uVar1;
  uVar1 = *(undefined8 *)((long)(param_2 + iVar2) + 8);
  *(undefined8 *)(param_1 + iVar2) = *(undefined8 *)(param_2 + iVar2);
  *(undefined8 *)((long)(param_1 + iVar2) + 8) = uVar1;
  param_1[*(int *)(param_3 + 0x2c)] = param_2[*(int *)(param_3 + 0x2c)];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Address: 0x1002bd23c | FUN_1002bd23c */

undefined1 * FUN_1002bd23c(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined8 *puVar1;
  int iVar2;
  Date DVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  code *pcVar10;
  
  *param_1 = *param_2;
  iVar2 = *(int *)(param_3 + 0x14);
  DVar3 = Foundation::Date::typeMetadataAccessor();
  lVar8 = *(long *)(DVar3.unknown + -8);
  pcVar9 = *(code **)(lVar8 + 0x18);
  (*pcVar9)(param_1 + iVar2,param_2 + iVar2,DVar3.unknown);
  iVar2 = *(int *)(param_3 + 0x18);
  pcVar10 = *(code **)(lVar8 + 0x30);
  puVar4 = param_1 + iVar2;
  (*pcVar10)(puVar4,1,DVar3.unknown);
  puVar5 = param_2 + iVar2;
  (*pcVar10)(puVar5,1,DVar3.unknown);
  if ((int)puVar4 == 0) {
    if ((int)puVar5 != 0) {
      (**(code **)(lVar8 + 8))(param_1 + iVar2,DVar3.unknown);
      goto LAB_1002bd30c;
    }
    (*pcVar9)(param_1 + iVar2,param_2 + iVar2,DVar3.unknown);
  }
  else if ((int)puVar5 == 0) {
    (**(code **)(lVar8 + 0x10))(param_1 + iVar2,param_2 + iVar2,DVar3.unknown);
    (**(code **)(lVar8 + 0x38))(param_1 + iVar2,0,1,DVar3.unknown);
  }
  else {
LAB_1002bd30c:
    puVar6 = &DAT_100fb7f78;
    FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
    _memcpy(param_1 + iVar2,param_2 + iVar2,*(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
  (*pcVar9)(param_1 + *(int *)(param_3 + 0x1c),param_2 + *(int *)(param_3 + 0x1c),DVar3.unknown);
  iVar2 = *(int *)(param_3 + 0x20);
  puVar4 = param_1 + iVar2;
  (*pcVar10)(puVar4,1,DVar3.unknown);
  puVar5 = param_2 + iVar2;
  (*pcVar10)(puVar5,1,DVar3.unknown);
  if ((int)puVar4 == 0) {
    if ((int)puVar5 == 0) {
      (*pcVar9)(param_1 + iVar2,param_2 + iVar2,DVar3.unknown);
      goto LAB_1002bd3e4;
    }
    (**(code **)(lVar8 + 8))(param_1 + iVar2,DVar3.unknown);
  }
  else if ((int)puVar5 == 0) {
    (**(code **)(lVar8 + 0x10))(param_1 + iVar2,param_2 + iVar2,DVar3.unknown);
    (**(code **)(lVar8 + 0x38))(param_1 + iVar2,0,1,DVar3.unknown);
    goto LAB_1002bd3e4;
  }
  puVar6 = &DAT_100fb7f78;
  FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
  _memcpy(param_1 + iVar2,param_2 + iVar2,*(size_t *)(*(long *)(puVar6 + -8) + 0x40));
LAB_1002bd3e4:
  iVar2 = *(int *)(param_3 + 0x24);
  puVar1 = (undefined8 *)(param_1 + iVar2);
  *puVar1 = *(undefined8 *)(param_2 + iVar2);
  uVar7 = puVar1[1];
  puVar1[1] = *(undefined8 *)((long)(param_2 + iVar2) + 8);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar7);
  iVar2 = *(int *)(param_3 + 0x28);
  puVar1 = (undefined8 *)(param_1 + iVar2);
  *puVar1 = *(undefined8 *)(param_2 + iVar2);
  uVar7 = puVar1[1];
  puVar1[1] = *(undefined8 *)((long)(param_2 + iVar2) + 8);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar7);
  param_1[*(int *)(param_3 + 0x2c)] = param_2[*(int *)(param_3 + 0x2c)];
  return param_1;
}



/* Address: 0x1002bd490 | FUN_1002bd490 */

undefined1 * FUN_1002bd490(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  int iVar1;
  int iVar2;
  Date DVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  long lVar6;
  code *pcVar7;
  code *pcVar8;
  undefined8 uVar9;
  
  *param_1 = *param_2;
  iVar2 = *(int *)(param_3 + 0x14);
  DVar3 = Foundation::Date::typeMetadataAccessor();
  lVar6 = *(long *)(DVar3.unknown + -8);
  pcVar7 = *(code **)(lVar6 + 0x20);
  (*pcVar7)(param_1 + iVar2,param_2 + iVar2,DVar3.unknown);
  iVar2 = *(int *)(param_3 + 0x18);
  pcVar8 = *(code **)(lVar6 + 0x30);
  puVar4 = param_2 + iVar2;
  (*pcVar8)(puVar4,1,DVar3.unknown);
  if ((int)puVar4 == 0) {
    (*pcVar7)(param_1 + iVar2,param_2 + iVar2,DVar3.unknown);
    (**(code **)(lVar6 + 0x38))(param_1 + iVar2,0,1,DVar3.unknown);
  }
  else {
    puVar5 = &DAT_100fb7f78;
    FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
    _memcpy(param_1 + iVar2,param_2 + iVar2,*(size_t *)(*(long *)(puVar5 + -8) + 0x40));
  }
  (*pcVar7)(param_1 + *(int *)(param_3 + 0x1c),param_2 + *(int *)(param_3 + 0x1c),DVar3.unknown);
  iVar2 = *(int *)(param_3 + 0x20);
  puVar4 = param_2 + iVar2;
  (*pcVar8)(puVar4,1,DVar3.unknown);
  if ((int)puVar4 == 0) {
    (*pcVar7)(param_1 + iVar2,param_2 + iVar2,DVar3.unknown);
    (**(code **)(lVar6 + 0x38))(param_1 + iVar2,0,1,DVar3.unknown);
  }
  else {
    puVar5 = &DAT_100fb7f78;
    FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
    _memcpy(param_1 + iVar2,param_2 + iVar2,*(size_t *)(*(long *)(puVar5 + -8) + 0x40));
  }
  iVar2 = *(int *)(param_3 + 0x24);
  iVar1 = *(int *)(param_3 + 0x28);
  uVar9 = *(undefined8 *)(param_2 + iVar2);
  *(undefined8 *)((long)(param_1 + iVar2) + 8) = *(undefined8 *)((long)(param_2 + iVar2) + 8);
  *(undefined8 *)(param_1 + iVar2) = uVar9;
  uVar9 = *(undefined8 *)(param_2 + iVar1);
  *(undefined8 *)((long)(param_1 + iVar1) + 8) = *(undefined8 *)((long)(param_2 + iVar1) + 8);
  *(undefined8 *)(param_1 + iVar1) = uVar9;
  param_1[*(int *)(param_3 + 0x2c)] = param_2[*(int *)(param_3 + 0x2c)];
  return param_1;
}



/* Address: 0x1002bd610 | FUN_1002bd610 */

undefined1 * FUN_1002bd610(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  Date DVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  code *pcVar10;
  code *pcVar11;
  
  *param_1 = *param_2;
  iVar3 = *(int *)(param_3 + 0x14);
  DVar4 = Foundation::Date::typeMetadataAccessor();
  lVar9 = *(long *)(DVar4.unknown + -8);
  pcVar10 = *(code **)(lVar9 + 0x28);
  (*pcVar10)(param_1 + iVar3,param_2 + iVar3,DVar4.unknown);
  iVar3 = *(int *)(param_3 + 0x18);
  pcVar11 = *(code **)(lVar9 + 0x30);
  puVar5 = param_1 + iVar3;
  (*pcVar11)(puVar5,1,DVar4.unknown);
  puVar6 = param_2 + iVar3;
  (*pcVar11)(puVar6,1,DVar4.unknown);
  if ((int)puVar5 == 0) {
    if ((int)puVar6 != 0) {
      (**(code **)(lVar9 + 8))(param_1 + iVar3,DVar4.unknown);
      goto LAB_1002bd6e0;
    }
    (*pcVar10)(param_1 + iVar3,param_2 + iVar3,DVar4.unknown);
  }
  else if ((int)puVar6 == 0) {
    (**(code **)(lVar9 + 0x20))(param_1 + iVar3,param_2 + iVar3,DVar4.unknown);
    (**(code **)(lVar9 + 0x38))(param_1 + iVar3,0,1,DVar4.unknown);
  }
  else {
LAB_1002bd6e0:
    puVar7 = &DAT_100fb7f78;
    FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
    _memcpy(param_1 + iVar3,param_2 + iVar3,*(size_t *)(*(long *)(puVar7 + -8) + 0x40));
  }
  (*pcVar10)(param_1 + *(int *)(param_3 + 0x1c),param_2 + *(int *)(param_3 + 0x1c),DVar4.unknown);
  iVar3 = *(int *)(param_3 + 0x20);
  puVar5 = param_1 + iVar3;
  (*pcVar11)(puVar5,1,DVar4.unknown);
  puVar6 = param_2 + iVar3;
  (*pcVar11)(puVar6,1,DVar4.unknown);
  if ((int)puVar5 == 0) {
    if ((int)puVar6 == 0) {
      (*pcVar10)(param_1 + iVar3,param_2 + iVar3,DVar4.unknown);
      goto LAB_1002bd7b8;
    }
    (**(code **)(lVar9 + 8))(param_1 + iVar3,DVar4.unknown);
  }
  else if ((int)puVar6 == 0) {
    (**(code **)(lVar9 + 0x20))(param_1 + iVar3,param_2 + iVar3,DVar4.unknown);
    (**(code **)(lVar9 + 0x38))(param_1 + iVar3,0,1,DVar4.unknown);
    goto LAB_1002bd7b8;
  }
  puVar7 = &DAT_100fb7f78;
  FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
  _memcpy(param_1 + iVar3,param_2 + iVar3,*(size_t *)(*(long *)(puVar7 + -8) + 0x40));
LAB_1002bd7b8:
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x24));
  uVar2 = *(undefined8 *)((long)(param_2 + *(int *)(param_3 + 0x24)) + 8);
  uVar8 = puVar1[1];
  *puVar1 = *(undefined8 *)(param_2 + *(int *)(param_3 + 0x24));
  puVar1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar8);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x28));
  uVar2 = *(undefined8 *)((long)(param_2 + *(int *)(param_3 + 0x28)) + 8);
  uVar8 = puVar1[1];
  *puVar1 = *(undefined8 *)(param_2 + *(int *)(param_3 + 0x28));
  puVar1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar8);
  param_1[*(int *)(param_3 + 0x2c)] = param_2[*(int *)(param_3 + 0x2c)];
  return param_1;
}



/* Address: 0x1002bd844 | FUN_1002bd844 */

void FUN_1002bd844(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1002bd850 | FUN_1002bd850 */

ulong FUN_1002bd850(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  Date DVar2;
  long lVar3;
  ulong uVar4;
  
  DVar2 = Foundation::Date::typeMetadataAccessor();
  lVar3 = *(long *)(DVar2.unknown + -8);
  if ((int)param_2 == *(int *)(lVar3 + 0x54)) {
    iVar1 = *(int *)(param_3 + 0x14);
  }
  else {
    DVar2.unknown = &DAT_100fb7f78;
    FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
    lVar3 = *(long *)(DVar2.unknown + -8);
    if ((int)param_2 != *(int *)(lVar3 + 0x54)) {
      uVar4 = *(ulong *)(param_1 + *(int *)(param_3 + 0x24) + 8);
      if (0xfffffffe < uVar4) {
        uVar4 = 0xffffffff;
      }
      return (ulong)((int)uVar4 + 1);
    }
    iVar1 = *(int *)(param_3 + 0x18);
  }
  uVar4 = param_1 + iVar1;
                    /* WARNING: Could not recover jumptable at 0x0001002bd8d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x30))(uVar4,param_2,DVar2.unknown);
  return uVar4;
}



/* Address: 0x1002bd904 | FUN_1002bd904 */

void FUN_1002bd904(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1002bd910 | FUN_1002bd910 */

void FUN_1002bd910(long param_1,undefined8 param_2,int param_3,long param_4)

{
  int iVar1;
  Date DVar2;
  long lVar3;
  
  DVar2 = Foundation::Date::typeMetadataAccessor();
  lVar3 = *(long *)(DVar2.unknown + -8);
  if (param_3 == *(int *)(lVar3 + 0x54)) {
    iVar1 = *(int *)(param_4 + 0x14);
  }
  else {
    DVar2.unknown = &DAT_100fb7f78;
    FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
    lVar3 = *(long *)(DVar2.unknown + -8);
    if (param_3 != *(int *)(lVar3 + 0x54)) {
      *(ulong *)(param_1 + *(int *)(param_4 + 0x24) + 8) = (ulong)((int)param_2 - 1);
      return;
    }
    iVar1 = *(int *)(param_4 + 0x18);
  }
                    /* WARNING: Could not recover jumptable at 0x0001002bd99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x38))(param_1 + iVar1,param_2,param_2,DVar2.unknown);
  return;
}



/* Address: 0x1002bd9c0 | FUN_1002bd9c0 */

void FUN_1002bd9c0(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100fbc000,&TargetStructDescriptor_100caad3c);
  return;
}



/* Address: 0x1002bd9d4 | FUN_1002bd9d4 */

void FUN_1002bd9d4(long param_1,ulong param_2)

{
  Date DVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined *local_60;
  long local_58;
  long local_50;
  long lStack_48;
  long local_40;
  undefined *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  
  local_60 = &DAT_100c3c978;
  DVar1 = Foundation::Date::typeMetadataAccessor();
  if (param_2 < 0x40) {
    lVar4 = *(long *)(DVar1.unknown + -8);
    puVar3 = &DAT_100fb8028;
    lVar2 = 0x13f;
    local_58 = lVar4 + 0x40;
    FUN_1001a1320(0x13f,&DAT_100fb8028,PTR_typeMetadataAccessor_100ea7480);
    if (puVar3 < (undefined8 *)0x40) {
      local_50 = *(long *)(lVar2 + -8) + 0x40;
      puStack_38 = &DAT_100c3c990;
      local_30 = &DAT_100c3c990;
      puStack_28 = &DAT_100c3c9a8;
      lStack_48 = lVar4 + 0x40;
      local_40 = local_50;
      _swift_initStructMetadata(param_1,0x100,8,&local_60,param_1 + 0x10);
    }
  }
  return;
}



/* Address: 0x1002bda8c | FUN_1002bda8c */

undefined8 FUN_1002bda8c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1002bd9c0();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x1002bdad0 | FUN_1002bdad0 */

void FUN_1002bdad0(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100fbc170,&TargetStructDescriptor_100caad64);
  return;
}



/* Address: 0x1002bdae4 | FUN_1002bdae4 */

void FUN_1002bdae4(void *param_1,ulong param_2)

{
  byte bVar1;
  long *plVar2;
  UnownedSerialExecutor UVar3;
  long unaff_x22;
  String isolation;
  
  *(void **)(unaff_x22 + 0x60) = param_1;
  *(ulong *)(unaff_x22 + 0x68) = param_2;
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar1 & 1) != 0) {
    plVar2 = (long *)(ulong)*(uint *)(PTR__withCheckedThrowingContinuation_100eaefc8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x70) = plVar2;
    FUN_1002bcde4();
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_1002bdbe4;
    isolation.bridgeObject = param_1;
    isolation.str = (char *)(unaff_x22 + 0x50);
    Swift::_withCheckedThrowingContinuation(isolation);
    return;
  }
  if (param_1 == (void *)0x0) {
    UVar3.unknown = (undefined *)0x0;
    param_2 = 0;
  }
  else {
    _swift_getObjectType(param_1);
    param_2 = param_2 & 0xcfffffffffffffff;
    UVar3 = Swift::Actor::get_unownedExecutor();
  }
  _swift_task_switch(FUN_1002bdc68,UVar3.unknown,param_2);
  return;
}



/* Address: 0x1002bdbe4 | FUN_1002bdbe4 */

void FUN_1002bdbe4(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x70));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar4 + 0x78) = *(undefined8 *)(lVar4 + 0x50);
    uVar1 = *(undefined8 *)(lVar4 + 0x60);
    uVar3 = *(undefined8 *)(lVar4 + 0x68);
    FUN_1000da368(uVar1,uVar3);
    pcVar2 = FUN_1002bde74;
  }
  else {
    *(long *)(lVar4 + 0x80) = unaff_x20;
    uVar1 = *(undefined8 *)(lVar4 + 0x60);
    uVar3 = *(undefined8 *)(lVar4 + 0x68);
    FUN_1000da368(uVar1,uVar3);
    pcVar2 = FUN_1002bde84;
  }
  _swift_task_switch(pcVar2,uVar1,uVar3);
  return;
}



/* Address: 0x1002bdc68 | FUN_1002bdc68 */

void FUN_1002bdc68(void)

{
  UnsafeContinuation<undefined,undefined> continuation;
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long unaff_x22;
  long lVar6;
  long lVar7;
  ulong uVar8;
  String function;
  
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x58;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1002bdde4;
  continuation.unknown = (undefined *)(unaff_x22 + 0x10);
  _swift_continuation_init(continuation.unknown,1);
  puVar1 = &DAT_100fbc108;
  FUN_1000037f0(&DAT_100fbc108,&DAT_100c3c9c8);
  lVar7 = *(long *)(puVar1 + -8);
  lVar6 = *(long *)(lVar7 + 0x40);
  uVar3 = lVar6 + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar2);
  FUN_1002bcde4();
  FUN_1000037f0(&DAT_100fb8200,&DAT_100c38350);
  function.bridgeObject = (void *)0xe900000000000029;
  function.str = (char *)0x2868736572666572;
  Swift::CheckedContinuation::init(continuation,function);
  FUN_100438d28(0);
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar3);
  (**(code **)(lVar7 + 0x10))();
  uVar5 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar8 = uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff);
  puVar4 = &DAT_100ec6ae8;
  _swift_allocObject(&DAT_100ec6ae8,uVar8 + lVar6,uVar5 | 7);
  (**(code **)(lVar7 + 0x20))(puVar4 + uVar8,uVar3,puVar1);
  FUN_10042f7e4(thunk_FUN_1002bdefc,puVar4);
  _swift_release(puVar4);
  (**(code **)(lVar7 + 8))(uVar2,puVar1);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar2);
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x1002bdde4 | FUN_1002bdde4 */

void FUN_1002bdde4(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  lVar5 = *(long *)(lVar4 + 0x30);
  if (lVar5 == 0) {
    uVar1 = *(undefined8 *)(lVar4 + 0x60);
    *(undefined8 *)(lVar4 + 0x78) = *(undefined8 *)(lVar4 + 0x58);
    uVar3 = *(undefined8 *)(lVar4 + 0x68);
    FUN_1000da368(uVar1,uVar3);
    pcVar2 = FUN_1002bde74;
  }
  else {
    _swift_willThrow();
    *(long *)(lVar4 + 0x80) = lVar5;
    uVar1 = *(undefined8 *)(lVar4 + 0x60);
    uVar3 = *(undefined8 *)(lVar4 + 0x68);
    FUN_1000da368(uVar1,uVar3);
    pcVar2 = FUN_1002bde84;
  }
  _swift_task_switch(pcVar2,uVar1,uVar3);
  return;
}



/* Address: 0x1002bde74 | FUN_1002bde74 */

void FUN_1002bde74(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x0001002bde80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x78));
  return;
}



/* Address: 0x1002bde84 | FUN_1002bde84 */

void FUN_1002bde84(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x0001002bde8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1002bde90 | thunk_FUN_1002bde98 */

void thunk_FUN_1002bde98(void)

{
  FUN_1002bde98();
  return;
}



/* Address: 0x1002bde94 | thunk_FUN_1002bdefc */

void thunk_FUN_1002bdefc(void)

{
  FUN_1002bdefc();
  return;
}



/* Address: 0x1002bde98 | FUN_1002bde98 */

void FUN_1002bde98(void)

{
  undefined *puVar1;
  ulong uVar2;
  long unaff_x20;
  
  puVar1 = &DAT_100fbc108;
  FUN_1000037f0(&DAT_100fbc108,&DAT_100c3c9c8);
  uVar2 = (ulong)*(byte *)(*(long *)(puVar1 + -8) + 0x50);
  (**(code **)(*(long *)(puVar1 + -8) + 8))
            (unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)),puVar1);
  _swift_deallocObject();
  return;
}



/* Address: 0x1002bdefc | FUN_1002bdefc */

void FUN_1002bdefc(undefined8 param_1)

{
  undefined *puVar1;
  long unaff_x20;
  
  puVar1 = &DAT_100fbc108;
  FUN_1000037f0(&DAT_100fbc108,&DAT_100c3c9c8);
  FUN_1002bcd28(param_1,unaff_x20 +
                        ((ulong)*(byte *)(*(long *)(puVar1 + -8) + 0x50) + 0x10 &
                        ((ulong)*(byte *)(*(long *)(puVar1 + -8) + 0x50) ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x1002bdf44 | FUN_1002bdf44 */

long * FUN_1002bdf44(long *param_1,long *param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined1 *puVar7;
  Date DVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  code *pcVar14;
  
  uVar4 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar4 >> 0x11 & 1) == 0) {
    lVar6 = *param_2;
    lVar12 = param_2[3];
    lVar11 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = lVar6;
    param_1[3] = lVar12;
    param_1[2] = lVar11;
    puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
    puVar2 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
    lVar6 = 0;
    FUN_1002bd9c0();
    lVar11 = *(long *)(lVar6 + -8);
    puVar7 = puVar2;
    (**(code **)(lVar11 + 0x30))(puVar2,1,lVar6);
    if ((int)puVar7 == 0) {
      *puVar1 = *puVar2;
      iVar5 = *(int *)(lVar6 + 0x14);
      DVar8 = Foundation::Date::typeMetadataAccessor();
      lVar12 = *(long *)(DVar8.unknown + -8);
      pcVar13 = *(code **)(lVar12 + 0x10);
      (*pcVar13)(puVar1 + iVar5,puVar2 + iVar5,DVar8.unknown);
      iVar5 = *(int *)(lVar6 + 0x18);
      pcVar14 = *(code **)(lVar12 + 0x30);
      puVar7 = puVar2 + iVar5;
      (*pcVar14)(puVar7,1,DVar8.unknown);
      if ((int)puVar7 == 0) {
        (*pcVar13)(puVar1 + iVar5,puVar2 + iVar5,DVar8.unknown);
        (**(code **)(lVar12 + 0x38))(puVar1 + iVar5,0,1,DVar8.unknown);
      }
      else {
        puVar9 = &DAT_100fb7f78;
        FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
        _memcpy(puVar1 + iVar5,puVar2 + iVar5,*(size_t *)(*(long *)(puVar9 + -8) + 0x40));
      }
      (*pcVar13)(puVar1 + *(int *)(lVar6 + 0x1c),puVar2 + *(int *)(lVar6 + 0x1c),DVar8.unknown);
      iVar5 = *(int *)(lVar6 + 0x20);
      puVar7 = puVar2 + iVar5;
      (*pcVar14)(puVar7,1,DVar8.unknown);
      if ((int)puVar7 == 0) {
        (*pcVar13)(puVar1 + iVar5,puVar2 + iVar5,DVar8.unknown);
        (**(code **)(lVar12 + 0x38))(puVar1 + iVar5,0,1,DVar8.unknown);
      }
      else {
        puVar9 = &DAT_100fb7f78;
        FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
        _memcpy(puVar1 + iVar5,puVar2 + iVar5,*(size_t *)(*(long *)(puVar9 + -8) + 0x40));
      }
      iVar5 = *(int *)(lVar6 + 0x24);
      uVar3 = *(undefined8 *)((long)(puVar2 + iVar5) + 8);
      *(undefined8 *)(puVar1 + iVar5) = *(undefined8 *)(puVar2 + iVar5);
      *(undefined8 *)((long)(puVar1 + iVar5) + 8) = uVar3;
      iVar5 = *(int *)(lVar6 + 0x28);
      uVar3 = *(undefined8 *)((long)(puVar2 + iVar5) + 8);
      *(undefined8 *)(puVar1 + iVar5) = *(undefined8 *)(puVar2 + iVar5);
      *(undefined8 *)((long)(puVar1 + iVar5) + 8) = uVar3;
      puVar1[*(int *)(lVar6 + 0x2c)] = puVar2[*(int *)(lVar6 + 0x2c)];
      pcVar13 = *(code **)(lVar11 + 0x38);
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar3);
      (*pcVar13)(puVar1,0,1,lVar6);
    }
    else {
      puVar9 = &DAT_100fbc110;
      FUN_1000037f0(&DAT_100fbc110,&DAT_100c3c9d8);
      _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar9 + -8) + 0x40));
    }
  }
  else {
    lVar6 = *param_2;
    *param_1 = lVar6;
    uVar10 = (ulong)uVar4 & 0xff;
    param_1 = (long *)(lVar6 + (uVar10 + 0x10 & (uVar10 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1002be190 | FUN_1002be190 */

void FUN_1002be190(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  Date DVar3;
  code *pcVar4;
  code *pcVar5;
  long lVar6;
  
  param_1 = param_1 + *(int *)(param_2 + 0x20);
  lVar2 = 0;
  FUN_1002bd9c0();
  lVar6 = param_1;
  (**(code **)(*(long *)(lVar2 + -8) + 0x30))(param_1,1,lVar2);
  if ((int)lVar6 != 0) {
    return;
  }
  iVar1 = *(int *)(lVar2 + 0x14);
  DVar3 = Foundation::Date::typeMetadataAccessor();
  lVar6 = *(long *)(DVar3.unknown + -8);
  pcVar4 = *(code **)(lVar6 + 8);
  (*pcVar4)(param_1 + iVar1,DVar3.unknown);
  iVar1 = *(int *)(lVar2 + 0x18);
  pcVar5 = *(code **)(lVar6 + 0x30);
  lVar6 = param_1 + iVar1;
  (*pcVar5)(lVar6,1,DVar3.unknown);
  if ((int)lVar6 == 0) {
    (*pcVar4)(param_1 + iVar1,DVar3.unknown);
  }
  (*pcVar4)(param_1 + *(int *)(lVar2 + 0x1c),DVar3.unknown);
  iVar1 = *(int *)(lVar2 + 0x20);
  lVar6 = param_1 + iVar1;
  (*pcVar5)(lVar6,1,DVar3.unknown);
  if ((int)lVar6 == 0) {
    (*pcVar4)(param_1 + iVar1,DVar3.unknown);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar2 + 0x24) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar2 + 0x28) + 8));
  return;
}



/* Address: 0x1002be2a4 | FUN_1002be2a4 */

undefined8 * FUN_1002be2a4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  long lVar4;
  undefined1 *puVar5;
  Date DVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar12 = *param_2;
  uVar14 = param_2[3];
  uVar13 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar12;
  param_1[3] = uVar14;
  param_1[2] = uVar13;
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar2 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  lVar4 = 0;
  FUN_1002bd9c0();
  lVar8 = *(long *)(lVar4 + -8);
  puVar5 = puVar2;
  (**(code **)(lVar8 + 0x30))(puVar2,1,lVar4);
  if ((int)puVar5 == 0) {
    *puVar1 = *puVar2;
    iVar3 = *(int *)(lVar4 + 0x14);
    DVar6 = Foundation::Date::typeMetadataAccessor();
    lVar9 = *(long *)(DVar6.unknown + -8);
    pcVar10 = *(code **)(lVar9 + 0x10);
    (*pcVar10)(puVar1 + iVar3,puVar2 + iVar3,DVar6.unknown);
    iVar3 = *(int *)(lVar4 + 0x18);
    pcVar11 = *(code **)(lVar9 + 0x30);
    puVar5 = puVar2 + iVar3;
    (*pcVar11)(puVar5,1,DVar6.unknown);
    if ((int)puVar5 == 0) {
      (*pcVar10)(puVar1 + iVar3,puVar2 + iVar3,DVar6.unknown);
      (**(code **)(lVar9 + 0x38))(puVar1 + iVar3,0,1,DVar6.unknown);
    }
    else {
      puVar7 = &DAT_100fb7f78;
      FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
      _memcpy(puVar1 + iVar3,puVar2 + iVar3,*(size_t *)(*(long *)(puVar7 + -8) + 0x40));
    }
    (*pcVar10)(puVar1 + *(int *)(lVar4 + 0x1c),puVar2 + *(int *)(lVar4 + 0x1c),DVar6.unknown);
    iVar3 = *(int *)(lVar4 + 0x20);
    puVar5 = puVar2 + iVar3;
    (*pcVar11)(puVar5,1,DVar6.unknown);
    if ((int)puVar5 == 0) {
      (*pcVar10)(puVar1 + iVar3,puVar2 + iVar3,DVar6.unknown);
      (**(code **)(lVar9 + 0x38))(puVar1 + iVar3,0,1,DVar6.unknown);
    }
    else {
      puVar7 = &DAT_100fb7f78;
      FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
      _memcpy(puVar1 + iVar3,puVar2 + iVar3,*(size_t *)(*(long *)(puVar7 + -8) + 0x40));
    }
    iVar3 = *(int *)(lVar4 + 0x24);
    uVar12 = *(undefined8 *)((long)(puVar2 + iVar3) + 8);
    *(undefined8 *)(puVar1 + iVar3) = *(undefined8 *)(puVar2 + iVar3);
    *(undefined8 *)((long)(puVar1 + iVar3) + 8) = uVar12;
    iVar3 = *(int *)(lVar4 + 0x28);
    uVar12 = *(undefined8 *)((long)(puVar2 + iVar3) + 8);
    *(undefined8 *)(puVar1 + iVar3) = *(undefined8 *)(puVar2 + iVar3);
    *(undefined8 *)((long)(puVar1 + iVar3) + 8) = uVar12;
    puVar1[*(int *)(lVar4 + 0x2c)] = puVar2[*(int *)(lVar4 + 0x2c)];
    pcVar10 = *(code **)(lVar8 + 0x38);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar12);
    (*pcVar10)(puVar1,0,1,lVar4);
  }
  else {
    puVar7 = &DAT_100fbc110;
    FUN_1000037f0(&DAT_100fbc110,&DAT_100c3c9d8);
    _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar7 + -8) + 0x40));
  }
  return param_1;
}



/* Address: 0x1002be4c4 | FUN_1002be4c4 */

undefined8 * FUN_1002be4c4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  Date DVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  code *pcVar14;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar2 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  lVar5 = 0;
  FUN_1002bd9c0();
  lVar11 = *(long *)(lVar5 + -8);
  pcVar12 = *(code **)(lVar11 + 0x30);
  puVar6 = puVar1;
  (*pcVar12)(puVar1,1,lVar5);
  puVar7 = puVar2;
  (*pcVar12)(puVar2,1,lVar5);
  if ((int)puVar6 != 0) {
    if ((int)puVar7 == 0) {
      *puVar1 = *puVar2;
      iVar4 = *(int *)(lVar5 + 0x14);
      DVar8 = Foundation::Date::typeMetadataAccessor();
      lVar13 = *(long *)(DVar8.unknown + -8);
      pcVar12 = *(code **)(lVar13 + 0x10);
      (*pcVar12)(puVar1 + iVar4,puVar2 + iVar4,DVar8.unknown);
      iVar4 = *(int *)(lVar5 + 0x18);
      pcVar14 = *(code **)(lVar13 + 0x30);
      puVar6 = puVar2 + iVar4;
      (*pcVar14)(puVar6,1,DVar8.unknown);
      if ((int)puVar6 == 0) {
        (*pcVar12)(puVar1 + iVar4,puVar2 + iVar4,DVar8.unknown);
        (**(code **)(lVar13 + 0x38))(puVar1 + iVar4,0,1,DVar8.unknown);
      }
      else {
        puVar9 = &DAT_100fb7f78;
        FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
        _memcpy(puVar1 + iVar4,puVar2 + iVar4,*(size_t *)(*(long *)(puVar9 + -8) + 0x40));
      }
      (*pcVar12)(puVar1 + *(int *)(lVar5 + 0x1c),puVar2 + *(int *)(lVar5 + 0x1c),DVar8.unknown);
      iVar4 = *(int *)(lVar5 + 0x20);
      puVar6 = puVar2 + iVar4;
      (*pcVar14)(puVar6,1,DVar8.unknown);
      if ((int)puVar6 == 0) {
        (*pcVar12)(puVar1 + iVar4,puVar2 + iVar4,DVar8.unknown);
        (**(code **)(lVar13 + 0x38))(puVar1 + iVar4,0,1,DVar8.unknown);
      }
      else {
        puVar9 = &DAT_100fb7f78;
        FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
        _memcpy(puVar1 + iVar4,puVar2 + iVar4,*(size_t *)(*(long *)(puVar9 + -8) + 0x40));
      }
      iVar4 = *(int *)(lVar5 + 0x24);
      *(undefined8 *)(puVar1 + iVar4) = *(undefined8 *)(puVar2 + iVar4);
      *(undefined8 *)((long)(puVar1 + iVar4) + 8) = *(undefined8 *)((long)(puVar2 + iVar4) + 8);
      iVar4 = *(int *)(lVar5 + 0x28);
      *(undefined8 *)(puVar1 + iVar4) = *(undefined8 *)(puVar2 + iVar4);
      uVar10 = *(undefined8 *)((long)(puVar2 + iVar4) + 8);
      *(undefined8 *)((long)(puVar1 + iVar4) + 8) = uVar10;
      puVar1[*(int *)(lVar5 + 0x2c)] = puVar2[*(int *)(lVar5 + 0x2c)];
      pcVar12 = *(code **)(lVar11 + 0x38);
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar10);
      (*pcVar12)(puVar1,0,1,lVar5);
      return param_1;
    }
LAB_1002be5dc:
    puVar9 = &DAT_100fbc110;
    FUN_1000037f0(&DAT_100fbc110,&DAT_100c3c9d8);
    _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar9 + -8) + 0x40));
    return param_1;
  }
  if ((int)puVar7 != 0) {
    FUN_10005241c(puVar1,FUN_1002bd9c0);
    goto LAB_1002be5dc;
  }
  *puVar1 = *puVar2;
  iVar4 = *(int *)(lVar5 + 0x14);
  DVar8 = Foundation::Date::typeMetadataAccessor();
  lVar11 = *(long *)(DVar8.unknown + -8);
  pcVar12 = *(code **)(lVar11 + 0x18);
  (*pcVar12)(puVar1 + iVar4,puVar2 + iVar4,DVar8.unknown);
  iVar4 = *(int *)(lVar5 + 0x18);
  pcVar14 = *(code **)(lVar11 + 0x30);
  puVar6 = puVar1 + iVar4;
  (*pcVar14)(puVar6,1,DVar8.unknown);
  puVar7 = puVar2 + iVar4;
  (*pcVar14)(puVar7,1,DVar8.unknown);
  if ((int)puVar6 == 0) {
    if ((int)puVar7 != 0) {
      (**(code **)(lVar11 + 8))(puVar1 + iVar4,DVar8.unknown);
      goto LAB_1002be7c4;
    }
    (*pcVar12)(puVar1 + iVar4,puVar2 + iVar4,DVar8.unknown);
  }
  else if ((int)puVar7 == 0) {
    (**(code **)(lVar11 + 0x10))(puVar1 + iVar4,puVar2 + iVar4,DVar8.unknown);
    (**(code **)(lVar11 + 0x38))(puVar1 + iVar4,0,1,DVar8.unknown);
  }
  else {
LAB_1002be7c4:
    puVar9 = &DAT_100fb7f78;
    FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
    _memcpy(puVar1 + iVar4,puVar2 + iVar4,*(size_t *)(*(long *)(puVar9 + -8) + 0x40));
  }
  (*pcVar12)(puVar1 + *(int *)(lVar5 + 0x1c),puVar2 + *(int *)(lVar5 + 0x1c),DVar8.unknown);
  iVar4 = *(int *)(lVar5 + 0x20);
  puVar6 = puVar1 + iVar4;
  (*pcVar14)(puVar6,1,DVar8.unknown);
  puVar7 = puVar2 + iVar4;
  (*pcVar14)(puVar7,1,DVar8.unknown);
  if ((int)puVar6 == 0) {
    if ((int)puVar7 == 0) {
      (*pcVar12)(puVar1 + iVar4,puVar2 + iVar4,DVar8.unknown);
      goto LAB_1002be89c;
    }
    (**(code **)(lVar11 + 8))(puVar1 + iVar4,DVar8.unknown);
  }
  else if ((int)puVar7 == 0) {
    (**(code **)(lVar11 + 0x10))(puVar1 + iVar4,puVar2 + iVar4,DVar8.unknown);
    (**(code **)(lVar11 + 0x38))(puVar1 + iVar4,0,1,DVar8.unknown);
    goto LAB_1002be89c;
  }
  puVar9 = &DAT_100fb7f78;
  FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
  _memcpy(puVar1 + iVar4,puVar2 + iVar4,*(size_t *)(*(long *)(puVar9 + -8) + 0x40));
LAB_1002be89c:
  iVar4 = *(int *)(lVar5 + 0x24);
  puVar3 = (undefined8 *)(puVar1 + iVar4);
  *puVar3 = *(undefined8 *)(puVar2 + iVar4);
  uVar10 = puVar3[1];
  puVar3[1] = *(undefined8 *)((long)(puVar2 + iVar4) + 8);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar10);
  iVar4 = *(int *)(lVar5 + 0x28);
  puVar3 = (undefined8 *)(puVar1 + iVar4);
  *puVar3 = *(undefined8 *)(puVar2 + iVar4);
  uVar10 = puVar3[1];
  puVar3[1] = *(undefined8 *)((long)(puVar2 + iVar4) + 8);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar10);
  puVar1[*(int *)(lVar5 + 0x2c)] = puVar2[*(int *)(lVar5 + 0x2c)];
  return param_1;
}



/* Address: 0x1002be948 | FUN_1002be948 */

undefined8 * FUN_1002be948(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  long lVar4;
  undefined1 *puVar5;
  Date DVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar12 = *param_2;
  uVar14 = param_2[3];
  uVar13 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar12;
  param_1[3] = uVar14;
  param_1[2] = uVar13;
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar2 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  lVar4 = 0;
  FUN_1002bd9c0();
  lVar8 = *(long *)(lVar4 + -8);
  puVar5 = puVar2;
  (**(code **)(lVar8 + 0x30))(puVar2,1,lVar4);
  if ((int)puVar5 == 0) {
    *puVar1 = *puVar2;
    iVar3 = *(int *)(lVar4 + 0x14);
    DVar6 = Foundation::Date::typeMetadataAccessor();
    lVar9 = *(long *)(DVar6.unknown + -8);
    pcVar10 = *(code **)(lVar9 + 0x20);
    (*pcVar10)(puVar1 + iVar3,puVar2 + iVar3,DVar6.unknown);
    iVar3 = *(int *)(lVar4 + 0x18);
    pcVar11 = *(code **)(lVar9 + 0x30);
    puVar5 = puVar2 + iVar3;
    (*pcVar11)(puVar5,1,DVar6.unknown);
    if ((int)puVar5 == 0) {
      (*pcVar10)(puVar1 + iVar3,puVar2 + iVar3,DVar6.unknown);
      (**(code **)(lVar9 + 0x38))(puVar1 + iVar3,0,1,DVar6.unknown);
    }
    else {
      puVar7 = &DAT_100fb7f78;
      FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
      _memcpy(puVar1 + iVar3,puVar2 + iVar3,*(size_t *)(*(long *)(puVar7 + -8) + 0x40));
    }
    (*pcVar10)(puVar1 + *(int *)(lVar4 + 0x1c),puVar2 + *(int *)(lVar4 + 0x1c),DVar6.unknown);
    iVar3 = *(int *)(lVar4 + 0x20);
    puVar5 = puVar2 + iVar3;
    (*pcVar11)(puVar5,1,DVar6.unknown);
    if ((int)puVar5 == 0) {
      (*pcVar10)(puVar1 + iVar3,puVar2 + iVar3,DVar6.unknown);
      (**(code **)(lVar9 + 0x38))(puVar1 + iVar3,0,1,DVar6.unknown);
    }
    else {
      puVar7 = &DAT_100fb7f78;
      FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
      _memcpy(puVar1 + iVar3,puVar2 + iVar3,*(size_t *)(*(long *)(puVar7 + -8) + 0x40));
    }
    iVar3 = *(int *)(lVar4 + 0x24);
    uVar12 = *(undefined8 *)(puVar2 + iVar3);
    *(undefined8 *)((long)(puVar1 + iVar3) + 8) = *(undefined8 *)((long)(puVar2 + iVar3) + 8);
    *(undefined8 *)(puVar1 + iVar3) = uVar12;
    iVar3 = *(int *)(lVar4 + 0x28);
    uVar12 = *(undefined8 *)(puVar2 + iVar3);
    *(undefined8 *)((long)(puVar1 + iVar3) + 8) = *(undefined8 *)((long)(puVar2 + iVar3) + 8);
    *(undefined8 *)(puVar1 + iVar3) = uVar12;
    puVar1[*(int *)(lVar4 + 0x2c)] = puVar2[*(int *)(lVar4 + 0x2c)];
    (**(code **)(lVar8 + 0x38))(puVar1,0,1,lVar4);
  }
  else {
    puVar7 = &DAT_100fbc110;
    FUN_1000037f0(&DAT_100fbc110,&DAT_100c3c9d8);
    _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar7 + -8) + 0x40));
  }
  return param_1;
}



/* Address: 0x1002beb4c | FUN_1002beb4c */

undefined8 * FUN_1002beb4c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  Date DVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  code *pcVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  uVar15 = *param_2;
  uVar16 = param_2[3];
  uVar10 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar15;
  param_1[3] = uVar16;
  param_1[2] = uVar10;
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar2 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  lVar5 = 0;
  FUN_1002bd9c0();
  lVar11 = *(long *)(lVar5 + -8);
  pcVar12 = *(code **)(lVar11 + 0x30);
  puVar6 = puVar1;
  (*pcVar12)(puVar1,1,lVar5);
  puVar7 = puVar2;
  (*pcVar12)(puVar2,1,lVar5);
  if ((int)puVar6 != 0) {
    if ((int)puVar7 == 0) {
      *puVar1 = *puVar2;
      iVar4 = *(int *)(lVar5 + 0x14);
      DVar8 = Foundation::Date::typeMetadataAccessor();
      lVar13 = *(long *)(DVar8.unknown + -8);
      pcVar12 = *(code **)(lVar13 + 0x20);
      (*pcVar12)(puVar1 + iVar4,puVar2 + iVar4,DVar8.unknown);
      iVar4 = *(int *)(lVar5 + 0x18);
      pcVar14 = *(code **)(lVar13 + 0x30);
      puVar6 = puVar2 + iVar4;
      (*pcVar14)(puVar6,1,DVar8.unknown);
      if ((int)puVar6 == 0) {
        (*pcVar12)(puVar1 + iVar4,puVar2 + iVar4,DVar8.unknown);
        (**(code **)(lVar13 + 0x38))(puVar1 + iVar4,0,1,DVar8.unknown);
      }
      else {
        puVar9 = &DAT_100fb7f78;
        FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
        _memcpy(puVar1 + iVar4,puVar2 + iVar4,*(size_t *)(*(long *)(puVar9 + -8) + 0x40));
      }
      (*pcVar12)(puVar1 + *(int *)(lVar5 + 0x1c),puVar2 + *(int *)(lVar5 + 0x1c),DVar8.unknown);
      iVar4 = *(int *)(lVar5 + 0x20);
      puVar6 = puVar2 + iVar4;
      (*pcVar14)(puVar6,1,DVar8.unknown);
      if ((int)puVar6 == 0) {
        (*pcVar12)(puVar1 + iVar4,puVar2 + iVar4,DVar8.unknown);
        (**(code **)(lVar13 + 0x38))(puVar1 + iVar4,0,1,DVar8.unknown);
      }
      else {
        puVar9 = &DAT_100fb7f78;
        FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
        _memcpy(puVar1 + iVar4,puVar2 + iVar4,*(size_t *)(*(long *)(puVar9 + -8) + 0x40));
      }
      iVar4 = *(int *)(lVar5 + 0x24);
      uVar15 = *(undefined8 *)(puVar2 + iVar4);
      *(undefined8 *)((long)(puVar1 + iVar4) + 8) = *(undefined8 *)((long)(puVar2 + iVar4) + 8);
      *(undefined8 *)(puVar1 + iVar4) = uVar15;
      iVar4 = *(int *)(lVar5 + 0x28);
      uVar15 = *(undefined8 *)(puVar2 + iVar4);
      *(undefined8 *)((long)(puVar1 + iVar4) + 8) = *(undefined8 *)((long)(puVar2 + iVar4) + 8);
      *(undefined8 *)(puVar1 + iVar4) = uVar15;
      puVar1[*(int *)(lVar5 + 0x2c)] = puVar2[*(int *)(lVar5 + 0x2c)];
      (**(code **)(lVar11 + 0x38))(puVar1,0,1,lVar5);
      return param_1;
    }
LAB_1002bec4c:
    puVar9 = &DAT_100fbc110;
    FUN_1000037f0(&DAT_100fbc110,&DAT_100c3c9d8);
    _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar9 + -8) + 0x40));
    return param_1;
  }
  if ((int)puVar7 != 0) {
    FUN_10005241c(puVar1,FUN_1002bd9c0);
    goto LAB_1002bec4c;
  }
  *puVar1 = *puVar2;
  iVar4 = *(int *)(lVar5 + 0x14);
  DVar8 = Foundation::Date::typeMetadataAccessor();
  lVar11 = *(long *)(DVar8.unknown + -8);
  pcVar12 = *(code **)(lVar11 + 0x28);
  (*pcVar12)(puVar1 + iVar4,puVar2 + iVar4,DVar8.unknown);
  iVar4 = *(int *)(lVar5 + 0x18);
  pcVar14 = *(code **)(lVar11 + 0x30);
  puVar6 = puVar1 + iVar4;
  (*pcVar14)(puVar6,1,DVar8.unknown);
  puVar7 = puVar2 + iVar4;
  (*pcVar14)(puVar7,1,DVar8.unknown);
  if ((int)puVar6 == 0) {
    if ((int)puVar7 != 0) {
      (**(code **)(lVar11 + 8))(puVar1 + iVar4,DVar8.unknown);
      goto LAB_1002bee08;
    }
    (*pcVar12)(puVar1 + iVar4,puVar2 + iVar4,DVar8.unknown);
  }
  else if ((int)puVar7 == 0) {
    (**(code **)(lVar11 + 0x20))(puVar1 + iVar4,puVar2 + iVar4,DVar8.unknown);
    (**(code **)(lVar11 + 0x38))(puVar1 + iVar4,0,1,DVar8.unknown);
  }
  else {
LAB_1002bee08:
    puVar9 = &DAT_100fb7f78;
    FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
    _memcpy(puVar1 + iVar4,puVar2 + iVar4,*(size_t *)(*(long *)(puVar9 + -8) + 0x40));
  }
  (*pcVar12)(puVar1 + *(int *)(lVar5 + 0x1c),puVar2 + *(int *)(lVar5 + 0x1c),DVar8.unknown);
  iVar4 = *(int *)(lVar5 + 0x20);
  puVar6 = puVar1 + iVar4;
  (*pcVar14)(puVar6,1,DVar8.unknown);
  puVar7 = puVar2 + iVar4;
  (*pcVar14)(puVar7,1,DVar8.unknown);
  if ((int)puVar6 == 0) {
    if ((int)puVar7 == 0) {
      (*pcVar12)(puVar1 + iVar4,puVar2 + iVar4,DVar8.unknown);
      goto LAB_1002beee0;
    }
    (**(code **)(lVar11 + 8))(puVar1 + iVar4,DVar8.unknown);
  }
  else if ((int)puVar7 == 0) {
    (**(code **)(lVar11 + 0x20))(puVar1 + iVar4,puVar2 + iVar4,DVar8.unknown);
    (**(code **)(lVar11 + 0x38))(puVar1 + iVar4,0,1,DVar8.unknown);
    goto LAB_1002beee0;
  }
  puVar9 = &DAT_100fb7f78;
  FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
  _memcpy(puVar1 + iVar4,puVar2 + iVar4,*(size_t *)(*(long *)(puVar9 + -8) + 0x40));
LAB_1002beee0:
  puVar3 = (undefined8 *)(puVar1 + *(int *)(lVar5 + 0x24));
  uVar15 = *(undefined8 *)((long)(puVar2 + *(int *)(lVar5 + 0x24)) + 8);
  uVar10 = puVar3[1];
  *puVar3 = *(undefined8 *)(puVar2 + *(int *)(lVar5 + 0x24));
  puVar3[1] = uVar15;
  _swift_bridgeObjectRelease(uVar10);
  puVar3 = (undefined8 *)(puVar1 + *(int *)(lVar5 + 0x28));
  uVar15 = *(undefined8 *)((long)(puVar2 + *(int *)(lVar5 + 0x28)) + 8);
  uVar10 = puVar3[1];
  *puVar3 = *(undefined8 *)(puVar2 + *(int *)(lVar5 + 0x28));
  puVar3[1] = uVar15;
  _swift_bridgeObjectRelease(uVar10);
  puVar1[*(int *)(lVar5 + 0x2c)] = puVar2[*(int *)(lVar5 + 0x2c)];
  return param_1;
}



/* Address: 0x1002bef6c | FUN_1002bef6c */

void FUN_1002bef6c(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1002bef78 | FUN_1002bef78 */

void FUN_1002bef78(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = *(int *)(param_3 + 0x20);
  puVar2 = &DAT_100fbc110;
  FUN_1000037f0(&DAT_100fbc110,&DAT_100c3c9d8);
                    /* WARNING: Could not recover jumptable at 0x0001002befc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar2 + -8) + 0x30))(param_1 + iVar1,param_2,puVar2);
  return;
}



/* Address: 0x1002befcc | FUN_1002befcc */

void FUN_1002befcc(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1002befd8 | FUN_1002befd8 */

void FUN_1002befd8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = *(int *)(param_4 + 0x20);
  puVar2 = &DAT_100fbc110;
  FUN_1000037f0(&DAT_100fbc110,&DAT_100c3c9d8);
                    /* WARNING: Could not recover jumptable at 0x0001002bf02c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar2 + -8) + 0x38))(param_1 + iVar1,param_2,param_2,puVar2);
  return;
}



/* Address: 0x1002bf030 | FUN_1002bf030 */

void FUN_1002bf030(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *local_48;
  undefined *puStack_40;
  undefined *local_38;
  undefined *puStack_30;
  long local_28;
  
  local_48 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
  puVar2 = &DAT_100fbc180;
  lVar1 = 0x13f;
  puStack_40 = local_48;
  local_38 = local_48;
  puStack_30 = local_48;
  FUN_1001a1320(0x13f,&DAT_100fbc180,FUN_1002bd9c0);
  if (puVar2 < (undefined *)0x40) {
    local_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0x100,5,&local_48,param_1 + 0x10);
  }
  return;
}



/* Address: 0x1002bf0bc | thunk_FUN_1002bdefc */

void thunk_FUN_1002bdefc(void)

{
  FUN_1002bdefc();
  return;
}



/* Address: 0x1002bf0c0 | thunk_FUN_1002bde98 */

void thunk_FUN_1002bde98(void)

{
  FUN_1002bde98();
  return;
}



/* Address: 0x1002bf0c4 | FUN_1002bf0c4 */

void FUN_1002bf0c4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long local_68;
  undefined1 auStack_60 [32];
  
  uStack_78 = param_1[1];
  local_80 = *param_1;
  local_68 = param_1[3];
  uStack_70 = param_1[2];
  if (local_68 == 0) {
    FUN_100005808(&local_80,&DAT_100fbc288,&DAT_100c3cc00);
    FUN_1002c11d0(auStack_60,param_2,param_3);
    _swift_bridgeObjectRelease(param_3);
    FUN_100005808(auStack_60,&DAT_100fbc288,&DAT_100c3cc00);
  }
  else {
    FUN_100011080(&local_80,auStack_60);
    uVar1 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native(uVar1);
    local_80 = *unaff_x20;
    FUN_1002c13c4(auStack_60,param_2,param_3,uVar1);
    _swift_bridgeObjectRelease(param_3);
    *unaff_x20 = local_80;
  }
  return;
}



/* Address: 0x1002bf1a0 | FUN_1002bf1a0 */

void FUN_1002bf1a0(Storefront param_1)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)(ulong)*(uint *)(PTR__get_current_100ea7d08 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1000749a0;
  StoreKit::Storefront::_get_current(param_1);
  return;
}



/* Address: 0x1002bf1f4 | FUN_1002bf1f4 */

void FUN_1002bf1f4(undefined8 param_1)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  plVar1 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1002b08a0;
  FUN_1002c0dec();
  return;
}



/* Address: 0x1002bf23c | FUN_1002bf23c */

/* WARNING: Removing unreachable block (ram,0x0001002bf268) */

bool FUN_1002bf23c(void)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = 0;
  FUN_100438d28();
  FUN_10043f154();
  lVar2 = 0;
  FUN_1002bcde4();
  _swift_allocObject();
  *(undefined8 *)(lVar2 + 0x10) = uVar1;
  _swift_release();
  return lVar2 != 0;
}



/* Address: 0x1002bf2b8 | FUN_1002bf2b8 */

undefined8 FUN_1002bf2b8(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  FUN_1002bf2f4(param_1);
  return unaff_x20;
}



/* Address: 0x1002bf2f4 | FUN_1002bf2f4 */

void FUN_1002bf2f4(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  puVar1 = &DAT_100c3ca00;
  _swift_getKeyPath();
  puVar2 = &DAT_100fb7cf0;
  FUN_1000037f0(&DAT_100fb7cf0,&DAT_100c3ca30);
  _swift_allocObject();
  FUN_1000da6e0(puVar1,puVar2);
  *(undefined **)(unaff_x20 + 0x20) = puVar1;
  puVar1 = &DAT_100c3ca38;
  _swift_getKeyPath();
  puVar2 = &DAT_100fb7cf8;
  FUN_1000037f0(&DAT_100fb7cf8,&DAT_100c37550);
  _swift_allocObject();
  FUN_1000da6e0(puVar1,puVar2);
  *(undefined **)(unaff_x20 + 0x28) = puVar1;
  *(undefined1 *)(unaff_x20 + 0x30) = 0;
  if ((param_1 & 1) != 0) {
    FUN_10042d0f8(0);
    FUN_10042a200(FUN_1000d1c18,0);
    _swift_retain();
    FUN_100429f74(1,FUN_1002c08ec);
    _swift_release();
  }
  return;
}



/* Address: 0x1002bf3f4 | thunk_FUN_10019b694 */

void thunk_FUN_10019b694(void)

{
  thunk_FUN_10019b694();
  return;
}



/* Address: 0x1002bf3f8 | thunk_FUN_1002425f8 */

void thunk_FUN_1002425f8(void)

{
  FUN_1002425f8();
  return;
}



/* Address: 0x1002bf3fc | FUN_1002bf3fc */

void FUN_1002bf3fc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long unaff_x20;
  long unaff_x22;
  
  *(ulong *)(unaff_x22 + 0x160) = param_3;
  *(long *)(unaff_x22 + 0x168) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x150) = param_1;
  *(undefined8 *)(unaff_x22 + 0x158) = param_2;
  puVar2 = &DAT_100fb7f78;
  FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
  uVar3 = *(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x170) = uVar3;
  lVar4 = 0;
  FUN_1002bd9c0();
  *(long *)(unaff_x22 + 0x178) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x180) = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar5 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x188) = uVar5;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 400) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x198) = *(undefined8 *)(unaff_x20 + 0x20);
  FUN_1000da768(unaff_x22 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar4 = *(long *)(unaff_x22 + 0x30);
  FUN_100004640(unaff_x22 + 0x10,uVar1);
  (**(code **)(lVar4 + 0x30))
            (0x65736e6563696c,&DAT_e700000000000000,0xd00000000000002d,0x8000000100da0160,uVar1,
             lVar4);
  FUN_100004594(unaff_x22 + 0x10);
  plVar6 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x1a0) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1002bf530;
  FUN_1002c14e8(param_2,param_3 & 0xcfffffffffffffff);
  return;
}



/* Address: 0x1002bf530 | FUN_1002bf530 */

void FUN_1002bf530(undefined8 param_1,undefined8 param_2,undefined8 param_3,void *param_4)

{
  undefined1 *puVar1;
  void *pvVar2;
  undefined1 uVar3;
  long lVar4;
  undefined *puVar5;
  Date DVar6;
  long *plVar7;
  _StringGuts _Var8;
  code *pcVar9;
  char *pcVar10;
  void *pvVar11;
  ulong uVar12;
  long lVar13;
  long unaff_x20;
  undefined8 uVar14;
  long lVar15;
  long *unaff_x22;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  
  lVar21 = *unaff_x22;
  lVar4 = *(long *)(lVar21 + 0x1a0);
  lVar16 = *unaff_x22;
  *(undefined8 *)(lVar21 + 0x1a8) = param_1;
  _swift_task_dealloc();
  if (unaff_x20 == 0) {
    FUN_1002bbc24();
    if (*(long *)(lVar4 + 0x10) != 0) {
      uVar14 = *(undefined8 *)(lVar21 + 0x188);
      puVar1 = *(undefined1 **)(lVar21 + 400);
      lVar15 = *(long *)(lVar21 + 0x178);
      lVar13 = *(long *)(lVar21 + 0x168);
      uVar12 = (ulong)*(byte *)(*(long *)(lVar21 + 0x180) + 0x50);
      pcVar9 = FUN_1002bd9c0;
      FUN_1000c495c(lVar4 + (uVar12 + 0x20 & (uVar12 ^ 0xffffffffffffffff)),uVar14,FUN_1002bd9c0);
      _swift_bridgeObjectRelease(lVar4);
      FUN_1000523d8(uVar14,puVar1);
      FUN_1000da768(lVar21 + 0xb0);
      puVar5 = *(undefined **)(lVar21 + 200);
      lVar4 = *(long *)(lVar21 + 0xd0);
      _Var8.unknown = puVar5;
      FUN_100004640(lVar21 + 0xb0);
      Swift::_StringGuts::grow(0x13,_Var8);
      *(undefined8 *)(lVar21 + 0x128) = 0;
      *(undefined8 *)(lVar21 + 0x130) = 0xe000000000000000;
      SVar22.bridgeObject = (void *)0x8000000100da0210;
      SVar22.str = (char *)0xd000000000000011;
      SVar23.bridgeObject = param_4;
      SVar23.str = (char *)pcVar9;
      Swift::String::append(SVar22,SVar23);
      uVar3 = *puVar1;
      *(undefined1 *)(lVar21 + 0x1c7) = uVar3;
      *(undefined1 *)(lVar21 + 0x1c6) = uVar3;
      Swift::__print_unlocked
                (lVar21 + 0x1c6,lVar21 + 0x128,&DAT_100ec6738,
                 PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
                 PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
                );
      pcVar10 = *(char **)(lVar21 + 0x128);
      pvVar2 = *(void **)(lVar21 + 0x130);
      pvVar11 = pvVar2;
      (**(code **)(lVar4 + 0x30))
                (0x65736e6563696c,&DAT_e700000000000000,pcVar10,pvVar2,puVar5,lVar4);
      _swift_bridgeObjectRelease(pvVar2);
      FUN_100004594(lVar21 + 0xb0);
      FUN_1000da768(lVar21 + 0xd8);
      puVar5 = *(undefined **)(lVar21 + 0xf0);
      lVar4 = *(long *)(lVar21 + 0xf8);
      _Var8.unknown = puVar5;
      FUN_100004640(lVar21 + 0xd8);
      Swift::_StringGuts::grow(0x13,_Var8);
      _swift_bridgeObjectRelease(0xe000000000000000);
      *(undefined4 *)(lVar21 + 0x1c0) = *(undefined4 *)(lVar15 + 0x1c);
      DVar6 = Foundation::Date::typeMetadataAccessor();
      *(undefined **)(lVar21 + 0x1b0) = DVar6.unknown;
      FUN_1000e8c70(&DAT_100fbc1c0,
                    PTR_Foundation__Foundation__Date_>Swift__CustomStringConvertible_100ea74b8);
      SVar22 = Swift::CustomStringConvertible::get_description();
      SVar24.bridgeObject = pvVar11;
      SVar24.str = pcVar10;
      Swift::String::append(SVar22,SVar24);
      _swift_bridgeObjectRelease(SVar22.bridgeObject);
      (**(code **)(lVar4 + 0x30))
                (0x65736e6563696c,&DAT_e700000000000000,0xd000000000000011,0x8000000100da0230,puVar5
                 ,lVar4);
      _swift_bridgeObjectRelease(0x8000000100da0230);
      FUN_100004594(lVar21 + 0xd8);
      if ((*(byte *)(lVar13 + 0x30) & 1) == 0) {
        uVar12 = *(ulong *)(lVar21 + 0x160);
        *(undefined1 *)(lVar13 + 0x30) = 1;
        plVar7 = (long *)0xf80;
        _swift_task_alloc();
        *(long **)(lVar21 + 0x1b8) = plVar7;
        *plVar7 = lVar16;
        plVar7[1] = (long)FUN_1002bfb00;
        FUN_1002bfc24(*(undefined8 *)(lVar21 + 0x158),uVar12 & 0xcfffffffffffffff,param_1,
                      *(undefined8 *)(lVar21 + 400));
        return;
      }
      uVar14 = *(undefined8 *)(lVar21 + 0x1a8);
      lVar4 = *(long *)(lVar21 + 0x1b0);
      lVar15 = *(long *)(lVar21 + 400);
      uVar17 = *(undefined8 *)(lVar21 + 0x170);
      uVar19 = *(undefined8 *)(lVar21 + 0x150);
      lVar13 = *(long *)(lVar4 + -8);
      uVar3 = *(undefined1 *)(lVar21 + 0x1c7);
      (**(code **)(lVar13 + 0x10))(uVar17,lVar15 + *(int *)(lVar21 + 0x1c0),lVar4);
      (**(code **)(lVar13 + 0x38))(uVar17,0,1,lVar4);
      FUN_100247b80(uVar19,uVar3,uVar17);
      _swift_release(uVar14);
      FUN_100005808(uVar17,&DAT_100fb7f78,&DAT_100c37ab0);
      FUN_10005241c(lVar15,FUN_1002bd9c0);
      uVar14 = 0;
      goto LAB_1002bf9cc;
    }
    _swift_bridgeObjectRelease();
    FUN_1000da768(lVar21 + 0x100);
    uVar14 = *(undefined8 *)(lVar21 + 0x118);
    lVar4 = *(long *)(lVar21 + 0x120);
    FUN_100004640(lVar21 + 0x100,uVar14);
    (**(code **)(lVar4 + 0x30))
              (0x65736e6563696c,&DAT_e700000000000000,0xd000000000000029,0x8000000100da0250,uVar14,
               lVar4);
    _swift_release(param_1);
    lVar4 = lVar21 + 0x100;
LAB_1002bf9c4:
    FUN_100004594(lVar4);
    uVar14 = 1;
  }
  else {
    *(long *)(lVar21 + 0x138) = unaff_x20;
    _swift_errorRetain();
    puVar5 = &DAT_100fb8200;
    FUN_1000037f0(&DAT_100fb8200,&DAT_100c38350);
    uVar12 = lVar21 + 0x140;
    _swift_dynamicCast(uVar12,lVar21 + 0x138,puVar5,&DAT_100ec6be0,6);
    if ((uVar12 & 1) != 0) {
      uVar14 = *(undefined8 *)(lVar21 + 0x140);
      *(undefined8 *)(lVar21 + 0x148) = uVar14;
      _swift_errorRetain(uVar14);
      lVar4 = lVar21 + 0x1c4;
      _swift_dynamicCast(lVar4,lVar21 + 0x148,puVar5,&DAT_100ed4790,6);
      if ((((int)lVar4 != 0) && (*(char *)(lVar21 + 0x1c5) == '\0')) &&
         (*(char *)(lVar21 + 0x1c4) == '\0')) {
        FUN_1000da768(lVar21 + 0x88);
        uVar17 = *(undefined8 *)(lVar21 + 0xa0);
        lVar4 = *(long *)(lVar21 + 0xa8);
        FUN_100004640(lVar21 + 0x88,uVar17);
        (**(code **)(lVar4 + 0x30))
                  (0x65736e6563696c,&DAT_e700000000000000,0xd000000000000034,0x8000000100da01d0,
                   uVar17,lVar4);
        _swift_errorRelease();
        _swift_errorRelease(uVar14);
        lVar4 = lVar21 + 0x88;
        goto LAB_1002bf9c4;
      }
      _swift_errorRelease(uVar14);
    }
    FUN_1000da768(lVar21 + 0x38);
    lVar4 = *(long *)(lVar21 + 0x58);
    FUN_100004640(lVar21 + 0x38,*(undefined8 *)(lVar21 + 0x50));
    (**(code **)(lVar4 + 0x20))();
    FUN_100004594(lVar21 + 0x38);
    FUN_1000da768(lVar21 + 0x60);
    uVar14 = *(undefined8 *)(lVar21 + 0x78);
    lVar4 = *(long *)(lVar21 + 0x80);
    FUN_100004640(lVar21 + 0x60,uVar14);
    (**(code **)(lVar4 + 0x30))
              (0x65736e6563696c,&DAT_e700000000000000,0xd000000000000039,0x8000000100da0190,uVar14,
               lVar4);
    _swift_errorRelease();
    FUN_100004594(lVar21 + 0x60);
    uVar14 = 2;
  }
LAB_1002bf9cc:
  uVar17 = *(undefined8 *)(lVar21 + 0x188);
  uVar19 = *(undefined8 *)(lVar21 + 400);
  uVar18 = *(undefined8 *)(lVar21 + 0x170);
  uVar20 = *(undefined8 *)(lVar21 + 0x150);
  lVar4 = 0;
  FUN_10019fee0();
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(uVar20,uVar14,2,lVar4);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar18);
                    /* WARNING: Could not recover jumptable at 0x0001002bfa34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar16 + 8))();
  return;
}



/* Address: 0x1002bfb00 | FUN_1002bfb00 */

void FUN_1002bfb00(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  long *unaff_x22;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  
  lVar9 = *unaff_x22;
  lVar5 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar9 + 0x1b8));
  uVar1 = *(undefined8 *)(lVar9 + 0x1a8);
  lVar3 = *(long *)(lVar9 + 0x1b0);
  lVar4 = *(long *)(lVar9 + 400);
  uVar6 = *(undefined8 *)(lVar9 + 0x170);
  uVar8 = *(undefined8 *)(lVar9 + 0x150);
  lVar10 = *(long *)(lVar3 + -8);
  uVar2 = *(undefined1 *)(lVar9 + 0x1c7);
  (**(code **)(lVar10 + 0x10))(uVar6,lVar4 + *(int *)(lVar9 + 0x1c0),lVar3);
  (**(code **)(lVar10 + 0x38))(uVar6,0,1,lVar3);
  FUN_100247b80(uVar8,uVar2,uVar6);
  _swift_release(uVar1);
  FUN_100005808(uVar6,&DAT_100fb7f78,&DAT_100c37ab0);
  FUN_10005241c(lVar4,FUN_1002bd9c0);
  uVar1 = *(undefined8 *)(lVar9 + 0x188);
  uVar6 = *(undefined8 *)(lVar9 + 400);
  uVar8 = *(undefined8 *)(lVar9 + 0x170);
  uVar7 = *(undefined8 *)(lVar9 + 0x150);
  lVar3 = 0;
  FUN_10019fee0();
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(uVar7,0,2,lVar3);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x0001002bfc20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar5 + 8))();
  return;
}



/* Address: 0x1002bfc24 | FUN_1002bfc24 */

void FUN_1002bfc24(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  byte bVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined *puVar13;
  ulong uVar14;
  long lVar15;
  Date DVar16;
  ulong uVar17;
  undefined8 unaff_x20;
  long unaff_x22;
  ulong uVar18;
  
  *(undefined8 *)(unaff_x22 + 0xe38) = unaff_x20;
  *(byte **)(unaff_x22 + 0xe08) = param_4;
  *(undefined8 *)(unaff_x22 + 0xdd8) = param_3;
  *(undefined8 *)(unaff_x22 + 0xda8) = param_2;
  *(undefined8 *)(unaff_x22 + 0xd78) = param_1;
  lVar8 = 0;
  FUN_1002c1890();
  *(long *)(unaff_x22 + 0xe68) = lVar8;
  uVar9 = *(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xe98) = uVar9;
  lVar8 = 0;
  FUN_100245ed8();
  uVar9 = *(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xf;
  uVar10 = uVar9 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xee0) = uVar10;
  uVar9 = uVar9 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xee8) = uVar9;
  lVar11 = 0;
  FUN_100245f3c();
  uVar10 = *(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xf;
  uVar12 = uVar10 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xef0) = uVar12;
  uVar10 = uVar10 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xef8) = uVar10;
  puVar13 = &DAT_100fbbac0;
  FUN_1000037f0(&DAT_100fbbac0,&DAT_100c3c5f8);
  uVar12 = *(long *)(*(long *)(puVar13 + -8) + 0x40) + 0xf;
  uVar14 = uVar12 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xf00) = uVar14;
  uVar12 = uVar12 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xf08) = uVar12;
  lVar15 = 0;
  FUN_1002bdad0();
  uVar14 = *(long *)(*(long *)(lVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xf10) = uVar14;
  DVar16 = Foundation::Date::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0xf18) = DVar16.unknown;
  lVar15 = *(long *)(DVar16.unknown + -8);
  *(long *)(unaff_x22 + 0xf20) = lVar15;
  uVar17 = *(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xf28) = uVar17;
  bVar4 = *param_4;
  pcVar1 = "verified";
  puVar5 = &DAT_d000000000000032;
  if (bVar4 != 4) {
    pcVar1 = "onBarViewModel.swift";
    puVar5 = (undefined1 *)0xd00000000000002d;
  }
  pcVar3 = "tion.annual.legacy";
  puVar6 = &DAT_d000000000000032;
  if (bVar4 != 3) {
    pcVar3 = pcVar1;
    puVar6 = puVar5;
  }
  puVar5 = (undefined1 *)0xd00000000000002b;
  pcVar1 = "com.wiheads.paste.macos.subscription.annual.intro";
  if (bVar4 != 1) {
    puVar5 = (undefined1 *)0xd000000000000031;
    pcVar1 = "com.wiheads.paste.macos.subscription.annual.family";
  }
  pcVar2 = "e.macos.subscription.annual";
  puVar7 = (undefined1 *)0xd00000000000002c;
  if (bVar4 != 0) {
    pcVar2 = pcVar1 + 0x20;
    puVar7 = puVar5;
  }
  if (bVar4 < 3) {
    pcVar3 = pcVar2;
    puVar6 = puVar7;
  }
  *(char **)(unaff_x22 + 0xf38) = pcVar3;
  *(undefined1 **)(unaff_x22 + 0xf30) = puVar6;
  uVar18 = (ulong)pcVar3 | 0x8000000000000000;
  Foundation::Date::init();
  FUN_1002bc244(uVar14,bVar4,uVar17);
  _swift_asyncLet_begin(unaff_x22 + 0x10,0,puVar13,&DAT_100c3cb90,0,uVar12);
  _swift_asyncLet_begin(unaff_x22 + 0x290,0,lVar11,&DAT_100c3cb98,0,uVar10);
  puVar13 = &DAT_100ec6c00;
  _swift_allocObject(&DAT_100ec6c00,0x20,7);
  *(undefined **)(unaff_x22 + 0xf40) = puVar13;
  *(undefined1 **)(puVar13 + 0x10) = puVar6;
  *(ulong *)(puVar13 + 0x18) = uVar18;
  *(undefined **)(unaff_x22 + 0xeb0) = &DAT_100c3cba8;
  *(undefined **)(unaff_x22 + 0xeb8) = puVar13;
  _swift_bridgeObjectRetain(uVar18);
  _swift_asyncLet_begin
            (unaff_x22 + 0x510,0,&DAT_100ec3b90,&DAT_100c3cbb8,unaff_x22 + 0xea0,unaff_x22 + 0xd08);
  _swift_asyncLet_begin
            (unaff_x22 + 0x790,0,PTR___type_metadata_for_Swift_Int_100eac6f8,&DAT_100c3cbc0,0,
             unaff_x22 + 0xd48);
  puVar13 = &DAT_100ec6c28;
  _swift_allocObject(&DAT_100ec6c28,0x20,7);
  *(undefined **)(unaff_x22 + 0xf48) = puVar13;
  *(undefined1 **)(puVar13 + 0x10) = puVar6;
  *(ulong *)(puVar13 + 0x18) = uVar18;
  *(undefined **)(unaff_x22 + 0xed0) = &DAT_100c3cbd0;
  *(undefined **)(unaff_x22 + 0xed8) = puVar13;
  _swift_bridgeObjectRetain(uVar18);
  _swift_asyncLet_begin(unaff_x22 + 0xa10,0,lVar8,&DAT_100c3cbe0,unaff_x22 + 0xec0,uVar9);
  _swift_asyncLet_get(unaff_x22 + 0x10,uVar12,FUN_1002bff8c,unaff_x22 + 0xc90);
  return;
}



/* Address: 0x1002bff8c | FUN_1002bff8c */

void FUN_1002bff8c(void)

{
  long unaff_x22;
  
  FUN_100011090(*(undefined8 *)(unaff_x22 + 0xf08),*(undefined8 *)(unaff_x22 + 0xf00),&DAT_100fbbac0
                ,&DAT_100c3c5f8);
  _swift_asyncLet_get(unaff_x22 + 0x290,*(undefined8 *)(unaff_x22 + 0xef8),FUN_1002bffe0,
                      unaff_x22 + 0xce0);
  return;
}



/* Address: 0x1002bffe0 | FUN_1002bffe0 */

void FUN_1002bffe0(void)

{
  long unaff_x22;
  
  FUN_1000c495c(*(undefined8 *)(unaff_x22 + 0xef8),*(undefined8 *)(unaff_x22 + 0xef0),FUN_100245f3c)
  ;
  _swift_asyncLet_get(unaff_x22 + 0x510,unaff_x22 + 0xd08,FUN_1002c002c,unaff_x22 + 0xd20);
  return;
}



/* Address: 0x1002c002c | FUN_1002c002c */

void FUN_1002c002c(void)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xf58) = *(undefined8 *)(unaff_x22 + 0xd10);
  *(undefined8 *)(unaff_x22 + 0xf50) = *(undefined8 *)(unaff_x22 + 0xd08);
  *(undefined8 *)(unaff_x22 + 0xf60) = *(undefined8 *)(unaff_x22 + 0xd18);
  _swift_asyncLet_get(unaff_x22 + 0x790,unaff_x22 + 0xd48,FUN_1002c0058,unaff_x22 + 0xd50);
  return;
}



/* Address: 0x1002c0058 | FUN_1002c0058 */

void FUN_1002c0058(void)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xf68) = *(undefined8 *)(unaff_x22 + 0xd48);
  _swift_asyncLet_get(unaff_x22 + 0xa10,*(undefined8 *)(unaff_x22 + 0xee8),FUN_1002c0078,
                      unaff_x22 + 0xd80);
  return;
}



/* Address: 0x1002c0078 | FUN_1002c0078 */

void FUN_1002c0078(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xda8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd78);
  FUN_1000da368();
  *(undefined8 *)(unaff_x22 + 0xf70) = uVar1;
  *(undefined8 *)(unaff_x22 + 0xf78) = uVar2;
  _swift_task_switch(FUN_1002c00c4,uVar1,uVar2);
  return;
}



/* Address: 0x1002c00c4 | FUN_1002c00c4 */

void FUN_1002c00c4(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x22;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0xf68);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xf60);
  uVar19 = *(undefined8 *)(unaff_x22 + 0xf58);
  uVar18 = *(undefined8 *)(unaff_x22 + 0xf50);
  uVar3 = *(ulong *)(unaff_x22 + 0xf38);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xf30);
  uVar16 = *(undefined8 *)(unaff_x22 + 0xf28);
  lVar15 = *(long *)(unaff_x22 + 0xf20);
  uVar17 = *(undefined8 *)(unaff_x22 + 0xf18);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xf10);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xf00);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xef0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xee0);
  puVar13 = *(undefined8 **)(unaff_x22 + 0xe98);
  lVar11 = *(long *)(unaff_x22 + 0xe68);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xe08);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xdd8);
  FUN_1000c495c(*(undefined8 *)(unaff_x22 + 0xee8),uVar12,FUN_100245ed8);
  (**(code **)(lVar15 + 0x10))((long)puVar13 + (long)*(int *)(lVar11 + 0x14),uVar16,uVar17);
  FUN_100011090(uVar9,(long)puVar13 + (long)*(int *)(lVar11 + 0x1c),&DAT_100fbbac0,&DAT_100c3c5f8);
  FUN_1000c495c(uVar14,(long)puVar13 + (long)*(int *)(lVar11 + 0x20),FUN_100245f3c);
  FUN_1000c495c(uVar12,(long)puVar13 + (long)*(int *)(lVar11 + 0x2c),FUN_100245ed8);
  FUN_1000c495c(uVar6,(long)puVar13 + (long)*(int *)(lVar11 + 0x30),FUN_1002bd9c0);
  FUN_1000c495c(uVar5,(long)puVar13 + (long)*(int *)(lVar11 + 0x34),FUN_1002bdad0);
  *puVar13 = uVar4;
  puVar13[1] = uVar3 | 0x8000000000000000;
  *(undefined8 *)((long)puVar13 + (long)*(int *)(lVar11 + 0x18)) = uVar10;
  puVar1 = (undefined8 *)((long)puVar13 + (long)*(int *)(lVar11 + 0x24));
  puVar1[1] = uVar19;
  *puVar1 = uVar18;
  puVar1[2] = uVar8;
  *(undefined8 *)((long)puVar13 + (long)*(int *)(lVar11 + 0x28)) = uVar7;
  _swift_retain(uVar10);
  puVar1 = puVar13;
  FUN_1002c3060(puVar13);
  puVar2 = puVar13;
  FUN_1002c46a8(puVar13);
  FUN_1000da768(unaff_x22 + 0xcb8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xcd0);
  lVar11 = *(long *)(unaff_x22 + 0xcd8);
  FUN_100004640(unaff_x22 + 0xcb8,uVar4);
  (**(code **)(lVar11 + 0x38))(0xd000000000000019,0x8000000100da02b0,1,puVar1,puVar2,uVar4,lVar11);
  _swift_bridgeObjectRelease(puVar2);
  _swift_bridgeObjectRelease(puVar1);
  FUN_10005241c(puVar13,FUN_1002c1890);
  FUN_10005241c(uVar12,FUN_100245ed8);
  FUN_10005241c(uVar14,FUN_100245f3c);
  FUN_100005808(uVar9,&DAT_100fbbac0,&DAT_100c3c5f8);
  FUN_100004594(unaff_x22 + 0xcb8);
  _swift_asyncLet_finish
            (unaff_x22 + 0xa10,*(undefined8 *)(unaff_x22 + 0xee8),FUN_1002c0340,unaff_x22 + 0xdb0);
  return;
}



/* Address: 0x1002c0340 | FUN_1002c0340 */

void FUN_1002c0340(void)

{
  long unaff_x22;
  
  _swift_task_switch(FUN_1002c0354,*(undefined8 *)(unaff_x22 + 0xf70),
                     *(undefined8 *)(unaff_x22 + 0xf78));
  return;
}



/* Address: 0x1002c0354 | FUN_1002c0354 */

void FUN_1002c0354(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0xf48));
  _swift_asyncLet_finish(unaff_x22 + 0x790,unaff_x22 + 0xd48,FUN_1002c0394,unaff_x22 + 0xde0);
  return;
}



/* Address: 0x1002c0394 | FUN_1002c0394 */

void FUN_1002c0394(void)

{
  long unaff_x22;
  
  _swift_task_switch(FUN_1002c03a8,*(undefined8 *)(unaff_x22 + 0xf70),
                     *(undefined8 *)(unaff_x22 + 0xf78));
  return;
}



/* Address: 0x1002c03a8 | FUN_1002c03a8 */

void FUN_1002c03a8(void)

{
  long unaff_x22;
  
  _swift_asyncLet_finish(unaff_x22 + 0x510,unaff_x22 + 0xd08,FUN_1002c03c0,unaff_x22 + 0xe10);
  return;
}



/* Address: 0x1002c03c0 | FUN_1002c03c0 */

void FUN_1002c03c0(void)

{
  long unaff_x22;
  
  _swift_task_switch(FUN_1002c03d4,*(undefined8 *)(unaff_x22 + 0xf70),
                     *(undefined8 *)(unaff_x22 + 0xf78));
  return;
}


