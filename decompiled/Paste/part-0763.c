/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100865530 | FUN_100865530 */

void FUN_100865530(void)

{
  FUN_100863f40();
  return;
}



/* Address: 0x100865544 | thunk_FUN_1008654d0 */

void thunk_FUN_1008654d0(void)

{
  thunk_FUN_1008654d0();
  return;
}



/* Address: 0x100865548 | thunk_FUN_10085fa50 */

void thunk_FUN_10085fa50(void)

{
  thunk_FUN_10085fa50();
  return;
}



/* Address: 0x10086554c | thunk_FUN_10085ee24 */

void thunk_FUN_10085ee24(void)

{
  FUN_10085ee24();
  return;
}



/* Address: 0x100865550 | thunk_FUN_100865358 */

void thunk_FUN_100865358(void)

{
  FUN_100865358();
  return;
}



/* Address: 0x100865554 | thunk_FUN_1008652f0 */

void thunk_FUN_1008652f0(undefined4 *param_1,undefined4 param_2)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  *param_1 = param_2;
  return;
}



/* Address: 0x100865558 | thunk_FUN_100865444 */

void thunk_FUN_100865444(void)

{
  FUN_100865444();
  return;
}



/* Address: 0x10086555c | thunk_FUN_100864ce4 */

void thunk_FUN_100864ce4(void)

{
  thunk_FUN_100864ce4();
  return;
}



/* Address: 0x100865560 | thunk_FUN_1008653f8 */

void thunk_FUN_1008653f8(void)

{
  thunk_FUN_1008653f8();
  return;
}



/* Address: 0x100865564 | thunk_FUN_100865484 */

void thunk_FUN_100865484(void)

{
  thunk_FUN_100865484();
  return;
}



/* Address: 0x100865568 | thunk_FUN_100863e04 */

void thunk_FUN_100863e04(void)

{
  thunk_FUN_100863e04();
  return;
}



/* Address: 0x10086556c | thunk_FUN_100863e04 */

void thunk_FUN_100863e04(void)

{
  thunk_FUN_100863e04();
  return;
}



/* Address: 0x100865570 | thunk_FUN_100863e04 */

void thunk_FUN_100863e04(void)

{
  thunk_FUN_100863e04();
  return;
}



/* Address: 0x100865574 | thunk_FUN_100865294 */

void thunk_FUN_100865294(void)

{
  FUN_100865294();
  return;
}



/* Address: 0x100865578 | FUN_100865578 */

void FUN_100865578(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  undefined7 extraout_var_02;
  undefined7 extraout_var_03;
  undefined7 extraout_var_04;
  _StringComparisonResult expecting;
  undefined1 uVar10;
  undefined8 *unaff_x20;
  long lVar11;
  undefined1 auStack_b0 [24];
  undefined8 local_98;
  undefined8 uStack_90;
  long local_88;
  undefined1 *puStack_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar1 = *param_1;
  uVar4 = param_1[1];
  lVar2 = param_1[2];
  puVar5 = (undefined1 *)param_1[3];
  uVar10 = *(undefined1 *)(param_1 + 4);
  uVar3 = param_1[5];
  uVar6 = param_1[6];
  uVar8 = uVar1;
  FUN_100830fd0(uVar1,uVar4);
  lVar11 = unaff_x20[0xc];
  if ((((uint)uVar8 & 0xff00) == 0x100) || (((uint)uVar8 & 0xff) != 0x3a)) {
    _swift_beginAccess(lVar11 + 0x10,auStack_b0,0,0);
    uVar8 = *(undefined8 *)(*(long *)(lVar11 + 0x10) + 0x10);
    local_98 = uVar1;
    uStack_90 = uVar4;
    local_88 = lVar2;
    puStack_80 = puVar5;
    local_78 = uVar10;
    local_70 = uVar3;
    uStack_68 = uVar6;
    FUN_10085ddc4(uVar8,uVar8,&local_98);
    return;
  }
  puVar9 = (undefined1 *)(lVar11 + 0x10);
  _swift_beginAccess(puVar9,auStack_b0,0,0);
  if (*(long *)(*(long *)(lVar11 + 0x10) + 0x10) != 0) {
    uVar10 = 4;
    goto LAB_100865698;
  }
  puVar9 = (undefined1 *)0x646f6874656d3a;
  if ((lVar2 == 0x646f6874656d3a) && (puVar5 == &DAT_e700000000000000)) {
LAB_10086568c:
    if (unaff_x20[1] == 0) {
      *unaff_x20 = uVar3;
      unaff_x20[1] = uVar6;
      _swift_bridgeObjectRetain();
      return;
    }
  }
  else {
    expecting.value = (__int8)lVar2;
    bVar7 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x646f6874656d3a,(_StringGuts)0xe700000000000000,expecting);
    puVar9 = (undefined1 *)CONCAT71(extraout_var,bVar7);
    if (bVar7) goto LAB_10086568c;
    puVar9 = (undefined1 *)0x656d656863733a;
    if ((lVar2 == 0x656d656863733a) && (puVar5 == &DAT_e700000000000000)) {
LAB_100865738:
      if (unaff_x20[3] == 0) {
        unaff_x20[2] = uVar3;
        unaff_x20[3] = uVar6;
        _swift_bridgeObjectRetain();
        return;
      }
    }
    else {
      bVar7 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)0x656d656863733a,(_StringGuts)0xe700000000000000,expecting);
      puVar9 = (undefined1 *)CONCAT71(extraout_var_00,bVar7);
      if (bVar7) goto LAB_100865738;
      puVar9 = (undefined1 *)0x69726f687475613a;
      if ((lVar2 == 0x69726f687475613a) && (puVar5 == (undefined1 *)0xea00000000007974)) {
LAB_100865798:
        if (unaff_x20[5] == 0) {
          unaff_x20[4] = uVar3;
          unaff_x20[5] = uVar6;
          _swift_bridgeObjectRetain();
          return;
        }
      }
      else {
        bVar7 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x69726f687475613a,(_StringGuts)0xea00000000007974,expecting
                          );
        puVar9 = (undefined1 *)CONCAT71(extraout_var_01,bVar7);
        if (bVar7) goto LAB_100865798;
        puVar9 = (undefined1 *)0x687461703a;
        if ((lVar2 == 0x687461703a) && (puVar5 == &DAT_e500000000000000)) {
LAB_1008657ec:
          if (unaff_x20[7] == 0) {
            unaff_x20[6] = uVar3;
            unaff_x20[7] = uVar6;
            _swift_bridgeObjectRetain();
            return;
          }
        }
        else {
          bVar7 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x687461703a,(_StringGuts)0xe500000000000000,expecting);
          puVar9 = (undefined1 *)CONCAT71(extraout_var_02,bVar7);
          if (bVar7) goto LAB_1008657ec;
          puVar9 = (undefined1 *)0x6f636f746f72703a;
          if ((lVar2 == 0x6f636f746f72703a) && (puVar5 == (undefined1 *)0xe90000000000006c)) {
LAB_10086584c:
            if (unaff_x20[9] == 0) {
              unaff_x20[8] = uVar3;
              unaff_x20[9] = uVar6;
              _swift_bridgeObjectRetain();
              return;
            }
          }
          else {
            bVar7 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)0x6f636f746f72703a,(_StringGuts)0xe90000000000006c,
                               expecting);
            puVar9 = (undefined1 *)CONCAT71(extraout_var_03,bVar7);
            if (bVar7) goto LAB_10086584c;
            puVar9 = (undefined1 *)0x7375746174733a;
            if ((lVar2 != 0x7375746174733a) || (puVar5 != &DAT_e700000000000000)) {
              bVar7 = Swift::_stringCompareWithSmolCheck
                                ((_StringGuts)0x7375746174733a,(_StringGuts)0xe700000000000000,
                                 expecting);
              puVar9 = (undefined1 *)CONCAT71(extraout_var_04,bVar7);
              if (!bVar7) {
                uVar10 = 1;
                goto LAB_100865698;
              }
            }
            if (unaff_x20[0xb] == 0) {
              unaff_x20[10] = uVar3;
              unaff_x20[0xb] = uVar6;
              _swift_bridgeObjectRetain();
              return;
            }
          }
        }
      }
    }
  }
  uVar10 = 3;
LAB_100865698:
  FUN_100866648();
  _swift_allocError(&DAT_100f07848,puVar9,0,0);
  *puVar9 = uVar10;
  _swift_willThrow();
  return;
}



/* Address: 0x1008658c8 | FUN_1008658c8 */

void FUN_1008658c8(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x60);
  puVar1 = (undefined1 *)0x2d746e65746e6f63;
  FUN_100863a84(0x2d746e65746e6f63,0xee006874676e656c,uVar4);
  puVar2 = puVar1;
  FUN_1008659e0();
  _swift_bridgeObjectRelease();
  if (((ulong)puVar2 & 1) == 0) {
    uVar3 = 0xc;
  }
  else {
    puVar1 = (undefined1 *)0xd000000000000013;
    FUN_100863a84(0xd000000000000013,0x8000000100db2210,uVar4);
    puVar2 = puVar1;
    FUN_1008659e0();
    _swift_bridgeObjectRelease();
    if (((ulong)puVar2 & 1) == 0) {
      uVar3 = 0xd;
    }
    else {
      puVar1 = (undefined1 *)0x6e6f697461636f6c;
      FUN_100863a84(0x6e6f697461636f6c,&DAT_e800000000000000,uVar4);
      puVar2 = puVar1;
      FUN_1008659e0();
      _swift_bridgeObjectRelease();
      if (((ulong)puVar2 & 1) != 0) {
        return;
      }
      uVar3 = 0xe;
    }
  }
  FUN_100866648();
  _swift_allocError(&DAT_100f07848,puVar1,0,0);
  *puVar1 = uVar3;
  _swift_willThrow();
  return;
}



/* Address: 0x1008659e0 | FUN_1008659e0 */

