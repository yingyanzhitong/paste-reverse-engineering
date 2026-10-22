/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10043cc38 | FUN_10043cc38 */

undefined1  [16] FUN_10043cc38(ulong param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  ulong uVar4;
  undefined1 (*pauVar5) [16];
  ulong uVar6;
  ulong *unaff_x20;
  long lVar7;
  
  uVar6 = *unaff_x20;
  uVar4 = uVar6;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar4 & 1) == 0) {
    FUN_10043cd70();
  }
  if (param_1 < *(ulong *)(uVar6 + 0x10)) {
    lVar7 = *(ulong *)(uVar6 + 0x10) - 1;
    lVar1 = uVar6 + param_1 * 0x10;
    pauVar5 = (undefined1 (*) [16])(lVar1 + 0x20);
    auVar2 = *pauVar5;
    _memmove(pauVar5,(void *)(lVar1 + 0x30),(lVar7 - param_1) * 0x10);
    *(long *)(uVar6 + 0x10) = lVar7;
    *unaff_x20 = uVar6;
    return auVar2;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10043ccc0);
  (*pcVar3)();
}



/* Address: 0x10043ccc0 | FUN_10043ccc0 */

void FUN_10043ccc0(ulong *param_1,ulong *param_2,long *param_3)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  uVar6 = *param_1;
  uVar5 = *param_2;
  lVar7 = *param_3;
  lVar3 = 0;
  FUN_100432e30();
  lVar4 = *(long *)(*(long *)(lVar3 + -8) + 0x48);
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10043cd6c);
    (*pcVar2)();
  }
  if (lVar7 - uVar5 != -0x8000000000000000 || lVar4 != -1) {
    lVar1 = 0;
    if (lVar4 != 0) {
      lVar1 = (long)(lVar7 - uVar5) / lVar4;
    }
    if ((uVar5 <= uVar6) && (uVar6 < uVar5 + lVar1 * lVar4)) {
      if (uVar6 != uVar5) {
        _swift_arrayInitWithTakeBackToFront(uVar6,uVar5);
        return;
      }
      return;
    }
    _swift_arrayInitWithTakeFrontToBack(uVar6,uVar5,lVar1,lVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10043cd70);
  (*pcVar2)();
}



/* Address: 0x10043cd70 | FUN_10043cd70 */

void FUN_10043cd70(long param_1)

{
  FUN_10043c700(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x10043cd84 | FUN_10043cd84 */

void FUN_10043cd84(long param_1)

{
  FUN_10043ba14(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x10043cd98 | FUN_10043cd98 */

void FUN_10043cd98(long param_1,long param_2,long param_3,long *param_4,code *param_5)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  lVar3 = 0;
  FUN_100432e30();
  uVar5 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar7 = &stack0xffffffffffffff50 + -uVar5;
  lVar14 = (long)puVar7 - uVar5;
  uVar5 = lVar14 - uVar5;
  if (param_3 != param_2) {
    lVar6 = *param_4;
    lVar8 = *(long *)(*(long *)(lVar3 + -8) + 0x48);
    lVar9 = lVar6 + lVar8 * (param_3 + -1);
    param_1 = param_1 - param_3;
    lVar11 = lVar6 + lVar8 * param_3;
    lVar13 = param_1;
    lVar12 = lVar11;
    lVar10 = lVar9;
LAB_10043cea0:
    do {
      FUN_100431a90(lVar11,uVar5);
      FUN_100431a90(lVar9,lVar14);
      uVar4 = uVar5;
      (*param_5)(uVar5,lVar14);
      FUN_10005241c(lVar14,FUN_100432e30);
      FUN_10005241c(uVar5,FUN_100432e30);
      if ((uVar4 & 1) != 0) {
        if (lVar6 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10043cf40);
          (*pcVar1)();
        }
        FUN_1000523d8(lVar11,puVar7,FUN_100432e30);
        _swift_arrayInitWithTakeFrontToBack(lVar11,lVar9,1,lVar3);
        FUN_1000523d8(puVar7,lVar9,FUN_100432e30);
        lVar9 = lVar9 + -lVar8;
        lVar11 = lVar11 + -lVar8;
        bVar2 = param_1 != -1;
        param_1 = param_1 + 1;
        if (bVar2) goto LAB_10043cea0;
      }
      param_3 = param_3 + 1;
      lVar9 = lVar10 + lVar8;
      param_1 = lVar13 + -1;
      lVar11 = lVar12 + lVar8;
      lVar13 = param_1;
      lVar12 = lVar11;
      lVar10 = lVar9;
    } while (param_3 != param_2);
  }
  return;
}



/* Address: 0x10043cf40 | FUN_10043cf40 */

undefined8 FUN_10043cf40(ulong param_1,ulong param_2,ulong param_3,ulong param_4,code *param_5)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 auStack_c0 [8];
  ulong local_b8;
  ulong local_b0;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  ulong local_58;
  
  lVar3 = 0;
  FUN_100432e30();
  lVar6 = *(long *)(*(long *)(lVar3 + -8) + 0x48);
  uVar7 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar8 = auStack_c0 + -uVar7;
  uVar7 = (long)puVar8 - uVar7;
  if (lVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10043d380);
    (*pcVar2)();
  }
  if ((param_2 - param_1 == -0x8000000000000000) && (lVar6 == -1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10043d384);
    (*pcVar2)();
  }
  if ((param_3 - param_2 == -0x8000000000000000) && (lVar6 == -1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10043d388);
    (*pcVar2)();
  }
  lVar10 = 0;
  if (lVar6 != 0) {
    lVar10 = (long)(param_2 - param_1) / lVar6;
  }
  lVar9 = 0;
  if (lVar6 != 0) {
    lVar9 = (long)(param_3 - param_2) / lVar6;
  }
  local_58 = param_1;
  local_68 = param_4;
  if (lVar10 < lVar9) {
    lVar9 = lVar10 * lVar6;
    if ((param_4 < param_1) || (param_1 + lVar9 <= param_4)) {
      _swift_arrayInitWithTakeFrontToBack(param_4,param_1,lVar10,lVar3);
    }
    else if (param_4 != param_1) {
      _swift_arrayInitWithTakeBackToFront(param_4,param_1,lVar10,lVar3);
    }
    uVar13 = param_4 + lVar9;
    local_70 = uVar13;
    if (0 < lVar9 && param_2 < param_3) {
      do {
        FUN_100431a90(param_2,uVar7);
        FUN_100431a90(param_4,puVar8);
        uVar4 = uVar7;
        (*param_5)(uVar7,puVar8);
        FUN_10005241c(puVar8,FUN_100432e30);
        FUN_10005241c(uVar7,FUN_100432e30);
        if ((uVar4 & 1) == 0) {
          uVar12 = param_4 + lVar6;
          uVar4 = param_2;
          uVar1 = uVar12;
          if ((param_1 < param_4) || (uVar12 <= param_1)) {
            _swift_arrayInitWithTakeFrontToBack(param_1,param_4,1,lVar3);
          }
          else if (param_1 != param_4) {
            _swift_arrayInitWithTakeBackToFront(param_1,param_4,1,lVar3);
          }
        }
        else {
          uVar4 = param_2 + lVar6;
          uVar12 = param_4;
          if ((param_1 < param_2) || (uVar4 <= param_1)) {
            _swift_arrayInitWithTakeFrontToBack(param_1,param_2,1,lVar3);
            uVar1 = local_68;
          }
          else {
            uVar1 = local_68;
            if (param_1 != param_2) {
              _swift_arrayInitWithTakeBackToFront(param_1,param_2,1,lVar3);
              uVar1 = local_68;
            }
          }
        }
        local_68 = uVar1;
        param_1 = param_1 + lVar6;
        local_58 = param_1;
      } while ((uVar12 < uVar13) &&
              (param_4 = uVar12, param_2 = uVar4, local_58 = param_1, uVar4 < param_3));
    }
  }
  else {
    lVar10 = lVar9 * lVar6;
    if ((param_4 < param_2) || (param_2 + lVar10 <= param_4)) {
      _swift_arrayInitWithTakeFrontToBack(param_4,param_2,lVar9,lVar3);
    }
    else if (param_4 != param_2) {
      _swift_arrayInitWithTakeBackToFront(param_4,param_2,lVar9,lVar3);
    }
    uVar13 = param_4 + lVar10;
    local_70 = uVar13;
    local_58 = param_2;
    if (0 < lVar10 && param_1 < param_2) {
      lVar6 = -lVar6;
      local_58 = param_2;
      local_b8 = param_1;
      local_78 = param_3;
      do {
        uVar4 = local_58 + lVar6;
        local_b0 = local_58;
        while( true ) {
          uVar12 = local_78 + lVar6;
          uVar1 = uVar13 + lVar6;
          FUN_100431a90(uVar1,uVar7);
          FUN_100431a90(uVar4,puVar8);
          uVar5 = uVar7;
          (*param_5)(uVar7,puVar8);
          FUN_10005241c(puVar8,FUN_100432e30);
          FUN_10005241c(uVar7,FUN_100432e30);
          uVar11 = local_b8;
          if ((uVar5 & 1) != 0) break;
          local_70 = uVar1;
          if ((local_78 < uVar13) || (uVar13 <= uVar12)) {
            _swift_arrayInitWithTakeFrontToBack(uVar12,uVar1,1,lVar3);
          }
          else if (local_78 != uVar13) {
            _swift_arrayInitWithTakeBackToFront(uVar12,uVar1,1,lVar3);
          }
          uVar13 = uVar1;
          local_78 = uVar12;
          if (uVar1 <= param_4) goto LAB_10043d1d8;
        }
        if ((local_78 < local_b0) || (local_b0 <= uVar12)) {
          _swift_arrayInitWithTakeFrontToBack(uVar12,uVar4,1,lVar3);
          uVar11 = local_b8;
        }
        else if (local_78 != local_b0) {
          _swift_arrayInitWithTakeBackToFront(uVar12,uVar4,1,lVar3);
        }
        local_58 = uVar4;
      } while ((param_4 < uVar13) && (local_78 = uVar12, uVar11 < uVar4));
    }
  }
LAB_10043d1d8:
  FUN_10043ccc0(&local_58,&local_68,&local_70);
  return 1;
}



/* Address: 0x10043d388 | FUN_10043d388 */

undefined8
FUN_10043d388(ulong *param_1,undefined8 param_2,long *param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long unaff_x21;
  long lVar14;
  ulong uVar15;
  
  uVar8 = *param_1;
  if (1 < *(ulong *)(uVar8 + 0x10)) {
    _swift_retain(param_5);
    uVar12 = uVar8;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar12 & 1) == 0) {
      FUN_10043cd70();
    }
    *param_1 = uVar8;
    lVar1 = uVar8 + 0x20;
    uVar12 = *(ulong *)(uVar8 + 0x10);
    do {
      uVar10 = uVar12 - 1;
      if (uVar12 < 4) {
        if (uVar12 == 3) {
          bVar6 = SBORROW8(*(long *)(uVar8 + 0x28),*(long *)(uVar8 + 0x20));
          lVar13 = *(long *)(uVar8 + 0x28) - *(long *)(uVar8 + 0x20);
          goto LAB_10043d484;
        }
        if (uVar12 < 2) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10043d658);
          (*pcVar5)();
        }
        plVar2 = (long *)(uVar8 + uVar12 * 0x10);
        lVar13 = *plVar2;
        lVar9 = plVar2[1];
        bVar6 = SBORROW8(lVar9,lVar13);
        lVar9 = lVar9 - lVar13;
LAB_10043d4e4:
        if (bVar6) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10043d648);
          (*pcVar5)();
        }
        plVar2 = (long *)(lVar1 + uVar10 * 0x10);
        lVar13 = *plVar2;
        lVar4 = plVar2[1];
        if (SBORROW8(lVar4,lVar13)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10043d650);
          (*pcVar5)();
        }
        uVar11 = uVar10;
        if (lVar4 - lVar13 < lVar9) break;
      }
      else {
        lVar9 = lVar1 + uVar12 * 0x10;
        if (SBORROW8(*(long *)(lVar9 + -0x38),*(long *)(lVar9 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10043d630);
          (*pcVar5)();
        }
        lVar13 = *(long *)(lVar9 + -0x28) - *(long *)(lVar9 + -0x30);
        if (SBORROW8(*(long *)(lVar9 + -0x28),*(long *)(lVar9 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10043d634);
          (*pcVar5)();
        }
        plVar2 = (long *)(uVar8 + uVar12 * 0x10);
        lVar4 = *plVar2;
        lVar7 = plVar2[1];
        lVar14 = lVar7 - lVar4;
        if (SBORROW8(lVar7,lVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10043d63c);
          (*pcVar5)();
        }
        if (SCARRY8(lVar13,lVar14)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10043d644);
          (*pcVar5)();
        }
        bVar6 = false;
        if (lVar13 + lVar14 < *(long *)(lVar9 + -0x38) - *(long *)(lVar9 + -0x40)) {
LAB_10043d484:
          if (bVar6) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10043d638);
            (*pcVar5)();
          }
          plVar2 = (long *)(uVar8 + uVar12 * 0x10);
          lVar4 = *plVar2;
          lVar7 = plVar2[1];
          lVar9 = lVar7 - lVar4;
          if (SBORROW8(lVar7,lVar4)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10043d640);
            (*pcVar5)();
          }
          plVar2 = (long *)(lVar1 + uVar10 * 0x10);
          lVar4 = *plVar2;
          lVar7 = plVar2[1];
          lVar14 = lVar7 - lVar4;
          if (SBORROW8(lVar7,lVar4)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10043d64c);
            (*pcVar5)();
          }
          if (SCARRY8(lVar9,lVar14)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10043d654);
            (*pcVar5)();
          }
          bVar6 = false;
          if (lVar9 + lVar14 < lVar13) goto LAB_10043d4e4;
          uVar11 = uVar12 - 2;
          if (lVar14 <= lVar13) {
            uVar11 = uVar10;
          }
        }
        else {
          plVar2 = (long *)(lVar1 + uVar10 * 0x10);
          lVar9 = *plVar2;
          lVar4 = plVar2[1];
          if (SBORROW8(lVar4,lVar9)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10043d65c);
            (*pcVar5)();
          }
          uVar11 = uVar12 - 2;
          if (lVar4 - lVar9 <= lVar13) {
            uVar11 = uVar10;
          }
        }
      }
      uVar10 = uVar11 - 1;
      if (uVar12 <= uVar10) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10043d620);
        (*pcVar5)();
      }
      lVar13 = *param_3;
      if (lVar13 == 0) {
        _swift_release(param_5);
        *param_1 = uVar8;
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10043d680);
        (*pcVar5)();
      }
      plVar2 = (long *)(lVar1 + uVar10 * 0x10);
      lVar14 = *plVar2;
      plVar3 = (long *)(lVar1 + uVar11 * 0x10);
      lVar9 = *plVar3;
      lVar4 = plVar3[1];
      lVar7 = 0;
      FUN_100432e30();
      lVar7 = *(long *)(*(long *)(lVar7 + -8) + 0x48);
      _swift_retain(param_5);
      FUN_10043cf40(lVar13 + lVar7 * lVar14,lVar13 + lVar7 * lVar9,lVar13 + lVar7 * lVar4,param_2,
                    param_4,param_5);
      _swift_release(param_5);
      if (unaff_x21 != 0) {
        *param_1 = uVar8;
        _swift_release(param_5);
        return 1;
      }
      if (lVar4 < lVar14) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10043d624);
        (*pcVar5)();
      }
      uVar15 = *(ulong *)(uVar8 + 0x10);
      if (uVar15 <= uVar10) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10043d628);
        (*pcVar5)();
      }
      *plVar2 = lVar14;
      plVar2[1] = lVar4;
      if (uVar15 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10043d62c);
        (*pcVar5)();
      }
      uVar12 = uVar15 - 1;
      _memmove(plVar3,plVar3 + 2,(uVar12 - uVar11) * 0x10);
      *(ulong *)(uVar8 + 0x10) = uVar12;
    } while (2 < uVar15);
    _swift_release(param_5);
    *param_1 = uVar8;
  }
  return 1;
}



/* Address: 0x10043d680 | FUN_10043d680 */

void FUN_10043d680(long *param_1,undefined8 param_2,long *param_3,long param_4,code *param_5,
                  undefined8 param_6)

{
  long *plVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long lVar6;
  code *pcVar7;
  bool bVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long unaff_x21;
  long lVar16;
  ulong *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined1 auStack_110 [8];
  long *local_108;
  long local_100;
  long *local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long lStack_c8;
  long local_c0;
  long lStack_b8;
  long local_b0;
  long lStack_a8;
  undefined1 *local_a0;
  long local_98;
  long local_90;
  undefined8 local_88;
  undefined *local_80;
  long local_78;
  code *local_70;
  undefined *local_58;
  
  lVar9 = 0;
  local_108 = param_1;
  local_70 = param_5;
  FUN_100432e30();
  local_100 = *(long *)(lVar9 + -8);
  uVar13 = *(long *)(local_100 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_a0 = auStack_110 + -uVar13;
  local_d8 = (long)local_a0 - uVar13;
  local_78 = local_d8 - uVar13;
  local_80 = (undefined *)(local_78 - uVar13);
  local_58 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar16 = param_3[1];
  local_f8 = param_3;
  local_90 = lVar9;
  local_88 = param_6;
  if (lVar16 < 1) {
    _swift_retain_n(param_6,2);
  }
  else {
    _swift_retain_n(param_6,2);
    lVar9 = 0;
    local_f0 = param_4;
    do {
      puVar12 = local_80;
      lVar22 = lVar9 + 1;
      local_e8 = unaff_x21;
      local_e0 = lVar9;
      if (lVar22 < lVar16) {
        lVar15 = *param_3;
        lVar18 = *(long *)(local_100 + 0x48);
        lVar20 = lVar15 + lVar18 * lVar22;
        FUN_100431a90(lVar20,local_80);
        lVar22 = local_78;
        FUN_100431a90(lVar15 + lVar18 * lVar9,local_78);
        puVar10 = puVar12;
        (*local_70)(puVar12,lVar22);
        FUN_10005241c(lVar22,FUN_100432e30);
        FUN_10005241c(puVar12,FUN_100432e30);
        lVar15 = lVar15 + lVar18 * (local_e0 + 2);
        lVar9 = local_e0 + 2;
        local_98 = lVar18;
        do {
          puVar12 = local_80;
          lVar22 = lVar16;
          if (lVar16 == lVar9) break;
          FUN_100431a90(lVar15,local_80);
          lVar22 = local_78;
          FUN_100431a90(lVar20,local_78);
          puVar11 = puVar12;
          (*local_70)(puVar12,lVar22);
          FUN_10005241c(lVar22,FUN_100432e30);
          FUN_10005241c(puVar12,FUN_100432e30);
          lVar15 = lVar15 + local_98;
          lVar20 = lVar20 + local_98;
          lVar22 = lVar9;
          lVar9 = lVar9 + 1;
        } while (((uint)puVar10 & 1) == ((uint)puVar11 & 1));
        param_4 = local_f0;
        param_3 = local_f8;
        if (((ulong)puVar10 & 1) != 0) {
          if (lVar22 < local_e0) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10043dd34);
            (*pcVar7)();
          }
          if (local_e0 < lVar22) {
            lVar20 = 0;
            lVar15 = *local_f8;
            lVar21 = local_98 * (lVar22 + -1);
            lVar18 = lVar22 * local_98;
            lVar16 = local_e0 * local_98;
            lVar9 = local_e0;
            do {
              if (lVar9 != lVar22 + lVar20 + -1) {
                if (lVar15 == 0) {
                  _swift_release_n(local_88,2);
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x10043dd6c);
                  (*pcVar7)();
                }
                uVar13 = lVar15 + lVar16;
                FUN_1000523d8(uVar13,local_d8,FUN_100432e30);
                if ((lVar16 < lVar21) || ((ulong)(lVar15 + lVar18) <= uVar13)) {
                  _swift_arrayInitWithTakeFrontToBack(uVar13,lVar15 + lVar21,1,local_90);
                }
                else if (local_98 != 0) {
                  _swift_arrayInitWithTakeBackToFront(uVar13,lVar15 + lVar21,1,local_90);
                }
                FUN_1000523d8(local_d8,lVar15 + lVar21,FUN_100432e30);
              }
              lVar9 = lVar9 + 1;
              lVar20 = lVar20 + -1;
              lVar21 = lVar21 - local_98;
              lVar18 = lVar18 - local_98;
              lVar16 = lVar16 + local_98;
              param_4 = local_f0;
              param_6 = local_88;
              param_3 = local_f8;
            } while (lVar9 < lVar22 + lVar20);
          }
        }
      }
      lVar16 = param_3[1];
      lVar9 = lVar22;
      unaff_x21 = local_e8;
      if (lVar22 < lVar16) {
        if (SBORROW8(lVar22,local_e0)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10043dd30);
          (*pcVar7)();
        }
        if (lVar22 - local_e0 < param_4) {
          if (SCARRY8(local_e0,param_4)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10043dd38);
            (*pcVar7)();
          }
          lVar15 = local_e0 + param_4;
          if (lVar16 <= local_e0 + param_4) {
            lVar15 = lVar16;
          }
          if (lVar15 < local_e0) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10043dd3c);
            (*pcVar7)();
          }
          if (lVar22 != lVar15) {
            local_98 = *param_3;
            local_d0 = *(long *)(local_100 + 0x48);
            lVar20 = local_98 + local_d0 * (lVar22 + -1);
            lVar19 = -local_d0;
            lVar16 = local_e0 - lVar22;
            lVar18 = local_98 + lVar22 * local_d0;
            lStack_c8 = lVar15;
            lVar15 = lVar18;
            lVar21 = lVar16;
            lVar6 = lVar20;
LAB_10043da18:
            do {
              lStack_a8 = lVar22;
              local_b0 = lVar6;
              lStack_b8 = lVar21;
              local_c0 = lVar15;
              puVar12 = local_80;
              FUN_100431a90(lVar18,local_80);
              lVar9 = local_78;
              FUN_100431a90(lVar20,local_78);
              puVar10 = puVar12;
              (*local_70)(puVar12,lVar9);
              FUN_10005241c(lVar9,FUN_100432e30);
              FUN_10005241c(puVar12,FUN_100432e30);
              puVar5 = local_a0;
              if (((ulong)puVar10 & 1) != 0) {
                if (local_98 == 0) {
                  _swift_release_n(local_88,2);
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x10043dd4c);
                  (*pcVar7)();
                }
                FUN_1000523d8(lVar18,local_a0,FUN_100432e30);
                _swift_arrayInitWithTakeFrontToBack(lVar18,lVar20,1,local_90);
                FUN_1000523d8(puVar5,lVar20,FUN_100432e30);
                lVar20 = lVar20 + lVar19;
                lVar18 = lVar18 + lVar19;
                bVar8 = lVar16 != -1;
                lVar16 = lVar16 + 1;
                lVar15 = local_c0;
                lVar21 = lStack_b8;
                lVar6 = local_b0;
                lVar22 = lStack_a8;
                if (bVar8) goto LAB_10043da18;
              }
              lVar20 = local_b0 + local_d0;
              lVar16 = lStack_b8 + -1;
              lVar18 = local_c0 + local_d0;
              lVar9 = lStack_c8;
              param_6 = local_88;
              unaff_x21 = local_e8;
              param_3 = local_f8;
              lVar15 = lVar18;
              lVar21 = lVar16;
              lVar6 = lVar20;
              lVar22 = lStack_a8 + 1;
            } while (lStack_a8 + 1 != lStack_c8);
          }
        }
      }
      puVar12 = local_58;
      if (lVar9 < local_e0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10043dd20);
        (*pcVar7)();
      }
      puVar10 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar11 = puVar12;
      if (((ulong)puVar10 & 1) == 0) {
        puVar11 = (undefined *)0x0;
        FUN_10043c700(0,*(long *)(puVar12 + 0x10) + 1,1,puVar12);
      }
      uVar13 = *(ulong *)(puVar11 + 0x10);
      if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar13) {
        puVar12 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
        FUN_10043c700(puVar12,uVar13 + 1,1,puVar11);
        puVar11 = puVar12;
      }
      *(ulong *)(puVar11 + 0x10) = uVar13 + 1;
      *(long *)(puVar11 + uVar13 * 0x10 + 0x20) = local_e0;
      *(long *)(puVar11 + uVar13 * 0x10 + 0x28) = lVar9;
      lVar16 = *local_108;
      local_58 = puVar11;
      if (lVar16 == 0) {
        _swift_release_n(param_6,2);
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10043dd7c);
        (*pcVar7)();
      }
      _swift_retain(param_6);
      FUN_10043d388(&local_58,lVar16,param_3,local_70,param_6);
      param_4 = local_f0;
      if (unaff_x21 != 0) {
        _swift_release(param_6);
        puVar10 = local_58;
        puVar12 = local_80;
        goto LAB_10043dce4;
      }
      _swift_release(param_6);
      lVar16 = param_3[1];
    } while (lVar9 < lVar16);
    unaff_x21 = 0;
  }
  puVar10 = local_58;
  local_78 = *local_108;
  if (local_78 == 0) {
    _swift_release_n(param_6,2);
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10043dd9c);
    (*pcVar7)();
  }
  puVar12 = local_58;
  local_e8 = unaff_x21;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar12 & 1) == 0) {
    FUN_10043cd70();
  }
  puVar17 = (ulong *)(puVar10 + 0x10);
  uVar13 = *puVar17;
  uVar4 = local_88;
  puVar12 = local_80;
  do {
    local_80 = puVar10;
    puVar10 = local_80;
    local_88 = uVar4;
    if (uVar13 < 2) {
LAB_10043dce4:
      local_80 = puVar12;
      _swift_release_n(param_6,2);
      _swift_bridgeObjectRelease(puVar10);
      return;
    }
    lVar9 = *param_3;
    if (lVar9 == 0) {
      _swift_release_n(uVar4,2);
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10043dd8c);
      (*pcVar7)();
    }
    plVar1 = (long *)(local_80 + uVar13 * 0x10);
    lVar22 = *plVar1;
    puVar2 = puVar17 + uVar13 * 2;
    uVar14 = *puVar2;
    uVar3 = puVar2[1];
    lVar16 = *(long *)(local_100 + 0x48);
    _swift_retain(uVar4);
    FUN_10043cf40(lVar9 + lVar16 * lVar22,lVar9 + lVar16 * uVar14,lVar9 + lVar16 * uVar3,local_78,
                  local_70,uVar4);
    puVar10 = local_80;
    param_6 = uVar4;
    if (local_e8 != 0) {
      local_58 = local_80;
      _swift_release(uVar4);
      puVar12 = local_80;
      goto LAB_10043dce4;
    }
    _swift_release(uVar4);
    if ((long)uVar3 < lVar22) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10043dd24);
      (*pcVar7)();
    }
    uVar14 = *puVar17;
    if (uVar14 <= uVar13 - 2) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10043dd28);
      (*pcVar7)();
    }
    *plVar1 = lVar22;
    plVar1[1] = uVar3;
    lVar9 = uVar14 - uVar13;
    if (uVar14 < uVar13) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10043dd2c);
      (*pcVar7)();
    }
    uVar13 = uVar14 - 1;
    _memmove(puVar2,puVar2 + 2,lVar9 * 0x10);
    *puVar17 = uVar13;
    puVar10 = local_80;
    param_3 = local_f8;
    uVar4 = local_88;
    puVar12 = local_80;
  } while( true );
}



/* Address: 0x10043dd9c | FUN_10043dd9c */

void FUN_10043dd9c(ulong *param_1,undefined8 param_2,undefined *param_3)

{
  ContiguousArray CVar1;
  __int64 _Var2;
  _ContiguousArrayBuffer<undefined> _Var3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong minimumCapacity;
  undefined *local_80;
  ulong uStack_78;
  long local_70;
  ulong uStack_68;
  undefined1 auStack_58 [8];
  
  CVar1.unknown = (undefined *)0x0;
  FUN_100432e30();
  lVar5 = *(long *)(CVar1.unknown + -8);
  uVar4 = *param_1;
  _swift_retain_n(param_3,3);
  uVar6 = uVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar6 & 1) == 0) {
    FUN_10043cd84();
  }
  uVar7 = *(ulong *)(uVar4 + 0x10);
  uVar6 = (ulong)*(byte *)(lVar5 + 0x50) + 0x20 &
          ((ulong)*(byte *)(lVar5 + 0x50) ^ 0xffffffffffffffff);
  local_70 = uVar4 + uVar6;
  uStack_68 = uVar7;
  _Var2 = Swift::_minimumMergeRunLength(uVar7);
  if (_Var2 < (long)uVar7) {
    minimumCapacity = uVar7 >> 1;
    _Var3.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (1 < uVar7) {
      _Var3 = Swift::ContiguousArray::_allocateBufferUninitialized(minimumCapacity,CVar1);
      *(ulong *)(_Var3.unknown + 0x10) = minimumCapacity;
    }
    local_80 = _Var3.unknown + uVar6;
    uStack_78 = minimumCapacity;
    _swift_retain(param_3);
    FUN_10043d680(&local_80,auStack_58,&local_70,_Var2,param_2,param_3);
    _swift_release(param_3);
    *(undefined8 *)(_Var3.unknown + 0x10) = 0;
  }
  else {
    if (uVar7 == 0) goto LAB_10043dee0;
    _swift_retain(param_3);
    FUN_10043cd98(0,uVar7,1,&local_70,param_2,param_3);
    _Var3.unknown = param_3;
  }
  _swift_release(_Var3.unknown);
LAB_10043dee0:
  *param_1 = uVar4;
  _swift_release_n(param_3,3);
  return;
}



/* Address: 0x10043df14 | FUN_10043df14 */

undefined1  [16] FUN_10043df14(void)

{
  return ZEXT816(0x100ed4dd0);
}



/* Address: 0x10043df24 | FUN_10043df24 */