undefined8 FUN_1008659e0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    return 1;
  }
  lVar4 = *(long *)(param_1 + 0x10) + -1;
  if (lVar4 != 0) {
    puVar1 = *(undefined **)(param_1 + 0x20);
    puVar2 = *(undefined **)(param_1 + 0x28);
    puVar5 = (undefined8 *)(param_1 + 0x38);
    do {
      if (((undefined *)puVar5[-1] != puVar1 || (undefined *)*puVar5 != puVar2) &&
         (bVar3 = Swift::_stringCompareWithSmolCheck
                            ((undefined *)puVar5[-1],(undefined *)*puVar5,
                             (_StringComparisonResult)(__int8)puVar1), !bVar3)) {
        return 0;
      }
      puVar5 = puVar5 + 2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return 1;
}



/* Address: 0x100865a60 | FUN_100865a60 */

undefined1  [16] FUN_100865a60(undefined1 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 uVar12;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  ulong unaff_x23;
  long lVar13;
  undefined8 uVar14;
  undefined1 *puVar15;
  char acVar16 [8];
  ulong uVar17;
  undefined1 *puVar18;
  ulong uVar19;
  long lVar20;
  undefined1 auVar21 [16];
  undefined8 local_a0;
  undefined1 auStack_80 [16];
  undefined1 *local_70;
  ulong uStack_68;
  
  uVar17 = unaff_x20[1];
  puVar15 = (undefined1 *)*unaff_x20;
  local_70 = puVar15;
  uStack_68 = uVar17;
  if (uVar17 == 0) {
    FUN_100866648();
    _swift_allocError(&DAT_100f07848,param_1,0,0);
    uVar12 = 5;
  }
  else {
    uVar19 = (ulong)puVar15 & 0xffffffffffff;
    if ((uVar17 & 0x2000000000000000) != 0) {
      uVar19 = uVar17 >> 0x38 & 0xf;
    }
    if ((uVar19 == 0) ||
       (param_1 = puVar15, FUN_10086b970(puVar15,uVar17), ((ulong)param_1 & 1) != 0)) {
      FUN_100866648();
      _swift_allocError(&DAT_100f07848,param_1,0,0);
      uVar12 = 6;
    }
    else {
      if (unaff_x20[0xb] == 0) {
        FUN_100866ce0(&local_70,auStack_80);
        FUN_1008658c8();
        if (unaff_x21 == 0) {
          lVar20 = unaff_x20[3];
          lVar1 = unaff_x20[5];
          lVar13 = unaff_x20[7];
          unaff_x22 = unaff_x20[0xc];
          if (lVar20 == 0) {
            local_a0 = 0;
            acVar16[0] = '\0';
            acVar16[1] = '\0';
            acVar16[2] = '\0';
            acVar16[3] = '\0';
            acVar16[4] = '\0';
            acVar16[5] = '\0';
            acVar16[6] = '\0';
            acVar16[7] = '\0';
            puVar18 = (undefined1 *)0x0;
          }
          else {
            puVar18 = &DAT_e700000000000000;
            acVar16[0] = ':';
            acVar16[1] = 's';
            acVar16[2] = 'c';
            acVar16[3] = 'h';
            acVar16[4] = 'e';
            acVar16[5] = 'm';
            acVar16[6] = 'e';
            acVar16[7] = '\0';
            local_a0 = unaff_x20[2];
          }
          bVar6 = lVar1 == 0;
          uVar14 = 0;
          if (!bVar6) {
            uVar14 = unaff_x20[4];
          }
          bVar7 = lVar13 == 0;
          uVar5 = 0;
          if (!bVar7) {
            uVar5 = unaff_x20[6];
          }
          unaff_x23 = 0;
          FUN_10086c690();
          _swift_allocObject();
          *(undefined8 *)(unaff_x23 + 0x88) = 0;
          *(undefined8 *)(unaff_x23 + 0x80) = 0;
          *(undefined8 *)(unaff_x23 + 0x98) = 0;
          *(undefined8 *)(unaff_x23 + 0x90) = 0;
          *(undefined8 *)(unaff_x23 + 0xa8) = 0;
          *(undefined8 *)(unaff_x23 + 0xa0) = 0;
          *(undefined8 *)(unaff_x23 + 0xb8) = 0;
          *(undefined8 *)(unaff_x23 + 0xb0) = 0;
          *(undefined8 *)(unaff_x23 + 200) = 0;
          *(undefined8 *)(unaff_x23 + 0xc0) = 0;
          *(undefined8 *)(unaff_x23 + 0xd8) = 0;
          *(undefined8 *)(unaff_x23 + 0xd0) = 0;
          *(undefined8 *)(unaff_x23 + 0xe8) = 0;
          *(undefined8 *)(unaff_x23 + 0xe0) = 0;
          *(undefined8 *)(unaff_x23 + 0xf8) = 0;
          *(undefined8 *)(unaff_x23 + 0xf0) = 0;
          *(undefined8 *)(unaff_x23 + 0x108) = 0;
          *(undefined8 *)(unaff_x23 + 0x100) = 0;
          *(undefined8 *)(unaff_x23 + 0x118) = 0;
          *(undefined8 *)(unaff_x23 + 0x110) = 0;
          *(undefined8 *)(unaff_x23 + 0x120) = 0;
          *(undefined8 *)(unaff_x23 + 0x10) = 0x646f6874656d3a;
          *(undefined1 **)(unaff_x23 + 0x18) = &DAT_e700000000000000;
          *(undefined8 *)(unaff_x23 + 0x20) = 0x646f6874656d3a;
          *(undefined1 **)(unaff_x23 + 0x28) = &DAT_e700000000000000;
          *(undefined1 *)(unaff_x23 + 0x30) = 0;
          *(undefined1 **)(unaff_x23 + 0x38) = puVar15;
          *(ulong *)(unaff_x23 + 0x40) = uVar17;
          *(undefined1 **)(unaff_x23 + 0x60) = puVar18;
          *(char (*) [8])(unaff_x23 + 0x58) = acVar16;
          *(undefined1 **)(unaff_x23 + 0x50) = puVar18;
          *(char (*) [8])(unaff_x23 + 0x48) = acVar16;
          *(undefined8 *)(unaff_x23 + 0x68) = 0;
          *(undefined8 *)(unaff_x23 + 0x70) = local_a0;
          *(long *)(unaff_x23 + 0x78) = lVar20;
          _swift_bridgeObjectRetain(lVar20);
          _swift_bridgeObjectRetain(lVar1);
          _swift_retain(unaff_x22);
          _swift_bridgeObjectRetain(lVar13);
          FUN_100864364(0,0,0,0,0,0,0);
          uVar2 = *(undefined8 *)(unaff_x23 + 0x80);
          uVar11 = *(undefined8 *)(unaff_x23 + 0x88);
          uVar3 = *(undefined8 *)(unaff_x23 + 0x90);
          uVar10 = *(undefined8 *)(unaff_x23 + 0x98);
          uVar4 = *(undefined8 *)(unaff_x23 + 0xa0);
          uVar9 = *(undefined8 *)(unaff_x23 + 0xa8);
          uVar8 = *(undefined8 *)(unaff_x23 + 0xb0);
          lVar20 = -(ulong)(-1 < (long)((ulong)(uint)bVar6 << 0x3f));
          uVar17 = -(ulong)(-1 < (long)((ulong)CONCAT14(bVar6,(uint)bVar6) << 0x3f)) &
                   0x69726f687475613a;
          uVar19 = CONCAT17((char)((ulong)lVar20 >> 0x38),(uint7)((ushort)lVar20 & 0x7974)) &
                   0xeaffffffffffffff;
          *(ulong *)(unaff_x23 + 0x88) = uVar19;
          *(ulong *)(unaff_x23 + 0x80) = uVar17;
          *(ulong *)(unaff_x23 + 0x98) = uVar19;
          *(ulong *)(unaff_x23 + 0x90) = uVar17;
          *(undefined8 *)(unaff_x23 + 0xa0) = 0;
          *(undefined8 *)(unaff_x23 + 0xa8) = uVar14;
          *(long *)(unaff_x23 + 0xb0) = lVar1;
          FUN_100864364(uVar2,uVar11,uVar3,uVar10,uVar4,uVar9,uVar8);
          uVar14 = *(undefined8 *)(unaff_x23 + 0xb8);
          uVar4 = *(undefined8 *)(unaff_x23 + 0xc0);
          uVar2 = *(undefined8 *)(unaff_x23 + 200);
          uVar11 = *(undefined8 *)(unaff_x23 + 0xd0);
          uVar3 = *(undefined8 *)(unaff_x23 + 0xd8);
          uVar10 = *(undefined8 *)(unaff_x23 + 0xe0);
          uVar9 = *(undefined8 *)(unaff_x23 + 0xe8);
          uVar17 = (ulong)(-(uint5)(-1 < (long)((ulong)CONCAT14(bVar7,(uint)bVar7) << 0x3f)) &
                          0x687461703a);
          lVar20 = (ulong)((byte)(-(ulong)(-1 < (long)((ulong)(uint)bVar7 << 0x3f)) >> 0x38) & 0xe5)
                   << 0x38;
          *(long *)(unaff_x23 + 0xc0) = lVar20;
          *(ulong *)(unaff_x23 + 0xb8) = uVar17;
          *(long *)(unaff_x23 + 0xd0) = lVar20;
          *(ulong *)(unaff_x23 + 200) = uVar17;
          *(undefined8 *)(unaff_x23 + 0xd8) = 0;
          *(undefined8 *)(unaff_x23 + 0xe0) = uVar5;
          *(long *)(unaff_x23 + 0xe8) = lVar13;
          FUN_100864364(uVar14,uVar4,uVar2,uVar11,uVar3,uVar10,uVar9);
          uVar14 = *(undefined8 *)(unaff_x23 + 0xf0);
          uVar3 = *(undefined8 *)(unaff_x23 + 0xf8);
          uVar5 = *(undefined8 *)(unaff_x23 + 0x100);
          uVar4 = *(undefined8 *)(unaff_x23 + 0x108);
          uVar2 = *(undefined8 *)(unaff_x23 + 0x110);
          uVar11 = *(undefined8 *)(unaff_x23 + 0x118);
          uVar10 = *(undefined8 *)(unaff_x23 + 0x120);
          *(undefined8 *)(unaff_x23 + 0xf8) = 0;
          *(undefined8 *)(unaff_x23 + 0xf0) = 0;
          *(undefined8 *)(unaff_x23 + 0x108) = 0;
          *(undefined8 *)(unaff_x23 + 0x100) = 0;
          *(undefined8 *)(unaff_x23 + 0x118) = 0;
          *(undefined8 *)(unaff_x23 + 0x110) = 0;
          *(undefined8 *)(unaff_x23 + 0x120) = 0;
          FUN_100864364(uVar14,uVar3,uVar5,uVar4,uVar2,uVar11,uVar10);
          lVar20 = unaff_x20[9];
          if (lVar20 != 0) {
            uVar14 = unaff_x20[8];
            _swift_bridgeObjectRetain(lVar20);
            uVar17 = unaff_x23;
            _swift_isUniquelyReferenced_nonNull_native();
            if ((uVar17 & 1) == 0) {
              FUN_100869e18();
              _swift_release(unaff_x23);
              unaff_x23 = uVar17;
            }
            uVar2 = *(undefined8 *)(unaff_x23 + 0xf8);
            uVar3 = *(undefined8 *)(unaff_x23 + 0x108);
            uVar5 = *(undefined8 *)(unaff_x23 + 0x110);
            uVar4 = *(undefined8 *)(unaff_x23 + 0x118);
            uVar11 = *(undefined8 *)(unaff_x23 + 0x120);
            *(undefined8 *)(unaff_x23 + 0xf8) = 0xe90000000000006c;
            builtin_strncpy((char *)(unaff_x23 + 0xf0),":protoco",8);
            *(undefined8 *)(unaff_x23 + 0x108) = 0xe90000000000006c;
            builtin_strncpy((char *)(unaff_x23 + 0x100),":protoco",8);
            *(undefined8 *)(unaff_x23 + 0x110) = 0;
            *(undefined8 *)(unaff_x23 + 0x118) = uVar14;
            *(long *)(unaff_x23 + 0x120) = lVar20;
            FUN_100864364(*(undefined8 *)(unaff_x23 + 0xf0),uVar2,*(undefined8 *)(unaff_x23 + 0x100)
                          ,uVar3,uVar5,uVar4,uVar11);
          }
        }
        else {
          FUN_100866d30(&local_70);
        }
        goto LAB_100865b40;
      }
      FUN_100866648();
      _swift_allocError(&DAT_100f07848,param_1,0,0);
      uVar12 = 7;
    }
  }
  *param_1 = uVar12;
  _swift_willThrow();
LAB_100865b40:
  auVar21._8_8_ = unaff_x22;
  auVar21._0_8_ = unaff_x23;
  return auVar21;
}



/* Address: 0x100865db8 | FUN_100865db8 */

void FUN_100865db8(undefined1 *param_1)

{
  code *pcVar1;
  __int64 _Var2;
  _StringObject _Var3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined1 uVar10;
  undefined1 *puVar11;
  UnsafeBufferPointer<__int8> UVar12;
  byte *pbVar13;
  undefined **ppuVar14;
  long lVar15;
  uint uVar16;
  long unaff_x20;
  long unaff_x21;
  undefined1 *puVar17;
  _StringObject _Var18;
  String SVar19;
  undefined *local_60;
  ulong uStack_58;
  code *local_50;
  undefined8 uStack_48;
  
  puVar17 = *(undefined1 **)(unaff_x20 + 0x58);
  if (puVar17 == (undefined1 *)0x0) {
    FUN_100866648();
    _swift_allocError(&DAT_100f07848,param_1,0,0);
    uVar10 = 8;
LAB_100865e4c:
    *param_1 = uVar10;
    _swift_willThrow();
    return;
  }
  if ((((*(long *)(unaff_x20 + 8) != 0) || (*(long *)(unaff_x20 + 0x18) != 0)) ||
      (*(long *)(unaff_x20 + 0x28) != 0)) ||
     ((*(long *)(unaff_x20 + 0x38) != 0 || (*(long *)(unaff_x20 + 0x48) != 0)))) {
    FUN_100866648();
    _swift_allocError(&DAT_100f07848,param_1,0,0);
    uVar10 = 10;
    goto LAB_100865e4c;
  }
  _Var18.unknown = *(undefined **)(unaff_x20 + 0x50);
  _swift_bridgeObjectRetain(puVar17);
  SVar19.bridgeObject = puVar17;
  SVar19.str = _Var18.unknown;
  _Var2 = Swift::String::get_count(SVar19);
  if ((_Var2 != 3) ||
     (_Var3.unknown = _Var18.unknown, FUN_10087055c(_Var18.unknown,puVar17),
     ((ulong)_Var3.unknown & 1) != 0)) {
    _swift_bridgeObjectRelease();
    FUN_100866648();
    _swift_allocError(&DAT_100f07848,puVar17,0,0);
    uVar10 = 9;
    param_1 = puVar17;
    goto LAB_100865e4c;
  }
  FUN_1008658c8();
  if (unaff_x21 != 0) {
    _swift_bridgeObjectRelease(puVar17);
    return;
  }
  puVar7 = (undefined1 *)((ulong)_Var18.unknown & 0xffffffffffff);
  puVar11 = (undefined1 *)((ulong)puVar17 >> 0x38 & 0xf);
  puVar9 = puVar7;
  if (((ulong)puVar17 & 0x2000000000000000) != 0) {
    puVar9 = puVar11;
  }
  if (puVar9 == (undefined1 *)0x0) {
    _swift_bridgeObjectRelease(puVar17);
    goto LAB_100866254;
  }
  if (((ulong)puVar17 >> 0x3c & 1) == 0) {
    if (((ulong)puVar17 >> 0x3d & 1) == 0) {
      if (((ulong)_Var18.unknown >> 0x3c & 1) == 0) {
        puVar7 = puVar17;
        UVar12 = Swift::_StringObject::get_sharedUTF8(_Var18);
      }
      else {
        UVar12.unknown = (undefined *)(((ulong)puVar17 & 0xfffffffffffffff) + 0x20);
      }
      if (*UVar12.unknown == 0x2b) {
        if ((long)puVar7 < 1) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100866294);
          (*pcVar1)();
        }
        puVar7 = puVar7 + -1;
        if (puVar7 == (undefined1 *)0x0) goto LAB_10086614c;
        _Var18.unknown = (undefined *)0x0;
        do {
          UVar12.unknown = UVar12.unknown + 1;
          if (((9 < (byte)*UVar12.unknown - 0x30) ||
              (lVar15 = (long)_Var18.unknown * 10,
              SUB168(SEXT816((long)_Var18.unknown) * SEXT816(10),8) != lVar15 >> 0x3f)) ||
             (uVar4 = (ulong)(byte)((byte)*UVar12.unknown - 0x30),
             _Var18.unknown = (undefined *)(lVar15 + uVar4), SCARRY8(lVar15,uVar4)))
          goto LAB_10086614c;
          uVar16 = 0;
          puVar7 = puVar7 + -1;
        } while (puVar7 != (undefined1 *)0x0);
      }
      else if (*UVar12.unknown == 0x2d) {
        if ((long)puVar7 < 1) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10086628c);
          (*pcVar1)();
        }
        puVar7 = puVar7 + -1;
        if (puVar7 == (undefined1 *)0x0) {
LAB_10086614c:
          _Var18.unknown = (undefined *)0x0;
          uVar16 = 1;
        }
        else {
          _Var18.unknown = (undefined *)0x0;
          do {
            UVar12.unknown = UVar12.unknown + 1;
            if (((9 < (byte)*UVar12.unknown - 0x30) ||
                (lVar15 = (long)_Var18.unknown * 10,
                SUB168(SEXT816((long)_Var18.unknown) * SEXT816(10),8) != lVar15 >> 0x3f)) ||
               (uVar4 = (ulong)(byte)((byte)*UVar12.unknown - 0x30),
               _Var18.unknown = (undefined *)(lVar15 - uVar4), SBORROW8(lVar15,uVar4)))
            goto LAB_10086614c;
            uVar16 = 0;
            puVar7 = puVar7 + -1;
          } while (puVar7 != (undefined1 *)0x0);
        }
      }
      else {
        if (puVar7 == (undefined1 *)0x0) goto LAB_10086614c;
        if (UVar12.unknown == (byte *)0x0) {
          uVar16 = 0;
          _Var18.unknown = (undefined *)0x0;
        }
        else {
          _Var18.unknown = (undefined *)0x0;
          do {
            if (((9 < (byte)*UVar12.unknown - 0x30) ||
                (lVar15 = (long)_Var18.unknown * 10,
                SUB168(SEXT816((long)_Var18.unknown) * SEXT816(10),8) != lVar15 >> 0x3f)) ||
               (uVar4 = (ulong)(byte)((byte)*UVar12.unknown - 0x30),
               _Var18.unknown = (undefined *)(lVar15 + uVar4), SCARRY8(lVar15,uVar4)))
            goto LAB_10086614c;
            uVar16 = 0;
            puVar7 = puVar7 + -1;
            UVar12.unknown = UVar12.unknown + 1;
          } while (puVar7 != (undefined1 *)0x0);
        }
      }
    }
    else {
      local_60 = _Var18.unknown;
      uStack_58 = (ulong)puVar17 & 0xffffffffffffff;
      uVar16 = (uint)_Var18.unknown & 0xff;
      if (uVar16 == 0x2b) {
        if (puVar11 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100866298);
          (*pcVar1)();
        }
        puVar11 = puVar11 + -1;
        if (puVar11 == (undefined1 *)0x0) goto LAB_10086614c;
        _Var18.unknown = (undefined *)0x0;
        pbVar13 = (byte *)((ulong)&local_60 | 1);
        do {
          if (((9 < *pbVar13 - 0x30) ||
              (lVar15 = (long)_Var18.unknown * 10,
              SUB168(SEXT816((long)_Var18.unknown) * SEXT816(10),8) != lVar15 >> 0x3f)) ||
             (uVar4 = (ulong)(byte)(*pbVar13 - 0x30), _Var18.unknown = (undefined *)(lVar15 + uVar4)
             , SCARRY8(lVar15,uVar4))) goto LAB_10086614c;
          uVar16 = 0;
          puVar11 = puVar11 + -1;
          pbVar13 = pbVar13 + 1;
        } while (puVar11 != (undefined1 *)0x0);
      }
      else if (uVar16 == 0x2d) {
        if (puVar11 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100866290);
          (*pcVar1)();
        }
        puVar11 = puVar11 + -1;
        if (puVar11 == (undefined1 *)0x0) goto LAB_10086614c;
        _Var18.unknown = (undefined *)0x0;
        pbVar13 = (byte *)((ulong)&local_60 | 1);
        do {
          if (((9 < *pbVar13 - 0x30) ||
              (lVar15 = (long)_Var18.unknown * 10,
              SUB168(SEXT816((long)_Var18.unknown) * SEXT816(10),8) != lVar15 >> 0x3f)) ||
             (uVar4 = (ulong)(byte)(*pbVar13 - 0x30), _Var18.unknown = (undefined *)(lVar15 - uVar4)
             , SBORROW8(lVar15,uVar4))) goto LAB_10086614c;
          uVar16 = 0;
          puVar11 = puVar11 + -1;
          pbVar13 = pbVar13 + 1;
        } while (puVar11 != (undefined1 *)0x0);
      }
      else {
        if (puVar11 == (undefined1 *)0x0) goto LAB_10086614c;
        _Var18.unknown = (undefined *)0x0;
        ppuVar14 = &local_60;
        do {
          if (((9 < *(byte *)ppuVar14 - 0x30) ||
              (lVar15 = (long)_Var18.unknown * 10,
              SUB168(SEXT816((long)_Var18.unknown) * SEXT816(10),8) != lVar15 >> 0x3f)) ||
             (uVar4 = (ulong)(byte)(*(byte *)ppuVar14 - 0x30),
             _Var18.unknown = (undefined *)(lVar15 + uVar4), SCARRY8(lVar15,uVar4)))
          goto LAB_10086614c;
          uVar16 = 0;
          puVar11 = puVar11 + -1;
          ppuVar14 = (undefined **)((long)ppuVar14 + 1);
        } while (puVar11 != (undefined1 *)0x0);
      }
    }
  }
  else {
    puVar9 = puVar17;
    FUN_100866b90(_Var18.unknown,puVar17,10);
    uVar16 = (uint)puVar9;
  }
  _swift_bridgeObjectRelease(puVar17);
  if ((uVar16 & 0xff) != 1) {
    if (_Var18.unknown < (undefined *)0x3e8) {
      uVar4 = 0;
      FUN_100870388(0,0xe000000000000000);
      if ((uVar4 & 1) != 0) {
        local_60 = (undefined *)0x0;
        uStack_58 = 0xe000000000000000;
        local_50 = FUN_10086e6f8;
        uStack_48 = 0;
        puVar5 = &DAT_100fe8798;
        FUN_1000f7830(&DAT_100fe8798,&DAT_100c7e440);
        puVar6 = puVar5;
        FUN_100866c90();
        Swift::String::UnicodeScalarView::_append(&local_60,puVar5,puVar6);
      }
      uVar8 = 0;
      _swift_retain(*(undefined8 *)(unaff_x20 + 0x60));
      FUN_10086e434(_Var18.unknown,0,0xe000000000000000);
      lVar15 = 0;
      FUN_10087053c();
      _swift_allocObject();
      *(undefined8 *)(lVar15 + 0x10) = 0x7375746174733a;
      *(undefined1 **)(lVar15 + 0x18) = &DAT_e700000000000000;
      *(undefined8 *)(lVar15 + 0x20) = 0x7375746174733a;
      *(undefined1 **)(lVar15 + 0x28) = &DAT_e700000000000000;
      *(undefined1 *)(lVar15 + 0x30) = 0;
      *(undefined **)(lVar15 + 0x38) = _Var18.unknown;
      *(undefined8 *)(lVar15 + 0x40) = uVar8;
      *(undefined8 *)(lVar15 + 0x48) = 0;
      *(undefined8 *)(lVar15 + 0x50) = 0xe000000000000000;
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100866278);
    (*pcVar1)();
  }