long * FUN_10043df24(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  Date DVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  long lVar17;
  
  uVar9 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  lVar14 = *param_2;
  *param_1 = lVar14;
  if ((uVar9 >> 0x11 & 1) == 0) {
    lVar15 = param_2[2];
    param_1[1] = param_2[1];
    param_1[2] = lVar15;
    lVar4 = param_2[4];
    param_1[3] = param_2[3];
    param_1[4] = lVar4;
    lVar5 = param_2[6];
    param_1[5] = param_2[5];
    param_1[6] = lVar5;
    lVar17 = (long)*(int *)(param_3 + 0x20);
    DVar10 = Foundation::Date::typeMetadataAccessor();
    lVar12 = *(long *)(DVar10.unknown + -8);
    pcVar16 = *(code **)(lVar12 + 0x30);
    _swift_bridgeObjectRetain(lVar14);
    _swift_bridgeObjectRetain(lVar15);
    _swift_bridgeObjectRetain(lVar4);
    _swift_bridgeObjectRetain(lVar5);
    lVar14 = (long)param_2 + lVar17;
    (*pcVar16)(lVar14,1,DVar10.unknown);
    if ((int)lVar14 == 0) {
      (**(code **)(lVar12 + 0x10))((long)param_1 + lVar17,(long)param_2 + lVar17,DVar10.unknown);
      (**(code **)(lVar12 + 0x38))((long)param_1 + lVar17,0,1,DVar10.unknown);
    }
    else {
      puVar11 = &DAT_100fc67c8;
      FUN_1000f7830(&DAT_100fc67c8,&DAT_100c4a330);
      _memcpy((void *)((long)param_1 + lVar17),(void *)((long)param_2 + lVar17),
              *(size_t *)(*(long *)(puVar11 + -8) + 0x40));
    }
    lVar15 = (long)*(int *)(param_3 + 0x24);
    lVar14 = (long)param_2 + lVar15;
    (*pcVar16)(lVar14,1,DVar10.unknown);
    if ((int)lVar14 == 0) {
      (**(code **)(lVar12 + 0x10))((long)param_1 + lVar15,(long)param_2 + lVar15,DVar10.unknown);
      (**(code **)(lVar12 + 0x38))((long)param_1 + lVar15,0,1,DVar10.unknown);
    }
    else {
      puVar11 = &DAT_100fc67c8;
      FUN_1000f7830(&DAT_100fc67c8,&DAT_100c4a330);
      _memcpy((void *)((long)param_1 + lVar15),(void *)((long)param_2 + lVar15),
              *(size_t *)(*(long *)(puVar11 + -8) + 0x40));
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
    uVar3 = *puVar2;
    uVar6 = puVar2[1];
    FUN_1001037b4(uVar3,uVar6);
    *puVar1 = uVar3;
    puVar1[1] = uVar6;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
    uVar3 = *puVar2;
    uVar6 = puVar2[1];
    FUN_1001037b4(uVar3,uVar6);
    *puVar1 = uVar3;
    puVar1[1] = uVar6;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
    uVar3 = *puVar2;
    uVar6 = puVar2[1];
    FUN_1001037b4(uVar3,uVar6);
    *puVar1 = uVar3;
    puVar1[1] = uVar6;
    (**(code **)(lVar12 + 0x10))
              ((long)param_1 + (long)*(int *)(param_3 + 0x34),
               (long)param_2 + (long)*(int *)(param_3 + 0x34),DVar10.unknown);
    iVar8 = *(int *)(param_3 + 0x3c);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar8);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar8);
    uVar6 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar6;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x40));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x40));
    uVar3 = *puVar2;
    uVar7 = puVar2[1];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar6);
    FUN_1001037b4(uVar3,uVar7);
    *puVar1 = uVar3;
    puVar1[1] = uVar7;
  }
  else {
    uVar13 = (ulong)uVar9 & 0xff;
    param_1 = (long *)(lVar14 + (uVar13 + 0x10 & (uVar13 ^ 0xffffffffffffffff)));
    _swift_retain(lVar14);
  }
  return param_1;
}



/* Address: 0x10043e1a4 | FUN_10043e1a4 */

void FUN_10043e1a4(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  Date DVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  
  _swift_bridgeObjectRelease(*param_1);
  _swift_bridgeObjectRelease(param_1[2]);
  _swift_bridgeObjectRelease(param_1[4]);
  _swift_bridgeObjectRelease(param_1[6]);
  iVar2 = *(int *)(param_2 + 0x20);
  DVar3 = Foundation::Date::typeMetadataAccessor();
  lVar5 = *(long *)(DVar3.unknown + -8);
  pcVar6 = *(code **)(lVar5 + 0x30);
  lVar4 = (long)param_1 + (long)iVar2;
  (*pcVar6)(lVar4,1,DVar3.unknown);
  if ((int)lVar4 == 0) {
    (**(code **)(lVar5 + 8))((long)param_1 + (long)iVar2,DVar3.unknown);
  }
  iVar2 = *(int *)(param_2 + 0x24);
  lVar4 = (long)param_1 + (long)iVar2;
  (*pcVar6)(lVar4,1,DVar3.unknown);
  if ((int)lVar4 == 0) {
    (**(code **)(lVar5 + 8))((long)param_1 + (long)iVar2,DVar3.unknown);
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_2 + 0x28));
  FUN_10003bf2c(*puVar1,puVar1[1]);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_2 + 0x2c));
  FUN_10003bf2c(*puVar1,puVar1[1]);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_2 + 0x30));
  FUN_10003bf2c(*puVar1,puVar1[1]);
  (**(code **)(lVar5 + 8))((long)param_1 + (long)*(int *)(param_2 + 0x34),DVar3.unknown);
  _swift_bridgeObjectRelease(*(undefined8 *)((long)param_1 + (long)*(int *)(param_2 + 0x38) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)((long)param_1 + (long)*(int *)(param_2 + 0x3c) + 8));
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_2 + 0x40));
  FUN_10003bf2c(*param_1,param_1[1]);
  return;
}



/* Address: 0x10043e2c8 | FUN_10043e2c8 */

undefined8 * FUN_10043e2c8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  Date DVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  code *pcVar11;
  undefined8 uVar12;
  long lVar13;
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  *param_1 = uVar3;
  param_1[1] = uVar4;
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  uVar5 = param_2[4];
  uVar12 = param_2[5];
  param_1[4] = uVar5;
  param_1[5] = uVar12;
  uVar12 = param_2[6];
  param_1[6] = uVar12;
  lVar13 = (long)*(int *)(param_3 + 0x20);
  DVar7 = Foundation::Date::typeMetadataAccessor();
  lVar10 = *(long *)(DVar7.unknown + -8);
  pcVar11 = *(code **)(lVar10 + 0x30);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar12);
  lVar8 = (long)param_2 + lVar13;
  (*pcVar11)(lVar8,1,DVar7.unknown);
  if ((int)lVar8 == 0) {
    (**(code **)(lVar10 + 0x10))((long)param_1 + lVar13,(long)param_2 + lVar13,DVar7.unknown);
    (**(code **)(lVar10 + 0x38))((long)param_1 + lVar13,0,1,DVar7.unknown);
  }
  else {
    puVar9 = &DAT_100fc67c8;
    FUN_1000f7830(&DAT_100fc67c8,&DAT_100c4a330);
    _memcpy((void *)((long)param_1 + lVar13),(void *)((long)param_2 + lVar13),
            *(size_t *)(*(long *)(puVar9 + -8) + 0x40));
  }
  lVar13 = (long)*(int *)(param_3 + 0x24);
  lVar8 = (long)param_2 + lVar13;
  (*pcVar11)(lVar8,1,DVar7.unknown);
  if ((int)lVar8 == 0) {
    (**(code **)(lVar10 + 0x10))((long)param_1 + lVar13,(long)param_2 + lVar13,DVar7.unknown);
    (**(code **)(lVar10 + 0x38))((long)param_1 + lVar13,0,1,DVar7.unknown);
  }
  else {
    puVar9 = &DAT_100fc67c8;
    FUN_1000f7830(&DAT_100fc67c8,&DAT_100c4a330);
    _memcpy((void *)((long)param_1 + lVar13),(void *)((long)param_2 + lVar13),
            *(size_t *)(*(long *)(puVar9 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  uVar3 = *puVar2;
  uVar4 = puVar2[1];
  FUN_1001037b4(uVar3,uVar4);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  uVar3 = *puVar2;
  uVar4 = puVar2[1];
  FUN_1001037b4(uVar3,uVar4);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  uVar3 = *puVar2;
  uVar4 = puVar2[1];
  FUN_1001037b4(uVar3,uVar4);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  (**(code **)(lVar10 + 0x10))
            ((long)param_1 + (long)*(int *)(param_3 + 0x34),
             (long)param_2 + (long)*(int *)(param_3 + 0x34),DVar7.unknown);
  iVar6 = *(int *)(param_3 + 0x3c);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  uVar3 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar6);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar6);
  uVar4 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar4;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x40));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x40));
  uVar3 = *param_2;
  uVar5 = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar4);
  FUN_1001037b4(uVar3,uVar5);
  *puVar1 = uVar3;
  puVar1[1] = uVar5;
  return param_1;
}



/* Address: 0x10043e520 | FUN_10043e520 */

undefined8 * FUN_10043e520(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  Date DVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  
  uVar10 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar10);
  param_1[1] = param_2[1];
  uVar10 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar10);
  param_1[3] = param_2[3];
  uVar10 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar10);
  param_1[5] = param_2[5];
  uVar10 = param_1[6];
  param_1[6] = param_2[6];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar10);
  lVar13 = (long)*(int *)(param_3 + 0x20);
  DVar6 = Foundation::Date::typeMetadataAccessor();
  lVar12 = *(long *)(DVar6.unknown + -8);
  pcVar11 = *(code **)(lVar12 + 0x30);
  lVar7 = (long)param_1 + lVar13;
  (*pcVar11)(lVar7,1,DVar6.unknown);
  lVar8 = (long)param_2 + lVar13;
  (*pcVar11)(lVar8,1,DVar6.unknown);
  if ((int)lVar7 == 0) {
    if ((int)lVar8 != 0) {
      (**(code **)(lVar12 + 8))((long)param_1 + lVar13,DVar6.unknown);
      goto LAB_10043e644;
    }
    (**(code **)(lVar12 + 0x18))((long)param_1 + lVar13,(long)param_2 + lVar13,DVar6.unknown);
  }
  else if ((int)lVar8 == 0) {
    (**(code **)(lVar12 + 0x10))((long)param_1 + lVar13,(long)param_2 + lVar13,DVar6.unknown);
    (**(code **)(lVar12 + 0x38))((long)param_1 + lVar13,0,1,DVar6.unknown);
  }
  else {
LAB_10043e644:
    puVar9 = &DAT_100fc67c8;
    FUN_1000f7830(&DAT_100fc67c8,&DAT_100c4a330);
    _memcpy((void *)((long)param_1 + lVar13),(void *)((long)param_2 + lVar13),
            *(size_t *)(*(long *)(puVar9 + -8) + 0x40));
  }
  lVar13 = (long)*(int *)(param_3 + 0x24);
  lVar7 = (long)param_1 + lVar13;
  (*pcVar11)(lVar7,1,DVar6.unknown);
  lVar8 = (long)param_2 + lVar13;
  (*pcVar11)(lVar8,1,DVar6.unknown);
  if ((int)lVar7 == 0) {
    if ((int)lVar8 == 0) {
      (**(code **)(lVar12 + 0x18))((long)param_1 + lVar13,(long)param_2 + lVar13,DVar6.unknown);
      goto LAB_10043e708;
    }
    (**(code **)(lVar12 + 8))((long)param_1 + lVar13,DVar6.unknown);
  }
  else if ((int)lVar8 == 0) {
    (**(code **)(lVar12 + 0x10))((long)param_1 + lVar13,(long)param_2 + lVar13,DVar6.unknown);
    (**(code **)(lVar12 + 0x38))((long)param_1 + lVar13,0,1,DVar6.unknown);
    goto LAB_10043e708;
  }
  puVar9 = &DAT_100fc67c8;
  FUN_1000f7830(&DAT_100fc67c8,&DAT_100c4a330);
  _memcpy((void *)((long)param_1 + lVar13),(void *)((long)param_2 + lVar13),
          *(size_t *)(*(long *)(puVar9 + -8) + 0x40));
LAB_10043e708:
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  uVar10 = *puVar2;
  uVar4 = puVar2[1];
  FUN_1001037b4(uVar10,uVar4);
  uVar3 = *puVar1;
  uVar5 = puVar1[1];
  *puVar1 = uVar10;
  puVar1[1] = uVar4;
  FUN_10003bf2c(uVar3,uVar5);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  uVar10 = *puVar2;
  uVar4 = puVar2[1];
  FUN_1001037b4(uVar10,uVar4);
  uVar3 = *puVar1;
  uVar5 = puVar1[1];
  *puVar1 = uVar10;
  puVar1[1] = uVar4;
  FUN_10003bf2c(uVar3,uVar5);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  uVar10 = *puVar2;
  uVar4 = puVar2[1];
  FUN_1001037b4(uVar10,uVar4);
  uVar3 = *puVar1;
  uVar5 = puVar1[1];
  *puVar1 = uVar10;
  puVar1[1] = uVar4;
  FUN_10003bf2c(uVar3,uVar5);
  (**(code **)(lVar12 + 0x18))
            ((long)param_1 + (long)*(int *)(param_3 + 0x34),
             (long)param_2 + (long)*(int *)(param_3 + 0x34),DVar6.unknown);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  *puVar1 = *puVar2;
  uVar10 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar10);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
  *puVar1 = *puVar2;
  uVar10 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar10);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x40));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x40));
  uVar10 = *param_2;
  uVar4 = param_2[1];
  FUN_1001037b4(uVar10,uVar4);
  uVar3 = *puVar1;
  uVar5 = puVar1[1];
  *puVar1 = uVar10;
  puVar1[1] = uVar4;
  FUN_10003bf2c(uVar3,uVar5);
  return param_1;
}



/* Address: 0x10043e864 | FUN_10043e864 */

undefined8 * FUN_10043e864(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  Date DVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  undefined8 uVar10;
  
  *param_1 = *param_2;
  uVar10 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar10;
  uVar10 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar10;
  uVar10 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar10;
  lVar9 = (long)*(int *)(param_3 + 0x20);
  DVar4 = Foundation::Date::typeMetadataAccessor();
  lVar7 = *(long *)(DVar4.unknown + -8);
  pcVar8 = *(code **)(lVar7 + 0x30);
  lVar5 = (long)param_2 + lVar9;
  (*pcVar8)(lVar5,1,DVar4.unknown);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar7 + 0x20))((long)param_1 + lVar9,(long)param_2 + lVar9,DVar4.unknown);
    (**(code **)(lVar7 + 0x38))((long)param_1 + lVar9,0,1,DVar4.unknown);
  }
  else {
    puVar6 = &DAT_100fc67c8;
    FUN_1000f7830(&DAT_100fc67c8,&DAT_100c4a330);
    _memcpy((void *)((long)param_1 + lVar9),(void *)((long)param_2 + lVar9),
            *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
  lVar9 = (long)*(int *)(param_3 + 0x24);
  lVar5 = (long)param_2 + lVar9;
  (*pcVar8)(lVar5,1,DVar4.unknown);
  if ((int)lVar5 == 0) {
    pcVar8 = *(code **)(lVar7 + 0x20);
    (*pcVar8)((long)param_1 + lVar9,(long)param_2 + lVar9,DVar4.unknown);
    (**(code **)(lVar7 + 0x38))((long)param_1 + lVar9,0,1,DVar4.unknown);
  }
  else {
    puVar6 = &DAT_100fc67c8;
    FUN_1000f7830(&DAT_100fc67c8,&DAT_100c4a330);
    _memcpy((void *)((long)param_1 + lVar9),(void *)((long)param_2 + lVar9),
            *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
    pcVar8 = *(code **)(lVar7 + 0x20);
  }
  iVar1 = *(int *)(param_3 + 0x2c);
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  uVar10 = *puVar2;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar10;
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar1);
  uVar10 = *puVar2;
  puVar3 = (undefined8 *)((long)param_1 + (long)iVar1);
  puVar3[1] = puVar2[1];
  *puVar3 = uVar10;
  iVar1 = *(int *)(param_3 + 0x34);
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  uVar10 = *puVar2;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar10;
  (*pcVar8)((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,DVar4.unknown);
  iVar1 = *(int *)(param_3 + 0x3c);
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  uVar10 = *puVar2;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar10;
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar1);
  uVar10 = *puVar2;
  puVar3 = (undefined8 *)((long)param_1 + (long)iVar1);
  puVar3[1] = puVar2[1];
  *puVar3 = uVar10;
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x40));
  uVar10 = *param_2;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x40));
  puVar2[1] = param_2[1];
  *puVar2 = uVar10;
  return param_1;
}



/* Address: 0x10043ea0c | FUN_10043ea0c */

undefined8 * FUN_10043ea0c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  Date DVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  undefined8 uVar12;
  
  uVar3 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar3);
  uVar3 = param_2[2];
  uVar4 = param_1[2];
  param_1[1] = param_2[1];
  param_1[2] = uVar3;
  _swift_bridgeObjectRelease(uVar4);
  uVar3 = param_2[4];
  uVar4 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar3;
  _swift_bridgeObjectRelease(uVar4);
  uVar3 = param_2[6];
  uVar4 = param_1[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar3;
  _swift_bridgeObjectRelease(uVar4);
  lVar11 = (long)*(int *)(param_3 + 0x20);
  DVar5 = Foundation::Date::typeMetadataAccessor();
  lVar9 = *(long *)(DVar5.unknown + -8);
  pcVar10 = *(code **)(lVar9 + 0x30);
  lVar6 = (long)param_1 + lVar11;
  (*pcVar10)(lVar6,1,DVar5.unknown);
  lVar7 = (long)param_2 + lVar11;
  (*pcVar10)(lVar7,1,DVar5.unknown);
  if ((int)lVar6 == 0) {
    if ((int)lVar7 != 0) {
      (**(code **)(lVar9 + 8))((long)param_1 + lVar11,DVar5.unknown);
      goto LAB_10043eaf8;
    }
    (**(code **)(lVar9 + 0x28))((long)param_1 + lVar11,(long)param_2 + lVar11,DVar5.unknown);
  }
  else if ((int)lVar7 == 0) {
    (**(code **)(lVar9 + 0x20))((long)param_1 + lVar11,(long)param_2 + lVar11,DVar5.unknown);
    (**(code **)(lVar9 + 0x38))((long)param_1 + lVar11,0,1,DVar5.unknown);
  }
  else {
LAB_10043eaf8:
    puVar8 = &DAT_100fc67c8;
    FUN_1000f7830(&DAT_100fc67c8,&DAT_100c4a330);
    _memcpy((void *)((long)param_1 + lVar11),(void *)((long)param_2 + lVar11),
            *(size_t *)(*(long *)(puVar8 + -8) + 0x40));
  }
  lVar11 = (long)*(int *)(param_3 + 0x24);
  lVar6 = (long)param_1 + lVar11;
  (*pcVar10)(lVar6,1,DVar5.unknown);
  lVar7 = (long)param_2 + lVar11;
  (*pcVar10)(lVar7,1,DVar5.unknown);
  if ((int)lVar6 == 0) {
    if ((int)lVar7 == 0) {
      (**(code **)(lVar9 + 0x28))((long)param_1 + lVar11,(long)param_2 + lVar11,DVar5.unknown);
      goto LAB_10043ebbc;
    }
    (**(code **)(lVar9 + 8))((long)param_1 + lVar11,DVar5.unknown);
  }
  else if ((int)lVar7 == 0) {
    (**(code **)(lVar9 + 0x20))((long)param_1 + lVar11,(long)param_2 + lVar11,DVar5.unknown);
    (**(code **)(lVar9 + 0x38))((long)param_1 + lVar11,0,1,DVar5.unknown);
    goto LAB_10043ebbc;
  }
  puVar8 = &DAT_100fc67c8;
  FUN_1000f7830(&DAT_100fc67c8,&DAT_100c4a330);
  _memcpy((void *)((long)param_1 + lVar11),(void *)((long)param_2 + lVar11),
          *(size_t *)(*(long *)(puVar8 + -8) + 0x40));
LAB_10043ebbc:
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  uVar12 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar12;
  FUN_10003bf2c(uVar3,uVar4);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  uVar12 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar12;
  FUN_10003bf2c(uVar3,uVar4);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  uVar12 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar12;
  FUN_10003bf2c(uVar3,uVar4);
  (**(code **)(lVar9 + 0x28))
            ((long)param_1 + (long)*(int *)(param_3 + 0x34),
             (long)param_2 + (long)*(int *)(param_3 + 0x34),DVar5.unknown);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  uVar3 = puVar2[1];
  uVar4 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  _swift_bridgeObjectRelease(uVar4);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
  uVar3 = puVar2[1];
  uVar4 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  _swift_bridgeObjectRelease(uVar4);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x40));
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x40));
  uVar12 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar12;
  FUN_10003bf2c(uVar3,uVar4);
  return param_1;
}



/* Address: 0x10043ecb8 | FUN_10043ecb8 */