LAB_100866254:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100866258);
  (*pcVar1)();
}



/* Address: 0x100866298 | FUN_100866298 */

void FUN_100866298(undefined8 param_1)

{
  FUN_1008662fc(param_1,FUN_100865a60);
  return;
}



/* Address: 0x1008662b4 | FUN_1008662b4 */

undefined8 FUN_1008662b4(undefined8 param_1)

{
  FUN_1008667d8(param_1,&DAT_100f078c0);
  return param_1;
}



/* Address: 0x1008662e0 | FUN_1008662e0 */

void FUN_1008662e0(undefined8 param_1)

{
  FUN_1008662fc(param_1,FUN_100865db8);
  return;
}



/* Address: 0x1008662fc | FUN_1008662fc */

void FUN_1008662fc(long param_1,code *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  long unaff_x21;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_1b8 [56];
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  long local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  uStack_128 = 0;
  local_130 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_168 = 0;
  local_170 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_178 = 0;
  local_180 = 0;
  lVar5 = param_1;
  FUN_10085c548();
  uVar3 = *(ulong *)(param_1 + 0x10);
  local_120 = lVar5;
  if (uVar3 != 0) {
    uVar4 = 0;
    lVar5 = 0x20;
    do {
      if (*(ulong *)(param_1 + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100866458);
        (*pcVar2)();
      }
      puVar1 = (undefined8 *)(param_1 + lVar5);
      uStack_98 = puVar1[1];
      local_a0 = *puVar1;
      uStack_88 = puVar1[3];
      uStack_90 = puVar1[2];
      uStack_78 = puVar1[5];
      local_80 = puVar1[4];
      local_70 = puVar1[6];
      FUN_100864328(&local_a0,auStack_1b8);
      FUN_100865578(&local_a0);
      if (unaff_x21 != 0) {
        _swift_bridgeObjectRelease(param_1);
        FUN_1006ec3e4(&local_a0);
        goto LAB_100866428;
      }
      uVar4 = uVar4 + 1;
      FUN_1006ec3e4(&local_a0);
      lVar5 = lVar5 + 0x38;
    } while (uVar3 != uVar4);
  }
  _swift_bridgeObjectRelease(param_1);
  uStack_c8 = uStack_138;
  local_d0 = local_140;
  uStack_b8 = uStack_128;
  uStack_c0 = local_130;
  local_b0 = local_120;
  uStack_108 = uStack_178;
  local_110 = local_180;
  uStack_f8 = uStack_168;
  uStack_100 = local_170;
  uStack_e8 = uStack_158;
  local_f0 = local_160;
  uStack_d8 = uStack_148;
  uStack_e0 = local_150;
  (*param_2)();
  if (unaff_x21 == 0) {
    FUN_1008662b4(&local_180);
  }
  else {
LAB_100866428:
    FUN_1008662b4(&local_180);
  }
  return;
}



/* Address: 0x100866458 | FUN_100866458 */

undefined8 * FUN_100866458(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  uint uVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *unaff_x20;
  long unaff_x21;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_1b8 [56];
  undefined8 local_180;
  long lStack_178;
  undefined8 local_170;
  long lStack_168;
  undefined8 local_160;
  long lStack_158;
  undefined8 local_150;
  long lStack_148;
  undefined8 local_140;
  long lStack_138;
  undefined8 local_130;
  long lStack_128;
  undefined8 *local_120;
  undefined8 local_110;
  long lStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 local_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  long local_d8;
  undefined8 local_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long local_b8;
  undefined8 *local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar5 = param_1;
  FUN_10085c548();
  lStack_128 = 0;
  local_130 = 0;
  lStack_148 = 0;
  local_150 = 0;
  lStack_138 = 0;
  local_140 = 0;
  lStack_168 = 0;
  local_170 = 0;
  lStack_158 = 0;
  local_160 = 0;
  lStack_178 = 0;
  local_180 = 0;
  puVar6 = puVar5;
  FUN_10085c548();
  uVar7 = param_1[2];
  local_120 = puVar6;
  if (uVar7 != 0) {
    uVar8 = 0;
    lVar9 = 0x20;
    do {
      if ((ulong)param_1[2] <= uVar8) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100866648);
        (*pcVar4)();
      }
      puVar6 = (undefined8 *)((long)param_1 + lVar9);
      uStack_98 = puVar6[1];
      local_a0 = *puVar6;
      uStack_88 = puVar6[3];
      uStack_90 = puVar6[2];
      uStack_78 = puVar6[5];
      local_80 = puVar6[4];
      local_70 = puVar6[6];
      FUN_100864328(&local_a0,auStack_1b8);
      unaff_x20 = &local_180;
      FUN_100865578(&local_a0);
      if (unaff_x21 != 0) {
        _swift_release(puVar5);
        _swift_bridgeObjectRelease(param_1);
        FUN_1006ec3e4(&local_a0);
        goto LAB_100866614;
      }
      uVar8 = uVar8 + 1;
      FUN_1006ec3e4(&local_a0);
      lVar9 = lVar9 + 0x38;
    } while (uVar7 != uVar8);
  }
  _swift_bridgeObjectRelease();
  lStack_e8 = lStack_158;
  local_f0 = local_160;
  local_d8 = lStack_148;
  uStack_e0 = local_150;
  lStack_108 = lStack_178;
  local_110 = local_180;
  lStack_f8 = lStack_168;
  uStack_100 = local_170;
  lStack_c8 = lStack_138;
  local_d0 = local_140;
  local_b8 = lStack_128;
  uStack_c0 = local_130;
  local_b0 = local_120;
  lVar9 = -(ulong)(lStack_158 == 0);
  lVar3 = -(ulong)(lStack_148 == 0);
  lVar10 = -(ulong)(lStack_178 == 0);
  lVar11 = -(ulong)(lStack_168 == 0);
  auVar1[1] = ~(byte)((ulong)lVar10 >> 8);
  auVar1[0] = ~(byte)lVar10;
  auVar1[2] = ~(byte)((ulong)lVar10 >> 0x10);
  auVar1[3] = ~(byte)((ulong)lVar10 >> 0x18);
  auVar1[4] = ~(byte)lVar11;
  auVar1[5] = ~(byte)((ulong)lVar11 >> 8);
  auVar1[6] = ~(byte)((ulong)lVar11 >> 0x10);
  auVar1[7] = ~(byte)((ulong)lVar11 >> 0x18);
  auVar1[8] = ~(byte)lVar9;
  auVar1[9] = ~(byte)((ulong)lVar9 >> 8);
  auVar1[10] = ~(byte)((ulong)lVar9 >> 0x10);
  auVar1[0xb] = ~(byte)((ulong)lVar9 >> 0x18);
  auVar1[0xc] = ~(byte)lVar3;
  auVar1[0xd] = ~(byte)((ulong)lVar3 >> 8);
  auVar1[0xe] = ~(byte)((ulong)lVar3 >> 0x10);
  auVar1[0xf] = ~(byte)((ulong)lVar3 >> 0x18);
  uVar2 = NEON_umaxv(auVar1,4);
  if ((((uVar2 & 1) == 0) && (lStack_138 == 0)) && (lStack_128 == 0)) {
    unaff_x20 = &local_110;
    FUN_1008658c8();
    puVar6 = local_b0;
    if (unaff_x21 == 0) {
      _swift_retain(local_b0);
      _swift_release(puVar5);
      FUN_1008662b4(&local_180);
      return puVar6;
    }
  }
  else {
    FUN_100866648();
    _swift_allocError(&DAT_100f07848,param_1,0,0);
    *(undefined1 *)param_1 = 0xb;
    _swift_willThrow();
  }
  _swift_release(puVar5);
LAB_100866614:
  FUN_1008662b4(&local_180);
  return unaff_x20;
}



/* Address: 0x100866648 | FUN_100866648 */

void FUN_100866648(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe8788 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7e3fc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7e3fc,&DAT_100f07848);
  DAT_100fe8788 = pTVar1;
  return;
}



/* Address: 0x100866688 | FUN_100866688 */

int FUN_100866688(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf1 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0xe) {
      iVar2 = 4;
    }
    if (param_2 + 0xe >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_100866704;
        goto LAB_1008666e8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1008666e8:
      return ((uint)*param_1 | uVar1 << 8) - 0xe;
    }
  }
LAB_100866704:
  iVar2 = *param_1 - 0xf;
  if (*param_1 < 0xf) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Address: 0x100866718 | FUN_100866718 */