void FUN_10043ecb8(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x10043ecc4 | FUN_10043ecc4 */

ulong FUN_10043ecc4(ulong *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  Date DVar2;
  ulong uVar3;
  long lVar4;
  
  if ((int)param_2 == 0x7fffffff) {
    uVar3 = *param_1;
    if (0xfffffffe < uVar3) {
      uVar3 = 0xffffffff;
    }
    return (ulong)((int)uVar3 + 1);
  }
  DVar2.unknown = &DAT_100fc67c8;
  FUN_1000f7830(&DAT_100fc67c8,&DAT_100c4a330);
  lVar4 = *(long *)(DVar2.unknown + -8);
  if ((int)param_2 == *(int *)(lVar4 + 0x54)) {
    iVar1 = *(int *)(param_3 + 0x20);
  }
  else {
    DVar2 = Foundation::Date::typeMetadataAccessor();
    lVar4 = *(long *)(DVar2.unknown + -8);
    iVar1 = *(int *)(param_3 + 0x34);
  }
  uVar3 = (long)param_1 + (long)iVar1;
                    /* WARNING: Could not recover jumptable at 0x00010043ed6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 0x30))(uVar3,param_2,DVar2.unknown);
  return uVar3;
}



/* Address: 0x10043ed70 | FUN_10043ed70 */

void FUN_10043ed70(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x10043ed7c | FUN_10043ed7c */

void FUN_10043ed7c(ulong *param_1,undefined8 param_2,int param_3,long param_4)

{
  int iVar1;
  Date DVar2;
  long lVar3;
  
  if (param_3 == 0x7fffffff) {
    *param_1 = (ulong)((int)param_2 - 1);
    return;
  }
  DVar2.unknown = &DAT_100fc67c8;
  FUN_1000f7830(&DAT_100fc67c8,&DAT_100c4a330);
  lVar3 = *(long *)(DVar2.unknown + -8);
  if (param_3 == *(int *)(lVar3 + 0x54)) {
    iVar1 = *(int *)(param_4 + 0x20);
  }
  else {
    DVar2 = Foundation::Date::typeMetadataAccessor();
    lVar3 = *(long *)(DVar2.unknown + -8);
    iVar1 = *(int *)(param_4 + 0x34);
  }
                    /* WARNING: Could not recover jumptable at 0x00010043ee20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x38))((long)param_1 + (long)iVar1,param_2,param_2,DVar2.unknown);
  return;
}



/* Address: 0x10043ee24 | FUN_10043ee24 */

void FUN_10043ee24(undefined8 param_1)

{
  if (DAT_100fc6d08 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetStructDescriptor_100cb068c);
  return;
}



/* Address: 0x10043ee5c | FUN_10043ee5c */

void FUN_10043ee5c(long param_1,ulong param_2)

{
  long lVar1;
  Date DVar2;
  undefined *local_98;
  undefined *puStack_90;
  undefined *local_88;
  undefined *puStack_80;
  long local_78;
  long lStack_70;
  undefined *local_68;
  undefined *puStack_60;
  undefined *local_58;
  long local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  
  local_98 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40;
  puStack_90 = &DAT_100c4a948;
  local_88 = &DAT_100c4a948;
  puStack_80 = &DAT_100c4a948;
  lVar1 = 0x13f;
  FUN_100433f9c();
  if (param_2 < 0x40) {
    local_78 = *(long *)(lVar1 + -8) + 0x40;
    local_68 = &DAT_100c4a960;
    puStack_60 = &DAT_100c4a960;
    local_58 = &DAT_100c4a960;
    lStack_70 = local_78;
    DVar2 = Foundation::Date::typeMetadataAccessor();
    if (param_2 < 0x40) {
      local_50 = *(long *)(DVar2.unknown + -8) + 0x40;
      puStack_48 = &DAT_100c4a948;
      local_40 = &DAT_100c4a948;
      puStack_38 = &DAT_100c4a960;
      _swift_initStructMetadata(param_1,0x100,0xd,&local_98,param_1 + 0x10);
    }
  }
  return;
}



/* Address: 0x10043ef18 | FUN_10043ef18 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10043ef18(void)

{
  URL UVar1;
  URL UVar2;
  NSString *pNVar3;
  ID IVar4;
  URL UVar5;
  undefined2 *puVar6;
  ulong uVar7;
  ID unaff_x20;
  NSDataReadingOptions contentsOf;
  long unaff_x21;
  long lVar8;
  String SVar9;
  undefined1 auVar10 [16];
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar8 = *(long *)(UVar1.unknown + -8);
  uVar7 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  UVar5.unknown = &stack0xffffffffffffffb0 + -uVar7;
  contentsOf.unknown = UVar5.unknown + -uVar7;
  UVar2.unknown = (undefined *)objc_stub::appStoreReceiptURL(unaff_x20);
  puVar6 = (undefined2 *)0x0;
  if (UVar2.unknown != (undefined *)0x0) {
    Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar2);
    (**(code **)(lVar8 + 0x20))(contentsOf.unknown,UVar5.unknown,UVar1.unknown);
    UVar2.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
    SVar9 = Foundation::URL::get_path(UVar2);
    pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar9.bridgeObject);
    IVar4 = objc_stub::fileExistsAtPath_((ID)UVar2.unknown,pNVar3);
    if ((int)IVar4 != 0) {
      unaff_x20 = 0;
      UVar5.unknown = (undefined *)Foundation::Data::_init(contentsOf);
      if (unaff_x21 == 0) {
        (**(code **)(lVar8 + 8))(contentsOf.unknown,UVar1.unknown);
      }
      else {
        FUN_100431a50();
        _swift_allocError(&DAT_100ed4790,UVar5.unknown,0,0);
        *(undefined2 *)UVar5.unknown = 0;
        _swift_willThrow();
        _swift_errorRelease();
        (**(code **)(lVar8 + 8))(contentsOf.unknown,UVar1.unknown);
        UVar5.unknown = UVar2.unknown;
        unaff_x20 = IVar4;
      }
      goto LAB_10043f0a0;
    }
    (**(code **)(lVar8 + 8))(contentsOf.unknown,UVar1.unknown);
    puVar6 = (undefined2 *)contentsOf.unknown;
    UVar5.unknown = UVar2.unknown;
    unaff_x20 = IVar4;
  }
  FUN_100431a50();
  _swift_allocError(&DAT_100ed4790,puVar6,0,0);
  *puVar6 = 0;
  _swift_willThrow();
LAB_10043f0a0:
  auVar10._8_8_ = unaff_x20;
  auVar10._0_8_ = UVar5.unknown;
  return auVar10;
}



/* Address: 0x10043f0e4 | thunk_FUN_10043f568 */

void thunk_FUN_10043f568(void)

{
  FUN_10043f568();
  return;
}



/* Address: 0x10043f0e8 | FUN_10043f0e8 */

void FUN_10043f0e8(undefined8 param_1,undefined8 param_2)

{
  FUN_100438d28(0);
  _swift_allocObject();
  FUN_1001037b4(param_1,param_2);
  FUN_100438d48(param_1,param_2,0,0);
  return;
}



/* Address: 0x10043f154 | FUN_10043f154 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10043f154(void)

{
  URL UVar1;
  ID IVar2;
  URL UVar3;
  NSString *pNVar4;
  Data DVar5;
  undefined2 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  NSDataReadingOptions contentsOf;
  long unaff_x21;
  long lVar9;
  String SVar10;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar9 = *(long *)(UVar1.unknown + -8);
  uVar8 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  contentsOf.unknown = &stack0xffffffffffffffb0 + -uVar8 + -uVar8;
  IVar2 = objc_stub::mainBundle((ID)&_OBJC_CLASS___NSBundle);
  UVar3.unknown = (undefined *)objc_stub::appStoreReceiptURL(IVar2);
  puVar6 = (undefined2 *)0x0;
  if (UVar3.unknown != (undefined *)0x0) {
    Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar3);
    (**(code **)(lVar9 + 0x20))(contentsOf.unknown,&stack0xffffffffffffffb0 + -uVar8,UVar1.unknown);
    UVar3.unknown = (undefined *)objc_stub::defaultManager(&_OBJC_CLASS___NSFileManager);
    SVar10 = Foundation::URL::get_path(UVar3);
    pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar10.bridgeObject);
    IVar2 = objc_stub::fileExistsAtPath_((ID)UVar3.unknown,pNVar4);
    if ((int)IVar2 != 0) {
      uVar7 = 0;
      DVar5 = Foundation::Data::_init(contentsOf);
      if (unaff_x21 != 0) {
        FUN_100431a50();
        _swift_allocError(&DAT_100ed4790,DVar5.unknown,0,0);
        *(undefined2 *)DVar5.unknown = 0;
        _swift_willThrow();
        _swift_errorRelease();
        (**(code **)(lVar9 + 8))(contentsOf.unknown,UVar1.unknown);
        return;
      }
      (**(code **)(lVar9 + 8))(contentsOf.unknown,UVar1.unknown);
      FUN_100438d28(0);
      _swift_allocObject();
      FUN_100438d48(DVar5.unknown,uVar7,0,0);
      return;
    }
    (**(code **)(lVar9 + 8))(contentsOf.unknown,UVar1.unknown);
    puVar6 = (undefined2 *)contentsOf.unknown;
  }
  FUN_100431a50();
  _swift_allocError(&DAT_100ed4790,puVar6,0,0);
  *puVar6 = 0;
  _swift_willThrow();
  return;
}



/* Address: 0x10043f378 | FUN_10043f378 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

String FUN_10043f378(void)

{
  String SVar1;
  URL UVar2;
  URL UVar3;
  NSString *pNVar4;
  ID IVar5;
  Data DVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  ID unaff_x20;
  NSDataReadingOptions contentsOf;
  long unaff_x21;
  long lVar10;
  String SVar11;
  String SVar12;
  
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar10 = *(long *)(UVar2.unknown + -8);
  uVar9 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  contentsOf.unknown = &stack0xffffffffffffffb0 + -uVar9 + -uVar9;
  SVar1.bridgeObject = contentsOf.unknown;
  SVar1.str = UVar2.unknown;
  SVar12.bridgeObject = contentsOf.unknown;
  SVar12.str = UVar2.unknown;
  UVar3.unknown = (undefined *)objc_stub::appStoreReceiptURL(unaff_x20);
  puVar7 = (undefined2 *)0x0;
  if (UVar3.unknown != (undefined *)0x0) {
    Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar3);
    (**(code **)(lVar10 + 0x20))(contentsOf.unknown,&stack0xffffffffffffffb0 + -uVar9,UVar2.unknown)
    ;
    UVar3.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
    SVar11 = Foundation::URL::get_path(UVar3);
    pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar11.bridgeObject);
    IVar5 = NSFileManager::fileExistsAtPath_((ID)UVar3.unknown,pNVar4);
    if ((int)IVar5 != 0) {
      uVar8 = 0;
      DVar6 = Foundation::Data::_init(contentsOf);
      if (unaff_x21 != 0) {
        FUN_100431a50();
        _swift_allocError(&DAT_100ed4790,DVar6.unknown,0,0);
        *(undefined2 *)DVar6.unknown = 0;
        _swift_willThrow();
        _swift_errorRelease();
        (**(code **)(lVar10 + 8))(contentsOf.unknown,UVar2.unknown);
        return SVar12;
      }
      (**(code **)(lVar10 + 8))(contentsOf.unknown,UVar2.unknown);
      SVar12 = Foundation::Data::base64EncodedString((NSDataBase64EncodingOptions)0x0,DVar6);
      FUN_10003bf2c(DVar6.unknown,uVar8);
      return SVar12;
    }
    (**(code **)(lVar10 + 8))(contentsOf.unknown,UVar2.unknown);
    puVar7 = (undefined2 *)contentsOf.unknown;
  }
  FUN_100431a50();
  _swift_allocError(&DAT_100ed4790,puVar7,0,0);
  *puVar7 = 0;
  _swift_willThrow();
  return SVar1;
}



/* Address: 0x10043f568 | FUN_10043f568 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

String FUN_10043f568(void)

{
  long lVar1;
  _CocoaArrayWrapper _Var2;
  code *pcVar3;
  bool bVar4;
  NSString *pNVar5;
  NSString *pNVar6;
  ID IVar7;
  undefined *puVar8;
  ulong self;
  undefined8 uVar9;
  void *pvVar10;
  long in_x3;
  ulong uVar11;
  long lVar12;
  long lVar13;
  String SVar14;
  undefined8 local_80;
  undefined8 local_78;
  String local_70;
  
  if (DAT_100fc6608 != -1) {
    _swift_once(&DAT_100fc6608,FUN_10042d9fc);
  }
  IVar7 = DAT_101057a90;
  pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  if (in_x3 == 0) {
    pNVar6 = (NSString *)0x0;
  }
  else {
    pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  }
  IVar7 = objc_stub::pathForResource_ofType_(IVar7,pNVar5,pNVar6);
  if (IVar7 == 0) {
    IVar7 = objc_stub::mainBundle((ID)&_OBJC_CLASS___NSBundle);
    pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    if (in_x3 == 0) {
      pNVar6 = (NSString *)0x0;
    }
    else {
      pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    }
    IVar7 = objc_stub::pathForResource_ofType_(IVar7,pNVar5,pNVar6);
    if (IVar7 == 0) {
      puVar8 = (undefined *)objc_stub::FUN_100bfda40((ID)&_OBJC_CLASS___NSBundle);
      FUN_10043f8f0(0);
      (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
      if ((ulong)puVar8 >> 0x3e == 0) {
        lVar13 = *(long *)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
      }
      else {
        _Var2.unknown = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar8) {
          _Var2.unknown = puVar8;
        }
        lVar13 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
      }
      if (lVar13 != 0) {
        lVar12 = 4;
        do {
          uVar11 = lVar12 - 4;
          if (((ulong)puVar8 & 0xc000000000000001) == 0) {
            if (*(ulong *)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10043f8a0);
              (*pcVar3)();
            }
            self = *(ulong *)(puVar8 + lVar12 * 8);
          }
          else {
            self = uVar11;
            FUN_1004309a8(uVar11,puVar8);
          }
          lVar1 = lVar12 + -3;
          if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10043f884);
            (*pcVar3)();
          }
          IVar7 = objc_stub::bundleIdentifier(self);
          if (IVar7 != 0) {
            local_70 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC
                                 ();
            pvVar10 = local_70.bridgeObject;
            uVar9 = 0;
            local_80 = 0x527070416e495054;
            local_78 = 0xee00747069656365;
            FUN_10043f934(0);
            bVar4 = (extension_Foundation)::Swift::StringProtocol::_contains
                              (&local_80,PTR___type_metadata_for_Swift_String_100eac208,
                               PTR___type_metadata_for_Swift_String_100eac208,uVar9,uVar9);
            _swift_bridgeObjectRelease(pvVar10);
            if (bVar4) {
              pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
              if (in_x3 == 0) {
                pNVar6 = (NSString *)0x0;
              }
              else {
                pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
              }
              IVar7 = objc_stub::pathForResource_ofType_(self,pNVar5,pNVar6);
              if (IVar7 != 0) {
                SVar14 = (extension_Foundation)::Swift::String::
                         __unconditionallyBridgeFromObjectiveC();
                _swift_bridgeObjectRelease(puVar8);
                return SVar14;
              }
            }
          }
          lVar12 = lVar12 + 1;
        } while (lVar1 != lVar13);
      }
      _swift_bridgeObjectRelease(puVar8);
      SVar14 = (String)ZEXT816(0);
    }
    else {
      SVar14 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    }
  }
  else {
    SVar14 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  return SVar14;
}



/* Address: 0x10043f8f0 | FUN_10043f8f0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_10043f8f0(void)

{
  undefined *puVar1;
  
  if (DAT_100fc67a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___NSBundle;
  _swift_getObjCClassMetadata();
  DAT_100fc67a0 = puVar1;
  return;
}



/* Address: 0x10043f934 | FUN_10043f934 */

void FUN_10043f934(void)

{
  undefined *puVar1;
  
  if (DAT_100fc6d70 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift__Swift__String_>Swift__StringProtocol_100eac258;
  _swift_getWitnessTable
            (PTR_Swift__Swift__String_>Swift__StringProtocol_100eac258,
             PTR___type_metadata_for_Swift_String_100eac208);
  DAT_100fc6d70 = puVar1;
  return;
}



/* Address: 0x10043f974 | FUN_10043f974 */

/* WARNING: Removing unreachable block (ram,0x00010043f990) */

undefined8 FUN_10043f974(void)

{
  FUN_10043fc4c();
  return 1;
}



/* Address: 0x10043f9b0 | FUN_10043f9b0 */

/* WARNING: Type propagation algorithm not settling */

void FUN_10043f9b0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  long lVar7;
  undefined *puVar8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_80;
  undefined8 auStack_78 [3];
  
  puVar4 = &DAT_100fc6660;
  puVar8 = &DAT_100c49fd0;
  FUN_1000f7830(&DAT_100fc6660,&DAT_100c49fd0);
  lVar10 = (long)&uStack_80 - (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  puVar5 = (undefined2 *)0x0;
  FUN_10043ee24();
  lVar12 = *(long *)(puVar5 + -4);
  lVar11 = lVar10 - (*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = puVar5;
  FUN_10043fe9c();
  lVar7 = _TtC14TPInAppReceipt13_InAppReceipt::payload;
  lVar9 = *(long *)(unaff_x20 + 0x10);
  _swift_beginAccess(lVar9 + _TtC14TPInAppReceipt13_InAppReceipt::payload,auStack_78,0,0);
  FUN_1004402a4(lVar9 + lVar7,lVar10);
  lVar7 = lVar10;
  (**(code **)(lVar12 + 0x30))(lVar10,1,puVar5);
  if ((int)lVar7 != 1) {
    FUN_1004402f4(lVar10,lVar11);
    uVar1 = *(undefined8 *)(lVar11 + *(int *)(puVar5 + 0x18));
    uVar2 = ((undefined8 *)(lVar11 + *(int *)(puVar5 + 0x18)))[1];
    FUN_1001037b4(uVar1,uVar2);
    FUN_100440338(lVar11);
    puVar5 = puVar6;
    FUN_10031b830(puVar6,puVar8,uVar1,uVar2);
    FUN_10003bf2c(uVar1,uVar2);
    FUN_10003bf2c(puVar6,puVar8);
    if (((ulong)puVar5 & 1) == 0) {
      FUN_100431a50();
      _swift_allocError(&DAT_100ed4790,puVar6,0,0);
      *puVar6 = 0x10d;
      _swift_willThrow();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10043fb3c);
  (*pcVar3)();
}



/* Address: 0x10043fb3c | FUN_10043fb3c */

void FUN_10043fb3c(void)

{
  long unaff_x21;
  
  FUN_100440374();
  if (unaff_x21 != 0) {
    return;
  }
  FUN_100440554();
  return;
}



/* Address: 0x10043fb60 | FUN_10043fb60 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10043fb60(undefined2 *param_1)

{
  ID IVar1;
  NSString *pNVar2;
  long unaff_x20;
  long unaff_x21;
  long lVar3;
  
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if (lVar3 != 0) {
    _swift_bridgeObjectRetain(lVar3);
    IVar1 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
    pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(lVar3);
    IVar1 = NSFileManager::fileExistsAtPath_(IVar1,pNVar2);
    param_1 = (undefined2 *)0x0;
    if ((int)IVar1 != 0) {
      FUN_100440720();
      if (unaff_x21 != 0) {
        return;
      }
      FUN_100440d58();
      return;
    }
  }
  FUN_100431a50();
  _swift_allocError(&DAT_100ed4790,param_1,0,0);
  *param_1 = 0x100;
  _swift_willThrow();
  return;
}



/* Address: 0x10043fc4c | FUN_10043fc4c */

void FUN_10043fc4c(void)

{
  FUN_10043fc60();
  return;
}



/* Address: 0x10043fc60 | FUN_10043fc60 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Type propagation algorithm not settling */

void FUN_10043fc60(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  ID IVar6;
  NSString *pNVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined1 uVar10;
  long unaff_x20;
  long unaff_x21;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uStack_80;
  undefined8 auStack_78 [3];
  
  puVar4 = &DAT_100fc6660;
  puVar9 = &DAT_100c49fd0;
  FUN_1000f7830(&DAT_100fc6660,&DAT_100c49fd0);
  lVar12 = (long)&uStack_80 - (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  puVar5 = (undefined1 *)0x0;
  FUN_10043ee24();
  lVar14 = *(long *)(puVar5 + -8);
  lVar13 = lVar12 - (*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = puVar5;
  FUN_10043fe9c();
  lVar11 = _TtC14TPInAppReceipt13_InAppReceipt::payload;
  lVar15 = *(long *)(unaff_x20 + 0x10);
  _swift_beginAccess(lVar15 + _TtC14TPInAppReceipt13_InAppReceipt::payload,auStack_78,0,0);
  FUN_1004402a4(lVar15 + lVar11,lVar12);
  lVar11 = lVar12;
  (**(code **)(lVar14 + 0x30))(lVar12,1,puVar5);
  if ((int)lVar11 == 1) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10043fe9c);
    (*pcVar3)();
  }
  FUN_1004402f4(lVar12,lVar13);
  uVar1 = *(undefined8 *)(lVar13 + *(int *)(puVar5 + 0x30));
  uVar2 = ((undefined8 *)(lVar13 + *(int *)(puVar5 + 0x30)))[1];
  FUN_1001037b4(uVar1,uVar2);
  FUN_100440338(lVar13);
  puVar5 = puVar8;
  FUN_10031b830(puVar8,puVar9,uVar1,uVar2);
  FUN_10003bf2c(uVar1,uVar2);
  FUN_10003bf2c(puVar8,puVar9);
  if (((ulong)puVar5 & 1) == 0) {
    uVar10 = 0xd;
  }
  else {
    FUN_100440374();
    if (unaff_x21 != 0) {
      return;
    }
    FUN_100440554();
    lVar11 = *(long *)(unaff_x20 + 0x20);
    if (lVar11 != 0) {
      _swift_bridgeObjectRetain(lVar11);
      IVar6 = objc_stub::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
      pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(lVar11);
      IVar6 = objc_stub::fileExistsAtPath_(IVar6,pNVar7);
      puVar8 = (undefined1 *)0x0;
      if ((int)IVar6 != 0) {
        FUN_100440720();
        FUN_100440d58();
        return;
      }
    }
    uVar10 = 0;
  }
  FUN_100431a50();
  _swift_allocError(&DAT_100ed4790,puVar8,0,0);
  *puVar8 = uVar10;
  puVar8[1] = 1;
  _swift_willThrow();
  return;
}



/* Address: 0x10043fe9c | FUN_10043fe9c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010044004c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined1  [16] FUN_10043fe9c(void)

{
  long *plVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  _ArrayBuffer<undefined> _Var8;
  _ArrayBuffer<undefined> _Var9;
  undefined *puVar10;
  CC_SHA1_CTX *c;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  long unaff_x20;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  uchar *md;
  long lVar21;
  code *pcVar22;
  undefined1 auVar23 [16];
  undefined *local_110;
  ulong uStack_108;
  CC_LONG local_100;
  CC_LONG CStack_fc;
  CC_LONG CStack_f8;
  CC_LONG CStack_f4;
  CC_LONG CStack_f0;
  CC_LONG CStack_ec;
  CC_LONG CStack_e8;
  CC_LONG CStack_e4;
  CC_LONG local_e0;
  CC_LONG CStack_dc;
  CC_LONG CStack_d8;
  CC_LONG CStack_d4;
  CC_LONG CStack_d0;
  CC_LONG CStack_cc;
  CC_LONG CStack_c8;
  CC_LONG CStack_c4;
  CC_LONG local_c0;
  CC_LONG CStack_bc;
  CC_LONG CStack_b8;
  CC_LONG CStack_b4;
  CC_LONG CStack_b0;
  CC_LONG CStack_ac;
  CC_LONG CStack_a8;
  CC_LONG CStack_a4;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  puVar5 = &DAT_100fc6660;
  puVar10 = &DAT_100c49fd0;
  FUN_1000f7830();
  uVar15 = *(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar18 = (long)&local_110 - uVar15;
  lVar16 = lVar18 - uVar15;
  lVar6 = 0;
  FUN_10043ee24();
  lVar17 = *(long *)(lVar6 + -8);
  uVar15 = *(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar19 = lVar16 - uVar15;
  lVar20 = lVar19 - uVar15;
  lVar21 = lVar6;
  FUN_1004414ac();
  lVar7 = _TtC14TPInAppReceipt13_InAppReceipt::payload;
  uStack_108 = 0;
  if ((ulong)puVar10 >> 0x3c < 0xf) {
    uStack_108 = lVar21;
  }
  local_110 = (undefined *)0xc000000000000000;
  if ((ulong)puVar10 >> 0x3c < 0xf) {
    local_110 = puVar10;
  }
  lVar21 = *(long *)(unaff_x20 + 0x10);
  _swift_beginAccess(lVar21 + _TtC14TPInAppReceipt13_InAppReceipt::payload,&stack0xffffffffffffff78,
                     0,0);
  FUN_1004402a4(lVar21 + lVar7,lVar16);
  pcVar22 = *(code **)(lVar17 + 0x30);
  lVar7 = lVar16;
  (*pcVar22)(lVar16,1,lVar6);
  if ((int)lVar7 == 1) {
                    /* WARNING: Does not return */
    pcVar22 = (code *)SoftwareBreakpoint(1,0x10044029c);
    (*pcVar22)();
  }
  FUN_1004402f4(lVar16,lVar20);
  plVar1 = (long *)(lVar20 + *(int *)(lVar6 + 0x2c));
  lVar7 = *plVar1;
  uVar15 = plVar1[1];
  FUN_1001037b4(lVar7,uVar15);
  FUN_100440338(lVar20);
  lVar21 = _TtC14TPInAppReceipt13_InAppReceipt::payload;
  lVar16 = *(long *)(unaff_x20 + 0x10);
  _swift_beginAccess(lVar16 + _TtC14TPInAppReceipt13_InAppReceipt::payload,&stack0xffffffffffffff60,
                     0,0);
  FUN_1004402a4(lVar16 + lVar21,lVar18);
  lVar21 = lVar18;
  (*pcVar22)(lVar18,1,lVar6);
  if ((int)lVar21 == 1) {
                    /* WARNING: Does not return */
    pcVar22 = (code *)SoftwareBreakpoint(1,0x1004402a0);
    (*pcVar22)();
  }
  FUN_1004402f4(lVar18,lVar19);
  plVar1 = (long *)(lVar19 + *(int *)(lVar6 + 0x28));
  lVar6 = *plVar1;
  uVar2 = plVar1[1];
  FUN_1001037b4(lVar6,uVar2);
  FUN_100440338(lVar19);
  _Var8 = Swift::Array<undefined>::_allocateBufferUninitialized
                    (lVar21,PTR___type_metadata_for_Swift_UInt8_100eadcd0);
  *(undefined8 *)(_Var8.unknown + 0x10) = 0x14;
  md = _Var8.unknown + 0x20;
  md[0] = '\0';
  md[1] = '\0';
  md[2] = '\0';
  md[3] = '\0';
  md[4] = '\0';
  md[5] = '\0';
  md[6] = '\0';
  md[7] = '\0';
  *(undefined8 *)(_Var8.unknown + 0x28) = 0;
  *(undefined4 *)(_Var8.unknown + 0x30) = 0;
  CStack_b8 = 0;
  CStack_b4 = 0;
  local_c0 = 0;
  CStack_bc = 0;
  CStack_a8 = 0;
  CStack_a4 = 0;
  CStack_b0 = 0;
  CStack_ac = 0;
  CStack_d8 = 0;
  CStack_d4 = 0;
  local_e0 = 0;
  CStack_dc = 0;
  CStack_c8 = 0;
  CStack_c4 = 0;
  CStack_d0 = 0;
  CStack_cc = 0;
  CStack_f8 = 0;
  CStack_f4 = 0;
  local_100 = 0;
  CStack_fc = 0;
  CStack_e8 = 0;
  CStack_e4 = 0;
  CStack_f0 = 0;
  CStack_ec = 0;
  _CC_SHA1_Init((CC_SHA1_CTX *)&stack0xffffffffffffff00);
  uVar4 = uStack_108;
  puVar5 = local_110;
  uVar12 = uStack_108;
  FUN_10042e7cc(uStack_108,local_110);
  uVar3 = (uint)((ulong)puVar5 >> 0x20);
  uVar13 = uVar3 >> 0x1e;
  if (uVar13 < 2) {
    if (uVar3 >> 0x1e == 0) {
      uVar11 = (ulong)puVar5 >> 0x30 & 0xff;
    }
    else {
      iVar14 = (int)(uVar4 >> 0x20);
      if (SBORROW4(iVar14,(int)uVar4)) {
                    /* WARNING: Does not return */
        pcVar22 = (code *)SoftwareBreakpoint(1,0x100440290);
        (*pcVar22)();
      }
      uVar11 = (ulong)(iVar14 - (int)uVar4);
LAB_1004400d8:
      if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
        pcVar22 = (code *)SoftwareBreakpoint(1,0x100440280);
        (*pcVar22)();
      }
      if (uVar11 >> 0x20 != 0) {
                    /* WARNING: Does not return */
        pcVar22 = (code *)SoftwareBreakpoint(1,0x100440284);
        (*pcVar22)();
      }
    }
  }
  else {
    uVar11 = 0;
    if (uVar13 == 2) {
      uVar11 = *(long *)(uVar4 + 0x18) - *(long *)(uVar4 + 0x10);
      if (SBORROW8(*(long *)(uVar4 + 0x18),*(long *)(uVar4 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar22 = (code *)SoftwareBreakpoint(1,0x1004400c8);
        (*pcVar22)();
      }
      goto LAB_1004400d8;
    }
  }
  _CC_SHA1_Update((CC_SHA1_CTX *)&stack0xffffffffffffff00,(void *)(uVar12 + 0x20),(CC_LONG)uVar11);
  _swift_bridgeObjectRelease(uVar12);
  lVar21 = lVar7;
  FUN_10042e7cc(lVar7,uVar15);
  uVar3 = (uint)(uVar15 >> 0x20);
  uVar13 = uVar3 >> 0x1e;
  if (uVar13 < 2) {
    if (uVar3 >> 0x1e == 0) {
      uVar12 = uVar15 >> 0x30 & 0xff;
    }
    else {
      iVar14 = (int)((ulong)lVar7 >> 0x20);
      if (SBORROW4(iVar14,(int)lVar7)) {
                    /* WARNING: Does not return */
        pcVar22 = (code *)SoftwareBreakpoint(1,0x100440294);
        (*pcVar22)();
      }
      uVar12 = (ulong)(iVar14 - (int)lVar7);
LAB_100440148:
      if ((long)uVar12 < 0) {
                    /* WARNING: Does not return */
        pcVar22 = (code *)SoftwareBreakpoint(1,0x100440288);
        (*pcVar22)();
      }
      if (uVar12 >> 0x20 != 0) {
                    /* WARNING: Does not return */
        pcVar22 = (code *)SoftwareBreakpoint(1,0x100440158);
        (*pcVar22)();
      }
    }
  }
  else {
    if (uVar13 == 2) {
      uVar12 = *(long *)(lVar7 + 0x18) - *(long *)(lVar7 + 0x10);
      if (SBORROW8(*(long *)(lVar7 + 0x18),*(long *)(lVar7 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar22 = (code *)SoftwareBreakpoint(1,0x100440138);
        (*pcVar22)();
      }
      goto LAB_100440148;
    }
    uVar12 = 0;
  }
  _CC_SHA1_Update((CC_SHA1_CTX *)&stack0xffffffffffffff00,(void *)(lVar21 + 0x20),(CC_LONG)uVar12);
  _swift_bridgeObjectRelease(lVar21);
  lVar21 = lVar6;
  FUN_10042e7cc(lVar6,uVar2);
  uVar3 = (uint)(uVar2 >> 0x20);
  uVar13 = uVar3 >> 0x1e;
  if (uVar13 < 2) {
    if (uVar3 >> 0x1e == 0) {
      uVar12 = uVar2 >> 0x30 & 0xff;
      goto LAB_1004401d4;
    }
    iVar14 = (int)((ulong)lVar6 >> 0x20);
    if (SBORROW4(iVar14,(int)lVar6)) {
                    /* WARNING: Does not return */
      pcVar22 = (code *)SoftwareBreakpoint(1,0x100440298);
      (*pcVar22)();
    }
    uVar12 = (ulong)(iVar14 - (int)lVar6);
  }
  else {
    if (uVar13 != 2) {
      uVar12 = 0;
      goto LAB_1004401d4;
    }
    uVar12 = *(long *)(lVar6 + 0x18) - *(long *)(lVar6 + 0x10);
    if (SBORROW8(*(long *)(lVar6 + 0x18),*(long *)(lVar6 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar22 = (code *)SoftwareBreakpoint(1,0x1004401b0);
      (*pcVar22)();
    }
  }
  if ((long)uVar12 < 0) {
                    /* WARNING: Does not return */
    pcVar22 = (code *)SoftwareBreakpoint(1,0x10044028c);
    (*pcVar22)();
  }
  if (uVar12 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar22 = (code *)SoftwareBreakpoint(1,0x1004401d0);
    (*pcVar22)();
  }
LAB_1004401d4:
  _CC_SHA1_Update((CC_SHA1_CTX *)&stack0xffffffffffffff00,(void *)(lVar21 + 0x20),(CC_LONG)uVar12);
  _swift_bridgeObjectRelease(lVar21);
  c = (CC_SHA1_CTX *)&stack0xffffffffffffff00;
  _CC_SHA1_Final(md,c);
  _Var9 = _Var8;
  _swift_bridgeObjectRetain(_Var8.unknown);
  FUN_100441a50();
  _swift_bridgeObjectRelease(_Var8.unknown);
  FUN_10003bf2c(lVar6,uVar2);
  FUN_10003bf2c(lVar7,uVar15);
  FUN_10003bf2c(uVar4,puVar5);
  _swift_bridgeObjectRelease(_Var8.unknown);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
    auVar23._8_8_ = c;
    auVar23._0_8_ = _Var9.unknown;
    return auVar23;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1004402a4 | FUN_1004402a4 */

undefined8 FUN_1004402a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fc6660;
  FUN_1000f7830(&DAT_100fc6660,&DAT_100c49fd0);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1004402f4 | FUN_1004402f4 */

undefined8 FUN_1004402f4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10043ee24();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x100440338 | FUN_100440338 */

undefined8 FUN_100440338(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10043ee24();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Address: 0x100440374 | FUN_100440374 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100440374(void)

{
  char *pcVar1;
  String SVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  undefined *puVar6;
  long lVar7;
  ID IVar8;
  undefined2 *puVar9;
  undefined1 *puVar10;
  _StringGuts _Var11;
  long unaff_x20;
  long lVar12;
  long lVar13;
  undefined1 *puVar14;
  long lVar15;
  String SVar16;
  undefined1 auStack_80 [8];
  String SStack_78;
  
  puVar6 = &DAT_100fc6660;
  FUN_1000f7830(&DAT_100fc6660,&DAT_100c49fd0);
  puVar14 = auStack_80 + -(*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  FUN_10043ee24();
  lVar15 = *(long *)(lVar7 + -8);
  lVar13 = (long)puVar14 - (*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  IVar8 = objc_stub::mainBundle((ID)&_OBJC_CLASS___NSBundle);
  IVar8 = objc_stub::bundleIdentifier(IVar8);
  puVar9 = (undefined2 *)0x0;
  if (IVar8 != 0) {
    SVar16 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    lVar3 = _TtC14TPInAppReceipt13_InAppReceipt::payload;
    _Var11.unknown = SVar16.bridgeObject;
    lVar12 = *(long *)(unaff_x20 + 0x10);
    _swift_beginAccess(lVar12 + _TtC14TPInAppReceipt13_InAppReceipt::payload,&SStack_78,0,0);
    FUN_1004402a4(lVar12 + lVar3,puVar14);
    puVar10 = puVar14;
    (**(code **)(lVar15 + 0x30))(puVar14,1,lVar7);
    if ((int)puVar10 == 1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100440554);
      (*pcVar4)();
    }
    FUN_1004402f4(puVar14,lVar13);
    pcVar1 = ((String *)(lVar13 + 8))->str;
    puVar9 = *(undefined2 **)(lVar13 + 0x10);
    SVar2 = *(String *)(lVar13 + 8);
    _swift_bridgeObjectRetain(puVar9);
    FUN_100440338(lVar13);
    if (SVar16 == SVar2) {
      _swift_bridgeObjectRelease(_Var11.unknown);
      _swift_bridgeObjectRelease(puVar9);
      return;
    }
    bVar5 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)SVar16.str,_Var11,(_StringComparisonResult)(__int8)pcVar1);
    _swift_bridgeObjectRelease(_Var11.unknown);
    _swift_bridgeObjectRelease();
    if (bVar5) {
      return;
    }
  }
  FUN_100431a50();
  _swift_allocError(&DAT_100ed4790,puVar9,0,0);
  *puVar9 = 0x10e;
  _swift_willThrow();
  return;
}



/* Address: 0x100440554 | FUN_100440554 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100440554(void)

{
  _StringGuts _Var1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined2 *puVar8;
  _StringGuts _Var9;
  undefined2 *extraout_x1;
  long unaff_x20;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [16];
  undefined8 uStack_58;
  
  puVar7 = &DAT_100fc6660;
  FUN_1000f7830(&DAT_100fc6660,&DAT_100c49fd0);
  puVar11 = auStack_70 + -(*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  FUN_10043ee24();
  lVar2 = _TtC14TPInAppReceipt13_InAppReceipt::payload;
  lVar13 = *(long *)(lVar5 + -8);
  lVar12 = (long)puVar11 - (*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = *(long *)(unaff_x20 + 0x10);
  _swift_beginAccess(lVar10 + _TtC14TPInAppReceipt13_InAppReceipt::payload,auStack_68,0,0);
  FUN_1004402a4(lVar10 + lVar2,puVar11);
  puVar6 = puVar11;
  (**(code **)(lVar13 + 0x30))(puVar11,1,lVar5);
  if ((int)puVar6 == 1) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100440720);
    (*pcVar3)();
  }
  FUN_1004402f4(puVar11,lVar12);
  _Var1.unknown = *(undefined **)(lVar12 + 0x18);
  _Var9.unknown = *(undefined **)(lVar12 + 0x20);
  _swift_bridgeObjectRetain(_Var9.unknown);
  FUN_100440338(lVar12);
  puVar7 = (undefined *)objc_stub::mainBundle((ID)&_OBJC_CLASS___NSBundle);
  puVar8 = extraout_x1;
  FUN_10042e668();
  if (puVar8 == (undefined2 *)0x0) {
    _swift_bridgeObjectRelease();
  }
  else {
    if (_Var1.unknown == puVar7 && puVar8 == (undefined2 *)_Var9.unknown) {
      _swift_bridgeObjectRelease(_Var9.unknown);
      _swift_bridgeObjectRelease(puVar8);
      return;
    }
    bVar4 = Swift::_stringCompareWithSmolCheck(_Var1,_Var9,(_StringComparisonResult)(__int8)puVar7);
    _swift_bridgeObjectRelease(_Var9.unknown);
    _swift_bridgeObjectRelease();
    _Var9.unknown = (undefined *)puVar8;
    if (bVar4) {
      return;
    }
  }
  FUN_100431a50();
  _swift_allocError(&DAT_100ed4790,_Var9.unknown,0,0);
  *(undefined2 *)_Var9.unknown = 0x10f;
  _swift_willThrow();
  return;
}



/* Address: 0x100440720 | FUN_100440720 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100440720(void)

{
  Data DVar1;
  Data DVar2;
  Data DVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined2 *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  NSData *pNVar12;
  NSDictionary *pNVar13;
  undefined2 *puVar14;
  char *pcVar15;
  NSData *pNVar16;
  NSData *pNVar17;
  long *plVar18;
  long *plVar19;
  char *pcVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  NSError *pNVar25;
  long unaff_x20;
  long lVar26;
  undefined8 uVar27;
  String SVar28;
  String SVar29;
  String separator;
  undefined8 uStack_190;
  undefined1 auStack_148 [24];
  NSError *local_130;
  long local_128 [23];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  puVar7 = &DAT_100fc6660;
  FUN_1000f7830(&DAT_100fc6660,&DAT_100c49fd0);
  lVar26 = (long)&uStack_190 -
           (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = (undefined2 *)0x0;
  FUN_10043ee24();
  lVar24 = *(long *)(puVar8 + -4);
  lVar23 = lVar26 - (*(long *)(lVar24 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar22 = *(long *)(unaff_x20 + 0x10);
  lVar21 = *(long *)(lVar22 + 0x50);
  if (*(long *)(lVar21 + 0x10) == 0) {
    FUN_100431a50();
    _swift_allocError(&DAT_100ed4790,puVar8,0,0);
    *puVar8 = 0x104;
    _swift_willThrow();
    goto LAB_100440cc8;
  }
  DVar1.unknown = *(undefined **)(lVar22 + 0x90);
  uVar4 = *(undefined8 *)(lVar22 + 0x98);
  DVar2.unknown = *(undefined **)(lVar21 + 0x70);
  uVar5 = *(undefined8 *)(lVar21 + 0x78);
  puVar7 = &DAT_100fc6d78;
  FUN_1000f7830(&DAT_100fc6d78,&DAT_100c4a978);
  _swift_initStackObject();
  *(undefined8 *)(puVar7 + 0x18) = 6;
  *(undefined8 *)(puVar7 + 0x10) = 3;
  SVar28 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  *(String *)(puVar7 + 0x20) = SVar28;
  uVar27 = *(undefined8 *)PTR__kSecAttrKeyClassPublic_100eaa498;
  uVar9 = 0;
  FUN_10042e514();
  *(undefined8 *)(puVar7 + 0x48) = uVar9;
  *(undefined8 *)(puVar7 + 0x30) = uVar27;
  SVar28 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  *(String *)(puVar7 + 0x50) = SVar28;
  uVar27 = *(undefined8 *)PTR__kSecAttrKeyTypeRSA_100eaa4b0;
  *(undefined8 *)(puVar7 + 0x78) = uVar9;
  *(undefined8 *)(puVar7 + 0x60) = uVar27;
  SVar28 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  *(String *)(puVar7 + 0x80) = SVar28;
  *(undefined **)(puVar7 + 0xa8) = PTR___type_metadata_for_Swift_Int_100eac6f8;
  *(undefined8 *)(puVar7 + 0x90) = 0x800;
  FUN_1001037b4(DVar1.unknown,uVar4);
  FUN_1001037b4(DVar2.unknown,uVar5);
  puVar10 = puVar7;
  FUN_100431bdc(puVar7);
  _swift_setDeallocating(puVar7);
  puVar11 = &DAT_100fc6798;
  FUN_1000f7830(&DAT_100fc6798,&DAT_100c4a030);
  _swift_arrayDestroy((String *)(puVar7 + 0x20),3,puVar11);
  pNVar12 = Foundation::Data::_bridgeToObjectiveC(DVar2);
  pNVar17 = (NSData *)
            PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218;
  pNVar13 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(puVar10);
  _SecKeyCreateWithData(pNVar12,pNVar13,0);
  puVar14 = (undefined2 *)0x0;
  if (pNVar12 == (NSData *)0x0) {
    FUN_100431a50();
    _swift_allocError(&DAT_100ed4790,puVar14,0,0);
    *puVar14 = 0x106;
    _swift_willThrow();
    FUN_10003bf2c(DVar2.unknown,uVar5);
    FUN_10003bf2c(DVar1.unknown,uVar4);
    goto LAB_100440cc8;
  }
  local_128[0] = 0;
  lVar22 = *(long *)(unaff_x20 + 0x10);
  lVar21 = *(long *)(lVar22 + 0x28);
  if (*(long *)(lVar21 + 0x10) == 0) {
LAB_1004409d4:
    pNVar25 = (NSError *)0x0;
  }
  else {
    uVar9 = *(undefined8 *)(lVar21 + 0x20);
    uVar27 = *(undefined8 *)(lVar21 + 0x28);
    _swift_retain(lVar22);
    _swift_bridgeObjectRetain(uVar27);
    FUN_1004418d0(uVar9,uVar27);
    if (((uint)uVar9 & 0xff) == 10) {
      _swift_release(lVar22);
      goto LAB_1004409d4;
    }
    FUN_10044cf20();
    _swift_release(lVar22);
    lVar21 = _TtC14TPInAppReceipt13_InAppReceipt::payload;
    lVar22 = *(long *)(unaff_x20 + 0x10);
    _swift_beginAccess(lVar22 + _TtC14TPInAppReceipt13_InAppReceipt::payload,auStack_148,0,0);
    FUN_1004402a4(lVar22 + lVar21,lVar26);
    lVar21 = lVar26;
    (**(code **)(lVar24 + 0x30))(lVar26,1,puVar8);
    if ((int)lVar21 == 1) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100440d58);
      (*pcVar6)();
    }
    FUN_1004402f4(lVar26,lVar23);
    DVar3.unknown = *(undefined **)(lVar23 + *(int *)(puVar8 + 0x20));
    uVar27 = ((undefined8 *)(lVar23 + *(int *)(puVar8 + 0x20)))[1];
    FUN_1001037b4(DVar3.unknown,uVar27);
    FUN_100440338(lVar23);
    pNVar16 = Foundation::Data::_bridgeToObjectiveC(DVar3);
    FUN_10003bf2c(DVar3.unknown,uVar27);
    pNVar17 = Foundation::Data::_bridgeToObjectiveC(DVar1);
    _SecKeyVerifySignature(pNVar12,uVar9,pNVar16,pNVar17,local_128);
    lVar21 = local_128[0];
    if ((int)pNVar12 != 0) {
      FUN_10003bf2c(DVar2.unknown,uVar5);
      FUN_10003bf2c(DVar1.unknown,uVar4);
      goto LAB_100440cc8;
    }
    if (local_128[0] == 0) goto LAB_1004409d4;
    plVar18 = (long *)0x0;
    FUN_10042e500();
    plVar19 = plVar18;
    FUN_100441934();
    pNVar17 = (NSData *)0x0;
    _swift_allocError(plVar18,plVar19,0);
    *plVar19 = lVar21;
    pNVar25 = Foundation::__convertErrorToNSError();
    _swift_errorRelease(plVar18);
  }
  pcVar15 = &DAT_100fc6788;
  FUN_1000f7830(&DAT_100fc6788,&DAT_100c4a020);
  pcVar20 = (char *)0x7;
  _swift_allocObject();
  pcVar15[0x18] = '\x02';
  pcVar15[0x19] = '\0';
  pcVar15[0x1a] = '\0';
  pcVar15[0x1b] = '\0';
  pcVar15[0x1c] = '\0';
  pcVar15[0x1d] = '\0';
  pcVar15[0x1e] = '\0';
  pcVar15[0x1f] = '\0';
  pcVar15[0x10] = '\x01';
  pcVar15[0x11] = '\0';
  pcVar15[0x12] = '\0';
  pcVar15[0x13] = '\0';
  pcVar15[0x14] = '\0';
  pcVar15[0x15] = '\0';
  pcVar15[0x16] = '\0';
  pcVar15[0x17] = '\0';
  puVar7 = &DAT_100fc6d88;
  local_130 = pNVar25;
  FUN_1000f7830(&DAT_100fc6d88,&DAT_100c4a980);
  SVar28 = Swift::String::_init(&local_130,puVar7);
  SVar29.bridgeObject = pNVar17;
  SVar29.str = pcVar20;
  Swift::String::append(SVar28,SVar29);
  _swift_bridgeObjectRelease(SVar28.bridgeObject);
  *(undefined **)(pcVar15 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
  pcVar15[0x20] = 'e';
  pcVar15[0x21] = 'r';
  pcVar15[0x22] = 'r';
  pcVar15[0x23] = 'o';
  pcVar15[0x24] = 'r';
  pcVar15[0x25] = ' ';
  pcVar15[0x26] = 'i';
  pcVar15[0x27] = 's';
  pcVar15[0x28] = ' ';
  pcVar15[0x29] = '\0';
  pcVar15[0x2a] = '\0';
  pcVar15[0x2b] = '\0';
  pcVar15[0x2c] = '\0';
  pcVar15[0x2d] = '\0';
  pcVar15[0x2e] = '\0';
  pcVar15[0x2f] = -0x17;
  SVar28.bridgeObject = (void *)0x20;
  SVar28.str = pcVar15;
  separator.bridgeObject = (void *)0xa;
  separator.str = (char *)0xe100000000000000;
  Swift::_print(SVar28,separator);
  _swift_release();
  FUN_100431a50();
  _swift_allocError(&DAT_100ed4790,pcVar15,0,0);
  pcVar15[0] = '\v';
  pcVar15[1] = '\x01';
  _swift_willThrow();
  FUN_10003bf2c(DVar2.unknown,uVar5);
  FUN_10003bf2c(DVar1.unknown,uVar4);
LAB_100440cc8:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100440d58 | FUN_100440d58 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100440d58(NSDataReadingOptions param_1)

{
  Data DVar1;
  undefined8 uVar2;
  undefined *puVar3;
  byte bVar4;
  URL UVar5;
  Data DVar6;
  NSData *pNVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  NSArray *pNVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  Data DVar13;
  undefined8 uVar14;
  undefined2 uVar15;
  long unaff_x20;
  long unaff_x21;
  long lVar16;
  long lVar17;
  long local_d0;
  long local_c8;
  undefined2 *local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  long local_98;
  undefined8 local_90;
  undefined4 local_84;
  undefined8 local_80;
  undefined2 *local_78;
  undefined2 *local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar16 = *(long *)(unaff_x20 + 0x20);
  if (lVar16 != 0) {
    UVar5 = Foundation::URL::typeMetadataAccessor();
    lVar17 = *(long *)(UVar5.unknown + -8);
    param_1.unknown =
         (undefined *)((long)&local_d0 - (*(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0));
    _swift_bridgeObjectRetain(lVar16);
    Foundation::URL::_init();
    _swift_bridgeObjectRelease(lVar16);
    uVar14 = 0;
    DVar6 = Foundation::Data::_init(param_1);
    if (unaff_x21 == 0) {
      local_90 = uVar14;
      (**(code **)(lVar17 + 8))(param_1.unknown,UVar5.unknown);
      lVar16 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x50);
      if (*(long *)(lVar16 + 0x10) == 0) {
        FUN_100431a50();
        _swift_allocError(&DAT_100ed4790,param_1.unknown,0,0);
        uVar15 = 0x103;
LAB_100440ecc:
        *(undefined2 *)param_1.unknown = uVar15;
        _swift_willThrow();
      }
      else {
        if (*(long *)(lVar16 + 0x10) == 1) {
          FUN_100431a50();
          _swift_allocError(&DAT_100ed4790,param_1.unknown,0,0);
          uVar15 = 0x105;
          goto LAB_100440ecc;
        }
        DVar13.unknown = *(undefined **)(lVar16 + 0xb0);
        uVar14 = *(undefined8 *)(lVar16 + 0xb8);
        DVar1.unknown = *(undefined **)(lVar16 + 0x150);
        uVar2 = *(undefined8 *)(lVar16 + 0x158);
        FUN_1001037b4(DVar13.unknown,uVar14);
        FUN_1001037b4(DVar1.unknown,uVar2);
        pNVar7 = Foundation::Data::_bridgeToObjectiveC(DVar6);
        lVar16 = 0;
        _SecCertificateCreateWithData(0,pNVar7);
        puVar8 = (undefined2 *)0x0;
        if (lVar16 == 0) {
          FUN_100431a50();
          _swift_allocError(&DAT_100ed4790,puVar8,0,0);
          *puVar8 = 0x101;
          _swift_willThrow();
LAB_10044124c:
          FUN_10003bf2c(DVar1.unknown,uVar2);
        }
        else {
          pNVar7 = Foundation::Data::_bridgeToObjectiveC(DVar13);
          lVar17 = 0;
          _SecCertificateCreateWithData(0,pNVar7);
          puVar8 = (undefined2 *)0x0;
          local_98 = lVar17;
          if (lVar17 == 0) {
            FUN_100431a50();
            _swift_allocError(&DAT_100ed4790,puVar8,0,0);
            *puVar8 = 0x103;
            _swift_willThrow();
            goto LAB_10044124c;
          }
          local_a8 = DVar13.unknown;
          local_a0 = uVar14;
          pNVar7 = Foundation::Data::_bridgeToObjectiveC(DVar1);
          lVar17 = 0;
          _SecCertificateCreateWithData(0,pNVar7);
          puVar8 = (undefined2 *)0x0;
          if (lVar17 != 0) {
            local_b8 = DVar1.unknown;
            local_b0 = uVar2;
            _SecPolicyCreateBasicX509();
            local_78 = (undefined2 *)0x0;
            local_70 = (undefined2 *)0x0;
            puVar9 = puVar8;
            FUN_1004417e0();
            puVar12 = puVar9;
            _swift_allocObject();
            *(undefined8 *)(puVar12 + 0xc) = 5;
            *(undefined8 *)(puVar12 + 8) = 2;
            *(long *)(puVar12 + 0x10) = lVar17;
            *(long *)(puVar12 + 0x14) = lVar16;
            FUN_10042e4ec(0);
            pNVar10 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
            _swift_release(puVar12);
            _SecTrustCreateWithCertificates(pNVar10,puVar8,&local_70);
            puVar12 = local_70;
            puVar11 = (undefined2 *)0x0;
            if (((int)pNVar10 != 0) || (local_70 == (undefined2 *)0x0)) {
              FUN_100431a50();
              _swift_allocError(&DAT_100ed4790,puVar11,0,0);
              *puVar11 = 0x10c;
              _swift_willThrow();
              FUN_10003bf2c(DVar6.unknown,local_90);
              FUN_10003bf2c(local_a8,local_a0);
              FUN_10003bf2c(local_b8,local_b0);
              goto LAB_100441270;
            }
            _swift_allocObject(puVar9,((ulong)*(uint *)(puVar9 + 0x18) + 7 & 0x1fffffff8) + 0x18,
                               puVar9[0x1a] | 7);
            *(undefined8 *)(puVar9 + 0xc) = 7;
            *(undefined8 *)(puVar9 + 8) = 3;
            *(long *)(puVar9 + 0x10) = local_98;
            *(long *)(puVar9 + 0x14) = lVar17;
            *(long *)(puVar9 + 0x18) = lVar16;
            local_c0 = puVar12;
            pNVar10 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
            _swift_release(puVar9);
            _SecTrustCreateWithCertificates(pNVar10,puVar8,&local_78);
            puVar8 = local_78;
            puVar12 = (undefined2 *)0x0;
            if (((int)pNVar10 != 0) || (local_78 == (undefined2 *)0x0)) {
              FUN_100431a50();
              _swift_allocError(&DAT_100ed4790,puVar12,0,0);
              *puVar12 = 0x10c;
              _swift_willThrow();
              FUN_10003bf2c(DVar6.unknown,local_90);
              FUN_10003bf2c(local_a8,local_a0);
              FUN_10003bf2c(local_b8,local_b0);
              goto LAB_100441270;
            }
            local_84 = 4;
            local_d0 = lVar16;
            local_c8 = lVar17;
            bVar4 = Swift::_stdlib_isOSVersionAtLeast(10,0xe,0);
            puVar3 = local_a8;
            uVar14 = local_b0;
            if ((bVar4 & 1) == 0) {
              puVar12 = local_c0;
              _SecTrustEvaluate(local_c0,&local_84);
              if (((int)puVar12 != 0) ||
                 (_SecTrustEvaluate(puVar8,&local_84), puVar12 = puVar8, (int)puVar8 != 0)) {
                FUN_100431a50();
                _swift_allocError(&DAT_100ed4790,puVar12,0,0);
                *puVar12 = 0x10c;
                _swift_willThrow();
              }
              FUN_10003bf2c(DVar6.unknown,local_90);
              FUN_10003bf2c(puVar3,local_a0);
              FUN_10003bf2c(local_b8,uVar14);
              goto LAB_100441270;
            }
            local_80 = 0;
            puVar12 = local_c0;
            _SecTrustEvaluateWithError(local_c0,&local_80);
            if (((ulong)puVar12 & 1) == 0) {
LAB_100441154:
              FUN_100431a50();
              _swift_allocError(&DAT_100ed4790,puVar12,0,0);
              *puVar12 = 0x10c;
              _swift_willThrow();
            }
            else {
              local_80 = 0;
              _SecTrustEvaluateWithError(puVar8,&local_80);
              puVar12 = puVar8;
              if ((int)puVar8 == 0) goto LAB_100441154;
            }
            FUN_10003bf2c(DVar6.unknown,local_90);
            FUN_10003bf2c(puVar3,local_a0);
            FUN_10003bf2c(local_b8,uVar14);
            goto LAB_100441270;
          }
          FUN_100431a50();
          _swift_allocError(&DAT_100ed4790,puVar8,0,0);
          *puVar8 = 0x105;
          _swift_willThrow();
          FUN_10003bf2c(DVar1.unknown,uVar2);
          DVar13.unknown = local_a8;
          uVar14 = local_a0;
        }
        FUN_10003bf2c(DVar13.unknown,uVar14);
      }
      FUN_10003bf2c(DVar6.unknown,local_90);
      goto LAB_100441270;
    }
    _swift_errorRelease();
    (**(code **)(lVar17 + 8))(param_1.unknown,UVar5.unknown);
  }
  FUN_100431a50();
  _swift_allocError(&DAT_100ed4790,param_1.unknown,0,0);
  *(undefined2 *)param_1.unknown = 0x101;
  _swift_willThrow();
LAB_100441270:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x1004414ac | FUN_1004414ac */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_1004414ac(void)

{
  ulong uVar1;
  NSString *pNVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  ulong local_38;
  
  uVar1 = 0x306e65;
  FUN_1004415ec(0x306e65,0xe300000000000000,1);
  if (uVar1 >> 0x20 == 0) {
LAB_100441518:
    pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    uVar3 = uVar1;
    _IORegistryEntrySearchCFProperty
              (uVar1,"IOService",pNVar2,*(undefined8 *)PTR__kCFAllocatorDefault_100ea9b18,3);
    if (uVar3 != 0) {
      puVar4 = &local_48;
      local_38 = uVar3;
      _swift_dynamicCast(puVar4,&local_38,PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8,
                         PTR___type_metadata_for_Foundation_Data_100ea7300,6);
      if ((int)puVar4 == 0) {
        local_48 = 0;
        uStack_40 = 0xf000000000000000;
      }
      _IOObjectRelease(uVar1);
      goto LAB_1004415d0;
    }
    _IOObjectRelease(uVar1);
  }
  else {
    uVar1 = 0x316e65;
    FUN_1004415ec(0x316e65,0xe300000000000000,1);
    if (uVar1 >> 0x20 == 0) goto LAB_100441518;
    uVar1 = 0x306e65;
    FUN_1004415ec(0x306e65,0xe300000000000000,0);
    if (uVar1 >> 0x20 == 0) goto LAB_100441518;
  }
  local_48 = 0;
  uStack_40 = 0xf000000000000000;
LAB_1004415d0:
  auVar5._8_8_ = uStack_40;
  auVar5._0_8_ = local_48;
  return auVar5;
}



/* Address: 0x1004415ec | FUN_1004415ec */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ulong FUN_1004415ec(char *param_1,void *param_2,byte param_3)

{
  byte bVar1;
  int iVar2;
  ContiguousArray<__int8> CVar3;
  NSString *pNVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  String SVar9;
  uint local_5c;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  bVar1 = Swift::_stdlib_isOSVersionAtLeast(0xc,0,0);
  if ((bVar1 & 1) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (ulong)*(uint *)PTR__kIOMainPortDefault_100ea9e00;
  }
  local_5c = 0;
  SVar9.bridgeObject = param_2;
  SVar9.str = param_1;
  CVar3 = Swift::String::get_utf8CString(SVar9);
  uVar7 = uVar6;
  _IOBSDNameMatching(uVar6,0,CVar3.unknown + 0x20);
  _swift_release(CVar3.unknown);
  if ((((uVar7 != 0) && (_IOServiceGetMatchingServices(uVar6,uVar7,&local_5c), (int)uVar6 == 0)) &&
      (uVar6 = (ulong)local_5c, local_5c != 0)) && (_IOIteratorNext(), (int)uVar6 != 0)) {
    uVar8 = *(undefined8 *)PTR__kCFAllocatorDefault_100ea9b18;
    do {
      pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      uVar7 = uVar6;
      _IORegistryEntryCreateCFProperty(uVar6,pNVar4,uVar8,0);
      if (uVar7 != 0) {
        uVar5 = 0;
        FUN_10042e654(0);
        _swift_dynamicCastUnknownClassUnconditional(uVar7,uVar5,0,0,0);
        iVar2 = (int)uVar7;
        _CFBooleanGetValue();
        if ((bool)(param_3 & 1) != (iVar2 == 0)) {
          uVar7 = 0;
          if (local_5c == 0) goto LAB_1004416bc;
          goto LAB_1004416b8;
        }
      }
      _IOObjectRelease(uVar6);
      uVar6 = (ulong)local_5c;
      _IOIteratorNext();
    } while ((int)uVar6 != 0);
  }
  uVar6 = 0;
  uVar7 = 0x100000000;
  if (local_5c != 0) {
LAB_1004416b8:
    _IOObjectRelease();
  }
LAB_1004416bc:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar7 | uVar6 & 0xffffffff;
}



/* Address: 0x1004417e0 | FUN_1004417e0 */

void FUN_1004417e0(void)

{
  byte bVar1;
  long lVar2;
  
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xd,0,0,0x10,0,0);
  if ((bVar1 & 1) != 0) {
    lVar2 = 0;
    FUN_10042e4ec();
    if (lVar2 != 0) {
      FUN_1000f7830(&DAT_100fc6d98,&DAT_100c4a998);
      return;
    }
  }
  FUN_1000f7830(&DAT_100fc6d90,&DAT_100c4a990);
  return;
}



/* Address: 0x100441844 | FUN_100441844 */

void FUN_100441844(ulong *param_1,ulong param_2,ulong param_3)

{
  if ((param_2 != 0) && (param_3 != param_2)) {
    if (param_3 - param_2 < 0xf) {
      FUN_10017499c();
      param_3 = param_3 & 0xffffffffffffff;
    }
    else if (param_3 - param_2 < 0x7fffffff) {
      FUN_100441978();
      param_3 = param_3 | 0x4000000000000000;
    }
    else {
      FUN_1004419dc();
      param_3 = param_3 | 0x8000000000000000;
    }
    *param_1 = param_2;
    param_1[1] = param_3;
    return;
  }
  *param_1 = 0;
  param_1[1] = 0xc000000000000000;
  return;
}



/* Address: 0x1004418d0 | FUN_1004418d0 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010044190c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_1004418d0(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_1000f7830(&DAT_100fc6eb8,&DAT_100c4a9a0);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (9 < uVar1) {
    uVar1 = 10;
  }
  return uVar1;
}



/* Address: 0x100441934 | FUN_100441934 */

void FUN_100441934(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (DAT_100fc6d80 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_10042e500(0xff);
  puVar2 = PTR_Foundation____C__CFErrorRef_>Swift__Error_100ea78f8;
  _swift_getWitnessTable(PTR_Foundation____C__CFErrorRef_>Swift__Error_100ea78f8,uVar1);
  DAT_100fc6d80 = puVar2;
  return;
}



/* Address: 0x100441978 | FUN_100441978 */

undefined1  [16] FUN_100441978(long param_1,long param_2)

{
  ulong uVar1;
  code *pcVar2;
  __DataStorage *p_Var3;
  undefined1 auVar4 [16];
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = param_2 - param_1;
  }
  p_Var3 = Foundation::__DataStorage::typeMetadataAccessor();
  _swift_allocObject(p_Var3,*(undefined4 *)(p_Var3 + 0x30),*(undefined2 *)(p_Var3 + 0x34));
  p_Var3 = Foundation::__DataStorage::_init(p_Var3,param_1);
  if (uVar1 >> 0x1f == 0) {
    auVar4._0_8_ = uVar1 << 0x20;
    auVar4._8_8_ = p_Var3;
    return auVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1004419dc);
  (*pcVar2)();
}



/* Address: 0x1004419dc | FUN_1004419dc */

void FUN_1004419dc(long param_1,long param_2)

{
  long lVar1;
  __DataStorage *this;
  RangeReference *pRVar2;
  
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_2 - param_1;
  }
  this = Foundation::__DataStorage::typeMetadataAccessor();
  _swift_allocObject(this,*(undefined4 *)(this + 0x30),*(undefined2 *)(this + 0x34));
  Foundation::__DataStorage::_init(this,param_1);
  pRVar2 = Foundation::Data::RangeReference::typeMetadataAccessor();
  _swift_allocObject(pRVar2,0x20,7);
  *(undefined8 *)(pRVar2 + 0x10) = 0;
  *(long *)(pRVar2 + 0x18) = lVar1;
  return;
}



/* Address: 0x100441a50 | FUN_100441a50 */

undefined1  [16] FUN_100441a50(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long local_68 [3];
  undefined *local_50;
  undefined *local_48;
  undefined1 local_40 [16];
  
  puVar2 = &DAT_100fc6ec0;
  FUN_1000f7830(&DAT_100fc6ec0,&DAT_100c4a9a8);
  puVar3 = puVar2;
  local_50 = puVar2;
  FUN_100441ae4();
  plVar4 = local_68;
  local_68[0] = param_1;
  local_48 = puVar3;
  FUN_100004640(plVar4,puVar2);
  lVar1 = *plVar4 + 0x20;
  lVar5 = *(long *)(*plVar4 + 0x10);
  _swift_bridgeObjectRetain(param_1);
  FUN_100441844(local_40,lVar1,lVar1 + lVar5);
  FUN_100004594(local_68);
  return local_40;
}



/* Address: 0x100441ae4 | FUN_100441ae4 */

void FUN_100441ae4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fc6ec8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fc6ec0;
  FUN_1000f8b08(&DAT_100fc6ec0,&DAT_100c4a9a8);
  puVar2 = PTR__Foundation__Swift__Array<undefined>_>Foundation__ContiguousBytes_100ea78a8;
  _swift_getWitnessTable
            (PTR__Foundation__Swift__Array<undefined>_>Foundation__ContiguousBytes_100ea78a8,puVar1)
  ;
  DAT_100fc6ec8 = puVar2;
  return;
}



/* Address: 0x100441b34 | FUN_100441b34 */

void FUN_100441b34(void)

{
  FUN_10043fc4c();
  return;
}



/* Address: 0x100441b48 | FUN_100441b48 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100441b48(void)

{
  return ZEXT816(0x100fc6f10);
}



/* Address: 0x100441b68 | FUN_100441b68 */

bool FUN_100441b68(char param_1)

{
  return param_1 == '\x1f';
}



/* Address: 0x100441b78 | FUN_100441b78 */

uint FUN_100441b78(uint param_1)

{
  return param_1 >> 7 & 1 ^ 1;
}



/* Address: 0x100441b84 | FUN_100441b84 */

uint FUN_100441b84(uint param_1)

{
  return param_1 & 0x7f;
}



/* Address: 0x100441b8c | FUN_100441b8c */

uint FUN_100441b8c(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  
  uVar2 = 8 - (param_2 & 0xff);
  if ((uVar2 & 0xffffff00) == 0) {
    uVar1 = 0;
    if ((uVar2 & 0xf8) == 0) {
      uVar1 = (param_1 & 0xff) >> (ulong)(uVar2 & 7);
    }
    return uVar1;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100441bb8);
  (*pcVar3)();
}



/* Address: 0x100441bb8 | FUN_100441bb8 */

uint FUN_100441bb8(uint param_1)

{
  return param_1 >> 5 & 1;
}



/* Address: 0x100441bc0 | FUN_100441bc0 */

void FUN_100441bc0(long param_1)

{
  undefined *local_18;
  
  local_18 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40;
  _swift_initClassMetadata2(param_1,0,1,&local_18,param_1 + 0x60);
  return;
}



/* Address: 0x100441c04 | FUN_100441c04 */

void FUN_100441c04(long *param_1,long param_2,long *param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_c0 [40];
  undefined1 auStack_98 [24];
  long local_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long local_60;
  
  _swift_beginAccess(param_2 + 0x10,auStack_98,0,0);
  lVar4 = *(long *)(param_2 + 0x10);
  lStack_78 = param_3[1];
  local_80 = *param_3;
  lStack_68 = param_3[3];
  lStack_70 = param_3[2];
  local_60 = param_3[4];
  lVar1 = 0;
  FUN_100449750();
  _swift_allocObject();
  lVar6 = *param_3;
  lVar5 = param_3[3];
  lVar2 = param_3[2];
  *(long *)(lVar1 + 0x30) = param_3[1];
  *(long *)(lVar1 + 0x28) = lVar6;
  *(long *)(lVar1 + 0x40) = lVar5;
  *(long *)(lVar1 + 0x38) = lVar2;
  lVar2 = param_3[3];
  lVar5 = param_3[4];
  *(long *)(lVar1 + 0x48) = lVar5;
  *(long *)(lVar1 + 0x10) = param_3[1] + lVar5;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(long *)(lVar1 + 0x20) = lVar2;
  lVar2 = 0;
  FUN_100443b0c(0,param_4,param_5);
  _swift_allocObject();
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_100444298();
  *(undefined **)(lVar2 + 0x10) = puVar3;
  _swift_bridgeObjectRetain(lVar4);
  FUN_100443b18(param_3,auStack_c0);
  *param_1 = param_2;
  param_1[2] = lStack_78;
  param_1[1] = local_80;
  param_1[4] = lStack_68;
  param_1[3] = lStack_70;
  param_1[5] = local_60;
  param_1[6] = lVar2;
  param_1[7] = lVar1;
  param_1[8] = lVar4;
  return;
}



/* Address: 0x100441d1c | FUN_100441d1c */

long FUN_100441d1c(void)

{
  undefined *puVar1;
  long unaff_x20;
  
  _swift_allocObject();
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_100444298();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  return unaff_x20;
}