void FUN_100866718(char *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 2;
  if (0xfffeff < param_3 + 0xe) {
    uVar3 = 4;
  }
  if (param_3 + 0xe >> 8 < 0xff) {
    uVar3 = 1;
  }
  uVar2 = 0;
  if (0xf1 < param_3) {
    uVar2 = uVar3;
  }
  if (param_2 < 0xf2) {
    if (uVar2 < 2) {
      if (uVar2 != 0) {
        param_1[1] = '\0';
        if (param_2 == 0) {
          return;
        }
        goto LAB_100866798;
      }
    }
    else if (uVar2 == 2) {
      param_1[1] = '\0';
      param_1[2] = '\0';
    }
    else {
      param_1[1] = '\0';
      param_1[2] = '\0';
      param_1[3] = '\0';
      param_1[4] = '\0';
    }
    if (param_2 != 0) {
LAB_100866798:
      *param_1 = (char)param_2 + '\x0e';
      return;
    }
  }
  else {
    iVar1 = (param_2 - 0xf2 >> 8) + 1;
    *param_1 = (char)(param_2 - 0xf2);
    if (1 < uVar2) {
      if (uVar2 != 2) {
        *(int *)(param_1 + 1) = iVar1;
        return;
      }
      *(short *)(param_1 + 1) = (short)iVar1;
      return;
    }
    if (uVar2 != 0) {
      param_1[1] = (char)iVar1;
      return;
    }
  }
  return;
}



/* Address: 0x1008667c8 | FUN_1008667c8 */

undefined1  [16] FUN_1008667c8(void)

{
  return ZEXT816(0x100f07848);
}



/* Address: 0x1008667d8 | FUN_1008667d8 */

void FUN_1008667d8(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x38));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x48));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x58));
  _swift_release(*(undefined8 *)(param_1 + 0x60));
  return;
}



/* Address: 0x100866828 | FUN_100866828 */

undefined8 * FUN_100866828(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar3 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar3;
  uVar4 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar4;
  param_1[10] = param_2[10];
  uVar5 = param_2[0xc];
  uVar6 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar6;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar6);
  _swift_retain(uVar5);
  return param_1;
}



/* Address: 0x1008668d8 | FUN_1008668d8 */

undefined8 * FUN_1008668d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[4] = param_2[4];
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[6] = param_2[6];
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[8] = param_2[8];
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[10] = param_2[10];
  uVar1 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[0xc];
  param_1[0xc] = param_2[0xc];
  _swift_retain();
  _swift_release(uVar1);
  return param_1;
}



/* Address: 0x1008669dc | FUN_1008669dc */

void FUN_1008669dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = param_2[2];
  uVar5 = param_2[5];
  uVar4 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  param_1[5] = uVar5;
  param_1[4] = uVar4;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  uVar2 = param_2[7];
  uVar1 = param_2[6];
  uVar4 = param_2[9];
  uVar3 = param_2[8];
  uVar6 = param_2[0xb];
  uVar5 = param_2[10];
  param_1[0xc] = param_2[0xc];
  param_1[9] = uVar4;
  param_1[8] = uVar3;
  param_1[0xb] = uVar6;
  param_1[10] = uVar5;
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  return;
}



/* Address: 0x100866a08 | FUN_100866a08 */

undefined8 * FUN_100866a08(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[5];
  uVar1 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[7];
  uVar1 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[9];
  uVar1 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  param_1[10] = param_2[10];
  _swift_bridgeObjectRelease(param_1[0xb]);
  uVar2 = param_1[0xc];
  uVar1 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar1;
  _swift_release(uVar2);
  return param_1;
}



/* Address: 0x100866a9c | FUN_100866a9c */

int FUN_100866a9c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x1a] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 0x18);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x100866ae4 | FUN_100866ae4 */

void FUN_100866ae4(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
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
      *(undefined1 *)(param_1 + 0xd) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 0xd) = 0;
    }
    if (param_2 != 0) {
      param_1[0xc] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x100866b3c | FUN_100866b3c */

undefined1  [16] FUN_100866b3c(void)

{
  return ZEXT816(0x100f078c0);
}



/* Address: 0x100866b4c | thunk_FUN_100866b50 */

void thunk_FUN_100866b50(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe8790 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7e3d4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7e3d4,&DAT_100f07848);
  DAT_100fe8790 = pTVar1;
  return;
}



/* Address: 0x100866b50 | FUN_100866b50 */

void FUN_100866b50(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe8790 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7e3d4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7e3d4,&DAT_100f07848);
  DAT_100fe8790 = pTVar1;
  return;
}



/* Address: 0x100866b90 | FUN_100866b90 */

/* WARNING: Removing unreachable block (ram,0x000100866c84) */

undefined1  [16] FUN_100866b90(undefined *param_1,ulong param_2,undefined8 param_3)

{
  undefined *puVar1;
  _StringObject _Var2;
  UnsafeBufferPointer<__int8> UVar3;
  void *pvVar4;
  void *pvVar5;
  String SVar6;
  undefined1 auVar7 [16];
  undefined *local_40;
  ulong uStack_38;
  
  local_40 = param_1;
  uStack_38 = param_2;
  _swift_bridgeObjectRetain(param_2);
  SVar6 = Swift::String::_init
                    (&local_40,PTR___type_metadata_for_Swift_String_100eac208,
                     PTR___protocol_witness_table_for_Swift_String___Swift_LosslessStringConvertible_in_Swift_100eac270
                     ,
                     PTR___protocol_witness_table_for_Swift_String___Swift_Sequence_in_Swift_100eac238
                    );
  pvVar4 = SVar6.bridgeObject;
  puVar1 = local_40;
  if (((ulong)pvVar4 >> 0x3c & 1) != 0) {
    FUN_100874744();
    _swift_bridgeObjectRelease(pvVar4);
    puVar1 = local_40;
    pvVar4 = SVar6.bridgeObject;
  }
  local_40 = SVar6.str;
  pvVar5 = SVar6.bridgeObject;
  if (((ulong)pvVar4 >> 0x3d & 1) == 0) {
    if (((ulong)local_40 >> 0x3c & 1) == 0) {
      pvVar4 = pvVar5;
      _Var2.unknown = local_40;
      local_40 = puVar1;
      UVar3 = Swift::_StringObject::get_sharedUTF8(_Var2);
    }
    else {
      UVar3.unknown = (undefined *)(((ulong)pvVar5 & 0xfffffffffffffff) + 0x20);
      pvVar4 = (void *)((ulong)local_40 & 0xffffffffffff);
      local_40 = puVar1;
    }
    FUN_1000c43a8(UVar3.unknown);
  }
  else {
    pvVar4 = (void *)((ulong)pvVar5 >> 0x38 & 0xf);
    uStack_38 = (ulong)pvVar5 & 0xffffffffffffff;
    UVar3.unknown = (undefined *)&local_40;
    FUN_1000c43a8(UVar3.unknown,pvVar4,param_3);
  }
  _swift_bridgeObjectRelease(pvVar5);
  auVar7._8_8_ = pvVar4;
  auVar7._0_8_ = UVar3.unknown;
  return auVar7;
}



/* Address: 0x100866c90 | FUN_100866c90 */

void FUN_100866c90(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fe87a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fe8798;
  FUN_1000f8b08(&DAT_100fe8798,&DAT_100c7e440);
  puVar2 = PTR_Swift__Swift__LazyMapSequence<undefined,undefined>_>Swift__Sequence_100ead1b0;
  _swift_getWitnessTable
            (PTR_Swift__Swift__LazyMapSequence<undefined,undefined>_>Swift__Sequence_100ead1b0,
             puVar1);
  DAT_100fe87a0 = puVar2;
  return;
}



/* Address: 0x100866ce0 | FUN_100866ce0 */

undefined8 FUN_100866ce0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fe87a8;
  FUN_1000f7830(&DAT_100fe87a8,&DAT_100c7e448);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100866d30 | FUN_100866d30 */

undefined8 FUN_100866d30(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fe87a8;
  FUN_1000f7830(&DAT_100fe87a8,&DAT_100c7e448);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x100866d78 | FUN_100866d78 */

void FUN_100866d78(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  ulong uVar14;
  undefined1 *puVar15;
  _StringGuts _Var16;
  URL UVar17;
  undefined8 uVar18;
  _StringGuts _Var19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  undefined1 *puVar23;
  long lVar24;
  undefined *puVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  long lVar29;
  undefined8 uVar30;
  undefined1 auStack_e8 [16];
  undefined8 local_d8;
  long lStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long lStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  if ((*(undefined **)(param_2 + 0x38) == (undefined *)0x5443454e4e4f43 &&
       *(undefined **)(param_2 + 0x40) == &DAT_e700000000000000) ||
     (bVar13 = Swift::_stringCompareWithSmolCheck
                         ((_StringGuts)*(undefined **)(param_2 + 0x38),
                          (_StringGuts)*(undefined **)(param_2 + 0x40),(_StringComparisonResult)0x43
                         ), bVar13)) {
    lVar22 = *(long *)(param_2 + 0xf8);
    if (lVar22 == 0) goto LAB_100867148;
    uVar27 = *(undefined8 *)(param_2 + 0xf0);
    uVar1 = *(undefined8 *)(param_2 + 0x100);
    uVar5 = *(undefined8 *)(param_2 + 0x108);
    uVar2 = *(undefined8 *)(param_2 + 0x110);
    uVar6 = *(ulong *)(param_2 + 0x118);
    uVar28 = *(undefined8 *)(param_2 + 0x120);
    uVar14 = uVar6;
    FUN_100858afc(uVar6,uVar28);
    if ((uVar14 & 1) != 0) {
      FUN_100867d14(uVar27,lVar22,uVar1,uVar5,uVar2,uVar6,uVar28);
      uVar18 = uVar28;
      FUN_100872ba8(uVar6,uVar28);
      FUN_100864364(uVar27,lVar22,uVar1,uVar5,uVar2,uVar6,uVar28);
      _swift_bridgeObjectRelease(uVar18);
    }
  }
  if (((*(undefined **)(param_2 + 0x38) == (undefined *)0x534e4f4954504f &&
        *(undefined **)(param_2 + 0x40) == &DAT_e700000000000000) ||
      (bVar13 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)*(undefined **)(param_2 + 0x38),
                           (_StringGuts)*(undefined **)(param_2 + 0x40),
                           (_StringComparisonResult)0x4f), bVar13)) &&
     (lVar22 = *(long *)(param_2 + 0xc0), lVar22 != 0)) {
    uVar27 = *(undefined8 *)(param_2 + 0xb8);
    uVar1 = *(undefined8 *)(param_2 + 200);
    uVar5 = *(undefined8 *)(param_2 + 0xd0);
    uVar2 = *(undefined8 *)(param_2 + 0xd8);
    puVar23 = *(undefined1 **)(param_2 + 0xe0);
    puVar25 = *(undefined **)(param_2 + 0xe8);
    puVar15 = puVar23;
    FUN_100858afc(puVar23,puVar25);
    _Var16.unknown = puVar23;
    _Var19.unknown = puVar25;
    if (((ulong)puVar15 & 1) == 0) {
      _swift_bridgeObjectRetain(puVar25);
      if (puVar23 == &DAT_0000002a) goto LAB_100866f34;
    }
    else {
      FUN_100867d14(uVar27,lVar22,uVar1,uVar5,uVar2,puVar23,puVar25);
      FUN_100872ba8();
      FUN_100864364(uVar27,lVar22,uVar1,uVar5,uVar2,puVar23,puVar25);
      puVar23 = _Var16.unknown;
      puVar25 = _Var19.unknown;
      if (_Var16.unknown == &DAT_0000002a) {
LAB_100866f34:
        _Var16.unknown = puVar23;
        _Var19.unknown = puVar25;
        if (puVar25 == (undefined *)0xe100000000000000) {
          _swift_bridgeObjectRelease(0xe100000000000000);
          goto LAB_100867148;
        }
      }
    }
    bVar13 = Swift::_stringCompareWithSmolCheck(_Var16,_Var19,(_StringComparisonResult)0x2a);
    _swift_bridgeObjectRelease(_Var19.unknown);
    if (bVar13) goto LAB_100867148;
  }
  lVar22 = *(long *)(param_2 + 0x50);
  if ((lVar22 != 0) && (lVar29 = *(long *)(param_2 + 0x88), lVar29 != 0)) {
    uVar21 = *(undefined8 *)(param_2 + 0x48);
    uVar1 = *(undefined8 *)(param_2 + 0x58);
    uVar18 = *(undefined8 *)(param_2 + 0x60);
    uVar2 = *(undefined8 *)(param_2 + 0x68);
    uVar7 = *(undefined8 *)(param_2 + 0x70);
    uVar5 = *(undefined8 *)(param_2 + 0x78);
    uVar8 = *(undefined8 *)(param_2 + 0x80);
    uVar27 = *(undefined8 *)(param_2 + 0x90);
    uVar9 = *(undefined8 *)(param_2 + 0x98);
    uVar28 = *(undefined8 *)(param_2 + 0xa0);
    uVar10 = *(undefined8 *)(param_2 + 0xa8);
    uVar20 = *(undefined8 *)(param_2 + 0xb0);
    local_b8 = (undefined1)uVar28;
    lVar24 = *(long *)(param_2 + 0xc0);
    local_d8 = uVar8;
    lStack_d0 = lVar29;
    local_c8 = uVar27;
    uStack_c0 = uVar9;
    local_b0 = uVar10;
    uStack_a8 = uVar20;
    if (lVar24 != 0) {
      uVar3 = *(undefined8 *)(param_2 + 0xe0);
      uVar11 = *(undefined8 *)(param_2 + 0xe8);
      uVar4 = *(undefined8 *)(param_2 + 0xd0);
      uVar12 = *(undefined8 *)(param_2 + 0xd8);
      uVar26 = *(undefined8 *)(param_2 + 200);
      uVar30 = *(undefined8 *)(param_2 + 0xb8);
      local_80 = (undefined1)uVar12;
      local_a0 = uVar30;
      lStack_98 = lVar24;
      local_90 = uVar26;
      uStack_88 = uVar4;
      local_78 = uVar3;
      uStack_70 = uVar11;
      FUN_100867d14(uVar8,lVar29,uVar27,uVar9,uVar28,uVar10);
      FUN_100867d14(uVar30,lVar24,uVar26,uVar4,uVar12,uVar3,uVar11);
      FUN_100867d14(uVar8,lVar29,uVar27,uVar9,uVar28,uVar10,uVar20);
      FUN_100867d14(uVar30,lVar24,uVar26,uVar4,uVar12,uVar3,uVar11);
      FUN_100867d14(uVar21,lVar22,uVar1,uVar18,uVar2,uVar7,uVar5);
      FUN_100871be0(param_1,uVar7,uVar5,&local_d8,&local_a0,auStack_e8);
      FUN_100864364(uVar8,lVar29,uVar27,uVar9,uVar28,uVar10,uVar20);
      FUN_100864364(uVar30,lVar24,uVar26,uVar4,uVar12,uVar3,uVar11);
      FUN_100864364(uVar21,lVar22,uVar1,uVar18,uVar2,uVar7,uVar5);
      return;
    }
  }
LAB_100867148:
  UVar17 = Foundation::URL::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x000100867184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(UVar17.unknown + -8) + 0x38))(param_1,1,1,UVar17.unknown);
  return;
}



/* Address: 0x100867188 | FUN_100867188 */

void FUN_100867188(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  URL UVar8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  undefined1 *puVar12;
  URL UVar13;
  undefined8 uVar15;
  ulong *unaff_x20;
  ulong uVar16;
  char *pcVar17;
  long lVar18;
  void *pvVar19;
  long lVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  tuple2_conflict1 tVar24;
  void *pvVar14;
  
  puVar7 = &DAT_100fe87b0;
  FUN_1000f7830(&DAT_100fe87b0,&DAT_100c7e450);
  puVar12 = &stack0xffffffffffffffa0 +
            -(*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  UVar8 = Foundation::URL::typeMetadataAccessor();
  lVar20 = *(long *)(UVar8.unknown + -8);
  lVar18 = (long)puVar12 - (*(long *)(lVar20 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100867d50(param_1,puVar12);
  puVar9 = puVar12;
  (**(code **)(lVar20 + 0x30))(puVar12,1,UVar8.unknown);
  if ((int)puVar9 == 1) {
    FUN_100867da0(puVar12);
    uVar10 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar16 = *unaff_x20;
    if ((uVar10 & 1) == 0) {
      FUN_100869e18();
      _swift_release(uVar16);
      *unaff_x20 = uVar10;
      uVar16 = uVar10;
    }
    uVar1 = *(undefined8 *)(uVar16 + 0x48);
    uVar4 = *(undefined8 *)(uVar16 + 0x50);
    uVar2 = *(undefined8 *)(uVar16 + 0x58);
    uVar5 = *(undefined8 *)(uVar16 + 0x60);
    uVar3 = *(undefined8 *)(uVar16 + 0x68);
    uVar6 = *(undefined8 *)(uVar16 + 0x70);
    uVar15 = *(undefined8 *)(uVar16 + 0x78);
    *(undefined8 *)(uVar16 + 0x50) = 0;
    *(undefined8 *)(uVar16 + 0x48) = 0;
    *(undefined8 *)(uVar16 + 0x60) = 0;
    *(undefined8 *)(uVar16 + 0x58) = 0;
    *(undefined8 *)(uVar16 + 0x70) = 0;
    *(undefined8 *)(uVar16 + 0x68) = 0;
    *(undefined8 *)(uVar16 + 0x78) = 0;
    FUN_100864364(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar15);
    uVar10 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar16 = *unaff_x20;
    if ((uVar10 & 1) == 0) {
      FUN_100869e18();
      _swift_release(uVar16);
      *unaff_x20 = uVar10;
      uVar16 = uVar10;
    }
    uVar1 = *(undefined8 *)(uVar16 + 0x80);
    uVar4 = *(undefined8 *)(uVar16 + 0x88);
    uVar2 = *(undefined8 *)(uVar16 + 0x90);
    uVar5 = *(undefined8 *)(uVar16 + 0x98);
    uVar3 = *(undefined8 *)(uVar16 + 0xa0);
    uVar6 = *(undefined8 *)(uVar16 + 0xa8);
    uVar15 = *(undefined8 *)(uVar16 + 0xb0);
    *(undefined8 *)(uVar16 + 0x88) = 0;
    *(undefined8 *)(uVar16 + 0x80) = 0;
    *(undefined8 *)(uVar16 + 0x98) = 0;
    *(undefined8 *)(uVar16 + 0x90) = 0;
    *(undefined8 *)(uVar16 + 0xa8) = 0;
    *(undefined8 *)(uVar16 + 0xa0) = 0;
    *(undefined8 *)(uVar16 + 0xb0) = 0;
    FUN_100864364(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar15);
    uVar10 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar16 = *unaff_x20;
    if ((uVar10 & 1) == 0) {
      FUN_100869e18();
      _swift_release(uVar16);
      *unaff_x20 = uVar10;
      uVar16 = uVar10;
    }
    uVar1 = *(undefined8 *)(uVar16 + 0xb8);
    uVar4 = *(undefined8 *)(uVar16 + 0xc0);
    uVar2 = *(undefined8 *)(uVar16 + 200);
    uVar5 = *(undefined8 *)(uVar16 + 0xd0);
    uVar3 = *(undefined8 *)(uVar16 + 0xd8);
    uVar6 = *(undefined8 *)(uVar16 + 0xe0);
    uVar15 = *(undefined8 *)(uVar16 + 0xe8);
    *(undefined8 *)(uVar16 + 0xc0) = 0;
    *(undefined8 *)(uVar16 + 0xb8) = 0;
    *(undefined8 *)(uVar16 + 0xd0) = 0;
    *(undefined8 *)(uVar16 + 200) = 0;
    *(undefined8 *)(uVar16 + 0xe0) = 0;
    *(undefined8 *)(uVar16 + 0xd8) = 0;
    *(undefined8 *)(uVar16 + 0xe8) = 0;
    FUN_100864364(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar15);
    FUN_100867da0(param_1);
  }
  else {
    lVar11 = lVar18;
    UVar13 = UVar8;
    (**(code **)(lVar20 + 0x20))();
    FUN_100867430();
    SVar21.str = *(char **)(lVar11 + 0x10);
    SVar21.bridgeObject = UVar13.unknown;
    tVar24 = Swift::String::_fromUTF8Repairing((undefined *)(lVar11 + 0x20),SVar21);
    pvVar14 = tVar24._16_8_;
    _swift_bridgeObjectRelease(lVar11);
    FUN_100868230(tVar24.result.str,tVar24.result.bridgeObject);
    if (puVar12 == (undefined1 *)0x0) {
      pcVar17 = (char *)0x0;
      pvVar19 = (void *)0x0;
    }
    else {
      pcVar17 = *(char **)(puVar12 + 0x10);
      _swift_bridgeObjectRetain(puVar12);
      SVar22.bridgeObject = pvVar14;
      SVar22.str = pcVar17;
      tVar24 = Swift::String::_fromUTF8Repairing
                         ((UnsafeBufferPointer<__int8>)(puVar12 + 0x20),SVar22);
      pvVar14 = tVar24._16_8_;
      pvVar19 = tVar24.result.bridgeObject;
      pcVar17 = tVar24.result.str;
      _swift_bridgeObjectRelease_n(puVar12,2);
    }
    FUN_100868564(pcVar17,pvVar19);
    SVar23.str = *(char **)(UVar13.unknown + 0x10);
    SVar23.bridgeObject = pvVar14;
    tVar24 = Swift::String::_fromUTF8Repairing
                       ((UnsafeBufferPointer<__int8>)(UVar13.unknown + 0x20),SVar23);
    _swift_bridgeObjectRelease(UVar13.unknown,tVar24.result.bridgeObject,tVar24._16_8_);
    FUN_1008688ac(tVar24.result.str,tVar24.result.bridgeObject);
    FUN_100867da0(param_1);
    (**(code **)(lVar20 + 8))(lVar18,UVar8.unknown);
  }
  return;
}



/* Address: 0x100867430 | FUN_100867430 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001008675c0) */
/* WARNING: Removing unreachable block (ram,0x0001008674fc) */
/* WARNING: Removing unreachable block (ram,0x0001008675f0) */
/* WARNING: Removing unreachable block (ram,0x000100867610) */
/* WARNING: Removing unreachable block (ram,0x000100867624) */

undefined8 FUN_100867430(void)

{
  code *pcVar1;
  byte bVar2;
  URL UVar3;
  URL UVar4;
  NSURL *pNVar5;
  NSURL *pNVar6;
  NSURL *pNVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_70 [8];
  undefined8 local_68 [4];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar9 = *(long *)(UVar3.unknown + -8);
  lVar8 = *(long *)(lVar9 + 0x40);
  UVar4 = Foundation::URL::get_absoluteURL(UVar3);
  pNVar5 = Foundation::URL::_bridgeToObjectiveC(UVar4);
  (**(code **)(lVar9 + 8))(auStack_70 + -(lVar8 + 0xfU & 0xfffffffffffffff0),UVar3.unknown);
  pNVar6 = pNVar5;
  _CFURLGetBytes(pNVar5,0,0);
  if ((long)pNVar6 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008675d4);
    (*pcVar1)();
  }
  if (((long)pNVar6 < 0x401) ||
     ((bVar2 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xc,3,0,0xf,4,0),
      (bVar2 & 1) != 0 &&
      (pNVar7 = pNVar6, _swift_stdlib_isStackAllocationSafe(pNVar6,1), ((ulong)pNVar7 & 1) != 0))))
  {
    pNVar7 = pNVar6;
    if (pNVar6 < (NSURL *)0x2) {
      pNVar7 = (NSURL *)&DAT_00000001;
    }
    FUN_100867a30(local_68,(long)(auStack_70 + -(lVar8 + 0xfU & 0xfffffffffffffff0)) -
                           ((ulong)(pNVar7 + 0xf) & 0xfffffffffffffff0),pNVar6,pNVar5);
  }
  else {
    _swift_slowAlloc(pNVar6,0xffffffffffffffff);
    FUN_100867a30(local_68);
    _swift_slowDealloc(pNVar6,0xffffffffffffffff,0xffffffffffffffff);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return local_68[0];
}



/* Address: 0x100867634 | FUN_100867634 */

undefined1  [16] FUN_100867634(undefined8 *param_1)

{
  undefined *puVar1;
  void *pvVar2;
  undefined8 *unaff_x20;
  void *pvVar3;
  undefined1 auVar4 [16];
  
  *param_1 = unaff_x20;
  puVar1 = &DAT_100fe87b0;
  FUN_1000f7830(&DAT_100fe87b0,&DAT_100c7e450);
  pvVar3 = *(void **)(*(long *)(puVar1 + -8) + 0x40);
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    pvVar2 = _malloc((size_t)pvVar3);
    param_1[1] = pvVar2;
    pvVar3 = _malloc((size_t)pvVar3);
  }
  else {
    pvVar2 = pvVar3;
    _swift_coroFrameAlloc(pvVar3,0x17df);
    param_1[1] = pvVar2;
    _swift_coroFrameAlloc(pvVar3,0x17df);
  }
  param_1[2] = pvVar3;
  FUN_100866d78(pvVar3,*unaff_x20);
  auVar4._8_8_ = pvVar3;
  auVar4._0_8_ = FUN_1008676d4;
  return auVar4;
}



/* Address: 0x1008676d4 | FUN_1008676d4 */

void FUN_1008676d4(long param_1,ulong param_2)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = *(void **)(param_1 + 8);
  pvVar2 = *(void **)(param_1 + 0x10);
  if ((param_2 & 1) == 0) {
    FUN_100867188(pvVar2);
  }
  else {
    FUN_100867d50(pvVar2,pvVar1);
    FUN_100867188(pvVar1);
    FUN_100867da0(pvVar2);
  }
  _free(pvVar2);
  _free(pvVar1);
  return;
}



/* Address: 0x100867730 | FUN_100867730 */

undefined1  [16] FUN_100867730(long param_1,long param_2,void *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  URL UVar7;
  long lVar8;
  long lVar9;
  void *pvVar10;
  undefined8 uVar12;
  char *pcVar13;
  ulong uVar14;
  void *pvVar15;
  undefined1 auVar16 [16];
  String SVar17;
  String SVar18;
  String SVar19;
  tuple2_conflict1 tVar20;
  tuple2_conflict1 tVar21;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  byte local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  byte local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  byte local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  void *pvVar11;
  
  lVar8 = param_1;
  lVar9 = param_2;
  pvVar10 = param_3;
  FUN_100867430();
  SVar17.str = *(char **)(lVar8 + 0x10);
  SVar17.bridgeObject = pvVar10;
  tVar20 = Swift::String::_fromUTF8Repairing((undefined *)(lVar8 + 0x20),SVar17);
  pvVar11 = tVar20._16_8_;
  _swift_bridgeObjectRelease(lVar8);
  if (lVar9 == 0) {
    pcVar13 = (char *)0x0;
    pvVar15 = (void *)0x0;
  }
  else {
    pcVar13 = *(char **)(lVar9 + 0x10);
    _swift_bridgeObjectRetain(lVar9);
    SVar18.bridgeObject = pvVar11;
    SVar18.str = pcVar13;
    tVar21 = Swift::String::_fromUTF8Repairing((undefined *)(lVar9 + 0x20),SVar18);
    pvVar11 = tVar21._16_8_;
    pvVar15 = tVar21.result.bridgeObject;
    pcVar13 = tVar21.result.str;
    _swift_bridgeObjectRelease_n(lVar9,2);
  }
  SVar19.str = *(char **)((long)pvVar10 + 0x10);
  SVar19.bridgeObject = pvVar11;
  tVar21 = Swift::String::_fromUTF8Repairing((undefined *)((long)pvVar10 + 0x20),SVar19);
  _swift_bridgeObjectRelease(pvVar10,tVar21.result.bridgeObject,tVar21._16_8_);
  FUN_100859230(&local_110,0x656d656863733a,&DAT_e700000000000000,0x656d656863733a,
                &DAT_e700000000000000,tVar20.result.str,tVar20.result.bridgeObject);
  if (pvVar15 == (void *)0x0) {
    local_170 = 0;
    uStack_168 = 0;
    local_178 = 0;
    uStack_c0 = 0;
    uVar14 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
  }
  else {
    FUN_100859230(&local_d8,0x69726f687475613a,0xea00000000007974,0x69726f687475613a,
                  0xea00000000007974,pcVar13,pvVar15);
    local_170 = uStack_d0;
    uStack_168 = local_d8;
    local_178 = local_c8;
    uVar14 = (ulong)local_b8;
  }
  FUN_100859230(&local_a0,0x687461703a,&DAT_e500000000000000,0x687461703a,&DAT_e500000000000000,
                tVar21.result.str,tVar21.result.bridgeObject);
  UVar7 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar7.unknown + -8) + 8))(param_3,UVar7.unknown);
  lVar8 = 0;
  FUN_10086c690();
  _swift_allocObject();
  *(undefined8 *)(lVar8 + 0x88) = 0;
  *(undefined8 *)(lVar8 + 0x80) = 0;
  *(undefined8 *)(lVar8 + 0x98) = 0;
  *(undefined8 *)(lVar8 + 0x90) = 0;
  *(undefined8 *)(lVar8 + 0xa8) = 0;
  *(undefined8 *)(lVar8 + 0xa0) = 0;
  *(undefined8 *)(lVar8 + 0xb8) = 0;
  *(undefined8 *)(lVar8 + 0xb0) = 0;
  *(undefined8 *)(lVar8 + 200) = 0;
  *(undefined8 *)(lVar8 + 0xc0) = 0;
  *(undefined8 *)(lVar8 + 0xd8) = 0;
  *(undefined8 *)(lVar8 + 0xd0) = 0;
  *(undefined8 *)(lVar8 + 0xe8) = 0;
  *(undefined8 *)(lVar8 + 0xe0) = 0;
  *(undefined8 *)(lVar8 + 0xf8) = 0;
  *(undefined8 *)(lVar8 + 0xf0) = 0;
  *(undefined8 *)(lVar8 + 0x108) = 0;
  *(undefined8 *)(lVar8 + 0x100) = 0;
  *(undefined8 *)(lVar8 + 0x118) = 0;
  *(undefined8 *)(lVar8 + 0x110) = 0;
  *(undefined8 *)(lVar8 + 0x120) = 0;
  *(undefined8 *)(lVar8 + 0x10) = 0x646f6874656d3a;
  *(undefined1 **)(lVar8 + 0x18) = &DAT_e700000000000000;
  *(undefined8 *)(lVar8 + 0x20) = 0x646f6874656d3a;
  *(undefined1 **)(lVar8 + 0x28) = &DAT_e700000000000000;
  *(undefined1 *)(lVar8 + 0x30) = 0;
  *(long *)(lVar8 + 0x38) = param_1;
  *(long *)(lVar8 + 0x40) = param_2;
  *(undefined8 *)(lVar8 + 0x48) = local_110;
  *(undefined8 *)(lVar8 + 0x50) = uStack_108;
  *(undefined8 *)(lVar8 + 0x58) = local_100;
  *(undefined8 *)(lVar8 + 0x60) = uStack_f8;
  *(ulong *)(lVar8 + 0x68) = (ulong)local_f0;
  *(undefined8 *)(lVar8 + 0x70) = local_e8;
  *(undefined8 *)(lVar8 + 0x78) = uStack_e0;
  FUN_100864364(0,0,0,0,0,0,0);
  uVar1 = *(undefined8 *)(lVar8 + 0x80);
  uVar4 = *(undefined8 *)(lVar8 + 0x88);
  uVar2 = *(undefined8 *)(lVar8 + 0x90);
  uVar5 = *(undefined8 *)(lVar8 + 0x98);
  uVar3 = *(undefined8 *)(lVar8 + 0xa0);
  uVar6 = *(undefined8 *)(lVar8 + 0xa8);
  uVar12 = *(undefined8 *)(lVar8 + 0xb0);
  *(undefined8 *)(lVar8 + 0x80) = uStack_168;
  *(undefined8 *)(lVar8 + 0x88) = local_170;
  *(undefined8 *)(lVar8 + 0x90) = local_178;
  *(undefined8 *)(lVar8 + 0x98) = uStack_c0;
  *(ulong *)(lVar8 + 0xa0) = uVar14;
  *(undefined8 *)(lVar8 + 0xa8) = local_b0;
  *(undefined8 *)(lVar8 + 0xb0) = uStack_a8;
  FUN_100864364(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar12);
  uVar1 = *(undefined8 *)(lVar8 + 0xb8);
  uVar4 = *(undefined8 *)(lVar8 + 0xc0);
  uVar2 = *(undefined8 *)(lVar8 + 200);
  uVar5 = *(undefined8 *)(lVar8 + 0xd0);
  uVar3 = *(undefined8 *)(lVar8 + 0xd8);
  uVar6 = *(undefined8 *)(lVar8 + 0xe0);
  uVar12 = *(undefined8 *)(lVar8 + 0xe8);
  *(undefined8 *)(lVar8 + 0xb8) = local_a0;
  *(undefined8 *)(lVar8 + 200) = uStack_90;
  *(undefined8 *)(lVar8 + 0xc0) = local_98;
  *(undefined8 *)(lVar8 + 0xd0) = local_88;
  *(ulong *)(lVar8 + 0xd8) = (ulong)local_80;
  *(undefined8 *)(lVar8 + 0xe0) = local_78;
  *(undefined8 *)(lVar8 + 0xe8) = uStack_70;
  FUN_100864364(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar12);
  uVar1 = *(undefined8 *)(lVar8 + 0xf0);
  uVar4 = *(undefined8 *)(lVar8 + 0xf8);
  uVar2 = *(undefined8 *)(lVar8 + 0x100);
  uVar5 = *(undefined8 *)(lVar8 + 0x108);
  uVar3 = *(undefined8 *)(lVar8 + 0x110);
  uVar6 = *(undefined8 *)(lVar8 + 0x118);
  uVar12 = *(undefined8 *)(lVar8 + 0x120);
  *(undefined8 *)(lVar8 + 0xf8) = 0;
  *(undefined8 *)(lVar8 + 0xf0) = 0;
  *(undefined8 *)(lVar8 + 0x108) = 0;
  *(undefined8 *)(lVar8 + 0x100) = 0;
  *(undefined8 *)(lVar8 + 0x118) = 0;
  *(undefined8 *)(lVar8 + 0x110) = 0;
  *(undefined8 *)(lVar8 + 0x120) = 0;
  FUN_100864364(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar12);
  auVar16._8_8_ = param_4;
  auVar16._0_8_ = lVar8;
  return auVar16;
}



/* Address: 0x100867a30 | FUN_100867a30 */

void FUN_100867a30(size_t *param_1,long param_2,undefined8 param_3,long param_4)

{
  void *pvVar1;
  undefined *puVar2;
  size_t sVar3;
  code *pcVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  _ContiguousArrayBuffer<undefined> _Var8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long unaff_x21;
  
  _CFURLGetBytes(param_4,param_2,param_3);
  lVar9 = 1;
  lVar10 = param_4;
  _CFURLGetByteRangeForComponent(param_4,1,0);
  if (lVar10 == -1) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100867cd0);
    (*pcVar4)();
  }
  if (SCARRY8(lVar10,lVar9)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100867cd4);
    (*pcVar4)();
  }
  puVar7 = (undefined *)((lVar10 + lVar9) - lVar10);
  if (lVar10 + lVar9 < lVar10) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100867cd8);
    (*pcVar4)();
  }
  puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (puVar7 != (undefined *)0x0) {
    pvVar1 = (void *)0x0;
    if (param_2 != 0) {
      pvVar1 = (void *)(param_2 + lVar10);
    }
    puVar5 = puVar7;
    FUN_10086076c(puVar7,0);
    _memcpy(puVar5 + 0x20,pvVar1,(size_t)puVar7);
  }
  lVar10 = 8;
  lVar9 = param_4;
  _CFURLGetByteRangeForComponent(param_4,8,0);
  if (lVar9 == -1) {
    puVar7 = (undefined *)0x0;
  }
  else {
    lVar11 = 9;
    lVar6 = param_4;
    _CFURLGetByteRangeForComponent(param_4,9,0);
    if (lVar6 != -1) {
      if (SCARRY8(lVar6,lVar11)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100867cec);
        (*pcVar4)();
      }
      lVar10 = (lVar6 + lVar11) - lVar9;
      if (SBORROW8(lVar6 + lVar11,lVar9)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100867cf0);
        (*pcVar4)();
      }
    }
    if (SCARRY8(lVar9,lVar10)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100867cdc);
      (*pcVar4)();
    }
    puVar2 = (undefined *)((lVar9 + lVar10) - lVar9);
    if (lVar9 + lVar10 < lVar9) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100867ce0);
      (*pcVar4)();
    }
    puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (puVar2 != (undefined *)0x0) {
      pvVar1 = (void *)0x0;
      if (param_2 != 0) {
        pvVar1 = (void *)(param_2 + lVar9);
      }
      puVar7 = puVar2;
      FUN_10086076c(puVar2,0);
      _memcpy(puVar7 + 0x20,pvVar1,(size_t)puVar2);
    }
  }
  param_1[1] = (size_t)puVar7;
  lVar11 = 3;
  lVar6 = param_4;
  _CFURLGetByteRangeForComponent(param_4,3,0);
  lVar12 = 0xb;
  _CFURLGetByteRangeForComponent(param_4,0xb,0);
  lVar10 = param_4;
  lVar9 = lVar12;
  if ((lVar6 != -1) && (lVar10 = lVar6, lVar9 = lVar11, param_4 != -1)) {
    if (SCARRY8(param_4,lVar12)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100867cf4);
      (*pcVar4)();
    }
    lVar9 = (param_4 + lVar12) - lVar6;
    if (SBORROW8(param_4 + lVar12,lVar6)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100867bb8);
      (*pcVar4)();
    }
  }
  if (lVar11 == 0) {
    if (lVar9 == 0) {
      _Var8.unknown = &DAT_100fe8738;
      FUN_1000f7830(&DAT_100fe8738,&DAT_100c7e278);
      _swift_initStaticObject();
    }
    else {
      if (SCARRY8(lVar10,lVar9)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100867cf8);
        (*pcVar4)();
      }
      sVar3 = (lVar10 + lVar9) - lVar10;
      if (lVar10 + lVar9 < lVar10) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100867cfc);
        (*pcVar4)();
      }
      pvVar1 = (void *)0x0;
      if (param_2 != 0) {
        pvVar1 = (void *)(param_2 + lVar10);
      }
      lVar10 = sVar3 + 1;
      if (SCARRY8(sVar3,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100867d00);
        (*pcVar4)();
      }
      if (lVar10 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100867d04);
        (*pcVar4)();
      }
      _Var8 = Swift::ContiguousArray::_allocateBufferUninitialized
                        (lVar10,PTR___type_metadata_for_Swift_UInt8_100eadcd0);
      *(long *)(_Var8.unknown + 0x10) = lVar10;
      _Var8.unknown[0x20] = 0x2f;
      if (pvVar1 != (void *)0x0) {
        _memmove(_Var8.unknown + 0x21,pvVar1,sVar3);
      }
      if (unaff_x21 != 0) {
        *(long *)(_Var8.unknown + 0x10) = lVar10;
        _swift_release(_Var8.unknown);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100867d14);
        (*pcVar4)();
      }
      *(long *)(_Var8.unknown + 0x10) = lVar10;
    }
  }
  else {
    if (SCARRY8(lVar10,lVar9)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100867ce4);
      (*pcVar4)();
    }
    puVar7 = (undefined *)((lVar10 + lVar9) - lVar10);
    if (lVar10 + lVar9 < lVar10) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100867ce8);
      (*pcVar4)();
    }
    _Var8.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (puVar7 != (undefined *)0x0) {
      pvVar1 = (void *)0x0;
      if (param_2 != 0) {
        pvVar1 = (void *)(param_2 + lVar10);
      }
      _Var8.unknown = puVar7;
      FUN_10086076c(puVar7,0);
      _memcpy(_Var8.unknown + 0x20,pvVar1,(size_t)puVar7);
    }
  }
  param_1[2] = (size_t)_Var8.unknown;
  *param_1 = (size_t)puVar5;
  return;
}



/* Address: 0x100867d14 | FUN_100867d14 */

void FUN_100867d14(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  if (param_2 != 0) {
    _swift_bridgeObjectRetain(param_2);
    _swift_bridgeObjectRetain(param_4);
    _swift_bridgeObjectRetain(param_7);
    return;
  }
  return;
}



/* Address: 0x100867d50 | FUN_100867d50 */

undefined8 FUN_100867d50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fe87b0;
  FUN_1000f7830(&DAT_100fe87b0,&DAT_100c7e450);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100867da0 | FUN_100867da0 */

undefined8 FUN_100867da0(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fe87b0;
  FUN_1000f7830(&DAT_100fe87b0,&DAT_100c7e450);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x100867de8 | FUN_100867de8 */

void FUN_100867de8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  bool bVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong *unaff_x20;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  if (param_1[1] != 0) {
    if (((undefined *)param_1[2] != (undefined *)0x6f636f746f72703a ||
         (undefined *)param_1[3] != (undefined *)0xe90000000000006c) &&
       (bVar8 = Swift::_stringCompareWithSmolCheck
                          ((undefined *)param_1[2],(undefined *)param_1[3],
                           (_StringComparisonResult)0x3a), !bVar8)) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x100867ea8);
      (*pcVar7)();
    }
  }
  uVar9 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar11 = *unaff_x20;
  if ((uVar9 & 1) == 0) {
    FUN_100869e18();
    _swift_release(uVar11);
    *unaff_x20 = uVar9;
    uVar11 = uVar9;
  }
  uVar1 = *(undefined8 *)(uVar11 + 0xf0);
  uVar4 = *(undefined8 *)(uVar11 + 0xf8);
  uVar2 = *(undefined8 *)(uVar11 + 0x100);
  uVar5 = *(undefined8 *)(uVar11 + 0x108);
  uVar3 = *(undefined8 *)(uVar11 + 0x110);
  uVar6 = *(undefined8 *)(uVar11 + 0x118);
  uVar10 = *(undefined8 *)(uVar11 + 0x120);
  uVar12 = *param_1;
  uVar14 = param_1[3];
  uVar13 = param_1[2];
  *(undefined8 *)(uVar11 + 0xf8) = param_1[1];
  *(undefined8 *)(uVar11 + 0xf0) = uVar12;
  *(undefined8 *)(uVar11 + 0x108) = uVar14;
  *(undefined8 *)(uVar11 + 0x100) = uVar13;
  uVar12 = param_1[4];
  *(undefined8 *)(uVar11 + 0x118) = param_1[5];
  *(undefined8 *)(uVar11 + 0x110) = uVar12;
  *(undefined8 *)(uVar11 + 0x120) = param_1[6];
  FUN_100864364(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar10);
  return;
}



/* Address: 0x100867ea8 | FUN_100867ea8 */

undefined1  [16] FUN_100867ea8(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x38);
  _swift_bridgeObjectRetain(*(undefined8 *)(param_1 + 0x40));
  return auVar1;
}



/* Address: 0x100867ed4 | FUN_100867ed4 */

undefined1  [16] FUN_100867ed4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &DAT_e700000000000000;
  auVar1._0_8_ = 0x5443454e4e4f43;
  return auVar1;
}



/* Address: 0x100867eec | FUN_100867eec */

undefined1  [16] FUN_100867eec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  
  lVar8 = *(long *)(param_1 + 0xf8);
  if (lVar8 == 0) {
    uVar6 = 0;
    uVar7 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + 0xf0);
    uVar1 = *(undefined8 *)(param_1 + 0x100);
    uVar3 = *(undefined8 *)(param_1 + 0x108);
    uVar2 = *(undefined8 *)(param_1 + 0x110);
    uVar6 = *(ulong *)(param_1 + 0x118);
    uVar7 = *(undefined8 *)(param_1 + 0x120);
    uVar4 = uVar6;
    FUN_100858afc(uVar6,uVar7);
    if ((uVar4 & 1) == 0) {
      _swift_bridgeObjectRetain(uVar7);
    }
    else {
      FUN_100867d14(uVar9,lVar8,uVar1,uVar3,uVar2,uVar6,uVar7);
      uVar4 = uVar6;
      uVar5 = uVar7;
      FUN_100872ba8(uVar6,uVar7);
      FUN_100864364(uVar9,lVar8,uVar1,uVar3,uVar2,uVar6,uVar7);
      uVar6 = uVar4;
      uVar7 = uVar5;
    }
  }
  auVar10._8_8_ = uVar7;
  auVar10._0_8_ = uVar6;
  return auVar10;
}



/* Address: 0x100867fd4 | FUN_100867fd4 */

undefined1  [16] FUN_100867fd4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &DAT_e700000000000000;
  auVar1._0_8_ = 0x534e4f4954504f;
  return auVar1;
}



/* Address: 0x100867fec | FUN_100867fec */

undefined1  [16] FUN_100867fec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  
  lVar8 = *(long *)(param_1 + 0xc0);
  if (lVar8 == 0) {
    uVar6 = 0;
    uVar7 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + 0xb8);
    uVar1 = *(undefined8 *)(param_1 + 200);
    uVar3 = *(undefined8 *)(param_1 + 0xd0);
    uVar2 = *(undefined8 *)(param_1 + 0xd8);
    uVar6 = *(ulong *)(param_1 + 0xe0);
    uVar7 = *(undefined8 *)(param_1 + 0xe8);
    uVar4 = uVar6;
    FUN_100858afc(uVar6,uVar7);
    if ((uVar4 & 1) == 0) {
      _swift_bridgeObjectRetain(uVar7);
    }
    else {
      FUN_100867d14(uVar9,lVar8,uVar1,uVar3,uVar2,uVar6,uVar7);
      uVar4 = uVar6;
      uVar5 = uVar7;
      FUN_100872ba8(uVar6,uVar7);
      FUN_100864364(uVar9,lVar8,uVar1,uVar3,uVar2,uVar6,uVar7);
      uVar6 = uVar4;
      uVar7 = uVar5;
    }
  }
  auVar10._8_8_ = uVar7;
  auVar10._0_8_ = uVar6;
  return auVar10;
}



/* Address: 0x1008680d4 | FUN_1008680d4 */

void FUN_1008680d4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  uVar4 = *(undefined8 *)(param_2 + 0x50);
  uVar2 = *(undefined8 *)(param_2 + 0x58);
  uVar5 = *(undefined8 *)(param_2 + 0x60);
  uVar3 = *(undefined8 *)(param_2 + 0x68);
  uVar6 = *(undefined8 *)(param_2 + 0x70);
  uVar7 = *(undefined8 *)(param_2 + 0x78);
  FUN_100867d14(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar7);
  *param_1 = uVar1;
  param_1[1] = uVar4;
  param_1[2] = uVar2;
  param_1[3] = uVar5;
  param_1[4] = uVar3;
  param_1[5] = uVar6;
  param_1[6] = uVar7;
  return;
}



/* Address: 0x100868148 | FUN_100868148 */

void FUN_100868148(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *(undefined8 *)(param_2 + 0x80);
  uVar4 = *(undefined8 *)(param_2 + 0x88);
  uVar2 = *(undefined8 *)(param_2 + 0x90);
  uVar5 = *(undefined8 *)(param_2 + 0x98);
  uVar3 = *(undefined8 *)(param_2 + 0xa0);
  uVar6 = *(undefined8 *)(param_2 + 0xa8);
  uVar7 = *(undefined8 *)(param_2 + 0xb0);
  FUN_100867d14(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar7);
  *param_1 = uVar1;
  param_1[1] = uVar4;
  param_1[2] = uVar2;
  param_1[3] = uVar5;
  param_1[4] = uVar3;
  param_1[5] = uVar6;
  param_1[6] = uVar7;
  return;
}



/* Address: 0x1008681bc | FUN_1008681bc */

void FUN_1008681bc(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *(undefined8 *)(param_2 + 0xb8);
  uVar4 = *(undefined8 *)(param_2 + 0xc0);
  uVar2 = *(undefined8 *)(param_2 + 200);
  uVar5 = *(undefined8 *)(param_2 + 0xd0);
  uVar3 = *(undefined8 *)(param_2 + 0xd8);
  uVar6 = *(undefined8 *)(param_2 + 0xe0);
  uVar7 = *(undefined8 *)(param_2 + 0xe8);
  FUN_100867d14(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar7);
  *param_1 = uVar1;
  param_1[1] = uVar4;
  param_1[2] = uVar2;
  param_1[3] = uVar5;
  param_1[4] = uVar3;
  param_1[5] = uVar6;
  param_1[6] = uVar7;
  return;
}



/* Address: 0x100868230 | FUN_100868230 */

void FUN_100868230(ulong param_1,long param_2)

{
  _StringGuts _Var1;
  _StringGuts _Var2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined8 uVar17;
  ulong *unaff_x20;
  long lVar18;
  undefined8 uVar19;
  ulong local_98;
  long lStack_90;
  _StringGuts local_88;
  _StringGuts _Stack_80;
  byte local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (param_2 == 0) {
    uVar7 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar16 = *unaff_x20;
    if ((uVar7 & 1) == 0) {
      FUN_100869e18();
      _swift_release(uVar16);
      *unaff_x20 = uVar7;
      uVar16 = uVar7;
    }
    uVar8 = *(undefined8 *)(uVar16 + 0x48);
    uVar10 = *(undefined8 *)(uVar16 + 0x50);
    uVar17 = *(undefined8 *)(uVar16 + 0x58);
    uVar12 = *(undefined8 *)(uVar16 + 0x60);
    uVar19 = *(undefined8 *)(uVar16 + 0x68);
    uVar13 = *(undefined8 *)(uVar16 + 0x70);
    uVar14 = *(undefined8 *)(uVar16 + 0x78);
    *(undefined8 *)(uVar16 + 0x50) = 0;
    *(undefined8 *)(uVar16 + 0x48) = 0;
    *(undefined8 *)(uVar16 + 0x60) = 0;
    *(undefined8 *)(uVar16 + 0x58) = 0;
    *(undefined8 *)(uVar16 + 0x70) = 0;
    *(undefined8 *)(uVar16 + 0x68) = 0;
    *(undefined8 *)(uVar16 + 0x78) = 0;
  }
  else {
    uVar16 = *unaff_x20;
    lVar18 = *(long *)(uVar16 + 0x50);
    if (lVar18 != 0) {
      uVar19 = *(undefined8 *)(uVar16 + 0x48);
      _Var1.unknown = *(undefined **)(uVar16 + 0x58);
      _Var2.unknown = *(undefined **)(uVar16 + 0x60);
      uVar7 = *(ulong *)(uVar16 + 0x68);
      uVar8 = *(undefined8 *)(uVar16 + 0x70);
      uVar17 = *(undefined8 *)(uVar16 + 0x78);
      uVar16 = param_1;
      FUN_100858afc(param_1,param_2);
      if ((uVar16 & 1) == 0) {
        FUN_100867d14(uVar19,lVar18,_Var1.unknown,_Var2.unknown,uVar7,uVar8,uVar17);
      }
      else {
        local_88.unknown = FUN_100872b9c;
        _Stack_80.unknown = (undefined *)0x0;
        local_98 = param_1;
        lStack_90 = param_2;
        FUN_100867d14(uVar19,lVar18,_Var1.unknown,_Var2.unknown,uVar7,uVar8,uVar17);
        puVar5 = &DAT_100fe81f8;
        FUN_1000f7830(&DAT_100fe81f8,&DAT_100c7d850);
        puVar6 = puVar5;
        FUN_10086c640();
        Swift::String::UnicodeScalarView::_append(&local_98,puVar5,puVar6);
        _swift_bridgeObjectRelease(param_2);
        param_1 = 0;
        param_2 = -0x2000000000000000;
      }
      lVar11 = param_2;
      FUN_1008590a4();
      _swift_bridgeObjectRelease(uVar17);
      _swift_bridgeObjectRelease(param_2);
      if ((_Var1.unknown != (undefined *)0x656d656863733a || _Var2.unknown != &DAT_e700000000000000)
         && (bVar4 = Swift::_stringCompareWithSmolCheck(_Var1,_Var2,(_StringComparisonResult)0x3a),
            !bVar4)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100868560);
        (*pcVar3)();
      }
      _swift_bridgeObjectRetain(lVar18);
      _swift_bridgeObjectRetain(_Var2.unknown);
      _swift_bridgeObjectRetain(lVar11);
      uVar9 = *unaff_x20;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar16 = *unaff_x20;
      if ((uVar9 & 1) == 0) {
        FUN_100869e18();
        _swift_release(uVar16);
        *unaff_x20 = uVar9;
        uVar16 = uVar9;
      }
      uVar8 = *(undefined8 *)(uVar16 + 0x48);
      uVar12 = *(undefined8 *)(uVar16 + 0x50);
      uVar17 = *(undefined8 *)(uVar16 + 0x58);
      uVar13 = *(undefined8 *)(uVar16 + 0x60);
      uVar10 = *(undefined8 *)(uVar16 + 0x68);
      uVar14 = *(undefined8 *)(uVar16 + 0x70);
      uVar15 = *(undefined8 *)(uVar16 + 0x78);
      *(undefined8 *)(uVar16 + 0x48) = uVar19;
      *(long *)(uVar16 + 0x50) = lVar18;
      *(undefined **)(uVar16 + 0x58) = _Var1.unknown;
      *(undefined **)(uVar16 + 0x60) = _Var2.unknown;
      *(ulong *)(uVar16 + 0x68) = uVar7 & 0xff;
      *(ulong *)(uVar16 + 0x70) = param_1;
      *(long *)(uVar16 + 0x78) = lVar11;
      FUN_100864364(uVar8,uVar12,uVar17,uVar13,uVar10,uVar14,uVar15);
      _swift_bridgeObjectRelease(lVar11);
      _swift_bridgeObjectRelease(_Var2.unknown);
      _swift_bridgeObjectRelease(lVar18);
      return;
    }
    FUN_100859230(&local_98,0x656d656863733a,&DAT_e700000000000000,0x656d656863733a,
                  &DAT_e700000000000000,param_1,param_2);
    if (((local_88.unknown != (undefined *)0x656d656863733a) ||
        (_Stack_80.unknown != &DAT_e700000000000000)) &&
       (bVar4 = Swift::_stringCompareWithSmolCheck(local_88,_Stack_80,(_StringComparisonResult)0x3a)
       , !bVar4)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100868564);
      (*pcVar3)();
    }
    uVar7 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar16 = *unaff_x20;
    if ((uVar7 & 1) == 0) {
      FUN_100869e18();
      _swift_release(uVar16);
      *unaff_x20 = uVar7;
      uVar16 = uVar7;
    }
    uVar8 = *(undefined8 *)(uVar16 + 0x48);
    uVar10 = *(undefined8 *)(uVar16 + 0x50);
    uVar17 = *(undefined8 *)(uVar16 + 0x58);
    uVar12 = *(undefined8 *)(uVar16 + 0x60);
    uVar19 = *(undefined8 *)(uVar16 + 0x68);
    uVar13 = *(undefined8 *)(uVar16 + 0x70);
    uVar14 = *(undefined8 *)(uVar16 + 0x78);
    *(ulong *)(uVar16 + 0x48) = local_98;
    *(long *)(uVar16 + 0x50) = lStack_90;
    *(undefined **)(uVar16 + 0x58) = local_88.unknown;
    *(undefined **)(uVar16 + 0x60) = _Stack_80.unknown;
    *(ulong *)(uVar16 + 0x68) = (ulong)local_78;
    *(undefined8 *)(uVar16 + 0x70) = local_70;
    *(undefined8 *)(uVar16 + 0x78) = uStack_68;
  }
  FUN_100864364(uVar8,uVar10,uVar17,uVar12,uVar19,uVar13,uVar14);
  return;
}



/* Address: 0x100868564 | FUN_100868564 */

void FUN_100868564(ulong param_1,long param_2)

{
  _StringGuts _Var1;
  _StringGuts _Var2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined8 uVar17;
  ulong *unaff_x20;
  long lVar18;
  undefined8 uVar19;
  ulong local_98;
  long lStack_90;
  _StringGuts local_88;
  _StringGuts _Stack_80;
  byte local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (param_2 == 0) {
    uVar7 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar16 = *unaff_x20;
    if ((uVar7 & 1) == 0) {
      FUN_100869e18();
      _swift_release(uVar16);
      *unaff_x20 = uVar7;
      uVar16 = uVar7;
    }
    uVar8 = *(undefined8 *)(uVar16 + 0x80);
    uVar10 = *(undefined8 *)(uVar16 + 0x88);
    uVar17 = *(undefined8 *)(uVar16 + 0x90);
    uVar12 = *(undefined8 *)(uVar16 + 0x98);
    uVar19 = *(undefined8 *)(uVar16 + 0xa0);
    uVar13 = *(undefined8 *)(uVar16 + 0xa8);
    uVar14 = *(undefined8 *)(uVar16 + 0xb0);
    *(undefined8 *)(uVar16 + 0x88) = 0;
    *(undefined8 *)(uVar16 + 0x80) = 0;
    *(undefined8 *)(uVar16 + 0x98) = 0;
    *(undefined8 *)(uVar16 + 0x90) = 0;
    *(undefined8 *)(uVar16 + 0xa8) = 0;
    *(undefined8 *)(uVar16 + 0xa0) = 0;
    *(undefined8 *)(uVar16 + 0xb0) = 0;
  }
  else {
    uVar16 = *unaff_x20;
    lVar18 = *(long *)(uVar16 + 0x88);
    if (lVar18 != 0) {
      uVar19 = *(undefined8 *)(uVar16 + 0x80);
      _Var1.unknown = *(undefined **)(uVar16 + 0x90);
      _Var2.unknown = *(undefined **)(uVar16 + 0x98);
      uVar7 = *(ulong *)(uVar16 + 0xa0);
      uVar8 = *(undefined8 *)(uVar16 + 0xa8);
      uVar17 = *(undefined8 *)(uVar16 + 0xb0);
      uVar16 = param_1;
      FUN_100858afc(param_1,param_2);
      if ((uVar16 & 1) == 0) {
        FUN_100867d14(uVar19,lVar18,_Var1.unknown,_Var2.unknown,uVar7,uVar8,uVar17);
      }
      else {
        local_88.unknown = FUN_100872b9c;
        _Stack_80.unknown = (undefined *)0x0;
        local_98 = param_1;
        lStack_90 = param_2;
        FUN_100867d14(uVar19,lVar18,_Var1.unknown,_Var2.unknown,uVar7,uVar8,uVar17);
        puVar5 = &DAT_100fe81f8;
        FUN_1000f7830(&DAT_100fe81f8,&DAT_100c7d850);
        puVar6 = puVar5;
        FUN_10086c640();
        Swift::String::UnicodeScalarView::_append(&local_98,puVar5,puVar6);
        _swift_bridgeObjectRelease(param_2);
        param_1 = 0;
        param_2 = -0x2000000000000000;
      }
      lVar11 = param_2;
      FUN_1008590a4();
      _swift_bridgeObjectRelease(uVar17);
      _swift_bridgeObjectRelease(param_2);
      if ((_Var1.unknown != (undefined *)0x69726f687475613a ||
           _Var2.unknown != (undefined *)0xea00000000007974) &&
         (bVar4 = Swift::_stringCompareWithSmolCheck(_Var1,_Var2,(_StringComparisonResult)0x3a),
         !bVar4)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1008688a8);
        (*pcVar3)();
      }
      _swift_bridgeObjectRetain(lVar18);
      _swift_bridgeObjectRetain(_Var2.unknown);
      _swift_bridgeObjectRetain(lVar11);
      uVar9 = *unaff_x20;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar16 = *unaff_x20;
      if ((uVar9 & 1) == 0) {
        FUN_100869e18();
        _swift_release(uVar16);
        *unaff_x20 = uVar9;
        uVar16 = uVar9;
      }
      uVar8 = *(undefined8 *)(uVar16 + 0x80);
      uVar12 = *(undefined8 *)(uVar16 + 0x88);
      uVar17 = *(undefined8 *)(uVar16 + 0x90);
      uVar13 = *(undefined8 *)(uVar16 + 0x98);
      uVar10 = *(undefined8 *)(uVar16 + 0xa0);
      uVar14 = *(undefined8 *)(uVar16 + 0xa8);
      uVar15 = *(undefined8 *)(uVar16 + 0xb0);
      *(undefined8 *)(uVar16 + 0x80) = uVar19;
      *(long *)(uVar16 + 0x88) = lVar18;
      *(undefined **)(uVar16 + 0x90) = _Var1.unknown;
      *(undefined **)(uVar16 + 0x98) = _Var2.unknown;
      *(ulong *)(uVar16 + 0xa0) = uVar7 & 0xff;
      *(ulong *)(uVar16 + 0xa8) = param_1;
      *(long *)(uVar16 + 0xb0) = lVar11;
      FUN_100864364(uVar8,uVar12,uVar17,uVar13,uVar10,uVar14,uVar15);
      _swift_bridgeObjectRelease(lVar11);
      _swift_bridgeObjectRelease(_Var2.unknown);
      _swift_bridgeObjectRelease(lVar18);
      return;
    }
    FUN_100859230(&local_98,0x69726f687475613a,0xea00000000007974,0x69726f687475613a,
                  0xea00000000007974,param_1,param_2);
    if (((local_88.unknown != (undefined *)0x69726f687475613a) ||
        (_Stack_80.unknown != (undefined *)0xea00000000007974)) &&
       (bVar4 = Swift::_stringCompareWithSmolCheck(local_88,_Stack_80,(_StringComparisonResult)0x3a)
       , !bVar4)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1008688ac);
      (*pcVar3)();
    }
    uVar7 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar16 = *unaff_x20;
    if ((uVar7 & 1) == 0) {
      FUN_100869e18();
      _swift_release(uVar16);
      *unaff_x20 = uVar7;
      uVar16 = uVar7;
    }
    uVar8 = *(undefined8 *)(uVar16 + 0x80);
    uVar10 = *(undefined8 *)(uVar16 + 0x88);
    uVar17 = *(undefined8 *)(uVar16 + 0x90);
    uVar12 = *(undefined8 *)(uVar16 + 0x98);
    uVar19 = *(undefined8 *)(uVar16 + 0xa0);
    uVar13 = *(undefined8 *)(uVar16 + 0xa8);
    uVar14 = *(undefined8 *)(uVar16 + 0xb0);
    *(ulong *)(uVar16 + 0x80) = local_98;
    *(long *)(uVar16 + 0x88) = lStack_90;
    *(undefined **)(uVar16 + 0x90) = local_88.unknown;
    *(undefined **)(uVar16 + 0x98) = _Stack_80.unknown;
    *(ulong *)(uVar16 + 0xa0) = (ulong)local_78;
    *(undefined8 *)(uVar16 + 0xa8) = local_70;
    *(undefined8 *)(uVar16 + 0xb0) = uStack_68;
  }
  FUN_100864364(uVar8,uVar10,uVar17,uVar12,uVar19,uVar13,uVar14);
  return;
}



/* Address: 0x1008688ac | FUN_1008688ac */

void FUN_1008688ac(ulong param_1,long param_2)

{
  _StringGuts _Var1;
  _StringGuts _Var2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined8 uVar17;
  ulong *unaff_x20;
  long lVar18;
  undefined8 uVar19;
  ulong local_98;
  long lStack_90;
  _StringGuts local_88;
  _StringGuts _Stack_80;
  byte local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (param_2 == 0) {
    uVar7 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar16 = *unaff_x20;
    if ((uVar7 & 1) == 0) {
      FUN_100869e18();
      _swift_release(uVar16);
      *unaff_x20 = uVar7;
      uVar16 = uVar7;
    }
    uVar8 = *(undefined8 *)(uVar16 + 0xb8);
    uVar10 = *(undefined8 *)(uVar16 + 0xc0);
    uVar17 = *(undefined8 *)(uVar16 + 200);
    uVar12 = *(undefined8 *)(uVar16 + 0xd0);
    uVar19 = *(undefined8 *)(uVar16 + 0xd8);
    uVar13 = *(undefined8 *)(uVar16 + 0xe0);
    uVar14 = *(undefined8 *)(uVar16 + 0xe8);
    *(undefined8 *)(uVar16 + 0xc0) = 0;
    *(undefined8 *)(uVar16 + 0xb8) = 0;
    *(undefined8 *)(uVar16 + 0xd0) = 0;
    *(undefined8 *)(uVar16 + 200) = 0;
    *(undefined8 *)(uVar16 + 0xe0) = 0;
    *(undefined8 *)(uVar16 + 0xd8) = 0;
    *(undefined8 *)(uVar16 + 0xe8) = 0;
  }
  else {
    uVar16 = *unaff_x20;
    lVar18 = *(long *)(uVar16 + 0xc0);
    if (lVar18 != 0) {
      uVar19 = *(undefined8 *)(uVar16 + 0xb8);
      _Var1.unknown = *(undefined **)(uVar16 + 200);
      _Var2.unknown = *(undefined **)(uVar16 + 0xd0);
      uVar7 = *(ulong *)(uVar16 + 0xd8);
      uVar8 = *(undefined8 *)(uVar16 + 0xe0);
      uVar17 = *(undefined8 *)(uVar16 + 0xe8);
      uVar16 = param_1;
      FUN_100858afc(param_1,param_2);
      if ((uVar16 & 1) == 0) {
        FUN_100867d14(uVar19,lVar18,_Var1.unknown,_Var2.unknown,uVar7,uVar8,uVar17);
      }
      else {
        local_88.unknown = FUN_100872b9c;
        _Stack_80.unknown = (undefined *)0x0;
        local_98 = param_1;
        lStack_90 = param_2;
        FUN_100867d14(uVar19,lVar18,_Var1.unknown,_Var2.unknown,uVar7,uVar8,uVar17);
        puVar5 = &DAT_100fe81f8;
        FUN_1000f7830(&DAT_100fe81f8,&DAT_100c7d850);
        puVar6 = puVar5;
        FUN_10086c640();
        Swift::String::UnicodeScalarView::_append(&local_98,puVar5,puVar6);
        _swift_bridgeObjectRelease(param_2);
        param_1 = 0;
        param_2 = -0x2000000000000000;
      }
      lVar11 = param_2;
      FUN_1008590a4();
      _swift_bridgeObjectRelease(uVar17);
      _swift_bridgeObjectRelease(param_2);
      if ((_Var1.unknown != (undefined *)0x687461703a || _Var2.unknown != &DAT_e500000000000000) &&
         (bVar4 = Swift::_stringCompareWithSmolCheck(_Var1,_Var2,(_StringComparisonResult)0x3a),
         !bVar4)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100868bd4);
        (*pcVar3)();
      }
      _swift_bridgeObjectRetain(lVar18);
      _swift_bridgeObjectRetain(_Var2.unknown);
      _swift_bridgeObjectRetain(lVar11);
      uVar9 = *unaff_x20;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar16 = *unaff_x20;
      if ((uVar9 & 1) == 0) {
        FUN_100869e18();
        _swift_release(uVar16);
        *unaff_x20 = uVar9;
        uVar16 = uVar9;
      }
      uVar8 = *(undefined8 *)(uVar16 + 0xb8);
      uVar12 = *(undefined8 *)(uVar16 + 0xc0);
      uVar17 = *(undefined8 *)(uVar16 + 200);
      uVar13 = *(undefined8 *)(uVar16 + 0xd0);
      uVar10 = *(undefined8 *)(uVar16 + 0xd8);
      uVar14 = *(undefined8 *)(uVar16 + 0xe0);
      uVar15 = *(undefined8 *)(uVar16 + 0xe8);
      *(undefined8 *)(uVar16 + 0xb8) = uVar19;
      *(long *)(uVar16 + 0xc0) = lVar18;
      *(undefined **)(uVar16 + 200) = _Var1.unknown;
      *(undefined **)(uVar16 + 0xd0) = _Var2.unknown;
      *(ulong *)(uVar16 + 0xd8) = uVar7 & 0xff;
      *(ulong *)(uVar16 + 0xe0) = param_1;
      *(long *)(uVar16 + 0xe8) = lVar11;
      FUN_100864364(uVar8,uVar12,uVar17,uVar13,uVar10,uVar14,uVar15);
      _swift_bridgeObjectRelease(lVar11);
      _swift_bridgeObjectRelease(_Var2.unknown);
      _swift_bridgeObjectRelease(lVar18);
      return;
    }
    FUN_100859230(&local_98,0x687461703a,&DAT_e500000000000000,0x687461703a,&DAT_e500000000000000,
                  param_1,param_2);
    if (((local_88.unknown != (undefined *)0x687461703a) ||
        (_Stack_80.unknown != &DAT_e500000000000000)) &&
       (bVar4 = Swift::_stringCompareWithSmolCheck(local_88,_Stack_80,(_StringComparisonResult)0x3a)
       , !bVar4)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100868bd8);
      (*pcVar3)();
    }
    uVar7 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar16 = *unaff_x20;
    if ((uVar7 & 1) == 0) {
      FUN_100869e18();
      _swift_release(uVar16);
      *unaff_x20 = uVar7;
      uVar16 = uVar7;
    }
    uVar8 = *(undefined8 *)(uVar16 + 0xb8);
    uVar10 = *(undefined8 *)(uVar16 + 0xc0);
    uVar17 = *(undefined8 *)(uVar16 + 200);
    uVar12 = *(undefined8 *)(uVar16 + 0xd0);
    uVar19 = *(undefined8 *)(uVar16 + 0xd8);
    uVar13 = *(undefined8 *)(uVar16 + 0xe0);
    uVar14 = *(undefined8 *)(uVar16 + 0xe8);
    *(ulong *)(uVar16 + 0xb8) = local_98;
    *(long *)(uVar16 + 0xc0) = lStack_90;
    *(undefined **)(uVar16 + 200) = local_88.unknown;
    *(undefined **)(uVar16 + 0xd0) = _Stack_80.unknown;
    *(ulong *)(uVar16 + 0xd8) = (ulong)local_78;
    *(undefined8 *)(uVar16 + 0xe0) = local_70;
    *(undefined8 *)(uVar16 + 0xe8) = uStack_68;
  }
  FUN_100864364(uVar8,uVar10,uVar17,uVar12,uVar19,uVar13,uVar14);
  return;
}


